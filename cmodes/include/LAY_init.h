
                 /* Header file for LAY cmodes definition module */

#ifndef _LAY_init_h
#define _LAY_init_h

#include "config.h"

CF_HEADER( LAY_init_h_init, \
    "$Id: LAY_init.h,v 2.2 1995/03/29 13:05:26 ella Exp $" )

/* #define Config_LAY_init "DRA LAY_init 0.1 22-Dec-1993 16:15" */


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
22:12:93  Module created - initially without tests for NULL Nodes.  DCT
06:01:95   1.001  ELLA    Install in config manage system. 
29:03:95   2.002  ELLA  Change copyright header
??:??:??   ?.???  ????
*/

#include "cmodes.h"

#define LAY_SIGNATURE "V01_LAYOUT"

#define INT 1
#define ID 2
#define VEC 3

#define LAY_NSTRUCTS 4
#define LAY_LPAIR 20
#define LAY_LBRACKET 21
#define LAY_HLIST 22
#define LAY_VLIST 23

#define LAY_NUNIONS 1
#define LAY_LAYOUT 200

#define LAY_VECLAYOUT Vec(LAY_LAYOUT)

#define LpairA(x) Index(Children(x),1)
#define LpairB(x) Index(Children(x),2)
#define LbracketOpen(x) Index(Children(x),1)
#define LbracketBody(x) Index(Children(x),2)
#define LbracketClose(x) Index(Children(x),3)
#define HlistList(x) Index(Children(x),1)
#define VlistList(x) Index(Children(x),1)


extern Table *LAY_InitTable();

#endif

