/* $Id: eq_s.c,v 34.2 1995/03/29 13:03:58 ella Exp $ */


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

static char *rcsid = " $Id: eq_s.c,v 34.2 1995/03/29 13:03:58 ella Exp $ ";

/* DEC/CMS REPLACEMENT HISTORY, Element EQ_S.C */
/* *6    10-AUG-1989 12:20:25 ELLADEV "Definitive release 4.0, first provisional release 4.1. BGH" */
/* *5    30-JUN-1989 17:13:29 ELLADEV "Updated provisional with fixes for R4B383. BGH" */
/* *4    26-JUN-1989 18:05:56 ELLADEV "Updated provisional with fixes for R4B380. BGH" */
/* *3    17-FEB-1989 17:16:59 ELLADEV "Updated provisional with partial fixes for R4B043. BGH" */
/* *2    21-JAN-1989 11:11:42 ELLADEV "Provisional for Release 4.0 BGH" */
/* *1    17-JAN-1989 16:53:57 ELLADEV "first draft for Release 4.0, stored in CMS lib [elladev.cms.ella_server]""" */
/* DEC/CMS REPLACEMENT HISTORY, Element EQ_S.C */
/*************************************************************************/
/* 29:06:89  Changes for VAX.  SPT.
 */

/*     EQ_S
       ********
Description:
     Equal comparison on the assumption that the signals represent
     signed integers

Inputs:
    The input operands are described by the triples
    M = <m_addr, m_offset, m_len> and
    N = <n_addr, n_offset, n_len>.
    Query values are indicated by the m_known and/or n_known inputs
    being FALSE.

Outputs:
    The result is stored in a 2valued type in &r_addr[0],
    0 being query,
    1 being FALSE,
    2 being TRUE.

Workspace required: ((max(m_len,n_len) +7)/8)*2 bytes

Design:
 *
 * EQ_S (M, N, result)
 * unsigned equal operator for arbitary length bit strings
 * char M[m] - input bit string
 * char N[n] - input bit string
 * BOOL result
 *
 * if ((signed)M == ? || (signed)N == ?)
 *    result = ?
 * else
 * {
 *   adjust_input(M);
 *   adjust_input(N);
 *   ASSERT: ls_byte(X) <= ms_byte(X) &&
 *           bit_len(N) == bit_len(M) &&
 *           bit_len(M)%8 == 0
 *
 *
 *   i = ms_byte(M);
 *   while ((i >= ls_byte(M)) && (M[i] == N[i]))
 *      i--;
 *   result = ( i < ls_byte(M))
 *
 * }
 * ASSERT if ((signed)M == ? || (signed)N == ?)
 *        then result == ?
 *        else result == ((signed)M==(signed)N)
 *
 */

#include "biops.h"

void
EQ_S(m_known, m_addr, m_offset, m_len,
     n_known, n_addr, n_offset, n_len,
     r_addr, wrkspc)
	unsigned char  *m_addr, *n_addr, *r_addr, *wrkspc;
	BOOL            m_known, n_known;
	int             m_offset, n_offset, m_len, n_len;
{
#define tv_result r_addr
	register unsigned char *m, *n;
	int             byte_len;
	BOOL            more;

	offswitch(m_addr, m_offset, m_len)
	offswitch(n_addr, n_offset, n_len)

	byte_len = (max(m_len, n_len) + 7) / 8;

	if (!m_known || !n_known) {
		*(tv)tv_result = twovalued_QUERY;
		return;
	}
	adjust_input(m_addr, m_offset, m_len, wrkspc, byte_len * 8, TRUE);
	adjust_input(n_addr, n_offset, n_len, wrkspc + byte_len, byte_len * 8, TRUE);

	m = first(wrkspc, byte_len);
	n = first(wrkspc + byte_len, byte_len);
	while ((more = before_or_at(m, last(wrkspc, byte_len))) &&
	       (*next(m) == *next(n)));
	*(tv)tv_result = (more) ? twovalued_FALSE : twovalued_TRUE;
}
