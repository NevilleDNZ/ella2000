/* $Id: transform_s_2.c,v 34.2 1995/03/29 13:04:16 ella Exp $ */


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

static char *rcsid = "$Id: transform_s_2.c,v 34.2 1995/03/29 13:04:16 ella Exp $";

/* DEC/CMS REPLACEMENT HISTORY, Element TRANSFORM_S_2.C */
/* *6    10-AUG-1989 12:35:48 ELLADEV "Definitive release 4.0, first provisional release 4.1. BGH" */
/* *5    30-JUN-1989 17:16:04 ELLADEV "Updated provisional with fixes for R4B383. BGH" */
/* *4    26-JUN-1989 18:08:23 ELLADEV "Updated provisional with fixes for R4B380. BGH" */
/* *3    17-FEB-1989 17:18:44 ELLADEV "Updated provisional with partial fixes for R4B043. BGH" */
/* *2    21-JAN-1989 11:24:34 ELLADEV "Provisional for Release 4.0 BGH" */
/* *1    17-JAN-1989 16:55:28 ELLADEV "first draft for Release 4.0, stored in CMS lib [elladev.cms.ella_server]""" */
/* DEC/CMS REPLACEMENT HISTORY, Element TRANSFORM_S_2.C */
/*************************************************************************/
/* 29:06:89  Changes for VAX.  SPT.
 */

/*     TRANSFORM_S_2
       *************
Description: 
    Converts an ELLA integer to a signed bit string.
 
Inputs:  
    The Ella integer is stored at 'e_addr'. 'e_known' records 
    whether the integer is known.  'n_len' records the length 
    of the result in bits.

Outputs: 
    The result is stored in a 2valued type at &n_addr[0], followed
    by the bit string at &n_addr[tvsize].

    Values for 2valued type are:-
    0 - query,
    1 - FALSE,
    2 - TRUE.

Notes:
    An Ella integer is a signed, two's compliment number occupying 
    4 bytes; the least significant bit is bit 0 of the
    least significant byte.

    No workspace is required.

Design:
 *
 * TRANSFORM_S_2 (E, N)
 * convert ELLA integer to a signed bit string.
 * bit N[n]   - output bit string.
 * ELLA_int E[] - input ELLA integer.
 *
 * ASSERT: least_sig_bit(N) == 1 && most_sig_bit(N) == n &&
 *         min_val(N) == 0 && max_val(N) == (2**n)-1 
 *
 *  {
 *    ASSERT: min_val(E) == -2**(e_bit_length-1) &&
 *            max_val(E) == (2**(e_bit_length-1))-1
 *
 *   N[] = E[];
 *
 * ASSERT: 
 *        if (!e_known) 
 *        then
 *          e_in_range == ? && !n_known
 *        else
 *          n_known == TRUE &&
 *          (signed)E == (unsigned)N
 *
 */

#include "biops.h"

void TRANSFORM_S_2 (e_known, e_addr, n_len, n_addr)
unsigned char e_addr[], n_addr[];
BOOL e_known;
int n_len;
{
#define tv_result n_addr
#define qf_result qfalign(tv_result + tvsize)
#define bs_result bsalign(qf_result + qfsize)

	int 	offset,
		e_length;
	int32 ella32, upperbound;

	if (!e_known)
	{
		*(tv)tv_result = twovalued_QUERY;
		*(qf)qf_result  = FALSE;
		return;
	}

         ella32 = *(int32 *)e_addr;
	/* Test whether Ella integer is within range of n_len */
	if (n_len < 32) 
	{
		upperbound = 1 << (n_len - 1);
		if (ella32 < -upperbound || ella32 >= upperbound) {
		/* Absolute value of Ella integer is too large */
			*(tv)tv_result = twovalued_FALSE;
			*(qf)qf_result = FALSE;
			return;
		}
		offset = 32 - n_len;
		e_length = n_len;
	}
	else
	{
		offset = 0;
		e_length = 32;
	}
	*(tv)tv_result = twovalued_TRUE;
	*(qf)qf_result  = TRUE;
	adjust_input(e_addr, offset, e_length, adjustaddress(bs_result, (n_len + 7)/8), n_len, TRUE);
} /* TRANSFORM_S_2 */


