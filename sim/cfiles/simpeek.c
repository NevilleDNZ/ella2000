
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
/* UNAME:EFEBSIM */
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

A_PROCEDURE(A68_INT ,A68t92,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t92  A68_92 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_INT ,A68t93,(A68_INT ),(A68_INT ,void *));
typedef struct A68t93  A68_93 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_VOID ,A68t94,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t94  A68_94 ;    /* PROC(INT,INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t95,(A68_INT ),(A68_INT ,void *));
typedef struct A68t95  A68_95 ;    /* PROC(INT) VOID */
struct A68t96{
A68_INT  Svoid;
A_PAD_INT(PAD_20)
};
typedef struct A68t96  A68_96 ;    /* STRUCT(INT)  */
struct A68t97{
A68_INT  Snull;
A_PAD_INT(PAD_21)
};
typedef struct A68t97  A68_97 ;    /* STRUCT(INT)  */
struct A68t98{
A68_VC  Id;
A68_INT  Lwb;
A_PAD_INT(PAD_22)
A68_INT  Upb;
A_PAD_INT(PAD_23)
};
typedef struct A68t98  A68_98 ;    /* STRUCT(REF MODE26,INT,INT)  */
struct A68t99{
A68_VC  Id;
A68_VC  Char;
};
typedef struct A68t99  A68_99 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t100{
A68_INT  No;
A_PAD_INT(PAD_24)
struct A68t99  T;
};
typedef struct A68t100  A68_100 ;    /* STRUCT(INT,MODE99)  */
struct A68t102 { A68_INT mode; union {
struct A68t101 * mode1;
struct A68t98 * mode2;
struct A68t99 * mode3;
struct A68t103 * mode4;
struct A68t100 * mode5;
struct A68t104 * mode6;
struct A68t105 * mode7;
struct A68t96  mode8;
struct A68t97  mode9;
} data; };
typedef struct A68t102  A68_102 ;    /* UNION(REF MODE101,REF MODE98,REF MODE99,REF MODE103,REF MODE100,REF MODE104,REF MODE105,MODE96,MODE97)  */
struct A68t101{
A68_VC  Id;
struct A68t102  T;
struct A68t101 * Rest;
};
typedef struct A68t101  A68_101 ;    /* STRUCT(REF MODE26,MODE102,REF MODE101)  */
struct A68t103{
A68_INT  No;
A_PAD_INT(PAD_25)
struct A68t102  Type;
};
typedef struct A68t103  A68_103 ;    /* STRUCT(INT,MODE102)  */
struct A68t104{
struct A68t102  From;
struct A68t102  To;
};
typedef struct A68t104  A68_104 ;    /* STRUCT(MODE102,MODE102)  */
struct A68t105{
struct A68t102  T;
struct A68t105 * Rest;
};
typedef struct A68t105  A68_105 ;    /* STRUCT(MODE102,REF MODE105)  */
struct A68t106 { A68_INT mode; union {
struct A68t101 * mode1;
struct A68t98 * mode2;
struct A68t99 * mode3;
} data; };
typedef struct A68t106  A68_106 ;    /* UNION(REF MODE101,REF MODE98,REF MODE99)  */
struct A68t107{
A68_INT  Svvoid;
A_PAD_INT(PAD_26)
};
typedef struct A68t107  A68_107 ;    /* STRUCT(INT)  */
struct A68t108{
A68_INT  Svnull;
A_PAD_INT(PAD_27)
};
typedef struct A68t108  A68_108 ;    /* STRUCT(INT)  */
struct A68t109{
struct A68t102  Type;
};
typedef struct A68t109  A68_109 ;    /* STRUCT(MODE102)  */
struct A68t110{
struct A68t98 * Type;
A68_INT  Value;
A_PAD_INT(PAD_28)
};
typedef struct A68t110  A68_110 ;    /* STRUCT(REF MODE98,INT)  */
struct A68t111{
struct A68t99 * Type;
A68_CHAR  Value;
A_PAD_CHAR(PAD_29)
};
typedef struct A68t111  A68_111 ;    /* STRUCT(REF MODE99,CHAR)  */
struct A68t112{
struct A68t100 * Type;
A68_VC  Value;
};
typedef struct A68t112  A68_112 ;    /* STRUCT(REF MODE100,REF MODE26)  */
struct A68t114 { A68_INT mode; union {
struct A68t109 * mode1;
struct A68t110 * mode2;
struct A68t111 * mode3;
struct A68t112 * mode4;
struct A68t113 * mode5;
struct A68t115 * mode6;
struct A68t116 * mode7;
struct A68t107  mode8;
struct A68t108  mode9;
} data; };
typedef struct A68t114  A68_114 ;    /* UNION(REF MODE109,REF MODE110,REF MODE111,REF MODE112,REF MODE113,REF MODE115,REF MODE116,MODE107,MODE108)  */
struct A68t113{
struct A68t101 * Type;
A68_INT  Tag;
A_PAD_INT(PAD_30)
struct A68t114  Assoc;
};
typedef struct A68t113  A68_113 ;    /* STRUCT(REF MODE101,INT,MODE114)  */
struct A68t115{
struct A68t114  Head;
struct A68t115 * Tail;
};
typedef struct A68t115  A68_115 ;    /* STRUCT(MODE114,REF MODE115)  */
struct A68t116{
struct A68t114  From;
struct A68t114  To;
};
typedef struct A68t116  A68_116 ;    /* STRUCT(MODE114,MODE114)  */
struct A68t117{
A68_INT  Instoffset;
A_PAD_INT(PAD_31)
A68_INT  Offset;
A_PAD_INT(PAD_32)
A68_INT  Size;
A_PAD_INT(PAD_33)
};
typedef struct A68t117  A68_117 ;    /* STRUCT(INT,INT,INT)  */
A_VECTOR(struct A68t117 ,A68t119);
typedef struct A68t119  A68_119 ;    /* VECTOR [] MODE117 */
struct A68t118{
struct A68t102  Type;
struct A68t119  Blocks;
};
typedef struct A68t118  A68_118 ;    /* STRUCT(MODE102,REF MODE119)  */
struct A68t120{
struct A68t118  Firstcell;
A68_INT  Lwb;
A_PAD_INT(PAD_34)
A68_INT  Ramsize;
A_PAD_INT(PAD_35)
A68_INT  Step;
A_PAD_INT(PAD_36)
};
typedef struct A68t120  A68_120 ;    /* STRUCT(MODE118,INT,INT,INT)  */
struct A68t121{
A68_VC  Uname;
A68_VC  Lname;
A68_INT  Node;
A_PAD_INT(PAD_37)
};
typedef struct A68t121  A68_121 ;    /* STRUCT(REF MODE26,REF MODE26,INT)  */
A_VECTOR(struct A68t121 ,A68t123);
typedef struct A68t123  A68_123 ;    /* VECTOR [] MODE121 */
struct A68t122{
struct A68t120 * Ram;
struct A68t118  Outputs;
A68_INT  Noinputs;
A_PAD_INT(PAD_38)
struct A68t123  Body;
};
typedef struct A68t122  A68_122 ;    /* STRUCT(REF MODE120,MODE118,INT,REF MODE123)  */
struct A68t124{
A68_INT  Fn;
A_PAD_INT(PAD_39)
A68_INT  Instance;
A_PAD_INT(PAD_40)
};
typedef struct A68t124  A68_124 ;    /* STRUCT(INT,INT)  */
struct A68t125{
struct A68t118 * Wire;
A68_INT  Instance;
A_PAD_INT(PAD_41)
};
typedef struct A68t125  A68_125 ;    /* STRUCT(REF MODE118,INT)  */
struct A68t126 { A68_INT mode; union {
struct A68t124  mode1;
struct A68t125  mode2;
} data; };
typedef struct A68t126  A68_126 ;    /* UNION(MODE124,MODE125)  */
struct A68t127 { A68_INT mode; union {
struct A68t124  mode1;
struct A68t118  mode2;
} data; };
typedef struct A68t127  A68_127 ;    /* UNION(MODE124,MODE118)  */
struct A68t128{
struct A68t126  Node;
A68_INT  Circuit;
A_PAD_INT(PAD_42)
A68_INT  Base;
A_PAD_INT(PAD_43)
};
typedef struct A68t128  A68_128 ;    /* STRUCT(MODE126,INT,INT)  */

A_PROCEDURE(A68_BOOL ,A68t129,(struct A68t118 ,struct A68t118 ),(struct A68t118 ,struct A68t118 ,void *));
typedef struct A68t129  A68_129 ;    /* PROC(MODE118,MODE118) BOOL */

A_PROCEDURE(A68_BOOL ,A68t130,(struct A68t124 ,struct A68t124 ),(struct A68t124 ,struct A68t124 ,void *));
typedef struct A68t130  A68_130 ;    /* PROC(MODE124,MODE124) BOOL */

A_PROCEDURE(A68_BOOL ,A68t131,(struct A68t125 ,struct A68t125 ),(struct A68t125 ,struct A68t125 ,void *));
typedef struct A68t131  A68_131 ;    /* PROC(MODE125,MODE125) BOOL */

A_PROCEDURE(A68_BOOL ,A68t132,(struct A68t126 ,struct A68t126 ),(struct A68t126 ,struct A68t126 ,void *));
typedef struct A68t132  A68_132 ;    /* PROC(MODE126,MODE126) BOOL */

A_PROCEDURE(A68_BOOL ,A68t133,(struct A68t128 ,struct A68t128 ),(struct A68t128 ,struct A68t128 ,void *));
typedef struct A68t133  A68_133 ;    /* PROC(MODE128,MODE128) BOOL */

A_PROCEDURE(A68_BOOL ,A68t134,(struct A68t102 ,struct A68t102 ),(struct A68t102 ,struct A68t102 ,void *));
typedef struct A68t134  A68_134 ;    /* PROC(MODE102,MODE102) BOOL */

A_PROCEDURE(A68_BOOL ,A68t135,(struct A68t114 ,struct A68t114 ),(struct A68t114 ,struct A68t114 ,void *));
typedef struct A68t135  A68_135 ;    /* PROC(MODE114,MODE114) BOOL */

A_PROCEDURE(A68_VOID ,A68t136,(struct A68t119 ,struct A68t119 ,struct A68t119 *),(struct A68t119 ,struct A68t119 ,struct A68t119 *,void *));
typedef struct A68t136  A68_136 ;    /* PROC(REF MODE119,REF MODE119) REF MODE119 */

A_PROCEDURE(A68_INT ,A68t137,(struct A68t102 ),(struct A68t102 ,void *));
typedef struct A68t137  A68_137 ;    /* PROC(MODE102) INT */

A_PROCEDURE(struct A68t105 *,A68t138,(struct A68t102 ,A68_INT ,A68_INT ),(struct A68t102 ,A68_INT ,A68_INT ,void *));
typedef struct A68t138  A68_138 ;    /* PROC(MODE102,INT,INT) REF MODE105 */

A_PROCEDURE(A68_VOID ,A68t139,(struct A68t118 ,A68_INT ,A68_INT ,struct A68t118 *),(struct A68t118 ,A68_INT ,A68_INT ,struct A68t118 *,void *));
typedef struct A68t139  A68_139 ;    /* PROC(MODE118,INT,INT) MODE118 */

A_PROCEDURE(A68_VOID ,A68t140,(struct A68t120 *,A68_INT ,A68_INT ,struct A68t118 *),(struct A68t120 *,A68_INT ,A68_INT ,struct A68t118 *,void *));
typedef struct A68t140  A68_140 ;    /* PROC(REF MODE120,INT,INT) MODE118 */

A_PROCEDURE(A68_VC *,A68t141,(struct A68t114 ,struct A68t102 ),(struct A68t114 ,struct A68t102 ,void *));
typedef struct A68t141  A68_141 ;    /* PROC(MODE114,MODE102) REF REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t142,(A68_VC ,struct A68t102 ,struct A68t114 *),(A68_VC ,struct A68t102 ,struct A68t114 *,void *));
typedef struct A68t142  A68_142 ;    /* PROC(REF MODE26,MODE102) MODE114 */

A_PROCEDURE(A68_INT ,A68t143,(struct A68t128 ),(struct A68t128 ,void *));
typedef struct A68t143  A68_143 ;    /* PROC(MODE128) INT */

A_PROCEDURE(A68_VOID ,A68t144,(struct A68t128 ,A68_INT ),(struct A68t128 ,A68_INT ,void *));
typedef struct A68t144  A68_144 ;    /* PROC(MODE128,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t145,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t145  A68_145 ;    /* PROC(INT,INT) VOID */
struct A68t147 ;

A_PROCEDURE(A68_VOID ,A68t146,(struct A68t147 *,A68_INT ,struct A68t43 ,struct A68t36 ,struct A68t126 *),(struct A68t147 *,A68_INT ,struct A68t43 ,struct A68t36 ,struct A68t126 *,void *));
typedef struct A68t146  A68_146 ;    /* PROC(REF MODE147,INT,MODE43,MODE36) MODE126 */
struct A68t147{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t147  A68_147 ;    /* STRUCT(REF MODE26,REF BITS)  */

A_PROCEDURE(A68_VOID ,A68t148,(A68_VC ,struct A68t36 ,struct A68t126 *),(A68_VC ,struct A68t36 ,struct A68t126 *,void *));
typedef struct A68t148  A68_148 ;    /* PROC(REF MODE26,MODE36) MODE126 */

A_PROCEDURE(A68_VOID ,A68t149,(A68_INT *,A68_BOOL *,struct A68t36 ),(A68_INT *,A68_BOOL *,struct A68t36 ,void *));
typedef struct A68t149  A68_149 ;    /* PROC(REF INT,REF BOOL,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t150,(struct A68t128 ,A68_VC ),(struct A68t128 ,A68_VC ,void *));
typedef struct A68t150  A68_150 ;    /* PROC(MODE128,REF MODE26) VOID */
struct A68t152 ;

A_PROCEDURE(A68_VOID ,A68t151,(A68_INT *,A68_VC *,struct A68t152 ,struct A68t152 ,struct A68t36 ),(A68_INT *,A68_VC *,struct A68t152 ,struct A68t152 ,struct A68t36 ,void *));
typedef struct A68t151  A68_151 ;    /* PROC(REF INT,REF REF MODE26,MODE152,MODE152,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t152,(A68_VC ,struct A68t36 ),(A68_VC ,struct A68t36 ,void *));
typedef struct A68t152  A68_152 ;    /* PROC(REF MODE26,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t153,(A68_INT ,A68_INT ,A68_VC ,struct A68t152 ,struct A68t152 ,struct A68t43 ,struct A68t36 ,struct A68t126 *),(A68_INT ,A68_INT ,A68_VC ,struct A68t152 ,struct A68t152 ,struct A68t43 ,struct A68t36 ,struct A68t126 *,void *));
typedef struct A68t153  A68_153 ;    /* PROC(INT,INT,REF MODE26,MODE152,MODE152,MODE43,MODE36) MODE126 */

A_PROCEDURE(A68_VOID ,A68t154,(void),(void *));
typedef struct A68t154  A68_154 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t155,(struct A68t36 ),(struct A68t36 ,void *));
typedef struct A68t155  A68_155 ;    /* PROC(MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t156,(A68_VC ,struct A68t36 ,struct A68t128 *),(A68_VC ,struct A68t36 ,struct A68t128 *,void *));
typedef struct A68t156  A68_156 ;    /* PROC(REF MODE26,MODE36) MODE128 */

A_PROCEDURE(A68_VOID ,A68t157,(struct A68t128 ),(struct A68t128 ,void *));
typedef struct A68t157  A68_157 ;    /* PROC(MODE128) VOID */

A_PROCEDURE(A68_VOID ,A68t158,(struct A68t128 ,struct A68t128 *),(struct A68t128 ,struct A68t128 *,void *));
typedef struct A68t158  A68_158 ;    /* PROC(MODE128) MODE128 */

A_PROCEDURE(A68_VOID ,A68t159,(struct A68t128 ,struct A68t128 ),(struct A68t128 ,struct A68t128 ,void *));
typedef struct A68t159  A68_159 ;    /* PROC(MODE128,MODE128) VOID */

A_PROCEDURE(A68_BOOL ,A68t160,(struct A68t128 ),(struct A68t128 ,void *));
typedef struct A68t160  A68_160 ;    /* PROC(MODE128) BOOL */

A_PROCEDURE(A68_VOID ,A68t161,(A68_INT ,struct A68t122 *),(A68_INT ,struct A68t122 *,void *));
typedef struct A68t161  A68_161 ;    /* PROC(INT) MODE122 */

A_PROCEDURE(A68_VOID ,A68t162,(A68_INT ,struct A68t127 *),(A68_INT ,struct A68t127 *,void *));
typedef struct A68t162  A68_162 ;    /* PROC(INT) MODE127 */

A_PROCEDURE(A68_VOID ,A68t163,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t163  A68_163 ;    /* PROC(INT) REF MODE26 */
struct A68t165 ;

A_PROCEDURE(A68_VOID ,A68t164,(struct A68t165 ),(struct A68t165 ,void *));
typedef struct A68t164  A68_164 ;    /* PROC(MODE165) VOID */

A_PROCEDURE(A68_BOOL ,A68t165,(A68_VC ),(A68_VC ,void *));
typedef struct A68t165  A68_165 ;    /* PROC(REF MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t166,(struct A68t122 ,struct A68t118 *),(struct A68t122 ,struct A68t118 *,void *));
typedef struct A68t166  A68_166 ;    /* PROC(MODE122) MODE118 */

A_PROCEDURE(A68_VOID ,A68t167,(A68_INT ,struct A68t118 *),(A68_INT ,struct A68t118 *,void *));
typedef struct A68t167  A68_167 ;    /* PROC(INT) MODE118 */
struct A68t168{
A68_VC  Context;
A68_VC  Import;
};
typedef struct A68t168  A68_168 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t170 ;

A_PROCEDURE(A68_VOID ,A68t169,(struct A68t170 ),(struct A68t170 ,void *));
typedef struct A68t169  A68_169 ;    /* PROC(MODE170) VOID */
struct A68t170 { A68_INT mode; union {
A68_VC  mode1;
struct A68t32  mode2;
struct A68t54  mode3;
struct A68t53  mode4;
} data; };
typedef struct A68t170  A68_170 ;    /* UNION(REF MODE26,REF MODE32,REF MODE54,REF MODE53)  */

A_PROCEDURE(A68_BITS ,A68t171,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t171  A68_171 ;    /* PROC(BITS,BITS) BITS */
struct A68t173 ;

A_PROCEDURE(A68_VOID ,A68t172,(struct A68t173 ,A68_INT ),(struct A68t173 ,A68_INT ,void *));
typedef struct A68t172  A68_172 ;    /* PROC(MODE173,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t173,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t173  A68_173 ;    /* PROC(CHAR) VOID */
struct A68t175 ;

A_PROCEDURE(A68_INT ,A68t174,(struct A68t175 ),(struct A68t175 ,void *));
typedef struct A68t174  A68_174 ;    /* PROC(MODE175) INT */

A_PROCEDURE(A68_CHAR ,A68t175,(void),(void *));
typedef struct A68t175  A68_175 ;    /* PROC CHAR */

A_PROCEDURE(A68_INT ,A68t176,(A68_VC ,A68_BOOL *),(A68_VC ,A68_BOOL *,void *));
typedef struct A68t176  A68_176 ;    /* PROC(MODE26,REF BOOL) INT */

A_PROCEDURE(A68_INT ,A68t177,(void),(void *));
typedef struct A68t177  A68_177 ;    /* PROC INT */

A_PROCEDURE(A68_VOID ,A68t178,(A68_VC *),(A68_VC *,void *));
typedef struct A68t178  A68_178 ;    /* PROC REF MODE26 */

A_PROCEDURE(A68_INT ,A68t179,(A68_INT ,A68_INT ,A68_BOOL *),(A68_INT ,A68_INT ,A68_BOOL *,void *));
typedef struct A68t179  A68_179 ;    /* PROC(INT,INT,REF BOOL) INT */
struct A68t181 ;

A_PROCEDURE(A68_BOOL ,A68t180,(A68_VC ,A68_INT *,struct A68t181 ),(A68_VC ,A68_INT *,struct A68t181 ,void *));
typedef struct A68t180  A68_180 ;    /* PROC(MODE26,REF INT,MODE181) BOOL */
struct A68t182 ;

A_PROCEDURE(A68_VOID ,A68t181,(struct A68t182 ,struct A68t46 ),(struct A68t182 ,struct A68t46 ,void *));
typedef struct A68t181  A68_181 ;    /* PROC(MODE182,MODE46) VOID */
struct A68t182{
A68_INT  Number;
A_PAD_INT(PAD_44)
struct A68t183 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_45)
};
typedef struct A68t182  A68_182 ;    /* STRUCT(INT,REF MODE183,BITS)  */
A_VECTOR(struct A68t185 ,A68t184);
typedef struct A68t184  A68_184 ;    /* VECTOR [] MODE185 */
struct A68t185{
struct A68t182  Msgno;
A68_VC  Text;
};
typedef struct A68t185  A68_185 ;    /* STRUCT(MODE182,REF MODE26)  */
struct A68t183{
A68_VC  Name;
struct A68t184  Messages;
};
typedef struct A68t183  A68_183 ;    /* STRUCT(REF MODE26,REF MODE184)  */

A_PROCEDURE(A68_VOID ,A68t186,(struct A68t154 ),(struct A68t154 ,void *));
typedef struct A68t186  A68_186 ;    /* PROC(MODE154) VOID */

A_PROCEDURE(A68_VOID ,A68t187,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t187  A68_187 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,54,A68t188);
typedef struct A68t188  A68_188 ;    /* STRUCT 54 CHAR */

A_PROCEDURE(A68_VOID ,A68t189,(struct A68t128 ,A68_VC ,struct A68t114 *),(struct A68t128 ,A68_VC ,struct A68t114 *,void *));
typedef struct A68t189  A68_189 ;    /* PROC(MODE128,REF MODE26) MODE114 */

A_PROCEDURE(A68_VOID ,A68t190,(struct A68t102 ,A68_BITS ,A68_CHAR ,struct A68t34 *),(struct A68t102 ,A68_BITS ,A68_CHAR ,struct A68t34 *,void *));
typedef struct A68t190  A68_190 ;    /* PROC(MODE102,BITS,CHAR,REF MODE34) VOID */
A_ISTRUCT(A68_CHAR ,43,A68t191);
typedef struct A68t191  A68_191 ;    /* STRUCT 43 CHAR */

A_PROCEDURE(A68_VOID ,A68t192,(struct A68t102 ,A68_BITS ,struct A68t34 *),(struct A68t102 ,A68_BITS ,struct A68t34 *,void *));
typedef struct A68t192  A68_192 ;    /* PROC(MODE102,BITS,REF MODE34) VOID */

A_PROCEDURE(A68_VOID ,A68t193,(struct A68t114 ,A68_BITS ,struct A68t34 *),(struct A68t114 ,A68_BITS ,struct A68t34 *,void *));
typedef struct A68t193  A68_193 ;    /* PROC(MODE114,BITS,REF MODE34) VOID */

A_PROCEDURE(A68_VOID ,A68t194,(struct A68t114 ,A68_BITS ),(struct A68t114 ,A68_BITS ,void *));
typedef struct A68t194  A68_194 ;    /* PROC(MODE114,BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t195,(struct A68t113 *,A68_BITS ),(struct A68t113 *,A68_BITS ,void *));
typedef struct A68t195  A68_195 ;    /* PROC(REF MODE113,BITS) VOID */
A_ISTRUCT(A68_CHAR ,2,A68t196);
typedef struct A68t196  A68_196 ;    /* STRUCT 2 CHAR */

A_PROCEDURE(A68_VOID ,A68t197,(struct A68t115 *,A68_BITS ),(struct A68t115 *,A68_BITS ,void *));
typedef struct A68t197  A68_197 ;    /* PROC(REF MODE115,BITS) VOID */
A_ISTRUCT(A68_CHAR ,38,A68t198);
typedef struct A68t198  A68_198 ;    /* STRUCT 38 CHAR */

A_PROCEDURE(A68_INT ,A68t199,(struct A68t102 ,A68_BITS ),(struct A68t102 ,A68_BITS ,void *));
typedef struct A68t199  A68_199 ;    /* PROC(MODE102,BITS) INT */

A_PROCEDURE(A68_INT ,A68t200,(struct A68t101 *,A68_BITS ),(struct A68t101 *,A68_BITS ,void *));
typedef struct A68t200  A68_200 ;    /* PROC(REF MODE101,BITS) INT */

A_PROCEDURE(A68_INT ,A68t201,(struct A68t105 *,A68_BITS ),(struct A68t105 *,A68_BITS ,void *));
typedef struct A68t201  A68_201 ;    /* PROC(REF MODE105,BITS) INT */

A_PROCEDURE(A68_INT ,A68t202,(struct A68t103 *,A68_BITS ),(struct A68t103 *,A68_BITS ,void *));
typedef struct A68t202  A68_202 ;    /* PROC(REF MODE103,BITS) INT */
A_ISTRUCT(A68_CHAR ,30,A68t203);
typedef struct A68t203  A68_203 ;    /* STRUCT 30 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from basics --- */
extern A68_VOID  NKDAOST_sysfault(A68_VC );
/* --- End of imports from basics --- */


/* --- Imports from kernel --- */
extern A68_101 * VSAASIM_nilsenum;
extern A68_105 * WSAASIM_nilsst;
extern A68_115 * DTAASIM_nilsvst;
extern A68_VOID  AFDBSIM_decode(A68_VC ,struct A68t102 ,A68_114 *);
extern A68_VOID  BKCBSIM_peeksignalvalue(struct A68t128 ,A68_VC );
/* --- End of imports from kernel --- */


/* --- Imports from simtime --- */
/* --- End of imports from simtime --- */


/* --- Imports from simbasics --- */
extern A68_INT  MQAASIM_max(A68_INT ,A68_INT );
extern A68_INT  TQAASIM_digits(A68_INT );
/* --- End of imports from simbasics --- */


/* --- Imports from putstrings --- */
extern A68_VOID  GABAOSL_putstr(struct A68t34 *,A68_VC );
extern A68_VOID  LCBAOSL_add_number(struct A68t34 *,A68_INT ,A68_INT );
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void JSCAOST(void);   /* basics */
extern void XWBBSIM(void);   /* kernel */
extern void TPAASIM(void);   /* simtime */
extern void FQAASIM(void);   /* simbasics */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_188   IFEBSIM = {"$Id: simpeek.a68,v 34.2 1995/03/29 13:05:01 ella Exp $"}; 
A_GISVEC(A68_VC ,JFEBSIM,IFEBSIM,54)
#define UFEBSIM_nopunctuation 0X0U
#define VFEBSIM_ampersands 0X1U
#define WFEBSIM_brackets 0X2U
A68_BITS  XFEBSIM_ampersandsandbrackets;
static A68_191   YGEBSIM = {"print funny signal value: SNULL encountered"}; 
A_GISVEC(A68_VC ,ZGEBSIM,YGEBSIM,43)
static A68_196   XHEBSIM = {" &"}; 
A_GISVEC(A68_VC ,YHEBSIM,XHEBSIM,2)
static A68_196   EJEBSIM = {"()"}; 
A_GISVEC(A68_VC ,FJEBSIM,EJEBSIM,2)
static A68_198   GJEBSIM = {"print signal value: SVNULL encountered"}; 
A_GISVEC(A68_VC ,HJEBSIM,GJEBSIM,38)
static A68_203   QKEBSIM = {"print width: SNULL encountered"}; 
A_GISVEC(A68_VC ,RKEBSIM,QKEBSIM,30)
typedef struct   /* env of non-global proc */
{
A68_34 * Ch;
A68_194 * MHEBSIM_body;
} RHEBSIM_printenumeratedsignalvalue;
typedef struct   /* env of non-global proc */
{
A68_34 * Ch;
A68_194 * MHEBSIM_body;
} EIEBSIM_printstructuredsignalvalue;
typedef struct   /* env of non-global proc */
{
A68_34 * Ch;
A68_195  PHEBSIM_printenumeratedsignalvalue;
A68_197  CIEBSIM_printstructuredsignalvalue;
A68_194 * MHEBSIM_body;
} QIEBSIM_anonymous;

A68_VOID  MFEBSIM_peekanddecode(A68_128  Mlocation, A68_VC  Workspace, A68_114  *ReturnedValue);

A_STATIC A68_VOID  CGEBSIM_printfunnysignalvalue(A68_102  Type, A68_BITS  Punc, A68_CHAR  Char, A68_34 * Ch);

A_STATIC A68_VOID  DHEBSIM_printunknownsignalvalue(A68_102  Type, A68_BITS  Punc, A68_34 * Ch);

A68_VOID  HHEBSIM_printunrecordedsignalvalue(A68_102  Type, A68_BITS  Punc, A68_34 * Ch);

A68_VOID  LHEBSIM_printsignalvalue(A68_114  Value, A68_BITS  Punc, A68_34 * Ch);

A_STATIC A68_VOID  QHEBSIM_printenumeratedsignalvalue(A68_113 * Value, A68_BITS  Punc, void *NonLocals);

A_STATIC A68_VOID  DIEBSIM_printstructuredsignalvalue(A68_115 * Value, A68_BITS  Punc, void *NonLocals);

A_STATIC A68_VOID  PIEBSIM_anonymous(A68_114  Value, A68_BITS  Punc, void *NonLocals);

A68_INT  KJEBSIM_printwidth(A68_102  Type, A68_BITS  Punc);

A_STATIC A68_INT  OJEBSIM_enumeratedprintwidth(A68_101 * Type, A68_BITS  Punc);

A_STATIC A68_INT  XJEBSIM_structuredprintwidth(A68_105 * Type, A68_BITS  Punc);

A_STATIC A68_INT  FKEBSIM_rowprintwidth(A68_103 * Type, A68_BITS  Punc);

A_STATIC A68_VOID  QHEBSIM_printenumeratedsignalvalue(A68_113 * Value, A68_BITS  Punc, void *NonLocals)
#define NL(x) (((RHEBSIM_printenumeratedsignalvalue *)NonLocals)->x)
{ 
A68_101 * SHEBSIM_p;
A68_INT  THEBSIM;  /* to part of loop */
A68_INT  UHEBSIM;  /* loop control */
A68_114  VHEBSIM;  /* united object - for case conformity */
A68_108  WHEBSIM_n;
A68_VC  ZHEBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(printenumeratedsignalvalue);
 /* line 163: */
 /* line 164: */
{ 
SHEBSIM_p = (*(&(Value->Type)));
 /* line 165: */
THEBSIM = ((*(&(Value->Tag)))-1);
for ( UHEBSIM = 1;
UHEBSIM <= THEBSIM;
UHEBSIM += 1 )
{ 
SHEBSIM_p = (*(&(SHEBSIM_p->Rest)));
}
 /* line 166: */
GABAOSL_putstr(NL(Ch), (*(&(SHEBSIM_p->Id))));
 /* line 167: */
 /* line 168: */
VHEBSIM = (*(&(Value->Assoc))) ;
switch ( VHEBSIM.mode )
{ 
case 9: /* STRUCT(INT)  */
WHEBSIM_n = (VHEBSIM.data.mode9);
 /* line 169: */
 /* line 170: */
/*SKIP*/;
break;
default: 
if ( A_LB_GE(Punc,VFEBSIM_ampersands) )
{ 
GABAOSL_putstr(NL(Ch), YHEBSIM);
} 
 /* line 171: */
GABAOSL_putstr(NL(Ch), A_HVEC(ZHEBSIM,' ',A68_CHAR ));
 /* line 172: */
 /* line 173: */
 /* line 174: */
A_CALLPROC((*NL(MHEBSIM_body)),((*(&(Value->Assoc))), Punc),((*(&(Value->Assoc))), Punc,((*NL(MHEBSIM_body))).nonlocals));
break;
} 
} 
A_PROC_EXIT(printenumeratedsignalvalue);
return;
} 
#undef NL

A_STATIC A68_VOID  DIEBSIM_printstructuredsignalvalue(A68_115 * Value, A68_BITS  Punc, void *NonLocals)
#define NL(x) (((EIEBSIM_printstructuredsignalvalue *)NonLocals)->x)
{ 
A68_BOOL  FIEBSIM_bk;
A68_VC  GIEBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_115 * HIEBSIM_p;
A68_BOOL  IIEBSIM;  /* clause result */
A68_VC  JIEBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  KIEBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  LIEBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(printstructuredsignalvalue);
 /* line 177: */
 /* line 178: */
{ 
FIEBSIM_bk = A_LB_GE(Punc,WFEBSIM_brackets);
 /* line 179: */
if ( FIEBSIM_bk )
{ 
GABAOSL_putstr(NL(Ch), A_HVEC(GIEBSIM,'(',A68_CHAR ));
} 
 /* line 180: */
HIEBSIM_p = Value;
 /* line 181: */
for ( ;; )
{ 
 /* line 182: */
A_CALLPROC((*NL(MHEBSIM_body)),((*(&(HIEBSIM_p->Head))), Punc),((*(&(HIEBSIM_p->Head))), Punc,((*NL(MHEBSIM_body))).nonlocals));
 /* line 183: */
 /* line 184: */
 /* line 185: */
IIEBSIM = ((HIEBSIM_p = (*(&(HIEBSIM_p->Tail))))!=DTAASIM_nilsvst);
if ( !IIEBSIM ) break;
if ( FIEBSIM_bk )
{ 
GABAOSL_putstr(NL(Ch), A_HVEC(JIEBSIM,',',A68_CHAR ));
} 
 /* line 186: */
 /* line 187: */
GABAOSL_putstr(NL(Ch), A_HVEC(KIEBSIM,' ',A68_CHAR ));
}
 /* line 188: */
if ( FIEBSIM_bk )
{ 
 /* line 189: */
GABAOSL_putstr(NL(Ch), A_HVEC(LIEBSIM,')',A68_CHAR ));
} 
} 
A_PROC_EXIT(printstructuredsignalvalue);
return;
} 
#undef NL

A_STATIC A68_VOID  PIEBSIM_anonymous(A68_114  Value, A68_BITS  Punc, void *NonLocals)
#define NL(x) (((QIEBSIM_anonymous *)NonLocals)->x)
{ 
A68_114  RIEBSIM;  /* united object - for case conformity */
A68_109 * SIEBSIM_q;
A68_110 * TIEBSIM_i;
A68_VC  UIEBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_111 * VIEBSIM_c;
A68_VC  WIEBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  XIEBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_112 * YIEBSIM_s;
A68_VC  ZIEBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  AJEBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_113 * BJEBSIM_e;
A68_115 * CJEBSIM_s;
A68_116 * DJEBSIM_f;
 /* line 194: */
 /* line 195: */
RIEBSIM = Value ;
switch ( RIEBSIM.mode )
{ 
case 1: /* REF STRUCT(MODE102)  */
SIEBSIM_q = (RIEBSIM.data.mode1);
 /* line 196: */
DHEBSIM_printunknownsignalvalue((*(&(SIEBSIM_q->Type))), Punc, NL(Ch));
break;
case 2: /* REF STRUCT(REF MODE98,INT)  */
TIEBSIM_i = (RIEBSIM.data.mode2);
 /* line 197: */
{ 
GABAOSL_putstr(NL(Ch), (*(&((*(&(TIEBSIM_i->Type)))->Id))));
 /* line 198: */
GABAOSL_putstr(NL(Ch), A_HVEC(UIEBSIM,'/',A68_CHAR ));
 /* line 199: */
 /* line 200: */
 /* line 201: */
LCBAOSL_add_number(NL(Ch), (*(&(TIEBSIM_i->Value))), 0);
} 
break;
case 3: /* REF STRUCT(REF MODE99,CHAR)  */
VIEBSIM_c = (RIEBSIM.data.mode3);
 /* line 202: */
{ 
GABAOSL_putstr(NL(Ch), (*(&((*(&(VIEBSIM_c->Type)))->Id))));
 /* line 203: */
GABAOSL_putstr(NL(Ch), A_HVEC(WIEBSIM,'\'',A68_CHAR ));
 /* line 204: */
 /* line 205: */
 /* line 206: */
GABAOSL_putstr(NL(Ch), A_HVEC(XIEBSIM,(*(&(VIEBSIM_c->Value))),A68_CHAR ));
} 
break;
case 4: /* REF STRUCT(REF MODE100,REF MODE26)  */
YIEBSIM_s = (RIEBSIM.data.mode4);
 /* line 207: */
{ 
GABAOSL_putstr(NL(Ch), (*(&((&((*(&(YIEBSIM_s->Type)))->T))->Id))));
 /* line 208: */
GABAOSL_putstr(NL(Ch), A_HVEC(ZIEBSIM,'\"',A68_CHAR ));
 /* line 209: */
GABAOSL_putstr(NL(Ch), (*(&(YIEBSIM_s->Value))));
 /* line 210: */
 /* line 211: */
 /* line 212: */
GABAOSL_putstr(NL(Ch), A_HVEC(AJEBSIM,'\"',A68_CHAR ));
} 
break;
case 5: /* REF STRUCT(REF MODE101,INT,MODE114)  */
BJEBSIM_e = (RIEBSIM.data.mode5);
 /* line 213: */
A_CALLPROC(NL(PHEBSIM_printenumeratedsignalvalue),(BJEBSIM_e, Punc),(BJEBSIM_e, Punc,(NL(PHEBSIM_printenumeratedsignalvalue)).nonlocals));
break;
case 6: /* REF STRUCT(MODE114,REF MODE115)  */
CJEBSIM_s = (RIEBSIM.data.mode6);
 /* line 214: */
A_CALLPROC(NL(CIEBSIM_printstructuredsignalvalue),(CJEBSIM_s, Punc),(CJEBSIM_s, Punc,(NL(CIEBSIM_printstructuredsignalvalue)).nonlocals));
break;
case 7: /* REF STRUCT(MODE114,MODE114)  */
DJEBSIM_f = (RIEBSIM.data.mode7);
 /* line 215: */
A_CALLPROC((*NL(MHEBSIM_body)),((*(&(DJEBSIM_f->To))), Punc),((*(&(DJEBSIM_f->To))), Punc,((*NL(MHEBSIM_body))).nonlocals));
break;
case 8: /* STRUCT(INT)  */
 /* line 216: */
GABAOSL_putstr(NL(Ch), FJEBSIM);
break;
default: 
 /* line 217: */
NKDAOST_sysfault(HJEBSIM);
break;
} 
return;
} 
#undef NL

A_STATIC A68_INT  OJEBSIM_enumeratedprintwidth(A68_101 * Type, A68_BITS  Punc)
{ 
A68_INT  PJEBSIM_ans;
A68_101 * QJEBSIM_p;
A68_INT  RJEBSIM_altwidth;
A68_102  SJEBSIM;  /* united object - for case conformity */
A68_97  TJEBSIM_n;
A68_INT  UJEBSIM;  /* clause result */
A_PROC_ENTRY(enumeratedprintwidth);
 /* line 230: */
 /* line 231: */
{ 
PJEBSIM_ans = 0;
 /* line 232: */
QJEBSIM_p = Type;
 /* line 233: */
for ( ;; )
{ 
 /* line 234: */
if ( !((QJEBSIM_p!=VSAASIM_nilsenum)) ) break;
RJEBSIM_altwidth = (*(&(QJEBSIM_p->Id))).upb;
 /* line 235: */
 /* line 236: */
SJEBSIM = (*(&(QJEBSIM_p->T))) ;
switch ( SJEBSIM.mode )
{ 
case 9: /* STRUCT(INT)  */
TJEBSIM_n = (SJEBSIM.data.mode9);
 /* line 237: */
 /* line 238: */
/*SKIP*/;
break;
default: 
RJEBSIM_altwidth+=(KJEBSIM_printwidth((*(&(QJEBSIM_p->T))), Punc)+1);
 /* line 239: */
if ( A_LB_GE(Punc,VFEBSIM_ampersands) )
{ 
 /* line 240: */
RJEBSIM_altwidth+=2;
} 
break;
} 
 /* line 241: */
PJEBSIM_ans = MQAASIM_max(PJEBSIM_ans, RJEBSIM_altwidth);
 /* line 242: */
 /* line 243: */
QJEBSIM_p = (*(&(QJEBSIM_p->Rest)));
}
 /* line 244: */
 /* line 245: */
UJEBSIM = PJEBSIM_ans;
} 
A_PROC_EXIT(enumeratedprintwidth);
return( UJEBSIM );
} 
#undef NL

A_STATIC A68_INT  XJEBSIM_structuredprintwidth(A68_105 * Type, A68_BITS  Punc)
{ 
A68_BOOL  YJEBSIM_bk;
A68_INT  ZJEBSIM_ans;
A68_105 * AKEBSIM_p;
A68_BOOL  BKEBSIM;  /* clause result */
A68_INT  CKEBSIM;  /* clause result */
A_PROC_ENTRY(structuredprintwidth);
 /* line 248: */
 /* line 249: */
{ 
YJEBSIM_bk = A_LB_GE(Punc,WFEBSIM_brackets);
 /* line 250: */
ZJEBSIM_ans = 0;
 /* line 251: */
AKEBSIM_p = Type;
 /* line 252: */
for ( ;; )
{ 
 /* line 253: */
ZJEBSIM_ans+=KJEBSIM_printwidth((*(&(AKEBSIM_p->T))), Punc);
 /* line 254: */
 /* line 255: */
 /* line 256: */
BKEBSIM = ((AKEBSIM_p = (*(&(AKEBSIM_p->Rest))))!=WSAASIM_nilsst);
if ( !BKEBSIM ) break;
if ( YJEBSIM_bk )
{ 
ZJEBSIM_ans+=2;
} 
else
{ 
 /* line 257: */
ZJEBSIM_ans+=1;
} 
}
 /* line 258: */
if ( YJEBSIM_bk )
{ 
ZJEBSIM_ans+=2;
} 
 /* line 259: */
 /* line 260: */
CKEBSIM = ZJEBSIM_ans;
} 
A_PROC_EXIT(structuredprintwidth);
return( CKEBSIM );
} 
#undef NL

A_STATIC A68_INT  FKEBSIM_rowprintwidth(A68_103 * Type, A68_BITS  Punc)
{ 
A68_INT  GKEBSIM;  /* clause result */
A_PROC_ENTRY(rowprintwidth);
 /* line 263: */
 /* line 264: */
if ( A_LB_GE(Punc,WFEBSIM_brackets) )
{ 
 /* line 265: */
 /* line 266: */
GKEBSIM = ((*(&(Type->No)))*(KJEBSIM_printwidth((*(&(Type->Type))), Punc)+2));
} 
else
{ 
 /* line 267: */
GKEBSIM = (((*(&(Type->No)))*(KJEBSIM_printwidth((*(&(Type->Type))), Punc)+1))-1);
} 
A_PROC_EXIT(rowprintwidth);
return( GKEBSIM );
} 
#undef NL

A68_VOID  MFEBSIM_peekanddecode(A68_128  Mlocation, A68_VC  Workspace, A68_114  *ReturnedValue)
{ 
A68_126  NFEBSIM;  /* united object - for case conformity */
A68_125  OFEBSIM_l;
A68_125  PFEBSIM;  /* clause result */
A68_125  QFEBSIM_location;
A68_102  RFEBSIM_type;
A68_114  SFEBSIM;  /* clause result */
A68_114  TFEBSIM;  /* avoid structure result */
A_PROC_ENTRY(peekanddecode);
 /* line 67: */
 /* line 68: */
{ 
BKCBSIM_peeksignalvalue(Mlocation, Workspace);
 /* line 69: */
NFEBSIM = Mlocation.Node ;
switch ( NFEBSIM.mode )
{ 
case 2: /* STRUCT(REF MODE118,INT)  */
OFEBSIM_l = (NFEBSIM.data.mode2);
PFEBSIM = OFEBSIM_l;
break;
default: 
A_IMP_SKIP ;
break;
} 
QFEBSIM_location = PFEBSIM;
 /* line 70: */
RFEBSIM_type = (*(&(QFEBSIM_location.Wire->Type)));
 /* line 71: */
 /* line 72: */
AFDBSIM_decode( Workspace, RFEBSIM_type, &TFEBSIM );
SFEBSIM = TFEBSIM;
} 
A_PROC_EXIT(peekanddecode);
*ReturnedValue = (SFEBSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  CGEBSIM_printfunnysignalvalue(A68_102  Type, A68_BITS  Punc, A68_CHAR  Char, A68_34 * Ch)
{ 
A68_BOOL  DGEBSIM_bk;
A68_102  EGEBSIM;  /* united object - for case conformity */
A68_106  FGEBSIM_i;
A68_VC  GGEBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_103 * HGEBSIM_r;
A68_VC  IGEBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  JGEBSIM_n;
A68_BOOL  KGEBSIM;  /* clause result */
A68_VC  LGEBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  MGEBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  NGEBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_100 * OGEBSIM_s;
A68_VC  PGEBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_105 * QGEBSIM_s;
A68_VC  RGEBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_105 * SGEBSIM_p;
A68_BOOL  TGEBSIM;  /* clause result */
A68_VC  UGEBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  VGEBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  WGEBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_104 * XGEBSIM_f;
A_PROC_ENTRY(printfunnysignalvalue);
 /* line 98: */
 /* line 99: */
{ 
DGEBSIM_bk = A_LB_GE(Punc,WFEBSIM_brackets);
 /* line 100: */
 /* line 101: */
EGEBSIM = Type ;
switch ( EGEBSIM.mode )
{ 
case 1: /* REF STRUCT(REF MODE26,MODE102,REF MODE101)  */
case 2: /* REF STRUCT(REF MODE26,INT,INT)  */
case 3: /* REF STRUCT(REF MODE26,REF MODE26)  */
A_UNCPY(FGEBSIM_i,EGEBSIM);
 /* line 102: */
GABAOSL_putstr(Ch, A_HVEC(GGEBSIM,Char,A68_CHAR ));
break;
case 4: /* REF STRUCT(INT,MODE102)  */
HGEBSIM_r = (EGEBSIM.data.mode4);
 /* line 103: */
 /* line 104: */
{ 
if ( DGEBSIM_bk )
{ 
GABAOSL_putstr(Ch, A_HVEC(IGEBSIM,'(',A68_CHAR ));
} 
 /* line 105: */
JGEBSIM_n = (*(&(HGEBSIM_r->No)));
 /* line 106: */
for ( ;; )
{ 
 /* line 107: */
CGEBSIM_printfunnysignalvalue((*(&(HGEBSIM_r->Type))), Punc, Char, Ch);
 /* line 108: */
 /* line 109: */
 /* line 110: */
KGEBSIM = ((JGEBSIM_n-=1)>0);
if ( !KGEBSIM ) break;
if ( DGEBSIM_bk )
{ 
GABAOSL_putstr(Ch, A_HVEC(LGEBSIM,',',A68_CHAR ));
} 
 /* line 111: */
 /* line 112: */
GABAOSL_putstr(Ch, A_HVEC(MGEBSIM,' ',A68_CHAR ));
}
 /* line 113: */
if ( DGEBSIM_bk )
{ 
 /* line 114: */
 /* line 115: */
GABAOSL_putstr(Ch, A_HVEC(NGEBSIM,')',A68_CHAR ));
} 
} 
break;
case 5: /* REF STRUCT(INT,MODE99)  */
OGEBSIM_s = (EGEBSIM.data.mode5);
 /* line 116: */
GABAOSL_putstr(Ch, A_HVEC(PGEBSIM,Char,A68_CHAR ));
break;
case 7: /* REF STRUCT(MODE102,REF MODE105)  */
QGEBSIM_s = (EGEBSIM.data.mode7);
 /* line 117: */
 /* line 118: */
{ 
if ( DGEBSIM_bk )
{ 
GABAOSL_putstr(Ch, A_HVEC(RGEBSIM,'(',A68_CHAR ));
} 
 /* line 119: */
SGEBSIM_p = QGEBSIM_s;
 /* line 120: */
for ( ;; )
{ 
 /* line 121: */
CGEBSIM_printfunnysignalvalue((*(&(SGEBSIM_p->T))), Punc, Char, Ch);
 /* line 122: */
 /* line 123: */
 /* line 124: */
TGEBSIM = ((SGEBSIM_p = (*(&(SGEBSIM_p->Rest))))!=WSAASIM_nilsst);
if ( !TGEBSIM ) break;
if ( DGEBSIM_bk )
{ 
GABAOSL_putstr(Ch, A_HVEC(UGEBSIM,',',A68_CHAR ));
} 
 /* line 125: */
 /* line 126: */
GABAOSL_putstr(Ch, A_HVEC(VGEBSIM,' ',A68_CHAR ));
}
 /* line 127: */
if ( DGEBSIM_bk )
{ 
 /* line 128: */
 /* line 129: */
GABAOSL_putstr(Ch, A_HVEC(WGEBSIM,')',A68_CHAR ));
} 
} 
break;
case 6: /* REF STRUCT(MODE102,MODE102)  */
XGEBSIM_f = (EGEBSIM.data.mode6);
 /* line 130: */
CGEBSIM_printfunnysignalvalue((*(&(XGEBSIM_f->To))), Punc, Char, Ch);
break;
default: 
 /* line 131: */
 /* line 132: */
NKDAOST_sysfault(ZGEBSIM);
break;
} 
} 
A_PROC_EXIT(printfunnysignalvalue);
return;
} 
#undef NL

A_STATIC A68_VOID  DHEBSIM_printunknownsignalvalue(A68_102  Type, A68_BITS  Punc, A68_34 * Ch)
{ 
A_PROC_ENTRY(printunknownsignalvalue);
 /* line 135: */
CGEBSIM_printfunnysignalvalue(Type, Punc, '?', Ch);
A_PROC_EXIT(printunknownsignalvalue);
return;
} 
#undef NL

A68_VOID  HHEBSIM_printunrecordedsignalvalue(A68_102  Type, A68_BITS  Punc, A68_34 * Ch)
{ 
A_PROC_ENTRY(printunrecordedsignalvalue);
 /* line 142: */
CGEBSIM_printfunnysignalvalue(Type, Punc, '-', Ch);
A_PROC_EXIT(printunrecordedsignalvalue);
return;
} 
#undef NL

A68_VOID  LHEBSIM_printsignalvalue(A68_114  Value, A68_BITS  Punc, A68_34 * Ch)
{ 
A68_194  MHEBSIM_body;
A68_195  PHEBSIM_printenumeratedsignalvalue;   /* proc value of non-global proc */
A68_197  CIEBSIM_printstructuredsignalvalue;   /* proc value of non-global proc */
A68_194  OIEBSIM_anonymous;   /* proc value of non-global proc */
A_PROC_ENTRY(printsignalvalue);
 /* line 159: */
 /* line 160: */
{ 
 /* line 162: */
A_CLOSURE( PHEBSIM_printenumeratedsignalvalue, QHEBSIM_printenumeratedsignalvalue, RHEBSIM_printenumeratedsignalvalue );
(( RHEBSIM_printenumeratedsignalvalue * ) ( PHEBSIM_printenumeratedsignalvalue.nonlocals )) -> Ch = Ch;
(( RHEBSIM_printenumeratedsignalvalue * ) ( PHEBSIM_printenumeratedsignalvalue.nonlocals )) -> MHEBSIM_body = (&MHEBSIM_body);
 /* line 176: */
A_CLOSURE( CIEBSIM_printstructuredsignalvalue, DIEBSIM_printstructuredsignalvalue, EIEBSIM_printstructuredsignalvalue );
(( EIEBSIM_printstructuredsignalvalue * ) ( CIEBSIM_printstructuredsignalvalue.nonlocals )) -> Ch = Ch;
(( EIEBSIM_printstructuredsignalvalue * ) ( CIEBSIM_printstructuredsignalvalue.nonlocals )) -> MHEBSIM_body = (&MHEBSIM_body);
 /* line 193: */
A_CLOSURE( OIEBSIM_anonymous, PIEBSIM_anonymous, QIEBSIM_anonymous );
(( QIEBSIM_anonymous * ) ( OIEBSIM_anonymous.nonlocals )) -> Ch = Ch;
(( QIEBSIM_anonymous * ) ( OIEBSIM_anonymous.nonlocals )) -> PHEBSIM_printenumeratedsignalvalue = PHEBSIM_printenumeratedsignalvalue;
(( QIEBSIM_anonymous * ) ( OIEBSIM_anonymous.nonlocals )) -> CIEBSIM_printstructuredsignalvalue = CIEBSIM_printstructuredsignalvalue;
(( QIEBSIM_anonymous * ) ( OIEBSIM_anonymous.nonlocals )) -> MHEBSIM_body = (&MHEBSIM_body);
MHEBSIM_body = OIEBSIM_anonymous;
 /* line 219: */
 /* line 220: */
A_CALLPROC(MHEBSIM_body,(Value, Punc),(Value, Punc,(MHEBSIM_body).nonlocals));
} 
A_PROC_EXIT(printsignalvalue);
return;
} 
#undef NL

A68_INT  KJEBSIM_printwidth(A68_102  Type, A68_BITS  Punc)
{ 
A68_102  HKEBSIM;  /* united object - for case conformity */
A68_98 * IKEBSIM_i;
A68_INT  JKEBSIM;  /* clause result */
A68_99 * KKEBSIM_c;
A68_100 * LKEBSIM_s;
A68_101 * MKEBSIM_e;
A68_104 * NKEBSIM_f;
A68_105 * OKEBSIM_s;
A68_103 * PKEBSIM_r;
A_PROC_ENTRY(printwidth);
 /* line 227: */
 /* line 229: */
{ 
 /* line 247: */
 /* line 262: */
 /* line 269: */
 /* line 270: */
HKEBSIM = Type ;
switch ( HKEBSIM.mode )
{ 
case 2: /* REF STRUCT(REF MODE26,INT,INT)  */
IKEBSIM_i = (HKEBSIM.data.mode2);
 /* line 271: */
JKEBSIM = (((*(&(IKEBSIM_i->Id))).upb+1)+MQAASIM_max(TQAASIM_digits((*(&(IKEBSIM_i->Lwb)))), TQAASIM_digits((*(&(IKEBSIM_i->Upb))))));
break;
case 3: /* REF STRUCT(REF MODE26,REF MODE26)  */
KKEBSIM_c = (HKEBSIM.data.mode3);
 /* line 272: */
JKEBSIM = ((*(&(KKEBSIM_c->Id))).upb+2);
break;
case 5: /* REF STRUCT(INT,MODE99)  */
LKEBSIM_s = (HKEBSIM.data.mode5);
 /* line 273: */
JKEBSIM = (((*(&((&(LKEBSIM_s->T))->Id))).upb+(*(&(LKEBSIM_s->No))))+2);
break;
case 1: /* REF STRUCT(REF MODE26,MODE102,REF MODE101)  */
MKEBSIM_e = (HKEBSIM.data.mode1);
 /* line 274: */
JKEBSIM = OJEBSIM_enumeratedprintwidth(MKEBSIM_e, Punc);
break;
case 6: /* REF STRUCT(MODE102,MODE102)  */
NKEBSIM_f = (HKEBSIM.data.mode6);
 /* line 275: */
JKEBSIM = KJEBSIM_printwidth((*(&(NKEBSIM_f->To))), Punc);
break;
case 7: /* REF STRUCT(MODE102,REF MODE105)  */
OKEBSIM_s = (HKEBSIM.data.mode7);
 /* line 276: */
JKEBSIM = XJEBSIM_structuredprintwidth(OKEBSIM_s, Punc);
break;
case 4: /* REF STRUCT(INT,MODE102)  */
PKEBSIM_r = (HKEBSIM.data.mode4);
 /* line 277: */
JKEBSIM = FKEBSIM_rowprintwidth(PKEBSIM_r, Punc);
break;
case 8: /* STRUCT(INT)  */
 /* line 278: */
JKEBSIM = 2;
break;
default: 
NKDAOST_sysfault(RKEBSIM);
 /* line 279: */
 /* line 280: */
JKEBSIM = 0;
break;
} 
} 
A_PROC_EXIT(printwidth);
return( JKEBSIM );
} 
#undef NL
 /* line 1: */
 /* line 4: */
void FFEBSIM(void)   /* initialise DECS simpeek */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259R","./a68files/simpeek.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","/u/model/ella/ostools/assoc/mfiles/basics.m","./mfiles/kernel.m","./mfiles/simtime.m","./mfiles/simbasics.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
JSCAOST();   /* USE basics */
XWBBSIM();   /* USE kernel */
TPAASIM();   /* USE simtime */
FQAASIM();   /* USE simbasics */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/sim/assoc/./a68files/simpeek.a68";
A_config.translation_time = "Tue Apr  4 11:14:22 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "EFEBSIM (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 11:14:22 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS simpeek);
UEAALIB_a68config(LGAALIB_configinfo, JFEBSIM);
 /* line 66: */
 /* line 83: */
 /* line 84: */
 /* line 85: */
 /* line 86: */
 /* line 87: */
XFEBSIM_ampersandsandbrackets = (A68_BITS )(VFEBSIM_ampersands|WFEBSIM_brackets);
 /* line 97: */
 /* line 134: */
 /* line 141: */
 /* line 158: */
 /* line 226: */
 /* line 282: */
 /* line 284: */
 /* line 290: */
/*SKIP*/;
A_PROC_EXIT(DECS simpeek);
} 
#undef NL
/* end of translation of ./a68files/simpeek.a68 */
