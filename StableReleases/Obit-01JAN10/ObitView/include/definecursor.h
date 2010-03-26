/* $Id: definecursor.h 2 2008-06-10 15:32:27Z bill.cotton $ */
/* bitmaps for XFITSview image display cursor */
/*-----------------------------------------------------------------------
*  Copyright (C) 1996
*  Associated Universities, Inc. Washington DC, USA.
*  This program is free software; you can redistribute it and/or
*  modify it under the terms of the GNU General Public License as
*  published by the Free Software Foundation; either version 2 of
*  the License, or (at your option) any later version.
*
*  This program is distributed in the hope that it will be useful,
*  but WITHOUT ANY WARRANTY; without even the implied warranty of
*  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*  GNU General Public License for more details.
*-----------------------------------------------------------------------*/

#ifndef DEFINECURSOR_H
#define DEFINECURSOR_H

#define ImageCursor_width  16
#define ImageCursor_height 16
#define ImageCursor_x_hot   7
#define ImageCursor_y_hot   7
static unsigned char ImageCursor_bits[]={
/* byteswap???   0x02, 0x80, 0x02, 0x80, 0x02, 0x80, 0x02, 0x80, 0x02, 0x80, 
   0x01, 0x00, 0xf8, 0x3f, 0x04, 0x20, 0xf8, 0x3f, 0x01, 0x00,
   0x02, 0x80, 0x02, 0x80, 0x02, 0x80, 0x02, 0x80, 0x02, 0x80, 0x02, 0x80}; */
   0x80, 0x02, 0x80, 0x02, 0x80, 0x02, 0x80, 0x02, 0x80, 0x02, 
   0x00, 0x01, 0x3f, 0xf8, 0x20, 0x04, 0x3f, 0xf8, 0x00, 0x01, 
   0x80, 0x02, 0x80, 0x02, 0x80, 0x02, 0x80, 0x02, 0x80, 0x02, 0x80, 0x02}; 
static unsigned char ImageCursorMask_bits[]={
/* byteswap??   0x03, 0x80, 0x03, 0x80, 0x03, 0x80, 0x03, 0x80, 0x03, 0x80, 
   0x01, 0x00, 0xf8, 0x3f, 0xfc, 0x7f, 0xf8, 0x3f, 0x01, 0x00,
   0x03, 0x80, 0x03, 0x80, 0x03, 0x80, 0x03, 0x80, 0x03, 0x80, 0x03, 0x80}; */
   0x80, 0x03, 0x80, 0x03, 0x80, 0x03, 0x80, 0x03, 0x80, 0x03, 
   0x00, 0x01, 0x3f, 0xf8, 0x7f, 0xfc, 0x3f, 0xf8, 0x00, 0x01,
   0x80, 0x03, 0x80, 0x03, 0x80, 0x03, 0x80, 0x03, 0x80, 0x03, 0x80, 0x03};

#endif /*  DEFINECURSOR_H */