
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
/* UNAME:WWBBSIM */
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
struct A68t159{
A68_INT  Svoid;
A_PAD_INT(PAD_34)
};
typedef struct A68t159  A68_159 ;    /* STRUCT(INT)  */
struct A68t160{
A68_INT  Snull;
A_PAD_INT(PAD_35)
};
typedef struct A68t160  A68_160 ;    /* STRUCT(INT)  */
struct A68t161{
A68_VC  Id;
A68_INT  Lwb;
A_PAD_INT(PAD_36)
A68_INT  Upb;
A_PAD_INT(PAD_37)
};
typedef struct A68t161  A68_161 ;    /* STRUCT(REF MODE26,INT,INT)  */
struct A68t162{
A68_VC  Id;
A68_VC  Char;
};
typedef struct A68t162  A68_162 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t163{
A68_INT  No;
A_PAD_INT(PAD_38)
struct A68t162  T;
};
typedef struct A68t163  A68_163 ;    /* STRUCT(INT,MODE162)  */
struct A68t165 { A68_INT mode; union {
struct A68t164 * mode1;
struct A68t161 * mode2;
struct A68t162 * mode3;
struct A68t166 * mode4;
struct A68t163 * mode5;
struct A68t167 * mode6;
struct A68t168 * mode7;
struct A68t159  mode8;
struct A68t160  mode9;
} data; };
typedef struct A68t165  A68_165 ;    /* UNION(REF MODE164,REF MODE161,REF MODE162,REF MODE166,REF MODE163,REF MODE167,REF MODE168,MODE159,MODE160)  */
struct A68t164{
A68_VC  Id;
struct A68t165  T;
struct A68t164 * Rest;
};
typedef struct A68t164  A68_164 ;    /* STRUCT(REF MODE26,MODE165,REF MODE164)  */
struct A68t166{
A68_INT  No;
A_PAD_INT(PAD_39)
struct A68t165  Type;
};
typedef struct A68t166  A68_166 ;    /* STRUCT(INT,MODE165)  */
struct A68t167{
struct A68t165  From;
struct A68t165  To;
};
typedef struct A68t167  A68_167 ;    /* STRUCT(MODE165,MODE165)  */
struct A68t168{
struct A68t165  T;
struct A68t168 * Rest;
};
typedef struct A68t168  A68_168 ;    /* STRUCT(MODE165,REF MODE168)  */
struct A68t169 { A68_INT mode; union {
struct A68t164 * mode1;
struct A68t161 * mode2;
struct A68t162 * mode3;
} data; };
typedef struct A68t169  A68_169 ;    /* UNION(REF MODE164,REF MODE161,REF MODE162)  */
struct A68t170{
A68_INT  Svvoid;
A_PAD_INT(PAD_40)
};
typedef struct A68t170  A68_170 ;    /* STRUCT(INT)  */
struct A68t171{
A68_INT  Svnull;
A_PAD_INT(PAD_41)
};
typedef struct A68t171  A68_171 ;    /* STRUCT(INT)  */
struct A68t172{
struct A68t165  Type;
};
typedef struct A68t172  A68_172 ;    /* STRUCT(MODE165)  */
struct A68t173{
struct A68t161 * Type;
A68_INT  Value;
A_PAD_INT(PAD_42)
};
typedef struct A68t173  A68_173 ;    /* STRUCT(REF MODE161,INT)  */
struct A68t174{
struct A68t162 * Type;
A68_CHAR  Value;
A_PAD_CHAR(PAD_43)
};
typedef struct A68t174  A68_174 ;    /* STRUCT(REF MODE162,CHAR)  */
struct A68t175{
struct A68t163 * Type;
A68_VC  Value;
};
typedef struct A68t175  A68_175 ;    /* STRUCT(REF MODE163,REF MODE26)  */
struct A68t177 { A68_INT mode; union {
struct A68t172 * mode1;
struct A68t173 * mode2;
struct A68t174 * mode3;
struct A68t175 * mode4;
struct A68t176 * mode5;
struct A68t178 * mode6;
struct A68t179 * mode7;
struct A68t170  mode8;
struct A68t171  mode9;
} data; };
typedef struct A68t177  A68_177 ;    /* UNION(REF MODE172,REF MODE173,REF MODE174,REF MODE175,REF MODE176,REF MODE178,REF MODE179,MODE170,MODE171)  */
struct A68t176{
struct A68t164 * Type;
A68_INT  Tag;
A_PAD_INT(PAD_44)
struct A68t177  Assoc;
};
typedef struct A68t176  A68_176 ;    /* STRUCT(REF MODE164,INT,MODE177)  */
struct A68t178{
struct A68t177  Head;
struct A68t178 * Tail;
};
typedef struct A68t178  A68_178 ;    /* STRUCT(MODE177,REF MODE178)  */
struct A68t179{
struct A68t177  From;
struct A68t177  To;
};
typedef struct A68t179  A68_179 ;    /* STRUCT(MODE177,MODE177)  */
struct A68t180{
A68_INT  Instoffset;
A_PAD_INT(PAD_45)
A68_INT  Offset;
A_PAD_INT(PAD_46)
A68_INT  Size;
A_PAD_INT(PAD_47)
};
typedef struct A68t180  A68_180 ;    /* STRUCT(INT,INT,INT)  */
A_VECTOR(struct A68t180 ,A68t182);
typedef struct A68t182  A68_182 ;    /* VECTOR [] MODE180 */
struct A68t181{
struct A68t165  Type;
struct A68t182  Blocks;
};
typedef struct A68t181  A68_181 ;    /* STRUCT(MODE165,REF MODE182)  */
struct A68t183{
struct A68t181  Firstcell;
A68_INT  Lwb;
A_PAD_INT(PAD_48)
A68_INT  Ramsize;
A_PAD_INT(PAD_49)
A68_INT  Step;
A_PAD_INT(PAD_50)
};
typedef struct A68t183  A68_183 ;    /* STRUCT(MODE181,INT,INT,INT)  */
struct A68t184{
A68_VC  Uname;
A68_VC  Lname;
A68_INT  Node;
A_PAD_INT(PAD_51)
};
typedef struct A68t184  A68_184 ;    /* STRUCT(REF MODE26,REF MODE26,INT)  */
A_VECTOR(struct A68t184 ,A68t186);
typedef struct A68t186  A68_186 ;    /* VECTOR [] MODE184 */
struct A68t185{
struct A68t183 * Ram;
struct A68t181  Outputs;
A68_INT  Noinputs;
A_PAD_INT(PAD_52)
struct A68t186  Body;
};
typedef struct A68t185  A68_185 ;    /* STRUCT(REF MODE183,MODE181,INT,REF MODE186)  */
struct A68t187{
A68_INT  Fn;
A_PAD_INT(PAD_53)
A68_INT  Instance;
A_PAD_INT(PAD_54)
};
typedef struct A68t187  A68_187 ;    /* STRUCT(INT,INT)  */
struct A68t188{
struct A68t181 * Wire;
A68_INT  Instance;
A_PAD_INT(PAD_55)
};
typedef struct A68t188  A68_188 ;    /* STRUCT(REF MODE181,INT)  */
struct A68t189 { A68_INT mode; union {
struct A68t187  mode1;
struct A68t188  mode2;
} data; };
typedef struct A68t189  A68_189 ;    /* UNION(MODE187,MODE188)  */
struct A68t190 { A68_INT mode; union {
struct A68t187  mode1;
struct A68t181  mode2;
} data; };
typedef struct A68t190  A68_190 ;    /* UNION(MODE187,MODE181)  */
struct A68t191{
struct A68t189  Node;
A68_INT  Circuit;
A_PAD_INT(PAD_56)
A68_INT  Base;
A_PAD_INT(PAD_57)
};
typedef struct A68t191  A68_191 ;    /* STRUCT(MODE189,INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t192,(struct A68t177 ,struct A68t165 *),(struct A68t177 ,struct A68t165 *,void *));
typedef struct A68t192  A68_192 ;    /* PROC(MODE177) MODE165 */

A_PROCEDURE(A68_BOOL ,A68t193,(struct A68t165 ,struct A68t165 ),(struct A68t165 ,struct A68t165 ,void *));
typedef struct A68t193  A68_193 ;    /* PROC(MODE165,MODE165) BOOL */

A_PROCEDURE(A68_BOOL ,A68t194,(struct A68t177 ,struct A68t177 ),(struct A68t177 ,struct A68t177 ,void *));
typedef struct A68t194  A68_194 ;    /* PROC(MODE177,MODE177) BOOL */

A_PROCEDURE(A68_BOOL ,A68t195,(struct A68t181 ,struct A68t181 ),(struct A68t181 ,struct A68t181 ,void *));
typedef struct A68t195  A68_195 ;    /* PROC(MODE181,MODE181) BOOL */

A_PROCEDURE(A68_BOOL ,A68t196,(struct A68t187 ,struct A68t187 ),(struct A68t187 ,struct A68t187 ,void *));
typedef struct A68t196  A68_196 ;    /* PROC(MODE187,MODE187) BOOL */

A_PROCEDURE(A68_BOOL ,A68t197,(struct A68t188 ,struct A68t188 ),(struct A68t188 ,struct A68t188 ,void *));
typedef struct A68t197  A68_197 ;    /* PROC(MODE188,MODE188) BOOL */

A_PROCEDURE(A68_BOOL ,A68t198,(struct A68t189 ,struct A68t189 ),(struct A68t189 ,struct A68t189 ,void *));
typedef struct A68t198  A68_198 ;    /* PROC(MODE189,MODE189) BOOL */

A_PROCEDURE(A68_BOOL ,A68t199,(struct A68t191 ,struct A68t191 ),(struct A68t191 ,struct A68t191 ,void *));
typedef struct A68t199  A68_199 ;    /* PROC(MODE191,MODE191) BOOL */

A_PROCEDURE(struct A68t168 *,A68t200,(struct A68t168 *,struct A68t168 *),(struct A68t168 *,struct A68t168 *,void *));
typedef struct A68t200  A68_200 ;    /* PROC(REF MODE168,REF MODE168) REF MODE168 */

A_PROCEDURE(A68_VOID ,A68t201,(struct A68t182 ,struct A68t182 ,struct A68t182 *),(struct A68t182 ,struct A68t182 ,struct A68t182 *,void *));
typedef struct A68t201  A68_201 ;    /* PROC(REF MODE182,REF MODE182) REF MODE182 */

A_PROCEDURE(A68_VOID ,A68t202,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t202  A68_202 ;    /* PROC(INT,REF MODE26) VOID */

A_PROCEDURE(A68_INT ,A68t203,(A68_VC ),(A68_VC ,void *));
typedef struct A68t203  A68_203 ;    /* PROC(REF MODE26) INT */

A_PROCEDURE(A68_INT ,A68t204,(struct A68t165 ),(struct A68t165 ,void *));
typedef struct A68t204  A68_204 ;    /* PROC(MODE165) INT */

A_PROCEDURE(struct A68t168 *,A68t205,(struct A68t165 ),(struct A68t165 ,void *));
typedef struct A68t205  A68_205 ;    /* PROC(MODE165) REF MODE168 */

A_PROCEDURE(struct A68t168 *,A68t206,(struct A68t165 ,A68_INT ,A68_INT ),(struct A68t165 ,A68_INT ,A68_INT ,void *));
typedef struct A68t206  A68_206 ;    /* PROC(MODE165,INT,INT) REF MODE168 */

A_PROCEDURE(A68_VOID ,A68t207,(struct A68t181 ,A68_INT ,A68_INT ,struct A68t181 *),(struct A68t181 ,A68_INT ,A68_INT ,struct A68t181 *,void *));
typedef struct A68t207  A68_207 ;    /* PROC(MODE181,INT,INT) MODE181 */

A_PROCEDURE(A68_VOID ,A68t208,(struct A68t183 *,A68_INT ,A68_INT ,struct A68t181 *),(struct A68t183 *,A68_INT ,A68_INT ,struct A68t181 *,void *));
typedef struct A68t208  A68_208 ;    /* PROC(REF MODE183,INT,INT) MODE181 */

A_PROCEDURE(A68_VC *,A68t209,(struct A68t177 ,struct A68t165 ),(struct A68t177 ,struct A68t165 ,void *));
typedef struct A68t209  A68_209 ;    /* PROC(MODE177,MODE165) REF REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t210,(A68_VC ,struct A68t165 ,struct A68t177 *),(A68_VC ,struct A68t165 ,struct A68t177 *,void *));
typedef struct A68t210  A68_210 ;    /* PROC(REF MODE26,MODE165) MODE177 */

A_PROCEDURE(A68_INT ,A68t211,(struct A68t165 ,struct A68t204 ),(struct A68t165 ,struct A68t204 ,void *));
typedef struct A68t211  A68_211 ;    /* PROC(MODE165,MODE204) INT */

A_PROCEDURE(A68_VOID ,A68t212,(A68_INT ,struct A68t165 *),(A68_INT ,struct A68t165 *,void *));
typedef struct A68t212  A68_212 ;    /* PROC(INT) MODE165 */
struct A68t214 ;
struct A68t215 ;

A_PROCEDURE(A68_INT ,A68t213,(A68_VC ,A68_INT ,A68_INT ,A68_INT ,struct A68t181 ,struct A68t181 ,struct A68t183 *,struct A68t214 ,struct A68t215 ),(A68_VC ,A68_INT ,A68_INT ,A68_INT ,struct A68t181 ,struct A68t181 ,struct A68t183 *,struct A68t214 ,struct A68t215 ,void *));
typedef struct A68t213  A68_213 ;    /* PROC(REF MODE26,INT,INT,INT,MODE181,MODE181,REF MODE183,MODE214,MODE215) INT */
struct A68t214{
A68_INT  Size;
A_PAD_INT(PAD_58)
A68_INT  Offset;
A_PAD_INT(PAD_59)
A68_BITS  Sort;
A_PAD_BITS(PAD_60)
};
typedef struct A68t214  A68_214 ;    /* STRUCT(INT,INT,BITS)  */
struct A68t215{
A68_INT  Workspace;
A_PAD_INT(PAD_61)
A68_INT  History;
A_PAD_INT(PAD_62)
A68_INT  Declid;
A_PAD_INT(PAD_63)
};
typedef struct A68t215  A68_215 ;    /* STRUCT(INT,INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t216,(A68_INT ,A68_VC ,A68_VC ,struct A68t190 ),(A68_INT ,A68_VC ,A68_VC ,struct A68t190 ,void *));
typedef struct A68t216  A68_216 ;    /* PROC(INT,REF MODE26,REF MODE26,MODE190) VOID */

A_PROCEDURE(A68_VOID ,A68t217,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t217  A68_217 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t218,(A68_INT ,struct A68t32 ),(A68_INT ,struct A68t32 ,void *));
typedef struct A68t218  A68_218 ;    /* PROC(INT,REF MODE32) VOID */

A_PROCEDURE(A68_VOID ,A68t219,(A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_INT ),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t219  A68_219 ;    /* PROC(INT,INT,INT,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t220,(A68_INT ,struct A68t214 ),(A68_INT ,struct A68t214 ,void *));
typedef struct A68t220  A68_220 ;    /* PROC(INT,MODE214) VOID */

A_PROCEDURE(A68_VOID ,A68t221,(A68_INT ,struct A68t182 ,struct A68t182 ),(A68_INT ,struct A68t182 ,struct A68t182 ,void *));
typedef struct A68t221  A68_221 ;    /* PROC(INT,REF MODE182,REF MODE182) VOID */

A_PROCEDURE(A68_VOID ,A68t222,(A68_VC ,A68_INT ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t222  A68_222 ;    /* PROC(REF MODE26,INT,INT) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t223,(A68_VC ,A68_INT ,A68_INT ),(A68_VC ,A68_INT ,A68_INT ,void *));
typedef struct A68t223  A68_223 ;    /* PROC(REF MODE26,INT,INT) INT */

A_PROCEDURE(A68_VOID ,A68t224,(A68_INT ,struct A68t185 *),(A68_INT ,struct A68t185 *,void *));
typedef struct A68t224  A68_224 ;    /* PROC(INT) MODE185 */

A_PROCEDURE(A68_VOID ,A68t225,(A68_INT ,struct A68t190 *),(A68_INT ,struct A68t190 *,void *));
typedef struct A68t225  A68_225 ;    /* PROC(INT) MODE190 */
struct A68t227 ;

A_PROCEDURE(A68_VOID ,A68t226,(A68_INT ,A68_INT ,struct A68t227 *),(A68_INT ,A68_INT ,struct A68t227 *,void *));
typedef struct A68t226  A68_226 ;    /* PROC(INT,INT) MODE227 */
struct A68t227{
A68_INT  Lwb;
A_PAD_INT(PAD_64)
A68_INT  Upb;
A_PAD_INT(PAD_65)
};
typedef struct A68t227  A68_227 ;    /* STRUCT(INT,INT)  */
struct A68t229 ;

A_PROCEDURE(A68_VOID ,A68t228,(A68_INT ,A68_INT ,struct A68t229 *),(A68_INT ,A68_INT ,struct A68t229 *,void *));
typedef struct A68t228  A68_228 ;    /* PROC(INT,INT) REF MODE229 */
A_VECTOR(struct A68t230 ,A68t229);
typedef struct A68t229  A68_229 ;    /* VECTOR [] MODE230 */
struct A68t230{
A68_INT  Instoffset;
A_PAD_INT(PAD_66)
A68_INT  Ipno;
A_PAD_INT(PAD_67)
};
typedef struct A68t230  A68_230 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t231,(A68_INT ,struct A68t181 *),(A68_INT ,struct A68t181 *,void *));
typedef struct A68t231  A68_231 ;    /* PROC(INT) MODE181 */

A_PROCEDURE(A68_VOID ,A68t232,(A68_INT ,struct A68t214 *),(A68_INT ,struct A68t214 *,void *));
typedef struct A68t232  A68_232 ;    /* PROC(INT) MODE214 */

A_PROCEDURE(A68_VOID ,A68t233,(A68_INT ,struct A68t215 *),(A68_INT ,struct A68t215 *,void *));
typedef struct A68t233  A68_233 ;    /* PROC(INT) MODE215 */

A_PROCEDURE(A68_VOID ,A68t234,(struct A68t185 ,struct A68t181 *),(struct A68t185 ,struct A68t181 *,void *));
typedef struct A68t234  A68_234 ;    /* PROC(MODE185) MODE181 */
struct A68t236 ;

A_PROCEDURE(A68_VOID ,A68t235,(struct A68t236 ),(struct A68t236 ,void *));
typedef struct A68t235  A68_235 ;    /* PROC(MODE236) VOID */

A_PROCEDURE(A68_BOOL ,A68t236,(A68_VC ),(A68_VC ,void *));
typedef struct A68t236  A68_236 ;    /* PROC(REF MODE26) BOOL */
struct A68t238 ;

A_PROCEDURE(A68_VOID ,A68t237,(struct A68t238 ,struct A68t36 ),(struct A68t238 ,struct A68t36 ,void *));
typedef struct A68t237  A68_237 ;    /* PROC(MODE238,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t238,(A68_VC ,struct A68t36 ),(A68_VC ,struct A68t36 ,void *));
typedef struct A68t238  A68_238 ;    /* PROC(REF MODE26,MODE36) VOID */

A_PROCEDURE(A68_INT ,A68t239,(struct A68t191 ),(struct A68t191 ,void *));
typedef struct A68t239  A68_239 ;    /* PROC(MODE191) INT */

A_PROCEDURE(A68_VOID ,A68t240,(struct A68t191 ,A68_INT ),(struct A68t191 ,A68_INT ,void *));
typedef struct A68t240  A68_240 ;    /* PROC(MODE191,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t241,(struct A68t113 *,A68_INT ,struct A68t43 ,struct A68t36 ,struct A68t189 *),(struct A68t113 *,A68_INT ,struct A68t43 ,struct A68t36 ,struct A68t189 *,void *));
typedef struct A68t241  A68_241 ;    /* PROC(REF MODE113,INT,MODE43,MODE36) MODE189 */

A_PROCEDURE(A68_VOID ,A68t242,(A68_VC ,struct A68t36 ,struct A68t189 *),(A68_VC ,struct A68t36 ,struct A68t189 *,void *));
typedef struct A68t242  A68_242 ;    /* PROC(REF MODE26,MODE36) MODE189 */

A_PROCEDURE(A68_VOID ,A68t243,(A68_INT *,A68_BOOL *,struct A68t36 ),(A68_INT *,A68_BOOL *,struct A68t36 ,void *));
typedef struct A68t243  A68_243 ;    /* PROC(REF INT,REF BOOL,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t244,(struct A68t191 ,A68_VC ),(struct A68t191 ,A68_VC ,void *));
typedef struct A68t244  A68_244 ;    /* PROC(MODE191,REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t245,(A68_INT *,A68_VC *,struct A68t238 ,struct A68t238 ,struct A68t36 ),(A68_INT *,A68_VC *,struct A68t238 ,struct A68t238 ,struct A68t36 ,void *));
typedef struct A68t245  A68_245 ;    /* PROC(REF INT,REF REF MODE26,MODE238,MODE238,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t246,(A68_INT ,A68_INT ,A68_VC ,struct A68t238 ,struct A68t238 ,struct A68t43 ,struct A68t36 ,struct A68t189 *),(A68_INT ,A68_INT ,A68_VC ,struct A68t238 ,struct A68t238 ,struct A68t43 ,struct A68t36 ,struct A68t189 *,void *));
typedef struct A68t246  A68_246 ;    /* PROC(INT,INT,REF MODE26,MODE238,MODE238,MODE43,MODE36) MODE189 */

A_PROCEDURE(A68_VOID ,A68t247,(A68_VC ,struct A68t36 ,struct A68t191 *),(A68_VC ,struct A68t36 ,struct A68t191 *,void *));
typedef struct A68t247  A68_247 ;    /* PROC(REF MODE26,MODE36) MODE191 */

A_PROCEDURE(A68_VOID ,A68t248,(struct A68t191 ),(struct A68t191 ,void *));
typedef struct A68t248  A68_248 ;    /* PROC(MODE191) VOID */

A_PROCEDURE(A68_VOID ,A68t249,(struct A68t191 ,struct A68t191 *),(struct A68t191 ,struct A68t191 *,void *));
typedef struct A68t249  A68_249 ;    /* PROC(MODE191) MODE191 */

A_PROCEDURE(A68_VOID ,A68t250,(struct A68t191 ,struct A68t191 ),(struct A68t191 ,struct A68t191 ,void *));
typedef struct A68t250  A68_250 ;    /* PROC(MODE191,MODE191) VOID */

A_PROCEDURE(A68_BOOL ,A68t251,(struct A68t191 ),(struct A68t191 ,void *));
typedef struct A68t251  A68_251 ;    /* PROC(MODE191) BOOL */

A_PROCEDURE(A68_VOID ,A68t252,(struct A68t144 ),(struct A68t144 ,void *));
typedef struct A68t252  A68_252 ;    /* PROC(MODE144) VOID */

A_PROCEDURE(A68_VOID ,A68t253,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t253  A68_253 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,53,A68t254);
typedef struct A68t254  A68_254 ;    /* STRUCT 53 CHAR */

A_PROCEDURE(A68_VOID ,A68t255,(struct A68t165 ,A68_VC *),(struct A68t165 ,A68_VC *,void *));
typedef struct A68t255  A68_255 ;    /* PROC(MODE165) REF MODE26 */
A_ISTRUCT(A68_CHAR ,5,A68t256);
typedef struct A68t256  A68_256 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,7,A68t257);
typedef struct A68t257  A68_257 ;    /* STRUCT 7 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t258);
typedef struct A68t258  A68_258 ;    /* STRUCT 3 CHAR */

A_PROCEDURE(A68_VOID ,A68t259,(struct A68t177 ,A68_VC *),(struct A68t177 ,A68_VC *,void *));
typedef struct A68t259  A68_259 ;    /* PROC(MODE177) REF MODE26 */
A_ISTRUCT(A68_CHAR ,6,A68t260);
typedef struct A68t260  A68_260 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t261);
typedef struct A68t261  A68_261 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(struct A68t52 ,3,A68t262);
typedef struct A68t262  A68_262 ;    /* STRUCT 3 MODE52 */
A_ISTRUCT(struct A68t52 ,4,A68t263);
typedef struct A68t263  A68_263 ;    /* STRUCT 4 MODE52 */
A_ISTRUCT(struct A68t52 ,2,A68t264);
typedef struct A68t264  A68_264 ;    /* STRUCT 2 MODE52 */

A_PROCEDURE(A68_VOID ,A68t265,(struct A68t183 ,A68_VC *),(struct A68t183 ,A68_VC *,void *));
typedef struct A68t265  A68_265 ;    /* PROC(MODE183) REF MODE26 */
A_ISTRUCT(struct A68t52 ,5,A68t266);
typedef struct A68t266  A68_266 ;    /* STRUCT 5 MODE52 */

A_PROCEDURE(A68_VOID ,A68t267,(struct A68t185 ,A68_VC *),(struct A68t185 ,A68_VC *,void *));
typedef struct A68t267  A68_267 ;    /* PROC(MODE185) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t268,(struct A68t187 ,A68_VC *),(struct A68t187 ,A68_VC *,void *));
typedef struct A68t268  A68_268 ;    /* PROC(MODE187) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t269,(struct A68t181 ,A68_VC *),(struct A68t181 ,A68_VC *,void *));
typedef struct A68t269  A68_269 ;    /* PROC(MODE181) REF MODE26 */
A_ISTRUCT(A68_CHAR ,24,A68t270);
typedef struct A68t270  A68_270 ;    /* STRUCT 24 CHAR */

A_PROCEDURE(A68_VOID ,A68t271,(struct A68t188 ,A68_VC *),(struct A68t188 ,A68_VC *,void *));
typedef struct A68t271  A68_271 ;    /* PROC(MODE188) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t272,(struct A68t189 ,A68_VC *),(struct A68t189 ,A68_VC *,void *));
typedef struct A68t272  A68_272 ;    /* PROC(MODE189) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t273,(struct A68t191 ,A68_VC *),(struct A68t191 ,A68_VC *,void *));
typedef struct A68t273  A68_273 ;    /* PROC(MODE191) REF MODE26 */
A_ISTRUCT(A68_CHAR ,16,A68t274);
typedef struct A68t274  A68_274 ;    /* STRUCT 16 CHAR */
A_ISTRUCT(A68_CHAR ,9,A68t275);
typedef struct A68t275  A68_275 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(struct A68t52 ,7,A68t276);
typedef struct A68t276  A68_276 ;    /* STRUCT 7 MODE52 */

A_PROCEDURE(A68_VOID ,A68t277,(struct A68t190 ,A68_VC *),(struct A68t190 ,A68_VC *,void *));
typedef struct A68t277  A68_277 ;    /* PROC(MODE190) REF MODE26 */
A_ISTRUCT(A68_CHAR ,32,A68t278);
typedef struct A68t278  A68_278 ;    /* STRUCT 32 CHAR */
A_ISTRUCT(A68_CHAR ,17,A68t279);
typedef struct A68t279  A68_279 ;    /* STRUCT 17 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t280);
typedef struct A68t280  A68_280 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(A68_CHAR ,19,A68t281);
typedef struct A68t281  A68_281 ;    /* STRUCT 19 CHAR */
A_ISTRUCT(A68_CHAR ,21,A68t282);
typedef struct A68t282  A68_282 ;    /* STRUCT 21 CHAR */
A_ISTRUCT(A68_CHAR ,14,A68t283);
typedef struct A68t283  A68_283 ;    /* STRUCT 14 CHAR */
A_ISTRUCT(struct A68t52 ,6,A68t284);
typedef struct A68t284  A68_284 ;    /* STRUCT 6 MODE52 */
A_ISTRUCT(A68_CHAR ,26,A68t285);
typedef struct A68t285  A68_285 ;    /* STRUCT 26 CHAR */
A_ISTRUCT(A68_CHAR ,28,A68t286);
typedef struct A68t286  A68_286 ;    /* STRUCT 28 CHAR */
A_ISTRUCT(A68_CHAR ,23,A68t287);
typedef struct A68t287  A68_287 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(A68_CHAR ,25,A68t288);
typedef struct A68t288  A68_288 ;    /* STRUCT 25 CHAR */
A_ISTRUCT(A68_CHAR ,20,A68t289);
typedef struct A68t289  A68_289 ;    /* STRUCT 20 CHAR */
A_ISTRUCT(A68_CHAR ,37,A68t290);
typedef struct A68t290  A68_290 ;    /* STRUCT 37 CHAR */
A_ISTRUCT(A68_CHAR ,18,A68t291);
typedef struct A68t291  A68_291 ;    /* STRUCT 18 CHAR */
A_ISTRUCT(A68_CHAR ,30,A68t292);
typedef struct A68t292  A68_292 ;    /* STRUCT 30 CHAR */
A_ISTRUCT(A68_CHAR ,13,A68t293);
typedef struct A68t293  A68_293 ;    /* STRUCT 13 CHAR */
A_ISTRUCT(struct A68t52 ,8,A68t294);
typedef struct A68t294  A68_294 ;    /* STRUCT 8 MODE52 */
A_ISTRUCT(A68_CHAR ,11,A68t295);
typedef struct A68t295  A68_295 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t296);
typedef struct A68t296  A68_296 ;    /* STRUCT 8 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from kerti --- */
extern A68_INT  MSBBSIM_rawmakeflagfanouts(struct A68t191 );
extern A68_VOID  YSBBSIM_rawremoveflagfanouts(struct A68t191 ,A68_INT );
extern A68_VOID  TUBBSIM_rawinitialisekernel(struct A68t113 *,A68_INT ,struct A68t43 ,struct A68t36 ,A68_189 *);
extern A68_VOID  JSABSIM_rawselectfunction(A68_VC ,struct A68t36 ,A68_189 *);
extern A68_VOID  VSABSIM_rawsimulate(A68_INT *,A68_BOOL *,struct A68t36 );
extern A68_VOID  BJBBSIM_rawpeeksignalvalue(struct A68t191 ,A68_VC );
extern A68_VOID  ZJBBSIM_rawpokesignalvalue(struct A68t191 ,A68_VC );
extern A68_VOID  TVBBSIM_rawsavestate(A68_INT *,A68_VC *,struct A68t238 ,struct A68t238 ,struct A68t36 );
extern A68_VOID  CWBBSIM_rawrestorestate(A68_INT ,A68_INT ,A68_VC ,struct A68t238 ,struct A68t238 ,struct A68t43 ,struct A68t36 ,A68_189 *);
extern A68_VOID  GTBBSIM_rawclearinterrupts(void);
extern A68_VOID  NUBBSIM_rawterminatekernel(struct A68t36 );
extern A68_VOID  JHBBSIM_rawinitialiseprobeinstance(A68_VC ,struct A68t36 ,A68_191 *);
extern A68_VOID  ZHBBSIM_rawreinitialiseprobeinstance(struct A68t191 );
extern A68_VOID  OFBBSIM_rawdestroyprobeinstance(A68_INT ,A68_INT );
extern A68_VOID  OABBSIM_rawprobeinputnode(struct A68t191 ,A68_191 *);
extern A68_VOID  NCBBSIM_rawreconnectprobeinstance(struct A68t191 ,struct A68t191 );
extern A68_BOOL  JDBBSIM_rawprobetypematchesline(struct A68t191 ,struct A68t191 );
extern A68_VOID  HIBBSIM_rawstopprobeinstances(struct A68t32 );
extern A68_VOID  PCBBSIM_rawlistprobesconnectedto(A68_INT ,A68_32 *);
extern A68_INT  ZOBBSIM_rawfreezeinstance(struct A68t191 );
extern A68_BOOL  SNBBSIM_rawunfreezeinstance(struct A68t191 );
extern A68_VOID  IRBBSIM_rawpokesignalvalueandfanout(struct A68t191 ,A68_VC );
/* --- End of imports from kerti --- */


/* --- Imports from kesymbols --- */
extern A68_VOID  GSCASIM_rawlookupfunction(A68_INT ,A68_185 *);
extern A68_VOID  ITCASIM_rawlookuprnode(A68_INT ,A68_190 *);
extern A68_VOID  EZCASIM_rawinputs(struct A68t185 ,A68_181 *);
extern A68_VOID  YZCASIM_rawlistsimulatablefunctions(struct A68t236 );
/* --- End of imports from kesymbols --- */


/* --- Imports from kesignals --- */
extern A68_INT  DCOASIM_rawsignalwidth(struct A68t165 );
extern A68_168 * KCOASIM_rawtrimsignal(struct A68t165 ,A68_INT ,A68_INT );
extern A68_VOID  VCOASIM_rawtrimwire(struct A68t181 ,A68_INT ,A68_INT ,A68_181 *);
extern A68_VOID  FEOASIM_rawtrimram(struct A68t183 *,A68_INT ,A68_INT ,A68_181 *);
extern A68_VC * NKOASIM_rawencode(struct A68t177 ,struct A68t165 );
extern A68_VOID  KROASIM_rawdecode(A68_VC ,struct A68t165 ,A68_177 *);
/* --- End of imports from kesignals --- */


/* --- Imports from kebasics --- */
#define OSAASIM_diagnoseinterface 0X1U
#define PSAASIM_diagnoseencoding 0X2U
extern A68_183 * STAASIM_nilsram;
/* --- End of imports from kebasics --- */


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
extern A68_VOID  BTCAOST_makeid(A68_CHAR ,A68_VC *);
/* --- End of imports from basics --- */


/* --- Imports from putstrings --- */
extern A68_VOID  FCAAOSI_intchars(A68_INT ,A68_VC *);
extern A68_VOID  UJBAOSL_oneline(struct A68t85 ,A68_VC *);
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void YMABSIM(void);   /* kerti */
extern void TCCASIM(void);   /* kesymbols */
extern void NYNASIM(void);   /* kesignals */
extern void JSAASIM(void);   /* kebasics */
extern void PCAAOST(void);   /* osinterface */
extern void JSCAOST(void);   /* basics */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_254   AXBBSIM = {"$Id: kernel.a68,v 34.2 1995/03/29 13:04:52 ella Exp $"}; 
A_GISVEC(A68_VC ,BXBBSIM,AXBBSIM,53)
static A68_43  EXBBSIM_instrument;
static A68_BOOL  GXBBSIM_showinterface;
static A68_BOOL  HXBBSIM_showencoding;
static A68_256   LXBBSIM = {"SPRIM"}; 
A_GISVEC(A68_VC ,NXBBSIM,LXBBSIM,5)
static A68_116   PXBBSIM = {"SROW"}; 
A_GISVEC(A68_VC ,QXBBSIM,PXBBSIM,4)
static A68_257   SXBBSIM = {"SSTRING"}; 
A_GISVEC(A68_VC ,TXBBSIM,SXBBSIM,7)
static A68_258   VXBBSIM = {"SFN"}; 
A_GISVEC(A68_VC ,WXBBSIM,VXBBSIM,3)
static A68_258   YXBBSIM = {"SST"}; 
A_GISVEC(A68_VC ,ZXBBSIM,YXBBSIM,3)
static A68_256   BYBBSIM = {"SNULL"}; 
A_GISVEC(A68_VC ,CYBBSIM,BYBBSIM,5)
static A68_260   HYBBSIM = {"SVNULL"}; 
A_GISVEC(A68_VC ,JYBBSIM,HYBBSIM,6)
static A68_261   NYBBSIM = {"?("}; 
A_GISVEC(A68_VC ,OYBBSIM,NYBBSIM,2)
static A68_258   LBCBSIM = {" + "}; 
A_GISVEC(A68_VC ,MBCBSIM,LBCBSIM,3)
static A68_258   RBCBSIM = {" * "}; 
A_GISVEC(A68_VC ,SBCBSIM,RBCBSIM,3)
static A68_260   GCCBSIM = {"SRAM: "}; 
A_GISVEC(A68_VC ,HCCBSIM,GCCBSIM,6)
static A68_116   RCCBSIM = {"FN ("}; 
A_GISVEC(A68_VC ,SCCBSIM,RCCBSIM,4)
static A68_270   HDCBSIM = {", size: (not calculated)"}; 
A_GISVEC(A68_VC ,IDCBSIM,HDCBSIM,24)
static A68_260   RDCBSIM = {"WIRE ("}; 
A_GISVEC(A68_VC ,SDCBSIM,RDCBSIM,6)
static A68_256   HECBSIM = {"BOX ("}; 
A_GISVEC(A68_VC ,IECBSIM,HECBSIM,5)
static A68_260   UECBSIM = {"LINE ("}; 
A_GISVEC(A68_VC ,VECBSIM,UECBSIM,6)
static A68_274   HFCBSIM = {"MNODE (CIRCUIT ("}; 
A_GISVEC(A68_VC ,IFCBSIM,HFCBSIM,16)
static A68_275   NFCBSIM = {"), BASE ("}; 
A_GISVEC(A68_VC ,OFCBSIM,NFCBSIM,9)
static A68_261   TFCBSIM = {"),"}; 
A_GISVEC(A68_VC ,UFCBSIM,TFCBSIM,2)
static A68_256   JGCBSIM = {"BOX ("}; 
A_GISVEC(A68_VC ,KGCBSIM,JGCBSIM,5)
static A68_260   WGCBSIM = {"WIRE ("}; 
A_GISVEC(A68_VC ,XGCBSIM,WGCBSIM,6)
static A68_278   VHCBSIM = {"initialise kernel (REF seeds) = "}; 
A_GISVEC(A68_VC ,WHCBSIM,VHCBSIM,32)
static A68_279   KICBSIM = {"select function ("}; 
A_GISVEC(A68_VC ,LICBSIM,KICBSIM,17)
static A68_116   PICBSIM = {") = "}; 
A_GISVEC(A68_VC ,QICBSIM,PICBSIM,4)
static A68_280   EJCBSIM = {"simulate ("}; 
A_GISVEC(A68_VC ,FJCBSIM,EJCBSIM,10)
static A68_261   JJCBSIM = {"->"}; 
A_GISVEC(A68_VC ,KJCBSIM,JJCBSIM,2)
static A68_116   OJCBSIM = {", ->"}; 
A_GISVEC(A68_VC ,PJCBSIM,OJCBSIM,4)
static A68_261   TJCBSIM = {") "}; 
A_GISVEC(A68_VC ,UJCBSIM,TJCBSIM,2)
static A68_281   DKCBSIM = {"peek signal value ("}; 
A_GISVEC(A68_VC ,EKCBSIM,DKCBSIM,19)
static A68_116   JKCBSIM = {") = "}; 
A_GISVEC(A68_VC ,KKCBSIM,JKCBSIM,4)
static A68_281   VKCBSIM = {"poke signal value ("}; 
A_GISVEC(A68_VC ,WKCBSIM,VKCBSIM,19)
static A68_261   BLCBSIM = {", "}; 
A_GISVEC(A68_VC ,CLCBSIM,BLCBSIM,2)
static A68_281   PLCBSIM = {"make flag fanouts ("}; 
A_GISVEC(A68_VC ,QLCBSIM,PLCBSIM,19)
static A68_116   VLCBSIM = {") = "}; 
A_GISVEC(A68_VC ,WLCBSIM,VLCBSIM,4)
static A68_282   IMCBSIM = {"remove flag fanouts ("}; 
A_GISVEC(A68_VC ,JMCBSIM,IMCBSIM,21)
static A68_261   OMCBSIM = {", "}; 
A_GISVEC(A68_VC ,PMCBSIM,OMCBSIM,2)
static A68_283   FNCBSIM = {"save state (->"}; 
A_GISVEC(A68_VC ,GNCBSIM,FNCBSIM,14)
static A68_116   KNCBSIM = {", ->"}; 
A_GISVEC(A68_VC ,LNCBSIM,KNCBSIM,4)
static A68_283   GOCBSIM = {"restore state("}; 
A_GISVEC(A68_VC ,HOCBSIM,GOCBSIM,14)
static A68_261   LOCBSIM = {", "}; 
A_GISVEC(A68_VC ,MOCBSIM,LOCBSIM,2)
static A68_258   QOCBSIM = {") ="}; 
A_GISVEC(A68_VC ,ROCBSIM,QOCBSIM,3)
static A68_274   APCBSIM = {"clear interrupts"}; 
A_GISVEC(A68_VC ,BPCBSIM,APCBSIM,16)
static A68_274   FPCBSIM = {"terminate kernel"}; 
A_GISVEC(A68_VC ,GPCBSIM,FPCBSIM,16)
static A68_285   OPCBSIM = {"initialise probe instance("}; 
A_GISVEC(A68_VC ,PPCBSIM,OPCBSIM,26)
static A68_258   TPCBSIM = {") ="}; 
A_GISVEC(A68_VC ,UPCBSIM,TPCBSIM,3)
static A68_286   FQCBSIM = {"reinitialise probe instance("}; 
A_GISVEC(A68_VC ,GQCBSIM,FQCBSIM,28)
static A68_287   TQCBSIM = {"destroy probe instance("}; 
A_GISVEC(A68_VC ,UQCBSIM,TQCBSIM,23)
static A68_288   JRCBSIM = {"reconnect probe instance("}; 
A_GISVEC(A68_VC ,KRCBSIM,JRCBSIM,25)
static A68_279   CSCBSIM = {"probe input node("}; 
A_GISVEC(A68_VC ,DSCBSIM,CSCBSIM,17)
static A68_258   ISCBSIM = {") ="}; 
A_GISVEC(A68_VC ,JSCBSIM,ISCBSIM,3)
static A68_288   WSCBSIM = {"list probes connected to("}; 
A_GISVEC(A68_VC ,XSCBSIM,WSCBSIM,25)
static A68_289   BTCBSIM = {") = (not calculated)"}; 
A_GISVEC(A68_VC ,CTCBSIM,BTCBSIM,20)
static A68_290   KTCBSIM = {"stop probe instances( not calculated)"}; 
A_GISVEC(A68_VC ,LTCBSIM,KTCBSIM,37)
static A68_287   VTCBSIM = {"probe typematches line("}; 
A_GISVEC(A68_VC ,WTCBSIM,VTCBSIM,23)
static A68_116   FUCBSIM = {") = "}; 
A_GISVEC(A68_VC ,GUCBSIM,FUCBSIM,4)
static A68_274   RUCBSIM = {"freeze instance("}; 
A_GISVEC(A68_VC ,SUCBSIM,RUCBSIM,16)
static A68_291   GVCBSIM = {"unfreeze instance("}; 
A_GISVEC(A68_VC ,HVCBSIM,GVCBSIM,18)
static A68_292   VVCBSIM = {"poke signal value and fanout ("}; 
A_GISVEC(A68_VC ,WVCBSIM,VVCBSIM,30)
static A68_261   BWCBSIM = {", "}; 
A_GISVEC(A68_VC ,CWCBSIM,BWCBSIM,2)
static A68_279   QWCBSIM = {"lookup function ("}; 
A_GISVEC(A68_VC ,RWCBSIM,QWCBSIM,17)
static A68_116   VWCBSIM = {") = "}; 
A_GISVEC(A68_VC ,WWCBSIM,VWCBSIM,4)
static A68_283   JXCBSIM = {"lookup rnode ("}; 
A_GISVEC(A68_VC ,KXCBSIM,JXCBSIM,14)
static A68_116   OXCBSIM = {") = "}; 
A_GISVEC(A68_VC ,PXCBSIM,OXCBSIM,4)
static A68_292   OYCBSIM = {"list simulatable functions (p)"}; 
A_GISVEC(A68_VC ,PYCBSIM,OYCBSIM,30)
static A68_283   YYCBSIM = {"signal width ("}; 
A_GISVEC(A68_VC ,ZYCBSIM,YYCBSIM,14)
static A68_116   EZCBSIM = {") = "}; 
A_GISVEC(A68_VC ,FZCBSIM,EZCBSIM,4)
static A68_293   SZCBSIM = {"trim signal ("}; 
A_GISVEC(A68_VC ,TZCBSIM,SZCBSIM,13)
static A68_261   YZCBSIM = {", "}; 
A_GISVEC(A68_VC ,ZZCBSIM,YZCBSIM,2)
static A68_261   DADBSIM = {", "}; 
A_GISVEC(A68_VC ,EADBSIM,DADBSIM,2)
static A68_116   IADBSIM = {") = "}; 
A_GISVEC(A68_VC ,JADBSIM,IADBSIM,4)
static A68_295   ZADBSIM = {"trim wire ("}; 
A_GISVEC(A68_VC ,ABDBSIM,ZADBSIM,11)
static A68_261   FBDBSIM = {", "}; 
A_GISVEC(A68_VC ,GBDBSIM,FBDBSIM,2)
static A68_261   KBDBSIM = {", "}; 
A_GISVEC(A68_VC ,LBDBSIM,KBDBSIM,2)
static A68_116   PBDBSIM = {") = "}; 
A_GISVEC(A68_VC ,QBDBSIM,PBDBSIM,4)
static A68_280   FCDBSIM = {"trim ram ("}; 
A_GISVEC(A68_VC ,GCDBSIM,FCDBSIM,10)
static A68_261   LCDBSIM = {", "}; 
A_GISVEC(A68_VC ,MCDBSIM,LCDBSIM,2)
static A68_261   QCDBSIM = {", "}; 
A_GISVEC(A68_VC ,RCDBSIM,QCDBSIM,2)
static A68_116   VCDBSIM = {") = "}; 
A_GISVEC(A68_VC ,WCDBSIM,VCDBSIM,4)
static A68_296   JDDBSIM = {"inputs ("}; 
A_GISVEC(A68_VC ,KDDBSIM,JDDBSIM,8)
static A68_116   PDDBSIM = {") = "}; 
A_GISVEC(A68_VC ,QDDBSIM,PDDBSIM,4)
static A68_296   DEDBSIM = {"encode ("}; 
A_GISVEC(A68_VC ,EEDBSIM,DEDBSIM,8)
static A68_261   JEDBSIM = {", "}; 
A_GISVEC(A68_VC ,KEDBSIM,JEDBSIM,2)
static A68_116   PEDBSIM = {") = "}; 
A_GISVEC(A68_VC ,QEDBSIM,PEDBSIM,4)
static A68_296   EFDBSIM = {"decode ("}; 
A_GISVEC(A68_VC ,FFDBSIM,EFDBSIM,8)
static A68_261   KFDBSIM = {", "}; 
A_GISVEC(A68_VC ,LFDBSIM,KFDBSIM,2)
static A68_116   QFDBSIM = {") = "}; 
A_GISVEC(A68_VC ,RFDBSIM,QFDBSIM,4)
typedef struct   /* env of non-global proc */
{
A68_236  P;
} DYCBSIM_pp;

A_STATIC A68_VOID  DXBBSIM_anonymous(A68_VC  Msg);

A_STATIC A68_VOID  JXBBSIM_instrtype(A68_165  Type, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  FYBBSIM_instrvalue(A68_177  Value, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  HBCBSIM_instrram(A68_183  Ram, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  BCCBSIM_instrfn(A68_185  Fn, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  PCCBSIM_instrbox(A68_187  Box, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  DDCBSIM_instrwire(A68_181  Wire, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  PDCBSIM_instrline(A68_188  Line, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  DECBSIM_instrnode(A68_189  Node, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  FFCBSIM_instrmnode(A68_191  Mnode, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  FGCBSIM_instrrnode(A68_190  Rnode, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  HHCBSIM_instrword(A68_VC  Word, A68_VC  *ReturnedValue);

A68_VOID  PHCBSIM_initialisekernel(A68_113 * Simfile, A68_INT  Diagnosticlevel, A68_43  Instr, A68_36  Flt, A68_189  *ReturnedValue);

A68_VOID  GICBSIM_selectfunction(A68_VC  Function, A68_36  Flt, A68_189  *ReturnedValue);

A68_VOID  BJCBSIM_simulate(A68_INT * Increment, A68_BOOL * Stable, A68_36  Flt);

A68_VOID  BKCBSIM_peeksignalvalue(A68_191  Mloc, A68_VC  Answer);

A68_VOID  TKCBSIM_pokesignalvalue(A68_191  Mloc, A68_VC  Val);

A68_INT  MLCBSIM_makeflagfanouts(A68_191  Loc);

A68_VOID  GMCBSIM_removeflagfanouts(A68_191  Loc, A68_INT  Flagaddress);

A68_VOID  DNCBSIM_savestate(A68_INT * Time, A68_VC * Function, A68_238  Ferry1, A68_238  Ferry2, A68_36  Flt);

A68_VOID  AOCBSIM_restorestate(A68_INT  Diagnosticlevel, A68_INT  Time, A68_VC  Function, A68_238  Ferry1, A68_238  Ferry2, A68_43  Instr, A68_36  Flt, A68_189  *ReturnedValue);

A68_VOID  ZOCBSIM_clearinterrupts(void);

A68_VOID  EPCBSIM_terminatekernel(A68_36  Flt);

A68_VOID  KPCBSIM_initialiseprobeinstance(A68_VC  Function, A68_36  Flt, A68_191  *ReturnedValue);

A68_VOID  DQCBSIM_reinitialiseprobeinstance(A68_191  Function);

A68_VOID  RQCBSIM_destroyprobeinstance(A68_INT  Circuit, A68_INT  Base);

A68_VOID  HRCBSIM_reconnectprobeinstance(A68_191  Function, A68_191  Line);

A68_VOID  YRCBSIM_probeinputnode(A68_191  Mprobe, A68_191  *ReturnedValue);

A68_VOID  SSCBSIM_listprobesconnectedto(A68_INT  Base, A68_32  *ReturnedValue);

A68_VOID  JTCBSIM_stopprobeinstances(A68_32  Bases);

A68_BOOL  STCBSIM_probetypematchesline(A68_191  Function, A68_191  Line);

A68_INT  OUCBSIM_freezeinstance(A68_191  Function);

A68_BOOL  DVCBSIM_unfreezeinstance(A68_191  Function);

A68_VOID  TVCBSIM_pokesignalvalueandfanout(A68_191  Function, A68_VC  Val);

A68_VOID  MWCBSIM_lookupfunction(A68_INT  Fn, A68_185  *ReturnedValue);

A68_VOID  FXCBSIM_lookuprnode(A68_INT  Rnode, A68_190  *ReturnedValue);

A68_VOID  YXCBSIM_listsimulatablefunctions(A68_236  P);

A_STATIC A68_BOOL  CYCBSIM_pp(A68_VC  Fn, void *NonLocals);

A68_INT  VYCBSIM_signalwidth(A68_165  T);

A68_168 * PZCBSIM_trimsignal(A68_165  T, A68_INT  Lwb, A68_INT  Upb);

A68_VOID  VADBSIM_trimwire(A68_181  T, A68_INT  Lwb, A68_INT  Upb, A68_181  *ReturnedValue);

A68_VOID  BCDBSIM_trimram(A68_183 * Ram, A68_INT  Lwb, A68_INT  Upb, A68_181  *ReturnedValue);

A68_VOID  FDDBSIM_inputs(A68_185  F, A68_181  *ReturnedValue);

A68_VC * AEDBSIM_encode(A68_177  Val, A68_165  Type);

A68_VOID  AFDBSIM_decode(A68_VC  Rep, A68_165  Type, A68_177  *ReturnedValue);

A_STATIC A68_BOOL  CYCBSIM_pp(A68_VC  Fn, void *NonLocals)
#define NL(x) (((DYCBSIM_pp *)NonLocals)->x)
{ 
A68_BOOL  EYCBSIM_ans;
A68_264  FYCBSIM;  /* collateral clause result */
A68_52  GYCBSIM;  /* OPERATORS - mode -> union mode */
A68_52  HYCBSIM;  /* OPERATORS - mode -> union mode */
A68_CHAR  IYCBSIM;  /* YIELD */
A68_52  JYCBSIM;  /* OPERATORS - mode -> union mode */
A68_CHAR  KYCBSIM;  /* YIELD */
A68_85  LYCBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  MYCBSIM;  /* avoid structure result */
A68_BOOL  NYCBSIM;  /* clause result */
A_PROC_ENTRY(pp);
 /* line 439: */
 /* line 440: */
{ 
EYCBSIM_ans = A_CALLPROC(NL(P),(Fn),(Fn,(NL(P)).nonlocals));
 /* line 441: */
FYCBSIM.data[0] = A_UNITE(GYCBSIM,mode7,7,Fn);
if ( EYCBSIM_ans )
{ 
IYCBSIM = ',' ;
FYCBSIM.data[1] = A_UNITE(HYCBSIM,mode6,6,IYCBSIM);
} 
else
{ 
KYCBSIM = '.' ;
FYCBSIM.data[1] = A_UNITE(JYCBSIM,mode6,6,KYCBSIM);
} 
UJBAOSL_oneline( A_HISVEC(LYCBSIM,FYCBSIM,2,A68_52 ), &MYCBSIM );
A_CALLPROC(EXBBSIM_instrument,(MYCBSIM),(MYCBSIM,(EXBBSIM_instrument).nonlocals));
 /* line 442: */
 /* line 443: */
NYCBSIM = EYCBSIM_ans;
} 
A_PROC_EXIT(pp);
return( NYCBSIM );
} 
#undef NL

A_STATIC A68_VOID  DXBBSIM_anonymous(A68_VC  Msg)
{ 
/*SKIP*/;
return;
} 
#undef NL

A_STATIC A68_VOID  JXBBSIM_instrtype(A68_165  Type, A68_VC  *ReturnedValue)
{ 
A68_165  KXBBSIM;  /* united object - for case conformity */
A68_VC  MXBBSIM;  /* clause result */
A68_VC  OXBBSIM;  /* avoid structure result */
A68_VC  RXBBSIM;  /* avoid structure result */
A68_VC  UXBBSIM;  /* avoid structure result */
A68_VC  XXBBSIM;  /* avoid structure result */
A68_VC  AYBBSIM;  /* avoid structure result */
A68_VC  DYBBSIM;  /* avoid structure result */
A_PROC_ENTRY(instrtype);
 /* line 85: */
 /* line 86: */
KXBBSIM = Type ;
switch ( KXBBSIM.mode )
{ 
case 1: /* REF STRUCT(REF MODE26,MODE165,REF MODE164)  */
case 2: /* REF STRUCT(REF MODE26,INT,INT)  */
case 3: /* REF STRUCT(REF MODE26,REF MODE26)  */
 /* line 87: */
RSCAOST_makeid( NXBBSIM, &OXBBSIM );
MXBBSIM = OXBBSIM;
break;
case 4: /* REF STRUCT(INT,MODE165)  */
 /* line 88: */
RSCAOST_makeid( QXBBSIM, &RXBBSIM );
MXBBSIM = RXBBSIM;
break;
case 5: /* REF STRUCT(INT,MODE162)  */
 /* line 89: */
RSCAOST_makeid( TXBBSIM, &UXBBSIM );
MXBBSIM = UXBBSIM;
break;
case 6: /* REF STRUCT(MODE165,MODE165)  */
 /* line 90: */
RSCAOST_makeid( WXBBSIM, &XXBBSIM );
MXBBSIM = XXBBSIM;
break;
case 7: /* REF STRUCT(MODE165,REF MODE168)  */
 /* line 91: */
RSCAOST_makeid( ZXBBSIM, &AYBBSIM );
MXBBSIM = AYBBSIM;
break;
case 9: /* STRUCT(INT)  */
 /* line 92: */
RSCAOST_makeid( CYBBSIM, &DYBBSIM );
MXBBSIM = DYBBSIM;
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(instrtype);
*ReturnedValue = (MXBBSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  FYBBSIM_instrvalue(A68_177  Value, A68_VC  *ReturnedValue)
{ 
A68_177  GYBBSIM;  /* united object - for case conformity */
A68_VC  IYBBSIM;  /* clause result */
A68_VC  KYBBSIM;  /* avoid structure result */
A68_172 * LYBBSIM_q;
A68_262  MYBBSIM;  /* collateral clause result */
A68_52  PYBBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  QYBBSIM;  /* YIELD */
A68_VC  RYBBSIM;  /* avoid structure result */
A68_52  SYBBSIM;  /* OPERATORS - mode -> union mode */
A68_52  TYBBSIM;  /* OPERATORS - mode -> union mode */
A68_CHAR  UYBBSIM;  /* YIELD */
A68_85  VYBBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  WYBBSIM;  /* avoid structure result */
A68_173 * XYBBSIM_i;
A68_262  YYBBSIM;  /* collateral clause result */
A68_52  ZYBBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  AZBBSIM;  /* YIELD */
A68_52  BZBBSIM;  /* OPERATORS - mode -> union mode */
A68_CHAR  CZBBSIM;  /* YIELD */
A68_52  DZBBSIM;  /* OPERATORS - mode -> union mode */
A68_INT  EZBBSIM;  /* YIELD */
A68_85  FZBBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  GZBBSIM;  /* avoid structure result */
A68_174 * HZBBSIM_c;
A68_262  IZBBSIM;  /* collateral clause result */
A68_52  JZBBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  KZBBSIM;  /* YIELD */
A68_52  LZBBSIM;  /* OPERATORS - mode -> union mode */
A68_CHAR  MZBBSIM;  /* YIELD */
A68_52  NZBBSIM;  /* OPERATORS - mode -> union mode */
A68_CHAR  OZBBSIM;  /* YIELD */
A68_85  PZBBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  QZBBSIM;  /* avoid structure result */
A68_175 * RZBBSIM_s;
A68_263  SZBBSIM;  /* collateral clause result */
A68_52  TZBBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  UZBBSIM;  /* YIELD */
A68_52  VZBBSIM;  /* OPERATORS - mode -> union mode */
A68_CHAR  WZBBSIM;  /* YIELD */
A68_52  XZBBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  YZBBSIM;  /* YIELD */
A68_52  ZZBBSIM;  /* OPERATORS - mode -> union mode */
A68_CHAR  AACBSIM;  /* YIELD */
A68_85  BACBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  CACBSIM;  /* avoid structure result */
A68_176 * DACBSIM_e;
A68_264  EACBSIM;  /* collateral clause result */
A68_164 * FACBSIM_el;
A68_INT  GACBSIM;  /* to part of loop */
A68_INT  HACBSIM;  /* loop control */
A68_52  IACBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  JACBSIM;  /* YIELD */
A68_VC  KACBSIM;  /* avoid structure result */
A68_52  LACBSIM;  /* OPERATORS - mode -> union mode */
A68_85  MACBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  NACBSIM;  /* avoid structure result */
A68_178 * OACBSIM_s;
A68_264  PACBSIM;  /* collateral clause result */
A68_VC  QACBSIM;  /* avoid structure result */
A68_52  RACBSIM;  /* OPERATORS - mode -> union mode */
A68_177  SACBSIM;  /* OPERATORS - mode -> union mode */
A68_178 * TACBSIM;  /* YIELD */
A68_VC  UACBSIM;  /* avoid structure result */
A68_52  VACBSIM;  /* OPERATORS - mode -> union mode */
A68_85  WACBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  XACBSIM;  /* avoid structure result */
A68_179 * YACBSIM_f;
A68_264  ZACBSIM;  /* collateral clause result */
A68_VC  ABCBSIM;  /* avoid structure result */
A68_52  BBCBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  CBCBSIM;  /* avoid structure result */
A68_52  DBCBSIM;  /* OPERATORS - mode -> union mode */
A68_85  EBCBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  FBCBSIM;  /* avoid structure result */
A_PROC_ENTRY(instrvalue);
 /* line 96: */
 /* line 97: */
GYBBSIM = Value ;
switch ( GYBBSIM.mode )
{ 
case 9: /* STRUCT(INT)  */
 /* line 98: */
RSCAOST_makeid( JYBBSIM, &KYBBSIM );
IYBBSIM = KYBBSIM;
break;
case 1: /* REF STRUCT(MODE165)  */
LYBBSIM_q = (GYBBSIM.data.mode1);
QYBBSIM = OYBBSIM ;
MYBBSIM.data[0] = A_UNITE(PYBBSIM,mode7,7,QYBBSIM);
JXBBSIM_instrtype( (*(&(LYBBSIM_q->Type))), &RYBBSIM );
MYBBSIM.data[1] = A_UNITE(SYBBSIM,mode7,7,RYBBSIM);
UYBBSIM = ')' ;
MYBBSIM.data[2] = A_UNITE(TYBBSIM,mode6,6,UYBBSIM);
 /* line 99: */
UJBAOSL_oneline( A_HISVEC(VYBBSIM,MYBBSIM,3,A68_52 ), &WYBBSIM );
IYBBSIM = WYBBSIM;
break;
case 2: /* REF STRUCT(REF MODE161,INT)  */
XYBBSIM_i = (GYBBSIM.data.mode2);
AZBBSIM = (*(&((*(&(XYBBSIM_i->Type)))->Id))) ;
YYBBSIM.data[0] = A_UNITE(ZYBBSIM,mode7,7,AZBBSIM);
CZBBSIM = '/' ;
YYBBSIM.data[1] = A_UNITE(BZBBSIM,mode6,6,CZBBSIM);
EZBBSIM = (*(&(XYBBSIM_i->Value))) ;
YYBBSIM.data[2] = A_UNITE(DZBBSIM,mode1,1,EZBBSIM);
 /* line 100: */
UJBAOSL_oneline( A_HISVEC(FZBBSIM,YYBBSIM,3,A68_52 ), &GZBBSIM );
IYBBSIM = GZBBSIM;
break;
case 3: /* REF STRUCT(REF MODE162,CHAR)  */
HZBBSIM_c = (GYBBSIM.data.mode3);
KZBBSIM = (*(&((*(&(HZBBSIM_c->Type)))->Id))) ;
IZBBSIM.data[0] = A_UNITE(JZBBSIM,mode7,7,KZBBSIM);
MZBBSIM = '\'' ;
IZBBSIM.data[1] = A_UNITE(LZBBSIM,mode6,6,MZBBSIM);
OZBBSIM = (*(&(HZBBSIM_c->Value))) ;
IZBBSIM.data[2] = A_UNITE(NZBBSIM,mode6,6,OZBBSIM);
 /* line 101: */
UJBAOSL_oneline( A_HISVEC(PZBBSIM,IZBBSIM,3,A68_52 ), &QZBBSIM );
IYBBSIM = QZBBSIM;
break;
case 4: /* REF STRUCT(REF MODE163,REF MODE26)  */
RZBBSIM_s = (GYBBSIM.data.mode4);
UZBBSIM = (*(&((&((*(&(RZBBSIM_s->Type)))->T))->Id))) ;
SZBBSIM.data[0] = A_UNITE(TZBBSIM,mode7,7,UZBBSIM);
WZBBSIM = '\"' ;
SZBBSIM.data[1] = A_UNITE(VZBBSIM,mode6,6,WZBBSIM);
YZBBSIM = (*(&(RZBBSIM_s->Value))) ;
SZBBSIM.data[2] = A_UNITE(XZBBSIM,mode7,7,YZBBSIM);
AACBSIM = '\"' ;
SZBBSIM.data[3] = A_UNITE(ZZBBSIM,mode6,6,AACBSIM);
 /* line 102: */
UJBAOSL_oneline( A_HISVEC(BACBSIM,SZBBSIM,4,A68_52 ), &CACBSIM );
IYBBSIM = CACBSIM;
break;
case 5: /* REF STRUCT(REF MODE164,INT,MODE177)  */
DACBSIM_e = (GYBBSIM.data.mode5);
 /* line 103: */
{ 
FACBSIM_el = (*(&(DACBSIM_e->Type)));
 /* line 104: */
GACBSIM = ((*(&(DACBSIM_e->Tag)))-1);
for ( HACBSIM = 1;
HACBSIM <= GACBSIM;
HACBSIM += 1 )
{ 
FACBSIM_el = (*(&(FACBSIM_el->Rest)));
}
 /* line 105: */
 /* line 106: */
 /* line 107: */
JACBSIM = (*(&(FACBSIM_el->Id))) ;
EACBSIM.data[0] = A_UNITE(IACBSIM,mode7,7,JACBSIM);
} 
FYBBSIM_instrvalue( (*(&(DACBSIM_e->Assoc))), &KACBSIM );
EACBSIM.data[1] = A_UNITE(LACBSIM,mode7,7,KACBSIM);
 /* line 108: */
UJBAOSL_oneline( A_HISVEC(MACBSIM,EACBSIM,2,A68_52 ), &NACBSIM );
IYBBSIM = NACBSIM;
break;
case 6: /* REF STRUCT(MODE177,REF MODE178)  */
OACBSIM_s = (GYBBSIM.data.mode6);
FYBBSIM_instrvalue( (*(&(OACBSIM_s->Head))), &QACBSIM );
PACBSIM.data[0] = A_UNITE(RACBSIM,mode7,7,QACBSIM);
TACBSIM = (*(&(OACBSIM_s->Tail))) ;
FYBBSIM_instrvalue( A_UNITE(SACBSIM,mode6,6,TACBSIM), &UACBSIM );
PACBSIM.data[1] = A_UNITE(VACBSIM,mode7,7,UACBSIM);
 /* line 109: */
UJBAOSL_oneline( A_HISVEC(WACBSIM,PACBSIM,2,A68_52 ), &XACBSIM );
IYBBSIM = XACBSIM;
break;
case 7: /* REF STRUCT(MODE177,MODE177)  */
YACBSIM_f = (GYBBSIM.data.mode7);
FYBBSIM_instrvalue( (*(&(YACBSIM_f->From))), &ABCBSIM );
ZACBSIM.data[0] = A_UNITE(BBCBSIM,mode7,7,ABCBSIM);
FYBBSIM_instrvalue( (*(&(YACBSIM_f->To))), &CBCBSIM );
ZACBSIM.data[1] = A_UNITE(DBCBSIM,mode7,7,CBCBSIM);
 /* line 110: */
UJBAOSL_oneline( A_HISVEC(EBCBSIM,ZACBSIM,2,A68_52 ), &FBCBSIM );
IYBBSIM = FBCBSIM;
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(instrvalue);
*ReturnedValue = (IYBBSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  HBCBSIM_instrram(A68_183  Ram, A68_VC  *ReturnedValue)
{ 
A68_266  IBCBSIM;  /* collateral clause result */
A68_52  JBCBSIM;  /* OPERATORS - mode -> union mode */
A68_INT  KBCBSIM;  /* YIELD */
A68_52  NBCBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  OBCBSIM;  /* YIELD */
A68_52  PBCBSIM;  /* OPERATORS - mode -> union mode */
A68_INT  QBCBSIM;  /* YIELD */
A68_52  TBCBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  UBCBSIM;  /* YIELD */
A68_VC  VBCBSIM;  /* avoid structure result */
A68_52  WBCBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  XBCBSIM;  /* clause result */
A68_85  YBCBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  ZBCBSIM;  /* avoid structure result */
A_PROC_ENTRY(instrram);
 /* line 114: */
KBCBSIM = Ram.Lwb ;
IBCBSIM.data[0] = A_UNITE(JBCBSIM,mode1,1,KBCBSIM);
OBCBSIM = MBCBSIM ;
IBCBSIM.data[1] = A_UNITE(NBCBSIM,mode7,7,OBCBSIM);
QBCBSIM = Ram.Ramsize ;
IBCBSIM.data[2] = A_UNITE(PBCBSIM,mode1,1,QBCBSIM);
 /* line 115: */
UBCBSIM = SBCBSIM ;
IBCBSIM.data[3] = A_UNITE(TBCBSIM,mode7,7,UBCBSIM);
JXBBSIM_instrtype( Ram.Firstcell.Type, &VBCBSIM );
IBCBSIM.data[4] = A_UNITE(WBCBSIM,mode7,7,VBCBSIM);
UJBAOSL_oneline( A_HISVEC(YBCBSIM,IBCBSIM,5,A68_52 ), &ZBCBSIM );
XBCBSIM = ZBCBSIM;
A_PROC_EXIT(instrram);
*ReturnedValue = (XBCBSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  BCCBSIM_instrfn(A68_185  Fn, A68_VC  *ReturnedValue)
{ 
A68_VC  CCCBSIM;  /* clause result */
A68_VC  DCCBSIM;  /* avoid structure result */
A68_183 * ECCBSIM_ram;
A68_264  FCCBSIM;  /* collateral clause result */
A68_52  ICCBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  JCCBSIM;  /* YIELD */
A68_VC  KCCBSIM;  /* avoid structure result */
A68_52  LCCBSIM;  /* OPERATORS - mode -> union mode */
A68_85  MCCBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  NCCBSIM;  /* avoid structure result */
A_PROC_ENTRY(instrfn);
 /* line 119: */
 /* line 120: */
if ( (Fn.Ram==STAASIM_nilsram) )
{ 
 /* line 121: */
BTCAOST_makeid( '_', &DCCBSIM );
CCCBSIM = DCCBSIM;
} 
else
{ 
ECCBSIM_ram = Fn.Ram;
 /* line 122: */
JCCBSIM = HCCBSIM ;
FCCBSIM.data[0] = A_UNITE(ICCBSIM,mode7,7,JCCBSIM);
HBCBSIM_instrram( (*ECCBSIM_ram), &KCCBSIM );
FCCBSIM.data[1] = A_UNITE(LCCBSIM,mode7,7,KCCBSIM);
 /* line 123: */
UJBAOSL_oneline( A_HISVEC(MCCBSIM,FCCBSIM,2,A68_52 ), &NCCBSIM );
CCCBSIM = NCCBSIM;
} 
A_PROC_EXIT(instrfn);
*ReturnedValue = (CCCBSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  PCCBSIM_instrbox(A68_187  Box, A68_VC  *ReturnedValue)
{ 
A68_262  QCCBSIM;  /* collateral clause result */
A68_52  TCCBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  UCCBSIM;  /* YIELD */
A68_52  VCCBSIM;  /* OPERATORS - mode -> union mode */
A68_INT  WCCBSIM;  /* YIELD */
A68_52  XCCBSIM;  /* OPERATORS - mode -> union mode */
A68_CHAR  YCCBSIM;  /* YIELD */
A68_VC  ZCCBSIM;  /* clause result */
A68_85  ADCBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  BDCBSIM;  /* avoid structure result */
A_PROC_ENTRY(instrbox);
 /* line 127: */
UCCBSIM = SCCBSIM ;
QCCBSIM.data[0] = A_UNITE(TCCBSIM,mode7,7,UCCBSIM);
WCCBSIM = Box.Fn ;
QCCBSIM.data[1] = A_UNITE(VCCBSIM,mode1,1,WCCBSIM);
YCCBSIM = ')' ;
QCCBSIM.data[2] = A_UNITE(XCCBSIM,mode6,6,YCCBSIM);
UJBAOSL_oneline( A_HISVEC(ADCBSIM,QCCBSIM,3,A68_52 ), &BDCBSIM );
ZCCBSIM = BDCBSIM;
A_PROC_EXIT(instrbox);
*ReturnedValue = (ZCCBSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  DDCBSIM_instrwire(A68_181  Wire, A68_VC  *ReturnedValue)
{ 
A68_264  EDCBSIM;  /* collateral clause result */
A68_VC  FDCBSIM;  /* avoid structure result */
A68_52  GDCBSIM;  /* OPERATORS - mode -> union mode */
A68_52  JDCBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  KDCBSIM;  /* YIELD */
A68_VC  LDCBSIM;  /* clause result */
A68_85  MDCBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  NDCBSIM;  /* avoid structure result */
A_PROC_ENTRY(instrwire);
 /* line 131: */
JXBBSIM_instrtype( Wire.Type, &FDCBSIM );
EDCBSIM.data[0] = A_UNITE(GDCBSIM,mode7,7,FDCBSIM);
KDCBSIM = IDCBSIM ;
EDCBSIM.data[1] = A_UNITE(JDCBSIM,mode7,7,KDCBSIM);
UJBAOSL_oneline( A_HISVEC(MDCBSIM,EDCBSIM,2,A68_52 ), &NDCBSIM );
LDCBSIM = NDCBSIM;
A_PROC_EXIT(instrwire);
*ReturnedValue = (LDCBSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  PDCBSIM_instrline(A68_188  Line, A68_VC  *ReturnedValue)
{ 
A68_262  QDCBSIM;  /* collateral clause result */
A68_52  TDCBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  UDCBSIM;  /* YIELD */
A68_VC  VDCBSIM;  /* avoid structure result */
A68_52  WDCBSIM;  /* OPERATORS - mode -> union mode */
A68_52  XDCBSIM;  /* OPERATORS - mode -> union mode */
A68_CHAR  YDCBSIM;  /* YIELD */
A68_VC  ZDCBSIM;  /* clause result */
A68_85  AECBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  BECBSIM;  /* avoid structure result */
A_PROC_ENTRY(instrline);
 /* line 135: */
UDCBSIM = SDCBSIM ;
QDCBSIM.data[0] = A_UNITE(TDCBSIM,mode7,7,UDCBSIM);
DDCBSIM_instrwire( (*Line.Wire), &VDCBSIM );
QDCBSIM.data[1] = A_UNITE(WDCBSIM,mode7,7,VDCBSIM);
YDCBSIM = ')' ;
QDCBSIM.data[2] = A_UNITE(XDCBSIM,mode6,6,YDCBSIM);
UJBAOSL_oneline( A_HISVEC(AECBSIM,QDCBSIM,3,A68_52 ), &BECBSIM );
ZDCBSIM = BECBSIM;
A_PROC_EXIT(instrline);
*ReturnedValue = (ZDCBSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  DECBSIM_instrnode(A68_189  Node, A68_VC  *ReturnedValue)
{ 
A68_189  EECBSIM;  /* united object - for case conformity */
A68_187  FECBSIM_b;
A68_262  GECBSIM;  /* collateral clause result */
A68_52  JECBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  KECBSIM;  /* YIELD */
A68_VC  LECBSIM;  /* avoid structure result */
A68_52  MECBSIM;  /* OPERATORS - mode -> union mode */
A68_52  NECBSIM;  /* OPERATORS - mode -> union mode */
A68_CHAR  OECBSIM;  /* YIELD */
A68_VC  PECBSIM;  /* clause result */
A68_85  QECBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  RECBSIM;  /* avoid structure result */
A68_188  SECBSIM_l;
A68_262  TECBSIM;  /* collateral clause result */
A68_52  WECBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  XECBSIM;  /* YIELD */
A68_VC  YECBSIM;  /* avoid structure result */
A68_52  ZECBSIM;  /* OPERATORS - mode -> union mode */
A68_52  AFCBSIM;  /* OPERATORS - mode -> union mode */
A68_CHAR  BFCBSIM;  /* YIELD */
A68_85  CFCBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  DFCBSIM;  /* avoid structure result */
A_PROC_ENTRY(instrnode);
 /* line 139: */
 /* line 140: */
EECBSIM = Node ;
switch ( EECBSIM.mode )
{ 
case 1: /* STRUCT(INT,INT)  */
FECBSIM_b = (EECBSIM.data.mode1);
KECBSIM = IECBSIM ;
GECBSIM.data[0] = A_UNITE(JECBSIM,mode7,7,KECBSIM);
PCCBSIM_instrbox( FECBSIM_b, &LECBSIM );
GECBSIM.data[1] = A_UNITE(MECBSIM,mode7,7,LECBSIM);
OECBSIM = ')' ;
GECBSIM.data[2] = A_UNITE(NECBSIM,mode6,6,OECBSIM);
 /* line 141: */
UJBAOSL_oneline( A_HISVEC(QECBSIM,GECBSIM,3,A68_52 ), &RECBSIM );
PECBSIM = RECBSIM;
break;
case 2: /* STRUCT(REF MODE181,INT)  */
SECBSIM_l = (EECBSIM.data.mode2);
XECBSIM = VECBSIM ;
TECBSIM.data[0] = A_UNITE(WECBSIM,mode7,7,XECBSIM);
PDCBSIM_instrline( SECBSIM_l, &YECBSIM );
TECBSIM.data[1] = A_UNITE(ZECBSIM,mode7,7,YECBSIM);
BFCBSIM = ')' ;
TECBSIM.data[2] = A_UNITE(AFCBSIM,mode6,6,BFCBSIM);
 /* line 142: */
UJBAOSL_oneline( A_HISVEC(CFCBSIM,TECBSIM,3,A68_52 ), &DFCBSIM );
PECBSIM = DFCBSIM;
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(instrnode);
*ReturnedValue = (PECBSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  FFCBSIM_instrmnode(A68_191  Mnode, A68_VC  *ReturnedValue)
{ 
A68_276  GFCBSIM;  /* collateral clause result */
A68_52  JFCBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  KFCBSIM;  /* YIELD */
A68_52  LFCBSIM;  /* OPERATORS - mode -> union mode */
A68_INT  MFCBSIM;  /* YIELD */
A68_52  PFCBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  QFCBSIM;  /* YIELD */
A68_52  RFCBSIM;  /* OPERATORS - mode -> union mode */
A68_INT  SFCBSIM;  /* YIELD */
A68_52  VFCBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  WFCBSIM;  /* YIELD */
A68_VC  XFCBSIM;  /* avoid structure result */
A68_52  YFCBSIM;  /* OPERATORS - mode -> union mode */
A68_52  ZFCBSIM;  /* OPERATORS - mode -> union mode */
A68_CHAR  AGCBSIM;  /* YIELD */
A68_VC  BGCBSIM;  /* clause result */
A68_85  CGCBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  DGCBSIM;  /* avoid structure result */
A_PROC_ENTRY(instrmnode);
 /* line 145: */
KFCBSIM = IFCBSIM ;
GFCBSIM.data[0] = A_UNITE(JFCBSIM,mode7,7,KFCBSIM);
MFCBSIM = Mnode.Circuit ;
GFCBSIM.data[1] = A_UNITE(LFCBSIM,mode1,1,MFCBSIM);
QFCBSIM = OFCBSIM ;
GFCBSIM.data[2] = A_UNITE(PFCBSIM,mode7,7,QFCBSIM);
 /* line 146: */
SFCBSIM = Mnode.Base ;
GFCBSIM.data[3] = A_UNITE(RFCBSIM,mode1,1,SFCBSIM);
WFCBSIM = UFCBSIM ;
GFCBSIM.data[4] = A_UNITE(VFCBSIM,mode7,7,WFCBSIM);
DECBSIM_instrnode( Mnode.Node, &XFCBSIM );
GFCBSIM.data[5] = A_UNITE(YFCBSIM,mode7,7,XFCBSIM);
AGCBSIM = ')' ;
GFCBSIM.data[6] = A_UNITE(ZFCBSIM,mode6,6,AGCBSIM);
UJBAOSL_oneline( A_HISVEC(CGCBSIM,GFCBSIM,7,A68_52 ), &DGCBSIM );
BGCBSIM = DGCBSIM;
A_PROC_EXIT(instrmnode);
*ReturnedValue = (BGCBSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  FGCBSIM_instrrnode(A68_190  Rnode, A68_VC  *ReturnedValue)
{ 
A68_190  GGCBSIM;  /* united object - for case conformity */
A68_187  HGCBSIM_b;
A68_262  IGCBSIM;  /* collateral clause result */
A68_52  LGCBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  MGCBSIM;  /* YIELD */
A68_VC  NGCBSIM;  /* avoid structure result */
A68_52  OGCBSIM;  /* OPERATORS - mode -> union mode */
A68_52  PGCBSIM;  /* OPERATORS - mode -> union mode */
A68_CHAR  QGCBSIM;  /* YIELD */
A68_VC  RGCBSIM;  /* clause result */
A68_85  SGCBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  TGCBSIM;  /* avoid structure result */
A68_181  UGCBSIM_w;
A68_262  VGCBSIM;  /* collateral clause result */
A68_52  YGCBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  ZGCBSIM;  /* YIELD */
A68_VC  AHCBSIM;  /* avoid structure result */
A68_52  BHCBSIM;  /* OPERATORS - mode -> union mode */
A68_52  CHCBSIM;  /* OPERATORS - mode -> union mode */
A68_CHAR  DHCBSIM;  /* YIELD */
A68_85  EHCBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  FHCBSIM;  /* avoid structure result */
A_PROC_ENTRY(instrrnode);
 /* line 149: */
 /* line 150: */
GGCBSIM = Rnode ;
switch ( GGCBSIM.mode )
{ 
case 1: /* STRUCT(INT,INT)  */
HGCBSIM_b = (GGCBSIM.data.mode1);
MGCBSIM = KGCBSIM ;
IGCBSIM.data[0] = A_UNITE(LGCBSIM,mode7,7,MGCBSIM);
PCCBSIM_instrbox( HGCBSIM_b, &NGCBSIM );
IGCBSIM.data[1] = A_UNITE(OGCBSIM,mode7,7,NGCBSIM);
QGCBSIM = ')' ;
IGCBSIM.data[2] = A_UNITE(PGCBSIM,mode6,6,QGCBSIM);
 /* line 151: */
UJBAOSL_oneline( A_HISVEC(SGCBSIM,IGCBSIM,3,A68_52 ), &TGCBSIM );
RGCBSIM = TGCBSIM;
break;
case 2: /* STRUCT(MODE165,REF MODE182)  */
UGCBSIM_w = (GGCBSIM.data.mode2);
ZGCBSIM = XGCBSIM ;
VGCBSIM.data[0] = A_UNITE(YGCBSIM,mode7,7,ZGCBSIM);
DDCBSIM_instrwire( UGCBSIM_w, &AHCBSIM );
VGCBSIM.data[1] = A_UNITE(BHCBSIM,mode7,7,AHCBSIM);
DHCBSIM = ')' ;
VGCBSIM.data[2] = A_UNITE(CHCBSIM,mode6,6,DHCBSIM);
 /* line 152: */
UJBAOSL_oneline( A_HISVEC(EHCBSIM,VGCBSIM,3,A68_52 ), &FHCBSIM );
RGCBSIM = FHCBSIM;
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(instrrnode);
*ReturnedValue = (RGCBSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  HHCBSIM_instrword(A68_VC  Word, A68_VC  *ReturnedValue)
{ 
A68_VC  IHCBSIM;  /* clause result */
A68_VC  JHCBSIM;  /* avoid structure result */
A68_VC  KHCBSIM;  /* avoid structure result */
A_PROC_ENTRY(instrword);
 /* line 156: */
if ( (Word.upb==0) )
{ 
BTCAOST_makeid( '?', &JHCBSIM );
IHCBSIM = JHCBSIM;
} 
else
{ 
BTCAOST_makeid( '_', &KHCBSIM );
IHCBSIM = KHCBSIM;
} 
A_PROC_EXIT(instrword);
*ReturnedValue = (IHCBSIM);
return;
} 
#undef NL
 /* line 165: */
 /* line 166: */
 /* line 167: */

A68_VOID  PHCBSIM_initialisekernel(A68_113 * Simfile, A68_INT  Diagnosticlevel, A68_43  Instr, A68_36  Flt, A68_189  *ReturnedValue)
{ 
A68_BITS  QHCBSIM;  /* ADICOPS - <= */
A68_BITS  RHCBSIM;  /* ADICOPS - <= */
A68_189  SHCBSIM;  /* avoid structure result */
A68_189  THCBSIM_ans;
A68_264  UHCBSIM;  /* collateral clause result */
A68_52  XHCBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  YHCBSIM;  /* YIELD */
A68_VC  ZHCBSIM;  /* avoid structure result */
A68_52  AICBSIM;  /* OPERATORS - mode -> union mode */
A68_85  BICBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  CICBSIM;  /* avoid structure result */
A68_189  DICBSIM;  /* clause result */
A_PROC_ENTRY(initialisekernel);
 /* line 168: */
 /* line 169: */
{ 
EXBBSIM_instrument = Instr;
 /* line 170: */
QHCBSIM = (A68_BITS )Diagnosticlevel ;
GXBBSIM_showinterface = A_LB_LE(OSAASIM_diagnoseinterface,QHCBSIM);
 /* line 171: */
RHCBSIM = (A68_BITS )Diagnosticlevel ;
HXBBSIM_showencoding = A_LB_LE(PSAASIM_diagnoseencoding,RHCBSIM);
 /* line 173: */
TUBBSIM_rawinitialisekernel( Simfile, Diagnosticlevel, Instr, Flt, &SHCBSIM );
THCBSIM_ans = SHCBSIM;
 /* line 174: */
 /* line 175: */
if ( GXBBSIM_showinterface )
{ 
 /* line 176: */
YHCBSIM = WHCBSIM ;
UHCBSIM.data[0] = A_UNITE(XHCBSIM,mode7,7,YHCBSIM);
DECBSIM_instrnode( THCBSIM_ans, &ZHCBSIM );
UHCBSIM.data[1] = A_UNITE(AICBSIM,mode7,7,ZHCBSIM);
 /* line 177: */
UJBAOSL_oneline( A_HISVEC(BICBSIM,UHCBSIM,2,A68_52 ), &CICBSIM );
A_CALLPROC(EXBBSIM_instrument,(CICBSIM),(CICBSIM,(EXBBSIM_instrument).nonlocals));
} 
 /* line 178: */
 /* line 179: */
DICBSIM = THCBSIM_ans;
} 
A_PROC_EXIT(initialisekernel);
*ReturnedValue = (DICBSIM);
return;
} 
#undef NL

A68_VOID  GICBSIM_selectfunction(A68_VC  Function, A68_36  Flt, A68_189  *ReturnedValue)
{ 
A68_189  HICBSIM;  /* avoid structure result */
A68_189  IICBSIM_ans;
A68_263  JICBSIM;  /* collateral clause result */
A68_52  MICBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  NICBSIM;  /* YIELD */
A68_52  OICBSIM;  /* OPERATORS - mode -> union mode */
A68_52  RICBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  SICBSIM;  /* YIELD */
A68_VC  TICBSIM;  /* avoid structure result */
A68_52  UICBSIM;  /* OPERATORS - mode -> union mode */
A68_85  VICBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  WICBSIM;  /* avoid structure result */
A68_189  XICBSIM;  /* clause result */
A_PROC_ENTRY(selectfunction);
 /* line 183: */
 /* line 184: */
{ 
JSABSIM_rawselectfunction( Function, Flt, &HICBSIM );
IICBSIM_ans = HICBSIM;
 /* line 185: */
 /* line 186: */
if ( GXBBSIM_showinterface )
{ 
 /* line 187: */
NICBSIM = LICBSIM ;
JICBSIM.data[0] = A_UNITE(MICBSIM,mode7,7,NICBSIM);
 /* line 188: */
JICBSIM.data[1] = A_UNITE(OICBSIM,mode7,7,Function);
 /* line 189: */
SICBSIM = QICBSIM ;
JICBSIM.data[2] = A_UNITE(RICBSIM,mode7,7,SICBSIM);
DECBSIM_instrnode( IICBSIM_ans, &TICBSIM );
JICBSIM.data[3] = A_UNITE(UICBSIM,mode7,7,TICBSIM);
 /* line 190: */
UJBAOSL_oneline( A_HISVEC(VICBSIM,JICBSIM,4,A68_52 ), &WICBSIM );
A_CALLPROC(EXBBSIM_instrument,(WICBSIM),(WICBSIM,(EXBBSIM_instrument).nonlocals));
} 
 /* line 191: */
 /* line 192: */
XICBSIM = IICBSIM_ans;
} 
A_PROC_EXIT(selectfunction);
*ReturnedValue = (XICBSIM);
return;
} 
#undef NL

A68_VOID  BJCBSIM_simulate(A68_INT * Increment, A68_BOOL * Stable, A68_36  Flt)
{ 
A68_INT  CJCBSIM_oldinc;
A68_276  DJCBSIM;  /* collateral clause result */
A68_52  GJCBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  HJCBSIM;  /* YIELD */
A68_52  IJCBSIM;  /* OPERATORS - mode -> union mode */
A68_52  LJCBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  MJCBSIM;  /* YIELD */
A68_52  NJCBSIM;  /* OPERATORS - mode -> union mode */
A68_52  QJCBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  RJCBSIM;  /* YIELD */
A68_52  SJCBSIM;  /* OPERATORS - mode -> union mode */
A68_52  VJCBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  WJCBSIM;  /* YIELD */
A68_85  XJCBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  YJCBSIM;  /* avoid structure result */
A_PROC_ENTRY(simulate);
 /* line 196: */
 /* line 197: */
{ 
CJCBSIM_oldinc = (*Increment);
 /* line 198: */
VSABSIM_rawsimulate(Increment, Stable, Flt);
 /* line 199: */
 /* line 200: */
if ( GXBBSIM_showinterface )
{ 
 /* line 201: */
HJCBSIM = FJCBSIM ;
DJCBSIM.data[0] = A_UNITE(GJCBSIM,mode7,7,HJCBSIM);
 /* line 202: */
DJCBSIM.data[1] = A_UNITE(IJCBSIM,mode1,1,CJCBSIM_oldinc);
 /* line 203: */
MJCBSIM = KJCBSIM ;
DJCBSIM.data[2] = A_UNITE(LJCBSIM,mode7,7,MJCBSIM);
 /* line 204: */
DJCBSIM.data[3] = A_UNITE(NJCBSIM,mode1,1,(*Increment));
 /* line 205: */
RJCBSIM = PJCBSIM ;
DJCBSIM.data[4] = A_UNITE(QJCBSIM,mode7,7,RJCBSIM);
 /* line 206: */
DJCBSIM.data[5] = A_UNITE(SJCBSIM,mode8,8,(*Stable));
WJCBSIM = UJCBSIM ;
DJCBSIM.data[6] = A_UNITE(VJCBSIM,mode7,7,WJCBSIM);
 /* line 207: */
 /* line 208: */
UJBAOSL_oneline( A_HISVEC(XJCBSIM,DJCBSIM,7,A68_52 ), &YJCBSIM );
A_CALLPROC(EXBBSIM_instrument,(YJCBSIM),(YJCBSIM,(EXBBSIM_instrument).nonlocals));
} 
} 
A_PROC_EXIT(simulate);
return;
} 
#undef NL

A68_VOID  BKCBSIM_peeksignalvalue(A68_191  Mloc, A68_VC  Answer)
{ 
A68_263  CKCBSIM;  /* collateral clause result */
A68_52  FKCBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  GKCBSIM;  /* YIELD */
A68_VC  HKCBSIM;  /* avoid structure result */
A68_52  IKCBSIM;  /* OPERATORS - mode -> union mode */
A68_52  LKCBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  MKCBSIM;  /* YIELD */
A68_VC  NKCBSIM;  /* avoid structure result */
A68_52  OKCBSIM;  /* OPERATORS - mode -> union mode */
A68_85  PKCBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  QKCBSIM;  /* avoid structure result */
A_PROC_ENTRY(peeksignalvalue);
 /* line 212: */
 /* line 213: */
{ 
BJBBSIM_rawpeeksignalvalue(Mloc, Answer);
 /* line 214: */
 /* line 215: */
if ( GXBBSIM_showinterface )
{ 
 /* line 216: */
GKCBSIM = EKCBSIM ;
CKCBSIM.data[0] = A_UNITE(FKCBSIM,mode7,7,GKCBSIM);
FFCBSIM_instrmnode( Mloc, &HKCBSIM );
CKCBSIM.data[1] = A_UNITE(IKCBSIM,mode7,7,HKCBSIM);
 /* line 217: */
MKCBSIM = KKCBSIM ;
CKCBSIM.data[2] = A_UNITE(LKCBSIM,mode7,7,MKCBSIM);
HHCBSIM_instrword( Answer, &NKCBSIM );
CKCBSIM.data[3] = A_UNITE(OKCBSIM,mode7,7,NKCBSIM);
 /* line 218: */
 /* line 219: */
UJBAOSL_oneline( A_HISVEC(PKCBSIM,CKCBSIM,4,A68_52 ), &QKCBSIM );
A_CALLPROC(EXBBSIM_instrument,(QKCBSIM),(QKCBSIM,(EXBBSIM_instrument).nonlocals));
} 
} 
A_PROC_EXIT(peeksignalvalue);
return;
} 
#undef NL

A68_VOID  TKCBSIM_pokesignalvalue(A68_191  Mloc, A68_VC  Val)
{ 
A68_266  UKCBSIM;  /* collateral clause result */
A68_52  XKCBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  YKCBSIM;  /* YIELD */
A68_VC  ZKCBSIM;  /* avoid structure result */
A68_52  ALCBSIM;  /* OPERATORS - mode -> union mode */
A68_52  DLCBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  ELCBSIM;  /* YIELD */
A68_VC  FLCBSIM;  /* avoid structure result */
A68_52  GLCBSIM;  /* OPERATORS - mode -> union mode */
A68_52  HLCBSIM;  /* OPERATORS - mode -> union mode */
A68_CHAR  ILCBSIM;  /* YIELD */
A68_85  JLCBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  KLCBSIM;  /* avoid structure result */
A_PROC_ENTRY(pokesignalvalue);
 /* line 223: */
 /* line 224: */
{ 
ZJBBSIM_rawpokesignalvalue(Mloc, Val);
 /* line 225: */
 /* line 226: */
if ( GXBBSIM_showinterface )
{ 
 /* line 227: */
YKCBSIM = WKCBSIM ;
UKCBSIM.data[0] = A_UNITE(XKCBSIM,mode7,7,YKCBSIM);
 /* line 228: */
FFCBSIM_instrmnode( Mloc, &ZKCBSIM );
UKCBSIM.data[1] = A_UNITE(ALCBSIM,mode7,7,ZKCBSIM);
 /* line 229: */
ELCBSIM = CLCBSIM ;
UKCBSIM.data[2] = A_UNITE(DLCBSIM,mode7,7,ELCBSIM);
 /* line 230: */
HHCBSIM_instrword( Val, &FLCBSIM );
UKCBSIM.data[3] = A_UNITE(GLCBSIM,mode7,7,FLCBSIM);
ILCBSIM = ')' ;
UKCBSIM.data[4] = A_UNITE(HLCBSIM,mode6,6,ILCBSIM);
 /* line 231: */
 /* line 232: */
UJBAOSL_oneline( A_HISVEC(JLCBSIM,UKCBSIM,5,A68_52 ), &KLCBSIM );
A_CALLPROC(EXBBSIM_instrument,(KLCBSIM),(KLCBSIM,(EXBBSIM_instrument).nonlocals));
} 
} 
A_PROC_EXIT(pokesignalvalue);
return;
} 
#undef NL

A68_INT  MLCBSIM_makeflagfanouts(A68_191  Loc)
{ 
A68_INT  NLCBSIM_flagaddress;
A68_263  OLCBSIM;  /* collateral clause result */
A68_52  RLCBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  SLCBSIM;  /* YIELD */
A68_VC  TLCBSIM;  /* avoid structure result */
A68_52  ULCBSIM;  /* OPERATORS - mode -> union mode */
A68_52  XLCBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  YLCBSIM;  /* YIELD */
A68_VC  ZLCBSIM;  /* avoid structure result */
A68_52  AMCBSIM;  /* OPERATORS - mode -> union mode */
A68_85  BMCBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  CMCBSIM;  /* avoid structure result */
A68_INT  DMCBSIM;  /* clause result */
A_PROC_ENTRY(makeflagfanouts);
 /* line 235: */
 /* line 236: */
{ 
NLCBSIM_flagaddress = MSBBSIM_rawmakeflagfanouts(Loc);
 /* line 237: */
 /* line 238: */
if ( GXBBSIM_showinterface )
{ 
 /* line 239: */
SLCBSIM = QLCBSIM ;
OLCBSIM.data[0] = A_UNITE(RLCBSIM,mode7,7,SLCBSIM);
FFCBSIM_instrmnode( Loc, &TLCBSIM );
OLCBSIM.data[1] = A_UNITE(ULCBSIM,mode7,7,TLCBSIM);
 /* line 240: */
YLCBSIM = WLCBSIM ;
OLCBSIM.data[2] = A_UNITE(XLCBSIM,mode7,7,YLCBSIM);
FCAAOSI_intchars( NLCBSIM_flagaddress, &ZLCBSIM );
OLCBSIM.data[3] = A_UNITE(AMCBSIM,mode7,7,ZLCBSIM);
 /* line 241: */
UJBAOSL_oneline( A_HISVEC(BMCBSIM,OLCBSIM,4,A68_52 ), &CMCBSIM );
A_CALLPROC(EXBBSIM_instrument,(CMCBSIM),(CMCBSIM,(EXBBSIM_instrument).nonlocals));
} 
 /* line 242: */
 /* line 243: */
DMCBSIM = NLCBSIM_flagaddress;
} 
A_PROC_EXIT(makeflagfanouts);
return( DMCBSIM );
} 
#undef NL

A68_VOID  GMCBSIM_removeflagfanouts(A68_191  Loc, A68_INT  Flagaddress)
{ 
A68_266  HMCBSIM;  /* collateral clause result */
A68_52  KMCBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  LMCBSIM;  /* YIELD */
A68_VC  MMCBSIM;  /* avoid structure result */
A68_52  NMCBSIM;  /* OPERATORS - mode -> union mode */
A68_52  QMCBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  RMCBSIM;  /* YIELD */
A68_VC  SMCBSIM;  /* avoid structure result */
A68_52  TMCBSIM;  /* OPERATORS - mode -> union mode */
A68_52  UMCBSIM;  /* OPERATORS - mode -> union mode */
A68_CHAR  VMCBSIM;  /* YIELD */
A68_85  WMCBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  XMCBSIM;  /* avoid structure result */
A_PROC_ENTRY(removeflagfanouts);
 /* line 247: */
 /* line 248: */
{ 
YSBBSIM_rawremoveflagfanouts(Loc, Flagaddress);
 /* line 249: */
 /* line 250: */
if ( GXBBSIM_showinterface )
{ 
 /* line 251: */
LMCBSIM = JMCBSIM ;
HMCBSIM.data[0] = A_UNITE(KMCBSIM,mode7,7,LMCBSIM);
 /* line 252: */
FFCBSIM_instrmnode( Loc, &MMCBSIM );
HMCBSIM.data[1] = A_UNITE(NMCBSIM,mode7,7,MMCBSIM);
 /* line 253: */
RMCBSIM = PMCBSIM ;
HMCBSIM.data[2] = A_UNITE(QMCBSIM,mode7,7,RMCBSIM);
 /* line 254: */
FCAAOSI_intchars( Flagaddress, &SMCBSIM );
HMCBSIM.data[3] = A_UNITE(TMCBSIM,mode7,7,SMCBSIM);
VMCBSIM = ')' ;
HMCBSIM.data[4] = A_UNITE(UMCBSIM,mode6,6,VMCBSIM);
 /* line 255: */
 /* line 256: */
UJBAOSL_oneline( A_HISVEC(WMCBSIM,HMCBSIM,5,A68_52 ), &XMCBSIM );
A_CALLPROC(EXBBSIM_instrument,(XMCBSIM),(XMCBSIM,(EXBBSIM_instrument).nonlocals));
} 
} 
A_PROC_EXIT(removeflagfanouts);
return;
} 
#undef NL
 /* line 261: */
 /* line 262: */

A68_VOID  DNCBSIM_savestate(A68_INT * Time, A68_VC * Function, A68_238  Ferry1, A68_238  Ferry2, A68_36  Flt)
{ 
A68_266  ENCBSIM;  /* collateral clause result */
A68_52  HNCBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  INCBSIM;  /* YIELD */
A68_52  JNCBSIM;  /* OPERATORS - mode -> union mode */
A68_52  MNCBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  NNCBSIM;  /* YIELD */
A68_52  ONCBSIM;  /* OPERATORS - mode -> union mode */
A68_52  PNCBSIM;  /* OPERATORS - mode -> union mode */
A68_CHAR  QNCBSIM;  /* YIELD */
A68_85  RNCBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  SNCBSIM;  /* avoid structure result */
A_PROC_ENTRY(savestate);
 /* line 263: */
 /* line 264: */
{ 
TVBBSIM_rawsavestate(Time, Function, Ferry1, Ferry2, Flt);
 /* line 265: */
 /* line 266: */
if ( GXBBSIM_showinterface )
{ 
INCBSIM = GNCBSIM ;
ENCBSIM.data[0] = A_UNITE(HNCBSIM,mode7,7,INCBSIM);
ENCBSIM.data[1] = A_UNITE(JNCBSIM,mode1,1,(*Time));
NNCBSIM = LNCBSIM ;
ENCBSIM.data[2] = A_UNITE(MNCBSIM,mode7,7,NNCBSIM);
ENCBSIM.data[3] = A_UNITE(ONCBSIM,mode7,7,(*Function));
QNCBSIM = ')' ;
ENCBSIM.data[4] = A_UNITE(PNCBSIM,mode6,6,QNCBSIM);
 /* line 267: */
 /* line 268: */
UJBAOSL_oneline( A_HISVEC(RNCBSIM,ENCBSIM,5,A68_52 ), &SNCBSIM );
A_CALLPROC(EXBBSIM_instrument,(SNCBSIM),(SNCBSIM,(EXBBSIM_instrument).nonlocals));
} 
} 
A_PROC_EXIT(savestate);
return;
} 
#undef NL
 /* line 272: */
 /* line 273: */
 /* line 274: */

A68_VOID  AOCBSIM_restorestate(A68_INT  Diagnosticlevel, A68_INT  Time, A68_VC  Function, A68_238  Ferry1, A68_238  Ferry2, A68_43  Instr, A68_36  Flt, A68_189  *ReturnedValue)
{ 
A68_BITS  BOCBSIM;  /* ADICOPS - <= */
A68_BITS  COCBSIM;  /* ADICOPS - <= */
A68_189  DOCBSIM;  /* avoid structure result */
A68_189  EOCBSIM_ans;
A68_284  FOCBSIM;  /* collateral clause result */
A68_52  IOCBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  JOCBSIM;  /* YIELD */
A68_52  KOCBSIM;  /* OPERATORS - mode -> union mode */
A68_52  NOCBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  OOCBSIM;  /* YIELD */
A68_52  POCBSIM;  /* OPERATORS - mode -> union mode */
A68_52  SOCBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  TOCBSIM;  /* YIELD */
A68_VC  UOCBSIM;  /* avoid structure result */
A68_52  VOCBSIM;  /* OPERATORS - mode -> union mode */
A68_85  WOCBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  XOCBSIM;  /* avoid structure result */
A68_189  YOCBSIM;  /* clause result */
A_PROC_ENTRY(restorestate);
 /* line 275: */
 /* line 276: */
{ 
EXBBSIM_instrument = Instr;
 /* line 277: */
BOCBSIM = (A68_BITS )Diagnosticlevel ;
GXBBSIM_showinterface = A_LB_LE(OSAASIM_diagnoseinterface,BOCBSIM);
 /* line 278: */
COCBSIM = (A68_BITS )Diagnosticlevel ;
HXBBSIM_showencoding = A_LB_LE(PSAASIM_diagnoseencoding,COCBSIM);
 /* line 279: */
 /* line 280: */
CWBBSIM_rawrestorestate( Diagnosticlevel, Time, Function, Ferry1, Ferry2, Instr, Flt, &DOCBSIM );
EOCBSIM_ans = DOCBSIM;
 /* line 281: */
 /* line 282: */
if ( GXBBSIM_showinterface )
{ 
 /* line 283: */
JOCBSIM = HOCBSIM ;
FOCBSIM.data[0] = A_UNITE(IOCBSIM,mode7,7,JOCBSIM);
 /* line 284: */
FOCBSIM.data[1] = A_UNITE(KOCBSIM,mode1,1,Time);
 /* line 285: */
OOCBSIM = MOCBSIM ;
FOCBSIM.data[2] = A_UNITE(NOCBSIM,mode7,7,OOCBSIM);
 /* line 286: */
FOCBSIM.data[3] = A_UNITE(POCBSIM,mode7,7,Function);
 /* line 287: */
TOCBSIM = ROCBSIM ;
FOCBSIM.data[4] = A_UNITE(SOCBSIM,mode7,7,TOCBSIM);
DECBSIM_instrnode( EOCBSIM_ans, &UOCBSIM );
FOCBSIM.data[5] = A_UNITE(VOCBSIM,mode7,7,UOCBSIM);
 /* line 288: */
UJBAOSL_oneline( A_HISVEC(WOCBSIM,FOCBSIM,6,A68_52 ), &XOCBSIM );
A_CALLPROC(EXBBSIM_instrument,(XOCBSIM),(XOCBSIM,(EXBBSIM_instrument).nonlocals));
} 
 /* line 289: */
 /* line 290: */
YOCBSIM = EOCBSIM_ans;
} 
A_PROC_EXIT(restorestate);
*ReturnedValue = (YOCBSIM);
return;
} 
#undef NL

A68_VOID  ZOCBSIM_clearinterrupts(void)
{ 
A68_VC  CPCBSIM;  /* avoid structure result */
A_PROC_ENTRY(clearinterrupts);
{ 
GTBBSIM_rawclearinterrupts();
 /* line 296: */
 /* line 297: */
if ( GXBBSIM_showinterface )
{ 
 /* line 298: */
 /* line 299: */
RSCAOST_makeid( BPCBSIM, &CPCBSIM );
A_CALLPROC(EXBBSIM_instrument,(CPCBSIM),(CPCBSIM,(EXBBSIM_instrument).nonlocals));
} 
} 
A_PROC_EXIT(clearinterrupts);
return;
} 
#undef NL

A68_VOID  EPCBSIM_terminatekernel(A68_36  Flt)
{ 
A68_VC  HPCBSIM;  /* avoid structure result */
A_PROC_ENTRY(terminatekernel);
 /* line 303: */
 /* line 304: */
{ 
NUBBSIM_rawterminatekernel(Flt);
 /* line 305: */
 /* line 306: */
if ( GXBBSIM_showinterface )
{ 
 /* line 307: */
 /* line 308: */
RSCAOST_makeid( GPCBSIM, &HPCBSIM );
A_CALLPROC(EXBBSIM_instrument,(HPCBSIM),(HPCBSIM,(EXBBSIM_instrument).nonlocals));
} 
} 
A_PROC_EXIT(terminatekernel);
return;
} 
#undef NL

A68_VOID  KPCBSIM_initialiseprobeinstance(A68_VC  Function, A68_36  Flt, A68_191  *ReturnedValue)
{ 
A68_191  LPCBSIM;  /* avoid structure result */
A68_191  MPCBSIM_ans;
A68_263  NPCBSIM;  /* collateral clause result */
A68_52  QPCBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  RPCBSIM;  /* YIELD */
A68_52  SPCBSIM;  /* OPERATORS - mode -> union mode */
A68_52  VPCBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  WPCBSIM;  /* YIELD */
A68_VC  XPCBSIM;  /* avoid structure result */
A68_52  YPCBSIM;  /* OPERATORS - mode -> union mode */
A68_85  ZPCBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  AQCBSIM;  /* avoid structure result */
A68_191  BQCBSIM;  /* clause result */
A_PROC_ENTRY(initialiseprobeinstance);
 /* line 311: */
 /* line 312: */
{ 
JHBBSIM_rawinitialiseprobeinstance( Function, Flt, &LPCBSIM );
MPCBSIM_ans = LPCBSIM;
 /* line 313: */
 /* line 314: */
if ( GXBBSIM_showinterface )
{ 
RPCBSIM = PPCBSIM ;
NPCBSIM.data[0] = A_UNITE(QPCBSIM,mode7,7,RPCBSIM);
NPCBSIM.data[1] = A_UNITE(SPCBSIM,mode7,7,Function);
 /* line 315: */
WPCBSIM = UPCBSIM ;
NPCBSIM.data[2] = A_UNITE(VPCBSIM,mode7,7,WPCBSIM);
FFCBSIM_instrmnode( MPCBSIM_ans, &XPCBSIM );
NPCBSIM.data[3] = A_UNITE(YPCBSIM,mode7,7,XPCBSIM);
 /* line 316: */
UJBAOSL_oneline( A_HISVEC(ZPCBSIM,NPCBSIM,4,A68_52 ), &AQCBSIM );
A_CALLPROC(EXBBSIM_instrument,(AQCBSIM),(AQCBSIM,(EXBBSIM_instrument).nonlocals));
} 
 /* line 317: */
 /* line 318: */
BQCBSIM = MPCBSIM_ans;
} 
A_PROC_EXIT(initialiseprobeinstance);
*ReturnedValue = (BQCBSIM);
return;
} 
#undef NL

A68_VOID  DQCBSIM_reinitialiseprobeinstance(A68_191  Function)
{ 
A68_262  EQCBSIM;  /* collateral clause result */
A68_52  HQCBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  IQCBSIM;  /* YIELD */
A68_VC  JQCBSIM;  /* avoid structure result */
A68_52  KQCBSIM;  /* OPERATORS - mode -> union mode */
A68_52  LQCBSIM;  /* OPERATORS - mode -> union mode */
A68_CHAR  MQCBSIM;  /* YIELD */
A68_85  NQCBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  OQCBSIM;  /* avoid structure result */
A_PROC_ENTRY(reinitialiseprobeinstance);
 /* line 321: */
 /* line 322: */
{ 
ZHBBSIM_rawreinitialiseprobeinstance(Function);
 /* line 323: */
 /* line 324: */
if ( GXBBSIM_showinterface )
{ 
IQCBSIM = GQCBSIM ;
EQCBSIM.data[0] = A_UNITE(HQCBSIM,mode7,7,IQCBSIM);
FFCBSIM_instrmnode( Function, &JQCBSIM );
EQCBSIM.data[1] = A_UNITE(KQCBSIM,mode7,7,JQCBSIM);
MQCBSIM = ')' ;
EQCBSIM.data[2] = A_UNITE(LQCBSIM,mode6,6,MQCBSIM);
 /* line 325: */
 /* line 326: */
UJBAOSL_oneline( A_HISVEC(NQCBSIM,EQCBSIM,3,A68_52 ), &OQCBSIM );
A_CALLPROC(EXBBSIM_instrument,(OQCBSIM),(OQCBSIM,(EXBBSIM_instrument).nonlocals));
} 
} 
A_PROC_EXIT(reinitialiseprobeinstance);
return;
} 
#undef NL

A68_VOID  RQCBSIM_destroyprobeinstance(A68_INT  Circuit, A68_INT  Base)
{ 
A68_266  SQCBSIM;  /* collateral clause result */
A68_52  VQCBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  WQCBSIM;  /* YIELD */
A68_52  XQCBSIM;  /* OPERATORS - mode -> union mode */
A68_52  YQCBSIM;  /* OPERATORS - mode -> union mode */
A68_CHAR  ZQCBSIM;  /* YIELD */
A68_52  ARCBSIM;  /* OPERATORS - mode -> union mode */
A68_52  BRCBSIM;  /* OPERATORS - mode -> union mode */
A68_CHAR  CRCBSIM;  /* YIELD */
A68_85  DRCBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  ERCBSIM;  /* avoid structure result */
A_PROC_ENTRY(destroyprobeinstance);
 /* line 329: */
 /* line 330: */
{ 
OFBBSIM_rawdestroyprobeinstance(Circuit, Base);
 /* line 331: */
 /* line 332: */
if ( GXBBSIM_showinterface )
{ 
WQCBSIM = UQCBSIM ;
SQCBSIM.data[0] = A_UNITE(VQCBSIM,mode7,7,WQCBSIM);
SQCBSIM.data[1] = A_UNITE(XQCBSIM,mode1,1,Circuit);
ZQCBSIM = ',' ;
SQCBSIM.data[2] = A_UNITE(YQCBSIM,mode6,6,ZQCBSIM);
SQCBSIM.data[3] = A_UNITE(ARCBSIM,mode1,1,Base);
CRCBSIM = ')' ;
SQCBSIM.data[4] = A_UNITE(BRCBSIM,mode6,6,CRCBSIM);
 /* line 333: */
 /* line 334: */
UJBAOSL_oneline( A_HISVEC(DRCBSIM,SQCBSIM,5,A68_52 ), &ERCBSIM );
A_CALLPROC(EXBBSIM_instrument,(ERCBSIM),(ERCBSIM,(EXBBSIM_instrument).nonlocals));
} 
} 
A_PROC_EXIT(destroyprobeinstance);
return;
} 
#undef NL

A68_VOID  HRCBSIM_reconnectprobeinstance(A68_191  Function, A68_191  Line)
{ 
A68_266  IRCBSIM;  /* collateral clause result */
A68_52  LRCBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  MRCBSIM;  /* YIELD */
A68_VC  NRCBSIM;  /* avoid structure result */
A68_52  ORCBSIM;  /* OPERATORS - mode -> union mode */
A68_52  PRCBSIM;  /* OPERATORS - mode -> union mode */
A68_CHAR  QRCBSIM;  /* YIELD */
A68_VC  RRCBSIM;  /* avoid structure result */
A68_52  SRCBSIM;  /* OPERATORS - mode -> union mode */
A68_52  TRCBSIM;  /* OPERATORS - mode -> union mode */
A68_CHAR  URCBSIM;  /* YIELD */
A68_85  VRCBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  WRCBSIM;  /* avoid structure result */
A_PROC_ENTRY(reconnectprobeinstance);
 /* line 338: */
 /* line 339: */
{ 
NCBBSIM_rawreconnectprobeinstance(Function, Line);
 /* line 340: */
 /* line 341: */
if ( GXBBSIM_showinterface )
{ 
 /* line 342: */
MRCBSIM = KRCBSIM ;
IRCBSIM.data[0] = A_UNITE(LRCBSIM,mode7,7,MRCBSIM);
FFCBSIM_instrmnode( Function, &NRCBSIM );
IRCBSIM.data[1] = A_UNITE(ORCBSIM,mode7,7,NRCBSIM);
QRCBSIM = ',' ;
IRCBSIM.data[2] = A_UNITE(PRCBSIM,mode6,6,QRCBSIM);
FFCBSIM_instrmnode( Line, &RRCBSIM );
IRCBSIM.data[3] = A_UNITE(SRCBSIM,mode7,7,RRCBSIM);
URCBSIM = ')' ;
IRCBSIM.data[4] = A_UNITE(TRCBSIM,mode6,6,URCBSIM);
 /* line 343: */
 /* line 344: */
UJBAOSL_oneline( A_HISVEC(VRCBSIM,IRCBSIM,5,A68_52 ), &WRCBSIM );
A_CALLPROC(EXBBSIM_instrument,(WRCBSIM),(WRCBSIM,(EXBBSIM_instrument).nonlocals));
} 
} 
A_PROC_EXIT(reconnectprobeinstance);
return;
} 
#undef NL

A68_VOID  YRCBSIM_probeinputnode(A68_191  Mprobe, A68_191  *ReturnedValue)
{ 
A68_191  ZRCBSIM;  /* avoid structure result */
A68_191  ASCBSIM_ans;
A68_263  BSCBSIM;  /* collateral clause result */
A68_52  ESCBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  FSCBSIM;  /* YIELD */
A68_VC  GSCBSIM;  /* avoid structure result */
A68_52  HSCBSIM;  /* OPERATORS - mode -> union mode */
A68_52  KSCBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  LSCBSIM;  /* YIELD */
A68_VC  MSCBSIM;  /* avoid structure result */
A68_52  NSCBSIM;  /* OPERATORS - mode -> union mode */
A68_85  OSCBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  PSCBSIM;  /* avoid structure result */
A68_191  QSCBSIM;  /* clause result */
A_PROC_ENTRY(probeinputnode);
 /* line 347: */
 /* line 348: */
{ 
OABBSIM_rawprobeinputnode( Mprobe, &ZRCBSIM );
ASCBSIM_ans = ZRCBSIM;
 /* line 349: */
 /* line 350: */
if ( GXBBSIM_showinterface )
{ 
 /* line 351: */
FSCBSIM = DSCBSIM ;
BSCBSIM.data[0] = A_UNITE(ESCBSIM,mode7,7,FSCBSIM);
FFCBSIM_instrmnode( Mprobe, &GSCBSIM );
BSCBSIM.data[1] = A_UNITE(HSCBSIM,mode7,7,GSCBSIM);
LSCBSIM = JSCBSIM ;
BSCBSIM.data[2] = A_UNITE(KSCBSIM,mode7,7,LSCBSIM);
FFCBSIM_instrmnode( ASCBSIM_ans, &MSCBSIM );
BSCBSIM.data[3] = A_UNITE(NSCBSIM,mode7,7,MSCBSIM);
 /* line 352: */
UJBAOSL_oneline( A_HISVEC(OSCBSIM,BSCBSIM,4,A68_52 ), &PSCBSIM );
A_CALLPROC(EXBBSIM_instrument,(PSCBSIM),(PSCBSIM,(EXBBSIM_instrument).nonlocals));
} 
 /* line 353: */
 /* line 354: */
QSCBSIM = ASCBSIM_ans;
} 
A_PROC_EXIT(probeinputnode);
*ReturnedValue = (QSCBSIM);
return;
} 
#undef NL

A68_VOID  SSCBSIM_listprobesconnectedto(A68_INT  Base, A68_32  *ReturnedValue)
{ 
A68_32  TSCBSIM;  /* avoid structure result */
A68_32  USCBSIM_ans;
A68_262  VSCBSIM;  /* collateral clause result */
A68_52  YSCBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  ZSCBSIM;  /* YIELD */
A68_52  ATCBSIM;  /* OPERATORS - mode -> union mode */
A68_52  DTCBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  ETCBSIM;  /* YIELD */
A68_85  FTCBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  GTCBSIM;  /* avoid structure result */
A68_32  HTCBSIM;  /* clause result */
A_PROC_ENTRY(listprobesconnectedto);
 /* line 357: */
 /* line 358: */
{ 
PCBBSIM_rawlistprobesconnectedto( Base, &TSCBSIM );
USCBSIM_ans = TSCBSIM;
 /* line 359: */
 /* line 360: */
if ( GXBBSIM_showinterface )
{ 
ZSCBSIM = XSCBSIM ;
VSCBSIM.data[0] = A_UNITE(YSCBSIM,mode7,7,ZSCBSIM);
 /* line 361: */
VSCBSIM.data[1] = A_UNITE(ATCBSIM,mode1,1,Base);
ETCBSIM = CTCBSIM ;
VSCBSIM.data[2] = A_UNITE(DTCBSIM,mode7,7,ETCBSIM);
 /* line 362: */
UJBAOSL_oneline( A_HISVEC(FTCBSIM,VSCBSIM,3,A68_52 ), &GTCBSIM );
A_CALLPROC(EXBBSIM_instrument,(GTCBSIM),(GTCBSIM,(EXBBSIM_instrument).nonlocals));
} 
 /* line 363: */
 /* line 364: */
HTCBSIM = USCBSIM_ans;
} 
A_PROC_EXIT(listprobesconnectedto);
*ReturnedValue = (HTCBSIM);
return;
} 
#undef NL

A68_VOID  JTCBSIM_stopprobeinstances(A68_32  Bases)
{ 
A68_52  MTCBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  NTCBSIM;  /* YIELD */
A68_85  OTCBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  PTCBSIM;  /* avoid structure result */
A_PROC_ENTRY(stopprobeinstances);
 /* line 367: */
 /* line 368: */
{ 
HIBBSIM_rawstopprobeinstances(Bases);
 /* line 369: */
 /* line 370: */
if ( GXBBSIM_showinterface )
{ 
 /* line 371: */
 /* line 372: */
NTCBSIM = LTCBSIM ;
UJBAOSL_oneline( A_HVEC(OTCBSIM,A_UNITE(MTCBSIM,mode7,7,NTCBSIM),A68_52 ), &PTCBSIM );
A_CALLPROC(EXBBSIM_instrument,(PTCBSIM),(PTCBSIM,(EXBBSIM_instrument).nonlocals));
} 
} 
A_PROC_EXIT(stopprobeinstances);
return;
} 
#undef NL

A68_BOOL  STCBSIM_probetypematchesline(A68_191  Function, A68_191  Line)
{ 
A68_BOOL  TTCBSIM_ans;
A68_284  UTCBSIM;  /* collateral clause result */
A68_52  XTCBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  YTCBSIM;  /* YIELD */
A68_VC  ZTCBSIM;  /* avoid structure result */
A68_52  AUCBSIM;  /* OPERATORS - mode -> union mode */
A68_52  BUCBSIM;  /* OPERATORS - mode -> union mode */
A68_CHAR  CUCBSIM;  /* YIELD */
A68_VC  DUCBSIM;  /* avoid structure result */
A68_52  EUCBSIM;  /* OPERATORS - mode -> union mode */
A68_52  HUCBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  IUCBSIM;  /* YIELD */
A68_52  JUCBSIM;  /* OPERATORS - mode -> union mode */
A68_85  KUCBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  LUCBSIM;  /* avoid structure result */
A68_BOOL  MUCBSIM;  /* clause result */
A_PROC_ENTRY(probetypematchesline);
 /* line 375: */
 /* line 376: */
{ 
TTCBSIM_ans = JDBBSIM_rawprobetypematchesline(Function, Line);
 /* line 377: */
 /* line 378: */
if ( GXBBSIM_showinterface )
{ 
 /* line 379: */
YTCBSIM = WTCBSIM ;
UTCBSIM.data[0] = A_UNITE(XTCBSIM,mode7,7,YTCBSIM);
FFCBSIM_instrmnode( Function, &ZTCBSIM );
UTCBSIM.data[1] = A_UNITE(AUCBSIM,mode7,7,ZTCBSIM);
CUCBSIM = ',' ;
UTCBSIM.data[2] = A_UNITE(BUCBSIM,mode6,6,CUCBSIM);
FFCBSIM_instrmnode( Line, &DUCBSIM );
UTCBSIM.data[3] = A_UNITE(EUCBSIM,mode7,7,DUCBSIM);
IUCBSIM = GUCBSIM ;
UTCBSIM.data[4] = A_UNITE(HUCBSIM,mode7,7,IUCBSIM);
UTCBSIM.data[5] = A_UNITE(JUCBSIM,mode8,8,TTCBSIM_ans);
 /* line 380: */
UJBAOSL_oneline( A_HISVEC(KUCBSIM,UTCBSIM,6,A68_52 ), &LUCBSIM );
A_CALLPROC(EXBBSIM_instrument,(LUCBSIM),(LUCBSIM,(EXBBSIM_instrument).nonlocals));
} 
 /* line 381: */
 /* line 382: */
MUCBSIM = TTCBSIM_ans;
} 
A_PROC_EXIT(probetypematchesline);
return( MUCBSIM );
} 
#undef NL

A68_INT  OUCBSIM_freezeinstance(A68_191  Function)
{ 
A68_INT  PUCBSIM_ans;
A68_262  QUCBSIM;  /* collateral clause result */
A68_52  TUCBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  UUCBSIM;  /* YIELD */
A68_VC  VUCBSIM;  /* avoid structure result */
A68_52  WUCBSIM;  /* OPERATORS - mode -> union mode */
A68_52  XUCBSIM;  /* OPERATORS - mode -> union mode */
A68_CHAR  YUCBSIM;  /* YIELD */
A68_85  ZUCBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  AVCBSIM;  /* avoid structure result */
A68_INT  BVCBSIM;  /* clause result */
A_PROC_ENTRY(freezeinstance);
 /* line 385: */
 /* line 386: */
{ 
PUCBSIM_ans = ZOBBSIM_rawfreezeinstance(Function);
 /* line 387: */
 /* line 388: */
if ( GXBBSIM_showinterface )
{ 
UUCBSIM = SUCBSIM ;
QUCBSIM.data[0] = A_UNITE(TUCBSIM,mode7,7,UUCBSIM);
FFCBSIM_instrmnode( Function, &VUCBSIM );
QUCBSIM.data[1] = A_UNITE(WUCBSIM,mode7,7,VUCBSIM);
YUCBSIM = ')' ;
QUCBSIM.data[2] = A_UNITE(XUCBSIM,mode6,6,YUCBSIM);
 /* line 389: */
UJBAOSL_oneline( A_HISVEC(ZUCBSIM,QUCBSIM,3,A68_52 ), &AVCBSIM );
A_CALLPROC(EXBBSIM_instrument,(AVCBSIM),(AVCBSIM,(EXBBSIM_instrument).nonlocals));
} 
 /* line 390: */
 /* line 391: */
BVCBSIM = PUCBSIM_ans;
} 
A_PROC_EXIT(freezeinstance);
return( BVCBSIM );
} 
#undef NL

A68_BOOL  DVCBSIM_unfreezeinstance(A68_191  Function)
{ 
A68_BOOL  EVCBSIM_ans;
A68_262  FVCBSIM;  /* collateral clause result */
A68_52  IVCBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  JVCBSIM;  /* YIELD */
A68_VC  KVCBSIM;  /* avoid structure result */
A68_52  LVCBSIM;  /* OPERATORS - mode -> union mode */
A68_52  MVCBSIM;  /* OPERATORS - mode -> union mode */
A68_CHAR  NVCBSIM;  /* YIELD */
A68_85  OVCBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  PVCBSIM;  /* avoid structure result */
A68_BOOL  QVCBSIM;  /* clause result */
A_PROC_ENTRY(unfreezeinstance);
 /* line 394: */
 /* line 395: */
{ 
EVCBSIM_ans = SNBBSIM_rawunfreezeinstance(Function);
 /* line 396: */
 /* line 397: */
if ( GXBBSIM_showinterface )
{ 
JVCBSIM = HVCBSIM ;
FVCBSIM.data[0] = A_UNITE(IVCBSIM,mode7,7,JVCBSIM);
 /* line 398: */
FFCBSIM_instrmnode( Function, &KVCBSIM );
FVCBSIM.data[1] = A_UNITE(LVCBSIM,mode7,7,KVCBSIM);
NVCBSIM = ')' ;
FVCBSIM.data[2] = A_UNITE(MVCBSIM,mode6,6,NVCBSIM);
 /* line 399: */
UJBAOSL_oneline( A_HISVEC(OVCBSIM,FVCBSIM,3,A68_52 ), &PVCBSIM );
A_CALLPROC(EXBBSIM_instrument,(PVCBSIM),(PVCBSIM,(EXBBSIM_instrument).nonlocals));
} 
 /* line 400: */
 /* line 401: */
QVCBSIM = EVCBSIM_ans;
} 
A_PROC_EXIT(unfreezeinstance);
return( QVCBSIM );
} 
#undef NL

A68_VOID  TVCBSIM_pokesignalvalueandfanout(A68_191  Function, A68_VC  Val)
{ 
A68_266  UVCBSIM;  /* collateral clause result */
A68_52  XVCBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  YVCBSIM;  /* YIELD */
A68_VC  ZVCBSIM;  /* avoid structure result */
A68_52  AWCBSIM;  /* OPERATORS - mode -> union mode */
A68_52  DWCBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  EWCBSIM;  /* YIELD */
A68_VC  FWCBSIM;  /* avoid structure result */
A68_52  GWCBSIM;  /* OPERATORS - mode -> union mode */
A68_52  HWCBSIM;  /* OPERATORS - mode -> union mode */
A68_CHAR  IWCBSIM;  /* YIELD */
A68_85  JWCBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  KWCBSIM;  /* avoid structure result */
A_PROC_ENTRY(pokesignalvalueandfanout);
 /* line 405: */
 /* line 406: */
{ 
IRBBSIM_rawpokesignalvalueandfanout(Function, Val);
 /* line 407: */
 /* line 408: */
if ( GXBBSIM_showinterface )
{ 
 /* line 409: */
YVCBSIM = WVCBSIM ;
UVCBSIM.data[0] = A_UNITE(XVCBSIM,mode7,7,YVCBSIM);
 /* line 410: */
FFCBSIM_instrmnode( Function, &ZVCBSIM );
UVCBSIM.data[1] = A_UNITE(AWCBSIM,mode7,7,ZVCBSIM);
 /* line 411: */
EWCBSIM = CWCBSIM ;
UVCBSIM.data[2] = A_UNITE(DWCBSIM,mode7,7,EWCBSIM);
 /* line 412: */
HHCBSIM_instrword( Val, &FWCBSIM );
UVCBSIM.data[3] = A_UNITE(GWCBSIM,mode7,7,FWCBSIM);
IWCBSIM = ')' ;
UVCBSIM.data[4] = A_UNITE(HWCBSIM,mode6,6,IWCBSIM);
 /* line 413: */
 /* line 414: */
UJBAOSL_oneline( A_HISVEC(JWCBSIM,UVCBSIM,5,A68_52 ), &KWCBSIM );
A_CALLPROC(EXBBSIM_instrument,(KWCBSIM),(KWCBSIM,(EXBBSIM_instrument).nonlocals));
} 
} 
A_PROC_EXIT(pokesignalvalueandfanout);
return;
} 
#undef NL

A68_VOID  MWCBSIM_lookupfunction(A68_INT  Fn, A68_185  *ReturnedValue)
{ 
A68_185  NWCBSIM;  /* avoid structure result */
A68_185  OWCBSIM_ans;
A68_263  PWCBSIM;  /* collateral clause result */
A68_52  SWCBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  TWCBSIM;  /* YIELD */
A68_52  UWCBSIM;  /* OPERATORS - mode -> union mode */
A68_52  XWCBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  YWCBSIM;  /* YIELD */
A68_VC  ZWCBSIM;  /* avoid structure result */
A68_52  AXCBSIM;  /* OPERATORS - mode -> union mode */
A68_85  BXCBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  CXCBSIM;  /* avoid structure result */
A68_185  DXCBSIM;  /* clause result */
A_PROC_ENTRY(lookupfunction);
 /* line 417: */
 /* line 418: */
{ 
GSCASIM_rawlookupfunction( Fn, &NWCBSIM );
OWCBSIM_ans = NWCBSIM;
 /* line 419: */
 /* line 420: */
if ( GXBBSIM_showinterface )
{ 
TWCBSIM = RWCBSIM ;
PWCBSIM.data[0] = A_UNITE(SWCBSIM,mode7,7,TWCBSIM);
PWCBSIM.data[1] = A_UNITE(UWCBSIM,mode1,1,Fn);
YWCBSIM = WWCBSIM ;
PWCBSIM.data[2] = A_UNITE(XWCBSIM,mode7,7,YWCBSIM);
BCCBSIM_instrfn( OWCBSIM_ans, &ZWCBSIM );
PWCBSIM.data[3] = A_UNITE(AXCBSIM,mode7,7,ZWCBSIM);
 /* line 421: */
UJBAOSL_oneline( A_HISVEC(BXCBSIM,PWCBSIM,4,A68_52 ), &CXCBSIM );
A_CALLPROC(EXBBSIM_instrument,(CXCBSIM),(CXCBSIM,(EXBBSIM_instrument).nonlocals));
} 
 /* line 422: */
 /* line 423: */
DXCBSIM = OWCBSIM_ans;
} 
A_PROC_EXIT(lookupfunction);
*ReturnedValue = (DXCBSIM);
return;
} 
#undef NL

A68_VOID  FXCBSIM_lookuprnode(A68_INT  Rnode, A68_190  *ReturnedValue)
{ 
A68_190  GXCBSIM;  /* avoid structure result */
A68_190  HXCBSIM_ans;
A68_263  IXCBSIM;  /* collateral clause result */
A68_52  LXCBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  MXCBSIM;  /* YIELD */
A68_52  NXCBSIM;  /* OPERATORS - mode -> union mode */
A68_52  QXCBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  RXCBSIM;  /* YIELD */
A68_VC  SXCBSIM;  /* avoid structure result */
A68_52  TXCBSIM;  /* OPERATORS - mode -> union mode */
A68_85  UXCBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  VXCBSIM;  /* avoid structure result */
A68_190  WXCBSIM;  /* clause result */
A_PROC_ENTRY(lookuprnode);
 /* line 427: */
 /* line 428: */
{ 
ITCASIM_rawlookuprnode( Rnode, &GXCBSIM );
HXCBSIM_ans = GXCBSIM;
 /* line 429: */
 /* line 430: */
if ( GXBBSIM_showinterface )
{ 
MXCBSIM = KXCBSIM ;
IXCBSIM.data[0] = A_UNITE(LXCBSIM,mode7,7,MXCBSIM);
IXCBSIM.data[1] = A_UNITE(NXCBSIM,mode1,1,Rnode);
RXCBSIM = PXCBSIM ;
IXCBSIM.data[2] = A_UNITE(QXCBSIM,mode7,7,RXCBSIM);
FGCBSIM_instrrnode( HXCBSIM_ans, &SXCBSIM );
IXCBSIM.data[3] = A_UNITE(TXCBSIM,mode7,7,SXCBSIM);
 /* line 431: */
UJBAOSL_oneline( A_HISVEC(UXCBSIM,IXCBSIM,4,A68_52 ), &VXCBSIM );
A_CALLPROC(EXBBSIM_instrument,(VXCBSIM),(VXCBSIM,(EXBBSIM_instrument).nonlocals));
} 
 /* line 432: */
 /* line 433: */
WXCBSIM = HXCBSIM_ans;
} 
A_PROC_EXIT(lookuprnode);
*ReturnedValue = (WXCBSIM);
return;
} 
#undef NL

A68_VOID  YXCBSIM_listsimulatablefunctions(A68_236  P)
{ 
A68_236  BYCBSIM_pp;   /* proc value of non-global proc */
A68_52  QYCBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  RYCBSIM;  /* YIELD */
A68_85  SYCBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  TYCBSIM;  /* avoid structure result */
A_PROC_ENTRY(listsimulatablefunctions);
 /* line 437: */
 /* line 438: */
{ 
A_CLOSURE( BYCBSIM_pp, CYCBSIM_pp, DYCBSIM_pp );
(( DYCBSIM_pp * ) ( BYCBSIM_pp.nonlocals )) -> P = P;
 /* line 445: */
RYCBSIM = PYCBSIM ;
UJBAOSL_oneline( A_HVEC(SYCBSIM,A_UNITE(QYCBSIM,mode7,7,RYCBSIM),A68_52 ), &TYCBSIM );
A_CALLPROC(EXBBSIM_instrument,(TYCBSIM),(TYCBSIM,(EXBBSIM_instrument).nonlocals));
 /* line 446: */
 /* line 447: */
YZCASIM_rawlistsimulatablefunctions(BYCBSIM_pp);
} 
A_PROC_EXIT(listsimulatablefunctions);
return;
} 
#undef NL

A68_INT  VYCBSIM_signalwidth(A68_165  T)
{ 
A68_INT  WYCBSIM_ans;
A68_263  XYCBSIM;  /* collateral clause result */
A68_52  AZCBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  BZCBSIM;  /* YIELD */
A68_VC  CZCBSIM;  /* avoid structure result */
A68_52  DZCBSIM;  /* OPERATORS - mode -> union mode */
A68_52  GZCBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  HZCBSIM;  /* YIELD */
A68_52  IZCBSIM;  /* OPERATORS - mode -> union mode */
A68_85  JZCBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  KZCBSIM;  /* avoid structure result */
A68_INT  LZCBSIM;  /* clause result */
A_PROC_ENTRY(signalwidth);
 /* line 451: */
 /* line 452: */
{ 
WYCBSIM_ans = DCOASIM_rawsignalwidth(T);
 /* line 453: */
 /* line 454: */
if ( GXBBSIM_showinterface )
{ 
BZCBSIM = ZYCBSIM ;
XYCBSIM.data[0] = A_UNITE(AZCBSIM,mode7,7,BZCBSIM);
JXBBSIM_instrtype( T, &CZCBSIM );
XYCBSIM.data[1] = A_UNITE(DZCBSIM,mode7,7,CZCBSIM);
HZCBSIM = FZCBSIM ;
XYCBSIM.data[2] = A_UNITE(GZCBSIM,mode7,7,HZCBSIM);
XYCBSIM.data[3] = A_UNITE(IZCBSIM,mode1,1,WYCBSIM_ans);
 /* line 455: */
UJBAOSL_oneline( A_HISVEC(JZCBSIM,XYCBSIM,4,A68_52 ), &KZCBSIM );
A_CALLPROC(EXBBSIM_instrument,(KZCBSIM),(KZCBSIM,(EXBBSIM_instrument).nonlocals));
} 
 /* line 456: */
 /* line 457: */
LZCBSIM = WYCBSIM_ans;
} 
A_PROC_EXIT(signalwidth);
return( LZCBSIM );
} 
#undef NL

A68_168 * PZCBSIM_trimsignal(A68_165  T, A68_INT  Lwb, A68_INT  Upb)
{ 
A68_168 * QZCBSIM_ans;
A68_294  RZCBSIM;  /* collateral clause result */
A68_52  UZCBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  VZCBSIM;  /* YIELD */
A68_VC  WZCBSIM;  /* avoid structure result */
A68_52  XZCBSIM;  /* OPERATORS - mode -> union mode */
A68_52  AADBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  BADBSIM;  /* YIELD */
A68_52  CADBSIM;  /* OPERATORS - mode -> union mode */
A68_52  FADBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  GADBSIM;  /* YIELD */
A68_52  HADBSIM;  /* OPERATORS - mode -> union mode */
A68_52  KADBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  LADBSIM;  /* YIELD */
A68_165  MADBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  NADBSIM;  /* avoid structure result */
A68_52  OADBSIM;  /* OPERATORS - mode -> union mode */
A68_85  PADBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  QADBSIM;  /* avoid structure result */
A68_168 * RADBSIM;  /* clause result */
A_PROC_ENTRY(trimsignal);
 /* line 461: */
 /* line 462: */
{ 
QZCBSIM_ans = KCOASIM_rawtrimsignal(T, Lwb, Upb);
 /* line 463: */
 /* line 464: */
if ( GXBBSIM_showinterface )
{ 
 /* line 465: */
VZCBSIM = TZCBSIM ;
RZCBSIM.data[0] = A_UNITE(UZCBSIM,mode7,7,VZCBSIM);
 /* line 466: */
JXBBSIM_instrtype( T, &WZCBSIM );
RZCBSIM.data[1] = A_UNITE(XZCBSIM,mode7,7,WZCBSIM);
 /* line 467: */
BADBSIM = ZZCBSIM ;
RZCBSIM.data[2] = A_UNITE(AADBSIM,mode7,7,BADBSIM);
 /* line 468: */
RZCBSIM.data[3] = A_UNITE(CADBSIM,mode1,1,Lwb);
 /* line 469: */
GADBSIM = EADBSIM ;
RZCBSIM.data[4] = A_UNITE(FADBSIM,mode7,7,GADBSIM);
 /* line 470: */
RZCBSIM.data[5] = A_UNITE(HADBSIM,mode1,1,Upb);
 /* line 471: */
LADBSIM = JADBSIM ;
RZCBSIM.data[6] = A_UNITE(KADBSIM,mode7,7,LADBSIM);
JXBBSIM_instrtype( A_UNITE(MADBSIM,mode7,7,QZCBSIM_ans), &NADBSIM );
RZCBSIM.data[7] = A_UNITE(OADBSIM,mode7,7,NADBSIM);
 /* line 472: */
UJBAOSL_oneline( A_HISVEC(PADBSIM,RZCBSIM,8,A68_52 ), &QADBSIM );
A_CALLPROC(EXBBSIM_instrument,(QADBSIM),(QADBSIM,(EXBBSIM_instrument).nonlocals));
} 
 /* line 473: */
 /* line 474: */
RADBSIM = QZCBSIM_ans;
} 
A_PROC_EXIT(trimsignal);
return( RADBSIM );
} 
#undef NL

A68_VOID  VADBSIM_trimwire(A68_181  T, A68_INT  Lwb, A68_INT  Upb, A68_181  *ReturnedValue)
{ 
A68_181  WADBSIM;  /* avoid structure result */
A68_181  XADBSIM_ans;
A68_294  YADBSIM;  /* collateral clause result */
A68_52  BBDBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  CBDBSIM;  /* YIELD */
A68_VC  DBDBSIM;  /* avoid structure result */
A68_52  EBDBSIM;  /* OPERATORS - mode -> union mode */
A68_52  HBDBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  IBDBSIM;  /* YIELD */
A68_52  JBDBSIM;  /* OPERATORS - mode -> union mode */
A68_52  MBDBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  NBDBSIM;  /* YIELD */
A68_52  OBDBSIM;  /* OPERATORS - mode -> union mode */
A68_52  RBDBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  SBDBSIM;  /* YIELD */
A68_VC  TBDBSIM;  /* avoid structure result */
A68_52  UBDBSIM;  /* OPERATORS - mode -> union mode */
A68_85  VBDBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  WBDBSIM;  /* avoid structure result */
A68_181  XBDBSIM;  /* clause result */
A_PROC_ENTRY(trimwire);
 /* line 478: */
 /* line 479: */
{ 
VCOASIM_rawtrimwire( T, Lwb, Upb, &WADBSIM );
XADBSIM_ans = WADBSIM;
 /* line 480: */
 /* line 481: */
if ( GXBBSIM_showinterface )
{ 
 /* line 482: */
CBDBSIM = ABDBSIM ;
YADBSIM.data[0] = A_UNITE(BBDBSIM,mode7,7,CBDBSIM);
 /* line 483: */
DDCBSIM_instrwire( T, &DBDBSIM );
YADBSIM.data[1] = A_UNITE(EBDBSIM,mode7,7,DBDBSIM);
 /* line 484: */
IBDBSIM = GBDBSIM ;
YADBSIM.data[2] = A_UNITE(HBDBSIM,mode7,7,IBDBSIM);
 /* line 485: */
YADBSIM.data[3] = A_UNITE(JBDBSIM,mode1,1,Lwb);
 /* line 486: */
NBDBSIM = LBDBSIM ;
YADBSIM.data[4] = A_UNITE(MBDBSIM,mode7,7,NBDBSIM);
 /* line 487: */
YADBSIM.data[5] = A_UNITE(OBDBSIM,mode1,1,Upb);
 /* line 488: */
SBDBSIM = QBDBSIM ;
YADBSIM.data[6] = A_UNITE(RBDBSIM,mode7,7,SBDBSIM);
DDCBSIM_instrwire( XADBSIM_ans, &TBDBSIM );
YADBSIM.data[7] = A_UNITE(UBDBSIM,mode7,7,TBDBSIM);
 /* line 489: */
UJBAOSL_oneline( A_HISVEC(VBDBSIM,YADBSIM,8,A68_52 ), &WBDBSIM );
A_CALLPROC(EXBBSIM_instrument,(WBDBSIM),(WBDBSIM,(EXBBSIM_instrument).nonlocals));
} 
 /* line 490: */
 /* line 491: */
XBDBSIM = XADBSIM_ans;
} 
A_PROC_EXIT(trimwire);
*ReturnedValue = (XBDBSIM);
return;
} 
#undef NL

A68_VOID  BCDBSIM_trimram(A68_183 * Ram, A68_INT  Lwb, A68_INT  Upb, A68_181  *ReturnedValue)
{ 
A68_181  CCDBSIM;  /* avoid structure result */
A68_181  DCDBSIM_ans;
A68_294  ECDBSIM;  /* collateral clause result */
A68_52  HCDBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  ICDBSIM;  /* YIELD */
A68_VC  JCDBSIM;  /* avoid structure result */
A68_52  KCDBSIM;  /* OPERATORS - mode -> union mode */
A68_52  NCDBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  OCDBSIM;  /* YIELD */
A68_52  PCDBSIM;  /* OPERATORS - mode -> union mode */
A68_52  SCDBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  TCDBSIM;  /* YIELD */
A68_52  UCDBSIM;  /* OPERATORS - mode -> union mode */
A68_52  XCDBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  YCDBSIM;  /* YIELD */
A68_VC  ZCDBSIM;  /* avoid structure result */
A68_52  ADDBSIM;  /* OPERATORS - mode -> union mode */
A68_85  BDDBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  CDDBSIM;  /* avoid structure result */
A68_181  DDDBSIM;  /* clause result */
A_PROC_ENTRY(trimram);
 /* line 495: */
 /* line 496: */
{ 
FEOASIM_rawtrimram( Ram, Lwb, Upb, &CCDBSIM );
DCDBSIM_ans = CCDBSIM;
 /* line 497: */
 /* line 498: */
if ( GXBBSIM_showinterface )
{ 
 /* line 499: */
ICDBSIM = GCDBSIM ;
ECDBSIM.data[0] = A_UNITE(HCDBSIM,mode7,7,ICDBSIM);
 /* line 500: */
HBCBSIM_instrram( (*Ram), &JCDBSIM );
ECDBSIM.data[1] = A_UNITE(KCDBSIM,mode7,7,JCDBSIM);
 /* line 501: */
OCDBSIM = MCDBSIM ;
ECDBSIM.data[2] = A_UNITE(NCDBSIM,mode7,7,OCDBSIM);
 /* line 502: */
ECDBSIM.data[3] = A_UNITE(PCDBSIM,mode1,1,Lwb);
 /* line 503: */
TCDBSIM = RCDBSIM ;
ECDBSIM.data[4] = A_UNITE(SCDBSIM,mode7,7,TCDBSIM);
 /* line 504: */
ECDBSIM.data[5] = A_UNITE(UCDBSIM,mode1,1,Upb);
 /* line 505: */
YCDBSIM = WCDBSIM ;
ECDBSIM.data[6] = A_UNITE(XCDBSIM,mode7,7,YCDBSIM);
DDCBSIM_instrwire( DCDBSIM_ans, &ZCDBSIM );
ECDBSIM.data[7] = A_UNITE(ADDBSIM,mode7,7,ZCDBSIM);
 /* line 506: */
UJBAOSL_oneline( A_HISVEC(BDDBSIM,ECDBSIM,8,A68_52 ), &CDDBSIM );
A_CALLPROC(EXBBSIM_instrument,(CDDBSIM),(CDDBSIM,(EXBBSIM_instrument).nonlocals));
} 
 /* line 507: */
 /* line 508: */
DDDBSIM = DCDBSIM_ans;
} 
A_PROC_EXIT(trimram);
*ReturnedValue = (DDDBSIM);
return;
} 
#undef NL

A68_VOID  FDDBSIM_inputs(A68_185  F, A68_181  *ReturnedValue)
{ 
A68_181  GDDBSIM;  /* avoid structure result */
A68_181  HDDBSIM_ans;
A68_263  IDDBSIM;  /* collateral clause result */
A68_52  LDDBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  MDDBSIM;  /* YIELD */
A68_VC  NDDBSIM;  /* avoid structure result */
A68_52  ODDBSIM;  /* OPERATORS - mode -> union mode */
A68_52  RDDBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  SDDBSIM;  /* YIELD */
A68_VC  TDDBSIM;  /* avoid structure result */
A68_52  UDDBSIM;  /* OPERATORS - mode -> union mode */
A68_85  VDDBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  WDDBSIM;  /* avoid structure result */
A68_181  XDDBSIM;  /* clause result */
A_PROC_ENTRY(inputs);
 /* line 512: */
 /* line 513: */
{ 
EZCASIM_rawinputs( F, &GDDBSIM );
HDDBSIM_ans = GDDBSIM;
 /* line 514: */
 /* line 515: */
if ( GXBBSIM_showinterface )
{ 
 /* line 516: */
MDDBSIM = KDDBSIM ;
IDDBSIM.data[0] = A_UNITE(LDDBSIM,mode7,7,MDDBSIM);
 /* line 517: */
BCCBSIM_instrfn( F, &NDDBSIM );
IDDBSIM.data[1] = A_UNITE(ODDBSIM,mode7,7,NDDBSIM);
 /* line 518: */
SDDBSIM = QDDBSIM ;
IDDBSIM.data[2] = A_UNITE(RDDBSIM,mode7,7,SDDBSIM);
DDCBSIM_instrwire( HDDBSIM_ans, &TDDBSIM );
IDDBSIM.data[3] = A_UNITE(UDDBSIM,mode7,7,TDDBSIM);
 /* line 519: */
UJBAOSL_oneline( A_HISVEC(VDDBSIM,IDDBSIM,4,A68_52 ), &WDDBSIM );
A_CALLPROC(EXBBSIM_instrument,(WDDBSIM),(WDDBSIM,(EXBBSIM_instrument).nonlocals));
} 
 /* line 520: */
 /* line 521: */
XDDBSIM = HDDBSIM_ans;
} 
A_PROC_EXIT(inputs);
*ReturnedValue = (XDDBSIM);
return;
} 
#undef NL

A68_VC * AEDBSIM_encode(A68_177  Val, A68_165  Type)
{ 
A68_VC * BEDBSIM_ans;
A68_284  CEDBSIM;  /* collateral clause result */
A68_52  FEDBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  GEDBSIM;  /* YIELD */
A68_VC  HEDBSIM;  /* avoid structure result */
A68_52  IEDBSIM;  /* OPERATORS - mode -> union mode */
A68_52  LEDBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  MEDBSIM;  /* YIELD */
A68_VC  NEDBSIM;  /* avoid structure result */
A68_52  OEDBSIM;  /* OPERATORS - mode -> union mode */
A68_52  REDBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  SEDBSIM;  /* YIELD */
A68_VC  TEDBSIM;  /* avoid structure result */
A68_52  UEDBSIM;  /* OPERATORS - mode -> union mode */
A68_85  VEDBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  WEDBSIM;  /* avoid structure result */
A68_VC * XEDBSIM;  /* clause result */
A_PROC_ENTRY(encode);
 /* line 525: */
 /* line 526: */
{ 
BEDBSIM_ans = NKOASIM_rawencode(Val, Type);
 /* line 527: */
 /* line 528: */
if ( HXBBSIM_showencoding )
{ 
 /* line 529: */
GEDBSIM = EEDBSIM ;
CEDBSIM.data[0] = A_UNITE(FEDBSIM,mode7,7,GEDBSIM);
 /* line 530: */
FYBBSIM_instrvalue( Val, &HEDBSIM );
CEDBSIM.data[1] = A_UNITE(IEDBSIM,mode7,7,HEDBSIM);
 /* line 531: */
MEDBSIM = KEDBSIM ;
CEDBSIM.data[2] = A_UNITE(LEDBSIM,mode7,7,MEDBSIM);
 /* line 532: */
JXBBSIM_instrtype( Type, &NEDBSIM );
CEDBSIM.data[3] = A_UNITE(OEDBSIM,mode7,7,NEDBSIM);
 /* line 533: */
SEDBSIM = QEDBSIM ;
CEDBSIM.data[4] = A_UNITE(REDBSIM,mode7,7,SEDBSIM);
HHCBSIM_instrword( (*BEDBSIM_ans), &TEDBSIM );
CEDBSIM.data[5] = A_UNITE(UEDBSIM,mode7,7,TEDBSIM);
 /* line 534: */
UJBAOSL_oneline( A_HISVEC(VEDBSIM,CEDBSIM,6,A68_52 ), &WEDBSIM );
A_CALLPROC(EXBBSIM_instrument,(WEDBSIM),(WEDBSIM,(EXBBSIM_instrument).nonlocals));
} 
 /* line 535: */
 /* line 536: */
XEDBSIM = BEDBSIM_ans;
} 
A_PROC_EXIT(encode);
return( XEDBSIM );
} 
#undef NL

A68_VOID  AFDBSIM_decode(A68_VC  Rep, A68_165  Type, A68_177  *ReturnedValue)
{ 
A68_177  BFDBSIM;  /* avoid structure result */
A68_177  CFDBSIM_ans;
A68_284  DFDBSIM;  /* collateral clause result */
A68_52  GFDBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  HFDBSIM;  /* YIELD */
A68_VC  IFDBSIM;  /* avoid structure result */
A68_52  JFDBSIM;  /* OPERATORS - mode -> union mode */
A68_52  MFDBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  NFDBSIM;  /* YIELD */
A68_VC  OFDBSIM;  /* avoid structure result */
A68_52  PFDBSIM;  /* OPERATORS - mode -> union mode */
A68_52  SFDBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  TFDBSIM;  /* YIELD */
A68_VC  UFDBSIM;  /* avoid structure result */
A68_52  VFDBSIM;  /* OPERATORS - mode -> union mode */
A68_85  WFDBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  XFDBSIM;  /* avoid structure result */
A68_177  YFDBSIM;  /* clause result */
A_PROC_ENTRY(decode);
 /* line 540: */
 /* line 541: */
{ 
KROASIM_rawdecode( Rep, Type, &BFDBSIM );
CFDBSIM_ans = BFDBSIM;
 /* line 542: */
 /* line 543: */
if ( HXBBSIM_showencoding )
{ 
 /* line 544: */
HFDBSIM = FFDBSIM ;
DFDBSIM.data[0] = A_UNITE(GFDBSIM,mode7,7,HFDBSIM);
 /* line 545: */
HHCBSIM_instrword( Rep, &IFDBSIM );
DFDBSIM.data[1] = A_UNITE(JFDBSIM,mode7,7,IFDBSIM);
 /* line 546: */
NFDBSIM = LFDBSIM ;
DFDBSIM.data[2] = A_UNITE(MFDBSIM,mode7,7,NFDBSIM);
 /* line 547: */
JXBBSIM_instrtype( Type, &OFDBSIM );
DFDBSIM.data[3] = A_UNITE(PFDBSIM,mode7,7,OFDBSIM);
 /* line 548: */
TFDBSIM = RFDBSIM ;
DFDBSIM.data[4] = A_UNITE(SFDBSIM,mode7,7,TFDBSIM);
FYBBSIM_instrvalue( CFDBSIM_ans, &UFDBSIM );
DFDBSIM.data[5] = A_UNITE(VFDBSIM,mode7,7,UFDBSIM);
 /* line 549: */
UJBAOSL_oneline( A_HISVEC(WFDBSIM,DFDBSIM,6,A68_52 ), &XFDBSIM );
A_CALLPROC(EXBBSIM_instrument,(XFDBSIM),(XFDBSIM,(EXBBSIM_instrument).nonlocals));
} 
 /* line 550: */
 /* line 551: */
 /* line 553: */
YFDBSIM = CFDBSIM_ans;
} 
A_PROC_EXIT(decode);
*ReturnedValue = (YFDBSIM);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void XWBBSIM(void)   /* initialise DECS kernel */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259R","./a68files/kernel.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/kerti.m","./mfiles/kesymbols.m","./mfiles/kesignals.m","./mfiles/kebasics.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_43  FXBBSIM;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
YMABSIM();   /* USE kerti */
TCCASIM();   /* USE kesymbols */
NYNASIM();   /* USE kesignals */
JSAASIM();   /* USE kebasics */
PCAAOST();   /* USE osinterface */
JSCAOST();   /* USE basics */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/sim/assoc/./a68files/kernel.a68";
A_config.translation_time = "Tue Apr  4 11:13:56 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "WWBBSIM (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 11:13:56 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS kernel);
UEAALIB_a68config(LGAALIB_configinfo, BXBBSIM);
 /* line 67: */
FXBBSIM.fn.fn_global = DXBBSIM_anonymous;
FXBBSIM.nonlocals = A68_NIL;
EXBBSIM_instrument = (FXBBSIM);
 /* line 76: */
GXBBSIM_showinterface = A68_FALSE;
 /* line 77: */
HXBBSIM_showencoding = A68_FALSE;
 /* line 84: */
 /* line 95: */
 /* line 113: */
 /* line 118: */
 /* line 126: */
 /* line 130: */
 /* line 134: */
 /* line 138: */
 /* line 144: */
 /* line 148: */
 /* line 155: */
 /* line 164: */
 /* line 182: */
 /* line 195: */
 /* line 211: */
 /* line 222: */
 /* line 234: */
 /* line 246: */
 /* line 260: */
 /* line 271: */
 /* line 293: */
 /* line 294: */
 /* line 295: */
 /* line 302: */
 /* line 310: */
 /* line 320: */
 /* line 328: */
 /* line 337: */
 /* line 346: */
 /* line 356: */
 /* line 366: */
 /* line 374: */
 /* line 384: */
 /* line 393: */
 /* line 404: */
 /* line 416: */
 /* line 426: */
 /* line 436: */
 /* line 450: */
 /* line 460: */
 /* line 477: */
 /* line 494: */
 /* line 511: */
 /* line 524: */
 /* line 539: */
 /* line 587: */
A_PROC_EXIT(DECS kernel);
} 
#undef NL
/* end of translation of ./a68files/kernel.a68 */
