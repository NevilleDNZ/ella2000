
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
/* UNAME:RKEBSIM */
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
A68_INT  Svoid;
A_PAD_INT(PAD_20)
};
typedef struct A68t92  A68_92 ;    /* STRUCT(INT)  */
struct A68t93{
A68_INT  Snull;
A_PAD_INT(PAD_21)
};
typedef struct A68t93  A68_93 ;    /* STRUCT(INT)  */
struct A68t94{
A68_VC  Id;
A68_INT  Lwb;
A_PAD_INT(PAD_22)
A68_INT  Upb;
A_PAD_INT(PAD_23)
};
typedef struct A68t94  A68_94 ;    /* STRUCT(REF MODE26,INT,INT)  */
struct A68t95{
A68_VC  Id;
A68_VC  Char;
};
typedef struct A68t95  A68_95 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t96{
A68_INT  No;
A_PAD_INT(PAD_24)
struct A68t95  T;
};
typedef struct A68t96  A68_96 ;    /* STRUCT(INT,MODE95)  */
struct A68t98 { A68_INT mode; union {
struct A68t97 * mode1;
struct A68t94 * mode2;
struct A68t95 * mode3;
struct A68t99 * mode4;
struct A68t96 * mode5;
struct A68t100 * mode6;
struct A68t101 * mode7;
struct A68t92  mode8;
struct A68t93  mode9;
} data; };
typedef struct A68t98  A68_98 ;    /* UNION(REF MODE97,REF MODE94,REF MODE95,REF MODE99,REF MODE96,REF MODE100,REF MODE101,MODE92,MODE93)  */
struct A68t97{
A68_VC  Id;
struct A68t98  T;
struct A68t97 * Rest;
};
typedef struct A68t97  A68_97 ;    /* STRUCT(REF MODE26,MODE98,REF MODE97)  */
struct A68t99{
A68_INT  No;
A_PAD_INT(PAD_25)
struct A68t98  Type;
};
typedef struct A68t99  A68_99 ;    /* STRUCT(INT,MODE98)  */
struct A68t100{
struct A68t98  From;
struct A68t98  To;
};
typedef struct A68t100  A68_100 ;    /* STRUCT(MODE98,MODE98)  */
struct A68t101{
struct A68t98  T;
struct A68t101 * Rest;
};
typedef struct A68t101  A68_101 ;    /* STRUCT(MODE98,REF MODE101)  */
struct A68t102 { A68_INT mode; union {
struct A68t97 * mode1;
struct A68t94 * mode2;
struct A68t95 * mode3;
} data; };
typedef struct A68t102  A68_102 ;    /* UNION(REF MODE97,REF MODE94,REF MODE95)  */
struct A68t103{
A68_INT  Svvoid;
A_PAD_INT(PAD_26)
};
typedef struct A68t103  A68_103 ;    /* STRUCT(INT)  */
struct A68t104{
A68_INT  Svnull;
A_PAD_INT(PAD_27)
};
typedef struct A68t104  A68_104 ;    /* STRUCT(INT)  */
struct A68t105{
struct A68t98  Type;
};
typedef struct A68t105  A68_105 ;    /* STRUCT(MODE98)  */
struct A68t106{
struct A68t94 * Type;
A68_INT  Value;
A_PAD_INT(PAD_28)
};
typedef struct A68t106  A68_106 ;    /* STRUCT(REF MODE94,INT)  */
struct A68t107{
struct A68t95 * Type;
A68_CHAR  Value;
A_PAD_CHAR(PAD_29)
};
typedef struct A68t107  A68_107 ;    /* STRUCT(REF MODE95,CHAR)  */
struct A68t108{
struct A68t96 * Type;
A68_VC  Value;
};
typedef struct A68t108  A68_108 ;    /* STRUCT(REF MODE96,REF MODE26)  */
struct A68t110 { A68_INT mode; union {
struct A68t105 * mode1;
struct A68t106 * mode2;
struct A68t107 * mode3;
struct A68t108 * mode4;
struct A68t109 * mode5;
struct A68t111 * mode6;
struct A68t112 * mode7;
struct A68t103  mode8;
struct A68t104  mode9;
} data; };
typedef struct A68t110  A68_110 ;    /* UNION(REF MODE105,REF MODE106,REF MODE107,REF MODE108,REF MODE109,REF MODE111,REF MODE112,MODE103,MODE104)  */
struct A68t109{
struct A68t97 * Type;
A68_INT  Tag;
A_PAD_INT(PAD_30)
struct A68t110  Assoc;
};
typedef struct A68t109  A68_109 ;    /* STRUCT(REF MODE97,INT,MODE110)  */
struct A68t111{
struct A68t110  Head;
struct A68t111 * Tail;
};
typedef struct A68t111  A68_111 ;    /* STRUCT(MODE110,REF MODE111)  */
struct A68t112{
struct A68t110  From;
struct A68t110  To;
};
typedef struct A68t112  A68_112 ;    /* STRUCT(MODE110,MODE110)  */
struct A68t113{
A68_INT  Instoffset;
A_PAD_INT(PAD_31)
A68_INT  Offset;
A_PAD_INT(PAD_32)
A68_INT  Size;
A_PAD_INT(PAD_33)
};
typedef struct A68t113  A68_113 ;    /* STRUCT(INT,INT,INT)  */
A_VECTOR(struct A68t113 ,A68t115);
typedef struct A68t115  A68_115 ;    /* VECTOR [] MODE113 */
struct A68t114{
struct A68t98  Type;
struct A68t115  Blocks;
};
typedef struct A68t114  A68_114 ;    /* STRUCT(MODE98,REF MODE115)  */
struct A68t116{
struct A68t114  Firstcell;
A68_INT  Lwb;
A_PAD_INT(PAD_34)
A68_INT  Ramsize;
A_PAD_INT(PAD_35)
A68_INT  Step;
A_PAD_INT(PAD_36)
};
typedef struct A68t116  A68_116 ;    /* STRUCT(MODE114,INT,INT,INT)  */
struct A68t117{
A68_VC  Uname;
A68_VC  Lname;
A68_INT  Node;
A_PAD_INT(PAD_37)
};
typedef struct A68t117  A68_117 ;    /* STRUCT(REF MODE26,REF MODE26,INT)  */
A_VECTOR(struct A68t117 ,A68t119);
typedef struct A68t119  A68_119 ;    /* VECTOR [] MODE117 */
struct A68t118{
struct A68t116 * Ram;
struct A68t114  Outputs;
A68_INT  Noinputs;
A_PAD_INT(PAD_38)
struct A68t119  Body;
};
typedef struct A68t118  A68_118 ;    /* STRUCT(REF MODE116,MODE114,INT,REF MODE119)  */
struct A68t120{
A68_INT  Fn;
A_PAD_INT(PAD_39)
A68_INT  Instance;
A_PAD_INT(PAD_40)
};
typedef struct A68t120  A68_120 ;    /* STRUCT(INT,INT)  */
struct A68t121{
struct A68t114 * Wire;
A68_INT  Instance;
A_PAD_INT(PAD_41)
};
typedef struct A68t121  A68_121 ;    /* STRUCT(REF MODE114,INT)  */
struct A68t122 { A68_INT mode; union {
struct A68t120  mode1;
struct A68t121  mode2;
} data; };
typedef struct A68t122  A68_122 ;    /* UNION(MODE120,MODE121)  */
struct A68t123 { A68_INT mode; union {
struct A68t120  mode1;
struct A68t114  mode2;
} data; };
typedef struct A68t123  A68_123 ;    /* UNION(MODE120,MODE114)  */
struct A68t124{
struct A68t122  Node;
A68_INT  Circuit;
A_PAD_INT(PAD_42)
A68_INT  Base;
A_PAD_INT(PAD_43)
};
typedef struct A68t124  A68_124 ;    /* STRUCT(MODE122,INT,INT)  */

A_PROCEDURE(A68_BOOL ,A68t125,(struct A68t114 ,struct A68t114 ),(struct A68t114 ,struct A68t114 ,void *));
typedef struct A68t125  A68_125 ;    /* PROC(MODE114,MODE114) BOOL */

A_PROCEDURE(A68_BOOL ,A68t126,(struct A68t120 ,struct A68t120 ),(struct A68t120 ,struct A68t120 ,void *));
typedef struct A68t126  A68_126 ;    /* PROC(MODE120,MODE120) BOOL */

A_PROCEDURE(A68_BOOL ,A68t127,(struct A68t121 ,struct A68t121 ),(struct A68t121 ,struct A68t121 ,void *));
typedef struct A68t127  A68_127 ;    /* PROC(MODE121,MODE121) BOOL */

A_PROCEDURE(A68_BOOL ,A68t128,(struct A68t122 ,struct A68t122 ),(struct A68t122 ,struct A68t122 ,void *));
typedef struct A68t128  A68_128 ;    /* PROC(MODE122,MODE122) BOOL */

A_PROCEDURE(A68_BOOL ,A68t129,(struct A68t124 ,struct A68t124 ),(struct A68t124 ,struct A68t124 ,void *));
typedef struct A68t129  A68_129 ;    /* PROC(MODE124,MODE124) BOOL */

A_PROCEDURE(A68_BOOL ,A68t130,(struct A68t98 ,struct A68t98 ),(struct A68t98 ,struct A68t98 ,void *));
typedef struct A68t130  A68_130 ;    /* PROC(MODE98,MODE98) BOOL */

A_PROCEDURE(A68_BOOL ,A68t131,(struct A68t110 ,struct A68t110 ),(struct A68t110 ,struct A68t110 ,void *));
typedef struct A68t131  A68_131 ;    /* PROC(MODE110,MODE110) BOOL */

A_PROCEDURE(A68_VOID ,A68t132,(struct A68t115 ,struct A68t115 ,struct A68t115 *),(struct A68t115 ,struct A68t115 ,struct A68t115 *,void *));
typedef struct A68t132  A68_132 ;    /* PROC(REF MODE115,REF MODE115) REF MODE115 */

A_PROCEDURE(A68_INT ,A68t133,(struct A68t98 ),(struct A68t98 ,void *));
typedef struct A68t133  A68_133 ;    /* PROC(MODE98) INT */

A_PROCEDURE(struct A68t101 *,A68t134,(struct A68t98 ,A68_INT ,A68_INT ),(struct A68t98 ,A68_INT ,A68_INT ,void *));
typedef struct A68t134  A68_134 ;    /* PROC(MODE98,INT,INT) REF MODE101 */

A_PROCEDURE(A68_VOID ,A68t135,(struct A68t114 ,A68_INT ,A68_INT ,struct A68t114 *),(struct A68t114 ,A68_INT ,A68_INT ,struct A68t114 *,void *));
typedef struct A68t135  A68_135 ;    /* PROC(MODE114,INT,INT) MODE114 */

A_PROCEDURE(A68_VOID ,A68t136,(struct A68t116 *,A68_INT ,A68_INT ,struct A68t114 *),(struct A68t116 *,A68_INT ,A68_INT ,struct A68t114 *,void *));
typedef struct A68t136  A68_136 ;    /* PROC(REF MODE116,INT,INT) MODE114 */

A_PROCEDURE(A68_VC *,A68t137,(struct A68t110 ,struct A68t98 ),(struct A68t110 ,struct A68t98 ,void *));
typedef struct A68t137  A68_137 ;    /* PROC(MODE110,MODE98) REF REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t138,(A68_VC ,struct A68t98 ,struct A68t110 *),(A68_VC ,struct A68t98 ,struct A68t110 *,void *));
typedef struct A68t138  A68_138 ;    /* PROC(REF MODE26,MODE98) MODE110 */

A_PROCEDURE(A68_INT ,A68t139,(struct A68t124 ),(struct A68t124 ,void *));
typedef struct A68t139  A68_139 ;    /* PROC(MODE124) INT */

A_PROCEDURE(A68_VOID ,A68t140,(struct A68t124 ,A68_INT ),(struct A68t124 ,A68_INT ,void *));
typedef struct A68t140  A68_140 ;    /* PROC(MODE124,INT) VOID */

A_PROCEDURE(A68_INT ,A68t141,(A68_INT ),(A68_INT ,void *));
typedef struct A68t141  A68_141 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_VOID ,A68t142,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t142  A68_142 ;    /* PROC(INT,INT) VOID */
struct A68t144 ;

A_PROCEDURE(A68_VOID ,A68t143,(struct A68t144 *,A68_INT ,struct A68t43 ,struct A68t36 ,struct A68t122 *),(struct A68t144 *,A68_INT ,struct A68t43 ,struct A68t36 ,struct A68t122 *,void *));
typedef struct A68t143  A68_143 ;    /* PROC(REF MODE144,INT,MODE43,MODE36) MODE122 */
struct A68t144{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t144  A68_144 ;    /* STRUCT(REF MODE26,REF BITS)  */

A_PROCEDURE(A68_VOID ,A68t145,(A68_VC ,struct A68t36 ,struct A68t122 *),(A68_VC ,struct A68t36 ,struct A68t122 *,void *));
typedef struct A68t145  A68_145 ;    /* PROC(REF MODE26,MODE36) MODE122 */

A_PROCEDURE(A68_VOID ,A68t146,(A68_INT *,A68_BOOL *,struct A68t36 ),(A68_INT *,A68_BOOL *,struct A68t36 ,void *));
typedef struct A68t146  A68_146 ;    /* PROC(REF INT,REF BOOL,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t147,(struct A68t124 ,A68_VC ),(struct A68t124 ,A68_VC ,void *));
typedef struct A68t147  A68_147 ;    /* PROC(MODE124,REF MODE26) VOID */
struct A68t149 ;

A_PROCEDURE(A68_VOID ,A68t148,(A68_INT *,A68_VC *,struct A68t149 ,struct A68t149 ,struct A68t36 ),(A68_INT *,A68_VC *,struct A68t149 ,struct A68t149 ,struct A68t36 ,void *));
typedef struct A68t148  A68_148 ;    /* PROC(REF INT,REF REF MODE26,MODE149,MODE149,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t149,(A68_VC ,struct A68t36 ),(A68_VC ,struct A68t36 ,void *));
typedef struct A68t149  A68_149 ;    /* PROC(REF MODE26,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t150,(A68_INT ,A68_INT ,A68_VC ,struct A68t149 ,struct A68t149 ,struct A68t43 ,struct A68t36 ,struct A68t122 *),(A68_INT ,A68_INT ,A68_VC ,struct A68t149 ,struct A68t149 ,struct A68t43 ,struct A68t36 ,struct A68t122 *,void *));
typedef struct A68t150  A68_150 ;    /* PROC(INT,INT,REF MODE26,MODE149,MODE149,MODE43,MODE36) MODE122 */

A_PROCEDURE(A68_VOID ,A68t151,(void),(void *));
typedef struct A68t151  A68_151 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t152,(struct A68t36 ),(struct A68t36 ,void *));
typedef struct A68t152  A68_152 ;    /* PROC(MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t153,(A68_VC ,struct A68t36 ,struct A68t124 *),(A68_VC ,struct A68t36 ,struct A68t124 *,void *));
typedef struct A68t153  A68_153 ;    /* PROC(REF MODE26,MODE36) MODE124 */

A_PROCEDURE(A68_VOID ,A68t154,(struct A68t124 ),(struct A68t124 ,void *));
typedef struct A68t154  A68_154 ;    /* PROC(MODE124) VOID */

A_PROCEDURE(A68_VOID ,A68t155,(struct A68t124 ,struct A68t124 *),(struct A68t124 ,struct A68t124 *,void *));
typedef struct A68t155  A68_155 ;    /* PROC(MODE124) MODE124 */

A_PROCEDURE(A68_VOID ,A68t156,(struct A68t124 ,struct A68t124 ),(struct A68t124 ,struct A68t124 ,void *));
typedef struct A68t156  A68_156 ;    /* PROC(MODE124,MODE124) VOID */

A_PROCEDURE(A68_BOOL ,A68t157,(struct A68t124 ),(struct A68t124 ,void *));
typedef struct A68t157  A68_157 ;    /* PROC(MODE124) BOOL */

A_PROCEDURE(A68_VOID ,A68t158,(A68_INT ,struct A68t118 *),(A68_INT ,struct A68t118 *,void *));
typedef struct A68t158  A68_158 ;    /* PROC(INT) MODE118 */

A_PROCEDURE(A68_VOID ,A68t159,(A68_INT ,struct A68t123 *),(A68_INT ,struct A68t123 *,void *));
typedef struct A68t159  A68_159 ;    /* PROC(INT) MODE123 */

A_PROCEDURE(A68_VOID ,A68t160,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t160  A68_160 ;    /* PROC(INT) REF MODE26 */
struct A68t162 ;

A_PROCEDURE(A68_VOID ,A68t161,(struct A68t162 ),(struct A68t162 ,void *));
typedef struct A68t161  A68_161 ;    /* PROC(MODE162) VOID */

A_PROCEDURE(A68_BOOL ,A68t162,(A68_VC ),(A68_VC ,void *));
typedef struct A68t162  A68_162 ;    /* PROC(REF MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t163,(struct A68t118 ,struct A68t114 *),(struct A68t118 ,struct A68t114 *,void *));
typedef struct A68t163  A68_163 ;    /* PROC(MODE118) MODE114 */

A_PROCEDURE(A68_VOID ,A68t164,(A68_INT ,struct A68t114 *),(A68_INT ,struct A68t114 *,void *));
typedef struct A68t164  A68_164 ;    /* PROC(INT) MODE114 */
struct A68t165{
A68_VC  Context;
A68_VC  Import;
};
typedef struct A68t165  A68_165 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t167 ;

A_PROCEDURE(A68_VOID ,A68t166,(struct A68t167 ),(struct A68t167 ,void *));
typedef struct A68t166  A68_166 ;    /* PROC(MODE167) VOID */
struct A68t167 { A68_INT mode; union {
A68_VC  mode1;
struct A68t32  mode2;
struct A68t54  mode3;
struct A68t53  mode4;
} data; };
typedef struct A68t167  A68_167 ;    /* UNION(REF MODE26,REF MODE32,REF MODE54,REF MODE53)  */

A_PROCEDURE(A68_INT ,A68t168,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t168  A68_168 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_BITS ,A68t169,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t169  A68_169 ;    /* PROC(BITS,BITS) BITS */
struct A68t171 ;

A_PROCEDURE(A68_VOID ,A68t170,(struct A68t171 ,A68_INT ),(struct A68t171 ,A68_INT ,void *));
typedef struct A68t170  A68_170 ;    /* PROC(MODE171,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t171,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t171  A68_171 ;    /* PROC(CHAR) VOID */
struct A68t173 ;

A_PROCEDURE(A68_INT ,A68t172,(struct A68t173 ),(struct A68t173 ,void *));
typedef struct A68t172  A68_172 ;    /* PROC(MODE173) INT */

A_PROCEDURE(A68_CHAR ,A68t173,(void),(void *));
typedef struct A68t173  A68_173 ;    /* PROC CHAR */

A_PROCEDURE(A68_INT ,A68t174,(A68_VC ,A68_BOOL *),(A68_VC ,A68_BOOL *,void *));
typedef struct A68t174  A68_174 ;    /* PROC(MODE26,REF BOOL) INT */

A_PROCEDURE(A68_INT ,A68t175,(void),(void *));
typedef struct A68t175  A68_175 ;    /* PROC INT */

A_PROCEDURE(A68_VOID ,A68t176,(A68_VC *),(A68_VC *,void *));
typedef struct A68t176  A68_176 ;    /* PROC REF MODE26 */

A_PROCEDURE(A68_INT ,A68t177,(A68_INT ,A68_INT ,A68_BOOL *),(A68_INT ,A68_INT ,A68_BOOL *,void *));
typedef struct A68t177  A68_177 ;    /* PROC(INT,INT,REF BOOL) INT */
struct A68t179 ;

A_PROCEDURE(A68_BOOL ,A68t178,(A68_VC ,A68_INT *,struct A68t179 ),(A68_VC ,A68_INT *,struct A68t179 ,void *));
typedef struct A68t178  A68_178 ;    /* PROC(MODE26,REF INT,MODE179) BOOL */
struct A68t180 ;

A_PROCEDURE(A68_VOID ,A68t179,(struct A68t180 ,struct A68t46 ),(struct A68t180 ,struct A68t46 ,void *));
typedef struct A68t179  A68_179 ;    /* PROC(MODE180,MODE46) VOID */
struct A68t180{
A68_INT  Number;
A_PAD_INT(PAD_44)
struct A68t181 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_45)
};
typedef struct A68t180  A68_180 ;    /* STRUCT(INT,REF MODE181,BITS)  */
A_VECTOR(struct A68t183 ,A68t182);
typedef struct A68t182  A68_182 ;    /* VECTOR [] MODE183 */
struct A68t183{
struct A68t180  Msgno;
A68_VC  Text;
};
typedef struct A68t183  A68_183 ;    /* STRUCT(MODE180,REF MODE26)  */
struct A68t181{
A68_VC  Name;
struct A68t182  Messages;
};
typedef struct A68t181  A68_181 ;    /* STRUCT(REF MODE26,REF MODE182)  */
A_VECTOR(struct A68t186 ,A68t185);
typedef struct A68t185  A68_185 ;    /* VECTOR [] MODE186 */
struct A68t184{
A68_BITS  Type;
A_PAD_BITS(PAD_46)
struct A68t185  Elements;
};
typedef struct A68t184  A68_184 ;    /* STRUCT(BITS,REF MODE185)  */
struct A68t186 { A68_INT mode; union {
A68_INT * mode1;
struct A68t184  mode2;
} data; };
typedef struct A68t186  A68_186 ;    /* UNION(REF INT,MODE184)  */
struct A68t187{
A68_INT  Sort;
A_PAD_INT(PAD_47)
A68_VC  Value;
};
typedef struct A68t187  A68_187 ;    /* STRUCT(INT,REF MODE26)  */
A_VECTOR(struct A68t187 ,A68t188);
typedef struct A68t188  A68_188 ;    /* VECTOR [] MODE187 */
A_VECTOR(struct A68t189 ,A68t191);
typedef struct A68t191  A68_191 ;    /* VECTOR [] MODE189 */
struct A68t190{
A68_INT  Choice;
A_PAD_INT(PAD_48)
struct A68t191  Params;
};
typedef struct A68t190  A68_190 ;    /* STRUCT(INT,REF MODE191)  */
struct A68t189 { A68_INT mode; union {
struct A68t190  mode1;
struct A68t187  mode2;
} data; };
typedef struct A68t189  A68_189 ;    /* UNION(MODE190,MODE187)  */

A_PROCEDURE(A68_VOID ,A68t193,(struct A68t179 ,A68_VC *),(struct A68t179 ,A68_VC *,void *));
typedef struct A68t193  A68_193 ;    /* PROC(MODE179) REF MODE26 */
struct A68t192 { A68_INT mode; union {
struct A68t193  mode1;
A68_INT * mode2;
struct A68t184  mode3;
} data; };
typedef struct A68t192  A68_192 ;    /* UNION(MODE193,REF INT,MODE184)  */
struct A68t194{
A68_INT * Sort;
struct A68t192  Reader;
A68_VC  Description;
A68_VC  Help;
};
typedef struct A68t194  A68_194 ;    /* STRUCT(REF INT,MODE192,REF MODE26,REF MODE26)  */
struct A68t195{
struct A68t194  Rule;
struct A68t195 * Rest;
};
typedef struct A68t195  A68_195 ;    /* STRUCT(MODE194,REF MODE195)  */

A_PROCEDURE(A68_BOOL ,A68t196,(struct A68t184 ),(struct A68t184 ,void *));
typedef struct A68t196  A68_196 ;    /* PROC(MODE184) BOOL */

A_PROCEDURE(A68_VOID ,A68t197,(struct A68t185 ,struct A68t184 *),(struct A68t185 ,struct A68t184 *,void *));
typedef struct A68t197  A68_197 ;    /* PROC(MODE185) MODE184 */

A_PROCEDURE(A68_VOID ,A68t198,(struct A68t186 ,struct A68t184 *),(struct A68t186 ,struct A68t184 *,void *));
typedef struct A68t198  A68_198 ;    /* PROC(MODE186) MODE184 */
struct A68t200 ;

A_PROCEDURE(A68_VOID ,A68t199,(struct A68t186 ,struct A68t200 ,A68_VC *),(struct A68t186 ,struct A68t200 ,A68_VC *,void *));
typedef struct A68t199  A68_199 ;    /* PROC(MODE186,REF MODE200) REF MODE26 */
A_VECTOR(struct A68t194 ,A68t200);
typedef struct A68t200  A68_200 ;    /* VECTOR [] MODE194 */

A_PROCEDURE(A68_VOID ,A68t201,(struct A68t34 *,struct A68t200 ),(struct A68t34 *,struct A68t200 ,void *));
typedef struct A68t201  A68_201 ;    /* PROC(REF MODE34,REF MODE200) VOID */
struct A68t203 ;

A_PROCEDURE(struct A68t195 *,A68t202,(struct A68t195 *,struct A68t203 ),(struct A68t195 *,struct A68t203 ,void *));
typedef struct A68t202  A68_202 ;    /* PROC(REF MODE195,MODE203) REF MODE195 */
A_VECTOR(struct A68t204 ,A68t203);
typedef struct A68t203  A68_203 ;    /* VECTOR [] MODE204 */
struct A68t204{
A68_INT * No;
struct A68t192  New;
A68_VC  Name;
A68_VC  Help;
};
typedef struct A68t204  A68_204 ;    /* STRUCT(REF INT,MODE192,MODE26,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t205,(struct A68t189 ,struct A68t188 *),(struct A68t189 ,struct A68t188 *,void *));
typedef struct A68t205  A68_205 ;    /* PROC(MODE189) REF MODE188 */

A_PROCEDURE(A68_BOOL ,A68t206,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t206  A68_206 ;    /* PROC(CHAR) BOOL */

A_PROCEDURE(A68_VOID ,A68t207,(A68_INT ,A68_VC ,struct A68t179 ),(A68_INT ,A68_VC ,struct A68t179 ,void *));
typedef struct A68t207  A68_207 ;    /* PROC(INT,MODE26,MODE179) VOID */

A_PROCEDURE(A68_VOID ,A68t208,(A68_VC ,A68_VC ,struct A68t206 ,struct A68t179 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t206 ,struct A68t179 ,A68_VC *,void *));
typedef struct A68t208  A68_208 ;    /* PROC(REF MODE26,MODE26,MODE206,MODE179) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t209,(A68_INT *,struct A68t179 ),(A68_INT *,struct A68t179 ,void *));
typedef struct A68t209  A68_209 ;    /* PROC(REF INT,MODE179) BOOL */
struct A68t211 ;

A_PROCEDURE(A68_VOID ,A68t210,(struct A68t211 ,struct A68t179 ,A68_VC *),(struct A68t211 ,struct A68t179 ,A68_VC *,void *));
typedef struct A68t210  A68_210 ;    /* PROC(MODE211,MODE179) REF MODE26 */
struct A68t211{
A68_BOOL  Get_first;
A_PAD_BOOL(PAD_49)
A68_BOOL  Check;
A_PAD_BOOL(PAD_50)
};
typedef struct A68t211  A68_211 ;    /* STRUCT(BOOL,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t212,(struct A68t211 ,A68_VC ,struct A68t179 ,A68_VC *),(struct A68t211 ,A68_VC ,struct A68t179 ,A68_VC *,void *));
typedef struct A68t212  A68_212 ;    /* PROC(MODE211,MODE26,MODE179) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t213,(A68_BOOL ,struct A68t179 ,A68_VC *),(A68_BOOL ,struct A68t179 ,A68_VC *,void *));
typedef struct A68t213  A68_213 ;    /* PROC(BOOL,MODE179) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t214,(struct A68t187 ),(struct A68t187 ,void *));
typedef struct A68t214  A68_214 ;    /* PROC(MODE187) BOOL */

A_PROCEDURE(A68_INT ,A68t215,(struct A68t187 ,struct A68t179 ),(struct A68t187 ,struct A68t179 ,void *));
typedef struct A68t215  A68_215 ;    /* PROC(MODE187,MODE179) INT */

A_PROCEDURE(A68_VOID ,A68t216,(struct A68t187 ,struct A68t179 ,A68_VC *),(struct A68t187 ,struct A68t179 ,A68_VC *,void *));
typedef struct A68t216  A68_216 ;    /* PROC(MODE187,MODE179) REF MODE26 */
struct A68t218 ;

A_PROCEDURE(A68_VOID ,A68t217,(struct A68t187 ,A68_VC ,struct A68t179 ,struct A68t218 *),(struct A68t187 ,A68_VC ,struct A68t179 ,struct A68t218 *,void *));
typedef struct A68t217  A68_217 ;    /* PROC(MODE187,MODE26,MODE179) MODE218 */
struct A68t218{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t218  A68_218 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t219,(struct A68t188 ,A68_INT *,A68_VC ,struct A68t179 ,struct A68t165 *),(struct A68t188 ,A68_INT *,A68_VC ,struct A68t179 ,struct A68t165 *,void *));
typedef struct A68t219  A68_219 ;    /* PROC(REF MODE188,REF INT,REF MODE26,MODE179) MODE165 */

A_PROCEDURE(A68_VOID ,A68t220,(struct A68t187 ,A68_BOOL *,A68_VC ,struct A68t179 ,A68_VC *),(struct A68t187 ,A68_BOOL *,A68_VC ,struct A68t179 ,A68_VC *,void *));
typedef struct A68t220  A68_220 ;    /* PROC(MODE187,REF BOOL,MODE26,MODE179) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t221,(struct A68t187 ,struct A68t179 ,struct A68t46 ),(struct A68t187 ,struct A68t179 ,struct A68t46 ,void *));
typedef struct A68t221  A68_221 ;    /* PROC(MODE187,MODE179,MODE46) INT */
struct A68t222{
A68_INT  Lwb;
A_PAD_INT(PAD_51)
A68_INT  Upb;
A_PAD_INT(PAD_52)
};
typedef struct A68t222  A68_222 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t223,(struct A68t187 ,struct A68t222 ,struct A68t179 ,struct A68t222 *),(struct A68t187 ,struct A68t222 ,struct A68t179 ,struct A68t222 *,void *));
typedef struct A68t223  A68_223 ;    /* PROC(MODE187,MODE222,MODE179) MODE222 */

A_PROCEDURE(A68_VOID ,A68t224,(A68_CHAR ,A68_VC ,struct A68t179 ,A68_VC *),(A68_CHAR ,A68_VC ,struct A68t179 ,A68_VC *,void *));
typedef struct A68t224  A68_224 ;    /* PROC(CHAR,MODE26,MODE179) REF MODE26 */

A_PROCEDURE(A68_CHAR ,A68t225,(struct A68t187 ,struct A68t179 ),(struct A68t187 ,struct A68t179 ,void *));
typedef struct A68t225  A68_225 ;    /* PROC(MODE187,MODE179) CHAR */

A_PROCEDURE(struct A68t195 *,A68t226,(void),(void *));
typedef struct A68t226  A68_226 ;    /* PROC REF MODE195 */

A_PROCEDURE(struct A68t195 *,A68t227,(struct A68t195 *),(struct A68t195 *,void *));
typedef struct A68t227  A68_227 ;    /* PROC(REF MODE195) REF MODE195 */

A_PROCEDURE(A68_VOID ,A68t228,(struct A68t151 ),(struct A68t151 ,void *));
typedef struct A68t228  A68_228 ;    /* PROC(MODE151) VOID */

A_PROCEDURE(A68_VOID ,A68t229,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t229  A68_229 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,54,A68t230);
typedef struct A68t230  A68_230 ;    /* STRUCT 54 CHAR */

A_PROCEDURE(A68_VOID ,A68t231,(struct A68t188 ,A68_INT *,struct A68t98 ,A68_INT ,struct A68t36 ,struct A68t110 *),(struct A68t188 ,A68_INT *,struct A68t98 ,A68_INT ,struct A68t36 ,struct A68t110 *,void *));
typedef struct A68t231  A68_231 ;    /* PROC(REF MODE188,REF INT,MODE98,INT,MODE36) MODE110 */

A_PROCEDURE(A68_VOID ,A68t232,(struct A68t187 *),(struct A68t187 *,void *));
typedef struct A68t232  A68_232 ;    /* PROC MODE187 */
A_ISTRUCT(A68_CHAR ,27,A68t233);
typedef struct A68t233  A68_233 ;    /* STRUCT 27 CHAR */
A_ISTRUCT(struct A68t52 ,2,A68t234);
typedef struct A68t234  A68_234 ;    /* STRUCT 2 MODE52 */

A_PROCEDURE(A68_VOID ,A68t235,(struct A68t187 ,A68_VC ,struct A68t110 *),(struct A68t187 ,A68_VC ,struct A68t110 *,void *));
typedef struct A68t235  A68_235 ;    /* PROC(MODE187,MODE26) MODE110 */
A_ISTRUCT(A68_CHAR ,16,A68t236);
typedef struct A68t236  A68_236 ;    /* STRUCT 16 CHAR */
A_ISTRUCT(struct A68t52 ,4,A68t237);
typedef struct A68t237  A68_237 ;    /* STRUCT 4 MODE52 */
A_ISTRUCT(A68_CHAR ,9,A68t238);
typedef struct A68t238  A68_238 ;    /* STRUCT 9 CHAR */

A_PROCEDURE(A68_VOID ,A68t239,(struct A68t98 ,struct A68t110 *),(struct A68t98 ,struct A68t110 *,void *));
typedef struct A68t239  A68_239 ;    /* PROC(MODE98) MODE110 */

A_PROCEDURE(A68_BOOL ,A68t240,(A68_CHAR ,A68_VC ),(A68_CHAR ,A68_VC ,void *));
typedef struct A68t240  A68_240 ;    /* PROC(CHAR,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t241,(struct A68t187 ,struct A68t98 ,struct A68t187 *),(struct A68t187 ,struct A68t98 ,struct A68t187 *,void *));
typedef struct A68t241  A68_241 ;    /* PROC(MODE187,MODE98) MODE187 */

A_PROCEDURE(A68_VOID ,A68t242,(A68_VC ,A68_CHAR ),(A68_VC ,A68_CHAR ,void *));
typedef struct A68t242  A68_242 ;    /* PROC(MODE26,CHAR) VOID */
A_ISTRUCT(A68_CHAR ,29,A68t243);
typedef struct A68t243  A68_243 ;    /* STRUCT 29 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t244);
typedef struct A68t244  A68_244 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(struct A68t52 ,6,A68t245);
typedef struct A68t245  A68_245 ;    /* STRUCT 6 MODE52 */
A_ISTRUCT(A68_CHAR ,12,A68t246);
typedef struct A68t246  A68_246 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(A68_CHAR ,14,A68t247);
typedef struct A68t247  A68_247 ;    /* STRUCT 14 CHAR */
A_ISTRUCT(A68_CHAR ,11,A68t248);
typedef struct A68t248  A68_248 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,17,A68t249);
typedef struct A68t249  A68_249 ;    /* STRUCT 17 CHAR */
A_ISTRUCT(A68_CHAR ,21,A68t250);
typedef struct A68t250  A68_250 ;    /* STRUCT 21 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t251);
typedef struct A68t251  A68_251 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(struct A68t52 ,8,A68t252);
typedef struct A68t252  A68_252 ;    /* STRUCT 8 MODE52 */
A_ISTRUCT(A68_CHAR ,28,A68t253);
typedef struct A68t253  A68_253 ;    /* STRUCT 28 CHAR */
A_ISTRUCT(A68_CHAR ,22,A68t254);
typedef struct A68t254  A68_254 ;    /* STRUCT 22 CHAR */
A_ISTRUCT(struct A68t52 ,5,A68t255);
typedef struct A68t255  A68_255 ;    /* STRUCT 5 MODE52 */
A_ISTRUCT(A68_CHAR ,15,A68t256);
typedef struct A68t256  A68_256 ;    /* STRUCT 15 CHAR */
A_ISTRUCT(A68_CHAR ,13,A68t257);
typedef struct A68t257  A68_257 ;    /* STRUCT 13 CHAR */
A_ISTRUCT(A68_CHAR ,26,A68t258);
typedef struct A68t258  A68_258 ;    /* STRUCT 26 CHAR */
A_ISTRUCT(struct A68t52 ,3,A68t259);
typedef struct A68t259  A68_259 ;    /* STRUCT 3 MODE52 */
A_ISTRUCT(A68_CHAR ,7,A68t260);
typedef struct A68t260  A68_260 ;    /* STRUCT 7 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from simreader --- */
extern A68_BOOL  WJAASIM_is_fn_arrow(struct A68t187 );
extern A68_BOOL  QJAASIM_is_query(struct A68t187 );
extern A68_BOOL  TJAASIM_is_void(struct A68t187 );
extern A68_BOOL  ZJAASIM_is_val_id(struct A68t187 );
extern A68_BOOL  CKAASIM_is_slash_int(struct A68t187 );
extern A68_BOOL  FKAASIM_is_prime_char(struct A68t187 );
/* --- End of imports from simreader --- */


/* --- Imports from kernelreader --- */
extern A68_BOOL  OEGAOST_is_quoted_string(struct A68t187 );
/* --- End of imports from kernelreader --- */


/* --- Imports from commandsyntax --- */
/* --- End of imports from commandsyntax --- */


/* --- Imports from basics --- */
extern A68_INT  XVCAOST_charstoint(A68_VC ,A68_BOOL *);
/* --- End of imports from basics --- */


/* --- Imports from kernel --- */
extern A68_97 * VSAASIM_nilsenum;
extern A68_101 * WSAASIM_nilsst;
extern A68_111 * DTAASIM_nilsvst;
extern A68_110  GTAASIM_nullsvalue;
extern A68_110  JTAASIM_voidsvalue;
/* --- End of imports from kernel --- */


/* --- Imports from putstrings --- */
extern A68_VC  EOAAOSL_nullstr;
extern A68_VOID  UJBAOSL_oneline(struct A68t85 ,A68_VC *);
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void WAAASIM(void);   /* simreader */
extern void TXEAOST(void);   /* kernelreader */
extern void LRAAOST(void);   /* commandsyntax */
extern void JSCAOST(void);   /* basics */
extern void XWBBSIM(void);   /* kernel */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_230   VKEBSIM = {"$Id: simpoke.a68,v 34.2 1995/03/29 13:04:29 ella Exp $"}; 
A_GISVEC(A68_VC ,WKEBSIM,VKEBSIM,54)
#define XKEBSIM_cycle_and_check 1
#define YKEBSIM_nocycle_and_check 2
#define ZKEBSIM_nocycle_nocheck 3
static A68_233   XLEBSIM = {" in repetition of arguments"}; 
A_GISVEC(A68_VC ,YLEBSIM,XLEBSIM,27)
#define EMEBSIM_err GTAASIM_nullsvalue
static A68_236   MMEBSIM = {" expected, not \""}; 
A_GISVEC(A68_VC ,NMEBSIM,MMEBSIM,16)
static A68_238   YMEBSIM = {" expected"}; 
A_GISVEC(A68_VC ,ZMEBSIM,YMEBSIM,9)
static A68_243   JOEBSIM = {" is the wrong basic value - \""}; 
A_GISVEC(A68_VC ,KOEBSIM,JOEBSIM,29)
static A68_244   POEBSIM = {"\" expected"}; 
A_GISVEC(A68_VC ,QOEBSIM,POEBSIM,10)
static A68_246   CPEBSIM = {"ELLA-integer"}; 
A_GISVEC(A68_VC ,EPEBSIM,CPEBSIM,12)
static A68_247   FPEBSIM = {"ELLA-character"}; 
A_GISVEC(A68_VC ,GPEBSIM,FPEBSIM,14)
static A68_248   HPEBSIM = {"ELLA-string"}; 
A_GISVEC(A68_VC ,IPEBSIM,HPEBSIM,11)
static A68_249   UPEBSIM = {"() expected, not "}; 
A_GISVEC(A68_VC ,VPEBSIM,UPEBSIM,17)
static A68_250   TREBSIM = {" is out of bounds - ["}; 
A_GISVEC(A68_VC ,UREBSIM,TREBSIM,21)
static A68_251   ZREBSIM = {".."}; 
A_GISVEC(A68_VC ,ASEBSIM,ZREBSIM,2)
static A68_246   MSEBSIM = {"ELLA-integer"}; 
A_GISVEC(A68_VC ,NSEBSIM,MSEBSIM,12)
static A68_253   BTEBSIM = {" is not a value in this type"}; 
A_GISVEC(A68_VC ,CTEBSIM,BTEBSIM,28)
static A68_247   KTEBSIM = {"ELLA-character"}; 
A_GISVEC(A68_VC ,LTEBSIM,KTEBSIM,14)
static A68_254   BUEBSIM = {"\" should be of length "}; 
A_GISVEC(A68_VC ,CUEBSIM,BUEBSIM,22)
static A68_256   UUEBSIM = {" is not a value"}; 
A_GISVEC(A68_VC ,VUEBSIM,UUEBSIM,15)
static A68_257   YUEBSIM = {" in this type"}; 
A_GISVEC(A68_VC ,ZUEBSIM,YUEBSIM,13)
static A68_248   XVEBSIM = {"ELLA-string"}; 
A_GISVEC(A68_VC ,YVEBSIM,XVEBSIM,11)
static A68_258   JWEBSIM = {"\" is the wrong basic value"}; 
A_GISVEC(A68_VC ,KWEBSIM,JWEBSIM,26)
static A68_248   TWEBSIM = {"basic value"}; 
A_GISVEC(A68_VC ,UWEBSIM,TWEBSIM,11)
static A68_249   KYEBSIM = {"Extra parameter \""}; 
A_GISVEC(A68_VC ,LYEBSIM,KYEBSIM,17)
static A68_260   PYEBSIM = {"\" found"}; 
A_GISVEC(A68_VC ,QYEBSIM,PYEBSIM,7)
typedef struct   /* env of non-global proc */
{
A68_INT * HLEBSIM_index;
A68_188  Names;
A68_INT  Cycle;
A_PAD_INT(PAD_53)
A68_BOOL * GLEBSIM_cycling;
A68_INT * Last_index;
A68_232  ILEBSIM_read_name;
} KLEBSIM_read_name;
typedef struct   /* env of non-global proc */
{
A68_INT * HLEBSIM_index;
} QLEBSIM_put_back;
typedef struct   /* env of non-global proc */
{
A68_36  Flt;
A68_BOOL * GLEBSIM_cycling;
} ULEBSIM_new_flt;
typedef struct   /* env of non-global proc */
{
A68_36  SLEBSIM_new_flt;
} JMEBSIM_wrong;
typedef struct   /* env of non-global proc */
{
A68_36  SLEBSIM_new_flt;
A68_232  ILEBSIM_read_name;
A68_235  HMEBSIM_wrong;
} XNEBSIM_check_ident;
typedef struct   /* env of non-global proc */
{
A68_232  ILEBSIM_read_name;
A68_36  Flt;
A68_151  OLEBSIM_put_back;
A68_239  MPEBSIM_read_value;
A68_241  VNEBSIM_check_ident;
A68_235  HMEBSIM_wrong;
A68_36  SLEBSIM_new_flt;
} OPEBSIM_read_value;
typedef struct   /* env of non-global proc */
{
A68_36  SLEBSIM_new_flt;
A68_187  Name;
} DOEBSIM_fail;
typedef struct   /* env of non-global proc */
{
A68_96 * NTEBSIM_ss;
} JVEBSIM_generator;

A68_VOID  FLEBSIM_get_values(A68_188  Names, A68_INT * Last_index, A68_98  Type, A68_INT  Cycle, A68_36  Flt, A68_110  *ReturnedValue);

A_STATIC A68_VOID  JLEBSIM_read_name(A68_187  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  PLEBSIM_put_back(void *NonLocals);

A_STATIC A68_VOID  TLEBSIM_new_flt(A68_VC  Msg, void *NonLocals);

A_STATIC A68_VOID  IMEBSIM_wrong(A68_187  V, A68_VC  Expected, A68_110  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  GNEBSIM_make_query(A68_98  Type, A68_110  *ReturnedValue);

A_STATIC A68_BOOL  NNEBSIM_instring(A68_CHAR  C, A68_VC  Str);

A_STATIC A68_VOID  WNEBSIM_check_ident(A68_187  Name, A68_98  Type, A68_187  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  COEBSIM_fail(A68_VC  Expected, A68_CHAR  Sort, void *NonLocals);

A_STATIC A68_VOID  NPEBSIM_read_value(A68_98  Type, A68_110  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  IVEBSIM_generator(A68_BOOL  GVEBSIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  COEBSIM_fail(A68_VC  Expected, A68_CHAR  Sort, void *NonLocals)
#define NL(x) (((DOEBSIM_fail *)NonLocals)->x)
{ 
A68_245  EOEBSIM;  /* collateral clause result */
A68_52  FOEBSIM;  /* OPERATORS - mode -> union mode */
A68_CHAR  GOEBSIM;  /* YIELD */
A68_52  HOEBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  IOEBSIM;  /* YIELD */
A68_52  LOEBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  MOEBSIM;  /* YIELD */
A68_52  NOEBSIM;  /* OPERATORS - mode -> union mode */
A68_52  OOEBSIM;  /* OPERATORS - mode -> union mode */
A68_52  ROEBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  SOEBSIM;  /* YIELD */
A68_85  TOEBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  UOEBSIM;  /* avoid structure result */
A_PROC_ENTRY(fail);
 /* line 131: */
GOEBSIM = '\"' ;
EOEBSIM.data[0] = A_UNITE(FOEBSIM,mode6,6,GOEBSIM);
 /* line 132: */
IOEBSIM = NL(Name).Value ;
EOEBSIM.data[1] = A_UNITE(HOEBSIM,mode7,7,IOEBSIM);
 /* line 133: */
MOEBSIM = KOEBSIM ;
EOEBSIM.data[2] = A_UNITE(LOEBSIM,mode7,7,MOEBSIM);
EOEBSIM.data[3] = A_UNITE(NOEBSIM,mode7,7,Expected);
EOEBSIM.data[4] = A_UNITE(OOEBSIM,mode6,6,Sort);
SOEBSIM = QOEBSIM ;
EOEBSIM.data[5] = A_UNITE(ROEBSIM,mode7,7,SOEBSIM);
UJBAOSL_oneline( A_HISVEC(TOEBSIM,EOEBSIM,6,A68_52 ), &UOEBSIM );
A_CALLPROC(NL(SLEBSIM_new_flt),(UOEBSIM),(UOEBSIM,(NL(SLEBSIM_new_flt)).nonlocals));
A_PROC_EXIT(fail);
return;
} 
#undef NL

A_STATIC A68_VOID  IVEBSIM_generator(A68_BOOL  GVEBSIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((JVEBSIM_generator *)NonLocals)->x)
{ 
A68_VC  KVEBSIM;  /* clause result */
A68_VC  LVEBSIM;  /* OPERATORS - dynamic generator */
{ 
LVEBSIM.upb = (*(&(NL(NTEBSIM_ss)->No))) ;
( GVEBSIM_anonymous? A_VLOC(A68_CHAR ,LVEBSIM): A_VHEAP(A68_CHAR ,LVEBSIM) );
KVEBSIM = LVEBSIM;
} 
*ReturnedValue = (KVEBSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  JLEBSIM_read_name(A68_187  *ReturnedValue, void *NonLocals)
#define NL(x) (((KLEBSIM_read_name *)NonLocals)->x)
{ 
A68_187  LLEBSIM;  /* clause result */
A68_187  MLEBSIM;  /* avoid structure result */
A68_187  NLEBSIM;  /* collateral clause result */
A_PROC_ENTRY(read_name);
 /* line 83: */
if ( (((*NL(HLEBSIM_index))+=1)>NL(Names).upb) )
{ 
 /* line 84: */
if ( (NL(Cycle)==XKEBSIM_cycle_and_check) )
{ 
(*NL(GLEBSIM_cycling)) = A68_TRUE;
 /* line 85: */
(*NL(HLEBSIM_index)) = (*NL(Last_index));
 /* line 86: */
 /* line 87: */
A_CALLPROC(NL(ILEBSIM_read_name),( &MLEBSIM),( &MLEBSIM,(NL(ILEBSIM_read_name)).nonlocals));
LLEBSIM = MLEBSIM;
} 
else
{ 
(*NL(Last_index)) = NL(Names).upb;
 /* line 88: */
NLEBSIM.Sort = 0;
 /* line 89: */
 /* line 90: */
NLEBSIM.Value = EOAAOSL_nullstr;
LLEBSIM = NLEBSIM;
} 
} 
else
{ 
 /* line 91: */
LLEBSIM = (*(&A_VINDEX(NL(Names),(*NL(HLEBSIM_index)))));
} 
A_PROC_EXIT(read_name);
*ReturnedValue = (LLEBSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  PLEBSIM_put_back(void *NonLocals)
#define NL(x) (((QLEBSIM_put_back *)NonLocals)->x)
{ 
A_PROC_ENTRY(put_back);
(*NL(HLEBSIM_index))-=1;
A_PROC_EXIT(put_back);
return;
} 
#undef NL

A_STATIC A68_VOID  TLEBSIM_new_flt(A68_VC  Msg, void *NonLocals)
#define NL(x) (((ULEBSIM_new_flt *)NonLocals)->x)
{ 
A68_234  VLEBSIM;  /* collateral clause result */
A68_52  WLEBSIM;  /* OPERATORS - mode -> union mode */
A68_52  ZLEBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  AMEBSIM;  /* YIELD */
A68_VC  BMEBSIM;  /* clause result */
A68_85  CMEBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  DMEBSIM;  /* avoid structure result */
A_PROC_ENTRY(new_flt);
 /* line 96: */
if ( (*NL(GLEBSIM_cycling)) )
{ 
VLEBSIM.data[0] = A_UNITE(WLEBSIM,mode7,7,Msg);
AMEBSIM = YLEBSIM ;
VLEBSIM.data[1] = A_UNITE(ZLEBSIM,mode7,7,AMEBSIM);
 /* line 97: */
 /* line 98: */
UJBAOSL_oneline( A_HISVEC(CMEBSIM,VLEBSIM,2,A68_52 ), &DMEBSIM );
BMEBSIM = DMEBSIM;
} 
else
{ 
 /* line 99: */
BMEBSIM = Msg;
} 
A_CALLPROC(NL(Flt),(BMEBSIM),(BMEBSIM,(NL(Flt)).nonlocals));
A_PROC_EXIT(new_flt);
return;
} 
#undef NL

A_STATIC A68_VOID  IMEBSIM_wrong(A68_187  V, A68_VC  Expected, A68_110  *ReturnedValue, void *NonLocals)
#define NL(x) (((JMEBSIM_wrong *)NonLocals)->x)
{ 
A68_237  KMEBSIM;  /* collateral clause result */
A68_52  LMEBSIM;  /* OPERATORS - mode -> union mode */
A68_52  OMEBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  PMEBSIM;  /* YIELD */
A68_52  QMEBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  RMEBSIM;  /* YIELD */
A68_52  SMEBSIM;  /* OPERATORS - mode -> union mode */
A68_CHAR  TMEBSIM;  /* YIELD */
A68_85  UMEBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  VMEBSIM;  /* avoid structure result */
A68_234  WMEBSIM;  /* collateral clause result */
A68_52  XMEBSIM;  /* OPERATORS - mode -> union mode */
A68_52  ANEBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  BNEBSIM;  /* YIELD */
A68_85  CNEBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  DNEBSIM;  /* avoid structure result */
A68_110  ENEBSIM;  /* clause result */
A_PROC_ENTRY(wrong);
 /* line 104: */
 /* line 105: */
{ 
 /* line 106: */
if ( (V.Sort>0) )
{ 
KMEBSIM.data[0] = A_UNITE(LMEBSIM,mode7,7,Expected);
PMEBSIM = NMEBSIM ;
KMEBSIM.data[1] = A_UNITE(OMEBSIM,mode7,7,PMEBSIM);
RMEBSIM = V.Value ;
KMEBSIM.data[2] = A_UNITE(QMEBSIM,mode7,7,RMEBSIM);
TMEBSIM = '\"' ;
KMEBSIM.data[3] = A_UNITE(SMEBSIM,mode6,6,TMEBSIM);
 /* line 107: */
UJBAOSL_oneline( A_HISVEC(UMEBSIM,KMEBSIM,4,A68_52 ), &VMEBSIM );
A_CALLPROC(NL(SLEBSIM_new_flt),(VMEBSIM),(VMEBSIM,(NL(SLEBSIM_new_flt)).nonlocals));
} 
else
{ 
WMEBSIM.data[0] = A_UNITE(XMEBSIM,mode7,7,Expected);
BNEBSIM = ZMEBSIM ;
WMEBSIM.data[1] = A_UNITE(ANEBSIM,mode7,7,BNEBSIM);
 /* line 108: */
UJBAOSL_oneline( A_HISVEC(CNEBSIM,WMEBSIM,2,A68_52 ), &DNEBSIM );
A_CALLPROC(NL(SLEBSIM_new_flt),(DNEBSIM),(DNEBSIM,(NL(SLEBSIM_new_flt)).nonlocals));
} 
 /* line 109: */
 /* line 110: */
ENEBSIM = EMEBSIM_err;
} 
A_PROC_EXIT(wrong);
*ReturnedValue = (ENEBSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  GNEBSIM_make_query(A68_98  Type, A68_110  *ReturnedValue)
{ 
A68_105 * HNEBSIM_ans;
A68_98 * INEBSIM;  /* YIELD */
A68_110  JNEBSIM;  /* clause result */
A68_110  KNEBSIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(make_query);
 /* line 113: */
 /* line 114: */
{ 
HNEBSIM_ans = (A_HEAP(A68_105 ));
 /* line 115: */
INEBSIM = (&(HNEBSIM_ans->Type)) ;
(*INEBSIM) = Type;
 /* line 116: */
 /* line 117: */
JNEBSIM = A_UNITE(KNEBSIM,mode1,1,HNEBSIM_ans);
} 
A_PROC_EXIT(make_query);
*ReturnedValue = (JNEBSIM);
return;
} 
#undef NL

A_STATIC A68_BOOL  NNEBSIM_instring(A68_CHAR  C, A68_VC  Str)
{ 
A68_BOOL  ONEBSIM_not_found;
A68_CHAR  PNEBSIM_s;
A68_CHAR * QNEBSIM;  /* forall control - []x */
A68_INT  RNEBSIM;  /* forall loop counter */
A68_BOOL  SNEBSIM;  /* clause result */
A_PROC_ENTRY(instring);
 /* line 120: */
 /* line 121: */
{ 
ONEBSIM_not_found = A68_TRUE;
 /* line 122: */
RNEBSIM = Str.upb -1;
QNEBSIM = Str.data;
for (;RNEBSIM-- >= 0;
(QNEBSIM++
) )
{
PNEBSIM_s = *QNEBSIM;
 /* line 123: */
if ( !(ONEBSIM_not_found) ) break;
if ( (C==PNEBSIM_s) )
{ 
ONEBSIM_not_found = A68_FALSE;
} 
}
 /* line 124: */
 /* line 125: */
SNEBSIM = !ONEBSIM_not_found;
} 
A_PROC_EXIT(instring);
return( SNEBSIM );
} 
#undef NL

A_STATIC A68_VOID  WNEBSIM_check_ident(A68_187  Name, A68_98  Type, A68_187  *ReturnedValue, void *NonLocals)
#define NL(x) (((XNEBSIM_check_ident *)NonLocals)->x)
{ 
A68_242  BOEBSIM_fail;   /* proc value of non-global proc */
A68_98  VOEBSIM;  /* united object - for case conformity */
A68_94 * WOEBSIM_i;
A68_95 * XOEBSIM_c;
A68_96 * YOEBSIM_s;
A68_187  ZOEBSIM;  /* clause result */
A68_187  APEBSIM;  /* avoid structure result */
A68_98  BPEBSIM;  /* united object - for case conformity */
A68_VC  DPEBSIM;  /* clause result */
A68_110  JPEBSIM;  /* avoid structure result */
A68_187  KPEBSIM;  /* avoid structure result */
A_PROC_ENTRY(check_ident);
 /* line 128: */
 /* line 129: */
{ 
 /* line 130: */
if ( ZJAASIM_is_val_id(Name) )
{ 
A_CLOSURE( BOEBSIM_fail, COEBSIM_fail, DOEBSIM_fail );
(( DOEBSIM_fail * ) ( BOEBSIM_fail.nonlocals )) -> SLEBSIM_new_flt = NL(SLEBSIM_new_flt);
(( DOEBSIM_fail * ) ( BOEBSIM_fail.nonlocals )) -> Name = Name;
 /* line 134: */
 /* line 135: */
VOEBSIM = Type ;
switch ( VOEBSIM.mode )
{ 
case 2: /* REF STRUCT(REF MODE26,INT,INT)  */
WOEBSIM_i = (VOEBSIM.data.mode2);
 /* line 136: */
if ( A_VC_NE((*(&(WOEBSIM_i->Id))),Name.Value) )
{ 
 /* line 137: */
A_CALLPROC(BOEBSIM_fail,((*(&(WOEBSIM_i->Id))), '/'),((*(&(WOEBSIM_i->Id))), '/',(BOEBSIM_fail).nonlocals));
} 
break;
case 3: /* REF STRUCT(REF MODE26,REF MODE26)  */
XOEBSIM_c = (VOEBSIM.data.mode3);
 /* line 138: */
if ( A_VC_NE((*(&(XOEBSIM_c->Id))),Name.Value) )
{ 
 /* line 139: */
A_CALLPROC(BOEBSIM_fail,((*(&(XOEBSIM_c->Id))), '\''),((*(&(XOEBSIM_c->Id))), '\'',(BOEBSIM_fail).nonlocals));
} 
break;
case 5: /* REF STRUCT(INT,MODE95)  */
YOEBSIM_s = (VOEBSIM.data.mode5);
 /* line 140: */
 /* line 141: */
if ( A_VC_NE((*(&((&(YOEBSIM_s->T))->Id))),Name.Value) )
{ 
 /* line 142: */
 /* line 143: */
A_CALLPROC(BOEBSIM_fail,((*(&((&(YOEBSIM_s->T))->Id))), '\"'),((*(&((&(YOEBSIM_s->T))->Id))), '\"',(BOEBSIM_fail).nonlocals));
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 144: */
 /* line 146: */
A_CALLPROC(NL(ILEBSIM_read_name),( &APEBSIM),( &APEBSIM,(NL(ILEBSIM_read_name)).nonlocals));
ZOEBSIM = APEBSIM;
} 
else
{ 
 /* line 147: */
BPEBSIM = Type ;
switch ( BPEBSIM.mode )
{ 
case 2: /* REF STRUCT(REF MODE26,INT,INT)  */
 /* line 148: */
DPEBSIM = EPEBSIM;
break;
case 3: /* REF STRUCT(REF MODE26,REF MODE26)  */
 /* line 149: */
DPEBSIM = GPEBSIM;
break;
case 5: /* REF STRUCT(INT,MODE95)  */
 /* line 150: */
 /* line 151: */
DPEBSIM = IPEBSIM;
break;
default: 
A_IMP_SKIP ;
break;
} 
A_CALLPROC(NL(HMEBSIM_wrong),(Name, DPEBSIM, &JPEBSIM),(Name, DPEBSIM, &JPEBSIM,(NL(HMEBSIM_wrong)).nonlocals));
JPEBSIM;
 /* line 152: */
 /* line 153: */
 /* line 154: */
A_CALLPROC(NL(ILEBSIM_read_name),( &KPEBSIM),( &KPEBSIM,(NL(ILEBSIM_read_name)).nonlocals));
ZOEBSIM = KPEBSIM;
} 
} 
A_PROC_EXIT(check_ident);
*ReturnedValue = (ZOEBSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  NPEBSIM_read_value(A68_98  Type, A68_110  *ReturnedValue, void *NonLocals)
#define NL(x) (((OPEBSIM_read_value *)NonLocals)->x)
{ 
A68_98  PPEBSIM;  /* united object - for case conformity */
A68_110  QPEBSIM;  /* clause result */
A68_187  RPEBSIM;  /* avoid structure result */
A68_187  SPEBSIM_name;
A68_237  TPEBSIM;  /* collateral clause result */
A68_52  WPEBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  XPEBSIM;  /* YIELD */
A68_52  YPEBSIM;  /* OPERATORS - mode -> union mode */
A68_CHAR  ZPEBSIM;  /* YIELD */
A68_52  AQEBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  BQEBSIM;  /* YIELD */
A68_52  CQEBSIM;  /* OPERATORS - mode -> union mode */
A68_CHAR  DQEBSIM;  /* YIELD */
A68_85  EQEBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  FQEBSIM;  /* avoid structure result */
A68_100 * GQEBSIM_sf;
A68_187  HQEBSIM;  /* avoid structure result */
A68_112  IQEBSIM;  /* collateral clause result */
A68_110  JQEBSIM;  /* avoid structure result */
A68_110  KQEBSIM;  /* avoid structure result */
A68_112 * LQEBSIM;  /* YIELD */
A68_110  MQEBSIM;  /* OPERATORS - mode -> union mode */
A68_101 * NQEBSIM_sstruct;
A68_111 * OQEBSIM_ans;
A68_111 ** PQEBSIM_end;
A68_101 * QQEBSIM_ptr;
A68_111  RQEBSIM;  /* collateral clause result */
A68_110  SQEBSIM;  /* avoid structure result */
A68_111 * TQEBSIM;  /* YIELD */
A68_110  UQEBSIM;  /* OPERATORS - mode -> union mode */
A68_99 * VQEBSIM_sr;
A68_111 * WQEBSIM_ans;
A68_111 ** XQEBSIM_end;
A68_INT  YQEBSIM;  /* to part of loop */
A68_INT  ZQEBSIM;  /* loop control */
A68_111  AREBSIM;  /* collateral clause result */
A68_110  BREBSIM;  /* avoid structure result */
A68_111 * CREBSIM;  /* YIELD */
A68_110  DREBSIM;  /* OPERATORS - mode -> union mode */
A68_187  EREBSIM;  /* avoid structure result */
A68_187  FREBSIM_name;
A68_110  GREBSIM;  /* avoid structure result */
A68_98  HREBSIM;  /* united object - for case conformity */
A68_94 * IREBSIM_si;
A68_187  JREBSIM;  /* avoid structure result */
A68_187  KREBSIM_int_val;
A68_INT  LREBSIM_int;
A68_BOOL  MREBSIM;  /* optbool result */
A68_252  NREBSIM;  /* collateral clause result */
A68_52  OREBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  PREBSIM;  /* YIELD */
A68_52  QREBSIM;  /* OPERATORS - mode -> union mode */
A68_CHAR  RREBSIM;  /* YIELD */
A68_52  SREBSIM;  /* OPERATORS - mode -> union mode */
A68_52  VREBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  WREBSIM;  /* YIELD */
A68_52  XREBSIM;  /* OPERATORS - mode -> union mode */
A68_INT  YREBSIM;  /* YIELD */
A68_52  BSEBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  CSEBSIM;  /* YIELD */
A68_52  DSEBSIM;  /* OPERATORS - mode -> union mode */
A68_INT  ESEBSIM;  /* YIELD */
A68_52  FSEBSIM;  /* OPERATORS - mode -> union mode */
A68_CHAR  GSEBSIM;  /* YIELD */
A68_85  HSEBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  ISEBSIM;  /* avoid structure result */
A68_106  JSEBSIM;  /* collateral clause result */
A68_106 * KSEBSIM;  /* YIELD */
A68_110  LSEBSIM;  /* OPERATORS - mode -> union mode */
A68_110  OSEBSIM;  /* avoid structure result */
A68_95 * PSEBSIM_sc;
A68_187  QSEBSIM;  /* avoid structure result */
A68_187  RSEBSIM_char_val;
A68_VC  SSEBSIM;  /* OPERATORS - simple index */
A68_INT  TSEBSIM;  /* YIELD */
A68_CHAR  USEBSIM_char;
A68_237  VSEBSIM;  /* collateral clause result */
A68_52  WSEBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  XSEBSIM;  /* YIELD */
A68_52  YSEBSIM;  /* OPERATORS - mode -> union mode */
A68_CHAR  ZSEBSIM;  /* YIELD */
A68_52  ATEBSIM;  /* OPERATORS - mode -> union mode */
A68_52  DTEBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  ETEBSIM;  /* YIELD */
A68_85  FTEBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  GTEBSIM;  /* avoid structure result */
A68_107  HTEBSIM;  /* collateral clause result */
A68_107 * ITEBSIM;  /* YIELD */
A68_110  JTEBSIM;  /* OPERATORS - mode -> union mode */
A68_110  MTEBSIM;  /* avoid structure result */
A68_96 * NTEBSIM_ss;
A68_187  OTEBSIM;  /* avoid structure result */
A68_187  PTEBSIM_string;
A68_95  QTEBSIM_ctype;
A68_INT  RTEBSIM_upb;
A68_BOOL  STEBSIM;  /* optbool result */
A68_BOOL  TTEBSIM;  /* optbool result */
A68_255  UTEBSIM;  /* collateral clause result */
A68_52  VTEBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  WTEBSIM;  /* YIELD */
A68_52  XTEBSIM;  /* OPERATORS - mode -> union mode */
A68_CHAR  YTEBSIM;  /* YIELD */
A68_52  ZTEBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  AUEBSIM;  /* YIELD */
A68_52  DUEBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  EUEBSIM;  /* YIELD */
A68_52  FUEBSIM;  /* OPERATORS - mode -> union mode */
A68_INT  GUEBSIM;  /* YIELD */
A68_85  HUEBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  IUEBSIM;  /* avoid structure result */
A68_BOOL  JUEBSIM_correct;
A68_INT  KUEBSIM_i;
A68_INT  LUEBSIM;  /* to part of loop */
A68_VC  MUEBSIM;  /* OPERATORS - simple index */
A68_CHAR  NUEBSIM_char;
A68_255  OUEBSIM;  /* collateral clause result */
A68_52  PUEBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  QUEBSIM;  /* YIELD */
A68_52  RUEBSIM;  /* OPERATORS - mode -> union mode */
A68_CHAR  SUEBSIM;  /* YIELD */
A68_52  TUEBSIM;  /* OPERATORS - mode -> union mode */
A68_52  WUEBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  XUEBSIM;  /* YIELD */
A68_52  AVEBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  BVEBSIM;  /* YIELD */
A68_85  CVEBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  DVEBSIM;  /* avoid structure result */
A68_108 * EVEBSIM_ans;
A68_108  FVEBSIM;  /* collateral clause result */
A68_31  HVEBSIM_generator;   /* proc value of non-global proc */
A68_VC  MVEBSIM;  /* avoid structure result */
A68_VC  NVEBSIM;  /* OPERATORS - trim index */
A68_VC  OVEBSIM;  /* OPERATORS - trim index */
A68_VC  PVEBSIM;  /* YIELD */
A68_VC  QVEBSIM;  /* OPERATORS - assign op */
A68_CHAR * RVEBSIM_c;
A68_VC  SVEBSIM;  /* OPERATORS - trim index */
A68_VC  TVEBSIM;  /* OPERATORS - trim index */
A68_VC  UVEBSIM;  /* forall yield */
A68_INT  VVEBSIM;  /* forall loop counter */
A68_110  WVEBSIM;  /* OPERATORS - mode -> union mode */
A68_110  ZVEBSIM;  /* avoid structure result */
A68_97 * AWEBSIM_se;
A68_INT  BWEBSIM_tag;
A68_97 * CWEBSIM_ptr;
A68_BOOL  DWEBSIM;  /* optbool result */
A68_259  EWEBSIM;  /* collateral clause result */
A68_52  FWEBSIM;  /* OPERATORS - mode -> union mode */
A68_CHAR  GWEBSIM;  /* YIELD */
A68_52  HWEBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  IWEBSIM;  /* YIELD */
A68_52  LWEBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  MWEBSIM;  /* YIELD */
A68_85  NWEBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  OWEBSIM;  /* avoid structure result */
A68_109  PWEBSIM;  /* collateral clause result */
A68_110  QWEBSIM;  /* avoid structure result */
A68_109 * RWEBSIM;  /* YIELD */
A68_110  SWEBSIM;  /* OPERATORS - mode -> union mode */
A68_110  VWEBSIM;  /* avoid structure result */
A_PROC_ENTRY(read_value);
 /* line 157: */
 /* line 158: */
PPEBSIM = Type ;
switch ( PPEBSIM.mode )
{ 
case 9: /* STRUCT(INT)  */
 /* line 160: */
QPEBSIM = GTAASIM_nullsvalue;
break;
case 8: /* STRUCT(INT)  */
 /* line 161: */
{ 
A_CALLPROC(NL(ILEBSIM_read_name),( &RPEBSIM),( &RPEBSIM,(NL(ILEBSIM_read_name)).nonlocals));
SPEBSIM_name = RPEBSIM;
 /* line 162: */
 /* line 163: */
if ( !TJAASIM_is_void(SPEBSIM_name) )
{ 
XPEBSIM = VPEBSIM ;
TPEBSIM.data[0] = A_UNITE(WPEBSIM,mode7,7,XPEBSIM);
ZPEBSIM = '\"' ;
TPEBSIM.data[1] = A_UNITE(YPEBSIM,mode6,6,ZPEBSIM);
 /* line 164: */
BQEBSIM = SPEBSIM_name.Value ;
TPEBSIM.data[2] = A_UNITE(AQEBSIM,mode7,7,BQEBSIM);
DQEBSIM = '\"' ;
TPEBSIM.data[3] = A_UNITE(CQEBSIM,mode6,6,DQEBSIM);
 /* line 165: */
UJBAOSL_oneline( A_HISVEC(EQEBSIM,TPEBSIM,4,A68_52 ), &FQEBSIM );
A_CALLPROC(NL(Flt),(FQEBSIM),(FQEBSIM,(NL(Flt)).nonlocals));
} 
 /* line 166: */
 /* line 167: */
 /* line 169: */
QPEBSIM = JTAASIM_voidsvalue;
} 
break;
case 6: /* REF STRUCT(MODE98,MODE98)  */
GQEBSIM_sf = (PPEBSIM.data.mode6);
 /* line 170: */
 /* line 171: */
{ 
A_CALLPROC(NL(ILEBSIM_read_name),( &HQEBSIM),( &HQEBSIM,(NL(ILEBSIM_read_name)).nonlocals));
if ( !WJAASIM_is_fn_arrow(HQEBSIM) )
{ 
A_CALLPROC(NL(OLEBSIM_put_back),(),((NL(OLEBSIM_put_back)).nonlocals));
} 
 /* line 172: */
GNEBSIM_make_query( (*(&(GQEBSIM_sf->From))), &JQEBSIM );
IQEBSIM.From = JQEBSIM;
 /* line 173: */
A_CALLPROC(NL(MPEBSIM_read_value),((*(&(GQEBSIM_sf->To))), &KQEBSIM),((*(&(GQEBSIM_sf->To))), &KQEBSIM,(NL(MPEBSIM_read_value)).nonlocals));
IQEBSIM.To = KQEBSIM;
 /* line 175: */
LQEBSIM = A_HEAP(A68_112 ) ;
(*LQEBSIM) = IQEBSIM ;
QPEBSIM = A_UNITE(MQEBSIM,mode7,7,LQEBSIM);
} 
break;
case 7: /* REF STRUCT(MODE98,REF MODE101)  */
NQEBSIM_sstruct = (PPEBSIM.data.mode7);
 /* line 176: */
{ 
OQEBSIM_ans = DTAASIM_nilsvst;
 /* line 177: */
PQEBSIM_end = (&OQEBSIM_ans);
 /* line 178: */
QQEBSIM_ptr = NQEBSIM_sstruct;
 /* line 179: */
for ( ;; )
{ 
 /* line 180: */
if ( !((QQEBSIM_ptr!=WSAASIM_nilsst)) ) break;
 /* line 181: */
A_CALLPROC(NL(MPEBSIM_read_value),((*(&(QQEBSIM_ptr->T))), &SQEBSIM),((*(&(QQEBSIM_ptr->T))), &SQEBSIM,(NL(MPEBSIM_read_value)).nonlocals));
RQEBSIM.Head = SQEBSIM;
RQEBSIM.Tail = DTAASIM_nilsvst;
TQEBSIM = A_HEAP(A68_111 ) ;
(*TQEBSIM) = RQEBSIM ;
PQEBSIM_end = (&(((*PQEBSIM_end) = TQEBSIM)->Tail));
 /* line 182: */
 /* line 183: */
QQEBSIM_ptr = (*(&(QQEBSIM_ptr->Rest)));
}
 /* line 184: */
 /* line 185: */
 /* line 187: */
QPEBSIM = A_UNITE(UQEBSIM,mode6,6,OQEBSIM_ans);
} 
break;
case 4: /* REF STRUCT(INT,MODE98)  */
VQEBSIM_sr = (PPEBSIM.data.mode4);
 /* line 188: */
{ 
WQEBSIM_ans = DTAASIM_nilsvst;
 /* line 189: */
XQEBSIM_end = (&WQEBSIM_ans);
 /* line 190: */
 /* line 191: */
YQEBSIM = (*(&(VQEBSIM_sr->No)));
for ( ZQEBSIM = 1;
ZQEBSIM <= YQEBSIM;
ZQEBSIM += 1 )
{ 
 /* line 192: */
A_CALLPROC(NL(MPEBSIM_read_value),((*(&(VQEBSIM_sr->Type))), &BREBSIM),((*(&(VQEBSIM_sr->Type))), &BREBSIM,(NL(MPEBSIM_read_value)).nonlocals));
AREBSIM.Head = BREBSIM;
AREBSIM.Tail = DTAASIM_nilsvst;
 /* line 193: */
CREBSIM = A_HEAP(A68_111 ) ;
(*CREBSIM) = AREBSIM ;
XQEBSIM_end = (&(((*XQEBSIM_end) = CREBSIM)->Tail));
}
 /* line 194: */
 /* line 195: */
 /* line 197: */
QPEBSIM = A_UNITE(DREBSIM,mode6,6,WQEBSIM_ans);
} 
break;
default: 
{ 
A_CALLPROC(NL(ILEBSIM_read_name),( &EREBSIM),( &EREBSIM,(NL(ILEBSIM_read_name)).nonlocals));
FREBSIM_name = EREBSIM;
 /* line 198: */
 /* line 199: */
if ( QJAASIM_is_query(FREBSIM_name) )
{ 
 /* line 200: */
GNEBSIM_make_query( Type, &GREBSIM );
QPEBSIM = GREBSIM;
} 
else
{ 
 /* line 201: */
HREBSIM = Type ;
switch ( HREBSIM.mode )
{ 
case 2: /* REF STRUCT(REF MODE26,INT,INT)  */
IREBSIM_si = (HREBSIM.data.mode2);
 /* line 202: */
{ 
A_CALLPROC(NL(VNEBSIM_check_ident),(FREBSIM_name, Type, &JREBSIM),(FREBSIM_name, Type, &JREBSIM,(NL(VNEBSIM_check_ident)).nonlocals));
KREBSIM_int_val = JREBSIM;
 /* line 203: */
 /* line 204: */
 /* line 205: */
if ( CKAASIM_is_slash_int(KREBSIM_int_val) )
{ 
 /* line 206: */
LREBSIM_int = XVCAOST_charstoint(KREBSIM_int_val.Value, A_HEAP(A68_BOOL ));
 /* line 207: */
MREBSIM = (LREBSIM_int<(*(&(IREBSIM_si->Lwb))));
if ( ! MREBSIM )
{ /* line 208: */
MREBSIM = (LREBSIM_int>(*(&(IREBSIM_si->Upb))));
}
if ( MREBSIM )
{ 
PREBSIM = FREBSIM_name.Value ;
NREBSIM.data[0] = A_UNITE(OREBSIM,mode7,7,PREBSIM);
RREBSIM = '/' ;
NREBSIM.data[1] = A_UNITE(QREBSIM,mode6,6,RREBSIM);
 /* line 209: */
NREBSIM.data[2] = A_UNITE(SREBSIM,mode1,1,LREBSIM_int);
 /* line 210: */
WREBSIM = UREBSIM ;
NREBSIM.data[3] = A_UNITE(VREBSIM,mode7,7,WREBSIM);
YREBSIM = (*(&(IREBSIM_si->Lwb))) ;
NREBSIM.data[4] = A_UNITE(XREBSIM,mode1,1,YREBSIM);
 /* line 211: */
CSEBSIM = ASEBSIM ;
NREBSIM.data[5] = A_UNITE(BSEBSIM,mode7,7,CSEBSIM);
ESEBSIM = (*(&(IREBSIM_si->Upb))) ;
NREBSIM.data[6] = A_UNITE(DSEBSIM,mode1,1,ESEBSIM);
GSEBSIM = ']' ;
NREBSIM.data[7] = A_UNITE(FSEBSIM,mode6,6,GSEBSIM);
UJBAOSL_oneline( A_HISVEC(HSEBSIM,NREBSIM,8,A68_52 ), &ISEBSIM );
A_CALLPROC(NL(Flt),(ISEBSIM),(ISEBSIM,(NL(Flt)).nonlocals));
 /* line 212: */
 /* line 213: */
QPEBSIM = EMEBSIM_err;
} 
else
{ 
JSEBSIM.Type = IREBSIM_si;
 /* line 214: */
JSEBSIM.Value = LREBSIM_int;
 /* line 215: */
KSEBSIM = A_HEAP(A68_106 ) ;
(*KSEBSIM) = JSEBSIM ;
QPEBSIM = A_UNITE(LSEBSIM,mode2,2,KSEBSIM);
} 
} 
else
{ 
 /* line 216: */
 /* line 217: */
 /* line 219: */
A_CALLPROC(NL(HMEBSIM_wrong),(KREBSIM_int_val, NSEBSIM, &OSEBSIM),(KREBSIM_int_val, NSEBSIM, &OSEBSIM,(NL(HMEBSIM_wrong)).nonlocals));
QPEBSIM = OSEBSIM;
} 
} 
break;
case 3: /* REF STRUCT(REF MODE26,REF MODE26)  */
PSEBSIM_sc = (HREBSIM.data.mode3);
 /* line 220: */
{ 
A_CALLPROC(NL(VNEBSIM_check_ident),(FREBSIM_name, Type, &QSEBSIM),(FREBSIM_name, Type, &QSEBSIM,(NL(VNEBSIM_check_ident)).nonlocals));
RSEBSIM_char_val = QSEBSIM;
 /* line 221: */
 /* line 222: */
 /* line 223: */
if ( FKAASIM_is_prime_char(RSEBSIM_char_val) )
{ 
SSEBSIM = RSEBSIM_char_val.Value ;
TSEBSIM = 1 ;
USEBSIM_char = (*(&A_VINDEX(SSEBSIM,TSEBSIM)));
 /* line 224: */
 /* line 225: */
if ( !NNEBSIM_instring(USEBSIM_char, (*(&(PSEBSIM_sc->Char)))) )
{ 
XSEBSIM = FREBSIM_name.Value ;
VSEBSIM.data[0] = A_UNITE(WSEBSIM,mode7,7,XSEBSIM);
ZSEBSIM = '\'' ;
VSEBSIM.data[1] = A_UNITE(YSEBSIM,mode6,6,ZSEBSIM);
 /* line 226: */
VSEBSIM.data[2] = A_UNITE(ATEBSIM,mode6,6,USEBSIM_char);
ETEBSIM = CTEBSIM ;
VSEBSIM.data[3] = A_UNITE(DTEBSIM,mode7,7,ETEBSIM);
UJBAOSL_oneline( A_HISVEC(FTEBSIM,VSEBSIM,4,A68_52 ), &GTEBSIM );
A_CALLPROC(NL(Flt),(GTEBSIM),(GTEBSIM,(NL(Flt)).nonlocals));
 /* line 227: */
 /* line 228: */
QPEBSIM = EMEBSIM_err;
} 
else
{ 
HTEBSIM.Type = PSEBSIM_sc;
 /* line 229: */
HTEBSIM.Value = USEBSIM_char;
 /* line 230: */
ITEBSIM = A_HEAP(A68_107 ) ;
(*ITEBSIM) = HTEBSIM ;
QPEBSIM = A_UNITE(JTEBSIM,mode3,3,ITEBSIM);
} 
} 
else
{ 
 /* line 231: */
 /* line 232: */
 /* line 234: */
A_CALLPROC(NL(HMEBSIM_wrong),(RSEBSIM_char_val, LTEBSIM, &MTEBSIM),(RSEBSIM_char_val, LTEBSIM, &MTEBSIM,(NL(HMEBSIM_wrong)).nonlocals));
QPEBSIM = MTEBSIM;
} 
} 
break;
case 5: /* REF STRUCT(INT,MODE95)  */
NTEBSIM_ss = (HREBSIM.data.mode5);
 /* line 235: */
{ 
A_CALLPROC(NL(VNEBSIM_check_ident),(FREBSIM_name, Type, &OTEBSIM),(FREBSIM_name, Type, &OTEBSIM,(NL(VNEBSIM_check_ident)).nonlocals));
PTEBSIM_string = OTEBSIM;
 /* line 236: */
QTEBSIM_ctype = (*(&(NTEBSIM_ss->T)));
 /* line 237: */
 /* line 238: */
 /* line 239: */
if ( OEGAOST_is_quoted_string(PTEBSIM_string) )
{ 
RTEBSIM_upb = PTEBSIM_string.Value.upb;
 /* line 245: */
 /* line 246: */
STEBSIM = (RTEBSIM_upb>(*(&(NTEBSIM_ss->No))));
if ( ! STEBSIM )
{ /* line 247: */
TTEBSIM = !NNEBSIM_instring(' ', QTEBSIM_ctype.Char);
if ( TTEBSIM )
{TTEBSIM = (RTEBSIM_upb<(*(&(NTEBSIM_ss->No))));
}
 /* line 248: */
STEBSIM = TTEBSIM;
}
if ( STEBSIM )
{ 
WTEBSIM = FREBSIM_name.Value ;
UTEBSIM.data[0] = A_UNITE(VTEBSIM,mode7,7,WTEBSIM);
 /* line 249: */
YTEBSIM = '\"' ;
UTEBSIM.data[1] = A_UNITE(XTEBSIM,mode6,6,YTEBSIM);
 /* line 250: */
AUEBSIM = PTEBSIM_string.Value ;
UTEBSIM.data[2] = A_UNITE(ZTEBSIM,mode7,7,AUEBSIM);
 /* line 251: */
EUEBSIM = CUEBSIM ;
UTEBSIM.data[3] = A_UNITE(DUEBSIM,mode7,7,EUEBSIM);
GUEBSIM = (*(&(NTEBSIM_ss->No))) ;
UTEBSIM.data[4] = A_UNITE(FUEBSIM,mode1,1,GUEBSIM);
UJBAOSL_oneline( A_HISVEC(HUEBSIM,UTEBSIM,5,A68_52 ), &IUEBSIM );
A_CALLPROC(NL(SLEBSIM_new_flt),(IUEBSIM),(IUEBSIM,(NL(SLEBSIM_new_flt)).nonlocals));
 /* line 252: */
 /* line 253: */
QPEBSIM = EMEBSIM_err;
} 
else
{ 
JUEBSIM_correct = A68_TRUE;
 /* line 254: */
LUEBSIM = RTEBSIM_upb;
for ( KUEBSIM_i = 1;
KUEBSIM_i <= LUEBSIM;
KUEBSIM_i += 1 )
{ 
 /* line 255: */
if ( !(JUEBSIM_correct) ) break;
MUEBSIM = PTEBSIM_string.Value ;
NUEBSIM_char = (*(&A_VINDEX(MUEBSIM,KUEBSIM_i)));
 /* line 256: */
 /* line 257: */
if ( !NNEBSIM_instring(NUEBSIM_char, QTEBSIM_ctype.Char) )
{ 
QUEBSIM = FREBSIM_name.Value ;
OUEBSIM.data[0] = A_UNITE(PUEBSIM,mode7,7,QUEBSIM);
 /* line 258: */
SUEBSIM = '\'' ;
OUEBSIM.data[1] = A_UNITE(RUEBSIM,mode6,6,SUEBSIM);
OUEBSIM.data[2] = A_UNITE(TUEBSIM,mode6,6,NUEBSIM_char);
 /* line 259: */
XUEBSIM = VUEBSIM ;
OUEBSIM.data[3] = A_UNITE(WUEBSIM,mode7,7,XUEBSIM);
BVEBSIM = ZUEBSIM ;
OUEBSIM.data[4] = A_UNITE(AVEBSIM,mode7,7,BVEBSIM);
UJBAOSL_oneline( A_HISVEC(CVEBSIM,OUEBSIM,5,A68_52 ), &DVEBSIM );
A_CALLPROC(NL(Flt),(DVEBSIM),(DVEBSIM,(NL(Flt)).nonlocals));
 /* line 260: */
 /* line 261: */
 /* line 262: */
JUEBSIM_correct = A68_FALSE;
} 
}
 /* line 263: */
 /* line 264: */
if ( JUEBSIM_correct )
{ 
EVEBSIM_ans = (A_HEAP(A68_108 ));
 /* line 265: */
FVEBSIM.Type = NTEBSIM_ss;
A_CLOSURE( HVEBSIM_generator, IVEBSIM_generator, JVEBSIM_generator );
(( JVEBSIM_generator * ) ( HVEBSIM_generator.nonlocals )) -> NTEBSIM_ss = NTEBSIM_ss;
A_CALLPROC(HVEBSIM_generator,(A68_FALSE, &MVEBSIM),(A68_FALSE, &MVEBSIM,(HVEBSIM_generator).nonlocals));
FVEBSIM.Value = MVEBSIM;
(*EVEBSIM_ans) = FVEBSIM;
 /* line 266: */
NVEBSIM = (*(&(EVEBSIM_ans->Value))) ;
PVEBSIM = A_VTRIM(OVEBSIM,(NVEBSIM),A_VTSCRIPT(&(OVEBSIM.upb),(NVEBSIM).upb,1,RTEBSIM_upb)) ;
QVEBSIM = PTEBSIM_string.Value ;
A_VASSIGN2(QVEBSIM,PVEBSIM,A68_CHAR );
 /* line 267: */
 /* line 268: */
SVEBSIM = (*(&(EVEBSIM_ans->Value))) ;
UVEBSIM = A_VTRIM(TVEBSIM,(SVEBSIM),A_VTSCRIPT(&(TVEBSIM.upb),(SVEBSIM).upb,(RTEBSIM_upb+1),(SVEBSIM).upb)) ;
VVEBSIM = UVEBSIM.upb -1;
RVEBSIM_c = UVEBSIM.data;
for (;VVEBSIM-- >= 0;
(RVEBSIM_c++
) )
{
(*RVEBSIM_c) = ' ';
}
 /* line 269: */
 /* line 270: */
 /* line 271: */
QPEBSIM = A_UNITE(WVEBSIM,mode4,4,EVEBSIM_ans);
} 
else
{ 
 /* line 272: */
 /* line 273: */
QPEBSIM = EMEBSIM_err;
} 
} 
} 
else
{ 
 /* line 274: */
 /* line 275: */
 /* line 277: */
A_CALLPROC(NL(HMEBSIM_wrong),(PTEBSIM_string, YVEBSIM, &ZVEBSIM),(PTEBSIM_string, YVEBSIM, &ZVEBSIM,(NL(HMEBSIM_wrong)).nonlocals));
QPEBSIM = ZVEBSIM;
} 
} 
break;
case 1: /* REF STRUCT(REF MODE26,MODE98,REF MODE97)  */
AWEBSIM_se = (HREBSIM.data.mode1);
 /* line 278: */
{ 
 /* line 279: */
 /* line 280: */
if ( ZJAASIM_is_val_id(FREBSIM_name) )
{ 
BWEBSIM_tag = 1;
 /* line 281: */
CWEBSIM_ptr = AWEBSIM_se;
 /* line 282: */
for ( ;; )
{ 
 /* line 283: */
DWEBSIM = (CWEBSIM_ptr!=VSAASIM_nilsenum);
if ( DWEBSIM )
{ /* line 284: */
DWEBSIM = A_VC_NE((*(&(CWEBSIM_ptr->Id))),FREBSIM_name.Value);
}
if ( !(DWEBSIM) ) break;
CWEBSIM_ptr = (*(&(CWEBSIM_ptr->Rest)));
BWEBSIM_tag+=1;
}
 /* line 285: */
 /* line 286: */
if ( (CWEBSIM_ptr==VSAASIM_nilsenum) )
{ 
GWEBSIM = '\"' ;
EWEBSIM.data[0] = A_UNITE(FWEBSIM,mode6,6,GWEBSIM);
 /* line 288: */
IWEBSIM = FREBSIM_name.Value ;
EWEBSIM.data[1] = A_UNITE(HWEBSIM,mode7,7,IWEBSIM);
MWEBSIM = KWEBSIM ;
EWEBSIM.data[2] = A_UNITE(LWEBSIM,mode7,7,MWEBSIM);
UJBAOSL_oneline( A_HISVEC(NWEBSIM,EWEBSIM,3,A68_52 ), &OWEBSIM );
A_CALLPROC(NL(SLEBSIM_new_flt),(OWEBSIM),(OWEBSIM,(NL(SLEBSIM_new_flt)).nonlocals));
 /* line 289: */
 /* line 290: */
QPEBSIM = EMEBSIM_err;
} 
else
{ 
PWEBSIM.Type = AWEBSIM_se;
PWEBSIM.Tag = BWEBSIM_tag;
 /* line 291: */
A_CALLPROC(NL(MPEBSIM_read_value),((*(&(CWEBSIM_ptr->T))), &QWEBSIM),((*(&(CWEBSIM_ptr->T))), &QWEBSIM,(NL(MPEBSIM_read_value)).nonlocals));
PWEBSIM.Assoc = QWEBSIM;
 /* line 292: */
RWEBSIM = A_HEAP(A68_109 ) ;
(*RWEBSIM) = PWEBSIM ;
QPEBSIM = A_UNITE(SWEBSIM,mode5,5,RWEBSIM);
} 
} 
else
{ 
 /* line 293: */
 /* line 294: */
 /* line 295: */
 /* line 296: */
 /* line 297: */
 /* line 298: */
A_CALLPROC(NL(HMEBSIM_wrong),(FREBSIM_name, UWEBSIM, &VWEBSIM),(FREBSIM_name, UWEBSIM, &VWEBSIM,(NL(HMEBSIM_wrong)).nonlocals));
QPEBSIM = VWEBSIM;
} 
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
} 
break;
} 
A_PROC_EXIT(read_value);
*ReturnedValue = (QPEBSIM);
return;
} 
#undef NL
 /* line 66: */

A68_VOID  FLEBSIM_get_values(A68_188  Names, A68_INT * Last_index, A68_98  Type, A68_INT  Cycle, A68_36  Flt, A68_110  *ReturnedValue)
{ 
A68_BOOL  GLEBSIM_cycling;
A68_INT  HLEBSIM_index;
A68_232  ILEBSIM_read_name;   /* proc value of non-global proc */
A68_151  OLEBSIM_put_back;   /* proc value of non-global proc */
A68_36  SLEBSIM_new_flt;   /* proc value of non-global proc */
A68_235  HMEBSIM_wrong;   /* proc value of non-global proc */
A68_241  VNEBSIM_check_ident;   /* proc value of non-global proc */
A68_239  MPEBSIM_read_value;   /* proc value of non-global proc */
A68_110  WWEBSIM;  /* avoid structure result */
A68_110  XWEBSIM_ans;
A68_BOOL  YWEBSIM;  /* optbool result */
A68_187  ZWEBSIM;  /* avoid structure result */
A68_187  AXEBSIM_first;
A68_BOOL  BXEBSIM;  /* optbool result */
A68_187  CXEBSIM;  /* avoid structure result */
A68_187  DXEBSIM_second;
A68_259  EXEBSIM;  /* collateral clause result */
A68_52  FXEBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  GXEBSIM;  /* YIELD */
A68_52  HXEBSIM;  /* OPERATORS - mode -> union mode */
A68_CHAR  IXEBSIM;  /* YIELD */
A68_52  JXEBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  KXEBSIM;  /* YIELD */
A68_VC  LXEBSIM;  /* clause result */
A68_85  MXEBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  NXEBSIM;  /* avoid structure result */
A68_259  OXEBSIM;  /* collateral clause result */
A68_52  PXEBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  QXEBSIM;  /* YIELD */
A68_52  RXEBSIM;  /* OPERATORS - mode -> union mode */
A68_CHAR  SXEBSIM;  /* YIELD */
A68_52  TXEBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  UXEBSIM;  /* YIELD */
A68_85  VXEBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  WXEBSIM;  /* avoid structure result */
A68_237  XXEBSIM;  /* collateral clause result */
A68_52  YXEBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  ZXEBSIM;  /* YIELD */
A68_52  AYEBSIM;  /* OPERATORS - mode -> union mode */
A68_CHAR  BYEBSIM;  /* YIELD */
A68_52  CYEBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  DYEBSIM;  /* YIELD */
A68_52  EYEBSIM;  /* OPERATORS - mode -> union mode */
A68_CHAR  FYEBSIM;  /* YIELD */
A68_85  GYEBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  HYEBSIM;  /* avoid structure result */
A68_VC  IYEBSIM_val;
A68_259  JYEBSIM;  /* collateral clause result */
A68_52  MYEBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  NYEBSIM;  /* YIELD */
A68_52  OYEBSIM;  /* OPERATORS - mode -> union mode */
A68_52  RYEBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  SYEBSIM;  /* YIELD */
A68_85  TYEBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  UYEBSIM;  /* avoid structure result */
A68_110  VYEBSIM;  /* clause result */
A_PROC_ENTRY(get_values);
 /* line 67: */
 /* line 78: */
{ 
GLEBSIM_cycling = A68_FALSE;
 /* line 79: */
HLEBSIM_index = (*Last_index);
 /* line 81: */
 /* line 82: */
A_CLOSURE( ILEBSIM_read_name, JLEBSIM_read_name, KLEBSIM_read_name );
(( KLEBSIM_read_name * ) ( ILEBSIM_read_name.nonlocals )) -> HLEBSIM_index = (&HLEBSIM_index);
(( KLEBSIM_read_name * ) ( ILEBSIM_read_name.nonlocals )) -> Names = Names;
(( KLEBSIM_read_name * ) ( ILEBSIM_read_name.nonlocals )) -> Cycle = Cycle;
(( KLEBSIM_read_name * ) ( ILEBSIM_read_name.nonlocals )) -> GLEBSIM_cycling = (&GLEBSIM_cycling);
(( KLEBSIM_read_name * ) ( ILEBSIM_read_name.nonlocals )) -> Last_index = Last_index;
(( KLEBSIM_read_name * ) ( ILEBSIM_read_name.nonlocals )) -> ILEBSIM_read_name = ILEBSIM_read_name;
 /* line 93: */
A_CLOSURE( OLEBSIM_put_back, PLEBSIM_put_back, QLEBSIM_put_back );
(( QLEBSIM_put_back * ) ( OLEBSIM_put_back.nonlocals )) -> HLEBSIM_index = (&HLEBSIM_index);
 /* line 95: */
A_CLOSURE( SLEBSIM_new_flt, TLEBSIM_new_flt, ULEBSIM_new_flt );
(( ULEBSIM_new_flt * ) ( SLEBSIM_new_flt.nonlocals )) -> Flt = Flt;
(( ULEBSIM_new_flt * ) ( SLEBSIM_new_flt.nonlocals )) -> GLEBSIM_cycling = (&GLEBSIM_cycling);
 /* line 101: */
 /* line 103: */
A_CLOSURE( HMEBSIM_wrong, IMEBSIM_wrong, JMEBSIM_wrong );
(( JMEBSIM_wrong * ) ( HMEBSIM_wrong.nonlocals )) -> SLEBSIM_new_flt = SLEBSIM_new_flt;
 /* line 112: */
 /* line 119: */
 /* line 127: */
A_CLOSURE( VNEBSIM_check_ident, WNEBSIM_check_ident, XNEBSIM_check_ident );
(( XNEBSIM_check_ident * ) ( VNEBSIM_check_ident.nonlocals )) -> SLEBSIM_new_flt = SLEBSIM_new_flt;
(( XNEBSIM_check_ident * ) ( VNEBSIM_check_ident.nonlocals )) -> ILEBSIM_read_name = ILEBSIM_read_name;
(( XNEBSIM_check_ident * ) ( VNEBSIM_check_ident.nonlocals )) -> HMEBSIM_wrong = HMEBSIM_wrong;
 /* line 156: */
A_CLOSURE( MPEBSIM_read_value, NPEBSIM_read_value, OPEBSIM_read_value );
(( OPEBSIM_read_value * ) ( MPEBSIM_read_value.nonlocals )) -> ILEBSIM_read_name = ILEBSIM_read_name;
(( OPEBSIM_read_value * ) ( MPEBSIM_read_value.nonlocals )) -> Flt = Flt;
(( OPEBSIM_read_value * ) ( MPEBSIM_read_value.nonlocals )) -> OLEBSIM_put_back = OLEBSIM_put_back;
(( OPEBSIM_read_value * ) ( MPEBSIM_read_value.nonlocals )) -> MPEBSIM_read_value = MPEBSIM_read_value;
(( OPEBSIM_read_value * ) ( MPEBSIM_read_value.nonlocals )) -> VNEBSIM_check_ident = VNEBSIM_check_ident;
(( OPEBSIM_read_value * ) ( MPEBSIM_read_value.nonlocals )) -> HMEBSIM_wrong = HMEBSIM_wrong;
(( OPEBSIM_read_value * ) ( MPEBSIM_read_value.nonlocals )) -> SLEBSIM_new_flt = SLEBSIM_new_flt;
 /* line 300: */
A_CALLPROC(MPEBSIM_read_value,(Type, &WWEBSIM),(Type, &WWEBSIM,(MPEBSIM_read_value).nonlocals));
XWEBSIM_ans = WWEBSIM;
 /* line 301: */
 /* line 302: */
if ( (Cycle==ZKEBSIM_nocycle_nocheck) )
{ 
 /* line 303: */
(*Last_index) = HLEBSIM_index;
} 
else
{ 
YWEBSIM = !GLEBSIM_cycling;
if ( YWEBSIM )
{ /* line 304: */
YWEBSIM = (HLEBSIM_index<Names.upb);
}
if ( YWEBSIM )
{ 
A_CALLPROC(ILEBSIM_read_name,( &ZWEBSIM),( &ZWEBSIM,(ILEBSIM_read_name).nonlocals));
AXEBSIM_first = ZWEBSIM;
 /* line 305: */
 /* line 306: */
BXEBSIM = ZJAASIM_is_val_id(AXEBSIM_first);
if ( BXEBSIM )
{ /* line 307: */
BXEBSIM = (HLEBSIM_index<Names.upb);
}
if ( BXEBSIM )
{ 
A_CALLPROC(ILEBSIM_read_name,( &CXEBSIM),( &CXEBSIM,(ILEBSIM_read_name).nonlocals));
DXEBSIM_second = CXEBSIM;
 /* line 308: */
 /* line 309: */
if ( CKAASIM_is_slash_int(DXEBSIM_second) )
{ 
GXEBSIM = AXEBSIM_first.Value ;
EXEBSIM.data[0] = A_UNITE(FXEBSIM,mode7,7,GXEBSIM);
IXEBSIM = '/' ;
EXEBSIM.data[1] = A_UNITE(HXEBSIM,mode6,6,IXEBSIM);
KXEBSIM = DXEBSIM_second.Value ;
EXEBSIM.data[2] = A_UNITE(JXEBSIM,mode7,7,KXEBSIM);
 /* line 310: */
UJBAOSL_oneline( A_HISVEC(MXEBSIM,EXEBSIM,3,A68_52 ), &NXEBSIM );
LXEBSIM = NXEBSIM;
} 
else
{ 
 /* line 311: */
if ( FKAASIM_is_prime_char(DXEBSIM_second) )
{ 
QXEBSIM = AXEBSIM_first.Value ;
OXEBSIM.data[0] = A_UNITE(PXEBSIM,mode7,7,QXEBSIM);
SXEBSIM = '\'' ;
OXEBSIM.data[1] = A_UNITE(RXEBSIM,mode6,6,SXEBSIM);
UXEBSIM = DXEBSIM_second.Value ;
OXEBSIM.data[2] = A_UNITE(TXEBSIM,mode7,7,UXEBSIM);
 /* line 312: */
UJBAOSL_oneline( A_HISVEC(VXEBSIM,OXEBSIM,3,A68_52 ), &WXEBSIM );
LXEBSIM = WXEBSIM;
} 
else
{ 
 /* line 313: */
if ( OEGAOST_is_quoted_string(DXEBSIM_second) )
{ 
ZXEBSIM = AXEBSIM_first.Value ;
XXEBSIM.data[0] = A_UNITE(YXEBSIM,mode7,7,ZXEBSIM);
BYEBSIM = '\"' ;
XXEBSIM.data[1] = A_UNITE(AYEBSIM,mode6,6,BYEBSIM);
DYEBSIM = DXEBSIM_second.Value ;
XXEBSIM.data[2] = A_UNITE(CYEBSIM,mode7,7,DYEBSIM);
FYEBSIM = '\"' ;
XXEBSIM.data[3] = A_UNITE(EYEBSIM,mode6,6,FYEBSIM);
 /* line 314: */
 /* line 315: */
UJBAOSL_oneline( A_HISVEC(GYEBSIM,XXEBSIM,4,A68_52 ), &HYEBSIM );
LXEBSIM = HYEBSIM;
} 
else
{ 
 /* line 316: */
 /* line 317: */
LXEBSIM = AXEBSIM_first.Value;
} 
} 
} 
} 
else
{ 
LXEBSIM = AXEBSIM_first.Value;
} 
IYEBSIM_val = LXEBSIM;
 /* line 318: */
NYEBSIM = LYEBSIM ;
JYEBSIM.data[0] = A_UNITE(MYEBSIM,mode7,7,NYEBSIM);
JYEBSIM.data[1] = A_UNITE(OYEBSIM,mode7,7,IYEBSIM_val);
SYEBSIM = QYEBSIM ;
JYEBSIM.data[2] = A_UNITE(RYEBSIM,mode7,7,SYEBSIM);
 /* line 319: */
UJBAOSL_oneline( A_HISVEC(TYEBSIM,JYEBSIM,3,A68_52 ), &UYEBSIM );
A_CALLPROC(Flt,(UYEBSIM),(UYEBSIM,(Flt).nonlocals));
} 
} 
 /* line 320: */
 /* line 321: */
 /* line 323: */
VYEBSIM = XWEBSIM_ans;
} 
A_PROC_EXIT(get_values);
*ReturnedValue = (VYEBSIM);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void SKEBSIM(void)   /* initialise DECS simpoke */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259R","./a68files/simpoke.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/simreader.m","/u/model/ella/ostools/assoc/mfiles/kernelreader.m","/u/model/ella/ostools/assoc/mfiles/commandsyntax.m","/u/model/ella/ostools/assoc/mfiles/basics.m","./mfiles/kernel.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
WAAASIM();   /* USE simreader */
TXEAOST();   /* USE kernelreader */
LRAAOST();   /* USE commandsyntax */
JSCAOST();   /* USE basics */
XWBBSIM();   /* USE kernel */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/sim/assoc/./a68files/simpoke.a68";
A_config.translation_time = "Tue Apr  4 11:14:27 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "RKEBSIM (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 11:14:27 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS simpoke);
UEAALIB_a68config(LGAALIB_configinfo, WKEBSIM);
 /* line 62: */
 /* line 65: */
 /* line 324: */
A_PROC_EXIT(DECS simpoke);
} 
#undef NL
/* end of translation of ./a68files/simpoke.a68 */
