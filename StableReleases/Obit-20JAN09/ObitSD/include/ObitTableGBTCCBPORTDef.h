/* $Id$  */
/* DO NOT EDIT - file generated by ObitSDTables.pl                    */
/*--------------------------------------------------------------------*/
/*;  Copyright (C)  2008                                              */
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
/*;Correspondence about this software should be addressed as follows: */
/*;         Internet email: bcotton@nrao.edu.                        */
/*;         Postal address: William Cotton                            */
/*;                         National Radio Astronomy Observatory      */
/*;                         520 Edgemont Road                         */
/*;                         Charlottesville, VA 22903-2475 USA        */
/*--------------------------------------------------------------------*/
/*  Define the basic components of the ObitTableGBTCCBPORT  structure          */
/*  This is intended to be included in a class structure definition   */
/**
 * \file ObitTableGBTCCBPORTDef.h
 * ObitTableGBTCCBPORT structure members for derived classes.
 */
#include "ObitTableDef.h"  /* Parent class definitions */
/** Column offset for Always has value of ``A'' but included for compliance with GBT standards. in table record */
olong  bankOff;
/** Physical column number for Always has value of ``A'' but included for compliance with GBT standards. in table record */
olong  bankCol;
/** Column offset for Identifier for a physical input to the CCB in table record */
olong  portOff;
/** Physical column number for Identifier for a physical input to the CCB in table record */
olong  portCol;
/** Column offset for Which daughter card a given input port is associated with. in table record */
olong  slaveOff;
/** Physical column number for Which daughter card a given input port is associated with. in table record */
olong  slaveCol;