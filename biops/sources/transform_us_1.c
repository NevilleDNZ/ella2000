/* $Id: transform_us_1.c,v 34.2 1995/03/29 13:04:16 ella Exp $ */


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

static char *rcsid = " $Id: transform_us_1.c,v 34.2 1995/03/29 13:04:16 ella Exp $ ";

/* DEC/CMS REPLACEMENT HISTORY, Element TRANSFORM_US_1.C */
/* *7    14-DEC-1989 10:40:04 ELLADEV "Updated provisional with fixes for R4B548. IM" */
/* *6    10-AUG-1989 12:35:51 ELLADEV "Definitive release 4.0, first provisional release 4.1. BGH" */
/* *5    30-JUN-1989 17:16:07 ELLADEV "Updated provisional with fixes for R4B383. BGH" */
/* *4    26-JUN-1989 18:08:27 ELLADEV "Updated provisional with fixes for R4B380. BGH" */
/* *3    17-FEB-1989 17:18:47 ELLADEV "Updated provisional with partial fixes for R4B043. BGH" */
/* *2    21-JAN-1989 11:24:36 ELLADEV "Provisional for Release 4.0 BGH" */
/* *1    17-JAN-1989 16:55:30 ELLADEV "first draft for Release 4.0, stored in CMS lib [elladev.cms.ella_server]""" */
/* DEC/CMS REPLACEMENT HISTORY, Element TRANSFORM_US_1.C */
/*************************************************************************/
/* 29:06:89  Changes for VAX.  SPT.
 */

/*     TRANSFORM_US_1
       **************
Description: 
    Convert an unsigned bit string to an ELLA integer, if the input
    value falls outside the range of the ELLA integer, Query is returned.
 
Inputs:  
    The input operand is described by the triple
    N = <n_addr, n_offset, n_len> and
    Query value is indicated by the n_known input
    being FALSE. 
    The range of the ELLA integer is specified by the r_lwb and r_upb
    parameters.

Outputs: 
    The result is stored in a 2valued type at &r_addr[0], followed
    by the query flag for the output at &r_addr[tvsize], and the ELLA integer
    at &r_addr[tvsize+qfsize]

    Values for 2valued type are:-
    0 - query,
    1 - FALSE,
    2 - TRUE.

Notes:
    An Ella integer is a signed, two's complement number occupying 4 bytes.

    Workspace required: None

Design:
 *
 * TRANSFORM_US_1 (N,r_lwb,r_upb R)
 * convert unsigned n-bit string to ELLA integer
 * bit N[n]   - input bit string
 * ELLA_int R - output ELLA integer
 * int r_lwb, r_upb - range of valid values of R
 *
 * ASSERT: least_sig_bit(N) == 1 && most_sig_bit(N) == n &&
 *         min_val(N) == 0 && max_val(N) == (2**n)-1 
 *
 * if (r_upb <0) r_in_range = FALSE
 * else
 *  {
 *
 *    ASSERT: min_val(R) == 0 &&
 *            max_val(R) == (2**(32-1))-1 &&
 *            max_val(R) >= r_upb
 *
 *    if (n < 32) 
 *     { 
 *       ASSERT (unsigned)N <= max_val(R)
 *       R[1..n] = N[1..n];
 *       R[n+1..r_bit_len] = 0;
 *       r_in_range = ((signed)R <= r_upb) && ((signed)R >= r_lwb);
 *     }   
 *   else 
 *      if (top_bits_clear(N[32..n]))
 *       { 
 *         ASSERT  (unsigned)N <= max_val(R)
 *         R[1..32] = N[1..32];
 *         r_in_range = ((signed)R <= r_upb) && ((signed)R >= r_lwb);
 *       }
 *      else 
 *         r_in_range = FALSE;
 *
 *   if (r_in_range != TRUE) (signed)R = ?
 *  }
 *
 * ASSERT: 
 *        if (!n_known) 
 *        then
 *          r_in_range == ? &&
 *          r_known == FALSE
 *        else          
 *          if ( r_lwb <= (unsigned)N && (unsigned)N <= r_upb)
 *          then 
 *             (signed)R == (unsigned)N && 
 *             r_in_range == TRUE &&
 *             r_known == TRUE
 *          else
 *             r_in_range == FALSE &&
 *             r_known == FALSE
 *             
 */

/* function top_bits_clear 
 * only returns TRUE if all most significant bits
 * within the bit string are zero.
 * The number of bits to check is specified by no_bits.
*/

#include "biops.h"

void TRANSFORM_US_1 (n_known, n_addr, n_offset, n_len, 
                      r_lwb, r_upb, r_addr)
unsigned char n_addr[], r_addr[];
BOOL n_known;
int n_offset, n_len, r_lwb, r_upb;
{
#define tv_result r_addr
#define qf_result qfalign(tv_result + tvsize)
#define bs_result bsalign(qf_result + qfsize)

  offswitch(n_addr, n_offset, n_len)

  if (!n_known)
    {
      *(tv)tv_result = twovalued_QUERY;
      *(qf)qf_result = FALSE;
      return;
    }

  if (r_upb < 0)
    {
      *(tv)tv_result = twovalued_FALSE;
      *(qf)qf_result  = FALSE;
      return;
    }
    
  if (n_len < 32)
    { 
      /* copy bit string input, zero extended into C int format in 
         result space, test this aginst ELLA-int bounds */
      adjust_input (n_addr, n_offset, n_len, bs_result, 32, FALSE);
      *(tv)tv_result = (((*(int *)bs_result) <= r_upb) && ((*(int *)bs_result) >= r_lwb))?
             twovalued_TRUE:  twovalued_FALSE;
     }
  else
    if (top_bits_clear(n_addr, n_offset, n_len, n_len - 32 +1))
      { 
        /* convert to C int & range check as above */
        adjust_input (n_addr, n_offset + (n_len - 32),
                        32, bs_result, 32, FALSE);

        *(tv)tv_result = (((*(int *)bs_result) <= r_upb) &&
                         ((*(int *)bs_result) >= r_lwb))?
                          twovalued_TRUE:  twovalued_FALSE;
      }
    else
       *(tv)tv_result = twovalued_FALSE;

    *(qf)qf_result = (*(tv)tv_result == twovalued_TRUE)? TRUE: FALSE;
}

