             /* Temporary layout procedures */

#include "config.h"

CF_MODULE( layout_print_init, \
    "$Id: layout_print.c,v 2.2 1995/03/29 13:05:22 ella Exp $" )


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
#include "layout_print.h"

static FILE * outch;

/* ----------- Print Transformations ------------------- */

static int indent = 1,
           charcount = 0;

typedef struct stackcell { int indent;
                           struct stackcell *next;
                         } STACK;

static STACK *indents = NULL;
                   
static newindent (int start)
{
   STACK *entry = (STACK *) malloc (sizeof(STACK));
   entry -> indent = indent;
   entry -> next = indents;
   indents = entry;
   indent = start + 3;
}   

static oldindent ()
{
   indent = indents -> indent;
   indents = indents -> next;
}

static decindent ()
{
   indent -= 3;
}

static newline ()
{ 
   fprintf(outch, "\n"); 
   fprintf(outch, "%*c", indent, ' ');
   charcount = indent;
}

/**************** Find size of NOde ****************************/

static int linelength = 78,
           size = 0;
static Transformer *sizetprocs;

static Node* size_string (Node *string)
{
   size = size + ( IsNil(string) ? 0 : strlen(IdValue(string)) + 1 );
   return string;
}

static Node * size_trans (Node *object, Transformer *tprocs)
{
   if ( Type(object) == ID )
        return size_string(object);
   else if (size > linelength)
        return object;
   else return Transform(object, tprocs);
}

static Node* size_pair (Node *pair, Transformer *tprocs)
{
    Node *a = size_trans(LpairA(pair), tprocs);
    Node *b = size_trans(LpairB(pair), tprocs);
    return pair;
}

static Node* size_bracket (Node *bkt, Transformer *tprocs)
{
   Node *open = size_trans(LbracketOpen(bkt), tprocs);    
   Node *body = size_trans(LbracketBody(bkt), tprocs);    
   Node *close = size_trans(LbracketClose(bkt), tprocs);    
   return bkt;
}

static Node* size_hlist (Node *list, Transformer *tprocs)
{
   Node * vec = HlistList(list);
   long int i;
   Node * vecelem;
   for ( i = 1; i<= VecSize(vec); i++ )
      size_trans(*IndexVector(vec, i), tprocs);
  return list;
}

static Node* size_vlist (Node *list, Transformer *tprocs)
{ /* make sure vertical lists are always printed vertically */
   size = 999;
   return list;
}
   
static Transformer* size_layout (Transformer *old)
{
   Transformer *sizetprocs = MakeNullTransformer(TransformerObjtable(old),
                                                 TransformerImgtable(old));
   
  NewTransformproc( LAY_LPAIR, size_pair, sizetprocs );
   NewTransformproc( LAY_LBRACKET, size_bracket, sizetprocs );
   NewTransformproc( LAY_HLIST, size_hlist, sizetprocs );
   NewTransformproc( LAY_VLIST, size_vlist, sizetprocs );
   return sizetprocs;
}

static int fit_online (Node *N)
{
   Node *n;
   size = 0;
   n = Transform(N, sizetprocs);
   return (size <= linelength);
}

/****************** main procedures *****************************/

static Node* printstring (Node *string, Transformer *tprocs)
{
   if ( ! IsNil(string))
      { char *str = IdValue(string);
        charcount += strlen(str);
        fprintf(outch, "%s ", str);
      }
   return string;
}

static Node *Printout (Node *object, Transformer *tprocs)
{
   if ( Type(object) == ID )
        return printstring(object, tprocs);
   else return Transform(object, tprocs);
}


static Node* printpair (Node *pair, Transformer *tprocs)
{
   int currentpos = charcount ;
   Printout(LpairA(pair), tprocs);
   if ( fit_online(pair) )
     Printout(LpairB(pair), tprocs);
   else
      { newindent(currentpos);
        newline();
        Printout(LpairB(pair), tprocs);
        oldindent();
      }
   return pair;
}

static Node* printbracket (Node *bracket, Transformer *tprocs)
{
   int currentpos = charcount ;
   Printout(LbracketOpen(bracket), tprocs);
   if ( fit_online(bracket) )
     {
       Printout(LbracketBody(bracket), tprocs);
       Printout(LbracketClose(bracket), tprocs);
     }
   else
     {
       newindent(currentpos);
       newline();
       Printout(LbracketBody(bracket), tprocs);
       decindent();
       newline();
       Printout(LbracketClose(bracket), tprocs);
       oldindent();
     }
   return bracket;
}

static Node* printvlist (Node *list, Transformer *tprocs)
{
   Node * vec = VlistList(list);
   long int i;
   Node * vecelem;
   for ( i = 1; i<= VecSize(vec); i++ )
      { Printout(*IndexVector(vec, i), tprocs);
        if (i != VecSize(vec)) newline();
      };
   return list;
}

static Node* printhlist (Node *list, Transformer *tprocs)
{
   Node * vec = HlistList(list);
   long int i;
   Node * vecelem;
   for ( i = 1; i<= VecSize(vec); i++ )
      Printout(*IndexVector(vec, i), tprocs);
  return list;
}


extern Transformer *make_layout_print (Transformer *newlayout, FILE *outfile )
{
   sizetprocs = size_layout(newlayout);
   outch = outfile;

   NewTransformproc( LAY_LPAIR, printpair, newlayout );
   NewTransformproc( LAY_LBRACKET, printbracket, newlayout );
   NewTransformproc( LAY_HLIST, printhlist, newlayout );
   NewTransformproc( LAY_VLIST, printvlist, newlayout );
   return newlayout;
}
