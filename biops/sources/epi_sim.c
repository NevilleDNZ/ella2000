/* $Id: epi_sim.c,v 34.2 1995/03/29 13:03:56 ella Exp $ */


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
$OldLog:	epi_sim.c,v $
 * Revision 2.1.1.1  91/11/05  16:48:02  aap
 * Use of alloca removed (not available on VMS).
 * 
 * Revision 2.1  91/02/25  12:10:41  miker
 * Candidate release 5
 * 
 * Revision 1.2  90/04/18  09:57:49  cathy
 * epi_replay_simulation() made a passive function.
 * 
 * Revision 1.1  90/04/17  15:23:10  aap
 * Initial revision
 * 
*/
/* DEC/CMS REPLACEMENT HISTORY, Element EPI_SIM.C */
/* *4    10-AUG-1989 14:54:30 ELLADEV "Definitive release 4.0, first provisional release 4.1. BGH" */
/* *3     1-FEB-1989 15:16:04 ELLADEV "Updated provisional with fixes for R4B051. BGH" */
/* *2    21-JAN-1989 11:41:51 ELLADEV "Provisional for Release 4.0 BGH" */
/* *1    10-NOV-1988 11:57:56 ELLADEV "New for Release 4, stored in CMS lib [elladev.cms.epi]" */
/* DEC/CMS REPLACEMENT HISTORY, Element EPI_SIM.C */
/*
*******************************************************************************
				Praxis Systems plc

Module	      :	EPI Library - simulation functions

File	      :	epi_sim.c

Description   :	This module contains the simulation functions of the 
		EPI library.


Changes	History

   25.08.88	New module for EPI Version 2. AAP
   07.10.88	Implement actions from Code Review n035.7.47. BGH

*******************************************************************************
*/

static char RcsId[] = "$Id: epi_sim.c,v 34.2 1995/03/29 13:03:56 ella Exp $";

#include <stdio.h>
#include <varargs.h>
#include "epi.h"
#include "epi_internal.h"

EPI_STATUS epi_set_input(inputnode, value)
EPI_NODE inputnode;
EPI_SIGNAL value;
{
    EPI_STATUS status;

    INIT_STATUS(status);
    DEBUGSTART_NODE_SIGNAL(1, EPI_SET_INPUT, inputnode, value);
    if (!epi_started)
	epi_status_code(status) = EPI_S_NOT_STARTED;
    else if (epi_active)
	epi_status_code(status) = EPI_S_ACTIVE;
    else if (inputnode.ident != EPI_O_NODE)
	epi_status_code(status) = EPI_S_BAD_NODE;
    else if (value.ident != EPI_O_SIGNAL)
	epi_status_code(status) = EPI_S_BAD_SIGNAL;
    else
    {
	ACTIVE_START;
	CALL_SUPPORT_FUNCTION(status, EPI_SET_INPUT, (inputnode, value));
	ACTIVE_STOP;
    }
    DEBUGEND_STATUS(2, EPI_SET_INPUT, status);
    return (status);
}

EPI_STATUS epi_finish_simulation(save)
EPI_BOOL save;
{
    EPI_STATUS status;

    INIT_STATUS(status);
    DEBUGSTART_BOOL(1, EPI_FINISH_SIMULATION, save);
    if (!epi_started)
	epi_status_code(status) = EPI_S_NOT_STARTED;
    else if (epi_active)
	epi_status_code(status) = EPI_S_ACTIVE;
    else
    {
	ACTIVE_START;
	CALL_SUPPORT_FUNCTION(status, EPI_FINISH_SIMULATION, (save));
	ACTIVE_STOP;
    }
    DEBUGEND_STATUS(2, EPI_FINISH_SIMULATION, status);
    return (status);
}

EPI_STATUS epi_capture_simulation(filename)
EPI_STRING filename;
{
    EPI_STATUS status;

    INIT_STATUS(status);
    DEBUGSTART_NAME(1, EPI_CAPTURE_SIMULATION, filename);
    if (!epi_started)
	epi_status_code(status) = EPI_S_NOT_STARTED;
    else if (epi_active)
	epi_status_code(status) = EPI_S_ACTIVE;
    else if (filename == NULL || *filename == 0)
	epi_status_code(status) = EPI_S_BAD_STRING;
    else
    {
	ACTIVE_START;
	CALL_SUPPORT_FUNCTION(status, EPI_CAPTURE_SIMULATION, (filename));
	ACTIVE_STOP;
    }
    DEBUGEND_STATUS(2, EPI_CAPTURE_SIMULATION, status);
    return (status);
}

EPI_STATUS epi_restart_simulation(increment)
EPI_UNSIGNED increment;
{
    EPI_STATUS status;

    INIT_STATUS(status);
    DEBUGSTART_VAL(1, EPI_RESTART_SIMULATION, increment);
    if (!epi_started)
	epi_status_code(status) = EPI_S_NOT_STARTED;
    else if (epi_active)
	epi_status_code(status) = EPI_S_ACTIVE;
    else
    {
	ACTIVE_START;
	CALL_SUPPORT_FUNCTION(status, EPI_RESTART_SIMULATION, (increment));
	ACTIVE_STOP;
    }
    DEBUGEND_STATUS(2, EPI_RESTART_SIMULATION, status);
    return (status);
}

EPI_STATUS epi_replay_simulation(start_time, end_time)
EPI_UNSIGNED start_time;
EPI_UNSIGNED end_time;
{
    EPI_STATUS status;

    INIT_STATUS(status);
    DEBUGSTART_VAL_VAL(1, EPI_REPLAY_SIMULATION, start_time, end_time);
    if (!epi_started)
	epi_status_code(status) = EPI_S_NOT_STARTED;
    else if (start_time > end_time)
	epi_status_code(status) = EPI_S_BAD_RANGE;
    else
    {
	PASSIVE_START;
	CALL_SUPPORT_FUNCTION(status, EPI_REPLAY_SIMULATION, (start_time, end_time));
	PASSIVE_STOP;
    }
    DEBUGEND_STATUS(2, EPI_REPLAY_SIMULATION, status);
    return (status);
}

EPI_STATUS epi_get_simulation_details(va_alist)
 va_dcl
{
    EPI_STATUS status;
    va_list args;
    EPI_MESSAGE_TYPE type;
    int i, count = 0;

    INIT_STATUS(status);
    DEBUGSTART_VARG(1, EPI_GET_SIMULATION_DETAILS);
    if (!epi_started)
	epi_status_code(status) = EPI_S_NOT_STARTED;
    else
    {
	va_start(args);
	/* count the number	of arguments */
	while ((type = va_arg(args, EPI_MESSAGE_TYPE)) != 0)
	    count++;
	va_end(args);
	{
	    EPI_MESSAGE_TYPE *arg_array = NEW_MESSAGE_TYPE_ARRAY(count + 1);
	    EPI_MESSAGE_TYPE *ptr = arg_array;

	    PASSIVE_START;
	    va_start(args);
	    for (i = 0; i < count; i++)
		*ptr++ = va_arg(args, EPI_MESSAGE_TYPE);
	    va_end(args);
	    *ptr = 0;
	    CALL_SUPPORT_FUNCTION(status, EPI_GET_SIMULATION_DETAILS,
				  (arg_array));
	    FREE_MESSAGE_TYPE_ARRAY(arg_array);
	    PASSIVE_STOP;
	}
    }
    DEBUGEND_STATUS(2, EPI_GET_SIMULATION_DETAILS, status);
    return (status);
}
