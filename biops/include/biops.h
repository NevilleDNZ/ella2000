/* $Id: biops.h,v 34.2 1995/03/29 13:04:19 ella Exp $ */


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
                                  system old version was 1.3 
29:03:95  34.002  ELLA  Modcprght Change copyright header
??:??:??   ?.???  ????
*/

#ifndef BIOPS_H
#define BIOPS_H
static char *sccsid_biops_h = " $Id: biops.h,v 34.2 1995/03/29 13:04:19 ella Exp $ ";
/* DEC/CMS REPLACEMENT HISTORY, Element BIOPS.H */
/* *6    10-AUG-1989 12:16:06 ELLADEV "Definitive release 4.0, first provisional release 4.1. BGH" */
/* *5    30-JUN-1989 17:12:50 ELLADEV "Updated provisional with fixes for R4B383. BGH" */
/* *4    26-JUN-1989 18:04:39 ELLADEV "Updated provisional with fixes for R4B380. BGH" */
/* *3    28-FEB-1989 14:55:26 ELLADEV "Updated provisional with fixes for R4B043. BGH" */
/* *2    21-JAN-1989 11:07:58 ELLADEV "Provisional for Release 4.0 BGH" */
/* *1    17-JAN-1989 16:53:39 ELLADEV "first draft for Release 4.0, stored in CMS lib [elladev.cms.ella_server]""" */
/* DEC/CMS REPLACEMENT HISTORY, Element BIOPS.H */
/* Header file for BIOPS */

#define PLUS 1
/* 29:06:89  Changes for VAX.  SPT.
 */
#define MINUS 0
#define TRUE 1
#define FALSE 0
#define BASE 256
#define base_10 10
#define POSITIVE 0
#define NEGATIVE 1
#define twovalued_QUERY  0
#define twovalued_FALSE  1
#define twovalued_TRUE   2
#define int32 long int

#ifdef vax

#define nth(row, len,n) &(row)[(len) - 1 - (n)]
#define before_or_at(x,y) (x) >= (y)
#define after_or_at(x,y) (x) <= (y)
#define after(x,y) (x) < (y)
#define succ --
#define pred ++
#define alongby -
#define backby +
#define row_start(addr, offset, length) \
	((addr) + (((offset) + (length) - 1) / 8) - ((offset) / 8))
#define row_end(addr, offset, length) (addr)
#define offswitch(addr, offset, length) \
	addr =  (char *) (addr) + (offset)/8; \
	offset = (8 - ((offset) + (length)) % 8) % 8; \
	/* Change offset and address for msb offset from lsb offset supplied */
#define adjustaddress(addr, bytelength) ((addr) + (4 - ((bytelength) % 4)) % 4)
	/* advance address to ensure msb at correct byte for longword length */
#else

#define nth(row, len,n) &(row)[n]
#define before_or_at(x,y) (x) <= (y)
#define after_or_at(x,y) (x) >= (y)
#define after(x,y) (x) > (y)
#define succ ++
#define pred --
#define alongby +
#define backby -
#define row_start(addr, offset, length) ((addr) + ((offset) / 8))
#define row_end(addr, offset, length) ((addr) + (((offset) + (length) - 1) / 8))
#define offswitch(addr, offset, length) /* No change.  Offset is from msb. */
#define adjustaddress(addr, bytelength) (addr) /* No change. */

#endif

#define tvsize 4
#define qfsize 4
#define eisize 4
#define eesize 4
#define bssize(bitlen) ((((bitlen)+31)/32)*4)
#define dssize(bitlen) (((bitlen)+3) & ~3)

#define tvalign(x) (x)
#define qfalign(x) (x)
#define eialign(x) (x)
#define eealign(x) (x)
#define bsalign(x) (x)
#define dsalign(x) (x)

typedef unsigned int32 *tv;
typedef unsigned int32 *qf;
typedef          int32 *ei;
typedef unsigned int32 *ee;
typedef unsigned char  *bs;

#define first(row, len) nth(row, len, 0)
#define last(row, len) nth(row, len, (len) - 1)
#define next(x) (x)succ
#define next_lower(x) (x)pred

#define for1(ptr, row, len) \
    for ((ptr) = first(row,len); before_or_at(ptr, last(row,len)); next(ptr))
#define for2(ptr, row, len) \
    for ((ptr) = last(row, len); after_or_at(ptr, first(row,len)); \
	next_lower(ptr))

#define min(A, B) ((A) < (B) ? (A) : (B))
#define max(A, B) ((A) > (B) ? (A) : (B))

typedef char BOOL;
#endif /* BIOPS_H */
