/* $Id: add_s.c,v 34.2 1995/03/29 13:03:42 ella Exp $ */


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

static char *rcsid = " $Id: add_s.c,v 34.2 1995/03/29 13:03:42 ella Exp $ ";

/* DEC/CMS REPLACEMENT HISTORY, Element ADD_S.C */
/* *6    10-AUG-1989 12:14:36 ELLADEV "Definitive release 4.0, first provisional release 4.1. BGH" */
/* *5    30-JUN-1989 17:12:32 ELLADEV "Updated provisional with fixes for R4B383. BGH" */
/* *4    26-JUN-1989 18:04:16 ELLADEV "Updated provisional with fixes for R4B380. BGH" */
/* *3    17-FEB-1989 17:16:24 ELLADEV "Updated provisional with partial fixes for R4B043. BGH" */
/* *2    21-JAN-1989 11:06:37 ELLADEV "Provisional for Release 4.0 BGH" */
/* *1    17-JAN-1989 16:53:27 ELLADEV "first draft for Release 4.0, stored in CMS lib [elladev.cms.ella_server]""" */
/* DEC/CMS REPLACEMENT HISTORY, Element ADD_S.C */
/* Addition of two arbitrary length, two's complement, signed numbers */

#include "biops.h"

/**************************************************************************/
/* 29:06:89  Changes for VAX.  SPT.
 */

/*	add_s
	*****

Description:
	Adds two two's complement integers (signed) of arbitrary length.

Inputs:	The first operand is described by the triple X = <x_addr,
	x_offset, x_len>.  The second operand is similar.
	x_known and y_known are one-byte boolean flags signalling
	whether a 'signal' has a specified value (TRUE) or not.
	'workspace' is a pointer to an external area of memory where
	intermediate results may be put.

Outputs:
	The result is stored in a bit string described by
	Z = <&z_addr[qfsize], 0, max(x_len, y_len) + 1>.  The 'known'
	flag for the output is stored starting at z_addr[0].

Note:	The workspace requirement is 2 * (((max(x_len, y_len) + 1) + 7) / 8).

Design:
*
* Addition of arbitrary length, two's complement integers (signed).
*
* Design
*
* ASSERT X == +|x| && Y == +|y|
*
* add_s (x, y, sum)
* unsigned char x[], y[], sum[];
* {
*
*      int i; k = 0; base, length;
*
*      length = ((max(length(x), length(y)) + 1) + 7) / 8;
*      i = length - 1;
*      adjust_input(x);
*      adjust_input(y);
*
*      ASSERT |x| == [2**length] Y && |y| = [2**length] Y
*
*      while (i >= 0)
*      {
*           s = x[i] + y[i] + k;
*           if (s > base)
*           {
*                sum[i] = s - base;
*                k = 1;
*           }
*           else
*           {
*                sum[i] = s;
*                k = 0;
*           }
*           i--;
*      }
*
* ASSERT |sum| == |x| + |y|
*
* }
*
* ASSERT +|sum| == [2**length] |x| + |y|
*    =>  +|sum| == [2**length] X + Y
*    =>  +|sum| == X + Y, as -2**(length-1) <= (X+Y) && (X+Y) < 2**(length-1)
*/

void 
ADD_S(x_known, x_addr, x_offset, x_len,
      y_known, y_addr, y_offset, y_len,
      z_addr, workspace)
	int             x_offset, x_len, y_offset, y_len;
	BOOL            x_known, y_known;
	unsigned char   x_addr[], y_addr[], z_addr[], workspace[];
{
#define qf_z z_addr
#define bs_z bsalign(qf_z + qfsize)

	unsigned char
	               *w_x,	/* w_x is the first byte of x in the
				 * workspace */
	               *w_y,	/* w_y is the first byte of y in the
				 * workspace */
	               *x_ptr, *y_ptr, *z_ptr;

	int             w_b_length,	/* length of workspace for each
					 * operand, in bytes */
	                w_length;	/* length of result in bits */

	unsigned int
	                s,	/* s is for the sum of two bytes */
	                k;	/* k is for the 'carry' */
	BOOL            signed_number = TRUE;

	offswitch(x_addr, x_offset, x_len)
        offswitch(y_addr, y_offset, y_len)

	/* Check whether x and y are 'known' */

	if (!x_known || !y_known) {
		*(qf)qf_z = FALSE;
		return;
	} else
		*(qf)qf_z = TRUE;

	/*
	 * The length of the result is calculated in bits as the larger of
	 * x_len and y_len plus one bit to allow for the last carry in the
	 * result.
	 */

	w_length = max(x_len, y_len) + 1;

	/*
	 * The number of bytes in the workspace for x, y and the result is
	 * calculated from w_length with rounding up
	 */

	w_b_length = (w_length + 7) / 8;

	w_x = &workspace[0];
	w_y = &workspace[w_b_length];

	adjust_input(x_addr, x_offset, x_len, w_x, w_length, signed_number);
	adjust_input(y_addr, y_offset, y_len, w_y, w_length, signed_number);

	/* The arithmetic */

	k = 0;			/* Set 'carry' to 0 */
	x_ptr = last(w_x, w_b_length);
	y_ptr = last(w_y, w_b_length);
	for2(z_ptr, adjustaddress(bs_z, w_b_length), w_b_length) {
		s = *x_ptr + *y_ptr + k;
		if (s >= BASE) {
			*z_ptr = s - BASE;
			k = 1;
		} else {
			*z_ptr = s;
			k = 0;
		}
		next_lower(x_ptr);
		next_lower(y_ptr);
	}

/*
	Here is an alternative for the arithmetic part of this function
	proposed by Paul Rouse, which may be more efficient, depending
	on how the compiler works:

	void plus(size, x, y, result)
	unsigned size;
	unsigned char *x, *y, *result;
	{
		int n = 0;
		while (size--)
		{
			n += *(x++) + *(y++);
			*(result++) = n & 0xff;
			n = n >> 8;
		}
	}

*/

}				/* add_s */



