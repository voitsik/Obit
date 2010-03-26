/* $Id: ObitTableOTFScanDataDef.h 69 2009-01-21 16:00:01Z bill.cotton $  */
/* DO NOT EDIT - file generated by ObitSDTables.pl                    */
/*--------------------------------------------------------------------*/
/*;  Copyright (C)  2009                                              */
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
/*  Define the basic components of the ObitTableOTFScanData  structure          */
/*  This is intended to be included in a class structure definition   */
/**
 * \file ObitTableOTFScanDataDef.h
 * ObitTableOTFScanData structure members for derived classes.
 */
#include "ObitTableDef.h"  /* Parent class definitions */
/** The number of detectors. */
oint  numDet;
/** Originator of file */
gchar  origin[MAXKEYCHARTABLEOTFScanData];
/** Name of object */
gchar  object[MAXKEYCHARTABLEOTFScanData];
/** Telescope used */
gchar  teles[MAXKEYCHARTABLEOTFScanData];
/** Date (yyyy-mm-dd) of observation */
gchar  obsdat[MAXKEYCHARTABLEOTFScanData];
/** Celestial coordiate equinox */
ofloat  epoch;
/** Data units */
gchar  bunit[MAXKEYCHARTABLEOTFScanData];
/** Observed Right Ascension in deg. */
odouble  obsra;
/** Observed declination in deg. */
odouble  obsdec;
/** Gaussian FWHM of telescope beam size. */
ofloat  beamSize;
/** Diameter of telescope in meters. */
ofloat  diameter;
/** Type of data: ``DCR'': GBT DCR, ``SP'': GBT Spectral processor */
gchar  OTFType[MAXKEYCHARTABLEOTFScanData];
/** Column offset for The center time. in table record */
olong  TimeOff;
/** Physical column number for The center time. in table record */
olong  TimeCol;
/** Column offset for The integration time. in table record */
olong  TimeIOff;
/** Physical column number for The integration time. in table record */
olong  TimeICol;
/** Column offset for Celestial target, as index in target table. in table record */
olong  TargetOff;
/** Physical column number for Celestial target, as index in target table. in table record */
olong  TargetCol;
/** Column offset for Observing scan index. in table record */
olong  ScanOff;
/** Physical column number for Observing scan index. in table record */
olong  ScanCol;
/** Column offset for Nominal RA of array center in table record */
olong  RAOff;
/** Physical column number for Nominal RA of array center in table record */
olong  RACol;
/** Column offset for Nominal Dec of array center in table record */
olong  DecOff;
/** Physical column number for Nominal Dec of array center in table record */
olong  DecCol;
/** Column offset for Rotation of array on sky (parallactic angle) in table record */
olong  rotateOff;
/** Physical column number for Rotation of array on sky (parallactic angle) in table record */
olong  rotateCol;
/** Column offset for if > 0 then the cal source is on. in table record */
olong  calOff;
/** Physical column number for if > 0 then the cal source is on. in table record */
olong  calCol;
/** Column offset for Detector sample data per detector ) in table record */
olong  dataOff;
/** Physical column number for Detector sample data per detector ) in table record */
olong  dataCol;