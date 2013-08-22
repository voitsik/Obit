/* $Id$  */
/*--------------------------------------------------------------------*/
/*;  Copyright (C) 2013                                               */
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
/*;  Correspondence this software should be addressed as follows:     */
/*;         Internet email: bcotton@nrao.edu.                         */
/*;         Postal address: William Cotton                            */
/*;                         National Radio Astronomy Observatory      */
/*;                         520 Edgemont Road                         */
/*;                         Charlottesville, VA 22903-2475 USA        */
/*--------------------------------------------------------------------*/
/*  Define the basic components of the ObitGBTDCRPortInfo structure.    */
/*  This is intended to be included in a class structure definition   */
/**
 * \file ObitGBTVEGASPortInfoListDef.h
 * ObitGBTVEGASPortInfoDef structure members for derived classes.
 */
#include "ObitDef.h"  /* Parent class definitions */
#define MAXNUMVEGASPORT 50
/** Number of VEGASPorts in this structure */
olong nVEGASPort;
/** bank */
gchar bank[MAXNUMVEGASPORT] ;
/** port number */
gshort port[MAXNUMVEGASPORT];
/** The average measured power for port */
ofloat  measpwr[MAXNUMVEGASPORT];
/** The TONE/NOISE switch value.  This will be either 'TONE' or 'NOISE' */
gchar*  tone[MAXNUMVEGASPORT];
