/* $Id: init_toolkit.c,v 34.2 1995/03/29 13:04:02 ella Exp $ */


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

#ifndef INIT_TOOLKIT_C

static char rcsid[] = "$Id: init_toolkit.c,v 34.2 1995/03/29 13:04:02 ella Exp $";

#define INIT_TOOLKIT_C

/* Include files for private Alien Code functions and macros */

#include "toolkit_internal.h"


/*
       *******  THIS MODULE IS PART OF THE ALIEN CODE TOOLKIT  *******

   Init_toolkit.c defines the routines that provide access to the Algol68 
   toolkit support kernal module. These routines provide low-level access
   to simulator data structures.

      
                                                          MHC  7-Nov-1989
*/

/* This variable is a flag for the toolkit routine. If an environment */
/* variable ELLA_ALIEN_OUTPUT_CHECK is set then type checking in aci_ */
/* set_output is turned off.                                          */

int output_type_check_on = 1;  /* default = ON */

/* For the global memory offset */

char *global_pointer;
unsigned *ella_time;

/* For the C functions calling ALGOL68 toolkit support procedures */

A68_EPI_TYPE    (*get_epi_input_type) ();
A68_EPI_TYPE    (*get_epi_output_type) ();
A68_EPI_TYPE    (*aci_to_epi_type) ();
unsigned        (*get_output_size) ();
unsigned        (*get_input_size) ();
void            (*output) ();
char           *((*get_encoded_output) ());

/*
    Initialisation of the toolkit.

    This function is called from the simulator to allow the setting up
    of data structures in C.  Its major use is to enable alien code to
    call back into Algol 68 indirectly through function pointers (exactly
    like EPI does). 
    Also read the type-check environment variable and set the type-check 
    flag accordingly.

*/

void aci_initialise(a68_global_pointer,a68_ella_time)
char *a68_global_pointer;
unsigned *a68_ella_time;
{
  global_pointer = a68_global_pointer;
  ella_time = a68_ella_time;
  output_type_check_on = (getenv("ELLA_ALIEN_OUTPUT_CHECK") == NULL);
}



/*
   Initialisation of the C functions calling on ALGOL68 toolkit support
   routines. These are set up in the same way as described above.
*/

void aci_initialise_procs (a68_aci_to_epi_type, a68_get_epi_input_type, 
                           a68_get_epi_output_type, a68_get_input_size,
                           a68_get_output_size, a68_output, 
			   a68_get_encoded_output
			   )

A68_FN_DESC a68_aci_to_epi_type, a68_get_epi_input_type, 
            a68_get_epi_output_type, a68_get_input_size,
            a68_get_output_size, a68_output, a68_get_encoded_output;

{
   aci_to_epi_type     = (A68_EPI_TYPE (*)()) (A68_FN_PTR (a68_aci_to_epi_type));
   get_epi_input_type =  (A68_EPI_TYPE (*)()) (A68_FN_PTR (a68_get_epi_input_type));
   get_epi_output_type = (A68_EPI_TYPE (*)()) (A68_FN_PTR (a68_get_epi_output_type));
   get_input_size      = (unsigned (*)()) A68_FN_PTR (a68_get_input_size);
   get_output_size     = (unsigned (*)()) A68_FN_PTR (a68_get_output_size);
   output              = (void (*)()) A68_FN_PTR (a68_output);
   get_encoded_output  = (char *(*) ()) A68_FN_PTR (a68_get_encoded_output);
   
 }


#endif  /* INIT_TOOLKIT_C */


