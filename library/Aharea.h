/* $Id: Aharea.h,v 34.3 1995/03/29 13:01:17 ella Exp $ */


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
15:08:94  Module renamed from a68_gc_area.h to Aharea.h for porting.  DJS
25:08:94  33.001  ELLA  NewConFig Insert into configuration management. 
14:12:94  33.002  DJS   Porting    Merge second level PC changes.  Move m/c
                                  dependant bits to sunos/Ahhostgc.h etc. Move
                                  checks to Ahcheck.h. Remove Ah*.h from the
                                  includes. 
29:03:95  34.003  ELLA  Modcprght Change copyright header
??:??:??   ?.???  ????
*/

#ifndef Aharea_h
#define Aharea_h

#include <stdlib.h>

/*
** An AREA represents a region of (virtual) memory (may be heap, static or stack).
*/

#define A_GC_CHECK_AREA_DEFINES

#ifdef A_GC_DEFAULTS
#define A_GC_AREA_DEFAULTS
#endif

#ifdef A_GC_AREA_DEFAULTS

typedef struct
{
  PTR addr;
  SIZE size;
}
AREA;

#ifndef STEPAREA
#define STEPAREA(area)  ((area).size -= WORDSIZE , (area).addr = (char *)(area).addr + WORDSIZE)
#endif

#ifndef NILAREA
#define NILAREA(area) (area.addr == NIL)
#endif

#ifndef PTRINAREA
#define PTRINAREA(ptr,area) ( ((ptr) >= (area).addr) && ((ptr) < (PTR)((char *)((area).addr) + (area).size)))
#endif

#endif


/*
** TRACINGSTACK is a stack of AREAs to be traced for heap references
**
**      Library build-time options:
*/


#ifdef A_GC_DEFAULTS
#define A_GC_TRACINGSTACK_DEFAULTS
#endif

#ifdef A_GC_TRACINGSTACK_DEFAULTS
typedef struct
{
  AREA *bottom; /* first slot */
  AREA *top;    /* next slot to use */
  AREA *end;    /* last slot */
}
TRACINGSTACK;

#ifndef A_STACKINCR
#define A_STACKINCR     (1*512)         /* default */   /* of 8 byte elements */
#endif

#ifndef INIT_STACK
#define INIT_STACK(stack)                                                                 		 \
{                                                                                         		 \
  (stack).bottom = (stack).top = (AREA *) malloc( (size_t)(A_STACKINCR) * sizeof(AREA) ); 			 \
  if( (stack).bottom == NIL ) GC_ERROR(no more memory for HEAP tracing stack);            		 \
  (stack).end = (stack).bottom + A_STACKINCR;                                             		 \
}
#endif

#ifndef FREE_STACK
#define FREE_STACK(stack)                                         					 \
{                                                                 					 \
  ASSERT((stack).top==(stack).bottom,FREE_STACK,stack not empty); 					 \
  free((char *)(stack).bottom);                                   					 \
}
#endif

#ifndef PUSH
#define PUSH(stack,p,s)                                                                           	 \
{                                                                                                      	 \
  if ( (stack).top == (stack).end )                                                                    	 \
  {                                                                                                    	 \
    int new_size = (SIZE)((stack).end - (stack).bottom) + A_STACKINCR;                                       	 \
    AREA *new_stack = (AREA *)realloc((stack).bottom, (size_t)(new_size) * sizeof(AREA));         		 \
    if ( new_stack == NIL ) GC_ERROR(no more memory for HEAP tracing stack);                           	 \
    REPORT2(2,"PUSH: growing tracing stack to %d elements, stack at %p\n",new_size,(void *)new_stack); 	 \
    (stack).top = new_stack + (SIZE)((stack).top - (stack).bottom);                                            	 \
    (stack).bottom = new_stack;                                                                        	 \
    (stack).end = (stack).bottom + new_size;                                                           	 \
  }                                                                                                    	 \
  ((stack).top)->addr = (p);                                                                             \
  ((stack).top)++->size = (s);                                                                           \
}
#endif

#ifndef POP
#define POP(stack) 											 \
  ( ASSERT((stack).top > (stack).bottom,POP,tracing stack underflow), *--((stack).top))
#endif

#endif

/*
**      How to find static data
*/

#ifdef A_GC_DEFAULTS
#define A_GC_STATIC_DEFAULTS
#endif

#ifdef A_GC_STATIC_DEFAULTS

#define INIT_STATIC_AREA(area)                                                                 		 \
{                                                                                              		 \
  int **p;                                                                                     		 \
  PTR areaend;                                                                                 		 \
  for ( (area).addr = (PTR) (Agc_first_statics[0]), p = &Agc_first_statics[1]; *p != NIL; p++ )		 \
    if ( (PTR)*p < (area).addr ) (area).addr = (PTR)*p;                                        		 \
  for ( areaend = (PTR) (Agc_last_statics[0]), p = &Agc_last_statics[1]; *p != NIL; p++ )      		 \
    if ( (PTR)*p > areaend ) areaend = (PTR)*p;                                                		 \
  (area).size = (SIZE)((char *)areaend - (char *)(area).addr);                                         		 \
  ASSERT((area).size>0,INIT_STATIC_AREA,(area).size not positive);                             		 \
  if ( (area).addr == NIL || !WORDALIGNED((area).addr)                                         		 \
     || (area).size <= 0 || (area).size > 1024*1024 /* 1Mb arbitrary limit */                  		 \
     || ((area).size & (WORDSIZE-1)) != 0                                                      		 \
  )                                                                                            		 \
    GC_ERROR(cannot find static area);                                                         		 \
}

#endif

#ifdef A_GC_DEFAULTS
#define A_GC_TRACINGAREA_DEFAULTS
#endif


#endif


