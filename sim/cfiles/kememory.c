
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
/* UNAME:JSOASIM */
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
struct A68t160 ;

A_PROCEDURE(A68_CHAR ,A68t159,(struct A68t160 ,struct A68t36 ),(struct A68t160 ,struct A68t36 ,void *));
typedef struct A68t159  A68_159 ;    /* PROC(MODE160,MODE36) CHAR */

A_PROCEDURE(A68_VOID ,A68t160,(A68_VC ,struct A68t36 ),(A68_VC ,struct A68t36 ,void *));
typedef struct A68t160  A68_160 ;    /* PROC(REF MODE26,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t161,(struct A68t160 ,A68_INT ,struct A68t36 ,A68_VC *),(struct A68t160 ,A68_INT ,struct A68t36 ,A68_VC *,void *));
typedef struct A68t161  A68_161 ;    /* PROC(MODE160,INT,MODE36) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t162,(struct A68t160 ,struct A68t36 ),(struct A68t160 ,struct A68t36 ,void *));
typedef struct A68t162  A68_162 ;    /* PROC(MODE160,MODE36) INT */

A_PROCEDURE(A68_VOID ,A68t163,(struct A68t160 ,struct A68t36 ,A68_VC *),(struct A68t160 ,struct A68t36 ,A68_VC *,void *));
typedef struct A68t163  A68_163 ;    /* PROC(MODE160,MODE36) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t164,(struct A68t160 ,struct A68t36 ),(struct A68t160 ,struct A68t36 ,void *));
typedef struct A68t164  A68_164 ;    /* PROC(MODE160,MODE36) BOOL */

A_PROCEDURE(A68_VOID ,A68t165,(A68_CHAR ,struct A68t160 ,struct A68t36 ),(A68_CHAR ,struct A68t160 ,struct A68t36 ,void *));
typedef struct A68t165  A68_165 ;    /* PROC(CHAR,MODE160,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t166,(A68_VC ,struct A68t160 ,struct A68t36 ),(A68_VC ,struct A68t160 ,struct A68t36 ,void *));
typedef struct A68t166  A68_166 ;    /* PROC(REF MODE26,MODE160,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t167,(A68_INT ,struct A68t160 ,struct A68t36 ),(A68_INT ,struct A68t160 ,struct A68t36 ,void *));
typedef struct A68t167  A68_167 ;    /* PROC(INT,MODE160,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t168,(A68_BOOL ,struct A68t160 ,struct A68t36 ),(A68_BOOL ,struct A68t160 ,struct A68t36 ,void *));
typedef struct A68t168  A68_168 ;    /* PROC(BOOL,MODE160,MODE36) VOID */
struct A68t170 ;

A_PROCEDURE(A68_VOID ,A68t169,(struct A68t160 ,struct A68t36 ,struct A68t170 *),(struct A68t160 ,struct A68t36 ,struct A68t170 *,void *));
typedef struct A68t169  A68_169 ;    /* PROC(MODE160,MODE36) MODE170 */
struct A68t178{
A68_INT  Svoid;
A_PAD_INT(PAD_34)
};
typedef struct A68t178  A68_178 ;    /* STRUCT(INT)  */
struct A68t179{
A68_INT  Snull;
A_PAD_INT(PAD_35)
};
typedef struct A68t179  A68_179 ;    /* STRUCT(INT)  */
struct A68t170 { A68_INT mode; union {
struct A68t171 * mode1;
struct A68t172 * mode2;
struct A68t173 * mode3;
struct A68t174 * mode4;
struct A68t175 * mode5;
struct A68t176 * mode6;
struct A68t177 * mode7;
struct A68t178  mode8;
struct A68t179  mode9;
} data; };
typedef struct A68t170  A68_170 ;    /* UNION(REF MODE171,REF MODE172,REF MODE173,REF MODE174,REF MODE175,REF MODE176,REF MODE177,MODE178,MODE179)  */
struct A68t171{
A68_VC  Id;
struct A68t170  T;
struct A68t171 * Rest;
};
typedef struct A68t171  A68_171 ;    /* STRUCT(REF MODE26,MODE170,REF MODE171)  */
struct A68t172{
A68_VC  Id;
A68_INT  Lwb;
A_PAD_INT(PAD_36)
A68_INT  Upb;
A_PAD_INT(PAD_37)
};
typedef struct A68t172  A68_172 ;    /* STRUCT(REF MODE26,INT,INT)  */
struct A68t173{
A68_VC  Id;
A68_VC  Char;
};
typedef struct A68t173  A68_173 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t174{
A68_INT  No;
A_PAD_INT(PAD_38)
struct A68t170  Type;
};
typedef struct A68t174  A68_174 ;    /* STRUCT(INT,MODE170)  */
struct A68t175{
A68_INT  No;
A_PAD_INT(PAD_39)
struct A68t173  T;
};
typedef struct A68t175  A68_175 ;    /* STRUCT(INT,MODE173)  */
struct A68t176{
struct A68t170  From;
struct A68t170  To;
};
typedef struct A68t176  A68_176 ;    /* STRUCT(MODE170,MODE170)  */
struct A68t177{
struct A68t170  T;
struct A68t177 * Rest;
};
typedef struct A68t177  A68_177 ;    /* STRUCT(MODE170,REF MODE177)  */

A_PROCEDURE(A68_VOID ,A68t180,(struct A68t170 ,struct A68t160 ,struct A68t36 ),(struct A68t170 ,struct A68t160 ,struct A68t36 ,void *));
typedef struct A68t180  A68_180 ;    /* PROC(MODE170,MODE160,MODE36) VOID */
struct A68t182 ;

A_PROCEDURE(A68_VOID ,A68t181,(struct A68t160 ,struct A68t36 ,struct A68t182 *),(struct A68t160 ,struct A68t36 ,struct A68t182 *,void *));
typedef struct A68t181  A68_181 ;    /* PROC(MODE160,MODE36) MODE182 */
A_VECTOR(struct A68t184 ,A68t183);
typedef struct A68t183  A68_183 ;    /* VECTOR [] MODE184 */
struct A68t184{
A68_INT  Instoffset;
A_PAD_INT(PAD_40)
A68_INT  Offset;
A_PAD_INT(PAD_41)
A68_INT  Size;
A_PAD_INT(PAD_42)
};
typedef struct A68t184  A68_184 ;    /* STRUCT(INT,INT,INT)  */
struct A68t182{
struct A68t170  Type;
struct A68t183  Blocks;
};
typedef struct A68t182  A68_182 ;    /* STRUCT(MODE170,REF MODE183)  */

A_PROCEDURE(A68_VOID ,A68t185,(struct A68t182 ,struct A68t160 ,struct A68t36 ),(struct A68t182 ,struct A68t160 ,struct A68t36 ,void *));
typedef struct A68t185  A68_185 ;    /* PROC(MODE182,MODE160,MODE36) VOID */
struct A68t187 ;

A_PROCEDURE(A68_VOID ,A68t186,(struct A68t160 ,struct A68t36 ,struct A68t187 *),(struct A68t160 ,struct A68t36 ,struct A68t187 *,void *));
typedef struct A68t186  A68_186 ;    /* PROC(MODE160,MODE36) MODE187 */
struct A68t187{
struct A68t182  Firstcell;
A68_INT  Lwb;
A_PAD_INT(PAD_43)
A68_INT  Ramsize;
A_PAD_INT(PAD_44)
A68_INT  Step;
A_PAD_INT(PAD_45)
};
typedef struct A68t187  A68_187 ;    /* STRUCT(MODE182,INT,INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t188,(struct A68t187 ,struct A68t160 ,struct A68t36 ),(struct A68t187 ,struct A68t160 ,struct A68t36 ,void *));
typedef struct A68t188  A68_188 ;    /* PROC(MODE187,MODE160,MODE36) VOID */
struct A68t190 ;

A_PROCEDURE(A68_VOID ,A68t189,(struct A68t160 ,struct A68t36 ,struct A68t190 *),(struct A68t160 ,struct A68t36 ,struct A68t190 *,void *));
typedef struct A68t189  A68_189 ;    /* PROC(MODE160,MODE36) MODE190 */
struct A68t190{
A68_VC  Uname;
A68_VC  Lname;
A68_INT  Node;
A_PAD_INT(PAD_46)
};
typedef struct A68t190  A68_190 ;    /* STRUCT(REF MODE26,REF MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t191,(struct A68t190 ,struct A68t160 ,struct A68t36 ),(struct A68t190 ,struct A68t160 ,struct A68t36 ,void *));
typedef struct A68t191  A68_191 ;    /* PROC(MODE190,MODE160,MODE36) VOID */
struct A68t193 ;

A_PROCEDURE(A68_VOID ,A68t192,(struct A68t160 ,struct A68t36 ,struct A68t193 *),(struct A68t160 ,struct A68t36 ,struct A68t193 *,void *));
typedef struct A68t192  A68_192 ;    /* PROC(MODE160,MODE36) MODE193 */
A_VECTOR(struct A68t190 ,A68t194);
typedef struct A68t194  A68_194 ;    /* VECTOR [] MODE190 */
struct A68t193{
struct A68t187 * Ram;
struct A68t182  Outputs;
A68_INT  Noinputs;
A_PAD_INT(PAD_47)
struct A68t194  Body;
};
typedef struct A68t193  A68_193 ;    /* STRUCT(REF MODE187,MODE182,INT,REF MODE194)  */

A_PROCEDURE(A68_VOID ,A68t195,(struct A68t193 ,struct A68t160 ,struct A68t36 ),(struct A68t193 ,struct A68t160 ,struct A68t36 ,void *));
typedef struct A68t195  A68_195 ;    /* PROC(MODE193,MODE160,MODE36) VOID */
struct A68t197 ;

A_PROCEDURE(A68_VOID ,A68t196,(struct A68t160 ,struct A68t36 ,struct A68t197 *),(struct A68t160 ,struct A68t36 ,struct A68t197 *,void *));
typedef struct A68t196  A68_196 ;    /* PROC(MODE160,MODE36) MODE197 */
struct A68t197{
A68_INT  Fn;
A_PAD_INT(PAD_48)
A68_INT  Instance;
A_PAD_INT(PAD_49)
};
typedef struct A68t197  A68_197 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t198,(struct A68t197 ,struct A68t160 ,struct A68t36 ),(struct A68t197 ,struct A68t160 ,struct A68t36 ,void *));
typedef struct A68t198  A68_198 ;    /* PROC(MODE197,MODE160,MODE36) VOID */
struct A68t200 ;

A_PROCEDURE(A68_VOID ,A68t199,(struct A68t160 ,struct A68t36 ,struct A68t200 *),(struct A68t160 ,struct A68t36 ,struct A68t200 *,void *));
typedef struct A68t199  A68_199 ;    /* PROC(MODE160,MODE36) MODE200 */
struct A68t200 { A68_INT mode; union {
struct A68t197  mode1;
struct A68t182  mode2;
} data; };
typedef struct A68t200  A68_200 ;    /* UNION(MODE197,MODE182)  */

A_PROCEDURE(A68_VOID ,A68t201,(struct A68t200 ,struct A68t160 ,struct A68t36 ),(struct A68t200 ,struct A68t160 ,struct A68t36 ,void *));
typedef struct A68t201  A68_201 ;    /* PROC(MODE200,MODE160,MODE36) VOID */
struct A68t203 ;

A_PROCEDURE(A68_VOID ,A68t202,(struct A68t160 ,struct A68t36 ,struct A68t203 *),(struct A68t160 ,struct A68t36 ,struct A68t203 *,void *));
typedef struct A68t202  A68_202 ;    /* PROC(MODE160,MODE36) MODE203 */
struct A68t205{
struct A68t182 * Wire;
A68_INT  Instance;
A_PAD_INT(PAD_50)
};
typedef struct A68t205  A68_205 ;    /* STRUCT(REF MODE182,INT)  */
struct A68t204 { A68_INT mode; union {
struct A68t197  mode1;
struct A68t205  mode2;
} data; };
typedef struct A68t204  A68_204 ;    /* UNION(MODE197,MODE205)  */
struct A68t203{
struct A68t204  Node;
A68_INT  Circuit;
A_PAD_INT(PAD_51)
A68_INT  Base;
A_PAD_INT(PAD_52)
};
typedef struct A68t203  A68_203 ;    /* STRUCT(MODE204,INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t206,(struct A68t203 ,struct A68t160 ,struct A68t36 ),(struct A68t203 ,struct A68t160 ,struct A68t36 ,void *));
typedef struct A68t206  A68_206 ;    /* PROC(MODE203,MODE160,MODE36) VOID */
struct A68t207{
A68_INT  Sort;
A_PAD_INT(PAD_53)
A68_INT  Size;
A_PAD_INT(PAD_54)
};
typedef struct A68t207  A68_207 ;    /* STRUCT(INT,INT)  */
struct A68t208{
struct A68t207  Head;
struct A68t208 * Tail;
};
typedef struct A68t208  A68_208 ;    /* STRUCT(MODE207,REF MODE208)  */
struct A68t210{
A68_INT  Lab;
A_PAD_INT(PAD_55)
A68_VC  Tag;
};
typedef struct A68t210  A68_210 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t209{
struct A68t210  Labelint;
struct A68t210  Labelcallinst;
A68_INT  Workspacesize;
A_PAD_INT(PAD_56)
A68_INT  Evalfn;
A_PAD_INT(PAD_57)
A68_INT  History;
A_PAD_INT(PAD_58)
A68_INT  Declid;
A_PAD_INT(PAD_59)
};
typedef struct A68t209  A68_209 ;    /* STRUCT(MODE210,MODE210,INT,INT,INT,INT)  */

A_PROCEDURE(struct A68t209 *,A68t211,(A68_VC ,struct A68t32 ,A68_INT ,struct A68t32 ,struct A68t36 ),(A68_VC ,struct A68t32 ,A68_INT ,struct A68t32 ,struct A68t36 ,void *));
typedef struct A68t211  A68_211 ;    /* PROC(MODE26,MODE32,INT,MODE32,MODE36) REF MODE209 */
struct A68t212 { A68_INT mode; union {
A68_INT  mode1;
struct A68t210  mode2;
} data; };
typedef struct A68t212  A68_212 ;    /* UNION(INT,MODE210,VOID)  */

A_PROCEDURE(A68_VOID ,A68t213,(A68_VC ,struct A68t210 *),(A68_VC ,struct A68t210 *,void *));
typedef struct A68t213  A68_213 ;    /* PROC(MODE26) MODE210 */

A_PROCEDURE(A68_VOID ,A68t214,(struct A68t210 *),(struct A68t210 *,void *));
typedef struct A68t214  A68_214 ;    /* PROC MODE210 */

A_PROCEDURE(A68_VOID ,A68t215,(struct A68t43 ,A68_INT ,struct A68t36 ),(struct A68t43 ,A68_INT ,struct A68t36 ,void *));
typedef struct A68t215  A68_215 ;    /* PROC(MODE43,INT,MODE36) VOID */

A_PROCEDURE(A68_INT ,A68t216,(A68_INT ,A68_INT *),(A68_INT ,A68_INT *,void *));
typedef struct A68t216  A68_216 ;    /* PROC(INT,REF INT) INT */

A_PROCEDURE(A68_VC *,A68t217,(A68_VC ),(A68_VC ,void *));
typedef struct A68t217  A68_217 ;    /* PROC(REF MODE26) REF REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t218,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t218  A68_218 ;    /* PROC(INT,REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t219,(A68_INT ,struct A68t212 ),(A68_INT ,struct A68t212 ,void *));
typedef struct A68t219  A68_219 ;    /* PROC(INT,MODE212) VOID */

A_PROCEDURE(A68_VOID ,A68t220,(A68_INT ,A68_INT ,struct A68t212 ),(A68_INT ,A68_INT ,struct A68t212 ,void *));
typedef struct A68t220  A68_220 ;    /* PROC(INT,INT,MODE212) VOID */

A_PROCEDURE(A68_VOID ,A68t221,(struct A68t210 ),(struct A68t210 ,void *));
typedef struct A68t221  A68_221 ;    /* PROC(MODE210) VOID */

A_PROCEDURE(A68_VOID ,A68t222,(A68_INT ,struct A68t210 ),(A68_INT ,struct A68t210 ,void *));
typedef struct A68t222  A68_222 ;    /* PROC(INT,MODE210) VOID */

A_PROCEDURE(A68_VOID ,A68t223,(struct A68t212 ,struct A68t210 ),(struct A68t212 ,struct A68t210 ,void *));
typedef struct A68t223  A68_223 ;    /* PROC(MODE212,MODE210) VOID */

A_PROCEDURE(A68_VOID ,A68t224,(struct A68t210 ,struct A68t208 *,struct A68t208 *),(struct A68t210 ,struct A68t208 *,struct A68t208 *,void *));
typedef struct A68t224  A68_224 ;    /* PROC(MODE210,REF MODE208,REF MODE208) VOID */

A_PROCEDURE(A68_VOID ,A68t225,(struct A68t210 ,A68_INT ),(struct A68t210 ,A68_INT ,void *));
typedef struct A68t225  A68_225 ;    /* PROC(MODE210,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t226,(A68_INT ,struct A68t36 ,A68_VC *),(A68_INT ,struct A68t36 ,A68_VC *,void *));
typedef struct A68t226  A68_226 ;    /* PROC(INT,MODE36) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t227,(A68_INT ,struct A68t36 ),(A68_INT ,struct A68t36 ,void *));
typedef struct A68t227  A68_227 ;    /* PROC(INT,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t228,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t228  A68_228 ;    /* PROC(REF MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t229,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t229  A68_229 ;    /* PROC(INT,INT) REF MODE26 */
struct A68t231 ;

A_PROCEDURE(A68_VOID ,A68t230,(A68_INT ,struct A68t231 *),(A68_INT ,struct A68t231 *,void *));
typedef struct A68t230  A68_230 ;    /* PROC(INT) MODE231 */
struct A68t231{
A68_INT  Lasttime;
A_PAD_INT(PAD_60)
A68_INT  Interrupted;
A_PAD_INT(PAD_61)
};
typedef struct A68t231  A68_231 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t232,(struct A68t160 ,struct A68t160 ,struct A68t36 ),(struct A68t160 ,struct A68t160 ,struct A68t36 ,void *));
typedef struct A68t232  A68_232 ;    /* PROC(MODE160,MODE160,MODE36) VOID */
struct A68t234 ;

A_PROCEDURE(A68_VOID ,A68t233,(struct A68t234 *),(struct A68t234 *,void *));
typedef struct A68t233  A68_233 ;    /* PROC MODE234 */
struct A68t234{
A68_INT  Codesize;
A_PAD_INT(PAD_62)
A68_INT  Datasize;
A_PAD_INT(PAD_63)
A68_INT  Dynamicstacksize;
A_PAD_INT(PAD_64)
A68_INT  Staticstacksize;
A_PAD_INT(PAD_65)
};
typedef struct A68t234  A68_234 ;    /* STRUCT(INT,INT,INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t235,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t235  A68_235 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t236,(struct A68t144 ),(struct A68t144 ,void *));
typedef struct A68t236  A68_236 ;    /* PROC(MODE144) VOID */

A_PROCEDURE(A68_VOID ,A68t237,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t237  A68_237 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,55,A68t238);
typedef struct A68t238  A68_238 ;    /* STRUCT 55 CHAR */
struct A68t239{
A68_INT  Base;
A_PAD_INT(PAD_66)
A68_INT  Logtotalsize;
A_PAD_INT(PAD_67)
struct A68t32  Freelists;
};
typedef struct A68t239  A68_239 ;    /* STRUCT(INT,INT,MODE32)  */

A_PROCEDURE(A68_VOID ,A68t240,(A68_BOOL ,struct A68t239 *),(A68_BOOL ,struct A68t239 *,void *));
typedef struct A68t240  A68_240 ;    /* PROC(BOOL) MODE239 */
#define A68_241  A68_32 
#define A68t241 A68t32            /* FLEX VECTOR [] INT */
#define A68_242  A68_239 
#define A68t242 A68t239            /* STRUCT(INT,INT,MODE241)  */

A_PROCEDURE(A68_VOID ,A68t243,(struct A68t239 *,A68_INT ,A68_INT ,A68_BOOL ),(struct A68t239 *,A68_INT ,A68_INT ,A68_BOOL ,void *));
typedef struct A68t243  A68_243 ;    /* PROC(REF MODE239,INT,INT,BOOL) VOID */
A_ISTRUCT(A68_CHAR ,26,A68t244);
typedef struct A68t244  A68_244 ;    /* STRUCT 26 CHAR */

A_PROCEDURE(A68_VOID ,A68t245,(struct A68t239 *,A68_INT ,A68_INT ),(struct A68t239 *,A68_INT ,A68_INT ,void *));
typedef struct A68t245  A68_245 ;    /* PROC(REF MODE239,INT,INT) VOID */

A_PROCEDURE(A68_INT ,A68t246,(struct A68t239 *,A68_INT ),(struct A68t239 *,A68_INT ,void *));
typedef struct A68t246  A68_246 ;    /* PROC(REF MODE239,INT) INT */

A_PROCEDURE(A68_VOID ,A68t247,(struct A68t239 *,A68_INT ),(struct A68t239 *,A68_INT ,void *));
typedef struct A68t247  A68_247 ;    /* PROC(REF MODE239,INT) VOID */

A_PROCEDURE(A68_INT ,A68t248,(struct A68t239 *,A68_INT ,A68_INT ),(struct A68t239 *,A68_INT ,A68_INT ,void *));
typedef struct A68t248  A68_248 ;    /* PROC(REF MODE239,INT,INT) INT */

A_PROCEDURE(A68_VOID ,A68t249,(struct A68t160 ,struct A68t36 ),(struct A68t160 ,struct A68t36 ,void *));
typedef struct A68t249  A68_249 ;    /* PROC(MODE160,MODE36) VOID */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from keambasics --- */
extern A68_VOID  TBNASIM_cgextendspace(A68_INT ,struct A68t36 );
extern A68_VOID  ACNASIM_cgpoke(A68_VC ,A68_INT );
extern A68_VOID  HCNASIM_cgpeek(A68_INT ,A68_INT ,A68_VC *);
extern A68_VOID  OCNASIM_cgpokeint(A68_INT ,A68_INT );
extern A68_INT  UCNASIM_cgpeekint(A68_INT );
/* --- End of imports from keambasics --- */


/* --- Imports from kesave --- */
extern A68_INT  LGBASIM_readint(struct A68t160 ,struct A68t36 );
extern A68_VOID  PHBASIM_writeint(A68_INT ,struct A68t160 ,struct A68t36 );
/* --- End of imports from kesave --- */


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
extern A68_VOID  NKDAOST_sysfault(A68_VC );
/* --- End of imports from basics --- */


/* --- Imports from putstrings --- */
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void XDNASIM(void);   /* keambasics */
extern void EFBASIM(void);   /* kesave */
extern void PCAAOST(void);   /* osinterface */
extern void JSCAOST(void);   /* basics */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_238   NSOASIM = {"$Id: kememory.a68,v 34.2 1995/03/29 13:04:53 ella Exp $"}; 
A_GISVEC(A68_VC ,OSOASIM,NSOASIM,55)
#define PSOASIM_logmaxmem 32
#define QSOASIM_overhead 4
#define RSOASIM_freemark 0X80170b80U
#define SSOASIM_usedmark 0X80170bc0U
#define TSOASIM_sizemask 0X1fU
#define USOASIM_nosizemask 0Xffffffe0U
#define VSOASIM_forward 4
#define WSOASIM_backward 8
#define XSOASIM_minuseful 16
#define YSOASIM_logminuseful 4
static A68_240  ZSOASIM_anonymous;
static A68_INT  LTOASIM_empty;
static A68_244   BUOASIM = {"Simulator memory corrupted"}; 
A_GISVEC(A68_VC ,CUOASIM,BUOASIM,26)
#define IUOASIM_check A68_TRUE
#define JUOASIM_nocheck A68_FALSE
static A68_244   OUOASIM = {"Simulator memory corrupted"}; 
A_GISVEC(A68_VC ,PUOASIM,OUOASIM,26)
static A68_239  EXOASIM_managed;

A_STATIC A68_VOID  BTOASIM_generator(A68_BOOL  ATOASIM_anonymous, A68_239  *ReturnedValue);

A_STATIC A68_VOID  DTOASIM_generator(A68_BOOL  CTOASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_INT  NTOASIM_log2(A68_INT  A);

A_STATIC A68_BITS  TTOASIM_xor(A68_BITS  A, A68_BITS  B);

A_STATIC A68_VOID  ZTOASIM_addfreeentry(A68_239 * Area, A68_INT  Logsize, A68_INT  Address, A68_BOOL  Check);

A_STATIC A68_VOID  NUOASIM_removefreeentry(A68_239 * Area, A68_INT  Logsize, A68_INT  Address);

A_STATIC A68_INT  ZUOASIM_findafreeentry(A68_239 * Area, A68_INT  Logsize);

A_STATIC A68_VOID  GVOASIM_initialisearea(A68_239 * Area, A68_INT  Size, A68_INT  Address);

A_STATIC A68_VOID  OVOASIM_liberate(A68_239 * Area, A68_INT  Address);

A_STATIC A68_INT  AWOASIM_reserve(A68_239 * Area, A68_INT  Size);

A_STATIC A68_INT  SWOASIM_extend(A68_239 * Area, A68_INT  Address, A68_INT  Newsize);

A68_VOID  IXOASIM_initialiseammemory(A68_INT  Address, A68_INT  Size);

A68_INT  KXOASIM_allocateammemory(A68_INT  Size);

A68_INT  OXOASIM_extendammemory(A68_INT  Address, A68_INT  Newsize);

A68_VOID  RXOASIM_freeammemory(A68_INT  Address);

A68_VOID  UXOASIM_savememorymanagement(A68_160  Ferry, A68_36  Flt);

A68_VOID  AYOASIM_restorememorymanagement(A68_160  Ferry, A68_36  Flt);

A_STATIC A68_VOID  DTOASIM_generator(A68_BOOL  CTOASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  ETOASIM;  /* clause result */
A68_32  FTOASIM;  /* OPERATORS - dynamic generator */
{ 
FTOASIM.upb = PSOASIM_logmaxmem ;
( CTOASIM_anonymous? A_VLOC(A68_INT ,FTOASIM): A_VHEAP(A68_INT ,FTOASIM) );
ETOASIM = FTOASIM;
} 
*ReturnedValue = (ETOASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  BTOASIM_generator(A68_BOOL  ATOASIM_anonymous, A68_239  *ReturnedValue)
{ 
A68_242  GTOASIM_anonymous;
A68_32  HTOASIM;  /* avoid structure result */
A68_241 * ITOASIM;  /* YIELD */
A68_239  JTOASIM;  /* clause result */
{ 
DTOASIM_generator( ATOASIM_anonymous, &HTOASIM );
ITOASIM = (&((&GTOASIM_anonymous)->Freelists)) ;
(*ITOASIM) = HTOASIM;
JTOASIM = GTOASIM_anonymous;
} 
*ReturnedValue = (JTOASIM);
return;
} 
#undef NL

A_STATIC A68_INT  NTOASIM_log2(A68_INT  A)
{ 
A68_INT  OTOASIM_log;
A68_INT  PTOASIM_p;
A68_INT  QTOASIM;  /* clause result */
A_PROC_ENTRY(log2);
 /* line 130: */
 /* line 131: */
{ 
OTOASIM_log = 0;
 /* line 132: */
PTOASIM_p = 1;
 /* line 133: */
for ( ;; )
{ 
 /* line 134: */
if ( !((PTOASIM_p<A)) ) break;
OTOASIM_log+=1;
 /* line 135: */
 /* line 136: */
PTOASIM_p*=2;
}
 /* line 137: */
 /* line 138: */
QTOASIM = OTOASIM_log;
} 
A_PROC_EXIT(log2);
return( QTOASIM );
} 
#undef NL

A_STATIC A68_BITS  TTOASIM_xor(A68_BITS  A, A68_BITS  B)
{ 
A68_BITS  UTOASIM;  /* clause result */
A_PROC_ENTRY(xor);
UTOASIM = (A68_BITS )((A68_BITS )(A&~B)|(A68_BITS )(B&~A));
A_PROC_EXIT(xor);
return( UTOASIM );
} 
#undef NL
 /* line 157: */

A_STATIC A68_VOID  ZTOASIM_addfreeentry(A68_239 * Area, A68_INT  Logsize, A68_INT  Address, A68_BOOL  Check)
{ 
A68_BOOL  AUOASIM;  /* optbool result */
A68_32  DUOASIM;  /* OPERATORS - simple index */
A68_INT  EUOASIM_existing;
A68_32  FUOASIM;  /* OPERATORS - simple index */
A68_INT * GUOASIM;  /* YIELD */
A68_INT  HUOASIM_next;
A_PROC_ENTRY(addfreeentry);
 /* line 158: */
 /* line 159: */
{ 
AUOASIM = Check;
if ( AUOASIM )
{AUOASIM = ((A68_BITS )((A68_BITS )UCNASIM_cgpeekint(Address)&USOASIM_nosizemask)!=SSOASIM_usedmark);
}
 /* line 160: */
if ( AUOASIM )
{ 
 /* line 161: */
NKDAOST_sysfault(CUOASIM);
} 
 /* line 162: */
OCNASIM_cgpokeint(((A68_INT )RSOASIM_freemark+Logsize), Address);
 /* line 163: */
DUOASIM = (Area->Freelists) ;
EUOASIM_existing = (*(&A_VINDEX(DUOASIM,Logsize)));
 /* line 164: */
 /* line 166: */
if ( (EUOASIM_existing==LTOASIM_empty) )
{ 
FUOASIM = (Area->Freelists) ;
GUOASIM = (&A_VINDEX(FUOASIM,Logsize)) ;
(*GUOASIM) = Address;
 /* line 167: */
OCNASIM_cgpokeint(Address, (Address+VSOASIM_forward));
 /* line 168: */
 /* line 169: */
 /* line 171: */
OCNASIM_cgpokeint(Address, (Address+WSOASIM_backward));
} 
else
{ 
HUOASIM_next = UCNASIM_cgpeekint((EUOASIM_existing+VSOASIM_forward));
 /* line 172: */
OCNASIM_cgpokeint(HUOASIM_next, (Address+VSOASIM_forward));
 /* line 173: */
OCNASIM_cgpokeint(Address, (HUOASIM_next+WSOASIM_backward));
 /* line 174: */
OCNASIM_cgpokeint(EUOASIM_existing, (Address+WSOASIM_backward));
 /* line 175: */
 /* line 176: */
 /* line 177: */
OCNASIM_cgpokeint(Address, (EUOASIM_existing+VSOASIM_forward));
} 
} 
A_PROC_EXIT(addfreeentry);
return;
} 
#undef NL

A_STATIC A68_VOID  NUOASIM_removefreeentry(A68_239 * Area, A68_INT  Logsize, A68_INT  Address)
{ 
A68_INT  QUOASIM_next;
A68_32  RUOASIM;  /* OPERATORS - simple index */
A68_INT * SUOASIM;  /* YIELD */
A68_INT  TUOASIM_prev;
A68_32  UUOASIM;  /* OPERATORS - simple index */
A68_32  VUOASIM;  /* OPERATORS - simple index */
A68_INT * WUOASIM;  /* YIELD */
A_PROC_ENTRY(removefreeentry);
 /* line 189: */
 /* line 190: */
{ 
 /* line 191: */
if ( ((A68_BITS )((A68_BITS )UCNASIM_cgpeekint(Address)&USOASIM_nosizemask)!=RSOASIM_freemark) )
{ 
 /* line 192: */
NKDAOST_sysfault(PUOASIM);
} 
 /* line 193: */
OCNASIM_cgpokeint(((A68_INT )SSOASIM_usedmark+Logsize), Address);
 /* line 194: */
QUOASIM_next = UCNASIM_cgpeekint((Address+VSOASIM_forward));
 /* line 195: */
 /* line 197: */
if ( (QUOASIM_next==Address) )
{ 
 /* line 198: */
 /* line 200: */
RUOASIM = (Area->Freelists) ;
SUOASIM = (&A_VINDEX(RUOASIM,Logsize)) ;
(*SUOASIM) = LTOASIM_empty;
} 
else
{ 
TUOASIM_prev = UCNASIM_cgpeekint((Address+WSOASIM_backward));
 /* line 201: */
OCNASIM_cgpokeint(QUOASIM_next, (TUOASIM_prev+VSOASIM_forward));
 /* line 202: */
OCNASIM_cgpokeint(TUOASIM_prev, (QUOASIM_next+WSOASIM_backward));
 /* line 203: */
 /* line 205: */
UUOASIM = (Area->Freelists) ;
if ( ((*(&A_VINDEX(UUOASIM,Logsize)))==Address) )
{ 
 /* line 206: */
 /* line 207: */
 /* line 208: */
VUOASIM = (Area->Freelists) ;
WUOASIM = (&A_VINDEX(VUOASIM,Logsize)) ;
(*WUOASIM) = QUOASIM_next;
} 
} 
} 
A_PROC_EXIT(removefreeentry);
return;
} 
#undef NL

A_STATIC A68_INT  ZUOASIM_findafreeentry(A68_239 * Area, A68_INT  Logsize)
{ 
A68_32  AVOASIM;  /* OPERATORS - simple index */
A68_INT  BVOASIM_address;
A68_INT  CVOASIM;  /* clause result */
A_PROC_ENTRY(findafreeentry);
 /* line 218: */
 /* line 219: */
{ 
AVOASIM = (Area->Freelists) ;
BVOASIM_address = (*(&A_VINDEX(AVOASIM,Logsize)));
 /* line 220: */
NUOASIM_removefreeentry(Area, Logsize, BVOASIM_address);
 /* line 221: */
 /* line 222: */
CVOASIM = BVOASIM_address;
} 
A_PROC_EXIT(findafreeentry);
return( CVOASIM );
} 
#undef NL

A_STATIC A68_VOID  GVOASIM_initialisearea(A68_239 * Area, A68_INT  Size, A68_INT  Address)
{ 
A68_INT * HVOASIM_list;
A68_32  IVOASIM;  /* forall yield */
A68_INT  JVOASIM;  /* forall loop counter */
A68_INT * KVOASIM;  /* YIELD */
A68_INT * LVOASIM;  /* YIELD */
A_PROC_ENTRY(initialisearea);
 /* line 234: */
 /* line 235: */
{ 
IVOASIM = (Area->Freelists) ;
JVOASIM = IVOASIM.upb -1;
HVOASIM_list = IVOASIM.data;
for (;JVOASIM-- >= 0;
(HVOASIM_list++
) )
{
 /* line 236: */
 /* line 237: */
(*HVOASIM_list) = LTOASIM_empty;
}
 /* line 238: */
KVOASIM = (&(Area->Logtotalsize)) ;
(*KVOASIM) = NTOASIM_log2(Size);
 /* line 239: */
LVOASIM = (&(Area->Base)) ;
(*LVOASIM) = Address;
 /* line 240: */
 /* line 241: */
ZTOASIM_addfreeentry(Area, (*(&(Area->Logtotalsize))), Address, JUOASIM_nocheck);
} 
A_PROC_EXIT(initialisearea);
return;
} 
#undef NL

A_STATIC A68_VOID  OVOASIM_liberate(A68_239 * Area, A68_INT  Address)
{ 
A68_INT  PVOASIM;  /* ADICOPS - ** */
A68_INT  QVOASIM;  /* ADICOPS - ** */
A68_INT  RVOASIM_start;
A68_INT  SVOASIM_logsize;
A68_INT  TVOASIM_buddy;
A68_BOOL  UVOASIM;  /* clause result */
A68_BITS  VVOASIM;  /* SHL */
A68_INT  WVOASIM_tag;
A68_BOOL  XVOASIM;  /* clause result */
A_PROC_ENTRY(liberate);
 /* line 254: */
 /* line 255: */
 /* line 256: */
 /* line 257: */
 /* line 258: */
PVOASIM = 2 ;
QVOASIM = (*(&(Area->Logtotalsize))) ;
if ( ((Address>=(*(&(Area->Base))))&(Address<=((*(&(Area->Base)))+A_LI_POWER(PVOASIM,QVOASIM,(A68_INT ))))) )
{ 
RVOASIM_start = (Address-QSOASIM_overhead);
 /* line 259: */
SVOASIM_logsize = (A68_INT )(A68_BITS )((A68_BITS )UCNASIM_cgpeekint(RVOASIM_start)&TSOASIM_sizemask);
 /* line 260: */
 /* line 261: */
for ( ;; )
{ 
 /* line 262: */
if ( (SVOASIM_logsize==(*(&(Area->Logtotalsize)))) )
{ 
 /* line 263: */
 /* line 264: */
UVOASIM = A68_FALSE;
} 
else
{ 
 /* line 265: */
 /* line 266: */
VVOASIM = 0X1U ;
TVOASIM_buddy = ((*(&(Area->Base)))+(A68_INT )TTOASIM_xor((A68_BITS )(Address-(*(&(Area->Base)))), A_SHL(VVOASIM,SVOASIM_logsize)));
 /* line 267: */
WVOASIM_tag = UCNASIM_cgpeekint(TVOASIM_buddy);
 /* line 268: */
 /* line 269: */
 /* line 270: */
UVOASIM = (WVOASIM_tag==((A68_INT )RSOASIM_freemark+SVOASIM_logsize));
} 
 /* line 274: */
XVOASIM = UVOASIM;
if ( !XVOASIM ) break;
NUOASIM_removefreeentry(Area, SVOASIM_logsize, TVOASIM_buddy);
 /* line 275: */
SVOASIM_logsize+=1;
 /* line 276: */
 /* line 277: */
if ( (TVOASIM_buddy<RVOASIM_start) )
{ 
 /* line 278: */
 /* line 279: */
RVOASIM_start = TVOASIM_buddy;
} 
}
 /* line 280: */
 /* line 281: */
ZTOASIM_addfreeentry(Area, SVOASIM_logsize, RVOASIM_start, IUOASIM_check);
} 
A_PROC_EXIT(liberate);
return;
} 
#undef NL

A_STATIC A68_INT  AWOASIM_reserve(A68_239 * Area, A68_INT  Size)
{ 
A68_INT  BWOASIM_k;
A68_INT  CWOASIM_j;
A68_BOOL  DWOASIM;  /* optbool result */
A68_32  EWOASIM;  /* OPERATORS - simple index */
A68_INT  FWOASIM;  /* ADICOPS - ** */
A68_INT  GWOASIM;  /* ADICOPS - ** */
A68_INT  HWOASIM_extension;
A68_36  IWOASIM;  /* procedure value */
A68_INT  JWOASIM_newpart;
A68_INT * KWOASIM;  /* YIELD */
A68_INT  LWOASIM;  /* clause result */
A68_INT  MWOASIM_address;
A68_INT  OWOASIM;  /* ADICOPS - ** */
A68_INT  NWOASIM_size;
A_PROC_ENTRY(reserve);
 /* line 293: */
 /* line 294: */
{ 
BWOASIM_k = NTOASIM_log2((Size+QSOASIM_overhead));
 /* line 295: */
if ( (BWOASIM_k<YSOASIM_logminuseful) )
{ 
BWOASIM_k = YSOASIM_logminuseful;
} 
 /* line 296: */
CWOASIM_j = BWOASIM_k;
 /* line 297: */
for ( ;; )
{ 
DWOASIM = (CWOASIM_j<=PSOASIM_logmaxmem);
if ( DWOASIM )
{EWOASIM = (Area->Freelists) ;
DWOASIM = ((*(&A_VINDEX(EWOASIM,CWOASIM_j)))==LTOASIM_empty);
}
 /* line 298: */
if ( !(DWOASIM) ) break;
 /* line 299: */
CWOASIM_j+=1;
}
 /* line 300: */
 /* line 306: */
if ( (CWOASIM_j>PSOASIM_logmaxmem) )
{ 
FWOASIM = 2 ;
GWOASIM = (*(&(Area->Logtotalsize))) ;
HWOASIM_extension = A_LI_POWER(FWOASIM,GWOASIM,(A68_INT ));
 /* line 307: */
IWOASIM.fn.fn_global = NKDAOST_sysfault;
IWOASIM.nonlocals = A68_NIL;
TBNASIM_cgextendspace(HWOASIM_extension, IWOASIM);
 /* line 308: */
JWOASIM_newpart = ((*(&(Area->Base)))+HWOASIM_extension);
 /* line 309: */
OCNASIM_cgpokeint(((A68_INT )SSOASIM_usedmark+(*(&(Area->Logtotalsize)))), JWOASIM_newpart);
 /* line 310: */
KWOASIM = (&(Area->Logtotalsize)) ;
(*KWOASIM)+=1;
 /* line 311: */
OVOASIM_liberate(Area, (JWOASIM_newpart+QSOASIM_overhead));
 /* line 312: */
 /* line 313: */
 /* line 316: */
LWOASIM = AWOASIM_reserve(Area, Size);
} 
else
{ 
MWOASIM_address = ZUOASIM_findafreeentry(Area, CWOASIM_j);
 /* line 317: */
OWOASIM = 2 ;
NWOASIM_size = A_LI_POWER(OWOASIM,CWOASIM_j,(A68_INT ));
 /* line 318: */
for ( ;; )
{ 
 /* line 320: */
if ( !((CWOASIM_j>BWOASIM_k)) ) break;
CWOASIM_j-=1;
 /* line 321: */
NWOASIM_size/=2;
 /* line 322: */
 /* line 323: */
ZTOASIM_addfreeentry(Area, CWOASIM_j, (MWOASIM_address+NWOASIM_size), JUOASIM_nocheck);
}
 /* line 324: */
OCNASIM_cgpokeint(((A68_INT )SSOASIM_usedmark+BWOASIM_k), MWOASIM_address);
 /* line 325: */
 /* line 326: */
 /* line 327: */
LWOASIM = (MWOASIM_address+QSOASIM_overhead);
} 
} 
A_PROC_EXIT(reserve);
return( LWOASIM );
} 
#undef NL

A_STATIC A68_INT  SWOASIM_extend(A68_239 * Area, A68_INT  Address, A68_INT  Newsize)
{ 
A68_INT  TWOASIM_sizetocopy;
A68_INT  UWOASIM;  /* ADICOPS - ** */
A68_INT  VWOASIM;  /* ADICOPS - ** */
A68_BOOL  WWOASIM;  /* optbool result */
A68_INT  XWOASIM_logexistingsize;
A68_INT  YWOASIM;  /* ADICOPS - ** */
A68_BOOL  ZWOASIM;  /* clause result */
A68_BOOL  AXOASIM;  /* clause result */
A68_INT  BXOASIM_newaddress;
A68_VC  CXOASIM;  /* avoid structure result */
A68_INT  DXOASIM;  /* clause result */
A_PROC_ENTRY(extend);
 /* line 341: */
 /* line 342: */
{ 
TWOASIM_sizetocopy = Newsize;
 /* line 343: */
 /* line 344: */
 /* line 346: */
UWOASIM = 2 ;
VWOASIM = (*(&(Area->Logtotalsize))) ;
WWOASIM = ((Address<(*(&(Area->Base))))|(Address>((*(&(Area->Base)))+A_LI_POWER(UWOASIM,VWOASIM,(A68_INT )))));
if ( ! WWOASIM )
{{ 
 /* line 347: */
XWOASIM_logexistingsize = (A68_INT )(A68_BITS )((A68_BITS )UCNASIM_cgpeekint((Address-QSOASIM_overhead))&TSOASIM_sizemask);
 /* line 348: */
YWOASIM = 2 ;
TWOASIM_sizetocopy = (A_LI_POWER(YWOASIM,XWOASIM_logexistingsize,(A68_INT ))-QSOASIM_overhead);
 /* line 349: */
 /* line 350: */
ZWOASIM = (TWOASIM_sizetocopy<Newsize);
} 
WWOASIM = ZWOASIM;
}
 /* line 352: */
AXOASIM = WWOASIM;
if ( AXOASIM )
{ 
BXOASIM_newaddress = AWOASIM_reserve(Area, Newsize);
 /* line 353: */
HCNASIM_cgpeek( TWOASIM_sizetocopy, Address, &CXOASIM );
ACNASIM_cgpoke(CXOASIM, BXOASIM_newaddress);
 /* line 354: */
OVOASIM_liberate(Area, Address);
 /* line 355: */
 /* line 356: */
 /* line 359: */
DXOASIM = BXOASIM_newaddress;
} 
else
{ 
DXOASIM = Address;
} 
} 
A_PROC_EXIT(extend);
return( DXOASIM );
} 
#undef NL

A68_VOID  IXOASIM_initialiseammemory(A68_INT  Address, A68_INT  Size)
{ 
A_PROC_ENTRY(initialiseammemory);
 /* line 369: */
GVOASIM_initialisearea((&EXOASIM_managed), Size, Address);
A_PROC_EXIT(initialiseammemory);
return;
} 
#undef NL

A68_INT  KXOASIM_allocateammemory(A68_INT  Size)
{ 
A68_INT  LXOASIM;  /* clause result */
A_PROC_ENTRY(allocateammemory);
 /* line 372: */
LXOASIM = AWOASIM_reserve((&EXOASIM_managed), Size);
A_PROC_EXIT(allocateammemory);
return( LXOASIM );
} 
#undef NL

A68_INT  OXOASIM_extendammemory(A68_INT  Address, A68_INT  Newsize)
{ 
A68_INT  PXOASIM;  /* clause result */
A_PROC_ENTRY(extendammemory);
 /* line 375: */
PXOASIM = SWOASIM_extend((&EXOASIM_managed), Address, Newsize);
A_PROC_EXIT(extendammemory);
return( PXOASIM );
} 
#undef NL

A68_VOID  RXOASIM_freeammemory(A68_INT  Address)
{ 
A_PROC_ENTRY(freeammemory);
 /* line 378: */
OVOASIM_liberate((&EXOASIM_managed), Address);
A_PROC_EXIT(freeammemory);
return;
} 
#undef NL
 /* line 381: */

A68_VOID  UXOASIM_savememorymanagement(A68_160  Ferry, A68_36  Flt)
{ 
A68_INT  VXOASIM_i;
A68_INT  WXOASIM;  /* to part of loop */
A68_32  XXOASIM;  /* OPERATORS - simple index */
A_PROC_ENTRY(savememorymanagement);
 /* line 382: */
 /* line 383: */
{ 
PHBASIM_writeint((*(&((&EXOASIM_managed)->Base))), Ferry, Flt);
 /* line 384: */
PHBASIM_writeint((*(&((&EXOASIM_managed)->Logtotalsize))), Ferry, Flt);
 /* line 385: */
WXOASIM = PSOASIM_logmaxmem;
for ( VXOASIM_i = 1;
VXOASIM_i <= WXOASIM;
VXOASIM_i += 1 )
{ 
 /* line 386: */
 /* line 387: */
XXOASIM = ((&EXOASIM_managed)->Freelists) ;
PHBASIM_writeint((*(&A_VINDEX(XXOASIM,VXOASIM_i))), Ferry, Flt);
}
 /* line 388: */
} 
A_PROC_EXIT(savememorymanagement);
return;
} 
#undef NL
 /* line 391: */

A68_VOID  AYOASIM_restorememorymanagement(A68_160  Ferry, A68_36  Flt)
{ 
A68_INT * BYOASIM;  /* YIELD */
A68_INT * CYOASIM;  /* YIELD */
A68_INT  DYOASIM_i;
A68_INT  EYOASIM;  /* to part of loop */
A68_32  FYOASIM;  /* OPERATORS - simple index */
A68_INT * GYOASIM;  /* YIELD */
A_PROC_ENTRY(restorememorymanagement);
 /* line 392: */
 /* line 393: */
{ 
BYOASIM = (&((&EXOASIM_managed)->Base)) ;
(*BYOASIM) = LGBASIM_readint(Ferry, Flt);
 /* line 394: */
CYOASIM = (&((&EXOASIM_managed)->Logtotalsize)) ;
(*CYOASIM) = LGBASIM_readint(Ferry, Flt);
 /* line 395: */
EYOASIM = PSOASIM_logmaxmem;
for ( DYOASIM_i = 1;
DYOASIM_i <= EYOASIM;
DYOASIM_i += 1 )
{ 
 /* line 396: */
 /* line 397: */
FYOASIM = ((&EXOASIM_managed)->Freelists) ;
GYOASIM = (&A_VINDEX(FYOASIM,DYOASIM_i)) ;
(*GYOASIM) = LGBASIM_readint(Ferry, Flt);
}
 /* line 398: */
 /* line 401: */
} 
A_PROC_EXIT(restorememorymanagement);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void KSOASIM(void)   /* initialise DECS kememory */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259R","./a68files/kememory.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/keambasics.m","./mfiles/kesave.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_240  KTOASIM;  /* procedure value */
A68_239  FXOASIM;  /* avoid structure result */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
XDNASIM();   /* USE keambasics */
EFBASIM();   /* USE kesave */
PCAAOST();   /* USE osinterface */
JSCAOST();   /* USE basics */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/sim/assoc/./a68files/kememory.a68";
A_config.translation_time = "Tue Apr  4 11:08:55 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "JSOASIM (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 11:08:55 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS kememory);
UEAALIB_a68config(LGAALIB_configinfo, OSOASIM);
 /* line 70: */
 /* line 81: */
 /* line 83: */
 /* line 84: */
 /* line 86: */
 /* line 87: */
 /* line 95: */
 /* line 96: */
 /* line 102: */
 /* line 103: */
 /* line 114: */
 /* line 115: */
KTOASIM.fn.fn_global = BTOASIM_generator;
KTOASIM.nonlocals = A68_NIL;
ZSOASIM_anonymous = KTOASIM;
 /* line 123: */
LTOASIM_empty = (-1);
 /* line 129: */
 /* line 143: */
 /* line 144: */
 /* line 156: */
 /* line 182: */
 /* line 183: */
 /* line 188: */
 /* line 217: */
 /* line 233: */
 /* line 253: */
 /* line 292: */
 /* line 340: */
 /* line 366: */
A_CALLPROC(ZSOASIM_anonymous,(A68_TRUE, &FXOASIM),(A68_TRUE, &FXOASIM,(ZSOASIM_anonymous).nonlocals));
EXOASIM_managed = FXOASIM;
 /* line 368: */
 /* line 371: */
 /* line 374: */
 /* line 377: */
 /* line 380: */
 /* line 390: */
 /* line 405: */
A_PROC_EXIT(DECS kememory);
} 
#undef NL
/* end of translation of ./a68files/kememory.a68 */
