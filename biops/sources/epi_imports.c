/* $Id: epi_imports.c,v 34.2 1995/03/29 13:03:54 ella Exp $ */


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
$OldLog:	epi_imports.c,v $
 * Revision 2.1.1.1  91/11/05  16:31:39  aap
 * Use of alloca removed (not available on VMS).
 * 
 * Revision 2.1  91/02/25  12:09:59  miker
 * Candidate release 5
 * 
 * Revision 1.1  90/04/17  15:17:12  aap
 * Initial revision
 * 
*/
/* DEC/CMS REPLACEMENT HISTORY, Element EPI_IMPORTS.C */
/* *5     1-FEB-1990 14:16:34 ELLADEV "Updated provisional with fixes for R4B609. IM" */
/* *4    10-AUG-1989 14:54:08 ELLADEV "Definitive release 4.0, first provisional release 4.1. BGH" */
/* *3    21-JAN-1989 11:41:30 ELLADEV "Provisional for Release 4.0 BGH" */
/* *2    30-NOV-1988 15:18:00 ELLADEV "updated draft version for Release 4.0" */
/* *1    10-NOV-1988 11:57:33 ELLADEV "New for Release 4, stored in CMS lib [elladev.cms.epi]" */
/* DEC/CMS REPLACEMENT HISTORY, Element EPI_IMPORTS.C */
/*
*******************************************************************************
				Praxis Systems plc

Module	      :	EPI Library - imports functions

File          :	epi_imports.c
		
Description   :	This module contains the imports functions of the EPI library.


Changes History

   15.08.88	New module for EPI Version 1. BGH
   07.10.88	Implement actions from Code Review n035.7.47. BGH
   23.11.88	epi_simulate renamed epi_simulate_imports, epi_dump_ellanet
   		renamed epi_dump_imports. epi_dump_imports takes 3 extra
		bool parameters. BGJ

*******************************************************************************
*/

static char RcsId[] = "$Id: epi_imports.c,v 34.2 1995/03/29 13:03:54 ella Exp $";	/* Sccs ident for C file */

#include <stdio.h>
#include <varargs.h>
#include "epi.h"
#include "epi_internal.h"

/* active functions */
/* ---------------- */

EPI_STATUS epi_compile(imports, filename)
EPI_IMPORTS imports;
EPI_STRING filename;
{
    EPI_STATUS status;

    INIT_STATUS(status);
    DEBUGSTART_IMPORTS_FILENAME(1, EPI_COMPILE, imports, filename);
    if (!epi_started)
	epi_status_code(status) = EPI_S_NOT_STARTED;
    else if (epi_active)
	epi_status_code(status) = EPI_S_ACTIVE;
    else if (imports.ident != EPI_O_IMPORTS)
	epi_status_code(status) = EPI_S_BAD_IMPORTS;
    else if (filename == NULL || *filename == 0)
	epi_status_code(status) = EPI_S_BAD_STRING;
    else
    {
	ACTIVE_START;
	CALL_SUPPORT_FUNCTION(status, EPI_COMPILE,
			      (imports, filename));
	ACTIVE_STOP;
    }
    DEBUGEND_STATUS(2, EPI_COMPILE, status);
    return (status);
}


EPI_STATUS epi_copy_imports(imports, name)
EPI_IMPORTS imports;
EPI_STRING name;
{
    EPI_STATUS status;

    INIT_STATUS(status);
    DEBUGSTART_IMPORTS_NAME(1, EPI_COPY_IMPORTS, imports, name);
    if (!epi_started)
	epi_status_code(status) = EPI_S_NOT_STARTED;
    else if (epi_active)
	epi_status_code(status) = EPI_S_ACTIVE;
    else if (imports.ident != EPI_O_IMPORTS ||
	     imports.context.ident != EPI_O_CONTEXT)
	epi_status_code(status) = EPI_S_BAD_IMPORTS;
    else if (name == NULL || *name == 0)
	epi_status_code(status) = EPI_S_BAD_STRING;
    else if (!valid_id(name))
	epi_status_code(status) = EPI_S_BAD_IMPORTS_NAME;
    else
    {
	ACTIVE_START;
	CALL_SUPPORT_FUNCTION(status, EPI_COPY_IMPORTS, (imports, name));
	ACTIVE_STOP;
    }
    DEBUGEND_STATUS(2, EPI_COPY_IMPORTS, status);
    return (status);
}


EPI_STATUS epi_erase_imports(imports)
EPI_IMPORTS imports;
{
    EPI_STATUS status;

    INIT_STATUS(status);
    DEBUGSTART_IMPORTS(1, EPI_ERASE_IMPORTS, imports);
    if (!epi_started)
	epi_status_code(status) = EPI_S_NOT_STARTED;
    else if (epi_active)
	epi_status_code(status) = EPI_S_ACTIVE;
    else if (imports.ident != EPI_O_IMPORTS ||
	     imports.context.ident != EPI_O_CONTEXT)
	epi_status_code(status) = EPI_S_BAD_IMPORTS;
    else
    {
	ACTIVE_START;
	CALL_SUPPORT_FUNCTION(status, EPI_ERASE_IMPORTS, (imports));
	ACTIVE_STOP;
    }
    DEBUGEND_STATUS(2, EPI_ERASE_IMPORTS, status);
    return (status);
}


EPI_STATUS epi_clear_imports(imports)
EPI_IMPORTS imports;
{
    EPI_STATUS status;

    INIT_STATUS(status);
    DEBUGSTART_IMPORTS(1, EPI_CLEAR_IMPORTS, imports);
    if (!epi_started)
	epi_status_code(status) = EPI_S_NOT_STARTED;
    else if (epi_active)
	epi_status_code(status) = EPI_S_ACTIVE;
    else if (imports.ident != EPI_O_IMPORTS ||
	     imports.context.ident != EPI_O_CONTEXT)
	epi_status_code(status) = EPI_S_BAD_IMPORTS;
    else
    {
	ACTIVE_START;
	CALL_SUPPORT_FUNCTION(status, EPI_CLEAR_IMPORTS, (imports));
	ACTIVE_STOP;
    }
    DEBUGEND_STATUS(2, EPI_CLEAR_IMPORTS, status);
    return (status);
}


EPI_STATUS epi_dump_imports(imports, filename, dump_attr, dump_imports,
			    convert_seq)
EPI_IMPORTS imports;
EPI_STRING filename;
EPI_BOOL dump_attr, dump_imports, convert_seq;
{
    EPI_STATUS status;

    INIT_STATUS(status);
    DEBUGSTART_IMPORTS_FILENAME_3BOOL(1, EPI_DUMP_IMPORTS, imports, filename,
				      dump_attr, dump_imports, convert_seq);
    if (!epi_started)
	epi_status_code(status) = EPI_S_NOT_STARTED;
    else if (epi_active)
	epi_status_code(status) = EPI_S_ACTIVE;
    else if (imports.ident != EPI_O_IMPORTS ||
	     imports.context.ident != EPI_O_CONTEXT)
	epi_status_code(status) = EPI_S_BAD_IMPORTS;
    else if (filename == NULL || *filename == 0)
	epi_status_code(status) = EPI_S_BAD_STRING;
    else
    {
	ACTIVE_START;
	CALL_SUPPORT_FUNCTION(status, EPI_DUMP_IMPORTS, (imports, filename,
							 dump_attr, 
							 dump_imports,
							 convert_seq));
	ACTIVE_STOP;
    }
    DEBUGEND_STATUS(2, EPI_DUMP_IMPORTS, status);
    return (status);
}


EPI_STATUS epi_simulate_imports(imports)
EPI_IMPORTS imports;
{
    EPI_STATUS status;

    INIT_STATUS(status);
    DEBUGSTART_IMPORTS(1, EPI_SIMULATE_IMPORTS, imports);
    if (!epi_started)
	epi_status_code(status) = EPI_S_NOT_STARTED;
    else if (epi_active)
	epi_status_code(status) = EPI_S_ACTIVE;
    else if (imports.ident != EPI_O_IMPORTS ||
	     imports.context.ident != EPI_O_CONTEXT)
	epi_status_code(status) = EPI_S_BAD_IMPORTS;
    else
    {
	ACTIVE_START;
	CALL_SUPPORT_FUNCTION(status, EPI_SIMULATE_IMPORTS, (imports));
	ACTIVE_STOP;
    }
    DEBUGEND_STATUS(2, EPI_SIMULATE_IMPORTS, status);
    return (status);
}


/* passive functions */
/* ----------------- */

/*
  Sun-4 compiler passes structure parameters as pointers.
  Varargs is not able to untangle this, hence the #ifdef below.
*/

typedef EPI_IMPORTS *EPI_IMPORTS_PTR;

EPI_STATUS epi_get_imports_details(va_alist)
 va_dcl
{
    EPI_STATUS status;
    va_list args;
    EPI_IMPORTS epi_imports, *epi_imports_ptr;
    EPI_MESSAGE_TYPE type;
    int i, count = 0;

    INIT_STATUS(status);
    DEBUGSTART_VARG(1, EPI_GET_IMPORTS_DETAILS);
    if (!epi_started)
	epi_status_code(status) = EPI_S_NOT_STARTED;
    else
    {
	va_start(args);
	/* first argument is the imports */
#ifdef sparc
	epi_imports_ptr = va_arg(args, EPI_IMPORTS_PTR);
	epi_imports = *epi_imports_ptr;
#else
	epi_imports = va_arg(args, EPI_IMPORTS);
#endif
	/* count the number of arguments */
	while ((type = va_arg(args, EPI_MESSAGE_TYPE)) != 0)
	    count++;
	va_end(args);
	if (epi_imports.ident != EPI_O_IMPORTS ||
	    epi_imports.context.ident != EPI_O_CONTEXT)
	    epi_status_code(status) = EPI_S_BAD_IMPORTS;
	else
	{
	    EPI_MESSAGE_TYPE *arg_array = NEW_MESSAGE_TYPE_ARRAY(count + 1);
	    EPI_MESSAGE_TYPE *ptr = arg_array;

	    PASSIVE_START;
	    va_start(args);
#ifdef sparc
	    va_arg(args, EPI_IMPORTS_PTR);	/* dont need first parameter */
#else
	    va_arg(args, EPI_IMPORTS);	/* dont need first parameter */
#endif
	    for (i = 0; i < count; i++)
		*ptr++ = va_arg(args, EPI_MESSAGE_TYPE);
	    va_end(args);
	    *ptr = 0;
	    CALL_SUPPORT_FUNCTION(status, EPI_GET_IMPORTS_DETAILS,
				  (epi_imports, arg_array));
	    FREE_MESSAGE_TYPE_ARRAY(arg_array);
	    PASSIVE_STOP;
	}
    }
    DEBUGEND_STATUS(2, EPI_GET_IMPORTS_DETAILS, status);
    return (status);
}


EPI_STATUS epi_get_closure_details(va_alist)
 va_dcl
{
    EPI_STATUS status;
    va_list args;
    EPI_IMPORTS epi_imports, *epi_imports_ptr;
    EPI_MESSAGE_TYPE type;
    int i, count = 0;

    INIT_STATUS(status);
    DEBUGSTART_VARG(1, EPI_GET_CLOSURE_DETAILS);
    if (!epi_started)
	epi_status_code(status) = EPI_S_NOT_STARTED;
    else
    {
	va_start(args);
	/* first argument is the imports */
#ifdef sparc
	epi_imports_ptr = va_arg(args, EPI_IMPORTS_PTR);
	epi_imports = *epi_imports_ptr;
#else
	epi_imports = va_arg(args, EPI_IMPORTS);
#endif
	/* count the number of arguments */
	while ((type = va_arg(args, EPI_MESSAGE_TYPE)) != 0)
	    count++;
	va_end(args);
	if (epi_imports.ident != EPI_O_IMPORTS ||
	    epi_imports.context.ident != EPI_O_CONTEXT)
	    epi_status_code(status) = EPI_S_BAD_IMPORTS;
	else
	{
	    EPI_MESSAGE_TYPE *arg_array = NEW_MESSAGE_TYPE_ARRAY(count + 1);
	    EPI_MESSAGE_TYPE *ptr = arg_array;

	    PASSIVE_START;
	    va_start(args);
#ifdef sparc
	    va_arg(args, EPI_IMPORTS_PTR);	/* dont need first parameter */
#else
	    va_arg(args, EPI_IMPORTS);	/* dont need first parameter */
#endif
	    for (i = 0; i < count; i++)
		*ptr++ = va_arg(args, EPI_MESSAGE_TYPE);
	    va_end(args);
	    *ptr = 0;
	    CALL_SUPPORT_FUNCTION(status, EPI_GET_CLOSURE_DETAILS,
				  (epi_imports, arg_array));
	    FREE_MESSAGE_TYPE_ARRAY(arg_array);
	    PASSIVE_STOP;
	}
    }
    DEBUGEND_STATUS(2, EPI_GET_CLOSURE_DETAILS, status);
    return (status);
}


/* unpacking functions (not defined as macros) */
/* ------------------------------------------- */

EPI_BOOL epi_same_imports(imp1, imp2)
EPI_IMPORTS imp1, imp2;
{
    EPI_BOOL same;

    DEBUGSTART_IMPORTS_IMPORTS(3, EPI_SAME_IMPORTS, imp1, imp2);
    same = (imp1.ident == EPI_O_IMPORTS && imp2.ident == EPI_O_IMPORTS &&
	    !strcmp(epi_imports_name(imp1), epi_imports_name(imp2)) &&
	    epi_same_context(epi_imports_context(imp1),
			     epi_imports_context(imp2)));
    DEBUGEND_BOOL(4, EPI_SAME_IMPORTS, same);
    return (same);
}

/* end */
