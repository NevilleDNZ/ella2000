
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
/* UNAME:AFQASIM */
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
struct A68t93{
A68_VC  Id;
struct A68t93 * Rest;
};
typedef struct A68t93  A68_93 ;    /* STRUCT(REF MODE26,REF MODE93)  */
struct A68t94{
A68_INT  Int;
A_PAD_INT(PAD_20)
struct A68t94 * Rest;
};
typedef struct A68t94  A68_94 ;    /* STRUCT(INT,REF MODE94)  */
struct A68t95 { A68_INT mode; union {
struct A68t96 * mode1;
struct A68t97 * mode2;
struct A68t98 * mode3;
struct A68t99 * mode4;
struct A68t100 * mode5;
} data; };
typedef struct A68t95  A68_95 ;    /* UNION(REF MODE96,REF MODE97,REF MODE98,REF MODE99,REF MODE100)  */
struct A68t96{
A68_INT  Attrno;
A_PAD_INT(PAD_21)
};
typedef struct A68t96  A68_96 ;    /* STRUCT(INT)  */
struct A68t97{
A68_VC  Classname;
struct A68t93 * Strings;
};
typedef struct A68t97  A68_97 ;    /* STRUCT(REF MODE26,REF MODE93)  */
struct A68t98{
struct A68t95  Elem;
struct A68t98 * Rest;
};
typedef struct A68t98  A68_98 ;    /* STRUCT(MODE95,REF MODE98)  */
struct A68t99{
struct A68t95  Attr;
};
typedef struct A68t99  A68_99 ;    /* STRUCT(MODE95)  */
struct A68t100{
A68_INT  Attrnull;
A_PAD_INT(PAD_22)
};
typedef struct A68t100  A68_100 ;    /* STRUCT(INT)  */
struct A68t101{
A68_INT  Sort;
A_PAD_INT(PAD_23)
A68_VC  Attrname;
struct A68t95  Value;
struct A68t102 * Usage;
};
typedef struct A68t101  A68_101 ;    /* STRUCT(INT,REF MODE26,MODE95,REF MODE102)  */
struct A68t102{
A68_INT  Contextno;
A_PAD_INT(PAD_24)
A68_INT  Closureno;
A_PAD_INT(PAD_25)
A68_INT  Libv_spec;
A_PAD_INT(PAD_26)
A68_INT  Libv_body;
A_PAD_INT(PAD_27)
A68_BOOL  Import;
A_PAD_BOOL(PAD_28)
A68_BOOL  Export;
A_PAD_BOOL(PAD_29)
};
typedef struct A68t102  A68_102 ;    /* STRUCT(INT,INT,INT,INT,BOOL,BOOL)  */
struct A68t103{
struct A68t95  Tag;
};
typedef struct A68t103  A68_103 ;    /* STRUCT(MODE95)  */
struct A68t104 { A68_INT mode; union {
struct A68t105 * mode1;
struct A68t106 * mode2;
struct A68t107 * mode3;
struct A68t108 * mode4;
struct A68t109 * mode5;
struct A68t110 * mode6;
struct A68t111 * mode7;
struct A68t112 * mode8;
struct A68t113 * mode9;
struct A68t114 * mode10;
} data; };
typedef struct A68t104  A68_104 ;    /* UNION(REF MODE105,REF MODE106,REF MODE107,REF MODE108,REF MODE109,REF MODE110,REF MODE111,REF MODE112,REF MODE113,REF MODE114)  */
struct A68t105{
A68_INT  Int;
A_PAD_INT(PAD_30)
A68_VC  Text;
};
typedef struct A68t105  A68_105 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t106{
A68_INT  Sort;
A_PAD_INT(PAD_31)
struct A68t104  Test;
struct A68t104  Standard;
};
typedef struct A68t106  A68_106 ;    /* STRUCT(INT,MODE104,MODE104)  */
struct A68t107{
A68_INT  Nameno;
A_PAD_INT(PAD_32)
};
typedef struct A68t107  A68_107 ;    /* STRUCT(INT)  */
struct A68t108{
A68_INT  Intno;
A_PAD_INT(PAD_33)
};
typedef struct A68t108  A68_108 ;    /* STRUCT(INT)  */
struct A68t109{
struct A68t104  Left;
A68_INT  Sort;
A_PAD_INT(PAD_34)
struct A68t104  Right;
};
typedef struct A68t109  A68_109 ;    /* STRUCT(MODE104,INT,MODE104)  */
struct A68t110{
A68_INT  Sort;
A_PAD_INT(PAD_35)
struct A68t104  Right;
};
typedef struct A68t110  A68_110 ;    /* STRUCT(INT,MODE104)  */
struct A68t111{
struct A68t104  Cond;
struct A68t104  True;
struct A68t104  False;
};
typedef struct A68t111  A68_111 ;    /* STRUCT(MODE104,MODE104,MODE104)  */
struct A68t112{
struct A68t104  Formula;
};
typedef struct A68t112  A68_112 ;    /* STRUCT(MODE104)  */
struct A68t113{
A68_INT  Macparno;
A_PAD_INT(PAD_36)
};
typedef struct A68t113  A68_113 ;    /* STRUCT(INT)  */
struct A68t114{
A68_INT  Fnull;
A_PAD_INT(PAD_37)
};
typedef struct A68t114  A68_114 ;    /* STRUCT(INT)  */
struct A68t115{
struct A68t104  Tag;
};
typedef struct A68t115  A68_115 ;    /* STRUCT(MODE104)  */
struct A68t116{
struct A68t104  Formula;
struct A68t116 * Rest;
};
typedef struct A68t116  A68_116 ;    /* STRUCT(MODE104,REF MODE116)  */
struct A68t119{
struct A68t104  Lwb;
struct A68t104  Upb;
};
typedef struct A68t119  A68_119 ;    /* STRUCT(MODE104,MODE104)  */
struct A68t118 { A68_INT mode; union {
struct A68t105 * mode1;
struct A68t106 * mode2;
struct A68t107 * mode3;
struct A68t108 * mode4;
struct A68t109 * mode5;
struct A68t110 * mode6;
struct A68t111 * mode7;
struct A68t112 * mode8;
struct A68t113 * mode9;
struct A68t114 * mode10;
struct A68t119  mode11;
} data; };
typedef struct A68t118  A68_118 ;    /* UNION(REF MODE105,REF MODE106,REF MODE107,REF MODE108,REF MODE109,REF MODE110,REF MODE111,REF MODE112,REF MODE113,REF MODE114,MODE119)  */
struct A68t117{
A68_INT  Sort;
A_PAD_INT(PAD_38)
A68_VC  Intname;
struct A68t95  Attr;
struct A68t118  Value;
struct A68t102 * Usage;
};
typedef struct A68t117  A68_117 ;    /* STRUCT(INT,REF MODE26,MODE95,MODE118,REF MODE102)  */
struct A68t120 { A68_INT mode; union {
struct A68t121 * mode1;
struct A68t122 * mode2;
struct A68t123 * mode3;
struct A68t124 * mode4;
struct A68t125 * mode5;
struct A68t126 * mode6;
struct A68t127 * mode7;
struct A68t113 * mode8;
struct A68t128 * mode9;
} data; };
typedef struct A68t120  A68_120 ;    /* UNION(REF MODE121,REF MODE122,REF MODE123,REF MODE124,REF MODE125,REF MODE126,REF MODE127,REF MODE113,REF MODE128)  */
struct A68t121{
A68_INT  Typeno;
A_PAD_INT(PAD_39)
};
typedef struct A68t121  A68_121 ;    /* STRUCT(INT)  */
struct A68t122{
struct A68t104  Size;
struct A68t120  Elem;
};
typedef struct A68t122  A68_122 ;    /* STRUCT(MODE104,MODE120)  */
struct A68t123{
struct A68t120  Elem;
struct A68t123 * Rest;
};
typedef struct A68t123  A68_123 ;    /* STRUCT(MODE120,REF MODE123)  */
struct A68t124{
struct A68t120  From;
struct A68t120  To;
};
typedef struct A68t124  A68_124 ;    /* STRUCT(MODE120,MODE120)  */
struct A68t125{
struct A68t120  Type;
};
typedef struct A68t125  A68_125 ;    /* STRUCT(MODE120)  */
struct A68t126{
struct A68t104  Size;
struct A68t120  Char;
};
typedef struct A68t126  A68_126 ;    /* STRUCT(MODE104,MODE120)  */
struct A68t127{
A68_INT  Tvoid;
A_PAD_INT(PAD_40)
};
typedef struct A68t127  A68_127 ;    /* STRUCT(INT)  */
struct A68t128{
A68_INT  Tnull;
A_PAD_INT(PAD_41)
};
typedef struct A68t128  A68_128 ;    /* STRUCT(INT)  */
struct A68t129{
struct A68t120  Tag;
};
typedef struct A68t129  A68_129 ;    /* STRUCT(MODE120)  */
struct A68t130{
A68_VC  Tagname;
A68_VC  Chars;
};
typedef struct A68t130  A68_130 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t131{
A68_VC  Altname;
struct A68t120  Assoc;
};
typedef struct A68t131  A68_131 ;    /* STRUCT(REF MODE26,MODE120)  */
struct A68t132{
A68_VC  Tagname;
struct A68t119  Range;
};
typedef struct A68t132  A68_132 ;    /* STRUCT(REF MODE26,MODE119)  */
A_VECTOR(struct A68t131 ,A68t134);
typedef struct A68t134  A68_134 ;    /* VECTOR [] MODE131 */
struct A68t133 { A68_INT mode; union {
struct A68t134  mode1;
struct A68t132 * mode2;
struct A68t129 * mode3;
struct A68t130 * mode4;
} data; };
typedef struct A68t133  A68_133 ;    /* UNION(REF MODE134,REF MODE132,REF MODE129,REF MODE130)  */
struct A68t135{
A68_INT  Sort;
A_PAD_INT(PAD_42)
A68_VC  Typename;
struct A68t95  Attr;
struct A68t133  Body;
struct A68t102 * Usage;
};
typedef struct A68t135  A68_135 ;    /* STRUCT(INT,REF MODE26,MODE95,MODE133,REF MODE102)  */
struct A68t136{
A68_INT  Constno;
A_PAD_INT(PAD_43)
};
typedef struct A68t136  A68_136 ;    /* STRUCT(INT)  */
struct A68t137{
A68_INT  Typeno;
A_PAD_INT(PAD_44)
A68_INT  Primno;
A_PAD_INT(PAD_45)
};
typedef struct A68t137  A68_137 ;    /* STRUCT(INT,INT)  */
struct A68t138{
A68_INT  Typeno;
A_PAD_INT(PAD_46)
struct A68t104  Index;
};
typedef struct A68t138  A68_138 ;    /* STRUCT(INT,MODE104)  */
struct A68t139{
A68_INT  Typeno;
A_PAD_INT(PAD_47)
struct A68t119  Range;
};
typedef struct A68t139  A68_139 ;    /* STRUCT(INT,MODE119)  */
struct A68t140{
struct A68t120  Querytype;
};
typedef struct A68t140  A68_140 ;    /* STRUCT(MODE120)  */
struct A68t142 { A68_INT mode; union {
struct A68t136 * mode1;
struct A68t137 * mode2;
struct A68t138 * mode3;
struct A68t140 * mode4;
struct A68t143 * mode5;
struct A68t144 * mode6;
struct A68t125 * mode7;
struct A68t139 * mode8;
struct A68t145 * mode9;
struct A68t146 * mode10;
struct A68t147 * mode11;
struct A68t148 * mode12;
struct A68t149 * mode13;
struct A68t150 * mode14;
struct A68t151 * mode15;
struct A68t152 * mode16;
struct A68t153 * mode17;
struct A68t154 * mode18;
struct A68t155 * mode19;
struct A68t156 * mode20;
struct A68t157 * mode21;
struct A68t158 * mode22;
struct A68t159 * mode23;
struct A68t160 * mode24;
struct A68t161 * mode25;
struct A68t162 * mode26;
struct A68t163 * mode27;
struct A68t164 * mode28;
struct A68t165 * mode29;
struct A68t166 * mode30;
struct A68t167 * mode31;
struct A68t168 * mode32;
struct A68t169 * mode33;
struct A68t170 * mode34;
} data; };
typedef struct A68t142  A68_142 ;    /* UNION(REF MODE136,REF MODE137,REF MODE138,REF MODE140,REF MODE143,REF MODE144,REF MODE125,REF MODE139,REF MODE145,REF MODE146,REF MODE147,REF MODE148,REF MODE149,REF MODE150,REF MODE151,REF MODE152,REF MODE153,REF MODE154,REF MODE155,REF MODE156,REF MODE157,REF MODE158,REF MODE159,REF MODE160,REF MODE161,REF MODE162,REF MODE163,REF MODE164,REF MODE165,REF MODE166,REF MODE167,REF MODE168,REF MODE169,REF MODE170)  */
struct A68t141{
A68_INT  Sort;
A_PAD_INT(PAD_48)
A68_VC  Constname;
struct A68t95  Attr;
struct A68t142  Value;
struct A68t102 * Usage;
};
typedef struct A68t141  A68_141 ;    /* STRUCT(INT,REF MODE26,MODE95,MODE142,REF MODE102)  */
struct A68t143{
A68_INT  Typeno;
A_PAD_INT(PAD_49)
struct A68t32  String;
};
typedef struct A68t143  A68_143 ;    /* STRUCT(INT,REF MODE32)  */
struct A68t144{
A68_INT  Cvoid;
A_PAD_INT(PAD_50)
};
typedef struct A68t144  A68_144 ;    /* STRUCT(INT)  */
struct A68t145{
A68_INT  Typeno;
A_PAD_INT(PAD_51)
A68_INT  Firstno;
A_PAD_INT(PAD_52)
A68_INT  Lastno;
A_PAD_INT(PAD_53)
};
typedef struct A68t145  A68_145 ;    /* STRUCT(INT,INT,INT)  */
struct A68t146{
struct A68t142  Alt;
struct A68t146 * Rest;
};
typedef struct A68t146  A68_146 ;    /* STRUCT(MODE142,REF MODE146)  */
struct A68t147{
A68_INT  Sort;
A_PAD_INT(PAD_54)
A68_INT  Nameno;
A_PAD_INT(PAD_55)
};
typedef struct A68t147  A68_147 ;    /* STRUCT(INT,INT)  */
struct A68t148{
struct A68t142  Sink;
struct A68t142  Source;
};
typedef struct A68t148  A68_148 ;    /* STRUCT(MODE142,MODE142)  */
struct A68t149{
A68_INT  Typeno;
A_PAD_INT(PAD_56)
A68_INT  Altno;
A_PAD_INT(PAD_57)
struct A68t142  Assoc;
};
typedef struct A68t149  A68_149 ;    /* STRUCT(INT,INT,MODE142)  */
struct A68t150{
struct A68t142  Extract;
A68_INT  Typeno;
A_PAD_INT(PAD_58)
A68_INT  Altno;
A_PAD_INT(PAD_59)
};
typedef struct A68t150  A68_150 ;    /* STRUCT(MODE142,INT,INT)  */
struct A68t151{
struct A68t142  Unit;
A68_INT  Fnno;
A_PAD_INT(PAD_60)
A68_INT  Nameno;
A_PAD_INT(PAD_61)
};
typedef struct A68t151  A68_151 ;    /* STRUCT(MODE142,INT,INT)  */
struct A68t152{
struct A68t142  Unit;
struct A68t104  Index;
};
typedef struct A68t152  A68_152 ;    /* STRUCT(MODE142,MODE104)  */
struct A68t153{
struct A68t142  Unit;
struct A68t119  Range;
};
typedef struct A68t153  A68_153 ;    /* STRUCT(MODE142,MODE119)  */
struct A68t154{
struct A68t142  Unit;
struct A68t142  Index;
};
typedef struct A68t154  A68_154 ;    /* STRUCT(MODE142,MODE142)  */
struct A68t155{
struct A68t142  Unit;
struct A68t142  Index;
struct A68t142  From;
};
typedef struct A68t155  A68_155 ;    /* STRUCT(MODE142,MODE142,MODE142)  */
struct A68t156{
struct A68t104  Size;
struct A68t142  Elem;
};
typedef struct A68t156  A68_156 ;    /* STRUCT(MODE104,MODE142)  */
struct A68t157{
struct A68t142  Elem;
struct A68t157 * Rest;
};
typedef struct A68t157  A68_157 ;    /* STRUCT(MODE142,REF MODE157)  */
struct A68t158{
A68_BOOL  String;
A_PAD_BOOL(PAD_62)
A68_INT  Sort;
A_PAD_INT(PAD_63)
struct A68t142  Left;
struct A68t142  Right;
};
typedef struct A68t158  A68_158 ;    /* STRUCT(BOOL,INT,MODE142,MODE142)  */
A_VECTOR(struct A68t185 ,A68t184);
typedef struct A68t184  A68_184 ;    /* VECTOR [] MODE185 */
struct A68t187{
struct A68t142  Tag;
};
typedef struct A68t187  A68_187 ;    /* STRUCT(MODE142)  */
struct A68t182{
A68_INT  Fnno;
A_PAD_INT(PAD_64)
struct A68t184  Macparams;
struct A68t95  Attr;
};
typedef struct A68t182  A68_182 ;    /* STRUCT(INT,REF MODE184,MODE95)  */
struct A68t186 { A68_INT mode; union {
struct A68t103  mode1;
struct A68t115  mode2;
struct A68t129  mode3;
struct A68t187  mode4;
struct A68t182  mode5;
} data; };
typedef struct A68t186  A68_186 ;    /* UNION(MODE103,MODE115,MODE129,MODE187,MODE182)  */
struct A68t185{
A68_INT  Sort;
A_PAD_INT(PAD_65)
struct A68t186  Param;
};
typedef struct A68t185  A68_185 ;    /* STRUCT(INT,MODE186)  */
struct A68t159{
struct A68t182  Inst;
struct A68t142  Right;
};
typedef struct A68t159  A68_159 ;    /* STRUCT(MODE182,MODE142)  */
struct A68t160{
struct A68t142  Left;
struct A68t182  Inst;
struct A68t142  Right;
};
typedef struct A68t160  A68_160 ;    /* STRUCT(MODE142,MODE182,MODE142)  */
struct A68t161{
struct A68t142  Input;
struct A68t202 * Choices;
};
typedef struct A68t161  A68_161 ;    /* STRUCT(MODE142,REF MODE202)  */
struct A68t162{
struct A68t104  Cond;
struct A68t142  True;
struct A68t142  False;
};
typedef struct A68t162  A68_162 ;    /* STRUCT(MODE104,MODE142,MODE142)  */
struct A68t163{
struct A68t104  Repl;
struct A68t142  Body;
};
typedef struct A68t163  A68_163 ;    /* STRUCT(MODE104,MODE142)  */
struct A68t164{
struct A68t190 * Body;
struct A68t142  Output;
};
typedef struct A68t164  A68_164 ;    /* STRUCT(REF MODE190,MODE142)  */
struct A68t165{
struct A68t171 * Body;
struct A68t142  Output;
};
typedef struct A68t165  A68_165 ;    /* STRUCT(REF MODE171,MODE142)  */
struct A68t166{
struct A68t142  Unit;
struct A68t95  Attr;
};
typedef struct A68t166  A68_166 ;    /* STRUCT(MODE142,MODE95)  */
struct A68t167{
struct A68t142  Unit;
struct A68t106  Check;
};
typedef struct A68t167  A68_167 ;    /* STRUCT(MODE142,MODE106)  */
struct A68t168{
struct A68t142  Unit;
};
typedef struct A68t168  A68_168 ;    /* STRUCT(MODE142)  */
struct A68t169{
struct A68t104  Size;
struct A68t142  Char;
};
typedef struct A68t169  A68_169 ;    /* STRUCT(MODE104,MODE142)  */
struct A68t170{
A68_INT  Unull;
A_PAD_INT(PAD_66)
};
typedef struct A68t170  A68_170 ;    /* STRUCT(INT)  */
struct A68t173{
A68_INT  Fnno;
A_PAD_INT(PAD_67)
};
typedef struct A68t173  A68_173 ;    /* STRUCT(INT)  */
struct A68t172 { A68_INT mode; union {
struct A68t96  mode1;
struct A68t108  mode2;
struct A68t121  mode3;
struct A68t136  mode4;
struct A68t173  mode5;
struct A68t174 * mode6;
struct A68t175 * mode7;
struct A68t176 * mode8;
struct A68t177 * mode9;
struct A68t178 * mode10;
struct A68t179 * mode11;
struct A68t180 * mode12;
} data; };
typedef struct A68t172  A68_172 ;    /* UNION(MODE96,MODE108,MODE121,MODE136,MODE173,REF MODE174,REF MODE175,REF MODE176,REF MODE177,REF MODE178,REF MODE179,REF MODE180)  */
struct A68t171{
struct A68t172  Step;
struct A68t171 * Rest;
};
typedef struct A68t171  A68_171 ;    /* STRUCT(MODE172,REF MODE171)  */
struct A68t174{
struct A68t104  Cond;
struct A68t188 * Print;
};
typedef struct A68t174  A68_174 ;    /* STRUCT(MODE104,REF MODE188)  */
struct A68t175{
struct A68t104  Cond;
struct A68t188 * Fault;
};
typedef struct A68t175  A68_175 ;    /* STRUCT(MODE104,REF MODE188)  */
struct A68t176{
struct A68t183 * Letnames;
struct A68t142  Unit;
};
typedef struct A68t176  A68_176 ;    /* STRUCT(REF MODE183,MODE142)  */
struct A68t177{
struct A68t116 * Sizes;
struct A68t182  Inst;
struct A68t183 * Makenames;
};
typedef struct A68t177  A68_177 ;    /* STRUCT(REF MODE116,MODE182,REF MODE183)  */
struct A68t178{
struct A68t142  From;
struct A68t142  To;
};
typedef struct A68t178  A68_178 ;    /* STRUCT(MODE142,MODE142)  */
struct A68t179{
struct A68t116 * Repls;
struct A68t181 * Joins;
};
typedef struct A68t179  A68_179 ;    /* STRUCT(REF MODE116,REF MODE181)  */
struct A68t180{
A68_INT  Stepnull;
A_PAD_INT(PAD_68)
};
typedef struct A68t180  A68_180 ;    /* STRUCT(INT)  */
struct A68t181{
struct A68t178  Join;
struct A68t181 * Rest;
};
typedef struct A68t181  A68_181 ;    /* STRUCT(MODE178,REF MODE181)  */
struct A68t183{
A68_INT  Nameno;
A_PAD_INT(PAD_69)
struct A68t183 * Rest;
};
typedef struct A68t183  A68_183 ;    /* STRUCT(INT,REF MODE183)  */
struct A68t189 { A68_INT mode; union {
A68_VC  mode1;
struct A68t115 * mode2;
} data; };
typedef struct A68t189  A68_189 ;    /* UNION(REF MODE26,REF MODE115)  */
struct A68t188{
struct A68t189  Item;
struct A68t188 * Rest;
};
typedef struct A68t188  A68_188 ;    /* STRUCT(MODE189,REF MODE188)  */
struct A68t191 { A68_INT mode; union {
struct A68t96  mode1;
struct A68t108  mode2;
struct A68t121  mode3;
struct A68t136  mode4;
struct A68t173  mode5;
struct A68t174 * mode6;
struct A68t175 * mode7;
struct A68t192 * mode8;
struct A68t193 * mode9;
struct A68t194 * mode10;
struct A68t195 * mode11;
struct A68t196 * mode12;
struct A68t197 * mode13;
struct A68t198 * mode14;
struct A68t199 * mode15;
struct A68t190 * mode16;
struct A68t200 * mode17;
} data; };
typedef struct A68t191  A68_191 ;    /* UNION(MODE96,MODE108,MODE121,MODE136,MODE173,REF MODE174,REF MODE175,REF MODE192,REF MODE193,REF MODE194,REF MODE195,REF MODE196,REF MODE197,REF MODE198,REF MODE199,REF MODE190,REF MODE200)  */
struct A68t190{
struct A68t191  Step;
struct A68t190 * Rest;
};
typedef struct A68t190  A68_190 ;    /* STRUCT(MODE191,REF MODE190)  */
struct A68t192{
struct A68t176  Seqlet;
};
typedef struct A68t192  A68_192 ;    /* STRUCT(MODE176)  */
struct A68t193{
struct A68t176  Seqvar;
};
typedef struct A68t193  A68_193 ;    /* STRUCT(MODE176)  */
struct A68t194{
struct A68t183 * Pvarnames;
struct A68t142  Init;
};
typedef struct A68t194  A68_194 ;    /* STRUCT(REF MODE183,MODE142)  */
struct A68t195{
struct A68t142  To;
struct A68t142  From;
};
typedef struct A68t195  A68_195 ;    /* STRUCT(MODE142,MODE142)  */
struct A68t196{
struct A68t142  Input;
struct A68t201 * Choices;
};
typedef struct A68t196  A68_196 ;    /* STRUCT(MODE142,REF MODE201)  */
struct A68t197{
struct A68t104  Cond;
struct A68t191  True;
struct A68t191  False;
};
typedef struct A68t197  A68_197 ;    /* STRUCT(MODE104,MODE191,MODE191)  */
struct A68t198{
struct A68t104  Repl;
struct A68t191  Body;
};
typedef struct A68t198  A68_198 ;    /* STRUCT(MODE104,MODE191)  */
struct A68t199{
A68_INT  Seqnull;
A_PAD_INT(PAD_70)
};
typedef struct A68t199  A68_199 ;    /* STRUCT(INT)  */
struct A68t200{
struct A68t104  Size;
struct A68t191  Elem;
};
typedef struct A68t200  A68_200 ;    /* STRUCT(MODE104,MODE191)  */
struct A68t201{
A68_BOOL  Check;
A_PAD_BOOL(PAD_71)
A68_INT  Sort;
A_PAD_INT(PAD_72)
struct A68t142  Test;
struct A68t191  Output;
struct A68t201 * Rest;
};
typedef struct A68t201  A68_201 ;    /* STRUCT(BOOL,INT,MODE142,MODE191,REF MODE201)  */
struct A68t202{
A68_BOOL  Check;
A_PAD_BOOL(PAD_73)
A68_INT  Sort;
A_PAD_INT(PAD_74)
struct A68t142  Test;
struct A68t142  Output;
struct A68t202 * Rest;
};
typedef struct A68t202  A68_202 ;    /* STRUCT(BOOL,INT,MODE142,MODE142,REF MODE202)  */
struct A68t203 { A68_INT mode; union {
struct A68t96  mode1;
struct A68t108  mode2;
struct A68t121  mode3;
struct A68t136  mode4;
struct A68t173  mode5;
} data; };
typedef struct A68t203  A68_203 ;    /* UNION(MODE96,MODE108,MODE121,MODE136,MODE173)  */
struct A68t204{
A68_BOOL  Biop;
A_PAD_BOOL(PAD_75)
A68_VC  Name;
struct A68t184  Macparams;
};
typedef struct A68t204  A68_204 ;    /* STRUCT(BOOL,REF MODE26,REF MODE184)  */
struct A68t205{
struct A68t104  Output;
};
typedef struct A68t205  A68_205 ;    /* STRUCT(MODE104)  */
struct A68t206{
A68_INT  Reform;
A_PAD_INT(PAD_76)
};
typedef struct A68t206  A68_206 ;    /* STRUCT(INT)  */
struct A68t207{
A68_VC  Name;
A68_INT  Contextno;
A_PAD_INT(PAD_77)
struct A68t92  Ctname;
};
typedef struct A68t207  A68_207 ;    /* STRUCT(REF MODE26,INT,MODE92)  */
struct A68t208{
A68_INT  Sort;
A_PAD_INT(PAD_78)
struct A68t142  Init;
struct A68t104  Ambigtime;
struct A68t142  Ambig;
struct A68t104  Delaytime;
};
typedef struct A68t208  A68_208 ;    /* STRUCT(INT,MODE142,MODE104,MODE142,MODE104)  */
struct A68t209{
struct A68t142  Init;
struct A68t104  Delaytime;
};
typedef struct A68t209  A68_209 ;    /* STRUCT(MODE142,MODE104)  */
struct A68t210{
struct A68t142  Init;
};
typedef struct A68t210  A68_210 ;    /* STRUCT(MODE142)  */
struct A68t211{
A68_INT  Sort;
A_PAD_INT(PAD_79)
struct A68t104  Interval;
struct A68t142  Init;
struct A68t104  Skew;
};
typedef struct A68t211  A68_211 ;    /* STRUCT(INT,MODE104,MODE142,MODE104)  */
struct A68t212{
A68_BOOL  Faster;
A_PAD_BOOL(PAD_80)
A68_INT  Sort;
A_PAD_INT(PAD_81)
struct A68t182  Inst;
struct A68t104  Scale;
struct A68t142  Init;
struct A68t104  Skew;
};
typedef struct A68t212  A68_212 ;    /* STRUCT(BOOL,INT,MODE182,MODE104,MODE142,MODE104)  */
struct A68t214 { A68_INT mode; union {
struct A68t187 * mode1;
struct A68t204 * mode2;
struct A68t205 * mode3;
struct A68t206 * mode4;
struct A68t207 * mode5;
struct A68t208 * mode6;
struct A68t209 * mode7;
struct A68t210 * mode8;
struct A68t211 * mode9;
struct A68t212 * mode10;
struct A68t213 * mode11;
struct A68t215 * mode12;
} data; };
typedef struct A68t214  A68_214 ;    /* UNION(REF MODE187,REF MODE204,REF MODE205,REF MODE206,REF MODE207,REF MODE208,REF MODE209,REF MODE210,REF MODE211,REF MODE212,REF MODE213,REF MODE215)  */
struct A68t213{
struct A68t94 * Joincheck;
A68_BOOL  Check;
A_PAD_BOOL(PAD_82)
struct A68t214  Fnbody;
};
typedef struct A68t213  A68_213 ;    /* STRUCT(REF MODE94,BOOL,MODE214)  */
struct A68t215{
A68_INT  Bodynull;
A_PAD_INT(PAD_83)
};
typedef struct A68t215  A68_215 ;    /* STRUCT(INT)  */
struct A68t216{
A68_INT  Sort;
A_PAD_INT(PAD_84)
struct A68t203  Spec;
};
typedef struct A68t216  A68_216 ;    /* STRUCT(INT,MODE203)  */
struct A68t217{
A68_VC  Name;
struct A68t120  Type;
struct A68t95  Attr;
};
typedef struct A68t217  A68_217 ;    /* STRUCT(REF MODE26,MODE120,MODE95)  */
A_VECTOR(struct A68t216 ,A68t219);
typedef struct A68t219  A68_219 ;    /* VECTOR [] MODE216 */
A_VECTOR(struct A68t217 ,A68t220);
typedef struct A68t220  A68_220 ;    /* VECTOR [] MODE217 */
struct A68t218{
A68_INT  Sort;
A_PAD_INT(PAD_85)
A68_BOOL  Macro;
A_PAD_BOOL(PAD_86)
A68_VC  Fnname;
struct A68t219  Macspecs;
struct A68t95  Attr;
struct A68t183 * Inputs;
struct A68t183 * Outputs;
struct A68t220  Nametypes;
struct A68t214  Fnbody;
struct A68t102 * Usage;
};
typedef struct A68t218  A68_218 ;    /* STRUCT(INT,BOOL,REF MODE26,REF MODE219,MODE95,REF MODE183,REF MODE183,REF MODE220,MODE214,REF MODE102)  */
A_VECTOR(struct A68t101 *,A68t222);
typedef struct A68t222  A68_222 ;    /* VECTOR [] REF MODE101 */
A_VECTOR(struct A68t117 *,A68t223);
typedef struct A68t223  A68_223 ;    /* VECTOR [] REF MODE117 */
A_VECTOR(struct A68t135 *,A68t224);
typedef struct A68t224  A68_224 ;    /* VECTOR [] REF MODE135 */
A_VECTOR(struct A68t141 *,A68t225);
typedef struct A68t225  A68_225 ;    /* VECTOR [] REF MODE141 */
A_VECTOR(struct A68t218 *,A68t226);
typedef struct A68t226  A68_226 ;    /* VECTOR [] REF MODE218 */
struct A68t221{
struct A68t222  Attrs;
struct A68t223  Ints;
struct A68t224  Types;
struct A68t225  Consts;
struct A68t226  Fns;
};
typedef struct A68t221  A68_221 ;    /* STRUCT(REF MODE222,REF MODE223,REF MODE224,REF MODE225,REF MODE226)  */
struct A68t227{
A68_INT  Closureno;
A_PAD_INT(PAD_87)
A68_INT  Sort;
A_PAD_INT(PAD_88)
struct A68t221 * Environ;
};
typedef struct A68t227  A68_227 ;    /* STRUCT(INT,INT,REF MODE221)  */
struct A68t228{
struct A68t227  Outer;
struct A68t228 * Rest;
};
typedef struct A68t228  A68_228 ;    /* STRUCT(MODE227,REF MODE228)  */
A_VECTOR(struct A68t228 ,A68t230);
typedef struct A68t230  A68_230 ;    /* VECTOR [] MODE228 */
struct A68t229{
struct A68t230  Outers;
struct A68t229 * Rest;
};
typedef struct A68t229  A68_229 ;    /* STRUCT(REF MODE230,REF MODE229)  */
struct A68t231{
A68_INT  Max_closureno;
A_PAD_INT(PAD_89)
struct A68t228 * Outers;
struct A68t228 * Freelist;
struct A68t229 * Outerslist;
};
typedef struct A68t231  A68_231 ;    /* STRUCT(INT,REF MODE228,REF MODE228,REF MODE229)  */
A_VECTOR(A68_VC ,A68t232);
typedef struct A68t232  A68_232 ;    /* VECTOR [] REF MODE26 */
A_VECTOR(struct A68t228 *,A68t233);
typedef struct A68t233  A68_233 ;    /* VECTOR [] REF MODE228 */

A_PROCEDURE(struct A68t107 *,A68t234,(A68_INT ),(A68_INT ,void *));
typedef struct A68t234  A68_234 ;    /* PROC(INT) REF MODE107 */

A_PROCEDURE(struct A68t108 *,A68t235,(A68_INT ),(A68_INT ,void *));
typedef struct A68t235  A68_235 ;    /* PROC(INT) REF MODE108 */

A_PROCEDURE(struct A68t112 *,A68t236,(struct A68t104 ),(struct A68t104 ,void *));
typedef struct A68t236  A68_236 ;    /* PROC(MODE104) REF MODE112 */

A_PROCEDURE(struct A68t115 *,A68t237,(struct A68t104 ),(struct A68t104 ,void *));
typedef struct A68t237  A68_237 ;    /* PROC(MODE104) REF MODE115 */

A_PROCEDURE(struct A68t121 *,A68t238,(A68_INT ),(A68_INT ,void *));
typedef struct A68t238  A68_238 ;    /* PROC(INT) REF MODE121 */

A_PROCEDURE(struct A68t125 *,A68t239,(struct A68t120 ),(struct A68t120 ,void *));
typedef struct A68t239  A68_239 ;    /* PROC(MODE120) REF MODE125 */

A_PROCEDURE(struct A68t129 *,A68t240,(struct A68t120 ),(struct A68t120 ,void *));
typedef struct A68t240  A68_240 ;    /* PROC(MODE120) REF MODE129 */

A_PROCEDURE(struct A68t136 *,A68t241,(A68_INT ),(A68_INT ,void *));
typedef struct A68t241  A68_241 ;    /* PROC(INT) REF MODE136 */

A_PROCEDURE(struct A68t140 *,A68t242,(struct A68t120 ),(struct A68t120 ,void *));
typedef struct A68t242  A68_242 ;    /* PROC(MODE120) REF MODE140 */

A_PROCEDURE(struct A68t192 *,A68t243,(struct A68t176 ),(struct A68t176 ,void *));
typedef struct A68t243  A68_243 ;    /* PROC(MODE176) REF MODE192 */

A_PROCEDURE(struct A68t193 *,A68t244,(struct A68t176 ),(struct A68t176 ,void *));
typedef struct A68t244  A68_244 ;    /* PROC(MODE176) REF MODE193 */

A_PROCEDURE(struct A68t168 *,A68t245,(struct A68t142 ),(struct A68t142 ,void *));
typedef struct A68t245  A68_245 ;    /* PROC(MODE142) REF MODE168 */

A_PROCEDURE(struct A68t187 *,A68t246,(struct A68t142 ),(struct A68t142 ,void *));
typedef struct A68t246  A68_246 ;    /* PROC(MODE142) REF MODE187 */

A_PROCEDURE(struct A68t173 *,A68t247,(A68_INT ),(A68_INT ,void *));
typedef struct A68t247  A68_247 ;    /* PROC(INT) REF MODE173 */

A_PROCEDURE(struct A68t205 *,A68t248,(struct A68t104 ),(struct A68t104 ,void *));
typedef struct A68t248  A68_248 ;    /* PROC(MODE104) REF MODE205 */

A_PROCEDURE(struct A68t210 *,A68t249,(struct A68t142 ),(struct A68t142 ,void *));
typedef struct A68t249  A68_249 ;    /* PROC(MODE142) REF MODE210 */

A_PROCEDURE(struct A68t113 *,A68t250,(A68_INT ),(A68_INT ,void *));
typedef struct A68t250  A68_250 ;    /* PROC(INT) REF MODE113 */

A_PROCEDURE(struct A68t96 *,A68t251,(A68_INT ),(A68_INT ,void *));
typedef struct A68t251  A68_251 ;    /* PROC(INT) REF MODE96 */

A_PROCEDURE(struct A68t103 *,A68t252,(struct A68t95 ),(struct A68t95 ,void *));
typedef struct A68t252  A68_252 ;    /* PROC(MODE95) REF MODE103 */

A_PROCEDURE(struct A68t99 *,A68t253,(struct A68t95 ),(struct A68t95 ,void *));
typedef struct A68t253  A68_253 ;    /* PROC(MODE95) REF MODE99 */
A_VECTOR(struct A68t93 *,A68t254);
typedef struct A68t254  A68_254 ;    /* VECTOR [] REF MODE93 */
struct A68t256 ;

A_PROCEDURE(A68_VOID ,A68t255,(struct A68t256 ),(struct A68t256 ,void *));
typedef struct A68t255  A68_255 ;    /* PROC(MODE256) VOID */
struct A68t256 { A68_INT mode; union {
A68_VC  mode1;
struct A68t32  mode2;
struct A68t54  mode3;
struct A68t53  mode4;
} data; };
typedef struct A68t256  A68_256 ;    /* UNION(REF MODE26,REF MODE32,REF MODE54,REF MODE53)  */

A_PROCEDURE(A68_INT ,A68t257,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t257  A68_257 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_BITS ,A68t258,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t258  A68_258 ;    /* PROC(BITS,BITS) BITS */
struct A68t260 ;

A_PROCEDURE(A68_VOID ,A68t259,(struct A68t260 ,A68_INT ),(struct A68t260 ,A68_INT ,void *));
typedef struct A68t259  A68_259 ;    /* PROC(MODE260,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t260,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t260  A68_260 ;    /* PROC(CHAR) VOID */
struct A68t262 ;

A_PROCEDURE(A68_INT ,A68t261,(struct A68t262 ),(struct A68t262 ,void *));
typedef struct A68t261  A68_261 ;    /* PROC(MODE262) INT */

A_PROCEDURE(A68_CHAR ,A68t262,(void),(void *));
typedef struct A68t262  A68_262 ;    /* PROC CHAR */

A_PROCEDURE(A68_INT ,A68t263,(A68_VC ,A68_BOOL *),(A68_VC ,A68_BOOL *,void *));
typedef struct A68t263  A68_263 ;    /* PROC(MODE26,REF BOOL) INT */

A_PROCEDURE(A68_INT ,A68t264,(void),(void *));
typedef struct A68t264  A68_264 ;    /* PROC INT */

A_PROCEDURE(A68_INT ,A68t265,(A68_INT ),(A68_INT ,void *));
typedef struct A68t265  A68_265 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_VOID ,A68t266,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t266  A68_266 ;    /* PROC(INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t267,(A68_VC *),(A68_VC *,void *));
typedef struct A68t267  A68_267 ;    /* PROC REF MODE26 */

A_PROCEDURE(A68_INT ,A68t268,(A68_INT ,A68_INT ,A68_BOOL *),(A68_INT ,A68_INT ,A68_BOOL *,void *));
typedef struct A68t268  A68_268 ;    /* PROC(INT,INT,REF BOOL) INT */
struct A68t270 ;

A_PROCEDURE(A68_BOOL ,A68t269,(A68_VC ,A68_INT *,struct A68t270 ),(A68_VC ,A68_INT *,struct A68t270 ,void *));
typedef struct A68t269  A68_269 ;    /* PROC(MODE26,REF INT,MODE270) BOOL */
struct A68t271 ;

A_PROCEDURE(A68_VOID ,A68t270,(struct A68t271 ,struct A68t46 ),(struct A68t271 ,struct A68t46 ,void *));
typedef struct A68t270  A68_270 ;    /* PROC(MODE271,MODE46) VOID */
struct A68t271{
A68_INT  Number;
A_PAD_INT(PAD_90)
struct A68t272 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_91)
};
typedef struct A68t271  A68_271 ;    /* STRUCT(INT,REF MODE272,BITS)  */
A_VECTOR(struct A68t274 ,A68t273);
typedef struct A68t273  A68_273 ;    /* VECTOR [] MODE274 */
struct A68t274{
struct A68t271  Msgno;
A68_VC  Text;
};
typedef struct A68t274  A68_274 ;    /* STRUCT(MODE271,REF MODE26)  */
struct A68t272{
A68_VC  Name;
struct A68t273  Messages;
};
typedef struct A68t272  A68_272 ;    /* STRUCT(REF MODE26,REF MODE273)  */

A_PROCEDURE(A68_VOID ,A68t275,(void),(void *));
typedef struct A68t275  A68_275 ;    /* PROC VOID */
struct A68t277 ;
struct A68t278 ;

A_PROCEDURE(A68_INT ,A68t276,(struct A68t277 ,struct A68t278 ),(struct A68t277 ,struct A68t278 ,void *));
typedef struct A68t276  A68_276 ;    /* PROC(MODE277,MODE278) INT */
struct A68t286{
A68_INT  Svoid;
A_PAD_INT(PAD_92)
};
typedef struct A68t286  A68_286 ;    /* STRUCT(INT)  */
struct A68t287{
A68_INT  Snull;
A_PAD_INT(PAD_93)
};
typedef struct A68t287  A68_287 ;    /* STRUCT(INT)  */
struct A68t277 { A68_INT mode; union {
struct A68t279 * mode1;
struct A68t280 * mode2;
struct A68t281 * mode3;
struct A68t282 * mode4;
struct A68t283 * mode5;
struct A68t284 * mode6;
struct A68t285 * mode7;
struct A68t286  mode8;
struct A68t287  mode9;
} data; };
typedef struct A68t277  A68_277 ;    /* UNION(REF MODE279,REF MODE280,REF MODE281,REF MODE282,REF MODE283,REF MODE284,REF MODE285,MODE286,MODE287)  */

A_PROCEDURE(A68_INT ,A68t278,(struct A68t277 ),(struct A68t277 ,void *));
typedef struct A68t278  A68_278 ;    /* PROC(MODE277) INT */
struct A68t279{
A68_VC  Id;
struct A68t277  T;
struct A68t279 * Rest;
};
typedef struct A68t279  A68_279 ;    /* STRUCT(REF MODE26,MODE277,REF MODE279)  */
struct A68t280{
A68_VC  Id;
A68_INT  Lwb;
A_PAD_INT(PAD_94)
A68_INT  Upb;
A_PAD_INT(PAD_95)
};
typedef struct A68t280  A68_280 ;    /* STRUCT(REF MODE26,INT,INT)  */
struct A68t281{
A68_VC  Id;
A68_VC  Char;
};
typedef struct A68t281  A68_281 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t282{
A68_INT  No;
A_PAD_INT(PAD_96)
struct A68t277  Type;
};
typedef struct A68t282  A68_282 ;    /* STRUCT(INT,MODE277)  */
struct A68t283{
A68_INT  No;
A_PAD_INT(PAD_97)
struct A68t281  T;
};
typedef struct A68t283  A68_283 ;    /* STRUCT(INT,MODE281)  */
struct A68t284{
struct A68t277  From;
struct A68t277  To;
};
typedef struct A68t284  A68_284 ;    /* STRUCT(MODE277,MODE277)  */
struct A68t285{
struct A68t277  T;
struct A68t285 * Rest;
};
typedef struct A68t285  A68_285 ;    /* STRUCT(MODE277,REF MODE285)  */

A_PROCEDURE(A68_VOID ,A68t288,(A68_INT ,struct A68t277 *),(A68_INT ,struct A68t277 *,void *));
typedef struct A68t288  A68_288 ;    /* PROC(INT) MODE277 */
struct A68t290 ;
struct A68t291 ;
struct A68t292 ;
struct A68t293 ;

A_PROCEDURE(A68_INT ,A68t289,(A68_VC ,A68_INT ,A68_INT ,A68_INT ,struct A68t290 ,struct A68t290 ,struct A68t291 *,struct A68t292 ,struct A68t293 ),(A68_VC ,A68_INT ,A68_INT ,A68_INT ,struct A68t290 ,struct A68t290 ,struct A68t291 *,struct A68t292 ,struct A68t293 ,void *));
typedef struct A68t289  A68_289 ;    /* PROC(REF MODE26,INT,INT,INT,MODE290,MODE290,REF MODE291,MODE292,MODE293) INT */
A_VECTOR(struct A68t295 ,A68t294);
typedef struct A68t294  A68_294 ;    /* VECTOR [] MODE295 */
struct A68t295{
A68_INT  Instoffset;
A_PAD_INT(PAD_98)
A68_INT  Offset;
A_PAD_INT(PAD_99)
A68_INT  Size;
A_PAD_INT(PAD_100)
};
typedef struct A68t295  A68_295 ;    /* STRUCT(INT,INT,INT)  */
struct A68t290{
struct A68t277  Type;
struct A68t294  Blocks;
};
typedef struct A68t290  A68_290 ;    /* STRUCT(MODE277,REF MODE294)  */
struct A68t291{
struct A68t290  Firstcell;
A68_INT  Lwb;
A_PAD_INT(PAD_101)
A68_INT  Ramsize;
A_PAD_INT(PAD_102)
A68_INT  Step;
A_PAD_INT(PAD_103)
};
typedef struct A68t291  A68_291 ;    /* STRUCT(MODE290,INT,INT,INT)  */
struct A68t292{
A68_INT  Size;
A_PAD_INT(PAD_104)
A68_INT  Offset;
A_PAD_INT(PAD_105)
A68_BITS  Sort;
A_PAD_BITS(PAD_106)
};
typedef struct A68t292  A68_292 ;    /* STRUCT(INT,INT,BITS)  */
struct A68t293{
A68_INT  Workspace;
A_PAD_INT(PAD_107)
A68_INT  History;
A_PAD_INT(PAD_108)
A68_INT  Declid;
A_PAD_INT(PAD_109)
};
typedef struct A68t293  A68_293 ;    /* STRUCT(INT,INT,INT)  */
struct A68t297 ;

A_PROCEDURE(A68_VOID ,A68t296,(A68_INT ,A68_VC ,A68_VC ,struct A68t297 ),(A68_INT ,A68_VC ,A68_VC ,struct A68t297 ,void *));
typedef struct A68t296  A68_296 ;    /* PROC(INT,REF MODE26,REF MODE26,MODE297) VOID */
struct A68t298{
A68_INT  Fn;
A_PAD_INT(PAD_110)
A68_INT  Instance;
A_PAD_INT(PAD_111)
};
typedef struct A68t298  A68_298 ;    /* STRUCT(INT,INT)  */
struct A68t297 { A68_INT mode; union {
struct A68t298  mode1;
struct A68t290  mode2;
} data; };
typedef struct A68t297  A68_297 ;    /* UNION(MODE298,MODE290)  */

A_PROCEDURE(A68_VOID ,A68t299,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t299  A68_299 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t300,(A68_INT ,struct A68t32 ),(A68_INT ,struct A68t32 ,void *));
typedef struct A68t300  A68_300 ;    /* PROC(INT,REF MODE32) VOID */

A_PROCEDURE(A68_VOID ,A68t301,(A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_INT ),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t301  A68_301 ;    /* PROC(INT,INT,INT,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t302,(A68_INT ,struct A68t292 ),(A68_INT ,struct A68t292 ,void *));
typedef struct A68t302  A68_302 ;    /* PROC(INT,MODE292) VOID */

A_PROCEDURE(A68_VOID ,A68t303,(A68_INT ,struct A68t294 ,struct A68t294 ),(A68_INT ,struct A68t294 ,struct A68t294 ,void *));
typedef struct A68t303  A68_303 ;    /* PROC(INT,REF MODE294,REF MODE294) VOID */

A_PROCEDURE(A68_VOID ,A68t304,(A68_VC ,A68_INT ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t304  A68_304 ;    /* PROC(REF MODE26,INT,INT) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t305,(A68_VC ,A68_INT ,A68_INT ),(A68_VC ,A68_INT ,A68_INT ,void *));
typedef struct A68t305  A68_305 ;    /* PROC(REF MODE26,INT,INT) INT */
struct A68t307 ;

A_PROCEDURE(A68_VOID ,A68t306,(A68_INT ,struct A68t307 *),(A68_INT ,struct A68t307 *,void *));
typedef struct A68t306  A68_306 ;    /* PROC(INT) MODE307 */
A_VECTOR(struct A68t309 ,A68t308);
typedef struct A68t308  A68_308 ;    /* VECTOR [] MODE309 */
struct A68t309{
A68_VC  Uname;
A68_VC  Lname;
A68_INT  Node;
A_PAD_INT(PAD_112)
};
typedef struct A68t309  A68_309 ;    /* STRUCT(REF MODE26,REF MODE26,INT)  */
struct A68t307{
struct A68t291 * Ram;
struct A68t290  Outputs;
A68_INT  Noinputs;
A_PAD_INT(PAD_113)
struct A68t308  Body;
};
typedef struct A68t307  A68_307 ;    /* STRUCT(REF MODE291,MODE290,INT,REF MODE308)  */

A_PROCEDURE(A68_VOID ,A68t310,(A68_INT ,struct A68t297 *),(A68_INT ,struct A68t297 *,void *));
typedef struct A68t310  A68_310 ;    /* PROC(INT) MODE297 */
struct A68t312 ;

A_PROCEDURE(A68_VOID ,A68t311,(A68_INT ,A68_INT ,struct A68t312 *),(A68_INT ,A68_INT ,struct A68t312 *,void *));
typedef struct A68t311  A68_311 ;    /* PROC(INT,INT) MODE312 */
struct A68t312{
A68_INT  Lwb;
A_PAD_INT(PAD_114)
A68_INT  Upb;
A_PAD_INT(PAD_115)
};
typedef struct A68t312  A68_312 ;    /* STRUCT(INT,INT)  */
struct A68t314 ;

A_PROCEDURE(A68_VOID ,A68t313,(A68_INT ,A68_INT ,struct A68t314 *),(A68_INT ,A68_INT ,struct A68t314 *,void *));
typedef struct A68t313  A68_313 ;    /* PROC(INT,INT) REF MODE314 */
A_VECTOR(struct A68t315 ,A68t314);
typedef struct A68t314  A68_314 ;    /* VECTOR [] MODE315 */
struct A68t315{
A68_INT  Instoffset;
A_PAD_INT(PAD_116)
A68_INT  Ipno;
A_PAD_INT(PAD_117)
};
typedef struct A68t315  A68_315 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t316,(A68_INT ,struct A68t290 *),(A68_INT ,struct A68t290 *,void *));
typedef struct A68t316  A68_316 ;    /* PROC(INT) MODE290 */

A_PROCEDURE(A68_VOID ,A68t317,(A68_INT ,struct A68t292 *),(A68_INT ,struct A68t292 *,void *));
typedef struct A68t317  A68_317 ;    /* PROC(INT) MODE292 */

A_PROCEDURE(A68_VOID ,A68t318,(A68_INT ,struct A68t293 *),(A68_INT ,struct A68t293 *,void *));
typedef struct A68t318  A68_318 ;    /* PROC(INT) MODE293 */

A_PROCEDURE(A68_VOID ,A68t319,(struct A68t307 ,struct A68t290 *),(struct A68t307 ,struct A68t290 *,void *));
typedef struct A68t319  A68_319 ;    /* PROC(MODE307) MODE290 */
struct A68t321 ;

A_PROCEDURE(A68_VOID ,A68t320,(struct A68t321 ),(struct A68t321 ,void *));
typedef struct A68t320  A68_320 ;    /* PROC(MODE321) VOID */

A_PROCEDURE(A68_BOOL ,A68t321,(A68_VC ),(A68_VC ,void *));
typedef struct A68t321  A68_321 ;    /* PROC(REF MODE26) BOOL */
struct A68t323 ;

A_PROCEDURE(A68_VOID ,A68t322,(struct A68t323 ,struct A68t36 ),(struct A68t323 ,struct A68t36 ,void *));
typedef struct A68t322  A68_322 ;    /* PROC(MODE323,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t323,(A68_VC ,struct A68t36 ),(A68_VC ,struct A68t36 ,void *));
typedef struct A68t323  A68_323 ;    /* PROC(REF MODE26,MODE36) VOID */
struct A68t324{
A68_INT  Sort;
A_PAD_INT(PAD_118)
A68_INT  Size;
A_PAD_INT(PAD_119)
};
typedef struct A68t324  A68_324 ;    /* STRUCT(INT,INT)  */
struct A68t325{
struct A68t324  Head;
struct A68t325 * Tail;
};
typedef struct A68t325  A68_325 ;    /* STRUCT(MODE324,REF MODE325)  */
struct A68t327{
A68_INT  Lab;
A_PAD_INT(PAD_120)
A68_VC  Tag;
};
typedef struct A68t327  A68_327 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t326{
struct A68t327  Labelint;
struct A68t327  Labelcallinst;
A68_INT  Workspacesize;
A_PAD_INT(PAD_121)
A68_INT  Evalfn;
A_PAD_INT(PAD_122)
A68_INT  History;
A_PAD_INT(PAD_123)
A68_INT  Declid;
A_PAD_INT(PAD_124)
};
typedef struct A68t326  A68_326 ;    /* STRUCT(MODE327,MODE327,INT,INT,INT,INT)  */

A_PROCEDURE(struct A68t326 *,A68t328,(A68_VC ,struct A68t32 ,A68_INT ,struct A68t32 ,struct A68t36 ),(A68_VC ,struct A68t32 ,A68_INT ,struct A68t32 ,struct A68t36 ,void *));
typedef struct A68t328  A68_328 ;    /* PROC(MODE26,MODE32,INT,MODE32,MODE36) REF MODE326 */
struct A68t329 { A68_INT mode; union {
A68_INT  mode1;
struct A68t327  mode2;
} data; };
typedef struct A68t329  A68_329 ;    /* UNION(INT,MODE327,VOID)  */

A_PROCEDURE(A68_VOID ,A68t330,(A68_VC ,struct A68t327 *),(A68_VC ,struct A68t327 *,void *));
typedef struct A68t330  A68_330 ;    /* PROC(MODE26) MODE327 */

A_PROCEDURE(A68_VOID ,A68t331,(struct A68t327 *),(struct A68t327 *,void *));
typedef struct A68t331  A68_331 ;    /* PROC MODE327 */

A_PROCEDURE(A68_VOID ,A68t332,(struct A68t43 ,A68_INT ,struct A68t36 ),(struct A68t43 ,A68_INT ,struct A68t36 ,void *));
typedef struct A68t332  A68_332 ;    /* PROC(MODE43,INT,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t333,(struct A68t36 ),(struct A68t36 ,void *));
typedef struct A68t333  A68_333 ;    /* PROC(MODE36) VOID */

A_PROCEDURE(A68_INT ,A68t334,(A68_INT ,A68_INT *),(A68_INT ,A68_INT *,void *));
typedef struct A68t334  A68_334 ;    /* PROC(INT,REF INT) INT */

A_PROCEDURE(A68_VC *,A68t335,(A68_VC ),(A68_VC ,void *));
typedef struct A68t335  A68_335 ;    /* PROC(REF MODE26) REF REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t336,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t336  A68_336 ;    /* PROC(INT,REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t337,(A68_INT ),(A68_INT ,void *));
typedef struct A68t337  A68_337 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_VOID ,A68t338,(A68_INT ,struct A68t329 ),(A68_INT ,struct A68t329 ,void *));
typedef struct A68t338  A68_338 ;    /* PROC(INT,MODE329) VOID */

A_PROCEDURE(A68_VOID ,A68t339,(A68_INT ,A68_INT ,struct A68t329 ),(A68_INT ,A68_INT ,struct A68t329 ,void *));
typedef struct A68t339  A68_339 ;    /* PROC(INT,INT,MODE329) VOID */

A_PROCEDURE(A68_VOID ,A68t340,(struct A68t327 ),(struct A68t327 ,void *));
typedef struct A68t340  A68_340 ;    /* PROC(MODE327) VOID */

A_PROCEDURE(A68_VOID ,A68t341,(A68_INT ,struct A68t327 ),(A68_INT ,struct A68t327 ,void *));
typedef struct A68t341  A68_341 ;    /* PROC(INT,MODE327) VOID */

A_PROCEDURE(A68_VOID ,A68t342,(struct A68t329 ,struct A68t327 ),(struct A68t329 ,struct A68t327 ,void *));
typedef struct A68t342  A68_342 ;    /* PROC(MODE329,MODE327) VOID */

A_PROCEDURE(A68_VOID ,A68t343,(struct A68t327 ,struct A68t325 *,struct A68t325 *),(struct A68t327 ,struct A68t325 *,struct A68t325 *,void *));
typedef struct A68t343  A68_343 ;    /* PROC(MODE327,REF MODE325,REF MODE325) VOID */

A_PROCEDURE(A68_VOID ,A68t344,(struct A68t327 ,A68_INT ),(struct A68t327 ,A68_INT ,void *));
typedef struct A68t344  A68_344 ;    /* PROC(MODE327,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t345,(A68_INT ,struct A68t36 ,A68_VC *),(A68_INT ,struct A68t36 ,A68_VC *,void *));
typedef struct A68t345  A68_345 ;    /* PROC(INT,MODE36) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t346,(A68_INT ,struct A68t36 ),(A68_INT ,struct A68t36 ,void *));
typedef struct A68t346  A68_346 ;    /* PROC(INT,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t347,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t347  A68_347 ;    /* PROC(REF MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t348,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t348  A68_348 ;    /* PROC(INT,INT) REF MODE26 */
struct A68t350 ;

A_PROCEDURE(A68_VOID ,A68t349,(A68_INT ,struct A68t350 *),(A68_INT ,struct A68t350 *,void *));
typedef struct A68t349  A68_349 ;    /* PROC(INT) MODE350 */
struct A68t350{
A68_INT  Lasttime;
A_PAD_INT(PAD_125)
A68_INT  Interrupted;
A_PAD_INT(PAD_126)
};
typedef struct A68t350  A68_350 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t351,(struct A68t323 ,struct A68t323 ,struct A68t36 ),(struct A68t323 ,struct A68t323 ,struct A68t36 ,void *));
typedef struct A68t351  A68_351 ;    /* PROC(MODE323,MODE323,MODE36) VOID */
struct A68t353 ;

A_PROCEDURE(A68_VOID ,A68t352,(struct A68t353 *),(struct A68t353 *,void *));
typedef struct A68t352  A68_352 ;    /* PROC MODE353 */
struct A68t353{
A68_INT  Codesize;
A_PAD_INT(PAD_127)
A68_INT  Datasize;
A_PAD_INT(PAD_128)
A68_INT  Dynamicstacksize;
A_PAD_INT(PAD_129)
A68_INT  Staticstacksize;
A_PAD_INT(PAD_130)
};
typedef struct A68t353  A68_353 ;    /* STRUCT(INT,INT,INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t354,(A68_INT ,A68_INT ,A68_INT ,A68_INT ),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t354  A68_354 ;    /* PROC(INT,INT,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t355,(struct A68t32 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ),(struct A68t32 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t355  A68_355 ;    /* PROC(MODE32,INT,INT,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t356,(struct A68t32 ,struct A68t277 ),(struct A68t32 ,struct A68t277 ,void *));
typedef struct A68t356  A68_356 ;    /* PROC(REF MODE32,MODE277) VOID */

A_PROCEDURE(A68_VOID ,A68t357,(struct A68t32 ,A68_INT ,struct A68t277 ,A68_INT ,A68_INT ,A68_INT ),(struct A68t32 ,A68_INT ,struct A68t277 ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t357  A68_357 ;    /* PROC(MODE32,INT,MODE277,INT,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t358,(struct A68t32 ,struct A68t32 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ),(struct A68t32 ,struct A68t32 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t358  A68_358 ;    /* PROC(MODE32,MODE32,INT,INT,INT,INT) VOID */
struct A68t360 ;

A_PROCEDURE(A68_VOID ,A68t359,(struct A68t360 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ),(struct A68t360 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t359  A68_359 ;    /* PROC(MODE360,INT,INT,INT,INT) VOID */
struct A68t368{
A68_INT  Svvoid;
A_PAD_INT(PAD_131)
};
typedef struct A68t368  A68_368 ;    /* STRUCT(INT)  */
struct A68t369{
A68_INT  Svnull;
A_PAD_INT(PAD_132)
};
typedef struct A68t369  A68_369 ;    /* STRUCT(INT)  */
struct A68t360 { A68_INT mode; union {
struct A68t361 * mode1;
struct A68t362 * mode2;
struct A68t363 * mode3;
struct A68t364 * mode4;
struct A68t365 * mode5;
struct A68t366 * mode6;
struct A68t367 * mode7;
struct A68t368  mode8;
struct A68t369  mode9;
} data; };
typedef struct A68t360  A68_360 ;    /* UNION(REF MODE361,REF MODE362,REF MODE363,REF MODE364,REF MODE365,REF MODE366,REF MODE367,MODE368,MODE369)  */
struct A68t361{
struct A68t277  Type;
};
typedef struct A68t361  A68_361 ;    /* STRUCT(MODE277)  */
struct A68t362{
struct A68t280 * Type;
A68_INT  Value;
A_PAD_INT(PAD_133)
};
typedef struct A68t362  A68_362 ;    /* STRUCT(REF MODE280,INT)  */
struct A68t363{
struct A68t281 * Type;
A68_CHAR  Value;
A_PAD_CHAR(PAD_134)
};
typedef struct A68t363  A68_363 ;    /* STRUCT(REF MODE281,CHAR)  */
struct A68t364{
struct A68t283 * Type;
A68_VC  Value;
};
typedef struct A68t364  A68_364 ;    /* STRUCT(REF MODE283,REF MODE26)  */
struct A68t365{
struct A68t279 * Type;
A68_INT  Tag;
A_PAD_INT(PAD_135)
struct A68t360  Assoc;
};
typedef struct A68t365  A68_365 ;    /* STRUCT(REF MODE279,INT,MODE360)  */
struct A68t366{
struct A68t360  Head;
struct A68t366 * Tail;
};
typedef struct A68t366  A68_366 ;    /* STRUCT(MODE360,REF MODE366)  */
struct A68t367{
struct A68t360  From;
struct A68t360  To;
};
typedef struct A68t367  A68_367 ;    /* STRUCT(MODE360,MODE360)  */

A_PROCEDURE(A68_VOID ,A68t370,(struct A68t360 ,struct A68t277 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ),(struct A68t360 ,struct A68t277 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t370  A68_370 ;    /* PROC(MODE360,MODE277,INT,INT,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t371,(A68_INT ,A68_VC ,struct A68t292 *),(A68_INT ,A68_VC ,struct A68t292 *,void *));
typedef struct A68t371  A68_371 ;    /* PROC(INT,REF MODE26) MODE292 */

A_PROCEDURE(A68_VOID ,A68t372,(struct A68t32 ,A68_VC ,struct A68t292 *),(struct A68t32 ,A68_VC ,struct A68t292 *,void *));
typedef struct A68t372  A68_372 ;    /* PROC(MODE32,MODE26) MODE292 */

A_PROCEDURE(struct A68t105 *,A68t373,(A68_INT ),(A68_INT ,void *));
typedef struct A68t373  A68_373 ;    /* PROC(INT) REF MODE105 */

A_PROCEDURE(A68_INT ,A68t374,(struct A68t104 ,struct A68t270 ),(struct A68t104 ,struct A68t270 ,void *));
typedef struct A68t374  A68_374 ;    /* PROC(MODE104,MODE270) INT */

A_PROCEDURE(A68_INT ,A68t375,(struct A68t104 ),(struct A68t104 ,void *));
typedef struct A68t375  A68_375 ;    /* PROC(MODE104) INT */

A_PROCEDURE(A68_VOID ,A68t376,(struct A68t104 ,struct A68t104 *),(struct A68t104 ,struct A68t104 *,void *));
typedef struct A68t376  A68_376 ;    /* PROC(MODE104) MODE104 */

A_PROCEDURE(struct A68t101 *,A68t377,(struct A68t227 ),(struct A68t227 ,void *));
typedef struct A68t377  A68_377 ;    /* PROC(MODE227) REF MODE101 */

A_PROCEDURE(struct A68t117 *,A68t378,(struct A68t227 ),(struct A68t227 ,void *));
typedef struct A68t378  A68_378 ;    /* PROC(MODE227) REF MODE117 */

A_PROCEDURE(struct A68t135 *,A68t379,(struct A68t227 ),(struct A68t227 ,void *));
typedef struct A68t379  A68_379 ;    /* PROC(MODE227) REF MODE135 */

A_PROCEDURE(struct A68t141 *,A68t380,(struct A68t227 ),(struct A68t227 ,void *));
typedef struct A68t380  A68_380 ;    /* PROC(MODE227) REF MODE141 */

A_PROCEDURE(struct A68t218 *,A68t381,(struct A68t227 ),(struct A68t227 ,void *));
typedef struct A68t381  A68_381 ;    /* PROC(MODE227) REF MODE218 */

A_PROCEDURE(A68_INT ,A68t382,(struct A68t102 *,struct A68t222 ),(struct A68t102 *,struct A68t222 ,void *));
typedef struct A68t382  A68_382 ;    /* PROC(REF MODE102,REF MODE222) INT */

A_PROCEDURE(A68_INT ,A68t383,(struct A68t102 *,struct A68t223 ),(struct A68t102 *,struct A68t223 ,void *));
typedef struct A68t383  A68_383 ;    /* PROC(REF MODE102,REF MODE223) INT */

A_PROCEDURE(A68_INT ,A68t384,(struct A68t102 *,struct A68t224 ),(struct A68t102 *,struct A68t224 ,void *));
typedef struct A68t384  A68_384 ;    /* PROC(REF MODE102,REF MODE224) INT */

A_PROCEDURE(A68_INT ,A68t385,(struct A68t102 *,struct A68t225 ),(struct A68t102 *,struct A68t225 ,void *));
typedef struct A68t385  A68_385 ;    /* PROC(REF MODE102,REF MODE225) INT */

A_PROCEDURE(A68_INT ,A68t386,(struct A68t102 *,struct A68t226 ),(struct A68t102 *,struct A68t226 ,void *));
typedef struct A68t386  A68_386 ;    /* PROC(REF MODE102,REF MODE226) INT */

A_PROCEDURE(struct A68t101 *,A68t387,(struct A68t96 ,struct A68t231 *,struct A68t221 *),(struct A68t96 ,struct A68t231 *,struct A68t221 *,void *));
typedef struct A68t387  A68_387 ;    /* PROC(MODE96,REF MODE231,REF MODE221) REF MODE101 */

A_PROCEDURE(struct A68t117 *,A68t388,(struct A68t108 ,struct A68t231 *,struct A68t221 *),(struct A68t108 ,struct A68t231 *,struct A68t221 *,void *));
typedef struct A68t388  A68_388 ;    /* PROC(MODE108,REF MODE231,REF MODE221) REF MODE117 */

A_PROCEDURE(struct A68t135 *,A68t389,(struct A68t121 ,struct A68t231 *,struct A68t221 *),(struct A68t121 ,struct A68t231 *,struct A68t221 *,void *));
typedef struct A68t389  A68_389 ;    /* PROC(MODE121,REF MODE231,REF MODE221) REF MODE135 */

A_PROCEDURE(struct A68t141 *,A68t390,(struct A68t136 ,struct A68t231 *,struct A68t221 *),(struct A68t136 ,struct A68t231 *,struct A68t221 *,void *));
typedef struct A68t390  A68_390 ;    /* PROC(MODE136,REF MODE231,REF MODE221) REF MODE141 */

A_PROCEDURE(struct A68t218 *,A68t391,(struct A68t173 ,struct A68t231 *,struct A68t221 *),(struct A68t173 ,struct A68t231 *,struct A68t221 *,void *));
typedef struct A68t391  A68_391 ;    /* PROC(MODE173,REF MODE231,REF MODE221) REF MODE218 */

A_PROCEDURE(struct A68t124 *,A68t392,(struct A68t218 *),(struct A68t218 *,void *));
typedef struct A68t392  A68_392 ;    /* PROC(REF MODE218) REF MODE124 */

A_PROCEDURE(A68_VOID ,A68t393,(struct A68t123 *,struct A68t104 *),(struct A68t123 *,struct A68t104 *,void *));
typedef struct A68t393  A68_393 ;    /* PROC(REF MODE123) MODE104 */

A_PROCEDURE(A68_VOID ,A68t394,(struct A68t120 ,struct A68t221 *,struct A68t104 *),(struct A68t120 ,struct A68t221 *,struct A68t104 *,void *));
typedef struct A68t394  A68_394 ;    /* PROC(MODE120,REF MODE221) MODE104 */

A_PROCEDURE(struct A68t218 *,A68t395,(struct A68t218 *,struct A68t221 *,struct A68t221 *),(struct A68t218 *,struct A68t221 *,struct A68t221 *,void *));
typedef struct A68t395  A68_395 ;    /* PROC(REF MODE218,REF MODE221,REF MODE221) REF MODE218 */

A_PROCEDURE(A68_VOID ,A68t396,(struct A68t183 *,struct A68t218 *,struct A68t120 *),(struct A68t183 *,struct A68t218 *,struct A68t120 *,void *));
typedef struct A68t396  A68_396 ;    /* PROC(REF MODE183,REF MODE218) MODE120 */

A_PROCEDURE(A68_INT ,A68t397,(struct A68t183 *),(struct A68t183 *,void *));
typedef struct A68t397  A68_397 ;    /* PROC(REF MODE183) INT */

A_PROCEDURE(A68_INT ,A68t398,(struct A68t183 *,A68_INT ),(struct A68t183 *,A68_INT ,void *));
typedef struct A68t398  A68_398 ;    /* PROC(REF MODE183,INT) INT */

A_PROCEDURE(A68_VOID ,A68t399,(struct A68t142 ,struct A68t218 *,struct A68t221 *,struct A68t120 *),(struct A68t142 ,struct A68t218 *,struct A68t221 *,struct A68t120 *,void *));
typedef struct A68t399  A68_399 ;    /* PROC(MODE142,REF MODE218,REF MODE221) MODE120 */

A_PROCEDURE(A68_VOID ,A68t400,(struct A68t120 ,struct A68t221 *,struct A68t120 *),(struct A68t120 ,struct A68t221 *,struct A68t120 *,void *));
typedef struct A68t400  A68_400 ;    /* PROC(MODE120,REF MODE221) MODE120 */

A_PROCEDURE(A68_BOOL ,A68t401,(struct A68t120 ,struct A68t120 ,struct A68t221 *,struct A68t221 *,A68_BOOL ),(struct A68t120 ,struct A68t120 ,struct A68t221 *,struct A68t221 *,A68_BOOL ,void *));
typedef struct A68t401  A68_401 ;    /* PROC(MODE120,MODE120,REF MODE221,REF MODE221,BOOL) BOOL */

A_PROCEDURE(A68_INT ,A68t402,(struct A68t151 *,struct A68t221 *),(struct A68t151 *,struct A68t221 *,void *));
typedef struct A68t402  A68_402 ;    /* PROC(REF MODE151,REF MODE221) INT */

A_PROCEDURE(A68_VOID ,A68t403,(struct A68t120 ,struct A68t221 ,struct A68t231 *,struct A68t277 *),(struct A68t120 ,struct A68t221 ,struct A68t231 *,struct A68t277 *,void *));
typedef struct A68t403  A68_403 ;    /* PROC(MODE120,MODE221,REF MODE231) MODE277 */

A_PROCEDURE(A68_VOID ,A68t404,(struct A68t142 ,struct A68t221 ,struct A68t231 *,struct A68t360 *),(struct A68t142 ,struct A68t221 ,struct A68t231 *,struct A68t360 *,void *));
typedef struct A68t404  A68_404 ;    /* PROC(MODE142,MODE221,REF MODE231) MODE360 */
struct A68t405 { A68_INT mode; union {
struct A68t279 * mode1;
struct A68t280 * mode2;
struct A68t281 * mode3;
} data; };
typedef struct A68t405  A68_405 ;    /* UNION(REF MODE279,REF MODE280,REF MODE281)  */
struct A68t406{
struct A68t290 * Wire;
A68_INT  Instance;
A_PAD_INT(PAD_136)
};
typedef struct A68t406  A68_406 ;    /* STRUCT(REF MODE290,INT)  */
struct A68t407 { A68_INT mode; union {
struct A68t298  mode1;
struct A68t406  mode2;
} data; };
typedef struct A68t407  A68_407 ;    /* UNION(MODE298,MODE406)  */
struct A68t408{
struct A68t407  Node;
A68_INT  Circuit;
A_PAD_INT(PAD_137)
A68_INT  Base;
A_PAD_INT(PAD_138)
};
typedef struct A68t408  A68_408 ;    /* STRUCT(MODE407,INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t409,(struct A68t360 ,struct A68t277 *),(struct A68t360 ,struct A68t277 *,void *));
typedef struct A68t409  A68_409 ;    /* PROC(MODE360) MODE277 */

A_PROCEDURE(A68_BOOL ,A68t410,(struct A68t277 ,struct A68t277 ),(struct A68t277 ,struct A68t277 ,void *));
typedef struct A68t410  A68_410 ;    /* PROC(MODE277,MODE277) BOOL */

A_PROCEDURE(A68_BOOL ,A68t411,(struct A68t360 ,struct A68t360 ),(struct A68t360 ,struct A68t360 ,void *));
typedef struct A68t411  A68_411 ;    /* PROC(MODE360,MODE360) BOOL */

A_PROCEDURE(A68_BOOL ,A68t412,(struct A68t290 ,struct A68t290 ),(struct A68t290 ,struct A68t290 ,void *));
typedef struct A68t412  A68_412 ;    /* PROC(MODE290,MODE290) BOOL */

A_PROCEDURE(A68_BOOL ,A68t413,(struct A68t298 ,struct A68t298 ),(struct A68t298 ,struct A68t298 ,void *));
typedef struct A68t413  A68_413 ;    /* PROC(MODE298,MODE298) BOOL */

A_PROCEDURE(A68_BOOL ,A68t414,(struct A68t406 ,struct A68t406 ),(struct A68t406 ,struct A68t406 ,void *));
typedef struct A68t414  A68_414 ;    /* PROC(MODE406,MODE406) BOOL */

A_PROCEDURE(A68_BOOL ,A68t415,(struct A68t407 ,struct A68t407 ),(struct A68t407 ,struct A68t407 ,void *));
typedef struct A68t415  A68_415 ;    /* PROC(MODE407,MODE407) BOOL */

A_PROCEDURE(A68_BOOL ,A68t416,(struct A68t408 ,struct A68t408 ),(struct A68t408 ,struct A68t408 ,void *));
typedef struct A68t416  A68_416 ;    /* PROC(MODE408,MODE408) BOOL */

A_PROCEDURE(struct A68t285 *,A68t417,(struct A68t285 *,struct A68t285 *),(struct A68t285 *,struct A68t285 *,void *));
typedef struct A68t417  A68_417 ;    /* PROC(REF MODE285,REF MODE285) REF MODE285 */

A_PROCEDURE(A68_VOID ,A68t418,(struct A68t294 ,struct A68t294 ,struct A68t294 *),(struct A68t294 ,struct A68t294 ,struct A68t294 *,void *));
typedef struct A68t418  A68_418 ;    /* PROC(REF MODE294,REF MODE294) REF MODE294 */

A_PROCEDURE(A68_INT ,A68t419,(A68_VC ),(A68_VC ,void *));
typedef struct A68t419  A68_419 ;    /* PROC(REF MODE26) INT */

A_PROCEDURE(struct A68t285 *,A68t420,(struct A68t277 ),(struct A68t277 ,void *));
typedef struct A68t420  A68_420 ;    /* PROC(MODE277) REF MODE285 */

A_PROCEDURE(struct A68t285 *,A68t421,(struct A68t277 ,A68_INT ,A68_INT ),(struct A68t277 ,A68_INT ,A68_INT ,void *));
typedef struct A68t421  A68_421 ;    /* PROC(MODE277,INT,INT) REF MODE285 */

A_PROCEDURE(A68_VOID ,A68t422,(struct A68t290 ,A68_INT ,A68_INT ,struct A68t290 *),(struct A68t290 ,A68_INT ,A68_INT ,struct A68t290 *,void *));
typedef struct A68t422  A68_422 ;    /* PROC(MODE290,INT,INT) MODE290 */

A_PROCEDURE(A68_VOID ,A68t423,(struct A68t291 *,A68_INT ,A68_INT ,struct A68t290 *),(struct A68t291 *,A68_INT ,A68_INT ,struct A68t290 *,void *));
typedef struct A68t423  A68_423 ;    /* PROC(REF MODE291,INT,INT) MODE290 */

A_PROCEDURE(A68_VC *,A68t424,(struct A68t360 ,struct A68t277 ),(struct A68t360 ,struct A68t277 ,void *));
typedef struct A68t424  A68_424 ;    /* PROC(MODE360,MODE277) REF REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t425,(A68_VC ,struct A68t277 ,struct A68t360 *),(A68_VC ,struct A68t277 ,struct A68t360 *,void *));
typedef struct A68t425  A68_425 ;    /* PROC(REF MODE26,MODE277) MODE360 */

A_PROCEDURE(A68_VOID ,A68t426,(struct A68t275 ),(struct A68t275 ,void *));
typedef struct A68t426  A68_426 ;    /* PROC(MODE275) VOID */

A_PROCEDURE(A68_VOID ,A68t427,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t427  A68_427 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,56,A68t428);
typedef struct A68t428  A68_428 ;    /* STRUCT 56 CHAR */

A_PROCEDURE(A68_VOID ,A68t429,(struct A68t149 ,A68_VC ,struct A68t218 ,struct A68t32 ,A68_INT ,struct A68t221 ,struct A68t231 *,struct A68t36 ,struct A68t292 *),(struct A68t149 ,A68_VC ,struct A68t218 ,struct A68t32 ,A68_INT ,struct A68t221 ,struct A68t231 *,struct A68t36 ,struct A68t292 *,void *));
typedef struct A68t429  A68_429 ;    /* PROC(MODE149,REF MODE26,MODE218,MODE32,INT,MODE221,REF MODE231,MODE36) MODE292 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from kesignals --- */
/* --- End of imports from kesignals --- */


/* --- Imports from kebasics --- */
/* --- End of imports from kebasics --- */


/* --- Imports from keconv --- */
/* --- End of imports from keconv --- */


/* --- Imports from keamstandard --- */
extern A68_VOID  DOPASIM_translatestartfunction(A68_VC );
extern A68_VOID  MOPASIM_translatestartinitialiser(A68_VC );
extern A68_VOID  ZOPASIM_translateendfunction(A68_INT ,A68_INT );
#define IPPASIM_resetflag 2
extern A68_VOID  PSPASIM_translatecopyinputs(struct A68t32 ,A68_INT ,struct A68t277 ,A68_INT ,A68_INT ,A68_INT );
/* --- End of imports from keamstandard --- */


/* --- Imports from keambasics --- */
extern A68_329  ONFASIM_indirect;
extern A68_INT  DENASIM_ws;
extern A68_INT  GENASIM_sizeunit;
extern A68_VOID  SSNASIM_amadd(void);
extern A68_VOID  QUNASIM_ampushint(A68_INT );
extern A68_VOID  FVNASIM_amstore(A68_INT ,struct A68t329 );
extern A68_VOID  KXNASIM_amret(A68_INT );
/* --- End of imports from keambasics --- */


/* --- Imports from kesymbols --- */
extern A68_VOID  VGCASIM_lookuptype(A68_INT ,A68_277 *);
extern A68_INT  YGCASIM_lookuptypesize(A68_INT );
#define IHCASIM_combinatorial 0X1U
#define LHCASIM_initialised 0X8U
/* --- End of imports from kesymbols --- */


/* --- Imports from basics --- */
/* --- End of imports from basics --- */


/* --- Imports from assmodes --- */
/* --- End of imports from assmodes --- */


/* --- Imports from putstrings --- */
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void NYNASIM(void);   /* kesignals */
extern void JSAASIM(void);   /* kebasics */
extern void KUBASIM(void);   /* keconv */
extern void HYOASIM(void);   /* keamstandard */
extern void XDNASIM(void);   /* keambasics */
extern void TCCASIM(void);   /* kesymbols */
extern void JSCAOST(void);   /* basics */
extern void BAAATRN(void);   /* assmodes */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_428   EFQASIM = {"$Id: keamassoc.a68,v 34.2 1995/03/29 13:04:32 ella Exp $"}; 
A_GISVEC(A68_VC ,FFQASIM,EFQASIM,56)

A68_VOID  OFQASIM_translateassoc(A68_149  Body, A68_VC  Name, A68_218  Declaration, A68_32  Inputtypes, A68_INT  Outputtype, A68_221  Environ, A68_231 * Closure, A68_36  Flt, A68_292  *ReturnedValue);
 /* line 83: */
 /* line 84: */
 /* line 85: */

A68_VOID  OFQASIM_translateassoc(A68_149  Body, A68_VC  Name, A68_218  Declaration, A68_32  Inputtypes, A68_INT  Outputtype, A68_221  Environ, A68_231 * Closure, A68_36  Flt, A68_292  *ReturnedValue)
{ 
A68_INT  PFQASIM_outputsize;
A68_INT  QFQASIM_inputoffset;
A68_INT  RFQASIM_outputoffset;
A68_INT  SFQASIM_assocoffset;
A68_INT  TFQASIM_fixedpartsize;
A68_277  UFQASIM;  /* avoid structure result */
A68_277  VFQASIM;  /* united object - for case conformity */
A68_279 * WFQASIM_enum;
A68_279 * XFQASIM;  /* clause result */
A68_279 * YFQASIM_enum;
A68_INT  ZFQASIM;  /* to part of loop */
A68_INT  AGQASIM;  /* loop control */
A68_292  BGQASIM;  /* collateral clause result */
A68_292  CGQASIM;  /* clause result */
A_PROC_ENTRY(translateassoc);
 /* line 86: */
 /* line 87: */
{ 
PFQASIM_outputsize = YGCASIM_lookuptypesize(Outputtype);
 /* line 89: */
QFQASIM_inputoffset = (GENASIM_sizeunit+DENASIM_ws);
 /* line 90: */
RFQASIM_outputoffset = (QFQASIM_inputoffset+(DENASIM_ws*Inputtypes.upb));
 /* line 91: */
SFQASIM_assocoffset = (RFQASIM_outputoffset+GENASIM_sizeunit);
 /* line 92: */
TFQASIM_fixedpartsize = (RFQASIM_outputoffset+PFQASIM_outputsize);
 /* line 95: */
 /* line 96: */
VGCASIM_lookuptype( Outputtype, &UFQASIM );
VFQASIM = UFQASIM ;
switch ( VFQASIM.mode )
{ 
case 1: /* REF STRUCT(REF MODE26,MODE277,REF MODE279)  */
WFQASIM_enum = (VFQASIM.data.mode1);
 /* line 97: */
XFQASIM = WFQASIM_enum;
break;
default: 
A_IMP_SKIP ;
break;
} 
YFQASIM_enum = XFQASIM;
 /* line 98: */
ZFQASIM = (Body.Altno-1);
for ( AGQASIM = 1;
AGQASIM <= ZFQASIM;
AGQASIM += 1 )
{ 
YFQASIM_enum = (*(&(YFQASIM_enum->Rest)));
}
 /* line 101: */
MOPASIM_translatestartinitialiser(Name);
 /* line 102: */
QUNASIM_ampushint(RFQASIM_outputoffset);
 /* line 103: */
SSNASIM_amadd();
 /* line 104: */
QUNASIM_ampushint(Body.Altno);
 /* line 105: */
FVNASIM_amstore(GENASIM_sizeunit, ONFASIM_indirect);
 /* line 106: */
KXNASIM_amret(0);
 /* line 109: */
DOPASIM_translatestartfunction(Name);
 /* line 110: */
 /* line 111: */
 /* line 112: */
PSPASIM_translatecopyinputs(Inputtypes, QFQASIM_inputoffset, (*(&(YFQASIM_enum->T))), SFQASIM_assocoffset, IPPASIM_resetflag, 1);
 /* line 113: */
ZOPASIM_translateendfunction(TFQASIM_fixedpartsize, 1);
 /* line 115: */
BGQASIM.Size = TFQASIM_fixedpartsize;
BGQASIM.Offset = RFQASIM_outputoffset;
 /* line 116: */
BGQASIM.Sort = (A68_BITS )(IHCASIM_combinatorial|LHCASIM_initialised);
CGQASIM = BGQASIM;
} 
A_PROC_EXIT(translateassoc);
*ReturnedValue = (CGQASIM);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void BFQASIM(void)   /* initialise DECS keamassoc */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259R","./a68files/keamassoc.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/kesignals.m","./mfiles/kebasics.m","./mfiles/keconv.m","./mfiles/keamstandard.m","./mfiles/keambasics.m","./mfiles/kesymbols.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/transform/assoc/mfiles/assmodes.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
NYNASIM();   /* USE kesignals */
JSAASIM();   /* USE kebasics */
KUBASIM();   /* USE keconv */
HYOASIM();   /* USE keamstandard */
XDNASIM();   /* USE keambasics */
TCCASIM();   /* USE kesymbols */
JSCAOST();   /* USE basics */
BAAATRN();   /* USE assmodes */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/sim/assoc/./a68files/keamassoc.a68";
A_config.translation_time = "Tue Apr  4 11:09:30 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "AFQASIM (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 11:09:30 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS keamassoc);
UEAALIB_a68config(LGAALIB_configinfo, FFQASIM);
 /* line 82: */
 /* line 118: */
 /* line 120: */
 /* line 123: */
/*SKIP*/;
A_PROC_EXIT(DECS keamassoc);
} 
#undef NL
/* end of translation of ./a68files/keamassoc.a68 */
