/* $Id: ObitBDFDataDef.h 2 2008-06-10 15:32:27Z bill.cotton $ */
/*--------------------------------------------------------------------*/
/*;  Copyright (C) 2010                                               */
/*;  Associated Universities, Inc. Washington DC, USA.                */
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
/*;         Internet email: bcotton@nrao.edu.                         */
/*;         Postal address: William Cotton                            */
/*;                         National Radio Astronomy Observatory      */
/*;                         520 Edgemont Road                         */
/*;                         Charlottesville, VA 22903-2475 USA        */
/*--------------------------------------------------------------------*/
/*  Define the basic components of the ObitBDFData structure         */
/*  This is intended to be included in a class structure definition  */
/*  This class accesses data in the EVLA BDF format                  */
/**
 * \file ObitBDFDataDef.h
 * ObitBDFData structure members for this and any derived classes.
 */
#include "ObitDef.h"  /* Parent class instance definitions */
/** ASDM OBject */
ObitSDMData *SDMData;
/**Spectral Window Array  */
ASDMSpectralWindowArray *SWArray;
/** Scan info struct */
BDFScanInfo *ScanInfo;
/** Integration  info struct */
BDFIntegInfo *IntegInfo;
/** data file name */
gchar *DataFile;
/** Obit File for I/O */
ObitFile *file;
/** Size of file */
ObitFilePos fileSize;
/** Number of bytes in the buffer */
olong nBytesInBuffer;
/** I/O and parsing buffer */
gchar *buffer;
/* Current buffer pointer */
gchar *current;
/** Have crossData? */
gboolean haveCrossData;
/** Number of floats in crossCorr */
olong nCrossCorr;
/** Cross correlation data for integration */
ofloat *crossCorr;
/** Have autoData? */
gboolean haveAutoData;
/** Number of floats in autoCorr */
olong nAutoCorr;
/** Auto correlation data for integration */
ofloat *autoCorr;
/** Have Flag data? */
gboolean haveFlag;
/** Flag data for integration */
olong *flagData;
/** Have actualTimes data? */
gboolean haveActualTimes;
/** actualTimes data for integration */
olong *actualTimesData;
/** Have actualDurations data? */
gboolean haveActualDurations;
/** actualDurations data for integration */
olong *actualDurationsData;
/** Have weight data? */
gboolean haveWeight;
/** Weight data for integration */
olong *weightData;
/**UV descriptor for data extracted  */
ObitUVDesc *desc;
/** Number of integrations in scan - not in BDF */
olong numInteg;
/** Number of Baselines */
olong numBaseline;
/** current  Baseline  */
olong currBaseline;
/** Number of Basebands */
olong numBaseband;
/** Number of SpectralWindows */
olong numSpectralWindow;
/** Number of Spectral Channels */
olong numSpectralChann;
/** Number of cross polarization products */
olong numCPoln;
/** Number of auto polarization products */
olong numAPoln;
/** Number of antennas */
olong nant;
/** Next first antenna of baseline ID (0-rel) */
olong ant1;
/** Next second antenna of baseline ID */
olong ant2;
/** Next crosscorrelation vis in buffer */
olong nextCVis;
/** Next top antenna of baseline ID (0-rel) */
olong topAnt;
/** Next autocorrelation vis in buffer */
olong nextAVis;
/** Antenna number per Id */
olong *antNo;
/** Current scan source number */
olong sourceNo;
/** Current  time */
ofloat currTime;
/** Current  integration time */
ofloat currIntTime;
/** Size of BDF crosscorrelation visibility  */
olong crossVisSize;
/** Frequency increment in cross correlations */
olong cincf;
/**  IF increment in cross correlations */
olong cincif;
/** Stokes offsets in cross correlations for RR, LL, RL, LR */
olong *coffs;
/** IF (spectral window) offsets in cross correlations */
olong *coffif;
/** Size of BDF autocorrelation visibility  */
olong autoVisSize;
/** Frequency increment in auto correlations */
olong aincf;
/**  IF increment in auto correlations */
olong aincif;
/** Stokes offsets in auto correlations for RR, LL, RL */
olong *aoffs;
/** IF (spectral window) offsets in auto correlations */
olong *aoffif;
/** IF (spectral window) sideband, true = LSB */
gboolean *isLSB;
