/* $Id: range_s.c,v 34.2 1995/03/29 13:04:10 ella Exp $ */


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

static char *rcsid = " $Id: range_s.c,v 34.2 1995/03/29 13:04:10 ella Exp $ ";

/* DEC/CMS REPLACEMENT HISTORY, Element RANGE_S.C */
/* *6    10-AUG-1989 12:32:22 ELLADEV "Definitive release 4.0, first provisional release 4.1. BGH" */
/* *5    30-JUN-1989 17:15:25 ELLADEV "Updated provisional with fixes for R4B383. BGH" */
/* *4    26-JUN-1989 18:07:28 ELLADEV "Updated provisional with fixes for R4B380. BGH" */
/* *3    17-FEB-1989 17:18:05 ELLADEV "Updated provisional with partial fixes for R4B043. BGH" */
/* *2    21-JAN-1989 11:22:12 ELLADEV "Provisional for Release 4.0 BGH" */
/* *1    17-JAN-1989 16:54:55 ELLADEV "first draft for Release 4.0, stored in CMS lib [elladev.cms.ella_server]""" */
/* DEC/CMS REPLACEMENT HISTORY, Element RANGE_S.C */
/*************************************************************************/
/* 29:06:89  Changes for VAX.  SPT.
 */

/*     RANGE_S
       ********
Description:
     Convert between one range of signed bit string and another. If the input
     can be represented as an m bit unsigned integer then the two valued
     output is true, and the bit string M is that representation; otherwise
     the first value is false and the second query;

Inputs:
    The input operand is described by the triple
    N = <n_addr, n_offset, n_len>.
    Its query value is indicated by the n_known input being FALSE.
    The m_len input is used to specify the length of the output string.

Outputs:
    The result is stored in a 2valued type in &m_addr[0], followed
    by the query flag for the output at &m_addr[tvsize], and the bit string
    described by the triple M = < &m_addr[tvsize+qfsize], 0, m_len>.

    Values for 2valued type are:-
    0 - query,
    1 - FALSE,
    2 - TRUE.

Workspace required: NONE:

Design:
 *
 * range_s
 * convert n-bit string to m-bit string (signed)
 * bit N[n]   - input bit string
 * bit M[m]   - output bit string
 *
 * ASSERT: least_sig_bit(N) == 1 && most_sig_bit(N) == n &&
 *         least_sig_bit(M) == 1 && most_sig_bit(M) == m &&
 *         sign_bit == N[n] &&
 *         min_val(M) == -(2**(m-1)) && max_val(M) == (2**(m-1))-1
 *
 * if (n<=m)
 *   {
 *     ASSERT min_val(M) <= (signed)N && (signed)N <= max_val(M)
 *     M[1..n] = N[1..n];
 *     M[n+1..m] = sign_bit;
 *     m_known = TRUE;
 *   }
 * else
 *  if (top_bits_same_as_sign(sign_bit, N[m..n]))
 *   {
 *     ASSERT min_val(M) <= (signed)N && (signed)N <= max_val(M)
 *     M[1..m] = N[1..m];
 *     m_known = TRUE;
 *   }
 *  else
 *    m_known = FALSE;
 * ASSERT: if (min_val(M) <= (signed)N && (signed)N <= max_val(M))
 *         then
 *            (signed)M == (signed)N &&
 *            m_known == TRUE;
 *         else
 *            m_known == FALSE;
 */

#include "biops.h"

void 
RANGE_S(n_known, n_addr, n_offset, n_len, 
	m_len, m_addr)
	unsigned char  *n_addr, *m_addr;
	BOOL            n_known;
	int             n_offset, n_len, m_len;
{
#define tv_result m_addr
#define qf_result qfalign(tv_result + tvsize)
#define bs_result bsalign(qf_result + qfsize)

	offswitch(n_addr, n_offset, n_len)

	if (!n_known) {
		*(tv)tv_result = twovalued_QUERY;
		*(qf)qf_result  = FALSE;
		return;
	}
	if (n_len <= m_len) {
		adjust_input(n_addr, n_offset, n_len,
		   adjustaddress(bs_result, (m_len + 7)/8), m_len, TRUE);
		*(tv)tv_result = twovalued_TRUE;
		*(qf)qf_result = TRUE;
	} else if (top_bits_same_as_sign(n_addr, n_offset, n_len, n_len - m_len)) {
		adjust_input(n_addr, n_offset + (n_len - m_len),
		   m_len, adjustaddress(bs_result, (m_len + 7)/8), m_len, TRUE);
		*(tv)tv_result = twovalued_TRUE;
		*(qf)qf_result  = TRUE;
	} else {
		*(tv)tv_result = twovalued_FALSE;
		*(qf)qf_result  = FALSE;
	}
}
