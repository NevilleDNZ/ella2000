          /*          C modes browser       */

#include "config.h"

CF_MODULE( browser_init, \
    "$Id: browser.c,v 2.2 1995/03/29 13:05:19 ella Exp $" )


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
#include <stdlib.h>
#include <string.h>

#include "heap.h"
#include "cmodes.h"
#include "browser.h"

static void print_token (Token tok, int issec, Table *table) 
{
   if (issec)
   {  print_token( SecondaryType(tok), 0, table);
      printf(" *");
   }
   else if (tok == SCALAR)
   {  printf("INT");
   }
   else if (tok ==ID)
   {  printf("ID");
   }
   else if IsVec(tok)
   {  printf ("VECTOR [] ");
      print_token(VecType(tok), 0, table);              
   }
   else if (tok < FIRST_SORT)
   {  printf("%s",  EntryName(ConstructorEntry(tok, table)) );
   }
   else
   {  printf("%s",  *SortStr(tok, table) );
   }
 } 

static void print_tok (Token tok, int issec, Table *table) 
{
   print_token(tok, issec, table);
   printf("\n");
}

static char *emptystr = "-";

static int browse (Node * node, int level, Table *table)
{  
    int i, scantree = 1, maptop = 0, maxflength = 0, len;
    int newlevel, returnedlevel = level, direct = 0;
    char levbuffer[ 10 ];
    Token tok = Type(node);
    VecNode children = Children(node);
    int nchildren = children.upb;
    Node **refmap = HEAPN( Node *, nchildren );
    char **fnames = HEAPN( char *, nchildren );
    int *flengths = HEAPN( int, nchildren );
    char *cname;

    for( i = 0; i < nchildren; ++i )
    {  Node *child = Index(children, i+1);

       refmap[ i ] = NULL;
       if( child != NULL )
       {  Token childtok = Type( child);

          cname = ChildName( tok, i+1, table);
          if( cname == NULL )  cname = emptystr;
          fnames[ i ] = cname;
          len = strlen( cname );
          flengths[ i ] = len;
          if( len > maxflength ) maxflength = len;
       }
       else
       {  fnames[ i ] = NULL;
          flengths[ i ] = 0;
       }
    }

    cname = HEAPN( char, maxflength + 1 );

    while( returnedlevel == level )
    {  printf(
            "\n------------------------------------------------------------\n");
       printf("%2d  |  ", level);
       print_tok(tok, 0, table);
       printf("------------------------------------------------------------\n");
    
       maptop = 0;
       for( i = 0; i < nchildren; ++i )
       { 
          Node *child = Index(children, i+1);

          if (child == NULL)
          {  printf("    |  NULL \n" );
          }
          else
          {  Token childtok = Type(child);
             int issec = SecondaryChild(tok, i, table);

             memset( cname, (int)' ', maxflength );
             cname[ maxflength ] = NULL;
             strncpy( cname, fnames[ i ], flengths[ i ] );

             if (IsNil(child))
             {  printf("    |  %s  |  NIL ", cname);
                print_tok(childtok, issec, table);
             }
             else if (childtok == ID)
             {  printf("    |  %s  |  \"%s\" \n", cname, IdValue(child));
             }
             else if (childtok == SCALAR)
             {  printf("    |  %s  |  %d\n", cname, ScalarInt(child) );
             }
             else if (IsVec(childtok))
             {  refmap[ maptop ] = child;
                printf(" %2d |  %s  |  VECTOR [ %d  ] ",
                       ++maptop, cname, VecSize(child));
                print_tok(VecType(Type(child)), issec, table);
             }
             else
             {  refmap[ maptop ] = child;
                printf(" %2d |  %s  |  ", ++maptop, cname );
                print_tok(childtok, issec, table);
             }
          }
       }

       scantree = 1;
       while( scantree )
       {  printf("\n %2d > ", level);
          scanf("%s", levbuffer);

          direct = 0;
          if( *levbuffer == '=' )
          {  *levbuffer = '+';
             direct = 1;
          }

          if( isdigit( *levbuffer ) || *levbuffer == '-' || *levbuffer == '+' )
          {  scantree = 0;
             newlevel = (int)strtol( levbuffer, NULL, 10 );
             if( direct )
             {  returnedlevel = newlevel;
                if( returnedlevel > level )
                {  printf( "You cannot go up using = notation\n" );
                   scantree = 1;
                }
             }
             else if ( newlevel <= maptop && newlevel > 0)
             {  Node *newnode = refmap[ newlevel-1];
                returnedlevel = browse( newnode, level+1, table);
             }
             else if( newlevel < 0 )
             {  returnedlevel = level+newlevel;
                if( returnedlevel < 0 )
                {  printf(
                       "You are trying to go back too far, current level %d\n",
                           level );
                   scantree = 1;
                }
             }
             else if ( newlevel == 0 )
             {  printf("Exiting from the browser\n");
                returnedlevel = -1;
             }
             else
             {  printf( "Selection %d invalid, must be less than %d\n", 
                         newlevel, maptop+1);
                scantree = 1;
             }
          }
          else
          {  printf( "Please give a number in the range %d to %d\n",
                     -level, maptop );
          }
       }
    }

    free( cname );
    free( flengths );
    free( fnames );
    free( refmap );
    return( returnedlevel );
}

extern void cmodes_browser( Node *node, Table *table)
{  browse( node, 0, table);
}

