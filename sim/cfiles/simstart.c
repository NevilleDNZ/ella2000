
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
/* UNAME:WXGBSIM */
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
struct A68t115{
A68_INT  Fn;
A_PAD_INT(PAD_20)
A68_INT  Instance;
A_PAD_INT(PAD_21)
};
typedef struct A68t115  A68_115 ;    /* STRUCT(INT,INT)  */
struct A68t116{
struct A68t117 * Wire;
A68_INT  Instance;
A_PAD_INT(PAD_22)
};
typedef struct A68t116  A68_116 ;    /* STRUCT(REF MODE117,INT)  */
struct A68t114 { A68_INT mode; union {
struct A68t115  mode1;
struct A68t116  mode2;
} data; };
typedef struct A68t114  A68_114 ;    /* UNION(MODE115,MODE116)  */
struct A68t93{
struct A68t114  Node;
A68_INT  Circuit;
A_PAD_INT(PAD_23)
A68_INT  Base;
A_PAD_INT(PAD_24)
};
typedef struct A68t93  A68_93 ;    /* STRUCT(MODE114,INT,INT)  */
struct A68t92{
A68_VC  Id;
A68_VC  Fullid;
A68_INT  Action;
A_PAD_INT(PAD_25)
A68_INT  Condition;
A_PAD_INT(PAD_26)
struct A68t32  Columns;
struct A68t32  Sizes;
struct A68t93  Location;
A68_INT  Keepnumber;
A_PAD_INT(PAD_27)
A68_VC  Lastvalues;
A68_VC  Testvalues;
A68_VC  Workspace;
struct A68t94 * Decoded;
A68_INT  Flagaddress;
A_PAD_INT(PAD_28)
};
typedef struct A68t92  A68_92 ;    /* STRUCT(REF MODE26,REF MODE26,INT,INT,REF MODE32,REF MODE32,MODE93,INT,REF MODE26,REF MODE26,REF MODE26,REF MODE94,INT)  */
struct A68t102{
A68_INT  Svvoid;
A_PAD_INT(PAD_29)
};
typedef struct A68t102  A68_102 ;    /* STRUCT(INT)  */
struct A68t103{
A68_INT  Svnull;
A_PAD_INT(PAD_30)
};
typedef struct A68t103  A68_103 ;    /* STRUCT(INT)  */
struct A68t94 { A68_INT mode; union {
struct A68t95 * mode1;
struct A68t96 * mode2;
struct A68t97 * mode3;
struct A68t98 * mode4;
struct A68t99 * mode5;
struct A68t100 * mode6;
struct A68t101 * mode7;
struct A68t102  mode8;
struct A68t103  mode9;
} data; };
typedef struct A68t94  A68_94 ;    /* UNION(REF MODE95,REF MODE96,REF MODE97,REF MODE98,REF MODE99,REF MODE100,REF MODE101,MODE102,MODE103)  */
struct A68t112{
A68_INT  Svoid;
A_PAD_INT(PAD_31)
};
typedef struct A68t112  A68_112 ;    /* STRUCT(INT)  */
struct A68t113{
A68_INT  Snull;
A_PAD_INT(PAD_32)
};
typedef struct A68t113  A68_113 ;    /* STRUCT(INT)  */
struct A68t105 { A68_INT mode; union {
struct A68t104 * mode1;
struct A68t106 * mode2;
struct A68t107 * mode3;
struct A68t108 * mode4;
struct A68t109 * mode5;
struct A68t110 * mode6;
struct A68t111 * mode7;
struct A68t112  mode8;
struct A68t113  mode9;
} data; };
typedef struct A68t105  A68_105 ;    /* UNION(REF MODE104,REF MODE106,REF MODE107,REF MODE108,REF MODE109,REF MODE110,REF MODE111,MODE112,MODE113)  */
struct A68t95{
struct A68t105  Type;
};
typedef struct A68t95  A68_95 ;    /* STRUCT(MODE105)  */
struct A68t96{
struct A68t106 * Type;
A68_INT  Value;
A_PAD_INT(PAD_33)
};
typedef struct A68t96  A68_96 ;    /* STRUCT(REF MODE106,INT)  */
struct A68t97{
struct A68t107 * Type;
A68_CHAR  Value;
A_PAD_CHAR(PAD_34)
};
typedef struct A68t97  A68_97 ;    /* STRUCT(REF MODE107,CHAR)  */
struct A68t98{
struct A68t109 * Type;
A68_VC  Value;
};
typedef struct A68t98  A68_98 ;    /* STRUCT(REF MODE109,REF MODE26)  */
struct A68t99{
struct A68t104 * Type;
A68_INT  Tag;
A_PAD_INT(PAD_35)
struct A68t94  Assoc;
};
typedef struct A68t99  A68_99 ;    /* STRUCT(REF MODE104,INT,MODE94)  */
struct A68t100{
struct A68t94  Head;
struct A68t100 * Tail;
};
typedef struct A68t100  A68_100 ;    /* STRUCT(MODE94,REF MODE100)  */
struct A68t101{
struct A68t94  From;
struct A68t94  To;
};
typedef struct A68t101  A68_101 ;    /* STRUCT(MODE94,MODE94)  */
struct A68t104{
A68_VC  Id;
struct A68t105  T;
struct A68t104 * Rest;
};
typedef struct A68t104  A68_104 ;    /* STRUCT(REF MODE26,MODE105,REF MODE104)  */
struct A68t106{
A68_VC  Id;
A68_INT  Lwb;
A_PAD_INT(PAD_36)
A68_INT  Upb;
A_PAD_INT(PAD_37)
};
typedef struct A68t106  A68_106 ;    /* STRUCT(REF MODE26,INT,INT)  */
struct A68t107{
A68_VC  Id;
A68_VC  Char;
};
typedef struct A68t107  A68_107 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t108{
A68_INT  No;
A_PAD_INT(PAD_38)
struct A68t105  Type;
};
typedef struct A68t108  A68_108 ;    /* STRUCT(INT,MODE105)  */
struct A68t109{
A68_INT  No;
A_PAD_INT(PAD_39)
struct A68t107  T;
};
typedef struct A68t109  A68_109 ;    /* STRUCT(INT,MODE107)  */
struct A68t110{
struct A68t105  From;
struct A68t105  To;
};
typedef struct A68t110  A68_110 ;    /* STRUCT(MODE105,MODE105)  */
struct A68t111{
struct A68t105  T;
struct A68t111 * Rest;
};
typedef struct A68t111  A68_111 ;    /* STRUCT(MODE105,REF MODE111)  */
A_VECTOR(struct A68t119 ,A68t118);
typedef struct A68t118  A68_118 ;    /* VECTOR [] MODE119 */
struct A68t119{
A68_INT  Instoffset;
A_PAD_INT(PAD_40)
A68_INT  Offset;
A_PAD_INT(PAD_41)
A68_INT  Size;
A_PAD_INT(PAD_42)
};
typedef struct A68t119  A68_119 ;    /* STRUCT(INT,INT,INT)  */
struct A68t117{
struct A68t105  Type;
struct A68t118  Blocks;
};
typedef struct A68t117  A68_117 ;    /* STRUCT(MODE105,REF MODE118)  */
struct A68t120{
struct A68t92  Monitor;
A68_INT  Handle;
A_PAD_INT(PAD_43)
struct A68t120 * Rest;
};
typedef struct A68t120  A68_120 ;    /* STRUCT(MODE92,INT,REF MODE120)  */

A_PROCEDURE(struct A68t120 *,A68t121,(struct A68t120 *),(struct A68t120 *,void *));
typedef struct A68t121  A68_121 ;    /* PROC(REF MODE120) REF MODE120 */

A_PROCEDURE(A68_VOID ,A68t122,(struct A68t120 *),(struct A68t120 *,void *));
typedef struct A68t122  A68_122 ;    /* PROC(REF MODE120) VOID */

A_PROCEDURE(A68_VOID ,A68t123,(A68_INT ,struct A68t92 *,struct A68t94 *,A68_INT ),(A68_INT ,struct A68t92 *,struct A68t94 *,A68_INT ,void *));
typedef struct A68t123  A68_123 ;    /* PROC(INT,REF MODE92,REF MODE94,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t124,(void),(void *));
typedef struct A68t124  A68_124 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t125,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t125  A68_125 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_BOOL ,A68t126,(A68_INT ,struct A68t36 ),(A68_INT ,struct A68t36 ,void *));
typedef struct A68t126  A68_126 ;    /* PROC(INT,MODE36) BOOL */
struct A68t128 ;

A_PROCEDURE(struct A68t92 *,A68t127,(struct A68t128 *,A68_INT ,A68_INT ,struct A68t36 ),(struct A68t128 *,A68_INT ,A68_INT ,struct A68t36 ,void *));
typedef struct A68t127  A68_127 ;    /* PROC(REF MODE128,INT,INT,MODE36) REF MODE92 */
struct A68t128{
A68_INT  Repeat;
A_PAD_INT(PAD_44)
A68_VC  Name;
A68_VC  Aliasname;
A68_CHAR  Op;
A_PAD_CHAR(PAD_45)
struct A68t129 * Bind;
struct A68t128 * Rest;
};
typedef struct A68t128  A68_128 ;    /* STRUCT(INT,REF MODE26,REF MODE26,CHAR,REF MODE129,REF MODE128)  */
struct A68t129{
A68_VC  Uname;
A68_VC  Lname;
struct A68t93 * Node;
};
typedef struct A68t129  A68_129 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE93)  */

A_PROCEDURE(A68_INT ,A68t130,(struct A68t92 *),(struct A68t92 *,void *));
typedef struct A68t130  A68_130 ;    /* PROC(REF MODE92) INT */

A_PROCEDURE(A68_VOID ,A68t131,(A68_INT ,struct A68t36 ),(A68_INT ,struct A68t36 ,void *));
typedef struct A68t131  A68_131 ;    /* PROC(INT,MODE36) VOID */
struct A68t133 ;

A_PROCEDURE(A68_VOID ,A68t132,(struct A68t133 ,A68_INT ,A68_INT ,A68_BOOL ,struct A68t32 *),(struct A68t133 ,A68_INT ,A68_INT ,A68_BOOL ,struct A68t32 *,void *));
typedef struct A68t132  A68_132 ;    /* PROC(MODE133,INT,INT,BOOL) REF MODE32 */
struct A68t133 { A68_INT mode; union {
struct A68t128 * mode1;
A68_INT  mode2;
} data; };
typedef struct A68t133  A68_133 ;    /* UNION(REF MODE128,INT)  */

A_PROCEDURE(struct A68t92 *,A68t134,(A68_INT ,A68_BOOL ),(A68_INT ,A68_BOOL ,void *));
typedef struct A68t134  A68_134 ;    /* PROC(INT,BOOL) REF MODE92 */

A_PROCEDURE(A68_VOID ,A68t135,(A68_INT ,A68_BOOL ,struct A68t36 ),(A68_INT ,A68_BOOL ,struct A68t36 ,void *));
typedef struct A68t135  A68_135 ;    /* PROC(INT,BOOL,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t136,(struct A68t36 ),(struct A68t36 ,void *));
typedef struct A68t136  A68_136 ;    /* PROC(MODE36) VOID */
struct A68t138 ;

A_PROCEDURE(A68_BOOL ,A68t137,(A68_VC ,A68_INT ,struct A68t138 ),(A68_VC ,A68_INT ,struct A68t138 ,void *));
typedef struct A68t137  A68_137 ;    /* PROC(REF MODE26,INT,MODE138) BOOL */
struct A68t138 { A68_INT mode; union {
struct A68t128 * mode1;
A68_INT  mode2;
struct A68t95 * mode3;
struct A68t96 * mode4;
struct A68t97 * mode5;
struct A68t98 * mode6;
struct A68t99 * mode7;
struct A68t100 * mode8;
struct A68t101 * mode9;
struct A68t102  mode10;
struct A68t103  mode11;
} data; };
typedef struct A68t138  A68_138 ;    /* UNION(REF MODE128,INT,REF MODE95,REF MODE96,REF MODE97,REF MODE98,REF MODE99,REF MODE100,REF MODE101,MODE102,MODE103)  */

A_PROCEDURE(A68_BOOL ,A68t139,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t139  A68_139 ;    /* PROC(REF MODE26,INT) BOOL */

A_PROCEDURE(A68_BOOL ,A68t140,(A68_INT ),(A68_INT ,void *));
typedef struct A68t140  A68_140 ;    /* PROC(INT) BOOL */

A_PROCEDURE(A68_BOOL ,A68t141,(A68_VC ,A68_INT ,struct A68t128 **),(A68_VC ,A68_INT ,struct A68t128 **,void *));
typedef struct A68t141  A68_141 ;    /* PROC(REF MODE26,INT,REF REF MODE128) BOOL */

A_PROCEDURE(A68_BOOL ,A68t142,(A68_INT ,A68_INT *),(A68_INT ,A68_INT *,void *));
typedef struct A68t142  A68_142 ;    /* PROC(INT,REF INT) BOOL */

A_PROCEDURE(A68_BOOL ,A68t143,(A68_INT ,A68_INT ,struct A68t128 **),(A68_INT ,A68_INT ,struct A68t128 **,void *));
typedef struct A68t143  A68_143 ;    /* PROC(INT,INT,REF REF MODE128) BOOL */

A_PROCEDURE(A68_BOOL ,A68t144,(A68_VC ,A68_INT ,struct A68t94 *),(A68_VC ,A68_INT ,struct A68t94 *,void *));
typedef struct A68t144  A68_144 ;    /* PROC(REF MODE26,INT,REF MODE94) BOOL */

A_PROCEDURE(A68_BOOL ,A68t145,(A68_VC ,A68_INT ,A68_INT *),(A68_VC ,A68_INT ,A68_INT *,void *));
typedef struct A68t145  A68_145 ;    /* PROC(REF MODE26,INT,REF INT) BOOL */

A_PROCEDURE(A68_BOOL ,A68t146,(void),(void *));
typedef struct A68t146  A68_146 ;    /* PROC BOOL */

A_PROCEDURE(A68_VOID ,A68t147,(A68_VC *),(A68_VC *,void *));
typedef struct A68t147  A68_147 ;    /* PROC REF MODE26 */

A_PROCEDURE(struct A68t128 *,A68t148,(void),(void *));
typedef struct A68t148  A68_148 ;    /* PROC REF MODE128 */
struct A68t150 ;
struct A68t151 ;
struct A68t152 ;

A_PROCEDURE(A68_VOID ,A68t149,(struct A68t150 ,struct A68t43 ,struct A68t151 ,struct A68t152 ),(struct A68t150 ,struct A68t43 ,struct A68t151 ,struct A68t152 ,void *));
typedef struct A68t149  A68_149 ;    /* PROC(MODE150,MODE43,MODE151,MODE152) VOID */

A_PROCEDURE(A68_VOID ,A68t150,(struct A68t128 *),(struct A68t128 *,void *));
typedef struct A68t150  A68_150 ;    /* PROC(REF MODE128) VOID */

A_PROCEDURE(A68_VOID ,A68t151,(A68_INT ),(A68_INT ,void *));
typedef struct A68t151  A68_151 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_VOID ,A68t152,(struct A68t94 ),(struct A68t94 ,void *));
typedef struct A68t152  A68_152 ;    /* PROC(MODE94) VOID */
struct A68t154 ;
struct A68t155 ;

A_PROCEDURE(A68_VOID ,A68t153,(struct A68t148 ,struct A68t147 ,struct A68t154 ,struct A68t155 ),(struct A68t148 ,struct A68t147 ,struct A68t154 ,struct A68t155 ,void *));
typedef struct A68t153  A68_153 ;    /* PROC(MODE148,MODE147,MODE154,MODE155) VOID */

A_PROCEDURE(A68_INT ,A68t154,(void),(void *));
typedef struct A68t154  A68_154 ;    /* PROC INT */

A_PROCEDURE(A68_VOID ,A68t155,(struct A68t94 *),(struct A68t94 *,void *));
typedef struct A68t155  A68_155 ;    /* PROC MODE94 */

A_PROCEDURE(struct A68t128 *,A68t156,(A68_INT ,A68_VC ,struct A68t129 *),(A68_INT ,A68_VC ,struct A68t129 *,void *));
typedef struct A68t156  A68_156 ;    /* PROC(INT,REF MODE26,REF MODE129) REF MODE128 */

A_PROCEDURE(A68_VOID ,A68t157,(struct A68t128 *,A68_VC *),(struct A68t128 *,A68_VC *,void *));
typedef struct A68t157  A68_157 ;    /* PROC(REF MODE128) MODE26 */
struct A68t159 ;
struct A68t160 ;

A_PROCEDURE(struct A68t128 *,A68t158,(struct A68t159 ,A68_INT *,struct A68t160 ),(struct A68t159 ,A68_INT *,struct A68t160 ,void *));
typedef struct A68t158  A68_158 ;    /* PROC(REF MODE159,REF INT,MODE160) REF MODE128 */
A_VECTOR(struct A68t165 ,A68t159);
typedef struct A68t159  A68_159 ;    /* VECTOR [] MODE165 */
struct A68t165{
A68_INT  Sort;
A_PAD_INT(PAD_46)
A68_VC  Value;
};
typedef struct A68t165  A68_165 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t161 ;

A_PROCEDURE(A68_VOID ,A68t160,(struct A68t161 ,struct A68t46 ),(struct A68t161 ,struct A68t46 ,void *));
typedef struct A68t160  A68_160 ;    /* PROC(MODE161,MODE46) VOID */
struct A68t161{
A68_INT  Number;
A_PAD_INT(PAD_47)
struct A68t162 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_48)
};
typedef struct A68t161  A68_161 ;    /* STRUCT(INT,REF MODE162,BITS)  */
A_VECTOR(struct A68t164 ,A68t163);
typedef struct A68t163  A68_163 ;    /* VECTOR [] MODE164 */
struct A68t164{
struct A68t161  Msgno;
A68_VC  Text;
};
typedef struct A68t164  A68_164 ;    /* STRUCT(MODE161,REF MODE26)  */
struct A68t162{
A68_VC  Name;
struct A68t163  Messages;
};
typedef struct A68t162  A68_162 ;    /* STRUCT(REF MODE26,REF MODE163)  */

A_PROCEDURE(struct A68t128 *,A68t166,(A68_VC ,struct A68t36 ),(A68_VC ,struct A68t36 ,void *));
typedef struct A68t166  A68_166 ;    /* PROC(REF MODE26,MODE36) REF MODE128 */

A_PROCEDURE(struct A68t128 *,A68t167,(struct A68t128 *),(struct A68t128 *,void *));
typedef struct A68t167  A68_167 ;    /* PROC(REF MODE128) REF MODE128 */

A_PROCEDURE(struct A68t128 *,A68t168,(A68_VC ,struct A68t128 *),(A68_VC ,struct A68t128 *,void *));
typedef struct A68t168  A68_168 ;    /* PROC(REF MODE26,REF MODE128) REF MODE128 */

A_PROCEDURE(A68_VOID ,A68t169,(struct A68t128 *,A68_VC *),(struct A68t128 *,A68_VC *,void *));
typedef struct A68t169  A68_169 ;    /* PROC(REF MODE128) REF MODE26 */

A_PROCEDURE(struct A68t128 *,A68t170,(struct A68t128 *,A68_VC ),(struct A68t128 *,A68_VC ,void *));
typedef struct A68t170  A68_170 ;    /* PROC(REF MODE128,REF MODE26) REF MODE128 */

A_PROCEDURE(struct A68t93 *,A68t171,(struct A68t128 *,struct A68t36 ),(struct A68t128 *,struct A68t36 ,void *));
typedef struct A68t171  A68_171 ;    /* PROC(REF MODE128,MODE36) REF MODE93 */

A_PROCEDURE(A68_VOID ,A68t172,(A68_INT ,A68_BOOL *,A68_BOOL *,struct A68t36 ),(A68_INT ,A68_BOOL *,A68_BOOL *,struct A68t36 ,void *));
typedef struct A68t172  A68_172 ;    /* PROC(INT,REF BOOL,REF BOOL,MODE36) VOID */
struct A68t173 { A68_INT mode; union {
struct A68t104 * mode1;
struct A68t106 * mode2;
struct A68t107 * mode3;
} data; };
typedef struct A68t173  A68_173 ;    /* UNION(REF MODE104,REF MODE106,REF MODE107)  */
struct A68t174{
struct A68t117  Firstcell;
A68_INT  Lwb;
A_PAD_INT(PAD_49)
A68_INT  Ramsize;
A_PAD_INT(PAD_50)
A68_INT  Step;
A_PAD_INT(PAD_51)
};
typedef struct A68t174  A68_174 ;    /* STRUCT(MODE117,INT,INT,INT)  */
struct A68t175{
A68_VC  Uname;
A68_VC  Lname;
A68_INT  Node;
A_PAD_INT(PAD_52)
};
typedef struct A68t175  A68_175 ;    /* STRUCT(REF MODE26,REF MODE26,INT)  */
A_VECTOR(struct A68t175 ,A68t177);
typedef struct A68t177  A68_177 ;    /* VECTOR [] MODE175 */
struct A68t176{
struct A68t174 * Ram;
struct A68t117  Outputs;
A68_INT  Noinputs;
A_PAD_INT(PAD_53)
struct A68t177  Body;
};
typedef struct A68t176  A68_176 ;    /* STRUCT(REF MODE174,MODE117,INT,REF MODE177)  */
struct A68t178 { A68_INT mode; union {
struct A68t115  mode1;
struct A68t117  mode2;
} data; };
typedef struct A68t178  A68_178 ;    /* UNION(MODE115,MODE117)  */

A_PROCEDURE(A68_BOOL ,A68t179,(struct A68t117 ,struct A68t117 ),(struct A68t117 ,struct A68t117 ,void *));
typedef struct A68t179  A68_179 ;    /* PROC(MODE117,MODE117) BOOL */

A_PROCEDURE(A68_BOOL ,A68t180,(struct A68t115 ,struct A68t115 ),(struct A68t115 ,struct A68t115 ,void *));
typedef struct A68t180  A68_180 ;    /* PROC(MODE115,MODE115) BOOL */

A_PROCEDURE(A68_BOOL ,A68t181,(struct A68t116 ,struct A68t116 ),(struct A68t116 ,struct A68t116 ,void *));
typedef struct A68t181  A68_181 ;    /* PROC(MODE116,MODE116) BOOL */

A_PROCEDURE(A68_BOOL ,A68t182,(struct A68t114 ,struct A68t114 ),(struct A68t114 ,struct A68t114 ,void *));
typedef struct A68t182  A68_182 ;    /* PROC(MODE114,MODE114) BOOL */

A_PROCEDURE(A68_BOOL ,A68t183,(struct A68t93 ,struct A68t93 ),(struct A68t93 ,struct A68t93 ,void *));
typedef struct A68t183  A68_183 ;    /* PROC(MODE93,MODE93) BOOL */

A_PROCEDURE(A68_BOOL ,A68t184,(struct A68t105 ,struct A68t105 ),(struct A68t105 ,struct A68t105 ,void *));
typedef struct A68t184  A68_184 ;    /* PROC(MODE105,MODE105) BOOL */

A_PROCEDURE(A68_BOOL ,A68t185,(struct A68t94 ,struct A68t94 ),(struct A68t94 ,struct A68t94 ,void *));
typedef struct A68t185  A68_185 ;    /* PROC(MODE94,MODE94) BOOL */

A_PROCEDURE(A68_VOID ,A68t186,(struct A68t118 ,struct A68t118 ,struct A68t118 *),(struct A68t118 ,struct A68t118 ,struct A68t118 *,void *));
typedef struct A68t186  A68_186 ;    /* PROC(REF MODE118,REF MODE118) REF MODE118 */

A_PROCEDURE(A68_INT ,A68t187,(struct A68t105 ),(struct A68t105 ,void *));
typedef struct A68t187  A68_187 ;    /* PROC(MODE105) INT */

A_PROCEDURE(struct A68t111 *,A68t188,(struct A68t105 ,A68_INT ,A68_INT ),(struct A68t105 ,A68_INT ,A68_INT ,void *));
typedef struct A68t188  A68_188 ;    /* PROC(MODE105,INT,INT) REF MODE111 */

A_PROCEDURE(A68_VOID ,A68t189,(struct A68t117 ,A68_INT ,A68_INT ,struct A68t117 *),(struct A68t117 ,A68_INT ,A68_INT ,struct A68t117 *,void *));
typedef struct A68t189  A68_189 ;    /* PROC(MODE117,INT,INT) MODE117 */

A_PROCEDURE(A68_VOID ,A68t190,(struct A68t174 *,A68_INT ,A68_INT ,struct A68t117 *),(struct A68t174 *,A68_INT ,A68_INT ,struct A68t117 *,void *));
typedef struct A68t190  A68_190 ;    /* PROC(REF MODE174,INT,INT) MODE117 */

A_PROCEDURE(A68_VC *,A68t191,(struct A68t94 ,struct A68t105 ),(struct A68t94 ,struct A68t105 ,void *));
typedef struct A68t191  A68_191 ;    /* PROC(MODE94,MODE105) REF REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t192,(A68_VC ,struct A68t105 ,struct A68t94 *),(A68_VC ,struct A68t105 ,struct A68t94 *,void *));
typedef struct A68t192  A68_192 ;    /* PROC(REF MODE26,MODE105) MODE94 */

A_PROCEDURE(A68_INT ,A68t193,(struct A68t93 ),(struct A68t93 ,void *));
typedef struct A68t193  A68_193 ;    /* PROC(MODE93) INT */

A_PROCEDURE(A68_VOID ,A68t194,(struct A68t93 ,A68_INT ),(struct A68t93 ,A68_INT ,void *));
typedef struct A68t194  A68_194 ;    /* PROC(MODE93,INT) VOID */

A_PROCEDURE(A68_INT ,A68t195,(A68_INT ),(A68_INT ,void *));
typedef struct A68t195  A68_195 ;    /* PROC(INT) INT */
struct A68t197 ;

A_PROCEDURE(A68_VOID ,A68t196,(struct A68t197 *,A68_INT ,struct A68t43 ,struct A68t36 ,struct A68t114 *),(struct A68t197 *,A68_INT ,struct A68t43 ,struct A68t36 ,struct A68t114 *,void *));
typedef struct A68t196  A68_196 ;    /* PROC(REF MODE197,INT,MODE43,MODE36) MODE114 */
struct A68t197{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t197  A68_197 ;    /* STRUCT(REF MODE26,REF BITS)  */

A_PROCEDURE(A68_VOID ,A68t198,(A68_VC ,struct A68t36 ,struct A68t114 *),(A68_VC ,struct A68t36 ,struct A68t114 *,void *));
typedef struct A68t198  A68_198 ;    /* PROC(REF MODE26,MODE36) MODE114 */

A_PROCEDURE(A68_VOID ,A68t199,(A68_INT *,A68_BOOL *,struct A68t36 ),(A68_INT *,A68_BOOL *,struct A68t36 ,void *));
typedef struct A68t199  A68_199 ;    /* PROC(REF INT,REF BOOL,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t200,(struct A68t93 ,A68_VC ),(struct A68t93 ,A68_VC ,void *));
typedef struct A68t200  A68_200 ;    /* PROC(MODE93,REF MODE26) VOID */
struct A68t202 ;

A_PROCEDURE(A68_VOID ,A68t201,(A68_INT *,A68_VC *,struct A68t202 ,struct A68t202 ,struct A68t36 ),(A68_INT *,A68_VC *,struct A68t202 ,struct A68t202 ,struct A68t36 ,void *));
typedef struct A68t201  A68_201 ;    /* PROC(REF INT,REF REF MODE26,MODE202,MODE202,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t202,(A68_VC ,struct A68t36 ),(A68_VC ,struct A68t36 ,void *));
typedef struct A68t202  A68_202 ;    /* PROC(REF MODE26,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t203,(A68_INT ,A68_INT ,A68_VC ,struct A68t202 ,struct A68t202 ,struct A68t43 ,struct A68t36 ,struct A68t114 *),(A68_INT ,A68_INT ,A68_VC ,struct A68t202 ,struct A68t202 ,struct A68t43 ,struct A68t36 ,struct A68t114 *,void *));
typedef struct A68t203  A68_203 ;    /* PROC(INT,INT,REF MODE26,MODE202,MODE202,MODE43,MODE36) MODE114 */

A_PROCEDURE(A68_VOID ,A68t204,(A68_VC ,struct A68t36 ,struct A68t93 *),(A68_VC ,struct A68t36 ,struct A68t93 *,void *));
typedef struct A68t204  A68_204 ;    /* PROC(REF MODE26,MODE36) MODE93 */

A_PROCEDURE(A68_VOID ,A68t205,(struct A68t93 ),(struct A68t93 ,void *));
typedef struct A68t205  A68_205 ;    /* PROC(MODE93) VOID */

A_PROCEDURE(A68_VOID ,A68t206,(struct A68t93 ,struct A68t93 *),(struct A68t93 ,struct A68t93 *,void *));
typedef struct A68t206  A68_206 ;    /* PROC(MODE93) MODE93 */

A_PROCEDURE(A68_VOID ,A68t207,(struct A68t93 ,struct A68t93 ),(struct A68t93 ,struct A68t93 ,void *));
typedef struct A68t207  A68_207 ;    /* PROC(MODE93,MODE93) VOID */

A_PROCEDURE(A68_BOOL ,A68t208,(struct A68t93 ),(struct A68t93 ,void *));
typedef struct A68t208  A68_208 ;    /* PROC(MODE93) BOOL */

A_PROCEDURE(A68_VOID ,A68t209,(A68_INT ,struct A68t176 *),(A68_INT ,struct A68t176 *,void *));
typedef struct A68t209  A68_209 ;    /* PROC(INT) MODE176 */

A_PROCEDURE(A68_VOID ,A68t210,(A68_INT ,struct A68t178 *),(A68_INT ,struct A68t178 *,void *));
typedef struct A68t210  A68_210 ;    /* PROC(INT) MODE178 */

A_PROCEDURE(A68_VOID ,A68t211,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t211  A68_211 ;    /* PROC(INT) REF MODE26 */
struct A68t213 ;

A_PROCEDURE(A68_VOID ,A68t212,(struct A68t213 ),(struct A68t213 ,void *));
typedef struct A68t212  A68_212 ;    /* PROC(MODE213) VOID */

A_PROCEDURE(A68_BOOL ,A68t213,(A68_VC ),(A68_VC ,void *));
typedef struct A68t213  A68_213 ;    /* PROC(REF MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t214,(struct A68t176 ,struct A68t117 *),(struct A68t176 ,struct A68t117 *,void *));
typedef struct A68t214  A68_214 ;    /* PROC(MODE176) MODE117 */

A_PROCEDURE(A68_VOID ,A68t215,(A68_INT ,struct A68t117 *),(A68_INT ,struct A68t117 *,void *));
typedef struct A68t215  A68_215 ;    /* PROC(INT) MODE117 */
struct A68t216{
A68_VC  Context;
A68_VC  Import;
};
typedef struct A68t216  A68_216 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t218 ;

A_PROCEDURE(A68_VOID ,A68t217,(struct A68t218 ),(struct A68t218 ,void *));
typedef struct A68t217  A68_217 ;    /* PROC(MODE218) VOID */
struct A68t218 { A68_INT mode; union {
A68_VC  mode1;
struct A68t32  mode2;
struct A68t54  mode3;
struct A68t53  mode4;
} data; };
typedef struct A68t218  A68_218 ;    /* UNION(REF MODE26,REF MODE32,REF MODE54,REF MODE53)  */

A_PROCEDURE(A68_INT ,A68t219,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t219  A68_219 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_BITS ,A68t220,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t220  A68_220 ;    /* PROC(BITS,BITS) BITS */
struct A68t222 ;

A_PROCEDURE(A68_VOID ,A68t221,(struct A68t222 ,A68_INT ),(struct A68t222 ,A68_INT ,void *));
typedef struct A68t221  A68_221 ;    /* PROC(MODE222,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t222,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t222  A68_222 ;    /* PROC(CHAR) VOID */
struct A68t224 ;

A_PROCEDURE(A68_INT ,A68t223,(struct A68t224 ),(struct A68t224 ,void *));
typedef struct A68t223  A68_223 ;    /* PROC(MODE224) INT */

A_PROCEDURE(A68_CHAR ,A68t224,(void),(void *));
typedef struct A68t224  A68_224 ;    /* PROC CHAR */

A_PROCEDURE(A68_INT ,A68t225,(A68_VC ,A68_BOOL *),(A68_VC ,A68_BOOL *,void *));
typedef struct A68t225  A68_225 ;    /* PROC(MODE26,REF BOOL) INT */

A_PROCEDURE(A68_INT ,A68t226,(A68_INT ,A68_INT ,A68_BOOL *),(A68_INT ,A68_INT ,A68_BOOL *,void *));
typedef struct A68t226  A68_226 ;    /* PROC(INT,INT,REF BOOL) INT */

A_PROCEDURE(A68_BOOL ,A68t227,(A68_VC ,A68_INT *,struct A68t160 ),(A68_VC ,A68_INT *,struct A68t160 ,void *));
typedef struct A68t227  A68_227 ;    /* PROC(MODE26,REF INT,MODE160) BOOL */

A_PROCEDURE(A68_BOOL ,A68t228,(struct A68t35 ,struct A68t35 ),(struct A68t35 ,struct A68t35 ,void *));
typedef struct A68t228  A68_228 ;    /* PROC(MODE35,MODE35) BOOL */
A_ISTRUCT(A68_CHAR ,4,A68t230);
typedef struct A68t230  A68_230 ;    /* STRUCT 4 CHAR */
struct A68t229{
struct A68t230  Access;
A_PAD_ISTRUCT(A68_230 ,PAD_54)
};
typedef struct A68t229  A68_229 ;    /* STRUCT(MODE230)  */

A_PROCEDURE(struct A68t197 *,A68t231,(A68_VC ,struct A68t229 ,struct A68t160 ),(A68_VC ,struct A68t229 ,struct A68t160 ,void *));
typedef struct A68t231  A68_231 ;    /* PROC(MODE26,MODE229,MODE160) REF MODE197 */

A_PROCEDURE(A68_VOID ,A68t232,(struct A68t197 *,struct A68t160 ),(struct A68t197 *,struct A68t160 ,void *));
typedef struct A68t232  A68_232 ;    /* PROC(REF MODE197,MODE160) VOID */

A_PROCEDURE(A68_VOID ,A68t233,(struct A68t197 *,A68_VC *),(struct A68t197 *,A68_VC *,void *));
typedef struct A68t233  A68_233 ;    /* PROC(REF MODE197) MODE26 */

A_PROCEDURE(A68_VOID ,A68t234,(struct A68t197 *,A68_VC ,A68_INT *,struct A68t160 ,struct A68t35 *),(struct A68t197 *,A68_VC ,A68_INT *,struct A68t160 ,struct A68t35 *,void *));
typedef struct A68t234  A68_234 ;    /* PROC(REF MODE197,REF MODE26,REF INT,MODE160) MODE35 */

A_PROCEDURE(A68_VOID ,A68t235,(struct A68t197 *,A68_VC ,struct A68t160 ,struct A68t35 *),(struct A68t197 *,A68_VC ,struct A68t160 ,struct A68t35 *,void *));
typedef struct A68t235  A68_235 ;    /* PROC(REF MODE197,MODE26,MODE160) MODE35 */
struct A68t236{
A68_SBITS  Permissions;
A_PAD_SBITS(PAD_55)
A68_LBITS  Inode;
A_PAD_LBITS(PAD_56)
A68_SINT  Device;
A_PAD_SINT(PAD_57)
A68_SINT  Links;
A_PAD_SINT(PAD_58)
A68_SBITS  Owning_user;
A_PAD_SBITS(PAD_59)
A68_SBITS  Owning_group;
A_PAD_SBITS(PAD_60)
A68_LINT  Size;
A_PAD_LINT(PAD_61)
A68_LINT  Accessed;
A_PAD_LINT(PAD_62)
A68_LINT  Data_modified;
A_PAD_LINT(PAD_63)
A68_LINT  Status_modified;
A_PAD_LINT(PAD_64)
};
typedef struct A68t236  A68_236 ;    /* STRUCT(SHORT BITS,LONG BITS,SHORT INT,SHORT INT,SHORT BITS,SHORT BITS,LONG INT,LONG INT,LONG INT,LONG INT)  */
struct A68t238 ;

A_PROCEDURE(struct A68t236 *,A68t237,(struct A68t238 ,struct A68t160 ),(struct A68t238 ,struct A68t160 ,void *));
typedef struct A68t237  A68_237 ;    /* PROC(MODE238,MODE160) REF MODE236 */
struct A68t238 { A68_INT mode; union {
struct A68t197 * mode1;
A68_VC  mode2;
} data; };
typedef struct A68t238  A68_238 ;    /* UNION(REF MODE197,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t239,(struct A68t197 *,A68_LINT *,struct A68t160 ,struct A68t35 *),(struct A68t197 *,A68_LINT *,struct A68t160 ,struct A68t35 *,void *));
typedef struct A68t239  A68_239 ;    /* PROC(REF MODE197,REF LONG INT,MODE160) MODE35 */

A_PROCEDURE(A68_VOID ,A68t240,(struct A68t197 *,A68_LINT ,struct A68t160 ,struct A68t35 *),(struct A68t197 *,A68_LINT ,struct A68t160 ,struct A68t35 *,void *));
typedef struct A68t240  A68_240 ;    /* PROC(REF MODE197,LONG INT,MODE160) MODE35 */

A_PROCEDURE(A68_VOID ,A68t241,(struct A68t197 *,struct A68t160 ,struct A68t35 *),(struct A68t197 *,struct A68t160 ,struct A68t35 *,void *));
typedef struct A68t241  A68_241 ;    /* PROC(REF MODE197,MODE160) MODE35 */

A_PROCEDURE(A68_VOID ,A68t242,(A68_VC ,struct A68t160 ,struct A68t35 *),(A68_VC ,struct A68t160 ,struct A68t35 *,void *));
typedef struct A68t242  A68_242 ;    /* PROC(MODE26,MODE160) MODE35 */

A_PROCEDURE(A68_VOID ,A68t243,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t243  A68_243 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_LINT ,A68t244,(void),(void *));
typedef struct A68t244  A68_244 ;    /* PROC LONG INT */

A_PROCEDURE(A68_INT ,A68t245,(A68_VC ,struct A68t160 ),(A68_VC ,struct A68t160 ,void *));
typedef struct A68t245  A68_245 ;    /* PROC(MODE26,MODE160) INT */

A_PROCEDURE(A68_VOID ,A68t246,(A68_VC ,A68_VC ,struct A68t160 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t160 ,A68_VC *,void *));
typedef struct A68t246  A68_246 ;    /* PROC(MODE26,MODE26,MODE160) MODE26 */

A_PROCEDURE(A68_VOID ,A68t247,(A68_VC ,A68_VC ,struct A68t160 ,struct A68t35 *),(A68_VC ,A68_VC ,struct A68t160 ,struct A68t35 *,void *));
typedef struct A68t247  A68_247 ;    /* PROC(MODE26,MODE26,MODE160) MODE35 */
struct A68t248{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t248  A68_248 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t249,(A68_VC ,A68_VC ,struct A68t160 ,struct A68t248 *),(A68_VC ,A68_VC ,struct A68t160 ,struct A68t248 *,void *));
typedef struct A68t249  A68_249 ;    /* PROC(MODE26,MODE26,MODE160) MODE248 */

A_PROCEDURE(A68_VOID ,A68t250,(A68_VC *),(A68_VC *,void *));
typedef struct A68t250  A68_250 ;    /* PROC MODE26 */

A_PROCEDURE(A68_VOID ,A68t251,(struct A68t46 *),(struct A68t46 *,void *));
typedef struct A68t251  A68_251 ;    /* PROC MODE46 */

A_PROCEDURE(A68_VOID ,A68t252,(A68_VC ,struct A68t160 ,struct A68t46 *),(A68_VC ,struct A68t160 ,struct A68t46 *,void *));
typedef struct A68t252  A68_252 ;    /* PROC(MODE26,MODE160) MODE46 */
struct A68t254 ;

A_PROCEDURE(A68_VOID ,A68t253,(struct A68t254 ,struct A68t160 ),(struct A68t254 ,struct A68t160 ,void *));
typedef struct A68t253  A68_253 ;    /* PROC(MODE254,MODE160) VOID */
A_VECTOR(struct A68t255 ,A68t254);
typedef struct A68t254  A68_254 ;    /* VECTOR [] MODE255 */
struct A68t255{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_65)
};
typedef struct A68t255  A68_255 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t256,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t256  A68_256 ;    /* PROC(BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t257,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t257  A68_257 ;    /* PROC(REF MODE26) REF MODE26 */

A_PROCEDURE(A68_REAL ,A68t258,(A68_REAL ),(A68_REAL ,void *));
typedef struct A68t258  A68_258 ;    /* PROC(REAL) REAL */
struct A68t259{
A68_VC  Name;
A68_VC  Version;
A68_VC  Date;
A68_VC  Msg;
A68_VC  Sys_fault;
};
typedef struct A68t259  A68_259 ;    /* STRUCT(MODE26,MODE26,MODE26,MODE26,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t260,(A68_BOOL ,struct A68t259 *),(A68_BOOL ,struct A68t259 *,void *));
typedef struct A68t260  A68_260 ;    /* PROC(BOOL) MODE259 */

A_PROCEDURE(A68_VOID ,A68t261,(struct A68t259 ,A68_BOOL ),(struct A68t259 ,A68_BOOL ,void *));
typedef struct A68t261  A68_261 ;    /* PROC(MODE259,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t262,(struct A68t259 *),(struct A68t259 *,void *));
typedef struct A68t262  A68_262 ;    /* PROC MODE259 */

A_PROCEDURE(A68_BOOL ,A68t263,(A68_VC ,A68_VC ,A68_VC ,A68_VC *,A68_BOOL ),(A68_VC ,A68_VC ,A68_VC ,A68_VC *,A68_BOOL ,void *));
typedef struct A68t263  A68_263 ;    /* PROC(MODE26,MODE26,MODE26,REF REF MODE26,BOOL) BOOL */
struct A68t265 ;
struct A68t266 ;

A_PROCEDURE(A68_VOID ,A68t264,(A68_VC ,struct A68t124 ,struct A68t265 ,struct A68t266 ),(A68_VC ,struct A68t124 ,struct A68t265 ,struct A68t266 ,void *));
typedef struct A68t264  A68_264 ;    /* PROC(MODE26,MODE124,MODE265,MODE266) VOID */

A_PROCEDURE(A68_BOOL ,A68t265,(A68_VC ,struct A68t250 ),(A68_VC ,struct A68t250 ,void *));
typedef struct A68t265  A68_265 ;    /* PROC(MODE26,MODE250) BOOL */

A_PROCEDURE(A68_BOOL ,A68t266,(A68_BOOL ),(A68_BOOL ,void *));
typedef struct A68t266  A68_266 ;    /* PROC(BOOL) BOOL */

A_PROCEDURE(A68_VOID ,A68t267,(struct A68t160 ),(struct A68t160 ,void *));
typedef struct A68t267  A68_267 ;    /* PROC(MODE160) VOID */

A_PROCEDURE(A68_VOID ,A68t268,(struct A68t267 ,struct A68t160 ),(struct A68t267 ,struct A68t160 ,void *));
typedef struct A68t268  A68_268 ;    /* PROC(MODE267,MODE160) VOID */

A_PROCEDURE(A68_VOID ,A68t269,(struct A68t124 ),(struct A68t124 ,void *));
typedef struct A68t269  A68_269 ;    /* PROC(MODE124) VOID */

A_PROCEDURE(A68_VOID ,A68t270,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t270  A68_270 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,55,A68t271);
typedef struct A68t271  A68_271 ;    /* STRUCT 55 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t272);
typedef struct A68t272  A68_272 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(struct A68t52 ,3,A68t273);
typedef struct A68t273  A68_273 ;    /* STRUCT 3 MODE52 */

A_PROCEDURE(A68_VOID ,A68t274,(struct A68t114 ,struct A68t36 ),(struct A68t114 ,struct A68t36 ,void *));
typedef struct A68t274  A68_274 ;    /* PROC(MODE114,MODE36) VOID */
A_ISTRUCT(struct A68t52 ,4,A68t275);
typedef struct A68t275  A68_275 ;    /* STRUCT 4 MODE52 */

A_PROCEDURE(A68_VOID ,A68t276,(struct A68t197 *,struct A68t36 ),(struct A68t197 *,struct A68t36 ,void *));
typedef struct A68t276  A68_276 ;    /* PROC(REF MODE197,MODE36) VOID */
A_ISTRUCT(A68_CHAR ,36,A68t277);
typedef struct A68t277  A68_277 ;    /* STRUCT 36 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from osinterface --- */
extern A68_229  BOBAOSI_update_access;
extern A68_229  FOBAOSI_update_truncate_access;
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
extern A68_34 * LEAAOST_out;
/* --- End of imports from osinterface --- */


/* --- Imports from basics --- */
extern A68_VC  NTCAOST_nilid;
/* --- End of imports from basics --- */


/* --- Imports from kealientoolkit --- */
extern A68_VOID  WEEBSIM_aci_initialise_procs(void);
/* --- End of imports from kealientoolkit --- */


/* --- Imports from kernel --- */
extern A68_VOID  PHCBSIM_initialisekernel(struct A68t197 *,A68_INT ,struct A68t43 ,struct A68t36 ,A68_114 *);
extern A68_VOID  GICBSIM_selectfunction(A68_VC ,struct A68t36 ,A68_114 *);
extern A68_VOID  EPCBSIM_terminatekernel(struct A68t36 );
extern A68_VOID  ZTCASIM_lookupuserid(A68_INT ,A68_VC *);
extern A68_INT  MXCASIM_lookupscaletime(A68_INT );
/* --- End of imports from kernel --- */


/* --- Imports from simtime --- */
extern A68_INT  YPAASIM_activetime;
#define AQAASIM_present 1
extern A68_VOID  DQAASIM_settimemode(A68_INT );
extern A68_INT  EQAASIM_scaletime;
/* --- End of imports from simtime --- */


/* --- Imports from simrun --- */
extern A68_BOOL  ZVGBSIM_monitorspending;
/* --- End of imports from simrun --- */


/* --- Imports from simpast --- */
/* --- End of imports from simpast --- */


/* --- Imports from simnode --- */
/* --- End of imports from simnode --- */


/* --- Imports from simtable --- */
extern A68_128 * HGDBSIM_nilpath;
#define FGDBSIM_goin '.'
#define MGDBSIM_any 0
extern A68_VC  JGDBSIM_monitoringpointername;
extern A68_VC  KGDBSIM_simulatedfunctionname;
extern A68_VOID  GIDBSIM_simtableinit(void);
extern A68_VOID  RIDBSIM_simtablediscard(void);
extern A68_BOOL  IJDBSIM_simtablereplacebinding(A68_VC ,A68_INT ,struct A68t138 );
extern A68_BOOL  UKDBSIM_simtablelookuppath(A68_VC ,A68_INT ,struct A68t128 **);
/* --- End of imports from simtable --- */


/* --- Imports from simmonitor --- */
extern A68_INT  QSFBSIM_printedtime;
extern A68_INT  RSFBSIM_printedtimestyle;
extern A68_INT  SSFBSIM_printedtimemode;
extern A68_INT  TSFBSIM_printstyle;
#define USFBSIM_freeform 1
extern A68_VOID  TVGBSIM_startmonitors(struct A68t36 );
/* --- End of imports from simmonitor --- */


/* --- Imports from putstrings --- */
extern A68_VOID  FCAAOSI_intchars(A68_INT ,A68_VC *);
extern A68_VOID  LRAAOSL_newline(struct A68t34 *);
extern A68_VOID  GFBAOSL_put(struct A68t34 *,struct A68t85 );
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void PCAAOST(void);   /* osinterface */
extern void JSCAOST(void);   /* basics */
extern void WPDBSIM(void);   /* kealientoolkit */
extern void XWBBSIM(void);   /* kernel */
extern void TPAASIM(void);   /* simtime */
extern void UVGBSIM(void);   /* simrun */
extern void TRFBSIM(void);   /* simpast */
extern void RZEBSIM(void);   /* simnode */
extern void ZFDBSIM(void);   /* simtable */
extern void FSFBSIM(void);   /* simmonitor */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_271   AYGBSIM = {"$Id: simstart.a68,v 34.2 1995/03/29 13:05:03 ella Exp $"}; 
A_GISVEC(A68_VC ,BYGBSIM,AYGBSIM,55)
A68_INT  CYGBSIM_diag_level;
static A68_272   IYGBSIM = {"> "}; 
A_GISVEC(A68_VC ,JYGBSIM,IYGBSIM,2)
static A68_230   BZGBSIM = {"FN  "}; 
A_GISVEC(A68_VC ,CZGBSIM,BZGBSIM,4)
static A68_277   HAHBSIM = {"Simstart: NODE did not have mode BOX"}; 
A_GISVEC(A68_VC ,IAHBSIM,HAHBSIM,36)
static A68_277   MAHBSIM = {"Simulator scaletime has been set to "}; 
A_GISVEC(A68_VC ,NAHBSIM,MAHBSIM,36)
static A68_277   DBHBSIM = {"Simstart: NODE did not have mode BOX"}; 
A_GISVEC(A68_VC ,EBHBSIM,DBHBSIM,36)
static A68_277   IBHBSIM = {"Simulator scaletime has been set to "}; 
A_GISVEC(A68_VC ,JBHBSIM,IBHBSIM,36)

A_STATIC A68_VOID  EYGBSIM_nullinstrument(A68_VC  Msg);

A_STATIC A68_VOID  GYGBSIM_realinstrument(A68_VC  Msg);

A_STATIC A68_VOID  SYGBSIM_initialisecommon(A68_114  Node, A68_36  Flt);

A68_VOID  UZGBSIM_deinitialiseshell(A68_36  Flt);

A68_VOID  XZGBSIM_initialiseshell(A68_197 * Simfile, A68_36  Flt);

A68_VOID  XAHBSIM_initialiseshellwithfn(A68_VC  Fn, A68_36  Flt);

A_STATIC A68_VOID  EYGBSIM_nullinstrument(A68_VC  Msg)
{ 
A_PROC_ENTRY(nullinstrument);
/*SKIP*/;
A_PROC_EXIT(nullinstrument);
return;
} 
#undef NL

A_STATIC A68_VOID  GYGBSIM_realinstrument(A68_VC  Msg)
{ 
A68_273  HYGBSIM;  /* collateral clause result */
A68_52  KYGBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  LYGBSIM;  /* YIELD */
A68_52  MYGBSIM;  /* OPERATORS - mode -> union mode */
A68_52  NYGBSIM;  /* OPERATORS - mode -> union mode */
A68_56  OYGBSIM;  /* procedure value */
A68_85  PYGBSIM;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(realinstrument);
 /* line 107: */
LYGBSIM = JYGBSIM ;
HYGBSIM.data[0] = A_UNITE(KYGBSIM,mode7,7,LYGBSIM);
HYGBSIM.data[1] = A_UNITE(MYGBSIM,mode7,7,Msg);
OYGBSIM.fn.fn_global = LRAAOSL_newline;
OYGBSIM.nonlocals = A68_NIL;
HYGBSIM.data[2] = A_UNITE(NYGBSIM,mode12,12,OYGBSIM);
GFBAOSL_put(LEAAOST_out, A_HISVEC(PYGBSIM,HYGBSIM,3,A68_52 ));
A_PROC_EXIT(realinstrument);
return;
} 
#undef NL

A_STATIC A68_VOID  SYGBSIM_initialisecommon(A68_114  Node, A68_36  Flt)
{ 
A68_114  TYGBSIM;  /* united object - for case conformity */
A68_115  UYGBSIM_b;
A68_VC  VYGBSIM;  /* clause result */
A68_VC  WYGBSIM;  /* avoid structure result */
A68_VC  XYGBSIM_fn;
A68_275  YYGBSIM;  /* collateral clause result */
A68_52  ZYGBSIM;  /* OPERATORS - mode -> union mode */
A68_56  AZGBSIM;  /* procedure value */
A68_52  DZGBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  EZGBSIM;  /* YIELD */
A68_52  FZGBSIM;  /* OPERATORS - mode -> union mode */
A68_52  GZGBSIM;  /* OPERATORS - mode -> union mode */
A68_56  HZGBSIM;  /* procedure value */
A68_85  IZGBSIM;  /* OPERATORS - istruct -> vector */
A68_129 * JZGBSIM_bind;
A68_129  KZGBSIM;  /* collateral clause result */
A68_93  LZGBSIM;  /* collateral clause result */
A68_114 * MZGBSIM;  /* YIELD */
A68_93 * NZGBSIM;  /* YIELD */
A68_128 * OZGBSIM_simfnpath;
A68_128  PZGBSIM;  /* collateral clause result */
A68_128 * QZGBSIM_monpath;
A68_138  RZGBSIM;  /* OPERATORS - mode -> union mode */
A68_138  SZGBSIM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(initialisecommon);
 /* line 118: */
 /* line 119: */
{ 
TYGBSIM = Node ;
switch ( TYGBSIM.mode )
{ 
case 1: /* STRUCT(INT,INT)  */
UYGBSIM_b = (TYGBSIM.data.mode1);
ZTCASIM_lookupuserid( UYGBSIM_b.Fn, &WYGBSIM );
VYGBSIM = WYGBSIM;
break;
default: 
A_IMP_SKIP ;
break;
} 
XYGBSIM_fn = VYGBSIM;
 /* line 120: */
AZGBSIM.fn.fn_global = LRAAOSL_newline;
AZGBSIM.nonlocals = A68_NIL;
YYGBSIM.data[0] = A_UNITE(ZYGBSIM,mode12,12,AZGBSIM);
EZGBSIM = CZGBSIM ;
YYGBSIM.data[1] = A_UNITE(DZGBSIM,mode7,7,EZGBSIM);
YYGBSIM.data[2] = A_UNITE(FZGBSIM,mode7,7,XYGBSIM_fn);
HZGBSIM.fn.fn_global = LRAAOSL_newline;
HZGBSIM.nonlocals = A68_NIL;
YYGBSIM.data[3] = A_UNITE(GZGBSIM,mode12,12,HZGBSIM);
GFBAOSL_put(LEAAOST_out, A_HISVEC(IZGBSIM,YYGBSIM,4,A68_52 ));
 /* line 121: */
JZGBSIM_bind = (A_HEAP(A68_129 ));
KZGBSIM.Uname = XYGBSIM_fn;
KZGBSIM.Lname = NTCAOST_nilid;
MZGBSIM = A_HEAP(A68_114 ) ;
LZGBSIM.Node = (*MZGBSIM) = Node;
LZGBSIM.Circuit = 0;
LZGBSIM.Base = 0;
NZGBSIM = A_HEAP(A68_93 ) ;
(*NZGBSIM) = LZGBSIM ;
KZGBSIM.Node = NZGBSIM;
(*JZGBSIM_bind) = KZGBSIM;
 /* line 122: */
YPAASIM_activetime = 0;
 /* line 123: */
QSFBSIM_printedtime = (-1);
 /* line 124: */
DQAASIM_settimemode(AQAASIM_present);
 /* line 125: */
TSFBSIM_printstyle = USFBSIM_freeform;
 /* line 126: */
SSFBSIM_printedtimemode = AQAASIM_present;
 /* line 127: */
RSFBSIM_printedtimestyle = USFBSIM_freeform;
 /* line 133: */
GIDBSIM_simtableinit();
 /* line 134: */
OZGBSIM_simfnpath = (A_HEAP(A68_128 ));
PZGBSIM.Repeat = 1;
PZGBSIM.Name = XYGBSIM_fn;
PZGBSIM.Aliasname = NTCAOST_nilid;
PZGBSIM.Op = FGDBSIM_goin;
PZGBSIM.Bind = JZGBSIM_bind;
PZGBSIM.Rest = HGDBSIM_nilpath;
(*OZGBSIM_simfnpath) = PZGBSIM;
 /* line 135: */
QZGBSIM_monpath = (A_HEAP(A68_128 ));
(*QZGBSIM_monpath) = (*OZGBSIM_simfnpath);
 /* line 136: */
IJDBSIM_simtablereplacebinding(JGDBSIM_monitoringpointername, MGDBSIM_any, A_UNITE(RZGBSIM,mode1,1,QZGBSIM_monpath));
 /* line 137: */
 /* line 138: */
IJDBSIM_simtablereplacebinding(KGDBSIM_simulatedfunctionname, MGDBSIM_any, A_UNITE(SZGBSIM,mode1,1,OZGBSIM_simfnpath));
} 
A_PROC_EXIT(initialisecommon);
return;
} 
#undef NL

A68_VOID  UZGBSIM_deinitialiseshell(A68_36  Flt)
{ 
A_PROC_ENTRY(deinitialiseshell);
 /* line 184: */
 /* line 198: */
{ 
RIDBSIM_simtablediscard();
 /* line 199: */
TVGBSIM_startmonitors(Flt);
 /* line 200: */
 /* line 201: */
EPCBSIM_terminatekernel(Flt);
} 
A_PROC_EXIT(deinitialiseshell);
return;
} 
#undef NL

A68_VOID  XZGBSIM_initialiseshell(A68_197 * Simfile, A68_36  Flt)
{ 
A68_43  YZGBSIM;  /* clause result */
A68_43  ZZGBSIM;  /* procedure value */
A68_43  AAHBSIM;  /* procedure value */
A68_43  BAHBSIM_instrument;
A68_114  CAHBSIM;  /* avoid structure result */
A68_114  DAHBSIM_node;
A68_114  EAHBSIM;  /* united object - for case conformity */
A68_115  FAHBSIM_box;
A68_INT  GAHBSIM;  /* clause result */
A68_275  JAHBSIM;  /* collateral clause result */
A68_52  KAHBSIM;  /* OPERATORS - mode -> union mode */
A68_56  LAHBSIM;  /* procedure value */
A68_52  OAHBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  PAHBSIM;  /* YIELD */
A68_VC  QAHBSIM;  /* avoid structure result */
A68_52  RAHBSIM;  /* OPERATORS - mode -> union mode */
A68_52  SAHBSIM;  /* OPERATORS - mode -> union mode */
A68_56  TAHBSIM;  /* procedure value */
A68_85  UAHBSIM;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(initialiseshell);
 /* line 208: */
 /* line 210: */
{ 
 /* line 211: */
if ( (CYGBSIM_diag_level==0) )
{ 
 /* line 212: */
ZZGBSIM.fn.fn_global = EYGBSIM_nullinstrument;
ZZGBSIM.nonlocals = A68_NIL;
YZGBSIM = ZZGBSIM;
} 
else
{ 
AAHBSIM.fn.fn_global = GYGBSIM_realinstrument;
AAHBSIM.nonlocals = A68_NIL;
YZGBSIM = AAHBSIM;
} 
BAHBSIM_instrument = YZGBSIM;
 /* line 215: */
WEEBSIM_aci_initialise_procs();
 /* line 217: */
PHCBSIM_initialisekernel( Simfile, CYGBSIM_diag_level, BAHBSIM_instrument, Flt, &CAHBSIM );
DAHBSIM_node = CAHBSIM;
 /* line 220: */
 /* line 221: */
EAHBSIM = DAHBSIM_node ;
switch ( EAHBSIM.mode )
{ 
case 1: /* STRUCT(INT,INT)  */
FAHBSIM_box = (EAHBSIM.data.mode1);
 /* line 222: */
 /* line 223: */
GAHBSIM = MXCASIM_lookupscaletime(FAHBSIM_box.Fn);
break;
default: 
A_CALLPROC(Flt,(IAHBSIM),(IAHBSIM,(Flt).nonlocals));
 /* line 224: */
 /* line 225: */
GAHBSIM = 1;
break;
} 
EQAASIM_scaletime = GAHBSIM;
 /* line 229: */
 /* line 230: */
if ( (EQAASIM_scaletime>1) )
{ 
 /* line 231: */
LAHBSIM.fn.fn_global = LRAAOSL_newline;
LAHBSIM.nonlocals = A68_NIL;
JAHBSIM.data[0] = A_UNITE(KAHBSIM,mode12,12,LAHBSIM);
 /* line 232: */
PAHBSIM = NAHBSIM ;
JAHBSIM.data[1] = A_UNITE(OAHBSIM,mode7,7,PAHBSIM);
 /* line 234: */
FCAAOSI_intchars( EQAASIM_scaletime, &QAHBSIM );
JAHBSIM.data[2] = A_UNITE(RAHBSIM,mode7,7,QAHBSIM);
 /* line 235: */
TAHBSIM.fn.fn_global = LRAAOSL_newline;
TAHBSIM.nonlocals = A68_NIL;
JAHBSIM.data[3] = A_UNITE(SAHBSIM,mode12,12,TAHBSIM);
 /* line 236: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(UAHBSIM,JAHBSIM,4,A68_52 ));
} 
 /* line 243: */
ZVGBSIM_monitorspending = A68_FALSE;
 /* line 244: */
TVGBSIM_startmonitors(Flt);
 /* line 245: */
 /* line 246: */
SYGBSIM_initialisecommon(DAHBSIM_node, Flt);
} 
A_PROC_EXIT(initialiseshell);
return;
} 
#undef NL

A68_VOID  XAHBSIM_initialiseshellwithfn(A68_VC  Fn, A68_36  Flt)
{ 
A68_114  YAHBSIM;  /* avoid structure result */
A68_114  ZAHBSIM_node;
A68_114  ABHBSIM;  /* united object - for case conformity */
A68_115  BBHBSIM_box;
A68_INT  CBHBSIM;  /* clause result */
A68_275  FBHBSIM;  /* collateral clause result */
A68_52  GBHBSIM;  /* OPERATORS - mode -> union mode */
A68_56  HBHBSIM;  /* procedure value */
A68_52  KBHBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  LBHBSIM;  /* YIELD */
A68_VC  MBHBSIM;  /* avoid structure result */
A68_52  NBHBSIM;  /* OPERATORS - mode -> union mode */
A68_52  OBHBSIM;  /* OPERATORS - mode -> union mode */
A68_56  PBHBSIM;  /* procedure value */
A68_85  QBHBSIM;  /* OPERATORS - istruct -> vector */
A68_128 * RBHBSIM_simfn;
A_PROC_ENTRY(initialiseshellwithfn);
 /* line 253: */
 /* line 254: */
{ 
ZVGBSIM_monitorspending = A68_FALSE;
 /* line 255: */
TVGBSIM_startmonitors(Flt);
 /* line 261: */
GICBSIM_selectfunction( Fn, Flt, &YAHBSIM );
ZAHBSIM_node = YAHBSIM;
 /* line 264: */
 /* line 265: */
ABHBSIM = ZAHBSIM_node ;
switch ( ABHBSIM.mode )
{ 
case 1: /* STRUCT(INT,INT)  */
BBHBSIM_box = (ABHBSIM.data.mode1);
 /* line 266: */
 /* line 267: */
CBHBSIM = MXCASIM_lookupscaletime(BBHBSIM_box.Fn);
break;
default: 
A_CALLPROC(Flt,(EBHBSIM),(EBHBSIM,(Flt).nonlocals));
 /* line 268: */
 /* line 269: */
CBHBSIM = 1;
break;
} 
EQAASIM_scaletime = CBHBSIM;
 /* line 274: */
 /* line 275: */
if ( (EQAASIM_scaletime>1) )
{ 
 /* line 276: */
HBHBSIM.fn.fn_global = LRAAOSL_newline;
HBHBSIM.nonlocals = A68_NIL;
FBHBSIM.data[0] = A_UNITE(GBHBSIM,mode12,12,HBHBSIM);
 /* line 277: */
LBHBSIM = JBHBSIM ;
FBHBSIM.data[1] = A_UNITE(KBHBSIM,mode7,7,LBHBSIM);
 /* line 279: */
FCAAOSI_intchars( EQAASIM_scaletime, &MBHBSIM );
FBHBSIM.data[2] = A_UNITE(NBHBSIM,mode7,7,MBHBSIM);
 /* line 280: */
PBHBSIM.fn.fn_global = LRAAOSL_newline;
PBHBSIM.nonlocals = A68_NIL;
FBHBSIM.data[3] = A_UNITE(OBHBSIM,mode12,12,PBHBSIM);
 /* line 281: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(QBHBSIM,FBHBSIM,4,A68_52 ));
} 
 /* line 291: */
SYGBSIM_initialisecommon(ZAHBSIM_node, Flt);
 /* line 292: */
 /* line 293: */
UKDBSIM_simtablelookuppath(KGDBSIM_simulatedfunctionname, MGDBSIM_any, (&RBHBSIM_simfn));
 /* line 294: */
 /* line 295: */
/*SKIP*/;
} 
A_PROC_EXIT(initialiseshellwithfn);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 6: */
void XXGBSIM(void)   /* initialise DECS simstart */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259R","./a68files/simstart.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","/u/model/ella/ostools/assoc/mfiles/basics.m","./mfiles/kealientoolkit.m","./mfiles/kernel.m","./mfiles/simtime.m","./mfiles/simrun.m","./mfiles/simpast.m","./mfiles/simnode.m","./mfiles/simtable.m","./mfiles/simmonitor.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
PCAAOST();   /* USE osinterface */
JSCAOST();   /* USE basics */
WPDBSIM();   /* USE kealientoolkit */
XWBBSIM();   /* USE kernel */
TPAASIM();   /* USE simtime */
UVGBSIM();   /* USE simrun */
TRFBSIM();   /* USE simpast */
RZEBSIM();   /* USE simnode */
ZFDBSIM();   /* USE simtable */
FSFBSIM();   /* USE simmonitor */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/sim/assoc/./a68files/simstart.a68";
A_config.translation_time = "Tue Apr  4 11:15:12 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "WXGBSIM (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 11:15:12 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS simstart);
UEAALIB_a68config(LGAALIB_configinfo, BYGBSIM);
 /* line 102: */
CYGBSIM_diag_level = 0;
 /* line 104: */
 /* line 106: */
 /* line 117: */
 /* line 183: */
 /* line 207: */
 /* line 252: */
 /* line 349: */
 /* line 351: */
 /* line 359: */
/*SKIP*/;
A_PROC_EXIT(DECS simstart);
} 
#undef NL
/* end of translation of ./a68files/simstart.a68 */
