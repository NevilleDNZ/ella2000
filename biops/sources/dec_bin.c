/* $Id: dec_bin.c,v 34.2 1995/03/29 13:03:47 ella Exp $ */


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

static char *rcsid = "$Id: dec_bin.c,v 34.2 1995/03/29 13:03:47 ella Exp $ ";

/* DEC/CMS REPLACEMENT HISTORY, Element DEC_BIN.C */
/* *7    26-SEP-1989 15:28:41 ELLADEV "Updated provisional with fixes for R4B429. BGH" */
/* *6    10-AUG-1989 12:17:51 ELLADEV "Definitive release 4.0, first provisional release 4.1. BGH" */
/* *5    30-JUN-1989 17:13:12 ELLADEV "Updated provisional with fixes for R4B383. BGH" */
/* *4    26-JUN-1989 18:05:10 ELLADEV "Updated provisional with fixes for R4B380. BGH" */
/* *3    17-FEB-1989 17:16:41 ELLADEV "Updated provisional with partial fixes for R4B043. BGH" */
/* *2    21-JAN-1989 11:09:14 ELLADEV "Provisional for Release 4.0 BGH" */
/* *1    17-JAN-1989 16:53:47 ELLADEV "first draft for Release 4.0, stored in CMS lib [elladev.cms.ella_server]""" */
/* DEC/CMS REPLACEMENT HISTORY, Element DEC_BIN.C */
/* Conversion of an arbitrary length unsigned decimal number into the equivalent
binary number. */

#include "biops.h"

/**************************************************************************/
/* 29:06:89  Changes for VAX.  SPT.
   05:09:89  Added check for ms byte overflow. R4B429. MDR.
 */

/*	CONVERT_US_2
	************

Description:
	Converts an arbitrary-length unsigned decimal number into the
	corresponding binary number.

Inputs:	'dec_string' is a decimal character string and 'd_byte_length'
	is its length. 'd_known' records whether the decimal character
	string is 'known' or not. 'b_bit_length' is the length (in bits) of
	the output binary number.

Outputs:
	If the conversion is successful then '&bit_string[tvsize+qfsize]' is an unsigned 
	binary number with length 'b_bit_length', bit_string[0..tvsize-1] is
	twovalued_TRUE and bit_string[tvsize..tvsize+qfsize-1] is TRUE.  
        If the conversion is unsuccessful (because insufficient space has been 
        allowed for it) then bit_string[0..tvsize-1] is twovalue_FALSE and 
        bit_string[tvsize..tvsize+qfsize-1] is FALSE.

Note:	The workspace requirement is (d_byte_length + ((b_bit_length + 7) / 8)).

Design:
*
* Conversion of an arbitrary length, unsigned decimal number to its
* binary equivalent
*
* ASSERT D == |d|
*
* CONVERT_US_2 (dec_string, d_byte_length, bit_string, b_bit_length)
* unsigned char dec_string[], bit_string[];
* int d_byte_length, b_bit_length;
* {
*      unsigned char base_10 = 012, digit, w_d[];
*      int i;
*
*      COMMENT: dec_string[] is input using Ella codes for decimal digits.
*
*      ella_to_decimal(dec_string[], w_d[]);  
* 
*      set_to_zero(bit_string[]);
*      i = 0;
*      while (TRUE)
*      {
*            digit = decimal_to_binary(w_d[i]);
*            bit_string[] = bit_string[] + digit;
*            i++;
*            if (i >= d_byte_length) break;
*            bit_string[] = bit_string[] * base_10;
*      }
*      ASSERT B == |b|
* }
*/

void CONVERT_US_2(d_known, dec_string, d_byte_length, 
		 b_bit_length, bit_string, workspace)
int d_byte_length, b_bit_length;
BOOL d_known;
unsigned char dec_string[], bit_string[], workspace[];
{
#define tv_result bit_string
#define qf_result qfalign(tv_result + tvsize)
#define bs_result bsalign(qf_result + qfsize)

	unsigned char 
		*w_d,
		*w_b,
		*digit, 
		*b_ptr,
		*d_ptr, 
		*w_ptr;
	int 
		b_byte_length = (b_bit_length + 7) / 8,
		padding = (b_byte_length * 8) - b_bit_length,
		i;
	unsigned int s, k, p;

	if (!d_known) {
		*(tv)tv_result = twovalued_QUERY;
		*(qf)qf_result = FALSE;
		return;
	}
	else
	{
		*(tv)tv_result = twovalued_TRUE;
		*(qf)qf_result = TRUE;
	}

	w_d = &workspace[0];
	w_b = &w_d[d_byte_length];

	/* Move dec_string[] into workspace, converting Ella codes to
	decimal digits */

	d_ptr = last(adjustaddress(dec_string, d_byte_length), d_byte_length);
	for2(w_ptr, w_d, d_byte_length)
	{
		*w_ptr = *d_ptr - 1;
		next_lower(d_ptr);
	}

	/* Set w_b[] to zero */

	for2(w_ptr, w_b, b_byte_length) *w_ptr = 0;

	/* The conversion */

	i = 0;
	digit = first(w_d, d_byte_length);
	while (TRUE)
	{
		/* Add digit to w_b[] */

		b_ptr = last(w_b, b_byte_length);
		s = *b_ptr + *digit;
		if (s >= BASE)
		{
			*b_ptr = s - BASE;
			k = 1;
		}
		else
		{
			*b_ptr = s;
			k = 0;
		}
		next_lower(b_ptr);
		while (after_or_at(b_ptr, first(w_b, b_byte_length)))
		{
			s = *b_ptr + k;
			if (s >= BASE)
			{
				*b_ptr = s - BASE;
				k = 1;
			}
			else
			{
				*b_ptr = s;
				k = 0;
			}
			next_lower(b_ptr);
		}

		if (k != 0)
		{
			*(tv)tv_result = twovalued_FALSE;
			*(qf)qf_result = FALSE;
			return;
		}

		i++;
		if (i >= d_byte_length) break;
		next(digit);

		/* Multiply w_b[] by base_10 */

		k = 0;
		for2(b_ptr, w_b, b_byte_length)
		{
			p = (*b_ptr * base_10) + k;
			*b_ptr = p % BASE;
			k = p / BASE;
		}

		if (k != 0)
		{
			*(tv)tv_result = twovalued_FALSE;
			*(qf)qf_result = FALSE;
			return;
		}
	}
       
        if (padding && ((*first(w_b, b_byte_length)) >> (8-padding)))
		{
			*(tv)tv_result = twovalued_FALSE;
			*(qf)qf_result = FALSE;
			return;
		}
	adjust_output(adjustaddress(bs_result, b_byte_length),
	   w_b, padding, b_byte_length);
} /* CONVERT_US_2 */
