/* $Id: sqrt_us.c,v 34.2 1995/03/29 13:04:12 ella Exp $ */


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

static char *rcsid = " $Id: sqrt_us.c,v 34.2 1995/03/29 13:04:12 ella Exp $ ";

/* DEC/CMS REPLACEMENT HISTORY, Element SQRT_US.C */
/* *6    10-AUG-1989 12:34:42 ELLADEV "Definitive release 4.0, first provisional release 4.1. BGH" */
/* *5    30-JUN-1989 17:15:35 ELLADEV "Updated provisional with fixes for R4B383. BGH" */
/* *4    26-JUN-1989 18:07:39 ELLADEV "Updated provisional with fixes for R4B380. BGH" */
/* *3    17-FEB-1989 17:18:14 ELLADEV "Updated provisional with partial fixes for R4B043. BGH" */
/* *2    21-JAN-1989 11:23:43 ELLADEV "Provisional for Release 4.0 BGH" */
/* *1    17-JAN-1989 16:55:03 ELLADEV "first draft for Release 4.0, stored in CMS lib [elladev.cms.ella_server]""" */
/* DEC/CMS REPLACEMENT HISTORY, Element SQRT_US.C */
/* Calculates the square root of an arbitrary length unsigned binary number. */

#include "biops.h"

/**************************************************************************/
/* 29:06:89  Changes for VAX.  SPT.
 */

/*	SQRT_US
	*******

Description:
	Calculates the square root of an arbitrary-length unsigned binary 
	number.

Inputs:	The operand is described by the triple X = <x_addr, x_offset, x_len>
	where 'x_addr' is the address of the operand, 'x_offset' is
	the offset and 'x_len' is its length in bits.  'x_known'
	is a flag signalling whether x is 'known' or not. 'workspace'
	is the address of workspace.

Outputs:
	r_addr[0..qfsize] is the 'known' flag for the result.
	&r_addr[qfsize] is the address of the result.

Note:	The workspace requirement is w_z_byte_length + (r_byte_length * 2) + 
	(double_rb_length * 2) where r_byte_length = (r_len + 7) / 8
	and double_rb_length = 2 * r_byte_length and r_len = (x_len + 1) / 2,
        w_z_byte_length = (r_len+8)/8.

Design:
*
* Calculation of the square root of an arbitrary length, unsigned binary 
* number.
*
* ASSERT x[] >= 0
*
* SQRT_US (x[], r[])
* unsigned char x[], r[];
* {
*      unsigned char ww[], wx[], wy[], wz[];
*
*      adjust_input(x[],wx[]);
*
*      wy[] = 0;
*      wz[] = 1;
*      while (wz[] * wz[] <= wx[])
*           wz[] = wz[] * 2;
*
*      ASSERT wz[] * wz[] > wx[]
*
*      while (wz[] != 1)
*      {
*           ASSERT wy[] * wy[] <= wx[] && (wy[] + wz[]) * (wy[] + wz[]) > wx[]
*
*           wz[] = wz[] / 2;
*           ww[] = wy[] + wz[];
*           if (ww[] * ww[] <= wx[])
*                wy[] = ww[];
*      }
*      adjust_output(wy[], r[]);
* }
* ASSERT r[] >= 0 && (r[]**2) <= x[] && (r[]+1)**2 > x[]
*/

void SQRT_US(x_known, x_addr, x_offset, x_len, 
		r_addr, workspace)
int x_len;
BOOL x_known;
unsigned char x_addr[], r_addr[], workspace[];
{
#define qf_result r_addr
#define bs_result bsalign(qf_result + qfsize)

	unsigned char
		*w_x, /* Pointer to workspace for x */
		*w_w, /* Pointer to workspace for trial values of y**2 */
		*w_z, /* Pointer to workspace for z */
		*w_y, /* Pointer to workspace for trial values of y */
		*ww_squ, /* Pointer to workspace for (w[]**2) */
		*ww_squ_ptr, /* Pointer to workspace for (w[]**2) */
		*ww_squ1_ptr, /* Pointer to workspace for (w[]**2) */
		*wx_ptr,
		*wy_ptr, 
		*wz_ptr, 
		*ww_ptr, 
		*ww1_ptr, 
		*ww2_ptr, 
		*ptr;
	int	i, j, n,
		temp1, temp2,
		signif_bits,
		r_len,
		r_byte_length,
		double_rb_length,
                w_z_byte_length,
		padding;
	BOOL more, y_is_zero, zero_bytes;
	unsigned int s, k, p, temp;

	offswitch(x_addr, x_offset, x_len)

	r_len = (x_len + 1) / 2;
	r_byte_length = (r_len + 7) / 8;
	double_rb_length = r_byte_length * 2;
	w_z_byte_length = (r_len + 8)/8;
	padding = (r_byte_length * 8) - r_len;
	y_is_zero = TRUE;

	if (!x_known)
	{
		*(qf)qf_result = FALSE;
		return;
	}
	else *(qf)qf_result  = TRUE;

	/* Lengths required in workspace:
		w_x[], w_y[] need r_byte_length.
                w_z needs w_z_byte_length.
		w_x[], ww_squ[] need 2 * r_byte_length.
	*/

	w_x = workspace;
	w_w = &w_x[2 * r_byte_length];
	ww_squ = &w_w[r_byte_length];
	w_z = &ww_squ[2 * r_byte_length];
	w_y = &w_z[w_z_byte_length];

	adjust_input(x_addr, x_offset, x_len, w_x, 
			(2 * r_byte_length * 8), FALSE);

	/* Set w_y[] to zero */

	for1(ptr, w_y, r_byte_length) *ptr = 0;

	/* Find the number of significant bits in w_x[] */

	i = double_rb_length;
	ptr = first(w_x, double_rb_length);
	while (*ptr == 0 && i > 0)
	{
		i--;
		next(ptr);
	}

	if (i == 0) temp = 0;
	else temp = *ptr;

	j = 0;
	while (temp != 0)
	{
		temp = temp >> 1;
		j++;
	}

	if (i == 0) signif_bits = 0;
	else signif_bits = ((i - 1) * 8) + j;

	/* w_z[] = 2**n where n == (signif_bits + 1) / 2 */

	for1(ptr, w_z, w_z_byte_length) *ptr = 0;
	n = (signif_bits + 1) / 2;
	temp1 = n % 8;
	temp2 = n / 8;
	*((last(w_z, w_z_byte_length)) backby temp2) = 1 << temp1;

	while (TRUE)
	{
		/* if (w_z[] == 1) break; */

		zero_bytes = TRUE;
		ptr = last(w_z, w_z_byte_length);
		next_lower(ptr);
		while (after_or_at(ptr, first(w_z, w_z_byte_length)))
		{
			if (*ptr != 0) zero_bytes = FALSE;
			next_lower(ptr);
		}
		if (zero_bytes && *last(w_z, w_z_byte_length) == 1) break;

		/* w_z[] = w_z[] / 2; */

		k = 0;
		for1(wz_ptr, w_z, w_z_byte_length)
		{
			temp = *wz_ptr + (k * BASE);
			*wz_ptr = temp / 2;
			k = temp % 2;
		}

		/* w_w[] = w_y[] + w_z[]; */

		k = 0;
		wy_ptr = last(w_y, r_byte_length);
		wz_ptr = last(w_z, w_z_byte_length);
		for2(ww_ptr, w_w, r_byte_length)
		{
			s = *wy_ptr + *wz_ptr + k;
			if (s >= BASE)
			{
				*ww_ptr = s - BASE;
				k = 1;
			}
			else
			{
				*ww_ptr = s;
				k = 0;
			}
			next_lower(wy_ptr);
			next_lower(wz_ptr);
		}

		/* ww_squ[] = (w_w[]**2) */

		/* Set ww_squ[] to zero */

		for2(ww_squ_ptr, ww_squ, double_rb_length) *ww_squ_ptr = 0;

		ww_squ1_ptr = last(ww_squ, double_rb_length);
		ww_squ_ptr = ww_squ1_ptr;
		ww2_ptr = last(w_w, r_byte_length);
		while (after_or_at(ww2_ptr, first(w_w, r_byte_length)))
		{
			if (*ww2_ptr != 0)
			{
				ww1_ptr = last(w_w, r_byte_length);
				k = 0;
				while (after_or_at(ww1_ptr, 
					first(w_w, r_byte_length)))
				{
					p = (*ww1_ptr * *ww2_ptr) + 
						*ww_squ_ptr + k;
					*ww_squ_ptr = p % BASE;
					k = p / BASE;
					next_lower(ww1_ptr);
					next_lower(ww_squ_ptr);
				}
				*ww_squ_ptr = k;
			}
			next_lower(ww_squ1_ptr);
			ww_squ_ptr = ww_squ1_ptr;
			next_lower(ww2_ptr);
		}

		/* Test whether ww_squ[] <= w_x[] and assign
		w_y[] accordingly. */

		ww_squ_ptr = first(ww_squ, double_rb_length);
		wx_ptr = first(w_x, double_rb_length);
		while ((more = before_or_at(ww_squ_ptr, 
				last(ww_squ, double_rb_length))) 
				&& (*ww_squ_ptr == *wx_ptr)) 
		{
			next(ww_squ_ptr);
			next(wx_ptr);
		}

		if (!more || (*ww_squ_ptr < *wx_ptr)) 
		{
			wy_ptr = first(w_y, r_byte_length);
			for1(ww_ptr, w_w, r_byte_length)
			{
				*wy_ptr = *ww_ptr;
				next(wy_ptr);
			}
		}
	}
	adjust_output(adjustaddress(bs_result, r_byte_length),
	   w_y, padding, r_byte_length);
} /* SQRT_US */
