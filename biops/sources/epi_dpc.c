/* $Id: epi_dpc.c,v 34.2 1995/03/29 13:03:52 ella Exp $ */


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
                                  system old version was 2.1.1.4 
29:03:95  34.002  ELLA  Modcprght Change copyright header
??:??:??   ?.???  ????
*/

/*
$OldLog:	epi_dpc.c,v $
 * Revision 2.1.1.4  91/12/09  17:03:36  aap
 * Now includes epi_dpc.h
 * 
 * Revision 2.1.1.3  91/12/02  14:25:41  aap
 * VAX descriptor fixed.
 * 
 * Revision 2.1.1.2  91/11/05  12:49:40  aap
 * Use of memcmp/memcpy reinstated -- required for VMS, now available on Apollo.
 * 
 * Revision 2.1.1.1  91/10/30  13:06:31  aap
 * Compiles on VMS.
 * 
 * Revision 2.1  91/02/25  12:09:14  miker
 * Candidate release 5
 * 
 * Revision 1.1  90/04/17  15:15:58  aap
 * Initial revision
 * 
*/
/********************************************************************
			Praxis Systems plc

Module		:	EPI direct procedure call code

File		:	epi_dpc.c

Description	:	This module contains code which implements the direct
			procedure call mechanism for EPI. It acts as a
			buffer between the EPI library routines
			(written in C) and the EPI support routines
			(written in Algol 68).

Changes History

   12.08.88	New module for EPI Version 1. BGH
   24.08.88	EPI Version 2. AAP
   07.10.88	Implement actions from Code Review n035.7.47. BGH
   23.11.88	Changed epi functions for latest definition: 
   		epi_simulate renamed epi_simulate_imports,
		epi_dump_ellanet renamed epi_dump_imports,
		epi_simulate_binding and epi_dump_binding added. BGH
   06.12.88	Now uses bcopy instead of memcpy as latter not available 
   		on the Apollo. BGH
   07.12.89	Changed to allow compatibility with /NOSTRUCT option of the
           	C translator. Default is NOSTRUCT version; STRUCT version is 
           	selected by defining the symbol 'STRUCT'. BGH
   15.01.90     Definition of buffer_epi_initialise now independent of CTRANS
                /NOSTRUCT or /STRUCT option. BGH
   12.12.90     Extended EPI_NODE to cope with probe functions. MDR.

********************************************************************/

#include "epi.h"
#include "epi_internal.h"
#include "epi_dpc.h"

static char RcsId[] = "$Id: epi_dpc.c,v 34.2 1995/03/29 13:03:52 ella Exp $";	/* Sccs ident for C file */



/* Conversion routines */
/* ------------------- */

/* The following routines create EPI objects described in */
/* Algol 68 from their C equivalents.                     */

#define	make_a68_ident(p)			(p)
#define	make_a68_status_code(p)			(p)
#define	make_a68_message_type(p)		(p)
#define	make_a68_int(p)				(p)
#define	make_a68_unsigned(p)			(p)
#define	make_a68_bool(p)			(A68_EPI_BOOL)(p)
#define	make_a68_time(p)			(p)
#define	make_a68_testpoint(n)			(n)

A68_EPI_STRING make_a68_string(string)
EPI_STRING string;
{
    A68_EPI_STRING a68_string;

    a68_string.data = string;
#ifdef unix
    a68_string.gc = 0;
#endif
    a68_string.upb = strlen(string);
    return (a68_string);
}

A68_EPI_LIBRARY make_a68_library(library)
EPI_LIBRARY library;
{
    A68_EPI_LIBRARY a68_library;

    a68_library.ident = make_a68_ident(library.ident);
    a68_library.name = make_a68_string(epi_library_name(library));
    return (a68_library);
}

A68_EPI_CONTEXT make_a68_context(context)
EPI_CONTEXT context;
{
    A68_EPI_CONTEXT a68_context;

    a68_context.ident = make_a68_ident(context.ident);
    a68_context.name = make_a68_string(epi_context_name(context));
    return (a68_context);
}

A68_EPI_IMPORTS make_a68_imports(imports)
EPI_IMPORTS imports;
{
    A68_EPI_IMPORTS a68_imports;

    a68_imports.ident = make_a68_ident(imports.ident);
    a68_imports.name = make_a68_string(epi_imports_name(imports));
    a68_imports.context = make_a68_context(epi_imports_context(imports));
    return (a68_imports);
}

A68_EPI_DECLARATION make_a68_declaration(declaration)
EPI_DECLARATION declaration;
{
    A68_EPI_DECLARATION a68_declaration;

    a68_declaration.ident = make_a68_ident(declaration.ident);
    a68_declaration.name = make_a68_string(
					   epi_declaration_name(declaration));
    a68_declaration.version = make_a68_unsigned(
					epi_declaration_version(declaration));
    a68_declaration.class = make_a68_unsigned(
					  epi_declaration_class(declaration));
    a68_declaration.context = make_a68_context(
					epi_declaration_context(declaration));
    return (a68_declaration);
}

A68_EPI_BINDING make_a68_binding(binding)
EPI_BINDING binding;
{
    A68_EPI_BINDING a68_binding;

    a68_binding.ident = make_a68_ident(binding.ident);
    a68_binding.declaration = make_a68_declaration(
					    epi_binding_declaration(binding));
    a68_binding.imports = make_a68_imports(epi_binding_imports(binding));
    return (a68_binding);
}


A68_EPI_NODE make_a68_node(s)
EPI_NODE s;
{
    A68_EPI_NODE a68_node;

    a68_node.ident = make_a68_ident(s.ident);
    a68_node.fn = make_a68_int(s.fn);
    a68_node.instance = make_a68_int(s.instance);
    a68_node.circuit = make_a68_int(s.circuit);
    a68_node.base = make_a68_int(s.base);
    a68_node.rnodelist.data = s.rnodelist;
#ifdef unix
    a68_node.rnodelist.gc = 0;
#endif
    a68_node.rnodelist.upb = s.upb_rnodelist;
    return (a68_node);
}

A68_EPI_SIGNAL make_a68_signal(s)
EPI_SIGNAL s;
{
    A68_EPI_SIGNAL a68_signal;

    a68_signal.ident = make_a68_ident(s.ident);
    a68_signal.value.data = s.value;
#ifdef unix
    a68_signal.value.gc = 0;
#endif
    a68_signal.value.upb = s.upb_value;
    return (a68_signal);
}

A68_VSIGNAL make_a68_signal_row(signal_array, upb)
EPI_SIGNAL *signal_array;
EPI_UNSIGNED upb;
{
    A68_VSIGNAL res;
    register int i;

    res.data = (A68_EPI_SIGNAL *)signal_array;
#ifdef unix
    res.gc = 0;
#endif
    res.upb = upb;
    return res;
}

A68_VBITS make_a68_mtype_row(mtype_array)
EPI_MESSAGE_TYPE *mtype_array;
{
    int i = 0;
    EPI_MESSAGE_TYPE *ptr = mtype_array;
    A68_VBITS a68_vbits;

    a68_vbits.data = mtype_array;
#ifdef unix
    a68_vbits.gc = 0;
#endif
    while (*ptr++)
	i++;
    a68_vbits.upb = i;
    return (a68_vbits);
}


/* The following routines create EPI objects described in */
/* C from their Algol 68 equivalents.                     */
/* Note: the new objects are heaped                       */

#define	make_ident(p)			(p)
#define	make_status_code(p)		(p)
#define	make_message_type(p)		(p)
#define	make_int(p)			(p)
#define	make_unsigned(p)		(p)
#define	make_bool(p)			(p)
#define	make_time(p)			(p)
#define	make_testpoint(p)		(*((EPI_TESTPOINT *)(&(p))))

EPI_STRING make_string(a68_string)
A68_EPI_STRING a68_string;
{
    int size = (a68_string.upb > 0 ? a68_string.upb + 1 : 1);
    EPI_STRING string = NEW_STRING(size);

    if (size > 1)
	memcpy(string, a68_string.data, size);
    string[size - 1] = '\0';
    return (string);
}

EPI_LIBRARY make_library(a68_library)
A68_EPI_LIBRARY a68_library;
{
    EPI_LIBRARY library;

    library.ident = make_ident(a68_library.ident);
    library.name = make_string(a68_library.name);
    return (library);
}

EPI_CONTEXT make_context(a68_context)
A68_EPI_CONTEXT a68_context;
{
    EPI_CONTEXT context;

    context.ident = make_ident(a68_context.ident);
    context.name = make_string(a68_context.name);
    return (context);
}

EPI_IMPORTS make_imports(a68_imports)
A68_EPI_IMPORTS a68_imports;
{
    EPI_IMPORTS imports;

    imports.ident = make_ident(a68_imports.ident);
    imports.name = make_string(a68_imports.name);
    imports.context = make_context(a68_imports.context);
    return (imports);
}

EPI_DECLARATION make_declaration(a68_declaration)
A68_EPI_DECLARATION a68_declaration;
{
    EPI_DECLARATION declaration;

    declaration.ident = make_ident(a68_declaration.ident);
    declaration.name = make_string(a68_declaration.name);
    declaration.version = make_unsigned(a68_declaration.version);
    declaration.class = make_unsigned(a68_declaration.class);
    declaration.context = make_context(a68_declaration.context);
    return (declaration);
}

EPI_BINDING make_binding(a68_binding)
A68_EPI_BINDING a68_binding;
{
    EPI_BINDING binding;

    binding.ident = make_ident(a68_binding.ident);
    binding.declaration = make_declaration(a68_binding.declaration);
    binding.imports = make_imports(a68_binding.imports);
    return (binding);
}

EPI_TYPE make_type(a68_type)
A68_EPI_TYPE a68_type;
{
    EPI_TYPE t;
    register int i;

    t = NEW_TYPE;
    t->ident = make_ident(a68_type->ident);
    t->class = make_unsigned(a68_type->class);
    switch (a68_type->class)
    {
    case EPI_C_TYPE_CHAR:
	t->type.char_type.tag = make_string(a68_type->type.data.char_type.tag);
	t->type.char_type.repr =
	    make_string(a68_type->type.data.char_type.repr);
	break;
    case EPI_C_TYPE_ENUM:
	t->type.enum_type.elems = a68_type->type.data.enum_type.upb;
	t->type.enum_type.tags = NEW_VEC(EPI_STRING, t->type.enum_type.elems);
	t->type.enum_type.subtypes = NEW_VEC(EPI_TYPE, t->type.enum_type.elems);
	for (i = 0; i < t->type.enum_type.elems; i++)
	{
	    (t->type.enum_type.tags)[i] =
		make_string((a68_type->type.data.enum_type.data)[i].tag);
	    (t->type.enum_type.subtypes)[i] =
		make_type((a68_type->type.data.enum_type.data)[i].subtype);
	}
	break;
    case EPI_C_TYPE_FNTYPE:
	t->type.fn_type.input = make_type(a68_type->type.data.fn_type.input);
	t->type.fn_type.output = make_type(a68_type->type.data.fn_type.output);
	break;
    case EPI_C_TYPE_INT:
	t->type.int_type.tag = make_string(a68_type->type.data.int_type.tag);
	t->type.int_type.lwb = make_int(a68_type->type.data.int_type.lwb);
	t->type.int_type.upb = make_int(a68_type->type.data.int_type.upb);
	break;
    case EPI_C_TYPE_NULL:
	/* only the ident and class are used */
	break;
    case EPI_C_TYPE_ROW:
	t->type.row_type.elems =
	    make_unsigned(a68_type->type.data.row_type.elems);
	t->type.row_type.subtype =
	    make_type(a68_type->type.data.row_type.subtype);
	break;
    case EPI_C_TYPE_STRING:
	t->type.string_type.length =
	    make_unsigned(a68_type->type.data.string_type.length);
	t->type.string_type.subtype =
	    make_type(a68_type->type.data.string_type.subtype);
	break;
    case EPI_C_TYPE_STRUCT:
	t->type.struct_type.elems = a68_type->type.data.struct_type.upb;
	t->type.struct_type.subtypes =
	    NEW_VEC(EPI_TYPE, t->type.struct_type.elems);
	for (i = 0; i < t->type.struct_type.elems; i++)
	    (t->type.struct_type.subtypes)[i] =
		make_type((a68_type->type.data.struct_type.data)[i]);
	break;
    default:
	t->class = EPI_C_TYPE_INVALID;
	break;
    }

    return t;
}

EPI_NODE make_node(a68_node)
A68_EPI_NODE a68_node;
{
    EPI_NODE s;

    s.ident = make_ident(a68_node.ident);
    s.fn = make_int(a68_node.fn);
    s.instance = make_int(a68_node.instance);
    s.circuit = make_int(a68_node.circuit);
    s.base = make_int(a68_node.base);
    s.upb_rnodelist = a68_node.rnodelist.upb;
    s.rnodelist = NEW_VEC(EPI_INT, s.upb_rnodelist);
    memcpy(s.rnodelist, a68_node.rnodelist.data, s.upb_rnodelist * sizeof(A68_INT));
    return s;
}

EPI_SIGNAL make_signal(a68_signal)
A68_EPI_SIGNAL a68_signal;
{
    EPI_SIGNAL s;

    s.ident = make_ident(a68_signal.ident);
    s.upb_value = a68_signal.value.upb;
    s.value = NEW_VEC(EPI_INT, s.upb_value);
    memcpy(s.value, a68_signal.value.data, s.upb_value * sizeof(A68_INT));
    return s;
}

EPI_EVENT make_event(a68_event)
A68_EPI_EVENT a68_event;
{
    EPI_EVENT e;

    e.ident = make_ident(a68_event.ident);
    e.time = make_unsigned(a68_event.time);
    e.testpoint = make_testpoint(a68_event.testpoint);
    e.signal = make_signal(a68_event.signal);
    return e;
}

EPI_RAM_VALUE make_ram_value(a68_ram_value)
A68_EPI_RAM_VALUE a68_ram_value;
{
    EPI_RAM_VALUE r;

    r.ident = make_ident(a68_ram_value.ident);
    r.address = make_signal(a68_ram_value.address);
    r.data = make_signal(a68_ram_value.data);
    return r;
}

EPI_FN_INPUT make_fn_input(a68_fn_input)
A68_EPI_FN_INPUT a68_fn_input;
{
    EPI_FN_INPUT r;

    r.ident = make_ident(a68_fn_input.ident);
    r.seq = make_unsigned(a68_fn_input.seq);
    r.node = make_node(a68_fn_input.node);

    return r;
}

/* Pointers to Algol 68 EPI support functions */
/* ------------------------------------------ */

/* These pointers are initialised with a procedure which will report */
/* a fault if invoked; they are then set to point to the relevant    */
/* support routine by buffer_epi_initialise.                         */

typedef EPI_STATUS_CODE(*A68_FN) ();

A68_FN a68_epi_start = default_epi_function;
A68_FN a68_epi_finish = default_epi_function;
A68_FN a68_epi_restore_simulation = default_epi_function;
A68_FN a68_epi_interrupt = default_epi_function;

A68_FN a68_epi_nominate_handler = default_epi_function;
A68_FN a68_epi_notify_cpu_usage = default_epi_function;
A68_FN a68_epi_dont_notify_cpu_usage = default_epi_function;
A68_FN a68_epi_start_diagnostics = default_epi_function;
A68_FN a68_epi_stop_diagnostics = default_epi_function;
A68_FN a68_epi_get_handler = default_epi_function;
A68_FN a68_epi_status_message = default_epi_function;

A68_FN a68_epi_clear_library = default_epi_function;
A68_FN a68_epi_increase_library = default_epi_function;
A68_FN a68_epi_make_context = default_epi_function;
A68_FN a68_epi_regress_library = default_epi_function;
A68_FN a68_epi_save_library = default_epi_function;
A68_FN a68_epi_get_library_details = default_epi_function;
A68_FN a68_epi_same_library = default_epi_function;

A68_FN a68_epi_copy_context = default_epi_function;
A68_FN a68_epi_erase_context = default_epi_function;
A68_FN a68_epi_clear_context = default_epi_function;
A68_FN a68_epi_convert_to_simple = default_epi_function;
A68_FN a68_epi_convert_to_compound = default_epi_function;
A68_FN a68_epi_make_imports = default_epi_function;
A68_FN a68_epi_get_context_details = default_epi_function;
A68_FN a68_epi_same_context = default_epi_function;
A68_FN a68_epi_compile = default_epi_function;
A68_FN a68_epi_copy_imports = default_epi_function;
A68_FN a68_epi_erase_imports = default_epi_function;
A68_FN a68_epi_clear_imports = default_epi_function;
A68_FN a68_epi_dump_imports = default_epi_function;
A68_FN a68_epi_simulate_imports = default_epi_function;
A68_FN a68_epi_get_imports_details = default_epi_function;
A68_FN a68_epi_get_closure_details = default_epi_function;
A68_FN a68_epi_same_imports = default_epi_function;

A68_FN a68_epi_fixup_binding = default_epi_function;
A68_FN a68_epi_clear_binding = default_epi_function;
A68_FN a68_epi_dump_binding = default_epi_function;
A68_FN a68_epi_simulate_binding = default_epi_function;
A68_FN a68_epi_get_binding_details = default_epi_function;
A68_FN a68_epi_same_binding = default_epi_function;

A68_FN a68_epi_erase_declaration = default_epi_function;
A68_FN a68_epi_clear_export = default_epi_function;
A68_FN a68_epi_export = default_epi_function;
A68_FN a68_epi_get_declaration_details = default_epi_function;
A68_FN a68_epi_same_declaration = default_epi_function;

A68_FN a68_eti_command = default_epi_function;
A68_FN a68_eti_clearinputs = default_epi_function;
A68_FN a68_eti_input = default_epi_function;
A68_FN a68_eti_removefile = default_epi_function;
A68_FN a68_eti_showinput = default_epi_function;
A68_FN a68_eti_dontshowinput = default_epi_function;
A68_FN a68_eti_offline = default_epi_function;
A68_FN a68_eti_log = default_epi_function;
A68_FN a68_eti_dontlog = default_epi_function;
A68_FN a68_eti_output = default_epi_function;
A68_FN a68_eti_dontoutput = default_epi_function;
A68_FN a68_eti_showoutput = default_epi_function;
A68_FN a68_eti_dontshowoutput = default_epi_function;
A68_FN a68_eti_obey = default_epi_function;
A68_FN a68_epi_get_eti_details = default_epi_function;

A68_FN a68_epi_set_input = default_epi_function;
A68_FN a68_epi_finish_simulation = default_epi_function;
A68_FN a68_epi_capture_simulation = default_epi_function;
A68_FN a68_epi_restart_simulation = default_epi_function;
A68_FN a68_epi_replay_simulation = default_epi_function;
A68_FN a68_epi_get_simulation_details = default_epi_function;

A68_FN a68_epi_create_testpoint = default_epi_function;
A68_FN a68_epi_keep = default_epi_function;
A68_FN a68_epi_dont_keep = default_epi_function;
A68_FN a68_epi_set_ram = default_epi_function;
A68_FN a68_epi_simulate_function = default_epi_function;
A68_FN a68_epi_get_node_details = default_epi_function;
A68_FN a68_epi_get_signal = default_epi_function;
A68_FN a68_epi_get_ram_values = default_epi_function;
A68_FN a68_epi_parse_nodename = default_epi_function;

A68_FN a68_epi_erase_testpoint = default_epi_function;
A68_FN a68_epi_get_testpoint_details = default_epi_function;

/* Buffer routines */
/* --------------- */

/* The following routines act as a buffer between the Algol 68 */
/* support routines and the C library routines.                */

/* general functions */

EPI_STATUS_CODE dpc_epi_start(library_name, create)
EPI_STRING library_name;
EPI_BOOL create;
{
    return make_status_code(a68_epi_start(make_a68_string(library_name),
				   make_a68_bool(create)));
}

EPI_STATUS_CODE dpc_epi_finish()
{
    return make_status_code(a68_epi_finish());
}

EPI_STATUS_CODE dpc_epi_interrupt()
{
    return make_status_code(a68_epi_interrupt());
}

EPI_STATUS_CODE dpc_epi_restore_simulation(filename)
EPI_STRING filename;
{
    return make_status_code(a68_epi_restore_simulation(make_a68_string(filename)));
}

 /* epi_nominate_handler,                          */
 /* epi_start_diagnostics,                         */
 /* epi_stop_diagnostics   - no support equivalent */

EPI_STATUS_CODE dpc_epi_notify_cpu_usage()
{
    return make_status_code(a68_epi_notify_cpu_usage());
}

EPI_STATUS_CODE dpc_epi_dont_notify_cpu_usage()
{
    return make_status_code(a68_epi_dont_notify_cpu_usage());
}

/* library functions */

EPI_STATUS_CODE dpc_epi_clear_library(library)
EPI_LIBRARY library;
{
    return make_status_code(a68_epi_clear_library(make_a68_library(library)));
}

EPI_STATUS_CODE dpc_epi_increase_library(library, increment)
EPI_LIBRARY library;
EPI_UNSIGNED increment;
{
    return make_status_code(a68_epi_increase_library(make_a68_library(library),
					      make_a68_unsigned(increment)));
}

EPI_STATUS_CODE dpc_epi_make_context(library, name)
EPI_LIBRARY library;
EPI_STRING name;
{
    return make_status_code(a68_epi_make_context(make_a68_library(library),
					  make_a68_string(name)));
}

EPI_STATUS_CODE dpc_epi_regress_library(library)
EPI_LIBRARY library;
{
    return make_status_code(a68_epi_regress_library(make_a68_library(library)));
}

EPI_STATUS_CODE dpc_epi_save_library(library)
EPI_LIBRARY library;
{
    return make_status_code(a68_epi_save_library(make_a68_library(library)));
}

EPI_STATUS_CODE dpc_epi_get_library_details(library, mtype_array)
EPI_LIBRARY library;
EPI_MESSAGE_TYPE *mtype_array;
{
    return make_status_code(a68_epi_get_library_details(make_a68_library(library),
					    make_a68_mtype_row(mtype_array)));
}

/* context functions */

EPI_STATUS_CODE dpc_epi_copy_context(context, name)
EPI_CONTEXT context;
EPI_STRING name;
{
    return make_status_code(a68_epi_copy_context(make_a68_context(context),
					  make_a68_string(name)));
}

EPI_STATUS_CODE dpc_epi_erase_context(context)
EPI_CONTEXT context;
{
    return make_status_code(a68_epi_erase_context(make_a68_context(context)));
}

EPI_STATUS_CODE dpc_epi_clear_context(context)
EPI_CONTEXT context;
{
    return make_status_code(a68_epi_clear_context(make_a68_context(context)));
}

EPI_STATUS_CODE dpc_epi_convert_to_simple(context)
EPI_CONTEXT context;
{
    return make_status_code(a68_epi_convert_to_simple(make_a68_context(context)));
}

EPI_STATUS_CODE dpc_epi_convert_to_compound(context, name)
EPI_CONTEXT context;
EPI_STRING name;
{
    return make_status_code(a68_epi_convert_to_compound(make_a68_context(context),
						 make_a68_string(name)));
}

EPI_STATUS_CODE dpc_epi_make_imports(context, name)
EPI_CONTEXT context;
EPI_STRING name;
{
    return make_status_code(a68_epi_make_imports(make_a68_context(context),
					  make_a68_string(name)));
}

EPI_STATUS_CODE dpc_epi_get_context_details(context, mtype_array)
EPI_CONTEXT context;
EPI_MESSAGE_TYPE *mtype_array;
{
    return make_status_code(a68_epi_get_context_details(make_a68_context(context),
					    make_a68_mtype_row(mtype_array)));
}

/* imports functions */

EPI_STATUS_CODE dpc_epi_compile(imports, filename)
EPI_IMPORTS imports;
EPI_STRING filename;
{
    return make_status_code(a68_epi_compile(make_a68_imports(imports),
				     make_a68_string(filename)));
}

EPI_STATUS_CODE dpc_epi_copy_imports(imports, name)
EPI_IMPORTS imports;
EPI_STRING name;
{
    return make_status_code(a68_epi_copy_imports(make_a68_imports(imports),
					  make_a68_string(name)));
}

EPI_STATUS_CODE dpc_epi_erase_imports(imports)
EPI_IMPORTS imports;
{
    return make_status_code(a68_epi_erase_imports(make_a68_imports(imports)));
}

EPI_STATUS_CODE dpc_epi_clear_imports(imports)
EPI_IMPORTS imports;
{
    return make_status_code(a68_epi_clear_imports(make_a68_imports(imports)));
}

EPI_STATUS_CODE dpc_epi_dump_imports(imports, filename, dump_attr,
				     dump_imports, convert_seq)
EPI_IMPORTS imports;
EPI_STRING filename;
EPI_BOOL dump_attr, dump_imports, convert_seq;
{
    return make_status_code(a68_epi_dump_imports(make_a68_imports(imports),
					  make_a68_string(filename),
					  make_a68_bool(dump_attr),
					  make_a68_bool(dump_imports),
					  make_a68_bool(convert_seq)));
}

EPI_STATUS_CODE dpc_epi_simulate_imports(imports)
EPI_IMPORTS imports;
{
    return make_status_code(a68_epi_simulate_imports(make_a68_imports(imports)));
}

EPI_STATUS_CODE dpc_epi_get_imports_details(imports, mtype_array)
EPI_IMPORTS imports;
EPI_MESSAGE_TYPE *mtype_array;
{
    return make_status_code(a68_epi_get_imports_details(make_a68_imports(imports),
					    make_a68_mtype_row(mtype_array)));
}

EPI_STATUS_CODE dpc_epi_get_closure_details(imports, mtype_array)
EPI_IMPORTS imports;
EPI_MESSAGE_TYPE *mtype_array;
{
    return make_status_code(a68_epi_get_closure_details(make_a68_imports(imports),
					    make_a68_mtype_row(mtype_array)));
}

/* binding functions */

EPI_STATUS_CODE dpc_epi_fixup_binding(from, to)
EPI_BINDING from, to;
{
    return make_status_code(a68_epi_fixup_binding(make_a68_binding(from),
					   make_a68_binding(to)));
}

EPI_STATUS_CODE dpc_epi_clear_binding(binding)
EPI_BINDING binding;
{
    return make_status_code(a68_epi_clear_binding(make_a68_binding(binding)));
}

EPI_STATUS_CODE dpc_epi_dump_binding(binding, filename, dump_attr,
				     dump_imports, convert_seq)
EPI_BINDING binding;
EPI_STRING filename;
EPI_BOOL dump_attr, dump_imports, convert_seq;
{
    return make_status_code(a68_epi_dump_binding(make_a68_binding(binding),
					  make_a68_string(filename),
					  make_a68_bool(dump_attr),
					  make_a68_bool(dump_imports),
					  make_a68_bool(convert_seq)));
}

EPI_STATUS_CODE dpc_epi_simulate_binding(binding)
EPI_BINDING binding;
{
    return make_status_code(a68_epi_simulate_binding(make_a68_binding(binding)));
}

EPI_STATUS_CODE dpc_epi_get_binding_details(binding, mtype_array)
EPI_BINDING binding;
EPI_MESSAGE_TYPE *mtype_array;
{
    return make_status_code(a68_epi_get_binding_details(make_a68_binding(binding),
					    make_a68_mtype_row(mtype_array)));
}

/* declaration functions */

EPI_STATUS_CODE dpc_epi_erase_declaration(declaration)
EPI_DECLARATION declaration;
{
    return make_status_code(a68_epi_erase_declaration(
					  make_a68_declaration(declaration)));
}

EPI_STATUS_CODE dpc_epi_clear_export(declaration)
EPI_DECLARATION declaration;
{
    return make_status_code(a68_epi_clear_export(make_a68_declaration(declaration)));
}

EPI_STATUS_CODE dpc_epi_export(declaration)
EPI_DECLARATION declaration;
{
    return make_status_code(a68_epi_export(make_a68_declaration(declaration)));
}

EPI_STATUS_CODE dpc_epi_get_declaration_details(declaration, mtype_array)
EPI_DECLARATION declaration;
EPI_MESSAGE_TYPE *mtype_array;
{
    return make_status_code(a68_epi_get_declaration_details(
					    make_a68_declaration(declaration),
					    make_a68_mtype_row(mtype_array)));
}

/* eti functions */

EPI_STATUS_CODE dpc_eti_command(command)
EPI_STRING command;
{
    return make_status_code(a68_eti_command(make_a68_string(command)));
}

EPI_STATUS_CODE dpc_eti_clearinputs()
{
    return make_status_code(a68_eti_clearinputs());
}

EPI_STATUS_CODE dpc_eti_input(filename)
EPI_STRING filename;
{
    return make_status_code(a68_eti_input(make_a68_string(filename)));
}

EPI_STATUS_CODE dpc_eti_removefile()
{
    return make_status_code(a68_eti_removefile());
}

EPI_STATUS_CODE dpc_eti_showinput()
{
    return make_status_code(a68_eti_showinput());
}

EPI_STATUS_CODE dpc_eti_dontshowinput()
{
    return make_status_code(a68_eti_dontshowinput());
}

EPI_STATUS_CODE dpc_eti_offline()
{
    return make_status_code(a68_eti_offline());
}

EPI_STATUS_CODE dpc_eti_log(filename)
EPI_STRING filename;
{
    return make_status_code(a68_eti_log(make_a68_string(filename)));
}

EPI_STATUS_CODE dpc_eti_dontlog()
{
    return make_status_code(a68_eti_dontlog());
}

EPI_STATUS_CODE dpc_eti_output(filename)
EPI_STRING filename;
{
    return make_status_code(a68_eti_output(make_a68_string(filename)));
}

EPI_STATUS_CODE dpc_eti_dontoutput()
{
    return make_status_code(a68_eti_dontoutput());
}

EPI_STATUS_CODE dpc_eti_showoutput()
{
    return make_status_code(a68_eti_showoutput());
}

EPI_STATUS_CODE dpc_eti_dontshowoutput()
{
    return make_status_code(a68_eti_dontshowoutput());
}

EPI_STATUS_CODE dpc_eti_obey(command)
EPI_STRING command;
{
    return make_status_code(a68_eti_obey(make_a68_string(command)));
}

EPI_STATUS_CODE dpc_epi_get_eti_details(mtype_array)
EPI_MESSAGE_TYPE *mtype_array;
{
    return make_status_code(a68_epi_get_eti_details(make_a68_mtype_row(mtype_array)));
}

EPI_STATUS_CODE dpc_epi_set_input(inputnode, value)
EPI_NODE inputnode;
EPI_SIGNAL value;
{
    return make_status_code(a68_epi_set_input(
			   make_a68_node(inputnode), make_a68_signal(value)));
}

EPI_STATUS_CODE dpc_epi_finish_simulation(save)
EPI_BOOL save;
{
    return make_status_code(a68_epi_finish_simulation(make_a68_bool(save)));
}

EPI_STATUS_CODE dpc_epi_capture_simulation(filename)
EPI_STRING filename;
{
    return make_status_code(a68_epi_capture_simulation(make_a68_string(filename)));
}

EPI_STATUS_CODE dpc_epi_restart_simulation(increment)
EPI_UNSIGNED increment;
{
    return make_status_code(a68_epi_restart_simulation(make_a68_unsigned(increment)));
}

EPI_STATUS_CODE dpc_epi_replay_simulation(start_time, end_time)
EPI_UNSIGNED start_time;
EPI_UNSIGNED end_time;
{
    return make_status_code(a68_epi_replay_simulation(
		 make_a68_unsigned(start_time), make_a68_unsigned(end_time)));
}

EPI_STATUS_CODE dpc_epi_get_simulation_details(mtype_array)
EPI_MESSAGE_TYPE *mtype_array;
{
    return make_status_code(a68_epi_get_simulation_details(
					    make_a68_mtype_row(mtype_array)));
}


EPI_STATUS_CODE dpc_epi_create_testpoint(node, action, condition, value)
EPI_NODE node;
EPI_UNSIGNED action, condition;
EPI_SIGNAL value;
{
    return make_status_code(a68_epi_create_testpoint(
			       make_a68_node(node), make_a68_unsigned(action),
		       make_a68_unsigned(condition), make_a68_signal(value)));
}

EPI_STATUS_CODE dpc_epi_keep(node)
EPI_NODE node;
{
    return make_status_code(a68_epi_keep(make_a68_node(node)));
}

EPI_STATUS_CODE dpc_epi_dont_keep(node)
EPI_NODE node;
{
    return make_status_code(a68_epi_dont_keep(make_a68_node(node)));
}

EPI_STATUS_CODE dpc_epi_set_ram(node, lwb, upb, values, upb_values)
EPI_NODE node;
EPI_SIGNAL lwb, upb;
EPI_SIGNAL *values;
EPI_UNSIGNED upb_values;
{
    return make_status_code(a68_epi_set_ram(
				     make_a68_node(node), make_a68_signal(lwb),
	      make_a68_signal(upb), make_a68_signal_row(values, upb_values)));
}

EPI_STATUS_CODE dpc_epi_simulate_function(function)
EPI_STRING function;
{
    return make_status_code(a68_epi_simulate_function(make_a68_string(function)));
}

EPI_STATUS_CODE dpc_epi_get_node_details(node, mtype_array)
EPI_NODE node;
EPI_MESSAGE_TYPE *mtype_array;
{
    return make_status_code(a68_epi_get_node_details(
		       make_a68_node(node), make_a68_mtype_row(mtype_array)));
}

EPI_STATUS_CODE dpc_epi_get_signal(node)
EPI_NODE node;
{
    return make_status_code(a68_epi_get_signal(make_a68_node(node)));
}

EPI_STATUS_CODE dpc_epi_get_ram_values(ramnode, lwb, upb)
EPI_NODE ramnode;
EPI_SIGNAL lwb, upb;
{
    return make_status_code(a68_epi_get_ram_values(
	 make_a68_node(ramnode), make_a68_signal(lwb), make_a68_signal(upb)));
}

EPI_STATUS_CODE dpc_epi_parse_nodename(node_name)
EPI_STRING node_name;
{
    return make_status_code(a68_epi_parse_nodename(make_a68_string(node_name)));
}


EPI_STATUS_CODE dpc_epi_erase_testpoint(testpoint)
EPI_TESTPOINT testpoint;
{
    return make_status_code(a68_epi_erase_testpoint(make_a68_testpoint(testpoint)));
}

EPI_STATUS_CODE dpc_epi_get_testpoint_details(testpoint, mtype_array)
EPI_TESTPOINT testpoint;
EPI_MESSAGE_TYPE *mtype_array;
{
    return make_status_code(a68_epi_get_testpoint_details(
	     make_a68_testpoint(testpoint), make_a68_mtype_row(mtype_array)));
}


/* send	message	*/

void buffer_epi_send_message(a68_message)	/* invoked by support */
A68_EPI_MESSAGE a68_message;
{
    int i;
    char *p;
    EPI_MESSAGE message;

    message = new_message();	/* heap	message	using calloc */    
    epi_message_type(message) = make_message_type(a68_message->type);
    message->previous = EPI_NULL_MESSAGE; /* indicates not linked to a status */
    message->next = EPI_NULL_MESSAGE;
    switch (a68_message->type)
    {
	/* epi_string	 */
    case EPI_M_INTERNAL_ERROR:
    case EPI_M_LOCAL_OS_ERROR:
    case EPI_M_REMOTE_OS_ERROR:
    case EPI_M_ABORTED:
    case EPI_M_LIB_NAME:
    case EPI_M_CONTEXT_NAME:
    case EPI_M_IMPORTS_NAME:
    case EPI_M_DECL_NAME:
    case EPI_M_DECL_SOURCE:
    case EPI_M_COMPILE_ERROR:
    case EPI_M_ASSEMBLY_ERROR:
    case EPI_M_SIMULATABLE_NODE:
    case ETI_M_OUTPUT:
    case ETI_M_INPUT_FILE:
    case ETI_M_INPUT_START:
    case ETI_M_INPUT_END:
    case ETI_M_OUTPUT_FILE:
    case ETI_M_LOG_FILE:
    case EPI_M_KEPT_NODE:
    case EPI_M_NODE_NAME:
	message->data.string = make_string(a68_message->info.data.string);
	break;

	/* epi_unsigned, epi_time */
    case EPI_M_CPU:
    case EPI_M_LIB_VERSION:
    case EPI_M_LIB_LAST_WRITTEN:
    case EPI_M_LIB_LAST_CLEARED:
    case EPI_M_LIB_SIZE:
    case EPI_M_LIB_OVERHEAD:
    case EPI_M_LIB_FREE:
    case EPI_M_DECL_CLASS:
    case EPI_M_DECL_VERSION:
    case ETI_M_INPUT_FILE_COUNT:
    case ETI_M_MODE:
    case EPI_M_SIM_TIME:
    case EPI_M_NODE_CLASS:
    case EPI_M_TESTPOINT_ACTION:
    case EPI_M_TESTPOINT_CONDITION:
	message->data.unsgnd = make_unsigned(a68_message->info.data.unsgnd);
	break;

	/* epi_bool */
    case EPI_M_LIB_CHANGED:
    case EPI_M_DECL_EXPORTED_FLAG:
    case EPI_M_DECL_IMPORT:
    case ETI_M_SHOWING_INPUT:
    case ETI_M_SHOWING_OUTPUT:
    case EPI_M_NODE_KEPT:
	message->data.bool = make_bool(a68_message->info.data.bool);
	break;

	/* epi_library */
    case EPI_M_LIBRARY:
	message->data.library = make_library(
					      a68_message->info.data.library);
	break;

	/* epi_context */
    case EPI_M_CONTEXT:
	message->data.context = make_context(
					      a68_message->info.data.context);
	break;

	/* epi_imports */
    case EPI_M_IMPORTS:
	message->data.imports = make_imports(
					      a68_message->info.data.imports);
	break;

	/* epi_binding */
    case EPI_M_BINDING:
    case EPI_M_BINDING_INCOMPLETE:
	message->data.binding = make_binding(
					      a68_message->info.data.binding);
	break;

	/* epi_declaration */
    case EPI_M_DECLARATION:
    case EPI_M_DECL_USES:
    case EPI_M_DECL_USED_BY:
    case EPI_M_NEW_DECL:
    case EPI_M_CHANGED_DECL:
    case EPI_M_INCONSISTENT_DECL:
    case EPI_M_DECL_NOT_EXPORTED:
    case EPI_M_DECL_EXPORTED:
    case EPI_M_DECL_NOT_BOUND:
    case EPI_M_DECL_LATEST:
	message->data.declaration = make_declaration(
					  a68_message->info.data.declaration);
	break;

	/* node */
    case EPI_M_NODE:
    case EPI_M_SIMULATED_NODE:
    case EPI_M_NODE_CONTAINS:
    case EPI_M_NODE_CONTAINED_IN:
	message->data.node = make_node(a68_message->info.data.node);
	break;

	/* type */
    case EPI_M_TYPE:
	message->data.type = make_type(&(a68_message->info.data.type));
	break;

	/* signal */
    case EPI_M_SIGNAL:
    case EPI_M_TESTPOINT_COND_VALUE:
	message->data.signal =
	    make_signal(a68_message->info.data.signal);
	break;

	/* testpoint */
    case EPI_M_TESTPOINT:
    case EPI_M_OLD_TESTPOINT:
	message->data.testpoint =
	    make_testpoint(a68_message->info.data.testpoint);
	break;

	/* event */
    case EPI_M_EVENT:
    case EPI_M_FIRST_EVENT:
    case EPI_M_INCOMPLETE_EVENT:
    case EPI_M_INCOMPLETE_FIRST_EVENT:
	message->data.event = make_event(a68_message->info.data.event);
	break;

	/* fn input */
    case EPI_M_FN_INPUT:
	message->data.fninput =
	    make_fn_input(a68_message->info.data.fninput);
	break;

	/* ram value */
    case EPI_M_RAM_VALUE:
	message->data.ramvalue =
	    make_ram_value(a68_message->info.data.ramvalue);
	break;

	/* unknown */
    default:
	epi_message_type(message) = EPI_M_INTERNAL_ERROR;
	epi_m_internal_error(message) =
	    "dpc buffer	received message with unknown type";
	break;
    }
    epi_send_message(message);	/* call	library	routine	 */
}


/* Initialisation routine */
/* ---------------------- */

/* This	routine	is invoked by the support routine epi_initialise.     */
/* It initialises the PROCINFO table (held by the library) with	      */
/* pointers to local buffer routines. The Algol	68 procedure pointers */
/* supplied with the call are saved in local variables (for use later */
/* by the buffer routines).  					      */

void buffer_epi_initialise(
				   epi_start_desc,
				   epi_finish_desc,
				   epi_restore_simulation_desc,
				   epi_interrupt_desc,
				   epi_notify_cpu_usage_desc,
				   epi_dont_notify_cpu_usage_desc,
				   epi_clear_library_desc,
				   epi_increase_library_desc,
				   epi_make_context_desc,
				   epi_regress_library_desc,
				   epi_save_library_desc,
				   epi_get_library_details_desc,
				   epi_copy_context_desc,
				   epi_erase_context_desc,
				   epi_clear_context_desc,
				   epi_convert_to_simple_desc,
				   epi_convert_to_compound_desc,
				   epi_make_imports_desc,
				   epi_get_context_details_desc,
				   epi_compile_desc,
				   epi_copy_imports_desc,
				   epi_erase_imports_desc,
				   epi_clear_imports_desc,
				   epi_dump_imports_desc,
				   epi_simulate_imports_desc,
				   epi_get_imports_details_desc,
				   epi_get_closure_details_desc,
				   epi_fixup_binding_desc,
				   epi_clear_binding_desc,
				   epi_dump_binding_desc,
				   epi_simulate_binding_desc,
				   epi_get_binding_details_desc,
				   epi_erase_declaration_desc,
				   epi_clear_export_desc,
				   epi_export_desc,
				   epi_get_declaration_details_desc,
				   eti_command_desc,
				   eti_clearinputs_desc,
				   eti_input_desc,
				   eti_removefile_desc,
				   eti_showinput_desc,
				   eti_dontshowinput_desc,
				   eti_offline_desc,
				   eti_log_desc,
				   eti_dontlog_desc,
				   eti_output_desc,
				   eti_dontoutput_desc,
				   eti_showoutput_desc,
				   eti_dontshowoutput_desc,
				   eti_obey_desc,
				   epi_get_eti_details_desc,
				   epi_set_input_desc,
				   epi_finish_simulation_desc,
				   epi_capture_simulation_desc,
				   epi_restart_simulation_desc,
				   epi_replay_simulation_desc,
				   epi_get_simulation_details_desc,
				   epi_create_testpoint_desc,
				   epi_keep_desc,
				   epi_dont_keep_desc,
				   epi_set_ram_desc,
				   epi_simulate_function_desc,
				   epi_get_node_details_desc,
				   epi_get_signal_desc,
				   epi_get_ram_values_desc,
				   epi_parse_nodename_desc,
				   epi_erase_testpoint_desc,
				   epi_get_testpoint_details_desc
			   	 , desc_ptr
)
 A68_SUP_FN_DESC
 epi_start_desc,
 epi_finish_desc,
 epi_restore_simulation_desc,
 epi_interrupt_desc,
 epi_notify_cpu_usage_desc,
 epi_dont_notify_cpu_usage_desc,
 epi_clear_library_desc,
 epi_increase_library_desc,
 epi_make_context_desc,
 epi_regress_library_desc,
 epi_save_library_desc,
 epi_get_library_details_desc,
 epi_copy_context_desc,
 epi_erase_context_desc,
 epi_clear_context_desc,
 epi_convert_to_simple_desc,
 epi_convert_to_compound_desc,
 epi_make_imports_desc,
 epi_get_context_details_desc,
 epi_compile_desc,
 epi_copy_imports_desc,
 epi_erase_imports_desc,
 epi_clear_imports_desc,
 epi_dump_imports_desc,
 epi_simulate_imports_desc,
 epi_get_imports_details_desc,
 epi_get_closure_details_desc,
 epi_fixup_binding_desc,
 epi_clear_binding_desc,
 epi_dump_binding_desc,
 epi_simulate_binding_desc,
 epi_get_binding_details_desc,
 epi_erase_declaration_desc,
 epi_clear_export_desc,
 epi_export_desc,
 epi_get_declaration_details_desc,
 eti_command_desc,
 eti_clearinputs_desc,
 eti_input_desc,
 eti_removefile_desc,
 eti_showinput_desc,
 eti_dontshowinput_desc,
 eti_offline_desc,
 eti_log_desc,
 eti_dontlog_desc,
 eti_output_desc,
 eti_dontoutput_desc,
 eti_showoutput_desc,
 eti_dontshowoutput_desc,
 eti_obey_desc,
 epi_get_eti_details_desc,
 epi_set_input_desc,
 epi_finish_simulation_desc,
 epi_capture_simulation_desc,
 epi_restart_simulation_desc,
 epi_replay_simulation_desc,
 epi_get_simulation_details_desc,
 epi_create_testpoint_desc,
 epi_keep_desc,
 epi_dont_keep_desc,
 epi_set_ram_desc,
 epi_simulate_function_desc,
 epi_get_node_details_desc,
 epi_get_signal_desc,
 epi_get_ram_values_desc,
 epi_parse_nodename_desc,
 epi_erase_testpoint_desc,
 epi_get_testpoint_details_desc;
A68_FN_DESC *desc_ptr;
{
    FUNCTION_POINTER(EPI_START) = dpc_epi_start;
    a68_epi_start = A68_FN_PTR(epi_start_desc);
    FUNCTION_POINTER(EPI_FINISH) = dpc_epi_finish;
    a68_epi_finish = A68_FN_PTR(epi_finish_desc);
    FUNCTION_POINTER(EPI_RESTORE_SIMULATION) = dpc_epi_restore_simulation;
    a68_epi_restore_simulation = A68_FN_PTR(epi_restore_simulation_desc);
    FUNCTION_POINTER(EPI_INTERRUPT) = dpc_epi_interrupt;
    a68_epi_interrupt = A68_FN_PTR(epi_interrupt_desc);

    FUNCTION_POINTER(EPI_NOTIFY_CPU_USAGE) = dpc_epi_notify_cpu_usage;
    a68_epi_notify_cpu_usage = A68_FN_PTR(epi_notify_cpu_usage_desc);
    FUNCTION_POINTER(EPI_DONT_NOTIFY_CPU_USAGE) =
	dpc_epi_dont_notify_cpu_usage;
    a68_epi_dont_notify_cpu_usage = A68_FN_PTR(epi_dont_notify_cpu_usage_desc);

    FUNCTION_POINTER(EPI_CLEAR_LIBRARY) = dpc_epi_clear_library;
    a68_epi_clear_library = A68_FN_PTR(epi_clear_library_desc);
    FUNCTION_POINTER(EPI_INCREASE_LIBRARY) = dpc_epi_increase_library;
    a68_epi_increase_library = A68_FN_PTR(epi_increase_library_desc);
    FUNCTION_POINTER(EPI_MAKE_CONTEXT) = dpc_epi_make_context;
    a68_epi_make_context = A68_FN_PTR(epi_make_context_desc);
    FUNCTION_POINTER(EPI_REGRESS_LIBRARY) = dpc_epi_regress_library;
    a68_epi_regress_library = A68_FN_PTR(epi_regress_library_desc);
    FUNCTION_POINTER(EPI_SAVE_LIBRARY) = dpc_epi_save_library;
    a68_epi_save_library = A68_FN_PTR(epi_save_library_desc);
    FUNCTION_POINTER(EPI_GET_LIBRARY_DETAILS) = dpc_epi_get_library_details;
    a68_epi_get_library_details = A68_FN_PTR(epi_get_library_details_desc);

    FUNCTION_POINTER(EPI_COPY_CONTEXT) = dpc_epi_copy_context;
    a68_epi_copy_context = A68_FN_PTR(epi_copy_context_desc);
    FUNCTION_POINTER(EPI_ERASE_CONTEXT) = dpc_epi_erase_context;
    a68_epi_erase_context = A68_FN_PTR(epi_erase_context_desc);
    FUNCTION_POINTER(EPI_CLEAR_CONTEXT) = dpc_epi_clear_context;
    a68_epi_clear_context = A68_FN_PTR(epi_clear_context_desc);
    FUNCTION_POINTER(EPI_CONVERT_TO_SIMPLE) = dpc_epi_convert_to_simple;
    a68_epi_convert_to_simple = A68_FN_PTR(epi_convert_to_simple_desc);
    FUNCTION_POINTER(EPI_CONVERT_TO_COMPOUND) = dpc_epi_convert_to_compound;
    a68_epi_convert_to_compound = A68_FN_PTR(epi_convert_to_compound_desc);
    FUNCTION_POINTER(EPI_MAKE_IMPORTS) = dpc_epi_make_imports;
    a68_epi_make_imports = A68_FN_PTR(epi_make_imports_desc);
    FUNCTION_POINTER(EPI_GET_CONTEXT_DETAILS) = dpc_epi_get_context_details;
    a68_epi_get_context_details = A68_FN_PTR(epi_get_context_details_desc);

    FUNCTION_POINTER(EPI_COMPILE) = dpc_epi_compile;
    a68_epi_compile = A68_FN_PTR(epi_compile_desc);
    FUNCTION_POINTER(EPI_COPY_IMPORTS) = dpc_epi_copy_imports;
    a68_epi_copy_imports = A68_FN_PTR(epi_copy_imports_desc);
    FUNCTION_POINTER(EPI_ERASE_IMPORTS) = dpc_epi_erase_imports;
    a68_epi_erase_imports = A68_FN_PTR(epi_erase_imports_desc);
    FUNCTION_POINTER(EPI_CLEAR_IMPORTS) = dpc_epi_clear_imports;
    a68_epi_clear_imports = A68_FN_PTR(epi_clear_imports_desc);
    FUNCTION_POINTER(EPI_DUMP_IMPORTS) = dpc_epi_dump_imports;
    a68_epi_dump_imports = A68_FN_PTR(epi_dump_imports_desc);
    FUNCTION_POINTER(EPI_SIMULATE_IMPORTS) = dpc_epi_simulate_imports;
    a68_epi_simulate_imports = A68_FN_PTR(epi_simulate_imports_desc);
    FUNCTION_POINTER(EPI_GET_IMPORTS_DETAILS) = dpc_epi_get_imports_details;
    a68_epi_get_imports_details = A68_FN_PTR(epi_get_imports_details_desc);
    FUNCTION_POINTER(EPI_GET_CLOSURE_DETAILS) = dpc_epi_get_closure_details;
    a68_epi_get_closure_details = A68_FN_PTR(epi_get_closure_details_desc);

    FUNCTION_POINTER(EPI_FIXUP_BINDING) = dpc_epi_fixup_binding;
    a68_epi_fixup_binding = A68_FN_PTR(epi_fixup_binding_desc);
    FUNCTION_POINTER(EPI_CLEAR_BINDING) = dpc_epi_clear_binding;
    a68_epi_clear_binding = A68_FN_PTR(epi_clear_binding_desc);
    FUNCTION_POINTER(EPI_DUMP_BINDING) = dpc_epi_dump_binding;
    a68_epi_dump_binding = A68_FN_PTR(epi_dump_binding_desc);
    FUNCTION_POINTER(EPI_SIMULATE_BINDING) = dpc_epi_simulate_binding;
    a68_epi_simulate_binding = A68_FN_PTR(epi_simulate_binding_desc);
    FUNCTION_POINTER(EPI_GET_BINDING_DETAILS) = dpc_epi_get_binding_details;
    a68_epi_get_binding_details = A68_FN_PTR(epi_get_binding_details_desc);

    FUNCTION_POINTER(EPI_ERASE_DECLARATION) = dpc_epi_erase_declaration;
    a68_epi_erase_declaration = A68_FN_PTR(epi_erase_declaration_desc);
    FUNCTION_POINTER(EPI_CLEAR_EXPORT) = dpc_epi_clear_export;
    a68_epi_clear_export = A68_FN_PTR(epi_clear_export_desc);
    FUNCTION_POINTER(EPI_EXPORT) = dpc_epi_export;
    a68_epi_export = A68_FN_PTR(epi_export_desc);
    FUNCTION_POINTER(EPI_GET_DECLARATION_DETAILS) =
	dpc_epi_get_declaration_details;
    a68_epi_get_declaration_details =
	A68_FN_PTR(epi_get_declaration_details_desc);

    FUNCTION_POINTER(ETI_COMMAND) = dpc_eti_command;
    a68_eti_command = A68_FN_PTR(eti_command_desc);
    FUNCTION_POINTER(ETI_CLEARINPUTS) = dpc_eti_clearinputs;
    a68_eti_clearinputs = A68_FN_PTR(eti_clearinputs_desc);
    FUNCTION_POINTER(ETI_INPUT) = dpc_eti_input;
    a68_eti_input = A68_FN_PTR(eti_input_desc);
    FUNCTION_POINTER(ETI_REMOVEFILE) = dpc_eti_removefile;
    a68_eti_removefile = A68_FN_PTR(eti_removefile_desc);
    FUNCTION_POINTER(ETI_SHOWINPUT) = dpc_eti_showinput;
    a68_eti_showinput = A68_FN_PTR(eti_showinput_desc);
    FUNCTION_POINTER(ETI_DONTSHOWINPUT) = dpc_eti_dontshowinput;
    a68_eti_dontshowinput = A68_FN_PTR(eti_dontshowinput_desc);
    FUNCTION_POINTER(ETI_OFFLINE) = dpc_eti_offline;
    a68_eti_offline = A68_FN_PTR(eti_offline_desc);
    FUNCTION_POINTER(ETI_LOG) = dpc_eti_log;
    a68_eti_log = A68_FN_PTR(eti_log_desc);
    FUNCTION_POINTER(ETI_DONTLOG) = dpc_eti_dontlog;
    a68_eti_dontlog = A68_FN_PTR(eti_dontlog_desc);
    FUNCTION_POINTER(ETI_OUTPUT) = dpc_eti_output;
    a68_eti_output = A68_FN_PTR(eti_output_desc);
    FUNCTION_POINTER(ETI_DONTOUTPUT) = dpc_eti_dontoutput;
    a68_eti_dontoutput = A68_FN_PTR(eti_dontoutput_desc);
    FUNCTION_POINTER(ETI_SHOWOUTPUT) = dpc_eti_showoutput;
    a68_eti_showoutput = A68_FN_PTR(eti_showoutput_desc);
    FUNCTION_POINTER(ETI_DONTSHOWOUTPUT) = dpc_eti_dontshowoutput;
    a68_eti_dontshowoutput = A68_FN_PTR(eti_dontshowoutput_desc);
    FUNCTION_POINTER(ETI_OBEY) = dpc_eti_obey;
    a68_eti_obey = A68_FN_PTR(eti_obey_desc);
    FUNCTION_POINTER(EPI_GET_ETI_DETAILS) = dpc_epi_get_eti_details;
    a68_epi_get_eti_details = A68_FN_PTR(epi_get_eti_details_desc);

    FUNCTION_POINTER(EPI_SET_INPUT) = dpc_epi_set_input;
    a68_epi_set_input = A68_FN_PTR(epi_set_input_desc);
    FUNCTION_POINTER(EPI_FINISH_SIMULATION) = dpc_epi_finish_simulation;
    a68_epi_finish_simulation = A68_FN_PTR(epi_finish_simulation_desc);
    FUNCTION_POINTER(EPI_CAPTURE_SIMULATION) = dpc_epi_capture_simulation;
    a68_epi_capture_simulation = A68_FN_PTR(epi_capture_simulation_desc);
    FUNCTION_POINTER(EPI_RESTART_SIMULATION) = dpc_epi_restart_simulation;
    a68_epi_restart_simulation = A68_FN_PTR(epi_restart_simulation_desc);
    FUNCTION_POINTER(EPI_REPLAY_SIMULATION) = dpc_epi_replay_simulation;
    a68_epi_replay_simulation = A68_FN_PTR(epi_replay_simulation_desc);
    FUNCTION_POINTER(EPI_GET_SIMULATION_DETAILS) = dpc_epi_get_simulation_details;
    a68_epi_get_simulation_details = A68_FN_PTR(epi_get_simulation_details_desc);

    FUNCTION_POINTER(EPI_CREATE_TESTPOINT) = dpc_epi_create_testpoint;
    a68_epi_create_testpoint = A68_FN_PTR(epi_create_testpoint_desc);
    FUNCTION_POINTER(EPI_KEEP) = dpc_epi_keep;
    a68_epi_keep = A68_FN_PTR(epi_keep_desc);
    FUNCTION_POINTER(EPI_DONT_KEEP) = dpc_epi_dont_keep;
    a68_epi_dont_keep = A68_FN_PTR(epi_dont_keep_desc);
    FUNCTION_POINTER(EPI_SET_RAM) = dpc_epi_set_ram;
    a68_epi_set_ram = A68_FN_PTR(epi_set_ram_desc);
    FUNCTION_POINTER(EPI_SIMULATE_FUNCTION) = dpc_epi_simulate_function;
    a68_epi_simulate_function = A68_FN_PTR(epi_simulate_function_desc);
    FUNCTION_POINTER(EPI_GET_NODE_DETAILS) = dpc_epi_get_node_details;
    a68_epi_get_node_details = A68_FN_PTR(epi_get_node_details_desc);
    FUNCTION_POINTER(EPI_GET_SIGNAL) = dpc_epi_get_signal;
    a68_epi_get_signal = A68_FN_PTR(epi_get_signal_desc);
    FUNCTION_POINTER(EPI_GET_RAM_VALUES) = dpc_epi_get_ram_values;
    a68_epi_get_ram_values = A68_FN_PTR(epi_get_ram_values_desc);
    FUNCTION_POINTER(EPI_PARSE_NODENAME) = dpc_epi_parse_nodename;
    a68_epi_parse_nodename = A68_FN_PTR(epi_parse_nodename_desc);

    FUNCTION_POINTER(EPI_ERASE_TESTPOINT) = dpc_epi_erase_testpoint;
    a68_epi_erase_testpoint = A68_FN_PTR(epi_erase_testpoint_desc);
    FUNCTION_POINTER(EPI_GET_TESTPOINT_DETAILS) = dpc_epi_get_testpoint_details;
    a68_epi_get_testpoint_details = A68_FN_PTR(epi_get_testpoint_details_desc);

#ifdef unix
    A68_FN_NON_LOCALS((*desc_ptr)) = 0;
#endif
    A68_FN_PTR((*desc_ptr)) = buffer_epi_send_message;

    return;
}
