/* $Id: div_s.c,v 34.2 1995/03/29 13:03:48 ella Exp $ */


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

static char *rcsid = "$Id: div_s.c,v 34.2 1995/03/29 13:03:48 ella Exp $";

/* DEC/CMS REPLACEMENT HISTORY, Element DIV_S.C */
/* *6    10-AUG-1989 12:18:18 ELLADEV "Definitive release 4.0, first provisional release 4.1. BGH" */
/* *5    30-JUN-1989 17:13:18 ELLADEV "Updated provisional with fixes for R4B383. BGH" */
/* *4    26-JUN-1989 18:05:45 ELLADEV "Updated provisional with fixes for R4B380. BGH" */
/* *3    17-FEB-1989 17:16:47 ELLADEV "Updated provisional with partial fixes for R4B043. BGH" */
/* *2    21-JAN-1989 11:09:33 ELLADEV "Provisional for Release 4.0 BGH" */
/* *1    17-JAN-1989 16:53:51 ELLADEV "first draft for Release 4.0, stored in CMS lib [elladev.cms.ella_server]""" */
/* DEC/CMS REPLACEMENT HISTORY, Element DIV_S.C */
/* Division of one arbitrary length, two's complement, signed number
   by another */
/* 29:06:89  Changes for VAX.  SPT.
 */

#include "biops.h"

extern          negate();
extern          adjust_input();
extern          adjust_output();
extern          getbits();
extern          div_core();

/**************************************************************************/

/*	div_s
	*****

Description:
	Divides one two's complement integer (signed) of arbitrary length
	by another.  The function yields a quotient and a remainder.

Inputs:	The first operand is described by the triple X = <x_addr,
	x_offset, x_len>.  The second operand is similar.
	'x_known' and 'y_known' are one-byte boolean flags signalling
	whether a 'signal' has a specified value (TRUE) or not.
	'workspace' is a pointer to an external area of memory where
	intermediate results may be put.

Outputs:
	&z_addr[0] is used for flagging division by zero.
	&z_addr[tvsize] is the 'known' flag for the quotient.  The quotient
	is described by the triple Q = <&z_addr[tvsize+qfsize], 0, x_len>.
	z_addr[x_longwords + tvsize + qfsize] is the known flag for the remainder.
        The remainder is described by the triple,
        R = <&z_addr[x_longwords + tvsize + 2*qfsize], 0, y_len>.

Notes:	Using the C notation a/b and a%b for the quotient and remainder
	of a divided by b:

	- If 0 <= b then 0 <= a%b and a%b < b, else a%b <= 0 and b < a%b.
	  ie, the remainder has the same sign as and smaller magnitude
	  than the divisor.
	- a == (a/b) * b + a%b

	Workspace requirements are:

	(w_bl_x + 1) + w_bl_y + w_bl_x + w_bl_y + (w_bl_y + 1)
	= (2 * w_bl_x) + (3 * w_bl_y) + 2
	where w_bl_x = (x_len + 7) / 8
	and w_bl_y = ((y_len + 7) / 8) - <the number of zero-valued
					leading bytes of y in the workspace>.

Design:

*
*
* Division of arbitrary length, two's complement signed integers.
*
* ASSERT X == +|x| && Y == +|y|
*
* div_s(x, y, q, r)
* unsigned char x[x_bytes], y[y_bytes], q[x_bytes - y_bytes + 1], r[];
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
*     ASSERT |quotient| == ABS(X) / ABS(Y)
*     ASSERT |remainder| == ABS(X) % ABS(Y)
*
*     if (sign_x == NEGATIVE && sign_y == POSITIVE)
*          if (r[] == 0) negate(q[]);
*          else {negate(q[]); q[]--; r[] = wy[] - r[];}
*     if (sign_x == POSITIVE && sign_y == NEGATIVE)
*          if (r[] == 0) negate(q[]);
*          else {negate(q[]); q[]--; r[] = r[] + wy[];}
*     if (sign_x == NEGATIVE && sign_y == NEGATIVE) negate(r[]);
*
*     ASSERT +|quotient| == +|x| / +|y|
*     ASSERT +|remainder| == +|x| % +|y|
*
* }
*
*/

void 
DIVIDE_S(x_known, x_addr, x_offset, x_len,
	 y_known, y_addr, y_offset, y_len,
	 z_addr, workspace)
	int             x_offset, x_len, y_offset, y_len;
	BOOL            x_known, y_known;
	unsigned char   x_addr[], y_addr[], z_addr[], workspace[];
{
#define tv_ovr z_addr
#define qf_quo qfalign(tv_ovr + tvsize)
#define bs_quo bsalign(qf_quo + qfsize)
#define qf_rem qfalign(bs_quo + bssize(x_len))
#define bs_rem bsalign(qf_rem + qfsize)

	unsigned char
	               *w_q,	/* The first byte of the quotient in the
				 * workspace */
	               *w_r,	/* The first byte of the remainder in the
				 * workspace */
	               *w_x,	/* The first byte of x in the workspace */
	               *w_y,	/* The first byte of y in the workspace */
	               *r,	/* Output area for remainder */
	               *a_ptr, *b_ptr, *c_ptr;	/* Used in add and subtract */
	int             w_bl_x,	/* Byte length of x in
				 * workspace */
	                w_bl_y,	/* Byte length of y in
				 * workspace */
	                sign_x, sign_y,	/* The signs of x and y */
	                q_padding, r_padding;
	unsigned
	                b,	/* A 'borrow' used in the arithmetic */
	                acc, acc1, s, k;	/* a 'carry' */
	BOOL            signed_number;

	offswitch(x_addr, x_offset, x_len)
	offswitch(y_addr, y_offset, y_len)

	w_bl_x = (x_len + 7) / 8;
	w_bl_y = (y_len + 7) / 8;
	q_padding = (w_bl_x * 8) - x_len;
	r_padding = (w_bl_y * 8) - y_len;
	signed_number = TRUE;

	/* Check whether x and y are 'known' */

	if (!x_known || !y_known) {
		*(tv) tv_ovr = twovalued_QUERY;
		*(qf) qf_quo = FALSE;
		*(qf) qf_rem = FALSE;
		return;
	} else {
		*(tv) tv_ovr = twovalued_TRUE;
		*(qf) qf_quo = TRUE;
		*(qf) qf_rem = TRUE;
	}

	r = &z_addr[w_bl_x + 3];
	w_x = &workspace[0];
	w_y = &workspace[w_bl_x + 1];

	/* Notice that an extra byte is provided in the workspace for x. */

	w_q = &w_y[w_bl_y];
	w_r = &w_q[w_bl_x];

	sign_x = getbits(*row_start(x_addr, x_offset, x_len),
			 (7 - (x_offset % 8)), 1);
	sign_y = getbits(*row_start(y_addr, y_offset, y_len),
			 (7 - (y_offset % 8)), 1);

	/*
	 * When adjust_input() is applied to x, an extra byte of workspace is
	 * provided for use in the normalization of x - see below.
	 */

	adjust_input(x_addr, x_offset, x_len, w_x,
		     ((w_bl_x + 1) * 8), signed_number);
	adjust_input(y_addr, y_offset, y_len, w_y,
		     (w_bl_y * 8), signed_number);

	if (sign_x == NEGATIVE)
		negate(w_x, w_bl_x + 1);
	if (sign_y == NEGATIVE)
		negate(w_y, w_bl_y);

  	if (!div_core(w_x, w_bl_x, w_y, w_bl_y, w_q, w_r)) {
		*(tv) tv_ovr = twovalued_FALSE;
		*(qf) qf_quo = FALSE;
		*(qf) qf_rem = FALSE;
		return;
	}

	/* Check and change signs of quotient and remainder */

	/* Put y back to what it was for use in calculating remainders */

	if (sign_y == NEGATIVE)
		negate(w_y, w_bl_y);

	if (sign_x == NEGATIVE && sign_y == POSITIVE) {
		/* Check whether remainder is zero */

		for1(a_ptr, w_r, w_bl_y)
			if (*a_ptr != 0)
			break;
		if (after(a_ptr, last(w_r, w_bl_y)))	/* remainder == 0 */
			negate(w_q, w_bl_x);
		else {

			/* negate the quotient */

			negate(w_q, w_bl_x);

			/* Subtract 1 from quotient */

			a_ptr = last(w_q, w_bl_x);
			if (*a_ptr < 1) {
				b = 1;
				acc1 = *a_ptr + BASE;
			} else {
				b = 0;
				acc1 = *a_ptr;
			}
			*a_ptr = acc1 - 1;
			next_lower(a_ptr);
			while (after_or_at(a_ptr, first(w_q, w_bl_x))) {
				acc = b;
				if (*a_ptr < acc) {
					b = 1;
					acc1 = *a_ptr + BASE;
				} else {
					b = 0;
					acc1 = *a_ptr;
				}
				*a_ptr = acc1 - acc;
				next_lower(a_ptr);
			}

			/* remainder = y - remainder */

			b = 0;	/* Set 'borrow' to 0 */
			b_ptr = last(w_y, w_bl_y);
			for2(a_ptr, w_r, w_bl_y) {
				acc = *a_ptr + b;
				if (*b_ptr < acc) {
					b = 1;
					acc1 = *b_ptr + BASE;
				} else {
					b = 0;
					acc1 = *b_ptr;
				}
				*a_ptr = acc1 - acc;
				next_lower(b_ptr);
			}
		}
	}
	if (sign_x == POSITIVE && sign_y == NEGATIVE) {
		/* Check whether remainder is zero */

		for1(a_ptr, w_r, w_bl_y)
			if (*a_ptr != 0)
			break;
		if (after(a_ptr, last(w_r, w_bl_y)))	/* remainder == 0 */
			negate(w_q, w_bl_x);
		else {

			/* negate the quotient */

			negate(w_q, w_bl_x);

			/* Subtract 1 from quotient */

			a_ptr = last(w_q, w_bl_x);
			if (*a_ptr < 1) {
				b = 1;
				acc1 = *a_ptr + BASE;
			} else {
				b = 0;
				acc1 = *a_ptr;
			}
			*a_ptr = acc1 - 1;
			next_lower(a_ptr);
			while (after_or_at(a_ptr, first(w_q, w_bl_x))) {
				acc = b;
				if (*a_ptr < acc) {
					b = 1;
					acc1 = *a_ptr + BASE;
				} else {
					b = 0;
					acc1 = *a_ptr;
				}
				*a_ptr = acc1 - acc;
				next_lower(a_ptr);
			}

			/* remainder = remainder + y */

			k = 0;	/* Set 'carry' to 0 */
			b_ptr = last(w_y, w_bl_y);
			for2(a_ptr, w_r, w_bl_y) {
				s = *a_ptr + *b_ptr + k;
				if (s >= BASE) {
					*a_ptr = s - BASE;
					k = 1;
				} else {
					*a_ptr = s;
					k = 0;
				}
				next_lower(b_ptr);
			}
		}
	}
	if (sign_x == NEGATIVE && sign_y == NEGATIVE)
		negate(w_r, w_bl_y);

	/*
	 * Now move quotient and remainder into the output area with any
	 * adjustment in positioning that may be required
	 */

	adjust_output(adjustaddress(bs_quo, w_bl_x),
	   w_q, q_padding, w_bl_x);
	adjust_output(adjustaddress(bs_rem, w_bl_y),
	   w_r, r_padding, w_bl_y);
}				/* div_s */
