/* $Id: size_switch.h,v 34.2 1995/03/29 13:04:23 ella Exp $ */


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

#ifndef SIZE_SWITCH_H
#define SIZE_SWITCH_H
static char *sccsid_size_switch_h = " $Id: size_switch.h,v 34.2 1995/03/29 13:04:23 ella Exp $ ";
/* DEC/CMS REPLACEMENT HISTORY, Element SIZE_SWITCH.H */
/* *4    20-OCT-1989 18:05:04 ELLADEV "Updated provisional with fixes for R4B511. BGH" */
/* *3    10-AUG-1989 12:34:36 ELLADEV "Definitive release 4.0, first provisional release 4.1. BGH" */
/* *2    21-JAN-1989 11:23:38 ELLADEV "Provisional for Release 4.0 BGH" */
/* *1    17-JAN-1989 16:54:59 ELLADEV "first draft for Release 4.0, stored in CMS lib [elladev.cms.ella_server]""" */
/* DEC/CMS REPLACEMENT HISTORY, Element SIZE_SWITCH.H */

/* SIZE_SWITCH.h - Header file for size macros                         */
/* Macros to define size of reals in a routine for section             */
/* 3.4.11 BIOPs of P029.40.4                                           */
/* 19.10.89 Remove guards from CHECK_SPECI.  Needs to be available always.
 *          SPT pp PAR.
 */

#if SIZE==1
#define SIZETYPE float 
#define CHECK_ERROR CHECK_ERROR1
#define CHECK_SPECI CHECK_SPECI1
#else
#define SIZETYPE double
#define CHECK_ERROR CHECK_ERROR2
#define CHECK_SPECI CHECK_SPECI2
#endif

#endif /* SIZE_SWITCH_H */
