/* $Id: epi.h,v 34.2 1995/03/29 13:04:20 ella Exp $ */


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
                                  system old version was 2.2 
29:03:95  34.002  ELLA  Modcprght Change copyright header
??:??:??   ?.???  ????
*/

/*
$OldLog:	epi.h,v $
 * Revision 2.2  91/10/28  11:06:50  aap
 * Allows compilation on VMS.
 * 
 * Revision 2.1  91/02/25  12:08:19  miker
 * Candidate release 5
 * 
 * Revision 1.2  90/04/18  09:56:16  cathy
 * epi_decompose_signal() renamed epi_decompose_signal_repr() - new
 * epi_decompose_signal() implemented.
 * 
 * Revision 1.1  90/04/17  15:11:50  aap
 * Initial revision
 * 
*/
/* DEC/CMS REPLACEMENT HISTORY, Element EPI.H */
/* *11   10-AUG-1989 14:53:20 ELLADEV "Definitive release 4.0, first provisional release 4.1. BGH" */
/* *10   29-MAR-1989 15:04:00 ELLADEV "Updated provisional with fixes for R4B239. BGH" */
/* *9    17-MAR-1989 16:18:34 ELLADEV "Updated provisional with fixes for R4B187. BGH" */
/* *8     1-FEB-1989 15:13:27 ELLADEV "Updated provisional with fixes for R4B045. BGH" */
/* *7    21-JAN-1989 11:40:44 ELLADEV "Provisional for Release 4.0 BGH" */
/* *6    12-JAN-1989 16:10:50 ELLADEV "updated draft version for Release 4.0" */
/* *5     9-DEC-1988 15:37:59 ELLADEV "updated draft version for Release 4.0" */
/* *4     6-DEC-1988 17:52:21 ELLADEV "updated draft version" */
/* *3    30-NOV-1988 15:14:41 ELLADEV "updated draft version for Release 4.0" */
/* *2    16-NOV-1988 15:38:59 ELLADEV "second draft" */
/* *1    10-NOV-1988 11:56:52 ELLADEV "New for Release 4, stored in CMS lib [elladev.cms.epi]" */
/* DEC/CMS REPLACEMENT HISTORY, Element EPI.H */
#ifndef EPI
#define EPI
/*
*******************************************************************************
				Praxis Systems plc

Module	      :	ELLA Procedural Interface (EPI) Library header file

File          :	epi.h
		
Description   : This header file is provided for the EPI Library user. It
		declares the EPI functions, defines the objects manipulated
		by EPI and provides a set of associated access functions
		(or macros).

		The information supplied here allows the implementation
		of EPI to be changed without effecting the user's code
		(though recompilation will be necessary).

		This file should NOT be modified; EPI user-configurable
		definitions are provided in a separate file called
		"epi_config.h".


Changes History

   02.06.88	New module for EPI Version 0. BGH
   04.08.88 	EPI Version 1. BGH
   23.08.88 	EPI Version 2. AAP
   06.10.88	Implement actions from Code Review N035.7.47. BGH
   24.11.88	Renamed epi_simulate to epi_simulate_imports,
   		epi_dump_ellanet to epi_dump_imports and added
		epi_dump_binding and epi_simulate_binding. Added externs
		for EPI V2 epi_same_* functions BGH
   12.12.90     Extended EPI_NODE to cope with probe functions. MDR.

*******************************************************************************
*/

#include "epi_config.h"		/* include epi user-configurable
				   definitions */

/* RcsId[] = "$Id: epi.h,v 34.2 1995/03/29 13:04:20 ella Exp $" */

/* epi objects */
/* ----------- */

typedef unsigned EPI_IDENT;
typedef int EPI_STATUS_CODE;
typedef char *EPI_STRING;
typedef unsigned EPI_MESSAGE_TYPE;
typedef int EPI_INT;
typedef void (*EPI_HANDLER) ();
typedef unsigned EPI_UNSIGNED;
typedef int EPI_BOOL;
typedef unsigned EPI_TIME;

typedef struct
{
    EPI_IDENT ident;
    EPI_STRING name;
} EPI_LIBRARY;

typedef struct
{
    EPI_IDENT ident;
    EPI_STRING name;
} EPI_CONTEXT;

typedef struct
{
    EPI_IDENT ident;
    EPI_STRING name;
    EPI_CONTEXT context;
} EPI_IMPORTS;

typedef struct
{
    EPI_IDENT ident;
    EPI_STRING name;
    EPI_UNSIGNED version;
    EPI_UNSIGNED class;
    EPI_CONTEXT context;
} EPI_DECLARATION;

typedef struct
{
    EPI_IDENT ident;
    EPI_DECLARATION declaration;
    EPI_IMPORTS imports;
} EPI_BINDING;

typedef struct
{
    EPI_IDENT ident;
    EPI_INT fn;
    EPI_INT instance;
    EPI_INT circuit;
    EPI_INT base;
    EPI_INT *rnodelist;
    EPI_UNSIGNED upb_rnodelist;
} EPI_NODE;

#if sun || apollo || ultrix || vax
/* this struct should be identical to A68_EPI_SIGNAL in epi_dpc.c */
typedef struct
{
    EPI_IDENT ident;
    EPI_INT *value;
    EPI_UNSIGNED dummy;	/* gc mark in translated Algol 68 */
    EPI_UNSIGNED upb_value;
} EPI_SIGNAL;
#endif

typedef struct
{
    EPI_IDENT ident;
    EPI_UNSIGNED handle;
} EPI_TESTPOINT;

typedef struct
{
    EPI_IDENT ident;
    EPI_UNSIGNED time;
    EPI_TESTPOINT testpoint;
    EPI_SIGNAL signal;
} EPI_EVENT;

typedef struct
{
    EPI_IDENT ident;
    EPI_SIGNAL address;
    EPI_SIGNAL data;
} EPI_RAM_VALUE;

typedef struct
{
    EPI_IDENT ident;
    EPI_UNSIGNED seq;
    EPI_NODE node;
} EPI_FN_INPUT;

typedef struct epi_type TYPE, *EPI_TYPE;
struct epi_type
{
    EPI_IDENT ident;
    EPI_UNSIGNED class;
    union
    {
	struct
	{
	    EPI_STRING tag;
	    EPI_INT lwb;
	    EPI_INT upb;
	} int_type;
	struct
	{
	    EPI_STRING tag;
	    EPI_STRING repr;
	} char_type;
	struct
	{
	    EPI_UNSIGNED length;
	    EPI_TYPE subtype;
	} string_type;
	struct
	{
	    EPI_UNSIGNED elems;
	    EPI_TYPE subtype;
	} row_type;
	struct
	{
	    EPI_UNSIGNED elems;
	    EPI_TYPE *subtypes;
	} struct_type;
	struct
	{
	    EPI_TYPE input;
	    EPI_TYPE output;
	} fn_type;
	struct
	{
	    EPI_UNSIGNED elems;
	    EPI_STRING *tags;
	    EPI_TYPE *subtypes;
	} enum_type;
    } type;
};

typedef struct message MESSAGE, *EPI_MESSAGE;
struct message
{
    EPI_UNSIGNED number;
    EPI_MESSAGE previous;
    EPI_MESSAGE next;
    EPI_MESSAGE_TYPE msgtype;
    union
    {
	EPI_STRING string;
	EPI_UNSIGNED unsgnd;
	EPI_BOOL bool;
	EPI_LIBRARY library;
	EPI_CONTEXT context;
	EPI_IMPORTS imports;
	EPI_BINDING binding;
	EPI_DECLARATION declaration;
	EPI_NODE node;
	EPI_SIGNAL signal;
	EPI_TESTPOINT testpoint;
	EPI_EVENT event;
	EPI_RAM_VALUE ramvalue;
	EPI_FN_INPUT fninput;
	EPI_TYPE type;
    } data;
};

typedef struct
{
    EPI_STATUS_CODE status_code;
    EPI_UNSIGNED first_message_number;
} EPI_STATUS;

/* null objects */
extern EPI_BINDING EPI_NULL_BINDING;
extern EPI_SIGNAL EPI_NULL_SIGNAL;
extern EPI_NODE EPI_NULL_NODE;

#define EPI_NULL_MESSAGE ((EPI_MESSAGE)0)
#define EPI_NULL_HANDLER ((EPI_HANDLER)0)
#define EPI_NULL_STRING ((EPI_STRING)0)
#define EPI_NULL_TYPE ((EPI_TYPE)0)

/* epi constants */
/* ------------- */

/* epi bool values */
#define FALSE 0
#define TRUE 1

/* The declarations between the lines containing 'update-constants start'
   and 'update-constants end' are generated automatically by 'update-constants'.
   THEY MUST NOT BE EDITED MANUALLY!!
   See comment on 'epi_constant_strings' in epi.c.
*/

/* update-constants start */
    /* status codes */
#define EPI_S_OK 0
#define EPI_S_ACTIVE 1
#define EPI_S_ASSEMBLY_ERROR 2
#define EPI_S_BAD_ACTION 3
#define EPI_S_BAD_BINDING 4
#define EPI_S_BAD_CONDITION 5
#define EPI_S_BAD_CONTEXT 6
#define EPI_S_BAD_CONTEXT_NAME 7
#define EPI_S_BAD_DECLARATION 8
#define EPI_S_BAD_FILENAME 9
#define EPI_S_BAD_HANDLER 10
#define EPI_S_BAD_IMPORTS 11
#define EPI_S_BAD_IMPORTS_NAME 12
#define EPI_S_BAD_INCREMENT 13
#define EPI_S_BAD_LIBRARY 14
#define EPI_S_BAD_MESSAGE_TYPE 15
#define EPI_S_BAD_NODE 16
#define EPI_S_BAD_NODENAME 17
#define EPI_S_BAD_RANGE 18
#define EPI_S_BAD_SIGNAL 19
#define EPI_S_BAD_SIM_FILE 20
#define EPI_S_BAD_STRING 21
#define EPI_S_BAD_TESTPOINT 22
#define EPI_S_BAD_VALUES 23
#define EPI_S_CLOSURE_CIRCULAR 24
#define EPI_S_CLOSURE_EMPTY 25
#define EPI_S_CLOSURE_INCOMPLETE 26
#define EPI_S_COMPILE_ERROR 27
#define EPI_S_COMPOUND_CONTEXT 28
#define EPI_S_CONTEXT_EXISTS 29
#define EPI_S_DECL_BOUND 30
#define EPI_S_DECL_EXPORTED 31
#define EPI_S_DECL_NOT_EXPORTED 32
#define EPI_S_DECL_NOT_IMPORTED 33
#define EPI_S_DECL_USED_BY 34
#define EPI_S_FILE_NOT_FOUND 35
#define EPI_S_IMPORTS_EXISTS 36
#define EPI_S_INTERNAL_ERROR 37
#define EPI_S_INTERRUPTED 38
#define EPI_S_LAST_CONTEXT 39
#define EPI_S_LAST_IMPORTS 40
#define EPI_S_LIBRARY_EXISTS 41
#define EPI_S_LIB_FULL 42
#define EPI_S_LIB_NOT_CHANGED 43
#define EPI_S_LOCAL_OS_ERROR 44
#define EPI_S_LOGGING 45
#define EPI_S_MULTIPLE_IMPORTS 46
#define EPI_S_NOT_BOUND 47
#define EPI_S_NOT_IMPLEMENTED 48
#define EPI_S_NOT_LOGGING 49
#define EPI_S_NOT_OUTPUTTING 50
#define EPI_S_NOT_STARTED 51
#define EPI_S_NO_FILES 52
#define EPI_S_NO_TRANSACTION 53
#define EPI_S_OLD_DECLARATION 54
#define EPI_S_OLD_LIBRARY 55
#define EPI_S_ONLINE 56
#define EPI_S_OUTPUTTING 57
#define EPI_S_RECURSION 58
#define EPI_S_REMOTE_OS_ERROR 59
#define EPI_S_SAME_CONTEXT 60
#define EPI_S_SIMPLE_CONTEXT 61
#define EPI_S_STARTED 62
#define EPI_S_STOPPED 63
#define EPI_S_SUSPENDED 64
#define EPI_S_UNSIMULATABLE_FUNCTION 65
#define EPI_S_USAGE_CIRCULAR 66
#define EPI_S_WRONG_MODE 67

    /* single message types  */
#define EPI_M_CPU 68
#define EPI_M_INTERNAL_ERROR 69
#define EPI_M_LOCAL_OS_ERROR 70
#define EPI_M_REMOTE_OS_ERROR 71
#define EPI_M_ABORTED 72
#define EPI_M_LIBRARY 73
#define EPI_M_CONTEXT 74
#define EPI_M_IMPORTS 75
#define EPI_M_BINDING 76
#define EPI_M_DECLARATION 77
#define EPI_M_LIB_VERSION 78
#define EPI_M_LIB_LAST_WRITTEN 79
#define EPI_M_LIB_LAST_CLEARED 80
#define EPI_M_LIB_NAME 81
#define EPI_M_LIB_SIZE 82
#define EPI_M_LIB_OVERHEAD 83
#define EPI_M_LIB_FREE 84
#define EPI_M_LIB_CHANGED 85
#define EPI_M_CONTEXT_NAME 86
#define EPI_M_IMPORTS_NAME 87
#define EPI_M_BINDING_INCOMPLETE 88
#define EPI_M_DECL_NAME 89
#define EPI_M_DECL_EXPORTED_FLAG 90
#define EPI_M_DECL_CLASS 91
#define EPI_M_DECL_VERSION 92
#define EPI_M_DECL_USES 93
#define EPI_M_DECL_USED_BY 94
#define EPI_M_DECL_SOURCE 95
#define EPI_M_DECL_IMPORT 96
#define EPI_M_COMPILE_ERROR 97
#define EPI_M_ASSEMBLY_ERROR 98
#define EPI_M_NEW_DECL 99
#define EPI_M_CHANGED_DECL 100
#define EPI_M_INCONSISTENT_DECL 101
#define EPI_M_DECL_NOT_EXPORTED 102
#define EPI_M_DECL_EXPORTED 103
#define EPI_M_DECL_NOT_BOUND 104
#define EPI_M_DECL_LATEST 105
#define EPI_M_SIMULATABLE_NODE 106
#define ETI_M_OUTPUT 107
#define ETI_M_SHOWING_INPUT 108
#define ETI_M_SHOWING_OUTPUT 109
#define ETI_M_INPUT_FILE 110
#define ETI_M_INPUT_START 111
#define ETI_M_INPUT_END 112
#define ETI_M_INPUT_FILE_COUNT 113
#define ETI_M_OUTPUT_FILE 114
#define ETI_M_LOG_FILE 115
#define ETI_M_MODE 116
#define EPI_M_NODE 117
#define EPI_M_TYPE 118
#define EPI_M_SIGNAL 119
#define EPI_M_OLD_TESTPOINT 120
#define EPI_M_TESTPOINT 121
#define EPI_M_EVENT 122
#define EPI_M_FIRST_EVENT 123
#define EPI_M_INCOMPLETE_EVENT 124
#define EPI_M_INCOMPLETE_FIRST_EVENT 125
#define EPI_M_SIM_TIME 126
#define EPI_M_SIMULATED_NODE 127
#define EPI_M_KEPT_NODE 128
#define EPI_M_FN_INPUT 129
#define EPI_M_NODE_CLASS 130
#define EPI_M_NODE_CONTAINS 131
#define EPI_M_NODE_CONTAINED_IN 132
#define EPI_M_NODE_NAME 133
#define EPI_M_NODE_KEPT 134
#define EPI_M_RAM_VALUE 135
#define EPI_M_TESTPOINT_ACTION 136
#define EPI_M_TESTPOINT_CONDITION 137
#define EPI_M_TESTPOINT_COND_VALUE 138

    /* group message types */
#define EPI_M_ALL 139
#define EPI_M_LIB_ALL 140
#define EPI_M_CONTEXT_ALL 141
#define EPI_M_IMPORTS_ALL 142
#define EPI_M_CLOSURE_ALL 143
#define EPI_M_BINDING_ALL 144
#define EPI_M_DECL_ALL 145
#define ETI_M_ALL 146
#define EPI_M_SIM_ALL 147
#define EPI_M_NODE_ALL 148
#define EPI_M_TESTPOINT_ALL 149

    /* declaration classes */
#define EPI_C_TYPE 150
#define EPI_C_INT 151
#define EPI_C_FN 152
#define EPI_C_MAC 153
#define EPI_C_CONST 154

    /* ETI modes */
#define ETI_C_EASE 155
#define ETI_C_SIM_PRESENT 156
#define ETI_C_SIM_PAST 157
#define ETI_C_ATTR 158
#define ETI_C_ATTR_END 159
#define ETI_C_ATTR_ELD 160
#define ETI_C_ATTR_ECD 161
#define ETI_C_ATTR_ECA 162

    /* testpoint conditions */
#define EPI_C_ALWAYS 163
#define EPI_C_BECOMES 164
#define EPI_C_CHANGES 165
#define EPI_C_EQUALS 166

    /* node classes */
#define EPI_C_FN_NODE 167
#define EPI_C_INPUT_NODE 168
#define EPI_C_RAM_NODE 169
#define EPI_C_WIRE_NODE 170
    /* testpoint actions */
#define EPI_C_NOTIFY 171
#define EPI_C_NOTIFY_AND_KEEP 172
#define EPI_C_STOP 173

    /* type classes */
#define EPI_C_TYPE_CHAR 174
#define EPI_C_TYPE_ENUM 175
#define EPI_C_TYPE_FNTYPE 176
#define EPI_C_TYPE_INT 177
#define EPI_C_TYPE_INVALID 178
#define EPI_C_TYPE_NULL 179
#define EPI_C_TYPE_ROW 180
#define EPI_C_TYPE_STRING 181
#define EPI_C_TYPE_STRUCT 182
#define EPI_C_TYPE_VOID 183
/* update-constants end */

/* active functions */
/* ---------------- */

extern EPI_STATUS epi_start();
extern EPI_STATUS epi_finish();
extern EPI_STATUS epi_restore_simulation();

extern EPI_STATUS epi_nominate_handler();
extern EPI_STATUS epi_notify_cpu_usage();
extern EPI_STATUS epi_dont_notify_cpu_usage();
extern EPI_STATUS epi_start_diagnostics();
extern EPI_STATUS epi_stop_diagnostics();

extern EPI_STATUS epi_clear_library();
extern EPI_STATUS epi_increase_library();
extern EPI_STATUS epi_make_context();
extern EPI_STATUS epi_regress_library();
extern EPI_STATUS epi_save_library();

extern EPI_STATUS epi_copy_context();
extern EPI_STATUS epi_erase_context();
extern EPI_STATUS epi_clear_context();
extern EPI_STATUS epi_convert_to_simple();
extern EPI_STATUS epi_convert_to_compound();
extern EPI_STATUS epi_make_imports();

extern EPI_STATUS epi_compile();
extern EPI_STATUS epi_copy_imports();
extern EPI_STATUS epi_erase_imports();
extern EPI_STATUS epi_clear_imports();
extern EPI_STATUS epi_dump_imports();
extern EPI_STATUS epi_simulate_imports();

extern EPI_STATUS epi_fixup_binding();
extern EPI_STATUS epi_clear_binding();
extern EPI_STATUS epi_dump_binding();
extern EPI_STATUS epi_simulate_binding();

extern EPI_STATUS epi_erase_declaration();
extern EPI_STATUS epi_clear_export();
extern EPI_STATUS epi_export();

extern EPI_STATUS eti_command();
extern EPI_STATUS eti_clearinputs();
extern EPI_STATUS eti_input();
extern EPI_STATUS eti_removefile();
extern EPI_STATUS eti_showinput();
extern EPI_STATUS eti_dontshowinput();
extern EPI_STATUS eti_offline();
extern EPI_STATUS eti_log();
extern EPI_STATUS eti_dontlog();
extern EPI_STATUS eti_output();
extern EPI_STATUS eti_dontoutput();
extern EPI_STATUS eti_showoutput();
extern EPI_STATUS eti_dontshowoutput();
extern EPI_STATUS eti_obey();

extern EPI_STATUS epi_set_input();
extern EPI_STATUS epi_finish_simulation();
extern EPI_STATUS epi_capture_simulation();
extern EPI_STATUS epi_restart_simulation();
extern EPI_STATUS epi_replay_simulation();

extern EPI_STATUS epi_create_testpoint();
extern EPI_STATUS epi_keep();
extern EPI_STATUS epi_dont_keep();
extern EPI_STATUS epi_set_ram();
extern EPI_STATUS epi_simulate_function();

extern EPI_STATUS epi_erase_testpoint();

/* pre-emptive functions */
/* --------------------- */

extern EPI_STATUS epi_interrupt();

/* passive functions */
/* ----------------- */

extern EPI_STATUS epi_get_library_details();
extern EPI_STATUS epi_get_context_details();
extern EPI_STATUS epi_get_imports_details();
extern EPI_STATUS epi_get_closure_details();
extern EPI_STATUS epi_get_binding_details();
extern EPI_STATUS epi_get_declaration_details();
extern EPI_STATUS epi_get_eti_details();
extern EPI_STATUS epi_get_simulation_details();
extern EPI_STATUS epi_get_node_details();
extern EPI_STATUS epi_get_signal();
extern EPI_STATUS epi_get_ram_values();
extern EPI_STATUS epi_parse_nodename();
extern EPI_STATUS epi_get_testpoint_details();

/* general functions */
/* ----------------- */

extern void epi_free_message();
extern void epi_free_status();
extern void epi_free_type();
extern void epi_default_handler();
extern EPI_STRING epi_time_as_string();

/* message unpacking functions */
/* --------------------------- */

#define epi_m_cpu(m)			((m)->data.unsgnd)
#define epi_m_internal_error(m)		((m)->data.string)
#define epi_m_local_os_error(m)		((m)->data.string)
#define epi_m_remote_os_error(m)	((m)->data.string)
#define epi_m_aborted(m)		((m)->data.string)
#define epi_m_library(m)		((m)->data.library)
#define epi_m_context(m)		((m)->data.context)
#define epi_m_imports(m)		((m)->data.imports)
#define epi_m_binding(m)		((m)->data.binding)
#define epi_m_declaration(m)		((m)->data.declaration)
#define epi_m_lib_version(m)		((m)->data.unsgnd)
#define epi_m_lib_last_written(m)	((m)->data.unsgnd)
#define epi_m_lib_last_cleared(m)	((m)->data.unsgnd)
#define epi_m_lib_name(m)		((m)->data.string)
#define epi_m_lib_size(m)		((m)->data.unsgnd)
#define epi_m_lib_overhead(m)		((m)->data.unsgnd)
#define epi_m_lib_free(m)		((m)->data.unsgnd)
#define epi_m_lib_changed(m)		((m)->data.bool)
#define epi_m_context_name(m)		((m)->data.string)
#define epi_m_imports_name(m)		((m)->data.string)
#define epi_m_binding_incomplete(m)	(epi_m_binding(m))
#define epi_m_decl_name(m)		((m)->data.string)
#define epi_m_decl_exported_flag(m)	((m)->data.bool)
#define epi_m_decl_class(m)		((m)->data.unsgnd)
#define epi_m_decl_version(m)		((m)->data.unsgnd)
#define epi_m_decl_uses(m)		(epi_m_declaration(m))
#define epi_m_decl_used_by(m)		(epi_m_declaration(m))
#define epi_m_decl_source(m)		((m)->data.string)
#define epi_m_decl_import(m)		((m)->data.bool)
#define epi_m_compile_error(m)		((m)->data.string)
#define epi_m_assembly_error(m)		((m)->data.string)
#define epi_m_new_decl(m)		(epi_m_declaration(m))
#define epi_m_changed_decl(m)		(epi_m_declaration(m))
#define epi_m_inconsistent_decl(m)	(epi_m_declaration(m))
#define epi_m_decl_not_exported(m)	(epi_m_declaration(m))
#define epi_m_decl_exported(m)		(epi_m_declaration(m))
#define epi_m_decl_not_bound(m)		(epi_m_declaration(m))
#define epi_m_decl_latest(m)		(epi_m_declaration(m))
#define epi_m_simulatable_node(m)	((m)->data.string)
#define eti_m_output(m) 		((m)->data.string)
#define eti_m_showing_input(m)		((m)->data.bool)
#define eti_m_showing_output(m)		((m)->data.bool)
#define eti_m_input_file(m) 		((m)->data.string)
#define eti_m_input_start(m) 		((m)->data.string)
#define eti_m_input_end(m) 		((m)->data.string)
#define eti_m_input_file_count(m) 	((m)->data.unsgnd)
#define eti_m_output_file(m) 		((m)->data.string)
#define eti_m_log_file(m) 		((m)->data.string)
#define eti_m_mode(m)	 		((m)->data.unsgnd)
#define epi_m_node(m)			((m)->data.node)
#define epi_m_type(m)			((m)->data.type)
#define epi_m_signal(m)			((m)->data.signal)
#define epi_m_testpoint(m)		((m)->data.testpoint)
#define epi_m_old_testpoint(m)		((m)->data.testpoint)
#define epi_m_event(m)			((m)->data.event)
#define epi_m_first_event(m)		((m)->data.event)
#define epi_m_incomplete_event(m)	((m)->data.event)
#define epi_m_incomplete_first_event(m)	((m)->data.event)
#define epi_m_sim_time(m)		((m)->data.unsgnd)
#define epi_m_simulated_node(m)		((m)->data.node)
#define epi_m_simulatable_node(m)	((m)->data.string)
#define epi_m_kept_node(m)		((m)->data.string)
#define epi_m_fn_input(m)		((m)->data.fninput)
#define epi_m_node_class(m)		((m)->data.unsgnd)
#define epi_m_node_contains(m)		((m)->data.node)
#define epi_m_node_contained_in(m)	((m)->data.node)
#define epi_m_node_name(m)		((m)->data.string)
#define epi_m_node_kept(m)		((m)->data.bool)
#define epi_m_ram_value(m)		((m)->data.ramvalue)
#define epi_m_testpoint_action(m)	((m)->data.unsgnd)
#define epi_m_testpoint_condition(m)	((m)->data.unsgnd)
#define epi_m_testpoint_cond_value(m)	((m)->data.signal)

/* general unpacking functions */
/* --------------------------- */

extern EPI_STRING epi_constant_strings[];

extern EPI_HANDLER epi_get_handler();
extern EPI_MESSAGE epi_status_message();
extern EPI_BOOL epi_same_library();
extern EPI_BOOL epi_same_context();
extern EPI_BOOL epi_same_imports();
extern EPI_BOOL epi_same_declaration();
extern EPI_BOOL epi_same_binding();
extern EPI_BOOL epi_same_node();
extern EPI_BOOL epi_same_signal();
extern EPI_BOOL epi_same_testpoint();
extern EPI_BOOL epi_same_event();
extern EPI_BOOL epi_same_ram_value();
extern EPI_STRING epi_decode_signal();
extern EPI_SIGNAL epi_encode_signal();
extern EPI_SIGNAL *epi_decompose_signal();
extern EPI_STRING *epi_decompose_signal_repr();
extern EPI_INT epi_status_message_count();

#define epi_status_code(s) 		((s).status_code)
#define epi_status_code_as_string(s) 	(epi_constant_strings[epi_status_code(s)])
#define epi_message_type(m) 		((m)->msgtype)
#define epi_message_type_as_string(m) 	(epi_constant_strings[epi_message_type(m)])
#define epi_library_name(l)		((l).name)
#define epi_context_name(c)		((c).name)
#define epi_imports_name(i)		((i).name)
#define epi_imports_context(i)		((i).context)
#define epi_declaration_name(d)		((d).name)
#define epi_declaration_version(d)	((d).version)
#define epi_declaration_class(d)	((d).class)
#define epi_declaration_context(d)	((d).context)
#define epi_binding_declaration(b)	((b).declaration)
#define epi_binding_imports(b)		((b).imports)
#define epi_type_class(t)		((t)->class)
#define epi_type_class_as_string(t)	(epi_constant_strings[epi_type_class(t)])
#define epi_type_int_tag(t)\
	((epi_type_class(t))==EPI_C_TYPE_INT?(t)->type.int_type.tag:EPI_NULL_STRING)
#define epi_type_int_lwb(t)		((t)->type.int_type.lwb)
#define epi_type_int_upb(t)		((t)->type.int_type.upb)
#define epi_type_char_tag(t)\
	((epi_type_class(t))==EPI_C_TYPE_CHAR?(t)->type.char_type.tag:EPI_NULL_STRING)
#define epi_type_char_repr(t)\
	((epi_type_class(t))==EPI_C_TYPE_CHAR?(t)->type.char_type.repr:EPI_NULL_STRING)
#define epi_type_string_length(t)	((t)->type.string_type.length)
#define epi_type_string_subtype(t)\
	((epi_type_class(t))==EPI_C_TYPE_STRING?(t)->type.string_type.subtype:EPI_NULL_TYPE)
#define epi_type_row_elems(t)		((t)->type.row_type.elems)
#define epi_type_row_subtype(t)\
	((epi_type_class(t))==EPI_C_TYPE_ROW?(t)->type.row_type.subtype:EPI_NULL_TYPE)
#define epi_type_struct_elems(t)	((t)->type.struct_type.elems)
#define epi_type_struct_subtypes(t)	((t)->type.struct_type.subtypes)
#define epi_type_fntype_input(t)\
	((epi_type_class(t))==EPI_C_TYPE_FNTYPE?(t)->type.fn_type.input:EPI_NULL_TYPE)
#define epi_type_fntype_output(t)\
	((epi_type_class(t))==EPI_C_TYPE_FNTYPE?(t)->type.fn_type.output:EPI_NULL_TYPE)
#define epi_type_enum_elems(t)		((t)->type.enum_type.elems)
#define epi_type_enum_tags(t)		((t)->type.enum_type.tags)
#define epi_type_enum_subtypes(t)	((t)->type.enum_type.subtypes)
#define epi_event_time(e)		((e).time)
#define epi_event_testpoint(e)		((e).testpoint)
#define epi_event_signal(e)		((e).signal)
#define epi_ram_address(r)		((r).address)
#define epi_ram_data(r)			((r).data)
#define epi_fn_input_seq(f)		((f).seq)
#define epi_fn_input_node(f)		((f).node)
#endif

/* end */
