/* $Id: and.c,v 34.2 1995/03/29 13:03:43 ella Exp $ */


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

static char *rcsid = " $Id: and.c,v 34.2 1995/03/29 13:03:43 ella Exp $ ";

/* DEC/CMS REPLACEMENT HISTORY, Element AND.C */
/* *6    10-AUG-1989 12:14:56 ELLADEV "Definitive release 4.0, first provisional release 4.1. BGH" */
/* *5    30-JUN-1989 17:12:38 ELLADEV "Updated provisional with fixes for R4B383. BGH" */
/* *4    26-JUN-1989 18:04:24 ELLADEV "Updated provisional with fixes for R4B380. BGH" */
/* *3    17-FEB-1989 17:16:31 ELLADEV "Updated provisional with partial fixes for R4B043. BGH" */
/* *2    21-JAN-1989 11:06:54 ELLADEV "Provisional for Release 4.0 BGH" */
/* *1    17-JAN-1989 16:53:32 ELLADEV "first draft for Release 4.0, stored in CMS lib [elladev.cms.ella_server]""" */
/* DEC/CMS REPLACEMENT HISTORY, Element AND.C */
/*************************************************************************/
/* 29:06:89  Changes for VAX.  SPT.
 */

/*     AND
       ********
Description:
     Bitwise logical AND

Inputs:
    The input operands are described by the triples
    M = <m_addr, m_offset, m_len> and
    N = <n_addr, n_offset, n_len>.
    Both bit strings must be the same length.
    Query values are indicated by the m_known and/or n_known inputs
    being FALSE.

Outputs:
    The result bit-string is stored at &r_addr[qfsize],
    &r_addr[0] being the 'known' flag start address.

Workspace required: (m_len+7)/8 bytes

Design:
 *
 * AND (M, N, R)
 * Bitwise logical AND.
 * char M[m] - input bit string
 * char N[m] - input bit string
 * char R[m] - result bit string
 *
 * if ((unsigned)M == ? || (unsigned)N == ?)
 *    (unsigned)R = ?
 * else
 * {
 *   R = adjust_input(M);
 *   W = adjust_input(N);
 *   ASSERT: ls_byte(X) <= ms_byte(X) &&
 *           bit_len(R) == bit_len(W) &&
 *           bit_len(R) == m &&
 *           (bit pattern)M == (bit pattern)R &&
 *           (bit pattern)N == (bit pattern)W
 *
 *   i = ms_byte(M);
 *
 *   while (i >= ls_byte(M))
 *     {
 *        R[i] &= W[i];
 *        i--;
 *     }
 * }
 * ASSERT if ((bit pattern)M == ? || (bit pattern)N == ?)
 *        then (bit pattern)R == ?
 *        else (bit pattern)R == ((bit pattern)M & (bit pattern)N)
 *
 */

/* CHANGES :
 * 23:8:88 Updated output alignment to be longword based, in line with
 *         new code generator requirements. MDR.
 */



#include "biops.h"

void
AND(m_known, m_addr, m_offset, m_len,
    n_known, n_addr, n_offset, n_len,
    r_addr, wrkspc)
	unsigned char  *m_addr, *n_addr, *r_addr, *wrkspc;
	BOOL            m_known, n_known;
	int             m_offset, n_offset, m_len, n_len;
{
	register unsigned char *m, *n;
#define byte_len  ((m_len+7)/8)
#define qf_out r_addr
#define bs_out bsalign(qf_out + qfsize)

	offswitch(m_addr, m_offset, m_len)
	offswitch(n_addr, n_offset, n_len)

	if (!m_known || !n_known) {
		*(qf) qf_out = FALSE;
		return;
	}

	adjust_input(m_addr, m_offset, m_len, adjustaddress(bs_out, byte_len),
	   m_len, FALSE);
	adjust_input(n_addr, n_offset, n_len, wrkspc, m_len, FALSE);

	*(qf) qf_out = TRUE;
	m = adjustaddress(bs_out, byte_len);
	n = wrkspc;
	while (m < adjustaddress(bs_out, byte_len) + byte_len)
		*m++ &= *n++;
}
