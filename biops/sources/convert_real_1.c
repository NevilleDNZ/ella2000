/* $Id: convert_real_1.c,v 34.2 1995/03/29 13:03:46 ella Exp $ */


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

static char *rcsid = " $Id: convert_real_1.c,v 34.2 1995/03/29 13:03:46 ella Exp $ ";

/* DEC/CMS REPLACEMENT HISTORY, Element CONVERT_REAL_1.C */
/* *5    10-AUG-1989 12:17:42 ELLADEV "Definitive release 4.0, first provisional release 4.1. BGH" */
/* *4    30-JUN-1989 17:13:03 ELLADEV "Updated provisional with fixes for R4B383. BGH" */
/* *3    26-JUN-1989 18:04:58 ELLADEV "Updated provisional with fixes for R4B380. BGH" */
/* *2    11-MAY-1989 12:00:52 ELLADEV "Updated provisional with fixes for R4B300. BGH" */
/* *1    28-FEB-1989 15:13:15 ELLADEV "Provisional for Release 4.0, stored in CMS lib [elladev.cms.ella_server]. BGH" */
/* DEC/CMS REPLACEMENT HISTORY, Element CONVERT_REAL_1.C */
/************************************************************************/
/* 29:06:89  Changes for VAX.  SPT.
 */
/*     CONVERT_REAL1
       *************

Description:
    Convert a binary floating-point representation to a decimal floating-point
    number.   The range and accuracy of the input and output are variable.
    Flags notify overflow/underflow and inexactness.

    At the ELLA-text level, the inputs are:
    - a binary mantissa with m digits and value M
    - a binary exponent with n digits and value N

    This is taken to represent the real number:

         N-m+1
    M . 2                                                             (1)

    ie a binary point is assumed after the first digit of the mantissa, so
    that if the mantissa is 10000... and the exponent is 0000... then this
    represents unity.

    The outputs are:
    - an overflow/underflow flag with boolean value F
    - an exact flag with boolean value E
    - a decimal mantissa with p digits and value P
    - a binary exponent with q digits and value Q

    The last two are taken to represent the real number:

          Q-p+1
    P . 10

    We impose the normalisation criterion, that the most significant digit of
    P be non-zero, ie

       p-1       p
     10 <= P < 10                                                     (2)

    We look for P and Q satisfying:

         N-m+1               Q-p+1
    M . 2        = (P+e) . 10                                         (3)

    where -1 < e < 1, ie the result is accurate to +/- one unit in the LSD.

    If no such P,Q exist then F is set false and the other outputs are set
    query.   Otherwise F will be true, P and Q will be as above and E will
    hold the value of the predicate e=0.

Inputs:
    The input operands are described by the tuples:
        <M, M_offset, m>
        <N, N_offset, n>
    Query values are indicated by the M_known and/or N_known inputs
    being FALSE.

Outputs:
    The result is stored at R, in the format:
    (F, (E, P, Q))

Workspace required:
    (m+39)/8 + (q+31)/8 + (m+7)/8 + p + (m+39)/3 + 3 bytes
<=  (24p + 14m + 3q + 551) / 24 bytes

Design:
     The strategy for this function is to maintain the following triple:

    - a decimal mantissa with x digits and value X
    - a binary number representing a binary exponent with b digits and value B
    - a binary number representing a decimal exponent with d digits and value D

    This is taken to represent the real number:

         B     D-x+1
    X . 2  . 10                                                       (4)

    which is kept approximately equal to the real number represented by the
    initial input (1), under the normalisation condition that the MSD of X is
    non-zero, ie

      x-1       x
    10 <= X < 10                                                      (5)

    The input is transformed in a straightforward manner to this form, which
    is then iteratively transformed until B is zero, whereupon it can be
    converted to the desired output.

    It is easiest to justify the algorithm by postponing the questions of
    rounding errors and underflow/overflow.  I assert that at after
    initialisation and as a loop invariant, (5) holds and (4) is approximately
    equal to (1) and hence, on termination, (3) [modulo bounds on the error]
    and (4) hold, as required.

    NB The algorithm shown here handles non-zero numbers.  Zeros need to
    be handled as a trivial special case.

*	X = M;
*	D = x - 1;
*	B = N - m + 1;
*	while (X < 10 ** (x - 1)) {
*		D--;
*		X *= 10;
*	}
*
*	while (B != 0)
*		if (B > 0) {
*			B--;
*			X *= 2;
*			while (X >= 10 ** x) {
*				D++;
*				X /= 10;
*			}
*		} else {
*			B++;
*			X /= 2;
*			while (X < 10 ** (x - 1)) {
*				D--;
*				X *= 10;
*			}
*		}
*
*	P = X / (10 ** (x-p));
*	Q = D;

    The loop is constructed so that the rounding error may be taken as
    that incurred in truncating the exact result (using the results of the
    previous loop) to x digits.  Each iteration introduces an error less
    than 1 in 10**(x-1).  The assignment to P is rounded up if the most
    significant lost bit is five or more, giving an error at most 0.5 LSD.
    We can guarantee that the final error is less than 1 LSD
    as specified provided that the maximum absolute value of B is less
    than 0.5 *10 ** (x-p-1).  We achieve this by provided x >= p + b/3 + 1.

    This is a very conservative estimate and in most cases the error will
    be much less.

    Overflow or underflow occurs if the final value of D cannot be
    expressed as a signed q-bit number.  Initially 0 <= D <= x-1 and the
    iteration moves B monotonically towards its final value.  We round d
    up to a multiple of 32 and check for overflow at the end of every loop
    and at the final assignment to N.

    The exact flag is set initially and cleared on any rounding error.
*/

#include "biops.h"

void
CONVERT_REAL_1(M_known, M, M_offset, m,
	      N_known,N, N_offset, n,
	      p, q, R, wrkspc)
	int             M_offset, N_offset, m, n;
	unsigned int    p, q;
	unsigned char   M[], N[], R[], wrkspc[];
BOOL            M_known, N_known;
{

/* Definitions for the elements of the output */
#define tv_F R
#define tv_E tvalign(tv_F + tvsize)
#define qf_P qfalign(tv_E + tvsize)
#define ds_P dsalign(qf_P + qfsize)
#define qf_Q qfalign(ds_P + dssize(p))
#define bs_Q bsalign(qf_Q + qfsize)

	/*
	 * Static storage.  b, d and xx are the bit sizes of B, D and XX (see
	 * below); x and y are the byte sizes of X and Y while offset is a
	 * variable used to accumulate the shift required to renormalise X
	 */
	int             b;
	int             d;
	int             xx;
	int             x;
	int             y;
	int             offset;

	/*
	 * Dynamic storage. B, D and Y are the variables of the pseudo code
	 * algorithm above.  The sizes of B and D are chose to avoid spurious
	 * overflow on initialisation.  The size of X is sufficient to achieve
	 * this as well as meeting the accuracy contraints. XX is used as a
	 * staging post for holding an aligned binary value of X.  Y is X
	 * with an extra digit at either end to be used to avoid loss of
	 * accuracy in the loop.
	 */
	unsigned char  *B;
	unsigned char  *D;
	unsigned char  *XX;
	unsigned char  *Y;
	unsigned char  *X;

	offswitch(M, M_offset, m)
	offswitch(N, N_offset, n)

	b = ((m + 31) & ~31) + 8;
	d = (q + 31) & ~31;
	xx = (m + 7) & ~7;
	x = p + b / 3 + 1;
	y = x + 2;

	B = wrkspc;
	D = B + b / 8;
	XX = D + d / 8;
	Y = XX + xx / 8;
	X = Y + 1;

	/* Check whether M and N are known */
	if (!M_known || !N_known) {
		*(tv) tv_F = twovalued_QUERY;
		*(tv) tv_E = twovalued_QUERY;
		*(qf) qf_Q = FALSE;
		*(qf) qf_P = FALSE;
		return;
	}
	/* Assume exact result without overflow until proved otherwise */
	*(tv) tv_F = twovalued_TRUE;
	*(tv) tv_E = twovalued_TRUE;
	*(qf) qf_P = TRUE;
	*(qf) qf_Q = TRUE;

	/* X = M; D = x - 1; B = N - m + 1; */
	adjust_input(M, M_offset, m, XX, xx, FALSE);
	if (util_is_zero(XX, xx/8)) {
		util_zero(D, d/8);
		adjust_output(adjustaddress(bs_Q, (q+7)/8), D, 0, (q + 7) / 8);
		util_zero_dec(adjustaddress(ds_P, p), p);
		return;
	}
	util_bin_bcd(XX, xx/8, X, x);
	util_zero(D, d/8);
	util_add_s(x - 1, D, d/8);
	adjust_input(N, N_offset, n, B, b, TRUE);
	util_add_s(1 - m, B, b/8);

	/* while (X < 10 ** (x - 1)) {D--; X *= 10;} */
	offset = util_msd_offset_bcd(X, x);
	if (util_add_s(-offset, D, d/8)) {
		*(tv) tv_F = twovalued_FALSE;
		*(tv) tv_E = twovalued_QUERY;
		*(qf) qf_Q = FALSE;
		*(qf) qf_P = FALSE;
		return;
	}
	util_shl_bcd(offset, X, x);

	/* while (B != 0)
         *     if (B > 0) {B--; X *= 2; while (X >= 10 ** x) {D++;X /= 10;}}
         *     else {B++; X /= 2; while (X < 10 ** (x - 1)) {D--; X *= 10;}}
         */
	while (!util_is_zero(B, b/8)) {
		*Y = 0;
		*(Y+y-1) = 0;
		if (util_msb_offset_us(B, b/8) > 0) {
			util_add_s(-1, B, b/8);
			util_mul_bcd(2, Y, y);
		} else {
			util_add_s(1, B, b/8);
			util_div_bcd(2, Y, y);
		}
		offset = util_msd_offset_bcd(Y, y) - 1;
		if (util_add_s(-offset, D, d/8)) {
			*(tv) tv_F = twovalued_FALSE;
			*(tv) tv_E = twovalued_QUERY;
			*(qf) qf_Q = FALSE;
			*(qf) qf_P = FALSE;
			return;
		}
		util_shl_bcd(offset, Y, y);
                if (*(Y+y-1))
			*(tv) tv_E = twovalued_FALSE;
	}

	/* P = X / (10 ** (x-p)); */
	if (!util_is_zero(X + p, x - p))
		*(tv) tv_E = twovalued_FALSE;
	if (*(X+p) > 5)
	        util_add_bcd(1, X, p);
	util_bcd_dec(X, p, adjustaddress(ds_P, p), p);

	/* Q = D; */ 
	if (util_msb_offset_s(D, d/8) < (d - q)) {
		*(tv) tv_F = twovalued_FALSE;
		*(tv) tv_E = twovalued_QUERY;
		*(qf) qf_Q = FALSE;
		*(qf) qf_P = FALSE;
		return;
	}
	adjust_output(adjustaddress(bs_Q, (q+7)/8), 
#ifdef vax
                      D,
#else
                      nth(D, d/8, (d - q) / 8),
#endif
                      (d - q) % 8, (q + 7) / 8);
}
