/* $Id: epi_defs.c,v 34.2 1995/03/29 13:03:52 ella Exp $ */


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
$OldLog:	epi_defs.c,v $
 * Revision 2.1.1.1  91/11/29  13:50:03  aap
 * Most variables made into 'globalvalue's for VMS's benefit.
 * 
 * Revision 2.1  91/02/25  12:09:01  miker
 * Candidate release 5
 * 
 * Revision 1.1  90/04/17  15:15:09  aap
 * Initial revision
 * 
*/
/*
*******************************************************************************
				Praxis Systems plc

Module	      :	EPI definitions.

File          :	epi_defs.c
		
Description   :	This module declares EPI constants, provided in the header
		files epi.h and epi_internal.h, as external variables. This
		allows them to be used with the EPI Support functions which are
		implemented in Algol 68. It also provides external declarations
		to some EPI data.

		Note the convention used: C macros are declared as Algol 
		variables with a m_ prefix and C externals with a e_ prefix
		(this helps to avoid clashes in names during linking).


Changes History

   02.06.88	New module for EPI Version 0. BGH
   04.08.88     EPI Version 1. BGH
   23.08.88     EPI Version 2. AAP
   06.10.88	Implement actions from Code Review n035.7.47. BGH
   15.10.88	Implement actions from Code Review n035.7.48. BGH

*******************************************************************************
*/

#include "epi.h"
#include "epi_internal.h"

static char RcsId[] = "$Id: epi_defs.c,v 34.2 1995/03/29 13:03:52 ella Exp $";

/*
  VAX C requires global data to be specified with the globaldef or globalvalue
  specifiers if the data is to be shared with non-C modules.

  eg, an initialised variable
    C:   globaldef i = 42;
    A68: REF INT i = ALIEN "i";

  eg, a constant
    C:   globalvalue j = 99;
    A68: INT j = ALIEN "j";
*/

#ifdef vaxc
#else
#define globaldef
#define globalvalue
#endif

/* The declarations between the lines containing 'update-constants start'
   and 'update-constants end' are generated automatically by 'update-constants'.
   THEY MUST NOT BE EDITED MANUALLY!!
   See comment on 'epi_constant_strings' in epi.c.
*/

/* update-constants start */
    /* status codes */
globalvalue EPI_STATUS_CODE m_epi_s_ok = EPI_S_OK;
globalvalue EPI_STATUS_CODE m_epi_s_active = EPI_S_ACTIVE;
globalvalue EPI_STATUS_CODE m_epi_s_assembly_error = EPI_S_ASSEMBLY_ERROR;
globalvalue EPI_STATUS_CODE m_epi_s_bad_action = EPI_S_BAD_ACTION;
globalvalue EPI_STATUS_CODE m_epi_s_bad_binding = EPI_S_BAD_BINDING;
globalvalue EPI_STATUS_CODE m_epi_s_bad_condition = EPI_S_BAD_CONDITION;
globalvalue EPI_STATUS_CODE m_epi_s_bad_context = EPI_S_BAD_CONTEXT;
globalvalue EPI_STATUS_CODE m_epi_s_bad_context_name = EPI_S_BAD_CONTEXT_NAME;
globalvalue EPI_STATUS_CODE m_epi_s_bad_declaration = EPI_S_BAD_DECLARATION;
globalvalue EPI_STATUS_CODE m_epi_s_bad_filename = EPI_S_BAD_FILENAME;
globalvalue EPI_STATUS_CODE m_epi_s_bad_handler = EPI_S_BAD_HANDLER;
globalvalue EPI_STATUS_CODE m_epi_s_bad_imports = EPI_S_BAD_IMPORTS;
globalvalue EPI_STATUS_CODE m_epi_s_bad_imports_name = EPI_S_BAD_IMPORTS_NAME;
globalvalue EPI_STATUS_CODE m_epi_s_bad_increment = EPI_S_BAD_INCREMENT;
globalvalue EPI_STATUS_CODE m_epi_s_bad_library = EPI_S_BAD_LIBRARY;
globalvalue EPI_STATUS_CODE m_epi_s_bad_message_type = EPI_S_BAD_MESSAGE_TYPE;
globalvalue EPI_STATUS_CODE m_epi_s_bad_node = EPI_S_BAD_NODE;
globalvalue EPI_STATUS_CODE m_epi_s_bad_nodename = EPI_S_BAD_NODENAME;
globalvalue EPI_STATUS_CODE m_epi_s_bad_range = EPI_S_BAD_RANGE;
globalvalue EPI_STATUS_CODE m_epi_s_bad_signal = EPI_S_BAD_SIGNAL;
globalvalue EPI_STATUS_CODE m_epi_s_bad_sim_file = EPI_S_BAD_SIM_FILE;
globalvalue EPI_STATUS_CODE m_epi_s_bad_string = EPI_S_BAD_STRING;
globalvalue EPI_STATUS_CODE m_epi_s_bad_testpoint = EPI_S_BAD_TESTPOINT;
globalvalue EPI_STATUS_CODE m_epi_s_bad_values = EPI_S_BAD_VALUES;
globalvalue EPI_STATUS_CODE m_epi_s_closure_circular = EPI_S_CLOSURE_CIRCULAR;
globalvalue EPI_STATUS_CODE m_epi_s_closure_empty = EPI_S_CLOSURE_EMPTY;
globalvalue EPI_STATUS_CODE m_epi_s_closure_incomplete = EPI_S_CLOSURE_INCOMPLETE;
globalvalue EPI_STATUS_CODE m_epi_s_compile_error = EPI_S_COMPILE_ERROR;
globalvalue EPI_STATUS_CODE m_epi_s_compound_context = EPI_S_COMPOUND_CONTEXT;
globalvalue EPI_STATUS_CODE m_epi_s_context_exists = EPI_S_CONTEXT_EXISTS;
globalvalue EPI_STATUS_CODE m_epi_s_decl_bound = EPI_S_DECL_BOUND;
globalvalue EPI_STATUS_CODE m_epi_s_decl_exported = EPI_S_DECL_EXPORTED;
globalvalue EPI_STATUS_CODE m_epi_s_decl_not_exported = EPI_S_DECL_NOT_EXPORTED;
globalvalue EPI_STATUS_CODE m_epi_s_decl_not_imported = EPI_S_DECL_NOT_IMPORTED;
globalvalue EPI_STATUS_CODE m_epi_s_decl_used_by = EPI_S_DECL_USED_BY;
globalvalue EPI_STATUS_CODE m_epi_s_file_not_found = EPI_S_FILE_NOT_FOUND;
globalvalue EPI_STATUS_CODE m_epi_s_imports_exists = EPI_S_IMPORTS_EXISTS;
globalvalue EPI_STATUS_CODE m_epi_s_internal_error = EPI_S_INTERNAL_ERROR;
globalvalue EPI_STATUS_CODE m_epi_s_interrupted = EPI_S_INTERRUPTED;
globalvalue EPI_STATUS_CODE m_epi_s_last_context = EPI_S_LAST_CONTEXT;
globalvalue EPI_STATUS_CODE m_epi_s_last_imports = EPI_S_LAST_IMPORTS;
globalvalue EPI_STATUS_CODE m_epi_s_library_exists = EPI_S_LIBRARY_EXISTS;
globalvalue EPI_STATUS_CODE m_epi_s_lib_full = EPI_S_LIB_FULL;
globalvalue EPI_STATUS_CODE m_epi_s_lib_not_changed = EPI_S_LIB_NOT_CHANGED;
globalvalue EPI_STATUS_CODE m_epi_s_local_os_error = EPI_S_LOCAL_OS_ERROR;
globalvalue EPI_STATUS_CODE m_epi_s_logging = EPI_S_LOGGING;
globalvalue EPI_STATUS_CODE m_epi_s_multiple_imports = EPI_S_MULTIPLE_IMPORTS;
globalvalue EPI_STATUS_CODE m_epi_s_not_bound = EPI_S_NOT_BOUND;
globalvalue EPI_STATUS_CODE m_epi_s_not_implemented = EPI_S_NOT_IMPLEMENTED;
globalvalue EPI_STATUS_CODE m_epi_s_not_logging = EPI_S_NOT_LOGGING;
globalvalue EPI_STATUS_CODE m_epi_s_not_outputting = EPI_S_NOT_OUTPUTTING;
globalvalue EPI_STATUS_CODE m_epi_s_not_started = EPI_S_NOT_STARTED;
globalvalue EPI_STATUS_CODE m_epi_s_no_files = EPI_S_NO_FILES;
globalvalue EPI_STATUS_CODE m_epi_s_no_transaction = EPI_S_NO_TRANSACTION;
globalvalue EPI_STATUS_CODE m_epi_s_old_declaration = EPI_S_OLD_DECLARATION;
globalvalue EPI_STATUS_CODE m_epi_s_old_library = EPI_S_OLD_LIBRARY;
globalvalue EPI_STATUS_CODE m_epi_s_online = EPI_S_ONLINE;
globalvalue EPI_STATUS_CODE m_epi_s_outputting = EPI_S_OUTPUTTING;
globalvalue EPI_STATUS_CODE m_epi_s_recursion = EPI_S_RECURSION;
globalvalue EPI_STATUS_CODE m_epi_s_remote_os_error = EPI_S_REMOTE_OS_ERROR;
globalvalue EPI_STATUS_CODE m_epi_s_same_context = EPI_S_SAME_CONTEXT;
globalvalue EPI_STATUS_CODE m_epi_s_simple_context = EPI_S_SIMPLE_CONTEXT;
globalvalue EPI_STATUS_CODE m_epi_s_started = EPI_S_STARTED;
globalvalue EPI_STATUS_CODE m_epi_s_stopped = EPI_S_STOPPED;
globalvalue EPI_STATUS_CODE m_epi_s_suspended = EPI_S_SUSPENDED;
globalvalue EPI_STATUS_CODE m_epi_s_unsimulatable_function = EPI_S_UNSIMULATABLE_FUNCTION;
globalvalue EPI_STATUS_CODE m_epi_s_usage_circular = EPI_S_USAGE_CIRCULAR;
globalvalue EPI_STATUS_CODE m_epi_s_wrong_mode = EPI_S_WRONG_MODE;

    /* single message types  */
globalvalue EPI_MESSAGE_TYPE m_epi_m_cpu = EPI_M_CPU;
globalvalue EPI_MESSAGE_TYPE m_epi_m_internal_error = EPI_M_INTERNAL_ERROR;
globalvalue EPI_MESSAGE_TYPE m_epi_m_local_os_error = EPI_M_LOCAL_OS_ERROR;
globalvalue EPI_MESSAGE_TYPE m_epi_m_remote_os_error = EPI_M_REMOTE_OS_ERROR;
globalvalue EPI_MESSAGE_TYPE m_epi_m_aborted = EPI_M_ABORTED;
globalvalue EPI_MESSAGE_TYPE m_epi_m_library = EPI_M_LIBRARY;
globalvalue EPI_MESSAGE_TYPE m_epi_m_context = EPI_M_CONTEXT;
globalvalue EPI_MESSAGE_TYPE m_epi_m_imports = EPI_M_IMPORTS;
globalvalue EPI_MESSAGE_TYPE m_epi_m_binding = EPI_M_BINDING;
globalvalue EPI_MESSAGE_TYPE m_epi_m_declaration = EPI_M_DECLARATION;
globalvalue EPI_MESSAGE_TYPE m_epi_m_lib_version = EPI_M_LIB_VERSION;
globalvalue EPI_MESSAGE_TYPE m_epi_m_lib_last_written = EPI_M_LIB_LAST_WRITTEN;
globalvalue EPI_MESSAGE_TYPE m_epi_m_lib_last_cleared = EPI_M_LIB_LAST_CLEARED;
globalvalue EPI_MESSAGE_TYPE m_epi_m_lib_name = EPI_M_LIB_NAME;
globalvalue EPI_MESSAGE_TYPE m_epi_m_lib_size = EPI_M_LIB_SIZE;
globalvalue EPI_MESSAGE_TYPE m_epi_m_lib_overhead = EPI_M_LIB_OVERHEAD;
globalvalue EPI_MESSAGE_TYPE m_epi_m_lib_free = EPI_M_LIB_FREE;
globalvalue EPI_MESSAGE_TYPE m_epi_m_lib_changed = EPI_M_LIB_CHANGED;
globalvalue EPI_MESSAGE_TYPE m_epi_m_context_name = EPI_M_CONTEXT_NAME;
globalvalue EPI_MESSAGE_TYPE m_epi_m_imports_name = EPI_M_IMPORTS_NAME;
globalvalue EPI_MESSAGE_TYPE m_epi_m_binding_incomplete = EPI_M_BINDING_INCOMPLETE;
globalvalue EPI_MESSAGE_TYPE m_epi_m_decl_name = EPI_M_DECL_NAME;
globalvalue EPI_MESSAGE_TYPE m_epi_m_decl_exported_flag = EPI_M_DECL_EXPORTED_FLAG;
globalvalue EPI_MESSAGE_TYPE m_epi_m_decl_class = EPI_M_DECL_CLASS;
globalvalue EPI_MESSAGE_TYPE m_epi_m_decl_version = EPI_M_DECL_VERSION;
globalvalue EPI_MESSAGE_TYPE m_epi_m_decl_uses = EPI_M_DECL_USES;
globalvalue EPI_MESSAGE_TYPE m_epi_m_decl_used_by = EPI_M_DECL_USED_BY;
globalvalue EPI_MESSAGE_TYPE m_epi_m_decl_source = EPI_M_DECL_SOURCE;
globalvalue EPI_MESSAGE_TYPE m_epi_m_decl_import = EPI_M_DECL_IMPORT;
globalvalue EPI_MESSAGE_TYPE m_epi_m_compile_error = EPI_M_COMPILE_ERROR;
globalvalue EPI_MESSAGE_TYPE m_epi_m_assembly_error = EPI_M_ASSEMBLY_ERROR;
globalvalue EPI_MESSAGE_TYPE m_epi_m_new_decl = EPI_M_NEW_DECL;
globalvalue EPI_MESSAGE_TYPE m_epi_m_changed_decl = EPI_M_CHANGED_DECL;
globalvalue EPI_MESSAGE_TYPE m_epi_m_inconsistent_decl = EPI_M_INCONSISTENT_DECL;
globalvalue EPI_MESSAGE_TYPE m_epi_m_decl_not_exported = EPI_M_DECL_NOT_EXPORTED;
globalvalue EPI_MESSAGE_TYPE m_epi_m_decl_exported = EPI_M_DECL_EXPORTED;
globalvalue EPI_MESSAGE_TYPE m_epi_m_decl_not_bound = EPI_M_DECL_NOT_BOUND;
globalvalue EPI_MESSAGE_TYPE m_epi_m_decl_latest = EPI_M_DECL_LATEST;
globalvalue EPI_MESSAGE_TYPE m_epi_m_simulatable_node = EPI_M_SIMULATABLE_NODE;
globalvalue EPI_MESSAGE_TYPE m_eti_m_output = ETI_M_OUTPUT;
globalvalue EPI_MESSAGE_TYPE m_eti_m_showing_input = ETI_M_SHOWING_INPUT;
globalvalue EPI_MESSAGE_TYPE m_eti_m_showing_output = ETI_M_SHOWING_OUTPUT;
globalvalue EPI_MESSAGE_TYPE m_eti_m_input_file = ETI_M_INPUT_FILE;
globalvalue EPI_MESSAGE_TYPE m_eti_m_input_start = ETI_M_INPUT_START;
globalvalue EPI_MESSAGE_TYPE m_eti_m_input_end = ETI_M_INPUT_END;
globalvalue EPI_MESSAGE_TYPE m_eti_m_input_file_count = ETI_M_INPUT_FILE_COUNT;
globalvalue EPI_MESSAGE_TYPE m_eti_m_output_file = ETI_M_OUTPUT_FILE;
globalvalue EPI_MESSAGE_TYPE m_eti_m_log_file = ETI_M_LOG_FILE;
globalvalue EPI_MESSAGE_TYPE m_eti_m_mode = ETI_M_MODE;
globalvalue EPI_MESSAGE_TYPE m_epi_m_node = EPI_M_NODE;
globalvalue EPI_MESSAGE_TYPE m_epi_m_type = EPI_M_TYPE;
globalvalue EPI_MESSAGE_TYPE m_epi_m_signal = EPI_M_SIGNAL;
globalvalue EPI_MESSAGE_TYPE m_epi_m_old_testpoint = EPI_M_OLD_TESTPOINT;
globalvalue EPI_MESSAGE_TYPE m_epi_m_testpoint = EPI_M_TESTPOINT;
globalvalue EPI_MESSAGE_TYPE m_epi_m_event = EPI_M_EVENT;
globalvalue EPI_MESSAGE_TYPE m_epi_m_first_event = EPI_M_FIRST_EVENT;
globalvalue EPI_MESSAGE_TYPE m_epi_m_incomplete_event = EPI_M_INCOMPLETE_EVENT;
globalvalue EPI_MESSAGE_TYPE m_epi_m_incomplete_first_event = EPI_M_INCOMPLETE_FIRST_EVENT;
globalvalue EPI_MESSAGE_TYPE m_epi_m_sim_time = EPI_M_SIM_TIME;
globalvalue EPI_MESSAGE_TYPE m_epi_m_simulated_node = EPI_M_SIMULATED_NODE;
globalvalue EPI_MESSAGE_TYPE m_epi_m_kept_node = EPI_M_KEPT_NODE;
globalvalue EPI_MESSAGE_TYPE m_epi_m_fn_input = EPI_M_FN_INPUT;
globalvalue EPI_MESSAGE_TYPE m_epi_m_node_class = EPI_M_NODE_CLASS;
globalvalue EPI_MESSAGE_TYPE m_epi_m_node_contains = EPI_M_NODE_CONTAINS;
globalvalue EPI_MESSAGE_TYPE m_epi_m_node_contained_in = EPI_M_NODE_CONTAINED_IN;
globalvalue EPI_MESSAGE_TYPE m_epi_m_node_name = EPI_M_NODE_NAME;
globalvalue EPI_MESSAGE_TYPE m_epi_m_node_kept = EPI_M_NODE_KEPT;
globalvalue EPI_MESSAGE_TYPE m_epi_m_ram_value = EPI_M_RAM_VALUE;
globalvalue EPI_MESSAGE_TYPE m_epi_m_testpoint_action = EPI_M_TESTPOINT_ACTION;
globalvalue EPI_MESSAGE_TYPE m_epi_m_testpoint_condition = EPI_M_TESTPOINT_CONDITION;
globalvalue EPI_MESSAGE_TYPE m_epi_m_testpoint_cond_value = EPI_M_TESTPOINT_COND_VALUE;

    /* group message types */
globalvalue EPI_MESSAGE_TYPE m_epi_m_all = EPI_M_ALL;
globalvalue EPI_MESSAGE_TYPE m_epi_m_lib_all = EPI_M_LIB_ALL;
globalvalue EPI_MESSAGE_TYPE m_epi_m_context_all = EPI_M_CONTEXT_ALL;
globalvalue EPI_MESSAGE_TYPE m_epi_m_imports_all = EPI_M_IMPORTS_ALL;
globalvalue EPI_MESSAGE_TYPE m_epi_m_closure_all = EPI_M_CLOSURE_ALL;
globalvalue EPI_MESSAGE_TYPE m_epi_m_binding_all = EPI_M_BINDING_ALL;
globalvalue EPI_MESSAGE_TYPE m_epi_m_decl_all = EPI_M_DECL_ALL;
globalvalue EPI_MESSAGE_TYPE m_eti_m_all = ETI_M_ALL;
globalvalue EPI_MESSAGE_TYPE m_epi_m_sim_all = EPI_M_SIM_ALL;
globalvalue EPI_MESSAGE_TYPE m_epi_m_node_all = EPI_M_NODE_ALL;
globalvalue EPI_MESSAGE_TYPE m_epi_m_testpoint_all = EPI_M_TESTPOINT_ALL;

    /* declaration classes */
globalvalue EPI_UNSIGNED m_epi_c_type = EPI_C_TYPE;
globalvalue EPI_UNSIGNED m_epi_c_int = EPI_C_INT;
globalvalue EPI_UNSIGNED m_epi_c_fn = EPI_C_FN;
globalvalue EPI_UNSIGNED m_epi_c_mac = EPI_C_MAC;
globalvalue EPI_UNSIGNED m_epi_c_const = EPI_C_CONST;

    /* ETI modes */
globalvalue EPI_UNSIGNED m_eti_c_ease = ETI_C_EASE;
globalvalue EPI_UNSIGNED m_eti_c_sim_present = ETI_C_SIM_PRESENT;
globalvalue EPI_UNSIGNED m_eti_c_sim_past = ETI_C_SIM_PAST;
globalvalue EPI_UNSIGNED m_eti_c_attr = ETI_C_ATTR;
globalvalue EPI_UNSIGNED m_eti_c_attr_end = ETI_C_ATTR_END;
globalvalue EPI_UNSIGNED m_eti_c_attr_eld = ETI_C_ATTR_ELD;
globalvalue EPI_UNSIGNED m_eti_c_attr_ecd = ETI_C_ATTR_ECD;
globalvalue EPI_UNSIGNED m_eti_c_attr_eca = ETI_C_ATTR_ECA;

    /* testpoint conditions */
globalvalue EPI_UNSIGNED m_epi_c_always = EPI_C_ALWAYS;
globalvalue EPI_UNSIGNED m_epi_c_becomes = EPI_C_BECOMES;
globalvalue EPI_UNSIGNED m_epi_c_changes = EPI_C_CHANGES;
globalvalue EPI_UNSIGNED m_epi_c_equals = EPI_C_EQUALS;

    /* node classes */
globalvalue EPI_UNSIGNED m_epi_c_fn_node = EPI_C_FN_NODE;
globalvalue EPI_UNSIGNED m_epi_c_input_node = EPI_C_INPUT_NODE;
globalvalue EPI_UNSIGNED m_epi_c_ram_node = EPI_C_RAM_NODE;
globalvalue EPI_UNSIGNED m_epi_c_wire_node = EPI_C_WIRE_NODE;
    /* testpoint actions */
globalvalue EPI_UNSIGNED m_epi_c_notify = EPI_C_NOTIFY;
globalvalue EPI_UNSIGNED m_epi_c_notify_and_keep = EPI_C_NOTIFY_AND_KEEP;
globalvalue EPI_UNSIGNED m_epi_c_stop = EPI_C_STOP;

    /* type classes */
globalvalue EPI_UNSIGNED m_epi_c_type_char = EPI_C_TYPE_CHAR;
globalvalue EPI_UNSIGNED m_epi_c_type_enum = EPI_C_TYPE_ENUM;
globalvalue EPI_UNSIGNED m_epi_c_type_fntype = EPI_C_TYPE_FNTYPE;
globalvalue EPI_UNSIGNED m_epi_c_type_int = EPI_C_TYPE_INT;
globalvalue EPI_UNSIGNED m_epi_c_type_invalid = EPI_C_TYPE_INVALID;
globalvalue EPI_UNSIGNED m_epi_c_type_null = EPI_C_TYPE_NULL;
globalvalue EPI_UNSIGNED m_epi_c_type_row = EPI_C_TYPE_ROW;
globalvalue EPI_UNSIGNED m_epi_c_type_string = EPI_C_TYPE_STRING;
globalvalue EPI_UNSIGNED m_epi_c_type_struct = EPI_C_TYPE_STRUCT;
globalvalue EPI_UNSIGNED m_epi_c_type_void = EPI_C_TYPE_VOID;
/* update-constants end */

/* The declarations between the lines containing 'update-procinfo start'
   and 'update-procinfo end' are generated automatically by 'update-procinfo'.
   THEY MUST NOT BE EDITED MANUALLY!!
   See comment on 'procinfo' in epi.c.
*/

/* update-procinfo start */
    /* library & support active/passive/pre-emptive functions */
globalvalue int m_epi_start = EPI_START;
globalvalue int m_epi_finish = EPI_FINISH;
globalvalue int m_epi_restore_simulation = EPI_RESTORE_SIMULATION;
globalvalue int m_epi_interrupt = EPI_INTERRUPT;

globalvalue int m_epi_nominate_handler = EPI_NOMINATE_HANDLER;
globalvalue int m_epi_notify_cpu_usage = EPI_NOTIFY_CPU_USAGE;
globalvalue int m_epi_dont_notify_cpu_usage = EPI_DONT_NOTIFY_CPU_USAGE;
globalvalue int m_epi_start_diagnostics = EPI_START_DIAGNOSTICS;
globalvalue int m_epi_stop_diagnostics = EPI_STOP_DIAGNOSTICS;
globalvalue int m_epi_get_handler = EPI_GET_HANDLER;
globalvalue int m_epi_status_message = EPI_STATUS_MESSAGE;
globalvalue int m_epi_status_message_count = EPI_STATUS_MESSAGE_COUNT;

globalvalue int m_epi_clear_library = EPI_CLEAR_LIBRARY;
globalvalue int m_epi_increase_library = EPI_INCREASE_LIBRARY;
globalvalue int m_epi_make_context = EPI_MAKE_CONTEXT;
globalvalue int m_epi_regress_library = EPI_REGRESS_LIBRARY;
globalvalue int m_epi_save_library = EPI_SAVE_LIBRARY;
globalvalue int m_epi_get_library_details = EPI_GET_LIBRARY_DETAILS;
globalvalue int m_epi_same_library = EPI_SAME_LIBRARY;

globalvalue int m_epi_copy_context = EPI_COPY_CONTEXT;
globalvalue int m_epi_erase_context = EPI_ERASE_CONTEXT;
globalvalue int m_epi_clear_context = EPI_CLEAR_CONTEXT;
globalvalue int m_epi_convert_to_simple = EPI_CONVERT_TO_SIMPLE;
globalvalue int m_epi_convert_to_compound = EPI_CONVERT_TO_COMPOUND;
globalvalue int m_epi_make_imports = EPI_MAKE_IMPORTS;
globalvalue int m_epi_get_context_details = EPI_GET_CONTEXT_DETAILS;
globalvalue int m_epi_same_context = EPI_SAME_CONTEXT;

globalvalue int m_epi_compile = EPI_COMPILE;
globalvalue int m_epi_copy_imports = EPI_COPY_IMPORTS;
globalvalue int m_epi_erase_imports = EPI_ERASE_IMPORTS;
globalvalue int m_epi_clear_imports = EPI_CLEAR_IMPORTS;
globalvalue int m_epi_dump_imports = EPI_DUMP_IMPORTS;
globalvalue int m_epi_simulate_imports = EPI_SIMULATE_IMPORTS;
globalvalue int m_epi_get_imports_details = EPI_GET_IMPORTS_DETAILS;
globalvalue int m_epi_get_closure_details = EPI_GET_CLOSURE_DETAILS;
globalvalue int m_epi_same_imports = EPI_SAME_IMPORTS;

globalvalue int m_epi_fixup_binding = EPI_FIXUP_BINDING;
globalvalue int m_epi_clear_binding = EPI_CLEAR_BINDING;
globalvalue int m_epi_dump_binding = EPI_DUMP_BINDING;
globalvalue int m_epi_simulate_binding = EPI_SIMULATE_BINDING;
globalvalue int m_epi_get_binding_details = EPI_GET_BINDING_DETAILS;
globalvalue int m_epi_same_binding = EPI_SAME_BINDING;

globalvalue int m_epi_erase_declaration = EPI_ERASE_DECLARATION;
globalvalue int m_epi_clear_export = EPI_CLEAR_EXPORT;
globalvalue int m_epi_export = EPI_EXPORT;
globalvalue int m_epi_get_declaration_details = EPI_GET_DECLARATION_DETAILS;
globalvalue int m_epi_same_declaration = EPI_SAME_DECLARATION;

globalvalue int m_eti_command = ETI_COMMAND;
globalvalue int m_eti_clearinputs = ETI_CLEARINPUTS;
globalvalue int m_eti_input = ETI_INPUT;
globalvalue int m_eti_removefile = ETI_REMOVEFILE;
globalvalue int m_eti_showinput = ETI_SHOWINPUT;
globalvalue int m_eti_dontshowinput = ETI_DONTSHOWINPUT;
globalvalue int m_eti_offline = ETI_OFFLINE;
globalvalue int m_eti_log = ETI_LOG;
globalvalue int m_eti_dontlog = ETI_DONTLOG;
globalvalue int m_eti_output = ETI_OUTPUT;
globalvalue int m_eti_dontoutput = ETI_DONTOUTPUT;
globalvalue int m_eti_showoutput = ETI_SHOWOUTPUT;
globalvalue int m_eti_dontshowoutput = ETI_DONTSHOWOUTPUT;
globalvalue int m_eti_obey = ETI_OBEY;
globalvalue int m_epi_get_eti_details = EPI_GET_ETI_DETAILS;

globalvalue int m_epi_set_input = EPI_SET_INPUT;
globalvalue int m_epi_finish_simulation = EPI_FINISH_SIMULATION;
globalvalue int m_epi_capture_simulation = EPI_CAPTURE_SIMULATION;
globalvalue int m_epi_restart_simulation = EPI_RESTART_SIMULATION;
globalvalue int m_epi_replay_simulation = EPI_REPLAY_SIMULATION;
globalvalue int m_epi_get_simulation_details = EPI_GET_SIMULATION_DETAILS;

globalvalue int m_epi_same_type = EPI_SAME_TYPE;

globalvalue int m_epi_create_testpoint = EPI_CREATE_TESTPOINT;
globalvalue int m_epi_keep = EPI_KEEP;
globalvalue int m_epi_dont_keep = EPI_DONT_KEEP;
globalvalue int m_epi_set_ram = EPI_SET_RAM;
globalvalue int m_epi_simulate_function = EPI_SIMULATE_FUNCTION;
globalvalue int m_epi_get_node_details = EPI_GET_NODE_DETAILS;
globalvalue int m_epi_get_signal = EPI_GET_SIGNAL;
globalvalue int m_epi_get_ram_values = EPI_GET_RAM_VALUES;
globalvalue int m_epi_parse_nodename = EPI_PARSE_NODENAME;
globalvalue int m_epi_same_node = EPI_SAME_NODE;

globalvalue int m_epi_decode_signal = EPI_DECODE_SIGNAL;
globalvalue int m_epi_encode_signal = EPI_ENCODE_SIGNAL;
globalvalue int m_epi_same_signal = EPI_SAME_SIGNAL;

globalvalue int m_epi_erase_testpoint = EPI_ERASE_TESTPOINT;
globalvalue int m_epi_get_testpoint_details = EPI_GET_TESTPOINT_DETAILS;
globalvalue int m_epi_same_testpoint = EPI_SAME_TESTPOINT;

globalvalue int m_epi_same_event = EPI_SAME_EVENT;

globalvalue int m_epi_same_ram_value = EPI_SAME_RAM_VALUE;

globalvalue int m_epi_free_message = EPI_FREE_MESSAGE;
globalvalue int m_epi_free_status = EPI_FREE_STATUS;
globalvalue int m_epi_free_type = EPI_FREE_TYPE;
globalvalue int m_epi_time_as_string = EPI_TIME_AS_STRING;
globalvalue int m_epi_default_handler = EPI_DEFAULT_HANDLER;

    /* library and support private functions */
globalvalue int m_epi_send_message = EPI_SEND_MESSAGE;
globalvalue int m_epi_initialise = EPI_INITIALISE;

    /* support only private functions */
globalvalue int m_epi_diagnostics = EPI_DIAGNOSTICS;
globalvalue int m_push_notify = PUSH_NOTIFY;
globalvalue int m_pop_notify = POP_NOTIFY;
globalvalue int m_epi_notify = EPI_NOTIFY;
globalvalue int m_epi_fault = EPI_FAULT;
globalvalue int m_check_notify = CHECK_NOTIFY;
globalvalue int m_terminate_ella = TERMINATE_ELLA;
globalvalue int m_sim_function = SIM_FUNCTION;
globalvalue int m_date_time_to_int = DATE_TIME_TO_INT;
globalvalue int m_cpu_usage = CPU_USAGE;
globalvalue int m_process_eti_command = PROCESS_ETI_COMMAND;
globalvalue int m_epi_set_mode = EPI_SET_MODE;
globalvalue int m_find_ella_context = FIND_ELLA_CONTEXT;
globalvalue int m_find_ella_decl = FIND_ELLA_DECL;
globalvalue int m_get_kepts = GET_KEPTS;
globalvalue int m_dummy_put = DUMMY_PUT;

    /* library only private functions */
globalvalue int m_valid_id = VALID_ID;
globalvalue int m_start_diagnostics = START_DIAGNOSTICS;
globalvalue int m_search_mtable_using_number = SEARCH_MTABLE_USING_NUMBER;
globalvalue int m_search_mtable_using_address = SEARCH_MTABLE_USING_ADDRESS;
globalvalue int m_new_mtable_entry = NEW_MTABLE_ENTRY;
globalvalue int m_clear_mtable_entry = CLEAR_MTABLE_ENTRY;
globalvalue int m_modify_mtable_entry = MODIFY_MTABLE_ENTRY;

    /* end */
globalvalue int m_default_epi_function = DEFAULT_EPI_FUNCTION;
/* update-procinfo end */

m_max_proc_index 		= MAX_PROC_INDEX,
m_max_message_type		= MAX_MESSAGE_TYPE,
m_min_message_type		= MIN_MESSAGE_TYPE,
m_min_single_mtype		= MIN_SINGLE_MTYPE,
m_max_single_mtype		= MAX_SINGLE_MTYPE,
m_max_status_code		= MAX_STATUS_CODE,
m_min_status_code		= MIN_STATUS_CODE,
m_max_recursion			= EPI_MAX_RECURSION;

globalvalue EPI_IDENT m_epi_o_library = EPI_O_LIBRARY;
globalvalue EPI_IDENT m_epi_o_context = EPI_O_CONTEXT;
globalvalue EPI_IDENT m_epi_o_imports = EPI_O_IMPORTS;
globalvalue EPI_IDENT m_epi_o_binding = EPI_O_BINDING;
globalvalue EPI_IDENT m_epi_o_null_binding = EPI_O_NULL_BINDING;
globalvalue EPI_IDENT m_epi_o_declaration = EPI_O_DECLARATION;
globalvalue EPI_IDENT m_epi_o_node = EPI_O_NODE;
globalvalue EPI_IDENT m_epi_o_event = EPI_O_EVENT;
globalvalue EPI_IDENT m_epi_o_ram_value	= EPI_O_RAM_VALUE;
globalvalue EPI_IDENT m_epi_o_fn_input = EPI_O_FN_INPUT;
globalvalue EPI_IDENT m_epi_o_signal = EPI_O_SIGNAL;
globalvalue EPI_IDENT m_epi_o_null_signal = EPI_O_NULL_SIGNAL;
globalvalue EPI_IDENT m_epi_o_null_node	= EPI_O_NULL_NODE;
globalvalue EPI_IDENT m_epi_o_testpoint	= EPI_O_TESTPOINT;
globalvalue EPI_IDENT m_epi_o_type = EPI_O_TYPE;
globalvalue EPI_IDENT m_epi_o_null_type	= EPI_O_NULL_TYPE;

EPI_STRING 
*e_epi_constant_strings 	= epi_constant_strings;



