
          /*          ELLA openinterface toolkit       */

#include "config.h"

CF_MODULE( openinterface_init, \
    "$Id: openinterface.c,v 2.5 1995/03/29 13:05:23 ella Exp $" )


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
13:06:94  Updated to include secondary nodes. EVW
06:01:95   1.001  ELLA    Re-arrange includes etc.  Change format of interface
                         file. 
12:01:95   1.002  DJS    Major changes to un-packed assem read and write,
                        preparitory to adding packed format. Now more like
                        ALGOL68 version. 
24:01:95   1.003  DJS    Install packed format input and output. 
25:01:95   1.004  DJS    Re-work packed format yet again. 
29:03:95   2.005  ELLA  Change copyright header
??:??:??   ?.???  ????
*/

/*
  The format of the interface file.
     First 20 chars is a file signature defined by 'file_signature' below
     prefixed by R for readable for (un-packed)
                 P for packed form.

     then comes the language string in the appropriate format.
     then       the title strings etc.
     then       the idstable.
     then       the size of the secondary nodes reference table.
     then       the language data.
*/

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

#include "fault.h"
#include "heap.h"
#include "cmodes.h"
#include "openinterface.h"

/*
{{ ----------------------------------------------------------------------------

                    The Packed format basic token reader.

This assumes that there are 8 bits in a byte and it will cope with up to 64
bits for an integer.  Integers are written in such a way that the files are
compatible between machines of differing integer length up to 64 bits.

 "tokens"
      0                    not used
      1
      |         AD Tokens  from 1 -> 150
      |
      150
      151 null_tok         NULL token follows
      152 in1byte_tok      following char gives tokens from 151 -> 255
      153 in2byte_tok      following 2 chars give tokens from 256 -> 65535
      154 primary_tok      primary herald
      155 secondary_tok    secondary herald
      156 hashedid_tok     followed by byte integer giving index and hashcount
      157 ident_range_start
      |
      |         idents of length 0 to 8, followed by chars*length
      168
      169 ident_tok        followed by int length, then chars*length
      170 start_int_value
      |
      |         ints in the range -10 -> +60
      241
      242 pos1byte_int     followed by 1 byte
      243 pos2byte_int     followed by 2 bytes
      244 neg1byte_int     followed by 1 byte
      245 neg2byte_int     followed by 2 bytes
      246 extended_int     followed by control byte then <n> bytes
      247 - 250            reserved for real
      251 - 254            reserved
      255                  not used

  ----------------------------------------------------------------------------

                   The Un-Packed format basic token reader.

The dump file has the following syntax, where * indicates one or more items,
and << >> indicates an optional item.

    file    :- value *

    value   :- + number
               - number
               " number " string
               * number
               % number
               ~ value
               ^ value

     digit :- 0 to 9 in character form

     number :=  digit *

     character :- any character - only printable used at present

     string :- <<character>>*

The symbols have the following meaning
 +  :-  positive integer
 -  :-  negative integer
 "  :-  identifier
 *  :-  non-NIL valued token
 %  :-  NIL valued token
 ~  :-  primary herald
 ^  :-  secondary herald

The file is ended with a point (.).

 ----------------------------------------------------------------------------
*/

static char *file_signature = "-CMODES-IF-25-01-95";

#define null_tok          151
#define in1byte_tok       152
#define in2byte_tok       153
#define primary_tok       154
#define secondary_tok     155
#define hashedid_tok      156
#define ident_range_start 157
#define ident_tok         169
#define start_int_value   170
#define pos1byte_int      242
#define neg1byte_int      244
#define extended_int      246
#define lowint            -10
              /* Must be at least as low as -1 */

static int short_string_top, zeroint, highint;

static void SetPkdConstants( void)
{  /* called by 'read_signature' or 'write_signature' if mode is packed */
   short_string_top = ident_tok - ident_range_start - 1;
   zeroint          = start_int_value - lowint;
   highint          = pos1byte_int - zeroint - 1;
   return;
}

FILE *assemdiagfile = NULL;

static void PrintBasicValue( Basicvalue r)
{  if( assemdiagfile == NULL ) return;
   switch( BasicvalueFlag( r ))
   {  case EMPTYBASIC: fprintf( assemdiagfile, "Empty\n" );
                       break;

      case INTEGER:    fprintf( assemdiagfile, "Integer %d\n",
                                BasicvalueInteger(r));
                       break;

      case PRIMARY:    fprintf( assemdiagfile, "Primary %d\n",
                                BasicvalueInteger(r));
                       break;

      case SECONDARY:  fprintf( assemdiagfile, "Secondary %d\n",
                                BasicvalueInteger(r));
                       break;

      case TOKEN:      fprintf( assemdiagfile, "Token %d %d\n",
                                TokenToken( BasicvalueToken(r)),
                                TokenNil( BasicvalueToken(r)));
                       break;

      case CHAR:       fprintf( assemdiagfile, "Char \"%c\"\n",
                                BasicvalueChar(r));
                       break;

      case STRING:     fprintf( assemdiagfile, "String \"%s\"\n",
                                BasicvalueString(r));
                       break;

      case HASHID:     fprintf( assemdiagfile, "Hashid %d/%d\n",
                                HashIdIndex(BasicvalueHashId(r)),
                                HashIdCount(BasicvalueHashId(r)));
                       break;

      case BADBASIC:   fprintf( assemdiagfile, "Badbasic\n" );
                       break;

      default:         fprintf( assemdiagfile, "Unknown flag %c\n",
                                BasicvalueFlag( r ));
   }
}

static void Fail_Token( char *message )
{  fprintf( stderr, "Basic token error: expecting %s\n"
                    " Stopped reading assembler file\n",
                     message );
   exit( EXIT_FAILURE );
}

static Node *TranslateId( Assemreader *reader,
                          HashId hashid,
                          Transformer *tprocs)
{  if( AssemreaderIds_lookup( reader) == NULL )
   {  fprintf( stderr, "TranslateId: id hashing is not installed\n" );
      exit( EXIT_FAILURE );
   }
   return make_id( NodeChild( NodeChild( AssemreaderIds_lookup( reader),
                                         HashIdIndex( hashid)),
                              HashIdCount( hashid)), tprocs);
}

static Basicvalue last_basic;
static Basicvalue GetBasicvalue( Assemreader *reader)
{   Basicvalue r;

    if( BasicvalueFlag( last_basic) == EMPTYBASIC )
    {  r = AssemreaderInitem( reader)( AssemreaderGetchar(reader));
    }
    else
    {  r = last_basic;
       BasicvalueFlag( last_basic) = EMPTYBASIC;
    }
    return( r );
}

static long int inassemint(Assemreader *reader)
{   Basicvalue r = GetBasicvalue( reader);

    switch( BasicvalueFlag(r) )
    {  case INTEGER:  return( BasicvalueInteger(r));
    }
    Fail_Token( "integer" );
}

static long int inassemprimary(Assemreader *reader)
{   Basicvalue r = GetBasicvalue( reader);

    switch( BasicvalueFlag(r) )
    {  case PRIMARY:  return( BasicvalueInteger(r));
    }
    /* Not a PRIMARY so backstep */
    last_basic = r;
    return( -1 );
}

static long int inassemsec(Assemreader *reader)
{   Basicvalue r = GetBasicvalue( reader);

    switch( BasicvalueFlag(r) )
    {  case SECONDARY:  return( BasicvalueInteger(r));
    }
    /* Not a SECONDARY so backstep */
    last_basic = r;
    return( -1 );
}

static Tok inassemtok(Assemreader *reader)
{   Basicvalue r = GetBasicvalue( reader);
    Token tok;

    switch( BasicvalueFlag(r) )
    {  case TOKEN:     return( BasicvalueToken(r));
       case INTEGER:   tok = SCALAR; break;
       case HASHID:    tok = ID;     break;
       case STRING:    tok = ID;     break;
       case CHAR:      tok = ID;     break;
       case SECONDARY: tok = SEC;    break;
       default:        Fail_Token( "token" );
    }
    /* Insert an implicit token of the appropriate kind, and backstep */
    last_basic = r;
    return( create_token( tok, 0));
}

static char *inassemstr(Assemreader *reader)
{   Basicvalue r = GetBasicvalue( reader);
    char *tmpstr;

    switch( BasicvalueFlag(r) )
    {  case STRING:  return( heapstr( BasicvalueString(r)));
       case CHAR:    tmpstr = HEAPN( char, 2 );
                     *tmpstr = BasicvalueChar(r);
                     *(tmpstr+1) = NULL;
                     return( tmpstr);
    }
    Fail_Token( "string" );
}

static char inassemchar(Assemreader *reader)
{   Basicvalue r = GetBasicvalue( reader);

    switch( BasicvalueFlag(r) )
    {  case CHAR:  return( BasicvalueChar(r));
    }
    Fail_Token( "char" );
}

static Node *inassemid( Assemreader *reader, Transformer * tprocs)
{   Basicvalue r = GetBasicvalue( reader);
    Node *id;
    char tmpstr[2];

    switch( BasicvalueFlag(r) )
    {  case STRING:  id = MakeId( BasicvalueString(r), tprocs);
                     break;
       case CHAR:    *tmpstr = BasicvalueChar(r);
                     *(tmpstr+1) = NULL;
                     id = MakeId( tmpstr, tprocs); /* This heaps tmpstr */
                     break;
       case HASHID:  id = TranslateId( reader,
                                       BasicvalueHashId(r),
                                       tprocs);
                     break;
       default:      Fail_Token( "id" );
    }
    return( id );
}

/* 21:10:93  generic reader for Node data trees */


static Node *generic_reader( Assemreader *reader,
                             Tok token,
                             Transformer * tprocs)
{   Table *mode_table = TransformerObjtable( tprocs);
    long int expectedsort,  i, nchildren, qty, readin, * sorts, vectok;
    Entry * this;
    Node * ans, **children, * vec;
    Tok childtok;
    VecNode kids;
    long int tok = TokenToken(token);
    int isnil = TokenNil(token);  
    long int secvalue = 0;   

    if (tok == SCALAR && !isnil)
    {  return(MakeScalar(inassemint(reader), tprocs));
    }
    else if (tok == ID && !isnil)
    {  return(inassemid(reader, tprocs));
    }
    else if ( tok == SEC )
    {  secvalue = inassemsec(reader);
       if( secvalue < 1 ||
           secvalue > NodeSize( AssemreaderSec_lookup( reader )))
       {  fprintf( stderr, "Secondary token out of range 1 .. %d\n",
                           NodeSize( AssemreaderSec_lookup( reader )));
          exit( EXIT_FAILURE );
       }
       return NodeChild( AssemreaderSec_lookup( reader ), secvalue);
    }
    else if ( tok == VEC)
    {  qty = inassemint(reader);
       vectok = TokenToken(inassemtok(reader));

       if (qty == -1)
       {  vec = MakeNilNode( Vec(vectok), tprocs);
       }
       else
       {  vec = MakeVector( vectok,qty,tprocs);
          for (readin = 1; readin <= qty; readin++)
          {  *IndexVector(vec,readin) = generic_reader( reader,
                                                        inassemtok(reader),
                                                        tprocs);
          }
       }
       return(vec);
    }
    else
    {  if (!isnil)
       {  this = ConstructorEntry(tok, mode_table);
          nchildren = Upb(EntryChildren(this));
          sorts = Ptr(EntryChildren(this));
          children = HEAPN(Node *, nchildren + 1);

          secvalue = inassemprimary(reader);

          children[0] = NULL;
          for (i=1; i <= nchildren; i++)
          {  childtok = inassemtok(reader);
             expectedsort = sorts[i];
             check_sort(TokenToken(childtok), expectedsort, mode_table);
             children[i] = (TokenToken(childtok) < 0) ? (Node *)0 :   
                            generic_reader( reader, childtok, tprocs);
          }

          Upb(kids) = nchildren;
          Ptr(kids) = children;

          ans = MakeNode(tok,kids,tprocs);
          free(children);
       }
       else
       {  ans = MakeNilNode(tok, tprocs);
       }

       if (secvalue > 0)
       {  if( secvalue > NodeSize( AssemreaderSec_lookup( reader )))
          {  fprintf( stderr, "Secondary token greater than %d\n",
                              NodeSize( AssemreaderSec_lookup( reader )));
             exit( EXIT_FAILURE );
          }
          NodeChild( AssemreaderSec_lookup( reader ), secvalue) = ans;
       }
       return(ans);
    }
}

static void ReadIdsLookup( Assemreader *reader, Transformer *tprocs )
{  int i, j, cnt;
   Node *idarm;
   char *tmpstr;

   if( assemdiagfile != NULL ) fprintf( assemdiagfile, "Start idtable\n" );
   for( i = 1; i<=NodeSize( AssemreaderIds_lookup( reader )); i++ )
   {  cnt = inassemint( reader );
      idarm = MakeVector( IDSARM, cnt, tprocs);
      NodeChild( AssemreaderIds_lookup( reader ), i ) = idarm;
      for( j = 1; j <= cnt; j++ )
      {  NodeChild( idarm, j ) = add_to_ids_table( inassemstr( reader), tprocs);
      }
   }
}

extern Externalclosure read_closure( Assemreader *reader,
                                     Transformer *tprocs )
{  Externalclosure extclosure;
   long int head_data_top, pos, secnumber, idtsize;
   char **head_data;

   head_data_top = inassemint(reader);
   head_data = HEAPN( char *, head_data_top);
   for (pos = 0; pos < head_data_top; pos++)
   {  head_data[pos] = inassemstr(reader);
    if( assemdiagfile != NULL )
    {  fprintf( assemdiagfile, "Head data %d = \"%s\"\n",
                pos, head_data[pos] );
    }
   }

   idtsize = inassemint(reader);
   if( idtsize > 0 )
   {  reader->ids_lookup = MakeVector( IDSTABLE, idtsize, tprocs );
      ReadIdsLookup( reader, tprocs );
   }
   else
   {  reader->ids_lookup = NodePtr( NULL );
   }
   secnumber = inassemint(reader);
   if( assemdiagfile != NULL ) fprintf( assemdiagfile, "Sec table %d\n",
secnumber );
   reader->sec_lookup = MakeVector( SECTABLE, secnumber, tprocs );       

   ExternalclosureClosure(extclosure) =
           generic_reader( reader, inassemtok(reader), tprocs);

   ExternalclosureHeadupb(extclosure) = head_data_top;
   ExternalclosureHead_data(extclosure) = head_data;

   return( extclosure);
}

static char *buffer = NULL;
static int buffer_size = 0;

static char *get_item_string( Uchar (* get_char)(), int size )
{  /* The primitive reader procedures will HEAP the string if necessary
      so use a general buffer to assemble the string, however it must be
      extendable, so we need to get it off the HEAP */
   char *tmpstr;
   int i;

   if( size >= buffer_size )  /* Allows for null */
   {  if( buffer != NULL ) free( buffer );
      buffer_size += MIN_UNPACKED_BUFFERSIZE;
      if( buffer_size <= size )  /* Allows for null */
      {  buffer_size = size + MIN_UNPACKED_BUFFERSIZE;
         /* If it`s that big anyway who cares about all the extra space */
      }
      buffer = HEAPN( char, buffer_size );
   }
   tmpstr = buffer;
   for( i = 0; i < size; i++ )
   {  *tmpstr = get_char();
      tmpstr++;
   }
   *tmpstr = NULL;
   return( buffer );
}

static Basicvalue GetStrCharBv( Uchar (* get_char)(), int size )
{  Basicvalue result;

   if( size == 1 )
   {  BasicvalueFlag( result) = CHAR;
      BasicvalueChar( result) = get_char();
   }
   else
   {  BasicvalueFlag( result) = STRING;
      BasicvalueString( result) = get_item_string( get_char, size );
   }
   return( result );
}

static long int getpkdint( Basicvalue r, char *failmsg)
/* Checks that the basic value is an integer and delivers it if so */
{   switch( BasicvalueFlag(r) )
    {  case INTEGER:  return( BasicvalueInteger(r));
    }
    fprintf( stderr, "packed_initem: %s\n", failmsg );
    exit( EXIT_FAILURE );
}

static Basicvalue inpkdint( int neg, int n, Uchar (* get_char)())
/* Forms an integer from the stream given the basics about it,
                                              eg sign and number of bytes */
{  Basicvalue result;
   int size = n;
   unsigned int b = 0;

   while( size-- > 0 )  {  b = ( b << 8 ) | (unsigned int)get_char(); }
   BasicvalueFlag( result) = INTEGER;
   if( neg )
   {  BasicvalueInteger( result) = ~(int)b;
   }
   else
   {  BasicvalueInteger( result) = (int)b;
   }
   return( result );
}

static Basicvalue packed_initem( Uchar (* get_char)())
{  Basicvalue result;
   unsigned int val = (unsigned int)get_char(), size;
   HashId hashid;
   FILE *keepdiagfile = assemdiagfile;

   assemdiagfile = NULL;  /* Stop diags during recursive call */
   if( val == 0 || val == 255 )
   {  BasicvalueFlag( result) = BADBASIC;
      fprintf( stderr, "packed_initem: illegal file token\n" );
   }
   else if( val < null_tok )
   {  BasicvalueFlag( result) = TOKEN;
      BasicvalueToken( result) = create_token( val, 0);
   }
   else if( val == null_tok )
   {  result = packed_initem( get_char );
      if( BasicvalueFlag( result) == TOKEN )
      {  long int token = TokenToken( BasicvalueToken( result));
         BasicvalueToken( result) = create_token( token, 1);
      }
      else
      {  BasicvalueFlag( result) = BADBASIC;
         fprintf( stderr, "packed_initem: null_token\n" );
      }
   }
   else if( val <= in2byte_tok )
   {  long int tok = 0;
      int i;

      for( i = 0; i <= val - in1byte_tok; i++ )
      {  tok = ( tok << 8 ) + (int)get_char();
      }
      BasicvalueFlag( result) = TOKEN;
      BasicvalueToken( result) = create_token( tok, 0);
   }
   else if( val == primary_tok )
   {  BasicvalueFlag( result) = PRIMARY;
      BasicvalueInteger( result) = getpkdint( packed_initem( get_char),
                                              "primary" );
   }
   else if( val == secondary_tok )
   {  BasicvalueFlag( result) = SECONDARY;
      BasicvalueInteger( result) = getpkdint( packed_initem( get_char),
                                              "secondary" );
   }
   else if( val == hashedid_tok )
   {  HashIdIndex( hashid ) = (int)get_char();
      HashIdCount( hashid ) = getpkdint( packed_initem( get_char),
                                         "hashid" );
      BasicvalueFlag( result) = HASHID;
      BasicvalueHashId( result) = hashid;
   }
   else if( val < ident_tok )
   {  result = GetStrCharBv( get_char, val - ident_range_start);
   }
   else if( val == ident_tok  )
   {  size = getpkdint( packed_initem( get_char), "idsize" );
      result = GetStrCharBv( get_char, size);
   }
   else if( val < pos1byte_int )
   {   BasicvalueFlag( result) = INTEGER;
       BasicvalueInteger( result) = val - zeroint;
   }
   else if( val < neg1byte_int )
   {   result = inpkdint( 0, val - pos1byte_int + 1, get_char );
   }
   else if( val < extended_int )
   {   result = inpkdint( 1, val - neg1byte_int + 1, get_char );
   }
   else if( val == extended_int )
   {   unsigned int ctrl =  (unsigned int)get_char();
       result = inpkdint((int)( ctrl & 128 ), (int)( ctrl & 15 ), get_char );
   }
   else
   {  BasicvalueFlag( result) = BADBASIC;
      fprintf( stderr, "packed_initem: reserved\n" );
   }
assemdiagfile = keepdiagfile;  /* Re-start diags if they were in operation */
PrintBasicValue( result );
   return( result);
}


/* Low level parser for un-packed format */

static Uchar (* get_next_char)();

static Uchar GetUpChar( void )
{  Uchar result = get_next_char();
   if( result == '\n' ) result = GetUpChar();
   return( result );
}

static char up_next = '\n';

static long int GetUpInteger( void)
{  long int val = 0;

   while (( up_next = GetUpChar()) >= '0' && up_next <= '9' )
   {  val = val * 10 - ((long int) up_next - ZERO);
   }
   return( val );
}

static Basicvalue unpacked_initem( Uchar (* get_char)())
{
    long int getletter, nil, neg, val, size = 0, tok = 0;
    char *ident;
    HashId hashid;
    Basicvalue result;

    get_next_char = get_char;
    if( up_next == '\n' ) up_next = GetUpChar( );
    if( up_next == '-' || up_next == '+' )
    {  neg = ( up_next == '-' );
       val = GetUpInteger();
       if( !neg )  val = -val;
       BasicvalueFlag( result) = INTEGER;
       BasicvalueInteger( result) = val;
    }
    else if( up_next == '"' )
    {  size = -GetUpInteger();
       result = GetStrCharBv( GetUpChar, size );
       up_next = '\n';
    }
    else if( up_next == '#' )
    {  val = -GetUpInteger();
       if( up_next != '/' )
       {  BasicvalueFlag( result) = BADBASIC;
          fprintf( stderr, "\"%c\" in hashed ident\n", up_next );
       }
       else
       {  HashIdIndex( hashid ) = val;
          HashIdCount( hashid ) = -GetUpInteger();
          BasicvalueFlag( result) = HASHID;
          BasicvalueHashId( result) = hashid;
       }
    }
    else if( up_next == '~' || up_next == '^' ) 
    {  BasicvalueFlag( result) = up_next;
       BasicvalueInteger( result) = -GetUpInteger();
    }
    else if( up_next == '*' || up_next == '%' )
    {  nil = (up_next == '%');
       tok = -GetUpInteger();
       BasicvalueFlag( result) = TOKEN;
       BasicvalueToken( result) = create_token( tok, nil);
    }
    else
    {  BasicvalueFlag( result) = BADBASIC;
       fprintf( stderr, "\"%c\" is an unrecognised value herald\n", up_next );
    }
PrintBasicValue( result );
    return( result );
}

/* Basic assem reader startup procedure */

Assemreader *read_signature( Uchar (* get_char)(), char *signature )
{
    Assemreader *input = HEAP( Assemreader);
    int length = strlen( file_signature),
        i, unpacked = TRUE;
    char *sig_read = HEAPN( char, length+1 ),
         *language;

    for (i = 0; i <= length; i++) { sig_read[i] = get_char(); }
    sig_read[i] = NULL;

    if( strcmp( sig_read+1, file_signature ))
    {  fprintf( stderr, "read_signature: The given file is not a"
                        " cmodes interface file or it is out of date\n"
                        " Signature read = %s\n", sig_read );
       return( NULL );
    }
    else if( *sig_read == UNPACKED_INFILE )
    {  unpacked = TRUE;
    }
    else if( *sig_read == PACKED_INFILE )
    {  unpacked = FALSE;
       SetPkdConstants();
    }
    else
    {  fprintf( stderr, "read_signature: The given file does not start"
                        " with a legal mode character\n"
                        " Signature read = %s\n", sig_read );
       return( NULL );
    }

    AssemreaderGetchar( input ) = get_char;

    BasicvalueFlag( last_basic) = EMPTYBASIC;
    if( unpacked )
    {  AssemreaderInitem( input ) = unpacked_initem;
       up_next = '\n';
    }
    else
    {  AssemreaderInitem( input ) = packed_initem;
    }
    AssemreaderIds_lookup( input ) = NULL;

    language = inassemstr( input );
    if( assemdiagfile != NULL )
    {  fprintf( assemdiagfile, "\nRead file for language sugnature %s\n",
                language );
    }
    if( strcmp( language, signature ))
    {  fprintf( stderr, "read_signature: The given file contains the wrong"
                        " language signature.\n"
                        " Expected %s found %s\n", signature, language );
       return( NULL );
    }

    return( input );
}

/************ Generic Writer *************************/

static char *putpkdint( long int i, char *ptr)
{  char *tmpstr = ptr;

   if( i >= lowint && i <= highint )
   {  *(--tmpstr) = (char)( i + zeroint );
   }
   else
   {  int neg = ( i < 0 ), n = 0;
      unsigned long b = (unsigned long) i;

      if( neg ) b = ~b;
      while( b != 0 )   /* This is ok if lowint is less than 0 */
      {  *(--tmpstr) = (char)( b & 255 );
         n++;
         b = ( b >> 8 );
      }
      if( n > 2 )
      {  if( neg ) n += 128;
         *(--tmpstr) = (char)( n );
         *(--tmpstr) = (char)( extended_int );
      }
      else if( neg )
      {  *(--tmpstr) = (char)( neg1byte_int + n - 1);
      }
      else
      {  *(--tmpstr) = (char)( pos1byte_int + n - 1);
      }
   }
   return( tmpstr );
}

#define tmpbsize 24

static void packed_outitem( Basicvalue item, void (* putstring)( int, char *))
{   char tmpbuffer[ tmpbsize ];
    char *btop = tmpbuffer + tmpbsize - 1;
    char *cptr = btop;
    Tok token;
    HashId hashid;
    int len;

    *cptr = NULL;
    switch( BasicvalueFlag( item ))
    {  case INTEGER:
            cptr = putpkdint( BasicvalueInteger( item ), cptr );
            putstring( btop - cptr, cptr );
            break;

        case HASHID:
            hashid = BasicvalueHashId( item );
            cptr = putpkdint( HashIdCount( hashid ), cptr );
            *(--cptr) = (char)HashIdIndex( hashid );
            *(--cptr) = (char)hashedid_tok;
            putstring( btop - cptr, cptr );
            break;

        case CHAR:
            *(--cptr) = BasicvalueChar( item );
            *(--cptr) = (char)( in1byte_tok + 1 );
            putstring( btop - cptr, cptr );
            break;

        case STRING:
            len = strlen( BasicvalueString( item ));
            if( len <= short_string_top )
            {  *(--cptr) = (char)( ident_range_start + len );
            }
            else
            {  cptr = putpkdint( len, cptr );
               *(--cptr) = (char)ident_tok;
            }
            putstring( btop - cptr, cptr );
            putstring( -1, BasicvalueString( item ));
            break;

        case PRIMARY:
            cptr = putpkdint( BasicvalueInteger( item ), cptr);
            *(--cptr) = '~';
            putstring( btop - cptr, cptr );
            break;

        case SECONDARY:
            cptr = putpkdint( BasicvalueInteger( item ), cptr);
            *(--cptr) = '^';
            putstring( btop - cptr, cptr );
            break;

        case TOKEN:
            token = BasicvalueToken( item );
            if( TokenToken( token ) >= in1byte_tok )
            {  unsigned int b = TokenToken( token );
               int n = -1;
               while( b != 0 )
               {  *(--cptr) = (char)( b & 255 );
                  n++;
                  b = ( b >> 8 );
               }
               *(--cptr) = (char)( in1byte_tok + n );
            }
            else
            {  *(--cptr) = (char)( TokenToken( token ));
            }
            if( TokenNil( token))
            {  *(--cptr) = (char)null_tok;
            }
            putstring( btop - cptr, cptr );
            break;

        default:
            fprintf( stderr, "Attempt to output bad basicbalue flag \"%c\"\n",
                             BasicvalueFlag( item ) );
            exit( EXIT_FAILURE );
    }
}

static void unpacked_outitem( Basicvalue item, void (* putstring)( int, char *))
{   char tmpbuffer[ tmpbsize ];
    Tok token;
    HashId hashid;

    switch( BasicvalueFlag( item ))
    {  case INTEGER:
            sprintf( tmpbuffer, "%+d", BasicvalueInteger( item ));
            putstring( -1, tmpbuffer );
            break;

        case HASHID:
            hashid = BasicvalueHashId( item );
            sprintf( tmpbuffer, "#%d", HashIdIndex( hashid ));
            putstring( -1, tmpbuffer );
            sprintf( tmpbuffer, "/%d", HashIdCount( hashid ));
            putstring( -1, tmpbuffer );
            break;

        case CHAR:
            sprintf( tmpbuffer, "\"1\"%c", BasicvalueChar( item ));
            putstring( -1, tmpbuffer );
            break;

        case STRING:
            sprintf( tmpbuffer, "\"%d\"", strlen( BasicvalueString( item )));
            putstring( -1, tmpbuffer );
            putstring( -1, BasicvalueString( item ));
            break;

        case PRIMARY:
            sprintf( tmpbuffer, "~%d", BasicvalueInteger( item ));
            putstring( -1, tmpbuffer );
            break;

        case SECONDARY:
            sprintf( tmpbuffer, "^%d", BasicvalueInteger( item ));
            putstring( -1, tmpbuffer );
            break;

        case TOKEN:
            token = BasicvalueToken( item );
            if( TokenNil( token))
            {  sprintf( tmpbuffer, "%%%d", TokenToken( token));
            }
            else
            {  sprintf( tmpbuffer, "*%d", TokenToken( token));
            }
            putstring( -1, tmpbuffer );
            break;

        default:
            fprintf( stderr, "Attempt to output bad basicbalue flag \"%c\"\n",
                             BasicvalueFlag( item ) );
            exit( EXIT_FAILURE );
    }
}

static void outassemchar (char c, Assemwriter *writer)
{  Basicvalue val;
   BasicvalueFlag( val ) = CHAR;
   BasicvalueChar( val ) = c;
   AssemwriterOutitem(writer)( val, AssemwriterPutstring(writer));
}

static void outassemint (long int i, Assemwriter *writer)
{  Basicvalue val;
   BasicvalueFlag( val ) = INTEGER;
   BasicvalueInteger( val ) = i;
   AssemwriterOutitem(writer)( val, AssemwriterPutstring(writer));
}

static void outassemprimary (Node *node, Assemwriter *writer)
{  VecNode children = Children(node);
   if (Index(children, 0) != NULL)
   {  Basicvalue val;
      BasicvalueFlag( val ) = PRIMARY;
      BasicvalueInteger( val ) = ScalarInt(Index(children, 0));
      AssemwriterOutitem(writer)( val, AssemwriterPutstring(writer));
  }
}

static void outassemsec (Node *node, Assemwriter *writer)
{  VecNode children = Children(node);
   if (Index(children, 0) != NULL)
   {  Basicvalue val;
      BasicvalueFlag( val ) = SECONDARY;
      BasicvalueInteger( val ) = ScalarInt(Index(children, 0));
      AssemwriterOutitem(writer)( val, AssemwriterPutstring(writer));
  }
}

static void outassemstr (char *str, Assemwriter *writer)
{  Basicvalue val;
   BasicvalueFlag( val ) = STRING;
   BasicvalueString( val ) = str;
   AssemwriterOutitem(writer)( val, AssemwriterPutstring(writer));
}

static void outassemtok (Token token, Int nil, Assemwriter *writer)
{  Basicvalue val;
   BasicvalueFlag( val ) = TOKEN;
   BasicvalueToken( val ) = create_token( token, nil);
   AssemwriterOutitem(writer)( val, AssemwriterPutstring(writer));
}

static void outassemid( Node *id, Assemwriter *writer)
{  if (IsNil(id))
   {  outassemstr( "", writer);
   }
   else if( AssemwriterPutidst( writer))
   {  long int hash = IdHash( id );
      HashId hashid;
      Basicvalue val;

      HashIdIndex( hashid) = ( hash % AssemwriterPutidst( writer)) + 1,
      HashIdCount( hashid) = hash / AssemwriterPutidst( writer);
      BasicvalueFlag( val ) = HASHID;
      BasicvalueHashId( val ) = hashid;
      AssemwriterOutitem(writer)( val, AssemwriterPutstring(writer));
   }
   else
   {  outassemstr( IdValue( id), writer);
   }
} 

static void write_idstable( Assemwriter *writer)
{
   if( AssemwriterPutidst( writer) )
   {  Int tabsize = GetIdsTableSize(), i;
 
      AssemwriterPutidst( writer) = tabsize;
      outassemint( tabsize, writer);
      for( i = 1; i <= tabsize; i++ )
      {  Node *entry = GetIdsTableEntry( i);
         Node *nodeid = IdsarmEntries( entry);
         Int size = (Int )IdsarmSize( entry);

         outassemint( size, writer);
         while (nodeid != NULL)
         {  char *idvalue = (char *)IdEntryStr( nodeid);
            outassemstr( idvalue, writer);
            nodeid = IdEntryRest( nodeid);
         }
      }
   }
   else
   {  outassemint( 0, writer);
   }
   return;
}

static int mark_secondaries (Node *node, int issec, Transformer *tprocs)
{  int secnumber = 0;

   /* Use zeroth child in node to set up labels linking secondaries to */
   /* their primaries */
   Token token = Type(node);
   
   if (issec && !IsNil(node))
       { 
         VecNode children = Children(node);
         if (Index(children, 0) == NULL)  /* not yet marked */
             Index(children, 0) = MakeScalar(secnumber++, tprocs);
       }

   else if (token == SCALAR || token == ID || IsNil(node) )
       ;
   
    else if (IsVec(token))
       { 
         int i;
         Size num = VecSize(node);
         for (i=1; i <= num; i++)
             secnumber += mark_secondaries( *IndexVector(node, i), 0, tprocs );
       }

    else 
        {
            int i;
            VecNode children = Children(node);
            for (i=1; i <= Upb(children) ; i++)
            {
               int secondary = 
                   SecondaryChild(token, i, TransformerObjtable(tprocs));
                secnumber += mark_secondaries( Index(children, i), secondary,
                                               tprocs );
             }
        }
   return( secnumber );
}

static void generic_writer( Node *node,
                            int issec,
                            Assemwriter *writer, 
                            Transformer *tprocs )
{
   Token token = Type(node);
   int isnil = IsNil(node);
   
    if (issec && !isnil)
         outassemsec( node, writer);

   else if (token == SCALAR && !isnil)
      outassemint( ScalarInt(node), writer );
   
   else if (token == ID && !isnil)
       outassemid( node, writer );

   else if (IsVec(token))
       { 
         int i;
         Size num = ( isnil ? -1 : VecSize(node));
         outassemtok( VEC, 0, writer );
         outassemint( num, writer );
         outassemtok( SecondaryType(VecType(token)), 0, writer );
         for (i=1; i <= num; i++)
             generic_writer( *IndexVector(node, i), 0, writer, tprocs );
       }

   else if (isnil)
         outassemtok( token, 1, writer );

    else 
        {
            int i;
            VecNode children = Children(node);
            outassemtok( token, 0, writer );
            outassemprimary( node, writer);
            for (i=1; i <= Upb(children) ; i++)
            {
               int secondary =
                    SecondaryChild(token, i, TransformerObjtable(tprocs));
                generic_writer( Index(children, i), secondary, writer, tprocs );
            }
        }
}

extern void write_closure( Externalclosure closure,
                           Assemwriter *writer,
                           Transformer *tprocs )
{  int secnumber = mark_secondaries(ExternalclosureClosure(closure), 0, tprocs);
   int i;
   char **head_data = ExternalclosureHead_data(closure);
   Size upb = ExternalclosureHeadupb(closure);

   outassemint( upb, writer );
   for ( i=0; i < upb; i++) outassemstr( head_data[i], writer ); 
   write_idstable(writer);

   outassemint(secnumber, writer);
   generic_writer( ExternalclosureClosure(closure), 0, writer,tprocs );
   outassemchar( '.', writer);

}

extern Assemwriter *write_signature( void (* putstring)( int, char *),
                                     int mode,
                                     int putidst,
                                     char *signature )
{
   Assemwriter *writer = HEAP( Assemwriter);
   char tmpbuffer[ 30 ];

   if( writer == NULL )
   {  fprintf( stderr, "write_signature: No space left\n" );
   }
   else
   {  sprintf( tmpbuffer, "%c%s", ( mode ? 'P' : 'R' ), file_signature );
      putstring( -1, tmpbuffer);

      AssemwriterPutstring(writer) = putstring;
      AssemwriterPutidst(writer) = putidst;
      if( mode )
      {  AssemwriterOutitem(writer) = packed_outitem;
         SetPkdConstants();
      }
      else
      {  AssemwriterOutitem(writer) = unpacked_outitem;
      }
      outassemstr( signature, writer );
   }
   return( writer );
}     















