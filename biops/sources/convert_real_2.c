/* $Id: convert_real_2.c,v 34.2 1995/03/29 13:03:46 ella Exp $ */


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

static char *rcsid = " $Id: convert_real_2.c,v 34.2 1995/03/29 13:03:46 ella Exp $ ";

/* DEC/CMS REPLACEMENT HISTORY, Element CONVERT_REAL_2.C */
/* *4    10-AUG-1989 12:17:47 ELLADEV "Definitive release 4.0, first provisional release 4.1. BGH" */
/* *3    30-JUN-1989 17:13:07 ELLADEV "Updated provisional with fixes for R4B383. BGH" */
/* *2    26-JUN-1989 18:05:03 ELLADEV "Updated provisional with fixes for R4B380. BGH" */
/* *1    28-FEB-1989 15:13:32 ELLADEV "Provisional for Release 4.0, stored in CMS lib [elladev.cms.ella_server]. BGH" */
/* DEC/CMS REPLACEMENT HISTORY, Element CONVERT_REAL_2.C */
/************************************************************************/
/* 29:06:89  Changes for VAX.  SPT.
   30:06:89  Corrected comment regarding workspace requirements.  SPT.
 */

/*     CONVERT_REAL2
       *************

Description:
    Convert a decimal floating-point representation to a binary floating-point
    number.   The range and accuracy of the input and output are variable.
    Flags notify overflow/underflow and inexactness.

    At the ELLA-text level, the inputs are:
    - a decimal mantissa with p digits and value P
    - a binary exponent with q digits and value Q

    This is taken to represent the real number:

          Q-p+1
    P . 10                                                            (1)

    ie a decimal point is assumed after the first digit of the mantissa, so
    that if the mantissa is 10000... and the exponent is 0000... then this
    represents unity.

    The outputs are:
    - an overflow/underflow flag with boolean value F
    - an exact flag with boolean value E
    - a binary mantissa with m digits and value M
    - a binary exponent with n digits and value M

    The last two are taken to represent the real number:

         N-m+1
    M . 2

    We impose the normalisation criterion, that the most significant bit of
    M be non-zero, ie

      m-1      m
     2 <= M < 2                                                       (2)


    We look for M and N satisfying:

          Q-p+1              N-m+1
    P . 10        = (M+e) . 2                                         (3)

    where -1 < e < 1, ie the result is accurate to +/- one LSB.

    If no such M,N exists then F is set false and the other outputs are set
    query.   Otherwise F will be true, M and N will be as above and E will
    hold the value of the predicate e=0.

Inputs:
    The input operands are described by the tuples:
        <P, p>
        <Q, Q_offset, q>
    Query values are indicated by the P_known and/or Q_known inputs
    being FALSE.

Outputs:
    The result is stored at R, in the format:
    (F, (E, M, N))

Workspace required:
    (n + 31)/8 + (4q + 31)/8 + 4 + (4q + 31)/8 + 4 + (m + 7)/8 + 2  bytes
<=  (8q + m + n + 180) / 8 bytes

Design:
     The strategy for this function is to maintain the following triple:

    - a binary mantissa with x digits and value X
    - a binary number representing a binary exponent with b digits and value B
    - a binary number representing a decimal exponent with d digits and value D

    This is taken to represent the real number:

         B-x+1   D
    X . 2    . 10                                                     (4)

    which is kept approximately equal to the real number represented by the
    initial input (1), under the normalisation condition that the MSB of X is
    non-zero, ie

     x-1      x
    2 <= X < 2                                                        (2)

    The input is transformed in a straightforward manner to this form, which
    is then iteratively transformed until D is zero, whereupon it can be
    converted to the desired output.

    It is easiest to justify the algorithm by postponing the questions of
    rounding errors and underflow/overflow.  I assert that at after
    initialisation and as a loop invariant, (5) holds and (4) is approximately
    equal to (1) and hence, on termination, (3) [modulo bounds on the error]
    and (4) hold, as required.

    NB The algorithm shown here handles non-zero numbers.  Zeros need to
    be handled as a trivial special case.

*	X = P;
*	B = x - 1;
*	D = Q - p + 1;
*	while (X < 2 ** (x - 1)) {
*		B--;
*		X *= 2;
*	}
*
*	while (D != 0)
*		if (D > 0) {
*			D--;
*			X *= 10;
*			while (X >= 2 ** x) {
*				B++;
*				X /= 2;
*			}
*		} else {
*			D++;
*			X /= 10;
*			while (X < 2 ** (x - 1)) {
*				B--;
*				X *= 2;
*			}
*		}
*
*	M = X / (2** (x - m));
*	N = B;

    The loop is constructed so that the rounding error may be taken as
    that incurred in truncating the exact result (using the results of the
    previous loop) to x bits.  Each iteration introduces an error less
    than 1 in 2**x.  The assignment to M is rounded up if the most
    significant lost bit is one, giving an error at most 1 in 2**m+1.  We
    can guarantee that the final error is less than 1 in 2**m as specified
    provided that the maximum absolute value of D is less than 2 **
    (x-m-1).  We achieve this provided x >= m + d.

    This is a very conservative estimate and in most cases the error will
    be much less.

    Overflow or underflow occurs if the final value of B cannot be
    expressed as a signed n-bit number.  Initially 0 <= B <= x-1 and the
    iteration moves B monotonically towards its final value.  We round b
    up to a multiple of 32 and check for overflow at the end of every loop
    and at the final assignment to N.

    The exact flag is set initially and cleared on any rounding error.
*/

#include "biops.h"

void
CONVERT_REAL_2(P_known, P, p,
	      Q_known, Q, Q_offset, q,
	      m, n, R, wrkspc)
	int             Q_offset, p, q;
	unsigned int    m, n;
	unsigned char   P[], Q[], R[], wrkspc[];
BOOL            P_known, Q_known;
{

/* Definitions for the elements of the output */
#define tv_F R
#define tv_E tvalign(tv_F + tvsize)
#define qf_M qfalign(tv_E + tvsize)
#define bs_M bsalign(qf_M + qfsize)
#define qf_N qfalign(bs_M + bssize(m))
#define bs_N bsalign(qf_N + qfsize)

	/*
	 * Static storage. b, d, x and y are the bit sizes of B, D, X and Y
	 * (see below) and offset is a temporary variable used to accumulate
	 * the shift required to renormalise X
	 */
	int             b;
	int             d;
	int             x;
	int             y;
	int             offset;
	BOOL            rndup;

	/*
	 * Dynamic storage We need to reserve space for the variables B, D
	 * and X of the pseudo-code algorithm above.  Rounding b up to a
	 * multiple of 32 ensures that the assignment "B = x - 1" cannot
	 * cause a spurious overflow for realistic input while the generous
	 * calculation for d ensures that the assigment "D = Q - p + 1"
	 * cannot cause a spurious overflow for realistic input (any input
	 * with less than a billion exponent or mantissa digits is realistic
	 * for this purpose).
	 * 
	 * We need to surround X with eight carry bits at the MS end to avoid
	 * overflow when muliplying by 10, and eight guard bits at the LS end
	 * top avoid loss of accuracy when dividing by 10.  Y refers to X
	 * extended in both directions.  The symmetry is useful as it avoids
	 * our having to consider the byte ordering of the machine.
	 */
	unsigned char  *B;
	unsigned char  *D;
	unsigned char  *Y;
	unsigned char  *X;

	offswitch(Q, Q_offset, q)

	b = (n + 31) & ~31;
	d = ((4 * q + 31) & ~31) + 32;
	x = d + ((m + 7) & ~7);
	y = x + 16;

	B = wrkspc;
	D = B + b / 8;
	Y = D + d / 8;
	X = Y + 1;

	/* Check whether P and Q are known */
	if (!P_known || !Q_known) {
		*(tv) tv_F = twovalued_QUERY;
		*(tv) tv_E = twovalued_QUERY;
		*(qf) qf_N = FALSE;
		*(qf) qf_M = FALSE;
		return;
	}
	/* Assume exact result without overflow until proved otherwise */
	*(tv) tv_F = twovalued_TRUE;
	*(tv) tv_E = twovalued_TRUE;
	*(qf) qf_N = TRUE;
	*(qf) qf_M = TRUE;

	/* X = P; B = x - 1; D = Q - p + 1; */
	util_dec_bin(adjustaddress(P, p), p, X, x/8);
	if (util_is_zero(X, x/8)) {
		util_zero(B, b/8);
		adjust_output(adjustaddress(bs_M, (m+7)/8), X, 0, (m + 7) / 8);
		adjust_output(adjustaddress(bs_N, (n+7)/8), B, 0, (n + 7) / 8);
		return;
	}
	util_zero(B, b/8);
	util_add_s(x - 1, B, b/8);
	adjust_input(Q, Q_offset, q, D, d, TRUE);
	util_add_s(1 - p, D, d/8);

	/* while (X < 2 * (x - 1)) {B--; X *= 2;} */
	offset = util_msb_offset_us(X, x/8);
	if (util_add_s(-offset, B, b/8)) {
		*(tv) tv_F = twovalued_FALSE;
		*(tv) tv_E = twovalued_QUERY;
		*(qf) qf_N = FALSE;
		*(qf) qf_M = FALSE;
		return;
	}
	util_shl_us(offset, X, x/8);

	/* while (D != 0)
         *     if (D > 0) {D--; X *= 10; while (X >= 2 * x) {B++;X /= 2;}}
         *     else {D++; X /= 10; while (X < 2 * (x - 1)) {B--; X *= 2;}} 
         */
	while (!util_is_zero(D, d/8)) {
		*first(Y, y / 8) = 0;
		*last(Y, y / 8) = 0;
		if (util_msb_offset_us(D, d/8) > 0) {
			util_add_s(-1, D, d/8);
			util_mul_us(10, Y, y/8);
		} else {
			util_add_s(1, D, d/8);
			util_div_us(10, Y, y/8);
		}
		offset = util_msb_offset_us(Y, y/8) - 8;
		if (util_add_s(-offset, B, b/8)) {
			*(tv) tv_F = twovalued_FALSE;
			*(tv) tv_E = twovalued_QUERY;
			*(qf) qf_N = FALSE;
			*(qf) qf_M = FALSE;
			return;
		}
		util_shl_us(offset, Y, y/8);
		if (*last(Y,y/8))
			*(tv) tv_E = twovalued_FALSE;
	}

	/* M = X / (2 ** (x - m)); */
	rndup = (*nth(X, x/8, m/8) << (7 - (m % 8))) >= 128;
	if (util_shl_us(m - x, X, x/8))
		*(tv) tv_E = twovalued_FALSE;
	if (rndup)
	         util_add_us(1, X, x/8);
	adjust_output(adjustaddress(bs_M, (m+7)/8), 
#ifdef vax
                      X,
#else
                      nth(X, x/8, (x - m) / 8),
#endif
                      (x - m) % 8, (m + 7) / 8);

	/* N = B; */
	if (util_msb_offset_s(B, b/8) < (b - n)) {
		*(tv) tv_F = twovalued_FALSE;
		*(tv) tv_E = twovalued_QUERY;
		*(qf) qf_N = FALSE;
		*(qf) qf_M = FALSE;
		return;
	}
	adjust_output(adjustaddress(bs_N, (n+7)/8), 
#ifdef vax
                      B,
#else
                      nth(B, b/8, (b - n) / 8),
#endif
                      (b - n) % 8, (n + 7) / 8);
}
