          /*          udinst to uminst transformation       */

#include "config.h"

CF_MODULE( udinst_init, \
    "$Id: udinst.c,v 2.2 1995/03/29 13:05:23 ella Exp $" )


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
29:03:95   2.002  ELLA  Change copyright header
??:??:??   ?.???  ????
*/
#include <stdio.h>
#include "cmodes.h"
#include "udinst.h"


static Node* udinst_uminst ( Node* udinst, Transformer *tprocs)
 {
  
    Node* inst = UdinstInst(udinst);
    Node* left = UdinstLeft(udinst);
    Node* right = UdinstRight(udinst);
    Node* str;
    Node* elems = MakeVector(ELLA_UNIT, 2, tprocs);
    *IndexVector(elems, 1) = left;
    *IndexVector(elems, 2) = right;
    str = MakeNode(ELLA_USTR, Node1(elems), tprocs);
    return MakeNode(ELLA_UMINST, Node2(inst, str), tprocs);
 }

Transformer* Make_udinst_uminst (Transformer* tprocs)
{
NewConstructproc (ELLA_UDINST, udinst_uminst, tprocs);
return (tprocs);
}

