
                    /*   C modes generator macros header file    */

#ifndef _generator_macros_h
#define _generator_macros_h

#include "config.h"

CF_HEADER( generator_macros_h_init, \
    "$Id: generator_macro.h,v 2.4 1995/03/29 13:05:31 ella Exp $" )


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
06:01:95   1.001  ELLA    Install in config manage system. 
21:03:95   1.003  DJS   Add comment facility using % at the start of a line.
29:03:95   2.004  ELLA  Change copyright header
??:??:??   ?.???  ????
*/

#define FALSE 0
#define TRUE  1

#define BUFFERSIZE      1024
#define TYPESIZE        16
#define NAMESIZE        64
#define PRIMITEMSIZE    64
#define STRUCTITEMSIZE  64
#define UNIONITEMSIZE   64
#define VAR_NAME_SIZE   64
#define VECTOR_STR_SIZE 3
#define SECONDARY_STR_SIZE 3

#define RESERVED_SORTS "INT ID VEC"

#define SIGNATURE  "SIGNATURE"
#define TABLE      "TABLE"
#define CLASS      "CLASS"
#define ENUMERATED "ENUMERATED"
#define NODE       "NODE"
#define VECTOR     "VECTOR"
#define SECONDARY  "*"

#define INT_STR "INT"
#define VECTOR_STR "VEC"
#define SECONDARY_STR "SEC"

#define STRUCT_QTY_FRMT "NSTRUCTS"
#define UNION_QTY_FRMT  "NUNIONS"

#define START_COMMENT          '%'
#define START_ENUMERATED_ENTRY '('
#define END_ENUMERATED_ENTRY   ')'
#define START_STRUCT_ENTRY     '('
#define END_STRUCT_ENTRY       ')'
#define START_UNION_ENTRY      '('
#define END_UNION_ENTRY        ')'

#define FIRST_CONSTRUCTOR 20
#define FIRST_SORT        200

#define FILENAME_SEPERATOR "_"
#define INIT_FILE "init"
#define EXT_C "c"
#define EXT_H "h"

#define MAX_LINE_WIDTH 78

#define ListHead(x)             (x->head)
#define ListSize(x)             (x->size)
#define ListTail(x)             (x->tail)

#define SortHasvec(x)		(x->hasvec)
#define SortHassec(x)		(x->hassec)
#define SortNext(x)             (x->next)
#define SortValue(x)            (x->value)
#define SortBase(x)		(x->base)
#define SortsHead(x)            ((Sort *) x->head)
#define SortsTail(x)            ((Sort *) x->tail)

#define StructChildren_sorts(x) (x->children_sorts)
#define StructChildren_names(x) (x->children_names)
#define StructName(x)           (x->name)
#define StructNext(x)           (x->next)
#define StructDefined(x)        (x->defined)
#define StructToken(x)          (x->token)
#define StructUnion_sorts(x)    (x->union_sorts)
#define StructsHead(x)          ((Structs *) x->head)
#define StructsTail(x)          ((Structs *) x->tail)

#define StrefStr(x)             (x->str)
#define StrefNext(x)            (x->next)
#define StrefsHead(x)           ((Strefs *) x->head)
#define StrefsTail(x)           ((Strefs *) x->tail)

#define UnionDefined(x)         (x->defined)
#define UnionName(x)            (x->name)
#define UnionNext(x)            (x->next)
#define UnionToken(x)           (x->token)
#define UnionStrefs(x)          (x->strefs)
#define UnionsHead(x)           ((Unions *) x->head)
#define UnionsTail(x)           ((Unions *) x->tail)

#define MacroName(x)            (x->name)
#define MacroField(x)           (x->field)
#define MacroPos(x)             (x->pos)
#define MacroNext(x)            (x->next)
#define MacrosHead(x)           ((Macros *) x->head)
#define MacrosTail(x)           ((Macros *) x->tail)

#define EnumeratedName(x)       (x->name)
#define EnumeratedValue(x)      (x->value)
#define EnumeratedNext(x)       (x->next)
#define EnumeratedsHead(x)      ((Enumerateds *)x->head)
#define EnumeratedsTail(x)      ((Enumerateds *)x->tail)

#define PrimitiveName(x)        (x->name)
#define PrimitiveDefined(x)     (x->defined)
#define PrimitiveValues(x)      (x->values)
#define PrimitiveNext(x)        (x->next)
#define PrimitivesHead(x)       ((Primitives *)x->head)
#define PrimitivesTail(x)       ((Primitives *)x->tail)

#endif
