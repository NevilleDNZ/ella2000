/* $Id: Ahostenv.h,v 34.2 1995/03/29 13:01:02 ella Exp $ */


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

                         Crown Copyright, (c)   1994

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

14:12:94  33.001  ELLA   Porting    Created to hide ANSI / PC differences under
                                   emx. 
29:03:95  34.002  ELLA  Modcprght Change copyright header
??:??:??   ?.???  ????
*/

/*   Host specific definitions for oserrors, osmisc and ossignals   */

#ifndef Ahostenv_h
#define Ahostenv_h

/*	SunOS under POSIX	*/

#define _POSIX_SOURCE

#include <stdlib.h>
#include <time.h>

#ifndef TCC
#include <floatingpoint.h>
#endif

/* define default vector / array descriptor mark in Aalloc.h */

#define A_GCMRKBASE_DEFAULT

extern time_t time(); 
extern int system();

#endif
