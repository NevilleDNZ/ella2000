/* $Id: epi.c,v 34.2 1995/03/29 13:03:50 ella Exp $ */


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
                                  system old version was 2.1 
29:03:95  34.002  ELLA  Modcprght Change copyright header
??:??:??   ?.???  ????
*/

/*
$OldLog:	epi.c,v $
 * Revision 2.1  91/02/25  12:07:55  miker
 * Candidate release 5
 * 
 * Revision 1.1  90/04/17  15:10:44  aap
 * Initial revision
 * 
*/
/* DEC/CMS REPLACEMENT HISTORY, Element EPI.C */
/* *11   10-AUG-1989 14:53:13 ELLADEV "Definitive release 4.0, first provisional release 4.1. BGH" */
/* *10   29-MAR-1989 15:03:51 ELLADEV "Updated provisional with fixes for R4B239. BGH" */
/* *9    17-MAR-1989 16:18:17 ELLADEV "Updated provisional with fixes for R4B187. BGH" */
/* *8     1-FEB-1989 15:13:11 ELLADEV "Updated provisional with fixes for R4B045. BGH" */
/* *7    21-JAN-1989 11:40:38 ELLADEV "Provisional for Release 4.0 BGH" */
/* *6    12-JAN-1989 16:10:31 ELLADEV "updated draft version for Release 4.0" */
/* *5     9-DEC-1988 15:37:44 ELLADEV "updated draft version for Release 4.0" */
/* *4     6-DEC-1988 17:52:04 ELLADEV "updated draft version" */
/* *3    30-NOV-1988 15:11:41 ELLADEV "updated draft version for Release 4.0" */
/* *2    16-NOV-1988 15:38:37 ELLADEV "second draft" */
/* *1    10-NOV-1988 11:56:47 ELLADEV "New for Release 4, stored in CMS lib [elladev.cms.epi]" */
/* DEC/CMS REPLACEMENT HISTORY, Element EPI.C */
/*
*******************************************************************************
                                Praxis Systems plc

Module        : EPI Library code

File          :	epi.c

Description   :	This is	the main EPI library module.

		It contains definitions for private functions and
		data common to the Library.


Changes	History

   02.06.88	New module for EPI Version 0. BGH
   12.08.88	EPI Version  1. BGH
   23.08.88	EPI Version  2. AAP
   21.09.88	General commands moved to new module epi_general. BGH
   06.10.88	Implement actions from Code Review n035.7.47. BGH
   15.10.88	Implement actions from Code Review n035.7.48. BGH
   03.11.88	Constants epi_c_review and epi_c_scope deleted. BGH
   08.11.88	Constants added for attribute modes. BGH
   23.11.88	Changed epi functions for latest EPI definition. 
   		Added epi_c_const. BGH
   05.12.88     epi_message_handlers redefined. Added V2 group message type
                arrays. BGH
   12.12.90     Extended EPI_NODE to cope with probe functions. MDR.
*******************************************************************************
*/

#include <stdio.h>
#include <varargs.h>
#include <ctype.h>
#include "epi.h"
#include "epi_internal.h"


static char RcsId[] = "$Id: epi.c,v 34.2 1995/03/29 13:03:50 ella Exp $";

/* global data */
/* ----------- */

extern EPI_STATUS_CODE default_epi_function();	/* forward ref   */
extern EPI_STATUS_CODE start_diagnostics();     /* in epi_general.c */

/* EPI procedures (library and support) information table.                  */
/* Not all functions exist in both the library and support modules.         */
/* Support functions which are called from the library have their pointers  */
/* initialised by the ELLA main module.                                     */
/* Entries consist of:                                                      */
/*  function pointer, name string, library debug level, support debug level.*/
/* Edit this table if you want to add or remove entries.
   You must have only one entry per line.
   Blank lines and comment lines are OK.
   When you've finished editing the table you must update the declarations
   in epi_defs.c and epi_internal.h.
   You can do this easily by using the conversion tool 'update-procinfo'.
   To use this tool, do the following:
      cd to the directory containing epi.c epi_internal.h and epi_defs.c
      invoke 'update-procinfo' - it takes no parameters.
      This creates files epi_defs.c.new and epi_internal.h.new
      Check these new files, and replace the originals with them if OK. */

PROCINFO procinfo[] =
{
    /* library & support active/passive/pre-emptive functions */
    {default_epi_function, "epi_start", 0, 0},
    {default_epi_function, "epi_finish", 0, 0},
    {default_epi_function, "epi_restore_simulation", 0, 0},
    {default_epi_function, "epi_interrupt", 0, 0},

    {default_epi_function, "epi_nominate_handler", 0, 0},
    {default_epi_function, "epi_notify_cpu_usage", 0, 0},
    {default_epi_function, "epi_dont_notify_cpu_usage", 0, 0},
    {default_epi_function, "epi_start_diagnostics", 0, 0},
    {default_epi_function, "epi_stop_diagnostics", 0, 0},
    {default_epi_function, "epi_get_handler", 0, 0},
    {default_epi_function, "epi_status_message", 0, 0},
    {default_epi_function, "epi_status_message_count", 0, 0},

    {default_epi_function, "epi_clear_library", 0, 0},
    {default_epi_function, "epi_increase_library", 0, 0},
    {default_epi_function, "epi_make_context", 0, 0},
    {default_epi_function, "epi_regress_library", 0, 0},
    {default_epi_function, "epi_save_library", 0, 0},
    {default_epi_function, "epi_get_library_details", 0, 0},
    {default_epi_function, "epi_same_library", 0, 0},

    {default_epi_function, "epi_copy_context", 0, 0},
    {default_epi_function, "epi_erase_context", 0, 0},
    {default_epi_function, "epi_clear_context", 0, 0},
    {default_epi_function, "epi_convert_to_simple", 0, 0},
    {default_epi_function, "epi_convert_to_compound", 0, 0},
    {default_epi_function, "epi_make_imports", 0, 0},
    {default_epi_function, "epi_get_context_details", 0, 0},
    {default_epi_function, "epi_same_context", 0, 0},

    {default_epi_function, "epi_compile", 0, 0},
    {default_epi_function, "epi_copy_imports", 0, 0},
    {default_epi_function, "epi_erase_imports", 0, 0},
    {default_epi_function, "epi_clear_imports", 0, 0},
    {default_epi_function, "epi_dump_imports", 0, 0},
    {default_epi_function, "epi_simulate_imports", 0, 0},
    {default_epi_function, "epi_get_imports_details", 0, 0},
    {default_epi_function, "epi_get_closure_details", 0, 0},
    {default_epi_function, "epi_same_imports", 0, 0},

    {default_epi_function, "epi_fixup_binding", 0, 0},
    {default_epi_function, "epi_clear_binding", 0, 0},
    {default_epi_function, "epi_dump_binding", 0, 0},
    {default_epi_function, "epi_simulate_binding", 0, 0},
    {default_epi_function, "epi_get_binding_details", 0, 0},
    {default_epi_function, "epi_same_binding", 0, 0},

    {default_epi_function, "epi_erase_declaration", 0, 0},
    {default_epi_function, "epi_clear_export", 0, 0},
    {default_epi_function, "epi_export", 0, 0},
    {default_epi_function, "epi_get_declaration_details", 0, 0},
    {default_epi_function, "epi_same_declaration", 0, 0},

    {default_epi_function, "eti_command", 0, 0},
    {default_epi_function, "eti_clearinputs", 0, 0},
    {default_epi_function, "eti_input", 0, 0},
    {default_epi_function, "eti_removefile", 0, 0},
    {default_epi_function, "eti_showinput", 0, 0},
    {default_epi_function, "eti_dontshowinput", 0, 0},
    {default_epi_function, "eti_offline", 0, 0},
    {default_epi_function, "eti_log", 0, 0},
    {default_epi_function, "eti_dontlog", 0, 0},
    {default_epi_function, "eti_output", 0, 0},
    {default_epi_function, "eti_dontoutput", 0, 0},
    {default_epi_function, "eti_showoutput", 0, 0},
    {default_epi_function, "eti_dontshowoutput", 0, 0},
    {default_epi_function, "eti_obey", 0, 0},
    {default_epi_function, "epi_get_eti_details", 0, 0},

    {default_epi_function, "epi_set_input", 0, 0},
    {default_epi_function, "epi_finish_simulation", 0, 0},
    {default_epi_function, "epi_capture_simulation", 0, 0},
    {default_epi_function, "epi_restart_simulation", 0, 0},
    {default_epi_function, "epi_replay_simulation", 0, 0},
    {default_epi_function, "epi_get_simulation_details", 0, 0},

    {default_epi_function, "epi_same_type", 0, 0},

    {default_epi_function, "epi_create_testpoint", 0, 0},
    {default_epi_function, "epi_keep", 0, 0},
    {default_epi_function, "epi_dont_keep", 0, 0},
    {default_epi_function, "epi_set_ram", 0, 0},
    {default_epi_function, "epi_simulate_function", 0, 0},
    {default_epi_function, "epi_get_node_details", 0, 0},
    {default_epi_function, "epi_get_signal", 0, 0},
    {default_epi_function, "epi_get_ram_values", 0, 0},
    {default_epi_function, "epi_parse_nodename", 0, 0},
    {default_epi_function, "epi_same_node", 0, 0},

    {default_epi_function, "epi_decode_signal", 0, 0},
    {default_epi_function, "epi_encode_signal", 0, 0},
    {default_epi_function, "epi_same_signal", 0, 0},

    {default_epi_function, "epi_erase_testpoint", 0, 0},
    {default_epi_function, "epi_get_testpoint_details", 0, 0},
    {default_epi_function, "epi_same_testpoint", 0, 0},

    {default_epi_function, "epi_same_event", 0, 0},

    {default_epi_function, "epi_same_ram_value", 0, 0},

    {default_epi_function, "epi_free_message", 0, 0},
    {default_epi_function, "epi_free_status", 0, 0},
    {default_epi_function, "epi_free_type", 0, 0},
    {default_epi_function, "epi_time_as_string", 0, 0},
    {default_epi_function, "epi_default_handler", 0, 0},

    /* library and support private functions */
    {default_epi_function, "epi_send_message", 0, 0},
    {default_epi_function, "epi_initialise", 0, 0},

    /* support only private functions */
    {default_epi_function, "epi_diagnostics", 0, 0},
    {default_epi_function, "push_notify", 0, 0},
    {default_epi_function, "pop_notify", 0, 0},
    {default_epi_function, "epi_notify", 0, 0},
    {default_epi_function, "epi_fault", 0, 0},
    {default_epi_function, "check_notify", 0, 0},
    {default_epi_function, "terminate_ella", 0, 0},
    {default_epi_function, "sim_function", 0, 0},
    {default_epi_function, "date_time_to_int", 0, 0},
    {default_epi_function, "cpu_usage", 0, 0},
    {default_epi_function, "process_eti_command", 0, 0},
    {default_epi_function, "epi_set_mode", 0, 0},
    {default_epi_function, "find_ella_context", 0, 0},
    {default_epi_function, "find_ella_decl", 0, 0},
    {default_epi_function, "get_kepts", 0, 0},
    {default_epi_function, "dummy_put", 0, 0},

    /* library only private functions */
    {default_epi_function, "valid_id", 0, 0},
    {start_diagnostics, "start_diagnostics", 0, 0},
    {default_epi_function, "search_mtable_using_number", 0, 0},
    {default_epi_function, "search_mtable_using_address", 0, 0},
    {default_epi_function, "new_mtable_entry", 0, 0},
    {default_epi_function, "clear_mtable_entry", 0, 0},
    {default_epi_function, "modify_mtable_entry", 0, 0},

    /* end */
    {default_epi_function, "default_epi_function", 0, 0}
};

/* EPI constants as strings look-up table                             */
/* Edit this table if you want to add or remove entries.
   You must have only one entry per line.
   Blank lines and comment lines are OK.
   When you've finished editing the table you must update the declarations
   in epi_defs.c, epi.h and episupportint.sta.
   You can do this easily by using the conversion tool 'update-constants'.
   To use this tool, do the following:
      cd to the directory containing epi.c episupportint.sta epi.h and epi_defs.c
      invoke 'update-constants' - it takes no parameters.
      This creates files epi_defs.c.new, episupportint.sta.new and epi.h.new
      Check these new files, and replace the originals with them if OK. */

EPI_STRING epi_constant_strings[] =
{
    /* status codes */
    "EPI_S_OK",
    "EPI_S_ACTIVE",
    "EPI_S_ASSEMBLY_ERROR",
    "EPI_S_BAD_ACTION",
    "EPI_S_BAD_BINDING",
    "EPI_S_BAD_CONDITION",
    "EPI_S_BAD_CONTEXT",
    "EPI_S_BAD_CONTEXT_NAME",
    "EPI_S_BAD_DECLARATION",
    "EPI_S_BAD_FILENAME",
    "EPI_S_BAD_HANDLER",
    "EPI_S_BAD_IMPORTS",
    "EPI_S_BAD_IMPORTS_NAME",
    "EPI_S_BAD_INCREMENT",
    "EPI_S_BAD_LIBRARY",
    "EPI_S_BAD_MESSAGE_TYPE",
    "EPI_S_BAD_NODE",
    "EPI_S_BAD_NODENAME",
    "EPI_S_BAD_RANGE",
    "EPI_S_BAD_SIGNAL",
    "EPI_S_BAD_SIM_FILE",
    "EPI_S_BAD_STRING",
    "EPI_S_BAD_TESTPOINT",
    "EPI_S_BAD_VALUES",
    "EPI_S_CLOSURE_CIRCULAR",
    "EPI_S_CLOSURE_EMPTY",
    "EPI_S_CLOSURE_INCOMPLETE",
    "EPI_S_COMPILE_ERROR",
    "EPI_S_COMPOUND_CONTEXT",
    "EPI_S_CONTEXT_EXISTS",
    "EPI_S_DECL_BOUND",
    "EPI_S_DECL_EXPORTED",
    "EPI_S_DECL_NOT_EXPORTED",
    "EPI_S_DECL_NOT_IMPORTED",
    "EPI_S_DECL_USED_BY",
    "EPI_S_FILE_NOT_FOUND",
    "EPI_S_IMPORTS_EXISTS",
    "EPI_S_INTERNAL_ERROR",
    "EPI_S_INTERRUPTED",
    "EPI_S_LAST_CONTEXT",
    "EPI_S_LAST_IMPORTS",
    "EPI_S_LIBRARY_EXISTS",
    "EPI_S_LIB_FULL",
    "EPI_S_LIB_NOT_CHANGED",
    "EPI_S_LOCAL_OS_ERROR",
    "EPI_S_LOGGING",
    "EPI_S_MULTIPLE_IMPORTS",
    "EPI_S_NOT_BOUND",
    "EPI_S_NOT_IMPLEMENTED",
    "EPI_S_NOT_LOGGING",
    "EPI_S_NOT_OUTPUTTING",
    "EPI_S_NOT_STARTED",
    "EPI_S_NO_FILES",
    "EPI_S_NO_TRANSACTION",
    "EPI_S_OLD_DECLARATION",
    "EPI_S_OLD_LIBRARY",
    "EPI_S_ONLINE",
    "EPI_S_OUTPUTTING",
    "EPI_S_RECURSION",
    "EPI_S_REMOTE_OS_ERROR",
    "EPI_S_SAME_CONTEXT",
    "EPI_S_SIMPLE_CONTEXT",
    "EPI_S_STARTED",
    "EPI_S_STOPPED",
    "EPI_S_SUSPENDED",
    "EPI_S_UNSIMULATABLE_FUNCTION",
    "EPI_S_USAGE_CIRCULAR",
    "EPI_S_WRONG_MODE",

    /* single message types  */
    "EPI_M_CPU",
    "EPI_M_INTERNAL_ERROR",
    "EPI_M_LOCAL_OS_ERROR",
    "EPI_M_REMOTE_OS_ERROR",
    "EPI_M_ABORTED",
    "EPI_M_LIBRARY",
    "EPI_M_CONTEXT",
    "EPI_M_IMPORTS",
    "EPI_M_BINDING",
    "EPI_M_DECLARATION",
    "EPI_M_LIB_VERSION",
    "EPI_M_LIB_LAST_WRITTEN",
    "EPI_M_LIB_LAST_CLEARED",
    "EPI_M_LIB_NAME",
    "EPI_M_LIB_SIZE",
    "EPI_M_LIB_OVERHEAD",
    "EPI_M_LIB_FREE",
    "EPI_M_LIB_CHANGED",
    "EPI_M_CONTEXT_NAME",
    "EPI_M_IMPORTS_NAME",
    "EPI_M_BINDING_INCOMPLETE",
    "EPI_M_DECL_NAME",
    "EPI_M_DECL_EXPORTED_FLAG",
    "EPI_M_DECL_CLASS",
    "EPI_M_DECL_VERSION",
    "EPI_M_DECL_USES",
    "EPI_M_DECL_USED_BY",
    "EPI_M_DECL_SOURCE",
    "EPI_M_DECL_IMPORT",
    "EPI_M_COMPILE_ERROR",
    "EPI_M_ASSEMBLY_ERROR",
    "EPI_M_NEW_DECL",
    "EPI_M_CHANGED_DECL",
    "EPI_M_INCONSISTENT_DECL",
    "EPI_M_DECL_NOT_EXPORTED",
    "EPI_M_DECL_EXPORTED",
    "EPI_M_DECL_NOT_BOUND",
    "EPI_M_DECL_LATEST",
    "EPI_M_SIMULATABLE_NODE",
    "ETI_M_OUTPUT",
    "ETI_M_SHOWING_INPUT",
    "ETI_M_SHOWING_OUTPUT",
    "ETI_M_INPUT_FILE",
    "ETI_M_INPUT_START",
    "ETI_M_INPUT_END",
    "ETI_M_INPUT_FILE_COUNT",
    "ETI_M_OUTPUT_FILE",
    "ETI_M_LOG_FILE",
    "ETI_M_MODE",
    "EPI_M_NODE",
    "EPI_M_TYPE",
    "EPI_M_SIGNAL",
    "EPI_M_OLD_TESTPOINT",
    "EPI_M_TESTPOINT",
    "EPI_M_EVENT",
    "EPI_M_FIRST_EVENT",
    "EPI_M_INCOMPLETE_EVENT",
    "EPI_M_INCOMPLETE_FIRST_EVENT",
    "EPI_M_SIM_TIME",
    "EPI_M_SIMULATED_NODE",
    "EPI_M_KEPT_NODE",
    "EPI_M_FN_INPUT",
    "EPI_M_NODE_CLASS",
    "EPI_M_NODE_CONTAINS",
    "EPI_M_NODE_CONTAINED_IN",
    "EPI_M_NODE_NAME",
    "EPI_M_NODE_KEPT",
    "EPI_M_RAM_VALUE",
    "EPI_M_TESTPOINT_ACTION",
    "EPI_M_TESTPOINT_CONDITION",
    "EPI_M_TESTPOINT_COND_VALUE",

    /* group message types */
    "EPI_M_ALL",
    "EPI_M_LIB_ALL",
    "EPI_M_CONTEXT_ALL",
    "EPI_M_IMPORTS_ALL",
    "EPI_M_CLOSURE_ALL",
    "EPI_M_BINDING_ALL",
    "EPI_M_DECL_ALL",
    "ETI_M_ALL",
    "EPI_M_SIM_ALL",
    "EPI_M_NODE_ALL",
    "EPI_M_TESTPOINT_ALL",

    /* declaration classes */
    "EPI_C_TYPE",
    "EPI_C_INT",
    "EPI_C_FN",
    "EPI_C_MAC",
    "EPI_C_CONST",

    /* ETI modes */
    "ETI_C_EASE",
    "ETI_C_SIM_PRESENT",
    "ETI_C_SIM_PAST",
    "ETI_C_ATTR",
    "ETI_C_ATTR_END",
    "ETI_C_ATTR_ELD",
    "ETI_C_ATTR_ECD",
    "ETI_C_ATTR_ECA",

    /* testpoint conditions */
    "EPI_C_ALWAYS",
    "EPI_C_BECOMES",
    "EPI_C_CHANGES",
    "EPI_C_EQUALS",

    /* node classes */
    "EPI_C_FN_NODE",
    "EPI_C_INPUT_NODE",
    "EPI_C_RAM_NODE",
    "EPI_C_WIRE_NODE",
    
    /* testpoint actions */
    "EPI_C_NOTIFY",
    "EPI_C_NOTIFY_AND_KEEP",
    "EPI_C_STOP",

    /* type classes */
    "EPI_C_TYPE_CHAR",
    "EPI_C_TYPE_ENUM",
    "EPI_C_TYPE_FNTYPE",
    "EPI_C_TYPE_INT",
    "EPI_C_TYPE_INVALID",
    "EPI_C_TYPE_NULL",
    "EPI_C_TYPE_ROW",
    "EPI_C_TYPE_STRING",
    "EPI_C_TYPE_STRUCT",
    "EPI_C_TYPE_VOID"
};

/* status stack */
EPI_STATUS *(status_stack[EPI_MAX_RECURSION + 1]);
int status_stack_index = -1;	/* pre-inc, post-dec stack pointer */

/* Message handler look-up table; used during message handling (when no */
/* temporary handler override is in effect) to determine which handler  */
/* to call for which message type.                                      */
/* Note: usually accessed via macro MTYPE_HANDLER of epi_internal.h     */

EPI_HANDLER epi_message_handlers[MAX_SINGLE_MTYPE - MIN_SINGLE_MTYPE + 1];

/* Message look-up table; used to record the first message of       */
/* the message list associated with each EPI status. Empty entries  */
/* (ie unused or where a message list has been freed) are indicated */
/* by a zero message number. Note: the table and the count of free  */
/* entries are initialised by epi_start                             */

MESSAGE_TABLE_ENTRY message_table[MESSAGE_TABLE_SIZE];

unsigned message_table_free = 0;	/* count of free entries in table */

/* Message type groups (lists end with null type)              */
/* Note: epi_m_all is not implemented as an array; instead the */
/* macros MIN_SINGLE_MTYPE and MAX_SINGLE_MTYPE are used.      */

EPI_MESSAGE_TYPE epi_m_lib_all[] =
{
    EPI_M_CONTEXT,
    EPI_M_LIB_VERSION,
    EPI_M_LIB_LAST_WRITTEN,
    EPI_M_LIB_LAST_CLEARED,
    EPI_M_LIB_NAME,
    EPI_M_LIB_SIZE,
    EPI_M_LIB_OVERHEAD,
    EPI_M_LIB_FREE,
    EPI_M_LIB_CHANGED,
    0
};

EPI_MESSAGE_TYPE epi_m_context_all[] =
{
    EPI_M_CONTEXT_NAME,
    EPI_M_IMPORTS,
    EPI_M_DECL_NOT_EXPORTED,
    EPI_M_DECL_EXPORTED,
    0
};

EPI_MESSAGE_TYPE epi_m_imports_all[] =
{
    EPI_M_BINDING,
    EPI_M_CONTEXT,
    EPI_M_IMPORTS_NAME,
    0
};

EPI_MESSAGE_TYPE epi_m_closure_all[] =
{
    EPI_M_BINDING_INCOMPLETE,
    EPI_M_INCONSISTENT_DECL,
    0
};

EPI_MESSAGE_TYPE epi_m_binding_all[] =
{
    EPI_M_BINDING,
    EPI_M_DECLARATION,
    EPI_M_IMPORTS,
    0
};

EPI_MESSAGE_TYPE epi_m_decl_all[] =
{
    EPI_M_BINDING,
    EPI_M_CONTEXT,
    EPI_M_DECL_NAME,
    EPI_M_DECL_SOURCE,
    EPI_M_DECL_EXPORTED_FLAG,
    EPI_M_DECL_IMPORT,
    EPI_M_DECL_CLASS,
    EPI_M_DECL_VERSION,
    EPI_M_DECL_USES,
    EPI_M_DECL_USED_BY,
    EPI_M_DECL_LATEST,
    0
};

EPI_MESSAGE_TYPE eti_m_all[] =
{
    ETI_M_SHOWING_INPUT,
    ETI_M_SHOWING_OUTPUT,
    ETI_M_INPUT_FILE,
    ETI_M_INPUT_FILE_COUNT,
    ETI_M_OUTPUT_FILE,
    ETI_M_LOG_FILE,
    ETI_M_MODE,
    EPI_M_IMPORTS,
    0
};

EPI_MESSAGE_TYPE epi_m_sim_all[] =
{
    EPI_M_SIM_TIME,
    EPI_M_TESTPOINT,
    EPI_M_SIMULATED_NODE,
    EPI_M_SIMULATABLE_NODE,
    EPI_M_KEPT_NODE,
    0
};

EPI_MESSAGE_TYPE epi_m_node_all[] =
{
    EPI_M_FN_INPUT,
    EPI_M_NODE_CLASS,
    EPI_M_NODE_CONTAINS,
    EPI_M_NODE_CONTAINED_IN,
    EPI_M_NODE_NAME,
    EPI_M_NODE_KEPT,
    EPI_M_TESTPOINT,
    EPI_M_TYPE,
    0
};

EPI_MESSAGE_TYPE epi_m_testpoint_all[] =
{
    EPI_M_NODE,
    EPI_M_TESTPOINT_ACTION,
    EPI_M_TESTPOINT_CONDITION,
    EPI_M_TESTPOINT_COND_VALUE,
    0
};

/* string buffer */
char d_buff[1000];		/* used with debug/diagnostics strings */

/* special EPI objects */
EPI_BINDING EPI_NULL_BINDING =
{EPI_O_NULL_BINDING,		/* binding ident */
    {EPI_O_DECLARATION,		/* decl ident */
	"",			/* decl name */
	0,			/* decl version */
	0,			/* decl class */
	{EPI_O_CONTEXT,		/* context ident */
	    "",			/* context name */
	}
    },
    {EPI_O_IMPORTS,		/* imports ident */
	"",			/* imports name */
	{EPI_O_CONTEXT,		/* context ident */
	    "",			/* context name */
	}
    }
};

EPI_SIGNAL EPI_NULL_SIGNAL = {EPI_O_NULL_SIGNAL, 0, 0, 0};
EPI_NODE   EPI_NULL_NODE   = {EPI_O_NULL_NODE, 0, 0, 0, 0, 0, 0};

/* global flags */
/* ------------ */

EPI_BOOL epi_started = FALSE;	/* indicates epi_start has been called */
EPI_BOOL epi_active = FALSE;	/* indicates active function is busy */
EPI_BOOL epi_diag_on = FALSE;	/* indicates diagnostics are switched on */
int epi_busy = 0;		/* count of functions (active & passive)
				   currently invoked  */
/* private data */
/* ------------ */

unsigned message_count = 0;	/* count of all messages allocated by */
				/* new_message */

/* debug */
/* ----- */

#ifdef DEBUG

/* output debug message to standard error */
void epi_debug(message_level, proc_index, message, for_library)
int message_level,		/* debug level of message */
 proc_index;			/* index of function in procinfo table */
char *message;			/* debug message */
EPI_BOOL for_library;		/* for library (TRUE) or support (FALSE) */
{
    if ((for_library == TRUE
	 && LIBRARY_DEBUG_LEVEL(proc_index) < message_level) ||
	(for_library == FALSE
	 && SUPPORT_DEBUG_LEVEL(proc_index) < message_level))
	return;
    if (for_library == TRUE)
	fprintf(stderr, "L");
    else
	fprintf(stderr, "S");
    fprintf(stderr, "%d %s %s\n", message_level, FUNCTION_NAME(proc_index),
	    message);
}

#endif

/* private functions */
/* ----------------- */

/* allocates space on heap for new message */
EPI_MESSAGE new_message()
{
    EPI_MESSAGE message = (EPI_MESSAGE)calloc(1,sizeof(MESSAGE));
    message->number = ++message_count;
    return(message);
}

void epi_send_message(message)
EPI_MESSAGE message;
{
    EPI_MESSAGE_TYPE type = epi_message_type(message);

    DEBUGSTART_MESS(6, EPI_SEND_MESSAGE, message);

    /* check epi is busy with a transaction (except for abort message) */
    if (!epi_busy && epi_message_type(message) != EPI_M_ABORTED)
 	fprintf(stderr, "\nEPI error - message received when no EPI transaction is in progress.\n");
    else if (type < MIN_SINGLE_MTYPE || type > MAX_SINGLE_MTYPE)
	fprintf(stderr, "\nEPI error - message received with invalid message type.\n");
    else
    {
	EPI_DEBUG(5, EPI_SEND_MESSAGE, sprintf(d_buff,
	    "message received: (number = %d, type = %s)", DC_MESS(message)));
	MTYPE_HANDLER(type) (message);
    };
    DEBUGEND(7, EPI_SEND_MESSAGE);
    return;
}

EPI_STATUS_CODE default_epi_function()
{
    /* If this routine is called, then the procinfo table has not */
    /* been initialised correctly with the address of a support function. */
    /* Set status to internal error and send a message indicating internal */
    /* error.								   */
    EPI_STATUS_CODE status_code = EPI_S_INTERNAL_ERROR;
    EPI_MESSAGE error_message;

    DEBUGSTART(6, DEFAULT_EPI_FUNCTION);
    error_message = new_message();
    epi_message_type(error_message) = EPI_M_INTERNAL_ERROR;
    epi_m_internal_error(error_message) = "PROCINFO table not initialised or invalid function call.";
    epi_send_message(error_message);
    DEBUGEND_STATUS_CODE(7, DEFAULT_EPI_FUNCTION, status_code);
    return (status_code);
}

EPI_BOOL valid_id(name)
EPI_STRING name;
{
    EPI_BOOL valid = TRUE;

    DEBUGSTART_NAME(6, VALID_ID, name);
    if (*name == 0 || !islower(*name))
	valid = FALSE;
    else
	while (*++name)
	    if (!islower(*name) && !isdigit(*name) && *name != '_')
	    {
		valid = FALSE;
		break;
	    }
    DEBUGEND_BOOL(6, VALID_ID, valid);
    return (valid);
}

/* search the message table using a message number - */
/* return the message address or EPI_NULL_MESSAGE    */
EPI_MESSAGE search_mtable_using_number(message_number)
EPI_UNSIGNED message_number;
{
    EPI_MESSAGE message = EPI_NULL_MESSAGE;

    DEBUGSTART_VAL(6, SEARCH_MTABLE_USING_NUMBER, message_number);
    if (message_number > 0)
    {
	/* find address of message from message table */
	int i;
	for (i = 0; i < MESSAGE_TABLE_SIZE &&
	     MESSAGE_NUMBER(i) != message_number; i++);
	if (MESSAGE_NUMBER(i) == message_number)
	{
	    EPI_DEBUG(8, SEARCH_MTABLE_USING_NUMBER, sprintf(d_buff,
		"found entry for message in message table. Entry = %d : (message number = %d, message address = %d)", 
		i, MESSAGE_NUMBER(i), MESSAGE_ADDRESS(i)));
	    message = MESSAGE_ADDRESS(i);
	}
    }
    DEBUGEND_MESS(7, SEARCH_MTABLE_USING_NUMBER, message);
    return(message);
}

/* search the message table using a message address - */
/* return the message number or 0                     */
EPI_UNSIGNED search_mtable_using_address(message_address)

EPI_MESSAGE message_address;
{
    EPI_UNSIGNED number = 0;
    int i;

    DEBUGSTART_MESS(6, SEARCH_MTABLE_USING_ADDRESS, message_address);
    /* look for address of message in message table */
    for (i = 0; i < MESSAGE_TABLE_SIZE &&
	 MESSAGE_ADDRESS(i) != message_address; i++);
    if (MESSAGE_ADDRESS(i) == message_address)
    {
	EPI_DEBUG(8, SEARCH_MTABLE_USING_ADDRESS, sprintf(d_buff,
	    "found entry for message in message table. Entry = %d : (message number = %d, message address = %d)", 
	    i, MESSAGE_NUMBER(i), MESSAGE_ADDRESS(i)));
	    number = MESSAGE_NUMBER(i);
    }
    DEBUGEND_VAL(7, SEARCH_MTABLE_USING_ADDRESS, number);
    return(number);
}

/* search the message table for a free entry and add information */
/* about the supplied message.                                   */
void new_mtable_entry(message)
EPI_MESSAGE message;
{
    int i;

    DEBUGSTART_MESS(6, NEW_MTABLE_ENTRY, message);
    /* look for free entry in message table */
    for (i = 0; i < MESSAGE_TABLE_SIZE && 
	 MESSAGE_NUMBER(i) != 0; i++);
    if (MESSAGE_NUMBER(i) == 0)
    {
	/* store information about message */
	MESSAGE_NUMBER(i) = message->number;
	MESSAGE_ADDRESS(i) = message;
	message_table_free--;
	EPI_DEBUG(8, NEW_MTABLE_ENTRY, sprintf(d_buff,
	    "entering information in message table. Entry = %d : (message number = %d, message address = %d)", 
	    i, MESSAGE_NUMBER(i), MESSAGE_ADDRESS(i)));
	if (MESSAGE_TABLE_FULL)
	{
	    /* warn user that it wont work next time */
	    EPI_MESSAGE error_message;
	    error_message = new_message();
	    epi_message_type(error_message) = 
		EPI_M_INTERNAL_ERROR;
	    epi_m_internal_error(error_message) =
		"message table full";
	    epi_send_message(error_message);
	}
    }
    else
	/* no free entries - should have been detected earlier */
	abort("EPI inconsistency detected - message table full");
    DEBUGEND(7, NEW_MTABLE_ENTRY);
    return;
}
    
/* search the message table using a message number - */
/* if found, clears the entry ready for reuse        */
void clear_mtable_entry(message_number)
EPI_UNSIGNED message_number;
{
    DEBUGSTART_VAL(6, CLEAR_MTABLE_ENTRY, message_number);
    if (message_number > 0)
    {
	/* find entry in message table */
	int i;
	for (i = 0; i < MESSAGE_TABLE_SIZE &&
	     MESSAGE_NUMBER(i) != message_number; i++);
	if (MESSAGE_NUMBER(i) == message_number)
	{
	    EPI_DEBUG(8, CLEAR_MTABLE_ENTRY, sprintf(d_buff,
		"clearing entry in message table. Entry = %d : (message number = %d, message address = %d)", 
		i, MESSAGE_NUMBER(i), MESSAGE_ADDRESS(i)));
	    MESSAGE_NUMBER(i) = 0;
	    MESSAGE_ADDRESS(i) = EPI_NULL_MESSAGE;
	    message_table_free++;
	}
    }
    DEBUGEND(7, CLEAR_MTABLE_ENTRY);
    return;
}

/* search the message table using a message number - */
/* if found, modifies the entry by replacing the     */
/* message address with the supplied one             */
void modify_mtable_entry(message_number, message)
EPI_UNSIGNED message_number;
EPI_MESSAGE message;
{
    DEBUGSTART_VAL_MESS(6, MODIFY_MTABLE_ENTRY, message_number, 
        message);
    if (message_number > 0)
    {
	/* find entry in message table */
	int i;
	for (i = 0; i < MESSAGE_TABLE_SIZE &&
	     MESSAGE_NUMBER(i) != message_number; i++);
	if (MESSAGE_NUMBER(i) == message_number)
	{
	    EPI_DEBUG(8, MODIFY_MTABLE_ENTRY, sprintf(d_buff,
		"modifying entry in message table. Entry = %d : (message number = %d, previous message address = %d, new message address = %d)", 
		i, MESSAGE_NUMBER(i), MESSAGE_ADDRESS(i), message));
	    MESSAGE_ADDRESS(i) = message;
	}
    }
    DEBUGEND(7, MODIFY_MTABLE_ENTRY);
    return;
}

/* end */
