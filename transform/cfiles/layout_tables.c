
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
/* UNAME:XECATRN */
#include "Asupport.h"

A_PROCEDURE(A68_VOID ,A68t31,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t31  A68_31 ;    /* PROC(BOOL) MODE26 */
A_VECTOR(A68_INT ,A68t32);
typedef struct A68t32  A68_32 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_VOID ,A68t33,(A68_BOOL ,struct A68t32 *),(A68_BOOL ,struct A68t32 *,void *));
typedef struct A68t33  A68_33 ;    /* PROC(BOOL) MODE32 */
struct A68t35{
A68_INT  Status;
A_PAD_INT(PAD_1)
};
typedef struct A68t35  A68_35 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_VOID ,A68t36,(A68_VC ),(A68_VC ,void *));
typedef struct A68t36  A68_36 ;    /* PROC(MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t37,(A68_VC ,A68_INT *,struct A68t35 *),(A68_VC ,A68_INT *,struct A68t35 *,void *));
typedef struct A68t37  A68_37 ;    /* PROC(REF MODE26,REF INT) MODE35 */
struct A68t34{
A68_INT  Charnumber;
A_PAD_INT(PAD_2)
A68_INT  Linenumber;
A_PAD_INT(PAD_3)
A68_INT  Indent;
A_PAD_INT(PAD_4)
A68_INT  Width;
A_PAD_INT(PAD_5)
A68_INT  Sizeincr;
A_PAD_INT(PAD_6)
struct A68t35  Status;
A68_VC  Buffer;
A68_BOOL  Buffered;
A_PAD_BOOL(PAD_7)
A68_BOOL  Separate;
A_PAD_BOOL(PAD_8)
A68_BOOL  Input;
A_PAD_BOOL(PAD_9)
struct A68t36  Putbuffer;
struct A68t37  Getbuffer;
};
typedef struct A68t34  A68_34 ;    /* STRUCT(INT,INT,INT,INT,INT,MODE35,REF MODE26,BOOL,BOOL,BOOL,MODE36,MODE37)  */

A_PROCEDURE(A68_VOID ,A68t38,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t38  A68_38 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t39,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t39  A68_39 ;    /* PROC(REF MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t40,(A68_CHAR ,A68_VC *),(A68_CHAR ,A68_VC *,void *));
typedef struct A68t40  A68_40 ;    /* PROC(CHAR) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t41,(struct A68t32 ,struct A68t32 *),(struct A68t32 ,struct A68t32 *,void *));
typedef struct A68t41  A68_41 ;    /* PROC(MODE32) REF MODE32 */

A_PROCEDURE(A68_VOID ,A68t42,(A68_INT ,struct A68t32 *),(A68_INT ,struct A68t32 *,void *));
typedef struct A68t42  A68_42 ;    /* PROC(INT) REF MODE32 */

A_PROCEDURE(A68_VOID ,A68t43,(A68_VC ),(A68_VC ,void *));
typedef struct A68t43  A68_43 ;    /* PROC(REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t44,(struct A68t32 ),(struct A68t32 ,void *));
typedef struct A68t44  A68_44 ;    /* PROC(REF MODE32) VOID */
struct A68t46 ;

A_PROCEDURE(A68_VOID ,A68t45,(struct A68t46 ,A68_VC *),(struct A68t46 ,A68_VC *,void *));
typedef struct A68t45  A68_45 ;    /* PROC(MODE46) REF MODE26 */
A_VECTOR(A68_VC ,A68t46);
typedef struct A68t46  A68_46 ;    /* VECTOR [] MODE26 */

A_PROCEDURE(A68_VOID ,A68t47,(A68_VC ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t47  A68_47 ;    /* PROC(MODE26,INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t48,(A68_CHAR ,A68_INT ,A68_VC *),(A68_CHAR ,A68_INT ,A68_VC *,void *));
typedef struct A68t48  A68_48 ;    /* PROC(CHAR,INT) MODE26 */
struct A68t50 ;

A_PROCEDURE(A68_VOID ,A68t49,(struct A68t50 ,A68_VC *),(struct A68t50 ,A68_VC *,void *));
typedef struct A68t49  A68_49 ;    /* PROC(MODE50) MODE26 */
struct A68t50 { A68_INT mode; union {
A68_BITS  mode1;
A68_INT  mode2;
A68_SBITS  mode3;
A68_SINT  mode4;
A68_CHAR  mode5;
} data; };
typedef struct A68t50  A68_50 ;    /* UNION(BITS,INT,SHORT BITS,SHORT INT,CHAR)  */

A_PROCEDURE(A68_VOID ,A68t51,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t51  A68_51 ;    /* PROC(INT) MODE26 */
A_VECTOR(A68_BITS ,A68t53);
typedef struct A68t53  A68_53 ;    /* VECTOR [] BITS */
A_VECTOR(A68_BOOL ,A68t54);
typedef struct A68t54  A68_54 ;    /* VECTOR [] BOOL */
A_VECTOR(A68_REAL ,A68t55);
typedef struct A68t55  A68_55 ;    /* VECTOR [] REAL */

A_PROCEDURE(A68_VOID ,A68t56,(struct A68t34 *),(struct A68t34 *,void *));
typedef struct A68t56  A68_56 ;    /* PROC(REF MODE34) VOID */
struct A68t57{
A68_INT  Int;
A_PAD_INT(PAD_10)
A68_INT  Width;
A_PAD_INT(PAD_11)
};
typedef struct A68t57  A68_57 ;    /* STRUCT(INT,INT)  */
struct A68t58{
A68_VC  Str;
A68_INT  Width;
A_PAD_INT(PAD_12)
};
typedef struct A68t58  A68_58 ;    /* STRUCT(MODE26,INT)  */
struct A68t59{
A68_VC  Str;
A68_INT  Justify;
A_PAD_INT(PAD_13)
};
typedef struct A68t59  A68_59 ;    /* STRUCT(MODE26,INT)  */
struct A68t60{
A68_INT  Tab;
A_PAD_INT(PAD_14)
};
typedef struct A68t60  A68_60 ;    /* STRUCT(INT)  */
struct A68t61{
A68_INT  Pos;
A_PAD_INT(PAD_15)
};
typedef struct A68t61  A68_61 ;    /* STRUCT(INT)  */
struct A68t62{
A68_INT  After;
A_PAD_INT(PAD_16)
};
typedef struct A68t62  A68_62 ;    /* STRUCT(INT)  */
struct A68t63{
A68_INT  Spaces;
A_PAD_INT(PAD_17)
};
typedef struct A68t63  A68_63 ;    /* STRUCT(INT)  */
struct A68t64{
A68_INT  Lines;
A_PAD_INT(PAD_18)
};
typedef struct A68t64  A68_64 ;    /* STRUCT(INT)  */
struct A68t65{
A68_INT  Indent;
A_PAD_INT(PAD_19)
};
typedef struct A68t65  A68_65 ;    /* STRUCT(INT)  */
A_STRAIGHT(A68_VOID,A68t66);
typedef struct A68t66  A68_66 ;    /* STRAIGHT MODE52 */
struct A68t52 { A68_INT mode; union {
A68_INT  mode1;
struct A68t32  mode2;
A68_BITS  mode3;
struct A68t53  mode4;
A68_SBITS  mode5;
A68_CHAR  mode6;
A68_VC  mode7;
A68_BOOL  mode8;
struct A68t54  mode9;
A68_REAL  mode10;
struct A68t55  mode11;
struct A68t56  mode12;
struct A68t57  mode13;
struct A68t58  mode14;
struct A68t59  mode15;
struct A68t60  mode16;
struct A68t61  mode17;
struct A68t62  mode18;
struct A68t63  mode19;
struct A68t64  mode20;
struct A68t65  mode21;
struct A68t66  mode22;
} data; };
typedef struct A68t52  A68_52 ;    /* UNION(INT,MODE32,BITS,MODE53,SHORT BITS,CHAR,MODE26,BOOL,MODE54,REAL,MODE55,MODE56,MODE57,MODE58,MODE59,MODE60,MODE61,MODE62,MODE63,MODE64,MODE65,MODE66)  */

A_PROCEDURE(A68_VOID ,A68t67,(A68_BOOL ,struct A68t58 *),(A68_BOOL ,struct A68t58 *,void *));
typedef struct A68t67  A68_67 ;    /* PROC(BOOL) MODE58 */

A_PROCEDURE(A68_VOID ,A68t68,(A68_BOOL ,struct A68t59 *),(A68_BOOL ,struct A68t59 *,void *));
typedef struct A68t68  A68_68 ;    /* PROC(BOOL) MODE59 */

A_PROCEDURE(A68_INT ,A68t69,(struct A68t34 *),(struct A68t34 *,void *));
typedef struct A68t69  A68_69 ;    /* PROC(REF MODE34) INT */

A_PROCEDURE(A68_INT ,A68t70,(struct A68t34 *,A68_INT ),(struct A68t34 *,A68_INT ,void *));
typedef struct A68t70  A68_70 ;    /* PROC(REF MODE34,INT) INT */

A_PROCEDURE(A68_VOID ,A68t71,(A68_INT ,A68_INT ,struct A68t57 *),(A68_INT ,A68_INT ,struct A68t57 *,void *));
typedef struct A68t71  A68_71 ;    /* PROC(INT,INT) MODE57 */

A_PROCEDURE(A68_VOID ,A68t72,(A68_VC ,A68_INT ,struct A68t58 *),(A68_VC ,A68_INT ,struct A68t58 *,void *));
typedef struct A68t72  A68_72 ;    /* PROC(MODE26,INT) MODE58 */

A_PROCEDURE(A68_VOID ,A68t73,(A68_VC ,A68_INT ,struct A68t59 *),(A68_VC ,A68_INT ,struct A68t59 *,void *));
typedef struct A68t73  A68_73 ;    /* PROC(MODE26,INT) MODE59 */

A_PROCEDURE(A68_VOID ,A68t74,(A68_INT ,struct A68t60 *),(A68_INT ,struct A68t60 *,void *));
typedef struct A68t74  A68_74 ;    /* PROC(INT) MODE60 */

A_PROCEDURE(A68_VOID ,A68t75,(A68_INT ,struct A68t61 *),(A68_INT ,struct A68t61 *,void *));
typedef struct A68t75  A68_75 ;    /* PROC(INT) MODE61 */

A_PROCEDURE(A68_VOID ,A68t76,(A68_INT ,struct A68t62 *),(A68_INT ,struct A68t62 *,void *));
typedef struct A68t76  A68_76 ;    /* PROC(INT) MODE62 */

A_PROCEDURE(A68_VOID ,A68t77,(A68_INT ,struct A68t63 *),(A68_INT ,struct A68t63 *,void *));
typedef struct A68t77  A68_77 ;    /* PROC(INT) MODE63 */

A_PROCEDURE(A68_VOID ,A68t78,(A68_INT ,struct A68t64 *),(A68_INT ,struct A68t64 *,void *));
typedef struct A68t78  A68_78 ;    /* PROC(INT) MODE64 */

A_PROCEDURE(A68_VOID ,A68t79,(A68_INT ,struct A68t65 *),(A68_INT ,struct A68t65 *,void *));
typedef struct A68t79  A68_79 ;    /* PROC(INT) MODE65 */

A_PROCEDURE(A68_VOID ,A68t80,(struct A68t34 *,A68_VC ),(struct A68t34 *,A68_VC ,void *));
typedef struct A68t80  A68_80 ;    /* PROC(REF MODE34,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t81,(struct A68t34 *,A68_INT ,A68_INT ),(struct A68t34 *,A68_INT ,A68_INT ,void *));
typedef struct A68t81  A68_81 ;    /* PROC(REF MODE34,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t82,(struct A68t34 *,A68_BITS ,A68_INT ),(struct A68t34 *,A68_BITS ,A68_INT ,void *));
typedef struct A68t82  A68_82 ;    /* PROC(REF MODE34,BITS,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t83,(struct A68t34 *,A68_REAL ,A68_INT ,A68_INT ),(struct A68t34 *,A68_REAL ,A68_INT ,A68_INT ,void *));
typedef struct A68t83  A68_83 ;    /* PROC(REF MODE34,REAL,INT,INT) VOID */
struct A68t85 ;

A_PROCEDURE(A68_VOID ,A68t84,(struct A68t34 *,struct A68t85 ),(struct A68t34 *,struct A68t85 ,void *));
typedef struct A68t84  A68_84 ;    /* PROC(REF MODE34,MODE85) VOID */
A_VECTOR(struct A68t52 ,A68t85);
typedef struct A68t85  A68_85 ;    /* VECTOR [] MODE52 */
struct A68t87 ;
struct A68t88 ;

A_PROCEDURE(struct A68t34 *,A68t86,(struct A68t87 ,struct A68t88 ),(struct A68t87 ,struct A68t88 ,void *));
typedef struct A68t86  A68_86 ;    /* PROC(MODE87,MODE88) REF MODE34 */
struct A68t87 { A68_INT mode; union {
A68_INT  mode1;
A68_VC  mode2;
} data; };
typedef struct A68t87  A68_87 ;    /* UNION(INT,REF MODE26)  */
struct A68t88 { A68_INT mode; union {
struct A68t36  mode1;
struct A68t37  mode2;
} data; };
typedef struct A68t88  A68_88 ;    /* UNION(MODE36,MODE37)  */

A_PROCEDURE(A68_VOID ,A68t89,(A68_VC ,struct A68t85 ,A68_VC *),(A68_VC ,struct A68t85 ,A68_VC *,void *));
typedef struct A68t89  A68_89 ;    /* PROC(REF MODE26,MODE85) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t90,(struct A68t34 *,A68_VC *),(struct A68t34 *,A68_VC *,void *));
typedef struct A68t90  A68_90 ;    /* PROC(REF MODE34) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t91,(struct A68t85 ,A68_VC *),(struct A68t85 ,A68_VC *,void *));
typedef struct A68t91  A68_91 ;    /* PROC(MODE85) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t92,(void),(void *));
typedef struct A68t92  A68_92 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t93,(struct A68t92 ),(struct A68t92 ,void *));
typedef struct A68t93  A68_93 ;    /* PROC(MODE92) VOID */

A_PROCEDURE(A68_VOID ,A68t94,(struct A68t36 ),(struct A68t36 ,void *));
typedef struct A68t94  A68_94 ;    /* PROC(MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t95,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t95  A68_95 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,60,A68t96);
typedef struct A68t96  A68_96 ;    /* STRUCT 60 CHAR */
struct A68t97{
A68_INT  Step;
A_PAD_INT(PAD_20)
A68_INT  Dither;
A_PAD_INT(PAD_21)
};
typedef struct A68t97  A68_97 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_BOOL ,A68t98,(void),(void *));
typedef struct A68t98  A68_98 ;    /* PROC BOOL */
A_ISTRUCT(A68_INT ,128,A68t99);
typedef struct A68t99  A68_99 ;    /* STRUCT 128 INT */

A_PROCEDURE(A68_VOID ,A68t100,(A68_BOOL ,struct A68t53 *),(A68_BOOL ,struct A68t53 *,void *));
typedef struct A68t100  A68_100 ;    /* PROC(BOOL) MODE53 */
A_ISTRUCT(A68_BITS ,32,A68t101);
typedef struct A68t101  A68_101 ;    /* STRUCT 32 BITS */
A_ISTRUCT(A68_BITS ,15,A68t102);
typedef struct A68t102  A68_102 ;    /* STRUCT 15 BITS */

A_PROCEDURE(A68_BITS ,A68t103,(A68_INT ),(A68_INT ,void *));
typedef struct A68t103  A68_103 ;    /* PROC(INT) BITS */

A_PROCEDURE(A68_BITS ,A68t104,(A68_INT ,A68_BITS ,A68_BOOL ),(A68_INT ,A68_BITS ,A68_BOOL ,void *));
typedef struct A68t104  A68_104 ;    /* PROC(INT,BITS,BOOL) BITS */

A_PROCEDURE(A68_VOID ,A68t105,(A68_INT ),(A68_INT ,void *));
typedef struct A68t105  A68_105 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_BOOL ,A68t106,(A68_INT ,A68_INT ,A68_BOOL ),(A68_INT ,A68_INT ,A68_BOOL ,void *));
typedef struct A68t106  A68_106 ;    /* PROC(INT,INT,BOOL) BOOL */

A_PROCEDURE(A68_BOOL ,A68t107,(A68_VC ),(A68_VC ,void *));
typedef struct A68t107  A68_107 ;    /* PROC(MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t108,(struct A68t97 *),(struct A68t97 *,void *));
typedef struct A68t108  A68_108 ;    /* PROC MODE97 */

A_PROCEDURE(A68_VOID ,A68t109,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t109  A68_109 ;    /* PROC(INT,INT) VOID */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from putstrings --- */
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_96   BFCATRN = {"$Id: layout_tables.a68,v 34.2 1995/03/29 13:02:56 ella Exp $"}; 
A_GISVEC(A68_VC ,CFCATRN,BFCATRN,60)
static A68_BOOL  DFCATRN_format_changes;
static A68_32  JFCATRN_char_types;
#define KFCATRN_no_class 0
#define LFCATRN_space_class 1
#define MFCATRN_upper_class 2
#define NFCATRN_fnname_class 3
#define OFCATRN_lower_class 4
#define PFCATRN_digit_class 5
#define QFCATRN_orb_class 6
#define RFCATRN_crb_class 7
#define SFCATRN_ocb_class 8
#define TFCATRN_ccb_class 9
#define UFCATRN_osb_class 10
#define VFCATRN_csb_class 11
#define WFCATRN_op_class 12
#define XFCATRN_slash_class 13
#define YFCATRN_slashslash_class 14
#define ZFCATRN_ampersand_class 15
#define AGCATRN_dotdot_class 16
#define BGCATRN_becomes_class 17
#define CGCATRN_comma_class 18
#define DGCATRN_colon_class 19
#define EGCATRN_stepterm_class 20
#define FGCATRN_string_class 21
#define GGCATRN_qmark_class 22
#define HGCATRN_at_class 23
#define IGCATRN_stroke_class 24
#define JGCATRN_equals_class 25
#define KGCATRN_to_class 26
#define LGCATRN_prime_class 27
#define MGCATRN_hash_class 28
#define NGCATRN_backslash_class 29
#define OGCATRN_forcespace_class 32
#define PGCATRN_num_classes 32
static A68_53  UGCATRN_class_table;
#define ZGCATRN_decstep_clause 1
#define AHCATRN_dec_clause 2
#define BHCATRN_let_clause 3
#define CHCATRN_make_clause 4
#define DHCATRN_join_clause 5
#define EHCATRN_case_clause 6
#define FHCATRN_if_clause 7
#define GHCATRN_print_clause 8
#define HHCATRN_seqstat_clause 9
#define IHCATRN_str_clause 10
#define JHCATRN_newalts_clause 11
#define KHCATRN_terms_clause 12
#define LHCATRN_block_clause 13
#define MHCATRN_serorseq_clause 14
#define NHCATRN_monadic_clause 15
#define OHCATRN_num_clause_types 15
#define PHCATRN_dont_fold 0X0U
#define QHCATRN_fold_if_gt_dither 0X1U
#define RHCATRN_fold_if_no_fit 0X2U
#define SHCATRN_clause_head_mask 0X3U
#define THCATRN_fold_at_sep_if_necessary 0X4U
#define UHCATRN_fold_at_sep_if_folded 0X8U
#define VHCATRN_fold_at_every_sep 0XcU
#define WHCATRN_clause_sep_mask 0XcU
#define XHCATRN_take_newline 0X10U
#define YHCATRN_take_extra_nl 0X20U
#define ZHCATRN_clause_tail_mask 0X30U
#define AICATRN_fold_to_indent 0X40U
#define BICATRN_fold_to_refpt 0X80U
#define CICATRN_fold_mode_mask 0Xc0U
#define DICATRN_mark_indent 0X100U
#define EICATRN_step_indent 0X200U
#define FICATRN_indent_mask 0X300U
static A68_53  KICATRN_clause_states;
static A68_INT  AJCATRN_next_class;
static A68_INT  BJCATRN_last_class;
static A68_97  LKCATRN_indent_data;

A68_BOOL  EFCATRN_layout_format_changed(void);

A_STATIC A68_VOID  RGCATRN_generator(A68_BOOL  QGCATRN_anonymous, A68_53  *ReturnedValue);

A_STATIC A68_VOID  HICATRN_generator(A68_BOOL  GICATRN_anonymous, A68_53  *ReturnedValue);

A68_BITS  QICATRN_get_clause_state(A68_INT  Type);

A68_BITS  VICATRN_set_clause_state(A68_INT  Type, A68_BITS  Item, A68_BOOL  State);

A68_VOID  DJCATRN_set_next_class(A68_INT  Class);

A68_VOID  FJCATRN_set_last_class(A68_INT  Class);

A68_BOOL  JJCATRN_set_class_table(A68_INT  Left, A68_INT  Right, A68_BOOL  State);

A68_BOOL  UJCATRN_space_required(A68_VC  N);

A68_VOID  MKCATRN_get_indent_data(A68_97  *ReturnedValue);

A68_VOID  QKCATRN_set_indent_data(A68_INT  Step, A68_INT  Dither);

A68_BOOL  EFCATRN_layout_format_changed(void)
{ 
A68_BOOL  FFCATRN_result;
A68_BOOL  GFCATRN;  /* clause result */
A_PROC_ENTRY(layout_format_changed);
{ 
FFCATRN_result = DFCATRN_format_changes;
 /* line 55: */
DFCATRN_format_changes = A68_FALSE;
 /* line 56: */
 /* line 57: */
GFCATRN = FFCATRN_result;
} 
A_PROC_EXIT(layout_format_changed);
return( GFCATRN );
} 
#undef NL

A_STATIC A68_VOID  RGCATRN_generator(A68_BOOL  QGCATRN_anonymous, A68_53  *ReturnedValue)
{ 
A68_53  SGCATRN;  /* clause result */
A68_53  TGCATRN;  /* OPERATORS - dynamic generator */
{ 
TGCATRN.upb = PGCATRN_num_classes ;
( QGCATRN_anonymous? A_VLOC(A68_BITS ,TGCATRN): A_VHEAP(A68_BITS ,TGCATRN) );
SGCATRN = TGCATRN;
} 
*ReturnedValue = (SGCATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  HICATRN_generator(A68_BOOL  GICATRN_anonymous, A68_53  *ReturnedValue)
{ 
A68_53  IICATRN;  /* clause result */
A68_53  JICATRN;  /* OPERATORS - dynamic generator */
{ 
JICATRN.upb = OHCATRN_num_clause_types ;
( GICATRN_anonymous? A_VLOC(A68_BITS ,JICATRN): A_VHEAP(A68_BITS ,JICATRN) );
IICATRN = JICATRN;
} 
*ReturnedValue = (IICATRN);
return;
} 
#undef NL

A68_BITS  QICATRN_get_clause_state(A68_INT  Type)
{ 
A68_BITS  RICATRN;  /* clause result */
A_PROC_ENTRY(get_clause_state);
RICATRN = (*(&A_VINDEX(KICATRN_clause_states,Type)));
A_PROC_EXIT(get_clause_state);
return( RICATRN );
} 
#undef NL

A68_BITS  VICATRN_set_clause_state(A68_INT  Type, A68_BITS  Item, A68_BOOL  State)
{ 
A68_BITS * WICATRN_entry;
A68_BITS  XICATRN_current;
A68_BITS  YICATRN;  /* clause result */
A68_BITS  ZICATRN;  /* clause result */
A_PROC_ENTRY(set_clause_state);
 /* line 249: */
 /* line 250: */
{ 
WICATRN_entry = (&A_VINDEX(KICATRN_clause_states,Type));
 /* line 251: */
XICATRN_current = (*WICATRN_entry);
 /* line 253: */
DFCATRN_format_changes = A68_TRUE;
 /* line 254: */
if ( State )
{ 
 /* line 255: */
YICATRN = (A68_BITS )(XICATRN_current|Item);
} 
else
{ 
 /* line 256: */
YICATRN = (A68_BITS )(XICATRN_current&~Item);
} 
(*WICATRN_entry) = YICATRN;
 /* line 257: */
 /* line 258: */
ZICATRN = XICATRN_current;
} 
A_PROC_EXIT(set_clause_state);
return( ZICATRN );
} 
#undef NL

A68_VOID  DJCATRN_set_next_class(A68_INT  Class)
{ 
A_PROC_ENTRY(set_next_class);
AJCATRN_next_class = Class;
A_PROC_EXIT(set_next_class);
return;
} 
#undef NL

A68_VOID  FJCATRN_set_last_class(A68_INT  Class)
{ 
A_PROC_ENTRY(set_last_class);
BJCATRN_last_class = Class;
A_PROC_EXIT(set_last_class);
return;
} 
#undef NL

A68_BOOL  JJCATRN_set_class_table(A68_INT  Left, A68_INT  Right, A68_BOOL  State)
{ 
A68_BOOL  KJCATRN;  /* optbool result */
A68_BOOL  LJCATRN;  /* clause result */
A68_BOOL  MJCATRN;  /* optbool result */
A68_BITS  NJCATRN;  /* SHL */
A68_INT  OJCATRN;  /* SHL */
A68_BITS  PJCATRN_col;
A68_BITS * QJCATRN_row;
A68_BITS  RJCATRN_current;
A68_BITS  SJCATRN;  /* clause result */
A_PROC_ENTRY(set_class_table);
 /* line 267: */
 /* line 268: */
{ 
KJCATRN = (Left<=LFCATRN_space_class);
if ( ! KJCATRN )
{KJCATRN = (Right<=LFCATRN_space_class);
}
 /* line 269: */
if ( KJCATRN )
{ 
 /* line 270: */
LJCATRN = A68_FALSE;
} 
else
{ 
MJCATRN = (Left>=OGCATRN_forcespace_class);
if ( ! MJCATRN )
{MJCATRN = (Right>=OGCATRN_forcespace_class);
}
 /* line 271: */
if ( MJCATRN )
{ 
 /* line 272: */
 /* line 273: */
LJCATRN = A68_TRUE;
} 
else
{ 
NJCATRN = 0X1U ;
OJCATRN = (Left-1) ;
PJCATRN_col = A_SHL(NJCATRN,OJCATRN);
 /* line 274: */
QJCATRN_row = (&A_VINDEX(UGCATRN_class_table,Right));
 /* line 275: */
RJCATRN_current = (A68_BITS )((*QJCATRN_row)&PJCATRN_col);
 /* line 277: */
DFCATRN_format_changes = A68_TRUE;
 /* line 278: */
if ( State )
{ 
SJCATRN = (A68_BITS )((*QJCATRN_row)|PJCATRN_col);
} 
else
{ 
SJCATRN = (A68_BITS )((*QJCATRN_row)&~PJCATRN_col);
} 
(*QJCATRN_row) = SJCATRN;
 /* line 279: */
 /* line 280: */
 /* line 281: */
LJCATRN = (RJCATRN_current!=0X0U);
} 
} 
} 
A_PROC_EXIT(set_class_table);
return( LJCATRN );
} 
#undef NL

A68_BOOL  UJCATRN_space_required(A68_VC  N)
{ 
A68_INT  VJCATRN_isize;
A68_INT  WJCATRN;  /* clause result */
A68_INT  XJCATRN;  /* YIELD */
A68_INT  YJCATRN;  /* YIELD */
A68_INT  ZJCATRN_class;
A68_BITS  AKCATRN;  /* SHL */
A68_INT  BKCATRN;  /* SHL */
A68_BOOL  CKCATRN_need_space;
A68_BOOL  DKCATRN;  /* optbool result */
A68_INT  EKCATRN;  /* YIELD */
A68_INT  FKCATRN;  /* YIELD */
A68_INT  GKCATRN;  /* clause result */
A68_BOOL  HKCATRN;  /* optbool result */
A68_INT  IKCATRN;  /* YIELD */
A68_BOOL  JKCATRN;  /* clause result */
A_PROC_ENTRY(space_required);
 /* line 284: */
 /* line 285: */
{ 
VJCATRN_isize = N.upb;
 /* line 286: */
 /* line 287: */
if ( (AJCATRN_next_class!=KFCATRN_no_class) )
{ 
WJCATRN = AJCATRN_next_class;
} 
else
{ 
 /* line 288: */
XJCATRN = 1 ;
YJCATRN = ((A68_INT)(unsigned char)A_VINDEX(N,XJCATRN)+1) ;
WJCATRN = A_VINDEX(JFCATRN_char_types,YJCATRN);
} 
ZJCATRN_class = WJCATRN;
 /* line 289: */
 /* line 290: */
AKCATRN = 0X1U ;
BKCATRN = (BJCATRN_last_class-1) ;
CKCATRN_need_space = ((A68_BITS )(A_SHL(AKCATRN,BKCATRN)&(*(&A_VINDEX(UGCATRN_class_table,ZJCATRN_class))))!=0X0U);
 /* line 292: */
 /* line 293: */
DKCATRN = (ZJCATRN_class==NFCATRN_fnname_class);
if ( DKCATRN )
{EKCATRN = 1 ;
FKCATRN = ((A68_INT)(unsigned char)A_VINDEX(N,EKCATRN)+1) ;
DKCATRN = (A_VINDEX(JFCATRN_char_types,FKCATRN)!=MFCATRN_upper_class);
}
 /* line 295: */
if ( DKCATRN )
{ 
GKCATRN = OGCATRN_forcespace_class;
} 
else
{ 
 /* line 296: */
HKCATRN = (VJCATRN_isize==1);
if ( ! HKCATRN )
{HKCATRN = (AJCATRN_next_class!=KFCATRN_no_class);
}
 /* line 297: */
if ( ! HKCATRN )
{HKCATRN = (ZJCATRN_class==FGCATRN_string_class);
}
 /* line 298: */
if ( ! HKCATRN )
{HKCATRN = (ZJCATRN_class==LGCATRN_prime_class);
}
 /* line 299: */
if ( ! HKCATRN )
{HKCATRN = (ZJCATRN_class==MFCATRN_upper_class);
}
 /* line 300: */
if ( ! HKCATRN )
{HKCATRN = (ZJCATRN_class==OFCATRN_lower_class);
}
 /* line 301: */
if ( ! HKCATRN )
{HKCATRN = (ZJCATRN_class==PFCATRN_digit_class);
}
 /* line 303: */
if ( HKCATRN )
{ 
 /* line 304: */
GKCATRN = ZJCATRN_class;
} 
else
{ 
 /* line 305: */
IKCATRN = ((A68_INT)(unsigned char)A_VINDEX(N,VJCATRN_isize)+1) ;
GKCATRN = A_VINDEX(JFCATRN_char_types,IKCATRN);
} 
} 
BJCATRN_last_class = GKCATRN;
 /* line 306: */
AJCATRN_next_class = KFCATRN_no_class;
 /* line 307: */
 /* line 308: */
JKCATRN = CKCATRN_need_space;
} 
A_PROC_EXIT(space_required);
return( JKCATRN );
} 
#undef NL

A68_VOID  MKCATRN_get_indent_data(A68_97  *ReturnedValue)
{ 
A68_97  NKCATRN;  /* clause result */
A_PROC_ENTRY(get_indent_data);
NKCATRN = LKCATRN_indent_data;
A_PROC_EXIT(get_indent_data);
*ReturnedValue = (NKCATRN);
return;
} 
#undef NL

A68_VOID  QKCATRN_set_indent_data(A68_INT  Step, A68_INT  Dither)
{ 
A68_97  RKCATRN;  /* collateral clause result */
A_PROC_ENTRY(set_indent_data);
 /* line 315: */
 /* line 316: */
{ 
DFCATRN_format_changes = A68_TRUE;
 /* line 317: */
RKCATRN.Step = Step;
 /* line 318: */
RKCATRN.Dither = Dither;
LKCATRN_indent_data = RKCATRN;
} 
A_PROC_EXIT(set_indent_data);
return;
} 
#undef NL
 /* line 1: */
 /* line 4: */
void YECATRN(void)   /* initialise DECS layout_tables */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/layout_tables.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_99  HFCATRN;  /* collateral clause result */
A68_32  IFCATRN;  /* OPERATORS - istruct -> vector */
A68_53  VGCATRN;  /* avoid structure result */
A68_101  WGCATRN;  /* collateral clause result */
A68_53  XGCATRN;  /* OPERATORS - istruct -> vector */
A68_53  YGCATRN;  /* OPERATORS - assign op */
A68_53  LICATRN;  /* avoid structure result */
A68_102  MICATRN;  /* collateral clause result */
A68_53  NICATRN;  /* OPERATORS - istruct -> vector */
A68_53  OICATRN;  /* OPERATORS - assign op */
A68_97  KKCATRN;  /* collateral clause result */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/transform/assoc/./a68files/layout_tables.a68";
A_config.translation_time = "Tue Apr  4 09:58:36 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "XECATRN (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 09:58:36 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS layout_tables);
UEAALIB_a68config(LGAALIB_configinfo, CFCATRN);
 /* line 46: */
 /* line 47: */
 /* line 49: */
DFCATRN_format_changes = A68_TRUE;
 /* line 51: */
 /* line 52: */
 /* line 53: */
 /* line 61: */
 /* line 62: */
HFCATRN.data[0] = 0;
HFCATRN.data[1] = 0;
HFCATRN.data[2] = 0;
HFCATRN.data[3] = 0;
HFCATRN.data[4] = 0;
HFCATRN.data[5] = 0;
HFCATRN.data[6] = 0;
HFCATRN.data[7] = 0;
HFCATRN.data[8] = 0;
HFCATRN.data[9] = 0;
HFCATRN.data[10] = 0;
HFCATRN.data[11] = 0;
HFCATRN.data[12] = 0;
HFCATRN.data[13] = 0;
HFCATRN.data[14] = 0;
 /* line 63: */
HFCATRN.data[15] = 0;
HFCATRN.data[16] = 0;
HFCATRN.data[17] = 0;
HFCATRN.data[18] = 0;
HFCATRN.data[19] = 0;
HFCATRN.data[20] = 0;
HFCATRN.data[21] = 0;
HFCATRN.data[22] = 0;
HFCATRN.data[23] = 0;
HFCATRN.data[24] = 0;
HFCATRN.data[25] = 0;
HFCATRN.data[26] = 0;
HFCATRN.data[27] = 0;
HFCATRN.data[28] = 0;
HFCATRN.data[29] = 0;
HFCATRN.data[30] = 0;
 /* line 64: */
HFCATRN.data[31] = 0;
HFCATRN.data[32] = 1;
HFCATRN.data[33] = 0;
HFCATRN.data[34] = 21;
HFCATRN.data[35] = 28;
HFCATRN.data[36] = 0;
HFCATRN.data[37] = 12;
HFCATRN.data[38] = 15;
HFCATRN.data[39] = 27;
HFCATRN.data[40] = 6;
HFCATRN.data[41] = 7;
HFCATRN.data[42] = 12;
HFCATRN.data[43] = 12;
HFCATRN.data[44] = 18;
HFCATRN.data[45] = 12;
HFCATRN.data[46] = 20;
 /* line 65: */
HFCATRN.data[47] = 13;
HFCATRN.data[48] = 5;
HFCATRN.data[49] = 5;
HFCATRN.data[50] = 5;
HFCATRN.data[51] = 5;
HFCATRN.data[52] = 5;
HFCATRN.data[53] = 5;
HFCATRN.data[54] = 5;
HFCATRN.data[55] = 5;
HFCATRN.data[56] = 5;
HFCATRN.data[57] = 5;
HFCATRN.data[58] = 19;
HFCATRN.data[59] = 20;
HFCATRN.data[60] = 12;
HFCATRN.data[61] = 25;
HFCATRN.data[62] = 12;
 /* line 66: */
HFCATRN.data[63] = 22;
HFCATRN.data[64] = 23;
HFCATRN.data[65] = 2;
HFCATRN.data[66] = 2;
HFCATRN.data[67] = 2;
HFCATRN.data[68] = 2;
HFCATRN.data[69] = 2;
HFCATRN.data[70] = 2;
HFCATRN.data[71] = 2;
HFCATRN.data[72] = 2;
HFCATRN.data[73] = 2;
HFCATRN.data[74] = 2;
HFCATRN.data[75] = 2;
HFCATRN.data[76] = 2;
HFCATRN.data[77] = 2;
HFCATRN.data[78] = 2;
 /* line 67: */
HFCATRN.data[79] = 2;
HFCATRN.data[80] = 2;
HFCATRN.data[81] = 2;
HFCATRN.data[82] = 2;
HFCATRN.data[83] = 2;
HFCATRN.data[84] = 2;
HFCATRN.data[85] = 2;
HFCATRN.data[86] = 2;
HFCATRN.data[87] = 2;
HFCATRN.data[88] = 2;
HFCATRN.data[89] = 2;
HFCATRN.data[90] = 2;
HFCATRN.data[91] = 10;
HFCATRN.data[92] = 29;
HFCATRN.data[93] = 11;
HFCATRN.data[94] = 0;
 /* line 68: */
HFCATRN.data[95] = 4;
HFCATRN.data[96] = 0;
HFCATRN.data[97] = 4;
HFCATRN.data[98] = 4;
HFCATRN.data[99] = 4;
HFCATRN.data[100] = 4;
HFCATRN.data[101] = 4;
HFCATRN.data[102] = 4;
HFCATRN.data[103] = 4;
HFCATRN.data[104] = 4;
HFCATRN.data[105] = 4;
HFCATRN.data[106] = 4;
HFCATRN.data[107] = 4;
HFCATRN.data[108] = 4;
HFCATRN.data[109] = 4;
HFCATRN.data[110] = 4;
 /* line 69: */
HFCATRN.data[111] = 4;
HFCATRN.data[112] = 4;
HFCATRN.data[113] = 4;
HFCATRN.data[114] = 4;
HFCATRN.data[115] = 4;
HFCATRN.data[116] = 4;
HFCATRN.data[117] = 4;
HFCATRN.data[118] = 4;
HFCATRN.data[119] = 4;
HFCATRN.data[120] = 4;
HFCATRN.data[121] = 4;
HFCATRN.data[122] = 4;
HFCATRN.data[123] = 8;
HFCATRN.data[124] = 24;
HFCATRN.data[125] = 9;
HFCATRN.data[126] = 0;
HFCATRN.data[127] = 0;
JFCATRN_char_types = A_HISVEC(IFCATRN,HFCATRN,128,A68_INT );
 /* line 70: */
 /* line 71: */
 /* line 72: */
 /* line 73: */
 /* line 74: */
 /* line 75: */
 /* line 76: */
 /* line 77: */
 /* line 78: */
 /* line 79: */
 /* line 80: */
 /* line 81: */
 /* line 82: */
 /* line 83: */
 /* line 84: */
 /* line 85: */
 /* line 86: */
 /* line 87: */
 /* line 88: */
 /* line 89: */
 /* line 90: */
 /* line 91: */
 /* line 92: */
 /* line 93: */
 /* line 94: */
 /* line 95: */
 /* line 96: */
 /* line 97: */
 /* line 98: */
 /* line 99: */
 /* line 100: */
 /* line 101: */
 /* line 146: */
RGCATRN_generator( A68_TRUE, &VGCATRN );
UGCATRN_class_table = VGCATRN;
 /* line 149: */
 /* line 150: */
WGCATRN.data[0] = 0X80000000U;
 /* line 151: */
WGCATRN.data[1] = 0X8ffffdfeU;
 /* line 152: */
WGCATRN.data[2] = 0X8fff59deU;
 /* line 153: */
WGCATRN.data[3] = 0X8bdf495eU;
 /* line 154: */
WGCATRN.data[4] = 0X8fff495eU;
 /* line 155: */
WGCATRN.data[5] = 0X8fff4adeU;
 /* line 156: */
WGCATRN.data[6] = 0X8fffff86U;
 /* line 157: */
WGCATRN.data[7] = 0X8fff4b7eU;
 /* line 158: */
WGCATRN.data[8] = 0X8ffffee6U;
 /* line 159: */
WGCATRN.data[9] = 0X8fff4b86U;
 /* line 160: */
WGCATRN.data[10] = 0X8fffffe6U;
 /* line 161: */
WGCATRN.data[11] = 0X8fffffdeU;
 /* line 162: */
WGCATRN.data[12] = 0X8ffffba6U;
 /* line 163: */
WGCATRN.data[13] = 0X8ffffba6U;
 /* line 164: */
WGCATRN.data[14] = 0X8ffffffeU;
 /* line 165: */
WGCATRN.data[15] = 0X8beffba6U;
 /* line 166: */
WGCATRN.data[16] = 0X8ffffffeU;
 /* line 167: */
WGCATRN.data[17] = 0X8beffaa0U;
 /* line 168: */
WGCATRN.data[18] = 0X8bfffaa2U;
 /* line 169: */
WGCATRN.data[19] = 0X8beffaa0U;
 /* line 170: */
WGCATRN.data[20] = 0X8fff7fdeU;
 /* line 171: */
WGCATRN.data[21] = 0X8ffffbdeU;
 /* line 172: */
WGCATRN.data[22] = 0X8ffffffeU;
 /* line 173: */
WGCATRN.data[23] = 0X8ffffffeU;
 /* line 174: */
WGCATRN.data[24] = 0X8ffffffeU;
 /* line 175: */
WGCATRN.data[25] = 0X8ffffffeU;
 /* line 176: */
WGCATRN.data[26] = 0X8fff7fd6U;
 /* line 177: */
WGCATRN.data[27] = 0X8ffffff6U;
 /* line 178: */
WGCATRN.data[28] = 0X8ffffb86U;
 /* line 179: */
WGCATRN.data[29] = 0X80000000U;
 /* line 180: */
WGCATRN.data[30] = 0X80000000U;
WGCATRN.data[31] = 0XffffffffU;
YGCATRN = A_HISVEC(XGCATRN,WGCATRN,32,A68_BITS ) ;
A_VASSIGN2(YGCATRN,UGCATRN_class_table,A68_BITS );
 /* line 184: */
 /* line 185: */
 /* line 186: */
 /* line 187: */
 /* line 188: */
 /* line 189: */
 /* line 190: */
 /* line 191: */
 /* line 192: */
 /* line 193: */
 /* line 194: */
 /* line 195: */
 /* line 196: */
 /* line 197: */
 /* line 198: */
 /* line 199: */
 /* line 201: */
 /* line 203: */
 /* line 204: */
 /* line 205: */
 /* line 207: */
 /* line 208: */
 /* line 209: */
 /* line 210: */
 /* line 212: */
 /* line 213: */
 /* line 214: */
 /* line 216: */
 /* line 217: */
 /* line 218: */
 /* line 220: */
 /* line 221: */
 /* line 222: */
 /* line 224: */
HICATRN_generator( A68_TRUE, &LICATRN );
KICATRN_clause_states = LICATRN;
 /* line 230: */
 /* line 231: */
MICATRN.data[0] = 0XacU;
 /* line 232: */
MICATRN.data[1] = 0X254U;
 /* line 233: */
MICATRN.data[2] = 0X29cU;
 /* line 234: */
MICATRN.data[3] = 0X29cU;
 /* line 235: */
MICATRN.data[4] = 0X29cU;
 /* line 236: */
MICATRN.data[5] = 0X289U;
 /* line 237: */
MICATRN.data[6] = 0X289U;
 /* line 238: */
MICATRN.data[7] = 0X29cU;
 /* line 239: */
MICATRN.data[8] = 0X9aU;
 /* line 240: */
MICATRN.data[9] = 0X384U;
 /* line 241: */
MICATRN.data[10] = 0X284U;
 /* line 242: */
MICATRN.data[11] = 0X86U;
 /* line 243: */
MICATRN.data[12] = 0X25cU;
 /* line 244: */
MICATRN.data[13] = 0X5dU;
MICATRN.data[14] = 0X386U;
OICATRN = A_HISVEC(NICATRN,MICATRN,15,A68_BITS ) ;
A_VASSIGN2(OICATRN,KICATRN_clause_states,A68_BITS );
 /* line 246: */
 /* line 248: */
 /* line 260: */
AJCATRN_next_class = KFCATRN_no_class;
 /* line 261: */
BJCATRN_last_class = LFCATRN_space_class;
 /* line 263: */
 /* line 264: */
 /* line 266: */
 /* line 283: */
 /* line 310: */
KKCATRN.Step = 3;
KKCATRN.Dither = 3;
LKCATRN_indent_data = KKCATRN;
 /* line 312: */
 /* line 314: */
 /* line 321: */
 /* line 322: */
 /* line 342: */
/*SKIP*/;
A_PROC_EXIT(DECS layout_tables);
} 
#undef NL
/* end of translation of ./a68files/layout_tables.a68 */
