

                    /*   C modes layout procedures header file    */

#ifndef _layprocs_h
#define _layprocs_h

#include "config.h"

CF_HEADER( layprocs_h_init, \
    "$Id: layprocs.h,v 2.2 1995/03/29 13:05:29 ella Exp $" )


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

/* Assumes that cmodes.h has been included first */

extern void setuplayout (Transformer *tprocs);
extern Node* lstring (char *string);
extern Node* lpair (Node *a, Node *b);
extern Node* lbracket (Node *open, Node *body, Node *close );
extern Node* llist2 (Node *a,  Node *b);
extern Node* llist3 (Node *a,  Node *b,  Node * c);
extern Node* llist4 (Node *a,  Node *b,  Node * c,  Node *d );
extern Node* llist5 (Node *a,  Node *b,  Node * c,  Node *d,  Node *e );
extern Node* llist6 (Node *a,  Node *b,  Node * c,  Node *d,  Node *e, Node *f);
extern Node *llist7 (Node *a, Node *b, Node *c, Node *d, Node *e, Node *f,
                     Node *g);
extern Node* hlist  (Node* vec);
extern Node* vlist  (Node* vec);
extern Node* newvec (Node *vec, Node *seperator, Node * terminator);
extern Node* makeid (char * id);
extern Node* int_id (Node* N);
extern Node* hlist2 (Node* a,  Node* b);
extern Node* hlist3 (Node* a,  Node* b,  Node* c);
extern Node* hlist4 (Node* a,  Node* b,  Node* c,  Node* d);
extern Node* hlist5 (Node* a,  Node* b,  Node* c,  Node* d,  Node* e);
extern Node* hlist6 (Node* a,  Node* b,  Node* c,  Node* d,  Node* e,  Node* f);
extern Node* hlist7 (Node* a,  Node* b,  Node* c,  Node* d,  Node* e,  Node* f,    Node* g);
extern Node* vlist2 (Node* a,  Node* b);
extern Node* vlist3 (Node* a,  Node* b,  Node* c);
extern Node* vlist4 (Node* a,  Node* b,  Node* c,  Node* d);
extern Node* vlist5 (Node* a,  Node* b,  Node* c,  Node* d,  Node* e);
extern Node* vlist6 (Node* a,  Node* b,  Node* c,  Node* d,  Node* e,  Node* f);
extern Node* hvec (Node *vec, Node *seperator, Node * terminator);
extern Node* vvec (Node *vec, Node *seperator, Node * terminator);

#endif
