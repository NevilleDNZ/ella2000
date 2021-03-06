/* $Id: ge_s.c,v 34.2 1995/03/29 13:03:59 ella Exp $ */


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

static char *rcsid = " $Id: ge_s.c,v 34.2 1995/03/29 13:03:59 ella Exp $ ";

/* DEC/CMS REPLACEMENT HISTORY, Element GE_S.C */
/* *5    22-DEC-1989 14:13:01 ELLADEV "Updated provisional with fixes for R4B561. IM" */
/* *4    10-AUG-1989 12:21:07 ELLADEV "Definitive release 4.0, first provisional release 4.1. BGH" */
/* *3    17-FEB-1989 17:17:04 ELLADEV "Updated provisional with partial fixes for R4B043. BGH" */
/* *2    21-JAN-1989 11:12:18 ELLADEV "Provisional for Release 4.0 BGH" */
/* *1    17-JAN-1989 16:54:01 ELLADEV "first draft for Release 4.0, stored in CMS lib [elladev.cms.ella_server]""" */
/* DEC/CMS REPLACEMENT HISTORY, Element GE_S.C */
/*************************************************************************/
/* 11:12:89  Parameters were not in correct order for le_s.
 *           This error caused by changes for VAX porting.  SPT.
 */

/*     GE_S
       ********
Description:
     greater than or equal comparison on the assumption that the signals 
     represent signed integers.

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
 * GE_S (N, M, result)
 * char N[n] - input bit string
 * char M[m] - input bit string
 * BOOL result - (true iff N>=M) 
 * ASSERT: GE_S(x, y, z) == LE_S(y, x, z)

*/

#include "biops.h"

extern void LE_S();
void 
GE_S(m_known, m_addr, m_offset, m_len,
     n_known, n_addr, n_offset, n_len,
     r_addr, wrkspc)
	unsigned char  *m_addr, *n_addr, *r_addr, *wrkspc;
	BOOL            m_known, n_known;
	int             m_offset, n_offset, m_len, n_len;
{
   LE_S ( n_known, n_addr, n_offset, n_len,
          m_known, m_addr, m_offset, m_len, 
          r_addr, wrkspc);
}
