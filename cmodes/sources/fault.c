
              /* fault trap routine */

#define _POSIX_SOURCE 1

#include <stdio.h>

#include "config.h"
#include "fault.h"

CF_MODULE( fault_init, \
    "$Id: fault.c,v 2.2 1995/03/29 13:36:00 ella Exp $" )


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
17:06:94   1.001  DJS   InsUtils  Insert into database prior to full
                                  configuration of configuratrion system. 

29:03:95   2.002  ELLA  Modcprght Change copyright message
??:??:??   ?.???  ????
*/

void panic( char *filename, int line, char *reason )
{   (void)fprintf( stderr, "\n?Panic in line %d of file %s\n", line, filename );
    (void)perror( reason );
    abort();
}

void fault( char *filename, int line, char *reason )
{   (void)fprintf( stderr,
               "\nProgram fault detected at line %d of file %s\nMessage:- %s\n",
                  line, filename, reason );
    abort();
}
