/* $Id: epi_testpoint.c,v 34.2 1995/03/29 13:03:57 ella Exp $ */


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
$OldLog:	epi_testpoint.c,v $
 * Revision 2.1.1.1  91/11/05  16:07:49  aap
 * Use of alloca removed (not available on VMS).
 * 
 * Revision 2.1  91/02/25  12:10:48  miker
 * Candidate release 5
 * 
 * Revision 1.1  90/04/17  15:23:31  aap
 * Initial revision
 * 
*/
/* DEC/CMS REPLACEMENT HISTORY, Element EPI_TESTPOINT.C */
/* *5     1-FEB-1990 14:16:49 ELLADEV "Updated provisional with fixes for R4B609. IM" */
/* *4    10-AUG-1989 14:54:33 ELLADEV "Definitive release 4.0, first provisional release 4.1. BGH" */
/* *3    21-JAN-1989 11:41:54 ELLADEV "Provisional for Release 4.0 BGH" */
/* *2    30-NOV-1988 15:19:36 ELLADEV "updated draft version for Release 4.0" */
/* *1    10-NOV-1988 11:58:00 ELLADEV "New for Release 4, stored in CMS lib [elladev.cms.epi]" */
/* DEC/CMS REPLACEMENT HISTORY, Element EPI_TESTPOINT.C */
/*
*******************************************************************************
				Praxis Systems plc

Module        :	EPI Library - testpoint functions

File	      :	epi_testpoint.c

Description   :	This module contains the testpoint functions of the 
		EPI library.


Changes	History

   25.08.88	New module for EPI Version 2. AAP
   07.10.88	Implement actions from Code Review n035.7.47. BGH
   24.11.88	Added epi_same_testpoint. BGH

*******************************************************************************
*/

static char RcsId[] = "$Id: epi_testpoint.c,v 34.2 1995/03/29 13:03:57 ella Exp $";

#include <varargs.h>
#include <stdio.h>
#include "epi.h"
#include "epi_internal.h"

EPI_STATUS epi_erase_testpoint(testpoint)
EPI_TESTPOINT testpoint;
{
    EPI_STATUS status;

    INIT_STATUS(status);
    DEBUGSTART_TPOINT(1, EPI_ERASE_TESTPOINT, testpoint);
    if (!epi_started)
	epi_status_code(status) = EPI_S_NOT_STARTED;
    else if (epi_active)
	epi_status_code(status) = EPI_S_ACTIVE;
    else if (testpoint.ident != EPI_O_TESTPOINT)
	epi_status_code(status) = EPI_S_BAD_TESTPOINT;
    else
    {
	ACTIVE_START;
	CALL_SUPPORT_FUNCTION(status, EPI_ERASE_TESTPOINT, (testpoint));
	ACTIVE_STOP;
    }
    DEBUGEND_STATUS(2, EPI_ERASE_TESTPOINT, status);
    return (status);
}

/*
  Sun-4 compiler passes structure parameters as pointers.
  Varargs is not able to untangle this, hence the #ifdef below.
*/

typedef EPI_TESTPOINT *EPI_TESTPOINT_PTR;

EPI_STATUS epi_get_testpoint_details(va_alist)
 va_dcl
{
    EPI_STATUS status;
    va_list args;
    EPI_TESTPOINT testpoint, *testpoint_ptr;
    EPI_MESSAGE_TYPE type;
    int i, count = 0;

    INIT_STATUS(status);
    DEBUGSTART_VARG(1, EPI_GET_TESTPOINT_DETAILS);
    if (!epi_started)
	epi_status_code(status) = EPI_S_NOT_STARTED;
    else
    {
	va_start(args);
	/* first argument is the testpoint */
#ifdef sparc
	testpoint_ptr = va_arg(args, EPI_TESTPOINT_PTR);
	testpoint = *testpoint_ptr;
#else
	testpoint = va_arg(args, EPI_TESTPOINT);
#endif
	/* count the number of arguments */
	while ((type = va_arg(args, EPI_MESSAGE_TYPE)) != 0)
	    count++;
	va_end(args);
	if (testpoint.ident != EPI_O_TESTPOINT)
	    epi_status_code(status) = EPI_S_BAD_TESTPOINT;
	else
	{
	    EPI_MESSAGE_TYPE *arg_array = NEW_MESSAGE_TYPE_ARRAY(count + 1);
	    EPI_MESSAGE_TYPE *ptr = arg_array;

	    PASSIVE_START;
	    va_start(args);
#ifdef sparc
	    va_arg(args, EPI_TESTPOINT_PTR);	/* dont need first parameter */
#else
	    va_arg(args, EPI_TESTPOINT);	/* dont need first parameter */
#endif
	    for (i = 0; i < count; i++)
		*ptr++ = va_arg(args, EPI_MESSAGE_TYPE);
	    va_end(args);
	    *ptr = 0;
	    CALL_SUPPORT_FUNCTION(status, EPI_GET_TESTPOINT_DETAILS,
				  (testpoint, arg_array));
	    FREE_MESSAGE_TYPE_ARRAY(arg_array);
	    PASSIVE_STOP;
	}
    }
    DEBUGEND_STATUS(2, EPI_GET_TESTPOINT_DETAILS, status);
    return (status);
}

/* unpacking functions (not defined as macros) */
/* ------------------------------------------- */

EPI_BOOL epi_same_testpoint(testpoint1, testpoint2)
EPI_TESTPOINT testpoint1, testpoint2;
{
    EPI_BOOL same;

    DEBUGSTART_TPOINT_TPOINT(3, EPI_SAME_TESTPOINT, testpoint1, testpoint2);
    same = (testpoint1.ident == EPI_O_TESTPOINT &&
	    testpoint2.ident == EPI_O_TESTPOINT &&
	    testpoint1.handle == testpoint2.handle);
    DEBUGEND_BOOL(4, EPI_SAME_TESTPOINT, same);
    return (same);
}

/* end */
