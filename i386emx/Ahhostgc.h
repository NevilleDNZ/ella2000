/* $Id: Ahhostgc.h,v 34.3 1995/03/29 13:00:56 ella Exp $ */


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

14:12:94  33.001  ELLA   Porting    PC    Created to hide ANSI / PC differences
                                   under emx.  DCT 
31:01:95  33.002  DCT   PCPort-1  Install INIT_AREA and NEXT_AREA for i386 PC.
29:03:95  34.003  ELLA  Modcprght Change copyright header
??:??:??   ?.???  ????
*/

/*   Host specific definitions for garbage collector   */

#ifndef Ahhostgc_h
#define Ahhostgc_h

#include <stdio.h>

/*	i386emx  	*/

/*      Get first and subsequent AREAs to be traced for heap references   */

extern void *Agc_trace_memory;    /* from Ahcollect.c */
extern void *Agc_collect_frame;   /* from Ahcollect.c */
extern void *Agc_main_frame;      /* from Ahcollect.c */

#define PRINT_AREA(area) \
{ printf( "AREA:  base = %lx, size = %ld\n", \
          (unsigned long)((area).addr), (long int)((area).size) ); }

#define INIT_AREA(area) \
   { INIT_STATIC_AREA(area); PRINT_AREA(area); }

#define NEXT_AREA(area)                                   \
{ /* printf("%lx  %lx\n", (unsigned long)((void*)&((area).addr)), \
          (unsigned long)Agc_collect_frame); */           \
  if (Agc_trace_memory != (void *)NULL)                   \
     { (area).addr = NIL; (area).size = (SIZE)0; }        \
  else                                                    \
     { Agc_trace_memory = Agc_collect_frame;  /* anything other than NULL */ \
       (area).addr = Agc_collect_frame;                   \
       (area).size = (SIZE)( (char *)Agc_main_frame -     \
                             (char *)Agc_collect_frame ); \
     }                                                    \
  PRINT_AREA(area);                                       \
}

#endif

