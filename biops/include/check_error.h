/* $Id: check_error.h,v 34.2 1995/03/29 13:04:20 ella Exp $ */


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

#ifndef CHECK_ERROR_H
#define CHECK_ERROR_H
static char *sccsid_check_error_h = " $Id: check_error.h,v 34.2 1995/03/29 13:04:20 ella Exp $ ";
/* DEC/CMS REPLACEMENT HISTORY, Element CHECK_ERROR.H */
/* *7    20-OCT-1989 18:04:47 ELLADEV "Updated provisional with fixes for R4B511. BGH" */
/* *6    11-AUG-1989 15:04:50 ELLADEV "Updated provisional with fixes for R4B388. BGH" */
/* *5    10-AUG-1989 12:16:26 ELLADEV "Definitive release 4.0, first provisional release 4.1. BGH" */
/* *4    30-JUN-1989 17:13:01 ELLADEV "Updated provisional with fixes for R4B383. BGH" */
/* *3    26-JUN-1989 18:04:54 ELLADEV "Updated provisional with fixes for R4B380. BGH" */
/* *2    21-JAN-1989 11:08:11 ELLADEV "Provisional for Release 4.0 BGH" */
/* *1    17-JAN-1989 16:53:45 ELLADEV "first draft for Release 4.0, stored in CMS lib [elladev.cms.ella_server]""" */
/* DEC/CMS REPLACEMENT HISTORY, Element CHECK_ERROR.H */
/* CHECK_ERROR.h - Header file to provide MACRO routines to BIOPs         */
/* Checks format of f-p numbers to detect nonvalid bit patterns for       */  
/* section 3.4.11 BIOPs of P029.40.4                                      */

/* Changes :
             5:July:89   CHECKERROR1&2 return 2 on both VAX/VMS and ULTRIX  
                                                                       MHC
             17:0ct:89   Define CHECK_SPECI for all non-VAX.  R4B511.  PAR.
*/

/* Design: For catch-all error checking

   IF exponent part = all 0s
     IF fraction part = all 0s
       return query  (floating-point represents zero)
     ELSE
       return false  (floating-point represents denormalised numbers)
     ENDIF
   ELSE
     IF exponent part = all 1s
       return false  (floating-point represents infinity or Not-a-Number)
     ELSE
       return true  (floating-point represents real number)
     ENDIF
   ENDIF
*/

#ifdef vax

/* Redefine CHECK_ERROR1&2 to return twovalued_TRUE for VAX platform.    */
/* Operand range checks are done by the compiler/VAXVMS Operating System */
/* The same values are returned by these functions for ULTRIX platforms  */

#define CHECK_ERROR1(valptr) 2
#define CHECK_ERROR2(valptr) 2

#else          

/* Do manual range checking on non-VAX systems */

#define CHECK_ERROR1(valptr)(\
  (((*(int32*)(valptr)) & 0x7F800000) == 0x00000000)?\
    ((((*(int32*)(valptr)) & 0x007FFFFF) == 0x00000000)? 0:1)\
  :\
    ((((*(int32*)(valptr)) & 0x7F800000) == 0x7F800000)? 1:2)\
  )

#define CHECK_ERROR2(valptr)(\
  (((*(int32*)(valptr)) & 0x7FF00000) == 0x00000000)?\
    ( (((*(int32*)(valptr)) & 0x000FFFFF) == 0x00000000)&&\
       ((*((int32*)(valptr)+1)) == 0x00000000)? 0:1)\
  :\
    ((((*(int32*)(valptr)) & 0x7FF00000) == 0x7FF00000)? 1:2)\
  )


#endif  /* vax */


#ifndef vax

/* Design: For specific (Not-a-Number or Infinite) error checking
   This is not used at all for VAX, since an interrupt will be produced.

   IF exponent part = all 1s
     return true  (floating-point represents NaN or infinite)
   ELSE
     return false  (floating-point represents operateable on number)
   ENDIF
*/

#define CHECK_SPECI1(valptr)(\
  (( ((*(int32*)(valptr)) & 0x7F800000) == 0x7F800000)? TRUE:FALSE)\
  )

#define CHECK_SPECI2(valptr)(\
  (( ((*(int32*)(valptr)) & 0x7FF00000) == 0x7FF00000)? TRUE:FALSE)\
  )

#endif

#endif /* CHECK_ERROR_H */
