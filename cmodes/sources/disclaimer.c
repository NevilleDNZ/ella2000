          /*          disclaimer print module       */

#include "config.h"

CF_MODULE( disclaimer_init, \
    "$Id: disclaimer.c,v 2.2 1995/03/29 13:05:16 ella Exp $" )


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

                         Crown Copyright, (c)   1995

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
21:03:95   1.001  DJS   Module to print the DRA(Malvern) disclaimer from C
                        programs.
29:03:95   2.002  ELLA  Change copyright header
??:??:??   ?.???  ????
*/

#include <stdlib.h>
#include <stdio.h>

#include "fault.h"
#include "utilities.h"
#include "disclaimer.h"


static char *disclaimer[] = {"",
"                         Crown Copyright, (c)   1995",
"",
"                             All rights reserved.",
"",
"    The Secretary of State for Defence (United Kingdom) acting through his",
"    Defence Research Agency (DRA) gives no warranty that any element of the",
"    Software is suitable for any purpose and he shall not be liable for any",
"    loss or damage including loss or damage resulting in injury or death",
"    howsoever caused which results from the use of the Software, or any",
"    developments adaption modifications translations and enhancements",
"    thereof.",
"",
                              NULL };

extern void print_disclaimer( int pause)
{   int i = 0;
    char *tmpstr;
    char buffer[ 20 ];
    while(( tmpstr = disclaimer[i] ) != NULL )
    {  i++;
       printf( "%s\n", tmpstr );
    }
    if( pause ) prompt( "Press RETURN to continue > ", buffer );
    return;
}
