/* $Id: epi_lib.c,v 34.2 1995/03/29 13:03:55 ella Exp $ */


/* 
    ************************************************************************
    This Program is the property of the Secretary of State for Defence
    (United Kingdom) acting through the Defence Research Agency (DRA). Use,
    reproduction, production of amended versions and/or transfer of this
    Program is permitted provided that:

  (a)  this legend be preserved on any such reproduction and amended version,
  (b)  any amended version of this Program be clearly marked to show the
       nature of the amendment and of the name of the amending organisation,
  and
  (c)  any recipient  of such reproduction or amended version accept the
       conditions set out in this legend.

                         Crown Copyright, (c)   1993

                             All rights reserved.

    The Secretary of State for Defence (United Kingdom) acting through his
    Defence Research Agency (DRA) gives no warranty that any element of the
    Software is suitable for any purpose and he shall not be liable for any
    loss or damage including loss or damage resulting in injury or death
    howsoever caused which results from the use of the Software, or any
    developments adaptions modifications translations and enhancements
    thereof.

    The original authors may be contacted via email on ella@dra.hmg.gb or by
    writing to ELLA Office, DRA, St Andrews Road, Malvern, Worcs WR14 3PS, UK.
    ************************************************************************

   ------------------------- Change History ---------------------------
30:08:94  33.001  ELLA  NewConFig Install in new configuration management
                                  system old version was 2.1.1.1 
29:03:95  34.002  ELLA  Modcprght Change copyright header
??:??:??   ?.???  ????
*/

/*
$OldLog:	epi_lib.c,v $
 * Revision 2.1.1.1  91/11/05  16:32:37  aap
 * Use of alloca removed (not available on VMS).
 * 
 * Revision 2.1  91/02/25  12:10:19  miker
 * Candidate release 5
 * 
 * Revision 1.1  90/04/17  15:18:06  aap
 * Initial revision
 * 
*/
/* DEC/CMS REPLACEMENT HISTORY, Element EPI_LIB.C */
/* *4     1-FEB-1990 14:16:38 ELLADEV "Updated provisional with fixes for R4B609. IM" */
/* *3    10-AUG-1989 14:54:17 ELLADEV "Definitive release 4.0, first provisional release 4.1. BGH" */
/* *2    21-JAN-1989 11:41:39 ELLADEV "Provisional for Release 4.0 BGH" */
/* *1    10-NOV-1988 11:57:42 ELLADEV "New for Release 4, stored in CMS lib [elladev.cms.epi]" */
/* DEC/CMS REPLACEMENT HISTORY, Element EPI_LIB.C */
/*
*******************************************************************************
				Praxis Systems plc

Module	      :	EPI Library - Library functions

File          :	epi_lib.c
		
Description   :	This module contains the library function of the EPI library.


Changes History

   23.02.88	New module for EPI Version 1. BGH
   07.10.88	Implement actions from Code Review n035.7.47. BGH

*******************************************************************************
*/

static char RcsId[] = "$Id: epi_lib.c,v 34.2 1995/03/29 13:03:55 ella Exp $";	/* Sccs ident for C file */

#include <stdio.h>
#include <varargs.h>
#include "epi.h"
#include "epi_internal.h"

#define MIN_LIB_INCREMENT 2000	/* minimum increase to library size */

/* active functions */
/* ---------------- */

EPI_STATUS epi_clear_library(epi_library)
EPI_LIBRARY epi_library;
{
    EPI_STATUS status;

    INIT_STATUS(status);
    DEBUGSTART_LIB(1, EPI_CLEAR_LIBRARY, epi_library);
    if (!epi_started)
	epi_status_code(status) = EPI_S_NOT_STARTED;
    else if (epi_active)
	epi_status_code(status) = EPI_S_ACTIVE;
    else if (epi_library.ident != EPI_O_LIBRARY)
	epi_status_code(status) = EPI_S_BAD_LIBRARY;
    else
    {
	ACTIVE_START;
	CALL_SUPPORT_FUNCTION(status, EPI_CLEAR_LIBRARY, (epi_library));
	ACTIVE_STOP;
    }
    DEBUGEND_STATUS(2, EPI_CLEAR_LIBRARY, status);
    return (status);
}


EPI_STATUS epi_increase_library(epi_library, increment)
EPI_LIBRARY epi_library;
EPI_UNSIGNED increment;
{
    EPI_STATUS status;

    INIT_STATUS(status);
    DEBUGSTART_LIB_INC(1, EPI_INCREASE_LIBRARY, epi_library, increment);
    if (!epi_started)
	epi_status_code(status) = EPI_S_NOT_STARTED;
    else if (epi_active)
	epi_status_code(status) = EPI_S_ACTIVE;
    else if (epi_library.ident != EPI_O_LIBRARY)
	epi_status_code(status) = EPI_S_BAD_LIBRARY;
    else if (increment < MIN_LIB_INCREMENT)
	epi_status_code(status) = EPI_S_BAD_INCREMENT;
    else
    {
	ACTIVE_START;
	CALL_SUPPORT_FUNCTION(status, EPI_INCREASE_LIBRARY,
			      (epi_library, increment));
	ACTIVE_STOP;
    }
    DEBUGEND_STATUS(2, EPI_INCREASE_LIBRARY, status);
    return (status);
}


EPI_STATUS epi_make_context(epi_library, name)
EPI_LIBRARY epi_library;
EPI_STRING name;
{
    EPI_STATUS status;

    INIT_STATUS(status);
    DEBUGSTART_LIB_NAME(1, EPI_MAKE_CONTEXT, epi_library, name);
    if (!epi_started)
	epi_status_code(status) = EPI_S_NOT_STARTED;
    else if (epi_active)
	epi_status_code(status) = EPI_S_ACTIVE;
    else if (epi_library.ident != EPI_O_LIBRARY)
	epi_status_code(status) = EPI_S_BAD_LIBRARY;
    else if (name == NULL || *name == 0)
	epi_status_code(status) = EPI_S_BAD_STRING;
    else if (!valid_id(name))
	epi_status_code(status) = EPI_S_BAD_CONTEXT_NAME;
    else
    {
	ACTIVE_START;
	CALL_SUPPORT_FUNCTION(status, EPI_MAKE_CONTEXT, (epi_library, name));
	ACTIVE_STOP;
    }
    DEBUGEND_STATUS(2, EPI_MAKE_CONTEXT, status);
    return (status);
}


EPI_STATUS epi_regress_library(epi_library)
EPI_LIBRARY epi_library;
{
    EPI_STATUS status;

    INIT_STATUS(status);
    DEBUGSTART_LIB(1, EPI_REGRESS_LIBRARY, epi_library);
    if (!epi_started)
	epi_status_code(status) = EPI_S_NOT_STARTED;
    else if (epi_active)
	epi_status_code(status) = EPI_S_ACTIVE;
    else if (epi_library.ident != EPI_O_LIBRARY)
	epi_status_code(status) = EPI_S_BAD_LIBRARY;
    else
    {
	ACTIVE_START;
	CALL_SUPPORT_FUNCTION(status, EPI_REGRESS_LIBRARY, (epi_library));
	ACTIVE_STOP;
    }
    DEBUGEND_STATUS(2, EPI_REGRESS_LIBRARY, status);
    return (status);
}


EPI_STATUS epi_save_library(epi_library)
EPI_LIBRARY epi_library;
{
    EPI_STATUS status;

    INIT_STATUS(status);
    DEBUGSTART_LIB(1, EPI_SAVE_LIBRARY, epi_library);
    if (!epi_started)
	epi_status_code(status) = EPI_S_NOT_STARTED;
    else if (epi_active)
	epi_status_code(status) = EPI_S_ACTIVE;
    else if (epi_library.ident != EPI_O_LIBRARY)
	epi_status_code(status) = EPI_S_BAD_LIBRARY;
    else
    {
	ACTIVE_START;
	CALL_SUPPORT_FUNCTION(status, EPI_SAVE_LIBRARY, (epi_library));
	ACTIVE_STOP;
    }
    DEBUGEND_STATUS(2, EPI_SAVE_LIBRARY, status);
    return (status);
}


/* passive functions */
/* ----------------- */

/*
  Sun-4 compiler passes structure parameters as pointers.
  Varargs is not able to untangle this, hence the #ifdef below.
*/

typedef EPI_LIBRARY *EPI_LIBRARY_PTR;

EPI_STATUS epi_get_library_details(va_alist)
 va_dcl
{
    EPI_STATUS status;
    va_list args;
    EPI_LIBRARY epi_library, *epi_library_ptr;
    EPI_MESSAGE_TYPE type;
    int i, count = 0;

    INIT_STATUS(status);
    DEBUGSTART_VARG(1, EPI_GET_LIBRARY_DETAILS);
    if (!epi_started)
	epi_status_code(status) = EPI_S_NOT_STARTED;
    else
    {
	va_start(args);
	/* first argument is the library */
#ifdef sparc
	epi_library_ptr = va_arg(args, EPI_LIBRARY_PTR);
	epi_library = *epi_library_ptr;
#else
	epi_library = va_arg(args, EPI_LIBRARY);
#endif
	/* count the number of arguments */
	while ((type = va_arg(args, EPI_MESSAGE_TYPE)) != 0)
	    count++;
	va_end(args);
	if (epi_library.ident != EPI_O_LIBRARY)
	    epi_status_code(status) = EPI_S_BAD_LIBRARY;
	else
	{
	    EPI_MESSAGE_TYPE *arg_array = NEW_MESSAGE_TYPE_ARRAY(count + 1);
	    EPI_MESSAGE_TYPE *ptr = arg_array;

	    PASSIVE_START;
	    va_start(args);
#ifdef sparc
	    va_arg(args, EPI_LIBRARY_PTR);	/* dont need first parameter */
#else
	    va_arg(args, EPI_LIBRARY);	/* dont need first parameter */
#endif
	    for (i = 0; i < count; i++)
		*ptr++ = va_arg(args, EPI_MESSAGE_TYPE);
	    va_end(args);
	    *ptr = 0;
	    CALL_SUPPORT_FUNCTION(status, EPI_GET_LIBRARY_DETAILS,
				  (epi_library, arg_array));
	    FREE_MESSAGE_TYPE_ARRAY(arg_array);
	    PASSIVE_STOP;
	}
    }
    DEBUGEND_STATUS(2, EPI_GET_LIBRARY_DETAILS, status);
    return (status);
}


/* unpacking functions (not defined as macros) */
/* ------------------------------------------- */

EPI_BOOL epi_same_library(lib1, lib2)
EPI_LIBRARY lib1, lib2;
{
    EPI_BOOL same;

    DEBUGSTART_LIB_LIB(3, EPI_SAME_LIBRARY, lib1, lib2);
    same = (lib1.ident == EPI_O_LIBRARY && lib2.ident == EPI_O_LIBRARY &&
	    !strcmp(epi_library_name(lib1), epi_library_name(lib2)));
    DEBUGEND_BOOL(4, EPI_SAME_LIBRARY, same);
    return (same);
}

/* end */
