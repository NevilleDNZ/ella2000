/* $Id: epi_config.h,v 34.2 1995/03/29 13:04:21 ella Exp $ */


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
$OldLog:	epi_config.h,v $
 * Revision 2.1  91/02/25  12:08:38  miker
 * Candidate release 5
 * 
 * Revision 1.1  90/04/17  15:13:05  aap
 * Initial revision
 * 
*/
/* DEC/CMS REPLACEMENT HISTORY, Element EPI_CONFIG.H */
/* *3    10-AUG-1989 14:53:30 ELLADEV "Definitive release 4.0, first provisional release 4.1. BGH" */
/* *2    21-JAN-1989 11:40:53 ELLADEV "Provisional for Release 4.0 BGH" */
/* *1    10-NOV-1988 11:56:59 ELLADEV "New for Release 4, stored in CMS lib [elladev.cms.epi]" */
/* DEC/CMS REPLACEMENT HISTORY, Element EPI_CONFIG.H */
#ifndef EPI_CONFIG
#define EPI_CONFIG
/*
*******************************************************************************
				Praxis Systems plc

Module	      :	ELLA Procedural Interface (EPI) user-configurable definitions

File          :	epi_config.h
		
Description   :	This header file is provided for the EPI Library user. It
		contains EPI definitions which may be modified to reconfigure
		the interface.


Changes History

   02.06.88	New module for EPI Version 0. BGH
   10.10.88	Implement actions from Code Review n035.7.47. BGH

*******************************************************************************
*/

/* RcsId[] = "$Id: epi_config.h,v 34.2 1995/03/29 13:04:21 ella Exp $" */

#define EPI_DIAG_FILE     "epi.log"	/* name of file used for diagnostics */

#define EPI_MAX_RECURSION 10		/* maximum level of recursion for */
					/* EPI functions                  */

#define EPI_MAX_MESSAGE_LISTS 10	/* maximum number of EPI status  */
					/* message lists which can be in */
    					/* existence at any given time   */

/* end */
#endif
