/* $Id:  $   */
/* DO NOT EDIT - file generated by ObitTables.pl                      */
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
/*  Define the basic components of the ObitTableCT  structure          */
/*  This is intended to be included in a class structure definition   */
/**
 * \file ObitTableCTDef.h
 * ObitTableCT structure members for derived classes.
 */
#include "ObitTableDef.h"  /* Parent class definitions */
/** Revision number of the table definition. */
oint  revision;
/** Observation code */
gchar  obscode[MAXKEYCHARTABLECT];
/** Reference date as "YYYYMMDD" */
gchar  RefDate[MAXKEYCHARTABLECT];
/** The number of Stokes(?) */
oint  numStkd;
/** First Stokes(?) */
oint  stk1;
/** The number of Bands(?). */
oint  numBand;
/** The number of spectral channels. */
oint  numChan;
/** Reference Frequency. */
gdouble  refFreq;
/** Channel bandwidth. */
gfloat  chanBW;
/** Reference Pixel.. */
gfloat  refPixl;
/** Who knows? */
gchar  CSrvr[MAXKEYCHARTABLECT];
/** Who knows? */
gchar  CVersn[MAXKEYCHARTABLECT];
/** Who knows? */
gchar  AVersn[MAXKEYCHARTABLECT];
/** Who knows? */
gchar  IVersn[MAXKEYCHARTABLECT];
/** Who knows? */
gchar  EVersn[MAXKEYCHARTABLECT];
/** Acceleration due to gravity m/s/s */
gdouble  accelgrv;
/** Earth Flattening??? */
gdouble  Eflat;
/** Earth radius */
gdouble  earthrad;
/** ??? */
gdouble  mmsems;
/** Ephemeris epoch??? */
oint  ephepoc;
/** TIDELAG */
gdouble  tidelag;
/** GAUSS */
gdouble  gauss;
/** GMMOON */
gdouble  gmmoon;
/** GMSUN */
gdouble  gmsun;
/** LOVE_H */
gdouble  loveH;
/** LOVE_L */
gdouble  loveL;
/** PRE_DATA */
gdouble  preData;
/** REL_DATA */
gdouble  relData;
/** TIDALUT1 */
oint  tidalut1;
/** TSECAU */
gdouble  tsecau;
/** U-GRV-CN */
oint  UGrvCn;
/** Speed of light m/s */
oint  vlight;
/** Column offset for The center time. in table record */
olong  TimeOff;
/** Physical column number for The center time. in table record */
olong  TimeCol;
/** Column offset for UT1-UTC in table record */
olong  ut1utcOff;
/** Physical column number for UT1-UTC in table record */
olong  ut1utcCol;
/** Column offset for IAT-UTC in table record */
olong  iatutcOff;
/** Physical column number for IAT-UTC in table record */
olong  iatutcCol;
/** Column offset for A1-UTC in table record */
olong  a1utcOff;
/** Physical column number for A1-UTC in table record */
olong  a1utcCol;
/** Column offset for UT1 TYPE in table record */
olong  ut1TypeOff;
/** Physical column number for UT1 TYPE in table record */
olong  ut1TypeCol;
/** Column offset for WOB TYPES in table record */
olong  wobTypeOff;
/** Physical column number for WOB TYPES in table record */
olong  wobTypeCol;
/** Column offset for DPSI in table record */
olong  dpsiOff;
/** Physical column number for DPSI in table record */
olong  dpsiCol;
/** Column offset for DDPSI in table record */
olong  ddpsiOff;
/** Physical column number for DDPSI in table record */
olong  ddpsiCol;
/** Column offset for DEPS in table record */
olong  depsOff;
/** Physical column number for DEPS in table record */
olong  depsCol;
/** Column offset for DDEPS in table record */
olong  ddepsOff;
/** Physical column number for DDEPS in table record */
olong  ddepsCol;
/** Column offset for Earth pole wobble in table record */
olong  wobXYOff;
/** Physical column number for Earth pole wobble in table record */
olong  wobXYCol;
