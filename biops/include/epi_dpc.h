/* $Id: epi_dpc.h,v 34.2 1995/03/29 13:04:21 ella Exp $ */



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
                                  system old version was 2.3 
29:03:95  34.002  ELLA  Modcprght Change copyright header
??:??:??   ?.???  ????
*/

#ifndef EPI_DPC_H

static char epi_dpc_h[] = "$Id: epi_dpc.h,v 34.2 1995/03/29 13:04:21 ella Exp $";     /* SCCS file ID */

#define EPI_DPC_H


/* EPI_DPC.H  -  Header file for use in the C Alien Code toolkit routines */
/*               requiring access to simulator data structures through    */
/*               epi_dpc.c module.                                        */
/*                                                        20:July:89 MHC  */
/*    12.12.90     Extended EPI_NODE to cope with probe functions. MDR.   */


/* Externs to be found in epi_dpc.c */

extern EPI_TYPE make_type();

/* Algol 68 types */
/* -------------- */
/* Unix definitions should match those in a68_types.h */
/* VMS definitions should match VMS Algol 68 compiler representations */

#define A68_INT		int
#define A68_CHAR	char	/* not unsigned as is defn in a68_types.h */
#define	A68_BITS	unsigned int
#define A68_BOOL	char

#if apollo || sun || ultrix

#define A68_GC_MARK	unsigned int
#define A_VECTOR(amode,tag)\
	struct tag { amode *data; A68_GC_MARK gc; A68_INT upb; }

#endif

#if vax

#define A_VECTOR(amode,tag)\
	struct tag { A68_INT upb; amode *data; }

#endif

A_VECTOR(A68_CHAR, A68t26);
typedef struct A68t26 A68_VC;

A_VECTOR(A68_INT, intvec);
typedef struct intvec A68_VINT;

A_VECTOR(A68_BITS, bitsvec);
typedef struct bitsvec A68_VBITS;


/* Algol 68 support function descriptor */

#ifdef unix
typedef struct
{
    void (*fn_ptr) ();
    int *non_locals;
} A68_FN_DESC;

typedef struct
{
    EPI_STATUS_CODE(*fn_ptr) ();
    int *non_locals;
} A68_SUP_FN_DESC;

#define A68_FN_PTR(d)        	(d.fn_ptr)
#define A68_FN_NON_LOCALS(d) 	(d.non_locals)

#endif

#if vax

/*
  Global Algol68 procedures are represented as just addresses
  in VMS Algol.
*/

typedef void (*A68_FN_DESC)();

typedef EPI_STATUS_CODE (*A68_SUP_FN_DESC)();

#define A68_FN_PTR(d)        	(d)
#define A68_FN_NON_LOCALS(d)	/* should cause compilation error if used */

#endif/* Algol 68 EPI objects */

typedef EPI_IDENT A68_EPI_IDENT;
typedef EPI_STATUS_CODE A68_EPI_STATUS_CODE;
typedef A68_VC A68_EPI_STRING;
typedef EPI_MESSAGE_TYPE A68_EPI_MESSAGE_TYPE;
typedef EPI_INT A68_EPI_INT;
typedef EPI_UNSIGNED A68_EPI_UNSIGNED;
typedef A68_BOOL A68_EPI_BOOL;
typedef EPI_TIME A68_EPI_TIME;

typedef struct
{
    A68_EPI_IDENT ident;
    A68_EPI_STRING name;
} A68_EPI_LIBRARY;

typedef struct
{
    A68_EPI_IDENT ident;
    A68_EPI_STRING name;
} A68_EPI_CONTEXT;

typedef struct
{
    A68_EPI_IDENT ident;
    A68_EPI_STRING name;
    A68_EPI_CONTEXT context;
} A68_EPI_IMPORTS;

typedef struct
{
    A68_EPI_IDENT ident;
    A68_EPI_STRING name;
    A68_EPI_UNSIGNED version;
    A68_EPI_UNSIGNED class;
    A68_EPI_CONTEXT context;
} A68_EPI_DECLARATION;

typedef struct
{
    A68_EPI_IDENT ident;
    A68_EPI_DECLARATION declaration;
    A68_EPI_IMPORTS imports;
} A68_EPI_BINDING;

typedef struct
{
    A68_EPI_IDENT ident;
    A68_EPI_INT fn;
    A68_EPI_INT instance;
    A68_EPI_INT circuit;
    A68_EPI_INT base;
    A68_VINT rnodelist;
} A68_EPI_NODE;

typedef struct
{
    A68_EPI_IDENT ident;
    A68_VINT value;
} A68_EPI_SIGNAL;

A_VECTOR(A68_EPI_SIGNAL, sigvec);
typedef struct sigvec A68_VSIGNAL;

typedef struct
{
    A68_EPI_IDENT ident;
    A68_EPI_UNSIGNED handle;
} A68_EPI_TESTPOINT;

typedef struct
{
    A68_EPI_IDENT ident;
    A68_EPI_UNSIGNED time;
    A68_EPI_TESTPOINT testpoint;
    A68_EPI_SIGNAL signal;
} A68_EPI_EVENT;

typedef struct
{
    A68_EPI_IDENT ident;
    A68_EPI_SIGNAL address;
    A68_EPI_SIGNAL data;
} A68_EPI_RAM_VALUE;

typedef struct
{
    A68_EPI_IDENT ident;
    A68_EPI_UNSIGNED seq;
    A68_EPI_NODE node;
} A68_EPI_FN_INPUT;

typedef struct a68_type *A68_EPI_TYPE;

A_VECTOR(A68_EPI_TYPE, typevec);
typedef struct typevec A68_VTYPE;

typedef struct
{
    A68_EPI_STRING tag;
    A68_EPI_TYPE subtype;
#if vax
    int padding;
#endif
} A68_EPI_ENUM;

A_VECTOR(A68_EPI_ENUM, enumvec);
typedef struct enumvec A68_VENUM;

struct a68_type
{
    A68_EPI_IDENT ident;
    A68_EPI_UNSIGNED class;
    struct			/* Algol 68 union */
    {
	unsigned tag;
	union
	{
	    struct
	    {
		A68_EPI_STRING tag;
		A68_EPI_INT lwb;
		A68_EPI_INT upb;
	    } int_type;
	    struct
	    {
		A68_EPI_STRING tag;
		A68_EPI_STRING repr;
	    } char_type;
	    struct
	    {
		A68_EPI_UNSIGNED length;
		A68_EPI_TYPE subtype;
	    } string_type;
	    struct
	    {
		A68_EPI_UNSIGNED elems;
		A68_EPI_TYPE subtype;
	    } row_type;
	    A68_VTYPE struct_type;
	    struct
	    {
		A68_EPI_TYPE input;
		A68_EPI_TYPE output;
	    } fn_type;
	    A68_VENUM enum_type;
	} data;
    } type;
};

typedef struct
{
    A68_EPI_MESSAGE_TYPE type;
    struct			/* Algol 68 union  */
    {
	unsigned tag;
	union
	{
	    A68_EPI_STRING string;
	    A68_EPI_UNSIGNED unsgnd;
	    A68_EPI_BOOL bool;
	    A68_EPI_LIBRARY library;
	    A68_EPI_CONTEXT context;
	    A68_EPI_IMPORTS imports;
	    A68_EPI_BINDING binding;
	    A68_EPI_DECLARATION declaration;
	    A68_EPI_NODE node;
	    A68_EPI_SIGNAL signal;
	    A68_EPI_TESTPOINT testpoint;
	    A68_EPI_EVENT event;
	    A68_EPI_RAM_VALUE ramvalue;
	    A68_EPI_FN_INPUT fninput;
	    A68_EPI_TYPE type;
	} data;
    } info;
} A68_MESSAGE, *A68_EPI_MESSAGE;



#endif   /* EPI_DPC_H */
