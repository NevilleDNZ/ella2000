
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
/* UNAME:RFBAOSI */
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

A_PROCEDURE(A68_INT *,A68t68,(A68_INT *,A68_VC ),(A68_INT *,A68_VC ,void *));
typedef struct A68t68  A68_68 ;    /* PROC(REF INT,MODE26) REF INT */

A_PROCEDURE(A68_VOID ,A68t69,(A68_VC ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t69  A68_69 ;    /* PROC(REF MODE26,INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t70,(A68_VC ,A68_CHAR ,A68_VC *),(A68_VC ,A68_CHAR ,A68_VC *,void *));
typedef struct A68t70  A68_70 ;    /* PROC(REF MODE26,CHAR) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t71,(A68_VC ,A68_CHAR ,A68_VC *),(A68_VC ,A68_CHAR ,A68_VC *,void *));
typedef struct A68t71  A68_71 ;    /* PROC(MODE26,CHAR) MODE26 */

A_PROCEDURE(A68_VOID ,A68t72,(struct A68t51 ,A68_VC *),(struct A68t51 ,A68_VC *,void *));
typedef struct A68t72  A68_72 ;    /* PROC(MODE51) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t73,(A68_CHAR ,A68_VC ),(A68_CHAR ,A68_VC ,void *));
typedef struct A68t73  A68_73 ;    /* PROC(CHAR,MODE26) INT */

A_PROCEDURE(A68_VOID ,A68t74,(A68_VC ,A68_CHAR ),(A68_VC ,A68_CHAR ,void *));
typedef struct A68t74  A68_74 ;    /* PROC(REF MODE26,CHAR) VOID */
A_ISTRUCT(A68_CHAR ,4,A68t75);
typedef struct A68t75  A68_75 ;    /* STRUCT 4 CHAR */

A_PROCEDURE(struct A68t75 ,A68t76,(A68_INT ),(A68_INT ,void *));
typedef struct A68t76  A68_76 ;    /* PROC(INT) MODE75 */

A_PROCEDURE(A68_INT ,A68t77,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t77  A68_77 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_VOID ,A68t78,(A68_CHAR ,A68_VC ,A68_VC *),(A68_CHAR ,A68_VC ,A68_VC *,void *));
typedef struct A68t78  A68_78 ;    /* PROC(CHAR,REF MODE26) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t79,(A68_VC ),(A68_VC ,void *));
typedef struct A68t79  A68_79 ;    /* PROC(MODE26) INT */

A_PROCEDURE(A68_BITS ,A68t80,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t80  A68_80 ;    /* PROC(BITS,BITS) BITS */

A_PROCEDURE(A68_LBITS ,A68t81,(A68_LBITS ,A68_LBITS ),(A68_LBITS ,A68_LBITS ,void *));
typedef struct A68t81  A68_81 ;    /* PROC(LONG BITS,LONG BITS) LONG BITS */

A_PROCEDURE(A68_BITS *,A68t82,(A68_BITS *,A68_BITS ),(A68_BITS *,A68_BITS ,void *));
typedef struct A68t82  A68_82 ;    /* PROC(REF BITS,BITS) REF BITS */

A_PROCEDURE(A68_VOID ,A68t83,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t83  A68_83 ;    /* PROC(INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t84,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t84  A68_84 ;    /* PROC(INT,INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t85,(A68_LINT ,A68_INT ,A68_VC *),(A68_LINT ,A68_INT ,A68_VC *,void *));
typedef struct A68t85  A68_85 ;    /* PROC(LONG INT,INT) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t86,(A68_CHAR ,A68_INT *,A68_VC ),(A68_CHAR ,A68_INT *,A68_VC ,void *));
typedef struct A68t86  A68_86 ;    /* PROC(CHAR,REF INT,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t87,(A68_LBITS ,A68_INT ,A68_VC *),(A68_LBITS ,A68_INT ,A68_VC *,void *));
typedef struct A68t87  A68_87 ;    /* PROC(LONG BITS,INT) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t88,(A68_INT *,A68_VC ),(A68_INT *,A68_VC ,void *));
typedef struct A68t88  A68_88 ;    /* PROC(REF INT,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t89,(struct A68t39 ),(struct A68t39 ,void *));
typedef struct A68t89  A68_89 ;    /* PROC(MODE39) VOID */

A_PROCEDURE(A68_VOID ,A68t90,(A68_VC ),(A68_VC ,void *));
typedef struct A68t90  A68_90 ;    /* PROC(MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t91,(struct A68t90 ),(struct A68t90 ,void *));
typedef struct A68t91  A68_91 ;    /* PROC(MODE90) VOID */

A_PROCEDURE(A68_VOID ,A68t92,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t92  A68_92 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,55,A68t93);
typedef struct A68t93  A68_93 ;    /* STRUCT 55 CHAR */
A_ISTRUCT(A68_CHAR ,14,A68t94);
typedef struct A68t94  A68_94 ;    /* STRUCT 14 CHAR */

A_PROCEDURE(A68_VOID ,A68t95,(A68_BOOL ,struct A68t48 *),(A68_BOOL ,struct A68t48 *,void *));
typedef struct A68t95  A68_95 ;    /* PROC(BOOL) MODE48 */
A_ISTRUCT(A68_CHAR ,49,A68t96);
typedef struct A68t96  A68_96 ;    /* STRUCT 49 CHAR */
A_ISTRUCT(A68_CHAR ,26,A68t97);
typedef struct A68t97  A68_97 ;    /* STRUCT 26 CHAR */
A_ISTRUCT(A68_CHAR ,32,A68t98);
typedef struct A68t98  A68_98 ;    /* STRUCT 32 CHAR */
A_ISTRUCT(A68_CHAR ,38,A68t99);
typedef struct A68t99  A68_99 ;    /* STRUCT 38 CHAR */
A_ISTRUCT(A68_CHAR ,30,A68t100);
typedef struct A68t100  A68_100 ;    /* STRUCT 30 CHAR */
A_ISTRUCT(A68_CHAR ,37,A68t101);
typedef struct A68t101  A68_101 ;    /* STRUCT 37 CHAR */
A_ISTRUCT(A68_CHAR ,31,A68t102);
typedef struct A68t102  A68_102 ;    /* STRUCT 31 CHAR */
A_ISTRUCT(A68_CHAR ,29,A68t103);
typedef struct A68t103  A68_103 ;    /* STRUCT 29 CHAR */
A_ISTRUCT(A68_CHAR ,43,A68t104);
typedef struct A68t104  A68_104 ;    /* STRUCT 43 CHAR */
A_ISTRUCT(A68_CHAR ,36,A68t105);
typedef struct A68t105  A68_105 ;    /* STRUCT 36 CHAR */
A_ISTRUCT(A68_CHAR ,33,A68t106);
typedef struct A68t106  A68_106 ;    /* STRUCT 33 CHAR */
A_ISTRUCT(A68_CHAR ,27,A68t107);
typedef struct A68t107  A68_107 ;    /* STRUCT 27 CHAR */
A_ISTRUCT(A68_CHAR ,35,A68t108);
typedef struct A68t108  A68_108 ;    /* STRUCT 35 CHAR */
A_ISTRUCT(A68_CHAR ,18,A68t109);
typedef struct A68t109  A68_109 ;    /* STRUCT 18 CHAR */
A_ISTRUCT(A68_CHAR ,23,A68t110);
typedef struct A68t110  A68_110 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(struct A68t56 ,18,A68t111);
typedef struct A68t111  A68_111 ;    /* STRUCT 18 MODE56 */

A_PROCEDURE(A68_VOID ,A68t112,(A68_INT ,struct A68t51 ,struct A68t53 ),(A68_INT ,struct A68t51 ,struct A68t53 ,void *));
typedef struct A68t112  A68_112 ;    /* PROC(INT,MODE51,MODE53) VOID */

A_PROCEDURE(A68_INT *,A68t113,(A68_INT *),(A68_INT *,void *));
typedef struct A68t113  A68_113 ;    /* PROC(REF INT) REF INT */
A_ISTRUCT(A68_CHAR ,5,A68t114);
typedef struct A68t114  A68_114 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t115);
typedef struct A68t115  A68_115 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,19,A68t116);
typedef struct A68t116  A68_116 ;    /* STRUCT 19 CHAR */
A_ISTRUCT(A68_CHAR ,7,A68t117);
typedef struct A68t117  A68_117 ;    /* STRUCT 7 CHAR */
A_ISTRUCT(A68_CHAR ,16,A68t118);
typedef struct A68t118  A68_118 ;    /* STRUCT 16 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t119);
typedef struct A68t119  A68_119 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(A68_CHAR ,25,A68t120);
typedef struct A68t120  A68_120 ;    /* STRUCT 25 CHAR */
A_ISTRUCT(A68_CHAR ,21,A68t121);
typedef struct A68t121  A68_121 ;    /* STRUCT 21 CHAR */
A_ISTRUCT(A68_CHAR ,22,A68t122);
typedef struct A68t122  A68_122 ;    /* STRUCT 22 CHAR */
A_ISTRUCT(A68_CHAR ,15,A68t123);
typedef struct A68t123  A68_123 ;    /* STRUCT 15 CHAR */
A_ISTRUCT(A68_VC ,37,A68t124);
typedef struct A68t124  A68_124 ;    /* STRUCT 37 MODE26 */

A_PROCEDURE(A68_VOID ,A68t125,(A68_VC *),(A68_VC *,void *));
typedef struct A68t125  A68_125 ;    /* PROC REF MODE26 */
A_ISTRUCT(A68_VC ,2,A68t126);
typedef struct A68t126  A68_126 ;    /* STRUCT 2 MODE26 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from usefulops --- */
extern A68_VOID  JBAAOSI_concat(struct A68t51 ,A68_VC *);
extern A68_VOID  FUAAOSI_whole(A68_INT ,A68_INT ,A68_VC *);
/* --- End of imports from usefulops --- */


/* --- Imports from messageproc --- */
extern A68_BITS  TIAAOSI_system_class;
extern A68_BITS  VIAAOSI_user_class;
extern A68_BITS  WIAAOSI_error_class;
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
extern void JFAAOSI(void);   /* messageproc */
extern void JDAAOSI(void);   /* cif */
/* --- end of DECS initialisation functions --- */
static A68_93   VFBAOSI = {"$Id: oserrors.a68,v 34.2 1995/03/29 13:01:35 ella Exp $"}; 
A_GISVEC(A68_VC ,WFBAOSI,VFBAOSI,55)
#include <errno.h>

#define XFBAOSI_errno errno
#define YFBAOSI_maxosifmessages 100
static A68_94   AGBAOSI = {"UNIX interface"}; 
A_GISVEC(A68_VC ,BGBAOSI,AGBAOSI,14)
static A68_96   JGBAOSI = {"'open_file(*)' failed: out of range FILEACCESS(*)"}; 
A_GISVEC(A68_VC ,KGBAOSI,JGBAOSI,49)
static A68_97   LGBAOSI = {"error opening file \"*\" - *"}; 
A_GISVEC(A68_VC ,MGBAOSI,LGBAOSI,26)
static A68_97   NGBAOSI = {"error closing file \"*\" - *"}; 
A_GISVEC(A68_VC ,OGBAOSI,NGBAOSI,26)
static A68_98   PGBAOSI = {"'nil_file passed to 'close_file'"}; 
A_GISVEC(A68_VC ,QGBAOSI,PGBAOSI,32)
static A68_99   RGBAOSI = {"error reading buffer from file \"*\" - *"}; 
A_GISVEC(A68_VC ,SGBAOSI,RGBAOSI,38)
static A68_100   TGBAOSI = {"'nil_file passed to 'read_buf'"}; 
A_GISVEC(A68_VC ,UGBAOSI,TGBAOSI,30)
static A68_101   VGBAOSI = {"error readline line from file \"*\" - *"}; 
A_GISVEC(A68_VC ,WGBAOSI,VGBAOSI,37)
static A68_102   XGBAOSI = {"'nil_file passed to 'read_line'"}; 
A_GISVEC(A68_VC ,YGBAOSI,XGBAOSI,31)
static A68_103   ZGBAOSI = {"error writing to file \"*\" - *"}; 
A_GISVEC(A68_VC ,AHBAOSI,ZGBAOSI,29)
static A68_102   BHBAOSI = {"'nil_file passed to 'write_buf'"}; 
A_GISVEC(A68_VC ,CHBAOSI,BHBAOSI,31)
static A68_104   DHBAOSI = {"error setting file position in file \"*\" - *"}; 
A_GISVEC(A68_VC ,EHBAOSI,DHBAOSI,43)
static A68_103   FHBAOSI = {"'nil_file passed to 'set_pos'"}; 
A_GISVEC(A68_VC ,GHBAOSI,FHBAOSI,29)
static A68_105   HHBAOSI = {"error updating disk for file \"*\" - *"}; 
A_GISVEC(A68_VC ,IHBAOSI,HHBAOSI,36)
static A68_106   JHBAOSI = {"'nil_file passed to 'update_disk'"}; 
A_GISVEC(A68_VC ,KHBAOSI,JHBAOSI,33)
static A68_107   LHBAOSI = {"error deleting file \"*\" - *"}; 
A_GISVEC(A68_VC ,MHBAOSI,LHBAOSI,27)
static A68_108   NHBAOSI = {"error executing the command \"*\" - *"}; 
A_GISVEC(A68_VC ,OHBAOSI,NHBAOSI,35)
static A68_109   PHBAOSI = {"error in '*' ('*')"}; 
A_GISVEC(A68_VC ,QHBAOSI,PHBAOSI,18)
static A68_110   RHBAOSI = {"'*' not yet implemented"}; 
A_GISVEC(A68_VC ,SHBAOSI,RHBAOSI,23)
static A68_54  UHBAOSI_osiffacility;
static int errornos [] =
   { E2BIG,       EACCES,       EAGAIN,       EBADF,      EBUSY,
     ECHILD,      EDEADLK,      EDOM,         EEXIST,     EFAULT,
     EFBIG,       EINTR,        EINVAL,       EIO,        EISDIR,
     EMFILE,      EMLINK,       ENAMETOOLONG, ENFILE,     ENODEV,
     ENOENT,      ENOEXEC,      ENOLCK,       ENOMEM,     ENOSPC,
     ENOSYS,      ENOTDIR,      ENOTEMPTY,    ENOTTY,     ENXIO,
     EPERM,       EPIPE,        ERANGE,       EROFS,      ESPIPE,
     ESRCH,       EXDEV };

#define AIBAOSI_errornos (A68_INT*)(errornos)
#define INC(x) x++

#define BIBAOSI_inc INC
static A68_114   DIBAOSI = {"E2BIG"}; 
A_GISVEC(A68_VC ,EIBAOSI,DIBAOSI,5)
static A68_107   FIBAOSI = {"search permission is denied"}; 
A_GISVEC(A68_VC ,GIBAOSI,FIBAOSI,27)
static A68_115   HIBAOSI = {"EAGAIN"}; 
A_GISVEC(A68_VC ,IIBAOSI,HIBAOSI,6)
static A68_110   JIBAOSI = {"invalid file descriptor"}; 
A_GISVEC(A68_VC ,KIBAOSI,JIBAOSI,23)
static A68_116   LIBAOSI = {"directory is in use"}; 
A_GISVEC(A68_VC ,MIBAOSI,LIBAOSI,19)
static A68_115   NIBAOSI = {"ECHILD"}; 
A_GISVEC(A68_VC ,OIBAOSI,NIBAOSI,6)
static A68_117   PIBAOSI = {"EDEADLK"}; 
A_GISVEC(A68_VC ,QIBAOSI,PIBAOSI,7)
static A68_106   RIBAOSI = {"argument outside permitted domain"}; 
A_GISVEC(A68_VC ,SIBAOSI,RIBAOSI,33)
static A68_116   TIBAOSI = {"file already exists"}; 
A_GISVEC(A68_VC ,UIBAOSI,TIBAOSI,19)
static A68_115   VIBAOSI = {"EFAULT"}; 
A_GISVEC(A68_VC ,WIBAOSI,VIBAOSI,6)
static A68_97   XIBAOSI = {"maximum file size exceeded"}; 
A_GISVEC(A68_VC ,YIBAOSI,XIBAOSI,26)
static A68_110   ZIBAOSI = {"interrupted by a signal"}; 
A_GISVEC(A68_VC ,AJBAOSI,ZIBAOSI,23)
static A68_118   BJBAOSI = {"invalid argument"}; 
A_GISVEC(A68_VC ,CJBAOSI,BJBAOSI,16)
static A68_119   DJBAOSI = {"IO error"}; 
A_GISVEC(A68_VC ,EJBAOSI,DJBAOSI,8)
static A68_107   FJBAOSI = {"invalid directory operation"}; 
A_GISVEC(A68_VC ,GJBAOSI,FJBAOSI,27)
static A68_120   HJBAOSI = {"too many file descriptors"}; 
A_GISVEC(A68_VC ,IJBAOSI,HJBAOSI,25)
static A68_94   JJBAOSI = {"too many links"}; 
A_GISVEC(A68_VC ,KJBAOSI,JJBAOSI,14)
static A68_121   LJBAOSI = {"file name is too long"}; 
A_GISVEC(A68_VC ,MJBAOSI,LJBAOSI,21)
static A68_110   NJBAOSI = {"too many files are open"}; 
A_GISVEC(A68_VC ,OJBAOSI,NJBAOSI,23)
static A68_94   PJBAOSI = {"no such device"}; 
A_GISVEC(A68_VC ,QJBAOSI,PJBAOSI,14)
static A68_98   RJBAOSI = {"file or directory does not exist"}; 
A_GISVEC(A68_VC ,SJBAOSI,RJBAOSI,32)
static A68_103   TJBAOSI = {"unsuitable file for execution"}; 
A_GISVEC(A68_VC ,UJBAOSI,TJBAOSI,29)
static A68_109   VJBAOSI = {"no locks available"}; 
A_GISVEC(A68_VC ,WJBAOSI,VJBAOSI,18)
static A68_116   XJBAOSI = {"no memory available"}; 
A_GISVEC(A68_VC ,YJBAOSI,XJBAOSI,19)
static A68_121   ZJBAOSI = {"no space left on disk"}; 
A_GISVEC(A68_VC ,AKBAOSI,ZJBAOSI,21)
static A68_115   BKBAOSI = {"ENOSYS"}; 
A_GISVEC(A68_VC ,CKBAOSI,BKBAOSI,6)
static A68_105   DKBAOSI = {"component of path is not a directory"}; 
A_GISVEC(A68_VC ,EKBAOSI,DKBAOSI,36)
static A68_122   FKBAOSI = {"directory is not empty"}; 
A_GISVEC(A68_VC ,GKBAOSI,FKBAOSI,22)
static A68_107   HKBAOSI = {"terminal type file expected"}; 
A_GISVEC(A68_VC ,IKBAOSI,HKBAOSI,27)
static A68_108   JKBAOSI = {"no such device, or device not ready"}; 
A_GISVEC(A68_VC ,KKBAOSI,JKBAOSI,35)
static A68_97   LKBAOSI = {"operation is not permitted"}; 
A_GISVEC(A68_VC ,MKBAOSI,LKBAOSI,26)
static A68_98   NKBAOSI = {"write to a pipe without a reader"}; 
A_GISVEC(A68_VC ,OKBAOSI,NKBAOSI,32)
static A68_116   PKBAOSI = {"result is too large"}; 
A_GISVEC(A68_VC ,QKBAOSI,PKBAOSI,19)
static A68_121   RKBAOSI = {"read-only file system"}; 
A_GISVEC(A68_VC ,SKBAOSI,RKBAOSI,21)
static A68_115   TKBAOSI = {"ESPIPE"}; 
A_GISVEC(A68_VC ,UKBAOSI,TKBAOSI,6)
static A68_123   VKBAOSI = {"no such process"}; 
A_GISVEC(A68_VC ,WKBAOSI,VKBAOSI,15)
static A68_75   XKBAOSI = {"XDEV"}; 
A_GISVEC(A68_VC ,YKBAOSI,XKBAOSI,4)
static A68_51  ALBAOSI_errorstrs;
static A68_122   OLBAOSI = {"failed with \"errno\" = "}; 
A_GISVEC(A68_VC ,PLBAOSI,OLBAOSI,22)
A68_53  XLBAOSI_ignore_msg;
A68_53  ZLBAOSI_global_msg;

A_STATIC A68_VOID  DGBAOSI_generator(A68_BOOL  CGBAOSI_anonymous, A68_48  *ReturnedValue);

A68_VOID  YHBAOSI_osifmessage(A68_INT  Osifevent, A68_51  Params, A68_53  Msg);

A68_VOID  BLBAOSI_errnotext(A68_VC  *ReturnedValue);

A_STATIC A68_VOID  WLBAOSI_anonymous(A68_46  Msgno, A68_51  Params);

A_STATIC A68_VOID  DGBAOSI_generator(A68_BOOL  CGBAOSI_anonymous, A68_48  *ReturnedValue)
{ 
A68_48  EGBAOSI;  /* clause result */
A68_48  FGBAOSI;  /* OPERATORS - dynamic generator */
{ 
FGBAOSI.upb = YFBAOSI_maxosifmessages ;
( CGBAOSI_anonymous? A_VLOC(A68_49 ,FGBAOSI): A_VHEAP(A68_49 ,FGBAOSI) );
EGBAOSI = FGBAOSI;
} 
*ReturnedValue = (EGBAOSI);
return;
} 
#undef NL
 /* line 104: */
 /* line 106: */

A68_VOID  YHBAOSI_osifmessage(A68_INT  Osifevent, A68_51  Params, A68_53  Msg)
{ 
A68_46  ZHBAOSI;  /* avoid structure result */
A_PROC_ENTRY(osifmessage);
 /* line 107: */
 /* line 108: */
 /* line 109: */
HMAAOSI_make_msgno( Osifevent, UHBAOSI_osiffacility, &ZHBAOSI );
A_CALLPROC(Msg,(ZHBAOSI, Params),(ZHBAOSI, Params,(Msg).nonlocals));
A_PROC_EXIT(osifmessage);
return;
} 
#undef NL

A68_VOID  BLBAOSI_errnotext(A68_VC  *ReturnedValue)
{ 
A68_INT * CLBAOSI_ptr;
A68_VC  ELBAOSI;  /* OPERATORS - nil -> mode */
A68_VC  DLBAOSI_ans;
A68_VC  FLBAOSI_str;
A68_VC * GLBAOSI;  /* forall control - []x */
A68_INT  HLBAOSI;  /* forall loop counter */
A68_VC  ILBAOSI;  /* OPERATORS - nil -> mode */
A68_VC  JLBAOSI;  /* == */
union {  /* BIOP 99 */
A68_VC   source;
A68_VC   destination;
} KLBAOSI; 
A68_VC  LLBAOSI;  /* OPERATORS - nil -> mode */
A68_VC  MLBAOSI;  /* == */
A68_126  NLBAOSI;  /* collateral clause result */
A68_VC  QLBAOSI;  /* avoid structure result */
A68_VC  RLBAOSI;  /* clause result */
A68_51  SLBAOSI;  /* OPERATORS - istruct -> vector */
A68_VC  TLBAOSI;  /* avoid structure result */
A_PROC_ENTRY(errnotext);
{ 
CLBAOSI_ptr = AIBAOSI_errornos;
 /* line 188: */
DLBAOSI_ans = (A_VVAC(ELBAOSI));
 /* line 189: */
HLBAOSI = ALBAOSI_errorstrs.upb -1;
GLBAOSI = ALBAOSI_errorstrs.data;
for (;HLBAOSI-- >= 0;
(GLBAOSI++
) )
{
FLBAOSI_str = *GLBAOSI;
 /* line 190: */
JLBAOSI = A_VVAC(ILBAOSI) ;
if ( !(A_VSTRUCTCOMP(DLBAOSI_ans,JLBAOSI)) ) break;
if ( ((*BIBAOSI_inc(CLBAOSI_ptr))==XFBAOSI_errno) )
{ 
KLBAOSI.source = FLBAOSI_str ;
DLBAOSI_ans = (KLBAOSI.destination);
} 
}
 /* line 191: */
 /* line 192: */
MLBAOSI = A_VVAC(LLBAOSI) ;
if ( A_VSTRUCTCOMP(DLBAOSI_ans,MLBAOSI) )
{ 
NLBAOSI.data[0] = PLBAOSI;
FUAAOSI_whole( XFBAOSI_errno, 0, &QLBAOSI );
NLBAOSI.data[1] = QLBAOSI;
 /* line 193: */
 /* line 194: */
JBAAOSI_concat( A_HISVEC(SLBAOSI,NLBAOSI,2,A68_VC ), &TLBAOSI );
RLBAOSI = TLBAOSI;
} 
else
{ 
 /* line 195: */
RLBAOSI = DLBAOSI_ans;
} 
} 
A_PROC_EXIT(errnotext);
*ReturnedValue = (RLBAOSI);
return;
} 
#undef NL

A_STATIC A68_VOID  WLBAOSI_anonymous(A68_46  Msgno, A68_51  Params)
{ 
/*SKIP*/;
return;
} 
#undef NL
 /* line 1: */
 /* line 5: */
void SFBAOSI(void)   /* initialise DECS oserrors */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","./mfiles","-staredit","259","./a68files/oserrors.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/usefulops.m","./mfiles/messageproc.m","./mfiles/cif.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_54  ZFBAOSI;  /* collateral clause result */
A68_48  GGBAOSI;  /* avoid structure result */
A68_BOOL * HGBAOSI;  /* YIELD */
A68_111  IGBAOSI;  /* collateral clause result */
A68_55  THBAOSI;  /* OPERATORS - istruct -> vector */
A68_124  CIBAOSI;  /* collateral clause result */
A68_51  ZKBAOSI;  /* OPERATORS - istruct -> vector */
A68_53  YLBAOSI;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
WPAAOSI();   /* USE usefulops */
JFAAOSI();   /* USE messageproc */
JDAAOSI();   /* USE cif */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/osif/assoc/./a68files/oserrors.a68";
A_config.translation_time = "Tue Apr  4 09:24:37 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "RFBAOSI (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 09:24:37 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS oserrors);
UEAALIB_a68config(LGAALIB_configinfo, WFBAOSI);
 /* line 61: */
 /* line 63: */
 /* line 65: */
 /* line 66: */
 /* line 67: */
ZFBAOSI.Name = BGBAOSI;
 /* line 68: */
DGBAOSI_generator( A68_TRUE, &GGBAOSI );
ZFBAOSI.Messages = GGBAOSI;
 /* line 69: */
HGBAOSI = A_LOC(A68_BOOL ) ;
(*HGBAOSI) = A68_FALSE ;
ZFBAOSI.Initialised = HGBAOSI;
 /* line 71: */
IGBAOSI.data[0].Number = 1;
IGBAOSI.data[0].Class = TIAAOSI_system_class;
 /* line 72: */
IGBAOSI.data[0].Text = KGBAOSI;
IGBAOSI.data[1].Number = 2;
IGBAOSI.data[1].Class = VIAAOSI_user_class;
 /* line 74: */
IGBAOSI.data[1].Text = MGBAOSI;
IGBAOSI.data[2].Number = 11;
IGBAOSI.data[2].Class = WIAAOSI_error_class;
 /* line 75: */
IGBAOSI.data[2].Text = OGBAOSI;
IGBAOSI.data[3].Number = 12;
IGBAOSI.data[3].Class = WIAAOSI_error_class;
 /* line 77: */
IGBAOSI.data[3].Text = QGBAOSI;
IGBAOSI.data[4].Number = 21;
IGBAOSI.data[4].Class = VIAAOSI_user_class;
 /* line 78: */
IGBAOSI.data[4].Text = SGBAOSI;
IGBAOSI.data[5].Number = 22;
IGBAOSI.data[5].Class = TIAAOSI_system_class;
 /* line 80: */
IGBAOSI.data[5].Text = UGBAOSI;
IGBAOSI.data[6].Number = 31;
IGBAOSI.data[6].Class = VIAAOSI_user_class;
 /* line 81: */
IGBAOSI.data[6].Text = WGBAOSI;
IGBAOSI.data[7].Number = 32;
IGBAOSI.data[7].Class = TIAAOSI_system_class;
 /* line 83: */
IGBAOSI.data[7].Text = YGBAOSI;
IGBAOSI.data[8].Number = 41;
IGBAOSI.data[8].Class = VIAAOSI_user_class;
 /* line 84: */
IGBAOSI.data[8].Text = AHBAOSI;
IGBAOSI.data[9].Number = 42;
IGBAOSI.data[9].Class = TIAAOSI_system_class;
 /* line 86: */
IGBAOSI.data[9].Text = CHBAOSI;
IGBAOSI.data[10].Number = 51;
IGBAOSI.data[10].Class = VIAAOSI_user_class;
 /* line 87: */
IGBAOSI.data[10].Text = EHBAOSI;
IGBAOSI.data[11].Number = 52;
IGBAOSI.data[11].Class = TIAAOSI_system_class;
 /* line 89: */
IGBAOSI.data[11].Text = GHBAOSI;
IGBAOSI.data[12].Number = 61;
IGBAOSI.data[12].Class = VIAAOSI_user_class;
 /* line 90: */
IGBAOSI.data[12].Text = IHBAOSI;
IGBAOSI.data[13].Number = 62;
IGBAOSI.data[13].Class = TIAAOSI_system_class;
 /* line 92: */
IGBAOSI.data[13].Text = KHBAOSI;
IGBAOSI.data[14].Number = 71;
IGBAOSI.data[14].Class = VIAAOSI_user_class;
 /* line 94: */
IGBAOSI.data[14].Text = MHBAOSI;
IGBAOSI.data[15].Number = 81;
IGBAOSI.data[15].Class = WIAAOSI_error_class;
 /* line 97: */
IGBAOSI.data[15].Text = OHBAOSI;
IGBAOSI.data[16].Number = 99;
IGBAOSI.data[16].Class = WIAAOSI_error_class;
 /* line 98: */
IGBAOSI.data[16].Text = QHBAOSI;
IGBAOSI.data[17].Number = 100;
IGBAOSI.data[17].Class = WIAAOSI_error_class;
 /* line 99: */
 /* line 100: */
IGBAOSI.data[17].Text = SHBAOSI;
ZFBAOSI.Setup = A_HISVEC(THBAOSI,IGBAOSI,18,A68_56 );
UHBAOSI_osiffacility = ZFBAOSI;
 /* line 102: */
 /* line 103: */
 /* line 114: */
 /* line 115: */
 /* line 116: */
 /* line 117: */
 /* line 118: */
 /* line 119: */
 /* line 120: */
 /* line 121: */
 /* line 122: */
 /* line 123: */
 /* line 125: */
 /* line 127: */
 /* line 128: */
 /* line 129: */
CIBAOSI.data[0] = EIBAOSI;
 /* line 130: */
CIBAOSI.data[1] = GIBAOSI;
 /* line 131: */
CIBAOSI.data[2] = IIBAOSI;
 /* line 132: */
CIBAOSI.data[3] = KIBAOSI;
 /* line 134: */
CIBAOSI.data[4] = MIBAOSI;
 /* line 135: */
CIBAOSI.data[5] = OIBAOSI;
 /* line 136: */
CIBAOSI.data[6] = QIBAOSI;
 /* line 137: */
CIBAOSI.data[7] = SIBAOSI;
 /* line 138: */
CIBAOSI.data[8] = UIBAOSI;
 /* line 140: */
CIBAOSI.data[9] = WIBAOSI;
 /* line 141: */
CIBAOSI.data[10] = YIBAOSI;
 /* line 142: */
CIBAOSI.data[11] = AJBAOSI;
 /* line 143: */
CIBAOSI.data[12] = CJBAOSI;
 /* line 144: */
CIBAOSI.data[13] = EJBAOSI;
 /* line 146: */
CIBAOSI.data[14] = GJBAOSI;
 /* line 147: */
CIBAOSI.data[15] = IJBAOSI;
 /* line 148: */
CIBAOSI.data[16] = KJBAOSI;
 /* line 149: */
CIBAOSI.data[17] = MJBAOSI;
 /* line 150: */
CIBAOSI.data[18] = OJBAOSI;
 /* line 152: */
CIBAOSI.data[19] = QJBAOSI;
 /* line 153: */
CIBAOSI.data[20] = SJBAOSI;
 /* line 154: */
CIBAOSI.data[21] = UJBAOSI;
 /* line 155: */
CIBAOSI.data[22] = WJBAOSI;
 /* line 156: */
CIBAOSI.data[23] = YJBAOSI;
 /* line 158: */
CIBAOSI.data[24] = AKBAOSI;
 /* line 159: */
CIBAOSI.data[25] = CKBAOSI;
 /* line 160: */
CIBAOSI.data[26] = EKBAOSI;
 /* line 161: */
CIBAOSI.data[27] = GKBAOSI;
 /* line 162: */
CIBAOSI.data[28] = IKBAOSI;
 /* line 164: */
CIBAOSI.data[29] = KKBAOSI;
 /* line 165: */
CIBAOSI.data[30] = MKBAOSI;
 /* line 166: */
CIBAOSI.data[31] = OKBAOSI;
 /* line 167: */
CIBAOSI.data[32] = QKBAOSI;
 /* line 168: */
CIBAOSI.data[33] = SKBAOSI;
 /* line 170: */
CIBAOSI.data[34] = UKBAOSI;
 /* line 172: */
CIBAOSI.data[35] = WKBAOSI;
CIBAOSI.data[36] = YKBAOSI;
ALBAOSI_errorstrs = A_HISVEC(ZKBAOSI,CIBAOSI,37,A68_VC );
 /* line 176: */
 /* line 177: */
 /* line 187: */
 /* line 199: */
YLBAOSI.fn.fn_global = WLBAOSI_anonymous;
YLBAOSI.nonlocals = A68_NIL;
XLBAOSI_ignore_msg = (YLBAOSI);
 /* line 201: */
ZLBAOSI_global_msg = XLBAOSI_ignore_msg;
 /* line 203: */
 /* line 205: */
 /* line 210: */
/*SKIP*/;
A_PROC_EXIT(DECS oserrors);
} 
#undef NL
/* end of translation of ./a68files/oserrors.a68 */
