/* $Id: epi_general.c,v 34.2 1995/03/29 13:03:54 ella Exp $ */


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
                                  system old version was 2.1.1.2 
29:03:95  34.002  ELLA  Modcprght Change copyright header
??:??:??   ?.???  ????
*/

/*
$OldLog:	epi_general.c,v $
 * Revision 2.1.1.2  91/10/29  09:32:45  aap
 * Compilation error on VMS fixed.
 * 
 * Revision 2.1.1.1  91/10/28  13:45:20  aap
 * Use string.h instead of strings.h (for VMS)
 * 
 * Revision 2.1  91/02/25  12:09:50  miker
 * Candidate release 5
 * 
 * Revision 1.1  90/04/17  15:16:48  aap
 * Initial revision
 * 
*/
/*
*******************************************************************************
				Praxis Systems plc

Module	      :	EPI Library - general functions

File          :	epi_general.c
		
Description   :	This module contains the general functions of the EPI library.


Changes History

   21.09.88	Created by extracting general functions from epi.c . BGH
   07.10.88	Implement actions from Code Review n035.7.47. BGH
   13.10.88	Added epi_time_as_string. BGH
   23.11.88	epi_time_as_string now uses gmtime() instead of 
   		localtime(). BGH
   24.11.88	Added epi_same_event, epi_same_ram_value and 
   		epi_same_type. BGH
   05.12.88	Updated epi_nominate_handler for V2 group message types. BGH

*******************************************************************************
*/

static char RcsId[] = "$Id: epi_general.c,v 34.2 1995/03/29 13:03:54 ella Exp $";	/* Sccs ident for C file */

#include <stdio.h>
#include <varargs.h>
#include <time.h>
#include <string.h>
#include "epi.h"
#include "epi_internal.h"

/* diagnostics file */
FILE *diaglog;

/* private functions */
/* ----------------- */

void epi_diagnostics(proc_index, message, for_library)
int proc_index;			/* index of function in procinfo table */
char *message;			/* diagnostics message */
EPI_BOOL for_library;		/* for library (TRUE) or support (FALSE) */
{
    DEBUGSTART_DIAG(6, EPI_DIAGNOSTICS);
    fprintf(diaglog, "%s %s %s\n", (for_library ? "Client: " : "Server: "),
	    FUNCTION_NAME(proc_index), message);
    DEBUGEND(7, EPI_DIAGNOSTICS);
    return;
}


/* The following functions implement the main body of some of the EPI     */
/* routines. They exist as separate functions as they need to send EPI    */
/* messages and in order to do this each function is loaded into the      */
/* procedure table and is accessed as though it were a support routine    */
/* (via CALL_SUPPORT_FUNCTION) - this ensures that there is a status at   */
/* the top of the status stack ready for the default handler to associate */
/* the message with (as required) 					  */

EPI_STATUS_CODE start_diagnostics()
{
    EPI_STATUS_CODE status_code = EPI_S_OK;

    DEBUGSTART(6, START_DIAGNOSTICS);
    if ((diaglog = fopen(EPI_DIAG_FILE, "a")) == NULL)
    {
	EPI_MESSAGE error_message;

	error_message = new_message();
	epi_message_type(error_message) = EPI_M_LOCAL_OS_ERROR;
	epi_m_local_os_error(error_message) =
	    "failed to open diagnostics log file.";
	epi_send_message(error_message);
	status_code = EPI_S_LOCAL_OS_ERROR;
    }
    DEBUGEND_STATUS_CODE(7, START_DIAGNOSTICS, status_code);
    return (status_code);
}

/* active functions */
/* ---------------- */

EPI_STATUS epi_start(library_name, create)
EPI_STRING library_name;
EPI_BOOL create;
{
    EPI_STATUS status;

    INIT_STATUS(status);
    DEBUGSTART_LIBNAM_CFLAG(1, EPI_START, library_name, create);
    if (epi_active)
	epi_status_code(status) = EPI_S_ACTIVE;
    else
    {
	int i;

	ACTIVE_START;
	if (library_name == NULL || *library_name == 0)
	    epi_status_code(status) = EPI_S_BAD_STRING;
	else
	{
	    if (!epi_started)
	    {
		/* set default handler for all single message types  */
		for (i = MIN_SINGLE_MTYPE; i <= MAX_SINGLE_MTYPE; i++)
		    MTYPE_HANDLER(i) = epi_default_handler;
		/* initialise message table */
		for (i = 0; i <= MESSAGE_TABLE_SIZE - 1; i++)
	        {
		    MESSAGE_NUMBER(i) = 0;
		    MESSAGE_ADDRESS(i) = EPI_NULL_MESSAGE;
		}
		message_table_free = MESSAGE_TABLE_SIZE;
	    }
	    /* note that the support function detects if epi is already */

	    /* started and returns a status code of EPI_S_STARTED if it has */
	    CALL_SUPPORT_FUNCTION(status, EPI_START, (library_name, create));
	    if (epi_status_code(status) == EPI_S_OK)
		epi_started = TRUE;
	}
	ACTIVE_STOP;
    }
    DEBUGEND_STATUS(2, EPI_START, status);
    return (status);
}


EPI_STATUS epi_finish()
{
    EPI_STATUS status;

    INIT_STATUS(status);
    DEBUGSTART(1, EPI_FINISH);
    if (!epi_started)
	epi_status_code(status) = EPI_S_NOT_STARTED;
    else if (epi_active)
	epi_status_code(status) = EPI_S_ACTIVE;
    else
    {
	ACTIVE_START;
	CALL_SUPPORT_FUNCTION(status, EPI_FINISH, ());
	epi_started = FALSE;
	ACTIVE_STOP;
    }
    DEBUGEND_STATUS(2, EPI_FINISH, status);
    return (status);
}


EPI_STATUS epi_nominate_handler(va_alist)
 va_dcl
{
    EPI_STATUS status;
    va_list args;
    EPI_HANDLER handler;
    EPI_MESSAGE_TYPE type;
    int i;

    INIT_STATUS(status);
    DEBUGSTART_VARG(1, EPI_NOMINATE_HANDLER);
    if (!epi_started)
	epi_status_code(status) = EPI_S_NOT_STARTED;
    else if (epi_active)
	epi_status_code(status) = EPI_S_ACTIVE;
    else
    {
	ACTIVE_START;
	va_start(args);
	/* first argument is the handler */
	handler = va_arg(args, EPI_HANDLER);
	if (handler == EPI_NULL_HANDLER)
	    epi_status_code(status) = EPI_S_BAD_HANDLER;
	else
	{
	    /* process all message types supplied in variable arg list */
	    while ((type = va_arg(args, EPI_MESSAGE_TYPE)) != 0)
	    {
		/* check message type is valid single or group type */
		if (type < MIN_MESSAGE_TYPE || type > MAX_MESSAGE_TYPE)
		{
		    epi_status_code(status) = EPI_S_BAD_MESSAGE_TYPE;
		    break;
		} else
		{
		    EPI_DEBUG(8, EPI_NOMINATE_HANDLER, sprintf(d_buff,
		       "setting handler(s) for message type: (%s)",
		       epi_constant_strings[type]));
		    switch (type)
		    {
		      case EPI_M_ALL:
			for (i = MIN_SINGLE_MTYPE; i <= MAX_SINGLE_MTYPE; i++)
			    MTYPE_HANDLER(i) =
				handler;
			break;
		      case EPI_M_LIB_ALL:
			for (i = 0; epi_m_lib_all[i] != 0; i++)
			    MTYPE_HANDLER(epi_m_lib_all[i]) =
				handler;
			break;
		      case EPI_M_CONTEXT_ALL:
			for (i = 0; epi_m_context_all[i] != 0; i++)
			    MTYPE_HANDLER(epi_m_context_all[i]) =
				handler;
			break;
		      case EPI_M_IMPORTS_ALL:
			for (i = 0; epi_m_imports_all[i] != 0; i++)
			    MTYPE_HANDLER(epi_m_imports_all[i]) =
				handler;
			break;
		      case EPI_M_CLOSURE_ALL:
			for (i = 0; epi_m_closure_all[i] != 0; i++)
			    MTYPE_HANDLER(epi_m_closure_all[i]) =
				handler;
			break;
		      case EPI_M_BINDING_ALL:
			for (i = 0; epi_m_binding_all[i] != 0; i++)
			    MTYPE_HANDLER(epi_m_binding_all[i]) =
				handler;
			break;
		      case EPI_M_DECL_ALL:
			for (i = 0; epi_m_decl_all[i] != 0; i++)
			    MTYPE_HANDLER(epi_m_decl_all[i]) =
				handler;
			break;
		      case ETI_M_ALL:
			for (i = 0; eti_m_all[i] != 0; i++)
			    MTYPE_HANDLER(eti_m_all[i]) =
				handler;
			break;
		      case EPI_M_SIM_ALL:
			for (i = 0; epi_m_sim_all[i] != 0; i++)
			    MTYPE_HANDLER(epi_m_sim_all[i]) =
				handler;
			break;
		      case EPI_M_NODE_ALL:
			for (i = 0; epi_m_node_all[i] != 0; i++)
			    MTYPE_HANDLER(epi_m_node_all[i]) =
				handler;
			break;
		      case EPI_M_TESTPOINT_ALL:
			for (i = 0; epi_m_testpoint_all[i] != 0; i++)
			    MTYPE_HANDLER(epi_m_testpoint_all[i]) =
				handler;
			break;
		      default:
			if (type >= MIN_SINGLE_MTYPE && 
			    type <= MAX_SINGLE_MTYPE)
			    MTYPE_HANDLER(type) = handler;
			else
			    /* message type action undefined */
			    epi_status_code(status) = EPI_S_INTERNAL_ERROR;
			break;
		    }
		}
	    }
	}
	va_end(args);
	ACTIVE_STOP;
    }
    DEBUGEND_STATUS(2, EPI_NOMINATE_HANDLER, status);
    return (status);
}


EPI_STATUS epi_start_diagnostics()
{
    EPI_STATUS status;

    INIT_STATUS(status);
    DEBUGSTART(1, EPI_START_DIAGNOSTICS);
    if (!epi_started)
	epi_status_code(status) = EPI_S_NOT_STARTED;
    else if (epi_active)
	epi_status_code(status) = EPI_S_ACTIVE;
    else if (!epi_diag_on)
    {
	ACTIVE_START;
	/* start client	and server diagnostics */
	CALL_SUPPORT_FUNCTION(status, START_DIAGNOSTICS, ());
	if (epi_status_code(status) == EPI_S_OK)
	{
	    epi_diag_on = TRUE;
	}
	ACTIVE_STOP;
    }
    DEBUGEND_STATUS(2, EPI_START_DIAGNOSTICS, status);
    return (status);
}


EPI_STATUS epi_stop_diagnostics()
{
    EPI_STATUS status;

    INIT_STATUS(status);
    DEBUGSTART(1, EPI_STOP_DIAGNOSTICS);
    if (!epi_started)
	epi_status_code(status) = EPI_S_NOT_STARTED;
    else if (epi_active)
	epi_status_code(status) = EPI_S_ACTIVE;
    else if (epi_diag_on)
    {
	ACTIVE_START;
	fclose(diaglog);
	epi_diag_on = FALSE;
	ACTIVE_STOP;
    }
    DEBUGEND_STATUS(2, EPI_STOP_DIAGNOSTICS, status);
    return (status);
}


EPI_STATUS epi_restore_simulation(filename)
EPI_STRING filename;
{
    EPI_STATUS status;

    INIT_STATUS(status);
    DEBUGSTART_FILENAME(1, EPI_RESTORE_SIMULATION, filename);
    if (!epi_started)
	epi_status_code(status) = EPI_S_NOT_STARTED;
    else if (epi_active)
	epi_status_code(status) = EPI_S_ACTIVE;
    else
    {
	ACTIVE_START;
	if (filename == NULL || *filename == 0)
	    epi_status_code(status) = EPI_S_BAD_STRING;
	else
	    CALL_SUPPORT_FUNCTION(status, EPI_RESTORE_SIMULATION, (filename));
	ACTIVE_STOP;
    }
    DEBUGEND_STATUS(2, EPI_RESTORE_SIMULATION, status);
    return (status);
}


EPI_STATUS epi_notify_cpu_usage()
{
    EPI_STATUS status;

    INIT_STATUS(status);
    DEBUGSTART(1, EPI_NOTIFY_CPU_USAGE);
    if (!epi_started)
	epi_status_code(status) = EPI_S_NOT_STARTED;
    else if (epi_active)
	epi_status_code(status) = EPI_S_ACTIVE;
    else
    {
	ACTIVE_START;
	CALL_SUPPORT_FUNCTION(status, EPI_NOTIFY_CPU_USAGE, ());
	ACTIVE_STOP;
    }
    DEBUGEND_STATUS(2, EPI_NOTIFY_CPU_USAGE, status);
    return (status);
}


EPI_STATUS epi_dont_notify_cpu_usage()
{
    EPI_STATUS status;

    INIT_STATUS(status);
    DEBUGSTART(1, EPI_DONT_NOTIFY_CPU_USAGE);
    if (!epi_started)
	epi_status_code(status) = EPI_S_NOT_STARTED;
    else if (epi_active)
	epi_status_code(status) = EPI_S_ACTIVE;
    else
    {
	ACTIVE_START;
	CALL_SUPPORT_FUNCTION(status, EPI_DONT_NOTIFY_CPU_USAGE, ());
	ACTIVE_STOP;
    }
    DEBUGEND_STATUS(2, EPI_DONT_NOTIFY_CPU_USAGE, status);
    return (status);
}


/* pre-emptive functions */
/* --------------------- */

EPI_STATUS epi_interrupt()
{
    EPI_STATUS status;

    INIT_STATUS(status);
    DEBUGSTART(1, EPI_INTERRUPT);
    if (!epi_started)
	epi_status_code(status) = EPI_S_NOT_STARTED;
    else if (!epi_busy)
	epi_status_code(status) = EPI_S_NO_TRANSACTION;
    else
    {
	PRE_EMPTIVE_START;
	CALL_SUPPORT_FUNCTION(status, EPI_INTERRUPT, ());
	PRE_EMPTIVE_STOP;
    }
    DEBUGEND_STATUS(2, EPI_INTERRUPT, status);
    return (status);
}


/* general functions */
/* ----------------- */

void epi_free_message(message)
EPI_MESSAGE message;
{
    DEBUGSTART_MESS(3, EPI_FREE_MESSAGE, message);

    /* check if message is associated with a status 
       and if it is, remove it from the circular list */
    if (message->previous != EPI_NULL_MESSAGE)
	if (message->previous == message)
	    /* last message in list, delete entry in message table */
	    clear_mtable_entry(search_mtable_using_address(message));
	else
        {
	    int first_message_number;
	    /* not last in list, update pointers for neighbouring messages */
	    (message->previous)->next = message->next;
	    (message->next)->previous = message->previous;
	    /* check if message was first in list */
	    first_message_number = search_mtable_using_address(message);
	    if (first_message_number != 0)
		/* replace address of message with next one in list */
		modify_mtable_entry(first_message_number, message->next);
	}


    /* firstly free any objects referred to by message */
    switch (epi_message_type(message))
    {
	/* epi_string */
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
    case ETI_M_OUTPUT:
    case ETI_M_INPUT_FILE:
    case ETI_M_INPUT_START:
    case ETI_M_INPUT_END:
    case ETI_M_OUTPUT_FILE:
    case ETI_M_LOG_FILE:
    case EPI_M_SIMULATABLE_NODE:
    case EPI_M_KEPT_NODE:
    case EPI_M_NODE_NAME:
	FREE_STRING(message->data.string);
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
	break;

	/* epi_bool */
    case EPI_M_LIB_CHANGED:
    case EPI_M_DECL_EXPORTED_FLAG:
    case EPI_M_DECL_IMPORT:
    case ETI_M_SHOWING_INPUT:
    case ETI_M_SHOWING_OUTPUT:
    case EPI_M_NODE_KEPT:
	break;

	/* epi_library */
    case EPI_M_LIBRARY:
	FREE_STRING(epi_library_name(epi_m_library(message)));
	break;

	/* epi_context */
    case EPI_M_CONTEXT:
	FREE_STRING(epi_context_name(epi_m_context(message)));
	break;

	/* epi_imports */
    case EPI_M_IMPORTS:
	FREE_STRING(epi_imports_name(epi_m_imports(message)));
	FREE_STRING(epi_context_name(epi_imports_context(
						    epi_m_imports(message))));
	break;

	/* epi_binding */
    case EPI_M_BINDING:
    case EPI_M_BINDING_INCOMPLETE:
	if( epi_m_binding(message).ident != EPI_O_NULL_BINDING )
	{
		FREE_STRING(epi_declaration_name(epi_binding_declaration(
						   epi_m_binding(message))));
		FREE_STRING(epi_context_name(epi_declaration_context(
			   epi_binding_declaration(epi_m_binding(message)))));
		FREE_STRING(epi_imports_name(epi_binding_imports(
						    epi_m_binding(message))));
		FREE_STRING(epi_context_name(epi_imports_context(
			       epi_binding_imports(epi_m_binding(message)))));
	}
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
	FREE_STRING(epi_declaration_name(epi_m_declaration(message)));
	FREE_STRING(epi_context_name(epi_declaration_context(
						epi_m_declaration(message))));
	break;

	/* node */
    case EPI_M_NODE:
    case EPI_M_SIMULATED_NODE:
    case EPI_M_NODE_CONTAINS:
    case EPI_M_NODE_CONTAINED_IN:
	break;

	/* type */

	/* do not free the EPI_TYPE in case the user has copied it (the
	   pointer) */

	/* It is unreasonable to expect the user to copy the whole thing */
    case EPI_M_TYPE:
	break;

	/* signal */
    case EPI_M_SIGNAL:
    case EPI_M_TESTPOINT_COND_VALUE:
	if( epi_m_signal(message).ident != EPI_O_NULL_SIGNAL )
		FREE_INTS((epi_m_signal(message)).value);
	break;

	/* testpoint */
    case EPI_M_TESTPOINT:
	break;

	/* event */
    case EPI_M_EVENT:
    case EPI_M_FIRST_EVENT:
    case EPI_M_INCOMPLETE_EVENT:
    case EPI_M_INCOMPLETE_FIRST_EVENT:
	FREE_INTS((epi_m_event(message)).signal.value);
	break;

	/* fn input */
    case EPI_M_FN_INPUT:
	break;

	/* ram value */
    case EPI_M_RAM_VALUE:
	FREE_INTS((epi_m_ram_value(message)).address.value);
	FREE_INTS((epi_m_ram_value(message)).data.value);
	break;

	/* unknown */
    default:
	break;
    }

    /* now free the message itself */
    FREE_MESSAGE(message);

    DEBUGEND(4, EPI_FREE_MESSAGE);
    return;
}


void epi_free_status(status)
EPI_STATUS status;
{
    EPI_MESSAGE message, first_message, next;

    DEBUGSTART_STATUS(3, EPI_FREE_STATUS, status);
    /* free each message associated with the circular list */
    first_message = search_mtable_using_number(status.first_message_number);
    if (first_message != EPI_NULL_MESSAGE)
    {
	message = first_message->next;
	for (; message != first_message; )
	{
	    next = message->next;
	    epi_free_message(message);
	    message = next;
	}
	epi_free_message(first_message);
    }
    DEBUGEND(4, EPI_FREE_STATUS);
    return;
}


void epi_free_type(t)
EPI_TYPE t;
{
    int i;

    DEBUGSTART(3, EPI_FREE_TYPE);
    if(t != EPI_NULL_TYPE )
    {
	switch (epi_type_class(t))
	{
	case EPI_C_TYPE_CHAR:
	    cfree(t->type.char_type.tag);
	    cfree(t->type.char_type.repr);
	    break;
	case EPI_C_TYPE_ENUM:
	    for (i = 0; i < t->type.enum_type.elems; i++)
	    {
		cfree((t->type.enum_type.tags)[i]);
		cfree((t->type.enum_type.subtypes)[i]);
	    }
	    cfree(t->type.enum_type.tags);
	    cfree(t->type.enum_type.subtypes);
	    break;
	case EPI_C_TYPE_FNTYPE:
	    epi_free_type(t->type.fn_type.input);
	    epi_free_type(t->type.fn_type.output);
	    break;
	case EPI_C_TYPE_INT:
	    cfree(t->type.int_type.tag);
	    break;
	case EPI_C_TYPE_NULL:
	    /* only the ident and class are used */
	    break;
	case EPI_C_TYPE_ROW:
	    epi_free_type(t->type.row_type.subtype);
	    break;
	case EPI_C_TYPE_STRING:
	    epi_free_type(t->type.string_type.subtype);
	    break;
	case EPI_C_TYPE_STRUCT:
	    for (i = 0; i < t->type.struct_type.elems; i++)
		epi_free_type((t->type.struct_type.subtypes)[i]);
	    cfree(t->type.struct_type.subtypes);
	    break;
	default:
	    t->class = EPI_C_TYPE_INVALID;
	    break;
	}
	cfree(t);
    }
    DEBUGEND(4, EPI_FREE_TYPE);
    return;
}


void epi_default_handler(message)
EPI_MESSAGE message;
{
    DEBUGSTART_MESS(3, EPI_DEFAULT_HANDLER, message);
    /* check epi is busy with a transaction (except for abort message) */
    if (!epi_busy && epi_message_type(message) != EPI_M_ABORTED)
	fprintf(stderr, "\nEPI error - epi_default_handler called when no EPI transaction is in progress.\n");
    else
	/* act according to message type */
	switch (epi_message_type(message))
	{
	case EPI_M_ABORTED:
	    fprintf(stderr, "\nEPI error - ELLA aborted, message: (%s)\n",
		    epi_m_aborted(message));
	    break;
	default:
	    {
		/* add message to circular list associated with status at */
		/* top of stack                                           */

		EPI_MESSAGE first_message;
		/* find first message in list */
		first_message = search_mtable_using_number(
		    CURRENT_STATUS.first_message_number);
		if (first_message == EPI_NULL_MESSAGE)
		{
		    /* no first message - start new message list */
		    message->previous = message;
		    message->next = message;
		    CURRENT_STATUS.first_message_number = 
			message->number;
		    new_mtable_entry(message);
		}
		else
		{
		    /* message list already exists, add new message as last */
		    message->next = first_message;
		    message->previous = first_message->previous;
		    (message->previous)->next = message;
		    first_message->previous = message;
		}
		break;
	    }
	}
    DEBUGEND(4, EPI_DEFAULT_HANDLER);
    return;
}


/* unpacking functions (not defined as macros) */
/* ------------------------------------------- */

EPI_HANDLER epi_get_handler(type)
EPI_MESSAGE_TYPE type;
{
    EPI_HANDLER handler;

    DEBUGSTART_MESSTYPE(3, EPI_GET_HANDLER, type);
    switch (type)
    {
    case EPI_M_ALL:
	handler = EPI_NULL_HANDLER;
	break;
    default:
	if (type < MIN_SINGLE_MTYPE || type > MAX_SINGLE_MTYPE)
	    handler = EPI_NULL_HANDLER;
	else
	    handler = MTYPE_HANDLER(type);
	break;
    }
    DEBUGEND(4, EPI_GET_HANDLER);
    return (handler);
}

EPI_INT epi_status_message_count(status)
EPI_STATUS status;
{
    EPI_MESSAGE first_message, ptr;
    int count = 0;

    DEBUGSTART_STATUS(3, EPI_STATUS_MESSAGE_COUNT, status);
    /* find address of first message from message table */
    first_message = search_mtable_using_number(status.first_message_number);
    if (first_message != EPI_NULL_MESSAGE)
    {
	/* first message found; count messages in circular list */
	for (count = 1, ptr = first_message->next;
	     ptr != first_message; count++)
	    ptr = ptr->next;
    }
    DEBUGEND_VAL(4, EPI_STATUS_MESSAGE_COUNT,count);
    return(count);
}

EPI_MESSAGE epi_status_message(status, index)
EPI_STATUS status;
EPI_INT index;
{
    int i;
    EPI_MESSAGE first_message, message = EPI_NULL_MESSAGE;

    DEBUGSTART_STATUS_INDEX(3, EPI_STATUS_MESSAGE, status, index);
    if (index > 0)
    {
	/* find address of first message from message table */
	first_message = search_mtable_using_number
	    (status.first_message_number);
	if (first_message != EPI_NULL_MESSAGE)
	{
	    /* first message found */
	    if (index == 1)
		message = first_message; 	/* return first message */
	    else
	    {
		/* search circular list for wanted message */
		EPI_MESSAGE ptr;
		for (i = 2, ptr = first_message->next; i < index && 
		     ptr != first_message; i++)
		    ptr = ptr->next;
		if (ptr != first_message)
		    message = ptr;
	    }
	}
    }
    DEBUGEND_MESS(4, EPI_STATUS_MESSAGE, message);
    return (message);
}


EPI_STRING epi_time_as_string(time)
EPI_TIME time;
{

#define size_of_string 22

    EPI_STRING s;
    long clock;
    struct tm *l, *gmtime();
    static char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
			     "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

    DEBUGSTART_TIME(3, EPI_TIME_AS_STRING, time);
    s = NEW_STRING(size_of_string);
    clock = (long)time + 410227200;  /* convert from ELLA Universal Time
                                     to UNIX time */
    l = gmtime(&clock);
    sprintf(s, "%2d %3s %4d  %02d:%02d:%02d",
		l->tm_mday, months[l->tm_mon], l->tm_year+1900,
    		l->tm_hour, l->tm_min, l->tm_sec);
    DEBUGEND_STRING(4, EPI_TIME_AS_STRING, s);
    return (s);
}

EPI_BOOL epi_same_event(event1, event2)
EPI_EVENT event1, event2;
{
    EPI_BOOL same;

    DEBUGSTART_EVENT_EVENT(3, EPI_SAME_EVENT, event1, event2);
    same = (event1.ident == EPI_O_EVENT &&
	    event2.ident == EPI_O_EVENT &&
            event1.time == event2.time &&
	    epi_same_testpoint(event1.testpoint,event2.testpoint) &&
	    epi_same_signal(event1.signal,event2.signal));
    DEBUGEND_BOOL(4, EPI_SAME_EVENT, same);
    return (same);
}

EPI_BOOL epi_same_ram_value(ram_value1, ram_value2)
EPI_RAM_VALUE ram_value1, ram_value2;
{
    EPI_BOOL same;

    DEBUGSTART_RVALUE_RVALUE(3, EPI_SAME_RAM_VALUE, ram_value1, ram_value2);
    same = (ram_value1.ident == EPI_O_RAM_VALUE &&
	    ram_value2.ident == EPI_O_RAM_VALUE &&
	    epi_same_signal(ram_value1.address,ram_value2.address) &&
	    epi_same_signal(ram_value1.data,ram_value2.data));
    DEBUGEND_BOOL(4, EPI_SAME_RAM_VALUE, same);
    return (same);
}

EPI_BOOL epi_same_type(type1, type2)
EPI_TYPE type1, type2;
{
    EPI_BOOL same = FALSE;
    DEBUGSTART_TYPE_TYPE(3, EPI_SAME_TYPE, type1, type2);
    if( type1 == EPI_NULL_TYPE || type2 == EPI_NULL_TYPE )
	same = (type1 == type2);
    else if( type1 == type2 && type1->ident == EPI_O_TYPE )
	same = TRUE;
    else if( type1->ident == EPI_O_TYPE &&
	    type2->ident == EPI_O_TYPE &&
	    type1->class == type2->class)
	switch(type1->class) 
	{
	  case EPI_C_TYPE_INT:
	    same = (type1->type.int_type.lwb == type2->type.int_type.lwb &&
		    type1->type.int_type.upb == type2->type.int_type.upb &&
		    !strcmp(type1->type.int_type.tag,
			    type2->type.int_type.tag));
	    break;
	  case EPI_C_TYPE_CHAR:
	    same = (!strcmp(type1->type.char_type.tag,
			    type2->type.char_type.tag) &&
		    !strcmp(type1->type.char_type.repr,
			    type2->type.char_type.repr));
	    break;
	  case EPI_C_TYPE_STRING:
	    same = (type1->type.string_type.length == 
		    type2->type.string_type.length &&
		    epi_same_type(type1->type.string_type.subtype,
				  type2->type.string_type.subtype));
	    break;
	  case EPI_C_TYPE_ROW:
	    same = (type1->type.row_type.elems == 
		    type2->type.row_type.elems &&
		    epi_same_type(type1->type.row_type.subtype,
				  type2->type.row_type.subtype));
	    break;
	  case EPI_C_TYPE_STRUCT:
	    if (type1->type.struct_type.elems == 
		type2->type.struct_type.elems)
	    {
		int i;
		EPI_TYPE *t1,*t2;
		same = TRUE;
		for (i = 0, t1 = type1->type.struct_type.subtypes,
		        t2 = type2->type.struct_type.subtypes; 
		     i < type1->type.struct_type.elems &&
		        (same = epi_same_type(*t1,*t2)); 
		     i++, t1++, t2++);
	    }
	    break;
	  case EPI_C_TYPE_FNTYPE:
	    same = (epi_same_type(type1->type.fn_type.input,
				  type2->type.fn_type.input) &&
		    epi_same_type(type1->type.fn_type.output,
				  type2->type.fn_type.output));
	    break;
	  case EPI_C_TYPE_ENUM:
	    if (type1->type.enum_type.elems == 
		type2->type.enum_type.elems)
	    {
		int i;
		EPI_TYPE *t1,*t2;
		EPI_STRING *s1,*s2;
		same = TRUE;
		for (i = 0,
			t1 = type1->type.enum_type.subtypes,
		        t2 = type2->type.enum_type.subtypes,
		        s1 = type1->type.enum_type.tags,
		        s2 = type2->type.enum_type.tags; 
		     i < type1->type.struct_type.elems &&
		        (same = (epi_same_type(*t1,*t2) && !strcmp(*s1,*s2))); 
		     i++, t1++, t2++, s1++, s2++);
	    }
	    break;
	  case EPI_C_TYPE_INVALID:
	  case EPI_C_TYPE_NULL:
	    same = TRUE;
	    break;
	  default:
	    break;
	}
    DEBUGEND_BOOL(4, EPI_SAME_TYPE, same);
    return (same);
}

/* end */
