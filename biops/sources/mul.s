/* $Id: mul.s,v 34.2 1995/03/29 13:04:06 ella Exp $ */


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
14:12:94  33.001  ELLA   NewConFig   Install in new configuration management system old version was not under RCS.
29:03:95  34.002  ELLA  Modcprght Change copyright header
??:??:??   ?.???  ????
*/

/* DEC/CMS REPLACEMENT HISTORY, Element MUL.S */
/* *2    10-AUG-1989 12:30:59 ELLADEV "Definitive release 4.0, first provisional release 4.1. BGH" */
/* *1    15-MAY-1989 11:19:20 ELLADEV "First provisional for Release 4, stored in CMS lib [elladev.cms.ella_server]. BGH" */
/* DEC/CMS REPLACEMENT HISTORY, Element MUL.S */
/* Signed multiplication, based upon text found in the SPARC Architecture
   manual revision 50. Aug 8, 1987. Out-of-line routine for code generator.
   The main difference is that it is restricted to use GLOBAL registers 4 - 7
   only.
   %o0 -> %g4, %o1 -> %g5, %o4 -> %g6, %o5 -> %g7

 */

 	.global _sparc_32bit_mul 
_sparc_32bit_mul:
	mov	%g4, %y
	andncc	%g4, 0xfff, %g0
	be	mul_shortway
	andcc	%g0, %g0, %g6
        !
        ! long multiply
        !
	mulscc	%g6, %g5, %g6
	mulscc	%g6, %g5, %g6
	mulscc	%g6, %g5, %g6
	mulscc	%g6, %g5, %g6
	mulscc	%g6, %g5, %g6
	mulscc	%g6, %g5, %g6
	mulscc	%g6, %g5, %g6
	mulscc	%g6, %g5, %g6
	mulscc	%g6, %g5, %g6
	mulscc	%g6, %g5, %g6
	mulscc	%g6, %g5, %g6
	mulscc	%g6, %g5, %g6
	mulscc	%g6, %g5, %g6
	mulscc	%g6, %g5, %g6
	mulscc	%g6, %g5, %g6
	mulscc	%g6, %g5, %g6
	mulscc	%g6, %g5, %g6
	mulscc	%g6, %g5, %g6
	mulscc	%g6, %g5, %g6
	mulscc	%g6, %g5, %g6
	mulscc	%g6, %g5, %g6
	mulscc	%g6, %g5, %g6
	mulscc	%g6, %g5, %g6
	mulscc	%g6, %g5, %g6
	mulscc	%g6, %g5, %g6
	mulscc	%g6, %g5, %g6
	mulscc	%g6, %g5, %g6
	mulscc	%g6, %g5, %g6
	mulscc	%g6, %g5, %g6
	mulscc	%g6, %g5, %g6
	mulscc	%g6, %g5, %g6
	mulscc	%g6, %g5, %g6  ! 32nd iteration
	mulscc	%g6, %g0, %g6  ! last iteration only shifts
        !
        ! If %g4 (multiplier) was negative, the result is:
        !        (%g4 * %g5) + %g5 * (2**32)
        ! We fix that here.
        !
	tst	%g4
	rd	%y, %g4
	bge	1f
	tst	%g4            ! for when we check for overflow

	sub	%g6, %g5, %g6  ! bit 33 and up of the product are in %g6
                               ! so we don't have to shift %g4
        !
        ! We haven't overflowed if :
        !     low-order bits are positive and high-order bits are 0
        !     low-order bits are negative and high-order bits are -1
        !

1:
	bge	2f               ! if low-order bits were positive
        addcc	%g6, %g0, %g5    ! return most sig. bits of prod an set Z
                                 ! for positive product


        retl
        subcc	%g6, -1, %g0     ! set Z if high order bits are -1 (for
                                 ! negative product)

2:
        retl
        nop
        !
        !
        !
mul_shortway:
	mulscc	%g6, %g5, %g6  ! first iteration of 13
	mulscc	%g6, %g5, %g6
	mulscc	%g6, %g5, %g6
	mulscc	%g6, %g5, %g6
	mulscc	%g6, %g5, %g6
	mulscc	%g6, %g5, %g6
	mulscc	%g6, %g5, %g6
	mulscc	%g6, %g5, %g6
	mulscc	%g6, %g5, %g6
	mulscc	%g6, %g5, %g6
	mulscc	%g6, %g5, %g6
	mulscc	%g6, %g5, %g6 ! 12th iteration
	mulscc	%g6, %g0, %g6 ! last iteration only shifts

        rd	%y, %g7
        sll	%g6, 12, %g4  ! left shift middle bits by 12 bits
        srl	%g7, 20, %g7  ! right shift low bits by 20 bits

        !
        ! We haven't overflowed if :
        !     low-order bits are positive and high-order bits are 0
        !     low-order bits are negative and high-order bits are -1
        !
        orcc	%g7, %g4, %g4  ! merge for true product

	bge	3f             ! if liow order bits were positive
        sra	%g6, 20, %g5   ! right shift high-bits by 20

        retl
        subcc	%g5, -1, %g0   ! set Z if high order bits are -1 (for
                               ! negative product)
3:
        retl
        addcc	%g5, %g0, %g0

