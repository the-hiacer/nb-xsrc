/* lists.c -- Buffer list handling routines -*- c -*-
 * Created: Mon Apr 19 20:54:22 1999 by faith@precisioninsight.com
 *
 * Copyright 1999 Precision Insight, Inc., Cedar Park, Texas.
 * Copyright 2000 VA Linux Systems, Inc., Sunnyvale, California.
 * All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice (including the next
 * paragraph) shall be included in all copies or substantial portions of the
 * Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * PRECISION INSIGHT AND/OR ITS SUPPLIERS BE LIABLE FOR ANY CLAIM, DAMAGES OR
 * OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 * 
 * Authors:
 *    Rickard E. (Rik) Faith <faith@valinux.com>
 *
 */

#define __NO_VERSION__
#include "drmP.h"

int drm_waitlist_create(drm_waitlist_t *bl, int count)
{
	DRM_DEBUG("%d\n", count);
	if (bl->count) return EINVAL;
	
	bl->count      = count;
	bl->bufs       = drm_alloc((bl->count + 2) * sizeof(*bl->bufs),
				   DRM_MEM_BUFLISTS);
	bl->rp	       = bl->bufs;
	bl->wp	       = bl->bufs;
	bl->end	       = &bl->bufs[bl->count+1];
	simple_lock_init(&bl->write_lock);
	simple_lock_init(&bl->read_lock);
	return 0;
}

int drm_waitlist_destroy(drm_waitlist_t *bl)
{
	DRM_DEBUG("\n");
	if (bl->rp != bl->wp) return EINVAL;
	if (bl->bufs) drm_free(bl->bufs,
			       (bl->count + 2) * sizeof(*bl->bufs),
			       DRM_MEM_BUFLISTS);
	bl->count = 0;
	bl->bufs  = NULL;
	bl->rp	  = NULL;
	bl->wp	  = NULL;
	bl->end	  = NULL;
	return 0;
}

int drm_waitlist_put(drm_waitlist_t *bl, drm_buf_t *buf)
{							
	int	      left;
	int	      s;

	left = DRM_LEFTCOUNT(bl);
	DRM_DEBUG("put %d (%d left, rp = %p, wp = %p)\n",
		  buf->idx, left, bl->rp, bl->wp);
	if (!left) {
		DRM_ERROR("Overflow while adding buffer %d from pid %d\n",
			  buf->idx, buf->pid);
		return EINVAL;
	}
#if DRM_DMA_HISTOGRAM
	getnanotime(&buf->time_queued);
#endif
	buf->list	 = DRM_LIST_WAIT;
	
	simple_lock(&bl->write_lock);
	s = spldrm();
	*bl->wp = buf;
	if (++bl->wp >= bl->end) bl->wp = bl->bufs;
	splx(s);
	simple_unlock(&bl->write_lock);
	
	return 0;
}

drm_buf_t *drm_waitlist_get(drm_waitlist_t *bl)
{
	drm_buf_t     *buf;
	int	       s;

	simple_lock(&bl->read_lock);
	s = spldrm();
	buf = *bl->rp;
	if (bl->rp == bl->wp) {
		splx(s);
		simple_unlock(&bl->read_lock);
		return NULL;
	}				     
	if (++bl->rp >= bl->end) bl->rp = bl->bufs;
	splx(s);
	simple_unlock(&bl->read_lock);
	
	DRM_DEBUG("get %d\n", buf->idx);
	return buf;
}

int drm_freelist_create(drm_freelist_t *bl, int count)
{
	DRM_DEBUG("\n");
	atomic_set(&bl->count, 0);
	bl->next      = NULL;
	bl->waiting   = 0;
	bl->low_mark  = 0;
	bl->high_mark = 0;
	atomic_set(&bl->wfh,   0);
/*	bl->lock	= SPIN_LOCK_UNLOCKED; */
	++bl->initialized;
	return 0;
}

int drm_freelist_destroy(drm_freelist_t *bl)
{
	DRM_DEBUG("\n");
	atomic_set(&bl->count, 0);
	bl->next = NULL;
	return 0;
}

int drm_freelist_put(drm_device_t *dev, drm_freelist_t *bl, drm_buf_t *buf)
{
	unsigned int	 old;
	unsigned int	 new;
	char		 failed;
	int		 count = 0;
	drm_device_dma_t *dma = dev->dma;

	if (!dma) {
		DRM_ERROR("No DMA support\n");
		return 1;
	}

	if (buf->waiting || buf->pending || buf->list == DRM_LIST_FREE) {
		DRM_ERROR("Freed buffer %d: w%d, p%d, l%d\n",
			  buf->idx, buf->waiting, buf->pending, buf->list);
	}
	DRM_DEBUG("%d, count = %d, wfh = %d, w%d, p%d\n",
		  buf->idx, atomic_read(&bl->count), atomic_read(&bl->wfh),
		  buf->waiting, buf->pending);
	if (!bl) return 1;
#if DRM_DMA_HISTOGRAM
	getnanotime(&buf->time_freed);
	drm_histogram_compute(dev, buf);
#endif
	buf->list	= DRM_LIST_FREE;
/*
	do {
		old	  = (unsigned long)bl->next;
		buf->next = (void *)old;
		new	  = (unsigned long)buf;
		_DRM_CAS(&bl->next, old, new, failed);
		if (++count > DRM_LOOPING_LIMIT) {
			DRM_ERROR("Looping\n");
			return 1;
		}
	} while (failed);
*/

	simple_lock(&bl->lock);
	buf->next	= bl->next;
	bl->next	= buf;
	simple_unlock(&bl->lock);

	atomic_inc(&bl->count);
	if (atomic_read(&bl->count) > dma->buf_count) {
		DRM_ERROR("%d of %d buffers free after addition of %d\n",
			  atomic_read(&bl->count), dma->buf_count, buf->idx);
		return 1;
	}
				/* Check for high water mark */
	if (atomic_read(&bl->wfh) && atomic_read(&bl->count)>=bl->high_mark) {
		atomic_set(&bl->wfh, 0);
		if (bl->waiting)
			wakeup(&bl->waiting);
	}
	return 0;
}

static drm_buf_t *drm_freelist_try(drm_freelist_t *bl)
{
	unsigned int	  old;
	unsigned int	  new;
	char		  failed;
	drm_buf_t	  *buf;
	int		  count = 0;

	if (!bl) return NULL;
	
				/* Get buffer */
/*
	do {
		old = (unsigned int)bl->next;
		if (!old) {
			return NULL;
		}
		new = (unsigned long)bl->next->next;
		_DRM_CAS(&bl->next, old, new, failed);
		if (++count > DRM_LOOPING_LIMIT) {
			DRM_ERROR("Looping\n");
			return NULL;
		}
	} while (failed);
	atomic_dec(&bl->count);
	
	buf	  = (drm_buf_t *)old;
*/
	simple_lock(&bl->lock);
	if(!bl->next){
		simple_unlock(&bl->lock);
		return NULL;
	}
	buf	= bl->next;
	bl->next = bl->next->next;
	simple_unlock(&bl->lock);
	atomic_dec(&bl->count);
	buf->next = NULL;
	buf->list = DRM_LIST_NONE;
	DRM_DEBUG("%d, count = %d, wfh = %d, w%d, p%d\n",
		  buf->idx, atomic_read(&bl->count), atomic_read(&bl->wfh),
		  buf->waiting, buf->pending);
	if (buf->waiting || buf->pending) {
		DRM_ERROR("Free buffer %d: w%d, p%d, l%d\n",
			  buf->idx, buf->waiting, buf->pending, buf->list);
	}
	
	return buf;
}

drm_buf_t *drm_freelist_get(drm_freelist_t *bl, int block)
{
	drm_buf_t	  *buf	= NULL;
	int		   error;

	if (!bl || !bl->initialized) return NULL;
	
				/* Check for low water mark */
	if (atomic_read(&bl->count) <= bl->low_mark) /* Became low */
		atomic_set(&bl->wfh, 1);
	if (atomic_read(&bl->wfh)) {
		DRM_DEBUG("Block = %d, count = %d, wfh = %d\n",
			  block, atomic_read(&bl->count),
			  atomic_read(&bl->wfh));
		if (block) {
			atomic_inc(&bl->waiting);
			for (;;) {
				if (!atomic_read(&bl->wfh)
				    && (buf = drm_freelist_try(bl))) break;
				error = tsleep(&bl->waiting, PZERO|PCATCH,
					       "drmfg", 0);
				if (error)
					break;
			}
			atomic_dec(&bl->waiting);
		}
		return buf;
	}
		
	DRM_DEBUG("Count = %d, wfh = %d\n",
		  atomic_read(&bl->count), atomic_read(&bl->wfh));
	return drm_freelist_try(bl);
}
