
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
/* UNAME:PXPASIM */
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
struct A68t373 { A68_INT mode; union {
struct A68t279 * mode1;
struct A68t280 * mode2;
struct A68t281 * mode3;
} data; };
typedef struct A68t373  A68_373 ;    /* UNION(REF MODE279,REF MODE280,REF MODE281)  */
struct A68t374{
struct A68t290 * Wire;
A68_INT  Instance;
A_PAD_INT(PAD_136)
};
typedef struct A68t374  A68_374 ;    /* STRUCT(REF MODE290,INT)  */
struct A68t375 { A68_INT mode; union {
struct A68t298  mode1;
struct A68t374  mode2;
} data; };
typedef struct A68t375  A68_375 ;    /* UNION(MODE298,MODE374)  */
struct A68t376{
struct A68t375  Node;
A68_INT  Circuit;
A_PAD_INT(PAD_137)
A68_INT  Base;
A_PAD_INT(PAD_138)
};
typedef struct A68t376  A68_376 ;    /* STRUCT(MODE375,INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t377,(struct A68t360 ,struct A68t277 *),(struct A68t360 ,struct A68t277 *,void *));
typedef struct A68t377  A68_377 ;    /* PROC(MODE360) MODE277 */

A_PROCEDURE(A68_BOOL ,A68t378,(struct A68t277 ,struct A68t277 ),(struct A68t277 ,struct A68t277 ,void *));
typedef struct A68t378  A68_378 ;    /* PROC(MODE277,MODE277) BOOL */

A_PROCEDURE(A68_BOOL ,A68t379,(struct A68t360 ,struct A68t360 ),(struct A68t360 ,struct A68t360 ,void *));
typedef struct A68t379  A68_379 ;    /* PROC(MODE360,MODE360) BOOL */

A_PROCEDURE(A68_BOOL ,A68t380,(struct A68t290 ,struct A68t290 ),(struct A68t290 ,struct A68t290 ,void *));
typedef struct A68t380  A68_380 ;    /* PROC(MODE290,MODE290) BOOL */

A_PROCEDURE(A68_BOOL ,A68t381,(struct A68t298 ,struct A68t298 ),(struct A68t298 ,struct A68t298 ,void *));
typedef struct A68t381  A68_381 ;    /* PROC(MODE298,MODE298) BOOL */

A_PROCEDURE(A68_BOOL ,A68t382,(struct A68t374 ,struct A68t374 ),(struct A68t374 ,struct A68t374 ,void *));
typedef struct A68t382  A68_382 ;    /* PROC(MODE374,MODE374) BOOL */

A_PROCEDURE(A68_BOOL ,A68t383,(struct A68t375 ,struct A68t375 ),(struct A68t375 ,struct A68t375 ,void *));
typedef struct A68t383  A68_383 ;    /* PROC(MODE375,MODE375) BOOL */

A_PROCEDURE(A68_BOOL ,A68t384,(struct A68t376 ,struct A68t376 ),(struct A68t376 ,struct A68t376 ,void *));
typedef struct A68t384  A68_384 ;    /* PROC(MODE376,MODE376) BOOL */

A_PROCEDURE(struct A68t285 *,A68t385,(struct A68t285 *,struct A68t285 *),(struct A68t285 *,struct A68t285 *,void *));
typedef struct A68t385  A68_385 ;    /* PROC(REF MODE285,REF MODE285) REF MODE285 */

A_PROCEDURE(A68_VOID ,A68t386,(struct A68t294 ,struct A68t294 ,struct A68t294 *),(struct A68t294 ,struct A68t294 ,struct A68t294 *,void *));
typedef struct A68t386  A68_386 ;    /* PROC(REF MODE294,REF MODE294) REF MODE294 */

A_PROCEDURE(A68_INT ,A68t387,(A68_VC ),(A68_VC ,void *));
typedef struct A68t387  A68_387 ;    /* PROC(REF MODE26) INT */

A_PROCEDURE(A68_VOID ,A68t388,(struct A68t275 ),(struct A68t275 ,void *));
typedef struct A68t388  A68_388 ;    /* PROC(MODE275) VOID */

A_PROCEDURE(A68_VOID ,A68t389,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t389  A68_389 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,56,A68t390);
typedef struct A68t390  A68_390 ;    /* STRUCT 56 CHAR */
A_ISTRUCT(A68_CHAR ,9,A68t391);
typedef struct A68t391  A68_391 ;    /* STRUCT 9 CHAR */
A_VECTOR(struct A68t290 ,A68t392);
typedef struct A68t392  A68_392 ;    /* VECTOR [] MODE290 */

A_PROCEDURE(A68_VOID ,A68t393,(struct A68t104 ,struct A68t392 ,struct A68t32 ,A68_INT ),(struct A68t104 ,struct A68t392 ,struct A68t32 ,A68_INT ,void *));
typedef struct A68t393  A68_393 ;    /* PROC(MODE104,MODE392,MODE32,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t394,(struct A68t32 ,A68_INT ),(struct A68t32 ,A68_INT ,void *));
typedef struct A68t394  A68_394 ;    /* PROC(MODE32,INT) VOID */
A_ISTRUCT(A68_CHAR ,11,A68t395);
typedef struct A68t395  A68_395 ;    /* STRUCT 11 CHAR */

A_PROCEDURE(A68_VOID ,A68t396,(A68_INT ,A68_INT ,A68_INT ),(A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t396  A68_396 ;    /* PROC(INT,INT,INT) VOID */
A_ISTRUCT(A68_CHAR ,18,A68t397);
typedef struct A68t397  A68_397 ;    /* STRUCT 18 CHAR */

A_PROCEDURE(A68_VOID ,A68t398,(struct A68t205 ,A68_VC ,struct A68t218 ,struct A68t392 ,struct A68t32 ,A68_INT ,struct A68t221 ,struct A68t231 *,struct A68t36 ,struct A68t292 *),(struct A68t205 ,A68_VC ,struct A68t218 ,struct A68t392 ,struct A68t32 ,A68_INT ,struct A68t221 ,struct A68t231 *,struct A68t36 ,struct A68t292 *,void *));
typedef struct A68t398  A68_398 ;    /* PROC(MODE205,REF MODE26,MODE218,MODE392,MODE32,INT,MODE221,REF MODE231,MODE36) MODE292 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from kebasics --- */
extern A68_279 * VSAASIM_nilsenum;
extern A68_VOID  NKDAOST_sysfault(A68_VC );
/* --- End of imports from kebasics --- */


/* --- Imports from keamstandard --- */
extern A68_INT  OYOASIM_globalinterrupted;
extern A68_327  GAPASIM_globalinterruptedlabel;
extern A68_327  JHPASIM_setqueryoutputlabel;
extern A68_327  QHPASIM_newresultlabel;
extern A68_327  XHPASIM_oldresultlabel;
extern A68_327  EIPASIM_unchangedquerylabel;
extern A68_327  LIPASIM_querylabel;
extern A68_327  SIPASIM_arithexceptionlabel;
extern A68_VOID  DOPASIM_translatestartfunction(A68_VC );
extern A68_VOID  ZOPASIM_translateendfunction(A68_INT ,A68_INT );
/* --- End of imports from keamstandard --- */


/* --- Imports from keambasics --- */
#define GXFASIM_instanceptr 2
#define IXFASIM_integer 4
extern A68_325 * GYFASIM_nilparams;
extern A68_329  ONFASIM_indirect;
#define OFNASIM_sqrterror 4
#define PFNASIM_arithmeticerror 8
extern A68_VOID  YLFASIM_label(A68_VC ,A68_327 *);
extern A68_VOID  YFNASIM_newlabel(A68_327 *);
#define CENASIM_bitsperbyte 8
extern A68_INT  DENASIM_ws;
extern A68_INT  GENASIM_sizeunit;
extern A68_VOID  SSNASIM_amadd(void);
extern A68_VOID  USNASIM_amsub(void);
extern A68_VOID  WSNASIM_ammul(void);
extern A68_VOID  YSNASIM_amdiv(void);
extern A68_VOID  ATNASIM_ammod(void);
extern A68_VOID  CTNASIM_amneg(void);
extern A68_VOID  ETNASIM_amabs(void);
extern A68_VOID  GTNASIM_amiand(void);
extern A68_VOID  ITNASIM_amior(void);
extern A68_VOID  KTNASIM_amshl(void);
extern A68_VOID  MTNASIM_amshr(void);
extern A68_VOID  OTNASIM_amcom(void);
extern A68_VOID  QTNASIM_amtest(void);
extern A68_VOID  STNASIM_ameq(void);
extern A68_VOID  UTNASIM_amneq(void);
extern A68_VOID  WTNASIM_amgt(void);
extern A68_VOID  YTNASIM_amge(void);
extern A68_VOID  AUNASIM_amlt(void);
extern A68_VOID  CUNASIM_amle(void);
extern A68_VOID  EUNASIM_amand(void);
extern A68_VOID  GUNASIM_amor(void);
extern A68_VOID  IUNASIM_amnot(void);
extern A68_VOID  QUNASIM_ampushint(A68_INT );
extern A68_VOID  TUNASIM_amdrop(A68_INT );
extern A68_VOID  WUNASIM_amlocal(A68_INT );
extern A68_VOID  AVNASIM_amglobal(A68_INT ,struct A68t329 );
extern A68_VOID  FVNASIM_amstore(A68_INT ,struct A68t329 );
extern A68_VOID  UVNASIM_amitos(A68_INT );
extern A68_VOID  ZVNASIM_amstoi(void);
extern A68_VOID  EWNASIM_amjump(struct A68t327 );
extern A68_VOID  IWNASIM_amjumpno(A68_INT ,struct A68t327 );
extern A68_VOID  NWNASIM_amlabel(A68_INT ,struct A68t327 );
extern A68_VOID  BXNASIM_amcall(A68_INT ,struct A68t327 );
extern A68_VOID  HXNASIM_amfanout(A68_INT );
extern A68_VOID  KXNASIM_amret(A68_INT );
extern A68_VOID  PXNASIM_amgeneratenamedcode(struct A68t327 ,struct A68t325 *,struct A68t325 *);
/* --- End of imports from keambasics --- */


/* --- Imports from kesymbols --- */
extern A68_VOID  VGCASIM_lookuptype(A68_INT ,A68_277 *);
extern A68_INT  YGCASIM_lookuptypesize(A68_INT );
#define IHCASIM_combinatorial 0X1U
/* --- End of imports from kesymbols --- */


/* --- Imports from basics --- */
extern A68_VOID  RSCAOST_makeid(A68_VC ,A68_VC *);
/* --- End of imports from basics --- */


/* --- Imports from assmodes --- */
/* --- End of imports from assmodes --- */


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
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_390   TXPASIM = {"$Id: keamarith.a68,v 34.2 1995/03/29 13:04:32 ella Exp $"}; 
A_GISVEC(A68_VC ,UXPASIM,TXPASIM,56)
A68_BOOL  VXPASIM_noarithsyet;
static A68_391   CYPASIM = {"SQRT_US|1"}; 
A_GISVEC(A68_VC ,DYPASIM,CYPASIM,9)
static A68_VC  LZPASIM_arithqueryexit;
static A68_395   NZPASIM = {"Arith_query"}; 
A_GISVEC(A68_VC ,OZPASIM,NZPASIM,11)
static A68_397   DAQASIM = {"arith output check"}; 
A_GISVEC(A68_VC ,EAQASIM,DAQASIM,18)

A_STATIC A68_VOID  XXPASIM_arithsqrt(A68_INT  D);

A_STATIC A68_VOID  GYPASIM_arithdyad(A68_INT  Sort);

A_STATIC A68_VOID  JYPASIM_arithmonad(A68_INT  Sort, A68_INT  D);

A_STATIC A68_VOID  OYPASIM_arithbody(A68_104  Body, A68_392  Inputwires, A68_32  Inputtypes, A68_INT  D);

A_STATIC A68_VOID  HZPASIM_arithinputcheck(A68_32  Typeindices, A68_INT  D);

A_STATIC A68_VOID  MZPASIM_translatequeryexit(void);

A_STATIC A68_VOID  CAQASIM_arithoutputcheck(A68_INT  Offset, A68_INT  Typeindex, A68_INT  D);

A68_VOID  BBQASIM_translatearith(A68_205  Body, A68_VC  Name, A68_218  Declaration, A68_392  Inputwires, A68_32  Inputtypes, A68_INT  Outputtype, A68_221  Environ, A68_231 * Closure, A68_36  Flt, A68_292  *ReturnedValue);

A_STATIC A68_VOID  XXPASIM_arithsqrt(A68_INT  D)
{ 
A68_327  YXPASIM;  /* avoid structure result */
A68_327  ZXPASIM_ok;
A68_329  AYPASIM;  /* OPERATORS - mode -> union mode */
A68_329  BYPASIM;  /* OPERATORS - mode -> union mode */
A68_327  EYPASIM;  /* avoid structure result */
A_PROC_ENTRY(arithsqrt);
 /* line 68: */
 /* line 69: */
{ 
YFNASIM_newlabel(  &YXPASIM );
ZXPASIM_ok = YXPASIM;
 /* line 70: */
WUNASIM_amlocal(0);
 /* line 71: */
QUNASIM_ampushint(0);
 /* line 72: */
AUNASIM_amlt();
 /* line 73: */
IWNASIM_amjumpno(0, ZXPASIM_ok);
 /* line 74: */
AVNASIM_amglobal(DENASIM_ws, A_UNITE(AYPASIM,mode2,2,GAPASIM_globalinterruptedlabel));
 /* line 75: */
WUNASIM_amlocal(0);
 /* line 76: */
QUNASIM_ampushint(PFNASIM_arithmeticerror);
 /* line 77: */
GTNASIM_amiand();
 /* line 78: */
QTNASIM_amtest();
 /* line 79: */
IUNASIM_amnot();
 /* line 80: */
IWNASIM_amjumpno(D, SIPASIM_arithexceptionlabel);
 /* line 81: */
QUNASIM_ampushint((PFNASIM_arithmeticerror+OFNASIM_sqrterror));
 /* line 82: */
ITNASIM_amior();
 /* line 83: */
FVNASIM_amstore(DENASIM_ws, A_UNITE(BYPASIM,mode2,2,GAPASIM_globalinterruptedlabel));
 /* line 84: */
TUNASIM_amdrop((D-1));
 /* line 85: */
EWNASIM_amjump(SIPASIM_arithexceptionlabel);
 /* line 87: */
NWNASIM_amlabel(D, ZXPASIM_ok);
 /* line 88: */
UVNASIM_amitos((DENASIM_ws*CENASIM_bitsperbyte));
 /* line 89: */
QUNASIM_ampushint(1);
 /* line 90: */
YLFASIM_label( DYPASIM, &EYPASIM );
BXNASIM_amcall(2, EYPASIM);
 /* line 91: */
TUNASIM_amdrop(1);
 /* line 92: */
 /* line 93: */
ZVNASIM_amstoi();
} 
A_PROC_EXIT(arithsqrt);
return;
} 
#undef NL

A_STATIC A68_VOID  GYPASIM_arithdyad(A68_INT  Sort)
{ 
A_PROC_ENTRY(arithdyad);
 /* line 102: */
 /* line 103: */
switch ( Sort )
{ 
case 1: 
 /* line 104: */
SSNASIM_amadd();
break;
case 2: 
 /* line 105: */
USNASIM_amsub();
break;
case 3: 
 /* line 106: */
WSNASIM_ammul();
break;
case 4: 
 /* line 107: */
YSNASIM_amdiv();
break;
case 5: 
 /* line 108: */
STNASIM_ameq();
break;
case 6: 
 /* line 109: */
UTNASIM_amneq();
break;
case 7: 
 /* line 110: */
CUNASIM_amle();
break;
case 8: 
 /* line 111: */
YTNASIM_amge();
break;
case 9: 
 /* line 112: */
AUNASIM_amlt();
break;
case 10: 
 /* line 113: */
WTNASIM_amgt();
break;
case 11: 
 /* line 114: */
EUNASIM_amand();
break;
case 12: 
 /* line 115: */
GUNASIM_amor();
break;
case 13: 
 /* line 116: */
/*SKIP*/;
break;
case 14: 
 /* line 117: */
KTNASIM_amshl();
break;
case 15: 
 /* line 118: */
MTNASIM_amshr();
break;
case 16: 
 /* line 119: */
GTNASIM_amiand();
break;
case 17: 
 /* line 121: */
ITNASIM_amior();
break;
case 18: 
ATNASIM_ammod();
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(arithdyad);
return;
} 
#undef NL

A_STATIC A68_VOID  JYPASIM_arithmonad(A68_INT  Sort, A68_INT  D)
{ 
A_PROC_ENTRY(arithmonad);
 /* line 127: */
 /* line 128: */
switch ( Sort )
{ 
case 1: 
 /* line 129: */
/*SKIP*/;
break;
case 2: 
 /* line 130: */
CTNASIM_amneg();
break;
case 3: 
 /* line 131: */
IUNASIM_amnot();
break;
case 4: 
 /* line 132: */
/*SKIP*/;
break;
case 5: 
 /* line 133: */
OTNASIM_amcom();
break;
case 6: 
 /* line 135: */
XXPASIM_arithsqrt(D);
break;
case 7: 
ETNASIM_amabs();
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(arithmonad);
return;
} 
#undef NL
 /* line 143: */

A_STATIC A68_VOID  OYPASIM_arithbody(A68_104  Body, A68_392  Inputwires, A68_32  Inputtypes, A68_INT  D)
{ 
A68_104  PYPASIM;  /* united object - for case conformity */
A68_105 * QYPASIM_i;
A68_107 * RYPASIM_a;
A68_INT  SYPASIM_ipno;
A68_INT  TYPASIM_primno;
A68_INT  UYPASIM_i;
A68_INT  VYPASIM;  /* to part of loop */
A68_INT  WYPASIM_size;
A68_INT  XYPASIM_offset;
A68_109 * YYPASIM_dop;
A68_110 * ZYPASIM_mop;
A68_111 * AZPASIM_cond;
A68_327  BZPASIM;  /* avoid structure result */
A68_327  CZPASIM_elsepartlabel;
A68_327  DZPASIM;  /* avoid structure result */
A68_327  EZPASIM_endlabel;
A_PROC_ENTRY(arithbody);
 /* line 144: */
 /* line 145: */
PYPASIM = Body ;
switch ( PYPASIM.mode )
{ 
case 1: /* REF STRUCT(INT,REF MODE26)  */
QYPASIM_i = (PYPASIM.data.mode1);
 /* line 146: */
 /* line 147: */
QUNASIM_ampushint((*(&(QYPASIM_i->Int))));
break;
case 3: /* REF STRUCT(INT)  */
RYPASIM_a = (PYPASIM.data.mode3);
 /* line 148: */
 /* line 149: */
{ 
SYPASIM_ipno = (*(&(RYPASIM_a->Nameno)));
 /* line 150: */
TYPASIM_primno = 1;
 /* line 151: */
VYPASIM = (SYPASIM_ipno-1);
for ( UYPASIM_i = 1;
UYPASIM_i <= VYPASIM;
UYPASIM_i += 1 )
{ 
 /* line 152: */
 /* line 153: */
TYPASIM_primno+=A_VINDEX(Inputwires,SYPASIM_ipno).Blocks.upb;
}
 /* line 154: */
WYPASIM_size = YGCASIM_lookuptypesize(A_VINDEX(Inputtypes,TYPASIM_primno));
 /* line 155: */
XYPASIM_offset = (GENASIM_sizeunit+(DENASIM_ws*TYPASIM_primno));
 /* line 156: */
WUNASIM_amlocal((D-1));
 /* line 157: */
QUNASIM_ampushint(XYPASIM_offset);
 /* line 158: */
SSNASIM_amadd();
 /* line 159: */
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
 /* line 160: */
QUNASIM_ampushint(GENASIM_sizeunit);
 /* line 161: */
SSNASIM_amadd();
 /* line 162: */
 /* line 163: */
 /* line 164: */
AVNASIM_amglobal((WYPASIM_size-GENASIM_sizeunit), ONFASIM_indirect);
} 
break;
case 5: /* REF STRUCT(MODE104,INT,MODE104)  */
YYPASIM_dop = (PYPASIM.data.mode5);
 /* line 165: */
 /* line 166: */
{ 
OYPASIM_arithbody((*(&(YYPASIM_dop->Left))), Inputwires, Inputtypes, D);
 /* line 167: */
OYPASIM_arithbody((*(&(YYPASIM_dop->Right))), Inputwires, Inputtypes, (D+1));
 /* line 168: */
 /* line 169: */
 /* line 170: */
GYPASIM_arithdyad((*(&(YYPASIM_dop->Sort))));
} 
break;
case 6: /* REF STRUCT(INT,MODE104)  */
ZYPASIM_mop = (PYPASIM.data.mode6);
 /* line 171: */
 /* line 172: */
{ 
OYPASIM_arithbody((*(&(ZYPASIM_mop->Right))), Inputwires, Inputtypes, D);
 /* line 173: */
 /* line 174: */
 /* line 175: */
JYPASIM_arithmonad((*(&(ZYPASIM_mop->Sort))), (D+1));
} 
break;
case 7: /* REF STRUCT(MODE104,MODE104,MODE104)  */
AZPASIM_cond = (PYPASIM.data.mode7);
 /* line 176: */
 /* line 177: */
{ 
YFNASIM_newlabel(  &BZPASIM );
CZPASIM_elsepartlabel = BZPASIM;
 /* line 178: */
YFNASIM_newlabel(  &DZPASIM );
EZPASIM_endlabel = DZPASIM;
 /* line 179: */
OYPASIM_arithbody((*(&(AZPASIM_cond->Cond))), Inputwires, Inputtypes, D);
 /* line 180: */
IWNASIM_amjumpno(0, CZPASIM_elsepartlabel);
 /* line 181: */
OYPASIM_arithbody((*(&(AZPASIM_cond->True))), Inputwires, Inputtypes, D);
 /* line 182: */
EWNASIM_amjump(EZPASIM_endlabel);
 /* line 183: */
NWNASIM_amlabel(D, CZPASIM_elsepartlabel);
 /* line 184: */
OYPASIM_arithbody((*(&(AZPASIM_cond->False))), Inputwires, Inputtypes, D);
 /* line 185: */
 /* line 186: */
 /* line 187: */
NWNASIM_amlabel(D, EZPASIM_endlabel);
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(arithbody);
return;
} 
#undef NL

A_STATIC A68_VOID  HZPASIM_arithinputcheck(A68_32  Typeindices, A68_INT  D)
{ 
A68_INT  IZPASIM_offset;
A68_INT  JZPASIM_i;
A68_INT  KZPASIM;  /* to part of loop */
A_PROC_ENTRY(arithinputcheck);
 /* line 198: */
 /* line 199: */
{ 
IZPASIM_offset = (GENASIM_sizeunit+DENASIM_ws);
 /* line 200: */
KZPASIM = Typeindices.upb;
for ( JZPASIM_i = 1;
JZPASIM_i <= KZPASIM;
JZPASIM_i += 1 )
{ 
 /* line 201: */
WUNASIM_amlocal((D-1));
 /* line 202: */
QUNASIM_ampushint(IZPASIM_offset);
 /* line 203: */
SSNASIM_amadd();
 /* line 204: */
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
 /* line 205: */
AVNASIM_amglobal(GENASIM_sizeunit, ONFASIM_indirect);
 /* line 206: */
QTNASIM_amtest();
 /* line 207: */
IWNASIM_amjumpno(0, JHPASIM_setqueryoutputlabel);
 /* line 208: */
 /* line 209: */
IZPASIM_offset+=DENASIM_ws;
}
 /* line 210: */
} 
A_PROC_EXIT(arithinputcheck);
return;
} 
#undef NL

A_STATIC A68_VOID  MZPASIM_translatequeryexit(void)
{ 
A68_VC  PZPASIM;  /* avoid structure result */
A68_325 * QZPASIM_params;
A68_325  RZPASIM;  /* collateral clause result */
A68_325  SZPASIM;  /* collateral clause result */
A68_325  TZPASIM;  /* collateral clause result */
A68_325  UZPASIM;  /* collateral clause result */
A68_325 * VZPASIM;  /* YIELD */
A68_325 * WZPASIM;  /* YIELD */
A68_325 * XZPASIM;  /* YIELD */
A68_327  YZPASIM;  /* collateral clause result */
A_PROC_ENTRY(translatequeryexit);
{ 
RSCAOST_makeid( OZPASIM, &PZPASIM );
LZPASIM_arithqueryexit = PZPASIM;
 /* line 227: */
QZPASIM_params = (A_HEAP(A68_325 ));
RZPASIM.Head.Sort = GXFASIM_instanceptr;
RZPASIM.Head.Size = 0;
 /* line 228: */
SZPASIM.Head.Sort = IXFASIM_integer;
SZPASIM.Head.Size = 0;
 /* line 229: */
TZPASIM.Head.Sort = IXFASIM_integer;
TZPASIM.Head.Size = 0;
 /* line 230: */
UZPASIM.Head.Sort = IXFASIM_integer;
UZPASIM.Head.Size = 0;
UZPASIM.Tail = GYFASIM_nilparams;
VZPASIM = A_HEAP(A68_325 ) ;
(*VZPASIM) = UZPASIM ;
TZPASIM.Tail = VZPASIM;
WZPASIM = A_HEAP(A68_325 ) ;
(*WZPASIM) = TZPASIM ;
SZPASIM.Tail = WZPASIM;
XZPASIM = A_HEAP(A68_325 ) ;
(*XZPASIM) = SZPASIM ;
RZPASIM.Tail = XZPASIM;
(*QZPASIM_params) = RZPASIM;
 /* line 231: */
YZPASIM.Lab = 0;
YZPASIM.Tag = LZPASIM_arithqueryexit;
PXNASIM_amgeneratenamedcode(YZPASIM, QZPASIM_params, GYFASIM_nilparams);
 /* line 233: */
WUNASIM_amlocal(3);
 /* line 234: */
SSNASIM_amadd();
 /* line 235: */
WUNASIM_amlocal(0);
 /* line 236: */
AVNASIM_amglobal(GENASIM_sizeunit, ONFASIM_indirect);
 /* line 237: */
QTNASIM_amtest();
 /* line 238: */
IWNASIM_amjumpno(2, EIPASIM_unchangedquerylabel);
 /* line 240: */
QUNASIM_ampushint(0);
 /* line 241: */
FVNASIM_amstore(GENASIM_sizeunit, ONFASIM_indirect);
 /* line 242: */
WUNASIM_amlocal(2);
 /* line 243: */
SSNASIM_amadd();
 /* line 244: */
HXNASIM_amfanout(0);
 /* line 246: */
NWNASIM_amlabel(2, EIPASIM_unchangedquerylabel);
 /* line 247: */
FVNASIM_amstore(GENASIM_sizeunit, ONFASIM_indirect);
 /* line 248: */
 /* line 250: */
KXNASIM_amret(0);
} 
A_PROC_EXIT(translatequeryexit);
return;
} 
#undef NL

A_STATIC A68_VOID  CAQASIM_arithoutputcheck(A68_INT  Offset, A68_INT  Typeindex, A68_INT  D)
{ 
A68_277  FAQASIM;  /* avoid structure result */
A68_277  GAQASIM_type;
A68_INT  HAQASIM_size;
A68_INT  IAQASIM_lwb;
A68_INT  JAQASIM_upb;
A68_INT  KAQASIM_valuepartoffset;
A68_277  LAQASIM;  /* united object - for case conformity */
A68_279 * MAQASIM_e;
A68_279 * NAQASIM_scan;
A68_281 * OAQASIM_c;
A68_280 * PAQASIM_int;
A68_329  QAQASIM;  /* OPERATORS - mode -> union mode */
A68_327  RAQASIM;  /* collateral clause result */
A_PROC_ENTRY(arithoutputcheck);
 /* line 261: */
 /* line 262: */
{ 
if ( (D!=2) )
{ 
NKDAOST_sysfault(EAQASIM);
} 
 /* line 263: */
VGCASIM_lookuptype( Typeindex, &FAQASIM );
GAQASIM_type = FAQASIM;
 /* line 264: */
HAQASIM_size = YGCASIM_lookuptypesize(Typeindex);
 /* line 265: */
 /* line 266: */
 /* line 267: */
LAQASIM = GAQASIM_type ;
switch ( LAQASIM.mode )
{ 
case 1: /* REF STRUCT(REF MODE26,MODE277,REF MODE279)  */
MAQASIM_e = (LAQASIM.data.mode1);
 /* line 268: */
 /* line 269: */
{ 
IAQASIM_lwb = JAQASIM_upb = 1;
 /* line 270: */
NAQASIM_scan = (*(&(MAQASIM_e->Rest)));
 /* line 271: */
for ( ;; )
{ 
 /* line 272: */
if ( !((NAQASIM_scan!=VSAASIM_nilsenum)) ) break;
JAQASIM_upb+=1;
 /* line 273: */
 /* line 274: */
NAQASIM_scan = (*(&(NAQASIM_scan->Rest)));
}
 /* line 275: */
 /* line 276: */
 /* line 277: */
KAQASIM_valuepartoffset = 0;
} 
break;
case 3: /* REF STRUCT(REF MODE26,REF MODE26)  */
OAQASIM_c = (LAQASIM.data.mode3);
 /* line 278: */
 /* line 279: */
{ 
IAQASIM_lwb = 1;
 /* line 280: */
JAQASIM_upb = (*(&(OAQASIM_c->Char))).upb;
 /* line 281: */
 /* line 282: */
 /* line 283: */
KAQASIM_valuepartoffset = 0;
} 
break;
case 2: /* REF STRUCT(REF MODE26,INT,INT)  */
PAQASIM_int = (LAQASIM.data.mode2);
 /* line 284: */
 /* line 285: */
{ 
IAQASIM_lwb = (*(&(PAQASIM_int->Lwb)));
 /* line 286: */
JAQASIM_upb = (*(&(PAQASIM_int->Upb)));
 /* line 287: */
 /* line 288: */
 /* line 289: */
KAQASIM_valuepartoffset = GENASIM_sizeunit;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 293: */
AVNASIM_amglobal(DENASIM_ws, A_UNITE(QAQASIM,mode1,1,OYOASIM_globalinterrupted));
 /* line 294: */
QUNASIM_ampushint(PFNASIM_arithmeticerror);
 /* line 295: */
GTNASIM_amiand();
 /* line 296: */
QTNASIM_amtest();
 /* line 297: */
IUNASIM_amnot();
 /* line 298: */
IWNASIM_amjumpno(1, SIPASIM_arithexceptionlabel);
 /* line 301: */
WUNASIM_amlocal(0);
 /* line 302: */
QUNASIM_ampushint(IAQASIM_lwb);
 /* line 303: */
YTNASIM_amge();
 /* line 304: */
IWNASIM_amjumpno(1, JHPASIM_setqueryoutputlabel);
 /* line 305: */
WUNASIM_amlocal(0);
 /* line 306: */
QUNASIM_ampushint(JAQASIM_upb);
 /* line 307: */
CUNASIM_amle();
 /* line 308: */
IWNASIM_amjumpno(1, JHPASIM_setqueryoutputlabel);
 /* line 311: */
WUNASIM_amlocal(1);
 /* line 312: */
QUNASIM_ampushint(Offset);
 /* line 313: */
SSNASIM_amadd();
 /* line 316: */
 /* line 317: */
if ( (KAQASIM_valuepartoffset!=0) )
{ 
WUNASIM_amlocal(0);
 /* line 318: */
AVNASIM_amglobal(GENASIM_sizeunit, ONFASIM_indirect);
 /* line 319: */
QTNASIM_amtest();
 /* line 320: */
 /* line 321: */
IWNASIM_amjumpno(0, QHPASIM_newresultlabel);
} 
 /* line 323: */
WUNASIM_amlocal(0);
 /* line 324: */
 /* line 325: */
if ( (KAQASIM_valuepartoffset!=0) )
{ 
QUNASIM_ampushint(KAQASIM_valuepartoffset);
 /* line 326: */
 /* line 327: */
SSNASIM_amadd();
} 
 /* line 328: */
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
 /* line 329: */
WUNASIM_amlocal(2);
 /* line 330: */
UTNASIM_amneq();
 /* line 331: */
IWNASIM_amjumpno(1, XHPASIM_oldresultlabel);
 /* line 334: */
NWNASIM_amlabel(3, QHPASIM_newresultlabel);
 /* line 337: */
WUNASIM_amlocal(0);
 /* line 338: */
 /* line 339: */
if ( (KAQASIM_valuepartoffset!=0) )
{ 
QUNASIM_ampushint(KAQASIM_valuepartoffset);
 /* line 340: */
 /* line 341: */
SSNASIM_amadd();
} 
 /* line 344: */
WUNASIM_amlocal(2);
 /* line 345: */
FVNASIM_amstore(DENASIM_ws, ONFASIM_indirect);
 /* line 346: */
 /* line 347: */
if ( (KAQASIM_valuepartoffset!=0) )
{ 
QUNASIM_ampushint(1);
 /* line 348: */
 /* line 349: */
 /* line 350: */
FVNASIM_amstore(GENASIM_sizeunit, ONFASIM_indirect);
} 
else
{ 
 /* line 351: */
TUNASIM_amdrop(1);
} 
 /* line 354: */
WUNASIM_amlocal(1);
 /* line 355: */
QUNASIM_ampushint(0);
 /* line 356: */
FVNASIM_amstore(GENASIM_sizeunit, ONFASIM_indirect);
 /* line 358: */
NWNASIM_amlabel(2, XHPASIM_oldresultlabel);
 /* line 361: */
ZOPASIM_translateendfunction((Offset+HAQASIM_size), 2);
 /* line 366: */
NWNASIM_amlabel(1, SIPASIM_arithexceptionlabel);
 /* line 370: */
QUNASIM_ampushint(1);
 /* line 371: */
EWNASIM_amjump(LIPASIM_querylabel);
 /* line 373: */
NWNASIM_amlabel(1, JHPASIM_setqueryoutputlabel);
 /* line 377: */
QUNASIM_ampushint(0);
 /* line 378: */
NWNASIM_amlabel(2, LIPASIM_querylabel);
 /* line 379: */
QUNASIM_ampushint((Offset+HAQASIM_size));
 /* line 380: */
QUNASIM_ampushint(Offset);
 /* line 381: */
RAQASIM.Lab = 0;
RAQASIM.Tag = LZPASIM_arithqueryexit;
BXNASIM_amcall(4, RAQASIM);
 /* line 382: */
 /* line 384: */
KXNASIM_amret(0);
} 
A_PROC_EXIT(arithoutputcheck);
return;
} 
#undef NL
 /* line 391: */
 /* line 392: */
 /* line 393: */
 /* line 394: */

A68_VOID  BBQASIM_translatearith(A68_205  Body, A68_VC  Name, A68_218  Declaration, A68_392  Inputwires, A68_32  Inputtypes, A68_INT  Outputtype, A68_221  Environ, A68_231 * Closure, A68_36  Flt, A68_292  *ReturnedValue)
{ 
A68_INT  CBQASIM_outputoffset;
A68_INT  DBQASIM_fixedpartsize;
A68_292  EBQASIM;  /* collateral clause result */
A68_292  FBQASIM;  /* clause result */
A_PROC_ENTRY(translatearith);
 /* line 395: */
 /* line 396: */
{ 
 /* line 397: */
if ( VXPASIM_noarithsyet )
{ 
MZPASIM_translatequeryexit();
 /* line 398: */
 /* line 399: */
VXPASIM_noarithsyet = A68_FALSE;
} 
 /* line 401: */
 /* line 402: */
 /* line 403: */
CBQASIM_outputoffset = ((GENASIM_sizeunit+DENASIM_ws)+(Inputtypes.upb*DENASIM_ws));
 /* line 404: */
DOPASIM_translatestartfunction(Name);
 /* line 405: */
HZPASIM_arithinputcheck(Inputtypes, 1);
 /* line 406: */
OYPASIM_arithbody(Body.Output, Inputwires, Inputtypes, 1);
 /* line 408: */
CAQASIM_arithoutputcheck(CBQASIM_outputoffset, Outputtype, 2);
 /* line 409: */
DBQASIM_fixedpartsize = (CBQASIM_outputoffset+YGCASIM_lookuptypesize(Outputtype));
 /* line 410: */
EBQASIM.Size = DBQASIM_fixedpartsize;
EBQASIM.Offset = CBQASIM_outputoffset;
 /* line 411: */
 /* line 414: */
EBQASIM.Sort = IHCASIM_combinatorial;
FBQASIM = EBQASIM;
} 
A_PROC_EXIT(translatearith);
*ReturnedValue = (FBQASIM);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void QXPASIM(void)   /* initialise DECS keamarith */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259R","./a68files/keamarith.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/kebasics.m","./mfiles/keamstandard.m","./mfiles/keambasics.m","./mfiles/kesymbols.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/transform/assoc/mfiles/assmodes.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
JSAASIM();   /* USE kebasics */
HYOASIM();   /* USE keamstandard */
XDNASIM();   /* USE keambasics */
TCCASIM();   /* USE kesymbols */
JSCAOST();   /* USE basics */
BAAATRN();   /* USE assmodes */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/sim/assoc/./a68files/keamarith.a68";
A_config.translation_time = "Tue Apr  4 11:09:12 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "PXPASIM (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 11:09:12 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS keamarith);
UEAALIB_a68config(LGAALIB_configinfo, UXPASIM);
 /* line 61: */
VXPASIM_noarithsyet = A68_TRUE;
 /* line 67: */
 /* line 101: */
 /* line 126: */
 /* line 142: */
 /* line 197: */
 /* line 222: */
 /* line 224: */
 /* line 225: */
 /* line 226: */
 /* line 260: */
 /* line 390: */
 /* line 416: */
A_PROC_EXIT(DECS keamarith);
} 
#undef NL
/* end of translation of ./a68files/keamarith.a68 */
