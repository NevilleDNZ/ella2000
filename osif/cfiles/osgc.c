
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

                         Crown Copyright, (c)   1995

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

*/
/* UNAME:IBCAOSI */
#include "Asupport.h"
A_ISTRUCT(A68_CHAR ,16000000,A68t31);
typedef struct A68t31  A68_31 ;    /* STRUCT 16000000 CHAR */
A_ISTRUCT(struct A68t31 *,16000000,A68t32);
typedef struct A68t32  A68_32 ;    /* STRUCT 16000000 REF MODE31 */

A_PROCEDURE(A68_VOID ,A68t33,(struct A68t31 *,A68_VC *),(struct A68t31 *,A68_VC *,void *));
typedef struct A68t33  A68_33 ;    /* PROC(REF MODE31) REF MODE26 */

A_PROCEDURE(A68_CHAR *,A68t34,(A68_VC ),(A68_VC ,void *));
typedef struct A68t34  A68_34 ;    /* PROC(MODE26) REF CHAR */
A_VECTOR(A68_INT ,A68t35);
typedef struct A68t35  A68_35 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_INT *,A68t36,(struct A68t35 ),(struct A68t35 ,void *));
typedef struct A68t36  A68_36 ;    /* PROC(MODE35) REF INT */

A_PROCEDURE(A68_CHAR *,A68t37,(struct A68t31 *),(struct A68t31 *,void *));
typedef struct A68t37  A68_37 ;    /* PROC(REF MODE31) REF CHAR */

A_PROCEDURE(struct A68t31 *,A68t38,(A68_CHAR *),(A68_CHAR *,void *));
typedef struct A68t38  A68_38 ;    /* PROC(REF CHAR) REF MODE31 */

A_PROCEDURE(A68_VOID ,A68t39,(void),(void *));
typedef struct A68t39  A68_39 ;    /* PROC VOID */
struct A68t40{
A68_BITS * Cp;
struct A68t31 * Env;
};
typedef struct A68t40  A68_40 ;    /* STRUCT(REF BITS,REF MODE31)  */

A_PROCEDURE(struct A68t40 *,A68t41,(struct A68t39 *),(struct A68t39 *,void *));
typedef struct A68t41  A68_41 ;    /* PROC(REF MODE39) REF MODE40 */

A_PROCEDURE(A68_VOID ,A68t42,(struct A68t39 ,struct A68t40 *),(struct A68t39 ,struct A68t40 *,void *));
typedef struct A68t42  A68_42 ;    /* PROC(MODE39) MODE40 */

A_PROCEDURE(A68_VOID ,A68t43,(A68_INT ),(A68_INT ,void *));
typedef struct A68t43  A68_43 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_VOID ,A68t44,(struct A68t43 ,struct A68t40 *),(struct A68t43 ,struct A68t40 *,void *));
typedef struct A68t44  A68_44 ;    /* PROC(MODE43) MODE40 */

A_PROCEDURE(A68_VOID ,A68t45,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t45  A68_45 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t46,(A68_VC *),(A68_VC *,void *));
typedef struct A68t46  A68_46 ;    /* PROC REF MODE26 */
struct A68t48 ;
struct A68t49 ;

A_PROCEDURE(A68_VOID ,A68t47,(A68_INT ,struct A68t48 ,struct A68t49 ),(A68_INT ,struct A68t48 ,struct A68t49 ,void *));
typedef struct A68t47  A68_47 ;    /* PROC(INT,MODE48,MODE49) VOID */
A_VECTOR(A68_VC ,A68t48);
typedef struct A68t48  A68_48 ;    /* VECTOR [] MODE26 */
struct A68t50 ;

A_PROCEDURE(A68_VOID ,A68t49,(struct A68t50 ,struct A68t48 ),(struct A68t50 ,struct A68t48 ,void *));
typedef struct A68t49  A68_49 ;    /* PROC(MODE50,MODE48) VOID */
struct A68t50{
A68_INT  Number;
A_PAD_INT(PAD_1)
struct A68t51 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_2)
};
typedef struct A68t50  A68_50 ;    /* STRUCT(INT,REF MODE51,BITS)  */
A_VECTOR(struct A68t53 ,A68t52);
typedef struct A68t52  A68_52 ;    /* VECTOR [] MODE53 */
struct A68t53{
struct A68t50  Msgno;
A68_VC  Text;
};
typedef struct A68t53  A68_53 ;    /* STRUCT(MODE50,REF MODE26)  */
struct A68t51{
A68_VC  Name;
struct A68t52  Messages;
};
typedef struct A68t51  A68_51 ;    /* STRUCT(REF MODE26,REF MODE52)  */

A_PROCEDURE(A68_INT *,A68t54,(A68_INT *,A68_VC ),(A68_INT *,A68_VC ,void *));
typedef struct A68t54  A68_54 ;    /* PROC(REF INT,MODE26) REF INT */

A_PROCEDURE(A68_VOID ,A68t55,(A68_VC ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t55  A68_55 ;    /* PROC(REF MODE26,INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t56,(A68_VC ,A68_CHAR ,A68_VC *),(A68_VC ,A68_CHAR ,A68_VC *,void *));
typedef struct A68t56  A68_56 ;    /* PROC(REF MODE26,CHAR) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t57,(A68_VC ,A68_CHAR ,A68_VC *),(A68_VC ,A68_CHAR ,A68_VC *,void *));
typedef struct A68t57  A68_57 ;    /* PROC(MODE26,CHAR) MODE26 */

A_PROCEDURE(A68_VOID ,A68t58,(struct A68t48 ,A68_VC *),(struct A68t48 ,A68_VC *,void *));
typedef struct A68t58  A68_58 ;    /* PROC(MODE48) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t59,(A68_CHAR ,A68_VC ),(A68_CHAR ,A68_VC ,void *));
typedef struct A68t59  A68_59 ;    /* PROC(CHAR,MODE26) INT */

A_PROCEDURE(A68_VOID ,A68t60,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t60  A68_60 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t61,(A68_VC ,A68_CHAR ),(A68_VC ,A68_CHAR ,void *));
typedef struct A68t61  A68_61 ;    /* PROC(REF MODE26,CHAR) VOID */
A_ISTRUCT(A68_CHAR ,4,A68t62);
typedef struct A68t62  A68_62 ;    /* STRUCT 4 CHAR */

A_PROCEDURE(struct A68t62 ,A68t63,(A68_INT ),(A68_INT ,void *));
typedef struct A68t63  A68_63 ;    /* PROC(INT) MODE62 */

A_PROCEDURE(A68_INT ,A68t64,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t64  A68_64 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_VOID ,A68t65,(A68_CHAR ,A68_VC ,A68_VC *),(A68_CHAR ,A68_VC ,A68_VC *,void *));
typedef struct A68t65  A68_65 ;    /* PROC(CHAR,REF MODE26) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t66,(A68_VC ),(A68_VC ,void *));
typedef struct A68t66  A68_66 ;    /* PROC(MODE26) INT */

A_PROCEDURE(A68_BITS ,A68t67,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t67  A68_67 ;    /* PROC(BITS,BITS) BITS */

A_PROCEDURE(A68_LBITS ,A68t68,(A68_LBITS ,A68_LBITS ),(A68_LBITS ,A68_LBITS ,void *));
typedef struct A68t68  A68_68 ;    /* PROC(LONG BITS,LONG BITS) LONG BITS */

A_PROCEDURE(A68_BITS *,A68t69,(A68_BITS *,A68_BITS ),(A68_BITS *,A68_BITS ,void *));
typedef struct A68t69  A68_69 ;    /* PROC(REF BITS,BITS) REF BITS */

A_PROCEDURE(A68_VOID ,A68t70,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t70  A68_70 ;    /* PROC(INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t71,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t71  A68_71 ;    /* PROC(INT,INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t72,(A68_LINT ,A68_INT ,A68_VC *),(A68_LINT ,A68_INT ,A68_VC *,void *));
typedef struct A68t72  A68_72 ;    /* PROC(LONG INT,INT) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t73,(A68_CHAR ,A68_INT *,A68_VC ),(A68_CHAR ,A68_INT *,A68_VC ,void *));
typedef struct A68t73  A68_73 ;    /* PROC(CHAR,REF INT,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t74,(A68_LBITS ,A68_INT ,A68_VC *),(A68_LBITS ,A68_INT ,A68_VC *,void *));
typedef struct A68t74  A68_74 ;    /* PROC(LONG BITS,INT) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t75,(A68_INT *,A68_VC ),(A68_INT *,A68_VC ,void *));
typedef struct A68t75  A68_75 ;    /* PROC(REF INT,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t76,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t76  A68_76 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t77,(struct A68t39 ),(struct A68t39 ,void *));
typedef struct A68t77  A68_77 ;    /* PROC(MODE39) VOID */

A_PROCEDURE(A68_VOID ,A68t78,(A68_VC ),(A68_VC ,void *));
typedef struct A68t78  A68_78 ;    /* PROC(MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t79,(struct A68t78 ),(struct A68t78 ,void *));
typedef struct A68t79  A68_79 ;    /* PROC(MODE78) VOID */

A_PROCEDURE(A68_VOID ,A68t80,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t80  A68_80 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,51,A68t81);
typedef struct A68t81  A68_81 ;    /* STRUCT 51 CHAR */

A_PROCEDURE(A68_INT ,A68t82,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t82  A68_82 ;    /* PROC(MODE26,INT) INT */

A_PROCEDURE(A68_VOID ,A68t83,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t83  A68_83 ;    /* PROC(BITS) VOID */
A_ISTRUCT(A68_CHAR ,13,A68t84);
typedef struct A68t84  A68_84 ;    /* STRUCT 13 CHAR */
struct A68t85{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_3)
};
typedef struct A68t85  A68_85 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t86,(A68_BOOL ,struct A68t85 *),(A68_BOOL ,struct A68t85 *,void *));
typedef struct A68t86  A68_86 ;    /* PROC(BOOL) MODE85 */
#define A68_87  A68_VC 
#define A68t87 A68t26            /* FLEX VECTOR [] CHAR */
#define A68_88  A68_85 
#define A68t88 A68t85            /* STRUCT(MODE87,INT)  */
A_VECTOR(struct A68t85 ,A68t89);
typedef struct A68t89  A68_89 ;    /* VECTOR [] MODE85 */

A_PROCEDURE(A68_VOID ,A68t90,(struct A68t89 ,struct A68t49 ),(struct A68t89 ,struct A68t49 ,void *));
typedef struct A68t90  A68_90 ;    /* PROC(MODE89,MODE49) VOID */
A_ISTRUCT(A68_VC ,2,A68t91);
typedef struct A68t91  A68_91 ;    /* STRUCT 2 MODE26 */

A_PROCEDURE(A68_INT ,A68t92,(A68_VC ,struct A68t49 ),(A68_VC ,struct A68t49 ,void *));
typedef struct A68t92  A68_92 ;    /* PROC(MODE26,MODE49) INT */
A_ISTRUCT(A68_CHAR ,12,A68t93);
typedef struct A68t93  A68_93 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(A68_CHAR ,18,A68t94);
typedef struct A68t94  A68_94 ;    /* STRUCT 18 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from usefulops --- */
/* --- End of imports from usefulops --- */


/* --- Imports from oserrors --- */
#include <errno.h>

#define XFBAOSI_errno errno
extern A68_VOID  YHBAOSI_osifmessage(A68_INT ,struct A68t48 ,struct A68t49 );
extern A68_49  ZLBAOSI_global_msg;
/* --- End of imports from oserrors --- */


/* --- Imports from cif --- */
#include <stdio.h>

#define QDAAOSI_nullccharptr NULL
/**/

#define DFAAOSI_shortshortmaxint (A68_SSINT)A68_MAX_SSINT
/**/

#define EFAAOSI_shortmaxint (A68_SINT)A68_MAX_SINT
/**/

#define FFAAOSI_maxint (A68_INT)A68_MAX_INT
/**/

#define GFAAOSI_longmaxint (A68_LINT)A68_MAX_LINT
/**/

#define HFAAOSI_maxabschar (A68_INT)A68_MAX_CHAR
/**/

#define IFAAOSI_bitswidth A_SZ_BITS
/* --- End of imports from cif --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void WPAAOSI(void);   /* usefulops */
extern void SFBAOSI(void);   /* oserrors */
extern void JDAAOSI(void);   /* cif */
/* --- end of DECS initialisation functions --- */
static A68_81   MBCAOSI = {"$Id: osgc.a68,v 34.4 1995/03/29 13:01:36 ella Exp $"}; 
A_GISVEC(A68_VC ,NBCAOSI,MBCAOSI,51)
#include "Alibrary.h"
#define A_PARAM(name,value) A_int_INT(Agc_param(A_VC_charptr(name),A_INT_int(value)))

#define OBCAOSI_gc_param A_PARAM
#include "Alibrary.h"

#define PBCAOSI_garbage_collect Agc_collect
A68_48  RBCAOSI_gc_diag_options;
static A68_84   WBCAOSI = {"gc_statistics"}; 
A_GISVEC(A68_VC ,XBCAOSI,WBCAOSI,13)
A68_86  ZBCAOSI_anonymous;
static A68_62   RCCAOSI = {"SET "}; 
A_GISVEC(A68_VC ,SCCAOSI,RCCAOSI,4)
static A68_84   VCCAOSI = {"set_gc_params"}; 
A_GISVEC(A68_VC ,WCCAOSI,VCCAOSI,13)
static A68_62   BDCAOSI = {"GET "}; 
A_GISVEC(A68_VC ,CDCAOSI,BDCAOSI,4)
static A68_93   GDCAOSI = {"get_gc_param"}; 
A_GISVEC(A68_VC ,HDCAOSI,GDCAOSI,12)
#include "Alibrary.h"

#define KDCAOSI_alwayscollect A_ALWAYS_COLLECT
#include "Alibrary.h"

#define LDCAOSI_alwaysgrowheap A_ALWAYS_GROW_HEAP
#include "Alibrary.h"

#define MDCAOSI_defaultpolicy A_DEFAULT_POLICY
static A68_INT  NDCAOSI_savedpolicy;
static A68_94   PDCAOSI = {"THRESHOLD FUNCTION"}; 
A_GISVEC(A68_VC ,QDCAOSI,PDCAOSI,18)
static A68_94   SDCAOSI = {"THRESHOLD FUNCTION"}; 
A_GISVEC(A68_VC ,TDCAOSI,SDCAOSI,18)
static A68_94   XDCAOSI = {"THRESHOLD FUNCTION"}; 
A_GISVEC(A68_VC ,YDCAOSI,XDCAOSI,18)

A68_VOID  TBCAOSI_set_gc_diagnostics(A68_BITS  Options);

A68_VOID  VBCAOSI_gc_statistics(A68_78  Line);

A_STATIC A68_VOID  BCCAOSI_generator(A68_BOOL  ACCAOSI_anonymous, A68_85  *ReturnedValue);

A_STATIC A68_VOID  DCCAOSI_generator(A68_BOOL  CCCAOSI_anonymous, A68_VC  *ReturnedValue);

A68_VOID  NCCAOSI_set_gc_params(A68_89  Gcparams, A68_49  Msg);

A68_INT  ADCAOSI_get_gc_param(A68_VC  Name, A68_49  Msg);

A68_VOID  ODCAOSI_disable_garbage_collector(void);

A68_VOID  VDCAOSI_enable_garbage_collector(void);

A_STATIC A68_VOID  DCCAOSI_generator(A68_BOOL  CCCAOSI_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  ECCAOSI;  /* clause result */
A68_VC  FCCAOSI;  /* OPERATORS - dynamic generator */
{ 
FCCAOSI.upb = 0 ;
( CCCAOSI_anonymous? A_VLOC(A68_CHAR ,FCCAOSI): A_VHEAP(A68_CHAR ,FCCAOSI) );
ECCAOSI = FCCAOSI;
} 
*ReturnedValue = (ECCAOSI);
return;
} 
#undef NL

A68_VOID  TBCAOSI_set_gc_diagnostics(A68_BITS  Options)
{ 
A_PROC_ENTRY(set_gc_diagnostics);
 /* line 71: */
/*SKIP*/;
A_PROC_EXIT(set_gc_diagnostics);
return;
} 
#undef NL

A68_VOID  VBCAOSI_gc_statistics(A68_78  Line)
{ 
A68_48  YBCAOSI;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(gc_statistics);
 /* line 77: */
{ 
YHBAOSI_osifmessage(100, A_HVEC(YBCAOSI,XBCAOSI,A68_VC ), ZLBAOSI_global_msg);
/*SKIP*/;
} 
A_PROC_EXIT(gc_statistics);
return;
} 
#undef NL

A_STATIC A68_VOID  BCCAOSI_generator(A68_BOOL  ACCAOSI_anonymous, A68_85  *ReturnedValue)
{ 
A68_88  GCCAOSI_anonymous;
A68_VC  HCCAOSI;  /* avoid structure result */
A68_87 * ICCAOSI;  /* YIELD */
A68_85  JCCAOSI;  /* clause result */
{ 
DCCAOSI_generator( ACCAOSI_anonymous, &HCCAOSI );
ICCAOSI = (&((&GCCAOSI_anonymous)->Name)) ;
(*ICCAOSI) = HCCAOSI;
JCCAOSI = GCCAOSI_anonymous;
} 
*ReturnedValue = (JCCAOSI);
return;
} 
#undef NL

A68_VOID  NCCAOSI_set_gc_params(A68_89  Gcparams, A68_49  Msg)
{ 
A68_85  OCCAOSI_p;
A68_85 * PCCAOSI;  /* forall control - []x */
A68_INT  QCCAOSI;  /* forall loop counter */
A68_VC  TCCAOSI;  /* OPERATORS - scalar -> [] or VEC[] */
A68_91  UCCAOSI;  /* collateral clause result */
A68_48  XCCAOSI;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(set_gc_params);
 /* line 85: */
 /* line 86: */
QCCAOSI = Gcparams.upb -1;
PCCAOSI = Gcparams.data;
for (;QCCAOSI-- >= 0;
(PCCAOSI++
) )
{
OCCAOSI_p = *PCCAOSI;
 /* line 87: */
 /* line 88: */
 /* line 89: */
 /* line 90: */
if ( (OBCAOSI_gc_param(A_VC_PLUS(A_VC_PLUS(SCCAOSI,OCCAOSI_p.Name),A_HVEC(TCCAOSI,'\000',A68_CHAR )), OCCAOSI_p.Value)!=OCCAOSI_p.Value) )
{ 
UCCAOSI.data[0] = WCCAOSI;
UCCAOSI.data[1] = OCCAOSI_p.Name;
 /* line 91: */
 /* line 92: */
YHBAOSI_osifmessage(99, A_HISVEC(XCCAOSI,UCCAOSI,2,A68_VC ), Msg);
} 
}
A_PROC_EXIT(set_gc_params);
return;
} 
#undef NL

A68_INT  ADCAOSI_get_gc_param(A68_VC  Name, A68_49  Msg)
{ 
A68_VC  DDCAOSI;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  EDCAOSI_value;
A68_91  FDCAOSI;  /* collateral clause result */
A68_48  IDCAOSI;  /* OPERATORS - istruct -> vector */
A68_INT  JDCAOSI;  /* clause result */
A_PROC_ENTRY(get_gc_param);
 /* line 95: */
 /* line 96: */
{ 
EDCAOSI_value = OBCAOSI_gc_param(A_VC_PLUS(A_VC_PLUS(CDCAOSI,Name),A_HVEC(DDCAOSI,'\000',A68_CHAR )), 0);
 /* line 97: */
 /* line 98: */
 /* line 99: */
 /* line 100: */
if ( (EDCAOSI_value==(-1)) )
{ 
FDCAOSI.data[0] = HDCAOSI;
FDCAOSI.data[1] = Name;
 /* line 101: */
YHBAOSI_osifmessage(99, A_HISVEC(IDCAOSI,FDCAOSI,2,A68_VC ), Msg);
} 
 /* line 102: */
 /* line 103: */
JDCAOSI = EDCAOSI_value;
} 
A_PROC_EXIT(get_gc_param);
return( JDCAOSI );
} 
#undef NL

A68_VOID  ODCAOSI_disable_garbage_collector(void)
{ 
A68_85  RDCAOSI;  /* collateral clause result */
A68_89  UDCAOSI;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(disable_garbage_collector);
{ 
NDCAOSI_savedpolicy = ADCAOSI_get_gc_param(QDCAOSI, ZLBAOSI_global_msg);
 /* line 114: */
RDCAOSI.Name = TDCAOSI;
RDCAOSI.Value = LDCAOSI_alwaysgrowheap;
 /* line 115: */
NCCAOSI_set_gc_params(A_HVEC(UDCAOSI,RDCAOSI,A68_85 ), ZLBAOSI_global_msg);
} 
A_PROC_EXIT(disable_garbage_collector);
return;
} 
#undef NL

A68_VOID  VDCAOSI_enable_garbage_collector(void)
{ 
A68_85  WDCAOSI;  /* collateral clause result */
A68_89  ZDCAOSI;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(enable_garbage_collector);
WDCAOSI.Name = YDCAOSI;
WDCAOSI.Value = NDCAOSI_savedpolicy;
NCCAOSI_set_gc_params(A_HVEC(ZDCAOSI,WDCAOSI,A68_85 ), ZLBAOSI_global_msg);
A_PROC_EXIT(enable_garbage_collector);
return;
} 
#undef NL
 /* line 1: */
 /* line 5: */
void JBCAOSI(void)   /* initialise DECS osgc */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","./mfiles","-staredit","259","./a68files/osgc.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/usefulops.m","./mfiles/oserrors.m","./mfiles/cif.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_48  QBCAOSI;  /* OPERATORS - vacuum */
A68_86  KCCAOSI;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
WPAAOSI();   /* USE usefulops */
SFBAOSI();   /* USE oserrors */
JDAAOSI();   /* USE cif */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/osif/assoc/./a68files/osgc.a68";
A_config.translation_time = "Tue Apr  4 09:24:45 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "IBCAOSI (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 09:24:45 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS osgc);
UEAALIB_a68config(LGAALIB_configinfo, NBCAOSI);
 /* line 54: */
 /* line 55: */
 /* line 56: */
 /* line 57: */
 /* line 62: */
 /* line 63: */
 /* line 65: */
RBCAOSI_gc_diag_options = A_VVAC(QBCAOSI);
 /* line 67: */
 /* line 73: */
 /* line 79: */
KCCAOSI.fn.fn_global = BCCAOSI_generator;
KCCAOSI.nonlocals = A68_NIL;
ZBCAOSI_anonymous = KCCAOSI;
 /* line 81: */
 /* line 94: */
 /* line 105: */
 /* line 106: */
 /* line 107: */
 /* line 109: */
 /* line 111: */
 /* line 112: */
 /* line 113: */
 /* line 117: */
 /* line 118: */
 /* line 120: */
 /* line 122: */
 /* line 130: */
/*SKIP*/;
A_PROC_EXIT(DECS osgc);
} 
#undef NL
/* end of translation of ./a68files/osgc.a68 */
