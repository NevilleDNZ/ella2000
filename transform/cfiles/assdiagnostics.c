
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
/* UNAME:FCIBTRN */
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
A68_INT  Number;
A_PAD_INT(PAD_20)
struct A68t93 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_21)
};
typedef struct A68t92  A68_92 ;    /* STRUCT(INT,REF MODE93,BITS)  */
A_VECTOR(struct A68t95 ,A68t94);
typedef struct A68t94  A68_94 ;    /* VECTOR [] MODE95 */
struct A68t95{
struct A68t92  Msgno;
A68_VC  Text;
};
typedef struct A68t95  A68_95 ;    /* STRUCT(MODE92,REF MODE26)  */
struct A68t93{
A68_VC  Name;
struct A68t94  Messages;
};
typedef struct A68t93  A68_93 ;    /* STRUCT(REF MODE26,REF MODE94)  */

A_PROCEDURE(A68_VOID ,A68t96,(A68_BOOL ,struct A68t46 *),(A68_BOOL ,struct A68t46 *,void *));
typedef struct A68t96  A68_96 ;    /* PROC(BOOL) MODE46 */

A_PROCEDURE(A68_VOID ,A68t97,(struct A68t92 ,struct A68t46 ),(struct A68t92 ,struct A68t46 ,void *));
typedef struct A68t97  A68_97 ;    /* PROC(MODE92,MODE46) VOID */
A_VECTOR(struct A68t100 ,A68t99);
typedef struct A68t99  A68_99 ;    /* VECTOR [] MODE100 */
struct A68t100{
A68_INT  Number;
A_PAD_INT(PAD_22)
A68_BITS  Class;
A_PAD_BITS(PAD_23)
A68_VC  Text;
};
typedef struct A68t100  A68_100 ;    /* STRUCT(INT,BITS,MODE26)  */
struct A68t98{
A68_VC  Name;
struct A68t94  Messages;
A68_BOOL * Initialised;
struct A68t99  Setup;
};
typedef struct A68t98  A68_98 ;    /* STRUCT(MODE26,REF MODE94,REF BOOL,MODE99)  */

A_PROCEDURE(A68_VOID ,A68t101,(A68_BOOL ,struct A68t98 *),(A68_BOOL ,struct A68t98 *,void *));
typedef struct A68t101  A68_101 ;    /* PROC(BOOL) MODE98 */
A_VECTOR(A68_VC ,A68t102);
typedef struct A68t102  A68_102 ;    /* VECTOR [] REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t103,(struct A68t46 ,struct A68t102 *),(struct A68t46 ,struct A68t102 *,void *));
typedef struct A68t103  A68_103 ;    /* PROC(MODE46) MODE102 */

A_PROCEDURE(A68_VOID ,A68t104,(struct A68t102 ,struct A68t46 *),(struct A68t102 ,struct A68t46 *,void *));
typedef struct A68t104  A68_104 ;    /* PROC(MODE102) MODE46 */
struct A68t106 ;

A_PROCEDURE(A68_BOOL ,A68t105,(struct A68t106 ),(struct A68t106 ,void *));
typedef struct A68t105  A68_105 ;    /* PROC(MODE106) BOOL */
struct A68t106 { A68_INT mode; union {
struct A68t92  mode1;
struct A68t95  mode2;
} data; };
typedef struct A68t106  A68_106 ;    /* UNION(MODE92,MODE95)  */

A_PROCEDURE(A68_INT ,A68t107,(struct A68t92 ),(struct A68t92 ,void *));
typedef struct A68t107  A68_107 ;    /* PROC(MODE92) INT */

A_PROCEDURE(A68_VOID ,A68t108,(A68_INT ,struct A68t98 ,struct A68t92 *),(A68_INT ,struct A68t98 ,struct A68t92 *,void *));
typedef struct A68t108  A68_108 ;    /* PROC(INT,MODE98) MODE92 */

A_PROCEDURE(A68_BOOL ,A68t109,(struct A68t92 ,struct A68t98 ),(struct A68t92 ,struct A68t98 ,void *));
typedef struct A68t109  A68_109 ;    /* PROC(MODE92,MODE98) BOOL */

A_PROCEDURE(A68_VOID ,A68t110,(struct A68t92 ,struct A68t46 ,struct A68t95 *),(struct A68t92 ,struct A68t46 ,struct A68t95 *,void *));
typedef struct A68t110  A68_110 ;    /* PROC(MODE92,MODE46) MODE95 */

A_PROCEDURE(A68_BOOL ,A68t111,(void),(void *));
typedef struct A68t111  A68_111 ;    /* PROC BOOL */

A_PROCEDURE(A68_VOID ,A68t115,(A68_VC *),(A68_VC *,void *));
typedef struct A68t115  A68_115 ;    /* PROC REF MODE26 */
struct A68t112{
A68_BOOL  Logging;
A_PAD_BOOL(PAD_24)
A68_BOOL  Outputing;
A_PAD_BOOL(PAD_25)
A68_BOOL  Seeing_in;
A_PAD_BOOL(PAD_26)
A68_BOOL  Seeing_out;
A_PAD_BOOL(PAD_27)
A68_BOOL  Paging;
A_PAD_BOOL(PAD_28)
A68_BOOL  Clock;
A_PAD_BOOL(PAD_29)
A68_BOOL  Screen_output;
A_PAD_BOOL(PAD_30)
A68_INT  Width;
A_PAD_INT(PAD_31)
A68_INT  Page_count;
A_PAD_INT(PAD_32)
A68_INT  Page_length;
A_PAD_INT(PAD_33)
A68_INT  Eof_count;
A_PAD_INT(PAD_34)
struct A68t113 * Standard_reader;
struct A68t114 * Infile;
struct A68t115  Prompt;
struct A68t116 * Logfile;
struct A68t116 * Outfile;
};
typedef struct A68t112  A68_112 ;    /* STRUCT(BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,INT,INT,INT,INT,REF MODE113,REF MODE114,MODE115,REF MODE116,REF MODE116)  */

A_PROCEDURE(A68_INT ,A68t117,(A68_VC *,struct A68t97 ),(A68_VC *,struct A68t97 ,void *));
typedef struct A68t117  A68_117 ;    /* PROC(REF REF MODE26,MODE97) INT */
struct A68t113{
A68_VC  Rdbuffer;
struct A68t117  Rdline;
A68_INT  Rdcharend;
A_PAD_INT(PAD_35)
A68_INT  Rdcharno;
A_PAD_INT(PAD_36)
A68_INT  Start_of_word;
A_PAD_INT(PAD_37)
struct A68t118 * Stack;
};
typedef struct A68t113  A68_113 ;    /* STRUCT(REF MODE26,MODE117,INT,INT,INT,REF MODE118)  */
struct A68t114{
struct A68t116 * File;
A68_BOOL  Suspended;
A_PAD_BOOL(PAD_38)
A68_INT  Number;
A_PAD_INT(PAD_39)
A68_VC  Name;
struct A68t113 * Reader;
struct A68t114 * Previous;
};
typedef struct A68t114  A68_114 ;    /* STRUCT(REF MODE116,BOOL,INT,REF MODE26,REF MODE113,REF MODE114)  */
struct A68t116{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t116  A68_116 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t118{
A68_VC  Line;
struct A68t118 * Rest;
};
typedef struct A68t118  A68_118 ;    /* STRUCT(REF MODE26,REF MODE118)  */

A_PROCEDURE(struct A68t112 *,A68t119,(void),(void *));
typedef struct A68t119  A68_119 ;    /* PROC REF MODE112 */

A_PROCEDURE(A68_INT ,A68t120,(void),(void *));
typedef struct A68t120  A68_120 ;    /* PROC INT */

A_PROCEDURE(A68_VOID ,A68t121,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t121  A68_121 ;    /* PROC(MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t122,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t122  A68_122 ;    /* PROC(REF MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t123,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t123  A68_123 ;    /* PROC(MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t124,(A68_INT ,struct A68t97 ),(A68_INT ,struct A68t97 ,void *));
typedef struct A68t124  A68_124 ;    /* PROC(INT,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t125,(struct A68t115 ),(struct A68t115 ,void *));
typedef struct A68t125  A68_125 ;    /* PROC(MODE115) VOID */
struct A68t126{
A68_VC  Context;
A68_VC  Import;
};
typedef struct A68t126  A68_126 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t128 ;

A_PROCEDURE(A68_VOID ,A68t127,(struct A68t128 ),(struct A68t128 ,void *));
typedef struct A68t127  A68_127 ;    /* PROC(MODE128) VOID */
struct A68t128 { A68_INT mode; union {
A68_VC  mode1;
struct A68t32  mode2;
struct A68t54  mode3;
struct A68t53  mode4;
} data; };
typedef struct A68t128  A68_128 ;    /* UNION(REF MODE26,REF MODE32,REF MODE54,REF MODE53)  */

A_PROCEDURE(A68_INT ,A68t129,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t129  A68_129 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_BITS ,A68t130,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t130  A68_130 ;    /* PROC(BITS,BITS) BITS */
struct A68t132 ;

A_PROCEDURE(A68_VOID ,A68t131,(struct A68t132 ,A68_INT ),(struct A68t132 ,A68_INT ,void *));
typedef struct A68t131  A68_131 ;    /* PROC(MODE132,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t132,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t132  A68_132 ;    /* PROC(CHAR) VOID */
struct A68t134 ;

A_PROCEDURE(A68_INT ,A68t133,(struct A68t134 ),(struct A68t134 ,void *));
typedef struct A68t133  A68_133 ;    /* PROC(MODE134) INT */

A_PROCEDURE(A68_CHAR ,A68t134,(void),(void *));
typedef struct A68t134  A68_134 ;    /* PROC CHAR */

A_PROCEDURE(A68_INT ,A68t135,(A68_VC ,A68_BOOL *),(A68_VC ,A68_BOOL *,void *));
typedef struct A68t135  A68_135 ;    /* PROC(MODE26,REF BOOL) INT */

A_PROCEDURE(A68_INT ,A68t136,(A68_INT ),(A68_INT ,void *));
typedef struct A68t136  A68_136 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_VOID ,A68t137,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t137  A68_137 ;    /* PROC(INT) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t138,(A68_INT ,A68_INT ,A68_BOOL *),(A68_INT ,A68_INT ,A68_BOOL *,void *));
typedef struct A68t138  A68_138 ;    /* PROC(INT,INT,REF BOOL) INT */

A_PROCEDURE(A68_BOOL ,A68t139,(A68_VC ,A68_INT *,struct A68t97 ),(A68_VC ,A68_INT *,struct A68t97 ,void *));
typedef struct A68t139  A68_139 ;    /* PROC(MODE26,REF INT,MODE97) BOOL */

A_PROCEDURE(A68_BOOL ,A68t140,(struct A68t35 ,struct A68t35 ),(struct A68t35 ,struct A68t35 ,void *));
typedef struct A68t140  A68_140 ;    /* PROC(MODE35,MODE35) BOOL */
A_ISTRUCT(A68_CHAR ,4,A68t142);
typedef struct A68t142  A68_142 ;    /* STRUCT 4 CHAR */
struct A68t141{
struct A68t142  Access;
A_PAD_ISTRUCT(A68_142 ,PAD_40)
};
typedef struct A68t141  A68_141 ;    /* STRUCT(MODE142)  */

A_PROCEDURE(struct A68t116 *,A68t143,(A68_VC ,struct A68t141 ,struct A68t97 ),(A68_VC ,struct A68t141 ,struct A68t97 ,void *));
typedef struct A68t143  A68_143 ;    /* PROC(MODE26,MODE141,MODE97) REF MODE116 */

A_PROCEDURE(A68_VOID ,A68t144,(struct A68t116 *,struct A68t97 ),(struct A68t116 *,struct A68t97 ,void *));
typedef struct A68t144  A68_144 ;    /* PROC(REF MODE116,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t145,(struct A68t116 *,A68_VC *),(struct A68t116 *,A68_VC *,void *));
typedef struct A68t145  A68_145 ;    /* PROC(REF MODE116) MODE26 */

A_PROCEDURE(A68_VOID ,A68t146,(struct A68t116 *,A68_VC ,A68_INT *,struct A68t97 ,struct A68t35 *),(struct A68t116 *,A68_VC ,A68_INT *,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t146  A68_146 ;    /* PROC(REF MODE116,REF MODE26,REF INT,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t147,(struct A68t116 *,A68_VC ,struct A68t97 ,struct A68t35 *),(struct A68t116 *,A68_VC ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t147  A68_147 ;    /* PROC(REF MODE116,MODE26,MODE97) MODE35 */
struct A68t148{
A68_SBITS  Permissions;
A_PAD_SBITS(PAD_41)
A68_LBITS  Inode;
A_PAD_LBITS(PAD_42)
A68_SINT  Device;
A_PAD_SINT(PAD_43)
A68_SINT  Links;
A_PAD_SINT(PAD_44)
A68_SBITS  Owning_user;
A_PAD_SBITS(PAD_45)
A68_SBITS  Owning_group;
A_PAD_SBITS(PAD_46)
A68_LINT  Size;
A_PAD_LINT(PAD_47)
A68_LINT  Accessed;
A_PAD_LINT(PAD_48)
A68_LINT  Data_modified;
A_PAD_LINT(PAD_49)
A68_LINT  Status_modified;
A_PAD_LINT(PAD_50)
};
typedef struct A68t148  A68_148 ;    /* STRUCT(SHORT BITS,LONG BITS,SHORT INT,SHORT INT,SHORT BITS,SHORT BITS,LONG INT,LONG INT,LONG INT,LONG INT)  */
struct A68t150 ;

A_PROCEDURE(struct A68t148 *,A68t149,(struct A68t150 ,struct A68t97 ),(struct A68t150 ,struct A68t97 ,void *));
typedef struct A68t149  A68_149 ;    /* PROC(MODE150,MODE97) REF MODE148 */
struct A68t150 { A68_INT mode; union {
struct A68t116 * mode1;
A68_VC  mode2;
} data; };
typedef struct A68t150  A68_150 ;    /* UNION(REF MODE116,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t151,(struct A68t116 *,A68_LINT *,struct A68t97 ,struct A68t35 *),(struct A68t116 *,A68_LINT *,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t151  A68_151 ;    /* PROC(REF MODE116,REF LONG INT,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t152,(struct A68t116 *,A68_LINT ,struct A68t97 ,struct A68t35 *),(struct A68t116 *,A68_LINT ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t152  A68_152 ;    /* PROC(REF MODE116,LONG INT,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t153,(struct A68t116 *,struct A68t97 ,struct A68t35 *),(struct A68t116 *,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t153  A68_153 ;    /* PROC(REF MODE116,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t154,(A68_VC ,struct A68t97 ,struct A68t35 *),(A68_VC ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t154  A68_154 ;    /* PROC(MODE26,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t155,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t155  A68_155 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t156,(A68_INT ),(A68_INT ,void *));
typedef struct A68t156  A68_156 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_LINT ,A68t157,(void),(void *));
typedef struct A68t157  A68_157 ;    /* PROC LONG INT */

A_PROCEDURE(A68_INT ,A68t158,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t158  A68_158 ;    /* PROC(MODE26,MODE97) INT */

A_PROCEDURE(A68_VOID ,A68t159,(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t159  A68_159 ;    /* PROC(MODE26,MODE26,MODE97) MODE26 */

A_PROCEDURE(A68_VOID ,A68t160,(A68_VC ,A68_VC ,struct A68t97 ,struct A68t35 *),(A68_VC ,A68_VC ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t160  A68_160 ;    /* PROC(MODE26,MODE26,MODE97) MODE35 */
struct A68t161{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t161  A68_161 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t162,(A68_VC ,A68_VC ,struct A68t97 ,struct A68t161 *),(A68_VC ,A68_VC ,struct A68t97 ,struct A68t161 *,void *));
typedef struct A68t162  A68_162 ;    /* PROC(MODE26,MODE26,MODE97) MODE161 */

A_PROCEDURE(A68_VOID ,A68t163,(A68_VC *),(A68_VC *,void *));
typedef struct A68t163  A68_163 ;    /* PROC MODE26 */

A_PROCEDURE(A68_VOID ,A68t164,(struct A68t46 *),(struct A68t46 *,void *));
typedef struct A68t164  A68_164 ;    /* PROC MODE46 */

A_PROCEDURE(A68_VOID ,A68t165,(A68_VC ,struct A68t97 ,struct A68t46 *),(A68_VC ,struct A68t97 ,struct A68t46 *,void *));
typedef struct A68t165  A68_165 ;    /* PROC(MODE26,MODE97) MODE46 */
struct A68t167 ;

A_PROCEDURE(A68_VOID ,A68t166,(struct A68t167 ,struct A68t97 ),(struct A68t167 ,struct A68t97 ,void *));
typedef struct A68t166  A68_166 ;    /* PROC(MODE167,MODE97) VOID */
A_VECTOR(struct A68t168 ,A68t167);
typedef struct A68t167  A68_167 ;    /* VECTOR [] MODE168 */
struct A68t168{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_51)
};
typedef struct A68t168  A68_168 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t169,(void),(void *));
typedef struct A68t169  A68_169 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t170,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t170  A68_170 ;    /* PROC(BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t171,(struct A68t36 ),(struct A68t36 ,void *));
typedef struct A68t171  A68_171 ;    /* PROC(MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t172,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t172  A68_172 ;    /* PROC(REF MODE26) REF MODE26 */

A_PROCEDURE(A68_REAL ,A68t173,(A68_REAL ),(A68_REAL ,void *));
typedef struct A68t173  A68_173 ;    /* PROC(REAL) REAL */
struct A68t174{
A68_VC  Name;
A68_VC  Version;
A68_VC  Date;
A68_VC  Msg;
A68_VC  Sys_fault;
};
typedef struct A68t174  A68_174 ;    /* STRUCT(MODE26,MODE26,MODE26,MODE26,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t175,(A68_BOOL ,struct A68t174 *),(A68_BOOL ,struct A68t174 *,void *));
typedef struct A68t175  A68_175 ;    /* PROC(BOOL) MODE174 */

A_PROCEDURE(A68_VOID ,A68t176,(struct A68t174 ,A68_BOOL ),(struct A68t174 ,A68_BOOL ,void *));
typedef struct A68t176  A68_176 ;    /* PROC(MODE174,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t177,(struct A68t174 *),(struct A68t174 *,void *));
typedef struct A68t177  A68_177 ;    /* PROC MODE174 */

A_PROCEDURE(A68_BOOL ,A68t178,(A68_VC ,A68_VC ,A68_VC ,A68_VC *,A68_BOOL ),(A68_VC ,A68_VC ,A68_VC ,A68_VC *,A68_BOOL ,void *));
typedef struct A68t178  A68_178 ;    /* PROC(MODE26,MODE26,MODE26,REF REF MODE26,BOOL) BOOL */
struct A68t180 ;
struct A68t181 ;

A_PROCEDURE(A68_VOID ,A68t179,(A68_VC ,struct A68t169 ,struct A68t180 ,struct A68t181 ),(A68_VC ,struct A68t169 ,struct A68t180 ,struct A68t181 ,void *));
typedef struct A68t179  A68_179 ;    /* PROC(MODE26,MODE169,MODE180,MODE181) VOID */

A_PROCEDURE(A68_BOOL ,A68t180,(A68_VC ,struct A68t163 ),(A68_VC ,struct A68t163 ,void *));
typedef struct A68t180  A68_180 ;    /* PROC(MODE26,MODE163) BOOL */

A_PROCEDURE(A68_BOOL ,A68t181,(A68_BOOL ),(A68_BOOL ,void *));
typedef struct A68t181  A68_181 ;    /* PROC(BOOL) BOOL */

A_PROCEDURE(A68_VOID ,A68t182,(struct A68t121 ,struct A68t97 ),(struct A68t121 ,struct A68t97 ,void *));
typedef struct A68t182  A68_182 ;    /* PROC(MODE121,MODE97) VOID */
struct A68t183{
A68_VC  Id;
struct A68t183 * Rest;
};
typedef struct A68t183  A68_183 ;    /* STRUCT(REF MODE26,REF MODE183)  */
struct A68t184{
A68_INT  Int;
A_PAD_INT(PAD_52)
struct A68t184 * Rest;
};
typedef struct A68t184  A68_184 ;    /* STRUCT(INT,REF MODE184)  */
struct A68t185 { A68_INT mode; union {
struct A68t186 * mode1;
struct A68t187 * mode2;
struct A68t188 * mode3;
struct A68t189 * mode4;
struct A68t190 * mode5;
} data; };
typedef struct A68t185  A68_185 ;    /* UNION(REF MODE186,REF MODE187,REF MODE188,REF MODE189,REF MODE190)  */
struct A68t186{
A68_INT  Attrno;
A_PAD_INT(PAD_53)
};
typedef struct A68t186  A68_186 ;    /* STRUCT(INT)  */
struct A68t187{
A68_VC  Classname;
struct A68t183 * Strings;
};
typedef struct A68t187  A68_187 ;    /* STRUCT(REF MODE26,REF MODE183)  */
struct A68t188{
struct A68t185  Elem;
struct A68t188 * Rest;
};
typedef struct A68t188  A68_188 ;    /* STRUCT(MODE185,REF MODE188)  */
struct A68t189{
struct A68t185  Attr;
};
typedef struct A68t189  A68_189 ;    /* STRUCT(MODE185)  */
struct A68t190{
A68_INT  Attrnull;
A_PAD_INT(PAD_54)
};
typedef struct A68t190  A68_190 ;    /* STRUCT(INT)  */
struct A68t191{
A68_INT  Sort;
A_PAD_INT(PAD_55)
A68_VC  Attrname;
struct A68t185  Value;
struct A68t192 * Usage;
};
typedef struct A68t191  A68_191 ;    /* STRUCT(INT,REF MODE26,MODE185,REF MODE192)  */
struct A68t192{
A68_INT  Contextno;
A_PAD_INT(PAD_56)
A68_INT  Closureno;
A_PAD_INT(PAD_57)
A68_INT  Libv_spec;
A_PAD_INT(PAD_58)
A68_INT  Libv_body;
A_PAD_INT(PAD_59)
A68_BOOL  Import;
A_PAD_BOOL(PAD_60)
A68_BOOL  Export;
A_PAD_BOOL(PAD_61)
};
typedef struct A68t192  A68_192 ;    /* STRUCT(INT,INT,INT,INT,BOOL,BOOL)  */
struct A68t193{
struct A68t185  Tag;
};
typedef struct A68t193  A68_193 ;    /* STRUCT(MODE185)  */
struct A68t194 { A68_INT mode; union {
struct A68t195 * mode1;
struct A68t196 * mode2;
struct A68t197 * mode3;
struct A68t198 * mode4;
struct A68t199 * mode5;
struct A68t200 * mode6;
struct A68t201 * mode7;
struct A68t202 * mode8;
struct A68t203 * mode9;
struct A68t204 * mode10;
} data; };
typedef struct A68t194  A68_194 ;    /* UNION(REF MODE195,REF MODE196,REF MODE197,REF MODE198,REF MODE199,REF MODE200,REF MODE201,REF MODE202,REF MODE203,REF MODE204)  */
struct A68t195{
A68_INT  Int;
A_PAD_INT(PAD_62)
A68_VC  Text;
};
typedef struct A68t195  A68_195 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t196{
A68_INT  Sort;
A_PAD_INT(PAD_63)
struct A68t194  Test;
struct A68t194  Standard;
};
typedef struct A68t196  A68_196 ;    /* STRUCT(INT,MODE194,MODE194)  */
struct A68t197{
A68_INT  Nameno;
A_PAD_INT(PAD_64)
};
typedef struct A68t197  A68_197 ;    /* STRUCT(INT)  */
struct A68t198{
A68_INT  Intno;
A_PAD_INT(PAD_65)
};
typedef struct A68t198  A68_198 ;    /* STRUCT(INT)  */
struct A68t199{
struct A68t194  Left;
A68_INT  Sort;
A_PAD_INT(PAD_66)
struct A68t194  Right;
};
typedef struct A68t199  A68_199 ;    /* STRUCT(MODE194,INT,MODE194)  */
struct A68t200{
A68_INT  Sort;
A_PAD_INT(PAD_67)
struct A68t194  Right;
};
typedef struct A68t200  A68_200 ;    /* STRUCT(INT,MODE194)  */
struct A68t201{
struct A68t194  Cond;
struct A68t194  True;
struct A68t194  False;
};
typedef struct A68t201  A68_201 ;    /* STRUCT(MODE194,MODE194,MODE194)  */
struct A68t202{
struct A68t194  Formula;
};
typedef struct A68t202  A68_202 ;    /* STRUCT(MODE194)  */
struct A68t203{
A68_INT  Macparno;
A_PAD_INT(PAD_68)
};
typedef struct A68t203  A68_203 ;    /* STRUCT(INT)  */
struct A68t204{
A68_INT  Fnull;
A_PAD_INT(PAD_69)
};
typedef struct A68t204  A68_204 ;    /* STRUCT(INT)  */
struct A68t205{
struct A68t194  Tag;
};
typedef struct A68t205  A68_205 ;    /* STRUCT(MODE194)  */
struct A68t206{
struct A68t194  Formula;
struct A68t206 * Rest;
};
typedef struct A68t206  A68_206 ;    /* STRUCT(MODE194,REF MODE206)  */
struct A68t209{
struct A68t194  Lwb;
struct A68t194  Upb;
};
typedef struct A68t209  A68_209 ;    /* STRUCT(MODE194,MODE194)  */
struct A68t208 { A68_INT mode; union {
struct A68t195 * mode1;
struct A68t196 * mode2;
struct A68t197 * mode3;
struct A68t198 * mode4;
struct A68t199 * mode5;
struct A68t200 * mode6;
struct A68t201 * mode7;
struct A68t202 * mode8;
struct A68t203 * mode9;
struct A68t204 * mode10;
struct A68t209  mode11;
} data; };
typedef struct A68t208  A68_208 ;    /* UNION(REF MODE195,REF MODE196,REF MODE197,REF MODE198,REF MODE199,REF MODE200,REF MODE201,REF MODE202,REF MODE203,REF MODE204,MODE209)  */
struct A68t207{
A68_INT  Sort;
A_PAD_INT(PAD_70)
A68_VC  Intname;
struct A68t185  Attr;
struct A68t208  Value;
struct A68t192 * Usage;
};
typedef struct A68t207  A68_207 ;    /* STRUCT(INT,REF MODE26,MODE185,MODE208,REF MODE192)  */
struct A68t210 { A68_INT mode; union {
struct A68t211 * mode1;
struct A68t212 * mode2;
struct A68t213 * mode3;
struct A68t214 * mode4;
struct A68t215 * mode5;
struct A68t216 * mode6;
struct A68t217 * mode7;
struct A68t203 * mode8;
struct A68t218 * mode9;
} data; };
typedef struct A68t210  A68_210 ;    /* UNION(REF MODE211,REF MODE212,REF MODE213,REF MODE214,REF MODE215,REF MODE216,REF MODE217,REF MODE203,REF MODE218)  */
struct A68t211{
A68_INT  Typeno;
A_PAD_INT(PAD_71)
};
typedef struct A68t211  A68_211 ;    /* STRUCT(INT)  */
struct A68t212{
struct A68t194  Size;
struct A68t210  Elem;
};
typedef struct A68t212  A68_212 ;    /* STRUCT(MODE194,MODE210)  */
struct A68t213{
struct A68t210  Elem;
struct A68t213 * Rest;
};
typedef struct A68t213  A68_213 ;    /* STRUCT(MODE210,REF MODE213)  */
struct A68t214{
struct A68t210  From;
struct A68t210  To;
};
typedef struct A68t214  A68_214 ;    /* STRUCT(MODE210,MODE210)  */
struct A68t215{
struct A68t210  Type;
};
typedef struct A68t215  A68_215 ;    /* STRUCT(MODE210)  */
struct A68t216{
struct A68t194  Size;
struct A68t210  Char;
};
typedef struct A68t216  A68_216 ;    /* STRUCT(MODE194,MODE210)  */
struct A68t217{
A68_INT  Tvoid;
A_PAD_INT(PAD_72)
};
typedef struct A68t217  A68_217 ;    /* STRUCT(INT)  */
struct A68t218{
A68_INT  Tnull;
A_PAD_INT(PAD_73)
};
typedef struct A68t218  A68_218 ;    /* STRUCT(INT)  */
struct A68t219{
struct A68t210  Tag;
};
typedef struct A68t219  A68_219 ;    /* STRUCT(MODE210)  */
struct A68t220{
A68_VC  Tagname;
A68_VC  Chars;
};
typedef struct A68t220  A68_220 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t221{
A68_VC  Altname;
struct A68t210  Assoc;
};
typedef struct A68t221  A68_221 ;    /* STRUCT(REF MODE26,MODE210)  */
struct A68t222{
A68_VC  Tagname;
struct A68t209  Range;
};
typedef struct A68t222  A68_222 ;    /* STRUCT(REF MODE26,MODE209)  */
A_VECTOR(struct A68t221 ,A68t224);
typedef struct A68t224  A68_224 ;    /* VECTOR [] MODE221 */
struct A68t223 { A68_INT mode; union {
struct A68t224  mode1;
struct A68t222 * mode2;
struct A68t219 * mode3;
struct A68t220 * mode4;
} data; };
typedef struct A68t223  A68_223 ;    /* UNION(REF MODE224,REF MODE222,REF MODE219,REF MODE220)  */
struct A68t225{
A68_INT  Sort;
A_PAD_INT(PAD_74)
A68_VC  Typename;
struct A68t185  Attr;
struct A68t223  Body;
struct A68t192 * Usage;
};
typedef struct A68t225  A68_225 ;    /* STRUCT(INT,REF MODE26,MODE185,MODE223,REF MODE192)  */
struct A68t226{
A68_INT  Constno;
A_PAD_INT(PAD_75)
};
typedef struct A68t226  A68_226 ;    /* STRUCT(INT)  */
struct A68t227{
A68_INT  Typeno;
A_PAD_INT(PAD_76)
A68_INT  Primno;
A_PAD_INT(PAD_77)
};
typedef struct A68t227  A68_227 ;    /* STRUCT(INT,INT)  */
struct A68t228{
A68_INT  Typeno;
A_PAD_INT(PAD_78)
struct A68t194  Index;
};
typedef struct A68t228  A68_228 ;    /* STRUCT(INT,MODE194)  */
struct A68t229{
A68_INT  Typeno;
A_PAD_INT(PAD_79)
struct A68t209  Range;
};
typedef struct A68t229  A68_229 ;    /* STRUCT(INT,MODE209)  */
struct A68t230{
struct A68t210  Querytype;
};
typedef struct A68t230  A68_230 ;    /* STRUCT(MODE210)  */
struct A68t232 { A68_INT mode; union {
struct A68t226 * mode1;
struct A68t227 * mode2;
struct A68t228 * mode3;
struct A68t230 * mode4;
struct A68t233 * mode5;
struct A68t234 * mode6;
struct A68t215 * mode7;
struct A68t229 * mode8;
struct A68t235 * mode9;
struct A68t236 * mode10;
struct A68t237 * mode11;
struct A68t238 * mode12;
struct A68t239 * mode13;
struct A68t240 * mode14;
struct A68t241 * mode15;
struct A68t242 * mode16;
struct A68t243 * mode17;
struct A68t244 * mode18;
struct A68t245 * mode19;
struct A68t246 * mode20;
struct A68t247 * mode21;
struct A68t248 * mode22;
struct A68t249 * mode23;
struct A68t250 * mode24;
struct A68t251 * mode25;
struct A68t252 * mode26;
struct A68t253 * mode27;
struct A68t254 * mode28;
struct A68t255 * mode29;
struct A68t256 * mode30;
struct A68t257 * mode31;
struct A68t258 * mode32;
struct A68t259 * mode33;
struct A68t260 * mode34;
} data; };
typedef struct A68t232  A68_232 ;    /* UNION(REF MODE226,REF MODE227,REF MODE228,REF MODE230,REF MODE233,REF MODE234,REF MODE215,REF MODE229,REF MODE235,REF MODE236,REF MODE237,REF MODE238,REF MODE239,REF MODE240,REF MODE241,REF MODE242,REF MODE243,REF MODE244,REF MODE245,REF MODE246,REF MODE247,REF MODE248,REF MODE249,REF MODE250,REF MODE251,REF MODE252,REF MODE253,REF MODE254,REF MODE255,REF MODE256,REF MODE257,REF MODE258,REF MODE259,REF MODE260)  */
struct A68t231{
A68_INT  Sort;
A_PAD_INT(PAD_80)
A68_VC  Constname;
struct A68t185  Attr;
struct A68t232  Value;
struct A68t192 * Usage;
};
typedef struct A68t231  A68_231 ;    /* STRUCT(INT,REF MODE26,MODE185,MODE232,REF MODE192)  */
struct A68t233{
A68_INT  Typeno;
A_PAD_INT(PAD_81)
struct A68t32  String;
};
typedef struct A68t233  A68_233 ;    /* STRUCT(INT,REF MODE32)  */
struct A68t234{
A68_INT  Cvoid;
A_PAD_INT(PAD_82)
};
typedef struct A68t234  A68_234 ;    /* STRUCT(INT)  */
struct A68t235{
A68_INT  Typeno;
A_PAD_INT(PAD_83)
A68_INT  Firstno;
A_PAD_INT(PAD_84)
A68_INT  Lastno;
A_PAD_INT(PAD_85)
};
typedef struct A68t235  A68_235 ;    /* STRUCT(INT,INT,INT)  */
struct A68t236{
struct A68t232  Alt;
struct A68t236 * Rest;
};
typedef struct A68t236  A68_236 ;    /* STRUCT(MODE232,REF MODE236)  */
struct A68t237{
A68_INT  Sort;
A_PAD_INT(PAD_86)
A68_INT  Nameno;
A_PAD_INT(PAD_87)
};
typedef struct A68t237  A68_237 ;    /* STRUCT(INT,INT)  */
struct A68t238{
struct A68t232  Sink;
struct A68t232  Source;
};
typedef struct A68t238  A68_238 ;    /* STRUCT(MODE232,MODE232)  */
struct A68t239{
A68_INT  Typeno;
A_PAD_INT(PAD_88)
A68_INT  Altno;
A_PAD_INT(PAD_89)
struct A68t232  Assoc;
};
typedef struct A68t239  A68_239 ;    /* STRUCT(INT,INT,MODE232)  */
struct A68t240{
struct A68t232  Extract;
A68_INT  Typeno;
A_PAD_INT(PAD_90)
A68_INT  Altno;
A_PAD_INT(PAD_91)
};
typedef struct A68t240  A68_240 ;    /* STRUCT(MODE232,INT,INT)  */
struct A68t241{
struct A68t232  Unit;
A68_INT  Fnno;
A_PAD_INT(PAD_92)
A68_INT  Nameno;
A_PAD_INT(PAD_93)
};
typedef struct A68t241  A68_241 ;    /* STRUCT(MODE232,INT,INT)  */
struct A68t242{
struct A68t232  Unit;
struct A68t194  Index;
};
typedef struct A68t242  A68_242 ;    /* STRUCT(MODE232,MODE194)  */
struct A68t243{
struct A68t232  Unit;
struct A68t209  Range;
};
typedef struct A68t243  A68_243 ;    /* STRUCT(MODE232,MODE209)  */
struct A68t244{
struct A68t232  Unit;
struct A68t232  Index;
};
typedef struct A68t244  A68_244 ;    /* STRUCT(MODE232,MODE232)  */
struct A68t245{
struct A68t232  Unit;
struct A68t232  Index;
struct A68t232  From;
};
typedef struct A68t245  A68_245 ;    /* STRUCT(MODE232,MODE232,MODE232)  */
struct A68t246{
struct A68t194  Size;
struct A68t232  Elem;
};
typedef struct A68t246  A68_246 ;    /* STRUCT(MODE194,MODE232)  */
struct A68t247{
struct A68t232  Elem;
struct A68t247 * Rest;
};
typedef struct A68t247  A68_247 ;    /* STRUCT(MODE232,REF MODE247)  */
struct A68t248{
A68_BOOL  String;
A_PAD_BOOL(PAD_94)
A68_INT  Sort;
A_PAD_INT(PAD_95)
struct A68t232  Left;
struct A68t232  Right;
};
typedef struct A68t248  A68_248 ;    /* STRUCT(BOOL,INT,MODE232,MODE232)  */
A_VECTOR(struct A68t275 ,A68t274);
typedef struct A68t274  A68_274 ;    /* VECTOR [] MODE275 */
struct A68t277{
struct A68t232  Tag;
};
typedef struct A68t277  A68_277 ;    /* STRUCT(MODE232)  */
struct A68t272{
A68_INT  Fnno;
A_PAD_INT(PAD_96)
struct A68t274  Macparams;
struct A68t185  Attr;
};
typedef struct A68t272  A68_272 ;    /* STRUCT(INT,REF MODE274,MODE185)  */
struct A68t276 { A68_INT mode; union {
struct A68t193  mode1;
struct A68t205  mode2;
struct A68t219  mode3;
struct A68t277  mode4;
struct A68t272  mode5;
} data; };
typedef struct A68t276  A68_276 ;    /* UNION(MODE193,MODE205,MODE219,MODE277,MODE272)  */
struct A68t275{
A68_INT  Sort;
A_PAD_INT(PAD_97)
struct A68t276  Param;
};
typedef struct A68t275  A68_275 ;    /* STRUCT(INT,MODE276)  */
struct A68t249{
struct A68t272  Inst;
struct A68t232  Right;
};
typedef struct A68t249  A68_249 ;    /* STRUCT(MODE272,MODE232)  */
struct A68t250{
struct A68t232  Left;
struct A68t272  Inst;
struct A68t232  Right;
};
typedef struct A68t250  A68_250 ;    /* STRUCT(MODE232,MODE272,MODE232)  */
struct A68t251{
struct A68t232  Input;
struct A68t292 * Choices;
};
typedef struct A68t251  A68_251 ;    /* STRUCT(MODE232,REF MODE292)  */
struct A68t252{
struct A68t194  Cond;
struct A68t232  True;
struct A68t232  False;
};
typedef struct A68t252  A68_252 ;    /* STRUCT(MODE194,MODE232,MODE232)  */
struct A68t253{
struct A68t194  Repl;
struct A68t232  Body;
};
typedef struct A68t253  A68_253 ;    /* STRUCT(MODE194,MODE232)  */
struct A68t254{
struct A68t280 * Body;
struct A68t232  Output;
};
typedef struct A68t254  A68_254 ;    /* STRUCT(REF MODE280,MODE232)  */
struct A68t255{
struct A68t261 * Body;
struct A68t232  Output;
};
typedef struct A68t255  A68_255 ;    /* STRUCT(REF MODE261,MODE232)  */
struct A68t256{
struct A68t232  Unit;
struct A68t185  Attr;
};
typedef struct A68t256  A68_256 ;    /* STRUCT(MODE232,MODE185)  */
struct A68t257{
struct A68t232  Unit;
struct A68t196  Check;
};
typedef struct A68t257  A68_257 ;    /* STRUCT(MODE232,MODE196)  */
struct A68t258{
struct A68t232  Unit;
};
typedef struct A68t258  A68_258 ;    /* STRUCT(MODE232)  */
struct A68t259{
struct A68t194  Size;
struct A68t232  Char;
};
typedef struct A68t259  A68_259 ;    /* STRUCT(MODE194,MODE232)  */
struct A68t260{
A68_INT  Unull;
A_PAD_INT(PAD_98)
};
typedef struct A68t260  A68_260 ;    /* STRUCT(INT)  */
struct A68t263{
A68_INT  Fnno;
A_PAD_INT(PAD_99)
};
typedef struct A68t263  A68_263 ;    /* STRUCT(INT)  */
struct A68t262 { A68_INT mode; union {
struct A68t186  mode1;
struct A68t198  mode2;
struct A68t211  mode3;
struct A68t226  mode4;
struct A68t263  mode5;
struct A68t264 * mode6;
struct A68t265 * mode7;
struct A68t266 * mode8;
struct A68t267 * mode9;
struct A68t268 * mode10;
struct A68t269 * mode11;
struct A68t270 * mode12;
} data; };
typedef struct A68t262  A68_262 ;    /* UNION(MODE186,MODE198,MODE211,MODE226,MODE263,REF MODE264,REF MODE265,REF MODE266,REF MODE267,REF MODE268,REF MODE269,REF MODE270)  */
struct A68t261{
struct A68t262  Step;
struct A68t261 * Rest;
};
typedef struct A68t261  A68_261 ;    /* STRUCT(MODE262,REF MODE261)  */
struct A68t264{
struct A68t194  Cond;
struct A68t278 * Print;
};
typedef struct A68t264  A68_264 ;    /* STRUCT(MODE194,REF MODE278)  */
struct A68t265{
struct A68t194  Cond;
struct A68t278 * Fault;
};
typedef struct A68t265  A68_265 ;    /* STRUCT(MODE194,REF MODE278)  */
struct A68t266{
struct A68t273 * Letnames;
struct A68t232  Unit;
};
typedef struct A68t266  A68_266 ;    /* STRUCT(REF MODE273,MODE232)  */
struct A68t267{
struct A68t206 * Sizes;
struct A68t272  Inst;
struct A68t273 * Makenames;
};
typedef struct A68t267  A68_267 ;    /* STRUCT(REF MODE206,MODE272,REF MODE273)  */
struct A68t268{
struct A68t232  From;
struct A68t232  To;
};
typedef struct A68t268  A68_268 ;    /* STRUCT(MODE232,MODE232)  */
struct A68t269{
struct A68t206 * Repls;
struct A68t271 * Joins;
};
typedef struct A68t269  A68_269 ;    /* STRUCT(REF MODE206,REF MODE271)  */
struct A68t270{
A68_INT  Stepnull;
A_PAD_INT(PAD_100)
};
typedef struct A68t270  A68_270 ;    /* STRUCT(INT)  */
struct A68t271{
struct A68t268  Join;
struct A68t271 * Rest;
};
typedef struct A68t271  A68_271 ;    /* STRUCT(MODE268,REF MODE271)  */
struct A68t273{
A68_INT  Nameno;
A_PAD_INT(PAD_101)
struct A68t273 * Rest;
};
typedef struct A68t273  A68_273 ;    /* STRUCT(INT,REF MODE273)  */
struct A68t279 { A68_INT mode; union {
A68_VC  mode1;
struct A68t205 * mode2;
} data; };
typedef struct A68t279  A68_279 ;    /* UNION(REF MODE26,REF MODE205)  */
struct A68t278{
struct A68t279  Item;
struct A68t278 * Rest;
};
typedef struct A68t278  A68_278 ;    /* STRUCT(MODE279,REF MODE278)  */
struct A68t281 { A68_INT mode; union {
struct A68t186  mode1;
struct A68t198  mode2;
struct A68t211  mode3;
struct A68t226  mode4;
struct A68t263  mode5;
struct A68t264 * mode6;
struct A68t265 * mode7;
struct A68t282 * mode8;
struct A68t283 * mode9;
struct A68t284 * mode10;
struct A68t285 * mode11;
struct A68t286 * mode12;
struct A68t287 * mode13;
struct A68t288 * mode14;
struct A68t289 * mode15;
struct A68t280 * mode16;
struct A68t290 * mode17;
} data; };
typedef struct A68t281  A68_281 ;    /* UNION(MODE186,MODE198,MODE211,MODE226,MODE263,REF MODE264,REF MODE265,REF MODE282,REF MODE283,REF MODE284,REF MODE285,REF MODE286,REF MODE287,REF MODE288,REF MODE289,REF MODE280,REF MODE290)  */
struct A68t280{
struct A68t281  Step;
struct A68t280 * Rest;
};
typedef struct A68t280  A68_280 ;    /* STRUCT(MODE281,REF MODE280)  */
struct A68t282{
struct A68t266  Seqlet;
};
typedef struct A68t282  A68_282 ;    /* STRUCT(MODE266)  */
struct A68t283{
struct A68t266  Seqvar;
};
typedef struct A68t283  A68_283 ;    /* STRUCT(MODE266)  */
struct A68t284{
struct A68t273 * Pvarnames;
struct A68t232  Init;
};
typedef struct A68t284  A68_284 ;    /* STRUCT(REF MODE273,MODE232)  */
struct A68t285{
struct A68t232  To;
struct A68t232  From;
};
typedef struct A68t285  A68_285 ;    /* STRUCT(MODE232,MODE232)  */
struct A68t286{
struct A68t232  Input;
struct A68t291 * Choices;
};
typedef struct A68t286  A68_286 ;    /* STRUCT(MODE232,REF MODE291)  */
struct A68t287{
struct A68t194  Cond;
struct A68t281  True;
struct A68t281  False;
};
typedef struct A68t287  A68_287 ;    /* STRUCT(MODE194,MODE281,MODE281)  */
struct A68t288{
struct A68t194  Repl;
struct A68t281  Body;
};
typedef struct A68t288  A68_288 ;    /* STRUCT(MODE194,MODE281)  */
struct A68t289{
A68_INT  Seqnull;
A_PAD_INT(PAD_102)
};
typedef struct A68t289  A68_289 ;    /* STRUCT(INT)  */
struct A68t290{
struct A68t194  Size;
struct A68t281  Elem;
};
typedef struct A68t290  A68_290 ;    /* STRUCT(MODE194,MODE281)  */
struct A68t291{
A68_BOOL  Check;
A_PAD_BOOL(PAD_103)
A68_INT  Sort;
A_PAD_INT(PAD_104)
struct A68t232  Test;
struct A68t281  Output;
struct A68t291 * Rest;
};
typedef struct A68t291  A68_291 ;    /* STRUCT(BOOL,INT,MODE232,MODE281,REF MODE291)  */
struct A68t292{
A68_BOOL  Check;
A_PAD_BOOL(PAD_105)
A68_INT  Sort;
A_PAD_INT(PAD_106)
struct A68t232  Test;
struct A68t232  Output;
struct A68t292 * Rest;
};
typedef struct A68t292  A68_292 ;    /* STRUCT(BOOL,INT,MODE232,MODE232,REF MODE292)  */
struct A68t293 { A68_INT mode; union {
struct A68t186  mode1;
struct A68t198  mode2;
struct A68t211  mode3;
struct A68t226  mode4;
struct A68t263  mode5;
} data; };
typedef struct A68t293  A68_293 ;    /* UNION(MODE186,MODE198,MODE211,MODE226,MODE263)  */
struct A68t294{
A68_BOOL  Biop;
A_PAD_BOOL(PAD_107)
A68_VC  Name;
struct A68t274  Macparams;
};
typedef struct A68t294  A68_294 ;    /* STRUCT(BOOL,REF MODE26,REF MODE274)  */
struct A68t295{
struct A68t194  Output;
};
typedef struct A68t295  A68_295 ;    /* STRUCT(MODE194)  */
struct A68t296{
A68_INT  Reform;
A_PAD_INT(PAD_108)
};
typedef struct A68t296  A68_296 ;    /* STRUCT(INT)  */
struct A68t297{
A68_VC  Name;
A68_INT  Contextno;
A_PAD_INT(PAD_109)
struct A68t126  Ctname;
};
typedef struct A68t297  A68_297 ;    /* STRUCT(REF MODE26,INT,MODE126)  */
struct A68t298{
A68_INT  Sort;
A_PAD_INT(PAD_110)
struct A68t232  Init;
struct A68t194  Ambigtime;
struct A68t232  Ambig;
struct A68t194  Delaytime;
};
typedef struct A68t298  A68_298 ;    /* STRUCT(INT,MODE232,MODE194,MODE232,MODE194)  */
struct A68t299{
struct A68t232  Init;
struct A68t194  Delaytime;
};
typedef struct A68t299  A68_299 ;    /* STRUCT(MODE232,MODE194)  */
struct A68t300{
struct A68t232  Init;
};
typedef struct A68t300  A68_300 ;    /* STRUCT(MODE232)  */
struct A68t301{
A68_INT  Sort;
A_PAD_INT(PAD_111)
struct A68t194  Interval;
struct A68t232  Init;
struct A68t194  Skew;
};
typedef struct A68t301  A68_301 ;    /* STRUCT(INT,MODE194,MODE232,MODE194)  */
struct A68t302{
A68_BOOL  Faster;
A_PAD_BOOL(PAD_112)
A68_INT  Sort;
A_PAD_INT(PAD_113)
struct A68t272  Inst;
struct A68t194  Scale;
struct A68t232  Init;
struct A68t194  Skew;
};
typedef struct A68t302  A68_302 ;    /* STRUCT(BOOL,INT,MODE272,MODE194,MODE232,MODE194)  */
struct A68t304 { A68_INT mode; union {
struct A68t277 * mode1;
struct A68t294 * mode2;
struct A68t295 * mode3;
struct A68t296 * mode4;
struct A68t297 * mode5;
struct A68t298 * mode6;
struct A68t299 * mode7;
struct A68t300 * mode8;
struct A68t301 * mode9;
struct A68t302 * mode10;
struct A68t303 * mode11;
struct A68t305 * mode12;
} data; };
typedef struct A68t304  A68_304 ;    /* UNION(REF MODE277,REF MODE294,REF MODE295,REF MODE296,REF MODE297,REF MODE298,REF MODE299,REF MODE300,REF MODE301,REF MODE302,REF MODE303,REF MODE305)  */
struct A68t303{
struct A68t184 * Joincheck;
A68_BOOL  Check;
A_PAD_BOOL(PAD_114)
struct A68t304  Fnbody;
};
typedef struct A68t303  A68_303 ;    /* STRUCT(REF MODE184,BOOL,MODE304)  */
struct A68t305{
A68_INT  Bodynull;
A_PAD_INT(PAD_115)
};
typedef struct A68t305  A68_305 ;    /* STRUCT(INT)  */
struct A68t306{
A68_INT  Sort;
A_PAD_INT(PAD_116)
struct A68t293  Spec;
};
typedef struct A68t306  A68_306 ;    /* STRUCT(INT,MODE293)  */
struct A68t307{
A68_VC  Name;
struct A68t210  Type;
struct A68t185  Attr;
};
typedef struct A68t307  A68_307 ;    /* STRUCT(REF MODE26,MODE210,MODE185)  */
A_VECTOR(struct A68t306 ,A68t309);
typedef struct A68t309  A68_309 ;    /* VECTOR [] MODE306 */
A_VECTOR(struct A68t307 ,A68t310);
typedef struct A68t310  A68_310 ;    /* VECTOR [] MODE307 */
struct A68t308{
A68_INT  Sort;
A_PAD_INT(PAD_117)
A68_BOOL  Macro;
A_PAD_BOOL(PAD_118)
A68_VC  Fnname;
struct A68t309  Macspecs;
struct A68t185  Attr;
struct A68t273 * Inputs;
struct A68t273 * Outputs;
struct A68t310  Nametypes;
struct A68t304  Fnbody;
struct A68t192 * Usage;
};
typedef struct A68t308  A68_308 ;    /* STRUCT(INT,BOOL,REF MODE26,REF MODE309,MODE185,REF MODE273,REF MODE273,REF MODE310,MODE304,REF MODE192)  */
A_VECTOR(struct A68t191 *,A68t312);
typedef struct A68t312  A68_312 ;    /* VECTOR [] REF MODE191 */
A_VECTOR(struct A68t207 *,A68t313);
typedef struct A68t313  A68_313 ;    /* VECTOR [] REF MODE207 */
A_VECTOR(struct A68t225 *,A68t314);
typedef struct A68t314  A68_314 ;    /* VECTOR [] REF MODE225 */
A_VECTOR(struct A68t231 *,A68t315);
typedef struct A68t315  A68_315 ;    /* VECTOR [] REF MODE231 */
A_VECTOR(struct A68t308 *,A68t316);
typedef struct A68t316  A68_316 ;    /* VECTOR [] REF MODE308 */
struct A68t311{
struct A68t312  Attrs;
struct A68t313  Ints;
struct A68t314  Types;
struct A68t315  Consts;
struct A68t316  Fns;
};
typedef struct A68t311  A68_311 ;    /* STRUCT(REF MODE312,REF MODE313,REF MODE314,REF MODE315,REF MODE316)  */
struct A68t317{
A68_INT  Closureno;
A_PAD_INT(PAD_119)
A68_INT  Sort;
A_PAD_INT(PAD_120)
struct A68t311 * Environ;
};
typedef struct A68t317  A68_317 ;    /* STRUCT(INT,INT,REF MODE311)  */
struct A68t318{
struct A68t317  Outer;
struct A68t318 * Rest;
};
typedef struct A68t318  A68_318 ;    /* STRUCT(MODE317,REF MODE318)  */
A_VECTOR(struct A68t318 ,A68t320);
typedef struct A68t320  A68_320 ;    /* VECTOR [] MODE318 */
struct A68t319{
struct A68t320  Outers;
struct A68t319 * Rest;
};
typedef struct A68t319  A68_319 ;    /* STRUCT(REF MODE320,REF MODE319)  */
struct A68t321{
A68_INT  Max_closureno;
A_PAD_INT(PAD_121)
struct A68t318 * Outers;
struct A68t318 * Freelist;
struct A68t319 * Outerslist;
};
typedef struct A68t321  A68_321 ;    /* STRUCT(INT,REF MODE318,REF MODE318,REF MODE319)  */
A_VECTOR(struct A68t318 *,A68t322);
typedef struct A68t322  A68_322 ;    /* VECTOR [] REF MODE318 */

A_PROCEDURE(struct A68t197 *,A68t323,(A68_INT ),(A68_INT ,void *));
typedef struct A68t323  A68_323 ;    /* PROC(INT) REF MODE197 */

A_PROCEDURE(struct A68t198 *,A68t324,(A68_INT ),(A68_INT ,void *));
typedef struct A68t324  A68_324 ;    /* PROC(INT) REF MODE198 */

A_PROCEDURE(struct A68t202 *,A68t325,(struct A68t194 ),(struct A68t194 ,void *));
typedef struct A68t325  A68_325 ;    /* PROC(MODE194) REF MODE202 */

A_PROCEDURE(struct A68t205 *,A68t326,(struct A68t194 ),(struct A68t194 ,void *));
typedef struct A68t326  A68_326 ;    /* PROC(MODE194) REF MODE205 */

A_PROCEDURE(struct A68t211 *,A68t327,(A68_INT ),(A68_INT ,void *));
typedef struct A68t327  A68_327 ;    /* PROC(INT) REF MODE211 */

A_PROCEDURE(struct A68t215 *,A68t328,(struct A68t210 ),(struct A68t210 ,void *));
typedef struct A68t328  A68_328 ;    /* PROC(MODE210) REF MODE215 */

A_PROCEDURE(struct A68t219 *,A68t329,(struct A68t210 ),(struct A68t210 ,void *));
typedef struct A68t329  A68_329 ;    /* PROC(MODE210) REF MODE219 */

A_PROCEDURE(struct A68t226 *,A68t330,(A68_INT ),(A68_INT ,void *));
typedef struct A68t330  A68_330 ;    /* PROC(INT) REF MODE226 */

A_PROCEDURE(struct A68t230 *,A68t331,(struct A68t210 ),(struct A68t210 ,void *));
typedef struct A68t331  A68_331 ;    /* PROC(MODE210) REF MODE230 */

A_PROCEDURE(struct A68t282 *,A68t332,(struct A68t266 ),(struct A68t266 ,void *));
typedef struct A68t332  A68_332 ;    /* PROC(MODE266) REF MODE282 */

A_PROCEDURE(struct A68t283 *,A68t333,(struct A68t266 ),(struct A68t266 ,void *));
typedef struct A68t333  A68_333 ;    /* PROC(MODE266) REF MODE283 */

A_PROCEDURE(struct A68t258 *,A68t334,(struct A68t232 ),(struct A68t232 ,void *));
typedef struct A68t334  A68_334 ;    /* PROC(MODE232) REF MODE258 */

A_PROCEDURE(struct A68t277 *,A68t335,(struct A68t232 ),(struct A68t232 ,void *));
typedef struct A68t335  A68_335 ;    /* PROC(MODE232) REF MODE277 */

A_PROCEDURE(struct A68t263 *,A68t336,(A68_INT ),(A68_INT ,void *));
typedef struct A68t336  A68_336 ;    /* PROC(INT) REF MODE263 */

A_PROCEDURE(struct A68t295 *,A68t337,(struct A68t194 ),(struct A68t194 ,void *));
typedef struct A68t337  A68_337 ;    /* PROC(MODE194) REF MODE295 */

A_PROCEDURE(struct A68t300 *,A68t338,(struct A68t232 ),(struct A68t232 ,void *));
typedef struct A68t338  A68_338 ;    /* PROC(MODE232) REF MODE300 */

A_PROCEDURE(struct A68t203 *,A68t339,(A68_INT ),(A68_INT ,void *));
typedef struct A68t339  A68_339 ;    /* PROC(INT) REF MODE203 */

A_PROCEDURE(struct A68t186 *,A68t340,(A68_INT ),(A68_INT ,void *));
typedef struct A68t340  A68_340 ;    /* PROC(INT) REF MODE186 */

A_PROCEDURE(struct A68t193 *,A68t341,(struct A68t185 ),(struct A68t185 ,void *));
typedef struct A68t341  A68_341 ;    /* PROC(MODE185) REF MODE193 */

A_PROCEDURE(struct A68t189 *,A68t342,(struct A68t185 ),(struct A68t185 ,void *));
typedef struct A68t342  A68_342 ;    /* PROC(MODE185) REF MODE189 */
A_VECTOR(struct A68t183 *,A68t343);
typedef struct A68t343  A68_343 ;    /* VECTOR [] REF MODE183 */

A_PROCEDURE(struct A68t195 *,A68t344,(A68_INT ),(A68_INT ,void *));
typedef struct A68t344  A68_344 ;    /* PROC(INT) REF MODE195 */

A_PROCEDURE(A68_INT ,A68t345,(struct A68t194 ,struct A68t97 ),(struct A68t194 ,struct A68t97 ,void *));
typedef struct A68t345  A68_345 ;    /* PROC(MODE194,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t346,(struct A68t194 ),(struct A68t194 ,void *));
typedef struct A68t346  A68_346 ;    /* PROC(MODE194) INT */

A_PROCEDURE(A68_VOID ,A68t347,(struct A68t194 ,struct A68t194 *),(struct A68t194 ,struct A68t194 *,void *));
typedef struct A68t347  A68_347 ;    /* PROC(MODE194) MODE194 */

A_PROCEDURE(struct A68t191 *,A68t348,(struct A68t317 ),(struct A68t317 ,void *));
typedef struct A68t348  A68_348 ;    /* PROC(MODE317) REF MODE191 */

A_PROCEDURE(struct A68t207 *,A68t349,(struct A68t317 ),(struct A68t317 ,void *));
typedef struct A68t349  A68_349 ;    /* PROC(MODE317) REF MODE207 */

A_PROCEDURE(struct A68t225 *,A68t350,(struct A68t317 ),(struct A68t317 ,void *));
typedef struct A68t350  A68_350 ;    /* PROC(MODE317) REF MODE225 */

A_PROCEDURE(struct A68t231 *,A68t351,(struct A68t317 ),(struct A68t317 ,void *));
typedef struct A68t351  A68_351 ;    /* PROC(MODE317) REF MODE231 */

A_PROCEDURE(struct A68t308 *,A68t352,(struct A68t317 ),(struct A68t317 ,void *));
typedef struct A68t352  A68_352 ;    /* PROC(MODE317) REF MODE308 */

A_PROCEDURE(A68_INT ,A68t353,(struct A68t192 *,struct A68t312 ),(struct A68t192 *,struct A68t312 ,void *));
typedef struct A68t353  A68_353 ;    /* PROC(REF MODE192,REF MODE312) INT */

A_PROCEDURE(A68_INT ,A68t354,(struct A68t192 *,struct A68t313 ),(struct A68t192 *,struct A68t313 ,void *));
typedef struct A68t354  A68_354 ;    /* PROC(REF MODE192,REF MODE313) INT */

A_PROCEDURE(A68_INT ,A68t355,(struct A68t192 *,struct A68t314 ),(struct A68t192 *,struct A68t314 ,void *));
typedef struct A68t355  A68_355 ;    /* PROC(REF MODE192,REF MODE314) INT */

A_PROCEDURE(A68_INT ,A68t356,(struct A68t192 *,struct A68t315 ),(struct A68t192 *,struct A68t315 ,void *));
typedef struct A68t356  A68_356 ;    /* PROC(REF MODE192,REF MODE315) INT */

A_PROCEDURE(A68_INT ,A68t357,(struct A68t192 *,struct A68t316 ),(struct A68t192 *,struct A68t316 ,void *));
typedef struct A68t357  A68_357 ;    /* PROC(REF MODE192,REF MODE316) INT */

A_PROCEDURE(struct A68t191 *,A68t358,(struct A68t186 ,struct A68t321 *,struct A68t311 *),(struct A68t186 ,struct A68t321 *,struct A68t311 *,void *));
typedef struct A68t358  A68_358 ;    /* PROC(MODE186,REF MODE321,REF MODE311) REF MODE191 */

A_PROCEDURE(struct A68t207 *,A68t359,(struct A68t198 ,struct A68t321 *,struct A68t311 *),(struct A68t198 ,struct A68t321 *,struct A68t311 *,void *));
typedef struct A68t359  A68_359 ;    /* PROC(MODE198,REF MODE321,REF MODE311) REF MODE207 */

A_PROCEDURE(struct A68t225 *,A68t360,(struct A68t211 ,struct A68t321 *,struct A68t311 *),(struct A68t211 ,struct A68t321 *,struct A68t311 *,void *));
typedef struct A68t360  A68_360 ;    /* PROC(MODE211,REF MODE321,REF MODE311) REF MODE225 */

A_PROCEDURE(struct A68t231 *,A68t361,(struct A68t226 ,struct A68t321 *,struct A68t311 *),(struct A68t226 ,struct A68t321 *,struct A68t311 *,void *));
typedef struct A68t361  A68_361 ;    /* PROC(MODE226,REF MODE321,REF MODE311) REF MODE231 */

A_PROCEDURE(struct A68t308 *,A68t362,(struct A68t263 ,struct A68t321 *,struct A68t311 *),(struct A68t263 ,struct A68t321 *,struct A68t311 *,void *));
typedef struct A68t362  A68_362 ;    /* PROC(MODE263,REF MODE321,REF MODE311) REF MODE308 */

A_PROCEDURE(struct A68t214 *,A68t363,(struct A68t308 *),(struct A68t308 *,void *));
typedef struct A68t363  A68_363 ;    /* PROC(REF MODE308) REF MODE214 */

A_PROCEDURE(A68_VOID ,A68t364,(struct A68t213 *,struct A68t194 *),(struct A68t213 *,struct A68t194 *,void *));
typedef struct A68t364  A68_364 ;    /* PROC(REF MODE213) MODE194 */

A_PROCEDURE(A68_VOID ,A68t365,(struct A68t210 ,struct A68t311 *,struct A68t194 *),(struct A68t210 ,struct A68t311 *,struct A68t194 *,void *));
typedef struct A68t365  A68_365 ;    /* PROC(MODE210,REF MODE311) MODE194 */

A_PROCEDURE(struct A68t308 *,A68t366,(struct A68t308 *,struct A68t311 *,struct A68t311 *),(struct A68t308 *,struct A68t311 *,struct A68t311 *,void *));
typedef struct A68t366  A68_366 ;    /* PROC(REF MODE308,REF MODE311,REF MODE311) REF MODE308 */

A_PROCEDURE(A68_VOID ,A68t367,(struct A68t273 *,struct A68t308 *,struct A68t210 *),(struct A68t273 *,struct A68t308 *,struct A68t210 *,void *));
typedef struct A68t367  A68_367 ;    /* PROC(REF MODE273,REF MODE308) MODE210 */

A_PROCEDURE(A68_INT ,A68t368,(struct A68t273 *),(struct A68t273 *,void *));
typedef struct A68t368  A68_368 ;    /* PROC(REF MODE273) INT */

A_PROCEDURE(A68_INT ,A68t369,(struct A68t273 *,A68_INT ),(struct A68t273 *,A68_INT ,void *));
typedef struct A68t369  A68_369 ;    /* PROC(REF MODE273,INT) INT */

A_PROCEDURE(A68_VOID ,A68t370,(struct A68t232 ,struct A68t308 *,struct A68t311 *,struct A68t210 *),(struct A68t232 ,struct A68t308 *,struct A68t311 *,struct A68t210 *,void *));
typedef struct A68t370  A68_370 ;    /* PROC(MODE232,REF MODE308,REF MODE311) MODE210 */

A_PROCEDURE(A68_VOID ,A68t371,(struct A68t210 ,struct A68t311 *,struct A68t210 *),(struct A68t210 ,struct A68t311 *,struct A68t210 *,void *));
typedef struct A68t371  A68_371 ;    /* PROC(MODE210,REF MODE311) MODE210 */

A_PROCEDURE(A68_BOOL ,A68t372,(struct A68t210 ,struct A68t210 ,struct A68t311 *,struct A68t311 *,A68_BOOL ),(struct A68t210 ,struct A68t210 ,struct A68t311 *,struct A68t311 *,A68_BOOL ,void *));
typedef struct A68t372  A68_372 ;    /* PROC(MODE210,MODE210,REF MODE311,REF MODE311,BOOL) BOOL */

A_PROCEDURE(A68_INT ,A68t373,(struct A68t241 *,struct A68t311 *),(struct A68t241 *,struct A68t311 *,void *));
typedef struct A68t373  A68_373 ;    /* PROC(REF MODE241,REF MODE311) INT */
struct A68t374{
struct A68t185  A;
A68_BOOL  C;
A_PAD_BOOL(PAD_122)
};
typedef struct A68t374  A68_374 ;    /* STRUCT(MODE185,BOOL)  */
struct A68t375{
struct A68t188 * A;
A68_BOOL  C;
A_PAD_BOOL(PAD_123)
};
typedef struct A68t375  A68_375 ;    /* STRUCT(REF MODE188,BOOL)  */
struct A68t376{
struct A68t191 * A;
A68_BOOL  C;
A_PAD_BOOL(PAD_124)
};
typedef struct A68t376  A68_376 ;    /* STRUCT(REF MODE191,BOOL)  */
struct A68t377{
struct A68t194  F;
A68_BOOL  C;
A_PAD_BOOL(PAD_125)
};
typedef struct A68t377  A68_377 ;    /* STRUCT(MODE194,BOOL)  */
struct A68t378{
struct A68t206 * F;
A68_BOOL  C;
A_PAD_BOOL(PAD_126)
};
typedef struct A68t378  A68_378 ;    /* STRUCT(REF MODE206,BOOL)  */
struct A68t379{
struct A68t207 * I;
A68_BOOL  C;
A_PAD_BOOL(PAD_127)
};
typedef struct A68t379  A68_379 ;    /* STRUCT(REF MODE207,BOOL)  */
struct A68t380{
struct A68t209  R;
A68_BOOL  C;
A_PAD_BOOL(PAD_128)
};
typedef struct A68t380  A68_380 ;    /* STRUCT(MODE209,BOOL)  */
struct A68t381{
struct A68t208  F;
A68_BOOL  C;
A_PAD_BOOL(PAD_129)
};
typedef struct A68t381  A68_381 ;    /* STRUCT(MODE208,BOOL)  */
struct A68t382{
struct A68t213 * T;
A68_BOOL  C;
A_PAD_BOOL(PAD_130)
};
typedef struct A68t382  A68_382 ;    /* STRUCT(REF MODE213,BOOL)  */
struct A68t383{
struct A68t210  T;
A68_BOOL  C;
A_PAD_BOOL(PAD_131)
};
typedef struct A68t383  A68_383 ;    /* STRUCT(MODE210,BOOL)  */
struct A68t384{
struct A68t221  A;
A68_BOOL  C;
A_PAD_BOOL(PAD_132)
};
typedef struct A68t384  A68_384 ;    /* STRUCT(MODE221,BOOL)  */
struct A68t385{
struct A68t224  A;
A68_BOOL  C;
A_PAD_BOOL(PAD_133)
};
typedef struct A68t385  A68_385 ;    /* STRUCT(REF MODE224,BOOL)  */
struct A68t386{
struct A68t223  T;
A68_BOOL  C;
A_PAD_BOOL(PAD_134)
};
typedef struct A68t386  A68_386 ;    /* STRUCT(MODE223,BOOL)  */
struct A68t387{
struct A68t225 * T;
A68_BOOL  C;
A_PAD_BOOL(PAD_135)
};
typedef struct A68t387  A68_387 ;    /* STRUCT(REF MODE225,BOOL)  */
struct A68t388{
struct A68t231 * Co;
A68_BOOL  C;
A_PAD_BOOL(PAD_136)
};
typedef struct A68t388  A68_388 ;    /* STRUCT(REF MODE231,BOOL)  */
struct A68t389{
struct A68t236 * Ua;
A68_BOOL  C;
A_PAD_BOOL(PAD_137)
};
typedef struct A68t389  A68_389 ;    /* STRUCT(REF MODE236,BOOL)  */
struct A68t390{
struct A68t247 * U;
A68_BOOL  C;
A_PAD_BOOL(PAD_138)
};
typedef struct A68t390  A68_390 ;    /* STRUCT(REF MODE247,BOOL)  */
struct A68t391{
struct A68t292 * U;
A68_BOOL  C;
A_PAD_BOOL(PAD_139)
};
typedef struct A68t391  A68_391 ;    /* STRUCT(REF MODE292,BOOL)  */
struct A68t392{
struct A68t232  U;
A68_BOOL  C;
A_PAD_BOOL(PAD_140)
};
typedef struct A68t392  A68_392 ;    /* STRUCT(MODE232,BOOL)  */
struct A68t393{
struct A68t276  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_141)
};
typedef struct A68t393  A68_393 ;    /* STRUCT(MODE276,BOOL)  */
struct A68t394{
struct A68t274  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_142)
};
typedef struct A68t394  A68_394 ;    /* STRUCT(REF MODE274,BOOL)  */
struct A68t395{
struct A68t272  I;
A68_BOOL  C;
A_PAD_BOOL(PAD_143)
};
typedef struct A68t395  A68_395 ;    /* STRUCT(MODE272,BOOL)  */
struct A68t396{
struct A68t293  D;
A68_BOOL  C;
A_PAD_BOOL(PAD_144)
};
typedef struct A68t396  A68_396 ;    /* STRUCT(MODE293,BOOL)  */
struct A68t397{
struct A68t278 * P;
A68_BOOL  C;
A_PAD_BOOL(PAD_145)
};
typedef struct A68t397  A68_397 ;    /* STRUCT(REF MODE278,BOOL)  */
struct A68t398{
struct A68t264 * P;
A68_BOOL  C;
A_PAD_BOOL(PAD_146)
};
typedef struct A68t398  A68_398 ;    /* STRUCT(REF MODE264,BOOL)  */
struct A68t399{
struct A68t265 * F;
A68_BOOL  C;
A_PAD_BOOL(PAD_147)
};
typedef struct A68t399  A68_399 ;    /* STRUCT(REF MODE265,BOOL)  */
struct A68t400{
struct A68t273 * N;
A68_BOOL  C;
A_PAD_BOOL(PAD_148)
};
typedef struct A68t400  A68_400 ;    /* STRUCT(REF MODE273,BOOL)  */
struct A68t401{
struct A68t266 * L;
A68_BOOL  C;
A_PAD_BOOL(PAD_149)
};
typedef struct A68t401  A68_401 ;    /* STRUCT(REF MODE266,BOOL)  */
struct A68t402{
struct A68t291 * S;
A68_BOOL  C;
A_PAD_BOOL(PAD_150)
};
typedef struct A68t402  A68_402 ;    /* STRUCT(REF MODE291,BOOL)  */
struct A68t403{
struct A68t281  S;
A68_BOOL  C;
A_PAD_BOOL(PAD_151)
};
typedef struct A68t403  A68_403 ;    /* STRUCT(MODE281,BOOL)  */
struct A68t404{
struct A68t280 * S;
A68_BOOL  C;
A_PAD_BOOL(PAD_152)
};
typedef struct A68t404  A68_404 ;    /* STRUCT(REF MODE280,BOOL)  */
struct A68t405{
struct A68t267 * M;
A68_BOOL  C;
A_PAD_BOOL(PAD_153)
};
typedef struct A68t405  A68_405 ;    /* STRUCT(REF MODE267,BOOL)  */
struct A68t406{
struct A68t268 * J;
A68_BOOL  C;
A_PAD_BOOL(PAD_154)
};
typedef struct A68t406  A68_406 ;    /* STRUCT(REF MODE268,BOOL)  */
struct A68t407{
struct A68t271 * J;
A68_BOOL  C;
A_PAD_BOOL(PAD_155)
};
typedef struct A68t407  A68_407 ;    /* STRUCT(REF MODE271,BOOL)  */
struct A68t408{
struct A68t262  S;
A68_BOOL  C;
A_PAD_BOOL(PAD_156)
};
typedef struct A68t408  A68_408 ;    /* STRUCT(MODE262,BOOL)  */
struct A68t409{
struct A68t261 * S;
A68_BOOL  C;
A_PAD_BOOL(PAD_157)
};
typedef struct A68t409  A68_409 ;    /* STRUCT(REF MODE261,BOOL)  */
struct A68t410{
struct A68t304  F;
A68_BOOL  C;
A_PAD_BOOL(PAD_158)
};
typedef struct A68t410  A68_410 ;    /* STRUCT(MODE304,BOOL)  */
struct A68t411{
struct A68t306  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_159)
};
typedef struct A68t411  A68_411 ;    /* STRUCT(MODE306,BOOL)  */
struct A68t412{
struct A68t309  M;
A68_BOOL  C;
A_PAD_BOOL(PAD_160)
};
typedef struct A68t412  A68_412 ;    /* STRUCT(REF MODE309,BOOL)  */
struct A68t413{
struct A68t308 * F;
A68_BOOL  C;
A_PAD_BOOL(PAD_161)
};
typedef struct A68t413  A68_413 ;    /* STRUCT(REF MODE308,BOOL)  */
struct A68t414{
struct A68t317  O;
A68_BOOL  C;
A_PAD_BOOL(PAD_162)
};
typedef struct A68t414  A68_414 ;    /* STRUCT(MODE317,BOOL)  */
struct A68t415{
struct A68t321 * Cl;
A68_BOOL  C;
A_PAD_BOOL(PAD_163)
};
typedef struct A68t415  A68_415 ;    /* STRUCT(REF MODE321,BOOL)  */
struct A68t416 ;

A_PROCEDURE(A68_VOID ,A68t417,(struct A68t185 ,struct A68t416 *,struct A68t374 *),(struct A68t185 ,struct A68t416 *,struct A68t374 *,void *));
typedef struct A68t417  A68_417 ;    /* PROC(MODE185,REF MODE416) MODE374 */

A_PROCEDURE(A68_VOID ,A68t418,(struct A68t188 *,struct A68t416 *,struct A68t375 *),(struct A68t188 *,struct A68t416 *,struct A68t375 *,void *));
typedef struct A68t418  A68_418 ;    /* PROC(REF MODE188,REF MODE416) MODE375 */

A_PROCEDURE(A68_VOID ,A68t419,(struct A68t191 *,struct A68t416 *,struct A68t376 *),(struct A68t191 *,struct A68t416 *,struct A68t376 *,void *));
typedef struct A68t419  A68_419 ;    /* PROC(REF MODE191,REF MODE416) MODE376 */

A_PROCEDURE(A68_VOID ,A68t420,(struct A68t194 ,struct A68t416 *,struct A68t377 *),(struct A68t194 ,struct A68t416 *,struct A68t377 *,void *));
typedef struct A68t420  A68_420 ;    /* PROC(MODE194,REF MODE416) MODE377 */

A_PROCEDURE(A68_VOID ,A68t421,(struct A68t206 *,struct A68t416 *,struct A68t378 *),(struct A68t206 *,struct A68t416 *,struct A68t378 *,void *));
typedef struct A68t421  A68_421 ;    /* PROC(REF MODE206,REF MODE416) MODE378 */

A_PROCEDURE(A68_VOID ,A68t422,(struct A68t207 *,struct A68t416 *,struct A68t379 *),(struct A68t207 *,struct A68t416 *,struct A68t379 *,void *));
typedef struct A68t422  A68_422 ;    /* PROC(REF MODE207,REF MODE416) MODE379 */

A_PROCEDURE(A68_VOID ,A68t423,(struct A68t209 ,struct A68t416 *,struct A68t380 *),(struct A68t209 ,struct A68t416 *,struct A68t380 *,void *));
typedef struct A68t423  A68_423 ;    /* PROC(MODE209,REF MODE416) MODE380 */

A_PROCEDURE(A68_VOID ,A68t424,(struct A68t208 ,struct A68t416 *,struct A68t381 *),(struct A68t208 ,struct A68t416 *,struct A68t381 *,void *));
typedef struct A68t424  A68_424 ;    /* PROC(MODE208,REF MODE416) MODE381 */

A_PROCEDURE(A68_VOID ,A68t425,(struct A68t213 *,struct A68t416 *,struct A68t382 *),(struct A68t213 *,struct A68t416 *,struct A68t382 *,void *));
typedef struct A68t425  A68_425 ;    /* PROC(REF MODE213,REF MODE416) MODE382 */

A_PROCEDURE(A68_VOID ,A68t426,(struct A68t210 ,struct A68t416 *,struct A68t383 *),(struct A68t210 ,struct A68t416 *,struct A68t383 *,void *));
typedef struct A68t426  A68_426 ;    /* PROC(MODE210,REF MODE416) MODE383 */

A_PROCEDURE(A68_VOID ,A68t427,(struct A68t221 ,struct A68t416 *,struct A68t384 *),(struct A68t221 ,struct A68t416 *,struct A68t384 *,void *));
typedef struct A68t427  A68_427 ;    /* PROC(MODE221,REF MODE416) MODE384 */

A_PROCEDURE(A68_VOID ,A68t428,(struct A68t224 ,struct A68t416 *,struct A68t385 *),(struct A68t224 ,struct A68t416 *,struct A68t385 *,void *));
typedef struct A68t428  A68_428 ;    /* PROC(REF MODE224,REF MODE416) MODE385 */

A_PROCEDURE(A68_VOID ,A68t429,(struct A68t223 ,struct A68t416 *,struct A68t386 *),(struct A68t223 ,struct A68t416 *,struct A68t386 *,void *));
typedef struct A68t429  A68_429 ;    /* PROC(MODE223,REF MODE416) MODE386 */

A_PROCEDURE(A68_VOID ,A68t430,(struct A68t225 *,struct A68t416 *,struct A68t387 *),(struct A68t225 *,struct A68t416 *,struct A68t387 *,void *));
typedef struct A68t430  A68_430 ;    /* PROC(REF MODE225,REF MODE416) MODE387 */

A_PROCEDURE(A68_VOID ,A68t431,(struct A68t231 *,struct A68t416 *,struct A68t388 *),(struct A68t231 *,struct A68t416 *,struct A68t388 *,void *));
typedef struct A68t431  A68_431 ;    /* PROC(REF MODE231,REF MODE416) MODE388 */

A_PROCEDURE(A68_VOID ,A68t432,(struct A68t236 *,struct A68t416 *,struct A68t389 *),(struct A68t236 *,struct A68t416 *,struct A68t389 *,void *));
typedef struct A68t432  A68_432 ;    /* PROC(REF MODE236,REF MODE416) MODE389 */

A_PROCEDURE(A68_VOID ,A68t433,(struct A68t247 *,struct A68t416 *,struct A68t390 *),(struct A68t247 *,struct A68t416 *,struct A68t390 *,void *));
typedef struct A68t433  A68_433 ;    /* PROC(REF MODE247,REF MODE416) MODE390 */

A_PROCEDURE(A68_VOID ,A68t434,(struct A68t292 *,struct A68t416 *,struct A68t391 *),(struct A68t292 *,struct A68t416 *,struct A68t391 *,void *));
typedef struct A68t434  A68_434 ;    /* PROC(REF MODE292,REF MODE416) MODE391 */

A_PROCEDURE(A68_VOID ,A68t435,(struct A68t232 ,struct A68t416 *,struct A68t392 *),(struct A68t232 ,struct A68t416 *,struct A68t392 *,void *));
typedef struct A68t435  A68_435 ;    /* PROC(MODE232,REF MODE416) MODE392 */

A_PROCEDURE(A68_VOID ,A68t436,(struct A68t276 ,struct A68t416 *,struct A68t393 *),(struct A68t276 ,struct A68t416 *,struct A68t393 *,void *));
typedef struct A68t436  A68_436 ;    /* PROC(MODE276,REF MODE416) MODE393 */

A_PROCEDURE(A68_VOID ,A68t437,(struct A68t274 ,struct A68t416 *,struct A68t394 *),(struct A68t274 ,struct A68t416 *,struct A68t394 *,void *));
typedef struct A68t437  A68_437 ;    /* PROC(REF MODE274,REF MODE416) MODE394 */

A_PROCEDURE(A68_VOID ,A68t438,(struct A68t272 ,struct A68t416 *,struct A68t395 *),(struct A68t272 ,struct A68t416 *,struct A68t395 *,void *));
typedef struct A68t438  A68_438 ;    /* PROC(MODE272,REF MODE416) MODE395 */

A_PROCEDURE(A68_VOID ,A68t439,(struct A68t293 ,struct A68t416 *,struct A68t396 *),(struct A68t293 ,struct A68t416 *,struct A68t396 *,void *));
typedef struct A68t439  A68_439 ;    /* PROC(MODE293,REF MODE416) MODE396 */

A_PROCEDURE(A68_VOID ,A68t440,(struct A68t278 *,struct A68t416 *,struct A68t397 *),(struct A68t278 *,struct A68t416 *,struct A68t397 *,void *));
typedef struct A68t440  A68_440 ;    /* PROC(REF MODE278,REF MODE416) MODE397 */

A_PROCEDURE(A68_VOID ,A68t441,(struct A68t264 *,struct A68t416 *,struct A68t398 *),(struct A68t264 *,struct A68t416 *,struct A68t398 *,void *));
typedef struct A68t441  A68_441 ;    /* PROC(REF MODE264,REF MODE416) MODE398 */

A_PROCEDURE(A68_VOID ,A68t442,(struct A68t265 *,struct A68t416 *,struct A68t399 *),(struct A68t265 *,struct A68t416 *,struct A68t399 *,void *));
typedef struct A68t442  A68_442 ;    /* PROC(REF MODE265,REF MODE416) MODE399 */

A_PROCEDURE(A68_VOID ,A68t443,(struct A68t273 *,struct A68t416 *,struct A68t400 *),(struct A68t273 *,struct A68t416 *,struct A68t400 *,void *));
typedef struct A68t443  A68_443 ;    /* PROC(REF MODE273,REF MODE416) MODE400 */

A_PROCEDURE(A68_VOID ,A68t444,(struct A68t266 *,struct A68t416 *,struct A68t401 *),(struct A68t266 *,struct A68t416 *,struct A68t401 *,void *));
typedef struct A68t444  A68_444 ;    /* PROC(REF MODE266,REF MODE416) MODE401 */

A_PROCEDURE(A68_VOID ,A68t445,(struct A68t291 *,struct A68t416 *,struct A68t402 *),(struct A68t291 *,struct A68t416 *,struct A68t402 *,void *));
typedef struct A68t445  A68_445 ;    /* PROC(REF MODE291,REF MODE416) MODE402 */

A_PROCEDURE(A68_VOID ,A68t446,(struct A68t281 ,struct A68t416 *,struct A68t403 *),(struct A68t281 ,struct A68t416 *,struct A68t403 *,void *));
typedef struct A68t446  A68_446 ;    /* PROC(MODE281,REF MODE416) MODE403 */

A_PROCEDURE(A68_VOID ,A68t447,(struct A68t280 *,struct A68t416 *,struct A68t404 *),(struct A68t280 *,struct A68t416 *,struct A68t404 *,void *));
typedef struct A68t447  A68_447 ;    /* PROC(REF MODE280,REF MODE416) MODE404 */

A_PROCEDURE(A68_VOID ,A68t448,(struct A68t267 *,struct A68t416 *,struct A68t405 *),(struct A68t267 *,struct A68t416 *,struct A68t405 *,void *));
typedef struct A68t448  A68_448 ;    /* PROC(REF MODE267,REF MODE416) MODE405 */

A_PROCEDURE(A68_VOID ,A68t449,(struct A68t268 *,struct A68t416 *,struct A68t406 *),(struct A68t268 *,struct A68t416 *,struct A68t406 *,void *));
typedef struct A68t449  A68_449 ;    /* PROC(REF MODE268,REF MODE416) MODE406 */

A_PROCEDURE(A68_VOID ,A68t450,(struct A68t271 *,struct A68t416 *,struct A68t407 *),(struct A68t271 *,struct A68t416 *,struct A68t407 *,void *));
typedef struct A68t450  A68_450 ;    /* PROC(REF MODE271,REF MODE416) MODE407 */

A_PROCEDURE(A68_VOID ,A68t451,(struct A68t262 ,struct A68t416 *,struct A68t408 *),(struct A68t262 ,struct A68t416 *,struct A68t408 *,void *));
typedef struct A68t451  A68_451 ;    /* PROC(MODE262,REF MODE416) MODE408 */

A_PROCEDURE(A68_VOID ,A68t452,(struct A68t261 *,struct A68t416 *,struct A68t409 *),(struct A68t261 *,struct A68t416 *,struct A68t409 *,void *));
typedef struct A68t452  A68_452 ;    /* PROC(REF MODE261,REF MODE416) MODE409 */

A_PROCEDURE(A68_VOID ,A68t453,(struct A68t304 ,struct A68t416 *,struct A68t410 *),(struct A68t304 ,struct A68t416 *,struct A68t410 *,void *));
typedef struct A68t453  A68_453 ;    /* PROC(MODE304,REF MODE416) MODE410 */

A_PROCEDURE(A68_VOID ,A68t454,(struct A68t306 ,struct A68t416 *,struct A68t411 *),(struct A68t306 ,struct A68t416 *,struct A68t411 *,void *));
typedef struct A68t454  A68_454 ;    /* PROC(MODE306,REF MODE416) MODE411 */

A_PROCEDURE(A68_VOID ,A68t455,(struct A68t309 ,struct A68t416 *,struct A68t412 *),(struct A68t309 ,struct A68t416 *,struct A68t412 *,void *));
typedef struct A68t455  A68_455 ;    /* PROC(REF MODE309,REF MODE416) MODE412 */

A_PROCEDURE(A68_VOID ,A68t456,(struct A68t308 *,struct A68t416 *,struct A68t413 *),(struct A68t308 *,struct A68t416 *,struct A68t413 *,void *));
typedef struct A68t456  A68_456 ;    /* PROC(REF MODE308,REF MODE416) MODE413 */

A_PROCEDURE(A68_VOID ,A68t457,(struct A68t317 ,struct A68t416 *,struct A68t414 *),(struct A68t317 ,struct A68t416 *,struct A68t414 *,void *));
typedef struct A68t457  A68_457 ;    /* PROC(MODE317,REF MODE416) MODE414 */

A_PROCEDURE(A68_VOID ,A68t458,(struct A68t321 *,struct A68t416 *,struct A68t97 ,struct A68t415 *),(struct A68t321 *,struct A68t416 *,struct A68t97 ,struct A68t415 *,void *));
typedef struct A68t458  A68_458 ;    /* PROC(REF MODE321,REF MODE416,MODE97) MODE415 */
struct A68t416{
struct A68t417  Attr;
struct A68t418  Attrstr;
struct A68t419  Attrdec;
struct A68t420  Formula;
struct A68t421  Formulas;
struct A68t422  Intdec;
struct A68t423  Range;
struct A68t424  Formularange;
struct A68t425  Tstr;
struct A68t426  Type;
struct A68t427  Alternative;
struct A68t428  Alternatives;
struct A68t429  Typebody;
struct A68t430  Typedec;
struct A68t431  Constdec;
struct A68t432  Ualts;
struct A68t433  Ustr;
struct A68t434  Uchoices;
struct A68t435  Unit;
struct A68t436  Mparam;
struct A68t437  Macparams;
struct A68t438  Instance;
struct A68t439  Declaration;
struct A68t440  Printitems;
struct A68t441  Print;
struct A68t442  Fault;
struct A68t443  Names;
struct A68t444  Let;
struct A68t445  Seqchoices;
struct A68t446  Seqstep;
struct A68t447  Sequence;
struct A68t448  Make;
struct A68t449  Join;
struct A68t450  Joins;
struct A68t451  Step;
struct A68t452  Series;
struct A68t453  Fnbody;
struct A68t454  Macspec;
struct A68t455  Macspecs;
struct A68t456  Fndec;
struct A68t457  Outer;
struct A68t458  Closure;
struct A68t416 * Rest;
};
typedef struct A68t416  A68_416 ;    /* STRUCT(MODE417,MODE418,MODE419,MODE420,MODE421,MODE422,MODE423,MODE424,MODE425,MODE426,MODE427,MODE428,MODE429,MODE430,MODE431,MODE432,MODE433,MODE434,MODE435,MODE436,MODE437,MODE438,MODE439,MODE440,MODE441,MODE442,MODE443,MODE444,MODE445,MODE446,MODE447,MODE448,MODE449,MODE450,MODE451,MODE452,MODE453,MODE454,MODE455,MODE456,MODE457,MODE458,REF MODE416)  */
struct A68t460 ;

A_PROCEDURE(struct A68t416 *,A68t459,(struct A68t416 *,struct A68t460 ),(struct A68t416 *,struct A68t460 ,void *));
typedef struct A68t459  A68_459 ;    /* PROC(REF MODE416,MODE460) REF MODE416 */
A_VECTOR(struct A68t461 ,A68t460);
typedef struct A68t460  A68_460 ;    /* VECTOR [] MODE461 */
struct A68t461 { A68_INT mode; union {
struct A68t417  mode1;
struct A68t418  mode2;
struct A68t419  mode3;
struct A68t420  mode4;
struct A68t421  mode5;
struct A68t422  mode6;
struct A68t423  mode7;
struct A68t424  mode8;
struct A68t425  mode9;
struct A68t426  mode10;
struct A68t427  mode11;
struct A68t428  mode12;
struct A68t429  mode13;
struct A68t430  mode14;
struct A68t431  mode15;
struct A68t432  mode16;
struct A68t433  mode17;
struct A68t434  mode18;
struct A68t435  mode19;
struct A68t436  mode20;
struct A68t437  mode21;
struct A68t438  mode22;
struct A68t439  mode23;
struct A68t440  mode24;
struct A68t441  mode25;
struct A68t442  mode26;
struct A68t443  mode27;
struct A68t444  mode28;
struct A68t445  mode29;
struct A68t446  mode30;
struct A68t447  mode31;
struct A68t448  mode32;
struct A68t449  mode33;
struct A68t450  mode34;
struct A68t451  mode35;
struct A68t452  mode36;
struct A68t453  mode37;
struct A68t454  mode38;
struct A68t455  mode39;
struct A68t456  mode40;
struct A68t457  mode41;
struct A68t458  mode42;
} data; };
typedef struct A68t461  A68_461 ;    /* UNION(MODE417,MODE418,MODE419,MODE420,MODE421,MODE422,MODE423,MODE424,MODE425,MODE426,MODE427,MODE428,MODE429,MODE430,MODE431,MODE432,MODE433,MODE434,MODE435,MODE436,MODE437,MODE438,MODE439,MODE440,MODE441,MODE442,MODE443,MODE444,MODE445,MODE446,MODE447,MODE448,MODE449,MODE450,MODE451,MODE452,MODE453,MODE454,MODE455,MODE456,MODE457,MODE458)  */

A_PROCEDURE(A68_VOID ,A68t462,(struct A68t416 *),(struct A68t416 *,void *));
typedef struct A68t462  A68_462 ;    /* PROC(REF MODE416) VOID */

A_PROCEDURE(A68_VOID ,A68t463,(struct A68t169 ),(struct A68t169 ,void *));
typedef struct A68t463  A68_463 ;    /* PROC(MODE169) VOID */

A_PROCEDURE(A68_VOID ,A68t464,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t464  A68_464 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,61,A68t465);
typedef struct A68t465  A68_465 ;    /* STRUCT 61 CHAR */
struct A68t466{
struct A68t321 * Closure;
struct A68t308 * Fdec;
struct A68t311 * Env;
};
typedef struct A68t466  A68_466 ;    /* STRUCT(REF MODE321,REF MODE308,REF MODE311)  */

A_PROCEDURE(A68_BOOL ,A68t467,(struct A68t210 ,struct A68t210 ,struct A68t311 *,struct A68t311 *),(struct A68t210 ,struct A68t210 ,struct A68t311 *,struct A68t311 *,void *));
typedef struct A68t467  A68_467 ;    /* PROC(MODE210,MODE210,REF MODE311,REF MODE311) BOOL */

A_PROCEDURE(A68_VOID ,A68t468,(struct A68t321 *,struct A68t54 ,struct A68t97 ,struct A68t415 *),(struct A68t321 *,struct A68t54 ,struct A68t97 ,struct A68t415 *,void *));
typedef struct A68t468  A68_468 ;    /* PROC(REF MODE321,REF MODE54,MODE97) MODE415 */

A_PROCEDURE(A68_VOID ,A68t469,(struct A68t266 *,struct A68t416 *,struct A68t466 ,struct A68t401 *),(struct A68t266 *,struct A68t416 *,struct A68t466 ,struct A68t401 *,void *));
typedef struct A68t469  A68_469 ;    /* PROC(REF MODE266,REF MODE416,MODE466) MODE401 */
A_ISTRUCT(A68_CHAR ,34,A68t470);
typedef struct A68t470  A68_470 ;    /* STRUCT 34 CHAR */
A_ISTRUCT(A68_CHAR ,11,A68t471);
typedef struct A68t471  A68_471 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(struct A68t52 ,5,A68t472);
typedef struct A68t472  A68_472 ;    /* STRUCT 5 MODE52 */

A_PROCEDURE(A68_VOID ,A68t473,(struct A68t268 *,struct A68t416 *,struct A68t466 ,struct A68t406 *),(struct A68t268 *,struct A68t416 *,struct A68t466 ,struct A68t406 *,void *));
typedef struct A68t473  A68_473 ;    /* PROC(REF MODE268,REF MODE416,MODE466) MODE406 */
A_ISTRUCT(A68_CHAR ,35,A68t474);
typedef struct A68t474  A68_474 ;    /* STRUCT 35 CHAR */
A_ISTRUCT(struct A68t52 ,3,A68t475);
typedef struct A68t475  A68_475 ;    /* STRUCT 3 MODE52 */
struct A68t476 { A68_INT mode; union {
struct A68t249 * mode1;
struct A68t250 * mode2;
} data; };
typedef struct A68t476  A68_476 ;    /* UNION(REF MODE249,REF MODE250)  */

A_PROCEDURE(A68_VOID ,A68t477,(struct A68t476 ,struct A68t416 *,struct A68t466 ,struct A68t392 *),(struct A68t476 ,struct A68t416 *,struct A68t466 ,struct A68t392 *,void *));
typedef struct A68t477  A68_477 ;    /* PROC(MODE476,REF MODE416,MODE466) MODE392 */
A_ISTRUCT(A68_CHAR ,39,A68t478);
typedef struct A68t478  A68_478 ;    /* STRUCT 39 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t479);
typedef struct A68t479  A68_479 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t480);
typedef struct A68t480  A68_480 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t481);
typedef struct A68t481  A68_481 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(struct A68t52 ,6,A68t482);
typedef struct A68t482  A68_482 ;    /* STRUCT 6 MODE52 */
struct A68t483 { A68_INT mode; union {
struct A68t260 * mode1;
struct A68t234 * mode2;
} data; };
typedef struct A68t483  A68_483 ;    /* UNION(REF MODE260,REF MODE234)  */
struct A68t484 { A68_INT mode; union {
struct A68t241 * mode1;
struct A68t242 * mode2;
struct A68t243 * mode3;
struct A68t253 * mode4;
struct A68t247 * mode5;
struct A68t246 * mode6;
struct A68t248 * mode7;
struct A68t252 * mode8;
struct A68t256 * mode9;
struct A68t257 * mode10;
struct A68t258 * mode11;
} data; };
typedef struct A68t484  A68_484 ;    /* UNION(REF MODE241,REF MODE242,REF MODE243,REF MODE253,REF MODE247,REF MODE246,REF MODE248,REF MODE252,REF MODE256,REF MODE257,REF MODE258)  */
A_ISTRUCT(A68_CHAR ,37,A68t485);
typedef struct A68t485  A68_485 ;    /* STRUCT 37 CHAR */

A_PROCEDURE(A68_VOID ,A68t486,(struct A68t268 *,struct A68t466 ,struct A68t406 *),(struct A68t268 *,struct A68t466 ,struct A68t406 *,void *));
typedef struct A68t486  A68_486 ;    /* PROC(REF MODE268,MODE466) MODE406 */

A_PROCEDURE(A68_VOID ,A68t487,(struct A68t272 ,struct A68t466 ,struct A68t395 *),(struct A68t272 ,struct A68t466 ,struct A68t395 *,void *));
typedef struct A68t487  A68_487 ;    /* PROC(MODE272,MODE466) MODE395 */
A_ISTRUCT(A68_CHAR ,22,A68t488);
typedef struct A68t488  A68_488 ;    /* STRUCT 22 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t489);
typedef struct A68t489  A68_489 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(struct A68t52 ,7,A68t490);
typedef struct A68t490  A68_490 ;    /* STRUCT 7 MODE52 */

A_PROCEDURE(A68_VOID ,A68t491,(struct A68t466 ,struct A68t413 *),(struct A68t466 ,struct A68t413 *,void *));
typedef struct A68t491  A68_491 ;    /* PROC(MODE466) MODE413 */
A_ISTRUCT(A68_CHAR ,27,A68t492);
typedef struct A68t492  A68_492 ;    /* STRUCT 27 CHAR */

A_PROCEDURE(A68_VOID ,A68t493,(struct A68t308 *,struct A68t416 *,struct A68t311 *,A68_INT ,struct A68t413 *),(struct A68t308 *,struct A68t416 *,struct A68t311 *,A68_INT ,struct A68t413 *,void *));
typedef struct A68t493  A68_493 ;    /* PROC(REF MODE308,REF MODE416,REF MODE311,INT) MODE413 */

A_PROCEDURE(A68_VOID ,A68t494,(struct A68t317 ,struct A68t416 *,A68_INT ,struct A68t414 *),(struct A68t317 ,struct A68t416 *,A68_INT ,struct A68t414 *,void *));
typedef struct A68t494  A68_494 ;    /* PROC(MODE317,REF MODE416,INT) MODE414 */
A_ISTRUCT(struct A68t461 ,2,A68t495);
typedef struct A68t495  A68_495 ;    /* STRUCT 2 MODE461 */
A_ISTRUCT(A68_CHAR ,19,A68t496);
typedef struct A68t496  A68_496 ;    /* STRUCT 19 CHAR */
A_ISTRUCT(struct A68t52 ,2,A68t497);
typedef struct A68t497  A68_497 ;    /* STRUCT 2 MODE52 */
A_ISTRUCT(A68_CHAR ,20,A68t498);
typedef struct A68t498  A68_498 ;    /* STRUCT 20 CHAR */
A_ISTRUCT(A68_CHAR ,29,A68t499);
typedef struct A68t499  A68_499 ;    /* STRUCT 29 CHAR */
A_ISTRUCT(A68_CHAR ,23,A68t500);
typedef struct A68t500  A68_500 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(A68_CHAR ,36,A68t501);
typedef struct A68t501  A68_501 ;    /* STRUCT 36 CHAR */

A_PROCEDURE(A68_VOID ,A68t502,(struct A68t318 *,struct A68t97 ),(struct A68t318 *,struct A68t97 ,void *));
typedef struct A68t502  A68_502 ;    /* PROC(REF MODE318,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t503,(struct A68t308 *,struct A68t416 *,struct A68t311 *,struct A68t413 *),(struct A68t308 *,struct A68t416 *,struct A68t311 *,struct A68t413 *,void *));
typedef struct A68t503  A68_503 ;    /* PROC(REF MODE308,REF MODE416,REF MODE311) MODE413 */
A_ISTRUCT(A68_CHAR ,2,A68t504);
typedef struct A68t504  A68_504 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t505);
typedef struct A68t505  A68_505 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(struct A68t461 ,3,A68t506);
typedef struct A68t506  A68_506 ;    /* STRUCT 3 MODE461 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from transformprocs --- */
extern A68_416 * THJATRN_make_newtprocs(struct A68t416 *,struct A68t460 );
extern A68_VOID  MLJATRN_discard_tprocs(struct A68t416 *);
extern A68_416 * AWLATRN_nulltprocs;
extern A68_VOID  IWLATRN_null_formula(struct A68t194 ,struct A68t416 *,A68_377 *);
extern A68_VOID  NWLATRN_null_type(struct A68t210 ,struct A68t416 *,A68_383 *);
/* --- End of imports from transformprocs --- */


/* --- Imports from modeprocs --- */
extern A68_308 * IDNATRN_find_fndec(struct A68t263 ,struct A68t321 *,struct A68t311 *);
extern A68_214 * MUNATRN_fndec_tfn(struct A68t308 *);
extern A68_VOID  JTNATRN_names_type(struct A68t273 *,struct A68t308 *,A68_210 *);
extern A68_VOID  VUNATRN_unit_type(struct A68t232 ,struct A68t308 *,struct A68t311 *,A68_210 *);
extern A68_VOID  DDOATRN_simplify_type(struct A68t210 ,struct A68t311 *,A68_210 *);
extern A68_BOOL  NEOATRN_check_types(struct A68t210 ,struct A68t210 ,struct A68t311 *,struct A68t311 *,A68_BOOL );
/* --- End of imports from modeprocs --- */


/* --- Imports from assmodes --- */
extern A68_VC  TTCAOST_nullid;
extern A68_213 * GAAATRN_niltstr;
extern A68_273 * NAAATRN_nilnames;
extern A68_318 * HBAATRN_nilouters;
extern A68_263 * LHAATRN_makefnname(A68_INT );
#define KKAATRN_usource 1
#define LKAATRN_usink 2
#define MKAATRN_uiosource 3
#define NKAATRN_uiosink 4
#define QKAATRN_macpardec 3
extern A68_38  ZLAATRN_makeid;
/* --- End of imports from assmodes --- */


/* --- Imports from osinterface --- */
extern A68_141  BOBAOSI_update_access;
extern A68_141  FOBAOSI_update_truncate_access;
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
/* --- End of imports from basics --- */


/* --- Imports from ioprocs --- */
/* --- End of imports from ioprocs --- */


/* --- Imports from messageproc --- */
/* --- End of imports from messageproc --- */


/* --- Imports from putstrings --- */
extern A68_VOID  LRAAOSL_newline(struct A68t34 *);
extern A68_VOID  GFBAOSL_put(struct A68t34 *,struct A68t85 );
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void IHJATRN(void);   /* transformprocs */
extern void HNMATRN(void);   /* modeprocs */
extern void BAAATRN(void);   /* assmodes */
extern void PCAAOST(void);   /* osinterface */
extern void JSCAOST(void);   /* basics */
extern void TIGAOST(void);   /* ioprocs */
extern void JFAAOSI(void);   /* messageproc */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_465   JCIBTRN = {"$Id: assdiagnostics.a68,v 34.2 1995/03/29 13:02:51 ella Exp $"}; 
A_GISVEC(A68_VC ,KCIBTRN,JCIBTRN,61)
static A68_467  LCIBTRN_checktypes;
static A68_470   ZDIBTRN = {"Type mismatch in LET statement in "}; 
A_GISVEC(A68_VC ,AEIBTRN,ZDIBTRN,34)
static A68_471   FEIBTRN = {" with name "}; 
A_GISVEC(A68_VC ,GEIBTRN,FEIBTRN,11)
static A68_474   FFIBTRN = {"Type mismatch in JOIN statement in "}; 
A_GISVEC(A68_VC ,GFIBTRN,FFIBTRN,35)
static A68_478   CHIBTRN = {"Type mismatch in UMINST/UDINST call of "}; 
A_GISVEC(A68_VC ,DHIBTRN,CHIBTRN,39)
static A68_142   IHIBTRN = {" in "}; 
A_GISVEC(A68_VC ,JHIBTRN,IHIBTRN,4)
static A68_479   IIIBTRN = {"source"}; 
A_GISVEC(A68_VC ,KIIBTRN,IIIBTRN,6)
static A68_142   LIIBTRN = {"sink"}; 
A_GISVEC(A68_VC ,MIIBTRN,LIIBTRN,4)
static A68_480   NIIBTRN = {"iosource"}; 
A_GISVEC(A68_VC ,OIIBTRN,NIIBTRN,8)
static A68_479   PIIBTRN = {"iosink"}; 
A_GISVEC(A68_VC ,QIIBTRN,PIIBTRN,6)
static A68_481   VIIBTRN = {" found on "}; 
A_GISVEC(A68_VC ,WIIBTRN,VIIBTRN,10)
static A68_142   ZIIBTRN = {"lhs "}; 
A_GISVEC(A68_VC ,AJIBTRN,ZIIBTRN,4)
static A68_142   DJIBTRN = {"rhs "}; 
A_GISVEC(A68_VC ,EJIBTRN,DJIBTRN,4)
static A68_471   HJIBTRN = {"of JOIN in "}; 
A_GISVEC(A68_VC ,IJIBTRN,HJIBTRN,11)
static A68_485   WJIBTRN = {"Wrong sort of unit on rhs of JOIN in "}; 
A_GISVEC(A68_VC ,XJIBTRN,WJIBTRN,37)
static A68_488   CLIBTRN = {"Name mismatch between "}; 
A_GISVEC(A68_VC ,DLIBTRN,CLIBTRN,22)
static A68_489   HLIBTRN = {" and "}; 
A_GISVEC(A68_VC ,ILIBTRN,HLIBTRN,5)
static A68_142   NLIBTRN = {" in "}; 
A_GISVEC(A68_VC ,OLIBTRN,NLIBTRN,4)
static A68_492   QMIBTRN = {"Type mismatch at output of "}; 
A_GISVEC(A68_VC ,RMIBTRN,QMIBTRN,27)
static A68_496   ARIBTRN = {"Test 1 on LET types"}; 
A_GISVEC(A68_VC ,BRIBTRN,ARIBTRN,19)
static A68_498   IRIBTRN = {"Test 2 on JOIN types"}; 
A_GISVEC(A68_VC ,JRIBTRN,IRIBTRN,20)
static A68_499   QRIBTRN = {"Test 3 on UMINST/UDINST types"}; 
A_GISVEC(A68_VC ,RRIBTRN,QRIBTRN,29)
static A68_500   YRIBTRN = {"Test 4 on sort of UNAME"}; 
A_GISVEC(A68_VC ,ZRIBTRN,YRIBTRN,23)
static A68_501   GSIBTRN = {"Test 5 on name of FNDEC and INSTANCE"}; 
A_GISVEC(A68_VC ,HSIBTRN,GSIBTRN,36)
static A68_474   OSIBTRN = {"Test 6 on types of function outputs"}; 
A_GISVEC(A68_VC ,PSIBTRN,OSIBTRN,35)
static A68_504   DUIBTRN = {"  "}; 
A_GISVEC(A68_VC ,EUIBTRN,DUIBTRN,2)
static A68_504   UUIBTRN = {"  "}; 
A_GISVEC(A68_VC ,VUIBTRN,UUIBTRN,2)
static A68_505   JVIBTRN = {"FN "}; 
A_GISVEC(A68_VC ,KVIBTRN,JVIBTRN,3)
static A68_504   PVIBTRN = {"  "}; 
A_GISVEC(A68_VC ,QVIBTRN,PVIBTRN,2)
typedef struct   /* env of non-global proc */
{
A68_BOOL * UHIBTRN_lhs;
A68_VC * VHIBTRN_fnname;
} AIIBTRN_anonymous;
typedef struct   /* env of non-global proc */
{
A68_VC * VHIBTRN_fnname;
A68_BOOL * UHIBTRN_lhs;
A68_416 * IKIBTRN_unit_sort;
} NKIBTRN_join_sort;
typedef struct   /* env of non-global proc */
{
A68_321 * Closure;
A68_486  LKIBTRN_join_sort;
} HNIBTRN_fndec;
typedef struct   /* env of non-global proc */
{
A68_311 ** XCIBTRN_env;
A68_493  FNIBTRN_fndec;
} AQIBTRN_outer;
typedef struct   /* env of non-global proc */
{
A68_494  YPIBTRN_outer;
A68_INT  XQIBTRN_index;
A_PAD_INT(PAD_165)
} ZSIBTRN_anonymous;
typedef struct   /* env of non-global proc */
{
int dummy;
} KWIBTRN_outer;
typedef struct   /* env of non-global proc */
{
A68_466  JNIBTRN_closed;
} QNIBTRN_anonymous;
typedef struct   /* env of non-global proc */
{
A68_466  JNIBTRN_closed;
} BOIBTRN_anonymous;
typedef struct   /* env of non-global proc */
{
A68_466  JNIBTRN_closed;
} LOIBTRN_anonymous;
typedef struct   /* env of non-global proc */
{
A68_486  LKIBTRN_join_sort;
A68_466  JNIBTRN_closed;
} ZOIBTRN_anonymous;
typedef struct   /* env of non-global proc */
{
A68_466  JNIBTRN_closed;
} JPIBTRN_anonymous;
typedef struct   /* env of non-global proc */
{
A68_493  FNIBTRN_fndec;
A68_317  Of;
A68_INT  Index;
A_PAD_INT(PAD_164)
} FQIBTRN_anonymous;
typedef struct   /* env of non-global proc */
{
A68_310  STIBTRN_nametypes;
} XTIBTRN_names;
typedef struct   /* env of non-global proc */
{
A68_311 * Env;
} OUIBTRN_instance;
typedef struct   /* env of non-global proc */
{
A68_317  Of;
} PWIBTRN_anonymous;

A_STATIC A68_BOOL  QCIBTRN_anonymous(A68_210  A, A68_210  B, A68_311 * Enva, A68_311 * Envb);

A68_VOID  WCIBTRN_assemble_diagnostics(A68_321 * Closure, A68_54  Tests, A68_97  Msg, A68_415  *ReturnedValue);

A_STATIC A68_VOID  BDIBTRN_let_type(A68_266 * L, A68_416 * Tprocs, A68_466  Close, A68_401  *ReturnedValue);

A_STATIC A68_VOID  SEIBTRN_join_type(A68_268 * J, A68_416 * Tprocs, A68_466  Close, A68_406  *ReturnedValue);

A_STATIC A68_VOID  TFIBTRN_uinst_type(A68_476  Uinst, A68_416 * Tprocs, A68_466  Close, A68_392  *ReturnedValue);

A_STATIC A68_VOID  ZHIBTRN_anonymous(A68_232  Unit, A68_416 * Tprocs, A68_392  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  MKIBTRN_join_sort(A68_268 * J, A68_466  Close, A68_406  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  WKIBTRN_instance_name(A68_272  Inst, A68_466  Close, A68_395  *ReturnedValue);

A_STATIC A68_VOID  ZLIBTRN_output_type(A68_466  Closed, A68_413  *ReturnedValue);

A_STATIC A68_VOID  GNIBTRN_fndec(A68_308 * Fdec, A68_416 * Tprocs, A68_311 * Env, A68_INT  I, A68_413  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  PNIBTRN_anonymous(A68_266 * L, A68_416 * Tprocs, A68_401  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  AOIBTRN_anonymous(A68_268 * J, A68_416 * Tprocs, A68_406  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  KOIBTRN_anonymous(A68_232  U, A68_416 * Tprocs, A68_392  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  YOIBTRN_anonymous(A68_268 * J, A68_416 * Tprocs, A68_406  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  IPIBTRN_anonymous(A68_272  I, A68_416 * Tp, A68_395  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ZPIBTRN_outer(A68_317  Of, A68_416 * Tprocs, A68_INT  Index, A68_414  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  EQIBTRN_anonymous(A68_308 * Fd, A68_416 * Tp, A68_413  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  YSIBTRN_anonymous(A68_317  Of, A68_416 * Tp, A68_414  *ReturnedValue, void *NonLocals);

A68_VOID  MTIBTRN_monitoring_order(A68_318 * Os, A68_97  Msg);

A_STATIC A68_VOID  RTIBTRN_fndec(A68_308 * Fdec, A68_416 * Tp, A68_311 * Env, A68_413  *ReturnedValue);

A_STATIC A68_VOID  WTIBTRN_names(A68_273 * Ns, A68_416 * Tprocs, A68_400  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  NUIBTRN_instance(A68_272  Inst, A68_416 * Tprocs, A68_395  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  JWIBTRN_outer(A68_317  Of, A68_416 * Tprocs, A68_414  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  OWIBTRN_anonymous(A68_308 * Fd, A68_416 * Tp, A68_413  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  PNIBTRN_anonymous(A68_266 * L, A68_416 * Tprocs, A68_401  *ReturnedValue, void *NonLocals)
#define NL(x) (((QNIBTRN_anonymous *)NonLocals)->x)
{ 
A68_401  RNIBTRN;  /* clause result */
A68_401  SNIBTRN;  /* avoid structure result */
 /* line 278: */
 /* line 279: */
BDIBTRN_let_type( L, Tprocs, NL(JNIBTRN_closed), &SNIBTRN );
RNIBTRN = SNIBTRN;
*ReturnedValue = (RNIBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  AOIBTRN_anonymous(A68_268 * J, A68_416 * Tprocs, A68_406  *ReturnedValue, void *NonLocals)
#define NL(x) (((BOIBTRN_anonymous *)NonLocals)->x)
{ 
A68_406  COIBTRN;  /* clause result */
A68_406  DOIBTRN;  /* avoid structure result */
 /* line 281: */
 /* line 282: */
SEIBTRN_join_type( J, Tprocs, NL(JNIBTRN_closed), &DOIBTRN );
COIBTRN = DOIBTRN;
*ReturnedValue = (COIBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  KOIBTRN_anonymous(A68_232  U, A68_416 * Tprocs, A68_392  *ReturnedValue, void *NonLocals)
#define NL(x) (((LOIBTRN_anonymous *)NonLocals)->x)
{ 
A68_232  MOIBTRN;  /* united object - for case conformity */
A68_476  NOIBTRN_ui;
A68_392  OOIBTRN;  /* clause result */
A68_392  POIBTRN;  /* avoid structure result */
A68_435  QOIBTRN;  /* CALL */
A68_392  ROIBTRN;  /* avoid structure result */
 /* line 284: */
 /* line 285: */
MOIBTRN = U ;
switch ( MOIBTRN.mode )
{ 
case 23: /* REF STRUCT(MODE272,MODE232)  */
case 24: /* REF STRUCT(MODE232,MODE272,MODE232)  */
A_UNCPY(NOIBTRN_ui,MOIBTRN);
NOIBTRN_ui.mode -= 22;
 /* line 286: */
 /* line 287: */
TFIBTRN_uinst_type( NOIBTRN_ui, Tprocs, NL(JNIBTRN_closed), &POIBTRN );
OOIBTRN = POIBTRN;
break;
default: 
 /* line 288: */
 /* line 289: */
QOIBTRN = (*(&(AWLATRN_nulltprocs->Unit))) ;
A_CALLPROC(QOIBTRN,(U, Tprocs, &ROIBTRN),(U, Tprocs, &ROIBTRN,(QOIBTRN).nonlocals));
OOIBTRN = ROIBTRN;
break;
} 
*ReturnedValue = (OOIBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  YOIBTRN_anonymous(A68_268 * J, A68_416 * Tprocs, A68_406  *ReturnedValue, void *NonLocals)
#define NL(x) (((ZOIBTRN_anonymous *)NonLocals)->x)
{ 
A68_406  APIBTRN;  /* clause result */
A68_406  BPIBTRN;  /* avoid structure result */
 /* line 291: */
A_CALLPROC(NL(LKIBTRN_join_sort),(J, NL(JNIBTRN_closed), &BPIBTRN),(J, NL(JNIBTRN_closed), &BPIBTRN,(NL(LKIBTRN_join_sort)).nonlocals));
APIBTRN = BPIBTRN;
*ReturnedValue = (APIBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  IPIBTRN_anonymous(A68_272  I, A68_416 * Tp, A68_395  *ReturnedValue, void *NonLocals)
#define NL(x) (((JPIBTRN_anonymous *)NonLocals)->x)
{ 
A68_395  KPIBTRN;  /* clause result */
A68_395  LPIBTRN;  /* avoid structure result */
 /* line 293: */
WKIBTRN_instance_name( I, NL(JNIBTRN_closed), &LPIBTRN );
KPIBTRN = LPIBTRN;
*ReturnedValue = (KPIBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  EQIBTRN_anonymous(A68_308 * Fd, A68_416 * Tp, A68_413  *ReturnedValue, void *NonLocals)
#define NL(x) (((FQIBTRN_anonymous *)NonLocals)->x)
{ 
A68_413  GQIBTRN;  /* clause result */
A68_413  HQIBTRN;  /* avoid structure result */
 /* line 304: */
A_CALLPROC(NL(FNIBTRN_fndec),(Fd, Tp, NL(Of).Environ, NL(Index), &HQIBTRN),(Fd, Tp, NL(Of).Environ, NL(Index), &HQIBTRN,(NL(FNIBTRN_fndec)).nonlocals));
GQIBTRN = HQIBTRN;
*ReturnedValue = (GQIBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  WTIBTRN_names(A68_273 * Ns, A68_416 * Tprocs, A68_400  *ReturnedValue, void *NonLocals)
#define NL(x) (((XTIBTRN_names *)NonLocals)->x)
{ 
A68_273 * YTIBTRN_names;
A68_497  ZTIBTRN;  /* collateral clause result */
A68_INT  AUIBTRN;  /* YIELD */
A68_52  BUIBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  CUIBTRN;  /* YIELD */
A68_52  FUIBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  GUIBTRN;  /* YIELD */
A68_85  HUIBTRN;  /* OPERATORS - istruct -> vector */
A68_400  IUIBTRN;  /* collateral clause result */
A68_400  JUIBTRN;  /* clause result */
A_PROC_ENTRY(names);
 /* line 340: */
{ 
YTIBTRN_names = Ns;
 /* line 341: */
for ( ;; )
{ 
 /* line 342: */
if ( !((YTIBTRN_names!=NAAATRN_nilnames)) ) break;
AUIBTRN = (*(&(YTIBTRN_names->Nameno))) ;
CUIBTRN = (*(&((&A_VINDEX(NL(STIBTRN_nametypes),AUIBTRN))->Name))) ;
ZTIBTRN.data[0] = A_UNITE(BUIBTRN,mode7,7,CUIBTRN);
GUIBTRN = EUIBTRN ;
ZTIBTRN.data[1] = A_UNITE(FUIBTRN,mode7,7,GUIBTRN);
GFBAOSL_put(LEAAOST_out, A_HISVEC(HUIBTRN,ZTIBTRN,2,A68_52 ));
 /* line 343: */
 /* line 344: */
YTIBTRN_names = (*(&(YTIBTRN_names->Rest)));
}
 /* line 345: */
IUIBTRN.N = Ns;
 /* line 346: */
IUIBTRN.C = A68_FALSE;
JUIBTRN = IUIBTRN;
} 
A_PROC_EXIT(names);
*ReturnedValue = (JUIBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  NUIBTRN_instance(A68_272  Inst, A68_416 * Tprocs, A68_395  *ReturnedValue, void *NonLocals)
#define NL(x) (((OUIBTRN_instance *)NonLocals)->x)
{ 
A68_316  PUIBTRN;  /* OPERATORS - simple index */
A68_INT  QUIBTRN;  /* YIELD */
A68_VC  RUIBTRN_env_name;
A68_497  SUIBTRN;  /* collateral clause result */
A68_52  TUIBTRN;  /* OPERATORS - mode -> union mode */
A68_52  WUIBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  XUIBTRN;  /* YIELD */
A68_85  YUIBTRN;  /* OPERATORS - istruct -> vector */
A68_395  ZUIBTRN;  /* collateral clause result */
A68_395  AVIBTRN;  /* clause result */
A_PROC_ENTRY(instance);
 /* line 349: */
{ 
PUIBTRN = (*(&(NL(Env)->Fns))) ;
QUIBTRN = Inst.Fnno ;
RUIBTRN_env_name = (*(&((*(&A_VINDEX(PUIBTRN,QUIBTRN)))->Fnname)));
 /* line 350: */
SUIBTRN.data[0] = A_UNITE(TUIBTRN,mode7,7,RUIBTRN_env_name);
XUIBTRN = VUIBTRN ;
SUIBTRN.data[1] = A_UNITE(WUIBTRN,mode7,7,XUIBTRN);
GFBAOSL_put(LEAAOST_out, A_HISVEC(YUIBTRN,SUIBTRN,2,A68_52 ));
 /* line 351: */
ZUIBTRN.I = Inst;
 /* line 352: */
ZUIBTRN.C = A68_FALSE;
AVIBTRN = ZUIBTRN;
} 
A_PROC_EXIT(instance);
*ReturnedValue = (AVIBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  OWIBTRN_anonymous(A68_308 * Fd, A68_416 * Tp, A68_413  *ReturnedValue, void *NonLocals)
#define NL(x) (((PWIBTRN_anonymous *)NonLocals)->x)
{ 
A68_413  QWIBTRN;  /* clause result */
A68_413  RWIBTRN;  /* avoid structure result */
 /* line 369: */
RTIBTRN_fndec( Fd, Tp, NL(Of).Environ, &RWIBTRN );
QWIBTRN = RWIBTRN;
*ReturnedValue = (QWIBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  BDIBTRN_let_type(A68_266 * L, A68_416 * Tprocs, A68_466  Close, A68_401  *ReturnedValue)
{ 
A68_310  CDIBTRN_nametypes;
A68_435  DDIBTRN;  /* CALL */
A68_392  EDIBTRN;  /* avoid structure result */
A68_392  FDIBTRN_test_unit;
A68_210  GDIBTRN;  /* avoid structure result */
A68_210  HDIBTRN_rhs;
A68_273 * IDIBTRN_names;
A68_210  JDIBTRN;  /* clause result */
A68_INT  KDIBTRN;  /* YIELD */
A68_213 * LDIBTRN_tst;
A68_213 ** MDIBTRN_tstptr;
A68_213  NDIBTRN;  /* collateral clause result */
A68_INT  ODIBTRN;  /* YIELD */
A68_213 * PDIBTRN;  /* YIELD */
A68_210  QDIBTRN;  /* OPERATORS - mode -> union mode */
A68_210  RDIBTRN_lhs;
A68_210  SDIBTRN;  /* avoid structure result */
A68_210  TDIBTRN_lhs_type;
A68_210  UDIBTRN;  /* avoid structure result */
A68_210  VDIBTRN_rhs_type;
A68_INT  WDIBTRN;  /* YIELD */
A68_VC  XDIBTRN_name;
A68_472  YDIBTRN;  /* collateral clause result */
A68_52  BEIBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  CEIBTRN;  /* YIELD */
A68_52  DEIBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  EEIBTRN;  /* YIELD */
A68_52  HEIBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  IEIBTRN;  /* YIELD */
A68_52  JEIBTRN;  /* OPERATORS - mode -> union mode */
A68_52  KEIBTRN;  /* OPERATORS - mode -> union mode */
A68_56  LEIBTRN;  /* procedure value */
A68_85  MEIBTRN;  /* OPERATORS - istruct -> vector */
A68_401  NEIBTRN;  /* collateral clause result */
A68_401  OEIBTRN;  /* clause result */
A_PROC_ENTRY(let_type);
 /* line 88: */
 /* line 91: */
{ 
CDIBTRN_nametypes = (*(&(Close.Fdec->Nametypes)));
 /* line 92: */
DDIBTRN = (*(&(AWLATRN_nulltprocs->Unit))) ;
A_CALLPROC(DDIBTRN,((*(&(L->Unit))), Tprocs, &EDIBTRN),((*(&(L->Unit))), Tprocs, &EDIBTRN,(DDIBTRN).nonlocals));
FDIBTRN_test_unit = EDIBTRN;
 /* line 93: */
VUNATRN_unit_type( (*(&(L->Unit))), Close.Fdec, Close.Env, &GDIBTRN );
HDIBTRN_rhs = GDIBTRN;
 /* line 94: */
IDIBTRN_names = (*(&(L->Letnames)));
 /* line 95: */
 /* line 96: */
 /* line 97: */
if ( ((*(&(IDIBTRN_names->Rest)))==NAAATRN_nilnames) )
{ 
 /* line 98: */
KDIBTRN = (*(&(IDIBTRN_names->Nameno))) ;
JDIBTRN = (*(&((&A_VINDEX(CDIBTRN_nametypes,KDIBTRN))->Type)));
} 
else
{ 
LDIBTRN_tst = GAAATRN_niltstr;
 /* line 99: */
MDIBTRN_tstptr = (&LDIBTRN_tst);
 /* line 100: */
for ( ;; )
{ 
 /* line 101: */
if ( !((IDIBTRN_names!=NAAATRN_nilnames)) ) break;
 /* line 102: */
ODIBTRN = (*(&(IDIBTRN_names->Nameno))) ;
NDIBTRN.Elem = (*(&((&A_VINDEX(CDIBTRN_nametypes,ODIBTRN))->Type)));
NDIBTRN.Rest = GAAATRN_niltstr;
PDIBTRN = A_HEAP(A68_213 ) ;
(*PDIBTRN) = NDIBTRN ;
(*MDIBTRN_tstptr) = PDIBTRN;
 /* line 103: */
MDIBTRN_tstptr = (&((*MDIBTRN_tstptr)->Rest));
 /* line 104: */
 /* line 105: */
IDIBTRN_names = (*(&(IDIBTRN_names->Rest)));
}
 /* line 106: */
 /* line 107: */
JDIBTRN = A_UNITE(QDIBTRN,mode3,3,LDIBTRN_tst);
} 
RDIBTRN_lhs = JDIBTRN;
 /* line 108: */
DDOATRN_simplify_type( RDIBTRN_lhs, Close.Env, &SDIBTRN );
TDIBTRN_lhs_type = SDIBTRN;
 /* line 109: */
DDOATRN_simplify_type( HDIBTRN_rhs, Close.Env, &UDIBTRN );
VDIBTRN_rhs_type = UDIBTRN;
 /* line 110: */
 /* line 111: */
if ( !A_CALLPROC(LCIBTRN_checktypes,(TDIBTRN_lhs_type, VDIBTRN_rhs_type, Close.Env, Close.Env),(TDIBTRN_lhs_type, VDIBTRN_rhs_type, Close.Env, Close.Env,(LCIBTRN_checktypes).nonlocals)) )
{ 
WDIBTRN = (*(&((*(&(L->Letnames)))->Nameno))) ;
XDIBTRN_name = (*(&((&A_VINDEX(CDIBTRN_nametypes,WDIBTRN))->Name)));
 /* line 112: */
CEIBTRN = AEIBTRN ;
YDIBTRN.data[0] = A_UNITE(BEIBTRN,mode7,7,CEIBTRN);
 /* line 113: */
EEIBTRN = (*(&(Close.Fdec->Fnname))) ;
YDIBTRN.data[1] = A_UNITE(DEIBTRN,mode7,7,EEIBTRN);
IEIBTRN = GEIBTRN ;
YDIBTRN.data[2] = A_UNITE(HEIBTRN,mode7,7,IEIBTRN);
YDIBTRN.data[3] = A_UNITE(JEIBTRN,mode7,7,XDIBTRN_name);
LEIBTRN.fn.fn_global = LRAAOSL_newline;
LEIBTRN.nonlocals = A68_NIL;
YDIBTRN.data[4] = A_UNITE(KEIBTRN,mode12,12,LEIBTRN);
 /* line 114: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(MEIBTRN,YDIBTRN,5,A68_52 ));
} 
 /* line 115: */
NEIBTRN.L = L;
 /* line 116: */
NEIBTRN.C = A68_FALSE;
OEIBTRN = NEIBTRN;
} 
A_PROC_EXIT(let_type);
*ReturnedValue = (OEIBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  SEIBTRN_join_type(A68_268 * J, A68_416 * Tprocs, A68_466  Close, A68_406  *ReturnedValue)
{ 
A68_435  TEIBTRN;  /* CALL */
A68_392  UEIBTRN;  /* avoid structure result */
A68_392  VEIBTRN_test_fromunit;
A68_210  WEIBTRN;  /* avoid structure result */
A68_210  XEIBTRN_lhs;
A68_210  YEIBTRN;  /* avoid structure result */
A68_210  ZEIBTRN_rhs;
A68_210  AFIBTRN;  /* avoid structure result */
A68_210  BFIBTRN_lhs_type;
A68_210  CFIBTRN;  /* avoid structure result */
A68_210  DFIBTRN_rhs_type;
A68_475  EFIBTRN;  /* collateral clause result */
A68_52  HFIBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  IFIBTRN;  /* YIELD */
A68_52  JFIBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  KFIBTRN;  /* YIELD */
A68_52  LFIBTRN;  /* OPERATORS - mode -> union mode */
A68_56  MFIBTRN;  /* procedure value */
A68_85  NFIBTRN;  /* OPERATORS - istruct -> vector */
A68_406  OFIBTRN;  /* collateral clause result */
A68_406  PFIBTRN;  /* clause result */
A_PROC_ENTRY(join_type);
 /* line 122: */
 /* line 123: */
{ 
TEIBTRN = (*(&(AWLATRN_nulltprocs->Unit))) ;
A_CALLPROC(TEIBTRN,((*(&(J->From))), Tprocs, &UEIBTRN),((*(&(J->From))), Tprocs, &UEIBTRN,(TEIBTRN).nonlocals));
VEIBTRN_test_fromunit = UEIBTRN;
 /* line 124: */
VUNATRN_unit_type( (*(&(J->From))), Close.Fdec, Close.Env, &WEIBTRN );
XEIBTRN_lhs = WEIBTRN;
 /* line 125: */
VUNATRN_unit_type( (*(&(J->To))), Close.Fdec, Close.Env, &YEIBTRN );
ZEIBTRN_rhs = YEIBTRN;
 /* line 126: */
DDOATRN_simplify_type( XEIBTRN_lhs, Close.Env, &AFIBTRN );
BFIBTRN_lhs_type = AFIBTRN;
 /* line 127: */
DDOATRN_simplify_type( ZEIBTRN_rhs, Close.Env, &CFIBTRN );
DFIBTRN_rhs_type = CFIBTRN;
 /* line 128: */
 /* line 129: */
if ( !A_CALLPROC(LCIBTRN_checktypes,(BFIBTRN_lhs_type, DFIBTRN_rhs_type, Close.Env, Close.Env),(BFIBTRN_lhs_type, DFIBTRN_rhs_type, Close.Env, Close.Env,(LCIBTRN_checktypes).nonlocals)) )
{ 
 /* line 130: */
IFIBTRN = GFIBTRN ;
EFIBTRN.data[0] = A_UNITE(HFIBTRN,mode7,7,IFIBTRN);
KFIBTRN = (*(&(Close.Fdec->Fnname))) ;
EFIBTRN.data[1] = A_UNITE(JFIBTRN,mode7,7,KFIBTRN);
MFIBTRN.fn.fn_global = LRAAOSL_newline;
MFIBTRN.nonlocals = A68_NIL;
EFIBTRN.data[2] = A_UNITE(LFIBTRN,mode12,12,MFIBTRN);
 /* line 131: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(NFIBTRN,EFIBTRN,3,A68_52 ));
} 
 /* line 132: */
OFIBTRN.J = J;
 /* line 133: */
OFIBTRN.C = A68_FALSE;
PFIBTRN = OFIBTRN;
} 
A_PROC_EXIT(join_type);
*ReturnedValue = (PFIBTRN);
return;
} 
#undef NL
 /* line 139: */

A_STATIC A68_VOID  TFIBTRN_uinst_type(A68_476  Uinst, A68_416 * Tprocs, A68_466  Close, A68_392  *ReturnedValue)
{ 
A68_272  UFIBTRN_inst;
A68_476  VFIBTRN;  /* united object - for case conformity */
A68_249 * WFIBTRN_um;
A68_435  XFIBTRN;  /* CALL */
A68_392  YFIBTRN;  /* avoid structure result */
A68_392  ZFIBTRN_mc;
A68_210  AGIBTRN;  /* clause result */
A68_210  BGIBTRN;  /* avoid structure result */
A68_250 * CGIBTRN_ud;
A68_435  DGIBTRN;  /* CALL */
A68_392  EGIBTRN;  /* avoid structure result */
A68_392  FGIBTRN_lc;
A68_435  GGIBTRN;  /* CALL */
A68_392  HGIBTRN;  /* avoid structure result */
A68_392  IGIBTRN_rc;
A68_210  JGIBTRN;  /* avoid structure result */
A68_210  KGIBTRN_l;
A68_210  LGIBTRN;  /* avoid structure result */
A68_210  MGIBTRN_r;
A68_213  NGIBTRN;  /* collateral clause result */
A68_213  OGIBTRN;  /* collateral clause result */
A68_213 * PGIBTRN;  /* YIELD */
A68_213 * QGIBTRN;  /* YIELD */
A68_210  RGIBTRN;  /* OPERATORS - mode -> union mode */
A68_210  SGIBTRN_params;
A68_316  TGIBTRN;  /* OPERATORS - simple index */
A68_INT  UGIBTRN;  /* YIELD */
A68_308 * VGIBTRN_idec;
A68_214 * WGIBTRN_tfn;
A68_210  XGIBTRN;  /* avoid structure result */
A68_210  YGIBTRN_params_type;
A68_210  ZGIBTRN;  /* avoid structure result */
A68_210  AHIBTRN_inst_type;
A68_472  BHIBTRN;  /* collateral clause result */
A68_52  EHIBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  FHIBTRN;  /* YIELD */
A68_52  GHIBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  HHIBTRN;  /* YIELD */
A68_52  KHIBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  LHIBTRN;  /* YIELD */
A68_52  MHIBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  NHIBTRN;  /* YIELD */
A68_52  OHIBTRN;  /* OPERATORS - mode -> union mode */
A68_56  PHIBTRN;  /* procedure value */
A68_85  QHIBTRN;  /* OPERATORS - istruct -> vector */
A68_392  RHIBTRN;  /* collateral clause result */
A68_232  SHIBTRN;  /* OPERATORS - unite union */
A68_392  THIBTRN;  /* clause result */
A_PROC_ENTRY(uinst_type);
 /* line 140: */
 /* line 141: */
{ 
 /* line 142: */
 /* line 143: */
if ( ((*(&(Close.Fdec->Sort)))!=QKAATRN_macpardec) )
{ 
 /* line 144: */
 /* line 145: */
 /* line 146: */
VFIBTRN = Uinst ;
switch ( VFIBTRN.mode )
{ 
case 1: /* REF STRUCT(MODE272,MODE232)  */
WFIBTRN_um = (VFIBTRN.data.mode1);
 /* line 147: */
{ 
UFIBTRN_inst = (*(&(WFIBTRN_um->Inst)));
 /* line 148: */
XFIBTRN = (*(&(AWLATRN_nulltprocs->Unit))) ;
A_CALLPROC(XFIBTRN,((*(&(WFIBTRN_um->Right))), Tprocs, &YFIBTRN),((*(&(WFIBTRN_um->Right))), Tprocs, &YFIBTRN,(XFIBTRN).nonlocals));
ZFIBTRN_mc = YFIBTRN;
 /* line 149: */
 /* line 150: */
 /* line 151: */
VUNATRN_unit_type( (*(&(WFIBTRN_um->Right))), Close.Fdec, Close.Env, &BGIBTRN );
AGIBTRN = BGIBTRN;
} 
break;
case 2: /* REF STRUCT(MODE232,MODE272,MODE232)  */
CGIBTRN_ud = (VFIBTRN.data.mode2);
 /* line 152: */
{ 
UFIBTRN_inst = (*(&(CGIBTRN_ud->Inst)));
 /* line 153: */
DGIBTRN = (*(&(AWLATRN_nulltprocs->Unit))) ;
A_CALLPROC(DGIBTRN,((*(&(CGIBTRN_ud->Left))), Tprocs, &EGIBTRN),((*(&(CGIBTRN_ud->Left))), Tprocs, &EGIBTRN,(DGIBTRN).nonlocals));
FGIBTRN_lc = EGIBTRN;
 /* line 154: */
GGIBTRN = (*(&(AWLATRN_nulltprocs->Unit))) ;
A_CALLPROC(GGIBTRN,((*(&(CGIBTRN_ud->Right))), Tprocs, &HGIBTRN),((*(&(CGIBTRN_ud->Right))), Tprocs, &HGIBTRN,(GGIBTRN).nonlocals));
IGIBTRN_rc = HGIBTRN;
 /* line 155: */
VUNATRN_unit_type( (*(&(CGIBTRN_ud->Left))), Close.Fdec, Close.Env, &JGIBTRN );
KGIBTRN_l = JGIBTRN;
 /* line 156: */
VUNATRN_unit_type( (*(&(CGIBTRN_ud->Right))), Close.Fdec, Close.Env, &LGIBTRN );
MGIBTRN_r = LGIBTRN;
 /* line 157: */
NGIBTRN.Elem = KGIBTRN_l;
OGIBTRN.Elem = MGIBTRN_r;
OGIBTRN.Rest = GAAATRN_niltstr;
 /* line 158: */
PGIBTRN = A_HEAP(A68_213 ) ;
(*PGIBTRN) = OGIBTRN ;
NGIBTRN.Rest = PGIBTRN;
 /* line 159: */
QGIBTRN = A_HEAP(A68_213 ) ;
(*QGIBTRN) = NGIBTRN ;
AGIBTRN = A_UNITE(RGIBTRN,mode3,3,QGIBTRN);
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
SGIBTRN_params = AGIBTRN;
 /* line 161: */
TGIBTRN = (*(&(Close.Env->Fns))) ;
UGIBTRN = (*(&((&UFIBTRN_inst)->Fnno))) ;
VGIBTRN_idec = (*(&A_VINDEX(TGIBTRN,UGIBTRN)));
 /* line 162: */
WGIBTRN_tfn = MUNATRN_fndec_tfn(VGIBTRN_idec);
 /* line 164: */
DDOATRN_simplify_type( SGIBTRN_params, Close.Env, &XGIBTRN );
YGIBTRN_params_type = XGIBTRN;
 /* line 165: */
DDOATRN_simplify_type( (*(&(WGIBTRN_tfn->From))), Close.Env, &ZGIBTRN );
AHIBTRN_inst_type = ZGIBTRN;
 /* line 167: */
 /* line 168: */
if ( !A_CALLPROC(LCIBTRN_checktypes,(YGIBTRN_params_type, AHIBTRN_inst_type, Close.Env, Close.Env),(YGIBTRN_params_type, AHIBTRN_inst_type, Close.Env, Close.Env,(LCIBTRN_checktypes).nonlocals)) )
{ 
FHIBTRN = DHIBTRN ;
BHIBTRN.data[0] = A_UNITE(EHIBTRN,mode7,7,FHIBTRN);
 /* line 169: */
HHIBTRN = (*(&(VGIBTRN_idec->Fnname))) ;
BHIBTRN.data[1] = A_UNITE(GHIBTRN,mode7,7,HHIBTRN);
LHIBTRN = JHIBTRN ;
BHIBTRN.data[2] = A_UNITE(KHIBTRN,mode7,7,LHIBTRN);
NHIBTRN = (*(&(Close.Fdec->Fnname))) ;
BHIBTRN.data[3] = A_UNITE(MHIBTRN,mode7,7,NHIBTRN);
PHIBTRN.fn.fn_global = LRAAOSL_newline;
PHIBTRN.nonlocals = A68_NIL;
BHIBTRN.data[4] = A_UNITE(OHIBTRN,mode12,12,PHIBTRN);
 /* line 170: */
 /* line 171: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(QHIBTRN,BHIBTRN,5,A68_52 ));
} 
} 
 /* line 172: */
RHIBTRN.U = A_UUNITE(SHIBTRN,22,Uinst);
 /* line 173: */
RHIBTRN.C = A68_FALSE;
THIBTRN = RHIBTRN;
} 
A_PROC_EXIT(uinst_type);
*ReturnedValue = (THIBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  ZHIBTRN_anonymous(A68_232  Unit, A68_416 * Tprocs, A68_392  *ReturnedValue, void *NonLocals)
#define NL(x) (((AIIBTRN_anonymous *)NonLocals)->x)
{ 
A68_232  BIIBTRN;  /* united object - for case conformity */
A68_237 * CIIBTRN_un;
A68_INT  DIIBTRN_sort;
A68_BOOL  EIIBTRN;  /* optbool result */
A68_BOOL  FIIBTRN;  /* optbool result */
A68_BOOL  GIIBTRN;  /* optbool result */
A68_BOOL  HIIBTRN;  /* optbool result */
A68_VC  JIIBTRN;  /* clause result */
A68_VC  RIIBTRN;  /* avoid structure result */
A68_VC  SIIBTRN_sortname;
A68_482  TIIBTRN;  /* collateral clause result */
A68_52  UIIBTRN;  /* OPERATORS - mode -> union mode */
A68_52  XIIBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  YIIBTRN;  /* YIELD */
A68_52  BJIBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  CJIBTRN;  /* YIELD */
A68_52  FJIBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  GJIBTRN;  /* YIELD */
A68_52  JJIBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  KJIBTRN;  /* YIELD */
A68_52  LJIBTRN;  /* OPERATORS - mode -> union mode */
A68_52  MJIBTRN;  /* OPERATORS - mode -> union mode */
A68_56  NJIBTRN;  /* procedure value */
A68_85  OJIBTRN;  /* OPERATORS - istruct -> vector */
A68_392  PJIBTRN;  /* collateral clause result */
A68_232  QJIBTRN;  /* OPERATORS - mode -> union mode */
A68_392  RJIBTRN;  /* clause result */
A68_392  SJIBTRN;  /* collateral clause result */
A68_435  TJIBTRN;  /* CALL */
A68_392  UJIBTRN;  /* avoid structure result */
A68_475  VJIBTRN;  /* collateral clause result */
A68_52  YJIBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  ZJIBTRN;  /* YIELD */
A68_52  AKIBTRN;  /* OPERATORS - mode -> union mode */
A68_52  BKIBTRN;  /* OPERATORS - mode -> union mode */
A68_56  CKIBTRN;  /* procedure value */
A68_85  DKIBTRN;  /* OPERATORS - istruct -> vector */
A68_392  EKIBTRN;  /* collateral clause result */
 /* line 186: */
 /* line 187: */
BIIBTRN = Unit ;
switch ( BIIBTRN.mode )
{ 
case 11: /* REF STRUCT(INT,INT)  */
CIIBTRN_un = (BIIBTRN.data.mode11);
 /* line 188: */
{ 
DIIBTRN_sort = (*(&(CIIBTRN_un->Sort)));
 /* line 189: */
EIIBTRN = (*NL(UHIBTRN_lhs));
if ( EIIBTRN )
{FIIBTRN = (DIIBTRN_sort==KKAATRN_usource);
if ( ! FIIBTRN )
{FIIBTRN = (DIIBTRN_sort==MKAATRN_uiosource);
}
EIIBTRN = FIIBTRN;
}
 /* line 191: */
if ( ! EIIBTRN )
{GIIBTRN = !(*NL(UHIBTRN_lhs));
if ( GIIBTRN )
{HIIBTRN = (DIIBTRN_sort==LKAATRN_usink);
if ( ! HIIBTRN )
{HIIBTRN = (DIIBTRN_sort==NKAATRN_uiosink);
}
GIIBTRN = HIIBTRN;
}
 /* line 192: */
EIIBTRN = GIIBTRN;
}
 /* line 193: */
 /* line 194: */
if ( !EIIBTRN )
{ 
switch ( DIIBTRN_sort )
{ 
case 1: 
JIIBTRN = KIIBTRN;
break;
case 2: 
JIIBTRN = MIIBTRN;
break;
case 3: 
JIIBTRN = OIIBTRN;
break;
case 4: 
JIIBTRN = QIIBTRN;
break;
default: 
A_IMP_SKIP ;
break;
} 
A_CALLPROC(ZLAATRN_makeid,(JIIBTRN, &RIIBTRN),(JIIBTRN, &RIIBTRN,(ZLAATRN_makeid).nonlocals));
SIIBTRN_sortname = RIIBTRN;
 /* line 195: */
TIIBTRN.data[0] = A_UNITE(UIIBTRN,mode7,7,SIIBTRN_sortname);
YIIBTRN = WIIBTRN ;
TIIBTRN.data[1] = A_UNITE(XIIBTRN,mode7,7,YIIBTRN);
if ( (*NL(UHIBTRN_lhs)) )
{ 
CJIBTRN = AJIBTRN ;
TIIBTRN.data[2] = A_UNITE(BJIBTRN,mode7,7,CJIBTRN);
} 
else
{ 
 /* line 196: */
GJIBTRN = EJIBTRN ;
TIIBTRN.data[2] = A_UNITE(FJIBTRN,mode7,7,GJIBTRN);
} 
KJIBTRN = IJIBTRN ;
TIIBTRN.data[3] = A_UNITE(JJIBTRN,mode7,7,KJIBTRN);
TIIBTRN.data[4] = A_UNITE(LJIBTRN,mode7,7,(*NL(VHIBTRN_fnname)));
NJIBTRN.fn.fn_global = LRAAOSL_newline;
NJIBTRN.nonlocals = A68_NIL;
TIIBTRN.data[5] = A_UNITE(MJIBTRN,mode12,12,NJIBTRN);
 /* line 197: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(OJIBTRN,TIIBTRN,6,A68_52 ));
} 
 /* line 198: */
PJIBTRN.U = A_UNITE(QJIBTRN,mode11,11,CIIBTRN_un);
 /* line 199: */
 /* line 200: */
PJIBTRN.C = A68_FALSE;
RJIBTRN = PJIBTRN;
} 
break;
case 6: /* REF STRUCT(INT)  */
case 34: /* REF STRUCT(INT)  */
 /* line 201: */
SJIBTRN.U = Unit;
 /* line 204: */
SJIBTRN.C = A68_FALSE;
RJIBTRN = SJIBTRN;
break;
case 15: /* REF STRUCT(MODE232,INT,INT)  */
case 16: /* REF STRUCT(MODE232,MODE194)  */
case 17: /* REF STRUCT(MODE232,MODE209)  */
case 20: /* REF STRUCT(MODE194,MODE232)  */
case 21: /* REF STRUCT(MODE232,REF MODE247)  */
case 22: /* REF STRUCT(BOOL,INT,MODE232,MODE232)  */
case 26: /* REF STRUCT(MODE194,MODE232,MODE232)  */
case 27: /* REF STRUCT(MODE194,MODE232)  */
case 30: /* REF STRUCT(MODE232,MODE185)  */
case 31: /* REF STRUCT(MODE232,MODE196)  */
case 32: /* REF STRUCT(MODE232)  */
 /* line 205: */
 /* line 206: */
TJIBTRN = (*(&(AWLATRN_nulltprocs->Unit))) ;
A_CALLPROC(TJIBTRN,(Unit, Tprocs, &UJIBTRN),(Unit, Tprocs, &UJIBTRN,(TJIBTRN).nonlocals));
RJIBTRN = UJIBTRN;
break;
default: 
 /* line 207: */
if ( !(*NL(UHIBTRN_lhs)) )
{ 
 /* line 208: */
ZJIBTRN = XJIBTRN ;
VJIBTRN.data[0] = A_UNITE(YJIBTRN,mode7,7,ZJIBTRN);
VJIBTRN.data[1] = A_UNITE(AKIBTRN,mode7,7,(*NL(VHIBTRN_fnname)));
CKIBTRN.fn.fn_global = LRAAOSL_newline;
CKIBTRN.nonlocals = A68_NIL;
VJIBTRN.data[2] = A_UNITE(BKIBTRN,mode12,12,CKIBTRN);
 /* line 209: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(DKIBTRN,VJIBTRN,3,A68_52 ));
} 
 /* line 210: */
EKIBTRN.U = Unit;
 /* line 211: */
 /* line 212: */
EKIBTRN.C = A68_FALSE;
RJIBTRN = EKIBTRN;
break;
} 
*ReturnedValue = (RJIBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  MKIBTRN_join_sort(A68_268 * J, A68_466  Close, A68_406  *ReturnedValue, void *NonLocals)
#define NL(x) (((NKIBTRN_join_sort *)NonLocals)->x)
{ 
A68_435  OKIBTRN;  /* CALL */
A68_392  PKIBTRN;  /* avoid structure result */
A68_435  QKIBTRN;  /* CALL */
A68_392  RKIBTRN;  /* avoid structure result */
A68_406  SKIBTRN;  /* collateral clause result */
A68_406  TKIBTRN;  /* clause result */
A_PROC_ENTRY(join_sort);
 /* line 215: */
 /* line 216: */
{ 
(*NL(VHIBTRN_fnname)) = (*(&(Close.Fdec->Fnname)));
 /* line 217: */
(*NL(UHIBTRN_lhs)) = A68_TRUE;
 /* line 218: */
OKIBTRN = (*(&(NL(IKIBTRN_unit_sort)->Unit))) ;
A_CALLPROC(OKIBTRN,((*(&(J->From))), NL(IKIBTRN_unit_sort), &PKIBTRN),((*(&(J->From))), NL(IKIBTRN_unit_sort), &PKIBTRN,(OKIBTRN).nonlocals));
PKIBTRN;
 /* line 219: */
(*NL(UHIBTRN_lhs)) = A68_FALSE;
 /* line 220: */
QKIBTRN = (*(&(NL(IKIBTRN_unit_sort)->Unit))) ;
A_CALLPROC(QKIBTRN,((*(&(J->To))), NL(IKIBTRN_unit_sort), &RKIBTRN),((*(&(J->To))), NL(IKIBTRN_unit_sort), &RKIBTRN,(QKIBTRN).nonlocals));
RKIBTRN;
 /* line 221: */
SKIBTRN.J = J;
 /* line 222: */
SKIBTRN.C = A68_FALSE;
TKIBTRN = SKIBTRN;
} 
A_PROC_EXIT(join_sort);
*ReturnedValue = (TKIBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  WKIBTRN_instance_name(A68_272  Inst, A68_466  Close, A68_395  *ReturnedValue)
{ 
A68_316  XKIBTRN;  /* OPERATORS - simple index */
A68_INT  YKIBTRN;  /* YIELD */
A68_VC  ZKIBTRN_env_name;
A68_308 * ALIBTRN_idec;
A68_490  BLIBTRN;  /* collateral clause result */
A68_52  ELIBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  FLIBTRN;  /* YIELD */
A68_52  GLIBTRN;  /* OPERATORS - mode -> union mode */
A68_52  JLIBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  KLIBTRN;  /* YIELD */
A68_52  LLIBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  MLIBTRN;  /* YIELD */
A68_52  PLIBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  QLIBTRN;  /* YIELD */
A68_52  RLIBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  SLIBTRN;  /* YIELD */
A68_52  TLIBTRN;  /* OPERATORS - mode -> union mode */
A68_56  ULIBTRN;  /* procedure value */
A68_85  VLIBTRN;  /* OPERATORS - istruct -> vector */
A68_395  WLIBTRN;  /* collateral clause result */
A68_395  XLIBTRN;  /* clause result */
A_PROC_ENTRY(instance_name);
 /* line 228: */
 /* line 229: */
{ 
XKIBTRN = (*(&(Close.Env->Fns))) ;
YKIBTRN = Inst.Fnno ;
ZKIBTRN_env_name = (*(&((*(&A_VINDEX(XKIBTRN,YKIBTRN)))->Fnname)));
 /* line 230: */
 /* line 231: */
ALIBTRN_idec = IDNATRN_find_fndec((*LHAATRN_makefnname(Inst.Fnno)), Close.Closure, Close.Env);
 /* line 232: */
 /* line 233: */
if ( A_VC_NE((*(&(ALIBTRN_idec->Fnname))),ZKIBTRN_env_name) )
{ 
FLIBTRN = DLIBTRN ;
BLIBTRN.data[0] = A_UNITE(ELIBTRN,mode7,7,FLIBTRN);
BLIBTRN.data[1] = A_UNITE(GLIBTRN,mode7,7,ZKIBTRN_env_name);
KLIBTRN = ILIBTRN ;
BLIBTRN.data[2] = A_UNITE(JLIBTRN,mode7,7,KLIBTRN);
 /* line 234: */
MLIBTRN = (*(&(ALIBTRN_idec->Fnname))) ;
BLIBTRN.data[3] = A_UNITE(LLIBTRN,mode7,7,MLIBTRN);
QLIBTRN = OLIBTRN ;
BLIBTRN.data[4] = A_UNITE(PLIBTRN,mode7,7,QLIBTRN);
SLIBTRN = (*(&(Close.Fdec->Fnname))) ;
BLIBTRN.data[5] = A_UNITE(RLIBTRN,mode7,7,SLIBTRN);
ULIBTRN.fn.fn_global = LRAAOSL_newline;
ULIBTRN.nonlocals = A68_NIL;
BLIBTRN.data[6] = A_UNITE(TLIBTRN,mode12,12,ULIBTRN);
 /* line 235: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(VLIBTRN,BLIBTRN,7,A68_52 ));
} 
 /* line 236: */
WLIBTRN.I = Inst;
 /* line 237: */
WLIBTRN.C = A68_FALSE;
XLIBTRN = WLIBTRN;
} 
A_PROC_EXIT(instance_name);
*ReturnedValue = (XLIBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  ZLIBTRN_output_type(A68_466  Closed, A68_413  *ReturnedValue)
{ 
A68_304  AMIBTRN;  /* united object - for case conformity */
A68_277 * BMIBTRN_tag;
A68_210  CMIBTRN;  /* avoid structure result */
A68_210  DMIBTRN_rhs;
A68_210  EMIBTRN;  /* avoid structure result */
A68_210  FMIBTRN_lhs;
A68_210  GMIBTRN;  /* avoid structure result */
A68_210  HMIBTRN_lhs_type;
A68_210  IMIBTRN;  /* avoid structure result */
A68_210  JMIBTRN_rhs_type;
A68_210  KMIBTRN;  /* united object - for case conformity */
A68_BOOL  LMIBTRN;  /* clause result */
A68_210  MMIBTRN;  /* united object - for case conformity */
A68_BOOL  NMIBTRN_can_test;
A68_BOOL  OMIBTRN;  /* optbool result */
A68_475  PMIBTRN;  /* collateral clause result */
A68_52  SMIBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  TMIBTRN;  /* YIELD */
A68_52  UMIBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  VMIBTRN;  /* YIELD */
A68_52  WMIBTRN;  /* OPERATORS - mode -> union mode */
A68_56  XMIBTRN;  /* procedure value */
A68_85  YMIBTRN;  /* OPERATORS - istruct -> vector */
A68_413  ZMIBTRN;  /* collateral clause result */
A68_413  ANIBTRN;  /* clause result */
A_PROC_ENTRY(output_type);
 /* line 243: */
 /* line 244: */
{ 
 /* line 245: */
AMIBTRN = (*(&(Closed.Fdec->Fnbody))) ;
switch ( AMIBTRN.mode )
{ 
case 1: /* REF STRUCT(MODE232)  */
BMIBTRN_tag = (AMIBTRN.data.mode1);
 /* line 246: */
{ 
VUNATRN_unit_type( (*(&(BMIBTRN_tag->Tag))), Closed.Fdec, Closed.Env, &CMIBTRN );
DMIBTRN_rhs = CMIBTRN;
 /* line 247: */
JTNATRN_names_type( (*(&(Closed.Fdec->Outputs))), Closed.Fdec, &EMIBTRN );
FMIBTRN_lhs = EMIBTRN;
 /* line 248: */
DDOATRN_simplify_type( FMIBTRN_lhs, Closed.Env, &GMIBTRN );
HMIBTRN_lhs_type = GMIBTRN;
 /* line 249: */
DDOATRN_simplify_type( DMIBTRN_rhs, Closed.Env, &IMIBTRN );
JMIBTRN_rhs_type = IMIBTRN;
 /* line 250: */
 /* line 251: */
KMIBTRN = HMIBTRN_lhs_type ;
switch ( KMIBTRN.mode )
{ 
case 9: /* REF STRUCT(INT)  */
 /* line 252: */
 /* line 253: */
LMIBTRN = A68_FALSE;
break;
default: 
MMIBTRN = JMIBTRN_rhs_type ;
switch ( MMIBTRN.mode )
{ 
case 9: /* REF STRUCT(INT)  */
LMIBTRN = A68_FALSE;
break;
default: 
 /* line 254: */
LMIBTRN = A68_TRUE;
break;
} 
break;
} 
NMIBTRN_can_test = LMIBTRN;
 /* line 255: */
 /* line 256: */
OMIBTRN = NMIBTRN_can_test;
if ( OMIBTRN )
{ /* line 257: */
OMIBTRN = !A_CALLPROC(LCIBTRN_checktypes,(HMIBTRN_lhs_type, JMIBTRN_rhs_type, Closed.Env, Closed.Env),(HMIBTRN_lhs_type, JMIBTRN_rhs_type, Closed.Env, Closed.Env,(LCIBTRN_checktypes).nonlocals));
}
if ( OMIBTRN )
{ 
TMIBTRN = RMIBTRN ;
PMIBTRN.data[0] = A_UNITE(SMIBTRN,mode7,7,TMIBTRN);
 /* line 258: */
VMIBTRN = (*(&(Closed.Fdec->Fnname))) ;
PMIBTRN.data[1] = A_UNITE(UMIBTRN,mode7,7,VMIBTRN);
XMIBTRN.fn.fn_global = LRAAOSL_newline;
XMIBTRN.nonlocals = A68_NIL;
PMIBTRN.data[2] = A_UNITE(WMIBTRN,mode12,12,XMIBTRN);
 /* line 259: */
 /* line 260: */
 /* line 261: */
 /* line 263: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(YMIBTRN,PMIBTRN,3,A68_52 ));
} 
} 
break;
default: 
/*SKIP*/;
break;
} 
 /* line 264: */
ZMIBTRN.F = Closed.Fdec;
 /* line 265: */
ZMIBTRN.C = A68_FALSE;
ANIBTRN = ZMIBTRN;
} 
A_PROC_EXIT(output_type);
*ReturnedValue = (ANIBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  GNIBTRN_fndec(A68_308 * Fdec, A68_416 * Tprocs, A68_311 * Env, A68_INT  I, A68_413  *ReturnedValue, void *NonLocals)
#define NL(x) (((HNIBTRN_fndec *)NonLocals)->x)
{ 
A68_466  INIBTRN;  /* collateral clause result */
A68_466  JNIBTRN_closed;
A68_413  KNIBTRN;  /* clause result */
A68_413  LNIBTRN;  /* avoid structure result */
A68_444  ONIBTRN_anonymous;   /* proc value of non-global proc */
A68_460  TNIBTRN;  /* clause result */
A68_461  UNIBTRN;  /* OPERATORS - mode -> union mode */
A68_444  VNIBTRN;  /* YIELD */
A68_460  WNIBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_449  ZNIBTRN_anonymous;   /* proc value of non-global proc */
A68_461  EOIBTRN;  /* OPERATORS - mode -> union mode */
A68_449  FOIBTRN;  /* YIELD */
A68_460  GOIBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_435  JOIBTRN_anonymous;   /* proc value of non-global proc */
A68_461  SOIBTRN;  /* OPERATORS - mode -> union mode */
A68_435  TOIBTRN;  /* YIELD */
A68_460  UOIBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_449  XOIBTRN_anonymous;   /* proc value of non-global proc */
A68_461  CPIBTRN;  /* OPERATORS - mode -> union mode */
A68_449  DPIBTRN;  /* YIELD */
A68_460  EPIBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_438  HPIBTRN_anonymous;   /* proc value of non-global proc */
A68_461  MPIBTRN;  /* OPERATORS - mode -> union mode */
A68_438  NPIBTRN;  /* YIELD */
A68_460  OPIBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_461  PPIBTRN;  /* OPERATORS - mode -> union mode */
A68_426  QPIBTRN;  /* procedure value */
A68_460  RPIBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_416 * SPIBTRN_newtprocs;
A68_456  TPIBTRN;  /* CALL */
A68_413  UPIBTRN;  /* avoid structure result */
A_PROC_ENTRY(fndec);
 /* line 270: */
{ 
INIBTRN.Closure = NL(Closure);
INIBTRN.Fdec = Fdec;
INIBTRN.Env = Env;
JNIBTRN_closed = INIBTRN;
 /* line 272: */
 /* line 273: */
if ( (I==6) )
{ 
 /* line 274: */
 /* line 275: */
ZLIBTRN_output_type( JNIBTRN_closed, &LNIBTRN );
KNIBTRN = LNIBTRN;
} 
else
{ 
 /* line 276: */
{ 
 /* line 277: */
if ( (I==1) )
{ 
A_CLOSURE( ONIBTRN_anonymous, PNIBTRN_anonymous, QNIBTRN_anonymous );
(( QNIBTRN_anonymous * ) ( ONIBTRN_anonymous.nonlocals )) -> JNIBTRN_closed = JNIBTRN_closed;
VNIBTRN = ONIBTRN_anonymous ;
TNIBTRN = A_HVEC(WNIBTRN,A_UNITE(UNIBTRN,mode28,28,VNIBTRN),A68_461 );
} 
else
{ 
 /* line 280: */
if ( (I==2) )
{ 
A_CLOSURE( ZNIBTRN_anonymous, AOIBTRN_anonymous, BOIBTRN_anonymous );
(( BOIBTRN_anonymous * ) ( ZNIBTRN_anonymous.nonlocals )) -> JNIBTRN_closed = JNIBTRN_closed;
FOIBTRN = ZNIBTRN_anonymous ;
TNIBTRN = A_HVEC(GOIBTRN,A_UNITE(EOIBTRN,mode33,33,FOIBTRN),A68_461 );
} 
else
{ 
 /* line 283: */
if ( (I==3) )
{ 
A_CLOSURE( JOIBTRN_anonymous, KOIBTRN_anonymous, LOIBTRN_anonymous );
(( LOIBTRN_anonymous * ) ( JOIBTRN_anonymous.nonlocals )) -> JNIBTRN_closed = JNIBTRN_closed;
TOIBTRN = JOIBTRN_anonymous ;
TNIBTRN = A_HVEC(UOIBTRN,A_UNITE(SOIBTRN,mode19,19,TOIBTRN),A68_461 );
} 
else
{ 
 /* line 290: */
if ( (I==4) )
{ 
A_CLOSURE( XOIBTRN_anonymous, YOIBTRN_anonymous, ZOIBTRN_anonymous );
(( ZOIBTRN_anonymous * ) ( XOIBTRN_anonymous.nonlocals )) -> LKIBTRN_join_sort = NL(LKIBTRN_join_sort);
(( ZOIBTRN_anonymous * ) ( XOIBTRN_anonymous.nonlocals )) -> JNIBTRN_closed = JNIBTRN_closed;
DPIBTRN = XOIBTRN_anonymous ;
TNIBTRN = A_HVEC(EPIBTRN,A_UNITE(CPIBTRN,mode33,33,DPIBTRN),A68_461 );
} 
else
{ 
 /* line 292: */
if ( (I==5) )
{ 
A_CLOSURE( HPIBTRN_anonymous, IPIBTRN_anonymous, JPIBTRN_anonymous );
(( JPIBTRN_anonymous * ) ( HPIBTRN_anonymous.nonlocals )) -> JNIBTRN_closed = JNIBTRN_closed;
 /* line 294: */
NPIBTRN = HPIBTRN_anonymous ;
TNIBTRN = A_HVEC(OPIBTRN,A_UNITE(MPIBTRN,mode22,22,NPIBTRN),A68_461 );
} 
else
{ 
 /* line 295: */
QPIBTRN.fn.fn_global = NWLATRN_null_type;
QPIBTRN.nonlocals = A68_NIL;
TNIBTRN = A_HVEC(RPIBTRN,A_UNITE(PPIBTRN,mode10,10,QPIBTRN),A68_461 );
} 
} 
} 
} 
} 
} 
SPIBTRN_newtprocs = THJATRN_make_newtprocs(Tprocs, TNIBTRN);
 /* line 296: */
 /* line 297: */
 /* line 298: */
TPIBTRN = (*(&(AWLATRN_nulltprocs->Fndec))) ;
A_CALLPROC(TPIBTRN,(Fdec, SPIBTRN_newtprocs, &UPIBTRN),(Fdec, SPIBTRN_newtprocs, &UPIBTRN,(TPIBTRN).nonlocals));
KNIBTRN = UPIBTRN;
} 
} 
A_PROC_EXIT(fndec);
*ReturnedValue = (KNIBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  ZPIBTRN_outer(A68_317  Of, A68_416 * Tprocs, A68_INT  Index, A68_414  *ReturnedValue, void *NonLocals)
#define NL(x) (((AQIBTRN_outer *)NonLocals)->x)
{ 
A68_456  DQIBTRN_anonymous;   /* proc value of non-global proc */
A68_461  IQIBTRN;  /* OPERATORS - mode -> union mode */
A68_456  JQIBTRN;  /* YIELD */
A68_460  KQIBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_416 * LQIBTRN_newtprocs;
A68_457  MQIBTRN;  /* CALL */
A68_414  NQIBTRN;  /* avoid structure result */
A68_414  OQIBTRN_oc;
A68_414  PQIBTRN;  /* clause result */
A_PROC_ENTRY(outer);
 /* line 301: */
{ 
(*NL(XCIBTRN_env)) = Of.Environ;
 /* line 302: */
 /* line 303: */
A_CLOSURE( DQIBTRN_anonymous, EQIBTRN_anonymous, FQIBTRN_anonymous );
(( FQIBTRN_anonymous * ) ( DQIBTRN_anonymous.nonlocals )) -> FNIBTRN_fndec = NL(FNIBTRN_fndec);
(( FQIBTRN_anonymous * ) ( DQIBTRN_anonymous.nonlocals )) -> Of = Of;
(( FQIBTRN_anonymous * ) ( DQIBTRN_anonymous.nonlocals )) -> Index = Index;
JQIBTRN = DQIBTRN_anonymous ;
LQIBTRN_newtprocs = THJATRN_make_newtprocs(Tprocs, A_HVEC(KQIBTRN,A_UNITE(IQIBTRN,mode40,40,JQIBTRN),A68_461 ));
 /* line 305: */
MQIBTRN = (*(&(AWLATRN_nulltprocs->Outer))) ;
A_CALLPROC(MQIBTRN,(Of, LQIBTRN_newtprocs, &NQIBTRN),(Of, LQIBTRN_newtprocs, &NQIBTRN,(MQIBTRN).nonlocals));
OQIBTRN_oc = NQIBTRN;
 /* line 306: */
MLJATRN_discard_tprocs(LQIBTRN_newtprocs);
 /* line 307: */
 /* line 308: */
PQIBTRN = OQIBTRN_oc;
} 
A_PROC_EXIT(outer);
*ReturnedValue = (PQIBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  YSIBTRN_anonymous(A68_317  Of, A68_416 * Tp, A68_414  *ReturnedValue, void *NonLocals)
#define NL(x) (((ZSIBTRN_anonymous *)NonLocals)->x)
{ 
A68_414  ATIBTRN;  /* clause result */
A68_414  BTIBTRN;  /* avoid structure result */
 /* line 325: */
A_CALLPROC(NL(YPIBTRN_outer),(Of, Tp, NL(XQIBTRN_index), &BTIBTRN),(Of, Tp, NL(XQIBTRN_index), &BTIBTRN,(NL(YPIBTRN_outer)).nonlocals));
ATIBTRN = BTIBTRN;
*ReturnedValue = (ATIBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  RTIBTRN_fndec(A68_308 * Fdec, A68_416 * Tp, A68_311 * Env, A68_413  *ReturnedValue)
{ 
A68_310  STIBTRN_nametypes;
A68_443  VTIBTRN_names;   /* proc value of non-global proc */
A68_438  MUIBTRN_instance;   /* proc value of non-global proc */
A68_495  BVIBTRN;  /* collateral clause result */
A68_461  CVIBTRN;  /* OPERATORS - mode -> union mode */
A68_443  DVIBTRN;  /* YIELD */
A68_461  EVIBTRN;  /* OPERATORS - mode -> union mode */
A68_438  FVIBTRN;  /* YIELD */
A68_460  GVIBTRN;  /* OPERATORS - istruct -> vector */
A68_416 * HVIBTRN_newtprocs;
A68_475  IVIBTRN;  /* collateral clause result */
A68_52  LVIBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  MVIBTRN;  /* YIELD */
A68_52  NVIBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  OVIBTRN;  /* YIELD */
A68_52  RVIBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  SVIBTRN;  /* YIELD */
A68_85  TVIBTRN;  /* OPERATORS - istruct -> vector */
A68_400  UVIBTRN;  /* avoid structure result */
A68_400  VVIBTRN_ic;
A68_400  WVIBTRN;  /* avoid structure result */
A68_400  XVIBTRN_oc;
A68_453  YVIBTRN;  /* CALL */
A68_410  ZVIBTRN;  /* avoid structure result */
A68_410  AWIBTRN_fb;
A68_52  BWIBTRN;  /* OPERATORS - mode -> union mode */
A68_56  CWIBTRN;  /* procedure value */
A68_85  DWIBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_413  EWIBTRN;  /* collateral clause result */
A68_413  FWIBTRN;  /* clause result */
A_PROC_ENTRY(fndec);
 /* line 336: */
 /* line 337: */
{ 
STIBTRN_nametypes = (*(&(Fdec->Nametypes)));
 /* line 339: */
A_CLOSURE( VTIBTRN_names, WTIBTRN_names, XTIBTRN_names );
(( XTIBTRN_names * ) ( VTIBTRN_names.nonlocals )) -> STIBTRN_nametypes = STIBTRN_nametypes;
 /* line 348: */
A_CLOSURE( MUIBTRN_instance, NUIBTRN_instance, OUIBTRN_instance );
(( OUIBTRN_instance * ) ( MUIBTRN_instance.nonlocals )) -> Env = Env;
 /* line 354: */
DVIBTRN = VTIBTRN_names ;
BVIBTRN.data[0] = A_UNITE(CVIBTRN,mode27,27,DVIBTRN);
FVIBTRN = MUIBTRN_instance ;
BVIBTRN.data[1] = A_UNITE(EVIBTRN,mode22,22,FVIBTRN);
HVIBTRN_newtprocs = THJATRN_make_newtprocs(Tp, A_HISVEC(GVIBTRN,BVIBTRN,2,A68_461 ));
 /* line 356: */
MVIBTRN = KVIBTRN ;
IVIBTRN.data[0] = A_UNITE(LVIBTRN,mode7,7,MVIBTRN);
OVIBTRN = (*(&(Fdec->Fnname))) ;
IVIBTRN.data[1] = A_UNITE(NVIBTRN,mode7,7,OVIBTRN);
SVIBTRN = QVIBTRN ;
IVIBTRN.data[2] = A_UNITE(RVIBTRN,mode7,7,SVIBTRN);
GFBAOSL_put(LEAAOST_out, A_HISVEC(TVIBTRN,IVIBTRN,3,A68_52 ));
 /* line 357: */
A_CALLPROC(VTIBTRN_names,((*(&(Fdec->Inputs))), HVIBTRN_newtprocs, &UVIBTRN),((*(&(Fdec->Inputs))), HVIBTRN_newtprocs, &UVIBTRN,(VTIBTRN_names).nonlocals));
VVIBTRN_ic = UVIBTRN;
 /* line 358: */
A_CALLPROC(VTIBTRN_names,((*(&(Fdec->Outputs))), HVIBTRN_newtprocs, &WVIBTRN),((*(&(Fdec->Outputs))), HVIBTRN_newtprocs, &WVIBTRN,(VTIBTRN_names).nonlocals));
XVIBTRN_oc = WVIBTRN;
 /* line 359: */
YVIBTRN = (*(&(AWLATRN_nulltprocs->Fnbody))) ;
A_CALLPROC(YVIBTRN,((*(&(Fdec->Fnbody))), HVIBTRN_newtprocs, &ZVIBTRN),((*(&(Fdec->Fnbody))), HVIBTRN_newtprocs, &ZVIBTRN,(YVIBTRN).nonlocals));
AWIBTRN_fb = ZVIBTRN;
 /* line 360: */
CWIBTRN.fn.fn_global = LRAAOSL_newline;
CWIBTRN.nonlocals = A68_NIL;
GFBAOSL_put(LEAAOST_out, A_HVEC(DWIBTRN,A_UNITE(BWIBTRN,mode12,12,CWIBTRN),A68_52 ));
 /* line 361: */
MLJATRN_discard_tprocs(HVIBTRN_newtprocs);
 /* line 362: */
EWIBTRN.F = Fdec;
 /* line 363: */
EWIBTRN.C = A68_FALSE;
FWIBTRN = EWIBTRN;
} 
A_PROC_EXIT(fndec);
*ReturnedValue = (FWIBTRN);
return;
} 
#undef NL

A_STATIC A68_VOID  JWIBTRN_outer(A68_317  Of, A68_416 * Tprocs, A68_414  *ReturnedValue, void *NonLocals)
#define NL(x) (((KWIBTRN_outer *)NonLocals)->x)
{ 
A68_456  NWIBTRN_anonymous;   /* proc value of non-global proc */
A68_461  SWIBTRN;  /* OPERATORS - mode -> union mode */
A68_456  TWIBTRN;  /* YIELD */
A68_460  UWIBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_416 * VWIBTRN_newtprocs;
A68_457  WWIBTRN;  /* CALL */
A68_414  XWIBTRN;  /* avoid structure result */
A68_414  YWIBTRN;  /* collateral clause result */
A68_414  ZWIBTRN;  /* clause result */
A_PROC_ENTRY(outer);
 /* line 366: */
 /* line 367: */
{ 
 /* line 368: */
A_CLOSURE( NWIBTRN_anonymous, OWIBTRN_anonymous, PWIBTRN_anonymous );
(( PWIBTRN_anonymous * ) ( NWIBTRN_anonymous.nonlocals )) -> Of = Of;
TWIBTRN = NWIBTRN_anonymous ;
VWIBTRN_newtprocs = THJATRN_make_newtprocs(Tprocs, A_HVEC(UWIBTRN,A_UNITE(SWIBTRN,mode40,40,TWIBTRN),A68_461 ));
 /* line 370: */
WWIBTRN = (*(&(AWLATRN_nulltprocs->Outer))) ;
A_CALLPROC(WWIBTRN,(Of, VWIBTRN_newtprocs, &XWIBTRN),(Of, VWIBTRN_newtprocs, &XWIBTRN,(WWIBTRN).nonlocals));
XWIBTRN;
 /* line 371: */
MLJATRN_discard_tprocs(VWIBTRN_newtprocs);
 /* line 372: */
YWIBTRN.O = Of;
 /* line 373: */
YWIBTRN.C = A68_FALSE;
ZWIBTRN = YWIBTRN;
} 
A_PROC_EXIT(outer);
*ReturnedValue = (ZWIBTRN);
return;
} 
#undef NL

A_STATIC A68_BOOL  QCIBTRN_anonymous(A68_210  A, A68_210  B, A68_311 * Enva, A68_311 * Envb)
{ 
A68_BOOL  RCIBTRN;  /* clause result */
 /* line 75: */
 /* line 76: */
RCIBTRN = NEOATRN_check_types(A, B, Enva, Envb, A68_TRUE);
return( RCIBTRN );
} 
#undef NL
 /* line 79: */

A68_VOID  WCIBTRN_assemble_diagnostics(A68_321 * Closure, A68_54  Tests, A68_97  Msg, A68_415  *ReturnedValue)
{ 
A68_311 * XCIBTRN_env;
A68_BOOL  UHIBTRN_lhs;
A68_VC  VHIBTRN_fnname;
A68_435  YHIBTRN_anonymous;   /* proc value of non-global proc */
A68_461  FKIBTRN;  /* OPERATORS - mode -> union mode */
A68_435  GKIBTRN;  /* YIELD */
A68_460  HKIBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_416 * IKIBTRN_unit_sort;
A68_486  LKIBTRN_join_sort;   /* proc value of non-global proc */
A68_493  FNIBTRN_fndec;   /* proc value of non-global proc */
A68_494  YPIBTRN_outer;   /* proc value of non-global proc */
A68_495  QQIBTRN;  /* collateral clause result */
A68_461  RQIBTRN;  /* OPERATORS - mode -> union mode */
A68_420  SQIBTRN;  /* procedure value */
A68_461  TQIBTRN;  /* OPERATORS - mode -> union mode */
A68_426  UQIBTRN;  /* procedure value */
A68_460  VQIBTRN;  /* OPERATORS - istruct -> vector */
A68_416 * WQIBTRN_tprocs1;
A68_INT  XQIBTRN_index;
A68_INT  YQIBTRN;  /* to part of loop */
A68_497  ZQIBTRN;  /* collateral clause result */
A68_52  CRIBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  DRIBTRN;  /* YIELD */
A68_52  ERIBTRN;  /* OPERATORS - mode -> union mode */
A68_56  FRIBTRN;  /* procedure value */
A68_85  GRIBTRN;  /* OPERATORS - istruct -> vector */
A68_497  HRIBTRN;  /* collateral clause result */
A68_52  KRIBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  LRIBTRN;  /* YIELD */
A68_52  MRIBTRN;  /* OPERATORS - mode -> union mode */
A68_56  NRIBTRN;  /* procedure value */
A68_85  ORIBTRN;  /* OPERATORS - istruct -> vector */
A68_497  PRIBTRN;  /* collateral clause result */
A68_52  SRIBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  TRIBTRN;  /* YIELD */
A68_52  URIBTRN;  /* OPERATORS - mode -> union mode */
A68_56  VRIBTRN;  /* procedure value */
A68_85  WRIBTRN;  /* OPERATORS - istruct -> vector */
A68_497  XRIBTRN;  /* collateral clause result */
A68_52  ASIBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  BSIBTRN;  /* YIELD */
A68_52  CSIBTRN;  /* OPERATORS - mode -> union mode */
A68_56  DSIBTRN;  /* procedure value */
A68_85  ESIBTRN;  /* OPERATORS - istruct -> vector */
A68_497  FSIBTRN;  /* collateral clause result */
A68_52  ISIBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  JSIBTRN;  /* YIELD */
A68_52  KSIBTRN;  /* OPERATORS - mode -> union mode */
A68_56  LSIBTRN;  /* procedure value */
A68_85  MSIBTRN;  /* OPERATORS - istruct -> vector */
A68_497  NSIBTRN;  /* collateral clause result */
A68_52  QSIBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  RSIBTRN;  /* YIELD */
A68_52  SSIBTRN;  /* OPERATORS - mode -> union mode */
A68_56  TSIBTRN;  /* procedure value */
A68_85  USIBTRN;  /* OPERATORS - istruct -> vector */
A68_457  XSIBTRN_anonymous;   /* proc value of non-global proc */
A68_461  CTIBTRN;  /* OPERATORS - mode -> union mode */
A68_457  DTIBTRN;  /* YIELD */
A68_460  ETIBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_416 * FTIBTRN_tprocs2;
A68_458  GTIBTRN;  /* CALL */
A68_415  HTIBTRN;  /* avoid structure result */
A68_415  ITIBTRN;  /* collateral clause result */
A68_415  JTIBTRN;  /* clause result */
A_PROC_ENTRY(assemble_diagnostics);
 /* line 80: */
 /* line 82: */
{ 
 /* line 87: */
 /* line 121: */
 /* line 138: */
 /* line 179: */
UHIBTRN_lhs = A68_FALSE;
 /* line 180: */
VHIBTRN_fnname = TTCAOST_nullid;
 /* line 184: */
 /* line 185: */
A_CLOSURE( YHIBTRN_anonymous, ZHIBTRN_anonymous, AIIBTRN_anonymous );
(( AIIBTRN_anonymous * ) ( YHIBTRN_anonymous.nonlocals )) -> UHIBTRN_lhs = (&UHIBTRN_lhs);
(( AIIBTRN_anonymous * ) ( YHIBTRN_anonymous.nonlocals )) -> VHIBTRN_fnname = (&VHIBTRN_fnname);
GKIBTRN = YHIBTRN_anonymous ;
IKIBTRN_unit_sort = THJATRN_make_newtprocs(AWLATRN_nulltprocs, A_HVEC(HKIBTRN,A_UNITE(FKIBTRN,mode19,19,GKIBTRN),A68_461 ));
 /* line 214: */
A_CLOSURE( LKIBTRN_join_sort, MKIBTRN_join_sort, NKIBTRN_join_sort );
(( NKIBTRN_join_sort * ) ( LKIBTRN_join_sort.nonlocals )) -> VHIBTRN_fnname = (&VHIBTRN_fnname);
(( NKIBTRN_join_sort * ) ( LKIBTRN_join_sort.nonlocals )) -> UHIBTRN_lhs = (&UHIBTRN_lhs);
(( NKIBTRN_join_sort * ) ( LKIBTRN_join_sort.nonlocals )) -> IKIBTRN_unit_sort = IKIBTRN_unit_sort;
 /* line 227: */
 /* line 242: */
 /* line 268: */
A_CLOSURE( FNIBTRN_fndec, GNIBTRN_fndec, HNIBTRN_fndec );
(( HNIBTRN_fndec * ) ( FNIBTRN_fndec.nonlocals )) -> Closure = Closure;
(( HNIBTRN_fndec * ) ( FNIBTRN_fndec.nonlocals )) -> LKIBTRN_join_sort = LKIBTRN_join_sort;
 /* line 300: */
A_CLOSURE( YPIBTRN_outer, ZPIBTRN_outer, AQIBTRN_outer );
(( AQIBTRN_outer * ) ( YPIBTRN_outer.nonlocals )) -> XCIBTRN_env = (&XCIBTRN_env);
(( AQIBTRN_outer * ) ( YPIBTRN_outer.nonlocals )) -> FNIBTRN_fndec = FNIBTRN_fndec;
 /* line 310: */
 /* line 311: */
SQIBTRN.fn.fn_global = IWLATRN_null_formula;
SQIBTRN.nonlocals = A68_NIL;
QQIBTRN.data[0] = A_UNITE(RQIBTRN,mode4,4,SQIBTRN);
UQIBTRN.fn.fn_global = NWLATRN_null_type;
UQIBTRN.nonlocals = A68_NIL;
QQIBTRN.data[1] = A_UNITE(TQIBTRN,mode10,10,UQIBTRN);
WQIBTRN_tprocs1 = THJATRN_make_newtprocs(AWLATRN_nulltprocs, A_HISVEC(VQIBTRN,QQIBTRN,2,A68_461 ));
 /* line 313: */
 /* line 314: */
YQIBTRN = Tests.upb;
for ( XQIBTRN_index = 1;
XQIBTRN_index <= YQIBTRN;
XQIBTRN_index += 1 )
{ 
 /* line 315: */
if ( (*(&A_VINDEX(Tests,XQIBTRN_index))) )
{ 
 /* line 316: */
switch ( XQIBTRN_index )
{ 
case 1: 
DRIBTRN = BRIBTRN ;
ZQIBTRN.data[0] = A_UNITE(CRIBTRN,mode7,7,DRIBTRN);
FRIBTRN.fn.fn_global = LRAAOSL_newline;
FRIBTRN.nonlocals = A68_NIL;
ZQIBTRN.data[1] = A_UNITE(ERIBTRN,mode12,12,FRIBTRN);
 /* line 317: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(GRIBTRN,ZQIBTRN,2,A68_52 ));
break;
case 2: 
LRIBTRN = JRIBTRN ;
HRIBTRN.data[0] = A_UNITE(KRIBTRN,mode7,7,LRIBTRN);
NRIBTRN.fn.fn_global = LRAAOSL_newline;
NRIBTRN.nonlocals = A68_NIL;
HRIBTRN.data[1] = A_UNITE(MRIBTRN,mode12,12,NRIBTRN);
 /* line 318: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(ORIBTRN,HRIBTRN,2,A68_52 ));
break;
case 3: 
TRIBTRN = RRIBTRN ;
PRIBTRN.data[0] = A_UNITE(SRIBTRN,mode7,7,TRIBTRN);
VRIBTRN.fn.fn_global = LRAAOSL_newline;
VRIBTRN.nonlocals = A68_NIL;
PRIBTRN.data[1] = A_UNITE(URIBTRN,mode12,12,VRIBTRN);
 /* line 319: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(WRIBTRN,PRIBTRN,2,A68_52 ));
break;
case 4: 
BSIBTRN = ZRIBTRN ;
XRIBTRN.data[0] = A_UNITE(ASIBTRN,mode7,7,BSIBTRN);
DSIBTRN.fn.fn_global = LRAAOSL_newline;
DSIBTRN.nonlocals = A68_NIL;
XRIBTRN.data[1] = A_UNITE(CSIBTRN,mode12,12,DSIBTRN);
 /* line 320: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(ESIBTRN,XRIBTRN,2,A68_52 ));
break;
case 5: 
JSIBTRN = HSIBTRN ;
FSIBTRN.data[0] = A_UNITE(ISIBTRN,mode7,7,JSIBTRN);
LSIBTRN.fn.fn_global = LRAAOSL_newline;
LSIBTRN.nonlocals = A68_NIL;
FSIBTRN.data[1] = A_UNITE(KSIBTRN,mode12,12,LSIBTRN);
 /* line 321: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(MSIBTRN,FSIBTRN,2,A68_52 ));
break;
case 6: 
RSIBTRN = PSIBTRN ;
NSIBTRN.data[0] = A_UNITE(QSIBTRN,mode7,7,RSIBTRN);
TSIBTRN.fn.fn_global = LRAAOSL_newline;
TSIBTRN.nonlocals = A68_NIL;
NSIBTRN.data[1] = A_UNITE(SSIBTRN,mode12,12,TSIBTRN);
 /* line 322: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(USIBTRN,NSIBTRN,2,A68_52 ));
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 323: */
 /* line 324: */
A_CLOSURE( XSIBTRN_anonymous, YSIBTRN_anonymous, ZSIBTRN_anonymous );
(( ZSIBTRN_anonymous * ) ( XSIBTRN_anonymous.nonlocals )) -> YPIBTRN_outer = YPIBTRN_outer;
(( ZSIBTRN_anonymous * ) ( XSIBTRN_anonymous.nonlocals )) -> XQIBTRN_index = XQIBTRN_index;
DTIBTRN = XSIBTRN_anonymous ;
FTIBTRN_tprocs2 = THJATRN_make_newtprocs(WQIBTRN_tprocs1, A_HVEC(ETIBTRN,A_UNITE(CTIBTRN,mode41,41,DTIBTRN),A68_461 ));
 /* line 326: */
GTIBTRN = (*(&(AWLATRN_nulltprocs->Closure))) ;
A_CALLPROC(GTIBTRN,(Closure, FTIBTRN_tprocs2, Msg, &HTIBTRN),(Closure, FTIBTRN_tprocs2, Msg, &HTIBTRN,(GTIBTRN).nonlocals));
HTIBTRN;
 /* line 327: */
 /* line 328: */
 /* line 329: */
MLJATRN_discard_tprocs(FTIBTRN_tprocs2);
} 
}
 /* line 330: */
ITIBTRN.Cl = Closure;
 /* line 331: */
ITIBTRN.C = A68_FALSE;
JTIBTRN = ITIBTRN;
} 
A_PROC_EXIT(assemble_diagnostics);
*ReturnedValue = (JTIBTRN);
return;
} 
#undef NL

A68_VOID  MTIBTRN_monitoring_order(A68_318 * Os, A68_97  Msg)
{ 
A68_457  IWIBTRN_outer;   /* proc value of non-global proc */
A68_506  AXIBTRN;  /* collateral clause result */
A68_461  BXIBTRN;  /* OPERATORS - mode -> union mode */
A68_420  CXIBTRN;  /* procedure value */
A68_461  DXIBTRN;  /* OPERATORS - mode -> union mode */
A68_426  EXIBTRN;  /* procedure value */
A68_461  FXIBTRN;  /* OPERATORS - mode -> union mode */
A68_457  GXIBTRN;  /* YIELD */
A68_460  HXIBTRN;  /* OPERATORS - istruct -> vector */
A68_416 * IXIBTRN_newtprocs;
A68_318 * JXIBTRN_o;
A68_457  KXIBTRN;  /* CALL */
A68_414  LXIBTRN;  /* avoid structure result */
A_PROC_ENTRY(monitoring_order);
 /* line 334: */
 /* line 335: */
{ 
 /* line 365: */
A_CLOSURE( IWIBTRN_outer, JWIBTRN_outer, KWIBTRN_outer );
 /* line 375: */
 /* line 376: */
CXIBTRN.fn.fn_global = IWLATRN_null_formula;
CXIBTRN.nonlocals = A68_NIL;
AXIBTRN.data[0] = A_UNITE(BXIBTRN,mode4,4,CXIBTRN);
EXIBTRN.fn.fn_global = NWLATRN_null_type;
EXIBTRN.nonlocals = A68_NIL;
AXIBTRN.data[1] = A_UNITE(DXIBTRN,mode10,10,EXIBTRN);
GXIBTRN = IWIBTRN_outer ;
AXIBTRN.data[2] = A_UNITE(FXIBTRN,mode41,41,GXIBTRN);
IXIBTRN_newtprocs = THJATRN_make_newtprocs(AWLATRN_nulltprocs, A_HISVEC(HXIBTRN,AXIBTRN,3,A68_461 ));
 /* line 377: */
JXIBTRN_o = Os;
 /* line 378: */
for ( ;; )
{ 
 /* line 379: */
if ( !((JXIBTRN_o!=HBAATRN_nilouters)) ) break;
KXIBTRN = (*(&(IXIBTRN_newtprocs->Outer))) ;
A_CALLPROC(KXIBTRN,((*(&(JXIBTRN_o->Outer))), IXIBTRN_newtprocs, &LXIBTRN),((*(&(JXIBTRN_o->Outer))), IXIBTRN_newtprocs, &LXIBTRN,(KXIBTRN).nonlocals));
LXIBTRN;
 /* line 380: */
 /* line 381: */
JXIBTRN_o = (*(&(JXIBTRN_o->Rest)));
}
 /* line 382: */
} 
A_PROC_EXIT(monitoring_order);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void GCIBTRN(void)   /* initialise DECS assdiagnostics */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/assdiagnostics.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/transformprocs.m","./mfiles/modeprocs.m","./mfiles/assmodes.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/ostools/assoc/mfiles/ioprocs.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_467  SCIBTRN;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
IHJATRN();   /* USE transformprocs */
HNMATRN();   /* USE modeprocs */
BAAATRN();   /* USE assmodes */
PCAAOST();   /* USE osinterface */
JSCAOST();   /* USE basics */
TIGAOST();   /* USE ioprocs */
JFAAOSI();   /* USE messageproc */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/transform/assoc/./a68files/assdiagnostics.a68";
A_config.translation_time = "Tue Apr  4 10:08:04 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "FCIBTRN (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 10:08:04 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS assdiagnostics);
UEAALIB_a68config(LGAALIB_configinfo, KCIBTRN);
 /* line 71: */
 /* line 73: */
 /* line 74: */
SCIBTRN.fn.fn_global = QCIBTRN_anonymous;
SCIBTRN.nonlocals = A68_NIL;
LCIBTRN_checktypes = SCIBTRN;
 /* line 78: */
 /* line 333: */
 /* line 385: */
 /* line 386: */
 /* line 387: */
/*SKIP*/;
A_PROC_EXIT(DECS assdiagnostics);
} 
#undef NL
/* end of translation of ./a68files/assdiagnostics.a68 */
