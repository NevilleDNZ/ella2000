/* $Id: misc_toolkit.c,v 34.2 1995/03/29 13:04:05 ella Exp $ */


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

#ifndef MISC_TOOLKIT_C

static char rcsid[] = "$Id: misc_toolkit.c,v 34.2 1995/03/29 13:04:05 ella Exp $";

#define MISC_TOOLKIT_C

/* Include files for private Alien Code functions and macros */

#include "toolkit_internal.h"


/*
       *******  THIS MODULE IS PART OF THE ALIEN CODE TOOLKIT  *******

   Misc_toolkit.c defines the toolkit routines that return miscellaneous
   information about the ELLA system.
     
   These routines are defined in Section 6 of E.N0045.50.13 - The Alien
   Code Toolkit Specification.

   Some parts of the code are only expected to be executed in exceptional
   circumstances such as simulator data corruption - these are commented
   as *** Defensive ***.

                                                          MHC  7-Nov-1989
*/


/*******                TOOLKIT ROUTINES BEGIN HERE                    *******/



/***************************************************************************/
/*                                                                         */
/*                              ACI_TIME                                   */
/*                      Return current ella time.                          */


unsigned aci_time()
{
    return *ella_time;
}




/***************************************************************************/
/*                                                                         */
/*                             ACI_LOG                                     */
/* Log the contents of the buffer to the screen, ELLA log and output files */


void aci_log (buffer, l)
char *buffer;
unsigned l;
{
   (*output) (buffer, A68VAL(l));
}



#endif  /* MISC_TOOLKIT_C */
