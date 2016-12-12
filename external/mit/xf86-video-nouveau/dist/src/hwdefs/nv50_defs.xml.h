#ifndef _HOME_SKEGGSB_GIT_ENVYTOOLS_RNNDB_NV50_DEFS_XML
#define _HOME_SKEGGSB_GIT_ENVYTOOLS_RNNDB_NV50_DEFS_XML

/* Autogenerated file, DO NOT EDIT manually!

This file was generated by the rules-ng-ng headergen tool in this git repository:
http://0x04.net/cgit/index.cgi/rules-ng-ng
git clone git://0x04.net/rules-ng-ng

The rules-ng-ng source files this header was generated from are:
- /home/skeggsb/git/envytools/rnndb/nv50_texture.xml (   7947 bytes, from 2011-10-22 08:01:09)
- /home/skeggsb/git/envytools/rnndb/copyright.xml    (   6452 bytes, from 2011-10-22 08:01:09)
- /home/skeggsb/git/envytools/rnndb/nvchipsets.xml   (   3617 bytes, from 2011-10-22 08:01:09)
- /home/skeggsb/git/envytools/rnndb/nv50_defs.xml    (   5468 bytes, from 2011-10-22 08:01:09)

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


#define NV50_SURFACE_FORMAT_BITMAP				0x0000001c
#define NV50_SURFACE_FORMAT_UNK1D				0x0000001d
#define NV50_SURFACE_FORMAT_RGBA32_FLOAT			0x000000c0
#define NV50_SURFACE_FORMAT_RGBA32_SINT				0x000000c1
#define NV50_SURFACE_FORMAT_RGBA32_UINT				0x000000c2
#define NV50_SURFACE_FORMAT_RGBX32_FLOAT			0x000000c3
#define NV50_SURFACE_FORMAT_RGBX32_SINT				0x000000c4
#define NV50_SURFACE_FORMAT_RGBX32_UINT				0x000000c5
#define NV50_SURFACE_FORMAT_RGBA16_UNORM			0x000000c6
#define NV50_SURFACE_FORMAT_RGBA16_SNORM			0x000000c7
#define NV50_SURFACE_FORMAT_RGBA16_SINT				0x000000c8
#define NV50_SURFACE_FORMAT_RGBA16_UINT				0x000000c9
#define NV50_SURFACE_FORMAT_RGBA16_FLOAT			0x000000ca
#define NV50_SURFACE_FORMAT_RG32_FLOAT				0x000000cb
#define NV50_SURFACE_FORMAT_RG32_SINT				0x000000cc
#define NV50_SURFACE_FORMAT_RG32_UINT				0x000000cd
#define NV50_SURFACE_FORMAT_RGBX16_FLOAT			0x000000ce
#define NV50_SURFACE_FORMAT_BGRA8_UNORM				0x000000cf
#define NV50_SURFACE_FORMAT_BGRA8_SRGB				0x000000d0
#define NV50_SURFACE_FORMAT_RGB10_A2_UNORM			0x000000d1
#define NV50_SURFACE_FORMAT_RGB10_A2_UINT			0x000000d2
#define NV50_SURFACE_FORMAT_RGBA8_UNORM				0x000000d5
#define NV50_SURFACE_FORMAT_RGBA8_SRGB				0x000000d6
#define NV50_SURFACE_FORMAT_RGBA8_SNORM				0x000000d7
#define NV50_SURFACE_FORMAT_RGBA8_SINT				0x000000d8
#define NV50_SURFACE_FORMAT_RGBA8_UINT				0x000000d9
#define NV50_SURFACE_FORMAT_RG16_UNORM				0x000000da
#define NV50_SURFACE_FORMAT_RG16_SNORM				0x000000db
#define NV50_SURFACE_FORMAT_RG16_SINT				0x000000dc
#define NV50_SURFACE_FORMAT_RG16_UINT				0x000000dd
#define NV50_SURFACE_FORMAT_RG16_FLOAT				0x000000de
#define NV50_SURFACE_FORMAT_BGR10_A2_UNORM			0x000000df
#define NV50_SURFACE_FORMAT_R11G11B10_FLOAT			0x000000e0
#define NV50_SURFACE_FORMAT_R32_SINT				0x000000e3
#define NV50_SURFACE_FORMAT_R32_UINT				0x000000e4
#define NV50_SURFACE_FORMAT_R32_FLOAT				0x000000e5
#define NV50_SURFACE_FORMAT_BGRX8_UNORM				0x000000e6
#define NV50_SURFACE_FORMAT_BGRX8_SRGB				0x000000e7
#define NV50_SURFACE_FORMAT_B5G6R5_UNORM			0x000000e8
#define NV50_SURFACE_FORMAT_BGR5_A1_UNORM			0x000000e9
#define NV50_SURFACE_FORMAT_RG8_UNORM				0x000000ea
#define NV50_SURFACE_FORMAT_RG8_SNORM				0x000000eb
#define NV50_SURFACE_FORMAT_RG8_SINT				0x000000ec
#define NV50_SURFACE_FORMAT_RG8_UINT				0x000000ed
#define NV50_SURFACE_FORMAT_R16_UNORM				0x000000ee
#define NV50_SURFACE_FORMAT_R16_SNORM				0x000000ef
#define NV50_SURFACE_FORMAT_R16_SINT				0x000000f0
#define NV50_SURFACE_FORMAT_R16_UINT				0x000000f1
#define NV50_SURFACE_FORMAT_R16_FLOAT				0x000000f2
#define NV50_SURFACE_FORMAT_R8_UNORM				0x000000f3
#define NV50_SURFACE_FORMAT_R8_SNORM				0x000000f4
#define NV50_SURFACE_FORMAT_R8_SINT				0x000000f5
#define NV50_SURFACE_FORMAT_R8_UINT				0x000000f6
#define NV50_SURFACE_FORMAT_A8_UNORM				0x000000f7
#define NV50_SURFACE_FORMAT_BGR5_X1_UNORM			0x000000f8
#define NV50_SURFACE_FORMAT_RGBX8_UNORM				0x000000f9
#define NV50_SURFACE_FORMAT_RGBX8_SRGB				0x000000fa
#define NV50_SURFACE_FORMAT_BGR5_X1_UNORM_UNKFB			0x000000fb
#define NV50_SURFACE_FORMAT_BGR5_X1_UNORM_UNKFC			0x000000fc
#define NV50_SURFACE_FORMAT_BGRX8_UNORM_UNKFD			0x000000fd
#define NV50_SURFACE_FORMAT_BGRX8_UNORM_UNKFE			0x000000fe
#define NV50_SURFACE_FORMAT_Y32_UINT_UNKFF			0x000000ff
#define NV50_ZETA_FORMAT_Z32_FLOAT				0x0000000a
#define NV50_ZETA_FORMAT_Z16_UNORM				0x00000013
#define NV50_ZETA_FORMAT_S8_Z24_UNORM				0x00000014
#define NV50_ZETA_FORMAT_Z24_X8_UNORM				0x00000015
#define NV50_ZETA_FORMAT_Z24_S8_UNORM				0x00000016
#define NV50_ZETA_FORMAT_Z24_C8_UNORM				0x00000018
#define NV50_ZETA_FORMAT_Z32_S8_X24_FLOAT			0x00000019
#define NV50_ZETA_FORMAT_Z24_X8_S8_C8_X16_UNORM			0x0000001d
#define NV50_ZETA_FORMAT_Z32_X8_C8_X16_FLOAT			0x0000001e
#define NV50_ZETA_FORMAT_Z32_S8_C8_X16_FLOAT			0x0000001f
#define NV50_QUERY__SIZE					0x00000010
#define NV50_QUERY_COUNTER					0x00000000

#define NV50_QUERY_RES						0x00000004

#define NV50_QUERY_TIME						0x00000008


#endif /* _HOME_SKEGGSB_GIT_ENVYTOOLS_RNNDB_NV50_DEFS_XML */
