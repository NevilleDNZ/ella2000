/* $Id: times_us.c,v 34.2 1995/03/29 13:04:15 ella Exp $ */


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

static char *rcsid = " $Id: times_us.c,v 34.2 1995/03/29 13:04:15 ella Exp $ ";

/* DEC/CMS REPLACEMENT HISTORY, Element TIMES_US.C */
/* *6    10-AUG-1989 12:35:22 ELLADEV "Definitive release 4.0, first provisional release 4.1. BGH" */
/* *5    30-JUN-1989 17:15:57 ELLADEV "Updated provisional with fixes for R4B383. BGH" */
/* *4    26-JUN-1989 18:08:11 ELLADEV "Updated provisional with fixes for R4B380. BGH" */
/* *3    17-FEB-1989 17:18:37 ELLADEV "Updated provisional with partial fixes for R4B043. BGH" */
/* *2    21-JAN-1989 11:24:14 ELLADEV "Provisional for Release 4.0 BGH" */
/* *1    17-JAN-1989 16:55:24 ELLADEV "first draft for Release 4.0, stored in CMS lib [elladev.cms.ella_server]""" */
/* DEC/CMS REPLACEMENT HISTORY, Element TIMES_US.C */
/* Multiplication of two arbitrary length, two's complement, unsigned numbers */

#include "biops.h"

/**************************************************************************/
/* 29:06:89  Changes for VAX.  SPT.
 */

/*	times_us
	********

Description:
	Multiplies two two's complement integers (unsigned) of arbitrary length.

Inputs:	The first operand is described by the triple X = <x_addr,
	x_offset, x_len>.  The second operand is similar.
	x_known and y_known are one-byte boolean flags signalling
	whether a 'signal' has a specified value (TRUE) or not.
	workspace is a pointer to an external area of memory where
	intermediate results may be put.

Outputs:
	The result is stored in a bit string described by
	Z = <&z_addr[qfsize], 0, (x_len + y_len)>.  The 'known'
	flag for the output is stored at &z_addr[0].

Note:	The workspace requirement is (((x_len + 7) / 8) + ((y_len + 7) / 8)
	+ ((x_len + y_len + 7) / 8).

Design:
*
* Multiplication of arbitrary length, two's complement integers (unsigned).
*
* ASSERT X == |x| && Y == |y|
*
* times_us (x, y, product)
* unsigned char x[], y[], product[];
* {
*      int xi, yi, i, ri, rri, y1, k, base, byte_length_r,
*           byte_length_x, byte_length_y;
*      unsigned p;
*
*      byte_length_x = (bit_length(x) + 7) / 8;
*      byte_length_y = (bit_length(y) + 7) / 8;
*      byte_length_r = (bit_length(x) + bit_length(y)) / 8;
*      adjust_input(x);
*      adjust_input(y);
*
*      set_to_zero(product, byte_length_r);
*      rri = byte_length_r - 1;
*      yi = byte_length_y - 1;
*      while (yi >= 0)
*      {
*           y1 = y[yi];
*           if (y1 != 0)
*           {
*                ri = rri;
*                xi = byte_length_x - 1;
*                k = 0;
*                while (xi >= 0)
*                {
*                     p = (x[xi] * y1) + product[ri] + k;
*                     product[ri] = p % base;
*                     k = p / base;
*                     xi--;
*                     ri--;
*                }
*           }
*           rri--;
*           yi--;
*      }
*
* ASSERT |product| == |x| * |y|
*
* }
*
*/

void 
TIMES_US(x_known, x_addr, x_offset, x_len, 
	 y_known, y_addr, y_offset, y_len, 
	 z_addr, workspace)
	int             x_offset, x_len, y_offset, y_len;
	BOOL            x_known, y_known;
	unsigned char   x_addr[], y_addr[], z_addr[], workspace[];
{
#define qf_result z_addr
#define bs_result bsalign(qf_result + qfsize)

	unsigned char
	               *w_x,	/* w_x is the first byte of x in the
				 * workspace */
	               *w_y,	/* w_y is the first byte of y in the
				 * workspace */
	               *w_r,	/* w_r is the first byte of the result in the
				 * workspace */
	               *wr_ptr, *wrr_ptr, *wrk_ptr, *wy_ptr, *wx_ptr;	/* Pointers to the
									 * workspace */

	int             byte_length_x,	/* Number of bytes
					 * containing
					 * significant bits of x */
	                byte_length_y,	/* Number of bytes
					 * containing
					 * significant bits of y */
	                w_bl_x,		/* Number of bytes of x
					 * in workspace */
	                w_bl_y,		/* Number of bytes of y
					 * in workspace */
	                w_bl_r, byte_length_r, padding;	/* The number of padding
							 * bits in the result */

	unsigned        p,	/* p is for the product of two bytes */
	                k;	/* k is for the 'carry' */

	offswitch(x_addr,x_offset,x_len)
	offswitch(y_addr,y_offset,y_len)

	byte_length_x = ((x_offset + x_len + 7) / 8) - (x_offset / 8);
	byte_length_y = ((y_offset + y_len + 7) / 8) - (y_offset / 8);
	w_bl_x = ((x_len + 7) / 8);
	w_bl_y = ((y_len + 7) / 8);
	w_bl_r = w_bl_x + w_bl_y;
	byte_length_r = (x_len + y_len + 7) / 8;

	/* Check whether x and y are 'known' */

	if (!x_known || !y_known) {
		*(qf)qf_result  = FALSE;
		return;
	} else
		*(qf)qf_result  = TRUE;

	w_x = &workspace[0];
	w_y = &workspace[w_bl_x];
	w_r = &workspace[w_bl_x + w_bl_y];
	if ((padding = (8 - ((x_len + y_len) % 8))) == 8)
		padding = 0;

	/*
	 * In 'adjust_input', x (and y) are copied into the workspace with
	 * the least significant bit at the position of the least significant
	 * bit of the byte corresponding to 'byte_length_x' (or
	 * byte_length_y). This is achieved by giving the length of the
	 * workspace ('w_length') as 'byte_length_x * 8'.  Because the
	 * parameter for 'signed_number' is FALSE, all left padding bits are
	 * set to zero.
	 */

	adjust_input(x_addr, x_offset, x_len, w_x,
		     (w_bl_x * 8), FALSE);
	adjust_input(y_addr, y_offset, y_len, w_y,
		     (w_bl_y * 8), FALSE);

	/* The arithmetic */

	/* Set workspace for product to zero */

	for2(wr_ptr, w_r, w_bl_r) * wr_ptr = 0;

	wrr_ptr = last(w_r, w_bl_r);
	wrk_ptr = nth(w_r, w_bl_r, w_bl_y - 1);
	wy_ptr = last(w_y, w_bl_y);
	while (after_or_at(wy_ptr, first(w_y, w_bl_y))) {
		if (*wy_ptr != 0) {
			wr_ptr = wrr_ptr;
			wx_ptr = last(w_x, w_bl_x);
			k = 0;
			while (after_or_at(wx_ptr, first(w_x, w_bl_x))) {
				p = (*wx_ptr * *wy_ptr) + *wr_ptr + k;
				*wr_ptr = p % BASE;
				k = p / BASE;
				next_lower(wx_ptr);
				next_lower(wr_ptr);
			}
			*wrk_ptr = k;
		}
		next_lower(wrr_ptr);
		next_lower(wrk_ptr);
		next_lower(wy_ptr);
	}
#ifndef vax
	if (w_bl_r > byte_length_r)
		w_r++;
#endif
	adjust_output(adjustaddress(bs_result, byte_length_r), w_r, padding, byte_length_r);
}				/* times_us */
