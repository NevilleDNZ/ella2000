/* $Id: epi_context.c,v 34.2 1995/03/29 13:03:51 ella Exp $ */


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
$OldLog:	epi_context.c,v $
 * Revision 2.1.1.1  91/11/05  16:27:31  aap
 * Use of alloca removed (not available on VMS).
 * 
 * Revision 2.1  91/02/25  12:08:45  miker
 * Candidate release 5
 * 
 * Revision 1.1  90/04/17  15:13:40  aap
 * Initial revision
 * 
*/
/* DEC/CMS REPLACEMENT HISTORY, Element EPI_CONTEXT.C */
/* *4     1-FEB-1990 14:16:27 ELLADEV "Updated provisional with fixes for R4B609. IM" */
/* *3    10-AUG-1989 14:53:33 ELLADEV "Definitive release 4.0, first provisional release 4.1. BGH" */
/* *2    21-JAN-1989 11:40:55 ELLADEV "Provisional for Release 4.0 BGH" */
/* *1    10-NOV-1988 11:57:01 ELLADEV "New for Release 4, stored in CMS lib [elladev.cms.epi]" */
/* DEC/CMS REPLACEMENT HISTORY, Element EPI_CONTEXT.C */
/*
*******************************************************************************
				Praxis Systems plc

Module	      :	EPI Library - context functions

File          :	epi_context.c
		
Description   :	This module contains the context functions of the EPI library.


Changes History

   04.08.88	New module for EPI Version 1. BGH
   07.10.88	Implement actions from Code Review n035.7.47. BGH

*******************************************************************************
*/

static char RcsId[] = "$Id: epi_context.c,v 34.2 1995/03/29 13:03:51 ella Exp $";	/* Sccs ident for C file */

#include <stdio.h>
#include <varargs.h>
#include "epi.h"
#include "epi_internal.h"

/* active functions */
/* ---------------- */

EPI_STATUS epi_copy_context(context, name)
EPI_CONTEXT context;
EPI_STRING name;
{
    EPI_STATUS status;

    INIT_STATUS(status);
    DEBUGSTART_CON_NAME(1, EPI_COPY_CONTEXT, context, name);
    if (!epi_started)
	epi_status_code(status) = EPI_S_NOT_STARTED;
    else if (epi_active)
	epi_status_code(status) = EPI_S_ACTIVE;
    else if (context.ident != EPI_O_CONTEXT)
	epi_status_code(status) = EPI_S_BAD_CONTEXT;
    else if (name == NULL || *name == 0)
	epi_status_code(status) = EPI_S_BAD_STRING;
    else if (!valid_id(name))
	epi_status_code(status) = EPI_S_BAD_CONTEXT_NAME;
    else
    {
	ACTIVE_START;
	CALL_SUPPORT_FUNCTION(status, EPI_COPY_CONTEXT, (context, name));
	ACTIVE_STOP;
    }
    DEBUGEND_STATUS(2, EPI_COPY_CONTEXT, status);
    return (status);
}


EPI_STATUS epi_erase_context(context)
EPI_CONTEXT context;
{
    EPI_STATUS status;

    INIT_STATUS(status);
    DEBUGSTART_CON(1, EPI_ERASE_CONTEXT, context);
    if (!epi_started)
	epi_status_code(status) = EPI_S_NOT_STARTED;
    else if (epi_active)
	epi_status_code(status) = EPI_S_ACTIVE;
    else if (context.ident != EPI_O_CONTEXT)
	epi_status_code(status) = EPI_S_BAD_CONTEXT;
    else
    {
	ACTIVE_START;
	CALL_SUPPORT_FUNCTION(status, EPI_ERASE_CONTEXT, (context));
	ACTIVE_STOP;
    }
    DEBUGEND_STATUS(2, EPI_ERASE_CONTEXT, status);
    return (status);
}


EPI_STATUS epi_clear_context(context)
EPI_CONTEXT context;
{
    EPI_STATUS status;

    INIT_STATUS(status);
    DEBUGSTART_CON(1, EPI_CLEAR_CONTEXT, context);
    if (!epi_started)
	epi_status_code(status) = EPI_S_NOT_STARTED;
    else if (epi_active)
	epi_status_code(status) = EPI_S_ACTIVE;
    else if (context.ident != EPI_O_CONTEXT)
	epi_status_code(status) = EPI_S_BAD_CONTEXT;
    else
    {
	ACTIVE_START;
	CALL_SUPPORT_FUNCTION(status, EPI_CLEAR_CONTEXT, (context));
	ACTIVE_STOP;
    }
    DEBUGEND_STATUS(2, EPI_CLEAR_CONTEXT, status);
    return (status);
}


EPI_STATUS epi_convert_to_simple(context)
EPI_CONTEXT context;
{
    EPI_STATUS status;

    INIT_STATUS(status);
    DEBUGSTART_CON(1, EPI_CONVERT_TO_SIMPLE, context);
    if (!epi_started)
	epi_status_code(status) = EPI_S_NOT_STARTED;
    else if (epi_active)
	epi_status_code(status) = EPI_S_ACTIVE;
    else if (context.ident != EPI_O_CONTEXT)
	epi_status_code(status) = EPI_S_BAD_CONTEXT;
    else
    {
	ACTIVE_START;
	CALL_SUPPORT_FUNCTION(status, EPI_CONVERT_TO_SIMPLE, (context));
	ACTIVE_STOP;
    }
    DEBUGEND_STATUS(2, EPI_CONVERT_TO_SIMPLE, status);
    return (status);
}


EPI_STATUS epi_convert_to_compound(context, name)
EPI_CONTEXT context;
EPI_STRING name;
{
    EPI_STATUS status;

    INIT_STATUS(status);
    DEBUGSTART_CON_NAME(1, EPI_CONVERT_TO_COMPOUND, context, name);
    if (!epi_started)
	epi_status_code(status) = EPI_S_NOT_STARTED;
    else if (epi_active)
	epi_status_code(status) = EPI_S_ACTIVE;
    else if (context.ident != EPI_O_CONTEXT)
	epi_status_code(status) = EPI_S_BAD_CONTEXT;
    else if (name == NULL || *name == 0)
	epi_status_code(status) = EPI_S_BAD_STRING;
    else if (!valid_id(name))
	epi_status_code(status) = EPI_S_BAD_IMPORTS_NAME;
    else
    {
	ACTIVE_START;
	CALL_SUPPORT_FUNCTION(status, EPI_CONVERT_TO_COMPOUND,
			      (context, name));
	ACTIVE_STOP;
    }
    DEBUGEND_STATUS(2, EPI_CONVERT_TO_COMPOUND, status);
    return (status);
}


EPI_STATUS epi_make_imports(context, name)
EPI_CONTEXT context;
EPI_STRING name;
{
    EPI_STATUS status;

    INIT_STATUS(status);
    DEBUGSTART_CON_NAME(1, EPI_MAKE_IMPORTS, context, name);
    if (!epi_started)
	epi_status_code(status) = EPI_S_NOT_STARTED;
    else if (epi_active)
	epi_status_code(status) = EPI_S_ACTIVE;
    else if (context.ident != EPI_O_CONTEXT)
	epi_status_code(status) = EPI_S_BAD_CONTEXT;
    else if (name == NULL || *name == 0)
	epi_status_code(status) = EPI_S_BAD_STRING;
    else if (!valid_id(name))
	epi_status_code(status) = EPI_S_BAD_IMPORTS_NAME;
    else
    {
	ACTIVE_START;
	CALL_SUPPORT_FUNCTION(status, EPI_MAKE_IMPORTS, (context, name));
	ACTIVE_STOP;
    }
    DEBUGEND_STATUS(2, EPI_MAKE_IMPORTS, status);
    return (status);
}

/* passive functions */
/* ----------------- */

/*
  Sun-4 compiler passes structure parameters as pointers.
  Varargs is not able to untangle this, hence the #ifdef below.
*/

typedef EPI_CONTEXT *EPI_CONTEXT_PTR;

EPI_STATUS epi_get_context_details(va_alist)
 va_dcl
{
    EPI_STATUS status;
    va_list args;
    EPI_CONTEXT context, *context_ptr;
    EPI_MESSAGE_TYPE type;
    int i, count = 0;

    INIT_STATUS(status);
    DEBUGSTART_VARG(1, EPI_GET_CONTEXT_DETAILS);
    if (!epi_started)
	epi_status_code(status) = EPI_S_NOT_STARTED;
    else
    {
	va_start(args);
	/* first argument is the context */
#ifdef sparc
	context_ptr = va_arg(args, EPI_CONTEXT_PTR);
	context = *context_ptr;
#else
	context = va_arg(args, EPI_CONTEXT);
#endif
	/* count the number of arguments */
	while ((type = va_arg(args, EPI_MESSAGE_TYPE)) != 0)
	    count++;
	va_end(args);
	if (context.ident != EPI_O_CONTEXT)
	    epi_status_code(status) = EPI_S_BAD_CONTEXT;
	else
	{
	    EPI_MESSAGE_TYPE *arg_array = NEW_MESSAGE_TYPE_ARRAY(count + 1);
	    EPI_MESSAGE_TYPE *ptr = arg_array;

	    PASSIVE_START;
	    va_start(args);
#ifdef sparc
	    va_arg(args, EPI_CONTEXT_PTR);	/* dont need first parameter */
#else
	    va_arg(args, EPI_CONTEXT);	/* dont need first parameter */
#endif
	    for (i = 0; i < count; i++)
		*ptr++ = va_arg(args, EPI_MESSAGE_TYPE);
	    va_end(args);
	    *ptr = 0;
	    CALL_SUPPORT_FUNCTION(status, EPI_GET_CONTEXT_DETAILS,
				  (context, arg_array));
	    FREE_MESSAGE_TYPE_ARRAY(arg_array);
	    PASSIVE_STOP;
	}
    }
    DEBUGEND_STATUS(2, EPI_GET_CONTEXT_DETAILS, status);
    return (status);
}


/* unpacking functions (not defined as macros) */
/* ------------------------------------------- */

EPI_BOOL epi_same_context(con1, con2)
EPI_CONTEXT con1, con2;
{
    EPI_BOOL same;

    DEBUGSTART_CON_CON(3, EPI_SAME_CONTEXT, con1, con2);
    same = (con1.ident == EPI_O_CONTEXT && con2.ident == EPI_O_CONTEXT &&
	    !strcmp(epi_context_name(con1), epi_context_name(con2)));
    DEBUGEND_BOOL(4, EPI_SAME_CONTEXT, same);
    return (same);
}

/* end */
