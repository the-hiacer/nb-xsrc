/* $Xorg: fontmisc.h,v 1.3 2000/08/17 19:46:38 cpqbld Exp $ */

/*

Copyright 1991, 1998  The Open Group

All Rights Reserved.

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL THE
OPEN GROUP BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN
AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

Except as contained in this notice, the name of The Open Group shall not be
used in advertising or otherwise to promote the sale, use or other dealings
in this Software without prior written authorization from The Open Group.

*/
/* $XFree86: xc/lib/font/include/fontmisc.h,v 3.13 2001/01/17 19:43:32 dawes Exp $ */

/*
 * Author:  Keith Packard, MIT X Consortium
 */

#ifndef _FONTMISC_H_
#define _FONTMISC_H_

#ifndef FONTMODULE
#include <X11/Xfuncs.h>

#ifndef X_NOT_STDC_ENV
#include <stdlib.h>
#else
extern int rand();
#endif
#include <stdio.h>

#ifndef X_NOT_POSIX
#include <unistd.h>
#else
extern int close();
#endif

#endif /* FONTMODULE */

#include "X11/Xdefs.h"


#ifndef LSBFirst
#define LSBFirst	0
#define MSBFirst	1
#endif

#ifndef None
#define None	0l
#endif

#ifndef TRUE
#define TRUE 1
#define FALSE 0
#endif

extern Atom MakeAtom ( char *string, unsigned len, int makeit );
extern int ValidAtom ( Atom atom );
extern char *NameForAtom (Atom atom);

extern pointer Xalloc(unsigned long);
extern pointer Xrealloc(pointer, unsigned long);
extern void Xfree(pointer);
extern pointer Xcalloc(unsigned long);
extern int f_strcasecmp(const char *s1, const char *s2);

#ifndef xalloc
#define xalloc(n)   Xalloc ((unsigned) n)
#define xfree(p)    Xfree ((pointer) p)
#define xrealloc(p,n)	Xrealloc ((pointer)p,n)
#define xcalloc(n,s)    Xcalloc((unsigned) n * (unsigned) s)
#endif
#define lowbit(x) ((x) & (~(x) + 1))

#undef assert
#define assert(x)	((void)0)

#ifndef strcasecmp
#if defined(NEED_STRCASECMP) && !defined(FONTMODULE)
#define strcasecmp(s1,s2) f_strcasecmp(s1,s2)
#endif
#endif

extern void
BitOrderInvert(
    register unsigned char *,
    register int
);

extern void
TwoByteSwap(
    register unsigned char *,
    register int
);

extern void
FourByteSwap(
    register unsigned char *,
    register int
);

extern int
RepadBitmap (
    char*, 
    char*,
    unsigned, 
    unsigned,
    int, 
    int
);

extern void CopyISOLatin1Lowered(
    char * /*dest*/,
    char * /*source*/,
    int /*length*/
);

extern void register_fpe_functions(void);

#endif /* _FONTMISC_H_ */
