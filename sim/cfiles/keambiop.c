
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
/* UNAME:CGQASIM */
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
A68_INT  Int;
A_PAD_INT(PAD_20)
A68_VC  Text;
};
typedef struct A68t92  A68_92 ;    /* STRUCT(INT,REF MODE26)  */

A_PROCEDURE(struct A68t92 *,A68t93,(A68_INT ),(A68_INT ,void *));
typedef struct A68t93  A68_93 ;    /* PROC(INT) REF MODE92 */
struct A68t95 ;
struct A68t96 ;

A_PROCEDURE(A68_INT ,A68t94,(struct A68t95 ,struct A68t96 ),(struct A68t95 ,struct A68t96 ,void *));
typedef struct A68t94  A68_94 ;    /* PROC(MODE95,MODE96) INT */
struct A68t95 { A68_INT mode; union {
struct A68t92 * mode1;
struct A68t101 * mode2;
struct A68t102 * mode3;
struct A68t103 * mode4;
struct A68t104 * mode5;
struct A68t105 * mode6;
struct A68t106 * mode7;
struct A68t107 * mode8;
struct A68t108 * mode9;
struct A68t109 * mode10;
} data; };
typedef struct A68t95  A68_95 ;    /* UNION(REF MODE92,REF MODE101,REF MODE102,REF MODE103,REF MODE104,REF MODE105,REF MODE106,REF MODE107,REF MODE108,REF MODE109)  */
struct A68t97 ;

A_PROCEDURE(A68_VOID ,A68t96,(struct A68t97 ,struct A68t46 ),(struct A68t97 ,struct A68t46 ,void *));
typedef struct A68t96  A68_96 ;    /* PROC(MODE97,MODE46) VOID */
struct A68t97{
A68_INT  Number;
A_PAD_INT(PAD_21)
struct A68t98 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_22)
};
typedef struct A68t97  A68_97 ;    /* STRUCT(INT,REF MODE98,BITS)  */
A_VECTOR(struct A68t100 ,A68t99);
typedef struct A68t99  A68_99 ;    /* VECTOR [] MODE100 */
struct A68t100{
struct A68t97  Msgno;
A68_VC  Text;
};
typedef struct A68t100  A68_100 ;    /* STRUCT(MODE97,REF MODE26)  */
struct A68t98{
A68_VC  Name;
struct A68t99  Messages;
};
typedef struct A68t98  A68_98 ;    /* STRUCT(REF MODE26,REF MODE99)  */
struct A68t101{
A68_INT  Sort;
A_PAD_INT(PAD_23)
struct A68t95  Test;
struct A68t95  Standard;
};
typedef struct A68t101  A68_101 ;    /* STRUCT(INT,MODE95,MODE95)  */
struct A68t102{
A68_INT  Nameno;
A_PAD_INT(PAD_24)
};
typedef struct A68t102  A68_102 ;    /* STRUCT(INT)  */
struct A68t103{
A68_INT  Intno;
A_PAD_INT(PAD_25)
};
typedef struct A68t103  A68_103 ;    /* STRUCT(INT)  */
struct A68t104{
struct A68t95  Left;
A68_INT  Sort;
A_PAD_INT(PAD_26)
struct A68t95  Right;
};
typedef struct A68t104  A68_104 ;    /* STRUCT(MODE95,INT,MODE95)  */
struct A68t105{
A68_INT  Sort;
A_PAD_INT(PAD_27)
struct A68t95  Right;
};
typedef struct A68t105  A68_105 ;    /* STRUCT(INT,MODE95)  */
struct A68t106{
struct A68t95  Cond;
struct A68t95  True;
struct A68t95  False;
};
typedef struct A68t106  A68_106 ;    /* STRUCT(MODE95,MODE95,MODE95)  */
struct A68t107{
struct A68t95  Formula;
};
typedef struct A68t107  A68_107 ;    /* STRUCT(MODE95)  */
struct A68t108{
A68_INT  Macparno;
A_PAD_INT(PAD_28)
};
typedef struct A68t108  A68_108 ;    /* STRUCT(INT)  */
struct A68t109{
A68_INT  Fnull;
A_PAD_INT(PAD_29)
};
typedef struct A68t109  A68_109 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_INT ,A68t110,(struct A68t95 ),(struct A68t95 ,void *));
typedef struct A68t110  A68_110 ;    /* PROC(MODE95) INT */

A_PROCEDURE(A68_VOID ,A68t111,(struct A68t95 ,struct A68t95 *),(struct A68t95 ,struct A68t95 *,void *));
typedef struct A68t111  A68_111 ;    /* PROC(MODE95) MODE95 */
struct A68t113 ;
struct A68t114 ;

A_PROCEDURE(struct A68t113 *,A68t112,(struct A68t114 ),(struct A68t114 ,void *));
typedef struct A68t112  A68_112 ;    /* PROC(MODE114) REF MODE113 */
struct A68t123 { A68_INT mode; union {
struct A68t179 * mode1;
struct A68t222 * mode2;
struct A68t223 * mode3;
struct A68t224 * mode4;
struct A68t225 * mode5;
} data; };
typedef struct A68t123  A68_123 ;    /* UNION(REF MODE179,REF MODE222,REF MODE223,REF MODE224,REF MODE225)  */
struct A68t113{
A68_INT  Sort;
A_PAD_INT(PAD_30)
A68_VC  Attrname;
struct A68t123  Value;
struct A68t127 * Usage;
};
typedef struct A68t113  A68_113 ;    /* STRUCT(INT,REF MODE26,MODE123,REF MODE127)  */
struct A68t114{
A68_INT  Closureno;
A_PAD_INT(PAD_31)
A68_INT  Sort;
A_PAD_INT(PAD_32)
struct A68t115 * Environ;
};
typedef struct A68t114  A68_114 ;    /* STRUCT(INT,INT,REF MODE115)  */
A_VECTOR(struct A68t113 *,A68t116);
typedef struct A68t116  A68_116 ;    /* VECTOR [] REF MODE113 */
A_VECTOR(struct A68t236 *,A68t117);
typedef struct A68t117  A68_117 ;    /* VECTOR [] REF MODE236 */
A_VECTOR(struct A68t230 *,A68t118);
typedef struct A68t118  A68_118 ;    /* VECTOR [] REF MODE230 */
A_VECTOR(struct A68t229 *,A68t119);
typedef struct A68t119  A68_119 ;    /* VECTOR [] REF MODE229 */
A_VECTOR(struct A68t121 *,A68t120);
typedef struct A68t120  A68_120 ;    /* VECTOR [] REF MODE121 */
struct A68t115{
struct A68t116  Attrs;
struct A68t117  Ints;
struct A68t118  Types;
struct A68t119  Consts;
struct A68t120  Fns;
};
typedef struct A68t115  A68_115 ;    /* STRUCT(REF MODE116,REF MODE117,REF MODE118,REF MODE119,REF MODE120)  */
A_VECTOR(struct A68t227 ,A68t122);
typedef struct A68t122  A68_122 ;    /* VECTOR [] MODE227 */
struct A68t179{
A68_INT  Attrno;
A_PAD_INT(PAD_33)
};
typedef struct A68t179  A68_179 ;    /* STRUCT(INT)  */
struct A68t180{
A68_INT  Typeno;
A_PAD_INT(PAD_34)
};
typedef struct A68t180  A68_180 ;    /* STRUCT(INT)  */
struct A68t143{
A68_INT  Constno;
A_PAD_INT(PAD_35)
};
typedef struct A68t143  A68_143 ;    /* STRUCT(INT)  */
struct A68t181{
A68_INT  Fnno;
A_PAD_INT(PAD_36)
};
typedef struct A68t181  A68_181 ;    /* STRUCT(INT)  */
struct A68t228 { A68_INT mode; union {
struct A68t179  mode1;
struct A68t103  mode2;
struct A68t180  mode3;
struct A68t143  mode4;
struct A68t181  mode5;
} data; };
typedef struct A68t228  A68_228 ;    /* UNION(MODE179,MODE103,MODE180,MODE143,MODE181)  */
struct A68t227{
A68_INT  Sort;
A_PAD_INT(PAD_37)
struct A68t228  Spec;
};
typedef struct A68t227  A68_227 ;    /* STRUCT(INT,MODE228)  */
A_VECTOR(struct A68t221 ,A68t125);
typedef struct A68t125  A68_125 ;    /* VECTOR [] MODE221 */
struct A68t208 { A68_INT mode; union {
struct A68t180 * mode1;
struct A68t209 * mode2;
struct A68t210 * mode3;
struct A68t211 * mode4;
struct A68t149 * mode5;
struct A68t212 * mode6;
struct A68t213 * mode7;
struct A68t108 * mode8;
struct A68t214 * mode9;
} data; };
typedef struct A68t208  A68_208 ;    /* UNION(REF MODE180,REF MODE209,REF MODE210,REF MODE211,REF MODE149,REF MODE212,REF MODE213,REF MODE108,REF MODE214)  */
struct A68t221{
A68_VC  Name;
struct A68t208  Type;
struct A68t123  Attr;
};
typedef struct A68t221  A68_221 ;    /* STRUCT(REF MODE26,MODE208,MODE123)  */
struct A68t126 { A68_INT mode; union {
struct A68t128 * mode1;
struct A68t129 * mode2;
struct A68t130 * mode3;
struct A68t131 * mode4;
struct A68t132 * mode5;
struct A68t133 * mode6;
struct A68t134 * mode7;
struct A68t135 * mode8;
struct A68t136 * mode9;
struct A68t137 * mode10;
struct A68t138 * mode11;
struct A68t139 * mode12;
} data; };
typedef struct A68t126  A68_126 ;    /* UNION(REF MODE128,REF MODE129,REF MODE130,REF MODE131,REF MODE132,REF MODE133,REF MODE134,REF MODE135,REF MODE136,REF MODE137,REF MODE138,REF MODE139)  */
struct A68t121{
A68_INT  Sort;
A_PAD_INT(PAD_38)
A68_BOOL  Macro;
A_PAD_BOOL(PAD_39)
A68_VC  Fnname;
struct A68t122  Macspecs;
struct A68t123  Attr;
struct A68t124 * Inputs;
struct A68t124 * Outputs;
struct A68t125  Nametypes;
struct A68t126  Fnbody;
struct A68t127 * Usage;
};
typedef struct A68t121  A68_121 ;    /* STRUCT(INT,BOOL,REF MODE26,REF MODE122,MODE123,REF MODE124,REF MODE124,REF MODE125,MODE126,REF MODE127)  */
struct A68t124{
A68_INT  Nameno;
A_PAD_INT(PAD_40)
struct A68t124 * Rest;
};
typedef struct A68t124  A68_124 ;    /* STRUCT(INT,REF MODE124)  */
struct A68t127{
A68_INT  Contextno;
A_PAD_INT(PAD_41)
A68_INT  Closureno;
A_PAD_INT(PAD_42)
A68_INT  Libv_spec;
A_PAD_INT(PAD_43)
A68_INT  Libv_body;
A_PAD_INT(PAD_44)
A68_BOOL  Import;
A_PAD_BOOL(PAD_45)
A68_BOOL  Export;
A_PAD_BOOL(PAD_46)
};
typedef struct A68t127  A68_127 ;    /* STRUCT(INT,INT,INT,INT,BOOL,BOOL)  */
struct A68t142 { A68_INT mode; union {
struct A68t143 * mode1;
struct A68t144 * mode2;
struct A68t145 * mode3;
struct A68t146 * mode4;
struct A68t147 * mode5;
struct A68t148 * mode6;
struct A68t149 * mode7;
struct A68t150 * mode8;
struct A68t151 * mode9;
struct A68t152 * mode10;
struct A68t153 * mode11;
struct A68t154 * mode12;
struct A68t155 * mode13;
struct A68t156 * mode14;
struct A68t157 * mode15;
struct A68t158 * mode16;
struct A68t159 * mode17;
struct A68t160 * mode18;
struct A68t161 * mode19;
struct A68t162 * mode20;
struct A68t163 * mode21;
struct A68t164 * mode22;
struct A68t165 * mode23;
struct A68t166 * mode24;
struct A68t167 * mode25;
struct A68t168 * mode26;
struct A68t169 * mode27;
struct A68t170 * mode28;
struct A68t171 * mode29;
struct A68t172 * mode30;
struct A68t173 * mode31;
struct A68t174 * mode32;
struct A68t175 * mode33;
struct A68t176 * mode34;
} data; };
typedef struct A68t142  A68_142 ;    /* UNION(REF MODE143,REF MODE144,REF MODE145,REF MODE146,REF MODE147,REF MODE148,REF MODE149,REF MODE150,REF MODE151,REF MODE152,REF MODE153,REF MODE154,REF MODE155,REF MODE156,REF MODE157,REF MODE158,REF MODE159,REF MODE160,REF MODE161,REF MODE162,REF MODE163,REF MODE164,REF MODE165,REF MODE166,REF MODE167,REF MODE168,REF MODE169,REF MODE170,REF MODE171,REF MODE172,REF MODE173,REF MODE174,REF MODE175,REF MODE176)  */
struct A68t128{
struct A68t142  Tag;
};
typedef struct A68t128  A68_128 ;    /* STRUCT(MODE142)  */
A_VECTOR(struct A68t216 ,A68t215);
typedef struct A68t215  A68_215 ;    /* VECTOR [] MODE216 */
struct A68t218{
struct A68t123  Tag;
};
typedef struct A68t218  A68_218 ;    /* STRUCT(MODE123)  */
struct A68t193{
struct A68t95  Tag;
};
typedef struct A68t193  A68_193 ;    /* STRUCT(MODE95)  */
struct A68t219{
struct A68t208  Tag;
};
typedef struct A68t219  A68_219 ;    /* STRUCT(MODE208)  */
struct A68t141{
A68_INT  Fnno;
A_PAD_INT(PAD_47)
struct A68t215  Macparams;
struct A68t123  Attr;
};
typedef struct A68t141  A68_141 ;    /* STRUCT(INT,REF MODE215,MODE123)  */
struct A68t217 { A68_INT mode; union {
struct A68t218  mode1;
struct A68t193  mode2;
struct A68t219  mode3;
struct A68t128  mode4;
struct A68t141  mode5;
} data; };
typedef struct A68t217  A68_217 ;    /* UNION(MODE218,MODE193,MODE219,MODE128,MODE141)  */
struct A68t216{
A68_INT  Sort;
A_PAD_INT(PAD_48)
struct A68t217  Param;
};
typedef struct A68t216  A68_216 ;    /* STRUCT(INT,MODE217)  */
struct A68t129{
A68_BOOL  Biop;
A_PAD_BOOL(PAD_49)
A68_VC  Name;
struct A68t215  Macparams;
};
typedef struct A68t129  A68_129 ;    /* STRUCT(BOOL,REF MODE26,REF MODE215)  */
struct A68t130{
struct A68t95  Output;
};
typedef struct A68t130  A68_130 ;    /* STRUCT(MODE95)  */
struct A68t131{
A68_INT  Reform;
A_PAD_INT(PAD_50)
};
typedef struct A68t131  A68_131 ;    /* STRUCT(INT)  */
struct A68t220{
A68_VC  Context;
A68_VC  Import;
};
typedef struct A68t220  A68_220 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t132{
A68_VC  Name;
A68_INT  Contextno;
A_PAD_INT(PAD_51)
struct A68t220  Ctname;
};
typedef struct A68t132  A68_132 ;    /* STRUCT(REF MODE26,INT,MODE220)  */
struct A68t133{
A68_INT  Sort;
A_PAD_INT(PAD_52)
struct A68t142  Init;
struct A68t95  Ambigtime;
struct A68t142  Ambig;
struct A68t95  Delaytime;
};
typedef struct A68t133  A68_133 ;    /* STRUCT(INT,MODE142,MODE95,MODE142,MODE95)  */
struct A68t134{
struct A68t142  Init;
struct A68t95  Delaytime;
};
typedef struct A68t134  A68_134 ;    /* STRUCT(MODE142,MODE95)  */
struct A68t135{
struct A68t142  Init;
};
typedef struct A68t135  A68_135 ;    /* STRUCT(MODE142)  */
struct A68t136{
A68_INT  Sort;
A_PAD_INT(PAD_53)
struct A68t95  Interval;
struct A68t142  Init;
struct A68t95  Skew;
};
typedef struct A68t136  A68_136 ;    /* STRUCT(INT,MODE95,MODE142,MODE95)  */
struct A68t137{
A68_BOOL  Faster;
A_PAD_BOOL(PAD_54)
A68_INT  Sort;
A_PAD_INT(PAD_55)
struct A68t141  Inst;
struct A68t95  Scale;
struct A68t142  Init;
struct A68t95  Skew;
};
typedef struct A68t137  A68_137 ;    /* STRUCT(BOOL,INT,MODE141,MODE95,MODE142,MODE95)  */
struct A68t138{
struct A68t140 * Joincheck;
A68_BOOL  Check;
A_PAD_BOOL(PAD_56)
struct A68t126  Fnbody;
};
typedef struct A68t138  A68_138 ;    /* STRUCT(REF MODE140,BOOL,MODE126)  */
struct A68t139{
A68_INT  Bodynull;
A_PAD_INT(PAD_57)
};
typedef struct A68t139  A68_139 ;    /* STRUCT(INT)  */
struct A68t140{
A68_INT  Int;
A_PAD_INT(PAD_58)
struct A68t140 * Rest;
};
typedef struct A68t140  A68_140 ;    /* STRUCT(INT,REF MODE140)  */
struct A68t144{
A68_INT  Typeno;
A_PAD_INT(PAD_59)
A68_INT  Primno;
A_PAD_INT(PAD_60)
};
typedef struct A68t144  A68_144 ;    /* STRUCT(INT,INT)  */
struct A68t145{
A68_INT  Typeno;
A_PAD_INT(PAD_61)
struct A68t95  Index;
};
typedef struct A68t145  A68_145 ;    /* STRUCT(INT,MODE95)  */
struct A68t146{
struct A68t208  Querytype;
};
typedef struct A68t146  A68_146 ;    /* STRUCT(MODE208)  */
struct A68t147{
A68_INT  Typeno;
A_PAD_INT(PAD_62)
struct A68t32  String;
};
typedef struct A68t147  A68_147 ;    /* STRUCT(INT,REF MODE32)  */
struct A68t148{
A68_INT  Cvoid;
A_PAD_INT(PAD_63)
};
typedef struct A68t148  A68_148 ;    /* STRUCT(INT)  */
struct A68t149{
struct A68t208  Type;
};
typedef struct A68t149  A68_149 ;    /* STRUCT(MODE208)  */
struct A68t207{
struct A68t95  Lwb;
struct A68t95  Upb;
};
typedef struct A68t207  A68_207 ;    /* STRUCT(MODE95,MODE95)  */
struct A68t150{
A68_INT  Typeno;
A_PAD_INT(PAD_64)
struct A68t207  Range;
};
typedef struct A68t150  A68_150 ;    /* STRUCT(INT,MODE207)  */
struct A68t151{
A68_INT  Typeno;
A_PAD_INT(PAD_65)
A68_INT  Firstno;
A_PAD_INT(PAD_66)
A68_INT  Lastno;
A_PAD_INT(PAD_67)
};
typedef struct A68t151  A68_151 ;    /* STRUCT(INT,INT,INT)  */
struct A68t152{
struct A68t142  Alt;
struct A68t152 * Rest;
};
typedef struct A68t152  A68_152 ;    /* STRUCT(MODE142,REF MODE152)  */
struct A68t153{
A68_INT  Sort;
A_PAD_INT(PAD_68)
A68_INT  Nameno;
A_PAD_INT(PAD_69)
};
typedef struct A68t153  A68_153 ;    /* STRUCT(INT,INT)  */
struct A68t154{
struct A68t142  Sink;
struct A68t142  Source;
};
typedef struct A68t154  A68_154 ;    /* STRUCT(MODE142,MODE142)  */
struct A68t155{
A68_INT  Typeno;
A_PAD_INT(PAD_70)
A68_INT  Altno;
A_PAD_INT(PAD_71)
struct A68t142  Assoc;
};
typedef struct A68t155  A68_155 ;    /* STRUCT(INT,INT,MODE142)  */
struct A68t156{
struct A68t142  Extract;
A68_INT  Typeno;
A_PAD_INT(PAD_72)
A68_INT  Altno;
A_PAD_INT(PAD_73)
};
typedef struct A68t156  A68_156 ;    /* STRUCT(MODE142,INT,INT)  */
struct A68t157{
struct A68t142  Unit;
A68_INT  Fnno;
A_PAD_INT(PAD_74)
A68_INT  Nameno;
A_PAD_INT(PAD_75)
};
typedef struct A68t157  A68_157 ;    /* STRUCT(MODE142,INT,INT)  */
struct A68t158{
struct A68t142  Unit;
struct A68t95  Index;
};
typedef struct A68t158  A68_158 ;    /* STRUCT(MODE142,MODE95)  */
struct A68t159{
struct A68t142  Unit;
struct A68t207  Range;
};
typedef struct A68t159  A68_159 ;    /* STRUCT(MODE142,MODE207)  */
struct A68t160{
struct A68t142  Unit;
struct A68t142  Index;
};
typedef struct A68t160  A68_160 ;    /* STRUCT(MODE142,MODE142)  */
struct A68t161{
struct A68t142  Unit;
struct A68t142  Index;
struct A68t142  From;
};
typedef struct A68t161  A68_161 ;    /* STRUCT(MODE142,MODE142,MODE142)  */
struct A68t162{
struct A68t95  Size;
struct A68t142  Elem;
};
typedef struct A68t162  A68_162 ;    /* STRUCT(MODE95,MODE142)  */
struct A68t163{
struct A68t142  Elem;
struct A68t163 * Rest;
};
typedef struct A68t163  A68_163 ;    /* STRUCT(MODE142,REF MODE163)  */
struct A68t164{
A68_BOOL  String;
A_PAD_BOOL(PAD_76)
A68_INT  Sort;
A_PAD_INT(PAD_77)
struct A68t142  Left;
struct A68t142  Right;
};
typedef struct A68t164  A68_164 ;    /* STRUCT(BOOL,INT,MODE142,MODE142)  */
struct A68t165{
struct A68t141  Inst;
struct A68t142  Right;
};
typedef struct A68t165  A68_165 ;    /* STRUCT(MODE141,MODE142)  */
struct A68t166{
struct A68t142  Left;
struct A68t141  Inst;
struct A68t142  Right;
};
typedef struct A68t166  A68_166 ;    /* STRUCT(MODE142,MODE141,MODE142)  */
struct A68t167{
struct A68t142  Input;
struct A68t206 * Choices;
};
typedef struct A68t167  A68_167 ;    /* STRUCT(MODE142,REF MODE206)  */
struct A68t168{
struct A68t95  Cond;
struct A68t142  True;
struct A68t142  False;
};
typedef struct A68t168  A68_168 ;    /* STRUCT(MODE95,MODE142,MODE142)  */
struct A68t169{
struct A68t95  Repl;
struct A68t142  Body;
};
typedef struct A68t169  A68_169 ;    /* STRUCT(MODE95,MODE142)  */
struct A68t170{
struct A68t194 * Body;
struct A68t142  Output;
};
typedef struct A68t170  A68_170 ;    /* STRUCT(REF MODE194,MODE142)  */
struct A68t171{
struct A68t177 * Body;
struct A68t142  Output;
};
typedef struct A68t171  A68_171 ;    /* STRUCT(REF MODE177,MODE142)  */
struct A68t172{
struct A68t142  Unit;
struct A68t123  Attr;
};
typedef struct A68t172  A68_172 ;    /* STRUCT(MODE142,MODE123)  */
struct A68t173{
struct A68t142  Unit;
struct A68t101  Check;
};
typedef struct A68t173  A68_173 ;    /* STRUCT(MODE142,MODE101)  */
struct A68t174{
struct A68t142  Unit;
};
typedef struct A68t174  A68_174 ;    /* STRUCT(MODE142)  */
struct A68t175{
struct A68t95  Size;
struct A68t142  Char;
};
typedef struct A68t175  A68_175 ;    /* STRUCT(MODE95,MODE142)  */
struct A68t176{
A68_INT  Unull;
A_PAD_INT(PAD_78)
};
typedef struct A68t176  A68_176 ;    /* STRUCT(INT)  */
struct A68t178 { A68_INT mode; union {
struct A68t179  mode1;
struct A68t103  mode2;
struct A68t180  mode3;
struct A68t143  mode4;
struct A68t181  mode5;
struct A68t182 * mode6;
struct A68t183 * mode7;
struct A68t184 * mode8;
struct A68t185 * mode9;
struct A68t186 * mode10;
struct A68t187 * mode11;
struct A68t188 * mode12;
} data; };
typedef struct A68t178  A68_178 ;    /* UNION(MODE179,MODE103,MODE180,MODE143,MODE181,REF MODE182,REF MODE183,REF MODE184,REF MODE185,REF MODE186,REF MODE187,REF MODE188)  */
struct A68t177{
struct A68t178  Step;
struct A68t177 * Rest;
};
typedef struct A68t177  A68_177 ;    /* STRUCT(MODE178,REF MODE177)  */
struct A68t182{
struct A68t95  Cond;
struct A68t191 * Print;
};
typedef struct A68t182  A68_182 ;    /* STRUCT(MODE95,REF MODE191)  */
struct A68t183{
struct A68t95  Cond;
struct A68t191 * Fault;
};
typedef struct A68t183  A68_183 ;    /* STRUCT(MODE95,REF MODE191)  */
struct A68t184{
struct A68t124 * Letnames;
struct A68t142  Unit;
};
typedef struct A68t184  A68_184 ;    /* STRUCT(REF MODE124,MODE142)  */
struct A68t185{
struct A68t189 * Sizes;
struct A68t141  Inst;
struct A68t124 * Makenames;
};
typedef struct A68t185  A68_185 ;    /* STRUCT(REF MODE189,MODE141,REF MODE124)  */
struct A68t186{
struct A68t142  From;
struct A68t142  To;
};
typedef struct A68t186  A68_186 ;    /* STRUCT(MODE142,MODE142)  */
struct A68t187{
struct A68t189 * Repls;
struct A68t190 * Joins;
};
typedef struct A68t187  A68_187 ;    /* STRUCT(REF MODE189,REF MODE190)  */
struct A68t188{
A68_INT  Stepnull;
A_PAD_INT(PAD_79)
};
typedef struct A68t188  A68_188 ;    /* STRUCT(INT)  */
struct A68t189{
struct A68t95  Formula;
struct A68t189 * Rest;
};
typedef struct A68t189  A68_189 ;    /* STRUCT(MODE95,REF MODE189)  */
struct A68t190{
struct A68t186  Join;
struct A68t190 * Rest;
};
typedef struct A68t190  A68_190 ;    /* STRUCT(MODE186,REF MODE190)  */
struct A68t192 { A68_INT mode; union {
A68_VC  mode1;
struct A68t193 * mode2;
} data; };
typedef struct A68t192  A68_192 ;    /* UNION(REF MODE26,REF MODE193)  */
struct A68t191{
struct A68t192  Item;
struct A68t191 * Rest;
};
typedef struct A68t191  A68_191 ;    /* STRUCT(MODE192,REF MODE191)  */
struct A68t195 { A68_INT mode; union {
struct A68t179  mode1;
struct A68t103  mode2;
struct A68t180  mode3;
struct A68t143  mode4;
struct A68t181  mode5;
struct A68t182 * mode6;
struct A68t183 * mode7;
struct A68t196 * mode8;
struct A68t197 * mode9;
struct A68t198 * mode10;
struct A68t199 * mode11;
struct A68t200 * mode12;
struct A68t201 * mode13;
struct A68t202 * mode14;
struct A68t203 * mode15;
struct A68t194 * mode16;
struct A68t204 * mode17;
} data; };
typedef struct A68t195  A68_195 ;    /* UNION(MODE179,MODE103,MODE180,MODE143,MODE181,REF MODE182,REF MODE183,REF MODE196,REF MODE197,REF MODE198,REF MODE199,REF MODE200,REF MODE201,REF MODE202,REF MODE203,REF MODE194,REF MODE204)  */
struct A68t194{
struct A68t195  Step;
struct A68t194 * Rest;
};
typedef struct A68t194  A68_194 ;    /* STRUCT(MODE195,REF MODE194)  */
struct A68t196{
struct A68t184  Seqlet;
};
typedef struct A68t196  A68_196 ;    /* STRUCT(MODE184)  */
struct A68t197{
struct A68t184  Seqvar;
};
typedef struct A68t197  A68_197 ;    /* STRUCT(MODE184)  */
struct A68t198{
struct A68t124 * Pvarnames;
struct A68t142  Init;
};
typedef struct A68t198  A68_198 ;    /* STRUCT(REF MODE124,MODE142)  */
struct A68t199{
struct A68t142  To;
struct A68t142  From;
};
typedef struct A68t199  A68_199 ;    /* STRUCT(MODE142,MODE142)  */
struct A68t200{
struct A68t142  Input;
struct A68t205 * Choices;
};
typedef struct A68t200  A68_200 ;    /* STRUCT(MODE142,REF MODE205)  */
struct A68t201{
struct A68t95  Cond;
struct A68t195  True;
struct A68t195  False;
};
typedef struct A68t201  A68_201 ;    /* STRUCT(MODE95,MODE195,MODE195)  */
struct A68t202{
struct A68t95  Repl;
struct A68t195  Body;
};
typedef struct A68t202  A68_202 ;    /* STRUCT(MODE95,MODE195)  */
struct A68t203{
A68_INT  Seqnull;
A_PAD_INT(PAD_80)
};
typedef struct A68t203  A68_203 ;    /* STRUCT(INT)  */
struct A68t204{
struct A68t95  Size;
struct A68t195  Elem;
};
typedef struct A68t204  A68_204 ;    /* STRUCT(MODE95,MODE195)  */
struct A68t205{
A68_BOOL  Check;
A_PAD_BOOL(PAD_81)
A68_INT  Sort;
A_PAD_INT(PAD_82)
struct A68t142  Test;
struct A68t195  Output;
struct A68t205 * Rest;
};
typedef struct A68t205  A68_205 ;    /* STRUCT(BOOL,INT,MODE142,MODE195,REF MODE205)  */
struct A68t206{
A68_BOOL  Check;
A_PAD_BOOL(PAD_83)
A68_INT  Sort;
A_PAD_INT(PAD_84)
struct A68t142  Test;
struct A68t142  Output;
struct A68t206 * Rest;
};
typedef struct A68t206  A68_206 ;    /* STRUCT(BOOL,INT,MODE142,MODE142,REF MODE206)  */
struct A68t209{
struct A68t95  Size;
struct A68t208  Elem;
};
typedef struct A68t209  A68_209 ;    /* STRUCT(MODE95,MODE208)  */
struct A68t210{
struct A68t208  Elem;
struct A68t210 * Rest;
};
typedef struct A68t210  A68_210 ;    /* STRUCT(MODE208,REF MODE210)  */
struct A68t211{
struct A68t208  From;
struct A68t208  To;
};
typedef struct A68t211  A68_211 ;    /* STRUCT(MODE208,MODE208)  */
struct A68t212{
struct A68t95  Size;
struct A68t208  Char;
};
typedef struct A68t212  A68_212 ;    /* STRUCT(MODE95,MODE208)  */
struct A68t213{
A68_INT  Tvoid;
A_PAD_INT(PAD_85)
};
typedef struct A68t213  A68_213 ;    /* STRUCT(INT)  */
struct A68t214{
A68_INT  Tnull;
A_PAD_INT(PAD_86)
};
typedef struct A68t214  A68_214 ;    /* STRUCT(INT)  */
struct A68t222{
A68_VC  Classname;
struct A68t226 * Strings;
};
typedef struct A68t222  A68_222 ;    /* STRUCT(REF MODE26,REF MODE226)  */
struct A68t223{
struct A68t123  Elem;
struct A68t223 * Rest;
};
typedef struct A68t223  A68_223 ;    /* STRUCT(MODE123,REF MODE223)  */
struct A68t224{
struct A68t123  Attr;
};
typedef struct A68t224  A68_224 ;    /* STRUCT(MODE123)  */
struct A68t225{
A68_INT  Attrnull;
A_PAD_INT(PAD_87)
};
typedef struct A68t225  A68_225 ;    /* STRUCT(INT)  */
struct A68t226{
A68_VC  Id;
struct A68t226 * Rest;
};
typedef struct A68t226  A68_226 ;    /* STRUCT(REF MODE26,REF MODE226)  */
struct A68t229{
A68_INT  Sort;
A_PAD_INT(PAD_88)
A68_VC  Constname;
struct A68t123  Attr;
struct A68t142  Value;
struct A68t127 * Usage;
};
typedef struct A68t229  A68_229 ;    /* STRUCT(INT,REF MODE26,MODE123,MODE142,REF MODE127)  */
A_VECTOR(struct A68t235 ,A68t232);
typedef struct A68t232  A68_232 ;    /* VECTOR [] MODE235 */
struct A68t235{
A68_VC  Altname;
struct A68t208  Assoc;
};
typedef struct A68t235  A68_235 ;    /* STRUCT(REF MODE26,MODE208)  */
struct A68t231 { A68_INT mode; union {
struct A68t232  mode1;
struct A68t233 * mode2;
struct A68t219 * mode3;
struct A68t234 * mode4;
} data; };
typedef struct A68t231  A68_231 ;    /* UNION(REF MODE232,REF MODE233,REF MODE219,REF MODE234)  */
struct A68t230{
A68_INT  Sort;
A_PAD_INT(PAD_89)
A68_VC  Typename;
struct A68t123  Attr;
struct A68t231  Body;
struct A68t127 * Usage;
};
typedef struct A68t230  A68_230 ;    /* STRUCT(INT,REF MODE26,MODE123,MODE231,REF MODE127)  */
struct A68t233{
A68_VC  Tagname;
struct A68t207  Range;
};
typedef struct A68t233  A68_233 ;    /* STRUCT(REF MODE26,MODE207)  */
struct A68t234{
A68_VC  Tagname;
A68_VC  Chars;
};
typedef struct A68t234  A68_234 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t237 { A68_INT mode; union {
struct A68t92 * mode1;
struct A68t101 * mode2;
struct A68t102 * mode3;
struct A68t103 * mode4;
struct A68t104 * mode5;
struct A68t105 * mode6;
struct A68t106 * mode7;
struct A68t107 * mode8;
struct A68t108 * mode9;
struct A68t109 * mode10;
struct A68t207  mode11;
} data; };
typedef struct A68t237  A68_237 ;    /* UNION(REF MODE92,REF MODE101,REF MODE102,REF MODE103,REF MODE104,REF MODE105,REF MODE106,REF MODE107,REF MODE108,REF MODE109,MODE207)  */
struct A68t236{
A68_INT  Sort;
A_PAD_INT(PAD_90)
A68_VC  Intname;
struct A68t123  Attr;
struct A68t237  Value;
struct A68t127 * Usage;
};
typedef struct A68t236  A68_236 ;    /* STRUCT(INT,REF MODE26,MODE123,MODE237,REF MODE127)  */

A_PROCEDURE(struct A68t236 *,A68t238,(struct A68t114 ),(struct A68t114 ,void *));
typedef struct A68t238  A68_238 ;    /* PROC(MODE114) REF MODE236 */

A_PROCEDURE(struct A68t230 *,A68t239,(struct A68t114 ),(struct A68t114 ,void *));
typedef struct A68t239  A68_239 ;    /* PROC(MODE114) REF MODE230 */

A_PROCEDURE(struct A68t229 *,A68t240,(struct A68t114 ),(struct A68t114 ,void *));
typedef struct A68t240  A68_240 ;    /* PROC(MODE114) REF MODE229 */

A_PROCEDURE(struct A68t121 *,A68t241,(struct A68t114 ),(struct A68t114 ,void *));
typedef struct A68t241  A68_241 ;    /* PROC(MODE114) REF MODE121 */

A_PROCEDURE(A68_INT ,A68t242,(struct A68t127 *,struct A68t116 ),(struct A68t127 *,struct A68t116 ,void *));
typedef struct A68t242  A68_242 ;    /* PROC(REF MODE127,REF MODE116) INT */

A_PROCEDURE(A68_INT ,A68t243,(struct A68t127 *,struct A68t117 ),(struct A68t127 *,struct A68t117 ,void *));
typedef struct A68t243  A68_243 ;    /* PROC(REF MODE127,REF MODE117) INT */

A_PROCEDURE(A68_INT ,A68t244,(struct A68t127 *,struct A68t118 ),(struct A68t127 *,struct A68t118 ,void *));
typedef struct A68t244  A68_244 ;    /* PROC(REF MODE127,REF MODE118) INT */

A_PROCEDURE(A68_INT ,A68t245,(struct A68t127 *,struct A68t119 ),(struct A68t127 *,struct A68t119 ,void *));
typedef struct A68t245  A68_245 ;    /* PROC(REF MODE127,REF MODE119) INT */

A_PROCEDURE(A68_INT ,A68t246,(struct A68t127 *,struct A68t120 ),(struct A68t127 *,struct A68t120 ,void *));
typedef struct A68t246  A68_246 ;    /* PROC(REF MODE127,REF MODE120) INT */
struct A68t248 ;

A_PROCEDURE(struct A68t113 *,A68t247,(struct A68t179 ,struct A68t248 *,struct A68t115 *),(struct A68t179 ,struct A68t248 *,struct A68t115 *,void *));
typedef struct A68t247  A68_247 ;    /* PROC(MODE179,REF MODE248,REF MODE115) REF MODE113 */
struct A68t248{
A68_INT  Max_closureno;
A_PAD_INT(PAD_91)
struct A68t249 * Outers;
struct A68t249 * Freelist;
struct A68t250 * Outerslist;
};
typedef struct A68t248  A68_248 ;    /* STRUCT(INT,REF MODE249,REF MODE249,REF MODE250)  */
struct A68t249{
struct A68t114  Outer;
struct A68t249 * Rest;
};
typedef struct A68t249  A68_249 ;    /* STRUCT(MODE114,REF MODE249)  */
A_VECTOR(struct A68t249 ,A68t251);
typedef struct A68t251  A68_251 ;    /* VECTOR [] MODE249 */
struct A68t250{
struct A68t251  Outers;
struct A68t250 * Rest;
};
typedef struct A68t250  A68_250 ;    /* STRUCT(REF MODE251,REF MODE250)  */

A_PROCEDURE(struct A68t236 *,A68t252,(struct A68t103 ,struct A68t248 *,struct A68t115 *),(struct A68t103 ,struct A68t248 *,struct A68t115 *,void *));
typedef struct A68t252  A68_252 ;    /* PROC(MODE103,REF MODE248,REF MODE115) REF MODE236 */

A_PROCEDURE(struct A68t230 *,A68t253,(struct A68t180 ,struct A68t248 *,struct A68t115 *),(struct A68t180 ,struct A68t248 *,struct A68t115 *,void *));
typedef struct A68t253  A68_253 ;    /* PROC(MODE180,REF MODE248,REF MODE115) REF MODE230 */

A_PROCEDURE(struct A68t229 *,A68t254,(struct A68t143 ,struct A68t248 *,struct A68t115 *),(struct A68t143 ,struct A68t248 *,struct A68t115 *,void *));
typedef struct A68t254  A68_254 ;    /* PROC(MODE143,REF MODE248,REF MODE115) REF MODE229 */

A_PROCEDURE(struct A68t121 *,A68t255,(struct A68t181 ,struct A68t248 *,struct A68t115 *),(struct A68t181 ,struct A68t248 *,struct A68t115 *,void *));
typedef struct A68t255  A68_255 ;    /* PROC(MODE181,REF MODE248,REF MODE115) REF MODE121 */

A_PROCEDURE(struct A68t211 *,A68t256,(struct A68t121 *),(struct A68t121 *,void *));
typedef struct A68t256  A68_256 ;    /* PROC(REF MODE121) REF MODE211 */

A_PROCEDURE(A68_VOID ,A68t257,(struct A68t210 *,struct A68t95 *),(struct A68t210 *,struct A68t95 *,void *));
typedef struct A68t257  A68_257 ;    /* PROC(REF MODE210) MODE95 */

A_PROCEDURE(A68_VOID ,A68t258,(struct A68t208 ,struct A68t115 *,struct A68t95 *),(struct A68t208 ,struct A68t115 *,struct A68t95 *,void *));
typedef struct A68t258  A68_258 ;    /* PROC(MODE208,REF MODE115) MODE95 */

A_PROCEDURE(struct A68t121 *,A68t259,(struct A68t121 *,struct A68t115 *,struct A68t115 *),(struct A68t121 *,struct A68t115 *,struct A68t115 *,void *));
typedef struct A68t259  A68_259 ;    /* PROC(REF MODE121,REF MODE115,REF MODE115) REF MODE121 */

A_PROCEDURE(A68_VOID ,A68t260,(struct A68t124 *,struct A68t121 *,struct A68t208 *),(struct A68t124 *,struct A68t121 *,struct A68t208 *,void *));
typedef struct A68t260  A68_260 ;    /* PROC(REF MODE124,REF MODE121) MODE208 */

A_PROCEDURE(A68_INT ,A68t261,(struct A68t124 *),(struct A68t124 *,void *));
typedef struct A68t261  A68_261 ;    /* PROC(REF MODE124) INT */

A_PROCEDURE(A68_INT ,A68t262,(struct A68t124 *,A68_INT ),(struct A68t124 *,A68_INT ,void *));
typedef struct A68t262  A68_262 ;    /* PROC(REF MODE124,INT) INT */

A_PROCEDURE(A68_VOID ,A68t263,(struct A68t142 ,struct A68t121 *,struct A68t115 *,struct A68t208 *),(struct A68t142 ,struct A68t121 *,struct A68t115 *,struct A68t208 *,void *));
typedef struct A68t263  A68_263 ;    /* PROC(MODE142,REF MODE121,REF MODE115) MODE208 */

A_PROCEDURE(A68_VOID ,A68t264,(struct A68t208 ,struct A68t115 *,struct A68t208 *),(struct A68t208 ,struct A68t115 *,struct A68t208 *,void *));
typedef struct A68t264  A68_264 ;    /* PROC(MODE208,REF MODE115) MODE208 */

A_PROCEDURE(A68_BOOL ,A68t265,(struct A68t208 ,struct A68t208 ,struct A68t115 *,struct A68t115 *,A68_BOOL ),(struct A68t208 ,struct A68t208 ,struct A68t115 *,struct A68t115 *,A68_BOOL ,void *));
typedef struct A68t265  A68_265 ;    /* PROC(MODE208,MODE208,REF MODE115,REF MODE115,BOOL) BOOL */

A_PROCEDURE(A68_INT ,A68t266,(struct A68t157 *,struct A68t115 *),(struct A68t157 *,struct A68t115 *,void *));
typedef struct A68t266  A68_266 ;    /* PROC(REF MODE157,REF MODE115) INT */
A_VECTOR(A68_VC ,A68t267);
typedef struct A68t267  A68_267 ;    /* VECTOR [] REF MODE26 */
A_VECTOR(struct A68t249 *,A68t268);
typedef struct A68t268  A68_268 ;    /* VECTOR [] REF MODE249 */

A_PROCEDURE(struct A68t102 *,A68t269,(A68_INT ),(A68_INT ,void *));
typedef struct A68t269  A68_269 ;    /* PROC(INT) REF MODE102 */

A_PROCEDURE(struct A68t103 *,A68t270,(A68_INT ),(A68_INT ,void *));
typedef struct A68t270  A68_270 ;    /* PROC(INT) REF MODE103 */

A_PROCEDURE(struct A68t107 *,A68t271,(struct A68t95 ),(struct A68t95 ,void *));
typedef struct A68t271  A68_271 ;    /* PROC(MODE95) REF MODE107 */

A_PROCEDURE(struct A68t193 *,A68t272,(struct A68t95 ),(struct A68t95 ,void *));
typedef struct A68t272  A68_272 ;    /* PROC(MODE95) REF MODE193 */

A_PROCEDURE(struct A68t180 *,A68t273,(A68_INT ),(A68_INT ,void *));
typedef struct A68t273  A68_273 ;    /* PROC(INT) REF MODE180 */

A_PROCEDURE(struct A68t149 *,A68t274,(struct A68t208 ),(struct A68t208 ,void *));
typedef struct A68t274  A68_274 ;    /* PROC(MODE208) REF MODE149 */

A_PROCEDURE(struct A68t219 *,A68t275,(struct A68t208 ),(struct A68t208 ,void *));
typedef struct A68t275  A68_275 ;    /* PROC(MODE208) REF MODE219 */

A_PROCEDURE(struct A68t143 *,A68t276,(A68_INT ),(A68_INT ,void *));
typedef struct A68t276  A68_276 ;    /* PROC(INT) REF MODE143 */

A_PROCEDURE(struct A68t146 *,A68t277,(struct A68t208 ),(struct A68t208 ,void *));
typedef struct A68t277  A68_277 ;    /* PROC(MODE208) REF MODE146 */

A_PROCEDURE(struct A68t196 *,A68t278,(struct A68t184 ),(struct A68t184 ,void *));
typedef struct A68t278  A68_278 ;    /* PROC(MODE184) REF MODE196 */

A_PROCEDURE(struct A68t197 *,A68t279,(struct A68t184 ),(struct A68t184 ,void *));
typedef struct A68t279  A68_279 ;    /* PROC(MODE184) REF MODE197 */

A_PROCEDURE(struct A68t174 *,A68t280,(struct A68t142 ),(struct A68t142 ,void *));
typedef struct A68t280  A68_280 ;    /* PROC(MODE142) REF MODE174 */

A_PROCEDURE(struct A68t128 *,A68t281,(struct A68t142 ),(struct A68t142 ,void *));
typedef struct A68t281  A68_281 ;    /* PROC(MODE142) REF MODE128 */

A_PROCEDURE(struct A68t181 *,A68t282,(A68_INT ),(A68_INT ,void *));
typedef struct A68t282  A68_282 ;    /* PROC(INT) REF MODE181 */

A_PROCEDURE(struct A68t130 *,A68t283,(struct A68t95 ),(struct A68t95 ,void *));
typedef struct A68t283  A68_283 ;    /* PROC(MODE95) REF MODE130 */

A_PROCEDURE(struct A68t135 *,A68t284,(struct A68t142 ),(struct A68t142 ,void *));
typedef struct A68t284  A68_284 ;    /* PROC(MODE142) REF MODE135 */

A_PROCEDURE(struct A68t108 *,A68t285,(A68_INT ),(A68_INT ,void *));
typedef struct A68t285  A68_285 ;    /* PROC(INT) REF MODE108 */

A_PROCEDURE(struct A68t179 *,A68t286,(A68_INT ),(A68_INT ,void *));
typedef struct A68t286  A68_286 ;    /* PROC(INT) REF MODE179 */

A_PROCEDURE(struct A68t218 *,A68t287,(struct A68t123 ),(struct A68t123 ,void *));
typedef struct A68t287  A68_287 ;    /* PROC(MODE123) REF MODE218 */

A_PROCEDURE(struct A68t224 *,A68t288,(struct A68t123 ),(struct A68t123 ,void *));
typedef struct A68t288  A68_288 ;    /* PROC(MODE123) REF MODE224 */
A_VECTOR(struct A68t226 *,A68t289);
typedef struct A68t289  A68_289 ;    /* VECTOR [] REF MODE226 */
struct A68t291 ;

A_PROCEDURE(A68_VOID ,A68t290,(struct A68t291 ),(struct A68t291 ,void *));
typedef struct A68t290  A68_290 ;    /* PROC(MODE291) VOID */
struct A68t291 { A68_INT mode; union {
A68_VC  mode1;
struct A68t32  mode2;
struct A68t54  mode3;
struct A68t53  mode4;
} data; };
typedef struct A68t291  A68_291 ;    /* UNION(REF MODE26,REF MODE32,REF MODE54,REF MODE53)  */

A_PROCEDURE(A68_INT ,A68t292,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t292  A68_292 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_BITS ,A68t293,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t293  A68_293 ;    /* PROC(BITS,BITS) BITS */
struct A68t295 ;

A_PROCEDURE(A68_VOID ,A68t294,(struct A68t295 ,A68_INT ),(struct A68t295 ,A68_INT ,void *));
typedef struct A68t294  A68_294 ;    /* PROC(MODE295,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t295,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t295  A68_295 ;    /* PROC(CHAR) VOID */
struct A68t297 ;

A_PROCEDURE(A68_INT ,A68t296,(struct A68t297 ),(struct A68t297 ,void *));
typedef struct A68t296  A68_296 ;    /* PROC(MODE297) INT */

A_PROCEDURE(A68_CHAR ,A68t297,(void),(void *));
typedef struct A68t297  A68_297 ;    /* PROC CHAR */

A_PROCEDURE(A68_INT ,A68t298,(A68_VC ,A68_BOOL *),(A68_VC ,A68_BOOL *,void *));
typedef struct A68t298  A68_298 ;    /* PROC(MODE26,REF BOOL) INT */

A_PROCEDURE(A68_INT ,A68t299,(void),(void *));
typedef struct A68t299  A68_299 ;    /* PROC INT */

A_PROCEDURE(A68_INT ,A68t300,(A68_INT ),(A68_INT ,void *));
typedef struct A68t300  A68_300 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_VOID ,A68t301,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t301  A68_301 ;    /* PROC(INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t302,(A68_VC *),(A68_VC *,void *));
typedef struct A68t302  A68_302 ;    /* PROC REF MODE26 */

A_PROCEDURE(A68_INT ,A68t303,(A68_INT ,A68_INT ,A68_BOOL *),(A68_INT ,A68_INT ,A68_BOOL *,void *));
typedef struct A68t303  A68_303 ;    /* PROC(INT,INT,REF BOOL) INT */

A_PROCEDURE(A68_BOOL ,A68t304,(A68_VC ,A68_INT *,struct A68t96 ),(A68_VC ,A68_INT *,struct A68t96 ,void *));
typedef struct A68t304  A68_304 ;    /* PROC(MODE26,REF INT,MODE96) BOOL */

A_PROCEDURE(A68_VOID ,A68t305,(void),(void *));
typedef struct A68t305  A68_305 ;    /* PROC VOID */
struct A68t307 ;
struct A68t308 ;

A_PROCEDURE(A68_INT ,A68t306,(struct A68t307 ,struct A68t308 ),(struct A68t307 ,struct A68t308 ,void *));
typedef struct A68t306  A68_306 ;    /* PROC(MODE307,MODE308) INT */
struct A68t316{
A68_INT  Svoid;
A_PAD_INT(PAD_92)
};
typedef struct A68t316  A68_316 ;    /* STRUCT(INT)  */
struct A68t317{
A68_INT  Snull;
A_PAD_INT(PAD_93)
};
typedef struct A68t317  A68_317 ;    /* STRUCT(INT)  */
struct A68t307 { A68_INT mode; union {
struct A68t309 * mode1;
struct A68t310 * mode2;
struct A68t311 * mode3;
struct A68t312 * mode4;
struct A68t313 * mode5;
struct A68t314 * mode6;
struct A68t315 * mode7;
struct A68t316  mode8;
struct A68t317  mode9;
} data; };
typedef struct A68t307  A68_307 ;    /* UNION(REF MODE309,REF MODE310,REF MODE311,REF MODE312,REF MODE313,REF MODE314,REF MODE315,MODE316,MODE317)  */

A_PROCEDURE(A68_INT ,A68t308,(struct A68t307 ),(struct A68t307 ,void *));
typedef struct A68t308  A68_308 ;    /* PROC(MODE307) INT */
struct A68t309{
A68_VC  Id;
struct A68t307  T;
struct A68t309 * Rest;
};
typedef struct A68t309  A68_309 ;    /* STRUCT(REF MODE26,MODE307,REF MODE309)  */
struct A68t310{
A68_VC  Id;
A68_INT  Lwb;
A_PAD_INT(PAD_94)
A68_INT  Upb;
A_PAD_INT(PAD_95)
};
typedef struct A68t310  A68_310 ;    /* STRUCT(REF MODE26,INT,INT)  */
struct A68t311{
A68_VC  Id;
A68_VC  Char;
};
typedef struct A68t311  A68_311 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t312{
A68_INT  No;
A_PAD_INT(PAD_96)
struct A68t307  Type;
};
typedef struct A68t312  A68_312 ;    /* STRUCT(INT,MODE307)  */
struct A68t313{
A68_INT  No;
A_PAD_INT(PAD_97)
struct A68t311  T;
};
typedef struct A68t313  A68_313 ;    /* STRUCT(INT,MODE311)  */
struct A68t314{
struct A68t307  From;
struct A68t307  To;
};
typedef struct A68t314  A68_314 ;    /* STRUCT(MODE307,MODE307)  */
struct A68t315{
struct A68t307  T;
struct A68t315 * Rest;
};
typedef struct A68t315  A68_315 ;    /* STRUCT(MODE307,REF MODE315)  */

A_PROCEDURE(A68_VOID ,A68t318,(A68_INT ,struct A68t307 *),(A68_INT ,struct A68t307 *,void *));
typedef struct A68t318  A68_318 ;    /* PROC(INT) MODE307 */
struct A68t320 ;
struct A68t321 ;
struct A68t322 ;
struct A68t323 ;

A_PROCEDURE(A68_INT ,A68t319,(A68_VC ,A68_INT ,A68_INT ,A68_INT ,struct A68t320 ,struct A68t320 ,struct A68t321 *,struct A68t322 ,struct A68t323 ),(A68_VC ,A68_INT ,A68_INT ,A68_INT ,struct A68t320 ,struct A68t320 ,struct A68t321 *,struct A68t322 ,struct A68t323 ,void *));
typedef struct A68t319  A68_319 ;    /* PROC(REF MODE26,INT,INT,INT,MODE320,MODE320,REF MODE321,MODE322,MODE323) INT */
A_VECTOR(struct A68t325 ,A68t324);
typedef struct A68t324  A68_324 ;    /* VECTOR [] MODE325 */
struct A68t325{
A68_INT  Instoffset;
A_PAD_INT(PAD_98)
A68_INT  Offset;
A_PAD_INT(PAD_99)
A68_INT  Size;
A_PAD_INT(PAD_100)
};
typedef struct A68t325  A68_325 ;    /* STRUCT(INT,INT,INT)  */
struct A68t320{
struct A68t307  Type;
struct A68t324  Blocks;
};
typedef struct A68t320  A68_320 ;    /* STRUCT(MODE307,REF MODE324)  */
struct A68t321{
struct A68t320  Firstcell;
A68_INT  Lwb;
A_PAD_INT(PAD_101)
A68_INT  Ramsize;
A_PAD_INT(PAD_102)
A68_INT  Step;
A_PAD_INT(PAD_103)
};
typedef struct A68t321  A68_321 ;    /* STRUCT(MODE320,INT,INT,INT)  */
struct A68t322{
A68_INT  Size;
A_PAD_INT(PAD_104)
A68_INT  Offset;
A_PAD_INT(PAD_105)
A68_BITS  Sort;
A_PAD_BITS(PAD_106)
};
typedef struct A68t322  A68_322 ;    /* STRUCT(INT,INT,BITS)  */
struct A68t323{
A68_INT  Workspace;
A_PAD_INT(PAD_107)
A68_INT  History;
A_PAD_INT(PAD_108)
A68_INT  Declid;
A_PAD_INT(PAD_109)
};
typedef struct A68t323  A68_323 ;    /* STRUCT(INT,INT,INT)  */
struct A68t327 ;

A_PROCEDURE(A68_VOID ,A68t326,(A68_INT ,A68_VC ,A68_VC ,struct A68t327 ),(A68_INT ,A68_VC ,A68_VC ,struct A68t327 ,void *));
typedef struct A68t326  A68_326 ;    /* PROC(INT,REF MODE26,REF MODE26,MODE327) VOID */
struct A68t328{
A68_INT  Fn;
A_PAD_INT(PAD_110)
A68_INT  Instance;
A_PAD_INT(PAD_111)
};
typedef struct A68t328  A68_328 ;    /* STRUCT(INT,INT)  */
struct A68t327 { A68_INT mode; union {
struct A68t328  mode1;
struct A68t320  mode2;
} data; };
typedef struct A68t327  A68_327 ;    /* UNION(MODE328,MODE320)  */

A_PROCEDURE(A68_VOID ,A68t329,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t329  A68_329 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t330,(A68_INT ,struct A68t32 ),(A68_INT ,struct A68t32 ,void *));
typedef struct A68t330  A68_330 ;    /* PROC(INT,REF MODE32) VOID */

A_PROCEDURE(A68_VOID ,A68t331,(A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_INT ),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t331  A68_331 ;    /* PROC(INT,INT,INT,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t332,(A68_INT ,struct A68t322 ),(A68_INT ,struct A68t322 ,void *));
typedef struct A68t332  A68_332 ;    /* PROC(INT,MODE322) VOID */

A_PROCEDURE(A68_VOID ,A68t333,(A68_INT ,struct A68t324 ,struct A68t324 ),(A68_INT ,struct A68t324 ,struct A68t324 ,void *));
typedef struct A68t333  A68_333 ;    /* PROC(INT,REF MODE324,REF MODE324) VOID */

A_PROCEDURE(A68_VOID ,A68t334,(A68_VC ,A68_INT ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t334  A68_334 ;    /* PROC(REF MODE26,INT,INT) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t335,(A68_VC ,A68_INT ,A68_INT ),(A68_VC ,A68_INT ,A68_INT ,void *));
typedef struct A68t335  A68_335 ;    /* PROC(REF MODE26,INT,INT) INT */
struct A68t337 ;

A_PROCEDURE(A68_VOID ,A68t336,(A68_INT ,struct A68t337 *),(A68_INT ,struct A68t337 *,void *));
typedef struct A68t336  A68_336 ;    /* PROC(INT) MODE337 */
A_VECTOR(struct A68t339 ,A68t338);
typedef struct A68t338  A68_338 ;    /* VECTOR [] MODE339 */
struct A68t339{
A68_VC  Uname;
A68_VC  Lname;
A68_INT  Node;
A_PAD_INT(PAD_112)
};
typedef struct A68t339  A68_339 ;    /* STRUCT(REF MODE26,REF MODE26,INT)  */
struct A68t337{
struct A68t321 * Ram;
struct A68t320  Outputs;
A68_INT  Noinputs;
A_PAD_INT(PAD_113)
struct A68t338  Body;
};
typedef struct A68t337  A68_337 ;    /* STRUCT(REF MODE321,MODE320,INT,REF MODE338)  */

A_PROCEDURE(A68_VOID ,A68t340,(A68_INT ,struct A68t327 *),(A68_INT ,struct A68t327 *,void *));
typedef struct A68t340  A68_340 ;    /* PROC(INT) MODE327 */
struct A68t342 ;

A_PROCEDURE(A68_VOID ,A68t341,(A68_INT ,A68_INT ,struct A68t342 *),(A68_INT ,A68_INT ,struct A68t342 *,void *));
typedef struct A68t341  A68_341 ;    /* PROC(INT,INT) MODE342 */
struct A68t342{
A68_INT  Lwb;
A_PAD_INT(PAD_114)
A68_INT  Upb;
A_PAD_INT(PAD_115)
};
typedef struct A68t342  A68_342 ;    /* STRUCT(INT,INT)  */
struct A68t344 ;

A_PROCEDURE(A68_VOID ,A68t343,(A68_INT ,A68_INT ,struct A68t344 *),(A68_INT ,A68_INT ,struct A68t344 *,void *));
typedef struct A68t343  A68_343 ;    /* PROC(INT,INT) REF MODE344 */
A_VECTOR(struct A68t345 ,A68t344);
typedef struct A68t344  A68_344 ;    /* VECTOR [] MODE345 */
struct A68t345{
A68_INT  Instoffset;
A_PAD_INT(PAD_116)
A68_INT  Ipno;
A_PAD_INT(PAD_117)
};
typedef struct A68t345  A68_345 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t346,(A68_INT ,struct A68t320 *),(A68_INT ,struct A68t320 *,void *));
typedef struct A68t346  A68_346 ;    /* PROC(INT) MODE320 */

A_PROCEDURE(A68_VOID ,A68t347,(A68_INT ,struct A68t322 *),(A68_INT ,struct A68t322 *,void *));
typedef struct A68t347  A68_347 ;    /* PROC(INT) MODE322 */

A_PROCEDURE(A68_VOID ,A68t348,(A68_INT ,struct A68t323 *),(A68_INT ,struct A68t323 *,void *));
typedef struct A68t348  A68_348 ;    /* PROC(INT) MODE323 */

A_PROCEDURE(A68_VOID ,A68t349,(struct A68t337 ,struct A68t320 *),(struct A68t337 ,struct A68t320 *,void *));
typedef struct A68t349  A68_349 ;    /* PROC(MODE337) MODE320 */
struct A68t351 ;

A_PROCEDURE(A68_VOID ,A68t350,(struct A68t351 ),(struct A68t351 ,void *));
typedef struct A68t350  A68_350 ;    /* PROC(MODE351) VOID */

A_PROCEDURE(A68_BOOL ,A68t351,(A68_VC ),(A68_VC ,void *));
typedef struct A68t351  A68_351 ;    /* PROC(REF MODE26) BOOL */
struct A68t353 ;

A_PROCEDURE(A68_VOID ,A68t352,(struct A68t353 ,struct A68t36 ),(struct A68t353 ,struct A68t36 ,void *));
typedef struct A68t352  A68_352 ;    /* PROC(MODE353,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t353,(A68_VC ,struct A68t36 ),(A68_VC ,struct A68t36 ,void *));
typedef struct A68t353  A68_353 ;    /* PROC(REF MODE26,MODE36) VOID */
struct A68t354{
A68_INT  Sort;
A_PAD_INT(PAD_118)
A68_INT  Size;
A_PAD_INT(PAD_119)
};
typedef struct A68t354  A68_354 ;    /* STRUCT(INT,INT)  */
struct A68t355{
struct A68t354  Head;
struct A68t355 * Tail;
};
typedef struct A68t355  A68_355 ;    /* STRUCT(MODE354,REF MODE355)  */
struct A68t357{
A68_INT  Lab;
A_PAD_INT(PAD_120)
A68_VC  Tag;
};
typedef struct A68t357  A68_357 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t356{
struct A68t357  Labelint;
struct A68t357  Labelcallinst;
A68_INT  Workspacesize;
A_PAD_INT(PAD_121)
A68_INT  Evalfn;
A_PAD_INT(PAD_122)
A68_INT  History;
A_PAD_INT(PAD_123)
A68_INT  Declid;
A_PAD_INT(PAD_124)
};
typedef struct A68t356  A68_356 ;    /* STRUCT(MODE357,MODE357,INT,INT,INT,INT)  */

A_PROCEDURE(struct A68t356 *,A68t358,(A68_VC ,struct A68t32 ,A68_INT ,struct A68t32 ,struct A68t36 ),(A68_VC ,struct A68t32 ,A68_INT ,struct A68t32 ,struct A68t36 ,void *));
typedef struct A68t358  A68_358 ;    /* PROC(MODE26,MODE32,INT,MODE32,MODE36) REF MODE356 */
struct A68t359 { A68_INT mode; union {
A68_INT  mode1;
struct A68t357  mode2;
} data; };
typedef struct A68t359  A68_359 ;    /* UNION(INT,MODE357,VOID)  */

A_PROCEDURE(A68_VOID ,A68t360,(A68_VC ,struct A68t357 *),(A68_VC ,struct A68t357 *,void *));
typedef struct A68t360  A68_360 ;    /* PROC(MODE26) MODE357 */

A_PROCEDURE(A68_VOID ,A68t361,(struct A68t357 *),(struct A68t357 *,void *));
typedef struct A68t361  A68_361 ;    /* PROC MODE357 */

A_PROCEDURE(A68_VOID ,A68t362,(struct A68t43 ,A68_INT ,struct A68t36 ),(struct A68t43 ,A68_INT ,struct A68t36 ,void *));
typedef struct A68t362  A68_362 ;    /* PROC(MODE43,INT,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t363,(struct A68t36 ),(struct A68t36 ,void *));
typedef struct A68t363  A68_363 ;    /* PROC(MODE36) VOID */

A_PROCEDURE(A68_INT ,A68t364,(A68_INT ,A68_INT *),(A68_INT ,A68_INT *,void *));
typedef struct A68t364  A68_364 ;    /* PROC(INT,REF INT) INT */

A_PROCEDURE(A68_VC *,A68t365,(A68_VC ),(A68_VC ,void *));
typedef struct A68t365  A68_365 ;    /* PROC(REF MODE26) REF REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t366,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t366  A68_366 ;    /* PROC(INT,REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t367,(A68_INT ),(A68_INT ,void *));
typedef struct A68t367  A68_367 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_VOID ,A68t368,(A68_INT ,struct A68t359 ),(A68_INT ,struct A68t359 ,void *));
typedef struct A68t368  A68_368 ;    /* PROC(INT,MODE359) VOID */

A_PROCEDURE(A68_VOID ,A68t369,(A68_INT ,A68_INT ,struct A68t359 ),(A68_INT ,A68_INT ,struct A68t359 ,void *));
typedef struct A68t369  A68_369 ;    /* PROC(INT,INT,MODE359) VOID */

A_PROCEDURE(A68_VOID ,A68t370,(struct A68t357 ),(struct A68t357 ,void *));
typedef struct A68t370  A68_370 ;    /* PROC(MODE357) VOID */

A_PROCEDURE(A68_VOID ,A68t371,(A68_INT ,struct A68t357 ),(A68_INT ,struct A68t357 ,void *));
typedef struct A68t371  A68_371 ;    /* PROC(INT,MODE357) VOID */

A_PROCEDURE(A68_VOID ,A68t372,(struct A68t359 ,struct A68t357 ),(struct A68t359 ,struct A68t357 ,void *));
typedef struct A68t372  A68_372 ;    /* PROC(MODE359,MODE357) VOID */

A_PROCEDURE(A68_VOID ,A68t373,(struct A68t357 ,struct A68t355 *,struct A68t355 *),(struct A68t357 ,struct A68t355 *,struct A68t355 *,void *));
typedef struct A68t373  A68_373 ;    /* PROC(MODE357,REF MODE355,REF MODE355) VOID */

A_PROCEDURE(A68_VOID ,A68t374,(struct A68t357 ,A68_INT ),(struct A68t357 ,A68_INT ,void *));
typedef struct A68t374  A68_374 ;    /* PROC(MODE357,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t375,(A68_INT ,struct A68t36 ,A68_VC *),(A68_INT ,struct A68t36 ,A68_VC *,void *));
typedef struct A68t375  A68_375 ;    /* PROC(INT,MODE36) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t376,(A68_INT ,struct A68t36 ),(A68_INT ,struct A68t36 ,void *));
typedef struct A68t376  A68_376 ;    /* PROC(INT,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t377,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t377  A68_377 ;    /* PROC(REF MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t378,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t378  A68_378 ;    /* PROC(INT,INT) REF MODE26 */
struct A68t380 ;

A_PROCEDURE(A68_VOID ,A68t379,(A68_INT ,struct A68t380 *),(A68_INT ,struct A68t380 *,void *));
typedef struct A68t379  A68_379 ;    /* PROC(INT) MODE380 */
struct A68t380{
A68_INT  Lasttime;
A_PAD_INT(PAD_125)
A68_INT  Interrupted;
A_PAD_INT(PAD_126)
};
typedef struct A68t380  A68_380 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t381,(struct A68t353 ,struct A68t353 ,struct A68t36 ),(struct A68t353 ,struct A68t353 ,struct A68t36 ,void *));
typedef struct A68t381  A68_381 ;    /* PROC(MODE353,MODE353,MODE36) VOID */
struct A68t383 ;

A_PROCEDURE(A68_VOID ,A68t382,(struct A68t383 *),(struct A68t383 *,void *));
typedef struct A68t382  A68_382 ;    /* PROC MODE383 */
struct A68t383{
A68_INT  Codesize;
A_PAD_INT(PAD_127)
A68_INT  Datasize;
A_PAD_INT(PAD_128)
A68_INT  Dynamicstacksize;
A_PAD_INT(PAD_129)
A68_INT  Staticstacksize;
A_PAD_INT(PAD_130)
};
typedef struct A68t383  A68_383 ;    /* STRUCT(INT,INT,INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t384,(A68_INT ,A68_INT ,A68_INT ,A68_INT ),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t384  A68_384 ;    /* PROC(INT,INT,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t385,(struct A68t32 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ),(struct A68t32 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t385  A68_385 ;    /* PROC(MODE32,INT,INT,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t386,(struct A68t32 ,struct A68t307 ),(struct A68t32 ,struct A68t307 ,void *));
typedef struct A68t386  A68_386 ;    /* PROC(REF MODE32,MODE307) VOID */

A_PROCEDURE(A68_VOID ,A68t387,(struct A68t32 ,A68_INT ,struct A68t307 ,A68_INT ,A68_INT ,A68_INT ),(struct A68t32 ,A68_INT ,struct A68t307 ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t387  A68_387 ;    /* PROC(MODE32,INT,MODE307,INT,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t388,(struct A68t32 ,struct A68t32 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ),(struct A68t32 ,struct A68t32 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t388  A68_388 ;    /* PROC(MODE32,MODE32,INT,INT,INT,INT) VOID */
struct A68t390 ;

A_PROCEDURE(A68_VOID ,A68t389,(struct A68t390 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ),(struct A68t390 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t389  A68_389 ;    /* PROC(MODE390,INT,INT,INT,INT) VOID */
struct A68t398{
A68_INT  Svvoid;
A_PAD_INT(PAD_131)
};
typedef struct A68t398  A68_398 ;    /* STRUCT(INT)  */
struct A68t399{
A68_INT  Svnull;
A_PAD_INT(PAD_132)
};
typedef struct A68t399  A68_399 ;    /* STRUCT(INT)  */
struct A68t390 { A68_INT mode; union {
struct A68t391 * mode1;
struct A68t392 * mode2;
struct A68t393 * mode3;
struct A68t394 * mode4;
struct A68t395 * mode5;
struct A68t396 * mode6;
struct A68t397 * mode7;
struct A68t398  mode8;
struct A68t399  mode9;
} data; };
typedef struct A68t390  A68_390 ;    /* UNION(REF MODE391,REF MODE392,REF MODE393,REF MODE394,REF MODE395,REF MODE396,REF MODE397,MODE398,MODE399)  */
struct A68t391{
struct A68t307  Type;
};
typedef struct A68t391  A68_391 ;    /* STRUCT(MODE307)  */
struct A68t392{
struct A68t310 * Type;
A68_INT  Value;
A_PAD_INT(PAD_133)
};
typedef struct A68t392  A68_392 ;    /* STRUCT(REF MODE310,INT)  */
struct A68t393{
struct A68t311 * Type;
A68_CHAR  Value;
A_PAD_CHAR(PAD_134)
};
typedef struct A68t393  A68_393 ;    /* STRUCT(REF MODE311,CHAR)  */
struct A68t394{
struct A68t313 * Type;
A68_VC  Value;
};
typedef struct A68t394  A68_394 ;    /* STRUCT(REF MODE313,REF MODE26)  */
struct A68t395{
struct A68t309 * Type;
A68_INT  Tag;
A_PAD_INT(PAD_135)
struct A68t390  Assoc;
};
typedef struct A68t395  A68_395 ;    /* STRUCT(REF MODE309,INT,MODE390)  */
struct A68t396{
struct A68t390  Head;
struct A68t396 * Tail;
};
typedef struct A68t396  A68_396 ;    /* STRUCT(MODE390,REF MODE396)  */
struct A68t397{
struct A68t390  From;
struct A68t390  To;
};
typedef struct A68t397  A68_397 ;    /* STRUCT(MODE390,MODE390)  */

A_PROCEDURE(A68_VOID ,A68t400,(struct A68t390 ,struct A68t307 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ),(struct A68t390 ,struct A68t307 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t400  A68_400 ;    /* PROC(MODE390,MODE307,INT,INT,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t401,(A68_INT ,A68_VC ,struct A68t322 *),(A68_INT ,A68_VC ,struct A68t322 *,void *));
typedef struct A68t401  A68_401 ;    /* PROC(INT,REF MODE26) MODE322 */

A_PROCEDURE(A68_VOID ,A68t402,(struct A68t32 ,A68_VC ,struct A68t322 *),(struct A68t32 ,A68_VC ,struct A68t322 *,void *));
typedef struct A68t402  A68_402 ;    /* PROC(MODE32,MODE26) MODE322 */
struct A68t403 { A68_INT mode; union {
struct A68t309 * mode1;
struct A68t310 * mode2;
struct A68t311 * mode3;
} data; };
typedef struct A68t403  A68_403 ;    /* UNION(REF MODE309,REF MODE310,REF MODE311)  */
struct A68t404{
struct A68t320 * Wire;
A68_INT  Instance;
A_PAD_INT(PAD_136)
};
typedef struct A68t404  A68_404 ;    /* STRUCT(REF MODE320,INT)  */
struct A68t405 { A68_INT mode; union {
struct A68t328  mode1;
struct A68t404  mode2;
} data; };
typedef struct A68t405  A68_405 ;    /* UNION(MODE328,MODE404)  */
struct A68t406{
struct A68t405  Node;
A68_INT  Circuit;
A_PAD_INT(PAD_137)
A68_INT  Base;
A_PAD_INT(PAD_138)
};
typedef struct A68t406  A68_406 ;    /* STRUCT(MODE405,INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t407,(struct A68t390 ,struct A68t307 *),(struct A68t390 ,struct A68t307 *,void *));
typedef struct A68t407  A68_407 ;    /* PROC(MODE390) MODE307 */

A_PROCEDURE(A68_BOOL ,A68t408,(struct A68t307 ,struct A68t307 ),(struct A68t307 ,struct A68t307 ,void *));
typedef struct A68t408  A68_408 ;    /* PROC(MODE307,MODE307) BOOL */

A_PROCEDURE(A68_BOOL ,A68t409,(struct A68t390 ,struct A68t390 ),(struct A68t390 ,struct A68t390 ,void *));
typedef struct A68t409  A68_409 ;    /* PROC(MODE390,MODE390) BOOL */

A_PROCEDURE(A68_BOOL ,A68t410,(struct A68t320 ,struct A68t320 ),(struct A68t320 ,struct A68t320 ,void *));
typedef struct A68t410  A68_410 ;    /* PROC(MODE320,MODE320) BOOL */

A_PROCEDURE(A68_BOOL ,A68t411,(struct A68t328 ,struct A68t328 ),(struct A68t328 ,struct A68t328 ,void *));
typedef struct A68t411  A68_411 ;    /* PROC(MODE328,MODE328) BOOL */

A_PROCEDURE(A68_BOOL ,A68t412,(struct A68t404 ,struct A68t404 ),(struct A68t404 ,struct A68t404 ,void *));
typedef struct A68t412  A68_412 ;    /* PROC(MODE404,MODE404) BOOL */

A_PROCEDURE(A68_BOOL ,A68t413,(struct A68t405 ,struct A68t405 ),(struct A68t405 ,struct A68t405 ,void *));
typedef struct A68t413  A68_413 ;    /* PROC(MODE405,MODE405) BOOL */

A_PROCEDURE(A68_BOOL ,A68t414,(struct A68t406 ,struct A68t406 ),(struct A68t406 ,struct A68t406 ,void *));
typedef struct A68t414  A68_414 ;    /* PROC(MODE406,MODE406) BOOL */

A_PROCEDURE(struct A68t315 *,A68t415,(struct A68t315 *,struct A68t315 *),(struct A68t315 *,struct A68t315 *,void *));
typedef struct A68t415  A68_415 ;    /* PROC(REF MODE315,REF MODE315) REF MODE315 */

A_PROCEDURE(A68_VOID ,A68t416,(struct A68t324 ,struct A68t324 ,struct A68t324 *),(struct A68t324 ,struct A68t324 ,struct A68t324 *,void *));
typedef struct A68t416  A68_416 ;    /* PROC(REF MODE324,REF MODE324) REF MODE324 */

A_PROCEDURE(A68_INT ,A68t417,(A68_VC ),(A68_VC ,void *));
typedef struct A68t417  A68_417 ;    /* PROC(REF MODE26) INT */

A_PROCEDURE(A68_VOID ,A68t418,(struct A68t305 ),(struct A68t305 ,void *));
typedef struct A68t418  A68_418 ;    /* PROC(MODE305) VOID */

A_PROCEDURE(A68_VOID ,A68t419,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t419  A68_419 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,55,A68t420);
typedef struct A68t420  A68_420 ;    /* STRUCT 55 CHAR */

A_PROCEDURE(A68_VOID ,A68t421,(struct A68t32 *,struct A68t32 ),(struct A68t32 *,struct A68t32 ,void *));
typedef struct A68t421  A68_421 ;    /* PROC(REF REF MODE32,REF MODE32) VOID */

A_PROCEDURE(A68_BOOL ,A68t422,(struct A68t309 ),(struct A68t309 ,void *));
typedef struct A68t422  A68_422 ;    /* PROC(MODE309) BOOL */

A_PROCEDURE(A68_BOOL ,A68t423,(struct A68t215 ,A68_INT ),(struct A68t215 ,A68_INT ,void *));
typedef struct A68t423  A68_423 ;    /* PROC(REF MODE215,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t424,(struct A68t215 ,struct A68t32 *),(struct A68t215 ,struct A68t32 *,void *));
typedef struct A68t424  A68_424 ;    /* PROC(REF MODE215) MODE32 */

A_PROCEDURE(A68_INT ,A68t425,(struct A68t215 ),(struct A68t215 ,void *));
typedef struct A68t425  A68_425 ;    /* PROC(REF MODE215) INT */

A_PROCEDURE(A68_BOOL ,A68t426,(struct A68t32 ,struct A68t32 ,struct A68t32 ),(struct A68t32 ,struct A68t32 ,struct A68t32 ,void *));
typedef struct A68t426  A68_426 ;    /* PROC(MODE32,MODE32,MODE32) BOOL */
A_ROW(struct A68t427 ,A68t428,1);
typedef struct A68t428  A68_428 ;    /* [] MODE427 */
struct A68t427{
A68_INT  Output_type_sort;
A_PAD_INT(PAD_139)
A68_BOOL  Limit_save;
A_PAD_BOOL(PAD_140)
struct A68t428  Struct_components;
};
typedef struct A68t427  A68_427 ;    /* STRUCT(INT,BOOL,REF MODE428)  */

A_PROCEDURE(A68_BOOL ,A68t429,(struct A68t427 ,struct A68t307 ),(struct A68t427 ,struct A68t307 ,void *));
typedef struct A68t429  A68_429 ;    /* PROC(MODE427,MODE307) BOOL */

A_PROCEDURE(A68_INT ,A68t430,(A68_INT ,A68_INT ,A68_INT ),(A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t430  A68_430 ;    /* PROC(INT,INT,INT) INT */

A_PROCEDURE(A68_VOID ,A68t431,(struct A68t307 ,struct A68t32 *),(struct A68t307 ,struct A68t32 *,void *));
typedef struct A68t431  A68_431 ;    /* PROC(MODE307) REF MODE32 */
A_ISTRUCT(A68_INT ,2,A68t432);
typedef struct A68t432  A68_432 ;    /* STRUCT 2 INT */

A_PROCEDURE(A68_INT ,A68t433,(struct A68t427 ,struct A68t307 ),(struct A68t427 ,struct A68t307 ,void *));
typedef struct A68t433  A68_433 ;    /* PROC(MODE427,MODE307) INT */
A_VECTOR(struct A68t307 ,A68t434);
typedef struct A68t434  A68_434 ;    /* VECTOR [] MODE307 */

A_PROCEDURE(A68_VOID ,A68t435,(A68_BOOL ,struct A68t434 *),(A68_BOOL ,struct A68t434 *,void *));
typedef struct A68t435  A68_435 ;    /* PROC(BOOL) MODE434 */

A_PROCEDURE(A68_VOID ,A68t436,(struct A68t427 ,A68_INT ,A68_INT ,A68_INT ),(struct A68t427 ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t436  A68_436 ;    /* PROC(MODE427,INT,INT,INT) VOID */

A_PROCEDURE(A68_BOOL ,A68t437,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t437  A68_437 ;    /* PROC(INT,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t438,(struct A68t32 ,struct A68t32 *),(struct A68t32 ,struct A68t32 *,void *));
typedef struct A68t438  A68_438 ;    /* PROC(MODE32) MODE32 */
A_ROW(A68_INT ,A68t439,1);
typedef struct A68t439  A68_439 ;    /* [] INT */

A_PROCEDURE(A68_INT ,A68t440,(struct A68t439 ,struct A68t32 ,A68_INT ),(struct A68t439 ,struct A68t32 ,A68_INT ,void *));
typedef struct A68t440  A68_440 ;    /* PROC(MODE439,MODE32,INT) INT */
struct A68t441 { A68_INT mode; union {
struct A68t309 * mode1;
struct A68t311 * mode2;
} data; };
typedef struct A68t441  A68_441 ;    /* UNION(REF MODE309,REF MODE311)  */
struct A68t442{
struct A68t357  Biop_name;
struct A68t32  Inputs;
A68_INT  No_of_macparams;
A_PAD_INT(PAD_141)
struct A68t427  Output;
A68_BOOL  Pointer;
A_PAD_BOOL(PAD_142)
struct A68t426  Limit_check;
};
typedef struct A68t442  A68_442 ;    /* STRUCT(MODE357,REF MODE32,INT,MODE427,BOOL,MODE426)  */

A_PROCEDURE(A68_VOID ,A68t443,(struct A68t442 ,struct A68t129 ,struct A68t121 ,struct A68t32 ,A68_INT ,struct A68t115 ,struct A68t248 *,struct A68t36 ,A68_INT ),(struct A68t442 ,struct A68t129 ,struct A68t121 ,struct A68t32 ,A68_INT ,struct A68t115 ,struct A68t248 *,struct A68t36 ,A68_INT ,void *));
typedef struct A68t443  A68_443 ;    /* PROC(MODE442,MODE129,MODE121,MODE32,INT,MODE115,REF MODE248,MODE36,INT) VOID */
A_ISTRUCT(A68_CHAR ,31,A68t444);
typedef struct A68t444  A68_444 ;    /* STRUCT 31 CHAR */
A_ISTRUCT(A68_CHAR ,4,A68t445);
typedef struct A68t445  A68_445 ;    /* STRUCT 4 CHAR */
A_ISTRUCT(A68_CHAR ,26,A68t446);
typedef struct A68t446  A68_446 ;    /* STRUCT 26 CHAR */
A_ISTRUCT(A68_CHAR ,33,A68t447);
typedef struct A68t447  A68_447 ;    /* STRUCT 33 CHAR */
A_VECTOR(struct A68t442 ,A68t449);
typedef struct A68t449  A68_449 ;    /* VECTOR [] MODE442 */
struct A68t448{
A68_VC  Overloaded_biop_name;
struct A68t449  Biops;
};
typedef struct A68t448  A68_448 ;    /* STRUCT(REF MODE26,REF MODE449)  */

A_PROCEDURE(A68_BOOL ,A68t450,(struct A68t448 ,struct A68t32 ,struct A68t442 *),(struct A68t448 ,struct A68t32 ,struct A68t442 *,void *));
typedef struct A68t450  A68_450 ;    /* PROC(MODE448,MODE32,REF MODE442) BOOL */

A_PROCEDURE(A68_VOID ,A68t451,(struct A68t448 ,struct A68t129 ,struct A68t121 ,struct A68t32 ,A68_INT ,struct A68t115 ,struct A68t248 *,struct A68t36 ,A68_INT ),(struct A68t448 ,struct A68t129 ,struct A68t121 ,struct A68t32 ,A68_INT ,struct A68t115 ,struct A68t248 *,struct A68t36 ,A68_INT ,void *));
typedef struct A68t451  A68_451 ;    /* PROC(MODE448,MODE129,MODE121,MODE32,INT,MODE115,REF MODE248,MODE36,INT) VOID */
A_VECTOR(struct A68t448 ,A68t453);
typedef struct A68t453  A68_453 ;    /* VECTOR [] MODE448 */

A_PROCEDURE(A68_VOID ,A68t454,(struct A68t448 *),(struct A68t448 *,void *));
typedef struct A68t454  A68_454 ;    /* PROC MODE448 */
A_ISTRUCT(A68_CHAR ,3,A68t455);
typedef struct A68t455  A68_455 ;    /* STRUCT 3 CHAR */

A_PROCEDURE(A68_VOID ,A68t456,(A68_BOOL ,struct A68t449 *),(A68_BOOL ,struct A68t449 *,void *));
typedef struct A68t456  A68_456 ;    /* PROC(BOOL) MODE449 */
A_ISTRUCT(A68_CHAR ,5,A68t457);
typedef struct A68t457  A68_457 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(struct A68t442 ,2,A68t458);
typedef struct A68t458  A68_458 ;    /* STRUCT 2 MODE442 */
A_ISTRUCT(A68_CHAR ,2,A68t459);
typedef struct A68t459  A68_459 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(A68_CHAR ,7,A68t460);
typedef struct A68t460  A68_460 ;    /* STRUCT 7 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t461);
typedef struct A68t461  A68_461 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(struct A68t442 ,3,A68t462);
typedef struct A68t462  A68_462 ;    /* STRUCT 3 MODE442 */
A_ISTRUCT(A68_CHAR ,11,A68t463);
typedef struct A68t463  A68_463 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,13,A68t464);
typedef struct A68t464  A68_464 ;    /* STRUCT 13 CHAR */
A_VECTOR(struct A68t427 ,A68t465);
typedef struct A68t465  A68_465 ;    /* VECTOR [] MODE427 */

A_PROCEDURE(A68_VOID ,A68t466,(A68_BOOL ,struct A68t465 *),(A68_BOOL ,struct A68t465 *,void *));
typedef struct A68t466  A68_466 ;    /* PROC(BOOL) MODE465 */
A_ISTRUCT(struct A68t427 ,2,A68t467);
typedef struct A68t467  A68_467 ;    /* STRUCT 2 MODE427 */
A_ISTRUCT(A68_CHAR ,12,A68t468);
typedef struct A68t468  A68_468 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(A68_CHAR ,14,A68t469);
typedef struct A68t469  A68_469 ;    /* STRUCT 14 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t470);
typedef struct A68t470  A68_470 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(A68_CHAR ,9,A68t471);
typedef struct A68t471  A68_471 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t472);
typedef struct A68t472  A68_472 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(struct A68t427 ,3,A68t473);
typedef struct A68t473  A68_473 ;    /* STRUCT 3 MODE427 */

A_PROCEDURE(A68_VOID ,A68t474,(A68_BOOL ,struct A68t453 *),(A68_BOOL ,struct A68t453 *,void *));
typedef struct A68t474  A68_474 ;    /* PROC(BOOL) MODE453 */
A_ISTRUCT(struct A68t448 ,54,A68t475);
typedef struct A68t475  A68_475 ;    /* STRUCT 54 MODE448 */

A_PROCEDURE(A68_BOOL ,A68t476,(struct A68t453 ,A68_VC ,struct A68t448 *),(struct A68t453 ,A68_VC ,struct A68t448 *,void *));
typedef struct A68t476  A68_476 ;    /* PROC(REF MODE453,REF MODE26,REF MODE448) BOOL */

A_PROCEDURE(A68_VOID ,A68t477,(struct A68t453 ,struct A68t129 ,struct A68t121 ,struct A68t32 ,A68_INT ,struct A68t115 ,struct A68t248 *,struct A68t36 ,A68_INT ),(struct A68t453 ,struct A68t129 ,struct A68t121 ,struct A68t32 ,A68_INT ,struct A68t115 ,struct A68t248 *,struct A68t36 ,A68_INT ,void *));
typedef struct A68t477  A68_477 ;    /* PROC(REF MODE453,MODE129,MODE121,MODE32,INT,MODE115,REF MODE248,MODE36,INT) VOID */
A_ISTRUCT(A68_CHAR ,19,A68t478);
typedef struct A68t478  A68_478 ;    /* STRUCT 19 CHAR */

A_PROCEDURE(A68_VOID ,A68t479,(struct A68t129 ,A68_VC ,struct A68t121 ,struct A68t32 ,A68_INT ,struct A68t115 ,struct A68t248 *,struct A68t36 ,struct A68t322 *),(struct A68t129 ,A68_VC ,struct A68t121 ,struct A68t32 ,A68_INT ,struct A68t115 ,struct A68t248 *,struct A68t36 ,struct A68t322 *,void *));
typedef struct A68t479  A68_479 ;    /* PROC(MODE129,REF MODE26,MODE121,MODE32,INT,MODE115,REF MODE248,MODE36) MODE322 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from kebasics --- */
extern A68_309 * VSAASIM_nilsenum;
extern A68_315 * WSAASIM_nilsst;
extern A68_307  ZSAASIM_nullstype;
extern A68_BOOL  CVAASIM_(struct A68t307 ,struct A68t307 );
/* --- End of imports from kebasics --- */


/* --- Imports from keamstandard --- */
extern A68_357  XHPASIM_oldresultlabel;
extern A68_VOID  DOPASIM_translatestartfunction(A68_VC );
extern A68_VOID  ZOPASIM_translateendfunction(A68_INT ,A68_INT );
/* --- End of imports from keamstandard --- */


/* --- Imports from keambasics --- */
extern A68_359  ONFASIM_indirect;
extern A68_VOID  YLFASIM_label(A68_VC ,A68_357 *);
#define CENASIM_bitsperbyte 8
extern A68_INT  DENASIM_ws;
extern A68_INT  GENASIM_sizeunit;
extern A68_VOID  SSNASIM_amadd(void);
extern A68_VOID  UTNASIM_amneq(void);
extern A68_VOID  QUNASIM_ampushint(A68_INT );
extern A68_VOID  TUNASIM_amdrop(A68_INT );
extern A68_VOID  WUNASIM_amlocal(A68_INT );
extern A68_VOID  AVNASIM_amglobal(A68_INT ,struct A68t359 );
extern A68_VOID  FVNASIM_amstore(A68_INT ,struct A68t359 );
extern A68_VOID  LVNASIM_ambstring(A68_INT ,A68_INT ,struct A68t359 );
extern A68_VOID  QVNASIM_ambstore(A68_INT ,struct A68t359 );
extern A68_VOID  IWNASIM_amjumpno(A68_INT ,struct A68t357 );
extern A68_VOID  NWNASIM_amlabel(A68_INT ,struct A68t357 );
extern A68_VOID  BXNASIM_amcall(A68_INT ,struct A68t357 );
/* --- End of imports from keambasics --- */


/* --- Imports from kesymbols --- */
extern A68_VOID  VGCASIM_lookuptype(A68_INT ,A68_307 *);
extern A68_INT  YGCASIM_lookuptypesize(A68_INT );
#define IHCASIM_combinatorial 0X1U
/* --- End of imports from kesymbols --- */


/* --- Imports from basics --- */
extern A68_VOID  RSCAOST_makeid(A68_VC ,A68_VC *);
/* --- End of imports from basics --- */


/* --- Imports from assmodes --- */
extern A68_215  ABAATRN_nilmacparams;
/* --- End of imports from assmodes --- */


/* --- Imports from modeprocs --- */
extern A68_INT  XOMATRN_int(struct A68t95 );
/* --- End of imports from modeprocs --- */


/* --- Imports from putstrings --- */
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void JSAASIM(void);   /* kebasics */
extern void HYOASIM(void);   /* keamstandard */
extern void XDNASIM(void);   /* keambasics */
extern void TCCASIM(void);   /* kesymbols */
extern void JSCAOST(void);   /* basics */
extern void BAAATRN(void);   /* assmodes */
extern void HNMATRN(void);   /* modeprocs */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_420   GGQASIM = {"$Id: keambiop.a68,v 34.2 1995/03/29 13:04:33 ella Exp $"}; 
A_GISVEC(A68_VC ,HGQASIM,GGQASIM,55)
#define AIQASIM_bs 1
#define BIQASIM_tv 2
#define CIQASIM_ch 3
#define DIQASIM_ee 4
#define EIQASIM_ei 5
#define FIQASIM_ds 6
#define GIQASIM_sr 7
#define HIQASIM_lr 8
#define IIQASIM_struct 10
#define JIQASIM_cs 11
static A68_444   MSQASIM = {"Output size incorrect for BIOP "}; 
static A68_445   NSQASIM = {" in "}; 
A_GISVEC(A68_VC ,OSQASIM,MSQASIM,31)
A_GISVEC(A68_VC ,PSQASIM,NSQASIM,4)
static A68_446   QSQASIM = {"Invalid outputs from BIOP "}; 
static A68_445   RSQASIM = {" in "}; 
A_GISVEC(A68_VC ,SSQASIM,QSQASIM,26)
A_GISVEC(A68_VC ,TSQASIM,RSQASIM,4)
static A68_447   USQASIM = {"Invalid macro parameters to BIOP "}; 
static A68_445   VSQASIM = {" in "}; 
A_GISVEC(A68_VC ,WSQASIM,USQASIM,33)
A_GISVEC(A68_VC ,XSQASIM,VSQASIM,4)
static A68_444   XTQASIM = {"Input types not valid for BIOP "}; 
static A68_445   YTQASIM = {" in "}; 
A_GISVEC(A68_VC ,ZTQASIM,XTQASIM,31)
A_GISVEC(A68_VC ,AUQASIM,YTQASIM,4)
static A68_33  BUQASIM_anonymous;
static A68_455   JUQASIM = {"AND"}; 
A_GISVEC(A68_VC ,KUQASIM,JUQASIM,3)
static A68_457   RUQASIM = {"AND|1"}; 
A_GISVEC(A68_VC ,SUQASIM,RUQASIM,5)
static A68_457   NVQASIM = {"AND|2"}; 
A_GISVEC(A68_VC ,OVQASIM,NVQASIM,5)
static A68_459   LWQASIM = {"OR"}; 
A_GISVEC(A68_VC ,MWQASIM,LWQASIM,2)
static A68_445   TWQASIM = {"OR|1"}; 
A_GISVEC(A68_VC ,UWQASIM,TWQASIM,4)
static A68_445   PXQASIM = {"OR|2"}; 
A_GISVEC(A68_VC ,QXQASIM,PXQASIM,4)
static A68_455   NYQASIM = {"NOT"}; 
A_GISVEC(A68_VC ,OYQASIM,NYQASIM,3)
static A68_457   VYQASIM = {"NOT|1"}; 
A_GISVEC(A68_VC ,WYQASIM,VYQASIM,5)
static A68_457   OZQASIM = {"NOT|2"}; 
A_GISVEC(A68_VC ,PZQASIM,OZQASIM,5)
static A68_455   LARASIM = {"XOR"}; 
A_GISVEC(A68_VC ,MARASIM,LARASIM,3)
static A68_457   TARASIM = {"XOR|1"}; 
A_GISVEC(A68_VC ,UARASIM,TARASIM,5)
static A68_457   PBRASIM = {"XOR|2"}; 
A_GISVEC(A68_VC ,QBRASIM,PBRASIM,5)
static A68_459   NCRASIM = {"SL"}; 
A_GISVEC(A68_VC ,OCRASIM,NCRASIM,2)
static A68_445   VCRASIM = {"SL|1"}; 
A_GISVEC(A68_VC ,WCRASIM,VCRASIM,4)
static A68_457   VDRASIM = {"SR_US"}; 
A_GISVEC(A68_VC ,WDRASIM,VDRASIM,5)
static A68_460   DERASIM = {"SR_US|1"}; 
A_GISVEC(A68_VC ,EERASIM,DERASIM,7)
static A68_445   DFRASIM = {"SR_S"}; 
A_GISVEC(A68_VC ,EFRASIM,DFRASIM,4)
static A68_461   LFRASIM = {"SR_S|1"}; 
A_GISVEC(A68_VC ,MFRASIM,LFRASIM,6)
static A68_459   LGRASIM = {"EQ"}; 
A_GISVEC(A68_VC ,MGRASIM,LGRASIM,2)
static A68_445   TGRASIM = {"EQ|3"}; 
A_GISVEC(A68_VC ,UGRASIM,TGRASIM,4)
static A68_445   LHRASIM = {"EQ|2"}; 
A_GISVEC(A68_VC ,MHRASIM,LHRASIM,4)
static A68_445   DIRASIM = {"EQ|3"}; 
A_GISVEC(A68_VC ,EIRASIM,DIRASIM,4)
static A68_459   BJRASIM = {"GT"}; 
A_GISVEC(A68_VC ,CJRASIM,BJRASIM,2)
static A68_445   JJRASIM = {"GT|3"}; 
A_GISVEC(A68_VC ,KJRASIM,JJRASIM,4)
static A68_445   BKRASIM = {"GT|2"}; 
A_GISVEC(A68_VC ,CKRASIM,BKRASIM,4)
static A68_445   TKRASIM = {"GT|3"}; 
A_GISVEC(A68_VC ,UKRASIM,TKRASIM,4)
static A68_459   RLRASIM = {"GE"}; 
A_GISVEC(A68_VC ,SLRASIM,RLRASIM,2)
static A68_445   ZLRASIM = {"GE|3"}; 
A_GISVEC(A68_VC ,AMRASIM,ZLRASIM,4)
static A68_445   RMRASIM = {"GE|2"}; 
A_GISVEC(A68_VC ,SMRASIM,RMRASIM,4)
static A68_445   JNRASIM = {"GE|3"}; 
A_GISVEC(A68_VC ,KNRASIM,JNRASIM,4)
static A68_459   HORASIM = {"LT"}; 
A_GISVEC(A68_VC ,IORASIM,HORASIM,2)
static A68_445   PORASIM = {"LT|3"}; 
A_GISVEC(A68_VC ,QORASIM,PORASIM,4)
static A68_445   HPRASIM = {"LT|2"}; 
A_GISVEC(A68_VC ,IPRASIM,HPRASIM,4)
static A68_445   ZPRASIM = {"LT|3"}; 
A_GISVEC(A68_VC ,AQRASIM,ZPRASIM,4)
static A68_459   XQRASIM = {"LE"}; 
A_GISVEC(A68_VC ,YQRASIM,XQRASIM,2)
static A68_445   FRRASIM = {"LE|3"}; 
A_GISVEC(A68_VC ,GRRASIM,FRRASIM,4)
static A68_445   XRRASIM = {"LE|2"}; 
A_GISVEC(A68_VC ,YRRASIM,XRRASIM,4)
static A68_445   PSRASIM = {"LE|3"}; 
A_GISVEC(A68_VC ,QSRASIM,PSRASIM,4)
static A68_463   NTRASIM = {"TRANSFORM_S"}; 
A_GISVEC(A68_VC ,OTRASIM,NTRASIM,11)
static A68_464   VTRASIM = {"TRANSFORM_S|1"}; 
A_GISVEC(A68_VC ,WTRASIM,VTRASIM,13)
static A68_464   WURASIM = {"TRANSFORM_S|2"}; 
A_GISVEC(A68_VC ,XURASIM,WURASIM,13)
static A68_468   DWRASIM = {"TRANSFORM_US"}; 
A_GISVEC(A68_VC ,EWRASIM,DWRASIM,12)
static A68_469   LWRASIM = {"TRANSFORM_US|1"}; 
A_GISVEC(A68_VC ,MWRASIM,LWRASIM,14)
static A68_469   MXRASIM = {"TRANSFORM_US|2"}; 
A_GISVEC(A68_VC ,NXRASIM,MXRASIM,14)
static A68_461   TYRASIM = {"PLUS_S"}; 
A_GISVEC(A68_VC ,UYRASIM,TYRASIM,6)
static A68_470   BZRASIM = {"PLUS_S|1"}; 
A_GISVEC(A68_VC ,CZRASIM,BZRASIM,8)
static A68_460   CASASIM = {"PLUS_US"}; 
A_GISVEC(A68_VC ,DASASIM,CASASIM,7)
static A68_471   KASASIM = {"PLUS_US|1"}; 
A_GISVEC(A68_VC ,LASASIM,KASASIM,9)
static A68_460   LBSASIM = {"MINUS_S"}; 
A_GISVEC(A68_VC ,MBSASIM,LBSASIM,7)
static A68_471   TBSASIM = {"MINUS_S|1"}; 
A_GISVEC(A68_VC ,UBSASIM,TBSASIM,9)
static A68_470   UCSASIM = {"MINUS_US"}; 
A_GISVEC(A68_VC ,VCSASIM,UCSASIM,8)
static A68_472   CDSASIM = {"MINUS_US|1"}; 
A_GISVEC(A68_VC ,DDSASIM,CDSASIM,10)
static A68_460   DESASIM = {"TIMES_S"}; 
A_GISVEC(A68_VC ,EESASIM,DESASIM,7)
static A68_471   LESASIM = {"TIMES_S|1"}; 
A_GISVEC(A68_VC ,MESASIM,LESASIM,9)
static A68_470   MFSASIM = {"TIMES_US"}; 
A_GISVEC(A68_VC ,NFSASIM,MFSASIM,8)
static A68_472   UFSASIM = {"TIMES_US|1"}; 
A_GISVEC(A68_VC ,VFSASIM,UFSASIM,10)
static A68_470   VGSASIM = {"NEGATE_S"}; 
A_GISVEC(A68_VC ,WGSASIM,VGSASIM,8)
static A68_472   DHSASIM = {"NEGATE_S|1"}; 
A_GISVEC(A68_VC ,EHSASIM,DHSASIM,10)
static A68_471   CISASIM = {"NEGATE_US"}; 
A_GISVEC(A68_VC ,DISASIM,CISASIM,9)
static A68_463   KISASIM = {"NEGATE_US|1"}; 
A_GISVEC(A68_VC ,LISASIM,KISASIM,11)
static A68_457   JJSASIM = {"ABS_S"}; 
A_GISVEC(A68_VC ,KJSASIM,JJSASIM,5)
static A68_460   RJSASIM = {"ABS_S|1"}; 
A_GISVEC(A68_VC ,SJSASIM,RJSASIM,7)
static A68_460   QKSASIM = {"SQRT_US"}; 
A_GISVEC(A68_VC ,RKSASIM,QKSASIM,7)
static A68_471   YKSASIM = {"SQRT_US|1"}; 
A_GISVEC(A68_VC ,ZKSASIM,YKSASIM,9)
static A68_470   XLSASIM = {"DIVIDE_S"}; 
A_GISVEC(A68_VC ,YLSASIM,XLSASIM,8)
static A68_472   FMSASIM = {"DIVIDE_S|1"}; 
A_GISVEC(A68_VC ,GMSASIM,FMSASIM,10)
static A68_471   SNSASIM = {"DIVIDE_US"}; 
A_GISVEC(A68_VC ,TNSASIM,SNSASIM,9)
static A68_463   AOSASIM = {"DIVIDE_US|1"}; 
A_GISVEC(A68_VC ,BOSASIM,AOSASIM,11)
static A68_457   NPSASIM = {"MOD_S"}; 
A_GISVEC(A68_VC ,OPSASIM,NPSASIM,5)
static A68_460   VPSASIM = {"MOD_S|1"}; 
A_GISVEC(A68_VC ,WPSASIM,VPSASIM,7)
static A68_461   FRSASIM = {"MOD_US"}; 
A_GISVEC(A68_VC ,GRSASIM,FRSASIM,6)
static A68_470   NRSASIM = {"MOD_US|1"}; 
A_GISVEC(A68_VC ,ORSASIM,NRSASIM,8)
static A68_460   XSSASIM = {"RANGE_S"}; 
A_GISVEC(A68_VC ,YSSASIM,XSSASIM,7)
static A68_471   FTSASIM = {"RANGE_S|1"}; 
A_GISVEC(A68_VC ,GTSASIM,FTSASIM,9)
static A68_470   MUSASIM = {"RANGE_US"}; 
A_GISVEC(A68_VC ,NUSASIM,MUSASIM,8)
static A68_472   UUSASIM = {"RANGE_US|1"}; 
A_GISVEC(A68_VC ,VUSASIM,UUSASIM,10)
static A68_457   BWSASIM = {"EQ_US"}; 
A_GISVEC(A68_VC ,CWSASIM,BWSASIM,5)
static A68_460   JWSASIM = {"EQ_US|1"}; 
A_GISVEC(A68_VC ,KWSASIM,JWSASIM,7)
static A68_457   HXSASIM = {"GT_US"}; 
A_GISVEC(A68_VC ,IXSASIM,HXSASIM,5)
static A68_460   PXSASIM = {"GT_US|1"}; 
A_GISVEC(A68_VC ,QXSASIM,PXSASIM,7)
static A68_457   NYSASIM = {"GE_US"}; 
A_GISVEC(A68_VC ,OYSASIM,NYSASIM,5)
static A68_460   VYSASIM = {"GE_US|1"}; 
A_GISVEC(A68_VC ,WYSASIM,VYSASIM,7)
static A68_457   TZSASIM = {"LT_US"}; 
A_GISVEC(A68_VC ,UZSASIM,TZSASIM,5)
static A68_460   BATASIM = {"LT_US|1"}; 
A_GISVEC(A68_VC ,CATASIM,BATASIM,7)
static A68_457   ZATASIM = {"LE_US"}; 
A_GISVEC(A68_VC ,ABTASIM,ZATASIM,5)
static A68_460   HBTASIM = {"LE_US|1"}; 
A_GISVEC(A68_VC ,IBTASIM,HBTASIM,7)
static A68_445   FCTASIM = {"EQ_S"}; 
A_GISVEC(A68_VC ,GCTASIM,FCTASIM,4)
static A68_461   NCTASIM = {"EQ_S|1"}; 
A_GISVEC(A68_VC ,OCTASIM,NCTASIM,6)
static A68_445   LDTASIM = {"GT_S"}; 
A_GISVEC(A68_VC ,MDTASIM,LDTASIM,4)
static A68_461   TDTASIM = {"GT_S|1"}; 
A_GISVEC(A68_VC ,UDTASIM,TDTASIM,6)
static A68_445   RETASIM = {"GE_S"}; 
A_GISVEC(A68_VC ,SETASIM,RETASIM,4)
static A68_461   ZETASIM = {"GE_S|1"}; 
A_GISVEC(A68_VC ,AFTASIM,ZETASIM,6)
static A68_445   XFTASIM = {"LT_S"}; 
A_GISVEC(A68_VC ,YFTASIM,XFTASIM,4)
static A68_461   FGTASIM = {"LT_S|1"}; 
A_GISVEC(A68_VC ,GGTASIM,FGTASIM,6)
static A68_445   DHTASIM = {"LE_S"}; 
A_GISVEC(A68_VC ,EHTASIM,DHTASIM,4)
static A68_461   LHTASIM = {"LE_S|1"}; 
A_GISVEC(A68_VC ,MHTASIM,LHTASIM,6)
static A68_472   JITASIM = {"CONVERT_US"}; 
A_GISVEC(A68_VC ,KITASIM,JITASIM,10)
static A68_468   RITASIM = {"CONVERT_US|1"}; 
A_GISVEC(A68_VC ,SITASIM,RITASIM,12)
static A68_468   SJTASIM = {"CONVERT_US|2"}; 
A_GISVEC(A68_VC ,TJTASIM,SJTASIM,12)
static A68_468   ZKTASIM = {"CONVERT_REAL"}; 
A_GISVEC(A68_VC ,ALTASIM,ZKTASIM,12)
static A68_469   HLTASIM = {"CONVERT_REAL|1"}; 
A_GISVEC(A68_VC ,ILTASIM,HLTASIM,14)
static A68_469   UMTASIM = {"CONVERT_REAL|2"}; 
A_GISVEC(A68_VC ,VMTASIM,UMTASIM,14)
static A68_460   NOTASIM = {"F_TO_R1"}; 
A_GISVEC(A68_VC ,OOTASIM,NOTASIM,7)
static A68_470   VOTASIM = {"F_TO_R|1"}; 
A_GISVEC(A68_VC ,WOTASIM,VOTASIM,8)
static A68_460   SPTASIM = {"F_TO_R2"}; 
A_GISVEC(A68_VC ,TPTASIM,SPTASIM,7)
static A68_470   AQTASIM = {"F_TO_R|2"}; 
A_GISVEC(A68_VC ,BQTASIM,AQTASIM,8)
static A68_461   XQTASIM = {"R_TO_F"}; 
A_GISVEC(A68_VC ,YQTASIM,XQTASIM,6)
static A68_470   FRTASIM = {"R_TO_F|1"}; 
A_GISVEC(A68_VC ,GRTASIM,FRTASIM,8)
static A68_470   WRTASIM = {"R_TO_F|2"}; 
A_GISVEC(A68_VC ,XRTASIM,WRTASIM,8)
static A68_471   TSTASIM = {"PLUS_REAL"}; 
A_GISVEC(A68_VC ,USTASIM,TSTASIM,9)
static A68_463   BTTASIM = {"PLUS_REAL|1"}; 
A_GISVEC(A68_VC ,CTTASIM,BTTASIM,11)
static A68_463   DUTASIM = {"PLUS_REAL|2"}; 
A_GISVEC(A68_VC ,EUTASIM,DUTASIM,11)
static A68_472   LVTASIM = {"MINUS_REAL"}; 
A_GISVEC(A68_VC ,MVTASIM,LVTASIM,10)
static A68_468   TVTASIM = {"MINUS_REAL|1"}; 
A_GISVEC(A68_VC ,UVTASIM,TVTASIM,12)
static A68_468   VWTASIM = {"MINUS_REAL|2"}; 
A_GISVEC(A68_VC ,WWTASIM,VWTASIM,12)
static A68_472   DYTASIM = {"TIMES_REAL"}; 
A_GISVEC(A68_VC ,EYTASIM,DYTASIM,10)
static A68_468   LYTASIM = {"TIMES_REAL|1"}; 
A_GISVEC(A68_VC ,MYTASIM,LYTASIM,12)
static A68_468   NZTASIM = {"TIMES_REAL|2"}; 
A_GISVEC(A68_VC ,OZTASIM,NZTASIM,12)
static A68_463   VAUASIM = {"DIVIDE_REAL"}; 
A_GISVEC(A68_VC ,WAUASIM,VAUASIM,11)
static A68_464   DBUASIM = {"DIVIDE_REAL|1"}; 
A_GISVEC(A68_VC ,EBUASIM,DBUASIM,13)
static A68_464   FCUASIM = {"DIVIDE_REAL|2"}; 
A_GISVEC(A68_VC ,GCUASIM,FCUASIM,13)
static A68_463   NDUASIM = {"NEGATE_REAL"}; 
A_GISVEC(A68_VC ,ODUASIM,NDUASIM,11)
static A68_464   VDUASIM = {"NEGATE_REAL|1"}; 
A_GISVEC(A68_VC ,WDUASIM,VDUASIM,13)
static A68_464   WEUASIM = {"NEGATE_REAL|2"}; 
A_GISVEC(A68_VC ,XEUASIM,WEUASIM,13)
static A68_460   DGUASIM = {"EQ_REAL"}; 
A_GISVEC(A68_VC ,EGUASIM,DGUASIM,7)
static A68_471   LGUASIM = {"EQ_REAL|1"}; 
A_GISVEC(A68_VC ,MGUASIM,LGUASIM,9)
static A68_471   DHUASIM = {"EQ_REAL|2"}; 
A_GISVEC(A68_VC ,EHUASIM,DHUASIM,9)
static A68_460   BIUASIM = {"GT_REAL"}; 
A_GISVEC(A68_VC ,CIUASIM,BIUASIM,7)
static A68_471   JIUASIM = {"GT_REAL|1"}; 
A_GISVEC(A68_VC ,KIUASIM,JIUASIM,9)
static A68_471   BJUASIM = {"GT_REAL|2"}; 
A_GISVEC(A68_VC ,CJUASIM,BJUASIM,9)
static A68_460   ZJUASIM = {"LT_REAL"}; 
A_GISVEC(A68_VC ,AKUASIM,ZJUASIM,7)
static A68_471   HKUASIM = {"LT_REAL|1"}; 
A_GISVEC(A68_VC ,IKUASIM,HKUASIM,9)
static A68_471   ZKUASIM = {"LT_REAL|2"}; 
A_GISVEC(A68_VC ,ALUASIM,ZKUASIM,9)
static A68_463   XLUASIM = {"CHANGE_REAL"}; 
A_GISVEC(A68_VC ,YLUASIM,XLUASIM,11)
static A68_464   FMUASIM = {"CHANGE_REAL|1"}; 
A_GISVEC(A68_VC ,GMUASIM,FMUASIM,13)
static A68_464   GNUASIM = {"CHANGE_REAL|2"}; 
A_GISVEC(A68_VC ,HNUASIM,GNUASIM,13)
static A68_453  POUASIM_thebioptable;
static A68_472   QRUASIM = {"BIOP name "}; 
static A68_478   RRUASIM = {" not recognised in "}; 
A_GISVEC(A68_VC ,SRUASIM,QRUASIM,10)
A_GISVEC(A68_VC ,TRUASIM,RRUASIM,19)
typedef struct   /* env of non-global proc */
{
A68_32 * I1;
A68_32  I2;
} WGQASIM_generator;
typedef struct   /* env of non-global proc */
{
A68_32  I2;
} IHQASIM_generator;
typedef struct   /* env of non-global proc */
{
A68_215  Params;
} ZIQASIM_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} YLQASIM_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} RMQASIM_generator;
typedef struct   /* env of non-global proc */
{
A68_427  Output;
} PNQASIM_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} FQQASIM_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} SQQASIM_generator;

A_STATIC A68_INT  KGQASIM_max(A68_INT  I1, A68_INT  I2);

A_STATIC A68_VOID  OGQASIM_append(A68_32 * I1, A68_32  I2);

A_STATIC A68_VOID  VGQASIM_generator(A68_BOOL  TGQASIM_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  HHQASIM_generator(A68_BOOL  FHQASIM_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_INT  NHQASIM_numeration(A68_307  St);

A_STATIC A68_BOOL  YHQASIM_notassociated(A68_309  Ss);

A_STATIC A68_BOOL  MIQASIM_macparamsmatch(A68_215  Params, A68_INT  Number);

A_STATIC A68_VOID  VIQASIM_macparamslimitsvector(A68_215  Params, A68_32  *ReturnedValue);

A_STATIC A68_VOID  YIQASIM_generator(A68_BOOL  WIQASIM_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_INT  MJQASIM_pushmacparams(A68_215  Params);

A_STATIC A68_BOOL  VJQASIM_outputmatch(A68_427  Output, A68_307  Outputtype);

A_STATIC A68_INT  MLQASIM_pushcurrentoutput(A68_INT  Outputtype, A68_INT  Outputoffset, A68_INT  Cpoffset);

A_STATIC A68_VOID  PLQASIM_outputlimitsvector(A68_307  Outputtype, A68_32  *ReturnedValue);

A_STATIC A68_VOID  XLQASIM_generator(A68_BOOL  VLQASIM_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  QMQASIM_generator(A68_BOOL  OMQASIM_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_INT  GNQASIM_pushoutputlimits(A68_427  Output, A68_307  Outputtype);

A_STATIC A68_VOID  ONQASIM_generator(A68_BOOL  MNQASIM_anonymous, A68_434  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  KOQASIM_storeoutput(A68_427  Output, A68_INT  Outputtype, A68_INT  Outputoffset, A68_INT  Cpoffset);

A_STATIC A68_BOOL  ROQASIM_inputmatch(A68_INT  Input, A68_INT  Inputtype);

A_STATIC A68_VOID  RPQASIM_inputlimitsvector(A68_32  Inputtypes, A68_32  *ReturnedValue);

A_STATIC A68_VOID  EQQASIM_generator(A68_BOOL  CQQASIM_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  RQQASIM_generator(A68_BOOL  PQQASIM_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_INT  CRQASIM_pushinputs(A68_439  Inputs, A68_32  Inputtypes, A68_INT  Cpoffset);

A_STATIC A68_VOID  WRQASIM_biopbodytranslate(A68_442  B, A68_129  Body, A68_121  Declaration, A68_32  Inputtypes, A68_INT  Outputtype, A68_115  Environ, A68_248 * Closure, A68_36  Flt, A68_INT  Outputoffset);

A_STATIC A68_BOOL  BTQASIM_overloadedbioplookup(A68_448  B, A68_32  Inputtypes, A68_442 * Biop);

A_STATIC A68_VOID  VTQASIM_overloadedbioptranslate(A68_448  B, A68_129  Body, A68_121  Declaration, A68_32  Inputtypes, A68_INT  Outputtype, A68_115  Environ, A68_248 * Closure, A68_36  Flt, A68_INT  Outputoffset);

A_STATIC A68_VOID  DUQASIM_generator(A68_BOOL  CUQASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_VOID  HUQASIM_make_1(A68_448  *ReturnedValue);

A_STATIC A68_VOID  NUQASIM_generator(A68_BOOL  MUQASIM_anonymous, A68_449  *ReturnedValue);

A_STATIC A68_VOID  VUQASIM_generator(A68_BOOL  UUQASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_BOOL  GVQASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  RVQASIM_generator(A68_BOOL  QVQASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_BOOL  CWQASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  JWQASIM_make_2(A68_448  *ReturnedValue);

A_STATIC A68_VOID  PWQASIM_generator(A68_BOOL  OWQASIM_anonymous, A68_449  *ReturnedValue);

A_STATIC A68_VOID  XWQASIM_generator(A68_BOOL  WWQASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_BOOL  IXQASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  TXQASIM_generator(A68_BOOL  SXQASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_BOOL  EYQASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  LYQASIM_make_3(A68_448  *ReturnedValue);

A_STATIC A68_VOID  RYQASIM_generator(A68_BOOL  QYQASIM_anonymous, A68_449  *ReturnedValue);

A_STATIC A68_VOID  ZYQASIM_generator(A68_BOOL  YYQASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_BOOL  JZQASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  SZQASIM_generator(A68_BOOL  RZQASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_BOOL  CARASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  JARASIM_make_4(A68_448  *ReturnedValue);

A_STATIC A68_VOID  PARASIM_generator(A68_BOOL  OARASIM_anonymous, A68_449  *ReturnedValue);

A_STATIC A68_VOID  XARASIM_generator(A68_BOOL  WARASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_BOOL  IBRASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  TBRASIM_generator(A68_BOOL  SBRASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_BOOL  ECRASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  LCRASIM_make_5(A68_448  *ReturnedValue);

A_STATIC A68_VOID  RCRASIM_generator(A68_BOOL  QCRASIM_anonymous, A68_449  *ReturnedValue);

A_STATIC A68_VOID  ZCRASIM_generator(A68_BOOL  YCRASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_BOOL  JDRASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  TDRASIM_make_6(A68_448  *ReturnedValue);

A_STATIC A68_VOID  ZDRASIM_generator(A68_BOOL  YDRASIM_anonymous, A68_449  *ReturnedValue);

A_STATIC A68_VOID  HERASIM_generator(A68_BOOL  GERASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_BOOL  RERASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  BFRASIM_make_7(A68_448  *ReturnedValue);

A_STATIC A68_VOID  HFRASIM_generator(A68_BOOL  GFRASIM_anonymous, A68_449  *ReturnedValue);

A_STATIC A68_VOID  PFRASIM_generator(A68_BOOL  OFRASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_BOOL  ZFRASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  JGRASIM_make_8(A68_448  *ReturnedValue);

A_STATIC A68_VOID  PGRASIM_generator(A68_BOOL  OGRASIM_anonymous, A68_449  *ReturnedValue);

A_STATIC A68_VOID  XGRASIM_generator(A68_BOOL  WGRASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_BOOL  IHRASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  PHRASIM_generator(A68_BOOL  OHRASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_BOOL  AIRASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  HIRASIM_generator(A68_BOOL  GIRASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_BOOL  SIRASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  ZIRASIM_make_9(A68_448  *ReturnedValue);

A_STATIC A68_VOID  FJRASIM_generator(A68_BOOL  EJRASIM_anonymous, A68_449  *ReturnedValue);

A_STATIC A68_VOID  NJRASIM_generator(A68_BOOL  MJRASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_BOOL  YJRASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  FKRASIM_generator(A68_BOOL  EKRASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_BOOL  QKRASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  XKRASIM_generator(A68_BOOL  WKRASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_BOOL  ILRASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  PLRASIM_make_10(A68_448  *ReturnedValue);

A_STATIC A68_VOID  VLRASIM_generator(A68_BOOL  ULRASIM_anonymous, A68_449  *ReturnedValue);

A_STATIC A68_VOID  DMRASIM_generator(A68_BOOL  CMRASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_BOOL  OMRASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  VMRASIM_generator(A68_BOOL  UMRASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_BOOL  GNRASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  NNRASIM_generator(A68_BOOL  MNRASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_BOOL  YNRASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  FORASIM_make_11(A68_448  *ReturnedValue);

A_STATIC A68_VOID  LORASIM_generator(A68_BOOL  KORASIM_anonymous, A68_449  *ReturnedValue);

A_STATIC A68_VOID  TORASIM_generator(A68_BOOL  SORASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_BOOL  EPRASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  LPRASIM_generator(A68_BOOL  KPRASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_BOOL  WPRASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  DQRASIM_generator(A68_BOOL  CQRASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_BOOL  OQRASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  VQRASIM_make_12(A68_448  *ReturnedValue);

A_STATIC A68_VOID  BRRASIM_generator(A68_BOOL  ARRASIM_anonymous, A68_449  *ReturnedValue);

A_STATIC A68_VOID  JRRASIM_generator(A68_BOOL  IRRASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_BOOL  URRASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  BSRASIM_generator(A68_BOOL  ASRASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_BOOL  MSRASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  TSRASIM_generator(A68_BOOL  SSRASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_BOOL  ETRASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  LTRASIM_make_13(A68_448  *ReturnedValue);

A_STATIC A68_VOID  RTRASIM_generator(A68_BOOL  QTRASIM_anonymous, A68_449  *ReturnedValue);

A_STATIC A68_VOID  ZTRASIM_generator(A68_BOOL  YTRASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_VOID  GURASIM_generator(A68_BOOL  FURASIM_anonymous, A68_465  *ReturnedValue);

A_STATIC A68_BOOL  TURASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  AVRASIM_generator(A68_BOOL  ZURASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_VOID  HVRASIM_generator(A68_BOOL  GVRASIM_anonymous, A68_465  *ReturnedValue);

A_STATIC A68_BOOL  UVRASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  BWRASIM_make_14(A68_448  *ReturnedValue);

A_STATIC A68_VOID  HWRASIM_generator(A68_BOOL  GWRASIM_anonymous, A68_449  *ReturnedValue);

A_STATIC A68_VOID  PWRASIM_generator(A68_BOOL  OWRASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_VOID  WWRASIM_generator(A68_BOOL  VWRASIM_anonymous, A68_465  *ReturnedValue);

A_STATIC A68_BOOL  JXRASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  QXRASIM_generator(A68_BOOL  PXRASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_VOID  XXRASIM_generator(A68_BOOL  WXRASIM_anonymous, A68_465  *ReturnedValue);

A_STATIC A68_BOOL  KYRASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  RYRASIM_make_15(A68_448  *ReturnedValue);

A_STATIC A68_VOID  XYRASIM_generator(A68_BOOL  WYRASIM_anonymous, A68_449  *ReturnedValue);

A_STATIC A68_VOID  FZRASIM_generator(A68_BOOL  EZRASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_BOOL  QZRASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  AASASIM_make_16(A68_448  *ReturnedValue);

A_STATIC A68_VOID  GASASIM_generator(A68_BOOL  FASASIM_anonymous, A68_449  *ReturnedValue);

A_STATIC A68_VOID  OASASIM_generator(A68_BOOL  NASASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_BOOL  ZASASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  JBSASIM_make_17(A68_448  *ReturnedValue);

A_STATIC A68_VOID  PBSASIM_generator(A68_BOOL  OBSASIM_anonymous, A68_449  *ReturnedValue);

A_STATIC A68_VOID  XBSASIM_generator(A68_BOOL  WBSASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_BOOL  ICSASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  SCSASIM_make_18(A68_448  *ReturnedValue);

A_STATIC A68_VOID  YCSASIM_generator(A68_BOOL  XCSASIM_anonymous, A68_449  *ReturnedValue);

A_STATIC A68_VOID  GDSASIM_generator(A68_BOOL  FDSASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_BOOL  RDSASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  BESASIM_make_19(A68_448  *ReturnedValue);

A_STATIC A68_VOID  HESASIM_generator(A68_BOOL  GESASIM_anonymous, A68_449  *ReturnedValue);

A_STATIC A68_VOID  PESASIM_generator(A68_BOOL  OESASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_BOOL  AFSASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  KFSASIM_make_20(A68_448  *ReturnedValue);

A_STATIC A68_VOID  QFSASIM_generator(A68_BOOL  PFSASIM_anonymous, A68_449  *ReturnedValue);

A_STATIC A68_VOID  YFSASIM_generator(A68_BOOL  XFSASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_BOOL  JGSASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  TGSASIM_make_21(A68_448  *ReturnedValue);

A_STATIC A68_VOID  ZGSASIM_generator(A68_BOOL  YGSASIM_anonymous, A68_449  *ReturnedValue);

A_STATIC A68_VOID  HHSASIM_generator(A68_BOOL  GHSASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_BOOL  RHSASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  AISASIM_make_22(A68_448  *ReturnedValue);

A_STATIC A68_VOID  GISASIM_generator(A68_BOOL  FISASIM_anonymous, A68_449  *ReturnedValue);

A_STATIC A68_VOID  OISASIM_generator(A68_BOOL  NISASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_BOOL  YISASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  HJSASIM_make_23(A68_448  *ReturnedValue);

A_STATIC A68_VOID  NJSASIM_generator(A68_BOOL  MJSASIM_anonymous, A68_449  *ReturnedValue);

A_STATIC A68_VOID  VJSASIM_generator(A68_BOOL  UJSASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_BOOL  FKSASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  OKSASIM_make_24(A68_448  *ReturnedValue);

A_STATIC A68_VOID  UKSASIM_generator(A68_BOOL  TKSASIM_anonymous, A68_449  *ReturnedValue);

A_STATIC A68_VOID  CLSASIM_generator(A68_BOOL  BLSASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_BOOL  MLSASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  VLSASIM_make_25(A68_448  *ReturnedValue);

A_STATIC A68_VOID  BMSASIM_generator(A68_BOOL  AMSASIM_anonymous, A68_449  *ReturnedValue);

A_STATIC A68_VOID  JMSASIM_generator(A68_BOOL  IMSASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_VOID  RMSASIM_generator(A68_BOOL  QMSASIM_anonymous, A68_465  *ReturnedValue);

A_STATIC A68_BOOL  FNSASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  QNSASIM_make_26(A68_448  *ReturnedValue);

A_STATIC A68_VOID  WNSASIM_generator(A68_BOOL  VNSASIM_anonymous, A68_449  *ReturnedValue);

A_STATIC A68_VOID  EOSASIM_generator(A68_BOOL  DOSASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_VOID  MOSASIM_generator(A68_BOOL  LOSASIM_anonymous, A68_465  *ReturnedValue);

A_STATIC A68_BOOL  APSASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  LPSASIM_make_27(A68_448  *ReturnedValue);

A_STATIC A68_VOID  RPSASIM_generator(A68_BOOL  QPSASIM_anonymous, A68_449  *ReturnedValue);

A_STATIC A68_VOID  ZPSASIM_generator(A68_BOOL  YPSASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_VOID  HQSASIM_generator(A68_BOOL  GQSASIM_anonymous, A68_465  *ReturnedValue);

A_STATIC A68_BOOL  UQSASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  DRSASIM_make_28(A68_448  *ReturnedValue);

A_STATIC A68_VOID  JRSASIM_generator(A68_BOOL  IRSASIM_anonymous, A68_449  *ReturnedValue);

A_STATIC A68_VOID  RRSASIM_generator(A68_BOOL  QRSASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_VOID  ZRSASIM_generator(A68_BOOL  YRSASIM_anonymous, A68_465  *ReturnedValue);

A_STATIC A68_BOOL  MSSASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  VSSASIM_make_29(A68_448  *ReturnedValue);

A_STATIC A68_VOID  BTSASIM_generator(A68_BOOL  ATSASIM_anonymous, A68_449  *ReturnedValue);

A_STATIC A68_VOID  JTSASIM_generator(A68_BOOL  ITSASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_VOID  QTSASIM_generator(A68_BOOL  PTSASIM_anonymous, A68_465  *ReturnedValue);

A_STATIC A68_BOOL  DUSASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  KUSASIM_make_30(A68_448  *ReturnedValue);

A_STATIC A68_VOID  QUSASIM_generator(A68_BOOL  PUSASIM_anonymous, A68_449  *ReturnedValue);

A_STATIC A68_VOID  YUSASIM_generator(A68_BOOL  XUSASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_VOID  FVSASIM_generator(A68_BOOL  EVSASIM_anonymous, A68_465  *ReturnedValue);

A_STATIC A68_BOOL  SVSASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  ZVSASIM_make_31(A68_448  *ReturnedValue);

A_STATIC A68_VOID  FWSASIM_generator(A68_BOOL  EWSASIM_anonymous, A68_449  *ReturnedValue);

A_STATIC A68_VOID  NWSASIM_generator(A68_BOOL  MWSASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_BOOL  YWSASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  FXSASIM_make_32(A68_448  *ReturnedValue);

A_STATIC A68_VOID  LXSASIM_generator(A68_BOOL  KXSASIM_anonymous, A68_449  *ReturnedValue);

A_STATIC A68_VOID  TXSASIM_generator(A68_BOOL  SXSASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_BOOL  EYSASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  LYSASIM_make_33(A68_448  *ReturnedValue);

A_STATIC A68_VOID  RYSASIM_generator(A68_BOOL  QYSASIM_anonymous, A68_449  *ReturnedValue);

A_STATIC A68_VOID  ZYSASIM_generator(A68_BOOL  YYSASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_BOOL  KZSASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  RZSASIM_make_34(A68_448  *ReturnedValue);

A_STATIC A68_VOID  XZSASIM_generator(A68_BOOL  WZSASIM_anonymous, A68_449  *ReturnedValue);

A_STATIC A68_VOID  FATASIM_generator(A68_BOOL  EATASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_BOOL  QATASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  XATASIM_make_35(A68_448  *ReturnedValue);

A_STATIC A68_VOID  DBTASIM_generator(A68_BOOL  CBTASIM_anonymous, A68_449  *ReturnedValue);

A_STATIC A68_VOID  LBTASIM_generator(A68_BOOL  KBTASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_BOOL  WBTASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  DCTASIM_make_36(A68_448  *ReturnedValue);

A_STATIC A68_VOID  JCTASIM_generator(A68_BOOL  ICTASIM_anonymous, A68_449  *ReturnedValue);

A_STATIC A68_VOID  RCTASIM_generator(A68_BOOL  QCTASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_BOOL  CDTASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  JDTASIM_make_37(A68_448  *ReturnedValue);

A_STATIC A68_VOID  PDTASIM_generator(A68_BOOL  ODTASIM_anonymous, A68_449  *ReturnedValue);

A_STATIC A68_VOID  XDTASIM_generator(A68_BOOL  WDTASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_BOOL  IETASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  PETASIM_make_38(A68_448  *ReturnedValue);

A_STATIC A68_VOID  VETASIM_generator(A68_BOOL  UETASIM_anonymous, A68_449  *ReturnedValue);

A_STATIC A68_VOID  DFTASIM_generator(A68_BOOL  CFTASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_BOOL  OFTASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  VFTASIM_make_39(A68_448  *ReturnedValue);

A_STATIC A68_VOID  BGTASIM_generator(A68_BOOL  AGTASIM_anonymous, A68_449  *ReturnedValue);

A_STATIC A68_VOID  JGTASIM_generator(A68_BOOL  IGTASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_BOOL  UGTASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  BHTASIM_make_40(A68_448  *ReturnedValue);

A_STATIC A68_VOID  HHTASIM_generator(A68_BOOL  GHTASIM_anonymous, A68_449  *ReturnedValue);

A_STATIC A68_VOID  PHTASIM_generator(A68_BOOL  OHTASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_BOOL  AITASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  HITASIM_make_41(A68_448  *ReturnedValue);

A_STATIC A68_VOID  NITASIM_generator(A68_BOOL  MITASIM_anonymous, A68_449  *ReturnedValue);

A_STATIC A68_VOID  VITASIM_generator(A68_BOOL  UITASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_VOID  CJTASIM_generator(A68_BOOL  BJTASIM_anonymous, A68_465  *ReturnedValue);

A_STATIC A68_BOOL  PJTASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  WJTASIM_generator(A68_BOOL  VJTASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_VOID  DKTASIM_generator(A68_BOOL  CKTASIM_anonymous, A68_465  *ReturnedValue);

A_STATIC A68_BOOL  QKTASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  XKTASIM_make_42(A68_448  *ReturnedValue);

A_STATIC A68_VOID  DLTASIM_generator(A68_BOOL  CLTASIM_anonymous, A68_449  *ReturnedValue);

A_STATIC A68_VOID  LLTASIM_generator(A68_BOOL  KLTASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_VOID  TLTASIM_generator(A68_BOOL  SLTASIM_anonymous, A68_465  *ReturnedValue);

A_STATIC A68_VOID  ZLTASIM_generator(A68_BOOL  YLTASIM_anonymous, A68_465  *ReturnedValue);

A_STATIC A68_BOOL  RMTASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  YMTASIM_generator(A68_BOOL  XMTASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_VOID  GNTASIM_generator(A68_BOOL  FNTASIM_anonymous, A68_465  *ReturnedValue);

A_STATIC A68_VOID  MNTASIM_generator(A68_BOOL  LNTASIM_anonymous, A68_465  *ReturnedValue);

A_STATIC A68_BOOL  EOTASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  LOTASIM_make_43(A68_448  *ReturnedValue);

A_STATIC A68_VOID  ROTASIM_generator(A68_BOOL  QOTASIM_anonymous, A68_449  *ReturnedValue);

A_STATIC A68_VOID  ZOTASIM_generator(A68_BOOL  YOTASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_BOOL  JPTASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  QPTASIM_make_44(A68_448  *ReturnedValue);

A_STATIC A68_VOID  WPTASIM_generator(A68_BOOL  VPTASIM_anonymous, A68_449  *ReturnedValue);

A_STATIC A68_VOID  EQTASIM_generator(A68_BOOL  DQTASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_BOOL  OQTASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  VQTASIM_make_45(A68_448  *ReturnedValue);

A_STATIC A68_VOID  BRTASIM_generator(A68_BOOL  ARTASIM_anonymous, A68_449  *ReturnedValue);

A_STATIC A68_VOID  JRTASIM_generator(A68_BOOL  IRTASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_BOOL  TRTASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  ASTASIM_generator(A68_BOOL  ZRTASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_BOOL  KSTASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  RSTASIM_make_46(A68_448  *ReturnedValue);

A_STATIC A68_VOID  XSTASIM_generator(A68_BOOL  WSTASIM_anonymous, A68_449  *ReturnedValue);

A_STATIC A68_VOID  FTTASIM_generator(A68_BOOL  ETTASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_VOID  NTTASIM_generator(A68_BOOL  MTTASIM_anonymous, A68_465  *ReturnedValue);

A_STATIC A68_BOOL  AUTASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  HUTASIM_generator(A68_BOOL  GUTASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_VOID  PUTASIM_generator(A68_BOOL  OUTASIM_anonymous, A68_465  *ReturnedValue);

A_STATIC A68_BOOL  CVTASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  JVTASIM_make_47(A68_448  *ReturnedValue);

A_STATIC A68_VOID  PVTASIM_generator(A68_BOOL  OVTASIM_anonymous, A68_449  *ReturnedValue);

A_STATIC A68_VOID  XVTASIM_generator(A68_BOOL  WVTASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_VOID  FWTASIM_generator(A68_BOOL  EWTASIM_anonymous, A68_465  *ReturnedValue);

A_STATIC A68_BOOL  SWTASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  ZWTASIM_generator(A68_BOOL  YWTASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_VOID  HXTASIM_generator(A68_BOOL  GXTASIM_anonymous, A68_465  *ReturnedValue);

A_STATIC A68_BOOL  UXTASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  BYTASIM_make_48(A68_448  *ReturnedValue);

A_STATIC A68_VOID  HYTASIM_generator(A68_BOOL  GYTASIM_anonymous, A68_449  *ReturnedValue);

A_STATIC A68_VOID  PYTASIM_generator(A68_BOOL  OYTASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_VOID  XYTASIM_generator(A68_BOOL  WYTASIM_anonymous, A68_465  *ReturnedValue);

A_STATIC A68_BOOL  KZTASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  RZTASIM_generator(A68_BOOL  QZTASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_VOID  ZZTASIM_generator(A68_BOOL  YZTASIM_anonymous, A68_465  *ReturnedValue);

A_STATIC A68_BOOL  MAUASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  TAUASIM_make_49(A68_448  *ReturnedValue);

A_STATIC A68_VOID  ZAUASIM_generator(A68_BOOL  YAUASIM_anonymous, A68_449  *ReturnedValue);

A_STATIC A68_VOID  HBUASIM_generator(A68_BOOL  GBUASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_VOID  PBUASIM_generator(A68_BOOL  OBUASIM_anonymous, A68_465  *ReturnedValue);

A_STATIC A68_BOOL  CCUASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  JCUASIM_generator(A68_BOOL  ICUASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_VOID  RCUASIM_generator(A68_BOOL  QCUASIM_anonymous, A68_465  *ReturnedValue);

A_STATIC A68_BOOL  EDUASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  LDUASIM_make_50(A68_448  *ReturnedValue);

A_STATIC A68_VOID  RDUASIM_generator(A68_BOOL  QDUASIM_anonymous, A68_449  *ReturnedValue);

A_STATIC A68_VOID  ZDUASIM_generator(A68_BOOL  YDUASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_VOID  GEUASIM_generator(A68_BOOL  FEUASIM_anonymous, A68_465  *ReturnedValue);

A_STATIC A68_BOOL  TEUASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  AFUASIM_generator(A68_BOOL  ZEUASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_VOID  HFUASIM_generator(A68_BOOL  GFUASIM_anonymous, A68_465  *ReturnedValue);

A_STATIC A68_BOOL  UFUASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  BGUASIM_make_51(A68_448  *ReturnedValue);

A_STATIC A68_VOID  HGUASIM_generator(A68_BOOL  GGUASIM_anonymous, A68_449  *ReturnedValue);

A_STATIC A68_VOID  PGUASIM_generator(A68_BOOL  OGUASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_BOOL  AHUASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  HHUASIM_generator(A68_BOOL  GHUASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_BOOL  SHUASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  ZHUASIM_make_52(A68_448  *ReturnedValue);

A_STATIC A68_VOID  FIUASIM_generator(A68_BOOL  EIUASIM_anonymous, A68_449  *ReturnedValue);

A_STATIC A68_VOID  NIUASIM_generator(A68_BOOL  MIUASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_BOOL  YIUASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  FJUASIM_generator(A68_BOOL  EJUASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_BOOL  QJUASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  XJUASIM_make_53(A68_448  *ReturnedValue);

A_STATIC A68_VOID  DKUASIM_generator(A68_BOOL  CKUASIM_anonymous, A68_449  *ReturnedValue);

A_STATIC A68_VOID  LKUASIM_generator(A68_BOOL  KKUASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_BOOL  WKUASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  DLUASIM_generator(A68_BOOL  CLUASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_BOOL  OLUASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  VLUASIM_make_54(A68_448  *ReturnedValue);

A_STATIC A68_VOID  BMUASIM_generator(A68_BOOL  AMUASIM_anonymous, A68_449  *ReturnedValue);

A_STATIC A68_VOID  JMUASIM_generator(A68_BOOL  IMUASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_VOID  QMUASIM_generator(A68_BOOL  PMUASIM_anonymous, A68_465  *ReturnedValue);

A_STATIC A68_BOOL  DNUASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  KNUASIM_generator(A68_BOOL  JNUASIM_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_VOID  RNUASIM_generator(A68_BOOL  QNUASIM_anonymous, A68_465  *ReturnedValue);

A_STATIC A68_BOOL  EOUASIM_anonymous(A68_32  I, A68_32  M, A68_32  O);

A_STATIC A68_VOID  MOUASIM_generator(A68_BOOL  LOUASIM_anonymous, A68_453  *ReturnedValue);

A68_VOID  ROUASIM_initialisebiop(void);

A_STATIC A68_BOOL  ARUASIM_bioptablelookup(A68_453  Table, A68_VC  Name, A68_448 * O);

A_STATIC A68_VOID  ORUASIM_bioptabletranslate(A68_453  Table, A68_129  Body, A68_121  Declaration, A68_32  Inputtypes, A68_INT  Outputtype, A68_115  Environ, A68_248 * Closure, A68_36  Flt, A68_INT  Outputoffset);

A68_VOID  CSUASIM_translatebiop(A68_129  Body, A68_VC  Name, A68_121  Declaration, A68_32  Inputtypes, A68_INT  Outputtype, A68_115  Environ, A68_248 * Closure, A68_36  Flt, A68_322  *ReturnedValue);

A_STATIC A68_VOID  VGQASIM_generator(A68_BOOL  TGQASIM_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((WGQASIM_generator *)NonLocals)->x)
{ 
A68_32  XGQASIM;  /* clause result */
A68_32  YGQASIM;  /* OPERATORS - dynamic generator */
{ 
YGQASIM.upb = ((*NL(I1)).upb+NL(I2).upb) ;
( TGQASIM_anonymous? A_VLOC(A68_INT ,YGQASIM): A_VHEAP(A68_INT ,YGQASIM) );
XGQASIM = YGQASIM;
} 
*ReturnedValue = (XGQASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  HHQASIM_generator(A68_BOOL  FHQASIM_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((IHQASIM_generator *)NonLocals)->x)
{ 
A68_32  JHQASIM;  /* clause result */
A68_32  KHQASIM;  /* OPERATORS - dynamic generator */
{ 
KHQASIM.upb = NL(I2).upb ;
( FHQASIM_anonymous? A_VLOC(A68_INT ,KHQASIM): A_VHEAP(A68_INT ,KHQASIM) );
JHQASIM = KHQASIM;
} 
*ReturnedValue = (JHQASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  YIQASIM_generator(A68_BOOL  WIQASIM_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((ZIQASIM_generator *)NonLocals)->x)
{ 
A68_32  AJQASIM;  /* clause result */
A68_32  BJQASIM;  /* OPERATORS - dynamic generator */
{ 
BJQASIM.upb = NL(Params).upb ;
( WIQASIM_anonymous? A_VLOC(A68_INT ,BJQASIM): A_VHEAP(A68_INT ,BJQASIM) );
AJQASIM = BJQASIM;
} 
*ReturnedValue = (AJQASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  XLQASIM_generator(A68_BOOL  VLQASIM_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((YLQASIM_generator *)NonLocals)->x)
{ 
A68_32  ZLQASIM;  /* clause result */
A68_32  AMQASIM;  /* OPERATORS - dynamic generator */
{ 
AMQASIM.upb = 2 ;
( VLQASIM_anonymous? A_VLOC(A68_INT ,AMQASIM): A_VHEAP(A68_INT ,AMQASIM) );
ZLQASIM = AMQASIM;
} 
*ReturnedValue = (ZLQASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  QMQASIM_generator(A68_BOOL  OMQASIM_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((RMQASIM_generator *)NonLocals)->x)
{ 
A68_32  SMQASIM;  /* clause result */
A68_32  TMQASIM;  /* OPERATORS - dynamic generator */
{ 
TMQASIM.upb = 1 ;
( OMQASIM_anonymous? A_VLOC(A68_INT ,TMQASIM): A_VHEAP(A68_INT ,TMQASIM) );
SMQASIM = TMQASIM;
} 
*ReturnedValue = (SMQASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  ONQASIM_generator(A68_BOOL  MNQASIM_anonymous, A68_434  *ReturnedValue, void *NonLocals)
#define NL(x) (((PNQASIM_generator *)NonLocals)->x)
{ 
A68_434  QNQASIM;  /* clause result */
A68_434  RNQASIM;  /* OPERATORS - dynamic generator */
{ 
 /* line 310: */
RNQASIM.upb = NL(Output).Struct_components.dim[0].upb ;
( MNQASIM_anonymous? A_VLOC(A68_307 ,RNQASIM): A_VHEAP(A68_307 ,RNQASIM) );
QNQASIM = RNQASIM;
} 
*ReturnedValue = (QNQASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  EQQASIM_generator(A68_BOOL  CQQASIM_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((FQQASIM_generator *)NonLocals)->x)
{ 
A68_32  GQQASIM;  /* clause result */
A68_32  HQQASIM;  /* OPERATORS - dynamic generator */
{ 
HQQASIM.upb = 2 ;
( CQQASIM_anonymous? A_VLOC(A68_INT ,HQQASIM): A_VHEAP(A68_INT ,HQQASIM) );
GQQASIM = HQQASIM;
} 
*ReturnedValue = (GQQASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  RQQASIM_generator(A68_BOOL  PQQASIM_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((SQQASIM_generator *)NonLocals)->x)
{ 
A68_32  TQQASIM;  /* clause result */
A68_32  UQQASIM;  /* OPERATORS - dynamic generator */
{ 
UQQASIM.upb = 1 ;
( PQQASIM_anonymous? A_VLOC(A68_INT ,UQQASIM): A_VHEAP(A68_INT ,UQQASIM) );
TQQASIM = UQQASIM;
} 
*ReturnedValue = (TQQASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  NUQASIM_generator(A68_BOOL  MUQASIM_anonymous, A68_449  *ReturnedValue)
{ 
A68_449  OUQASIM;  /* clause result */
A68_449  PUQASIM;  /* OPERATORS - dynamic generator */
{ 
PUQASIM.upb = 2 ;
( MUQASIM_anonymous? A_VLOC(A68_442 ,PUQASIM): A_VHEAP(A68_442 ,PUQASIM) );
OUQASIM = PUQASIM;
} 
*ReturnedValue = (OUQASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  VUQASIM_generator(A68_BOOL  UUQASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  WUQASIM;  /* clause result */
A68_32  XUQASIM;  /* OPERATORS - dynamic generator */
{ 
XUQASIM.upb = 2 ;
( UUQASIM_anonymous? A_VLOC(A68_INT ,XUQASIM): A_VHEAP(A68_INT ,XUQASIM) );
WUQASIM = XUQASIM;
} 
*ReturnedValue = (WUQASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  GVQASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  HVQASIM;  /* clause result */
A68_INT  IVQASIM;  /* YIELD */
A68_INT  JVQASIM;  /* YIELD */
A68_INT  KVQASIM;  /* YIELD */
A68_INT  LVQASIM;  /* YIELD */
IVQASIM = 1 ;
JVQASIM = 2 ;
KVQASIM = 1 ;
LVQASIM = 1 ;
HVQASIM = ((A_VINDEX(I,IVQASIM)==A_VINDEX(I,JVQASIM))&(A_VINDEX(I,KVQASIM)==A_VINDEX(O,LVQASIM)));
return( HVQASIM );
} 
#undef NL

A_STATIC A68_VOID  RVQASIM_generator(A68_BOOL  QVQASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  SVQASIM;  /* clause result */
A68_32  TVQASIM;  /* OPERATORS - dynamic generator */
{ 
TVQASIM.upb = 2 ;
( QVQASIM_anonymous? A_VLOC(A68_INT ,TVQASIM): A_VHEAP(A68_INT ,TVQASIM) );
SVQASIM = TVQASIM;
} 
*ReturnedValue = (SVQASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  CWQASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  DWQASIM;  /* clause result */
DWQASIM = A68_TRUE;
return( DWQASIM );
} 
#undef NL

A_STATIC A68_VOID  PWQASIM_generator(A68_BOOL  OWQASIM_anonymous, A68_449  *ReturnedValue)
{ 
A68_449  QWQASIM;  /* clause result */
A68_449  RWQASIM;  /* OPERATORS - dynamic generator */
{ 
RWQASIM.upb = 2 ;
( OWQASIM_anonymous? A_VLOC(A68_442 ,RWQASIM): A_VHEAP(A68_442 ,RWQASIM) );
QWQASIM = RWQASIM;
} 
*ReturnedValue = (QWQASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  XWQASIM_generator(A68_BOOL  WWQASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  YWQASIM;  /* clause result */
A68_32  ZWQASIM;  /* OPERATORS - dynamic generator */
{ 
ZWQASIM.upb = 2 ;
( WWQASIM_anonymous? A_VLOC(A68_INT ,ZWQASIM): A_VHEAP(A68_INT ,ZWQASIM) );
YWQASIM = ZWQASIM;
} 
*ReturnedValue = (YWQASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  IXQASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  JXQASIM;  /* clause result */
A68_INT  KXQASIM;  /* YIELD */
A68_INT  LXQASIM;  /* YIELD */
A68_INT  MXQASIM;  /* YIELD */
A68_INT  NXQASIM;  /* YIELD */
KXQASIM = 1 ;
LXQASIM = 2 ;
MXQASIM = 1 ;
NXQASIM = 1 ;
JXQASIM = ((A_VINDEX(I,KXQASIM)==A_VINDEX(I,LXQASIM))&(A_VINDEX(I,MXQASIM)==A_VINDEX(O,NXQASIM)));
return( JXQASIM );
} 
#undef NL

A_STATIC A68_VOID  TXQASIM_generator(A68_BOOL  SXQASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  UXQASIM;  /* clause result */
A68_32  VXQASIM;  /* OPERATORS - dynamic generator */
{ 
VXQASIM.upb = 2 ;
( SXQASIM_anonymous? A_VLOC(A68_INT ,VXQASIM): A_VHEAP(A68_INT ,VXQASIM) );
UXQASIM = VXQASIM;
} 
*ReturnedValue = (UXQASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  EYQASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  FYQASIM;  /* clause result */
FYQASIM = A68_TRUE;
return( FYQASIM );
} 
#undef NL

A_STATIC A68_VOID  RYQASIM_generator(A68_BOOL  QYQASIM_anonymous, A68_449  *ReturnedValue)
{ 
A68_449  SYQASIM;  /* clause result */
A68_449  TYQASIM;  /* OPERATORS - dynamic generator */
{ 
TYQASIM.upb = 2 ;
( QYQASIM_anonymous? A_VLOC(A68_442 ,TYQASIM): A_VHEAP(A68_442 ,TYQASIM) );
SYQASIM = TYQASIM;
} 
*ReturnedValue = (SYQASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  ZYQASIM_generator(A68_BOOL  YYQASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  AZQASIM;  /* clause result */
A68_32  BZQASIM;  /* OPERATORS - dynamic generator */
{ 
BZQASIM.upb = 1 ;
( YYQASIM_anonymous? A_VLOC(A68_INT ,BZQASIM): A_VHEAP(A68_INT ,BZQASIM) );
AZQASIM = BZQASIM;
} 
*ReturnedValue = (AZQASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  JZQASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  KZQASIM;  /* clause result */
A68_INT  LZQASIM;  /* YIELD */
A68_INT  MZQASIM;  /* YIELD */
LZQASIM = 1 ;
MZQASIM = 1 ;
KZQASIM = (A_VINDEX(I,LZQASIM)==A_VINDEX(O,MZQASIM));
return( KZQASIM );
} 
#undef NL

A_STATIC A68_VOID  SZQASIM_generator(A68_BOOL  RZQASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  TZQASIM;  /* clause result */
A68_32  UZQASIM;  /* OPERATORS - dynamic generator */
{ 
UZQASIM.upb = 1 ;
( RZQASIM_anonymous? A_VLOC(A68_INT ,UZQASIM): A_VHEAP(A68_INT ,UZQASIM) );
TZQASIM = UZQASIM;
} 
*ReturnedValue = (TZQASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  CARASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  DARASIM;  /* clause result */
DARASIM = A68_TRUE;
return( DARASIM );
} 
#undef NL

A_STATIC A68_VOID  PARASIM_generator(A68_BOOL  OARASIM_anonymous, A68_449  *ReturnedValue)
{ 
A68_449  QARASIM;  /* clause result */
A68_449  RARASIM;  /* OPERATORS - dynamic generator */
{ 
RARASIM.upb = 2 ;
( OARASIM_anonymous? A_VLOC(A68_442 ,RARASIM): A_VHEAP(A68_442 ,RARASIM) );
QARASIM = RARASIM;
} 
*ReturnedValue = (QARASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  XARASIM_generator(A68_BOOL  WARASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  YARASIM;  /* clause result */
A68_32  ZARASIM;  /* OPERATORS - dynamic generator */
{ 
ZARASIM.upb = 2 ;
( WARASIM_anonymous? A_VLOC(A68_INT ,ZARASIM): A_VHEAP(A68_INT ,ZARASIM) );
YARASIM = ZARASIM;
} 
*ReturnedValue = (YARASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  IBRASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  JBRASIM;  /* clause result */
A68_INT  KBRASIM;  /* YIELD */
A68_INT  LBRASIM;  /* YIELD */
A68_INT  MBRASIM;  /* YIELD */
A68_INT  NBRASIM;  /* YIELD */
KBRASIM = 1 ;
LBRASIM = 2 ;
MBRASIM = 1 ;
NBRASIM = 1 ;
JBRASIM = ((A_VINDEX(I,KBRASIM)==A_VINDEX(I,LBRASIM))&(A_VINDEX(I,MBRASIM)==A_VINDEX(O,NBRASIM)));
return( JBRASIM );
} 
#undef NL

A_STATIC A68_VOID  TBRASIM_generator(A68_BOOL  SBRASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  UBRASIM;  /* clause result */
A68_32  VBRASIM;  /* OPERATORS - dynamic generator */
{ 
VBRASIM.upb = 2 ;
( SBRASIM_anonymous? A_VLOC(A68_INT ,VBRASIM): A_VHEAP(A68_INT ,VBRASIM) );
UBRASIM = VBRASIM;
} 
*ReturnedValue = (UBRASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  ECRASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  FCRASIM;  /* clause result */
FCRASIM = A68_TRUE;
return( FCRASIM );
} 
#undef NL

A_STATIC A68_VOID  RCRASIM_generator(A68_BOOL  QCRASIM_anonymous, A68_449  *ReturnedValue)
{ 
A68_449  SCRASIM;  /* clause result */
A68_449  TCRASIM;  /* OPERATORS - dynamic generator */
{ 
TCRASIM.upb = 1 ;
( QCRASIM_anonymous? A_VLOC(A68_442 ,TCRASIM): A_VHEAP(A68_442 ,TCRASIM) );
SCRASIM = TCRASIM;
} 
*ReturnedValue = (SCRASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  ZCRASIM_generator(A68_BOOL  YCRASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  ADRASIM;  /* clause result */
A68_32  BDRASIM;  /* OPERATORS - dynamic generator */
{ 
BDRASIM.upb = 1 ;
( YCRASIM_anonymous? A_VLOC(A68_INT ,BDRASIM): A_VHEAP(A68_INT ,BDRASIM) );
ADRASIM = BDRASIM;
} 
*ReturnedValue = (ADRASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  JDRASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  KDRASIM;  /* clause result */
A68_INT  LDRASIM;  /* YIELD */
A68_INT  MDRASIM;  /* YIELD */
A68_INT  NDRASIM;  /* YIELD */
LDRASIM = 1 ;
MDRASIM = 1 ;
NDRASIM = 1 ;
KDRASIM = (A_VINDEX(O,LDRASIM)==(A_VINDEX(I,MDRASIM)+A_VINDEX(M,NDRASIM)));
return( KDRASIM );
} 
#undef NL

A_STATIC A68_VOID  ZDRASIM_generator(A68_BOOL  YDRASIM_anonymous, A68_449  *ReturnedValue)
{ 
A68_449  AERASIM;  /* clause result */
A68_449  BERASIM;  /* OPERATORS - dynamic generator */
{ 
BERASIM.upb = 1 ;
( YDRASIM_anonymous? A_VLOC(A68_442 ,BERASIM): A_VHEAP(A68_442 ,BERASIM) );
AERASIM = BERASIM;
} 
*ReturnedValue = (AERASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  HERASIM_generator(A68_BOOL  GERASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  IERASIM;  /* clause result */
A68_32  JERASIM;  /* OPERATORS - dynamic generator */
{ 
JERASIM.upb = 1 ;
( GERASIM_anonymous? A_VLOC(A68_INT ,JERASIM): A_VHEAP(A68_INT ,JERASIM) );
IERASIM = JERASIM;
} 
*ReturnedValue = (IERASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  RERASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  SERASIM;  /* clause result */
A68_INT  TERASIM;  /* YIELD */
A68_INT  UERASIM;  /* YIELD */
A68_INT  VERASIM;  /* YIELD */
TERASIM = 1 ;
UERASIM = 1 ;
VERASIM = 1 ;
SERASIM = (A_VINDEX(O,TERASIM)==(A_VINDEX(I,UERASIM)+A_VINDEX(M,VERASIM)));
return( SERASIM );
} 
#undef NL

A_STATIC A68_VOID  HFRASIM_generator(A68_BOOL  GFRASIM_anonymous, A68_449  *ReturnedValue)
{ 
A68_449  IFRASIM;  /* clause result */
A68_449  JFRASIM;  /* OPERATORS - dynamic generator */
{ 
JFRASIM.upb = 1 ;
( GFRASIM_anonymous? A_VLOC(A68_442 ,JFRASIM): A_VHEAP(A68_442 ,JFRASIM) );
IFRASIM = JFRASIM;
} 
*ReturnedValue = (IFRASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  PFRASIM_generator(A68_BOOL  OFRASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  QFRASIM;  /* clause result */
A68_32  RFRASIM;  /* OPERATORS - dynamic generator */
{ 
RFRASIM.upb = 1 ;
( OFRASIM_anonymous? A_VLOC(A68_INT ,RFRASIM): A_VHEAP(A68_INT ,RFRASIM) );
QFRASIM = RFRASIM;
} 
*ReturnedValue = (QFRASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  ZFRASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  AGRASIM;  /* clause result */
A68_INT  BGRASIM;  /* YIELD */
A68_INT  CGRASIM;  /* YIELD */
A68_INT  DGRASIM;  /* YIELD */
BGRASIM = 1 ;
CGRASIM = 1 ;
DGRASIM = 1 ;
AGRASIM = (A_VINDEX(O,BGRASIM)==(A_VINDEX(I,CGRASIM)+A_VINDEX(M,DGRASIM)));
return( AGRASIM );
} 
#undef NL

A_STATIC A68_VOID  PGRASIM_generator(A68_BOOL  OGRASIM_anonymous, A68_449  *ReturnedValue)
{ 
A68_449  QGRASIM;  /* clause result */
A68_449  RGRASIM;  /* OPERATORS - dynamic generator */
{ 
RGRASIM.upb = 3 ;
( OGRASIM_anonymous? A_VLOC(A68_442 ,RGRASIM): A_VHEAP(A68_442 ,RGRASIM) );
QGRASIM = RGRASIM;
} 
*ReturnedValue = (QGRASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  XGRASIM_generator(A68_BOOL  WGRASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  YGRASIM;  /* clause result */
A68_32  ZGRASIM;  /* OPERATORS - dynamic generator */
{ 
ZGRASIM.upb = 2 ;
( WGRASIM_anonymous? A_VLOC(A68_INT ,ZGRASIM): A_VHEAP(A68_INT ,ZGRASIM) );
YGRASIM = ZGRASIM;
} 
*ReturnedValue = (YGRASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  IHRASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  JHRASIM;  /* clause result */
JHRASIM = A68_TRUE;
return( JHRASIM );
} 
#undef NL

A_STATIC A68_VOID  PHRASIM_generator(A68_BOOL  OHRASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  QHRASIM;  /* clause result */
A68_32  RHRASIM;  /* OPERATORS - dynamic generator */
{ 
RHRASIM.upb = 2 ;
( OHRASIM_anonymous? A_VLOC(A68_INT ,RHRASIM): A_VHEAP(A68_INT ,RHRASIM) );
QHRASIM = RHRASIM;
} 
*ReturnedValue = (QHRASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  AIRASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  BIRASIM;  /* clause result */
BIRASIM = A68_TRUE;
return( BIRASIM );
} 
#undef NL

A_STATIC A68_VOID  HIRASIM_generator(A68_BOOL  GIRASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  IIRASIM;  /* clause result */
A68_32  JIRASIM;  /* OPERATORS - dynamic generator */
{ 
JIRASIM.upb = 2 ;
( GIRASIM_anonymous? A_VLOC(A68_INT ,JIRASIM): A_VHEAP(A68_INT ,JIRASIM) );
IIRASIM = JIRASIM;
} 
*ReturnedValue = (IIRASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  SIRASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  TIRASIM;  /* clause result */
TIRASIM = A68_TRUE;
return( TIRASIM );
} 
#undef NL

A_STATIC A68_VOID  FJRASIM_generator(A68_BOOL  EJRASIM_anonymous, A68_449  *ReturnedValue)
{ 
A68_449  GJRASIM;  /* clause result */
A68_449  HJRASIM;  /* OPERATORS - dynamic generator */
{ 
HJRASIM.upb = 3 ;
( EJRASIM_anonymous? A_VLOC(A68_442 ,HJRASIM): A_VHEAP(A68_442 ,HJRASIM) );
GJRASIM = HJRASIM;
} 
*ReturnedValue = (GJRASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  NJRASIM_generator(A68_BOOL  MJRASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  OJRASIM;  /* clause result */
A68_32  PJRASIM;  /* OPERATORS - dynamic generator */
{ 
PJRASIM.upb = 2 ;
( MJRASIM_anonymous? A_VLOC(A68_INT ,PJRASIM): A_VHEAP(A68_INT ,PJRASIM) );
OJRASIM = PJRASIM;
} 
*ReturnedValue = (OJRASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  YJRASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  ZJRASIM;  /* clause result */
ZJRASIM = A68_TRUE;
return( ZJRASIM );
} 
#undef NL

A_STATIC A68_VOID  FKRASIM_generator(A68_BOOL  EKRASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  GKRASIM;  /* clause result */
A68_32  HKRASIM;  /* OPERATORS - dynamic generator */
{ 
HKRASIM.upb = 2 ;
( EKRASIM_anonymous? A_VLOC(A68_INT ,HKRASIM): A_VHEAP(A68_INT ,HKRASIM) );
GKRASIM = HKRASIM;
} 
*ReturnedValue = (GKRASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  QKRASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  RKRASIM;  /* clause result */
RKRASIM = A68_TRUE;
return( RKRASIM );
} 
#undef NL

A_STATIC A68_VOID  XKRASIM_generator(A68_BOOL  WKRASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  YKRASIM;  /* clause result */
A68_32  ZKRASIM;  /* OPERATORS - dynamic generator */
{ 
ZKRASIM.upb = 2 ;
( WKRASIM_anonymous? A_VLOC(A68_INT ,ZKRASIM): A_VHEAP(A68_INT ,ZKRASIM) );
YKRASIM = ZKRASIM;
} 
*ReturnedValue = (YKRASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  ILRASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  JLRASIM;  /* clause result */
JLRASIM = A68_TRUE;
return( JLRASIM );
} 
#undef NL

A_STATIC A68_VOID  VLRASIM_generator(A68_BOOL  ULRASIM_anonymous, A68_449  *ReturnedValue)
{ 
A68_449  WLRASIM;  /* clause result */
A68_449  XLRASIM;  /* OPERATORS - dynamic generator */
{ 
XLRASIM.upb = 3 ;
( ULRASIM_anonymous? A_VLOC(A68_442 ,XLRASIM): A_VHEAP(A68_442 ,XLRASIM) );
WLRASIM = XLRASIM;
} 
*ReturnedValue = (WLRASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  DMRASIM_generator(A68_BOOL  CMRASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  EMRASIM;  /* clause result */
A68_32  FMRASIM;  /* OPERATORS - dynamic generator */
{ 
FMRASIM.upb = 2 ;
( CMRASIM_anonymous? A_VLOC(A68_INT ,FMRASIM): A_VHEAP(A68_INT ,FMRASIM) );
EMRASIM = FMRASIM;
} 
*ReturnedValue = (EMRASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  OMRASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  PMRASIM;  /* clause result */
PMRASIM = A68_TRUE;
return( PMRASIM );
} 
#undef NL

A_STATIC A68_VOID  VMRASIM_generator(A68_BOOL  UMRASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  WMRASIM;  /* clause result */
A68_32  XMRASIM;  /* OPERATORS - dynamic generator */
{ 
XMRASIM.upb = 2 ;
( UMRASIM_anonymous? A_VLOC(A68_INT ,XMRASIM): A_VHEAP(A68_INT ,XMRASIM) );
WMRASIM = XMRASIM;
} 
*ReturnedValue = (WMRASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  GNRASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  HNRASIM;  /* clause result */
HNRASIM = A68_TRUE;
return( HNRASIM );
} 
#undef NL

A_STATIC A68_VOID  NNRASIM_generator(A68_BOOL  MNRASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  ONRASIM;  /* clause result */
A68_32  PNRASIM;  /* OPERATORS - dynamic generator */
{ 
PNRASIM.upb = 2 ;
( MNRASIM_anonymous? A_VLOC(A68_INT ,PNRASIM): A_VHEAP(A68_INT ,PNRASIM) );
ONRASIM = PNRASIM;
} 
*ReturnedValue = (ONRASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  YNRASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  ZNRASIM;  /* clause result */
ZNRASIM = A68_TRUE;
return( ZNRASIM );
} 
#undef NL

A_STATIC A68_VOID  LORASIM_generator(A68_BOOL  KORASIM_anonymous, A68_449  *ReturnedValue)
{ 
A68_449  MORASIM;  /* clause result */
A68_449  NORASIM;  /* OPERATORS - dynamic generator */
{ 
NORASIM.upb = 3 ;
( KORASIM_anonymous? A_VLOC(A68_442 ,NORASIM): A_VHEAP(A68_442 ,NORASIM) );
MORASIM = NORASIM;
} 
*ReturnedValue = (MORASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  TORASIM_generator(A68_BOOL  SORASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  UORASIM;  /* clause result */
A68_32  VORASIM;  /* OPERATORS - dynamic generator */
{ 
VORASIM.upb = 2 ;
( SORASIM_anonymous? A_VLOC(A68_INT ,VORASIM): A_VHEAP(A68_INT ,VORASIM) );
UORASIM = VORASIM;
} 
*ReturnedValue = (UORASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  EPRASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  FPRASIM;  /* clause result */
FPRASIM = A68_TRUE;
return( FPRASIM );
} 
#undef NL

A_STATIC A68_VOID  LPRASIM_generator(A68_BOOL  KPRASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  MPRASIM;  /* clause result */
A68_32  NPRASIM;  /* OPERATORS - dynamic generator */
{ 
NPRASIM.upb = 2 ;
( KPRASIM_anonymous? A_VLOC(A68_INT ,NPRASIM): A_VHEAP(A68_INT ,NPRASIM) );
MPRASIM = NPRASIM;
} 
*ReturnedValue = (MPRASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  WPRASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  XPRASIM;  /* clause result */
XPRASIM = A68_TRUE;
return( XPRASIM );
} 
#undef NL

A_STATIC A68_VOID  DQRASIM_generator(A68_BOOL  CQRASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  EQRASIM;  /* clause result */
A68_32  FQRASIM;  /* OPERATORS - dynamic generator */
{ 
FQRASIM.upb = 2 ;
( CQRASIM_anonymous? A_VLOC(A68_INT ,FQRASIM): A_VHEAP(A68_INT ,FQRASIM) );
EQRASIM = FQRASIM;
} 
*ReturnedValue = (EQRASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  OQRASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  PQRASIM;  /* clause result */
PQRASIM = A68_TRUE;
return( PQRASIM );
} 
#undef NL

A_STATIC A68_VOID  BRRASIM_generator(A68_BOOL  ARRASIM_anonymous, A68_449  *ReturnedValue)
{ 
A68_449  CRRASIM;  /* clause result */
A68_449  DRRASIM;  /* OPERATORS - dynamic generator */
{ 
DRRASIM.upb = 3 ;
( ARRASIM_anonymous? A_VLOC(A68_442 ,DRRASIM): A_VHEAP(A68_442 ,DRRASIM) );
CRRASIM = DRRASIM;
} 
*ReturnedValue = (CRRASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  JRRASIM_generator(A68_BOOL  IRRASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  KRRASIM;  /* clause result */
A68_32  LRRASIM;  /* OPERATORS - dynamic generator */
{ 
LRRASIM.upb = 2 ;
( IRRASIM_anonymous? A_VLOC(A68_INT ,LRRASIM): A_VHEAP(A68_INT ,LRRASIM) );
KRRASIM = LRRASIM;
} 
*ReturnedValue = (KRRASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  URRASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  VRRASIM;  /* clause result */
VRRASIM = A68_TRUE;
return( VRRASIM );
} 
#undef NL

A_STATIC A68_VOID  BSRASIM_generator(A68_BOOL  ASRASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  CSRASIM;  /* clause result */
A68_32  DSRASIM;  /* OPERATORS - dynamic generator */
{ 
DSRASIM.upb = 2 ;
( ASRASIM_anonymous? A_VLOC(A68_INT ,DSRASIM): A_VHEAP(A68_INT ,DSRASIM) );
CSRASIM = DSRASIM;
} 
*ReturnedValue = (CSRASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  MSRASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  NSRASIM;  /* clause result */
NSRASIM = A68_TRUE;
return( NSRASIM );
} 
#undef NL

A_STATIC A68_VOID  TSRASIM_generator(A68_BOOL  SSRASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  USRASIM;  /* clause result */
A68_32  VSRASIM;  /* OPERATORS - dynamic generator */
{ 
VSRASIM.upb = 2 ;
( SSRASIM_anonymous? A_VLOC(A68_INT ,VSRASIM): A_VHEAP(A68_INT ,VSRASIM) );
USRASIM = VSRASIM;
} 
*ReturnedValue = (USRASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  ETRASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  FTRASIM;  /* clause result */
FTRASIM = A68_TRUE;
return( FTRASIM );
} 
#undef NL

A_STATIC A68_VOID  RTRASIM_generator(A68_BOOL  QTRASIM_anonymous, A68_449  *ReturnedValue)
{ 
A68_449  STRASIM;  /* clause result */
A68_449  TTRASIM;  /* OPERATORS - dynamic generator */
{ 
TTRASIM.upb = 2 ;
( QTRASIM_anonymous? A_VLOC(A68_442 ,TTRASIM): A_VHEAP(A68_442 ,TTRASIM) );
STRASIM = TTRASIM;
} 
*ReturnedValue = (STRASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  ZTRASIM_generator(A68_BOOL  YTRASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  AURASIM;  /* clause result */
A68_32  BURASIM;  /* OPERATORS - dynamic generator */
{ 
BURASIM.upb = 1 ;
( YTRASIM_anonymous? A_VLOC(A68_INT ,BURASIM): A_VHEAP(A68_INT ,BURASIM) );
AURASIM = BURASIM;
} 
*ReturnedValue = (AURASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  GURASIM_generator(A68_BOOL  FURASIM_anonymous, A68_465  *ReturnedValue)
{ 
A68_465  HURASIM;  /* clause result */
A68_465  IURASIM;  /* OPERATORS - dynamic generator */
{ 
IURASIM.upb = 2 ;
( FURASIM_anonymous? A_VLOC(A68_427 ,IURASIM): A_VHEAP(A68_427 ,IURASIM) );
HURASIM = IURASIM;
} 
*ReturnedValue = (HURASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  TURASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  UURASIM;  /* clause result */
 /* line 824: */
UURASIM = A68_TRUE;
return( UURASIM );
} 
#undef NL

A_STATIC A68_VOID  AVRASIM_generator(A68_BOOL  ZURASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  BVRASIM;  /* clause result */
A68_32  CVRASIM;  /* OPERATORS - dynamic generator */
{ 
CVRASIM.upb = 1 ;
( ZURASIM_anonymous? A_VLOC(A68_INT ,CVRASIM): A_VHEAP(A68_INT ,CVRASIM) );
BVRASIM = CVRASIM;
} 
*ReturnedValue = (BVRASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  HVRASIM_generator(A68_BOOL  GVRASIM_anonymous, A68_465  *ReturnedValue)
{ 
A68_465  IVRASIM;  /* clause result */
A68_465  JVRASIM;  /* OPERATORS - dynamic generator */
{ 
JVRASIM.upb = 2 ;
( GVRASIM_anonymous? A_VLOC(A68_427 ,JVRASIM): A_VHEAP(A68_427 ,JVRASIM) );
IVRASIM = JVRASIM;
} 
*ReturnedValue = (IVRASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  UVRASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  VVRASIM;  /* clause result */
 /* line 830: */
VVRASIM = A68_TRUE;
return( VVRASIM );
} 
#undef NL

A_STATIC A68_VOID  HWRASIM_generator(A68_BOOL  GWRASIM_anonymous, A68_449  *ReturnedValue)
{ 
A68_449  IWRASIM;  /* clause result */
A68_449  JWRASIM;  /* OPERATORS - dynamic generator */
{ 
JWRASIM.upb = 2 ;
( GWRASIM_anonymous? A_VLOC(A68_442 ,JWRASIM): A_VHEAP(A68_442 ,JWRASIM) );
IWRASIM = JWRASIM;
} 
*ReturnedValue = (IWRASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  PWRASIM_generator(A68_BOOL  OWRASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  QWRASIM;  /* clause result */
A68_32  RWRASIM;  /* OPERATORS - dynamic generator */
{ 
RWRASIM.upb = 1 ;
( OWRASIM_anonymous? A_VLOC(A68_INT ,RWRASIM): A_VHEAP(A68_INT ,RWRASIM) );
QWRASIM = RWRASIM;
} 
*ReturnedValue = (QWRASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  WWRASIM_generator(A68_BOOL  VWRASIM_anonymous, A68_465  *ReturnedValue)
{ 
A68_465  XWRASIM;  /* clause result */
A68_465  YWRASIM;  /* OPERATORS - dynamic generator */
{ 
YWRASIM.upb = 2 ;
( VWRASIM_anonymous? A_VLOC(A68_427 ,YWRASIM): A_VHEAP(A68_427 ,YWRASIM) );
XWRASIM = YWRASIM;
} 
*ReturnedValue = (XWRASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  JXRASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  KXRASIM;  /* clause result */
 /* line 842: */
KXRASIM = A68_TRUE;
return( KXRASIM );
} 
#undef NL

A_STATIC A68_VOID  QXRASIM_generator(A68_BOOL  PXRASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  RXRASIM;  /* clause result */
A68_32  SXRASIM;  /* OPERATORS - dynamic generator */
{ 
SXRASIM.upb = 1 ;
( PXRASIM_anonymous? A_VLOC(A68_INT ,SXRASIM): A_VHEAP(A68_INT ,SXRASIM) );
RXRASIM = SXRASIM;
} 
*ReturnedValue = (RXRASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  XXRASIM_generator(A68_BOOL  WXRASIM_anonymous, A68_465  *ReturnedValue)
{ 
A68_465  YXRASIM;  /* clause result */
A68_465  ZXRASIM;  /* OPERATORS - dynamic generator */
{ 
ZXRASIM.upb = 2 ;
( WXRASIM_anonymous? A_VLOC(A68_427 ,ZXRASIM): A_VHEAP(A68_427 ,ZXRASIM) );
YXRASIM = ZXRASIM;
} 
*ReturnedValue = (YXRASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  KYRASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  LYRASIM;  /* clause result */
 /* line 848: */
LYRASIM = A68_TRUE;
return( LYRASIM );
} 
#undef NL

A_STATIC A68_VOID  XYRASIM_generator(A68_BOOL  WYRASIM_anonymous, A68_449  *ReturnedValue)
{ 
A68_449  YYRASIM;  /* clause result */
A68_449  ZYRASIM;  /* OPERATORS - dynamic generator */
{ 
ZYRASIM.upb = 1 ;
( WYRASIM_anonymous? A_VLOC(A68_442 ,ZYRASIM): A_VHEAP(A68_442 ,ZYRASIM) );
YYRASIM = ZYRASIM;
} 
*ReturnedValue = (YYRASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  FZRASIM_generator(A68_BOOL  EZRASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  GZRASIM;  /* clause result */
A68_32  HZRASIM;  /* OPERATORS - dynamic generator */
{ 
HZRASIM.upb = 2 ;
( EZRASIM_anonymous? A_VLOC(A68_INT ,HZRASIM): A_VHEAP(A68_INT ,HZRASIM) );
GZRASIM = HZRASIM;
} 
*ReturnedValue = (GZRASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  QZRASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  RZRASIM;  /* clause result */
A68_INT  SZRASIM;  /* YIELD */
A68_INT  TZRASIM;  /* YIELD */
A68_INT  UZRASIM;  /* YIELD */
 /* line 858: */
SZRASIM = 1 ;
TZRASIM = 2 ;
UZRASIM = 1 ;
RZRASIM = (A_VINDEX(O,SZRASIM)==(KGQASIM_max(A_VINDEX(I,UZRASIM), A_VINDEX(I,TZRASIM))+1));
return( RZRASIM );
} 
#undef NL

A_STATIC A68_VOID  GASASIM_generator(A68_BOOL  FASASIM_anonymous, A68_449  *ReturnedValue)
{ 
A68_449  HASASIM;  /* clause result */
A68_449  IASASIM;  /* OPERATORS - dynamic generator */
{ 
IASASIM.upb = 1 ;
( FASASIM_anonymous? A_VLOC(A68_442 ,IASASIM): A_VHEAP(A68_442 ,IASASIM) );
HASASIM = IASASIM;
} 
*ReturnedValue = (HASASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  OASASIM_generator(A68_BOOL  NASASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  PASASIM;  /* clause result */
A68_32  QASASIM;  /* OPERATORS - dynamic generator */
{ 
QASASIM.upb = 2 ;
( NASASIM_anonymous? A_VLOC(A68_INT ,QASASIM): A_VHEAP(A68_INT ,QASASIM) );
PASASIM = QASASIM;
} 
*ReturnedValue = (PASASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  ZASASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  ABSASIM;  /* clause result */
A68_INT  BBSASIM;  /* YIELD */
A68_INT  CBSASIM;  /* YIELD */
A68_INT  DBSASIM;  /* YIELD */
 /* line 868: */
BBSASIM = 1 ;
CBSASIM = 2 ;
DBSASIM = 1 ;
ABSASIM = (A_VINDEX(O,BBSASIM)==(KGQASIM_max(A_VINDEX(I,DBSASIM), A_VINDEX(I,CBSASIM))+1));
return( ABSASIM );
} 
#undef NL

A_STATIC A68_VOID  PBSASIM_generator(A68_BOOL  OBSASIM_anonymous, A68_449  *ReturnedValue)
{ 
A68_449  QBSASIM;  /* clause result */
A68_449  RBSASIM;  /* OPERATORS - dynamic generator */
{ 
RBSASIM.upb = 1 ;
( OBSASIM_anonymous? A_VLOC(A68_442 ,RBSASIM): A_VHEAP(A68_442 ,RBSASIM) );
QBSASIM = RBSASIM;
} 
*ReturnedValue = (QBSASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  XBSASIM_generator(A68_BOOL  WBSASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  YBSASIM;  /* clause result */
A68_32  ZBSASIM;  /* OPERATORS - dynamic generator */
{ 
ZBSASIM.upb = 2 ;
( WBSASIM_anonymous? A_VLOC(A68_INT ,ZBSASIM): A_VHEAP(A68_INT ,ZBSASIM) );
YBSASIM = ZBSASIM;
} 
*ReturnedValue = (YBSASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  ICSASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  JCSASIM;  /* clause result */
A68_INT  KCSASIM;  /* YIELD */
A68_INT  LCSASIM;  /* YIELD */
A68_INT  MCSASIM;  /* YIELD */
 /* line 878: */
KCSASIM = 1 ;
LCSASIM = 2 ;
MCSASIM = 1 ;
JCSASIM = (A_VINDEX(O,KCSASIM)==(KGQASIM_max(A_VINDEX(I,MCSASIM), A_VINDEX(I,LCSASIM))+1));
return( JCSASIM );
} 
#undef NL

A_STATIC A68_VOID  YCSASIM_generator(A68_BOOL  XCSASIM_anonymous, A68_449  *ReturnedValue)
{ 
A68_449  ZCSASIM;  /* clause result */
A68_449  ADSASIM;  /* OPERATORS - dynamic generator */
{ 
ADSASIM.upb = 1 ;
( XCSASIM_anonymous? A_VLOC(A68_442 ,ADSASIM): A_VHEAP(A68_442 ,ADSASIM) );
ZCSASIM = ADSASIM;
} 
*ReturnedValue = (ZCSASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  GDSASIM_generator(A68_BOOL  FDSASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  HDSASIM;  /* clause result */
A68_32  IDSASIM;  /* OPERATORS - dynamic generator */
{ 
IDSASIM.upb = 2 ;
( FDSASIM_anonymous? A_VLOC(A68_INT ,IDSASIM): A_VHEAP(A68_INT ,IDSASIM) );
HDSASIM = IDSASIM;
} 
*ReturnedValue = (HDSASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  RDSASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  SDSASIM;  /* clause result */
A68_INT  TDSASIM;  /* YIELD */
A68_INT  UDSASIM;  /* YIELD */
A68_INT  VDSASIM;  /* YIELD */
 /* line 888: */
TDSASIM = 1 ;
UDSASIM = 2 ;
VDSASIM = 1 ;
SDSASIM = (A_VINDEX(O,TDSASIM)==(KGQASIM_max(A_VINDEX(I,VDSASIM), A_VINDEX(I,UDSASIM))+1));
return( SDSASIM );
} 
#undef NL

A_STATIC A68_VOID  HESASIM_generator(A68_BOOL  GESASIM_anonymous, A68_449  *ReturnedValue)
{ 
A68_449  IESASIM;  /* clause result */
A68_449  JESASIM;  /* OPERATORS - dynamic generator */
{ 
JESASIM.upb = 1 ;
( GESASIM_anonymous? A_VLOC(A68_442 ,JESASIM): A_VHEAP(A68_442 ,JESASIM) );
IESASIM = JESASIM;
} 
*ReturnedValue = (IESASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  PESASIM_generator(A68_BOOL  OESASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  QESASIM;  /* clause result */
A68_32  RESASIM;  /* OPERATORS - dynamic generator */
{ 
RESASIM.upb = 2 ;
( OESASIM_anonymous? A_VLOC(A68_INT ,RESASIM): A_VHEAP(A68_INT ,RESASIM) );
QESASIM = RESASIM;
} 
*ReturnedValue = (QESASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  AFSASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  BFSASIM;  /* clause result */
A68_INT  CFSASIM;  /* YIELD */
A68_INT  DFSASIM;  /* YIELD */
A68_INT  EFSASIM;  /* YIELD */
 /* line 898: */
CFSASIM = 1 ;
DFSASIM = 1 ;
EFSASIM = 2 ;
BFSASIM = (A_VINDEX(O,CFSASIM)==(A_VINDEX(I,DFSASIM)+A_VINDEX(I,EFSASIM)));
return( BFSASIM );
} 
#undef NL

A_STATIC A68_VOID  QFSASIM_generator(A68_BOOL  PFSASIM_anonymous, A68_449  *ReturnedValue)
{ 
A68_449  RFSASIM;  /* clause result */
A68_449  SFSASIM;  /* OPERATORS - dynamic generator */
{ 
SFSASIM.upb = 1 ;
( PFSASIM_anonymous? A_VLOC(A68_442 ,SFSASIM): A_VHEAP(A68_442 ,SFSASIM) );
RFSASIM = SFSASIM;
} 
*ReturnedValue = (RFSASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  YFSASIM_generator(A68_BOOL  XFSASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  ZFSASIM;  /* clause result */
A68_32  AGSASIM;  /* OPERATORS - dynamic generator */
{ 
AGSASIM.upb = 2 ;
( XFSASIM_anonymous? A_VLOC(A68_INT ,AGSASIM): A_VHEAP(A68_INT ,AGSASIM) );
ZFSASIM = AGSASIM;
} 
*ReturnedValue = (ZFSASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  JGSASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  KGSASIM;  /* clause result */
A68_INT  LGSASIM;  /* YIELD */
A68_INT  MGSASIM;  /* YIELD */
A68_INT  NGSASIM;  /* YIELD */
 /* line 908: */
LGSASIM = 1 ;
MGSASIM = 1 ;
NGSASIM = 2 ;
KGSASIM = (A_VINDEX(O,LGSASIM)==(A_VINDEX(I,MGSASIM)+A_VINDEX(I,NGSASIM)));
return( KGSASIM );
} 
#undef NL

A_STATIC A68_VOID  ZGSASIM_generator(A68_BOOL  YGSASIM_anonymous, A68_449  *ReturnedValue)
{ 
A68_449  AHSASIM;  /* clause result */
A68_449  BHSASIM;  /* OPERATORS - dynamic generator */
{ 
BHSASIM.upb = 1 ;
( YGSASIM_anonymous? A_VLOC(A68_442 ,BHSASIM): A_VHEAP(A68_442 ,BHSASIM) );
AHSASIM = BHSASIM;
} 
*ReturnedValue = (AHSASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  HHSASIM_generator(A68_BOOL  GHSASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  IHSASIM;  /* clause result */
A68_32  JHSASIM;  /* OPERATORS - dynamic generator */
{ 
JHSASIM.upb = 1 ;
( GHSASIM_anonymous? A_VLOC(A68_INT ,JHSASIM): A_VHEAP(A68_INT ,JHSASIM) );
IHSASIM = JHSASIM;
} 
*ReturnedValue = (IHSASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  RHSASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  SHSASIM;  /* clause result */
A68_INT  THSASIM;  /* YIELD */
A68_INT  UHSASIM;  /* YIELD */
 /* line 918: */
THSASIM = 1 ;
UHSASIM = 1 ;
SHSASIM = (A_VINDEX(O,THSASIM)==(A_VINDEX(I,UHSASIM)+1));
return( SHSASIM );
} 
#undef NL

A_STATIC A68_VOID  GISASIM_generator(A68_BOOL  FISASIM_anonymous, A68_449  *ReturnedValue)
{ 
A68_449  HISASIM;  /* clause result */
A68_449  IISASIM;  /* OPERATORS - dynamic generator */
{ 
IISASIM.upb = 1 ;
( FISASIM_anonymous? A_VLOC(A68_442 ,IISASIM): A_VHEAP(A68_442 ,IISASIM) );
HISASIM = IISASIM;
} 
*ReturnedValue = (HISASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  OISASIM_generator(A68_BOOL  NISASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  PISASIM;  /* clause result */
A68_32  QISASIM;  /* OPERATORS - dynamic generator */
{ 
QISASIM.upb = 1 ;
( NISASIM_anonymous? A_VLOC(A68_INT ,QISASIM): A_VHEAP(A68_INT ,QISASIM) );
PISASIM = QISASIM;
} 
*ReturnedValue = (PISASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  YISASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  ZISASIM;  /* clause result */
A68_INT  AJSASIM;  /* YIELD */
A68_INT  BJSASIM;  /* YIELD */
 /* line 928: */
AJSASIM = 1 ;
BJSASIM = 1 ;
ZISASIM = (A_VINDEX(O,AJSASIM)==(A_VINDEX(I,BJSASIM)+1));
return( ZISASIM );
} 
#undef NL

A_STATIC A68_VOID  NJSASIM_generator(A68_BOOL  MJSASIM_anonymous, A68_449  *ReturnedValue)
{ 
A68_449  OJSASIM;  /* clause result */
A68_449  PJSASIM;  /* OPERATORS - dynamic generator */
{ 
PJSASIM.upb = 1 ;
( MJSASIM_anonymous? A_VLOC(A68_442 ,PJSASIM): A_VHEAP(A68_442 ,PJSASIM) );
OJSASIM = PJSASIM;
} 
*ReturnedValue = (OJSASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  VJSASIM_generator(A68_BOOL  UJSASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  WJSASIM;  /* clause result */
A68_32  XJSASIM;  /* OPERATORS - dynamic generator */
{ 
XJSASIM.upb = 1 ;
( UJSASIM_anonymous? A_VLOC(A68_INT ,XJSASIM): A_VHEAP(A68_INT ,XJSASIM) );
WJSASIM = XJSASIM;
} 
*ReturnedValue = (WJSASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  FKSASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  GKSASIM;  /* clause result */
A68_INT  HKSASIM;  /* YIELD */
A68_INT  IKSASIM;  /* YIELD */
 /* line 938: */
HKSASIM = 1 ;
IKSASIM = 1 ;
GKSASIM = (A_VINDEX(O,HKSASIM)==A_VINDEX(I,IKSASIM));
return( GKSASIM );
} 
#undef NL

A_STATIC A68_VOID  UKSASIM_generator(A68_BOOL  TKSASIM_anonymous, A68_449  *ReturnedValue)
{ 
A68_449  VKSASIM;  /* clause result */
A68_449  WKSASIM;  /* OPERATORS - dynamic generator */
{ 
WKSASIM.upb = 1 ;
( TKSASIM_anonymous? A_VLOC(A68_442 ,WKSASIM): A_VHEAP(A68_442 ,WKSASIM) );
VKSASIM = WKSASIM;
} 
*ReturnedValue = (VKSASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  CLSASIM_generator(A68_BOOL  BLSASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  DLSASIM;  /* clause result */
A68_32  ELSASIM;  /* OPERATORS - dynamic generator */
{ 
ELSASIM.upb = 1 ;
( BLSASIM_anonymous? A_VLOC(A68_INT ,ELSASIM): A_VHEAP(A68_INT ,ELSASIM) );
DLSASIM = ELSASIM;
} 
*ReturnedValue = (DLSASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  MLSASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  NLSASIM;  /* clause result */
A68_INT  OLSASIM;  /* YIELD */
A68_INT  PLSASIM;  /* YIELD */
 /* line 948: */
OLSASIM = 1 ;
PLSASIM = 1 ;
NLSASIM = (A_VINDEX(O,OLSASIM)==((A_VINDEX(I,PLSASIM)+1)/2));
return( NLSASIM );
} 
#undef NL

A_STATIC A68_VOID  BMSASIM_generator(A68_BOOL  AMSASIM_anonymous, A68_449  *ReturnedValue)
{ 
A68_449  CMSASIM;  /* clause result */
A68_449  DMSASIM;  /* OPERATORS - dynamic generator */
{ 
DMSASIM.upb = 1 ;
( AMSASIM_anonymous? A_VLOC(A68_442 ,DMSASIM): A_VHEAP(A68_442 ,DMSASIM) );
CMSASIM = DMSASIM;
} 
*ReturnedValue = (CMSASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  JMSASIM_generator(A68_BOOL  IMSASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  KMSASIM;  /* clause result */
A68_32  LMSASIM;  /* OPERATORS - dynamic generator */
{ 
LMSASIM.upb = 2 ;
( IMSASIM_anonymous? A_VLOC(A68_INT ,LMSASIM): A_VHEAP(A68_INT ,LMSASIM) );
KMSASIM = LMSASIM;
} 
*ReturnedValue = (KMSASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  RMSASIM_generator(A68_BOOL  QMSASIM_anonymous, A68_465  *ReturnedValue)
{ 
A68_465  SMSASIM;  /* clause result */
A68_465  TMSASIM;  /* OPERATORS - dynamic generator */
{ 
TMSASIM.upb = 3 ;
( QMSASIM_anonymous? A_VLOC(A68_427 ,TMSASIM): A_VHEAP(A68_427 ,TMSASIM) );
SMSASIM = TMSASIM;
} 
*ReturnedValue = (SMSASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  FNSASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  GNSASIM;  /* clause result */
A68_INT  HNSASIM;  /* YIELD */
A68_INT  INSASIM;  /* YIELD */
A68_INT  JNSASIM;  /* YIELD */
A68_INT  KNSASIM;  /* YIELD */
 /* line 959: */
HNSASIM = 1 ;
INSASIM = 1 ;
JNSASIM = 2 ;
KNSASIM = 2 ;
GNSASIM = ((A_VINDEX(O,HNSASIM)==A_VINDEX(I,INSASIM))&(A_VINDEX(O,JNSASIM)==A_VINDEX(I,KNSASIM)));
return( GNSASIM );
} 
#undef NL

A_STATIC A68_VOID  WNSASIM_generator(A68_BOOL  VNSASIM_anonymous, A68_449  *ReturnedValue)
{ 
A68_449  XNSASIM;  /* clause result */
A68_449  YNSASIM;  /* OPERATORS - dynamic generator */
{ 
YNSASIM.upb = 1 ;
( VNSASIM_anonymous? A_VLOC(A68_442 ,YNSASIM): A_VHEAP(A68_442 ,YNSASIM) );
XNSASIM = YNSASIM;
} 
*ReturnedValue = (XNSASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  EOSASIM_generator(A68_BOOL  DOSASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  FOSASIM;  /* clause result */
A68_32  GOSASIM;  /* OPERATORS - dynamic generator */
{ 
GOSASIM.upb = 2 ;
( DOSASIM_anonymous? A_VLOC(A68_INT ,GOSASIM): A_VHEAP(A68_INT ,GOSASIM) );
FOSASIM = GOSASIM;
} 
*ReturnedValue = (FOSASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  MOSASIM_generator(A68_BOOL  LOSASIM_anonymous, A68_465  *ReturnedValue)
{ 
A68_465  NOSASIM;  /* clause result */
A68_465  OOSASIM;  /* OPERATORS - dynamic generator */
{ 
OOSASIM.upb = 3 ;
( LOSASIM_anonymous? A_VLOC(A68_427 ,OOSASIM): A_VHEAP(A68_427 ,OOSASIM) );
NOSASIM = OOSASIM;
} 
*ReturnedValue = (NOSASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  APSASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  BPSASIM;  /* clause result */
A68_INT  CPSASIM;  /* YIELD */
A68_INT  DPSASIM;  /* YIELD */
A68_INT  EPSASIM;  /* YIELD */
A68_INT  FPSASIM;  /* YIELD */
 /* line 970: */
CPSASIM = 1 ;
DPSASIM = 1 ;
EPSASIM = 2 ;
FPSASIM = 2 ;
BPSASIM = ((A_VINDEX(O,CPSASIM)==A_VINDEX(I,DPSASIM))&(A_VINDEX(O,EPSASIM)==A_VINDEX(I,FPSASIM)));
return( BPSASIM );
} 
#undef NL

A_STATIC A68_VOID  RPSASIM_generator(A68_BOOL  QPSASIM_anonymous, A68_449  *ReturnedValue)
{ 
A68_449  SPSASIM;  /* clause result */
A68_449  TPSASIM;  /* OPERATORS - dynamic generator */
{ 
TPSASIM.upb = 1 ;
( QPSASIM_anonymous? A_VLOC(A68_442 ,TPSASIM): A_VHEAP(A68_442 ,TPSASIM) );
SPSASIM = TPSASIM;
} 
*ReturnedValue = (SPSASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  ZPSASIM_generator(A68_BOOL  YPSASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  AQSASIM;  /* clause result */
A68_32  BQSASIM;  /* OPERATORS - dynamic generator */
{ 
BQSASIM.upb = 2 ;
( YPSASIM_anonymous? A_VLOC(A68_INT ,BQSASIM): A_VHEAP(A68_INT ,BQSASIM) );
AQSASIM = BQSASIM;
} 
*ReturnedValue = (AQSASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  HQSASIM_generator(A68_BOOL  GQSASIM_anonymous, A68_465  *ReturnedValue)
{ 
A68_465  IQSASIM;  /* clause result */
A68_465  JQSASIM;  /* OPERATORS - dynamic generator */
{ 
JQSASIM.upb = 2 ;
( GQSASIM_anonymous? A_VLOC(A68_427 ,JQSASIM): A_VHEAP(A68_427 ,JQSASIM) );
IQSASIM = JQSASIM;
} 
*ReturnedValue = (IQSASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  UQSASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  VQSASIM;  /* clause result */
A68_INT  WQSASIM;  /* YIELD */
A68_INT  XQSASIM;  /* YIELD */
 /* line 981: */
WQSASIM = 1 ;
XQSASIM = 2 ;
VQSASIM = (A_VINDEX(O,WQSASIM)==A_VINDEX(I,XQSASIM));
return( VQSASIM );
} 
#undef NL

A_STATIC A68_VOID  JRSASIM_generator(A68_BOOL  IRSASIM_anonymous, A68_449  *ReturnedValue)
{ 
A68_449  KRSASIM;  /* clause result */
A68_449  LRSASIM;  /* OPERATORS - dynamic generator */
{ 
LRSASIM.upb = 1 ;
( IRSASIM_anonymous? A_VLOC(A68_442 ,LRSASIM): A_VHEAP(A68_442 ,LRSASIM) );
KRSASIM = LRSASIM;
} 
*ReturnedValue = (KRSASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  RRSASIM_generator(A68_BOOL  QRSASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  SRSASIM;  /* clause result */
A68_32  TRSASIM;  /* OPERATORS - dynamic generator */
{ 
TRSASIM.upb = 2 ;
( QRSASIM_anonymous? A_VLOC(A68_INT ,TRSASIM): A_VHEAP(A68_INT ,TRSASIM) );
SRSASIM = TRSASIM;
} 
*ReturnedValue = (SRSASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  ZRSASIM_generator(A68_BOOL  YRSASIM_anonymous, A68_465  *ReturnedValue)
{ 
A68_465  ASSASIM;  /* clause result */
A68_465  BSSASIM;  /* OPERATORS - dynamic generator */
{ 
BSSASIM.upb = 2 ;
( YRSASIM_anonymous? A_VLOC(A68_427 ,BSSASIM): A_VHEAP(A68_427 ,BSSASIM) );
ASSASIM = BSSASIM;
} 
*ReturnedValue = (ASSASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  MSSASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  NSSASIM;  /* clause result */
A68_INT  OSSASIM;  /* YIELD */
A68_INT  PSSASIM;  /* YIELD */
 /* line 992: */
OSSASIM = 1 ;
PSSASIM = 2 ;
NSSASIM = (A_VINDEX(O,OSSASIM)==A_VINDEX(I,PSSASIM));
return( NSSASIM );
} 
#undef NL

A_STATIC A68_VOID  BTSASIM_generator(A68_BOOL  ATSASIM_anonymous, A68_449  *ReturnedValue)
{ 
A68_449  CTSASIM;  /* clause result */
A68_449  DTSASIM;  /* OPERATORS - dynamic generator */
{ 
DTSASIM.upb = 1 ;
( ATSASIM_anonymous? A_VLOC(A68_442 ,DTSASIM): A_VHEAP(A68_442 ,DTSASIM) );
CTSASIM = DTSASIM;
} 
*ReturnedValue = (CTSASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  JTSASIM_generator(A68_BOOL  ITSASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  KTSASIM;  /* clause result */
A68_32  LTSASIM;  /* OPERATORS - dynamic generator */
{ 
LTSASIM.upb = 1 ;
( ITSASIM_anonymous? A_VLOC(A68_INT ,LTSASIM): A_VHEAP(A68_INT ,LTSASIM) );
KTSASIM = LTSASIM;
} 
*ReturnedValue = (KTSASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  QTSASIM_generator(A68_BOOL  PTSASIM_anonymous, A68_465  *ReturnedValue)
{ 
A68_465  RTSASIM;  /* clause result */
A68_465  STSASIM;  /* OPERATORS - dynamic generator */
{ 
STSASIM.upb = 2 ;
( PTSASIM_anonymous? A_VLOC(A68_427 ,STSASIM): A_VHEAP(A68_427 ,STSASIM) );
RTSASIM = STSASIM;
} 
*ReturnedValue = (RTSASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  DUSASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  EUSASIM;  /* clause result */
 /* line 1003: */
EUSASIM = A68_TRUE;
return( EUSASIM );
} 
#undef NL

A_STATIC A68_VOID  QUSASIM_generator(A68_BOOL  PUSASIM_anonymous, A68_449  *ReturnedValue)
{ 
A68_449  RUSASIM;  /* clause result */
A68_449  SUSASIM;  /* OPERATORS - dynamic generator */
{ 
SUSASIM.upb = 1 ;
( PUSASIM_anonymous? A_VLOC(A68_442 ,SUSASIM): A_VHEAP(A68_442 ,SUSASIM) );
RUSASIM = SUSASIM;
} 
*ReturnedValue = (RUSASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  YUSASIM_generator(A68_BOOL  XUSASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  ZUSASIM;  /* clause result */
A68_32  AVSASIM;  /* OPERATORS - dynamic generator */
{ 
AVSASIM.upb = 1 ;
( XUSASIM_anonymous? A_VLOC(A68_INT ,AVSASIM): A_VHEAP(A68_INT ,AVSASIM) );
ZUSASIM = AVSASIM;
} 
*ReturnedValue = (ZUSASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  FVSASIM_generator(A68_BOOL  EVSASIM_anonymous, A68_465  *ReturnedValue)
{ 
A68_465  GVSASIM;  /* clause result */
A68_465  HVSASIM;  /* OPERATORS - dynamic generator */
{ 
HVSASIM.upb = 2 ;
( EVSASIM_anonymous? A_VLOC(A68_427 ,HVSASIM): A_VHEAP(A68_427 ,HVSASIM) );
GVSASIM = HVSASIM;
} 
*ReturnedValue = (GVSASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  SVSASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  TVSASIM;  /* clause result */
 /* line 1014: */
TVSASIM = A68_TRUE;
return( TVSASIM );
} 
#undef NL

A_STATIC A68_VOID  FWSASIM_generator(A68_BOOL  EWSASIM_anonymous, A68_449  *ReturnedValue)
{ 
A68_449  GWSASIM;  /* clause result */
A68_449  HWSASIM;  /* OPERATORS - dynamic generator */
{ 
HWSASIM.upb = 1 ;
( EWSASIM_anonymous? A_VLOC(A68_442 ,HWSASIM): A_VHEAP(A68_442 ,HWSASIM) );
GWSASIM = HWSASIM;
} 
*ReturnedValue = (GWSASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  NWSASIM_generator(A68_BOOL  MWSASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  OWSASIM;  /* clause result */
A68_32  PWSASIM;  /* OPERATORS - dynamic generator */
{ 
PWSASIM.upb = 2 ;
( MWSASIM_anonymous? A_VLOC(A68_INT ,PWSASIM): A_VHEAP(A68_INT ,PWSASIM) );
OWSASIM = PWSASIM;
} 
*ReturnedValue = (OWSASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  YWSASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  ZWSASIM;  /* clause result */
 /* line 1024: */
ZWSASIM = A68_TRUE;
return( ZWSASIM );
} 
#undef NL

A_STATIC A68_VOID  LXSASIM_generator(A68_BOOL  KXSASIM_anonymous, A68_449  *ReturnedValue)
{ 
A68_449  MXSASIM;  /* clause result */
A68_449  NXSASIM;  /* OPERATORS - dynamic generator */
{ 
NXSASIM.upb = 1 ;
( KXSASIM_anonymous? A_VLOC(A68_442 ,NXSASIM): A_VHEAP(A68_442 ,NXSASIM) );
MXSASIM = NXSASIM;
} 
*ReturnedValue = (MXSASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  TXSASIM_generator(A68_BOOL  SXSASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  UXSASIM;  /* clause result */
A68_32  VXSASIM;  /* OPERATORS - dynamic generator */
{ 
VXSASIM.upb = 2 ;
( SXSASIM_anonymous? A_VLOC(A68_INT ,VXSASIM): A_VHEAP(A68_INT ,VXSASIM) );
UXSASIM = VXSASIM;
} 
*ReturnedValue = (UXSASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  EYSASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  FYSASIM;  /* clause result */
 /* line 1034: */
FYSASIM = A68_TRUE;
return( FYSASIM );
} 
#undef NL

A_STATIC A68_VOID  RYSASIM_generator(A68_BOOL  QYSASIM_anonymous, A68_449  *ReturnedValue)
{ 
A68_449  SYSASIM;  /* clause result */
A68_449  TYSASIM;  /* OPERATORS - dynamic generator */
{ 
TYSASIM.upb = 1 ;
( QYSASIM_anonymous? A_VLOC(A68_442 ,TYSASIM): A_VHEAP(A68_442 ,TYSASIM) );
SYSASIM = TYSASIM;
} 
*ReturnedValue = (SYSASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  ZYSASIM_generator(A68_BOOL  YYSASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  AZSASIM;  /* clause result */
A68_32  BZSASIM;  /* OPERATORS - dynamic generator */
{ 
BZSASIM.upb = 2 ;
( YYSASIM_anonymous? A_VLOC(A68_INT ,BZSASIM): A_VHEAP(A68_INT ,BZSASIM) );
AZSASIM = BZSASIM;
} 
*ReturnedValue = (AZSASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  KZSASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  LZSASIM;  /* clause result */
 /* line 1044: */
LZSASIM = A68_TRUE;
return( LZSASIM );
} 
#undef NL

A_STATIC A68_VOID  XZSASIM_generator(A68_BOOL  WZSASIM_anonymous, A68_449  *ReturnedValue)
{ 
A68_449  YZSASIM;  /* clause result */
A68_449  ZZSASIM;  /* OPERATORS - dynamic generator */
{ 
ZZSASIM.upb = 1 ;
( WZSASIM_anonymous? A_VLOC(A68_442 ,ZZSASIM): A_VHEAP(A68_442 ,ZZSASIM) );
YZSASIM = ZZSASIM;
} 
*ReturnedValue = (YZSASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  FATASIM_generator(A68_BOOL  EATASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  GATASIM;  /* clause result */
A68_32  HATASIM;  /* OPERATORS - dynamic generator */
{ 
HATASIM.upb = 2 ;
( EATASIM_anonymous? A_VLOC(A68_INT ,HATASIM): A_VHEAP(A68_INT ,HATASIM) );
GATASIM = HATASIM;
} 
*ReturnedValue = (GATASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  QATASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  RATASIM;  /* clause result */
 /* line 1054: */
RATASIM = A68_TRUE;
return( RATASIM );
} 
#undef NL

A_STATIC A68_VOID  DBTASIM_generator(A68_BOOL  CBTASIM_anonymous, A68_449  *ReturnedValue)
{ 
A68_449  EBTASIM;  /* clause result */
A68_449  FBTASIM;  /* OPERATORS - dynamic generator */
{ 
FBTASIM.upb = 1 ;
( CBTASIM_anonymous? A_VLOC(A68_442 ,FBTASIM): A_VHEAP(A68_442 ,FBTASIM) );
EBTASIM = FBTASIM;
} 
*ReturnedValue = (EBTASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  LBTASIM_generator(A68_BOOL  KBTASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  MBTASIM;  /* clause result */
A68_32  NBTASIM;  /* OPERATORS - dynamic generator */
{ 
NBTASIM.upb = 2 ;
( KBTASIM_anonymous? A_VLOC(A68_INT ,NBTASIM): A_VHEAP(A68_INT ,NBTASIM) );
MBTASIM = NBTASIM;
} 
*ReturnedValue = (MBTASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  WBTASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  XBTASIM;  /* clause result */
 /* line 1064: */
XBTASIM = A68_TRUE;
return( XBTASIM );
} 
#undef NL

A_STATIC A68_VOID  JCTASIM_generator(A68_BOOL  ICTASIM_anonymous, A68_449  *ReturnedValue)
{ 
A68_449  KCTASIM;  /* clause result */
A68_449  LCTASIM;  /* OPERATORS - dynamic generator */
{ 
LCTASIM.upb = 1 ;
( ICTASIM_anonymous? A_VLOC(A68_442 ,LCTASIM): A_VHEAP(A68_442 ,LCTASIM) );
KCTASIM = LCTASIM;
} 
*ReturnedValue = (KCTASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  RCTASIM_generator(A68_BOOL  QCTASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  SCTASIM;  /* clause result */
A68_32  TCTASIM;  /* OPERATORS - dynamic generator */
{ 
TCTASIM.upb = 2 ;
( QCTASIM_anonymous? A_VLOC(A68_INT ,TCTASIM): A_VHEAP(A68_INT ,TCTASIM) );
SCTASIM = TCTASIM;
} 
*ReturnedValue = (SCTASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  CDTASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  DDTASIM;  /* clause result */
 /* line 1074: */
DDTASIM = A68_TRUE;
return( DDTASIM );
} 
#undef NL

A_STATIC A68_VOID  PDTASIM_generator(A68_BOOL  ODTASIM_anonymous, A68_449  *ReturnedValue)
{ 
A68_449  QDTASIM;  /* clause result */
A68_449  RDTASIM;  /* OPERATORS - dynamic generator */
{ 
RDTASIM.upb = 1 ;
( ODTASIM_anonymous? A_VLOC(A68_442 ,RDTASIM): A_VHEAP(A68_442 ,RDTASIM) );
QDTASIM = RDTASIM;
} 
*ReturnedValue = (QDTASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  XDTASIM_generator(A68_BOOL  WDTASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  YDTASIM;  /* clause result */
A68_32  ZDTASIM;  /* OPERATORS - dynamic generator */
{ 
ZDTASIM.upb = 2 ;
( WDTASIM_anonymous? A_VLOC(A68_INT ,ZDTASIM): A_VHEAP(A68_INT ,ZDTASIM) );
YDTASIM = ZDTASIM;
} 
*ReturnedValue = (YDTASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  IETASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  JETASIM;  /* clause result */
 /* line 1084: */
JETASIM = A68_TRUE;
return( JETASIM );
} 
#undef NL

A_STATIC A68_VOID  VETASIM_generator(A68_BOOL  UETASIM_anonymous, A68_449  *ReturnedValue)
{ 
A68_449  WETASIM;  /* clause result */
A68_449  XETASIM;  /* OPERATORS - dynamic generator */
{ 
XETASIM.upb = 1 ;
( UETASIM_anonymous? A_VLOC(A68_442 ,XETASIM): A_VHEAP(A68_442 ,XETASIM) );
WETASIM = XETASIM;
} 
*ReturnedValue = (WETASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  DFTASIM_generator(A68_BOOL  CFTASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  EFTASIM;  /* clause result */
A68_32  FFTASIM;  /* OPERATORS - dynamic generator */
{ 
FFTASIM.upb = 2 ;
( CFTASIM_anonymous? A_VLOC(A68_INT ,FFTASIM): A_VHEAP(A68_INT ,FFTASIM) );
EFTASIM = FFTASIM;
} 
*ReturnedValue = (EFTASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  OFTASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  PFTASIM;  /* clause result */
 /* line 1094: */
PFTASIM = A68_TRUE;
return( PFTASIM );
} 
#undef NL

A_STATIC A68_VOID  BGTASIM_generator(A68_BOOL  AGTASIM_anonymous, A68_449  *ReturnedValue)
{ 
A68_449  CGTASIM;  /* clause result */
A68_449  DGTASIM;  /* OPERATORS - dynamic generator */
{ 
DGTASIM.upb = 1 ;
( AGTASIM_anonymous? A_VLOC(A68_442 ,DGTASIM): A_VHEAP(A68_442 ,DGTASIM) );
CGTASIM = DGTASIM;
} 
*ReturnedValue = (CGTASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  JGTASIM_generator(A68_BOOL  IGTASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  KGTASIM;  /* clause result */
A68_32  LGTASIM;  /* OPERATORS - dynamic generator */
{ 
LGTASIM.upb = 2 ;
( IGTASIM_anonymous? A_VLOC(A68_INT ,LGTASIM): A_VHEAP(A68_INT ,LGTASIM) );
KGTASIM = LGTASIM;
} 
*ReturnedValue = (KGTASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  UGTASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  VGTASIM;  /* clause result */
 /* line 1104: */
VGTASIM = A68_TRUE;
return( VGTASIM );
} 
#undef NL

A_STATIC A68_VOID  HHTASIM_generator(A68_BOOL  GHTASIM_anonymous, A68_449  *ReturnedValue)
{ 
A68_449  IHTASIM;  /* clause result */
A68_449  JHTASIM;  /* OPERATORS - dynamic generator */
{ 
JHTASIM.upb = 1 ;
( GHTASIM_anonymous? A_VLOC(A68_442 ,JHTASIM): A_VHEAP(A68_442 ,JHTASIM) );
IHTASIM = JHTASIM;
} 
*ReturnedValue = (IHTASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  PHTASIM_generator(A68_BOOL  OHTASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  QHTASIM;  /* clause result */
A68_32  RHTASIM;  /* OPERATORS - dynamic generator */
{ 
RHTASIM.upb = 2 ;
( OHTASIM_anonymous? A_VLOC(A68_INT ,RHTASIM): A_VHEAP(A68_INT ,RHTASIM) );
QHTASIM = RHTASIM;
} 
*ReturnedValue = (QHTASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  AITASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  BITASIM;  /* clause result */
 /* line 1114: */
BITASIM = A68_TRUE;
return( BITASIM );
} 
#undef NL

A_STATIC A68_VOID  NITASIM_generator(A68_BOOL  MITASIM_anonymous, A68_449  *ReturnedValue)
{ 
A68_449  OITASIM;  /* clause result */
A68_449  PITASIM;  /* OPERATORS - dynamic generator */
{ 
PITASIM.upb = 2 ;
( MITASIM_anonymous? A_VLOC(A68_442 ,PITASIM): A_VHEAP(A68_442 ,PITASIM) );
OITASIM = PITASIM;
} 
*ReturnedValue = (OITASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  VITASIM_generator(A68_BOOL  UITASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  WITASIM;  /* clause result */
A68_32  XITASIM;  /* OPERATORS - dynamic generator */
{ 
XITASIM.upb = 1 ;
( UITASIM_anonymous? A_VLOC(A68_INT ,XITASIM): A_VHEAP(A68_INT ,XITASIM) );
WITASIM = XITASIM;
} 
*ReturnedValue = (WITASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  CJTASIM_generator(A68_BOOL  BJTASIM_anonymous, A68_465  *ReturnedValue)
{ 
A68_465  DJTASIM;  /* clause result */
A68_465  EJTASIM;  /* OPERATORS - dynamic generator */
{ 
EJTASIM.upb = 2 ;
( BJTASIM_anonymous? A_VLOC(A68_427 ,EJTASIM): A_VHEAP(A68_427 ,EJTASIM) );
DJTASIM = EJTASIM;
} 
*ReturnedValue = (DJTASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  PJTASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  QJTASIM;  /* clause result */
 /* line 1125: */
QJTASIM = A68_TRUE;
return( QJTASIM );
} 
#undef NL

A_STATIC A68_VOID  WJTASIM_generator(A68_BOOL  VJTASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  XJTASIM;  /* clause result */
A68_32  YJTASIM;  /* OPERATORS - dynamic generator */
{ 
YJTASIM.upb = 1 ;
( VJTASIM_anonymous? A_VLOC(A68_INT ,YJTASIM): A_VHEAP(A68_INT ,YJTASIM) );
XJTASIM = YJTASIM;
} 
*ReturnedValue = (XJTASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  DKTASIM_generator(A68_BOOL  CKTASIM_anonymous, A68_465  *ReturnedValue)
{ 
A68_465  EKTASIM;  /* clause result */
A68_465  FKTASIM;  /* OPERATORS - dynamic generator */
{ 
FKTASIM.upb = 2 ;
( CKTASIM_anonymous? A_VLOC(A68_427 ,FKTASIM): A_VHEAP(A68_427 ,FKTASIM) );
EKTASIM = FKTASIM;
} 
*ReturnedValue = (EKTASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  QKTASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  RKTASIM;  /* clause result */
 /* line 1130: */
RKTASIM = A68_TRUE;
return( RKTASIM );
} 
#undef NL

A_STATIC A68_VOID  DLTASIM_generator(A68_BOOL  CLTASIM_anonymous, A68_449  *ReturnedValue)
{ 
A68_449  ELTASIM;  /* clause result */
A68_449  FLTASIM;  /* OPERATORS - dynamic generator */
{ 
FLTASIM.upb = 2 ;
( CLTASIM_anonymous? A_VLOC(A68_442 ,FLTASIM): A_VHEAP(A68_442 ,FLTASIM) );
ELTASIM = FLTASIM;
} 
*ReturnedValue = (ELTASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  LLTASIM_generator(A68_BOOL  KLTASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  MLTASIM;  /* clause result */
A68_32  NLTASIM;  /* OPERATORS - dynamic generator */
{ 
NLTASIM.upb = 2 ;
( KLTASIM_anonymous? A_VLOC(A68_INT ,NLTASIM): A_VHEAP(A68_INT ,NLTASIM) );
MLTASIM = NLTASIM;
} 
*ReturnedValue = (MLTASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  TLTASIM_generator(A68_BOOL  SLTASIM_anonymous, A68_465  *ReturnedValue)
{ 
A68_465  ULTASIM;  /* clause result */
A68_465  VLTASIM;  /* OPERATORS - dynamic generator */
{ 
VLTASIM.upb = 2 ;
( SLTASIM_anonymous? A_VLOC(A68_427 ,VLTASIM): A_VHEAP(A68_427 ,VLTASIM) );
ULTASIM = VLTASIM;
} 
*ReturnedValue = (ULTASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  ZLTASIM_generator(A68_BOOL  YLTASIM_anonymous, A68_465  *ReturnedValue)
{ 
A68_465  AMTASIM;  /* clause result */
A68_465  BMTASIM;  /* OPERATORS - dynamic generator */
{ 
BMTASIM.upb = 3 ;
( YLTASIM_anonymous? A_VLOC(A68_427 ,BMTASIM): A_VHEAP(A68_427 ,BMTASIM) );
AMTASIM = BMTASIM;
} 
*ReturnedValue = (AMTASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  RMTASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  SMTASIM;  /* clause result */
 /* line 1144: */
SMTASIM = A68_TRUE;
return( SMTASIM );
} 
#undef NL

A_STATIC A68_VOID  YMTASIM_generator(A68_BOOL  XMTASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  ZMTASIM;  /* clause result */
A68_32  ANTASIM;  /* OPERATORS - dynamic generator */
{ 
ANTASIM.upb = 2 ;
( XMTASIM_anonymous? A_VLOC(A68_INT ,ANTASIM): A_VHEAP(A68_INT ,ANTASIM) );
ZMTASIM = ANTASIM;
} 
*ReturnedValue = (ZMTASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  GNTASIM_generator(A68_BOOL  FNTASIM_anonymous, A68_465  *ReturnedValue)
{ 
A68_465  HNTASIM;  /* clause result */
A68_465  INTASIM;  /* OPERATORS - dynamic generator */
{ 
INTASIM.upb = 2 ;
( FNTASIM_anonymous? A_VLOC(A68_427 ,INTASIM): A_VHEAP(A68_427 ,INTASIM) );
HNTASIM = INTASIM;
} 
*ReturnedValue = (HNTASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  MNTASIM_generator(A68_BOOL  LNTASIM_anonymous, A68_465  *ReturnedValue)
{ 
A68_465  NNTASIM;  /* clause result */
A68_465  ONTASIM;  /* OPERATORS - dynamic generator */
{ 
ONTASIM.upb = 3 ;
( LNTASIM_anonymous? A_VLOC(A68_427 ,ONTASIM): A_VHEAP(A68_427 ,ONTASIM) );
NNTASIM = ONTASIM;
} 
*ReturnedValue = (NNTASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  EOTASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  FOTASIM;  /* clause result */
 /* line 1152: */
FOTASIM = A68_TRUE;
return( FOTASIM );
} 
#undef NL

A_STATIC A68_VOID  ROTASIM_generator(A68_BOOL  QOTASIM_anonymous, A68_449  *ReturnedValue)
{ 
A68_449  SOTASIM;  /* clause result */
A68_449  TOTASIM;  /* OPERATORS - dynamic generator */
{ 
TOTASIM.upb = 1 ;
( QOTASIM_anonymous? A_VLOC(A68_442 ,TOTASIM): A_VHEAP(A68_442 ,TOTASIM) );
SOTASIM = TOTASIM;
} 
*ReturnedValue = (SOTASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  ZOTASIM_generator(A68_BOOL  YOTASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  APTASIM;  /* clause result */
A68_32  BPTASIM;  /* OPERATORS - dynamic generator */
{ 
BPTASIM.upb = 1 ;
( YOTASIM_anonymous? A_VLOC(A68_INT ,BPTASIM): A_VHEAP(A68_INT ,BPTASIM) );
APTASIM = BPTASIM;
} 
*ReturnedValue = (APTASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  JPTASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  KPTASIM;  /* clause result */
 /* line 1162: */
KPTASIM = A68_TRUE;
return( KPTASIM );
} 
#undef NL

A_STATIC A68_VOID  WPTASIM_generator(A68_BOOL  VPTASIM_anonymous, A68_449  *ReturnedValue)
{ 
A68_449  XPTASIM;  /* clause result */
A68_449  YPTASIM;  /* OPERATORS - dynamic generator */
{ 
YPTASIM.upb = 1 ;
( VPTASIM_anonymous? A_VLOC(A68_442 ,YPTASIM): A_VHEAP(A68_442 ,YPTASIM) );
XPTASIM = YPTASIM;
} 
*ReturnedValue = (XPTASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  EQTASIM_generator(A68_BOOL  DQTASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  FQTASIM;  /* clause result */
A68_32  GQTASIM;  /* OPERATORS - dynamic generator */
{ 
GQTASIM.upb = 1 ;
( DQTASIM_anonymous? A_VLOC(A68_INT ,GQTASIM): A_VHEAP(A68_INT ,GQTASIM) );
FQTASIM = GQTASIM;
} 
*ReturnedValue = (FQTASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  OQTASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  PQTASIM;  /* clause result */
 /* line 1172: */
PQTASIM = A68_TRUE;
return( PQTASIM );
} 
#undef NL

A_STATIC A68_VOID  BRTASIM_generator(A68_BOOL  ARTASIM_anonymous, A68_449  *ReturnedValue)
{ 
A68_449  CRTASIM;  /* clause result */
A68_449  DRTASIM;  /* OPERATORS - dynamic generator */
{ 
DRTASIM.upb = 2 ;
( ARTASIM_anonymous? A_VLOC(A68_442 ,DRTASIM): A_VHEAP(A68_442 ,DRTASIM) );
CRTASIM = DRTASIM;
} 
*ReturnedValue = (CRTASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  JRTASIM_generator(A68_BOOL  IRTASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  KRTASIM;  /* clause result */
A68_32  LRTASIM;  /* OPERATORS - dynamic generator */
{ 
LRTASIM.upb = 1 ;
( IRTASIM_anonymous? A_VLOC(A68_INT ,LRTASIM): A_VHEAP(A68_INT ,LRTASIM) );
KRTASIM = LRTASIM;
} 
*ReturnedValue = (KRTASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  TRTASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  URTASIM;  /* clause result */
 /* line 1182: */
URTASIM = A68_TRUE;
return( URTASIM );
} 
#undef NL

A_STATIC A68_VOID  ASTASIM_generator(A68_BOOL  ZRTASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  BSTASIM;  /* clause result */
A68_32  CSTASIM;  /* OPERATORS - dynamic generator */
{ 
CSTASIM.upb = 1 ;
( ZRTASIM_anonymous? A_VLOC(A68_INT ,CSTASIM): A_VHEAP(A68_INT ,CSTASIM) );
BSTASIM = CSTASIM;
} 
*ReturnedValue = (BSTASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  KSTASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  LSTASIM;  /* clause result */
 /* line 1186: */
LSTASIM = A68_TRUE;
return( LSTASIM );
} 
#undef NL

A_STATIC A68_VOID  XSTASIM_generator(A68_BOOL  WSTASIM_anonymous, A68_449  *ReturnedValue)
{ 
A68_449  YSTASIM;  /* clause result */
A68_449  ZSTASIM;  /* OPERATORS - dynamic generator */
{ 
ZSTASIM.upb = 2 ;
( WSTASIM_anonymous? A_VLOC(A68_442 ,ZSTASIM): A_VHEAP(A68_442 ,ZSTASIM) );
YSTASIM = ZSTASIM;
} 
*ReturnedValue = (YSTASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  FTTASIM_generator(A68_BOOL  ETTASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  GTTASIM;  /* clause result */
A68_32  HTTASIM;  /* OPERATORS - dynamic generator */
{ 
HTTASIM.upb = 2 ;
( ETTASIM_anonymous? A_VLOC(A68_INT ,HTTASIM): A_VHEAP(A68_INT ,HTTASIM) );
GTTASIM = HTTASIM;
} 
*ReturnedValue = (GTTASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  NTTASIM_generator(A68_BOOL  MTTASIM_anonymous, A68_465  *ReturnedValue)
{ 
A68_465  OTTASIM;  /* clause result */
A68_465  PTTASIM;  /* OPERATORS - dynamic generator */
{ 
PTTASIM.upb = 2 ;
( MTTASIM_anonymous? A_VLOC(A68_427 ,PTTASIM): A_VHEAP(A68_427 ,PTTASIM) );
OTTASIM = PTTASIM;
} 
*ReturnedValue = (OTTASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  AUTASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  BUTASIM;  /* clause result */
 /* line 1197: */
BUTASIM = A68_TRUE;
return( BUTASIM );
} 
#undef NL

A_STATIC A68_VOID  HUTASIM_generator(A68_BOOL  GUTASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  IUTASIM;  /* clause result */
A68_32  JUTASIM;  /* OPERATORS - dynamic generator */
{ 
JUTASIM.upb = 2 ;
( GUTASIM_anonymous? A_VLOC(A68_INT ,JUTASIM): A_VHEAP(A68_INT ,JUTASIM) );
IUTASIM = JUTASIM;
} 
*ReturnedValue = (IUTASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  PUTASIM_generator(A68_BOOL  OUTASIM_anonymous, A68_465  *ReturnedValue)
{ 
A68_465  QUTASIM;  /* clause result */
A68_465  RUTASIM;  /* OPERATORS - dynamic generator */
{ 
RUTASIM.upb = 2 ;
( OUTASIM_anonymous? A_VLOC(A68_427 ,RUTASIM): A_VHEAP(A68_427 ,RUTASIM) );
QUTASIM = RUTASIM;
} 
*ReturnedValue = (QUTASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  CVTASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  DVTASIM;  /* clause result */
 /* line 1202: */
DVTASIM = A68_TRUE;
return( DVTASIM );
} 
#undef NL

A_STATIC A68_VOID  PVTASIM_generator(A68_BOOL  OVTASIM_anonymous, A68_449  *ReturnedValue)
{ 
A68_449  QVTASIM;  /* clause result */
A68_449  RVTASIM;  /* OPERATORS - dynamic generator */
{ 
RVTASIM.upb = 2 ;
( OVTASIM_anonymous? A_VLOC(A68_442 ,RVTASIM): A_VHEAP(A68_442 ,RVTASIM) );
QVTASIM = RVTASIM;
} 
*ReturnedValue = (QVTASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  XVTASIM_generator(A68_BOOL  WVTASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  YVTASIM;  /* clause result */
A68_32  ZVTASIM;  /* OPERATORS - dynamic generator */
{ 
ZVTASIM.upb = 2 ;
( WVTASIM_anonymous? A_VLOC(A68_INT ,ZVTASIM): A_VHEAP(A68_INT ,ZVTASIM) );
YVTASIM = ZVTASIM;
} 
*ReturnedValue = (YVTASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  FWTASIM_generator(A68_BOOL  EWTASIM_anonymous, A68_465  *ReturnedValue)
{ 
A68_465  GWTASIM;  /* clause result */
A68_465  HWTASIM;  /* OPERATORS - dynamic generator */
{ 
HWTASIM.upb = 2 ;
( EWTASIM_anonymous? A_VLOC(A68_427 ,HWTASIM): A_VHEAP(A68_427 ,HWTASIM) );
GWTASIM = HWTASIM;
} 
*ReturnedValue = (GWTASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  SWTASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  TWTASIM;  /* clause result */
 /* line 1213: */
TWTASIM = A68_TRUE;
return( TWTASIM );
} 
#undef NL

A_STATIC A68_VOID  ZWTASIM_generator(A68_BOOL  YWTASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  AXTASIM;  /* clause result */
A68_32  BXTASIM;  /* OPERATORS - dynamic generator */
{ 
BXTASIM.upb = 2 ;
( YWTASIM_anonymous? A_VLOC(A68_INT ,BXTASIM): A_VHEAP(A68_INT ,BXTASIM) );
AXTASIM = BXTASIM;
} 
*ReturnedValue = (AXTASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  HXTASIM_generator(A68_BOOL  GXTASIM_anonymous, A68_465  *ReturnedValue)
{ 
A68_465  IXTASIM;  /* clause result */
A68_465  JXTASIM;  /* OPERATORS - dynamic generator */
{ 
JXTASIM.upb = 2 ;
( GXTASIM_anonymous? A_VLOC(A68_427 ,JXTASIM): A_VHEAP(A68_427 ,JXTASIM) );
IXTASIM = JXTASIM;
} 
*ReturnedValue = (IXTASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  UXTASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  VXTASIM;  /* clause result */
 /* line 1218: */
VXTASIM = A68_TRUE;
return( VXTASIM );
} 
#undef NL

A_STATIC A68_VOID  HYTASIM_generator(A68_BOOL  GYTASIM_anonymous, A68_449  *ReturnedValue)
{ 
A68_449  IYTASIM;  /* clause result */
A68_449  JYTASIM;  /* OPERATORS - dynamic generator */
{ 
JYTASIM.upb = 2 ;
( GYTASIM_anonymous? A_VLOC(A68_442 ,JYTASIM): A_VHEAP(A68_442 ,JYTASIM) );
IYTASIM = JYTASIM;
} 
*ReturnedValue = (IYTASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  PYTASIM_generator(A68_BOOL  OYTASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  QYTASIM;  /* clause result */
A68_32  RYTASIM;  /* OPERATORS - dynamic generator */
{ 
RYTASIM.upb = 2 ;
( OYTASIM_anonymous? A_VLOC(A68_INT ,RYTASIM): A_VHEAP(A68_INT ,RYTASIM) );
QYTASIM = RYTASIM;
} 
*ReturnedValue = (QYTASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  XYTASIM_generator(A68_BOOL  WYTASIM_anonymous, A68_465  *ReturnedValue)
{ 
A68_465  YYTASIM;  /* clause result */
A68_465  ZYTASIM;  /* OPERATORS - dynamic generator */
{ 
ZYTASIM.upb = 2 ;
( WYTASIM_anonymous? A_VLOC(A68_427 ,ZYTASIM): A_VHEAP(A68_427 ,ZYTASIM) );
YYTASIM = ZYTASIM;
} 
*ReturnedValue = (YYTASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  KZTASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  LZTASIM;  /* clause result */
 /* line 1229: */
LZTASIM = A68_TRUE;
return( LZTASIM );
} 
#undef NL

A_STATIC A68_VOID  RZTASIM_generator(A68_BOOL  QZTASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  SZTASIM;  /* clause result */
A68_32  TZTASIM;  /* OPERATORS - dynamic generator */
{ 
TZTASIM.upb = 2 ;
( QZTASIM_anonymous? A_VLOC(A68_INT ,TZTASIM): A_VHEAP(A68_INT ,TZTASIM) );
SZTASIM = TZTASIM;
} 
*ReturnedValue = (SZTASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  ZZTASIM_generator(A68_BOOL  YZTASIM_anonymous, A68_465  *ReturnedValue)
{ 
A68_465  AAUASIM;  /* clause result */
A68_465  BAUASIM;  /* OPERATORS - dynamic generator */
{ 
BAUASIM.upb = 2 ;
( YZTASIM_anonymous? A_VLOC(A68_427 ,BAUASIM): A_VHEAP(A68_427 ,BAUASIM) );
AAUASIM = BAUASIM;
} 
*ReturnedValue = (AAUASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  MAUASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  NAUASIM;  /* clause result */
 /* line 1234: */
NAUASIM = A68_TRUE;
return( NAUASIM );
} 
#undef NL

A_STATIC A68_VOID  ZAUASIM_generator(A68_BOOL  YAUASIM_anonymous, A68_449  *ReturnedValue)
{ 
A68_449  ABUASIM;  /* clause result */
A68_449  BBUASIM;  /* OPERATORS - dynamic generator */
{ 
BBUASIM.upb = 2 ;
( YAUASIM_anonymous? A_VLOC(A68_442 ,BBUASIM): A_VHEAP(A68_442 ,BBUASIM) );
ABUASIM = BBUASIM;
} 
*ReturnedValue = (ABUASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  HBUASIM_generator(A68_BOOL  GBUASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  IBUASIM;  /* clause result */
A68_32  JBUASIM;  /* OPERATORS - dynamic generator */
{ 
JBUASIM.upb = 2 ;
( GBUASIM_anonymous? A_VLOC(A68_INT ,JBUASIM): A_VHEAP(A68_INT ,JBUASIM) );
IBUASIM = JBUASIM;
} 
*ReturnedValue = (IBUASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  PBUASIM_generator(A68_BOOL  OBUASIM_anonymous, A68_465  *ReturnedValue)
{ 
A68_465  QBUASIM;  /* clause result */
A68_465  RBUASIM;  /* OPERATORS - dynamic generator */
{ 
RBUASIM.upb = 2 ;
( OBUASIM_anonymous? A_VLOC(A68_427 ,RBUASIM): A_VHEAP(A68_427 ,RBUASIM) );
QBUASIM = RBUASIM;
} 
*ReturnedValue = (QBUASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  CCUASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  DCUASIM;  /* clause result */
 /* line 1245: */
DCUASIM = A68_TRUE;
return( DCUASIM );
} 
#undef NL

A_STATIC A68_VOID  JCUASIM_generator(A68_BOOL  ICUASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  KCUASIM;  /* clause result */
A68_32  LCUASIM;  /* OPERATORS - dynamic generator */
{ 
LCUASIM.upb = 2 ;
( ICUASIM_anonymous? A_VLOC(A68_INT ,LCUASIM): A_VHEAP(A68_INT ,LCUASIM) );
KCUASIM = LCUASIM;
} 
*ReturnedValue = (KCUASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  RCUASIM_generator(A68_BOOL  QCUASIM_anonymous, A68_465  *ReturnedValue)
{ 
A68_465  SCUASIM;  /* clause result */
A68_465  TCUASIM;  /* OPERATORS - dynamic generator */
{ 
TCUASIM.upb = 2 ;
( QCUASIM_anonymous? A_VLOC(A68_427 ,TCUASIM): A_VHEAP(A68_427 ,TCUASIM) );
SCUASIM = TCUASIM;
} 
*ReturnedValue = (SCUASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  EDUASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  FDUASIM;  /* clause result */
 /* line 1250: */
FDUASIM = A68_TRUE;
return( FDUASIM );
} 
#undef NL

A_STATIC A68_VOID  RDUASIM_generator(A68_BOOL  QDUASIM_anonymous, A68_449  *ReturnedValue)
{ 
A68_449  SDUASIM;  /* clause result */
A68_449  TDUASIM;  /* OPERATORS - dynamic generator */
{ 
TDUASIM.upb = 2 ;
( QDUASIM_anonymous? A_VLOC(A68_442 ,TDUASIM): A_VHEAP(A68_442 ,TDUASIM) );
SDUASIM = TDUASIM;
} 
*ReturnedValue = (SDUASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  ZDUASIM_generator(A68_BOOL  YDUASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  AEUASIM;  /* clause result */
A68_32  BEUASIM;  /* OPERATORS - dynamic generator */
{ 
BEUASIM.upb = 1 ;
( YDUASIM_anonymous? A_VLOC(A68_INT ,BEUASIM): A_VHEAP(A68_INT ,BEUASIM) );
AEUASIM = BEUASIM;
} 
*ReturnedValue = (AEUASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  GEUASIM_generator(A68_BOOL  FEUASIM_anonymous, A68_465  *ReturnedValue)
{ 
A68_465  HEUASIM;  /* clause result */
A68_465  IEUASIM;  /* OPERATORS - dynamic generator */
{ 
IEUASIM.upb = 2 ;
( FEUASIM_anonymous? A_VLOC(A68_427 ,IEUASIM): A_VHEAP(A68_427 ,IEUASIM) );
HEUASIM = IEUASIM;
} 
*ReturnedValue = (HEUASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  TEUASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  UEUASIM;  /* clause result */
 /* line 1261: */
UEUASIM = A68_TRUE;
return( UEUASIM );
} 
#undef NL

A_STATIC A68_VOID  AFUASIM_generator(A68_BOOL  ZEUASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  BFUASIM;  /* clause result */
A68_32  CFUASIM;  /* OPERATORS - dynamic generator */
{ 
CFUASIM.upb = 1 ;
( ZEUASIM_anonymous? A_VLOC(A68_INT ,CFUASIM): A_VHEAP(A68_INT ,CFUASIM) );
BFUASIM = CFUASIM;
} 
*ReturnedValue = (BFUASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  HFUASIM_generator(A68_BOOL  GFUASIM_anonymous, A68_465  *ReturnedValue)
{ 
A68_465  IFUASIM;  /* clause result */
A68_465  JFUASIM;  /* OPERATORS - dynamic generator */
{ 
JFUASIM.upb = 2 ;
( GFUASIM_anonymous? A_VLOC(A68_427 ,JFUASIM): A_VHEAP(A68_427 ,JFUASIM) );
IFUASIM = JFUASIM;
} 
*ReturnedValue = (IFUASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  UFUASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  VFUASIM;  /* clause result */
 /* line 1266: */
VFUASIM = A68_TRUE;
return( VFUASIM );
} 
#undef NL

A_STATIC A68_VOID  HGUASIM_generator(A68_BOOL  GGUASIM_anonymous, A68_449  *ReturnedValue)
{ 
A68_449  IGUASIM;  /* clause result */
A68_449  JGUASIM;  /* OPERATORS - dynamic generator */
{ 
JGUASIM.upb = 2 ;
( GGUASIM_anonymous? A_VLOC(A68_442 ,JGUASIM): A_VHEAP(A68_442 ,JGUASIM) );
IGUASIM = JGUASIM;
} 
*ReturnedValue = (IGUASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  PGUASIM_generator(A68_BOOL  OGUASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  QGUASIM;  /* clause result */
A68_32  RGUASIM;  /* OPERATORS - dynamic generator */
{ 
RGUASIM.upb = 2 ;
( OGUASIM_anonymous? A_VLOC(A68_INT ,RGUASIM): A_VHEAP(A68_INT ,RGUASIM) );
QGUASIM = RGUASIM;
} 
*ReturnedValue = (QGUASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  AHUASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  BHUASIM;  /* clause result */
 /* line 1276: */
BHUASIM = A68_TRUE;
return( BHUASIM );
} 
#undef NL

A_STATIC A68_VOID  HHUASIM_generator(A68_BOOL  GHUASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  IHUASIM;  /* clause result */
A68_32  JHUASIM;  /* OPERATORS - dynamic generator */
{ 
JHUASIM.upb = 2 ;
( GHUASIM_anonymous? A_VLOC(A68_INT ,JHUASIM): A_VHEAP(A68_INT ,JHUASIM) );
IHUASIM = JHUASIM;
} 
*ReturnedValue = (IHUASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  SHUASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  THUASIM;  /* clause result */
 /* line 1280: */
THUASIM = A68_TRUE;
return( THUASIM );
} 
#undef NL

A_STATIC A68_VOID  FIUASIM_generator(A68_BOOL  EIUASIM_anonymous, A68_449  *ReturnedValue)
{ 
A68_449  GIUASIM;  /* clause result */
A68_449  HIUASIM;  /* OPERATORS - dynamic generator */
{ 
HIUASIM.upb = 2 ;
( EIUASIM_anonymous? A_VLOC(A68_442 ,HIUASIM): A_VHEAP(A68_442 ,HIUASIM) );
GIUASIM = HIUASIM;
} 
*ReturnedValue = (GIUASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  NIUASIM_generator(A68_BOOL  MIUASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  OIUASIM;  /* clause result */
A68_32  PIUASIM;  /* OPERATORS - dynamic generator */
{ 
PIUASIM.upb = 2 ;
( MIUASIM_anonymous? A_VLOC(A68_INT ,PIUASIM): A_VHEAP(A68_INT ,PIUASIM) );
OIUASIM = PIUASIM;
} 
*ReturnedValue = (OIUASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  YIUASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  ZIUASIM;  /* clause result */
 /* line 1290: */
ZIUASIM = A68_TRUE;
return( ZIUASIM );
} 
#undef NL

A_STATIC A68_VOID  FJUASIM_generator(A68_BOOL  EJUASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  GJUASIM;  /* clause result */
A68_32  HJUASIM;  /* OPERATORS - dynamic generator */
{ 
HJUASIM.upb = 2 ;
( EJUASIM_anonymous? A_VLOC(A68_INT ,HJUASIM): A_VHEAP(A68_INT ,HJUASIM) );
GJUASIM = HJUASIM;
} 
*ReturnedValue = (GJUASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  QJUASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  RJUASIM;  /* clause result */
 /* line 1294: */
RJUASIM = A68_TRUE;
return( RJUASIM );
} 
#undef NL

A_STATIC A68_VOID  DKUASIM_generator(A68_BOOL  CKUASIM_anonymous, A68_449  *ReturnedValue)
{ 
A68_449  EKUASIM;  /* clause result */
A68_449  FKUASIM;  /* OPERATORS - dynamic generator */
{ 
FKUASIM.upb = 2 ;
( CKUASIM_anonymous? A_VLOC(A68_442 ,FKUASIM): A_VHEAP(A68_442 ,FKUASIM) );
EKUASIM = FKUASIM;
} 
*ReturnedValue = (EKUASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  LKUASIM_generator(A68_BOOL  KKUASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  MKUASIM;  /* clause result */
A68_32  NKUASIM;  /* OPERATORS - dynamic generator */
{ 
NKUASIM.upb = 2 ;
( KKUASIM_anonymous? A_VLOC(A68_INT ,NKUASIM): A_VHEAP(A68_INT ,NKUASIM) );
MKUASIM = NKUASIM;
} 
*ReturnedValue = (MKUASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  WKUASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  XKUASIM;  /* clause result */
 /* line 1304: */
XKUASIM = A68_TRUE;
return( XKUASIM );
} 
#undef NL

A_STATIC A68_VOID  DLUASIM_generator(A68_BOOL  CLUASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  ELUASIM;  /* clause result */
A68_32  FLUASIM;  /* OPERATORS - dynamic generator */
{ 
FLUASIM.upb = 2 ;
( CLUASIM_anonymous? A_VLOC(A68_INT ,FLUASIM): A_VHEAP(A68_INT ,FLUASIM) );
ELUASIM = FLUASIM;
} 
*ReturnedValue = (ELUASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  OLUASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  PLUASIM;  /* clause result */
 /* line 1308: */
PLUASIM = A68_TRUE;
return( PLUASIM );
} 
#undef NL

A_STATIC A68_VOID  BMUASIM_generator(A68_BOOL  AMUASIM_anonymous, A68_449  *ReturnedValue)
{ 
A68_449  CMUASIM;  /* clause result */
A68_449  DMUASIM;  /* OPERATORS - dynamic generator */
{ 
DMUASIM.upb = 2 ;
( AMUASIM_anonymous? A_VLOC(A68_442 ,DMUASIM): A_VHEAP(A68_442 ,DMUASIM) );
CMUASIM = DMUASIM;
} 
*ReturnedValue = (CMUASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  JMUASIM_generator(A68_BOOL  IMUASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  KMUASIM;  /* clause result */
A68_32  LMUASIM;  /* OPERATORS - dynamic generator */
{ 
LMUASIM.upb = 1 ;
( IMUASIM_anonymous? A_VLOC(A68_INT ,LMUASIM): A_VHEAP(A68_INT ,LMUASIM) );
KMUASIM = LMUASIM;
} 
*ReturnedValue = (KMUASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  QMUASIM_generator(A68_BOOL  PMUASIM_anonymous, A68_465  *ReturnedValue)
{ 
A68_465  RMUASIM;  /* clause result */
A68_465  SMUASIM;  /* OPERATORS - dynamic generator */
{ 
SMUASIM.upb = 2 ;
( PMUASIM_anonymous? A_VLOC(A68_427 ,SMUASIM): A_VHEAP(A68_427 ,SMUASIM) );
RMUASIM = SMUASIM;
} 
*ReturnedValue = (RMUASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  DNUASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  ENUASIM;  /* clause result */
 /* line 1319: */
ENUASIM = A68_TRUE;
return( ENUASIM );
} 
#undef NL

A_STATIC A68_VOID  KNUASIM_generator(A68_BOOL  JNUASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  LNUASIM;  /* clause result */
A68_32  MNUASIM;  /* OPERATORS - dynamic generator */
{ 
MNUASIM.upb = 1 ;
( JNUASIM_anonymous? A_VLOC(A68_INT ,MNUASIM): A_VHEAP(A68_INT ,MNUASIM) );
LNUASIM = MNUASIM;
} 
*ReturnedValue = (LNUASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  RNUASIM_generator(A68_BOOL  QNUASIM_anonymous, A68_465  *ReturnedValue)
{ 
A68_465  SNUASIM;  /* clause result */
A68_465  TNUASIM;  /* OPERATORS - dynamic generator */
{ 
TNUASIM.upb = 2 ;
( QNUASIM_anonymous? A_VLOC(A68_427 ,TNUASIM): A_VHEAP(A68_427 ,TNUASIM) );
SNUASIM = TNUASIM;
} 
*ReturnedValue = (SNUASIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  EOUASIM_anonymous(A68_32  I, A68_32  M, A68_32  O)
{ 
A68_BOOL  FOUASIM;  /* clause result */
 /* line 1324: */
FOUASIM = A68_TRUE;
return( FOUASIM );
} 
#undef NL

A_STATIC A68_INT  KGQASIM_max(A68_INT  I1, A68_INT  I2)
{ 
A68_INT  LGQASIM;  /* clause result */
A_PROC_ENTRY(max);
 /* line 55: */
if ( (I1>I2) )
{ 
LGQASIM = I1;
} 
else
{ 
LGQASIM = I2;
} 
A_PROC_EXIT(max);
return( LGQASIM );
} 
#undef NL

A_STATIC A68_VOID  OGQASIM_append(A68_32 * I1, A68_32  I2)
{ 
A68_32  PGQASIM;  /* OPERATORS - nil -> mode */
A68_32  QGQASIM;  /* != */
A68_32  RGQASIM;  /* OPERATORS - nil -> mode */
A68_32  SGQASIM;  /* != */
A68_33  UGQASIM_generator;   /* proc value of non-global proc */
A68_32  ZGQASIM;  /* avoid structure result */
A68_32  AHQASIM_result;
A68_32  BHQASIM;  /* OPERATORS - trim index */
A68_32  CHQASIM;  /* YIELD */
A68_32  DHQASIM;  /* OPERATORS - trim index */
A68_32  EHQASIM;  /* YIELD */
A68_33  GHQASIM_generator;   /* proc value of non-global proc */
A68_32  LHQASIM;  /* avoid structure result */
A_PROC_ENTRY(append);
 /* line 59: */
 /* line 60: */
QGQASIM = A_VVAC(PGQASIM) ;
if ( ! A_VSTRUCTCOMP(I2,QGQASIM) )
{ 
 /* line 61: */
SGQASIM = A_VVAC(RGQASIM) ;
if ( ! A_VSTRUCTCOMP((*I1),SGQASIM) )
{ 
A_CLOSURE( UGQASIM_generator, VGQASIM_generator, WGQASIM_generator );
(( WGQASIM_generator * ) ( UGQASIM_generator.nonlocals )) -> I1 = I1;
(( WGQASIM_generator * ) ( UGQASIM_generator.nonlocals )) -> I2 = I2;
A_CALLPROC(UGQASIM_generator,(A68_FALSE, &ZGQASIM),(A68_FALSE, &ZGQASIM,(UGQASIM_generator).nonlocals));
AHQASIM_result = ZGQASIM;
 /* line 62: */
CHQASIM = A_VTRIM(BHQASIM,(AHQASIM_result),A_VTSCRIPT(&(BHQASIM.upb),(AHQASIM_result).upb,1,(*I1).upb)) ;
A_VASSIGN2((*I1),CHQASIM,A68_INT );
 /* line 63: */
EHQASIM = A_VTRIM(DHQASIM,(AHQASIM_result),A_VTSCRIPT(&(DHQASIM.upb),(AHQASIM_result).upb,((*I1).upb+1),(AHQASIM_result).upb)) ;
A_VASSIGN2(I2,EHQASIM,A68_INT );
 /* line 64: */
 /* line 65: */
 /* line 66: */
(*I1) = AHQASIM_result;
} 
else
{ 
A_CLOSURE( GHQASIM_generator, HHQASIM_generator, IHQASIM_generator );
(( IHQASIM_generator * ) ( GHQASIM_generator.nonlocals )) -> I2 = I2;
 /* line 67: */
 /* line 68: */
A_CALLPROC(GHQASIM_generator,(A68_FALSE, &LHQASIM),(A68_FALSE, &LHQASIM,(GHQASIM_generator).nonlocals));
A_VASSIGN2(I2,LHQASIM,A68_INT ) ;
(*I1) = LHQASIM;
} 
} 
A_PROC_EXIT(append);
return;
} 
#undef NL

A_STATIC A68_INT  NHQASIM_numeration(A68_307  St)
{ 
A68_307  OHQASIM;  /* united object - for case conformity */
A68_311 * PHQASIM_ss;
A68_INT  QHQASIM;  /* clause result */
A68_309 * RHQASIM_ss;
A68_307  SHQASIM;  /* OPERATORS - mode -> union mode */
A68_309 * THQASIM;  /* YIELD */
A68_315 * UHQASIM_ss;
A68_307  VHQASIM;  /* OPERATORS - mode -> union mode */
A68_315 * WHQASIM;  /* YIELD */
A_PROC_ENTRY(numeration);
 /* line 74: */
 /* line 75: */
OHQASIM = St ;
switch ( OHQASIM.mode )
{ 
case 3: /* REF STRUCT(REF MODE26,REF MODE26)  */
PHQASIM_ss = (OHQASIM.data.mode3);
 /* line 76: */
 /* line 77: */
QHQASIM = (*(&(PHQASIM_ss->Char))).upb;
break;
case 1: /* REF STRUCT(REF MODE26,MODE307,REF MODE309)  */
RHQASIM_ss = (OHQASIM.data.mode1);
 /* line 78: */
 /* line 79: */
if ( ((*(&(RHQASIM_ss->Rest)))!=VSAASIM_nilsenum) )
{ 
 /* line 80: */
 /* line 82: */
THQASIM = (*(&(RHQASIM_ss->Rest))) ;
QHQASIM = (1+NHQASIM_numeration(A_UNITE(SHQASIM,mode1,1,THQASIM)));
} 
else
{ 
 /* line 83: */
QHQASIM = 1;
} 
break;
case 7: /* REF STRUCT(MODE307,REF MODE315)  */
UHQASIM_ss = (OHQASIM.data.mode7);
 /* line 84: */
 /* line 85: */
if ( ((*(&(UHQASIM_ss->Rest)))!=WSAASIM_nilsst) )
{ 
 /* line 86: */
 /* line 88: */
WHQASIM = (*(&(UHQASIM_ss->Rest))) ;
QHQASIM = (1+NHQASIM_numeration(A_UNITE(VHQASIM,mode7,7,WHQASIM)));
} 
else
{ 
 /* line 89: */
QHQASIM = 1;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(numeration);
return( QHQASIM );
} 
#undef NL

A_STATIC A68_BOOL  YHQASIM_notassociated(A68_309  Ss)
{ 
A68_BOOL  ZHQASIM;  /* clause result */
A_PROC_ENTRY(notassociated);
 /* line 94: */
 /* line 95: */
if ( !CVAASIM_(Ss.T, ZSAASIM_nullstype) )
{ 
 /* line 96: */
 /* line 97: */
ZHQASIM = A68_FALSE;
} 
else
{ 
if ( (Ss.Rest!=VSAASIM_nilsenum) )
{ 
ZHQASIM = YHQASIM_notassociated((*Ss.Rest));
} 
else
{ 
 /* line 98: */
ZHQASIM = A68_TRUE;
} 
} 
A_PROC_EXIT(notassociated);
return( ZHQASIM );
} 
#undef NL

A_STATIC A68_BOOL  MIQASIM_macparamsmatch(A68_215  Params, A68_INT  Number)
{ 
A68_BOOL  NIQASIM;  /* clause result */
A68_BOOL  OIQASIM;  /* optbool result */
A68_BOOL  PIQASIM_result;
A68_INT  QIQASIM_i;
A68_INT  RIQASIM;  /* to part of loop */
A68_217  SIQASIM;  /* united object - for case conformity */
A68_BOOL  TIQASIM;  /* clause result */
A_PROC_ENTRY(macparamsmatch);
 /* line 113: */
 /* line 114: */
if ( A_VSTRUCTCOMP(Params,ABAATRN_nilmacparams) )
{ 
 /* line 115: */
 /* line 116: */
NIQASIM = (Number==0);
} 
else
{ 
 /* line 118: */
OIQASIM = (Params.upb==Number);
if ( OIQASIM )
{{ 
PIQASIM_result = A68_TRUE;
 /* line 119: */
RIQASIM = Number;
for ( QIQASIM_i = 1;
QIQASIM_i <= RIQASIM;
QIQASIM_i += 1 )
{ 
 /* line 120: */
 /* line 121: */
SIQASIM = (*(&((&A_VINDEX(Params,QIQASIM_i))->Param))) ;
switch ( SIQASIM.mode )
{ 
case 2: /* STRUCT(MODE95)  */
 /* line 122: */
/*SKIP*/;
break;
default: 
 /* line 123: */
 /* line 124: */
PIQASIM_result = A68_FALSE;
break;
} 
}
 /* line 125: */
 /* line 126: */
 /* line 127: */
TIQASIM = PIQASIM_result;
} 
OIQASIM = TIQASIM;
}
NIQASIM = OIQASIM;
} 
A_PROC_EXIT(macparamsmatch);
return( NIQASIM );
} 
#undef NL

A_STATIC A68_VOID  VIQASIM_macparamslimitsvector(A68_215  Params, A68_32  *ReturnedValue)
{ 
A68_33  XIQASIM_generator;   /* proc value of non-global proc */
A68_32  DJQASIM;  /* avoid structure result */
A68_32  CJQASIM_result;
A68_INT  EJQASIM_i;
A68_INT  FJQASIM;  /* to part of loop */
A68_217  GJQASIM;  /* united object - for case conformity */
A68_193  HJQASIM_f;
A68_INT * IJQASIM;  /* YIELD */
A68_32  JJQASIM;  /* clause result */
A68_32  KJQASIM;  /* OPERATORS - vacuum */
A_PROC_ENTRY(macparamslimitsvector);
 /* line 134: */
 /* line 135: */
if ( ! A_VSTRUCTCOMP(Params,ABAATRN_nilmacparams) )
{ 
A_CLOSURE( XIQASIM_generator, YIQASIM_generator, ZIQASIM_generator );
(( ZIQASIM_generator * ) ( XIQASIM_generator.nonlocals )) -> Params = Params;
A_CALLPROC(XIQASIM_generator,(A68_TRUE, &DJQASIM),(A68_TRUE, &DJQASIM,(XIQASIM_generator).nonlocals));
CJQASIM_result = DJQASIM;
 /* line 136: */
FJQASIM = Params.upb;
for ( EJQASIM_i = 1;
EJQASIM_i <= FJQASIM;
EJQASIM_i += 1 )
{ 
 /* line 137: */
 /* line 138: */
GJQASIM = (*(&((&A_VINDEX(Params,EJQASIM_i))->Param))) ;
switch ( GJQASIM.mode )
{ 
case 2: /* STRUCT(MODE95)  */
HJQASIM_f = (GJQASIM.data.mode2);
 /* line 139: */
 /* line 140: */
 /* line 141: */
IJQASIM = (&A_VINDEX(CJQASIM_result,EJQASIM_i)) ;
(*IJQASIM) = XOMATRN_int(HJQASIM_f.Tag);
break;
default: 
A_IMP_SKIP ;
break;
} 
}
 /* line 142: */
 /* line 143: */
 /* line 144: */
JJQASIM = CJQASIM_result;
} 
else
{ 
 /* line 145: */
JJQASIM = A_VVAC(KJQASIM);
} 
A_PROC_EXIT(macparamslimitsvector);
*ReturnedValue = (JJQASIM);
return;
} 
#undef NL

A_STATIC A68_INT  MJQASIM_pushmacparams(A68_215  Params)
{ 
A68_INT  NJQASIM_stacksize;
A68_INT  OJQASIM_i;
A68_INT  PJQASIM;  /* by part of loop */
A68_217  QJQASIM;  /* united object - for case conformity */
A68_193  RJQASIM_f;
A68_INT  SJQASIM;  /* clause result */
A_PROC_ENTRY(pushmacparams);
 /* line 152: */
 /* line 153: */
{ 
NJQASIM_stacksize = 0;
 /* line 154: */
 /* line 155: */
if ( ! A_VSTRUCTCOMP(Params,ABAATRN_nilmacparams) )
{ 
PJQASIM = (-1);
for ( OJQASIM_i = Params.upb;
( PJQASIM > 0 && OJQASIM_i <= 1) ||
( PJQASIM < 0 && OJQASIM_i >= 1) ||
( PJQASIM == 0 ) ;
OJQASIM_i += PJQASIM )
{ 
 /* line 156: */
 /* line 157: */
QJQASIM = (*(&((&A_VINDEX(Params,OJQASIM_i))->Param))) ;
switch ( QJQASIM.mode )
{ 
case 2: /* STRUCT(MODE95)  */
RJQASIM_f = (QJQASIM.data.mode2);
 /* line 158: */
 /* line 159: */
{ 
QUNASIM_ampushint(XOMATRN_int(RJQASIM_f.Tag));
 /* line 160: */
 /* line 161: */
 /* line 162: */
 /* line 163: */
NJQASIM_stacksize+=1;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
}
 /* line 164: */
} 
 /* line 165: */
 /* line 166: */
SJQASIM = NJQASIM_stacksize;
} 
A_PROC_EXIT(pushmacparams);
return( SJQASIM );
} 
#undef NL

A_STATIC A68_BOOL  VJQASIM_outputmatch(A68_427  Output, A68_307  Outputtype)
{ 
A68_307  WJQASIM;  /* united object - for case conformity */
A68_309 * XJQASIM_st;
A68_BOOL  YJQASIM;  /* optbool result */
A68_BOOL  ZJQASIM;  /* optbool result */
A68_307  AKQASIM;  /* OPERATORS - mode -> union mode */
A68_BOOL  BKQASIM;  /* clause result */
A68_311 * CKQASIM_st;
A68_BOOL  DKQASIM;  /* optbool result */
A68_BOOL  EKQASIM;  /* optbool result */
A68_307  FKQASIM;  /* OPERATORS - mode -> union mode */
A68_313 * GKQASIM_st;
A68_BOOL  HKQASIM;  /* optbool result */
A68_307  IKQASIM;  /* OPERATORS - mode -> union mode */
A68_311 * JKQASIM;  /* YIELD */
A68_BOOL  KKQASIM;  /* optbool result */
A68_307  LKQASIM;  /* OPERATORS - mode -> union mode */
A68_311 * MKQASIM;  /* YIELD */
A68_BOOL  NKQASIM;  /* optbool result */
A68_307  OKQASIM;  /* OPERATORS - mode -> union mode */
A68_311 * PKQASIM;  /* YIELD */
A68_BOOL  QKQASIM;  /* optbool result */
A68_307  RKQASIM;  /* OPERATORS - mode -> union mode */
A68_311 * SKQASIM;  /* YIELD */
A68_312 * TKQASIM_st;
A68_BOOL  UKQASIM;  /* optbool result */
A68_BOOL  VKQASIM_match;
A68_INT  WKQASIM_i;
A68_INT  XKQASIM;  /* to part of loop */
A68_428  YKQASIM;  /* OPERATORS - simple index */
A68_BOOL  ZKQASIM;  /* clause result */
A68_315 * ALQASIM_st;
A68_307  BLQASIM;  /* OPERATORS - mode -> union mode */
A68_BOOL  CLQASIM;  /* optbool result */
A68_BOOL  DLQASIM_match;
A68_315 * ELQASIM_ott;
A68_INT  FLQASIM_i;
A68_INT  GLQASIM;  /* to part of loop */
A68_428  HLQASIM;  /* OPERATORS - simple index */
A68_BOOL  ILQASIM;  /* clause result */
A_PROC_ENTRY(outputmatch);
 /* line 192: */
 /* line 193: */
WJQASIM = Outputtype ;
switch ( WJQASIM.mode )
{ 
case 1: /* REF STRUCT(REF MODE26,MODE307,REF MODE309)  */
XJQASIM_st = (WJQASIM.data.mode1);
 /* line 194: */
 /* line 195: */
YJQASIM = (Output.Output_type_sort==DIQASIM_ee);
if ( ! YJQASIM )
{ZJQASIM = (Output.Output_type_sort==BIQASIM_tv);
if ( ZJQASIM )
{ /* line 196: */
ZJQASIM = (NHQASIM_numeration(A_UNITE(AKQASIM,mode1,1,XJQASIM_st))==2);
}
if ( ZJQASIM )
{ZJQASIM = YHQASIM_notassociated((*XJQASIM_st));
}
YJQASIM = ZJQASIM;
}
 /* line 197: */
BKQASIM = YJQASIM;
break;
case 2: /* REF STRUCT(REF MODE26,INT,INT)  */
 /* line 198: */
 /* line 199: */
BKQASIM = (Output.Output_type_sort==EIQASIM_ei);
break;
case 3: /* REF STRUCT(REF MODE26,REF MODE26)  */
CKQASIM_st = (WJQASIM.data.mode3);
 /* line 200: */
 /* line 201: */
DKQASIM = (Output.Output_type_sort==CIQASIM_ch);
if ( ! DKQASIM )
{EKQASIM = (Output.Output_type_sort==BIQASIM_tv);
if ( EKQASIM )
{EKQASIM = (NHQASIM_numeration(A_UNITE(FKQASIM,mode3,3,CKQASIM_st))==2);
}
DKQASIM = EKQASIM;
}
 /* line 202: */
BKQASIM = DKQASIM;
break;
case 5: /* REF STRUCT(INT,MODE311)  */
GKQASIM_st = (WJQASIM.data.mode5);
 /* line 203: */
HKQASIM = (Output.Output_type_sort==AIQASIM_bs);
if ( HKQASIM )
{ /* line 204: */
JKQASIM = (&(GKQASIM_st->T)) ;
HKQASIM = (NHQASIM_numeration(A_UNITE(IKQASIM,mode3,3,JKQASIM))==2);
}
if ( ! HKQASIM )
{KKQASIM = (Output.Output_type_sort==FIQASIM_ds);
if ( KKQASIM )
{MKQASIM = (&(GKQASIM_st->T)) ;
KKQASIM = (NHQASIM_numeration(A_UNITE(LKQASIM,mode3,3,MKQASIM))==10);
}
 /* line 205: */
HKQASIM = KKQASIM;
}
if ( ! HKQASIM )
{ /* line 206: */
HKQASIM = (Output.Output_type_sort==JIQASIM_cs);
}
if ( ! HKQASIM )
{NKQASIM = (Output.Output_type_sort==HIQASIM_lr);
if ( NKQASIM )
{ /* line 207: */
PKQASIM = (&(GKQASIM_st->T)) ;
NKQASIM = (NHQASIM_numeration(A_UNITE(OKQASIM,mode3,3,PKQASIM))==2);
}
if ( NKQASIM )
{NKQASIM = ((*(&(GKQASIM_st->No)))==64);
}
 /* line 208: */
HKQASIM = NKQASIM;
}
if ( ! HKQASIM )
{QKQASIM = (Output.Output_type_sort==GIQASIM_sr);
if ( QKQASIM )
{ /* line 209: */
SKQASIM = (&(GKQASIM_st->T)) ;
QKQASIM = (NHQASIM_numeration(A_UNITE(RKQASIM,mode3,3,SKQASIM))==2);
}
if ( QKQASIM )
{QKQASIM = ((*(&(GKQASIM_st->No)))==32);
}
HKQASIM = QKQASIM;
}
 /* line 210: */
BKQASIM = HKQASIM;
break;
case 4: /* REF STRUCT(INT,MODE307)  */
TKQASIM_st = (WJQASIM.data.mode4);
 /* line 211: */
 /* line 212: */
 /* line 214: */
UKQASIM = ((Output.Output_type_sort==IIQASIM_struct)&((*(&(TKQASIM_st->No)))==Output.Struct_components.dim[0].upb));
if ( UKQASIM )
{{ 
VKQASIM_match = A68_TRUE;
 /* line 215: */
XKQASIM = Output.Struct_components.dim[0].upb;
for ( WKQASIM_i = 1;
WKQASIM_i <= XKQASIM;
WKQASIM_i += 1 )
{ 
 /* line 216: */
if ( !(VKQASIM_match) ) break;
 /* line 217: */
 /* line 218: */
YKQASIM = Output.Struct_components ;
VKQASIM_match = VJQASIM_outputmatch((*(&A_R1INDEX(YKQASIM,WKQASIM_i))), (*(&(TKQASIM_st->Type))));
}
 /* line 219: */
 /* line 220: */
ZKQASIM = VKQASIM_match;
} 
UKQASIM = ZKQASIM;
}
 /* line 221: */
BKQASIM = UKQASIM;
break;
case 7: /* REF STRUCT(MODE307,REF MODE315)  */
ALQASIM_st = (WJQASIM.data.mode7);
 /* line 222: */
 /* line 223: */
 /* line 225: */
CLQASIM = ((Output.Output_type_sort==IIQASIM_struct)&(NHQASIM_numeration(A_UNITE(BLQASIM,mode7,7,ALQASIM_st))==Output.Struct_components.dim[0].upb));
if ( CLQASIM )
{{ 
DLQASIM_match = A68_TRUE;
 /* line 226: */
ELQASIM_ott = ALQASIM_st;
 /* line 227: */
GLQASIM = Output.Struct_components.dim[0].upb;
for ( FLQASIM_i = 1;
FLQASIM_i <= GLQASIM;
FLQASIM_i += 1 )
{ 
 /* line 228: */
if ( !(DLQASIM_match) ) break;
 /* line 229: */
HLQASIM = Output.Struct_components ;
DLQASIM_match = VJQASIM_outputmatch((*(&A_R1INDEX(HLQASIM,FLQASIM_i))), (*(&(ELQASIM_ott->T))));
 /* line 230: */
 /* line 231: */
ELQASIM_ott = (*(&(ELQASIM_ott->Rest)));
}
 /* line 232: */
 /* line 233: */
 /* line 234: */
ILQASIM = DLQASIM_match;
} 
CLQASIM = ILQASIM;
}
 /* line 235: */
BKQASIM = CLQASIM;
break;
default: 
 /* line 236: */
BKQASIM = A68_FALSE;
break;
} 
A_PROC_EXIT(outputmatch);
return( BKQASIM );
} 
#undef NL
 /* line 240: */

A_STATIC A68_INT  MLQASIM_pushcurrentoutput(A68_INT  Outputtype, A68_INT  Outputoffset, A68_INT  Cpoffset)
{ 
A68_INT  NLQASIM;  /* clause result */
A_PROC_ENTRY(pushcurrentoutput);
 /* line 245: */
 /* line 247: */
{ 
QUNASIM_ampushint(0);
 /* line 249: */
WUNASIM_amlocal((Cpoffset+1));
 /* line 251: */
QUNASIM_ampushint(Outputoffset);
 /* line 253: */
SSNASIM_amadd();
 /* line 255: */
 /* line 256: */
LVNASIM_ambstring((YGCASIM_lookuptypesize(Outputtype)*CENASIM_bitsperbyte), (YGCASIM_lookuptypesize(Outputtype)*CENASIM_bitsperbyte), ONFASIM_indirect);
 /* line 258: */
 /* line 259: */
NLQASIM = 1;
} 
A_PROC_EXIT(pushcurrentoutput);
return( NLQASIM );
} 
#undef NL

A_STATIC A68_VOID  PLQASIM_outputlimitsvector(A68_307  Outputtype, A68_32  *ReturnedValue)
{ 
A68_307  QLQASIM;  /* united object - for case conformity */
A68_309 * RLQASIM_ss;
A68_32  SLQASIM;  /* clause result */
A68_32  TLQASIM;  /* OPERATORS - nil -> mode */
A68_310 * ULQASIM_ss;
A68_33  WLQASIM_generator;   /* proc value of non-global proc */
A68_432  BMQASIM;  /* collateral clause result */
A68_32  CMQASIM;  /* avoid structure result */
A68_32  DMQASIM;  /* OPERATORS - istruct -> vector */
A68_32  EMQASIM;  /* OPERATORS - assign op */
A68_311 * FMQASIM_ss;
A68_32  GMQASIM;  /* OPERATORS - nil -> mode */
A68_312 * HMQASIM_st;
A68_32  JMQASIM;  /* OPERATORS - nil -> mode */
A68_32  IMQASIM_row;
A68_INT  KMQASIM_i;
A68_INT  LMQASIM;  /* to part of loop */
A68_32  MMQASIM;  /* avoid structure result */
A68_313 * NMQASIM_st;
A68_33  PMQASIM_generator;   /* proc value of non-global proc */
A68_32  UMQASIM;  /* avoid structure result */
A68_32  VMQASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_32  WMQASIM;  /* OPERATORS - assign op */
A68_315 * XMQASIM_st;
A68_32  ZMQASIM;  /* OPERATORS - nil -> mode */
A68_32  YMQASIM_row;
A68_32  ANQASIM;  /* avoid structure result */
A68_307  BNQASIM;  /* OPERATORS - mode -> union mode */
A68_315 * CNQASIM;  /* YIELD */
A68_32  DNQASIM;  /* avoid structure result */
A_PROC_ENTRY(outputlimitsvector);
 /* line 267: */
 /* line 268: */
QLQASIM = Outputtype ;
switch ( QLQASIM.mode )
{ 
case 1: /* REF STRUCT(REF MODE26,MODE307,REF MODE309)  */
RLQASIM_ss = (QLQASIM.data.mode1);
 /* line 269: */
SLQASIM = A_VVAC(TLQASIM);
break;
case 2: /* REF STRUCT(REF MODE26,INT,INT)  */
ULQASIM_ss = (QLQASIM.data.mode2);
A_CLOSURE( WLQASIM_generator, XLQASIM_generator, YLQASIM_generator );
BMQASIM.data[0] = (*(&(ULQASIM_ss->Lwb)));
BMQASIM.data[1] = (*(&(ULQASIM_ss->Upb)));
 /* line 270: */
A_CALLPROC(WLQASIM_generator,(A68_FALSE, &CMQASIM),(A68_FALSE, &CMQASIM,(WLQASIM_generator).nonlocals));
EMQASIM = A_HISVEC(DMQASIM,BMQASIM,2,A68_INT ) ;
A_VASSIGN2(EMQASIM,CMQASIM,A68_INT ) ;
SLQASIM = CMQASIM;
break;
case 3: /* REF STRUCT(REF MODE26,REF MODE26)  */
FMQASIM_ss = (QLQASIM.data.mode3);
 /* line 271: */
SLQASIM = A_VVAC(GMQASIM);
break;
case 4: /* REF STRUCT(INT,MODE307)  */
HMQASIM_st = (QLQASIM.data.mode4);
 /* line 272: */
 /* line 273: */
{ 
IMQASIM_row = (A_VVAC(JMQASIM));
 /* line 274: */
LMQASIM = (*(&(HMQASIM_st->No)));
for ( KMQASIM_i = 1;
KMQASIM_i <= LMQASIM;
KMQASIM_i += 1 )
{ 
 /* line 275: */
 /* line 276: */
PLQASIM_outputlimitsvector( (*(&(HMQASIM_st->Type))), &MMQASIM );
OGQASIM_append((&IMQASIM_row), MMQASIM);
}
 /* line 277: */
 /* line 278: */
 /* line 279: */
SLQASIM = IMQASIM_row;
} 
break;
case 5: /* REF STRUCT(INT,MODE311)  */
NMQASIM_st = (QLQASIM.data.mode5);
A_CLOSURE( PMQASIM_generator, QMQASIM_generator, RMQASIM_generator );
 /* line 280: */
A_CALLPROC(PMQASIM_generator,(A68_FALSE, &UMQASIM),(A68_FALSE, &UMQASIM,(PMQASIM_generator).nonlocals));
WMQASIM = A_HVEC(VMQASIM,(*(&(NMQASIM_st->No))),A68_INT ) ;
A_VASSIGN2(WMQASIM,UMQASIM,A68_INT ) ;
SLQASIM = UMQASIM;
break;
case 7: /* REF STRUCT(MODE307,REF MODE315)  */
XMQASIM_st = (QLQASIM.data.mode7);
 /* line 281: */
 /* line 282: */
{ 
YMQASIM_row = (A_VVAC(ZMQASIM));
 /* line 283: */
PLQASIM_outputlimitsvector( (*(&(XMQASIM_st->T))), &ANQASIM );
OGQASIM_append((&YMQASIM_row), ANQASIM);
 /* line 284: */
 /* line 285: */
if ( ((*(&(XMQASIM_st->Rest)))!=WSAASIM_nilsst) )
{ 
 /* line 286: */
CNQASIM = (*(&(XMQASIM_st->Rest))) ;
PLQASIM_outputlimitsvector( A_UNITE(BNQASIM,mode7,7,CNQASIM), &DNQASIM );
OGQASIM_append((&YMQASIM_row), DNQASIM);
} 
 /* line 287: */
 /* line 288: */
 /* line 289: */
SLQASIM = YMQASIM_row;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(outputlimitsvector);
*ReturnedValue = (SLQASIM);
return;
} 
#undef NL

A_STATIC A68_INT  GNQASIM_pushoutputlimits(A68_427  Output, A68_307  Outputtype)
{ 
A68_INT  HNQASIM_stacksize;
A68_307  INQASIM;  /* united object - for case conformity */
A68_310 * JNQASIM_st;
A68_315 * KNQASIM_st;
A68_315 * LNQASIM_ott;
A68_435  NNQASIM_generator;   /* proc value of non-global proc */
A68_434  TNQASIM;  /* avoid structure result */
A68_434  SNQASIM_extractedtypes;
A68_INT  UNQASIM_i;
A68_INT  VNQASIM;  /* to part of loop */
A68_307 * WNQASIM;  /* YIELD */
A68_INT  XNQASIM_i;
A68_INT  YNQASIM;  /* by part of loop */
A68_428  ZNQASIM;  /* OPERATORS - simple index */
A68_312 * AOQASIM_st;
A68_INT  BOQASIM_i;
A68_INT  COQASIM;  /* by part of loop */
A68_428  DOQASIM;  /* OPERATORS - simple index */
A68_313 * EOQASIM_st;
A68_INT  FOQASIM;  /* clause result */
A_PROC_ENTRY(pushoutputlimits);
 /* line 297: */
 /* line 298: */
{ 
HNQASIM_stacksize = 0;
 /* line 299: */
 /* line 300: */
INQASIM = Outputtype ;
switch ( INQASIM.mode )
{ 
case 2: /* REF STRUCT(REF MODE26,INT,INT)  */
JNQASIM_st = (INQASIM.data.mode2);
 /* line 301: */
 /* line 302: */
if ( Output.Limit_save )
{ 
QUNASIM_ampushint((*(&(JNQASIM_st->Upb))));
 /* line 303: */
QUNASIM_ampushint((*(&(JNQASIM_st->Lwb))));
 /* line 304: */
 /* line 305: */
 /* line 306: */
HNQASIM_stacksize+=2;
} 
break;
case 7: /* REF STRUCT(MODE307,REF MODE315)  */
KNQASIM_st = (INQASIM.data.mode7);
 /* line 307: */
 /* line 308: */
{ 
LNQASIM_ott = KNQASIM_st;
 /* line 309: */
A_CLOSURE( NNQASIM_generator, ONQASIM_generator, PNQASIM_generator );
(( PNQASIM_generator * ) ( NNQASIM_generator.nonlocals )) -> Output = Output;
A_CALLPROC(NNQASIM_generator,(A68_TRUE, &TNQASIM),(A68_TRUE, &TNQASIM,(NNQASIM_generator).nonlocals));
SNQASIM_extractedtypes = TNQASIM;
 /* line 311: */
VNQASIM = Output.Struct_components.dim[0].upb;
for ( UNQASIM_i = 1;
UNQASIM_i <= VNQASIM;
UNQASIM_i += 1 )
{ 
 /* line 312: */
WNQASIM = (&A_VINDEX(SNQASIM_extractedtypes,UNQASIM_i)) ;
(*WNQASIM) = (*(&(LNQASIM_ott->T)));
 /* line 313: */
 /* line 314: */
LNQASIM_ott = (*(&(LNQASIM_ott->Rest)));
}
 /* line 316: */
YNQASIM = (-1);
for ( XNQASIM_i = Output.Struct_components.dim[0].upb;
( YNQASIM > 0 && XNQASIM_i <= 1) ||
( YNQASIM < 0 && XNQASIM_i >= 1) ||
( YNQASIM == 0 ) ;
XNQASIM_i += YNQASIM )
{ 
 /* line 317: */
 /* line 318: */
 /* line 319: */
ZNQASIM = Output.Struct_components ;
HNQASIM_stacksize+=GNQASIM_pushoutputlimits((*(&A_R1INDEX(ZNQASIM,XNQASIM_i))), (*(&A_VINDEX(SNQASIM_extractedtypes,XNQASIM_i))));
}
 /* line 320: */
 /* line 321: */
} 
break;
case 4: /* REF STRUCT(INT,MODE307)  */
AOQASIM_st = (INQASIM.data.mode4);
 /* line 322: */
COQASIM = (-1);
for ( BOQASIM_i = (*(&(AOQASIM_st->No)));
( COQASIM > 0 && BOQASIM_i <= 1) ||
( COQASIM < 0 && BOQASIM_i >= 1) ||
( COQASIM == 0 ) ;
BOQASIM_i += COQASIM )
{ 
 /* line 323: */
 /* line 324: */
 /* line 325: */
DOQASIM = Output.Struct_components ;
HNQASIM_stacksize+=GNQASIM_pushoutputlimits((*(&A_R1INDEX(DOQASIM,BOQASIM_i))), (*(&(AOQASIM_st->Type))));
}
 /* line 326: */
break;
case 5: /* REF STRUCT(INT,MODE311)  */
EOQASIM_st = (INQASIM.data.mode5);
 /* line 327: */
 /* line 328: */
if ( Output.Limit_save )
{ 
QUNASIM_ampushint((*(&(EOQASIM_st->No))));
 /* line 329: */
 /* line 330: */
 /* line 331: */
 /* line 334: */
HNQASIM_stacksize+=1;
} 
break;
default: 
/*SKIP*/;
break;
} 
 /* line 335: */
 /* line 336: */
FOQASIM = HNQASIM_stacksize;
} 
A_PROC_EXIT(pushoutputlimits);
return( FOQASIM );
} 
#undef NL
 /* line 339: */

A_STATIC A68_VOID  KOQASIM_storeoutput(A68_427  Output, A68_INT  Outputtype, A68_INT  Outputoffset, A68_INT  Cpoffset)
{ 
A68_307  LOQASIM;  /* avoid structure result */
A68_307  MOQASIM;  /* united object - for case conformity */
A68_313 * NOQASIM_st;
A68_INT  OOQASIM;  /* clause result */
A_PROC_ENTRY(storeoutput);
 /* line 345: */
 /* line 346: */
 /* line 348: */
if ( (Output.Output_type_sort==AIQASIM_bs) )
{ 
WUNASIM_amlocal((Cpoffset+2));
 /* line 350: */
QUNASIM_ampushint(Outputoffset);
 /* line 352: */
SSNASIM_amadd();
 /* line 354: */
WUNASIM_amlocal(1);
 /* line 356: */
FVNASIM_amstore(DENASIM_ws, ONFASIM_indirect);
 /* line 357: */
TUNASIM_amdrop(1);
 /* line 359: */
WUNASIM_amlocal((Cpoffset+1));
 /* line 361: */
QUNASIM_ampushint((Outputoffset+DENASIM_ws));
 /* line 362: */
SSNASIM_amadd();
 /* line 364: */
WUNASIM_amlocal(1);
 /* line 365: */
VGCASIM_lookuptype( Outputtype, &LOQASIM );
MOQASIM = LOQASIM ;
switch ( MOQASIM.mode )
{ 
case 5: /* REF STRUCT(INT,MODE311)  */
NOQASIM_st = (MOQASIM.data.mode5);
 /* line 366: */
OOQASIM = (*(&(NOQASIM_st->No)));
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 367: */
QVNASIM_ambstore(OOQASIM, ONFASIM_indirect);
 /* line 368: */
 /* line 370: */
TUNASIM_amdrop(1);
} 
else
{ 
 /* line 372: */
if ( (Output.Output_type_sort==BIQASIM_tv) )
{ 
WUNASIM_amlocal((Cpoffset+1));
 /* line 374: */
QUNASIM_ampushint(Outputoffset);
 /* line 376: */
SSNASIM_amadd();
 /* line 378: */
WUNASIM_amlocal(1);
 /* line 379: */
FVNASIM_amstore(YGCASIM_lookuptypesize(Outputtype), ONFASIM_indirect);
 /* line 380: */
 /* line 382: */
TUNASIM_amdrop(1);
} 
} 
A_PROC_EXIT(storeoutput);
return;
} 
#undef NL

A_STATIC A68_BOOL  ROQASIM_inputmatch(A68_INT  Input, A68_INT  Inputtype)
{ 
A68_307  SOQASIM;  /* avoid structure result */
A68_307  TOQASIM;  /* united object - for case conformity */
A68_309 * UOQASIM_st;
A68_BOOL  VOQASIM;  /* optbool result */
A68_BOOL  WOQASIM;  /* optbool result */
A68_307  XOQASIM;  /* OPERATORS - mode -> union mode */
A68_BOOL  YOQASIM;  /* clause result */
A68_311 * ZOQASIM_st;
A68_BOOL  APQASIM;  /* optbool result */
A68_BOOL  BPQASIM;  /* optbool result */
A68_307  CPQASIM;  /* OPERATORS - mode -> union mode */
A68_313 * DPQASIM_st;
A68_BOOL  EPQASIM;  /* optbool result */
A68_307  FPQASIM;  /* OPERATORS - mode -> union mode */
A68_311 * GPQASIM;  /* YIELD */
A68_BOOL  HPQASIM;  /* optbool result */
A68_307  IPQASIM;  /* OPERATORS - mode -> union mode */
A68_311 * JPQASIM;  /* YIELD */
A68_BOOL  KPQASIM;  /* optbool result */
A68_307  LPQASIM;  /* OPERATORS - mode -> union mode */
A68_311 * MPQASIM;  /* YIELD */
A68_BOOL  NPQASIM;  /* optbool result */
A68_307  OPQASIM;  /* OPERATORS - mode -> union mode */
A68_311 * PPQASIM;  /* YIELD */
A_PROC_ENTRY(inputmatch);
 /* line 396: */
 /* line 397: */
VGCASIM_lookuptype( Inputtype, &SOQASIM );
TOQASIM = SOQASIM ;
switch ( TOQASIM.mode )
{ 
case 1: /* REF STRUCT(REF MODE26,MODE307,REF MODE309)  */
UOQASIM_st = (TOQASIM.data.mode1);
 /* line 398: */
 /* line 399: */
VOQASIM = (Input==DIQASIM_ee);
if ( ! VOQASIM )
{WOQASIM = (Input==BIQASIM_tv);
if ( WOQASIM )
{ /* line 400: */
WOQASIM = (NHQASIM_numeration(A_UNITE(XOQASIM,mode1,1,UOQASIM_st))==2);
}
if ( WOQASIM )
{WOQASIM = YHQASIM_notassociated((*UOQASIM_st));
}
VOQASIM = WOQASIM;
}
 /* line 401: */
YOQASIM = VOQASIM;
break;
case 2: /* REF STRUCT(REF MODE26,INT,INT)  */
 /* line 402: */
 /* line 403: */
YOQASIM = (Input==EIQASIM_ei);
break;
case 3: /* REF STRUCT(REF MODE26,REF MODE26)  */
ZOQASIM_st = (TOQASIM.data.mode3);
 /* line 404: */
 /* line 405: */
APQASIM = (Input==CIQASIM_ch);
if ( ! APQASIM )
{BPQASIM = (Input==BIQASIM_tv);
if ( BPQASIM )
{BPQASIM = (NHQASIM_numeration(A_UNITE(CPQASIM,mode3,3,ZOQASIM_st))==2);
}
APQASIM = BPQASIM;
}
 /* line 406: */
YOQASIM = APQASIM;
break;
case 5: /* REF STRUCT(INT,MODE311)  */
DPQASIM_st = (TOQASIM.data.mode5);
 /* line 407: */
EPQASIM = (Input==AIQASIM_bs);
if ( EPQASIM )
{ /* line 408: */
GPQASIM = (&(DPQASIM_st->T)) ;
EPQASIM = (NHQASIM_numeration(A_UNITE(FPQASIM,mode3,3,GPQASIM))==2);
}
if ( ! EPQASIM )
{HPQASIM = (Input==FIQASIM_ds);
if ( HPQASIM )
{JPQASIM = (&(DPQASIM_st->T)) ;
HPQASIM = (NHQASIM_numeration(A_UNITE(IPQASIM,mode3,3,JPQASIM))==10);
}
 /* line 409: */
EPQASIM = HPQASIM;
}
if ( ! EPQASIM )
{ /* line 410: */
EPQASIM = (Input==JIQASIM_cs);
}
if ( ! EPQASIM )
{KPQASIM = (Input==HIQASIM_lr);
if ( KPQASIM )
{ /* line 411: */
MPQASIM = (&(DPQASIM_st->T)) ;
KPQASIM = (NHQASIM_numeration(A_UNITE(LPQASIM,mode3,3,MPQASIM))==2);
}
if ( KPQASIM )
{KPQASIM = ((*(&(DPQASIM_st->No)))==64);
}
 /* line 412: */
EPQASIM = KPQASIM;
}
if ( ! EPQASIM )
{NPQASIM = (Input==GIQASIM_sr);
if ( NPQASIM )
{ /* line 413: */
PPQASIM = (&(DPQASIM_st->T)) ;
NPQASIM = (NHQASIM_numeration(A_UNITE(OPQASIM,mode3,3,PPQASIM))==2);
}
if ( NPQASIM )
{NPQASIM = ((*(&(DPQASIM_st->No)))==32);
}
 /* line 414: */
EPQASIM = NPQASIM;
}
 /* line 415: */
YOQASIM = EPQASIM;
break;
default: 
 /* line 416: */
YOQASIM = A68_FALSE;
break;
} 
A_PROC_EXIT(inputmatch);
return( YOQASIM );
} 
#undef NL

A_STATIC A68_VOID  RPQASIM_inputlimitsvector(A68_32  Inputtypes, A68_32  *ReturnedValue)
{ 
A68_32  TPQASIM;  /* OPERATORS - nil -> mode */
A68_32  SPQASIM_result;
A68_INT  UPQASIM_i;
A68_INT  VPQASIM;  /* to part of loop */
A68_307  WPQASIM;  /* avoid structure result */
A68_307  XPQASIM;  /* united object - for case conformity */
A68_309 * YPQASIM_st;
A68_32  ZPQASIM;  /* clause result */
A68_32  AQQASIM;  /* OPERATORS - nil -> mode */
A68_310 * BQQASIM_st;
A68_33  DQQASIM_generator;   /* proc value of non-global proc */
A68_432  IQQASIM;  /* collateral clause result */
A68_32  JQQASIM;  /* avoid structure result */
A68_32  KQQASIM;  /* OPERATORS - istruct -> vector */
A68_32  LQQASIM;  /* OPERATORS - assign op */
A68_311 * MQQASIM_st;
A68_32  NQQASIM;  /* OPERATORS - nil -> mode */
A68_313 * OQQASIM_st;
A68_33  QQQASIM_generator;   /* proc value of non-global proc */
A68_32  VQQASIM;  /* avoid structure result */
A68_32  WQQASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_32  XQQASIM;  /* OPERATORS - assign op */
A68_32  YQQASIM;  /* clause result */
A_PROC_ENTRY(inputlimitsvector);
 /* line 423: */
 /* line 424: */
{ 
SPQASIM_result = (A_VVAC(TPQASIM));
 /* line 425: */
VPQASIM = Inputtypes.upb;
for ( UPQASIM_i = 1;
UPQASIM_i <= VPQASIM;
UPQASIM_i += 1 )
{ 
 /* line 426: */
 /* line 427: */
 /* line 428: */
VGCASIM_lookuptype( A_VINDEX(Inputtypes,UPQASIM_i), &WPQASIM );
XPQASIM = WPQASIM ;
switch ( XPQASIM.mode )
{ 
case 1: /* REF STRUCT(REF MODE26,MODE307,REF MODE309)  */
YPQASIM_st = (XPQASIM.data.mode1);
 /* line 429: */
ZPQASIM = A_VVAC(AQQASIM);
break;
case 2: /* REF STRUCT(REF MODE26,INT,INT)  */
BQQASIM_st = (XPQASIM.data.mode2);
A_CLOSURE( DQQASIM_generator, EQQASIM_generator, FQQASIM_generator );
IQQASIM.data[0] = (*(&(BQQASIM_st->Lwb)));
IQQASIM.data[1] = (*(&(BQQASIM_st->Upb)));
 /* line 430: */
A_CALLPROC(DQQASIM_generator,(A68_FALSE, &JQQASIM),(A68_FALSE, &JQQASIM,(DQQASIM_generator).nonlocals));
LQQASIM = A_HISVEC(KQQASIM,IQQASIM,2,A68_INT ) ;
A_VASSIGN2(LQQASIM,JQQASIM,A68_INT ) ;
ZPQASIM = JQQASIM;
break;
case 3: /* REF STRUCT(REF MODE26,REF MODE26)  */
MQQASIM_st = (XPQASIM.data.mode3);
 /* line 431: */
ZPQASIM = A_VVAC(NQQASIM);
break;
case 5: /* REF STRUCT(INT,MODE311)  */
OQQASIM_st = (XPQASIM.data.mode5);
A_CLOSURE( QQQASIM_generator, RQQASIM_generator, SQQASIM_generator );
 /* line 432: */
 /* line 433: */
A_CALLPROC(QQQASIM_generator,(A68_FALSE, &VQQASIM),(A68_FALSE, &VQQASIM,(QQQASIM_generator).nonlocals));
XQQASIM = A_HVEC(WQQASIM,(*(&(OQQASIM_st->No))),A68_INT ) ;
A_VASSIGN2(XQQASIM,VQQASIM,A68_INT ) ;
ZPQASIM = VQQASIM;
break;
default: 
A_IMP_SKIP ;
break;
} 
OGQASIM_append((&SPQASIM_result), ZPQASIM);
}
 /* line 434: */
 /* line 435: */
YQQASIM = SPQASIM_result;
} 
A_PROC_EXIT(inputlimitsvector);
*ReturnedValue = (YQQASIM);
return;
} 
#undef NL
 /* line 438: */

A_STATIC A68_INT  CRQASIM_pushinputs(A68_439  Inputs, A68_32  Inputtypes, A68_INT  Cpoffset)
{ 
A68_INT  DRQASIM_stacksize;
A68_INT  ERQASIM_i;
A68_INT  FRQASIM;  /* by part of loop */
A68_307  GRQASIM;  /* avoid structure result */
A68_307  HRQASIM;  /* united object - for case conformity */
A68_310 * IRQASIM_st;
A68_313 * JRQASIM_st;
A68_307  KRQASIM;  /* OPERATORS - mode -> union mode */
A68_311 * LRQASIM;  /* YIELD */
A68_INT  MRQASIM;  /* clause result */
A_PROC_ENTRY(pushinputs);
 /* line 444: */
 /* line 445: */
{ 
DRQASIM_stacksize = 0;
 /* line 446: */
FRQASIM = (-1);
for ( ERQASIM_i = Inputs.dim[0].upb;
( FRQASIM > 0 && ERQASIM_i <= 1) ||
( FRQASIM < 0 && ERQASIM_i >= 1) ||
( FRQASIM == 0 ) ;
ERQASIM_i += FRQASIM )
{ 
 /* line 447: */
 /* line 448: */
VGCASIM_lookuptype( A_VINDEX(Inputtypes,ERQASIM_i), &GRQASIM );
HRQASIM = GRQASIM ;
switch ( HRQASIM.mode )
{ 
case 1: /* REF STRUCT(REF MODE26,MODE307,REF MODE309)  */
case 3: /* REF STRUCT(REF MODE26,REF MODE26)  */
 /* line 449: */
 /* line 450: */
{ 
WUNASIM_amlocal((DRQASIM_stacksize+Cpoffset));
 /* line 452: */
QUNASIM_ampushint(((ERQASIM_i*DENASIM_ws)+GENASIM_sizeunit));
 /* line 454: */
SSNASIM_amadd();
 /* line 456: */
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
 /* line 458: */
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
 /* line 460: */
 /* line 461: */
 /* line 462: */
DRQASIM_stacksize+=1;
} 
break;
case 2: /* REF STRUCT(REF MODE26,INT,INT)  */
IRQASIM_st = (HRQASIM.data.mode2);
 /* line 463: */
 /* line 464: */
{ 
WUNASIM_amlocal((DRQASIM_stacksize+Cpoffset));
 /* line 466: */
QUNASIM_ampushint(((ERQASIM_i*DENASIM_ws)+GENASIM_sizeunit));
 /* line 468: */
SSNASIM_amadd();
 /* line 470: */
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
 /* line 472: */
QUNASIM_ampushint(DENASIM_ws);
 /* line 474: */
SSNASIM_amadd();
 /* line 476: */
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
 /* line 478: */
WUNASIM_amlocal(((DRQASIM_stacksize+Cpoffset)+1));
 /* line 480: */
QUNASIM_ampushint(((ERQASIM_i*DENASIM_ws)+GENASIM_sizeunit));
 /* line 482: */
SSNASIM_amadd();
 /* line 484: */
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
 /* line 486: */
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
 /* line 488: */
 /* line 489: */
 /* line 490: */
DRQASIM_stacksize+=2;
} 
break;
case 5: /* REF STRUCT(INT,MODE311)  */
JRQASIM_st = (HRQASIM.data.mode5);
 /* line 491: */
 /* line 492: */
{ 
QUNASIM_ampushint(0);
 /* line 494: */
WUNASIM_amlocal(((DRQASIM_stacksize+Cpoffset)+1));
 /* line 496: */
QUNASIM_ampushint(((ERQASIM_i*DENASIM_ws)+GENASIM_sizeunit));
 /* line 498: */
SSNASIM_amadd();
 /* line 500: */
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
 /* line 502: */
QUNASIM_ampushint(DENASIM_ws);
 /* line 504: */
SSNASIM_amadd();
 /* line 506: */
 /* line 508: */
LRQASIM = (&(JRQASIM_st->T)) ;
if ( (NHQASIM_numeration(A_UNITE(KRQASIM,mode3,3,LRQASIM))==2) )
{ 
 /* line 509: */
 /* line 511: */
LVNASIM_ambstring((*(&(JRQASIM_st->No))), (*(&(JRQASIM_st->No))), ONFASIM_indirect);
} 
else
{ 
 /* line 512: */
 /* line 513: */
LVNASIM_ambstring(((*(&(JRQASIM_st->No)))*CENASIM_bitsperbyte), ((*(&(JRQASIM_st->No)))*CENASIM_bitsperbyte), ONFASIM_indirect);
} 
 /* line 515: */
WUNASIM_amlocal(((DRQASIM_stacksize+Cpoffset)+1));
 /* line 517: */
QUNASIM_ampushint(((ERQASIM_i*DENASIM_ws)+GENASIM_sizeunit));
 /* line 519: */
SSNASIM_amadd();
 /* line 521: */
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
 /* line 523: */
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
 /* line 525: */
 /* line 526: */
 /* line 527: */
 /* line 528: */
DRQASIM_stacksize+=2;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
}
 /* line 529: */
 /* line 530: */
MRQASIM = DRQASIM_stacksize;
} 
A_PROC_EXIT(pushinputs);
return( MRQASIM );
} 
#undef NL
 /* line 546: */
 /* line 547: */
 /* line 548: */

A_STATIC A68_VOID  WRQASIM_biopbodytranslate(A68_442  B, A68_129  Body, A68_121  Declaration, A68_32  Inputtypes, A68_INT  Outputtype, A68_115  Environ, A68_248 * Closure, A68_36  Flt, A68_INT  Outputoffset)
{ 
A68_307  XRQASIM;  /* avoid structure result */
A68_426  YRQASIM;  /* CALL */
A68_307  ZRQASIM;  /* avoid structure result */
A68_32  ASQASIM;  /* avoid structure result */
A68_32  BSQASIM;  /* avoid structure result */
A68_32  CSQASIM;  /* avoid structure result */
A68_INT  DSQASIM_existingopsize;
A68_INT  ESQASIM;  /* clause result */
A68_INT  FSQASIM_oppointersize;
A68_307  GSQASIM;  /* avoid structure result */
A68_INT  HSQASIM_oplimitssize;
A68_INT  ISQASIM_macsize;
A68_32  JSQASIM;  /* YIELD */
A68_439  KSQASIM;  /* OPERATORS - vector -> row */
A68_INT  LSQASIM_ipsize;
A_PROC_ENTRY(biopbodytranslate);
 /* line 550: */
 /* line 553: */
{ 
 /* line 554: */
if ( MIQASIM_macparamsmatch(Body.Macparams, B.No_of_macparams) )
{ 
 /* line 555: */
VGCASIM_lookuptype( Outputtype, &XRQASIM );
if ( VJQASIM_outputmatch(B.Output, XRQASIM) )
{ 
 /* line 556: */
 /* line 557: */
 /* line 558: */
 /* line 559: */
 /* line 560: */
 /* line 561: */
 /* line 563: */
YRQASIM = B.Limit_check ;
VGCASIM_lookuptype( Outputtype, &ZRQASIM );
PLQASIM_outputlimitsvector( ZRQASIM, &ASQASIM );
VIQASIM_macparamslimitsvector( Body.Macparams, &BSQASIM );
RPQASIM_inputlimitsvector( Inputtypes, &CSQASIM );
if ( A_CALLPROC(YRQASIM,(CSQASIM, BSQASIM, ASQASIM),(CSQASIM, BSQASIM, ASQASIM,(YRQASIM).nonlocals)) )
{ 
DSQASIM_existingopsize = MLQASIM_pushcurrentoutput(Outputtype, Outputoffset, 0);
 /* line 565: */
 /* line 566: */
 /* line 567: */
if ( B.Pointer )
{ 
WUNASIM_amlocal(DSQASIM_existingopsize);
 /* line 569: */
QUNASIM_ampushint(Outputoffset);
 /* line 571: */
SSNASIM_amadd();
 /* line 573: */
 /* line 574: */
 /* line 576: */
ESQASIM = 1;
} 
else
{ 
ESQASIM = 0;
} 
FSQASIM_oppointersize = ESQASIM;
 /* line 578: */
 /* line 579: */
 /* line 580: */
VGCASIM_lookuptype( Outputtype, &GSQASIM );
HSQASIM_oplimitssize = GNQASIM_pushoutputlimits(B.Output, GSQASIM);
 /* line 582: */
ISQASIM_macsize = MJQASIM_pushmacparams(Body.Macparams);
 /* line 584: */
 /* line 585: */
 /* line 586: */
JSQASIM = B.Inputs ;
LSQASIM_ipsize = CRQASIM_pushinputs(A_VECARR(JSQASIM,KSQASIM), Inputtypes, (((ISQASIM_macsize+HSQASIM_oplimitssize)+FSQASIM_oppointersize)+DSQASIM_existingopsize));
 /* line 588: */
 /* line 589: */
 /* line 590: */
BXNASIM_amcall((((LSQASIM_ipsize+ISQASIM_macsize)+HSQASIM_oplimitssize)+FSQASIM_oppointersize), B.Biop_name);
 /* line 592: */
 /* line 593: */
if ( !B.Pointer )
{ 
 /* line 594: */
 /* line 596: */
KOQASIM_storeoutput(B.Output, Outputtype, Outputoffset, DSQASIM_existingopsize);
} 
 /* line 597: */
 /* line 598: */
MLQASIM_pushcurrentoutput(Outputtype, Outputoffset, DSQASIM_existingopsize);
 /* line 600: */
UTNASIM_amneq();
 /* line 602: */
IWNASIM_amjumpno(0, XHPASIM_oldresultlabel);
 /* line 604: */
WUNASIM_amlocal(0);
 /* line 606: */
QUNASIM_ampushint(0);
 /* line 608: */
FVNASIM_amstore(GENASIM_sizeunit, ONFASIM_indirect);
 /* line 610: */
 /* line 612: */
 /* line 613: */
NWNASIM_amlabel(1, XHPASIM_oldresultlabel);
} 
else
{ 
 /* line 614: */
 /* line 615: */
 /* line 616: */
 /* line 617: */
A_CALLPROC(Flt,(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(OSQASIM,Body.Name),PSQASIM),Declaration.Fnname)),(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(OSQASIM,Body.Name),PSQASIM),Declaration.Fnname),(Flt).nonlocals));
} 
} 
else
{ 
 /* line 618: */
 /* line 619: */
 /* line 620: */
 /* line 621: */
A_CALLPROC(Flt,(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(SSQASIM,Body.Name),TSQASIM),Declaration.Fnname)),(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(SSQASIM,Body.Name),TSQASIM),Declaration.Fnname),(Flt).nonlocals));
} 
} 
else
{ 
 /* line 622: */
 /* line 623: */
 /* line 624: */
A_CALLPROC(Flt,(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(WSQASIM,Body.Name),XSQASIM),Declaration.Fnname)),(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(WSQASIM,Body.Name),XSQASIM),Declaration.Fnname),(Flt).nonlocals));
} 
} 
A_PROC_EXIT(biopbodytranslate);
return;
} 
#undef NL

A_STATIC A68_BOOL  BTQASIM_overloadedbioplookup(A68_448  B, A68_32  Inputtypes, A68_442 * Biop)
{ 
A68_BOOL  CTQASIM_found;
A68_INT  DTQASIM_i;
A68_INT  ETQASIM;  /* to part of loop */
A68_449  FTQASIM;  /* OPERATORS - simple index */
A68_INT  GTQASIM_j;
A68_INT  HTQASIM;  /* to part of loop */
A68_449  ITQASIM;  /* OPERATORS - simple index */
A68_32  JTQASIM;  /* OPERATORS - simple index */
A68_449  KTQASIM;  /* OPERATORS - simple index */
A68_BOOL  LTQASIM;  /* clause result */
A_PROC_ENTRY(overloadedbioplookup);
 /* line 637: */
 /* line 638: */
{ 
CTQASIM_found = A68_FALSE;
 /* line 639: */
ETQASIM = B.Biops.upb;
for ( DTQASIM_i = 1;
DTQASIM_i <= ETQASIM;
DTQASIM_i += 1 )
{ 
 /* line 640: */
if ( !(!CTQASIM_found) ) break;
 /* line 641: */
FTQASIM = B.Biops ;
if ( (Inputtypes.upb==(*(&((&A_VINDEX(FTQASIM,DTQASIM_i))->Inputs))).upb) )
{ 
CTQASIM_found = A68_TRUE;
 /* line 642: */
HTQASIM = Inputtypes.upb;
for ( GTQASIM_j = 1;
GTQASIM_j <= HTQASIM;
GTQASIM_j += 1 )
{ 
 /* line 643: */
if ( !(CTQASIM_found) ) break;
 /* line 644: */
 /* line 645: */
ITQASIM = B.Biops ;
JTQASIM = (*(&((&A_VINDEX(ITQASIM,DTQASIM_i))->Inputs))) ;
if ( !ROQASIM_inputmatch((*(&A_VINDEX(JTQASIM,GTQASIM_j))), A_VINDEX(Inputtypes,GTQASIM_j)) )
{ 
 /* line 646: */
 /* line 647: */
CTQASIM_found = A68_FALSE;
} 
}
 /* line 648: */
 /* line 649: */
if ( CTQASIM_found )
{ 
 /* line 650: */
 /* line 651: */
 /* line 652: */
KTQASIM = B.Biops ;
(*Biop) = (*(&A_VINDEX(KTQASIM,DTQASIM_i)));
} 
} 
}
 /* line 653: */
 /* line 654: */
LTQASIM = CTQASIM_found;
} 
A_PROC_EXIT(overloadedbioplookup);
return( LTQASIM );
} 
#undef NL
 /* line 659: */
 /* line 660: */
 /* line 661: */

A_STATIC A68_VOID  VTQASIM_overloadedbioptranslate(A68_448  B, A68_129  Body, A68_121  Declaration, A68_32  Inputtypes, A68_INT  Outputtype, A68_115  Environ, A68_248 * Closure, A68_36  Flt, A68_INT  Outputoffset)
{ 
A68_442  WTQASIM_biop;
A_PROC_ENTRY(overloadedbioptranslate);
 /* line 663: */
 /* line 666: */
{ 
 /* line 667: */
 /* line 668: */
if ( BTQASIM_overloadedbioplookup(B, Inputtypes, (&WTQASIM_biop)) )
{ 
 /* line 669: */
 /* line 670: */
 /* line 671: */
WRQASIM_biopbodytranslate(WTQASIM_biop, Body, Declaration, Inputtypes, Outputtype, Environ, Closure, Flt, Outputoffset);
} 
else
{ 
 /* line 672: */
 /* line 673: */
 /* line 675: */
A_CALLPROC(Flt,(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(ZTQASIM,Body.Name),AUQASIM),Declaration.Fnname)),(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(ZTQASIM,Body.Name),AUQASIM),Declaration.Fnname),(Flt).nonlocals));
} 
} 
A_PROC_EXIT(overloadedbioptranslate);
return;
} 
#undef NL

A_STATIC A68_VOID  DUQASIM_generator(A68_BOOL  CUQASIM_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  EUQASIM;  /* clause result */
A68_32  FUQASIM;  /* OPERATORS - dynamic generator */
{ 
FUQASIM.upb = 0 ;
( CUQASIM_anonymous? A_VLOC(A68_INT ,FUQASIM): A_VHEAP(A68_INT ,FUQASIM) );
EUQASIM = FUQASIM;
} 
*ReturnedValue = (EUQASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  HUQASIM_make_1(A68_448  *ReturnedValue)
{ 
A68_448  IUQASIM;  /* collateral clause result */
A68_VC  LUQASIM;  /* avoid structure result */
A68_458  QUQASIM;  /* collateral clause result */
A68_357  TUQASIM;  /* avoid structure result */
A68_432  YUQASIM;  /* collateral clause result */
A68_32  ZUQASIM;  /* avoid structure result */
A68_32  AVQASIM;  /* OPERATORS - istruct -> vector */
A68_32  BVQASIM;  /* OPERATORS - assign op */
A68_428  CVQASIM;  /* OPERATORS - nil -> mode */
A68_426  MVQASIM;  /* procedure value */
A68_357  PVQASIM;  /* avoid structure result */
A68_432  UVQASIM;  /* collateral clause result */
A68_32  VVQASIM;  /* avoid structure result */
A68_32  WVQASIM;  /* OPERATORS - istruct -> vector */
A68_32  XVQASIM;  /* OPERATORS - assign op */
A68_428  YVQASIM;  /* OPERATORS - nil -> mode */
A68_426  EWQASIM;  /* procedure value */
A68_449  FWQASIM;  /* avoid structure result */
A68_449  GWQASIM;  /* OPERATORS - istruct -> vector */
A68_449  HWQASIM;  /* OPERATORS - assign op */
A68_448  IWQASIM;  /* clause result */
A_PROC_ENTRY(make_1);
RSCAOST_makeid( KUQASIM, &LUQASIM );
IUQASIM.Overloaded_biop_name = LUQASIM;
 /* line 686: */
 /* line 687: */
YLFASIM_label( SUQASIM, &TUQASIM );
QUQASIM.data[0].Biop_name = TUQASIM;
YUQASIM.data[0] = AIQASIM_bs;
YUQASIM.data[1] = AIQASIM_bs;
VUQASIM_generator( A68_FALSE, &ZUQASIM );
BVQASIM = A_HISVEC(AVQASIM,YUQASIM,2,A68_INT ) ;
A_VASSIGN2(BVQASIM,ZUQASIM,A68_INT ) ;
QUQASIM.data[0].Inputs = ZUQASIM;
 /* line 688: */
QUQASIM.data[0].No_of_macparams = 0;
QUQASIM.data[0].Output.Output_type_sort = AIQASIM_bs;
QUQASIM.data[0].Output.Limit_save = A68_FALSE;
QUQASIM.data[0].Output.Struct_components = A_R1VAC(CVQASIM);
 /* line 689: */
QUQASIM.data[0].Pointer = A68_FALSE;
 /* line 690: */
MVQASIM.fn.fn_global = GVQASIM_anonymous;
MVQASIM.nonlocals = A68_NIL;
QUQASIM.data[0].Limit_check = MVQASIM;
YLFASIM_label( OVQASIM, &PVQASIM );
QUQASIM.data[1].Biop_name = PVQASIM;
UVQASIM.data[0] = BIQASIM_tv;
UVQASIM.data[1] = BIQASIM_tv;
RVQASIM_generator( A68_FALSE, &VVQASIM );
XVQASIM = A_HISVEC(WVQASIM,UVQASIM,2,A68_INT ) ;
A_VASSIGN2(XVQASIM,VVQASIM,A68_INT ) ;
QUQASIM.data[1].Inputs = VVQASIM;
 /* line 691: */
QUQASIM.data[1].No_of_macparams = 0;
QUQASIM.data[1].Output.Output_type_sort = BIQASIM_tv;
QUQASIM.data[1].Output.Limit_save = A68_FALSE;
QUQASIM.data[1].Output.Struct_components = A_R1VAC(YVQASIM);
 /* line 692: */
QUQASIM.data[1].Pointer = A68_FALSE;
 /* line 693: */
 /* line 694: */
EWQASIM.fn.fn_global = CWQASIM_anonymous;
EWQASIM.nonlocals = A68_NIL;
QUQASIM.data[1].Limit_check = EWQASIM;
NUQASIM_generator( A68_FALSE, &FWQASIM );
HWQASIM = A_HISVEC(GWQASIM,QUQASIM,2,A68_442 ) ;
A_VASSIGN2(HWQASIM,FWQASIM,A68_442 ) ;
IUQASIM.Biops = FWQASIM;
IWQASIM = IUQASIM;
A_PROC_EXIT(make_1);
*ReturnedValue = (IWQASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  JWQASIM_make_2(A68_448  *ReturnedValue)
{ 
A68_448  KWQASIM;  /* collateral clause result */
A68_VC  NWQASIM;  /* avoid structure result */
A68_458  SWQASIM;  /* collateral clause result */
A68_357  VWQASIM;  /* avoid structure result */
A68_432  AXQASIM;  /* collateral clause result */
A68_32  BXQASIM;  /* avoid structure result */
A68_32  CXQASIM;  /* OPERATORS - istruct -> vector */
A68_32  DXQASIM;  /* OPERATORS - assign op */
A68_428  EXQASIM;  /* OPERATORS - nil -> mode */
A68_426  OXQASIM;  /* procedure value */
A68_357  RXQASIM;  /* avoid structure result */
A68_432  WXQASIM;  /* collateral clause result */
A68_32  XXQASIM;  /* avoid structure result */
A68_32  YXQASIM;  /* OPERATORS - istruct -> vector */
A68_32  ZXQASIM;  /* OPERATORS - assign op */
A68_428  AYQASIM;  /* OPERATORS - nil -> mode */
A68_426  GYQASIM;  /* procedure value */
A68_449  HYQASIM;  /* avoid structure result */
A68_449  IYQASIM;  /* OPERATORS - istruct -> vector */
A68_449  JYQASIM;  /* OPERATORS - assign op */
A68_448  KYQASIM;  /* clause result */
A_PROC_ENTRY(make_2);
RSCAOST_makeid( MWQASIM, &NWQASIM );
KWQASIM.Overloaded_biop_name = NWQASIM;
 /* line 698: */
 /* line 699: */
YLFASIM_label( UWQASIM, &VWQASIM );
SWQASIM.data[0].Biop_name = VWQASIM;
AXQASIM.data[0] = AIQASIM_bs;
AXQASIM.data[1] = AIQASIM_bs;
XWQASIM_generator( A68_FALSE, &BXQASIM );
DXQASIM = A_HISVEC(CXQASIM,AXQASIM,2,A68_INT ) ;
A_VASSIGN2(DXQASIM,BXQASIM,A68_INT ) ;
SWQASIM.data[0].Inputs = BXQASIM;
 /* line 700: */
SWQASIM.data[0].No_of_macparams = 0;
SWQASIM.data[0].Output.Output_type_sort = AIQASIM_bs;
SWQASIM.data[0].Output.Limit_save = A68_FALSE;
SWQASIM.data[0].Output.Struct_components = A_R1VAC(EXQASIM);
 /* line 701: */
SWQASIM.data[0].Pointer = A68_FALSE;
 /* line 702: */
OXQASIM.fn.fn_global = IXQASIM_anonymous;
OXQASIM.nonlocals = A68_NIL;
SWQASIM.data[0].Limit_check = OXQASIM;
YLFASIM_label( QXQASIM, &RXQASIM );
SWQASIM.data[1].Biop_name = RXQASIM;
WXQASIM.data[0] = BIQASIM_tv;
WXQASIM.data[1] = BIQASIM_tv;
TXQASIM_generator( A68_FALSE, &XXQASIM );
ZXQASIM = A_HISVEC(YXQASIM,WXQASIM,2,A68_INT ) ;
A_VASSIGN2(ZXQASIM,XXQASIM,A68_INT ) ;
SWQASIM.data[1].Inputs = XXQASIM;
 /* line 703: */
SWQASIM.data[1].No_of_macparams = 0;
SWQASIM.data[1].Output.Output_type_sort = BIQASIM_tv;
SWQASIM.data[1].Output.Limit_save = A68_FALSE;
SWQASIM.data[1].Output.Struct_components = A_R1VAC(AYQASIM);
SWQASIM.data[1].Pointer = A68_FALSE;
 /* line 704: */
 /* line 705: */
GYQASIM.fn.fn_global = EYQASIM_anonymous;
GYQASIM.nonlocals = A68_NIL;
SWQASIM.data[1].Limit_check = GYQASIM;
PWQASIM_generator( A68_FALSE, &HYQASIM );
JYQASIM = A_HISVEC(IYQASIM,SWQASIM,2,A68_442 ) ;
A_VASSIGN2(JYQASIM,HYQASIM,A68_442 ) ;
KWQASIM.Biops = HYQASIM;
KYQASIM = KWQASIM;
A_PROC_EXIT(make_2);
*ReturnedValue = (KYQASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  LYQASIM_make_3(A68_448  *ReturnedValue)
{ 
A68_448  MYQASIM;  /* collateral clause result */
A68_VC  PYQASIM;  /* avoid structure result */
A68_458  UYQASIM;  /* collateral clause result */
A68_357  XYQASIM;  /* avoid structure result */
A68_32  CZQASIM;  /* avoid structure result */
A68_32  DZQASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_32  EZQASIM;  /* OPERATORS - assign op */
A68_428  FZQASIM;  /* OPERATORS - nil -> mode */
A68_426  NZQASIM;  /* procedure value */
A68_357  QZQASIM;  /* avoid structure result */
A68_32  VZQASIM;  /* avoid structure result */
A68_32  WZQASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_32  XZQASIM;  /* OPERATORS - assign op */
A68_428  YZQASIM;  /* OPERATORS - nil -> mode */
A68_426  EARASIM;  /* procedure value */
A68_449  FARASIM;  /* avoid structure result */
A68_449  GARASIM;  /* OPERATORS - istruct -> vector */
A68_449  HARASIM;  /* OPERATORS - assign op */
A68_448  IARASIM;  /* clause result */
A_PROC_ENTRY(make_3);
RSCAOST_makeid( OYQASIM, &PYQASIM );
MYQASIM.Overloaded_biop_name = PYQASIM;
 /* line 709: */
 /* line 710: */
YLFASIM_label( WYQASIM, &XYQASIM );
UYQASIM.data[0].Biop_name = XYQASIM;
ZYQASIM_generator( A68_FALSE, &CZQASIM );
EZQASIM = A_HVEC(DZQASIM,AIQASIM_bs,A68_INT ) ;
A_VASSIGN2(EZQASIM,CZQASIM,A68_INT ) ;
UYQASIM.data[0].Inputs = CZQASIM;
 /* line 711: */
UYQASIM.data[0].No_of_macparams = 0;
UYQASIM.data[0].Output.Output_type_sort = AIQASIM_bs;
UYQASIM.data[0].Output.Limit_save = A68_FALSE;
UYQASIM.data[0].Output.Struct_components = A_R1VAC(FZQASIM);
 /* line 712: */
UYQASIM.data[0].Pointer = A68_FALSE;
 /* line 713: */
NZQASIM.fn.fn_global = JZQASIM_anonymous;
NZQASIM.nonlocals = A68_NIL;
UYQASIM.data[0].Limit_check = NZQASIM;
YLFASIM_label( PZQASIM, &QZQASIM );
UYQASIM.data[1].Biop_name = QZQASIM;
SZQASIM_generator( A68_FALSE, &VZQASIM );
XZQASIM = A_HVEC(WZQASIM,BIQASIM_tv,A68_INT ) ;
A_VASSIGN2(XZQASIM,VZQASIM,A68_INT ) ;
UYQASIM.data[1].Inputs = VZQASIM;
 /* line 714: */
UYQASIM.data[1].No_of_macparams = 0;
UYQASIM.data[1].Output.Output_type_sort = BIQASIM_tv;
UYQASIM.data[1].Output.Limit_save = A68_FALSE;
UYQASIM.data[1].Output.Struct_components = A_R1VAC(YZQASIM);
UYQASIM.data[1].Pointer = A68_FALSE;
 /* line 715: */
 /* line 716: */
EARASIM.fn.fn_global = CARASIM_anonymous;
EARASIM.nonlocals = A68_NIL;
UYQASIM.data[1].Limit_check = EARASIM;
RYQASIM_generator( A68_FALSE, &FARASIM );
HARASIM = A_HISVEC(GARASIM,UYQASIM,2,A68_442 ) ;
A_VASSIGN2(HARASIM,FARASIM,A68_442 ) ;
MYQASIM.Biops = FARASIM;
IARASIM = MYQASIM;
A_PROC_EXIT(make_3);
*ReturnedValue = (IARASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  JARASIM_make_4(A68_448  *ReturnedValue)
{ 
A68_448  KARASIM;  /* collateral clause result */
A68_VC  NARASIM;  /* avoid structure result */
A68_458  SARASIM;  /* collateral clause result */
A68_357  VARASIM;  /* avoid structure result */
A68_432  ABRASIM;  /* collateral clause result */
A68_32  BBRASIM;  /* avoid structure result */
A68_32  CBRASIM;  /* OPERATORS - istruct -> vector */
A68_32  DBRASIM;  /* OPERATORS - assign op */
A68_428  EBRASIM;  /* OPERATORS - nil -> mode */
A68_426  OBRASIM;  /* procedure value */
A68_357  RBRASIM;  /* avoid structure result */
A68_432  WBRASIM;  /* collateral clause result */
A68_32  XBRASIM;  /* avoid structure result */
A68_32  YBRASIM;  /* OPERATORS - istruct -> vector */
A68_32  ZBRASIM;  /* OPERATORS - assign op */
A68_428  ACRASIM;  /* OPERATORS - nil -> mode */
A68_426  GCRASIM;  /* procedure value */
A68_449  HCRASIM;  /* avoid structure result */
A68_449  ICRASIM;  /* OPERATORS - istruct -> vector */
A68_449  JCRASIM;  /* OPERATORS - assign op */
A68_448  KCRASIM;  /* clause result */
A_PROC_ENTRY(make_4);
RSCAOST_makeid( MARASIM, &NARASIM );
KARASIM.Overloaded_biop_name = NARASIM;
 /* line 720: */
 /* line 721: */
YLFASIM_label( UARASIM, &VARASIM );
SARASIM.data[0].Biop_name = VARASIM;
ABRASIM.data[0] = AIQASIM_bs;
ABRASIM.data[1] = AIQASIM_bs;
XARASIM_generator( A68_FALSE, &BBRASIM );
DBRASIM = A_HISVEC(CBRASIM,ABRASIM,2,A68_INT ) ;
A_VASSIGN2(DBRASIM,BBRASIM,A68_INT ) ;
SARASIM.data[0].Inputs = BBRASIM;
 /* line 722: */
SARASIM.data[0].No_of_macparams = 0;
SARASIM.data[0].Output.Output_type_sort = AIQASIM_bs;
SARASIM.data[0].Output.Limit_save = A68_FALSE;
SARASIM.data[0].Output.Struct_components = A_R1VAC(EBRASIM);
 /* line 723: */
SARASIM.data[0].Pointer = A68_FALSE;
 /* line 724: */
OBRASIM.fn.fn_global = IBRASIM_anonymous;
OBRASIM.nonlocals = A68_NIL;
SARASIM.data[0].Limit_check = OBRASIM;
YLFASIM_label( QBRASIM, &RBRASIM );
SARASIM.data[1].Biop_name = RBRASIM;
WBRASIM.data[0] = BIQASIM_tv;
WBRASIM.data[1] = BIQASIM_tv;
TBRASIM_generator( A68_FALSE, &XBRASIM );
ZBRASIM = A_HISVEC(YBRASIM,WBRASIM,2,A68_INT ) ;
A_VASSIGN2(ZBRASIM,XBRASIM,A68_INT ) ;
SARASIM.data[1].Inputs = XBRASIM;
 /* line 725: */
SARASIM.data[1].No_of_macparams = 0;
SARASIM.data[1].Output.Output_type_sort = BIQASIM_tv;
SARASIM.data[1].Output.Limit_save = A68_FALSE;
SARASIM.data[1].Output.Struct_components = A_R1VAC(ACRASIM);
SARASIM.data[1].Pointer = A68_FALSE;
 /* line 726: */
 /* line 727: */
GCRASIM.fn.fn_global = ECRASIM_anonymous;
GCRASIM.nonlocals = A68_NIL;
SARASIM.data[1].Limit_check = GCRASIM;
PARASIM_generator( A68_FALSE, &HCRASIM );
JCRASIM = A_HISVEC(ICRASIM,SARASIM,2,A68_442 ) ;
A_VASSIGN2(JCRASIM,HCRASIM,A68_442 ) ;
KARASIM.Biops = HCRASIM;
KCRASIM = KARASIM;
A_PROC_EXIT(make_4);
*ReturnedValue = (KCRASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  LCRASIM_make_5(A68_448  *ReturnedValue)
{ 
A68_448  MCRASIM;  /* collateral clause result */
A68_VC  PCRASIM;  /* avoid structure result */
A68_442  UCRASIM;  /* collateral clause result */
A68_357  XCRASIM;  /* avoid structure result */
A68_32  CDRASIM;  /* avoid structure result */
A68_32  DDRASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_32  EDRASIM;  /* OPERATORS - assign op */
A68_428  FDRASIM;  /* OPERATORS - nil -> mode */
A68_426  ODRASIM;  /* procedure value */
A68_449  PDRASIM;  /* avoid structure result */
A68_449  QDRASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_449  RDRASIM;  /* OPERATORS - assign op */
A68_448  SDRASIM;  /* clause result */
A_PROC_ENTRY(make_5);
RSCAOST_makeid( OCRASIM, &PCRASIM );
MCRASIM.Overloaded_biop_name = PCRASIM;
 /* line 732: */
{ 
YLFASIM_label( WCRASIM, &XCRASIM );
UCRASIM.Biop_name = XCRASIM;
ZCRASIM_generator( A68_FALSE, &CDRASIM );
EDRASIM = A_HVEC(DDRASIM,AIQASIM_bs,A68_INT ) ;
A_VASSIGN2(EDRASIM,CDRASIM,A68_INT ) ;
UCRASIM.Inputs = CDRASIM;
 /* line 733: */
UCRASIM.No_of_macparams = 1;
UCRASIM.Output.Output_type_sort = AIQASIM_bs;
UCRASIM.Output.Limit_save = A68_FALSE;
 /* line 734: */
UCRASIM.Output.Struct_components = A_R1VAC(FDRASIM);
UCRASIM.Pointer = A68_FALSE;
 /* line 735: */
 /* line 736: */
ODRASIM.fn.fn_global = JDRASIM_anonymous;
ODRASIM.nonlocals = A68_NIL;
UCRASIM.Limit_check = ODRASIM;
} 
RCRASIM_generator( A68_FALSE, &PDRASIM );
RDRASIM = A_HVEC(QDRASIM,UCRASIM,A68_442 ) ;
A_VASSIGN2(RDRASIM,PDRASIM,A68_442 ) ;
MCRASIM.Biops = PDRASIM;
SDRASIM = MCRASIM;
A_PROC_EXIT(make_5);
*ReturnedValue = (SDRASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  TDRASIM_make_6(A68_448  *ReturnedValue)
{ 
A68_448  UDRASIM;  /* collateral clause result */
A68_VC  XDRASIM;  /* avoid structure result */
A68_442  CERASIM;  /* collateral clause result */
A68_357  FERASIM;  /* avoid structure result */
A68_32  KERASIM;  /* avoid structure result */
A68_32  LERASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_32  MERASIM;  /* OPERATORS - assign op */
A68_428  NERASIM;  /* OPERATORS - nil -> mode */
A68_426  WERASIM;  /* procedure value */
A68_449  XERASIM;  /* avoid structure result */
A68_449  YERASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_449  ZERASIM;  /* OPERATORS - assign op */
A68_448  AFRASIM;  /* clause result */
A_PROC_ENTRY(make_6);
RSCAOST_makeid( WDRASIM, &XDRASIM );
UDRASIM.Overloaded_biop_name = XDRASIM;
 /* line 741: */
{ 
YLFASIM_label( EERASIM, &FERASIM );
CERASIM.Biop_name = FERASIM;
HERASIM_generator( A68_FALSE, &KERASIM );
MERASIM = A_HVEC(LERASIM,AIQASIM_bs,A68_INT ) ;
A_VASSIGN2(MERASIM,KERASIM,A68_INT ) ;
CERASIM.Inputs = KERASIM;
 /* line 742: */
CERASIM.No_of_macparams = 1;
CERASIM.Output.Output_type_sort = AIQASIM_bs;
CERASIM.Output.Limit_save = A68_FALSE;
 /* line 743: */
CERASIM.Output.Struct_components = A_R1VAC(NERASIM);
CERASIM.Pointer = A68_FALSE;
 /* line 744: */
 /* line 745: */
WERASIM.fn.fn_global = RERASIM_anonymous;
WERASIM.nonlocals = A68_NIL;
CERASIM.Limit_check = WERASIM;
} 
ZDRASIM_generator( A68_FALSE, &XERASIM );
ZERASIM = A_HVEC(YERASIM,CERASIM,A68_442 ) ;
A_VASSIGN2(ZERASIM,XERASIM,A68_442 ) ;
UDRASIM.Biops = XERASIM;
AFRASIM = UDRASIM;
A_PROC_EXIT(make_6);
*ReturnedValue = (AFRASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  BFRASIM_make_7(A68_448  *ReturnedValue)
{ 
A68_448  CFRASIM;  /* collateral clause result */
A68_VC  FFRASIM;  /* avoid structure result */
A68_442  KFRASIM;  /* collateral clause result */
A68_357  NFRASIM;  /* avoid structure result */
A68_32  SFRASIM;  /* avoid structure result */
A68_32  TFRASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_32  UFRASIM;  /* OPERATORS - assign op */
A68_428  VFRASIM;  /* OPERATORS - nil -> mode */
A68_426  EGRASIM;  /* procedure value */
A68_449  FGRASIM;  /* avoid structure result */
A68_449  GGRASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_449  HGRASIM;  /* OPERATORS - assign op */
A68_448  IGRASIM;  /* clause result */
A_PROC_ENTRY(make_7);
RSCAOST_makeid( EFRASIM, &FFRASIM );
CFRASIM.Overloaded_biop_name = FFRASIM;
 /* line 750: */
{ 
YLFASIM_label( MFRASIM, &NFRASIM );
KFRASIM.Biop_name = NFRASIM;
PFRASIM_generator( A68_FALSE, &SFRASIM );
UFRASIM = A_HVEC(TFRASIM,AIQASIM_bs,A68_INT ) ;
A_VASSIGN2(UFRASIM,SFRASIM,A68_INT ) ;
KFRASIM.Inputs = SFRASIM;
 /* line 751: */
KFRASIM.No_of_macparams = 1;
KFRASIM.Output.Output_type_sort = AIQASIM_bs;
KFRASIM.Output.Limit_save = A68_FALSE;
 /* line 752: */
KFRASIM.Output.Struct_components = A_R1VAC(VFRASIM);
KFRASIM.Pointer = A68_FALSE;
 /* line 753: */
 /* line 754: */
EGRASIM.fn.fn_global = ZFRASIM_anonymous;
EGRASIM.nonlocals = A68_NIL;
KFRASIM.Limit_check = EGRASIM;
} 
HFRASIM_generator( A68_FALSE, &FGRASIM );
HGRASIM = A_HVEC(GGRASIM,KFRASIM,A68_442 ) ;
A_VASSIGN2(HGRASIM,FGRASIM,A68_442 ) ;
CFRASIM.Biops = FGRASIM;
IGRASIM = CFRASIM;
A_PROC_EXIT(make_7);
*ReturnedValue = (IGRASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  JGRASIM_make_8(A68_448  *ReturnedValue)
{ 
A68_448  KGRASIM;  /* collateral clause result */
A68_VC  NGRASIM;  /* avoid structure result */
A68_462  SGRASIM;  /* collateral clause result */
A68_357  VGRASIM;  /* avoid structure result */
A68_432  AHRASIM;  /* collateral clause result */
A68_32  BHRASIM;  /* avoid structure result */
A68_32  CHRASIM;  /* OPERATORS - istruct -> vector */
A68_32  DHRASIM;  /* OPERATORS - assign op */
A68_428  EHRASIM;  /* OPERATORS - nil -> mode */
A68_426  KHRASIM;  /* procedure value */
A68_357  NHRASIM;  /* avoid structure result */
A68_432  SHRASIM;  /* collateral clause result */
A68_32  THRASIM;  /* avoid structure result */
A68_32  UHRASIM;  /* OPERATORS - istruct -> vector */
A68_32  VHRASIM;  /* OPERATORS - assign op */
A68_428  WHRASIM;  /* OPERATORS - nil -> mode */
A68_426  CIRASIM;  /* procedure value */
A68_357  FIRASIM;  /* avoid structure result */
A68_432  KIRASIM;  /* collateral clause result */
A68_32  LIRASIM;  /* avoid structure result */
A68_32  MIRASIM;  /* OPERATORS - istruct -> vector */
A68_32  NIRASIM;  /* OPERATORS - assign op */
A68_428  OIRASIM;  /* OPERATORS - nil -> mode */
A68_426  UIRASIM;  /* procedure value */
A68_449  VIRASIM;  /* avoid structure result */
A68_449  WIRASIM;  /* OPERATORS - istruct -> vector */
A68_449  XIRASIM;  /* OPERATORS - assign op */
A68_448  YIRASIM;  /* clause result */
A_PROC_ENTRY(make_8);
RSCAOST_makeid( MGRASIM, &NGRASIM );
KGRASIM.Overloaded_biop_name = NGRASIM;
 /* line 758: */
 /* line 759: */
YLFASIM_label( UGRASIM, &VGRASIM );
SGRASIM.data[0].Biop_name = VGRASIM;
AHRASIM.data[0] = CIQASIM_ch;
AHRASIM.data[1] = CIQASIM_ch;
XGRASIM_generator( A68_FALSE, &BHRASIM );
DHRASIM = A_HISVEC(CHRASIM,AHRASIM,2,A68_INT ) ;
A_VASSIGN2(DHRASIM,BHRASIM,A68_INT ) ;
SGRASIM.data[0].Inputs = BHRASIM;
 /* line 760: */
SGRASIM.data[0].No_of_macparams = 0;
SGRASIM.data[0].Output.Output_type_sort = BIQASIM_tv;
SGRASIM.data[0].Output.Limit_save = A68_FALSE;
SGRASIM.data[0].Output.Struct_components = A_R1VAC(EHRASIM);
SGRASIM.data[0].Pointer = A68_FALSE;
 /* line 761: */
KHRASIM.fn.fn_global = IHRASIM_anonymous;
KHRASIM.nonlocals = A68_NIL;
SGRASIM.data[0].Limit_check = KHRASIM;
YLFASIM_label( MHRASIM, &NHRASIM );
SGRASIM.data[1].Biop_name = NHRASIM;
SHRASIM.data[0] = EIQASIM_ei;
SHRASIM.data[1] = EIQASIM_ei;
PHRASIM_generator( A68_FALSE, &THRASIM );
VHRASIM = A_HISVEC(UHRASIM,SHRASIM,2,A68_INT ) ;
A_VASSIGN2(VHRASIM,THRASIM,A68_INT ) ;
SGRASIM.data[1].Inputs = THRASIM;
 /* line 762: */
SGRASIM.data[1].No_of_macparams = 0;
SGRASIM.data[1].Output.Output_type_sort = BIQASIM_tv;
SGRASIM.data[1].Output.Limit_save = A68_FALSE;
SGRASIM.data[1].Output.Struct_components = A_R1VAC(WHRASIM);
SGRASIM.data[1].Pointer = A68_FALSE;
 /* line 763: */
CIRASIM.fn.fn_global = AIRASIM_anonymous;
CIRASIM.nonlocals = A68_NIL;
SGRASIM.data[1].Limit_check = CIRASIM;
YLFASIM_label( EIRASIM, &FIRASIM );
SGRASIM.data[2].Biop_name = FIRASIM;
KIRASIM.data[0] = DIQASIM_ee;
KIRASIM.data[1] = DIQASIM_ee;
HIRASIM_generator( A68_FALSE, &LIRASIM );
NIRASIM = A_HISVEC(MIRASIM,KIRASIM,2,A68_INT ) ;
A_VASSIGN2(NIRASIM,LIRASIM,A68_INT ) ;
SGRASIM.data[2].Inputs = LIRASIM;
 /* line 764: */
SGRASIM.data[2].No_of_macparams = 0;
SGRASIM.data[2].Output.Output_type_sort = BIQASIM_tv;
SGRASIM.data[2].Output.Limit_save = A68_FALSE;
SGRASIM.data[2].Output.Struct_components = A_R1VAC(OIRASIM);
SGRASIM.data[2].Pointer = A68_FALSE;
 /* line 765: */
 /* line 766: */
UIRASIM.fn.fn_global = SIRASIM_anonymous;
UIRASIM.nonlocals = A68_NIL;
SGRASIM.data[2].Limit_check = UIRASIM;
PGRASIM_generator( A68_FALSE, &VIRASIM );
XIRASIM = A_HISVEC(WIRASIM,SGRASIM,3,A68_442 ) ;
A_VASSIGN2(XIRASIM,VIRASIM,A68_442 ) ;
KGRASIM.Biops = VIRASIM;
YIRASIM = KGRASIM;
A_PROC_EXIT(make_8);
*ReturnedValue = (YIRASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  ZIRASIM_make_9(A68_448  *ReturnedValue)
{ 
A68_448  AJRASIM;  /* collateral clause result */
A68_VC  DJRASIM;  /* avoid structure result */
A68_462  IJRASIM;  /* collateral clause result */
A68_357  LJRASIM;  /* avoid structure result */
A68_432  QJRASIM;  /* collateral clause result */
A68_32  RJRASIM;  /* avoid structure result */
A68_32  SJRASIM;  /* OPERATORS - istruct -> vector */
A68_32  TJRASIM;  /* OPERATORS - assign op */
A68_428  UJRASIM;  /* OPERATORS - nil -> mode */
A68_426  AKRASIM;  /* procedure value */
A68_357  DKRASIM;  /* avoid structure result */
A68_432  IKRASIM;  /* collateral clause result */
A68_32  JKRASIM;  /* avoid structure result */
A68_32  KKRASIM;  /* OPERATORS - istruct -> vector */
A68_32  LKRASIM;  /* OPERATORS - assign op */
A68_428  MKRASIM;  /* OPERATORS - nil -> mode */
A68_426  SKRASIM;  /* procedure value */
A68_357  VKRASIM;  /* avoid structure result */
A68_432  ALRASIM;  /* collateral clause result */
A68_32  BLRASIM;  /* avoid structure result */
A68_32  CLRASIM;  /* OPERATORS - istruct -> vector */
A68_32  DLRASIM;  /* OPERATORS - assign op */
A68_428  ELRASIM;  /* OPERATORS - nil -> mode */
A68_426  KLRASIM;  /* procedure value */
A68_449  LLRASIM;  /* avoid structure result */
A68_449  MLRASIM;  /* OPERATORS - istruct -> vector */
A68_449  NLRASIM;  /* OPERATORS - assign op */
A68_448  OLRASIM;  /* clause result */
A_PROC_ENTRY(make_9);
RSCAOST_makeid( CJRASIM, &DJRASIM );
AJRASIM.Overloaded_biop_name = DJRASIM;
 /* line 770: */
 /* line 771: */
YLFASIM_label( KJRASIM, &LJRASIM );
IJRASIM.data[0].Biop_name = LJRASIM;
QJRASIM.data[0] = CIQASIM_ch;
QJRASIM.data[1] = CIQASIM_ch;
NJRASIM_generator( A68_FALSE, &RJRASIM );
TJRASIM = A_HISVEC(SJRASIM,QJRASIM,2,A68_INT ) ;
A_VASSIGN2(TJRASIM,RJRASIM,A68_INT ) ;
IJRASIM.data[0].Inputs = RJRASIM;
 /* line 772: */
IJRASIM.data[0].No_of_macparams = 0;
IJRASIM.data[0].Output.Output_type_sort = BIQASIM_tv;
IJRASIM.data[0].Output.Limit_save = A68_FALSE;
IJRASIM.data[0].Output.Struct_components = A_R1VAC(UJRASIM);
IJRASIM.data[0].Pointer = A68_FALSE;
 /* line 773: */
AKRASIM.fn.fn_global = YJRASIM_anonymous;
AKRASIM.nonlocals = A68_NIL;
IJRASIM.data[0].Limit_check = AKRASIM;
YLFASIM_label( CKRASIM, &DKRASIM );
IJRASIM.data[1].Biop_name = DKRASIM;
IKRASIM.data[0] = EIQASIM_ei;
IKRASIM.data[1] = EIQASIM_ei;
FKRASIM_generator( A68_FALSE, &JKRASIM );
LKRASIM = A_HISVEC(KKRASIM,IKRASIM,2,A68_INT ) ;
A_VASSIGN2(LKRASIM,JKRASIM,A68_INT ) ;
IJRASIM.data[1].Inputs = JKRASIM;
 /* line 774: */
IJRASIM.data[1].No_of_macparams = 0;
IJRASIM.data[1].Output.Output_type_sort = BIQASIM_tv;
IJRASIM.data[1].Output.Limit_save = A68_FALSE;
IJRASIM.data[1].Output.Struct_components = A_R1VAC(MKRASIM);
IJRASIM.data[1].Pointer = A68_FALSE;
 /* line 775: */
SKRASIM.fn.fn_global = QKRASIM_anonymous;
SKRASIM.nonlocals = A68_NIL;
IJRASIM.data[1].Limit_check = SKRASIM;
YLFASIM_label( UKRASIM, &VKRASIM );
IJRASIM.data[2].Biop_name = VKRASIM;
ALRASIM.data[0] = DIQASIM_ee;
ALRASIM.data[1] = DIQASIM_ee;
XKRASIM_generator( A68_FALSE, &BLRASIM );
DLRASIM = A_HISVEC(CLRASIM,ALRASIM,2,A68_INT ) ;
A_VASSIGN2(DLRASIM,BLRASIM,A68_INT ) ;
IJRASIM.data[2].Inputs = BLRASIM;
 /* line 776: */
IJRASIM.data[2].No_of_macparams = 0;
IJRASIM.data[2].Output.Output_type_sort = BIQASIM_tv;
IJRASIM.data[2].Output.Limit_save = A68_FALSE;
IJRASIM.data[2].Output.Struct_components = A_R1VAC(ELRASIM);
IJRASIM.data[2].Pointer = A68_FALSE;
 /* line 777: */
 /* line 778: */
KLRASIM.fn.fn_global = ILRASIM_anonymous;
KLRASIM.nonlocals = A68_NIL;
IJRASIM.data[2].Limit_check = KLRASIM;
FJRASIM_generator( A68_FALSE, &LLRASIM );
NLRASIM = A_HISVEC(MLRASIM,IJRASIM,3,A68_442 ) ;
A_VASSIGN2(NLRASIM,LLRASIM,A68_442 ) ;
AJRASIM.Biops = LLRASIM;
OLRASIM = AJRASIM;
A_PROC_EXIT(make_9);
*ReturnedValue = (OLRASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  PLRASIM_make_10(A68_448  *ReturnedValue)
{ 
A68_448  QLRASIM;  /* collateral clause result */
A68_VC  TLRASIM;  /* avoid structure result */
A68_462  YLRASIM;  /* collateral clause result */
A68_357  BMRASIM;  /* avoid structure result */
A68_432  GMRASIM;  /* collateral clause result */
A68_32  HMRASIM;  /* avoid structure result */
A68_32  IMRASIM;  /* OPERATORS - istruct -> vector */
A68_32  JMRASIM;  /* OPERATORS - assign op */
A68_428  KMRASIM;  /* OPERATORS - nil -> mode */
A68_426  QMRASIM;  /* procedure value */
A68_357  TMRASIM;  /* avoid structure result */
A68_432  YMRASIM;  /* collateral clause result */
A68_32  ZMRASIM;  /* avoid structure result */
A68_32  ANRASIM;  /* OPERATORS - istruct -> vector */
A68_32  BNRASIM;  /* OPERATORS - assign op */
A68_428  CNRASIM;  /* OPERATORS - nil -> mode */
A68_426  INRASIM;  /* procedure value */
A68_357  LNRASIM;  /* avoid structure result */
A68_432  QNRASIM;  /* collateral clause result */
A68_32  RNRASIM;  /* avoid structure result */
A68_32  SNRASIM;  /* OPERATORS - istruct -> vector */
A68_32  TNRASIM;  /* OPERATORS - assign op */
A68_428  UNRASIM;  /* OPERATORS - nil -> mode */
A68_426  AORASIM;  /* procedure value */
A68_449  BORASIM;  /* avoid structure result */
A68_449  CORASIM;  /* OPERATORS - istruct -> vector */
A68_449  DORASIM;  /* OPERATORS - assign op */
A68_448  EORASIM;  /* clause result */
A_PROC_ENTRY(make_10);
RSCAOST_makeid( SLRASIM, &TLRASIM );
QLRASIM.Overloaded_biop_name = TLRASIM;
 /* line 782: */
 /* line 783: */
YLFASIM_label( AMRASIM, &BMRASIM );
YLRASIM.data[0].Biop_name = BMRASIM;
GMRASIM.data[0] = CIQASIM_ch;
GMRASIM.data[1] = CIQASIM_ch;
DMRASIM_generator( A68_FALSE, &HMRASIM );
JMRASIM = A_HISVEC(IMRASIM,GMRASIM,2,A68_INT ) ;
A_VASSIGN2(JMRASIM,HMRASIM,A68_INT ) ;
YLRASIM.data[0].Inputs = HMRASIM;
 /* line 784: */
YLRASIM.data[0].No_of_macparams = 0;
YLRASIM.data[0].Output.Output_type_sort = BIQASIM_tv;
YLRASIM.data[0].Output.Limit_save = A68_FALSE;
YLRASIM.data[0].Output.Struct_components = A_R1VAC(KMRASIM);
YLRASIM.data[0].Pointer = A68_FALSE;
 /* line 785: */
QMRASIM.fn.fn_global = OMRASIM_anonymous;
QMRASIM.nonlocals = A68_NIL;
YLRASIM.data[0].Limit_check = QMRASIM;
YLFASIM_label( SMRASIM, &TMRASIM );
YLRASIM.data[1].Biop_name = TMRASIM;
YMRASIM.data[0] = EIQASIM_ei;
YMRASIM.data[1] = EIQASIM_ei;
VMRASIM_generator( A68_FALSE, &ZMRASIM );
BNRASIM = A_HISVEC(ANRASIM,YMRASIM,2,A68_INT ) ;
A_VASSIGN2(BNRASIM,ZMRASIM,A68_INT ) ;
YLRASIM.data[1].Inputs = ZMRASIM;
 /* line 786: */
YLRASIM.data[1].No_of_macparams = 0;
YLRASIM.data[1].Output.Output_type_sort = BIQASIM_tv;
YLRASIM.data[1].Output.Limit_save = A68_FALSE;
YLRASIM.data[1].Output.Struct_components = A_R1VAC(CNRASIM);
YLRASIM.data[1].Pointer = A68_FALSE;
 /* line 787: */
INRASIM.fn.fn_global = GNRASIM_anonymous;
INRASIM.nonlocals = A68_NIL;
YLRASIM.data[1].Limit_check = INRASIM;
YLFASIM_label( KNRASIM, &LNRASIM );
YLRASIM.data[2].Biop_name = LNRASIM;
QNRASIM.data[0] = DIQASIM_ee;
QNRASIM.data[1] = DIQASIM_ee;
NNRASIM_generator( A68_FALSE, &RNRASIM );
TNRASIM = A_HISVEC(SNRASIM,QNRASIM,2,A68_INT ) ;
A_VASSIGN2(TNRASIM,RNRASIM,A68_INT ) ;
YLRASIM.data[2].Inputs = RNRASIM;
 /* line 788: */
YLRASIM.data[2].No_of_macparams = 0;
YLRASIM.data[2].Output.Output_type_sort = BIQASIM_tv;
YLRASIM.data[2].Output.Limit_save = A68_FALSE;
YLRASIM.data[2].Output.Struct_components = A_R1VAC(UNRASIM);
YLRASIM.data[2].Pointer = A68_FALSE;
 /* line 789: */
 /* line 790: */
AORASIM.fn.fn_global = YNRASIM_anonymous;
AORASIM.nonlocals = A68_NIL;
YLRASIM.data[2].Limit_check = AORASIM;
VLRASIM_generator( A68_FALSE, &BORASIM );
DORASIM = A_HISVEC(CORASIM,YLRASIM,3,A68_442 ) ;
A_VASSIGN2(DORASIM,BORASIM,A68_442 ) ;
QLRASIM.Biops = BORASIM;
EORASIM = QLRASIM;
A_PROC_EXIT(make_10);
*ReturnedValue = (EORASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  FORASIM_make_11(A68_448  *ReturnedValue)
{ 
A68_448  GORASIM;  /* collateral clause result */
A68_VC  JORASIM;  /* avoid structure result */
A68_462  OORASIM;  /* collateral clause result */
A68_357  RORASIM;  /* avoid structure result */
A68_432  WORASIM;  /* collateral clause result */
A68_32  XORASIM;  /* avoid structure result */
A68_32  YORASIM;  /* OPERATORS - istruct -> vector */
A68_32  ZORASIM;  /* OPERATORS - assign op */
A68_428  APRASIM;  /* OPERATORS - nil -> mode */
A68_426  GPRASIM;  /* procedure value */
A68_357  JPRASIM;  /* avoid structure result */
A68_432  OPRASIM;  /* collateral clause result */
A68_32  PPRASIM;  /* avoid structure result */
A68_32  QPRASIM;  /* OPERATORS - istruct -> vector */
A68_32  RPRASIM;  /* OPERATORS - assign op */
A68_428  SPRASIM;  /* OPERATORS - nil -> mode */
A68_426  YPRASIM;  /* procedure value */
A68_357  BQRASIM;  /* avoid structure result */
A68_432  GQRASIM;  /* collateral clause result */
A68_32  HQRASIM;  /* avoid structure result */
A68_32  IQRASIM;  /* OPERATORS - istruct -> vector */
A68_32  JQRASIM;  /* OPERATORS - assign op */
A68_428  KQRASIM;  /* OPERATORS - nil -> mode */
A68_426  QQRASIM;  /* procedure value */
A68_449  RQRASIM;  /* avoid structure result */
A68_449  SQRASIM;  /* OPERATORS - istruct -> vector */
A68_449  TQRASIM;  /* OPERATORS - assign op */
A68_448  UQRASIM;  /* clause result */
A_PROC_ENTRY(make_11);
RSCAOST_makeid( IORASIM, &JORASIM );
GORASIM.Overloaded_biop_name = JORASIM;
 /* line 794: */
 /* line 795: */
YLFASIM_label( QORASIM, &RORASIM );
OORASIM.data[0].Biop_name = RORASIM;
WORASIM.data[0] = CIQASIM_ch;
WORASIM.data[1] = CIQASIM_ch;
TORASIM_generator( A68_FALSE, &XORASIM );
ZORASIM = A_HISVEC(YORASIM,WORASIM,2,A68_INT ) ;
A_VASSIGN2(ZORASIM,XORASIM,A68_INT ) ;
OORASIM.data[0].Inputs = XORASIM;
 /* line 796: */
OORASIM.data[0].No_of_macparams = 0;
OORASIM.data[0].Output.Output_type_sort = BIQASIM_tv;
OORASIM.data[0].Output.Limit_save = A68_FALSE;
OORASIM.data[0].Output.Struct_components = A_R1VAC(APRASIM);
OORASIM.data[0].Pointer = A68_FALSE;
 /* line 797: */
GPRASIM.fn.fn_global = EPRASIM_anonymous;
GPRASIM.nonlocals = A68_NIL;
OORASIM.data[0].Limit_check = GPRASIM;
YLFASIM_label( IPRASIM, &JPRASIM );
OORASIM.data[1].Biop_name = JPRASIM;
OPRASIM.data[0] = EIQASIM_ei;
OPRASIM.data[1] = EIQASIM_ei;
LPRASIM_generator( A68_FALSE, &PPRASIM );
RPRASIM = A_HISVEC(QPRASIM,OPRASIM,2,A68_INT ) ;
A_VASSIGN2(RPRASIM,PPRASIM,A68_INT ) ;
OORASIM.data[1].Inputs = PPRASIM;
 /* line 798: */
OORASIM.data[1].No_of_macparams = 0;
OORASIM.data[1].Output.Output_type_sort = BIQASIM_tv;
OORASIM.data[1].Output.Limit_save = A68_FALSE;
OORASIM.data[1].Output.Struct_components = A_R1VAC(SPRASIM);
OORASIM.data[1].Pointer = A68_FALSE;
 /* line 799: */
YPRASIM.fn.fn_global = WPRASIM_anonymous;
YPRASIM.nonlocals = A68_NIL;
OORASIM.data[1].Limit_check = YPRASIM;
YLFASIM_label( AQRASIM, &BQRASIM );
OORASIM.data[2].Biop_name = BQRASIM;
GQRASIM.data[0] = DIQASIM_ee;
GQRASIM.data[1] = DIQASIM_ee;
DQRASIM_generator( A68_FALSE, &HQRASIM );
JQRASIM = A_HISVEC(IQRASIM,GQRASIM,2,A68_INT ) ;
A_VASSIGN2(JQRASIM,HQRASIM,A68_INT ) ;
OORASIM.data[2].Inputs = HQRASIM;
 /* line 800: */
OORASIM.data[2].No_of_macparams = 0;
OORASIM.data[2].Output.Output_type_sort = BIQASIM_tv;
OORASIM.data[2].Output.Limit_save = A68_FALSE;
OORASIM.data[2].Output.Struct_components = A_R1VAC(KQRASIM);
OORASIM.data[2].Pointer = A68_FALSE;
 /* line 801: */
 /* line 802: */
QQRASIM.fn.fn_global = OQRASIM_anonymous;
QQRASIM.nonlocals = A68_NIL;
OORASIM.data[2].Limit_check = QQRASIM;
LORASIM_generator( A68_FALSE, &RQRASIM );
TQRASIM = A_HISVEC(SQRASIM,OORASIM,3,A68_442 ) ;
A_VASSIGN2(TQRASIM,RQRASIM,A68_442 ) ;
GORASIM.Biops = RQRASIM;
UQRASIM = GORASIM;
A_PROC_EXIT(make_11);
*ReturnedValue = (UQRASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  VQRASIM_make_12(A68_448  *ReturnedValue)
{ 
A68_448  WQRASIM;  /* collateral clause result */
A68_VC  ZQRASIM;  /* avoid structure result */
A68_462  ERRASIM;  /* collateral clause result */
A68_357  HRRASIM;  /* avoid structure result */
A68_432  MRRASIM;  /* collateral clause result */
A68_32  NRRASIM;  /* avoid structure result */
A68_32  ORRASIM;  /* OPERATORS - istruct -> vector */
A68_32  PRRASIM;  /* OPERATORS - assign op */
A68_428  QRRASIM;  /* OPERATORS - nil -> mode */
A68_426  WRRASIM;  /* procedure value */
A68_357  ZRRASIM;  /* avoid structure result */
A68_432  ESRASIM;  /* collateral clause result */
A68_32  FSRASIM;  /* avoid structure result */
A68_32  GSRASIM;  /* OPERATORS - istruct -> vector */
A68_32  HSRASIM;  /* OPERATORS - assign op */
A68_428  ISRASIM;  /* OPERATORS - nil -> mode */
A68_426  OSRASIM;  /* procedure value */
A68_357  RSRASIM;  /* avoid structure result */
A68_432  WSRASIM;  /* collateral clause result */
A68_32  XSRASIM;  /* avoid structure result */
A68_32  YSRASIM;  /* OPERATORS - istruct -> vector */
A68_32  ZSRASIM;  /* OPERATORS - assign op */
A68_428  ATRASIM;  /* OPERATORS - nil -> mode */
A68_426  GTRASIM;  /* procedure value */
A68_449  HTRASIM;  /* avoid structure result */
A68_449  ITRASIM;  /* OPERATORS - istruct -> vector */
A68_449  JTRASIM;  /* OPERATORS - assign op */
A68_448  KTRASIM;  /* clause result */
A_PROC_ENTRY(make_12);
RSCAOST_makeid( YQRASIM, &ZQRASIM );
WQRASIM.Overloaded_biop_name = ZQRASIM;
 /* line 806: */
 /* line 807: */
YLFASIM_label( GRRASIM, &HRRASIM );
ERRASIM.data[0].Biop_name = HRRASIM;
MRRASIM.data[0] = CIQASIM_ch;
MRRASIM.data[1] = CIQASIM_ch;
JRRASIM_generator( A68_FALSE, &NRRASIM );
PRRASIM = A_HISVEC(ORRASIM,MRRASIM,2,A68_INT ) ;
A_VASSIGN2(PRRASIM,NRRASIM,A68_INT ) ;
ERRASIM.data[0].Inputs = NRRASIM;
 /* line 808: */
ERRASIM.data[0].No_of_macparams = 0;
ERRASIM.data[0].Output.Output_type_sort = BIQASIM_tv;
ERRASIM.data[0].Output.Limit_save = A68_FALSE;
ERRASIM.data[0].Output.Struct_components = A_R1VAC(QRRASIM);
ERRASIM.data[0].Pointer = A68_FALSE;
 /* line 809: */
WRRASIM.fn.fn_global = URRASIM_anonymous;
WRRASIM.nonlocals = A68_NIL;
ERRASIM.data[0].Limit_check = WRRASIM;
YLFASIM_label( YRRASIM, &ZRRASIM );
ERRASIM.data[1].Biop_name = ZRRASIM;
ESRASIM.data[0] = EIQASIM_ei;
ESRASIM.data[1] = EIQASIM_ei;
BSRASIM_generator( A68_FALSE, &FSRASIM );
HSRASIM = A_HISVEC(GSRASIM,ESRASIM,2,A68_INT ) ;
A_VASSIGN2(HSRASIM,FSRASIM,A68_INT ) ;
ERRASIM.data[1].Inputs = FSRASIM;
 /* line 810: */
ERRASIM.data[1].No_of_macparams = 0;
ERRASIM.data[1].Output.Output_type_sort = BIQASIM_tv;
ERRASIM.data[1].Output.Limit_save = A68_FALSE;
ERRASIM.data[1].Output.Struct_components = A_R1VAC(ISRASIM);
ERRASIM.data[1].Pointer = A68_FALSE;
 /* line 811: */
OSRASIM.fn.fn_global = MSRASIM_anonymous;
OSRASIM.nonlocals = A68_NIL;
ERRASIM.data[1].Limit_check = OSRASIM;
YLFASIM_label( QSRASIM, &RSRASIM );
ERRASIM.data[2].Biop_name = RSRASIM;
WSRASIM.data[0] = DIQASIM_ee;
WSRASIM.data[1] = DIQASIM_ee;
TSRASIM_generator( A68_FALSE, &XSRASIM );
ZSRASIM = A_HISVEC(YSRASIM,WSRASIM,2,A68_INT ) ;
A_VASSIGN2(ZSRASIM,XSRASIM,A68_INT ) ;
ERRASIM.data[2].Inputs = XSRASIM;
 /* line 812: */
ERRASIM.data[2].No_of_macparams = 0;
ERRASIM.data[2].Output.Output_type_sort = BIQASIM_tv;
ERRASIM.data[2].Output.Limit_save = A68_FALSE;
ERRASIM.data[2].Output.Struct_components = A_R1VAC(ATRASIM);
ERRASIM.data[2].Pointer = A68_FALSE;
 /* line 813: */
 /* line 814: */
GTRASIM.fn.fn_global = ETRASIM_anonymous;
GTRASIM.nonlocals = A68_NIL;
ERRASIM.data[2].Limit_check = GTRASIM;
BRRASIM_generator( A68_FALSE, &HTRASIM );
JTRASIM = A_HISVEC(ITRASIM,ERRASIM,3,A68_442 ) ;
A_VASSIGN2(JTRASIM,HTRASIM,A68_442 ) ;
WQRASIM.Biops = HTRASIM;
KTRASIM = WQRASIM;
A_PROC_EXIT(make_12);
*ReturnedValue = (KTRASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  LTRASIM_make_13(A68_448  *ReturnedValue)
{ 
A68_448  MTRASIM;  /* collateral clause result */
A68_VC  PTRASIM;  /* avoid structure result */
A68_458  UTRASIM;  /* collateral clause result */
A68_357  XTRASIM;  /* avoid structure result */
A68_32  CURASIM;  /* avoid structure result */
A68_32  DURASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_32  EURASIM;  /* OPERATORS - assign op */
A68_467  JURASIM;  /* collateral clause result */
A68_428  KURASIM;  /* OPERATORS - nil -> mode */
A68_428  LURASIM;  /* OPERATORS - nil -> mode */
A68_465  MURASIM;  /* avoid structure result */
A68_465  NURASIM;  /* OPERATORS - istruct -> vector */
A68_465  OURASIM;  /* OPERATORS - assign op */
A68_428  PURASIM;  /* OPERATORS - vector -> row */
A68_426  VURASIM;  /* procedure value */
A68_357  YURASIM;  /* avoid structure result */
A68_32  DVRASIM;  /* avoid structure result */
A68_32  EVRASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_32  FVRASIM;  /* OPERATORS - assign op */
A68_467  KVRASIM;  /* collateral clause result */
A68_428  LVRASIM;  /* OPERATORS - nil -> mode */
A68_428  MVRASIM;  /* OPERATORS - nil -> mode */
A68_465  NVRASIM;  /* avoid structure result */
A68_465  OVRASIM;  /* OPERATORS - istruct -> vector */
A68_465  PVRASIM;  /* OPERATORS - assign op */
A68_428  QVRASIM;  /* OPERATORS - vector -> row */
A68_426  WVRASIM;  /* procedure value */
A68_449  XVRASIM;  /* avoid structure result */
A68_449  YVRASIM;  /* OPERATORS - istruct -> vector */
A68_449  ZVRASIM;  /* OPERATORS - assign op */
A68_448  AWRASIM;  /* clause result */
A_PROC_ENTRY(make_13);
RSCAOST_makeid( OTRASIM, &PTRASIM );
MTRASIM.Overloaded_biop_name = PTRASIM;
 /* line 818: */
 /* line 819: */
YLFASIM_label( WTRASIM, &XTRASIM );
UTRASIM.data[0].Biop_name = XTRASIM;
ZTRASIM_generator( A68_FALSE, &CURASIM );
EURASIM = A_HVEC(DURASIM,AIQASIM_bs,A68_INT ) ;
A_VASSIGN2(EURASIM,CURASIM,A68_INT ) ;
UTRASIM.data[0].Inputs = CURASIM;
 /* line 820: */
UTRASIM.data[0].No_of_macparams = 0;
UTRASIM.data[0].Output.Output_type_sort = IIQASIM_struct;
UTRASIM.data[0].Output.Limit_save = A68_FALSE;
 /* line 821: */
JURASIM.data[0].Output_type_sort = BIQASIM_tv;
JURASIM.data[0].Limit_save = A68_FALSE;
JURASIM.data[0].Struct_components = A_R1VAC(KURASIM);
JURASIM.data[1].Output_type_sort = EIQASIM_ei;
JURASIM.data[1].Limit_save = A68_TRUE;
 /* line 822: */
JURASIM.data[1].Struct_components = A_R1VAC(LURASIM);
 /* line 823: */
GURASIM_generator( A68_FALSE, &MURASIM );
OURASIM = A_HISVEC(NURASIM,JURASIM,2,A68_427 ) ;
A_VASSIGN2(OURASIM,MURASIM,A68_427 ) ;
UTRASIM.data[0].Output.Struct_components = A_VECARR(MURASIM,PURASIM);
UTRASIM.data[0].Pointer = A68_TRUE;
 /* line 825: */
VURASIM.fn.fn_global = TURASIM_anonymous;
VURASIM.nonlocals = A68_NIL;
UTRASIM.data[0].Limit_check = VURASIM;
YLFASIM_label( XURASIM, &YURASIM );
UTRASIM.data[1].Biop_name = YURASIM;
AVRASIM_generator( A68_FALSE, &DVRASIM );
FVRASIM = A_HVEC(EVRASIM,EIQASIM_ei,A68_INT ) ;
A_VASSIGN2(FVRASIM,DVRASIM,A68_INT ) ;
UTRASIM.data[1].Inputs = DVRASIM;
 /* line 826: */
UTRASIM.data[1].No_of_macparams = 0;
UTRASIM.data[1].Output.Output_type_sort = IIQASIM_struct;
UTRASIM.data[1].Output.Limit_save = A68_FALSE;
 /* line 827: */
KVRASIM.data[0].Output_type_sort = BIQASIM_tv;
KVRASIM.data[0].Limit_save = A68_FALSE;
KVRASIM.data[0].Struct_components = A_R1VAC(LVRASIM);
KVRASIM.data[1].Output_type_sort = AIQASIM_bs;
KVRASIM.data[1].Limit_save = A68_TRUE;
 /* line 828: */
KVRASIM.data[1].Struct_components = A_R1VAC(MVRASIM);
 /* line 829: */
HVRASIM_generator( A68_FALSE, &NVRASIM );
PVRASIM = A_HISVEC(OVRASIM,KVRASIM,2,A68_427 ) ;
A_VASSIGN2(PVRASIM,NVRASIM,A68_427 ) ;
UTRASIM.data[1].Output.Struct_components = A_VECARR(NVRASIM,QVRASIM);
UTRASIM.data[1].Pointer = A68_TRUE;
 /* line 831: */
 /* line 832: */
WVRASIM.fn.fn_global = UVRASIM_anonymous;
WVRASIM.nonlocals = A68_NIL;
UTRASIM.data[1].Limit_check = WVRASIM;
RTRASIM_generator( A68_FALSE, &XVRASIM );
ZVRASIM = A_HISVEC(YVRASIM,UTRASIM,2,A68_442 ) ;
A_VASSIGN2(ZVRASIM,XVRASIM,A68_442 ) ;
MTRASIM.Biops = XVRASIM;
AWRASIM = MTRASIM;
A_PROC_EXIT(make_13);
*ReturnedValue = (AWRASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  BWRASIM_make_14(A68_448  *ReturnedValue)
{ 
A68_448  CWRASIM;  /* collateral clause result */
A68_VC  FWRASIM;  /* avoid structure result */
A68_458  KWRASIM;  /* collateral clause result */
A68_357  NWRASIM;  /* avoid structure result */
A68_32  SWRASIM;  /* avoid structure result */
A68_32  TWRASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_32  UWRASIM;  /* OPERATORS - assign op */
A68_467  ZWRASIM;  /* collateral clause result */
A68_428  AXRASIM;  /* OPERATORS - nil -> mode */
A68_428  BXRASIM;  /* OPERATORS - nil -> mode */
A68_465  CXRASIM;  /* avoid structure result */
A68_465  DXRASIM;  /* OPERATORS - istruct -> vector */
A68_465  EXRASIM;  /* OPERATORS - assign op */
A68_428  FXRASIM;  /* OPERATORS - vector -> row */
A68_426  LXRASIM;  /* procedure value */
A68_357  OXRASIM;  /* avoid structure result */
A68_32  TXRASIM;  /* avoid structure result */
A68_32  UXRASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_32  VXRASIM;  /* OPERATORS - assign op */
A68_467  AYRASIM;  /* collateral clause result */
A68_428  BYRASIM;  /* OPERATORS - nil -> mode */
A68_428  CYRASIM;  /* OPERATORS - nil -> mode */
A68_465  DYRASIM;  /* avoid structure result */
A68_465  EYRASIM;  /* OPERATORS - istruct -> vector */
A68_465  FYRASIM;  /* OPERATORS - assign op */
A68_428  GYRASIM;  /* OPERATORS - vector -> row */
A68_426  MYRASIM;  /* procedure value */
A68_449  NYRASIM;  /* avoid structure result */
A68_449  OYRASIM;  /* OPERATORS - istruct -> vector */
A68_449  PYRASIM;  /* OPERATORS - assign op */
A68_448  QYRASIM;  /* clause result */
A_PROC_ENTRY(make_14);
RSCAOST_makeid( EWRASIM, &FWRASIM );
CWRASIM.Overloaded_biop_name = FWRASIM;
 /* line 836: */
 /* line 837: */
YLFASIM_label( MWRASIM, &NWRASIM );
KWRASIM.data[0].Biop_name = NWRASIM;
PWRASIM_generator( A68_FALSE, &SWRASIM );
UWRASIM = A_HVEC(TWRASIM,AIQASIM_bs,A68_INT ) ;
A_VASSIGN2(UWRASIM,SWRASIM,A68_INT ) ;
KWRASIM.data[0].Inputs = SWRASIM;
 /* line 838: */
KWRASIM.data[0].No_of_macparams = 0;
KWRASIM.data[0].Output.Output_type_sort = IIQASIM_struct;
KWRASIM.data[0].Output.Limit_save = A68_FALSE;
 /* line 839: */
ZWRASIM.data[0].Output_type_sort = BIQASIM_tv;
ZWRASIM.data[0].Limit_save = A68_FALSE;
ZWRASIM.data[0].Struct_components = A_R1VAC(AXRASIM);
ZWRASIM.data[1].Output_type_sort = EIQASIM_ei;
ZWRASIM.data[1].Limit_save = A68_TRUE;
 /* line 840: */
ZWRASIM.data[1].Struct_components = A_R1VAC(BXRASIM);
 /* line 841: */
WWRASIM_generator( A68_FALSE, &CXRASIM );
EXRASIM = A_HISVEC(DXRASIM,ZWRASIM,2,A68_427 ) ;
A_VASSIGN2(EXRASIM,CXRASIM,A68_427 ) ;
KWRASIM.data[0].Output.Struct_components = A_VECARR(CXRASIM,FXRASIM);
KWRASIM.data[0].Pointer = A68_TRUE;
 /* line 843: */
LXRASIM.fn.fn_global = JXRASIM_anonymous;
LXRASIM.nonlocals = A68_NIL;
KWRASIM.data[0].Limit_check = LXRASIM;
YLFASIM_label( NXRASIM, &OXRASIM );
KWRASIM.data[1].Biop_name = OXRASIM;
QXRASIM_generator( A68_FALSE, &TXRASIM );
VXRASIM = A_HVEC(UXRASIM,EIQASIM_ei,A68_INT ) ;
A_VASSIGN2(VXRASIM,TXRASIM,A68_INT ) ;
KWRASIM.data[1].Inputs = TXRASIM;
 /* line 844: */
KWRASIM.data[1].No_of_macparams = 0;
KWRASIM.data[1].Output.Output_type_sort = IIQASIM_struct;
KWRASIM.data[1].Output.Limit_save = A68_FALSE;
 /* line 845: */
AYRASIM.data[0].Output_type_sort = BIQASIM_tv;
AYRASIM.data[0].Limit_save = A68_FALSE;
AYRASIM.data[0].Struct_components = A_R1VAC(BYRASIM);
AYRASIM.data[1].Output_type_sort = AIQASIM_bs;
AYRASIM.data[1].Limit_save = A68_TRUE;
 /* line 846: */
AYRASIM.data[1].Struct_components = A_R1VAC(CYRASIM);
 /* line 847: */
XXRASIM_generator( A68_FALSE, &DYRASIM );
FYRASIM = A_HISVEC(EYRASIM,AYRASIM,2,A68_427 ) ;
A_VASSIGN2(FYRASIM,DYRASIM,A68_427 ) ;
KWRASIM.data[1].Output.Struct_components = A_VECARR(DYRASIM,GYRASIM);
KWRASIM.data[1].Pointer = A68_TRUE;
 /* line 849: */
 /* line 850: */
MYRASIM.fn.fn_global = KYRASIM_anonymous;
MYRASIM.nonlocals = A68_NIL;
KWRASIM.data[1].Limit_check = MYRASIM;
HWRASIM_generator( A68_FALSE, &NYRASIM );
PYRASIM = A_HISVEC(OYRASIM,KWRASIM,2,A68_442 ) ;
A_VASSIGN2(PYRASIM,NYRASIM,A68_442 ) ;
CWRASIM.Biops = NYRASIM;
QYRASIM = CWRASIM;
A_PROC_EXIT(make_14);
*ReturnedValue = (QYRASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  RYRASIM_make_15(A68_448  *ReturnedValue)
{ 
A68_448  SYRASIM;  /* collateral clause result */
A68_VC  VYRASIM;  /* avoid structure result */
A68_442  AZRASIM;  /* collateral clause result */
A68_357  DZRASIM;  /* avoid structure result */
A68_432  IZRASIM;  /* collateral clause result */
A68_32  JZRASIM;  /* avoid structure result */
A68_32  KZRASIM;  /* OPERATORS - istruct -> vector */
A68_32  LZRASIM;  /* OPERATORS - assign op */
A68_428  MZRASIM;  /* OPERATORS - nil -> mode */
A68_426  VZRASIM;  /* procedure value */
A68_449  WZRASIM;  /* avoid structure result */
A68_449  XZRASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_449  YZRASIM;  /* OPERATORS - assign op */
A68_448  ZZRASIM;  /* clause result */
A_PROC_ENTRY(make_15);
RSCAOST_makeid( UYRASIM, &VYRASIM );
SYRASIM.Overloaded_biop_name = VYRASIM;
 /* line 855: */
{ 
YLFASIM_label( CZRASIM, &DZRASIM );
AZRASIM.Biop_name = DZRASIM;
IZRASIM.data[0] = AIQASIM_bs;
IZRASIM.data[1] = AIQASIM_bs;
FZRASIM_generator( A68_FALSE, &JZRASIM );
LZRASIM = A_HISVEC(KZRASIM,IZRASIM,2,A68_INT ) ;
A_VASSIGN2(LZRASIM,JZRASIM,A68_INT ) ;
AZRASIM.Inputs = JZRASIM;
 /* line 856: */
AZRASIM.No_of_macparams = 0;
AZRASIM.Output.Output_type_sort = AIQASIM_bs;
AZRASIM.Output.Limit_save = A68_FALSE;
AZRASIM.Output.Struct_components = A_R1VAC(MZRASIM);
 /* line 857: */
AZRASIM.Pointer = A68_FALSE;
 /* line 859: */
 /* line 860: */
VZRASIM.fn.fn_global = QZRASIM_anonymous;
VZRASIM.nonlocals = A68_NIL;
AZRASIM.Limit_check = VZRASIM;
} 
XYRASIM_generator( A68_FALSE, &WZRASIM );
YZRASIM = A_HVEC(XZRASIM,AZRASIM,A68_442 ) ;
A_VASSIGN2(YZRASIM,WZRASIM,A68_442 ) ;
SYRASIM.Biops = WZRASIM;
ZZRASIM = SYRASIM;
A_PROC_EXIT(make_15);
*ReturnedValue = (ZZRASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  AASASIM_make_16(A68_448  *ReturnedValue)
{ 
A68_448  BASASIM;  /* collateral clause result */
A68_VC  EASASIM;  /* avoid structure result */
A68_442  JASASIM;  /* collateral clause result */
A68_357  MASASIM;  /* avoid structure result */
A68_432  RASASIM;  /* collateral clause result */
A68_32  SASASIM;  /* avoid structure result */
A68_32  TASASIM;  /* OPERATORS - istruct -> vector */
A68_32  UASASIM;  /* OPERATORS - assign op */
A68_428  VASASIM;  /* OPERATORS - nil -> mode */
A68_426  EBSASIM;  /* procedure value */
A68_449  FBSASIM;  /* avoid structure result */
A68_449  GBSASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_449  HBSASIM;  /* OPERATORS - assign op */
A68_448  IBSASIM;  /* clause result */
A_PROC_ENTRY(make_16);
RSCAOST_makeid( DASASIM, &EASASIM );
BASASIM.Overloaded_biop_name = EASASIM;
 /* line 865: */
{ 
YLFASIM_label( LASASIM, &MASASIM );
JASASIM.Biop_name = MASASIM;
RASASIM.data[0] = AIQASIM_bs;
RASASIM.data[1] = AIQASIM_bs;
OASASIM_generator( A68_FALSE, &SASASIM );
UASASIM = A_HISVEC(TASASIM,RASASIM,2,A68_INT ) ;
A_VASSIGN2(UASASIM,SASASIM,A68_INT ) ;
JASASIM.Inputs = SASASIM;
 /* line 866: */
JASASIM.No_of_macparams = 0;
JASASIM.Output.Output_type_sort = AIQASIM_bs;
JASASIM.Output.Limit_save = A68_FALSE;
JASASIM.Output.Struct_components = A_R1VAC(VASASIM);
 /* line 867: */
JASASIM.Pointer = A68_FALSE;
 /* line 869: */
 /* line 870: */
EBSASIM.fn.fn_global = ZASASIM_anonymous;
EBSASIM.nonlocals = A68_NIL;
JASASIM.Limit_check = EBSASIM;
} 
GASASIM_generator( A68_FALSE, &FBSASIM );
HBSASIM = A_HVEC(GBSASIM,JASASIM,A68_442 ) ;
A_VASSIGN2(HBSASIM,FBSASIM,A68_442 ) ;
BASASIM.Biops = FBSASIM;
IBSASIM = BASASIM;
A_PROC_EXIT(make_16);
*ReturnedValue = (IBSASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  JBSASIM_make_17(A68_448  *ReturnedValue)
{ 
A68_448  KBSASIM;  /* collateral clause result */
A68_VC  NBSASIM;  /* avoid structure result */
A68_442  SBSASIM;  /* collateral clause result */
A68_357  VBSASIM;  /* avoid structure result */
A68_432  ACSASIM;  /* collateral clause result */
A68_32  BCSASIM;  /* avoid structure result */
A68_32  CCSASIM;  /* OPERATORS - istruct -> vector */
A68_32  DCSASIM;  /* OPERATORS - assign op */
A68_428  ECSASIM;  /* OPERATORS - nil -> mode */
A68_426  NCSASIM;  /* procedure value */
A68_449  OCSASIM;  /* avoid structure result */
A68_449  PCSASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_449  QCSASIM;  /* OPERATORS - assign op */
A68_448  RCSASIM;  /* clause result */
A_PROC_ENTRY(make_17);
RSCAOST_makeid( MBSASIM, &NBSASIM );
KBSASIM.Overloaded_biop_name = NBSASIM;
 /* line 875: */
{ 
YLFASIM_label( UBSASIM, &VBSASIM );
SBSASIM.Biop_name = VBSASIM;
ACSASIM.data[0] = AIQASIM_bs;
ACSASIM.data[1] = AIQASIM_bs;
XBSASIM_generator( A68_FALSE, &BCSASIM );
DCSASIM = A_HISVEC(CCSASIM,ACSASIM,2,A68_INT ) ;
A_VASSIGN2(DCSASIM,BCSASIM,A68_INT ) ;
SBSASIM.Inputs = BCSASIM;
 /* line 876: */
SBSASIM.No_of_macparams = 0;
SBSASIM.Output.Output_type_sort = AIQASIM_bs;
SBSASIM.Output.Limit_save = A68_FALSE;
SBSASIM.Output.Struct_components = A_R1VAC(ECSASIM);
 /* line 877: */
SBSASIM.Pointer = A68_FALSE;
 /* line 879: */
 /* line 880: */
NCSASIM.fn.fn_global = ICSASIM_anonymous;
NCSASIM.nonlocals = A68_NIL;
SBSASIM.Limit_check = NCSASIM;
} 
PBSASIM_generator( A68_FALSE, &OCSASIM );
QCSASIM = A_HVEC(PCSASIM,SBSASIM,A68_442 ) ;
A_VASSIGN2(QCSASIM,OCSASIM,A68_442 ) ;
KBSASIM.Biops = OCSASIM;
RCSASIM = KBSASIM;
A_PROC_EXIT(make_17);
*ReturnedValue = (RCSASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  SCSASIM_make_18(A68_448  *ReturnedValue)
{ 
A68_448  TCSASIM;  /* collateral clause result */
A68_VC  WCSASIM;  /* avoid structure result */
A68_442  BDSASIM;  /* collateral clause result */
A68_357  EDSASIM;  /* avoid structure result */
A68_432  JDSASIM;  /* collateral clause result */
A68_32  KDSASIM;  /* avoid structure result */
A68_32  LDSASIM;  /* OPERATORS - istruct -> vector */
A68_32  MDSASIM;  /* OPERATORS - assign op */
A68_428  NDSASIM;  /* OPERATORS - nil -> mode */
A68_426  WDSASIM;  /* procedure value */
A68_449  XDSASIM;  /* avoid structure result */
A68_449  YDSASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_449  ZDSASIM;  /* OPERATORS - assign op */
A68_448  AESASIM;  /* clause result */
A_PROC_ENTRY(make_18);
RSCAOST_makeid( VCSASIM, &WCSASIM );
TCSASIM.Overloaded_biop_name = WCSASIM;
 /* line 885: */
{ 
YLFASIM_label( DDSASIM, &EDSASIM );
BDSASIM.Biop_name = EDSASIM;
JDSASIM.data[0] = AIQASIM_bs;
JDSASIM.data[1] = AIQASIM_bs;
GDSASIM_generator( A68_FALSE, &KDSASIM );
MDSASIM = A_HISVEC(LDSASIM,JDSASIM,2,A68_INT ) ;
A_VASSIGN2(MDSASIM,KDSASIM,A68_INT ) ;
BDSASIM.Inputs = KDSASIM;
 /* line 886: */
BDSASIM.No_of_macparams = 0;
BDSASIM.Output.Output_type_sort = AIQASIM_bs;
BDSASIM.Output.Limit_save = A68_FALSE;
BDSASIM.Output.Struct_components = A_R1VAC(NDSASIM);
 /* line 887: */
BDSASIM.Pointer = A68_FALSE;
 /* line 889: */
 /* line 890: */
WDSASIM.fn.fn_global = RDSASIM_anonymous;
WDSASIM.nonlocals = A68_NIL;
BDSASIM.Limit_check = WDSASIM;
} 
YCSASIM_generator( A68_FALSE, &XDSASIM );
ZDSASIM = A_HVEC(YDSASIM,BDSASIM,A68_442 ) ;
A_VASSIGN2(ZDSASIM,XDSASIM,A68_442 ) ;
TCSASIM.Biops = XDSASIM;
AESASIM = TCSASIM;
A_PROC_EXIT(make_18);
*ReturnedValue = (AESASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  BESASIM_make_19(A68_448  *ReturnedValue)
{ 
A68_448  CESASIM;  /* collateral clause result */
A68_VC  FESASIM;  /* avoid structure result */
A68_442  KESASIM;  /* collateral clause result */
A68_357  NESASIM;  /* avoid structure result */
A68_432  SESASIM;  /* collateral clause result */
A68_32  TESASIM;  /* avoid structure result */
A68_32  UESASIM;  /* OPERATORS - istruct -> vector */
A68_32  VESASIM;  /* OPERATORS - assign op */
A68_428  WESASIM;  /* OPERATORS - nil -> mode */
A68_426  FFSASIM;  /* procedure value */
A68_449  GFSASIM;  /* avoid structure result */
A68_449  HFSASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_449  IFSASIM;  /* OPERATORS - assign op */
A68_448  JFSASIM;  /* clause result */
A_PROC_ENTRY(make_19);
RSCAOST_makeid( EESASIM, &FESASIM );
CESASIM.Overloaded_biop_name = FESASIM;
 /* line 895: */
{ 
YLFASIM_label( MESASIM, &NESASIM );
KESASIM.Biop_name = NESASIM;
SESASIM.data[0] = AIQASIM_bs;
SESASIM.data[1] = AIQASIM_bs;
PESASIM_generator( A68_FALSE, &TESASIM );
VESASIM = A_HISVEC(UESASIM,SESASIM,2,A68_INT ) ;
A_VASSIGN2(VESASIM,TESASIM,A68_INT ) ;
KESASIM.Inputs = TESASIM;
 /* line 896: */
KESASIM.No_of_macparams = 0;
KESASIM.Output.Output_type_sort = AIQASIM_bs;
KESASIM.Output.Limit_save = A68_FALSE;
KESASIM.Output.Struct_components = A_R1VAC(WESASIM);
 /* line 897: */
KESASIM.Pointer = A68_FALSE;
 /* line 899: */
 /* line 900: */
FFSASIM.fn.fn_global = AFSASIM_anonymous;
FFSASIM.nonlocals = A68_NIL;
KESASIM.Limit_check = FFSASIM;
} 
HESASIM_generator( A68_FALSE, &GFSASIM );
IFSASIM = A_HVEC(HFSASIM,KESASIM,A68_442 ) ;
A_VASSIGN2(IFSASIM,GFSASIM,A68_442 ) ;
CESASIM.Biops = GFSASIM;
JFSASIM = CESASIM;
A_PROC_EXIT(make_19);
*ReturnedValue = (JFSASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  KFSASIM_make_20(A68_448  *ReturnedValue)
{ 
A68_448  LFSASIM;  /* collateral clause result */
A68_VC  OFSASIM;  /* avoid structure result */
A68_442  TFSASIM;  /* collateral clause result */
A68_357  WFSASIM;  /* avoid structure result */
A68_432  BGSASIM;  /* collateral clause result */
A68_32  CGSASIM;  /* avoid structure result */
A68_32  DGSASIM;  /* OPERATORS - istruct -> vector */
A68_32  EGSASIM;  /* OPERATORS - assign op */
A68_428  FGSASIM;  /* OPERATORS - nil -> mode */
A68_426  OGSASIM;  /* procedure value */
A68_449  PGSASIM;  /* avoid structure result */
A68_449  QGSASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_449  RGSASIM;  /* OPERATORS - assign op */
A68_448  SGSASIM;  /* clause result */
A_PROC_ENTRY(make_20);
RSCAOST_makeid( NFSASIM, &OFSASIM );
LFSASIM.Overloaded_biop_name = OFSASIM;
 /* line 905: */
{ 
YLFASIM_label( VFSASIM, &WFSASIM );
TFSASIM.Biop_name = WFSASIM;
BGSASIM.data[0] = AIQASIM_bs;
BGSASIM.data[1] = AIQASIM_bs;
YFSASIM_generator( A68_FALSE, &CGSASIM );
EGSASIM = A_HISVEC(DGSASIM,BGSASIM,2,A68_INT ) ;
A_VASSIGN2(EGSASIM,CGSASIM,A68_INT ) ;
TFSASIM.Inputs = CGSASIM;
 /* line 906: */
TFSASIM.No_of_macparams = 0;
TFSASIM.Output.Output_type_sort = AIQASIM_bs;
TFSASIM.Output.Limit_save = A68_FALSE;
TFSASIM.Output.Struct_components = A_R1VAC(FGSASIM);
 /* line 907: */
TFSASIM.Pointer = A68_FALSE;
 /* line 909: */
 /* line 910: */
OGSASIM.fn.fn_global = JGSASIM_anonymous;
OGSASIM.nonlocals = A68_NIL;
TFSASIM.Limit_check = OGSASIM;
} 
QFSASIM_generator( A68_FALSE, &PGSASIM );
RGSASIM = A_HVEC(QGSASIM,TFSASIM,A68_442 ) ;
A_VASSIGN2(RGSASIM,PGSASIM,A68_442 ) ;
LFSASIM.Biops = PGSASIM;
SGSASIM = LFSASIM;
A_PROC_EXIT(make_20);
*ReturnedValue = (SGSASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  TGSASIM_make_21(A68_448  *ReturnedValue)
{ 
A68_448  UGSASIM;  /* collateral clause result */
A68_VC  XGSASIM;  /* avoid structure result */
A68_442  CHSASIM;  /* collateral clause result */
A68_357  FHSASIM;  /* avoid structure result */
A68_32  KHSASIM;  /* avoid structure result */
A68_32  LHSASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_32  MHSASIM;  /* OPERATORS - assign op */
A68_428  NHSASIM;  /* OPERATORS - nil -> mode */
A68_426  VHSASIM;  /* procedure value */
A68_449  WHSASIM;  /* avoid structure result */
A68_449  XHSASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_449  YHSASIM;  /* OPERATORS - assign op */
A68_448  ZHSASIM;  /* clause result */
A_PROC_ENTRY(make_21);
RSCAOST_makeid( WGSASIM, &XGSASIM );
UGSASIM.Overloaded_biop_name = XGSASIM;
 /* line 915: */
{ 
YLFASIM_label( EHSASIM, &FHSASIM );
CHSASIM.Biop_name = FHSASIM;
HHSASIM_generator( A68_FALSE, &KHSASIM );
MHSASIM = A_HVEC(LHSASIM,AIQASIM_bs,A68_INT ) ;
A_VASSIGN2(MHSASIM,KHSASIM,A68_INT ) ;
CHSASIM.Inputs = KHSASIM;
 /* line 916: */
CHSASIM.No_of_macparams = 0;
CHSASIM.Output.Output_type_sort = AIQASIM_bs;
CHSASIM.Output.Limit_save = A68_FALSE;
CHSASIM.Output.Struct_components = A_R1VAC(NHSASIM);
 /* line 917: */
CHSASIM.Pointer = A68_FALSE;
 /* line 919: */
 /* line 920: */
VHSASIM.fn.fn_global = RHSASIM_anonymous;
VHSASIM.nonlocals = A68_NIL;
CHSASIM.Limit_check = VHSASIM;
} 
ZGSASIM_generator( A68_FALSE, &WHSASIM );
YHSASIM = A_HVEC(XHSASIM,CHSASIM,A68_442 ) ;
A_VASSIGN2(YHSASIM,WHSASIM,A68_442 ) ;
UGSASIM.Biops = WHSASIM;
ZHSASIM = UGSASIM;
A_PROC_EXIT(make_21);
*ReturnedValue = (ZHSASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  AISASIM_make_22(A68_448  *ReturnedValue)
{ 
A68_448  BISASIM;  /* collateral clause result */
A68_VC  EISASIM;  /* avoid structure result */
A68_442  JISASIM;  /* collateral clause result */
A68_357  MISASIM;  /* avoid structure result */
A68_32  RISASIM;  /* avoid structure result */
A68_32  SISASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_32  TISASIM;  /* OPERATORS - assign op */
A68_428  UISASIM;  /* OPERATORS - nil -> mode */
A68_426  CJSASIM;  /* procedure value */
A68_449  DJSASIM;  /* avoid structure result */
A68_449  EJSASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_449  FJSASIM;  /* OPERATORS - assign op */
A68_448  GJSASIM;  /* clause result */
A_PROC_ENTRY(make_22);
RSCAOST_makeid( DISASIM, &EISASIM );
BISASIM.Overloaded_biop_name = EISASIM;
 /* line 925: */
{ 
YLFASIM_label( LISASIM, &MISASIM );
JISASIM.Biop_name = MISASIM;
OISASIM_generator( A68_FALSE, &RISASIM );
TISASIM = A_HVEC(SISASIM,AIQASIM_bs,A68_INT ) ;
A_VASSIGN2(TISASIM,RISASIM,A68_INT ) ;
JISASIM.Inputs = RISASIM;
 /* line 926: */
JISASIM.No_of_macparams = 0;
JISASIM.Output.Output_type_sort = AIQASIM_bs;
JISASIM.Output.Limit_save = A68_FALSE;
JISASIM.Output.Struct_components = A_R1VAC(UISASIM);
 /* line 927: */
JISASIM.Pointer = A68_FALSE;
 /* line 929: */
 /* line 930: */
CJSASIM.fn.fn_global = YISASIM_anonymous;
CJSASIM.nonlocals = A68_NIL;
JISASIM.Limit_check = CJSASIM;
} 
GISASIM_generator( A68_FALSE, &DJSASIM );
FJSASIM = A_HVEC(EJSASIM,JISASIM,A68_442 ) ;
A_VASSIGN2(FJSASIM,DJSASIM,A68_442 ) ;
BISASIM.Biops = DJSASIM;
GJSASIM = BISASIM;
A_PROC_EXIT(make_22);
*ReturnedValue = (GJSASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  HJSASIM_make_23(A68_448  *ReturnedValue)
{ 
A68_448  IJSASIM;  /* collateral clause result */
A68_VC  LJSASIM;  /* avoid structure result */
A68_442  QJSASIM;  /* collateral clause result */
A68_357  TJSASIM;  /* avoid structure result */
A68_32  YJSASIM;  /* avoid structure result */
A68_32  ZJSASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_32  AKSASIM;  /* OPERATORS - assign op */
A68_428  BKSASIM;  /* OPERATORS - nil -> mode */
A68_426  JKSASIM;  /* procedure value */
A68_449  KKSASIM;  /* avoid structure result */
A68_449  LKSASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_449  MKSASIM;  /* OPERATORS - assign op */
A68_448  NKSASIM;  /* clause result */
A_PROC_ENTRY(make_23);
RSCAOST_makeid( KJSASIM, &LJSASIM );
IJSASIM.Overloaded_biop_name = LJSASIM;
 /* line 935: */
{ 
YLFASIM_label( SJSASIM, &TJSASIM );
QJSASIM.Biop_name = TJSASIM;
VJSASIM_generator( A68_FALSE, &YJSASIM );
AKSASIM = A_HVEC(ZJSASIM,AIQASIM_bs,A68_INT ) ;
A_VASSIGN2(AKSASIM,YJSASIM,A68_INT ) ;
QJSASIM.Inputs = YJSASIM;
 /* line 936: */
QJSASIM.No_of_macparams = 0;
QJSASIM.Output.Output_type_sort = AIQASIM_bs;
QJSASIM.Output.Limit_save = A68_FALSE;
QJSASIM.Output.Struct_components = A_R1VAC(BKSASIM);
 /* line 937: */
QJSASIM.Pointer = A68_FALSE;
 /* line 939: */
 /* line 940: */
JKSASIM.fn.fn_global = FKSASIM_anonymous;
JKSASIM.nonlocals = A68_NIL;
QJSASIM.Limit_check = JKSASIM;
} 
NJSASIM_generator( A68_FALSE, &KKSASIM );
MKSASIM = A_HVEC(LKSASIM,QJSASIM,A68_442 ) ;
A_VASSIGN2(MKSASIM,KKSASIM,A68_442 ) ;
IJSASIM.Biops = KKSASIM;
NKSASIM = IJSASIM;
A_PROC_EXIT(make_23);
*ReturnedValue = (NKSASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  OKSASIM_make_24(A68_448  *ReturnedValue)
{ 
A68_448  PKSASIM;  /* collateral clause result */
A68_VC  SKSASIM;  /* avoid structure result */
A68_442  XKSASIM;  /* collateral clause result */
A68_357  ALSASIM;  /* avoid structure result */
A68_32  FLSASIM;  /* avoid structure result */
A68_32  GLSASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_32  HLSASIM;  /* OPERATORS - assign op */
A68_428  ILSASIM;  /* OPERATORS - nil -> mode */
A68_426  QLSASIM;  /* procedure value */
A68_449  RLSASIM;  /* avoid structure result */
A68_449  SLSASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_449  TLSASIM;  /* OPERATORS - assign op */
A68_448  ULSASIM;  /* clause result */
A_PROC_ENTRY(make_24);
RSCAOST_makeid( RKSASIM, &SKSASIM );
PKSASIM.Overloaded_biop_name = SKSASIM;
 /* line 945: */
{ 
YLFASIM_label( ZKSASIM, &ALSASIM );
XKSASIM.Biop_name = ALSASIM;
CLSASIM_generator( A68_FALSE, &FLSASIM );
HLSASIM = A_HVEC(GLSASIM,AIQASIM_bs,A68_INT ) ;
A_VASSIGN2(HLSASIM,FLSASIM,A68_INT ) ;
XKSASIM.Inputs = FLSASIM;
 /* line 946: */
XKSASIM.No_of_macparams = 0;
XKSASIM.Output.Output_type_sort = AIQASIM_bs;
XKSASIM.Output.Limit_save = A68_FALSE;
XKSASIM.Output.Struct_components = A_R1VAC(ILSASIM);
 /* line 947: */
XKSASIM.Pointer = A68_FALSE;
 /* line 949: */
 /* line 950: */
QLSASIM.fn.fn_global = MLSASIM_anonymous;
QLSASIM.nonlocals = A68_NIL;
XKSASIM.Limit_check = QLSASIM;
} 
UKSASIM_generator( A68_FALSE, &RLSASIM );
TLSASIM = A_HVEC(SLSASIM,XKSASIM,A68_442 ) ;
A_VASSIGN2(TLSASIM,RLSASIM,A68_442 ) ;
PKSASIM.Biops = RLSASIM;
ULSASIM = PKSASIM;
A_PROC_EXIT(make_24);
*ReturnedValue = (ULSASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  VLSASIM_make_25(A68_448  *ReturnedValue)
{ 
A68_448  WLSASIM;  /* collateral clause result */
A68_VC  ZLSASIM;  /* avoid structure result */
A68_442  EMSASIM;  /* collateral clause result */
A68_357  HMSASIM;  /* avoid structure result */
A68_432  MMSASIM;  /* collateral clause result */
A68_32  NMSASIM;  /* avoid structure result */
A68_32  OMSASIM;  /* OPERATORS - istruct -> vector */
A68_32  PMSASIM;  /* OPERATORS - assign op */
A68_473  UMSASIM;  /* collateral clause result */
A68_428  VMSASIM;  /* OPERATORS - nil -> mode */
A68_428  WMSASIM;  /* OPERATORS - nil -> mode */
A68_428  XMSASIM;  /* OPERATORS - nil -> mode */
A68_465  YMSASIM;  /* avoid structure result */
A68_465  ZMSASIM;  /* OPERATORS - istruct -> vector */
A68_465  ANSASIM;  /* OPERATORS - assign op */
A68_428  BNSASIM;  /* OPERATORS - vector -> row */
A68_426  LNSASIM;  /* procedure value */
A68_449  MNSASIM;  /* avoid structure result */
A68_449  NNSASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_449  ONSASIM;  /* OPERATORS - assign op */
A68_448  PNSASIM;  /* clause result */
A_PROC_ENTRY(make_25);
RSCAOST_makeid( YLSASIM, &ZLSASIM );
WLSASIM.Overloaded_biop_name = ZLSASIM;
 /* line 955: */
{ 
YLFASIM_label( GMSASIM, &HMSASIM );
EMSASIM.Biop_name = HMSASIM;
MMSASIM.data[0] = AIQASIM_bs;
MMSASIM.data[1] = AIQASIM_bs;
JMSASIM_generator( A68_FALSE, &NMSASIM );
PMSASIM = A_HISVEC(OMSASIM,MMSASIM,2,A68_INT ) ;
A_VASSIGN2(PMSASIM,NMSASIM,A68_INT ) ;
EMSASIM.Inputs = NMSASIM;
 /* line 956: */
EMSASIM.No_of_macparams = 0;
EMSASIM.Output.Output_type_sort = IIQASIM_struct;
EMSASIM.Output.Limit_save = A68_FALSE;
 /* line 957: */
UMSASIM.data[0].Output_type_sort = BIQASIM_tv;
UMSASIM.data[0].Limit_save = A68_FALSE;
UMSASIM.data[0].Struct_components = A_R1VAC(VMSASIM);
UMSASIM.data[1].Output_type_sort = AIQASIM_bs;
UMSASIM.data[1].Limit_save = A68_FALSE;
UMSASIM.data[1].Struct_components = A_R1VAC(WMSASIM);
UMSASIM.data[2].Output_type_sort = AIQASIM_bs;
UMSASIM.data[2].Limit_save = A68_FALSE;
UMSASIM.data[2].Struct_components = A_R1VAC(XMSASIM);
RMSASIM_generator( A68_FALSE, &YMSASIM );
ANSASIM = A_HISVEC(ZMSASIM,UMSASIM,3,A68_427 ) ;
A_VASSIGN2(ANSASIM,YMSASIM,A68_427 ) ;
EMSASIM.Output.Struct_components = A_VECARR(YMSASIM,BNSASIM);
 /* line 958: */
EMSASIM.Pointer = A68_TRUE;
 /* line 960: */
 /* line 961: */
LNSASIM.fn.fn_global = FNSASIM_anonymous;
LNSASIM.nonlocals = A68_NIL;
EMSASIM.Limit_check = LNSASIM;
} 
BMSASIM_generator( A68_FALSE, &MNSASIM );
ONSASIM = A_HVEC(NNSASIM,EMSASIM,A68_442 ) ;
A_VASSIGN2(ONSASIM,MNSASIM,A68_442 ) ;
WLSASIM.Biops = MNSASIM;
PNSASIM = WLSASIM;
A_PROC_EXIT(make_25);
*ReturnedValue = (PNSASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  QNSASIM_make_26(A68_448  *ReturnedValue)
{ 
A68_448  RNSASIM;  /* collateral clause result */
A68_VC  UNSASIM;  /* avoid structure result */
A68_442  ZNSASIM;  /* collateral clause result */
A68_357  COSASIM;  /* avoid structure result */
A68_432  HOSASIM;  /* collateral clause result */
A68_32  IOSASIM;  /* avoid structure result */
A68_32  JOSASIM;  /* OPERATORS - istruct -> vector */
A68_32  KOSASIM;  /* OPERATORS - assign op */
A68_473  POSASIM;  /* collateral clause result */
A68_428  QOSASIM;  /* OPERATORS - nil -> mode */
A68_428  ROSASIM;  /* OPERATORS - nil -> mode */
A68_428  SOSASIM;  /* OPERATORS - nil -> mode */
A68_465  TOSASIM;  /* avoid structure result */
A68_465  UOSASIM;  /* OPERATORS - istruct -> vector */
A68_465  VOSASIM;  /* OPERATORS - assign op */
A68_428  WOSASIM;  /* OPERATORS - vector -> row */
A68_426  GPSASIM;  /* procedure value */
A68_449  HPSASIM;  /* avoid structure result */
A68_449  IPSASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_449  JPSASIM;  /* OPERATORS - assign op */
A68_448  KPSASIM;  /* clause result */
A_PROC_ENTRY(make_26);
RSCAOST_makeid( TNSASIM, &UNSASIM );
RNSASIM.Overloaded_biop_name = UNSASIM;
 /* line 966: */
{ 
YLFASIM_label( BOSASIM, &COSASIM );
ZNSASIM.Biop_name = COSASIM;
HOSASIM.data[0] = AIQASIM_bs;
HOSASIM.data[1] = AIQASIM_bs;
EOSASIM_generator( A68_FALSE, &IOSASIM );
KOSASIM = A_HISVEC(JOSASIM,HOSASIM,2,A68_INT ) ;
A_VASSIGN2(KOSASIM,IOSASIM,A68_INT ) ;
ZNSASIM.Inputs = IOSASIM;
 /* line 967: */
ZNSASIM.No_of_macparams = 0;
ZNSASIM.Output.Output_type_sort = IIQASIM_struct;
ZNSASIM.Output.Limit_save = A68_FALSE;
 /* line 968: */
POSASIM.data[0].Output_type_sort = BIQASIM_tv;
POSASIM.data[0].Limit_save = A68_FALSE;
POSASIM.data[0].Struct_components = A_R1VAC(QOSASIM);
POSASIM.data[1].Output_type_sort = AIQASIM_bs;
POSASIM.data[1].Limit_save = A68_FALSE;
POSASIM.data[1].Struct_components = A_R1VAC(ROSASIM);
POSASIM.data[2].Output_type_sort = AIQASIM_bs;
POSASIM.data[2].Limit_save = A68_FALSE;
POSASIM.data[2].Struct_components = A_R1VAC(SOSASIM);
MOSASIM_generator( A68_FALSE, &TOSASIM );
VOSASIM = A_HISVEC(UOSASIM,POSASIM,3,A68_427 ) ;
A_VASSIGN2(VOSASIM,TOSASIM,A68_427 ) ;
ZNSASIM.Output.Struct_components = A_VECARR(TOSASIM,WOSASIM);
 /* line 969: */
ZNSASIM.Pointer = A68_TRUE;
 /* line 971: */
 /* line 972: */
GPSASIM.fn.fn_global = APSASIM_anonymous;
GPSASIM.nonlocals = A68_NIL;
ZNSASIM.Limit_check = GPSASIM;
} 
WNSASIM_generator( A68_FALSE, &HPSASIM );
JPSASIM = A_HVEC(IPSASIM,ZNSASIM,A68_442 ) ;
A_VASSIGN2(JPSASIM,HPSASIM,A68_442 ) ;
RNSASIM.Biops = HPSASIM;
KPSASIM = RNSASIM;
A_PROC_EXIT(make_26);
*ReturnedValue = (KPSASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  LPSASIM_make_27(A68_448  *ReturnedValue)
{ 
A68_448  MPSASIM;  /* collateral clause result */
A68_VC  PPSASIM;  /* avoid structure result */
A68_442  UPSASIM;  /* collateral clause result */
A68_357  XPSASIM;  /* avoid structure result */
A68_432  CQSASIM;  /* collateral clause result */
A68_32  DQSASIM;  /* avoid structure result */
A68_32  EQSASIM;  /* OPERATORS - istruct -> vector */
A68_32  FQSASIM;  /* OPERATORS - assign op */
A68_467  KQSASIM;  /* collateral clause result */
A68_428  LQSASIM;  /* OPERATORS - nil -> mode */
A68_428  MQSASIM;  /* OPERATORS - nil -> mode */
A68_465  NQSASIM;  /* avoid structure result */
A68_465  OQSASIM;  /* OPERATORS - istruct -> vector */
A68_465  PQSASIM;  /* OPERATORS - assign op */
A68_428  QQSASIM;  /* OPERATORS - vector -> row */
A68_426  YQSASIM;  /* procedure value */
A68_449  ZQSASIM;  /* avoid structure result */
A68_449  ARSASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_449  BRSASIM;  /* OPERATORS - assign op */
A68_448  CRSASIM;  /* clause result */
A_PROC_ENTRY(make_27);
RSCAOST_makeid( OPSASIM, &PPSASIM );
MPSASIM.Overloaded_biop_name = PPSASIM;
 /* line 977: */
{ 
YLFASIM_label( WPSASIM, &XPSASIM );
UPSASIM.Biop_name = XPSASIM;
CQSASIM.data[0] = AIQASIM_bs;
CQSASIM.data[1] = AIQASIM_bs;
ZPSASIM_generator( A68_FALSE, &DQSASIM );
FQSASIM = A_HISVEC(EQSASIM,CQSASIM,2,A68_INT ) ;
A_VASSIGN2(FQSASIM,DQSASIM,A68_INT ) ;
UPSASIM.Inputs = DQSASIM;
 /* line 978: */
UPSASIM.No_of_macparams = 0;
UPSASIM.Output.Output_type_sort = IIQASIM_struct;
UPSASIM.Output.Limit_save = A68_FALSE;
 /* line 979: */
KQSASIM.data[0].Output_type_sort = BIQASIM_tv;
KQSASIM.data[0].Limit_save = A68_FALSE;
KQSASIM.data[0].Struct_components = A_R1VAC(LQSASIM);
KQSASIM.data[1].Output_type_sort = AIQASIM_bs;
KQSASIM.data[1].Limit_save = A68_FALSE;
KQSASIM.data[1].Struct_components = A_R1VAC(MQSASIM);
HQSASIM_generator( A68_FALSE, &NQSASIM );
PQSASIM = A_HISVEC(OQSASIM,KQSASIM,2,A68_427 ) ;
A_VASSIGN2(PQSASIM,NQSASIM,A68_427 ) ;
UPSASIM.Output.Struct_components = A_VECARR(NQSASIM,QQSASIM);
 /* line 980: */
UPSASIM.Pointer = A68_TRUE;
 /* line 982: */
 /* line 983: */
YQSASIM.fn.fn_global = UQSASIM_anonymous;
YQSASIM.nonlocals = A68_NIL;
UPSASIM.Limit_check = YQSASIM;
} 
RPSASIM_generator( A68_FALSE, &ZQSASIM );
BRSASIM = A_HVEC(ARSASIM,UPSASIM,A68_442 ) ;
A_VASSIGN2(BRSASIM,ZQSASIM,A68_442 ) ;
MPSASIM.Biops = ZQSASIM;
CRSASIM = MPSASIM;
A_PROC_EXIT(make_27);
*ReturnedValue = (CRSASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  DRSASIM_make_28(A68_448  *ReturnedValue)
{ 
A68_448  ERSASIM;  /* collateral clause result */
A68_VC  HRSASIM;  /* avoid structure result */
A68_442  MRSASIM;  /* collateral clause result */
A68_357  PRSASIM;  /* avoid structure result */
A68_432  URSASIM;  /* collateral clause result */
A68_32  VRSASIM;  /* avoid structure result */
A68_32  WRSASIM;  /* OPERATORS - istruct -> vector */
A68_32  XRSASIM;  /* OPERATORS - assign op */
A68_467  CSSASIM;  /* collateral clause result */
A68_428  DSSASIM;  /* OPERATORS - nil -> mode */
A68_428  ESSASIM;  /* OPERATORS - nil -> mode */
A68_465  FSSASIM;  /* avoid structure result */
A68_465  GSSASIM;  /* OPERATORS - istruct -> vector */
A68_465  HSSASIM;  /* OPERATORS - assign op */
A68_428  ISSASIM;  /* OPERATORS - vector -> row */
A68_426  QSSASIM;  /* procedure value */
A68_449  RSSASIM;  /* avoid structure result */
A68_449  SSSASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_449  TSSASIM;  /* OPERATORS - assign op */
A68_448  USSASIM;  /* clause result */
A_PROC_ENTRY(make_28);
RSCAOST_makeid( GRSASIM, &HRSASIM );
ERSASIM.Overloaded_biop_name = HRSASIM;
 /* line 988: */
{ 
YLFASIM_label( ORSASIM, &PRSASIM );
MRSASIM.Biop_name = PRSASIM;
URSASIM.data[0] = AIQASIM_bs;
URSASIM.data[1] = AIQASIM_bs;
RRSASIM_generator( A68_FALSE, &VRSASIM );
XRSASIM = A_HISVEC(WRSASIM,URSASIM,2,A68_INT ) ;
A_VASSIGN2(XRSASIM,VRSASIM,A68_INT ) ;
MRSASIM.Inputs = VRSASIM;
 /* line 989: */
MRSASIM.No_of_macparams = 0;
MRSASIM.Output.Output_type_sort = IIQASIM_struct;
MRSASIM.Output.Limit_save = A68_FALSE;
 /* line 990: */
CSSASIM.data[0].Output_type_sort = BIQASIM_tv;
CSSASIM.data[0].Limit_save = A68_FALSE;
CSSASIM.data[0].Struct_components = A_R1VAC(DSSASIM);
CSSASIM.data[1].Output_type_sort = AIQASIM_bs;
CSSASIM.data[1].Limit_save = A68_FALSE;
CSSASIM.data[1].Struct_components = A_R1VAC(ESSASIM);
ZRSASIM_generator( A68_FALSE, &FSSASIM );
HSSASIM = A_HISVEC(GSSASIM,CSSASIM,2,A68_427 ) ;
A_VASSIGN2(HSSASIM,FSSASIM,A68_427 ) ;
MRSASIM.Output.Struct_components = A_VECARR(FSSASIM,ISSASIM);
 /* line 991: */
MRSASIM.Pointer = A68_TRUE;
 /* line 993: */
 /* line 994: */
QSSASIM.fn.fn_global = MSSASIM_anonymous;
QSSASIM.nonlocals = A68_NIL;
MRSASIM.Limit_check = QSSASIM;
} 
JRSASIM_generator( A68_FALSE, &RSSASIM );
TSSASIM = A_HVEC(SSSASIM,MRSASIM,A68_442 ) ;
A_VASSIGN2(TSSASIM,RSSASIM,A68_442 ) ;
ERSASIM.Biops = RSSASIM;
USSASIM = ERSASIM;
A_PROC_EXIT(make_28);
*ReturnedValue = (USSASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  VSSASIM_make_29(A68_448  *ReturnedValue)
{ 
A68_448  WSSASIM;  /* collateral clause result */
A68_VC  ZSSASIM;  /* avoid structure result */
A68_442  ETSASIM;  /* collateral clause result */
A68_357  HTSASIM;  /* avoid structure result */
A68_32  MTSASIM;  /* avoid structure result */
A68_32  NTSASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_32  OTSASIM;  /* OPERATORS - assign op */
A68_467  TTSASIM;  /* collateral clause result */
A68_428  UTSASIM;  /* OPERATORS - nil -> mode */
A68_428  VTSASIM;  /* OPERATORS - nil -> mode */
A68_465  WTSASIM;  /* avoid structure result */
A68_465  XTSASIM;  /* OPERATORS - istruct -> vector */
A68_465  YTSASIM;  /* OPERATORS - assign op */
A68_428  ZTSASIM;  /* OPERATORS - vector -> row */
A68_426  FUSASIM;  /* procedure value */
A68_449  GUSASIM;  /* avoid structure result */
A68_449  HUSASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_449  IUSASIM;  /* OPERATORS - assign op */
A68_448  JUSASIM;  /* clause result */
A_PROC_ENTRY(make_29);
RSCAOST_makeid( YSSASIM, &ZSSASIM );
WSSASIM.Overloaded_biop_name = ZSSASIM;
 /* line 999: */
{ 
YLFASIM_label( GTSASIM, &HTSASIM );
ETSASIM.Biop_name = HTSASIM;
JTSASIM_generator( A68_FALSE, &MTSASIM );
OTSASIM = A_HVEC(NTSASIM,AIQASIM_bs,A68_INT ) ;
A_VASSIGN2(OTSASIM,MTSASIM,A68_INT ) ;
ETSASIM.Inputs = MTSASIM;
 /* line 1000: */
ETSASIM.No_of_macparams = 0;
ETSASIM.Output.Output_type_sort = IIQASIM_struct;
ETSASIM.Output.Limit_save = A68_FALSE;
 /* line 1001: */
TTSASIM.data[0].Output_type_sort = BIQASIM_tv;
TTSASIM.data[0].Limit_save = A68_FALSE;
TTSASIM.data[0].Struct_components = A_R1VAC(UTSASIM);
TTSASIM.data[1].Output_type_sort = AIQASIM_bs;
TTSASIM.data[1].Limit_save = A68_TRUE;
TTSASIM.data[1].Struct_components = A_R1VAC(VTSASIM);
QTSASIM_generator( A68_FALSE, &WTSASIM );
YTSASIM = A_HISVEC(XTSASIM,TTSASIM,2,A68_427 ) ;
A_VASSIGN2(YTSASIM,WTSASIM,A68_427 ) ;
ETSASIM.Output.Struct_components = A_VECARR(WTSASIM,ZTSASIM);
 /* line 1002: */
ETSASIM.Pointer = A68_TRUE;
 /* line 1004: */
 /* line 1005: */
FUSASIM.fn.fn_global = DUSASIM_anonymous;
FUSASIM.nonlocals = A68_NIL;
ETSASIM.Limit_check = FUSASIM;
} 
BTSASIM_generator( A68_FALSE, &GUSASIM );
IUSASIM = A_HVEC(HUSASIM,ETSASIM,A68_442 ) ;
A_VASSIGN2(IUSASIM,GUSASIM,A68_442 ) ;
WSSASIM.Biops = GUSASIM;
JUSASIM = WSSASIM;
A_PROC_EXIT(make_29);
*ReturnedValue = (JUSASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  KUSASIM_make_30(A68_448  *ReturnedValue)
{ 
A68_448  LUSASIM;  /* collateral clause result */
A68_VC  OUSASIM;  /* avoid structure result */
A68_442  TUSASIM;  /* collateral clause result */
A68_357  WUSASIM;  /* avoid structure result */
A68_32  BVSASIM;  /* avoid structure result */
A68_32  CVSASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_32  DVSASIM;  /* OPERATORS - assign op */
A68_467  IVSASIM;  /* collateral clause result */
A68_428  JVSASIM;  /* OPERATORS - nil -> mode */
A68_428  KVSASIM;  /* OPERATORS - nil -> mode */
A68_465  LVSASIM;  /* avoid structure result */
A68_465  MVSASIM;  /* OPERATORS - istruct -> vector */
A68_465  NVSASIM;  /* OPERATORS - assign op */
A68_428  OVSASIM;  /* OPERATORS - vector -> row */
A68_426  UVSASIM;  /* procedure value */
A68_449  VVSASIM;  /* avoid structure result */
A68_449  WVSASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_449  XVSASIM;  /* OPERATORS - assign op */
A68_448  YVSASIM;  /* clause result */
A_PROC_ENTRY(make_30);
RSCAOST_makeid( NUSASIM, &OUSASIM );
LUSASIM.Overloaded_biop_name = OUSASIM;
 /* line 1010: */
{ 
YLFASIM_label( VUSASIM, &WUSASIM );
TUSASIM.Biop_name = WUSASIM;
YUSASIM_generator( A68_FALSE, &BVSASIM );
DVSASIM = A_HVEC(CVSASIM,AIQASIM_bs,A68_INT ) ;
A_VASSIGN2(DVSASIM,BVSASIM,A68_INT ) ;
TUSASIM.Inputs = BVSASIM;
 /* line 1011: */
TUSASIM.No_of_macparams = 0;
TUSASIM.Output.Output_type_sort = IIQASIM_struct;
TUSASIM.Output.Limit_save = A68_FALSE;
 /* line 1012: */
IVSASIM.data[0].Output_type_sort = BIQASIM_tv;
IVSASIM.data[0].Limit_save = A68_FALSE;
IVSASIM.data[0].Struct_components = A_R1VAC(JVSASIM);
IVSASIM.data[1].Output_type_sort = AIQASIM_bs;
IVSASIM.data[1].Limit_save = A68_TRUE;
IVSASIM.data[1].Struct_components = A_R1VAC(KVSASIM);
FVSASIM_generator( A68_FALSE, &LVSASIM );
NVSASIM = A_HISVEC(MVSASIM,IVSASIM,2,A68_427 ) ;
A_VASSIGN2(NVSASIM,LVSASIM,A68_427 ) ;
TUSASIM.Output.Struct_components = A_VECARR(LVSASIM,OVSASIM);
 /* line 1013: */
TUSASIM.Pointer = A68_TRUE;
 /* line 1015: */
 /* line 1016: */
UVSASIM.fn.fn_global = SVSASIM_anonymous;
UVSASIM.nonlocals = A68_NIL;
TUSASIM.Limit_check = UVSASIM;
} 
QUSASIM_generator( A68_FALSE, &VVSASIM );
XVSASIM = A_HVEC(WVSASIM,TUSASIM,A68_442 ) ;
A_VASSIGN2(XVSASIM,VVSASIM,A68_442 ) ;
LUSASIM.Biops = VVSASIM;
YVSASIM = LUSASIM;
A_PROC_EXIT(make_30);
*ReturnedValue = (YVSASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  ZVSASIM_make_31(A68_448  *ReturnedValue)
{ 
A68_448  AWSASIM;  /* collateral clause result */
A68_VC  DWSASIM;  /* avoid structure result */
A68_442  IWSASIM;  /* collateral clause result */
A68_357  LWSASIM;  /* avoid structure result */
A68_432  QWSASIM;  /* collateral clause result */
A68_32  RWSASIM;  /* avoid structure result */
A68_32  SWSASIM;  /* OPERATORS - istruct -> vector */
A68_32  TWSASIM;  /* OPERATORS - assign op */
A68_428  UWSASIM;  /* OPERATORS - nil -> mode */
A68_426  AXSASIM;  /* procedure value */
A68_449  BXSASIM;  /* avoid structure result */
A68_449  CXSASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_449  DXSASIM;  /* OPERATORS - assign op */
A68_448  EXSASIM;  /* clause result */
A_PROC_ENTRY(make_31);
RSCAOST_makeid( CWSASIM, &DWSASIM );
AWSASIM.Overloaded_biop_name = DWSASIM;
 /* line 1021: */
{ 
YLFASIM_label( KWSASIM, &LWSASIM );
IWSASIM.Biop_name = LWSASIM;
QWSASIM.data[0] = AIQASIM_bs;
QWSASIM.data[1] = AIQASIM_bs;
NWSASIM_generator( A68_FALSE, &RWSASIM );
TWSASIM = A_HISVEC(SWSASIM,QWSASIM,2,A68_INT ) ;
A_VASSIGN2(TWSASIM,RWSASIM,A68_INT ) ;
IWSASIM.Inputs = RWSASIM;
 /* line 1022: */
IWSASIM.No_of_macparams = 0;
IWSASIM.Output.Output_type_sort = BIQASIM_tv;
IWSASIM.Output.Limit_save = A68_FALSE;
IWSASIM.Output.Struct_components = A_R1VAC(UWSASIM);
 /* line 1023: */
IWSASIM.Pointer = A68_FALSE;
 /* line 1025: */
 /* line 1026: */
AXSASIM.fn.fn_global = YWSASIM_anonymous;
AXSASIM.nonlocals = A68_NIL;
IWSASIM.Limit_check = AXSASIM;
} 
FWSASIM_generator( A68_FALSE, &BXSASIM );
DXSASIM = A_HVEC(CXSASIM,IWSASIM,A68_442 ) ;
A_VASSIGN2(DXSASIM,BXSASIM,A68_442 ) ;
AWSASIM.Biops = BXSASIM;
EXSASIM = AWSASIM;
A_PROC_EXIT(make_31);
*ReturnedValue = (EXSASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  FXSASIM_make_32(A68_448  *ReturnedValue)
{ 
A68_448  GXSASIM;  /* collateral clause result */
A68_VC  JXSASIM;  /* avoid structure result */
A68_442  OXSASIM;  /* collateral clause result */
A68_357  RXSASIM;  /* avoid structure result */
A68_432  WXSASIM;  /* collateral clause result */
A68_32  XXSASIM;  /* avoid structure result */
A68_32  YXSASIM;  /* OPERATORS - istruct -> vector */
A68_32  ZXSASIM;  /* OPERATORS - assign op */
A68_428  AYSASIM;  /* OPERATORS - nil -> mode */
A68_426  GYSASIM;  /* procedure value */
A68_449  HYSASIM;  /* avoid structure result */
A68_449  IYSASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_449  JYSASIM;  /* OPERATORS - assign op */
A68_448  KYSASIM;  /* clause result */
A_PROC_ENTRY(make_32);
RSCAOST_makeid( IXSASIM, &JXSASIM );
GXSASIM.Overloaded_biop_name = JXSASIM;
 /* line 1031: */
{ 
YLFASIM_label( QXSASIM, &RXSASIM );
OXSASIM.Biop_name = RXSASIM;
WXSASIM.data[0] = AIQASIM_bs;
WXSASIM.data[1] = AIQASIM_bs;
TXSASIM_generator( A68_FALSE, &XXSASIM );
ZXSASIM = A_HISVEC(YXSASIM,WXSASIM,2,A68_INT ) ;
A_VASSIGN2(ZXSASIM,XXSASIM,A68_INT ) ;
OXSASIM.Inputs = XXSASIM;
 /* line 1032: */
OXSASIM.No_of_macparams = 0;
OXSASIM.Output.Output_type_sort = BIQASIM_tv;
OXSASIM.Output.Limit_save = A68_FALSE;
OXSASIM.Output.Struct_components = A_R1VAC(AYSASIM);
 /* line 1033: */
OXSASIM.Pointer = A68_FALSE;
 /* line 1035: */
 /* line 1036: */
GYSASIM.fn.fn_global = EYSASIM_anonymous;
GYSASIM.nonlocals = A68_NIL;
OXSASIM.Limit_check = GYSASIM;
} 
LXSASIM_generator( A68_FALSE, &HYSASIM );
JYSASIM = A_HVEC(IYSASIM,OXSASIM,A68_442 ) ;
A_VASSIGN2(JYSASIM,HYSASIM,A68_442 ) ;
GXSASIM.Biops = HYSASIM;
KYSASIM = GXSASIM;
A_PROC_EXIT(make_32);
*ReturnedValue = (KYSASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  LYSASIM_make_33(A68_448  *ReturnedValue)
{ 
A68_448  MYSASIM;  /* collateral clause result */
A68_VC  PYSASIM;  /* avoid structure result */
A68_442  UYSASIM;  /* collateral clause result */
A68_357  XYSASIM;  /* avoid structure result */
A68_432  CZSASIM;  /* collateral clause result */
A68_32  DZSASIM;  /* avoid structure result */
A68_32  EZSASIM;  /* OPERATORS - istruct -> vector */
A68_32  FZSASIM;  /* OPERATORS - assign op */
A68_428  GZSASIM;  /* OPERATORS - nil -> mode */
A68_426  MZSASIM;  /* procedure value */
A68_449  NZSASIM;  /* avoid structure result */
A68_449  OZSASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_449  PZSASIM;  /* OPERATORS - assign op */
A68_448  QZSASIM;  /* clause result */
A_PROC_ENTRY(make_33);
RSCAOST_makeid( OYSASIM, &PYSASIM );
MYSASIM.Overloaded_biop_name = PYSASIM;
 /* line 1041: */
{ 
YLFASIM_label( WYSASIM, &XYSASIM );
UYSASIM.Biop_name = XYSASIM;
CZSASIM.data[0] = AIQASIM_bs;
CZSASIM.data[1] = AIQASIM_bs;
ZYSASIM_generator( A68_FALSE, &DZSASIM );
FZSASIM = A_HISVEC(EZSASIM,CZSASIM,2,A68_INT ) ;
A_VASSIGN2(FZSASIM,DZSASIM,A68_INT ) ;
UYSASIM.Inputs = DZSASIM;
 /* line 1042: */
UYSASIM.No_of_macparams = 0;
UYSASIM.Output.Output_type_sort = BIQASIM_tv;
UYSASIM.Output.Limit_save = A68_FALSE;
UYSASIM.Output.Struct_components = A_R1VAC(GZSASIM);
 /* line 1043: */
UYSASIM.Pointer = A68_FALSE;
 /* line 1045: */
 /* line 1046: */
MZSASIM.fn.fn_global = KZSASIM_anonymous;
MZSASIM.nonlocals = A68_NIL;
UYSASIM.Limit_check = MZSASIM;
} 
RYSASIM_generator( A68_FALSE, &NZSASIM );
PZSASIM = A_HVEC(OZSASIM,UYSASIM,A68_442 ) ;
A_VASSIGN2(PZSASIM,NZSASIM,A68_442 ) ;
MYSASIM.Biops = NZSASIM;
QZSASIM = MYSASIM;
A_PROC_EXIT(make_33);
*ReturnedValue = (QZSASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  RZSASIM_make_34(A68_448  *ReturnedValue)
{ 
A68_448  SZSASIM;  /* collateral clause result */
A68_VC  VZSASIM;  /* avoid structure result */
A68_442  AATASIM;  /* collateral clause result */
A68_357  DATASIM;  /* avoid structure result */
A68_432  IATASIM;  /* collateral clause result */
A68_32  JATASIM;  /* avoid structure result */
A68_32  KATASIM;  /* OPERATORS - istruct -> vector */
A68_32  LATASIM;  /* OPERATORS - assign op */
A68_428  MATASIM;  /* OPERATORS - nil -> mode */
A68_426  SATASIM;  /* procedure value */
A68_449  TATASIM;  /* avoid structure result */
A68_449  UATASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_449  VATASIM;  /* OPERATORS - assign op */
A68_448  WATASIM;  /* clause result */
A_PROC_ENTRY(make_34);
RSCAOST_makeid( UZSASIM, &VZSASIM );
SZSASIM.Overloaded_biop_name = VZSASIM;
 /* line 1051: */
{ 
YLFASIM_label( CATASIM, &DATASIM );
AATASIM.Biop_name = DATASIM;
IATASIM.data[0] = AIQASIM_bs;
IATASIM.data[1] = AIQASIM_bs;
FATASIM_generator( A68_FALSE, &JATASIM );
LATASIM = A_HISVEC(KATASIM,IATASIM,2,A68_INT ) ;
A_VASSIGN2(LATASIM,JATASIM,A68_INT ) ;
AATASIM.Inputs = JATASIM;
 /* line 1052: */
AATASIM.No_of_macparams = 0;
AATASIM.Output.Output_type_sort = BIQASIM_tv;
AATASIM.Output.Limit_save = A68_FALSE;
AATASIM.Output.Struct_components = A_R1VAC(MATASIM);
 /* line 1053: */
AATASIM.Pointer = A68_FALSE;
 /* line 1055: */
 /* line 1056: */
SATASIM.fn.fn_global = QATASIM_anonymous;
SATASIM.nonlocals = A68_NIL;
AATASIM.Limit_check = SATASIM;
} 
XZSASIM_generator( A68_FALSE, &TATASIM );
VATASIM = A_HVEC(UATASIM,AATASIM,A68_442 ) ;
A_VASSIGN2(VATASIM,TATASIM,A68_442 ) ;
SZSASIM.Biops = TATASIM;
WATASIM = SZSASIM;
A_PROC_EXIT(make_34);
*ReturnedValue = (WATASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  XATASIM_make_35(A68_448  *ReturnedValue)
{ 
A68_448  YATASIM;  /* collateral clause result */
A68_VC  BBTASIM;  /* avoid structure result */
A68_442  GBTASIM;  /* collateral clause result */
A68_357  JBTASIM;  /* avoid structure result */
A68_432  OBTASIM;  /* collateral clause result */
A68_32  PBTASIM;  /* avoid structure result */
A68_32  QBTASIM;  /* OPERATORS - istruct -> vector */
A68_32  RBTASIM;  /* OPERATORS - assign op */
A68_428  SBTASIM;  /* OPERATORS - nil -> mode */
A68_426  YBTASIM;  /* procedure value */
A68_449  ZBTASIM;  /* avoid structure result */
A68_449  ACTASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_449  BCTASIM;  /* OPERATORS - assign op */
A68_448  CCTASIM;  /* clause result */
A_PROC_ENTRY(make_35);
RSCAOST_makeid( ABTASIM, &BBTASIM );
YATASIM.Overloaded_biop_name = BBTASIM;
 /* line 1061: */
{ 
YLFASIM_label( IBTASIM, &JBTASIM );
GBTASIM.Biop_name = JBTASIM;
OBTASIM.data[0] = AIQASIM_bs;
OBTASIM.data[1] = AIQASIM_bs;
LBTASIM_generator( A68_FALSE, &PBTASIM );
RBTASIM = A_HISVEC(QBTASIM,OBTASIM,2,A68_INT ) ;
A_VASSIGN2(RBTASIM,PBTASIM,A68_INT ) ;
GBTASIM.Inputs = PBTASIM;
 /* line 1062: */
GBTASIM.No_of_macparams = 0;
GBTASIM.Output.Output_type_sort = BIQASIM_tv;
GBTASIM.Output.Limit_save = A68_FALSE;
GBTASIM.Output.Struct_components = A_R1VAC(SBTASIM);
 /* line 1063: */
GBTASIM.Pointer = A68_FALSE;
 /* line 1065: */
 /* line 1066: */
YBTASIM.fn.fn_global = WBTASIM_anonymous;
YBTASIM.nonlocals = A68_NIL;
GBTASIM.Limit_check = YBTASIM;
} 
DBTASIM_generator( A68_FALSE, &ZBTASIM );
BCTASIM = A_HVEC(ACTASIM,GBTASIM,A68_442 ) ;
A_VASSIGN2(BCTASIM,ZBTASIM,A68_442 ) ;
YATASIM.Biops = ZBTASIM;
CCTASIM = YATASIM;
A_PROC_EXIT(make_35);
*ReturnedValue = (CCTASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  DCTASIM_make_36(A68_448  *ReturnedValue)
{ 
A68_448  ECTASIM;  /* collateral clause result */
A68_VC  HCTASIM;  /* avoid structure result */
A68_442  MCTASIM;  /* collateral clause result */
A68_357  PCTASIM;  /* avoid structure result */
A68_432  UCTASIM;  /* collateral clause result */
A68_32  VCTASIM;  /* avoid structure result */
A68_32  WCTASIM;  /* OPERATORS - istruct -> vector */
A68_32  XCTASIM;  /* OPERATORS - assign op */
A68_428  YCTASIM;  /* OPERATORS - nil -> mode */
A68_426  EDTASIM;  /* procedure value */
A68_449  FDTASIM;  /* avoid structure result */
A68_449  GDTASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_449  HDTASIM;  /* OPERATORS - assign op */
A68_448  IDTASIM;  /* clause result */
A_PROC_ENTRY(make_36);
RSCAOST_makeid( GCTASIM, &HCTASIM );
ECTASIM.Overloaded_biop_name = HCTASIM;
 /* line 1071: */
{ 
YLFASIM_label( OCTASIM, &PCTASIM );
MCTASIM.Biop_name = PCTASIM;
UCTASIM.data[0] = AIQASIM_bs;
UCTASIM.data[1] = AIQASIM_bs;
RCTASIM_generator( A68_FALSE, &VCTASIM );
XCTASIM = A_HISVEC(WCTASIM,UCTASIM,2,A68_INT ) ;
A_VASSIGN2(XCTASIM,VCTASIM,A68_INT ) ;
MCTASIM.Inputs = VCTASIM;
 /* line 1072: */
MCTASIM.No_of_macparams = 0;
MCTASIM.Output.Output_type_sort = BIQASIM_tv;
MCTASIM.Output.Limit_save = A68_FALSE;
MCTASIM.Output.Struct_components = A_R1VAC(YCTASIM);
 /* line 1073: */
MCTASIM.Pointer = A68_FALSE;
 /* line 1075: */
 /* line 1076: */
EDTASIM.fn.fn_global = CDTASIM_anonymous;
EDTASIM.nonlocals = A68_NIL;
MCTASIM.Limit_check = EDTASIM;
} 
JCTASIM_generator( A68_FALSE, &FDTASIM );
HDTASIM = A_HVEC(GDTASIM,MCTASIM,A68_442 ) ;
A_VASSIGN2(HDTASIM,FDTASIM,A68_442 ) ;
ECTASIM.Biops = FDTASIM;
IDTASIM = ECTASIM;
A_PROC_EXIT(make_36);
*ReturnedValue = (IDTASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  JDTASIM_make_37(A68_448  *ReturnedValue)
{ 
A68_448  KDTASIM;  /* collateral clause result */
A68_VC  NDTASIM;  /* avoid structure result */
A68_442  SDTASIM;  /* collateral clause result */
A68_357  VDTASIM;  /* avoid structure result */
A68_432  AETASIM;  /* collateral clause result */
A68_32  BETASIM;  /* avoid structure result */
A68_32  CETASIM;  /* OPERATORS - istruct -> vector */
A68_32  DETASIM;  /* OPERATORS - assign op */
A68_428  EETASIM;  /* OPERATORS - nil -> mode */
A68_426  KETASIM;  /* procedure value */
A68_449  LETASIM;  /* avoid structure result */
A68_449  METASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_449  NETASIM;  /* OPERATORS - assign op */
A68_448  OETASIM;  /* clause result */
A_PROC_ENTRY(make_37);
RSCAOST_makeid( MDTASIM, &NDTASIM );
KDTASIM.Overloaded_biop_name = NDTASIM;
 /* line 1081: */
{ 
YLFASIM_label( UDTASIM, &VDTASIM );
SDTASIM.Biop_name = VDTASIM;
AETASIM.data[0] = AIQASIM_bs;
AETASIM.data[1] = AIQASIM_bs;
XDTASIM_generator( A68_FALSE, &BETASIM );
DETASIM = A_HISVEC(CETASIM,AETASIM,2,A68_INT ) ;
A_VASSIGN2(DETASIM,BETASIM,A68_INT ) ;
SDTASIM.Inputs = BETASIM;
 /* line 1082: */
SDTASIM.No_of_macparams = 0;
SDTASIM.Output.Output_type_sort = BIQASIM_tv;
SDTASIM.Output.Limit_save = A68_FALSE;
SDTASIM.Output.Struct_components = A_R1VAC(EETASIM);
 /* line 1083: */
SDTASIM.Pointer = A68_FALSE;
 /* line 1085: */
 /* line 1086: */
KETASIM.fn.fn_global = IETASIM_anonymous;
KETASIM.nonlocals = A68_NIL;
SDTASIM.Limit_check = KETASIM;
} 
PDTASIM_generator( A68_FALSE, &LETASIM );
NETASIM = A_HVEC(METASIM,SDTASIM,A68_442 ) ;
A_VASSIGN2(NETASIM,LETASIM,A68_442 ) ;
KDTASIM.Biops = LETASIM;
OETASIM = KDTASIM;
A_PROC_EXIT(make_37);
*ReturnedValue = (OETASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  PETASIM_make_38(A68_448  *ReturnedValue)
{ 
A68_448  QETASIM;  /* collateral clause result */
A68_VC  TETASIM;  /* avoid structure result */
A68_442  YETASIM;  /* collateral clause result */
A68_357  BFTASIM;  /* avoid structure result */
A68_432  GFTASIM;  /* collateral clause result */
A68_32  HFTASIM;  /* avoid structure result */
A68_32  IFTASIM;  /* OPERATORS - istruct -> vector */
A68_32  JFTASIM;  /* OPERATORS - assign op */
A68_428  KFTASIM;  /* OPERATORS - nil -> mode */
A68_426  QFTASIM;  /* procedure value */
A68_449  RFTASIM;  /* avoid structure result */
A68_449  SFTASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_449  TFTASIM;  /* OPERATORS - assign op */
A68_448  UFTASIM;  /* clause result */
A_PROC_ENTRY(make_38);
RSCAOST_makeid( SETASIM, &TETASIM );
QETASIM.Overloaded_biop_name = TETASIM;
 /* line 1091: */
{ 
YLFASIM_label( AFTASIM, &BFTASIM );
YETASIM.Biop_name = BFTASIM;
GFTASIM.data[0] = AIQASIM_bs;
GFTASIM.data[1] = AIQASIM_bs;
DFTASIM_generator( A68_FALSE, &HFTASIM );
JFTASIM = A_HISVEC(IFTASIM,GFTASIM,2,A68_INT ) ;
A_VASSIGN2(JFTASIM,HFTASIM,A68_INT ) ;
YETASIM.Inputs = HFTASIM;
 /* line 1092: */
YETASIM.No_of_macparams = 0;
YETASIM.Output.Output_type_sort = BIQASIM_tv;
YETASIM.Output.Limit_save = A68_FALSE;
YETASIM.Output.Struct_components = A_R1VAC(KFTASIM);
 /* line 1093: */
YETASIM.Pointer = A68_FALSE;
 /* line 1095: */
 /* line 1096: */
QFTASIM.fn.fn_global = OFTASIM_anonymous;
QFTASIM.nonlocals = A68_NIL;
YETASIM.Limit_check = QFTASIM;
} 
VETASIM_generator( A68_FALSE, &RFTASIM );
TFTASIM = A_HVEC(SFTASIM,YETASIM,A68_442 ) ;
A_VASSIGN2(TFTASIM,RFTASIM,A68_442 ) ;
QETASIM.Biops = RFTASIM;
UFTASIM = QETASIM;
A_PROC_EXIT(make_38);
*ReturnedValue = (UFTASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  VFTASIM_make_39(A68_448  *ReturnedValue)
{ 
A68_448  WFTASIM;  /* collateral clause result */
A68_VC  ZFTASIM;  /* avoid structure result */
A68_442  EGTASIM;  /* collateral clause result */
A68_357  HGTASIM;  /* avoid structure result */
A68_432  MGTASIM;  /* collateral clause result */
A68_32  NGTASIM;  /* avoid structure result */
A68_32  OGTASIM;  /* OPERATORS - istruct -> vector */
A68_32  PGTASIM;  /* OPERATORS - assign op */
A68_428  QGTASIM;  /* OPERATORS - nil -> mode */
A68_426  WGTASIM;  /* procedure value */
A68_449  XGTASIM;  /* avoid structure result */
A68_449  YGTASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_449  ZGTASIM;  /* OPERATORS - assign op */
A68_448  AHTASIM;  /* clause result */
A_PROC_ENTRY(make_39);
RSCAOST_makeid( YFTASIM, &ZFTASIM );
WFTASIM.Overloaded_biop_name = ZFTASIM;
 /* line 1101: */
{ 
YLFASIM_label( GGTASIM, &HGTASIM );
EGTASIM.Biop_name = HGTASIM;
MGTASIM.data[0] = AIQASIM_bs;
MGTASIM.data[1] = AIQASIM_bs;
JGTASIM_generator( A68_FALSE, &NGTASIM );
PGTASIM = A_HISVEC(OGTASIM,MGTASIM,2,A68_INT ) ;
A_VASSIGN2(PGTASIM,NGTASIM,A68_INT ) ;
EGTASIM.Inputs = NGTASIM;
 /* line 1102: */
EGTASIM.No_of_macparams = 0;
EGTASIM.Output.Output_type_sort = BIQASIM_tv;
EGTASIM.Output.Limit_save = A68_FALSE;
EGTASIM.Output.Struct_components = A_R1VAC(QGTASIM);
 /* line 1103: */
EGTASIM.Pointer = A68_FALSE;
 /* line 1105: */
 /* line 1106: */
WGTASIM.fn.fn_global = UGTASIM_anonymous;
WGTASIM.nonlocals = A68_NIL;
EGTASIM.Limit_check = WGTASIM;
} 
BGTASIM_generator( A68_FALSE, &XGTASIM );
ZGTASIM = A_HVEC(YGTASIM,EGTASIM,A68_442 ) ;
A_VASSIGN2(ZGTASIM,XGTASIM,A68_442 ) ;
WFTASIM.Biops = XGTASIM;
AHTASIM = WFTASIM;
A_PROC_EXIT(make_39);
*ReturnedValue = (AHTASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  BHTASIM_make_40(A68_448  *ReturnedValue)
{ 
A68_448  CHTASIM;  /* collateral clause result */
A68_VC  FHTASIM;  /* avoid structure result */
A68_442  KHTASIM;  /* collateral clause result */
A68_357  NHTASIM;  /* avoid structure result */
A68_432  SHTASIM;  /* collateral clause result */
A68_32  THTASIM;  /* avoid structure result */
A68_32  UHTASIM;  /* OPERATORS - istruct -> vector */
A68_32  VHTASIM;  /* OPERATORS - assign op */
A68_428  WHTASIM;  /* OPERATORS - nil -> mode */
A68_426  CITASIM;  /* procedure value */
A68_449  DITASIM;  /* avoid structure result */
A68_449  EITASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_449  FITASIM;  /* OPERATORS - assign op */
A68_448  GITASIM;  /* clause result */
A_PROC_ENTRY(make_40);
RSCAOST_makeid( EHTASIM, &FHTASIM );
CHTASIM.Overloaded_biop_name = FHTASIM;
 /* line 1111: */
{ 
YLFASIM_label( MHTASIM, &NHTASIM );
KHTASIM.Biop_name = NHTASIM;
SHTASIM.data[0] = AIQASIM_bs;
SHTASIM.data[1] = AIQASIM_bs;
PHTASIM_generator( A68_FALSE, &THTASIM );
VHTASIM = A_HISVEC(UHTASIM,SHTASIM,2,A68_INT ) ;
A_VASSIGN2(VHTASIM,THTASIM,A68_INT ) ;
KHTASIM.Inputs = THTASIM;
 /* line 1112: */
KHTASIM.No_of_macparams = 0;
KHTASIM.Output.Output_type_sort = BIQASIM_tv;
KHTASIM.Output.Limit_save = A68_FALSE;
KHTASIM.Output.Struct_components = A_R1VAC(WHTASIM);
 /* line 1113: */
KHTASIM.Pointer = A68_FALSE;
 /* line 1115: */
 /* line 1116: */
CITASIM.fn.fn_global = AITASIM_anonymous;
CITASIM.nonlocals = A68_NIL;
KHTASIM.Limit_check = CITASIM;
} 
HHTASIM_generator( A68_FALSE, &DITASIM );
FITASIM = A_HVEC(EITASIM,KHTASIM,A68_442 ) ;
A_VASSIGN2(FITASIM,DITASIM,A68_442 ) ;
CHTASIM.Biops = DITASIM;
GITASIM = CHTASIM;
A_PROC_EXIT(make_40);
*ReturnedValue = (GITASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  HITASIM_make_41(A68_448  *ReturnedValue)
{ 
A68_448  IITASIM;  /* collateral clause result */
A68_VC  LITASIM;  /* avoid structure result */
A68_458  QITASIM;  /* collateral clause result */
A68_357  TITASIM;  /* avoid structure result */
A68_32  YITASIM;  /* avoid structure result */
A68_32  ZITASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_32  AJTASIM;  /* OPERATORS - assign op */
A68_467  FJTASIM;  /* collateral clause result */
A68_428  GJTASIM;  /* OPERATORS - nil -> mode */
A68_428  HJTASIM;  /* OPERATORS - nil -> mode */
A68_465  IJTASIM;  /* avoid structure result */
A68_465  JJTASIM;  /* OPERATORS - istruct -> vector */
A68_465  KJTASIM;  /* OPERATORS - assign op */
A68_428  LJTASIM;  /* OPERATORS - vector -> row */
A68_426  RJTASIM;  /* procedure value */
A68_357  UJTASIM;  /* avoid structure result */
A68_32  ZJTASIM;  /* avoid structure result */
A68_32  AKTASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_32  BKTASIM;  /* OPERATORS - assign op */
A68_467  GKTASIM;  /* collateral clause result */
A68_428  HKTASIM;  /* OPERATORS - nil -> mode */
A68_428  IKTASIM;  /* OPERATORS - nil -> mode */
A68_465  JKTASIM;  /* avoid structure result */
A68_465  KKTASIM;  /* OPERATORS - istruct -> vector */
A68_465  LKTASIM;  /* OPERATORS - assign op */
A68_428  MKTASIM;  /* OPERATORS - vector -> row */
A68_426  SKTASIM;  /* procedure value */
A68_449  TKTASIM;  /* avoid structure result */
A68_449  UKTASIM;  /* OPERATORS - istruct -> vector */
A68_449  VKTASIM;  /* OPERATORS - assign op */
A68_448  WKTASIM;  /* clause result */
A_PROC_ENTRY(make_41);
RSCAOST_makeid( KITASIM, &LITASIM );
IITASIM.Overloaded_biop_name = LITASIM;
 /* line 1120: */
 /* line 1121: */
YLFASIM_label( SITASIM, &TITASIM );
QITASIM.data[0].Biop_name = TITASIM;
VITASIM_generator( A68_FALSE, &YITASIM );
AJTASIM = A_HVEC(ZITASIM,AIQASIM_bs,A68_INT ) ;
A_VASSIGN2(AJTASIM,YITASIM,A68_INT ) ;
QITASIM.data[0].Inputs = YITASIM;
 /* line 1122: */
QITASIM.data[0].No_of_macparams = 0;
QITASIM.data[0].Output.Output_type_sort = IIQASIM_struct;
QITASIM.data[0].Output.Limit_save = A68_FALSE;
 /* line 1123: */
FJTASIM.data[0].Output_type_sort = BIQASIM_tv;
FJTASIM.data[0].Limit_save = A68_FALSE;
FJTASIM.data[0].Struct_components = A_R1VAC(GJTASIM);
FJTASIM.data[1].Output_type_sort = FIQASIM_ds;
FJTASIM.data[1].Limit_save = A68_TRUE;
FJTASIM.data[1].Struct_components = A_R1VAC(HJTASIM);
CJTASIM_generator( A68_FALSE, &IJTASIM );
KJTASIM = A_HISVEC(JJTASIM,FJTASIM,2,A68_427 ) ;
A_VASSIGN2(KJTASIM,IJTASIM,A68_427 ) ;
QITASIM.data[0].Output.Struct_components = A_VECARR(IJTASIM,LJTASIM);
 /* line 1124: */
QITASIM.data[0].Pointer = A68_TRUE;
 /* line 1126: */
RJTASIM.fn.fn_global = PJTASIM_anonymous;
RJTASIM.nonlocals = A68_NIL;
QITASIM.data[0].Limit_check = RJTASIM;
YLFASIM_label( TJTASIM, &UJTASIM );
QITASIM.data[1].Biop_name = UJTASIM;
WJTASIM_generator( A68_FALSE, &ZJTASIM );
BKTASIM = A_HVEC(AKTASIM,FIQASIM_ds,A68_INT ) ;
A_VASSIGN2(BKTASIM,ZJTASIM,A68_INT ) ;
QITASIM.data[1].Inputs = ZJTASIM;
 /* line 1127: */
QITASIM.data[1].No_of_macparams = 0;
QITASIM.data[1].Output.Output_type_sort = IIQASIM_struct;
QITASIM.data[1].Output.Limit_save = A68_FALSE;
 /* line 1128: */
GKTASIM.data[0].Output_type_sort = BIQASIM_tv;
GKTASIM.data[0].Limit_save = A68_FALSE;
GKTASIM.data[0].Struct_components = A_R1VAC(HKTASIM);
GKTASIM.data[1].Output_type_sort = AIQASIM_bs;
GKTASIM.data[1].Limit_save = A68_TRUE;
GKTASIM.data[1].Struct_components = A_R1VAC(IKTASIM);
DKTASIM_generator( A68_FALSE, &JKTASIM );
LKTASIM = A_HISVEC(KKTASIM,GKTASIM,2,A68_427 ) ;
A_VASSIGN2(LKTASIM,JKTASIM,A68_427 ) ;
QITASIM.data[1].Output.Struct_components = A_VECARR(JKTASIM,MKTASIM);
 /* line 1129: */
QITASIM.data[1].Pointer = A68_TRUE;
 /* line 1131: */
 /* line 1132: */
SKTASIM.fn.fn_global = QKTASIM_anonymous;
SKTASIM.nonlocals = A68_NIL;
QITASIM.data[1].Limit_check = SKTASIM;
NITASIM_generator( A68_FALSE, &TKTASIM );
VKTASIM = A_HISVEC(UKTASIM,QITASIM,2,A68_442 ) ;
A_VASSIGN2(VKTASIM,TKTASIM,A68_442 ) ;
IITASIM.Biops = TKTASIM;
WKTASIM = IITASIM;
A_PROC_EXIT(make_41);
*ReturnedValue = (WKTASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  XKTASIM_make_42(A68_448  *ReturnedValue)
{ 
A68_448  YKTASIM;  /* collateral clause result */
A68_VC  BLTASIM;  /* avoid structure result */
A68_458  GLTASIM;  /* collateral clause result */
A68_357  JLTASIM;  /* avoid structure result */
A68_432  OLTASIM;  /* collateral clause result */
A68_32  PLTASIM;  /* avoid structure result */
A68_32  QLTASIM;  /* OPERATORS - istruct -> vector */
A68_32  RLTASIM;  /* OPERATORS - assign op */
A68_467  WLTASIM;  /* collateral clause result */
A68_428  XLTASIM;  /* OPERATORS - nil -> mode */
A68_473  CMTASIM;  /* collateral clause result */
A68_428  DMTASIM;  /* OPERATORS - nil -> mode */
A68_428  EMTASIM;  /* OPERATORS - nil -> mode */
A68_428  FMTASIM;  /* OPERATORS - nil -> mode */
A68_465  GMTASIM;  /* avoid structure result */
A68_465  HMTASIM;  /* OPERATORS - istruct -> vector */
A68_465  IMTASIM;  /* OPERATORS - assign op */
A68_428  JMTASIM;  /* OPERATORS - vector -> row */
A68_465  KMTASIM;  /* avoid structure result */
A68_465  LMTASIM;  /* OPERATORS - istruct -> vector */
A68_465  MMTASIM;  /* OPERATORS - assign op */
A68_428  NMTASIM;  /* OPERATORS - vector -> row */
A68_426  TMTASIM;  /* procedure value */
A68_357  WMTASIM;  /* avoid structure result */
A68_432  BNTASIM;  /* collateral clause result */
A68_32  CNTASIM;  /* avoid structure result */
A68_32  DNTASIM;  /* OPERATORS - istruct -> vector */
A68_32  ENTASIM;  /* OPERATORS - assign op */
A68_467  JNTASIM;  /* collateral clause result */
A68_428  KNTASIM;  /* OPERATORS - nil -> mode */
A68_473  PNTASIM;  /* collateral clause result */
A68_428  QNTASIM;  /* OPERATORS - nil -> mode */
A68_428  RNTASIM;  /* OPERATORS - nil -> mode */
A68_428  SNTASIM;  /* OPERATORS - nil -> mode */
A68_465  TNTASIM;  /* avoid structure result */
A68_465  UNTASIM;  /* OPERATORS - istruct -> vector */
A68_465  VNTASIM;  /* OPERATORS - assign op */
A68_428  WNTASIM;  /* OPERATORS - vector -> row */
A68_465  XNTASIM;  /* avoid structure result */
A68_465  YNTASIM;  /* OPERATORS - istruct -> vector */
A68_465  ZNTASIM;  /* OPERATORS - assign op */
A68_428  AOTASIM;  /* OPERATORS - vector -> row */
A68_426  GOTASIM;  /* procedure value */
A68_449  HOTASIM;  /* avoid structure result */
A68_449  IOTASIM;  /* OPERATORS - istruct -> vector */
A68_449  JOTASIM;  /* OPERATORS - assign op */
A68_448  KOTASIM;  /* clause result */
A_PROC_ENTRY(make_42);
RSCAOST_makeid( ALTASIM, &BLTASIM );
YKTASIM.Overloaded_biop_name = BLTASIM;
 /* line 1136: */
 /* line 1137: */
YLFASIM_label( ILTASIM, &JLTASIM );
GLTASIM.data[0].Biop_name = JLTASIM;
OLTASIM.data[0] = AIQASIM_bs;
OLTASIM.data[1] = AIQASIM_bs;
LLTASIM_generator( A68_FALSE, &PLTASIM );
RLTASIM = A_HISVEC(QLTASIM,OLTASIM,2,A68_INT ) ;
A_VASSIGN2(RLTASIM,PLTASIM,A68_INT ) ;
GLTASIM.data[0].Inputs = PLTASIM;
 /* line 1138: */
GLTASIM.data[0].No_of_macparams = 0;
GLTASIM.data[0].Output.Output_type_sort = IIQASIM_struct;
GLTASIM.data[0].Output.Limit_save = A68_FALSE;
 /* line 1139: */
WLTASIM.data[0].Output_type_sort = BIQASIM_tv;
WLTASIM.data[0].Limit_save = A68_FALSE;
 /* line 1140: */
WLTASIM.data[0].Struct_components = A_R1VAC(XLTASIM);
WLTASIM.data[1].Output_type_sort = IIQASIM_struct;
WLTASIM.data[1].Limit_save = A68_FALSE;
 /* line 1141: */
CMTASIM.data[0].Output_type_sort = BIQASIM_tv;
CMTASIM.data[0].Limit_save = A68_FALSE;
CMTASIM.data[0].Struct_components = A_R1VAC(DMTASIM);
CMTASIM.data[1].Output_type_sort = FIQASIM_ds;
CMTASIM.data[1].Limit_save = A68_TRUE;
CMTASIM.data[1].Struct_components = A_R1VAC(EMTASIM);
CMTASIM.data[2].Output_type_sort = AIQASIM_bs;
CMTASIM.data[2].Limit_save = A68_TRUE;
CMTASIM.data[2].Struct_components = A_R1VAC(FMTASIM);
ZLTASIM_generator( A68_FALSE, &GMTASIM );
IMTASIM = A_HISVEC(HMTASIM,CMTASIM,3,A68_427 ) ;
A_VASSIGN2(IMTASIM,GMTASIM,A68_427 ) ;
WLTASIM.data[1].Struct_components = A_VECARR(GMTASIM,JMTASIM);
 /* line 1142: */
TLTASIM_generator( A68_FALSE, &KMTASIM );
MMTASIM = A_HISVEC(LMTASIM,WLTASIM,2,A68_427 ) ;
A_VASSIGN2(MMTASIM,KMTASIM,A68_427 ) ;
GLTASIM.data[0].Output.Struct_components = A_VECARR(KMTASIM,NMTASIM);
 /* line 1143: */
GLTASIM.data[0].Pointer = A68_TRUE;
 /* line 1145: */
TMTASIM.fn.fn_global = RMTASIM_anonymous;
TMTASIM.nonlocals = A68_NIL;
GLTASIM.data[0].Limit_check = TMTASIM;
YLFASIM_label( VMTASIM, &WMTASIM );
GLTASIM.data[1].Biop_name = WMTASIM;
BNTASIM.data[0] = FIQASIM_ds;
BNTASIM.data[1] = AIQASIM_bs;
YMTASIM_generator( A68_FALSE, &CNTASIM );
ENTASIM = A_HISVEC(DNTASIM,BNTASIM,2,A68_INT ) ;
A_VASSIGN2(ENTASIM,CNTASIM,A68_INT ) ;
GLTASIM.data[1].Inputs = CNTASIM;
 /* line 1146: */
GLTASIM.data[1].No_of_macparams = 0;
GLTASIM.data[1].Output.Output_type_sort = IIQASIM_struct;
GLTASIM.data[1].Output.Limit_save = A68_FALSE;
 /* line 1147: */
JNTASIM.data[0].Output_type_sort = BIQASIM_tv;
JNTASIM.data[0].Limit_save = A68_FALSE;
 /* line 1148: */
JNTASIM.data[0].Struct_components = A_R1VAC(KNTASIM);
JNTASIM.data[1].Output_type_sort = IIQASIM_struct;
JNTASIM.data[1].Limit_save = A68_FALSE;
 /* line 1149: */
PNTASIM.data[0].Output_type_sort = BIQASIM_tv;
PNTASIM.data[0].Limit_save = A68_FALSE;
PNTASIM.data[0].Struct_components = A_R1VAC(QNTASIM);
PNTASIM.data[1].Output_type_sort = AIQASIM_bs;
PNTASIM.data[1].Limit_save = A68_TRUE;
PNTASIM.data[1].Struct_components = A_R1VAC(RNTASIM);
PNTASIM.data[2].Output_type_sort = AIQASIM_bs;
PNTASIM.data[2].Limit_save = A68_TRUE;
PNTASIM.data[2].Struct_components = A_R1VAC(SNTASIM);
MNTASIM_generator( A68_FALSE, &TNTASIM );
VNTASIM = A_HISVEC(UNTASIM,PNTASIM,3,A68_427 ) ;
A_VASSIGN2(VNTASIM,TNTASIM,A68_427 ) ;
JNTASIM.data[1].Struct_components = A_VECARR(TNTASIM,WNTASIM);
 /* line 1150: */
GNTASIM_generator( A68_FALSE, &XNTASIM );
ZNTASIM = A_HISVEC(YNTASIM,JNTASIM,2,A68_427 ) ;
A_VASSIGN2(ZNTASIM,XNTASIM,A68_427 ) ;
GLTASIM.data[1].Output.Struct_components = A_VECARR(XNTASIM,AOTASIM);
 /* line 1151: */
GLTASIM.data[1].Pointer = A68_TRUE;
 /* line 1153: */
 /* line 1154: */
GOTASIM.fn.fn_global = EOTASIM_anonymous;
GOTASIM.nonlocals = A68_NIL;
GLTASIM.data[1].Limit_check = GOTASIM;
DLTASIM_generator( A68_FALSE, &HOTASIM );
JOTASIM = A_HISVEC(IOTASIM,GLTASIM,2,A68_442 ) ;
A_VASSIGN2(JOTASIM,HOTASIM,A68_442 ) ;
YKTASIM.Biops = HOTASIM;
KOTASIM = YKTASIM;
A_PROC_EXIT(make_42);
*ReturnedValue = (KOTASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  LOTASIM_make_43(A68_448  *ReturnedValue)
{ 
A68_448  MOTASIM;  /* collateral clause result */
A68_VC  POTASIM;  /* avoid structure result */
A68_442  UOTASIM;  /* collateral clause result */
A68_357  XOTASIM;  /* avoid structure result */
A68_32  CPTASIM;  /* avoid structure result */
A68_32  DPTASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_32  EPTASIM;  /* OPERATORS - assign op */
A68_428  FPTASIM;  /* OPERATORS - nil -> mode */
A68_426  LPTASIM;  /* procedure value */
A68_449  MPTASIM;  /* avoid structure result */
A68_449  NPTASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_449  OPTASIM;  /* OPERATORS - assign op */
A68_448  PPTASIM;  /* clause result */
A_PROC_ENTRY(make_43);
RSCAOST_makeid( OOTASIM, &POTASIM );
MOTASIM.Overloaded_biop_name = POTASIM;
 /* line 1159: */
{ 
YLFASIM_label( WOTASIM, &XOTASIM );
UOTASIM.Biop_name = XOTASIM;
ZOTASIM_generator( A68_FALSE, &CPTASIM );
EPTASIM = A_HVEC(DPTASIM,JIQASIM_cs,A68_INT ) ;
A_VASSIGN2(EPTASIM,CPTASIM,A68_INT ) ;
UOTASIM.Inputs = CPTASIM;
 /* line 1160: */
UOTASIM.No_of_macparams = 0;
UOTASIM.Output.Output_type_sort = GIQASIM_sr;
UOTASIM.Output.Limit_save = A68_FALSE;
UOTASIM.Output.Struct_components = A_R1VAC(FPTASIM);
 /* line 1161: */
UOTASIM.Pointer = A68_TRUE;
 /* line 1163: */
 /* line 1164: */
LPTASIM.fn.fn_global = JPTASIM_anonymous;
LPTASIM.nonlocals = A68_NIL;
UOTASIM.Limit_check = LPTASIM;
} 
ROTASIM_generator( A68_FALSE, &MPTASIM );
OPTASIM = A_HVEC(NPTASIM,UOTASIM,A68_442 ) ;
A_VASSIGN2(OPTASIM,MPTASIM,A68_442 ) ;
MOTASIM.Biops = MPTASIM;
PPTASIM = MOTASIM;
A_PROC_EXIT(make_43);
*ReturnedValue = (PPTASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  QPTASIM_make_44(A68_448  *ReturnedValue)
{ 
A68_448  RPTASIM;  /* collateral clause result */
A68_VC  UPTASIM;  /* avoid structure result */
A68_442  ZPTASIM;  /* collateral clause result */
A68_357  CQTASIM;  /* avoid structure result */
A68_32  HQTASIM;  /* avoid structure result */
A68_32  IQTASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_32  JQTASIM;  /* OPERATORS - assign op */
A68_428  KQTASIM;  /* OPERATORS - nil -> mode */
A68_426  QQTASIM;  /* procedure value */
A68_449  RQTASIM;  /* avoid structure result */
A68_449  SQTASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_449  TQTASIM;  /* OPERATORS - assign op */
A68_448  UQTASIM;  /* clause result */
A_PROC_ENTRY(make_44);
RSCAOST_makeid( TPTASIM, &UPTASIM );
RPTASIM.Overloaded_biop_name = UPTASIM;
 /* line 1169: */
{ 
YLFASIM_label( BQTASIM, &CQTASIM );
ZPTASIM.Biop_name = CQTASIM;
EQTASIM_generator( A68_FALSE, &HQTASIM );
JQTASIM = A_HVEC(IQTASIM,JIQASIM_cs,A68_INT ) ;
A_VASSIGN2(JQTASIM,HQTASIM,A68_INT ) ;
ZPTASIM.Inputs = HQTASIM;
 /* line 1170: */
ZPTASIM.No_of_macparams = 0;
ZPTASIM.Output.Output_type_sort = HIQASIM_lr;
ZPTASIM.Output.Limit_save = A68_FALSE;
ZPTASIM.Output.Struct_components = A_R1VAC(KQTASIM);
 /* line 1171: */
ZPTASIM.Pointer = A68_TRUE;
 /* line 1173: */
 /* line 1174: */
QQTASIM.fn.fn_global = OQTASIM_anonymous;
QQTASIM.nonlocals = A68_NIL;
ZPTASIM.Limit_check = QQTASIM;
} 
WPTASIM_generator( A68_FALSE, &RQTASIM );
TQTASIM = A_HVEC(SQTASIM,ZPTASIM,A68_442 ) ;
A_VASSIGN2(TQTASIM,RQTASIM,A68_442 ) ;
RPTASIM.Biops = RQTASIM;
UQTASIM = RPTASIM;
A_PROC_EXIT(make_44);
*ReturnedValue = (UQTASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  VQTASIM_make_45(A68_448  *ReturnedValue)
{ 
A68_448  WQTASIM;  /* collateral clause result */
A68_VC  ZQTASIM;  /* avoid structure result */
A68_458  ERTASIM;  /* collateral clause result */
A68_357  HRTASIM;  /* avoid structure result */
A68_32  MRTASIM;  /* avoid structure result */
A68_32  NRTASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_32  ORTASIM;  /* OPERATORS - assign op */
A68_428  PRTASIM;  /* OPERATORS - nil -> mode */
A68_426  VRTASIM;  /* procedure value */
A68_357  YRTASIM;  /* avoid structure result */
A68_32  DSTASIM;  /* avoid structure result */
A68_32  ESTASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_32  FSTASIM;  /* OPERATORS - assign op */
A68_428  GSTASIM;  /* OPERATORS - nil -> mode */
A68_426  MSTASIM;  /* procedure value */
A68_449  NSTASIM;  /* avoid structure result */
A68_449  OSTASIM;  /* OPERATORS - istruct -> vector */
A68_449  PSTASIM;  /* OPERATORS - assign op */
A68_448  QSTASIM;  /* clause result */
A_PROC_ENTRY(make_45);
RSCAOST_makeid( YQTASIM, &ZQTASIM );
WQTASIM.Overloaded_biop_name = ZQTASIM;
 /* line 1178: */
 /* line 1179: */
YLFASIM_label( GRTASIM, &HRTASIM );
ERTASIM.data[0].Biop_name = HRTASIM;
JRTASIM_generator( A68_FALSE, &MRTASIM );
ORTASIM = A_HVEC(NRTASIM,GIQASIM_sr,A68_INT ) ;
A_VASSIGN2(ORTASIM,MRTASIM,A68_INT ) ;
ERTASIM.data[0].Inputs = MRTASIM;
 /* line 1180: */
ERTASIM.data[0].No_of_macparams = 0;
ERTASIM.data[0].Output.Output_type_sort = JIQASIM_cs;
ERTASIM.data[0].Output.Limit_save = A68_TRUE;
ERTASIM.data[0].Output.Struct_components = A_R1VAC(PRTASIM);
 /* line 1181: */
ERTASIM.data[0].Pointer = A68_TRUE;
 /* line 1183: */
VRTASIM.fn.fn_global = TRTASIM_anonymous;
VRTASIM.nonlocals = A68_NIL;
ERTASIM.data[0].Limit_check = VRTASIM;
YLFASIM_label( XRTASIM, &YRTASIM );
ERTASIM.data[1].Biop_name = YRTASIM;
ASTASIM_generator( A68_FALSE, &DSTASIM );
FSTASIM = A_HVEC(ESTASIM,HIQASIM_lr,A68_INT ) ;
A_VASSIGN2(FSTASIM,DSTASIM,A68_INT ) ;
ERTASIM.data[1].Inputs = DSTASIM;
 /* line 1184: */
ERTASIM.data[1].No_of_macparams = 0;
ERTASIM.data[1].Output.Output_type_sort = JIQASIM_cs;
ERTASIM.data[1].Output.Limit_save = A68_TRUE;
ERTASIM.data[1].Output.Struct_components = A_R1VAC(GSTASIM);
 /* line 1185: */
ERTASIM.data[1].Pointer = A68_TRUE;
 /* line 1187: */
 /* line 1188: */
MSTASIM.fn.fn_global = KSTASIM_anonymous;
MSTASIM.nonlocals = A68_NIL;
ERTASIM.data[1].Limit_check = MSTASIM;
BRTASIM_generator( A68_FALSE, &NSTASIM );
PSTASIM = A_HISVEC(OSTASIM,ERTASIM,2,A68_442 ) ;
A_VASSIGN2(PSTASIM,NSTASIM,A68_442 ) ;
WQTASIM.Biops = NSTASIM;
QSTASIM = WQTASIM;
A_PROC_EXIT(make_45);
*ReturnedValue = (QSTASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  RSTASIM_make_46(A68_448  *ReturnedValue)
{ 
A68_448  SSTASIM;  /* collateral clause result */
A68_VC  VSTASIM;  /* avoid structure result */
A68_458  ATTASIM;  /* collateral clause result */
A68_357  DTTASIM;  /* avoid structure result */
A68_432  ITTASIM;  /* collateral clause result */
A68_32  JTTASIM;  /* avoid structure result */
A68_32  KTTASIM;  /* OPERATORS - istruct -> vector */
A68_32  LTTASIM;  /* OPERATORS - assign op */
A68_467  QTTASIM;  /* collateral clause result */
A68_428  RTTASIM;  /* OPERATORS - nil -> mode */
A68_428  STTASIM;  /* OPERATORS - nil -> mode */
A68_465  TTTASIM;  /* avoid structure result */
A68_465  UTTASIM;  /* OPERATORS - istruct -> vector */
A68_465  VTTASIM;  /* OPERATORS - assign op */
A68_428  WTTASIM;  /* OPERATORS - vector -> row */
A68_426  CUTASIM;  /* procedure value */
A68_357  FUTASIM;  /* avoid structure result */
A68_432  KUTASIM;  /* collateral clause result */
A68_32  LUTASIM;  /* avoid structure result */
A68_32  MUTASIM;  /* OPERATORS - istruct -> vector */
A68_32  NUTASIM;  /* OPERATORS - assign op */
A68_467  SUTASIM;  /* collateral clause result */
A68_428  TUTASIM;  /* OPERATORS - nil -> mode */
A68_428  UUTASIM;  /* OPERATORS - nil -> mode */
A68_465  VUTASIM;  /* avoid structure result */
A68_465  WUTASIM;  /* OPERATORS - istruct -> vector */
A68_465  XUTASIM;  /* OPERATORS - assign op */
A68_428  YUTASIM;  /* OPERATORS - vector -> row */
A68_426  EVTASIM;  /* procedure value */
A68_449  FVTASIM;  /* avoid structure result */
A68_449  GVTASIM;  /* OPERATORS - istruct -> vector */
A68_449  HVTASIM;  /* OPERATORS - assign op */
A68_448  IVTASIM;  /* clause result */
A_PROC_ENTRY(make_46);
RSCAOST_makeid( USTASIM, &VSTASIM );
SSTASIM.Overloaded_biop_name = VSTASIM;
 /* line 1192: */
 /* line 1193: */
YLFASIM_label( CTTASIM, &DTTASIM );
ATTASIM.data[0].Biop_name = DTTASIM;
ITTASIM.data[0] = GIQASIM_sr;
ITTASIM.data[1] = GIQASIM_sr;
FTTASIM_generator( A68_FALSE, &JTTASIM );
LTTASIM = A_HISVEC(KTTASIM,ITTASIM,2,A68_INT ) ;
A_VASSIGN2(LTTASIM,JTTASIM,A68_INT ) ;
ATTASIM.data[0].Inputs = JTTASIM;
 /* line 1194: */
ATTASIM.data[0].No_of_macparams = 0;
ATTASIM.data[0].Output.Output_type_sort = IIQASIM_struct;
ATTASIM.data[0].Output.Limit_save = A68_FALSE;
 /* line 1195: */
QTTASIM.data[0].Output_type_sort = BIQASIM_tv;
QTTASIM.data[0].Limit_save = A68_FALSE;
QTTASIM.data[0].Struct_components = A_R1VAC(RTTASIM);
QTTASIM.data[1].Output_type_sort = GIQASIM_sr;
QTTASIM.data[1].Limit_save = A68_FALSE;
QTTASIM.data[1].Struct_components = A_R1VAC(STTASIM);
NTTASIM_generator( A68_FALSE, &TTTASIM );
VTTASIM = A_HISVEC(UTTASIM,QTTASIM,2,A68_427 ) ;
A_VASSIGN2(VTTASIM,TTTASIM,A68_427 ) ;
ATTASIM.data[0].Output.Struct_components = A_VECARR(TTTASIM,WTTASIM);
 /* line 1196: */
ATTASIM.data[0].Pointer = A68_TRUE;
 /* line 1198: */
CUTASIM.fn.fn_global = AUTASIM_anonymous;
CUTASIM.nonlocals = A68_NIL;
ATTASIM.data[0].Limit_check = CUTASIM;
YLFASIM_label( EUTASIM, &FUTASIM );
ATTASIM.data[1].Biop_name = FUTASIM;
KUTASIM.data[0] = HIQASIM_lr;
KUTASIM.data[1] = HIQASIM_lr;
HUTASIM_generator( A68_FALSE, &LUTASIM );
NUTASIM = A_HISVEC(MUTASIM,KUTASIM,2,A68_INT ) ;
A_VASSIGN2(NUTASIM,LUTASIM,A68_INT ) ;
ATTASIM.data[1].Inputs = LUTASIM;
 /* line 1199: */
ATTASIM.data[1].No_of_macparams = 0;
ATTASIM.data[1].Output.Output_type_sort = IIQASIM_struct;
ATTASIM.data[1].Output.Limit_save = A68_FALSE;
 /* line 1200: */
SUTASIM.data[0].Output_type_sort = BIQASIM_tv;
SUTASIM.data[0].Limit_save = A68_FALSE;
SUTASIM.data[0].Struct_components = A_R1VAC(TUTASIM);
SUTASIM.data[1].Output_type_sort = HIQASIM_lr;
SUTASIM.data[1].Limit_save = A68_FALSE;
SUTASIM.data[1].Struct_components = A_R1VAC(UUTASIM);
PUTASIM_generator( A68_FALSE, &VUTASIM );
XUTASIM = A_HISVEC(WUTASIM,SUTASIM,2,A68_427 ) ;
A_VASSIGN2(XUTASIM,VUTASIM,A68_427 ) ;
ATTASIM.data[1].Output.Struct_components = A_VECARR(VUTASIM,YUTASIM);
 /* line 1201: */
ATTASIM.data[1].Pointer = A68_TRUE;
 /* line 1203: */
 /* line 1204: */
EVTASIM.fn.fn_global = CVTASIM_anonymous;
EVTASIM.nonlocals = A68_NIL;
ATTASIM.data[1].Limit_check = EVTASIM;
XSTASIM_generator( A68_FALSE, &FVTASIM );
HVTASIM = A_HISVEC(GVTASIM,ATTASIM,2,A68_442 ) ;
A_VASSIGN2(HVTASIM,FVTASIM,A68_442 ) ;
SSTASIM.Biops = FVTASIM;
IVTASIM = SSTASIM;
A_PROC_EXIT(make_46);
*ReturnedValue = (IVTASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  JVTASIM_make_47(A68_448  *ReturnedValue)
{ 
A68_448  KVTASIM;  /* collateral clause result */
A68_VC  NVTASIM;  /* avoid structure result */
A68_458  SVTASIM;  /* collateral clause result */
A68_357  VVTASIM;  /* avoid structure result */
A68_432  AWTASIM;  /* collateral clause result */
A68_32  BWTASIM;  /* avoid structure result */
A68_32  CWTASIM;  /* OPERATORS - istruct -> vector */
A68_32  DWTASIM;  /* OPERATORS - assign op */
A68_467  IWTASIM;  /* collateral clause result */
A68_428  JWTASIM;  /* OPERATORS - nil -> mode */
A68_428  KWTASIM;  /* OPERATORS - nil -> mode */
A68_465  LWTASIM;  /* avoid structure result */
A68_465  MWTASIM;  /* OPERATORS - istruct -> vector */
A68_465  NWTASIM;  /* OPERATORS - assign op */
A68_428  OWTASIM;  /* OPERATORS - vector -> row */
A68_426  UWTASIM;  /* procedure value */
A68_357  XWTASIM;  /* avoid structure result */
A68_432  CXTASIM;  /* collateral clause result */
A68_32  DXTASIM;  /* avoid structure result */
A68_32  EXTASIM;  /* OPERATORS - istruct -> vector */
A68_32  FXTASIM;  /* OPERATORS - assign op */
A68_467  KXTASIM;  /* collateral clause result */
A68_428  LXTASIM;  /* OPERATORS - nil -> mode */
A68_428  MXTASIM;  /* OPERATORS - nil -> mode */
A68_465  NXTASIM;  /* avoid structure result */
A68_465  OXTASIM;  /* OPERATORS - istruct -> vector */
A68_465  PXTASIM;  /* OPERATORS - assign op */
A68_428  QXTASIM;  /* OPERATORS - vector -> row */
A68_426  WXTASIM;  /* procedure value */
A68_449  XXTASIM;  /* avoid structure result */
A68_449  YXTASIM;  /* OPERATORS - istruct -> vector */
A68_449  ZXTASIM;  /* OPERATORS - assign op */
A68_448  AYTASIM;  /* clause result */
A_PROC_ENTRY(make_47);
RSCAOST_makeid( MVTASIM, &NVTASIM );
KVTASIM.Overloaded_biop_name = NVTASIM;
 /* line 1208: */
 /* line 1209: */
YLFASIM_label( UVTASIM, &VVTASIM );
SVTASIM.data[0].Biop_name = VVTASIM;
AWTASIM.data[0] = GIQASIM_sr;
AWTASIM.data[1] = GIQASIM_sr;
XVTASIM_generator( A68_FALSE, &BWTASIM );
DWTASIM = A_HISVEC(CWTASIM,AWTASIM,2,A68_INT ) ;
A_VASSIGN2(DWTASIM,BWTASIM,A68_INT ) ;
SVTASIM.data[0].Inputs = BWTASIM;
 /* line 1210: */
SVTASIM.data[0].No_of_macparams = 0;
SVTASIM.data[0].Output.Output_type_sort = IIQASIM_struct;
SVTASIM.data[0].Output.Limit_save = A68_FALSE;
 /* line 1211: */
IWTASIM.data[0].Output_type_sort = BIQASIM_tv;
IWTASIM.data[0].Limit_save = A68_FALSE;
IWTASIM.data[0].Struct_components = A_R1VAC(JWTASIM);
IWTASIM.data[1].Output_type_sort = GIQASIM_sr;
IWTASIM.data[1].Limit_save = A68_FALSE;
IWTASIM.data[1].Struct_components = A_R1VAC(KWTASIM);
FWTASIM_generator( A68_FALSE, &LWTASIM );
NWTASIM = A_HISVEC(MWTASIM,IWTASIM,2,A68_427 ) ;
A_VASSIGN2(NWTASIM,LWTASIM,A68_427 ) ;
SVTASIM.data[0].Output.Struct_components = A_VECARR(LWTASIM,OWTASIM);
 /* line 1212: */
SVTASIM.data[0].Pointer = A68_TRUE;
 /* line 1214: */
UWTASIM.fn.fn_global = SWTASIM_anonymous;
UWTASIM.nonlocals = A68_NIL;
SVTASIM.data[0].Limit_check = UWTASIM;
YLFASIM_label( WWTASIM, &XWTASIM );
SVTASIM.data[1].Biop_name = XWTASIM;
CXTASIM.data[0] = HIQASIM_lr;
CXTASIM.data[1] = HIQASIM_lr;
ZWTASIM_generator( A68_FALSE, &DXTASIM );
FXTASIM = A_HISVEC(EXTASIM,CXTASIM,2,A68_INT ) ;
A_VASSIGN2(FXTASIM,DXTASIM,A68_INT ) ;
SVTASIM.data[1].Inputs = DXTASIM;
 /* line 1215: */
SVTASIM.data[1].No_of_macparams = 0;
SVTASIM.data[1].Output.Output_type_sort = IIQASIM_struct;
SVTASIM.data[1].Output.Limit_save = A68_FALSE;
 /* line 1216: */
KXTASIM.data[0].Output_type_sort = BIQASIM_tv;
KXTASIM.data[0].Limit_save = A68_FALSE;
KXTASIM.data[0].Struct_components = A_R1VAC(LXTASIM);
KXTASIM.data[1].Output_type_sort = HIQASIM_lr;
KXTASIM.data[1].Limit_save = A68_FALSE;
KXTASIM.data[1].Struct_components = A_R1VAC(MXTASIM);
HXTASIM_generator( A68_FALSE, &NXTASIM );
PXTASIM = A_HISVEC(OXTASIM,KXTASIM,2,A68_427 ) ;
A_VASSIGN2(PXTASIM,NXTASIM,A68_427 ) ;
SVTASIM.data[1].Output.Struct_components = A_VECARR(NXTASIM,QXTASIM);
 /* line 1217: */
SVTASIM.data[1].Pointer = A68_TRUE;
 /* line 1219: */
 /* line 1220: */
WXTASIM.fn.fn_global = UXTASIM_anonymous;
WXTASIM.nonlocals = A68_NIL;
SVTASIM.data[1].Limit_check = WXTASIM;
PVTASIM_generator( A68_FALSE, &XXTASIM );
ZXTASIM = A_HISVEC(YXTASIM,SVTASIM,2,A68_442 ) ;
A_VASSIGN2(ZXTASIM,XXTASIM,A68_442 ) ;
KVTASIM.Biops = XXTASIM;
AYTASIM = KVTASIM;
A_PROC_EXIT(make_47);
*ReturnedValue = (AYTASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  BYTASIM_make_48(A68_448  *ReturnedValue)
{ 
A68_448  CYTASIM;  /* collateral clause result */
A68_VC  FYTASIM;  /* avoid structure result */
A68_458  KYTASIM;  /* collateral clause result */
A68_357  NYTASIM;  /* avoid structure result */
A68_432  SYTASIM;  /* collateral clause result */
A68_32  TYTASIM;  /* avoid structure result */
A68_32  UYTASIM;  /* OPERATORS - istruct -> vector */
A68_32  VYTASIM;  /* OPERATORS - assign op */
A68_467  AZTASIM;  /* collateral clause result */
A68_428  BZTASIM;  /* OPERATORS - nil -> mode */
A68_428  CZTASIM;  /* OPERATORS - nil -> mode */
A68_465  DZTASIM;  /* avoid structure result */
A68_465  EZTASIM;  /* OPERATORS - istruct -> vector */
A68_465  FZTASIM;  /* OPERATORS - assign op */
A68_428  GZTASIM;  /* OPERATORS - vector -> row */
A68_426  MZTASIM;  /* procedure value */
A68_357  PZTASIM;  /* avoid structure result */
A68_432  UZTASIM;  /* collateral clause result */
A68_32  VZTASIM;  /* avoid structure result */
A68_32  WZTASIM;  /* OPERATORS - istruct -> vector */
A68_32  XZTASIM;  /* OPERATORS - assign op */
A68_467  CAUASIM;  /* collateral clause result */
A68_428  DAUASIM;  /* OPERATORS - nil -> mode */
A68_428  EAUASIM;  /* OPERATORS - nil -> mode */
A68_465  FAUASIM;  /* avoid structure result */
A68_465  GAUASIM;  /* OPERATORS - istruct -> vector */
A68_465  HAUASIM;  /* OPERATORS - assign op */
A68_428  IAUASIM;  /* OPERATORS - vector -> row */
A68_426  OAUASIM;  /* procedure value */
A68_449  PAUASIM;  /* avoid structure result */
A68_449  QAUASIM;  /* OPERATORS - istruct -> vector */
A68_449  RAUASIM;  /* OPERATORS - assign op */
A68_448  SAUASIM;  /* clause result */
A_PROC_ENTRY(make_48);
RSCAOST_makeid( EYTASIM, &FYTASIM );
CYTASIM.Overloaded_biop_name = FYTASIM;
 /* line 1224: */
 /* line 1225: */
YLFASIM_label( MYTASIM, &NYTASIM );
KYTASIM.data[0].Biop_name = NYTASIM;
SYTASIM.data[0] = GIQASIM_sr;
SYTASIM.data[1] = GIQASIM_sr;
PYTASIM_generator( A68_FALSE, &TYTASIM );
VYTASIM = A_HISVEC(UYTASIM,SYTASIM,2,A68_INT ) ;
A_VASSIGN2(VYTASIM,TYTASIM,A68_INT ) ;
KYTASIM.data[0].Inputs = TYTASIM;
 /* line 1226: */
KYTASIM.data[0].No_of_macparams = 0;
KYTASIM.data[0].Output.Output_type_sort = IIQASIM_struct;
KYTASIM.data[0].Output.Limit_save = A68_FALSE;
 /* line 1227: */
AZTASIM.data[0].Output_type_sort = BIQASIM_tv;
AZTASIM.data[0].Limit_save = A68_FALSE;
AZTASIM.data[0].Struct_components = A_R1VAC(BZTASIM);
AZTASIM.data[1].Output_type_sort = GIQASIM_sr;
AZTASIM.data[1].Limit_save = A68_FALSE;
AZTASIM.data[1].Struct_components = A_R1VAC(CZTASIM);
XYTASIM_generator( A68_FALSE, &DZTASIM );
FZTASIM = A_HISVEC(EZTASIM,AZTASIM,2,A68_427 ) ;
A_VASSIGN2(FZTASIM,DZTASIM,A68_427 ) ;
KYTASIM.data[0].Output.Struct_components = A_VECARR(DZTASIM,GZTASIM);
 /* line 1228: */
KYTASIM.data[0].Pointer = A68_TRUE;
 /* line 1230: */
MZTASIM.fn.fn_global = KZTASIM_anonymous;
MZTASIM.nonlocals = A68_NIL;
KYTASIM.data[0].Limit_check = MZTASIM;
YLFASIM_label( OZTASIM, &PZTASIM );
KYTASIM.data[1].Biop_name = PZTASIM;
UZTASIM.data[0] = HIQASIM_lr;
UZTASIM.data[1] = HIQASIM_lr;
RZTASIM_generator( A68_FALSE, &VZTASIM );
XZTASIM = A_HISVEC(WZTASIM,UZTASIM,2,A68_INT ) ;
A_VASSIGN2(XZTASIM,VZTASIM,A68_INT ) ;
KYTASIM.data[1].Inputs = VZTASIM;
 /* line 1231: */
KYTASIM.data[1].No_of_macparams = 0;
KYTASIM.data[1].Output.Output_type_sort = IIQASIM_struct;
KYTASIM.data[1].Output.Limit_save = A68_FALSE;
 /* line 1232: */
CAUASIM.data[0].Output_type_sort = BIQASIM_tv;
CAUASIM.data[0].Limit_save = A68_FALSE;
CAUASIM.data[0].Struct_components = A_R1VAC(DAUASIM);
CAUASIM.data[1].Output_type_sort = HIQASIM_lr;
CAUASIM.data[1].Limit_save = A68_FALSE;
CAUASIM.data[1].Struct_components = A_R1VAC(EAUASIM);
ZZTASIM_generator( A68_FALSE, &FAUASIM );
HAUASIM = A_HISVEC(GAUASIM,CAUASIM,2,A68_427 ) ;
A_VASSIGN2(HAUASIM,FAUASIM,A68_427 ) ;
KYTASIM.data[1].Output.Struct_components = A_VECARR(FAUASIM,IAUASIM);
 /* line 1233: */
KYTASIM.data[1].Pointer = A68_TRUE;
 /* line 1235: */
 /* line 1236: */
OAUASIM.fn.fn_global = MAUASIM_anonymous;
OAUASIM.nonlocals = A68_NIL;
KYTASIM.data[1].Limit_check = OAUASIM;
HYTASIM_generator( A68_FALSE, &PAUASIM );
RAUASIM = A_HISVEC(QAUASIM,KYTASIM,2,A68_442 ) ;
A_VASSIGN2(RAUASIM,PAUASIM,A68_442 ) ;
CYTASIM.Biops = PAUASIM;
SAUASIM = CYTASIM;
A_PROC_EXIT(make_48);
*ReturnedValue = (SAUASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  TAUASIM_make_49(A68_448  *ReturnedValue)
{ 
A68_448  UAUASIM;  /* collateral clause result */
A68_VC  XAUASIM;  /* avoid structure result */
A68_458  CBUASIM;  /* collateral clause result */
A68_357  FBUASIM;  /* avoid structure result */
A68_432  KBUASIM;  /* collateral clause result */
A68_32  LBUASIM;  /* avoid structure result */
A68_32  MBUASIM;  /* OPERATORS - istruct -> vector */
A68_32  NBUASIM;  /* OPERATORS - assign op */
A68_467  SBUASIM;  /* collateral clause result */
A68_428  TBUASIM;  /* OPERATORS - nil -> mode */
A68_428  UBUASIM;  /* OPERATORS - nil -> mode */
A68_465  VBUASIM;  /* avoid structure result */
A68_465  WBUASIM;  /* OPERATORS - istruct -> vector */
A68_465  XBUASIM;  /* OPERATORS - assign op */
A68_428  YBUASIM;  /* OPERATORS - vector -> row */
A68_426  ECUASIM;  /* procedure value */
A68_357  HCUASIM;  /* avoid structure result */
A68_432  MCUASIM;  /* collateral clause result */
A68_32  NCUASIM;  /* avoid structure result */
A68_32  OCUASIM;  /* OPERATORS - istruct -> vector */
A68_32  PCUASIM;  /* OPERATORS - assign op */
A68_467  UCUASIM;  /* collateral clause result */
A68_428  VCUASIM;  /* OPERATORS - nil -> mode */
A68_428  WCUASIM;  /* OPERATORS - nil -> mode */
A68_465  XCUASIM;  /* avoid structure result */
A68_465  YCUASIM;  /* OPERATORS - istruct -> vector */
A68_465  ZCUASIM;  /* OPERATORS - assign op */
A68_428  ADUASIM;  /* OPERATORS - vector -> row */
A68_426  GDUASIM;  /* procedure value */
A68_449  HDUASIM;  /* avoid structure result */
A68_449  IDUASIM;  /* OPERATORS - istruct -> vector */
A68_449  JDUASIM;  /* OPERATORS - assign op */
A68_448  KDUASIM;  /* clause result */
A_PROC_ENTRY(make_49);
RSCAOST_makeid( WAUASIM, &XAUASIM );
UAUASIM.Overloaded_biop_name = XAUASIM;
 /* line 1240: */
 /* line 1241: */
YLFASIM_label( EBUASIM, &FBUASIM );
CBUASIM.data[0].Biop_name = FBUASIM;
KBUASIM.data[0] = GIQASIM_sr;
KBUASIM.data[1] = GIQASIM_sr;
HBUASIM_generator( A68_FALSE, &LBUASIM );
NBUASIM = A_HISVEC(MBUASIM,KBUASIM,2,A68_INT ) ;
A_VASSIGN2(NBUASIM,LBUASIM,A68_INT ) ;
CBUASIM.data[0].Inputs = LBUASIM;
 /* line 1242: */
CBUASIM.data[0].No_of_macparams = 0;
CBUASIM.data[0].Output.Output_type_sort = IIQASIM_struct;
CBUASIM.data[0].Output.Limit_save = A68_FALSE;
 /* line 1243: */
SBUASIM.data[0].Output_type_sort = BIQASIM_tv;
SBUASIM.data[0].Limit_save = A68_FALSE;
SBUASIM.data[0].Struct_components = A_R1VAC(TBUASIM);
SBUASIM.data[1].Output_type_sort = GIQASIM_sr;
SBUASIM.data[1].Limit_save = A68_FALSE;
SBUASIM.data[1].Struct_components = A_R1VAC(UBUASIM);
PBUASIM_generator( A68_FALSE, &VBUASIM );
XBUASIM = A_HISVEC(WBUASIM,SBUASIM,2,A68_427 ) ;
A_VASSIGN2(XBUASIM,VBUASIM,A68_427 ) ;
CBUASIM.data[0].Output.Struct_components = A_VECARR(VBUASIM,YBUASIM);
 /* line 1244: */
CBUASIM.data[0].Pointer = A68_TRUE;
 /* line 1246: */
ECUASIM.fn.fn_global = CCUASIM_anonymous;
ECUASIM.nonlocals = A68_NIL;
CBUASIM.data[0].Limit_check = ECUASIM;
YLFASIM_label( GCUASIM, &HCUASIM );
CBUASIM.data[1].Biop_name = HCUASIM;
MCUASIM.data[0] = HIQASIM_lr;
MCUASIM.data[1] = HIQASIM_lr;
JCUASIM_generator( A68_FALSE, &NCUASIM );
PCUASIM = A_HISVEC(OCUASIM,MCUASIM,2,A68_INT ) ;
A_VASSIGN2(PCUASIM,NCUASIM,A68_INT ) ;
CBUASIM.data[1].Inputs = NCUASIM;
 /* line 1247: */
CBUASIM.data[1].No_of_macparams = 0;
CBUASIM.data[1].Output.Output_type_sort = IIQASIM_struct;
CBUASIM.data[1].Output.Limit_save = A68_FALSE;
 /* line 1248: */
UCUASIM.data[0].Output_type_sort = BIQASIM_tv;
UCUASIM.data[0].Limit_save = A68_FALSE;
UCUASIM.data[0].Struct_components = A_R1VAC(VCUASIM);
UCUASIM.data[1].Output_type_sort = HIQASIM_lr;
UCUASIM.data[1].Limit_save = A68_FALSE;
UCUASIM.data[1].Struct_components = A_R1VAC(WCUASIM);
RCUASIM_generator( A68_FALSE, &XCUASIM );
ZCUASIM = A_HISVEC(YCUASIM,UCUASIM,2,A68_427 ) ;
A_VASSIGN2(ZCUASIM,XCUASIM,A68_427 ) ;
CBUASIM.data[1].Output.Struct_components = A_VECARR(XCUASIM,ADUASIM);
 /* line 1249: */
CBUASIM.data[1].Pointer = A68_TRUE;
 /* line 1251: */
 /* line 1252: */
GDUASIM.fn.fn_global = EDUASIM_anonymous;
GDUASIM.nonlocals = A68_NIL;
CBUASIM.data[1].Limit_check = GDUASIM;
ZAUASIM_generator( A68_FALSE, &HDUASIM );
JDUASIM = A_HISVEC(IDUASIM,CBUASIM,2,A68_442 ) ;
A_VASSIGN2(JDUASIM,HDUASIM,A68_442 ) ;
UAUASIM.Biops = HDUASIM;
KDUASIM = UAUASIM;
A_PROC_EXIT(make_49);
*ReturnedValue = (KDUASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  LDUASIM_make_50(A68_448  *ReturnedValue)
{ 
A68_448  MDUASIM;  /* collateral clause result */
A68_VC  PDUASIM;  /* avoid structure result */
A68_458  UDUASIM;  /* collateral clause result */
A68_357  XDUASIM;  /* avoid structure result */
A68_32  CEUASIM;  /* avoid structure result */
A68_32  DEUASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_32  EEUASIM;  /* OPERATORS - assign op */
A68_467  JEUASIM;  /* collateral clause result */
A68_428  KEUASIM;  /* OPERATORS - nil -> mode */
A68_428  LEUASIM;  /* OPERATORS - nil -> mode */
A68_465  MEUASIM;  /* avoid structure result */
A68_465  NEUASIM;  /* OPERATORS - istruct -> vector */
A68_465  OEUASIM;  /* OPERATORS - assign op */
A68_428  PEUASIM;  /* OPERATORS - vector -> row */
A68_426  VEUASIM;  /* procedure value */
A68_357  YEUASIM;  /* avoid structure result */
A68_32  DFUASIM;  /* avoid structure result */
A68_32  EFUASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_32  FFUASIM;  /* OPERATORS - assign op */
A68_467  KFUASIM;  /* collateral clause result */
A68_428  LFUASIM;  /* OPERATORS - nil -> mode */
A68_428  MFUASIM;  /* OPERATORS - nil -> mode */
A68_465  NFUASIM;  /* avoid structure result */
A68_465  OFUASIM;  /* OPERATORS - istruct -> vector */
A68_465  PFUASIM;  /* OPERATORS - assign op */
A68_428  QFUASIM;  /* OPERATORS - vector -> row */
A68_426  WFUASIM;  /* procedure value */
A68_449  XFUASIM;  /* avoid structure result */
A68_449  YFUASIM;  /* OPERATORS - istruct -> vector */
A68_449  ZFUASIM;  /* OPERATORS - assign op */
A68_448  AGUASIM;  /* clause result */
A_PROC_ENTRY(make_50);
RSCAOST_makeid( ODUASIM, &PDUASIM );
MDUASIM.Overloaded_biop_name = PDUASIM;
 /* line 1256: */
 /* line 1257: */
YLFASIM_label( WDUASIM, &XDUASIM );
UDUASIM.data[0].Biop_name = XDUASIM;
ZDUASIM_generator( A68_FALSE, &CEUASIM );
EEUASIM = A_HVEC(DEUASIM,GIQASIM_sr,A68_INT ) ;
A_VASSIGN2(EEUASIM,CEUASIM,A68_INT ) ;
UDUASIM.data[0].Inputs = CEUASIM;
 /* line 1258: */
UDUASIM.data[0].No_of_macparams = 0;
UDUASIM.data[0].Output.Output_type_sort = IIQASIM_struct;
UDUASIM.data[0].Output.Limit_save = A68_FALSE;
 /* line 1259: */
JEUASIM.data[0].Output_type_sort = BIQASIM_tv;
JEUASIM.data[0].Limit_save = A68_FALSE;
JEUASIM.data[0].Struct_components = A_R1VAC(KEUASIM);
JEUASIM.data[1].Output_type_sort = GIQASIM_sr;
JEUASIM.data[1].Limit_save = A68_FALSE;
JEUASIM.data[1].Struct_components = A_R1VAC(LEUASIM);
GEUASIM_generator( A68_FALSE, &MEUASIM );
OEUASIM = A_HISVEC(NEUASIM,JEUASIM,2,A68_427 ) ;
A_VASSIGN2(OEUASIM,MEUASIM,A68_427 ) ;
UDUASIM.data[0].Output.Struct_components = A_VECARR(MEUASIM,PEUASIM);
 /* line 1260: */
UDUASIM.data[0].Pointer = A68_TRUE;
 /* line 1262: */
VEUASIM.fn.fn_global = TEUASIM_anonymous;
VEUASIM.nonlocals = A68_NIL;
UDUASIM.data[0].Limit_check = VEUASIM;
YLFASIM_label( XEUASIM, &YEUASIM );
UDUASIM.data[1].Biop_name = YEUASIM;
AFUASIM_generator( A68_FALSE, &DFUASIM );
FFUASIM = A_HVEC(EFUASIM,HIQASIM_lr,A68_INT ) ;
A_VASSIGN2(FFUASIM,DFUASIM,A68_INT ) ;
UDUASIM.data[1].Inputs = DFUASIM;
 /* line 1263: */
UDUASIM.data[1].No_of_macparams = 0;
UDUASIM.data[1].Output.Output_type_sort = IIQASIM_struct;
UDUASIM.data[1].Output.Limit_save = A68_FALSE;
 /* line 1264: */
KFUASIM.data[0].Output_type_sort = BIQASIM_tv;
KFUASIM.data[0].Limit_save = A68_FALSE;
KFUASIM.data[0].Struct_components = A_R1VAC(LFUASIM);
KFUASIM.data[1].Output_type_sort = HIQASIM_lr;
KFUASIM.data[1].Limit_save = A68_FALSE;
KFUASIM.data[1].Struct_components = A_R1VAC(MFUASIM);
HFUASIM_generator( A68_FALSE, &NFUASIM );
PFUASIM = A_HISVEC(OFUASIM,KFUASIM,2,A68_427 ) ;
A_VASSIGN2(PFUASIM,NFUASIM,A68_427 ) ;
UDUASIM.data[1].Output.Struct_components = A_VECARR(NFUASIM,QFUASIM);
 /* line 1265: */
UDUASIM.data[1].Pointer = A68_TRUE;
 /* line 1267: */
 /* line 1268: */
WFUASIM.fn.fn_global = UFUASIM_anonymous;
WFUASIM.nonlocals = A68_NIL;
UDUASIM.data[1].Limit_check = WFUASIM;
RDUASIM_generator( A68_FALSE, &XFUASIM );
ZFUASIM = A_HISVEC(YFUASIM,UDUASIM,2,A68_442 ) ;
A_VASSIGN2(ZFUASIM,XFUASIM,A68_442 ) ;
MDUASIM.Biops = XFUASIM;
AGUASIM = MDUASIM;
A_PROC_EXIT(make_50);
*ReturnedValue = (AGUASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  BGUASIM_make_51(A68_448  *ReturnedValue)
{ 
A68_448  CGUASIM;  /* collateral clause result */
A68_VC  FGUASIM;  /* avoid structure result */
A68_458  KGUASIM;  /* collateral clause result */
A68_357  NGUASIM;  /* avoid structure result */
A68_432  SGUASIM;  /* collateral clause result */
A68_32  TGUASIM;  /* avoid structure result */
A68_32  UGUASIM;  /* OPERATORS - istruct -> vector */
A68_32  VGUASIM;  /* OPERATORS - assign op */
A68_428  WGUASIM;  /* OPERATORS - nil -> mode */
A68_426  CHUASIM;  /* procedure value */
A68_357  FHUASIM;  /* avoid structure result */
A68_432  KHUASIM;  /* collateral clause result */
A68_32  LHUASIM;  /* avoid structure result */
A68_32  MHUASIM;  /* OPERATORS - istruct -> vector */
A68_32  NHUASIM;  /* OPERATORS - assign op */
A68_428  OHUASIM;  /* OPERATORS - nil -> mode */
A68_426  UHUASIM;  /* procedure value */
A68_449  VHUASIM;  /* avoid structure result */
A68_449  WHUASIM;  /* OPERATORS - istruct -> vector */
A68_449  XHUASIM;  /* OPERATORS - assign op */
A68_448  YHUASIM;  /* clause result */
A_PROC_ENTRY(make_51);
RSCAOST_makeid( EGUASIM, &FGUASIM );
CGUASIM.Overloaded_biop_name = FGUASIM;
 /* line 1272: */
 /* line 1273: */
YLFASIM_label( MGUASIM, &NGUASIM );
KGUASIM.data[0].Biop_name = NGUASIM;
SGUASIM.data[0] = GIQASIM_sr;
SGUASIM.data[1] = GIQASIM_sr;
PGUASIM_generator( A68_FALSE, &TGUASIM );
VGUASIM = A_HISVEC(UGUASIM,SGUASIM,2,A68_INT ) ;
A_VASSIGN2(VGUASIM,TGUASIM,A68_INT ) ;
KGUASIM.data[0].Inputs = TGUASIM;
 /* line 1274: */
KGUASIM.data[0].No_of_macparams = 0;
KGUASIM.data[0].Output.Output_type_sort = BIQASIM_tv;
KGUASIM.data[0].Output.Limit_save = A68_FALSE;
KGUASIM.data[0].Output.Struct_components = A_R1VAC(WGUASIM);
 /* line 1275: */
KGUASIM.data[0].Pointer = A68_FALSE;
 /* line 1277: */
CHUASIM.fn.fn_global = AHUASIM_anonymous;
CHUASIM.nonlocals = A68_NIL;
KGUASIM.data[0].Limit_check = CHUASIM;
YLFASIM_label( EHUASIM, &FHUASIM );
KGUASIM.data[1].Biop_name = FHUASIM;
KHUASIM.data[0] = HIQASIM_lr;
KHUASIM.data[1] = HIQASIM_lr;
HHUASIM_generator( A68_FALSE, &LHUASIM );
NHUASIM = A_HISVEC(MHUASIM,KHUASIM,2,A68_INT ) ;
A_VASSIGN2(NHUASIM,LHUASIM,A68_INT ) ;
KGUASIM.data[1].Inputs = LHUASIM;
 /* line 1278: */
KGUASIM.data[1].No_of_macparams = 0;
KGUASIM.data[1].Output.Output_type_sort = BIQASIM_tv;
KGUASIM.data[1].Output.Limit_save = A68_FALSE;
KGUASIM.data[1].Output.Struct_components = A_R1VAC(OHUASIM);
 /* line 1279: */
KGUASIM.data[1].Pointer = A68_FALSE;
 /* line 1281: */
 /* line 1282: */
UHUASIM.fn.fn_global = SHUASIM_anonymous;
UHUASIM.nonlocals = A68_NIL;
KGUASIM.data[1].Limit_check = UHUASIM;
HGUASIM_generator( A68_FALSE, &VHUASIM );
XHUASIM = A_HISVEC(WHUASIM,KGUASIM,2,A68_442 ) ;
A_VASSIGN2(XHUASIM,VHUASIM,A68_442 ) ;
CGUASIM.Biops = VHUASIM;
YHUASIM = CGUASIM;
A_PROC_EXIT(make_51);
*ReturnedValue = (YHUASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  ZHUASIM_make_52(A68_448  *ReturnedValue)
{ 
A68_448  AIUASIM;  /* collateral clause result */
A68_VC  DIUASIM;  /* avoid structure result */
A68_458  IIUASIM;  /* collateral clause result */
A68_357  LIUASIM;  /* avoid structure result */
A68_432  QIUASIM;  /* collateral clause result */
A68_32  RIUASIM;  /* avoid structure result */
A68_32  SIUASIM;  /* OPERATORS - istruct -> vector */
A68_32  TIUASIM;  /* OPERATORS - assign op */
A68_428  UIUASIM;  /* OPERATORS - nil -> mode */
A68_426  AJUASIM;  /* procedure value */
A68_357  DJUASIM;  /* avoid structure result */
A68_432  IJUASIM;  /* collateral clause result */
A68_32  JJUASIM;  /* avoid structure result */
A68_32  KJUASIM;  /* OPERATORS - istruct -> vector */
A68_32  LJUASIM;  /* OPERATORS - assign op */
A68_428  MJUASIM;  /* OPERATORS - nil -> mode */
A68_426  SJUASIM;  /* procedure value */
A68_449  TJUASIM;  /* avoid structure result */
A68_449  UJUASIM;  /* OPERATORS - istruct -> vector */
A68_449  VJUASIM;  /* OPERATORS - assign op */
A68_448  WJUASIM;  /* clause result */
A_PROC_ENTRY(make_52);
RSCAOST_makeid( CIUASIM, &DIUASIM );
AIUASIM.Overloaded_biop_name = DIUASIM;
 /* line 1286: */
 /* line 1287: */
YLFASIM_label( KIUASIM, &LIUASIM );
IIUASIM.data[0].Biop_name = LIUASIM;
QIUASIM.data[0] = GIQASIM_sr;
QIUASIM.data[1] = GIQASIM_sr;
NIUASIM_generator( A68_FALSE, &RIUASIM );
TIUASIM = A_HISVEC(SIUASIM,QIUASIM,2,A68_INT ) ;
A_VASSIGN2(TIUASIM,RIUASIM,A68_INT ) ;
IIUASIM.data[0].Inputs = RIUASIM;
 /* line 1288: */
IIUASIM.data[0].No_of_macparams = 0;
IIUASIM.data[0].Output.Output_type_sort = BIQASIM_tv;
IIUASIM.data[0].Output.Limit_save = A68_FALSE;
IIUASIM.data[0].Output.Struct_components = A_R1VAC(UIUASIM);
 /* line 1289: */
IIUASIM.data[0].Pointer = A68_FALSE;
 /* line 1291: */
AJUASIM.fn.fn_global = YIUASIM_anonymous;
AJUASIM.nonlocals = A68_NIL;
IIUASIM.data[0].Limit_check = AJUASIM;
YLFASIM_label( CJUASIM, &DJUASIM );
IIUASIM.data[1].Biop_name = DJUASIM;
IJUASIM.data[0] = HIQASIM_lr;
IJUASIM.data[1] = HIQASIM_lr;
FJUASIM_generator( A68_FALSE, &JJUASIM );
LJUASIM = A_HISVEC(KJUASIM,IJUASIM,2,A68_INT ) ;
A_VASSIGN2(LJUASIM,JJUASIM,A68_INT ) ;
IIUASIM.data[1].Inputs = JJUASIM;
 /* line 1292: */
IIUASIM.data[1].No_of_macparams = 0;
IIUASIM.data[1].Output.Output_type_sort = BIQASIM_tv;
IIUASIM.data[1].Output.Limit_save = A68_FALSE;
IIUASIM.data[1].Output.Struct_components = A_R1VAC(MJUASIM);
 /* line 1293: */
IIUASIM.data[1].Pointer = A68_FALSE;
 /* line 1295: */
 /* line 1296: */
SJUASIM.fn.fn_global = QJUASIM_anonymous;
SJUASIM.nonlocals = A68_NIL;
IIUASIM.data[1].Limit_check = SJUASIM;
FIUASIM_generator( A68_FALSE, &TJUASIM );
VJUASIM = A_HISVEC(UJUASIM,IIUASIM,2,A68_442 ) ;
A_VASSIGN2(VJUASIM,TJUASIM,A68_442 ) ;
AIUASIM.Biops = TJUASIM;
WJUASIM = AIUASIM;
A_PROC_EXIT(make_52);
*ReturnedValue = (WJUASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  XJUASIM_make_53(A68_448  *ReturnedValue)
{ 
A68_448  YJUASIM;  /* collateral clause result */
A68_VC  BKUASIM;  /* avoid structure result */
A68_458  GKUASIM;  /* collateral clause result */
A68_357  JKUASIM;  /* avoid structure result */
A68_432  OKUASIM;  /* collateral clause result */
A68_32  PKUASIM;  /* avoid structure result */
A68_32  QKUASIM;  /* OPERATORS - istruct -> vector */
A68_32  RKUASIM;  /* OPERATORS - assign op */
A68_428  SKUASIM;  /* OPERATORS - nil -> mode */
A68_426  YKUASIM;  /* procedure value */
A68_357  BLUASIM;  /* avoid structure result */
A68_432  GLUASIM;  /* collateral clause result */
A68_32  HLUASIM;  /* avoid structure result */
A68_32  ILUASIM;  /* OPERATORS - istruct -> vector */
A68_32  JLUASIM;  /* OPERATORS - assign op */
A68_428  KLUASIM;  /* OPERATORS - nil -> mode */
A68_426  QLUASIM;  /* procedure value */
A68_449  RLUASIM;  /* avoid structure result */
A68_449  SLUASIM;  /* OPERATORS - istruct -> vector */
A68_449  TLUASIM;  /* OPERATORS - assign op */
A68_448  ULUASIM;  /* clause result */
A_PROC_ENTRY(make_53);
RSCAOST_makeid( AKUASIM, &BKUASIM );
YJUASIM.Overloaded_biop_name = BKUASIM;
 /* line 1300: */
 /* line 1301: */
YLFASIM_label( IKUASIM, &JKUASIM );
GKUASIM.data[0].Biop_name = JKUASIM;
OKUASIM.data[0] = GIQASIM_sr;
OKUASIM.data[1] = GIQASIM_sr;
LKUASIM_generator( A68_FALSE, &PKUASIM );
RKUASIM = A_HISVEC(QKUASIM,OKUASIM,2,A68_INT ) ;
A_VASSIGN2(RKUASIM,PKUASIM,A68_INT ) ;
GKUASIM.data[0].Inputs = PKUASIM;
 /* line 1302: */
GKUASIM.data[0].No_of_macparams = 0;
GKUASIM.data[0].Output.Output_type_sort = BIQASIM_tv;
GKUASIM.data[0].Output.Limit_save = A68_FALSE;
GKUASIM.data[0].Output.Struct_components = A_R1VAC(SKUASIM);
 /* line 1303: */
GKUASIM.data[0].Pointer = A68_FALSE;
 /* line 1305: */
YKUASIM.fn.fn_global = WKUASIM_anonymous;
YKUASIM.nonlocals = A68_NIL;
GKUASIM.data[0].Limit_check = YKUASIM;
YLFASIM_label( ALUASIM, &BLUASIM );
GKUASIM.data[1].Biop_name = BLUASIM;
GLUASIM.data[0] = HIQASIM_lr;
GLUASIM.data[1] = HIQASIM_lr;
DLUASIM_generator( A68_FALSE, &HLUASIM );
JLUASIM = A_HISVEC(ILUASIM,GLUASIM,2,A68_INT ) ;
A_VASSIGN2(JLUASIM,HLUASIM,A68_INT ) ;
GKUASIM.data[1].Inputs = HLUASIM;
 /* line 1306: */
GKUASIM.data[1].No_of_macparams = 0;
GKUASIM.data[1].Output.Output_type_sort = BIQASIM_tv;
GKUASIM.data[1].Output.Limit_save = A68_FALSE;
GKUASIM.data[1].Output.Struct_components = A_R1VAC(KLUASIM);
 /* line 1307: */
GKUASIM.data[1].Pointer = A68_FALSE;
 /* line 1309: */
 /* line 1310: */
QLUASIM.fn.fn_global = OLUASIM_anonymous;
QLUASIM.nonlocals = A68_NIL;
GKUASIM.data[1].Limit_check = QLUASIM;
DKUASIM_generator( A68_FALSE, &RLUASIM );
TLUASIM = A_HISVEC(SLUASIM,GKUASIM,2,A68_442 ) ;
A_VASSIGN2(TLUASIM,RLUASIM,A68_442 ) ;
YJUASIM.Biops = RLUASIM;
ULUASIM = YJUASIM;
A_PROC_EXIT(make_53);
*ReturnedValue = (ULUASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  VLUASIM_make_54(A68_448  *ReturnedValue)
{ 
A68_448  WLUASIM;  /* collateral clause result */
A68_VC  ZLUASIM;  /* avoid structure result */
A68_458  EMUASIM;  /* collateral clause result */
A68_357  HMUASIM;  /* avoid structure result */
A68_32  MMUASIM;  /* avoid structure result */
A68_32  NMUASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_32  OMUASIM;  /* OPERATORS - assign op */
A68_467  TMUASIM;  /* collateral clause result */
A68_428  UMUASIM;  /* OPERATORS - nil -> mode */
A68_428  VMUASIM;  /* OPERATORS - nil -> mode */
A68_465  WMUASIM;  /* avoid structure result */
A68_465  XMUASIM;  /* OPERATORS - istruct -> vector */
A68_465  YMUASIM;  /* OPERATORS - assign op */
A68_428  ZMUASIM;  /* OPERATORS - vector -> row */
A68_426  FNUASIM;  /* procedure value */
A68_357  INUASIM;  /* avoid structure result */
A68_32  NNUASIM;  /* avoid structure result */
A68_32  ONUASIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_32  PNUASIM;  /* OPERATORS - assign op */
A68_467  UNUASIM;  /* collateral clause result */
A68_428  VNUASIM;  /* OPERATORS - nil -> mode */
A68_428  WNUASIM;  /* OPERATORS - nil -> mode */
A68_465  XNUASIM;  /* avoid structure result */
A68_465  YNUASIM;  /* OPERATORS - istruct -> vector */
A68_465  ZNUASIM;  /* OPERATORS - assign op */
A68_428  AOUASIM;  /* OPERATORS - vector -> row */
A68_426  GOUASIM;  /* procedure value */
A68_449  HOUASIM;  /* avoid structure result */
A68_449  IOUASIM;  /* OPERATORS - istruct -> vector */
A68_449  JOUASIM;  /* OPERATORS - assign op */
A68_448  KOUASIM;  /* clause result */
A_PROC_ENTRY(make_54);
RSCAOST_makeid( YLUASIM, &ZLUASIM );
WLUASIM.Overloaded_biop_name = ZLUASIM;
 /* line 1314: */
 /* line 1315: */
YLFASIM_label( GMUASIM, &HMUASIM );
EMUASIM.data[0].Biop_name = HMUASIM;
JMUASIM_generator( A68_FALSE, &MMUASIM );
OMUASIM = A_HVEC(NMUASIM,GIQASIM_sr,A68_INT ) ;
A_VASSIGN2(OMUASIM,MMUASIM,A68_INT ) ;
EMUASIM.data[0].Inputs = MMUASIM;
 /* line 1316: */
EMUASIM.data[0].No_of_macparams = 0;
EMUASIM.data[0].Output.Output_type_sort = IIQASIM_struct;
EMUASIM.data[0].Output.Limit_save = A68_FALSE;
 /* line 1317: */
TMUASIM.data[0].Output_type_sort = BIQASIM_tv;
TMUASIM.data[0].Limit_save = A68_FALSE;
TMUASIM.data[0].Struct_components = A_R1VAC(UMUASIM);
TMUASIM.data[1].Output_type_sort = HIQASIM_lr;
TMUASIM.data[1].Limit_save = A68_FALSE;
TMUASIM.data[1].Struct_components = A_R1VAC(VMUASIM);
QMUASIM_generator( A68_FALSE, &WMUASIM );
YMUASIM = A_HISVEC(XMUASIM,TMUASIM,2,A68_427 ) ;
A_VASSIGN2(YMUASIM,WMUASIM,A68_427 ) ;
EMUASIM.data[0].Output.Struct_components = A_VECARR(WMUASIM,ZMUASIM);
 /* line 1318: */
EMUASIM.data[0].Pointer = A68_TRUE;
 /* line 1320: */
FNUASIM.fn.fn_global = DNUASIM_anonymous;
FNUASIM.nonlocals = A68_NIL;
EMUASIM.data[0].Limit_check = FNUASIM;
YLFASIM_label( HNUASIM, &INUASIM );
EMUASIM.data[1].Biop_name = INUASIM;
KNUASIM_generator( A68_FALSE, &NNUASIM );
PNUASIM = A_HVEC(ONUASIM,HIQASIM_lr,A68_INT ) ;
A_VASSIGN2(PNUASIM,NNUASIM,A68_INT ) ;
EMUASIM.data[1].Inputs = NNUASIM;
 /* line 1321: */
EMUASIM.data[1].No_of_macparams = 0;
EMUASIM.data[1].Output.Output_type_sort = IIQASIM_struct;
EMUASIM.data[1].Output.Limit_save = A68_FALSE;
 /* line 1322: */
UNUASIM.data[0].Output_type_sort = BIQASIM_tv;
UNUASIM.data[0].Limit_save = A68_FALSE;
UNUASIM.data[0].Struct_components = A_R1VAC(VNUASIM);
UNUASIM.data[1].Output_type_sort = GIQASIM_sr;
UNUASIM.data[1].Limit_save = A68_FALSE;
UNUASIM.data[1].Struct_components = A_R1VAC(WNUASIM);
RNUASIM_generator( A68_FALSE, &XNUASIM );
ZNUASIM = A_HISVEC(YNUASIM,UNUASIM,2,A68_427 ) ;
A_VASSIGN2(ZNUASIM,XNUASIM,A68_427 ) ;
EMUASIM.data[1].Output.Struct_components = A_VECARR(XNUASIM,AOUASIM);
 /* line 1323: */
EMUASIM.data[1].Pointer = A68_TRUE;
 /* line 1325: */
 /* line 1326: */
GOUASIM.fn.fn_global = EOUASIM_anonymous;
GOUASIM.nonlocals = A68_NIL;
EMUASIM.data[1].Limit_check = GOUASIM;
BMUASIM_generator( A68_FALSE, &HOUASIM );
JOUASIM = A_HISVEC(IOUASIM,EMUASIM,2,A68_442 ) ;
A_VASSIGN2(JOUASIM,HOUASIM,A68_442 ) ;
WLUASIM.Biops = HOUASIM;
KOUASIM = WLUASIM;
A_PROC_EXIT(make_54);
*ReturnedValue = (KOUASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  MOUASIM_generator(A68_BOOL  LOUASIM_anonymous, A68_453  *ReturnedValue)
{ 
A68_453  NOUASIM;  /* clause result */
A68_453  OOUASIM;  /* OPERATORS - dynamic generator */
{ 
OOUASIM.upb = 54 ;
( LOUASIM_anonymous? A_VLOC(A68_448 ,OOUASIM): A_VHEAP(A68_448 ,OOUASIM) );
NOUASIM = OOUASIM;
} 
*ReturnedValue = (NOUASIM);
return;
} 
#undef NL

A68_VOID  ROUASIM_initialisebiop(void)
{ 
A68_475  SOUASIM;  /* collateral clause result */
A68_448  TOUASIM;  /* avoid structure result */
A68_448  UOUASIM;  /* avoid structure result */
A68_448  VOUASIM;  /* avoid structure result */
A68_448  WOUASIM;  /* avoid structure result */
A68_448  XOUASIM;  /* avoid structure result */
A68_448  YOUASIM;  /* avoid structure result */
A68_448  ZOUASIM;  /* avoid structure result */
A68_448  APUASIM;  /* avoid structure result */
A68_448  BPUASIM;  /* avoid structure result */
A68_448  CPUASIM;  /* avoid structure result */
A68_448  DPUASIM;  /* avoid structure result */
A68_448  EPUASIM;  /* avoid structure result */
A68_448  FPUASIM;  /* avoid structure result */
A68_448  GPUASIM;  /* avoid structure result */
A68_448  HPUASIM;  /* avoid structure result */
A68_448  IPUASIM;  /* avoid structure result */
A68_448  JPUASIM;  /* avoid structure result */
A68_448  KPUASIM;  /* avoid structure result */
A68_448  LPUASIM;  /* avoid structure result */
A68_448  MPUASIM;  /* avoid structure result */
A68_448  NPUASIM;  /* avoid structure result */
A68_448  OPUASIM;  /* avoid structure result */
A68_448  PPUASIM;  /* avoid structure result */
A68_448  QPUASIM;  /* avoid structure result */
A68_448  RPUASIM;  /* avoid structure result */
A68_448  SPUASIM;  /* avoid structure result */
A68_448  TPUASIM;  /* avoid structure result */
A68_448  UPUASIM;  /* avoid structure result */
A68_448  VPUASIM;  /* avoid structure result */
A68_448  WPUASIM;  /* avoid structure result */
A68_448  XPUASIM;  /* avoid structure result */
A68_448  YPUASIM;  /* avoid structure result */
A68_448  ZPUASIM;  /* avoid structure result */
A68_448  AQUASIM;  /* avoid structure result */
A68_448  BQUASIM;  /* avoid structure result */
A68_448  CQUASIM;  /* avoid structure result */
A68_448  DQUASIM;  /* avoid structure result */
A68_448  EQUASIM;  /* avoid structure result */
A68_448  FQUASIM;  /* avoid structure result */
A68_448  GQUASIM;  /* avoid structure result */
A68_448  HQUASIM;  /* avoid structure result */
A68_448  IQUASIM;  /* avoid structure result */
A68_448  JQUASIM;  /* avoid structure result */
A68_448  KQUASIM;  /* avoid structure result */
A68_448  LQUASIM;  /* avoid structure result */
A68_448  MQUASIM;  /* avoid structure result */
A68_448  NQUASIM;  /* avoid structure result */
A68_448  OQUASIM;  /* avoid structure result */
A68_448  PQUASIM;  /* avoid structure result */
A68_448  QQUASIM;  /* avoid structure result */
A68_448  RQUASIM;  /* avoid structure result */
A68_448  SQUASIM;  /* avoid structure result */
A68_448  TQUASIM;  /* avoid structure result */
A68_448  UQUASIM;  /* avoid structure result */
A68_453  VQUASIM;  /* OPERATORS - istruct -> vector */
A68_453  WQUASIM;  /* OPERATORS - assign op */
A_PROC_ENTRY(initialisebiop);
 /* line 1334: */
HUQASIM_make_1(  &TOUASIM );
SOUASIM.data[0] = TOUASIM;
JWQASIM_make_2(  &UOUASIM );
SOUASIM.data[1] = UOUASIM;
LYQASIM_make_3(  &VOUASIM );
SOUASIM.data[2] = VOUASIM;
JARASIM_make_4(  &WOUASIM );
SOUASIM.data[3] = WOUASIM;
LCRASIM_make_5(  &XOUASIM );
SOUASIM.data[4] = XOUASIM;
TDRASIM_make_6(  &YOUASIM );
SOUASIM.data[5] = YOUASIM;
BFRASIM_make_7(  &ZOUASIM );
SOUASIM.data[6] = ZOUASIM;
 /* line 1335: */
JGRASIM_make_8(  &APUASIM );
SOUASIM.data[7] = APUASIM;
ZIRASIM_make_9(  &BPUASIM );
SOUASIM.data[8] = BPUASIM;
PLRASIM_make_10(  &CPUASIM );
SOUASIM.data[9] = CPUASIM;
FORASIM_make_11(  &DPUASIM );
SOUASIM.data[10] = DPUASIM;
VQRASIM_make_12(  &EPUASIM );
SOUASIM.data[11] = EPUASIM;
LTRASIM_make_13(  &FPUASIM );
SOUASIM.data[12] = FPUASIM;
BWRASIM_make_14(  &GPUASIM );
SOUASIM.data[13] = GPUASIM;
RYRASIM_make_15(  &HPUASIM );
SOUASIM.data[14] = HPUASIM;
 /* line 1336: */
AASASIM_make_16(  &IPUASIM );
SOUASIM.data[15] = IPUASIM;
JBSASIM_make_17(  &JPUASIM );
SOUASIM.data[16] = JPUASIM;
SCSASIM_make_18(  &KPUASIM );
SOUASIM.data[17] = KPUASIM;
BESASIM_make_19(  &LPUASIM );
SOUASIM.data[18] = LPUASIM;
KFSASIM_make_20(  &MPUASIM );
SOUASIM.data[19] = MPUASIM;
TGSASIM_make_21(  &NPUASIM );
SOUASIM.data[20] = NPUASIM;
AISASIM_make_22(  &OPUASIM );
SOUASIM.data[21] = OPUASIM;
HJSASIM_make_23(  &PPUASIM );
SOUASIM.data[22] = PPUASIM;
 /* line 1337: */
OKSASIM_make_24(  &QPUASIM );
SOUASIM.data[23] = QPUASIM;
VLSASIM_make_25(  &RPUASIM );
SOUASIM.data[24] = RPUASIM;
QNSASIM_make_26(  &SPUASIM );
SOUASIM.data[25] = SPUASIM;
LPSASIM_make_27(  &TPUASIM );
SOUASIM.data[26] = TPUASIM;
DRSASIM_make_28(  &UPUASIM );
SOUASIM.data[27] = UPUASIM;
VSSASIM_make_29(  &VPUASIM );
SOUASIM.data[28] = VPUASIM;
KUSASIM_make_30(  &WPUASIM );
SOUASIM.data[29] = WPUASIM;
ZVSASIM_make_31(  &XPUASIM );
SOUASIM.data[30] = XPUASIM;
 /* line 1338: */
FXSASIM_make_32(  &YPUASIM );
SOUASIM.data[31] = YPUASIM;
LYSASIM_make_33(  &ZPUASIM );
SOUASIM.data[32] = ZPUASIM;
RZSASIM_make_34(  &AQUASIM );
SOUASIM.data[33] = AQUASIM;
XATASIM_make_35(  &BQUASIM );
SOUASIM.data[34] = BQUASIM;
DCTASIM_make_36(  &CQUASIM );
SOUASIM.data[35] = CQUASIM;
JDTASIM_make_37(  &DQUASIM );
SOUASIM.data[36] = DQUASIM;
PETASIM_make_38(  &EQUASIM );
SOUASIM.data[37] = EQUASIM;
VFTASIM_make_39(  &FQUASIM );
SOUASIM.data[38] = FQUASIM;
 /* line 1339: */
BHTASIM_make_40(  &GQUASIM );
SOUASIM.data[39] = GQUASIM;
HITASIM_make_41(  &HQUASIM );
SOUASIM.data[40] = HQUASIM;
XKTASIM_make_42(  &IQUASIM );
SOUASIM.data[41] = IQUASIM;
LOTASIM_make_43(  &JQUASIM );
SOUASIM.data[42] = JQUASIM;
QPTASIM_make_44(  &KQUASIM );
SOUASIM.data[43] = KQUASIM;
VQTASIM_make_45(  &LQUASIM );
SOUASIM.data[44] = LQUASIM;
RSTASIM_make_46(  &MQUASIM );
SOUASIM.data[45] = MQUASIM;
JVTASIM_make_47(  &NQUASIM );
SOUASIM.data[46] = NQUASIM;
 /* line 1340: */
BYTASIM_make_48(  &OQUASIM );
SOUASIM.data[47] = OQUASIM;
TAUASIM_make_49(  &PQUASIM );
SOUASIM.data[48] = PQUASIM;
LDUASIM_make_50(  &QQUASIM );
SOUASIM.data[49] = QQUASIM;
BGUASIM_make_51(  &RQUASIM );
SOUASIM.data[50] = RQUASIM;
ZHUASIM_make_52(  &SQUASIM );
SOUASIM.data[51] = SQUASIM;
XJUASIM_make_53(  &TQUASIM );
SOUASIM.data[52] = TQUASIM;
VLUASIM_make_54(  &UQUASIM );
SOUASIM.data[53] = UQUASIM;
WQUASIM = A_HISVEC(VQUASIM,SOUASIM,54,A68_448 ) ;
A_VASSIGN2(WQUASIM,POUASIM_thebioptable,A68_448 );
A_PROC_EXIT(initialisebiop);
return;
} 
#undef NL

A_STATIC A68_BOOL  ARUASIM_bioptablelookup(A68_453  Table, A68_VC  Name, A68_448 * O)
{ 
A68_BOOL  BRUASIM_found;
A68_INT  CRUASIM_i;
A68_INT  DRUASIM;  /* to part of loop */
A68_BOOL  ERUASIM;  /* clause result */
A_PROC_ENTRY(bioptablelookup);
 /* line 1346: */
 /* line 1347: */
{ 
BRUASIM_found = A68_FALSE;
 /* line 1348: */
DRUASIM = Table.upb;
for ( CRUASIM_i = 1;
CRUASIM_i <= DRUASIM;
CRUASIM_i += 1 )
{ 
 /* line 1349: */
if ( !(!BRUASIM_found) ) break;
 /* line 1350: */
if ( A_VC_EQ((*(&((&A_VINDEX(Table,CRUASIM_i))->Overloaded_biop_name))),Name) )
{ 
BRUASIM_found = A68_TRUE;
 /* line 1351: */
 /* line 1352: */
 /* line 1353: */
(*O) = (*(&A_VINDEX(Table,CRUASIM_i)));
} 
}
 /* line 1354: */
 /* line 1355: */
ERUASIM = BRUASIM_found;
} 
A_PROC_EXIT(bioptablelookup);
return( ERUASIM );
} 
#undef NL
 /* line 1360: */
 /* line 1361: */
 /* line 1362: */

A_STATIC A68_VOID  ORUASIM_bioptabletranslate(A68_453  Table, A68_129  Body, A68_121  Declaration, A68_32  Inputtypes, A68_INT  Outputtype, A68_115  Environ, A68_248 * Closure, A68_36  Flt, A68_INT  Outputoffset)
{ 
A68_448  PRUASIM_biop;
A_PROC_ENTRY(bioptabletranslate);
 /* line 1364: */
 /* line 1367: */
{ 
 /* line 1368: */
 /* line 1369: */
if ( ARUASIM_bioptablelookup(Table, Body.Name, (&PRUASIM_biop)) )
{ 
 /* line 1370: */
 /* line 1371: */
 /* line 1372: */
VTQASIM_overloadedbioptranslate(PRUASIM_biop, Body, Declaration, Inputtypes, Outputtype, Environ, Closure, Flt, Outputoffset);
} 
else
{ 
 /* line 1373: */
 /* line 1374: */
 /* line 1376: */
A_CALLPROC(Flt,(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(SRUASIM,Body.Name),TRUASIM),Declaration.Fnname)),(A_VC_PLUS(A_VC_PLUS(A_VC_PLUS(SRUASIM,Body.Name),TRUASIM),Declaration.Fnname),(Flt).nonlocals));
} 
} 
A_PROC_EXIT(bioptabletranslate);
return;
} 
#undef NL
 /* line 1381: */
 /* line 1382: */
 /* line 1383: */

A68_VOID  CSUASIM_translatebiop(A68_129  Body, A68_VC  Name, A68_121  Declaration, A68_32  Inputtypes, A68_INT  Outputtype, A68_115  Environ, A68_248 * Closure, A68_36  Flt, A68_322  *ReturnedValue)
{ 
A68_INT  DSUASIM_outputoffset;
A68_INT  ESUASIM_fixedpartsize;
A68_322  FSUASIM;  /* collateral clause result */
A68_322  GSUASIM;  /* clause result */
A_PROC_ENTRY(translatebiop);
 /* line 1385: */
 /* line 1387: */
{ 
 /* line 1388: */
DSUASIM_outputoffset = ((GENASIM_sizeunit+DENASIM_ws)+(Inputtypes.upb*DENASIM_ws));
 /* line 1390: */
DOPASIM_translatestartfunction(Name);
 /* line 1392: */
 /* line 1393: */
ORUASIM_bioptabletranslate(POUASIM_thebioptable, Body, Declaration, Inputtypes, Outputtype, Environ, Closure, Flt, DSUASIM_outputoffset);
 /* line 1395: */
ESUASIM_fixedpartsize = (DSUASIM_outputoffset+YGCASIM_lookuptypesize(Outputtype));
 /* line 1396: */
ZOPASIM_translateendfunction(ESUASIM_fixedpartsize, 1);
 /* line 1398: */
FSUASIM.Size = ESUASIM_fixedpartsize;
FSUASIM.Offset = DSUASIM_outputoffset;
 /* line 1399: */
 /* line 1401: */
FSUASIM.Sort = IHCASIM_combinatorial;
GSUASIM = FSUASIM;
} 
A_PROC_EXIT(translatebiop);
*ReturnedValue = (GSUASIM);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void DGQASIM(void)   /* initialise DECS keambiop */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259R","./a68files/keambiop.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/kebasics.m","./mfiles/keamstandard.m","./mfiles/keambasics.m","./mfiles/kesymbols.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/transform/assoc/mfiles/assmodes.m","/u/model/ella/transform/assoc/mfiles/modeprocs.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_33  GUQASIM;  /* procedure value */
A68_453  QOUASIM;  /* avoid structure result */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
JSAASIM();   /* USE kebasics */
HYOASIM();   /* USE keamstandard */
XDNASIM();   /* USE keambasics */
TCCASIM();   /* USE kesymbols */
JSCAOST();   /* USE basics */
BAAATRN();   /* USE assmodes */
HNMATRN();   /* USE modeprocs */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/sim/assoc/./a68files/keambiop.a68";
A_config.translation_time = "Tue Apr  4 11:09:40 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "CGQASIM (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 11:09:40 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS keambiop);
UEAALIB_a68config(LGAALIB_configinfo, HGQASIM);
 /* line 53: */
 /* line 57: */
 /* line 70: */
 /* line 91: */
 /* line 101: */
 /* line 105: */
 /* line 107: */
 /* line 108: */
 /* line 110: */
 /* line 129: */
 /* line 147: */
 /* line 169: */
 /* line 177: */
 /* line 180: */
 /* line 186: */
 /* line 188: */
 /* line 239: */
 /* line 261: */
 /* line 291: */
 /* line 338: */
 /* line 386: */
 /* line 390: */
 /* line 392: */
 /* line 418: */
 /* line 437: */
 /* line 532: */
 /* line 541: */
 /* line 543: */
 /* line 545: */
 /* line 627: */
 /* line 631: */
 /* line 633: */
 /* line 635: */
 /* line 656: */
 /* line 658: */
 /* line 678: */
 /* line 681: */
GUQASIM.fn.fn_global = DUQASIM_generator;
GUQASIM.nonlocals = A68_NIL;
BUQASIM_anonymous = GUQASIM;
 /* line 684: */
 /* line 685: */
 /* line 696: */
 /* line 697: */
 /* line 707: */
 /* line 708: */
 /* line 718: */
 /* line 719: */
 /* line 729: */
 /* line 730: */
 /* line 738: */
 /* line 739: */
 /* line 747: */
 /* line 748: */
 /* line 756: */
 /* line 757: */
 /* line 768: */
 /* line 769: */
 /* line 780: */
 /* line 781: */
 /* line 792: */
 /* line 793: */
 /* line 804: */
 /* line 805: */
 /* line 816: */
 /* line 817: */
 /* line 834: */
 /* line 835: */
 /* line 852: */
 /* line 853: */
 /* line 862: */
 /* line 863: */
 /* line 872: */
 /* line 873: */
 /* line 882: */
 /* line 883: */
 /* line 892: */
 /* line 893: */
 /* line 902: */
 /* line 903: */
 /* line 912: */
 /* line 913: */
 /* line 922: */
 /* line 923: */
 /* line 932: */
 /* line 933: */
 /* line 942: */
 /* line 943: */
 /* line 952: */
 /* line 953: */
 /* line 963: */
 /* line 964: */
 /* line 974: */
 /* line 975: */
 /* line 985: */
 /* line 986: */
 /* line 996: */
 /* line 997: */
 /* line 1007: */
 /* line 1008: */
 /* line 1018: */
 /* line 1019: */
 /* line 1028: */
 /* line 1029: */
 /* line 1038: */
 /* line 1039: */
 /* line 1048: */
 /* line 1049: */
 /* line 1058: */
 /* line 1059: */
 /* line 1068: */
 /* line 1069: */
 /* line 1078: */
 /* line 1079: */
 /* line 1088: */
 /* line 1089: */
 /* line 1098: */
 /* line 1099: */
 /* line 1108: */
 /* line 1109: */
 /* line 1118: */
 /* line 1119: */
 /* line 1134: */
 /* line 1135: */
 /* line 1156: */
 /* line 1157: */
 /* line 1166: */
 /* line 1167: */
 /* line 1176: */
 /* line 1177: */
 /* line 1190: */
 /* line 1191: */
 /* line 1206: */
 /* line 1207: */
 /* line 1222: */
 /* line 1223: */
 /* line 1238: */
 /* line 1239: */
 /* line 1254: */
 /* line 1255: */
 /* line 1270: */
 /* line 1271: */
 /* line 1284: */
 /* line 1285: */
 /* line 1298: */
 /* line 1299: */
 /* line 1312: */
 /* line 1313: */
 /* line 1329: */
MOUASIM_generator( A68_TRUE, &QOUASIM );
POUASIM_thebioptable = QOUASIM;
 /* line 1331: */
 /* line 1333: */
 /* line 1342: */
 /* line 1344: */
 /* line 1357: */
 /* line 1359: */
 /* line 1378: */
 /* line 1380: */
 /* line 1404: */
A_PROC_EXIT(DECS keambiop);
} 
#undef NL
/* end of translation of ./a68files/keambiop.a68 */
