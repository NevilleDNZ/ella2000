
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
/* UNAME:ZVCAAMM */
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
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t92  A68_92 ;    /* STRUCT(REF MODE26,REF BITS)  */

A_PROCEDURE(A68_BOOL ,A68t93,(struct A68t35 ,struct A68t35 ),(struct A68t35 ,struct A68t35 ,void *));
typedef struct A68t93  A68_93 ;    /* PROC(MODE35,MODE35) BOOL */
A_ISTRUCT(A68_CHAR ,4,A68t95);
typedef struct A68t95  A68_95 ;    /* STRUCT 4 CHAR */
struct A68t94{
struct A68t95  Access;
A_PAD_ISTRUCT(A68_95 ,PAD_20)
};
typedef struct A68t94  A68_94 ;    /* STRUCT(MODE95)  */
struct A68t97 ;

A_PROCEDURE(struct A68t92 *,A68t96,(A68_VC ,struct A68t94 ,struct A68t97 ),(A68_VC ,struct A68t94 ,struct A68t97 ,void *));
typedef struct A68t96  A68_96 ;    /* PROC(MODE26,MODE94,MODE97) REF MODE92 */
struct A68t98 ;

A_PROCEDURE(A68_VOID ,A68t97,(struct A68t98 ,struct A68t46 ),(struct A68t98 ,struct A68t46 ,void *));
typedef struct A68t97  A68_97 ;    /* PROC(MODE98,MODE46) VOID */
struct A68t98{
A68_INT  Number;
A_PAD_INT(PAD_21)
struct A68t99 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_22)
};
typedef struct A68t98  A68_98 ;    /* STRUCT(INT,REF MODE99,BITS)  */
A_VECTOR(struct A68t101 ,A68t100);
typedef struct A68t100  A68_100 ;    /* VECTOR [] MODE101 */
struct A68t101{
struct A68t98  Msgno;
A68_VC  Text;
};
typedef struct A68t101  A68_101 ;    /* STRUCT(MODE98,REF MODE26)  */
struct A68t99{
A68_VC  Name;
struct A68t100  Messages;
};
typedef struct A68t99  A68_99 ;    /* STRUCT(REF MODE26,REF MODE100)  */

A_PROCEDURE(A68_VOID ,A68t102,(struct A68t92 *,struct A68t97 ),(struct A68t92 *,struct A68t97 ,void *));
typedef struct A68t102  A68_102 ;    /* PROC(REF MODE92,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t103,(struct A68t92 *,A68_VC *),(struct A68t92 *,A68_VC *,void *));
typedef struct A68t103  A68_103 ;    /* PROC(REF MODE92) MODE26 */

A_PROCEDURE(A68_VOID ,A68t104,(struct A68t92 *,A68_VC ,A68_INT *,struct A68t97 ,struct A68t35 *),(struct A68t92 *,A68_VC ,A68_INT *,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t104  A68_104 ;    /* PROC(REF MODE92,REF MODE26,REF INT,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t105,(struct A68t92 *,A68_VC ,struct A68t97 ,struct A68t35 *),(struct A68t92 *,A68_VC ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t105  A68_105 ;    /* PROC(REF MODE92,MODE26,MODE97) MODE35 */
struct A68t106{
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
typedef struct A68t106  A68_106 ;    /* STRUCT(SHORT BITS,LONG BITS,SHORT INT,SHORT INT,SHORT BITS,SHORT BITS,LONG INT,LONG INT,LONG INT,LONG INT)  */
struct A68t108 ;

A_PROCEDURE(struct A68t106 *,A68t107,(struct A68t108 ,struct A68t97 ),(struct A68t108 ,struct A68t97 ,void *));
typedef struct A68t107  A68_107 ;    /* PROC(MODE108,MODE97) REF MODE106 */
struct A68t108 { A68_INT mode; union {
struct A68t92 * mode1;
A68_VC  mode2;
} data; };
typedef struct A68t108  A68_108 ;    /* UNION(REF MODE92,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t109,(struct A68t92 *,A68_LINT *,struct A68t97 ,struct A68t35 *),(struct A68t92 *,A68_LINT *,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t109  A68_109 ;    /* PROC(REF MODE92,REF LONG INT,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t110,(struct A68t92 *,A68_LINT ,struct A68t97 ,struct A68t35 *),(struct A68t92 *,A68_LINT ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t110  A68_110 ;    /* PROC(REF MODE92,LONG INT,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t111,(struct A68t92 *,struct A68t97 ,struct A68t35 *),(struct A68t92 *,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t111  A68_111 ;    /* PROC(REF MODE92,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t112,(A68_VC ,struct A68t97 ,struct A68t35 *),(A68_VC ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t112  A68_112 ;    /* PROC(MODE26,MODE97) MODE35 */

A_PROCEDURE(A68_VOID ,A68t113,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t113  A68_113 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t114,(A68_INT ),(A68_INT ,void *));
typedef struct A68t114  A68_114 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_LINT ,A68t115,(void),(void *));
typedef struct A68t115  A68_115 ;    /* PROC LONG INT */

A_PROCEDURE(A68_INT ,A68t116,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t116  A68_116 ;    /* PROC(MODE26,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t117,(void),(void *));
typedef struct A68t117  A68_117 ;    /* PROC INT */

A_PROCEDURE(A68_VOID ,A68t118,(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t118  A68_118 ;    /* PROC(MODE26,MODE26,MODE97) MODE26 */

A_PROCEDURE(A68_VOID ,A68t119,(A68_VC ,A68_VC ,struct A68t97 ,struct A68t35 *),(A68_VC ,A68_VC ,struct A68t97 ,struct A68t35 *,void *));
typedef struct A68t119  A68_119 ;    /* PROC(MODE26,MODE26,MODE97) MODE35 */
struct A68t120{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t120  A68_120 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t121,(A68_VC ,A68_VC ,struct A68t97 ,struct A68t120 *),(A68_VC ,A68_VC ,struct A68t97 ,struct A68t120 *,void *));
typedef struct A68t121  A68_121 ;    /* PROC(MODE26,MODE26,MODE97) MODE120 */

A_PROCEDURE(A68_VOID ,A68t122,(A68_VC *),(A68_VC *,void *));
typedef struct A68t122  A68_122 ;    /* PROC MODE26 */

A_PROCEDURE(A68_VOID ,A68t123,(struct A68t46 *),(struct A68t46 *,void *));
typedef struct A68t123  A68_123 ;    /* PROC MODE46 */

A_PROCEDURE(A68_VOID ,A68t124,(A68_VC ,struct A68t97 ,struct A68t46 *),(A68_VC ,struct A68t97 ,struct A68t46 *,void *));
typedef struct A68t124  A68_124 ;    /* PROC(MODE26,MODE97) MODE46 */

A_PROCEDURE(A68_BOOL ,A68t125,(void),(void *));
typedef struct A68t125  A68_125 ;    /* PROC BOOL */
struct A68t127 ;

A_PROCEDURE(A68_VOID ,A68t126,(struct A68t127 ,struct A68t97 ),(struct A68t127 ,struct A68t97 ,void *));
typedef struct A68t126  A68_126 ;    /* PROC(MODE127,MODE97) VOID */
A_VECTOR(struct A68t128 ,A68t127);
typedef struct A68t127  A68_127 ;    /* VECTOR [] MODE128 */
struct A68t128{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_33)
};
typedef struct A68t128  A68_128 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t129,(void),(void *));
typedef struct A68t129  A68_129 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t130,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t130  A68_130 ;    /* PROC(BITS) VOID */

A_PROCEDURE(A68_VOID ,A68t131,(struct A68t36 ),(struct A68t36 ,void *));
typedef struct A68t131  A68_131 ;    /* PROC(MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t132,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t132  A68_132 ;    /* PROC(REF MODE26) REF MODE26 */

A_PROCEDURE(A68_REAL ,A68t133,(A68_REAL ),(A68_REAL ,void *));
typedef struct A68t133  A68_133 ;    /* PROC(REAL) REAL */
struct A68t134{
A68_VC  Name;
A68_VC  Version;
A68_VC  Date;
A68_VC  Msg;
A68_VC  Sys_fault;
};
typedef struct A68t134  A68_134 ;    /* STRUCT(MODE26,MODE26,MODE26,MODE26,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t135,(A68_BOOL ,struct A68t134 *),(A68_BOOL ,struct A68t134 *,void *));
typedef struct A68t135  A68_135 ;    /* PROC(BOOL) MODE134 */

A_PROCEDURE(A68_VOID ,A68t136,(struct A68t134 ,A68_BOOL ),(struct A68t134 ,A68_BOOL ,void *));
typedef struct A68t136  A68_136 ;    /* PROC(MODE134,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t137,(struct A68t134 *),(struct A68t134 *,void *));
typedef struct A68t137  A68_137 ;    /* PROC MODE134 */

A_PROCEDURE(A68_BOOL ,A68t138,(A68_VC ,A68_VC ,A68_VC ,A68_VC *,A68_BOOL ),(A68_VC ,A68_VC ,A68_VC ,A68_VC *,A68_BOOL ,void *));
typedef struct A68t138  A68_138 ;    /* PROC(MODE26,MODE26,MODE26,REF REF MODE26,BOOL) BOOL */
struct A68t140 ;
struct A68t141 ;

A_PROCEDURE(A68_VOID ,A68t139,(A68_VC ,struct A68t129 ,struct A68t140 ,struct A68t141 ),(A68_VC ,struct A68t129 ,struct A68t140 ,struct A68t141 ,void *));
typedef struct A68t139  A68_139 ;    /* PROC(MODE26,MODE129,MODE140,MODE141) VOID */

A_PROCEDURE(A68_BOOL ,A68t140,(A68_VC ,struct A68t122 ),(A68_VC ,struct A68t122 ,void *));
typedef struct A68t140  A68_140 ;    /* PROC(MODE26,MODE122) BOOL */

A_PROCEDURE(A68_BOOL ,A68t141,(A68_BOOL ),(A68_BOOL ,void *));
typedef struct A68t141  A68_141 ;    /* PROC(BOOL) BOOL */

A_PROCEDURE(A68_VOID ,A68t142,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t142  A68_142 ;    /* PROC(MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t143,(struct A68t142 ,struct A68t97 ),(struct A68t142 ,struct A68t97 ,void *));
typedef struct A68t143  A68_143 ;    /* PROC(MODE142,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t144,(A68_BOOL ,struct A68t46 *),(A68_BOOL ,struct A68t46 *,void *));
typedef struct A68t144  A68_144 ;    /* PROC(BOOL) MODE46 */
A_VECTOR(struct A68t147 ,A68t146);
typedef struct A68t146  A68_146 ;    /* VECTOR [] MODE147 */
struct A68t147{
A68_INT  Number;
A_PAD_INT(PAD_34)
A68_BITS  Class;
A_PAD_BITS(PAD_35)
A68_VC  Text;
};
typedef struct A68t147  A68_147 ;    /* STRUCT(INT,BITS,MODE26)  */
struct A68t145{
A68_VC  Name;
struct A68t100  Messages;
A68_BOOL * Initialised;
struct A68t146  Setup;
};
typedef struct A68t145  A68_145 ;    /* STRUCT(MODE26,REF MODE100,REF BOOL,MODE146)  */

A_PROCEDURE(A68_VOID ,A68t148,(A68_BOOL ,struct A68t145 *),(A68_BOOL ,struct A68t145 *,void *));
typedef struct A68t148  A68_148 ;    /* PROC(BOOL) MODE145 */
A_VECTOR(A68_VC ,A68t149);
typedef struct A68t149  A68_149 ;    /* VECTOR [] REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t150,(struct A68t46 ,struct A68t149 *),(struct A68t46 ,struct A68t149 *,void *));
typedef struct A68t150  A68_150 ;    /* PROC(MODE46) MODE149 */

A_PROCEDURE(A68_VOID ,A68t151,(struct A68t149 ,struct A68t46 *),(struct A68t149 ,struct A68t46 *,void *));
typedef struct A68t151  A68_151 ;    /* PROC(MODE149) MODE46 */
struct A68t153 ;

A_PROCEDURE(A68_BOOL ,A68t152,(struct A68t153 ),(struct A68t153 ,void *));
typedef struct A68t152  A68_152 ;    /* PROC(MODE153) BOOL */
struct A68t153 { A68_INT mode; union {
struct A68t98  mode1;
struct A68t101  mode2;
} data; };
typedef struct A68t153  A68_153 ;    /* UNION(MODE98,MODE101)  */

A_PROCEDURE(A68_INT ,A68t154,(struct A68t98 ),(struct A68t98 ,void *));
typedef struct A68t154  A68_154 ;    /* PROC(MODE98) INT */

A_PROCEDURE(A68_VOID ,A68t155,(A68_INT ,struct A68t145 ,struct A68t98 *),(A68_INT ,struct A68t145 ,struct A68t98 *,void *));
typedef struct A68t155  A68_155 ;    /* PROC(INT,MODE145) MODE98 */

A_PROCEDURE(A68_BOOL ,A68t156,(struct A68t98 ,struct A68t145 ),(struct A68t98 ,struct A68t145 ,void *));
typedef struct A68t156  A68_156 ;    /* PROC(MODE98,MODE145) BOOL */

A_PROCEDURE(A68_VOID ,A68t157,(struct A68t98 ,struct A68t46 ,struct A68t101 *),(struct A68t98 ,struct A68t46 ,struct A68t101 *,void *));
typedef struct A68t157  A68_157 ;    /* PROC(MODE98,MODE46) MODE101 */

A_PROCEDURE(A68_BOOL ,A68t158,(A68_VC ,A68_VC ,struct A68t97 ),(A68_VC ,A68_VC ,struct A68t97 ,void *));
typedef struct A68t158  A68_158 ;    /* PROC(MODE26,MODE26,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t159,(A68_VC ,A68_VC ,struct A68t97 ),(A68_VC ,A68_VC ,struct A68t97 ,void *));
typedef struct A68t159  A68_159 ;    /* PROC(REF MODE26,REF MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t160,(A68_VC ,A68_INT *,A68_BOOL ,struct A68t97 ,A68_VC *),(A68_VC ,A68_INT *,A68_BOOL ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t160  A68_160 ;    /* PROC(MODE26,REF INT,BOOL,MODE97) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t161,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t161  A68_161 ;    /* PROC(REF MODE26,MODE97) BOOL */
struct A68t163 ;
struct A68t164 ;

A_PROCEDURE(A68_VOID ,A68t162,(struct A68t36 ,struct A68t164 ,struct A68t97 ,struct A68t163 *),(struct A68t36 ,struct A68t164 ,struct A68t97 ,struct A68t163 *,void *));
typedef struct A68t162  A68_162 ;    /* PROC(MODE36,MODE164,MODE97) MODE163 */
struct A68t163{
A68_VC  Operating_system;
A68_VC  Star_chars;
A68_VC  Edit_command;
A68_VC  Exe_dir;
A68_VC  Heap_size;
A68_BOOL  Case_sensitive;
A_PAD_BOOL(PAD_36)
};
typedef struct A68t163  A68_163 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26,REF MODE26,BOOL)  */

A_PROCEDURE(A68_BOOL ,A68t164,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t164  A68_164 ;    /* PROC(MODE97) BOOL */
struct A68t167{
A68_CHAR  Mode;
A_PAD_CHAR(PAD_37)
A68_CHAR  Value;
A_PAD_CHAR(PAD_38)
};
typedef struct A68t167  A68_167 ;    /* STRUCT(CHAR,CHAR)  */
struct A68t165{
struct A68t166 * Module;
struct A68t167  Star;
struct A68t165 * Rest;
};
typedef struct A68t165  A68_165 ;    /* STRUCT(REF MODE166,MODE167,REF MODE165)  */
A_VECTOR(struct A68t169 ,A68t168);
typedef struct A68t168  A68_168 ;    /* VECTOR [] MODE169 */
struct A68t169{
A68_VC  Name;
A68_VC  Value;
A68_VC  Initvalue;
struct A68t170 * Default;
A68_BOOL  Permanent;
A_PAD_BOOL(PAD_39)
A68_BITS  Marker;
A_PAD_BITS(PAD_40)
};
typedef struct A68t169  A68_169 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE170,BOOL,BITS)  */
struct A68t166{
A68_VC  Name;
A68_VC  Filename;
A68_BOOL  Decs;
A_PAD_BOOL(PAD_41)
A68_BOOL  Recursive;
A_PAD_BOOL(PAD_42)
A68_BOOL  Analysed;
A_PAD_BOOL(PAD_43)
A68_BITS  State;
A_PAD_BITS(PAD_44)
struct A68t168  Attributes;
A68_INT  Level;
A_PAD_INT(PAD_45)
A68_INT  Number;
A_PAD_INT(PAD_46)
A68_INT  Marker;
A_PAD_INT(PAD_47)
struct A68t165 * Uses;
struct A68t165 * Usedby;
};
typedef struct A68t166  A68_166 ;    /* STRUCT(REF MODE26,REF MODE26,BOOL,BOOL,BOOL,BITS,REF MODE168,INT,INT,INT,REF MODE165,REF MODE165)  */
struct A68t170{
A68_VC  Name;
A68_VC  Text;
A68_BITS  Tags;
A_PAD_BITS(PAD_48)
struct A68t170 * Last;
struct A68t170 * Rest;
};
typedef struct A68t170  A68_170 ;    /* STRUCT(REF MODE26,REF MODE26,BITS,REF MODE170,REF MODE170)  */

A_PROCEDURE(A68_BOOL ,A68t171,(struct A68t170 *),(struct A68t170 *,void *));
typedef struct A68t171  A68_171 ;    /* PROC(REF MODE170) BOOL */

A_PROCEDURE(A68_VOID ,A68t172,(struct A68t163 ,A68_VC *),(struct A68t163 ,A68_VC *,void *));
typedef struct A68t172  A68_172 ;    /* PROC(MODE163) REF MODE26 */
A_VECTOR(struct A68t170 **,A68t173);
typedef struct A68t173  A68_173 ;    /* VECTOR [] REF REF MODE170 */

A_PROCEDURE(A68_VOID ,A68t174,(struct A68t120 ,A68_VC *),(struct A68t120 ,A68_VC *,void *));
typedef struct A68t174  A68_174 ;    /* PROC(MODE120) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t175,(A68_VC ,A68_INT ,struct A68t97 ),(A68_VC ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t175  A68_175 ;    /* PROC(MODE26,INT,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t176,(A68_VC ,A68_VC ,A68_VC *),(A68_VC ,A68_VC ,A68_VC *,void *));
typedef struct A68t176  A68_176 ;    /* PROC(MODE26,MODE26) REF MODE26 */

A_PROCEDURE(struct A68t170 *,A68t177,(A68_VC ,A68_VC ,A68_BITS ),(A68_VC ,A68_VC ,A68_BITS ,void *));
typedef struct A68t177  A68_177 ;    /* PROC(MODE26,REF MODE26,BITS) REF MODE170 */

A_PROCEDURE(A68_INT ,A68t178,(A68_VC ),(A68_VC ,void *));
typedef struct A68t178  A68_178 ;    /* PROC(REF MODE26) INT */

A_PROCEDURE(struct A68t170 *,A68t179,(A68_VC ,struct A68t171 ),(A68_VC ,struct A68t171 ,void *));
typedef struct A68t179  A68_179 ;    /* PROC(MODE26,MODE171) REF MODE170 */

A_PROCEDURE(struct A68t170 *,A68t180,(A68_VC ),(A68_VC ,void *));
typedef struct A68t180  A68_180 ;    /* PROC(MODE26) REF MODE170 */

A_PROCEDURE(A68_VOID ,A68t181,(struct A68t170 *),(struct A68t170 *,void *));
typedef struct A68t181  A68_181 ;    /* PROC(REF MODE170) VOID */

A_PROCEDURE(A68_BOOL ,A68t182,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t182  A68_182 ;    /* PROC(MODE26,BOOL) BOOL */

A_PROCEDURE(A68_VOID ,A68t183,(struct A68t165 *,A68_INT ),(struct A68t165 *,A68_INT ,void *));
typedef struct A68t183  A68_183 ;    /* PROC(REF MODE165,INT) VOID */
struct A68t185 ;

A_PROCEDURE(struct A68t165 *,A68t184,(struct A68t165 *,struct A68t185 ),(struct A68t165 *,struct A68t185 ,void *));
typedef struct A68t184  A68_184 ;    /* PROC(REF MODE165,MODE185) REF MODE165 */

A_PROCEDURE(A68_BOOL ,A68t185,(struct A68t166 *,struct A68t167 ),(struct A68t166 *,struct A68t167 ,void *));
typedef struct A68t185  A68_185 ;    /* PROC(REF MODE166,MODE167) BOOL */

A_PROCEDURE(struct A68t165 *,A68t186,(struct A68t165 *,A68_VC ),(struct A68t165 *,A68_VC ,void *));
typedef struct A68t186  A68_186 ;    /* PROC(REF MODE165,MODE26) REF MODE165 */

A_PROCEDURE(A68_BOOL ,A68t187,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t187  A68_187 ;    /* PROC(MODE26,MODE97) BOOL */

A_PROCEDURE(A68_BOOL ,A68t188,(A68_VC ,A68_VC ,A68_BITS ,struct A68t97 ),(A68_VC ,A68_VC ,A68_BITS ,struct A68t97 ,void *));
typedef struct A68t188  A68_188 ;    /* PROC(MODE26,MODE26,BITS,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t189,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t189  A68_189 ;    /* PROC(MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t190,(A68_VC ,A68_VC ,A68_INT ,struct A68t97 ),(A68_VC ,A68_VC ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t190  A68_190 ;    /* PROC(MODE26,MODE26,INT,MODE97) VOID */

A_PROCEDURE(struct A68t165 *,A68t191,(struct A68t165 *,A68_INT ),(struct A68t165 *,A68_INT ,void *));
typedef struct A68t191  A68_191 ;    /* PROC(REF MODE165,INT) REF MODE165 */

A_PROCEDURE(A68_BOOL ,A68t192,(struct A68t167 ,A68_VC ),(struct A68t167 ,A68_VC ,void *));
typedef struct A68t192  A68_192 ;    /* PROC(MODE167,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t193,(struct A68t166 *,A68_INT ,A68_VC *),(struct A68t166 *,A68_INT ,A68_VC *,void *));
typedef struct A68t193  A68_193 ;    /* PROC(REF MODE166,INT) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t194,(struct A68t166 *,A68_INT ),(struct A68t166 *,A68_INT ,void *));
typedef struct A68t194  A68_194 ;    /* PROC(REF MODE166,INT) BOOL */
struct A68t196 ;

A_PROCEDURE(A68_VOID ,A68t195,(struct A68t166 *,A68_INT ,struct A68t196 ),(struct A68t166 *,A68_INT ,struct A68t196 ,void *));
typedef struct A68t195  A68_195 ;    /* PROC(REF MODE166,INT,MODE196) VOID */
struct A68t196 { A68_INT mode; union {
A68_VC  mode1;
A68_BOOL  mode2;
} data; };
typedef struct A68t196  A68_196 ;    /* UNION(REF MODE26,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t197,(struct A68t166 *,A68_INT ),(struct A68t166 *,A68_INT ,void *));
typedef struct A68t197  A68_197 ;    /* PROC(REF MODE166,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t198,(struct A68t165 *),(struct A68t165 *,void *));
typedef struct A68t198  A68_198 ;    /* PROC(REF MODE165) VOID */

A_PROCEDURE(A68_VOID ,A68t199,(struct A68t129 ),(struct A68t129 ,void *));
typedef struct A68t199  A68_199 ;    /* PROC(MODE129) VOID */

A_PROCEDURE(A68_VOID ,A68t200,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t200  A68_200 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,60,A68t201);
typedef struct A68t201  A68_201 ;    /* STRUCT 60 CHAR */
A_ISTRUCT(A68_CHAR ,7,A68t202);
typedef struct A68t202  A68_202 ;    /* STRUCT 7 CHAR */
A_ISTRUCT(struct A68t52 ,3,A68t203);
typedef struct A68t203  A68_203 ;    /* STRUCT 3 MODE52 */

A_PROCEDURE(struct A68t170 *,A68t204,(A68_VC ),(A68_VC ,void *));
typedef struct A68t204  A68_204 ;    /* PROC(REF MODE26) REF MODE170 */
A_ISTRUCT(A68_CHAR ,1,A68t205);
typedef struct A68t205  A68_205 ;    /* STRUCT 0 CHAR */
A_ISTRUCT(A68_CHAR ,3,A68t206);
typedef struct A68t206  A68_206 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t207);
typedef struct A68t207  A68_207 ;    /* STRUCT 5 CHAR */

A_PROCEDURE(A68_VOID ,A68t208,(A68_BOOL ),(A68_BOOL ,void *));
typedef struct A68t208  A68_208 ;    /* PROC(BOOL) VOID */
A_ISTRUCT(A68_CHAR ,38,A68t209);
typedef struct A68t209  A68_209 ;    /* STRUCT 38 CHAR */
A_ISTRUCT(A68_CHAR ,39,A68t210);
typedef struct A68t210  A68_210 ;    /* STRUCT 39 CHAR */

A_PROCEDURE(A68_VOID ,A68t211,(A68_VC ,struct A68t97 ,A68_VC *),(A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t211  A68_211 ;    /* PROC(REF MODE26,MODE97) REF MODE26 */
A_ISTRUCT(struct A68t52 ,2,A68t212);
typedef struct A68t212  A68_212 ;    /* STRUCT 2 MODE52 */
A_ISTRUCT(A68_CHAR ,42,A68t213);
typedef struct A68t213  A68_213 ;    /* STRUCT 42 CHAR */
A_ISTRUCT(struct A68t52 ,4,A68t214);
typedef struct A68t214  A68_214 ;    /* STRUCT 4 MODE52 */

A_PROCEDURE(A68_VOID ,A68t215,(struct A68t97 ,A68_VC *),(struct A68t97 ,A68_VC *,void *));
typedef struct A68t215  A68_215 ;    /* PROC(MODE97) REF MODE26 */
A_ISTRUCT(A68_CHAR ,6,A68t216);
typedef struct A68t216  A68_216 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t217);
typedef struct A68t217  A68_217 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t218);
typedef struct A68t218  A68_218 ;    /* STRUCT 10 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from mm_basics --- */
extern A68_170 * JBAAAMM_nilsymbol;
extern A68_VOID  ATAAAMM_initialise_mm_basics(struct A68t163 ,A68_VC *);
extern A68_VC  BCAAAMM_blankname;
extern A68_BOOL  SIAAAMM_diagnose;
#define DJAAAMM_local_tag 0X010U
extern A68_170 * VMAAAMM_define_symbol(A68_VC ,A68_VC ,A68_BITS );
extern A68_170 * ALAAAMM_scansymbols(A68_VC ,struct A68t171 );
extern A68_BOOL  ZDBAAMM_file_exists(A68_VC ,struct A68t97 );
extern A68_VC  ZCAAAMM_true_string;
extern A68_VC  IDAAAMM_false_string;
/* --- End of imports from mm_basics --- */


/* --- Imports from unixcomplink --- */
extern A68_BOOL  JVCAAMM_os_submit(A68_VC ,A68_VC ,struct A68t97 );
extern A68_VOID  WVCAAMM_os_save_file(A68_VC ,A68_VC ,struct A68t97 );
extern A68_VOID  DVCAAMM_translate_filename(A68_VC ,A68_INT *,A68_BOOL ,struct A68t97 ,A68_VC *);
extern A68_BOOL  VSCAAMM_obey_osaction(A68_VC ,struct A68t97 );
extern A68_VOID  WUCAAMM_initialise_complink(struct A68t36 ,struct A68t164 ,struct A68t97 ,A68_163 *);
/* --- End of imports from unixcomplink --- */


/* --- Imports from messageproc --- */
extern A68_VOID  ZAAAOSI_makervc(A68_VC ,A68_VC *);
extern A68_98  UHAAOSI_fatal;
/* --- End of imports from messageproc --- */


/* --- Imports from osinterface --- */
extern A68_94  BOBAOSI_update_access;
extern A68_94  FOBAOSI_update_truncate_access;
#define HDAAOST_block_update_access BOBAOSI_update_access
#define IDAAOST_block_update_truncate_access FOBAOSI_update_truncate_access
#include <stdlib.h>
#define EXIT(status) exit(A_INT_int(status))

#define BZBAOSI_exit EXIT
extern A68_VOID  TNCAOSI_parse_filename(A68_VC ,A68_VC ,struct A68t97 ,A68_120 *);
extern int A_argc;
extern char **A_argv;
#define A_prelude(argc,argv) A_argc=argc; A_argv = argv

#define VPCAOSI_prelude A_prelude
#include "Alibrary.h"

#define PBCAOSI_garbage_collect Agc_collect
#include <math.h>

#define GQAAOST_sqrt sqrt
extern A68_97  ZLBAOSI_global_msg;
extern A68_34 * KEAAOST_screen;
extern A68_VOID  SOAAOST_flt_if_interrupted(struct A68t97 );
/* --- End of imports from osinterface --- */


/* --- Imports from putstrings --- */
extern A68_VOID  LRAAOSL_newline(struct A68t34 *);
extern A68_VOID  GFBAOSL_put(struct A68t34 *,struct A68t85 );
extern A68_VOID  UJBAOSL_oneline(struct A68t85 ,A68_VC *);
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void SAAAAMM(void);   /* mm_basics */
extern void OSCAAMM(void);   /* unixcomplink */
extern void JFAAOSI(void);   /* messageproc */
extern void PCAAOST(void);   /* osinterface */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_201   DWCAAMM = {"$Id: mm_oscommands.a68,v 34.3 1995/03/29 13:02:35 ella Exp $"}; 
A_GISVEC(A68_VC ,EWCAAMM,DWCAAMM,60)
#define FWCAAMM_com_buf_step 512
static A68_VC  KWCAAMM_command_buffer;
static A68_INT  MWCAAMM_com_buf_top;
static A68_INT  NWCAAMM_com_pos;
static A68_170 * OWCAAMM_exists_symbol;
static A68_170 * PWCAAMM_param_symbol;
static A68_170 * QWCAAMM_filename_symbol;
static A68_170 * RWCAAMM_fdirectory_symbol;
static A68_170 * SWCAAMM_fname_symbol;
static A68_170 * TWCAAMM_ftype_symbol;
static A68_202   PXCAAMM = {"Obey:- "}; 
A_GISVEC(A68_VC ,QXCAAMM,PXCAAMM,7)
static A68_205   EZCAAMM = {""}; 
A_GISVEC(A68_VC ,FZCAAMM,EZCAAMM,0)
static A68_206   HADAAMM = {"off"}; 
A_GISVEC(A68_VC ,IADAAMM,HADAAMM,3)
static A68_207   KADAAMM = {"false"}; 
A_GISVEC(A68_VC ,LADAAMM,KADAAMM,5)
static A68_209   FBDAAMM = {"oscommand parameters cannot be nested."}; 
A_GISVEC(A68_VC ,GBDAAMM,FBDAAMM,38)
static A68_210   IBDAAMM = {"oscommand parameters bracket missmatch."}; 
A_GISVEC(A68_VC ,JBDAAMM,IBDAAMM,39)
static A68_205   TBDAAMM = {""}; 
A_GISVEC(A68_VC ,UBDAAMM,TBDAAMM,0)
static A68_95   MCDAAMM = {"_old"}; 
A_GISVEC(A68_VC ,NCDAAMM,MCDAAMM,4)
static A68_207   VCDAAMM = {"File "}; 
A_GISVEC(A68_VC ,WCDAAMM,VCDAAMM,5)
static A68_213   ADDAAMM = {" not found at save_file.  No action taken."}; 
A_GISVEC(A68_VC ,BDDAAMM,ADDAAMM,42)
static A68_216   JDDAAMM = {"exists"}; 
A_GISVEC(A68_VC ,KDDAAMM,JDDAAMM,6)
static A68_207   LDDAAMM = {"param"}; 
A_GISVEC(A68_VC ,MDDAAMM,LDDAAMM,5)
static A68_217   NDDAAMM = {"filename"}; 
A_GISVEC(A68_VC ,ODDAAMM,NDDAAMM,8)
static A68_218   PDDAAMM = {"fdirectory"}; 
A_GISVEC(A68_VC ,QDDAAMM,PDDAAMM,10)
static A68_207   RDDAAMM = {"fname"}; 
A_GISVEC(A68_VC ,SDDAAMM,RDDAAMM,5)
static A68_207   TDDAAMM = {"ftype"}; 
A_GISVEC(A68_VC ,UDDAAMM,TDDAAMM,5)
typedef struct   /* env of non-global proc */
{
int dummy;
} BXCAAMM_generator;
typedef struct   /* env of non-global proc */
{
A68_170 ** DYCAAMM_sym_search;
A68_VC * EYCAAMM_searchname;
A68_170 ** CYCAAMM_fwd_symbols;
A68_170 ** BYCAAMM_rev_symbols;
} IYCAAMM_get_symbol;
typedef struct   /* env of non-global proc */
{
A68_97  Msg;
A68_INT * AYCAAMM_ind;
} DZCAAMM_set_param;
typedef struct   /* env of non-global proc */
{
A68_204  GYCAAMM_get_symbol;
A68_97  Msg;
A68_36  BZCAAMM_set_param;
} UZCAAMM_parse_oscommand;
typedef struct   /* env of non-global proc */
{
A68_170 ** BYCAAMM_rev_symbols;
A68_170 ** CYCAAMM_fwd_symbols;
} QBDAAMM_rev_action;
typedef struct   /* env of non-global proc */
{
A68_43  SZCAAMM_parse_oscommand;
A68_BOOL * MBDAAMM_continue;
A68_97  Msg;
} YBDAAMM_com_action;
typedef struct   /* env of non-global proc */
{
A68_BOOL * ZZCAAMM_condition;
A68_INT * WZCAAMM_pstart;
A68_BOOL * YZCAAMM_sense;
} DADAAMM_state;
typedef struct   /* env of non-global proc */
{
A68_204  GYCAAMM_get_symbol;
A68_43  NADAAMM_analyse_text;
A68_BOOL * XZCAAMM_query;
A68_125  BADAAMM_state;
A68_INT * VZCAAMM_ign_cnt;
A68_BOOL * ZZCAAMM_condition;
A68_INT * WZCAAMM_pstart;
A68_BOOL * YZCAAMM_sense;
A68_BOOL * AADAAMM_inparam;
A68_97  Msg;
A68_36  BZCAAMM_set_param;
} PADAAMM_analyse_text;
typedef struct   /* env of non-global proc */
{
A68_INT * SADAAMM_start;
A68_INT * RADAAMM_pos;
A68_204  GYCAAMM_get_symbol;
A68_VC  Text;
A68_43  NADAAMM_analyse_text;
} ABDAAMM_insert;

A_STATIC A68_VOID  HWCAAMM_generator(A68_BOOL  GWCAAMM_anonymous, A68_VC  *ReturnedValue);

A68_VOID  VWCAAMM_insert_oscommand_item(A68_VC  Item);

A_STATIC A68_VOID  AXCAAMM_generator(A68_BOOL  YWCAAMM_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_BOOL  KXCAAMM_obey_oscommand(A68_97  Msg);

A68_BOOL  ZXCAAMM_translate_oscommands(A68_VC  Class, A68_97  Msg);

A_STATIC A68_170 * HYCAAMM_get_symbol(A68_VC  Name, void *NonLocals);

A_STATIC A68_VOID  CZCAAMM_set_param(A68_VC  Param_str, void *NonLocals);

A_STATIC A68_VOID  TZCAAMM_parse_oscommand(A68_VC  Comtext, void *NonLocals);

A_STATIC A68_BOOL  CADAAMM_state(void *NonLocals);

A_STATIC A68_VOID  OADAAMM_analyse_text(A68_VC  Text, void *NonLocals);

A_STATIC A68_VOID  ZADAAMM_insert(A68_BOOL  Substitute, void *NonLocals);

A_STATIC A68_BOOL  PBDAAMM_rev_action(A68_170 * S, void *NonLocals);

A_STATIC A68_BOOL  XBDAAMM_com_action(A68_170 * S, void *NonLocals);

A68_BOOL  ECDAAMM_submit(A68_VC  Dbname, A68_VC  Node, A68_97  Msg);

A68_VOID  ICDAAMM_save_file(A68_VC  Name, A68_97  Msg, A68_VC  *ReturnedValue);

A68_VOID  IDDAAMM_initialise_mm_oscommands(A68_97  Msg, A68_VC  *ReturnedValue);

A68_VOID  BEDAAMM_close_oscommands(A68_97  Msg);

A_STATIC A68_VOID  ZADAAMM_insert(A68_BOOL  Substitute, void *NonLocals)
#define NL(x) (((ABDAAMM_insert *)NonLocals)->x)
{ 
A68_VC  BBDAAMM;  /* OPERATORS - trim index */
A68_170 * CBDAAMM_s;
A68_VC  DBDAAMM;  /* OPERATORS - trim index */
A_PROC_ENTRY(insert);
 /* line 188: */
 /* line 189: */
{ 
 /* line 190: */
if ( ((*NL(SADAAMM_start))<(*NL(RADAAMM_pos))) )
{ 
 /* line 191: */
if ( Substitute )
{ 
CBDAAMM_s = A_CALLPROC(NL(GYCAAMM_get_symbol),(A_VTRIM(BBDAAMM,(NL(Text)),A_VTSCRIPT(&(BBDAAMM.upb),(NL(Text)).upb,(*NL(SADAAMM_start)),((*NL(RADAAMM_pos))-1)))),(A_VTRIM(BBDAAMM,(NL(Text)),A_VTSCRIPT(&(BBDAAMM.upb),(NL(Text)).upb,(*NL(SADAAMM_start)),((*NL(RADAAMM_pos))-1))),(NL(GYCAAMM_get_symbol)).nonlocals));
 /* line 193: */
if ( (CBDAAMM_s!=JBAAAMM_nilsymbol) )
{ 
 /* line 194: */
 /* line 195: */
A_CALLPROC(NL(NADAAMM_analyse_text),((*(&(CBDAAMM_s->Text)))),((*(&(CBDAAMM_s->Text))),(NL(NADAAMM_analyse_text)).nonlocals));
} 
} 
else
{ 
 /* line 196: */
 /* line 197: */
VWCAAMM_insert_oscommand_item(A_VTRIM(DBDAAMM,(NL(Text)),A_VTSCRIPT(&(DBDAAMM.upb),(NL(Text)).upb,(*NL(SADAAMM_start)),((*NL(RADAAMM_pos))-1))));
} 
} 
 /* line 198: */
 /* line 199: */
(*NL(SADAAMM_start)) = ((*NL(RADAAMM_pos))+1);
} 
A_PROC_EXIT(insert);
return;
} 
#undef NL

A_STATIC A68_BOOL  CADAAMM_state(void *NonLocals)
#define NL(x) (((DADAAMM_state *)NonLocals)->x)
{ 
A68_BOOL  EADAAMM;  /* clause result */
A68_VC  FADAAMM;  /* OPERATORS - trim index */
A68_VC  GADAAMM_str;
A68_BOOL  JADAAMM;  /* optbool result */
A_PROC_ENTRY(state);
{ 
 /* line 164: */
if ( (*NL(ZZCAAMM_condition)) )
{ 
NWCAAMM_com_pos = ((*NL(WZCAAMM_pstart))-1);
 /* line 165: */
 /* line 166: */
EADAAMM = A68_TRUE;
} 
else
{ 
 /* line 168: */
if ( (NWCAAMM_com_pos<(*NL(WZCAAMM_pstart))) )
{ 
 /* line 169: */
EADAAMM = !(*NL(YZCAAMM_sense));
} 
else
{ 
GADAAMM_str = A_VTRIM(FADAAMM,(KWCAAMM_command_buffer),A_VTSCRIPT(&(FADAAMM.upb),(KWCAAMM_command_buffer).upb,(*NL(WZCAAMM_pstart)),NWCAAMM_com_pos));
 /* line 171: */
NWCAAMM_com_pos = ((*NL(WZCAAMM_pstart))-1);
 /* line 172: */
JADAAMM = A_VC_EQ(GADAAMM_str,IADAAMM);
if ( ! JADAAMM )
{JADAAMM = A_VC_EQ(GADAAMM_str,LADAAMM);
}
 /* line 174: */
if ( JADAAMM )
{ 
 /* line 176: */
EADAAMM = !(*NL(YZCAAMM_sense));
} 
else
{ 
 /* line 177: */
 /* line 178: */
EADAAMM = (*NL(YZCAAMM_sense));
} 
} 
} 
} 
A_PROC_EXIT(state);
return( EADAAMM );
} 
#undef NL

A_STATIC A68_VOID  OADAAMM_analyse_text(A68_VC  Text, void *NonLocals)
#define NL(x) (((PADAAMM_analyse_text *)NonLocals)->x)
{ 
A68_INT  QADAAMM_top;
A68_INT  RADAAMM_pos;
A68_INT  SADAAMM_start;
A68_INT  TADAAMM_mark;
A68_BOOL  UADAAMM_subs;
A68_BOOL  VADAAMM_escape;
A68_CHAR  WADAAMM_c;
A68_208  YADAAMM_insert;   /* proc value of non-global proc */
A68_BOOL  EBDAAMM;  /* optbool result */
A68_46  HBDAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_46  KBDAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  LBDAAMM;  /* OPERATORS - trim index */
A_PROC_ENTRY(analyse_text);
 /* line 181: */
 /* line 182: */
{ 
QADAAMM_top = Text.upb;
 /* line 183: */
RADAAMM_pos = 0;
SADAAMM_start = 1;
TADAAMM_mark = QADAAMM_top;
 /* line 184: */
UADAAMM_subs = A68_FALSE;
VADAAMM_escape = A68_FALSE;
 /* line 185: */
 /* line 187: */
A_CLOSURE( YADAAMM_insert, ZADAAMM_insert, ABDAAMM_insert );
(( ABDAAMM_insert * ) ( YADAAMM_insert.nonlocals )) -> SADAAMM_start = (&SADAAMM_start);
(( ABDAAMM_insert * ) ( YADAAMM_insert.nonlocals )) -> RADAAMM_pos = (&RADAAMM_pos);
(( ABDAAMM_insert * ) ( YADAAMM_insert.nonlocals )) -> GYCAAMM_get_symbol = NL(GYCAAMM_get_symbol);
(( ABDAAMM_insert * ) ( YADAAMM_insert.nonlocals )) -> Text = Text;
(( ABDAAMM_insert * ) ( YADAAMM_insert.nonlocals )) -> NADAAMM_analyse_text = NL(NADAAMM_analyse_text);
 /* line 201: */
for ( ;; )
{ 
 /* line 202: */
 /* line 203: */
if ( !(((RADAAMM_pos+=1)<=QADAAMM_top)) ) break;
WADAAMM_c = (*(&A_VINDEX(Text,RADAAMM_pos)));
 /* line 204: */
 /* line 205: */
if ( VADAAMM_escape )
{ 
 /* line 206: */
VADAAMM_escape = A68_FALSE;
} 
else
{ 
 /* line 207: */
if ( (WADAAMM_c=='{') )
{ 
 /* line 208: */
if ( (*NL(XZCAAMM_query)) )
{ 
(*NL(XZCAAMM_query)) = A68_FALSE;
 /* line 209: */
if ( !A_CALLPROC(NL(BADAAMM_state),(),((NL(BADAAMM_state)).nonlocals)) )
{ 
 /* line 210: */
(*NL(VZCAAMM_ign_cnt)) = 1;
} 
} 
else
{ 
 /* line 211: */
if ( ((*NL(VZCAAMM_ign_cnt))>0) )
{ 
 /* line 212: */
(*NL(VZCAAMM_ign_cnt))+=1;
} 
} 
 /* line 213: */
 /* line 214: */
SADAAMM_start = (RADAAMM_pos+1);
} 
else
{ 
 /* line 215: */
if ( (WADAAMM_c=='|') )
{ 
 /* line 216: */
if ( ((*NL(VZCAAMM_ign_cnt))==1) )
{ 
(*NL(VZCAAMM_ign_cnt))-=1;
 /* line 217: */
 /* line 218: */
SADAAMM_start = (RADAAMM_pos+1);
} 
else
{ 
 /* line 219: */
if ( ((*NL(VZCAAMM_ign_cnt))<=0) )
{ 
A_CALLPROC(YADAAMM_insert,(A68_FALSE),(A68_FALSE,(YADAAMM_insert).nonlocals));
 /* line 220: */
 /* line 221: */
 /* line 222: */
(*NL(VZCAAMM_ign_cnt)) = 1;
} 
} 
} 
else
{ 
 /* line 223: */
if ( (WADAAMM_c=='}') )
{ 
 /* line 224: */
if ( ((*NL(VZCAAMM_ign_cnt))>0) )
{ 
(*NL(VZCAAMM_ign_cnt))-=1;
 /* line 225: */
 /* line 226: */
 /* line 227: */
SADAAMM_start = (RADAAMM_pos+1);
} 
else
{ 
 /* line 228: */
 /* line 229: */
A_CALLPROC(YADAAMM_insert,(A68_FALSE),(A68_FALSE,(YADAAMM_insert).nonlocals));
} 
} 
else
{ 
 /* line 231: */
if ( ((*NL(VZCAAMM_ign_cnt))>0) )
{ 
/*SKIP*/;
} 
else
{ 
EBDAAMM = (WADAAMM_c=='?');
if ( ! EBDAAMM )
{EBDAAMM = (WADAAMM_c=='#');
}
 /* line 232: */
if ( EBDAAMM )
{ 
 /* line 233: */
if ( (*NL(XZCAAMM_query)) )
{ 
 /* line 234: */
 /* line 235: */
(*NL(ZZCAAMM_condition)) = A_CALLPROC(NL(BADAAMM_state),(),((NL(BADAAMM_state)).nonlocals));
} 
else
{ 
A_CALLPROC(YADAAMM_insert,(A68_FALSE),(A68_FALSE,(YADAAMM_insert).nonlocals));
 /* line 236: */
(*NL(ZZCAAMM_condition)) = A68_FALSE;
 /* line 237: */
 /* line 238: */
(*NL(XZCAAMM_query)) = A68_TRUE;
} 
 /* line 239: */
(*NL(WZCAAMM_pstart)) = (NWCAAMM_com_pos+1);
 /* line 240: */
 /* line 241: */
(*NL(YZCAAMM_sense)) = (WADAAMM_c=='?');
} 
else
{ 
 /* line 242: */
if ( (WADAAMM_c=='\'') )
{ 
A_CALLPROC(YADAAMM_insert,(UADAAMM_subs),(UADAAMM_subs,(YADAAMM_insert).nonlocals));
 /* line 243: */
 /* line 244: */
UADAAMM_subs = !UADAAMM_subs;
} 
else
{ 
 /* line 245: */
if ( (WADAAMM_c=='(') )
{ 
 /* line 246: */
if ( (*NL(AADAAMM_inparam)) )
{ 
 /* line 247: */
 /* line 248: */
A_CALLPROC(NL(Msg),(UHAAOSI_fatal, A_HVEC(HBDAAMM,GBDAAMM,A68_VC )),(UHAAOSI_fatal, A_HVEC(HBDAAMM,GBDAAMM,A68_VC ),(NL(Msg)).nonlocals));
} 
else
{ 
A_CALLPROC(YADAAMM_insert,(A68_FALSE),(A68_FALSE,(YADAAMM_insert).nonlocals));
 /* line 249: */
(*NL(WZCAAMM_pstart)) = (NWCAAMM_com_pos+1);
 /* line 250: */
 /* line 251: */
 /* line 252: */
(*NL(AADAAMM_inparam)) = A68_TRUE;
} 
} 
else
{ 
 /* line 253: */
if ( (WADAAMM_c==')') )
{ 
 /* line 254: */
if ( !(*NL(AADAAMM_inparam)) )
{ 
 /* line 255: */
 /* line 256: */
A_CALLPROC(NL(Msg),(UHAAOSI_fatal, A_HVEC(KBDAAMM,JBDAAMM,A68_VC )),(UHAAOSI_fatal, A_HVEC(KBDAAMM,JBDAAMM,A68_VC ),(NL(Msg)).nonlocals));
} 
else
{ 
A_CALLPROC(YADAAMM_insert,(A68_FALSE),(A68_FALSE,(YADAAMM_insert).nonlocals));
 /* line 257: */
 /* line 258: */
if ( (NWCAAMM_com_pos>=(*NL(WZCAAMM_pstart))) )
{ 
 /* line 259: */
A_CALLPROC(NL(BZCAAMM_set_param),(A_VTRIM(LBDAAMM,(KWCAAMM_command_buffer),A_VTSCRIPT(&(LBDAAMM.upb),(KWCAAMM_command_buffer).upb,(*NL(WZCAAMM_pstart)),NWCAAMM_com_pos))),(A_VTRIM(LBDAAMM,(KWCAAMM_command_buffer),A_VTSCRIPT(&(LBDAAMM.upb),(KWCAAMM_command_buffer).upb,(*NL(WZCAAMM_pstart)),NWCAAMM_com_pos)),(NL(BZCAAMM_set_param)).nonlocals));
} 
 /* line 260: */
NWCAAMM_com_pos = ((*NL(WZCAAMM_pstart))-1);
 /* line 261: */
 /* line 262: */
 /* line 263: */
(*NL(AADAAMM_inparam)) = A68_FALSE;
} 
} 
else
{ 
 /* line 264: */
if ( (WADAAMM_c=='^') )
{ 
A_CALLPROC(YADAAMM_insert,(A68_FALSE),(A68_FALSE,(YADAAMM_insert).nonlocals));
 /* line 265: */
 /* line 266: */
RADAAMM_pos = TADAAMM_mark;
} 
else
{ 
 /* line 267: */
if ( (WADAAMM_c=='@') )
{ 
A_CALLPROC(YADAAMM_insert,(A68_FALSE),(A68_FALSE,(YADAAMM_insert).nonlocals));
 /* line 268: */
 /* line 269: */
TADAAMM_mark = RADAAMM_pos;
} 
else
{ 
 /* line 270: */
if ( (WADAAMM_c=='\\') )
{ 
A_CALLPROC(YADAAMM_insert,(A68_FALSE),(A68_FALSE,(YADAAMM_insert).nonlocals));
 /* line 271: */
 /* line 272: */
 /* line 273: */
VADAAMM_escape = A68_TRUE;
} 
} 
} 
} 
} 
} 
} 
} 
} 
} 
} 
} 
}
 /* line 274: */
 /* line 275: */
A_CALLPROC(YADAAMM_insert,(A68_FALSE),(A68_FALSE,(YADAAMM_insert).nonlocals));
} 
A_PROC_EXIT(analyse_text);
return;
} 
#undef NL

A_STATIC A68_VOID  AXCAAMM_generator(A68_BOOL  YWCAAMM_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((BXCAAMM_generator *)NonLocals)->x)
{ 
A68_VC  CXCAAMM;  /* clause result */
A68_VC  DXCAAMM;  /* OPERATORS - dynamic generator */
{ 
DXCAAMM.upb = (MWCAAMM_com_buf_top+FWCAAMM_com_buf_step) ;
( YWCAAMM_anonymous? A_VLOC(A68_CHAR ,DXCAAMM): A_VHEAP(A68_CHAR ,DXCAAMM) );
CXCAAMM = DXCAAMM;
} 
*ReturnedValue = (CXCAAMM);
return;
} 
#undef NL

A_STATIC A68_170 * HYCAAMM_get_symbol(A68_VC  Name, void *NonLocals)
#define NL(x) (((IYCAAMM_get_symbol *)NonLocals)->x)
{ 
A68_INT  JYCAAMM_ntop;
A68_CHAR  KYCAAMM_lc;
A68_170 * LYCAAMM_sym;
A68_BOOL  MYCAAMM_step_up;
A68_BOOL  NYCAAMM_step_down;
A68_BOOL  OYCAAMM;  /* optbool result */
A68_VC  PYCAAMM;  /* OPERATORS - trim index */
A68_VC  QYCAAMM_sn;
A68_170 * RYCAAMM;  /* clause result */
A68_BOOL  SYCAAMM;  /* optbool result */
A68_BOOL  TYCAAMM;  /* optbool result */
A68_VC  UYCAAMM;  /* OPERATORS - trim index */
A68_VC  VYCAAMM;  /* OPERATORS - trim index */
A68_170 * WYCAAMM;  /* clause result */
A68_VC  XYCAAMM;  /* clause result */
A68_BOOL  YYCAAMM;  /* optbool result */
A68_170 * ZYCAAMM;  /* clause result */
A_PROC_ENTRY(get_symbol);
 /* line 98: */
 /* line 99: */
{ 
JYCAAMM_ntop = Name.upb;
 /* line 100: */
KYCAAMM_lc = (*(&A_VINDEX(Name,JYCAAMM_ntop)));
 /* line 101: */
LYCAAMM_sym = JBAAAMM_nilsymbol;
 /* line 102: */
MYCAAMM_step_up = (KYCAAMM_lc=='>');
 /* line 103: */
NYCAAMM_step_down = (KYCAAMM_lc=='<');
 /* line 105: */
OYCAAMM = MYCAAMM_step_up;
if ( ! OYCAAMM )
{OYCAAMM = NYCAAMM_step_down;
}
 /* line 106: */
if ( OYCAAMM )
{ 
QYCAAMM_sn = A_VTRIM(PYCAAMM,(Name),A_VTSCRIPT(&(PYCAAMM.upb),(Name).upb,1,(JYCAAMM_ntop-=1)));
 /* line 108: */
 /* line 109: */
if ( A_VC_EQ(QYCAAMM_sn,(*NL(EYCAAMM_searchname))) )
{ 
 /* line 110: */
if ( MYCAAMM_step_up )
{ 
 /* line 111: */
RYCAAMM = (*(&((*NL(DYCAAMM_sym_search))->Rest)));
} 
else
{ 
 /* line 112: */
RYCAAMM = (*(&((*NL(DYCAAMM_sym_search))->Last)));
} 
} 
else
{ 
 /* line 114: */
if ( MYCAAMM_step_up )
{ 
 /* line 116: */
RYCAAMM = (*NL(CYCAAMM_fwd_symbols));
} 
else
{ 
RYCAAMM = (*NL(BYCAAMM_rev_symbols));
} 
} 
(*NL(DYCAAMM_sym_search)) = RYCAAMM;
 /* line 117: */
for ( ;; )
{ 
 /* line 118: */
SYCAAMM = ((*NL(DYCAAMM_sym_search))!=JBAAAMM_nilsymbol);
if ( SYCAAMM )
{ /* line 119: */
TYCAAMM = (JYCAAMM_ntop>(*(&((*NL(DYCAAMM_sym_search))->Name))).upb);
if ( ! TYCAAMM )
{UYCAAMM = (*(&((*NL(DYCAAMM_sym_search))->Name))) ;
TYCAAMM = A_VC_NE(A_VTRIM(VYCAAMM,(UYCAAMM),A_VTSCRIPT(&(VYCAAMM.upb),(UYCAAMM).upb,1,JYCAAMM_ntop)),QYCAAMM_sn);
}
 /* line 120: */
SYCAAMM = TYCAAMM;
}
 /* line 121: */
if ( !(SYCAAMM) ) break;
 /* line 122: */
if ( MYCAAMM_step_up )
{ 
 /* line 123: */
WYCAAMM = (*(&((*NL(DYCAAMM_sym_search))->Rest)));
} 
else
{ 
 /* line 124: */
WYCAAMM = (*(&((*NL(DYCAAMM_sym_search))->Last)));
} 
(*NL(DYCAAMM_sym_search)) = WYCAAMM;
}
 /* line 125: */
if ( ((*NL(DYCAAMM_sym_search))==JBAAAMM_nilsymbol) )
{ 
XYCAAMM = BCAAAMM_blankname;
} 
else
{ 
XYCAAMM = QYCAAMM_sn;
} 
(*NL(EYCAAMM_searchname)) = XYCAAMM;
 /* line 126: */
 /* line 127: */
LYCAAMM_sym = (*NL(DYCAAMM_sym_search));
} 
else
{ 
 /* line 128: */
if ( A_VC_EQ(Name,(*NL(EYCAAMM_searchname))) )
{ 
 /* line 129: */
 /* line 130: */
LYCAAMM_sym = (*NL(DYCAAMM_sym_search));
} 
else
{ 
LYCAAMM_sym = (*NL(CYCAAMM_fwd_symbols));
 /* line 131: */
for ( ;; )
{ 
YYCAAMM = (LYCAAMM_sym!=JBAAAMM_nilsymbol);
if ( YYCAAMM )
{ /* line 132: */
YYCAAMM = A_VC_NE((*(&(LYCAAMM_sym->Name))),Name);
}
 /* line 133: */
if ( !(YYCAAMM) ) break;
 /* line 134: */
LYCAAMM_sym = (*(&(LYCAAMM_sym->Rest)));
}
 /* line 135: */
} 
} 
 /* line 136: */
 /* line 137: */
ZYCAAMM = LYCAAMM_sym;
} 
A_PROC_EXIT(get_symbol);
return( ZYCAAMM );
} 
#undef NL

A_STATIC A68_VOID  CZCAAMM_set_param(A68_VC  Param_str, void *NonLocals)
#define NL(x) (((DZCAAMM_set_param *)NonLocals)->x)
{ 
A68_120  GZCAAMM;  /* avoid structure result */
A68_120  HZCAAMM_fn;
A68_VC * IZCAAMM;  /* YIELD */
A68_VC * JZCAAMM;  /* YIELD */
A68_VC  KZCAAMM;  /* avoid structure result */
A68_VC * LZCAAMM;  /* YIELD */
A68_VC * MZCAAMM;  /* YIELD */
A68_VC * NZCAAMM;  /* YIELD */
A68_VC * OZCAAMM;  /* YIELD */
A68_VC  PZCAAMM;  /* avoid structure result */
A68_VC * QZCAAMM;  /* YIELD */
A_PROC_ENTRY(set_param);
 /* line 140: */
 /* line 141: */
{ 
TNCAOSI_parse_filename( Param_str, FZCAAMM, NL(Msg), &GZCAAMM );
HZCAAMM_fn = GZCAAMM;
 /* line 143: */
 /* line 144: */
if ( ZDBAAMM_file_exists(HZCAAMM_fn.Filename, NL(Msg)) )
{ 
 /* line 145: */
 /* line 146: */
IZCAAMM = (&(OWCAAMM_exists_symbol->Text)) ;
(*IZCAAMM) = ZCAAAMM_true_string;
} 
else
{ 
 /* line 147: */
JZCAAMM = (&(OWCAAMM_exists_symbol->Text)) ;
(*JZCAAMM) = IDAAAMM_false_string;
} 
 /* line 148: */
 /* line 149: */
DVCAAMM_translate_filename( HZCAAMM_fn.Filename, NL(AYCAAMM_ind), SIAAAMM_diagnose, NL(Msg), &KZCAAMM );
LZCAAMM = (&(QWCAAMM_filename_symbol->Text)) ;
(*LZCAAMM) = KZCAAMM;
 /* line 150: */
MZCAAMM = (&(RWCAAMM_fdirectory_symbol->Text)) ;
(*MZCAAMM) = HZCAAMM_fn.Directory;
 /* line 151: */
NZCAAMM = (&(SWCAAMM_fname_symbol->Text)) ;
(*NZCAAMM) = HZCAAMM_fn.Name;
 /* line 152: */
OZCAAMM = (&(TWCAAMM_ftype_symbol->Text)) ;
(*OZCAAMM) = HZCAAMM_fn.Type;
 /* line 153: */
 /* line 154: */
ZAAAOSI_makervc( Param_str, &PZCAAMM );
QZCAAMM = (&(PWCAAMM_param_symbol->Text)) ;
(*QZCAAMM) = PZCAAMM;
} 
A_PROC_EXIT(set_param);
return;
} 
#undef NL

A_STATIC A68_VOID  TZCAAMM_parse_oscommand(A68_VC  Comtext, void *NonLocals)
#define NL(x) (((UZCAAMM_parse_oscommand *)NonLocals)->x)
{ 
A68_INT  VZCAAMM_ign_cnt;
A68_INT  WZCAAMM_pstart;
A68_BOOL  XZCAAMM_query;
A68_BOOL  YZCAAMM_sense;
A68_BOOL  ZZCAAMM_condition;
A68_BOOL  AADAAMM_inparam;
A68_125  BADAAMM_state;   /* proc value of non-global proc */
A68_43  NADAAMM_analyse_text;   /* proc value of non-global proc */
A_PROC_ENTRY(parse_oscommand);
 /* line 157: */
 /* line 158: */
{ 
VZCAAMM_ign_cnt = 0;
WZCAAMM_pstart = 0;
 /* line 159: */
XZCAAMM_query = A68_FALSE;
YZCAAMM_sense = A68_FALSE;
ZZCAAMM_condition = A68_FALSE;
AADAAMM_inparam = A68_FALSE;
 /* line 161: */
 /* line 162: */
 /* line 163: */
A_CLOSURE( BADAAMM_state, CADAAMM_state, DADAAMM_state );
(( DADAAMM_state * ) ( BADAAMM_state.nonlocals )) -> ZZCAAMM_condition = (&ZZCAAMM_condition);
(( DADAAMM_state * ) ( BADAAMM_state.nonlocals )) -> WZCAAMM_pstart = (&WZCAAMM_pstart);
(( DADAAMM_state * ) ( BADAAMM_state.nonlocals )) -> YZCAAMM_sense = (&YZCAAMM_sense);
 /* line 180: */
A_CLOSURE( NADAAMM_analyse_text, OADAAMM_analyse_text, PADAAMM_analyse_text );
(( PADAAMM_analyse_text * ) ( NADAAMM_analyse_text.nonlocals )) -> GYCAAMM_get_symbol = NL(GYCAAMM_get_symbol);
(( PADAAMM_analyse_text * ) ( NADAAMM_analyse_text.nonlocals )) -> NADAAMM_analyse_text = NADAAMM_analyse_text;
(( PADAAMM_analyse_text * ) ( NADAAMM_analyse_text.nonlocals )) -> XZCAAMM_query = (&XZCAAMM_query);
(( PADAAMM_analyse_text * ) ( NADAAMM_analyse_text.nonlocals )) -> BADAAMM_state = BADAAMM_state;
(( PADAAMM_analyse_text * ) ( NADAAMM_analyse_text.nonlocals )) -> VZCAAMM_ign_cnt = (&VZCAAMM_ign_cnt);
(( PADAAMM_analyse_text * ) ( NADAAMM_analyse_text.nonlocals )) -> ZZCAAMM_condition = (&ZZCAAMM_condition);
(( PADAAMM_analyse_text * ) ( NADAAMM_analyse_text.nonlocals )) -> WZCAAMM_pstart = (&WZCAAMM_pstart);
(( PADAAMM_analyse_text * ) ( NADAAMM_analyse_text.nonlocals )) -> YZCAAMM_sense = (&YZCAAMM_sense);
(( PADAAMM_analyse_text * ) ( NADAAMM_analyse_text.nonlocals )) -> AADAAMM_inparam = (&AADAAMM_inparam);
(( PADAAMM_analyse_text * ) ( NADAAMM_analyse_text.nonlocals )) -> Msg = NL(Msg);
(( PADAAMM_analyse_text * ) ( NADAAMM_analyse_text.nonlocals )) -> BZCAAMM_set_param = NL(BZCAAMM_set_param);
 /* line 277: */
 /* line 278: */
A_CALLPROC(NADAAMM_analyse_text,(Comtext),(Comtext,(NADAAMM_analyse_text).nonlocals));
} 
A_PROC_EXIT(parse_oscommand);
return;
} 
#undef NL

A_STATIC A68_BOOL  PBDAAMM_rev_action(A68_170 * S, void *NonLocals)
#define NL(x) (((QBDAAMM_rev_action *)NonLocals)->x)
{ 
A68_170 ** RBDAAMM;  /* YIELD */
A68_BOOL  SBDAAMM;  /* clause result */
A_PROC_ENTRY(rev_action);
 /* line 283: */
 /* line 284: */
{ 
RBDAAMM = (&(S->Last)) ;
(*RBDAAMM) = (*NL(BYCAAMM_rev_symbols));
 /* line 285: */
(*NL(BYCAAMM_rev_symbols)) = S;
 /* line 286: */
if ( ((*NL(CYCAAMM_fwd_symbols))==JBAAAMM_nilsymbol) )
{ 
(*NL(CYCAAMM_fwd_symbols)) = S;
} 
 /* line 287: */
 /* line 288: */
SBDAAMM = A68_TRUE;
} 
A_PROC_EXIT(rev_action);
return( SBDAAMM );
} 
#undef NL

A_STATIC A68_BOOL  XBDAAMM_com_action(A68_170 * S, void *NonLocals)
#define NL(x) (((YBDAAMM_com_action *)NonLocals)->x)
{ 
A68_BOOL  ZBDAAMM;  /* clause result */
A_PROC_ENTRY(com_action);
 /* line 293: */
 /* line 294: */
{ 
A_CALLPROC(NL(SZCAAMM_parse_oscommand),((*(&(S->Text)))),((*(&(S->Text))),(NL(SZCAAMM_parse_oscommand)).nonlocals));
 /* line 295: */
(*NL(MBDAAMM_continue)) = KXCAAMM_obey_oscommand(NL(Msg));
 /* line 296: */
SOAAOST_flt_if_interrupted(NL(Msg));
 /* line 297: */
 /* line 298: */
ZBDAAMM = (*NL(MBDAAMM_continue));
} 
A_PROC_EXIT(com_action);
return( ZBDAAMM );
} 
#undef NL

A_STATIC A68_VOID  HWCAAMM_generator(A68_BOOL  GWCAAMM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  IWCAAMM;  /* clause result */
A68_VC  JWCAAMM;  /* OPERATORS - dynamic generator */
{ 
JWCAAMM.upb = 0 ;
( GWCAAMM_anonymous? A_VLOC(A68_CHAR ,JWCAAMM): A_VHEAP(A68_CHAR ,JWCAAMM) );
IWCAAMM = JWCAAMM;
} 
*ReturnedValue = (IWCAAMM);
return;
} 
#undef NL

A68_VOID  VWCAAMM_insert_oscommand_item(A68_VC  Item)
{ 
A68_INT  WWCAAMM_top;
A68_VC  XWCAAMM_old;
A68_31  ZWCAAMM_generator;   /* proc value of non-global proc */
A68_VC  EXCAAMM;  /* avoid structure result */
A68_VC  FXCAAMM;  /* OPERATORS - trim index */
A68_VC  GXCAAMM;  /* YIELD */
A68_VC  HXCAAMM;  /* OPERATORS - trim index */
A68_VC  IXCAAMM;  /* YIELD */
A_PROC_ENTRY(insert_oscommand_item);
 /* line 58: */
 /* line 59: */
{ 
WWCAAMM_top = Item.upb;
 /* line 61: */
 /* line 62: */
if ( ((WWCAAMM_top+NWCAAMM_com_pos)>MWCAAMM_com_buf_top) )
{ 
XWCAAMM_old = KWCAAMM_command_buffer;
 /* line 64: */
A_CLOSURE( ZWCAAMM_generator, AXCAAMM_generator, BXCAAMM_generator );
A_CALLPROC(ZWCAAMM_generator,(A68_FALSE, &EXCAAMM),(A68_FALSE, &EXCAAMM,(ZWCAAMM_generator).nonlocals));
KWCAAMM_command_buffer = EXCAAMM;
 /* line 65: */
GXCAAMM = A_VTRIM(FXCAAMM,(KWCAAMM_command_buffer),A_VTSCRIPT(&(FXCAAMM.upb),(KWCAAMM_command_buffer).upb,1,MWCAAMM_com_buf_top)) ;
A_VASSIGN2(XWCAAMM_old,GXCAAMM,A68_CHAR );
 /* line 66: */
 /* line 67: */
MWCAAMM_com_buf_top = KWCAAMM_command_buffer.upb;
} 
 /* line 68: */
IXCAAMM = A_VTRIM(HXCAAMM,(KWCAAMM_command_buffer),A_VTSCRIPT(&(HXCAAMM.upb),(KWCAAMM_command_buffer).upb,(NWCAAMM_com_pos+1),(NWCAAMM_com_pos+WWCAAMM_top))) ;
A_VASSIGN2(Item,IXCAAMM,A68_CHAR );
 /* line 69: */
 /* line 70: */
NWCAAMM_com_pos+=WWCAAMM_top;
} 
A_PROC_EXIT(insert_oscommand_item);
return;
} 
#undef NL

A68_BOOL  KXCAAMM_obey_oscommand(A68_97  Msg)
{ 
A68_VC  LXCAAMM;  /* OPERATORS - trim index */
A68_VC  MXCAAMM_command;
A68_BOOL  NXCAAMM;  /* clause result */
A68_203  OXCAAMM;  /* collateral clause result */
A68_52  RXCAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  SXCAAMM;  /* YIELD */
A68_52  TXCAAMM;  /* OPERATORS - mode -> union mode */
A68_52  UXCAAMM;  /* OPERATORS - mode -> union mode */
A68_56  VXCAAMM;  /* procedure value */
A68_85  WXCAAMM;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(obey_oscommand);
 /* line 73: */
 /* line 74: */
{ 
MXCAAMM_command = A_VTRIM(LXCAAMM,(KWCAAMM_command_buffer),A_VTSCRIPT(&(LXCAAMM.upb),(KWCAAMM_command_buffer).upb,1,NWCAAMM_com_pos));
 /* line 76: */
 /* line 77: */
if ( (NWCAAMM_com_pos==0) )
{ 
 /* line 78: */
NXCAAMM = A68_TRUE;
} 
else
{ 
 /* line 79: */
if ( SIAAAMM_diagnose )
{ 
NWCAAMM_com_pos = 0;
 /* line 80: */
SXCAAMM = QXCAAMM ;
OXCAAMM.data[0] = A_UNITE(RXCAAMM,mode7,7,SXCAAMM);
OXCAAMM.data[1] = A_UNITE(TXCAAMM,mode7,7,MXCAAMM_command);
VXCAAMM.fn.fn_global = LRAAOSL_newline;
VXCAAMM.nonlocals = A68_NIL;
OXCAAMM.data[2] = A_UNITE(UXCAAMM,mode12,12,VXCAAMM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(WXCAAMM,OXCAAMM,3,A68_52 ));
 /* line 81: */
 /* line 82: */
 /* line 83: */
NXCAAMM = A68_TRUE;
} 
else
{ 
NWCAAMM_com_pos = 0;
 /* line 84: */
 /* line 85: */
 /* line 86: */
NXCAAMM = VSCAAMM_obey_osaction(MXCAAMM_command, Msg);
} 
} 
} 
A_PROC_EXIT(obey_oscommand);
return( NXCAAMM );
} 
#undef NL
 /* line 89: */

A68_BOOL  ZXCAAMM_translate_oscommands(A68_VC  Class, A68_97  Msg)
{ 
A68_INT  AYCAAMM_ind;
A68_170 * BYCAAMM_rev_symbols;
A68_170 * CYCAAMM_fwd_symbols;
A68_170 * DYCAAMM_sym_search;
A68_VC  EYCAAMM_searchname;
A68_204  GYCAAMM_get_symbol;   /* proc value of non-global proc */
A68_36  BZCAAMM_set_param;   /* proc value of non-global proc */
A68_43  SZCAAMM_parse_oscommand;   /* proc value of non-global proc */
A68_BOOL  MBDAAMM_continue;
A68_171  OBDAAMM_rev_action;   /* proc value of non-global proc */
A68_171  WBDAAMM_com_action;   /* proc value of non-global proc */
A68_BOOL  ACDAAMM;  /* clause result */
A_PROC_ENTRY(translate_oscommands);
 /* line 90: */
 /* line 91: */
{ 
AYCAAMM_ind = 0;
 /* line 92: */
BYCAAMM_rev_symbols = JBAAAMM_nilsymbol;
 /* line 93: */
CYCAAMM_fwd_symbols = JBAAAMM_nilsymbol;
 /* line 94: */
DYCAAMM_sym_search = JBAAAMM_nilsymbol;
 /* line 95: */
EYCAAMM_searchname = BCAAAMM_blankname;
 /* line 97: */
A_CLOSURE( GYCAAMM_get_symbol, HYCAAMM_get_symbol, IYCAAMM_get_symbol );
(( IYCAAMM_get_symbol * ) ( GYCAAMM_get_symbol.nonlocals )) -> DYCAAMM_sym_search = (&DYCAAMM_sym_search);
(( IYCAAMM_get_symbol * ) ( GYCAAMM_get_symbol.nonlocals )) -> EYCAAMM_searchname = (&EYCAAMM_searchname);
(( IYCAAMM_get_symbol * ) ( GYCAAMM_get_symbol.nonlocals )) -> CYCAAMM_fwd_symbols = (&CYCAAMM_fwd_symbols);
(( IYCAAMM_get_symbol * ) ( GYCAAMM_get_symbol.nonlocals )) -> BYCAAMM_rev_symbols = (&BYCAAMM_rev_symbols);
 /* line 139: */
A_CLOSURE( BZCAAMM_set_param, CZCAAMM_set_param, DZCAAMM_set_param );
(( DZCAAMM_set_param * ) ( BZCAAMM_set_param.nonlocals )) -> Msg = Msg;
(( DZCAAMM_set_param * ) ( BZCAAMM_set_param.nonlocals )) -> AYCAAMM_ind = (&AYCAAMM_ind);
 /* line 156: */
A_CLOSURE( SZCAAMM_parse_oscommand, TZCAAMM_parse_oscommand, UZCAAMM_parse_oscommand );
(( UZCAAMM_parse_oscommand * ) ( SZCAAMM_parse_oscommand.nonlocals )) -> GYCAAMM_get_symbol = GYCAAMM_get_symbol;
(( UZCAAMM_parse_oscommand * ) ( SZCAAMM_parse_oscommand.nonlocals )) -> Msg = Msg;
(( UZCAAMM_parse_oscommand * ) ( SZCAAMM_parse_oscommand.nonlocals )) -> BZCAAMM_set_param = BZCAAMM_set_param;
 /* line 280: */
MBDAAMM_continue = A68_TRUE;
 /* line 282: */
A_CLOSURE( OBDAAMM_rev_action, PBDAAMM_rev_action, QBDAAMM_rev_action );
(( QBDAAMM_rev_action * ) ( OBDAAMM_rev_action.nonlocals )) -> BYCAAMM_rev_symbols = (&BYCAAMM_rev_symbols);
(( QBDAAMM_rev_action * ) ( OBDAAMM_rev_action.nonlocals )) -> CYCAAMM_fwd_symbols = (&CYCAAMM_fwd_symbols);
 /* line 290: */
ALAAAMM_scansymbols(UBDAAMM, OBDAAMM_rev_action);
 /* line 292: */
A_CLOSURE( WBDAAMM_com_action, XBDAAMM_com_action, YBDAAMM_com_action );
(( YBDAAMM_com_action * ) ( WBDAAMM_com_action.nonlocals )) -> SZCAAMM_parse_oscommand = SZCAAMM_parse_oscommand;
(( YBDAAMM_com_action * ) ( WBDAAMM_com_action.nonlocals )) -> MBDAAMM_continue = (&MBDAAMM_continue);
(( YBDAAMM_com_action * ) ( WBDAAMM_com_action.nonlocals )) -> Msg = Msg;
 /* line 300: */
ALAAAMM_scansymbols(Class, WBDAAMM_com_action);
 /* line 301: */
 /* line 302: */
ACDAAMM = MBDAAMM_continue;
} 
A_PROC_EXIT(translate_oscommands);
return( ACDAAMM );
} 
#undef NL

A68_BOOL  ECDAAMM_submit(A68_VC  Dbname, A68_VC  Node, A68_97  Msg)
{ 
A68_BOOL  FCDAAMM;  /* clause result */
A_PROC_ENTRY(submit);
 /* line 305: */
FCDAAMM = JVCAAMM_os_submit(Dbname, Node, Msg);
A_PROC_EXIT(submit);
return( FCDAAMM );
} 
#undef NL

A68_VOID  ICDAAMM_save_file(A68_VC  Name, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_BOOL  JCDAAMM_have_file;
A68_212  KCDAAMM;  /* collateral clause result */
A68_52  LCDAAMM;  /* OPERATORS - mode -> union mode */
A68_52  OCDAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  PCDAAMM;  /* YIELD */
A68_85  QCDAAMM;  /* OPERATORS - istruct -> vector */
A68_VC  RCDAAMM;  /* avoid structure result */
A68_VC  SCDAAMM_save_name;
A68_VC  TCDAAMM;  /* clause result */
A68_214  UCDAAMM;  /* collateral clause result */
A68_52  XCDAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  YCDAAMM;  /* YIELD */
A68_52  ZCDAAMM;  /* OPERATORS - mode -> union mode */
A68_52  CDDAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  DDDAAMM;  /* YIELD */
A68_52  EDDAAMM;  /* OPERATORS - mode -> union mode */
A68_56  FDDAAMM;  /* procedure value */
A68_85  GDDAAMM;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(save_file);
 /* line 308: */
 /* line 309: */
{ 
JCDAAMM_have_file = ZDBAAMM_file_exists(Name, Msg);
 /* line 311: */
 /* line 312: */
if ( JCDAAMM_have_file )
{ 
KCDAAMM.data[0] = A_UNITE(LCDAAMM,mode7,7,Name);
PCDAAMM = NCDAAMM ;
KCDAAMM.data[1] = A_UNITE(OCDAAMM,mode7,7,PCDAAMM);
UJBAOSL_oneline( A_HISVEC(QCDAAMM,KCDAAMM,2,A68_52 ), &RCDAAMM );
SCDAAMM_save_name = RCDAAMM;
 /* line 314: */
WVCAAMM_os_save_file(Name, SCDAAMM_save_name, Msg);
 /* line 315: */
 /* line 316: */
 /* line 317: */
TCDAAMM = SCDAAMM_save_name;
} 
else
{ 
YCDAAMM = WCDAAMM ;
UCDAAMM.data[0] = A_UNITE(XCDAAMM,mode7,7,YCDAAMM);
 /* line 318: */
UCDAAMM.data[1] = A_UNITE(ZCDAAMM,mode7,7,Name);
DDDAAMM = BDDAAMM ;
UCDAAMM.data[2] = A_UNITE(CDDAAMM,mode7,7,DDDAAMM);
FDDAAMM.fn.fn_global = LRAAOSL_newline;
FDDAAMM.nonlocals = A68_NIL;
UCDAAMM.data[3] = A_UNITE(EDDAAMM,mode12,12,FDDAAMM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(GDDAAMM,UCDAAMM,4,A68_52 ));
 /* line 319: */
 /* line 320: */
 /* line 321: */
TCDAAMM = BCAAAMM_blankname;
} 
} 
A_PROC_EXIT(save_file);
*ReturnedValue = (TCDAAMM);
return;
} 
#undef NL

A68_VOID  IDDAAMM_initialise_mm_oscommands(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  VDDAAMM;  /* clause result */
A68_36  WDDAAMM;  /* procedure value */
A68_164  XDDAAMM;  /* procedure value */
A68_163  YDDAAMM;  /* avoid structure result */
A68_VC  ZDDAAMM;  /* avoid structure result */
A_PROC_ENTRY(initialise_mm_oscommands);
 /* line 324: */
 /* line 325: */
{ 
OWCAAMM_exists_symbol = VMAAAMM_define_symbol(KDDAAMM, BCAAAMM_blankname, DJAAAMM_local_tag);
 /* line 326: */
PWCAAMM_param_symbol = VMAAAMM_define_symbol(MDDAAMM, BCAAAMM_blankname, DJAAAMM_local_tag);
 /* line 327: */
QWCAAMM_filename_symbol = VMAAAMM_define_symbol(ODDAAMM, BCAAAMM_blankname, DJAAAMM_local_tag);
 /* line 328: */
RWCAAMM_fdirectory_symbol = VMAAAMM_define_symbol(QDDAAMM, BCAAAMM_blankname, DJAAAMM_local_tag);
 /* line 329: */
SWCAAMM_fname_symbol = VMAAAMM_define_symbol(SDDAAMM, BCAAAMM_blankname, DJAAAMM_local_tag);
 /* line 330: */
TWCAAMM_ftype_symbol = VMAAAMM_define_symbol(UDDAAMM, BCAAAMM_blankname, DJAAAMM_local_tag);
 /* line 331: */
 /* line 332: */
 /* line 333: */
WDDAAMM.fn.fn_global = VWCAAMM_insert_oscommand_item;
WDDAAMM.nonlocals = A68_NIL;
XDDAAMM.fn.fn_global = KXCAAMM_obey_oscommand;
XDDAAMM.nonlocals = A68_NIL;
WUCAAMM_initialise_complink( WDDAAMM, XDDAAMM, Msg, &YDDAAMM );
ATAAAMM_initialise_mm_basics( YDDAAMM, &ZDDAAMM );
VDDAAMM = ZDDAAMM;
} 
A_PROC_EXIT(initialise_mm_oscommands);
*ReturnedValue = (VDDAAMM);
return;
} 
#undef NL

A68_VOID  BEDAAMM_close_oscommands(A68_97  Msg)
{ 
A68_INT  CEDAAMM_filename_ind;
A68_VC  DEDAAMM;  /* avoid structure result */
A_PROC_ENTRY(close_oscommands);
 /* line 336: */
 /* line 337: */
{ 
CEDAAMM_filename_ind = (-1);
 /* line 339: */
DVCAAMM_translate_filename( BCAAAMM_blankname, (&CEDAAMM_filename_ind), SIAAAMM_diagnose, ZLBAOSI_global_msg, &DEDAAMM );
DEDAAMM;
 /* line 341: */
 /* line 342: */
/*SKIP*/;
} 
A_PROC_EXIT(close_oscommands);
return;
} 
#undef NL
 /* line 1: */
 /* line 3: */
 /* line 4: */
 /* line 6: */
void AWCAAMM(void)   /* initialise DECS mm_oscommands */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","./mfiles","-staredit","259U","./a68files/mm_oscommands.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/mm_basics.m","./mfiles/unixcomplink.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_VC  LWCAAMM;  /* avoid structure result */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
SAAAAMM();   /* USE mm_basics */
OSCAAMM();   /* USE unixcomplink */
JFAAOSI();   /* USE messageproc */
PCAAOST();   /* USE osinterface */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/mm/assoc/./a68files/mm_oscommands.a68";
A_config.translation_time = "Tue Apr  4 09:54:49 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "ZVCAAMM (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 09:54:49 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS mm_oscommands);
UEAALIB_a68config(LGAALIB_configinfo, EWCAAMM);
 /* line 47: */
 /* line 48: */
HWCAAMM_generator( A68_TRUE, &LWCAAMM );
KWCAAMM_command_buffer = LWCAAMM;
 /* line 49: */
MWCAAMM_com_buf_top = 0;
NWCAAMM_com_pos = 0;
 /* line 50: */
OWCAAMM_exists_symbol = (A68_170 *)A68_NIL;
 /* line 51: */
PWCAAMM_param_symbol = (A68_170 *)A68_NIL;
 /* line 52: */
QWCAAMM_filename_symbol = (A68_170 *)A68_NIL;
 /* line 53: */
RWCAAMM_fdirectory_symbol = (A68_170 *)A68_NIL;
 /* line 54: */
SWCAAMM_fname_symbol = (A68_170 *)A68_NIL;
 /* line 55: */
TWCAAMM_ftype_symbol = (A68_170 *)A68_NIL;
 /* line 57: */
 /* line 72: */
 /* line 88: */
 /* line 304: */
 /* line 307: */
 /* line 323: */
 /* line 335: */
 /* line 344: */
 /* line 345: */
 /* line 347: */
/*SKIP*/;
A_PROC_EXIT(DECS mm_oscommands);
} 
#undef NL
/* end of translation of ./a68files/mm_oscommands.a68 */
