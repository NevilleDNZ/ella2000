/* $Id: bioputil.c,v 34.2 1995/03/29 13:03:44 ella Exp $ */


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

static char *rcsid = " $Id: bioputil.c,v 34.2 1995/03/29 13:03:44 ella Exp $ ";

/* DEC/CMS REPLACEMENT HISTORY, Element BIOPUTIL.C */
/* *4    10-AUG-1989 12:16:09 ELLADEV "Definitive release 4.0, first provisional release 4.1. BGH" */
/* *3    30-JUN-1989 17:12:53 ELLADEV "Updated provisional with fixes for R4B383. BGH" */
/* *2    26-JUN-1989 18:04:42 ELLADEV "Updated provisional with fixes for R4B380. BGH" */
/* *1    28-FEB-1989 15:12:40 ELLADEV "Provisional for Release 4.0, stored in CMS lib [elladev.cms.ella_server]. BGH" */
/* DEC/CMS REPLACEMENT HISTORY, Element BIOPUTIL.C */
#include "biops.h"

/* 29:06:89  Changes for VAX.  SPT.
 */
/* BYTE STRING OPERATIONS

   Here follow several operations on byte string representations of
   various sorts of numbers.  These include signed and unsigned bit
   strings as used throughout the kernel.  These have a byte ordering
   that varies according to the underlying host.  There are also so
   called BCD strings in which each byte may take the values 0..9 to
   represent a decimal digit and DEC strings (corresponding to strings of
   10 valued ELLA-characters) which are like BCD strings except that the
   decimal digit 0 is represented by 1, 1 by 2 and so on until 9 is
   represented by 10.  In the BCD case, more significant
   digits are at lower addresses, in the DEC case the byte ordering is 
   host dependant (the same ordering as bit strings).  The suffixes "_s",
   "_us", "_dec" and  "_bin" identify  which representation is assumed.
   If there is no such  suffix then the operation is defined on both.

   For efficiency's sake it may be worthwhile inlining these procedures by
   converting them to macros
*/

/* GENERAL PURPOSE OPERATIONS */

/* Set the byte string to zero */
void
util_zero(b, b_bytes)
	unsigned char   b[];
	int             b_bytes;
{
	unsigned char  *b_ptr;

	for1(b_ptr, b, b_bytes) * b_ptr = 0;
}

/* Is the byte string zero ? */
BOOL
util_is_zero(b, b_bytes)
	unsigned char   b[];
	int             b_bytes;
{
	unsigned char  *b_ptr;

	for1(b_ptr, b, b_bytes)
		if (*b_ptr != 0)
		return FALSE;
	return TRUE;
}

/* OPERATIONS ON UNSIGNED BIT STRINGS */

/* How many contiguous zeros are there at the most significant end of the
   string?  Alternatively, how many leading digits could you chop off without
   affecting the result.
*/
int
util_msb_offset_us(b, b_bytes)
	unsigned char   b[];
	int             b_bytes;
{
	unsigned char  *b_ptr, c;
	int             answer = 0;

	b_ptr = first(b, b_bytes);
	while (before_or_at(b_ptr, last(b, b_bytes)) && *b_ptr == 0) {
		answer += 8;
		next(b_ptr);
	}
	c = *b_ptr;
	while (c < 128) {
		c <<= 1;
		answer++;
	}
	return answer;
}

/*
   Add an integer x to an unsigned byte string.  This procedure will work
   for -2**16 <= x < 2**16 (at least) so it provides subtraction as well.
   Any carry is returned.
*/
int
util_add_us(x, b, b_bytes)
	int             x;
	unsigned char   b[];
	int             b_bytes;
{
	unsigned char  *b_ptr;
	int             k = x;

	for2(b_ptr, b, b_bytes) {
        	k += *b_ptr;
                if (k >= 0) {
	        	*b_ptr = k % BASE;
		        k = k / BASE;
		} else {
		        *b_ptr = (BASE - (-k) % BASE) % BASE;
                        k = -((-k) / BASE) - (*b_ptr == 0 ? 0 : 1);
		}
	}
	return k;
}

/*
   Multiply an unsigned byte string by an unsigned integer x.  Return any
   carry.
*/
int
util_mul_us(x, b, b_bytes)
	unsigned int    x;
	unsigned char   b[];
	int             b_bytes;
{
	unsigned char  *b_ptr;
	int             k = 0;

	for2(b_ptr, b, b_bytes) {
		k += *b_ptr * x;
		*b_ptr = k % BASE;
		k /= BASE;
	}
	return k;
}

/*
   Divide an unsigned byte string by an unsigned integer x.  Return any
   remainder.  The divisor must be non-zero
*/
int
util_div_us(x, b, b_bytes)
	unsigned int    x;
	unsigned char   b[];
	int             b_bytes;
{
	unsigned char  *b_ptr;
	int             k = 0;

	for1(b_ptr, b, b_bytes) {
		k = k * BASE + *b_ptr;
		*b_ptr = k / x;
		k %= x;
	}
	return k;
}

/* Shift the string left by n bits.  A negative value of n means shift right
   by -n bits.  Fill vacated bits with zero.  Return TRUE iff some non zero
   bits have been shifted off
*/
BOOL
util_shl_us(n, b, b_bytes)
	int             n;
	unsigned char   b[];
	int             b_bytes;
{
        int i;
	unsigned char  *b_ptr;
	unsigned int    bytes, bits, k;
	BOOL            ans = FALSE;

	if (n > 0) {
		if ((bytes = n / 8) != 0) {
                    for (i = 0; i < bytes && !(*nth(b, b_bytes, i)); i++);
                    ans = (i < bytes)?TRUE:FALSE;                   
                    for (i = 0; i < b_bytes - bytes; i++)
		       	*nth(b, b_bytes, i) = *nth(b, b_bytes, i + bytes);
		    for (; i < b_bytes; i++)
		       	*nth(b, b_bytes, i) = 0;
		}
		if ((bits = n % 8) != 0) {
		    k = 0;
                    for (i = b_bytes - bytes -1; i >= 0 ; i--) {
		       	k |= *nth(b, b_bytes, i) << bits;
			*nth(b, b_bytes, i) = k & 0xff;
			k >>= 8;
			}
			if (k != 0)
				ans = TRUE;
		}
	} else if (n < 0) {
		if ((bytes = (-n) / 8) != 0) {
                   for (i = 0; i < bytes && !(*nth(b, b_bytes, b_bytes-i-1));  i++);
                   ans = (i < bytes)?TRUE:FALSE;                   
		   for (i = b_bytes - 1; i >= bytes; i--)
			*nth(b, b_bytes, i) = *nth(b, b_bytes, i - bytes);
		   for (i = 0; i < bytes; i++)
		       	*nth(b, b_bytes, i) = 0;
		}
		if ((bits = (-n) % 8) != 0) {
		k = 0;
 	        for (i = bytes; i < b_bytes; i++){
			k |= *(nth(b, b_bytes, i)) << (8 - bits);
			*(nth(b, b_bytes, i)) = (k >> 8) & 0xff;
			k = (k & 0xff) << 8;
			}
			if (k != 0)
				ans = TRUE;
		}
	}
	return (ans);
}

/* OPERATIONS ON SIGNED BIT STRINGS */

/* To define a function analogous to msb_offset_us we need to adjust the
   second definition.  This function returns the number of digits that could
   be lost without affecting the result.   That is the number of times that the
   sign bit is repeated at the MS end (not counting the sign bits itself)
*/
int
util_msb_offset_s(b, b_bytes)
	unsigned char   b[];
	int             b_bytes;
{
	unsigned char  *b_ptr, c, msb_mask, full_mask;
	int             answer = -1;	/* So sign bit will not count */
	int             i;

	b_ptr = first(b, b_bytes);
	msb_mask = *b_ptr & 0x80;
	full_mask = (msb_mask ? 0xff : 0x00);
	while (before_or_at(b_ptr, last(b, b_bytes)) && *b_ptr == full_mask) {
		answer += 8;
		next(b_ptr);
	}
	c = *b_ptr;
        i = 0;
	while (((c & 0x80) == msb_mask) && (i < 8)) {
		c <<= 1;
		i++;
		answer++;
	}
	return answer;
}

/*
   Add an integer x to a signed byte string.  This procedure will work
   for -2**16 <= x < 2**16 (at least) so it provides subtraction as well.
   If the signed bit of x is s, then the signed value of x equals the unsigned
   value less s*(2**n) where n is the number of bits in x.  From this it
   follows that the signed addition can be performed by carrying out an
   unsigned addition and adjusting the carry by (s2- s1) where s1 is the
   initial sign bit and s2 is the final sign bit.
*/
int
util_add_s(x, b, b_bytes)
	int             x;
	char            b[];
	int             b_bytes;
{
	unsigned char   s1, s2;
	int             k;

	s1 = *first(b, b_bytes);
        s1 >>= 7;
	k = util_add_us(x, b, b_bytes);
	s2 = *first(b, b_bytes);
        s2 >>= 7;
	return (k + s2 - s1);
}

/* OPERATIONS ON BCD STRINGS */

/* How many contiguous zeros are there at the most significant end of the
   string?
*/
int
util_msd_offset_bcd(d, d_digits)
	unsigned char   d[];
	int             d_digits;
{
	int             answer = 0;

	for (answer = 0; answer < d_digits && d[answer] == 0; answer++);
	return answer;
}

/*
   Add an integer x to a BCD string.  This procedure will work
   for -2**16 <= x < 2**16 (at least) so it provides subtraction as well.
   Any carry is returned.
*/
int
util_add_bcd(x, d, d_digits)
	int             x;
	unsigned char   d[];
	int             d_digits;
{
	int             i, k = x;

	for (i = d_digits - 1; i >= 0; i--) {
		k += d[i];
                if (k >= 0) {
	        	d[i] = k % 10;
		        k = k / 10;
		} else {
		        d[i] = (10 - (-k) % 10) % 10;
                        k = -((-k) / 10) - (d[i] == 0 ? 0 : 1);
		}
	}
	return k;
}

/*
   Multiply an unsigned byte string by an unsigned integer x.  Return any
   carry.
*/
int
util_mul_bcd(x, d, d_digits)
	unsigned int    x;
	unsigned char   d[];
	int             d_digits;
{
	int             i, k = 0;

	for (i = d_digits - 1; i >= 0; i--) {
		k += d[i] * x;
		d[i] = k % 10;
		k /= 10;
	}
	return k;
}

/*
   Divide an unsigned byte string by an unsigned integer x.  Return any
   remainder.  The divisor must be non-zero
*/
int
util_div_bcd(x, d, d_digits)
	unsigned int    x;
	unsigned char   d[];
	int             d_digits;
{
	int             i, k = 0;

	for (i = 0; i < d_digits; i++) {
		k = k * 10 + d[i];
		d[i] = k / x;
		k %= x;
	}
	return k;
}

/* Shift the string left by n digitss.  A negative value of n means shift right
   by -n bits.  Fill vacated bits with zero.  Return TRUE iff some non zero
   digitss have been shifted off
*/
BOOL
util_shl_bcd(n, d, d_digits)
	int             n;
	unsigned char   d[];
	int             d_digits;
{
	unsigned int    i;
	BOOL            ans = FALSE;

	if (n > 0) {
		if (!util_is_zero(d, n))
			ans = TRUE;
		for (i = 0; i < d_digits - n; i++)
			d[i] = d[i + n];
		util_zero(&d[d_digits - n], n);
	} else if (n < 0) {
		if (!util_is_zero(&d[d_digits + n], -n))
			ans = TRUE;
		for (i = d_digits - 1; i >= -n; i--)
			d[i] = d[i + n];
		util_zero(d, - n);
	}
	return (ans);
}

/* DEC OPERATIONS */

/* Set the DEC string to zero */
void
util_zero_dec(d, d_digits)
	unsigned char   d[];
	int             d_digits;
{
	int             i;

	for (i = 0; i < d_digits; i++)
		d[i] = 1;
}

/* CONVERSIONS */

/* Convert a decimal character string in which 1 represents 0, 2 represents 1
   etc to a binary string of the same value.  Any overflow will be silently
   lost
*/
void
util_dec_bin(d, d_digits, b, b_bytes)
	unsigned char   d[], b[];
	int             d_digits, b_bytes;
{
        int            i;

	util_zero(b, b_bytes);
	for (i = 0; i <d_digits; i++) {
		util_mul_us(10, b, b_bytes);
		util_add_us(*(nth(d, d_digits, i)) - 1, b, b_bytes);
	}
}

/* Convert an unsigned bit string to a BCD string.  Any overflow will be
   silently lost
*/
void
util_bin_bcd(b, b_bytes, d, d_digits)
	unsigned char   d[], b[];
	int             d_digits, b_bytes;
{
	unsigned char  *b_ptr;
	unsigned int    i;

	util_zero(d, d_digits);
	for1(b_ptr, b, b_bytes) {
		util_mul_bcd(BASE, d, d_digits);
		util_add_bcd(*b_ptr, d, d_digits);
	}
}

/* Convert a BCD string to a decimal one.
*/
void
util_bcd_dec(d1, d1_digits, d2, d2_digits)
	unsigned char   d1[], d2[];
	int             d1_digits, d2_digits;
{
	unsigned int    i;

	for (i = 0; i < d2_digits - d1_digits; i++)
		*(nth(d2, d2_digits, i)) = 1;
	for (; i < d2_digits; i++)
		*(nth(d2, d2_digits, i)) = d1[i + d1_digits - d2_digits] + 1;
}
