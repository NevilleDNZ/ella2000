/* $Id: epi_internal.h,v 34.2 1995/03/29 13:04:22 ella Exp $ */


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
$OldLog:	epi_internal.h,v $
 * Revision 2.1.1.1  91/11/06  10:25:00  aap
 * Use of alloca removed (not available on VMS).
 * 
 * Revision 2.1.1.1  91/11/05  16:07:13  aap
 * Use of alloca removed (not available on VMS).
 * 
 * Revision 2.1  91/02/25  12:10:06  miker
 * Candidate release 5
 * 
 * Revision 1.2  91/02/22  17:35:24  par
 * Version 1.1.1.2 to top
 * 
 * Revision 1.1.1.2  90/10/08  16:21:23  aap
 * Debug macro removed since VMS C compiler objects to it (line too long).
 * 
 * Revision 1.1.1.1  90/10/08  16:06:01  aap
 * Allows compilation on VMS.
 * 
 * Revision 1.1  90/04/17  15:17:38  aap
 * Initial revision
 * 
*/
/* DEC/CMS REPLACEMENT HISTORY, Element EPI_INTERNAL.H */
/* *8    10-AUG-1989 14:54:12 ELLADEV "Definitive release 4.0, first provisional release 4.1. BGH" */
/* *7    17-MAY-1989 17:19:44 ELLADEV "Added inclusion of alloca.h for sun 4. BGH" */
/* *6    18-APR-1989 16:29:49 ELLADEV "Updated provisional with fix for code compiled without -DDEBUG. BGH" */
/* *5    21-JAN-1989 11:41:33 ELLADEV "Provisional for Release 4.0 BGH" */
/* *4     6-DEC-1988 17:53:47 ELLADEV "updated draft version" */
/* *3    30-NOV-1988 15:18:20 ELLADEV "updated draft version for Release 4.0" */
/* *2    16-NOV-1988 15:40:45 ELLADEV "second draft" */
/* *1    10-NOV-1988 11:57:36 ELLADEV "New for Release 4, stored in CMS lib [elladev.cms.epi]" */
/* DEC/CMS REPLACEMENT HISTORY, Element EPI_INTERNAL.H */
#ifndef EPI_INTERNAL
#define EPI_INTERNAL
/*
*******************************************************************************
				Praxis Systems plc

Module        : EPI internal header file

File	      : epi_internal.h

Description   : This header file provides definitions common to EPI modules.
		It contains private information and is not meant for the
		EPI Library user.


Changes History

   02.06.88	New module for EPI Version 0. BGH
   12.08.88 	EPI Version 1. BGH
   23.08.88	EPI Version 2. AAP
   10.10.88	Implement actions from Code Review n035.7.47. BGH
   15.10.88	Implement actions from Code Review n035.7.48. BGH
   05.12.88	Updated group message type externs and added macro 
                MTYPE_HANDLER. BGH

*******************************************************************************
*/
#include "epi.h"
#include "epi_config.h"

/* RcsId[]	= "$Id: epi_internal.h,v 34.2 1995/03/29 13:04:22 ella Exp $" */

/* private unpacking macros */
/* ------------------------ */

#define epi_declaration_class_to_string(d)\
				(epi_constant_strings[(d)])

/* procedure information look-up table */
/* ----------------------------------- */

/* table entry */
typedef struct
{
    EPI_STATUS_CODE(*fn) ();
    char *name;
    int lib_debug_level;
    int sup_debug_level;
} PROCINFO;

/* access macros */
extern PROCINFO procinfo[];

#define FUNCTION_POINTER(i) 	procinfo[i].fn
#define FUNCTION_NAME(i) 	procinfo[i].name
#define LIBRARY_DEBUG_LEVEL(i)	procinfo[i].lib_debug_level
#define SUPPORT_DEBUG_LEVEL(i)	procinfo[i].sup_debug_level

/* table indices */

/* The declarations between the lines containing 'update-procinfo start'
   and 'update-procinfo end' are generated automatically by 'update-procinfo'.
   THEY MUST NOT BE EDITED MANUALLY!!
   See comment on 'procinfo' in epi.c.
*/

/* update-procinfo start */
    /* library & support active/passive/pre-emptive functions */
#define EPI_START 0
#define EPI_FINISH 1
#define EPI_RESTORE_SIMULATION 2
#define EPI_INTERRUPT 3

#define EPI_NOMINATE_HANDLER 4
#define EPI_NOTIFY_CPU_USAGE 5
#define EPI_DONT_NOTIFY_CPU_USAGE 6
#define EPI_START_DIAGNOSTICS 7
#define EPI_STOP_DIAGNOSTICS 8
#define EPI_GET_HANDLER 9
#define EPI_STATUS_MESSAGE 10
#define EPI_STATUS_MESSAGE_COUNT 11

#define EPI_CLEAR_LIBRARY 12
#define EPI_INCREASE_LIBRARY 13
#define EPI_MAKE_CONTEXT 14
#define EPI_REGRESS_LIBRARY 15
#define EPI_SAVE_LIBRARY 16
#define EPI_GET_LIBRARY_DETAILS 17
#define EPI_SAME_LIBRARY 18

#define EPI_COPY_CONTEXT 19
#define EPI_ERASE_CONTEXT 20
#define EPI_CLEAR_CONTEXT 21
#define EPI_CONVERT_TO_SIMPLE 22
#define EPI_CONVERT_TO_COMPOUND 23
#define EPI_MAKE_IMPORTS 24
#define EPI_GET_CONTEXT_DETAILS 25
#define EPI_SAME_CONTEXT 26

#define EPI_COMPILE 27
#define EPI_COPY_IMPORTS 28
#define EPI_ERASE_IMPORTS 29
#define EPI_CLEAR_IMPORTS 30
#define EPI_DUMP_IMPORTS 31
#define EPI_SIMULATE_IMPORTS 32
#define EPI_GET_IMPORTS_DETAILS 33
#define EPI_GET_CLOSURE_DETAILS 34
#define EPI_SAME_IMPORTS 35

#define EPI_FIXUP_BINDING 36
#define EPI_CLEAR_BINDING 37
#define EPI_DUMP_BINDING 38
#define EPI_SIMULATE_BINDING 39
#define EPI_GET_BINDING_DETAILS 40
#define EPI_SAME_BINDING 41

#define EPI_ERASE_DECLARATION 42
#define EPI_CLEAR_EXPORT 43
#define EPI_EXPORT 44
#define EPI_GET_DECLARATION_DETAILS 45
#define EPI_SAME_DECLARATION 46

#define ETI_COMMAND 47
#define ETI_CLEARINPUTS 48
#define ETI_INPUT 49
#define ETI_REMOVEFILE 50
#define ETI_SHOWINPUT 51
#define ETI_DONTSHOWINPUT 52
#define ETI_OFFLINE 53
#define ETI_LOG 54
#define ETI_DONTLOG 55
#define ETI_OUTPUT 56
#define ETI_DONTOUTPUT 57
#define ETI_SHOWOUTPUT 58
#define ETI_DONTSHOWOUTPUT 59
#define ETI_OBEY 60
#define EPI_GET_ETI_DETAILS 61

#define EPI_SET_INPUT 62
#define EPI_FINISH_SIMULATION 63
#define EPI_CAPTURE_SIMULATION 64
#define EPI_RESTART_SIMULATION 65
#define EPI_REPLAY_SIMULATION 66
#define EPI_GET_SIMULATION_DETAILS 67

#define EPI_SAME_TYPE 68

#define EPI_CREATE_TESTPOINT 69
#define EPI_KEEP 70
#define EPI_DONT_KEEP 71
#define EPI_SET_RAM 72
#define EPI_SIMULATE_FUNCTION 73
#define EPI_GET_NODE_DETAILS 74
#define EPI_GET_SIGNAL 75
#define EPI_GET_RAM_VALUES 76
#define EPI_PARSE_NODENAME 77
#define EPI_SAME_NODE 78

#define EPI_DECODE_SIGNAL 79
#define EPI_ENCODE_SIGNAL 80
#define EPI_SAME_SIGNAL 81

#define EPI_ERASE_TESTPOINT 82
#define EPI_GET_TESTPOINT_DETAILS 83
#define EPI_SAME_TESTPOINT 84

#define EPI_SAME_EVENT 85

#define EPI_SAME_RAM_VALUE 86

#define EPI_FREE_MESSAGE 87
#define EPI_FREE_STATUS 88
#define EPI_FREE_TYPE 89
#define EPI_TIME_AS_STRING 90
#define EPI_DEFAULT_HANDLER 91

    /* library and support private functions */
#define EPI_SEND_MESSAGE 92
#define EPI_INITIALISE 93

    /* support only private functions */
#define EPI_DIAGNOSTICS 94
#define PUSH_NOTIFY 95
#define POP_NOTIFY 96
#define EPI_NOTIFY 97
#define EPI_FAULT 98
#define CHECK_NOTIFY 99
#define TERMINATE_ELLA 100
#define SIM_FUNCTION 101
#define DATE_TIME_TO_INT 102
#define CPU_USAGE 103
#define PROCESS_ETI_COMMAND 104
#define EPI_SET_MODE 105
#define FIND_ELLA_CONTEXT 106
#define FIND_ELLA_DECL 107
#define GET_KEPTS 108
#define DUMMY_PUT 109

    /* library only private functions */
#define VALID_ID 110
#define START_DIAGNOSTICS 111
#define SEARCH_MTABLE_USING_NUMBER 112
#define SEARCH_MTABLE_USING_ADDRESS 113
#define NEW_MTABLE_ENTRY 114
#define CLEAR_MTABLE_ENTRY 115
#define MODIFY_MTABLE_ENTRY 116

    /* end */
#define DEFAULT_EPI_FUNCTION 117
/* update-procinfo end */

#define MAX_PROC_INDEX DEFAULT_EPI_FUNCTION

/* message table */
/* ------------- */

/* The message table is currently used to record the address of the first   */
/* message in the message list associated with each EPI status. If the      */
/* list has not been created (by the default handler) or if the last        */
/* message has been freed then no entry exists in the table for that status */

typedef struct
{
    EPI_UNSIGNED number;	/* unique number of message */
    EPI_MESSAGE address;	/* address of message */
} MESSAGE_TABLE_ENTRY;

extern MESSAGE_TABLE_ENTRY message_table[];
extern unsigned message_table_free;	/* count of free entries */

#define MESSAGE_NUMBER(i)	(message_table[i].number)
#define MESSAGE_ADDRESS(i)	(message_table[i].address)
#define MESSAGE_TABLE_SIZE 	EPI_MAX_MESSAGE_LISTS
#define MESSAGE_TABLE_FULL 	(message_table_free == 0)

/* message table access routines */
extern EPI_MESSAGE search_mtable_using_number();
extern EPI_UNSIGNED search_mtable_using_address();
extern void new_mtable_entry();
extern void clear_mtable_entry();
extern void modify_mtable_entry();

/* function calls and status handling */
/* ---------------------------------- */

/* Note: should correspond with definition of status codes in epi.h */
#define MIN_STATUS_CODE EPI_S_OK
#define MAX_STATUS_CODE EPI_S_WRONG_MODE

/* default function to trap uninitialised function pointers */
extern EPI_STATUS_CODE default_epi_function();

/* parameter validation */
extern EPI_BOOL valid_id();	/* checks that name is valid ELLA id */

/* flags control */
extern EPI_BOOL epi_started;	/* indicates epi_start has been called */
extern EPI_BOOL epi_active;	/* indicates active function is busy */
extern int epi_busy;		/* count of functions (active & passive) */

#ifdef DEBUG
#define CHECK_BUSY		; if (epi_busy < 0) fprintf(stderr, "\nEPI internal error - epi_busy count is corrupt\n")
#else
#define CHECK_BUSY
#endif
#define ACTIVE_START		epi_busy++;  epi_active = TRUE
#define PASSIVE_START		epi_busy++
#define PRE_EMPTIVE_START	epi_busy++
#define ACTIVE_STOP		epi_busy--;  epi_active = FALSE CHECK_BUSY
#define PASSIVE_STOP		epi_busy-- CHECK_BUSY
#define PRE_EMPTIVE_STOP	epi_busy-- CHECK_BUSY

/* status initialisation */
#define INIT_STATUS(s)		(s).status_code = EPI_S_OK; \
    				 (s).first_message_number = 0

/* epi status stack access macros */
extern EPI_STATUS *(status_stack[]);
extern int status_stack_index;

#define STATUS_COUNT	(status_stack_index + 1)
#define CURRENT_STATUS	(*(status_stack[status_stack_index]))
#ifdef DEBUG
#define CHECK_INDEX 	; if (STATUS_COUNT < 0) fprintf(stderr, "\nEPI internal error - status_stack_index is corrupt.\n")
#else
#define CHECK_INDEX
#endif
#define CALL_SUPPORT_FUNCTION(s, f, p) \
		if (STATUS_COUNT < EPI_MAX_RECURSION && \
		    ! MESSAGE_TABLE_FULL) \
		{ \
			status_stack[++status_stack_index]=(&s); \
			epi_status_code(s) = (FUNCTION_POINTER(f))p; \
			status_stack_index-- CHECK_INDEX; \
		} \
		else \
			epi_status_code(s) = EPI_S_RECURSION

/* message handling */
/* ---------------- */

/* group message types */
extern EPI_MESSAGE_TYPE epi_m_lib_all[];
extern EPI_MESSAGE_TYPE epi_m_context_all[];
extern EPI_MESSAGE_TYPE epi_m_imports_all[];
extern EPI_MESSAGE_TYPE epi_m_closure_all[];
extern EPI_MESSAGE_TYPE epi_m_binding_all[];
extern EPI_MESSAGE_TYPE epi_m_decl_all[];
extern EPI_MESSAGE_TYPE eti_m_all[];
extern EPI_MESSAGE_TYPE epi_m_sim_all[];
extern EPI_MESSAGE_TYPE epi_m_node_all[];
extern EPI_MESSAGE_TYPE epi_m_testpoint_all[];

/* Note: should correspond with definition of message types in epi.h */
#define MIN_MESSAGE_TYPE	EPI_M_CPU
#define MAX_MESSAGE_TYPE 	EPI_M_TESTPOINT_ALL
#define MIN_SINGLE_MTYPE	EPI_M_CPU
#define MAX_SINGLE_MTYPE 	EPI_M_TESTPOINT_COND_VALUE
#define MIN_GROUP_MTYPE 	EPI_M_ALL
#define MAX_GROUP_MTYPE 	EPI_M_TESTPOINT_ALL

/* message handler table */
extern EPI_HANDLER epi_message_handlers[];
#define MTYPE_HANDLER(mtype) (epi_message_handlers[mtype - MIN_SINGLE_MTYPE])

/* object idents */
#define EPI_O_LIBRARY			1010
#define EPI_O_CONTEXT			2020
#define EPI_O_IMPORTS			3030
#define EPI_O_BINDING			4040
#define EPI_O_NULL_BINDING		4444
#define EPI_O_DECLARATION		5050
#define EPI_O_NODE		        6060
#define EPI_O_NULL_NODE			6666
#define EPI_O_EVENT			7070
#define	EPI_O_RAM_VALUE			8080
#define EPI_O_FN_INPUT			9090
#define EPI_O_SIGNAL			100100
#define EPI_O_NULL_SIGNAL		101101
#define EPI_O_TESTPOINT			110110
#define EPI_O_TYPE			120120
#define EPI_O_NULL_TYPE			121121

/* access macro for message list associated with epi status */
#define MLIST(s)   (s.mlist_head)
#define NULL_MLIST ((EPI_MLIST_ENTRY*)NULL)

/* heap allocation and garbage collection */
/* -------------------------------------- */

/*
** calloc is described in malloc(3)
** It has the desirable feature of clearing the allocated space
** similar to the garbage collector used with ELLA.
** It returns NULL (0) when we have run out of free space.
** +++ This should be tested for, but we don't have a temporary variable to use.
*/

extern char *calloc();

/* static object allocation and deallocation         */

extern EPI_MESSAGE new_message();
#define NEW_TYPE		(EPI_TYPE)calloc(1,sizeof(TYPE))
#define NEW_STRING(size)	(EPI_STRING)calloc(1,size)
#define NEW_VEC(type,nelems)	(type *)calloc(nelems,sizeof(type))
#define NEW_MLIST_ENTRY		(EPI_MLIST_ENTRY*) \
				calloc(1,sizeof(EPI_MLIST_ENTRY))
#define NEW_MESSAGE_TYPE_ARRAY(nelems) (EPI_MESSAGE_TYPE*) \
				calloc((nelems),sizeof(EPI_MESSAGE_TYPE))

#define FREE_MESSAGE(message)	cfree(message)
#define FREE_STRING(string)	cfree(string)
#define FREE_INTS(ints)		cfree(ints)
#define FREE_MLIST_ENTRY(entry)	cfree(entry)
#define FREE_MESSAGE_TYPE_ARRAY(array)	cfree(array)

/* debug/diagnostics */
/* ----------------- */

extern void epi_diagnostics();
extern char d_buff[];
extern EPI_BOOL epi_diag_on;

#ifdef DEBUG
extern void epi_debug();

#define EPI_DEBUG(a,b,c)	epi_debug(a,b,c,TRUE); \
				if (a <= 5 && epi_diag_on) \
				epi_diagnostics(b,c,TRUE)
#else
#define EPI_DEBUG(a,b,c)	if (a <= 5 && epi_diag_on) \
				epi_diagnostics(b,c,TRUE)
#endif

/* Macros to construct debug statements */

#define DC_STATUS(p1) \
		epi_status_code_as_string(p1)

#define DC_STATUS_CODE(p1) \
		 epi_constant_strings[p1]

#define	DC_BOOL(p1) \
		(p1 == TRUE?"TRUE":"FALSE")

#define DC_STRING(p1) \
		(p1 != NULL?p1:"EPI_NULL_STRING")

#define DC_MESSTYPE(p1) \
		 (p1 >= MIN_MESSAGE_TYPE && p1 <= MAX_MESSAGE_TYPE?epi_constant_strings[p1]:"bad message type")

#define DC_MESS(p1) \
		(p1 != EPI_NULL_MESSAGE?p1->number:0), \
    		(p1 != EPI_NULL_MESSAGE?DC_MESSTYPE(p1->msgtype):"EPI_NULL_MESSAGE")

#define DC_LIB(p1) \
		epi_library_name(p1)

#define DC_CON(p1) \
		epi_context_name(p1)

#define DC_IMPORTS(p1) \
		epi_imports_name(p1), \
		DC_CON(p1.context)

#define DC_DEC_CLASS(p1) \
		epi_declaration_class_to_string(p1)

#define DC_DEC(p1) \
		epi_declaration_name(p1), \
		epi_declaration_version(p1), \
		DC_DEC_CLASS(epi_declaration_class(p1)), \
		DC_CON(p1.context)

#define DC_BIND(p1) \
		DC_DEC(p1.declaration), \
		DC_IMPORTS(p1.imports)

#define DC_NODE(p1) \
    		p1.fn, p1.instance, p1.rnodelist, p1.upb_rnodelist

#define DC_SIGNAL(p1) \
    		p1.value, p1.upb_value

#define DC_TYPE(p1) \
		(p1 != EPI_NULL_TYPE?epi_type_class_as_string(p1):"EPI_NULL_TYPE")

#define DC_TPOINT(p1) \
    		p1.handle

#define DC_EVENT(p1) \
		p1.time, p1.testpoint, p1.signal

#define DC_RVALUE(p1) \
    		p1.address, p1.data

#define DC_FN_INPUT(p1) \
		p1.seq, p1.node

#define DC_TIME(p1) \
    		p1

/* function start */

#define DEBUGSTART(p1,p2) \
		EPI_DEBUG(p1, p2, "entered")

#define DEBUGSTART_VAL(p1,p2,p3) \
		EPI_DEBUG(p1, p2, sprintf(d_buff, \
		"entered with value: (%d)", \
		p3))

#define DEBUGSTART_BOOL(p1,p2,p3) \
		EPI_DEBUG(p1, p2, sprintf(d_buff, \
		"entered with bool = %s", \
		DC_BOOL(p3)))

#define DEBUGSTART_VAL_VAL(p1,p2,p3,p4) \
		EPI_DEBUG(p1, p2, sprintf(d_buff, \
		"entered with first value: (%d) and second value: (%d)", \
		p3, p4))

#define DEBUGSTART_VAL_MESS(p1,p2,p3,p4) \
		EPI_DEBUG(p1, p2, sprintf(d_buff, \
		"entered with value: (%d), message: (number = %d, type = %s)", \
		p3, DC_MESS(p4)))


#define DEBUGSTART_DIAG(p1,p2) \
		EPI_DEBUG(p1, p2, "entered with diagnostic information")

#define DEBUGSTART_VARG(p1,p2) \
		EPI_DEBUG(p1, p2, "entered with variable arguments list")

#define DEBUGSTART_LIB(p1,p2,p3) \
		EPI_DEBUG(p1, p2, sprintf(d_buff, \
		"entered with library: (name = %s)", \
		DC_LIB(p3)))

#define DEBUGSTART_LIB_LIB(p1,p2,p3,p4) \
		EPI_DEBUG(p1, p2, sprintf(d_buff, \
		"entered with libraries: (name = %s) and (name = %s)", \
		DC_LIB(p3), DC_LIB(p4)))

#define DEBUGSTART_LIB_INC(p1,p2,p3,p4) \
		EPI_DEBUG(p1, p2, sprintf(d_buff, \
		"entered with library: (name = %s) and increment: (%d)", \
		DC_LIB(p3), p4))

#define DEBUGSTART_LIB_NAME(p1,p2,p3,p4) \
		EPI_DEBUG(p1, p2, sprintf(d_buff, \
		"entered with library: (name = %s) and name: (%s)", \
		DC_LIB(p3), DC_STRING(p4)))

#define DEBUGSTART_MESS(p1,p2,p3) \
		EPI_DEBUG(p1, p2, sprintf(d_buff, \
		"entered with message: (number = %d, type = %s)", \
		DC_MESS(p3)))

#define DEBUGSTART_MESSTYPE(p1,p2,p3) \
		EPI_DEBUG(p1, p2, sprintf(d_buff, \
		"entered with message type: (%s)", \
		DC_MESSTYPE(p3)))

#define	DEBUGSTART_LIBNAM_CFLAG(p1,p2,p3,p4) \
		EPI_DEBUG(p1, p2, sprintf(d_buff, \
		"entered with library name: (%s), create flag: (%s)", \
		DC_STRING(p3), DC_BOOL(p4)))

#define DEBUGSTART_FILENAME(p1,p2,p3) \
		EPI_DEBUG(p1, p2, sprintf(d_buff, \
		"entered with filename: (%s)", \
		DC_STRING(p3)))

#define DEBUGSTART_COMMAND(p1,p2,p3) \
		EPI_DEBUG(p1, p2, sprintf(d_buff, \
		"entered with command: (%s)", \
		DC_STRING(p3)))

#define DEBUGSTART_STATUS_INDEX(p1,p2,p3,p4) \
		EPI_DEBUG(p1, p2, sprintf(d_buff, \
		"entered with status: (status code = %s) and index: (%d)", \
		DC_STATUS(p3), p4))

#define DEBUGSTART_CON(p1,p2,p3) \
		EPI_DEBUG(p1, p2, sprintf(d_buff, \
		"entered with context: (name = %s)", \
		DC_CON(p3)))

#define DEBUGSTART_CON_CON(p1,p2,p3, p4) \
		EPI_DEBUG(p1, p2, sprintf(d_buff, \
		"entered with contexts: (name = %s) and (name = %s)", \
		DC_CON(p3), DC_CON(p4)))

#define DEBUGSTART_CON_NAME(p1,p2,p3,p4) \
		EPI_DEBUG(p1, p2, sprintf(d_buff, \
		"entered with context: (name = %s) and name: (%s)", \
		DC_CON(p3), DC_STRING(p4)))

#define DEBUGSTART_IMPORTS(p1,p2,p3) \
		EPI_DEBUG(p1, p2, sprintf(d_buff, \
		"entered with imports: (name = %s, context: (name = %s))", \
		DC_IMPORTS(p3)))

#define DEBUGSTART_IMPORTS_IMPORTS(p1,p2,p3,p4) \
		EPI_DEBUG(p1, p2, sprintf(d_buff, \
		"entered with imports: (name = %s, context: (name = %s)) and (name = %s, context: (name = %s))", \
		DC_IMPORTS(p3), DC_IMPORTS(p4)))

#define	DEBUGSTART_IMPORTS_NAME(p1,p2,p3,p4) \
		EPI_DEBUG(p1, p2, sprintf(d_buff, \
		"entered with imports: (name = %s, context: (name = %s)) and name: (%s)", \
		DC_IMPORTS(p3),	DC_STRING(p4)))

#define DEBUGSTART_IMPORTS_FILENAME(p1,p2,p3,p4) \
		EPI_DEBUG(p1, p2, sprintf(d_buff, \
		"entered with imports: (name = %s, context:(name = %s)) and filename: (%s)", \
		DC_IMPORTS(p3), DC_STRING(p4)))

#define DEBUGSTART_IMPORTS_FILENAME_3BOOL(p1,p2,p3,p4,p5,p6,p7) \
		EPI_DEBUG(p1, p2, sprintf(d_buff, \
		"entered with imports: (name = %s, context:(name = %s)), filename: (%s) and bools: (%s,%s,%s)", \
		DC_IMPORTS(p3), DC_STRING(p4), DC_BOOL(p5), \
	        DC_BOOL(p6), DC_BOOL(p7)))

#define DEBUGSTART_DEC(p1,p2,p3) \
		EPI_DEBUG(p1, p2, sprintf(d_buff, \
		"entered with declaration: (name = %s, version = %d, class = %s, context: (name = %s))", \
		DC_DEC(p3)))

#define DEBUGSTART_DEC_DEC(p1,p2,p3,p4) \
		EPI_DEBUG(p1, p2, sprintf(d_buff, \
		"entered with declarations: (name = %s, version = %d, class = %s, context: (name = %s)) and (name = %s, version = %d, class = %s, context: (name = %s))", \
 	DC_DEC(p3), DC_DEC(p4)))

#define DEBUGSTART_BIND(p1,p2,p3) \
		EPI_DEBUG(p1, p2, sprintf(d_buff, \
		"entered with binding: (declaration: (name = %s, version = %d, class = %s, context: (name = %s)), imports: (name = %s, context: (name = %s)))", \
		DC_BIND(p3)))

#define DEBUGSTART_BIND_FILENAME_3BOOL(p1,p2,p3,p4,p5,p6,p7) \
		EPI_DEBUG(p1, p2, sprintf(d_buff, \
		"entered with binding: (declaration: (name = %s, version = %d, class = %s, context: (name = %s)), imports: (name = %s, context: (name = %s))), filename: (%s) and bools: (%s,%s,%s)", \
		DC_BIND(p3), DC_STRING(p4), DC_BOOL(p5), DC_BOOL(p6), \
                DC_BOOL(p7)))

/*
  The following macro is too long for the VMS C compiler.
  It cannot be #ifdefed out (compiler still rejects it), so I have deleted it.
*/

#define DEBUGSTART_BIND_BIND(p1,p2,p3,p4)

#define DEBUGSTART_NAME(p1,p2,p3) \
		EPI_DEBUG(p1, p2, sprintf(d_buff, "entered with name: (%s)", \
		DC_STRING(p3)))

#define DEBUGSTART_STATUS(p1,p2,p3) \
		EPI_DEBUG(p1, p2, sprintf(d_buff, \
		"entered with status: (status code = %s)", \
		DC_STATUS(p3)))

#define DEBUGSTART_NODE(p1,p2,p3) \
		EPI_DEBUG(p1, p2, sprintf(d_buff, \
		"entered with node: (fn = %d, instance = %d, rnodelist = %d, upb_rnodelist = %d)", \
		DC_NODE(p3)))

#define DEBUGSTART_NODE_NODE(p1,p2,p3,p4) \
		EPI_DEBUG(p1, p2, sprintf(d_buff, \
		"entered with node1: (fn = %d, instance = %d, rnodelist = %d, upb_rnodelist = %d) and node2: (fn = %d, instance = %d, rnodelist = %d, upb_rnodelist = %d)", \
		DC_NODE(p3), DC_NODE(p4)))

#define DEBUGSTART_NODE_SIGNAL(p1,p2,p3,p4) \
		EPI_DEBUG(p1, p2, sprintf(d_buff, \
		"entered with node: (fn = %d, instance = %d, rnodelist = %d, upb_rnodelist = %d) and signal: (value = %d, upb_value = %d)", \
		DC_NODE(p3), DC_SIGNAL(p4)))

#define DEBUGSTART_NODE_SIGNAL_SIGNAL(p1,p2,p3,p4,p5) \
		EPI_DEBUG(p1, p2, sprintf(d_buff, \
		"entered with node: (fn = %d, instance = %d, rnodelist = %d, upb_rnodelist = %d), first signal: (value = %d, upb_value = %d) and second signal: (value = %d, upb_value = %d)", \
		DC_NODE(p3), DC_SIGNAL(p4), DC_SIGNAL(p5)))

#define DEBUGSTART_NODE_VAL_VAL_SIGNAL(p1,p2,p3,p4,p5,p6) \
		EPI_DEBUG(p1, p2, sprintf(d_buff, \
		"entered with node: (fn = %d, instance = %d, rnodelist = %d, upb_rnodelist = %d), first value: (%d), second value: (%d) and signal: (value = %d, upb_value = %d)", \
		DC_NODE(p3), p4, p5, DC_SIGNAL(p6)))

#define DEBUGSTART_NODE_SIGNAL_SIGNAL_SIGADD_UPB(p1,p2,p3,p4,p5,p6,p7) \
		EPI_DEBUG(p1, p2, sprintf(d_buff, \
		"entered with node: (fn = %d, instance = %d, rnodelist = %d, upb_rnodelist = %d), first signal: (value = %d, upb_value = %d), second signal: (value = %d, upb_value = %d), signal address: (%d) and upb_values: (%d)", \
		DC_NODE(p3), DC_SIGNAL(p4), DC_SIGNAL(p5), p6, p7))

#define DEBUGSTART_TPOINT(p1,p2,p3) \
		EPI_DEBUG(p1, p2, sprintf(d_buff, \
		"entered with testpoint: (handle = %d)", \
		DC_TPOINT(p3)))

#define DEBUGSTART_TPOINT_TPOINT(p1,p2,p3,p4) \
		EPI_DEBUG(p1, p2, sprintf(d_buff, \
		"entered with testpoint1: (handle = %d) and testpoint2: (handle = %d)", \
		DC_TPOINT(p3),DC_TPOINT(p4)))

#define DEBUGSTART_SIGNAL_TYPE(p1,p2,p3,p4) \
		EPI_DEBUG(p1, p2, sprintf(d_buff, \
		"entered with signal: (value = %d, upb_value = %d) and type: (class = %s)", \
		DC_SIGNAL(p3), DC_TYPE(p4)))

#define DEBUGSTART_SIGNAL_SIGNAL(p1,p2,p3,p4) \
		EPI_DEBUG(p1, p2, sprintf(d_buff, \
		"entered with signal1: (value = %d, upb_value = %d) and signal2: (value = %d, upb_value = %d)", \
		DC_SIGNAL(p3), DC_SIGNAL(p4)))

#define DEBUGSTART_SIGREP_TYPE(p1,p2,p3,p4) \
		EPI_DEBUG(p1, p2, sprintf(d_buff, \
		"entered with signal representation: (%s) and type: (class = %s)", \
		DC_STRING(p3), DC_TYPE(p4)))

#define DEBUGSTART_TYPE_TYPE(p1,p2,p3,p4) \
		EPI_DEBUG(p1, p2, sprintf(d_buff, \
		"entered with type1: (class = %s) and type2: (class = %s)", \
		DC_TYPE(p3),DC_TYPE(p4)))

#define DEBUGSTART_TIME(p1,p2,p3) \
		EPI_DEBUG(p1, p2, sprintf(d_buff, \
		"entered with time: (%d)", \
		DC_TIME(p3)))

#define DEBUGSTART_RVALUE_RVALUE(p1,p2,p3,p4) \
		EPI_DEBUG(p1, p2, sprintf(d_buff, \
		"entered with ram_value1: (address = %d, data = %d) and ram_value2: (address = %d, data = %d)", \
		DC_RVALUE(p3),DC_RVALUE(p4)))

#define DEBUGSTART_EVENT_EVENT(p1,p2,p3,p4) \
		EPI_DEBUG(p1, p2, sprintf(d_buff, \
		"entered with event1: (time = %d, testpoint = %d, signal = %d) and event2: (time = %d, testpoint = %d, signal = %d)", \
		DC_EVENT(p3),DC_EVENT(p4)))


/* function end */

#define DEBUGEND(p1,p2) \
		EPI_DEBUG(p1, p2, sprintf(d_buff, "exiting"))

#define DEBUGEND_STATUS(p1,p2,p3) \
		EPI_DEBUG(p1, p2, sprintf(d_buff, \
		"exiting with status: (status code = %s)", \
		DC_STATUS(p3)))

#define DEBUGEND_STATUS_CODE(p1,p2,p3) \
		EPI_DEBUG(p1, p2, sprintf(d_buff, \
		"exiting with status code: (%s)", \
		DC_STATUS_CODE(p3)))

#define DEBUGEND_MESS(p1,p2,p3) \
		EPI_DEBUG(p1, p2, sprintf(d_buff, \
		"exiting with message: (number = %d, type = %s)", \
		DC_MESS(p3)))

#define DEBUGEND_BOOL(p1,p2,p3) \
		EPI_DEBUG(p1, p2, sprintf(d_buff, \
		"exiting with bool: (%s)", \
		DC_BOOL(p3)))

#define DEBUGEND_VAL(p1,p2,p3) \
		EPI_DEBUG(p1, p2, sprintf(d_buff, \
		"exiting with value: (%d)", \
		p3))

#define DEBUGEND_STRING(p1,p2,p3) \
		EPI_DEBUG(p1, p2, sprintf(d_buff, \
		"exiting with string: (%s)", \
		DC_STRING(p3)))

#define DEBUGEND_SIGNAL(p1,p2,p3) \
		EPI_DEBUG(p1, p2, sprintf(d_buff, \
		"exiting with signal: (value = %d, upb_value = %d)", \
		DC_SIGNAL(p3)))


/* end */
/* --- */

#endif
