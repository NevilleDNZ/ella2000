/* $Id: init_toolkit.h,v 34.2 1995/03/29 13:04:23 ella Exp $ */


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

#ifndef INIT_TOOLKIT_H

static char init_toolkit_h[] = "$Id: init_toolkit.h,v 34.2 1995/03/29 13:04:23 ella Exp $";

#define INIT_TOOLKIT_H

/*
    TOOLKIT INITIALISATION DATA
*/

extern int output_type_check_on;

/* For the global memory offset */

extern char *global_pointer;
extern unsigned *ella_time;

/* For the C functions calling ALGOL68 toolkit support procedures */

extern A68_EPI_TYPE    (*get_epi_input_type) ();
extern A68_EPI_TYPE    (*get_epi_output_type) ();
extern A68_EPI_TYPE    (*aci_to_epi_type) ();
extern unsigned        (*get_output_size) ();
extern unsigned        (*get_input_size) ();
extern char            (*((*get_encoded_output)()));
extern void            (*output) ();



#endif  /* INIT_TOOLKIT_H */

