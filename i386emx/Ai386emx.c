/* $Id: Ai386emx.c,v 34.5 1995/03/29 13:00:57 ella Exp $ */


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

14:12:94  33.001  ELLA   Porting    PC    Created to fill ANSI / emx
                                   differences to POSIX.1 for PC OS/2.  DCT 
14:12:94  33.002  ELLA   Porting    Put %s instead of .s in print in proc
                                   error. 
31:01:95  33.003  DCT   PCPort-1  Botched ttyname for is_terminal.
23:03:95  33.004  DJS   Porting   Changed error proc to use stderr instead of
                                  stdout
29:03:95  34.005  ELLA  Modcprght Change copyright header
??:??:??   ?.???  ????
*/

#include <stdio.h>
#include "Ai386emx.h"

int error (char *msg) { fprintf(stderr, "No %s\n", msg); return -1; }

/*  ossignals - <signal.h>  */

int sigaction(int sig, void (*act)(), void (*oact)())
    { return error("sigaction"); }
int sigdelset(void (*set)(), int signo)
    { return error("sigdelset"); }
int sigemptyset(void (*set)())
    { return error("sigemptyset"); }
int sigfillset(void (*set)())
    { return error("sigfillset"); }
int sigismember(void (*set)(), int signo)
    { return error("sigismember"); }
int sigprocmask(int how, void (*set)(), void (*oset)())
    { return error("sigprocmask"); }
int sigsuspend(unsigned sigmask)
    { return error("sigsuspend"); }
int sigaddset(void (*set)(), int signo)
    { return error("sigaddset"); }


/*  osfiles - <unistd.h>  */

void *ttyname(int fildes)
    /* horrible botch to make is_terminal in osfiles return TRUE.  DCT */
    { return (void *)"not known"; }


/*  osmisc - <unistd.h>  */

long int sysconf(int name)
    { return error("sysconf"); }
