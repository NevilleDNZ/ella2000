
                 /* Utility routines for C modules. */

#define _POSIX_SOURCE 1

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>

#include "config.h"
#include "utilities.h"

CF_MODULE( utilities_init, \
    "$Id: utilities.c,v 2.2 1995/03/29 13:35:59 ella Exp $" )


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
17:06:94   1.001  DJS   InsUtils  Insert into database prior to full
                                  configuration of configuratrion system. 

29:03:95   2.002  ELLA  Modcprght Change copyright message
??:??:??   ?.???  ????
*/

char *prompt( char *prmptstr, char *buffer )
{   char c;
    int i = 0;
    char *res;

    while ( ( c=prmptstr[ i++ ] ) != NULL ) putchar( c );
    res = gets( buffer );
    if ( res == NULL ) return NULL;
    while ( res[0] == ' ' ) res++;  /* Strip leading spaces */
    return res;
}

int question( char *prmptstr, int def_reply )
{   char *reply;
    char buffer[ 256 ], replyarea[ 32 ];
    char fc;
    int replymode = 0;

    if ( def_reply == REPLY_YES )
    {   sprintf( buffer, "%s? [y] ", prmptstr );
    }
    else if ( def_reply == REPLY_NO )
    {   sprintf( buffer, "%s? [n] ", prmptstr );
    }
    else if ( def_reply == REPLY_ABORT )
    {   sprintf( buffer, "%s? [a] ", prmptstr );
    }
    else
    {   sprintf( buffer, "%s? ", prmptstr );
    }
    while ( !replymode )
    {   reply = prompt( buffer, replyarea );
        if ( reply == NULL )
        {   replymode = def_reply;
        }
        else
        {  fc = reply[0] ;
           if ( fc == 'y' || fc == 'Y' ) replymode = REPLY_YES;
           else if ( fc == 'n' || fc == 'N' ) replymode = REPLY_NO;
           else if ( fc == 'a' || fc == 'A' ) replymode = REPLY_ABORT;
           else if ( fc == NULL ) replymode = def_reply;
        }
    }
    return replymode;
}

#define TIM_BUF_SIZE 20
static char timbuf[ TIM_BUF_SIZE ];
static char *monthnames = "JanFebMarAprMayJunJulAugSepOctNovDec";

char *timestr( time_t *timeptr )
{  struct tm *ts = localtime( timeptr );
   int len = strftime( timbuf, TIM_BUF_SIZE,
                       "%d-%b-%Y %H:%M", ts );

   if ( !len ) { fprintf( stderr, "timestr error\n" ); abort(); }
   return( timbuf );
}

time_t strtime( char *str )
{  struct tm ts;
   char *tok, *tmpstr;

   strncpy( timbuf, str, TIM_BUF_SIZE ); /* Copy the string as we are about to
                                            mess it up */
   tok = strtok( timbuf, "- :" );
   ts.tm_mday = strtol( tok, NULL, 10 );
   tok = strtok( NULL, "- :" );
   tmpstr = strstr( monthnames, tok );
   if ( tmpstr == NULL ) { fprintf( stderr, "strtime error\n" ); abort(); }
   ts.tm_mon = ( tmpstr - monthnames ) / 3;
   tok = strtok( NULL, "- :" );
   ts.tm_year = strtol( tok, NULL, 10 ) - 1900;
   tok = strtok( NULL, "- :" );
   ts.tm_hour = strtol( tok, NULL, 10 );
   tok = strtok( NULL, "- :" );
   ts.tm_min = strtol( tok, NULL, 10 );
   ts.tm_sec = 0;
   ts.tm_isdst = 0;
   if ( ts.tm_mon > 3 && ts.tm_mon < 10 ) ts.tm_isdst = 1;
   return( mktime( &ts ));
}

#define MAX_BUFFER_SIZE 2048

int fastcopy( char *srcname, char *dstname, int omode )
{  struct stat srcstat;
   int srcdes, dstdes;
   char *buffer;
   size_t fsize, ssize;

   if ( stat( srcname, &srcstat ) != 0 )
   {  perror( "Source stat error" );
      return( 0 );
   }

   srcdes = open( srcname, O_RDONLY );
   if ( srcdes == -1 )
   {  perror( "FastCopy - Error opening source" );
      return( 0 );
   }
   dstdes = open( dstname, O_WRONLY | O_CREAT | O_TRUNC, omode );
   if ( dstdes == -1 )
   {  perror( "FastCopy - Error opening destinatio" );
      return( 0 );
   }

   fsize = ssize = srcstat.st_size;
   if ( ssize > MAX_BUFFER_SIZE ) ssize = MAX_BUFFER_SIZE;
   buffer = (char *)malloc( ssize );
   if ( buffer == NULL )
   {  fprintf( stderr, "File too big for fast copy." );
      return( 0 );
   }

   while ( fsize > 0 )
   {  if ( read( srcdes, buffer, ssize ) != ssize )
      {  perror( "FastCopy - Error reading" );
         free( buffer );
         close( srcdes );
         close( dstdes );
         return( 0 );
      }
      if ( write( dstdes, buffer, ssize ) != ssize )
      {  perror( "FastCopy - Error writing" );
         free( buffer );
         close( srcdes );
         close( dstdes );
         return( 0 );
      }
      fsize -= ssize;
      if ( fsize < ssize ) ssize = fsize;
   }
   free( buffer );
   if ( close( dstdes ) != 0 )
   {  perror( "FastCopy - Error closing destination" );
      close( srcdes );
      return( 0 );
   }
   chmod( dstname, omode );
   if ( close( srcdes ) != 0 )
   {  perror( "FastCopy - Error closing source" );
      return( 0 );
   }
   return( 1 );
}

int execcmd( char **argv )    /* execute UNIX command supplying args */
                              /* returns exit status of child */
{                             /* errno will be set if this is -1 */
    register pid_t pid;
    int s;

    if ((pid = fork()) == 0)
    {
        _exit(execvp( argv[0], argv ));
    }
    if (pid == -1)
    {
        return(-1);     /* vfork() failed */
    }
    while (wait(&s) != pid);
    return( WEXITSTATUS( s )); /* exit status of child */
}

int execcmdstr( char *command )
{  int argc = 0;
   char *argv[100];
   char *tok = command, *tmpstr = command;

   while( tok != NULL )
   {  tok = strtok( tmpstr, " " );
      argv[ argc ] = tok;
      argc++;
      tmpstr = NULL;
   }
   return( execcmd( argv ));
}
