
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
/* UNAME:IFAAOSI */
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
A_ISTRUCT(A68_CHAR ,58,A68t42);
typedef struct A68t42  A68_42 ;    /* STRUCT 58 CHAR */
struct A68t44{
A68_INT  Number;
A_PAD_INT(PAD_1)
struct A68t46 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_2)
};
typedef struct A68t44  A68_44 ;    /* STRUCT(INT,REF MODE46,BITS)  */
struct A68t45{
struct A68t44  Msgno;
A68_VC  Text;
};
typedef struct A68t45  A68_45 ;    /* STRUCT(MODE44,REF MODE26)  */
A_VECTOR(struct A68t45 ,A68t47);
typedef struct A68t47  A68_47 ;    /* VECTOR [] MODE45 */
struct A68t46{
A68_VC  Name;
struct A68t47  Messages;
};
typedef struct A68t46  A68_46 ;    /* STRUCT(REF MODE26,REF MODE47)  */

A_PROCEDURE(A68_VOID ,A68t48,(struct A68t44 ,struct A68t35 ),(struct A68t44 ,struct A68t35 ,void *));
typedef struct A68t48  A68_48 ;    /* PROC(MODE44,MODE35) VOID */
A_VECTOR(struct A68t50 ,A68t51);
typedef struct A68t51  A68_51 ;    /* VECTOR [] MODE50 */
struct A68t50{
A68_INT  Number;
A_PAD_INT(PAD_3)
A68_BITS  Class;
A_PAD_BITS(PAD_4)
A68_VC  Text;
};
typedef struct A68t50  A68_50 ;    /* STRUCT(INT,BITS,MODE26)  */
struct A68t49{
A68_VC  Name;
struct A68t47  Messages;
A68_BOOL * Initialised;
struct A68t51  Setup;
};
typedef struct A68t49  A68_49 ;    /* STRUCT(MODE26,REF MODE47,REF BOOL,MODE51)  */

A_PROCEDURE(A68_VOID ,A68t52,(A68_BOOL ,struct A68t35 *),(A68_BOOL ,struct A68t35 *,void *));
typedef struct A68t52  A68_52 ;    /* PROC(BOOL) MODE35 */

A_PROCEDURE(A68_VOID ,A68t53,(A68_BOOL ,struct A68t49 *),(A68_BOOL ,struct A68t49 *,void *));
typedef struct A68t53  A68_53 ;    /* PROC(BOOL) MODE49 */
#define A68_54  A68_VC 
#define A68t54 A68t26            /* FLEX VECTOR [] CHAR */
#define A68_55  A68_35 
#define A68t55 A68t35            /* FLEX VECTOR [] MODE54 */

A_PROCEDURE(A68_VOID ,A68t56,(A68_BOOL ,struct A68t51 *),(A68_BOOL ,struct A68t51 *,void *));
typedef struct A68t56  A68_56 ;    /* PROC(BOOL) MODE51 */
#define A68_57  A68_50 
#define A68t57 A68t50            /* STRUCT(INT,BITS,MODE54)  */
#define A68_58  A68_51 
#define A68t58 A68t51            /* FLEX VECTOR [] MODE57 */

A_PROCEDURE(A68_VOID ,A68t59,(A68_BOOL ,struct A68t50 *),(A68_BOOL ,struct A68t50 *,void *));
typedef struct A68t59  A68_59 ;    /* PROC(BOOL) MODE50 */
#define A68_60  A68_49 
#define A68t60 A68t49            /* STRUCT(MODE54,REF MODE47,REF BOOL,MODE58)  */

A_PROCEDURE(A68_BITS ,A68t61,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t61  A68_61 ;    /* PROC(BITS,BITS) BITS */
A_VECTOR(A68_VC ,A68t62);
typedef struct A68t62  A68_62 ;    /* VECTOR [] REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t63,(struct A68t35 ,struct A68t62 *),(struct A68t35 ,struct A68t62 *,void *));
typedef struct A68t63  A68_63 ;    /* PROC(MODE35) MODE62 */

A_PROCEDURE(A68_VOID ,A68t64,(struct A68t62 ,struct A68t35 *),(struct A68t62 ,struct A68t35 *,void *));
typedef struct A68t64  A68_64 ;    /* PROC(MODE62) MODE35 */
A_ISTRUCT(A68_CHAR ,11,A68t65);
typedef struct A68t65  A68_65 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,4,A68t66);
typedef struct A68t66  A68_66 ;    /* STRUCT 4 CHAR */

A_PROCEDURE(A68_VOID ,A68t67,(A68_BOOL ,struct A68t47 *),(A68_BOOL ,struct A68t47 *,void *));
typedef struct A68t67  A68_67 ;    /* PROC(BOOL) MODE47 */
struct A68t68 { A68_INT mode; union {
struct A68t44  mode1;
struct A68t45  mode2;
} data; };
typedef struct A68t68  A68_68 ;    /* UNION(MODE44,MODE45)  */

A_PROCEDURE(A68_BITS ,A68t69,(struct A68t68 ),(struct A68t68 ,void *));
typedef struct A68t69  A68_69 ;    /* PROC(MODE68) BITS */

A_PROCEDURE(A68_BOOL ,A68t70,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t70  A68_70 ;    /* PROC(BITS) BOOL */

A_PROCEDURE(A68_BOOL ,A68t71,(struct A68t68 ),(struct A68t68 ,void *));
typedef struct A68t71  A68_71 ;    /* PROC(MODE68) BOOL */

A_PROCEDURE(A68_INT ,A68t72,(struct A68t44 ),(struct A68t44 ,void *));
typedef struct A68t72  A68_72 ;    /* PROC(MODE44) INT */
A_ISTRUCT(A68_CHAR ,2048,A68t73);
typedef struct A68t73  A68_73 ;    /* STRUCT 2048 CHAR */

A_PROCEDURE(A68_VOID ,A68t74,(A68_INT ,struct A68t49 ,struct A68t44 *),(A68_INT ,struct A68t49 ,struct A68t44 *,void *));
typedef struct A68t74  A68_74 ;    /* PROC(INT,MODE49) MODE44 */

A_PROCEDURE(A68_BOOL ,A68t75,(struct A68t44 ,struct A68t49 ),(struct A68t44 ,struct A68t49 ,void *));
typedef struct A68t75  A68_75 ;    /* PROC(MODE44,MODE49) BOOL */

A_PROCEDURE(A68_VOID ,A68t76,(struct A68t44 ,struct A68t35 ,struct A68t45 *),(struct A68t44 ,struct A68t35 ,struct A68t45 *,void *));
typedef struct A68t76  A68_76 ;    /* PROC(MODE44,MODE35) MODE45 */

A_PROCEDURE(A68_VOID ,A68t77,(A68_VC ,struct A68t45 *),(A68_VC ,struct A68t45 *,void *));
typedef struct A68t77  A68_77 ;    /* PROC(MODE26) MODE45 */
A_ISTRUCT(A68_CHAR ,16,A68t78);
typedef struct A68t78  A68_78 ;    /* STRUCT 16 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t79);
typedef struct A68t79  A68_79 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(A68_VC ,4,A68t80);
typedef struct A68t80  A68_80 ;    /* STRUCT 4 MODE26 */
A_ISTRUCT(A68_CHAR ,20,A68t81);
typedef struct A68t81  A68_81 ;    /* STRUCT 20 CHAR */
A_ISTRUCT(A68_CHAR ,19,A68t82);
typedef struct A68t82  A68_82 ;    /* STRUCT 19 CHAR */
A_ISTRUCT(A68_CHAR ,23,A68t83);
typedef struct A68t83  A68_83 ;    /* STRUCT 23 CHAR */

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
static A68_42   MFAAOSI = {"$Id: messageproc.a68,v 34.2 1995/03/29 13:01:40 ella Exp $"}; 
A_GISVEC(A68_VC ,NFAAOSI,MFAAOSI,58)
A68_31  OFAAOSI_anonymous;
A68_52  PFAAOSI_anonymous;
A68_53  QFAAOSI_anonymous;
static A68_65   HHAAOSI = {"direct call"}; 
A_GISVEC(A68_VC ,IHAAOSI,HHAAOSI,11)
A68_VC  JHAAOSI_s;
A68_46  QHAAOSI_nilmsg;
A68_44  SHAAOSI_system;
A68_44  UHAAOSI_fatal;
A68_44  WHAAOSI_user;
A68_44  YHAAOSI_error;
A68_44  AIAAOSI_outerr;
A68_44  CIAAOSI_log;
A68_44  EIAAOSI_output;
A68_44  GIAAOSI_logpart;
A68_44  IIAAOSI_outpart;
A68_44  KIAAOSI_diag0;
A68_44  MIAAOSI_diag1;
A68_44  OIAAOSI_diag2;
A68_44  QIAAOSI_diag3;
A68_44  SIAAOSI_diag4;
A68_BITS  TIAAOSI_system_class;
A68_BITS  UIAAOSI_fatal_class;
A68_BITS  VIAAOSI_user_class;
A68_BITS  WIAAOSI_error_class;
A68_BITS  XIAAOSI_outerr_class;
A68_BITS  YIAAOSI_log_class;
A68_BITS  ZIAAOSI_output_class;
A68_BITS  AJAAOSI_logpart_class;
A68_BITS  BJAAOSI_outpart_class;
A68_BITS  CJAAOSI_diag0_class;
A68_BITS  DJAAOSI_diag1_class;
A68_BITS  EJAAOSI_diag2_class;
A68_BITS  FJAAOSI_diag3_class;
A68_BITS  GJAAOSI_diag4_class;
static A68_66   IJAAOSI = {"????"}; 
A_GISVEC(A68_VC ,JJAAOSI,IJAAOSI,4)
static A68_45  LJAAOSI_unsetmsg;
A68_35  VJAAOSI_nullmsg;
A68_47  AKAAOSI_no_messages;
A68_INT  CKAAOSI_diagnostic_level;
#define BMAAOSI_buf_size 2048
static A68_VC  EMAAOSI_buffer;
static A68_78   WNAAOSI = {"translate_msg:  "}; 
A_GISVEC(A68_VC ,XNAAOSI,WNAAOSI,16)
static A68_79   YNAAOSI = {" - "}; 
A_GISVEC(A68_VC ,ZNAAOSI,YNAAOSI,3)
static A68_81   GOAAOSI = {"unset message number"}; 
A_GISVEC(A68_VC ,IOAAOSI,GOAAOSI,20)
static A68_82   LOAAOSI = {"number out of range"}; 
A_GISVEC(A68_VC ,MOAAOSI,LOAAOSI,19)
static A68_83   APAAOSI = {"insufficient parameters"}; 
A_GISVEC(A68_VC ,BPAAOSI,APAAOSI,23)
static A68_78   DPAAOSI = {"message too long"}; 
A_GISVEC(A68_VC ,EPAAOSI,DPAAOSI,16)
static A68_78   IPAAOSI = {"message too long"}; 
A_GISVEC(A68_VC ,JPAAOSI,IPAAOSI,16)
static A68_82   LPAAOSI = {"too many parameters"}; 
A_GISVEC(A68_VC ,MPAAOSI,LPAAOSI,19)
static A68_81   TPAAOSI = {"UPB params must be 1"}; 
A_GISVEC(A68_VC ,UPAAOSI,TPAAOSI,20)
typedef struct   /* env of non-global proc */
{
A68_44  Msgno;
} TNAAOSI_fail;
typedef struct   /* env of non-global proc */
{
A68_BOOL * TOAAOSI_failed;
A68_45 * OOAAOSI_message;
A68_77  RNAAOSI_fail;
} XOAAOSI_make_sysmsg;

A_STATIC A68_VOID  SFAAOSI_generator(A68_BOOL  RFAAOSI_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  XFAAOSI_generator(A68_BOOL  WFAAOSI_anonymous, A68_35  *ReturnedValue);

A_STATIC A68_VOID  GGAAOSI_generator(A68_BOOL  FGAAOSI_anonymous, A68_49  *ReturnedValue);

A_STATIC A68_VOID  IGAAOSI_generator(A68_BOOL  HGAAOSI_anonymous, A68_51  *ReturnedValue);

A_STATIC A68_VOID  MGAAOSI_generator(A68_BOOL  LGAAOSI_anonymous, A68_50  *ReturnedValue);

A_STATIC A68_BITS  EHAAOSI_xor(A68_BITS  A, A68_BITS  B);

A_STATIC A68_VOID  LHAAOSI_generator(A68_BOOL  KHAAOSI_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  NJAAOSI_generator(A68_BOOL  MJAAOSI_anonymous, A68_35  *ReturnedValue);

A_STATIC A68_VOID  XJAAOSI_generator(A68_BOOL  WJAAOSI_anonymous, A68_47  *ReturnedValue);

A_STATIC A68_BITS  EKAAOSI_get(A68_68  M);

A_STATIC A68_BOOL  KKAAOSI_enabled(A68_BITS  M);

A68_BOOL  PKAAOSI_sysfault_msg(A68_68  Msg);

A68_BOOL  TKAAOSI_error_msg(A68_68  Msg);

A68_BOOL  ZKAAOSI_abort_msg(A68_68  Msg);

A68_BOOL  ELAAOSI_cli_msg(A68_68  Msg);

A68_BOOL  JLAAOSI_log_msg(A68_68  Msg);

A68_BOOL  OLAAOSI_out_msg(A68_68  Msg);

A68_BOOL  TLAAOSI_newline_msg(A68_68  Msg);

A68_BOOL  WLAAOSI_diag_msg(A68_68  Msg);

A68_INT  ZLAAOSI_msg_number(A68_44  Msgno);

A68_VOID  HMAAOSI_make_msgno(A68_INT  Number, A68_49  Facility, A68_44  *ReturnedValue);

A68_BOOL  INAAOSI_is_facility_msg(A68_44  Msgno, A68_49  Facility);

A68_VOID  ONAAOSI_translate_msg(A68_44  Msgno, A68_35  Params, A68_45  *ReturnedValue);

A_STATIC A68_VOID  SNAAOSI_fail(A68_VC  Text, A68_45  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  WOAAOSI_make_sysmsg(A68_VC  Text, void *NonLocals);

A_STATIC A68_VOID  MGAAOSI_generator(A68_BOOL  LGAAOSI_anonymous, A68_50  *ReturnedValue)
{ 
A68_57  NGAAOSI_anonymous;
A68_VC  OGAAOSI;  /* avoid structure result */
A68_54 * PGAAOSI;  /* YIELD */
A68_50  QGAAOSI;  /* clause result */
{ 
A_CALLPROC(OFAAOSI_anonymous,(LGAAOSI_anonymous, &OGAAOSI),(LGAAOSI_anonymous, &OGAAOSI,(OFAAOSI_anonymous).nonlocals));
PGAAOSI = (&((&NGAAOSI_anonymous)->Text)) ;
(*PGAAOSI) = OGAAOSI;
QGAAOSI = NGAAOSI_anonymous;
} 
*ReturnedValue = (QGAAOSI);
return;
} 
#undef NL

A_STATIC A68_VOID  IGAAOSI_generator(A68_BOOL  HGAAOSI_anonymous, A68_51  *ReturnedValue)
{ 
A68_51  KGAAOSI;  /* OPERATORS - dynamic generator */
A68_58  JGAAOSI_anonymous;
A68_57 * RGAAOSI_anonymous;
A68_INT  SGAAOSI;  /* forall loop counter */
A68_50  TGAAOSI;  /* avoid structure result */
A68_51  UGAAOSI;  /* clause result */
{ 
 /* line 95: */
KGAAOSI.upb = 0 ;
( HGAAOSI_anonymous? A_VLOC(A68_50 ,KGAAOSI): A_VHEAP(A68_50 ,KGAAOSI) );
JGAAOSI_anonymous = KGAAOSI;
SGAAOSI = (*(&JGAAOSI_anonymous)).upb -1;
RGAAOSI_anonymous = (*(&JGAAOSI_anonymous)).data;
for (;SGAAOSI-- >= 0;
(RGAAOSI_anonymous++
) )
{
MGAAOSI_generator( HGAAOSI_anonymous, &TGAAOSI );
(*RGAAOSI_anonymous) = TGAAOSI;
}
UGAAOSI = JGAAOSI_anonymous;
} 
*ReturnedValue = (UGAAOSI);
return;
} 
#undef NL

A_STATIC A68_VOID  SNAAOSI_fail(A68_VC  Text, A68_45  *ReturnedValue, void *NonLocals)
#define NL(x) (((TNAAOSI_fail *)NonLocals)->x)
{ 
A68_45  UNAAOSI;  /* collateral clause result */
A68_80  VNAAOSI;  /* collateral clause result */
A68_35  AOAAOSI;  /* OPERATORS - istruct -> vector */
A68_VC  BOAAOSI;  /* avoid structure result */
A68_45  COAAOSI;  /* clause result */
A_PROC_ENTRY(fail);
 /* line 258: */
UNAAOSI.Msgno.Number = NL(Msgno).Number;
UNAAOSI.Msgno.Facility = NL(Msgno).Facility;
 /* line 259: */
UNAAOSI.Msgno.Class = SHAAOSI_system.Class;
VNAAOSI.data[0] = XNAAOSI;
VNAAOSI.data[1] = (*(&(NL(Msgno).Facility->Name)));
VNAAOSI.data[2] = ZNAAOSI;
VNAAOSI.data[3] = Text;
JBAAOSI_concat( A_HISVEC(AOAAOSI,VNAAOSI,4,A68_VC ), &BOAAOSI );
UNAAOSI.Text = BOAAOSI;
COAAOSI = UNAAOSI;
A_PROC_EXIT(fail);
*ReturnedValue = (COAAOSI);
return;
} 
#undef NL

A_STATIC A68_VOID  WOAAOSI_make_sysmsg(A68_VC  Text, void *NonLocals)
#define NL(x) (((XOAAOSI_make_sysmsg *)NonLocals)->x)
{ 
A68_45  YOAAOSI;  /* avoid structure result */
A_PROC_ENTRY(make_sysmsg);
 /* line 275: */
{ 
(*NL(TOAAOSI_failed)) = A68_TRUE;
A_CALLPROC(NL(RNAAOSI_fail),(Text, &YOAAOSI),(Text, &YOAAOSI,(NL(RNAAOSI_fail)).nonlocals));
(*NL(OOAAOSI_message)) = YOAAOSI;
} 
A_PROC_EXIT(make_sysmsg);
return;
} 
#undef NL

A_STATIC A68_VOID  SFAAOSI_generator(A68_BOOL  RFAAOSI_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  TFAAOSI;  /* clause result */
A68_VC  UFAAOSI;  /* OPERATORS - dynamic generator */
{ 
 /* line 84: */
UFAAOSI.upb = 0 ;
( RFAAOSI_anonymous? A_VLOC(A68_CHAR ,UFAAOSI): A_VHEAP(A68_CHAR ,UFAAOSI) );
TFAAOSI = UFAAOSI;
} 
*ReturnedValue = (TFAAOSI);
return;
} 
#undef NL

A_STATIC A68_VOID  XFAAOSI_generator(A68_BOOL  WFAAOSI_anonymous, A68_35  *ReturnedValue)
{ 
A68_35  ZFAAOSI;  /* OPERATORS - dynamic generator */
A68_55  YFAAOSI_anonymous;
A68_54 * AGAAOSI_anonymous;
A68_INT  BGAAOSI;  /* forall loop counter */
A68_VC  CGAAOSI;  /* avoid structure result */
A68_35  DGAAOSI;  /* clause result */
{ 
 /* line 93: */
ZFAAOSI.upb = 0 ;
( WFAAOSI_anonymous? A_VLOC(A68_VC ,ZFAAOSI): A_VHEAP(A68_VC ,ZFAAOSI) );
YFAAOSI_anonymous = ZFAAOSI;
BGAAOSI = (*(&YFAAOSI_anonymous)).upb -1;
AGAAOSI_anonymous = (*(&YFAAOSI_anonymous)).data;
for (;BGAAOSI-- >= 0;
(AGAAOSI_anonymous++
) )
{
A_CALLPROC(OFAAOSI_anonymous,(WFAAOSI_anonymous, &CGAAOSI),(WFAAOSI_anonymous, &CGAAOSI,(OFAAOSI_anonymous).nonlocals));
(*AGAAOSI_anonymous) = CGAAOSI;
}
DGAAOSI = YFAAOSI_anonymous;
} 
*ReturnedValue = (DGAAOSI);
return;
} 
#undef NL

A_STATIC A68_VOID  GGAAOSI_generator(A68_BOOL  FGAAOSI_anonymous, A68_49  *ReturnedValue)
{ 
A68_60  VGAAOSI_anonymous;
A68_VC  WGAAOSI;  /* avoid structure result */
A68_54 * XGAAOSI;  /* YIELD */
A68_51  YGAAOSI;  /* avoid structure result */
A68_58 * ZGAAOSI;  /* YIELD */
A68_49  AHAAOSI;  /* clause result */
{ 
A_CALLPROC(OFAAOSI_anonymous,(FGAAOSI_anonymous, &WGAAOSI),(FGAAOSI_anonymous, &WGAAOSI,(OFAAOSI_anonymous).nonlocals));
XGAAOSI = (&((&VGAAOSI_anonymous)->Name)) ;
(*XGAAOSI) = WGAAOSI;
IGAAOSI_generator( FGAAOSI_anonymous, &YGAAOSI );
ZGAAOSI = (&((&VGAAOSI_anonymous)->Setup)) ;
(*ZGAAOSI) = YGAAOSI;
AHAAOSI = VGAAOSI_anonymous;
} 
*ReturnedValue = (AHAAOSI);
return;
} 
#undef NL

A_STATIC A68_BITS  EHAAOSI_xor(A68_BITS  A, A68_BITS  B)
{ 
A68_BITS  FHAAOSI;  /* clause result */
A_PROC_ENTRY(xor);
FHAAOSI = (A68_BITS )((A68_BITS )(A&~B)|(A68_BITS )(B&~A));
A_PROC_EXIT(xor);
return( FHAAOSI );
} 
#undef NL

A_STATIC A68_VOID  LHAAOSI_generator(A68_BOOL  KHAAOSI_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  MHAAOSI;  /* clause result */
A68_VC  NHAAOSI;  /* OPERATORS - dynamic generator */
{ 
NHAAOSI.upb = JHAAOSI_s.upb ;
( KHAAOSI_anonymous? A_VLOC(A68_CHAR ,NHAAOSI): A_VHEAP(A68_CHAR ,NHAAOSI) );
MHAAOSI = NHAAOSI;
} 
*ReturnedValue = (MHAAOSI);
return;
} 
#undef NL

A_STATIC A68_VOID  NJAAOSI_generator(A68_BOOL  MJAAOSI_anonymous, A68_35  *ReturnedValue)
{ 
A68_35  PJAAOSI;  /* OPERATORS - dynamic generator */
A68_55  OJAAOSI_anonymous;
A68_54 * QJAAOSI_anonymous;
A68_INT  RJAAOSI;  /* forall loop counter */
A68_VC  SJAAOSI;  /* avoid structure result */
A68_35  TJAAOSI;  /* clause result */
{ 
PJAAOSI.upb = 0 ;
( MJAAOSI_anonymous? A_VLOC(A68_VC ,PJAAOSI): A_VHEAP(A68_VC ,PJAAOSI) );
OJAAOSI_anonymous = PJAAOSI;
RJAAOSI = (*(&OJAAOSI_anonymous)).upb -1;
QJAAOSI_anonymous = (*(&OJAAOSI_anonymous)).data;
for (;RJAAOSI-- >= 0;
(QJAAOSI_anonymous++
) )
{
A_CALLPROC(OFAAOSI_anonymous,(MJAAOSI_anonymous, &SJAAOSI),(MJAAOSI_anonymous, &SJAAOSI,(OFAAOSI_anonymous).nonlocals));
(*QJAAOSI_anonymous) = SJAAOSI;
}
TJAAOSI = OJAAOSI_anonymous;
} 
*ReturnedValue = (TJAAOSI);
return;
} 
#undef NL

A_STATIC A68_VOID  XJAAOSI_generator(A68_BOOL  WJAAOSI_anonymous, A68_47  *ReturnedValue)
{ 
A68_47  YJAAOSI;  /* clause result */
A68_47  ZJAAOSI;  /* OPERATORS - dynamic generator */
{ 
ZJAAOSI.upb = 0 ;
( WJAAOSI_anonymous? A_VLOC(A68_45 ,ZJAAOSI): A_VHEAP(A68_45 ,ZJAAOSI) );
YJAAOSI = ZJAAOSI;
} 
*ReturnedValue = (YJAAOSI);
return;
} 
#undef NL

A_STATIC A68_BITS  EKAAOSI_get(A68_68  M)
{ 
A68_68  FKAAOSI;  /* united object - for case conformity */
A68_44  GKAAOSI_mno;
A68_BITS  HKAAOSI;  /* clause result */
A68_45  IKAAOSI_msg;
A_PROC_ENTRY(get);
 /* line 183: */
FKAAOSI = M ;
switch ( FKAAOSI.mode )
{ 
case 1: /* STRUCT(INT,REF MODE46,BITS)  */
GKAAOSI_mno = (FKAAOSI.data.mode1);
 /* line 184: */
HKAAOSI = GKAAOSI_mno.Class;
break;
case 2: /* STRUCT(MODE44,REF MODE26)  */
IKAAOSI_msg = (FKAAOSI.data.mode2);
 /* line 185: */
HKAAOSI = IKAAOSI_msg.Msgno.Class;
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(get);
return( HKAAOSI );
} 
#undef NL

A_STATIC A68_BOOL  KKAAOSI_enabled(A68_BITS  M)
{ 
A68_BOOL  LKAAOSI;  /* optbool result */
A68_BOOL  MKAAOSI;  /* optbool result */
A68_BOOL  NKAAOSI;  /* clause result */
A_PROC_ENTRY(enabled);
 /* line 188: */
LKAAOSI = ((A68_BITS )(M&0X40U)!=0X40U);
if ( ! LKAAOSI )
{LKAAOSI = (CKAAOSI_diagnostic_level>1);
}
 /* line 189: */
if ( ! LKAAOSI )
{MKAAOSI = (CKAAOSI_diagnostic_level==1);
if ( MKAAOSI )
{MKAAOSI = ((A68_BITS )(M&0X20U)!=0X20U);
}
LKAAOSI = MKAAOSI;
}
NKAAOSI = LKAAOSI;
A_PROC_EXIT(enabled);
return( NKAAOSI );
} 
#undef NL

A68_BOOL  PKAAOSI_sysfault_msg(A68_68  Msg)
{ 
A68_BITS  QKAAOSI_m;
A68_BOOL  RKAAOSI;  /* clause result */
A_PROC_ENTRY(sysfault_msg);
 /* line 192: */
{ 
QKAAOSI_m = EKAAOSI_get(Msg);
RKAAOSI = (QKAAOSI_m==0X0U);
} 
A_PROC_EXIT(sysfault_msg);
return( RKAAOSI );
} 
#undef NL

A68_BOOL  TKAAOSI_error_msg(A68_68  Msg)
{ 
A68_BITS  UKAAOSI_m;
A68_BOOL  VKAAOSI;  /* optbool result */
A68_BOOL  WKAAOSI;  /* optbool result */
A68_BOOL  XKAAOSI;  /* clause result */
A_PROC_ENTRY(error_msg);
 /* line 195: */
{ 
UKAAOSI_m = EKAAOSI_get(Msg);
VKAAOSI = (UKAAOSI_m==0X0U);
if ( ! VKAAOSI )
{VKAAOSI = ((A68_BITS )(UKAAOSI_m&0X10U)!=0X0U);
}
 /* line 196: */
if ( ! VKAAOSI )
{WKAAOSI = ((A68_BITS )(UKAAOSI_m&0X2U)==0X2U);
if ( WKAAOSI )
{WKAAOSI = KKAAOSI_enabled(UKAAOSI_m);
}
VKAAOSI = WKAAOSI;
}
XKAAOSI = VKAAOSI;
} 
A_PROC_EXIT(error_msg);
return( XKAAOSI );
} 
#undef NL

A68_BOOL  ZKAAOSI_abort_msg(A68_68  Msg)
{ 
A68_BITS  ALAAOSI_m;
A68_BOOL  BLAAOSI;  /* optbool result */
A68_BOOL  CLAAOSI;  /* clause result */
A_PROC_ENTRY(abort_msg);
 /* line 199: */
{ 
ALAAOSI_m = EKAAOSI_get(Msg);
BLAAOSI = (ALAAOSI_m==0X0U);
if ( ! BLAAOSI )
{BLAAOSI = ((A68_BITS )(ALAAOSI_m&0X1U)==0X1U);
}
CLAAOSI = BLAAOSI;
} 
A_PROC_EXIT(abort_msg);
return( CLAAOSI );
} 
#undef NL

A68_BOOL  ELAAOSI_cli_msg(A68_68  Msg)
{ 
A68_BITS  FLAAOSI_m;
A68_BOOL  GLAAOSI;  /* optbool result */
A68_BOOL  HLAAOSI;  /* clause result */
A_PROC_ENTRY(cli_msg);
 /* line 202: */
{ 
FLAAOSI_m = EKAAOSI_get(Msg);
GLAAOSI = ((A68_BITS )(FLAAOSI_m&0X2U)==0X2U);
if ( GLAAOSI )
{GLAAOSI = KKAAOSI_enabled(FLAAOSI_m);
}
HLAAOSI = GLAAOSI;
} 
A_PROC_EXIT(cli_msg);
return( HLAAOSI );
} 
#undef NL

A68_BOOL  JLAAOSI_log_msg(A68_68  Msg)
{ 
A68_BITS  KLAAOSI_m;
A68_BOOL  LLAAOSI;  /* optbool result */
A68_BOOL  MLAAOSI;  /* clause result */
A_PROC_ENTRY(log_msg);
 /* line 205: */
{ 
KLAAOSI_m = EKAAOSI_get(Msg);
LLAAOSI = ((A68_BITS )(KLAAOSI_m&0X4U)==0X4U);
if ( LLAAOSI )
{LLAAOSI = KKAAOSI_enabled(KLAAOSI_m);
}
MLAAOSI = LLAAOSI;
} 
A_PROC_EXIT(log_msg);
return( MLAAOSI );
} 
#undef NL

A68_BOOL  OLAAOSI_out_msg(A68_68  Msg)
{ 
A68_BITS  PLAAOSI_m;
A68_BOOL  QLAAOSI;  /* optbool result */
A68_BOOL  RLAAOSI;  /* clause result */
A_PROC_ENTRY(out_msg);
 /* line 208: */
{ 
PLAAOSI_m = EKAAOSI_get(Msg);
QLAAOSI = ((A68_BITS )(PLAAOSI_m&0X8U)==0X8U);
if ( QLAAOSI )
{QLAAOSI = KKAAOSI_enabled(PLAAOSI_m);
}
RLAAOSI = QLAAOSI;
} 
A_PROC_EXIT(out_msg);
return( RLAAOSI );
} 
#undef NL

A68_BOOL  TLAAOSI_newline_msg(A68_68  Msg)
{ 
A68_BOOL  ULAAOSI;  /* clause result */
A_PROC_ENTRY(newline_msg);
 /* line 211: */
ULAAOSI = ((A68_BITS )(EKAAOSI_get(Msg)&0X80U)!=0X80U);
A_PROC_EXIT(newline_msg);
return( ULAAOSI );
} 
#undef NL

A68_BOOL  WLAAOSI_diag_msg(A68_68  Msg)
{ 
A68_BOOL  XLAAOSI;  /* clause result */
A_PROC_ENTRY(diag_msg);
 /* line 214: */
XLAAOSI = ((A68_BITS )(EKAAOSI_get(Msg)&0X40U)==0X40U);
A_PROC_EXIT(diag_msg);
return( XLAAOSI );
} 
#undef NL

A68_INT  ZLAAOSI_msg_number(A68_44  Msgno)
{ 
A68_INT  AMAAOSI;  /* clause result */
A_PROC_ENTRY(msg_number);
AMAAOSI = Msgno.Number;
A_PROC_EXIT(msg_number);
return( AMAAOSI );
} 
#undef NL

A68_VOID  HMAAOSI_make_msgno(A68_INT  Number, A68_49  Facility, A68_44  *ReturnedValue)
{ 
A68_47  IMAAOSI_messages;
A68_INT  JMAAOSI_upb;
A68_45 * KMAAOSI_msg;
A68_INT  LMAAOSI;  /* forall loop counter */
A68_46 * MMAAOSI_msgfacility;
A68_46  NMAAOSI;  /* collateral clause result */
A68_VC  OMAAOSI;  /* avoid structure result */
A68_50  PMAAOSI_setup;
A68_51  QMAAOSI;  /* forall yield */
A68_50 * RMAAOSI;  /* forall control - []x */
A68_INT  SMAAOSI;  /* forall loop counter */
A68_45  TMAAOSI;  /* collateral clause result */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} UMAAOSI; 
A68_INT  VMAAOSI;  /* YIELD */
A68_45 * WMAAOSI;  /* YIELD */
A68_BOOL * XMAAOSI;  /* YIELD */
A68_BOOL  YMAAOSI;  /* optbool result */
A68_44  ZMAAOSI;  /* collateral clause result */
A68_46  ANAAOSI;  /* collateral clause result */
A68_VC  BNAAOSI;  /* avoid structure result */
A68_46 * CNAAOSI;  /* YIELD */
A68_44  DNAAOSI;  /* clause result */
A68_44  ENAAOSI_no;
A68_44  FNAAOSI;  /* collateral clause result */
A_PROC_ENTRY(make_msgno);
 /* line 223: */
 /* line 224: */
{ 
IMAAOSI_messages = Facility.Messages;
 /* line 225: */
JMAAOSI_upb = IMAAOSI_messages.upb;
 /* line 227: */
 /* line 228: */
if ( !(*Facility.Initialised) )
{ 
LMAAOSI = IMAAOSI_messages.upb -1;
KMAAOSI_msg = IMAAOSI_messages.data;
for (;LMAAOSI-- >= 0;
(KMAAOSI_msg++
) )
{
(*KMAAOSI_msg) = LJAAOSI_unsetmsg;
}
 /* line 229: */
MMAAOSI_msgfacility = (A_HEAP(A68_46 ));
ZAAAOSI_makervc( Facility.Name, &OMAAOSI );
NMAAOSI.Name = OMAAOSI;
NMAAOSI.Messages = IMAAOSI_messages;
(*MMAAOSI_msgfacility) = NMAAOSI;
 /* line 230: */
 /* line 231: */
QMAAOSI = Facility.Setup ;
SMAAOSI = QMAAOSI.upb -1;
RMAAOSI = QMAAOSI.data;
for (;SMAAOSI-- >= 0;
(RMAAOSI++
) )
{
PMAAOSI_setup = *RMAAOSI;
 /* line 232: */
TMAAOSI.Msgno.Number = PMAAOSI_setup.Number;
TMAAOSI.Msgno.Facility = MMAAOSI_msgfacility;
 /* line 233: */
TMAAOSI.Msgno.Class = PMAAOSI_setup.Class;
 /* line 234: */
UMAAOSI.source = PMAAOSI_setup.Text ;
TMAAOSI.Text = (UMAAOSI.destination);
VMAAOSI = PMAAOSI_setup.Number ;
WMAAOSI = (&A_VINDEX(IMAAOSI_messages,VMAAOSI)) ;
(*WMAAOSI) = TMAAOSI;
}
 /* line 235: */
 /* line 236: */
XMAAOSI = Facility.Initialised ;
(*XMAAOSI) = A68_TRUE;
} 
 /* line 237: */
YMAAOSI = (Number<=0);
if ( ! YMAAOSI )
{ /* line 238: */
YMAAOSI = (Number>JMAAOSI_upb);
}
if ( YMAAOSI )
{ 
ZMAAOSI.Number = Number;
ZAAAOSI_makervc( Facility.Name, &BNAAOSI );
ANAAOSI.Name = BNAAOSI;
ANAAOSI.Messages = IMAAOSI_messages;
 /* line 239: */
CNAAOSI = A_HEAP(A68_46 ) ;
(*CNAAOSI) = ANAAOSI ;
ZMAAOSI.Facility = CNAAOSI;
 /* line 240: */
ZMAAOSI.Class = SHAAOSI_system.Class;
DNAAOSI = ZMAAOSI;
} 
else
{ 
ENAAOSI_no = (*(&((&A_VINDEX(IMAAOSI_messages,Number))->Msgno)));
 /* line 241: */
 /* line 242: */
if ( (ENAAOSI_no.Number<=0) )
{ 
FNAAOSI.Number = ENAAOSI_no.Number;
FNAAOSI.Facility = ENAAOSI_no.Facility;
 /* line 243: */
 /* line 244: */
FNAAOSI.Class = SHAAOSI_system.Class;
DNAAOSI = FNAAOSI;
} 
else
{ 
 /* line 245: */
 /* line 246: */
DNAAOSI = ENAAOSI_no;
} 
} 
} 
A_PROC_EXIT(make_msgno);
*ReturnedValue = (DNAAOSI);
return;
} 
#undef NL

A68_BOOL  INAAOSI_is_facility_msg(A68_44  Msgno, A68_49  Facility)
{ 
A68_BOOL  JNAAOSI;  /* clause result */
A68_47  KNAAOSI;  /* == */
A68_47  LNAAOSI;  /* == */
A_PROC_ENTRY(is_facility_msg);
 /* line 250: */
KNAAOSI = (*(&(Msgno.Facility->Messages))) ;
LNAAOSI = Facility.Messages ;
JNAAOSI = A_VSTRUCTCOMP(KNAAOSI,LNAAOSI);
A_PROC_EXIT(is_facility_msg);
return( JNAAOSI );
} 
#undef NL

A68_VOID  ONAAOSI_translate_msg(A68_44  Msgno, A68_35  Params, A68_45  *ReturnedValue)
{ 
A68_77  RNAAOSI_fail;   /* proc value of non-global proc */
A68_46 * DOAAOSI_facility;
A68_47  EOAAOSI_messages;
A68_INT  FOAAOSI_number;
A68_45  HOAAOSI;  /* clause result */
A68_45  JOAAOSI;  /* avoid structure result */
A68_BOOL  KOAAOSI;  /* optbool result */
A68_45  NOAAOSI;  /* avoid structure result */
A68_45  OOAAOSI_message;
A68_VC  POAAOSI_text;
A68_INT  QOAAOSI_bind;
A68_INT  ROAAOSI_tind;
A68_INT  SOAAOSI_pno;
A68_BOOL  TOAAOSI_failed;
A68_39  VOAAOSI_make_sysmsg;   /* proc value of non-global proc */
A68_BOOL  ZOAAOSI;  /* optbool result */
A68_VC  CPAAOSI_p;
A68_INT  FPAAOSI_lwb;
A68_VC  GPAAOSI;  /* OPERATORS - trim index */
A68_VC  HPAAOSI;  /* YIELD */
A68_CHAR * KPAAOSI;  /* YIELD */
A68_45  NPAAOSI;  /* avoid structure result */
A68_45  OPAAOSI;  /* collateral clause result */
A68_VC  PPAAOSI;  /* OPERATORS - trim index */
A68_45  QPAAOSI;  /* collateral clause result */
A68_INT  RPAAOSI;  /* YIELD */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} SPAAOSI; 
A68_45  VPAAOSI;  /* avoid structure result */
A_PROC_ENTRY(translate_msg);
 /* line 254: */
 /* line 257: */
{ 
A_CLOSURE( RNAAOSI_fail, SNAAOSI_fail, TNAAOSI_fail );
(( TNAAOSI_fail * ) ( RNAAOSI_fail.nonlocals )) -> Msgno = Msgno;
 /* line 261: */
 /* line 262: */
if ( (Msgno.Facility!=(&QHAAOSI_nilmsg)) )
{ 
DOAAOSI_facility = Msgno.Facility;
 /* line 263: */
EOAAOSI_messages = (*(&(DOAAOSI_facility->Messages)));
 /* line 264: */
FOAAOSI_number = Msgno.Number;
 /* line 265: */
 /* line 266: */
if ( (FOAAOSI_number<0) )
{ 
 /* line 267: */
A_CALLPROC(RNAAOSI_fail,(IOAAOSI, &JOAAOSI),(IOAAOSI, &JOAAOSI,(RNAAOSI_fail).nonlocals));
HOAAOSI = JOAAOSI;
} 
else
{ 
KOAAOSI = (FOAAOSI_number==0);
if ( ! KOAAOSI )
{ /* line 268: */
KOAAOSI = (FOAAOSI_number>EOAAOSI_messages.upb);
}
if ( KOAAOSI )
{ 
 /* line 269: */
A_CALLPROC(RNAAOSI_fail,(MOAAOSI, &NOAAOSI),(MOAAOSI, &NOAAOSI,(RNAAOSI_fail).nonlocals));
HOAAOSI = NOAAOSI;
} 
else
{ 
OOAAOSI_message = (*(&A_VINDEX(EOAAOSI_messages,FOAAOSI_number)));
 /* line 270: */
POAAOSI_text = (*(&((&OOAAOSI_message)->Text)));
 /* line 271: */
QOAAOSI_bind = 0;
ROAAOSI_tind = 0;
SOAAOSI_pno = 0;
 /* line 272: */
TOAAOSI_failed = A68_FALSE;
 /* line 274: */
A_CLOSURE( VOAAOSI_make_sysmsg, WOAAOSI_make_sysmsg, XOAAOSI_make_sysmsg );
(( XOAAOSI_make_sysmsg * ) ( VOAAOSI_make_sysmsg.nonlocals )) -> TOAAOSI_failed = (&TOAAOSI_failed);
(( XOAAOSI_make_sysmsg * ) ( VOAAOSI_make_sysmsg.nonlocals )) -> OOAAOSI_message = (&OOAAOSI_message);
(( XOAAOSI_make_sysmsg * ) ( VOAAOSI_make_sysmsg.nonlocals )) -> RNAAOSI_fail = RNAAOSI_fail;
 /* line 277: */
for ( ;; )
{ 
 /* line 278: */
ZOAAOSI = ((ROAAOSI_tind+=1)<=POAAOSI_text.upb);
if ( ZOAAOSI )
{ZOAAOSI = !TOAAOSI_failed;
}
if ( !(ZOAAOSI) ) break;
 /* line 279: */
if ( (A_VINDEX(POAAOSI_text,ROAAOSI_tind)=='*') )
{ 
 /* line 280: */
if ( ((SOAAOSI_pno+=1)>Params.upb) )
{ 
 /* line 281: */
A_CALLPROC(VOAAOSI_make_sysmsg,(BPAAOSI),(BPAAOSI,(VOAAOSI_make_sysmsg).nonlocals));
} 
else
{ 
CPAAOSI_p = A_VINDEX(Params,SOAAOSI_pno);
 /* line 282: */
 /* line 283: */
if ( ((QOAAOSI_bind+CPAAOSI_p.upb)>BMAAOSI_buf_size) )
{ 
 /* line 284: */
A_CALLPROC(VOAAOSI_make_sysmsg,(EPAAOSI),(EPAAOSI,(VOAAOSI_make_sysmsg).nonlocals));
} 
else
{ 
FPAAOSI_lwb = (QOAAOSI_bind+1);
 /* line 285: */
 /* line 286: */
 /* line 287: */
 /* line 288: */
HPAAOSI = A_VTRIM(GPAAOSI,(EMAAOSI_buffer),A_VTSCRIPT(&(GPAAOSI.upb),(EMAAOSI_buffer).upb,FPAAOSI_lwb,(QOAAOSI_bind+=CPAAOSI_p.upb))) ;
A_VASSIGN2(CPAAOSI_p,HPAAOSI,A68_CHAR );
} 
} 
} 
else
{ 
 /* line 289: */
if ( ((QOAAOSI_bind+=1)>BMAAOSI_buf_size) )
{ 
 /* line 290: */
A_CALLPROC(VOAAOSI_make_sysmsg,(JPAAOSI),(JPAAOSI,(VOAAOSI_make_sysmsg).nonlocals));
} 
else
{ 
 /* line 291: */
 /* line 292: */
KPAAOSI = (&A_VINDEX(EMAAOSI_buffer,QOAAOSI_bind)) ;
(*KPAAOSI) = A_VINDEX(POAAOSI_text,ROAAOSI_tind);
} 
} 
}
 /* line 293: */
 /* line 294: */
 /* line 295: */
if ( TOAAOSI_failed )
{ 
HOAAOSI = OOAAOSI_message;
} 
else
{ 
 /* line 296: */
if ( (SOAAOSI_pno<Params.upb) )
{ 
 /* line 297: */
A_CALLPROC(RNAAOSI_fail,(MPAAOSI, &NPAAOSI),(MPAAOSI, &NPAAOSI,(RNAAOSI_fail).nonlocals));
HOAAOSI = NPAAOSI;
} 
else
{ 
OPAAOSI.Msgno = (*(&((&OOAAOSI_message)->Msgno)));
 /* line 298: */
 /* line 299: */
 /* line 300: */
 /* line 301: */
OPAAOSI.Text = A_VTRIM(PPAAOSI,(EMAAOSI_buffer),A_VTSCRIPT(&(PPAAOSI.upb),(EMAAOSI_buffer).upb,1,QOAAOSI_bind));
HOAAOSI = OPAAOSI;
} 
} 
} 
} 
} 
else
{ 
 /* line 302: */
if ( (Params.upb==1) )
{ 
QPAAOSI.Msgno = Msgno;
 /* line 303: */
RPAAOSI = 1 ;
SPAAOSI.source = A_VINDEX(Params,RPAAOSI) ;
QPAAOSI.Text = (SPAAOSI.destination);
HOAAOSI = QPAAOSI;
} 
else
{ 
 /* line 304: */
 /* line 305: */
 /* line 306: */
 /* line 309: */
A_CALLPROC(RNAAOSI_fail,(UPAAOSI, &VPAAOSI),(UPAAOSI, &VPAAOSI,(RNAAOSI_fail).nonlocals));
HOAAOSI = VPAAOSI;
} 
} 
} 
A_PROC_EXIT(translate_msg);
*ReturnedValue = (HOAAOSI);
return;
} 
#undef NL
 /* line 1: */
 /* line 4: */
void JFAAOSI(void)   /* initialise DECS messageproc */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","./mfiles","-staredit","259","./a68files/messageproc.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/strops.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_31  VFAAOSI;  /* procedure value */
A68_52  EGAAOSI;  /* procedure value */
A68_53  BHAAOSI;  /* procedure value */
A68_46  GHAAOSI;  /* collateral clause result */
A68_VC  OHAAOSI;  /* avoid structure result */
A68_47  PHAAOSI;  /* OPERATORS - nil -> mode */
A68_44  RHAAOSI;  /* collateral clause result */
A68_44  THAAOSI;  /* collateral clause result */
A68_44  VHAAOSI;  /* collateral clause result */
A68_44  XHAAOSI;  /* collateral clause result */
A68_44  ZHAAOSI;  /* collateral clause result */
A68_44  BIAAOSI;  /* collateral clause result */
A68_44  DIAAOSI;  /* collateral clause result */
A68_44  FIAAOSI;  /* collateral clause result */
A68_44  HIAAOSI;  /* collateral clause result */
A68_44  JIAAOSI;  /* collateral clause result */
A68_44  LIAAOSI;  /* collateral clause result */
A68_44  NIAAOSI;  /* collateral clause result */
A68_44  PIAAOSI;  /* collateral clause result */
A68_44  RIAAOSI;  /* collateral clause result */
A68_45  HJAAOSI;  /* collateral clause result */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} KJAAOSI; 
A68_35  UJAAOSI;  /* avoid structure result */
A68_47  BKAAOSI;  /* avoid structure result */
A68_VC  CMAAOSI;  /* OPERATORS - istruct -> vector */
A68_73 * DMAAOSI;  /* OPERATORS - istruct -> vector */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
BAAAOSI();   /* USE strops */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/osif/assoc/./a68files/messageproc.a68";
A_config.translation_time = "Tue Apr  4 09:24:28 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "IFAAOSI (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 09:24:28 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS messageproc);
UEAALIB_a68config(LGAALIB_configinfo, NFAAOSI);
 /* line 78: */
 /* line 83: */
VFAAOSI.fn.fn_global = SFAAOSI_generator;
VFAAOSI.nonlocals = A68_NIL;
OFAAOSI_anonymous = VFAAOSI;
EGAAOSI.fn.fn_global = XFAAOSI_generator;
EGAAOSI.nonlocals = A68_NIL;
PFAAOSI_anonymous = EGAAOSI;
BHAAOSI.fn.fn_global = GGAAOSI_generator;
BHAAOSI.nonlocals = A68_NIL;
QFAAOSI_anonymous = BHAAOSI;
 /* line 97: */
 /* line 101: */
 /* line 102: */
 /* line 103: */
 /* line 105: */
 /* line 106: */
{ 
JHAAOSI_s = IHAAOSI;
LHAAOSI_generator( A68_TRUE, &OHAAOSI );
A_VASSIGN2(JHAAOSI_s,OHAAOSI,A68_CHAR ) ;
GHAAOSI.Name = OHAAOSI;
} 
GHAAOSI.Messages = A_VVAC(PHAAOSI);
QHAAOSI_nilmsg = GHAAOSI;
 /* line 142: */
 /* line 144: */
RHAAOSI.Number = 0;
RHAAOSI.Facility = (&QHAAOSI_nilmsg);
RHAAOSI.Class = 0X000U;
SHAAOSI_system = RHAAOSI;
 /* line 146: */
THAAOSI.Number = 0;
THAAOSI.Facility = (&QHAAOSI_nilmsg);
THAAOSI.Class = 0X011U;
UHAAOSI_fatal = THAAOSI;
 /* line 147: */
VHAAOSI.Number = 0;
VHAAOSI.Facility = (&QHAAOSI_nilmsg);
VHAAOSI.Class = 0X012U;
WHAAOSI_user = VHAAOSI;
 /* line 148: */
XHAAOSI.Number = 0;
XHAAOSI.Facility = (&QHAAOSI_nilmsg);
XHAAOSI.Class = 0X014U;
YHAAOSI_error = XHAAOSI;
 /* line 149: */
ZHAAOSI.Number = 0;
ZHAAOSI.Facility = (&QHAAOSI_nilmsg);
ZHAAOSI.Class = 0X018U;
AIAAOSI_outerr = ZHAAOSI;
 /* line 151: */
BIAAOSI.Number = 0;
BIAAOSI.Facility = (&QHAAOSI_nilmsg);
BIAAOSI.Class = 0X024U;
CIAAOSI_log = BIAAOSI;
 /* line 152: */
DIAAOSI.Number = 0;
DIAAOSI.Facility = (&QHAAOSI_nilmsg);
DIAAOSI.Class = 0X028U;
EIAAOSI_output = DIAAOSI;
 /* line 153: */
FIAAOSI.Number = 0;
FIAAOSI.Facility = (&QHAAOSI_nilmsg);
FIAAOSI.Class = 0X0a4U;
GIAAOSI_logpart = FIAAOSI;
 /* line 154: */
HIAAOSI.Number = 0;
HIAAOSI.Facility = (&QHAAOSI_nilmsg);
HIAAOSI.Class = 0X0a8U;
IIAAOSI_outpart = HIAAOSI;
 /* line 156: */
JIAAOSI.Number = 0;
JIAAOSI.Facility = (&QHAAOSI_nilmsg);
JIAAOSI.Class = 0X042U;
KIAAOSI_diag0 = JIAAOSI;
 /* line 157: */
LIAAOSI.Number = 0;
LIAAOSI.Facility = (&QHAAOSI_nilmsg);
LIAAOSI.Class = 0X044U;
MIAAOSI_diag1 = LIAAOSI;
 /* line 158: */
NIAAOSI.Number = 0;
NIAAOSI.Facility = (&QHAAOSI_nilmsg);
NIAAOSI.Class = 0X048U;
OIAAOSI_diag2 = NIAAOSI;
 /* line 159: */
PIAAOSI.Number = 0;
PIAAOSI.Facility = (&QHAAOSI_nilmsg);
PIAAOSI.Class = 0X064U;
QIAAOSI_diag3 = PIAAOSI;
 /* line 160: */
RIAAOSI.Number = 0;
RIAAOSI.Facility = (&QHAAOSI_nilmsg);
RIAAOSI.Class = 0X068U;
SIAAOSI_diag4 = RIAAOSI;
 /* line 162: */
TIAAOSI_system_class = SHAAOSI_system.Class;
 /* line 163: */
UIAAOSI_fatal_class = UHAAOSI_fatal.Class;
 /* line 164: */
VIAAOSI_user_class = WHAAOSI_user.Class;
 /* line 165: */
WIAAOSI_error_class = YHAAOSI_error.Class;
 /* line 166: */
XIAAOSI_outerr_class = AIAAOSI_outerr.Class;
 /* line 167: */
YIAAOSI_log_class = CIAAOSI_log.Class;
 /* line 168: */
ZIAAOSI_output_class = EIAAOSI_output.Class;
 /* line 169: */
AJAAOSI_logpart_class = GIAAOSI_logpart.Class;
 /* line 170: */
BJAAOSI_outpart_class = IIAAOSI_outpart.Class;
 /* line 171: */
CJAAOSI_diag0_class = KIAAOSI_diag0.Class;
 /* line 172: */
DJAAOSI_diag1_class = MIAAOSI_diag1.Class;
 /* line 173: */
EJAAOSI_diag2_class = OIAAOSI_diag2.Class;
 /* line 174: */
FJAAOSI_diag3_class = QIAAOSI_diag3.Class;
 /* line 175: */
GJAAOSI_diag4_class = SIAAOSI_diag4.Class;
 /* line 177: */
HJAAOSI.Msgno.Number = (-1);
HJAAOSI.Msgno.Facility = (&QHAAOSI_nilmsg);
HJAAOSI.Msgno.Class = SHAAOSI_system.Class;
KJAAOSI.source = JJAAOSI ;
HJAAOSI.Text = (KJAAOSI.destination);
LJAAOSI_unsetmsg = HJAAOSI;
 /* line 178: */
NJAAOSI_generator( A68_TRUE, &UJAAOSI );
VJAAOSI_nullmsg = UJAAOSI;
 /* line 179: */
XJAAOSI_generator( A68_TRUE, &BKAAOSI );
AKAAOSI_no_messages = BKAAOSI;
 /* line 180: */
CKAAOSI_diagnostic_level = 0;
 /* line 182: */
 /* line 187: */
 /* line 191: */
 /* line 194: */
 /* line 198: */
 /* line 201: */
 /* line 204: */
 /* line 207: */
 /* line 210: */
 /* line 213: */
 /* line 216: */
 /* line 218: */
 /* line 219: */
DMAAOSI = A_LOC(A68_73 ) ;
EMAAOSI_buffer = A_ISVEC(CMAAOSI,DMAAOSI,2048,A68_CHAR );
 /* line 222: */
 /* line 249: */
 /* line 253: */
 /* line 323: */
A_PROC_EXIT(DECS messageproc);
} 
#undef NL
/* end of translation of ./a68files/messageproc.a68 */
