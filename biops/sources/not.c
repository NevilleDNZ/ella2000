/* $Id: not.c,v 34.2 1995/03/29 13:04:08 ella Exp $ */


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

static char *rcsid = " $Id: not.c,v 34.2 1995/03/29 13:04:08 ella Exp $ ";

/* DEC/CMS REPLACEMENT HISTORY, Element NOT.C */
/* *6    10-AUG-1989 12:31:13 ELLADEV "Definitive release 4.0, first provisional release 4.1. BGH" */
/* *5    30-JUN-1989 17:15:15 ELLADEV "Updated provisional with fixes for R4B383. BGH" */
/* *4    26-JUN-1989 18:07:17 ELLADEV "Updated provisional with fixes for R4B380. BGH" */
/* *3    17-FEB-1989 17:17:51 ELLADEV "Updated provisional with partial fixes for R4B043. BGH" */
/* *2    21-JAN-1989 11:21:23 ELLADEV "Provisional for Release 4.0 BGH" */
/* *1    17-JAN-1989 16:54:49 ELLADEV "first draft for Release 4.0, stored in CMS lib [elladev.cms.ella_server]""" */
/* DEC/CMS REPLACEMENT HISTORY, Element NOT.C */
/*************************************************************************/
/* 29:06:89  Changes for VAX.  SPT.
 */

/*     NOT
       ********
Description:
     Bitwise ones complement

Inputs:
    The input operand is described by the triple
    M = <m_addr, m_offset, m_len> and
    Query value is indicated by the m_known input
    being FALSE.

Outputs:
    The result bit-string is stored at &r_addr[qfsize],
    &r_addr[0] being the 'known' flag start address.

Workspace required: NONE

Design:
 *
 * NOT (M,R)
 * Bitwise ones compliment.
 * char M[m] - input bit string
 * char R[m] - result bit string
 *
 * if (unsigned)M == ?
 *    (unsigned)R = ?
 * else
 * {
 *   R = adjust_input(M);
 *   ASSERT: ls_byte(X) <= ms_byte(X) &&
 *           bit_len(R) == m &&
 *           (bit pattern)M == (bit pattern)R
 *
 *   i = ms_byte(M);
 *
 *   while (i >= ls_byte(M))
 *     {
 *        R[i] = ~R[i];
 *        i--;
 *     }
 *    |* ensure bottom unused bits are clear *|
 *    ls_byte(M) &= (~0 << (8-(m%8))%8);
 * }
 *
 * ASSERT if (bit pattern)M == ?
 *        then (bit pattern)R == ?
 *        else (bit pattern)R == ~(bit pattern)M
 *
 */

#include "biops.h"

void
NOT(m_known, m_addr, m_offset, m_len, 
    r_addr, wrkspc)
	unsigned char  *m_addr, *r_addr, *wrkspc;
	BOOL            m_known;
	int             m_offset, m_len;
{
	register unsigned char *m;
#define qf_result r_addr
#define byte_len  ((m_len+7)/8)
#define bs_result bsalign(qf_result + qfsize)

	offswitch(m_addr, m_offset, m_len)

	if (!m_known) {
		*(qf)qf_result  = FALSE;
		return;
	}
	adjust_input(m_addr, m_offset, m_len,
	   adjustaddress(bs_result, byte_len), m_len, FALSE);

	*(qf)qf_result = TRUE;
	m = adjustaddress(bs_result, byte_len);
	while (m < adjustaddress(bs_result, byte_len) + byte_len)
            {
		*m = ~*m;
                 m++;
            }

	*last(adjustaddress(bs_result, byte_len), byte_len) &=
		(~0 << (8 - (m_len % 8)) % 8);
}

