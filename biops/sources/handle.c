/* $Id: handle.c,v 34.2 1995/03/29 13:04:02 ella Exp $ */


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

static char *rcsid = " $Id: handle.c,v 34.2 1995/03/29 13:04:02 ella Exp $ ";

/* DEC/CMS REPLACEMENT HISTORY, Element HANDLE.C */
/* *4    11-AUG-1989 15:05:03 ELLADEV "Updated provisional with fixes for R4B388. BGH" */
/* *3    10-AUG-1989 12:21:22 ELLADEV "Definitive release 4.0, first provisional release 4.1. BGH" */
/* *2    21-JAN-1989 11:12:31 ELLADEV "Provisional for Release 4.0 BGH" */
/* *1    17-JAN-1989 16:54:14 ELLADEV "first draft for Release 4.0, stored in CMS lib [elladev.cms.ella_server]""" */
/* DEC/CMS REPLACEMENT HISTORY, Element HANDLE.C */
/* HANDLE - Error handler module  (Header file = <handle.h>)           */
/* Routines for floating point exception error handling for section    */
/* 3.4.11 BIOPs of P029.40.4                                           */

/* Modified :   03:July:89  Definitions of SETUP_HANDLER and           */
/*                          RESET_HANDLER moved to handle.h            */
/*                                                          MHC        */
/*              30:Oct:91   I00154: Use longjump on all unix platforms */

#include <setjmp.h>

jmp_buf label;
int errEvt = 0;


#ifdef apollo
   int
#else
   void
#endif
HANDLER ()  /* The handler subroutine for SIGFPE      */
{
errEvt = 1;
longjmp (label,1);
}





















