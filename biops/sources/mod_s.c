/* $Id: mod_s.c,v 34.2 1995/03/29 13:04:05 ella Exp $ */


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

static char *rcsid = " $Id: mod_s.c,v 34.2 1995/03/29 13:04:05 ella Exp $ ";

/* DEC/CMS REPLACEMENT HISTORY, Element MOD_S.C */
/* *6    10-AUG-1989 12:30:52 ELLADEV "Definitive release 4.0, first provisional release 4.1. BGH" */
/* *5    30-JUN-1989 17:14:58 ELLADEV "Updated provisional with fixes for R4B383. BGH" */
/* *4    26-JUN-1989 18:06:58 ELLADEV "Updated provisional with fixes for R4B380. BGH" */
/* *3    17-FEB-1989 17:17:36 ELLADEV "Updated provisional with partial fixes for R4B043. BGH" */
/* *2    21-JAN-1989 11:21:06 ELLADEV "Provisional for Release 4.0 BGH" */
/* *1    17-JAN-1989 16:54:32 ELLADEV "first draft for Release 4.0, stored in CMS lib [elladev.cms.ella_server]""" */
/* DEC/CMS REPLACEMENT HISTORY, Element MOD_S.C */
/* Yields the modulus of one arbitrary-length, two's compliment signed
   number with respect to another */
/* 29:06:89  Changes for VAX.  SPT.
 */

#include "biops.h"

extern negate();
extern adjust_input();
extern adjust_output();
extern getbits();
extern div_core();

/**************************************************************************/

/*	MOD_S
	*****

Description:
	Yields the modulus of one arbitrary-length, two's complement
	signed number with respect to another.

Inputs:	The first operand is described by the triple X = <x_addr, 
	x_offset, x_len>.  The second operand is similar.
	'x_known' and 'y_known' are one-byte boolean flags signalling
	whether a 'signal' has a specified value (TRUE) or not.
	'workspace' is a pointer to an external area of memory where
	intermediate results may be put.

Outputs:
	z_addr[0..tvsize-1] is used for flagging division by zero.  
	z_addr[tvsize..tvsize+qfsize-1] is the known flag for the modulus. 
        The modulus is described by the triple R = <&z_addr[tvsize + qfsize],
	0, y_len>.

Notes:	-x MOD_S y = 0, if x MOD_S y = 0
	           = |y| - x MOD_S y, otherwise.

	Workspace requirements are:

	(w_bl_x + 1) + w_bl_y + w_bl_x + w_bl_y + (w_bl_y + 1) + w_bl_x + 2
	= (3 * w_bl_x) + (3 * w_bl_y) + 4
	where w_bl_x = (x_len + 7) / 8
	and w_bl_y = ((y_len + 7) / 8) - <the number of zero-valued 
					leading bytes of y in the workspace>.

Design:
 
*
*
* Calculation of the modulus of arbitrary length, two's complement 
* signed integers.
*
* ASSERT X == +|x| && Y == +|y|
*
* mod_s(x, y, m)
* unsigned char x[x_bytes], y[y_bytes], m[];
* {
*     unsigned char d, base = 256, qq, wx[x_bytes + 1], wy[y_bytes];
*     int j, first_significant_byte;
*
*     adjust_input(x, wx);
*     adjust_input(y, wy);
*
*     if (sign_x == NEGATIVE) negate(wx);
*     if (sign_y == NEGATIVE) negate(wy);
*
*     ASSERT |x| == ABS(X) && |y| == ABS(Y)
*
*     div_core();  COMMENT - see div_core() for the design.
*
*     ASSERT |modulus| == ABS(X) % ABS(Y)
*
*     if (m[] == 0) return;
*     if (sign_x == NEGATIVE) m[] = wy - m[];
*
*     ASSERT +|modulus| == +|x| % +|y|
*
* }
*
*/

void MOD_S(x_known, x_addr, x_offset, x_len, 
		y_known, y_addr, y_offset, y_len, 
		z_addr, workspace)
int x_offset, x_len, y_offset, y_len;
BOOL x_known, y_known;
unsigned char x_addr[], y_addr[], z_addr[], workspace[];
{
#define tv_result z_addr
#define qf_result qfalign(tv_result + tvsize)
#define bs_result bsalign(qf_result + qfsize)

	unsigned char 
		*w_q, /* The first byte of the quotient in the workspace */
		*w_r, /* The first byte of the modulus in the workspace */
		*w_x, /* The first byte of x in the workspace */
		*w_y, /* The first byte of y in the workspace */
		*w_z,
		*r, /* Output area for remainder */
		*a_ptr, *b_ptr, *c_ptr; /* Used in add and subtract */
	int	w_bl_x, /* Byte length of x in workspace */
		w_bl_y, /* Byte length of y in workspace */
		sign_x, sign_y, /* The signs of x and y */
		r_padding;
	unsigned
		b, /* A 'borrow' used in the arithmetic */
		acc, acc1,
		s,
		k; /* a 'carry' */
	BOOL signed_number;

	offswitch(x_addr, x_offset, x_len)
	offswitch(y_addr, y_offset, y_len)

	w_bl_x = (x_len + 7) / 8;
	w_bl_y = (y_len + 7) / 8;
	r_padding = (w_bl_y * 8) - y_len;
	signed_number = TRUE;

	if (!x_known || !y_known)
	{
		*(tv)tv_result= twovalued_QUERY;
		*(qf)qf_result  = FALSE;
		return;
	}
	else 
	{
		*(tv)tv_result = twovalued_TRUE;
		*(qf)qf_result = TRUE;
	}

	r = adjustaddress(bs_result, w_bl_y);
	w_x = &workspace[0];
	w_y = &workspace[w_bl_x + 1];

	/* Notice that an extra byte is provided in the workspace for x. */

	w_z = &w_y[w_bl_y];
	w_q = &w_z[w_bl_x + 2];
	w_r = &w_q[w_bl_x];

	sign_x = getbits(*row_start(x_addr, x_offset, x_len), 
				(7 - (x_offset % 8)), 1);
	sign_y = getbits(*row_start(y_addr, y_offset, y_len), 
				(7 - (y_offset % 8)), 1);

	/* When adjust_input() is applied to x, an extra byte of
	workspace is provided for use in the normalization
	of x - in div_core(). */

	adjust_input(x_addr, x_offset, x_len, w_x,
		((w_bl_x + 1) * 8), signed_number); 
	adjust_input(y_addr, y_offset, y_len, w_y,
		(w_bl_y * 8), signed_number); 

	if (sign_x == NEGATIVE) negate(w_x, w_bl_x + 1);
	if (sign_y == NEGATIVE) negate(w_y, w_bl_y);


	if (!div_core(w_x, w_bl_x, w_y, w_bl_y, w_q, w_r))
	{
		*(tv)tv_result = twovalued_FALSE;
		*(qf)qf_result = FALSE;
		return;
	}

	/* Adjust the value of w_r[] */

	/* Check whether w_r[] == 0; if so, return. */

	for1(a_ptr, w_r, w_bl_y)
		if (*a_ptr != 0) break;
	if (after(a_ptr, last(w_r, w_bl_y))) /* remainder == 0 */
	{
		adjust_output(r, w_r, r_padding, w_bl_y);
		return;
	}
	if (sign_x == NEGATIVE)
	{
		/* w_r[] = w_y[] - w_r[] */

		b = 0;
		b_ptr = last(w_y, w_bl_y);
		for2(a_ptr, w_r, w_bl_y)
		{
			acc = *a_ptr + b;
			if (*b_ptr < acc)
			{
				b = 1;
				acc1 = *b_ptr + BASE;
			}
			else
			{
				b = 0;
				acc1 = *b_ptr;
			}
			*a_ptr = acc1 - acc;
			next_lower(b_ptr);
		}
	}
	adjust_output(r, w_r, r_padding, w_bl_y);
} /* mod_s */
