/* $Id: handle.h,v 34.2 1995/03/29 13:04:22 ella Exp $ */


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

#ifndef HANDLE_H
#define HANDLE_H
static char *sccsid_handle_h = " $Id: handle.h,v 34.2 1995/03/29 13:04:22 ella Exp $ ";
/* DEC/CMS REPLACEMENT HISTORY, Element HANDLE.H */
/* *7    30-AUG-1989 11:40:52 ELLADEV "Updated provisional with fixes for R4B457. BGH" */
/* *6    11-AUG-1989 15:05:07 ELLADEV "Updated provisional with fixes for R4B388. BGH" */
/* *5    10-AUG-1989 12:21:25 ELLADEV "Definitive release 4.0, first provisional release 4.1. BGH" */
/* *4    30-JUN-1989 17:13:39 ELLADEV "Updated provisional with fixes for R4B383. BGH" */
/* *3    26-JUN-1989 18:06:04 ELLADEV "Updated provisional with fixes for R4B380. BGH" */
/* *2    21-JAN-1989 11:12:33 ELLADEV "Provisional for Release 4.0 BGH" */
/* *1    17-JAN-1989 16:54:16 ELLADEV "first draft for Release 4.0, stored in CMS lib [elladev.cms.ella_server]""" */
/* DEC/CMS REPLACEMENT HISTORY, Element HANDLE.H */
/* HANDLE.h - Header file for f-p exception handling routines          */
/* Types and forward declarations for routines in header.c for section */
/* 3.4.11 BIOPs of P029.40.4                                           */

/* Modified :  11:June:89  Added code to enable floating point underflow */
/*                         to cause faults on VAX/VMS.              MHC  */
/*                                                                       */
/*             03:July:89  Code added allowing SIGFPE signals to be      */
/*                         caught on ULTRIX and Apollo BUT SIGILL is     */
/*                         caught only on ULTRIX (Reserved operand fault)*/
/*                                                                  MHC  */
/*             14:Aug:89   Made errEvt external for all but VMS. MDR.    */
/*             30:Oct:91   I00154: All unix platforms now use sigvec &   */
/*                         setjmp to catch FPEs. This was only really    */
/*                         required for SR10.3.                          */

#ifdef VAXC

/* VAX/VMS Library service calls to enable floating */
/* point underflows to cause faults.                */

extern lib$flt_under();
static unsigned char enable = '\001';
static unsigned int call_result;

#define enable_flt_underflows  call_result = lib$flt_under(&enable)

#else

/* Redefine enable_flt_underflows as null for non-VAX installations */

#define enable_flt_underflows  

extern int errEvt;

#endif     /* VAXC */


#ifndef VAX      /* sigvec now used on apollo ultrix sun3 sun4 */
#include <setjmp.h>
#include <signal.h>

#ifdef apollo
extern int HANDLER();
#else
extern void HANDLER();
#endif

struct   sigvec newVecFPE,newVecILL,oldVecFPE,oldVecILL;
extern jmp_buf label;

#ifdef ultrix                                                    
 /* Enable SIGILL catch for ULTRIX reserved operand faults */     
#define sigill_set  sigvec(SIGILL,&newVecILL,&oldVecILL);    
#else
#define sigill_set 
#endif /* ultrix */                                              

#define ULTRIX_FPE_GUARD  \
  errEvt = 0;                                                    \
  newVecFPE.sv_handler = HANDLER;                                \
  newVecFPE.sv_mask = 0;                                         \
  newVecFPE.sv_onstack = 0;                                      \
  newVecILL.sv_handler = HANDLER;                                \
  newVecILL.sv_mask = 0;                                         \
  newVecILL.sv_onstack = 0;                                      \
  sigvec(SIGFPE,&newVecFPE,&oldVecFPE);                          \
  sigill_set                                                     \
                                                                 \
                                                                 \
                                                                 \
                          if (!setjmp(label))                    


#ifdef ultrix                                              
/* Reset SIGILL catch for ULTRIX reserved operand faults */      
#define sigill_reset sigvec(SIGILL,&oldVecILL,&newVecILL);
#else
#define sigill_reset
#endif  /* ultrix */                                            



#define ULTRIX_FPE_GUARD_END  \
                                                                 \
  sigvec(SIGFPE,&oldVecFPE,&newVecFPE);                          \
  sigill_reset

#else

/* Change definitions to null if not ULTRIX */

#define ULTRIX_FPE_GUARD
#define ULTRIX_FPE_GUARD_END

#endif  /* VAX */

#endif /* HANDLE_H */
