/* $Id: div.s,v 34.2 1995/03/29 13:03:48 ella Exp $ */


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

/* DEC/CMS REPLACEMENT HISTORY, Element DIV.S */
/* *2    10-AUG-1989 12:18:12 ELLADEV "Definitive release 4.0, first provisional release 4.1. BGH" */
/* *1    15-MAY-1989 11:19:33 ELLADEV "First provisional for Release 4, stored in CMS lib [elladev.cms.ella_server]. BGH" */
/* DEC/CMS REPLACEMENT HISTORY, Element DIV.S */
/* Signed integer division. Out-of-line routine for code generator.
   Derived from cc -S on

int sparc_32bit_div(a, b)
register int a, b;
{
  return (a/b);
}

This routine must ensure that the important global registers are saved
before the call to the C library division code.

 */
	.seg	"text"			! [internal]
	.proc	4
	.global	_sparc_32bit_div
_sparc_32bit_div:
!#PROLOGUE# 0
!#PROLOGUE# 1
	save	%sp,-112,%sp
        st      %g1, [%sp+96]
        st      %g2, [%sp+100]
        st      %g3, [%sp+104]
	mov	%i0,%o0
	call	.div,2
	mov	%i1,%o1
        ld      [%sp+96], %g1
        ld      [%sp+100], %g2
        ld      [%sp+104], %g3
	ret
	restore	%g0,%o0,%o0
	.seg	"data"			! [internal]
