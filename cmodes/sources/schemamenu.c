          /*          C schema  menue  program       */

#include "config.h"

CF_PROGRAM( schemamenu_init, \
    "$Id: schemamenu.c,v 2.3 1995/03/29 13:05:15 ella Exp $" )


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
12:01:95   1.002  DJS    Use references for asemreader and assemwriter. etc. 
24:01:95   1.003  DJS    Changes to accomodate packed file format. 
25:01:95   1.004  DJS    Add fclose to layout write procedure, tidy up handling
                        of prompted replys. 
21:03:95   1.005  DJS   Add printout of disclaimer
28:03:95   1.001  DJS   Change name from menu to schemamenu.
28:03:95   1.002  ELLA  Replace CMODES Transformation by Schema Mapping,
                        re-format the menu printout.
29:03:95   2.003  ELLA  Change copyright header
??:??:??   ?.???  ????
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "fault.h"
#include "heap.h"
#include "utilities.h"
#include "cmodes.h"
#include "openinterface.h"
#include "layout_print.h"
#include "vif_layout.h"
#include "ella_layout.h"
#include "ella_vif.h"
#include "udinst.h"
#include "garbage_collect.h"
#include "disclaimer.h"

#define equal(a, b) ( strcmp(a, b) == 0 )
#define FORMAT_PAGE "\n\n\n\n\n"
#define FORMAT_LINE "                "

FILE * diagnosefile;
Externalclosure emptyclosure = Emptyclosure;
Externalclosure theclosure = Emptyclosure;
Table *objtable = NULL;
Table *imgtable = NULL;

char buffer[ 1024 ];

static void clear_screen(void)
{  char *argv[2];

   argv[0] = "clear";
   argv[1] = NULL;
   execcmd( argv );
}

static char *Capitalise( char *word)
{   char *cptr = word;

    while( *cptr != NULL )
    {  *cptr = (char)toupper( (int)*cptr ); /* This line may need a condition
                                               using islower on some
                                               implementations DJS */
       cptr++;
    }
    return( word );
}

static Table *GetTable (char* language)
{       if ( equal( language, "LAY"))  return LAY_InitTable();
   else if ( equal( language, "VIF"))  return VIF_InitTable();
   else if ( equal( language, "ELLA")) return ELLA_InitTable();
   return( NULL );
}

static char *GetSignature (char *language)
{       if ( equal( language, "LAY"))  return LAY_SIGNATURE;
   else if ( equal( language, "VIF"))  return VIF_SIGNATURE;
   else if ( equal( language, "ELLA")) return ELLA_SIGNATURE;
   return( NULL );
}

FILE * assem_infile = NULL;

static Uchar get_char()
{   return( (Uchar)getc( assem_infile));
}

static Externalclosure read_assmodes( FILE * infile, char * language)
{  char *signature = GetSignature( language);
   Externalclosure result = emptyclosure;

   assem_infile = infile;
   if( signature != NULL )
   {  Transformer *nulltprocs = MakeNullTransformer(objtable, objtable);

      Assemreader *assemreader = read_signature( get_char, signature);
      if( assemreader != NULL)
      {  result = read_closure( assemreader, nulltprocs);
      }
      free( assemreader );
   }
   return( result );
}

FILE* assem_outfile;
static void unpacked_put( int size, char *str)
{  if( size < 0 )
   {  fputs( str, assem_outfile);  /* Size not known use NULL termination */
   }
   else
   {  fwrite( str, 1, size, assem_outfile);
   }
}

static int write_assmodes( Externalclosure closure,
                           FILE *outfile, 
                           char *language,
                           int pkd )
{  Transformer *nulltprocs = MakeNullTransformer( objtable, objtable);
   char *signature = GetSignature( language);

   assem_outfile = outfile;
   if( signature != NULL )
   {  Assemwriter *assemwriter = 
                      write_signature( unpacked_put, pkd, pkd, signature);
      if( assemwriter != NULL )
      {  write_closure(closure, assemwriter, nulltprocs);
      }
      free( assemwriter );
      return( 0 );
   }
   else
   {  printf( "Language %s not known\n", language );
      return( 1 );
   }
}

static update_closure (Node *newclosure)
{
 /*   free_tree(ExternalclosureClosure(theclosure)); */
    ExternalclosureClosure(theclosure) = newclosure;
}

static void NewScreen()
{   clear_screen();
    printf( "%s", FORMAT_PAGE);
}

static char *GetFileName( char *inout )
{  char *tmpstr;

   sprintf( buffer, "%sEnter the %sfile name [RETURN to abort] ? ",
                    FORMAT_LINE, inout);
   tmpstr = prompt( buffer, buffer );
   if( tmpstr == NULL || *tmpstr == NULL ) return( NULL );
   return( heapstr( buffer ));
}

static char *GetLanguage()
{  char *tmpstr;

   sprintf( buffer, "%sEnter the language [RETURN to abort] ? ", FORMAT_LINE);
   tmpstr = prompt( buffer, buffer );
   if( tmpstr == NULL || *tmpstr == NULL ) return( NULL );
   return( Capitalise( heapstr( buffer )));
}

static Externalclosure menu_load( char *p1, char *p2)
{   Externalclosure result = emptyclosure;
    char *filename, *language;
    Node *tmpclosure;
    FILE *infile;

    NewScreen();
    if( p1 == NULL )
    {  filename = GetFileName( "input dump " );
       if( filename == NULL ) return( result );
    }
    else
    {  filename = heapstr( p1 );
    }
    if( p2 == NULL )
    {  language = GetLanguage();
       if( language == NULL ) return( result );
    }
    else
    {  language = Capitalise( heapstr( p2 ));
    }

    if(( infile = fopen( filename,"r")) == NULL)
    {  perror( "Error opening input file: " );
    }
    else
    {  tmpclosure = ExternalclosureClosure( theclosure);
       if( tmpclosure != NULL)
       {  free_tree( tmpclosure ); 

          /* free idstable & idslookup to be done later */

          ExternalclosureClosure(theclosure) = NULL;
          tmpclosure = NULL;
          printf( "Must clear head data.\n");
        }

        objtable = GetTable(language);

        if( objtable != NULL )
        {  printf( "\n%sLOADING %s.\n", FORMAT_LINE, filename);
           result = read_assmodes( infile, language);
        }
        else
        {  printf( "Language %s not known.\n", language );
        }
        fclose( infile );
    }
    free( language );
    free( filename );
    return( result );
}

static int menu_browse(void)
{  Node *closure = ExternalclosureClosure(theclosure);

   NewScreen();
   if( closure != NULL )
   {  cmodes_browser( closure, objtable);
      return( 0 );
   }
   else
   {  printf( "Must load dump file first" );
   }
   return( 1 );
}

static int menu_write( char *p1, char *p2, int pkd )
{   char *filename, *language;
    Node *tmpclosure;
    int result = 1;
    FILE *elafile;

    NewScreen();
    if (ExternalclosureClosure(theclosure) != NULL)
    {   if( p1 == NULL )
        {  filename = GetFileName( "output dump " );
           if( filename == NULL ) return( result );
        }
        else
        {  filename = heapstr( p1 );
        }
        if( p2 == NULL )
        {  language = GetLanguage();
           if( filename == NULL ) return( result );
        }
        else
        {  language = Capitalise( heapstr( p2 ));
        }

        if ((elafile = fopen( filename,"w")) == NULL)
        {  perror( "Error openin output file: " );
        }
        else
        {  printf( "\n\n%sWRITING %s.\n", FORMAT_LINE, filename );
           result = write_assmodes( theclosure, elafile, language, pkd);
        }
        fclose( elafile );
    }
    else
    {  printf( "Must load dump file first" );
    }
    free( language );
    free( filename );
    return( result );
}

static int menu_layout( FILE *outfile )
{  Transformer *layout_print;

   imgtable = objtable; /* LAYtable */
   layout_print = make_layout_print( MakeNullTransformer( objtable, imgtable),
                                     outfile );
   Transform( ExternalclosureClosure( theclosure), layout_print);
   return( 0 );
}

static int write_file( char *fname)
{   FILE *outfile;
    char *filename;
    int result = 1;

    NewScreen();
    if( fname == NULL )
    {  filename = GetFileName( "output " );
       if( filename == NULL ) return( result );
    }
    else
    {  filename = heapstr( fname );
    }
    if (( outfile = fopen(filename,"w")) == NULL)
    {  perror( "Error opening output file: " );
    }
    else
    {  result = menu_layout( outfile );
       fclose( outfile );
    }
    free( filename );
    return( result );
}


static void menu(void)
{   int failed = 0, readoption = 1, alwaysstop = 0, showhidden = 0;
    char prmptbuf[80];
    char *tmpstr, *option, *version_id;
    char *terms = " \n";

    strcpy( buffer, schemamenu_init );
    tmpstr = strtok( buffer, " " );
    tmpstr = strtok( NULL, " " );
    tmpstr = strtok( NULL, " " );
    version_id = heapstr( tmpstr );

    while( readoption )
    {  NewScreen();
       failed = 0;

       printf( "%s    Schema Mapping Environment. V%s\n",
               FORMAT_LINE, version_id);
       printf( "%s    ---------------------------------\n\n", FORMAT_LINE);

       printf( "%sl ......... load file [filename [language]]\n",
               FORMAT_LINE);
       printf( "%sb ......... browse\n", FORMAT_LINE);
       printf( "%sudtoum .... UDINST_UMINST mapper\n", FORMAT_LINE);
       printf( "%setov ...... ELLA_VHDL mapper\n", FORMAT_LINE);
       printf( "%setol ...... ELLA_LAYOUT mapper\n", FORMAT_LINE);
       printf( "%svtol ...... VHDL_LAYOUT mapper\n", FORMAT_LINE);
       printf( "%slp ........ LAYOUT_PRINT\n", FORMAT_LINE);
       printf( "%slw ........ LAYOUT_WRITE [filename]\n", FORMAT_LINE);
       printf( "%swpk ....... write packed dump [filename [language]]\n",
               FORMAT_LINE);
       printf( "%swup ....... write unpacked dump [filename [language]]\n",
               FORMAT_LINE);
       printf( "%sq ......... quit\n", FORMAT_LINE);
       if( showhidden )
       {
          printf( "%sids ....... print ids table\n", FORMAT_LINE);
          printf( "%spause ..... toggle the pause state\n", FORMAT_LINE);
          printf( "%shidden .... toggle the hidden state\n", FORMAT_LINE);
          printf( "%sdiag ...... print diagnostics [filename] \n",
                  FORMAT_LINE);

       }

       sprintf( prmptbuf, "\n%s> ", FORMAT_LINE);
       while(( tmpstr = prompt( prmptbuf, buffer )) == NULL ||
               *tmpstr == NULL ){};

       option = strtok( tmpstr, terms );     
       Capitalise( option);

       if( equal(option, "L") )
       {  theclosure = menu_load( strtok( NULL, terms ), strtok( NULL, terms ));
          if( ExternalclosureClosure( theclosure) == NULL ) failed = 1;
       }
       else if ( equal(option, "B") )
       {  failed = menu_browse();
       }
       else if ( equal(option, "WPK") )
       {  failed = menu_write( strtok( NULL, terms ),
                               strtok( NULL, terms ), 1 ); 
       }
       else if ( equal(option, "WUP") )
       {  failed = menu_write( strtok( NULL, terms ),
                               strtok( NULL, terms ), 0 ); 
       }
       else if (equal(option, "UDTOUM"))
       {  Transformer *udinst_uminst;

          imgtable = ELLA_InitTable();
          udinst_uminst=
          Make_udinst_uminst( MakeNullTransformer( objtable, imgtable));
          update_closure( Transform( ExternalclosureClosure( theclosure),
                                      udinst_uminst));
          objtable = imgtable;
       }
       else if (equal(option, "ETOV"))
       {  Transformer *ella_vif;

          imgtable = VIF_InitTable();
          ella_vif = make_ella_vif( MakeNullTransformer( objtable, imgtable));
          update_closure( Transform( ExternalclosureClosure( theclosure),
                                     ella_vif));
          objtable = imgtable;
       }
       else if (equal(option, "ETOL"))
       {  Transformer *ella_layout;

          imgtable = LAY_InitTable();
          ella_layout = 
                   make_ella_layout( MakeNullTransformer( objtable, imgtable));
          update_closure( Transform( ExternalclosureClosure( theclosure),
                                     ella_layout));
               objtable = imgtable;
       }
       else if (equal(option, "VTOL"))
       {  Transformer *vif_layout;

          imgtable = LAY_InitTable();
          vif_layout = 
                   make_vif_layout( MakeNullTransformer( objtable, imgtable));
          update_closure( Transform( ExternalclosureClosure( theclosure),
                                     vif_layout));
          objtable = imgtable;
       }
       else if (equal(option, "LP"))
       {  menu_layout( stdout );
          failed = 1; /* We have not really failed, but need to hold the screen
                      */
       }
       else if (equal(option, "LW"))
       {  failed = write_file( strtok( NULL, terms ));
       }
       else if (equal(option, "Q"))
       {  readoption = 0;
          alwaysstop = 0;
       }
       else if ( equal(option, "IDS") )
       {  print_idstable();
          failed = 1; /* We have not really failed, but need to hold the screen
                      */
       }
       else if ( equal(option, "HIDDEN") )
       {  showhidden = 1 - showhidden;
       }
       else if ( equal(option, "PAUSE") )
       {  alwaysstop = 1 - alwaysstop;
       }
       else if ( equal(option, "DIAG") )
       {  tmpstr = strtok( NULL, terms );
          if( tmpstr == NULL )
          {  assemdiagfile = stdout;
             alwaysstop = 1;
          }
          else
          {  assemdiagfile = fopen( tmpstr, "w" );
          }
       }
       else
       {  printf( "Option %s not recognised.\n", option );
          failed = 1;
       }

       if( failed || alwaysstop )
       {  prompt( "Press RETURN to continue > ", buffer );
       }
    }
}

extern main(void)
{   print_disclaimer( 1 );
    menu();
    exit(0);
}
