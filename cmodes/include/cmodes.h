
   /*   Interface specification for the C modes transformational toolkit    */

#ifndef _cmodes_h
#define _cmodes_h

#include "config.h"

CF_HEADER( cmodes_h_init, \
    "$Id: cmodes.h,v 2.6 1995/03/29 13:05:27 ella Exp $" )

/* #define Config_cmodes "DRA cmodes 0.1 22-Dec-1993 16:15" */


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
12:01:95   1.002  DJS    Change macro Index(x) so that is legal ANSI on both
                        right and left of an assignment. 
24:01:95   1.003  DJS    Modify way MakeId works, use vector instead of list.
                        Changes for of and ID. 
21:03:95   1.004  DJS   Add prelude mechanism.
28:03:95   1.005  DJS   Move CreateNilNode and CopyTree from ella_vif.c
29:03:95   2.006  ELLA  Change copyright header
??:??:??   ?.???  ????
*/

/* Abstract basic types */

/* WARNING - currently it is assumed in the toolkit that:
             Sort, Size, Int and Token are compatible, and
             Private and Bits are compatible
*/

typedef long int Token,   /* the node identifier (type) */
                 Sort,    /* the result type (set) of a constructor */
                 Size,    /* used for vectors */
                 Int,     /* an integer / scalar value */
                 Bool;    /* for expressions delivering boolean results */
typedef unsigned long Private,  /* flags used within a node */
                 Bits;          /* abstraction of unsigned value */
typedef void     Env;     /* the type of an environment pointer */

typedef struct {
    Token t;
    Int bool;
} Tok;


/* system constants */

#define CHILDMAX        32
#define ENVSIZE         140
#define FALSE           0
#define IDSTABLEMAX     32
#define MAKECSIZE       140
#define MAX_FILENAME    128
#define MAX_MODE_NAME   32
#define MODE_TABLE_SIZE 180
#define TPROCSIZE       140
#define TRUE            1
#define VECNODEBUF      100
#define ZERO            '0'

/* system node sizes */

#define IDSENTRYSIZE    3
#define IDSARMSIZE      2

#define NILNODESIZE     0
#define IDSIZE          1
#define SCALARSIZE      1
#define VECSIZE         4

/* Reserved tokens */

#define FIRST_CONSTRUCTOR 20
#define FIRST_SORT        200
#define MAX_TOK_RANGE     999
#define MIN_TOK_RANGE     0

#define SCALAR    1
#define INT       1
#define ID        2
#define VEC       3
#define ELEMENT   4
#define TAG       5
#define SEC       6
#define UNSET	  7

#define SECTABLE  12
#define IDSTABLE  13
#define IDSARM    14
#define IDSENTRY  15

/* Added other cmode access macros - WJO 8/2/94 */

#define ChildType(childs,pos)     (childs[pos])
#define ChildrenQty(table,node)   (table.entry[Type(node)].children_qty)
#define ChildrenSort(table,node)  (table.entry[Type(node)].children_sort)
#define EntryChildren(x)          (x->children)
#define EntryChildnames(x)        (x->childnames)
#define EntryName(x)              (x->name)
#define EntrySort(x)              (x->sort)

#define IdValue(x)                ((char *) ((x->children[1])->children[1]))
#define IdHash(x)                 ((long int) ((x->children[1])->children[2]))
#define IdPtr(x)                  (x->children[1])

#define IdsarmSize(x)             (x->children[1])
#define IdsarmEntries(x)          (x->children[2])

#define IdEntryStr(x)             (x->children[1])
#define IdEntryHash(x)            (x->children[2])
#define IdEntryRest(x)            (x->children[3])

#define NodeChild(x,i)            (x->children[i])
#define NodeChildren(x)           (x->children)

#define ScalarInt(node)           ((long int) node->children[1])
#define ScalarNodeValue(x)        (x->children[1])
#define TableElements(x)          (x->elements)
#define TableSorts(x)             (x->sorts)
#define TokenNil(x)               (x.bool)
#define TokenToken(x)             (x.t)
#define TransformerEnvironment(x) (x->environment)
#define TransformerObjtable(x)    (x->objtable)
#define TransformerImgtable(x)    (x->imgtable)
#define Type(x)                   (x->token)
#define NodePtr(x)                ((Node *)(x))
 
/* #define PrintTree(x)  print_tree(x,0) */
/* PRIVATE - bits defined for operations on the private part of a Node */

#define CHANGED  0x1000000ul     /* Node has changed - call constructor */
#define GCMARK  0x2000000ul    /* Node is referenced and has been (is) traced */
#define NIL  0x4000000ul       /* Node is a nil node */
#define SIZEMASK 0xfffffful   /* Number of children in a Node */

/* PRIVATE - bits defined for operations on the token part of a Node */

#define VECMASK  0x10000000ul   /*  indicates Vec token */
#define SECMASK  0x20000000ul   /*  indicates secondary child */

/* PRIVATE - operations on the private part of   Node */

#define Ovh(node)         (node)->private
#define Mark(node)        Ovh(node) |= GCMARK
#define Unmark(node)      Ovh(node) &= ~GCMARK
#define IsMarked(node)    (Ovh(node) & GCMARK)

/* public operations on the private part of a Node */

#define NodeSize(node)    (Size)(Ovh(node) & SIZEMASK)
#define Changed(node)     Ovh(node) |= CHANGED
#define Unchanged(node)   Ovh(node) &= ~CHANGED
#define IsChanged(node)   (Ovh(node) & CHANGED)
#define SetNil(node)      (Ovh(node) |= NIL)
#define IsNil(node)       (Ovh(node) & NIL)

/* public operations on vectors */

#define Vec(token)        ((Token)((token) | VECMASK)) /* type -> VEC type */
#define IsVec(token)      ((token) & VECMASK)         /* is token a VEC type */
#define VecType(token)    (token & ~VECMASK)     /* token -> type of vec */
#define VecSize(node)     NodeSize(node)

/* public operations on secondary children */

#define Sec(token)   ((Token)((token) | SECMASK))
                                                 /* type -> secondary type */
#define SecondaryType(token) (token & ~SECMASK)  /* token -> type of secondary*/
#define IsSecondary(token)  ( (token) & SECMASK)  /* secondary use of node */
#define IsPrimary(token)   ~( (token) & SECMASK)  /* primary use of node */
                 /* DJS Changed node to token was IsPrimary(node) ... as is */
/* define tree nodes */

typedef struct node
{ Token token;
  Private private;
  struct node *children[1];  /* variable number of children - the first
                             child is hidden and used for memory management */
} Node;

/* vector types */

typedef struct { Size upb; Sort *ptr; } VecSort;
typedef struct { Size upb; Node **ptr; } VecNode;

/* private Vec operations */

extern void IndexFail(Size index, Size upb);
#define Ptr(vec)  ((vec).ptr)

/* public index Vec operations */

#define Upb(vec)  ((vec).upb)
#define Index(vec, index) (Ptr(vec)[((index) > Upb(vec) || (index) < 0) \
                                    ? ( IndexFail((index), Upb(vec)), 0) \
                                      : index])
#define UnsafeIndex(vec, index) (Ptr(vec)[index])

/* introduce Transformer - recursive type needed to define Transformproc */

struct transformer;

/* generic form of transform and make procedures */

typedef Node *Preludeproc (Node *, struct transformer *);
typedef Node *Transformproc (Node *, struct transformer *);
typedef Node *Constructproc (Node *, struct transformer *);


/* table defining the algebra */

typedef struct
{ char *name;
  VecSort sort;
  VecSort children;
  VecSort childnames;
} Entry;

typedef struct { Size upb; Entry *ptr; } VecEntry;
typedef struct { Size upb; char **ptr; } VecStr;

typedef struct
{ VecEntry elements;     /* The constructors in the language */
  VecStr sorts;          /* The sort names */
} Table;

extern char **SortStr (Token token, Table *table);
extern Entry *ConstructorEntry (Token token, Table *table);


/* stacks */

/* The nodestack is used to trace live pointers during garbage collection -
   initially garbage collection is only allowed from root positions and so
   the node stack will not be used yet   DCT  17:12:93
*/

typedef struct nodestack
{ Node *node;
  struct nodestack *rest;
} Nodestack;

typedef struct envstack
{ Token token;
  Env *env;
  struct envstack *rest;
} Envstack;


/* transfomer - no fields are publically accessable */

typedef struct transformer
{ Table *objtable;            /* basic type information object domain */
  Table *imgtable;            /* basic type information image domain */
  Preludeproc **prelude;      /* corresponding array of prelude procedures */
  Transformproc **transform;  /* corresponding array of transform procedures */
  Constructproc **construct;  /* corresponding array of image constructors */
  Env **environment;          /* user defined environment associated with each
                                 node in the tree */
  Envstack *envstack;         /* environment stack */
  Nodestack *nodestack;       /* live Nodes for garbage collection */
} Transformer;


/* private toolkit interface */

/* --- memory interface */

extern Node **nodechain;       /* main heap memory chain */
extern Nodestack **rootnodes;  /* live roots for tracing */

/* --- Node type checker */

extern void check_sort (int token, int sort, Table *table);

/* public toolkit interface */

/* --- basic operations on Nodes */

extern Size Nchildren(Token token, Table *table);
extern VecNode Children(Node *node);
extern Bool SecondaryChild (Token tok, int i, Table *table);
extern char *ChildName(Token tok, int i, Table *table);

/* --- Vector Node operations */

extern Tok create_token(Token tok, Int nil);

extern Node *MakeVector(Token token, Size size, Transformer *tprocs);
extern Node *CopyVector(Node *old, Transformer *tprocs);
extern Node **IndexVector(Node *vector, Size index);


/* --- memory interface - most procedures have a Transformer to allow for
                          more refined garbage collection later */

extern Node *MakeEmptyNode(Size size, Transformer *tprocs);
extern Node *MakeNilNode(Token tok, Transformer *tprocs);
extern Node *MakeScalar(Int value, Transformer *tprocs);
extern Node *MakeId(char *value, Transformer *tprocs);
extern Node *MakeNode(Token token, VecNode children, Transformer *tprocs);
extern Node *MakeSecondary(Node *primary, Transformer *tprocs);
extern Node *CopyNode(Node *node, Transformer *tprocs);
extern Node *CreateNilNode (Token token, Transformer *tprocs);
extern Node *CopyTree (Node *node, Transformer *tprocs);

/* private procedures for handling the ids table */

extern Int GetIdsTableSize( void);
extern Node *GetIdsTableEntry( Int i);
extern Node *make_id( Node *ide, Transformer *tprocs);
extern Node *add_to_ids_table( char *str, Transformer *tprocs);
extern void print_idstable();

/* --- main user transform interface */

extern Node *NullTransform(Node *object, Transformer *tprocs);
extern Node *Prelude(Node *object, Transformer *tprocs);
extern Node *Transform(Node *object, Transformer *tprocs);
extern Node *Construct(Node *obj_img, Transformer *tprocs);

extern Env *GetEnv(Token token, Transformer *tprocs);
extern void NewEnv(Token token, Env *newenv, Transformer *tprocs);

/* --- initialisation interface */

extern Table *CreateTable(char * name, Size n_elements, Size n_sorts);
extern void AddElement( Token, char *name, VecSort sort,
                        VecSort children, VecSort Childnames, Table *table );
extern void AddSort(Token sort, char *name, Table *table);

extern Transformer *MakeNullTransformer(Table *objtable, Table *imgtable);
extern void NewPreludeproc(Token token, Preludeproc *new, Transformer *);
extern void NewTransformproc(Token token, Transformproc *new, Transformer *);
extern void NewConstructproc(Token obj, Constructproc *new, Transformer *);

/* These macros / procedures are used to generate a VecNode children for the
   constructor procedures - they are not traced during garbage collection and
   the resulting VecNode must not be assumed to have any prolonged life.
*/

extern VecNode MakeVecNode(Size,Node*,Node*,Node*,Node*,Node*,Node*,Node*,Node*,Node*,Node*,Node*,Node*,Node*,Node*);

#define Node0() MakeVecNode(0,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL)
#define Node1(n1) MakeVecNode(1,n1,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL)
#define Node2(n1,n2) MakeVecNode(2,n1,n2,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL)
#define Node3(n1,n2,n3) MakeVecNode(3,n1,n2,n3,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL)
#define Node4(n1,n2,n3,n4) MakeVecNode(4,n1,n2,n3,n4,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL)
#define Node5(n1,n2,n3,n4,n5) MakeVecNode(5,n1,n2,n3,n4,n5,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL)
#define Node6(n1,n2,n3,n4,n5,n6) MakeVecNode(6,n1,n2,n3,n4,n5,n6,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL)
#define Node7(n1,n2,n3,n4,n5,n6,n7) MakeVecNode(7,n1,n2,n3,n4,n5,n6,n7,NULL,NULL,NULL,NULL,NULL,NULL,NULL)
#define Node8(n1,n2,n3,n4,n5,n6,n7,n8) MakeVecNode(8,n1,n2,n3,n4,n5,n6,n7,n8,NULL,NULL,NULL,NULL,NULL,NULL)
#define Node9(n1,n2,n3,n4,n5,n6,n7,n8,n9) MakeVecNode(9,n1,n2,n3,n4,n5,n6,n7,n8,n9,NULL,NULL,NULL,NULL,NULL)
#define Node10(n1,n2,n3,n4,n5,n6,n7,n8,n9,n10) MakeVecNode(10,n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,NULL,NULL,NULL,NULL,NULL)
#define Node11(n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11) MakeVecNode(11,n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,NULL,NULL,NULL)
#define Node12(n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12) MakeVecNode(12,n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,NULL,NULL)
#define Node13(n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13) MakeVecNode(13,n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,NULL)
#define Node14(n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,n14) MakeVecNode(14,n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12,n13,n14)

/* These macro / procedures are used to construct the sort tables for
   constructors and their parameters - the space is not deallocated as it
   is referenced in the "Table".
*/
extern VecSort MakeVecSort( Size, Sort, Sort, Sort, Sort, Sort, Sort, Sort,
                                  Sort, Sort, Sort, Sort, Sort, Sort, Sort );
#define Sort0() MakeVecSort( 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0)
#define Sort1(s1) MakeVecSort( 1, (Sort)s1, 0,0,0,0,0,0,0,0,0,0,0,0,0)
#define Sort2(s1,s2) MakeVecSort( 2, (Sort)s1, (Sort)s2, \
                                     0,0,0,0,0,0,0,0,0,0,0,0)
#define Sort3(s1,s2,s3) MakeVecSort( 3, (Sort)s1, (Sort)s2, (Sort)s3, \
                                        0,0,0,0,0,0,0,0,0,0,0)
#define Sort4(s1,s2,s3,s4) MakeVecSort( 4, (Sort)s1, (Sort)s2, (Sort)s3, \
                                           (Sort)s4, 0,0,0,0,0,0,0,0,0,0)
#define Sort5(s1,s2,s3,s4,s5) MakeVecSort( 5, (Sort)s1, (Sort)s2, (Sort)s3, \
                                              (Sort)s4, (Sort)s5, \
                                              0,0,0,0,0,0,0,0,0)
#define Sort6(s1,s2,s3,s4,s5,s6) MakeVecSort( 6, (Sort)s1, (Sort)s2, (Sort)s3, \
                                                 (Sort)s4, (Sort)s5, (Sort)s6, \
                                                 0,0,0,0,0,0,0,0)
#define Sort7(s1,s2,s3,s4,s5,s6,s7) MakeVecSort( 7, (Sort)s1, (Sort)s2, \
                                                    (Sort)s3, (Sort)s4, \
                                                    (Sort)s5, (Sort)s6, \
                                                    (Sort)s7, 0,0,0,0,0,0,0)
#define Sort8(s1,s2,s3,s4,s5,s6,s7,s8) MakeVecSort( 8, (Sort)s1, (Sort)s2, \
                                                       (Sort)s3, (Sort)s4, \
                                                       (Sort)s5, (Sort)s6, \
                                                       (Sort)s7, (Sort)s8, \
                                                       0,0,0,0,0,0)
#define Sort9(s1,s2,s3,s4,s5,s6,s7,s8,s9) MakeVecSort( 9, (Sort)s1, (Sort)s2, \
                                                          (Sort)s3, (Sort)s4, \
                                                          (Sort)s5, (Sort)s6, \
                                                          (Sort)s7, (Sort)s8, \
                                                          (Sort)s9, \
                                                          0,0,0,0,0)
#define Sort10(s1,s2,s3,s4,s5,s6,s7,s8,s9,s10) \
  MakeVecSort( 10, (Sort)s1, (Sort)s2, (Sort)s3, (Sort)s4, (Sort)s5, (Sort)s6, \
                   (Sort)s7, (Sort)s8, (Sort)s9, (Sort)s10, 0,0,0,0)
#define Sort11(s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11) \
  MakeVecSort( 11, (Sort)s1, (Sort)s2, (Sort)s3, (Sort)s4, (Sort)s5, (Sort)s6, \
                   (Sort)s7, (Sort)s8, (Sort)s9, (Sort)s10, (Sort)s11, 0,0,0)
#define Sort12(s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12) \
  MakeVecSort( 12, (Sort)s1, (Sort)s2, (Sort)s3, (Sort)s4, (Sort)s5, (Sort)s6, \
                   (Sort)s7, (Sort)s8, (Sort)s9, (Sort)s10, (Sort)s11, \
                   (Sort)s12, 0,0)
#define Sort13(s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12,s13) \
  MakeVecSort( 13, (Sort)s1, (Sort)s2, (Sort)s3, (Sort)s4, (Sort)s5, (Sort)s6, \
                   (Sort)s7, (Sort)s8, (Sort)s9, (Sort)s10, (Sort)s11, \
                   (Sort)s12, (Sort)s13, 0)
#define Sort14(s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12,s13,s14) \
  MakeVecSort( 14, (Sort)s1, (Sort)s2, (Sort)s3, (Sort)s4, (Sort)s5, (Sort)s6, \
                   (Sort)s7, (Sort)s8, (Sort)s9, (Sort)s10, (Sort)s11, \
                   (Sort)s12, (Sort)s13, (Sort)s14)

#endif

