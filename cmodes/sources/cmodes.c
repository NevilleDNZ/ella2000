
          /*          C modes transformational toolkit       */

#include "config.h"

CF_MODULE( cmodes_init, \
    "$Id: cmodes.c,v 2.7 1995/03/29 13:05:19 ella Exp $" )

/*CConfig(cmodes, "DRA cmodes 0.1 22-Dec-1993 16:15")*/


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
06:01:95   1.002  DJS    Put back idstable, make make_id local 
12:01:95   1.003  DJS    MakeId turned NULL string to a NIL string. 
24:01:95   1.004  DJS    Modify way MakeId works, use vector instead of list.
                        Changes for of and ID. 
21:03:95   1.005  DJS   Add prelude mechanism.  Also remove some commented out
                        bits.
28:03:95   1.006  DJS   Move CreateNilNode and CopyTree from ella_vif.c
29:03:95   2.007  ELLA  Change copyright header
??:??:??   ?.???  ????
*/

#include <stdlib.h>
#include <stdio.h>

#include "fault.h"
#include "heap.h"
#include "cmodes.h"

/*InitConfig1(cmodes)*/


static void fail (char *message)
{ printf("Error - %s\n", message);
  abort();
}

void IndexFail(Size index, Size upb)
{ printf( "Index error - index: %d should be in the range [0 : %d]\n",
          index, upb );
  abort();
}

extern char **SortStr (Token token, Table *table)
{
   Size index = token - FIRST_SORT;
   VecStr vec = TableSorts(table);

   if ( index < 0 || index >= Upb(vec))
       IndexFail(index, Upb(vec));
   else
      return ( (char ** )&Ptr(vec)[index] ); 
}

extern Entry *ConstructorEntry (Token token, Table *table)
{
   Size index = token - FIRST_CONSTRUCTOR;
   VecEntry vec = TableElements(table);

   if ( index < 0 || index >= Upb(vec))
      IndexFail(index, Upb(vec));
  else
      return ( (Entry* )&Ptr(vec)[index] ) ; 
}

extern Size Nchildren (Token token, Table *table)
{ 
   Entry *entry = ConstructorEntry(token, table);
   return Upb(EntryChildren(entry));
}

extern void check_sort (int token, int sort, Table *table)
{ 
    int ok = 1;
    int tok = (token < 0) ? -token : token;

    if      ( tok = SCALAR ) ok = ( sort = SCALAR );
    else if ( tok = ID )     ok = ( sort = ID );
    else if ( tok = VEC )    ok = IsVec(sort);
    else
        {
          Entry *entry = ConstructorEntry(tok, table);
          Sort *sorts = Ptr(EntrySort(entry));    
          int qty = Upb(EntrySort(entry));
          int pos = 0;

          while ( ok && sorts[pos++] != sort ) 
             if (pos >= qty) ok = 0;
        }
            
    if (!ok)
    {  fprintf( stderr, "check_sort: sort %d expected - have token %d\n",
                        sort, tok);
       exit(EXIT_FAILURE);
    }
}

static void  CheckChildren(Token tok, VecNode kids, Table *table)
{
    /* check sorts of children to see if valid - if not exit */

    Int pos;
/* disable checking
    Entry *entry = ConstructorEntry(tok, table);
    VecSort children = EntryChildren(entry);
    Size upb = Upb(children);

    if ( upb  != Upb(kids) ) fail("CheckChildren:  wrong size");

    for (pos = 1; pos <= upb; pos++) {

        check_sort(Type(Ptr(kids)[pos]),Ptr(children)[pos], table);
    }
*/
}

extern Bool SecondaryChild (Token tok, int i, Table *table)
{
   if (IsVec(tok))
      return 0;
   else
   {   Entry *entry = ConstructorEntry(tok, table);
       VecSort children = EntryChildren(entry);
       return IsSecondary(Ptr(children)[i]);
   }
}

extern char *ChildName(Token tok, int i, Table *table)
{
   if (IsVec(tok))
      return NULL;
   else
   {   Entry *entry = ConstructorEntry(tok, table);
       VecSort childnames = EntryChildnames(entry);
       return (char*)Ptr(childnames)[i];
   }
}


/****************** basic Node generation procedures **************************/

static void push_node (Node *node)  {}
/* nodechain not completed
{ node->children[0] = *nodechain;
  nodechain = &node;
}
*/

extern Node *MakeEmptyNode (Size size, Transformer *tprocs)
{ 
  Node *ans = (Node*)malloc( (size_t)( sizeof(Node) +
                                       (size+1) * sizeof(Node *)));

  /* This allocation is cheating so can`t use HEAPN etc */

  if (ans == NULL) fail("MakeEmptyNode:  no memory available");
  Type(ans) = UNSET;
  Ovh(ans) = (Private)(size);
  { int i;  /* Note extra field for Node chain */
    for (i=0; i <= size; i++) ans->children[i] = NULL;
  };
  push_node(ans);
  return ans;
}

extern Node * MakeNilNode(Int type, Transformer * tprocs)
{
    Node *node = MakeEmptyNode( NILNODESIZE, tprocs);
    Type(node) = type;
    SetNil(node);
    return(node);
}


extern Tok create_token( Token tok, Int nil)
{
    Tok token;

    TokenToken(token) = tok;
    TokenNil(token) = nil;

    return(token);
}

extern Node *MakeScalar (Int value, Transformer *tprocs)
{ 
    Node *scalar = MakeEmptyNode(SCALARSIZE,tprocs);

    Type(scalar) = SCALAR;

    ScalarNodeValue(scalar) = NodePtr(value); /* Yuk */

    push_node(scalar);

    return (scalar);
}


extern Node * MakeNode (Token imgtok, VecNode children, Transformer * tprocs)
{  
    int i;
    Node * ans;
    Table *table = TransformerImgtable(tprocs);
    Size size = Upb(children);

    /* see if children sorts are valid - if not exit */

    CheckChildren( imgtok, children, table);

    ans = MakeEmptyNode(size, tprocs);

    Type(ans) = imgtok;

    for (i=1; i<=size; i++)
    {
       ans->children[i] =  Ptr(children)[i];
    }

    /* Do not discard children - someone may still want them - leave to GC */
    return(ans);
}


extern Node *CopyNode (Node *old, Transformer *tprocs)
{  
  Size size = NodeSize(old);
  Node *new = MakeEmptyNode(size, tprocs);
  Type(new) = Type(old);
  Ovh(new) = Ovh(old);
  { int i; for (i=1; i<=size; i++);  new->children[i] = old->children[i]; }
  return new;
}

extern VecNode Children (Node * node)
{
  VecNode ans;
  Upb(ans) = NodeSize(node);
  Ptr(ans) = NodeChildren(node);
  return ans;
}

static Node *NilNode_buffer[VECNODEBUF]; /* see comment in cmodes.c */
static Size NilNode_index = 0;

extern Node *CreateNilNode (Token token, Transformer *tprocs)
{
   Entry *entry = ConstructorEntry(token, TransformerImgtable(tprocs));
   VecSort children = EntryChildren(entry);
   int size = Upb(children);
   int i;

   VecNode ans;
   if (NilNode_index + size + 2 >= VECNODEBUF) NilNode_index = 0;
   Upb(ans) = size;
   Ptr(ans) = &NilNode_buffer[++NilNode_index];

   NilNode_buffer[NilNode_index] = NULL;      
   for ( i=1; i<=size; i++)
   {  
      Token token = Ptr(children)[i];
      NilNode_buffer[++NilNode_index] = 
            MakeNilNode(SecondaryType(token), tprocs);
   }
  
   return MakeNode(token, ans, tprocs);
}

extern Node *CopyTree (Node *node, Transformer *tprocs)
{
   Int tok = Type(node);
   if ( tok == INT || tok == ID || IsNil(node) )
      return node;
   else
    {
      int i; 
      int size = NodeSize(node);
      Node *copy = MakeEmptyNode(size, tprocs);
      Type(copy) = Type(node);
      Ovh(copy) = Ovh(node);
 
      for ( i=1; i<=size; i++)
      { 
        copy -> children[i] = CopyTree(node -> children[i], tprocs);
      }
      return copy;
    }
}


/*********************** Vector procedures **************************/

extern Node *MakeVector (Token token, Size size, Transformer *tprocs)
{ 
  Node *vec = MakeEmptyNode(size, tprocs);
  Type(vec) = Vec(token);
  return vec;
}

extern Node *CopyVector(Node *old, Transformer *tprocs)
{ 
  return CopyNode(old, tprocs);
}


extern Node **IndexVector(Node *vector, Size index)
{
  if (index < 1 || index > VecSize(vector))
     fail("IndexVector:  out of range");
  
  return ( (Node **) &NodeChildren(vector)[index] );
}


/******************* default Prelude procedures *********************/

static Node *NullPrelude (Node *obj, Transformer *tprocs)
{   return obj;
}

extern Node *Prelude (Node * object, Transformer *tprocs )
{
   Size index = Type(object) - FIRST_CONSTRUCTOR;
   VecEntry vec = TableElements(TransformerObjtable(tprocs));

   if IsNil(object)
      return object;
  else
  if ( index < 0 || index > Upb(vec) )
      IndexFail(index, Upb(vec));
  else
      return ( (tprocs->prelude)[index](object, tprocs) ) ;
}

/******************* default Transform procedures *********************/

static Node *TransformProc (Node *object, Transformer *tprocs)
{
   Size index = Type(object) - FIRST_CONSTRUCTOR;
   VecEntry vec = TableElements(TransformerObjtable(tprocs));

   if IsNil(object)
      return object;
  else
  if ( index < 0 || index > Upb(vec) )
      IndexFail(index, Upb(vec));
  else
      return ( (tprocs->transform)[index](object, tprocs) ) ; 
}

static Node *inner_transform (Node *object, Transformer *tprocs)
{ /* This procedure manages the stack and calls the user's transform proc }
  /* remember the old top of the environment stack */

  Node *image;
  Envstack *envstack = tprocs->envstack;
  Envstack *ptr;

  Env **env = TransformerEnvironment(tprocs);
  int upb =  Upb(TableElements(TransformerObjtable(tprocs)));
  int i;
  for (i=0; i<upb; i++)
   {
     if ( env[i] != NULL )
     { Envstack *entry = HEAP( Envstack);
       entry -> token = i;
       entry -> env = env[i];
       entry -> rest = tprocs -> envstack;
       tprocs -> envstack = entry;
     }
   }
   
  /* apply the transformation */

  image = TransformProc(object, tprocs);

  /* reinstate the old environment */

  env = TransformerEnvironment(tprocs);
  ptr = tprocs->envstack;
  while (ptr != envstack)
    { env[ptr->token] = ptr->env;
      ptr = ptr->rest;
    };

  Changed(image);  /* mark as changed */
  return image;
}

static Node *tag_transform(Node *object, Transformer *tprocs)
{
  /* TAG is transparent - call transform on first element - sub-tree */
  VecNode params = Children(object);
  Node *subtree_image = Transform(Index(params, 1), tprocs);
  if (Changed(subtree_image))
    { Node *image = CopyNode(object, tprocs);
      image->children[1] = subtree_image;
      Changed(image);
      return image;
    }
  else return object;
}

static Node *vec_transform(Node *object, Transformer *tprocs)
{
  Node *ans = object;
  Size size = VecSize(object);
  Bool changed = FALSE;
  int i;
  for (i=1; i <= size; i++)
    { Node *image = Transform(*IndexVector(object, i), tprocs);
      if ( i == 1 )   ans = MakeVector(Type(image), size, tprocs);
      *IndexVector(ans, i) = image;
    }
  if (changed) Changed(ans);
  return ans;
}


extern Node *Transform (Node *object, Transformer *tprocs)
{  switch (Type(object))
      { case SCALAR:
        case ID:    return object;
        case VEC:   return  vec_transform(object, tprocs);   
        case TAG:   return tag_transform(object, tprocs);
        default:    if ( IsVec(Type(object)) )
                         return  vec_transform(object, tprocs);
                    else return  inner_transform(object, tprocs);
      };
    fail("Transform:  unexpected token value");
    return NULL;
}


extern Node *NullTransform (Node *objnode, Transformer *tprocs)
{ /* Generic transform proc for current level in tree only */
  Node *object = Prelude( objnode, tprocs );
  Node *image = object;
  VecNode obj = Children(object), im = Children(object);
  Size size = Upb(obj);
  Bool changed = FALSE;
  int i;

    image = CopyNode(object, tprocs);
    im = Children(image);
    for (i=1; i <= size; i++)
    { 
      Node *child = Index(obj, i);
      if (SecondaryChild(Type(object), i, TransformerObjtable(tprocs)) )
          Index(im, i) = child;
      else 
      {   Node *im_child = Transform(child, tprocs);
          Index(im, i) = im_child;
      }
    }  
    { Node *ans = Construct(image,  tprocs);
      if (changed) free(im.ptr);
      return ans;
    }
}


/******************* default Construct procedures *********************/


static Node *NullConstruct (Node * obj_img, Transformer *tprocs)
{  
    return MakeNode (Type(obj_img), Children(obj_img), tprocs);
}

extern Node *Construct (Node *obj_img, Transformer *tprocs)
{ 
   Node *ans;
   Token objtok = Type(obj_img);
   Size index = objtok - FIRST_CONSTRUCTOR;
   VecEntry vec = TableElements(TransformerObjtable(tprocs));

   if ( index < 0 || index > Upb(vec) )
      IndexFail(index, Upb(vec));
   else
      ans =  (tprocs->construct)[index](obj_img, tprocs);

   CheckChildren(Type(obj_img), Children(ans), TransformerImgtable(tprocs));

   return ans;
}


extern Env * GetEnv(Token token, Transformer * tprocs)
{
    return(TransformerEnvironment(tprocs)[token - FIRST_CONSTRUCTOR]);
}

extern void NewEnv(Token token, Env * newenv, Transformer * tprocs)
{
    TransformerEnvironment(tprocs)[token - FIRST_CONSTRUCTOR] = newenv;
}


/************ Setup  Table and Transformer procedures *************************/


extern Table *CreateTable (char * name, Size n_elements, Size n_sorts)
{
    Table *table = HEAP( Table);

    Upb(TableElements(table)) = n_elements;
    Ptr(TableElements(table)) = HEAPN(Entry, n_elements);

    Upb(TableSorts(table)) = n_sorts;
    Ptr(TableSorts(table)) = HEAPN(char *, n_sorts);
    
    return(table);
}

extern void AddElement(Token token, char * name, VecSort sort, VecSort children,
                VecSort childnames, Table * table)
{
    Entry * pos = ConstructorEntry(token, table);

    EntryName(pos) = name;
    EntrySort(pos) = sort;
    EntryChildnames(pos) = childnames;
    EntryChildren(pos) = children;
}

extern void AddSort(Token sort, char * name, Table * table)
{
    *SortStr(sort, table) = name;
}
    
extern Transformer *MakeNullTransformer(Table *objtable, Table *imgtable)
{ 
  Transformer *tprocs = HEAP( Transformer);
  Size obj_elems = Upb(TableElements(objtable));
  int i;

  tprocs->objtable = objtable;
  tprocs->imgtable = imgtable;

  tprocs->prelude = HEAPN( Preludeproc *, obj_elems);
  tprocs->transform = HEAPN( Transformproc *, obj_elems);
  tprocs->construct = HEAPN( Constructproc *, obj_elems);
  tprocs->environment = HEAPN( void*, obj_elems);
  for (i=0; i<obj_elems; i++)
  {   tprocs->prelude[i] = NullPrelude;
      tprocs->transform[i] = NullTransform;
      tprocs->construct[i] = NullConstruct;
      tprocs->environment[i] = NULL;
  }
  tprocs->envstack = NULL;
  tprocs->nodestack = NULL;
  return tprocs;
}


extern void NewPreludeproc(Token token, Preludeproc *new,
                           Transformer *tprocs)
{
   Size index = token - FIRST_CONSTRUCTOR;
   VecEntry vec = TableElements(TransformerObjtable(tprocs));

   if ( index < 0 || index > Upb(vec) )
      IndexFail(index, Upb(vec));
  else
    tprocs->prelude[index] = new;
}

extern void NewTransformproc(Token token, Transformproc *new,
                             Transformer *tprocs)
{
   Size index = token - FIRST_CONSTRUCTOR;
   VecEntry vec = TableElements(TransformerObjtable(tprocs));

   if ( index < 0 || index > Upb(vec) )
      IndexFail(index, Upb(vec));
  else
    tprocs->transform[index] = new;
}

extern void NewConstructproc(Token objtok, Constructproc *new,
                             Transformer *tprocs)
{
   Size index = objtok - FIRST_CONSTRUCTOR;
   VecEntry vec = TableElements(TransformerObjtable(tprocs));

   if ( index < 0 || index > Upb(vec) )
      IndexFail(index, Upb(vec));
  else
    tprocs->construct[index] = new;
}

/* NB  MakeVecNode uses common global memory - it should only be used for
       temporary storage prior to calling a construct proc.  It should only
       be used once before calling a construct proc.
*/

static Node *VecNode_buffer[VECNODEBUF];
static Size VecNode_index = 0;

extern VecNode MakeVecNode ( Size size, Node *n1, Node *n2, Node *n3, Node *n4,
                      Node *n5, Node *n6, Node *n7, Node *n8, Node *n9,
                      Node *n10, Node *n11, Node *n12, Node *n13, Node *n14 )
{ if (VecNode_index + size + 2 >= VECNODEBUF) VecNode_index = 0;
  { VecNode ans;
    Upb(ans) = size;
    Ptr(ans) = &VecNode_buffer[VecNode_index];
    { Size i = VecNode_index + size;
      switch (size)
        {
          case 14: VecNode_buffer[i--] = n14;
          case 13: VecNode_buffer[i--] = n13;
          case 12: VecNode_buffer[i--] = n12;
          case 11: VecNode_buffer[i--] = n11;
          case 10: VecNode_buffer[i--] = n10;
          case 9: VecNode_buffer[i--] = n9;
          case 8: VecNode_buffer[i--] = n8;
          case 7: VecNode_buffer[i--] = n7;
          case 6: VecNode_buffer[i--] = n6;
          case 5: VecNode_buffer[i--] = n5;
          case 4: VecNode_buffer[i--] = n4;
          case 3: VecNode_buffer[i--] = n3;
          case 2: VecNode_buffer[i--] = n2;
          case 1: VecNode_buffer[i--] = n1;
          default: VecNode_buffer[i] = NULL;
                   break;
        };
    };
    VecNode_index += (size+1);
    return ans;
  }
}


extern VecSort MakeVecSort ( Size size, Sort s1, Sort s2, Sort s3, Sort s4, Sort s5, Sort s6, Sort s7, Sort s8, Sort s9, Sort s10, Sort s11, Sort s12, Sort s13, Sort s14 )
{ VecSort ans;
  Upb(ans) = size;
  Ptr(ans) = HEAPN( Size, (size+1));
  switch (size)
    { 
      case 14: ans.ptr[14] = s14;
      case 13: ans.ptr[13] = s13;
      case 12: ans.ptr[12] = s12;
      case 11: ans.ptr[11] = s11;
      case 10: ans.ptr[10] = s10;
      case 9: ans.ptr[9] = s9;
      case 8: ans.ptr[8] = s8;
      case 7: ans.ptr[7] = s7;
      case 6: ans.ptr[6] = s6;
      case 5: ans.ptr[5] = s5;
      case 4: ans.ptr[4] = s4;
      case 3: ans.ptr[3] = s3;
      case 2: ans.ptr[2] = s2;
      case 1: ans.ptr[1] = s1;
      default: ans.ptr[0] = 0;
               break;
    };
  return ans;
}

/************************** Hash table procedures **************************/

 
static Node *MakeIdstable( Int tablesize, Transformer * tprocs)
{   Int i;
    Node *element, *result;
 
    result = MakeVector( IDSTABLE, tablesize, tprocs );
                                               /* This NULLs the entries */

    for( i = 1; i <= tablesize; i++)
    {   element = MakeEmptyNode( IDSARMSIZE, tprocs);
        Type( element) = IDSARM;
        IdsarmSize( element) = NodePtr( 0 );  /* Tuk */
        IdsarmEntries( element) = NULL;
        NodeChild( result, i ) = element;
    }
    return( result );
}
 
/* nullid node for idstable and idslookup */

static Node *make_nilid(Transformer * tprocs)
{   Node *node = MakeEmptyNode( IDSIZE, tprocs);
    Type(node) = ID;
    IdPtr(node) = NodePtr(NULL);
    SetNil(node);
    return(node);
}

extern Node *make_id( Node *ide, Transformer *tprocs)
{   Node *id = MakeEmptyNode( IDSIZE, tprocs);
    Type(id) = ID;
    IdPtr(id) = ide;
    return(id);
}

static Node *make_id_entry( char *str, int hash, Transformer *tprocs)
{   Node *ide = MakeEmptyNode( IDSENTRYSIZE, tprocs);

    Type(ide) = IDSENTRY;
    IdEntryStr(ide) = NodePtr( heapstr( str ));  /* Yuk */
    IdEntryHash(ide) = NodePtr( hash);           /* Yuk */
    IdEntryRest(ide) = NULL;
    return(ide);
}

static Node *idstable = NULL;

extern Int GetIdsTableSize( void)
{  if( idstable != NULL )
   {  return( NodeSize( idstable));
   }
   else
   {  return( 0 );
   }
}

extern Node *GetIdsTableEntry( Int i)
{  return( NodeChild( idstable, i));
}

extern Node *add_to_ids_table( char *str, Transformer *tprocs)
{   Int hash, tabwidth, n;
    char *pos;
    Node *id, *idptr, *idsptr, *prevptr;

    if( idstable == NULL ) idstable = MakeIdstable( IDSTABLEMAX, tprocs );
    tabwidth = NodeSize( idstable);
    pos = str;
    hash = 0;
    while( *pos != NULL) { hash += (Int)*pos;  pos++; }
    hash = hash % tabwidth;

    idsptr = NodeChild( idstable, hash + 1);
    if (idsptr == NULL)
    {  fprintf( stderr, "MakeId: Idstable corrupted");
       exit( EXIT_FAILURE );
    }

    n = 1;
    idptr = IdsarmEntries( idsptr);
    prevptr = NULL;
    while( idptr != NULL && (strcmp( (char *)IdEntryStr( idptr), str) != 0))
    {   prevptr = idptr;
        idptr = IdEntryRest( idptr);
        n++;
    }

    if( idptr == NULL)
    {  idptr = make_id_entry( str, n * tabwidth + hash, tprocs);
       IdsarmSize( idsptr) = NodePtr( (Int)IdsarmSize( idsptr) + 1 );
       if( prevptr == NULL)
       {  IdsarmEntries( idsptr) = idptr;
       }
       else
       {  IdEntryRest( prevptr) = idptr;
       } 
    }
    return( idptr);
}

extern Node *MakeId( char *str, Transformer *tprocs)
{  if( str == NULL)
   {  return( make_nilid( tprocs));
   }
   else
   {  return( make_id( add_to_ids_table( str, tprocs ), tprocs));
   }
}

extern void print_idstable()   
{   if( idstable != NULL )
    {  Int tabsize = GetIdsTableSize(), i;
 
       for( i = 1; i <= tabsize; i++ )
       {  Node *entry = GetIdsTableEntry( i);
          Node *nodeid = IdsarmEntries( entry);
          Int size = (Int )IdsarmSize( entry);

          char fc = ':';
          printf( "%2d (%2d)", i, size );
          while (nodeid != NULL)
          {  char *idvalue = (char *)IdEntryStr( nodeid);
             printf( "%c %s", fc, idvalue);
             nodeid = IdEntryRest( nodeid);
             fc = ',';
          }
          printf(";\n");
       }
       printf("\n");
    }
    else
    {  printf( "No ids table to print\n" );
    } 
}
