
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
/* UNAME:ZDCAOSI */
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
struct A68t46{
A68_INT  Number;
A_PAD_INT(PAD_1)
struct A68t47 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_2)
};
typedef struct A68t46  A68_46 ;    /* STRUCT(INT,REF MODE47,BITS)  */
A_VECTOR(struct A68t49 ,A68t48);
typedef struct A68t48  A68_48 ;    /* VECTOR [] MODE49 */
struct A68t49{
struct A68t46  Msgno;
A68_VC  Text;
};
typedef struct A68t49  A68_49 ;    /* STRUCT(MODE46,REF MODE26)  */
struct A68t47{
A68_VC  Name;
struct A68t48  Messages;
};
typedef struct A68t47  A68_47 ;    /* STRUCT(REF MODE26,REF MODE48)  */

A_PROCEDURE(A68_VOID ,A68t50,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t50  A68_50 ;    /* PROC(BOOL) MODE26 */
A_VECTOR(A68_VC ,A68t51);
typedef struct A68t51  A68_51 ;    /* VECTOR [] MODE26 */

A_PROCEDURE(A68_VOID ,A68t52,(A68_BOOL ,struct A68t51 *),(A68_BOOL ,struct A68t51 *,void *));
typedef struct A68t52  A68_52 ;    /* PROC(BOOL) MODE51 */

A_PROCEDURE(A68_VOID ,A68t53,(struct A68t46 ,struct A68t51 ),(struct A68t46 ,struct A68t51 ,void *));
typedef struct A68t53  A68_53 ;    /* PROC(MODE46,MODE51) VOID */
A_VECTOR(struct A68t56 ,A68t55);
typedef struct A68t55  A68_55 ;    /* VECTOR [] MODE56 */
struct A68t56{
A68_INT  Number;
A_PAD_INT(PAD_3)
A68_BITS  Class;
A_PAD_BITS(PAD_4)
A68_VC  Text;
};
typedef struct A68t56  A68_56 ;    /* STRUCT(INT,BITS,MODE26)  */
struct A68t54{
A68_VC  Name;
struct A68t48  Messages;
A68_BOOL * Initialised;
struct A68t55  Setup;
};
typedef struct A68t54  A68_54 ;    /* STRUCT(MODE26,REF MODE48,REF BOOL,MODE55)  */

A_PROCEDURE(A68_VOID ,A68t57,(A68_BOOL ,struct A68t54 *),(A68_BOOL ,struct A68t54 *,void *));
typedef struct A68t57  A68_57 ;    /* PROC(BOOL) MODE54 */

A_PROCEDURE(A68_VOID ,A68t58,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t58  A68_58 ;    /* PROC(MODE26) REF MODE26 */
A_VECTOR(A68_VC ,A68t59);
typedef struct A68t59  A68_59 ;    /* VECTOR [] REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t60,(struct A68t51 ,struct A68t59 *),(struct A68t51 ,struct A68t59 *,void *));
typedef struct A68t60  A68_60 ;    /* PROC(MODE51) MODE59 */

A_PROCEDURE(A68_VOID ,A68t61,(struct A68t59 ,struct A68t51 *),(struct A68t59 ,struct A68t51 *,void *));
typedef struct A68t61  A68_61 ;    /* PROC(MODE59) MODE51 */
struct A68t63 ;

A_PROCEDURE(A68_BOOL ,A68t62,(struct A68t63 ),(struct A68t63 ,void *));
typedef struct A68t62  A68_62 ;    /* PROC(MODE63) BOOL */
struct A68t63 { A68_INT mode; union {
struct A68t46  mode1;
struct A68t49  mode2;
} data; };
typedef struct A68t63  A68_63 ;    /* UNION(MODE46,MODE49)  */

A_PROCEDURE(A68_INT ,A68t64,(struct A68t46 ),(struct A68t46 ,void *));
typedef struct A68t64  A68_64 ;    /* PROC(MODE46) INT */

A_PROCEDURE(A68_VOID ,A68t65,(A68_INT ,struct A68t54 ,struct A68t46 *),(A68_INT ,struct A68t54 ,struct A68t46 *,void *));
typedef struct A68t65  A68_65 ;    /* PROC(INT,MODE54) MODE46 */

A_PROCEDURE(A68_BOOL ,A68t66,(struct A68t46 ,struct A68t54 ),(struct A68t46 ,struct A68t54 ,void *));
typedef struct A68t66  A68_66 ;    /* PROC(MODE46,MODE54) BOOL */

A_PROCEDURE(A68_VOID ,A68t67,(struct A68t46 ,struct A68t51 ,struct A68t49 *),(struct A68t46 ,struct A68t51 ,struct A68t49 *,void *));
typedef struct A68t67  A68_67 ;    /* PROC(MODE46,MODE51) MODE49 */

A_PROCEDURE(A68_VOID ,A68t68,(A68_VC *),(A68_VC *,void *));
typedef struct A68t68  A68_68 ;    /* PROC REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t69,(A68_INT ,struct A68t51 ,struct A68t53 ),(A68_INT ,struct A68t51 ,struct A68t53 ,void *));
typedef struct A68t69  A68_69 ;    /* PROC(INT,MODE51,MODE53) VOID */

A_PROCEDURE(A68_VOID ,A68t70,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t70  A68_70 ;    /* PROC(BITS) VOID */
struct A68t72 ;

A_PROCEDURE(A68_VOID ,A68t71,(struct A68t72 ),(struct A68t72 ,void *));
typedef struct A68t71  A68_71 ;    /* PROC(MODE72) VOID */

A_PROCEDURE(A68_VOID ,A68t72,(A68_VC ),(A68_VC ,void *));
typedef struct A68t72  A68_72 ;    /* PROC(MODE26) VOID */
struct A68t73{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_5)
};
typedef struct A68t73  A68_73 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t74,(A68_BOOL ,struct A68t73 *),(A68_BOOL ,struct A68t73 *,void *));
typedef struct A68t74  A68_74 ;    /* PROC(BOOL) MODE73 */
struct A68t76 ;

A_PROCEDURE(A68_VOID ,A68t75,(struct A68t76 ,struct A68t53 ),(struct A68t76 ,struct A68t53 ,void *));
typedef struct A68t75  A68_75 ;    /* PROC(MODE76,MODE53) VOID */
A_VECTOR(struct A68t73 ,A68t76);
typedef struct A68t76  A68_76 ;    /* VECTOR [] MODE73 */

A_PROCEDURE(A68_INT ,A68t77,(A68_VC ,struct A68t53 ),(A68_VC ,struct A68t53 ,void *));
typedef struct A68t77  A68_77 ;    /* PROC(MODE26,MODE53) INT */

A_PROCEDURE(A68_INT *,A68t78,(A68_INT *,A68_VC ),(A68_INT *,A68_VC ,void *));
typedef struct A68t78  A68_78 ;    /* PROC(REF INT,MODE26) REF INT */

A_PROCEDURE(A68_VOID ,A68t79,(A68_VC ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t79  A68_79 ;    /* PROC(REF MODE26,INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t80,(A68_VC ,A68_CHAR ,A68_VC *),(A68_VC ,A68_CHAR ,A68_VC *,void *));
typedef struct A68t80  A68_80 ;    /* PROC(REF MODE26,CHAR) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t81,(A68_VC ,A68_CHAR ,A68_VC *),(A68_VC ,A68_CHAR ,A68_VC *,void *));
typedef struct A68t81  A68_81 ;    /* PROC(MODE26,CHAR) MODE26 */

A_PROCEDURE(A68_VOID ,A68t82,(struct A68t51 ,A68_VC *),(struct A68t51 ,A68_VC *,void *));
typedef struct A68t82  A68_82 ;    /* PROC(MODE51) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t83,(A68_CHAR ,A68_VC ),(A68_CHAR ,A68_VC ,void *));
typedef struct A68t83  A68_83 ;    /* PROC(CHAR,MODE26) INT */

A_PROCEDURE(A68_VOID ,A68t84,(A68_VC ,A68_CHAR ),(A68_VC ,A68_CHAR ,void *));
typedef struct A68t84  A68_84 ;    /* PROC(REF MODE26,CHAR) VOID */
A_ISTRUCT(A68_CHAR ,4,A68t85);
typedef struct A68t85  A68_85 ;    /* STRUCT 4 CHAR */

A_PROCEDURE(struct A68t85 ,A68t86,(A68_INT ),(A68_INT ,void *));
typedef struct A68t86  A68_86 ;    /* PROC(INT) MODE85 */

A_PROCEDURE(A68_INT ,A68t87,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t87  A68_87 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_VOID ,A68t88,(A68_CHAR ,A68_VC ,A68_VC *),(A68_CHAR ,A68_VC ,A68_VC *,void *));
typedef struct A68t88  A68_88 ;    /* PROC(CHAR,REF MODE26) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t89,(A68_VC ),(A68_VC ,void *));
typedef struct A68t89  A68_89 ;    /* PROC(MODE26) INT */

A_PROCEDURE(A68_BITS ,A68t90,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t90  A68_90 ;    /* PROC(BITS,BITS) BITS */

A_PROCEDURE(A68_LBITS ,A68t91,(A68_LBITS ,A68_LBITS ),(A68_LBITS ,A68_LBITS ,void *));
typedef struct A68t91  A68_91 ;    /* PROC(LONG BITS,LONG BITS) LONG BITS */

A_PROCEDURE(A68_BITS *,A68t92,(A68_BITS *,A68_BITS ),(A68_BITS *,A68_BITS ,void *));
typedef struct A68t92  A68_92 ;    /* PROC(REF BITS,BITS) REF BITS */

A_PROCEDURE(A68_VOID ,A68t93,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t93  A68_93 ;    /* PROC(INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t94,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t94  A68_94 ;    /* PROC(INT,INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t95,(A68_LINT ,A68_INT ,A68_VC *),(A68_LINT ,A68_INT ,A68_VC *,void *));
typedef struct A68t95  A68_95 ;    /* PROC(LONG INT,INT) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t96,(A68_CHAR ,A68_INT *,A68_VC ),(A68_CHAR ,A68_INT *,A68_VC ,void *));
typedef struct A68t96  A68_96 ;    /* PROC(CHAR,REF INT,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t97,(A68_LBITS ,A68_INT ,A68_VC *),(A68_LBITS ,A68_INT ,A68_VC *,void *));
typedef struct A68t97  A68_97 ;    /* PROC(LONG BITS,INT) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t98,(A68_INT *,A68_VC ),(A68_INT *,A68_VC ,void *));
typedef struct A68t98  A68_98 ;    /* PROC(REF INT,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t99,(struct A68t39 ),(struct A68t39 ,void *));
typedef struct A68t99  A68_99 ;    /* PROC(MODE39) VOID */

A_PROCEDURE(A68_VOID ,A68t100,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t100  A68_100 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,56,A68t101);
typedef struct A68t101  A68_101 ;    /* STRUCT 56 CHAR */
struct A68t102{
A68_INT  Sigset;
A_PAD_INT(PAD_6)
};
typedef struct A68t102  A68_102 ;    /* STRUCT(INT)  */
struct A68t103{
A68_INT  Sigaction;
A_PAD_INT(PAD_7)
};
typedef struct A68t103  A68_103 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_INT ,A68t104,(A68_INT ),(A68_INT ,void *));
typedef struct A68t104  A68_104 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_INT ,A68t105,(A68_INT ,struct A68t103 *,struct A68t103 *),(A68_INT ,struct A68t103 *,struct A68t103 *,void *));
typedef struct A68t105  A68_105 ;    /* PROC(INT,REF MODE103,REF MODE103) INT */

A_PROCEDURE(A68_INT ,A68t106,(struct A68t102 *,A68_INT ),(struct A68t102 *,A68_INT ,void *));
typedef struct A68t106  A68_106 ;    /* PROC(REF MODE102,INT) INT */

A_PROCEDURE(A68_INT ,A68t107,(struct A68t102 *),(struct A68t102 *,void *));
typedef struct A68t107  A68_107 ;    /* PROC(REF MODE102) INT */

A_PROCEDURE(A68_INT ,A68t108,(A68_INT ,struct A68t102 *,struct A68t102 *),(A68_INT ,struct A68t102 *,struct A68t102 *,void *));
typedef struct A68t108  A68_108 ;    /* PROC(INT,REF MODE102,REF MODE102) INT */
A_ISTRUCT(A68_CHAR ,10,A68t109);
typedef struct A68t109  A68_109 ;    /* STRUCT 10 CHAR */

A_PROCEDURE(A68_VOID ,A68t110,(A68_BOOL ,struct A68t48 *),(A68_BOOL ,struct A68t48 *,void *));
typedef struct A68t110  A68_110 ;    /* PROC(BOOL) MODE48 */
A_ISTRUCT(A68_CHAR ,6,A68t111);
typedef struct A68t111  A68_111 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,9,A68t112);
typedef struct A68t112  A68_112 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,43,A68t113);
typedef struct A68t113  A68_113 ;    /* STRUCT 43 CHAR */
A_ISTRUCT(A68_CHAR ,34,A68t114);
typedef struct A68t114  A68_114 ;    /* STRUCT 34 CHAR */
A_ISTRUCT(A68_CHAR ,15,A68t115);
typedef struct A68t115  A68_115 ;    /* STRUCT 15 CHAR */
A_ISTRUCT(A68_CHAR ,24,A68t116);
typedef struct A68t116  A68_116 ;    /* STRUCT 24 CHAR */
A_ISTRUCT(A68_CHAR ,22,A68t117);
typedef struct A68t117  A68_117 ;    /* STRUCT 22 CHAR */
A_ISTRUCT(A68_CHAR ,27,A68t118);
typedef struct A68t118  A68_118 ;    /* STRUCT 27 CHAR */
A_ISTRUCT(A68_CHAR ,38,A68t119);
typedef struct A68t119  A68_119 ;    /* STRUCT 38 CHAR */
A_ISTRUCT(A68_CHAR ,11,A68t120);
typedef struct A68t120  A68_120 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,37,A68t121);
typedef struct A68t121  A68_121 ;    /* STRUCT 37 CHAR */
A_ISTRUCT(A68_CHAR ,30,A68t122);
typedef struct A68t122  A68_122 ;    /* STRUCT 30 CHAR */
A_ISTRUCT(A68_CHAR ,33,A68t123);
typedef struct A68t123  A68_123 ;    /* STRUCT 33 CHAR */
A_ISTRUCT(A68_CHAR ,20,A68t124);
typedef struct A68t124  A68_124 ;    /* STRUCT 20 CHAR */
A_ISTRUCT(A68_CHAR ,26,A68t125);
typedef struct A68t125  A68_125 ;    /* STRUCT 26 CHAR */
A_ISTRUCT(A68_CHAR ,31,A68t126);
typedef struct A68t126  A68_126 ;    /* STRUCT 31 CHAR */
A_ISTRUCT(A68_CHAR ,40,A68t127);
typedef struct A68t127  A68_127 ;    /* STRUCT 40 CHAR */
A_ISTRUCT(A68_CHAR ,45,A68t128);
typedef struct A68t128  A68_128 ;    /* STRUCT 45 CHAR */
A_ISTRUCT(A68_CHAR ,28,A68t129);
typedef struct A68t129  A68_129 ;    /* STRUCT 28 CHAR */
A_ISTRUCT(A68_CHAR ,23,A68t130);
typedef struct A68t130  A68_130 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(A68_CHAR ,18,A68t131);
typedef struct A68t131  A68_131 ;    /* STRUCT 18 CHAR */
A_ISTRUCT(A68_CHAR ,14,A68t132);
typedef struct A68t132  A68_132 ;    /* STRUCT 14 CHAR */
A_ISTRUCT(A68_CHAR ,36,A68t133);
typedef struct A68t133  A68_133 ;    /* STRUCT 36 CHAR */
A_ISTRUCT(A68_CHAR ,21,A68t134);
typedef struct A68t134  A68_134 ;    /* STRUCT 21 CHAR */
A_ISTRUCT(struct A68t56 ,31,A68t135);
typedef struct A68t135  A68_135 ;    /* STRUCT 31 MODE56 */
A_VECTOR(struct A68t53 ,A68t136);
typedef struct A68t136  A68_136 ;    /* VECTOR [] MODE53 */

A_PROCEDURE(A68_VOID ,A68t137,(A68_BOOL ,struct A68t136 *),(A68_BOOL ,struct A68t136 *,void *));
typedef struct A68t137  A68_137 ;    /* PROC(BOOL) MODE136 */

A_PROCEDURE(A68_VOID ,A68t138,(struct A68t35 ,struct A68t53 ,struct A68t53 ),(struct A68t35 ,struct A68t53 ,struct A68t53 ,void *));
typedef struct A68t138  A68_138 ;    /* PROC(MODE35,MODE53,MODE53) VOID */
A_ISTRUCT(A68_VC ,2,A68t139);
typedef struct A68t139  A68_139 ;    /* STRUCT 2 MODE26 */

A_PROCEDURE(A68_VOID ,A68t140,(struct A68t35 ,struct A68t53 ),(struct A68t35 ,struct A68t53 ,void *));
typedef struct A68t140  A68_140 ;    /* PROC(MODE35,MODE53) VOID */
A_ISTRUCT(A68_CHAR ,13,A68t141);
typedef struct A68t141  A68_141 ;    /* STRUCT 13 CHAR */

A_PROCEDURE(A68_VOID ,A68t142,(A68_INT ,struct A68t53 ,struct A68t53 *),(A68_INT ,struct A68t53 ,struct A68t53 *,void *));
typedef struct A68t142  A68_142 ;    /* PROC(INT,MODE53) MODE53 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from usefulops --- */
extern A68_VOID  FUAAOSI_whole(A68_INT ,A68_INT ,A68_VC *);
/* --- End of imports from usefulops --- */


/* --- Imports from osgc --- */
#include "Alibrary.h"

#define PBCAOSI_garbage_collect Agc_collect
extern A68_VOID  ODCAOSI_disable_garbage_collector(void);
extern A68_VOID  VDCAOSI_enable_garbage_collector(void);
#include "Alibrary.h"

#define KDCAOSI_alwayscollect A_ALWAYS_COLLECT
#include "Alibrary.h"

#define LDCAOSI_alwaysgrowheap A_ALWAYS_GROW_HEAP
#include "Alibrary.h"

#define MDCAOSI_defaultpolicy A_DEFAULT_POLICY
/* --- End of imports from osgc --- */


/* --- Imports from oserrors --- */
#include <errno.h>

#define XFBAOSI_errno errno
extern A68_VOID  YHBAOSI_osifmessage(A68_INT ,struct A68t51 ,struct A68t53 );
extern A68_53  XLBAOSI_ignore_msg;
extern A68_53  ZLBAOSI_global_msg;
/* --- End of imports from oserrors --- */


/* --- Imports from messageproc --- */
extern A68_BITS  ZIAAOSI_output_class;
extern A68_VOID  HMAAOSI_make_msgno(A68_INT ,struct A68t54 ,A68_46 *);
/* --- End of imports from messageproc --- */


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
extern void JBCAOSI(void);   /* osgc */
extern void SFBAOSI(void);   /* oserrors */
extern void JFAAOSI(void);   /* messageproc */
extern void JDAAOSI(void);   /* cif */
/* --- end of DECS initialisation functions --- */
static A68_101   DECAOSI = {"$Id: ossignals.a68,v 34.2 1995/03/29 13:01:38 ella Exp $"}; 
A_GISVEC(A68_VC ,EECAOSI,DECAOSI,56)
#include <signal.h>
#include <unistd.h>
#define KILL(pid,sig) A_int_INT(kill(A_INT_pid_t(pid),A_INT_int(sig)))

#define FECAOSI_kill KILL
/* extern int raise(); /* #include <signal.h> */
#define myraise(sig) kill(getpid(),(sig))
#define RAISE(sig) A_int_INT(myraise(A_INT_int(sig)))

#define GECAOSI_raise RAISE
#include <signal.h>
#define SIGACTION(sig,act,oact) A_int_INT(sigaction(A_INT_int(sig),(void *)(act),(void *)(oact)))

#define HECAOSI_sigaction SIGACTION
#include <signal.h>
#define SIGADDSET(set,signo) A_int_INT(sigaddset((void *)(set),A_INT_int(signo)))

#define IECAOSI_sigaddset SIGADDSET
#include <signal.h>
#define SIGDELSET(set,signo) A_int_INT(sigdelset((void *)(set),A_INT_int(signo)))

#define JECAOSI_sigdelset SIGDELSET
#include <signal.h>
#define SIGEMPTYSET(set) A_int_INT(sigemptyset((void *)(set)))

#define KECAOSI_sigemptyset SIGEMPTYSET
#include <signal.h>
#define SIGFILLSET(set) A_int_INT(sigfillset((void *)(set)))

#define LECAOSI_sigfillset SIGFILLSET
#include <signal.h>
#define SIGISMEMBER(set,signo) A_int_INT(sigismember((void *)(set),A_INT_int(signo)))

#define MECAOSI_sigismember SIGISMEMBER
#include <signal.h>
#define SIGPENDING(set) A_int_INT(sigpending((void *)(set)))

#define NECAOSI_sigpending SIGPENDING
#include <signal.h>
#define SIGPROCMASK(how,set,oset) A_int_INT(sigprocmask(A_INT_int(how),(void *)(set),(void *)(oset)))

#define OECAOSI_sigprocmask SIGPROCMASK
#include <signal.h>

#define PECAOSI_sig_block SIG_BLOCK
#include <signal.h>

#define QECAOSI_sig_unblock SIG_UNBLOCK
#include <signal.h>

#define RECAOSI_sig_setmask SIG_SETMASK
#include <signal.h>
#define SIGSUSPEND(sigmask) A_int_INT(sigsuspend((sigmask)))

#define SECAOSI_sigsuspend SIGSUSPEND
#include <signal.h>

#define TECAOSI_sighup SIGHUP
#include <signal.h>

#define UECAOSI_sigint SIGINT
#include <signal.h>

#define VECAOSI_sigquit SIGQUIT
#include <signal.h>

#define WECAOSI_sigill SIGILL
#include <signal.h>

#define XECAOSI_sigtrap 5
#include <signal.h>

#define YECAOSI_sigabrt SIGABRT
#include <signal.h>

#define ZECAOSI_sigemt 7
#include <signal.h>

#define AFCAOSI_sigfpe SIGFPE
#include <signal.h>

#define BFCAOSI_sigkill SIGKILL
#include <signal.h>

#define CFCAOSI_sigbus 10
#include <signal.h>

#define DFCAOSI_sigsegv SIGSEGV
#include <signal.h>

#define EFCAOSI_sigsys 12
#include <signal.h>

#define FFCAOSI_sigpipe SIGPIPE
#include <signal.h>

#define GFCAOSI_sigalrm SIGALRM
#include <signal.h>

#define HFCAOSI_sigterm SIGTERM
#include <signal.h>

#define IFCAOSI_sigurg 16
#include <signal.h>

#define JFCAOSI_sigstop SIGSTOP
#include <signal.h>

#define KFCAOSI_sigtstp SIGTSTP
#include <signal.h>

#define LFCAOSI_sigcont SIGCONT
#include <signal.h>

#define MFCAOSI_sigchld SIGCHLD
#include <signal.h>

#define NFCAOSI_sigttin SIGTTIN
#include <signal.h>

#define OFCAOSI_sigttou SIGTTOU
#include <signal.h>

#define PFCAOSI_sigio 23
#include <signal.h>

#define QFCAOSI_sigxcpu 24
#include <signal.h>

#define RFCAOSI_sigxfsz 25
#include <signal.h>

#define SFCAOSI_sigvtalrm 26
#include <signal.h>

#define TFCAOSI_sigprof 27
#include <signal.h>

#define UFCAOSI_sigwinch 28
#include <signal.h>

#define VFCAOSI_siglost 29
#include <signal.h>

#define WFCAOSI_sigusr1 SIGUSR1
#include <signal.h>

#define XFCAOSI_sigusr2 SIGUSR2
#include <signal.h>

#define YFCAOSI_sig_err SIG_ERR
#include <signal.h>

#define ZFCAOSI_sig_dfl SIG_DFL
#include <signal.h>

#define AGCAOSI_sig_ign SIG_IGN
#include <signal.h>

#define BGCAOSI_sig_hold SIG_HOLD
#define CGCAOSI_maxsignals 31
static A68_109   EGCAOSI = {"OS signals"}; 
A_GISVEC(A68_VC ,FGCAOSI,EGCAOSI,10)
static A68_111   NGCAOSI = {"hangup"}; 
A_GISVEC(A68_VC ,OGCAOSI,NGCAOSI,6)
static A68_112   PGCAOSI = {"interrupt"}; 
A_GISVEC(A68_VC ,QGCAOSI,PGCAOSI,9)
static A68_85   RGCAOSI = {"quit"}; 
A_GISVEC(A68_VC ,SGCAOSI,RGCAOSI,4)
static A68_113   TGCAOSI = {"illegal instruction (not reset when caught)"}; 
A_GISVEC(A68_VC ,UGCAOSI,TGCAOSI,43)
static A68_114   VGCAOSI = {"trace trap (not reset when caught)"}; 
A_GISVEC(A68_VC ,WGCAOSI,VGCAOSI,34)
static A68_113   XGCAOSI = {"used by abort, replace SIGIOT in the future"}; 
A_GISVEC(A68_VC ,YGCAOSI,XGCAOSI,43)
static A68_115   ZGCAOSI = {"EMT instruction"}; 
A_GISVEC(A68_VC ,AHCAOSI,ZGCAOSI,15)
static A68_116   BHCAOSI = {"floating point exception"}; 
A_GISVEC(A68_VC ,CHCAOSI,BHCAOSI,24)
static A68_114   DHCAOSI = {"kill (cannot be caught or ignored)"}; 
A_GISVEC(A68_VC ,EHCAOSI,DHCAOSI,34)
static A68_112   FHCAOSI = {"bus error"}; 
A_GISVEC(A68_VC ,GHCAOSI,FHCAOSI,9)
static A68_117   HHCAOSI = {"segmentation violation"}; 
A_GISVEC(A68_VC ,IHCAOSI,HHCAOSI,22)
static A68_118   JHCAOSI = {"bad argument to system call"}; 
A_GISVEC(A68_VC ,KHCAOSI,JHCAOSI,27)
static A68_119   LHCAOSI = {"write on a pipe with no one to read it"}; 
A_GISVEC(A68_VC ,MHCAOSI,LHCAOSI,38)
static A68_120   NHCAOSI = {"alarm clock"}; 
A_GISVEC(A68_VC ,OHCAOSI,NHCAOSI,11)
static A68_121   PHCAOSI = {"software termination signal from kill"}; 
A_GISVEC(A68_VC ,QHCAOSI,PHCAOSI,37)
static A68_122   RHCAOSI = {"urgent condition on IO channel"}; 
A_GISVEC(A68_VC ,SHCAOSI,RHCAOSI,30)
static A68_123   THCAOSI = {"sendable stop signal not from tty"}; 
A_GISVEC(A68_VC ,UHCAOSI,THCAOSI,33)
static A68_124   VHCAOSI = {"stop signal from tty"}; 
A_GISVEC(A68_VC ,WHCAOSI,VHCAOSI,20)
static A68_125   XHCAOSI = {"continue a stopped process"}; 
A_GISVEC(A68_VC ,YHCAOSI,XHCAOSI,26)
static A68_126   ZHCAOSI = {"to parent on child stop or exit"}; 
A_GISVEC(A68_VC ,AICAOSI,ZHCAOSI,31)
static A68_127   BICAOSI = {"to readers pgrp upon background tty read"}; 
A_GISVEC(A68_VC ,CICAOSI,BICAOSI,40)
static A68_128   DICAOSI = {"like TTIN for output if (tp->t_local&LTOSTOP)"}; 
A_GISVEC(A68_VC ,EICAOSI,DICAOSI,45)
static A68_129   FICAOSI = {"input/output possible signal"}; 
A_GISVEC(A68_VC ,GICAOSI,FICAOSI,28)
static A68_130   HICAOSI = {"exceeded CPU time limit"}; 
A_GISVEC(A68_VC ,IICAOSI,HICAOSI,23)
static A68_116   JICAOSI = {"exceeded file size limit"}; 
A_GISVEC(A68_VC ,KICAOSI,JICAOSI,24)
static A68_131   LICAOSI = {"virtual time alarm"}; 
A_GISVEC(A68_VC ,MICAOSI,LICAOSI,18)
static A68_124   NICAOSI = {"profiling time alarm"}; 
A_GISVEC(A68_VC ,OICAOSI,NICAOSI,20)
static A68_132   PICAOSI = {"window changed"}; 
A_GISVEC(A68_VC ,QICAOSI,PICAOSI,14)
static A68_133   RICAOSI = {"resource lost (eg, record-lock lost)"}; 
A_GISVEC(A68_VC ,SICAOSI,RICAOSI,36)
static A68_134   TICAOSI = {"user defined signal 1"}; 
A_GISVEC(A68_VC ,UICAOSI,TICAOSI,21)
static A68_134   VICAOSI = {"user defined signal 2"}; 
A_GISVEC(A68_VC ,WICAOSI,VICAOSI,21)
static A68_54  YICAOSI_signal_facility;
A68_136  DJCAOSI_sig_msgprocs;
A_STATIC struct sigaction osif_handler_sigaction;
#define OSIF_HANDLER_SIGACTION osif_handler_sigaction

#define FJCAOSI_osif_handler_sigaction OSIF_HANDLER_SIGACTION
A_STATIC struct sigaction sigusr1_sigaction;
#define SIGUSR1_SIGACTION sigusr1_sigaction

#define GJCAOSI_sigusr1_sigaction SIGUSR1_SIGACTION
A_STATIC struct sigaction ignore_sigaction;
#define IGNORE_SIGACTION ignore_sigaction

#define HJCAOSI_ignore_sigaction IGNORE_SIGACTION
A_STATIC struct sigaction default_sigaction;
#define DEFAULT_SIGACTION default_sigaction

#define IJCAOSI_default_sigaction DEFAULT_SIGACTION
A_STATIC struct sigaction saved_sigaction;
#define SAVED_SIGACTION saved_sigaction

#define JJCAOSI_saved_sigaction SAVED_SIGACTION
#define KJCAOSI_nil_sigaction (A68_103 *)A68_NIL
#define LJCAOSI_nil_sigset (A68_102 *)A68_NIL
A_STATIC sigset_t all_sigset;
#define ALL_SIGSET all_sigset

#define MJCAOSI_all_sigset ALL_SIGSET
static A68_132   EKCAOSI = {"set_sigmsgproc"}; 
A_GISVEC(A68_VC ,FKCAOSI,EKCAOSI,14)
static A68_109   GKCAOSI = {"signal no "}; 
A_GISVEC(A68_VC ,HKCAOSI,GKCAOSI,10)
static A68_141   TKCAOSI = {"set_sigignore"}; 
A_GISVEC(A68_VC ,UKCAOSI,TKCAOSI,13)
static A68_109   VKCAOSI = {"signal no "}; 
A_GISVEC(A68_VC ,WKCAOSI,VKCAOSI,10)
static A68_132   HLCAOSI = {"set_sigdefault"}; 
A_GISVEC(A68_VC ,ILCAOSI,HLCAOSI,14)
static A68_109   JLCAOSI = {"signal no "}; 
A_GISVEC(A68_VC ,KLCAOSI,JLCAOSI,10)
static A68_132   SLCAOSI = {"get_sigmsgproc"}; 
A_GISVEC(A68_VC ,TLCAOSI,SLCAOSI,14)
static A68_134   ULCAOSI = {"out of range signal: "}; 
A_GISVEC(A68_VC ,VLCAOSI,ULCAOSI,21)

A_STATIC A68_VOID  HGCAOSI_generator(A68_BOOL  GGCAOSI_anonymous, A68_48  *ReturnedValue);

A_STATIC A68_VOID  AJCAOSI_generator(A68_BOOL  ZICAOSI_anonymous, A68_136  *ReturnedValue);

A_STATIC A68_VOID  OJCAOSI_sigusr1_handler(A68_INT  Os_signum);

A_STATIC A68_VOID  QJCAOSI_osif_handler(A68_INT  Os_signum);

A68_VOID  YJCAOSI_set_sigmsgproc(A68_35  Signals, A68_53  Sigmsgproc, A68_53  Msg);

A68_VOID  NKCAOSI_set_sigignore(A68_35  Signals, A68_53  Msg);

A68_VOID  BLCAOSI_set_sigdefault(A68_35  Signals, A68_53  Msg);

A68_VOID  PLCAOSI_get_sigmsgproc(A68_INT  Signal, A68_53  Msg, A68_53  *ReturnedValue);

A68_VOID  ZLCAOSI_init_ossignals(void);

A_STATIC A68_VOID  HGCAOSI_generator(A68_BOOL  GGCAOSI_anonymous, A68_48  *ReturnedValue)
{ 
A68_48  IGCAOSI;  /* clause result */
A68_48  JGCAOSI;  /* OPERATORS - dynamic generator */
{ 
JGCAOSI.upb = CGCAOSI_maxsignals ;
( GGCAOSI_anonymous? A_VLOC(A68_49 ,JGCAOSI): A_VHEAP(A68_49 ,JGCAOSI) );
IGCAOSI = JGCAOSI;
} 
*ReturnedValue = (IGCAOSI);
return;
} 
#undef NL

A_STATIC A68_VOID  AJCAOSI_generator(A68_BOOL  ZICAOSI_anonymous, A68_136  *ReturnedValue)
{ 
A68_136  BJCAOSI;  /* clause result */
A68_136  CJCAOSI;  /* OPERATORS - dynamic generator */
{ 
CJCAOSI.upb = CGCAOSI_maxsignals ;
( ZICAOSI_anonymous? A_VLOC(A68_53 ,CJCAOSI): A_VHEAP(A68_53 ,CJCAOSI) );
BJCAOSI = CJCAOSI;
} 
*ReturnedValue = (BJCAOSI);
return;
} 
#undef NL

A_STATIC A68_VOID  OJCAOSI_sigusr1_handler(A68_INT  Os_signum)
{ 
A_PROC_ENTRY(sigusr1_handler);
 /* line 258: */
 /* line 260: */
{ 
LECAOSI_sigfillset((&MJCAOSI_all_sigset));
 /* line 261: */
OECAOSI_sigprocmask(PECAOSI_sig_block, (&MJCAOSI_all_sigset), LJCAOSI_nil_sigset);
 /* line 264: */
HECAOSI_sigaction(WFCAOSI_sigusr1, (&JJCAOSI_saved_sigaction), KJCAOSI_nil_sigaction);
 /* line 266: */
 /* line 267: */
VDCAOSI_enable_garbage_collector();
} 
A_PROC_EXIT(sigusr1_handler);
return;
} 
#undef NL

A_STATIC A68_VOID  QJCAOSI_osif_handler(A68_INT  Os_signum)
{ 
A68_102  RJCAOSI_sigusr1_sigset;
A68_53  SJCAOSI;  /* CALL */
A68_51  TJCAOSI;  /* OPERATORS - vacuum */
A68_46  UJCAOSI;  /* avoid structure result */
A_PROC_ENTRY(osif_handler);
 /* line 273: */
 /* line 274: */
{ 
 /* line 275: */
KECAOSI_sigemptyset((&RJCAOSI_sigusr1_sigset));
 /* line 276: */
IECAOSI_sigaddset((&RJCAOSI_sigusr1_sigset), WFCAOSI_sigusr1);
 /* line 278: */
ODCAOSI_disable_garbage_collector();
 /* line 281: */
OECAOSI_sigprocmask(PECAOSI_sig_block, (&RJCAOSI_sigusr1_sigset), LJCAOSI_nil_sigset);
 /* line 284: */
HECAOSI_sigaction(WFCAOSI_sigusr1, (&GJCAOSI_sigusr1_sigaction), (&JJCAOSI_saved_sigaction));
 /* line 286: */
GECAOSI_raise(WFCAOSI_sigusr1);
 /* line 289: */
 /* line 290: */
SJCAOSI = (*(&A_VINDEX(DJCAOSI_sig_msgprocs,Os_signum))) ;
HMAAOSI_make_msgno( Os_signum, YICAOSI_signal_facility, &UJCAOSI );
A_CALLPROC(SJCAOSI,(UJCAOSI, A_VVAC(TJCAOSI)),(UJCAOSI, A_VVAC(TJCAOSI),(SJCAOSI).nonlocals));
} 
A_PROC_EXIT(osif_handler);
return;
} 
#undef NL
 /* line 294: */
 /* line 296: */

A68_VOID  YJCAOSI_set_sigmsgproc(A68_35  Signals, A68_53  Sigmsgproc, A68_53  Msg)
{ 
A68_INT  ZJCAOSI_s;
A68_INT * AKCAOSI;  /* forall control - []x */
A68_INT  BKCAOSI;  /* forall loop counter */
A68_BOOL  CKCAOSI;  /* optbool result */
A68_139  DKCAOSI;  /* collateral clause result */
A68_VC  IKCAOSI;  /* avoid structure result */
A68_51  JKCAOSI;  /* OPERATORS - istruct -> vector */
A68_53 * KKCAOSI;  /* YIELD */
A_PROC_ENTRY(set_sigmsgproc);
 /* line 301: */
 /* line 302: */
BKCAOSI = Signals.upb -1;
AKCAOSI = Signals.data;
for (;BKCAOSI-- >= 0;
(AKCAOSI++
) )
{
ZJCAOSI_s = *AKCAOSI;
 /* line 303: */
 /* line 304: */
CKCAOSI = (ZJCAOSI_s<=0);
if ( ! CKCAOSI )
{CKCAOSI = (ZJCAOSI_s>CGCAOSI_maxsignals);
}
 /* line 305: */
if ( ! CKCAOSI )
{ /* line 306: */
CKCAOSI = (HECAOSI_sigaction(ZJCAOSI_s, (&FJCAOSI_osif_handler_sigaction), KJCAOSI_nil_sigaction)!=0);
}
 /* line 307: */
if ( CKCAOSI )
{ 
DKCAOSI.data[0] = FKCAOSI;
FUAAOSI_whole( ZJCAOSI_s, 0, &IKCAOSI );
DKCAOSI.data[1] = A_VC_PLUS(HKCAOSI,IKCAOSI);
 /* line 308: */
 /* line 309: */
YHBAOSI_osifmessage(99, A_HISVEC(JKCAOSI,DKCAOSI,2,A68_VC ), Msg);
} 
else
{ 
 /* line 310: */
 /* line 311: */
KKCAOSI = (&A_VINDEX(DJCAOSI_sig_msgprocs,ZJCAOSI_s)) ;
(*KKCAOSI) = Sigmsgproc;
} 
}
A_PROC_EXIT(set_sigmsgproc);
return;
} 
#undef NL
 /* line 316: */

A68_VOID  NKCAOSI_set_sigignore(A68_35  Signals, A68_53  Msg)
{ 
A68_INT  OKCAOSI_s;
A68_INT * PKCAOSI;  /* forall control - []x */
A68_INT  QKCAOSI;  /* forall loop counter */
A68_BOOL  RKCAOSI;  /* optbool result */
A68_139  SKCAOSI;  /* collateral clause result */
A68_VC  XKCAOSI;  /* avoid structure result */
A68_51  YKCAOSI;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(set_sigignore);
 /* line 321: */
 /* line 322: */
QKCAOSI = Signals.upb -1;
PKCAOSI = Signals.data;
for (;QKCAOSI-- >= 0;
(PKCAOSI++
) )
{
OKCAOSI_s = *PKCAOSI;
 /* line 323: */
 /* line 324: */
RKCAOSI = (OKCAOSI_s<=0);
if ( ! RKCAOSI )
{RKCAOSI = (OKCAOSI_s>CGCAOSI_maxsignals);
}
 /* line 325: */
if ( ! RKCAOSI )
{ /* line 326: */
RKCAOSI = (HECAOSI_sigaction(OKCAOSI_s, (&HJCAOSI_ignore_sigaction), KJCAOSI_nil_sigaction)!=0);
}
 /* line 327: */
if ( RKCAOSI )
{ 
SKCAOSI.data[0] = UKCAOSI;
FUAAOSI_whole( OKCAOSI_s, 0, &XKCAOSI );
SKCAOSI.data[1] = A_VC_PLUS(WKCAOSI,XKCAOSI);
 /* line 328: */
 /* line 329: */
YHBAOSI_osifmessage(99, A_HISVEC(YKCAOSI,SKCAOSI,2,A68_VC ), Msg);
} 
}
A_PROC_EXIT(set_sigignore);
return;
} 
#undef NL
 /* line 334: */

A68_VOID  BLCAOSI_set_sigdefault(A68_35  Signals, A68_53  Msg)
{ 
A68_INT  CLCAOSI_s;
A68_INT * DLCAOSI;  /* forall control - []x */
A68_INT  ELCAOSI;  /* forall loop counter */
A68_BOOL  FLCAOSI;  /* optbool result */
A68_139  GLCAOSI;  /* collateral clause result */
A68_VC  LLCAOSI;  /* avoid structure result */
A68_51  MLCAOSI;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(set_sigdefault);
 /* line 339: */
 /* line 340: */
ELCAOSI = Signals.upb -1;
DLCAOSI = Signals.data;
for (;ELCAOSI-- >= 0;
(DLCAOSI++
) )
{
CLCAOSI_s = *DLCAOSI;
 /* line 341: */
 /* line 342: */
FLCAOSI = (CLCAOSI_s<=0);
if ( ! FLCAOSI )
{FLCAOSI = (CLCAOSI_s>CGCAOSI_maxsignals);
}
 /* line 343: */
if ( ! FLCAOSI )
{ /* line 344: */
FLCAOSI = (HECAOSI_sigaction(CLCAOSI_s, (&IJCAOSI_default_sigaction), KJCAOSI_nil_sigaction)!=0);
}
 /* line 345: */
if ( FLCAOSI )
{ 
GLCAOSI.data[0] = ILCAOSI;
FUAAOSI_whole( CLCAOSI_s, 0, &LLCAOSI );
GLCAOSI.data[1] = A_VC_PLUS(KLCAOSI,LLCAOSI);
 /* line 346: */
 /* line 347: */
YHBAOSI_osifmessage(99, A_HISVEC(MLCAOSI,GLCAOSI,2,A68_VC ), Msg);
} 
}
A_PROC_EXIT(set_sigdefault);
return;
} 
#undef NL

A68_VOID  PLCAOSI_get_sigmsgproc(A68_INT  Signal, A68_53  Msg, A68_53  *ReturnedValue)
{ 
A68_BOOL  QLCAOSI;  /* optbool result */
A68_139  RLCAOSI;  /* collateral clause result */
A68_VC  WLCAOSI;  /* avoid structure result */
A68_51  XLCAOSI;  /* OPERATORS - istruct -> vector */
A68_53  YLCAOSI;  /* clause result */
A_PROC_ENTRY(get_sigmsgproc);
 /* line 353: */
 /* line 354: */
QLCAOSI = (Signal<=0);
if ( ! QLCAOSI )
{ /* line 355: */
QLCAOSI = (Signal>CGCAOSI_maxsignals);
}
 /* line 356: */
if ( QLCAOSI )
{ 
RLCAOSI.data[0] = TLCAOSI;
FUAAOSI_whole( Signal, 0, &WLCAOSI );
RLCAOSI.data[1] = A_VC_PLUS(VLCAOSI,WLCAOSI);
YHBAOSI_osifmessage(99, A_HISVEC(XLCAOSI,RLCAOSI,2,A68_VC ), Msg);
 /* line 357: */
 /* line 358: */
 /* line 359: */
YLCAOSI = XLBAOSI_ignore_msg;
} 
else
{ 
 /* line 360: */
YLCAOSI = (*(&A_VINDEX(DJCAOSI_sig_msgprocs,Signal)));
} 
A_PROC_EXIT(get_sigmsgproc);
*ReturnedValue = (YLCAOSI);
return;
} 
#undef NL

A68_VOID  ZLCAOSI_init_ossignals(void)
{ 
A68_53 * AMCAOSI_m;
A68_INT  BMCAOSI;  /* forall loop counter */
A_PROC_ENTRY(init_ossignals);
{ 
BMCAOSI = DJCAOSI_sig_msgprocs.upb -1;
AMCAOSI_m = DJCAOSI_sig_msgprocs.data;
for (;BMCAOSI-- >= 0;
(AMCAOSI_m++
) )
{
(*AMCAOSI_m) = ZLBAOSI_global_msg;
}
 /* line 369: */
 /* line 370: */
 /* line 371: */
 /* line 372: */
 /* line 373: */
 /* line 374: */
#define osif_handler QJCAOSI_osif_handler
#define sigusr1_handler OJCAOSI_sigusr1_handler
{osif_handler_sigaction.sa_handler = osif_handler;
sigusr1_sigaction.sa_handler = sigusr1_handler;
ignore_sigaction.sa_handler = SIG_IGN;
default_sigaction.sa_handler = SIG_DFL;
}
#undef sigusr1_handler
#undef osif_handler
} 
A_PROC_EXIT(init_ossignals);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 6: */
void AECAOSI(void)   /* initialise DECS ossignals */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","./mfiles","-staredit","259","./a68files/ossignals.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/usefulops.m","./mfiles/osgc.m","./mfiles/oserrors.m","./mfiles/messageproc.m","./mfiles/cif.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_54  DGCAOSI;  /* collateral clause result */
A68_48  KGCAOSI;  /* avoid structure result */
A68_BOOL * LGCAOSI;  /* YIELD */
A68_135  MGCAOSI;  /* collateral clause result */
A68_55  XICAOSI;  /* OPERATORS - istruct -> vector */
A68_136  EJCAOSI;  /* avoid structure result */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
WPAAOSI();   /* USE usefulops */
JBCAOSI();   /* USE osgc */
SFBAOSI();   /* USE oserrors */
JFAAOSI();   /* USE messageproc */
JDAAOSI();   /* USE cif */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/osif/assoc/./a68files/ossignals.a68";
A_config.translation_time = "Tue Apr  4 09:24:47 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "ZDCAOSI (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 09:24:47 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS ossignals);
UEAALIB_a68config(LGAALIB_configinfo, EECAOSI);
 /* line 66: */
 /* line 68: */
 /* line 70: */
 /* line 71: */
 /* line 72: */
 /* line 73: */
 /* line 74: */
 /* line 76: */
 /* line 77: */
 /* line 78: */
 /* line 79: */
 /* line 80: */
 /* line 82: */
 /* line 83: */
 /* line 84: */
 /* line 85: */
 /* line 87: */
 /* line 88: */
 /* line 89: */
 /* line 90: */
 /* line 92: */
 /* line 93: */
 /* line 94: */
 /* line 95: */
 /* line 97: */
 /* line 98: */
 /* line 99: */
 /* line 100: */
 /* line 102: */
 /* line 103: */
 /* line 104: */
 /* line 105: */
 /* line 107: */
 /* line 108: */
 /* line 109: */
 /* line 110: */
 /* line 112: */
 /* line 113: */
 /* line 114: */
 /* line 115: */
 /* line 117: */
 /* line 118: */
 /* line 119: */
 /* line 120: */
 /* line 123: */
 /* line 124: */
 /* line 125: */
 /* line 126: */
 /* line 128: */
 /* line 129: */
 /* line 130: */
 /* line 131: */
 /* line 143: */
 /* line 144: */
 /* line 145: */
 /* line 146: */
 /* line 147: */
 /* line 148: */
 /* line 149: */
 /* line 150: */
 /* line 151: */
 /* line 152: */
 /* line 153: */
 /* line 154: */
 /* line 155: */
 /* line 156: */
 /* line 157: */
 /* line 158: */
 /* line 159: */
 /* line 160: */
 /* line 161: */
 /* line 162: */
 /* line 163: */
 /* line 164: */
 /* line 165: */
 /* line 166: */
 /* line 167: */
 /* line 168: */
 /* line 169: */
 /* line 170: */
 /* line 171: */
 /* line 172: */
 /* line 173: */
 /* line 175: */
 /* line 176: */
 /* line 177: */
 /* line 178: */
 /* line 179: */
 /* line 182: */
 /* line 183: */
 /* line 184: */
 /* line 185: */
DGCAOSI.Name = FGCAOSI;
 /* line 186: */
HGCAOSI_generator( A68_TRUE, &KGCAOSI );
DGCAOSI.Messages = KGCAOSI;
 /* line 187: */
LGCAOSI = A_LOC(A68_BOOL ) ;
(*LGCAOSI) = A68_FALSE ;
DGCAOSI.Initialised = LGCAOSI;
 /* line 188: */
MGCAOSI.data[0].Number = TECAOSI_sighup;
MGCAOSI.data[0].Class = ZIAAOSI_output_class;
 /* line 189: */
MGCAOSI.data[0].Text = OGCAOSI;
MGCAOSI.data[1].Number = UECAOSI_sigint;
MGCAOSI.data[1].Class = ZIAAOSI_output_class;
 /* line 190: */
MGCAOSI.data[1].Text = QGCAOSI;
MGCAOSI.data[2].Number = VECAOSI_sigquit;
MGCAOSI.data[2].Class = ZIAAOSI_output_class;
 /* line 191: */
MGCAOSI.data[2].Text = SGCAOSI;
MGCAOSI.data[3].Number = WECAOSI_sigill;
MGCAOSI.data[3].Class = ZIAAOSI_output_class;
 /* line 192: */
MGCAOSI.data[3].Text = UGCAOSI;
MGCAOSI.data[4].Number = XECAOSI_sigtrap;
MGCAOSI.data[4].Class = ZIAAOSI_output_class;
 /* line 193: */
MGCAOSI.data[4].Text = WGCAOSI;
MGCAOSI.data[5].Number = YECAOSI_sigabrt;
MGCAOSI.data[5].Class = ZIAAOSI_output_class;
 /* line 194: */
MGCAOSI.data[5].Text = YGCAOSI;
MGCAOSI.data[6].Number = ZECAOSI_sigemt;
MGCAOSI.data[6].Class = ZIAAOSI_output_class;
 /* line 195: */
MGCAOSI.data[6].Text = AHCAOSI;
MGCAOSI.data[7].Number = AFCAOSI_sigfpe;
MGCAOSI.data[7].Class = ZIAAOSI_output_class;
 /* line 196: */
MGCAOSI.data[7].Text = CHCAOSI;
MGCAOSI.data[8].Number = BFCAOSI_sigkill;
MGCAOSI.data[8].Class = ZIAAOSI_output_class;
 /* line 197: */
MGCAOSI.data[8].Text = EHCAOSI;
MGCAOSI.data[9].Number = CFCAOSI_sigbus;
MGCAOSI.data[9].Class = ZIAAOSI_output_class;
 /* line 198: */
MGCAOSI.data[9].Text = GHCAOSI;
MGCAOSI.data[10].Number = DFCAOSI_sigsegv;
MGCAOSI.data[10].Class = ZIAAOSI_output_class;
 /* line 199: */
MGCAOSI.data[10].Text = IHCAOSI;
MGCAOSI.data[11].Number = EFCAOSI_sigsys;
MGCAOSI.data[11].Class = ZIAAOSI_output_class;
 /* line 200: */
MGCAOSI.data[11].Text = KHCAOSI;
MGCAOSI.data[12].Number = FFCAOSI_sigpipe;
MGCAOSI.data[12].Class = ZIAAOSI_output_class;
 /* line 201: */
MGCAOSI.data[12].Text = MHCAOSI;
MGCAOSI.data[13].Number = GFCAOSI_sigalrm;
MGCAOSI.data[13].Class = ZIAAOSI_output_class;
 /* line 202: */
MGCAOSI.data[13].Text = OHCAOSI;
MGCAOSI.data[14].Number = HFCAOSI_sigterm;
MGCAOSI.data[14].Class = ZIAAOSI_output_class;
 /* line 203: */
MGCAOSI.data[14].Text = QHCAOSI;
MGCAOSI.data[15].Number = IFCAOSI_sigurg;
MGCAOSI.data[15].Class = ZIAAOSI_output_class;
 /* line 204: */
MGCAOSI.data[15].Text = SHCAOSI;
MGCAOSI.data[16].Number = JFCAOSI_sigstop;
MGCAOSI.data[16].Class = ZIAAOSI_output_class;
 /* line 205: */
MGCAOSI.data[16].Text = UHCAOSI;
MGCAOSI.data[17].Number = KFCAOSI_sigtstp;
MGCAOSI.data[17].Class = ZIAAOSI_output_class;
 /* line 206: */
MGCAOSI.data[17].Text = WHCAOSI;
MGCAOSI.data[18].Number = LFCAOSI_sigcont;
MGCAOSI.data[18].Class = ZIAAOSI_output_class;
 /* line 207: */
MGCAOSI.data[18].Text = YHCAOSI;
MGCAOSI.data[19].Number = MFCAOSI_sigchld;
MGCAOSI.data[19].Class = ZIAAOSI_output_class;
 /* line 208: */
MGCAOSI.data[19].Text = AICAOSI;
MGCAOSI.data[20].Number = NFCAOSI_sigttin;
MGCAOSI.data[20].Class = ZIAAOSI_output_class;
 /* line 209: */
MGCAOSI.data[20].Text = CICAOSI;
MGCAOSI.data[21].Number = OFCAOSI_sigttou;
MGCAOSI.data[21].Class = ZIAAOSI_output_class;
 /* line 210: */
MGCAOSI.data[21].Text = EICAOSI;
MGCAOSI.data[22].Number = PFCAOSI_sigio;
MGCAOSI.data[22].Class = ZIAAOSI_output_class;
 /* line 211: */
MGCAOSI.data[22].Text = GICAOSI;
MGCAOSI.data[23].Number = QFCAOSI_sigxcpu;
MGCAOSI.data[23].Class = ZIAAOSI_output_class;
 /* line 212: */
MGCAOSI.data[23].Text = IICAOSI;
MGCAOSI.data[24].Number = RFCAOSI_sigxfsz;
MGCAOSI.data[24].Class = ZIAAOSI_output_class;
 /* line 213: */
MGCAOSI.data[24].Text = KICAOSI;
MGCAOSI.data[25].Number = SFCAOSI_sigvtalrm;
MGCAOSI.data[25].Class = ZIAAOSI_output_class;
 /* line 214: */
MGCAOSI.data[25].Text = MICAOSI;
MGCAOSI.data[26].Number = TFCAOSI_sigprof;
MGCAOSI.data[26].Class = ZIAAOSI_output_class;
 /* line 215: */
MGCAOSI.data[26].Text = OICAOSI;
MGCAOSI.data[27].Number = UFCAOSI_sigwinch;
MGCAOSI.data[27].Class = ZIAAOSI_output_class;
 /* line 216: */
MGCAOSI.data[27].Text = QICAOSI;
MGCAOSI.data[28].Number = VFCAOSI_siglost;
MGCAOSI.data[28].Class = ZIAAOSI_output_class;
 /* line 217: */
MGCAOSI.data[28].Text = SICAOSI;
MGCAOSI.data[29].Number = WFCAOSI_sigusr1;
MGCAOSI.data[29].Class = ZIAAOSI_output_class;
 /* line 218: */
MGCAOSI.data[29].Text = UICAOSI;
MGCAOSI.data[30].Number = XFCAOSI_sigusr2;
MGCAOSI.data[30].Class = ZIAAOSI_output_class;
 /* line 219: */
 /* line 220: */
MGCAOSI.data[30].Text = WICAOSI;
DGCAOSI.Setup = A_HISVEC(XICAOSI,MGCAOSI,31,A68_56 );
YICAOSI_signal_facility = DGCAOSI;
 /* line 222: */
AJCAOSI_generator( A68_TRUE, &EJCAOSI );
DJCAOSI_sig_msgprocs = EJCAOSI;
 /* line 229: */
 /* line 230: */
 /* line 231: */
 /* line 233: */
 /* line 234: */
 /* line 235: */
 /* line 237: */
 /* line 238: */
 /* line 239: */
 /* line 241: */
 /* line 242: */
 /* line 243: */
 /* line 246: */
 /* line 247: */
 /* line 248: */
 /* line 250: */
 /* line 251: */
 /* line 253: */
 /* line 254: */
 /* line 255: */
 /* line 257: */
 /* line 269: */
 /* line 292: */
 /* line 293: */
 /* line 313: */
 /* line 314: */
 /* line 331: */
 /* line 332: */
 /* line 349: */
 /* line 362: */
 /* line 366: */
 /* line 367: */
 /* line 376: */
 /* line 378: */
 /* line 413: */
/*SKIP*/;
A_PROC_EXIT(DECS ossignals);
} 
#undef NL
/* end of translation of ./a68files/ossignals.a68 */
