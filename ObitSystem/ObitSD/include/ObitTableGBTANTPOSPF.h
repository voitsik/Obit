/* $Id:  $  */
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
#ifndef ObitTableGBTANTPOSPF_H 
#define ObitTableGBTANTPOSPF_H 

#include "Obit.h"
#include "ObitErr.h"
#include "ObitTable.h"
#include "ObitData.h"

/*-------- Obit: Merx mollis mortibus nuper ------------------*/
/**
 * \file ObitTableGBTANTPOSPF.h
 * ObitTableGBTANTPOSPF class definition.
 *
 * Table in GBT archive/Antenna file.
 * This class contains tabular data and allows access.
 * This class is derived from the ObitTable class. 
 * Prime Focus receivers.
 *
 * This class contains tabular data and allows access.
 * ObitTableGBTANTPOSPF" 
 * An ObitTableGBTANTPOSPF is the front end to a persistent disk resident structure.
 * This class is derived from the ObitTable class.
 *
 * \section TableDataStorage Table data storage
 * In memory tables are stored in a fashion similar to how they are 
 * stored on disk - in large blocks in memory rather than structures.
 * Due to the word alignment requirements of some machines, they are 
 * stored by order of the decreasing element size: 
 * double, float long, int, short, char rather than the logical order.
 * The details of the storage in the buffer are kept in the 
 * #ObitTableGBTANTPOSPFDesc.
 *
 * In addition to the normal tabular data, a table will have a "_status"
 * column to indicate the status of each row.
 * The status value is read from and written to (some modification) AIPS 
 * tables but are not written to externally generated FITS tables which
 * don't have these colummns.  It will be written to Obit generated tables
 * which will have these columns.
 * Status values:
 * \li status = 0 => normal
 * \li status = 1 => row has been modified (or created) and needs to be
 *                   written.
 * \li status = -1 => row has been marked invalid.
 *
 * \section ObitTableGBTANTPOSPFSpecification Specifying desired data transfer parameters
 * The desired data transfers are specified in the member ObitInfoList.
 * There are separate sets of parameters used to specify the FITS 
 * data files.
 * In the following an ObitInfoList entry is defined by 
 * the name in double quotes, the data type code as an #ObitInfoType enum 
 * and the dimensions of the array (? => depends on application).
 * To specify whether the underlying data files are FITS
 * \li "FileType" OBIT_int (1,1,1) OBIT_IO_FITS 
 * which are values of an #ObitIOType enum defined in ObitIO.h.
 *
 * The following apply to both types of files:
 * \li "nRowPIO", OBIT_int, Max. Number of visibilities per 
 *     "Read" or "Write" operation.  Default = 1.
 *
 * \subsection TableFITS FITS files
 * This implementation uses cfitsio which allows using, in addition to 
 * regular FITS images, gzip compressed files, pipes, shared memory 
 * and a number of other input forms.
 * The convenience Macro #ObitTableGBTANTPOSPFSetFITS simplifies specifying the 
 * desired data.
 * Binary tables are used for storing visibility data in FITS.
 * For accessing FITS files the following entries in the ObitInfoList 
 * are used:
 * \li "FileName" OBIT_string (?,1,1) FITS file name.
 * \li "TabName"  OBIT_string (?,1,1) Table name (e.g. "AIPS CC").
 * \li "Ver"      OBIT_int    (1,1,1) Table version number
 *
 *
 * \section ObitTableGBTANTPOSPFaccess Creators and Destructors
 * An ObitTableGBTANTPOSPF can be created using newObitTableGBTANTPOSPFValue which attaches the 
 * table to an ObitData for the object.  
 * If the output ObitTableGBTANTPOSPF has previously been specified, including file information,
 * then ObitTableGBTANTPOSPFCopy will copy the disk resident as well as the memory 
 * resident information.
 *
 * A copy of a pointer to an ObitTableGBTANTPOSPF should always be made using the
 * ObitTableGBTANTPOSPFRef function which updates the reference count in the object.
 * Then whenever freeing an ObitTableGBTANTPOSPF or changing a pointer, the function
 * ObitTableGBTANTPOSPFUnref will decrement the reference count and destroy the object
 * when the reference count hits 0.
 *
 * \section ObitTableGBTANTPOSPFUsage I/O
 * Visibility data is available after an input object is "Opened"
 * and "Read".
 * I/O optionally uses a buffer attached to the ObitTableGBTANTPOSPF or some external
 * location.
 * To Write an ObitTableGBTANTPOSPF, create it, open it, and write.
 * The object should be closed to ensure all data is flushed to disk.
 * Deletion of an ObitTableGBTANTPOSPF after its final unreferencing will automatically
 * close it.
 */

/*--------------Class definitions-------------------------------------*/

/** Number of characters for Table keyword */
 #define MAXKEYCHARTABLEANTPOSPF 24

/** ObitTableGBTANTPOSPF Class structure. */
typedef struct {
#include "ObitTableGBTANTPOSPFDef.h"   /* this class definition */
} ObitTableGBTANTPOSPF;

/** ObitTableGBTANTPOSPFRow Class structure. */
typedef struct {
#include "ObitTableGBTANTPOSPFRowDef.h"   /* this class row definition */
} ObitTableGBTANTPOSPFRow;

/*----------------- Macroes ---------------------------*/
/** 
 * Macro to unreference (and possibly destroy) an ObitTableGBTANTPOSPF
 * returns an ObitTableGBTANTPOSPF*.
 * in = object to unreference
 */
#define ObitTableGBTANTPOSPFUnref(in) ObitUnref (in)

/** 
 * Macro to reference (update reference count) an ObitTableGBTANTPOSPF.
 * returns an ObitTableGBTANTPOSPF*.
 * in = object to reference
 */
#define ObitTableGBTANTPOSPFRef(in) ObitRef (in)

/** 
 * Macro to determine if an object is the member of this or a 
 * derived class.
 * Returns TRUE if a member, else FALSE
 * in = object to reference
 */
#define ObitTableGBTANTPOSPFIsA(in) ObitIsA (in, ObitTableGBTANTPOSPFGetClass())

/** 
 * Macro to unreference (and possibly destroy) an ObitTableGBTANTPOSPFRow
 * returns an ObitTableGBTANTPOSPFRow*.
 * in = object to unreference
 */
#define ObitTableGBTANTPOSPFRowUnref(in) ObitUnref (in)

/** 
 * Macro to reference (update reference count) an ObitTableGBTANTPOSPFRow.
 * returns an ObitTableGBTANTPOSPFRow*.
 * in = object to reference
 */
#define ObitTableGBTANTPOSPFRowRef(in) ObitRef (in)

/** 
 * Macro to determine if an object is the member of this or a 
 * derived class.
 * Returns TRUE if a member, else FALSE
 * in = object to reference
 */
#define ObitTableGBTANTPOSPFRowIsA(in) ObitIsA (in, ObitTableGBTANTPOSPFRowGetClass())

/*---------------Public functions---------------------------*/
/*----------------Table Row Functions ----------------------*/
/** Public: Row Class initializer. */
void ObitTableGBTANTPOSPFRowClassInit (void);

/** Public: Constructor. */
ObitTableGBTANTPOSPFRow* newObitTableGBTANTPOSPFRow (ObitTableGBTANTPOSPF *table);

/** Public: ClassInfo pointer */
gconstpointer ObitTableGBTANTPOSPFRowGetClass (void);

/*------------------Table Functions ------------------------*/
/** Public: Class initializer. */
void ObitTableGBTANTPOSPFClassInit (void);

/** Public: Constructor. */
ObitTableGBTANTPOSPF* newObitTableGBTANTPOSPF (gchar* name);

/** Public: Constructor from values. */
ObitTableGBTANTPOSPF* 
newObitTableGBTANTPOSPFValue (gchar* name, ObitData *file, olong *ver,
  		     ObitIOAccess access,
                    
		     ObitErr *err);

/** Public: ClassInfo pointer */
gconstpointer ObitTableGBTANTPOSPFGetClass (void);

/** Public: Copy (deep) constructor. */
ObitTableGBTANTPOSPF* ObitTableGBTANTPOSPFCopy  (ObitTableGBTANTPOSPF *in, ObitTableGBTANTPOSPF *out, 
			   ObitErr *err);

/** Public: Copy (shallow) constructor. */
ObitTableGBTANTPOSPF* ObitTableGBTANTPOSPFClone (ObitTableGBTANTPOSPF *in, ObitTableGBTANTPOSPF *out);

/** Public: Convert an ObitTable to an ObitTableGBTANTPOSPF */
ObitTableGBTANTPOSPF* ObitTableGBTANTPOSPFConvert  (ObitTable *in);

/** Public: Create ObitIO structures and open file */
ObitIOCode ObitTableGBTANTPOSPFOpen (ObitTableGBTANTPOSPF *in, ObitIOAccess access, 
			  ObitErr *err);

/** Public: Read a table row */
ObitIOCode 
ObitTableGBTANTPOSPFReadRow  (ObitTableGBTANTPOSPF *in, olong iANTPOSPFRow, ObitTableGBTANTPOSPFRow *row,
		     ObitErr *err);

/** Public: Init a table row for write */
void 
ObitTableGBTANTPOSPFSetRow  (ObitTableGBTANTPOSPF *in, ObitTableGBTANTPOSPFRow *row,
		     ObitErr *err);

/** Public: Write a table row */
ObitIOCode 
ObitTableGBTANTPOSPFWriteRow  (ObitTableGBTANTPOSPF *in, olong iANTPOSPFRow, ObitTableGBTANTPOSPFRow *row,
		     ObitErr *err);

/** Public: Close file and become inactive */
ObitIOCode ObitTableGBTANTPOSPFClose (ObitTableGBTANTPOSPF *in, ObitErr *err);

/*----------- ClassInfo Structure -----------------------------------*/
/**
 * ClassInfo Structure.
 * Contains class name, a pointer to any parent class
 * (NULL if none) and function pointers.
 */
typedef struct  {
#include "ObitTableGBTANTPOSPFClassDef.h"
} ObitTableGBTANTPOSPFClassInfo; 

/**
 * ClassInfo Structure For TableObitTableGBTANTPOSPFRow.
 * Contains class name, a pointer to any parent class
 * (NULL if none) and function pointers.
 */
typedef struct  {
#include "ObitTableGBTANTPOSPFRowClassDef.h"
} ObitTableGBTANTPOSPFRowClassInfo; 
#endif /* ObitTableGBTANTPOSPF_H */ 
