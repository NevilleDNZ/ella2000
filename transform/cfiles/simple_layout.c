
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
/* UNAME:AQQBTRN */
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

A_PROCEDURE(A68_VOID ,A68t159,(A68_BOOL ,struct A68t46 *),(A68_BOOL ,struct A68t46 *,void *));
typedef struct A68t159  A68_159 ;    /* PROC(BOOL) MODE46 */
A_VECTOR(struct A68t162 ,A68t161);
typedef struct A68t161  A68_161 ;    /* VECTOR [] MODE162 */
struct A68t162{
A68_INT  Number;
A_PAD_INT(PAD_34)
A68_BITS  Class;
A_PAD_BITS(PAD_35)
A68_VC  Text;
};
typedef struct A68t162  A68_162 ;    /* STRUCT(INT,BITS,MODE26)  */
struct A68t160{
A68_VC  Name;
struct A68t111  Messages;
A68_BOOL * Initialised;
struct A68t161  Setup;
};
typedef struct A68t160  A68_160 ;    /* STRUCT(MODE26,REF MODE111,REF BOOL,MODE161)  */

A_PROCEDURE(A68_VOID ,A68t163,(A68_BOOL ,struct A68t160 *),(A68_BOOL ,struct A68t160 *,void *));
typedef struct A68t163  A68_163 ;    /* PROC(BOOL) MODE160 */
A_VECTOR(A68_VC ,A68t164);
typedef struct A68t164  A68_164 ;    /* VECTOR [] REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t165,(struct A68t46 ,struct A68t164 *),(struct A68t46 ,struct A68t164 *,void *));
typedef struct A68t165  A68_165 ;    /* PROC(MODE46) MODE164 */

A_PROCEDURE(A68_VOID ,A68t166,(struct A68t164 ,struct A68t46 *),(struct A68t164 ,struct A68t46 *,void *));
typedef struct A68t166  A68_166 ;    /* PROC(MODE164) MODE46 */
struct A68t168 ;

A_PROCEDURE(A68_BOOL ,A68t167,(struct A68t168 ),(struct A68t168 ,void *));
typedef struct A68t167  A68_167 ;    /* PROC(MODE168) BOOL */
struct A68t168 { A68_INT mode; union {
struct A68t109  mode1;
struct A68t112  mode2;
} data; };
typedef struct A68t168  A68_168 ;    /* UNION(MODE109,MODE112)  */

A_PROCEDURE(A68_INT ,A68t169,(struct A68t109 ),(struct A68t109 ,void *));
typedef struct A68t169  A68_169 ;    /* PROC(MODE109) INT */

A_PROCEDURE(A68_VOID ,A68t170,(A68_INT ,struct A68t160 ,struct A68t109 *),(A68_INT ,struct A68t160 ,struct A68t109 *,void *));
typedef struct A68t170  A68_170 ;    /* PROC(INT,MODE160) MODE109 */

A_PROCEDURE(A68_BOOL ,A68t171,(struct A68t109 ,struct A68t160 ),(struct A68t109 ,struct A68t160 ,void *));
typedef struct A68t171  A68_171 ;    /* PROC(MODE109,MODE160) BOOL */

A_PROCEDURE(A68_VOID ,A68t172,(struct A68t109 ,struct A68t46 ,struct A68t112 *),(struct A68t109 ,struct A68t46 ,struct A68t112 *,void *));
typedef struct A68t172  A68_172 ;    /* PROC(MODE109,MODE46) MODE112 */
struct A68t173{
A68_BITS  Options;
A_PAD_BITS(PAD_36)
};
typedef struct A68t173  A68_173 ;    /* STRUCT(BITS)  */

A_PROCEDURE(A68_VOID ,A68t174,(struct A68t173 ,struct A68t173 ,struct A68t173 *),(struct A68t173 ,struct A68t173 ,struct A68t173 *,void *));
typedef struct A68t174  A68_174 ;    /* PROC(MODE173,MODE173) MODE173 */

A_PROCEDURE(struct A68t173 *,A68t175,(struct A68t173 *,struct A68t173 ),(struct A68t173 *,struct A68t173 ,void *));
typedef struct A68t175  A68_175 ;    /* PROC(REF MODE173,MODE173) REF MODE173 */

A_PROCEDURE(A68_BOOL ,A68t176,(struct A68t173 ,struct A68t173 ),(struct A68t173 ,struct A68t173 ,void *));
typedef struct A68t176  A68_176 ;    /* PROC(MODE173,MODE173) BOOL */

A_PROCEDURE(A68_BOOL ,A68t177,(struct A68t173 ,A68_INT ),(struct A68t173 ,A68_INT ,void *));
typedef struct A68t177  A68_177 ;    /* PROC(MODE173,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t178,(A68_INT ,struct A68t173 *),(A68_INT ,struct A68t173 *,void *));
typedef struct A68t178  A68_178 ;    /* PROC(INT) MODE173 */
struct A68t179{
A68_VC  Id;
struct A68t179 * Rest;
};
typedef struct A68t179  A68_179 ;    /* STRUCT(REF MODE26,REF MODE179)  */
struct A68t180{
A68_INT  Int;
A_PAD_INT(PAD_37)
struct A68t180 * Rest;
};
typedef struct A68t180  A68_180 ;    /* STRUCT(INT,REF MODE180)  */
struct A68t181 { A68_INT mode; union {
struct A68t182 * mode1;
struct A68t183 * mode2;
struct A68t184 * mode3;
struct A68t185 * mode4;
struct A68t186 * mode5;
} data; };
typedef struct A68t181  A68_181 ;    /* UNION(REF MODE182,REF MODE183,REF MODE184,REF MODE185,REF MODE186)  */
struct A68t182{
A68_INT  Attrno;
A_PAD_INT(PAD_38)
};
typedef struct A68t182  A68_182 ;    /* STRUCT(INT)  */
struct A68t183{
A68_VC  Classname;
struct A68t179 * Strings;
};
typedef struct A68t183  A68_183 ;    /* STRUCT(REF MODE26,REF MODE179)  */
struct A68t184{
struct A68t181  Elem;
struct A68t184 * Rest;
};
typedef struct A68t184  A68_184 ;    /* STRUCT(MODE181,REF MODE184)  */
struct A68t185{
struct A68t181  Attr;
};
typedef struct A68t185  A68_185 ;    /* STRUCT(MODE181)  */
struct A68t186{
A68_INT  Attrnull;
A_PAD_INT(PAD_39)
};
typedef struct A68t186  A68_186 ;    /* STRUCT(INT)  */
struct A68t187{
A68_INT  Sort;
A_PAD_INT(PAD_40)
A68_VC  Attrname;
struct A68t181  Value;
struct A68t188 * Usage;
};
typedef struct A68t187  A68_187 ;    /* STRUCT(INT,REF MODE26,MODE181,REF MODE188)  */
struct A68t188{
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
typedef struct A68t188  A68_188 ;    /* STRUCT(INT,INT,INT,INT,BOOL,BOOL)  */
struct A68t189{
struct A68t181  Tag;
};
typedef struct A68t189  A68_189 ;    /* STRUCT(MODE181)  */
struct A68t190 { A68_INT mode; union {
struct A68t191 * mode1;
struct A68t192 * mode2;
struct A68t193 * mode3;
struct A68t194 * mode4;
struct A68t195 * mode5;
struct A68t196 * mode6;
struct A68t197 * mode7;
struct A68t198 * mode8;
struct A68t199 * mode9;
struct A68t200 * mode10;
} data; };
typedef struct A68t190  A68_190 ;    /* UNION(REF MODE191,REF MODE192,REF MODE193,REF MODE194,REF MODE195,REF MODE196,REF MODE197,REF MODE198,REF MODE199,REF MODE200)  */
struct A68t191{
A68_INT  Int;
A_PAD_INT(PAD_47)
A68_VC  Text;
};
typedef struct A68t191  A68_191 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t192{
A68_INT  Sort;
A_PAD_INT(PAD_48)
struct A68t190  Test;
struct A68t190  Standard;
};
typedef struct A68t192  A68_192 ;    /* STRUCT(INT,MODE190,MODE190)  */
struct A68t193{
A68_INT  Nameno;
A_PAD_INT(PAD_49)
};
typedef struct A68t193  A68_193 ;    /* STRUCT(INT)  */
struct A68t194{
A68_INT  Intno;
A_PAD_INT(PAD_50)
};
typedef struct A68t194  A68_194 ;    /* STRUCT(INT)  */
struct A68t195{
struct A68t190  Left;
A68_INT  Sort;
A_PAD_INT(PAD_51)
struct A68t190  Right;
};
typedef struct A68t195  A68_195 ;    /* STRUCT(MODE190,INT,MODE190)  */
struct A68t196{
A68_INT  Sort;
A_PAD_INT(PAD_52)
struct A68t190  Right;
};
typedef struct A68t196  A68_196 ;    /* STRUCT(INT,MODE190)  */
struct A68t197{
struct A68t190  Cond;
struct A68t190  True;
struct A68t190  False;
};
typedef struct A68t197  A68_197 ;    /* STRUCT(MODE190,MODE190,MODE190)  */
struct A68t198{
struct A68t190  Formula;
};
typedef struct A68t198  A68_198 ;    /* STRUCT(MODE190)  */
struct A68t199{
A68_INT  Macparno;
A_PAD_INT(PAD_53)
};
typedef struct A68t199  A68_199 ;    /* STRUCT(INT)  */
struct A68t200{
A68_INT  Fnull;
A_PAD_INT(PAD_54)
};
typedef struct A68t200  A68_200 ;    /* STRUCT(INT)  */
struct A68t201{
struct A68t190  Tag;
};
typedef struct A68t201  A68_201 ;    /* STRUCT(MODE190)  */
struct A68t202{
struct A68t190  Formula;
struct A68t202 * Rest;
};
typedef struct A68t202  A68_202 ;    /* STRUCT(MODE190,REF MODE202)  */
struct A68t205{
struct A68t190  Lwb;
struct A68t190  Upb;
};
typedef struct A68t205  A68_205 ;    /* STRUCT(MODE190,MODE190)  */
struct A68t204 { A68_INT mode; union {
struct A68t191 * mode1;
struct A68t192 * mode2;
struct A68t193 * mode3;
struct A68t194 * mode4;
struct A68t195 * mode5;
struct A68t196 * mode6;
struct A68t197 * mode7;
struct A68t198 * mode8;
struct A68t199 * mode9;
struct A68t200 * mode10;
struct A68t205  mode11;
} data; };
typedef struct A68t204  A68_204 ;    /* UNION(REF MODE191,REF MODE192,REF MODE193,REF MODE194,REF MODE195,REF MODE196,REF MODE197,REF MODE198,REF MODE199,REF MODE200,MODE205)  */
struct A68t203{
A68_INT  Sort;
A_PAD_INT(PAD_55)
A68_VC  Intname;
struct A68t181  Attr;
struct A68t204  Value;
struct A68t188 * Usage;
};
typedef struct A68t203  A68_203 ;    /* STRUCT(INT,REF MODE26,MODE181,MODE204,REF MODE188)  */
struct A68t206 { A68_INT mode; union {
struct A68t207 * mode1;
struct A68t208 * mode2;
struct A68t209 * mode3;
struct A68t210 * mode4;
struct A68t211 * mode5;
struct A68t212 * mode6;
struct A68t213 * mode7;
struct A68t199 * mode8;
struct A68t214 * mode9;
} data; };
typedef struct A68t206  A68_206 ;    /* UNION(REF MODE207,REF MODE208,REF MODE209,REF MODE210,REF MODE211,REF MODE212,REF MODE213,REF MODE199,REF MODE214)  */
struct A68t207{
A68_INT  Typeno;
A_PAD_INT(PAD_56)
};
typedef struct A68t207  A68_207 ;    /* STRUCT(INT)  */
struct A68t208{
struct A68t190  Size;
struct A68t206  Elem;
};
typedef struct A68t208  A68_208 ;    /* STRUCT(MODE190,MODE206)  */
struct A68t209{
struct A68t206  Elem;
struct A68t209 * Rest;
};
typedef struct A68t209  A68_209 ;    /* STRUCT(MODE206,REF MODE209)  */
struct A68t210{
struct A68t206  From;
struct A68t206  To;
};
typedef struct A68t210  A68_210 ;    /* STRUCT(MODE206,MODE206)  */
struct A68t211{
struct A68t206  Type;
};
typedef struct A68t211  A68_211 ;    /* STRUCT(MODE206)  */
struct A68t212{
struct A68t190  Size;
struct A68t206  Char;
};
typedef struct A68t212  A68_212 ;    /* STRUCT(MODE190,MODE206)  */
struct A68t213{
A68_INT  Tvoid;
A_PAD_INT(PAD_57)
};
typedef struct A68t213  A68_213 ;    /* STRUCT(INT)  */
struct A68t214{
A68_INT  Tnull;
A_PAD_INT(PAD_58)
};
typedef struct A68t214  A68_214 ;    /* STRUCT(INT)  */
struct A68t215{
struct A68t206  Tag;
};
typedef struct A68t215  A68_215 ;    /* STRUCT(MODE206)  */
struct A68t216{
A68_VC  Tagname;
A68_VC  Chars;
};
typedef struct A68t216  A68_216 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t217{
A68_VC  Altname;
struct A68t206  Assoc;
};
typedef struct A68t217  A68_217 ;    /* STRUCT(REF MODE26,MODE206)  */
struct A68t218{
A68_VC  Tagname;
struct A68t205  Range;
};
typedef struct A68t218  A68_218 ;    /* STRUCT(REF MODE26,MODE205)  */
A_VECTOR(struct A68t217 ,A68t220);
typedef struct A68t220  A68_220 ;    /* VECTOR [] MODE217 */
struct A68t219 { A68_INT mode; union {
struct A68t220  mode1;
struct A68t218 * mode2;
struct A68t215 * mode3;
struct A68t216 * mode4;
} data; };
typedef struct A68t219  A68_219 ;    /* UNION(REF MODE220,REF MODE218,REF MODE215,REF MODE216)  */
struct A68t221{
A68_INT  Sort;
A_PAD_INT(PAD_59)
A68_VC  Typename;
struct A68t181  Attr;
struct A68t219  Body;
struct A68t188 * Usage;
};
typedef struct A68t221  A68_221 ;    /* STRUCT(INT,REF MODE26,MODE181,MODE219,REF MODE188)  */
struct A68t222{
A68_INT  Constno;
A_PAD_INT(PAD_60)
};
typedef struct A68t222  A68_222 ;    /* STRUCT(INT)  */
struct A68t223{
A68_INT  Typeno;
A_PAD_INT(PAD_61)
A68_INT  Primno;
A_PAD_INT(PAD_62)
};
typedef struct A68t223  A68_223 ;    /* STRUCT(INT,INT)  */
struct A68t224{
A68_INT  Typeno;
A_PAD_INT(PAD_63)
struct A68t190  Index;
};
typedef struct A68t224  A68_224 ;    /* STRUCT(INT,MODE190)  */
struct A68t225{
A68_INT  Typeno;
A_PAD_INT(PAD_64)
struct A68t205  Range;
};
typedef struct A68t225  A68_225 ;    /* STRUCT(INT,MODE205)  */
struct A68t226{
struct A68t206  Querytype;
};
typedef struct A68t226  A68_226 ;    /* STRUCT(MODE206)  */
struct A68t228 { A68_INT mode; union {
struct A68t222 * mode1;
struct A68t223 * mode2;
struct A68t224 * mode3;
struct A68t226 * mode4;
struct A68t229 * mode5;
struct A68t230 * mode6;
struct A68t211 * mode7;
struct A68t225 * mode8;
struct A68t231 * mode9;
struct A68t232 * mode10;
struct A68t233 * mode11;
struct A68t234 * mode12;
struct A68t235 * mode13;
struct A68t236 * mode14;
struct A68t237 * mode15;
struct A68t238 * mode16;
struct A68t239 * mode17;
struct A68t240 * mode18;
struct A68t241 * mode19;
struct A68t242 * mode20;
struct A68t243 * mode21;
struct A68t244 * mode22;
struct A68t245 * mode23;
struct A68t246 * mode24;
struct A68t247 * mode25;
struct A68t248 * mode26;
struct A68t249 * mode27;
struct A68t250 * mode28;
struct A68t251 * mode29;
struct A68t252 * mode30;
struct A68t253 * mode31;
struct A68t254 * mode32;
struct A68t255 * mode33;
struct A68t256 * mode34;
} data; };
typedef struct A68t228  A68_228 ;    /* UNION(REF MODE222,REF MODE223,REF MODE224,REF MODE226,REF MODE229,REF MODE230,REF MODE211,REF MODE225,REF MODE231,REF MODE232,REF MODE233,REF MODE234,REF MODE235,REF MODE236,REF MODE237,REF MODE238,REF MODE239,REF MODE240,REF MODE241,REF MODE242,REF MODE243,REF MODE244,REF MODE245,REF MODE246,REF MODE247,REF MODE248,REF MODE249,REF MODE250,REF MODE251,REF MODE252,REF MODE253,REF MODE254,REF MODE255,REF MODE256)  */
struct A68t227{
A68_INT  Sort;
A_PAD_INT(PAD_65)
A68_VC  Constname;
struct A68t181  Attr;
struct A68t228  Value;
struct A68t188 * Usage;
};
typedef struct A68t227  A68_227 ;    /* STRUCT(INT,REF MODE26,MODE181,MODE228,REF MODE188)  */
struct A68t229{
A68_INT  Typeno;
A_PAD_INT(PAD_66)
struct A68t32  String;
};
typedef struct A68t229  A68_229 ;    /* STRUCT(INT,REF MODE32)  */
struct A68t230{
A68_INT  Cvoid;
A_PAD_INT(PAD_67)
};
typedef struct A68t230  A68_230 ;    /* STRUCT(INT)  */
struct A68t231{
A68_INT  Typeno;
A_PAD_INT(PAD_68)
A68_INT  Firstno;
A_PAD_INT(PAD_69)
A68_INT  Lastno;
A_PAD_INT(PAD_70)
};
typedef struct A68t231  A68_231 ;    /* STRUCT(INT,INT,INT)  */
struct A68t232{
struct A68t228  Alt;
struct A68t232 * Rest;
};
typedef struct A68t232  A68_232 ;    /* STRUCT(MODE228,REF MODE232)  */
struct A68t233{
A68_INT  Sort;
A_PAD_INT(PAD_71)
A68_INT  Nameno;
A_PAD_INT(PAD_72)
};
typedef struct A68t233  A68_233 ;    /* STRUCT(INT,INT)  */
struct A68t234{
struct A68t228  Sink;
struct A68t228  Source;
};
typedef struct A68t234  A68_234 ;    /* STRUCT(MODE228,MODE228)  */
struct A68t235{
A68_INT  Typeno;
A_PAD_INT(PAD_73)
A68_INT  Altno;
A_PAD_INT(PAD_74)
struct A68t228  Assoc;
};
typedef struct A68t235  A68_235 ;    /* STRUCT(INT,INT,MODE228)  */
struct A68t236{
struct A68t228  Extract;
A68_INT  Typeno;
A_PAD_INT(PAD_75)
A68_INT  Altno;
A_PAD_INT(PAD_76)
};
typedef struct A68t236  A68_236 ;    /* STRUCT(MODE228,INT,INT)  */
struct A68t237{
struct A68t228  Unit;
A68_INT  Fnno;
A_PAD_INT(PAD_77)
A68_INT  Nameno;
A_PAD_INT(PAD_78)
};
typedef struct A68t237  A68_237 ;    /* STRUCT(MODE228,INT,INT)  */
struct A68t238{
struct A68t228  Unit;
struct A68t190  Index;
};
typedef struct A68t238  A68_238 ;    /* STRUCT(MODE228,MODE190)  */
struct A68t239{
struct A68t228  Unit;
struct A68t205  Range;
};
typedef struct A68t239  A68_239 ;    /* STRUCT(MODE228,MODE205)  */
struct A68t240{
struct A68t228  Unit;
struct A68t228  Index;
};
typedef struct A68t240  A68_240 ;    /* STRUCT(MODE228,MODE228)  */
struct A68t241{
struct A68t228  Unit;
struct A68t228  Index;
struct A68t228  From;
};
typedef struct A68t241  A68_241 ;    /* STRUCT(MODE228,MODE228,MODE228)  */
struct A68t242{
struct A68t190  Size;
struct A68t228  Elem;
};
typedef struct A68t242  A68_242 ;    /* STRUCT(MODE190,MODE228)  */
struct A68t243{
struct A68t228  Elem;
struct A68t243 * Rest;
};
typedef struct A68t243  A68_243 ;    /* STRUCT(MODE228,REF MODE243)  */
struct A68t244{
A68_BOOL  String;
A_PAD_BOOL(PAD_79)
A68_INT  Sort;
A_PAD_INT(PAD_80)
struct A68t228  Left;
struct A68t228  Right;
};
typedef struct A68t244  A68_244 ;    /* STRUCT(BOOL,INT,MODE228,MODE228)  */
A_VECTOR(struct A68t271 ,A68t270);
typedef struct A68t270  A68_270 ;    /* VECTOR [] MODE271 */
struct A68t273{
struct A68t228  Tag;
};
typedef struct A68t273  A68_273 ;    /* STRUCT(MODE228)  */
struct A68t268{
A68_INT  Fnno;
A_PAD_INT(PAD_81)
struct A68t270  Macparams;
struct A68t181  Attr;
};
typedef struct A68t268  A68_268 ;    /* STRUCT(INT,REF MODE270,MODE181)  */
struct A68t272 { A68_INT mode; union {
struct A68t189  mode1;
struct A68t201  mode2;
struct A68t215  mode3;
struct A68t273  mode4;
struct A68t268  mode5;
} data; };
typedef struct A68t272  A68_272 ;    /* UNION(MODE189,MODE201,MODE215,MODE273,MODE268)  */
struct A68t271{
A68_INT  Sort;
A_PAD_INT(PAD_82)
struct A68t272  Param;
};
typedef struct A68t271  A68_271 ;    /* STRUCT(INT,MODE272)  */
struct A68t245{
struct A68t268  Inst;
struct A68t228  Right;
};
typedef struct A68t245  A68_245 ;    /* STRUCT(MODE268,MODE228)  */
struct A68t246{
struct A68t228  Left;
struct A68t268  Inst;
struct A68t228  Right;
};
typedef struct A68t246  A68_246 ;    /* STRUCT(MODE228,MODE268,MODE228)  */
struct A68t247{
struct A68t228  Input;
struct A68t288 * Choices;
};
typedef struct A68t247  A68_247 ;    /* STRUCT(MODE228,REF MODE288)  */
struct A68t248{
struct A68t190  Cond;
struct A68t228  True;
struct A68t228  False;
};
typedef struct A68t248  A68_248 ;    /* STRUCT(MODE190,MODE228,MODE228)  */
struct A68t249{
struct A68t190  Repl;
struct A68t228  Body;
};
typedef struct A68t249  A68_249 ;    /* STRUCT(MODE190,MODE228)  */
struct A68t250{
struct A68t276 * Body;
struct A68t228  Output;
};
typedef struct A68t250  A68_250 ;    /* STRUCT(REF MODE276,MODE228)  */
struct A68t251{
struct A68t257 * Body;
struct A68t228  Output;
};
typedef struct A68t251  A68_251 ;    /* STRUCT(REF MODE257,MODE228)  */
struct A68t252{
struct A68t228  Unit;
struct A68t181  Attr;
};
typedef struct A68t252  A68_252 ;    /* STRUCT(MODE228,MODE181)  */
struct A68t253{
struct A68t228  Unit;
struct A68t192  Check;
};
typedef struct A68t253  A68_253 ;    /* STRUCT(MODE228,MODE192)  */
struct A68t254{
struct A68t228  Unit;
};
typedef struct A68t254  A68_254 ;    /* STRUCT(MODE228)  */
struct A68t255{
struct A68t190  Size;
struct A68t228  Char;
};
typedef struct A68t255  A68_255 ;    /* STRUCT(MODE190,MODE228)  */
struct A68t256{
A68_INT  Unull;
A_PAD_INT(PAD_83)
};
typedef struct A68t256  A68_256 ;    /* STRUCT(INT)  */
struct A68t259{
A68_INT  Fnno;
A_PAD_INT(PAD_84)
};
typedef struct A68t259  A68_259 ;    /* STRUCT(INT)  */
struct A68t258 { A68_INT mode; union {
struct A68t182  mode1;
struct A68t194  mode2;
struct A68t207  mode3;
struct A68t222  mode4;
struct A68t259  mode5;
struct A68t260 * mode6;
struct A68t261 * mode7;
struct A68t262 * mode8;
struct A68t263 * mode9;
struct A68t264 * mode10;
struct A68t265 * mode11;
struct A68t266 * mode12;
} data; };
typedef struct A68t258  A68_258 ;    /* UNION(MODE182,MODE194,MODE207,MODE222,MODE259,REF MODE260,REF MODE261,REF MODE262,REF MODE263,REF MODE264,REF MODE265,REF MODE266)  */
struct A68t257{
struct A68t258  Step;
struct A68t257 * Rest;
};
typedef struct A68t257  A68_257 ;    /* STRUCT(MODE258,REF MODE257)  */
struct A68t260{
struct A68t190  Cond;
struct A68t274 * Print;
};
typedef struct A68t260  A68_260 ;    /* STRUCT(MODE190,REF MODE274)  */
struct A68t261{
struct A68t190  Cond;
struct A68t274 * Fault;
};
typedef struct A68t261  A68_261 ;    /* STRUCT(MODE190,REF MODE274)  */
struct A68t262{
struct A68t269 * Letnames;
struct A68t228  Unit;
};
typedef struct A68t262  A68_262 ;    /* STRUCT(REF MODE269,MODE228)  */
struct A68t263{
struct A68t202 * Sizes;
struct A68t268  Inst;
struct A68t269 * Makenames;
};
typedef struct A68t263  A68_263 ;    /* STRUCT(REF MODE202,MODE268,REF MODE269)  */
struct A68t264{
struct A68t228  From;
struct A68t228  To;
};
typedef struct A68t264  A68_264 ;    /* STRUCT(MODE228,MODE228)  */
struct A68t265{
struct A68t202 * Repls;
struct A68t267 * Joins;
};
typedef struct A68t265  A68_265 ;    /* STRUCT(REF MODE202,REF MODE267)  */
struct A68t266{
A68_INT  Stepnull;
A_PAD_INT(PAD_85)
};
typedef struct A68t266  A68_266 ;    /* STRUCT(INT)  */
struct A68t267{
struct A68t264  Join;
struct A68t267 * Rest;
};
typedef struct A68t267  A68_267 ;    /* STRUCT(MODE264,REF MODE267)  */
struct A68t269{
A68_INT  Nameno;
A_PAD_INT(PAD_86)
struct A68t269 * Rest;
};
typedef struct A68t269  A68_269 ;    /* STRUCT(INT,REF MODE269)  */
struct A68t275 { A68_INT mode; union {
A68_VC  mode1;
struct A68t201 * mode2;
} data; };
typedef struct A68t275  A68_275 ;    /* UNION(REF MODE26,REF MODE201)  */
struct A68t274{
struct A68t275  Item;
struct A68t274 * Rest;
};
typedef struct A68t274  A68_274 ;    /* STRUCT(MODE275,REF MODE274)  */
struct A68t277 { A68_INT mode; union {
struct A68t182  mode1;
struct A68t194  mode2;
struct A68t207  mode3;
struct A68t222  mode4;
struct A68t259  mode5;
struct A68t260 * mode6;
struct A68t261 * mode7;
struct A68t278 * mode8;
struct A68t279 * mode9;
struct A68t280 * mode10;
struct A68t281 * mode11;
struct A68t282 * mode12;
struct A68t283 * mode13;
struct A68t284 * mode14;
struct A68t285 * mode15;
struct A68t276 * mode16;
struct A68t286 * mode17;
} data; };
typedef struct A68t277  A68_277 ;    /* UNION(MODE182,MODE194,MODE207,MODE222,MODE259,REF MODE260,REF MODE261,REF MODE278,REF MODE279,REF MODE280,REF MODE281,REF MODE282,REF MODE283,REF MODE284,REF MODE285,REF MODE276,REF MODE286)  */
struct A68t276{
struct A68t277  Step;
struct A68t276 * Rest;
};
typedef struct A68t276  A68_276 ;    /* STRUCT(MODE277,REF MODE276)  */
struct A68t278{
struct A68t262  Seqlet;
};
typedef struct A68t278  A68_278 ;    /* STRUCT(MODE262)  */
struct A68t279{
struct A68t262  Seqvar;
};
typedef struct A68t279  A68_279 ;    /* STRUCT(MODE262)  */
struct A68t280{
struct A68t269 * Pvarnames;
struct A68t228  Init;
};
typedef struct A68t280  A68_280 ;    /* STRUCT(REF MODE269,MODE228)  */
struct A68t281{
struct A68t228  To;
struct A68t228  From;
};
typedef struct A68t281  A68_281 ;    /* STRUCT(MODE228,MODE228)  */
struct A68t282{
struct A68t228  Input;
struct A68t287 * Choices;
};
typedef struct A68t282  A68_282 ;    /* STRUCT(MODE228,REF MODE287)  */
struct A68t283{
struct A68t190  Cond;
struct A68t277  True;
struct A68t277  False;
};
typedef struct A68t283  A68_283 ;    /* STRUCT(MODE190,MODE277,MODE277)  */
struct A68t284{
struct A68t190  Repl;
struct A68t277  Body;
};
typedef struct A68t284  A68_284 ;    /* STRUCT(MODE190,MODE277)  */
struct A68t285{
A68_INT  Seqnull;
A_PAD_INT(PAD_87)
};
typedef struct A68t285  A68_285 ;    /* STRUCT(INT)  */
struct A68t286{
struct A68t190  Size;
struct A68t277  Elem;
};
typedef struct A68t286  A68_286 ;    /* STRUCT(MODE190,MODE277)  */
struct A68t287{
A68_BOOL  Check;
A_PAD_BOOL(PAD_88)
A68_INT  Sort;
A_PAD_INT(PAD_89)
struct A68t228  Test;
struct A68t277  Output;
struct A68t287 * Rest;
};
typedef struct A68t287  A68_287 ;    /* STRUCT(BOOL,INT,MODE228,MODE277,REF MODE287)  */
struct A68t288{
A68_BOOL  Check;
A_PAD_BOOL(PAD_90)
A68_INT  Sort;
A_PAD_INT(PAD_91)
struct A68t228  Test;
struct A68t228  Output;
struct A68t288 * Rest;
};
typedef struct A68t288  A68_288 ;    /* STRUCT(BOOL,INT,MODE228,MODE228,REF MODE288)  */
struct A68t289 { A68_INT mode; union {
struct A68t182  mode1;
struct A68t194  mode2;
struct A68t207  mode3;
struct A68t222  mode4;
struct A68t259  mode5;
} data; };
typedef struct A68t289  A68_289 ;    /* UNION(MODE182,MODE194,MODE207,MODE222,MODE259)  */
struct A68t290{
A68_BOOL  Biop;
A_PAD_BOOL(PAD_92)
A68_VC  Name;
struct A68t270  Macparams;
};
typedef struct A68t290  A68_290 ;    /* STRUCT(BOOL,REF MODE26,REF MODE270)  */
struct A68t291{
struct A68t190  Output;
};
typedef struct A68t291  A68_291 ;    /* STRUCT(MODE190)  */
struct A68t292{
A68_INT  Reform;
A_PAD_INT(PAD_93)
};
typedef struct A68t292  A68_292 ;    /* STRUCT(INT)  */
struct A68t293{
A68_VC  Name;
A68_INT  Contextno;
A_PAD_INT(PAD_94)
struct A68t92  Ctname;
};
typedef struct A68t293  A68_293 ;    /* STRUCT(REF MODE26,INT,MODE92)  */
struct A68t294{
A68_INT  Sort;
A_PAD_INT(PAD_95)
struct A68t228  Init;
struct A68t190  Ambigtime;
struct A68t228  Ambig;
struct A68t190  Delaytime;
};
typedef struct A68t294  A68_294 ;    /* STRUCT(INT,MODE228,MODE190,MODE228,MODE190)  */
struct A68t295{
struct A68t228  Init;
struct A68t190  Delaytime;
};
typedef struct A68t295  A68_295 ;    /* STRUCT(MODE228,MODE190)  */
struct A68t296{
struct A68t228  Init;
};
typedef struct A68t296  A68_296 ;    /* STRUCT(MODE228)  */
struct A68t297{
A68_INT  Sort;
A_PAD_INT(PAD_96)
struct A68t190  Interval;
struct A68t228  Init;
struct A68t190  Skew;
};
typedef struct A68t297  A68_297 ;    /* STRUCT(INT,MODE190,MODE228,MODE190)  */
struct A68t298{
A68_BOOL  Faster;
A_PAD_BOOL(PAD_97)
A68_INT  Sort;
A_PAD_INT(PAD_98)
struct A68t268  Inst;
struct A68t190  Scale;
struct A68t228  Init;
struct A68t190  Skew;
};
typedef struct A68t298  A68_298 ;    /* STRUCT(BOOL,INT,MODE268,MODE190,MODE228,MODE190)  */
struct A68t300 { A68_INT mode; union {
struct A68t273 * mode1;
struct A68t290 * mode2;
struct A68t291 * mode3;
struct A68t292 * mode4;
struct A68t293 * mode5;
struct A68t294 * mode6;
struct A68t295 * mode7;
struct A68t296 * mode8;
struct A68t297 * mode9;
struct A68t298 * mode10;
struct A68t299 * mode11;
struct A68t301 * mode12;
} data; };
typedef struct A68t300  A68_300 ;    /* UNION(REF MODE273,REF MODE290,REF MODE291,REF MODE292,REF MODE293,REF MODE294,REF MODE295,REF MODE296,REF MODE297,REF MODE298,REF MODE299,REF MODE301)  */
struct A68t299{
struct A68t180 * Joincheck;
A68_BOOL  Check;
A_PAD_BOOL(PAD_99)
struct A68t300  Fnbody;
};
typedef struct A68t299  A68_299 ;    /* STRUCT(REF MODE180,BOOL,MODE300)  */
struct A68t301{
A68_INT  Bodynull;
A_PAD_INT(PAD_100)
};
typedef struct A68t301  A68_301 ;    /* STRUCT(INT)  */
struct A68t302{
A68_INT  Sort;
A_PAD_INT(PAD_101)
struct A68t289  Spec;
};
typedef struct A68t302  A68_302 ;    /* STRUCT(INT,MODE289)  */
struct A68t303{
A68_VC  Name;
struct A68t206  Type;
struct A68t181  Attr;
};
typedef struct A68t303  A68_303 ;    /* STRUCT(REF MODE26,MODE206,MODE181)  */
A_VECTOR(struct A68t302 ,A68t305);
typedef struct A68t305  A68_305 ;    /* VECTOR [] MODE302 */
A_VECTOR(struct A68t303 ,A68t306);
typedef struct A68t306  A68_306 ;    /* VECTOR [] MODE303 */
struct A68t304{
A68_INT  Sort;
A_PAD_INT(PAD_102)
A68_BOOL  Macro;
A_PAD_BOOL(PAD_103)
A68_VC  Fnname;
struct A68t305  Macspecs;
struct A68t181  Attr;
struct A68t269 * Inputs;
struct A68t269 * Outputs;
struct A68t306  Nametypes;
struct A68t300  Fnbody;
struct A68t188 * Usage;
};
typedef struct A68t304  A68_304 ;    /* STRUCT(INT,BOOL,REF MODE26,REF MODE305,MODE181,REF MODE269,REF MODE269,REF MODE306,MODE300,REF MODE188)  */
A_VECTOR(struct A68t187 *,A68t308);
typedef struct A68t308  A68_308 ;    /* VECTOR [] REF MODE187 */
A_VECTOR(struct A68t203 *,A68t309);
typedef struct A68t309  A68_309 ;    /* VECTOR [] REF MODE203 */
A_VECTOR(struct A68t221 *,A68t310);
typedef struct A68t310  A68_310 ;    /* VECTOR [] REF MODE221 */
A_VECTOR(struct A68t227 *,A68t311);
typedef struct A68t311  A68_311 ;    /* VECTOR [] REF MODE227 */
A_VECTOR(struct A68t304 *,A68t312);
typedef struct A68t312  A68_312 ;    /* VECTOR [] REF MODE304 */
struct A68t307{
struct A68t308  Attrs;
struct A68t309  Ints;
struct A68t310  Types;
struct A68t311  Consts;
struct A68t312  Fns;
};
typedef struct A68t307  A68_307 ;    /* STRUCT(REF MODE308,REF MODE309,REF MODE310,REF MODE311,REF MODE312)  */
struct A68t313{
A68_INT  Closureno;
A_PAD_INT(PAD_104)
A68_INT  Sort;
A_PAD_INT(PAD_105)
struct A68t307 * Environ;
};
typedef struct A68t313  A68_313 ;    /* STRUCT(INT,INT,REF MODE307)  */
struct A68t314{
struct A68t313  Outer;
struct A68t314 * Rest;
};
typedef struct A68t314  A68_314 ;    /* STRUCT(MODE313,REF MODE314)  */
A_VECTOR(struct A68t314 ,A68t316);
typedef struct A68t316  A68_316 ;    /* VECTOR [] MODE314 */
struct A68t315{
struct A68t316  Outers;
struct A68t315 * Rest;
};
typedef struct A68t315  A68_315 ;    /* STRUCT(REF MODE316,REF MODE315)  */
struct A68t317{
A68_INT  Max_closureno;
A_PAD_INT(PAD_106)
struct A68t314 * Outers;
struct A68t314 * Freelist;
struct A68t315 * Outerslist;
};
typedef struct A68t317  A68_317 ;    /* STRUCT(INT,REF MODE314,REF MODE314,REF MODE315)  */
A_VECTOR(struct A68t314 *,A68t318);
typedef struct A68t318  A68_318 ;    /* VECTOR [] REF MODE314 */

A_PROCEDURE(struct A68t193 *,A68t319,(A68_INT ),(A68_INT ,void *));
typedef struct A68t319  A68_319 ;    /* PROC(INT) REF MODE193 */

A_PROCEDURE(struct A68t194 *,A68t320,(A68_INT ),(A68_INT ,void *));
typedef struct A68t320  A68_320 ;    /* PROC(INT) REF MODE194 */

A_PROCEDURE(struct A68t198 *,A68t321,(struct A68t190 ),(struct A68t190 ,void *));
typedef struct A68t321  A68_321 ;    /* PROC(MODE190) REF MODE198 */

A_PROCEDURE(struct A68t201 *,A68t322,(struct A68t190 ),(struct A68t190 ,void *));
typedef struct A68t322  A68_322 ;    /* PROC(MODE190) REF MODE201 */

A_PROCEDURE(struct A68t207 *,A68t323,(A68_INT ),(A68_INT ,void *));
typedef struct A68t323  A68_323 ;    /* PROC(INT) REF MODE207 */

A_PROCEDURE(struct A68t211 *,A68t324,(struct A68t206 ),(struct A68t206 ,void *));
typedef struct A68t324  A68_324 ;    /* PROC(MODE206) REF MODE211 */

A_PROCEDURE(struct A68t215 *,A68t325,(struct A68t206 ),(struct A68t206 ,void *));
typedef struct A68t325  A68_325 ;    /* PROC(MODE206) REF MODE215 */

A_PROCEDURE(struct A68t222 *,A68t326,(A68_INT ),(A68_INT ,void *));
typedef struct A68t326  A68_326 ;    /* PROC(INT) REF MODE222 */

A_PROCEDURE(struct A68t226 *,A68t327,(struct A68t206 ),(struct A68t206 ,void *));
typedef struct A68t327  A68_327 ;    /* PROC(MODE206) REF MODE226 */

A_PROCEDURE(struct A68t278 *,A68t328,(struct A68t262 ),(struct A68t262 ,void *));
typedef struct A68t328  A68_328 ;    /* PROC(MODE262) REF MODE278 */

A_PROCEDURE(struct A68t279 *,A68t329,(struct A68t262 ),(struct A68t262 ,void *));
typedef struct A68t329  A68_329 ;    /* PROC(MODE262) REF MODE279 */

A_PROCEDURE(struct A68t254 *,A68t330,(struct A68t228 ),(struct A68t228 ,void *));
typedef struct A68t330  A68_330 ;    /* PROC(MODE228) REF MODE254 */

A_PROCEDURE(struct A68t273 *,A68t331,(struct A68t228 ),(struct A68t228 ,void *));
typedef struct A68t331  A68_331 ;    /* PROC(MODE228) REF MODE273 */

A_PROCEDURE(struct A68t259 *,A68t332,(A68_INT ),(A68_INT ,void *));
typedef struct A68t332  A68_332 ;    /* PROC(INT) REF MODE259 */

A_PROCEDURE(struct A68t291 *,A68t333,(struct A68t190 ),(struct A68t190 ,void *));
typedef struct A68t333  A68_333 ;    /* PROC(MODE190) REF MODE291 */

A_PROCEDURE(struct A68t296 *,A68t334,(struct A68t228 ),(struct A68t228 ,void *));
typedef struct A68t334  A68_334 ;    /* PROC(MODE228) REF MODE296 */

A_PROCEDURE(struct A68t199 *,A68t335,(A68_INT ),(A68_INT ,void *));
typedef struct A68t335  A68_335 ;    /* PROC(INT) REF MODE199 */

A_PROCEDURE(struct A68t182 *,A68t336,(A68_INT ),(A68_INT ,void *));
typedef struct A68t336  A68_336 ;    /* PROC(INT) REF MODE182 */

A_PROCEDURE(struct A68t189 *,A68t337,(struct A68t181 ),(struct A68t181 ,void *));
typedef struct A68t337  A68_337 ;    /* PROC(MODE181) REF MODE189 */

A_PROCEDURE(struct A68t185 *,A68t338,(struct A68t181 ),(struct A68t181 ,void *));
typedef struct A68t338  A68_338 ;    /* PROC(MODE181) REF MODE185 */
A_VECTOR(struct A68t179 *,A68t339);
typedef struct A68t339  A68_339 ;    /* VECTOR [] REF MODE179 */

A_PROCEDURE(struct A68t191 *,A68t340,(A68_INT ),(A68_INT ,void *));
typedef struct A68t340  A68_340 ;    /* PROC(INT) REF MODE191 */

A_PROCEDURE(A68_INT ,A68t341,(struct A68t190 ,struct A68t108 ),(struct A68t190 ,struct A68t108 ,void *));
typedef struct A68t341  A68_341 ;    /* PROC(MODE190,MODE108) INT */

A_PROCEDURE(A68_INT ,A68t342,(struct A68t190 ),(struct A68t190 ,void *));
typedef struct A68t342  A68_342 ;    /* PROC(MODE190) INT */

A_PROCEDURE(A68_VOID ,A68t343,(struct A68t190 ,struct A68t190 *),(struct A68t190 ,struct A68t190 *,void *));
typedef struct A68t343  A68_343 ;    /* PROC(MODE190) MODE190 */

A_PROCEDURE(struct A68t187 *,A68t344,(struct A68t313 ),(struct A68t313 ,void *));
typedef struct A68t344  A68_344 ;    /* PROC(MODE313) REF MODE187 */

A_PROCEDURE(struct A68t203 *,A68t345,(struct A68t313 ),(struct A68t313 ,void *));
typedef struct A68t345  A68_345 ;    /* PROC(MODE313) REF MODE203 */

A_PROCEDURE(struct A68t221 *,A68t346,(struct A68t313 ),(struct A68t313 ,void *));
typedef struct A68t346  A68_346 ;    /* PROC(MODE313) REF MODE221 */

A_PROCEDURE(struct A68t227 *,A68t347,(struct A68t313 ),(struct A68t313 ,void *));
typedef struct A68t347  A68_347 ;    /* PROC(MODE313) REF MODE227 */

A_PROCEDURE(struct A68t304 *,A68t348,(struct A68t313 ),(struct A68t313 ,void *));
typedef struct A68t348  A68_348 ;    /* PROC(MODE313) REF MODE304 */

A_PROCEDURE(A68_INT ,A68t349,(struct A68t188 *,struct A68t308 ),(struct A68t188 *,struct A68t308 ,void *));
typedef struct A68t349  A68_349 ;    /* PROC(REF MODE188,REF MODE308) INT */

A_PROCEDURE(A68_INT ,A68t350,(struct A68t188 *,struct A68t309 ),(struct A68t188 *,struct A68t309 ,void *));
typedef struct A68t350  A68_350 ;    /* PROC(REF MODE188,REF MODE309) INT */

A_PROCEDURE(A68_INT ,A68t351,(struct A68t188 *,struct A68t310 ),(struct A68t188 *,struct A68t310 ,void *));
typedef struct A68t351  A68_351 ;    /* PROC(REF MODE188,REF MODE310) INT */

A_PROCEDURE(A68_INT ,A68t352,(struct A68t188 *,struct A68t311 ),(struct A68t188 *,struct A68t311 ,void *));
typedef struct A68t352  A68_352 ;    /* PROC(REF MODE188,REF MODE311) INT */

A_PROCEDURE(A68_INT ,A68t353,(struct A68t188 *,struct A68t312 ),(struct A68t188 *,struct A68t312 ,void *));
typedef struct A68t353  A68_353 ;    /* PROC(REF MODE188,REF MODE312) INT */

A_PROCEDURE(struct A68t187 *,A68t354,(struct A68t182 ,struct A68t317 *,struct A68t307 *),(struct A68t182 ,struct A68t317 *,struct A68t307 *,void *));
typedef struct A68t354  A68_354 ;    /* PROC(MODE182,REF MODE317,REF MODE307) REF MODE187 */

A_PROCEDURE(struct A68t203 *,A68t355,(struct A68t194 ,struct A68t317 *,struct A68t307 *),(struct A68t194 ,struct A68t317 *,struct A68t307 *,void *));
typedef struct A68t355  A68_355 ;    /* PROC(MODE194,REF MODE317,REF MODE307) REF MODE203 */

A_PROCEDURE(struct A68t221 *,A68t356,(struct A68t207 ,struct A68t317 *,struct A68t307 *),(struct A68t207 ,struct A68t317 *,struct A68t307 *,void *));
typedef struct A68t356  A68_356 ;    /* PROC(MODE207,REF MODE317,REF MODE307) REF MODE221 */

A_PROCEDURE(struct A68t227 *,A68t357,(struct A68t222 ,struct A68t317 *,struct A68t307 *),(struct A68t222 ,struct A68t317 *,struct A68t307 *,void *));
typedef struct A68t357  A68_357 ;    /* PROC(MODE222,REF MODE317,REF MODE307) REF MODE227 */

A_PROCEDURE(struct A68t304 *,A68t358,(struct A68t259 ,struct A68t317 *,struct A68t307 *),(struct A68t259 ,struct A68t317 *,struct A68t307 *,void *));
typedef struct A68t358  A68_358 ;    /* PROC(MODE259,REF MODE317,REF MODE307) REF MODE304 */

A_PROCEDURE(struct A68t210 *,A68t359,(struct A68t304 *),(struct A68t304 *,void *));
typedef struct A68t359  A68_359 ;    /* PROC(REF MODE304) REF MODE210 */

A_PROCEDURE(A68_VOID ,A68t360,(struct A68t209 *,struct A68t190 *),(struct A68t209 *,struct A68t190 *,void *));
typedef struct A68t360  A68_360 ;    /* PROC(REF MODE209) MODE190 */

A_PROCEDURE(A68_VOID ,A68t361,(struct A68t206 ,struct A68t307 *,struct A68t190 *),(struct A68t206 ,struct A68t307 *,struct A68t190 *,void *));
typedef struct A68t361  A68_361 ;    /* PROC(MODE206,REF MODE307) MODE190 */

A_PROCEDURE(struct A68t304 *,A68t362,(struct A68t304 *,struct A68t307 *,struct A68t307 *),(struct A68t304 *,struct A68t307 *,struct A68t307 *,void *));
typedef struct A68t362  A68_362 ;    /* PROC(REF MODE304,REF MODE307,REF MODE307) REF MODE304 */

A_PROCEDURE(A68_VOID ,A68t363,(struct A68t269 *,struct A68t304 *,struct A68t206 *),(struct A68t269 *,struct A68t304 *,struct A68t206 *,void *));
typedef struct A68t363  A68_363 ;    /* PROC(REF MODE269,REF MODE304) MODE206 */

A_PROCEDURE(A68_INT ,A68t364,(struct A68t269 *),(struct A68t269 *,void *));
typedef struct A68t364  A68_364 ;    /* PROC(REF MODE269) INT */

A_PROCEDURE(A68_INT ,A68t365,(struct A68t269 *,A68_INT ),(struct A68t269 *,A68_INT ,void *));
typedef struct A68t365  A68_365 ;    /* PROC(REF MODE269,INT) INT */

A_PROCEDURE(A68_VOID ,A68t366,(struct A68t228 ,struct A68t304 *,struct A68t307 *,struct A68t206 *),(struct A68t228 ,struct A68t304 *,struct A68t307 *,struct A68t206 *,void *));
typedef struct A68t366  A68_366 ;    /* PROC(MODE228,REF MODE304,REF MODE307) MODE206 */

A_PROCEDURE(A68_VOID ,A68t367,(struct A68t206 ,struct A68t307 *,struct A68t206 *),(struct A68t206 ,struct A68t307 *,struct A68t206 *,void *));
typedef struct A68t367  A68_367 ;    /* PROC(MODE206,REF MODE307) MODE206 */

A_PROCEDURE(A68_BOOL ,A68t368,(struct A68t206 ,struct A68t206 ,struct A68t307 *,struct A68t307 *,A68_BOOL ),(struct A68t206 ,struct A68t206 ,struct A68t307 *,struct A68t307 *,A68_BOOL ,void *));
typedef struct A68t368  A68_368 ;    /* PROC(MODE206,MODE206,REF MODE307,REF MODE307,BOOL) BOOL */

A_PROCEDURE(A68_INT ,A68t369,(struct A68t237 *,struct A68t307 *),(struct A68t237 *,struct A68t307 *,void *));
typedef struct A68t369  A68_369 ;    /* PROC(REF MODE237,REF MODE307) INT */

A_PROCEDURE(A68_VOID ,A68t370,(A68_BOOL ,struct A68t53 *),(A68_BOOL ,struct A68t53 *,void *));
typedef struct A68t370  A68_370 ;    /* PROC(BOOL) MODE53 */

A_PROCEDURE(A68_BOOL ,A68t371,(struct A68t53 ,A68_INT ),(struct A68t53 ,A68_INT ,void *));
typedef struct A68t371  A68_371 ;    /* PROC(MODE53,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t372,(struct A68t53 ,A68_INT ,struct A68t53 *),(struct A68t53 ,A68_INT ,struct A68t53 *,void *));
typedef struct A68t372  A68_372 ;    /* PROC(REF MODE53,INT) REF MODE53 */

A_PROCEDURE(A68_VOID ,A68t373,(struct A68t53 *),(struct A68t53 *,void *));
typedef struct A68t373  A68_373 ;    /* PROC MODE53 */

A_PROCEDURE(A68_VOID ,A68t374,(struct A68t32 ,struct A68t53 *),(struct A68t32 ,struct A68t53 *,void *));
typedef struct A68t374  A68_374 ;    /* PROC(MODE32) MODE53 */

A_PROCEDURE(A68_VOID ,A68t375,(struct A68t313 ,struct A68t36 ,struct A68t130 ,struct A68t173 ,struct A68t108 ),(struct A68t313 ,struct A68t36 ,struct A68t130 ,struct A68t173 ,struct A68t108 ,void *));
typedef struct A68t375  A68_375 ;    /* PROC(MODE313,MODE36,MODE130,MODE173,MODE108) VOID */

A_PROCEDURE(A68_VOID ,A68t376,(struct A68t173 *),(struct A68t173 *,void *));
typedef struct A68t376  A68_376 ;    /* PROC MODE173 */
struct A68t377{
A68_INT  Step;
A_PAD_INT(PAD_107)
A68_INT  Dither;
A_PAD_INT(PAD_108)
};
typedef struct A68t377  A68_377 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_BOOL ,A68t378,(A68_INT ,A68_INT ,A68_BOOL ),(A68_INT ,A68_INT ,A68_BOOL ,void *));
typedef struct A68t378  A68_378 ;    /* PROC(INT,INT,BOOL) BOOL */

A_PROCEDURE(A68_BOOL ,A68t379,(A68_VC ),(A68_VC ,void *));
typedef struct A68t379  A68_379 ;    /* PROC(MODE26) BOOL */

A_PROCEDURE(A68_BITS ,A68t380,(A68_INT ),(A68_INT ,void *));
typedef struct A68t380  A68_380 ;    /* PROC(INT) BITS */

A_PROCEDURE(A68_BITS ,A68t381,(A68_INT ,A68_BITS ,A68_BOOL ),(A68_INT ,A68_BITS ,A68_BOOL ,void *));
typedef struct A68t381  A68_381 ;    /* PROC(INT,BITS,BOOL) BITS */

A_PROCEDURE(A68_VOID ,A68t382,(struct A68t377 *),(struct A68t377 *,void *));
typedef struct A68t382  A68_382 ;    /* PROC MODE377 */

A_PROCEDURE(A68_VOID ,A68t383,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t383  A68_383 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t384,(struct A68t144 ),(struct A68t144 ,void *));
typedef struct A68t384  A68_384 ;    /* PROC(MODE144) VOID */

A_PROCEDURE(A68_VOID ,A68t385,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t385  A68_385 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,60,A68t386);
typedef struct A68t386  A68_386 ;    /* STRUCT 60 CHAR */
struct A68t388 ;

A_PROCEDURE(A68_VOID ,A68t389,(struct A68t388 *,struct A68t108 ),(struct A68t388 *,struct A68t108 ,void *));
typedef struct A68t389  A68_389 ;    /* PROC(REF MODE388,MODE108) VOID */
struct A68t388{
A68_INT  Number;
A_PAD_INT(PAD_109)
A68_INT  Delay;
A_PAD_INT(PAD_110)
A68_INT  Bias;
A_PAD_INT(PAD_111)
A68_BITS  Clause_state;
A_PAD_BITS(PAD_112)
struct A68t389  Action;
};
typedef struct A68t388  A68_388 ;    /* STRUCT(INT,INT,INT,BITS,MODE389)  */
struct A68t390{
struct A68t388 * Ind;
A68_INT  Indent;
A_PAD_INT(PAD_113)
A68_INT  Bias;
A_PAD_INT(PAD_114)
A68_BITS  Clause_state;
A_PAD_BITS(PAD_115)
struct A68t391 * Markers;
struct A68t390 * Rest;
};
typedef struct A68t390  A68_390 ;    /* STRUCT(REF MODE388,INT,INT,BITS,REF MODE391,REF MODE390)  */
struct A68t391{
A68_INT  Pos;
A_PAD_INT(PAD_116)
A68_INT  Cnt;
A_PAD_INT(PAD_117)
A68_INT  Bias;
A_PAD_INT(PAD_118)
struct A68t391 * Rest;
};
typedef struct A68t391  A68_391 ;    /* STRUCT(INT,INT,INT,REF MODE391)  */
struct A68t392{
A68_INT  Item_cnt;
A_PAD_INT(PAD_119)
struct A68t391 * Marker;
struct A68t392 * Rest;
};
typedef struct A68t392  A68_392 ;    /* STRUCT(INT,REF MODE391,REF MODE392)  */

A_PROCEDURE(struct A68t391 *,A68t393,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t393  A68_393 ;    /* PROC(INT,INT) REF MODE391 */

A_PROCEDURE(struct A68t391 *,A68t394,(struct A68t391 *,struct A68t391 **),(struct A68t391 *,struct A68t391 **,void *));
typedef struct A68t394  A68_394 ;    /* PROC(REF MODE391,REF REF MODE391) REF MODE391 */

A_PROCEDURE(A68_VOID ,A68t395,(A68_VC ,struct A68t108 ),(A68_VC ,struct A68t108 ,void *));
typedef struct A68t395  A68_395 ;    /* PROC(REF MODE26,MODE108) VOID */
A_ISTRUCT(A68_CHAR ,32,A68t396);
typedef struct A68t396  A68_396 ;    /* STRUCT 32 CHAR */

A_PROCEDURE(A68_VOID ,A68t397,(A68_INT ,struct A68t108 ),(A68_INT ,struct A68t108 ,void *));
typedef struct A68t397  A68_397 ;    /* PROC(INT,MODE108) VOID */

A_PROCEDURE(A68_BOOL ,A68t398,(A68_INT ,A68_INT ,A68_INT ,struct A68t390 *,A68_BOOL ,struct A68t108 ),(A68_INT ,A68_INT ,A68_INT ,struct A68t390 *,A68_BOOL ,struct A68t108 ,void *));
typedef struct A68t398  A68_398 ;    /* PROC(INT,INT,INT,REF MODE390,BOOL,MODE108) BOOL */

A_PROCEDURE(A68_VOID ,A68t399,(struct A68t390 *),(struct A68t390 *,void *));
typedef struct A68t399  A68_399 ;    /* PROC(REF MODE390) VOID */

A_PROCEDURE(struct A68t390 *,A68t400,(struct A68t388 *),(struct A68t388 *,void *));
typedef struct A68t400  A68_400 ;    /* PROC(REF MODE388) REF MODE390 */
A_ISTRUCT(A68_CHAR ,29,A68t401);
typedef struct A68t401  A68_401 ;    /* STRUCT 29 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t402);
typedef struct A68t402  A68_402 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(struct A68t52 ,6,A68t403);
typedef struct A68t403  A68_403 ;    /* STRUCT 6 MODE52 */

A_PROCEDURE(A68_BOOL ,A68t404,(struct A68t390 *,A68_BOOL ,struct A68t108 ),(struct A68t390 *,A68_BOOL ,struct A68t108 ,void *));
typedef struct A68t404  A68_404 ;    /* PROC(REF MODE390,BOOL,MODE108) BOOL */

A_PROCEDURE(A68_BOOL ,A68t405,(A68_BOOL *,struct A68t108 ),(A68_BOOL *,struct A68t108 ,void *));
typedef struct A68t405  A68_405 ;    /* PROC(REF BOOL,MODE108) BOOL */
A_VECTOR(struct A68t388 ,A68t406);
typedef struct A68t406  A68_406 ;    /* VECTOR [] MODE388 */

A_PROCEDURE(A68_VOID ,A68t407,(A68_BOOL ,struct A68t406 *),(A68_BOOL ,struct A68t406 *,void *));
typedef struct A68t407  A68_407 ;    /* PROC(BOOL) MODE406 */

A_PROCEDURE(A68_VOID ,A68t408,(struct A68t32 ,A68_INT ,A68_INT ,A68_BITS ,struct A68t389 ),(struct A68t32 ,A68_INT ,A68_INT ,A68_BITS ,struct A68t389 ,void *));
typedef struct A68t408  A68_408 ;    /* PROC(MODE32,INT,INT,BITS,MODE389) VOID */
A_ISTRUCT(A68_CHAR ,42,A68t409);
typedef struct A68t409  A68_409 ;    /* STRUCT 42 CHAR */
A_ISTRUCT(struct A68t52 ,2,A68t410);
typedef struct A68t410  A68_410 ;    /* STRUCT 2 MODE52 */
A_ISTRUCT(A68_INT ,11,A68t411);
typedef struct A68t411  A68_411 ;    /* STRUCT 11 INT */
A_ISTRUCT(A68_INT ,2,A68t412);
typedef struct A68t412  A68_412 ;    /* STRUCT 2 INT */
A_ISTRUCT(A68_INT ,3,A68t413);
typedef struct A68t413  A68_413 ;    /* STRUCT 3 INT */
A_ISTRUCT(A68_INT ,6,A68t414);
typedef struct A68t414  A68_414 ;    /* STRUCT 6 INT */
A_ISTRUCT(A68_INT ,4,A68t415);
typedef struct A68t415  A68_415 ;    /* STRUCT 4 INT */
A_ISTRUCT(A68_INT ,13,A68t416);
typedef struct A68t416  A68_416 ;    /* STRUCT 13 INT */
A_ISTRUCT(A68_INT ,21,A68t417);
typedef struct A68t417  A68_417 ;    /* STRUCT 21 INT */
A_ISTRUCT(A68_INT ,24,A68t418);
typedef struct A68t418  A68_418 ;    /* STRUCT 24 INT */
A_ISTRUCT(A68_INT ,7,A68t419);
typedef struct A68t419  A68_419 ;    /* STRUCT 7 INT */

A_PROCEDURE(A68_VOID ,A68t420,(struct A68t313 ,struct A68t395 ,A68_INT ,struct A68t53 ,struct A68t173 ,struct A68t108 ),(struct A68t313 ,struct A68t395 ,A68_INT ,struct A68t53 ,struct A68t173 ,struct A68t108 ,void *));
typedef struct A68t420  A68_420 ;    /* PROC(MODE313,MODE395,INT,MODE53,MODE173,MODE108) VOID */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from layout_tables --- */
#define KFCATRN_no_class 0
#define LFCATRN_space_class 1
#define WFCATRN_op_class 12
#define AGCATRN_dotdot_class 16
#define YFCATRN_slashslash_class 14
#define BGCATRN_becomes_class 17
#define KGCATRN_to_class 26
#define NFCATRN_fnname_class 3
extern A68_VOID  DJCATRN_set_next_class(A68_INT );
extern A68_VOID  FJCATRN_set_last_class(A68_INT );
extern A68_BOOL  UJCATRN_space_required(A68_VC );
#define BHCATRN_let_clause 3
#define CHCATRN_make_clause 4
#define DHCATRN_join_clause 5
#define EHCATRN_case_clause 6
#define FHCATRN_if_clause 7
#define GHCATRN_print_clause 8
#define ZGCATRN_decstep_clause 1
#define AHCATRN_dec_clause 2
#define HHCATRN_seqstat_clause 9
#define IHCATRN_str_clause 10
#define JHCATRN_newalts_clause 11
#define KHCATRN_terms_clause 12
#define LHCATRN_block_clause 13
#define NHCATRN_monadic_clause 15
#define MHCATRN_serorseq_clause 14
#define PHCATRN_dont_fold 0X0U
#define RHCATRN_fold_if_no_fit 0X2U
#define QHCATRN_fold_if_gt_dither 0X1U
#define UHCATRN_fold_at_sep_if_folded 0X8U
#define VHCATRN_fold_at_every_sep 0XcU
#define XHCATRN_take_newline 0X10U
#define YHCATRN_take_extra_nl 0X20U
#define SHCATRN_clause_head_mask 0X3U
#define WHCATRN_clause_sep_mask 0XcU
#define ZHCATRN_clause_tail_mask 0X30U
#define AICATRN_fold_to_indent 0X40U
#define CICATRN_fold_mode_mask 0Xc0U
#define EICATRN_step_indent 0X200U
extern A68_BITS  QICATRN_get_clause_state(A68_INT );
extern A68_VOID  MKCATRN_get_indent_data(A68_377 *);
extern A68_BOOL  EFCATRN_layout_format_changed(void);
/* --- End of imports from layout_tables --- */


/* --- Imports from write_ella --- */
extern A68_VOID  TINBTRN_write_ella(struct A68t313 ,struct A68t36 ,struct A68t130 ,struct A68t173 ,struct A68t108 );
/* --- End of imports from write_ella --- */


/* --- Imports from syntax_inds --- */
extern A68_BOOL  XDBATRN_includes(struct A68t53 ,A68_INT );
extern A68_INT  NDBATRN_pass_all_terminators;
#define AGBATRN_adecls_ind 1
#define BGBATRN_adelay_ind 2
#define DGBATRN_arith_ind 4
#define EGBATRN_attrbr_ind 5
#define GGBATRN_attrdec_ind 7
#define KGBATRN_attrstr_ind 11
#define MGBATRN_becomes_ind 13
#define OGBATRN_block_ind 15
#define PGBATRN_body_ind 16
#define QGBATRN_caseelse_ind 17
#define RGBATRN_caseof_ind 18
#define UGBATRN_ccharrange_ind 21
#define VGBATRN_cdecls_ind 22
#define XGBATRN_choice_ind 24
#define EHBATRN_constdec_ind 31
#define IHBATRN_crange_ind 35
#define LHBATRN_dotdot_ind 38
#define MHBATRN_else_ind 39
#define NHBATRN_elseof_ind 40
#define OHBATRN_endalts_ind 41
#define PHBATRN_endassign_ind 42
#define SHBATRN_endblock_ind 45
#define UHBATRN_endcase_ind 47
#define VHBATRN_endchars_ind 48
#define WHBATRN_endchoice_ind 49
#define AIBATRN_enddec_ind 53
#define DIBATRN_endfnspec_ind 56
#define EIBATRN_endformula_ind 57
#define FIBATRN_endif_ind 58
#define GIBATRN_endindex_ind 59
#define HIBATRN_endint_ind 60
#define IIBATRN_enditem_ind 61
#define JIBATRN_endmacspec_ind 62
#define KIBATRN_endmakemult_ind 63
#define LIBATRN_endmparams_ind 64
#define NIBATRN_endnamelist_ind 66
#define OIBATRN_endouterdec_ind 67
#define QIBATRN_endrange_ind 69
#define RIBATRN_endrepl_ind 70
#define SIBATRN_endreplace_ind 71
#define TIBATRN_endrow_ind 72
#define UIBATRN_endseqrepl_ind 73
#define VIBATRN_endseqrow_ind 74
#define WIBATRN_endsequence_ind 75
#define XIBATRN_endseries_ind 76
#define YIBATRN_endstep_ind 77
#define ZIBATRN_endstr_ind 78
#define AJBATRN_endstring_ind 79
#define DJBATRN_enduconc_ind 82
#define EJBATRN_endudinst_ind 83
#define HJBATRN_enduminst_ind 86
#define JJBATRN_endurepl_ind 88
#define KJBATRN_esac_ind 89
#define LJBATRN_expmacdec_ind 90
#define MJBATRN_expmparams_ind 91
#define OJBATRN_faster_ind 93
#define PJBATRN_fault_ind 94
#define QJBATRN_fbr_ind 95
#define RJBATRN_fdecls_ind 96
#define TJBATRN_fi_ind 98
#define UJBATRN_fif_ind 99
#define VJBATRN_finishjoin_ind 100
#define AKBATRN_fndec_ind 105
#define CKBATRN_fnname_ind 107
#define DKBATRN_fnspec_ind 108
#define EKBATRN_forjoin_ind 109
#define FKBATRN_formula_ind 110
#define GKBATRN_idecls_ind 111
#define HKBATRN_idelay_ind 112
#define JKBATRN_import_ind 114
#define NKBATRN_intdec_ind 118
#define PKBATRN_join_ind 120
#define QKBATRN_let_ind 121
#define SKBATRN_letstr_ind 123
#define TKBATRN_macdec_ind 124
#define VKBATRN_macspec_ind 126
#define WKBATRN_make_ind 127
#define YKBATRN_makemult_ind 129
#define ZKBATRN_mdecls_ind 130
#define ALBATRN_mparams_ind 131
#define CLBATRN_namelist_ind 133
#define DLBATRN_newalts_ind 134
#define ELBATRN_newchars_ind 135
#define FLBATRN_newint_ind 136
#define GLBATRN_nobody_ind 137
#define JLBATRN_operator_ind 140
#define MLBATRN_print_ind 143
#define NLBATRN_printif_ind 144
#define PLBATRN_ram_ind 146
#define QLBATRN_reform_ind 147
#define SLBATRN_sample_ind 149
#define TLBATRN_sep_ind 150
#define VLBATRN_seqassign_ind 152
#define WLBATRN_seqbr_ind 153
#define XLBATRN_seqcase_ind 154
#define YLBATRN_seqchoice_ind 155
#define ZLBATRN_seqif_ind 156
#define AMBATRN_seqlet_ind 157
#define CMBATRN_seqletstr_ind 159
#define DMBATRN_seqpvar_ind 160
#define FMBATRN_seqpvarstr_ind 162
#define GMBATRN_seqrepl_ind 163
#define HMBATRN_seqrow_ind 164
#define IMBATRN_seqstat_ind 165
#define JMBATRN_seqvar_ind 166
#define LMBATRN_seqvarstr_ind 168
#define MMBATRN_slashslash_ind 169
#define NMBATRN_slower_ind 170
#define OMBATRN_startcharrange_ind 171
#define PMBATRN_startjoin_ind 172
#define QMBATRN_startrange_ind 173
#define RMBATRN_startrepl_ind 174
#define SMBATRN_tbr_ind 175
#define TMBATRN_tdecls_ind 176
#define UMBATRN_terms_ind 177
#define WMBATRN_then_ind 179
#define ZMBATRN_to_ind 182
#define ANBATRN_trow_ind 183
#define BNBATRN_tstr_ind 184
#define CNBATRN_tstring_ind 185
#define FNBATRN_typedec_ind 188
#define HNBATRN_ualts_ind 190
#define KNBATRN_ubr_ind 193
#define LNBATRN_ucase_ind 194
#define MNBATRN_uconc_ind 195
#define NNBATRN_udinst_ind 196
#define ONBATRN_udyindex_ind 197
#define RNBATRN_uif_ind 200
#define SNBATRN_uindex_ind 201
#define UNBATRN_uminst_ind 203
#define ZNBATRN_urepl_ind 208
#define AOBATRN_ureplace_ind 209
#define BOBATRN_urow_ind 210
#define COBATRN_usequence_ind 211
#define DOBATRN_useries_ind 212
#define EOBATRN_ustr_ind 213
#define FOBATRN_ustring_ind 214
#define GOBATRN_utrim_ind 215
#define KDBATRN_num_inds 215
extern A68_46  XECATRN_ind_names;
/* --- End of imports from syntax_inds --- */


/* --- Imports from modeprocs --- */
/* --- End of imports from modeprocs --- */


/* --- Imports from assmodes --- */
/* --- End of imports from assmodes --- */


/* --- Imports from options --- */
/* --- End of imports from options --- */


/* --- Imports from messageproc --- */
extern A68_109  SHAAOSI_system;
/* --- End of imports from messageproc --- */


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
extern A68_INT  FVCAOST_max(A68_INT ,A68_INT );
extern A68_INT  JVCAOST_min(A68_INT ,A68_INT );
extern A68_VOID  NKDAOST_sysfault(A68_VC );
/* --- End of imports from basics --- */


/* --- Imports from putstrings --- */
extern A68_VOID  LRAAOSL_newline(struct A68t34 *);
extern A68_VOID  GFBAOSL_put(struct A68t34 *,struct A68t85 );
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void YECATRN(void);   /* layout_tables */
extern void ZOMBTRN(void);   /* write_ella */
extern void FDBATRN(void);   /* syntax_inds */
extern void HNMATRN(void);   /* modeprocs */
extern void BAAATRN(void);   /* assmodes */
extern void BAAAOST(void);   /* options */
extern void JFAAOSI(void);   /* messageproc */
extern void PCAAOST(void);   /* osinterface */
extern void JSCAOST(void);   /* basics */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_386   EQQBTRN = {"$Id: simple_layout.a68,v 34.3 1995/03/29 13:03:05 ella Exp $"}; 
A_GISVEC(A68_VC ,FQQBTRN,EQQBTRN,60)
#define GQQBTRN_nilstack (A68_390 *)A68_NIL
#define HQQBTRN_nilmarker (A68_391 *)A68_NIL
#define IQQBTRN_niladjust (A68_392 *)A68_NIL
static A68_377  NQQBTRN_indent_data;
static A68_VC  SQQBTRN_line;
static A68_390 * UQQBTRN_stack;
static A68_390 * VQQBTRN_freestack;
static A68_391 * WQQBTRN_markers;
static A68_391 * XQQBTRN_freemarkers;
static A68_392 * YQQBTRN_adjusts;
static A68_392 * ZQQBTRN_freeadjusts;
static A68_INT  ARQBTRN_lwidth;
static A68_INT  BRQBTRN_cpos;
static A68_INT  CRQBTRN_ccnt;
static A68_INT  DRQBTRN_space_cnt;
static A68_INT  ERQBTRN_level;
static A68_INT  FRQBTRN_depth;
static A68_INT  GRQBTRN_last_ind_num;
static A68_INT  HRQBTRN_line_count;
static A68_388  GSQBTRN_dummy_indtype;
static A68_395  HSQBTRN_out_line;
static A68_396   LSQBTRN = {"simple_layout: out_line not set."}; 
A_GISVEC(A68_VC ,MSQBTRN,LSQBTRN,32)
static A68_BOOL  WUQBTRN_underflowed;
static A68_401   BVQBTRN = {"**** Stack underflow at line "}; 
A_GISVEC(A68_VC ,CVQBTRN,BVQBTRN,29)
static A68_402   GVQBTRN = {" ****"}; 
A_GISVEC(A68_VC ,HVQBTRN,GVQBTRN,5)
static A68_406  TZQBTRN_indtypes;
static A68_388 * VZQBTRN_it;
static A68_409   IARBTRN = {"The following indicators are already set: "}; 
A_GISVEC(A68_VC ,JARBTRN,IARBTRN,42)
static A68_409   NARBTRN = {"                                          "}; 
A_GISVEC(A68_VC ,OARBTRN,NARBTRN,42)
static A68_401   ZARBTRN = {"Failed to initialise intypes."}; 
A_GISVEC(A68_VC ,ABRBTRN,ZARBTRN,29)
#define RBRBTRN_no_state 0X0U
static A68_396   KHRBTRN = {"Simple_layout: Element too long."}; 
A_GISVEC(A68_VC ,LHRBTRN,KHRBTRN,32)
typedef struct   /* env of non-global proc */
{
A68_53  Required_indicators;
A68_BOOL * YFRBTRN_need_item_end;
A68_INT * XFRBTRN_enditem_ind_pos;
A68_INT  WFRBTRN_enditem_ind_size;
A_PAD_INT(PAD_120)
A68_108  Msg;
} DGRBTRN_set_ind;
typedef struct   /* env of non-global proc */
{
A68_108  Msg;
A68_BOOL * YFRBTRN_need_item_end;
A68_130  BGRBTRN_set_ind;
A68_BOOL  UFRBTRN_pass_mode_all;
A_PAD_BOOL(PAD_121)
A68_INT * XFRBTRN_enditem_ind_pos;
} QGRBTRN_write_text;

A_STATIC A68_VOID  KQQBTRN_trap(A68_INT  Trap_pos);

A_STATIC A68_VOID  PQQBTRN_generator(A68_BOOL  OQQBTRN_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_391 * KRQBTRN_set_marker(A68_INT  Delay, A68_INT  Bias);

A_STATIC A68_391 * TRQBTRN_free_marker(A68_391 * Mk, A68_391 ** List);

A_STATIC A68_VOID  YRQBTRN_free_adjusts(void);

A_STATIC A68_VOID  DSQBTRN_no_indaction(A68_388 * Ind, A68_108  Msg);

A_STATIC A68_VOID  KSQBTRN_anonymous(A68_VC  Buf, A68_108  Msg);

A_STATIC A68_VOID  RSQBTRN_put_out_line(A68_INT  Pos, A68_108  Msg);

A_STATIC A68_VOID  XSQBTRN_write_line(A68_INT  Leadsp, A68_108  Msg);

A_STATIC A68_BOOL  MTQBTRN_split_line(A68_INT  Mkpos, A68_INT  Mkcnt, A68_INT  Leadsp, A68_390 * Stk, A68_BOOL  All_stack_entries, A68_108  Msg);

A_STATIC A68_VOID  LUQBTRN_clear_markers(A68_390 * St);

A_STATIC A68_390 * PUQBTRN_push_stack(A68_388 * Ind);

A_STATIC A68_VOID  XUQBTRN_pop_stack(void);

A_STATIC A68_VOID  TVQBTRN_set_fold(A68_390 * St);

A_STATIC A68_BOOL  ZVQBTRN_clause_head_fold(A68_390 * St, A68_BOOL  In_stack, A68_108  Msg);

A_STATIC A68_BOOL  JWQBTRN_clause_sep_fold(A68_390 * St, A68_BOOL  In_stack, A68_108  Msg);

A_STATIC A68_BOOL  VWQBTRN_try_fold_clause(A68_BOOL * May_need_space, A68_108  Msg);

A_STATIC A68_VOID  HXQBTRN_clause_head_action(A68_388 * Ind, A68_108  Msg);

A_STATIC A68_VOID  KXQBTRN_clause_sep_action(A68_388 * Ind, A68_108  Msg);

A_STATIC A68_VOID  PXQBTRN_clause_end_action(A68_388 * Ind, A68_108  Msg);

A_STATIC A68_VOID  UXQBTRN_set_fnname_class(A68_388 * Ind, A68_108  Msg);

A_STATIC A68_VOID  XXQBTRN_set_becomes_class(A68_388 * Ind, A68_108  Msg);

A_STATIC A68_VOID  AYQBTRN_set_dotdot_class(A68_388 * Ind, A68_108  Msg);

A_STATIC A68_VOID  DYQBTRN_set_op_class(A68_388 * Ind, A68_108  Msg);

A_STATIC A68_VOID  GYQBTRN_set_slashslash_class(A68_388 * Ind, A68_108  Msg);

A_STATIC A68_VOID  JYQBTRN_set_to_class(A68_388 * Ind, A68_108  Msg);

A_STATIC A68_VOID  MYQBTRN_newalts_action(A68_388 * Ind, A68_108  Msg);

A_STATIC A68_VOID  PYQBTRN_dec_action(A68_388 * Ind, A68_108  Msg);

A_STATIC A68_VOID  SYQBTRN_enddec_action(A68_388 * Ind, A68_108  Msg);

A_STATIC A68_VOID  VYQBTRN_series_action(A68_388 * Ind, A68_108  Msg);

A_STATIC A68_VOID  BZQBTRN_endseries_action(A68_388 * Ind, A68_108  Msg);

A_STATIC A68_VOID  FZQBTRN_block_action(A68_388 * Ind, A68_108  Msg);

A_STATIC A68_VOID  IZQBTRN_fnspec_action(A68_388 * Ind, A68_108  Msg);

A_STATIC A68_VOID  LZQBTRN_endfnspec_action(A68_388 * Ind, A68_108  Msg);

A_STATIC A68_VOID  OZQBTRN_string_action(A68_388 * Ind, A68_108  Msg);

A_STATIC A68_VOID  QZQBTRN_generator(A68_BOOL  PZQBTRN_anonymous, A68_406  *ReturnedValue);

A_STATIC A68_VOID  CARBTRN_add_indtype(A68_32  Indnos, A68_INT  Delay, A68_INT  Bias, A68_BITS  Clause_state, A68_389  Action);

A_STATIC A68_VOID  BBRBTRN_init_indtypes(void);

A68_VOID  TFRBTRN_simple_layout(A68_313  Dec, A68_395  Out_line_proc, A68_INT  Width, A68_53  Required_indicators, A68_173  Options, A68_108  Msg);

A_STATIC A68_VOID  CGRBTRN_set_ind(A68_INT  Num, void *NonLocals);

A_STATIC A68_VOID  PGRBTRN_write_text(A68_VC  N, void *NonLocals);

A_STATIC A68_VOID  CGRBTRN_set_ind(A68_INT  Num, void *NonLocals)
#define NL(x) (((DGRBTRN_set_ind *)NonLocals)->x)
{ 
A68_388 * EGRBTRN_ind;
A68_INT  FGRBTRN;  /* YIELD */
A68_CHAR * GGRBTRN;  /* YIELD */
A68_INT  HGRBTRN;  /* YIELD */
A68_CHAR * IGRBTRN;  /* YIELD */
A68_INT  JGRBTRN;  /* YIELD */
A68_CHAR * KGRBTRN;  /* YIELD */
A68_389  LGRBTRN;  /* CALL */
A68_BOOL  MGRBTRN;  /* optbool result */
A_PROC_ENTRY(set_ind);
 /* line 774: */
 /* line 775: */
{ 
EGRBTRN_ind = (&A_VINDEX(TZQBTRN_indtypes,Num));
 /* line 777: */
 /* line 778: */
if ( XDBATRN_includes(NL(Required_indicators), Num) )
{ 
(*NL(YFRBTRN_need_item_end)) = A68_TRUE;
 /* line 779: */
if ( (BRQBTRN_cpos==(*NL(XFRBTRN_enditem_ind_pos))) )
{ 
BRQBTRN_cpos-=NL(WFRBTRN_enditem_ind_size);
} 
 /* line 780: */
 /* line 781: */
if ( (Num>=127) )
{ 
FGRBTRN = BRQBTRN_cpos+=1 ;
GGRBTRN = (&A_VINDEX(SQQBTRN_line,FGRBTRN)) ;
(*GGRBTRN) = (A68_CHAR)255;
 /* line 782: */
 /* line 783: */
 /* line 784: */
HGRBTRN = BRQBTRN_cpos+=1 ;
IGRBTRN = (&A_VINDEX(SQQBTRN_line,HGRBTRN)) ;
(*IGRBTRN) = (A68_CHAR)Num;
} 
else
{ 
 /* line 785: */
JGRBTRN = BRQBTRN_cpos+=1 ;
KGRBTRN = (&A_VINDEX(SQQBTRN_line,JGRBTRN)) ;
(*KGRBTRN) = (A68_CHAR)(128+Num);
} 
 /* line 786: */
 /* line 787: */
(*NL(XFRBTRN_enditem_ind_pos)) = (-1);
} 
 /* line 788: */
LGRBTRN = (*(&(EGRBTRN_ind->Action))) ;
A_CALLPROC(LGRBTRN,(EGRBTRN_ind, NL(Msg)),(EGRBTRN_ind, NL(Msg),(LGRBTRN).nonlocals));
 /* line 789: */
GRQBTRN_last_ind_num = Num;
 /* line 790: */
MGRBTRN = (BRQBTRN_cpos==0);
if ( ! MGRBTRN )
{MGRBTRN = ((*(&A_VINDEX(SQQBTRN_line,BRQBTRN_cpos)))==' ');
}
 /* line 791: */
if ( MGRBTRN )
{ 
 /* line 792: */
 /* line 793: */
FJCATRN_set_last_class(LFCATRN_space_class);
} 
} 
A_PROC_EXIT(set_ind);
return;
} 
#undef NL

A_STATIC A68_VOID  PGRBTRN_write_text(A68_VC  N, void *NonLocals)
#define NL(x) (((QGRBTRN_write_text *)NonLocals)->x)
{ 
A68_INT  RGRBTRN_isize;
A68_INT  SGRBTRN_tmpsize;
A68_INT  TGRBTRN_lwb;
A68_INT  UGRBTRN;  /* YIELD */
A68_BOOL  VGRBTRN_is_string;
A68_BOOL  WGRBTRN_need_space;
A68_BOOL  XGRBTRN_need_quote;
A68_BOOL  YGRBTRN_may_need_space;
A68_390 * ZGRBTRN_st;
A68_BOOL  AHRBTRN;  /* optbool result */
A68_391 ** BHRBTRN;  /* YIELD */
A68_INT  CHRBTRN;  /* YIELD */
A68_CHAR * DHRBTRN;  /* YIELD */
A68_VC  EHRBTRN;  /* OPERATORS - trim index */
A68_VC  FHRBTRN;  /* OPERATORS - trim index */
A68_VC  GHRBTRN;  /* YIELD */
A68_VC  HHRBTRN;  /* OPERATORS - assign op */
A68_INT  IHRBTRN;  /* YIELD */
A68_CHAR * JHRBTRN;  /* YIELD */
A68_46  MHRBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_392 * NHRBTRN_adj;
A68_INT  OHRBTRN;  /* YIELD */
A68_CHAR * PHRBTRN;  /* YIELD */
A68_INT * QHRBTRN;  /* YIELD */
A68_INT * RHRBTRN;  /* YIELD */
A68_INT * SHRBTRN;  /* YIELD */
A68_INT  THRBTRN;  /* YIELD */
A68_CHAR * UHRBTRN;  /* YIELD */
A68_VC  VHRBTRN;  /* OPERATORS - trim index */
A68_VC  WHRBTRN;  /* OPERATORS - trim index */
A68_VC  XHRBTRN;  /* YIELD */
A68_VC  YHRBTRN;  /* OPERATORS - assign op */
A_PROC_ENTRY(write_text);
 /* line 796: */
 /* line 797: */
{ 
RGRBTRN_isize = N.upb;
TGRBTRN_lwb = 1;
 /* line 798: */
UGRBTRN = 1 ;
VGRBTRN_is_string = (A_VINDEX(N,UGRBTRN)=='\"');
 /* line 799: */
WGRBTRN_need_space = UJCATRN_space_required(N);
 /* line 800: */
XGRBTRN_need_quote = A68_FALSE;
 /* line 801: */
YGRBTRN_may_need_space = A68_FALSE;
 /* line 802: */
ZGRBTRN_st = GQQBTRN_nilstack;
 /* line 804: */
for ( ;; )
{ 
 /* line 805: */
 /* line 806: */
if ( !(((((RGRBTRN_isize+(WGRBTRN_need_space))+(XGRBTRN_need_quote))+CRQBTRN_ccnt)>ARQBTRN_lwidth)) ) break;
 /* line 807: */
if ( VWQBTRN_try_fold_clause((&YGRBTRN_may_need_space), NL(Msg)) )
{ 
 /* line 808: */
AHRBTRN = YGRBTRN_may_need_space;
if ( AHRBTRN )
{AHRBTRN = WGRBTRN_need_space;
}
WGRBTRN_need_space = AHRBTRN;
} 
else
{ 
 /* line 809: */
 /* line 810: */
if ( (CRQBTRN_ccnt!=0) )
{ 
ZGRBTRN_st = UQQBTRN_stack;
 /* line 811: */
for ( ;; )
{ 
 /* line 812: */
 /* line 813: */
if ( !((ZGRBTRN_st!=GQQBTRN_nilstack)) ) break;
BHRBTRN = (&((*(&(ZGRBTRN_st->Markers)))->Rest)) ;
(*BHRBTRN) = HQQBTRN_nilmarker;
 /* line 814: */
 /* line 815: */
ZGRBTRN_st = (*(&(ZGRBTRN_st->Rest)));
}
 /* line 816: */
YRQBTRN_free_adjusts();
 /* line 817: */
WGRBTRN_need_space = A68_FALSE;
 /* line 818: */
 /* line 819: */
 /* line 820: */
XSQBTRN_write_line(0, NL(Msg));
} 
else
{ 
if ( VGRBTRN_is_string )
{ 
WGRBTRN_need_space = A68_FALSE;
 /* line 821: */
SGRBTRN_tmpsize = (ARQBTRN_lwidth-TGRBTRN_lwb);
 /* line 825: */
 /* line 826: */
if ( XGRBTRN_need_quote )
{ 
CHRBTRN = BRQBTRN_cpos+=1 ;
DHRBTRN = (&A_VINDEX(SQQBTRN_line,CHRBTRN)) ;
(*DHRBTRN) = '\"';
 /* line 827: */
CRQBTRN_ccnt+=1;
 /* line 828: */
 /* line 829: */
SGRBTRN_tmpsize-=1;
} 
 /* line 830: */
 /* line 831: */
GHRBTRN = A_VTRIM(EHRBTRN,(SQQBTRN_line),A_VTSCRIPT(&(EHRBTRN.upb),(SQQBTRN_line).upb,(BRQBTRN_cpos+1),(BRQBTRN_cpos+SGRBTRN_tmpsize))) ;
HHRBTRN = A_VTRIM(FHRBTRN,(N),A_VTSCRIPT(&(FHRBTRN.upb),(N).upb,TGRBTRN_lwb,((TGRBTRN_lwb+SGRBTRN_tmpsize)-1))) ;
A_VASSIGN2(HHRBTRN,GHRBTRN,A68_CHAR );
 /* line 832: */
BRQBTRN_cpos+=SGRBTRN_tmpsize;
 /* line 833: */
IHRBTRN = BRQBTRN_cpos+=1 ;
JHRBTRN = (&A_VINDEX(SQQBTRN_line,IHRBTRN)) ;
(*JHRBTRN) = '\"';
 /* line 834: */
CRQBTRN_ccnt+=(SGRBTRN_tmpsize+1);
 /* line 835: */
TGRBTRN_lwb+=SGRBTRN_tmpsize;
 /* line 836: */
RGRBTRN_isize-=SGRBTRN_tmpsize;
 /* line 837: */
 /* line 838: */
 /* line 839: */
XGRBTRN_need_quote = A68_TRUE;
} 
else
{ 
 /* line 840: */
 /* line 841: */
A_CALLPROC(NL(Msg),(SHAAOSI_system, A_HVEC(MHRBTRN,LHRBTRN,A68_VC )),(SHAAOSI_system, A_HVEC(MHRBTRN,LHRBTRN,A68_VC ),(NL(Msg)).nonlocals));
} 
} 
} 
}
 /* line 843: */
NHRBTRN_adj = YQQBTRN_adjusts;
 /* line 845: */
 /* line 846: */
if ( WGRBTRN_need_space )
{ 
OHRBTRN = BRQBTRN_cpos+=1 ;
PHRBTRN = (&A_VINDEX(SQQBTRN_line,OHRBTRN)) ;
(*PHRBTRN) = ' ';
 /* line 847: */
 /* line 848: */
CRQBTRN_ccnt+=1;
} 
 /* line 849: */
for ( ;; )
{ 
 /* line 850: */
 /* line 851: */
if ( !((NHRBTRN_adj!=IQQBTRN_niladjust)) ) break;
 /* line 852: */
QHRBTRN = (&(NHRBTRN_adj->Item_cnt)) ;
if ( (((*QHRBTRN)-=1)>=0) )
{ 
RHRBTRN = (&((*(&(NHRBTRN_adj->Marker)))->Pos)) ;
(*RHRBTRN) = BRQBTRN_cpos;
 /* line 853: */
 /* line 854: */
SHRBTRN = (&((*(&(NHRBTRN_adj->Marker)))->Cnt)) ;
(*SHRBTRN) = CRQBTRN_ccnt;
} 
 /* line 855: */
 /* line 856: */
NHRBTRN_adj = (*(&(NHRBTRN_adj->Rest)));
}
 /* line 857: */
 /* line 858: */
if ( XGRBTRN_need_quote )
{ 
THRBTRN = BRQBTRN_cpos+=1 ;
UHRBTRN = (&A_VINDEX(SQQBTRN_line,THRBTRN)) ;
(*UHRBTRN) = '\"';
 /* line 859: */
 /* line 860: */
CRQBTRN_ccnt+=1;
} 
 /* line 861: */
XHRBTRN = A_VTRIM(VHRBTRN,(SQQBTRN_line),A_VTSCRIPT(&(VHRBTRN.upb),(SQQBTRN_line).upb,(BRQBTRN_cpos+1),(BRQBTRN_cpos+RGRBTRN_isize))) ;
YHRBTRN = A_VTRIM(WHRBTRN,(N),A_VTSCRIPT(&(WHRBTRN.upb),(N).upb,TGRBTRN_lwb,(N).upb)) ;
A_VASSIGN2(YHRBTRN,XHRBTRN,A68_CHAR );
 /* line 862: */
BRQBTRN_cpos+=RGRBTRN_isize;
 /* line 863: */
CRQBTRN_ccnt+=RGRBTRN_isize;
 /* line 864: */
 /* line 865: */
if ( (*NL(YFRBTRN_need_item_end)) )
{ 
A_CALLPROC(NL(BGRBTRN_set_ind),(IIBATRN_enditem_ind),(IIBATRN_enditem_ind,(NL(BGRBTRN_set_ind)).nonlocals));
 /* line 866: */
(*NL(YFRBTRN_need_item_end)) = NL(UFRBTRN_pass_mode_all);
 /* line 867: */
 /* line 868: */
 /* line 869: */
(*NL(XFRBTRN_enditem_ind_pos)) = BRQBTRN_cpos;
} 
} 
A_PROC_EXIT(write_text);
return;
} 
#undef NL

A_STATIC A68_VOID  KQQBTRN_trap(A68_INT  Trap_pos)
{ 
A68_INT  LQQBTRN_a;
A_PROC_ENTRY(trap);
 /* line 80: */
 /* line 81: */
{ 
LQQBTRN_a = (Trap_pos+1);
 /* line 83: */
 /* line 84: */
/*SKIP*/;
} 
A_PROC_EXIT(trap);
return;
} 
#undef NL

A_STATIC A68_VOID  PQQBTRN_generator(A68_BOOL  OQQBTRN_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  QQQBTRN;  /* clause result */
A68_VC  RQQBTRN;  /* OPERATORS - dynamic generator */
{ 
RQQBTRN.upb = 256 ;
( OQQBTRN_anonymous? A_VLOC(A68_CHAR ,RQQBTRN): A_VHEAP(A68_CHAR ,RQQBTRN) );
QQQBTRN = RQQBTRN;
} 
*ReturnedValue = (QQQBTRN);
return;
} 
#undef NL

A_STATIC A68_391 * KRQBTRN_set_marker(A68_INT  Delay, A68_INT  Bias)
{ 
A68_391 * LRQBTRN_mk;
A68_391  MRQBTRN;  /* collateral clause result */
A68_392 * NRQBTRN_adj;
A68_392  ORQBTRN;  /* collateral clause result */
A68_391 ** PRQBTRN_last;
A68_391 * QRQBTRN;  /* clause result */
A_PROC_ENTRY(set_marker);
 /* line 104: */
 /* line 105: */
{ 
 /* line 107: */
 /* line 108: */
if ( (XQQBTRN_freemarkers==HQQBTRN_nilmarker) )
{ 
 /* line 109: */
 /* line 110: */
LRQBTRN_mk = A_HEAP(A68_391 );
} 
else
{ 
LRQBTRN_mk = XQQBTRN_freemarkers;
 /* line 111: */
 /* line 112: */
XQQBTRN_freemarkers = (*(&(LRQBTRN_mk->Rest)));
} 
 /* line 113: */
MRQBTRN.Pos = BRQBTRN_cpos;
MRQBTRN.Cnt = CRQBTRN_ccnt;
MRQBTRN.Bias = Bias;
MRQBTRN.Rest = HQQBTRN_nilmarker;
(*LRQBTRN_mk) = MRQBTRN;
 /* line 115: */
 /* line 117: */
 /* line 118: */
if ( (ZQQBTRN_freeadjusts==IQQBTRN_niladjust) )
{ 
 /* line 119: */
 /* line 120: */
NRQBTRN_adj = A_HEAP(A68_392 );
} 
else
{ 
NRQBTRN_adj = ZQQBTRN_freeadjusts;
 /* line 121: */
 /* line 122: */
ZQQBTRN_freeadjusts = (*(&(NRQBTRN_adj->Rest)));
} 
 /* line 123: */
ORQBTRN.Item_cnt = Delay;
ORQBTRN.Marker = LRQBTRN_mk;
ORQBTRN.Rest = YQQBTRN_adjusts;
(*NRQBTRN_adj) = ORQBTRN;
 /* line 124: */
YQQBTRN_adjusts = NRQBTRN_adj;
 /* line 126: */
PRQBTRN_last = (&(UQQBTRN_stack->Markers));
 /* line 128: */
for ( ;; )
{ 
if ( !(((*PRQBTRN_last)!=HQQBTRN_nilmarker)) ) break;
PRQBTRN_last = (&((*PRQBTRN_last)->Rest));
}
 /* line 129: */
 /* line 130: */
QRQBTRN = (*PRQBTRN_last) = LRQBTRN_mk;
} 
A_PROC_EXIT(set_marker);
return( QRQBTRN );
} 
#undef NL

A_STATIC A68_391 * TRQBTRN_free_marker(A68_391 * Mk, A68_391 ** List)
{ 
A68_391 * URQBTRN_rest;
A68_391 ** VRQBTRN_last;
A68_391 ** WRQBTRN;  /* YIELD */
A68_391 * XRQBTRN;  /* clause result */
A_PROC_ENTRY(free_marker);
 /* line 133: */
 /* line 134: */
{ 
URQBTRN_rest = (*(&(Mk->Rest)));
 /* line 135: */
VRQBTRN_last = List;
 /* line 137: */
for ( ;; )
{ 
if ( !(((*VRQBTRN_last)!=Mk)) ) break;
VRQBTRN_last = (&((*VRQBTRN_last)->Rest));
}
 /* line 138: */
(*VRQBTRN_last) = URQBTRN_rest;
 /* line 139: */
WRQBTRN = (&(Mk->Rest)) ;
(*WRQBTRN) = XQQBTRN_freemarkers;
 /* line 140: */
XQQBTRN_freemarkers = Mk;
 /* line 141: */
 /* line 142: */
XRQBTRN = URQBTRN_rest;
} 
A_PROC_EXIT(free_marker);
return( XRQBTRN );
} 
#undef NL

A_STATIC A68_VOID  YRQBTRN_free_adjusts(void)
{ 
A68_392 * ZRQBTRN_rest;
A68_392 ** ASQBTRN;  /* YIELD */
A_PROC_ENTRY(free_adjusts);
{ 
 /* line 148: */
for ( ;; )
{ 
 /* line 149: */
 /* line 150: */
if ( !((YQQBTRN_adjusts!=IQQBTRN_niladjust)) ) break;
ZRQBTRN_rest = (*(&(YQQBTRN_adjusts->Rest)));
 /* line 151: */
ASQBTRN = (&(YQQBTRN_adjusts->Rest)) ;
(*ASQBTRN) = ZQQBTRN_freeadjusts;
 /* line 152: */
ZQQBTRN_freeadjusts = YQQBTRN_adjusts;
 /* line 153: */
 /* line 154: */
YQQBTRN_adjusts = ZRQBTRN_rest;
}
 /* line 155: */
} 
A_PROC_EXIT(free_adjusts);
return;
} 
#undef NL

A_STATIC A68_VOID  DSQBTRN_no_indaction(A68_388 * Ind, A68_108  Msg)
{ 
A_PROC_ENTRY(no_indaction);
/*SKIP*/;
A_PROC_EXIT(no_indaction);
return;
} 
#undef NL

A_STATIC A68_VOID  KSQBTRN_anonymous(A68_VC  Buf, A68_108  Msg)
{ 
A68_46  NSQBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A_CALLPROC(Msg,(SHAAOSI_system, A_HVEC(NSQBTRN,MSQBTRN,A68_VC )),(SHAAOSI_system, A_HVEC(NSQBTRN,MSQBTRN,A68_VC ),(Msg).nonlocals));
return;
} 
#undef NL

A_STATIC A68_VOID  RSQBTRN_put_out_line(A68_INT  Pos, A68_108  Msg)
{ 
A68_INT  SSQBTRN_pp;
A68_BOOL  TSQBTRN;  /* optbool result */
A68_VC  USQBTRN;  /* OPERATORS - trim index */
A_PROC_ENTRY(put_out_line);
 /* line 165: */
 /* line 166: */
{ 
SSQBTRN_pp = Pos;
 /* line 168: */
for ( ;; )
{ 
TSQBTRN = (SSQBTRN_pp>0);
if ( TSQBTRN )
{TSQBTRN = ((*(&A_VINDEX(SQQBTRN_line,SSQBTRN_pp)))==' ');
}
if ( !(TSQBTRN) ) break;
SSQBTRN_pp-=1;
}
 /* line 169: */
A_CALLPROC(HSQBTRN_out_line,(A_VTRIM(USQBTRN,(SQQBTRN_line),A_VTSCRIPT(&(USQBTRN.upb),(SQQBTRN_line).upb,1,SSQBTRN_pp)), Msg),(A_VTRIM(USQBTRN,(SQQBTRN_line),A_VTSCRIPT(&(USQBTRN.upb),(SQQBTRN_line).upb,1,SSQBTRN_pp)), Msg,(HSQBTRN_out_line).nonlocals));
 /* line 170: */
 /* line 171: */
HRQBTRN_line_count+=1;
} 
A_PROC_EXIT(put_out_line);
return;
} 
#undef NL

A_STATIC A68_VOID  XSQBTRN_write_line(A68_INT  Leadsp, A68_108  Msg)
{ 
A68_390 * YSQBTRN_st;
A68_391 ** ZSQBTRN_mktail;
A68_391 ** ATQBTRN;  /* YIELD */
A68_BITS * BTQBTRN;  /* YIELD */
A68_CHAR * CTQBTRN_c1;
A68_VC  DTQBTRN;  /* OPERATORS - trim index */
A68_VC  ETQBTRN;  /* forall yield */
A68_INT  FTQBTRN;  /* forall loop counter */
A_PROC_ENTRY(write_line);
 /* line 174: */
 /* line 175: */
{ 
YSQBTRN_st = UQQBTRN_stack;
 /* line 176: */
 /* line 178: */
RSQBTRN_put_out_line(BRQBTRN_cpos, Msg);
 /* line 179: */
for ( ;; )
{ 
 /* line 180: */
 /* line 181: */
if ( !((YSQBTRN_st!=GQQBTRN_nilstack)) ) break;
ZSQBTRN_mktail = (&((*(&(YSQBTRN_st->Markers)))->Rest));
 /* line 182: */
for ( ;; )
{ 
if ( !(((*ZSQBTRN_mktail)!=HQQBTRN_nilmarker)) ) break;
ZSQBTRN_mktail = (&((*ZSQBTRN_mktail)->Rest));
}
 /* line 183: */
(*ZSQBTRN_mktail) = XQQBTRN_freemarkers;
 /* line 184: */
XQQBTRN_freemarkers = (*(&((*(&(YSQBTRN_st->Markers)))->Rest)));
 /* line 185: */
ATQBTRN = (&((*(&(YSQBTRN_st->Markers)))->Rest)) ;
(*ATQBTRN) = HQQBTRN_nilmarker;
 /* line 186: */
BTQBTRN = (&(YSQBTRN_st->Clause_state)) ;
(*BTQBTRN) = (A68_BITS )((*(&(YSQBTRN_st->Clause_state)))&~SHCATRN_clause_head_mask);
 /* line 187: */
 /* line 188: */
YSQBTRN_st = (*(&(YSQBTRN_st->Rest)));
}
 /* line 189: */
BRQBTRN_cpos = CRQBTRN_ccnt = DRQBTRN_space_cnt = FVCAOST_max(Leadsp, 0);
 /* line 190: */
ETQBTRN = A_VTRIM(DTQBTRN,(SQQBTRN_line),A_VTSCRIPT(&(DTQBTRN.upb),(SQQBTRN_line).upb,1,BRQBTRN_cpos)) ;
FTQBTRN = ETQBTRN.upb -1;
CTQBTRN_c1 = ETQBTRN.data;
for (;FTQBTRN-- >= 0;
(CTQBTRN_c1++
) )
{
(*CTQBTRN_c1) = ' ';
}
 /* line 191: */
} 
A_PROC_EXIT(write_line);
return;
} 
#undef NL
 /* line 194: */
 /* line 195: */
 /* line 196: */
 /* line 197: */
 /* line 198: */

A_STATIC A68_BOOL  MTQBTRN_split_line(A68_INT  Mkpos, A68_INT  Mkcnt, A68_INT  Leadsp, A68_390 * Stk, A68_BOOL  All_stack_entries, A68_108  Msg)
{ 
A68_INT  NTQBTRN_pos;
A68_INT  OTQBTRN_cnt;
A68_INT  PTQBTRN_lsp;
A68_INT  QTQBTRN_pshift;
A68_INT  RTQBTRN_cshift;
A68_390 * STQBTRN;  /* clause result */
A68_390 * TTQBTRN_st;
A68_391 * UTQBTRN_mk;
A68_BOOL  VTQBTRN_first;
A68_INT * WTQBTRN;  /* YIELD */
A68_INT * XTQBTRN;  /* YIELD */
A68_BITS * YTQBTRN;  /* YIELD */
A68_390 * ZTQBTRN;  /* clause result */
A68_CHAR * AUQBTRN_c1;
A68_VC  BUQBTRN;  /* OPERATORS - trim index */
A68_VC  CUQBTRN;  /* forall yield */
A68_INT  DUQBTRN;  /* forall loop counter */
A68_INT  EUQBTRN_oldcpos;
A68_VC  FUQBTRN;  /* OPERATORS - trim index */
A68_VC  GUQBTRN;  /* OPERATORS - trim index */
A68_VC  HUQBTRN;  /* YIELD */
A68_VC  IUQBTRN;  /* OPERATORS - assign op */
A68_BOOL  JUQBTRN;  /* clause result */
A_PROC_ENTRY(split_line);
 /* line 199: */
 /* line 200: */
{ 
NTQBTRN_pos = JVCAOST_min(Mkpos, BRQBTRN_cpos);
 /* line 201: */
OTQBTRN_cnt = JVCAOST_min(Mkcnt, CRQBTRN_ccnt);
 /* line 202: */
PTQBTRN_lsp = FVCAOST_max(Leadsp, 0);
 /* line 203: */
QTQBTRN_pshift = (NTQBTRN_pos-PTQBTRN_lsp);
 /* line 204: */
RTQBTRN_cshift = (OTQBTRN_cnt-PTQBTRN_lsp);
 /* line 205: */
if ( All_stack_entries )
{ 
STQBTRN = UQQBTRN_stack;
} 
else
{ 
STQBTRN = Stk;
} 
TTQBTRN_st = STQBTRN;
 /* line 206: */
 /* line 207: */
 /* line 209: */
 /* line 210: */
if ( (RTQBTRN_cshift<0) )
{ 
QTQBTRN_pshift-=RTQBTRN_cshift;
 /* line 211: */
PTQBTRN_lsp+=RTQBTRN_cshift;
 /* line 212: */
 /* line 213: */
RTQBTRN_cshift = 0;
} 
 /* line 214: */
if ( (NTQBTRN_pos>DRQBTRN_space_cnt) )
{ 
RSQBTRN_put_out_line(NTQBTRN_pos, Msg);
} 
 /* line 215: */
for ( ;; )
{ 
 /* line 216: */
 /* line 217: */
if ( !((TTQBTRN_st!=GQQBTRN_nilstack)) ) break;
VTQBTRN_first = A68_TRUE;
 /* line 218: */
UTQBTRN_mk = (*(&(TTQBTRN_st->Markers)));
 /* line 219: */
for ( ;; )
{ 
 /* line 220: */
 /* line 221: */
if ( !((UTQBTRN_mk!=HQQBTRN_nilmarker)) ) break;
 /* line 222: */
if ( ((*(&(UTQBTRN_mk->Pos)))>=NTQBTRN_pos) )
{ 
WTQBTRN = (&(UTQBTRN_mk->Pos)) ;
(*WTQBTRN)-=QTQBTRN_pshift;
 /* line 223: */
XTQBTRN = (&(UTQBTRN_mk->Cnt)) ;
(*XTQBTRN)-=RTQBTRN_cshift;
 /* line 224: */
 /* line 225: */
UTQBTRN_mk = (*(&(UTQBTRN_mk->Rest)));
} 
else
{ 
 /* line 226: */
if ( VTQBTRN_first )
{ 
 /* line 227: */
YTQBTRN = (&(TTQBTRN_st->Clause_state)) ;
(*YTQBTRN) = (A68_BITS )((*(&(TTQBTRN_st->Clause_state)))&~SHCATRN_clause_head_mask);
 /* line 228: */
 /* line 229: */
 /* line 230: */
UTQBTRN_mk = (*(&(UTQBTRN_mk->Rest)));
} 
else
{ 
 /* line 231: */
UTQBTRN_mk = TRQBTRN_free_marker(UTQBTRN_mk, (&(TTQBTRN_st->Markers)));
} 
} 
 /* line 232: */
 /* line 233: */
VTQBTRN_first = A68_FALSE;
}
 /* line 234: */
if ( All_stack_entries )
{ 
ZTQBTRN = (*(&(TTQBTRN_st->Rest)));
} 
else
{ 
 /* line 235: */
ZTQBTRN = GQQBTRN_nilstack;
} 
TTQBTRN_st = ZTQBTRN;
}
 /* line 236: */
CUQBTRN = A_VTRIM(BUQBTRN,(SQQBTRN_line),A_VTSCRIPT(&(BUQBTRN.upb),(SQQBTRN_line).upb,1,(DRQBTRN_space_cnt = PTQBTRN_lsp))) ;
DUQBTRN = CUQBTRN.upb -1;
AUQBTRN_c1 = CUQBTRN.data;
for (;DUQBTRN-- >= 0;
(AUQBTRN_c1++
) )
{
(*AUQBTRN_c1) = ' ';
}
 /* line 238: */
 /* line 239: */
if ( (NTQBTRN_pos<BRQBTRN_cpos) )
{ 
EUQBTRN_oldcpos = BRQBTRN_cpos;
 /* line 241: */
BRQBTRN_cpos-=QTQBTRN_pshift;
 /* line 242: */
CRQBTRN_ccnt-=RTQBTRN_cshift;
 /* line 243: */
HUQBTRN = A_VTRIM(FUQBTRN,(SQQBTRN_line),A_VTSCRIPT(&(FUQBTRN.upb),(SQQBTRN_line).upb,(PTQBTRN_lsp+1),BRQBTRN_cpos)) ;
IUQBTRN = A_VTRIM(GUQBTRN,(SQQBTRN_line),A_VTSCRIPT(&(GUQBTRN.upb),(SQQBTRN_line).upb,(NTQBTRN_pos+1),EUQBTRN_oldcpos)) ;
A_VASSIGN2(IUQBTRN,HUQBTRN,A68_CHAR );
 /* line 244: */
 /* line 245: */
 /* line 246: */
JUQBTRN = A68_TRUE;
} 
else
{ 
BRQBTRN_cpos = CRQBTRN_ccnt = PTQBTRN_lsp;
 /* line 247: */
 /* line 248: */
 /* line 249: */
JUQBTRN = A68_FALSE;
} 
} 
A_PROC_EXIT(split_line);
return( JUQBTRN );
} 
#undef NL

A_STATIC A68_VOID  LUQBTRN_clear_markers(A68_390 * St)
{ 
A68_391 ** MUQBTRN_mktail;
A68_391 ** NUQBTRN;  /* YIELD */
A_PROC_ENTRY(clear_markers);
 /* line 252: */
 /* line 253: */
{ 
 /* line 254: */
if ( ((*(&(St->Markers)))!=HQQBTRN_nilmarker) )
{ 
MUQBTRN_mktail = (&(St->Markers));
 /* line 256: */
for ( ;; )
{ 
if ( !(((*MUQBTRN_mktail)!=HQQBTRN_nilmarker)) ) break;
MUQBTRN_mktail = (&((*MUQBTRN_mktail)->Rest));
}
 /* line 257: */
(*MUQBTRN_mktail) = XQQBTRN_freemarkers;
 /* line 258: */
XQQBTRN_freemarkers = (*(&(St->Markers)));
 /* line 259: */
 /* line 260: */
 /* line 261: */
NUQBTRN = (&(St->Markers)) ;
(*NUQBTRN) = HQQBTRN_nilmarker;
} 
} 
A_PROC_EXIT(clear_markers);
return;
} 
#undef NL

A_STATIC A68_390 * PUQBTRN_push_stack(A68_388 * Ind)
{ 
A68_INT  QUQBTRN;  /* clause result */
A68_INT  RUQBTRN;  /* clause result */
A68_INT  SUQBTRN_indent;
A68_390 * TUQBTRN_st;
A68_390  UUQBTRN;  /* collateral clause result */
A68_390 * VUQBTRN;  /* clause result */
A_PROC_ENTRY(push_stack);
 /* line 264: */
 /* line 265: */
{ 
if ( (UQQBTRN_stack!=GQQBTRN_nilstack) )
{ 
QUQBTRN = (*(&(UQQBTRN_stack->Indent)));
} 
else
{ 
 /* line 266: */
QUQBTRN = 0;
} 
 /* line 268: */
if ( ((A68_BITS )((*(&(Ind->Clause_state)))&EICATRN_step_indent)!=0X0U) )
{ 
 /* line 270: */
RUQBTRN = (*(&((&NQQBTRN_indent_data)->Step)));
} 
else
{ 
RUQBTRN = 0;
} 
SUQBTRN_indent = (QUQBTRN+RUQBTRN);
 /* line 271: */
 /* line 273: */
 /* line 274: */
if ( (VQQBTRN_freestack==GQQBTRN_nilstack) )
{ 
 /* line 275: */
 /* line 276: */
TUQBTRN_st = A_HEAP(A68_390 );
} 
else
{ 
TUQBTRN_st = VQQBTRN_freestack;
 /* line 277: */
VQQBTRN_freestack = (*(&(TUQBTRN_st->Rest)));
 /* line 278: */
 /* line 279: */
LUQBTRN_clear_markers(TUQBTRN_st);
} 
 /* line 281: */
ERQBTRN_level+=1;
 /* line 282: */
UUQBTRN.Ind = Ind;
UUQBTRN.Indent = SUQBTRN_indent;
UUQBTRN.Bias = (*(&(Ind->Bias)));
 /* line 283: */
UUQBTRN.Clause_state = (*(&(Ind->Clause_state)));
UUQBTRN.Markers = HQQBTRN_nilmarker;
UUQBTRN.Rest = UQQBTRN_stack;
(*TUQBTRN_st) = UUQBTRN;
 /* line 284: */
UQQBTRN_stack = TUQBTRN_st;
 /* line 285: */
KRQBTRN_set_marker((*(&(Ind->Delay))), 0);
 /* line 286: */
 /* line 287: */
VUQBTRN = TUQBTRN_st;
} 
A_PROC_EXIT(push_stack);
return( VUQBTRN );
} 
#undef NL

A_STATIC A68_VOID  XUQBTRN_pop_stack(void)
{ 
A68_390 * YUQBTRN_st;
A68_390 ** ZUQBTRN;  /* YIELD */
A68_403  AVQBTRN;  /* collateral clause result */
A68_52  DVQBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  EVQBTRN;  /* YIELD */
A68_52  FVQBTRN;  /* OPERATORS - mode -> union mode */
A68_52  IVQBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  JVQBTRN;  /* YIELD */
A68_52  KVQBTRN;  /* OPERATORS - mode -> union mode */
A68_56  LVQBTRN;  /* procedure value */
A68_VC  MVQBTRN;  /* OPERATORS - trim index */
A68_52  NVQBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  OVQBTRN;  /* YIELD */
A68_52  PVQBTRN;  /* OPERATORS - mode -> union mode */
A68_56  QVQBTRN;  /* procedure value */
A68_85  RVQBTRN;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(pop_stack);
{ 
 /* line 293: */
if ( (ERQBTRN_level>0) )
{ 
YUQBTRN_st = UQQBTRN_stack;
 /* line 295: */
ERQBTRN_level-=1;
 /* line 296: */
YRQBTRN_free_adjusts();
 /* line 297: */
if ( (VQQBTRN_freestack!=GQQBTRN_nilstack) )
{ 
LUQBTRN_clear_markers(VQQBTRN_freestack);
} 
 /* line 298: */
UQQBTRN_stack = (*(&(YUQBTRN_st->Rest)));
 /* line 299: */
ZUQBTRN = (&(YUQBTRN_st->Rest)) ;
(*ZUQBTRN) = VQQBTRN_freestack;
 /* line 300: */
 /* line 302: */
VQQBTRN_freestack = YUQBTRN_st;
} 
else
{ 
 /* line 303: */
if ( !WUQBTRN_underflowed )
{ 
WUQBTRN_underflowed = A68_TRUE;
 /* line 304: */
 /* line 305: */
EVQBTRN = CVQBTRN ;
AVQBTRN.data[0] = A_UNITE(DVQBTRN,mode7,7,EVQBTRN);
AVQBTRN.data[1] = A_UNITE(FVQBTRN,mode1,1,HRQBTRN_line_count);
JVQBTRN = HVQBTRN ;
AVQBTRN.data[2] = A_UNITE(IVQBTRN,mode7,7,JVQBTRN);
 /* line 306: */
LVQBTRN.fn.fn_global = LRAAOSL_newline;
LVQBTRN.nonlocals = A68_NIL;
AVQBTRN.data[3] = A_UNITE(KVQBTRN,mode12,12,LVQBTRN);
OVQBTRN = A_VTRIM(MVQBTRN,(SQQBTRN_line),A_VTSCRIPT(&(MVQBTRN.upb),(SQQBTRN_line).upb,1,BRQBTRN_cpos)) ;
AVQBTRN.data[4] = A_UNITE(NVQBTRN,mode7,7,OVQBTRN);
QVQBTRN.fn.fn_global = LRAAOSL_newline;
QVQBTRN.nonlocals = A68_NIL;
AVQBTRN.data[5] = A_UNITE(PVQBTRN,mode12,12,QVQBTRN);
 /* line 307: */
 /* line 308: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(RVQBTRN,AVQBTRN,6,A68_52 ));
} 
} 
} 
A_PROC_EXIT(pop_stack);
return;
} 
#undef NL

A_STATIC A68_VOID  TVQBTRN_set_fold(A68_390 * St)
{ 
A68_390 * UVQBTRN_stp;
A68_BITS * VVQBTRN;  /* YIELD */
A_PROC_ENTRY(set_fold);
 /* line 311: */
 /* line 312: */
{ 
UVQBTRN_stp = St;
 /* line 314: */
for ( ;; )
{ 
 /* line 315: */
 /* line 316: */
if ( !((UVQBTRN_stp!=GQQBTRN_nilstack)) ) break;
 /* line 317: */
if ( ((A68_BITS )((*(&(UVQBTRN_stp->Clause_state)))&UHCATRN_fold_at_sep_if_folded)!=0X0U) )
{ 
 /* line 318: */
VVQBTRN = (&(UVQBTRN_stp->Clause_state)) ;
(*VVQBTRN) = (A68_BITS )((*(&(UVQBTRN_stp->Clause_state)))|VHCATRN_fold_at_every_sep);
} 
 /* line 319: */
 /* line 320: */
UVQBTRN_stp = (*(&(UVQBTRN_stp->Rest)));
}
 /* line 321: */
} 
A_PROC_EXIT(set_fold);
return;
} 
#undef NL
 /* line 324: */
 /* line 325: */

A_STATIC A68_BOOL  ZVQBTRN_clause_head_fold(A68_390 * St, A68_BOOL  In_stack, A68_108  Msg)
{ 
A68_BOOL  AWQBTRN_may_need_space;
A68_BITS  BWQBTRN_fold_state;
A68_BOOL  CWQBTRN;  /* optbool result */
A68_BOOL  DWQBTRN;  /* optbool result */
A68_BITS * EWQBTRN;  /* YIELD */
A68_BOOL  FWQBTRN;  /* clause result */
A_PROC_ENTRY(clause_head_fold);
 /* line 326: */
 /* line 327: */
{ 
AWQBTRN_may_need_space = A68_TRUE;
 /* line 328: */
BWQBTRN_fold_state = (A68_BITS )((*(&(St->Clause_state)))&SHCATRN_clause_head_mask);
 /* line 330: */
 /* line 331: */
CWQBTRN = A_LB_GE(BWQBTRN_fold_state,RHCATRN_fold_if_no_fit);
if ( ! CWQBTRN )
{ /* line 332: */
DWQBTRN = (BWQBTRN_fold_state==QHCATRN_fold_if_gt_dither);
if ( DWQBTRN )
{DWQBTRN = ((*(&((*(&(St->Markers)))->Pos)))>((*(&(St->Indent)))+(*(&((&NQQBTRN_indent_data)->Dither)))));
}
CWQBTRN = DWQBTRN;
}
 /* line 333: */
if ( CWQBTRN )
{ 
 /* line 334: */
 /* line 335: */
 /* line 336: */
AWQBTRN_may_need_space = MTQBTRN_split_line((*(&((*(&(St->Markers)))->Pos))), (*(&((*(&(St->Markers)))->Cnt))), (*(&(St->Indent))), St, In_stack, Msg);
} 
 /* line 337: */
EWQBTRN = (&(St->Clause_state)) ;
(*EWQBTRN) = (A68_BITS )((*(&(St->Clause_state)))&~SHCATRN_clause_head_mask);
 /* line 338: */
 /* line 339: */
FWQBTRN = AWQBTRN_may_need_space;
} 
A_PROC_EXIT(clause_head_fold);
return( FWQBTRN );
} 
#undef NL
 /* line 343: */
 /* line 344: */

A_STATIC A68_BOOL  JWQBTRN_clause_sep_fold(A68_390 * St, A68_BOOL  In_stack, A68_108  Msg)
{ 
A68_BOOL  KWQBTRN_may_need_space;
A68_391 * LWQBTRN_spmk;
A68_391 * MWQBTRN_rest;
A68_BITS  NWQBTRN;  /* ADICOPS - >= */
A68_BOOL  OWQBTRN_fold_all;
A68_BOOL  PWQBTRN_to_indent;
A68_BOOL  QWQBTRN;  /* optbool result */
A68_BOOL  RWQBTRN;  /* optbool result */
A68_BOOL  SWQBTRN;  /* clause result */
A_PROC_ENTRY(clause_sep_fold);
 /* line 345: */
 /* line 346: */
{ 
KWQBTRN_may_need_space = A68_TRUE;
 /* line 347: */
LWQBTRN_spmk = (*(&((*(&(St->Markers)))->Rest)));
 /* line 348: */
 /* line 349: */
NWQBTRN = (A68_BITS )((*(&(St->Clause_state)))&WHCATRN_clause_sep_mask) ;
OWQBTRN_fold_all = A_LB_GE(NWQBTRN,UHCATRN_fold_at_sep_if_folded);
 /* line 350: */
PWQBTRN_to_indent = ((A68_BITS )((*(&(St->Clause_state)))&CICATRN_fold_mode_mask)==AICATRN_fold_to_indent);
 /* line 352: */
for ( ;; )
{ 
 /* line 353: */
 /* line 354: */
if ( !((LWQBTRN_spmk!=HQQBTRN_nilmarker)) ) break;
MWQBTRN_rest = TRQBTRN_free_marker(LWQBTRN_spmk, (&(St->Markers)));
 /* line 356: */
QWQBTRN = OWQBTRN_fold_all;
if ( ! QWQBTRN )
{QWQBTRN = (MWQBTRN_rest==HQQBTRN_nilmarker);
}
 /* line 357: */
if ( QWQBTRN )
{ 
 /* line 358: */
if ( PWQBTRN_to_indent )
{ 
 /* line 359: */
 /* line 360: */
 /* line 361: */
 /* line 362: */
KWQBTRN_may_need_space = MTQBTRN_split_line((*(&(LWQBTRN_spmk->Pos))), (*(&(LWQBTRN_spmk->Cnt))), ((*(&(St->Indent)))+(*(&(LWQBTRN_spmk->Bias)))), St, In_stack, Msg);
} 
else
{ 
 /* line 363: */
 /* line 364: */
 /* line 365: */
 /* line 366: */
 /* line 367: */
KWQBTRN_may_need_space = MTQBTRN_split_line((*(&(LWQBTRN_spmk->Pos))), (*(&(LWQBTRN_spmk->Cnt))), ((*(&((*(&(St->Markers)))->Pos)))+(*(&(LWQBTRN_spmk->Bias)))), St, In_stack, Msg);
} 
} 
 /* line 368: */
 /* line 369: */
LWQBTRN_spmk = MWQBTRN_rest;
}
 /* line 371: */
RWQBTRN = In_stack;
if ( RWQBTRN )
{RWQBTRN = OWQBTRN_fold_all;
}
if ( RWQBTRN )
{ 
TVQBTRN_set_fold(St);
} 
 /* line 372: */
 /* line 373: */
SWQBTRN = KWQBTRN_may_need_space;
} 
A_PROC_EXIT(clause_sep_fold);
return( SWQBTRN );
} 
#undef NL

A_STATIC A68_BOOL  VWQBTRN_try_fold_clause(A68_BOOL * May_need_space, A68_108  Msg)
{ 
A68_BOOL  WWQBTRN_fold_head;
A68_BOOL  XWQBTRN_try_free;
A68_390 * YWQBTRN_st;
A68_390 * ZWQBTRN_stitem;
A68_BOOL  AXQBTRN;  /* clause result */
A68_BOOL  BXQBTRN;  /* optbool result */
A68_BOOL  CXQBTRN;  /* optbool result */
A68_BOOL  DXQBTRN;  /* clause result */
A68_BOOL  EXQBTRN;  /* optbool result */
A_PROC_ENTRY(try_fold_clause);
 /* line 376: */
 /* line 377: */
{ 
WWQBTRN_fold_head = A68_FALSE;
 /* line 378: */
XWQBTRN_try_free = A68_FALSE;
 /* line 379: */
YWQBTRN_st = GQQBTRN_nilstack;
 /* line 380: */
ZWQBTRN_stitem = UQQBTRN_stack;
 /* line 382: */
for ( ;; )
{ 
 /* line 383: */
 /* line 384: */
if ( !((ZWQBTRN_stitem!=GQQBTRN_nilstack)) ) break;
 /* line 385: */
if ( ((*(&((*(&(ZWQBTRN_stitem->Markers)))->Rest)))!=HQQBTRN_nilmarker) )
{ 
YWQBTRN_st = ZWQBTRN_stitem;
 /* line 386: */
 /* line 387: */
WWQBTRN_fold_head = A68_FALSE;
} 
else
{ 
 /* line 388: */
 /* line 389: */
if ( ((A68_BITS )((*(&(ZWQBTRN_stitem->Clause_state)))&SHCATRN_clause_head_mask)!=PHCATRN_dont_fold) )
{ 
YWQBTRN_st = ZWQBTRN_stitem;
 /* line 390: */
 /* line 391: */
WWQBTRN_fold_head = A68_TRUE;
} 
} 
 /* line 392: */
 /* line 393: */
ZWQBTRN_stitem = (*(&(ZWQBTRN_stitem->Rest)));
}
 /* line 394: */
 /* line 395: */
if ( WWQBTRN_fold_head )
{ 
(*May_need_space) = ZVQBTRN_clause_head_fold(YWQBTRN_st, A68_TRUE, Msg);
 /* line 396: */
 /* line 397: */
AXQBTRN = A68_TRUE;
} 
else
{ 
 /* line 398: */
if ( (YWQBTRN_st!=GQQBTRN_nilstack) )
{ 
(*May_need_space) = JWQBTRN_clause_sep_fold(YWQBTRN_st, A68_TRUE, Msg);
 /* line 399: */
 /* line 400: */
AXQBTRN = A68_TRUE;
} 
else
{ 
 /* line 401: */
BXQBTRN = (VQQBTRN_freestack!=GQQBTRN_nilstack);
if ( BXQBTRN )
{BXQBTRN = ((*(&(VQQBTRN_freestack->Markers)))!=HQQBTRN_nilmarker);
}
XWQBTRN_try_free = BXQBTRN;
 /* line 402: */
 /* line 403: */
CXQBTRN = XWQBTRN_try_free;
if ( CXQBTRN )
{CXQBTRN = ((A68_BITS )((*(&(VQQBTRN_freestack->Clause_state)))&SHCATRN_clause_head_mask)!=PHCATRN_dont_fold);
}
 /* line 404: */
DXQBTRN = CXQBTRN;
if ( DXQBTRN )
{ 
(*May_need_space) = ZVQBTRN_clause_head_fold(VQQBTRN_freestack, A68_FALSE, Msg);
 /* line 405: */
 /* line 406: */
AXQBTRN = A68_TRUE;
} 
else
{ 
EXQBTRN = XWQBTRN_try_free;
if ( EXQBTRN )
{EXQBTRN = ((*(&((*(&(VQQBTRN_freestack->Markers)))->Rest)))!=HQQBTRN_nilmarker);
}
 /* line 407: */
if ( EXQBTRN )
{ 
(*May_need_space) = JWQBTRN_clause_sep_fold(VQQBTRN_freestack, A68_FALSE, Msg);
 /* line 408: */
 /* line 409: */
 /* line 410: */
AXQBTRN = A68_TRUE;
} 
else
{ 
 /* line 411: */
 /* line 412: */
AXQBTRN = A68_FALSE;
} 
} 
} 
} 
} 
A_PROC_EXIT(try_fold_clause);
return( AXQBTRN );
} 
#undef NL

A_STATIC A68_VOID  HXQBTRN_clause_head_action(A68_388 * Ind, A68_108  Msg)
{ 
A_PROC_ENTRY(clause_head_action);
 /* line 415: */
 /* line 416: */
 /* line 417: */
PUQBTRN_push_stack(Ind);
A_PROC_EXIT(clause_head_action);
return;
} 
#undef NL

A_STATIC A68_VOID  KXQBTRN_clause_sep_action(A68_388 * Ind, A68_108  Msg)
{ 
A68_INT  LXQBTRN_bias;
A68_INT * MXQBTRN;  /* YIELD */
A_PROC_ENTRY(clause_sep_action);
 /* line 420: */
 /* line 421: */
{ 
LXQBTRN_bias = (*(&(UQQBTRN_stack->Bias)));
 /* line 423: */
 /* line 424: */
if ( ((*(&(Ind->Bias)))!=0) )
{ 
LXQBTRN_bias = 0;
 /* line 425: */
 /* line 426: */
MXQBTRN = (&(UQQBTRN_stack->Bias)) ;
(*MXQBTRN) = (*(&(Ind->Bias)));
} 
 /* line 427: */
 /* line 428: */
if ( ((A68_BITS )((*(&(UQQBTRN_stack->Clause_state)))&WHCATRN_clause_sep_mask)==VHCATRN_fold_at_every_sep) )
{ 
 /* line 429: */
 /* line 430: */
if ( ((A68_BITS )((*(&(UQQBTRN_stack->Clause_state)))&CICATRN_fold_mode_mask)==AICATRN_fold_to_indent) )
{ 
 /* line 431: */
 /* line 432: */
 /* line 433: */
MTQBTRN_split_line(BRQBTRN_cpos, CRQBTRN_ccnt, ((*(&(UQQBTRN_stack->Indent)))+LXQBTRN_bias), UQQBTRN_stack, A68_TRUE, Msg);
} 
else
{ 
 /* line 434: */
 /* line 435: */
 /* line 436: */
 /* line 437: */
MTQBTRN_split_line(BRQBTRN_cpos, CRQBTRN_ccnt, ((*(&((*(&(UQQBTRN_stack->Markers)))->Pos)))+LXQBTRN_bias), UQQBTRN_stack, A68_TRUE, Msg);
} 
} 
else
{ 
 /* line 438: */
 /* line 439: */
KRQBTRN_set_marker(1, LXQBTRN_bias);
} 
} 
A_PROC_EXIT(clause_sep_action);
return;
} 
#undef NL

A_STATIC A68_VOID  PXQBTRN_clause_end_action(A68_388 * Ind, A68_108  Msg)
{ 
A68_BOOL  QXQBTRN_extra_nl;
A68_BOOL  RXQBTRN_need_nl;
A_PROC_ENTRY(clause_end_action);
 /* line 442: */
 /* line 443: */
{ 
QXQBTRN_extra_nl = ((A68_BITS )((*(&(UQQBTRN_stack->Clause_state)))&YHCATRN_take_extra_nl)!=0X0U);
 /* line 444: */
RXQBTRN_need_nl = ((A68_BITS )((*(&(UQQBTRN_stack->Clause_state)))&ZHCATRN_clause_tail_mask)!=0X0U);
 /* line 446: */
XUQBTRN_pop_stack();
 /* line 447: */
 /* line 448: */
if ( RXQBTRN_need_nl )
{ 
XSQBTRN_write_line((*(&(UQQBTRN_stack->Indent))), Msg);
 /* line 449: */
 /* line 450: */
if ( QXQBTRN_extra_nl )
{ 
BRQBTRN_cpos = 0;
 /* line 451: */
 /* line 452: */
 /* line 453: */
 /* line 454: */
XSQBTRN_write_line((*(&(UQQBTRN_stack->Indent))), Msg);
} 
} 
} 
A_PROC_EXIT(clause_end_action);
return;
} 
#undef NL

A_STATIC A68_VOID  UXQBTRN_set_fnname_class(A68_388 * Ind, A68_108  Msg)
{ 
A_PROC_ENTRY(set_fnname_class);
 /* line 457: */
DJCATRN_set_next_class(NFCATRN_fnname_class);
A_PROC_EXIT(set_fnname_class);
return;
} 
#undef NL

A_STATIC A68_VOID  XXQBTRN_set_becomes_class(A68_388 * Ind, A68_108  Msg)
{ 
A_PROC_ENTRY(set_becomes_class);
 /* line 460: */
DJCATRN_set_next_class(BGCATRN_becomes_class);
A_PROC_EXIT(set_becomes_class);
return;
} 
#undef NL

A_STATIC A68_VOID  AYQBTRN_set_dotdot_class(A68_388 * Ind, A68_108  Msg)
{ 
A_PROC_ENTRY(set_dotdot_class);
 /* line 463: */
DJCATRN_set_next_class(AGCATRN_dotdot_class);
A_PROC_EXIT(set_dotdot_class);
return;
} 
#undef NL

A_STATIC A68_VOID  DYQBTRN_set_op_class(A68_388 * Ind, A68_108  Msg)
{ 
A_PROC_ENTRY(set_op_class);
 /* line 466: */
DJCATRN_set_next_class(WFCATRN_op_class);
A_PROC_EXIT(set_op_class);
return;
} 
#undef NL

A_STATIC A68_VOID  GYQBTRN_set_slashslash_class(A68_388 * Ind, A68_108  Msg)
{ 
A_PROC_ENTRY(set_slashslash_class);
 /* line 469: */
DJCATRN_set_next_class(YFCATRN_slashslash_class);
A_PROC_EXIT(set_slashslash_class);
return;
} 
#undef NL

A_STATIC A68_VOID  JYQBTRN_set_to_class(A68_388 * Ind, A68_108  Msg)
{ 
A_PROC_ENTRY(set_to_class);
 /* line 472: */
DJCATRN_set_next_class(KGCATRN_to_class);
A_PROC_EXIT(set_to_class);
return;
} 
#undef NL

A_STATIC A68_VOID  MYQBTRN_newalts_action(A68_388 * Ind, A68_108  Msg)
{ 
A_PROC_ENTRY(newalts_action);
 /* line 475: */
 /* line 477: */
 /* line 478: */
HXQBTRN_clause_head_action(Ind, Msg);
A_PROC_EXIT(newalts_action);
return;
} 
#undef NL

A_STATIC A68_VOID  PYQBTRN_dec_action(A68_388 * Ind, A68_108  Msg)
{ 
A_PROC_ENTRY(dec_action);
 /* line 481: */
 /* line 482: */
{ 
FRQBTRN_depth+=1;
 /* line 483: */
 /* line 484: */
HXQBTRN_clause_head_action(Ind, Msg);
} 
A_PROC_EXIT(dec_action);
return;
} 
#undef NL

A_STATIC A68_VOID  SYQBTRN_enddec_action(A68_388 * Ind, A68_108  Msg)
{ 
A_PROC_ENTRY(enddec_action);
 /* line 487: */
 /* line 488: */
{ 
XUQBTRN_pop_stack();
 /* line 489: */
 /* line 490: */
FRQBTRN_depth-=1;
} 
A_PROC_EXIT(enddec_action);
return;
} 
#undef NL

A_STATIC A68_VOID  VYQBTRN_series_action(A68_388 * Ind, A68_108  Msg)
{ 
A68_INT * WYQBTRN;  /* YIELD */
A68_BOOL  XYQBTRN_dummy;
A68_INT * YYQBTRN;  /* YIELD */
A_PROC_ENTRY(series_action);
 /* line 493: */
 /* line 494: */
{ 
 /* line 495: */
if ( (GRQBTRN_last_ind_num==PGBATRN_body_ind) )
{ 
 /* line 496: */
 /* line 497: */
WYQBTRN = (&(UQQBTRN_stack->Indent)) ;
(*WYQBTRN) = ((FRQBTRN_depth-1)*(*(&((&NQQBTRN_indent_data)->Step))));
} 
else
{ 
XYQBTRN_dummy = A68_FALSE;
 /* line 499: */
TVQBTRN_set_fold(UQQBTRN_stack);
 /* line 500: */
VWQBTRN_try_fold_clause((&XYQBTRN_dummy), Msg);
 /* line 501: */
 /* line 502: */
if ( ((A68_BITS )((*(&(Ind->Clause_state)))&EICATRN_step_indent)!=0X0U) )
{ 
 /* line 503: */
 /* line 504: */
YYQBTRN = (&(UQQBTRN_stack->Indent)) ;
(*YYQBTRN)+=(*(&((&NQQBTRN_indent_data)->Step)));
} 
} 
 /* line 505: */
 /* line 506: */
XSQBTRN_write_line((*(&(UQQBTRN_stack->Indent))), Msg);
} 
A_PROC_EXIT(series_action);
return;
} 
#undef NL

A_STATIC A68_VOID  BZQBTRN_endseries_action(A68_388 * Ind, A68_108  Msg)
{ 
A68_BOOL  CZQBTRN_extra_nl;
A_PROC_ENTRY(endseries_action);
 /* line 509: */
 /* line 510: */
{ 
CZQBTRN_extra_nl = ((A68_BITS )((*(&(UQQBTRN_stack->Clause_state)))&YHCATRN_take_extra_nl)!=0X0U);
 /* line 512: */
if ( CZQBTRN_extra_nl )
{ 
 /* line 513: */
XSQBTRN_write_line((*(&(UQQBTRN_stack->Indent))), Msg);
} 
} 
A_PROC_EXIT(endseries_action);
return;
} 
#undef NL

A_STATIC A68_VOID  FZQBTRN_block_action(A68_388 * Ind, A68_108  Msg)
{ 
A_PROC_ENTRY(block_action);
 /* line 516: */
 /* line 517: */
{ 
HXQBTRN_clause_head_action(Ind, Msg);
 /* line 518: */
 /* line 519: */
XSQBTRN_write_line((*(&(UQQBTRN_stack->Indent))), Msg);
} 
A_PROC_EXIT(block_action);
return;
} 
#undef NL

A_STATIC A68_VOID  IZQBTRN_fnspec_action(A68_388 * Ind, A68_108  Msg)
{ 
A_PROC_ENTRY(fnspec_action);
 /* line 522: */
 /* line 523: */
{ 
KXQBTRN_clause_sep_action(Ind, Msg);
 /* line 524: */
 /* line 525: */
HXQBTRN_clause_head_action(Ind, Msg);
} 
A_PROC_EXIT(fnspec_action);
return;
} 
#undef NL

A_STATIC A68_VOID  LZQBTRN_endfnspec_action(A68_388 * Ind, A68_108  Msg)
{ 
A_PROC_ENTRY(endfnspec_action);
 /* line 528: */
 /* line 529: */
{ 
PXQBTRN_clause_end_action(Ind, Msg);
 /* line 530: */
 /* line 531: */
KXQBTRN_clause_sep_action(Ind, Msg);
} 
A_PROC_EXIT(endfnspec_action);
return;
} 
#undef NL

A_STATIC A68_VOID  OZQBTRN_string_action(A68_388 * Ind, A68_108  Msg)
{ 
A_PROC_ENTRY(string_action);
 /* line 534: */
 /* line 535: */
{ 
UXQBTRN_set_fnname_class(Ind, Msg);
 /* line 536: */
 /* line 537: */
HXQBTRN_clause_head_action(Ind, Msg);
} 
A_PROC_EXIT(string_action);
return;
} 
#undef NL

A_STATIC A68_VOID  QZQBTRN_generator(A68_BOOL  PZQBTRN_anonymous, A68_406  *ReturnedValue)
{ 
A68_406  RZQBTRN;  /* clause result */
A68_406  SZQBTRN;  /* OPERATORS - dynamic generator */
{ 
SZQBTRN.upb = KDBATRN_num_inds ;
( PZQBTRN_anonymous? A_VLOC(A68_388 ,SZQBTRN): A_VHEAP(A68_388 ,SZQBTRN) );
RZQBTRN = SZQBTRN;
} 
*ReturnedValue = (RZQBTRN);
return;
} 
#undef NL
 /* line 544: */
 /* line 545: */
 /* line 546: */

A_STATIC A68_VOID  CARBTRN_add_indtype(A68_32  Indnos, A68_INT  Delay, A68_INT  Bias, A68_BITS  Clause_state, A68_389  Action)
{ 
A68_BOOL  DARBTRN_failed;
A68_INT  EARBTRN_n;
A68_INT * FARBTRN;  /* forall control - []x */
A68_INT  GARBTRN;  /* forall loop counter */
A68_388 * HARBTRN_it;
A68_52  KARBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  LARBTRN;  /* YIELD */
A68_85  MARBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_52  PARBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  QARBTRN;  /* YIELD */
A68_85  RARBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_410  SARBTRN;  /* collateral clause result */
A68_52  TARBTRN;  /* OPERATORS - mode -> union mode */
A68_VC  UARBTRN;  /* YIELD */
A68_52  VARBTRN;  /* OPERATORS - mode -> union mode */
A68_56  WARBTRN;  /* procedure value */
A68_85  XARBTRN;  /* OPERATORS - istruct -> vector */
A68_388  YARBTRN;  /* collateral clause result */
A_PROC_ENTRY(add_indtype);
 /* line 547: */
 /* line 548: */
{ 
DARBTRN_failed = A68_FALSE;
 /* line 550: */
 /* line 551: */
GARBTRN = Indnos.upb -1;
FARBTRN = Indnos.data;
for (;GARBTRN-- >= 0;
(FARBTRN++
) )
{
EARBTRN_n = *FARBTRN;
 /* line 552: */
HARBTRN_it = (&A_VINDEX(TZQBTRN_indtypes,EARBTRN_n));
 /* line 553: */
 /* line 554: */
if ( ((*(&(HARBTRN_it->Number)))!=0) )
{ 
 /* line 555: */
if ( !DARBTRN_failed )
{ 
LARBTRN = JARBTRN ;
GFBAOSL_put(KEAAOST_screen, A_HVEC(MARBTRN,A_UNITE(KARBTRN,mode7,7,LARBTRN),A68_52 ));
 /* line 556: */
 /* line 557: */
 /* line 558: */
DARBTRN_failed = A68_TRUE;
} 
else
{ 
 /* line 559: */
QARBTRN = OARBTRN ;
GFBAOSL_put(KEAAOST_screen, A_HVEC(RARBTRN,A_UNITE(PARBTRN,mode7,7,QARBTRN),A68_52 ));
} 
 /* line 560: */
UARBTRN = A_VINDEX(XECATRN_ind_names,EARBTRN_n) ;
SARBTRN.data[0] = A_UNITE(TARBTRN,mode7,7,UARBTRN);
WARBTRN.fn.fn_global = LRAAOSL_newline;
WARBTRN.nonlocals = A68_NIL;
SARBTRN.data[1] = A_UNITE(VARBTRN,mode12,12,WARBTRN);
 /* line 561: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(XARBTRN,SARBTRN,2,A68_52 ));
} 
 /* line 562: */
YARBTRN.Number = EARBTRN_n;
YARBTRN.Delay = Delay;
YARBTRN.Bias = Bias;
YARBTRN.Clause_state = Clause_state;
 /* line 563: */
YARBTRN.Action = Action;
(*HARBTRN_it) = YARBTRN;
}
 /* line 564: */
if ( DARBTRN_failed )
{ 
 /* line 565: */
NKDAOST_sysfault(ABRBTRN);
} 
} 
A_PROC_EXIT(add_indtype);
return;
} 
#undef NL

A_STATIC A68_VOID  BBRBTRN_init_indtypes(void)
{ 
A68_BITS  CBRBTRN_let_state;
A68_BITS  DBRBTRN_make_state;
A68_BITS  EBRBTRN_join_state;
A68_BITS  FBRBTRN_case_state;
A68_BITS  GBRBTRN_if_state;
A68_BITS  HBRBTRN_print_state;
A68_BITS  IBRBTRN_decstep_state;
A68_BITS  JBRBTRN_dec_state;
A68_BITS  KBRBTRN_stat_state;
A68_BITS  LBRBTRN_str_state;
A68_BITS  MBRBTRN_newalts_state;
A68_BITS  NBRBTRN_terms_state;
A68_BITS  OBRBTRN_block_state;
A68_BITS  PBRBTRN_series_state;
A68_BITS  QBRBTRN_monadic_state;
A68_377  SBRBTRN;  /* avoid structure result */
A68_411  TBRBTRN;  /* collateral clause result */
A68_32  UBRBTRN;  /* OPERATORS - istruct -> vector */
A68_389  VBRBTRN;  /* procedure value */
A68_32  WBRBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_389  XBRBTRN;  /* procedure value */
A68_32  YBRBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_389  ZBRBTRN;  /* procedure value */
A68_32  ACRBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_389  BCRBTRN;  /* procedure value */
A68_32  CCRBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_389  DCRBTRN;  /* procedure value */
A68_32  ECRBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_389  FCRBTRN;  /* procedure value */
A68_32  GCRBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_389  HCRBTRN;  /* procedure value */
A68_412  ICRBTRN;  /* collateral clause result */
A68_32  JCRBTRN;  /* OPERATORS - istruct -> vector */
A68_389  KCRBTRN;  /* procedure value */
A68_412  LCRBTRN;  /* collateral clause result */
A68_32  MCRBTRN;  /* OPERATORS - istruct -> vector */
A68_389  NCRBTRN;  /* procedure value */
A68_32  OCRBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_389  PCRBTRN;  /* procedure value */
A68_413  QCRBTRN;  /* collateral clause result */
A68_32  RCRBTRN;  /* OPERATORS - istruct -> vector */
A68_389  SCRBTRN;  /* procedure value */
A68_414  TCRBTRN;  /* collateral clause result */
A68_32  UCRBTRN;  /* OPERATORS - istruct -> vector */
A68_389  VCRBTRN;  /* procedure value */
A68_412  WCRBTRN;  /* collateral clause result */
A68_32  XCRBTRN;  /* OPERATORS - istruct -> vector */
A68_389  YCRBTRN;  /* procedure value */
A68_32  ZCRBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_389  ADRBTRN;  /* procedure value */
A68_415  BDRBTRN;  /* collateral clause result */
A68_32  CDRBTRN;  /* OPERATORS - istruct -> vector */
A68_389  DDRBTRN;  /* procedure value */
A68_412  EDRBTRN;  /* collateral clause result */
A68_32  FDRBTRN;  /* OPERATORS - istruct -> vector */
A68_389  GDRBTRN;  /* procedure value */
A68_32  HDRBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_389  IDRBTRN;  /* procedure value */
A68_32  JDRBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_389  KDRBTRN;  /* procedure value */
A68_32  LDRBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_389  MDRBTRN;  /* procedure value */
A68_416  NDRBTRN;  /* collateral clause result */
A68_32  ODRBTRN;  /* OPERATORS - istruct -> vector */
A68_389  PDRBTRN;  /* procedure value */
A68_417  QDRBTRN;  /* collateral clause result */
A68_32  RDRBTRN;  /* OPERATORS - istruct -> vector */
A68_389  SDRBTRN;  /* procedure value */
A68_32  TDRBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_389  UDRBTRN;  /* procedure value */
A68_412  VDRBTRN;  /* collateral clause result */
A68_32  WDRBTRN;  /* OPERATORS - istruct -> vector */
A68_389  XDRBTRN;  /* procedure value */
A68_413  YDRBTRN;  /* collateral clause result */
A68_32  ZDRBTRN;  /* OPERATORS - istruct -> vector */
A68_389  AERBTRN;  /* procedure value */
A68_412  BERBTRN;  /* collateral clause result */
A68_32  CERBTRN;  /* OPERATORS - istruct -> vector */
A68_389  DERBTRN;  /* procedure value */
A68_413  EERBTRN;  /* collateral clause result */
A68_32  FERBTRN;  /* OPERATORS - istruct -> vector */
A68_389  GERBTRN;  /* procedure value */
A68_418  HERBTRN;  /* collateral clause result */
A68_32  IERBTRN;  /* OPERATORS - istruct -> vector */
A68_389  JERBTRN;  /* procedure value */
A68_412  KERBTRN;  /* collateral clause result */
A68_32  LERBTRN;  /* OPERATORS - istruct -> vector */
A68_389  MERBTRN;  /* procedure value */
A68_415  NERBTRN;  /* collateral clause result */
A68_32  OERBTRN;  /* OPERATORS - istruct -> vector */
A68_389  PERBTRN;  /* procedure value */
A68_32  QERBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_389  RERBTRN;  /* procedure value */
A68_412  SERBTRN;  /* collateral clause result */
A68_32  TERBTRN;  /* OPERATORS - istruct -> vector */
A68_389  UERBTRN;  /* procedure value */
A68_415  VERBTRN;  /* collateral clause result */
A68_32  WERBTRN;  /* OPERATORS - istruct -> vector */
A68_389  XERBTRN;  /* procedure value */
A68_32  YERBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_389  ZERBTRN;  /* procedure value */
A68_412  AFRBTRN;  /* collateral clause result */
A68_32  BFRBTRN;  /* OPERATORS - istruct -> vector */
A68_389  CFRBTRN;  /* procedure value */
A68_419  DFRBTRN;  /* collateral clause result */
A68_32  EFRBTRN;  /* OPERATORS - istruct -> vector */
A68_389  FFRBTRN;  /* procedure value */
A68_32  GFRBTRN;  /* OPERATORS - scalar -> [] or VEC[] */
A68_389  HFRBTRN;  /* procedure value */
A68_BOOL  IFRBTRN_unset;
A68_INT  JFRBTRN_n;
A68_INT  KFRBTRN;  /* to part of loop */
A68_388 * LFRBTRN_it;
A68_INT * MFRBTRN;  /* YIELD */
A_PROC_ENTRY(init_indtypes);
{ 
CBRBTRN_let_state = QICATRN_get_clause_state(BHCATRN_let_clause);
 /* line 570: */
DBRBTRN_make_state = QICATRN_get_clause_state(CHCATRN_make_clause);
 /* line 571: */
EBRBTRN_join_state = QICATRN_get_clause_state(DHCATRN_join_clause);
 /* line 572: */
FBRBTRN_case_state = QICATRN_get_clause_state(EHCATRN_case_clause);
 /* line 573: */
GBRBTRN_if_state = QICATRN_get_clause_state(FHCATRN_if_clause);
 /* line 574: */
HBRBTRN_print_state = QICATRN_get_clause_state(GHCATRN_print_clause);
 /* line 575: */
IBRBTRN_decstep_state = QICATRN_get_clause_state(ZGCATRN_decstep_clause);
 /* line 576: */
JBRBTRN_dec_state = QICATRN_get_clause_state(AHCATRN_dec_clause);
 /* line 577: */
KBRBTRN_stat_state = QICATRN_get_clause_state(HHCATRN_seqstat_clause);
 /* line 578: */
LBRBTRN_str_state = QICATRN_get_clause_state(IHCATRN_str_clause);
 /* line 579: */
MBRBTRN_newalts_state = QICATRN_get_clause_state(JHCATRN_newalts_clause);
 /* line 580: */
NBRBTRN_terms_state = QICATRN_get_clause_state(KHCATRN_terms_clause);
 /* line 581: */
OBRBTRN_block_state = QICATRN_get_clause_state(LHCATRN_block_clause);
 /* line 582: */
PBRBTRN_series_state = QICATRN_get_clause_state(MHCATRN_serorseq_clause);
 /* line 583: */
QBRBTRN_monadic_state = QICATRN_get_clause_state(NHCATRN_monadic_clause);
 /* line 584: */
 /* line 586: */
MKCATRN_get_indent_data(  &SBRBTRN );
NQQBTRN_indent_data = SBRBTRN;
 /* line 588: */
 /* line 589: */
TBRBTRN.data[0] = BGBATRN_adelay_ind;
 /* line 590: */
TBRBTRN.data[1] = HKBATRN_idelay_ind;
 /* line 591: */
TBRBTRN.data[2] = SLBATRN_sample_ind;
 /* line 592: */
TBRBTRN.data[3] = OJBATRN_faster_ind;
 /* line 593: */
TBRBTRN.data[4] = NMBATRN_slower_ind;
 /* line 594: */
TBRBTRN.data[5] = QLBATRN_reform_ind;
 /* line 595: */
TBRBTRN.data[6] = JKBATRN_import_ind;
 /* line 596: */
TBRBTRN.data[7] = GLBATRN_nobody_ind;
 /* line 597: */
TBRBTRN.data[8] = PLBATRN_ram_ind;
 /* line 598: */
TBRBTRN.data[9] = CKBATRN_fnname_ind;
TBRBTRN.data[10] = DGBATRN_arith_ind;
VBRBTRN.fn.fn_global = UXQBTRN_set_fnname_class;
VBRBTRN.nonlocals = A68_NIL;
CARBTRN_add_indtype(A_HISVEC(UBRBTRN,TBRBTRN,11,A68_INT ), 0, 0, RBRBTRN_no_state, VBRBTRN);
 /* line 599: */
XBRBTRN.fn.fn_global = XXQBTRN_set_becomes_class;
XBRBTRN.nonlocals = A68_NIL;
CARBTRN_add_indtype(A_HVEC(WBRBTRN,MGBATRN_becomes_ind,A68_INT ), 0, 0, RBRBTRN_no_state, XBRBTRN);
 /* line 600: */
ZBRBTRN.fn.fn_global = AYQBTRN_set_dotdot_class;
ZBRBTRN.nonlocals = A68_NIL;
CARBTRN_add_indtype(A_HVEC(YBRBTRN,LHBATRN_dotdot_ind,A68_INT ), 0, 0, RBRBTRN_no_state, ZBRBTRN);
 /* line 601: */
BCRBTRN.fn.fn_global = DYQBTRN_set_op_class;
BCRBTRN.nonlocals = A68_NIL;
CARBTRN_add_indtype(A_HVEC(ACRBTRN,JLBATRN_operator_ind,A68_INT ), 0, 0, RBRBTRN_no_state, BCRBTRN);
 /* line 602: */
DCRBTRN.fn.fn_global = GYQBTRN_set_slashslash_class;
DCRBTRN.nonlocals = A68_NIL;
CARBTRN_add_indtype(A_HVEC(CCRBTRN,MMBATRN_slashslash_ind,A68_INT ), 0, 0, RBRBTRN_no_state, DCRBTRN);
 /* line 603: */
FCRBTRN.fn.fn_global = JYQBTRN_set_to_class;
FCRBTRN.nonlocals = A68_NIL;
CARBTRN_add_indtype(A_HVEC(ECRBTRN,ZMBATRN_to_ind,A68_INT ), 0, 0, RBRBTRN_no_state, FCRBTRN);
 /* line 605: */
HCRBTRN.fn.fn_global = LZQBTRN_endfnspec_action;
HCRBTRN.nonlocals = A68_NIL;
CARBTRN_add_indtype(A_HVEC(GCRBTRN,DIBATRN_endfnspec_ind,A68_INT ), 0, 0, RBRBTRN_no_state, HCRBTRN);
 /* line 606: */
 /* line 607: */
ICRBTRN.data[0] = DOBATRN_useries_ind;
ICRBTRN.data[1] = COBATRN_usequence_ind;
KCRBTRN.fn.fn_global = VYQBTRN_series_action;
KCRBTRN.nonlocals = A68_NIL;
CARBTRN_add_indtype(A_HISVEC(JCRBTRN,ICRBTRN,2,A68_INT ), 0, 0, PBRBTRN_series_state, KCRBTRN);
 /* line 608: */
 /* line 609: */
LCRBTRN.data[0] = XIBATRN_endseries_ind;
LCRBTRN.data[1] = WIBATRN_endsequence_ind;
NCRBTRN.fn.fn_global = BZQBTRN_endseries_action;
NCRBTRN.nonlocals = A68_NIL;
CARBTRN_add_indtype(A_HISVEC(MCRBTRN,LCRBTRN,2,A68_INT ), 0, 0, RBRBTRN_no_state, NCRBTRN);
 /* line 610: */
PCRBTRN.fn.fn_global = FZQBTRN_block_action;
PCRBTRN.nonlocals = A68_NIL;
CARBTRN_add_indtype(A_HVEC(OCRBTRN,OGBATRN_block_ind,A68_INT ), 1, 0, OBRBTRN_block_state, PCRBTRN);
 /* line 612: */
 /* line 613: */
QCRBTRN.data[0] = YIBATRN_endstep_ind;
 /* line 614: */
QCRBTRN.data[1] = OIBATRN_endouterdec_ind;
QCRBTRN.data[2] = SHBATRN_endblock_ind;
SCRBTRN.fn.fn_global = PXQBTRN_clause_end_action;
SCRBTRN.nonlocals = A68_NIL;
CARBTRN_add_indtype(A_HISVEC(RCRBTRN,QCRBTRN,3,A68_INT ), 0, 0, XHCATRN_take_newline, SCRBTRN);
 /* line 615: */
 /* line 616: */
TCRBTRN.data[0] = AGBATRN_adecls_ind;
 /* line 617: */
TCRBTRN.data[1] = GKBATRN_idecls_ind;
 /* line 618: */
TCRBTRN.data[2] = TMBATRN_tdecls_ind;
 /* line 619: */
TCRBTRN.data[3] = VGBATRN_cdecls_ind;
 /* line 620: */
TCRBTRN.data[4] = RJBATRN_fdecls_ind;
TCRBTRN.data[5] = ZKBATRN_mdecls_ind;
VCRBTRN.fn.fn_global = HXQBTRN_clause_head_action;
VCRBTRN.nonlocals = A68_NIL;
CARBTRN_add_indtype(A_HISVEC(UCRBTRN,TCRBTRN,6,A68_INT ), 2, 0, IBRBTRN_decstep_state, VCRBTRN);
 /* line 621: */
 /* line 622: */
WCRBTRN.data[0] = MLBATRN_print_ind;
WCRBTRN.data[1] = PJBATRN_fault_ind;
YCRBTRN.fn.fn_global = HXQBTRN_clause_head_action;
YCRBTRN.nonlocals = A68_NIL;
CARBTRN_add_indtype(A_HISVEC(XCRBTRN,WCRBTRN,2,A68_INT ), 2, 0, HBRBTRN_print_state, YCRBTRN);
 /* line 623: */
ADRBTRN.fn.fn_global = HXQBTRN_clause_head_action;
ADRBTRN.nonlocals = A68_NIL;
CARBTRN_add_indtype(A_HVEC(ZCRBTRN,WKBATRN_make_ind,A68_INT ), 2, 0, DBRBTRN_make_state, ADRBTRN);
 /* line 624: */
 /* line 625: */
BDRBTRN.data[0] = QKBATRN_let_ind;
 /* line 626: */
BDRBTRN.data[1] = AMBATRN_seqlet_ind;
 /* line 627: */
BDRBTRN.data[2] = JMBATRN_seqvar_ind;
BDRBTRN.data[3] = DMBATRN_seqpvar_ind;
DDRBTRN.fn.fn_global = HXQBTRN_clause_head_action;
DDRBTRN.nonlocals = A68_NIL;
CARBTRN_add_indtype(A_HISVEC(CDRBTRN,BDRBTRN,4,A68_INT ), 2, 0, CBRBTRN_let_state, DDRBTRN);
 /* line 628: */
 /* line 629: */
EDRBTRN.data[0] = EKBATRN_forjoin_ind;
EDRBTRN.data[1] = PKBATRN_join_ind;
GDRBTRN.fn.fn_global = HXQBTRN_clause_head_action;
GDRBTRN.nonlocals = A68_NIL;
CARBTRN_add_indtype(A_HISVEC(FDRBTRN,EDRBTRN,2,A68_INT ), 2, 0, EBRBTRN_join_state, GDRBTRN);
 /* line 630: */
IDRBTRN.fn.fn_global = HXQBTRN_clause_head_action;
IDRBTRN.nonlocals = A68_NIL;
CARBTRN_add_indtype(A_HVEC(HDRBTRN,IMBATRN_seqstat_ind,A68_INT ), 1, 0, KBRBTRN_stat_state, IDRBTRN);
 /* line 631: */
KDRBTRN.fn.fn_global = IZQBTRN_fnspec_action;
KDRBTRN.nonlocals = A68_NIL;
CARBTRN_add_indtype(A_HVEC(JDRBTRN,DKBATRN_fnspec_ind,A68_INT ), 1, 0, RBRBTRN_no_state, KDRBTRN);
 /* line 632: */
MDRBTRN.fn.fn_global = HXQBTRN_clause_head_action;
MDRBTRN.nonlocals = A68_NIL;
CARBTRN_add_indtype(A_HVEC(LDRBTRN,AOBATRN_ureplace_ind,A68_INT ), 3, 0, QBRBTRN_monadic_state, MDRBTRN);
 /* line 633: */
 /* line 634: */
NDRBTRN.data[0] = EOBATRN_ustr_ind;
 /* line 635: */
NDRBTRN.data[1] = BNBATRN_tstr_ind;
 /* line 636: */
NDRBTRN.data[2] = SKBATRN_letstr_ind;
 /* line 637: */
NDRBTRN.data[3] = CMBATRN_seqletstr_ind;
 /* line 638: */
NDRBTRN.data[4] = LMBATRN_seqvarstr_ind;
 /* line 639: */
NDRBTRN.data[5] = FMBATRN_seqpvarstr_ind;
 /* line 640: */
NDRBTRN.data[6] = KGBATRN_attrstr_ind;
 /* line 641: */
NDRBTRN.data[7] = EGBATRN_attrbr_ind;
 /* line 642: */
NDRBTRN.data[8] = RMBATRN_startrepl_ind;
 /* line 643: */
NDRBTRN.data[9] = KNBATRN_ubr_ind;
 /* line 644: */
NDRBTRN.data[10] = SMBATRN_tbr_ind;
 /* line 645: */
NDRBTRN.data[11] = QJBATRN_fbr_ind;
NDRBTRN.data[12] = WLBATRN_seqbr_ind;
PDRBTRN.fn.fn_global = HXQBTRN_clause_head_action;
PDRBTRN.nonlocals = A68_NIL;
CARBTRN_add_indtype(A_HISVEC(ODRBTRN,NDRBTRN,13,A68_INT ), 2, 0, LBRBTRN_str_state, PDRBTRN);
 /* line 646: */
 /* line 647: */
QDRBTRN.data[0] = GMBATRN_seqrepl_ind;
 /* line 648: */
QDRBTRN.data[1] = HMBATRN_seqrow_ind;
 /* line 649: */
QDRBTRN.data[2] = VLBATRN_seqassign_ind;
 /* line 650: */
QDRBTRN.data[3] = HNBATRN_ualts_ind;
 /* line 651: */
QDRBTRN.data[4] = ZNBATRN_urepl_ind;
 /* line 652: */
QDRBTRN.data[5] = BOBATRN_urow_ind;
 /* line 653: */
QDRBTRN.data[6] = ANBATRN_trow_ind;
 /* line 654: */
QDRBTRN.data[7] = NNBATRN_udinst_ind;
 /* line 655: */
QDRBTRN.data[8] = MNBATRN_uconc_ind;
 /* line 656: */
QDRBTRN.data[9] = YKBATRN_makemult_ind;
 /* line 657: */
QDRBTRN.data[10] = CLBATRN_namelist_ind;
 /* line 658: */
QDRBTRN.data[11] = ALBATRN_mparams_ind;
 /* line 659: */
QDRBTRN.data[12] = MJBATRN_expmparams_ind;
 /* line 660: */
QDRBTRN.data[13] = SNBATRN_uindex_ind;
 /* line 661: */
QDRBTRN.data[14] = GOBATRN_utrim_ind;
 /* line 662: */
QDRBTRN.data[15] = ONBATRN_udyindex_ind;
 /* line 663: */
QDRBTRN.data[16] = OMBATRN_startcharrange_ind;
 /* line 664: */
QDRBTRN.data[17] = QMBATRN_startrange_ind;
 /* line 665: */
QDRBTRN.data[18] = IHBATRN_crange_ind;
 /* line 666: */
QDRBTRN.data[19] = UGBATRN_ccharrange_ind;
QDRBTRN.data[20] = FKBATRN_formula_ind;
SDRBTRN.fn.fn_global = HXQBTRN_clause_head_action;
SDRBTRN.nonlocals = A68_NIL;
CARBTRN_add_indtype(A_HISVEC(RDRBTRN,QDRBTRN,21,A68_INT ), 1, 0, LBRBTRN_str_state, SDRBTRN);
 /* line 667: */
UDRBTRN.fn.fn_global = HXQBTRN_clause_head_action;
UDRBTRN.nonlocals = A68_NIL;
CARBTRN_add_indtype(A_HVEC(TDRBTRN,UNBATRN_uminst_ind,A68_INT ), 1, 0, QBRBTRN_monadic_state, UDRBTRN);
 /* line 668: */
 /* line 669: */
VDRBTRN.data[0] = CNBATRN_tstring_ind;
VDRBTRN.data[1] = FOBATRN_ustring_ind;
XDRBTRN.fn.fn_global = OZQBTRN_string_action;
XDRBTRN.nonlocals = A68_NIL;
CARBTRN_add_indtype(A_HISVEC(WDRBTRN,VDRBTRN,2,A68_INT ), 2, 0, QBRBTRN_monadic_state, XDRBTRN);
 /* line 670: */
 /* line 671: */
YDRBTRN.data[0] = DLBATRN_newalts_ind;
 /* line 672: */
YDRBTRN.data[1] = FLBATRN_newint_ind;
YDRBTRN.data[2] = ELBATRN_newchars_ind;
AERBTRN.fn.fn_global = MYQBTRN_newalts_action;
AERBTRN.nonlocals = A68_NIL;
CARBTRN_add_indtype(A_HISVEC(ZDRBTRN,YDRBTRN,3,A68_INT ), 3, 0, MBRBTRN_newalts_state, AERBTRN);
 /* line 673: */
 /* line 674: */
BERBTRN.data[0] = UMBATRN_terms_ind;
BERBTRN.data[1] = VKBATRN_macspec_ind;
DERBTRN.fn.fn_global = HXQBTRN_clause_head_action;
DERBTRN.nonlocals = A68_NIL;
CARBTRN_add_indtype(A_HISVEC(CERBTRN,BERBTRN,2,A68_INT ), 1, 0, NBRBTRN_terms_state, DERBTRN);
 /* line 675: */
 /* line 676: */
EERBTRN.data[0] = PMBATRN_startjoin_ind;
 /* line 677: */
EERBTRN.data[1] = YLBATRN_seqchoice_ind;
EERBTRN.data[2] = XGBATRN_choice_ind;
GERBTRN.fn.fn_global = HXQBTRN_clause_head_action;
GERBTRN.nonlocals = A68_NIL;
CARBTRN_add_indtype(A_HISVEC(FERBTRN,EERBTRN,3,A68_INT ), 1, 0, RBRBTRN_no_state, GERBTRN);
 /* line 678: */
 /* line 679: */
HERBTRN.data[0] = ZIBATRN_endstr_ind;
 /* line 680: */
HERBTRN.data[1] = OHBATRN_endalts_ind;
 /* line 681: */
HERBTRN.data[2] = HIBATRN_endint_ind;
 /* line 682: */
HERBTRN.data[3] = VHBATRN_endchars_ind;
 /* line 683: */
HERBTRN.data[4] = VJBATRN_finishjoin_ind;
 /* line 684: */
HERBTRN.data[5] = NIBATRN_endnamelist_ind;
 /* line 685: */
HERBTRN.data[6] = LIBATRN_endmparams_ind;
 /* line 686: */
HERBTRN.data[7] = SIBATRN_endreplace_ind;
 /* line 687: */
HERBTRN.data[8] = UIBATRN_endseqrepl_ind;
 /* line 688: */
HERBTRN.data[9] = VIBATRN_endseqrow_ind;
 /* line 689: */
HERBTRN.data[10] = PHBATRN_endassign_ind;
 /* line 690: */
HERBTRN.data[11] = JJBATRN_endurepl_ind;
 /* line 691: */
HERBTRN.data[12] = EJBATRN_endudinst_ind;
 /* line 692: */
HERBTRN.data[13] = HJBATRN_enduminst_ind;
 /* line 693: */
HERBTRN.data[14] = DJBATRN_enduconc_ind;
 /* line 694: */
HERBTRN.data[15] = KIBATRN_endmakemult_ind;
 /* line 695: */
HERBTRN.data[16] = RIBATRN_endrepl_ind;
 /* line 696: */
HERBTRN.data[17] = TIBATRN_endrow_ind;
 /* line 697: */
HERBTRN.data[18] = GIBATRN_endindex_ind;
 /* line 698: */
HERBTRN.data[19] = AJBATRN_endstring_ind;
 /* line 699: */
HERBTRN.data[20] = QIBATRN_endrange_ind;
 /* line 700: */
HERBTRN.data[21] = EIBATRN_endformula_ind;
 /* line 701: */
HERBTRN.data[22] = WHBATRN_endchoice_ind;
HERBTRN.data[23] = JIBATRN_endmacspec_ind;
JERBTRN.fn.fn_global = PXQBTRN_clause_end_action;
JERBTRN.nonlocals = A68_NIL;
CARBTRN_add_indtype(A_HISVEC(IERBTRN,HERBTRN,24,A68_INT ), 0, 0, RBRBTRN_no_state, JERBTRN);
 /* line 703: */
 /* line 704: */
KERBTRN.data[0] = LNBATRN_ucase_ind;
KERBTRN.data[1] = XLBATRN_seqcase_ind;
MERBTRN.fn.fn_global = HXQBTRN_clause_head_action;
MERBTRN.nonlocals = A68_NIL;
CARBTRN_add_indtype(A_HISVEC(LERBTRN,KERBTRN,2,A68_INT ), 1, 5, FBRBTRN_case_state, MERBTRN);
 /* line 705: */
 /* line 706: */
NERBTRN.data[0] = UJBATRN_fif_ind;
 /* line 707: */
NERBTRN.data[1] = RNBATRN_uif_ind;
 /* line 708: */
NERBTRN.data[2] = NLBATRN_printif_ind;
NERBTRN.data[3] = ZLBATRN_seqif_ind;
 /* line 709: */
PERBTRN.fn.fn_global = HXQBTRN_clause_head_action;
PERBTRN.nonlocals = A68_NIL;
CARBTRN_add_indtype(A_HISVEC(OERBTRN,NERBTRN,4,A68_INT ), 1, 0, GBRBTRN_if_state, PERBTRN);
 /* line 710: */
RERBTRN.fn.fn_global = KXQBTRN_clause_sep_action;
RERBTRN.nonlocals = A68_NIL;
CARBTRN_add_indtype(A_HVEC(QERBTRN,TLBATRN_sep_ind,A68_INT ), 0, 0, RBRBTRN_no_state, RERBTRN);
 /* line 711: */
 /* line 712: */
SERBTRN.data[0] = TJBATRN_fi_ind;
SERBTRN.data[1] = RGBATRN_caseof_ind;
UERBTRN.fn.fn_global = KXQBTRN_clause_sep_action;
UERBTRN.nonlocals = A68_NIL;
CARBTRN_add_indtype(A_HISVEC(TERBTRN,SERBTRN,2,A68_INT ), 0, 3, RBRBTRN_no_state, UERBTRN);
 /* line 713: */
 /* line 714: */
VERBTRN.data[0] = MHBATRN_else_ind;
 /* line 715: */
VERBTRN.data[1] = QGBATRN_caseelse_ind;
 /* line 716: */
VERBTRN.data[2] = KJBATRN_esac_ind;
VERBTRN.data[3] = WMBATRN_then_ind;
XERBTRN.fn.fn_global = KXQBTRN_clause_sep_action;
XERBTRN.nonlocals = A68_NIL;
CARBTRN_add_indtype(A_HISVEC(WERBTRN,VERBTRN,4,A68_INT ), 0, 5, RBRBTRN_no_state, XERBTRN);
 /* line 717: */
ZERBTRN.fn.fn_global = KXQBTRN_clause_sep_action;
ZERBTRN.nonlocals = A68_NIL;
CARBTRN_add_indtype(A_HVEC(YERBTRN,NHBATRN_elseof_ind,A68_INT ), 0, 7, RBRBTRN_no_state, ZERBTRN);
 /* line 718: */
 /* line 719: */
AFRBTRN.data[0] = UHBATRN_endcase_ind;
AFRBTRN.data[1] = FIBATRN_endif_ind;
CFRBTRN.fn.fn_global = PXQBTRN_clause_end_action;
CFRBTRN.nonlocals = A68_NIL;
CARBTRN_add_indtype(A_HISVEC(BFRBTRN,AFRBTRN,2,A68_INT ), 0, 0, RBRBTRN_no_state, CFRBTRN);
 /* line 720: */
 /* line 721: */
DFRBTRN.data[0] = GGBATRN_attrdec_ind;
 /* line 722: */
DFRBTRN.data[1] = NKBATRN_intdec_ind;
 /* line 723: */
DFRBTRN.data[2] = FNBATRN_typedec_ind;
 /* line 724: */
DFRBTRN.data[3] = EHBATRN_constdec_ind;
 /* line 725: */
DFRBTRN.data[4] = AKBATRN_fndec_ind;
 /* line 726: */
DFRBTRN.data[5] = TKBATRN_macdec_ind;
DFRBTRN.data[6] = LJBATRN_expmacdec_ind;
FFRBTRN.fn.fn_global = PYQBTRN_dec_action;
FFRBTRN.nonlocals = A68_NIL;
CARBTRN_add_indtype(A_HISVEC(EFRBTRN,DFRBTRN,7,A68_INT ), 2, 0, JBRBTRN_dec_state, FFRBTRN);
 /* line 727: */
HFRBTRN.fn.fn_global = SYQBTRN_enddec_action;
HFRBTRN.nonlocals = A68_NIL;
CARBTRN_add_indtype(A_HVEC(GFRBTRN,AIBATRN_enddec_ind,A68_INT ), 0, 0, RBRBTRN_no_state, HFRBTRN);
 /* line 729: */
IFRBTRN_unset = A68_FALSE;
 /* line 731: */
 /* line 732: */
KFRBTRN = TZQBTRN_indtypes.upb;
for ( JFRBTRN_n = 1;
JFRBTRN_n <= KFRBTRN;
JFRBTRN_n += 1 )
{ 
 /* line 733: */
LFRBTRN_it = (&A_VINDEX(TZQBTRN_indtypes,JFRBTRN_n));
 /* line 734: */
 /* line 743: */
if ( ((*(&(LFRBTRN_it->Number)))==0) )
{ 
 /* line 744: */
 /* line 745: */
MFRBTRN = (&(LFRBTRN_it->Number)) ;
(*MFRBTRN) = JFRBTRN_n;
} 
}
 /* line 746: */
} 
A_PROC_EXIT(init_indtypes);
return;
} 
#undef NL
 /* line 749: */
 /* line 750: */
 /* line 751: */
 /* line 752: */
 /* line 753: */

A68_VOID  TFRBTRN_simple_layout(A68_313  Dec, A68_395  Out_line_proc, A68_INT  Width, A68_53  Required_indicators, A68_173  Options, A68_108  Msg)
{ 
A68_BOOL  UFRBTRN_pass_mode_all;
A68_INT  VFRBTRN;  /* clause result */
A68_INT  WFRBTRN_enditem_ind_size;
A68_INT  XFRBTRN_enditem_ind_pos;
A68_BOOL  YFRBTRN_need_item_end;
A68_BOOL  ZFRBTRN_have_sep;
A68_130  BGRBTRN_set_ind;   /* proc value of non-global proc */
A68_36  OGRBTRN_write_text;   /* proc value of non-global proc */
A_PROC_ENTRY(simple_layout);
 /* line 754: */
 /* line 755: */
{ 
UFRBTRN_pass_mode_all = XDBATRN_includes(Required_indicators, NDBATRN_pass_all_terminators);
 /* line 756: */
if ( (IIBATRN_enditem_ind>=127) )
{ 
VFRBTRN = 2;
} 
else
{ 
VFRBTRN = 1;
} 
WFRBTRN_enditem_ind_size = VFRBTRN;
 /* line 757: */
XFRBTRN_enditem_ind_pos = (-1);
 /* line 758: */
YFRBTRN_need_item_end = A68_FALSE;
ZFRBTRN_have_sep = A68_FALSE;
 /* line 760: */
if ( EFCATRN_layout_format_changed() )
{ 
BBRBTRN_init_indtypes();
} 
 /* line 761: */
GRQBTRN_last_ind_num = 0;
 /* line 762: */
HSQBTRN_out_line = Out_line_proc;
 /* line 763: */
ARQBTRN_lwidth = Width;
 /* line 764: */
BRQBTRN_cpos = CRQBTRN_ccnt = DRQBTRN_space_cnt = 0;
 /* line 765: */
ERQBTRN_level = 0;
 /* line 766: */
WQQBTRN_markers = HQQBTRN_nilmarker;
 /* line 767: */
YQQBTRN_adjusts = IQQBTRN_niladjust;
 /* line 768: */
WUQBTRN_underflowed = A68_FALSE;
 /* line 769: */
DJCATRN_set_next_class(KFCATRN_no_class);
 /* line 770: */
FJCATRN_set_last_class(LFCATRN_space_class);
 /* line 771: */
PUQBTRN_push_stack((&GSQBTRN_dummy_indtype));
 /* line 773: */
A_CLOSURE( BGRBTRN_set_ind, CGRBTRN_set_ind, DGRBTRN_set_ind );
(( DGRBTRN_set_ind * ) ( BGRBTRN_set_ind.nonlocals )) -> Required_indicators = Required_indicators;
(( DGRBTRN_set_ind * ) ( BGRBTRN_set_ind.nonlocals )) -> YFRBTRN_need_item_end = (&YFRBTRN_need_item_end);
(( DGRBTRN_set_ind * ) ( BGRBTRN_set_ind.nonlocals )) -> XFRBTRN_enditem_ind_pos = (&XFRBTRN_enditem_ind_pos);
(( DGRBTRN_set_ind * ) ( BGRBTRN_set_ind.nonlocals )) -> WFRBTRN_enditem_ind_size = WFRBTRN_enditem_ind_size;
(( DGRBTRN_set_ind * ) ( BGRBTRN_set_ind.nonlocals )) -> Msg = Msg;
 /* line 795: */
A_CLOSURE( OGRBTRN_write_text, PGRBTRN_write_text, QGRBTRN_write_text );
(( QGRBTRN_write_text * ) ( OGRBTRN_write_text.nonlocals )) -> Msg = Msg;
(( QGRBTRN_write_text * ) ( OGRBTRN_write_text.nonlocals )) -> YFRBTRN_need_item_end = (&YFRBTRN_need_item_end);
(( QGRBTRN_write_text * ) ( OGRBTRN_write_text.nonlocals )) -> BGRBTRN_set_ind = BGRBTRN_set_ind;
(( QGRBTRN_write_text * ) ( OGRBTRN_write_text.nonlocals )) -> UFRBTRN_pass_mode_all = UFRBTRN_pass_mode_all;
(( QGRBTRN_write_text * ) ( OGRBTRN_write_text.nonlocals )) -> XFRBTRN_enditem_ind_pos = (&XFRBTRN_enditem_ind_pos);
 /* line 871: */
TINBTRN_write_ella(Dec, OGRBTRN_write_text, BGRBTRN_set_ind, Options, Msg);
 /* line 872: */
XUQBTRN_pop_stack();
 /* line 873: */
LUQBTRN_clear_markers(VQQBTRN_freestack);
 /* line 874: */
 /* line 875: */
/*SKIP*/;
} 
A_PROC_EXIT(simple_layout);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 6: */
void BQQBTRN(void)   /* initialise DECS simple_layout */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/simple_layout.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/layout_tables.m","./mfiles/write_ella.m","./mfiles/syntax_inds.m","./mfiles/modeprocs.m","./mfiles/assmodes.m","/u/model/ella/ostools/assoc/mfiles/options.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_377  MQQBTRN;  /* collateral clause result */
A68_VC  TQQBTRN;  /* avoid structure result */
A68_388  ESQBTRN;  /* collateral clause result */
A68_389  FSQBTRN;  /* procedure value */
A68_395  OSQBTRN;  /* procedure value */
A68_406  UZQBTRN;  /* avoid structure result */
A68_INT  WZQBTRN;  /* forall loop counter */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
YECATRN();   /* USE layout_tables */
ZOMBTRN();   /* USE write_ella */
FDBATRN();   /* USE syntax_inds */
HNMATRN();   /* USE modeprocs */
BAAATRN();   /* USE assmodes */
BAAAOST();   /* USE options */
JFAAOSI();   /* USE messageproc */
PCAAOST();   /* USE osinterface */
JSCAOST();   /* USE basics */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/transform/assoc/./a68files/simple_layout.a68";
A_config.translation_time = "Tue Apr  4 10:11:10 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "AQQBTRN (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 10:11:10 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS simple_layout);
UEAALIB_a68config(LGAALIB_configinfo, FQQBTRN);
 /* line 55: */
 /* line 73: */
 /* line 75: */
 /* line 76: */
 /* line 77: */
 /* line 79: */
 /* line 86: */
MQQBTRN.Step = 0;
MQQBTRN.Dither = 0;
NQQBTRN_indent_data = MQQBTRN;
 /* line 87: */
PQQBTRN_generator( A68_TRUE, &TQQBTRN );
SQQBTRN_line = TQQBTRN;
 /* line 88: */
UQQBTRN_stack = GQQBTRN_nilstack;
 /* line 89: */
VQQBTRN_freestack = GQQBTRN_nilstack;
 /* line 90: */
WQQBTRN_markers = HQQBTRN_nilmarker;
 /* line 91: */
XQQBTRN_freemarkers = HQQBTRN_nilmarker;
 /* line 92: */
YQQBTRN_adjusts = IQQBTRN_niladjust;
 /* line 93: */
ZQQBTRN_freeadjusts = IQQBTRN_niladjust;
 /* line 94: */
ARQBTRN_lwidth = 80;
 /* line 95: */
BRQBTRN_cpos = 0;
 /* line 96: */
CRQBTRN_ccnt = 0;
 /* line 97: */
DRQBTRN_space_cnt = 0;
 /* line 98: */
ERQBTRN_level = 0;
 /* line 99: */
FRQBTRN_depth = 0;
 /* line 100: */
GRQBTRN_last_ind_num = 0;
 /* line 101: */
HRQBTRN_line_count = 0;
 /* line 103: */
 /* line 132: */
 /* line 144: */
 /* line 145: */
 /* line 146: */
 /* line 157: */
 /* line 159: */
ESQBTRN.Number = 0;
ESQBTRN.Delay = 0;
ESQBTRN.Bias = 0;
ESQBTRN.Clause_state = 0X0U;
FSQBTRN.fn.fn_global = DSQBTRN_no_indaction;
FSQBTRN.nonlocals = A68_NIL;
ESQBTRN.Action = FSQBTRN;
GSQBTRN_dummy_indtype = ESQBTRN;
 /* line 161: */
 /* line 162: */
OSQBTRN.fn.fn_global = KSQBTRN_anonymous;
OSQBTRN.nonlocals = A68_NIL;
HSQBTRN_out_line = OSQBTRN;
 /* line 164: */
 /* line 173: */
 /* line 193: */
 /* line 251: */
 /* line 263: */
 /* line 289: */
WUQBTRN_underflowed = A68_FALSE;
 /* line 290: */
 /* line 291: */
 /* line 292: */
 /* line 310: */
 /* line 323: */
 /* line 342: */
 /* line 375: */
 /* line 414: */
 /* line 419: */
 /* line 441: */
 /* line 456: */
 /* line 459: */
 /* line 462: */
 /* line 465: */
 /* line 468: */
 /* line 471: */
 /* line 474: */
 /* line 480: */
 /* line 486: */
 /* line 492: */
 /* line 508: */
 /* line 515: */
 /* line 521: */
 /* line 527: */
 /* line 533: */
 /* line 539: */
QZQBTRN_generator( A68_TRUE, &UZQBTRN );
TZQBTRN_indtypes = UZQBTRN;
 /* line 541: */
WZQBTRN = TZQBTRN_indtypes.upb -1;
VZQBTRN_it = TZQBTRN_indtypes.data;
for (;WZQBTRN-- >= 0;
(VZQBTRN_it++
) )
{
(*VZQBTRN_it) = GSQBTRN_dummy_indtype;
}
 /* line 543: */
 /* line 567: */
 /* line 568: */
 /* line 569: */
 /* line 748: */
 /* line 877: */
 /* line 878: */
 /* line 883: */
/*SKIP*/;
A_PROC_EXIT(DECS simple_layout);
} 
#undef NL
/* end of translation of ./a68files/simple_layout.a68 */
