
                    /*   C modes generator structures header file    */

#ifndef _generator_structs_h
#define _generator_structs_h

#include "config.h"

CF_HEADER( generator_structs_h_init, \
    "$Id: generator_structs.h,v 2.3 1995/03/29 13:05:32 ella Exp $" )


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
21:03:95   1.002  DJS   New structs to allow CLASSes within CLASSes.
29:03:95   2.003  ELLA  Change copyright header
??:??:??   ?.???  ????
*/

typedef struct { int size;
                 void *head,
                      *tail;
               } ListNode;

typedef struct sortCELL { char *value,
                               *base;
                          int hasvec,
                              hassec;
                          struct sortCELL *next;
                        } Sort;

typedef struct structCELL { char *name;
                            int defined,
                                token;
                            ListNode *union_sorts,
                                     *children_sorts,
                                     *children_names;
                            struct structCELL *next;
                          } Structs;

typedef struct strefCELL { Structs *str;
                           struct strefCELL *next;
                         } Strefs;


typedef struct unionCELL { char *name;
                           int defined,
                               token;
                           ListNode *strefs;
                           struct unionCELL *next;
                         } Unions;

typedef struct macroCELL { char *name,
                                *field;
                           int pos;
                           struct macroCELL *next;
                         } Macros;
 
typedef struct enumeratedCELL { char *name;
                                int value;
                                struct enumeratedCELL *next;
                              } Enumerateds;

typedef struct primitiveCELL { char *name;
                               int defined;
                               ListNode *values;
                               struct primitiveCELL *next;
                             } Primitives;

#endif

