/* $Id: toolkit_internal.h,v 34.2 1995/03/29 13:04:24 ella Exp $ */


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
                                  system old version was 2.4 
29:03:95  34.002  ELLA  Modcprght Change copyright header
??:??:??   ?.???  ????
*/

#ifndef TOOLKIT_INTERNAL_H

static char toolkit_internal_h[] = "$Id: toolkit_internal.h,v 34.2 1995/03/29 13:04:24 ella Exp $";

#define TOOLKIT_INTERNAL_H

/* Include file for ACI definitions */

#include "alien.h"

/* Include files for EPI definitions */

#include "epi.h"
#include "epi_internal.h"
#include "epi_dpc.h"

/* Include files for Global Alien Code variables */

#include "init_toolkit.h"

/* Include files for string, memory and IO functions */

#include <string.h>
#include <stdio.h>

/* memcpy etc are defined in string.h on VMS, and memory.h on Unix */
#if unix
#include <memory.h>
#endif

/* 

       *******  THIS MODULE IS PART OF THE ALIEN CODE TOOLKIT  *******

      Toolkit_internal.h is a header module for the Alien Code Toolkit.
     
      It is included by each of the toolkit source files and keeps the
      representations of some toolkit macros PRIVATE from Alien Code
      users.

                                                      MHC  7-Nov-1989

*/

extern char *getenv();   /* Reads shell environment variables */

typedef int WORDSIZE;    /* The wordsize on this machine */

#define SIZEUNIT 4       /* Value of sizeunit in bytes */

#define QUERY 0          /* Value of a signal query flag */

/* Macros used to index into the Alien Code instance data table */

#define NINPUTS 1

#define table_input_size(INSTANCE)      INSTANCE[NINPUTS]
#define table_instance_id(INSTANCE)     INSTANCE[2+table_input_size(INSTANCE)]
#define table_symtable_index(INSTANCE)  INSTANCE[3+table_input_size(INSTANCE)]
#define table_history_size(INSTANCE)    INSTANCE[4+table_input_size(INSTANCE)]
#define table_workspace_size(INSTANCE)  INSTANCE[5+table_input_size(INSTANCE)]
#define table_workspace_ptr(INSTANCE)   INSTANCE[6+table_input_size(INSTANCE)]
#define table_output_frozen(INSTANCE)   INSTANCE[7+table_input_size(INSTANCE)]
#define table_init_flag(INSTANCE)       INSTANCE[8+table_input_size(INSTANCE)]
#define table_output_area(INSTANCE)     INSTANCE[9+table_input_size(INSTANCE)]

/* End of Instance Data Table Macros */

#define	NULL_PTR(t)	((t *)0)

/*
  VMS Algol 68 requires parameters passed by reference.
  The default in VAX C is to pass by value.

  A68VAL is used where the required parameter already has an address.
  A68TEMPVAL is used where a temporary location is required to hold the parameter value.
*/
#ifdef vaxc
#define A68VAL(val) (&(val))
#define A68TEMPVAL(val,temp) (temp=(val),&(temp))
#else
#define A68VAL(val) (val)
#define A68TEMPVAL(val,temp) (val)
#endif

#endif  /* TOOLKIT_INTERNAL_H */



