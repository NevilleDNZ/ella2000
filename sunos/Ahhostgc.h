/* $Id: Ahhostgc.h,v 34.2 1995/03/29 13:01:02 ella Exp $ */


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

14:12:94  33.001  ELLA   Porting    Created to hide ANSI / PC differences under
                                   emx. 
29:03:95  34.002  ELLA  Modcprght Change copyright header
??:??:??   ?.???  ????
*/

/*   Host specific definitions for garbage collector   */

#ifndef Ahhostgc_h
#define Ahhostgc_h

/*	SunOS under POSIX	*/

/* Sections taken from Aharea.h */

#ifdef  A_FLUSH_USING_RECURSIVE

  /* This does not work if A_FLUSH_USING_RECURSIVE is defined DJS Dec 8 94 */

void recurse_until_flushed(n,frame_ptr,frame_value)
register int    n;
register int    *frame_ptr;
register int    frame_value;
{
  /*
   *      Recurse, flushing register windows until *frame_ptr changes value,
   *      which can only be from a flush, or when we get to the limit n,
   *      when *frame_ptr must fortuitously initially contain the correct value.
   */

        if ( n>1 && *frame_ptr == frame_value )
                recurse_until_flushed( n-1, frame_ptr, frame_value );
}

#endif

/*
** How to find and traverse stack frames
*/

#include "/usr/include/sun4/frame.h"

typedef struct frame    SFRAMEHEADER;

#ifdef  A_FLUSH_USING_RECURSIVE

/* Declaration of 'recurse_until_flushed' moved to Ahhostgc.c */

#define SPARC_ARCHITECTURE_NWINDOW_LIMIT        32
       /*
        * We can't use NWINDOW in <sun4/reg.h>
        * as that is valid for the machine
        * we compile on, not all the machines we may run on.
        */
#define FLUSH_REG_WINDOWS(fp)  recurse_until_flushed( SPARC_ARCHITECTURE_NWINDOW_LIMIT-1-1, &(fp->fr_savpc), fp->fr_savpc )
                  /* -1 for trap handler, and -1 for callers frame */

#else

/*
 *  Flush register windows using the 'trap 3' instructions flushes register
 *  windows.  See /usr/include/sun4/trap.h, or dissasemble _setjmp.o from
 *  /lib/libc.a.
 */

extern void _Agc_flush_using_trap();            /* from Agcsparc.s */

#define FLUSH_REG_WINDOWS(fp)   _Agc_flush_using_trap()


#endif

extern SFRAMEHEADER *_Agc_get_fp();                     /* from Agcsparc.s */

static SFRAMEHEADER *stackframe;

#define INIT_SFRAME 											 \
{                                                         						 \
  stackframe = _Agc_get_fp();                              						 \
  REPORT1(6,"_INIT_SFRAME: fp=0x%p, ",(void *)stackframe); 						 \
  FLUSH_REG_WINDOWS(stackframe);                          						 \
  /* Skip two frames: Agc_trace and 'Agc_alloc' or 'Agc_collect' */  					 \
  stackframe = stackframe->fr_savfp;                        						 \
  stackframe = stackframe->fr_savfp;                        						 \
  REPORT1(6,"stackframe=0x%p\n",(void *)stackframe);      						 \
}

#define NEXT_SFRAME(area)                                                             			 \
  if ( stackframe->fr_savfp != NIL )                                                            	 \
  {                                                                                             	 \
    /* Note stack normally grows towards low address */                                         	 \
    /* We are going back down stack frames, towards higher addresses */                         	 \
    (area).addr = (PTR)(stackframe);                                                                     \
    (area).size = (SIZE)((char *)(stackframe->fr_savfp) - (char *)(area).addr);                                  \
    ASSERT((area).size > 0,_NEXT_SFRAME,stack size not positive);                                        \
    ASSERT(((area).size & (WORDSIZE-1)) == 0,NEXT_SFRAME,stack size not word multiple);             	 \
    if ( !WORDALIGNED((area).size)                                                                       \
       || (area).size <= 0 || (area).size > 1024*1024 /* 1Mb arbitrary limit */                          \
       || ((area).size & (WORDSIZE-1)) != 0                                                              \
       )                                                                                                 \
      GC_ERROR(stack corrupt);                                                                  	 \
   stackframe = stackframe->fr_savfp;                                                           	 \
  }                                                                                             	 \
  else                                                                                          	 \
  {                                                                                             	 \
    /* +++ perhaps some of these assertions should be GC_ERRORS */                              	 \
    ASSERT((CODEDPTR)stackframe->fr_savpc == 0x0                                                         \
      ,NEXT_SFRAME,crt0 return PC not zero);                                                    	 \
    /* unless there is a        ASSERT((CODEDPTR)_Agc_sframe_ptr >= 0xf7fffc00                  */       \
    /* big environment          ,_NEXT_SFRAME,main stack frame base unreasonable);      */      	 \
    (area).addr = NIL;  /* end of dynamic chain */                                              	 \
  }

/*
** Default could treat stack as a single area, don't attempt to decode red tape.
** However, the registers must still be flushed, which is dependent on architecture.
*/

/*
** Get first and subsequent AREAs to be traced for heap references
*/

#define INIT_AREA(area)         { INIT_STATIC_AREA(area); INIT_SFRAME; }

#define NEXT_AREA(area) NEXT_SFRAME(area)

/* From Ahcollec.c */

#ifdef A_VADVISE
/*
** These macros can be used to advise Operating System Virtual Store Manager
** that garbage collection is happening.
** Sun 3.2 vadvise(2) manual page says it is ESSENTIAL to use vadvise before garbage collecting.
** However there is a bug in SunOS 3.4 relating to vadvise(2) on Sun 3/50s.
** When paging heavily, memory corruption can occur after a call to vadvise(2).
** This may apply to other sun systems.
*/

#include <sys/vadvise.h>
#define	GC_PRE_TRACE()											\
		{											\
			_VADVISE(VA_ANOM);	/* Marking phase, random memory access */		\
		}
#define	GC_PRE_SWEEP()											\
		{											\
			/* _VADVISE(VA_SEQL) */	/* Sweeping phase, serial access */			\
		}
						/* +++ VA_SEQL is in sys/vadvise.h but not manual page */
						/* Stick with VA_ANOM for the time being */
#define	GC_END()	_VADVISE(VA_NORM)	/* End */
#endif


#endif

