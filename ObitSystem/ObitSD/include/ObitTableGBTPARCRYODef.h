/* $Id: ObitTableGBTPARCRYODef.h,v 1.1 2006/10/26 13:49:24 bcotton Exp $  */
/* DO NOT EDIT - file generated by ObitSDTables.pl                    */
/*--------------------------------------------------------------------*/
/*;  Copyright (C)  2006                                              */
/*;  Associated Universities, Inc. Washington DC, USA.                */
/*;                                                                   */
/*;  This program is free software; you can redistribute it and/or    */
/*;  modify it under the terms of the GNU General Public License as   */
/*;  published by the Free Software Foundation; either version 2 of   */
/*;  the License, or (at your option) any later version.              */
/*;                                                                   */
/*;  This program is distributed in the hope that it will be useful,  */
/*;  but WITHOUT ANY WARRANTY; without even the implied warranty of   */
/*;  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the    */
/*;  GNU General Public License for more details.                     */
/*;                                                                   */
/*;  You should have received a copy of the GNU General Public        */
/*;  License along with this program; if not, write to the Free       */
/*;  Software Foundation, Inc., 675 Massachusetts Ave, Cambridge,     */
/*;  MA 02139, USA.                                                   */
/*;                                                                   */
/*;  Correspondence this software should be addressed as follows:     */
/*;         Internet email: bcotton@nrao.edu.                         */
/*;         Postal address: William Cotton                            */
/*;                         National Radio Astronomy Observatory      */
/*;                         520 Edgemont Road                         */
/*;                         Charlottesville, VA 22903-2475 USA        */
/*--------------------------------------------------------------------*/
/*  Define the basic components of the ObitTableGBTPARCRYO  structure          */
/*  This is intended to be included in a class structure definition   */
/**
 * \file ObitTableGBTPARCRYODef.h
 * ObitTableGBTPARCRYO structure members for derived classes.
 */
#include "ObitTableDef.h"  /* Parent class definitions */
/** Column offset for Time (mjd) at which value is relevant in table record */
olong  timestampOff;
/** Physical column number for Time (mjd) at which value is relevant in table record */
olong  timestampCol;
/** Column offset for Monitor value in table record */
olong  valueOff;
/** Physical column number for Monitor value in table record */
olong  valueCol;
/** Column offset for Name of monitor point in table record */
olong  descOff;
/** Physical column number for Name of monitor point in table record */
olong  descCol;
