                  /*          C modes generator       */

#include "config.h"

CF_PROGRAM( generator_init, \
    "$Id: generator.c,v 2.5 1995/03/29 13:05:25 ella Exp $" )


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
15:09:94  STRUCT and UNION keywords changed to NODE and CLASS. EVW
06:01:95   1.001  ELLA    Add use of <table>_init.h file, and tidy up a few
                         things. 
12:01:95   1.002  DJS    Some left hand side casts had to be re-programed. 
21:03:95   1.004  DJS   Add comment facility using % at the start of a line.
29:03:95   2.005  ELLA  Change copyright header
??:??:??   ?.???  ????
*/

#include <errno.h>
#include <stdio.h>
#include <string.h>

#include "heap.h"
#include "fault.h"
#include "utilities.h"
/* DJS  heap.h      utility for generating HEAP space.
        fault.h     utility for handling errors.
        utilities.h contains several useful procedures.
        They are found in /u/snell/cbasics/include
        with a library in /u/snell/cbasics/bin/libutil.a
        These files are configured with 'cfmanage'.
*/

#include "generator_structs.h"
#include "generator_macro.h"
#include "disclaimer.h"

char buffer[ BUFFERSIZE ];  /* DJS. A general purpose character buffer for
                               temporary strings */

char *Capitalise(char *word)  /* DJS. Improve efficiency,
                                   use standard ANSI/POSIX routine */
{   char *capitilised = heapstr( word ),  /* Creates space and makes a copy */
         *cptr;

    cptr = capitilised;
    while( *cptr != NULL )
    {  *cptr = (char)toupper( (int)*cptr ); /* This line may need a condition
                                               using islower on some
                                               implementations DJS */
       cptr++;
    }
    return(capitilised);
}

char *Initialise(char *word)  /* DJS. Improve efficiency,
                                   use standard ANSI/POSIX routine */
{   char *initialised = heapstr( word ),  /* Creates space and makes a copy */
         *cptr;

    cptr = initialised;
    if( *cptr != NULL )
    {  *cptr = (char)toupper( (int)*cptr ); /* This line may need a condition
                                               using islower on some
                                               implementations DJS */
       cptr++;
    }
    while( *cptr != NULL )
    {  *cptr = (char)tolower( (int)*cptr ); /* This line may need a condition
                                               using isupper on some
                                               implementations DJS */
       cptr++;
    }
    return(initialised);
}

ListNode *CreateList()
{   ListNode *list = HEAP(ListNode);

    ListSize(list) = 0;
    ListHead(list) = ListTail(list) = NULL;
    return(list);
}

Sort *CreateSort()
{   Sort *sort_node = HEAP(Sort);

    SortValue(sort_node) = NULL;
    SortBase(sort_node) = NULL;
    SortNext(sort_node) = NULL;
    SortHasvec(sort_node) = 0;
    SortHassec(sort_node) = 0;
    return(sort_node);
}

void AddToSortList( Sort *item, ListNode *list )
{  if (SortsTail(list) == NULL)
   {  list->head = item;
   }
   else
   {  SortNext(SortsTail(list)) = item;
   }
   list->tail = item;
   ListSize(list)++;
}

void AddToStrefList( Strefs *item, ListNode *list)
{  if (StrefsTail(list) == NULL)
   {  list->head = item;
   }
   else
   {  StrefNext(StrefsTail(list)) = item;
   }
   list->tail = item;
   ListSize(list)++;
}

Unions *CreateUnion(char *name, int token)
{   Unions *a_union = HEAP(Unions);

    UnionName(a_union) = heapstr(name);
    UnionDefined(a_union) = FALSE;
    UnionToken(a_union) = token;
    UnionStrefs(a_union) = CreateList();
    UnionNext(a_union) = NULL;
    return(a_union);
}

void AddToUnionList( Unions *item, ListNode *list )
{  if( UnionsTail(list) == NULL )
   {  list->head = item;
   }
   else
   {  UnionNext(UnionsTail(list)) = item;
   }
   list->tail = item;
   ListSize(list)++;
}

Unions *FindUnion( char *name, ListNode *unions)
{   Unions *pos = UnionsHead(unions);

    while( pos != NULL &&  (strcmp( UnionName(pos), name) != 0))
    {  pos = UnionNext(pos);
    }
    return( pos );
}

Unions *AddUnion( char *name, ListNode *unions)
{   static int union_tok = FIRST_SORT;
    Unions *pos = FindUnion( name, unions);

    if( pos == NULL )
    {   pos = CreateUnion( name, union_tok++);
        AddToUnionList( pos, unions );
    }
    else if (UnionDefined(pos))
    {  fprintf( stderr,"Redefinition of union %s\n", name);
       exit(EXIT_FAILURE);
    }

    return( pos );
}

Structs *CreateStruct(char *name, int token)
{   Structs *a_struct;

    if (token < FIRST_SORT)
    {   a_struct = HEAP(Structs);
        StructName(a_struct) = heapstr(name);
        StructDefined(a_struct) = FALSE;
        StructToken(a_struct) = token;
        StructUnion_sorts(a_struct) = CreateList();
        StructChildren_sorts(a_struct) = CreateList();
        StructChildren_names(a_struct) = CreateList();
        StructNext(a_struct) = NULL;
    }
    else
    {   fprintf( stderr,
                 "Not enough tokens for structs - change union start token\n");
        exit(EXIT_FAILURE);
    }
    return(a_struct);
}

void AddToStructList( Structs *item, ListNode *list )
{  if( StructsTail(list) == NULL)
   {  list->head = item;
   }
   else
   {  StructNext(StructsTail(list)) = item;
   }
   list->tail = item;
   ListSize(list)++;
}

Macros *CreateMacro( char *name, char *field, int pos )
{   Macros *macro = HEAP(Macros);

    MacroName(macro) = Initialise(name);   /* This calls heaps its result */
    MacroField(macro) = Initialise(field);
    MacroPos(macro) = pos;
    MacroNext(macro) = NULL;
    return(macro);
}

void AddToMacroList( Macros *item, ListNode *list )
{  if (MacrosTail(list) == NULL)
   {  list->head = item;
   }
   else
   {  MacroNext(MacrosTail(list)) = item;
   }
   list->tail = item;
   ListSize(list)++;
}

void AddToPrimitiveList( Primitives *item, ListNode *list )
{  if (PrimitivesTail(list) == NULL)
   {  list->head = item;
   }
   else
   {  PrimitiveNext(PrimitivesTail(list)) = item;
   }
   list->tail = item;
   ListSize(list)++;
}

Sort *CreateVec_Sec( char *name, char *base, int hasvec, int  hassec)
{   Sort *temp = CreateSort();

    SortValue(temp) = heapstr(name);
    SortBase(temp) = heapstr(base);
    SortHasvec(temp) = hasvec;
    SortHassec(temp) = hassec;
    return(temp);
}

void InitReserved( ListNode *reserved, char *list )
{   char *tok;
    Sort *temp;

    tok = strtok( list, " " );
    while( tok != NULL )
    {   temp = CreateSort();
        SortValue( temp ) = heapstr( tok );
        AddToSortList( temp, reserved );
        tok = strtok( NULL, " " );
    }
}

Structs *FindStructure( char *entry, ListNode *structs)
{   Structs *pos = StructsHead(structs);

    while( pos != NULL && (strcmp( StructName(pos), entry) != 0))
    {  pos = StructNext(pos);
    }
    return(pos);
}

Structs *AddStruct( char *name, ListNode *structs)
{   static int struct_tok = FIRST_CONSTRUCTOR;
    Structs *pos = FindStructure( name, structs);

    if( pos == NULL)
    {  pos = CreateStruct( name, struct_tok++);
       AddToStructList( pos, structs );
    }
    else if( StructDefined(pos))
    {  fprintf( stderr,"Redefinition of struct %s\n", name);
       exit(EXIT_FAILURE);
    }
    return( pos );
}

void AddChildrenSort( Structs *structure, char *sort)
{   Sort *temp = CreateSort();

    SortValue(temp) = Capitalise(sort);
    AddToSortList( temp, StructChildren_sorts(structure) );
}

void AddChildrenName( Structs *structure, char *name)
{   Sort *temp = CreateSort();

    SortValue(temp) = heapstr(name);
    AddToSortList( temp, StructChildren_names(structure) );
}

void AddUnionSort( Structs *structure, char *sort)
{   Sort *temp = CreateSort();

    SortValue(temp) = sort;
    AddToSortList( temp, StructUnion_sorts(structure) );
}

void AddStructRef( Unions *thisunion, Structs *stref)
{   Strefs *temp = HEAP( Strefs);

    StrefStr(temp) = stref;
    StrefNext(temp) = NULL;
    AddToStrefList( temp, UnionStrefs( thisunion));
}

void AddVec_Sec( ListNode *vec_secs,
                 char *name,
                 char *base,
                 int has_vec, 
                 int has_sec )
{   Sort *pos = SortsHead(vec_secs), *temp;

    while( pos != NULL && (strcmp( SortValue(pos), name) != 0))
    {  pos = SortNext(pos);
    }

    if( pos == NULL)
    {   temp = CreateVec_Sec( name, base, has_vec, has_sec);
        AddToSortList( temp, vec_secs );
    }
}

char skiplayout( FILE *infile)
{  int ch;

   while(( ch = getc( infile )) == (int)' ' ||
           ( ch >= 0 && ch < 32 )){}
   if( ch == EOF )
   {  fprintf( stderr, "End of input stream\n" );
      exit(EXIT_FAILURE);
   }
   return (char)ch;
}

int ReservedValue( ListNode *list, char *name)
{  Sort *pos = SortsHead(list);

   while( pos != NULL && (strcmp( SortValue(pos), name)) != 0)
   {  pos = SortNext(pos);
   }
   return( pos != NULL );
}

Primitives *FindPrimitive( char *entry, ListNode *primitives)
{   Primitives *pos = PrimitivesHead( primitives);

    while( pos != NULL && (strcmp( PrimitiveName(pos), entry) != 0))
    {  pos = PrimitiveNext(pos);
    }
    return(pos);
}

Primitives *CreatePrimitive( char *name)
{   Primitives *prim = HEAP(Primitives);

    PrimitiveName( prim) = heapstr(name);
    PrimitiveDefined( prim) = FALSE;
    PrimitiveValues( prim) = CreateList();
    PrimitiveNext( prim) = NULL;
    return( prim);
}

Primitives *AddPrimitive( char *name, ListNode *primitives)
{   Primitives *pos = FindPrimitive( name, primitives);

    if( pos == NULL)
    {  pos = CreatePrimitive( name );
       AddToPrimitiveList( pos, primitives );
    }
    else if( PrimitiveDefined(pos))
    {  fprintf( stderr,"Redefinition of primitive %s\n", name);
       exit(EXIT_FAILURE);
    }
    return( pos );
}

Enumerateds *CreateEnumerated( char *name, int value )
{   Enumerateds *enumerated = HEAP(Enumerateds);

    EnumeratedName(enumerated) = Initialise(name);
    EnumeratedValue(enumerated) = value;
    EnumeratedNext(enumerated) = NULL;
    return(enumerated);
}

void AddToEnumeratedList( Enumerateds *item, ListNode *list )
{  if (EnumeratedsTail(list) == NULL)
   {  list->head = item;
   }
   else
   {  EnumeratedNext(EnumeratedsTail(list)) = item;
   }
   list->tail = item;
   ListSize(list)++;
}

void GetUnionEntries(FILE *infile,
                     Unions *newunion,
                     ListNode *unions,
                     ListNode *structs,
                     ListNode *reserved,
                     ListNode *primitives )
{   Structs *structure;
    Unions *haveunion;
    Strefs *stref;
    char *struct_name, *union_name = UnionName( newunion);

    /* read in union entries */

    if( skiplayout(infile) != START_UNION_ENTRY )
    {  fprintf( stderr, "GetUnionEntries: Expecting %c\n", START_UNION_ENTRY );
       exit( EXIT_FAILURE );
    }

    fscanf( infile, "%s", buffer);
    while( *buffer != END_UNION_ENTRY)
    {   if(( haveunion = FindUnion( buffer, unions)) == NULL )
        {   if( !ReservedValue( reserved, buffer) &&
                (FindPrimitive( buffer, primitives ) == NULL))
            {   if(( structure = FindStructure( buffer, structs)) != NULL)
                {  struct_name = heapstr( buffer );
                   AddUnionSort( structure, union_name);
                   AddStructRef( newunion, structure);
                }
                else
                {  fprintf( stderr,
                   "Structure %s has not been defined before use in union %s\n",
                                    buffer, union_name);
                    exit(EXIT_FAILURE);
                }
            }
        }
        else
        {  stref = StrefsHead( UnionStrefs( haveunion));
           while( stref != NULL )
           {  structure = StrefStr( stref);
              AddUnionSort( structure, union_name);
              AddStructRef( newunion, structure);
              stref = StrefNext( stref);
           }

        }
        fscanf( infile, "%s", buffer);
    }
}

void GetUnionSpec( FILE *infile,
                   ListNode *unions,
                   ListNode *structs,
                   ListNode *reserved,
                   ListNode *primitives )
{  char nextchar;
   Unions *newunion;

   fscanf( infile, "%s ", buffer );
   newunion = AddUnion( buffer, unions);
   if (( nextchar = skiplayout(infile)) == '=')
   {  GetUnionEntries( infile, newunion, unions, structs, reserved, primitives);
      UnionDefined( newunion) = TRUE;
   }
   else
   {  ungetc( nextchar, infile);
   }
}

void GetPrimitiveEntries( FILE *infile, Primitives *newprim )
{   int value = 0;
    Enumerateds *enumitem;

    if( skiplayout(infile) != START_ENUMERATED_ENTRY )
    {  fprintf( stderr, "GetPrimitiveEntries: Expecting %c\n",
                        START_ENUMERATED_ENTRY );
       exit( EXIT_FAILURE );
    }

    fscanf( infile, "%s", buffer);
    while( *buffer != END_ENUMERATED_ENTRY)
    {  enumitem = CreateEnumerated( buffer, ++value );
       fscanf( infile, "%s", buffer);
       if( *buffer == '=' )
       {  fscanf( infile, "%i %s", &value, buffer);
          EnumeratedValue( enumitem) = value;
       }
       AddToEnumeratedList( enumitem, PrimitiveValues( newprim ));
    }
}

void GetPrimitiveSpec( FILE *infile, ListNode *primitives )
{  char nextchar;
   Primitives *newprim;

   fscanf( infile, "%s ", buffer );
   newprim = AddPrimitive( buffer, primitives);
    if(( nextchar = skiplayout(infile)) == '=' )
    {   GetPrimitiveEntries( infile, newprim);
        PrimitiveDefined( newprim) = TRUE;
    }
    else
    {   ungetc(nextchar,infile);
    }
}

void GetStructEntries( FILE *infile,
                       Structs *structure,
                       ListNode *vec_secs,
                       ListNode *primitives,
                       ListNode *macros )
{   int hasvec = 0;
    int hassecondary = 0;
    char sort[STRUCTITEMSIZE + VECTOR_STR_SIZE + SECONDARY_STR_SIZE],
         var_name[VAR_NAME_SIZE];
    Macros *macitem;
    Primitives *prim;

    if( skiplayout(infile) != START_STRUCT_ENTRY )
    {  fprintf( stderr, "GetStructEntries: Expecting %c\n",
                        START_STRUCT_ENTRY );
       exit( EXIT_FAILURE );
    }

    fscanf( infile, "%s", buffer);
    while( *buffer != END_STRUCT_ENTRY) 
    {  hasvec = 0;
       hassecondary = 0;

       if( strcmp( buffer, VECTOR) == 0) /* have a vector declaration */
       {  hasvec = 1;
          fscanf( infile, "%s", buffer);
       }

       prim = FindPrimitive( buffer, primitives );
       if( prim != NULL )
       {  strcpy( buffer, INT_STR );
       }

       fscanf( infile, "%s", var_name);
       if( strcmp( var_name, SECONDARY) == 0) /* have a secondary */
       {  hassecondary = 1;
          fscanf( infile, "%s", var_name);
       }

       if( hassecondary )
       {  strcpy( sort, SECONDARY_STR);
          if( hasvec ) strcat( sort, VECTOR_STR );
          strcat( sort, buffer);
       }
       else
       if( hasvec )
       {  strcpy( sort, VECTOR_STR);
          strcat( sort, buffer);
       }
       else
       {  strcpy( sort, buffer);
       }

       if( hasvec || hassecondary )
       {  AddVec_Sec( vec_secs, sort, buffer, hasvec, hassecondary);
       }

       AddChildrenSort( structure, sort);
       AddChildrenName( structure, var_name);
       macitem = CreateMacro( StructName( structure), var_name,
                              ListSize( StructChildren_sorts(structure)));
       AddToMacroList( macitem, macros );
       fscanf( infile, "%s", buffer);
    } 
}

void GetStructSpec( FILE *infile,
                    ListNode *structs,
                    ListNode *vec_secs,
                    ListNode *primitives,
                    ListNode *macros )
{   char nextchar;
    Structs *newstruct;

    fscanf( infile, "%s ", buffer );
    newstruct = AddStruct( buffer, structs);
    if(( nextchar = skiplayout(infile)) == '=' )
    {   GetStructEntries( infile, newstruct, vec_secs, primitives, macros );
        StructDefined( newstruct) = TRUE;
    }
    else
    {   ungetc(nextchar,infile);
    }
}

FILE *open_table_file( char *table, char *filename, char *fileext )
                 /* Created for generating
                    the output files. Leaves
                    the filename in 'buffer'  DJS */
{  FILE *fptr;

   sprintf( buffer, "%s%s%s.%s", table, FILENAME_SEPERATOR, filename, fileext );
   if ((fptr = fopen( buffer, "w")) == NULL)
   {  perror( "Failure to open file for writing" );
      fprintf(stderr,"File name %s\n", buffer );
      exit(EXIT_FAILURE);
   }
   return( fptr );
}

void WriteSignature( FILE *outfile, char *table, char *signature)
{
    fprintf( outfile, "#define %s_SIGNATURE \"%s\"\n\n", table, signature);
}

void WriteReservedTokens( FILE *outfile, ListNode *list)
{  int count = 1;
   Sort *pos = SortsHead(list);

   while( pos != NULL)
   {  fprintf( outfile, "#define %s %d\n", SortValue(pos), count++);
      pos = SortNext(pos);
   }
   fprintf( outfile, "\n" );
}

void WriteStructTokens( FILE *outfile, char *table, ListNode *list)
{  Structs *pos = StructsHead(list);

   fprintf( outfile, "#define %s_%s %d\n",
                     table, STRUCT_QTY_FRMT, ListSize(list));
   while( pos != NULL)
   {  fprintf( outfile, "#define %s_%s %d\n",
                        table, StructName(pos), StructToken(pos));
      pos = StructNext(pos);
   }
   fprintf( outfile, "\n" );
}

void WriteUnionTokens( FILE *outfile, char *table, ListNode *list)
{  Unions *pos = UnionsHead(list);

   fprintf( outfile, "#define %s_%s %d\n",
                     table, UNION_QTY_FRMT, ListSize(list));
   while( pos != NULL)
   {  fprintf( outfile, "#define %s_%s %d\n",
                        table, UnionName(pos), UnionToken(pos));
      pos = UnionNext(pos);
   }
   fprintf( outfile, "\n" );
}

void WriteVec_SecTokens( FILE *outfile,
                         char *table,
                         ListNode *reserved,
                         ListNode *vec_secs)
{  Sort *pos = SortsHead(vec_secs);
   char *init_secondary_str =  Initialise(SECONDARY_STR),
        *init_vector_str = Initialise(VECTOR_STR);

   while( pos != NULL)
   {  fprintf( outfile, "#define %s_%s ", table, SortValue(pos));
      if( SortHassec(pos))
      {  fprintf( outfile, "%s(", init_secondary_str );
      }

      if( SortHasvec(pos))
      {  fprintf( outfile, "%s(", init_vector_str );
      }

      if( ReservedValue( reserved, SortBase(pos)))
      {  fprintf( outfile, "%s", SortBase(pos));
      }
      else
      {  fprintf( outfile, "%s_%s", table, SortBase(pos));
      }

      if( SortHasvec(pos))
      {  fprintf(outfile, ")");
      }

      if( SortHassec(pos))
      {  fprintf(outfile, ")");
      }
      fprintf( outfile, "\n");
      pos = SortNext(pos);
   }
   fprintf( outfile, "\n" );
}

void WriteAccessMacros( FILE *outfile, ListNode *macros )
{  Macros *pos = MacrosHead(macros);

   while( pos != NULL )
   {  fprintf( outfile,"#define %s%s(x) Index(Children(x),%d)\n",
                       MacroName(pos), MacroField(pos), MacroPos(pos));
      pos = MacroNext(pos);
   }
   fprintf( outfile, "\n" );
}

void WritePrimitiveSorts( FILE *outfile, ListNode *primitives )
{  Primitives *prims = PrimitivesHead( primitives );
   Enumerateds *pos;
   char *primname;

   while( prims != NULL )
   {  pos = EnumeratedsHead( PrimitiveValues( prims));
      primname = Initialise( PrimitiveName( prims));
      while( pos != NULL )
      {  fprintf( outfile, "#define %s%s %d\n",
                           primname,
                           EnumeratedName( pos), EnumeratedValue( pos));
         pos = EnumeratedNext( pos);
      }
      prims = PrimitiveNext( prims);
   }
   fprintf( outfile, "\n" );
}

void WriteExterns( FILE *outfile, char *table)
{
    fprintf( outfile, "extern Table *%s_InitTable();\n\n", table);
}

void WriteTokens( char *signature,
                  char *table,
                  ListNode *reserved,
                  ListNode *structs,
                  ListNode *unions,
                  ListNode *vec_secs,
                  ListNode *macros,
                  ListNode *primitives )
{   FILE *outfile = open_table_file( table, INIT_FILE, EXT_H );

    fprintf( outfile, "\n"
"                 /* Header file for %s cmodes definition module */\n",
                      table );
    sprintf( buffer, "_%s%s%s_%s",
                     table, FILENAME_SEPERATOR, INIT_FILE, EXT_H );
    fprintf( outfile, "\n#ifndef %s\n#define %s\n\n#include \"cmodes.h\"\n\n",
                      buffer, buffer );

    if( signature != NULL )
    {  WriteSignature( outfile, table, signature);
    }
    WriteReservedTokens( outfile, reserved);
    WriteStructTokens( outfile, table, structs);
    WriteUnionTokens( outfile, table, unions);
    WriteVec_SecTokens( outfile, table, reserved, vec_secs);
    WriteAccessMacros( outfile, macros );
    WritePrimitiveSorts( outfile, primitives );
    WriteExterns( outfile, table);

    fprintf( outfile, "#endif\n\n" );
    fclose(outfile);
}
    
void WriteSorts( FILE *initfile,
                 char *prefix,
                 char *postfix,
                 ListNode *reserved,
                 ListNode *sorts )
{  Sort *sort_pos = SortsHead( sorts );
   char sepchar = '(';
   int indent, len, lwidth, i;

   sprintf( buffer, "               Sort%d", ListSize( sorts ));
   indent = strlen( buffer ) + 2;
   lwidth = indent;

   fprintf( initfile, "%s", buffer );
   if( sort_pos != NULL)
   {   while( sort_pos != NULL)
       {  fprintf( initfile, "%c ", sepchar );
          if( reserved != NULL &&
              ReservedValue( reserved, SortValue(sort_pos)))
          {  sprintf( buffer, "%s%s", SortValue(sort_pos), postfix );
          }
          else
          {  sprintf( buffer, "%s%s%s", prefix, SortValue(sort_pos), postfix );
          }
          len = strlen( buffer ) + 2;
          if( len + lwidth > MAX_LINE_WIDTH )
          {  fprintf( initfile, "\n" );
             for( i = 0; i < indent; i ++ ){ fprintf( initfile, " " ); }
             lwidth = indent;
          }
          fprintf( initfile, "%s", buffer );
          lwidth += len;
          sepchar = ',';
          sort_pos = SortNext(sort_pos);
       }
       fprintf( initfile, "),\n");
   }
   else
   {   fprintf( initfile, "(),\n");
   }
}

void WriteElements( FILE *initfile,
                    char *table,
                    ListNode *reserved,
                    ListNode *structs )
{   Structs *pos = StructsHead(structs);
    char *tabprefix;
    char *emptystr = "";
    char *quotestr = "\"";

    sprintf( buffer, "%s_", table );
    tabprefix = heapstr( buffer );
    while( pos != NULL)
    {   fprintf( initfile, "\n   AddElement( %s_%s,\n               \"%s\",\n",
                          table, StructName(pos), Initialise( StructName(pos)));

        /* print out union(s) that structure belongs to */
        WriteSorts( initfile, tabprefix, emptystr,
                    NULL, StructUnion_sorts(pos));

        /* print out children unions */
        WriteSorts( initfile, tabprefix, emptystr,
                    reserved, StructChildren_sorts(pos));

        /* print out children names */
        WriteSorts( initfile, quotestr, quotestr,
                    NULL, StructChildren_names(pos));

        fprintf( initfile, "               %s_table );\n", table);
        pos = StructNext(pos);
    }
}

void WriteUnionSorts(FILE *initfile, char *table, ListNode *unions )
{   Unions *pos = UnionsHead(unions);

    while( pos != NULL)
    {   fprintf( initfile, "\n   AddSort( %s_%s, \"%s\", %s_table);\n",
                           table, UnionName(pos),
                           Initialise( UnionName(pos)), table);
        pos = SortNext(pos);
    }
}

void WriteTableInit( char *table,
                     ListNode *reserved,
                     ListNode *structs,
                     ListNode *unions)
{  /* DJS  Generate a <table>_init.h  header file so that the C file
           can be compiled separately.
           The header file contains the necessary includes and the
           prototype for <table>_InitTable().
   */
    FILE *initfile = open_table_file( table, INIT_FILE, EXT_C );

    fprintf( initfile, "\n"
"                 /*  %s cmodes definition module  */\n\n",
                      table );
    fprintf( initfile, "#include \"%s%s%s.%s\"\n\n",
                       table, FILENAME_SEPERATOR, INIT_FILE, EXT_H);

    fprintf( initfile, "extern Table *%s_InitTable()\n{", table);

    fprintf( initfile,
                  "  Table *%s_table = CreateTable( \"%s\", %s_%s, %s_%s );\n",
                       table, table, table, STRUCT_QTY_FRMT, table,
                       UNION_QTY_FRMT);

    WriteElements( initfile, table, reserved, structs);
    WriteUnionSorts( initfile, table, unions);
    fprintf( initfile, "\n   return( %s_table);\n}\n", table);
    fclose(initfile);
}

void generator( FILE *infile)
{   char entry_type[TYPESIZE],
         entry_name[NAMESIZE];
    char *signature = NULL,
         *tablename = NULL,
         *union_name = NULL;
    ListNode *reserved = CreateList(),
             *structs = CreateList(),
             *unions = CreateList(),
             *vec_secs = CreateList(),
             *macros = CreateList(),
             *primitives = CreateList();
    int nextchar;

    InitReserved( reserved, heapstr( RESERVED_SORTS));

    while(( fscanf( infile, "%s ", entry_type )) != EOF)
    {    /* read in definitions */

        if( *entry_type == START_COMMENT)
        {  int ch;

           while(( ch = getc( infile )) != (int)'\n' ){}
           if( ch == EOF )
           {  fprintf( stderr, "End of input stream\n" );
              exit(EXIT_FAILURE);
           }
        }
        else if( strcmp( entry_type, CLASS) == 0)
        {   /* have a union declaration */
            GetUnionSpec( infile, unions, structs, reserved, primitives);
        }
        else if( strcmp( entry_type, NODE) == 0)
        {   /* have a struct declaration */
            GetStructSpec( infile, structs, vec_secs, primitives, macros);
        }
        else if( strcmp( entry_type, ENUMERATED) == 0)
        {   GetPrimitiveSpec( infile, primitives );
        }
        else if( strcmp( entry_type, SIGNATURE) == 0)
        {   fscanf( infile, "%s ", buffer );
            signature = heapstr( buffer );
        }
        else if( strcmp( entry_type, TABLE) == 0)
        {   fscanf( infile, "%s ", buffer );
            tablename = heapstr( buffer );
        }
        else
        {   /* unrecognised */
            fprintf( stderr, "Invalid entry type %s\n", entry_type );
            exit(EXIT_FAILURE);
        }
    }

    if( tablename == NULL )
    {  fprintf( stderr, "No table name given\n" );
       exit(EXIT_FAILURE);
    }

    /* create .h and .c files */

    WriteTokens( signature, tablename,
                 reserved, structs, unions, vec_secs, macros, primitives );
    WriteTableInit( tablename, reserved, structs, unions );
}

main( int argc, char *argv[] )
{  /* DJS Allow input file name to be given as a parameter */
    char *filename = NULL;
    FILE *infile;

    print_disclaimer( 0 );
    if( argc >= 2 )
    {  filename = argv[1];
    }
    else
    {  filename = prompt( "Enter input filename:- ", buffer);
       if( filename == NULL || *filename == NULL )  exit( 0 );
    }

    if(( infile = fopen( filename, "r" )) == NULL )
    {   perror( "Error opening input file" );
        fprintf( stderr, "Filename = %s\n", filename );
        exit( EXIT_FAILURE );
    }
    generator(infile);
    exit( EXIT_SUCCESS );
}
