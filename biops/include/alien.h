/*	$Id: alien.h,v 34.2 1995/03/29 13:04:19 ella Exp $	*/


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
                                  system old version was 1.2 
29:03:95  34.002  ELLA  Modcprght Change copyright header
??:??:??   ?.???  ????
*/

/*
  ELLA Alien Code Interface

  See the ELLA Alien Code Programmer's guide for how to use alien code.
*/

#ifndef ALIEN_H

static char alien_h[] = " $Id: alien.h,v 34.2 1995/03/29 13:04:19 ella Exp $ ";

#define ALIEN_H

/* Evaluation functions have no return value */
typedef void (*ACI_EVAL_FN)();

/* Simulation action, passed by ELLA to evaluation function */
typedef enum {
    initialise = 1,
    evaluate = 3,
    save = 4,
    restore = 5,
    terminate = 6
} ACI_EVAL_ACTION;

/* ELLA function instance handle, passed by ELLA to evaluation function */
typedef int ACI_EVAL_INST;

/* ELLA type information as passed by ELLA to finder function */
typedef unsigned ACI_TYPE_HANDLE;

/* ELLA type information as returned from toolkit functions */
typedef struct aci_type *ACI_TYPE;
struct aci_type
{
  unsigned secret;		/* don't modify this */
  enum {			/* what sort of type? */
    Char=174,			     /* ELLA character */
    Enum=175,			     /* ELLA enumeration */
    Fntype=176,			     /* ELLA function type */
    Int=177,			     /* ELLA integer */
    Invalid=178,		     /* not a valid ACI_TYPE */
    Null=179,			     /* empty associated type (place marker) */
    Row=180,			     /* ELLA row */
    String=181,			     /* ELLA string */
    Struct=182,			     /* ELLA structure */
    } class;
  union				/* details according to class */
  {
    struct			/* TYPE xx = NEW tag/(lwb..upb). */
    {
      char *tag;
      int lwb;
      int upb;
    } int_type;

    struct			/* eg TYPE xx = NEW tag('a | 'b | 'A | 'B). */
    {
      char * tag;
      char * repr;		/* repr is "abAB" in this example */
    } char_type;

    struct			/* TYPE xx = STRING [length] yy. */
    {
      unsigned length;
      ACI_TYPE subtype;
    } string_type;

    struct			/* TYPE xx = [length] yy */
    {
      unsigned length;
      ACI_TYPE subtype;
    } row_type;

    struct			/* eg TYPE xx = ( aa, bb, cc ). */
    {
      unsigned elems;		/* 3 in this example */
      ACI_TYPE *subtypes;	/* ( aa, bb, cc ) in this example */
    } struct_type;

    struct			/* eg TYPE xx = aa -> bb. */
    {
      ACI_TYPE input;		/* aa in this example */
      ACI_TYPE output;		/* bb in this example */
    } fn_type;

    struct			/* eg TYPE xx = NEW ( a | b && bb | c). */
    {
      unsigned elems;		/* 3 in this example */
      char **tags;		/* ( "a", "b", "c" ) in this example */
      ACI_TYPE *subtypes;	/* ( Null, bb, Null ) in this example */
    } enum_type;
  } type_info;
};

/* Toolkit functions */
extern void      aci_decode_input();
extern ACI_TYPE  aci_decode_type();
extern void      aci_encode_output();
extern void      aci_free_type();
extern void      aci_input();
extern unsigned  aci_input_size();
extern ACI_TYPE  aci_input_type();
extern unsigned  aci_inputs_upb();
extern unsigned  aci_instance_id();
extern void      aci_log();
extern unsigned  aci_output_size();
extern ACI_TYPE  aci_output_type();
extern int       aci_same_type();
extern void      aci_set_instance_id();
extern void      aci_set_out();
extern unsigned  aci_time();
extern char     *aci_workspace();
extern unsigned  aci_workspace_size();

#endif    /* ALIEN_H */
