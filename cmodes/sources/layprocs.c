          /*          C modes layout procedures       */

#include "config.h"

CF_MODULE( layprocs_init, \
    "$Id: layprocs.c,v 2.3 1995/03/29 13:05:22 ella Exp $" )


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
12:01:95   1.002  DJS    Heap of strings given to MakeId removed as this does
                        it anyway. 
29:03:95   2.003  ELLA  Change copyright header
??:??:??   ?.???  ????
*/

#include <stdio.h>
#include <stdlib.h>

#include "heap.h"
#include "cmodes.h"
#include "LAY_init.h"
#include "layprocs.h"

Transformer *laytprocs;

extern void setuplayout (Transformer *tprocs)
{ 
  laytprocs = tprocs;
}

extern Node *makeid (char * id)
{
   return MakeId( id, laytprocs); /* MakeId heaps id */
}

extern Node* int_id (Node* N)
{  char buffer[ 20 ];
   sprintf( buffer, "%d", ScalarInt(N) );
   return MakeId( buffer, laytprocs); /* MakeId heaps buffer */
}

extern Node* lstring (char *string)
{
  return MakeId( string, laytprocs); /* MakeId heaps string */
}

extern Node* lpair (Node *a, Node *b)
{
   return MakeNode(LAY_LPAIR, Node2(a, b), laytprocs);
}

extern Node* lbracket (Node *open, Node *body, Node *close )
{
   return MakeNode(LAY_LBRACKET, Node3(open, body, close), laytprocs);
}
 
extern Node* llist2 (Node *a,  Node *b)
{
   Node *vec = MakeVector(LAY_LAYOUT, 2, laytprocs);  
   *IndexVector(vec, 1) = a;
   *IndexVector(vec, 2) = b;
   return vec;
}

extern Node* llist3 (Node *a,  Node *b,  Node * c)
{
   Node *vec = MakeVector(LAY_LAYOUT, 3, laytprocs);  
   *IndexVector(vec, 1) = a;
   *IndexVector(vec, 2) = b;
   *IndexVector(vec, 3) = c;
   return vec;
}

extern Node* llist4 (Node *a,  Node *b,  Node *c, Node *d)
{
   Node *vec = MakeVector(LAY_LAYOUT, 4, laytprocs);  
   *IndexVector(vec, 1) = a;
   *IndexVector(vec, 2) = b;
   *IndexVector(vec, 3) = c;
   *IndexVector(vec, 4) = d;
   return vec;
}


extern Node* llist5 (Node *a, Node *b, Node *c, Node *d, Node *e)
{
   Node *vec = MakeVector(LAY_LAYOUT, 5, laytprocs);  
   *IndexVector(vec, 1) = a;
   *IndexVector(vec, 2) = b;
   *IndexVector(vec, 3) = c;
   *IndexVector(vec, 4) = d;
   *IndexVector(vec, 5) = e;
   return vec;
}

extern Node *llist6 (Node *a, Node *b, Node *c, Node *d, Node *e, Node *f)
{
   Node *vec = MakeVector(LAY_LAYOUT, 6, laytprocs);  
   *IndexVector(vec, 1) = a;
   *IndexVector(vec, 2) = b;
   *IndexVector(vec, 3) = c;
   *IndexVector(vec, 4) = d;
   *IndexVector(vec, 5) = e;
   *IndexVector(vec, 6) = f;
   return vec;
}

extern Node *llist7 (Node *a, Node *b, Node *c, Node *d, Node *e, Node *f,
                     Node *g)
{
   Node *vec = MakeVector(LAY_LAYOUT, 7, laytprocs);  
   *IndexVector(vec, 1) = a;
   *IndexVector(vec, 2) = b;
   *IndexVector(vec, 3) = c;
   *IndexVector(vec, 4) = d;
   *IndexVector(vec, 5) = e;
   *IndexVector(vec, 6) = f;
   *IndexVector(vec, 7) = g;
    return vec;
}

extern Node* hlist (Node* vec)
{
   return MakeNode(LAY_HLIST, Node1(vec), laytprocs);
}

extern Node* vlist (Node* vec)
{
   return MakeNode(LAY_VLIST, Node1(vec), laytprocs);
}

extern Node* newvec (Node *vec, Node *seperator, Node * terminator)
{
   Size upb = VecSize(vec);
   Node *veclay = MakeVector(LAY_LAYOUT, upb, laytprocs);   
  
   int i;
   for (i = 1; i < upb; i++)
      { Node *vecelem = *IndexVector(vec, i);
        *IndexVector(veclay, i) = hlist(llist2(vecelem, seperator));
      }
   *IndexVector(veclay, upb) = 
          hlist(llist2(*IndexVector(vec, upb), terminator));

   return veclay;
}

extern Node* hlist2 (Node* a, Node* b)
{
    return hlist(llist2(a,b));
}
 
extern Node* hlist3 (Node* a, Node* b, Node* c)
{
    return hlist(llist3(a,b,c));
}

extern Node* hlist4 (Node* a, Node* b, Node* c, Node* d)
{
    return hlist(llist4(a,b,c,d));
}

extern Node* hlist5 (Node* a, Node* b, Node* c, Node* d, Node* e)
{
    return hlist(llist5(a,b,c,d,e));
}

extern Node* hlist6 (Node* a, Node* b, Node* c, Node* d, Node* e, Node* f)
{
    return hlist(llist6(a,b,c,d,e,f));
}

extern Node* hlist7 (Node* a,  Node* b,  Node* c,  Node* d,  Node* e,  Node* f,
                     Node* g)
{    
    return hlist(llist7(a,b,c,d,e,f,g));
}

extern Node* vlist2 (Node* a, Node* b)
{
    return vlist(llist2(a,b));
}
 
extern Node* vlist3 (Node* a, Node* b, Node* c)
{
    return vlist(llist3(a,b,c));
}

extern Node* vlist4 (Node* a, Node* b, Node* c, Node* d)
{
    return vlist(llist4(a,b,c,d));
}

extern Node* vlist5 (Node* a, Node* b, Node* c, Node* d, Node* e)
{
    return vlist(llist5(a,b,c,d,e));
}

extern Node* vlist6 (Node* a, Node* b, Node* c, Node* d, Node* e, Node* f)
{
    return vlist(llist6(a,b,c,d,e,f));
}

extern Node* hvec (Node *vec, Node *seperator, Node * terminator)
{
    if ( VecSize(vec) == 0 )
       return lstring("");
    else
      return hlist(newvec(vec, seperator, terminator));
}

extern Node* vvec (Node *vec, Node *seperator, Node * terminator)
{
    if ( VecSize(vec) == 0 )
       return lstring("");
    else
      return vlist(newvec(vec, seperator, terminator));
}
