/* $Id$
 * $URL$
 *
 * 6x8 bold font
 *
 * Copyright (C) 2006 Till Harbaum <till@harbaum.org>
 * Copyright (C) 2006 The LCD4Linux Team <lcd4linux-devel@users.sourceforge.net>
 *
 * This file is part of LCD4Linux.
 *
 * LCD4Linux is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * LCD4Linux is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 *
 * $Log: font_6x8_bold.h,v $
 * Revision 1.3  2006/08/14 19:24:22  harbaum
 * Umlaut support, added KVV HTTP-User-Agent
 *
 * Revision 1.2  2006/08/13 18:14:03  harbaum
 * Added KVV plugin
 *
 * Revision 1.1  2006/08/09 17:25:34  harbaum
 * Better bar color support and new bold font
 *
 */

#define ______ 0x00
#define _____O 0x01
#define ____O_ 0x02
#define ____OO 0x03
#define ___O__ 0x04
#define ___O_O 0x05
#define ___OO_ 0x06
#define ___OOO 0x07
#define __O___ 0x08
#define __O__O 0x09
#define __O_O_ 0x0a
#define __O_OO 0x0b
#define __OO__ 0x0c
#define __OO_O 0x0d
#define __OOO_ 0x0e
#define __OOOO 0x0f
#define _O____ 0x10
#define _O___O 0x11
#define _O__O_ 0x12
#define _O__OO 0x13
#define _O_O__ 0x14
#define _O_O_O 0x15
#define _O_OO_ 0x16
#define _O_OOO 0x17
#define _OO___ 0x18
#define _OO__O 0x19
#define _OO_O_ 0x1a
#define _OO_OO 0x1b
#define _OOO__ 0x1c
#define _OOO_O 0x1d
#define _OOOO_ 0x1e
#define _OOOOO 0x1f
#define O_____ 0x20
#define O____O 0x21
#define O___O_ 0x22
#define O___OO 0x23
#define O__O__ 0x24
#define O__O_O 0x25
#define O__OO_ 0x26
#define O__OOO 0x27
#define O_O___ 0x28
#define O_O__O 0x29
#define O_O_O_ 0x2a
#define O_O_OO 0x2b
#define O_OO__ 0x2c
#define O_OO_O 0x2d
#define O_OOO_ 0x2e
#define O_OOOO 0x2f
#define OO____ 0x30
#define OO___O 0x31
#define OO__O_ 0x32
#define OO__OO 0x33
#define OO_O__ 0x34
#define OO_O_O 0x35
#define OO_OO_ 0x36
#define OO_OOO 0x37
#define OOO___ 0x38
#define OOO__O 0x39
#define OOO_O_ 0x3a
#define OOO_OO 0x3b
#define OOOO__ 0x3c
#define OOOO_O 0x3d
#define OOOOO_ 0x3e
#define OOOOOO 0x3f

unsigned char Font_6x8_bold[256][8] = {
    [0x20] {______,
	    ______,
	    ______,
	    ______,
	    ______,
	    ______,
	    ______,
	    ______},
    [0x21] {__OO__,
	    __OO__,
	    __OO__,
	    __OO__,
	    ______,
	    ______,
	    __OO__,
	    ______},
    [0x22] {_OO_OO,
	    _OO_OO,
	    _OO_OO,
	    ______,
	    ______,
	    ______,
	    ______,
	    ______},
    [0x23] {__O_O_,
	    __O_O_,
	    _OOOOO,
	    __O_O_,
	    _OOOOO,
	    __O_O_,
	    __O_O_,
	    ______},
    [0x24] {___O__,
	    __OOOO,
	    _O_O__,
	    __OOO_,
	    ___O_O,
	    _OOOO_,
	    ___O__,
	    ______},
    [0x25] {_OO___,
	    _OO_OO,
	    ___OO_,
	    __OO__,
	    _OO___,
	    OO__OO,
	    ____OO,
	    ______},
    [0x26] {__OO__,
	    _OO_OO,
	    _OO_OO,
	    __OO__,
	    _OOO_O,
	    _OO_OO,
	    __OO_O,
	    ______},
    [0x27] {__OO__,
	    __OO__,
	    _OO___,
	    ______,
	    ______,
	    ______,
	    ______,
	    ______},
    [0x28] {___OO_,
	    __OO__,
	    _OO___,
	    _OO___,
	    _OO___,
	    __OO__,
	    ___OO_,
	    ______},
    [0x29] {_OO___,
	    __OO__,
	    ___OO_,
	    ___OO_,
	    ___OO_,
	    __OO__,
	    _OO___,
	    ______},
    [0x2a] {______,
	    ___O__,
	    _O_O_O,
	    __OOO_,
	    _O_O_O,
	    ___O__,
	    ______,
	    ______},
    [0x2b] {______,
	    __OO__,
	    __OO__,
	    _OOOO_,
	    __OO__,
	    __OO__,
	    ______,
	    ______},
    [0x2c] {______,
	    ______,
	    ______,
	    ______,
	    ___OO_,
	    ___OO_,
	    __OO__,
	    ______},
    [0x2d] {______,
	    ______,
	    ______,
	    _OOOOO,
	    ______,
	    ______,
	    ______,
	    ______},
    [0x2e] {______,
	    ______,
	    ______,
	    ______,
	    ______,
	    __OO__,
	    __OO__,
	    ______},
    [0x2f] {______,
	    ____OO,
	    ___OO_,
	    __OO__,
	    _OO___,
	    OO____,
	    ______,
	    ______},
    [0x30] {__OOO_,
	    _OO_OO,
	    _OO_OO,
	    _OO_OO,
	    _OO_OO,
	    _OO_OO,
	    __OOO_,
	    ______},
    [0x31] {___OO_,
	    __OOO_,
	    ___OO_,
	    ___OO_,
	    ___OO_,
	    ___OO_,
	    __OOOO,
	    ______},
    [0x32] {__OOO_,
	    _OO_OO,
	    ____OO,
	    ___OO_,
	    __OO__,
	    _OO___,
	    _OOOOO,
	    ______},
    [0x33] {_OOOOO,
	    ____OO,
	    ___OO_,
	    ____OO,
	    ____OO,
	    _OO_OO,
	    __OOO_,
	    ______},
    [0x34] {____OO,
	    ___OO_,
	    __OO__,
	    _OO_OO,
	    _OOOOO,
	    ____OO,
	    ____OO,
	    ______},
    [0x35] {_OOOOO,
	    _OO___,
	    _OO___,
	    _OOOO_,
	    ____OO,
	    _OO_OO,
	    __OOO_,
	    ______},
    [0x36] {___OO_,
	    __OO__,
	    _OO___,
	    _OOOO_,
	    _OO_OO,
	    _OO_OO,
	    __OOO_,
	    ______},
    [0x37] {_OOOOO,
	    ____OO,
	    ___OO_,
	    __OO__,
	    __OO__,
	    __OO__,
	    __OO__,
	    ______},
    [0x38] {__OOO_,
	    _OO_OO,
	    _OO_OO,
	    __OOO_,
	    _OO_OO,
	    _OO_OO,
	    __OOO_,
	    ______},
    [0x39] {__OOO_,
	    _OO_OO,
	    _OO_OO,
	    __OOOO,
	    ____OO,
	    ___OO_,
	    _OOO__,
	    ______},
    [0x3a] {______,
	    __OO__,
	    __OO__,
	    ______,
	    __OO__,
	    __OO__,
	    ______,
	    ______},
    [0x3b] {______,
	    __OO__,
	    __OO__,
	    ______,
	    __OO__,
	    __OO__,
	    _OO___,
	    ______},
    [0x3c] {____OO,
	    ___OO_,
	    __OO__,
	    _OO___,
	    __OO__,
	    ___OO_,
	    ____OO,
	    ______},
    [0x3d] {______,
	    ______,
	    _OOOOO,
	    ______,
	    _OOOOO,
	    ______,
	    ______,
	    ______},
    [0x3e] {_OO___,
	    __OO__,
	    ___OO_,
	    ____OO,
	    ___OO_,
	    __OO__,
	    _OO___,
	    ______},
    [0x3f] {__OOO_,
	    _OO_OO,
	    ____OO,
	    ___OO_,
	    __OO__,
	    ______,
	    __OO__,
	    ______},
    [0x40] {__OOO_,
	    _OO_OO,
	    ____OO,
	    __O_OO,
	    _OO_OO,
	    _OO_OO,
	    __OOO_,
	    ______},
    [0x41] {__OOO_,
	    _OO_OO,
	    _OO_OO,
	    _OO_OO,
	    _OOOOO,
	    _OO_OO,
	    _OO_OO,
	    ______},
    [0x42] {_OOOO_,
	    _OO_OO,
	    _OO_OO,
	    _OOOO_,
	    _OO_OO,
	    _OO_OO,
	    _OOOO_,
	    ______},
    [0x43] {__OOO_,
	    _OO_OO,
	    _OO___,
	    _OO___,
	    _OO___,
	    _OO_OO,
	    __OOO_,
	    ______},
    [0x44] {_OOO__,
	    _OOOO_,
	    _OO_OO,
	    _OO_OO,
	    _OO_OO,
	    _OOOO_,
	    _OOO__,
	    ______},
    [0x45] {_OOOOO,
	    _OO___,
	    _OO___,
	    _OOOO_,
	    _OO___,
	    _OO___,
	    _OOOOO,
	    ______},
    [0x46] {_OOOOO,
	    _OO___,
	    _OO___,
	    _OOOO_,
	    _OO___,
	    _OO___,
	    _OO___,
	    ______},
    [0x47] {__OOO_,
	    _OO_OO,
	    _OO___,
	    _OO_OO,
	    _OO_OO,
	    _OO_OO,
	    __OOOO,
	    ______},
    [0x48] {_OO_OO,
	    _OO_OO,
	    _OO_OO,
	    _OOOOO,
	    _OO_OO,
	    _OO_OO,
	    _OO_OO,
	    ______},
    [0x49] {_OOOO_,
	    __OO__,
	    __OO__,
	    __OO__,
	    __OO__,
	    __OO__,
	    _OOOO_,
	    ______},
    [0x4a] {___OOO,
	    ____OO,
	    ____OO,
	    ____OO,
	    ____OO,
	    _OO_OO,
	    __OOO_,
	    ______},
    [0x4b] {_OO_OO,
	    _OO_OO,
	    _OOOO_,
	    _OOO__,
	    _OOOO_,
	    _OO_OO,
	    _OO_OO,
	    ______},
    [0x4c] {_OO___,
	    _OO___,
	    _OO___,
	    _OO___,
	    _OO___,
	    _OO___,
	    _OOOOO,
	    ______},
    [0x4d] {_O___O,
	    _OO_OO,
	    _OOOOO,
	    _OOOOO,
	    _OO_OO,
	    _OO_OO,
	    _OO_OO,
	    ______},
    [0x4e] {_O__OO,
	    _OO_OO,
	    _OO_OO,
	    _OOOOO,
	    _OO_OO,
	    _OO_OO,
	    _OO__O,
	    ______},
    [0x4f] {__OOO_,
	    _OO_OO,
	    _OO_OO,
	    _OO_OO,
	    _OO_OO,
	    _OO_OO,
	    __OOO_,
	    ______},
    [0x50] {_OOOO_,
	    _OO_OO,
	    _OO_OO,
	    _OOOO_,
	    _OO___,
	    _OO___,
	    _OO___,
	    ______},
    [0x51] {__OOO_,
	    _OO_OO,
	    _OO_OO,
	    _OO_OO,
	    _OO_O_,
	    _OO_OO,
	    __OO_O,
	    ______},
    [0x52] {_OOOO_,
	    _OO_OO,
	    _OO_OO,
	    _OOOO_,
	    _OOOO_,
	    _OO_OO,
	    _OO_OO,
	    ______},
    [0x53] {__OOOO,
	    _OO___,
	    _OO___,
	    __OOO_,
	    ____OO,
	    ____OO,
	    _OOOO_,
	    ______},
    [0x54] {OOOOOO,
	    __OO__,
	    __OO__,
	    __OO__,
	    __OO__,
	    __OO__,
	    __OO__,
	    ______},
    [0x55] {_OO_OO,
	    _OO_OO,
	    _OO_OO,
	    _OO_OO,
	    _OO_OO,
	    _OO_OO,
	    __OOO_,
	    ______},
    [0x56] {_OO_OO,
	    _OO_OO,
	    _OO_OO,
	    _OO_OO,
	    _OO_OO,
	    __OOO_,
	    ___O__,
	    ______},
    [0x57] {_OO_OO,
	    _OO_OO,
	    _OO_OO,
	    _OOOOO,
	    _OOOOO,
	    _OO_OO,
	    _O___O,
	    ______},
    [0x58] {_OO_OO,
	    _OO_OO,
	    _OO_OO,
	    __OOO_,
	    _OO_OO,
	    _OO_OO,
	    _OO_OO,
	    ______},
    [0x59] {_OO_OO,
	    _OO_OO,
	    _OO_OO,
	    __O_OO,
	    ___OOO,
	    ___OO_,
	    _OOO__,
	    ______},
    [0x5a] {_OOOOO,
	    ____OO,
	    ___OO_,
	    __OOO_,
	    __OO__,
	    _OO___,
	    _OOOOO,
	    ______},
    [0x5b] {_OOOO_,
	    _OO___,
	    _OO___,
	    _OO___,
	    _OO___,
	    _OO___,
	    _OOOO_,
	    ______},
    [0x5c] {_O___O,
	    __O_O_,
	    _OOOOO,
	    ___O__,
	    _OOOOO,
	    ___O__,
	    ___O__,
	    ______},
    [0x5d] {__OOOO,
	    ____OO,
	    ____OO,
	    ____OO,
	    ____OO,
	    ____OO,
	    __OOOO,
	    ______},
    [0x5e] {___O__,
	    __OOO_,
	    _OO_OO,
	    ______,
	    ______,
	    ______,
	    ______,
	    ______},
    [0x5f] {______,
	    ______,
	    ______,
	    ______,
	    ______,
	    ______,
	    _OOOOO,
	    ______},
    [0x60] {_OO___,
	    __OO__,
	    ___OO_,
	    ______,
	    ______,
	    ______,
	    ______,
	    ______},
    [0x61] {______,
	    ______,
	    __OOO_,
	    ____OO,
	    __OOOO,
	    _OO_OO,
	    __OOOO,
	    ______},
    [0x62] {_OO___,
	    _OO___,
	    _OOOO_,
	    _OO_OO,
	    _OO_OO,
	    _OO_OO,
	    _OOOO_,
	    ______},
    [0x63] {______,
	    ______,
	    __OOO_,
	    _OO_OO,
	    _OO___,
	    _OO_OO,
	    __OOO_,
	    ______},
    [0x64] {____OO,
	    ____OO,
	    __OOOO,
	    _OO_OO,
	    _OO_OO,
	    _OO_OO,
	    __OOOO,
	    ______},
    [0x65] {______,
	    ______,
	    __OOO_,
	    _OO_OO,
	    _OOOOO,
	    _OO___,
	    __OOO_,
	    ______},
    [0x66] {___OOO,
	    __OO__,
	    __OO__,
	    _OOOO_,
	    __OO__,
	    __OO__,
	    __OO__,
	    ______},
    [0x67] {______,
	    ______,
	    __OOOO,
	    _OO_OO,
	    _OO_OO,
	    __OOOO,
	    ____OO,
	    __OOO_},
    [0x68] {_OO___,
	    _OO___,
	    _OOOO_,
	    _OO_OO,
	    _OO_OO,
	    _OO_OO,
	    _OO_OO,
	    ______},
    [0x69] {__OO__,
	    ______,
	    _OOO__,
	    __OO__,
	    __OO__,
	    __OO__,
	    _OOOO_,
	    ______},
    [0x6a] {____OO,
	    ______,
	    ___OOO,
	    ____OO,
	    ____OO,
	    _OO_OO,
	    __OOO_,
	    ______},
    [0x6b] {_OO___,
	    _OO___,
	    _OO_OO,
	    _OO_OO,
	    _OOOO_,
	    _OO_OO,
	    _OO_OO,
	    ______},
    [0x6c] {_OOO__,
	    __OO__,
	    __OO__,
	    __OO__,
	    __OO__,
	    __OO__,
	    _OOOO_,
	    ______},
    [0x6d] {______,
	    ______,
	    _OO_O_,
	    _OOOOO,
	    _OOOOO,
	    _OO_OO,
	    _OO_OO,
	    ______},
    [0x6e] {______,
	    ______,
	    _OOOO_,
	    _OO_OO,
	    _OO_OO,
	    _OO_OO,
	    _OO_OO,
	    ______},
    [0x6f] {______,
	    ______,
	    __OOO_,
	    _OO_OO,
	    _OO_OO,
	    _OO_OO,
	    __OOO_,
	    ______},
    [0x70] {______,
	    ______,
	    _OOOO_,
	    _OO_OO,
	    _OO_OO,
	    _OOOO_,
	    _OO___,
	    _OO___},
    [0x71] {______,
	    ______,
	    __OOOO,
	    _OO_OO,
	    _OO_OO,
	    __OOOO,
	    ____OO,
	    ____OO},
    [0x72] {______,
	    ______,
	    _OO_OO,
	    _OOOO_,
	    _OO___,
	    _OO___,
	    _OO___,
	    ______},
    [0x73] {______,
	    ______,
	    __OOOO,
	    _OO___,
	    __OOO_,
	    ____OO,
	    _OOOO_,
	    ______},
    [0x74] {__OO__,
	    __OO__,
	    _OOOO_,
	    __OO__,
	    __OO__,
	    __OO__,
	    ___OO_,
	    ______},
    [0x75] {______,
	    ______,
	    _OO_OO,
	    _OO_OO,
	    _OO_OO,
	    _OO_OO,
	    __OOOO,
	    ______},
    [0x76] {______,
	    ______,
	    _OO_OO,
	    _OO_OO,
	    _OO_OO,
	    __OOO_,
	    ___O__,
	    ______},
    [0x77] {______,
	    ______,
	    _OO_OO,
	    _OO_OO,
	    _OOOOO,
	    _OO_OO,
	    _O___O,
	    ______},
    [0x78] {______,
	    ______,
	    _OO_OO,
	    _OO_OO,
	    __OOO_,
	    _OO_OO,
	    _OO_OO,
	    ______},
    [0x79] {______,
	    ______,
	    _OO_OO,
	    _OO_OO,
	    __OOOO,
	    ____OO,
	    __OOO_,
	    ______},
    [0x7a] {______,
	    ______,
	    _OOOOO,
	    ___OO_,
	    __OO__,
	    _OO___,
	    _OOOOO,
	    ______},
    [0x7b] {___OO_,
	    __OO__,
	    __OO__,
	    _OO___,
	    __OO__,
	    __OO__,
	    ___OO_,
	    ______},
    [0x7c] {__OO__,
	    __OO__,
	    __OO__,
	    __OO__,
	    __OO__,
	    __OO__,
	    __OO__,
	    ______},
    [0x7d] {__OO__,
	    ___OO_,
	    ___OO_,
	    ____OO,
	    ___OO_,
	    ___OO_,
	    __OO__,
	    ______},
    [0x7e] {______,
	    __OO__,
	    ___OO_,
	    _OOOOO,
	    ___OO_,
	    __OO__,
	    ______,
	    ______},

    [0x7f] {______,
	    ___OO_,
	    __OO__,
	    _OOOOO,
	    __OO__,
	    ___OO_,
	    ______,
	    ______},
    [0xb0] {_OOOOO,
	    _OO_OO,
	    _OOOOO,
	    ______,
	    ______,
	    ______,
	    ______,
	    ______},
    [0xe1] {_OO_OO,
	    ______,
	    __OOO_,
	    ____OO,
	    __OOOO,
	    _OO_OO,
	    __OOOO,
	    ______},
    [0xe2] {__OOO_,
	    _OO_OO,
	    _OOOO_,
	    _OO_OO,
	    _OO_OO,
	    _OOOO_,
	    _OO___,
	    ______},
    [0xef] {_OO_OO,
	    ______,
	    __OOO_,
	    _OO_OO,
	    _OO_OO,
	    _OO_OO,
	    __OOO_,
	    ______},
    [0xf5] {_OO_OO,
	    ______,
	    _OO_OO,
	    _OO_OO,
	    _OO_OO,
	    _OO_OO,
	    __OOOO,
	    ______},
};
