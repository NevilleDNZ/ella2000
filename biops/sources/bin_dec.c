/* $Id: bin_dec.c,v 34.2 1995/03/29 13:03:43 ella Exp $ */


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

static char *rcsid = " $Id: bin_dec.c,v 34.2 1995/03/29 13:03:43 ella Exp $ ";

/* DEC/CMS REPLACEMENT HISTORY, Element BIN_DEC.C */
/* *6    10-AUG-1989 12:15:57 ELLADEV "Definitive release 4.0, first provisional release 4.1. BGH" */
/* *5    30-JUN-1989 17:12:41 ELLADEV "Updated provisional with fixes for R4B383. BGH" */
/* *4    26-JUN-1989 18:04:28 ELLADEV "Updated provisional with fixes for R4B380. BGH" */
/* *3    17-FEB-1989 17:16:34 ELLADEV "Updated provisional with partial fixes for R4B043. BGH" */
/* *2    21-JAN-1989 11:07:50 ELLADEV "Provisional for Release 4.0 BGH" */
/* *1    17-JAN-1989 16:53:34 ELLADEV "first draft for Release 4.0, stored in CMS lib [elladev.cms.ella_server]""" */
/* DEC/CMS REPLACEMENT HISTORY, Element BIN_DEC.C */
/* Conversion of an arbitrary length unsigned binary number into the equivalent
decimal number. */

#include "biops.h"

/**************************************************************************/
/* 29:06:89  Changes for VAX.  SPT.
 */

/*	CONVERT_US_1
	************

Description:
	Converts an arbitrary-length unsigned binary number into the
	corresponding decimal number.

Inputs:	'bit_string' is an unsigned binary number and 'b_bit_length'
	is its length in bits. 'b_known' is TRUE for valid input,
	otherwise FALSE. 'd_byte_length' is the length (in bytes)
	of the output.

Outputs:
	If the conversion is successful then '&bit_string[tvsize+qfsize]' is an unsigned 
	binary number with length 'b_bit_length', bit_string[0..tvsize-1] is
	twovalued_TRUE and bit_string[tvsize..tvsize+qfsize-1] is TRUE. 
        If the conversion is unsuccessful (because insufficient space has been 
        allowed for it) then bit_string[0..tvsize-1] is twovalue_FALSE and 
        bit_string[tvsize..tvsize+qfaize-1] is FALSE.

Note:	The workspace requirement is ((b_bit_length + 7) / 8) + d_byte_length.

Design:
*
* Conversion of an arbitrary length, unsigned binary number to its
* decimal equivalent
*
* ASSERT B == |b|
*
* CONVERT_US_1(bit_string, b_bit_length, dec_string, d_byte_length)
* unsigned char bit_string[], dec_string[];
* int b_bit_length, d_byte_length;
* {
*      unsigned char base_256 = 256, digits[], w_b[];
*      int i, b_byte_length = (b_bit_length + 7) / 8;
*
*      COMMENT: move bit_string into workspace with the least significant
*      bit at bit 0 of the least significant byte.  Pad with zeroes on the left.
*
*      adjust_input(bit_string[], w_b[]);
*
*      set_to_zero(dec_string[]);
*      i = 0;
*      while (TRUE)
*      {
*            digits[] = binary_to_decimal(w_b[i]);
*            dec_string[] = dec_string[] + digits[];
*            i++;
*            if (i >= b_byte_length) break;
*            dec_string[] = dec_string[] * base_256;
*      }
*
*      ASSERT D == |d|
*
*      decimal_to_ella(dec_string[]);
*      
* }
*/

void CONVERT_US_1(b_known, bit_string, bit_offset, b_bit_length, 
		 d_byte_length, dec_string, workspace)
int d_byte_length, bit_offset, b_bit_length;
BOOL b_known;
unsigned char dec_string[], bit_string[], workspace[];
{
#define tv_result dec_string
#define qf_result qfalign(tv_result + tvsize)
#define ds_result bsalign(qf_result + qfsize)

	unsigned char 
		*w_d,
		*w_b,
		digits[3],
		*dg_ptr,
		*temp,
		*b_ptr,
		*d_ptr, 
		*ptr;
	int 
		b_byte_length,
		padding,
		i,
		n;
	unsigned int s, k, p;

	offswitch(bit_string, bit_offset, b_bit_length)

	b_byte_length = (b_bit_length + 7) / 8;
	padding = (b_byte_length * 8) - b_bit_length;

	if (!b_known)
	{
		*(tv)tv_result = twovalued_QUERY;
		*(qf)qf_result = FALSE;
		return;
	}
	else
	{
		*(tv)tv_result = twovalued_TRUE;
		*(qf)qf_result = TRUE;
	}

	w_b = &workspace[0];
	w_d = &w_b[b_byte_length];

	/* Move bit_string[] into workspace, with the least significant
	bit at bit 0 of the least significant byte */

	adjust_input(bit_string, bit_offset, b_bit_length, w_b, 
			(b_byte_length * 8), FALSE);

	/* Set w_d[] to zero */

	for2(ptr, w_d, d_byte_length) *ptr = 0;

	/* The conversion */

	i = 0;
	b_ptr = first(w_b, b_byte_length);

	while (TRUE)
	{
		k = *b_ptr; 
		for2(d_ptr, w_d, d_byte_length)
		{
			s = *d_ptr + k;
			if (s >= base_10)
			{
				*d_ptr = s % base_10;
				k = s / base_10;
			}
			else 
			{
				*d_ptr = s;
				k = 0;
			}
		}

		/* Test for overflow with carry */

		if (k != 0)
		{
			*(tv)tv_result = twovalued_FALSE;
			*(qf)qf_result = FALSE;
			return;
		}

		i++;
		if (i >= b_byte_length) break;
		next(b_ptr);

		/* Multiply w_d[] by BASE */

		k = 0;
		for2(d_ptr, w_d, d_byte_length)
		{
			p = (*d_ptr * BASE) + k;
			*d_ptr = p % base_10;
			k = p / base_10;
		}

		if (k != 0)
		{
			*(tv)tv_result = twovalued_FALSE; 
			*(qf)qf_result = FALSE;
			return;
		}
	}

	/* Move w_d[] to output area with conversion to Ella codes */

	ptr = first(adjustaddress(ds_result, d_byte_length), d_byte_length);
	for1(d_ptr, w_d, d_byte_length)
	{
		*ptr = *d_ptr + 1;
		next(ptr);
	}
} /* CONVERT_US_1 */
