/* $Id: epi_bind.c,v 34.2 1995/03/29 13:03:50 ella Exp $ */


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
$OldLog:	epi_bind.c,v $
 * Revision 2.1.1.1  91/11/05  16:26:05  aap
 * Use of alloca removed (not available on VMS).
 * 
 * Revision 2.1  91/02/25  12:08:26  miker
 * Candidate release 5
 * 
 * Revision 1.1  90/04/17  15:12:35  aap
 * Initial revision
 * 
*/
/* DEC/CMS REPLACEMENT HISTORY, Element EPI_BIND.C */
/* *6     1-FEB-1990 14:16:22 ELLADEV "Updated provisional with fixes for R4B609. IM" */
/* *5    10-AUG-1989 14:53:27 ELLADEV "Definitive release 4.0, first provisional release 4.1. BGH" */
/* *4     1-FEB-1989 15:14:04 ELLADEV "Updated provisional with fixes for R4B046. BGH" */
/* *3    21-JAN-1989 11:40:50 ELLADEV "Provisional for Release 4.0 BGH" */
/* *2     6-DEC-1988 17:52:39 ELLADEV "updated draft version" */
/* *1    10-NOV-1988 11:56:56 ELLADEV "New for Release 4, stored in CMS lib [elladev.cms.epi]" */
/* DEC/CMS REPLACEMENT HISTORY, Element EPI_BIND.C */
/*
*******************************************************************************
				Praxis Systems plc

Module	      :	EPI Library - binding functions

File          :	epi_bind.c
		
Description   :	This module contains the binding functions
		of the EPI library.


Changes History

   07.10.88	New module created by extracting binding functions
		from epi_declbind.c .  BGH
   23.11.88	Added new functions epi_dump_binding and 
   		epi_simulate_binding. BGH

*******************************************************************************
*/

static char RcsId[] = "$Id: epi_bind.c,v 34.2 1995/03/29 13:03:50 ella Exp $";	/* Sccs ident for C file */

#include <stdio.h>
#include <varargs.h>
#include "epi.h"
#include "epi_internal.h"

/* active functions */
/* ---------------- */

EPI_STATUS epi_fixup_binding(from, to)
EPI_BINDING from, to;
{
    EPI_STATUS status;

    INIT_STATUS(status);
    DEBUGSTART_BIND_BIND(1, EPI_FIXUP_BINDING, from, to);
    if (!epi_started)
	epi_status_code(status) = EPI_S_NOT_STARTED;
    else if (epi_active)
	epi_status_code(status) = EPI_S_ACTIVE;
    else if (from.ident != EPI_O_BINDING ||
	     from.declaration.ident != EPI_O_DECLARATION ||
	     from.declaration.context.ident != EPI_O_CONTEXT ||
	     from.imports.ident != EPI_O_IMPORTS ||
	     from.imports.context.ident != EPI_O_CONTEXT ||
	     to.ident != EPI_O_BINDING ||
	     to.declaration.ident != EPI_O_DECLARATION ||
	     to.declaration.context.ident != EPI_O_CONTEXT ||
	     to.imports.ident != EPI_O_IMPORTS ||
	     to.imports.context.ident != EPI_O_CONTEXT)
	epi_status_code(status) = EPI_S_BAD_BINDING;
    else
    {
	ACTIVE_START;
	CALL_SUPPORT_FUNCTION(status, EPI_FIXUP_BINDING, (from, to));
	ACTIVE_STOP;
    }
    DEBUGEND_STATUS(2, EPI_FIXUP_BINDING, status);
    return (status);
}


EPI_STATUS epi_clear_binding(binding)
EPI_BINDING binding;
{
    EPI_STATUS status;

    INIT_STATUS(status);
    DEBUGSTART_BIND(1, EPI_CLEAR_BINDING, binding);
    if (!epi_started)
	epi_status_code(status) = EPI_S_NOT_STARTED;
    else if (epi_active)
	epi_status_code(status) = EPI_S_ACTIVE;
    else if (binding.ident != EPI_O_BINDING ||
	     binding.declaration.ident != EPI_O_DECLARATION ||
	     binding.declaration.context.ident != EPI_O_CONTEXT ||
	     binding.imports.ident != EPI_O_IMPORTS ||
	     binding.imports.context.ident != EPI_O_CONTEXT)
	epi_status_code(status) = EPI_S_BAD_BINDING;
    else
    {
	ACTIVE_START;
	CALL_SUPPORT_FUNCTION(status, EPI_CLEAR_BINDING, (binding));
	ACTIVE_STOP;
    }
    DEBUGEND_STATUS(2, EPI_CLEAR_BINDING, status);
    return (status);
}

EPI_STATUS epi_dump_binding(binding, filename, dump_attr, dump_imports,
			    convert_seq)
EPI_BINDING binding;
EPI_STRING filename;
EPI_BOOL dump_attr, dump_imports, convert_seq;
{
    EPI_STATUS status;

    INIT_STATUS(status);
    DEBUGSTART_BIND_FILENAME_3BOOL(1, EPI_DUMP_BINDING, binding, filename,
				      dump_attr, dump_imports, convert_seq);
    if (!epi_started)
	epi_status_code(status) = EPI_S_NOT_STARTED;
    else if (epi_active)
	epi_status_code(status) = EPI_S_ACTIVE;
    else if (binding.ident != EPI_O_BINDING ||
	     binding.declaration.ident != EPI_O_DECLARATION ||
	     binding.declaration.context.ident != EPI_O_CONTEXT ||
	     binding.imports.ident != EPI_O_IMPORTS ||
	     binding.imports.context.ident != EPI_O_CONTEXT)
	epi_status_code(status) = EPI_S_BAD_BINDING;
    else if (filename == NULL || *filename == 0)
	epi_status_code(status) = EPI_S_BAD_STRING;
    else
    {
	ACTIVE_START;
	CALL_SUPPORT_FUNCTION(status, EPI_DUMP_BINDING, (binding, filename,
							 dump_attr, 
							 dump_imports,
							 convert_seq));
	ACTIVE_STOP;
    }
    DEBUGEND_STATUS(2, EPI_DUMP_BINDING, status);
    return (status);
}

EPI_STATUS epi_simulate_binding(binding)
EPI_BINDING binding;
{
    EPI_STATUS status;

    INIT_STATUS(status);
    DEBUGSTART_BIND(1, EPI_SIMULATE_BINDING, binding);
    if (!epi_started)
	epi_status_code(status) = EPI_S_NOT_STARTED;
    else if (epi_active)
	epi_status_code(status) = EPI_S_ACTIVE;
    else if (binding.ident != EPI_O_BINDING ||
	     binding.declaration.ident != EPI_O_DECLARATION ||
	     binding.declaration.context.ident != EPI_O_CONTEXT ||
	     binding.imports.ident != EPI_O_IMPORTS ||
	     binding.imports.context.ident != EPI_O_CONTEXT)
	epi_status_code(status) = EPI_S_BAD_BINDING;
    else
    {
	ACTIVE_START;
	CALL_SUPPORT_FUNCTION(status, EPI_SIMULATE_BINDING, (binding));
	ACTIVE_STOP;
    }
    DEBUGEND_STATUS(2, EPI_SIMULATE_BINDING, status);
    return (status);
}


/* passive functions */
/* ----------------- */

/*
  Sun-4 compiler passes structure parameters as pointers.
  Varargs is not able to untangle this, hence the #ifdef below.
*/

typedef EPI_BINDING *EPI_BINDING_PTR;

EPI_STATUS epi_get_binding_details(va_alist)
 va_dcl
{
    EPI_STATUS status;
    va_list args;
    EPI_BINDING binding, *binding_ptr;
    EPI_MESSAGE_TYPE type;
    int i, count = 0;

    INIT_STATUS(status);
    DEBUGSTART_VARG(1, EPI_GET_BINDING_DETAILS);
    if (!epi_started)
	epi_status_code(status) = EPI_S_NOT_STARTED;
    else
    {
	va_start(args);
	/* first argument is the binding */
#ifdef sparc
	binding_ptr = va_arg(args, EPI_BINDING_PTR);
	binding = *binding_ptr;
#else
	binding = va_arg(args, EPI_BINDING);
#endif
	/* count the number of arguments */
	while ((type = va_arg(args, EPI_MESSAGE_TYPE)) != 0)
	    count++;
	va_end(args);
	if (binding.ident != EPI_O_BINDING ||
	    binding.declaration.ident != EPI_O_DECLARATION ||
	    binding.declaration.context.ident != EPI_O_CONTEXT ||
	    binding.imports.ident != EPI_O_IMPORTS ||
	    binding.imports.context.ident != EPI_O_CONTEXT)
	    epi_status_code(status) = EPI_S_BAD_BINDING;
	else
	{
	    EPI_MESSAGE_TYPE *arg_array = NEW_MESSAGE_TYPE_ARRAY(count + 1);
	    EPI_MESSAGE_TYPE *ptr = arg_array;

	    PASSIVE_START;
	    va_start(args);
#ifdef sparc
	    va_arg(args, EPI_BINDING_PTR);	/* dont need first parameter */
#else
	    va_arg(args, EPI_BINDING);	/* dont need first parameter */
#endif
	    for (i = 0; i < count; i++)
		*ptr++ = va_arg(args, EPI_MESSAGE_TYPE);
	    va_end(args);
	    *ptr = 0;
	    CALL_SUPPORT_FUNCTION(status, EPI_GET_BINDING_DETAILS,
				  (binding, arg_array));
	    FREE_MESSAGE_TYPE_ARRAY(arg_array);
	    PASSIVE_STOP;
	}
    }
    DEBUGEND_STATUS(2, EPI_GET_BINDING_DETAILS, status);
    return (status);
}


/* unpacking functions (not defined as macros) */
/* ------------------------------------------- */

EPI_BOOL epi_same_binding(bind1, bind2)
EPI_BINDING bind1, bind2;
{
    EPI_BOOL same;

    DEBUGSTART_BIND_BIND(3, EPI_SAME_BINDING, bind1, bind2);
    same = ((bind1.ident == EPI_O_NULL_BINDING &&
	     bind2.ident == EPI_O_NULL_BINDING) ||
	    (bind1.ident == EPI_O_BINDING &&
	     bind2.ident == EPI_O_BINDING &&
	     epi_same_imports(epi_binding_imports(bind1),
			      epi_binding_imports(bind2)) &&
	     epi_same_declaration(epi_binding_declaration(bind1),
				  epi_binding_declaration(bind2))));
    DEBUGEND_BOOL(4, EPI_SAME_BINDING, same);
    return (same);
}

/* end */
