/* $Id: rtof_real.c,v 34.2 1995/03/29 13:04:11 ella Exp $ */


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
30:08:94  33.001  ELLA  NewConFig Install in new configuration management
                                  system old version was 2.2 
29:03:95  34.002  ELLA  Modcprght Change copyright header
??:??:??   ?.???  ????
*/

/* DEC/CMS REPLACEMENT HISTORY, Element RTOF_REAL.C */
/* *1    18-JAN-1990 11:57:27 ELLADEV "Provisional (and temporary) for Release 4, stored in CMS library */
/*[elladev.cms.ella_server]. IM" */
/* DEC/CMS REPLACEMENT HISTORY, Element RTOF_REAL.C */
/*     R_TO_F


Description:
    Convertion of host real to decimal character string.

Inputs:
    The input operands are described by
    X = x_addr
    A query value is indicated by the x_known input being FALSE.

Outputs:
    The result is stored at &r_addr[0] as string whose character part
    is r_length bytes.  It will always be defined (non-query) unless the
    input was query.

Workspace required: None

Design: See in-line comments

*/

#include <stdio.h>
#include "biops.h"
#include "check_error.h"
#include "size_switch.h"
#include "handle.h"


#if SIZE==1
static char rcsid[] = "$Id: rtof_real.c,v 34.2 1995/03/29 13:04:11 ella Exp $ (SIZE==1)";

void R_TO_F_1
#else
static char rcsid[] = "$Id: rtof_real.c,v 34.2 1995/03/29 13:04:11 ella Exp $ (SIZE==2)";

void R_TO_F_2
#endif
(x_known, x_addr, r_length, r_addr, wrkspc)
   
    unsigned char *r_addr, *wrkspc;
    SIZETYPE	  *x_addr;
    BOOL	  x_known;
    int		  r_length;   
{

    static char decimal[40];		/* Ample space for working */

    int length = 0;
    int i, j;

#define qf_result ((qf)qfalign(r_addr))

    unsigned char *string_result = adjustaddress(dsalign((char *)qf_result + 
                                                 qfsize), r_length) ;

    *qf_result = 0;			/* Defaults in case interrupted	*/
    for (i=0; i < r_length; i++)	/* or error, or input query	*/
	string_result [i] = (char) 0;


    if (x_known
#ifdef apollo
	&& !(CHECK_SPECI (x_addr))
#endif
	) {
ULTRIX_FPE_GUARD
#if SIZE==1
	sprintf (decimal, "%.7e", *x_addr);
#else
	sprintf (decimal, "%.16e", *x_addr);
#endif
ULTRIX_FPE_GUARD_END
	length = strlen (decimal);
	if (length > r_length)
	    length = 0;
#ifdef apollo
	if (errEvt) length = 0;
#endif
    }


    if (length > 0) {
        /* Convert character representation */
	j = row_start (string_result, 0, r_length*8) - string_result;
        for (i=0; j >= 0 && j < r_length; i++)
	    if (i >= length)
		string_result [j succ] = 14;
	    else if (decimal [i] >= '0' && decimal [i] <= '9')
		string_result [j succ] = decimal [i] - '0' + 1;
	    else if (decimal [i] == 'e')
		string_result [j succ] = 11;
	    else if (decimal [i] == '-')
		string_result [j succ] = 12;
	    else if (decimal [i] == '.')
		string_result [j succ] = 13;
	*qf_result = 1;
    }

    return;			/* Return answer */
}







