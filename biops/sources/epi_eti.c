/* $Id: epi_eti.c,v 34.2 1995/03/29 13:03:53 ella Exp $ */


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
$OldLog:	epi_eti.c,v $
 * Revision 2.1.1.1  91/11/05  16:30:38  aap
 * Use of alloca removed (not available on VMS).
 * 
 * Revision 2.1  91/02/25  12:09:27  miker
 * Candidate release 5
 * 
 * Revision 1.1  90/04/17  15:16:25  aap
 * Initial revision
 * 
*/
/* DEC/CMS REPLACEMENT HISTORY, Element EPI_ETI.C */
/* *3    10-AUG-1989 14:53:57 ELLADEV "Definitive release 4.0, first provisional release 4.1. BGH" */
/* *2    21-JAN-1989 11:41:19 ELLADEV "Provisional for Release 4.0 BGH" */
/* *1    10-NOV-1988 11:57:22 ELLADEV "New for Release 4, stored in CMS lib [elladev.cms.epi]" */
/* DEC/CMS REPLACEMENT HISTORY, Element EPI_ETI.C */
/*
*******************************************************************************
				Praxis Systems plc

Module	      :	EPI Library - ETI functions

File          :	epi_eti.c
		
Description   :	This module contains the ETI functions of the EPI library.


Changes History

   16.06.88	New module for EPI Version 1. BGH
   07.10.88	Implement actions from Code Review n035.7.47. BGH

*******************************************************************************
*/

static char RcsId[] = "$Id: epi_eti.c,v 34.2 1995/03/29 13:03:53 ella Exp $";	/* Sccs ident for C file */

#include <stdio.h>
#include <varargs.h>
#include "epi.h"
#include "epi_internal.h"

EPI_STATUS eti_command(command)
EPI_STRING command;
{
    EPI_STATUS status;

    INIT_STATUS(status);
    DEBUGSTART_COMMAND(1, ETI_COMMAND, command);
    if (!epi_started)
	epi_status_code(status) = EPI_S_NOT_STARTED;
    else if (epi_active)
	epi_status_code(status) = EPI_S_ACTIVE;
    else
    {
	ACTIVE_START;
	if (command == NULL || *command == 0)
	    epi_status_code(status) = EPI_S_BAD_STRING;
	else
	{
	    CALL_SUPPORT_FUNCTION(status, ETI_COMMAND, (command));
	    /* check if ELLA has terminated */
	    if (epi_status_code(status) == EPI_S_NOT_STARTED)
	    {
		epi_started = FALSE;
	    }
	}
	ACTIVE_STOP;
    }
    DEBUGEND_STATUS(2, ETI_COMMAND, status);
    return (status);
}


EPI_STATUS eti_clearinputs()
{
    EPI_STATUS status;

    INIT_STATUS(status);
    DEBUGSTART(1, ETI_CLEARINPUTS);
    if (!epi_started)
	epi_status_code(status) = EPI_S_NOT_STARTED;
    else if (epi_active)
	epi_status_code(status) = EPI_S_ACTIVE;
    else
    {
	ACTIVE_START;
	CALL_SUPPORT_FUNCTION(status, ETI_CLEARINPUTS, ());
	ACTIVE_STOP;
    }
    DEBUGEND_STATUS(2, ETI_CLEARINPUTS, status);
    return (status);
}


EPI_STATUS eti_input(filename)
EPI_STRING filename;
{
    EPI_STATUS status;

    INIT_STATUS(status);
    DEBUGSTART_FILENAME(1, ETI_INPUT, filename);
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
	{
	    CALL_SUPPORT_FUNCTION(status, ETI_INPUT, (filename));
	    /* check if ELLA has terminated */
	    if (epi_status_code(status) == EPI_S_NOT_STARTED)
	    {
		epi_started = FALSE;
	    }
	}
	ACTIVE_STOP;
    }
    DEBUGEND_STATUS(2, ETI_INPUT, status);
    return (status);
}


EPI_STATUS eti_removefile()
{
    EPI_STATUS status;

    INIT_STATUS(status);
    DEBUGSTART(1, ETI_REMOVEFILE);
    if (!epi_started)
	epi_status_code(status) = EPI_S_NOT_STARTED;
    else if (epi_active)
	epi_status_code(status) = EPI_S_ACTIVE;
    else
    {
	ACTIVE_START;
	CALL_SUPPORT_FUNCTION(status, ETI_REMOVEFILE, ());
	ACTIVE_STOP;
    }
    DEBUGEND_STATUS(2, ETI_REMOVEFILE, status);
    return (status);
}


EPI_STATUS eti_showinput()
{
    EPI_STATUS status;

    INIT_STATUS(status);
    DEBUGSTART(1, ETI_SHOWINPUT);
    if (!epi_started)
	epi_status_code(status) = EPI_S_NOT_STARTED;
    else if (epi_active)
	epi_status_code(status) = EPI_S_ACTIVE;
    else
    {
	ACTIVE_START;
	CALL_SUPPORT_FUNCTION(status, ETI_SHOWINPUT, ());
	ACTIVE_STOP;
    }
    DEBUGEND_STATUS(2, ETI_SHOWINPUT, status);
    return (status);
}


EPI_STATUS eti_dontshowinput()
{
    EPI_STATUS status;

    INIT_STATUS(status);
    DEBUGSTART(1, ETI_DONTSHOWINPUT);
    if (!epi_started)
	epi_status_code(status) = EPI_S_NOT_STARTED;
    else if (epi_active)
	epi_status_code(status) = EPI_S_ACTIVE;
    else
    {
	ACTIVE_START;
	CALL_SUPPORT_FUNCTION(status, ETI_DONTSHOWINPUT, ());
	ACTIVE_STOP;
    }
    DEBUGEND_STATUS(2, ETI_DONTSHOWINPUT, status);
    return (status);
}


EPI_STATUS eti_offline()
{
    EPI_STATUS status;

    INIT_STATUS(status);
    DEBUGSTART(1, ETI_OFFLINE);
    if (!epi_started)
	epi_status_code(status) = EPI_S_NOT_STARTED;
    else if (epi_active)
	epi_status_code(status) = EPI_S_ACTIVE;
    else
    {
	ACTIVE_START;
	CALL_SUPPORT_FUNCTION(status, ETI_OFFLINE, ());
	/* check if ELLA has terminated */
	if (epi_status_code(status) == EPI_S_NOT_STARTED)
	{
	    epi_started = FALSE;
	}
	ACTIVE_STOP;
    }
    DEBUGEND_STATUS(2, ETI_OFFLINE, status);
    return (status);
}


EPI_STATUS eti_log(filename)
EPI_STRING filename;
{
    EPI_STATUS status;

    INIT_STATUS(status);
    DEBUGSTART_FILENAME(1, ETI_LOG, filename);
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
	    CALL_SUPPORT_FUNCTION(status, ETI_LOG, (filename));
	ACTIVE_STOP;
    }
    DEBUGEND_STATUS(2, ETI_LOG, status);
    return (status);
}


EPI_STATUS eti_dontlog()
{
    EPI_STATUS status;

    INIT_STATUS(status);
    DEBUGSTART(1, ETI_DONTLOG);
    if (!epi_started)
	epi_status_code(status) = EPI_S_NOT_STARTED;
    else if (epi_active)
	epi_status_code(status) = EPI_S_ACTIVE;
    else
    {
	ACTIVE_START;
	CALL_SUPPORT_FUNCTION(status, ETI_DONTLOG, ());
	ACTIVE_STOP;
    }
    DEBUGEND_STATUS(2, ETI_DONTLOG, status);
    return (status);
}


EPI_STATUS eti_output(filename)
EPI_STRING filename;
{
    EPI_STATUS status;

    INIT_STATUS(status);
    DEBUGSTART_FILENAME(1, ETI_OUTPUT, filename);
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
	    CALL_SUPPORT_FUNCTION(status, ETI_OUTPUT, (filename));
	ACTIVE_STOP;
    }
    DEBUGEND_STATUS(2, ETI_OUTPUT, status);
    return (status);
}


EPI_STATUS eti_dontoutput()
{
    EPI_STATUS status;

    INIT_STATUS(status);
    DEBUGSTART(1, ETI_DONTOUTPUT);
    if (!epi_started)
	epi_status_code(status) = EPI_S_NOT_STARTED;
    else if (epi_active)
	epi_status_code(status) = EPI_S_ACTIVE;
    else
    {
	ACTIVE_START;
	CALL_SUPPORT_FUNCTION(status, ETI_DONTOUTPUT, ());
	ACTIVE_STOP;
    }
    DEBUGEND_STATUS(2, ETI_DONTOUTPUT, status);
    return (status);
}


EPI_STATUS eti_showoutput()
{
    EPI_STATUS status;

    INIT_STATUS(status);
    DEBUGSTART(1, ETI_SHOWOUTPUT);
    if (!epi_started)
	epi_status_code(status) = EPI_S_NOT_STARTED;
    else if (epi_active)
	epi_status_code(status) = EPI_S_ACTIVE;
    else
    {
	ACTIVE_START;
	CALL_SUPPORT_FUNCTION(status, ETI_SHOWOUTPUT, ());
	ACTIVE_STOP;
    }
    DEBUGEND_STATUS(2, ETI_SHOWOUTPUT, status);
    return (status);
}


EPI_STATUS eti_dontshowoutput()
{
    EPI_STATUS status;

    INIT_STATUS(status);
    DEBUGSTART(1, ETI_DONTSHOWOUTPUT);
    if (!epi_started)
	epi_status_code(status) = EPI_S_NOT_STARTED;
    else if (epi_active)
	epi_status_code(status) = EPI_S_ACTIVE;
    else
    {
	ACTIVE_START;
	CALL_SUPPORT_FUNCTION(status, ETI_DONTSHOWOUTPUT, ());
	ACTIVE_STOP;
    }
    DEBUGEND_STATUS(2, ETI_DONTSHOWOUTPUT, status);
    return (status);
}


EPI_STATUS eti_obey(command)
EPI_STRING command;
{
    EPI_STATUS status;

    INIT_STATUS(status);
    DEBUGSTART_COMMAND(1, ETI_OBEY, command);
    if (!epi_started)
	epi_status_code(status) = EPI_S_NOT_STARTED;
    else if (epi_active)
	epi_status_code(status) = EPI_S_ACTIVE;
    else
    {
	ACTIVE_START;
	if (command == NULL || *command == 0)
	    epi_status_code(status) = EPI_S_BAD_STRING;
	else
	    CALL_SUPPORT_FUNCTION(status, ETI_OBEY, (command));
	ACTIVE_STOP;
    }
    DEBUGEND_STATUS(2, ETI_OBEY, status);
    return (status);
}


EPI_STATUS epi_get_eti_details(va_alist)
 va_dcl
{
    EPI_STATUS status;
    va_list args;
    EPI_MESSAGE_TYPE type;
    int i, count = 0;

    INIT_STATUS(status);
    DEBUGSTART_VARG(1, EPI_GET_ETI_DETAILS);
    if (!epi_started)
	epi_status_code(status) = EPI_S_NOT_STARTED;
    else
    {
	PASSIVE_START;
	/* count the number of arguments */
	va_start(args);
	while ((type = va_arg(args, EPI_MESSAGE_TYPE)) != 0)
	    count++;
	va_end(args);
	{
	    EPI_MESSAGE_TYPE *arg_array = NEW_MESSAGE_TYPE_ARRAY(count + 1);
	    EPI_MESSAGE_TYPE *ptr = arg_array;

	    va_start(args);
	    for (i = 0; i < count; i++)
		*ptr++ = va_arg(args, EPI_MESSAGE_TYPE);
	    va_end(args);
	    *ptr = 0;
	    CALL_SUPPORT_FUNCTION(status, EPI_GET_ETI_DETAILS,
				  (arg_array));
	    FREE_MESSAGE_TYPE_ARRAY(arg_array);
	  }
	PASSIVE_STOP;
    }
    DEBUGEND_STATUS(2, EPI_GET_ETI_DETAILS, status);
    return (status);
}
