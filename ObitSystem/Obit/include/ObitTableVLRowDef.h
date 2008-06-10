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
/*  Define the basic components of the ObitTableRow structure       */
/*  This is intended to be included in a class structure definition   */
/**
 * \file ObitTableVLRowDef.h
 * ObitTableVLRow structure members for derived classes.
 */
#include "ObitTableRowDef.h"  /* Parent class definitions */
/** RA (J2000) */
gdouble  Ra2000;
/** Dec (J2000) */
gdouble  Dec2000;
/** Peak Ipol */
gfloat  PeakInt;
/** Fitted major axis size */
gfloat  MajorAxis;
/** Fitted minor axis siz */
gfloat  MinorAxis;
/** Fitted PA */
gfloat  PosAngle;
/** Center Q flux density */
gfloat  QCenter;
/** enter U flux density */
gfloat  UCenter;
/** Integrated polarized flux density */
gfloat  PFlux;
/** Ipol RMS uncertainty */
gfloat  IRMS;
/** RMS (sigma) in Qpol and Upol */
gfloat  PolRMS;
/** RMS of Ipol residual */
gfloat  ResRMS;
/** Peak in Ipol residual */
gfloat  ResPeak;
/** Integrated Ipol residual */
gfloat  ResFlux;
/** Center x position in pixels in FIELD */
gfloat  CenterX;
/** Center y position in pixels in FIELD */
gfloat  CenterY;
/** Julian date on which entry was derived from image. */
oint  JDProcess;
/** Name of survey field */
gchar*  Field;
/** status 0=normal, 1=modified, -1=flagged */
olong  status;
