/* $Id: Ai386emx.h,v 34.2 1995/03/29 13:00:58 ella Exp $ */


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

14:12:94  33.001  ELLA   Porting    PC    Created to hide ANSI / PC differences
                                   under emx.  DCT 
29:03:95  34.002  ELLA  Modcprght Change copyright header
??:??:??   ?.???  ????
*/

/*    Definitions for oserrors, osmisc and ossignals   */

#ifndef Ai386emx_h
#define Ai386emx_h

#include <setjmp.h>

/*  setjmp different under emx  -- include:Atypes.h  */

#define sigjmp_buf           jmp_buf
#define siglongjmp(there, n) longjmp(there, n)
#define sigsetjmp(here, n)   setjmp(here)


/*  Extra Errors in POSIX over ANSI  -- osif:oserrors.a68  */

#define EBUSY      101
#define EDEADLK    102
#define EFAULT     103
#define EFBIG      104
#define EMLINK     105
#define ENFILE     106
#define ENODEV     107
#define ENOLCK     108
#define ENOSYS     109
#define ENOTEMPTY  110
#define ENOTTY     111
#define ENXIO      112


/*  ossignals.a68  cf <signal.h> / <sys/signal.h>  */

typedef void (*sigset_t);
struct sigaction {int sig; void (*sa_handler)();};

#define SIGSTOP  101
#define SIGTSTP  102
#define SIGCONT  103
#define SIGCHLD  SIGCLD
#define SIGTTIN  104
#define SIGTTOU  105

#define SIG_BLOCK ((void (*)(int))99)

/*  should be in <unistd.h> (for osmsic.a68)  */

#define _SC_CLK_TCK  100

/* prototypes for procs in Ai386emx.c */

extern int error (char *msg);

/*  ossignals - <signal.h>  */

extern int sigaction(int sig, void (*act)(), void (*oact)());
extern int sigdelset(void (*set)(), int signo);
extern int sigemptyset(void (*set)());
extern int sigfillset(void (*set)());
extern int sigismember(void (*set)(), int signo);
extern int sigprocmask(int how, void (*set)(), void (*oset)());
extern int sigsuspend(unsigned sigmask);
extern int sigaddset(void (*set)(), int signo);

/*  osfiles - <unistd.h>  */

extern void *ttyname(int fildes);

/*  osmisc - <unistd.h>  */

extern long int sysconf(int name);

#endif
