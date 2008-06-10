/* $Id: ObitRPCClassDef.h,v 1.1 2005/08/03 12:11:42 bcotton Exp $  */
/*--------------------------------------------------------------------*/
/*;  Copyright (C) 2005                                               */
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
/*  Define the basic components of the ObitRPC ClassInfo structure */
/* This is intended to be included in a classInfo structure definition  */
/* and to be used as the template for generating new classes derived    */
/* from Obit.                                                           */
#include "ObitClassDef.h"  /* Parent class ClassInfo definition file */
/** Function pointer to Client Constructor. */
ObitRPCCreateClientFP ObitRPCCreateClient;
/** Function pointer to Server Constructor. */
ObitRPCCreateServerFP ObitRPCCreateServer;
/** Total number of active clients (1 allowed) */
olong numberClient;
/** Total number of active servers (1 allowed) */
olong numberServer;

