     /* Program to generate translation tables for ALGOL68 openinterface */

#include "config.h"

CF_PROGRAM( gen_a68_init, \
    "$Id: gen_a68.c,v 2.4 1995/03/29 13:05:24 ella Exp $" )


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
06:01:95   1.001  ELLA    Install in config manage system. 
12:01:95   1.002  DJS    Add idtag to schema 
21:03:95   1.003  DJS   Add printout of disclaimer.
29:03:95   2.004  ELLA  Change copyright header
??:??:??   ?.???  ????
*/

#include <stdio.h>
#include <string.h>

#include "heap.h"
#include "fault.h"

#include "cmodes.h"
#include "generator_macro.h"
#include "ELLA_init.h"
#include "disclaimer.h"


/* order in the table is the order of PD ELLA tokens */

#define tabsize 212

    static int table[tabsize] =
       {   
            INT, ID, VEC, VEC, 0, 0, 0, 0, 0, 0,

            ELLA_FNAME, ELLA_FINT, ELLA_FCHECK, ELLA_FARITH, ELLA_FDOP,
            ELLA_FMOP, ELLA_FCOND, ELLA_FBRACKET, ELLA_FMACPAR, ELLA_FNULL,
            ELLA_RANGE, 0,

            ELLA_TNAME, ELLA_TROW, ELLA_TSTR, ELLA_TFN, ELLA_TSTRING,
            ELLA_TBRACKET, ELLA_TVOID, ELLA_TMACPAR, ELLA_TNULL, 0,

            ELLA_CNAME, ELLA_CPRIM, ELLA_CINT, ELLA_CQUOTE, ELLA_CQUERY,
            ELLA_CVOID, ELLA_CTYPE, ELLA_CRANGE, ELLA_CPRIMRANGE, ELLA_UALTS,
            ELLA_UNAME, ELLA_UFN, ELLA_UASSOC, ELLA_UEXTRACT, ELLA_UPORTNAME,
            ELLA_UINDEX, ELLA_UTRIM, ELLA_UDYINDEX, ELLA_UREPLACE, ELLA_UROW,
            ELLA_USTR, ELLA_UCONC, ELLA_UMINST, ELLA_UDINST, ELLA_UCASE,
            ELLA_UCOND, ELLA_UREPL, ELLA_USEQUENCE, ELLA_USERIES, ELLA_UATTR,
            ELLA_UCHECK, ELLA_USTRING, ELLA_UBRACKET, ELLA_UNULL, 0, 0, 0,

            ELLA_LET, ELLA_MAKE, ELLA_JOIN, ELLA_REPLJOIN, ELLA_STEPNULL,
            ELLA_PRINT, ELLA_FAULT, ELLA_SEQUENCE, ELLA_SEQLET, ELLA_SEQVAR,
            ELLA_SEQPVAR, ELLA_SEQASSIGN, ELLA_SEQCASE, ELLA_SEQCOND,
            ELLA_SEQREPL, ELLA_SEQROW, ELLA_SEQNULL, 0, 0, 0, 0,
 
            ELLA_ALIENCODE, ELLA_ARITH, ELLA_REFORM, ELLA_IMPORT, ELLA_ADELAY,
            ELLA_IDELAY, ELLA_RAM, ELLA_SAMPLE, ELLA_TIMESCALE, ELLA_BODYCHECK,
            ELLA_BODYNULL, ELLA_UNITTAG,

            ELLA_ATTRTAG, ELLA_FORMULATAG, ELLA_INSTANCE,

            ELLA_TYPETAG, ELLA_RVALTERNATIVE, ELLA_NEWINTS, ELLA_NEWCHARS,
            0, 0, 0, 0,

            ELLA_ATTRDEC, ELLA_INTDEC, ELLA_TYPEDEC, ELLA_CONSTDEC, ELLA_FNDEC,
            0,

            ELLA_ATTRNAME, ELLA_ATTRDATA, ELLA_ATTRSTR, ELLA_ATTRBRACKET,
            ELLA_ATTRNULL,

            ELLA_USAGE, ELLA_CTNAME, ELLA_ALTERNATIVE, ELLA_MACPARAM,
            ELLA_MACSPEC, ELLA_NAMETYPE, ELLA_UCHOICES, ELLA_SEQCHOICES,
            ELLA_ENVIRON, ELLA_OUTER, ELLA_CLOSURE, 0, 0, 0, 0, 0,

            ELLA_ATTRLOCDEC, ELLA_FLOCDEC, ELLA_TLOCDEC, ELLA_CLOCDEC,
            ELLA_FNLOCDEC, 0, 0, 0, 0, 0,

            ELLA_ATTRMACSPEC, ELLA_FMACSPEC, ELLA_TMACSPEC, ELLA_CMACSPEC,
            ELLA_FNMACSPEC, 0, 0, 0, 0, ELLA_IDTAG,

            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
            0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
          
            ELLA_ATTR, ELLA_FORMULA, ELLA_FORMULARANGE, ELLA_TYPE,
            ELLA_TYPEBODY, ELLA_UNIT, ELLA_MPARAM, ELLA_MACSPECBODY,
            ELLA_SEQSTEP, ELLA_STEP, ELLA_FNBODY, ELLA_PRINTITEMS
      };


void Write_signature  (FILE * outfile)
{   fprintf( outfile, "\nVECTOR[ ]CHAR signature = \"%s\";\n\n",
                      ELLA_SIGNATURE );
}

void Write_a68_c  (FILE * outfile)
{
    int i; int j;
    int tablim = tabsize - 1;
    fprintf(outfile, "VECTOR [] INT a68_c = (\n");
    
    for (i=0, j=0; i < tablim; i ++, j ++) 
    {  if ( j == 15 ) { fprintf(outfile, "\n"); j = 0; }
       fprintf(outfile, "%4d,", table[i]);
    }       
    fprintf(outfile, "%4d );\n\n", table[tablim]);
}

int find_a68tok (int ctok)
{
   int i; 
   int ans = -1;

   for ( i=0; ( i<tabsize && ans == -1 ); i++)
         if (table[i] == ctok ) ans = i;

   return (ans + 1);
}   

void Write_c_a68 ( FILE * outfile )
{
   int i = 0; int j;
   int tablim = FIRST_SORT + ELLA_NUNIONS;
   int a68tok;
   fprintf(outfile, "VECTOR [] INT c_a68 = (\n");

   for ( i = 1, j = 0; i < tablim; i ++ , j ++)
   {  if ( j == 15 )  { fprintf(outfile, "\n"); j = 0; }
      a68tok = find_a68tok(i);
      fprintf(outfile, "%4d,", a68tok);   
   }

   fprintf(outfile, "%4d );\n\n", find_a68tok(tablim));
}

main ()
{
    FILE *a68_file;

    char *filename = heapstr( "ELLA_define.a68");

    print_disclaimer( 0 );
 
    if ((a68_file = fopen(filename,"w")) != NULL)
    {      Write_signature( a68_file );
           Write_a68_c( a68_file );
           Write_c_a68( a68_file );
    } else {

        fprintf(stderr,"Can not open %d for writing\n",filename);
        exit(1);
    }

    fclose(a68_file);
}

