/* $Id: gt_real.c,v 34.2 1995/03/29 13:04:00 ella Exp $ */


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

static char *rcsid = " $Id: gt_real.c,v 34.2 1995/03/29 13:04:00 ella Exp $ ";

/* DEC/CMS REPLACEMENT HISTORY, Element GT_REAL.C */
/* *9    16-NOV-1989 11:55:32 ELLADEV "Updated provisional with fixes for R4B535. BGH" */
/* *8    20-OCT-1989 18:04:57 ELLADEV "Updated provisional with fixes for R4B511. BGH" */
/* *7    11-AUG-1989 15:05:00 ELLADEV "Updated provisional with fixes for R4B388. BGH" */
/* *6    10-AUG-1989 12:21:12 ELLADEV "Definitive release 4.0, first provisional release 4.1. BGH" */
/* *5    30-JUN-1989 17:13:35 ELLADEV "Updated provisional with fixes for R4B383. BGH" */
/* *4    26-JUN-1989 18:06:01 ELLADEV "Updated provisional with fixes for R4B380. BGH" */
/* *3    17-FEB-1989 17:17:09 ELLADEV "Updated provisional with partial fixes for R4B043. BGH" */
/* *2    21-JAN-1989 11:12:23 ELLADEV "Provisional for Release 4.0 BGH" */
/* *1    17-JAN-1989 16:54:06 ELLADEV "first draft for Release 4.0, stored in CMS lib [elladev.cms.ella_server]""" */
/* DEC/CMS REPLACEMENT HISTORY, Element GT_REAL.C */
/************************************************************************/

/*     GT_REAL
       *******

Description:
    Greater than comparison on reals

Inputs:
    The input operands are described by
    M = m_addr and
    N = n_addr
    Query values are indicated by the m_known and/or n_known inputs
    being FALSE.

Outputs:
    The result is stored at &r_addr[0], and is a 2valued type having values:
    0 for query,
    1 for FALSE,
    2 for TRUE.

Workspace required: None

Design: See in-line comments

Modifications : 1) Restructuring of code to force biop to return
                   a default result if arithmetic exceptions occur.
                                                      11:June:89 MHC

                2) Calls enabling vaxVMS floating point underflows.
                                                      20:June:89 MHC
             
                3) Calls to ULTRIX exception handling procedures added.
                                                       1:July:89 MHC
                4) Inputs now checked with CHECK_SPECI -- not on vax.  R4B511.
                                                      17:Oct:89  PAR.
                5) Correct default value from false to query for
                   ULTRIX.                            17:Oct:89  SPT.


*/

#include "biops.h"
#include "size_switch.h"
#include "check_error.h"
#include "handle.h"

#if SIZE==1
void GT_REAL_1
#else
void GT_REAL_2
#endif
(m_known, m_addr, n_known, n_addr, r_addr, wrkspc)
   
   unsigned char  *r_addr, *wrkspc;
   SIZETYPE       *m_addr, *n_addr;
   BOOL           m_known, n_known;
   
{
#define tv_result r_addr

/* Force return of default result for unknown input. */

   *(tv)tv_result  = twovalued_QUERY;

/* Enable floating point underflows to cause faults on vax */

  enable_flt_underflows;


if (n_known && m_known
#ifndef vax
    && !(CHECK_SPECI(n_addr)) && !(CHECK_SPECI(m_addr))
#endif
   )
   {

      /* Otherwise calculate answer */

 ULTRIX_FPE_GUARD

      if (*m_addr > *n_addr)
        {
          *(tv)tv_result  = twovalued_TRUE;
        }
      else
        {
          *(tv)tv_result  = twovalued_FALSE;
        }

 ULTRIX_FPE_GUARD_END


   }

/* Return answer */

return;

}
