/* $Id: biops.c,v 34.2 1995/03/29 13:03:44 ella Exp $ */


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

static char *rcsid = " $Id: biops.c,v 34.2 1995/03/29 13:03:44 ella Exp $ ";

/* DEC/CMS REPLACEMENT HISTORY, Element BIOPS.C */
/* *6    10-AUG-1989 12:16:00 ELLADEV "Definitive release 4.0, first provisional release 4.1. BGH" */
/* *5    30-JUN-1989 17:12:44 ELLADEV "Updated provisional with fixes for R4B383. BGH" */
/* *4    26-JUN-1989 18:04:32 ELLADEV "Updated provisional with fixes for R4B380. BGH" */
/* *3    28-FEB-1989 14:56:49 ELLADEV "Updated provisional with fixes for R4B043. BGH" */
/* *2    21-JAN-1989 11:07:52 ELLADEV "Provisional for Release 4.0 BGH" */
/* *1    17-JAN-1989 16:53:36 ELLADEV "first draft for Release 4.0, stored in CMS lib [elladev.cms.ella_server]""" */
/* DEC/CMS REPLACEMENT HISTORY, Element BIOPS.C */
/* 'Service' functions for BIOPS */

/* 29:06:89  Changes for VAX.  SPT.
 */
#include "biops.h"


/* function top_bits_same_as_sign
 * only returns TRUE if all most significant bits
 * within the bit string have same value as the sign bit.
 * The number of bits to check is specified by no_bits, this
 * count must not include the sign bit itself.
 */
BOOL 
top_bits_same_as_sign(n_addr, n_offset, n_len, no_bits)
	unsigned char  *n_addr;
	int             n_offset, n_len, no_bits;
{
	register unsigned char *curr_byte = row_start(n_addr, n_offset, n_len), *last_byte = curr_byte alongby((n_offset % 8 + no_bits) / 8);

	BOOL            sign_bit = (BOOL) getbits(*curr_byte, (7 - (n_offset % 8)), 1);

	register unsigned char mask = (sign_bit) ? ~0 : 0;

	unsigned char   start_mask = ((unsigned char) (~0) >> (n_offset % 8)), msbits = *(curr_byte) & start_mask, end_mask = (~0 << (8 - ((n_offset + no_bits + 1) % 8)) % 8), lsbits = *(last_byte) & end_mask;

	BOOL            result;

	if (curr_byte == last_byte)
		result = ((msbits & lsbits) == (mask & start_mask & end_mask) ? TRUE : FALSE);
	else if ((msbits != (mask & start_mask)) || (lsbits != (mask & end_mask)))
		result = FALSE;
	else {
		result = TRUE;
		while (succ(curr_byte) != last_byte)
			if (*curr_byte != mask) {
				result = FALSE;
				break;
			}
	}
	return (result);
}

/* function top_bits_clear
 * only returns TRUE if all most significant bits
 * within the bit string are zero.
 * The number of bits to check is specified by no_bits.
 */
BOOL 
top_bits_clear(n_addr, n_offset, n_len, no_bits)
	unsigned char  *n_addr;
	int             n_offset, n_len, no_bits;
{
	register unsigned char *curr_byte = row_start(n_addr, n_offset, n_len), *last_byte = curr_byte alongby((n_offset % 8 + no_bits - 1) / 8);

#define start_mask ((unsigned char)(~0) >> (n_offset%8))
	unsigned char   msbits = (*curr_byte) & start_mask;

#define end_mask  (~0 << ((8-((n_offset+no_bits)%8))%8))
	unsigned char   lsbits = (*last_byte) & end_mask;

	BOOL            result;

	if (curr_byte == last_byte)
		result = ((msbits & lsbits) ? FALSE : TRUE);
	else if (msbits || lsbits)
		result = FALSE;
	else {
		result = TRUE;
		while (succ(curr_byte) != last_byte)
			if (*curr_byte) {
				result = FALSE;
				break;
			}
	}
	return (result);
}

/**************************************************************************/

/*	div_core
	********

Description:
	This is the 'core' of DIV_S() and DIV_US().  It does
	division of unsigned integers of arbitrary length.
Inputs:	w_x is the address in workspace of the x operand; w_bl_x is
	the length of x in the workspace in bytes; the first byte
	of w_x must be zero; w_y and w_bl_y
	are similar values for y - with no assumption that the first
	byte of w_y is zero;
Outputs:
	w_q[] is the quotient and w_r[] is the remainder. A boolean 
        is returned, set FALSE on attempted division by zero, TRUE
        otherwise.
	
Note:
	The main algorithm used is based on the one described in
	Knuth's "Seminumerical Algorithms", Volume 2, Second Edition,
	1981, pp 257-258.

Design:

* div_core(wx[], wy[], q[], r[])
*
* {
*     int first_significant_byte;
*
*     COMMENT: find the first significant byte of y and check that
*     y is not zero.
*
*     first_significant_byte = 0;
*     while (y[first_significant_byte] == 0) first_significant_byte++;
*     if (first_significant_byte > length(wy[])) return;
*     wy[] = &wy[first_significant_byte];
*
*     if (length(wy[]) == 1)
*     {
*          k = 0;
*          for (i = 0; i <= length(x); i++)
*          {
*               q[i] = wx[i] + (k * BASE)) / wy[0];
*               k = wx[i] % wy[0];
*               return;
*          }
*     }
*
*     COMMENT: Knuth's algorithm follows.  It applies only to cases where
*     length(wy[]) > 1.
*
*     COMMENT: normalize the operands.
*
*     d = base / (y[first_significant_byte] + 1);
*     wx[0 .. x_bytes] = wx[0 .. (x_bytes - 1)] * d;
*     wy[0 .. (y_bytes - 1)] = wy[0 .. (y_bytes - 1)] * d;
*
*     for (j = 0; j < (x_bytes - y_bytes); j++)
*     {
*
*          COMMENT: calculate the trial quotient using qq.  This method
*          exploits the fact that the machine(s) has arithmetic functions
*          which work with >1 byte.
*
*          qq = wx[j .. (j + 2)] / wy[0 .. 1];
*
*          COMMENT: multiply and subtract.
*
*          wx[j .. x_bytes] = sub_s(wx[j .. x_bytes],
*                                   times_s(qq, wy[0 .. (y_bytes - 1)]));
*          q[j] = qq;
*
*          COMMENT: Test remainder and add back.
*
*          if (negative(wx[j .. x_bytes]))
*          {
*               (q[j])--;
*               wx[j .. x_bytes] = add_s(wx[j .. x_bytes],
*                                    wy[0 .. (y_bytes - 1)]);
*          }
*     }
*     COMMENT: q[0 .. (x_bytes - y_bytes)] is the quotient.  The remainder
*              is obtained by unnormalizing the last section of wx[].
*
*     r[0 .. (y_bytes - 1)] = wx[(x_bytes - y_bytes) .. x_bytes] / d;
* }
*/

BOOL 
div_core(w_x, w_bl_x, w_y, w_bl_y, w_q, w_r)
	unsigned char  *w_x, *w_y, *w_q, *w_r;
	int             w_bl_x, w_bl_y;
{
	unsigned char
	               *w_p,	/* The first byte of the 'product' of
				 * 'multiply and subtract' in the arithmetic. */
	               *w_ptr,	/* A pointer to workspace */
	               *wq_ptr,	/* A pointer to w_q[] */
	               *p_ptr,	/* A pointer used in the 'multiply' part of
				 * the arithmetic */
	               *y_ptr,	/* A pointer into w_y[] */
	               *a_ptr, *b_ptr, *c_ptr,	/* Used in add and subtract */
	               *r_ptr,	/* A pointer into w_r[] */
	               *j_ptr,	/* Used to control the "j" loop in the
				 * arithmetic */
	               *first_significant_byte;
	int             w_bl_m,	/* w_bl_m corresponds to the range of values
				 * which j_ptr will take in the arithmetic */
	                w_bl_y1,/* The byte length of y in workspace after
				 * removing zero-valued bytes. */
	                temp1;
	unsigned
	                temp, b,/* A 'borrow' used in the arithmetic */
	                acc, y, s, d,	/* A divisor used in normalizing
					 * operands */
	                k,	/* a 'carry' used in normalizing operands */
	                qq;	/* Used in calculating trial quotients */
	int32           short_x, short_y, temp32;


	/* Find the first significant byte of y and test for zero y. */

	temp1 = w_bl_y;
	for1(first_significant_byte, w_y, w_bl_y) {
		if (*first_significant_byte != 0)
			break;
		temp1--;
	}
	if (after(first_significant_byte, last(w_y, w_bl_y))) 
	  /*attempted divide by zero */
	        return(FALSE);

	w_bl_y1 = temp1;
#ifndef vax
	w_y = first_significant_byte;
#endif

	/* Clear leading bytes in w_r[] if necessary and reset r_ptr */

	r_ptr = first(w_r, w_bl_y);
	while (temp1 < w_bl_y) {
		*r_ptr = 0;
		next(r_ptr);
		temp1++;
	}

	w_p = &w_r[w_bl_y];
	w_bl_m = w_bl_x + 1 - w_bl_y1;

	/* The arithmetic */

	if (w_bl_y1 == 1) {
		y = *first_significant_byte;
#ifndef vax
		(w_x)++;		/* Step over extra byte required for Knuth's
				 * algorithm. */
#endif
		k = 0;
		b_ptr = first(w_q, w_bl_x);
		for1(a_ptr, w_x, w_bl_x) {
			*b_ptr = (*a_ptr + (k * BASE)) / y;
			k = (*a_ptr + (k * BASE)) % y;
			next(b_ptr);
		}
		*r_ptr = k;
		return(TRUE);
	}
	/* The length of y is >1, therefore use Knuth's algorithm. */

	/* Normalize the operands */

	d = BASE / (*first_significant_byte + 1);

	/* Normalize x */

	k = 0;
	for2(w_ptr, w_x, (w_bl_x + 1)) {
		temp = (*w_ptr * d) + k;
		k = temp / BASE;
		*w_ptr = temp % BASE;
	}

	/* Normalize y */

	k = 0;
	for2(w_ptr, w_y, w_bl_y1) {
		temp = (*w_ptr * d) + k;
		k = temp / BASE;
		*w_ptr = temp % BASE;
	}

	/*
	 * Find the position of the first significant byte in the quotient
	 * area and fill leading bytes with zeroes.
	 */

	wq_ptr = first(w_q, w_bl_x);

	temp1 = 0;
	while (temp1 < (w_bl_y1 - 1)) {
		*wq_ptr = 0;
		next(wq_ptr);
		temp1++;
	}

	/* The "j" loop */

	for (j_ptr = first(w_x, w_bl_x + 1);
		before_or_at(j_ptr, nth(w_x, w_bl_x + 1, w_bl_m - 1));
		next(j_ptr)) {
		/* Calculate the trial quotient using qq */

		short_x = *(j_ptr alongby 2);
		temp32 = *(j_ptr alongby 1) << 8;
		short_x = short_x | temp32;
		temp32 = *j_ptr << 16;
		short_x = short_x | temp32;
		short_y = *(first(w_y, w_bl_y1) alongby 1);
		temp32 = *(first(w_y,w_bl_y1)) << 8;
		short_y = short_y | temp32;
		qq = short_x / short_y;

		/* Multiply w_y[] by qq, putting result in w_p[] */

		k = 0;
		p_ptr = last(w_p, (w_bl_y1 + 1));
		for2(y_ptr, w_y, w_bl_y1) {
			temp = (*y_ptr * qq) + k;
			k = temp / BASE;
			*p_ptr = temp % BASE;
			next_lower(p_ptr);
		}

		*(first(w_p, (w_bl_y1 + 1))) = k;

		/*
		 * Subtract the product from the 'tail' of w_x[], putting the
		 * result back into w_x[].  NB SUB_S() is not used because
		 * the 'known' flag in z_addr[0] makes it unsuitable in this
		 * case.
		 */

		b = 0;		/* Set 'borrow' to 0 */
		b_ptr = last(w_p, (w_bl_y1 + 1));
		for(a_ptr = j_ptr alongby w_bl_y1;
			after_or_at(a_ptr, j_ptr);
			next_lower(a_ptr)) {
			acc = *b_ptr + b;
			if (*a_ptr < acc) {
				b = 1;
				*a_ptr = *a_ptr + (BASE - acc);
			} else {
				b = 0;
				*a_ptr = *a_ptr - acc;
			}
			next_lower(b_ptr);
		}

		/* Put partial quotient into w_q[] */

		*wq_ptr = qq;

		/* Test remainder and add back if necessary */

		if (b != 0) {	/* Is the result of the subtraction negative? */
			(*wq_ptr)--;

			/*
			 * Add w_y[] to the tail of w_x[].  NB ADD_S() is not
			 * used because the 'known' flag in the output area
			 * makes it unsuitable in this case.
			 * 
			 * Knuth: "A carry will occur to the left of [j_ptr],
			 * and it should be ignored since it cancels with the
			 * 'borrow' that occurred in [subtraction, above]"
			 */

			k = 0;	/* Set 'carry' to 0 */
			b_ptr = last(w_y, w_bl_y1);
			c_ptr = j_ptr;
			next(c_ptr);
			a_ptr = c_ptr alongby (w_bl_y1 - 1);
			while (after_or_at(a_ptr, c_ptr)) {
				s = *a_ptr + *b_ptr + k;
				if (s >= BASE) {
					*a_ptr = s - BASE;
					k = 1;
				} else {
					*a_ptr = s;
					k = 0;
				}
				next_lower(b_ptr);
				next_lower(a_ptr);
			}
			s = *a_ptr + k;
			if (s >= BASE)
				*a_ptr = s - BASE;
			else
				*a_ptr = s;
		}
		next(wq_ptr);	/* Increment wq_ptr in step with j_ptr */

	}			/* End of "j" loop */

	/* Unnormalize the remainder and move into w_r[]. */

	k = 0;
	for(b_ptr = j_ptr;
		before_or_at(b_ptr, j_ptr alongby (w_bl_y1 - 1));
		next(b_ptr)) {
		*r_ptr = (*b_ptr + k) / d;
		k = ((*b_ptr + k) % d) * BASE;
		next(r_ptr);
	}

	/*
	 * Unnormalize y.  This is necessary so that the calculation of the
	 * remainder can be done correctly in DIVIDE_S().
	 */

	k = 0;
	for1(a_ptr, w_y, w_bl_y1) {
		acc = (*a_ptr + k) / d;
		k = ((*a_ptr + k) % d) * BASE;
		*a_ptr = acc;
	}
        return(TRUE);
}				/* div_core */

/**************************************************************************/

/*	negate
	******

Description:
	Negates a signed two's complement integer of arbitrary length.

Inputs:	A pointer to the first byte of the operand (addr_x) and
	the length of the operand in bytes (byte_length_x).
	The operand *must* have its least significant bit as bit 0 of
	the least significant byte.

Outputs:
	The negated number is put in the area starting at addr_y.  The
	least significant bit is bit 0 of the least significant byte
	of the result.

Note:	This differs from sub_s() in that the least significant bit of the
	operand (and the result) is bit 0 of the least significant byte.
	The function is for use at the start and finish of times_s where
	an operand or result is to be negated.  The result is put back
	in the input area which, in the case of times_s(), is the workspace.

	Negate is used for two purposes:

	1 Converting negative signed numbers to their unsigned absolute values

	2 Converting unsigned numbers, suitably range restricted, to negative
	  signed numbers.

*/

negate(addr_y, byte_length_y)
	unsigned char  *addr_y;
	int             byte_length_y;
{
	unsigned char  *y_ptr, dummy_x = 0;
	unsigned int    acc, b;

	b = 0;			/* Set 'borrow' to 0 */
	y_ptr = last(addr_y, byte_length_y);
	for2(y_ptr, addr_y, byte_length_y) {
		acc = *y_ptr + b;
		if (acc != 0) {
			b = 1;
			*y_ptr = BASE - acc;
		} else {
			b = 0;
			*y_ptr = 0;
		}
	}
}				/* negate */

/**************************************************************************/

/*	getbits
	*******

Description:
	Returns the n-bit field of x that begins at position p.  The
	bits which are returned are right adjusted in an int.  The
	padding bits are clear.

Inputs:	An unsigned number (x), a position (p) and the number of bits to be
	returned (n).

Outputs:
	An integer containing the required bits, right adjusted.

Note: 	This function comes from Kernighan & Ritchie, p 45.

*/

int 
getbits(x, p, n)
	unsigned        x, p, n;
{
	return ((x >> (p + 1 - n)) & ~(~0 << n));
}				/* getbits */

/**************************************************************************/

/*	adjust_output
	*************

Description:
	Copies the result of an arithmetic operation from the workspace
	to the output area, with re-alignment to ensure that the
	most significant bit is bit 7 of the most significant byte.
Inputs:	z_addr in the arithmetic operation, the address of
	the first byte in the workspace of the operation, the number
	of padding bits in the result and the length of the
	result in bytes.
Outputs:
	The result is copied into the output area of the arithmetic operation
	with the address z_addr.
	
*/

void 
adjust_output(z_addr, w_r, padding, w_byte_length)
	unsigned char   z_addr[], w_r[];
int             padding, w_byte_length;
{
	unsigned char
	               *w_ptr = first(w_r, w_byte_length), *z_ptr = first(z_addr, w_byte_length);
	unsigned int    temp;

	temp = *w_ptr << padding;
	*z_ptr = temp;
	for (succ (w_ptr) ; before_or_at(w_ptr, last(w_r, w_byte_length)); (w_ptr)succ) {
		temp = *w_ptr >> (8 - padding);
		*z_ptr = *z_ptr | temp;
		temp = *w_ptr << padding;
		next(z_ptr);
		*z_ptr = temp;
	}

	/* Now pad with zeroes on right */

	*z_ptr = *z_ptr & (~0 << padding);
}				/* adjust_output */

/**************************************************************************/

/*	adjust_input
	************

Description:
	Takes the operand of an arithmetic function for arbitrary length
	numbers and aligns it in work space with the least significant
	bit at a position determined from 'w_length'.

Inputs:	Pointers to the first byte of the operand (addr) and the
	first byte of that part of the workspace where arithmetic
	will be done (worksp); the offset of the
	first (most significant) bit of the operand (offset);
	the length in bits of the operand (len); the length
	in bits of the workspace to take the operand (w_length);
	a boolean recording whether the number is signed or not.

Outputs:
	The operand is written into the workspace as described with
	sign bits or zeroes padding any unused space on the left.
	The padding bits in the least significant byte are cleared.

*/

void 
adjust_input(addr, offset, len, worksp, w_length, signed_number)
	int             offset, len, w_length;
	unsigned char   addr[], worksp[];
BOOL            signed_number;
{
	unsigned char
	               *first_byte, *last_byte, *xx,	/* A pointer to bytes in
							 * operand */
	               *temp_ww,/* A pointer to bytes in workspace */
	               *ww,	/* A pointer to bytes in workspace */
	                temp, mask;
	int             right_padding,	/* Number of padding bits in last
					 * byte of x */
	                w_padding,	/* Number of padding bits in the last
					 * byte of the workspace */
	                pad_diff,	/* The difference between
					 * right_padding and w_padding */
	                w_byte_length = ((w_length + 7) / 8), x_byte_length = ((offset + len + 7) / 8) - (offset / 8), temp_i, sign;	/* Records the sign of
																	 * the number.  This is
																	 * not used if the
																	 * number is unsigned. */
	BOOL            diff = TRUE;	/* Records the direction of the
					 * difference between right_padding
					 * and pad_diff.  It is ignored if
					 * there is no difference. */

	first_byte = row_start(addr, offset, len);
	last_byte = row_end(addr, offset, len);
	if ((right_padding = ((offset + len) % 8)) != 0)
		right_padding = 8 - ((offset + len) % 8);
	if (signed_number)
		sign = getbits(*first_byte, (7 - (offset % 8)), 1);
	if ((w_padding = (w_length % 8)) != 0)
		w_padding = 8 - (w_length % 8);
	if ((pad_diff = right_padding - w_padding) < 0) {
		pad_diff = w_padding - right_padding;
		diff = FALSE;
	}
	/*
	 * Move x into the workspace, shifting all bits so that the least
	 * significant bit of the operand is at the position corresponding to
	 * w_length.  All left padding bits are given the same value as the
	 * sign bit.  This operation is done 'right to left'. The padding
	 * bits in the least significant byte are cleared.
	 */

	/* Load 'temp' with last byte of x, clearing right padding bits */
	mask = 0377 << right_padding;
	temp = *last_byte & mask;
	ww = last(worksp, w_byte_length);
	if (diff) {
		*ww = temp >> pad_diff;
		for(xx = last_byte backby 1; after_or_at(xx, first_byte); (xx)pred ) {
			temp = *xx << (8 - pad_diff);
			*ww = *ww | temp;
			temp = *xx >> pad_diff;
			if (after(ww, first(worksp, w_byte_length))) {
				next_lower(ww);
				*ww = temp;
			} else
				break;
		}
	} else {
		*ww = temp << pad_diff;
		temp = *last_byte >> (8 - pad_diff);
		if (after(ww, first(worksp, w_byte_length))) {
			next_lower(ww);
			*ww = temp;
		}
		for(xx = last_byte backby 1; after_or_at(xx, first_byte); (xx)pred ) {
			temp = *xx << pad_diff;
			*ww = *ww | temp;
			temp = *xx >> (8 - pad_diff);
			if (after(ww, first(worksp, w_byte_length))) {
				next_lower(ww);
				*ww = temp;
			} else
				break;
		}
	}

	/* Now attend to left padding bits */

	if (!signed_number)
		sign = 0;
	if (sign == 0) {
		temp = 0;
		if ((mask = 0377 >> (8 - ((len + w_padding) % 8))) == 0) {
			/* Check whether *ww contains valid bits */
			temp_ww = last(worksp, w_byte_length);
			temp_i = ((len + w_padding + 7) / 8) -1;
			while (temp_i > 0) {
				next_lower(temp_ww);
				temp_i--;
			}
			if (after(temp_ww, ww))
				*ww = temp;
		} else
			*ww = *ww & mask;
	} else {
		temp = ~0;
		if ((mask = temp << ((len + w_padding) % 8)) == 0377) {
			/* Check whether *ww contains valid bits */
			temp_ww = last(worksp, w_byte_length);
			temp_i = ((len + w_padding + 7) / 8) -1;
			while (temp_i > 0) {
				next_lower(temp_ww);
				temp_i--;
			}
			if (after(temp_ww, ww))
				*ww = temp;
		} else
			*ww = *ww | mask;
	}
	next_lower(ww);
	while (after_or_at(ww, first(worksp, w_byte_length))) {
		*ww = temp;
		next_lower(ww);
	}
}				/* adjust_input */


