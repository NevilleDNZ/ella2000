
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
/* UNAME:FMAATRN */
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
struct A68t92{
A68_VC  Context;
A68_VC  Import;
};
typedef struct A68t92  A68_92 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t94 ;

A_PROCEDURE(A68_VOID ,A68t93,(struct A68t94 ),(struct A68t94 ,void *));
typedef struct A68t93  A68_93 ;    /* PROC(MODE94) VOID */
struct A68t94 { A68_INT mode; union {
A68_VC  mode1;
struct A68t32  mode2;
struct A68t54  mode3;
struct A68t53  mode4;
} data; };
typedef struct A68t94  A68_94 ;    /* UNION(REF MODE26,REF MODE32,REF MODE54,REF MODE53)  */

A_PROCEDURE(A68_INT ,A68t95,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t95  A68_95 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_BITS ,A68t96,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t96  A68_96 ;    /* PROC(BITS,BITS) BITS */
struct A68t98 ;

A_PROCEDURE(A68_VOID ,A68t97,(struct A68t98 ,A68_INT ),(struct A68t98 ,A68_INT ,void *));
typedef struct A68t97  A68_97 ;    /* PROC(MODE98,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t98,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t98  A68_98 ;    /* PROC(CHAR) VOID */
struct A68t100 ;

A_PROCEDURE(A68_INT ,A68t99,(struct A68t100 ),(struct A68t100 ,void *));
typedef struct A68t99  A68_99 ;    /* PROC(MODE100) INT */

A_PROCEDURE(A68_CHAR ,A68t100,(void),(void *));
typedef struct A68t100  A68_100 ;    /* PROC CHAR */

A_PROCEDURE(A68_INT ,A68t101,(A68_VC ,A68_BOOL *),(A68_VC ,A68_BOOL *,void *));
typedef struct A68t101  A68_101 ;    /* PROC(MODE26,REF BOOL) INT */

A_PROCEDURE(A68_INT ,A68t102,(void),(void *));
typedef struct A68t102  A68_102 ;    /* PROC INT */

A_PROCEDURE(A68_INT ,A68t103,(A68_INT ),(A68_INT ,void *));
typedef struct A68t103  A68_103 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_VOID ,A68t104,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t104  A68_104 ;    /* PROC(INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t105,(A68_VC *),(A68_VC *,void *));
typedef struct A68t105  A68_105 ;    /* PROC REF MODE26 */

A_PROCEDURE(A68_INT ,A68t106,(A68_INT ,A68_INT ,A68_BOOL *),(A68_INT ,A68_INT ,A68_BOOL *,void *));
typedef struct A68t106  A68_106 ;    /* PROC(INT,INT,REF BOOL) INT */
struct A68t108 ;

A_PROCEDURE(A68_BOOL ,A68t107,(A68_VC ,A68_INT *,struct A68t108 ),(A68_VC ,A68_INT *,struct A68t108 ,void *));
typedef struct A68t107  A68_107 ;    /* PROC(MODE26,REF INT,MODE108) BOOL */
struct A68t109 ;

A_PROCEDURE(A68_VOID ,A68t108,(struct A68t109 ,struct A68t46 ),(struct A68t109 ,struct A68t46 ,void *));
typedef struct A68t108  A68_108 ;    /* PROC(MODE109,MODE46) VOID */
struct A68t109{
A68_INT  Number;
A_PAD_INT(PAD_20)
struct A68t110 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_21)
};
typedef struct A68t109  A68_109 ;    /* STRUCT(INT,REF MODE110,BITS)  */
A_VECTOR(struct A68t112 ,A68t111);
typedef struct A68t111  A68_111 ;    /* VECTOR [] MODE112 */
struct A68t112{
struct A68t109  Msgno;
A68_VC  Text;
};
typedef struct A68t112  A68_112 ;    /* STRUCT(MODE109,REF MODE26)  */
struct A68t110{
A68_VC  Name;
struct A68t111  Messages;
};
typedef struct A68t110  A68_110 ;    /* STRUCT(REF MODE26,REF MODE111)  */
struct A68t113{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t113  A68_113 ;    /* STRUCT(REF MODE26,REF BITS)  */

A_PROCEDURE(A68_BOOL ,A68t114,(struct A68t35 ,struct A68t35 ),(struct A68t35 ,struct A68t35 ,void *));
typedef struct A68t114  A68_114 ;    /* PROC(MODE35,MODE35) BOOL */
A_ISTRUCT(A68_CHAR ,4,A68t116);
typedef struct A68t116  A68_116 ;    /* STRUCT 4 CHAR */
struct A68t115{
struct A68t116  Access;
A_PAD_ISTRUCT(A68_116 ,PAD_22)
};
typedef struct A68t115  A68_115 ;    /* STRUCT(MODE116)  */

A_PROCEDURE(struct A68t113 *,A68t117,(A68_VC ,struct A68t115 ,struct A68t108 ),(A68_VC ,struct A68t115 ,struct A68t108 ,void *));
typedef struct A68t117  A68_117 ;    /* PROC(MODE26,MODE115,MODE108) REF MODE113 */

A_PROCEDURE(A68_VOID ,A68t118,(struct A68t113 *,struct A68t108 ),(struct A68t113 *,struct A68t108 ,void *));
typedef struct A68t118  A68_118 ;    /* PROC(REF MODE113,MODE108) VOID */

A_PROCEDURE(A68_VOID ,A68t119,(struct A68t113 *,A68_VC *),(struct A68t113 *,A68_VC *,void *));
typedef struct A68t119  A68_119 ;    /* PROC(REF MODE113) MODE26 */

A_PROCEDURE(A68_VOID ,A68t120,(struct A68t113 *,A68_VC ,A68_INT *,struct A68t108 ,struct A68t35 *),(struct A68t113 *,A68_VC ,A68_INT *,struct A68t108 ,struct A68t35 *,void *));
typedef struct A68t120  A68_120 ;    /* PROC(REF MODE113,REF MODE26,REF INT,MODE108) MODE35 */

A_PROCEDURE(A68_VOID ,A68t121,(struct A68t113 *,A68_VC ,struct A68t108 ,struct A68t35 *),(struct A68t113 *,A68_VC ,struct A68t108 ,struct A68t35 *,void *));
typedef struct A68t121  A68_121 ;    /* PROC(REF MODE113,MODE26,MODE108) MODE35 */
struct A68t122{
A68_SBITS  Permissions;
A_PAD_SBITS(PAD_23)
A68_LBITS  Inode;
A_PAD_LBITS(PAD_24)
A68_SINT  Device;
A_PAD_SINT(PAD_25)
A68_SINT  Links;
A_PAD_SINT(PAD_26)
A68_SBITS  Owning_user;
A_PAD_SBITS(PAD_27)
A68_SBITS  Owning_group;
A_PAD_SBITS(PAD_28)
A68_LINT  Size;
A_PAD_LINT(PAD_29)
A68_LINT  Accessed;
A_PAD_LINT(PAD_30)
A68_LINT  Data_modified;
A_PAD_LINT(PAD_31)
A68_LINT  Status_modified;
A_PAD_LINT(PAD_32)
};
typedef struct A68t122  A68_122 ;    /* STRUCT(SHORT BITS,LONG BITS,SHORT INT,SHORT INT,SHORT BITS,SHORT BITS,LONG INT,LONG INT,LONG INT,LONG INT)  */
struct A68t124 ;

A_PROCEDURE(struct A68t122 *,A68t123,(struct A68t124 ,struct A68t108 ),(struct A68t124 ,struct A68t108 ,void *));
typedef struct A68t123  A68_123 ;    /* PROC(MODE124,MODE108) REF MODE122 */
struct A68t124 { A68_INT mode; union {
struct A68t113 * mode1;
A68_VC  mode2;
} data; };
typedef struct A68t124  A68_124 ;    /* UNION(REF MODE113,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t125,(struct A68t113 *,A68_LINT *,struct A68t108 ,struct A68t35 *),(struct A68t113 *,A68_LINT *,struct A68t108 ,struct A68t35 *,void *));
typedef struct A68t125  A68_125 ;    /* PROC(REF MODE113,REF LONG INT,MODE108) MODE35 */

A_PROCEDURE(A68_VOID ,A68t126,(struct A68t113 *,A68_LINT ,struct A68t108 ,struct A68t35 *),(struct A68t113 *,A68_LINT ,struct A68t108 ,struct A68t35 *,void *));
typedef struct A68t126  A68_126 ;    /* PROC(REF MODE113,LONG INT,MODE108) MODE35 */

A_PROCEDURE(A68_VOID ,A68t127,(struct A68t113 *,struct A68t108 ,struct A68t35 *),(struct A68t113 *,struct A68t108 ,struct A68t35 *,void *));
typedef struct A68t127  A68_127 ;    /* PROC(REF MODE113,MODE108) MODE35 */

A_PROCEDURE(A68_VOID ,A68t128,(A68_VC ,struct A68t108 ,struct A68t35 *),(A68_VC ,struct A68t108 ,struct A68t35 *,void *));
typedef struct A68t128  A68_128 ;    /* PROC(MODE26,MODE108) MODE35 */

A_PROCEDURE(A68_VOID ,A68t129,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t129  A68_129 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t130,(A68_INT ),(A68_INT ,void *));
typedef struct A68t130  A68_130 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_LINT ,A68t131,(void),(void *));
typedef struct A68t131  A68_131 ;    /* PROC LONG INT */

A_PROCEDURE(A68_INT ,A68t132,(A68_VC ,struct A68t108 ),(A68_VC ,struct A68t108 ,void *));
typedef struct A68t132  A68_132 ;    /* PROC(MODE26,MODE108) INT */

A_PROCEDURE(A68_VOID ,A68t133,(A68_VC ,A68_VC ,struct A68t108 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t108 ,A68_VC *,void *));
typedef struct A68t133  A68_133 ;    /* PROC(MODE26,MODE26,MODE108) MODE26 */

A_PROCEDURE(A68_VOID ,A68t134,(A68_VC ,A68_VC ,struct A68t108 ,struct A68t35 *),(A68_VC ,A68_VC ,struct A68t108 ,struct A68t35 *,void *));
typedef struct A68t134  A68_134 ;    /* PROC(MODE26,MODE26,MODE108) MODE35 */
struct A68t135{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t135  A68_135 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t136,(A68_VC ,A68_VC ,struct A68t108 ,struct A68t135 *),(A68_VC ,A68_VC ,struct A68t108 ,struct A68t135 *,void *));
typedef struct A68t136  A68_136 ;    /* PROC(MODE26,MODE26,MODE108) MODE135 */

A_PROCEDURE(A68_VOID ,A68t137,(A68_VC *),(A68_VC *,void *));
typedef struct A68t137  A68_137 ;    /* PROC MODE26 */

A_PROCEDURE(A68_VOID ,A68t138,(struct A68t46 *),(struct A68t46 *,void *));
typedef struct A68t138  A68_138 ;    /* PROC MODE46 */

A_PROCEDURE(A68_VOID ,A68t139,(A68_VC ,struct A68t108 ,struct A68t46 *),(A68_VC ,struct A68t108 ,struct A68t46 *,void *));
typedef struct A68t139  A68_139 ;    /* PROC(MODE26,MODE108) MODE46 */

A_PROCEDURE(A68_BOOL ,A68t140,(void),(void *));
typedef struct A68t140  A68_140 ;    /* PROC BOOL */
struct A68t142 ;

A_PROCEDURE(A68_VOID ,A68t141,(struct A68t142 ,struct A68t108 ),(struct A68t142 ,struct A68t108 ,void *));
typedef struct A68t141  A68_141 ;    /* PROC(MODE142,MODE108) VOID */
A_VECTOR(struct A68t143 ,A68t142);
typedef struct A68t142  A68_142 ;    /* VECTOR [] MODE143 */
struct A68t143{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_33)
};
typedef struct A68t143  A68_143 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t144,(void),(void *));
typedef struct A68t144  A68_144 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t145,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t145  A68_145 ;    /* PROC(BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t146,(struct A68t36 ),(struct A68t36 ,void *));
typedef struct A68t146  A68_146 ;    /* PROC(MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t147,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t147  A68_147 ;    /* PROC(REF MODE26) REF MODE26 */

A_PROCEDURE(A68_REAL ,A68t148,(A68_REAL ),(A68_REAL ,void *));
typedef struct A68t148  A68_148 ;    /* PROC(REAL) REAL */
struct A68t149{
A68_VC  Name;
A68_VC  Version;
A68_VC  Date;
A68_VC  Msg;
A68_VC  Sys_fault;
};
typedef struct A68t149  A68_149 ;    /* STRUCT(MODE26,MODE26,MODE26,MODE26,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t150,(A68_BOOL ,struct A68t149 *),(A68_BOOL ,struct A68t149 *,void *));
typedef struct A68t150  A68_150 ;    /* PROC(BOOL) MODE149 */

A_PROCEDURE(A68_VOID ,A68t151,(struct A68t149 ,A68_BOOL ),(struct A68t149 ,A68_BOOL ,void *));
typedef struct A68t151  A68_151 ;    /* PROC(MODE149,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t152,(struct A68t149 *),(struct A68t149 *,void *));
typedef struct A68t152  A68_152 ;    /* PROC MODE149 */

A_PROCEDURE(A68_BOOL ,A68t153,(A68_VC ,A68_VC ,A68_VC ,A68_VC *,A68_BOOL ),(A68_VC ,A68_VC ,A68_VC ,A68_VC *,A68_BOOL ,void *));
typedef struct A68t153  A68_153 ;    /* PROC(MODE26,MODE26,MODE26,REF REF MODE26,BOOL) BOOL */
struct A68t155 ;
struct A68t156 ;

A_PROCEDURE(A68_VOID ,A68t154,(A68_VC ,struct A68t144 ,struct A68t155 ,struct A68t156 ),(A68_VC ,struct A68t144 ,struct A68t155 ,struct A68t156 ,void *));
typedef struct A68t154  A68_154 ;    /* PROC(MODE26,MODE144,MODE155,MODE156) VOID */

A_PROCEDURE(A68_BOOL ,A68t155,(A68_VC ,struct A68t137 ),(A68_VC ,struct A68t137 ,void *));
typedef struct A68t155  A68_155 ;    /* PROC(MODE26,MODE137) BOOL */

A_PROCEDURE(A68_BOOL ,A68t156,(A68_BOOL ),(A68_BOOL ,void *));
typedef struct A68t156  A68_156 ;    /* PROC(BOOL) BOOL */

A_PROCEDURE(A68_VOID ,A68t157,(struct A68t108 ),(struct A68t108 ,void *));
typedef struct A68t157  A68_157 ;    /* PROC(MODE108) VOID */

A_PROCEDURE(A68_VOID ,A68t158,(struct A68t157 ,struct A68t108 ),(struct A68t157 ,struct A68t108 ,void *));
typedef struct A68t158  A68_158 ;    /* PROC(MODE157,MODE108) VOID */

A_PROCEDURE(A68_VOID ,A68t159,(struct A68t144 ),(struct A68t144 ,void *));
typedef struct A68t159  A68_159 ;    /* PROC(MODE144) VOID */

A_PROCEDURE(A68_VOID ,A68t160,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t160  A68_160 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,54,A68t161);
typedef struct A68t161  A68_161 ;    /* STRUCT 54 CHAR */
struct A68t162{
A68_INT  Type;
A_PAD_INT(PAD_34)
A68_INT  Value;
A_PAD_INT(PAD_35)
};
typedef struct A68t162  A68_162 ;    /* STRUCT(INT,INT)  */
A_ROW(struct A68t162 ,A68t163,1);
typedef struct A68t163  A68_163 ;    /* [] MODE162 */

A_PROCEDURE(A68_VOID ,A68t164,(struct A68t163 *),(struct A68t163 *,void *));
typedef struct A68t164  A68_164 ;    /* PROC REF MODE163 */

A_PROCEDURE(A68_VOID ,A68t165,(A68_BOOL ,struct A68t163 *),(A68_BOOL ,struct A68t163 *,void *));
typedef struct A68t165  A68_165 ;    /* PROC(BOOL) MODE163 */
A_ISTRUCT(A68_CHAR ,26,A68t166);
typedef struct A68t166  A68_166 ;    /* STRUCT 26 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t167);
typedef struct A68t167  A68_167 ;    /* STRUCT 10 CHAR */
struct A68t168{
A68_VC  Symbol;
A68_INT  Length;
A_PAD_INT(PAD_36)
A68_INT  Value;
A_PAD_INT(PAD_37)
};
typedef struct A68t168  A68_168 ;    /* STRUCT(REF MODE26,INT,INT)  */
A_VECTOR(struct A68t168 ,A68t169);
typedef struct A68t169  A68_169 ;    /* VECTOR [] MODE168 */
A_VECTOR(struct A68t169 ,A68t170);
typedef struct A68t170  A68_170 ;    /* VECTOR [] REF MODE169 */

A_PROCEDURE(A68_VOID ,A68t171,(struct A68t170 *),(struct A68t170 *,void *));
typedef struct A68t171  A68_171 ;    /* PROC REF MODE170 */
struct A68t172{
A68_VC  Symbol;
A68_INT  Value;
A_PAD_INT(PAD_38)
};
typedef struct A68t172  A68_172 ;    /* STRUCT(REF MODE26,INT)  */
A_VECTOR(struct A68t172 ,A68t173);
typedef struct A68t173  A68_173 ;    /* VECTOR [] MODE172 */
A_ISTRUCT(A68_CHAR ,2,A68t174);
typedef struct A68t174  A68_174 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t175);
typedef struct A68t175  A68_175 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t176);
typedef struct A68t176  A68_176 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t177);
typedef struct A68t177  A68_177 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,7,A68t178);
typedef struct A68t178  A68_178 ;    /* STRUCT 7 CHAR */
A_ISTRUCT(struct A68t172 ,71,A68t179);
typedef struct A68t179  A68_179 ;    /* STRUCT 71 MODE172 */

A_PROCEDURE(A68_VOID ,A68t180,(A68_BOOL ,struct A68t170 *),(A68_BOOL ,struct A68t170 *,void *));
typedef struct A68t180  A68_180 ;    /* PROC(BOOL) MODE170 */

A_PROCEDURE(A68_VOID ,A68t181,(A68_BOOL ,struct A68t169 *),(A68_BOOL ,struct A68t169 *,void *));
typedef struct A68t181  A68_181 ;    /* PROC(BOOL) MODE169 */

A_PROCEDURE(A68_INT ,A68t182,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t182  A68_182 ;    /* PROC(REF MODE26,BOOL) INT */

A_PROCEDURE(A68_VOID ,A68t183,(struct A68t182 *),(struct A68t182 *,void *));
typedef struct A68t183  A68_183 ;    /* PROC MODE182 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from osinterface --- */
extern A68_115  BOBAOSI_update_access;
extern A68_115  FOBAOSI_update_truncate_access;
#define HDAAOST_block_update_access BOBAOSI_update_access
#define IDAAOST_block_update_truncate_access FOBAOSI_update_truncate_access
#include <stdlib.h>
#define EXIT(status) exit(A_INT_int(status))

#define BZBAOSI_exit EXIT
extern int A_argc;
extern char **A_argv;
#define A_prelude(argc,argv) A_argc=argc; A_argv = argv

#define VPCAOSI_prelude A_prelude
#include "Alibrary.h"

#define PBCAOSI_garbage_collect Agc_collect
#include <math.h>

#define GQAAOST_sqrt sqrt
/* --- End of imports from osinterface --- */


/* --- Imports from basics --- */
extern A68_VOID  RSCAOST_makeid(A68_VC ,A68_VC *);
/* --- End of imports from basics --- */


/* --- Imports from putstrings --- */
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void PCAAOST(void);   /* osinterface */
extern void JSCAOST(void);   /* basics */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_161   JMAATRN = {"$Id: charset.a68,v 34.2 1995/03/29 13:02:50 ella Exp $"}; 
A_GISVEC(A68_VC ,KMAATRN,JMAATRN,54)
#define LMAATRN_hash 32
#define MMAATRN_maxabschar 255
static A68_166   UMAATRN = {"ABCDEFGHIJKLMNOPQRSTUVWXYZ"}; 
A_GISVEC(A68_VC ,VMAATRN,UMAATRN,26)
static A68_166   XMAATRN = {"abcdefghijklmnopqrstuvwxyz"}; 
A_GISVEC(A68_VC ,YMAATRN,XMAATRN,26)
static A68_167   ANAATRN = {"0123456789"}; 
A_GISVEC(A68_VC ,BNAATRN,ANAATRN,10)
static A68_174   YRAATRN = {"||"}; 
A_GISVEC(A68_VC ,ZRAATRN,YRAATRN,2)
static A68_174   BSAATRN = {">="}; 
A_GISVEC(A68_VC ,CSAATRN,BSAATRN,2)
static A68_174   ESAATRN = {"->"}; 
A_GISVEC(A68_VC ,FSAATRN,ESAATRN,2)
static A68_174   HSAATRN = {".."}; 
A_GISVEC(A68_VC ,ISAATRN,HSAATRN,2)
static A68_174   KSAATRN = {"/="}; 
A_GISVEC(A68_VC ,LSAATRN,KSAATRN,2)
static A68_174   NSAATRN = {"//"}; 
A_GISVEC(A68_VC ,OSAATRN,NSAATRN,2)
static A68_174   QSAATRN = {"<="}; 
A_GISVEC(A68_VC ,RSAATRN,QSAATRN,2)
static A68_174   TSAATRN = {":="}; 
A_GISVEC(A68_VC ,USAATRN,TSAATRN,2)
static A68_175   WSAATRN = {"::="}; 
A_GISVEC(A68_VC ,XSAATRN,WSAATRN,3)
static A68_175   ZSAATRN = {"AND"}; 
A_GISVEC(A68_VC ,ATAATRN,ZSAATRN,3)
static A68_176   CTAATRN = {"ARITH"}; 
A_GISVEC(A68_VC ,DTAATRN,CTAATRN,5)
static A68_176   FTAATRN = {"BEGIN"}; 
A_GISVEC(A68_VC ,GTAATRN,FTAATRN,5)
static A68_116   ITAATRN = {"CASE"}; 
A_GISVEC(A68_VC ,JTAATRN,ITAATRN,4)
static A68_175   LTAATRN = {"COM"}; 
A_GISVEC(A68_VC ,MTAATRN,LTAATRN,3)
static A68_116   OTAATRN = {"CONC"}; 
A_GISVEC(A68_VC ,PTAATRN,OTAATRN,4)
static A68_176   RTAATRN = {"DELAY"}; 
A_GISVEC(A68_VC ,STAATRN,RTAATRN,5)
static A68_116   UTAATRN = {"ELSE"}; 
A_GISVEC(A68_VC ,VTAATRN,UTAATRN,4)
static A68_177   XTAATRN = {"ELSEOF"}; 
A_GISVEC(A68_VC ,YTAATRN,XTAATRN,6)
static A68_175   AUAATRN = {"END"}; 
A_GISVEC(A68_VC ,BUAATRN,AUAATRN,3)
static A68_116   DUAATRN = {"ESAC"}; 
A_GISVEC(A68_VC ,EUAATRN,DUAATRN,4)
static A68_176   GUAATRN = {"FAULT"}; 
A_GISVEC(A68_VC ,HUAATRN,GUAATRN,5)
static A68_174   JUAATRN = {"FI"}; 
A_GISVEC(A68_VC ,KUAATRN,JUAATRN,2)
static A68_177   MUAATRN = {"FINISH"}; 
A_GISVEC(A68_VC ,NUAATRN,MUAATRN,6)
static A68_174   PUAATRN = {"FN"}; 
A_GISVEC(A68_VC ,QUAATRN,PUAATRN,2)
static A68_116   SUAATRN = {"IAND"}; 
A_GISVEC(A68_VC ,TUAATRN,SUAATRN,4)
static A68_177   VUAATRN = {"IDELAY"}; 
A_GISVEC(A68_VC ,WUAATRN,VUAATRN,6)
static A68_116   YUAATRN = {"IDIV"}; 
A_GISVEC(A68_VC ,ZUAATRN,YUAATRN,4)
static A68_174   BVAATRN = {"IF"}; 
A_GISVEC(A68_VC ,CVAATRN,BVAATRN,2)
static A68_177   EVAATRN = {"IMPORT"}; 
A_GISVEC(A68_VC ,FVAATRN,EVAATRN,6)
static A68_178   HVAATRN = {"IMPORTS"}; 
A_GISVEC(A68_VC ,IVAATRN,HVAATRN,7)
static A68_116   KVAATRN = {"INOT"}; 
A_GISVEC(A68_VC ,LVAATRN,KVAATRN,4)
static A68_175   NVAATRN = {"INT"}; 
A_GISVEC(A68_VC ,OVAATRN,NVAATRN,3)
static A68_174   QVAATRN = {"IO"}; 
A_GISVEC(A68_VC ,RVAATRN,QVAATRN,2)
static A68_175   TVAATRN = {"IOR"}; 
A_GISVEC(A68_VC ,UVAATRN,TVAATRN,3)
static A68_116   WVAATRN = {"JOIN"}; 
A_GISVEC(A68_VC ,XVAATRN,WVAATRN,4)
static A68_175   ZVAATRN = {"LET"}; 
A_GISVEC(A68_VC ,AWAATRN,ZVAATRN,3)
static A68_175   CWAATRN = {"MAC"}; 
A_GISVEC(A68_VC ,DWAATRN,CWAATRN,3)
static A68_116   FWAATRN = {"MAKE"}; 
A_GISVEC(A68_VC ,GWAATRN,FWAATRN,4)
static A68_175   IWAATRN = {"MOC"}; 
A_GISVEC(A68_VC ,JWAATRN,IWAATRN,3)
static A68_177   LWAATRN = {"MODULE"}; 
A_GISVEC(A68_VC ,MWAATRN,LWAATRN,6)
static A68_175   OWAATRN = {"NEW"}; 
A_GISVEC(A68_VC ,PWAATRN,OWAATRN,3)
static A68_175   RWAATRN = {"NOT"}; 
A_GISVEC(A68_VC ,SWAATRN,RWAATRN,3)
static A68_174   UWAATRN = {"OF"}; 
A_GISVEC(A68_VC ,VWAATRN,UWAATRN,2)
static A68_174   XWAATRN = {"OR"}; 
A_GISVEC(A68_VC ,YWAATRN,XWAATRN,2)
static A68_177   AXAATRN = {"OUTPUT"}; 
A_GISVEC(A68_VC ,BXAATRN,AXAATRN,6)
static A68_176   DXAATRN = {"PRINT"}; 
A_GISVEC(A68_VC ,EXAATRN,DXAATRN,5)
static A68_175   GXAATRN = {"RAM"}; 
A_GISVEC(A68_VC ,HXAATRN,GXAATRN,3)
static A68_178   JXAATRN = {"RENAMED"}; 
A_GISVEC(A68_VC ,KXAATRN,JXAATRN,7)
static A68_177   MXAATRN = {"REFORM"}; 
A_GISVEC(A68_VC ,NXAATRN,MXAATRN,6)
static A68_174   PXAATRN = {"SL"}; 
A_GISVEC(A68_VC ,QXAATRN,PXAATRN,2)
static A68_174   SXAATRN = {"SR"}; 
A_GISVEC(A68_VC ,TXAATRN,SXAATRN,2)
static A68_116   VXAATRN = {"THEN"}; 
A_GISVEC(A68_VC ,WXAATRN,VXAATRN,4)
static A68_116   YXAATRN = {"TYPE"}; 
A_GISVEC(A68_VC ,ZXAATRN,YXAATRN,4)
static A68_175   BYAATRN = {"FOR"}; 
A_GISVEC(A68_VC ,CYAATRN,BYAATRN,3)
static A68_175   EYAATRN = {"VAR"}; 
A_GISVEC(A68_VC ,FYAATRN,EYAATRN,3)
static A68_116   HYAATRN = {"INIT"}; 
A_GISVEC(A68_VC ,IYAATRN,HYAATRN,4)
static A68_175   KYAATRN = {"SEQ"}; 
A_GISVEC(A68_VC ,LYAATRN,KYAATRN,3)
static A68_176   NYAATRN = {"STATE"}; 
A_GISVEC(A68_VC ,OYAATRN,NYAATRN,5)
static A68_116   QYAATRN = {"PVAR"}; 
A_GISVEC(A68_VC ,RYAATRN,QYAATRN,4)
static A68_116   TYAATRN = {"SQRT"}; 
A_GISVEC(A68_VC ,UYAATRN,TYAATRN,4)
static A68_175   WYAATRN = {"ABS"}; 
A_GISVEC(A68_VC ,XYAATRN,WYAATRN,3)
static A68_175   ZYAATRN = {"MOD"}; 
A_GISVEC(A68_VC ,AZAATRN,ZYAATRN,3)
static A68_116   CZAATRN = {"BIOP"}; 
A_GISVEC(A68_VC ,DZAATRN,CZAATRN,4)
static A68_177   FZAATRN = {"STRING"}; 
A_GISVEC(A68_VC ,GZAATRN,FZAATRN,6)
static A68_176   IZAATRN = {"CONST"}; 
A_GISVEC(A68_VC ,JZAATRN,IZAATRN,5)
static A68_176   LZAATRN = {"ALIEN"}; 
A_GISVEC(A68_VC ,MZAATRN,LZAATRN,5)
static A68_177   OZAATRN = {"SAMPLE"}; 
A_GISVEC(A68_VC ,PZAATRN,OZAATRN,6)
static A68_177   RZAATRN = {"FASTER"}; 
A_GISVEC(A68_VC ,SZAATRN,RZAATRN,6)
static A68_177   UZAATRN = {"SLOWER"}; 
A_GISVEC(A68_VC ,VZAATRN,UZAATRN,6)
static A68_178   XZAATRN = {"REPLACE"}; 
A_GISVEC(A68_VC ,YZAATRN,XZAATRN,7)
static A68_116   AABATRN = {"ATTR"}; 
A_GISVEC(A68_VC ,BABATRN,AABATRN,4)
static A68_170  GCBATRN_table;
typedef struct   /* env of non-global proc */
{
int dummy;
} KABATRN_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} SABATRN_generator;
typedef struct   /* env of non-global proc */
{
A68_32  VABATRN_entries;
A68_INT  IBBATRN_i;
A_PAD_INT(PAD_39)
} NBBATRN_generator;

A68_VOID  NMAATRN_makecharset(A68_163  *ReturnedValue);

A_STATIC A68_VOID  PMAATRN_generator(A68_BOOL  OMAATRN_anonymous, A68_163  *ReturnedValue);

A_STATIC A68_VOID  VRAATRN_makehash(A68_170  *ReturnedValue);

A_STATIC A68_VOID  JABATRN_generator(A68_BOOL  HABATRN_anonymous, A68_170  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  RABATRN_generator(A68_BOOL  PABATRN_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  MBBATRN_generator(A68_BOOL  KBBATRN_anonymous, A68_169  *ReturnedValue, void *NonLocals);

A_STATIC A68_INT  JCBATRN_lookup(A68_VC  Word, A68_BOOL  Boldorstorp);

A68_VOID  BDBATRN_makelookup(A68_182  *ReturnedValue);

A_STATIC A68_VOID  PMAATRN_generator(A68_BOOL  OMAATRN_anonymous, A68_163  *ReturnedValue)
{ 
A68_163  QMAATRN;  /* clause result */
A68_163  RMAATRN;  /* OPERATORS - dynamic generator */
{ 
RMAATRN.dim[0].upb = MMAATRN_maxabschar ;
RMAATRN.dim[0].lwb = 0 ;
A_1INITSTRIDES(RMAATRN) ;
( OMAATRN_anonymous? A_R1LOC(A68_162 ,RMAATRN): A_R1HEAP(A68_162 ,RMAATRN) );
QMAATRN = RMAATRN;
} 
*ReturnedValue = (QMAATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  JABATRN_generator(A68_BOOL  HABATRN_anonymous, A68_170  *ReturnedValue, void *NonLocals)
#define NL(x) (((KABATRN_generator *)NonLocals)->x)
{ 
A68_170  LABATRN;  /* clause result */
A68_170  MABATRN;  /* OPERATORS - dynamic generator */
{ 
MABATRN.upb = LMAATRN_hash ;
( HABATRN_anonymous? A_VLOC(A68_169 ,MABATRN): A_VHEAP(A68_169 ,MABATRN) );
LABATRN = MABATRN;
} 
*ReturnedValue = (LABATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  RABATRN_generator(A68_BOOL  PABATRN_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((SABATRN_generator *)NonLocals)->x)
{ 
A68_32  TABATRN;  /* clause result */
A68_32  UABATRN;  /* OPERATORS - dynamic generator */
{ 
UABATRN.upb = LMAATRN_hash ;
( PABATRN_anonymous? A_VLOC(A68_INT ,UABATRN): A_VHEAP(A68_INT ,UABATRN) );
TABATRN = UABATRN;
} 
*ReturnedValue = (TABATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  MBBATRN_generator(A68_BOOL  KBBATRN_anonymous, A68_169  *ReturnedValue, void *NonLocals)
#define NL(x) (((NBBATRN_generator *)NonLocals)->x)
{ 
A68_169  OBBATRN;  /* clause result */
A68_169  PBBATRN;  /* OPERATORS - dynamic generator */
{ 
PBBATRN.upb = (*(&A_VINDEX(NL(VABATRN_entries),NL(IBBATRN_i)))) ;
( KBBATRN_anonymous? A_VLOC(A68_168 ,PBBATRN): A_VHEAP(A68_168 ,PBBATRN) );
OBBATRN = PBBATRN;
} 
*ReturnedValue = (OBBATRN);
return;
} 
#undef NL

A68_VOID  NMAATRN_makecharset(A68_163  *ReturnedValue)
{ 
A68_163  SMAATRN;  /* avoid structure result */
A68_163  TMAATRN_charset;
A68_VC  WMAATRN_bold;
A68_VC  ZMAATRN_ids;
A68_VC  CNAATRN_digits;
A68_VC  DNAATRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  ENAATRN_ops;
A68_INT  FNAATRN_i;
A68_INT  GNAATRN;  /* to part of loop */
A68_162  HNAATRN;  /* collateral clause result */
A68_162 * INAATRN;  /* YIELD */
A68_INT  JNAATRN_i;
A68_162  KNAATRN;  /* collateral clause result */
A68_INT  LNAATRN;  /* YIELD */
A68_162 * MNAATRN;  /* YIELD */
A68_162  NNAATRN;  /* collateral clause result */
A68_INT  ONAATRN;  /* YIELD */
A68_162 * PNAATRN;  /* YIELD */
A68_162  QNAATRN;  /* collateral clause result */
A68_INT  RNAATRN;  /* YIELD */
A68_162 * SNAATRN;  /* YIELD */
A68_INT  TNAATRN_i;
A68_162  UNAATRN;  /* collateral clause result */
A68_INT  VNAATRN;  /* YIELD */
A68_162 * WNAATRN;  /* YIELD */
A68_INT  XNAATRN_i;
A68_INT  YNAATRN;  /* to part of loop */
A68_162  ZNAATRN;  /* collateral clause result */
A68_INT  AOAATRN;  /* YIELD */
A68_162 * BOAATRN;  /* YIELD */
A68_162  COAATRN;  /* collateral clause result */
A68_INT  DOAATRN;  /* YIELD */
A68_162 * EOAATRN;  /* YIELD */
A68_162  FOAATRN;  /* collateral clause result */
A68_INT  GOAATRN;  /* YIELD */
A68_162 * HOAATRN;  /* YIELD */
A68_162  IOAATRN;  /* collateral clause result */
A68_INT  JOAATRN;  /* YIELD */
A68_162 * KOAATRN;  /* YIELD */
A68_162  LOAATRN;  /* collateral clause result */
A68_INT  MOAATRN;  /* YIELD */
A68_162 * NOAATRN;  /* YIELD */
A68_162  OOAATRN;  /* collateral clause result */
A68_INT  POAATRN;  /* YIELD */
A68_162 * QOAATRN;  /* YIELD */
A68_162  ROAATRN;  /* collateral clause result */
A68_INT  SOAATRN;  /* YIELD */
A68_162 * TOAATRN;  /* YIELD */
A68_162  UOAATRN;  /* collateral clause result */
A68_INT  VOAATRN;  /* YIELD */
A68_162 * WOAATRN;  /* YIELD */
A68_162  XOAATRN;  /* collateral clause result */
A68_INT  YOAATRN;  /* YIELD */
A68_162 * ZOAATRN;  /* YIELD */
A68_162  APAATRN;  /* collateral clause result */
A68_INT  BPAATRN;  /* YIELD */
A68_162 * CPAATRN;  /* YIELD */
A68_162  DPAATRN;  /* collateral clause result */
A68_INT  EPAATRN;  /* YIELD */
A68_162 * FPAATRN;  /* YIELD */
A68_162  GPAATRN;  /* collateral clause result */
A68_INT  HPAATRN;  /* YIELD */
A68_162 * IPAATRN;  /* YIELD */
A68_162  JPAATRN;  /* collateral clause result */
A68_INT  KPAATRN;  /* YIELD */
A68_162 * LPAATRN;  /* YIELD */
A68_162  MPAATRN;  /* collateral clause result */
A68_INT  NPAATRN;  /* YIELD */
A68_162 * OPAATRN;  /* YIELD */
A68_162  PPAATRN;  /* collateral clause result */
A68_INT  QPAATRN;  /* YIELD */
A68_162 * RPAATRN;  /* YIELD */
A68_162  SPAATRN;  /* collateral clause result */
A68_INT  TPAATRN;  /* YIELD */
A68_162 * UPAATRN;  /* YIELD */
A68_162  VPAATRN;  /* collateral clause result */
A68_INT  WPAATRN;  /* YIELD */
A68_162 * XPAATRN;  /* YIELD */
A68_162  YPAATRN;  /* collateral clause result */
A68_INT  ZPAATRN;  /* YIELD */
A68_162 * AQAATRN;  /* YIELD */
A68_162  BQAATRN;  /* collateral clause result */
A68_INT  CQAATRN;  /* YIELD */
A68_162 * DQAATRN;  /* YIELD */
A68_162  EQAATRN;  /* collateral clause result */
A68_INT  FQAATRN;  /* YIELD */
A68_162 * GQAATRN;  /* YIELD */
A68_162  HQAATRN;  /* collateral clause result */
A68_INT  IQAATRN;  /* YIELD */
A68_162 * JQAATRN;  /* YIELD */
A68_162  KQAATRN;  /* collateral clause result */
A68_INT  LQAATRN;  /* YIELD */
A68_162 * MQAATRN;  /* YIELD */
A68_162  NQAATRN;  /* collateral clause result */
A68_INT  OQAATRN;  /* YIELD */
A68_162 * PQAATRN;  /* YIELD */
A68_162  QQAATRN;  /* collateral clause result */
A68_INT  RQAATRN;  /* YIELD */
A68_162 * SQAATRN;  /* YIELD */
A68_162  TQAATRN;  /* collateral clause result */
A68_INT  UQAATRN;  /* YIELD */
A68_162 * VQAATRN;  /* YIELD */
A68_162  WQAATRN;  /* collateral clause result */
A68_INT  XQAATRN;  /* YIELD */
A68_162 * YQAATRN;  /* YIELD */
A68_162  ZQAATRN;  /* collateral clause result */
A68_INT  ARAATRN;  /* YIELD */
A68_162 * BRAATRN;  /* YIELD */
A68_162  CRAATRN;  /* collateral clause result */
A68_INT  DRAATRN;  /* YIELD */
A68_162 * ERAATRN;  /* YIELD */
A68_162  FRAATRN;  /* collateral clause result */
A68_INT  GRAATRN;  /* YIELD */
A68_162 * HRAATRN;  /* YIELD */
A68_162  IRAATRN;  /* collateral clause result */
A68_INT  JRAATRN;  /* YIELD */
A68_162 * KRAATRN;  /* YIELD */
A68_162  LRAATRN;  /* collateral clause result */
A68_INT  MRAATRN;  /* YIELD */
A68_162 * NRAATRN;  /* YIELD */
A68_162  ORAATRN;  /* collateral clause result */
A68_INT  PRAATRN;  /* YIELD */
A68_162 * QRAATRN;  /* YIELD */
A68_162  RRAATRN;  /* collateral clause result */
A68_INT  SRAATRN;  /* YIELD */
A68_162 * TRAATRN;  /* YIELD */
A68_163  URAATRN;  /* clause result */
A_PROC_ENTRY(makecharset);
{ 
PMAATRN_generator( A68_FALSE, &SMAATRN );
TMAATRN_charset = SMAATRN;
 /* line 103: */
WMAATRN_bold = VMAATRN;
 /* line 104: */
ZMAATRN_ids = YMAATRN;
 /* line 105: */
CNAATRN_digits = BNAATRN;
 /* line 106: */
ENAATRN_ops = A_HVEC(DNAATRN,'^',A68_CHAR );
 /* line 108: */
GNAATRN = MMAATRN_maxabschar;
for ( FNAATRN_i = 0;
FNAATRN_i <= GNAATRN;
FNAATRN_i += 1 )
{ 
HNAATRN.Type = 1;
HNAATRN.Value = 100;
INAATRN = (&A_R1INDEX(TMAATRN_charset,FNAATRN_i)) ;
(*INAATRN) = HNAATRN;
}
 /* line 110: */
for ( JNAATRN_i = 1;
JNAATRN_i <= 26;
JNAATRN_i += 1 )
{ 
KNAATRN.Type = 6;
KNAATRN.Value = (JNAATRN_i+9);
LNAATRN = (A68_INT)(unsigned char)A_VINDEX(WMAATRN_bold,JNAATRN_i) ;
MNAATRN = (&A_R1INDEX(TMAATRN_charset,LNAATRN)) ;
(*MNAATRN) = KNAATRN;
 /* line 111: */
NNAATRN.Type = 3;
 /* line 112: */
NNAATRN.Value = (JNAATRN_i+9);
ONAATRN = (A68_INT)(unsigned char)A_VINDEX(ZMAATRN_ids,JNAATRN_i) ;
PNAATRN = (&A_R1INDEX(TMAATRN_charset,ONAATRN)) ;
(*PNAATRN) = NNAATRN;
}
 /* line 113: */
QNAATRN.Type = 9;
QNAATRN.Value = 36;
RNAATRN = (A68_INT)(unsigned char)'_' ;
SNAATRN = (&A_R1INDEX(TMAATRN_charset,RNAATRN)) ;
(*SNAATRN) = QNAATRN;
 /* line 114: */
for ( TNAATRN_i = 1;
TNAATRN_i <= 10;
TNAATRN_i += 1 )
{ 
UNAATRN.Type = 4;
UNAATRN.Value = (TNAATRN_i-1);
VNAATRN = (A68_INT)(unsigned char)A_VINDEX(CNAATRN_digits,TNAATRN_i) ;
WNAATRN = (&A_R1INDEX(TMAATRN_charset,VNAATRN)) ;
(*WNAATRN) = UNAATRN;
}
 /* line 115: */
YNAATRN = ENAATRN_ops.upb;
for ( XNAATRN_i = 1;
XNAATRN_i <= YNAATRN;
XNAATRN_i += 1 )
{ 
ZNAATRN.Type = 20;
ZNAATRN.Value = 900;
AOAATRN = (A68_INT)(unsigned char)A_VINDEX(ENAATRN_ops,XNAATRN_i) ;
BOAATRN = (&A_R1INDEX(TMAATRN_charset,AOAATRN)) ;
(*BOAATRN) = ZNAATRN;
}
 /* line 117: */
COAATRN.Type = 2;
COAATRN.Value = 37;
DOAATRN = (A68_INT)(unsigned char)' ' ;
EOAATRN = (&A_R1INDEX(TMAATRN_charset,DOAATRN)) ;
(*EOAATRN) = COAATRN;
FOAATRN.Type = 22;
FOAATRN.Value = 902;
GOAATRN = (A68_INT)(unsigned char)'-' ;
HOAATRN = (&A_R1INDEX(TMAATRN_charset,GOAATRN)) ;
(*HOAATRN) = FOAATRN;
 /* line 118: */
IOAATRN.Type = 20;
IOAATRN.Value = 60;
JOAATRN = (A68_INT)(unsigned char)'#' ;
KOAATRN = (&A_R1INDEX(TMAATRN_charset,JOAATRN)) ;
(*KOAATRN) = IOAATRN;
LOAATRN.Type = 5;
LOAATRN.Value = 103;
MOAATRN = (A68_INT)(unsigned char)'\"' ;
NOAATRN = (&A_R1INDEX(TMAATRN_charset,MOAATRN)) ;
(*NOAATRN) = LOAATRN;
 /* line 119: */
OOAATRN.Type = 20;
OOAATRN.Value = 123;
POAATRN = (A68_INT)(unsigned char)'{' ;
QOAATRN = (&A_R1INDEX(TMAATRN_charset,POAATRN)) ;
(*QOAATRN) = OOAATRN;
ROAATRN.Type = 20;
ROAATRN.Value = 124;
SOAATRN = (A68_INT)(unsigned char)'}' ;
TOAATRN = (&A_R1INDEX(TMAATRN_charset,SOAATRN)) ;
(*TOAATRN) = ROAATRN;
 /* line 120: */
UOAATRN.Type = 22;
UOAATRN.Value = 111;
VOAATRN = (A68_INT)(unsigned char)'/' ;
WOAATRN = (&A_R1INDEX(TMAATRN_charset,VOAATRN)) ;
(*WOAATRN) = UOAATRN;
XOAATRN.Type = 20;
XOAATRN.Value = 112;
YOAATRN = (A68_INT)(unsigned char)',' ;
ZOAATRN = (&A_R1INDEX(TMAATRN_charset,YOAATRN)) ;
(*ZOAATRN) = XOAATRN;
 /* line 121: */
APAATRN.Type = 22;
APAATRN.Value = 113;
BPAATRN = (A68_INT)(unsigned char)':' ;
CPAATRN = (&A_R1INDEX(TMAATRN_charset,BPAATRN)) ;
(*CPAATRN) = APAATRN;
DPAATRN.Type = 20;
DPAATRN.Value = 114;
EPAATRN = (A68_INT)(unsigned char)'(' ;
FPAATRN = (&A_R1INDEX(TMAATRN_charset,EPAATRN)) ;
(*FPAATRN) = DPAATRN;
 /* line 122: */
GPAATRN.Type = 20;
GPAATRN.Value = 115;
HPAATRN = (A68_INT)(unsigned char)')' ;
IPAATRN = (&A_R1INDEX(TMAATRN_charset,HPAATRN)) ;
(*IPAATRN) = GPAATRN;
JPAATRN.Type = 22;
JPAATRN.Value = 116;
KPAATRN = (A68_INT)(unsigned char)'|' ;
LPAATRN = (&A_R1INDEX(TMAATRN_charset,KPAATRN)) ;
(*LPAATRN) = JPAATRN;
 /* line 123: */
MPAATRN.Type = 22;
MPAATRN.Value = 120;
NPAATRN = (A68_INT)(unsigned char)'.' ;
OPAATRN = (&A_R1INDEX(TMAATRN_charset,NPAATRN)) ;
(*OPAATRN) = MPAATRN;
PPAATRN.Type = 20;
PPAATRN.Value = 121;
QPAATRN = (A68_INT)(unsigned char)'[' ;
RPAATRN = (&A_R1INDEX(TMAATRN_charset,QPAATRN)) ;
(*RPAATRN) = PPAATRN;
 /* line 124: */
SPAATRN.Type = 20;
SPAATRN.Value = 122;
TPAATRN = (A68_INT)(unsigned char)']' ;
UPAATRN = (&A_R1INDEX(TMAATRN_charset,TPAATRN)) ;
(*UPAATRN) = SPAATRN;
VPAATRN.Type = 20;
VPAATRN.Value = 125;
WPAATRN = (A68_INT)(unsigned char)'&' ;
XPAATRN = (&A_R1INDEX(TMAATRN_charset,WPAATRN)) ;
(*XPAATRN) = VPAATRN;
 /* line 125: */
YPAATRN.Type = 22;
YPAATRN.Value = 801;
ZPAATRN = (A68_INT)(unsigned char)'*' ;
AQAATRN = (&A_R1INDEX(TMAATRN_charset,ZPAATRN)) ;
(*AQAATRN) = YPAATRN;
BQAATRN.Type = 20;
BQAATRN.Value = 802;
CQAATRN = (A68_INT)(unsigned char)'%' ;
DQAATRN = (&A_R1INDEX(TMAATRN_charset,CQAATRN)) ;
(*DQAATRN) = BQAATRN;
 /* line 126: */
EQAATRN.Type = 22;
EQAATRN.Value = 52;
FQAATRN = (A68_INT)(unsigned char)'=' ;
GQAATRN = (&A_R1INDEX(TMAATRN_charset,FQAATRN)) ;
(*GQAATRN) = EQAATRN;
HQAATRN.Type = 22;
HQAATRN.Value = 807;
IQAATRN = (A68_INT)(unsigned char)'<' ;
JQAATRN = (&A_R1INDEX(TMAATRN_charset,IQAATRN)) ;
(*JQAATRN) = HQAATRN;
 /* line 127: */
KQAATRN.Type = 22;
KQAATRN.Value = 808;
LQAATRN = (A68_INT)(unsigned char)'>' ;
MQAATRN = (&A_R1INDEX(TMAATRN_charset,LQAATRN)) ;
(*MQAATRN) = KQAATRN;
NQAATRN.Type = 22;
NQAATRN.Value = 901;
OQAATRN = (A68_INT)(unsigned char)'+' ;
PQAATRN = (&A_R1INDEX(TMAATRN_charset,OQAATRN)) ;
(*PQAATRN) = NQAATRN;
 /* line 128: */
QQAATRN.Type = 2;
QQAATRN.Value = 37;
RQAATRN = 9 ;
SQAATRN = (&A_R1INDEX(TMAATRN_charset,RQAATRN)) ;
(*SQAATRN) = QQAATRN;
TQAATRN.Type = 20;
TQAATRN.Value = 181;
UQAATRN = (A68_INT)(unsigned char)'?' ;
VQAATRN = (&A_R1INDEX(TMAATRN_charset,UQAATRN)) ;
(*VQAATRN) = TQAATRN;
 /* line 129: */
WQAATRN.Type = 20;
WQAATRN.Value = 108;
XQAATRN = (A68_INT)(unsigned char)'@' ;
YQAATRN = (&A_R1INDEX(TMAATRN_charset,XQAATRN)) ;
(*YQAATRN) = WQAATRN;
 /* line 130: */
ZQAATRN.Type = 20;
ZQAATRN.Value = 177;
ARAATRN = (A68_INT)(unsigned char)';' ;
BRAATRN = (&A_R1INDEX(TMAATRN_charset,ARAATRN)) ;
(*BRAATRN) = ZQAATRN;
 /* line 131: */
CRAATRN.Type = 10;
CRAATRN.Value = 184;
DRAATRN = (A68_INT)(unsigned char)'\'' ;
ERAATRN = (&A_R1INDEX(TMAATRN_charset,DRAATRN)) ;
(*ERAATRN) = CRAATRN;
 /* line 132: */
FRAATRN.Type = 20;
FRAATRN.Value = 192;
GRAATRN = (A68_INT)(unsigned char)'\\' ;
HRAATRN = (&A_R1INDEX(TMAATRN_charset,GRAATRN)) ;
(*HRAATRN) = FRAATRN;
 /* line 135: */
IRAATRN.Type = 1;
IRAATRN.Value = 101;
JRAATRN = (A68_INT)(unsigned char)'~' ;
KRAATRN = (&A_R1INDEX(TMAATRN_charset,JRAATRN)) ;
(*KRAATRN) = IRAATRN;
 /* line 136: */
LRAATRN.Type = 1;
LRAATRN.Value = 101;
MRAATRN = (A68_INT)(unsigned char)'$' ;
NRAATRN = (&A_R1INDEX(TMAATRN_charset,MRAATRN)) ;
(*NRAATRN) = LRAATRN;
ORAATRN.Type = 1;
ORAATRN.Value = 101;
PRAATRN = (A68_INT)(unsigned char)'!' ;
QRAATRN = (&A_R1INDEX(TMAATRN_charset,PRAATRN)) ;
(*QRAATRN) = ORAATRN;
 /* line 137: */
RRAATRN.Type = 1;
RRAATRN.Value = 101;
SRAATRN = (A68_INT)(unsigned char)'`' ;
TRAATRN = (&A_R1INDEX(TMAATRN_charset,SRAATRN)) ;
(*TRAATRN) = RRAATRN;
 /* line 139: */
 /* line 140: */
URAATRN = TMAATRN_charset;
} 
A_PROC_EXIT(makecharset);
*ReturnedValue = (URAATRN);
return;
} 
#undef NL

A_STATIC A68_VOID  VRAATRN_makehash(A68_170  *ReturnedValue)
{ 
A68_179  XRAATRN;  /* collateral clause result */
A68_VC  ASAATRN;  /* avoid structure result */
A68_VC  DSAATRN;  /* avoid structure result */
A68_VC  GSAATRN;  /* avoid structure result */
A68_VC  JSAATRN;  /* avoid structure result */
A68_VC  MSAATRN;  /* avoid structure result */
A68_VC  PSAATRN;  /* avoid structure result */
A68_VC  SSAATRN;  /* avoid structure result */
A68_VC  VSAATRN;  /* avoid structure result */
A68_VC  YSAATRN;  /* avoid structure result */
A68_VC  BTAATRN;  /* avoid structure result */
A68_VC  ETAATRN;  /* avoid structure result */
A68_VC  HTAATRN;  /* avoid structure result */
A68_VC  KTAATRN;  /* avoid structure result */
A68_VC  NTAATRN;  /* avoid structure result */
A68_VC  QTAATRN;  /* avoid structure result */
A68_VC  TTAATRN;  /* avoid structure result */
A68_VC  WTAATRN;  /* avoid structure result */
A68_VC  ZTAATRN;  /* avoid structure result */
A68_VC  CUAATRN;  /* avoid structure result */
A68_VC  FUAATRN;  /* avoid structure result */
A68_VC  IUAATRN;  /* avoid structure result */
A68_VC  LUAATRN;  /* avoid structure result */
A68_VC  OUAATRN;  /* avoid structure result */
A68_VC  RUAATRN;  /* avoid structure result */
A68_VC  UUAATRN;  /* avoid structure result */
A68_VC  XUAATRN;  /* avoid structure result */
A68_VC  AVAATRN;  /* avoid structure result */
A68_VC  DVAATRN;  /* avoid structure result */
A68_VC  GVAATRN;  /* avoid structure result */
A68_VC  JVAATRN;  /* avoid structure result */
A68_VC  MVAATRN;  /* avoid structure result */
A68_VC  PVAATRN;  /* avoid structure result */
A68_VC  SVAATRN;  /* avoid structure result */
A68_VC  VVAATRN;  /* avoid structure result */
A68_VC  YVAATRN;  /* avoid structure result */
A68_VC  BWAATRN;  /* avoid structure result */
A68_VC  EWAATRN;  /* avoid structure result */
A68_VC  HWAATRN;  /* avoid structure result */
A68_VC  KWAATRN;  /* avoid structure result */
A68_VC  NWAATRN;  /* avoid structure result */
A68_VC  QWAATRN;  /* avoid structure result */
A68_VC  TWAATRN;  /* avoid structure result */
A68_VC  WWAATRN;  /* avoid structure result */
A68_VC  ZWAATRN;  /* avoid structure result */
A68_VC  CXAATRN;  /* avoid structure result */
A68_VC  FXAATRN;  /* avoid structure result */
A68_VC  IXAATRN;  /* avoid structure result */
A68_VC  LXAATRN;  /* avoid structure result */
A68_VC  OXAATRN;  /* avoid structure result */
A68_VC  RXAATRN;  /* avoid structure result */
A68_VC  UXAATRN;  /* avoid structure result */
A68_VC  XXAATRN;  /* avoid structure result */
A68_VC  AYAATRN;  /* avoid structure result */
A68_VC  DYAATRN;  /* avoid structure result */
A68_VC  GYAATRN;  /* avoid structure result */
A68_VC  JYAATRN;  /* avoid structure result */
A68_VC  MYAATRN;  /* avoid structure result */
A68_VC  PYAATRN;  /* avoid structure result */
A68_VC  SYAATRN;  /* avoid structure result */
A68_VC  VYAATRN;  /* avoid structure result */
A68_VC  YYAATRN;  /* avoid structure result */
A68_VC  BZAATRN;  /* avoid structure result */
A68_VC  EZAATRN;  /* avoid structure result */
A68_VC  HZAATRN;  /* avoid structure result */
A68_VC  KZAATRN;  /* avoid structure result */
A68_VC  NZAATRN;  /* avoid structure result */
A68_VC  QZAATRN;  /* avoid structure result */
A68_VC  TZAATRN;  /* avoid structure result */
A68_VC  WZAATRN;  /* avoid structure result */
A68_VC  ZZAATRN;  /* avoid structure result */
A68_VC  CABATRN;  /* avoid structure result */
A68_173  DABATRN;  /* OPERATORS - istruct -> vector */
A68_173  EABATRN_symbollist;
A68_INT  FABATRN_t;
A68_INT  GABATRN_nsymbols;
A68_180  IABATRN_generator;   /* proc value of non-global proc */
A68_170  NABATRN;  /* avoid structure result */
A68_170  OABATRN_table;
A68_33  QABATRN_generator;   /* proc value of non-global proc */
A68_32  WABATRN;  /* avoid structure result */
A68_32  VABATRN_entries;
A68_INT  XABATRN_i;
A68_INT  YABATRN;  /* to part of loop */
A68_INT * ZABATRN;  /* YIELD */
A68_INT  ABBATRN_i;
A68_INT  BBBATRN;  /* to part of loop */
A68_VC  CBBATRN;  /* OPERATORS - simple index */
A68_INT  DBBATRN;  /* YIELD */
A68_INT  EBBATRN;  /* ADICOPS - MOD */
A68_INT  FBBATRN;  /* ADICOPS - MOD */
A68_INT  GBBATRN;  /* YIELD */
A68_INT * HBBATRN;  /* YIELD */
A68_INT  IBBATRN_i;
A68_INT  JBBATRN;  /* to part of loop */
A68_181  LBBATRN_generator;   /* proc value of non-global proc */
A68_169  QBBATRN;  /* avoid structure result */
A68_169 * RBBATRN;  /* YIELD */
A68_INT * SBBATRN;  /* YIELD */
A68_INT  TBBATRN_i;
A68_INT  UBBATRN;  /* to part of loop */
A68_168  VBBATRN;  /* collateral clause result */
A68_VC  WBBATRN;  /* OPERATORS - simple index */
A68_INT  XBBATRN;  /* YIELD */
A68_INT  YBBATRN;  /* ADICOPS - MOD */
A68_INT  ZBBATRN;  /* ADICOPS - MOD */
A68_INT  ACBATRN;  /* YIELD */
A68_169  BCBATRN;  /* OPERATORS - simple index */
A68_INT * CCBATRN;  /* YIELD */
A68_INT  DCBATRN;  /* YIELD */
A68_168 * ECBATRN;  /* YIELD */
A68_170  FCBATRN;  /* clause result */
A_PROC_ENTRY(makehash);
{ 
 /* line 150: */
 /* line 151: */
RSCAOST_makeid( ZRAATRN, &ASAATRN );
XRAATRN.data[0].Symbol = ASAATRN;
XRAATRN.data[0].Value = 170;
RSCAOST_makeid( CSAATRN, &DSAATRN );
XRAATRN.data[1].Symbol = DSAATRN;
XRAATRN.data[1].Value = 806;
RSCAOST_makeid( FSAATRN, &GSAATRN );
XRAATRN.data[2].Symbol = GSAATRN;
 /* line 152: */
XRAATRN.data[2].Value = 119;
RSCAOST_makeid( ISAATRN, &JSAATRN );
XRAATRN.data[3].Symbol = JSAATRN;
XRAATRN.data[3].Value = 117;
RSCAOST_makeid( LSAATRN, &MSAATRN );
XRAATRN.data[4].Symbol = MSAATRN;
XRAATRN.data[4].Value = 804;
RSCAOST_makeid( OSAATRN, &PSAATRN );
XRAATRN.data[5].Symbol = PSAATRN;
 /* line 153: */
XRAATRN.data[5].Value = 118;
RSCAOST_makeid( RSAATRN, &SSAATRN );
XRAATRN.data[6].Symbol = SSAATRN;
XRAATRN.data[6].Value = 805;
RSCAOST_makeid( USAATRN, &VSAATRN );
XRAATRN.data[7].Symbol = VSAATRN;
XRAATRN.data[7].Value = 109;
RSCAOST_makeid( XSAATRN, &YSAATRN );
XRAATRN.data[8].Symbol = YSAATRN;
 /* line 154: */
XRAATRN.data[8].Value = 174;
RSCAOST_makeid( ATAATRN, &BTAATRN );
XRAATRN.data[9].Symbol = BTAATRN;
XRAATRN.data[9].Value = 509;
RSCAOST_makeid( DTAATRN, &ETAATRN );
XRAATRN.data[10].Symbol = ETAATRN;
XRAATRN.data[10].Value = 150;
RSCAOST_makeid( GTAATRN, &HTAATRN );
XRAATRN.data[11].Symbol = HTAATRN;
 /* line 155: */
XRAATRN.data[11].Value = 139;
RSCAOST_makeid( JTAATRN, &KTAATRN );
XRAATRN.data[12].Symbol = KTAATRN;
XRAATRN.data[12].Value = 134;
RSCAOST_makeid( MTAATRN, &NTAATRN );
XRAATRN.data[13].Symbol = NTAATRN;
 /* line 156: */
XRAATRN.data[13].Value = 67;
RSCAOST_makeid( PTAATRN, &QTAATRN );
XRAATRN.data[14].Symbol = QTAATRN;
XRAATRN.data[14].Value = 151;
RSCAOST_makeid( STAATRN, &TTAATRN );
XRAATRN.data[15].Symbol = TTAATRN;
XRAATRN.data[15].Value = 143;
RSCAOST_makeid( VTAATRN, &WTAATRN );
XRAATRN.data[16].Symbol = WTAATRN;
 /* line 157: */
XRAATRN.data[16].Value = 136;
RSCAOST_makeid( YTAATRN, &ZTAATRN );
XRAATRN.data[17].Symbol = ZTAATRN;
XRAATRN.data[17].Value = 169;
RSCAOST_makeid( BUAATRN, &CUAATRN );
XRAATRN.data[18].Symbol = CUAATRN;
XRAATRN.data[18].Value = 140;
RSCAOST_makeid( EUAATRN, &FUAATRN );
XRAATRN.data[19].Symbol = FUAATRN;
 /* line 158: */
XRAATRN.data[19].Value = 137;
RSCAOST_makeid( HUAATRN, &IUAATRN );
XRAATRN.data[20].Symbol = IUAATRN;
XRAATRN.data[20].Value = 163;
RSCAOST_makeid( KUAATRN, &LUAATRN );
XRAATRN.data[21].Symbol = LUAATRN;
XRAATRN.data[21].Value = 161;
RSCAOST_makeid( NUAATRN, &OUAATRN );
XRAATRN.data[22].Symbol = OUAATRN;
 /* line 159: */
XRAATRN.data[22].Value = 141;
RSCAOST_makeid( QUAATRN, &RUAATRN );
XRAATRN.data[23].Symbol = RUAATRN;
XRAATRN.data[23].Value = 131;
RSCAOST_makeid( TUAATRN, &UUAATRN );
XRAATRN.data[24].Symbol = UUAATRN;
 /* line 160: */
XRAATRN.data[24].Value = 514;
RSCAOST_makeid( WUAATRN, &XUAATRN );
XRAATRN.data[25].Symbol = XUAATRN;
XRAATRN.data[25].Value = 142;
RSCAOST_makeid( ZUAATRN, &AVAATRN );
XRAATRN.data[26].Symbol = AVAATRN;
XRAATRN.data[26].Value = 802;
RSCAOST_makeid( CVAATRN, &DVAATRN );
XRAATRN.data[27].Symbol = DVAATRN;
 /* line 161: */
XRAATRN.data[27].Value = 159;
RSCAOST_makeid( FVAATRN, &GVAATRN );
XRAATRN.data[28].Symbol = GVAATRN;
XRAATRN.data[28].Value = 165;
RSCAOST_makeid( IVAATRN, &JVAATRN );
XRAATRN.data[29].Symbol = JVAATRN;
XRAATRN.data[29].Value = 166;
RSCAOST_makeid( LVAATRN, &MVAATRN );
XRAATRN.data[30].Symbol = MVAATRN;
 /* line 162: */
XRAATRN.data[30].Value = 403;
RSCAOST_makeid( OVAATRN, &PVAATRN );
XRAATRN.data[31].Symbol = PVAATRN;
XRAATRN.data[31].Value = 148;
RSCAOST_makeid( RVAATRN, &SVAATRN );
XRAATRN.data[32].Symbol = SVAATRN;
XRAATRN.data[32].Value = 152;
RSCAOST_makeid( UVAATRN, &VVAATRN );
XRAATRN.data[33].Symbol = VVAATRN;
 /* line 163: */
XRAATRN.data[33].Value = 515;
RSCAOST_makeid( XVAATRN, &YVAATRN );
XRAATRN.data[34].Symbol = YVAATRN;
XRAATRN.data[34].Value = 138;
RSCAOST_makeid( AWAATRN, &BWAATRN );
XRAATRN.data[35].Symbol = BWAATRN;
 /* line 164: */
XRAATRN.data[35].Value = 132;
RSCAOST_makeid( DWAATRN, &EWAATRN );
XRAATRN.data[36].Symbol = EWAATRN;
XRAATRN.data[36].Value = 128;
RSCAOST_makeid( GWAATRN, &HWAATRN );
XRAATRN.data[37].Symbol = HWAATRN;
XRAATRN.data[37].Value = 133;
RSCAOST_makeid( JWAATRN, &KWAATRN );
XRAATRN.data[38].Symbol = KWAATRN;
 /* line 165: */
XRAATRN.data[38].Value = 68;
RSCAOST_makeid( MWAATRN, &NWAATRN );
XRAATRN.data[39].Symbol = NWAATRN;
XRAATRN.data[39].Value = 129;
RSCAOST_makeid( PWAATRN, &QWAATRN );
XRAATRN.data[40].Symbol = QWAATRN;
XRAATRN.data[40].Value = 149;
RSCAOST_makeid( SWAATRN, &TWAATRN );
XRAATRN.data[41].Symbol = TWAATRN;
 /* line 167: */
XRAATRN.data[41].Value = 401;
RSCAOST_makeid( VWAATRN, &WWAATRN );
XRAATRN.data[42].Symbol = WWAATRN;
XRAATRN.data[42].Value = 135;
RSCAOST_makeid( YWAATRN, &ZWAATRN );
XRAATRN.data[43].Symbol = ZWAATRN;
XRAATRN.data[43].Value = 510;
RSCAOST_makeid( BXAATRN, &CXAATRN );
XRAATRN.data[44].Symbol = CXAATRN;
 /* line 168: */
XRAATRN.data[44].Value = 126;
RSCAOST_makeid( EXAATRN, &FXAATRN );
XRAATRN.data[45].Symbol = FXAATRN;
XRAATRN.data[45].Value = 162;
RSCAOST_makeid( HXAATRN, &IXAATRN );
XRAATRN.data[46].Symbol = IXAATRN;
XRAATRN.data[46].Value = 164;
RSCAOST_makeid( KXAATRN, &LXAATRN );
XRAATRN.data[47].Symbol = LXAATRN;
 /* line 169: */
XRAATRN.data[47].Value = 167;
RSCAOST_makeid( NXAATRN, &OXAATRN );
XRAATRN.data[48].Symbol = OXAATRN;
XRAATRN.data[48].Value = 168;
RSCAOST_makeid( QXAATRN, &RXAATRN );
XRAATRN.data[49].Symbol = RXAATRN;
 /* line 170: */
XRAATRN.data[49].Value = 512;
RSCAOST_makeid( TXAATRN, &UXAATRN );
XRAATRN.data[50].Symbol = UXAATRN;
XRAATRN.data[50].Value = 513;
RSCAOST_makeid( WXAATRN, &XXAATRN );
XRAATRN.data[51].Symbol = XXAATRN;
XRAATRN.data[51].Value = 160;
RSCAOST_makeid( ZXAATRN, &AYAATRN );
XRAATRN.data[52].Symbol = AYAATRN;
 /* line 171: */
XRAATRN.data[52].Value = 130;
RSCAOST_makeid( CYAATRN, &DYAATRN );
XRAATRN.data[53].Symbol = DYAATRN;
XRAATRN.data[53].Value = 171;
RSCAOST_makeid( FYAATRN, &GYAATRN );
XRAATRN.data[54].Symbol = GYAATRN;
XRAATRN.data[54].Value = 173;
RSCAOST_makeid( IYAATRN, &JYAATRN );
XRAATRN.data[55].Symbol = JYAATRN;
 /* line 172: */
XRAATRN.data[55].Value = 178;
RSCAOST_makeid( LYAATRN, &MYAATRN );
XRAATRN.data[56].Symbol = MYAATRN;
XRAATRN.data[56].Value = 175;
RSCAOST_makeid( OYAATRN, &PYAATRN );
XRAATRN.data[57].Symbol = PYAATRN;
XRAATRN.data[57].Value = 176;
RSCAOST_makeid( RYAATRN, &SYAATRN );
XRAATRN.data[58].Symbol = SYAATRN;
 /* line 173: */
XRAATRN.data[58].Value = 182;
RSCAOST_makeid( UYAATRN, &VYAATRN );
XRAATRN.data[59].Symbol = VYAATRN;
XRAATRN.data[59].Value = 404;
RSCAOST_makeid( XYAATRN, &YYAATRN );
XRAATRN.data[60].Symbol = YYAATRN;
XRAATRN.data[60].Value = 405;
RSCAOST_makeid( AZAATRN, &BZAATRN );
XRAATRN.data[61].Symbol = BZAATRN;
 /* line 174: */
XRAATRN.data[61].Value = 816;
RSCAOST_makeid( DZAATRN, &EZAATRN );
XRAATRN.data[62].Symbol = EZAATRN;
XRAATRN.data[62].Value = 183;
RSCAOST_makeid( GZAATRN, &HZAATRN );
XRAATRN.data[63].Symbol = HZAATRN;
XRAATRN.data[63].Value = 185;
RSCAOST_makeid( JZAATRN, &KZAATRN );
XRAATRN.data[64].Symbol = KZAATRN;
 /* line 175: */
XRAATRN.data[64].Value = 127;
RSCAOST_makeid( MZAATRN, &NZAATRN );
XRAATRN.data[65].Symbol = NZAATRN;
XRAATRN.data[65].Value = 186;
RSCAOST_makeid( PZAATRN, &QZAATRN );
XRAATRN.data[66].Symbol = QZAATRN;
XRAATRN.data[66].Value = 187;
RSCAOST_makeid( SZAATRN, &TZAATRN );
XRAATRN.data[67].Symbol = TZAATRN;
 /* line 176: */
XRAATRN.data[67].Value = 188;
RSCAOST_makeid( VZAATRN, &WZAATRN );
XRAATRN.data[68].Symbol = WZAATRN;
XRAATRN.data[68].Value = 189;
RSCAOST_makeid( YZAATRN, &ZZAATRN );
XRAATRN.data[69].Symbol = ZZAATRN;
XRAATRN.data[69].Value = 190;
RSCAOST_makeid( BABATRN, &CABATRN );
XRAATRN.data[70].Symbol = CABATRN;
 /* line 177: */
XRAATRN.data[70].Value = 191;
EABATRN_symbollist = A_HISVEC(DABATRN,XRAATRN,71,A68_172 );
 /* line 179: */
 /* line 180: */
GABATRN_nsymbols = EABATRN_symbollist.upb;
 /* line 181: */
 /* line 182: */
A_CLOSURE( IABATRN_generator, JABATRN_generator, KABATRN_generator );
A_CALLPROC(IABATRN_generator,(A68_FALSE, &NABATRN),(A68_FALSE, &NABATRN,(IABATRN_generator).nonlocals));
OABATRN_table = NABATRN;
 /* line 183: */
A_CLOSURE( QABATRN_generator, RABATRN_generator, SABATRN_generator );
A_CALLPROC(QABATRN_generator,(A68_TRUE, &WABATRN),(A68_TRUE, &WABATRN,(QABATRN_generator).nonlocals));
VABATRN_entries = WABATRN;
 /* line 184: */
YABATRN = LMAATRN_hash;
for ( XABATRN_i = 1;
XABATRN_i <= YABATRN;
XABATRN_i += 1 )
{ 
ZABATRN = (&A_VINDEX(VABATRN_entries,XABATRN_i)) ;
(*ZABATRN) = 0;
}
 /* line 185: */
 /* line 186: */
BBBATRN = GABATRN_nsymbols;
for ( ABBATRN_i = 1;
ABBATRN_i <= BBBATRN;
ABBATRN_i += 1 )
{ 
CBBATRN = A_VINDEX(EABATRN_symbollist,ABBATRN_i).Symbol ;
DBBATRN = 1 ;
FBBATRN = (A68_INT)(unsigned char)(*(&A_VINDEX(CBBATRN,DBBATRN))) ;
GBBATRN = (A_MOD(FBBATRN,LMAATRN_hash,EBBATRN)+1) ;
HBBATRN = (&A_VINDEX(VABATRN_entries,GBBATRN)) ;
(*HBBATRN)+=1;
}
 /* line 187: */
 /* line 188: */
JBBATRN = LMAATRN_hash;
for ( IBBATRN_i = 1;
IBBATRN_i <= JBBATRN;
IBBATRN_i += 1 )
{ 
A_CLOSURE( LBBATRN_generator, MBBATRN_generator, NBBATRN_generator );
(( NBBATRN_generator * ) ( LBBATRN_generator.nonlocals )) -> VABATRN_entries = VABATRN_entries;
(( NBBATRN_generator * ) ( LBBATRN_generator.nonlocals )) -> IBBATRN_i = IBBATRN_i;
A_CALLPROC(LBBATRN_generator,(A68_FALSE, &QBBATRN),(A68_FALSE, &QBBATRN,(LBBATRN_generator).nonlocals));
RBBATRN = (&A_VINDEX(OABATRN_table,IBBATRN_i)) ;
(*RBBATRN) = QBBATRN;
 /* line 189: */
 /* line 190: */
SBBATRN = (&A_VINDEX(VABATRN_entries,IBBATRN_i)) ;
(*SBBATRN) = 0;
}
 /* line 191: */
 /* line 192: */
UBBATRN = GABATRN_nsymbols;
for ( TBBATRN_i = 1;
TBBATRN_i <= UBBATRN;
TBBATRN_i += 1 )
{ 
 /* line 193: */
 /* line 194: */
VBBATRN.Symbol = A_VINDEX(EABATRN_symbollist,TBBATRN_i).Symbol;
 /* line 195: */
VBBATRN.Length = A_VINDEX(EABATRN_symbollist,TBBATRN_i).Symbol.upb;
 /* line 196: */
VBBATRN.Value = A_VINDEX(EABATRN_symbollist,TBBATRN_i).Value;
WBBATRN = A_VINDEX(EABATRN_symbollist,TBBATRN_i).Symbol ;
XBBATRN = 1 ;
ZBBATRN = (A68_INT)(unsigned char)(*(&A_VINDEX(WBBATRN,XBBATRN))) ;
ACBATRN = FABATRN_t = (A_MOD(ZBBATRN,LMAATRN_hash,YBBATRN)+1) ;
BCBATRN = (*(&A_VINDEX(OABATRN_table,ACBATRN))) ;
CCBATRN = (&A_VINDEX(VABATRN_entries,FABATRN_t)) ;
DCBATRN = (*CCBATRN)+=1 ;
ECBATRN = (&A_VINDEX(BCBATRN,DCBATRN)) ;
(*ECBATRN) = VBBATRN;
}
 /* line 197: */
 /* line 198: */
FCBATRN = OABATRN_table;
} 
A_PROC_EXIT(makehash);
*ReturnedValue = (FCBATRN);
return;
} 
#undef NL

A_STATIC A68_INT  JCBATRN_lookup(A68_VC  Word, A68_BOOL  Boldorstorp)
{ 
A68_INT  KCBATRN_i;
A68_INT  LCBATRN_j;
A68_INT  MCBATRN_length;
A68_INT  OCBATRN;  /* YIELD */
A68_INT  PCBATRN;  /* ADICOPS - MOD */
A68_INT  QCBATRN;  /* ADICOPS - MOD */
A68_INT  NCBATRN_index;
A68_168 * RCBATRN_symbol;
A68_169  SCBATRN_list;
A68_VC  TCBATRN_sym;
A68_INT  UCBATRN_ans;
A68_INT  VCBATRN_upb;
A68_BOOL  WCBATRN;  /* optbool result */
A68_BOOL  XCBATRN;  /* optbool result */
A68_BOOL  YCBATRN;  /* optbool result */
A68_BOOL  ZCBATRN;  /* clause result */
A68_INT  ADBATRN;  /* clause result */
A_PROC_ENTRY(lookup);
 /* line 203: */
 /* line 204: */
{ 
OCBATRN = 1 ;
QCBATRN = (A68_INT)(unsigned char)(*(&A_VINDEX(Word,OCBATRN))) ;
NCBATRN_index = (A_MOD(QCBATRN,LMAATRN_hash,PCBATRN)+1);
 /* line 205: */
 /* line 206: */
 /* line 207: */
 /* line 208: */
UCBATRN_ans = 105;
 /* line 209: */
VCBATRN_upb = Word.upb;
 /* line 210: */
WCBATRN = (VCBATRN_upb<=8);
if ( WCBATRN )
{ /* line 211: */
WCBATRN = ((MCBATRN_length = (*(&A_VINDEX(GCBATRN_table,NCBATRN_index))).upb)>0);
}
if ( WCBATRN )
{ 
SCBATRN_list = (*(&A_VINDEX(GCBATRN_table,NCBATRN_index)));
 /* line 212: */
KCBATRN_i = 1;
 /* line 213: */
for ( ;; )
{ 
 /* line 214: */
 /* line 215: */
XCBATRN = (KCBATRN_i<=MCBATRN_length);
if ( XCBATRN )
{ /* line 216: */
if ( (VCBATRN_upb==(*(&((RCBATRN_symbol = (&A_VINDEX(SCBATRN_list,KCBATRN_i)))->Length)))) )
{ 
TCBATRN_sym = (*(&(RCBATRN_symbol->Symbol)));
 /* line 217: */
LCBATRN_j = 1;
 /* line 218: */
for ( ;; )
{ 
YCBATRN = (LCBATRN_j<=VCBATRN_upb);
if ( YCBATRN )
{YCBATRN = ((*(&A_VINDEX(Word,LCBATRN_j)))==(*(&A_VINDEX(TCBATRN_sym,LCBATRN_j))));
}
if ( !(YCBATRN) ) break;
LCBATRN_j+=1;
}
 /* line 219: */
 /* line 220: */
ZCBATRN = (LCBATRN_j!=(VCBATRN_upb+1));
} 
else
{ 
 /* line 221: */
 /* line 222: */
ZCBATRN = A68_TRUE;
} 
XCBATRN = ZCBATRN;
}
if ( !(XCBATRN) ) break;
KCBATRN_i+=1;
}
 /* line 223: */
if ( (KCBATRN_i<=MCBATRN_length) )
{ 
 /* line 224: */
UCBATRN_ans = (*(&((&A_VINDEX(SCBATRN_list,KCBATRN_i))->Value)));
} 
} 
 /* line 225: */
 /* line 226: */
ADBATRN = UCBATRN_ans;
} 
A_PROC_EXIT(lookup);
return( ADBATRN );
} 
#undef NL

A68_VOID  BDBATRN_makelookup(A68_182  *ReturnedValue)
{ 
A68_170  CDBATRN;  /* avoid structure result */
A68_182  DDBATRN;  /* clause result */
A68_182  EDBATRN;  /* procedure value */
A_PROC_ENTRY(makelookup);
{ 
VRAATRN_makehash(  &CDBATRN );
GCBATRN_table = CDBATRN;
 /* line 232: */
 /* line 233: */
 /* line 235: */
EDBATRN.fn.fn_global = JCBATRN_lookup;
EDBATRN.nonlocals = A68_NIL;
DDBATRN = EDBATRN;
} 
A_PROC_EXIT(makelookup);
*ReturnedValue = (DDBATRN);
return;
} 
#undef NL
 /* line 1: */
 /* line 4: */
void GMAATRN(void)   /* initialise DECS charset */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/charset.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
PCAAOST();   /* USE osinterface */
JSCAOST();   /* USE basics */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/transform/assoc/./a68files/charset.a68";
A_config.translation_time = "Tue Apr  4 09:58:25 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "FMAATRN (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 09:58:25 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS charset);
UEAALIB_a68config(LGAALIB_configinfo, KMAATRN);
 /* line 95: */
 /* line 96: */
 /* line 98: */
 /* line 100: */
 /* line 101: */
 /* line 102: */
 /* line 144: */
 /* line 146: */
 /* line 147: */
 /* line 148: */
 /* line 200: */
 /* line 202: */
 /* line 229: */
 /* line 230: */
 /* line 231: */
 /* line 237: */
A_PROC_EXIT(DECS charset);
} 
#undef NL
/* end of translation of ./a68files/charset.a68 */
