
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
/* UNAME:VYEBSIM */
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

A_PROCEDURE(A68_VOID ,A68t184,(struct A68t151 ),(struct A68t151 ,void *));
typedef struct A68t184  A68_184 ;    /* PROC(MODE151) VOID */

A_PROCEDURE(A68_VOID ,A68t185,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t185  A68_185 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,57,A68t186);
typedef struct A68t186  A68_186 ;    /* STRUCT 57 CHAR */
struct A68t187{
A68_VC  Id;
A68_VC  Fullid;
A68_INT  Action;
A_PAD_INT(PAD_46)
A68_INT  Condition;
A_PAD_INT(PAD_47)
struct A68t32  Columns;
struct A68t32  Sizes;
struct A68t124  Location;
A68_INT  Keepnumber;
A_PAD_INT(PAD_48)
A68_VC  Lastvalues;
A68_VC  Testvalues;
A68_VC  Workspace;
struct A68t110 * Decoded;
A68_INT  Flagaddress;
A_PAD_INT(PAD_49)
};
typedef struct A68t187  A68_187 ;    /* STRUCT(REF MODE26,REF MODE26,INT,INT,REF MODE32,REF MODE32,MODE124,INT,REF MODE26,REF MODE26,REF MODE26,REF MODE110,INT)  */
struct A68t188{
struct A68t187  Monitor;
A68_INT  Handle;
A_PAD_INT(PAD_50)
struct A68t188 * Rest;
};
typedef struct A68t188  A68_188 ;    /* STRUCT(MODE187,INT,REF MODE188)  */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from basics --- */
/* --- End of imports from basics --- */


/* --- Imports from kernel --- */
/* --- End of imports from kernel --- */


/* --- Imports from putstrings --- */
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void JSCAOST(void);   /* basics */
extern void XWBBSIM(void);   /* kernel */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_186   ZYEBSIM = {"$Id: simmonmode.a68,v 34.2 1995/03/29 13:05:00 ella Exp $"}; 
A_GISVEC(A68_VC ,AZEBSIM,ZYEBSIM,57)
#define BZEBSIM_noaction 0
#define CZEBSIM_monitor 1
#define DZEBSIM_display 2
#define EZEBSIM_stop 3
#define FZEBSIM_keep 4
#define GZEBSIM_nocondition 0
#define HZEBSIM_always 1
#define IZEBSIM_changes 2
#define JZEBSIM_equals 3
#define KZEBSIM_becomes 4
A68_VC  MZEBSIM_novalue;
A68_188 * NZEBSIM_nilmonitorlist;
static A68_INT  OZEBSIM_seed;

A68_INT  PZEBSIM_newhandle(void);

A68_INT  PZEBSIM_newhandle(void)
{ 
A68_INT  QZEBSIM;  /* clause result */
A_PROC_ENTRY(newhandle);
QZEBSIM = OZEBSIM_seed+=1;
A_PROC_EXIT(newhandle);
return( QZEBSIM );
} 
#undef NL
 /* line 1: */
 /* line 4: */
void WYEBSIM(void)   /* initialise DECS simmonmode */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259R","./a68files/simmonmode.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","/u/model/ella/ostools/assoc/mfiles/basics.m","./mfiles/kernel.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_VC  LZEBSIM;  /* OPERATORS - nil -> mode */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
JSCAOST();   /* USE basics */
XWBBSIM();   /* USE kernel */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/sim/assoc/./a68files/simmonmode.a68";
A_config.translation_time = "Tue Apr  4 11:14:34 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "VYEBSIM (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 11:14:34 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS simmonmode);
UEAALIB_a68config(LGAALIB_configinfo, AZEBSIM);
 /* line 90: */
 /* line 108: */
 /* line 111: */
 /* line 112: */
 /* line 113: */
 /* line 114: */
 /* line 115: */
 /* line 116: */
 /* line 119: */
 /* line 120: */
 /* line 121: */
 /* line 122: */
 /* line 123: */
 /* line 129: */
MZEBSIM_novalue = (A_VVAC(LZEBSIM));
 /* line 131: */
 /* line 135: */
 /* line 140: */
NZEBSIM_nilmonitorlist = (A68_188 *)A68_NIL;
 /* line 147: */
OZEBSIM_seed = 0;
 /* line 149: */
 /* line 151: */
 /* line 153: */
 /* line 161: */
/*SKIP*/;
A_PROC_EXIT(DECS simmonmode);
} 
#undef NL
/* end of translation of ./a68files/simmonmode.a68 */
