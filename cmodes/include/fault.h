
             /* fault header file */

#ifndef _fault_h
#define _fault_h

CF_HEADER( fault_h_init, \
    "$Id: fault.h,v 2.3 1995/03/29 13:35:58 ella Exp $" )


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
17:06:94   1.002  DJS   InsUtils  Remove rubish that got in while trying to put
                                  in the header. 
29:03:95   2.003  ELLA  Modcprght Change copyright message
??:??:??   ?.???  ????
*/

#define PANIC(reason) (panic(__FILE__,__LINE__,reason))
#define FAULT(reason) (fault(__FILE__,__LINE__,reason))
#define UNEXPECTED_ERROR "Unexpected error"

#ifndef EXIT_SUCCESS
#define EXIT_SUCCESS 0
#define EXIT_FAILURE 1
#endif

extern void panic( char *filename, int line, char *reason );

extern void fault( char *filename, int line, char *reason );

#endif
