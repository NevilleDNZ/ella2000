
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
/* UNAME:TICAELA */
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

A_PROCEDURE(A68_VOID ,A68t159,(struct A68t144 ),(struct A68t144 ,void *));
typedef struct A68t159  A68_159 ;    /* PROC(MODE144) VOID */

A_PROCEDURE(A68_VOID ,A68t160,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t160  A68_160 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,56,A68t161);
typedef struct A68t161  A68_161 ;    /* STRUCT 56 CHAR */
struct A68t232{
A68_INT  Anull;
A_PAD_INT(PAD_34)
};
typedef struct A68t232  A68_232 ;    /* STRUCT(INT)  */
struct A68t171{
A68_INT  Flt;
A_PAD_INT(PAD_35)
};
typedef struct A68t171  A68_171 ;    /* STRUCT(INT)  */
struct A68t234 { A68_INT mode; union {
struct A68t236 * mode1;
struct A68t229 * mode2;
struct A68t230 * mode3;
struct A68t231 * mode4;
struct A68t233 * mode5;
struct A68t232  mode6;
struct A68t171  mode7;
} data; };
typedef struct A68t234  A68_234 ;    /* UNION(REF MODE236,REF MODE229,REF MODE230,REF MODE231,REF MODE233,MODE232,MODE171)  */
struct A68t167{
A68_VC  Id;
A68_INT  Sort;
A_PAD_INT(PAD_36)
A68_INT  Fnno;
A_PAD_INT(PAD_37)
A68_INT  Index;
A_PAD_INT(PAD_38)
A68_INT  Xno;
A_PAD_INT(PAD_39)
struct A68t234  Attr;
};
typedef struct A68t167  A68_167 ;    /* STRUCT(REF MODE26,INT,INT,INT,INT,MODE234)  */
struct A68t168{
A68_INT  Unset;
A_PAD_INT(PAD_40)
};
typedef struct A68t168  A68_168 ;    /* STRUCT(INT)  */
struct A68t169{
A68_INT  Int;
A_PAD_INT(PAD_41)
A68_VC  Text;
};
typedef struct A68t169  A68_169 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t170{
A68_VC  Text;
};
typedef struct A68t170  A68_170 ;    /* STRUCT(REF MODE26)  */
struct A68t178{
A68_INT  P;
A_PAD_INT(PAD_42)
};
typedef struct A68t178  A68_178 ;    /* STRUCT(INT)  */
struct A68t181{
A68_INT  Inull;
A_PAD_INT(PAD_43)
};
typedef struct A68t181  A68_181 ;    /* STRUCT(INT)  */
struct A68t182 { A68_INT mode; union {
A68_INT  mode1;
struct A68t170 * mode2;
struct A68t169 * mode3;
struct A68t171  mode4;
struct A68t172 * mode5;
struct A68t173 * mode6;
struct A68t174 * mode7;
struct A68t175 * mode8;
struct A68t177 * mode9;
struct A68t176 * mode10;
struct A68t178  mode11;
struct A68t179 * mode12;
struct A68t180 * mode13;
struct A68t181  mode14;
struct A68t168  mode15;
} data; };
typedef struct A68t182  A68_182 ;    /* UNION(INT,REF MODE170,REF MODE169,MODE171,REF MODE172,REF MODE173,REF MODE174,REF MODE175,REF MODE177,REF MODE176,MODE178,REF MODE179,REF MODE180,MODE181,MODE168)  */
struct A68t172{
struct A68t182  Integer;
struct A68t182  Standard;
A68_INT  Test;
A_PAD_INT(PAD_44)
};
typedef struct A68t172  A68_172 ;    /* STRUCT(MODE182,MODE182,INT)  */
struct A68t173{
struct A68t167 * Im;
};
typedef struct A68t173  A68_173 ;    /* STRUCT(REF MODE167)  */
struct A68t174{
A68_INT  Opno;
A_PAD_INT(PAD_45)
struct A68t182  L;
struct A68t182  R;
};
typedef struct A68t174  A68_174 ;    /* STRUCT(INT,MODE182,MODE182)  */
struct A68t175{
A68_INT  Opno;
A_PAD_INT(PAD_46)
struct A68t182  R;
};
typedef struct A68t175  A68_175 ;    /* STRUCT(INT,MODE182)  */
struct A68t176{
A68_INT  Varmultno;
A_PAD_INT(PAD_47)
struct A68t182  Lwb;
struct A68t182  Upb;
struct A68t182  Index;
};
typedef struct A68t176  A68_176 ;    /* STRUCT(INT,MODE182,MODE182,MODE182)  */
struct A68t177{
struct A68t182  Cond;
struct A68t182  T;
struct A68t182  F;
};
typedef struct A68t177  A68_177 ;    /* STRUCT(MODE182,MODE182,MODE182)  */
struct A68t179{
struct A68t239 * Idinfo;
A68_INT  Intno;
A_PAD_INT(PAD_48)
struct A68t182  I;
};
typedef struct A68t179  A68_179 ;    /* STRUCT(REF MODE239,INT,MODE182)  */
struct A68t180{
struct A68t182  Ibracket;
};
typedef struct A68t180  A68_180 ;    /* STRUCT(MODE182)  */
struct A68t183{
struct A68t182  I;
struct A68t183 * Rest;
};
typedef struct A68t183  A68_183 ;    /* STRUCT(MODE182,REF MODE183)  */
struct A68t184{
A68_CHAR  Lwchar;
A_PAD_CHAR(PAD_49)
A68_CHAR  Upchar;
A_PAD_CHAR(PAD_50)
};
typedef struct A68t184  A68_184 ;    /* STRUCT(CHAR,CHAR)  */
struct A68t186 { A68_INT mode; union {
A68_CHAR  mode1;
struct A68t184  mode2;
} data; };
typedef struct A68t186  A68_186 ;    /* UNION(CHAR,MODE184)  */
struct A68t185{
struct A68t186  Alts;
struct A68t185 * Rest;
};
typedef struct A68t185  A68_185 ;    /* STRUCT(MODE186,REF MODE185)  */
struct A68t202{
A68_INT  Tnull;
A_PAD_INT(PAD_51)
};
typedef struct A68t202  A68_202 ;    /* STRUCT(INT)  */
struct A68t203{
A68_INT  Tvoid;
A_PAD_INT(PAD_52)
};
typedef struct A68t203  A68_203 ;    /* STRUCT(INT)  */
struct A68t204 { A68_INT mode; union {
struct A68t193 * mode1;
struct A68t195 * mode2;
struct A68t196 * mode3;
struct A68t198 * mode4;
struct A68t202  mode5;
struct A68t199 * mode6;
struct A68t197 * mode7;
struct A68t200 * mode8;
struct A68t201 * mode9;
struct A68t171  mode10;
struct A68t168  mode11;
struct A68t203  mode12;
} data; };
typedef struct A68t204  A68_204 ;    /* UNION(REF MODE193,REF MODE195,REF MODE196,REF MODE198,MODE202,REF MODE199,REF MODE197,REF MODE200,REF MODE201,MODE171,MODE168,MODE203)  */
struct A68t187{
struct A68t204  Ct;
};
typedef struct A68t187  A68_187 ;    /* STRUCT(MODE204)  */
struct A68t188{
A68_INT  Rec;
A_PAD_INT(PAD_53)
};
typedef struct A68t188  A68_188 ;    /* STRUCT(INT)  */
struct A68t189{
A68_INT  Notdec;
A_PAD_INT(PAD_54)
};
typedef struct A68t189  A68_189 ;    /* STRUCT(INT)  */
struct A68t190{
struct A68t239 * Idinfo;
struct A68t182  Lwb;
struct A68t182  Upb;
};
typedef struct A68t190  A68_190 ;    /* STRUCT(REF MODE239,MODE182,MODE182)  */
struct A68t191{
struct A68t239 * Idinfo;
struct A68t204 * U;
struct A68t191 * Rest;
};
typedef struct A68t191  A68_191 ;    /* STRUCT(REF MODE239,REF MODE204,REF MODE191)  */
struct A68t192{
struct A68t239 * Idinfo;
struct A68t54  Charcheck;
struct A68t185 * Charalts;
};
typedef struct A68t192  A68_192 ;    /* STRUCT(REF MODE239,REF MODE54,REF MODE185)  */
struct A68t194 { A68_INT mode; union {
struct A68t190  mode1;
struct A68t191 * mode2;
struct A68t192  mode3;
} data; };
typedef struct A68t194  A68_194 ;    /* UNION(MODE190,REF MODE191,MODE192)  */
struct A68t193{
struct A68t239 * Idinfo;
A68_INT  Typeno;
A_PAD_INT(PAD_55)
struct A68t194  U;
};
typedef struct A68t193  A68_193 ;    /* STRUCT(REF MODE239,INT,MODE194)  */
struct A68t195{
struct A68t239 * Idinfo;
A68_INT  Typeno;
A_PAD_INT(PAD_56)
struct A68t204  T;
};
typedef struct A68t195  A68_195 ;    /* STRUCT(REF MODE239,INT,MODE204)  */
struct A68t196{
struct A68t204  T;
struct A68t196 * Rest;
};
typedef struct A68t196  A68_196 ;    /* STRUCT(MODE204,REF MODE196)  */
struct A68t197{
struct A68t204  T;
struct A68t182  Size;
};
typedef struct A68t197  A68_197 ;    /* STRUCT(MODE204,MODE182)  */
struct A68t198{
struct A68t167 * Tm;
struct A68t204  T;
};
typedef struct A68t198  A68_198 ;    /* STRUCT(REF MODE167,MODE204)  */
struct A68t199{
struct A68t204  From;
struct A68t204  To;
};
typedef struct A68t199  A68_199 ;    /* STRUCT(MODE204,MODE204)  */
struct A68t200{
struct A68t204  Tbracket;
};
typedef struct A68t200  A68_200 ;    /* STRUCT(MODE204)  */
struct A68t201{
struct A68t182  Size;
struct A68t204  Tstring;
};
typedef struct A68t201  A68_201 ;    /* STRUCT(MODE182,MODE204)  */
struct A68t205{
struct A68t204  T;
};
typedef struct A68t205  A68_205 ;    /* STRUCT(MODE204)  */
struct A68t206{
struct A68t182  I;
};
typedef struct A68t206  A68_206 ;    /* STRUCT(MODE182)  */
struct A68t254{
A68_INT  Cvoid;
A_PAD_INT(PAD_57)
};
typedef struct A68t254  A68_254 ;    /* STRUCT(INT)  */
struct A68t261 { A68_INT mode; union {
struct A68t241 * mode1;
struct A68t242 * mode2;
struct A68t243 * mode3;
struct A68t208 * mode4;
struct A68t244 * mode5;
struct A68t245 * mode6;
struct A68t246 * mode7;
struct A68t248 * mode8;
struct A68t187 * mode9;
struct A68t171  mode10;
struct A68t168  mode11;
struct A68t250 * mode12;
struct A68t249 * mode13;
struct A68t252 * mode14;
struct A68t251 * mode15;
struct A68t253 * mode16;
struct A68t247 * mode17;
struct A68t254  mode18;
struct A68t255 * mode19;
struct A68t256 * mode20;
struct A68t257 * mode21;
struct A68t258 * mode22;
struct A68t259 * mode23;
struct A68t260 * mode24;
} data; };
typedef struct A68t261  A68_261 ;    /* UNION(REF MODE241,REF MODE242,REF MODE243,REF MODE208,REF MODE244,REF MODE245,REF MODE246,REF MODE248,REF MODE187,MODE171,MODE168,REF MODE250,REF MODE249,REF MODE252,REF MODE251,REF MODE253,REF MODE247,MODE254,REF MODE255,REF MODE256,REF MODE257,REF MODE258,REF MODE259,REF MODE260)  */
struct A68t207{
struct A68t261  Ct;
};
typedef struct A68t207  A68_207 ;    /* STRUCT(MODE261)  */
struct A68t208{
struct A68t204  Type;
A68_INT  Index;
A_PAD_INT(PAD_58)
};
typedef struct A68t208  A68_208 ;    /* STRUCT(MODE204,INT)  */
struct A68t210{
A68_VC  Id;
A68_INT  Fnno;
A_PAD_INT(PAD_59)
A68_INT  Nameno;
A_PAD_INT(PAD_60)
A68_INT  Index;
A_PAD_INT(PAD_61)
struct A68t204  Type;
A68_BOOL  Single;
A_PAD_BOOL(PAD_62)
struct A68t210 * Rest;
};
typedef struct A68t210  A68_210 ;    /* STRUCT(REF MODE26,INT,INT,INT,MODE204,BOOL,REF MODE210)  */
struct A68t212 { A68_INT mode; union {
struct A68t210 * mode1;
struct A68t211 * mode2;
struct A68t171  mode3;
} data; };
typedef struct A68t212  A68_212 ;    /* UNION(REF MODE210,REF MODE211,MODE171)  */
struct A68t211{
struct A68t212  Port;
struct A68t182  I;
};
typedef struct A68t211  A68_211 ;    /* STRUCT(MODE212,MODE182)  */
struct A68t213{
struct A68t212  Port;
struct A68t213 * Rest;
};
typedef struct A68t213  A68_213 ;    /* STRUCT(MODE212,REF MODE213)  */
struct A68t214{
struct A68t182  Lwb;
struct A68t182  Upb;
A68_BOOL  Index;
A_PAD_BOOL(PAD_63)
struct A68t214 * Rest;
};
typedef struct A68t214  A68_214 ;    /* STRUCT(MODE182,MODE182,BOOL,REF MODE214)  */
struct A68t216{
A68_INT  J;
A_PAD_INT(PAD_64)
};
typedef struct A68t216  A68_216 ;    /* STRUCT(INT)  */
struct A68t223 { A68_INT mode; union {
struct A68t217 * mode1;
struct A68t218 * mode2;
struct A68t219 * mode3;
struct A68t221 * mode4;
struct A68t216 * mode5;
struct A68t222 * mode6;
struct A68t171  mode7;
} data; };
typedef struct A68t223  A68_223 ;    /* UNION(REF MODE217,REF MODE218,REF MODE219,REF MODE221,REF MODE216,REF MODE222,MODE171)  */
struct A68t217{
struct A68t223  Jst;
struct A68t217 * Rest;
};
typedef struct A68t217  A68_217 ;    /* STRUCT(MODE223,REF MODE217)  */
struct A68t218{
struct A68t216  Joined;
};
typedef struct A68t218  A68_218 ;    /* STRUCT(MODE216)  */
A_VECTOR(struct A68t223 ,A68t220);
typedef struct A68t220  A68_220 ;    /* VECTOR [] MODE223 */
struct A68t219{
struct A68t220  Jrow;
};
typedef struct A68t219  A68_219 ;    /* STRUCT(REF MODE220)  */
struct A68t221{
struct A68t223  Source;
struct A68t223  Sink;
};
typedef struct A68t221  A68_221 ;    /* STRUCT(MODE223,MODE223)  */
struct A68t222{
struct A68t223  Jrep;
struct A68t214  Jvarstack;
};
typedef struct A68t222  A68_222 ;    /* STRUCT(MODE223,MODE214)  */
struct A68t224{
struct A68t223  Joinup;
struct A68t224 * Rest;
};
typedef struct A68t224  A68_224 ;    /* STRUCT(MODE223,REF MODE224)  */
struct A68t225{
struct A68t223  Joinup;
A68_BOOL  Source;
A_PAD_BOOL(PAD_65)
struct A68t225 * Rest;
};
typedef struct A68t225  A68_225 ;    /* STRUCT(MODE223,BOOL,REF MODE225)  */
struct A68t226{
A68_INT  Decno;
A_PAD_INT(PAD_66)
A68_INT  Origin;
A_PAD_INT(PAD_67)
struct A68t183 * Makeint;
struct A68t204  Type;
struct A68t223  Jsource;
struct A68t223  Jsink;
struct A68t212  Input;
struct A68t212  Output;
};
typedef struct A68t226  A68_226 ;    /* STRUCT(INT,INT,REF MODE183,MODE204,MODE223,MODE223,MODE212,MODE212)  */
struct A68t228{
A68_VC  Id;
struct A68t228 * Rest;
};
typedef struct A68t228  A68_228 ;    /* STRUCT(REF MODE26,REF MODE228)  */
struct A68t229{
A68_VC  Classname;
struct A68t228 * Data;
};
typedef struct A68t229  A68_229 ;    /* STRUCT(REF MODE26,REF MODE228)  */
struct A68t230{
struct A68t234  Elem;
struct A68t230 * Rest;
};
typedef struct A68t230  A68_230 ;    /* STRUCT(MODE234,REF MODE230)  */
struct A68t231{
struct A68t234  Abracket;
};
typedef struct A68t231  A68_231 ;    /* STRUCT(MODE234)  */
struct A68t233{
struct A68t167 * Am;
};
typedef struct A68t233  A68_233 ;    /* STRUCT(REF MODE167)  */
struct A68t235{
struct A68t234  A;
};
typedef struct A68t235  A68_235 ;    /* STRUCT(MODE234)  */
struct A68t236{
struct A68t239 * Idinfo;
A68_INT  Attrno;
A_PAD_INT(PAD_68)
struct A68t234  Attr;
};
typedef struct A68t236  A68_236 ;    /* STRUCT(REF MODE239,INT,MODE234)  */
struct A68t237{
struct A68t204  Type;
A68_INT  Decno;
A_PAD_INT(PAD_69)
};
typedef struct A68t237  A68_237 ;    /* STRUCT(MODE204,INT)  */
struct A68t238 { A68_INT mode; union {
struct A68t206  mode1;
struct A68t205  mode2;
struct A68t207  mode3;
struct A68t208  mode4;
struct A68t226 * mode5;
struct A68t235  mode6;
struct A68t237  mode7;
struct A68t171  mode8;
struct A68t188  mode9;
struct A68t189  mode10;
} data; };
typedef struct A68t238  A68_238 ;    /* UNION(MODE206,MODE205,MODE207,MODE208,REF MODE226,MODE235,MODE237,MODE171,MODE188,MODE189)  */
struct A68t239{
A68_INT  Scope;
A_PAD_INT(PAD_70)
A68_INT  Vnno;
A_PAD_INT(PAD_71)
A68_BOOL  Text;
A_PAD_BOOL(PAD_72)
A68_BOOL  Outofdate;
A_PAD_BOOL(PAD_73)
A68_BOOL  Inscope;
A_PAD_BOOL(PAD_74)
A68_BOOL  Export;
A_PAD_BOOL(PAD_75)
A68_VC  Id;
struct A68t238  U;
};
typedef struct A68t239  A68_239 ;    /* STRUCT(INT,INT,BOOL,BOOL,BOOL,BOOL,REF MODE26,MODE238)  */
struct A68t240{
struct A68t239 * Idinfo;
A68_BOOL  Declaration;
A_PAD_BOOL(PAD_76)
struct A68t234  Attr;
struct A68t240 * Rest;
};
typedef struct A68t240  A68_240 ;    /* STRUCT(REF MODE239,BOOL,MODE234,REF MODE240)  */
struct A68t241{
struct A68t239 * Idinfo;
A68_INT  Ctypeno;
A_PAD_INT(PAD_77)
struct A68t261  Ct;
struct A68t204  T;
};
typedef struct A68t241  A68_241 ;    /* STRUCT(REF MODE239,INT,MODE261,MODE204)  */
struct A68t242{
struct A68t204  T;
struct A68t182  Lwb;
struct A68t182  Upb;
};
typedef struct A68t242  A68_242 ;    /* STRUCT(MODE204,MODE182,MODE182)  */
struct A68t243{
struct A68t204  T;
struct A68t182  Index;
};
typedef struct A68t243  A68_243 ;    /* STRUCT(MODE204,MODE182)  */
struct A68t244{
struct A68t208 * P;
struct A68t261  Ct;
};
typedef struct A68t244  A68_244 ;    /* STRUCT(REF MODE208,MODE261)  */
struct A68t245{
struct A68t261  Ct;
struct A68t182  Size;
};
typedef struct A68t245  A68_245 ;    /* STRUCT(MODE261,MODE182)  */
struct A68t246{
struct A68t261  Cst;
struct A68t246 * Rest;
};
typedef struct A68t246  A68_246 ;    /* STRUCT(MODE261,REF MODE246)  */
struct A68t247{
struct A68t167 * Cm;
struct A68t204  T;
};
typedef struct A68t247  A68_247 ;    /* STRUCT(REF MODE167,MODE204)  */
struct A68t248{
struct A68t261  Calt;
struct A68t248 * Rest;
};
typedef struct A68t248  A68_248 ;    /* STRUCT(MODE261,REF MODE248)  */
struct A68t249{
struct A68t204  Querytype;
};
typedef struct A68t249  A68_249 ;    /* STRUCT(MODE204)  */
struct A68t250{
struct A68t261  Cbracket;
};
typedef struct A68t250  A68_250 ;    /* STRUCT(MODE261)  */
struct A68t251{
struct A68t204  T;
A68_CHAR  Char;
A_PAD_CHAR(PAD_78)
};
typedef struct A68t251  A68_251 ;    /* STRUCT(MODE204,CHAR)  */
struct A68t252{
struct A68t182  Size;
struct A68t261  Ct;
struct A68t228 * Strings;
};
typedef struct A68t252  A68_252 ;    /* STRUCT(MODE182,MODE261,REF MODE228)  */
struct A68t253{
struct A68t204  T;
A68_CHAR  Lwb;
A_PAD_CHAR(PAD_79)
A68_CHAR  Upb;
A_PAD_CHAR(PAD_80)
};
typedef struct A68t253  A68_253 ;    /* STRUCT(MODE204,CHAR,CHAR)  */
struct A68t255{
struct A68t261  Ct;
struct A68t182  Index;
};
typedef struct A68t255  A68_255 ;    /* STRUCT(MODE261,MODE182)  */
struct A68t256{
struct A68t261  Ct;
struct A68t182  Lwb;
struct A68t182  Upb;
};
typedef struct A68t256  A68_256 ;    /* STRUCT(MODE261,MODE182,MODE182)  */
struct A68t257{
struct A68t182  Test;
struct A68t261  Then;
struct A68t261  Else;
};
typedef struct A68t257  A68_257 ;    /* STRUCT(MODE182,MODE261,MODE261)  */
struct A68t258{
struct A68t240 * Ids;
struct A68t261  Ct;
};
typedef struct A68t258  A68_258 ;    /* STRUCT(REF MODE240,MODE261)  */
struct A68t259{
A68_BOOL  String;
A_PAD_BOOL(PAD_81)
A68_INT  Sort;
A_PAD_INT(PAD_82)
struct A68t261  Left;
struct A68t261  Right;
};
typedef struct A68t259  A68_259 ;    /* STRUCT(BOOL,INT,MODE261,MODE261)  */
struct A68t260{
struct A68t261  Ct;
struct A68t234  Attr;
};
typedef struct A68t260  A68_260 ;    /* STRUCT(MODE261,MODE234)  */
struct A68t262{
struct A68t204  T;
struct A68t240 * Ids;
struct A68t262 * Rest;
};
typedef struct A68t262  A68_262 ;    /* STRUCT(MODE204,REF MODE240,REF MODE262)  */
struct A68t265 { A68_INT mode; union {
struct A68t233 * mode1;
struct A68t173 * mode2;
struct A68t198 * mode3;
struct A68t247 * mode4;
struct A68t268 * mode5;
struct A68t171  mode6;
} data; };
typedef struct A68t265  A68_265 ;    /* UNION(REF MODE233,REF MODE173,REF MODE198,REF MODE247,REF MODE268,MODE171)  */
struct A68t266{
A68_INT  Sort;
A_PAD_INT(PAD_83)
A68_INT  Mparamno;
A_PAD_INT(PAD_84)
struct A68t265  Value;
struct A68t266 * Rest;
};
typedef struct A68t266  A68_266 ;    /* STRUCT(INT,INT,MODE265,REF MODE266)  */
struct A68t267{
A68_INT  Scope;
A_PAD_INT(PAD_85)
A68_INT  Vnno;
A_PAD_INT(PAD_86)
A68_INT  Status;
A_PAD_INT(PAD_87)
A68_BOOL  Text;
A_PAD_BOOL(PAD_88)
A68_BOOL  Outofdate;
A_PAD_BOOL(PAD_89)
A68_BOOL  Import;
A_PAD_BOOL(PAD_90)
A68_BOOL  Export;
A_PAD_BOOL(PAD_91)
};
typedef struct A68t267  A68_267 ;    /* STRUCT(INT,INT,INT,BOOL,BOOL,BOOL,BOOL)  */
struct A68t268{
struct A68t267 * Fninfo;
A68_INT  Sort;
A_PAD_INT(PAD_92)
A68_INT  Fnno;
A_PAD_INT(PAD_93)
A68_BOOL  Macro;
A_PAD_BOOL(PAD_94)
A68_VC  Id;
A68_INT  Mparamno;
A_PAD_INT(PAD_95)
struct A68t266 * Mp;
struct A68t266 ** Nextmp;
struct A68t234  Attr;
struct A68t262 * Inputs;
struct A68t262 * Outputs;
struct A68t204  Param;
struct A68t204  Ans;
A68_INT  Num_names;
A_PAD_INT(PAD_96)
};
typedef struct A68t268  A68_268 ;    /* STRUCT(REF MODE267,INT,INT,BOOL,REF MODE26,INT,REF MODE266,REF REF MODE266,MODE234,REF MODE262,REF MODE262,MODE204,MODE204,INT)  */
struct A68t269{
struct A68t268 * Fndec;
A68_BOOL  Declaration;
A_PAD_BOOL(PAD_97)
struct A68t269 * Rest;
};
typedef struct A68t269  A68_269 ;    /* STRUCT(REF MODE268,BOOL,REF MODE269)  */
struct A68t270{
struct A68t268 * Dec;
struct A68t270 * Rest;
};
typedef struct A68t270  A68_270 ;    /* STRUCT(REF MODE268,REF MODE270)  */
struct A68t271 { A68_INT mode; union {
struct A68t193 * mode1;
struct A68t195 * mode2;
struct A68t196 * mode3;
struct A68t198 * mode4;
struct A68t202  mode5;
struct A68t199 * mode6;
struct A68t197 * mode7;
struct A68t200 * mode8;
struct A68t201 * mode9;
struct A68t171  mode10;
struct A68t168  mode11;
struct A68t203  mode12;
A68_VC  mode13;
struct A68t268 * mode14;
struct A68t92  mode15;
A68_INT  mode16;
struct A68t170 * mode17;
struct A68t169 * mode18;
struct A68t172 * mode19;
struct A68t173 * mode20;
struct A68t174 * mode21;
struct A68t175 * mode22;
struct A68t177 * mode23;
struct A68t176 * mode24;
struct A68t178  mode25;
struct A68t179 * mode26;
struct A68t180 * mode27;
struct A68t181  mode28;
struct A68t241 * mode29;
struct A68t242 * mode30;
struct A68t243 * mode31;
struct A68t208 * mode32;
struct A68t244 * mode33;
struct A68t245 * mode34;
struct A68t246 * mode35;
struct A68t248 * mode36;
struct A68t187 * mode37;
struct A68t250 * mode38;
struct A68t249 * mode39;
struct A68t252 * mode40;
struct A68t251 * mode41;
struct A68t253 * mode42;
struct A68t247 * mode43;
struct A68t254  mode44;
struct A68t255 * mode45;
struct A68t256 * mode46;
struct A68t257 * mode47;
struct A68t258 * mode48;
struct A68t259 * mode49;
struct A68t260 * mode50;
} data; };
typedef struct A68t271  A68_271 ;    /* UNION(REF MODE193,REF MODE195,REF MODE196,REF MODE198,MODE202,REF MODE199,REF MODE197,REF MODE200,REF MODE201,MODE171,MODE168,MODE203,REF MODE26,REF MODE268,MODE92,INT,REF MODE170,REF MODE169,REF MODE172,REF MODE173,REF MODE174,REF MODE175,REF MODE177,REF MODE176,MODE178,REF MODE179,REF MODE180,MODE181,REF MODE241,REF MODE242,REF MODE243,REF MODE208,REF MODE244,REF MODE245,REF MODE246,REF MODE248,REF MODE187,REF MODE250,REF MODE249,REF MODE252,REF MODE251,REF MODE253,REF MODE247,MODE254,REF MODE255,REF MODE256,REF MODE257,REF MODE258,REF MODE259,REF MODE260)  */
struct A68t272{
struct A68t240 * Ids;
A68_INT  Macsort;
A_PAD_INT(PAD_98)
A68_INT  Xno;
A_PAD_INT(PAD_99)
A68_BOOL  New;
A_PAD_BOOL(PAD_100)
struct A68t272 * Rest;
};
typedef struct A68t272  A68_272 ;    /* STRUCT(REF MODE240,INT,INT,BOOL,REF MODE272)  */
A_VECTOR(struct A68t54 ,A68t273);
typedef struct A68t273  A68_273 ;    /* VECTOR [] REF MODE54 */
struct A68t277{
struct A68t268 * F;
struct A68t276 * Pvals;
struct A68t276 ** Nextpvals;
struct A68t234  Attr;
};
typedef struct A68t277  A68_277 ;    /* STRUCT(REF MODE268,REF MODE276,REF REF MODE276,MODE234)  */
struct A68t275 { A68_INT mode; union {
struct A68t206  mode1;
struct A68t205  mode2;
struct A68t207  mode3;
struct A68t277  mode4;
struct A68t235  mode5;
struct A68t171  mode6;
} data; };
typedef struct A68t275  A68_275 ;    /* UNION(MODE206,MODE205,MODE207,MODE277,MODE235,MODE171)  */
struct A68t276{
struct A68t275  Val;
struct A68t276 * Rest;
};
typedef struct A68t276  A68_276 ;    /* STRUCT(MODE275,REF MODE276)  */
struct A68t279{
struct A68t277 * Fncall;
A68_BOOL  Explicitparam;
A_PAD_BOOL(PAD_101)
struct A68t266 ** Nextmp;
struct A68t279 * Rest;
};
typedef struct A68t279  A68_279 ;    /* STRUCT(REF MODE277,BOOL,REF REF MODE266,REF MODE279)  */
struct A68t280{
struct A68t182  I;
struct A68t204  T;
struct A68t261  Ct;
struct A68t234  A;
A68_INT  W;
A_PAD_INT(PAD_102)
struct A68t280 * Rest;
};
typedef struct A68t280  A68_280 ;    /* STRUCT(MODE182,MODE204,MODE261,MODE234,INT,REF MODE280)  */
struct A68t281{
struct A68t204  Param;
struct A68t204  Output;
struct A68t248 * Tested;
struct A68t281 * Rest;
};
typedef struct A68t281  A68_281 ;    /* STRUCT(MODE204,MODE204,REF MODE248,REF MODE281)  */
struct A68t283{
struct A68t239  I;
struct A68t283 * Rest;
};
typedef struct A68t283  A68_283 ;    /* STRUCT(MODE239,REF MODE283)  */
struct A68t284{
A68_INT  I;
A_PAD_INT(PAD_103)
A68_VC  Name;
struct A68t284 * Rest;
};
typedef struct A68t284  A68_284 ;    /* STRUCT(INT,REF MODE26,REF MODE284)  */
struct A68t286{
A68_INT  Scope;
A_PAD_INT(PAD_104)
struct A68t240 * Ids;
struct A68t269 * Fns;
struct A68t286 * Rest;
};
typedef struct A68t286  A68_286 ;    /* STRUCT(INT,REF MODE240,REF MODE269,REF MODE286)  */
struct A68t287{
A68_INT  State;
A_PAD_INT(PAD_105)
struct A68t287 * Rest;
};
typedef struct A68t287  A68_287 ;    /* STRUCT(INT,REF MODE287)  */
struct A68t288{
A68_VC  Last;
struct A68t288 * Rest;
};
typedef struct A68t288  A68_288 ;    /* STRUCT(REF MODE26,REF MODE288)  */
struct A68t290{
A68_INT  Decno;
A_PAD_INT(PAD_106)
struct A68t290 * Rest;
};
typedef struct A68t290  A68_290 ;    /* STRUCT(INT,REF MODE290)  */
struct A68t291{
A68_INT  Param;
A_PAD_INT(PAD_107)
A68_INT  Ans;
A_PAD_INT(PAD_108)
};
typedef struct A68t291  A68_291 ;    /* STRUCT(INT,INT)  */
struct A68t292{
A68_INT  L;
A_PAD_INT(PAD_109)
A68_INT  R;
A_PAD_INT(PAD_110)
A68_INT  Ans;
A_PAD_INT(PAD_111)
};
typedef struct A68t292  A68_292 ;    /* STRUCT(INT,INT,INT)  */
A_VECTOR(struct A68t204 ,A68t293);
typedef struct A68t293  A68_293 ;    /* VECTOR [] MODE204 */
A_ISTRUCT(A68_CHAR ,7,A68t294);
typedef struct A68t294  A68_294 ;    /* STRUCT 7 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t295);
typedef struct A68t295  A68_295 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(struct A68t204 ,4,A68t296);
typedef struct A68t296  A68_296 ;    /* STRUCT 4 MODE204 */
A_VECTOR(struct A68t291 ,A68t297);
typedef struct A68t297  A68_297 ;    /* VECTOR [] MODE291 */
A_ISTRUCT(struct A68t291 ,7,A68t298);
typedef struct A68t298  A68_298 ;    /* STRUCT 7 MODE291 */
A_VECTOR(struct A68t292 ,A68t299);
typedef struct A68t299  A68_299 ;    /* VECTOR [] MODE292 */
A_ISTRUCT(struct A68t292 ,18,A68t300);
typedef struct A68t300  A68_300 ;    /* STRUCT 18 MODE292 */
struct A68t301{
A68_VC  Id;
A68_INT  Tokno;
A_PAD_INT(PAD_112)
};
typedef struct A68t301  A68_301 ;    /* STRUCT(REF MODE26,INT)  */
A_VECTOR(struct A68t301 ,A68t302);
typedef struct A68t302  A68_302 ;    /* VECTOR [] MODE301 */
A_ISTRUCT(A68_CHAR ,6,A68t303);
typedef struct A68t303  A68_303 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,11,A68t304);
typedef struct A68t304  A68_304 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t305);
typedef struct A68t305  A68_305 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t306);
typedef struct A68t306  A68_306 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(A68_CHAR ,9,A68t307);
typedef struct A68t307  A68_307 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(struct A68t301 ,26,A68t308);
typedef struct A68t308  A68_308 ;    /* STRUCT 26 MODE301 */

A_PROCEDURE(A68_VOID ,A68t309,(struct A68t182 ,struct A68t182 *),(struct A68t182 ,struct A68t182 *,void *));
typedef struct A68t309  A68_309 ;    /* PROC(MODE182) MODE182 */

A_PROCEDURE(A68_VOID ,A68t310,(struct A68t204 ,struct A68t204 *),(struct A68t204 ,struct A68t204 *,void *));
typedef struct A68t310  A68_310 ;    /* PROC(MODE204) MODE204 */

A_PROCEDURE(struct A68t196 *,A68t311,(struct A68t196 *),(struct A68t196 *,void *));
typedef struct A68t311  A68_311 ;    /* PROC(REF MODE196) REF MODE196 */

A_PROCEDURE(A68_VOID ,A68t312,(struct A68t204 ,A68_BOOL ,struct A68t204 *),(struct A68t204 ,A68_BOOL ,struct A68t204 *,void *));
typedef struct A68t312  A68_312 ;    /* PROC(MODE204,BOOL) MODE204 */

A_PROCEDURE(struct A68t180 *,A68t313,(struct A68t182 ),(struct A68t182 ,void *));
typedef struct A68t313  A68_313 ;    /* PROC(MODE182) REF MODE180 */

A_PROCEDURE(struct A68t200 *,A68t314,(struct A68t204 ),(struct A68t204 ,void *));
typedef struct A68t314  A68_314 ;    /* PROC(MODE204) REF MODE200 */

A_PROCEDURE(struct A68t250 *,A68t315,(struct A68t261 ),(struct A68t261 ,void *));
typedef struct A68t315  A68_315 ;    /* PROC(MODE261) REF MODE250 */

A_PROCEDURE(struct A68t231 *,A68t316,(struct A68t234 ),(struct A68t234 ,void *));
typedef struct A68t316  A68_316 ;    /* PROC(MODE234) REF MODE231 */

A_PROCEDURE(A68_VOID ,A68t317,(struct A68t182 ,struct A68t206 *),(struct A68t182 ,struct A68t206 *,void *));
typedef struct A68t317  A68_317 ;    /* PROC(MODE182) MODE206 */

A_PROCEDURE(A68_VOID ,A68t318,(struct A68t204 ,struct A68t205 *),(struct A68t204 ,struct A68t205 *,void *));
typedef struct A68t318  A68_318 ;    /* PROC(MODE204) MODE205 */

A_PROCEDURE(A68_VOID ,A68t319,(struct A68t261 ,struct A68t207 *),(struct A68t261 ,struct A68t207 *,void *));
typedef struct A68t319  A68_319 ;    /* PROC(MODE261) MODE207 */

A_PROCEDURE(A68_VOID ,A68t320,(struct A68t234 ,struct A68t235 *),(struct A68t234 ,struct A68t235 *,void *));
typedef struct A68t320  A68_320 ;    /* PROC(MODE234) MODE235 */

A_PROCEDURE(struct A68t233 *,A68t321,(struct A68t167 *),(struct A68t167 *,void *));
typedef struct A68t321  A68_321 ;    /* PROC(REF MODE167) REF MODE233 */

A_PROCEDURE(struct A68t173 *,A68t322,(struct A68t167 *),(struct A68t167 *,void *));
typedef struct A68t322  A68_322 ;    /* PROC(REF MODE167) REF MODE173 */

A_PROCEDURE(struct A68t249 *,A68t323,(struct A68t204 ),(struct A68t204 ,void *));
typedef struct A68t323  A68_323 ;    /* PROC(MODE204) REF MODE249 */
struct A68t324{
A68_INT  Num;
A_PAD_INT(PAD_113)
struct A68t324 * Rest;
};
typedef struct A68t324  A68_324 ;    /* STRUCT(INT,REF MODE324)  */
struct A68t325{
A68_INT  Macsort;
A_PAD_INT(PAD_114)
A68_INT  Vss;
A_PAD_INT(PAD_115)
A68_INT  Maxvss;
A_PAD_INT(PAD_116)
A68_INT  K;
A_PAD_INT(PAD_117)
A68_INT  Which;
A_PAD_INT(PAD_118)
A68_INT  Scope;
A_PAD_INT(PAD_119)
A68_VC  Lastop;
A68_VC  Lastcall;
A68_BOOL  Errorswitch;
A_PAD_BOOL(PAD_120)
A68_BOOL  Lhsjoin;
A_PAD_BOOL(PAD_121)
struct A68t224 * Joinstack;
struct A68t217 * Joinst;
struct A68t223 * Joinup;
struct A68t214 * Joinvarstack;
struct A68t225 * Joinmultstack;
struct A68t217 * Joinvarst;
};
typedef struct A68t325  A68_325 ;    /* STRUCT(INT,INT,INT,INT,INT,INT,REF MODE26,REF MODE26,BOOL,BOOL,REF MODE224,REF MODE217,REF MODE223,REF MODE214,REF MODE225,REF MODE217)  */
struct A68t326{
struct A68t182  Integer;
struct A68t204  Type;
struct A68t204  Jointype;
struct A68t196 * Sts;
};
typedef struct A68t326  A68_326 ;    /* STRUCT(MODE182,MODE204,MODE204,REF MODE196)  */
struct A68t327{
struct A68t279 * Fncallstack;
struct A68t288 * Lastops;
struct A68t288 * Lastcalls;
struct A68t240 * Decids;
struct A68t196 * Mltype;
struct A68t196 ** Nextmltype;
struct A68t324 * Multlets;
struct A68t324 * Multiassign;
};
typedef struct A68t327  A68_327 ;    /* STRUCT(REF MODE279,REF MODE288,REF MODE288,REF MODE240,REF MODE196,REF REF MODE196,REF MODE324,REF MODE324)  */
struct A68t328{
struct A68t290 * Decnocheck;
struct A68t212  Portinfo;
struct A68t213 * Portstack;
};
typedef struct A68t328  A68_328 ;    /* STRUCT(REF MODE290,MODE212,REF MODE213)  */
struct A68t329{
struct A68t268 * Fndec;
struct A68t325 * Cint;
struct A68t326 * Ctyp;
struct A68t327 * Csta;
struct A68t328 * Crem;
};
typedef struct A68t329  A68_329 ;    /* STRUCT(REF MODE268,REF MODE325,REF MODE326,REF MODE327,REF MODE328)  */
struct A68t330{
struct A68t329 * Val;
struct A68t330 * Rest;
};
typedef struct A68t330  A68_330 ;    /* STRUCT(REF MODE329,REF MODE330)  */

A_PROCEDURE(A68_VOID ,A68t331,(struct A68t223 *,A68_INT ),(struct A68t223 *,A68_INT ,void *));
typedef struct A68t331  A68_331 ;    /* PROC(REF MODE223,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t332,(struct A68t85 ),(struct A68t85 ,void *));
typedef struct A68t332  A68_332 ;    /* PROC(MODE85) VOID */
A_ISTRUCT(struct A68t52 ,2,A68t333);
typedef struct A68t333  A68_333 ;    /* STRUCT 2 MODE52 */
A_ISTRUCT(A68_CHAR ,5,A68t334);
typedef struct A68t334  A68_334 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(struct A68t52 ,3,A68t335);
typedef struct A68t335  A68_335 ;    /* STRUCT 3 MODE52 */

A_PROCEDURE(struct A68t176 *,A68t336,(struct A68t240 *),(struct A68t240 *,void *));
typedef struct A68t336  A68_336 ;    /* PROC(REF MODE240) REF MODE176 */
A_ISTRUCT(A68_CHAR ,14,A68t337);
typedef struct A68t337  A68_337 ;    /* STRUCT 14 CHAR */

A_PROCEDURE(A68_BOOL ,A68t338,(struct A68t216 ,struct A68t216 ),(struct A68t216 ,struct A68t216 ,void *));
typedef struct A68t338  A68_338 ;    /* PROC(MODE216,MODE216) BOOL */

A_PROCEDURE(A68_VOID ,A68t339,(struct A68t262 *,struct A68t204 *),(struct A68t262 *,struct A68t204 *,void *));
typedef struct A68t339  A68_339 ;    /* PROC(REF MODE262) MODE204 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


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
extern A68_34 * KEAAOST_screen;
/* --- End of imports from osinterface --- */


/* --- Imports from basics --- */
extern A68_VOID  NKDAOST_sysfault(A68_VC );
/* --- End of imports from basics --- */


/* --- Imports from putstrings --- */
extern A68_VOID  LRAAOSL_newline(struct A68t34 *);
extern A68_VOID  GFBAOSL_put(struct A68t34 *,struct A68t85 );
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void PCAAOST(void);   /* osinterface */
extern void JSCAOST(void);   /* basics */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_161   XICAELA = {"$Id: compmodes.a68,v 34.2 1995/03/29 13:03:22 ella Exp $"}; 
A_GISVEC(A68_VC ,YICAELA,XICAELA,56)
#define ZICAELA_linesize 160
A68_VC  BJCAELA_omac;
A68_VC  DJCAELA_cmac;
A68_INT  EJCAELA_textstart;
#define FJCAELA_trowrow 1
#define GJCAELA_trowst 2
#define HJCAELA_zero 0
#define IJCAELA_iconst 1
#define JJCAELA_iname 2
#define KJCAELA_idop 3
#define LJCAELA_imop 4
#define MJCAELA_icond 5
#define NJCAELA_iparam 6
#define OJCAELA_ivarmult 7
#define PJCAELA_icheck 8
#define QJCAELA_iconsttext 9
#define RJCAELA_tnull 10
#define SJCAELA_tnamed 11
#define TJCAELA_trow 12
#define UJCAELA_tst 13
#define VJCAELA_tparam 14
#define WJCAELA_tfn 15
#define XJCAELA_cprim 16
#define YJCAELA_cprimi 17
#define ZJCAELA_cprimr 18
#define AKCAELA_cprimu 19
#define BKCAELA_cst 20
#define CKCAELA_crow 21
#define DKCAELA_cnull 22
#define EKCAELA_calt 23
#define FKCAELA_vconc 24
#define GKCAELA_vprim 25
#define HKCAELA_vprimi 26
#define IKCAELA_vname 27
#define JKCAELA_vtrim 28
#define KKCAELA_vindex 29
#define LKCAELA_vcallm 30
#define MKCAELA_vcalld 31
#define NKCAELA_vunn 32
#define OKCAELA_vsharp 33
#define PKCAELA_vrow 34
#define QKCAELA_vcase 35
#define RKCAELA_vquery 36
#define SKCAELA_vcoll 37
#define TKCAELA_vif 38
#define UKCAELA_vtermindex 39
#define VKCAELA_vvarmult 40
#define WKCAELA_vconst 41
#define XKCAELA_end 42
#define YKCAELA_fnstart 43
#define ZKCAELA_fnend 44
#define ALCAELA_bmake 45
#define BLCAELA_bjoin 46
#define CLCAELA_bfor 47
#define DLCAELA_typename 48
#define ELCAELA_biddec 49
#define FLCAELA_pidalts 50
#define GLCAELA_prange 51
#define HLCAELA_idelay 52
#define ILCAELA_adelay 53
#define JLCAELA_pt 54
#define KLCAELA_ptflt 55
#define LLCAELA_str 56
#define MLCAELA_dummy 58
#define NLCAELA_velseof 59
#define OLCAELA_velse 60
#define PLCAELA_vfi 61
#define QLCAELA_ram 62
#define RLCAELA_vvarmultend 64
#define SLCAELA_ktype 65
#define TLCAELA_kint 66
#define ULCAELA_kfn 67
#define VLCAELA_kconst 68
#define WLCAELA_kattr 69
#define XLCAELA_kend 70
#define YLCAELA_kilend 72
#define ZLCAELA_reform 74
#define AMCAELA_cconc 75
#define BMCAELA_cattr 76
#define CMCAELA_vcelse 77
#define DMCAELA_vnormal 78
#define EMCAELA_vnoelse 79
#define FMCAELA_vseq 80
#define GMCAELA_vpar 81
#define HMCAELA_vdynindex 82
#define IMCAELA_vbracket 83
#define JMCAELA_ibracket 84
#define KMCAELA_tbracket 85
#define LMCAELA_cbracket 86
#define MMCAELA_biop 87
#define NMCAELA_alien 88
#define OMCAELA_parend 89
#define PMCAELA_seqend 90
#define QMCAELA_seqnull 91
#define RMCAELA_seqvoid 92
#define SMCAELA_seqlet 93
#define TMCAELA_seqvar 94
#define UMCAELA_seqper 95
#define VMCAELA_seqassign 96
#define WMCAELA_seqcase 97
#define XMCAELA_seqif 98
#define YMCAELA_seqvarmult 99
#define ZMCAELA_sample 100
#define ANCAELA_cindex 101
#define BNCAELA_ctrim 102
#define CNCAELA_cvarmult 103
#define DNCAELA_cif 104
#define ENCAELA_seqbecomes 105
#define FNCAELA_seqassignend 106
#define GNCAELA_seqrow 107
#define HNCAELA_seqelse 108
#define INCAELA_seqfi 109
#define JNCAELA_seqvarmultend 110
#define KNCAELA_vthen 111
#define LNCAELA_seqthen 112
#define MNCAELA_c_type 113
#define NNCAELA_cquery 114
#define ONCAELA_imported 115
#define PNCAELA_inull 116
#define QNCAELA_normalfn 117
#define RNCAELA_brief 118
#define SNCAELA_inst 119
#define TNCAELA_macparam 120
#define UNCAELA_intname 121
#define VNCAELA_idef 122
#define WNCAELA_multjoin 123
#define XNCAELA_pstring 128
#define YNCAELA_pchar 129
#define ZNCAELA_pcharrange 130
#define AOCAELA_cstring 131
#define BOCAELA_cprimch 132
#define COCAELA_cprimst 133
#define DOCAELA_cprimchr 134
#define EOCAELA_vstring 135
#define FOCAELA_vprimch 136
#define GOCAELA_vprimst 137
#define HOCAELA_tstring 138
#define IOCAELA_cnamed 139
#define JOCAELA_constname 140
#define KOCAELA_vnull 141
#define LOCAELA_cvoid 142
#define MOCAELA_cparam 143
#define NOCAELA_vprimc 144
#define OOCAELA_faster 145
#define POCAELA_slower 146
#define QOCAELA_bjoinend 147
#define ROCAELA_tvoid 148
#define SOCAELA_vvoid 149
#define TOCAELA_vreplace 150
#define UOCAELA_attrname 151
#define VOCAELA_attid 152
#define WOCAELA_attdata 153
#define XOCAELA_attbracket 154
#define YOCAELA_attstr 155
#define ZOCAELA_attnull 156
#define APCAELA_in1bytetok 251
#define BPCAELA_in2bytetok 252
#define CPCAELA_in3bytetok 253
#define DPCAELA_in4bytetok 254
#define EPCAELA_int_tok 126
#define FPCAELA_inid_tok 159
#define GPCAELA_diplus 1
#define HPCAELA_diminus 2
#define IPCAELA_sfnequals 503
#define JPCAELA_flattenleft 1
#define KPCAELA_flattenright 2
#define LPCAELA_flattenboth 3
#define MPCAELA_constint 1
#define NPCAELA_constint2 2
#define OPCAELA_const2int 3
#define PPCAELA_const2int2 4
#define QPCAELA_idelayintcon 5
#define RPCAELA_vnamesource 1
#define SPCAELA_vnamesink 2
#define TPCAELA_vnameiosource 3
#define UPCAELA_vnameiosink 4
A68_INT  VPCAELA_stringindex;
#define WPCAELA_inseq 1
#define XPCAELA_inpar 2
#define YPCAELA_inconst 3
#define ZPCAELA_inother 4
A68_BOOL  AQCAELA_caseelseof;
A68_191 * BQCAELA_nilpalts;
A68_240 * CQCAELA_nilids;
A68_196 * DQCAELA_nilst;
A68_204 * EQCAELA_niltype;
A68_262 * FQCAELA_nildecs;
A68_266 ** GQCAELA_nilnextmp;
A68_269 * HQCAELA_nilfns;
A68_266 * IQCAELA_nilmparams;
A68_248 * JQCAELA_nilcalts;
A68_246 * KQCAELA_nilcst;
A68_185 * LQCAELA_nilcharalts;
A68_230 * MQCAELA_nilattrstr;
A68_228 * NQCAELA_nilstringlist;
A68_267 * OQCAELA_nilfninfo;
A68_217 * PQCAELA_niljoinst;
A68_224 * QQCAELA_niljoinstack;
A68_268 * RQCAELA_nilfndec;
A68_214 * SQCAELA_niljoinvarstack;
A68_270 * TQCAELA_nilfnstack;
A68_225 * UQCAELA_niljoinmultstack;
A68_210 * VQCAELA_nilportdata;
A68_213 * WQCAELA_nilportstack;
A68_272 * XQCAELA_niliddecs;
A68_54  ZQCAELA_nilrb;
A68_273  BRCAELA_nilrrb;
A68_189  CRCAELA_notdec;
A68_171  DRCAELA_flt;
A68_204  GRCAELA_o;
A68_188  HRCAELA_rec;
A68_187  IRCAELA_cnullt;
A68_178  JRCAELA_ip;
A68_168  KRCAELA_unset;
A68_181  LRCAELA_intnull;
A68_232  MRCAELA_attrnull;
A68_203  NRCAELA_typevoid;
A68_254  ORCAELA_constvoid;
A68_216  PRCAELA_jtrue;
A68_216  QRCAELA_jfalse;
A68_216  RRCAELA_jcheck;
A68_216  SRCAELA_jfault;
A68_216  TRCAELA_jvoid;
#define ZRCAELA_idtok 1
#define ASCAELA_subtok 21
#define BSCAELA_elsetok 36
#define CSCAELA_bangtok 16
#define DSCAELA_recovertok 10
#define ESCAELA_outputtok 26
#define FSCAELA_mactok 28
#define GSCAELA_typetok 30
#define HSCAELA_fntok 31
#define ISCAELA_lettok 32
#define JSCAELA_illegaltok 0
#define KSCAELA_maketok 33
#define LSCAELA_jointok 38
#define MSCAELA_fortok 71
#define NSCAELA_importstok 66
#define OSCAELA_finishtok 41
#define PSCAELA_eoftok 72
#define QSCAELA_vartok 73
#define RSCAELA_seqtok 75
#define SSCAELA_semitok 77
#define TSCAELA_fitok 61
#define USCAELA_thentok 60
#define VSCAELA_endtok 40
#define WSCAELA_esactok 37
#define XSCAELA_oftok 35
#define YSCAELA_moduletok 29
#define ZSCAELA_bustok 22
#define ATCAELA_omactok 23
#define BTCAELA_cmactok 24
#define CTCAELA_stoptok 20
#define DTCAELA_goestotok 19
#define ETCAELA_crdtok 15
#define FTCAELA_colontok 13
#define GTCAELA_rintdentok 2
#define HTCAELA_intdentok 2
#define ITCAELA_stringtok 3
#define JTCAELA_fnnametok 5
#define KTCAELA_op1tok 4
#define LTCAELA_op2tok 6
#define MTCAELA_equalstok 7
#define NTCAELA_ordtok 14
#define OTCAELA_uptotok 17
#define PTCAELA_slashtok 11
#define QTCAELA_becomestok 9
#define RTCAELA_pormtok 79
#define STCAELA_tordtok 80
#define TTCAELA_chartok 84
#define UTCAELA_begintok 39
#define VTCAELA_casetok 34
#define WTCAELA_iftok 59
#define XTCAELA_spacetok 45
#define YTCAELA_andtok 25
A68_INT  ZTCAELA_inputtok;
A68_202  AUCAELA_typenull;
A68_276 * BUCAELA_nilparamvals;
A68_286 * CUCAELA_nilscope;
A68_287 * DUCAELA_nilstate;
A68_288 * EUCAELA_nillastops;
A68_288 * FUCAELA_nillastcalls;
A68_183 * GUCAELA_nilintegerstack;
A68_290 * HUCAELA_nildecnocheck;
A68_279 * IUCAELA_nilfncallstack;
static A68_294   QUCAELA = {"boolean"}; 
A_GISVEC(A68_VC ,SUCAELA,QUCAELA,7)
static A68_294   FVCAELA = {"integer"}; 
A_GISVEC(A68_VC ,HVCAELA,FVCAELA,7)
static A68_116   UVCAELA = {"type"}; 
A_GISVEC(A68_VC ,WVCAELA,UVCAELA,4)
static A68_295   JWCAELA = {"constant"}; 
A_GISVEC(A68_VC ,LWCAELA,JWCAELA,8)
A68_293  TWCAELA_modes;
#define UWCAELA_exported 3
#define VWCAELA_noboth 2
#define WWCAELA_flt_par 0
#define XWCAELA_expl_par 1
#define YWCAELA_impl_par 2
#define ZWCAELA_impl_expl 3
#define AXCAELA_impl_impl 4
#define BXCAELA_fn_notdec 0
#define CXCAELA_fn_flt 1
#define DXCAELA_fn_rec 2
#define EXCAELA_fn_ok 3
#define FXCAELA_outerdec 1
#define GXCAELA_localdec 2
#define HXCAELA_macpardec 3
#define IXCAELA_wbool 1
#define JXCAELA_winteger 2
#define KXCAELA_wtype 3
#define LXCAELA_wctype 4
#define MXCAELA_wflt 5
#define NXCAELA_wfn 6
#define OXCAELA_wattr 7
A68_297  RXCAELA_mops;
A68_299  UXCAELA_dops;
static A68_303   AYCAELA = {"OUTPUT"}; 
A_GISVEC(A68_VC ,CYCAELA,AYCAELA,6)
static A68_304   IYCAELA = {"End of file"}; 
A_GISVEC(A68_VC ,KYCAELA,IYCAELA,11)
static A68_305   QYCAELA = {"FI"}; 
A_GISVEC(A68_VC ,SYCAELA,QYCAELA,2)
static A68_116   YYCAELA = {"THEN"}; 
A_GISVEC(A68_VC ,AZCAELA,YYCAELA,4)
static A68_306   GZCAELA = {"END"}; 
A_GISVEC(A68_VC ,IZCAELA,GZCAELA,3)
static A68_116   OZCAELA = {"ESAC"}; 
A_GISVEC(A68_VC ,QZCAELA,OZCAELA,4)
static A68_305   WZCAELA = {"OF"}; 
A_GISVEC(A68_VC ,YZCAELA,WZCAELA,2)
static A68_116   UBDAELA = {"ELSE"}; 
A_GISVEC(A68_VC ,WBDAELA,UBDAELA,4)
static A68_295   CCDAELA = {"a string"}; 
A_GISVEC(A68_VC ,ECDAELA,CCDAELA,8)
static A68_303   KCDAELA = {"a name"}; 
A_GISVEC(A68_VC ,MCDAELA,KCDAELA,6)
static A68_307   SCDAELA = {"a FN name"}; 
A_GISVEC(A68_VC ,UCDAELA,SCDAELA,9)
static A68_307   ADDAELA = {"a FN name"}; 
A_GISVEC(A68_VC ,CDDAELA,ADDAELA,9)
static A68_307   IDDAELA = {"a FN name"}; 
A_GISVEC(A68_VC ,KDDAELA,IDDAELA,9)
static A68_305   XDDAELA = {":="}; 
A_GISVEC(A68_VC ,ZDDAELA,XDDAELA,2)
static A68_305   AFDAELA = {".."}; 
A_GISVEC(A68_VC ,CFDAELA,AFDAELA,2)
A68_302  MFDAELA_toks;
static A68_303   XMDAELA = {"Joinio"}; 
A_GISVEC(A68_VC ,YMDAELA,XMDAELA,6)
static A68_294   FNDAELA = {"Joinfn "}; 
A_GISVEC(A68_VC ,GNDAELA,FNDAELA,7)
static A68_116   LNDAELA = {"true"}; 
A_GISVEC(A68_VC ,MNDAELA,LNDAELA,4)
static A68_334   TNDAELA = {"false"}; 
A_GISVEC(A68_VC ,UNDAELA,TNDAELA,5)
static A68_334   BODAELA = {"check"}; 
A_GISVEC(A68_VC ,CODAELA,BODAELA,5)
static A68_334   JODAELA = {"fault"}; 
A_GISVEC(A68_VC ,KODAELA,JODAELA,5)
static A68_294   RODAELA = {"unknown"}; 
A_GISVEC(A68_VC ,SODAELA,RODAELA,7)
static A68_294   APDAELA = {"Joinst "}; 
A_GISVEC(A68_VC ,BPDAELA,APDAELA,7)
static A68_295   KPDAELA = {"Joinrow "}; 
A_GISVEC(A68_VC ,LPDAELA,KPDAELA,8)
static A68_116   YPDAELA = {"true"}; 
A_GISVEC(A68_VC ,ZPDAELA,YPDAELA,4)
static A68_334   GQDAELA = {"false"}; 
A_GISVEC(A68_VC ,HQDAELA,GQDAELA,5)
static A68_334   OQDAELA = {"check"}; 
A_GISVEC(A68_VC ,PQDAELA,OQDAELA,5)
static A68_334   WQDAELA = {"fault"}; 
A_GISVEC(A68_VC ,XQDAELA,WQDAELA,5)
static A68_294   ERDAELA = {"unknown"}; 
A_GISVEC(A68_VC ,FRDAELA,ERDAELA,7)
static A68_306   NRDAELA = {"flt"}; 
A_GISVEC(A68_VC ,ORDAELA,NRDAELA,3)
static A68_307   VRDAELA = {"!!!!!!!!!"}; 
A_GISVEC(A68_VC ,WRDAELA,VRDAELA,9)
static A68_337   QTDAELA = {"get_intvarmult"}; 
A_GISVEC(A68_VC ,RTDAELA,QTDAELA,14)
static A68_337   TTDAELA = {"get_intvarmult"}; 
A_GISVEC(A68_VC ,UTDAELA,TTDAELA,14)
typedef struct   /* env of non-global proc */
{
A68_311  CHDAELA_getst;
} EHDAELA_getst;
typedef struct   /* env of non-global proc */
{
int dummy;
} OMDAELA_spaces;

A_STATIC A68_VOID  NUCAELA_generator(A68_BOOL  MUCAELA_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  CVCAELA_generator(A68_BOOL  BVCAELA_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  RVCAELA_generator(A68_BOOL  QVCAELA_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  GWCAELA_generator(A68_BOOL  FWCAELA_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  XXCAELA_generator(A68_BOOL  WXCAELA_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  FYCAELA_generator(A68_BOOL  EYCAELA_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  NYCAELA_generator(A68_BOOL  MYCAELA_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  VYCAELA_generator(A68_BOOL  UYCAELA_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  DZCAELA_generator(A68_BOOL  CZCAELA_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  LZCAELA_generator(A68_BOOL  KZCAELA_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  TZCAELA_generator(A68_BOOL  SZCAELA_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  BADAELA_generator(A68_BOOL  AADAELA_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  IADAELA_generator(A68_BOOL  HADAELA_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  PADAELA_generator(A68_BOOL  OADAELA_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  WADAELA_generator(A68_BOOL  VADAELA_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  DBDAELA_generator(A68_BOOL  CBDAELA_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  KBDAELA_generator(A68_BOOL  JBDAELA_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  RBDAELA_generator(A68_BOOL  QBDAELA_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  ZBDAELA_generator(A68_BOOL  YBDAELA_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  HCDAELA_generator(A68_BOOL  GCDAELA_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  PCDAELA_generator(A68_BOOL  OCDAELA_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  XCDAELA_generator(A68_BOOL  WCDAELA_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  FDDAELA_generator(A68_BOOL  EDDAELA_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  NDDAELA_generator(A68_BOOL  MDDAELA_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  UDDAELA_generator(A68_BOOL  TDDAELA_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  CEDAELA_generator(A68_BOOL  BEDAELA_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  JEDAELA_generator(A68_BOOL  IEDAELA_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  QEDAELA_generator(A68_BOOL  PEDAELA_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  XEDAELA_generator(A68_BOOL  WEDAELA_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  FFDAELA_generator(A68_BOOL  EFDAELA_anonymous, A68_VC  *ReturnedValue);

A68_VOID  OFDAELA_getinteger(A68_182  Int, A68_182  *ReturnedValue);

A68_VOID  ZGDAELA_gettype(A68_204  Type, A68_204  *ReturnedValue);

A_STATIC A68_196 * DHDAELA_getst(A68_196 * St, void *NonLocals);

A68_VOID  VIDAELA_primtype(A68_204  T, A68_BOOL  Simp_tvar, A68_204  *ReturnedValue);

A68_180 * DKDAELA_makeibracket(A68_182  Int);

A68_200 * IKDAELA_maketbracket(A68_204  Type);

A68_250 * NKDAELA_makecbracket(A68_261  Ctype);

A68_231 * SKDAELA_makeabracket(A68_234  Attr);

A68_VOID  XKDAELA_makeintid(A68_182  I, A68_206  *ReturnedValue);

A68_VOID  CLDAELA_maketypeid(A68_204  T, A68_205  *ReturnedValue);

A68_VOID  HLDAELA_makectypeid(A68_261  Ct, A68_207  *ReturnedValue);

A68_VOID  MLDAELA_makeattrid(A68_234  At, A68_235  *ReturnedValue);

A68_233 * RLDAELA_makeattrvar(A68_167 * M);

A68_173 * WLDAELA_makeintvar(A68_167 * M);

A68_249 * BMDAELA_makecquery(A68_204  T);

A68_VOID  HMDAELA_print_joinup(A68_223 * Join, A68_INT  Sp);

A_STATIC A68_VOID  KMDAELA_print(A68_85  Line);

A_STATIC A68_VOID  NMDAELA_spaces(A68_INT  S, void *NonLocals);

A68_VOID  DSDAELA_uncheckedint(A68_182  A, A68_182  *ReturnedValue);

A68_176 * KTDAELA_get_intvarmult(A68_240 * Ids);

A68_BOOL  YTDAELA_joinequal(A68_216  Lhs, A68_216  Rhs);

A68_VOID  BUDAELA_ddecs_type(A68_262 * Decs, A68_204  *ReturnedValue);

A_STATIC A68_196 * DHDAELA_getst(A68_196 * St, void *NonLocals)
#define NL(x) (((EHDAELA_getst *)NonLocals)->x)
{ 
A68_196  FHDAELA;  /* collateral clause result */
A68_204  GHDAELA;  /* avoid structure result */
A68_196 * HHDAELA;  /* clause result */
A68_196 * IHDAELA;  /* YIELD */
A_PROC_ENTRY(getst);
 /* line 487: */
if ( (St!=DQCAELA_nilst) )
{ 
ZGDAELA_gettype( (*(&(St->T))), &GHDAELA );
FHDAELA.T = GHDAELA;
 /* line 488: */
FHDAELA.Rest = A_CALLPROC(NL(CHDAELA_getst),((*(&(St->Rest)))),((*(&(St->Rest))),(NL(CHDAELA_getst)).nonlocals));
 /* line 489: */
IHDAELA = A_HEAP(A68_196 ) ;
(*IHDAELA) = FHDAELA ;
HHDAELA = IHDAELA;
} 
else
{ 
HHDAELA = (A68_196 *)A68_NIL;
} 
A_PROC_EXIT(getst);
return( HHDAELA );
} 
#undef NL

A_STATIC A68_VOID  KMDAELA_print(A68_85  Line)
{ 
A_PROC_ENTRY(print);
GFBAOSL_put(KEAAOST_screen, Line);
A_PROC_EXIT(print);
return;
} 
#undef NL

A_STATIC A68_VOID  NMDAELA_spaces(A68_INT  S, void *NonLocals)
#define NL(x) (((OMDAELA_spaces *)NonLocals)->x)
{ 
A68_INT  PMDAELA_i;
A68_INT  QMDAELA;  /* to part of loop */
A68_52  RMDAELA;  /* OPERATORS - mode -> union mode */
A68_CHAR  SMDAELA;  /* YIELD */
A68_85  TMDAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(spaces);
QMDAELA = S;
for ( PMDAELA_i = 1;
PMDAELA_i <= QMDAELA;
PMDAELA_i += 1 )
{ 
SMDAELA = ' ' ;
KMDAELA_print(A_HVEC(TMDAELA,A_UNITE(RMDAELA,mode6,6,SMDAELA),A68_52 ));
}
A_PROC_EXIT(spaces);
return;
} 
#undef NL

A_STATIC A68_VOID  NUCAELA_generator(A68_BOOL  MUCAELA_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  OUCAELA;  /* clause result */
A68_VC  PUCAELA;  /* OPERATORS - dynamic generator */
{ 
PUCAELA.upb = 7 ;
( MUCAELA_anonymous? A_VLOC(A68_CHAR ,PUCAELA): A_VHEAP(A68_CHAR ,PUCAELA) );
OUCAELA = PUCAELA;
} 
*ReturnedValue = (OUCAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  CVCAELA_generator(A68_BOOL  BVCAELA_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  DVCAELA;  /* clause result */
A68_VC  EVCAELA;  /* OPERATORS - dynamic generator */
{ 
EVCAELA.upb = 7 ;
( BVCAELA_anonymous? A_VLOC(A68_CHAR ,EVCAELA): A_VHEAP(A68_CHAR ,EVCAELA) );
DVCAELA = EVCAELA;
} 
*ReturnedValue = (DVCAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  RVCAELA_generator(A68_BOOL  QVCAELA_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  SVCAELA;  /* clause result */
A68_VC  TVCAELA;  /* OPERATORS - dynamic generator */
{ 
TVCAELA.upb = 4 ;
( QVCAELA_anonymous? A_VLOC(A68_CHAR ,TVCAELA): A_VHEAP(A68_CHAR ,TVCAELA) );
SVCAELA = TVCAELA;
} 
*ReturnedValue = (SVCAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  GWCAELA_generator(A68_BOOL  FWCAELA_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  HWCAELA;  /* clause result */
A68_VC  IWCAELA;  /* OPERATORS - dynamic generator */
{ 
IWCAELA.upb = 8 ;
( FWCAELA_anonymous? A_VLOC(A68_CHAR ,IWCAELA): A_VHEAP(A68_CHAR ,IWCAELA) );
HWCAELA = IWCAELA;
} 
*ReturnedValue = (HWCAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  XXCAELA_generator(A68_BOOL  WXCAELA_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  YXCAELA;  /* clause result */
A68_VC  ZXCAELA;  /* OPERATORS - dynamic generator */
{ 
ZXCAELA.upb = 6 ;
( WXCAELA_anonymous? A_VLOC(A68_CHAR ,ZXCAELA): A_VHEAP(A68_CHAR ,ZXCAELA) );
YXCAELA = ZXCAELA;
} 
*ReturnedValue = (YXCAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  FYCAELA_generator(A68_BOOL  EYCAELA_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  GYCAELA;  /* clause result */
A68_VC  HYCAELA;  /* OPERATORS - dynamic generator */
{ 
HYCAELA.upb = 11 ;
( EYCAELA_anonymous? A_VLOC(A68_CHAR ,HYCAELA): A_VHEAP(A68_CHAR ,HYCAELA) );
GYCAELA = HYCAELA;
} 
*ReturnedValue = (GYCAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  NYCAELA_generator(A68_BOOL  MYCAELA_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  OYCAELA;  /* clause result */
A68_VC  PYCAELA;  /* OPERATORS - dynamic generator */
{ 
PYCAELA.upb = 2 ;
( MYCAELA_anonymous? A_VLOC(A68_CHAR ,PYCAELA): A_VHEAP(A68_CHAR ,PYCAELA) );
OYCAELA = PYCAELA;
} 
*ReturnedValue = (OYCAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  VYCAELA_generator(A68_BOOL  UYCAELA_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  WYCAELA;  /* clause result */
A68_VC  XYCAELA;  /* OPERATORS - dynamic generator */
{ 
XYCAELA.upb = 4 ;
( UYCAELA_anonymous? A_VLOC(A68_CHAR ,XYCAELA): A_VHEAP(A68_CHAR ,XYCAELA) );
WYCAELA = XYCAELA;
} 
*ReturnedValue = (WYCAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  DZCAELA_generator(A68_BOOL  CZCAELA_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  EZCAELA;  /* clause result */
A68_VC  FZCAELA;  /* OPERATORS - dynamic generator */
{ 
FZCAELA.upb = 3 ;
( CZCAELA_anonymous? A_VLOC(A68_CHAR ,FZCAELA): A_VHEAP(A68_CHAR ,FZCAELA) );
EZCAELA = FZCAELA;
} 
*ReturnedValue = (EZCAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  LZCAELA_generator(A68_BOOL  KZCAELA_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  MZCAELA;  /* clause result */
A68_VC  NZCAELA;  /* OPERATORS - dynamic generator */
{ 
NZCAELA.upb = 4 ;
( KZCAELA_anonymous? A_VLOC(A68_CHAR ,NZCAELA): A_VHEAP(A68_CHAR ,NZCAELA) );
MZCAELA = NZCAELA;
} 
*ReturnedValue = (MZCAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  TZCAELA_generator(A68_BOOL  SZCAELA_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  UZCAELA;  /* clause result */
A68_VC  VZCAELA;  /* OPERATORS - dynamic generator */
{ 
VZCAELA.upb = 2 ;
( SZCAELA_anonymous? A_VLOC(A68_CHAR ,VZCAELA): A_VHEAP(A68_CHAR ,VZCAELA) );
UZCAELA = VZCAELA;
} 
*ReturnedValue = (UZCAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  BADAELA_generator(A68_BOOL  AADAELA_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  CADAELA;  /* clause result */
A68_VC  DADAELA;  /* OPERATORS - dynamic generator */
{ 
DADAELA.upb = 1 ;
( AADAELA_anonymous? A_VLOC(A68_CHAR ,DADAELA): A_VHEAP(A68_CHAR ,DADAELA) );
CADAELA = DADAELA;
} 
*ReturnedValue = (CADAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  IADAELA_generator(A68_BOOL  HADAELA_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  JADAELA;  /* clause result */
A68_VC  KADAELA;  /* OPERATORS - dynamic generator */
{ 
KADAELA.upb = 1 ;
( HADAELA_anonymous? A_VLOC(A68_CHAR ,KADAELA): A_VHEAP(A68_CHAR ,KADAELA) );
JADAELA = KADAELA;
} 
*ReturnedValue = (JADAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  PADAELA_generator(A68_BOOL  OADAELA_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  QADAELA;  /* clause result */
A68_VC  RADAELA;  /* OPERATORS - dynamic generator */
{ 
RADAELA.upb = 1 ;
( OADAELA_anonymous? A_VLOC(A68_CHAR ,RADAELA): A_VHEAP(A68_CHAR ,RADAELA) );
QADAELA = RADAELA;
} 
*ReturnedValue = (QADAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  WADAELA_generator(A68_BOOL  VADAELA_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  XADAELA;  /* clause result */
A68_VC  YADAELA;  /* OPERATORS - dynamic generator */
{ 
YADAELA.upb = 1 ;
( VADAELA_anonymous? A_VLOC(A68_CHAR ,YADAELA): A_VHEAP(A68_CHAR ,YADAELA) );
XADAELA = YADAELA;
} 
*ReturnedValue = (XADAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  DBDAELA_generator(A68_BOOL  CBDAELA_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  EBDAELA;  /* clause result */
A68_VC  FBDAELA;  /* OPERATORS - dynamic generator */
{ 
FBDAELA.upb = 1 ;
( CBDAELA_anonymous? A_VLOC(A68_CHAR ,FBDAELA): A_VHEAP(A68_CHAR ,FBDAELA) );
EBDAELA = FBDAELA;
} 
*ReturnedValue = (EBDAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  KBDAELA_generator(A68_BOOL  JBDAELA_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  LBDAELA;  /* clause result */
A68_VC  MBDAELA;  /* OPERATORS - dynamic generator */
{ 
MBDAELA.upb = 1 ;
( JBDAELA_anonymous? A_VLOC(A68_CHAR ,MBDAELA): A_VHEAP(A68_CHAR ,MBDAELA) );
LBDAELA = MBDAELA;
} 
*ReturnedValue = (LBDAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  RBDAELA_generator(A68_BOOL  QBDAELA_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  SBDAELA;  /* clause result */
A68_VC  TBDAELA;  /* OPERATORS - dynamic generator */
{ 
TBDAELA.upb = 4 ;
( QBDAELA_anonymous? A_VLOC(A68_CHAR ,TBDAELA): A_VHEAP(A68_CHAR ,TBDAELA) );
SBDAELA = TBDAELA;
} 
*ReturnedValue = (SBDAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  ZBDAELA_generator(A68_BOOL  YBDAELA_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  ACDAELA;  /* clause result */
A68_VC  BCDAELA;  /* OPERATORS - dynamic generator */
{ 
BCDAELA.upb = 8 ;
( YBDAELA_anonymous? A_VLOC(A68_CHAR ,BCDAELA): A_VHEAP(A68_CHAR ,BCDAELA) );
ACDAELA = BCDAELA;
} 
*ReturnedValue = (ACDAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  HCDAELA_generator(A68_BOOL  GCDAELA_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  ICDAELA;  /* clause result */
A68_VC  JCDAELA;  /* OPERATORS - dynamic generator */
{ 
JCDAELA.upb = 6 ;
( GCDAELA_anonymous? A_VLOC(A68_CHAR ,JCDAELA): A_VHEAP(A68_CHAR ,JCDAELA) );
ICDAELA = JCDAELA;
} 
*ReturnedValue = (ICDAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  PCDAELA_generator(A68_BOOL  OCDAELA_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  QCDAELA;  /* clause result */
A68_VC  RCDAELA;  /* OPERATORS - dynamic generator */
{ 
RCDAELA.upb = 9 ;
( OCDAELA_anonymous? A_VLOC(A68_CHAR ,RCDAELA): A_VHEAP(A68_CHAR ,RCDAELA) );
QCDAELA = RCDAELA;
} 
*ReturnedValue = (QCDAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  XCDAELA_generator(A68_BOOL  WCDAELA_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  YCDAELA;  /* clause result */
A68_VC  ZCDAELA;  /* OPERATORS - dynamic generator */
{ 
ZCDAELA.upb = 9 ;
( WCDAELA_anonymous? A_VLOC(A68_CHAR ,ZCDAELA): A_VHEAP(A68_CHAR ,ZCDAELA) );
YCDAELA = ZCDAELA;
} 
*ReturnedValue = (YCDAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  FDDAELA_generator(A68_BOOL  EDDAELA_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  GDDAELA;  /* clause result */
A68_VC  HDDAELA;  /* OPERATORS - dynamic generator */
{ 
HDDAELA.upb = 9 ;
( EDDAELA_anonymous? A_VLOC(A68_CHAR ,HDDAELA): A_VHEAP(A68_CHAR ,HDDAELA) );
GDDAELA = HDDAELA;
} 
*ReturnedValue = (GDDAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  NDDAELA_generator(A68_BOOL  MDDAELA_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  ODDAELA;  /* clause result */
A68_VC  PDDAELA;  /* OPERATORS - dynamic generator */
{ 
PDDAELA.upb = 1 ;
( MDDAELA_anonymous? A_VLOC(A68_CHAR ,PDDAELA): A_VHEAP(A68_CHAR ,PDDAELA) );
ODDAELA = PDDAELA;
} 
*ReturnedValue = (ODDAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  UDDAELA_generator(A68_BOOL  TDDAELA_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  VDDAELA;  /* clause result */
A68_VC  WDDAELA;  /* OPERATORS - dynamic generator */
{ 
WDDAELA.upb = 2 ;
( TDDAELA_anonymous? A_VLOC(A68_CHAR ,WDDAELA): A_VHEAP(A68_CHAR ,WDDAELA) );
VDDAELA = WDDAELA;
} 
*ReturnedValue = (VDDAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  CEDAELA_generator(A68_BOOL  BEDAELA_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  DEDAELA;  /* clause result */
A68_VC  EEDAELA;  /* OPERATORS - dynamic generator */
{ 
EEDAELA.upb = 1 ;
( BEDAELA_anonymous? A_VLOC(A68_CHAR ,EEDAELA): A_VHEAP(A68_CHAR ,EEDAELA) );
DEDAELA = EEDAELA;
} 
*ReturnedValue = (DEDAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  JEDAELA_generator(A68_BOOL  IEDAELA_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  KEDAELA;  /* clause result */
A68_VC  LEDAELA;  /* OPERATORS - dynamic generator */
{ 
LEDAELA.upb = 1 ;
( IEDAELA_anonymous? A_VLOC(A68_CHAR ,LEDAELA): A_VHEAP(A68_CHAR ,LEDAELA) );
KEDAELA = LEDAELA;
} 
*ReturnedValue = (KEDAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  QEDAELA_generator(A68_BOOL  PEDAELA_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  REDAELA;  /* clause result */
A68_VC  SEDAELA;  /* OPERATORS - dynamic generator */
{ 
SEDAELA.upb = 1 ;
( PEDAELA_anonymous? A_VLOC(A68_CHAR ,SEDAELA): A_VHEAP(A68_CHAR ,SEDAELA) );
REDAELA = SEDAELA;
} 
*ReturnedValue = (REDAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  XEDAELA_generator(A68_BOOL  WEDAELA_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  YEDAELA;  /* clause result */
A68_VC  ZEDAELA;  /* OPERATORS - dynamic generator */
{ 
ZEDAELA.upb = 2 ;
( WEDAELA_anonymous? A_VLOC(A68_CHAR ,ZEDAELA): A_VHEAP(A68_CHAR ,ZEDAELA) );
YEDAELA = ZEDAELA;
} 
*ReturnedValue = (YEDAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  FFDAELA_generator(A68_BOOL  EFDAELA_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  GFDAELA;  /* clause result */
A68_VC  HFDAELA;  /* OPERATORS - dynamic generator */
{ 
HFDAELA.upb = 1 ;
( EFDAELA_anonymous? A_VLOC(A68_CHAR ,HFDAELA): A_VHEAP(A68_CHAR ,HFDAELA) );
GFDAELA = HFDAELA;
} 
*ReturnedValue = (GFDAELA);
return;
} 
#undef NL

A68_VOID  OFDAELA_getinteger(A68_182  Int, A68_182  *ReturnedValue)
{ 
A68_182  PFDAELA;  /* united object - for case conformity */
A68_172 * QFDAELA_ic;
A68_172  RFDAELA;  /* collateral clause result */
A68_182  SFDAELA;  /* avoid structure result */
A68_182  TFDAELA;  /* avoid structure result */
A68_182  UFDAELA;  /* clause result */
A68_172 * VFDAELA;  /* YIELD */
A68_182  WFDAELA;  /* OPERATORS - mode -> union mode */
A68_174 * XFDAELA_id;
A68_174  YFDAELA;  /* collateral clause result */
A68_182  ZFDAELA;  /* avoid structure result */
A68_182  AGDAELA;  /* avoid structure result */
A68_174 * BGDAELA;  /* YIELD */
A68_182  CGDAELA;  /* OPERATORS - mode -> union mode */
A68_175 * DGDAELA_im;
A68_175  EGDAELA;  /* collateral clause result */
A68_182  FGDAELA;  /* avoid structure result */
A68_175 * GGDAELA;  /* YIELD */
A68_182  HGDAELA;  /* OPERATORS - mode -> union mode */
A68_176 * IGDAELA_im;
A68_176  JGDAELA;  /* collateral clause result */
A68_182  KGDAELA;  /* avoid structure result */
A68_182  LGDAELA;  /* avoid structure result */
A68_182  MGDAELA;  /* avoid structure result */
A68_176 * NGDAELA;  /* YIELD */
A68_182  OGDAELA;  /* OPERATORS - mode -> union mode */
A68_177 * PGDAELA_ic;
A68_177  QGDAELA;  /* collateral clause result */
A68_182  RGDAELA;  /* avoid structure result */
A68_182  SGDAELA;  /* avoid structure result */
A68_182  TGDAELA;  /* avoid structure result */
A68_177 * UGDAELA;  /* YIELD */
A68_182  VGDAELA;  /* OPERATORS - mode -> union mode */
A68_180 * WGDAELA_ib;
A68_182  XGDAELA;  /* avoid structure result */
A_PROC_ENTRY(getinteger);
 /* line 470: */
 /* line 471: */
PFDAELA = Int ;
switch ( PFDAELA.mode )
{ 
case 5: /* REF STRUCT(MODE182,MODE182,INT)  */
QFDAELA_ic = (PFDAELA.data.mode5);
 /* line 472: */
OFDAELA_getinteger( (*(&(QFDAELA_ic->Integer))), &SFDAELA );
RFDAELA.Integer = SFDAELA;
OFDAELA_getinteger( (*(&(QFDAELA_ic->Standard))), &TFDAELA );
RFDAELA.Standard = TFDAELA;
RFDAELA.Test = (*(&(QFDAELA_ic->Test)));
 /* line 473: */
VFDAELA = A_HEAP(A68_172 ) ;
(*VFDAELA) = RFDAELA ;
UFDAELA = A_UNITE(WFDAELA,mode5,5,VFDAELA);
break;
case 7: /* REF STRUCT(INT,MODE182,MODE182)  */
XFDAELA_id = (PFDAELA.data.mode7);
YFDAELA.Opno = (*(&(XFDAELA_id->Opno)));
 /* line 474: */
OFDAELA_getinteger( (*(&(XFDAELA_id->L))), &ZFDAELA );
YFDAELA.L = ZFDAELA;
OFDAELA_getinteger( (*(&(XFDAELA_id->R))), &AGDAELA );
YFDAELA.R = AGDAELA;
 /* line 475: */
BGDAELA = A_HEAP(A68_174 ) ;
(*BGDAELA) = YFDAELA ;
UFDAELA = A_UNITE(CGDAELA,mode7,7,BGDAELA);
break;
case 8: /* REF STRUCT(INT,MODE182)  */
DGDAELA_im = (PFDAELA.data.mode8);
EGDAELA.Opno = (*(&(DGDAELA_im->Opno)));
OFDAELA_getinteger( (*(&(DGDAELA_im->R))), &FGDAELA );
EGDAELA.R = FGDAELA;
 /* line 476: */
GGDAELA = A_HEAP(A68_175 ) ;
(*GGDAELA) = EGDAELA ;
UFDAELA = A_UNITE(HGDAELA,mode8,8,GGDAELA);
break;
case 10: /* REF STRUCT(INT,MODE182,MODE182,MODE182)  */
IGDAELA_im = (PFDAELA.data.mode10);
 /* line 477: */
JGDAELA.Varmultno = (*(&(IGDAELA_im->Varmultno)));
 /* line 478: */
OFDAELA_getinteger( (*(&(IGDAELA_im->Lwb))), &KGDAELA );
JGDAELA.Lwb = KGDAELA;
OFDAELA_getinteger( (*(&(IGDAELA_im->Upb))), &LGDAELA );
JGDAELA.Upb = LGDAELA;
OFDAELA_getinteger( (*(&(IGDAELA_im->Index))), &MGDAELA );
JGDAELA.Index = MGDAELA;
 /* line 479: */
NGDAELA = A_HEAP(A68_176 ) ;
(*NGDAELA) = JGDAELA ;
UFDAELA = A_UNITE(OGDAELA,mode10,10,NGDAELA);
break;
case 9: /* REF STRUCT(MODE182,MODE182,MODE182)  */
PGDAELA_ic = (PFDAELA.data.mode9);
OFDAELA_getinteger( (*(&(PGDAELA_ic->Cond))), &RGDAELA );
QGDAELA.Cond = RGDAELA;
 /* line 480: */
OFDAELA_getinteger( (*(&(PGDAELA_ic->T))), &SGDAELA );
QGDAELA.T = SGDAELA;
OFDAELA_getinteger( (*(&(PGDAELA_ic->F))), &TGDAELA );
QGDAELA.F = TGDAELA;
 /* line 481: */
UGDAELA = A_HEAP(A68_177 ) ;
(*UGDAELA) = QGDAELA ;
UFDAELA = A_UNITE(VGDAELA,mode9,9,UGDAELA);
break;
case 13: /* REF STRUCT(MODE182)  */
WGDAELA_ib = (PFDAELA.data.mode13);
 /* line 482: */
 /* line 483: */
OFDAELA_getinteger( (*(&(WGDAELA_ib->Ibracket))), &XGDAELA );
UFDAELA = XGDAELA;
break;
default: 
UFDAELA = Int;
break;
} 
A_PROC_EXIT(getinteger);
*ReturnedValue = (UFDAELA);
return;
} 
#undef NL

A68_VOID  ZGDAELA_gettype(A68_204  Type, A68_204  *ReturnedValue)
{ 
A68_311  CHDAELA_getst;   /* proc value of non-global proc */
A68_204  JHDAELA;  /* united object - for case conformity */
A68_195 * KHDAELA_n;
A68_195  LHDAELA;  /* collateral clause result */
A68_204  MHDAELA;  /* avoid structure result */
A68_204  NHDAELA;  /* clause result */
A68_195 * OHDAELA;  /* YIELD */
A68_204  PHDAELA;  /* OPERATORS - mode -> union mode */
A68_197 * QHDAELA_r;
A68_197  RHDAELA;  /* collateral clause result */
A68_204  SHDAELA;  /* avoid structure result */
A68_182  THDAELA;  /* avoid structure result */
A68_197 * UHDAELA;  /* YIELD */
A68_204  VHDAELA;  /* OPERATORS - mode -> union mode */
A68_199 * WHDAELA_f;
A68_199  XHDAELA;  /* collateral clause result */
A68_204  YHDAELA;  /* avoid structure result */
A68_204  ZHDAELA;  /* avoid structure result */
A68_199 * AIDAELA;  /* YIELD */
A68_204  BIDAELA;  /* OPERATORS - mode -> union mode */
A68_196 * CIDAELA_s;
A68_196 * DIDAELA_st;
A68_196 * EIDAELA;  /* YIELD */
A68_204  FIDAELA;  /* OPERATORS - mode -> union mode */
A68_201 * GIDAELA_ts;
A68_201  HIDAELA;  /* collateral clause result */
A68_182  IIDAELA;  /* avoid structure result */
A68_204  JIDAELA;  /* avoid structure result */
A68_201 * KIDAELA;  /* YIELD */
A68_204  LIDAELA;  /* OPERATORS - mode -> union mode */
A68_200 * MIDAELA_tb;
A68_204  NIDAELA;  /* avoid structure result */
A68_198 * OIDAELA_tv;
A68_198  PIDAELA;  /* collateral clause result */
A68_204  QIDAELA;  /* avoid structure result */
A68_198 * RIDAELA;  /* YIELD */
A68_204  SIDAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(gettype);
 /* line 486: */
{ 
A_CLOSURE( CHDAELA_getst, DHDAELA_getst, EHDAELA_getst );
(( EHDAELA_getst * ) ( CHDAELA_getst.nonlocals )) -> CHDAELA_getst = CHDAELA_getst;
 /* line 490: */
 /* line 491: */
JHDAELA = Type ;
switch ( JHDAELA.mode )
{ 
case 2: /* REF STRUCT(REF MODE239,INT,MODE204)  */
KHDAELA_n = (JHDAELA.data.mode2);
LHDAELA.Idinfo = (*(&(KHDAELA_n->Idinfo)));
LHDAELA.Typeno = (*(&(KHDAELA_n->Typeno)));
ZGDAELA_gettype( (*(&(KHDAELA_n->T))), &MHDAELA );
LHDAELA.T = MHDAELA;
 /* line 492: */
OHDAELA = A_HEAP(A68_195 ) ;
(*OHDAELA) = LHDAELA ;
NHDAELA = A_UNITE(PHDAELA,mode2,2,OHDAELA);
break;
case 7: /* REF STRUCT(MODE204,MODE182)  */
QHDAELA_r = (JHDAELA.data.mode7);
ZGDAELA_gettype( (*(&(QHDAELA_r->T))), &SHDAELA );
RHDAELA.T = SHDAELA;
OFDAELA_getinteger( (*(&(QHDAELA_r->Size))), &THDAELA );
RHDAELA.Size = THDAELA;
 /* line 493: */
UHDAELA = A_HEAP(A68_197 ) ;
(*UHDAELA) = RHDAELA ;
NHDAELA = A_UNITE(VHDAELA,mode7,7,UHDAELA);
break;
case 6: /* REF STRUCT(MODE204,MODE204)  */
WHDAELA_f = (JHDAELA.data.mode6);
ZGDAELA_gettype( (*(&(WHDAELA_f->From))), &YHDAELA );
XHDAELA.From = YHDAELA;
ZGDAELA_gettype( (*(&(WHDAELA_f->To))), &ZHDAELA );
XHDAELA.To = ZHDAELA;
 /* line 494: */
AIDAELA = A_HEAP(A68_199 ) ;
(*AIDAELA) = XHDAELA ;
NHDAELA = A_UNITE(BIDAELA,mode6,6,AIDAELA);
break;
case 3: /* REF STRUCT(MODE204,REF MODE196)  */
CIDAELA_s = (JHDAELA.data.mode3);
{ 
DIDAELA_st = CIDAELA_s;
 /* line 495: */
EIDAELA = A_HEAP(A68_196 ) ;
(*EIDAELA) = (*A_CALLPROC(CHDAELA_getst,(DIDAELA_st),(DIDAELA_st,(CHDAELA_getst).nonlocals))) ;
NHDAELA = A_UNITE(FIDAELA,mode3,3,EIDAELA);
} 
break;
case 9: /* REF STRUCT(MODE182,MODE204)  */
GIDAELA_ts = (JHDAELA.data.mode9);
 /* line 496: */
OFDAELA_getinteger( (*(&(GIDAELA_ts->Size))), &IIDAELA );
HIDAELA.Size = IIDAELA;
 /* line 497: */
ZGDAELA_gettype( (*(&(GIDAELA_ts->Tstring))), &JIDAELA );
HIDAELA.Tstring = JIDAELA;
 /* line 498: */
KIDAELA = A_HEAP(A68_201 ) ;
(*KIDAELA) = HIDAELA ;
NHDAELA = A_UNITE(LIDAELA,mode9,9,KIDAELA);
break;
case 8: /* REF STRUCT(MODE204)  */
MIDAELA_tb = (JHDAELA.data.mode8);
 /* line 499: */
ZGDAELA_gettype( (*(&(MIDAELA_tb->Tbracket))), &NIDAELA );
NHDAELA = NIDAELA;
break;
case 4: /* REF STRUCT(REF MODE167,MODE204)  */
OIDAELA_tv = (JHDAELA.data.mode4);
PIDAELA.Tm = (*(&(OIDAELA_tv->Tm)));
 /* line 501: */
ZGDAELA_gettype( (*(&(OIDAELA_tv->T))), &QIDAELA );
PIDAELA.T = QIDAELA;
 /* line 502: */
RIDAELA = A_HEAP(A68_198 ) ;
(*RIDAELA) = PIDAELA ;
NHDAELA = A_UNITE(SIDAELA,mode4,4,RIDAELA);
break;
default: 
 /* line 503: */
NHDAELA = Type;
break;
} 
} 
A_PROC_EXIT(gettype);
*ReturnedValue = (NHDAELA);
return;
} 
#undef NL

A68_VOID  VIDAELA_primtype(A68_204  T, A68_BOOL  Simp_tvar, A68_204  *ReturnedValue)
{ 
A68_204  WIDAELA;  /* united object - for case conformity */
A68_195 * XIDAELA_n;
A68_204  YIDAELA;  /* clause result */
A68_204  ZIDAELA;  /* avoid structure result */
A68_200 * AJDAELA_tb;
A68_204  BJDAELA;  /* avoid structure result */
A68_198 * CJDAELA_tv;
A68_204  DJDAELA;  /* avoid structure result */
A68_196 * EJDAELA_s;
A68_196 * FJDAELA_st;
A68_196 * GJDAELA_new;
A68_196 ** HJDAELA_next;
A68_196  IJDAELA;  /* collateral clause result */
A68_204  JJDAELA;  /* avoid structure result */
A68_196 * KJDAELA;  /* YIELD */
A68_204  LJDAELA;  /* OPERATORS - mode -> union mode */
A68_197 * MJDAELA_r;
A68_197  NJDAELA;  /* collateral clause result */
A68_204  OJDAELA;  /* avoid structure result */
A68_197 * PJDAELA;  /* YIELD */
A68_204  QJDAELA;  /* OPERATORS - mode -> union mode */
A68_201 * RJDAELA_tg;
A68_201  SJDAELA;  /* collateral clause result */
A68_204  TJDAELA;  /* avoid structure result */
A68_201 * UJDAELA;  /* YIELD */
A68_204  VJDAELA;  /* OPERATORS - mode -> union mode */
A68_199 * WJDAELA_ft;
A68_199  XJDAELA;  /* collateral clause result */
A68_204  YJDAELA;  /* avoid structure result */
A68_204  ZJDAELA;  /* avoid structure result */
A68_199 * AKDAELA;  /* YIELD */
A68_204  BKDAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(primtype);
 /* line 507: */
 /* line 508: */
WIDAELA = T ;
switch ( WIDAELA.mode )
{ 
case 2: /* REF STRUCT(REF MODE239,INT,MODE204)  */
XIDAELA_n = (WIDAELA.data.mode2);
 /* line 509: */
VIDAELA_primtype( (*(&(XIDAELA_n->T))), Simp_tvar, &ZIDAELA );
YIDAELA = ZIDAELA;
break;
case 8: /* REF STRUCT(MODE204)  */
AJDAELA_tb = (WIDAELA.data.mode8);
 /* line 510: */
VIDAELA_primtype( (*(&(AJDAELA_tb->Tbracket))), Simp_tvar, &BJDAELA );
YIDAELA = BJDAELA;
break;
case 4: /* REF STRUCT(REF MODE167,MODE204)  */
CJDAELA_tv = (WIDAELA.data.mode4);
 /* line 511: */
if ( Simp_tvar )
{ 
VIDAELA_primtype( (*(&(CJDAELA_tv->T))), Simp_tvar, &DJDAELA );
YIDAELA = DJDAELA;
} 
else
{ 
 /* line 512: */
YIDAELA = T;
} 
break;
case 3: /* REF STRUCT(MODE204,REF MODE196)  */
EJDAELA_s = (WIDAELA.data.mode3);
 /* line 513: */
{ 
FJDAELA_st = EJDAELA_s;
 /* line 514: */
GJDAELA_new = DQCAELA_nilst;
 /* line 515: */
HJDAELA_next = (&GJDAELA_new);
 /* line 516: */
for ( ;; )
{ 
 /* line 517: */
if ( !((FJDAELA_st!=DQCAELA_nilst)) ) break;
 /* line 518: */
VIDAELA_primtype( (*(&(FJDAELA_st->T))), Simp_tvar, &JJDAELA );
IJDAELA.T = JJDAELA;
IJDAELA.Rest = (A68_196 *)A68_NIL;
KJDAELA = A_HEAP(A68_196 ) ;
(*KJDAELA) = IJDAELA ;
(*HJDAELA_next) = KJDAELA;
 /* line 519: */
HJDAELA_next = (&((*HJDAELA_next)->Rest));
 /* line 520: */
 /* line 521: */
FJDAELA_st = (*(&(FJDAELA_st->Rest)));
}
 /* line 522: */
 /* line 523: */
 /* line 524: */
YIDAELA = A_UNITE(LJDAELA,mode3,3,GJDAELA_new);
} 
break;
case 7: /* REF STRUCT(MODE204,MODE182)  */
MJDAELA_r = (WIDAELA.data.mode7);
 /* line 525: */
VIDAELA_primtype( (*(&(MJDAELA_r->T))), Simp_tvar, &OJDAELA );
NJDAELA.T = OJDAELA;
NJDAELA.Size = (*(&(MJDAELA_r->Size)));
 /* line 526: */
PJDAELA = A_HEAP(A68_197 ) ;
(*PJDAELA) = NJDAELA ;
YIDAELA = A_UNITE(QJDAELA,mode7,7,PJDAELA);
break;
case 9: /* REF STRUCT(MODE182,MODE204)  */
RJDAELA_tg = (WIDAELA.data.mode9);
 /* line 527: */
SJDAELA.Size = (*(&(RJDAELA_tg->Size)));
VIDAELA_primtype( (*(&(RJDAELA_tg->Tstring))), Simp_tvar, &TJDAELA );
SJDAELA.Tstring = TJDAELA;
 /* line 528: */
UJDAELA = A_HEAP(A68_201 ) ;
(*UJDAELA) = SJDAELA ;
YIDAELA = A_UNITE(VJDAELA,mode9,9,UJDAELA);
break;
case 6: /* REF STRUCT(MODE204,MODE204)  */
WJDAELA_ft = (WIDAELA.data.mode6);
 /* line 529: */
 /* line 530: */
VIDAELA_primtype( (*(&(WJDAELA_ft->From))), Simp_tvar, &YJDAELA );
XJDAELA.From = YJDAELA;
 /* line 531: */
VIDAELA_primtype( (*(&(WJDAELA_ft->To))), Simp_tvar, &ZJDAELA );
XJDAELA.To = ZJDAELA;
 /* line 532: */
AKDAELA = A_HEAP(A68_199 ) ;
(*AKDAELA) = XJDAELA ;
YIDAELA = A_UNITE(BKDAELA,mode6,6,AKDAELA);
break;
default: 
YIDAELA = T;
break;
} 
A_PROC_EXIT(primtype);
*ReturnedValue = (YIDAELA);
return;
} 
#undef NL

A68_180 * DKDAELA_makeibracket(A68_182  Int)
{ 
A68_180 * EKDAELA_ibr;
A68_182 * FKDAELA;  /* YIELD */
A68_180 * GKDAELA;  /* clause result */
A_PROC_ENTRY(makeibracket);
 /* line 537: */
{ 
EKDAELA_ibr = (A_HEAP(A68_180 ));
FKDAELA = (&(EKDAELA_ibr->Ibracket)) ;
(*FKDAELA) = Int;
GKDAELA = EKDAELA_ibr;
} 
A_PROC_EXIT(makeibracket);
return( GKDAELA );
} 
#undef NL

A68_200 * IKDAELA_maketbracket(A68_204  Type)
{ 
A68_200 * JKDAELA_tbr;
A68_204 * KKDAELA;  /* YIELD */
A68_200 * LKDAELA;  /* clause result */
A_PROC_ENTRY(maketbracket);
 /* line 540: */
{ 
JKDAELA_tbr = (A_HEAP(A68_200 ));
KKDAELA = (&(JKDAELA_tbr->Tbracket)) ;
(*KKDAELA) = Type;
LKDAELA = JKDAELA_tbr;
} 
A_PROC_EXIT(maketbracket);
return( LKDAELA );
} 
#undef NL

A68_250 * NKDAELA_makecbracket(A68_261  Ctype)
{ 
A68_250 * OKDAELA_cbr;
A68_261 * PKDAELA;  /* YIELD */
A68_250 * QKDAELA;  /* clause result */
A_PROC_ENTRY(makecbracket);
 /* line 543: */
{ 
OKDAELA_cbr = (A_HEAP(A68_250 ));
PKDAELA = (&(OKDAELA_cbr->Cbracket)) ;
(*PKDAELA) = Ctype;
QKDAELA = OKDAELA_cbr;
} 
A_PROC_EXIT(makecbracket);
return( QKDAELA );
} 
#undef NL

A68_231 * SKDAELA_makeabracket(A68_234  Attr)
{ 
A68_231 * TKDAELA_abr;
A68_234 * UKDAELA;  /* YIELD */
A68_231 * VKDAELA;  /* clause result */
A_PROC_ENTRY(makeabracket);
 /* line 546: */
{ 
TKDAELA_abr = (A_HEAP(A68_231 ));
UKDAELA = (&(TKDAELA_abr->Abracket)) ;
(*UKDAELA) = Attr;
VKDAELA = TKDAELA_abr;
} 
A_PROC_EXIT(makeabracket);
return( VKDAELA );
} 
#undef NL

A68_VOID  XKDAELA_makeintid(A68_182  I, A68_206  *ReturnedValue)
{ 
A68_206 * YKDAELA_id;
A68_182 * ZKDAELA;  /* YIELD */
A68_206  ALDAELA;  /* clause result */
A_PROC_ENTRY(makeintid);
 /* line 549: */
{ 
YKDAELA_id = (A_HEAP(A68_206 ));
ZKDAELA = (&(YKDAELA_id->I)) ;
(*ZKDAELA) = I;
ALDAELA = (*YKDAELA_id);
} 
A_PROC_EXIT(makeintid);
*ReturnedValue = (ALDAELA);
return;
} 
#undef NL

A68_VOID  CLDAELA_maketypeid(A68_204  T, A68_205  *ReturnedValue)
{ 
A68_205 * DLDAELA_td;
A68_204 * ELDAELA;  /* YIELD */
A68_205  FLDAELA;  /* clause result */
A_PROC_ENTRY(maketypeid);
 /* line 552: */
{ 
DLDAELA_td = (A_HEAP(A68_205 ));
ELDAELA = (&(DLDAELA_td->T)) ;
(*ELDAELA) = T;
FLDAELA = (*DLDAELA_td);
} 
A_PROC_EXIT(maketypeid);
*ReturnedValue = (FLDAELA);
return;
} 
#undef NL

A68_VOID  HLDAELA_makectypeid(A68_261  Ct, A68_207  *ReturnedValue)
{ 
A68_207 * ILDAELA_ctd;
A68_261 * JLDAELA;  /* YIELD */
A68_207  KLDAELA;  /* clause result */
A_PROC_ENTRY(makectypeid);
 /* line 555: */
{ 
ILDAELA_ctd = (A_HEAP(A68_207 ));
JLDAELA = (&(ILDAELA_ctd->Ct)) ;
(*JLDAELA) = Ct;
KLDAELA = (*ILDAELA_ctd);
} 
A_PROC_EXIT(makectypeid);
*ReturnedValue = (KLDAELA);
return;
} 
#undef NL

A68_VOID  MLDAELA_makeattrid(A68_234  At, A68_235  *ReturnedValue)
{ 
A68_235 * NLDAELA_atd;
A68_234 * OLDAELA;  /* YIELD */
A68_235  PLDAELA;  /* clause result */
A_PROC_ENTRY(makeattrid);
 /* line 558: */
{ 
NLDAELA_atd = (A_HEAP(A68_235 ));
OLDAELA = (&(NLDAELA_atd->A)) ;
(*OLDAELA) = At;
PLDAELA = (*NLDAELA_atd);
} 
A_PROC_EXIT(makeattrid);
*ReturnedValue = (PLDAELA);
return;
} 
#undef NL

A68_233 * RLDAELA_makeattrvar(A68_167 * M)
{ 
A68_233 * SLDAELA_av;
A68_167 ** TLDAELA;  /* YIELD */
A68_233 * ULDAELA;  /* clause result */
A_PROC_ENTRY(makeattrvar);
 /* line 561: */
{ 
SLDAELA_av = (A_HEAP(A68_233 ));
TLDAELA = (&(SLDAELA_av->Am)) ;
(*TLDAELA) = M;
ULDAELA = SLDAELA_av;
} 
A_PROC_EXIT(makeattrvar);
return( ULDAELA );
} 
#undef NL

A68_173 * WLDAELA_makeintvar(A68_167 * M)
{ 
A68_173 * XLDAELA_iv;
A68_167 ** YLDAELA;  /* YIELD */
A68_173 * ZLDAELA;  /* clause result */
A_PROC_ENTRY(makeintvar);
 /* line 564: */
{ 
XLDAELA_iv = (A_HEAP(A68_173 ));
YLDAELA = (&(XLDAELA_iv->Im)) ;
(*YLDAELA) = M;
ZLDAELA = XLDAELA_iv;
} 
A_PROC_EXIT(makeintvar);
return( ZLDAELA );
} 
#undef NL

A68_249 * BMDAELA_makecquery(A68_204  T)
{ 
A68_249 * CMDAELA_cq;
A68_204 * DMDAELA;  /* YIELD */
A68_249 * EMDAELA;  /* clause result */
A_PROC_ENTRY(makecquery);
 /* line 567: */
{ 
CMDAELA_cq = (A_HEAP(A68_249 ));
DMDAELA = (&(CMDAELA_cq->Querytype)) ;
(*DMDAELA) = T;
EMDAELA = CMDAELA_cq;
} 
A_PROC_EXIT(makecquery);
return( EMDAELA );
} 
#undef NL

A68_VOID  HMDAELA_print_joinup(A68_223 * Join, A68_INT  Sp)
{ 
A68_130  MMDAELA_spaces;   /* proc value of non-global proc */
A68_223  UMDAELA;  /* united object - for case conformity */
A68_221 * VMDAELA_ji;
A68_333  WMDAELA;  /* collateral clause result */
A68_52  ZMDAELA;  /* OPERATORS - mode -> union mode */
A68_VC  ANDAELA;  /* YIELD */
A68_52  BNDAELA;  /* OPERATORS - mode -> union mode */
A68_56  CNDAELA;  /* procedure value */
A68_85  DNDAELA;  /* OPERATORS - istruct -> vector */
A68_218 * ENDAELA_jf;
A68_52  HNDAELA;  /* OPERATORS - mode -> union mode */
A68_VC  INDAELA;  /* YIELD */
A68_85  JNDAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_333  KNDAELA;  /* collateral clause result */
A68_52  NNDAELA;  /* OPERATORS - mode -> union mode */
A68_VC  ONDAELA;  /* YIELD */
A68_52  PNDAELA;  /* OPERATORS - mode -> union mode */
A68_56  QNDAELA;  /* procedure value */
A68_85  RNDAELA;  /* OPERATORS - istruct -> vector */
A68_333  SNDAELA;  /* collateral clause result */
A68_52  VNDAELA;  /* OPERATORS - mode -> union mode */
A68_VC  WNDAELA;  /* YIELD */
A68_52  XNDAELA;  /* OPERATORS - mode -> union mode */
A68_56  YNDAELA;  /* procedure value */
A68_85  ZNDAELA;  /* OPERATORS - istruct -> vector */
A68_333  AODAELA;  /* collateral clause result */
A68_52  DODAELA;  /* OPERATORS - mode -> union mode */
A68_VC  EODAELA;  /* YIELD */
A68_52  FODAELA;  /* OPERATORS - mode -> union mode */
A68_56  GODAELA;  /* procedure value */
A68_85  HODAELA;  /* OPERATORS - istruct -> vector */
A68_333  IODAELA;  /* collateral clause result */
A68_52  LODAELA;  /* OPERATORS - mode -> union mode */
A68_VC  MODAELA;  /* YIELD */
A68_52  NODAELA;  /* OPERATORS - mode -> union mode */
A68_56  OODAELA;  /* procedure value */
A68_85  PODAELA;  /* OPERATORS - istruct -> vector */
A68_333  QODAELA;  /* collateral clause result */
A68_52  TODAELA;  /* OPERATORS - mode -> union mode */
A68_VC  UODAELA;  /* YIELD */
A68_52  VODAELA;  /* OPERATORS - mode -> union mode */
A68_56  WODAELA;  /* procedure value */
A68_85  XODAELA;  /* OPERATORS - istruct -> vector */
A68_217 * YODAELA_st;
A68_333  ZODAELA;  /* collateral clause result */
A68_52  CPDAELA;  /* OPERATORS - mode -> union mode */
A68_VC  DPDAELA;  /* YIELD */
A68_52  EPDAELA;  /* OPERATORS - mode -> union mode */
A68_56  FPDAELA;  /* procedure value */
A68_85  GPDAELA;  /* OPERATORS - istruct -> vector */
A68_217 * HPDAELA_jst;
A68_219 * IPDAELA_jr;
A68_335  JPDAELA;  /* collateral clause result */
A68_52  MPDAELA;  /* OPERATORS - mode -> union mode */
A68_VC  NPDAELA;  /* YIELD */
A68_52  OPDAELA;  /* OPERATORS - mode -> union mode */
A68_INT  PPDAELA;  /* YIELD */
A68_52  QPDAELA;  /* OPERATORS - mode -> union mode */
A68_56  RPDAELA;  /* procedure value */
A68_85  SPDAELA;  /* OPERATORS - istruct -> vector */
A68_INT  TPDAELA_i;
A68_INT  UPDAELA;  /* to part of loop */
A68_220  VPDAELA;  /* OPERATORS - simple index */
A68_216 * WPDAELA_b;
A68_333  XPDAELA;  /* collateral clause result */
A68_52  AQDAELA;  /* OPERATORS - mode -> union mode */
A68_VC  BQDAELA;  /* YIELD */
A68_52  CQDAELA;  /* OPERATORS - mode -> union mode */
A68_56  DQDAELA;  /* procedure value */
A68_85  EQDAELA;  /* OPERATORS - istruct -> vector */
A68_333  FQDAELA;  /* collateral clause result */
A68_52  IQDAELA;  /* OPERATORS - mode -> union mode */
A68_VC  JQDAELA;  /* YIELD */
A68_52  KQDAELA;  /* OPERATORS - mode -> union mode */
A68_56  LQDAELA;  /* procedure value */
A68_85  MQDAELA;  /* OPERATORS - istruct -> vector */
A68_333  NQDAELA;  /* collateral clause result */
A68_52  QQDAELA;  /* OPERATORS - mode -> union mode */
A68_VC  RQDAELA;  /* YIELD */
A68_52  SQDAELA;  /* OPERATORS - mode -> union mode */
A68_56  TQDAELA;  /* procedure value */
A68_85  UQDAELA;  /* OPERATORS - istruct -> vector */
A68_333  VQDAELA;  /* collateral clause result */
A68_52  YQDAELA;  /* OPERATORS - mode -> union mode */
A68_VC  ZQDAELA;  /* YIELD */
A68_52  ARDAELA;  /* OPERATORS - mode -> union mode */
A68_56  BRDAELA;  /* procedure value */
A68_85  CRDAELA;  /* OPERATORS - istruct -> vector */
A68_333  DRDAELA;  /* collateral clause result */
A68_52  GRDAELA;  /* OPERATORS - mode -> union mode */
A68_VC  HRDAELA;  /* YIELD */
A68_52  IRDAELA;  /* OPERATORS - mode -> union mode */
A68_56  JRDAELA;  /* procedure value */
A68_85  KRDAELA;  /* OPERATORS - istruct -> vector */
A68_171  LRDAELA_f;
A68_333  MRDAELA;  /* collateral clause result */
A68_52  PRDAELA;  /* OPERATORS - mode -> union mode */
A68_VC  QRDAELA;  /* YIELD */
A68_52  RRDAELA;  /* OPERATORS - mode -> union mode */
A68_56  SRDAELA;  /* procedure value */
A68_85  TRDAELA;  /* OPERATORS - istruct -> vector */
A68_333  URDAELA;  /* collateral clause result */
A68_52  XRDAELA;  /* OPERATORS - mode -> union mode */
A68_VC  YRDAELA;  /* YIELD */
A68_52  ZRDAELA;  /* OPERATORS - mode -> union mode */
A68_56  ASDAELA;  /* procedure value */
A68_85  BSDAELA;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(print_joinup);
 /* line 592: */
{ 
 /* line 593: */
A_CLOSURE( MMDAELA_spaces, NMDAELA_spaces, OMDAELA_spaces );
 /* line 594: */
A_CALLPROC(MMDAELA_spaces,(Sp),(Sp,(MMDAELA_spaces).nonlocals));
 /* line 595: */
 /* line 596: */
UMDAELA = (*Join) ;
switch ( UMDAELA.mode )
{ 
case 4: /* REF STRUCT(MODE223,MODE223)  */
VMDAELA_ji = (UMDAELA.data.mode4);
{ 
ANDAELA = YMDAELA ;
WMDAELA.data[0] = A_UNITE(ZMDAELA,mode7,7,ANDAELA);
CNDAELA.fn.fn_global = LRAAOSL_newline;
CNDAELA.nonlocals = A68_NIL;
WMDAELA.data[1] = A_UNITE(BNDAELA,mode12,12,CNDAELA);
KMDAELA_print(A_HISVEC(DNDAELA,WMDAELA,2,A68_52 ));
 /* line 597: */
HMDAELA_print_joinup((&(VMDAELA_ji->Source)), (Sp+2));
 /* line 598: */
 /* line 599: */
 /* line 600: */
HMDAELA_print_joinup((&(VMDAELA_ji->Sink)), (Sp+4));
} 
break;
case 2: /* REF STRUCT(MODE216)  */
ENDAELA_jf = (UMDAELA.data.mode2);
{ 
INDAELA = GNDAELA ;
KMDAELA_print(A_HVEC(JNDAELA,A_UNITE(HNDAELA,mode7,7,INDAELA),A68_52 ));
 /* line 601: */
if ( ((*(&((&(ENDAELA_jf->Joined))->J)))==1) )
{ 
ONDAELA = MNDAELA ;
KNDAELA.data[0] = A_UNITE(NNDAELA,mode7,7,ONDAELA);
QNDAELA.fn.fn_global = LRAAOSL_newline;
QNDAELA.nonlocals = A68_NIL;
KNDAELA.data[1] = A_UNITE(PNDAELA,mode12,12,QNDAELA);
 /* line 602: */
KMDAELA_print(A_HISVEC(RNDAELA,KNDAELA,2,A68_52 ));
} 
else
{ 
if ( ((*(&((&(ENDAELA_jf->Joined))->J)))==2) )
{ 
WNDAELA = UNDAELA ;
SNDAELA.data[0] = A_UNITE(VNDAELA,mode7,7,WNDAELA);
YNDAELA.fn.fn_global = LRAAOSL_newline;
YNDAELA.nonlocals = A68_NIL;
SNDAELA.data[1] = A_UNITE(XNDAELA,mode12,12,YNDAELA);
 /* line 603: */
KMDAELA_print(A_HISVEC(ZNDAELA,SNDAELA,2,A68_52 ));
} 
else
{ 
if ( ((*(&((&(ENDAELA_jf->Joined))->J)))==3) )
{ 
EODAELA = CODAELA ;
AODAELA.data[0] = A_UNITE(DODAELA,mode7,7,EODAELA);
GODAELA.fn.fn_global = LRAAOSL_newline;
GODAELA.nonlocals = A68_NIL;
AODAELA.data[1] = A_UNITE(FODAELA,mode12,12,GODAELA);
 /* line 604: */
KMDAELA_print(A_HISVEC(HODAELA,AODAELA,2,A68_52 ));
} 
else
{ 
if ( ((*(&((&(ENDAELA_jf->Joined))->J)))==4) )
{ 
MODAELA = KODAELA ;
IODAELA.data[0] = A_UNITE(LODAELA,mode7,7,MODAELA);
OODAELA.fn.fn_global = LRAAOSL_newline;
OODAELA.nonlocals = A68_NIL;
IODAELA.data[1] = A_UNITE(NODAELA,mode12,12,OODAELA);
 /* line 605: */
KMDAELA_print(A_HISVEC(PODAELA,IODAELA,2,A68_52 ));
} 
else
{ 
UODAELA = SODAELA ;
QODAELA.data[0] = A_UNITE(TODAELA,mode7,7,UODAELA);
WODAELA.fn.fn_global = LRAAOSL_newline;
WODAELA.nonlocals = A68_NIL;
QODAELA.data[1] = A_UNITE(VODAELA,mode12,12,WODAELA);
 /* line 606: */
KMDAELA_print(A_HISVEC(XODAELA,QODAELA,2,A68_52 ));
} 
} 
} 
} 
} 
break;
case 1: /* REF STRUCT(MODE223,REF MODE217)  */
YODAELA_st = (UMDAELA.data.mode1);
{ 
DPDAELA = BPDAELA ;
ZODAELA.data[0] = A_UNITE(CPDAELA,mode7,7,DPDAELA);
FPDAELA.fn.fn_global = LRAAOSL_newline;
FPDAELA.nonlocals = A68_NIL;
ZODAELA.data[1] = A_UNITE(EPDAELA,mode12,12,FPDAELA);
KMDAELA_print(A_HISVEC(GPDAELA,ZODAELA,2,A68_52 ));
 /* line 607: */
HPDAELA_jst = YODAELA_st;
 /* line 608: */
for ( ;; )
{ 
 /* line 609: */
if ( !((HPDAELA_jst!=PQCAELA_niljoinst)) ) break;
HMDAELA_print_joinup((&(HPDAELA_jst->Jst)), (Sp+2));
 /* line 610: */
 /* line 611: */
HPDAELA_jst = (*(&(HPDAELA_jst->Rest)));
}
 /* line 612: */
 /* line 613: */
} 
break;
case 3: /* REF STRUCT(REF MODE220)  */
IPDAELA_jr = (UMDAELA.data.mode3);
{ 
NPDAELA = LPDAELA ;
JPDAELA.data[0] = A_UNITE(MPDAELA,mode7,7,NPDAELA);
PPDAELA = (*(&(IPDAELA_jr->Jrow))).upb ;
JPDAELA.data[1] = A_UNITE(OPDAELA,mode1,1,PPDAELA);
RPDAELA.fn.fn_global = LRAAOSL_newline;
RPDAELA.nonlocals = A68_NIL;
JPDAELA.data[2] = A_UNITE(QPDAELA,mode12,12,RPDAELA);
KMDAELA_print(A_HISVEC(SPDAELA,JPDAELA,3,A68_52 ));
 /* line 614: */
 /* line 615: */
UPDAELA = (*(&(IPDAELA_jr->Jrow))).upb;
for ( TPDAELA_i = 1;
TPDAELA_i <= UPDAELA;
TPDAELA_i += 1 )
{ 
VPDAELA = (*(&(IPDAELA_jr->Jrow))) ;
HMDAELA_print_joinup((&A_VINDEX(VPDAELA,TPDAELA_i)), (Sp+2));
}
 /* line 616: */
 /* line 617: */
} 
break;
case 5: /* REF STRUCT(INT)  */
WPDAELA_b = (UMDAELA.data.mode5);
if ( ((*(&(WPDAELA_b->J)))==1) )
{ 
BQDAELA = ZPDAELA ;
XPDAELA.data[0] = A_UNITE(AQDAELA,mode7,7,BQDAELA);
DQDAELA.fn.fn_global = LRAAOSL_newline;
DQDAELA.nonlocals = A68_NIL;
XPDAELA.data[1] = A_UNITE(CQDAELA,mode12,12,DQDAELA);
 /* line 618: */
KMDAELA_print(A_HISVEC(EQDAELA,XPDAELA,2,A68_52 ));
} 
else
{ 
if ( ((*(&(WPDAELA_b->J)))==2) )
{ 
JQDAELA = HQDAELA ;
FQDAELA.data[0] = A_UNITE(IQDAELA,mode7,7,JQDAELA);
LQDAELA.fn.fn_global = LRAAOSL_newline;
LQDAELA.nonlocals = A68_NIL;
FQDAELA.data[1] = A_UNITE(KQDAELA,mode12,12,LQDAELA);
 /* line 619: */
KMDAELA_print(A_HISVEC(MQDAELA,FQDAELA,2,A68_52 ));
} 
else
{ 
if ( ((*(&(WPDAELA_b->J)))==3) )
{ 
RQDAELA = PQDAELA ;
NQDAELA.data[0] = A_UNITE(QQDAELA,mode7,7,RQDAELA);
TQDAELA.fn.fn_global = LRAAOSL_newline;
TQDAELA.nonlocals = A68_NIL;
NQDAELA.data[1] = A_UNITE(SQDAELA,mode12,12,TQDAELA);
 /* line 620: */
KMDAELA_print(A_HISVEC(UQDAELA,NQDAELA,2,A68_52 ));
} 
else
{ 
if ( ((*(&(WPDAELA_b->J)))==4) )
{ 
ZQDAELA = XQDAELA ;
VQDAELA.data[0] = A_UNITE(YQDAELA,mode7,7,ZQDAELA);
BRDAELA.fn.fn_global = LRAAOSL_newline;
BRDAELA.nonlocals = A68_NIL;
VQDAELA.data[1] = A_UNITE(ARDAELA,mode12,12,BRDAELA);
 /* line 621: */
KMDAELA_print(A_HISVEC(CRDAELA,VQDAELA,2,A68_52 ));
} 
else
{ 
HRDAELA = FRDAELA ;
DRDAELA.data[0] = A_UNITE(GRDAELA,mode7,7,HRDAELA);
JRDAELA.fn.fn_global = LRAAOSL_newline;
JRDAELA.nonlocals = A68_NIL;
DRDAELA.data[1] = A_UNITE(IRDAELA,mode12,12,JRDAELA);
 /* line 622: */
KMDAELA_print(A_HISVEC(KRDAELA,DRDAELA,2,A68_52 ));
} 
} 
} 
} 
break;
case 7: /* STRUCT(INT)  */
LRDAELA_f = (UMDAELA.data.mode7);
QRDAELA = ORDAELA ;
MRDAELA.data[0] = A_UNITE(PRDAELA,mode7,7,QRDAELA);
SRDAELA.fn.fn_global = LRAAOSL_newline;
SRDAELA.nonlocals = A68_NIL;
MRDAELA.data[1] = A_UNITE(RRDAELA,mode12,12,SRDAELA);
 /* line 623: */
KMDAELA_print(A_HISVEC(TRDAELA,MRDAELA,2,A68_52 ));
break;
default: 
YRDAELA = WRDAELA ;
URDAELA.data[0] = A_UNITE(XRDAELA,mode7,7,YRDAELA);
ASDAELA.fn.fn_global = LRAAOSL_newline;
ASDAELA.nonlocals = A68_NIL;
URDAELA.data[1] = A_UNITE(ZRDAELA,mode12,12,ASDAELA);
 /* line 624: */
 /* line 625: */
KMDAELA_print(A_HISVEC(BSDAELA,URDAELA,2,A68_52 ));
break;
} 
} 
A_PROC_EXIT(print_joinup);
return;
} 
#undef NL

A68_VOID  DSDAELA_uncheckedint(A68_182  A, A68_182  *ReturnedValue)
{ 
A68_182  ESDAELA;  /* united object - for case conformity */
A68_172 * FSDAELA_ic;
A68_182  GSDAELA;  /* clause result */
A68_182  HSDAELA;  /* avoid structure result */
A68_174 * ISDAELA_idop;
A68_174  JSDAELA;  /* collateral clause result */
A68_182  KSDAELA;  /* avoid structure result */
A68_182  LSDAELA;  /* avoid structure result */
A68_174 * MSDAELA;  /* YIELD */
A68_182  NSDAELA;  /* OPERATORS - mode -> union mode */
A68_175 * OSDAELA_imop;
A68_175  PSDAELA;  /* collateral clause result */
A68_182  QSDAELA;  /* avoid structure result */
A68_175 * RSDAELA;  /* YIELD */
A68_182  SSDAELA;  /* OPERATORS - mode -> union mode */
A68_177 * TSDAELA_icond;
A68_177  USDAELA;  /* collateral clause result */
A68_182  VSDAELA;  /* avoid structure result */
A68_182  WSDAELA;  /* avoid structure result */
A68_182  XSDAELA;  /* avoid structure result */
A68_177 * YSDAELA;  /* YIELD */
A68_182  ZSDAELA;  /* OPERATORS - mode -> union mode */
A68_179 * ATDAELA_idef;
A68_179  BTDAELA;  /* collateral clause result */
A68_182  CTDAELA;  /* avoid structure result */
A68_179 * DTDAELA;  /* YIELD */
A68_182  ETDAELA;  /* OPERATORS - mode -> union mode */
A68_180 * FTDAELA_ib;
A68_182  GTDAELA;  /* avoid structure result */
A68_180 * HTDAELA;  /* YIELD */
A68_182  ITDAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(uncheckedint);
 /* line 628: */
 /* line 629: */
{ 
 /* line 630: */
ESDAELA = A ;
switch ( ESDAELA.mode )
{ 
case 5: /* REF STRUCT(MODE182,MODE182,INT)  */
FSDAELA_ic = (ESDAELA.data.mode5);
 /* line 631: */
DSDAELA_uncheckedint( (*(&(FSDAELA_ic->Integer))), &HSDAELA );
GSDAELA = HSDAELA;
break;
case 7: /* REF STRUCT(INT,MODE182,MODE182)  */
ISDAELA_idop = (ESDAELA.data.mode7);
 /* line 632: */
JSDAELA.Opno = (*(&(ISDAELA_idop->Opno)));
DSDAELA_uncheckedint( (*(&(ISDAELA_idop->L))), &KSDAELA );
JSDAELA.L = KSDAELA;
DSDAELA_uncheckedint( (*(&(ISDAELA_idop->R))), &LSDAELA );
JSDAELA.R = LSDAELA;
 /* line 633: */
MSDAELA = A_HEAP(A68_174 ) ;
(*MSDAELA) = JSDAELA ;
GSDAELA = A_UNITE(NSDAELA,mode7,7,MSDAELA);
break;
case 8: /* REF STRUCT(INT,MODE182)  */
OSDAELA_imop = (ESDAELA.data.mode8);
 /* line 634: */
PSDAELA.Opno = (*(&(OSDAELA_imop->Opno)));
DSDAELA_uncheckedint( (*(&(OSDAELA_imop->R))), &QSDAELA );
PSDAELA.R = QSDAELA;
 /* line 635: */
RSDAELA = A_HEAP(A68_175 ) ;
(*RSDAELA) = PSDAELA ;
GSDAELA = A_UNITE(SSDAELA,mode8,8,RSDAELA);
break;
case 9: /* REF STRUCT(MODE182,MODE182,MODE182)  */
TSDAELA_icond = (ESDAELA.data.mode9);
 /* line 636: */
DSDAELA_uncheckedint( (*(&(TSDAELA_icond->Cond))), &VSDAELA );
USDAELA.Cond = VSDAELA;
 /* line 637: */
DSDAELA_uncheckedint( (*(&(TSDAELA_icond->T))), &WSDAELA );
USDAELA.T = WSDAELA;
DSDAELA_uncheckedint( (*(&(TSDAELA_icond->F))), &XSDAELA );
USDAELA.F = XSDAELA;
 /* line 638: */
YSDAELA = A_HEAP(A68_177 ) ;
(*YSDAELA) = USDAELA ;
GSDAELA = A_UNITE(ZSDAELA,mode9,9,YSDAELA);
break;
case 12: /* REF STRUCT(REF MODE239,INT,MODE182)  */
ATDAELA_idef = (ESDAELA.data.mode12);
BTDAELA.Idinfo = (*(&(ATDAELA_idef->Idinfo)));
 /* line 639: */
BTDAELA.Intno = (*(&(ATDAELA_idef->Intno)));
DSDAELA_uncheckedint( (*(&(ATDAELA_idef->I))), &CTDAELA );
BTDAELA.I = CTDAELA;
 /* line 640: */
DTDAELA = A_HEAP(A68_179 ) ;
(*DTDAELA) = BTDAELA ;
GSDAELA = A_UNITE(ETDAELA,mode12,12,DTDAELA);
break;
case 13: /* REF STRUCT(MODE182)  */
FTDAELA_ib = (ESDAELA.data.mode13);
 /* line 641: */
 /* line 642: */
 /* line 643: */
DSDAELA_uncheckedint( (*(&(FTDAELA_ib->Ibracket))), &GTDAELA );
HTDAELA = A_HEAP(A68_180 ) ;
(*HTDAELA) = (*DKDAELA_makeibracket(GTDAELA)) ;
GSDAELA = A_UNITE(ITDAELA,mode13,13,HTDAELA);
break;
default: 
 /* line 644: */
GSDAELA = A;
break;
} 
} 
A_PROC_EXIT(uncheckedint);
*ReturnedValue = (GSDAELA);
return;
} 
#undef NL

A68_176 * KTDAELA_get_intvarmult(A68_240 * Ids)
{ 
A68_238  LTDAELA;  /* united object - for case conformity */
A68_206  MTDAELA_id;
A68_182  NTDAELA;  /* united object - for case conformity */
A68_176 * OTDAELA_iv;
A68_176 * PTDAELA;  /* clause result */
A68_176 * STDAELA;  /* OPERATORS - skip to mode */
A68_176 * VTDAELA;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(get_intvarmult);
 /* line 647: */
 /* line 648: */
LTDAELA = (*(&((*(&(Ids->Idinfo)))->U))) ;
switch ( LTDAELA.mode )
{ 
case 1: /* STRUCT(MODE182)  */
MTDAELA_id = (LTDAELA.data.mode1);
 /* line 649: */
 /* line 650: */
NTDAELA = MTDAELA_id.I ;
switch ( NTDAELA.mode )
{ 
case 10: /* REF STRUCT(INT,MODE182,MODE182,MODE182)  */
OTDAELA_iv = (NTDAELA.data.mode10);
 /* line 651: */
PTDAELA = OTDAELA_iv;
break;
default: 
NKDAOST_sysfault(RTDAELA);
 /* line 652: */
 /* line 653: */
PTDAELA = STDAELA;
break;
} 
break;
default: 
NKDAOST_sysfault(UTDAELA);
 /* line 654: */
PTDAELA = VTDAELA;
break;
} 
A_PROC_EXIT(get_intvarmult);
return( PTDAELA );
} 
#undef NL

A68_BOOL  YTDAELA_joinequal(A68_216  Lhs, A68_216  Rhs)
{ 
A68_BOOL  ZTDAELA;  /* clause result */
A_PROC_ENTRY(joinequal);
ZTDAELA = (Lhs.J==Rhs.J);
A_PROC_EXIT(joinequal);
return( ZTDAELA );
} 
#undef NL

A68_VOID  BUDAELA_ddecs_type(A68_262 * Decs, A68_204  *ReturnedValue)
{ 
A68_204  CUDAELA;  /* clause result */
A68_204  DUDAELA;  /* OPERATORS - mode -> union mode */
A68_240 * EUDAELA_il;
A68_262 * FUDAELA_d;
A68_196 * GUDAELA_s;
A68_196  HUDAELA;  /* collateral clause result */
A68_196 * IUDAELA;  /* YIELD */
A68_204  JUDAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(ddecs_type);
 /* line 660: */
 /* line 661: */
 /* line 662: */
if ( (Decs==FQCAELA_nildecs) )
{ 
CUDAELA = A_UNITE(DUDAELA,mode12,12,NRCAELA_typevoid);
} 
else
{ 
 /* line 663: */
FUDAELA_d = Decs;
 /* line 664: */
GUDAELA_s = DQCAELA_nilst;
 /* line 665: */
for ( ;; )
{ 
 /* line 666: */
if ( !((FUDAELA_d!=FQCAELA_nildecs)) ) break;
EUDAELA_il = (*(&(FUDAELA_d->Ids)));
 /* line 667: */
for ( ;; )
{ 
 /* line 668: */
if ( !((EUDAELA_il!=CQCAELA_nilids)) ) break;
HUDAELA.T = (*(&(FUDAELA_d->T)));
HUDAELA.Rest = GUDAELA_s;
IUDAELA = A_HEAP(A68_196 ) ;
(*IUDAELA) = HUDAELA ;
GUDAELA_s = IUDAELA;
 /* line 669: */
 /* line 670: */
EUDAELA_il = (*(&(EUDAELA_il->Rest)));
}
 /* line 671: */
 /* line 672: */
FUDAELA_d = (*(&(FUDAELA_d->Rest)));
}
 /* line 673: */
if ( ((*(&(GUDAELA_s->Rest)))==DQCAELA_nilst) )
{ 
CUDAELA = (*(&(GUDAELA_s->T)));
} 
else
{ 
 /* line 674: */
CUDAELA = A_UNITE(JUDAELA,mode3,3,GUDAELA_s);
} 
} 
A_PROC_EXIT(ddecs_type);
*ReturnedValue = (CUDAELA);
return;
} 
#undef NL
 /* line 1: */
 /* line 4: */
void UICAELA(void)   /* initialise DECS compmodes */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/compmodes.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_VC  AJCAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  CJCAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_54  YQCAELA;  /* OPERATORS - nil -> mode */
A68_273  ARCAELA;  /* OPERATORS - nil -> mode */
A68_204  ERCAELA;  /* OPERATORS - mode -> union mode */
A68_171  FRCAELA;  /* YIELD */
A68_INT * URCAELA;  /* YIELD */
A68_INT * VRCAELA;  /* YIELD */
A68_INT * WRCAELA;  /* YIELD */
A68_INT * XRCAELA;  /* YIELD */
A68_INT * YRCAELA;  /* YIELD */
A68_296  JUCAELA;  /* collateral clause result */
A68_195  KUCAELA;  /* collateral clause result */
A68_239  LUCAELA;  /* collateral clause result */
A68_VC  RUCAELA;  /* avoid structure result */
A68_VC  TUCAELA;  /* OPERATORS - assign op */
A68_238  UUCAELA;  /* OPERATORS - mode -> union mode */
A68_239 * VUCAELA;  /* YIELD */
A68_204  WUCAELA;  /* OPERATORS - mode -> union mode */
A68_195 * XUCAELA;  /* YIELD */
A68_204  YUCAELA;  /* OPERATORS - mode -> union mode */
A68_195  ZUCAELA;  /* collateral clause result */
A68_239  AVCAELA;  /* collateral clause result */
A68_VC  GVCAELA;  /* avoid structure result */
A68_VC  IVCAELA;  /* OPERATORS - assign op */
A68_238  JVCAELA;  /* OPERATORS - mode -> union mode */
A68_239 * KVCAELA;  /* YIELD */
A68_204  LVCAELA;  /* OPERATORS - mode -> union mode */
A68_195 * MVCAELA;  /* YIELD */
A68_204  NVCAELA;  /* OPERATORS - mode -> union mode */
A68_195  OVCAELA;  /* collateral clause result */
A68_239  PVCAELA;  /* collateral clause result */
A68_VC  VVCAELA;  /* avoid structure result */
A68_VC  XVCAELA;  /* OPERATORS - assign op */
A68_238  YVCAELA;  /* OPERATORS - mode -> union mode */
A68_239 * ZVCAELA;  /* YIELD */
A68_204  AWCAELA;  /* OPERATORS - mode -> union mode */
A68_195 * BWCAELA;  /* YIELD */
A68_204  CWCAELA;  /* OPERATORS - mode -> union mode */
A68_195  DWCAELA;  /* collateral clause result */
A68_239  EWCAELA;  /* collateral clause result */
A68_VC  KWCAELA;  /* avoid structure result */
A68_VC  MWCAELA;  /* OPERATORS - assign op */
A68_238  NWCAELA;  /* OPERATORS - mode -> union mode */
A68_239 * OWCAELA;  /* YIELD */
A68_204  PWCAELA;  /* OPERATORS - mode -> union mode */
A68_195 * QWCAELA;  /* YIELD */
A68_204  RWCAELA;  /* OPERATORS - mode -> union mode */
A68_293  SWCAELA;  /* OPERATORS - istruct -> vector */
A68_298  PXCAELA;  /* collateral clause result */
A68_297  QXCAELA;  /* OPERATORS - istruct -> vector */
A68_300  SXCAELA;  /* collateral clause result */
A68_299  TXCAELA;  /* OPERATORS - istruct -> vector */
A68_308  VXCAELA;  /* collateral clause result */
A68_VC  BYCAELA;  /* avoid structure result */
A68_VC  DYCAELA;  /* OPERATORS - assign op */
A68_VC  JYCAELA;  /* avoid structure result */
A68_VC  LYCAELA;  /* OPERATORS - assign op */
A68_VC  RYCAELA;  /* avoid structure result */
A68_VC  TYCAELA;  /* OPERATORS - assign op */
A68_VC  ZYCAELA;  /* avoid structure result */
A68_VC  BZCAELA;  /* OPERATORS - assign op */
A68_VC  HZCAELA;  /* avoid structure result */
A68_VC  JZCAELA;  /* OPERATORS - assign op */
A68_VC  PZCAELA;  /* avoid structure result */
A68_VC  RZCAELA;  /* OPERATORS - assign op */
A68_VC  XZCAELA;  /* avoid structure result */
A68_VC  ZZCAELA;  /* OPERATORS - assign op */
A68_VC  EADAELA;  /* avoid structure result */
A68_VC  FADAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  GADAELA;  /* OPERATORS - assign op */
A68_VC  LADAELA;  /* avoid structure result */
A68_VC  MADAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  NADAELA;  /* OPERATORS - assign op */
A68_VC  SADAELA;  /* avoid structure result */
A68_VC  TADAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  UADAELA;  /* OPERATORS - assign op */
A68_VC  ZADAELA;  /* avoid structure result */
A68_VC  ABDAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  BBDAELA;  /* OPERATORS - assign op */
A68_VC  GBDAELA;  /* avoid structure result */
A68_VC  HBDAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  IBDAELA;  /* OPERATORS - assign op */
A68_VC  NBDAELA;  /* avoid structure result */
A68_VC  OBDAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  PBDAELA;  /* OPERATORS - assign op */
A68_VC  VBDAELA;  /* avoid structure result */
A68_VC  XBDAELA;  /* OPERATORS - assign op */
A68_VC  DCDAELA;  /* avoid structure result */
A68_VC  FCDAELA;  /* OPERATORS - assign op */
A68_VC  LCDAELA;  /* avoid structure result */
A68_VC  NCDAELA;  /* OPERATORS - assign op */
A68_VC  TCDAELA;  /* avoid structure result */
A68_VC  VCDAELA;  /* OPERATORS - assign op */
A68_VC  BDDAELA;  /* avoid structure result */
A68_VC  DDDAELA;  /* OPERATORS - assign op */
A68_VC  JDDAELA;  /* avoid structure result */
A68_VC  LDDAELA;  /* OPERATORS - assign op */
A68_VC  QDDAELA;  /* avoid structure result */
A68_VC  RDDAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  SDDAELA;  /* OPERATORS - assign op */
A68_VC  YDDAELA;  /* avoid structure result */
A68_VC  AEDAELA;  /* OPERATORS - assign op */
A68_VC  FEDAELA;  /* avoid structure result */
A68_VC  GEDAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  HEDAELA;  /* OPERATORS - assign op */
A68_VC  MEDAELA;  /* avoid structure result */
A68_VC  NEDAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  OEDAELA;  /* OPERATORS - assign op */
A68_VC  TEDAELA;  /* avoid structure result */
A68_VC  UEDAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  VEDAELA;  /* OPERATORS - assign op */
A68_VC  BFDAELA;  /* avoid structure result */
A68_VC  DFDAELA;  /* OPERATORS - assign op */
A68_VC  IFDAELA;  /* avoid structure result */
A68_VC  JFDAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  KFDAELA;  /* OPERATORS - assign op */
A68_302  LFDAELA;  /* OPERATORS - istruct -> vector */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
PCAAOST();   /* USE osinterface */
JSCAOST();   /* USE basics */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/ella/assoc/./a68files/compmodes.a68";
A_config.translation_time = "Tue Apr  4 10:32:56 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "TICAELA (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 10:32:56 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS compmodes);
UEAALIB_a68config(LGAALIB_configinfo, YICAELA);
 /* line 80: */
 /* line 81: */
BJCAELA_omac = A_HVEC(AJCAELA,'{',A68_CHAR );
DJCAELA_cmac = A_HVEC(CJCAELA,'}',A68_CHAR );
 /* line 83: */
EJCAELA_textstart = (-1);
 /* line 85: */
 /* line 86: */
 /* line 87: */
 /* line 88: */
 /* line 89: */
 /* line 90: */
 /* line 91: */
 /* line 92: */
 /* line 93: */
 /* line 94: */
 /* line 95: */
 /* line 96: */
 /* line 97: */
 /* line 98: */
 /* line 99: */
 /* line 100: */
 /* line 101: */
 /* line 102: */
 /* line 103: */
 /* line 104: */
 /* line 105: */
 /* line 106: */
 /* line 107: */
 /* line 108: */
 /* line 109: */
 /* line 110: */
 /* line 111: */
 /* line 112: */
 /* line 113: */
 /* line 114: */
 /* line 115: */
 /* line 116: */
 /* line 117: */
 /* line 118: */
 /* line 119: */
 /* line 120: */
 /* line 121: */
 /* line 122: */
 /* line 124: */
 /* line 126: */
 /* line 132: */
 /* line 133: */
 /* line 135: */
 /* line 137: */
 /* line 139: */
VPCAELA_stringindex = (-1);
 /* line 140: */
 /* line 142: */
AQCAELA_caseelseof = A68_FALSE;
 /* line 144: */
 /* line 292: */
 /* line 294: */
 /* line 296: */
 /* line 300: */
BQCAELA_nilpalts = (A68_191 *)A68_NIL;
CQCAELA_nilids = (A68_240 *)A68_NIL;
 /* line 301: */
DQCAELA_nilst = (A68_196 *)A68_NIL;
EQCAELA_niltype = (A68_204 *)A68_NIL;
 /* line 302: */
FQCAELA_nildecs = (A68_262 *)A68_NIL;
GQCAELA_nilnextmp = (A68_266 **)A68_NIL;
 /* line 303: */
HQCAELA_nilfns = (A68_269 *)A68_NIL;
IQCAELA_nilmparams = (A68_266 *)A68_NIL;
 /* line 304: */
JQCAELA_nilcalts = (A68_248 *)A68_NIL;
KQCAELA_nilcst = (A68_246 *)A68_NIL;
 /* line 305: */
LQCAELA_nilcharalts = (A68_185 *)A68_NIL;
MQCAELA_nilattrstr = (A68_230 *)A68_NIL;
 /* line 306: */
NQCAELA_nilstringlist = (A68_228 *)A68_NIL;
OQCAELA_nilfninfo = (A68_267 *)A68_NIL;
 /* line 307: */
PQCAELA_niljoinst = (A68_217 *)A68_NIL;
QQCAELA_niljoinstack = (A68_224 *)A68_NIL;
 /* line 308: */
RQCAELA_nilfndec = (A68_268 *)A68_NIL;
 /* line 309: */
SQCAELA_niljoinvarstack = (A68_214 *)A68_NIL;
TQCAELA_nilfnstack = (A68_270 *)A68_NIL;
 /* line 310: */
UQCAELA_niljoinmultstack = (A68_225 *)A68_NIL;
 /* line 311: */
VQCAELA_nilportdata = (A68_210 *)A68_NIL;
 /* line 312: */
WQCAELA_nilportstack = (A68_213 *)A68_NIL;
 /* line 313: */
XQCAELA_niliddecs = (A68_272 *)A68_NIL;
 /* line 315: */
ZQCAELA_nilrb = (A_VVAC(YQCAELA));
BRCAELA_nilrrb = (A_VVAC(ARCAELA));
 /* line 317: */
CRCAELA_notdec = (*(A_HEAP(A68_189 )));
DRCAELA_flt = (*(A_HEAP(A68_171 )));
 /* line 318: */
FRCAELA = (*(A_HEAP(A68_171 ))) ;
GRCAELA_o = A_UNITE(ERCAELA,mode10,10,FRCAELA);
HRCAELA_rec = (*(A_HEAP(A68_188 )));
 /* line 319: */
 /* line 320: */
KRCAELA_unset = (*(A_HEAP(A68_168 )));
 /* line 321: */
LRCAELA_intnull = (*(A_HEAP(A68_181 )));
MRCAELA_attrnull = (*(A_HEAP(A68_232 )));
 /* line 322: */
NRCAELA_typevoid = (*(A_HEAP(A68_203 )));
 /* line 323: */
ORCAELA_constvoid = (*(A_HEAP(A68_254 )));
 /* line 325: */
 /* line 326: */
URCAELA = (&((&PRCAELA_jtrue)->J)) ;
(*URCAELA) = 1;
VRCAELA = (&((&QRCAELA_jfalse)->J)) ;
(*VRCAELA) = 2;
WRCAELA = (&((&RRCAELA_jcheck)->J)) ;
(*WRCAELA) = 3;
XRCAELA = (&((&SRCAELA_jfault)->J)) ;
(*XRCAELA) = 4;
 /* line 327: */
YRCAELA = (&((&TRCAELA_jvoid)->J)) ;
(*YRCAELA) = 5;
 /* line 329: */
 /* line 330: */
 /* line 331: */
 /* line 332: */
 /* line 333: */
 /* line 334: */
 /* line 335: */
 /* line 336: */
 /* line 337: */
 /* line 338: */
 /* line 339: */
 /* line 340: */
 /* line 341: */
 /* line 343: */
ZTCAELA_inputtok = (-26);
 /* line 345: */
AUCAELA_typenull = (*(A_HEAP(A68_202 )));
 /* line 347: */
 /* line 351: */
 /* line 354: */
 /* line 371: */
 /* line 373: */
BUCAELA_nilparamvals = (A68_276 *)A68_NIL;
 /* line 374: */
CUCAELA_nilscope = (A68_286 *)A68_NIL;
 /* line 375: */
DUCAELA_nilstate = (A68_287 *)A68_NIL;
 /* line 376: */
EUCAELA_nillastops = (A68_288 *)A68_NIL;
 /* line 377: */
FUCAELA_nillastcalls = (A68_288 *)A68_NIL;
 /* line 378: */
GUCAELA_nilintegerstack = (A68_183 *)A68_NIL;
 /* line 379: */
HUCAELA_nildecnocheck = (A68_290 *)A68_NIL;
 /* line 380: */
IUCAELA_nilfncallstack = (A68_279 *)A68_NIL;
 /* line 382: */
 /* line 384: */
 /* line 385: */
LUCAELA.Scope = 0;
LUCAELA.Vnno = 0;
LUCAELA.Text = A68_TRUE;
LUCAELA.Outofdate = A68_FALSE;
LUCAELA.Inscope = A68_TRUE;
 /* line 386: */
LUCAELA.Export = A68_FALSE;
NUCAELA_generator( A68_FALSE, &RUCAELA );
TUCAELA = SUCAELA ;
A_VASSIGN2(TUCAELA,RUCAELA,A68_CHAR ) ;
LUCAELA.Id = RUCAELA;
LUCAELA.U = A_UNITE(UUCAELA,mode8,8,DRCAELA_flt);
VUCAELA = A_HEAP(A68_239 ) ;
(*VUCAELA) = LUCAELA ;
KUCAELA.Idinfo = VUCAELA;
KUCAELA.Typeno = 0;
KUCAELA.T = A_UNITE(WUCAELA,mode10,10,DRCAELA_flt);
 /* line 387: */
XUCAELA = A_HEAP(A68_195 ) ;
(*XUCAELA) = KUCAELA ;
JUCAELA.data[0] = A_UNITE(YUCAELA,mode2,2,XUCAELA);
AVCAELA.Scope = 0;
AVCAELA.Vnno = 0;
AVCAELA.Text = A68_TRUE;
AVCAELA.Outofdate = A68_FALSE;
AVCAELA.Inscope = A68_TRUE;
 /* line 388: */
AVCAELA.Export = A68_FALSE;
CVCAELA_generator( A68_FALSE, &GVCAELA );
IVCAELA = HVCAELA ;
A_VASSIGN2(IVCAELA,GVCAELA,A68_CHAR ) ;
AVCAELA.Id = GVCAELA;
AVCAELA.U = A_UNITE(JVCAELA,mode8,8,DRCAELA_flt);
KVCAELA = A_HEAP(A68_239 ) ;
(*KVCAELA) = AVCAELA ;
ZUCAELA.Idinfo = KVCAELA;
ZUCAELA.Typeno = 0;
ZUCAELA.T = A_UNITE(LVCAELA,mode10,10,DRCAELA_flt);
 /* line 389: */
MVCAELA = A_HEAP(A68_195 ) ;
(*MVCAELA) = ZUCAELA ;
JUCAELA.data[1] = A_UNITE(NVCAELA,mode2,2,MVCAELA);
PVCAELA.Scope = 0;
PVCAELA.Vnno = 0;
PVCAELA.Text = A68_TRUE;
PVCAELA.Outofdate = A68_FALSE;
PVCAELA.Inscope = A68_TRUE;
 /* line 390: */
PVCAELA.Export = A68_FALSE;
RVCAELA_generator( A68_FALSE, &VVCAELA );
XVCAELA = WVCAELA ;
A_VASSIGN2(XVCAELA,VVCAELA,A68_CHAR ) ;
PVCAELA.Id = VVCAELA;
PVCAELA.U = A_UNITE(YVCAELA,mode8,8,DRCAELA_flt);
ZVCAELA = A_HEAP(A68_239 ) ;
(*ZVCAELA) = PVCAELA ;
OVCAELA.Idinfo = ZVCAELA;
OVCAELA.Typeno = 0;
OVCAELA.T = A_UNITE(AWCAELA,mode10,10,DRCAELA_flt);
 /* line 391: */
BWCAELA = A_HEAP(A68_195 ) ;
(*BWCAELA) = OVCAELA ;
JUCAELA.data[2] = A_UNITE(CWCAELA,mode2,2,BWCAELA);
EWCAELA.Scope = 0;
EWCAELA.Vnno = 0;
EWCAELA.Text = A68_TRUE;
EWCAELA.Outofdate = A68_FALSE;
EWCAELA.Inscope = A68_TRUE;
 /* line 392: */
EWCAELA.Export = A68_FALSE;
GWCAELA_generator( A68_FALSE, &KWCAELA );
MWCAELA = LWCAELA ;
A_VASSIGN2(MWCAELA,KWCAELA,A68_CHAR ) ;
EWCAELA.Id = KWCAELA;
EWCAELA.U = A_UNITE(NWCAELA,mode8,8,DRCAELA_flt);
OWCAELA = A_HEAP(A68_239 ) ;
(*OWCAELA) = EWCAELA ;
DWCAELA.Idinfo = OWCAELA;
DWCAELA.Typeno = 0;
 /* line 393: */
DWCAELA.T = A_UNITE(PWCAELA,mode10,10,DRCAELA_flt);
QWCAELA = A_HEAP(A68_195 ) ;
(*QWCAELA) = DWCAELA ;
JUCAELA.data[3] = A_UNITE(RWCAELA,mode2,2,QWCAELA);
TWCAELA_modes = A_HISVEC(SWCAELA,JUCAELA,4,A68_204 );
 /* line 395: */
 /* line 396: */
 /* line 399: */
 /* line 402: */
 /* line 405: */
 /* line 408: */
 /* line 409: */
 /* line 411: */
 /* line 412: */
PXCAELA.data[0].Param = JXCAELA_winteger;
 /* line 413: */
PXCAELA.data[0].Ans = JXCAELA_winteger;
PXCAELA.data[1].Param = JXCAELA_winteger;
 /* line 414: */
PXCAELA.data[1].Ans = JXCAELA_winteger;
PXCAELA.data[2].Param = IXCAELA_wbool;
 /* line 415: */
PXCAELA.data[2].Ans = IXCAELA_wbool;
PXCAELA.data[3].Param = 0;
 /* line 416: */
PXCAELA.data[3].Ans = 0;
PXCAELA.data[4].Param = JXCAELA_winteger;
 /* line 417: */
PXCAELA.data[4].Ans = JXCAELA_winteger;
PXCAELA.data[5].Param = JXCAELA_winteger;
 /* line 418: */
PXCAELA.data[5].Ans = JXCAELA_winteger;
PXCAELA.data[6].Param = JXCAELA_winteger;
PXCAELA.data[6].Ans = JXCAELA_winteger;
RXCAELA_mops = A_HISVEC(QXCAELA,PXCAELA,7,A68_291 );
 /* line 420: */
 /* line 421: */
SXCAELA.data[0].L = JXCAELA_winteger;
SXCAELA.data[0].R = JXCAELA_winteger;
 /* line 422: */
SXCAELA.data[0].Ans = JXCAELA_winteger;
SXCAELA.data[1].L = JXCAELA_winteger;
SXCAELA.data[1].R = JXCAELA_winteger;
 /* line 423: */
SXCAELA.data[1].Ans = JXCAELA_winteger;
SXCAELA.data[2].L = JXCAELA_winteger;
SXCAELA.data[2].R = JXCAELA_winteger;
 /* line 424: */
SXCAELA.data[2].Ans = JXCAELA_winteger;
SXCAELA.data[3].L = JXCAELA_winteger;
SXCAELA.data[3].R = JXCAELA_winteger;
 /* line 425: */
SXCAELA.data[3].Ans = JXCAELA_winteger;
SXCAELA.data[4].L = JXCAELA_winteger;
SXCAELA.data[4].R = JXCAELA_winteger;
 /* line 426: */
SXCAELA.data[4].Ans = IXCAELA_wbool;
SXCAELA.data[5].L = JXCAELA_winteger;
SXCAELA.data[5].R = JXCAELA_winteger;
 /* line 427: */
SXCAELA.data[5].Ans = IXCAELA_wbool;
SXCAELA.data[6].L = JXCAELA_winteger;
SXCAELA.data[6].R = JXCAELA_winteger;
 /* line 428: */
SXCAELA.data[6].Ans = IXCAELA_wbool;
SXCAELA.data[7].L = JXCAELA_winteger;
SXCAELA.data[7].R = JXCAELA_winteger;
 /* line 429: */
SXCAELA.data[7].Ans = IXCAELA_wbool;
SXCAELA.data[8].L = JXCAELA_winteger;
SXCAELA.data[8].R = JXCAELA_winteger;
 /* line 430: */
SXCAELA.data[8].Ans = IXCAELA_wbool;
SXCAELA.data[9].L = JXCAELA_winteger;
SXCAELA.data[9].R = JXCAELA_winteger;
 /* line 431: */
SXCAELA.data[9].Ans = IXCAELA_wbool;
SXCAELA.data[10].L = IXCAELA_wbool;
SXCAELA.data[10].R = IXCAELA_wbool;
 /* line 432: */
SXCAELA.data[10].Ans = IXCAELA_wbool;
SXCAELA.data[11].L = IXCAELA_wbool;
SXCAELA.data[11].R = IXCAELA_wbool;
 /* line 433: */
SXCAELA.data[11].Ans = IXCAELA_wbool;
SXCAELA.data[12].L = 0;
SXCAELA.data[12].R = 0;
 /* line 434: */
SXCAELA.data[12].Ans = 0;
SXCAELA.data[13].L = JXCAELA_winteger;
SXCAELA.data[13].R = JXCAELA_winteger;
 /* line 435: */
SXCAELA.data[13].Ans = JXCAELA_winteger;
SXCAELA.data[14].L = JXCAELA_winteger;
SXCAELA.data[14].R = JXCAELA_winteger;
 /* line 436: */
SXCAELA.data[14].Ans = JXCAELA_winteger;
SXCAELA.data[15].L = JXCAELA_winteger;
SXCAELA.data[15].R = JXCAELA_winteger;
 /* line 437: */
SXCAELA.data[15].Ans = JXCAELA_winteger;
SXCAELA.data[16].L = JXCAELA_winteger;
SXCAELA.data[16].R = JXCAELA_winteger;
 /* line 438: */
SXCAELA.data[16].Ans = JXCAELA_winteger;
SXCAELA.data[17].L = JXCAELA_winteger;
SXCAELA.data[17].R = JXCAELA_winteger;
SXCAELA.data[17].Ans = JXCAELA_winteger;
UXCAELA_dops = A_HISVEC(TXCAELA,SXCAELA,18,A68_292 );
 /* line 440: */
 /* line 441: */
XXCAELA_generator( A68_FALSE, &BYCAELA );
DYCAELA = CYCAELA ;
A_VASSIGN2(DYCAELA,BYCAELA,A68_CHAR ) ;
VXCAELA.data[0].Id = BYCAELA;
 /* line 442: */
VXCAELA.data[0].Tokno = ESCAELA_outputtok;
FYCAELA_generator( A68_FALSE, &JYCAELA );
LYCAELA = KYCAELA ;
A_VASSIGN2(LYCAELA,JYCAELA,A68_CHAR ) ;
VXCAELA.data[1].Id = JYCAELA;
 /* line 443: */
VXCAELA.data[1].Tokno = PSCAELA_eoftok;
NYCAELA_generator( A68_FALSE, &RYCAELA );
TYCAELA = SYCAELA ;
A_VASSIGN2(TYCAELA,RYCAELA,A68_CHAR ) ;
VXCAELA.data[2].Id = RYCAELA;
 /* line 444: */
VXCAELA.data[2].Tokno = TSCAELA_fitok;
VYCAELA_generator( A68_FALSE, &ZYCAELA );
BZCAELA = AZCAELA ;
A_VASSIGN2(BZCAELA,ZYCAELA,A68_CHAR ) ;
VXCAELA.data[3].Id = ZYCAELA;
 /* line 445: */
VXCAELA.data[3].Tokno = USCAELA_thentok;
DZCAELA_generator( A68_FALSE, &HZCAELA );
JZCAELA = IZCAELA ;
A_VASSIGN2(JZCAELA,HZCAELA,A68_CHAR ) ;
VXCAELA.data[4].Id = HZCAELA;
 /* line 446: */
VXCAELA.data[4].Tokno = VSCAELA_endtok;
LZCAELA_generator( A68_FALSE, &PZCAELA );
RZCAELA = QZCAELA ;
A_VASSIGN2(RZCAELA,PZCAELA,A68_CHAR ) ;
VXCAELA.data[5].Id = PZCAELA;
 /* line 447: */
VXCAELA.data[5].Tokno = WSCAELA_esactok;
TZCAELA_generator( A68_FALSE, &XZCAELA );
ZZCAELA = YZCAELA ;
A_VASSIGN2(ZZCAELA,XZCAELA,A68_CHAR ) ;
VXCAELA.data[6].Id = XZCAELA;
 /* line 448: */
VXCAELA.data[6].Tokno = XSCAELA_oftok;
BADAELA_generator( A68_FALSE, &EADAELA );
GADAELA = A_HVEC(FADAELA,']',A68_CHAR ) ;
A_VASSIGN2(GADAELA,EADAELA,A68_CHAR ) ;
VXCAELA.data[7].Id = EADAELA;
 /* line 449: */
VXCAELA.data[7].Tokno = ZSCAELA_bustok;
IADAELA_generator( A68_FALSE, &LADAELA );
NADAELA = A_HVEC(MADAELA,'}',A68_CHAR ) ;
A_VASSIGN2(NADAELA,LADAELA,A68_CHAR ) ;
VXCAELA.data[8].Id = LADAELA;
 /* line 450: */
VXCAELA.data[8].Tokno = BTCAELA_cmactok;
PADAELA_generator( A68_FALSE, &SADAELA );
UADAELA = A_HVEC(TADAELA,'.',A68_CHAR ) ;
A_VASSIGN2(UADAELA,SADAELA,A68_CHAR ) ;
VXCAELA.data[9].Id = SADAELA;
 /* line 451: */
VXCAELA.data[9].Tokno = CTCAELA_stoptok;
WADAELA_generator( A68_FALSE, &ZADAELA );
BBDAELA = A_HVEC(ABDAELA,';',A68_CHAR ) ;
A_VASSIGN2(BBDAELA,ZADAELA,A68_CHAR ) ;
VXCAELA.data[10].Id = ZADAELA;
 /* line 452: */
VXCAELA.data[10].Tokno = SSCAELA_semitok;
DBDAELA_generator( A68_FALSE, &GBDAELA );
IBDAELA = A_HVEC(HBDAELA,')',A68_CHAR ) ;
A_VASSIGN2(IBDAELA,GBDAELA,A68_CHAR ) ;
VXCAELA.data[11].Id = GBDAELA;
 /* line 453: */
VXCAELA.data[11].Tokno = ETCAELA_crdtok;
KBDAELA_generator( A68_FALSE, &NBDAELA );
PBDAELA = A_HVEC(OBDAELA,':',A68_CHAR ) ;
A_VASSIGN2(PBDAELA,NBDAELA,A68_CHAR ) ;
VXCAELA.data[12].Id = NBDAELA;
 /* line 454: */
VXCAELA.data[12].Tokno = FTCAELA_colontok;
RBDAELA_generator( A68_FALSE, &VBDAELA );
XBDAELA = WBDAELA ;
A_VASSIGN2(XBDAELA,VBDAELA,A68_CHAR ) ;
VXCAELA.data[13].Id = VBDAELA;
 /* line 455: */
VXCAELA.data[13].Tokno = BSCAELA_elsetok;
ZBDAELA_generator( A68_FALSE, &DCDAELA );
FCDAELA = ECDAELA ;
A_VASSIGN2(FCDAELA,DCDAELA,A68_CHAR ) ;
VXCAELA.data[14].Id = DCDAELA;
 /* line 456: */
VXCAELA.data[14].Tokno = ITCAELA_stringtok;
HCDAELA_generator( A68_FALSE, &LCDAELA );
NCDAELA = MCDAELA ;
A_VASSIGN2(NCDAELA,LCDAELA,A68_CHAR ) ;
VXCAELA.data[15].Id = LCDAELA;
 /* line 457: */
VXCAELA.data[15].Tokno = ZRCAELA_idtok;
PCDAELA_generator( A68_FALSE, &TCDAELA );
VCDAELA = UCDAELA ;
A_VASSIGN2(VCDAELA,TCDAELA,A68_CHAR ) ;
VXCAELA.data[16].Id = TCDAELA;
 /* line 458: */
VXCAELA.data[16].Tokno = JTCAELA_fnnametok;
XCDAELA_generator( A68_FALSE, &BDDAELA );
DDDAELA = CDDAELA ;
A_VASSIGN2(DDDAELA,BDDAELA,A68_CHAR ) ;
VXCAELA.data[17].Id = BDDAELA;
 /* line 459: */
VXCAELA.data[17].Tokno = KTCAELA_op1tok;
FDDAELA_generator( A68_FALSE, &JDDAELA );
LDDAELA = KDDAELA ;
A_VASSIGN2(LDDAELA,JDDAELA,A68_CHAR ) ;
VXCAELA.data[18].Id = JDDAELA;
 /* line 460: */
VXCAELA.data[18].Tokno = LTCAELA_op2tok;
NDDAELA_generator( A68_FALSE, &QDDAELA );
SDDAELA = A_HVEC(RDDAELA,'=',A68_CHAR ) ;
A_VASSIGN2(SDDAELA,QDDAELA,A68_CHAR ) ;
VXCAELA.data[19].Id = QDDAELA;
 /* line 461: */
VXCAELA.data[19].Tokno = MTCAELA_equalstok;
UDDAELA_generator( A68_FALSE, &YDDAELA );
AEDAELA = ZDDAELA ;
A_VASSIGN2(AEDAELA,YDDAELA,A68_CHAR ) ;
VXCAELA.data[20].Id = YDDAELA;
 /* line 462: */
VXCAELA.data[20].Tokno = QTCAELA_becomestok;
CEDAELA_generator( A68_FALSE, &FEDAELA );
HEDAELA = A_HVEC(GEDAELA,'/',A68_CHAR ) ;
A_VASSIGN2(HEDAELA,FEDAELA,A68_CHAR ) ;
VXCAELA.data[21].Id = FEDAELA;
 /* line 463: */
VXCAELA.data[21].Tokno = PTCAELA_slashtok;
JEDAELA_generator( A68_FALSE, &MEDAELA );
OEDAELA = A_HVEC(NEDAELA,'(',A68_CHAR ) ;
A_VASSIGN2(OEDAELA,MEDAELA,A68_CHAR ) ;
VXCAELA.data[22].Id = MEDAELA;
 /* line 464: */
VXCAELA.data[22].Tokno = NTCAELA_ordtok;
QEDAELA_generator( A68_FALSE, &TEDAELA );
VEDAELA = A_HVEC(UEDAELA,'|',A68_CHAR ) ;
A_VASSIGN2(VEDAELA,TEDAELA,A68_CHAR ) ;
VXCAELA.data[23].Id = TEDAELA;
 /* line 465: */
VXCAELA.data[23].Tokno = CSCAELA_bangtok;
XEDAELA_generator( A68_FALSE, &BFDAELA );
DFDAELA = CFDAELA ;
A_VASSIGN2(DFDAELA,BFDAELA,A68_CHAR ) ;
VXCAELA.data[24].Id = BFDAELA;
 /* line 466: */
VXCAELA.data[24].Tokno = OTCAELA_uptotok;
FFDAELA_generator( A68_FALSE, &IFDAELA );
KFDAELA = A_HVEC(JFDAELA,'\'',A68_CHAR ) ;
A_VASSIGN2(KFDAELA,IFDAELA,A68_CHAR ) ;
VXCAELA.data[25].Id = IFDAELA;
 /* line 467: */
VXCAELA.data[25].Tokno = TTCAELA_chartok;
MFDAELA_toks = A_HISVEC(LFDAELA,VXCAELA,26,A68_301 );
 /* line 469: */
 /* line 485: */
 /* line 505: */
 /* line 536: */
 /* line 539: */
 /* line 542: */
 /* line 545: */
 /* line 548: */
 /* line 551: */
 /* line 554: */
 /* line 557: */
 /* line 560: */
 /* line 563: */
 /* line 566: */
 /* line 569: */
 /* line 571: */
 /* line 586: */
 /* line 589: */
 /* line 591: */
 /* line 627: */
 /* line 646: */
 /* line 657: */
 /* line 659: */
 /* line 676: */
 /* line 678: */
 /* line 760: */
/*SKIP*/;
A_PROC_EXIT(DECS compmodes);
} 
#undef NL
/* end of translation of ./a68files/compmodes.a68 */
