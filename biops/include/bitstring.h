/* $Id: bitstring.h,v 34.2 1995/03/29 13:04:20 ella Exp $ */


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
                                  system old version was 1.3 
29:03:95  34.002  ELLA  Modcprght Change copyright header
??:??:??   ?.???  ????
*/

/* bitstring.h - bit string manipulation macros
 * vix 26feb87 [written]
 * vix 03mar87 [fixed stupid bug in setall/clearall]
 * vix 25mar87 [last-minute cleanup before mod.sources gets it]
 */

#ifndef	_bitstring_defined
#define	_bitstring_defined

static char _bitstring_h[] = "$Id: bitstring.h,v 34.2 1995/03/29 13:04:20 ella Exp $";

/*
 * there is something like this in 4.3, but that's licensed source code that
 * I'd rather not depend on, so I'll reinvent the wheel (incompatibly).
 */

/*
 * except for the number of bits per int, and the other constants, this should
 * port painlessly just about anywhere.  please #ifdef any changes with your
 * compiler-induced constants (check the CC man page, it'll be something like
 * 'vax' or 'mc68000' or 'sun' or some such).  also please mail any changes
 * back to me (ucbvax!dual!ptsfa!vixie!paul) for inclusion in future releases.
 */

/*
 * (constants used internally -- these can change from machine to machine)
 */
			/*
			 * how many bits in the unit returned by sizeof ?
			 */
#define	_bit_charsize	8

			/*
			 * what type will the bitstring be an array of ?
			 */
#define	_bit_type	unsigned int

			/*
			 * how many bits in an int ?
			 */
#define	_bit_intsiz	(sizeof(_bit_type) * _bit_charsize)

			/*
			 * an int of all '0' bits
			 */
#define	_bit_0s		((_bit_type)0)

			/*
			 * an int of all '1' bits
			 */
#define	_bit_1s		((_bit_type)~0)

/*
 * (macros used internally)
 */
	/*
	 * how many int's in a string of N bits?
	 */
#define	_bit_size(N) \
	((N / _bit_intsiz) + ((N % _bit_intsiz) ? 1 : 0))

	/*
	 * which int of the string of length L bits is bit N in?
	 */
#if vax
#define	_bit_intn(N,L) \
	(_bit_size(L) -1 - ((N) / _bit_intsiz))
#else
#define	_bit_intn(N,L) \
	((N) / _bit_intsiz)
#endif

	/*
	 * mask for bit N in its int (MSB is bit 0)
	 */
#define	_bit_mask(N) \
	(1 << (_bit_intsiz-1-((N) % _bit_intsiz)))

/*
 * (macros used externally)
 */
	/*
	 * declare (create) Name as a string of N bits
	 */
#define	bit_decl(Name, N) \
	_bit_type Name[_bit_size(N)];

	/*
	 * declare (reference) Name as a bit string
	 */
#define	bit_ref(Name) \
	_bit_type Name[];

	/*
	 * is bit N of string Name (length L bits) set?
	 */
#define	bit_test(Name, N, L) \
	((Name)[_bit_intn(N,L)] & _bit_mask(N))

	/*
	 * set bit N of string Name (length L bits)
	 */
#define	bit_set(Name, N, L) \
	{ (Name)[_bit_intn(N,L)] |= _bit_mask(N); }

	/*
	 * clear bit N of string Name (length L bits)
	 */
#define	bit_clear(Name, N, L) \
	{ (Name)[_bit_intn(N,L)] &= ~_bit_mask(N); }

	/*
	 * set bits 0..N in string Name
	 */
#define	bit_setall(Name, N) \
	{	register _bit_i; \
		for (_bit_i = _bit_size(N)-1; _bit_i >= 0; _bit_i--) \
			Name[_bit_i]=_bit_1s; \
	}

	/*
	 * clear bits 0..N in string Name
	 */
#define	bit_clearall(Name, N) \
	{	register _bit_i; \
		for (_bit_i = _bit_size(N)-1; _bit_i >= 0; _bit_i--) \
			Name[_bit_i]=_bit_0s; \
	}

#endif	_bitstring_defined

