/* $Id: Ahsparc.s,v 34.2 1995/03/29 13:01:03 ella Exp $ */
  

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

                         Crown Copyright, (c)   1994

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
15:08:94  Module renamed from a68_gc_sparc.s to Ahsparc.s to be compatible with
          naming convention for porting.  DJS
14:12:94  33.001  ELLA  Porting  Moved frim ./library in order to make
                                 ./library mc independent.
29:03:95  34.002  ELLA  Modcprght Change copyright header
??:??:??   ?.???  ????
*/

/* *1     3-MAY-1989 12:57:23 ELLADEV "New for Release 4 on Sun 4, stored in CMS lib [elladev.cms.ctrans]. BGH" */
/* DEC/CMS REPLACEMENT HISTORY, Element A68_GC_SPARC.S */
/*
 *	Support functions for the CTRANS gabage collector running on SPARC SunOS systems.
 *
 *		Richard Wendland	16 April 1989
 */

	.seg	"text"


/*
 *	int *_Agc_get_fp();
 *
 *	Return stack frame pointer, so stack frames can be traced.
 */


	.global	__Agc_get_fp
__Agc_get_fp:
	retl
	add	%g0,%fp,%o0



/*
 *	void _Agc_flush_using_trap();
 *
 *	Flush the register windows to memory (the reserved locations on the main stack).
 *
 *      The 'trap 3' instructions flushes register windows.
 *      See /usr/include/sun4/trap.h, or dissasemble _setjmp.o from /lib/libc.a.
 *
 *	Alternatively it could be done by the following C code:

	void recurse_until_flushed(n,frame_ptr,frame_value)
	register int	n;
	register int	*frame_ptr;	
	register int	frame_value;	
	{
		/*
		 *	Recurse, flushing register windows until *frame_ptr changes value,
		 *	which can only be from a flush, or when we get to the limit n,
		 *	when *frame_ptr must fortuitously initially contain the correct value.
		 *

		if ( n>1 && *frame_ptr == frame_value )
			recurse_until_flushed( n-1, frame_ptr, frame_value );
	}

	#define	SPARC_ARCHITECTURE_NWINDOW_LIMIT	32	/*
								 * We can't use NWINDOW in <sun4/reg.h>
								 * as that is valid for the machine
								 * we compile on, not all the machines we may run on.
								 *
	#define _FLUSH_REG_WINDOWS(fp)	recurse_until_flushed( SPARC_ARCHITECTURE_NWINDOW_LIMIT-1-1, &(fp->fr_savpc), fp->fr_savpc )
							/* -1 for trap handler, and -1 for callers frame *
 *
 */


	.global	__Agc_flush_using_trap
__Agc_flush_using_trap:
	ta	3			! trap 3 to flush register windows using SunOS
	retl
	nop
