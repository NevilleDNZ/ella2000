/* $Id: ftor_real.c,v 34.2 1995/03/29 13:03:59 ella Exp $ */


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

/* DEC/CMS REPLACEMENT HISTORY, Element FTOR_REAL.C */
/* *1    18-JAN-1990 11:55:55 ELLADEV "Provisional (and temporary) for Release 4, stored in CMS library */
/*{elladev.cms.ella_server]. IM" */
/* DEC/CMS REPLACEMENT HISTORY, Element FTOR_REAL.C */


/*     F_TO_R


Description:
    Convertion of decimal character string floating point to host real.

Inputs:
    The input operands are described by
    D = d_ptr (may need adjusting for padding)
    A query value is indicated by the d_known input being FALSE
    The length of the decimal string is d_length.

Outputs:
    The result is stored at &r_addr[0] as a Real bit string.
    It may be query if the input was query, or (on some machines) if
    sscanf returns zero.

Workspace required: None

Design: See in-line comments

Notes:  This implementation is restricted to 40 *significant* characters:
        there is no problem with inputs longer than 40 provided the extra
        characters are spaces.

        The exception handling on VMS relies on an unproven assertion that
        the real_result will be left unchanged on floating point error
        within sscanf.  This probably is true, given the exception
        handler we set up.
*/

#include <stdio.h>
#include "biops.h"
#include "size_switch.h"
#include "handle.h"

#define max_len 40

#if SIZE==1
static char rcsid[] = "$Id: ftor_real.c,v 34.2 1995/03/29 13:03:59 ella Exp $ (SIZE==1)";

void F_TO_R_1
#else
static char rcsid[] = "$Id: ftor_real.c,v 34.2 1995/03/29 13:03:59 ella Exp $ (SIZE==2)";

void F_TO_R_2
#endif
(d_known, d_ptr, d_length, r_addr, wrkspc)
   
    unsigned char *d_ptr, *wrkspc;
    SIZETYPE	  *r_addr;
    BOOL	  d_known;
    int		  d_length;   
{

    static char decimal[max_len];		/* Ample space for working */
    int ok = 0;
    int i, j;

    unsigned char *d_addr = adjustaddress (d_ptr, d_length);

#define qf_result ((qf)qfalign(r_addr))
#define real_result ((SIZETYPE *)bsalign((char *)qf_result + qfsize))


    *real_result = 0.0;			/* Defaults in case interrupted */
    *qf_result = 0;			/* or error, or input query	*/

#ifdef vax
    *(int *)real_result = 32768;	/* Reserved operand, in case	*/
#endif					/* sscanf is interrupted	*/


    if (d_known) {
	j = 0;
        for (i=(row_start (d_addr, 0, d_length*8) - d_addr);
	        i >= 0 && i < d_length && j < max_len - 1; i succ)
            if (d_addr [i] <= 10)
		decimal [j++] = d_addr [i] - 1 + '0';
            else if (d_addr [i] == 11)
		decimal [j++] = 'e';
            else if (d_addr [i] == 12)
		decimal [j++] = '-';
            else if (d_addr [i] == 13)
		decimal [j++] = '.';
	decimal [j] = '\0';

ULTRIX_FPE_GUARD
#if SIZE == 1
	ok = sscanf (decimal, "%e", real_result);
#else
	ok = sscanf (decimal, "%le", real_result);
#endif
ULTRIX_FPE_GUARD_END
    }


    if ((ok > 0)
#ifdef apollo
	&& (!errEvt)
#endif
#ifdef vax
	&& (*(int *)real_result != 32768)
#endif
       )
	*qf_result = 1;
    else
	*real_result = 0.0;


    return;			/* Return answer */
}







