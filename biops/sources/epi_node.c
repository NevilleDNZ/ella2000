/* $Id: epi_node.c,v 34.2 1995/03/29 13:03:55 ella Exp $ */


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
$OldLog:	epi_node.c,v $
 * Revision 2.1.1.1  91/11/05  16:33:29  aap
 * Use of alloca removed (not available on VMS).
 * 
 * Revision 2.1  91/02/25  12:10:27  miker
 * Candidate release 5
 * 
 * Revision 1.1  90/04/17  15:18:37  aap
 * Initial revision
 * 
*/
/* DEC/CMS REPLACEMENT HISTORY, Element EPI_NODE.C */
/* *10    1-FEB-1990 14:16:42 ELLADEV "Updated provisional with fixes for R4B609. IM" */
/* *9    10-AUG-1989 14:54:20 ELLADEV "Definitive release 4.0, first provisional release 4.1. BGH" */
/* *8    28-FEB-1989 16:01:00 ELLADEV "Updated provisional with fixes for R4B163. BGH" */
/* *7     1-FEB-1989 15:14:46 ELLADEV "Updated provisional with fixes for R4B049. BGH" */
/* *6    21-JAN-1989 11:41:42 ELLADEV "Provisional for Release 4.0 BGH" */
/* *5    12-JAN-1989 16:11:54 ELLADEV "updated draft version for Release 4.0" */
/* *4     7-DEC-1988 17:17:18 ELLADEV "removed header file memory.h" */
/* *3     6-DEC-1988 17:54:01 ELLADEV "updated draft version" */
/* *2    30-NOV-1988 15:18:42 ELLADEV "updated draft version for Release 4.0" */
/* *1    10-NOV-1988 11:57:45 ELLADEV "New for Release 4, stored in CMS lib [elladev.cms.epi]" */
/* DEC/CMS REPLACEMENT HISTORY, Element EPI_NODE.C */
/*
*******************************************************************************
				Praxis Systems plc

Module	     :	EPI Library - node functions

File	     :	epi_node.c

Description  :	This module contains the node functions of the EPI library.


Changes History

   25.08.88	New module for EPI Version 2. AAP
   07.10.88	Implement actions from Code Review n035.7.47. BGH
   24.11.88	Added epi_same_node. BGH
   06.12.88	Now uses bcmp instead of memcmp as latter not available 
   		on the Apollo. BGH

*******************************************************************************
*/

static char RcsId[] = "$Id: epi_node.c,v 34.2 1995/03/29 13:03:55 ella Exp $";

#include <varargs.h>
#include <stdio.h>
#include "epi.h"
#include "epi_internal.h"

EPI_STATUS epi_create_testpoint(node, action, condition, value)
EPI_NODE node;
EPI_UNSIGNED action, condition;
EPI_SIGNAL value;
{
    EPI_STATUS status;

    INIT_STATUS(status);
    DEBUGSTART_NODE_VAL_VAL_SIGNAL(1, EPI_CREATE_TESTPOINT, node, action, 
        condition, value );
    if (!epi_started)
	epi_status_code(status) = EPI_S_NOT_STARTED;
    else if (epi_active)
	epi_status_code(status) = EPI_S_ACTIVE;
    else if (node.ident != EPI_O_NODE)
	epi_status_code(status) = EPI_S_BAD_NODE;
    else if (action != EPI_C_NOTIFY &&
	     action != EPI_C_NOTIFY_AND_KEEP &&
	     action != EPI_C_STOP)
	epi_status_code(status) = EPI_S_BAD_ACTION;
    else if (condition != EPI_C_ALWAYS &&
	     condition != EPI_C_BECOMES &&
	     condition != EPI_C_CHANGES &&
	     condition != EPI_C_EQUALS)
	epi_status_code(status) = EPI_S_BAD_CONDITION;
    else if (action == EPI_C_STOP && condition == EPI_C_ALWAYS)
	epi_status_code(status) = EPI_S_BAD_CONDITION;
    else if ( (condition == EPI_C_BECOMES || condition == EPI_C_EQUALS ) &&
		value.ident != EPI_O_SIGNAL)
	epi_status_code(status) = EPI_S_BAD_SIGNAL;
    else
    {
	ACTIVE_START;
	CALL_SUPPORT_FUNCTION(status, EPI_CREATE_TESTPOINT, (node, action, condition, value));
	ACTIVE_STOP;
    }
    DEBUGEND_STATUS(2, EPI_CREATE_TESTPOINT, status);
    return (status);
}

EPI_STATUS epi_keep(node)
EPI_NODE node;
{
    EPI_STATUS status;

    INIT_STATUS(status);
    DEBUGSTART_NODE(1, EPI_KEEP, node);
    if (!epi_started)
	epi_status_code(status) = EPI_S_NOT_STARTED;
    else if (epi_active)
	epi_status_code(status) = EPI_S_ACTIVE;
    else if (node.ident != EPI_O_NODE)
	epi_status_code(status) = EPI_S_BAD_NODE;
    else
    {
	ACTIVE_START;
	CALL_SUPPORT_FUNCTION(status, EPI_KEEP, (node));
	ACTIVE_STOP;
    }
    DEBUGEND_STATUS(2, EPI_KEEP, status);
    return (status);
}

EPI_STATUS epi_dont_keep(node)
EPI_NODE node;
{
    EPI_STATUS status;

    INIT_STATUS(status);
    DEBUGSTART_NODE(1, EPI_DONT_KEEP, node);
    if (!epi_started)
	epi_status_code(status) = EPI_S_NOT_STARTED;
    else if (epi_active)
	epi_status_code(status) = EPI_S_ACTIVE;
    else if (node.ident != EPI_O_NODE)
	epi_status_code(status) = EPI_S_BAD_NODE;
    else
    {
	ACTIVE_START;
	CALL_SUPPORT_FUNCTION(status, EPI_DONT_KEEP, (node));
	ACTIVE_STOP;
    }
    DEBUGEND_STATUS(2, EPI_DONT_KEEP, status);
    return (status);
}

EPI_STATUS epi_set_ram(node, lwb, upb, values, upb_values)
EPI_NODE node;
EPI_SIGNAL lwb, upb;
EPI_SIGNAL *values;
EPI_UNSIGNED upb_values;
{
    EPI_STATUS status;

    INIT_STATUS(status);
    DEBUGSTART_NODE_SIGNAL_SIGNAL_SIGADD_UPB(1, EPI_SET_RAM,
        node, lwb, upb, values, upb_values);
    if (!epi_started)
	epi_status_code(status) = EPI_S_NOT_STARTED;
    else if (epi_active)
	epi_status_code(status) = EPI_S_ACTIVE;
    else if (node.ident != EPI_O_NODE)
	epi_status_code(status) = EPI_S_BAD_NODE;
    else if (lwb.ident != EPI_O_SIGNAL || upb.ident != EPI_O_SIGNAL)
	epi_status_code(status) = EPI_S_BAD_SIGNAL;
    else if (values == (EPI_SIGNAL *) NULL)
	epi_status_code(status) = EPI_S_BAD_VALUES;
    else
    {
	/* check EPI_NULL_SIGNAL not in values */
	int i, ok = 1;
	for( i = 0; ok && i<upb_values; i++ )
	    ok = !epi_same_signal(values[i],EPI_NULL_SIGNAL);
	if( !ok )
	    epi_status_code(status) = EPI_S_BAD_SIGNAL;
	else
	{
	    ACTIVE_START;
	    CALL_SUPPORT_FUNCTION(status, EPI_SET_RAM, (node, lwb, upb, values, upb_values));
	    ACTIVE_STOP;
	}
    }
    DEBUGEND_STATUS(2, EPI_SET_RAM, status);
    return (status);
}

EPI_STATUS epi_simulate_function(function)
EPI_STRING function;
{
    EPI_STATUS status;

    INIT_STATUS(status);
    DEBUGSTART_NAME(1, EPI_SIMULATE_FUNCTION, function);
    if (!epi_started)
	epi_status_code(status) = EPI_S_NOT_STARTED;
    else if (epi_active)
	epi_status_code(status) = EPI_S_ACTIVE;
    else if (function == EPI_NULL_STRING || *function == 0)
	epi_status_code(status) = EPI_S_BAD_STRING;
    else
    {
	ACTIVE_START;
	CALL_SUPPORT_FUNCTION(status, EPI_SIMULATE_FUNCTION, (function));
	ACTIVE_STOP;
    }
    DEBUGEND_STATUS(2, EPI_SIMULATE_FUNCTION, status);
    return (status);
}

/*
  Sun-4 compiler passes structure parameters as pointers.
  Varargs is not able to untangle this, hence the #ifdef below.
*/

typedef EPI_NODE *EPI_NODE_PTR;

EPI_STATUS epi_get_node_details(va_alist)
 va_dcl
{
    EPI_STATUS status;
    va_list args;
    EPI_NODE node, *node_ptr;
    EPI_MESSAGE_TYPE type;
    int i, count = 0;

    INIT_STATUS(status);
    DEBUGSTART_VARG(1, EPI_GET_NODE_DETAILS);
    if (!epi_started)
	epi_status_code(status) = EPI_S_NOT_STARTED;
    else
    {
	va_start(args);
	/* first argument is the node */
#ifdef sparc
	node_ptr = va_arg(args, EPI_NODE_PTR);
	node = *node_ptr;
#else
	node = va_arg(args, EPI_NODE);
#endif
	/* count the number of arguments */
	while ((type = va_arg(args, EPI_MESSAGE_TYPE)) != 0)
	    count++;
	va_end(args);
	if (node.ident != EPI_O_NODE)
	    epi_status_code(status) = EPI_S_BAD_NODE;
	else
	{
	    EPI_MESSAGE_TYPE *arg_array = NEW_MESSAGE_TYPE_ARRAY(count + 1);
	    EPI_MESSAGE_TYPE *ptr = arg_array;

	    PASSIVE_START;
	    va_start(args);
#ifdef sparc
	    va_arg(args, EPI_NODE_PTR);	/* dont need first parameter */
#else
	    va_arg(args, EPI_NODE);	/* dont need first parameter */
#endif
	    for (i = 0; i < count; i++)
		*ptr++ = va_arg(args, EPI_MESSAGE_TYPE);
	    va_end(args);
	    *ptr = 0;
	    CALL_SUPPORT_FUNCTION(status, EPI_GET_NODE_DETAILS,
				  (node, arg_array));
	    FREE_MESSAGE_TYPE_ARRAY(arg_array);
	    PASSIVE_STOP;
	}
    }
    DEBUGEND_STATUS(2, EPI_GET_NODE_DETAILS, status);
    return (status);
}

EPI_STATUS epi_get_signal(node)
EPI_NODE node;
{
    EPI_STATUS status;

    INIT_STATUS(status);
    DEBUGSTART_NODE(1, EPI_GET_SIGNAL, node);
    if (!epi_started)
	epi_status_code(status) = EPI_S_NOT_STARTED;
    else if (node.ident != EPI_O_NODE)
	epi_status_code(status) = EPI_S_BAD_NODE;
    else
    {
	PASSIVE_START;
	CALL_SUPPORT_FUNCTION(status, EPI_GET_SIGNAL, (node));
	PASSIVE_STOP;
    }
    DEBUGEND_STATUS(2, EPI_GET_SIGNAL, status);
    return (status);
}

EPI_STATUS epi_get_ram_values(ramnode, lwb, upb)
EPI_NODE ramnode;
EPI_SIGNAL lwb, upb;
{
    EPI_STATUS status;

    INIT_STATUS(status);
    DEBUGSTART_NODE_SIGNAL_SIGNAL(1, EPI_GET_RAM_VALUES, ramnode, lwb, upb);
    if (!epi_started)
	epi_status_code(status) = EPI_S_NOT_STARTED;
    else if (ramnode.ident != EPI_O_NODE)
	epi_status_code(status) = EPI_S_BAD_NODE;
    else if (lwb.ident != EPI_O_SIGNAL || upb.ident != EPI_O_SIGNAL)
	epi_status_code(status) = EPI_S_BAD_SIGNAL;
    else
    {
	PASSIVE_START;
	CALL_SUPPORT_FUNCTION(status, EPI_GET_RAM_VALUES, (ramnode, lwb, upb));
	PASSIVE_STOP;
    }
    DEBUGEND_STATUS(2, EPI_GET_RAM_VALUES, status);
    return (status);
}

EPI_STATUS epi_parse_nodename(node_name)
EPI_STRING node_name;
{
    EPI_STATUS status;

    INIT_STATUS(status);
    DEBUGSTART_NAME(1, EPI_PARSE_NODENAME, node_name);
    if (!epi_started)
	epi_status_code(status) = EPI_S_NOT_STARTED;
    else if (node_name == EPI_NULL_STRING || *node_name == 0)
	epi_status_code(status) = EPI_S_BAD_STRING;
    else
    {
	PASSIVE_START;
	CALL_SUPPORT_FUNCTION(status, EPI_PARSE_NODENAME, (node_name));
	PASSIVE_STOP;
    }
    DEBUGEND_STATUS(2, EPI_PARSE_NODENAME, status);
    return (status);
}

/* unpacking functions (not defined as macros) */
/* ------------------------------------------- */

EPI_BOOL epi_same_node(node1, node2)
EPI_NODE node1, node2;
{
    EPI_BOOL same;

    DEBUGSTART_NODE_NODE(3, EPI_SAME_NODE, node1, node2);
    same = ((node1.ident == EPI_O_NULL_NODE &&
	     node2.ident == EPI_O_NULL_NODE) ||
	    (node1.ident == EPI_O_NODE &&
	     node2.ident == EPI_O_NODE &&
             node1.fn == node2.fn &&
	     node1.instance == node2.instance &&
	     node1.upb_rnodelist == node2.upb_rnodelist &&
	     !bcmp((char*)node1.rnodelist,(char*)node2.rnodelist,
		    node1.upb_rnodelist*sizeof(EPI_INT))));
    DEBUGEND_BOOL(4, EPI_SAME_NODE, same);
    return (same);
}

/* end */
