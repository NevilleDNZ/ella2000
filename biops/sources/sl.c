/* $Id: sl.c,v 34.2 1995/03/29 13:04:12 ella Exp $ */


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

static char *rcsid = " $Id: sl.c,v 34.2 1995/03/29 13:04:12 ella Exp $ ";

/* DEC/CMS REPLACEMENT HISTORY, Element SL.C */
/* *6    10-AUG-1989 12:34:39 ELLADEV "Definitive release 4.0, first provisional release 4.1. BGH" */
/* *5    30-JUN-1989 17:15:31 ELLADEV "Updated provisional with fixes for R4B383. BGH" */
/* *4    26-JUN-1989 18:07:36 ELLADEV "Updated provisional with fixes for R4B380. BGH" */
/* *3    17-FEB-1989 17:18:11 ELLADEV "Updated provisional with partial fixes for R4B043. BGH" */
/* *2    21-JAN-1989 11:23:41 ELLADEV "Provisional for Release 4.0 BGH" */
/* *1    17-JAN-1989 16:55:01 ELLADEV "first draft for Release 4.0, stored in CMS lib [elladev.cms.ella_server]""" */
/* DEC/CMS REPLACEMENT HISTORY, Element SL.C */
/*************************************************************************/
/* 29:06:89  Changes for VAX.  SPT.
 */

/*     SL
       ********
Description:
     Bit shift left

Inputs:
    The input operand is described by the triple
    M = <m_addr, m_offset, m_len> and the number of bits to shift in p.
    Query value is indicated by the m_known input
    being FALSE.

Outputs:
    The result bit-string is stored at &r_addr[qfsize],
    &r_addr[0] being the 'known' flag start address.

Workspace required: NONE

Design:
 *
 * ASSERT p >= 0
 *
 * SL (M,p,R)
 * shift left p bits
 * bit M[m] - input bit string
 * bit R[m+p] - result bit string
 *
 * if (bit pattern)M == ?
 *    (bit pattern)R = ?
 * else
 * {
 *   R = adjust_input(M);
 *   ASSERT: ms_bit(M)==1 && ls_bit(M)=m &&
 *           bit_len(R) == m+p &&
 *           M[1..m] == R[1..m] &&
 *           (unsigned)R[m+1..m+p] == 0
 * }
 * ASSERT if (bit pattern)M == ?
 *        then (bit pattern)R == ?
 *        else (unsigned)R == (unsigned)M * (2**p) &&
 *             bit_length(R) == bit_length(M)+p
 *
 */

#include "biops.h"

void
SL(m_known, m_addr, m_offset, m_len, p,
   r_addr, wrkspc)
	unsigned char  *m_addr, *r_addr, *wrkspc;
	BOOL            m_known;
	int             m_offset, m_len, p;
{
#define qf_result r_addr
#define bs_result bsalign(qf_result + qfsize)
	unsigned char  *r;
	int             i;

	offswitch(m_addr, m_offset, m_len)

	r = last(adjustaddress(bs_result, (m_len + p + 7) / 8),
           (m_len + p + 7) / 8);

	i = (p+7)/8;

	if (!m_known) {
		*(qf)qf_result  = FALSE;
		return;
	}
	*(qf)qf_result  = TRUE;

	/* clear least significant bytes of result */
	while (i--)
	    *((r)pred) = 0;
#ifdef vax
	adjust_input(m_addr, m_offset, m_len,
	   nth(bs_result, bssize(p + m_len), (m_len + 7)/8 - 1),
	   m_len, FALSE);
#else
	adjust_input(m_addr, m_offset, m_len, bs_result, m_len, FALSE);
#endif
}

