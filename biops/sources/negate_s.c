/* $Id: negate_s.c,v 34.2 1995/03/29 13:04:07 ella Exp $ */


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

static char *rcsid = " $Id: negate_s.c,v 34.2 1995/03/29 13:04:07 ella Exp $ ";

/* DEC/CMS REPLACEMENT HISTORY, Element NEGATE_S.C */
/* *6    10-AUG-1989 12:31:05 ELLADEV "Definitive release 4.0, first provisional release 4.1. BGH" */
/* *5    30-JUN-1989 17:15:09 ELLADEV "Updated provisional with fixes for R4B383. BGH" */
/* *4    26-JUN-1989 18:07:10 ELLADEV "Updated provisional with fixes for R4B380. BGH" */
/* *3    17-FEB-1989 17:17:45 ELLADEV "Updated provisional with partial fixes for R4B043. BGH" */
/* *2    21-JAN-1989 11:21:15 ELLADEV "Provisional for Release 4.0 BGH" */
/* *1    17-JAN-1989 16:54:40 ELLADEV "first draft for Release 4.0, stored in CMS lib [elladev.cms.ella_server]""" */
/* DEC/CMS REPLACEMENT HISTORY, Element NEGATE_S.C */
/*************************************************************************/
/* 29:06:89  Changes for VAX.  SPT.
 */

/*     NEGATE_S
       ********
Description:
     Negation assuming the signal represents a signed integer.

Inputs:
    The input operand is described by the triple N = <n_addr, n_offset, n_len>
    The query value is indicated by the n_known input being FALSE.

Outputs:
    The result is stored in a bit string described by
    M = <&m_addr[qfsize], 0, (n_len +1)>.
    The query value for the ouput is indicated by the qfsize-byte word at 
    m_addr[0] being zero.

Workspace required: (n_len +8)/8 bytes

Design:
 *
 * NEGATE_S (N M)
 * negation of an arbitary length, two's complement integer.
 * bit N[n] - input value
 * bit M[n+1] - output value
 *
 * if ((signed)N == ?)
 *   (signed)M = ?
 * else
 * {
 *   adjust_input(N, W)
 *   ASSERT: bit_len(W)%8 == 0 &&
 *           bit_len(W) >= n+1 &&
 *           (signed)W == (signed)N
 *   negate(W)
 *   ASSERT: (signed)W == -(signed)N
 *   adjust_ouput(W,M)
 *   ASSERT: bit_len(M) == n+1 &&
 *           (signed)M == (signed)W == -(signed)N
 * }
 * ASSERT: if ((signed)N == ?)
 *         then (signed)M == ?
 *         else (signed)M == -(signed)N &&
 *              bit_len(M) == bit_len(N) +1
 */

#include "biops.h"

void 
NEGATE_S(n_known, n_addr, n_offset, n_len, 
	 m_addr, wrkspc)
	unsigned char  *n_addr, *m_addr, *wrkspc;
	int             n_offset, n_len;
	BOOL            n_known;
{
#define qf_result m_addr
#define m_len (n_len+1)	
#define bs_result bsalign(qf_result + qfsize)

	int             byte_len;

	offswitch(n_addr, n_offset, n_len)

	if (!n_known) {
		*(qf)qf_result  = FALSE;
		return;
	}
	*(qf)qf_result  = TRUE;
	byte_len = ((m_len) + 7) / 8;
	adjust_input(n_addr, n_offset, n_len, wrkspc, byte_len * 8, TRUE);
	negate(wrkspc, byte_len);
	adjust_output(adjustaddress(bs_result, byte_len),
	   wrkspc, (8 - (m_len % 8)) % 8, byte_len);
}
