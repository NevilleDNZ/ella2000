
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
/* UNAME:MXAAOSI */
#include "Asupport.h"

A_PROCEDURE(A68_VOID ,A68t31,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t31  A68_31 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t32,(A68_CHAR ,A68_VC *),(A68_CHAR ,A68_VC *,void *));
typedef struct A68t32  A68_32 ;    /* PROC(CHAR) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t33,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t33  A68_33 ;    /* PROC(MODE26) REF MODE26 */
struct A68t35 ;

A_PROCEDURE(A68_VOID ,A68t34,(struct A68t35 ,A68_VC *),(struct A68t35 ,A68_VC *,void *));
typedef struct A68t34  A68_34 ;    /* PROC(MODE35) REF MODE26 */
A_VECTOR(A68_VC ,A68t35);
typedef struct A68t35  A68_35 ;    /* VECTOR [] MODE26 */

A_PROCEDURE(A68_VOID ,A68t36,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t36  A68_36 ;    /* PROC(INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t37,(void),(void *));
typedef struct A68t37  A68_37 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t38,(struct A68t37 ),(struct A68t37 ,void *));
typedef struct A68t38  A68_38 ;    /* PROC(MODE37) VOID */

A_PROCEDURE(A68_VOID ,A68t39,(A68_VC ),(A68_VC ,void *));
typedef struct A68t39  A68_39 ;    /* PROC(MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t40,(struct A68t39 ),(struct A68t39 ,void *));
typedef struct A68t40  A68_40 ;    /* PROC(MODE39) VOID */

A_PROCEDURE(A68_VOID ,A68t41,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t41  A68_41 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,55,A68t42);
typedef struct A68t42  A68_42 ;    /* STRUCT 55 CHAR */
struct A68t43{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t43  A68_43 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t44,(A68_VC ,struct A68t43 *),(A68_VC ,struct A68t43 *,void *));
typedef struct A68t44  A68_44 ;    /* PROC(REF MODE26) MODE43 */

A_PROCEDURE(A68_VOID ,A68t45,(A68_VC ,A68_VC ,struct A68t43 *),(A68_VC ,A68_VC ,struct A68t43 *,void *));
typedef struct A68t45  A68_45 ;    /* PROC(REF MODE26,REF MODE26) MODE43 */
A_ISTRUCT(A68_VC ,3,A68t46);
typedef struct A68t46  A68_46 ;    /* STRUCT 3 MODE26 */
A_VECTOR(A68_VC ,A68t47);
typedef struct A68t47  A68_47 ;    /* VECTOR [] REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t48,(A68_VC ,A68_VC ,struct A68t47 *),(A68_VC ,A68_VC ,struct A68t47 *,void *));
typedef struct A68t48  A68_48 ;    /* PROC(REF MODE26,REF MODE26) REF MODE47 */
struct A68t49{
A68_VC  Arg;
struct A68t49 * Next;
};
typedef struct A68t49  A68_49 ;    /* STRUCT(REF MODE26,REF MODE49)  */
A_ISTRUCT(A68_CHAR ,1000,A68t50);
typedef struct A68t50  A68_50 ;    /* STRUCT 1000 CHAR */

A_PROCEDURE(A68_CHAR *,A68t51,(void),(void *));
typedef struct A68t51  A68_51 ;    /* PROC REF CHAR */

A_PROCEDURE(A68_VOID ,A68t52,(A68_VC *),(A68_VC *,void *));
typedef struct A68t52  A68_52 ;    /* PROC REF MODE26 */

A_PROCEDURE(A68_CHAR ,A68t53,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t53  A68_53 ;    /* PROC(CHAR) CHAR */

A_PROCEDURE(A68_VOID ,A68t54,(A68_BOOL ,struct A68t47 *),(A68_BOOL ,struct A68t47 *,void *));
typedef struct A68t54  A68_54 ;    /* PROC(BOOL) MODE47 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from strops --- */
extern A68_VOID  ZAAAOSI_makervc(A68_VC ,A68_VC *);
extern A68_VOID  JBAAOSI_concat(struct A68t35 ,A68_VC *);
/* --- End of imports from strops --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void BAAAOSI(void);   /* strops */
/* --- end of DECS initialisation functions --- */
static A68_42   QXAAOSI = {"$Id: oscommon.a68,v 34.2 1995/03/29 13:01:39 ella Exp $"}; 
A_GISVEC(A68_VC ,RXAAOSI,QXAAOSI,55)
static A68_31  SXAAOSI_anonymous;
static A68_VC  YXAAOSI_nullstr;
A68_43  BYAAOSI_nullfilename;
#define GYAAOSI_typec '.'
#define HYAAOSI_dirc '/'
static A68_INT  RZAAOSI_diff;
#define BBBAOSI_space 1
#define CBBAOSI_quoted_arg 2
#define DBBAOSI_unquoted_arg 3
typedef struct   /* env of non-global proc */
{
A68_INT * CABAOSI_windex;
A68_VC * ZZAAOSI_buffer;
} FABAOSI_write_char;
typedef struct   /* env of non-global proc */
{
A68_INT * CABAOSI_windex;
A68_VC * ZZAAOSI_buffer;
} TABAOSI_get_arg;
typedef struct   /* env of non-global proc */
{
A68_INT * YZAAOSI_no_args;
} ZBBAOSI_generator;
typedef struct   /* env of non-global proc */
{
A68_VC * ZZAAOSI_buffer;
} JABAOSI_generator;

A_STATIC A68_VOID  UXAAOSI_generator(A68_BOOL  TXAAOSI_anonymous, A68_VC  *ReturnedValue);

A68_VOID  DYAAOSI_parse_basic(A68_VC  Name, A68_43  *ReturnedValue);

A68_VOID  AZAAOSI_parse_default(A68_VC  Name, A68_VC  Default, A68_43  *ReturnedValue);

A68_VOID  UZAAOSI_parse_prompt(A68_VC  First_arg, A68_VC  Argstring, A68_47  *ReturnedValue);

A_STATIC A68_CHAR * EABAOSI_write_char(void *NonLocals);

A_STATIC A68_VOID  IABAOSI_generator(A68_BOOL  GABAOSI_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  SABAOSI_get_arg(A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_CHAR  ZABAOSI_lower(A68_CHAR  C);

A_STATIC A68_VOID  YBBAOSI_generator(A68_BOOL  WBBAOSI_anonymous, A68_47  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  IABAOSI_generator(A68_BOOL  GABAOSI_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((JABAOSI_generator *)NonLocals)->x)
{ 
A68_VC  KABAOSI;  /* clause result */
A68_VC  LABAOSI;  /* OPERATORS - dynamic generator */
{ 
LABAOSI.upb = ((*NL(ZZAAOSI_buffer)).upb+1000) ;
( GABAOSI_anonymous? A_VLOC(A68_CHAR ,LABAOSI): A_VHEAP(A68_CHAR ,LABAOSI) );
KABAOSI = LABAOSI;
} 
*ReturnedValue = (KABAOSI);
return;
} 
#undef NL

A_STATIC A68_CHAR * EABAOSI_write_char(void *NonLocals)
#define NL(x) (((FABAOSI_write_char *)NonLocals)->x)
{ 
A68_31  HABAOSI_generator;   /* proc value of non-global proc */
A68_VC  MABAOSI;  /* avoid structure result */
A68_VC  NABAOSI_new;
A68_VC  OABAOSI;  /* OPERATORS - trim index */
A68_VC  PABAOSI;  /* YIELD */
A68_CHAR * QABAOSI;  /* clause result */
A_PROC_ENTRY(write_char);
{ 
 /* line 140: */
if ( (((*NL(CABAOSI_windex))+=1)>(*NL(ZZAAOSI_buffer)).upb) )
{ 
A_CLOSURE( HABAOSI_generator, IABAOSI_generator, JABAOSI_generator );
(( JABAOSI_generator * ) ( HABAOSI_generator.nonlocals )) -> ZZAAOSI_buffer = NL(ZZAAOSI_buffer);
A_CALLPROC(HABAOSI_generator,(A68_FALSE, &MABAOSI),(A68_FALSE, &MABAOSI,(HABAOSI_generator).nonlocals));
NABAOSI_new = MABAOSI;
 /* line 141: */
PABAOSI = A_VTRIM(OABAOSI,(NABAOSI_new),A_VTSCRIPT(&(OABAOSI.upb),(NABAOSI_new).upb,1,(*NL(ZZAAOSI_buffer)).upb)) ;
A_VASSIGN2((*NL(ZZAAOSI_buffer)),PABAOSI,A68_CHAR );
 /* line 142: */
 /* line 143: */
(*NL(ZZAAOSI_buffer)) = NABAOSI_new;
} 
 /* line 144: */
 /* line 145: */
QABAOSI = (&A_VINDEX((*NL(ZZAAOSI_buffer)),(*NL(CABAOSI_windex))));
} 
A_PROC_EXIT(write_char);
return( QABAOSI );
} 
#undef NL

A_STATIC A68_VOID  SABAOSI_get_arg(A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((TABAOSI_get_arg *)NonLocals)->x)
{ 
A68_INT  UABAOSI_end;
A68_VC  VABAOSI;  /* clause result */
A68_VC  WABAOSI;  /* OPERATORS - trim index */
A68_VC  XABAOSI;  /* avoid structure result */
A_PROC_ENTRY(get_arg);
{ 
UABAOSI_end = (*NL(CABAOSI_windex));
 /* line 150: */
(*NL(CABAOSI_windex)) = 0;
 /* line 151: */
 /* line 152: */
ZAAAOSI_makervc( A_VTRIM(WABAOSI,((*NL(ZZAAOSI_buffer))),A_VTSCRIPT(&(WABAOSI.upb),((*NL(ZZAAOSI_buffer))).upb,1,UABAOSI_end)), &XABAOSI );
VABAOSI = XABAOSI;
} 
A_PROC_EXIT(get_arg);
*ReturnedValue = (VABAOSI);
return;
} 
#undef NL

A_STATIC A68_CHAR  ZABAOSI_lower(A68_CHAR  C)
{ 
A68_CHAR  ABBAOSI;  /* clause result */
A_PROC_ENTRY(lower);
ABBAOSI = C;
A_PROC_EXIT(lower);
return( ABBAOSI );
} 
#undef NL

A_STATIC A68_VOID  YBBAOSI_generator(A68_BOOL  WBBAOSI_anonymous, A68_47  *ReturnedValue, void *NonLocals)
#define NL(x) (((ZBBAOSI_generator *)NonLocals)->x)
{ 
A68_47  ACBAOSI;  /* clause result */
A68_47  BCBAOSI;  /* OPERATORS - dynamic generator */
{ 
BCBAOSI.upb = ((*NL(YZAAOSI_no_args))+1) ;
( WBBAOSI_anonymous? A_VLOC(A68_VC ,BCBAOSI): A_VHEAP(A68_VC ,BCBAOSI) );
ACBAOSI = BCBAOSI;
} 
*ReturnedValue = (ACBAOSI);
return;
} 
#undef NL

A_STATIC A68_VOID  UXAAOSI_generator(A68_BOOL  TXAAOSI_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  VXAAOSI;  /* clause result */
A68_VC  WXAAOSI;  /* OPERATORS - dynamic generator */
{ 
 /* line 56: */
WXAAOSI.upb = 0 ;
( TXAAOSI_anonymous? A_VLOC(A68_CHAR ,WXAAOSI): A_VHEAP(A68_CHAR ,WXAAOSI) );
VXAAOSI = WXAAOSI;
} 
*ReturnedValue = (VXAAOSI);
return;
} 
#undef NL

A68_VOID  DYAAOSI_parse_basic(A68_VC  Name, A68_43  *ReturnedValue)
{ 
A68_43  EYAAOSI;  /* collateral clause result */
A68_43  FYAAOSI_ans;
A68_INT  IYAAOSI_typepos;
A68_INT  JYAAOSI_dirpos;
A68_INT  KYAAOSI_typemax;
A68_INT  LYAAOSI_i;
A68_INT  MYAAOSI;  /* by part of loop */
A68_CHAR  NYAAOSI_c;
A68_BOOL  OYAAOSI;  /* optbool result */
A68_VC  PYAAOSI;  /* OPERATORS - trim index */
A68_VC * QYAAOSI;  /* YIELD */
A68_VC  RYAAOSI;  /* OPERATORS - trim index */
A68_VC * SYAAOSI;  /* YIELD */
A68_VC  TYAAOSI;  /* OPERATORS - trim index */
A68_VC * UYAAOSI;  /* YIELD */
A68_VC  VYAAOSI;  /* OPERATORS - trim index */
A68_VC * WYAAOSI;  /* YIELD */
A68_43  XYAAOSI;  /* clause result */
A_PROC_ENTRY(parse_basic);
 /* line 62: */
 /* line 64: */
{ 
EYAAOSI.Filename = Name;
EYAAOSI.Directory = YXAAOSI_nullstr;
EYAAOSI.Name = YXAAOSI_nullstr;
EYAAOSI.Type = YXAAOSI_nullstr;
FYAAOSI_ans = EYAAOSI;
 /* line 66: */
 /* line 68: */
IYAAOSI_typepos = (-1);
JYAAOSI_dirpos = (-1);
KYAAOSI_typemax = Name.upb;
 /* line 69: */
MYAAOSI = (-1);
for ( LYAAOSI_i = Name.upb;
( MYAAOSI > 0 && LYAAOSI_i <= 1) ||
( MYAAOSI < 0 && LYAAOSI_i >= 1) ||
( MYAAOSI == 0 ) ;
LYAAOSI_i += MYAAOSI )
{ 
 /* line 70: */
if ( !((JYAAOSI_dirpos<0)) ) break;
NYAAOSI_c = (*(&A_VINDEX(Name,LYAAOSI_i)));
 /* line 71: */
OYAAOSI = (JYAAOSI_dirpos<0);
if ( OYAAOSI )
{ /* line 72: */
OYAAOSI = (NYAAOSI_c==GYAAOSI_typec);
}
if ( OYAAOSI )
{ 
 /* line 73: */
IYAAOSI_typepos = LYAAOSI_i;
} 
else
{ 
 /* line 75: */
if ( (NYAAOSI_c==HYAAOSI_dirc) )
{ 
 /* line 79: */
 /* line 80: */
JYAAOSI_dirpos = LYAAOSI_i;
} 
} 
}
 /* line 81: */
 /* line 82: */
if ( (IYAAOSI_typepos>0) )
{ 
 /* line 83: */
QYAAOSI = (&((&FYAAOSI_ans)->Type)) ;
(*QYAAOSI) = A_VTRIM(PYAAOSI,(Name),A_VTSCRIPT(&(PYAAOSI.upb),(Name).upb,IYAAOSI_typepos,KYAAOSI_typemax));
} 
else
{ 
 /* line 84: */
IYAAOSI_typepos = (Name.upb+1);
} 
 /* line 85: */
 /* line 86: */
if ( (JYAAOSI_dirpos>0) )
{ 
SYAAOSI = (&((&FYAAOSI_ans)->Directory)) ;
(*SYAAOSI) = A_VTRIM(RYAAOSI,(Name),A_VTSCRIPT(&(RYAAOSI.upb),(Name).upb,1,JYAAOSI_dirpos));
 /* line 87: */
 /* line 88: */
UYAAOSI = (&((&FYAAOSI_ans)->Name)) ;
(*UYAAOSI) = A_VTRIM(TYAAOSI,(Name),A_VTSCRIPT(&(TYAAOSI.upb),(Name).upb,(JYAAOSI_dirpos+1),(IYAAOSI_typepos-1)));
} 
else
{ 
 /* line 89: */
WYAAOSI = (&((&FYAAOSI_ans)->Name)) ;
(*WYAAOSI) = A_VTRIM(VYAAOSI,(Name),A_VTSCRIPT(&(VYAAOSI.upb),(Name).upb,1,(IYAAOSI_typepos-1)));
} 
 /* line 90: */
 /* line 91: */
XYAAOSI = FYAAOSI_ans;
} 
A_PROC_EXIT(parse_basic);
*ReturnedValue = (XYAAOSI);
return;
} 
#undef NL

A68_VOID  AZAAOSI_parse_default(A68_VC  Name, A68_VC  Default, A68_43  *ReturnedValue)
{ 
A68_43  CZAAOSI;  /* avoid structure result */
A68_43  BZAAOSI_ans;
A68_43  DZAAOSI;  /* avoid structure result */
A68_43  EZAAOSI_def;
A68_BOOL  FZAAOSI_changed;
A68_BOOL  GZAAOSI;  /* optbool result */
A68_VC * HZAAOSI;  /* YIELD */
A68_BOOL  IZAAOSI;  /* optbool result */
A68_VC * JZAAOSI;  /* YIELD */
A68_BOOL  KZAAOSI;  /* optbool result */
A68_VC * LZAAOSI;  /* YIELD */
A68_46  MZAAOSI;  /* collateral clause result */
A68_35  NZAAOSI;  /* OPERATORS - istruct -> vector */
A68_VC  OZAAOSI;  /* avoid structure result */
A68_VC * PZAAOSI;  /* YIELD */
A68_43  QZAAOSI;  /* clause result */
A_PROC_ENTRY(parse_default);
 /* line 95: */
 /* line 96: */
{ 
DYAAOSI_parse_basic( Name, &CZAAOSI );
BZAAOSI_ans = CZAAOSI;
 /* line 97: */
DYAAOSI_parse_basic( Default, &DZAAOSI );
EZAAOSI_def = DZAAOSI;
 /* line 98: */
FZAAOSI_changed = A68_FALSE;
 /* line 99: */
GZAAOSI = ((*(&((&BZAAOSI_ans)->Directory))).upb==0);
if ( GZAAOSI )
{ /* line 100: */
GZAAOSI = (EZAAOSI_def.Directory.upb>0);
}
if ( GZAAOSI )
{ 
FZAAOSI_changed = A68_TRUE;
 /* line 101: */
HZAAOSI = (&((&BZAAOSI_ans)->Directory)) ;
(*HZAAOSI) = EZAAOSI_def.Directory;
} 
 /* line 102: */
IZAAOSI = ((*(&((&BZAAOSI_ans)->Name))).upb==0);
if ( IZAAOSI )
{ /* line 103: */
IZAAOSI = (EZAAOSI_def.Name.upb>0);
}
if ( IZAAOSI )
{ 
FZAAOSI_changed = A68_TRUE;
 /* line 104: */
JZAAOSI = (&((&BZAAOSI_ans)->Name)) ;
(*JZAAOSI) = EZAAOSI_def.Name;
} 
 /* line 105: */
KZAAOSI = ((*(&((&BZAAOSI_ans)->Type))).upb==0);
if ( KZAAOSI )
{ /* line 106: */
KZAAOSI = (EZAAOSI_def.Type.upb>0);
}
if ( KZAAOSI )
{ 
FZAAOSI_changed = A68_TRUE;
 /* line 107: */
LZAAOSI = (&((&BZAAOSI_ans)->Type)) ;
(*LZAAOSI) = EZAAOSI_def.Type;
} 
 /* line 108: */
 /* line 109: */
if ( FZAAOSI_changed )
{ 
MZAAOSI.data[0] = (*(&((&BZAAOSI_ans)->Directory)));
MZAAOSI.data[1] = (*(&((&BZAAOSI_ans)->Name)));
MZAAOSI.data[2] = (*(&((&BZAAOSI_ans)->Type)));
 /* line 110: */
JBAAOSI_concat( A_HISVEC(NZAAOSI,MZAAOSI,3,A68_VC ), &OZAAOSI );
PZAAOSI = (&((&BZAAOSI_ans)->Filename)) ;
(*PZAAOSI) = OZAAOSI;
} 
 /* line 111: */
 /* line 112: */
QZAAOSI = BZAAOSI_ans;
} 
A_PROC_EXIT(parse_default);
*ReturnedValue = (QZAAOSI);
return;
} 
#undef NL

A68_VOID  UZAAOSI_parse_prompt(A68_VC  First_arg, A68_VC  Argstring, A68_47  *ReturnedValue)
{ 
A68_49 * WZAAOSI_arglist;
A68_49 ** XZAAOSI_tail;
A68_INT  YZAAOSI_no_args;
A68_VC  AABAOSI;  /* OPERATORS - istruct -> vector */
A68_50 * BABAOSI;  /* OPERATORS - istruct -> vector */
A68_VC  ZZAAOSI_buffer;
A68_INT  CABAOSI_windex;
A68_51  DABAOSI_write_char;   /* proc value of non-global proc */
A68_52  RABAOSI_get_arg;   /* proc value of non-global proc */
A68_INT  EBBAOSI_state;
A68_CHAR  FBBAOSI_quote_to_match;
A68_INT  GBBAOSI_startpos;
A68_INT  HBBAOSI_i;
A68_INT  IBBAOSI_i;
A68_INT  JBBAOSI;  /* to part of loop */
A68_CHAR  KBBAOSI_c;
A68_BOOL  LBBAOSI;  /* optbool result */
A68_CHAR * MBBAOSI;  /* YIELD */
A68_CHAR * NBBAOSI;  /* YIELD */
A68_BOOL  OBBAOSI;  /* optbool result */
A68_49  PBBAOSI;  /* collateral clause result */
A68_VC  QBBAOSI;  /* avoid structure result */
A68_49 * RBBAOSI;  /* YIELD */
A68_CHAR * SBBAOSI;  /* YIELD */
A68_49  TBBAOSI;  /* collateral clause result */
A68_VC  UBBAOSI;  /* avoid structure result */
A68_49 * VBBAOSI;  /* YIELD */
A68_54  XBBAOSI_generator;   /* proc value of non-global proc */
A68_47  CCBAOSI;  /* avoid structure result */
A68_47  DCBAOSI_new_args;
A68_INT  ECBAOSI;  /* YIELD */
A68_VC * FCBAOSI;  /* YIELD */
A68_49 * GCBAOSI_this_arg;
A68_VC * HCBAOSI_v;
A68_47  ICBAOSI;  /* OPERATORS - trim index */
A68_47  JCBAOSI;  /* forall yield */
A68_INT  KCBAOSI;  /* forall loop counter */
A68_47  LCBAOSI;  /* clause result */
A_PROC_ENTRY(parse_prompt);
 /* line 121: */
 /* line 128: */
{ 
 /* line 129: */
 /* line 130: */
XZAAOSI_tail = (&WZAAOSI_arglist);
 /* line 131: */
YZAAOSI_no_args = 0;
 /* line 134: */
BABAOSI = A_LOC(A68_50 ) ;
ZZAAOSI_buffer = A_ISVEC(AABAOSI,BABAOSI,1000,A68_CHAR );
 /* line 135: */
CABAOSI_windex = 0;
 /* line 137: */
 /* line 138: */
 /* line 139: */
A_CLOSURE( DABAOSI_write_char, EABAOSI_write_char, FABAOSI_write_char );
(( FABAOSI_write_char * ) ( DABAOSI_write_char.nonlocals )) -> CABAOSI_windex = (&CABAOSI_windex);
(( FABAOSI_write_char * ) ( DABAOSI_write_char.nonlocals )) -> ZZAAOSI_buffer = (&ZZAAOSI_buffer);
 /* line 147: */
 /* line 148: */
 /* line 149: */
A_CLOSURE( RABAOSI_get_arg, SABAOSI_get_arg, TABAOSI_get_arg );
(( TABAOSI_get_arg * ) ( RABAOSI_get_arg.nonlocals )) -> CABAOSI_windex = (&CABAOSI_windex);
(( TABAOSI_get_arg * ) ( RABAOSI_get_arg.nonlocals )) -> ZZAAOSI_buffer = (&ZZAAOSI_buffer);
 /* line 154: */
 /* line 160: */
 /* line 161: */
 /* line 162: */
 /* line 164: */
 /* line 165: */
EBBAOSI_state = BBBAOSI_space;
 /* line 166: */
 /* line 167: */
 /* line 168: */
HBBAOSI_i = 0;
 /* line 170: */
 /* line 171: */
JBBAOSI = Argstring.upb;
for ( IBBAOSI_i = 1;
IBBAOSI_i <= JBBAOSI;
IBBAOSI_i += 1 )
{ 
KBBAOSI_c = (*(&A_VINDEX(Argstring,IBBAOSI_i)));
 /* line 172: */
 /* line 174: */
switch ( EBBAOSI_state )
{ 
case 1: 
LBBAOSI = (KBBAOSI_c=='\'');
if ( ! LBBAOSI )
{LBBAOSI = (KBBAOSI_c=='`');
}
if ( ! LBBAOSI )
{ /* line 175: */
LBBAOSI = (KBBAOSI_c=='\"');
}
if ( LBBAOSI )
{ 
FBBAOSI_quote_to_match = KBBAOSI_c;
 /* line 176: */
EBBAOSI_state = CBBAOSI_quoted_arg;
} 
else
{ 
 /* line 177: */
if ( (KBBAOSI_c!=' ') )
{ 
EBBAOSI_state = DBBAOSI_unquoted_arg;
 /* line 178: */
 /* line 181: */
MBBAOSI = A_CALLPROC(DABAOSI_write_char,(),((DABAOSI_write_char).nonlocals)) ;
(*MBBAOSI) = ZABAOSI_lower(KBBAOSI_c);
} 
} 
break;
case 2: 
 /* line 182: */
if ( (KBBAOSI_c==FBBAOSI_quote_to_match) )
{ 
 /* line 183: */
EBBAOSI_state = DBBAOSI_unquoted_arg;
} 
else
{ 
 /* line 184: */
 /* line 187: */
NBBAOSI = A_CALLPROC(DABAOSI_write_char,(),((DABAOSI_write_char).nonlocals)) ;
(*NBBAOSI) = KBBAOSI_c;
} 
break;
case 3: 
OBBAOSI = (KBBAOSI_c=='\'');
if ( ! OBBAOSI )
{OBBAOSI = (KBBAOSI_c=='`');
}
if ( ! OBBAOSI )
{ /* line 188: */
OBBAOSI = (KBBAOSI_c=='\"');
}
if ( OBBAOSI )
{ 
 /* line 189: */
EBBAOSI_state = CBBAOSI_quoted_arg;
} 
else
{ 
 /* line 190: */
if ( (KBBAOSI_c==' ') )
{ 
EBBAOSI_state = BBBAOSI_space;
 /* line 191: */
YZAAOSI_no_args+=1;
 /* line 192: */
A_CALLPROC(RABAOSI_get_arg,( &QBBAOSI),( &QBBAOSI,(RABAOSI_get_arg).nonlocals));
PBBAOSI.Arg = QBBAOSI;
PBBAOSI.Next = (A68_49 *)A68_NIL;
RBBAOSI = A_HEAP(A68_49 ) ;
(*RBBAOSI) = PBBAOSI ;
(*XZAAOSI_tail) = RBBAOSI;
 /* line 193: */
 /* line 194: */
XZAAOSI_tail = (&((*XZAAOSI_tail)->Next));
} 
else
{ 
 /* line 195: */
 /* line 196: */
 /* line 197: */
SBBAOSI = A_CALLPROC(DABAOSI_write_char,(),((DABAOSI_write_char).nonlocals)) ;
(*SBBAOSI) = ZABAOSI_lower(KBBAOSI_c);
} 
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
}
 /* line 204: */
 /* line 205: */
if ( (EBBAOSI_state!=BBBAOSI_space) )
{ 
YZAAOSI_no_args+=1;
 /* line 206: */
A_CALLPROC(RABAOSI_get_arg,( &UBBAOSI),( &UBBAOSI,(RABAOSI_get_arg).nonlocals));
TBBAOSI.Arg = UBBAOSI;
 /* line 207: */
TBBAOSI.Next = (A68_49 *)A68_NIL;
VBBAOSI = A_HEAP(A68_49 ) ;
(*VBBAOSI) = TBBAOSI ;
(*XZAAOSI_tail) = VBBAOSI;
} 
 /* line 209: */
A_CLOSURE( XBBAOSI_generator, YBBAOSI_generator, ZBBAOSI_generator );
(( ZBBAOSI_generator * ) ( XBBAOSI_generator.nonlocals )) -> YZAAOSI_no_args = (&YZAAOSI_no_args);
A_CALLPROC(XBBAOSI_generator,(A68_FALSE, &CCBAOSI),(A68_FALSE, &CCBAOSI,(XBBAOSI_generator).nonlocals));
DCBAOSI_new_args = CCBAOSI;
 /* line 211: */
ECBAOSI = 1 ;
FCBAOSI = (&A_VINDEX(DCBAOSI_new_args,ECBAOSI)) ;
(*FCBAOSI) = First_arg;
 /* line 213: */
GCBAOSI_this_arg = WZAAOSI_arglist;
 /* line 214: */
 /* line 215: */
JCBAOSI = A_VTRIM(ICBAOSI,(DCBAOSI_new_args),A_VTSCRIPT(&(ICBAOSI.upb),(DCBAOSI_new_args).upb,2,(DCBAOSI_new_args).upb)) ;
KCBAOSI = JCBAOSI.upb -1;
HCBAOSI_v = JCBAOSI.data;
for (;KCBAOSI-- >= 0;
(HCBAOSI_v++
) )
{
(*HCBAOSI_v) = (*(&(GCBAOSI_this_arg->Arg)));
GCBAOSI_this_arg = (*(&(GCBAOSI_this_arg->Next)));
}
 /* line 217: */
 /* line 218: */
 /* line 221: */
LCBAOSI = DCBAOSI_new_args;
} 
A_PROC_EXIT(parse_prompt);
*ReturnedValue = (LCBAOSI);
return;
} 
#undef NL
 /* line 1: */
 /* line 4: */
void NXAAOSI(void)   /* initialise DECS oscommon */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","./mfiles","-staredit","259","./a68files/oscommon.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/strops.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_31  XXAAOSI;  /* procedure value */
A68_VC  ZXAAOSI;  /* avoid structure result */
A68_43  AYAAOSI;  /* collateral clause result */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
BAAAOSI();   /* USE strops */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/osif/assoc/./a68files/oscommon.a68";
A_config.translation_time = "Tue Apr  4 09:24:33 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "MXAAOSI (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 09:24:33 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS oscommon);
UEAALIB_a68config(LGAALIB_configinfo, RXAAOSI);
 /* line 49: */
XXAAOSI.fn.fn_global = UXAAOSI_generator;
XXAAOSI.nonlocals = A68_NIL;
SXAAOSI_anonymous = XXAAOSI;
 /* line 58: */
A_CALLPROC(SXAAOSI_anonymous,(A68_TRUE, &ZXAAOSI),(A68_TRUE, &ZXAAOSI,(SXAAOSI_anonymous).nonlocals));
YXAAOSI_nullstr = ZXAAOSI;
 /* line 59: */
AYAAOSI.Filename = YXAAOSI_nullstr;
AYAAOSI.Directory = YXAAOSI_nullstr;
AYAAOSI.Name = YXAAOSI_nullstr;
AYAAOSI.Type = YXAAOSI_nullstr;
BYAAOSI_nullfilename = AYAAOSI;
 /* line 61: */
 /* line 94: */
 /* line 118: */
RZAAOSI_diff = ((A68_INT)(unsigned char)'A'-(A68_INT)(unsigned char)'a');
 /* line 120: */
 /* line 223: */
A_PROC_EXIT(DECS oscommon);
} 
#undef NL
/* end of translation of ./a68files/oscommon.a68 */
