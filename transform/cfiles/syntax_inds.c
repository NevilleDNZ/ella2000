
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
/* UNAME:EDBATRN */
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
A_ISTRUCT(A68_CHAR ,58,A68t161);
typedef struct A68t161  A68_161 ;    /* STRUCT 58 CHAR */

A_PROCEDURE(A68_VOID ,A68t162,(A68_BOOL ,struct A68t53 *),(A68_BOOL ,struct A68t53 *,void *));
typedef struct A68t162  A68_162 ;    /* PROC(BOOL) MODE53 */

A_PROCEDURE(A68_BOOL ,A68t163,(struct A68t53 ,A68_INT ),(struct A68t53 ,A68_INT ,void *));
typedef struct A68t163  A68_163 ;    /* PROC(MODE53,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t164,(struct A68t53 ,A68_INT ,struct A68t53 *),(struct A68t53 ,A68_INT ,struct A68t53 *,void *));
typedef struct A68t164  A68_164 ;    /* PROC(REF MODE53,INT) REF MODE53 */

A_PROCEDURE(A68_VOID ,A68t165,(struct A68t53 *),(struct A68t53 *,void *));
typedef struct A68t165  A68_165 ;    /* PROC MODE53 */

A_PROCEDURE(A68_VOID ,A68t166,(struct A68t32 ,struct A68t53 *),(struct A68t32 ,struct A68t53 *,void *));
typedef struct A68t166  A68_166 ;    /* PROC(MODE32) MODE53 */
A_ISTRUCT(A68_CHAR ,6,A68t167);
typedef struct A68t167  A68_167 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t168);
typedef struct A68t168  A68_168 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t169);
typedef struct A68t169  A68_169 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(A68_CHAR ,7,A68t170);
typedef struct A68t170  A68_170 ;    /* STRUCT 7 CHAR */
A_ISTRUCT(A68_CHAR ,9,A68t171);
typedef struct A68t171  A68_171 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t172);
typedef struct A68t172  A68_172 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(A68_CHAR ,11,A68t173);
typedef struct A68t173  A68_173 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,12,A68t174);
typedef struct A68t174  A68_174 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t175);
typedef struct A68t175  A68_175 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t176);
typedef struct A68t176  A68_176 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(A68_CHAR ,14,A68t177);
typedef struct A68t177  A68_177 ;    /* STRUCT 14 CHAR */
A_ISTRUCT(A68_VC ,215,A68t178);
typedef struct A68t178  A68_178 ;    /* STRUCT 215 MODE26 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from osinterface --- */
#define FDAAOST_word_size 32
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
/* --- End of imports from osinterface --- */


/* --- Imports from basics --- */
extern A68_VOID  VTCAOST_clear(struct A68t94 );
/* --- End of imports from basics --- */


/* --- Imports from putstrings --- */
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void PCAAOST(void);   /* osinterface */
extern void JSCAOST(void);   /* basics */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_161   IDBATRN = {"$Id: syntax_inds.a68,v 34.3 1995/03/29 13:02:50 ella Exp $"}; 
A_GISVEC(A68_VC ,JDBATRN,IDBATRN,58)
#define KDBATRN_num_inds 215
#define LDBATRN_max_ind_size 14
#define MDBATRN_blank_ind 0
A68_INT  NDBATRN_pass_all_terminators;
static A68_INT  ODBATRN_num_words;
A68_162  PDBATRN_anonymous;
#define AGBATRN_adecls_ind 1
#define BGBATRN_adelay_ind 2
#define CGBATRN_alien_ind 3
#define DGBATRN_arith_ind 4
#define EGBATRN_attrbr_ind 5
#define FGBATRN_attrdata_ind 6
#define GGBATRN_attrdec_ind 7
#define HGBATRN_attritem_ind 8
#define IGBATRN_attrmpar_ind 9
#define JGBATRN_attrname_ind 10
#define KGBATRN_attrstr_ind 11
#define LGBATRN_backslash_ind 12
#define MGBATRN_becomes_ind 13
#define NGBATRN_biop_ind 14
#define OGBATRN_block_ind 15
#define PGBATRN_body_ind 16
#define QGBATRN_caseelse_ind 17
#define RGBATRN_caseof_ind 18
#define SGBATRN_cbasic_ind 19
#define TGBATRN_cchar_ind 20
#define UGBATRN_ccharrange_ind 21
#define VGBATRN_cdecls_ind 22
#define WGBATRN_char_ind 23
#define XGBATRN_choice_ind 24
#define YGBATRN_chooser_ind 25
#define ZGBATRN_cint_ind 26
#define AHBATRN_cmpar_ind 27
#define BHBATRN_cname_ind 28
#define CHBATRN_conc_ind 29
#define DHBATRN_condition_ind 30
#define EHBATRN_constdec_ind 31
#define FHBATRN_constitem_ind 32
#define GHBATRN_cquery_ind 33
#define HHBATRN_cquote_ind 34
#define IHBATRN_crange_ind 35
#define JHBATRN_ctype_ind 36
#define KHBATRN_cvoid_ind 37
#define LHBATRN_dotdot_ind 38
#define MHBATRN_else_ind 39
#define NHBATRN_elseof_ind 40
#define OHBATRN_endalts_ind 41
#define PHBATRN_endassign_ind 42
#define QHBATRN_endattr_ind 43
#define RHBATRN_endattrdata_ind 44
#define SHBATRN_endblock_ind 45
#define THBATRN_endbody_ind 46
#define UHBATRN_endcase_ind 47
#define VHBATRN_endchars_ind 48
#define WHBATRN_endchoice_ind 49
#define XHBATRN_endcint_ind 50
#define YHBATRN_endcquery_ind 51
#define ZHBATRN_endcquote_ind 52
#define AIBATRN_enddec_ind 53
#define BIBATRN_endfdop_ind 54
#define CIBATRN_endfmop_ind 55
#define DIBATRN_endfnspec_ind 56
#define EIBATRN_endformula_ind 57
#define FIBATRN_endif_ind 58
#define GIBATRN_endindex_ind 59
#define HIBATRN_endint_ind 60
#define IIBATRN_enditem_ind 61
#define JIBATRN_endmacspec_ind 62
#define KIBATRN_endmakemult_ind 63
#define LIBATRN_endmparams_ind 64
#define MIBATRN_endmult_ind 65
#define NIBATRN_endnamelist_ind 66
#define OIBATRN_endouterdec_ind 67
#define PIBATRN_endoutput_ind 68
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
#define BJBATRN_endtfn_ind 80
#define CJBATRN_enduassoc_ind 81
#define DJBATRN_enduconc_ind 82
#define EJBATRN_endudinst_ind 83
#define FJBATRN_enduextract_ind 84
#define GJBATRN_endufn_ind 85
#define HJBATRN_enduminst_ind 86
#define IJBATRN_enduportname_ind 87
#define JJBATRN_endurepl_ind 88
#define KJBATRN_esac_ind 89
#define LJBATRN_expmacdec_ind 90
#define MJBATRN_expmparams_ind 91
#define NJBATRN_farith_ind 92
#define OJBATRN_faster_ind 93
#define PJBATRN_fault_ind 94
#define QJBATRN_fbr_ind 95
#define RJBATRN_fdecls_ind 96
#define SJBATRN_fdop_ind 97
#define TJBATRN_fi_ind 98
#define UJBATRN_fif_ind 99
#define VJBATRN_finishjoin_ind 100
#define WJBATRN_fint_ind 101
#define XJBATRN_fmop_ind 102
#define YJBATRN_fmpar_ind 103
#define ZJBATRN_fname_ind 104
#define AKBATRN_fndec_ind 105
#define BKBATRN_fnitem_ind 106
#define CKBATRN_fnname_ind 107
#define DKBATRN_fnspec_ind 108
#define EKBATRN_forjoin_ind 109
#define FKBATRN_formula_ind 110
#define GKBATRN_idecls_ind 111
#define HKBATRN_idelay_ind 112
#define IKBATRN_impint_ind 113
#define JKBATRN_import_ind 114
#define KKBATRN_imptype_ind 115
#define LKBATRN_inst_ind 116
#define MKBATRN_instattr_ind 117
#define NKBATRN_intdec_ind 118
#define OKBATRN_intitem_ind 119
#define PKBATRN_join_ind 120
#define QKBATRN_let_ind 121
#define RKBATRN_letname_ind 122
#define SKBATRN_letstr_ind 123
#define TKBATRN_macdec_ind 124
#define UKBATRN_macitem_ind 125
#define VKBATRN_macspec_ind 126
#define WKBATRN_make_ind 127
#define XKBATRN_makeinst_ind 128
#define YKBATRN_makemult_ind 129
#define ZKBATRN_mdecls_ind 130
#define ALBATRN_mparams_ind 131
#define BLBATRN_nameattr_ind 132
#define CLBATRN_namelist_ind 133
#define DLBATRN_newalts_ind 134
#define ELBATRN_newchars_ind 135
#define FLBATRN_newint_ind 136
#define GLBATRN_nobody_ind 137
#define HLBATRN_nonameattr_ind 138
#define ILBATRN_nooutput_ind 139
#define JLBATRN_operator_ind 140
#define KLBATRN_option_ind 141
#define LLBATRN_output_ind 142
#define MLBATRN_print_ind 143
#define NLBATRN_printif_ind 144
#define OLBATRN_printstring_ind 145
#define PLBATRN_ram_ind 146
#define QLBATRN_reform_ind 147
#define RLBATRN_replace_ind 148
#define SLBATRN_sample_ind 149
#define TLBATRN_sep_ind 150
#define ULBATRN_seq_ind 151
#define VLBATRN_seqassign_ind 152
#define WLBATRN_seqbr_ind 153
#define XLBATRN_seqcase_ind 154
#define YLBATRN_seqchoice_ind 155
#define ZLBATRN_seqif_ind 156
#define AMBATRN_seqlet_ind 157
#define BMBATRN_seqletname_ind 158
#define CMBATRN_seqletstr_ind 159
#define DMBATRN_seqpvar_ind 160
#define EMBATRN_seqpvarname_ind 161
#define FMBATRN_seqpvarstr_ind 162
#define GMBATRN_seqrepl_ind 163
#define HMBATRN_seqrow_ind 164
#define IMBATRN_seqstat_ind 165
#define JMBATRN_seqvar_ind 166
#define KMBATRN_seqvarname_ind 167
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
#define VMBATRN_tfn_ind 178
#define WMBATRN_then_ind 179
#define XMBATRN_tmpar_ind 180
#define YMBATRN_tname_ind 181
#define ZMBATRN_to_ind 182
#define ANBATRN_trow_ind 183
#define BNBATRN_tstr_ind 184
#define CNBATRN_tstring_ind 185
#define DNBATRN_tvoid_ind 186
#define ENBATRN_typealias_ind 187
#define FNBATRN_typedec_ind 188
#define GNBATRN_typeitem_ind 189
#define HNBATRN_ualts_ind 190
#define INBATRN_uassoc_ind 191
#define JNBATRN_uattr_ind 192
#define KNBATRN_ubr_ind 193
#define LNBATRN_ucase_ind 194
#define MNBATRN_uconc_ind 195
#define NNBATRN_udinst_ind 196
#define ONBATRN_udyindex_ind 197
#define PNBATRN_uextract_ind 198
#define QNBATRN_ufn_ind 199
#define RNBATRN_uif_ind 200
#define SNBATRN_uindex_ind 201
#define TNBATRN_uio_ind 202
#define UNBATRN_uminst_ind 203
#define VNBATRN_uname_ind 204
#define WNBATRN_unitattr_ind 205
#define XNBATRN_unull_ind 206
#define YNBATRN_uportname_ind 207
#define ZNBATRN_urepl_ind 208
#define AOBATRN_ureplace_ind 209
#define BOBATRN_urow_ind 210
#define COBATRN_usequence_ind 211
#define DOBATRN_useries_ind 212
#define EOBATRN_ustr_ind 213
#define FOBATRN_ustring_ind 214
#define GOBATRN_utrim_ind 215
static A68_167   IOBATRN = {"adecls"}; 
A_GISVEC(A68_VC ,JOBATRN,IOBATRN,6)
static A68_167   KOBATRN = {"adelay"}; 
A_GISVEC(A68_VC ,LOBATRN,KOBATRN,6)
static A68_168   MOBATRN = {"alien"}; 
A_GISVEC(A68_VC ,NOBATRN,MOBATRN,5)
static A68_168   OOBATRN = {"arith"}; 
A_GISVEC(A68_VC ,POBATRN,OOBATRN,5)
static A68_167   QOBATRN = {"attrbr"}; 
A_GISVEC(A68_VC ,ROBATRN,QOBATRN,6)
static A68_169   SOBATRN = {"attrdata"}; 
A_GISVEC(A68_VC ,TOBATRN,SOBATRN,8)
static A68_170   UOBATRN = {"attrdec"}; 
A_GISVEC(A68_VC ,VOBATRN,UOBATRN,7)
static A68_169   WOBATRN = {"attritem"}; 
A_GISVEC(A68_VC ,XOBATRN,WOBATRN,8)
static A68_169   YOBATRN = {"attrmpar"}; 
A_GISVEC(A68_VC ,ZOBATRN,YOBATRN,8)
static A68_169   APBATRN = {"attrname"}; 
A_GISVEC(A68_VC ,BPBATRN,APBATRN,8)
static A68_170   CPBATRN = {"attrstr"}; 
A_GISVEC(A68_VC ,DPBATRN,CPBATRN,7)
static A68_171   EPBATRN = {"backslash"}; 
A_GISVEC(A68_VC ,FPBATRN,EPBATRN,9)
static A68_170   GPBATRN = {"becomes"}; 
A_GISVEC(A68_VC ,HPBATRN,GPBATRN,7)
static A68_116   IPBATRN = {"biop"}; 
A_GISVEC(A68_VC ,JPBATRN,IPBATRN,4)
static A68_168   KPBATRN = {"block"}; 
A_GISVEC(A68_VC ,LPBATRN,KPBATRN,5)
static A68_116   MPBATRN = {"body"}; 
A_GISVEC(A68_VC ,NPBATRN,MPBATRN,4)
static A68_169   OPBATRN = {"caseelse"}; 
A_GISVEC(A68_VC ,PPBATRN,OPBATRN,8)
static A68_167   QPBATRN = {"caseof"}; 
A_GISVEC(A68_VC ,RPBATRN,QPBATRN,6)
static A68_167   SPBATRN = {"cbasic"}; 
A_GISVEC(A68_VC ,TPBATRN,SPBATRN,6)
static A68_168   UPBATRN = {"cchar"}; 
A_GISVEC(A68_VC ,VPBATRN,UPBATRN,5)
static A68_172   WPBATRN = {"ccharrange"}; 
A_GISVEC(A68_VC ,XPBATRN,WPBATRN,10)
static A68_167   YPBATRN = {"cdecls"}; 
A_GISVEC(A68_VC ,ZPBATRN,YPBATRN,6)
static A68_116   AQBATRN = {"char"}; 
A_GISVEC(A68_VC ,BQBATRN,AQBATRN,4)
static A68_167   CQBATRN = {"choice"}; 
A_GISVEC(A68_VC ,DQBATRN,CQBATRN,6)
static A68_170   EQBATRN = {"chooser"}; 
A_GISVEC(A68_VC ,FQBATRN,EQBATRN,7)
static A68_116   GQBATRN = {"cint"}; 
A_GISVEC(A68_VC ,HQBATRN,GQBATRN,4)
static A68_168   IQBATRN = {"cmpar"}; 
A_GISVEC(A68_VC ,JQBATRN,IQBATRN,5)
static A68_168   KQBATRN = {"cname"}; 
A_GISVEC(A68_VC ,LQBATRN,KQBATRN,5)
static A68_116   MQBATRN = {"conc"}; 
A_GISVEC(A68_VC ,NQBATRN,MQBATRN,4)
static A68_171   OQBATRN = {"condition"}; 
A_GISVEC(A68_VC ,PQBATRN,OQBATRN,9)
static A68_169   QQBATRN = {"constdec"}; 
A_GISVEC(A68_VC ,RQBATRN,QQBATRN,8)
static A68_171   SQBATRN = {"constitem"}; 
A_GISVEC(A68_VC ,TQBATRN,SQBATRN,9)
static A68_167   UQBATRN = {"cquery"}; 
A_GISVEC(A68_VC ,VQBATRN,UQBATRN,6)
static A68_167   WQBATRN = {"cquote"}; 
A_GISVEC(A68_VC ,XQBATRN,WQBATRN,6)
static A68_167   YQBATRN = {"crange"}; 
A_GISVEC(A68_VC ,ZQBATRN,YQBATRN,6)
static A68_168   ARBATRN = {"ctype"}; 
A_GISVEC(A68_VC ,BRBATRN,ARBATRN,5)
static A68_168   CRBATRN = {"cvoid"}; 
A_GISVEC(A68_VC ,DRBATRN,CRBATRN,5)
static A68_167   ERBATRN = {"dotdot"}; 
A_GISVEC(A68_VC ,FRBATRN,ERBATRN,6)
static A68_116   GRBATRN = {"else"}; 
A_GISVEC(A68_VC ,HRBATRN,GRBATRN,4)
static A68_167   IRBATRN = {"elseof"}; 
A_GISVEC(A68_VC ,JRBATRN,IRBATRN,6)
static A68_170   KRBATRN = {"endalts"}; 
A_GISVEC(A68_VC ,LRBATRN,KRBATRN,7)
static A68_171   MRBATRN = {"endassign"}; 
A_GISVEC(A68_VC ,NRBATRN,MRBATRN,9)
static A68_170   ORBATRN = {"endattr"}; 
A_GISVEC(A68_VC ,PRBATRN,ORBATRN,7)
static A68_173   QRBATRN = {"endattrdata"}; 
A_GISVEC(A68_VC ,RRBATRN,QRBATRN,11)
static A68_169   SRBATRN = {"endblock"}; 
A_GISVEC(A68_VC ,TRBATRN,SRBATRN,8)
static A68_170   URBATRN = {"endbody"}; 
A_GISVEC(A68_VC ,VRBATRN,URBATRN,7)
static A68_170   WRBATRN = {"endcase"}; 
A_GISVEC(A68_VC ,XRBATRN,WRBATRN,7)
static A68_169   YRBATRN = {"endchars"}; 
A_GISVEC(A68_VC ,ZRBATRN,YRBATRN,8)
static A68_171   ASBATRN = {"endchoice"}; 
A_GISVEC(A68_VC ,BSBATRN,ASBATRN,9)
static A68_170   CSBATRN = {"endcint"}; 
A_GISVEC(A68_VC ,DSBATRN,CSBATRN,7)
static A68_171   ESBATRN = {"endcquery"}; 
A_GISVEC(A68_VC ,FSBATRN,ESBATRN,9)
static A68_171   GSBATRN = {"endcquote"}; 
A_GISVEC(A68_VC ,HSBATRN,GSBATRN,9)
static A68_167   ISBATRN = {"enddec"}; 
A_GISVEC(A68_VC ,JSBATRN,ISBATRN,6)
static A68_170   KSBATRN = {"endfdop"}; 
A_GISVEC(A68_VC ,LSBATRN,KSBATRN,7)
static A68_170   MSBATRN = {"endfmop"}; 
A_GISVEC(A68_VC ,NSBATRN,MSBATRN,7)
static A68_171   OSBATRN = {"endfnspec"}; 
A_GISVEC(A68_VC ,PSBATRN,OSBATRN,9)
static A68_172   QSBATRN = {"endformula"}; 
A_GISVEC(A68_VC ,RSBATRN,QSBATRN,10)
static A68_168   SSBATRN = {"endif"}; 
A_GISVEC(A68_VC ,TSBATRN,SSBATRN,5)
static A68_169   USBATRN = {"endindex"}; 
A_GISVEC(A68_VC ,VSBATRN,USBATRN,8)
static A68_167   WSBATRN = {"endint"}; 
A_GISVEC(A68_VC ,XSBATRN,WSBATRN,6)
static A68_170   YSBATRN = {"enditem"}; 
A_GISVEC(A68_VC ,ZSBATRN,YSBATRN,7)
static A68_172   ATBATRN = {"endmacspec"}; 
A_GISVEC(A68_VC ,BTBATRN,ATBATRN,10)
static A68_173   CTBATRN = {"endmakemult"}; 
A_GISVEC(A68_VC ,DTBATRN,CTBATRN,11)
static A68_172   ETBATRN = {"endmparams"}; 
A_GISVEC(A68_VC ,FTBATRN,ETBATRN,10)
static A68_170   GTBATRN = {"endmult"}; 
A_GISVEC(A68_VC ,HTBATRN,GTBATRN,7)
static A68_173   ITBATRN = {"endnamelist"}; 
A_GISVEC(A68_VC ,JTBATRN,ITBATRN,11)
static A68_173   KTBATRN = {"endouterdec"}; 
A_GISVEC(A68_VC ,LTBATRN,KTBATRN,11)
static A68_171   MTBATRN = {"endoutput"}; 
A_GISVEC(A68_VC ,NTBATRN,MTBATRN,9)
static A68_169   OTBATRN = {"endrange"}; 
A_GISVEC(A68_VC ,PTBATRN,OTBATRN,8)
static A68_170   QTBATRN = {"endrepl"}; 
A_GISVEC(A68_VC ,RTBATRN,QTBATRN,7)
static A68_172   STBATRN = {"endreplace"}; 
A_GISVEC(A68_VC ,TTBATRN,STBATRN,10)
static A68_167   UTBATRN = {"endrow"}; 
A_GISVEC(A68_VC ,VTBATRN,UTBATRN,6)
static A68_172   WTBATRN = {"endseqrepl"}; 
A_GISVEC(A68_VC ,XTBATRN,WTBATRN,10)
static A68_171   YTBATRN = {"endseqrow"}; 
A_GISVEC(A68_VC ,ZTBATRN,YTBATRN,9)
static A68_173   AUBATRN = {"endsequence"}; 
A_GISVEC(A68_VC ,BUBATRN,AUBATRN,11)
static A68_171   CUBATRN = {"endseries"}; 
A_GISVEC(A68_VC ,DUBATRN,CUBATRN,9)
static A68_170   EUBATRN = {"endstep"}; 
A_GISVEC(A68_VC ,FUBATRN,EUBATRN,7)
static A68_167   GUBATRN = {"endstr"}; 
A_GISVEC(A68_VC ,HUBATRN,GUBATRN,6)
static A68_171   IUBATRN = {"endstring"}; 
A_GISVEC(A68_VC ,JUBATRN,IUBATRN,9)
static A68_167   KUBATRN = {"endtfn"}; 
A_GISVEC(A68_VC ,LUBATRN,KUBATRN,6)
static A68_171   MUBATRN = {"enduassoc"}; 
A_GISVEC(A68_VC ,NUBATRN,MUBATRN,9)
static A68_169   OUBATRN = {"enduconc"}; 
A_GISVEC(A68_VC ,PUBATRN,OUBATRN,8)
static A68_171   QUBATRN = {"endudinst"}; 
A_GISVEC(A68_VC ,RUBATRN,QUBATRN,9)
static A68_173   SUBATRN = {"enduextract"}; 
A_GISVEC(A68_VC ,TUBATRN,SUBATRN,11)
static A68_167   UUBATRN = {"endufn"}; 
A_GISVEC(A68_VC ,VUBATRN,UUBATRN,6)
static A68_171   WUBATRN = {"enduminst"}; 
A_GISVEC(A68_VC ,XUBATRN,WUBATRN,9)
static A68_174   YUBATRN = {"enduportname"}; 
A_GISVEC(A68_VC ,ZUBATRN,YUBATRN,12)
static A68_169   AVBATRN = {"endurepl"}; 
A_GISVEC(A68_VC ,BVBATRN,AVBATRN,8)
static A68_116   CVBATRN = {"esac"}; 
A_GISVEC(A68_VC ,DVBATRN,CVBATRN,4)
static A68_171   EVBATRN = {"expmacdec"}; 
A_GISVEC(A68_VC ,FVBATRN,EVBATRN,9)
static A68_172   GVBATRN = {"expmparams"}; 
A_GISVEC(A68_VC ,HVBATRN,GVBATRN,10)
static A68_167   IVBATRN = {"farith"}; 
A_GISVEC(A68_VC ,JVBATRN,IVBATRN,6)
static A68_167   KVBATRN = {"faster"}; 
A_GISVEC(A68_VC ,LVBATRN,KVBATRN,6)
static A68_168   MVBATRN = {"fault"}; 
A_GISVEC(A68_VC ,NVBATRN,MVBATRN,5)
static A68_175   OVBATRN = {"fbr"}; 
A_GISVEC(A68_VC ,PVBATRN,OVBATRN,3)
static A68_167   QVBATRN = {"fdecls"}; 
A_GISVEC(A68_VC ,RVBATRN,QVBATRN,6)
static A68_116   SVBATRN = {"fdop"}; 
A_GISVEC(A68_VC ,TVBATRN,SVBATRN,4)
static A68_176   UVBATRN = {"fi"}; 
A_GISVEC(A68_VC ,VVBATRN,UVBATRN,2)
static A68_175   WVBATRN = {"fif"}; 
A_GISVEC(A68_VC ,XVBATRN,WVBATRN,3)
static A68_172   YVBATRN = {"finishjoin"}; 
A_GISVEC(A68_VC ,ZVBATRN,YVBATRN,10)
static A68_116   AWBATRN = {"fint"}; 
A_GISVEC(A68_VC ,BWBATRN,AWBATRN,4)
static A68_116   CWBATRN = {"fmop"}; 
A_GISVEC(A68_VC ,DWBATRN,CWBATRN,4)
static A68_168   EWBATRN = {"fmpar"}; 
A_GISVEC(A68_VC ,FWBATRN,EWBATRN,5)
static A68_168   GWBATRN = {"fname"}; 
A_GISVEC(A68_VC ,HWBATRN,GWBATRN,5)
static A68_168   IWBATRN = {"fndec"}; 
A_GISVEC(A68_VC ,JWBATRN,IWBATRN,5)
static A68_167   KWBATRN = {"fnitem"}; 
A_GISVEC(A68_VC ,LWBATRN,KWBATRN,6)
static A68_167   MWBATRN = {"fnname"}; 
A_GISVEC(A68_VC ,NWBATRN,MWBATRN,6)
static A68_167   OWBATRN = {"fnspec"}; 
A_GISVEC(A68_VC ,PWBATRN,OWBATRN,6)
static A68_170   QWBATRN = {"forjoin"}; 
A_GISVEC(A68_VC ,RWBATRN,QWBATRN,7)
static A68_170   SWBATRN = {"formula"}; 
A_GISVEC(A68_VC ,TWBATRN,SWBATRN,7)
static A68_167   UWBATRN = {"idecls"}; 
A_GISVEC(A68_VC ,VWBATRN,UWBATRN,6)
static A68_167   WWBATRN = {"idelay"}; 
A_GISVEC(A68_VC ,XWBATRN,WWBATRN,6)
static A68_167   YWBATRN = {"impint"}; 
A_GISVEC(A68_VC ,ZWBATRN,YWBATRN,6)
static A68_167   AXBATRN = {"import"}; 
A_GISVEC(A68_VC ,BXBATRN,AXBATRN,6)
static A68_170   CXBATRN = {"imptype"}; 
A_GISVEC(A68_VC ,DXBATRN,CXBATRN,7)
static A68_116   EXBATRN = {"inst"}; 
A_GISVEC(A68_VC ,FXBATRN,EXBATRN,4)
static A68_169   GXBATRN = {"instattr"}; 
A_GISVEC(A68_VC ,HXBATRN,GXBATRN,8)
static A68_167   IXBATRN = {"intdec"}; 
A_GISVEC(A68_VC ,JXBATRN,IXBATRN,6)
static A68_170   KXBATRN = {"intitem"}; 
A_GISVEC(A68_VC ,LXBATRN,KXBATRN,7)
static A68_116   MXBATRN = {"join"}; 
A_GISVEC(A68_VC ,NXBATRN,MXBATRN,4)
static A68_175   OXBATRN = {"let"}; 
A_GISVEC(A68_VC ,PXBATRN,OXBATRN,3)
static A68_170   QXBATRN = {"letname"}; 
A_GISVEC(A68_VC ,RXBATRN,QXBATRN,7)
static A68_167   SXBATRN = {"letstr"}; 
A_GISVEC(A68_VC ,TXBATRN,SXBATRN,6)
static A68_167   UXBATRN = {"macdec"}; 
A_GISVEC(A68_VC ,VXBATRN,UXBATRN,6)
static A68_170   WXBATRN = {"macitem"}; 
A_GISVEC(A68_VC ,XXBATRN,WXBATRN,7)
static A68_170   YXBATRN = {"macspec"}; 
A_GISVEC(A68_VC ,ZXBATRN,YXBATRN,7)
static A68_116   AYBATRN = {"make"}; 
A_GISVEC(A68_VC ,BYBATRN,AYBATRN,4)
static A68_169   CYBATRN = {"makeinst"}; 
A_GISVEC(A68_VC ,DYBATRN,CYBATRN,8)
static A68_169   EYBATRN = {"makemult"}; 
A_GISVEC(A68_VC ,FYBATRN,EYBATRN,8)
static A68_167   GYBATRN = {"mdecls"}; 
A_GISVEC(A68_VC ,HYBATRN,GYBATRN,6)
static A68_170   IYBATRN = {"mparams"}; 
A_GISVEC(A68_VC ,JYBATRN,IYBATRN,7)
static A68_169   KYBATRN = {"nameattr"}; 
A_GISVEC(A68_VC ,LYBATRN,KYBATRN,8)
static A68_169   MYBATRN = {"namelist"}; 
A_GISVEC(A68_VC ,NYBATRN,MYBATRN,8)
static A68_170   OYBATRN = {"newalts"}; 
A_GISVEC(A68_VC ,PYBATRN,OYBATRN,7)
static A68_169   QYBATRN = {"newchars"}; 
A_GISVEC(A68_VC ,RYBATRN,QYBATRN,8)
static A68_167   SYBATRN = {"newint"}; 
A_GISVEC(A68_VC ,TYBATRN,SYBATRN,6)
static A68_167   UYBATRN = {"nobody"}; 
A_GISVEC(A68_VC ,VYBATRN,UYBATRN,6)
static A68_172   WYBATRN = {"nonameattr"}; 
A_GISVEC(A68_VC ,XYBATRN,WYBATRN,10)
static A68_169   YYBATRN = {"nooutput"}; 
A_GISVEC(A68_VC ,ZYBATRN,YYBATRN,8)
static A68_169   AZBATRN = {"operator"}; 
A_GISVEC(A68_VC ,BZBATRN,AZBATRN,8)
static A68_167   CZBATRN = {"option"}; 
A_GISVEC(A68_VC ,DZBATRN,CZBATRN,6)
static A68_167   EZBATRN = {"output"}; 
A_GISVEC(A68_VC ,FZBATRN,EZBATRN,6)
static A68_168   GZBATRN = {"print"}; 
A_GISVEC(A68_VC ,HZBATRN,GZBATRN,5)
static A68_170   IZBATRN = {"printif"}; 
A_GISVEC(A68_VC ,JZBATRN,IZBATRN,7)
static A68_173   KZBATRN = {"printstring"}; 
A_GISVEC(A68_VC ,LZBATRN,KZBATRN,11)
static A68_175   MZBATRN = {"ram"}; 
A_GISVEC(A68_VC ,NZBATRN,MZBATRN,3)
static A68_167   OZBATRN = {"reform"}; 
A_GISVEC(A68_VC ,PZBATRN,OZBATRN,6)
static A68_170   QZBATRN = {"replace"}; 
A_GISVEC(A68_VC ,RZBATRN,QZBATRN,7)
static A68_167   SZBATRN = {"sample"}; 
A_GISVEC(A68_VC ,TZBATRN,SZBATRN,6)
static A68_175   UZBATRN = {"sep"}; 
A_GISVEC(A68_VC ,VZBATRN,UZBATRN,3)
static A68_175   WZBATRN = {"seq"}; 
A_GISVEC(A68_VC ,XZBATRN,WZBATRN,3)
static A68_171   YZBATRN = {"seqassign"}; 
A_GISVEC(A68_VC ,ZZBATRN,YZBATRN,9)
static A68_168   AACATRN = {"seqbr"}; 
A_GISVEC(A68_VC ,BACATRN,AACATRN,5)
static A68_170   CACATRN = {"seqcase"}; 
A_GISVEC(A68_VC ,DACATRN,CACATRN,7)
static A68_171   EACATRN = {"seqchoice"}; 
A_GISVEC(A68_VC ,FACATRN,EACATRN,9)
static A68_168   GACATRN = {"seqif"}; 
A_GISVEC(A68_VC ,HACATRN,GACATRN,5)
static A68_167   IACATRN = {"seqlet"}; 
A_GISVEC(A68_VC ,JACATRN,IACATRN,6)
static A68_172   KACATRN = {"seqletname"}; 
A_GISVEC(A68_VC ,LACATRN,KACATRN,10)
static A68_171   MACATRN = {"seqletstr"}; 
A_GISVEC(A68_VC ,NACATRN,MACATRN,9)
static A68_170   OACATRN = {"seqpvar"}; 
A_GISVEC(A68_VC ,PACATRN,OACATRN,7)
static A68_173   QACATRN = {"seqpvarname"}; 
A_GISVEC(A68_VC ,RACATRN,QACATRN,11)
static A68_172   SACATRN = {"seqpvarstr"}; 
A_GISVEC(A68_VC ,TACATRN,SACATRN,10)
static A68_170   UACATRN = {"seqrepl"}; 
A_GISVEC(A68_VC ,VACATRN,UACATRN,7)
static A68_167   WACATRN = {"seqrow"}; 
A_GISVEC(A68_VC ,XACATRN,WACATRN,6)
static A68_170   YACATRN = {"seqstat"}; 
A_GISVEC(A68_VC ,ZACATRN,YACATRN,7)
static A68_167   ABCATRN = {"seqvar"}; 
A_GISVEC(A68_VC ,BBCATRN,ABCATRN,6)
static A68_172   CBCATRN = {"seqvarname"}; 
A_GISVEC(A68_VC ,DBCATRN,CBCATRN,10)
static A68_171   EBCATRN = {"seqvarstr"}; 
A_GISVEC(A68_VC ,FBCATRN,EBCATRN,9)
static A68_172   GBCATRN = {"slashslash"}; 
A_GISVEC(A68_VC ,HBCATRN,GBCATRN,10)
static A68_167   IBCATRN = {"slower"}; 
A_GISVEC(A68_VC ,JBCATRN,IBCATRN,6)
static A68_177   KBCATRN = {"startcharrange"}; 
A_GISVEC(A68_VC ,LBCATRN,KBCATRN,14)
static A68_171   MBCATRN = {"startjoin"}; 
A_GISVEC(A68_VC ,NBCATRN,MBCATRN,9)
static A68_172   OBCATRN = {"startrange"}; 
A_GISVEC(A68_VC ,PBCATRN,OBCATRN,10)
static A68_171   QBCATRN = {"startrepl"}; 
A_GISVEC(A68_VC ,RBCATRN,QBCATRN,9)
static A68_175   SBCATRN = {"tbr"}; 
A_GISVEC(A68_VC ,TBCATRN,SBCATRN,3)
static A68_167   UBCATRN = {"tdecls"}; 
A_GISVEC(A68_VC ,VBCATRN,UBCATRN,6)
static A68_168   WBCATRN = {"terms"}; 
A_GISVEC(A68_VC ,XBCATRN,WBCATRN,5)
static A68_175   YBCATRN = {"tfn"}; 
A_GISVEC(A68_VC ,ZBCATRN,YBCATRN,3)
static A68_116   ACCATRN = {"then"}; 
A_GISVEC(A68_VC ,BCCATRN,ACCATRN,4)
static A68_168   CCCATRN = {"tmpar"}; 
A_GISVEC(A68_VC ,DCCATRN,CCCATRN,5)
static A68_168   ECCATRN = {"tname"}; 
A_GISVEC(A68_VC ,FCCATRN,ECCATRN,5)
static A68_176   GCCATRN = {"to"}; 
A_GISVEC(A68_VC ,HCCATRN,GCCATRN,2)
static A68_116   ICCATRN = {"trow"}; 
A_GISVEC(A68_VC ,JCCATRN,ICCATRN,4)
static A68_116   KCCATRN = {"tstr"}; 
A_GISVEC(A68_VC ,LCCATRN,KCCATRN,4)
static A68_170   MCCATRN = {"tstring"}; 
A_GISVEC(A68_VC ,NCCATRN,MCCATRN,7)
static A68_168   OCCATRN = {"tvoid"}; 
A_GISVEC(A68_VC ,PCCATRN,OCCATRN,5)
static A68_171   QCCATRN = {"typealias"}; 
A_GISVEC(A68_VC ,RCCATRN,QCCATRN,9)
static A68_170   SCCATRN = {"typedec"}; 
A_GISVEC(A68_VC ,TCCATRN,SCCATRN,7)
static A68_169   UCCATRN = {"typeitem"}; 
A_GISVEC(A68_VC ,VCCATRN,UCCATRN,8)
static A68_168   WCCATRN = {"ualts"}; 
A_GISVEC(A68_VC ,XCCATRN,WCCATRN,5)
static A68_167   YCCATRN = {"uassoc"}; 
A_GISVEC(A68_VC ,ZCCATRN,YCCATRN,6)
static A68_168   ADCATRN = {"uattr"}; 
A_GISVEC(A68_VC ,BDCATRN,ADCATRN,5)
static A68_175   CDCATRN = {"ubr"}; 
A_GISVEC(A68_VC ,DDCATRN,CDCATRN,3)
static A68_168   EDCATRN = {"ucase"}; 
A_GISVEC(A68_VC ,FDCATRN,EDCATRN,5)
static A68_168   GDCATRN = {"uconc"}; 
A_GISVEC(A68_VC ,HDCATRN,GDCATRN,5)
static A68_167   IDCATRN = {"udinst"}; 
A_GISVEC(A68_VC ,JDCATRN,IDCATRN,6)
static A68_169   KDCATRN = {"udyindex"}; 
A_GISVEC(A68_VC ,LDCATRN,KDCATRN,8)
static A68_169   MDCATRN = {"uextract"}; 
A_GISVEC(A68_VC ,NDCATRN,MDCATRN,8)
static A68_175   ODCATRN = {"ufn"}; 
A_GISVEC(A68_VC ,PDCATRN,ODCATRN,3)
static A68_175   QDCATRN = {"uif"}; 
A_GISVEC(A68_VC ,RDCATRN,QDCATRN,3)
static A68_167   SDCATRN = {"uindex"}; 
A_GISVEC(A68_VC ,TDCATRN,SDCATRN,6)
static A68_175   UDCATRN = {"uio"}; 
A_GISVEC(A68_VC ,VDCATRN,UDCATRN,3)
static A68_167   WDCATRN = {"uminst"}; 
A_GISVEC(A68_VC ,XDCATRN,WDCATRN,6)
static A68_168   YDCATRN = {"uname"}; 
A_GISVEC(A68_VC ,ZDCATRN,YDCATRN,5)
static A68_169   AECATRN = {"unitattr"}; 
A_GISVEC(A68_VC ,BECATRN,AECATRN,8)
static A68_168   CECATRN = {"unull"}; 
A_GISVEC(A68_VC ,DECATRN,CECATRN,5)
static A68_171   EECATRN = {"uportname"}; 
A_GISVEC(A68_VC ,FECATRN,EECATRN,9)
static A68_168   GECATRN = {"urepl"}; 
A_GISVEC(A68_VC ,HECATRN,GECATRN,5)
static A68_169   IECATRN = {"ureplace"}; 
A_GISVEC(A68_VC ,JECATRN,IECATRN,8)
static A68_116   KECATRN = {"urow"}; 
A_GISVEC(A68_VC ,LECATRN,KECATRN,4)
static A68_171   MECATRN = {"usequence"}; 
A_GISVEC(A68_VC ,NECATRN,MECATRN,9)
static A68_170   OECATRN = {"useries"}; 
A_GISVEC(A68_VC ,PECATRN,OECATRN,7)
static A68_116   QECATRN = {"ustr"}; 
A_GISVEC(A68_VC ,RECATRN,QECATRN,4)
static A68_170   SECATRN = {"ustring"}; 
A_GISVEC(A68_VC ,TECATRN,SECATRN,7)
static A68_168   UECATRN = {"utrim"}; 
A_GISVEC(A68_VC ,VECATRN,UECATRN,5)
A68_46  XECATRN_ind_names;

A_STATIC A68_VOID  RDBATRN_generator(A68_BOOL  QDBATRN_anonymous, A68_53  *ReturnedValue);

A68_BOOL  XDBATRN_includes(A68_53  Inds, A68_INT  Num);

A68_VOID  HEBATRN_setindab(A68_53  Result, A68_INT  Ind, A68_53  *ReturnedValue);

A68_VOID  TEBATRN_clearindab(A68_53  Result, A68_INT  Ind, A68_53  *ReturnedValue);

A68_VOID  DFBATRN_no_indicators(A68_53  *ReturnedValue);

A68_VOID  IFBATRN_all_indicators(A68_53  *ReturnedValue);

A68_VOID  RFBATRN_these_indicators(A68_32  Inds, A68_53  *ReturnedValue);

A_STATIC A68_VOID  RDBATRN_generator(A68_BOOL  QDBATRN_anonymous, A68_53  *ReturnedValue)
{ 
A68_53  SDBATRN;  /* clause result */
A68_53  TDBATRN;  /* OPERATORS - dynamic generator */
{ 
TDBATRN.upb = ODBATRN_num_words ;
( QDBATRN_anonymous? A_VLOC(A68_BITS ,TDBATRN): A_VHEAP(A68_BITS ,TDBATRN) );
SDBATRN = TDBATRN;
} 
*ReturnedValue = (SDBATRN);
return;
} 
#undef NL

A68_BOOL  XDBATRN_includes(A68_53  Inds, A68_INT  Num)
{ 
A68_INT  YDBATRN_n;
A68_BOOL  ZDBATRN;  /* optbool result */
A68_BOOL  AEBATRN;  /* clause result */
A68_INT  BEBATRN;  /* YIELD */
A68_INT  CEBATRN;  /* ADICOPS - MOD */
A68_BITS  DEBATRN;  /* SHL */
A68_INT  EEBATRN;  /* SHL */
A_PROC_ENTRY(includes);
 /* line 381: */
 /* line 382: */
{ 
YDBATRN_n = (Num-1);
 /* line 384: */
ZDBATRN = (Num<=0);
if ( ! ZDBATRN )
{ZDBATRN = (Num>KDBATRN_num_inds);
}
 /* line 385: */
if ( ZDBATRN )
{ 
 /* line 386: */
 /* line 387: */
AEBATRN = A68_FALSE;
} 
else
{ 
 /* line 388: */
 /* line 389: */
 /* line 390: */
BEBATRN = ((YDBATRN_n/FDAAOST_word_size)+1) ;
DEBATRN = 0X1U ;
EEBATRN = A_MOD(YDBATRN_n,FDAAOST_word_size,CEBATRN) ;
AEBATRN = ((A68_BITS )(A_VINDEX(Inds,BEBATRN)&A_SHL(DEBATRN,EEBATRN))!=0X0U);
} 
} 
A_PROC_EXIT(includes);
return( AEBATRN );
} 
#undef NL

A68_VOID  HEBATRN_setindab(A68_53  Result, A68_INT  Ind, A68_53  *ReturnedValue)
{ 
A68_BOOL  IEBATRN;  /* optbool result */
A68_INT  JEBATRN_n;
A68_INT  KEBATRN_index;
A68_INT  LEBATRN;  /* ADICOPS - MOD */
A68_BITS  MEBATRN;  /* SHL */
A68_INT  NEBATRN;  /* SHL */
A68_BITS  OEBATRN_mask;
A68_BITS * PEBATRN_bb;
A68_53  QEBATRN;  /* clause result */
A_PROC_ENTRY(setindab);
 /* line 393: */
 /* line 394: */
{ 
IEBATRN = (Ind>0);
if ( IEBATRN )
{IEBATRN = (Ind<=KDBATRN_num_inds);
}
 /* line 395: */
if ( IEBATRN )
{ 
JEBATRN_n = (Ind-1);
 /* line 396: */
KEBATRN_index = ((JEBATRN_n/FDAAOST_word_size)+1);
 /* line 397: */
MEBATRN = 0X1U ;
NEBATRN = A_MOD(JEBATRN_n,FDAAOST_word_size,LEBATRN) ;
OEBATRN_mask = A_SHL(MEBATRN,NEBATRN);
 /* line 398: */
PEBATRN_bb = (&A_VINDEX(Result,KEBATRN_index));
 /* line 400: */
 /* line 401: */
(*PEBATRN_bb) = (A68_BITS )((*PEBATRN_bb)|OEBATRN_mask);
} 
 /* line 402: */
 /* line 403: */
QEBATRN = Result;
} 
A_PROC_EXIT(setindab);
*ReturnedValue = (QEBATRN);
return;
} 
#undef NL

A68_VOID  TEBATRN_clearindab(A68_53  Result, A68_INT  Ind, A68_53  *ReturnedValue)
{ 
A68_BOOL  UEBATRN;  /* optbool result */
A68_INT  VEBATRN_n;
A68_INT  WEBATRN_index;
A68_INT  XEBATRN;  /* ADICOPS - MOD */
A68_BITS  YEBATRN;  /* SHL */
A68_INT  ZEBATRN;  /* SHL */
A68_BITS  AFBATRN_mask;
A68_BITS * BFBATRN_bb;
A68_53  CFBATRN;  /* clause result */
A_PROC_ENTRY(clearindab);
 /* line 406: */
 /* line 407: */
{ 
UEBATRN = (Ind>0);
if ( UEBATRN )
{UEBATRN = (Ind<=KDBATRN_num_inds);
}
 /* line 408: */
if ( UEBATRN )
{ 
VEBATRN_n = (Ind-1);
 /* line 409: */
WEBATRN_index = ((VEBATRN_n/FDAAOST_word_size)+1);
 /* line 410: */
YEBATRN = 0X1U ;
ZEBATRN = A_MOD(VEBATRN_n,FDAAOST_word_size,XEBATRN) ;
AFBATRN_mask = ~A_SHL(YEBATRN,ZEBATRN);
 /* line 411: */
BFBATRN_bb = (&A_VINDEX(Result,WEBATRN_index));
 /* line 413: */
 /* line 414: */
(*BFBATRN_bb) = (A68_BITS )((*BFBATRN_bb)&AFBATRN_mask);
} 
 /* line 415: */
 /* line 416: */
CFBATRN = Result;
} 
A_PROC_EXIT(clearindab);
*ReturnedValue = (CFBATRN);
return;
} 
#undef NL

A68_VOID  DFBATRN_no_indicators(A68_53  *ReturnedValue)
{ 
A68_53  FFBATRN;  /* avoid structure result */
A68_53  EFBATRN_result;
A68_94  GFBATRN;  /* OPERATORS - mode -> union mode */
A68_53  HFBATRN;  /* clause result */
A_PROC_ENTRY(no_indicators);
{ 
A_CALLPROC(PDBATRN_anonymous,(A68_TRUE, &FFBATRN),(A68_TRUE, &FFBATRN,(PDBATRN_anonymous).nonlocals));
EFBATRN_result = FFBATRN;
 /* line 422: */
VTCAOST_clear(A_UNITE(GFBATRN,mode4,4,EFBATRN_result));
 /* line 423: */
 /* line 424: */
HFBATRN = EFBATRN_result;
} 
A_PROC_EXIT(no_indicators);
*ReturnedValue = (HFBATRN);
return;
} 
#undef NL

A68_VOID  IFBATRN_all_indicators(A68_53  *ReturnedValue)
{ 
A68_53  KFBATRN;  /* avoid structure result */
A68_53  JFBATRN_result;
A68_BITS * LFBATRN_last;
A68_BITS * MFBATRN_elem;
A68_INT  NFBATRN;  /* forall loop counter */
A68_INT  OFBATRN;  /* SHR */
A68_53  PFBATRN;  /* clause result */
A_PROC_ENTRY(all_indicators);
{ 
A_CALLPROC(PDBATRN_anonymous,(A68_TRUE, &KFBATRN),(A68_TRUE, &KFBATRN,(PDBATRN_anonymous).nonlocals));
JFBATRN_result = KFBATRN;
 /* line 429: */
LFBATRN_last = (&A_VINDEX(JFBATRN_result,ODBATRN_num_words));
 /* line 431: */
NFBATRN = JFBATRN_result.upb -1;
MFBATRN_elem = JFBATRN_result.data;
for (;NFBATRN-- >= 0;
(MFBATRN_elem++
) )
{
(*MFBATRN_elem) = (A68_BITS )(-1);
}
 /* line 432: */
OFBATRN = ((ODBATRN_num_words*FDAAOST_word_size)-KDBATRN_num_inds) ;
(*LFBATRN_last) = A_SHR((*LFBATRN_last),OFBATRN);
 /* line 433: */
 /* line 434: */
PFBATRN = JFBATRN_result;
} 
A_PROC_EXIT(all_indicators);
*ReturnedValue = (PFBATRN);
return;
} 
#undef NL

A68_VOID  RFBATRN_these_indicators(A68_32  Inds, A68_53  *ReturnedValue)
{ 
A68_53  TFBATRN;  /* avoid structure result */
A68_53  SFBATRN_result;
A68_94  UFBATRN;  /* OPERATORS - mode -> union mode */
A68_INT  VFBATRN_ind;
A68_INT * WFBATRN;  /* forall control - []x */
A68_INT  XFBATRN;  /* forall loop counter */
A68_53  YFBATRN;  /* avoid structure result */
A68_53  ZFBATRN;  /* clause result */
A_PROC_ENTRY(these_indicators);
 /* line 437: */
 /* line 438: */
{ 
A_CALLPROC(PDBATRN_anonymous,(A68_TRUE, &TFBATRN),(A68_TRUE, &TFBATRN,(PDBATRN_anonymous).nonlocals));
SFBATRN_result = TFBATRN;
 /* line 440: */
VTCAOST_clear(A_UNITE(UFBATRN,mode4,4,SFBATRN_result));
 /* line 441: */
XFBATRN = Inds.upb -1;
WFBATRN = Inds.data;
for (;XFBATRN-- >= 0;
(WFBATRN++
) )
{
VFBATRN_ind = *WFBATRN;
HEBATRN_setindab( SFBATRN_result, VFBATRN_ind, &YFBATRN );
YFBATRN;
}
 /* line 442: */
 /* line 443: */
ZFBATRN = SFBATRN_result;
} 
A_PROC_EXIT(these_indicators);
*ReturnedValue = (ZFBATRN);
return;
} 
#undef NL
 /* line 1: */
 /* line 4: */
void FDBATRN(void)   /* initialise DECS syntax_inds */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/syntax_inds.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_162  UDBATRN;  /* procedure value */
A68_178  HOBATRN;  /* collateral clause result */
A68_46  WECATRN;  /* OPERATORS - istruct -> vector */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
PCAAOST();   /* USE osinterface */
JSCAOST();   /* USE basics */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/transform/assoc/./a68files/syntax_inds.a68";
A_config.translation_time = "Tue Apr  4 09:58:30 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "EDBATRN (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 09:58:30 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS syntax_inds);
UEAALIB_a68config(LGAALIB_configinfo, JDBATRN);
 /* line 370: */
 /* line 371: */
 /* line 374: */
 /* line 375: */
NDBATRN_pass_all_terminators = (KDBATRN_num_inds+1);
 /* line 376: */
ODBATRN_num_words = (((NDBATRN_pass_all_terminators+FDAAOST_word_size)-1)/FDAAOST_word_size);
 /* line 378: */
UDBATRN.fn.fn_global = RDBATRN_generator;
UDBATRN.nonlocals = A68_NIL;
PDBATRN_anonymous = UDBATRN;
 /* line 380: */
 /* line 392: */
 /* line 405: */
 /* line 418: */
 /* line 419: */
 /* line 420: */
 /* line 426: */
 /* line 427: */
 /* line 428: */
 /* line 436: */
 /* line 446: */
 /* line 447: */
 /* line 448: */
 /* line 449: */
 /* line 450: */
 /* line 451: */
 /* line 452: */
 /* line 453: */
 /* line 454: */
 /* line 455: */
 /* line 456: */
 /* line 457: */
 /* line 458: */
 /* line 459: */
 /* line 460: */
 /* line 461: */
 /* line 462: */
 /* line 463: */
 /* line 464: */
 /* line 465: */
 /* line 466: */
 /* line 467: */
 /* line 468: */
 /* line 469: */
 /* line 470: */
 /* line 471: */
 /* line 472: */
 /* line 473: */
 /* line 474: */
 /* line 475: */
 /* line 476: */
 /* line 477: */
 /* line 478: */
 /* line 479: */
 /* line 480: */
 /* line 481: */
 /* line 482: */
 /* line 483: */
 /* line 484: */
 /* line 485: */
 /* line 486: */
 /* line 487: */
 /* line 488: */
 /* line 489: */
 /* line 490: */
 /* line 491: */
 /* line 492: */
 /* line 493: */
 /* line 494: */
 /* line 495: */
 /* line 496: */
 /* line 497: */
 /* line 498: */
 /* line 499: */
 /* line 500: */
 /* line 501: */
 /* line 502: */
 /* line 503: */
 /* line 504: */
 /* line 505: */
 /* line 506: */
 /* line 507: */
 /* line 508: */
 /* line 509: */
 /* line 510: */
 /* line 511: */
 /* line 512: */
 /* line 513: */
 /* line 514: */
 /* line 515: */
 /* line 516: */
 /* line 517: */
 /* line 518: */
 /* line 519: */
 /* line 520: */
 /* line 521: */
 /* line 522: */
 /* line 523: */
 /* line 524: */
 /* line 525: */
 /* line 526: */
 /* line 527: */
 /* line 528: */
 /* line 529: */
 /* line 530: */
 /* line 531: */
 /* line 532: */
 /* line 533: */
 /* line 534: */
 /* line 535: */
 /* line 536: */
 /* line 537: */
 /* line 538: */
 /* line 539: */
 /* line 540: */
 /* line 541: */
 /* line 542: */
 /* line 543: */
 /* line 544: */
 /* line 545: */
 /* line 546: */
 /* line 547: */
 /* line 548: */
 /* line 549: */
 /* line 550: */
 /* line 551: */
 /* line 552: */
 /* line 553: */
 /* line 554: */
 /* line 555: */
 /* line 556: */
 /* line 557: */
 /* line 558: */
 /* line 559: */
 /* line 560: */
 /* line 561: */
 /* line 562: */
 /* line 563: */
 /* line 564: */
 /* line 565: */
 /* line 566: */
 /* line 567: */
 /* line 568: */
 /* line 569: */
 /* line 570: */
 /* line 571: */
 /* line 572: */
 /* line 573: */
 /* line 574: */
 /* line 575: */
 /* line 576: */
 /* line 577: */
 /* line 578: */
 /* line 579: */
 /* line 580: */
 /* line 581: */
 /* line 582: */
 /* line 583: */
 /* line 584: */
 /* line 585: */
 /* line 586: */
 /* line 587: */
 /* line 588: */
 /* line 589: */
 /* line 590: */
 /* line 591: */
 /* line 592: */
 /* line 593: */
 /* line 594: */
 /* line 595: */
 /* line 596: */
 /* line 597: */
 /* line 598: */
 /* line 599: */
 /* line 600: */
 /* line 601: */
 /* line 602: */
 /* line 603: */
 /* line 604: */
 /* line 605: */
 /* line 606: */
 /* line 607: */
 /* line 608: */
 /* line 609: */
 /* line 610: */
 /* line 611: */
 /* line 612: */
 /* line 613: */
 /* line 614: */
 /* line 615: */
 /* line 616: */
 /* line 617: */
 /* line 618: */
 /* line 619: */
 /* line 620: */
 /* line 621: */
 /* line 622: */
 /* line 623: */
 /* line 624: */
 /* line 625: */
 /* line 626: */
 /* line 627: */
 /* line 628: */
 /* line 629: */
 /* line 630: */
 /* line 631: */
 /* line 632: */
 /* line 633: */
 /* line 634: */
 /* line 635: */
 /* line 636: */
 /* line 637: */
 /* line 638: */
 /* line 639: */
 /* line 640: */
 /* line 641: */
 /* line 642: */
 /* line 643: */
 /* line 644: */
 /* line 645: */
 /* line 646: */
 /* line 647: */
 /* line 648: */
 /* line 649: */
 /* line 650: */
 /* line 651: */
 /* line 652: */
 /* line 653: */
 /* line 654: */
 /* line 655: */
 /* line 656: */
 /* line 657: */
 /* line 658: */
 /* line 659: */
 /* line 660: */
 /* line 664: */
 /* line 665: */
 /* line 666: */
HOBATRN.data[0] = JOBATRN;
 /* line 667: */
HOBATRN.data[1] = LOBATRN;
 /* line 668: */
HOBATRN.data[2] = NOBATRN;
 /* line 669: */
HOBATRN.data[3] = POBATRN;
 /* line 670: */
HOBATRN.data[4] = ROBATRN;
 /* line 671: */
HOBATRN.data[5] = TOBATRN;
 /* line 672: */
HOBATRN.data[6] = VOBATRN;
 /* line 673: */
HOBATRN.data[7] = XOBATRN;
 /* line 674: */
HOBATRN.data[8] = ZOBATRN;
 /* line 675: */
HOBATRN.data[9] = BPBATRN;
 /* line 676: */
HOBATRN.data[10] = DPBATRN;
 /* line 677: */
HOBATRN.data[11] = FPBATRN;
 /* line 678: */
HOBATRN.data[12] = HPBATRN;
 /* line 679: */
HOBATRN.data[13] = JPBATRN;
 /* line 680: */
HOBATRN.data[14] = LPBATRN;
 /* line 681: */
HOBATRN.data[15] = NPBATRN;
 /* line 682: */
HOBATRN.data[16] = PPBATRN;
 /* line 683: */
HOBATRN.data[17] = RPBATRN;
 /* line 684: */
HOBATRN.data[18] = TPBATRN;
 /* line 685: */
HOBATRN.data[19] = VPBATRN;
 /* line 686: */
HOBATRN.data[20] = XPBATRN;
 /* line 687: */
HOBATRN.data[21] = ZPBATRN;
 /* line 688: */
HOBATRN.data[22] = BQBATRN;
 /* line 689: */
HOBATRN.data[23] = DQBATRN;
 /* line 690: */
HOBATRN.data[24] = FQBATRN;
 /* line 691: */
HOBATRN.data[25] = HQBATRN;
 /* line 692: */
HOBATRN.data[26] = JQBATRN;
 /* line 693: */
HOBATRN.data[27] = LQBATRN;
 /* line 694: */
HOBATRN.data[28] = NQBATRN;
 /* line 695: */
HOBATRN.data[29] = PQBATRN;
 /* line 696: */
HOBATRN.data[30] = RQBATRN;
 /* line 697: */
HOBATRN.data[31] = TQBATRN;
 /* line 698: */
HOBATRN.data[32] = VQBATRN;
 /* line 699: */
HOBATRN.data[33] = XQBATRN;
 /* line 700: */
HOBATRN.data[34] = ZQBATRN;
 /* line 701: */
HOBATRN.data[35] = BRBATRN;
 /* line 702: */
HOBATRN.data[36] = DRBATRN;
 /* line 703: */
HOBATRN.data[37] = FRBATRN;
 /* line 704: */
HOBATRN.data[38] = HRBATRN;
 /* line 705: */
HOBATRN.data[39] = JRBATRN;
 /* line 706: */
HOBATRN.data[40] = LRBATRN;
 /* line 707: */
HOBATRN.data[41] = NRBATRN;
 /* line 708: */
HOBATRN.data[42] = PRBATRN;
 /* line 709: */
HOBATRN.data[43] = RRBATRN;
 /* line 710: */
HOBATRN.data[44] = TRBATRN;
 /* line 711: */
HOBATRN.data[45] = VRBATRN;
 /* line 712: */
HOBATRN.data[46] = XRBATRN;
 /* line 713: */
HOBATRN.data[47] = ZRBATRN;
 /* line 714: */
HOBATRN.data[48] = BSBATRN;
 /* line 715: */
HOBATRN.data[49] = DSBATRN;
 /* line 716: */
HOBATRN.data[50] = FSBATRN;
 /* line 717: */
HOBATRN.data[51] = HSBATRN;
 /* line 718: */
HOBATRN.data[52] = JSBATRN;
 /* line 719: */
HOBATRN.data[53] = LSBATRN;
 /* line 720: */
HOBATRN.data[54] = NSBATRN;
 /* line 721: */
HOBATRN.data[55] = PSBATRN;
 /* line 722: */
HOBATRN.data[56] = RSBATRN;
 /* line 723: */
HOBATRN.data[57] = TSBATRN;
 /* line 724: */
HOBATRN.data[58] = VSBATRN;
 /* line 725: */
HOBATRN.data[59] = XSBATRN;
 /* line 726: */
HOBATRN.data[60] = ZSBATRN;
 /* line 727: */
HOBATRN.data[61] = BTBATRN;
 /* line 728: */
HOBATRN.data[62] = DTBATRN;
 /* line 729: */
HOBATRN.data[63] = FTBATRN;
 /* line 730: */
HOBATRN.data[64] = HTBATRN;
 /* line 731: */
HOBATRN.data[65] = JTBATRN;
 /* line 732: */
HOBATRN.data[66] = LTBATRN;
 /* line 733: */
HOBATRN.data[67] = NTBATRN;
 /* line 734: */
HOBATRN.data[68] = PTBATRN;
 /* line 735: */
HOBATRN.data[69] = RTBATRN;
 /* line 736: */
HOBATRN.data[70] = TTBATRN;
 /* line 737: */
HOBATRN.data[71] = VTBATRN;
 /* line 738: */
HOBATRN.data[72] = XTBATRN;
 /* line 739: */
HOBATRN.data[73] = ZTBATRN;
 /* line 740: */
HOBATRN.data[74] = BUBATRN;
 /* line 741: */
HOBATRN.data[75] = DUBATRN;
 /* line 742: */
HOBATRN.data[76] = FUBATRN;
 /* line 743: */
HOBATRN.data[77] = HUBATRN;
 /* line 744: */
HOBATRN.data[78] = JUBATRN;
 /* line 745: */
HOBATRN.data[79] = LUBATRN;
 /* line 746: */
HOBATRN.data[80] = NUBATRN;
 /* line 747: */
HOBATRN.data[81] = PUBATRN;
 /* line 748: */
HOBATRN.data[82] = RUBATRN;
 /* line 749: */
HOBATRN.data[83] = TUBATRN;
 /* line 750: */
HOBATRN.data[84] = VUBATRN;
 /* line 751: */
HOBATRN.data[85] = XUBATRN;
 /* line 752: */
HOBATRN.data[86] = ZUBATRN;
 /* line 753: */
HOBATRN.data[87] = BVBATRN;
 /* line 754: */
HOBATRN.data[88] = DVBATRN;
 /* line 755: */
HOBATRN.data[89] = FVBATRN;
 /* line 756: */
HOBATRN.data[90] = HVBATRN;
 /* line 757: */
HOBATRN.data[91] = JVBATRN;
 /* line 758: */
HOBATRN.data[92] = LVBATRN;
 /* line 759: */
HOBATRN.data[93] = NVBATRN;
 /* line 760: */
HOBATRN.data[94] = PVBATRN;
 /* line 761: */
HOBATRN.data[95] = RVBATRN;
 /* line 762: */
HOBATRN.data[96] = TVBATRN;
 /* line 763: */
HOBATRN.data[97] = VVBATRN;
 /* line 764: */
HOBATRN.data[98] = XVBATRN;
 /* line 765: */
HOBATRN.data[99] = ZVBATRN;
 /* line 766: */
HOBATRN.data[100] = BWBATRN;
 /* line 767: */
HOBATRN.data[101] = DWBATRN;
 /* line 768: */
HOBATRN.data[102] = FWBATRN;
 /* line 769: */
HOBATRN.data[103] = HWBATRN;
 /* line 770: */
HOBATRN.data[104] = JWBATRN;
 /* line 771: */
HOBATRN.data[105] = LWBATRN;
 /* line 772: */
HOBATRN.data[106] = NWBATRN;
 /* line 773: */
HOBATRN.data[107] = PWBATRN;
 /* line 774: */
HOBATRN.data[108] = RWBATRN;
 /* line 775: */
HOBATRN.data[109] = TWBATRN;
 /* line 776: */
HOBATRN.data[110] = VWBATRN;
 /* line 777: */
HOBATRN.data[111] = XWBATRN;
 /* line 778: */
HOBATRN.data[112] = ZWBATRN;
 /* line 779: */
HOBATRN.data[113] = BXBATRN;
 /* line 780: */
HOBATRN.data[114] = DXBATRN;
 /* line 781: */
HOBATRN.data[115] = FXBATRN;
 /* line 782: */
HOBATRN.data[116] = HXBATRN;
 /* line 783: */
HOBATRN.data[117] = JXBATRN;
 /* line 784: */
HOBATRN.data[118] = LXBATRN;
 /* line 785: */
HOBATRN.data[119] = NXBATRN;
 /* line 786: */
HOBATRN.data[120] = PXBATRN;
 /* line 787: */
HOBATRN.data[121] = RXBATRN;
 /* line 788: */
HOBATRN.data[122] = TXBATRN;
 /* line 789: */
HOBATRN.data[123] = VXBATRN;
 /* line 790: */
HOBATRN.data[124] = XXBATRN;
 /* line 791: */
HOBATRN.data[125] = ZXBATRN;
 /* line 792: */
HOBATRN.data[126] = BYBATRN;
 /* line 793: */
HOBATRN.data[127] = DYBATRN;
 /* line 794: */
HOBATRN.data[128] = FYBATRN;
 /* line 795: */
HOBATRN.data[129] = HYBATRN;
 /* line 796: */
HOBATRN.data[130] = JYBATRN;
 /* line 797: */
HOBATRN.data[131] = LYBATRN;
 /* line 798: */
HOBATRN.data[132] = NYBATRN;
 /* line 799: */
HOBATRN.data[133] = PYBATRN;
 /* line 800: */
HOBATRN.data[134] = RYBATRN;
 /* line 801: */
HOBATRN.data[135] = TYBATRN;
 /* line 802: */
HOBATRN.data[136] = VYBATRN;
 /* line 803: */
HOBATRN.data[137] = XYBATRN;
 /* line 804: */
HOBATRN.data[138] = ZYBATRN;
 /* line 805: */
HOBATRN.data[139] = BZBATRN;
 /* line 806: */
HOBATRN.data[140] = DZBATRN;
 /* line 807: */
HOBATRN.data[141] = FZBATRN;
 /* line 808: */
HOBATRN.data[142] = HZBATRN;
 /* line 809: */
HOBATRN.data[143] = JZBATRN;
 /* line 810: */
HOBATRN.data[144] = LZBATRN;
 /* line 811: */
HOBATRN.data[145] = NZBATRN;
 /* line 812: */
HOBATRN.data[146] = PZBATRN;
 /* line 813: */
HOBATRN.data[147] = RZBATRN;
 /* line 814: */
HOBATRN.data[148] = TZBATRN;
 /* line 815: */
HOBATRN.data[149] = VZBATRN;
 /* line 816: */
HOBATRN.data[150] = XZBATRN;
 /* line 817: */
HOBATRN.data[151] = ZZBATRN;
 /* line 818: */
HOBATRN.data[152] = BACATRN;
 /* line 819: */
HOBATRN.data[153] = DACATRN;
 /* line 820: */
HOBATRN.data[154] = FACATRN;
 /* line 821: */
HOBATRN.data[155] = HACATRN;
 /* line 822: */
HOBATRN.data[156] = JACATRN;
 /* line 823: */
HOBATRN.data[157] = LACATRN;
 /* line 824: */
HOBATRN.data[158] = NACATRN;
 /* line 825: */
HOBATRN.data[159] = PACATRN;
 /* line 826: */
HOBATRN.data[160] = RACATRN;
 /* line 827: */
HOBATRN.data[161] = TACATRN;
 /* line 828: */
HOBATRN.data[162] = VACATRN;
 /* line 829: */
HOBATRN.data[163] = XACATRN;
 /* line 830: */
HOBATRN.data[164] = ZACATRN;
 /* line 831: */
HOBATRN.data[165] = BBCATRN;
 /* line 832: */
HOBATRN.data[166] = DBCATRN;
 /* line 833: */
HOBATRN.data[167] = FBCATRN;
 /* line 834: */
HOBATRN.data[168] = HBCATRN;
 /* line 835: */
HOBATRN.data[169] = JBCATRN;
 /* line 836: */
HOBATRN.data[170] = LBCATRN;
 /* line 837: */
HOBATRN.data[171] = NBCATRN;
 /* line 838: */
HOBATRN.data[172] = PBCATRN;
 /* line 839: */
HOBATRN.data[173] = RBCATRN;
 /* line 840: */
HOBATRN.data[174] = TBCATRN;
 /* line 841: */
HOBATRN.data[175] = VBCATRN;
 /* line 842: */
HOBATRN.data[176] = XBCATRN;
 /* line 843: */
HOBATRN.data[177] = ZBCATRN;
 /* line 844: */
HOBATRN.data[178] = BCCATRN;
 /* line 845: */
HOBATRN.data[179] = DCCATRN;
 /* line 846: */
HOBATRN.data[180] = FCCATRN;
 /* line 847: */
HOBATRN.data[181] = HCCATRN;
 /* line 848: */
HOBATRN.data[182] = JCCATRN;
 /* line 849: */
HOBATRN.data[183] = LCCATRN;
 /* line 850: */
HOBATRN.data[184] = NCCATRN;
 /* line 851: */
HOBATRN.data[185] = PCCATRN;
 /* line 852: */
HOBATRN.data[186] = RCCATRN;
 /* line 853: */
HOBATRN.data[187] = TCCATRN;
 /* line 854: */
HOBATRN.data[188] = VCCATRN;
 /* line 855: */
HOBATRN.data[189] = XCCATRN;
 /* line 856: */
HOBATRN.data[190] = ZCCATRN;
 /* line 857: */
HOBATRN.data[191] = BDCATRN;
 /* line 858: */
HOBATRN.data[192] = DDCATRN;
 /* line 859: */
HOBATRN.data[193] = FDCATRN;
 /* line 860: */
HOBATRN.data[194] = HDCATRN;
 /* line 861: */
HOBATRN.data[195] = JDCATRN;
 /* line 862: */
HOBATRN.data[196] = LDCATRN;
 /* line 863: */
HOBATRN.data[197] = NDCATRN;
 /* line 864: */
HOBATRN.data[198] = PDCATRN;
 /* line 865: */
HOBATRN.data[199] = RDCATRN;
 /* line 866: */
HOBATRN.data[200] = TDCATRN;
 /* line 867: */
HOBATRN.data[201] = VDCATRN;
 /* line 868: */
HOBATRN.data[202] = XDCATRN;
 /* line 869: */
HOBATRN.data[203] = ZDCATRN;
 /* line 870: */
HOBATRN.data[204] = BECATRN;
 /* line 871: */
HOBATRN.data[205] = DECATRN;
 /* line 872: */
HOBATRN.data[206] = FECATRN;
 /* line 873: */
HOBATRN.data[207] = HECATRN;
 /* line 874: */
HOBATRN.data[208] = JECATRN;
 /* line 875: */
HOBATRN.data[209] = LECATRN;
 /* line 876: */
HOBATRN.data[210] = NECATRN;
 /* line 877: */
HOBATRN.data[211] = PECATRN;
 /* line 878: */
HOBATRN.data[212] = RECATRN;
 /* line 879: */
HOBATRN.data[213] = TECATRN;
HOBATRN.data[214] = VECATRN;
XECATRN_ind_names = A_HISVEC(WECATRN,HOBATRN,215,A68_VC );
 /* line 882: */
 /* line 883: */
 /* line 930: */
/*SKIP*/;
A_PROC_EXIT(DECS syntax_inds);
} 
#undef NL
/* end of translation of ./a68files/syntax_inds.a68 */
