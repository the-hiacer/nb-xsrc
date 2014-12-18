#ifndef RNNDB_NV50_2D_XML
#define RNNDB_NV50_2D_XML

/* Autogenerated file, DO NOT EDIT manually!

This file was generated by the rules-ng-ng headergen tool in this git repository:
http://0x04.net/cgit/index.cgi/rules-ng-ng
git clone git://0x04.net/rules-ng-ng

The rules-ng-ng source files this header was generated from are:
- rnndb/nv50_2d.xml      (  11113 bytes, from 2011-07-09 13:43:58)
- ./rnndb/copyright.xml  (   6452 bytes, from 2011-07-09 13:43:58)
- ./rnndb/nv_object.xml  (  12912 bytes, from 2012-07-12 09:41:09)
- ./rnndb/nvchipsets.xml (   3736 bytes, from 2012-07-12 09:41:09)
- ./rnndb/nv_defs.xml    (   4437 bytes, from 2011-07-09 13:43:58)
- ./rnndb/nv50_defs.xml  (   5468 bytes, from 2011-07-09 13:43:58)

Copyright (C) 2006-2011 by the following authors:
- Artur Huillet <arthur.huillet@free.fr> (ahuillet)
- Ben Skeggs (darktama, darktama_)
- B. R. <koala_br@users.sourceforge.net> (koala_br)
- Carlos Martin <carlosmn@users.sf.net> (carlosmn)
- Christoph Bumiller <e0425955@student.tuwien.ac.at> (calim, chrisbmr)
- Dawid Gajownik <gajownik@users.sf.net> (gajownik)
- Dmitry Baryshkov
- Dmitry Eremin-Solenikov <lumag@users.sf.net> (lumag)
- EdB <edb_@users.sf.net> (edb_)
- Erik Waling <erikwailing@users.sf.net> (erikwaling)
- Francisco Jerez <currojerez@riseup.net> (curro)
- imirkin <imirkin@users.sf.net> (imirkin)
- jb17bsome <jb17bsome@bellsouth.net> (jb17bsome)
- Jeremy Kolb <kjeremy@users.sf.net> (kjeremy)
- Laurent Carlier <lordheavym@gmail.com> (lordheavy)
- Luca Barbieri <luca@luca-barbieri.com> (lb, lb1)
- Maarten Maathuis <madman2003@gmail.com> (stillunknown)
- Marcin Kościelnicki <koriakin@0x04.net> (mwk, koriakin)
- Mark Carey <mark.carey@gmail.com> (careym)
- Matthieu Castet <matthieu.castet@parrot.com> (mat-c)
- nvidiaman <nvidiaman@users.sf.net> (nvidiaman)
- Patrice Mandin <patmandin@gmail.com> (pmandin, pmdata)
- Pekka Paalanen <pq@iki.fi> (pq, ppaalanen)
- Peter Popov <ironpeter@users.sf.net> (ironpeter)
- Richard Hughes <hughsient@users.sf.net> (hughsient)
- Rudi Cilibrasi <cilibrar@users.sf.net> (cilibrar)
- Serge Martin
- Simon Raffeiner
- Stephane Loeuillet <leroutier@users.sf.net> (leroutier)
- Stephane Marchesin <stephane.marchesin@gmail.com> (marcheu)
- sturmflut <sturmflut@users.sf.net> (sturmflut)
- Sylvain Munaut <tnt@246tNt.com>
- Victor Stinner <victor.stinner@haypocalc.com> (haypo)
- Wladmir van der Laan <laanwj@gmail.com> (miathan6)
- Younes Manton <younes.m@gmail.com> (ymanton)

Permission is hereby granted, free of charge, to any person obtaining
a copy of this software and associated documentation files (the
"Software"), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice (including the
next paragraph) shall be included in all copies or substantial
portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE COPYRIGHT OWNER(S) AND/OR ITS SUPPLIERS BE
LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/




#define NV50_2D_DMA_NOTIFY					0x00000180

#define NV50_2D_DMA_DST						0x00000184

#define NV50_2D_DMA_SRC						0x00000188

#define NV50_2D_DMA_COND					0x0000018c

#define NV50_2D_DST_FORMAT					0x00000200

#define NV50_2D_DST_LINEAR					0x00000204

#define NV50_2D_DST_TILE_MODE					0x00000208

#define NV50_2D_DST_DEPTH					0x0000020c

#define NV50_2D_DST_LAYER					0x00000210

#define NV50_2D_DST_PITCH					0x00000214

#define NV50_2D_DST_WIDTH					0x00000218

#define NV50_2D_DST_HEIGHT					0x0000021c

#define NV50_2D_DST_ADDRESS_HIGH				0x00000220

#define NV50_2D_DST_ADDRESS_LOW					0x00000224

#define NV50_2D_UNK228						0x00000228

#define NVC0_2D_UNK228						0x00000228

#define NV50_2D_SRC_FORMAT					0x00000230

#define NV50_2D_SRC_LINEAR					0x00000234

#define NV50_2D_SRC_TILE_MODE					0x00000238

#define NV50_2D_SRC_DEPTH					0x0000023c

#define NV50_2D_SRC_LAYER					0x00000240

#define NVC0_2D_UNK0240						0x00000240

#define NV50_2D_SRC_PITCH					0x00000244
#define NV50_2D_SRC_PITCH__MAX					0x00040000

#define NV50_2D_SRC_WIDTH					0x00000248
#define NV50_2D_SRC_WIDTH__MAX					0x00010000

#define NV50_2D_SRC_HEIGHT					0x0000024c
#define NV50_2D_SRC_HEIGHT__MAX					0x00010000

#define NV50_2D_SRC_ADDRESS_HIGH				0x00000250

#define NV50_2D_SRC_ADDRESS_LOW					0x00000254

#define NV50_2D_UNK258						0x00000258

#define NV50_2D_UNK260						0x00000260

#define NV50_2D_COND_ADDRESS_HIGH				0x00000264

#define NV50_2D_COND_ADDRESS_LOW				0x00000268

#define NV50_2D_COND_MODE					0x0000026c
#define NV50_2D_COND_MODE_NEVER					0x00000000
#define NV50_2D_COND_MODE_ALWAYS				0x00000001
#define NV50_2D_COND_MODE_RES_NON_ZERO				0x00000002
#define NV50_2D_COND_MODE_EQUAL					0x00000003
#define NV50_2D_COND_MODE_NOT_EQUAL				0x00000004

#define NV50_2D_CLIP_X						0x00000280

#define NV50_2D_CLIP_Y						0x00000284

#define NV50_2D_CLIP_W						0x00000288

#define NV50_2D_CLIP_H						0x0000028c

#define NV50_2D_CLIP_ENABLE					0x00000290

#define NV50_2D_COLOR_KEY_FORMAT				0x00000294
#define NV50_2D_COLOR_KEY_FORMAT_16BPP				0x00000000
#define NV50_2D_COLOR_KEY_FORMAT_15BPP				0x00000001
#define NV50_2D_COLOR_KEY_FORMAT_24BPP				0x00000002
#define NV50_2D_COLOR_KEY_FORMAT_30BPP				0x00000003
#define NV50_2D_COLOR_KEY_FORMAT_8BPP				0x00000004
#define NV50_2D_COLOR_KEY_FORMAT_16BPP2				0x00000005
#define NV50_2D_COLOR_KEY_FORMAT_32BPP				0x00000006

#define NV50_2D_COLOR_KEY					0x00000298

#define NV50_2D_COLOR_KEY_ENABLE				0x0000029c

#define NV50_2D_ROP						0x000002a0

#define NV50_2D_BETA1						0x000002a4
#define NV50_2D_BETA1_BETA1__MASK				0x7f800000
#define NV50_2D_BETA1_BETA1__SHIFT				23

#define NV50_2D_BETA4						0x000002a8
#define NV50_2D_BETA4_B__MASK					0x000000ff
#define NV50_2D_BETA4_B__SHIFT					0
#define NV50_2D_BETA4_G__MASK					0x0000ff00
#define NV50_2D_BETA4_G__SHIFT					8
#define NV50_2D_BETA4_R__MASK					0x00ff0000
#define NV50_2D_BETA4_R__SHIFT					16
#define NV50_2D_BETA4_A__MASK					0xff000000
#define NV50_2D_BETA4_A__SHIFT					24

#define NV50_2D_OPERATION					0x000002ac
#define NV50_2D_OPERATION_SRCCOPY_AND				0x00000000
#define NV50_2D_OPERATION_ROP_AND				0x00000001
#define NV50_2D_OPERATION_BLEND					0x00000002
#define NV50_2D_OPERATION_SRCCOPY				0x00000003
#define NV50_2D_OPERATION_ROP					0x00000004
#define NV50_2D_OPERATION_SRCCOPY_PREMULT			0x00000005
#define NV50_2D_OPERATION_BLEND_PREMULT				0x00000006

#define NV50_2D_PATTERN_OFFSET					0x000002b0
#define NV50_2D_PATTERN_OFFSET_X__MASK				0x0000003f
#define NV50_2D_PATTERN_OFFSET_X__SHIFT				0
#define NV50_2D_PATTERN_OFFSET_Y__MASK				0x00003f00
#define NV50_2D_PATTERN_OFFSET_Y__SHIFT				8

#define NV50_2D_PATTERN_SELECT					0x000002b4
#define NV50_2D_PATTERN_SELECT_MONO_8X8				0x00000000
#define NV50_2D_PATTERN_SELECT_MONO_64X1			0x00000001
#define NV50_2D_PATTERN_SELECT_MONO_1X64			0x00000002
#define NV50_2D_PATTERN_SELECT_COLOR				0x00000003

#define NVC0_2D_UNK2DC						0x000002dc

#define NVC0_2D_UNK2E0						0x000002e0

#define NV50_2D_PATTERN_COLOR_FORMAT				0x000002e8
#define NV50_2D_PATTERN_COLOR_FORMAT_16BPP			0x00000000
#define NV50_2D_PATTERN_COLOR_FORMAT_15BPP			0x00000001
#define NV50_2D_PATTERN_COLOR_FORMAT_32BPP			0x00000002
#define NV50_2D_PATTERN_COLOR_FORMAT_8BPP			0x00000003
#define NV50_2D_PATTERN_COLOR_FORMAT_UNK4			0x00000004
#define NV50_2D_PATTERN_COLOR_FORMAT_UNK5			0x00000005
#define NV50_2D_PATTERN_COLOR_FORMAT_UNK6			0x00000006

#define NV50_2D_PATTERN_MONO_FORMAT				0x000002ec
#define NV50_2D_PATTERN_MONO_FORMAT_CGA6			0x00000000
#define NV50_2D_PATTERN_MONO_FORMAT_LE				0x00000001

#define NV50_2D_PATTERN_COLOR(i0)			       (0x000002f0 + 0x4*(i0))
#define NV50_2D_PATTERN_COLOR__ESIZE				0x00000004
#define NV50_2D_PATTERN_COLOR__LEN				0x00000002

#define NV50_2D_PATTERN_BITMAP(i0)			       (0x000002f8 + 0x4*(i0))
#define NV50_2D_PATTERN_BITMAP__ESIZE				0x00000004
#define NV50_2D_PATTERN_BITMAP__LEN				0x00000002

#define NV50_2D_PATTERN_X8R8G8B8(i0)			       (0x00000300 + 0x4*(i0))
#define NV50_2D_PATTERN_X8R8G8B8__ESIZE				0x00000004
#define NV50_2D_PATTERN_X8R8G8B8__LEN				0x00000040
#define NV50_2D_PATTERN_X8R8G8B8_B__MASK			0x000000ff
#define NV50_2D_PATTERN_X8R8G8B8_B__SHIFT			0
#define NV50_2D_PATTERN_X8R8G8B8_G__MASK			0x0000ff00
#define NV50_2D_PATTERN_X8R8G8B8_G__SHIFT			8
#define NV50_2D_PATTERN_X8R8G8B8_R__MASK			0x00ff0000
#define NV50_2D_PATTERN_X8R8G8B8_R__SHIFT			16

#define NV50_2D_PATTERN_R5G6B5(i0)			       (0x00000400 + 0x4*(i0))
#define NV50_2D_PATTERN_R5G6B5__ESIZE				0x00000004
#define NV50_2D_PATTERN_R5G6B5__LEN				0x00000020
#define NV50_2D_PATTERN_R5G6B5_B0__MASK				0x0000001f
#define NV50_2D_PATTERN_R5G6B5_B0__SHIFT			0
#define NV50_2D_PATTERN_R5G6B5_G0__MASK				0x000007e0
#define NV50_2D_PATTERN_R5G6B5_G0__SHIFT			5
#define NV50_2D_PATTERN_R5G6B5_R0__MASK				0x0000f800
#define NV50_2D_PATTERN_R5G6B5_R0__SHIFT			11
#define NV50_2D_PATTERN_R5G6B5_B1__MASK				0x001f0000
#define NV50_2D_PATTERN_R5G6B5_B1__SHIFT			16
#define NV50_2D_PATTERN_R5G6B5_G1__MASK				0x07e00000
#define NV50_2D_PATTERN_R5G6B5_G1__SHIFT			21
#define NV50_2D_PATTERN_R5G6B5_R1__MASK				0xf8000000
#define NV50_2D_PATTERN_R5G6B5_R1__SHIFT			27

#define NV50_2D_PATTERN_X1R5G5B5(i0)			       (0x00000480 + 0x4*(i0))
#define NV50_2D_PATTERN_X1R5G5B5__ESIZE				0x00000004
#define NV50_2D_PATTERN_X1R5G5B5__LEN				0x00000020
#define NV50_2D_PATTERN_X1R5G5B5_B0__MASK			0x0000001f
#define NV50_2D_PATTERN_X1R5G5B5_B0__SHIFT			0
#define NV50_2D_PATTERN_X1R5G5B5_G0__MASK			0x000003e0
#define NV50_2D_PATTERN_X1R5G5B5_G0__SHIFT			5
#define NV50_2D_PATTERN_X1R5G5B5_R0__MASK			0x00007c00
#define NV50_2D_PATTERN_X1R5G5B5_R0__SHIFT			10
#define NV50_2D_PATTERN_X1R5G5B5_B1__MASK			0x001f0000
#define NV50_2D_PATTERN_X1R5G5B5_B1__SHIFT			16
#define NV50_2D_PATTERN_X1R5G5B5_G1__MASK			0x03e00000
#define NV50_2D_PATTERN_X1R5G5B5_G1__SHIFT			21
#define NV50_2D_PATTERN_X1R5G5B5_R1__MASK			0x7c000000
#define NV50_2D_PATTERN_X1R5G5B5_R1__SHIFT			26

#define NV50_2D_PATTERN_Y8(i0)				       (0x00000500 + 0x4*(i0))
#define NV50_2D_PATTERN_Y8__ESIZE				0x00000004
#define NV50_2D_PATTERN_Y8__LEN					0x00000010
#define NV50_2D_PATTERN_Y8_Y0__MASK				0x000000ff
#define NV50_2D_PATTERN_Y8_Y0__SHIFT				0
#define NV50_2D_PATTERN_Y8_Y1__MASK				0x0000ff00
#define NV50_2D_PATTERN_Y8_Y1__SHIFT				8
#define NV50_2D_PATTERN_Y8_Y2__MASK				0x00ff0000
#define NV50_2D_PATTERN_Y8_Y2__SHIFT				16
#define NV50_2D_PATTERN_Y8_Y3__MASK				0xff000000
#define NV50_2D_PATTERN_Y8_Y3__SHIFT				24

#define NVC0_2D_DRAW_COLOR_LONG(i0)			       (0x00000540 + 0x4*(i0))
#define NVC0_2D_DRAW_COLOR_LONG__ESIZE				0x00000004
#define NVC0_2D_DRAW_COLOR_LONG__LEN				0x00000004

#define NV50_2D_DRAW_SHAPE					0x00000580
#define NV50_2D_DRAW_SHAPE_POINTS				0x00000000
#define NV50_2D_DRAW_SHAPE_LINES				0x00000001
#define NV50_2D_DRAW_SHAPE_LINE_STRIP				0x00000002
#define NV50_2D_DRAW_SHAPE_TRIANGLES				0x00000003
#define NV50_2D_DRAW_SHAPE_RECTANGLES				0x00000004

#define NV50_2D_DRAW_COLOR_FORMAT				0x00000584

#define NV50_2D_DRAW_COLOR					0x00000588

#define NV50_2D_UNK58C						0x0000058c
#define NV50_2D_UNK58C_0					0x00000001
#define NV50_2D_UNK58C_1					0x00000010
#define NV50_2D_UNK58C_2					0x00000100
#define NV50_2D_UNK58C_3					0x00001000

#define NV50_2D_DRAW_POINT16					0x000005e0
#define NV50_2D_DRAW_POINT16_X__MASK				0x0000ffff
#define NV50_2D_DRAW_POINT16_X__SHIFT				0
#define NV50_2D_DRAW_POINT16_Y__MASK				0xffff0000
#define NV50_2D_DRAW_POINT16_Y__SHIFT				16

#define NV50_2D_DRAW_POINT32_X(i0)			       (0x00000600 + 0x8*(i0))
#define NV50_2D_DRAW_POINT32_X__ESIZE				0x00000008
#define NV50_2D_DRAW_POINT32_X__LEN				0x00000040

#define NV50_2D_DRAW_POINT32_Y(i0)			       (0x00000604 + 0x8*(i0))
#define NV50_2D_DRAW_POINT32_Y__ESIZE				0x00000008
#define NV50_2D_DRAW_POINT32_Y__LEN				0x00000040

#define NV50_2D_SIFC_BITMAP_ENABLE				0x00000800

#define NV50_2D_SIFC_FORMAT					0x00000804

#define NV50_2D_SIFC_BITMAP_FORMAT				0x00000808
#define NV50_2D_SIFC_BITMAP_FORMAT_I1				0x00000000
#define NV50_2D_SIFC_BITMAP_FORMAT_I4				0x00000001
#define NV50_2D_SIFC_BITMAP_FORMAT_I8				0x00000002

#define NV50_2D_SIFC_BITMAP_LSB_FIRST				0x0000080c

#define NV50_2D_SIFC_BITMAP_LINE_PACK_MODE			0x00000810
#define NV50_2D_SIFC_BITMAP_LINE_PACK_MODE_PACKED		0x00000000
#define NV50_2D_SIFC_BITMAP_LINE_PACK_MODE_ALIGN_BYTE		0x00000001
#define NV50_2D_SIFC_BITMAP_LINE_PACK_MODE_ALIGN_WORD		0x00000002

#define NV50_2D_SIFC_BITMAP_COLOR_BIT0				0x00000814

#define NV50_2D_SIFC_BITMAP_COLOR_BIT1				0x00000818

#define NV50_2D_SIFC_BITMAP_WRITE_BIT0_ENABLE			0x0000081c

#define NV50_2D_SIFC_WIDTH					0x00000838

#define NV50_2D_SIFC_HEIGHT					0x0000083c

#define NV50_2D_SIFC_DX_DU_FRACT				0x00000840

#define NV50_2D_SIFC_DX_DU_INT					0x00000844

#define NV50_2D_SIFC_DY_DV_FRACT				0x00000848

#define NV50_2D_SIFC_DY_DV_INT					0x0000084c

#define NV50_2D_SIFC_DST_X_FRACT				0x00000850

#define NV50_2D_SIFC_DST_X_INT					0x00000854

#define NV50_2D_SIFC_DST_Y_FRACT				0x00000858

#define NV50_2D_SIFC_DST_Y_INT					0x0000085c

#define NV50_2D_SIFC_DATA					0x00000860

#define NV50_2D_UNK0870						0x00000870

#define NV50_2D_UNK0880						0x00000880

#define NV50_2D_UNK0884						0x00000884

#define NV50_2D_UNK0888						0x00000888

#define NV50_2D_BLIT_CONTROL					0x0000088c
#define NV50_2D_BLIT_CONTROL_ORIGIN__MASK			0x00000001
#define NV50_2D_BLIT_CONTROL_ORIGIN__SHIFT			0
#define NV50_2D_BLIT_CONTROL_ORIGIN_CENTER			0x00000000
#define NV50_2D_BLIT_CONTROL_ORIGIN_CORNER			0x00000001
#define NV50_2D_BLIT_CONTROL_FILTER__MASK			0x00000010
#define NV50_2D_BLIT_CONTROL_FILTER__SHIFT			4
#define NV50_2D_BLIT_CONTROL_FILTER_POINT_SAMPLE		0x00000000
#define NV50_2D_BLIT_CONTROL_FILTER_BILINEAR			0x00000010

#define NV50_2D_BLIT_DST_X					0x000008b0

#define NV50_2D_BLIT_DST_Y					0x000008b4

#define NV50_2D_BLIT_DST_W					0x000008b8

#define NV50_2D_BLIT_DST_H					0x000008bc

#define NV50_2D_BLIT_DU_DX_FRACT				0x000008c0

#define NV50_2D_BLIT_DU_DX_INT					0x000008c4

#define NV50_2D_BLIT_DV_DY_FRACT				0x000008c8

#define NV50_2D_BLIT_DV_DY_INT					0x000008cc

#define NV50_2D_BLIT_SRC_X_FRACT				0x000008d0

#define NV50_2D_BLIT_SRC_X_INT					0x000008d4

#define NV50_2D_BLIT_SRC_Y_FRACT				0x000008d8

#define NV50_2D_BLIT_SRC_Y_INT					0x000008dc

#define NVC0_2D_FIRMWARE(i0)				       (0x000008e0 + 0x4*(i0))
#define NVC0_2D_FIRMWARE__ESIZE					0x00000004
#define NVC0_2D_FIRMWARE__LEN					0x00000020


#endif /* RNNDB_NV50_2D_XML */
