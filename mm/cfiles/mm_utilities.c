
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
/* UNAME:DEDAAMM */
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
struct A68t144{
A68_VC  Context;
A68_VC  Import;
};
typedef struct A68t144  A68_144 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t146 ;

A_PROCEDURE(A68_VOID ,A68t145,(struct A68t146 ),(struct A68t146 ,void *));
typedef struct A68t145  A68_145 ;    /* PROC(MODE146) VOID */
struct A68t146 { A68_INT mode; union {
A68_VC  mode1;
struct A68t32  mode2;
struct A68t54  mode3;
struct A68t53  mode4;
} data; };
typedef struct A68t146  A68_146 ;    /* UNION(REF MODE26,REF MODE32,REF MODE54,REF MODE53)  */

A_PROCEDURE(A68_INT ,A68t147,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t147  A68_147 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_BITS ,A68t148,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t148  A68_148 ;    /* PROC(BITS,BITS) BITS */
struct A68t150 ;

A_PROCEDURE(A68_VOID ,A68t149,(struct A68t150 ,A68_INT ),(struct A68t150 ,A68_INT ,void *));
typedef struct A68t149  A68_149 ;    /* PROC(MODE150,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t150,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t150  A68_150 ;    /* PROC(CHAR) VOID */
struct A68t152 ;

A_PROCEDURE(A68_INT ,A68t151,(struct A68t152 ),(struct A68t152 ,void *));
typedef struct A68t151  A68_151 ;    /* PROC(MODE152) INT */

A_PROCEDURE(A68_CHAR ,A68t152,(void),(void *));
typedef struct A68t152  A68_152 ;    /* PROC CHAR */

A_PROCEDURE(A68_INT ,A68t153,(A68_VC ,A68_BOOL *),(A68_VC ,A68_BOOL *,void *));
typedef struct A68t153  A68_153 ;    /* PROC(MODE26,REF BOOL) INT */

A_PROCEDURE(A68_INT ,A68t154,(A68_INT ),(A68_INT ,void *));
typedef struct A68t154  A68_154 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_VOID ,A68t155,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t155  A68_155 ;    /* PROC(INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t156,(A68_VC *),(A68_VC *,void *));
typedef struct A68t156  A68_156 ;    /* PROC REF MODE26 */

A_PROCEDURE(A68_INT ,A68t157,(A68_INT ,A68_INT ,A68_BOOL *),(A68_INT ,A68_INT ,A68_BOOL *,void *));
typedef struct A68t157  A68_157 ;    /* PROC(INT,INT,REF BOOL) INT */

A_PROCEDURE(A68_BOOL ,A68t158,(A68_VC ,A68_INT *,struct A68t97 ),(A68_VC ,A68_INT *,struct A68t97 ,void *));
typedef struct A68t158  A68_158 ;    /* PROC(MODE26,REF INT,MODE97) BOOL */

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
struct A68t100  Messages;
A68_BOOL * Initialised;
struct A68t161  Setup;
};
typedef struct A68t160  A68_160 ;    /* STRUCT(MODE26,REF MODE100,REF BOOL,MODE161)  */

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
struct A68t98  mode1;
struct A68t101  mode2;
} data; };
typedef struct A68t168  A68_168 ;    /* UNION(MODE98,MODE101)  */

A_PROCEDURE(A68_INT ,A68t169,(struct A68t98 ),(struct A68t98 ,void *));
typedef struct A68t169  A68_169 ;    /* PROC(MODE98) INT */

A_PROCEDURE(A68_VOID ,A68t170,(A68_INT ,struct A68t160 ,struct A68t98 *),(A68_INT ,struct A68t160 ,struct A68t98 *,void *));
typedef struct A68t170  A68_170 ;    /* PROC(INT,MODE160) MODE98 */

A_PROCEDURE(A68_BOOL ,A68t171,(struct A68t98 ,struct A68t160 ),(struct A68t98 ,struct A68t160 ,void *));
typedef struct A68t171  A68_171 ;    /* PROC(MODE98,MODE160) BOOL */

A_PROCEDURE(A68_VOID ,A68t172,(struct A68t98 ,struct A68t46 ,struct A68t101 *),(struct A68t98 ,struct A68t46 ,struct A68t101 *,void *));
typedef struct A68t172  A68_172 ;    /* PROC(MODE98,MODE46) MODE101 */
A_VECTOR(struct A68t175 ,A68t174);
typedef struct A68t174  A68_174 ;    /* VECTOR [] MODE175 */
struct A68t173{
A68_BITS  Type;
A_PAD_BITS(PAD_36)
struct A68t174  Elements;
};
typedef struct A68t173  A68_173 ;    /* STRUCT(BITS,REF MODE174)  */
struct A68t175 { A68_INT mode; union {
A68_INT * mode1;
struct A68t173  mode2;
} data; };
typedef struct A68t175  A68_175 ;    /* UNION(REF INT,MODE173)  */
struct A68t176{
A68_INT  Sort;
A_PAD_INT(PAD_37)
A68_VC  Value;
};
typedef struct A68t176  A68_176 ;    /* STRUCT(INT,REF MODE26)  */
A_VECTOR(struct A68t176 ,A68t177);
typedef struct A68t177  A68_177 ;    /* VECTOR [] MODE176 */
A_VECTOR(struct A68t178 ,A68t180);
typedef struct A68t180  A68_180 ;    /* VECTOR [] MODE178 */
struct A68t179{
A68_INT  Choice;
A_PAD_INT(PAD_38)
struct A68t180  Params;
};
typedef struct A68t179  A68_179 ;    /* STRUCT(INT,REF MODE180)  */
struct A68t178 { A68_INT mode; union {
struct A68t179  mode1;
struct A68t176  mode2;
} data; };
typedef struct A68t178  A68_178 ;    /* UNION(MODE179,MODE176)  */

A_PROCEDURE(A68_VOID ,A68t182,(struct A68t97 ,A68_VC *),(struct A68t97 ,A68_VC *,void *));
typedef struct A68t182  A68_182 ;    /* PROC(MODE97) REF MODE26 */
struct A68t181 { A68_INT mode; union {
struct A68t182  mode1;
A68_INT * mode2;
struct A68t173  mode3;
} data; };
typedef struct A68t181  A68_181 ;    /* UNION(MODE182,REF INT,MODE173)  */
struct A68t183{
A68_INT * Sort;
struct A68t181  Reader;
A68_VC  Description;
A68_VC  Help;
};
typedef struct A68t183  A68_183 ;    /* STRUCT(REF INT,MODE181,REF MODE26,REF MODE26)  */
struct A68t184{
struct A68t183  Rule;
struct A68t184 * Rest;
};
typedef struct A68t184  A68_184 ;    /* STRUCT(MODE183,REF MODE184)  */

A_PROCEDURE(A68_BOOL ,A68t185,(struct A68t173 ),(struct A68t173 ,void *));
typedef struct A68t185  A68_185 ;    /* PROC(MODE173) BOOL */

A_PROCEDURE(A68_VOID ,A68t186,(struct A68t174 ,struct A68t173 *),(struct A68t174 ,struct A68t173 *,void *));
typedef struct A68t186  A68_186 ;    /* PROC(MODE174) MODE173 */

A_PROCEDURE(A68_VOID ,A68t187,(struct A68t175 ,struct A68t173 *),(struct A68t175 ,struct A68t173 *,void *));
typedef struct A68t187  A68_187 ;    /* PROC(MODE175) MODE173 */
struct A68t189 ;

A_PROCEDURE(A68_VOID ,A68t188,(struct A68t175 ,struct A68t189 ,A68_VC *),(struct A68t175 ,struct A68t189 ,A68_VC *,void *));
typedef struct A68t188  A68_188 ;    /* PROC(MODE175,REF MODE189) REF MODE26 */
A_VECTOR(struct A68t183 ,A68t189);
typedef struct A68t189  A68_189 ;    /* VECTOR [] MODE183 */

A_PROCEDURE(A68_VOID ,A68t190,(struct A68t34 *,struct A68t189 ),(struct A68t34 *,struct A68t189 ,void *));
typedef struct A68t190  A68_190 ;    /* PROC(REF MODE34,REF MODE189) VOID */
struct A68t192 ;

A_PROCEDURE(struct A68t184 *,A68t191,(struct A68t184 *,struct A68t192 ),(struct A68t184 *,struct A68t192 ,void *));
typedef struct A68t191  A68_191 ;    /* PROC(REF MODE184,MODE192) REF MODE184 */
A_VECTOR(struct A68t193 ,A68t192);
typedef struct A68t192  A68_192 ;    /* VECTOR [] MODE193 */
struct A68t193{
A68_INT * No;
struct A68t181  New;
A68_VC  Name;
A68_VC  Help;
};
typedef struct A68t193  A68_193 ;    /* STRUCT(REF INT,MODE181,MODE26,MODE26)  */

A_PROCEDURE(A68_VOID ,A68t194,(struct A68t178 ,struct A68t177 *),(struct A68t178 ,struct A68t177 *,void *));
typedef struct A68t194  A68_194 ;    /* PROC(MODE178) REF MODE177 */

A_PROCEDURE(A68_BOOL ,A68t195,(A68_CHAR ,A68_VC ),(A68_CHAR ,A68_VC ,void *));
typedef struct A68t195  A68_195 ;    /* PROC(CHAR,MODE26) BOOL */

A_PROCEDURE(A68_BOOL ,A68t196,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t196  A68_196 ;    /* PROC(CHAR) BOOL */

A_PROCEDURE(A68_CHAR ,A68t197,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t197  A68_197 ;    /* PROC(CHAR) CHAR */

A_PROCEDURE(A68_INT ,A68t199,(A68_VC *,struct A68t97 ),(A68_VC *,struct A68t97 ,void *));
typedef struct A68t199  A68_199 ;    /* PROC(REF REF MODE26,MODE97) INT */
struct A68t198{
A68_VC  Rdbuffer;
struct A68t199  Rdline;
A68_INT  Rdcharend;
A_PAD_INT(PAD_39)
A68_INT  Rdcharno;
A_PAD_INT(PAD_40)
A68_INT  Start_of_word;
A_PAD_INT(PAD_41)
struct A68t200 * Stack;
};
typedef struct A68t198  A68_198 ;    /* STRUCT(REF MODE26,MODE199,INT,INT,INT,REF MODE200)  */
struct A68t200{
A68_VC  Line;
struct A68t200 * Rest;
};
typedef struct A68t200  A68_200 ;    /* STRUCT(REF MODE26,REF MODE200)  */

A_PROCEDURE(struct A68t198 *,A68t201,(A68_VC ,struct A68t199 ),(A68_VC ,struct A68t199 ,void *));
typedef struct A68t201  A68_201 ;    /* PROC(REF MODE26,MODE199) REF MODE198 */

A_PROCEDURE(A68_VOID ,A68t202,(struct A68t198 ),(struct A68t198 ,void *));
typedef struct A68t202  A68_202 ;    /* PROC(MODE198) VOID */

A_PROCEDURE(A68_VOID ,A68t203,(struct A68t164 *),(struct A68t164 *,void *));
typedef struct A68t203  A68_203 ;    /* PROC REF MODE164 */

A_PROCEDURE(A68_BOOL ,A68t204,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t204  A68_204 ;    /* PROC(MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t205,(struct A68t189 ,struct A68t175 ,struct A68t97 ,struct A68t178 *),(struct A68t189 ,struct A68t175 ,struct A68t97 ,struct A68t178 *,void *));
typedef struct A68t205  A68_205 ;    /* PROC(REF MODE189,MODE175,MODE97) MODE178 */

A_PROCEDURE(A68_CHAR ,A68t206,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t206  A68_206 ;    /* PROC(MODE97) CHAR */

A_PROCEDURE(A68_VOID ,A68t207,(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t207  A68_207 ;    /* PROC(REF MODE26,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t208,(struct A68t176 ,A68_INT ,struct A68t97 ),(struct A68t176 ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t208  A68_208 ;    /* PROC(MODE176,INT,MODE97) VOID */
struct A68t209{
A68_BOOL  Get_first;
A_PAD_BOOL(PAD_42)
A68_BOOL  Check;
A_PAD_BOOL(PAD_43)
};
typedef struct A68t209  A68_209 ;    /* STRUCT(BOOL,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t210,(struct A68t209 ,A68_VC ,struct A68t97 ,A68_VC *),(struct A68t209 ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t210  A68_210 ;    /* PROC(MODE209,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t211,(A68_CHAR ,struct A68t97 ,A68_VC *),(A68_CHAR ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t211  A68_211 ;    /* PROC(CHAR,MODE97) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t212,(struct A68t176 ),(struct A68t176 ,void *));
typedef struct A68t212  A68_212 ;    /* PROC(MODE176) BOOL */

A_PROCEDURE(A68_VOID ,A68t213,(struct A68t176 ,struct A68t97 ,A68_VC *),(struct A68t176 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t213  A68_213 ;    /* PROC(MODE176,MODE97) REF MODE26 */
struct A68t214{
A68_INT  C;
A_PAD_INT(PAD_44)
};
typedef struct A68t214  A68_214 ;    /* STRUCT(INT)  */
struct A68t215{
A68_BITS  A;
A_PAD_BITS(PAD_45)
};
typedef struct A68t215  A68_215 ;    /* STRUCT(BITS)  */

A_PROCEDURE(A68_VOID ,A68t217,(A68_VC ,struct A68t178 ,struct A68t97 ),(A68_VC ,struct A68t178 ,struct A68t97 ,void *));
typedef struct A68t217  A68_217 ;    /* PROC(REF MODE26,MODE178,MODE97) VOID */
struct A68t216{
A68_VC  Parameter;
struct A68t217  Proc;
};
typedef struct A68t216  A68_216 ;    /* STRUCT(REF MODE26,MODE217)  */

A_PROCEDURE(A68_VOID ,A68t219,(struct A68t178 ,struct A68t97 ),(struct A68t178 ,struct A68t97 ,void *));
typedef struct A68t219  A68_219 ;    /* PROC(MODE178,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t220,(struct A68t177 ,struct A68t97 ),(struct A68t177 ,struct A68t97 ,void *));
typedef struct A68t220  A68_220 ;    /* PROC(REF MODE177,MODE97) VOID */
struct A68t218 { A68_INT mode; union {
struct A68t216  mode1;
struct A68t219  mode2;
struct A68t220  mode3;
} data; };
typedef struct A68t218  A68_218 ;    /* UNION(MODE216,MODE219,MODE220)  */
struct A68t221 { A68_INT mode; union {
struct A68t222 * mode1;
struct A68t223 * mode2;
struct A68t224 * mode3;
} data; };
typedef struct A68t221  A68_221 ;    /* UNION(REF MODE222,REF MODE223,REF MODE224)  */
struct A68t222 ;

A_PROCEDURE(A68_VOID ,A68t227,(struct A68t222 *,struct A68t34 *),(struct A68t222 *,struct A68t34 *,void *));
typedef struct A68t227  A68_227 ;    /* PROC(REF MODE222,REF MODE34) VOID */
struct A68t226 { A68_INT mode; union {
A68_VC  mode1;
struct A68t164  mode2;
struct A68t227  mode3;
} data; };
typedef struct A68t226  A68_226 ;    /* UNION(REF MODE26,REF MODE164,MODE227)  */
struct A68t222{
A68_VC  Name;
A68_VC  Abreviation;
struct A68t175  Parameter;
struct A68t215  Access;
struct A68t214  Continuation;
struct A68t226  Help;
struct A68t218  Command;
};
typedef struct A68t222  A68_222 ;    /* STRUCT(REF MODE26,REF MODE26,MODE175,MODE215,MODE214,MODE226,MODE218)  */
A_VECTOR(struct A68t221 ,A68t225);
typedef struct A68t225  A68_225 ;    /* VECTOR [] MODE221 */
struct A68t223{
struct A68t222 * Group;
struct A68t225  Commands;
};
typedef struct A68t223  A68_223 ;    /* STRUCT(REF MODE222,REF MODE225)  */
struct A68t224{
struct A68t222 * Prelude;
A68_VC  Context;
A68_VC * Prompt;
struct A68t225  Locals;
struct A68t225  Globals;
struct A68t222 * Postlude;
};
typedef struct A68t224  A68_224 ;    /* STRUCT(REF MODE222,REF MODE26,REF REF MODE26,REF MODE225,REF MODE225,REF MODE222)  */
struct A68t228{
struct A68t224 * Current_context;
A68_INT  Depth;
A_PAD_INT(PAD_46)
struct A68t164  Input_lines;
struct A68t228 * Caller;
};
typedef struct A68t228  A68_228 ;    /* STRUCT(REF MODE224,INT,REF MODE164,REF MODE228)  */
struct A68t229 ;

A_PROCEDURE(A68_VOID ,A68t230,(struct A68t229 *,struct A68t222 *,struct A68t178 ,struct A68t97 ,struct A68t214 *),(struct A68t229 *,struct A68t222 *,struct A68t178 ,struct A68t97 ,struct A68t214 *,void *));
typedef struct A68t230  A68_230 ;    /* PROC(REF MODE229,REF MODE222,MODE178,MODE97) MODE214 */

A_PROCEDURE(A68_VOID ,A68t231,(struct A68t164 ),(struct A68t164 ,void *));
typedef struct A68t231  A68_231 ;    /* PROC(REF MODE164) VOID */
struct A68t233 ;

A_PROCEDURE(A68_VOID ,A68t232,(struct A68t233 ),(struct A68t233 ,void *));
typedef struct A68t232  A68_232 ;    /* PROC(MODE233) VOID */
struct A68t229{
struct A68t228 * Stack;
struct A68t189  Analysers;
A68_BOOL  Hidden;
A_PAD_BOOL(PAD_47)
A68_BOOL  Private;
A_PAD_BOOL(PAD_48)
A68_BOOL  Secret;
A_PAD_BOOL(PAD_49)
struct A68t230  Caller;
struct A68t231  Report_error;
struct A68t232  Set_default_msg;
struct A68t97  Abort;
};
typedef struct A68t229  A68_229 ;    /* STRUCT(REF MODE228,REF MODE189,BOOL,BOOL,BOOL,MODE230,MODE231,MODE232,MODE97)  */
struct A68t233 { A68_INT mode; union {
struct A68t97  mode1;
} data; };
typedef struct A68t233  A68_233 ;    /* UNION(MODE97,VOID)  */

A_PROCEDURE(A68_BOOL ,A68t234,(struct A68t214 ,struct A68t214 ),(struct A68t214 ,struct A68t214 ,void *));
typedef struct A68t234  A68_234 ;    /* PROC(MODE214,MODE214) BOOL */

A_PROCEDURE(A68_VOID ,A68t235,(struct A68t225 ,struct A68t225 ,struct A68t225 *),(struct A68t225 ,struct A68t225 ,struct A68t225 *,void *));
typedef struct A68t235  A68_235 ;    /* PROC(MODE225,MODE225) REF MODE225 */

A_PROCEDURE(A68_VOID ,A68t236,(struct A68t225 ,struct A68t221 ,struct A68t225 *),(struct A68t225 ,struct A68t221 ,struct A68t225 *,void *));
typedef struct A68t236  A68_236 ;    /* PROC(MODE225,MODE221) REF MODE225 */

A_PROCEDURE(A68_VOID ,A68t237,(struct A68t225 *,struct A68t225 ,struct A68t225 *),(struct A68t225 *,struct A68t225 ,struct A68t225 *,void *));
typedef struct A68t237  A68_237 ;    /* PROC(REF REF MODE225,MODE225) REF MODE225 */

A_PROCEDURE(A68_VOID ,A68t238,(struct A68t225 *,struct A68t221 ,struct A68t225 *),(struct A68t225 *,struct A68t221 ,struct A68t225 *,void *));
typedef struct A68t238  A68_238 ;    /* PROC(REF REF MODE225,MODE221) REF MODE225 */

A_PROCEDURE(A68_VOID ,A68t239,(struct A68t225 ,struct A68t225 *),(struct A68t225 ,struct A68t225 *,void *));
typedef struct A68t239  A68_239 ;    /* PROC(MODE225) REF MODE225 */

A_PROCEDURE(A68_VOID ,A68t240,(struct A68t221 ,struct A68t225 *),(struct A68t221 ,struct A68t225 *,void *));
typedef struct A68t240  A68_240 ;    /* PROC(MODE221) REF MODE225 */

A_PROCEDURE(struct A68t223 *,A68t241,(A68_VC ,A68_VC ,struct A68t215 ,struct A68t225 ),(A68_VC ,A68_VC ,struct A68t215 ,struct A68t225 ,void *));
typedef struct A68t241  A68_241 ;    /* PROC(MODE26,MODE26,MODE215,MODE225) REF MODE223 */

A_PROCEDURE(struct A68t224 *,A68t242,(struct A68t222 *,A68_VC ,A68_VC *,struct A68t225 ,struct A68t225 ,struct A68t218 ),(struct A68t222 *,A68_VC ,A68_VC *,struct A68t225 ,struct A68t225 ,struct A68t218 ,void *));
typedef struct A68t242  A68_242 ;    /* PROC(REF MODE222,MODE26,REF REF MODE26,REF MODE225,REF MODE225,MODE218) REF MODE224 */

A_PROCEDURE(A68_VOID ,A68t243,(struct A68t229 *,struct A68t34 *,A68_VC ,A68_BOOL ,struct A68t97 ),(struct A68t229 *,struct A68t34 *,A68_VC ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t243  A68_243 ;    /* PROC(REF MODE229,REF MODE34,REF MODE26,BOOL,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t244,(struct A68t229 *,struct A68t34 *,A68_BOOL ,A68_BOOL ,struct A68t97 ),(struct A68t229 *,struct A68t34 *,A68_BOOL ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t244  A68_244 ;    /* PROC(REF MODE229,REF MODE34,BOOL,BOOL,MODE97) VOID */

A_PROCEDURE(struct A68t229 *,A68t245,(struct A68t231 ,struct A68t232 ,struct A68t97 ,struct A68t230 ,struct A68t184 *,struct A68t224 *,struct A68t178 ),(struct A68t231 ,struct A68t232 ,struct A68t97 ,struct A68t230 ,struct A68t184 *,struct A68t224 *,struct A68t178 ,void *));
typedef struct A68t245  A68_245 ;    /* PROC(MODE231,MODE232,MODE97,MODE230,REF MODE184,REF MODE224,MODE178) REF MODE229 */

A_PROCEDURE(A68_VOID ,A68t246,(struct A68t229 *,struct A68t214 *),(struct A68t229 *,struct A68t214 *,void *));
typedef struct A68t246  A68_246 ;    /* PROC(REF MODE229) MODE214 */

A_PROCEDURE(A68_VOID ,A68t247,(A68_INT ,A68_VC ,struct A68t97 ),(A68_INT ,A68_VC ,struct A68t97 ,void *));
typedef struct A68t247  A68_247 ;    /* PROC(INT,MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t248,(A68_VC ,A68_VC ,struct A68t196 ,struct A68t97 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t196 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t248  A68_248 ;    /* PROC(REF MODE26,MODE26,MODE196,MODE97) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t249,(A68_VC ),(A68_VC ,void *));
typedef struct A68t249  A68_249 ;    /* PROC(REF MODE26) BOOL */

A_PROCEDURE(A68_BOOL ,A68t250,(A68_INT *,struct A68t97 ),(A68_INT *,struct A68t97 ,void *));
typedef struct A68t250  A68_250 ;    /* PROC(REF INT,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t251,(struct A68t209 ,struct A68t97 ,A68_VC *),(struct A68t209 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t251  A68_251 ;    /* PROC(MODE209,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t252,(A68_BOOL ,struct A68t97 ,A68_VC *),(A68_BOOL ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t252  A68_252 ;    /* PROC(BOOL,MODE97) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t253,(struct A68t176 ,struct A68t97 ),(struct A68t176 ,struct A68t97 ,void *));
typedef struct A68t253  A68_253 ;    /* PROC(MODE176,MODE97) INT */

A_PROCEDURE(A68_VOID ,A68t254,(struct A68t176 ,A68_VC ,struct A68t97 ,struct A68t120 *),(struct A68t176 ,A68_VC ,struct A68t97 ,struct A68t120 *,void *));
typedef struct A68t254  A68_254 ;    /* PROC(MODE176,MODE26,MODE97) MODE120 */

A_PROCEDURE(A68_VOID ,A68t255,(struct A68t177 ,A68_INT *,A68_VC ,struct A68t97 ,struct A68t144 *),(struct A68t177 ,A68_INT *,A68_VC ,struct A68t97 ,struct A68t144 *,void *));
typedef struct A68t255  A68_255 ;    /* PROC(REF MODE177,REF INT,REF MODE26,MODE97) MODE144 */

A_PROCEDURE(A68_VOID ,A68t256,(struct A68t176 ,A68_BOOL *,A68_VC ,struct A68t97 ,A68_VC *),(struct A68t176 ,A68_BOOL *,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t256  A68_256 ;    /* PROC(MODE176,REF BOOL,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t257,(struct A68t176 ,struct A68t97 ,struct A68t46 ),(struct A68t176 ,struct A68t97 ,struct A68t46 ,void *));
typedef struct A68t257  A68_257 ;    /* PROC(MODE176,MODE97,MODE46) INT */
struct A68t258{
A68_INT  Lwb;
A_PAD_INT(PAD_50)
A68_INT  Upb;
A_PAD_INT(PAD_51)
};
typedef struct A68t258  A68_258 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t259,(struct A68t176 ,struct A68t258 ,struct A68t97 ,struct A68t258 *),(struct A68t176 ,struct A68t258 ,struct A68t97 ,struct A68t258 *,void *));
typedef struct A68t259  A68_259 ;    /* PROC(MODE176,MODE258,MODE97) MODE258 */

A_PROCEDURE(A68_VOID ,A68t260,(A68_CHAR ,A68_VC ,struct A68t97 ,A68_VC *),(A68_CHAR ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t260  A68_260 ;    /* PROC(CHAR,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_CHAR ,A68t261,(struct A68t176 ,struct A68t97 ),(struct A68t176 ,struct A68t97 ,void *));
typedef struct A68t261  A68_261 ;    /* PROC(MODE176,MODE97) CHAR */

A_PROCEDURE(struct A68t184 *,A68t262,(void),(void *));
typedef struct A68t262  A68_262 ;    /* PROC REF MODE184 */
struct A68t263{
A68_BOOL  Logging;
A_PAD_BOOL(PAD_52)
A68_BOOL  Outputing;
A_PAD_BOOL(PAD_53)
A68_BOOL  Seeing_in;
A_PAD_BOOL(PAD_54)
A68_BOOL  Seeing_out;
A_PAD_BOOL(PAD_55)
A68_BOOL  Paging;
A_PAD_BOOL(PAD_56)
A68_BOOL  Clock;
A_PAD_BOOL(PAD_57)
A68_BOOL  Screen_output;
A_PAD_BOOL(PAD_58)
A68_INT  Width;
A_PAD_INT(PAD_59)
A68_INT  Page_count;
A_PAD_INT(PAD_60)
A68_INT  Page_length;
A_PAD_INT(PAD_61)
A68_INT  Eof_count;
A_PAD_INT(PAD_62)
struct A68t198 * Standard_reader;
struct A68t264 * Infile;
struct A68t156  Prompt;
struct A68t92 * Logfile;
struct A68t92 * Outfile;
};
typedef struct A68t263  A68_263 ;    /* STRUCT(BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,INT,INT,INT,INT,REF MODE198,REF MODE264,MODE156,REF MODE92,REF MODE92)  */
struct A68t264{
struct A68t92 * File;
A68_BOOL  Suspended;
A_PAD_BOOL(PAD_63)
A68_INT  Number;
A_PAD_INT(PAD_64)
A68_VC  Name;
struct A68t198 * Reader;
struct A68t264 * Previous;
};
typedef struct A68t264  A68_264 ;    /* STRUCT(REF MODE92,BOOL,INT,REF MODE26,REF MODE198,REF MODE264)  */

A_PROCEDURE(struct A68t263 *,A68t265,(void),(void *));
typedef struct A68t265  A68_265 ;    /* PROC REF MODE263 */

A_PROCEDURE(A68_VOID ,A68t266,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t266  A68_266 ;    /* PROC(REF MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t267,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t267  A68_267 ;    /* PROC(MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t268,(A68_INT ,struct A68t97 ),(A68_INT ,struct A68t97 ,void *));
typedef struct A68t268  A68_268 ;    /* PROC(INT,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t269,(struct A68t156 ),(struct A68t156 ,void *));
typedef struct A68t269  A68_269 ;    /* PROC(MODE156) VOID */
struct A68t272{
A68_CHAR  Mode;
A_PAD_CHAR(PAD_65)
A68_CHAR  Value;
A_PAD_CHAR(PAD_66)
};
typedef struct A68t272  A68_272 ;    /* STRUCT(CHAR,CHAR)  */
struct A68t270{
struct A68t271 * Module;
struct A68t272  Star;
struct A68t270 * Rest;
};
typedef struct A68t270  A68_270 ;    /* STRUCT(REF MODE271,MODE272,REF MODE270)  */
A_VECTOR(struct A68t274 ,A68t273);
typedef struct A68t273  A68_273 ;    /* VECTOR [] MODE274 */
struct A68t274{
A68_VC  Name;
A68_VC  Value;
A68_VC  Initvalue;
struct A68t275 * Default;
A68_BOOL  Permanent;
A_PAD_BOOL(PAD_67)
A68_BITS  Marker;
A_PAD_BITS(PAD_68)
};
typedef struct A68t274  A68_274 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE275,BOOL,BITS)  */
struct A68t271{
A68_VC  Name;
A68_VC  Filename;
A68_BOOL  Decs;
A_PAD_BOOL(PAD_69)
A68_BOOL  Recursive;
A_PAD_BOOL(PAD_70)
A68_BOOL  Analysed;
A_PAD_BOOL(PAD_71)
A68_BITS  State;
A_PAD_BITS(PAD_72)
struct A68t273  Attributes;
A68_INT  Level;
A_PAD_INT(PAD_73)
A68_INT  Number;
A_PAD_INT(PAD_74)
A68_INT  Marker;
A_PAD_INT(PAD_75)
struct A68t270 * Uses;
struct A68t270 * Usedby;
};
typedef struct A68t271  A68_271 ;    /* STRUCT(REF MODE26,REF MODE26,BOOL,BOOL,BOOL,BITS,REF MODE273,INT,INT,INT,REF MODE270,REF MODE270)  */
struct A68t275{
A68_VC  Name;
A68_VC  Text;
A68_BITS  Tags;
A_PAD_BITS(PAD_76)
struct A68t275 * Last;
struct A68t275 * Rest;
};
typedef struct A68t275  A68_275 ;    /* STRUCT(REF MODE26,REF MODE26,BITS,REF MODE275,REF MODE275)  */

A_PROCEDURE(A68_BOOL ,A68t276,(struct A68t275 *),(struct A68t275 *,void *));
typedef struct A68t276  A68_276 ;    /* PROC(REF MODE275) BOOL */
struct A68t278 ;

A_PROCEDURE(A68_VOID ,A68t277,(struct A68t278 ,A68_VC *),(struct A68t278 ,A68_VC *,void *));
typedef struct A68t277  A68_277 ;    /* PROC(MODE278) REF MODE26 */
struct A68t278{
A68_VC  Operating_system;
A68_VC  Star_chars;
A68_VC  Edit_command;
A68_VC  Exe_dir;
A68_VC  Heap_size;
A68_BOOL  Case_sensitive;
A_PAD_BOOL(PAD_77)
};
typedef struct A68t278  A68_278 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26,REF MODE26,BOOL)  */
A_VECTOR(struct A68t275 **,A68t279);
typedef struct A68t279  A68_279 ;    /* VECTOR [] REF REF MODE275 */

A_PROCEDURE(A68_VOID ,A68t280,(struct A68t120 ,A68_VC *),(struct A68t120 ,A68_VC *,void *));
typedef struct A68t280  A68_280 ;    /* PROC(MODE120) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t281,(A68_VC ,A68_INT ,struct A68t97 ),(A68_VC ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t281  A68_281 ;    /* PROC(MODE26,INT,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t282,(A68_VC ,A68_VC ,A68_VC *),(A68_VC ,A68_VC ,A68_VC *,void *));
typedef struct A68t282  A68_282 ;    /* PROC(MODE26,MODE26) REF MODE26 */

A_PROCEDURE(struct A68t275 *,A68t283,(A68_VC ,A68_VC ,A68_BITS ),(A68_VC ,A68_VC ,A68_BITS ,void *));
typedef struct A68t283  A68_283 ;    /* PROC(MODE26,REF MODE26,BITS) REF MODE275 */

A_PROCEDURE(A68_INT ,A68t284,(A68_VC ),(A68_VC ,void *));
typedef struct A68t284  A68_284 ;    /* PROC(REF MODE26) INT */

A_PROCEDURE(struct A68t275 *,A68t285,(A68_VC ,struct A68t276 ),(A68_VC ,struct A68t276 ,void *));
typedef struct A68t285  A68_285 ;    /* PROC(MODE26,MODE276) REF MODE275 */

A_PROCEDURE(struct A68t275 *,A68t286,(A68_VC ),(A68_VC ,void *));
typedef struct A68t286  A68_286 ;    /* PROC(MODE26) REF MODE275 */

A_PROCEDURE(A68_VOID ,A68t287,(struct A68t275 *),(struct A68t275 *,void *));
typedef struct A68t287  A68_287 ;    /* PROC(REF MODE275) VOID */

A_PROCEDURE(A68_BOOL ,A68t288,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t288  A68_288 ;    /* PROC(MODE26,BOOL) BOOL */

A_PROCEDURE(A68_VOID ,A68t289,(struct A68t270 *,A68_INT ),(struct A68t270 *,A68_INT ,void *));
typedef struct A68t289  A68_289 ;    /* PROC(REF MODE270,INT) VOID */
struct A68t291 ;

A_PROCEDURE(struct A68t270 *,A68t290,(struct A68t270 *,struct A68t291 ),(struct A68t270 *,struct A68t291 ,void *));
typedef struct A68t290  A68_290 ;    /* PROC(REF MODE270,MODE291) REF MODE270 */

A_PROCEDURE(A68_BOOL ,A68t291,(struct A68t271 *,struct A68t272 ),(struct A68t271 *,struct A68t272 ,void *));
typedef struct A68t291  A68_291 ;    /* PROC(REF MODE271,MODE272) BOOL */

A_PROCEDURE(struct A68t270 *,A68t292,(struct A68t270 *,A68_VC ),(struct A68t270 *,A68_VC ,void *));
typedef struct A68t292  A68_292 ;    /* PROC(REF MODE270,MODE26) REF MODE270 */

A_PROCEDURE(A68_BOOL ,A68t293,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t293  A68_293 ;    /* PROC(MODE26,MODE97) BOOL */

A_PROCEDURE(A68_BOOL ,A68t294,(A68_VC ,A68_VC ,A68_BITS ,struct A68t97 ),(A68_VC ,A68_VC ,A68_BITS ,struct A68t97 ,void *));
typedef struct A68t294  A68_294 ;    /* PROC(MODE26,MODE26,BITS,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t295,(A68_VC ,A68_VC ,A68_INT ,struct A68t97 ),(A68_VC ,A68_VC ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t295  A68_295 ;    /* PROC(MODE26,MODE26,INT,MODE97) VOID */

A_PROCEDURE(A68_BOOL ,A68t296,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t296  A68_296 ;    /* PROC(REF MODE26,MODE97) BOOL */

A_PROCEDURE(struct A68t270 *,A68t297,(struct A68t270 *,A68_INT ),(struct A68t270 *,A68_INT ,void *));
typedef struct A68t297  A68_297 ;    /* PROC(REF MODE270,INT) REF MODE270 */

A_PROCEDURE(A68_BOOL ,A68t298,(struct A68t272 ,A68_VC ),(struct A68t272 ,A68_VC ,void *));
typedef struct A68t298  A68_298 ;    /* PROC(MODE272,MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t299,(struct A68t271 *,A68_INT ,A68_VC *),(struct A68t271 *,A68_INT ,A68_VC *,void *));
typedef struct A68t299  A68_299 ;    /* PROC(REF MODE271,INT) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t300,(struct A68t271 *,A68_INT ),(struct A68t271 *,A68_INT ,void *));
typedef struct A68t300  A68_300 ;    /* PROC(REF MODE271,INT) BOOL */
struct A68t302 ;

A_PROCEDURE(A68_VOID ,A68t301,(struct A68t271 *,A68_INT ,struct A68t302 ),(struct A68t271 *,A68_INT ,struct A68t302 ,void *));
typedef struct A68t301  A68_301 ;    /* PROC(REF MODE271,INT,MODE302) VOID */
struct A68t302 { A68_INT mode; union {
A68_VC  mode1;
A68_BOOL  mode2;
} data; };
typedef struct A68t302  A68_302 ;    /* UNION(REF MODE26,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t303,(struct A68t271 *,A68_INT ),(struct A68t271 *,A68_INT ,void *));
typedef struct A68t303  A68_303 ;    /* PROC(REF MODE271,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t304,(struct A68t270 *),(struct A68t270 *,void *));
typedef struct A68t304  A68_304 ;    /* PROC(REF MODE270) VOID */

A_PROCEDURE(A68_BOOL ,A68t305,(A68_VC ,A68_VC ,struct A68t97 ),(A68_VC ,A68_VC ,struct A68t97 ,void *));
typedef struct A68t305  A68_305 ;    /* PROC(MODE26,MODE26,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t306,(A68_VC ,struct A68t97 ,A68_VC *),(A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t306  A68_306 ;    /* PROC(REF MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t307,(struct A68t129 ),(struct A68t129 ,void *));
typedef struct A68t307  A68_307 ;    /* PROC(MODE129) VOID */

A_PROCEDURE(A68_VOID ,A68t308,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t308  A68_308 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,59,A68t309);
typedef struct A68t309  A68_309 ;    /* STRUCT 59 CHAR */

A_PROCEDURE(A68_BOOL ,A68t310,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t310  A68_310 ;    /* PROC(MODE26,MODE26) BOOL */

A_PROCEDURE(A68_BOOL ,A68t311,(A68_VC ,A68_VC ,A68_BOOL ,A68_VC *,A68_INT *,struct A68t97 ),(A68_VC ,A68_VC ,A68_BOOL ,A68_VC *,A68_INT *,struct A68t97 ,void *));
typedef struct A68t311  A68_311 ;    /* PROC(MODE26,MODE26,BOOL,REF REF MODE26,REF INT,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t312,(A68_BOOL ),(A68_BOOL ,void *));
typedef struct A68t312  A68_312 ;    /* PROC(BOOL) VOID */
A_ISTRUCT(A68_CHAR ,3,A68t313);
typedef struct A68t313  A68_313 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(A68_CHAR ,19,A68t314);
typedef struct A68t314  A68_314 ;    /* STRUCT 19 CHAR */
A_ISTRUCT(A68_CHAR ,27,A68t315);
typedef struct A68t315  A68_315 ;    /* STRUCT 27 CHAR */

A_PROCEDURE(A68_BOOL ,A68t316,(A68_VC ,A68_BOOL ,A68_VC *,A68_INT *,struct A68t97 ),(A68_VC ,A68_BOOL ,A68_VC *,A68_INT *,struct A68t97 ,void *));
typedef struct A68t316  A68_316 ;    /* PROC(MODE26,BOOL,REF REF MODE26,REF INT,MODE97) BOOL */

A_PROCEDURE(A68_BOOL ,A68t317,(struct A68t271 *,A68_BOOL ,A68_VC *,struct A68t97 ),(struct A68t271 *,A68_BOOL ,A68_VC *,struct A68t97 ,void *));
typedef struct A68t317  A68_317 ;    /* PROC(REF MODE271,BOOL,REF REF MODE26,MODE97) BOOL */

A_PROCEDURE(A68_BOOL ,A68t318,(struct A68t34 *,struct A68t271 *,A68_BOOL ,struct A68t97 ),(struct A68t34 *,struct A68t271 *,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t318  A68_318 ;    /* PROC(REF MODE34,REF MODE271,BOOL,MODE97) BOOL */

A_PROCEDURE(A68_BOOL ,A68t319,(struct A68t34 *,A68_VC ,struct A68t97 ),(struct A68t34 *,A68_VC ,struct A68t97 ,void *));
typedef struct A68t319  A68_319 ;    /* PROC(REF MODE34,MODE26,MODE97) BOOL */
A_ISTRUCT(struct A68t52 ,2,A68t320);
typedef struct A68t320  A68_320 ;    /* STRUCT 2 MODE52 */
A_ISTRUCT(A68_CHAR ,5,A68t321);
typedef struct A68t321  A68_321 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t322);
typedef struct A68t322  A68_322 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(struct A68t52 ,3,A68t323);
typedef struct A68t323  A68_323 ;    /* STRUCT 3 MODE52 */
A_ISTRUCT(A68_CHAR ,30,A68t324);
typedef struct A68t324  A68_324 ;    /* STRUCT 30 CHAR */
A_ISTRUCT(A68_CHAR ,7,A68t325);
typedef struct A68t325  A68_325 ;    /* STRUCT 7 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t326);
typedef struct A68t326  A68_326 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(struct A68t52 ,7,A68t327);
typedef struct A68t327  A68_327 ;    /* STRUCT 7 MODE52 */

A_PROCEDURE(A68_VOID ,A68t328,(struct A68t34 *,A68_INT ),(struct A68t34 *,A68_INT ,void *));
typedef struct A68t328  A68_328 ;    /* PROC(REF MODE34,INT) VOID */
A_ISTRUCT(A68_CHAR ,11,A68t329);
typedef struct A68t329  A68_329 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,13,A68t330);
typedef struct A68t330  A68_330 ;    /* STRUCT 13 CHAR */
A_ISTRUCT(A68_CHAR ,9,A68t331);
typedef struct A68t331  A68_331 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(struct A68t52 ,4,A68t332);
typedef struct A68t332  A68_332 ;    /* STRUCT 4 MODE52 */

A_PROCEDURE(A68_VOID ,A68t333,(A68_VC ,A68_INT ,struct A68t300 ,A68_BOOL ,A68_BOOL ),(A68_VC ,A68_INT ,struct A68t300 ,A68_BOOL ,A68_BOOL ,void *));
typedef struct A68t333  A68_333 ;    /* PROC(MODE26,INT,MODE300,BOOL,BOOL) VOID */
A_ISTRUCT(A68_CHAR ,14,A68t334);
typedef struct A68t334  A68_334 ;    /* STRUCT 14 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t335);
typedef struct A68t335  A68_335 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(struct A68t52 ,6,A68t336);
typedef struct A68t336  A68_336 ;    /* STRUCT 6 MODE52 */
A_ISTRUCT(A68_CHAR ,12,A68t337);
typedef struct A68t337  A68_337 ;    /* STRUCT 12 CHAR */

A_PROCEDURE(A68_VOID ,A68t338,(A68_VC ,A68_BOOL ,A68_BOOL ),(A68_VC ,A68_BOOL ,A68_BOOL ,void *));
typedef struct A68t338  A68_338 ;    /* PROC(MODE26,BOOL,BOOL) VOID */

A_PROCEDURE(A68_BOOL ,A68t339,(struct A68t271 *,A68_VC ,A68_VC ),(struct A68t271 *,A68_VC ,A68_VC ,void *));
typedef struct A68t339  A68_339 ;    /* PROC(REF MODE271,REF MODE26,REF MODE26) BOOL */
A_ISTRUCT(A68_CHAR ,26,A68t340);
typedef struct A68t340  A68_340 ;    /* STRUCT 26 CHAR */
A_ISTRUCT(struct A68t52 ,5,A68t341);
typedef struct A68t341  A68_341 ;    /* STRUCT 5 MODE52 */
A_ISTRUCT(A68_CHAR ,10,A68t342);
typedef struct A68t342  A68_342 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(A68_CHAR ,25,A68t343);
typedef struct A68t343  A68_343 ;    /* STRUCT 25 CHAR */
A_ISTRUCT(A68_CHAR ,23,A68t344);
typedef struct A68t344  A68_344 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(A68_CHAR ,20,A68t345);
typedef struct A68t345  A68_345 ;    /* STRUCT 20 CHAR */
A_ISTRUCT(A68_CHAR ,1,A68t346);
typedef struct A68t346  A68_346 ;    /* STRUCT 0 CHAR */
A_ISTRUCT(A68_CHAR ,47,A68t347);
typedef struct A68t347  A68_347 ;    /* STRUCT 47 CHAR */

A_PROCEDURE(A68_BOOL ,A68t348,(struct A68t271 *,struct A68t38 ,struct A68t97 ),(struct A68t271 *,struct A68t38 ,struct A68t97 ,void *));
typedef struct A68t348  A68_348 ;    /* PROC(REF MODE271,MODE38,MODE97) BOOL */
A_ISTRUCT(A68_CHAR ,37,A68t349);
typedef struct A68t349  A68_349 ;    /* STRUCT 37 CHAR */

A_PROCEDURE(A68_BOOL ,A68t350,(A68_VC ),(A68_VC ,void *));
typedef struct A68t350  A68_350 ;    /* PROC(MODE26) BOOL */
A_ISTRUCT(A68_CHAR ,22,A68t351);
typedef struct A68t351  A68_351 ;    /* STRUCT 22 CHAR */

A_PROCEDURE(struct A68t270 *,A68t352,(struct A68t270 *,A68_BOOL ,struct A68t38 ,struct A68t97 ),(struct A68t270 *,A68_BOOL ,struct A68t38 ,struct A68t97 ,void *));
typedef struct A68t352  A68_352 ;    /* PROC(REF MODE270,BOOL,MODE38,MODE97) REF MODE270 */

A_PROCEDURE(A68_VOID ,A68t353,(struct A68t271 *,struct A68t97 ),(struct A68t271 *,struct A68t97 ,void *));
typedef struct A68t353  A68_353 ;    /* PROC(REF MODE271,MODE97) VOID */
A_ISTRUCT(A68_CHAR ,54,A68t354);
typedef struct A68t354  A68_354 ;    /* STRUCT 54 CHAR */

A_PROCEDURE(A68_VOID ,A68t355,(struct A68t271 *,A68_VC ,struct A68t97 ),(struct A68t271 *,A68_VC ,struct A68t97 ,void *));
typedef struct A68t355  A68_355 ;    /* PROC(REF MODE271,REF MODE26,MODE97) VOID */

A_PROCEDURE(A68_BOOL ,A68t356,(A68_VC ,struct A68t177 ,struct A68t97 ),(A68_VC ,struct A68t177 ,struct A68t97 ,void *));
typedef struct A68t356  A68_356 ;    /* PROC(MODE26,REF MODE177,MODE97) BOOL */
A_ISTRUCT(A68_CHAR ,31,A68t357);
typedef struct A68t357  A68_357 ;    /* STRUCT 31 CHAR */

A_PROCEDURE(A68_VOID ,A68t358,(struct A68t271 *),(struct A68t271 *,void *));
typedef struct A68t358  A68_358 ;    /* PROC(REF MODE271) VOID */
A_ISTRUCT(A68_CHAR ,15,A68t359);
typedef struct A68t359  A68_359 ;    /* STRUCT 15 CHAR */
A_ISTRUCT(A68_CHAR ,36,A68t360);
typedef struct A68t360  A68_360 ;    /* STRUCT 36 CHAR */

A_PROCEDURE(A68_BOOL ,A68t361,(struct A68t271 *,struct A68t272 ,A68_BOOL ,struct A68t97 ),(struct A68t271 *,struct A68t272 ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t361  A68_361 ;    /* PROC(REF MODE271,MODE272,BOOL,MODE97) BOOL */
A_ISTRUCT(A68_CHAR ,35,A68t362);
typedef struct A68t362  A68_362 ;    /* STRUCT 35 CHAR */

A_PROCEDURE(A68_VOID ,A68t363,(A68_VC ,struct A68t177 ,A68_VC ,struct A68t97 ),(A68_VC ,struct A68t177 ,A68_VC ,struct A68t97 ,void *));
typedef struct A68t363  A68_363 ;    /* PROC(MODE26,REF MODE177,REF MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t364,(A68_VC ,struct A68t177 ,A68_INT ,struct A68t300 ,struct A68t97 ),(A68_VC ,struct A68t177 ,A68_INT ,struct A68t300 ,struct A68t97 ,void *));
typedef struct A68t364  A68_364 ;    /* PROC(MODE26,REF MODE177,INT,MODE300,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t365,(A68_INT ,struct A68t177 ,A68_BOOL ,struct A68t97 ),(A68_INT ,struct A68t177 ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t365  A68_365 ;    /* PROC(INT,REF MODE177,BOOL,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t366,(struct A68t270 *,struct A68t97 ),(struct A68t270 *,struct A68t97 ,void *));
typedef struct A68t366  A68_366 ;    /* PROC(REF MODE270,MODE97) VOID */

A_PROCEDURE(A68_BOOL ,A68t367,(struct A68t177 ,A68_BOOL ,struct A68t97 ),(struct A68t177 ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t367  A68_367 ;    /* PROC(REF MODE177,BOOL,MODE97) BOOL */
A_ISTRUCT(A68_CHAR ,17,A68t368);
typedef struct A68t368  A68_368 ;    /* STRUCT 17 CHAR */
A_ISTRUCT(A68_CHAR ,16,A68t369);
typedef struct A68t369  A68_369 ;    /* STRUCT 16 CHAR */

A_PROCEDURE(A68_BOOL ,A68t370,(struct A68t177 ,A68_INT ,struct A68t97 ),(struct A68t177 ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t370  A68_370 ;    /* PROC(REF MODE177,INT,MODE97) BOOL */
A_ISTRUCT(A68_CHAR ,55,A68t371);
typedef struct A68t371  A68_371 ;    /* STRUCT 55 CHAR */
A_ISTRUCT(A68_CHAR ,41,A68t372);
typedef struct A68t372  A68_372 ;    /* STRUCT 41 CHAR */
A_ISTRUCT(A68_CHAR ,52,A68t373);
typedef struct A68t373  A68_373 ;    /* STRUCT 52 CHAR */
A_ISTRUCT(A68_CHAR ,33,A68t374);
typedef struct A68t374  A68_374 ;    /* STRUCT 33 CHAR */
A_ISTRUCT(A68_CHAR ,49,A68t375);
typedef struct A68t375  A68_375 ;    /* STRUCT 49 CHAR */
A_ISTRUCT(A68_CHAR ,39,A68t376);
typedef struct A68t376  A68_376 ;    /* STRUCT 39 CHAR */

A_PROCEDURE(A68_VOID ,A68t377,(struct A68t177 ,A68_BOOL ,struct A68t97 ),(struct A68t177 ,A68_BOOL ,struct A68t97 ,void *));
typedef struct A68t377  A68_377 ;    /* PROC(REF MODE177,BOOL,MODE97) VOID */

A_PROCEDURE(A68_BOOL ,A68t378,(A68_VC ,struct A68t271 *,A68_BOOL ),(A68_VC ,struct A68t271 *,A68_BOOL ,void *));
typedef struct A68t378  A68_378 ;    /* PROC(REF MODE26,REF MODE271,BOOL) BOOL */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from mm_oscommands --- */
extern A68_BOOL  ZXCAAMM_translate_oscommands(A68_VC ,struct A68t97 );
extern A68_VOID  IDDAAMM_initialise_mm_oscommands(struct A68t97 ,A68_VC *);
extern A68_BOOL  ECDAAMM_submit(A68_VC ,A68_VC ,struct A68t97 );
extern A68_VOID  ICDAAMM_save_file(A68_VC ,struct A68t97 ,A68_VC *);
/* --- End of imports from mm_oscommands --- */


/* --- Imports from mm_basics --- */
extern A68_BOOL  GHAAAMM_flagon(struct A68t275 *);
extern A68_270 * KBAAAMM_nilmodulelist;
extern A68_271 * LBAAAMM_nilmodule;
extern A68_275 * JBAAAMM_nilsymbol;
extern A68_INT  THAAAMM_zero;
extern A68_BOOL  UIAAAMM_ring_bell;
#define OHAAAMM_bufmax 256
extern A68_INT  SHAAAMM_lcbias;
extern A68_VC  BCAAAMM_blankname;
extern A68_272  NBAAAMM_blank_star;
extern A68_INT  DDBAAMM_database_modified(void);
extern A68_BOOL  SIAAAMM_diagnose;
extern A68_275 * GKAAAMM_default_star_chars;
extern A68_VC  ZJAAAMM_database_name;
extern A68_VC  AKAAAMM_detach_name;
#define DJAAAMM_local_tag 0X010U
#define FJAAAMM_translate_tag 0X040U
#define GJAAAMM_compile_tag 0X080U
extern A68_BITS  KJAAAMM_action_tag;
extern A68_VOID  UWAAAMM_set_lowercase(A68_VC );
extern A68_INT  OIAAAMM_max_module_name_size;
#define DXAAAMM_default_yes 1
#define EXAAAMM_default_no 2
extern A68_BOOL  JXAAAMM_query(A68_VC ,A68_INT ,struct A68t97 );
extern A68_VOID  EZAAAMM_not_found(A68_VC ,A68_VC ,A68_VC *);
extern A68_VOID  SZAAAMM_mnot_found(A68_VC ,A68_VC *);
extern A68_VOID  YZAAAMM_fnot_found(A68_VC ,A68_VC *);
extern A68_275 * VMAAAMM_define_symbol(A68_VC ,A68_VC ,A68_BITS );
extern A68_275 * ALAAAMM_scansymbols(A68_VC ,struct A68t276 );
extern A68_275 * LLAAAMM_findsymbol(A68_VC );
extern A68_BOOL  WLAAAMM_move_symbol_pointer(A68_VC ,A68_BOOL );
extern A68_270 * WIAAAMM_modules;
extern A68_VOID  YBBAAMM_mark_modules(struct A68t270 *,A68_INT );
extern A68_270 * SBBAAMM_scanmodules(struct A68t270 *,struct A68t291 );
extern A68_270 * JCBAAMM_findmodule(struct A68t270 *,A68_VC );
extern A68_VC  GIAAAMM_sta_type;
extern A68_VC  JIAAAMM_a68_type;
extern A68_BOOL  ZDBAAMM_file_exists(A68_VC ,struct A68t97 );
extern A68_INT  KEBAAMM_set_modulenumbers(void);
extern A68_VOID  VACAAMM_save_database(A68_VC ,A68_VC ,A68_INT ,struct A68t97 );
extern A68_BOOL  MICAAMM_read_module(A68_VC ,struct A68t97 );
extern A68_VOID  KFBAAMM_set_levels(A68_VC ,struct A68t97 );
#define QPAAAMM_compile_attribute 1
#define RPAAAMM_link_attribute 2
#define SPAAAMM_debug_attribute 3
#define TPAAAMM_star_attribute 4
#define UPAAAMM_heap_attribute 5
#define VPAAAMM_exename_attribute 6
#define WPAAAMM_version_attribute 7
#define XPAAAMM_optimise_attribute 8
extern A68_BOOL  FABAAMM_check_star(struct A68t272 ,A68_VC );
extern A68_VOID  GTAAAMM_attribute_name(A68_INT ,A68_VC *);
extern A68_VOID  KTAAAMM_attribute_value(struct A68t271 *,A68_INT ,A68_VC *);
extern A68_BOOL  QTAAAMM_attribute_state(struct A68t271 *,A68_INT );
extern A68_VOID  YTAAAMM_set_attribute(struct A68t271 *,A68_INT ,struct A68t302 );
extern A68_VOID  LUAAAMM_clear_attribute(struct A68t271 *,A68_INT );
extern A68_BOOL  SUAAAMM_permanent_attribute(struct A68t271 *,A68_INT );
extern A68_BOOL  ZUAAAMM_attribute_marked(struct A68t271 *,A68_INT );
extern A68_VC  RDAAAMM_on_string;
extern A68_VC  ZCAAAMM_true_string;
extern A68_VC  IDAAAMM_false_string;
extern A68_VC  BFAAAMM_failed_string;
extern A68_VC  KFAAAMM_trfailed_string;
extern A68_VC  JEAAAMM_cc_string;
extern A68_VC  TFAAAMM_ccfailed_string;
extern A68_VC  SEAAAMM_tr_string;
extern A68_VC  CGAAAMM_translate_string;
extern A68_VC  LGAAAMM_compile_string;
extern A68_VC  UGAAAMM_link_string;
extern A68_275 * LKAAAMM_auto_link;
extern A68_275 * MKAAAMM_auto_version;
extern A68_275 * OKAAAMM_bell_flag;
extern A68_VOID  XSBAAMM_set_usedby_lists(struct A68t270 *);
extern A68_VOID  PTBAAMM_clear_usedby_lists(struct A68t270 *);
extern A68_BOOL  AXAAAMM_can_query(void);
/* --- End of imports from mm_basics --- */


/* --- Imports from commandcaller --- */
/* --- End of imports from commandcaller --- */


/* --- Imports from ioprocs --- */
/* --- End of imports from ioprocs --- */


/* --- Imports from kernelreader --- */
extern A68_BOOL  ELFAOST_is_name(struct A68t176 );
extern A68_VOID  JLFAOST_get_name(struct A68t176 ,struct A68t97 ,A68_VC *);
extern A68_BOOL  MMFAOST_is_string(struct A68t176 );
extern A68_VOID  QMFAOST_get_string(struct A68t176 ,struct A68t97 ,A68_VC *);
extern A68_BOOL  SNFAOST_is_filename(struct A68t176 );
/* --- End of imports from kernelreader --- */


/* --- Imports from command --- */
/* --- End of imports from command --- */


/* --- Imports from commandreader --- */
/* --- End of imports from commandreader --- */


/* --- Imports from commandsyntax --- */
/* --- End of imports from commandsyntax --- */


/* --- Imports from messageproc --- */
extern A68_VOID  ZAAAOSI_makervc(A68_VC ,A68_VC *);
extern A68_98  UHAAOSI_fatal;
extern A68_98  WHAAOSI_user;
/* --- End of imports from messageproc --- */


/* --- Imports from basics --- */
extern A68_VOID  VTCAOST_clear(struct A68t146 );
extern A68_INT  FVCAOST_max(A68_INT ,A68_INT );
extern A68_INT  JVCAOST_min(A68_INT ,A68_INT );
extern A68_INT  DZCAOST_seconds(void);
extern A68_VOID  QDDAOST_date_time(A68_INT ,A68_VC *);
/* --- End of imports from basics --- */


/* --- Imports from osinterface --- */
extern A68_BOOL  PPBAOSI_(struct A68t35 ,struct A68t35 );
extern A68_35  GPBAOSI_io_eof;
#define VPBAOSI_newline_char '\012'
extern A68_94  PNBAOSI_read_access;
extern A68_94  TNBAOSI_write_access;
extern A68_94  BOBAOSI_update_access;
extern A68_94  FOBAOSI_update_truncate_access;
#define HDAAOST_block_update_access BOBAOSI_update_access
#define IDAAOST_block_update_truncate_access FOBAOSI_update_truncate_access
extern A68_92 * FQBAOSI_open_file(A68_VC ,struct A68t94 ,struct A68t97 );
extern A68_VOID  XQBAOSI_close_file(struct A68t92 *,struct A68t97 );
extern A68_VOID  SRBAOSI_read_line(struct A68t92 *,A68_VC ,A68_INT *,struct A68t97 ,A68_35 *);
extern A68_VOID  JSBAOSI_write_buffer(struct A68t92 *,A68_VC ,struct A68t97 ,A68_35 *);
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
extern A68_VOID  IIAAOST_prompt(A68_VC ,A68_VC *);
/* --- End of imports from osinterface --- */


/* --- Imports from putstrings --- */
extern A68_VOID  FCAAOSI_intchars(A68_INT ,A68_VC *);
extern A68_INT  YOAAOSL_charnumber(struct A68t34 *);
extern A68_INT  EPAAOSL_charsleft(struct A68t34 *);
extern A68_VOID  LRAAOSL_newline(struct A68t34 *);
extern A68_VOID  GFBAOSL_put(struct A68t34 *,struct A68t85 );
extern A68_VOID  UJBAOSL_oneline(struct A68t85 ,A68_VC *);
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void AWCAAMM(void);   /* mm_oscommands */
extern void SAAAAMM(void);   /* mm_basics */
extern void AYGAOST(void);   /* commandcaller */
extern void TIGAOST(void);   /* ioprocs */
extern void TXEAOST(void);   /* kernelreader */
extern void FMDAOST(void);   /* command */
extern void YIBAOST(void);   /* commandreader */
extern void LRAAOST(void);   /* commandsyntax */
extern void JFAAOSI(void);   /* messageproc */
extern void JSCAOST(void);   /* basics */
extern void PCAAOST(void);   /* osinterface */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_309   HEDAAMM = {"$Id: mm_utilities.a68,v 34.3 1995/03/29 13:02:36 ella Exp $"}; 
A_GISVEC(A68_VC ,IEDAAMM,HEDAAMM,59)
#define OFDAAMM_first_directory A68_TRUE
#define PFDAAMM_all_directories A68_FALSE
static A68_313   RHDAAMM = {"dir"}; 
A_GISVEC(A68_VC ,SHDAAMM,RHDAAMM,3)
static A68_VC  AIDAAMM_no_src_file;
static A68_314   CIDAAMM = {"has no source file."}; 
A_GISVEC(A68_VC ,DIDAAMM,CIDAAMM,19)
static A68_VC  JIDAAMM_file_not_found;
static A68_315   LIDAAMM = {"source file not accessible."}; 
A_GISVEC(A68_VC ,MIDAAMM,LIDAAMM,27)
static A68_95   VKDAAMM = {"    "}; 
A_GISVEC(A68_VC ,WKDAAMM,VKDAAMM,4)
static A68_321   FLDAAMM = {"     "}; 
A_GISVEC(A68_VC ,GLDAAMM,FLDAAMM,5)
static A68_322   LLDAAMM = {" ["}; 
A_GISVEC(A68_VC ,MLDAAMM,LLDAAMM,2)
static A68_324   YLDAAMM = {"There are no compiles pending."}; 
A_GISVEC(A68_VC ,ZLDAAMM,YLDAAMM,30)
static A68_95   VMDAAMM = {"    "}; 
A_GISVEC(A68_VC ,WMDAAMM,VMDAAMM,4)
static A68_325   BNDAAMM = {" debug "}; 
A_GISVEC(A68_VC ,CNDAAMM,BNDAAMM,7)
static A68_326   HNDAAMM = {" exedir "}; 
A_GISVEC(A68_VC ,INDAAMM,HNDAAMM,8)
static A68_315   SNDAAMM = {"There are no links pending."}; 
A_GISVEC(A68_VC ,TNDAAMM,SNDAAMM,27)
static A68_329   UODAAMM = {" modules :-"}; 
A_GISVEC(A68_VC ,VODAAMM,UODAAMM,11)
static A68_95   CPDAAMM = {"    "}; 
A_GISVEC(A68_VC ,DPDAAMM,CPDAAMM,4)
static A68_330   NPDAAMM = {"There are no "}; 
A_GISVEC(A68_VC ,OPDAAMM,NPDAAMM,13)
static A68_331   SPDAAMM = {" modules."}; 
A_GISVEC(A68_VC ,TPDAAMM,SPDAAMM,9)
static A68_95   DRDAAMM = {" :- "}; 
A_GISVEC(A68_VC ,FRDAAMM,DRDAAMM,4)
static A68_313   JRDAAMM = {"No "}; 
A_GISVEC(A68_VC ,KRDAAMM,JRDAAMM,3)
static A68_321   DTDAAMM = {"**** "}; 
A_GISVEC(A68_VC ,ETDAAMM,DTDAAMM,5)
static A68_325   JTDAAMM = {"Module "}; 
A_GISVEC(A68_VC ,KTDAAMM,JTDAAMM,7)
static A68_334   PTDAAMM = {" removed from "}; 
A_GISVEC(A68_VC ,QTDAAMM,PTDAAMM,14)
static A68_335   UTDAAMM = {" list."}; 
A_GISVEC(A68_VC ,VTDAAMM,UTDAAMM,6)
static A68_325   CUDAAMM = {"Module "}; 
A_GISVEC(A68_VC ,DUDAAMM,CUDAAMM,7)
static A68_337   IUDAAMM = {" not on the "}; 
A_GISVEC(A68_VC ,JUDAAMM,IUDAAMM,12)
static A68_335   NUDAAMM = {" list."}; 
A_GISVEC(A68_VC ,OUDAAMM,NUDAAMM,6)
static A68_325   YUDAAMM = {"Module "}; 
A_GISVEC(A68_VC ,ZUDAAMM,YUDAAMM,7)
static A68_275 * PVDAAMM_modname_symbol;
static A68_275 * QVDAAMM_srcname_symbol;
static A68_275 * RVDAAMM_stars_symbol;
static A68_275 * SVDAAMM_heap_symbol;
static A68_275 * TVDAAMM_optimise_symbol;
static A68_275 * UVDAAMM_prog_symbol;
static A68_275 * VVDAAMM_debug_symbol;
static A68_275 * WVDAAMM_exename_symbol;
static A68_BITS  XVDAAMM_trcomp_tag;
static A68_325   BYDAAMM = {"Module "}; 
A_GISVEC(A68_VC ,CYDAAMM,BYDAAMM,7)
static A68_340   HYDAAMM = {" is marked with a failure."}; 
A_GISVEC(A68_VC ,IYDAAMM,HYDAAMM,26)
static A68_325   PYDAAMM = {"Module "}; 
A_GISVEC(A68_VC ,QYDAAMM,PYDAAMM,7)
static A68_340   VYDAAMM = {" needs un-compiled module "}; 
A_GISVEC(A68_VC ,WYDAAMM,VYDAAMM,26)
static A68_325   GZDAAMM = {"Module "}; 
A_GISVEC(A68_VC ,HZDAAMM,GZDAAMM,7)
static A68_342   TZDAAMM = {"Translate "}; 
A_GISVEC(A68_VC ,UZDAAMM,TZDAAMM,10)
static A68_335   ZZDAAMM = {" from "}; 
A_GISVEC(A68_VC ,AAEAAMM,ZZDAAMM,6)
static A68_325   JAEAAMM = {"Module "}; 
A_GISVEC(A68_VC ,KAEAAMM,JAEAAMM,7)
static A68_343   PAEAAMM = {" has failed to translate."}; 
A_GISVEC(A68_VC ,QAEAAMM,PAEAAMM,25)
static A68_326   ABEAAMM = {"Compile "}; 
A_GISVEC(A68_VC ,BBEAAMM,ABEAAMM,8)
static A68_335   GBEAAMM = {" from "}; 
A_GISVEC(A68_VC ,HBEAAMM,GBEAAMM,6)
static A68_321   LBEAAMM = {" with"}; 
A_GISVEC(A68_VC ,MBEAAMM,LBEAAMM,5)
static A68_313   PBEAAMM = {" no"}; 
A_GISVEC(A68_VC ,QBEAAMM,PBEAAMM,3)
static A68_335   TBEAAMM = {" debug"}; 
A_GISVEC(A68_VC ,UBEAAMM,TBEAAMM,6)
static A68_325   BCEAAMM = {"Module "}; 
A_GISVEC(A68_VC ,CCEAAMM,BCEAAMM,7)
static A68_344   HCEAAMM = {" has failed to compile."}; 
A_GISVEC(A68_VC ,ICEAAMM,HCEAAMM,23)
static A68_325   CDEAAMM = {"Module "}; 
A_GISVEC(A68_VC ,DDEAAMM,CDEAAMM,7)
static A68_340   IDEAAMM = {" is marked with a failure."}; 
A_GISVEC(A68_VC ,JDEAAMM,IDEAAMM,26)
static A68_313   RDEAAMM = {"Cc "}; 
A_GISVEC(A68_VC ,SDEAAMM,RDEAAMM,3)
static A68_321   XDEAAMM = {" with"}; 
A_GISVEC(A68_VC ,YDEAAMM,XDEAAMM,5)
static A68_313   BEEAAMM = {" no"}; 
A_GISVEC(A68_VC ,CEEAAMM,BEEAAMM,3)
static A68_335   FEEAAMM = {" debug"}; 
A_GISVEC(A68_VC ,GEEAAMM,FEEAAMM,6)
static A68_325   NEEAAMM = {"Module "}; 
A_GISVEC(A68_VC ,OEEAAMM,NEEAAMM,7)
static A68_343   TEEAAMM = {" has failed at C compile."}; 
A_GISVEC(A68_VC ,UEEAAMM,TEEAAMM,25)
static A68_337   TFEAAMM = {"Link module "}; 
A_GISVEC(A68_VC ,UFEAAMM,TFEAAMM,12)
static A68_335   ZFEAAMM = {" into "}; 
A_GISVEC(A68_VC ,AGEAAMM,ZFEAAMM,6)
static A68_321   EGEAAMM = {" with"}; 
A_GISVEC(A68_VC ,FGEAAMM,EGEAAMM,5)
static A68_313   IGEAAMM = {" no"}; 
A_GISVEC(A68_VC ,JGEAAMM,IGEAAMM,3)
static A68_335   MGEAAMM = {" debug"}; 
A_GISVEC(A68_VC ,NGEAAMM,MGEAAMM,6)
static A68_325   UGEAAMM = {"Module "}; 
A_GISVEC(A68_VC ,VGEAAMM,UGEAAMM,7)
static A68_345   AHEAAMM = {" has failed to link."}; 
A_GISVEC(A68_VC ,BHEAAMM,AHEAAMM,20)
static A68_313   IHEAAMM = {"lib"}; 
static A68_331   JHEAAMM = {"libraries"}; 
A_GISVEC(A68_VC ,KHEAAMM,JHEAAMM,9)
A_GISVEC(A68_VC ,LHEAAMM,IHEAAMM,3)
static A68_346   MHEAAMM = {""}; 
A_GISVEC(A68_VC ,NHEAAMM,MHEAAMM,0)
static A68_324   QHEAAMM = {"Separate translate and compile"}; 
A_GISVEC(A68_VC ,RHEAAMM,QHEAAMM,30)
static A68_347   YHEAAMM = {"Translate and compile in one pass using symbol "}; 
A_GISVEC(A68_VC ,ZHEAAMM,YHEAAMM,47)
static A68_349   NIEAAMM = {"Do you wish to update version module "}; 
A_GISVEC(A68_VC ,OIEAAMM,NIEAAMM,37)
static A68_95   QKEAAMM = {"New "}; 
A_GISVEC(A68_VC ,RKEAAMM,QKEAAMM,4)
static A68_313   VKEAAMM = {" = "}; 
A_GISVEC(A68_VC ,WKEAAMM,VKEAAMM,3)
static A68_313   QLEAAMM = {"lib"}; 
A_GISVEC(A68_VC ,ULEAAMM,QLEAAMM,3)
static A68_346   XLEAAMM = {""}; 
A_GISVEC(A68_VC ,ZLEAAMM,XLEAAMM,0)
static A68_346   CMEAAMM = {""}; 
A_GISVEC(A68_VC ,DMEAAMM,CMEAAMM,0)
static A68_95   JMEAAMM = {"KEEP"}; 
A_GISVEC(A68_VC ,KMEAAMM,JMEAAMM,4)
static A68_325   LMEAAMM = {"_string"}; 
A_GISVEC(A68_VC ,MMEAAMM,LMEAAMM,7)
static A68_95   OMEAAMM = {"_msg"}; 
A_GISVEC(A68_VC ,PMEAAMM,OMEAAMM,4)
static A68_351   QMEAAMM = {"Give version string:- "}; 
A_GISVEC(A68_VC ,RMEAAMM,QMEAAMM,22)
static A68_326   UMEAAMM = {"_created"}; 
A_GISVEC(A68_VC ,VMEAAMM,UMEAAMM,8)
static A68_313   ZMEAAMM = {" - "}; 
A_GISVEC(A68_VC ,ANEAAMM,ZMEAAMM,3)
static A68_321   JNEAAMM = {"_date"}; 
A_GISVEC(A68_VC ,KNEAAMM,JNEAAMM,5)
static A68_325   NNEAAMM = {"_number"}; 
A_GISVEC(A68_VC ,ONEAAMM,NNEAAMM,7)
static A68_343   UNEAAMM = {"Source for version module"}; 
A_GISVEC(A68_VC ,VNEAAMM,UNEAAMM,25)
#define YNEAAMM_in_dependencies A68_TRUE
#define ZNEAAMM_all_modules A68_FALSE
static A68_354   YOEAAMM = {"Idirect version update can only be done interactively."}; 
A_GISVEC(A68_VC ,ZOEAAMM,YOEAAMM,54)
static A68_351   AQEAAMM = {", is it OK to go ahead"}; 
A_GISVEC(A68_VC ,BQEAAMM,AQEAAMM,22)
static A68_357   GQEAAMM = {"Repeat with required parameters"}; 
A_GISVEC(A68_VC ,HQEAAMM,GQEAAMM,31)
static A68_325   TQEAAMM = {"Module "}; 
A_GISVEC(A68_VC ,UQEAAMM,TQEAAMM,7)
static A68_343   ZQEAAMM = {" is not a program module."}; 
A_GISVEC(A68_VC ,AREAAMM,ZQEAAMM,25)
static A68_359   MREAAMM = {"Marking module "}; 
A_GISVEC(A68_VC ,NREAAMM,MREAAMM,15)
static A68_334   SREAAMM = {" to be linked."}; 
A_GISVEC(A68_VC ,TREAAMM,SREAAMM,14)
static A68_360   CSEAAMM = {"No program modules in the data base."}; 
A_GISVEC(A68_VC ,DSEAAMM,CSEAAMM,36)
static A68_325   DTEAAMM = {"Module "}; 
A_GISVEC(A68_VC ,ETEAAMM,DTEAAMM,7)
static A68_362   JTEAAMM = {" not compilable with current stars."}; 
A_GISVEC(A68_VC ,KTEAAMM,JTEAAMM,35)
static A68_325   RTEAAMM = {"Module "}; 
A_GISVEC(A68_VC ,STEAAMM,RTEAAMM,7)
static A68_315   XTEAAMM = {" source file not accessible"}; 
A_GISVEC(A68_VC ,YTEAAMM,XTEAAMM,27)
static A68_346   HVEAAMM = {""}; 
A_GISVEC(A68_VC ,IVEAAMM,HVEAAMM,0)
static A68_325   ZVEAAMM = {"default"}; 
A_GISVEC(A68_VC ,AWEAAMM,ZVEAAMM,7)
static A68_95   LWEAAMM = {"Set "}; 
A_GISVEC(A68_VC ,MWEAAMM,LWEAAMM,4)
static A68_331   PWEAAMM = {"permanent"}; 
A_GISVEC(A68_VC ,QWEAAMM,PWEAAMM,9)
static A68_331   TWEAAMM = {"temporary"}; 
A_GISVEC(A68_VC ,UWEAAMM,TWEAAMM,9)
static A68_329   XWEAAMM = {" attribute "}; 
A_GISVEC(A68_VC ,YWEAAMM,XWEAAMM,11)
static A68_95   DXEAAMM = {" to "}; 
A_GISVEC(A68_VC ,EXEAAMM,DXEAAMM,4)
static A68_368   XYEAAMM = {"Warning:- symbol "}; 
A_GISVEC(A68_VC ,YYEAAMM,XYEAAMM,17)
static A68_369   CZEAAMM = {" does not exist."}; 
A_GISVEC(A68_VC ,DZEAAMM,CZEAAMM,16)
#define KZEAAMM_optimistic 1
#define LZEAAMM_pessimistic 2
#define MZEAAMM_rebuild 3
static A68_371   OAFAAMM = {"More than one program in the database, give a parameter"}; 
A_GISVEC(A68_VC ,PAFAAMM,OAFAAMM,55)
static A68_372   GBFAAMM = {"The following modules may need editing :-"}; 
A_GISVEC(A68_VC ,HBFAAMM,GBFAAMM,41)
static A68_95   OBFAAMM = {"    "}; 
A_GISVEC(A68_VC ,PBFAAMM,OBFAAMM,4)
static A68_373   ZBFAAMM = {"Do you wish to remove all pending compiles and links"}; 
A_GISVEC(A68_VC ,ACFAAMM,ZBFAAMM,52)
static A68_346   BCFAAMM = {""}; 
A_GISVEC(A68_VC ,CCFAAMM,BCFAAMM,0)
static A68_346   DCFAAMM = {""}; 
A_GISVEC(A68_VC ,ECFAAMM,DCFAAMM,0)
static A68_324   RCFAAMM = {"Do you wish to compile module "}; 
A_GISVEC(A68_VC ,SCFAAMM,RCFAAMM,30)
static A68_374   ZCFAAMM = {"No program module in the database"}; 
A_GISVEC(A68_VC ,ADFAAMM,ZCFAAMM,33)
static A68_375   DDFAAMM = {"At least one module name required for spec-change"}; 
A_GISVEC(A68_VC ,EDFAAMM,DDFAAMM,49)
static A68_376   LDFAAMM = {"Errors occured, do you wish to continue"}; 
A_GISVEC(A68_VC ,MDFAAMM,LDFAAMM,39)
static A68_321   EEFAAMM = {"File "}; 
A_GISVEC(A68_VC ,FEFAAMM,EEFAAMM,5)
static A68_309   NFFAAMM = {"Warning:- the following modules are used but not installed."}; 
A_GISVEC(A68_VC ,OFFAAMM,NFFAAMM,59)
static A68_95   VFFAAMM = {"    "}; 
A_GISVEC(A68_VC ,WFFAAMM,VFFAAMM,4)
static A68_95   DGFAAMM = {"   {"}; 
A_GISVEC(A68_VC ,EGFAAMM,DGFAAMM,4)
static A68_325   ZGFAAMM = {"modname"}; 
A_GISVEC(A68_VC ,AHFAAMM,ZGFAAMM,7)
static A68_325   BHFAAMM = {"srcname"}; 
A_GISVEC(A68_VC ,CHFAAMM,BHFAAMM,7)
static A68_321   DHFAAMM = {"stars"}; 
A_GISVEC(A68_VC ,EHFAAMM,DHFAAMM,5)
static A68_95   FHFAAMM = {"heap"}; 
A_GISVEC(A68_VC ,GHFAAMM,FHFAAMM,4)
static A68_326   HHFAAMM = {"optimise"}; 
A_GISVEC(A68_VC ,IHFAAMM,HHFAAMM,8)
static A68_95   JHFAAMM = {"prog"}; 
A_GISVEC(A68_VC ,KHFAAMM,JHFAAMM,4)
static A68_321   LHFAAMM = {"debug"}; 
A_GISVEC(A68_VC ,MHFAAMM,LHFAAMM,5)
static A68_325   NHFAAMM = {"exename"}; 
A_GISVEC(A68_VC ,OHFAAMM,NHFAAMM,7)
typedef struct   /* env of non-global proc */
{
A68_INT  TEDAAMM_upb;
A_PAD_INT(PAD_78)
} AFDAAMM_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} BGDAAMM_generator;
typedef struct   /* env of non-global proc */
{
A68_287  LGDAAMM_analyse_symbol;
A68_VC  EGDAAMM_buffer;
A68_INT * IGDAAMM_bpos;
} NGDAAMM_analyse_symbol;
typedef struct   /* env of non-global proc */
{
A68_INT * IGDAAMM_bpos;
A68_287  LGDAAMM_analyse_symbol;
A68_INT * JGDAAMM_dtop;
A68_VC  EGDAAMM_buffer;
A68_INT  GGDAAMM_nsize;
A_PAD_INT(PAD_79)
A68_VC  Name;
A68_INT  HGDAAMM_tsize;
A_PAD_INT(PAD_80)
A68_VC  Type;
A68_BOOL * XFDAAMM_found;
A68_97  Msg;
A68_BOOL  One_dir;
A_PAD_BOOL(PAD_81)
} KHDAAMM_try_action;
typedef struct   /* env of non-global proc */
{
A68_BOOL * IKDAAMM_first;
A68_34 * List;
A68_VC  Heading;
A68_BOOL * JKDAAMM_files_found;
A68_97  Msg;
} OKDAAMM_action;
typedef struct   /* env of non-global proc */
{
A68_BOOL * JMDAAMM_first;
A68_34 * List;
A68_VC  Heading;
} OMDAAMM_action;
typedef struct   /* env of non-global proc */
{
A68_VC  EODAAMM_an;
} IODAAMM_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  Attribute_number;
A_PAD_INT(PAD_82)
A68_BOOL * CODAAMM_first;
A68_34 * List;
A68_VC  LODAAMM_list_name;
} RODAAMM_action;
typedef struct   /* env of non-global proc */
{
A68_INT  CQDAAMM_ttop;
A_PAD_INT(PAD_83)
} GQDAAMM_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  JQDAAMM_heading;
A68_BOOL * NQDAAMM_found;
} RQDAAMM_show_sym;
typedef struct   /* env of non-global proc */
{
A68_VC  OSDAAMM_an;
} SSDAAMM_generator;
typedef struct   /* env of non-global proc */
{
A68_BOOL  All;
A_PAD_BOOL(PAD_84)
A68_VC  Name;
A68_300  Undo_action;
A68_INT  Attribute_number;
A_PAD_INT(PAD_85)
A68_BOOL  Warning;
A_PAD_BOOL(PAD_86)
A68_VC  VSDAAMM_list_name;
} BTDAAMM_clear_action;
typedef struct   /* env of non-global proc */
{
A68_BITS * DWDAAMM_action_symbols;
} KWDAAMM_check_for_action;
typedef struct   /* env of non-global proc */
{
A68_BOOL * EWDAAMM_sep_trans_from_cc;
A68_BOOL * FWDAAMM_goto_next_stage;
A68_291 * OXDAAMM_check_uses;
A68_VC * CWDAAMM_full_name;
A68_97  Msg;
A68_VC * GWDAAMM_action_string;
} UXDAAMM_compile_action;
typedef struct   /* env of non-global proc */
{
A68_97  Msg;
A68_BOOL * FWDAAMM_goto_next_stage;
} UCEAAMM_cc_action;
typedef struct   /* env of non-global proc */
{
A68_291  DFEAAMM_can_link;
} FFEAAMM_can_link;
typedef struct   /* env of non-global proc */
{
A68_291  DFEAAMM_can_link;
A68_97  Msg;
} NFEAAMM_link_action;
typedef struct   /* env of non-global proc */
{
int dummy;
} EJEAAMM_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * KJEAAMM_string_pos;
A68_INT * LJEAAMM_string_end;
A68_INT * JJEAAMM_buftop;
A68_VC  HJEAAMM_buffer;
} RJEAAMM_find_string;
typedef struct   /* env of non-global proc */
{
A68_INT * LJEAAMM_string_end;
A68_VC  HJEAAMM_buffer;
A68_INT * KJEAAMM_string_pos;
A68_INT * JJEAAMM_buftop;
} AKEAAMM_insert_string;
typedef struct   /* env of non-global proc */
{
A68_INT * LJEAAMM_string_end;
A68_INT * JJEAAMM_buftop;
A68_VC  HJEAAMM_buffer;
} FLEAAMM_get_number;
typedef struct   /* env of non-global proc */
{
A68_97  Msg;
} PLEAAMM_libroot;
typedef struct   /* env of non-global proc */
{
A68_38  Get_version_string;
A68_97  Msg;
A68_BOOL  Dependent;
A_PAD_BOOL(PAD_87)
A68_291  IOEAAMM_find_version;
} KOEAAMM_find_version;
typedef struct   /* env of non-global proc */
{
A68_97  Msg;
} RQEAAMM_mark_for_link;
typedef struct   /* env of non-global proc */
{
A68_BOOL * NQEAAMM_have_program;
A68_358  PQEAAMM_mark_for_link;
} KREAAMM_locate_program;
typedef struct   /* env of non-global proc */
{
A68_BOOL  JUEAAMM_compile_all;
A_PAD_BOOL(PAD_88)
A68_97  Msg;
A68_VC  Mode_chars;
} OUEAAMM_mark_for_compile;
typedef struct   /* env of non-global proc */
{
A68_BOOL  BWEAAMM_setdefault;
A_PAD_BOOL(PAD_89)
A68_INT  Attribute;
A_PAD_INT(PAD_90)
A68_VC  XVEAAMM_value;
} HWEAAMM_test_action;
typedef struct   /* env of non-global proc */
{
A68_291  CYEAAMM_do_link_program;
A68_97  Msg;
} EYEAAMM_do_link_program;
typedef struct   /* env of non-global proc */
{
A68_291  CYEAAMM_do_link_program;
} LYEAAMM_link_all_programs;
typedef struct   /* env of non-global proc */
{
A68_BOOL * YZEAAMM_have_action_request;
} GAFAAMM_find_action;
typedef struct   /* env of non-global proc */
{
A68_271 ** AAFAAMM_program;
A68_97  Msg;
A68_272 * BAFAAMM_pstar;
} NAFAAMM_find_program;
typedef struct   /* env of non-global proc */
{
A68_97  Msg;
A68_BOOL  SZEAAMM_pessmode;
A_PAD_BOOL(PAD_91)
A68_291  UAFAAMM_mark_for_compile;
A68_BOOL  TZEAAMM_rebuildmode;
A_PAD_BOOL(PAD_92)
} WAFAAMM_mark_for_compile;
typedef struct   /* env of non-global proc */
{
A68_BOOL  RZEAAMM_specchangemode;
A_PAD_BOOL(PAD_93)
A68_BOOL * XZEAAMM_first;
A68_97  Msg;
} EBFAAMM_activate_compiles;
typedef struct   /* env of non-global proc */
{
A68_97  Msg;
} YDFAAMM_analyse_module;
typedef struct   /* env of non-global proc */
{
A68_378  WDFAAMM_analyse_module;
} UEFAAMM_install_module;
typedef struct   /* env of non-global proc */
{
A68_BOOL * XEFAAMM_found;
A68_378  WDFAAMM_analyse_module;
} DFFAAMM_install_uses;
typedef struct   /* env of non-global proc */
{
A68_BOOL * YEFAAMM_put_heading;
} LFFAAMM_show_unset_modules;
typedef struct   /* env of non-global proc */
{
A68_INT * RGDAAMM_start;
A68_INT * QGDAAMM_pos;
A68_VC  OGDAAMM_text;
A68_287  LGDAAMM_analyse_symbol;
A68_VC  EGDAAMM_buffer;
A68_INT * IGDAAMM_bpos;
} ZGDAAMM_insert;

A68_BOOL  LEDAAMM_try_name(A68_VC  N1, A68_VC  N2);

A68_VOID  SEDAAMM_remove_quotes(A68_VC  Str, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  ZEDAAMM_generator(A68_BOOL  XEDAAMM_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_BOOL  WFDAAMM_lookup_file(A68_VC  Name, A68_VC  Type, A68_BOOL  One_dir, A68_VC * Name_found, A68_INT * Dsize, A68_97  Msg);

A_STATIC A68_VOID  AGDAAMM_generator(A68_BOOL  YFDAAMM_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  MGDAAMM_analyse_symbol(A68_275 * Sym, void *NonLocals);

A_STATIC A68_VOID  YGDAAMM_insert(A68_BOOL  Substitute, void *NonLocals);

A_STATIC A68_BOOL  JHDAAMM_try_action(A68_275 * S, void *NonLocals);

A_STATIC A68_VOID  XHDAAMM_generator(A68_BOOL  WHDAAMM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  GIDAAMM_generator(A68_BOOL  FIDAAMM_anonymous, A68_VC  *ReturnedValue);

A68_BOOL  TIDAAMM_lookup_src_file(A68_VC  Name, A68_BOOL  One_dir, A68_VC * Full_name, A68_INT * Dsize, A68_97  Msg);

A68_BOOL  AJDAAMM_check_module_file(A68_271 * M, A68_BOOL  One_dir, A68_VC * Full_name, A68_97  Msg);

A68_BOOL  KJDAAMM_put_module_name(A68_34 * List, A68_271 * M, A68_BOOL  Justify, A68_97  Msg);

A68_BOOL  HKDAAMM_list_compiles(A68_34 * List, A68_VC  Heading, A68_97  Msg);

A_STATIC A68_BOOL  NKDAAMM_action(A68_271 * M, A68_272  S, void *NonLocals);

A68_VOID  IMDAAMM_list_links(A68_34 * List, A68_VC  Heading);

A_STATIC A68_BOOL  NMDAAMM_action(A68_271 * M, A68_272  S, void *NonLocals);

A68_VOID  BODAAMM_list_attributes(A68_34 * List, A68_INT  Attribute_number);

A_STATIC A68_VOID  HODAAMM_generator(A68_BOOL  FODAAMM_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_BOOL  QODAAMM_action(A68_271 * M, A68_272  S, void *NonLocals);

A68_VOID  BQDAAMM_show_symbol_class(A68_VC  Class, A68_VC  Title);

A_STATIC A68_VOID  FQDAAMM_generator(A68_BOOL  DQDAAMM_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_BOOL  QQDAAMM_show_sym(A68_275 * S, void *NonLocals);

A68_BOOL  VRDAAMM_unmark_attribute(A68_271 * M, A68_INT  Attribute_number);

A68_BOOL  ZRDAAMM_unmark_compile(A68_271 * M, A68_INT  Attribute_number);

A68_BOOL  FSDAAMM_unmark_link(A68_271 * M, A68_INT  Attribute_number);

A68_VOID  MSDAAMM_undo_attribute(A68_VC  Name, A68_INT  Attribute_number, A68_300  Undo_action, A68_BOOL  All, A68_BOOL  Warning);

A_STATIC A68_VOID  RSDAAMM_generator(A68_BOOL  PSDAAMM_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_BOOL  ATDAAMM_clear_action(A68_271 * M, A68_272  S, void *NonLocals);

A68_VOID  IVDAAMM_undo_compile(A68_VC  Name, A68_BOOL  All, A68_BOOL  Warning);

A68_VOID  NVDAAMM_undo_link(A68_VC  Name, A68_BOOL  All, A68_BOOL  Warning);

A68_VOID  AWDAAMM_execute(A68_VC  Nodename, A68_97  Msg);

A_STATIC A68_BOOL  JWDAAMM_check_for_action(A68_275 * S, void *NonLocals);

A_STATIC A68_BOOL  PWDAAMM_set_interface_symbols(A68_271 * M, A68_VC  Full_name, A68_VC  Exe_name);

A_STATIC A68_BOOL  HXDAAMM_check_combined_uses(A68_271 * M, A68_272  S);

A_STATIC A68_BOOL  LXDAAMM_check_separate_uses(A68_271 * M, A68_272  S);

A_STATIC A68_BOOL  TXDAAMM_compile_action(A68_271 * M, A68_272  S, void *NonLocals);

A_STATIC A68_BOOL  TCEAAMM_cc_action(A68_271 * M, A68_272  S, void *NonLocals);

A_STATIC A68_BOOL  EFEAAMM_can_link(A68_271 * M, A68_272  S, void *NonLocals);

A_STATIC A68_BOOL  MFEAAMM_link_action(A68_271 * M, A68_272  S, void *NonLocals);

A_STATIC A68_BOOL  KIEAAMM_do_update_version(A68_271 * M, A68_38  Get_version_string, A68_97  Msg);

A_STATIC A68_VOID  DJEAAMM_generator(A68_BOOL  BJEAAMM_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_BOOL  QJEAAMM_find_string(A68_VC  Test, void *NonLocals);

A_STATIC A68_VOID  ZJEAAMM_insert_string(A68_VC  New, void *NonLocals);

A_STATIC A68_INT  ELEAAMM_get_number(void *NonLocals);

A_STATIC A68_VOID  OLEAAMM_libroot(A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_BOOL  SLEAAMM_anonymous(A68_275 * S);

A68_270 * EOEAAMM_update_version(A68_270 * List, A68_BOOL  Dependent, A68_38  Get_version_string, A68_97  Msg);

A_STATIC A68_BOOL  JOEAAMM_find_version(A68_271 * Vm, A68_272  S, void *NonLocals);

A68_VOID  UOEAAMM_set_link_mark(A68_271 * M, A68_97  Msg);

A_STATIC A68_VOID  XOEAAMM_version_string(A68_VC  Message, A68_VC  *ReturnedValue);

A68_VOID  KPEAAMM_set_compile_mark(A68_271 * M, A68_VC  Mode_chars, A68_97  Msg);

A68_BOOL  RPEAAMM_are_all_required(A68_VC  Prompt, A68_177  Param_values, A68_97  Msg);

A68_VOID  LQEAAMM_prepare_link(A68_177  Param_values, A68_97  Msg);

A_STATIC A68_VOID  QQEAAMM_mark_for_link(A68_271 * M, void *NonLocals);

A_STATIC A68_BOOL  JREAAMM_locate_program(A68_271 * M, A68_272  S, void *NonLocals);

A68_BOOL  XSEAAMM_can_compile(A68_271 * M, A68_272  S, A68_BOOL  Report, A68_97  Msg);

A68_VOID  IUEAAMM_prepare_compile(A68_VC  Prompt, A68_177  Param_values, A68_VC  Mode_chars, A68_97  Msg);

A_STATIC A68_BOOL  NUEAAMM_mark_for_compile(A68_271 * M, A68_272  S, void *NonLocals);

A68_VOID  GVEAAMM_remove_attribute(A68_VC  Prompt, A68_177  Param_values, A68_INT  Attribute_number, A68_300  Undo_action, A68_97  Msg);

A68_VOID  RVEAAMM_test_attribute(A68_INT  Attribute, A68_177  Param_values, A68_BOOL  Same_case, A68_97  Msg);

A_STATIC A68_BOOL  GWEAAMM_test_action(A68_271 * M, A68_272  S, void *NonLocals);

A68_VOID  YXEAAMM_link_programs(A68_270 * List, A68_97  Msg);

A_STATIC A68_BOOL  DYEAAMM_do_link_program(A68_271 * Tm, A68_272  S, void *NonLocals);

A_STATIC A68_BOOL  KYEAAMM_link_all_programs(A68_271 * M, A68_272  S, void *NonLocals);

A68_BOOL  QYEAAMM_do_symbol_move(A68_177  Param_values, A68_BOOL  Sense, A68_97  Msg);

A68_BOOL  QZEAAMM_do_specchange(A68_177  Param_values, A68_INT  Mode, A68_97  Msg);

A_STATIC A68_BOOL  FAFAAMM_find_action(A68_271 * M, A68_272  S, void *NonLocals);

A_STATIC A68_BOOL  MAFAAMM_find_program(A68_271 * M, A68_272  S, void *NonLocals);

A_STATIC A68_BOOL  VAFAAMM_mark_for_compile(A68_271 * M, A68_272  S, void *NonLocals);

A_STATIC A68_BOOL  DBFAAMM_activate_compiles(A68_271 * M, A68_272  S, void *NonLocals);

A68_VOID  RDFAAMM_do_module_action(A68_177  Param_values, A68_BOOL  Install, A68_97  Msg);

A_STATIC A68_BOOL  XDFAAMM_analyse_module(A68_VC  Name, A68_271 * M, A68_BOOL  Show_not_found, void *NonLocals);

A_STATIC A68_VOID  TEFAAMM_install_module(A68_VC  Name, void *NonLocals);

A_STATIC A68_BOOL  CFFAAMM_install_uses(A68_271 * M, A68_272  S, void *NonLocals);

A_STATIC A68_BOOL  KFFAAMM_show_unset_modules(A68_271 * M, A68_272  S, void *NonLocals);

A68_VOID  YGFAAMM_initialise_mm_utilities(A68_97  Msg, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  YGDAAMM_insert(A68_BOOL  Substitute, void *NonLocals)
#define NL(x) (((ZGDAAMM_insert *)NonLocals)->x)
{ 
A68_VC  AHDAAMM;  /* OPERATORS - trim index */
A68_275 * BHDAAMM_s;
A68_INT  CHDAAMM_size;
A68_VC  DHDAAMM;  /* OPERATORS - trim index */
A68_VC  EHDAAMM;  /* OPERATORS - trim index */
A68_VC  FHDAAMM;  /* YIELD */
A68_VC  GHDAAMM;  /* OPERATORS - assign op */
A_PROC_ENTRY(insert);
 /* line 104: */
 /* line 105: */
{ 
 /* line 106: */
if ( ((*NL(RGDAAMM_start))<(*NL(QGDAAMM_pos))) )
{ 
 /* line 107: */
if ( Substitute )
{ 
BHDAAMM_s = LLAAAMM_findsymbol(A_VTRIM(AHDAAMM,(NL(OGDAAMM_text)),A_VTSCRIPT(&(AHDAAMM.upb),(NL(OGDAAMM_text)).upb,(*NL(RGDAAMM_start)),((*NL(QGDAAMM_pos))-1))));
 /* line 109: */
if ( (BHDAAMM_s!=JBAAAMM_nilsymbol) )
{ 
 /* line 110: */
 /* line 111: */
A_CALLPROC(NL(LGDAAMM_analyse_symbol),(BHDAAMM_s),(BHDAAMM_s,(NL(LGDAAMM_analyse_symbol)).nonlocals));
} 
} 
else
{ 
CHDAAMM_size = ((*NL(QGDAAMM_pos))-(*NL(RGDAAMM_start)));
 /* line 113: */
FHDAAMM = A_VTRIM(DHDAAMM,(NL(EGDAAMM_buffer)),A_VTSCRIPT(&(DHDAAMM.upb),(NL(EGDAAMM_buffer)).upb,((*NL(IGDAAMM_bpos))+1),((*NL(IGDAAMM_bpos))+CHDAAMM_size))) ;
GHDAAMM = A_VTRIM(EHDAAMM,(NL(OGDAAMM_text)),A_VTSCRIPT(&(EHDAAMM.upb),(NL(OGDAAMM_text)).upb,(*NL(RGDAAMM_start)),((*NL(QGDAAMM_pos))-1))) ;
A_VASSIGN2(GHDAAMM,FHDAAMM,A68_CHAR );
 /* line 114: */
 /* line 115: */
 /* line 116: */
(*NL(IGDAAMM_bpos))+=CHDAAMM_size;
} 
} 
 /* line 117: */
 /* line 118: */
(*NL(RGDAAMM_start)) = ((*NL(QGDAAMM_pos))+1);
} 
A_PROC_EXIT(insert);
return;
} 
#undef NL

A_STATIC A68_BOOL  SLEAAMM_anonymous(A68_275 * S)
{ 
A68_BOOL  TLEAAMM;  /* clause result */
TLEAAMM = A68_FALSE;
return( TLEAAMM );
} 
#undef NL

A_STATIC A68_VOID  ZEDAAMM_generator(A68_BOOL  XEDAAMM_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((AFDAAMM_generator *)NonLocals)->x)
{ 
A68_VC  BFDAAMM;  /* clause result */
A68_VC  CFDAAMM;  /* OPERATORS - dynamic generator */
{ 
CFDAAMM.upb = NL(TEDAAMM_upb) ;
( XEDAAMM_anonymous? A_VLOC(A68_CHAR ,CFDAAMM): A_VHEAP(A68_CHAR ,CFDAAMM) );
BFDAAMM = CFDAAMM;
} 
*ReturnedValue = (BFDAAMM);
return;
} 
#undef NL

A_STATIC A68_VOID  AGDAAMM_generator(A68_BOOL  YFDAAMM_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((BGDAAMM_generator *)NonLocals)->x)
{ 
A68_VC  CGDAAMM;  /* clause result */
A68_VC  DGDAAMM;  /* OPERATORS - dynamic generator */
{ 
DGDAAMM.upb = OHAAAMM_bufmax ;
( YFDAAMM_anonymous? A_VLOC(A68_CHAR ,DGDAAMM): A_VHEAP(A68_CHAR ,DGDAAMM) );
CGDAAMM = DGDAAMM;
} 
*ReturnedValue = (CGDAAMM);
return;
} 
#undef NL

A_STATIC A68_VOID  MGDAAMM_analyse_symbol(A68_275 * Sym, void *NonLocals)
#define NL(x) (((NGDAAMM_analyse_symbol *)NonLocals)->x)
{ 
A68_VC  OGDAAMM_text;
A68_INT  PGDAAMM_top;
A68_INT  QGDAAMM_pos;
A68_INT  RGDAAMM_start;
A68_INT  SGDAAMM_mark;
A68_BOOL  TGDAAMM_subs;
A68_BOOL  UGDAAMM_escape;
A68_CHAR  VGDAAMM_c;
A68_312  XGDAAMM_insert;   /* proc value of non-global proc */
A_PROC_ENTRY(analyse_symbol);
 /* line 96: */
 /* line 97: */
{ 
OGDAAMM_text = (*(&(Sym->Text)));
 /* line 98: */
PGDAAMM_top = OGDAAMM_text.upb;
 /* line 99: */
QGDAAMM_pos = 0;
RGDAAMM_start = 1;
SGDAAMM_mark = PGDAAMM_top;
 /* line 100: */
TGDAAMM_subs = A68_FALSE;
UGDAAMM_escape = A68_FALSE;
 /* line 101: */
 /* line 103: */
A_CLOSURE( XGDAAMM_insert, YGDAAMM_insert, ZGDAAMM_insert );
(( ZGDAAMM_insert * ) ( XGDAAMM_insert.nonlocals )) -> RGDAAMM_start = (&RGDAAMM_start);
(( ZGDAAMM_insert * ) ( XGDAAMM_insert.nonlocals )) -> QGDAAMM_pos = (&QGDAAMM_pos);
(( ZGDAAMM_insert * ) ( XGDAAMM_insert.nonlocals )) -> OGDAAMM_text = OGDAAMM_text;
(( ZGDAAMM_insert * ) ( XGDAAMM_insert.nonlocals )) -> LGDAAMM_analyse_symbol = NL(LGDAAMM_analyse_symbol);
(( ZGDAAMM_insert * ) ( XGDAAMM_insert.nonlocals )) -> EGDAAMM_buffer = NL(EGDAAMM_buffer);
(( ZGDAAMM_insert * ) ( XGDAAMM_insert.nonlocals )) -> IGDAAMM_bpos = NL(IGDAAMM_bpos);
 /* line 120: */
for ( ;; )
{ 
 /* line 121: */
 /* line 122: */
if ( !(((QGDAAMM_pos+=1)<=PGDAAMM_top)) ) break;
VGDAAMM_c = (*(&A_VINDEX(OGDAAMM_text,QGDAAMM_pos)));
 /* line 123: */
 /* line 124: */
if ( UGDAAMM_escape )
{ 
 /* line 125: */
UGDAAMM_escape = A68_FALSE;
} 
else
{ 
 /* line 126: */
if ( (VGDAAMM_c=='\'') )
{ 
A_CALLPROC(XGDAAMM_insert,(TGDAAMM_subs),(TGDAAMM_subs,(XGDAAMM_insert).nonlocals));
 /* line 127: */
 /* line 128: */
TGDAAMM_subs = !TGDAAMM_subs;
} 
else
{ 
 /* line 129: */
if ( (VGDAAMM_c=='\\') )
{ 
A_CALLPROC(XGDAAMM_insert,(A68_FALSE),(A68_FALSE,(XGDAAMM_insert).nonlocals));
 /* line 130: */
 /* line 131: */
 /* line 132: */
UGDAAMM_escape = A68_TRUE;
} 
} 
} 
}
 /* line 133: */
 /* line 134: */
A_CALLPROC(XGDAAMM_insert,(A68_FALSE),(A68_FALSE,(XGDAAMM_insert).nonlocals));
} 
A_PROC_EXIT(analyse_symbol);
return;
} 
#undef NL

A_STATIC A68_BOOL  JHDAAMM_try_action(A68_275 * S, void *NonLocals)
#define NL(x) (((KHDAAMM_try_action *)NonLocals)->x)
{ 
A68_VC  LHDAAMM;  /* OPERATORS - trim index */
A68_VC  MHDAAMM;  /* YIELD */
A68_VC  NHDAAMM;  /* OPERATORS - trim index */
A68_VC  OHDAAMM;  /* YIELD */
A68_VC  PHDAAMM;  /* OPERATORS - trim index */
A68_BOOL  QHDAAMM;  /* clause result */
A_PROC_ENTRY(try_action);
 /* line 137: */
 /* line 138: */
{ 
(*NL(IGDAAMM_bpos)) = 0;
 /* line 139: */
A_CALLPROC(NL(LGDAAMM_analyse_symbol),(S),(S,(NL(LGDAAMM_analyse_symbol)).nonlocals));
 /* line 140: */
(*NL(JGDAAMM_dtop)) = (*NL(IGDAAMM_bpos));
 /* line 141: */
MHDAAMM = A_VTRIM(LHDAAMM,(NL(EGDAAMM_buffer)),A_VTSCRIPT(&(LHDAAMM.upb),(NL(EGDAAMM_buffer)).upb,((*NL(IGDAAMM_bpos))+1),((*NL(IGDAAMM_bpos))+NL(GGDAAMM_nsize)))) ;
A_VASSIGN2(NL(Name),MHDAAMM,A68_CHAR );
 /* line 142: */
(*NL(IGDAAMM_bpos))+=NL(GGDAAMM_nsize);
 /* line 143: */
 /* line 144: */
if ( (NL(HGDAAMM_tsize)>0) )
{ 
OHDAAMM = A_VTRIM(NHDAAMM,(NL(EGDAAMM_buffer)),A_VTSCRIPT(&(NHDAAMM.upb),(NL(EGDAAMM_buffer)).upb,((*NL(IGDAAMM_bpos))+1),((*NL(IGDAAMM_bpos))+NL(HGDAAMM_tsize)))) ;
A_VASSIGN2(NL(Type),OHDAAMM,A68_CHAR );
 /* line 145: */
 /* line 146: */
(*NL(IGDAAMM_bpos))+=NL(HGDAAMM_tsize);
} 
 /* line 147: */
(*NL(XFDAAMM_found)) = ZDBAAMM_file_exists(A_VTRIM(PHDAAMM,(NL(EGDAAMM_buffer)),A_VTSCRIPT(&(PHDAAMM.upb),(NL(EGDAAMM_buffer)).upb,1,(*NL(IGDAAMM_bpos)))), NL(Msg));
 /* line 148: */
if ( NL(One_dir) )
{ 
QHDAAMM = A68_FALSE;
} 
else
{ 
 /* line 149: */
QHDAAMM = !(*NL(XFDAAMM_found));
} 
} 
A_PROC_EXIT(try_action);
return( QHDAAMM );
} 
#undef NL

A_STATIC A68_BOOL  NKDAAMM_action(A68_271 * M, A68_272  S, void *NonLocals)
#define NL(x) (((OKDAAMM_action *)NonLocals)->x)
{ 
A68_VC  PKDAAMM_av;
A68_320  QKDAAMM;  /* collateral clause result */
A68_52  RKDAAMM;  /* OPERATORS - mode -> union mode */
A68_52  SKDAAMM;  /* OPERATORS - mode -> union mode */
A68_56  TKDAAMM;  /* procedure value */
A68_85  UKDAAMM;  /* OPERATORS - istruct -> vector */
A68_52  XKDAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  YKDAAMM;  /* YIELD */
A68_85  ZKDAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  ALDAAMM;  /* optbool result */
A68_VC  BLDAAMM;  /* avoid structure result */
A68_320  CLDAAMM;  /* collateral clause result */
A68_52  DLDAAMM;  /* OPERATORS - mode -> union mode */
A68_56  ELDAAMM;  /* procedure value */
A68_52  HLDAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  ILDAAMM;  /* YIELD */
A68_85  JLDAAMM;  /* OPERATORS - istruct -> vector */
A68_323  KLDAAMM;  /* collateral clause result */
A68_52  NLDAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  OLDAAMM;  /* YIELD */
A68_52  PLDAAMM;  /* OPERATORS - mode -> union mode */
A68_52  QLDAAMM;  /* OPERATORS - mode -> union mode */
A68_CHAR  RLDAAMM;  /* YIELD */
A68_85  SLDAAMM;  /* OPERATORS - istruct -> vector */
A68_52  TLDAAMM;  /* OPERATORS - mode -> union mode */
A68_56  ULDAAMM;  /* procedure value */
A68_85  VLDAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  WLDAAMM;  /* clause result */
A_PROC_ENTRY(action);
 /* line 224: */
 /* line 225: */
{ 
 /* line 227: */
 /* line 228: */
if ( ZUAAAMM_attribute_marked(M, QPAAAMM_compile_attribute) )
{ 
 /* line 229: */
if ( (*NL(IKDAAMM_first)) )
{ 
(*NL(IKDAAMM_first)) = A68_FALSE;
 /* line 230: */
QKDAAMM.data[0] = A_UNITE(RKDAAMM,mode7,7,NL(Heading));
TKDAAMM.fn.fn_global = LRAAOSL_newline;
TKDAAMM.nonlocals = A68_NIL;
QKDAAMM.data[1] = A_UNITE(SKDAAMM,mode12,12,TKDAAMM);
 /* line 231: */
GFBAOSL_put(NL(List), A_HISVEC(UKDAAMM,QKDAAMM,2,A68_52 ));
} 
 /* line 232: */
YKDAAMM = WKDAAMM ;
GFBAOSL_put(NL(List), A_HVEC(ZKDAAMM,A_UNITE(XKDAAMM,mode7,7,YKDAAMM),A68_52 ));
 /* line 233: */
 /* line 234: */
ALDAAMM = KJDAAMM_put_module_name(NL(List), M, A68_TRUE, NL(Msg));
if ( ALDAAMM )
{ALDAAMM = (*NL(JKDAAMM_files_found));
}
(*NL(JKDAAMM_files_found)) = ALDAAMM;
 /* line 235: */
KTAAAMM_attribute_value( M, QPAAAMM_compile_attribute, &BLDAAMM );
PKDAAMM_av = BLDAAMM;
 /* line 236: */
 /* line 237: */
if ( A_VC_NE(PKDAAMM_av,RDAAAMM_on_string) )
{ 
 /* line 238: */
if ( (EPAAOSL_charsleft(NL(List))<(PKDAAMM_av.upb+3)) )
{ 
ELDAAMM.fn.fn_global = LRAAOSL_newline;
ELDAAMM.nonlocals = A68_NIL;
CLDAAMM.data[0] = A_UNITE(DLDAAMM,mode12,12,ELDAAMM);
ILDAAMM = GLDAAMM ;
CLDAAMM.data[1] = A_UNITE(HLDAAMM,mode7,7,ILDAAMM);
 /* line 239: */
GFBAOSL_put(NL(List), A_HISVEC(JLDAAMM,CLDAAMM,2,A68_52 ));
} 
 /* line 240: */
OLDAAMM = MLDAAMM ;
KLDAAMM.data[0] = A_UNITE(NLDAAMM,mode7,7,OLDAAMM);
KLDAAMM.data[1] = A_UNITE(PLDAAMM,mode7,7,PKDAAMM_av);
RLDAAMM = ']' ;
KLDAAMM.data[2] = A_UNITE(QLDAAMM,mode6,6,RLDAAMM);
 /* line 241: */
GFBAOSL_put(NL(List), A_HISVEC(SLDAAMM,KLDAAMM,3,A68_52 ));
} 
 /* line 242: */
 /* line 243: */
ULDAAMM.fn.fn_global = LRAAOSL_newline;
ULDAAMM.nonlocals = A68_NIL;
GFBAOSL_put(NL(List), A_HVEC(VLDAAMM,A_UNITE(TLDAAMM,mode12,12,ULDAAMM),A68_52 ));
} 
 /* line 244: */
 /* line 245: */
WLDAAMM = A68_TRUE;
} 
A_PROC_EXIT(action);
return( WLDAAMM );
} 
#undef NL

A_STATIC A68_BOOL  NMDAAMM_action(A68_271 * M, A68_272  S, void *NonLocals)
#define NL(x) (((OMDAAMM_action *)NonLocals)->x)
{ 
A68_320  PMDAAMM;  /* collateral clause result */
A68_52  QMDAAMM;  /* OPERATORS - mode -> union mode */
A68_52  RMDAAMM;  /* OPERATORS - mode -> union mode */
A68_56  SMDAAMM;  /* procedure value */
A68_85  TMDAAMM;  /* OPERATORS - istruct -> vector */
A68_327  UMDAAMM;  /* collateral clause result */
A68_52  XMDAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  YMDAAMM;  /* YIELD */
A68_52  ZMDAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  ANDAAMM;  /* YIELD */
A68_52  DNDAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  ENDAAMM;  /* YIELD */
A68_VC  FNDAAMM;  /* avoid structure result */
A68_52  GNDAAMM;  /* OPERATORS - mode -> union mode */
A68_52  JNDAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  KNDAAMM;  /* YIELD */
A68_VC  LNDAAMM;  /* avoid structure result */
A68_52  MNDAAMM;  /* OPERATORS - mode -> union mode */
A68_52  NNDAAMM;  /* OPERATORS - mode -> union mode */
A68_56  ONDAAMM;  /* procedure value */
A68_85  PNDAAMM;  /* OPERATORS - istruct -> vector */
A68_BOOL  QNDAAMM;  /* clause result */
A_PROC_ENTRY(action);
 /* line 257: */
 /* line 258: */
{ 
 /* line 259: */
if ( ZUAAAMM_attribute_marked(M, RPAAAMM_link_attribute) )
{ 
 /* line 260: */
if ( (*NL(JMDAAMM_first)) )
{ 
(*NL(JMDAAMM_first)) = A68_FALSE;
 /* line 261: */
PMDAAMM.data[0] = A_UNITE(QMDAAMM,mode7,7,NL(Heading));
SMDAAMM.fn.fn_global = LRAAOSL_newline;
SMDAAMM.nonlocals = A68_NIL;
PMDAAMM.data[1] = A_UNITE(RMDAAMM,mode12,12,SMDAAMM);
 /* line 262: */
GFBAOSL_put(NL(List), A_HISVEC(TMDAAMM,PMDAAMM,2,A68_52 ));
} 
 /* line 263: */
YMDAAMM = WMDAAMM ;
UMDAAMM.data[0] = A_UNITE(XMDAAMM,mode7,7,YMDAAMM);
 /* line 264: */
ANDAAMM = (*(&(M->Name))) ;
UMDAAMM.data[1] = A_UNITE(ZMDAAMM,mode7,7,ANDAAMM);
ENDAAMM = CNDAAMM ;
UMDAAMM.data[2] = A_UNITE(DNDAAMM,mode7,7,ENDAAMM);
 /* line 265: */
KTAAAMM_attribute_value( M, SPAAAMM_debug_attribute, &FNDAAMM );
UMDAAMM.data[3] = A_UNITE(GNDAAMM,mode7,7,FNDAAMM);
KNDAAMM = INDAAMM ;
UMDAAMM.data[4] = A_UNITE(JNDAAMM,mode7,7,KNDAAMM);
 /* line 266: */
KTAAAMM_attribute_value( M, VPAAAMM_exename_attribute, &LNDAAMM );
UMDAAMM.data[5] = A_UNITE(MNDAAMM,mode7,7,LNDAAMM);
ONDAAMM.fn.fn_global = LRAAOSL_newline;
ONDAAMM.nonlocals = A68_NIL;
UMDAAMM.data[6] = A_UNITE(NNDAAMM,mode12,12,ONDAAMM);
 /* line 267: */
GFBAOSL_put(NL(List), A_HISVEC(PNDAAMM,UMDAAMM,7,A68_52 ));
} 
 /* line 268: */
 /* line 269: */
QNDAAMM = A68_TRUE;
} 
A_PROC_EXIT(action);
return( QNDAAMM );
} 
#undef NL

A_STATIC A68_VOID  HODAAMM_generator(A68_BOOL  FODAAMM_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((IODAAMM_generator *)NonLocals)->x)
{ 
A68_VC  JODAAMM;  /* clause result */
A68_VC  KODAAMM;  /* OPERATORS - dynamic generator */
{ 
KODAAMM.upb = NL(EODAAMM_an).upb ;
( FODAAMM_anonymous? A_VLOC(A68_CHAR ,KODAAMM): A_VHEAP(A68_CHAR ,KODAAMM) );
JODAAMM = KODAAMM;
} 
*ReturnedValue = (JODAAMM);
return;
} 
#undef NL

A_STATIC A68_BOOL  QODAAMM_action(A68_271 * M, A68_272  S, void *NonLocals)
#define NL(x) (((RODAAMM_action *)NonLocals)->x)
{ 
A68_323  SODAAMM;  /* collateral clause result */
A68_52  TODAAMM;  /* OPERATORS - mode -> union mode */
A68_52  WODAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  XODAAMM;  /* YIELD */
A68_52  YODAAMM;  /* OPERATORS - mode -> union mode */
A68_56  ZODAAMM;  /* procedure value */
A68_85  APDAAMM;  /* OPERATORS - istruct -> vector */
A68_323  BPDAAMM;  /* collateral clause result */
A68_52  EPDAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  FPDAAMM;  /* YIELD */
A68_52  GPDAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  HPDAAMM;  /* YIELD */
A68_52  IPDAAMM;  /* OPERATORS - mode -> union mode */
A68_56  JPDAAMM;  /* procedure value */
A68_85  KPDAAMM;  /* OPERATORS - istruct -> vector */
A68_BOOL  LPDAAMM;  /* clause result */
A_PROC_ENTRY(action);
 /* line 282: */
 /* line 283: */
{ 
 /* line 284: */
if ( ZUAAAMM_attribute_marked(M, NL(Attribute_number)) )
{ 
 /* line 285: */
if ( (*NL(CODAAMM_first)) )
{ 
(*NL(CODAAMM_first)) = A68_FALSE;
 /* line 286: */
SODAAMM.data[0] = A_UNITE(TODAAMM,mode7,7,NL(LODAAMM_list_name));
XODAAMM = VODAAMM ;
SODAAMM.data[1] = A_UNITE(WODAAMM,mode7,7,XODAAMM);
ZODAAMM.fn.fn_global = LRAAOSL_newline;
ZODAAMM.nonlocals = A68_NIL;
SODAAMM.data[2] = A_UNITE(YODAAMM,mode12,12,ZODAAMM);
 /* line 287: */
GFBAOSL_put(NL(List), A_HISVEC(APDAAMM,SODAAMM,3,A68_52 ));
} 
 /* line 288: */
FPDAAMM = DPDAAMM ;
BPDAAMM.data[0] = A_UNITE(EPDAAMM,mode7,7,FPDAAMM);
HPDAAMM = (*(&(M->Name))) ;
BPDAAMM.data[1] = A_UNITE(GPDAAMM,mode7,7,HPDAAMM);
JPDAAMM.fn.fn_global = LRAAOSL_newline;
JPDAAMM.nonlocals = A68_NIL;
BPDAAMM.data[2] = A_UNITE(IPDAAMM,mode12,12,JPDAAMM);
 /* line 289: */
GFBAOSL_put(NL(List), A_HISVEC(KPDAAMM,BPDAAMM,3,A68_52 ));
} 
 /* line 290: */
 /* line 291: */
LPDAAMM = A68_TRUE;
} 
A_PROC_EXIT(action);
return( LPDAAMM );
} 
#undef NL

A_STATIC A68_VOID  FQDAAMM_generator(A68_BOOL  DQDAAMM_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((GQDAAMM_generator *)NonLocals)->x)
{ 
A68_VC  HQDAAMM;  /* clause result */
A68_VC  IQDAAMM;  /* OPERATORS - dynamic generator */
{ 
IQDAAMM.upb = (NL(CQDAAMM_ttop)+4) ;
( DQDAAMM_anonymous? A_VLOC(A68_CHAR ,IQDAAMM): A_VHEAP(A68_CHAR ,IQDAAMM) );
HQDAAMM = IQDAAMM;
} 
*ReturnedValue = (HQDAAMM);
return;
} 
#undef NL

A_STATIC A68_BOOL  QQDAAMM_show_sym(A68_275 * S, void *NonLocals)
#define NL(x) (((RQDAAMM_show_sym *)NonLocals)->x)
{ 
A68_323  SQDAAMM;  /* collateral clause result */
A68_52  TQDAAMM;  /* OPERATORS - mode -> union mode */
A68_52  UQDAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  VQDAAMM;  /* YIELD */
A68_52  WQDAAMM;  /* OPERATORS - mode -> union mode */
A68_56  XQDAAMM;  /* procedure value */
A68_85  YQDAAMM;  /* OPERATORS - istruct -> vector */
A68_146  ZQDAAMM;  /* OPERATORS - mode -> union mode */
A68_BOOL  ARDAAMM;  /* clause result */
A_PROC_ENTRY(show_sym);
 /* line 308: */
 /* line 309: */
{ 
SQDAAMM.data[0] = A_UNITE(TQDAAMM,mode7,7,NL(JQDAAMM_heading));
VQDAAMM = (*(&(S->Text))) ;
SQDAAMM.data[1] = A_UNITE(UQDAAMM,mode7,7,VQDAAMM);
XQDAAMM.fn.fn_global = LRAAOSL_newline;
XQDAAMM.nonlocals = A68_NIL;
SQDAAMM.data[2] = A_UNITE(WQDAAMM,mode12,12,XQDAAMM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(YQDAAMM,SQDAAMM,3,A68_52 ));
 /* line 310: */
VTCAOST_clear(A_UNITE(ZQDAAMM,mode1,1,NL(JQDAAMM_heading)));
 /* line 311: */
 /* line 312: */
ARDAAMM = (*NL(NQDAAMM_found)) = A68_TRUE;
} 
A_PROC_EXIT(show_sym);
return( ARDAAMM );
} 
#undef NL

A_STATIC A68_VOID  RSDAAMM_generator(A68_BOOL  PSDAAMM_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((SSDAAMM_generator *)NonLocals)->x)
{ 
A68_VC  TSDAAMM;  /* clause result */
A68_VC  USDAAMM;  /* OPERATORS - dynamic generator */
{ 
USDAAMM.upb = NL(OSDAAMM_an).upb ;
( PSDAAMM_anonymous? A_VLOC(A68_CHAR ,USDAAMM): A_VHEAP(A68_CHAR ,USDAAMM) );
TSDAAMM = USDAAMM;
} 
*ReturnedValue = (TSDAAMM);
return;
} 
#undef NL

A_STATIC A68_BOOL  ATDAAMM_clear_action(A68_271 * M, A68_272  S, void *NonLocals)
#define NL(x) (((BTDAAMM_clear_action *)NonLocals)->x)
{ 
A68_BOOL  CTDAAMM;  /* optbool result */
A68_52  FTDAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  GTDAAMM;  /* YIELD */
A68_85  HTDAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_336  ITDAAMM;  /* collateral clause result */
A68_52  LTDAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  MTDAAMM;  /* YIELD */
A68_52  NTDAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  OTDAAMM;  /* YIELD */
A68_52  RTDAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  STDAAMM;  /* YIELD */
A68_52  TTDAAMM;  /* OPERATORS - mode -> union mode */
A68_52  WTDAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  XTDAAMM;  /* YIELD */
A68_52  YTDAAMM;  /* OPERATORS - mode -> union mode */
A68_56  ZTDAAMM;  /* procedure value */
A68_85  AUDAAMM;  /* OPERATORS - istruct -> vector */
A68_336  BUDAAMM;  /* collateral clause result */
A68_52  EUDAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  FUDAAMM;  /* YIELD */
A68_52  GUDAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  HUDAAMM;  /* YIELD */
A68_52  KUDAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  LUDAAMM;  /* YIELD */
A68_52  MUDAAMM;  /* OPERATORS - mode -> union mode */
A68_52  PUDAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  QUDAAMM;  /* YIELD */
A68_52  RUDAAMM;  /* OPERATORS - mode -> union mode */
A68_56  SUDAAMM;  /* procedure value */
A68_85  TUDAAMM;  /* OPERATORS - istruct -> vector */
A68_BOOL  UUDAAMM;  /* clause result */
A_PROC_ENTRY(clear_action);
 /* line 387: */
 /* line 388: */
{ 
CTDAAMM = NL(All);
if ( ! CTDAAMM )
{CTDAAMM = A_VC_EQ(NL(Name),(*(&(M->Name))));
}
 /* line 389: */
if ( CTDAAMM )
{ 
 /* line 390: */
if ( A_CALLPROC(NL(Undo_action),(M, NL(Attribute_number)),(M, NL(Attribute_number),(NL(Undo_action)).nonlocals)) )
{ 
if ( NL(Warning) )
{ 
GTDAAMM = ETDAAMM ;
GFBAOSL_put(KEAAOST_screen, A_HVEC(HTDAAMM,A_UNITE(FTDAAMM,mode7,7,GTDAAMM),A68_52 ));
} 
 /* line 391: */
MTDAAMM = KTDAAMM ;
ITDAAMM.data[0] = A_UNITE(LTDAAMM,mode7,7,MTDAAMM);
 /* line 392: */
OTDAAMM = (*(&(M->Name))) ;
ITDAAMM.data[1] = A_UNITE(NTDAAMM,mode7,7,OTDAAMM);
STDAAMM = QTDAAMM ;
ITDAAMM.data[2] = A_UNITE(RTDAAMM,mode7,7,STDAAMM);
ITDAAMM.data[3] = A_UNITE(TTDAAMM,mode7,7,NL(VSDAAMM_list_name));
XTDAAMM = VTDAAMM ;
ITDAAMM.data[4] = A_UNITE(WTDAAMM,mode7,7,XTDAAMM);
ZTDAAMM.fn.fn_global = LRAAOSL_newline;
ZTDAAMM.nonlocals = A68_NIL;
ITDAAMM.data[5] = A_UNITE(YTDAAMM,mode12,12,ZTDAAMM);
 /* line 393: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(AUDAAMM,ITDAAMM,6,A68_52 ));
} 
else
{ 
 /* line 394: */
if ( !NL(All) )
{ 
FUDAAMM = DUDAAMM ;
BUDAAMM.data[0] = A_UNITE(EUDAAMM,mode7,7,FUDAAMM);
 /* line 395: */
HUDAAMM = (*(&(M->Name))) ;
BUDAAMM.data[1] = A_UNITE(GUDAAMM,mode7,7,HUDAAMM);
LUDAAMM = JUDAAMM ;
BUDAAMM.data[2] = A_UNITE(KUDAAMM,mode7,7,LUDAAMM);
BUDAAMM.data[3] = A_UNITE(MUDAAMM,mode7,7,NL(VSDAAMM_list_name));
QUDAAMM = OUDAAMM ;
BUDAAMM.data[4] = A_UNITE(PUDAAMM,mode7,7,QUDAAMM);
SUDAAMM.fn.fn_global = LRAAOSL_newline;
SUDAAMM.nonlocals = A68_NIL;
BUDAAMM.data[5] = A_UNITE(RUDAAMM,mode12,12,SUDAAMM);
 /* line 396: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(TUDAAMM,BUDAAMM,6,A68_52 ));
} 
} 
 /* line 397: */
 /* line 398: */
 /* line 399: */
UUDAAMM = NL(All);
} 
else
{ 
 /* line 400: */
 /* line 401: */
UUDAAMM = A68_TRUE;
} 
} 
A_PROC_EXIT(clear_action);
return( UUDAAMM );
} 
#undef NL

A_STATIC A68_BOOL  JWDAAMM_check_for_action(A68_275 * S, void *NonLocals)
#define NL(x) (((KWDAAMM_check_for_action *)NonLocals)->x)
{ 
A68_BOOL  LWDAAMM;  /* clause result */
A_PROC_ENTRY(check_for_action);
 /* line 439: */
 /* line 440: */
{ 
(*NL(DWDAAMM_action_symbols)) = (A68_BITS )((*NL(DWDAAMM_action_symbols))|(A68_BITS )((*(&(S->Tags)))&KJAAAMM_action_tag));
 /* line 441: */
 /* line 442: */
LWDAAMM = ((*NL(DWDAAMM_action_symbols))!=KJAAAMM_action_tag);
} 
A_PROC_EXIT(check_for_action);
return( LWDAAMM );
} 
#undef NL
 /* line 445: */
 /* line 446: */

A_STATIC A68_BOOL  PWDAAMM_set_interface_symbols(A68_271 * M, A68_VC  Full_name, A68_VC  Exe_name)
{ 
A68_BOOL  QWDAAMM_debug;
A68_VC * RWDAAMM;  /* YIELD */
A68_VC * SWDAAMM;  /* YIELD */
A68_VC * TWDAAMM;  /* YIELD */
A68_VC  UWDAAMM;  /* avoid structure result */
A68_VC * VWDAAMM;  /* YIELD */
A68_VC  WWDAAMM;  /* avoid structure result */
A68_VC * XWDAAMM;  /* YIELD */
A68_VC  YWDAAMM;  /* avoid structure result */
A68_VC * ZWDAAMM;  /* YIELD */
A68_VC  AXDAAMM;  /* clause result */
A68_VC * BXDAAMM;  /* YIELD */
A68_VC  CXDAAMM;  /* clause result */
A68_VC * DXDAAMM;  /* YIELD */
A68_BOOL  EXDAAMM;  /* clause result */
A_PROC_ENTRY(set_interface_symbols);
 /* line 447: */
 /* line 448: */
{ 
QWDAAMM_debug = QTAAAMM_attribute_state(M, SPAAAMM_debug_attribute);
 /* line 450: */
RWDAAMM = (&(PVDAAMM_modname_symbol->Text)) ;
(*RWDAAMM) = (*(&(M->Name)));
 /* line 451: */
SWDAAMM = (&(QVDAAMM_srcname_symbol->Text)) ;
(*SWDAAMM) = Full_name;
 /* line 452: */
TWDAAMM = (&(WVDAAMM_exename_symbol->Text)) ;
(*TWDAAMM) = Exe_name;
 /* line 453: */
KTAAAMM_attribute_value( M, TPAAAMM_star_attribute, &UWDAAMM );
VWDAAMM = (&(RVDAAMM_stars_symbol->Text)) ;
(*VWDAAMM) = UWDAAMM;
 /* line 454: */
KTAAAMM_attribute_value( M, UPAAAMM_heap_attribute, &WWDAAMM );
XWDAAMM = (&(SVDAAMM_heap_symbol->Text)) ;
(*XWDAAMM) = WWDAAMM;
 /* line 455: */
KTAAAMM_attribute_value( M, XPAAAMM_optimise_attribute, &YWDAAMM );
ZWDAAMM = (&(TVDAAMM_optimise_symbol->Text)) ;
(*ZWDAAMM) = YWDAAMM;
 /* line 456: */
 /* line 457: */
if ( (*(&(M->Decs))) )
{ 
AXDAAMM = IDAAAMM_false_string;
} 
else
{ 
AXDAAMM = ZCAAAMM_true_string;
} 
BXDAAMM = (&(UVDAAMM_prog_symbol->Text)) ;
(*BXDAAMM) = AXDAAMM;
 /* line 458: */
 /* line 459: */
if ( QWDAAMM_debug )
{ 
CXDAAMM = ZCAAAMM_true_string;
} 
else
{ 
CXDAAMM = IDAAAMM_false_string;
} 
DXDAAMM = (&(VVDAAMM_debug_symbol->Text)) ;
(*DXDAAMM) = CXDAAMM;
 /* line 460: */
 /* line 461: */
EXDAAMM = QWDAAMM_debug;
} 
A_PROC_EXIT(set_interface_symbols);
return( EXDAAMM );
} 
#undef NL

A_STATIC A68_BOOL  HXDAAMM_check_combined_uses(A68_271 * M, A68_272  S)
{ 
A68_BOOL  IXDAAMM;  /* clause result */
A_PROC_ENTRY(check_combined_uses);
 /* line 464: */
 /* line 465: */
 /* line 466: */
IXDAAMM = !ZUAAAMM_attribute_marked(M, QPAAAMM_compile_attribute);
A_PROC_EXIT(check_combined_uses);
return( IXDAAMM );
} 
#undef NL

A_STATIC A68_BOOL  LXDAAMM_check_separate_uses(A68_271 * M, A68_272  S)
{ 
A68_BOOL  MXDAAMM;  /* clause result */
A68_VC  NXDAAMM;  /* avoid structure result */
A_PROC_ENTRY(check_separate_uses);
 /* line 469: */
 /* line 470: */
{ 
 /* line 471: */
if ( ZUAAAMM_attribute_marked(M, QPAAAMM_compile_attribute) )
{ 
 /* line 472: */
 /* line 473: */
KTAAAMM_attribute_value( M, QPAAAMM_compile_attribute, &NXDAAMM );
MXDAAMM = A_VC_EQ(NXDAAMM,JEAAAMM_cc_string);
} 
else
{ 
 /* line 474: */
 /* line 475: */
MXDAAMM = A68_TRUE;
} 
} 
A_PROC_EXIT(check_separate_uses);
return( MXDAAMM );
} 
#undef NL

A_STATIC A68_BOOL  TXDAAMM_compile_action(A68_271 * M, A68_272  S, void *NonLocals)
#define NL(x) (((UXDAAMM_compile_action *)NonLocals)->x)
{ 
A68_270 * VXDAAMM_ml;
A68_VC  WXDAAMM_av;
A68_VC  XXDAAMM;  /* avoid structure result */
A68_BOOL  YXDAAMM;  /* optbool result */
A68_BOOL  ZXDAAMM;  /* optbool result */
A68_332  AYDAAMM;  /* collateral clause result */
A68_52  DYDAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  EYDAAMM;  /* YIELD */
A68_52  FYDAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  GYDAAMM;  /* YIELD */
A68_52  JYDAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  KYDAAMM;  /* YIELD */
A68_52  LYDAAMM;  /* OPERATORS - mode -> union mode */
A68_56  MYDAAMM;  /* procedure value */
A68_85  NYDAAMM;  /* OPERATORS - istruct -> vector */
A68_341  OYDAAMM;  /* collateral clause result */
A68_52  RYDAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  SYDAAMM;  /* YIELD */
A68_52  TYDAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  UYDAAMM;  /* YIELD */
A68_52  XYDAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  YYDAAMM;  /* YIELD */
A68_52  ZYDAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  AZDAAMM;  /* YIELD */
A68_52  BZDAAMM;  /* OPERATORS - mode -> union mode */
A68_56  CZDAAMM;  /* procedure value */
A68_85  DZDAAMM;  /* OPERATORS - istruct -> vector */
A68_BOOL  EZDAAMM_debug;
A68_332  FZDAAMM;  /* collateral clause result */
A68_52  IZDAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  JZDAAMM;  /* YIELD */
A68_52  KZDAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  LZDAAMM;  /* YIELD */
A68_52  MZDAAMM;  /* OPERATORS - mode -> union mode */
A68_CHAR  NZDAAMM;  /* YIELD */
A68_52  OZDAAMM;  /* OPERATORS - mode -> union mode */
A68_85  PZDAAMM;  /* OPERATORS - istruct -> vector */
A68_VC  QZDAAMM;  /* avoid structure result */
A68_46  RZDAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_341  SZDAAMM;  /* collateral clause result */
A68_52  VZDAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  WZDAAMM;  /* YIELD */
A68_52  XZDAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  YZDAAMM;  /* YIELD */
A68_52  BAEAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  CAEAAMM;  /* YIELD */
A68_52  DAEAAMM;  /* OPERATORS - mode -> union mode */
A68_52  EAEAAMM;  /* OPERATORS - mode -> union mode */
A68_56  FAEAAMM;  /* procedure value */
A68_85  GAEAAMM;  /* OPERATORS - istruct -> vector */
A68_302  HAEAAMM;  /* OPERATORS - mode -> union mode */
A68_332  IAEAAMM;  /* collateral clause result */
A68_52  LAEAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  MAEAAMM;  /* YIELD */
A68_52  NAEAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  OAEAAMM;  /* YIELD */
A68_52  RAEAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  SAEAAMM;  /* YIELD */
A68_52  TAEAAMM;  /* OPERATORS - mode -> union mode */
A68_56  UAEAAMM;  /* procedure value */
A68_85  VAEAAMM;  /* OPERATORS - istruct -> vector */
A68_VC  WAEAAMM;  /* avoid structure result */
A68_302  XAEAAMM;  /* OPERATORS - mode -> union mode */
A68_302  YAEAAMM;  /* OPERATORS - mode -> union mode */
A68_327  ZAEAAMM;  /* collateral clause result */
A68_52  CBEAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  DBEAAMM;  /* YIELD */
A68_52  EBEAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  FBEAAMM;  /* YIELD */
A68_52  IBEAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  JBEAAMM;  /* YIELD */
A68_52  KBEAAMM;  /* OPERATORS - mode -> union mode */
A68_52  NBEAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  OBEAAMM;  /* YIELD */
A68_52  RBEAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  SBEAAMM;  /* YIELD */
A68_52  VBEAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  WBEAAMM;  /* YIELD */
A68_52  XBEAAMM;  /* OPERATORS - mode -> union mode */
A68_56  YBEAAMM;  /* procedure value */
A68_85  ZBEAAMM;  /* OPERATORS - istruct -> vector */
A68_332  ACEAAMM;  /* collateral clause result */
A68_52  DCEAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  ECEAAMM;  /* YIELD */
A68_52  FCEAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  GCEAAMM;  /* YIELD */
A68_52  JCEAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  KCEAAMM;  /* YIELD */
A68_52  LCEAAMM;  /* OPERATORS - mode -> union mode */
A68_56  MCEAAMM;  /* procedure value */
A68_85  NCEAAMM;  /* OPERATORS - istruct -> vector */
A68_302  OCEAAMM;  /* OPERATORS - mode -> union mode */
A68_BOOL  PCEAAMM;  /* clause result */
A_PROC_ENTRY(compile_action);
 /* line 480: */
 /* line 481: */
{ 
 /* line 482: */
 /* line 484: */
 /* line 486: */
if ( !ZUAAAMM_attribute_marked(M, QPAAAMM_compile_attribute) )
{ 
/*SKIP*/;
} 
else
{ 
 /* line 487: */
KTAAAMM_attribute_value( M, QPAAAMM_compile_attribute, &XXDAAMM );
YXDAAMM = A_VC_EQ(WXDAAMM_av = XXDAAMM,JEAAAMM_cc_string);
if ( YXDAAMM )
{YXDAAMM = (*NL(EWDAAMM_sep_trans_from_cc));
}
 /* line 489: */
if ( YXDAAMM )
{ 
/*SKIP*/;
} 
else
{ 
ZXDAAMM = A_VC_EQ(WXDAAMM_av,BFAAAMM_failed_string);
if ( ! ZXDAAMM )
{ZXDAAMM = A_VC_EQ(WXDAAMM_av,KFAAAMM_trfailed_string);
}
 /* line 490: */
if ( ZXDAAMM )
{ 
EYDAAMM = CYDAAMM ;
AYDAAMM.data[0] = A_UNITE(DYDAAMM,mode7,7,EYDAAMM);
GYDAAMM = (*(&(M->Name))) ;
AYDAAMM.data[1] = A_UNITE(FYDAAMM,mode7,7,GYDAAMM);
 /* line 491: */
KYDAAMM = IYDAAMM ;
AYDAAMM.data[2] = A_UNITE(JYDAAMM,mode7,7,KYDAAMM);
MYDAAMM.fn.fn_global = LRAAOSL_newline;
MYDAAMM.nonlocals = A68_NIL;
AYDAAMM.data[3] = A_UNITE(LYDAAMM,mode12,12,MYDAAMM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(NYDAAMM,AYDAAMM,4,A68_52 ));
 /* line 492: */
 /* line 493: */
(*NL(FWDAAMM_goto_next_stage)) = A68_FALSE;
} 
else
{ 
 /* line 494: */
 /* line 495: */
if ( ((VXDAAMM_ml = SBBAAMM_scanmodules((*(&(M->Uses))), (*NL(OXDAAMM_check_uses))))!=KBAAAMM_nilmodulelist) )
{ 
SYDAAMM = QYDAAMM ;
OYDAAMM.data[0] = A_UNITE(RYDAAMM,mode7,7,SYDAAMM);
 /* line 496: */
UYDAAMM = (*(&(M->Name))) ;
OYDAAMM.data[1] = A_UNITE(TYDAAMM,mode7,7,UYDAAMM);
YYDAAMM = WYDAAMM ;
OYDAAMM.data[2] = A_UNITE(XYDAAMM,mode7,7,YYDAAMM);
 /* line 497: */
AZDAAMM = (*(&((*(&(VXDAAMM_ml->Module)))->Name))) ;
OYDAAMM.data[3] = A_UNITE(ZYDAAMM,mode7,7,AZDAAMM);
CZDAAMM.fn.fn_global = LRAAOSL_newline;
CZDAAMM.nonlocals = A68_NIL;
OYDAAMM.data[4] = A_UNITE(BZDAAMM,mode12,12,CZDAAMM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(DZDAAMM,OYDAAMM,5,A68_52 ));
 /* line 498: */
 /* line 499: */
 /* line 500: */
(*NL(FWDAAMM_goto_next_stage)) = A68_FALSE;
} 
else
{ 
 /* line 502: */
 /* line 503: */
if ( !AJDAAMM_check_module_file(M, PFDAAMM_all_directories, NL(CWDAAMM_full_name), NL(Msg)) )
{ 
JZDAAMM = HZDAAMM ;
FZDAAMM.data[0] = A_UNITE(IZDAAMM,mode7,7,JZDAAMM);
LZDAAMM = (*(&(M->Name))) ;
FZDAAMM.data[1] = A_UNITE(KZDAAMM,mode7,7,LZDAAMM);
NZDAAMM = ' ' ;
FZDAAMM.data[2] = A_UNITE(MZDAAMM,mode6,6,NZDAAMM);
FZDAAMM.data[3] = A_UNITE(OZDAAMM,mode7,7,(*NL(CWDAAMM_full_name)));
 /* line 504: */
UJBAOSL_oneline( A_HISVEC(PZDAAMM,FZDAAMM,4,A68_52 ), &QZDAAMM );
A_CALLPROC(NL(Msg),(WHAAOSI_user, A_HVEC(RZDAAMM,QZDAAMM,A68_VC )),(WHAAOSI_user, A_HVEC(RZDAAMM,QZDAAMM,A68_VC ),(NL(Msg)).nonlocals));
} 
 /* line 506: */
EZDAAMM_debug = PWDAAMM_set_interface_symbols(M, (*NL(CWDAAMM_full_name)), BCAAAMM_blankname);
 /* line 507: */
 /* line 508: */
if ( (*NL(EWDAAMM_sep_trans_from_cc)) )
{ 
WZDAAMM = UZDAAMM ;
SZDAAMM.data[0] = A_UNITE(VZDAAMM,mode7,7,WZDAAMM);
YZDAAMM = (*(&(M->Name))) ;
SZDAAMM.data[1] = A_UNITE(XZDAAMM,mode7,7,YZDAAMM);
CAEAAMM = AAEAAMM ;
SZDAAMM.data[2] = A_UNITE(BAEAAMM,mode7,7,CAEAAMM);
 /* line 509: */
SZDAAMM.data[3] = A_UNITE(DAEAAMM,mode7,7,(*NL(CWDAAMM_full_name)));
FAEAAMM.fn.fn_global = LRAAOSL_newline;
FAEAAMM.nonlocals = A68_NIL;
SZDAAMM.data[4] = A_UNITE(EAEAAMM,mode12,12,FAEAAMM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(GAEAAMM,SZDAAMM,5,A68_52 ));
 /* line 511: */
 /* line 512: */
if ( ZXCAAMM_translate_oscommands(CGAAAMM_translate_string, NL(Msg)) )
{ 
 /* line 513: */
if ( A_VC_NE(WXDAAMM_av,SEAAAMM_tr_string) )
{ 
 /* line 514: */
 /* line 515: */
YTAAAMM_set_attribute(M, QPAAAMM_compile_attribute, A_UNITE(HAEAAMM,mode1,1,JEAAAMM_cc_string));
} 
else
{ 
 /* line 516: */
 /* line 517: */
 /* line 518: */
ZRDAAMM_unmark_compile(M, QPAAAMM_compile_attribute);
} 
} 
else
{ 
MAEAAMM = KAEAAMM ;
IAEAAMM.data[0] = A_UNITE(LAEAAMM,mode7,7,MAEAAMM);
 /* line 519: */
OAEAAMM = (*(&(M->Name))) ;
IAEAAMM.data[1] = A_UNITE(NAEAAMM,mode7,7,OAEAAMM);
SAEAAMM = QAEAAMM ;
IAEAAMM.data[2] = A_UNITE(RAEAAMM,mode7,7,SAEAAMM);
UAEAAMM.fn.fn_global = LRAAOSL_newline;
UAEAAMM.nonlocals = A68_NIL;
IAEAAMM.data[3] = A_UNITE(TAEAAMM,mode12,12,UAEAAMM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(VAEAAMM,IAEAAMM,4,A68_52 ));
 /* line 520: */
 /* line 521: */
KTAAAMM_attribute_value( M, QPAAAMM_compile_attribute, &WAEAAMM );
if ( A_VC_EQ(WAEAAMM,SEAAAMM_tr_string) )
{ 
 /* line 522: */
 /* line 523: */
YTAAAMM_set_attribute(M, QPAAAMM_compile_attribute, A_UNITE(XAEAAMM,mode1,1,KFAAAMM_trfailed_string));
} 
else
{ 
 /* line 524: */
YTAAAMM_set_attribute(M, QPAAAMM_compile_attribute, A_UNITE(YAEAAMM,mode1,1,BFAAAMM_failed_string));
} 
 /* line 525: */
 /* line 526: */
 /* line 527: */
 /* line 528: */
(*NL(FWDAAMM_goto_next_stage)) = A68_FALSE;
} 
} 
else
{ 
DBEAAMM = BBEAAMM ;
ZAEAAMM.data[0] = A_UNITE(CBEAAMM,mode7,7,DBEAAMM);
FBEAAMM = (*(&(M->Name))) ;
ZAEAAMM.data[1] = A_UNITE(EBEAAMM,mode7,7,FBEAAMM);
JBEAAMM = HBEAAMM ;
ZAEAAMM.data[2] = A_UNITE(IBEAAMM,mode7,7,JBEAAMM);
 /* line 529: */
ZAEAAMM.data[3] = A_UNITE(KBEAAMM,mode7,7,(*NL(CWDAAMM_full_name)));
if ( EZDAAMM_debug )
{ 
OBEAAMM = MBEAAMM ;
ZAEAAMM.data[4] = A_UNITE(NBEAAMM,mode7,7,OBEAAMM);
} 
else
{ 
SBEAAMM = QBEAAMM ;
ZAEAAMM.data[4] = A_UNITE(RBEAAMM,mode7,7,SBEAAMM);
} 
 /* line 530: */
WBEAAMM = UBEAAMM ;
ZAEAAMM.data[5] = A_UNITE(VBEAAMM,mode7,7,WBEAAMM);
YBEAAMM.fn.fn_global = LRAAOSL_newline;
YBEAAMM.nonlocals = A68_NIL;
ZAEAAMM.data[6] = A_UNITE(XBEAAMM,mode12,12,YBEAAMM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(ZBEAAMM,ZAEAAMM,7,A68_52 ));
 /* line 532: */
 /* line 533: */
if ( ZXCAAMM_translate_oscommands((*NL(GWDAAMM_action_string)), NL(Msg)) )
{ 
 /* line 534: */
 /* line 535: */
ZRDAAMM_unmark_compile(M, QPAAAMM_compile_attribute);
} 
else
{ 
ECEAAMM = CCEAAMM ;
ACEAAMM.data[0] = A_UNITE(DCEAAMM,mode7,7,ECEAAMM);
 /* line 536: */
GCEAAMM = (*(&(M->Name))) ;
ACEAAMM.data[1] = A_UNITE(FCEAAMM,mode7,7,GCEAAMM);
KCEAAMM = ICEAAMM ;
ACEAAMM.data[2] = A_UNITE(JCEAAMM,mode7,7,KCEAAMM);
MCEAAMM.fn.fn_global = LRAAOSL_newline;
MCEAAMM.nonlocals = A68_NIL;
ACEAAMM.data[3] = A_UNITE(LCEAAMM,mode12,12,MCEAAMM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(NCEAAMM,ACEAAMM,4,A68_52 ));
 /* line 537: */
YTAAAMM_set_attribute(M, QPAAAMM_compile_attribute, A_UNITE(OCEAAMM,mode1,1,BFAAAMM_failed_string));
 /* line 538: */
 /* line 539: */
 /* line 540: */
 /* line 541: */
(*NL(FWDAAMM_goto_next_stage)) = A68_FALSE;
} 
} 
} 
} 
} 
} 
 /* line 542: */
 /* line 543: */
PCEAAMM = A68_TRUE;
} 
A_PROC_EXIT(compile_action);
return( PCEAAMM );
} 
#undef NL

A_STATIC A68_BOOL  TCEAAMM_cc_action(A68_271 * M, A68_272  S, void *NonLocals)
#define NL(x) (((UCEAAMM_cc_action *)NonLocals)->x)
{ 
A68_270 * VCEAAMM_ml;
A68_VC  WCEAAMM_av;
A68_BOOL  XCEAAMM;  /* clause result */
A68_VC  YCEAAMM;  /* avoid structure result */
A68_BOOL  ZCEAAMM;  /* optbool result */
A68_BOOL  ADEAAMM;  /* clause result */
A68_332  BDEAAMM;  /* collateral clause result */
A68_52  EDEAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  FDEAAMM;  /* YIELD */
A68_52  GDEAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  HDEAAMM;  /* YIELD */
A68_52  KDEAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  LDEAAMM;  /* YIELD */
A68_52  MDEAAMM;  /* OPERATORS - mode -> union mode */
A68_56  NDEAAMM;  /* procedure value */
A68_85  ODEAAMM;  /* OPERATORS - istruct -> vector */
A68_BOOL  PDEAAMM_debug;
A68_341  QDEAAMM;  /* collateral clause result */
A68_52  TDEAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  UDEAAMM;  /* YIELD */
A68_52  VDEAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  WDEAAMM;  /* YIELD */
A68_52  ZDEAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  AEEAAMM;  /* YIELD */
A68_52  DEEAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  EEEAAMM;  /* YIELD */
A68_52  HEEAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  IEEAAMM;  /* YIELD */
A68_52  JEEAAMM;  /* OPERATORS - mode -> union mode */
A68_56  KEEAAMM;  /* procedure value */
A68_85  LEEAAMM;  /* OPERATORS - istruct -> vector */
A68_332  MEEAAMM;  /* collateral clause result */
A68_52  PEEAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  QEEAAMM;  /* YIELD */
A68_52  REEAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  SEEAAMM;  /* YIELD */
A68_52  VEEAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  WEEAAMM;  /* YIELD */
A68_52  XEEAAMM;  /* OPERATORS - mode -> union mode */
A68_56  YEEAAMM;  /* procedure value */
A68_85  ZEEAAMM;  /* OPERATORS - istruct -> vector */
A68_302  AFEAAMM;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(cc_action);
 /* line 546: */
 /* line 547: */
{ 
 /* line 548: */
 /* line 550: */
 /* line 551: */
if ( !ZUAAAMM_attribute_marked(M, QPAAAMM_compile_attribute) )
{ 
 /* line 552: */
XCEAAMM = A68_TRUE;
} 
else
{ 
{ 
KTAAAMM_attribute_value( M, QPAAAMM_compile_attribute, &YCEAAMM );
WCEAAMM_av = YCEAAMM;
 /* line 553: */
ZCEAAMM = A_VC_EQ(WCEAAMM_av,KFAAAMM_trfailed_string);
if ( ! ZCEAAMM )
{ZCEAAMM = A_VC_EQ(WCEAAMM_av,TFAAAMM_ccfailed_string);
}
 /* line 554: */
ADEAAMM = ZCEAAMM;
} 
if ( ADEAAMM )
{ 
FDEAAMM = DDEAAMM ;
BDEAAMM.data[0] = A_UNITE(EDEAAMM,mode7,7,FDEAAMM);
HDEAAMM = (*(&(M->Name))) ;
BDEAAMM.data[1] = A_UNITE(GDEAAMM,mode7,7,HDEAAMM);
 /* line 555: */
LDEAAMM = JDEAAMM ;
BDEAAMM.data[2] = A_UNITE(KDEAAMM,mode7,7,LDEAAMM);
NDEAAMM.fn.fn_global = LRAAOSL_newline;
NDEAAMM.nonlocals = A68_NIL;
BDEAAMM.data[3] = A_UNITE(MDEAAMM,mode12,12,NDEAAMM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(ODEAAMM,BDEAAMM,4,A68_52 ));
 /* line 556: */
 /* line 557: */
 /* line 558: */
XCEAAMM = A68_TRUE;
} 
else
{ 
PDEAAMM_debug = PWDAAMM_set_interface_symbols(M, BCAAAMM_blankname, BCAAAMM_blankname);
 /* line 560: */
UDEAAMM = SDEAAMM ;
QDEAAMM.data[0] = A_UNITE(TDEAAMM,mode7,7,UDEAAMM);
 /* line 561: */
WDEAAMM = (*(&(M->Name))) ;
QDEAAMM.data[1] = A_UNITE(VDEAAMM,mode7,7,WDEAAMM);
if ( PDEAAMM_debug )
{ 
AEEAAMM = YDEAAMM ;
QDEAAMM.data[2] = A_UNITE(ZDEAAMM,mode7,7,AEEAAMM);
} 
else
{ 
EEEAAMM = CEEAAMM ;
QDEAAMM.data[2] = A_UNITE(DEEAAMM,mode7,7,EEEAAMM);
} 
 /* line 562: */
IEEAAMM = GEEAAMM ;
QDEAAMM.data[3] = A_UNITE(HEEAAMM,mode7,7,IEEAAMM);
KEEAAMM.fn.fn_global = LRAAOSL_newline;
KEEAAMM.nonlocals = A68_NIL;
QDEAAMM.data[4] = A_UNITE(JEEAAMM,mode12,12,KEEAAMM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(LEEAAMM,QDEAAMM,5,A68_52 ));
 /* line 564: */
 /* line 565: */
if ( ZXCAAMM_translate_oscommands(LGAAAMM_compile_string, NL(Msg)) )
{ 
ZRDAAMM_unmark_compile(M, QPAAAMM_compile_attribute);
 /* line 566: */
 /* line 567: */
 /* line 568: */
XCEAAMM = A68_TRUE;
} 
else
{ 
QEEAAMM = OEEAAMM ;
MEEAAMM.data[0] = A_UNITE(PEEAAMM,mode7,7,QEEAAMM);
 /* line 569: */
SEEAAMM = (*(&(M->Name))) ;
MEEAAMM.data[1] = A_UNITE(REEAAMM,mode7,7,SEEAAMM);
WEEAAMM = UEEAAMM ;
MEEAAMM.data[2] = A_UNITE(VEEAAMM,mode7,7,WEEAAMM);
YEEAAMM.fn.fn_global = LRAAOSL_newline;
YEEAAMM.nonlocals = A68_NIL;
MEEAAMM.data[3] = A_UNITE(XEEAAMM,mode12,12,YEEAAMM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(ZEEAAMM,MEEAAMM,4,A68_52 ));
 /* line 570: */
YTAAAMM_set_attribute(M, QPAAAMM_compile_attribute, A_UNITE(AFEAAMM,mode1,1,TFAAAMM_ccfailed_string));
 /* line 571: */
(*NL(FWDAAMM_goto_next_stage)) = A68_FALSE;
 /* line 572: */
 /* line 573: */
 /* line 574: */
 /* line 575: */
XCEAAMM = A68_FALSE;
} 
} 
} 
} 
A_PROC_EXIT(cc_action);
return( XCEAAMM );
} 
#undef NL

A_STATIC A68_BOOL  EFEAAMM_can_link(A68_271 * M, A68_272  S, void *NonLocals)
#define NL(x) (((FFEAAMM_can_link *)NonLocals)->x)
{ 
A68_INT * GFEAAMM;  /* YIELD */
A68_BOOL  HFEAAMM;  /* optbool result */
A68_BOOL  IFEAAMM;  /* clause result */
A_PROC_ENTRY(can_link);
 /* line 578: */
 /* line 579: */
{ 
 /* line 580: */
if ( ((*(&(M->Marker)))==0) )
{ 
GFEAAMM = (&(M->Marker)) ;
(*GFEAAMM) = 1;
 /* line 581: */
 /* line 582: */
HFEAAMM = !ZUAAAMM_attribute_marked(M, QPAAAMM_compile_attribute);
if ( HFEAAMM )
{ /* line 583: */
HFEAAMM = (SBBAAMM_scanmodules((*(&(M->Uses))), NL(DFEAAMM_can_link))==KBAAAMM_nilmodulelist);
}
 /* line 584: */
IFEAAMM = HFEAAMM;
} 
else
{ 
 /* line 585: */
 /* line 586: */
IFEAAMM = A68_TRUE;
} 
} 
A_PROC_EXIT(can_link);
return( IFEAAMM );
} 
#undef NL

A_STATIC A68_BOOL  MFEAAMM_link_action(A68_271 * M, A68_272  S, void *NonLocals)
#define NL(x) (((NFEAAMM_link_action *)NonLocals)->x)
{ 
A68_BOOL  OFEAAMM;  /* optbool result */
A68_BOOL  PFEAAMM_debug;
A68_VC  QFEAAMM;  /* avoid structure result */
A68_VC  RFEAAMM_exe_dir;
A68_327  SFEAAMM;  /* collateral clause result */
A68_52  VFEAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  WFEAAMM;  /* YIELD */
A68_52  XFEAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  YFEAAMM;  /* YIELD */
A68_52  BGEAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  CGEAAMM;  /* YIELD */
A68_52  DGEAAMM;  /* OPERATORS - mode -> union mode */
A68_52  GGEAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  HGEAAMM;  /* YIELD */
A68_52  KGEAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  LGEAAMM;  /* YIELD */
A68_52  OGEAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  PGEAAMM;  /* YIELD */
A68_52  QGEAAMM;  /* OPERATORS - mode -> union mode */
A68_56  RGEAAMM;  /* procedure value */
A68_85  SGEAAMM;  /* OPERATORS - istruct -> vector */
A68_332  TGEAAMM;  /* collateral clause result */
A68_52  WGEAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  XGEAAMM;  /* YIELD */
A68_52  YGEAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  ZGEAAMM;  /* YIELD */
A68_52  CHEAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  DHEAAMM;  /* YIELD */
A68_52  EHEAAMM;  /* OPERATORS - mode -> union mode */
A68_56  FHEAAMM;  /* procedure value */
A68_85  GHEAAMM;  /* OPERATORS - istruct -> vector */
A68_BOOL  HHEAAMM;  /* clause result */
A_PROC_ENTRY(link_action);
 /* line 589: */
 /* line 590: */
{ 
YBBAAMM_mark_modules(WIAAAMM_modules, 0);
 /* line 591: */
OFEAAMM = ZUAAAMM_attribute_marked(M, RPAAAMM_link_attribute);
if ( OFEAAMM )
{OFEAAMM = A_CALLPROC(NL(DFEAAMM_can_link),(M, S),(M, S,(NL(DFEAAMM_can_link)).nonlocals));
}
 /* line 592: */
if ( OFEAAMM )
{ 
 /* line 593: */
KTAAAMM_attribute_value( M, VPAAAMM_exename_attribute, &QFEAAMM );
RFEAAMM_exe_dir = QFEAAMM;
 /* line 595: */
PFEAAMM_debug = PWDAAMM_set_interface_symbols(M, BCAAAMM_blankname, RFEAAMM_exe_dir);
 /* line 596: */
WFEAAMM = UFEAAMM ;
SFEAAMM.data[0] = A_UNITE(VFEAAMM,mode7,7,WFEAAMM);
YFEAAMM = (*(&(M->Name))) ;
SFEAAMM.data[1] = A_UNITE(XFEAAMM,mode7,7,YFEAAMM);
CGEAAMM = AGEAAMM ;
SFEAAMM.data[2] = A_UNITE(BGEAAMM,mode7,7,CGEAAMM);
 /* line 597: */
SFEAAMM.data[3] = A_UNITE(DGEAAMM,mode7,7,RFEAAMM_exe_dir);
if ( PFEAAMM_debug )
{ 
HGEAAMM = FGEAAMM ;
SFEAAMM.data[4] = A_UNITE(GGEAAMM,mode7,7,HGEAAMM);
} 
else
{ 
LGEAAMM = JGEAAMM ;
SFEAAMM.data[4] = A_UNITE(KGEAAMM,mode7,7,LGEAAMM);
} 
 /* line 598: */
PGEAAMM = NGEAAMM ;
SFEAAMM.data[5] = A_UNITE(OGEAAMM,mode7,7,PGEAAMM);
RGEAAMM.fn.fn_global = LRAAOSL_newline;
RGEAAMM.nonlocals = A68_NIL;
SFEAAMM.data[6] = A_UNITE(QGEAAMM,mode12,12,RGEAAMM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(SGEAAMM,SFEAAMM,7,A68_52 ));
 /* line 599: */
 /* line 600: */
if ( ZXCAAMM_translate_oscommands(UGAAAMM_link_string, NL(Msg)) )
{ 
 /* line 601: */
 /* line 602: */
FSDAAMM_unmark_link(M, RPAAAMM_link_attribute);
} 
else
{ 
XGEAAMM = VGEAAMM ;
TGEAAMM.data[0] = A_UNITE(WGEAAMM,mode7,7,XGEAAMM);
ZGEAAMM = (*(&(M->Name))) ;
TGEAAMM.data[1] = A_UNITE(YGEAAMM,mode7,7,ZGEAAMM);
 /* line 603: */
DHEAAMM = BHEAAMM ;
TGEAAMM.data[2] = A_UNITE(CHEAAMM,mode7,7,DHEAAMM);
FHEAAMM.fn.fn_global = LRAAOSL_newline;
FHEAAMM.nonlocals = A68_NIL;
TGEAAMM.data[3] = A_UNITE(EHEAAMM,mode12,12,FHEAAMM);
 /* line 604: */
 /* line 605: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(GHEAAMM,TGEAAMM,4,A68_52 ));
} 
} 
 /* line 606: */
 /* line 607: */
HHEAAMM = A68_TRUE;
} 
A_PROC_EXIT(link_action);
return( HHEAAMM );
} 
#undef NL

A_STATIC A68_VOID  DJEAAMM_generator(A68_BOOL  BJEAAMM_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((EJEAAMM_generator *)NonLocals)->x)
{ 
A68_VC  FJEAAMM;  /* clause result */
A68_VC  GJEAAMM;  /* OPERATORS - dynamic generator */
{ 
GJEAAMM.upb = OHAAAMM_bufmax ;
( BJEAAMM_anonymous? A_VLOC(A68_CHAR ,GJEAAMM): A_VHEAP(A68_CHAR ,GJEAAMM) );
FJEAAMM = GJEAAMM;
} 
*ReturnedValue = (FJEAAMM);
return;
} 
#undef NL

A_STATIC A68_BOOL  QJEAAMM_find_string(A68_VC  Test, void *NonLocals)
#define NL(x) (((RJEAAMM_find_string *)NonLocals)->x)
{ 
A68_INT  SJEAAMM_top;
A68_BOOL  TJEAAMM;  /* optbool result */
A68_VC  UJEAAMM;  /* OPERATORS - trim index */
A68_BOOL  VJEAAMM;  /* clause result */
A68_BOOL  WJEAAMM;  /* clause result */
A_PROC_ENTRY(find_string);
 /* line 661: */
 /* line 662: */
{ 
SJEAAMM_top = Test.upb;
 /* line 664: */
(*NL(KJEAAMM_string_pos)) = 0;
 /* line 665: */
for ( ;; )
{ 
(*NL(LJEAAMM_string_end)) = ((*NL(KJEAAMM_string_pos))+SJEAAMM_top);
 /* line 666: */
 /* line 667: */
TJEAAMM = ((*NL(LJEAAMM_string_end))<=(*NL(JJEAAMM_buftop)));
if ( TJEAAMM )
{ /* line 668: */
TJEAAMM = A_VC_NE(A_VTRIM(UJEAAMM,(NL(HJEAAMM_buffer)),A_VTSCRIPT(&(UJEAAMM.upb),(NL(HJEAAMM_buffer)).upb,((*NL(KJEAAMM_string_pos))+1),(*NL(LJEAAMM_string_end)))),Test);
}
 /* line 669: */
VJEAAMM = TJEAAMM;
if ( !VJEAAMM ) break;
 /* line 670: */
(*NL(KJEAAMM_string_pos))+=1;
}
 /* line 671: */
 /* line 672: */
WJEAAMM = ((*NL(LJEAAMM_string_end))<=(*NL(JJEAAMM_buftop)));
} 
A_PROC_EXIT(find_string);
return( WJEAAMM );
} 
#undef NL

A_STATIC A68_VOID  ZJEAAMM_insert_string(A68_VC  New, void *NonLocals)
#define NL(x) (((AKEAAMM_insert_string *)NonLocals)->x)
{ 
A68_INT  BKEAAMM_top;
A68_INT  CKEAAMM_string_start;
A68_VC  DKEAAMM;  /* OPERATORS - trim index */
A68_VC  EKEAAMM_item_type;
A68_BOOL  FKEAAMM;  /* optbool result */
A68_BOOL  GKEAAMM;  /* optbool result */
A68_INT  HKEAAMM_new_end;
A68_INT  IKEAAMM_new_top;
A68_VC  JKEAAMM;  /* OPERATORS - trim index */
A68_VC  KKEAAMM;  /* OPERATORS - trim index */
A68_VC  LKEAAMM;  /* YIELD */
A68_VC  MKEAAMM;  /* OPERATORS - assign op */
A68_VC  NKEAAMM;  /* OPERATORS - trim index */
A68_VC  OKEAAMM;  /* YIELD */
A68_341  PKEAAMM;  /* collateral clause result */
A68_52  SKEAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  TKEAAMM;  /* YIELD */
A68_52  UKEAAMM;  /* OPERATORS - mode -> union mode */
A68_52  XKEAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  YKEAAMM;  /* YIELD */
A68_52  ZKEAAMM;  /* OPERATORS - mode -> union mode */
A68_52  ALEAAMM;  /* OPERATORS - mode -> union mode */
A68_56  BLEAAMM;  /* procedure value */
A68_85  CLEAAMM;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(insert_string);
 /* line 675: */
 /* line 676: */
{ 
BKEAAMM_top = New.upb;
 /* line 677: */
CKEAAMM_string_start = (*NL(LJEAAMM_string_end));
 /* line 678: */
EKEAAMM_item_type = A_VTRIM(DKEAAMM,(NL(HJEAAMM_buffer)),A_VTSCRIPT(&(DKEAAMM.upb),(NL(HJEAAMM_buffer)).upb,((*NL(KJEAAMM_string_pos))+2),(*NL(LJEAAMM_string_end))));
 /* line 680: */
for ( ;; )
{ 
 /* line 681: */
FKEAAMM = ((CKEAAMM_string_start+=1)<(*NL(JJEAAMM_buftop)));
if ( FKEAAMM )
{FKEAAMM = ((*(&A_VINDEX(NL(HJEAAMM_buffer),CKEAAMM_string_start)))!='\"');
}
if ( !(FKEAAMM) ) break;
/*SKIP*/;
}
 /* line 682: */
(*NL(LJEAAMM_string_end)) = ((*NL(JJEAAMM_buftop))+1);
 /* line 683: */
for ( ;; )
{ 
 /* line 684: */
GKEAAMM = (((*NL(LJEAAMM_string_end))-=1)>0);
if ( GKEAAMM )
{GKEAAMM = ((*(&A_VINDEX(NL(HJEAAMM_buffer),(*NL(LJEAAMM_string_end)))))!='\"');
}
if ( !(GKEAAMM) ) break;
/*SKIP*/;
}
 /* line 685: */
(*NL(LJEAAMM_string_end))-=1;
 /* line 687: */
HKEAAMM_new_end = (CKEAAMM_string_start+BKEAAMM_top);
 /* line 688: */
IKEAAMM_new_top = ((HKEAAMM_new_end+(*NL(JJEAAMM_buftop)))-(*NL(LJEAAMM_string_end)));
 /* line 690: */
 /* line 691: */
if ( (HKEAAMM_new_end!=(*NL(LJEAAMM_string_end))) )
{ 
 /* line 692: */
 /* line 693: */
LKEAAMM = A_VTRIM(JKEAAMM,(NL(HJEAAMM_buffer)),A_VTSCRIPT(&(JKEAAMM.upb),(NL(HJEAAMM_buffer)).upb,(HKEAAMM_new_end+1),IKEAAMM_new_top)) ;
MKEAAMM = A_VTRIM(KKEAAMM,(NL(HJEAAMM_buffer)),A_VTSCRIPT(&(KKEAAMM.upb),(NL(HJEAAMM_buffer)).upb,((*NL(LJEAAMM_string_end))+1),(*NL(JJEAAMM_buftop)))) ;
A_VASSIGN2(MKEAAMM,LKEAAMM,A68_CHAR );
} 
 /* line 694: */
OKEAAMM = A_VTRIM(NKEAAMM,(NL(HJEAAMM_buffer)),A_VTSCRIPT(&(NKEAAMM.upb),(NL(HJEAAMM_buffer)).upb,(CKEAAMM_string_start+1),HKEAAMM_new_end)) ;
A_VASSIGN2(New,OKEAAMM,A68_CHAR );
 /* line 695: */
(*NL(JJEAAMM_buftop)) = IKEAAMM_new_top;
 /* line 696: */
TKEAAMM = RKEAAMM ;
PKEAAMM.data[0] = A_UNITE(SKEAAMM,mode7,7,TKEAAMM);
PKEAAMM.data[1] = A_UNITE(UKEAAMM,mode7,7,EKEAAMM_item_type);
YKEAAMM = WKEAAMM ;
PKEAAMM.data[2] = A_UNITE(XKEAAMM,mode7,7,YKEAAMM);
PKEAAMM.data[3] = A_UNITE(ZKEAAMM,mode7,7,New);
BLEAAMM.fn.fn_global = LRAAOSL_newline;
BLEAAMM.nonlocals = A68_NIL;
PKEAAMM.data[4] = A_UNITE(ALEAAMM,mode12,12,BLEAAMM);
 /* line 697: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(CLEAAMM,PKEAAMM,5,A68_52 ));
} 
A_PROC_EXIT(insert_string);
return;
} 
#undef NL

A_STATIC A68_INT  ELEAAMM_get_number(void *NonLocals)
#define NL(x) (((FLEAAMM_get_number *)NonLocals)->x)
{ 
A68_INT  GLEAAMM_v;
A68_INT  HLEAAMM_pos;
A68_CHAR  ILEAAMM_c;
A68_BOOL  JLEAAMM;  /* optbool result */
A68_BOOL  KLEAAMM;  /* optbool result */
A68_BOOL  LLEAAMM;  /* clause result */
A68_INT  MLEAAMM;  /* clause result */
A_PROC_ENTRY(get_number);
{ 
GLEAAMM_v = 0;
HLEAAMM_pos = (*NL(LJEAAMM_string_end));
 /* line 702: */
 /* line 704: */
for ( ;; )
{ 
 /* line 705: */
JLEAAMM = ((HLEAAMM_pos+=1)<(*NL(JJEAAMM_buftop)));
if ( JLEAAMM )
{JLEAAMM = ((*(&A_VINDEX(NL(HJEAAMM_buffer),HLEAAMM_pos)))!='\"');
}
if ( !(JLEAAMM) ) break;
/*SKIP*/;
}
 /* line 707: */
for ( ;; )
{ 
 /* line 708: */
KLEAAMM = ((HLEAAMM_pos+=1)<=(*NL(JJEAAMM_buftop)));
if ( KLEAAMM )
{{ 
ILEAAMM_c = (*(&A_VINDEX(NL(HJEAAMM_buffer),HLEAAMM_pos)));
 /* line 709: */
 /* line 710: */
LLEAAMM = (ILEAAMM_c!='\"');
} 
KLEAAMM = LLEAAMM;
}
 /* line 711: */
if ( !(KLEAAMM) ) break;
 /* line 712: */
GLEAAMM_v*=10 ;
GLEAAMM_v+=((A68_INT)(unsigned char)ILEAAMM_c-THAAAMM_zero);
}
 /* line 713: */
 /* line 714: */
MLEAAMM = GLEAAMM_v;
} 
A_PROC_EXIT(get_number);
return( MLEAAMM );
} 
#undef NL

A_STATIC A68_VOID  OLEAAMM_libroot(A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((PLEAAMM_libroot *)NonLocals)->x)
{ 
A68_276  VLEAAMM;  /* procedure value */
A68_275 * WLEAAMM_sym;
A68_VC  YLEAAMM;  /* clause result */
A68_VC  AMEAAMM;  /* OPERATORS - simple index */
A68_INT  BMEAAMM;  /* YIELD */
A68_120  EMEAAMM;  /* avoid structure result */
A_PROC_ENTRY(libroot);
{ 
VLEAAMM.fn.fn_global = SLEAAMM_anonymous;
VLEAAMM.nonlocals = A68_NIL;
WLEAAMM_sym = ALAAAMM_scansymbols(ULEAAMM, VLEAAMM);
 /* line 720: */
 /* line 722: */
if ( (WLEAAMM_sym==JBAAAMM_nilsymbol) )
{ 
YLEAAMM = ZLEAAMM;
} 
else
{ 
 /* line 724: */
AMEAAMM = (*(&(WLEAAMM_sym->Text))) ;
BMEAAMM = (*(&(WLEAAMM_sym->Text))).upb ;
if ( ((*(&A_VINDEX(AMEAAMM,BMEAAMM)))=='/') )
{ 
 /* line 725: */
YLEAAMM = (*(&(WLEAAMM_sym->Text)));
} 
else
{ 
 /* line 726: */
 /* line 727: */
TNCAOSI_parse_filename( (*(&(WLEAAMM_sym->Text))), DMEAAMM, NL(Msg), &EMEAAMM );
YLEAAMM = EMEAAMM.Directory;
} 
} 
} 
A_PROC_EXIT(libroot);
*ReturnedValue = (YLEAAMM);
return;
} 
#undef NL

A_STATIC A68_BOOL  JOEAAMM_find_version(A68_271 * Vm, A68_272  S, void *NonLocals)
#define NL(x) (((KOEAAMM_find_version *)NonLocals)->x)
{ 
A68_BOOL  LOEAAMM;  /* optbool result */
A68_302  MOEAAMM;  /* OPERATORS - mode -> union mode */
A68_BOOL  NOEAAMM;  /* YIELD */
A68_302  OOEAAMM;  /* OPERATORS - mode -> union mode */
A68_BOOL  POEAAMM;  /* YIELD */
A68_BOOL  QOEAAMM;  /* clause result */
A_PROC_ENTRY(find_version);
 /* line 772: */
 /* line 773: */
{ 
 /* line 774: */
if ( ZUAAAMM_attribute_marked(Vm, WPAAAMM_version_attribute) )
{ 
 /* line 775: */
LOEAAMM = !QTAAAMM_attribute_state(Vm, WPAAAMM_version_attribute);
if ( LOEAAMM )
{LOEAAMM = KIEAAMM_do_update_version(Vm, NL(Get_version_string), NL(Msg));
}
 /* line 776: */
if ( LOEAAMM )
{ 
NOEAAMM = A68_TRUE ;
YTAAAMM_set_attribute(Vm, WPAAAMM_version_attribute, A_UNITE(MOEAAMM,mode2,2,NOEAAMM));
 /* line 777: */
POEAAMM = A68_TRUE ;
YTAAAMM_set_attribute(Vm, QPAAAMM_compile_attribute, A_UNITE(OOEAAMM,mode2,2,POEAAMM));
 /* line 778: */
 /* line 779: */
 /* line 781: */
QOEAAMM = A68_FALSE;
} 
else
{ 
 /* line 782: */
QOEAAMM = !NL(Dependent);
} 
} 
else
{ 
 /* line 783: */
if ( NL(Dependent) )
{ 
 /* line 784: */
 /* line 785: */
QOEAAMM = (SBBAAMM_scanmodules((*(&(Vm->Uses))), NL(IOEAAMM_find_version))==KBAAAMM_nilmodulelist);
} 
else
{ 
 /* line 786: */
 /* line 787: */
QOEAAMM = A68_TRUE;
} 
} 
} 
A_PROC_EXIT(find_version);
return( QOEAAMM );
} 
#undef NL

A_STATIC A68_VOID  XOEAAMM_version_string(A68_VC  Message, A68_VC  *ReturnedValue)
{ 
A68_46  APEAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  BPEAAMM;  /* clause result */
A68_VC  CPEAAMM;  /* avoid structure result */
A_PROC_ENTRY(version_string);
 /* line 795: */
 /* line 796: */
{ 
 /* line 797: */
if ( !AXAAAMM_can_query() )
{ 
 /* line 798: */
 /* line 799: */
A_CALLPROC(ZLBAOSI_global_msg,(UHAAOSI_fatal, A_HVEC(APEAAMM,ZOEAAMM,A68_VC )),(UHAAOSI_fatal, A_HVEC(APEAAMM,ZOEAAMM,A68_VC ),(ZLBAOSI_global_msg).nonlocals));
} 
 /* line 800: */
 /* line 801: */
IIAAOST_prompt( Message, &CPEAAMM );
BPEAAMM = CPEAAMM;
} 
A_PROC_EXIT(version_string);
*ReturnedValue = (BPEAAMM);
return;
} 
#undef NL

A_STATIC A68_VOID  QQEAAMM_mark_for_link(A68_271 * M, void *NonLocals)
#define NL(x) (((RQEAAMM_mark_for_link *)NonLocals)->x)
{ 
A68_323  SQEAAMM;  /* collateral clause result */
A68_52  VQEAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  WQEAAMM;  /* YIELD */
A68_52  XQEAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  YQEAAMM;  /* YIELD */
A68_52  BREAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  CREAAMM;  /* YIELD */
A68_85  DREAAMM;  /* OPERATORS - istruct -> vector */
A68_VC  EREAAMM;  /* avoid structure result */
A68_46  FREAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(mark_for_link);
 /* line 850: */
 /* line 851: */
{ 
 /* line 852: */
if ( (*(&(M->Decs))) )
{ 
WQEAAMM = UQEAAMM ;
SQEAAMM.data[0] = A_UNITE(VQEAAMM,mode7,7,WQEAAMM);
 /* line 853: */
YQEAAMM = (*(&(M->Name))) ;
SQEAAMM.data[1] = A_UNITE(XQEAAMM,mode7,7,YQEAAMM);
CREAAMM = AREAAMM ;
SQEAAMM.data[2] = A_UNITE(BREAAMM,mode7,7,CREAAMM);
 /* line 854: */
 /* line 855: */
UJBAOSL_oneline( A_HISVEC(DREAAMM,SQEAAMM,3,A68_52 ), &EREAAMM );
A_CALLPROC(NL(Msg),(WHAAOSI_user, A_HVEC(FREAAMM,EREAAMM,A68_VC )),(WHAAOSI_user, A_HVEC(FREAAMM,EREAAMM,A68_VC ),(NL(Msg)).nonlocals));
} 
else
{ 
 /* line 856: */
 /* line 857: */
UOEAAMM_set_link_mark(M, NL(Msg));
} 
} 
A_PROC_EXIT(mark_for_link);
return;
} 
#undef NL

A_STATIC A68_BOOL  JREAAMM_locate_program(A68_271 * M, A68_272  S, void *NonLocals)
#define NL(x) (((KREAAMM_locate_program *)NonLocals)->x)
{ 
A68_332  LREAAMM;  /* collateral clause result */
A68_52  OREAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  PREAAMM;  /* YIELD */
A68_52  QREAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  RREAAMM;  /* YIELD */
A68_52  UREAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  VREAAMM;  /* YIELD */
A68_52  WREAAMM;  /* OPERATORS - mode -> union mode */
A68_56  XREAAMM;  /* procedure value */
A68_85  YREAAMM;  /* OPERATORS - istruct -> vector */
A68_BOOL  ZREAAMM;  /* clause result */
A_PROC_ENTRY(locate_program);
 /* line 860: */
 /* line 861: */
{ 
 /* line 862: */
if ( !(*(&(M->Decs))) )
{ 
(*NL(NQEAAMM_have_program)) = A68_TRUE;
 /* line 863: */
PREAAMM = NREAAMM ;
LREAAMM.data[0] = A_UNITE(OREAAMM,mode7,7,PREAAMM);
RREAAMM = (*(&(M->Name))) ;
LREAAMM.data[1] = A_UNITE(QREAAMM,mode7,7,RREAAMM);
 /* line 864: */
VREAAMM = TREAAMM ;
LREAAMM.data[2] = A_UNITE(UREAAMM,mode7,7,VREAAMM);
XREAAMM.fn.fn_global = LRAAOSL_newline;
XREAAMM.nonlocals = A68_NIL;
LREAAMM.data[3] = A_UNITE(WREAAMM,mode12,12,XREAAMM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(YREAAMM,LREAAMM,4,A68_52 ));
 /* line 865: */
 /* line 866: */
A_CALLPROC(NL(PQEAAMM_mark_for_link),(M),(M,(NL(PQEAAMM_mark_for_link)).nonlocals));
} 
 /* line 867: */
 /* line 868: */
ZREAAMM = A68_TRUE;
} 
A_PROC_EXIT(locate_program);
return( ZREAAMM );
} 
#undef NL

A_STATIC A68_BOOL  NUEAAMM_mark_for_compile(A68_271 * M, A68_272  S, void *NonLocals)
#define NL(x) (((OUEAAMM_mark_for_compile *)NonLocals)->x)
{ 
A68_BOOL  PUEAAMM;  /* clause result */
A_PROC_ENTRY(mark_for_compile);
 /* line 931: */
 /* line 932: */
{ 
 /* line 933: */
if ( XSEAAMM_can_compile(M, S, !NL(JUEAAMM_compile_all), NL(Msg)) )
{ 
 /* line 934: */
KPEAAMM_set_compile_mark(M, NL(Mode_chars), NL(Msg));
} 
 /* line 935: */
 /* line 936: */
PUEAAMM = A68_TRUE;
} 
A_PROC_EXIT(mark_for_compile);
return( PUEAAMM );
} 
#undef NL

A_STATIC A68_BOOL  GWEAAMM_test_action(A68_271 * M, A68_272  S, void *NonLocals)
#define NL(x) (((HWEAAMM_test_action *)NonLocals)->x)
{ 
A68_302  IWEAAMM;  /* OPERATORS - mode -> union mode */
A68_BOOL  JWEAAMM;  /* clause result */
A_PROC_ENTRY(test_action);
 /* line 996: */
 /* line 997: */
{ 
if ( NL(BWEAAMM_setdefault) )
{ 
 /* line 998: */
LUAAAMM_clear_attribute(M, NL(Attribute));
} 
else
{ 
 /* line 999: */
YTAAAMM_set_attribute(M, NL(Attribute), A_UNITE(IWEAAMM,mode1,1,NL(XVEAAMM_value)));
} 
 /* line 1000: */
 /* line 1001: */
JWEAAMM = A68_TRUE;
} 
A_PROC_EXIT(test_action);
return( JWEAAMM );
} 
#undef NL

A_STATIC A68_BOOL  DYEAAMM_do_link_program(A68_271 * Tm, A68_272  S, void *NonLocals)
#define NL(x) (((EYEAAMM_do_link_program *)NonLocals)->x)
{ 
A68_INT * FYEAAMM;  /* YIELD */
A68_BOOL  GYEAAMM;  /* clause result */
A_PROC_ENTRY(do_link_program);
 /* line 1025: */
 /* line 1026: */
{ 
 /* line 1027: */
if ( ((*(&(Tm->Marker)))<4) )
{ 
 /* line 1028: */
if ( (*(&(Tm->Decs))) )
{ 
FYEAAMM = (&(Tm->Marker)) ;
(*FYEAAMM) = 5;
 /* line 1029: */
 /* line 1030: */
 /* line 1031: */
SBBAAMM_scanmodules((*(&(Tm->Usedby))), NL(CYEAAMM_do_link_program));
} 
else
{ 
 /* line 1032: */
 /* line 1033: */
UOEAAMM_set_link_mark(Tm, NL(Msg));
} 
} 
 /* line 1034: */
 /* line 1035: */
GYEAAMM = A68_TRUE;
} 
A_PROC_EXIT(do_link_program);
return( GYEAAMM );
} 
#undef NL

A_STATIC A68_BOOL  KYEAAMM_link_all_programs(A68_271 * M, A68_272  S, void *NonLocals)
#define NL(x) (((LYEAAMM_link_all_programs *)NonLocals)->x)
{ 
A68_BOOL  MYEAAMM;  /* clause result */
A_PROC_ENTRY(link_all_programs);
 /* line 1038: */
 /* line 1039: */
{ 
if ( ((*(&(M->Marker)))==3) )
{ 
A_CALLPROC(NL(CYEAAMM_do_link_program),(M, S),(M, S,(NL(CYEAAMM_do_link_program)).nonlocals));
} 
 /* line 1040: */
 /* line 1041: */
MYEAAMM = A68_TRUE;
} 
A_PROC_EXIT(link_all_programs);
return( MYEAAMM );
} 
#undef NL

A_STATIC A68_BOOL  FAFAAMM_find_action(A68_271 * M, A68_272  S, void *NonLocals)
#define NL(x) (((GAFAAMM_find_action *)NonLocals)->x)
{ 
A68_BOOL  HAFAAMM;  /* optbool result */
A68_BOOL  IAFAAMM;  /* clause result */
A_PROC_ENTRY(find_action);
 /* line 1076: */
 /* line 1077: */
{ 
 /* line 1078: */
HAFAAMM = ZUAAAMM_attribute_marked(M, QPAAAMM_compile_attribute);
if ( ! HAFAAMM )
{HAFAAMM = ZUAAAMM_attribute_marked(M, RPAAAMM_link_attribute);
}
(*NL(YZEAAMM_have_action_request)) = HAFAAMM;
 /* line 1079: */
 /* line 1080: */
IAFAAMM = !(*NL(YZEAAMM_have_action_request));
} 
A_PROC_EXIT(find_action);
return( IAFAAMM );
} 
#undef NL

A_STATIC A68_BOOL  MAFAAMM_find_program(A68_271 * M, A68_272  S, void *NonLocals)
#define NL(x) (((NAFAAMM_find_program *)NonLocals)->x)
{ 
A68_46  QAFAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  RAFAAMM;  /* clause result */
A_PROC_ENTRY(find_program);
 /* line 1083: */
 /* line 1084: */
{ 
 /* line 1086: */
if ( (*(&(M->Decs))) )
{ 
/*SKIP*/;
} 
else
{ 
 /* line 1087: */
if ( ((*NL(AAFAAMM_program))!=LBAAAMM_nilmodule) )
{ 
 /* line 1088: */
 /* line 1089: */
 /* line 1090: */
A_CALLPROC(NL(Msg),(WHAAOSI_user, A_HVEC(QAFAAMM,PAFAAMM,A68_VC )),(WHAAOSI_user, A_HVEC(QAFAAMM,PAFAAMM,A68_VC ),(NL(Msg)).nonlocals));
} 
else
{ 
(*NL(AAFAAMM_program)) = M;
 /* line 1091: */
 /* line 1092: */
(*NL(BAFAAMM_pstar)) = S;
} 
} 
 /* line 1093: */
 /* line 1094: */
RAFAAMM = A68_TRUE;
} 
A_PROC_EXIT(find_program);
return( RAFAAMM );
} 
#undef NL

A_STATIC A68_BOOL  VAFAAMM_mark_for_compile(A68_271 * M, A68_272  S, void *NonLocals)
#define NL(x) (((WAFAAMM_mark_for_compile *)NonLocals)->x)
{ 
A68_INT * XAFAAMM;  /* YIELD */
A68_INT * YAFAAMM;  /* YIELD */
A68_BOOL  ZAFAAMM;  /* clause result */
A_PROC_ENTRY(mark_for_compile);
 /* line 1097: */
 /* line 1098: */
{ 
 /* line 1099: */
if ( ((*(&(M->Marker)))==0) )
{ 
 /* line 1100: */
if ( XSEAAMM_can_compile(M, S, A68_FALSE, NL(Msg)) )
{ 
XAFAAMM = (&(M->Marker)) ;
(*XAFAAMM) = 2;
 /* line 1101: */
 /* line 1102: */
if ( NL(SZEAAMM_pessmode) )
{ 
 /* line 1103: */
SBBAAMM_scanmodules((*(&(M->Usedby))), NL(UAFAAMM_mark_for_compile));
} 
else
{ 
 /* line 1104: */
if ( NL(TZEAAMM_rebuildmode) )
{ 
 /* line 1105: */
 /* line 1106: */
 /* line 1107: */
SBBAAMM_scanmodules((*(&(M->Uses))), NL(UAFAAMM_mark_for_compile));
} 
} 
} 
else
{ 
 /* line 1108: */
 /* line 1109: */
YAFAAMM = (&(M->Marker)) ;
(*YAFAAMM) = 5;
} 
} 
 /* line 1110: */
 /* line 1111: */
ZAFAAMM = A68_TRUE;
} 
A_PROC_EXIT(mark_for_compile);
return( ZAFAAMM );
} 
#undef NL

A_STATIC A68_BOOL  DBFAAMM_activate_compiles(A68_271 * M, A68_272  S, void *NonLocals)
#define NL(x) (((EBFAAMM_activate_compiles *)NonLocals)->x)
{ 
A68_320  FBFAAMM;  /* collateral clause result */
A68_52  IBFAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  JBFAAMM;  /* YIELD */
A68_52  KBFAAMM;  /* OPERATORS - mode -> union mode */
A68_56  LBFAAMM;  /* procedure value */
A68_85  MBFAAMM;  /* OPERATORS - istruct -> vector */
A68_323  NBFAAMM;  /* collateral clause result */
A68_52  QBFAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  RBFAAMM;  /* YIELD */
A68_52  SBFAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  TBFAAMM;  /* YIELD */
A68_52  UBFAAMM;  /* OPERATORS - mode -> union mode */
A68_56  VBFAAMM;  /* procedure value */
A68_85  WBFAAMM;  /* OPERATORS - istruct -> vector */
A68_BOOL  XBFAAMM;  /* clause result */
A_PROC_ENTRY(activate_compiles);
 /* line 1114: */
 /* line 1115: */
{ 
 /* line 1116: */
if ( ((*(&(M->Marker)))==2) )
{ 
 /* line 1117: */
if ( NL(RZEAAMM_specchangemode) )
{ 
 /* line 1118: */
if ( (*NL(XZEAAMM_first)) )
{ 
 /* line 1119: */
JBFAAMM = HBFAAMM ;
FBFAAMM.data[0] = A_UNITE(IBFAAMM,mode7,7,JBFAAMM);
LBFAAMM.fn.fn_global = LRAAOSL_newline;
LBFAAMM.nonlocals = A68_NIL;
FBFAAMM.data[1] = A_UNITE(KBFAAMM,mode12,12,LBFAAMM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(MBFAAMM,FBFAAMM,2,A68_52 ));
 /* line 1120: */
 /* line 1121: */
(*NL(XZEAAMM_first)) = A68_FALSE;
} 
 /* line 1122: */
RBFAAMM = PBFAAMM ;
NBFAAMM.data[0] = A_UNITE(QBFAAMM,mode7,7,RBFAAMM);
TBFAAMM = (*(&(M->Name))) ;
NBFAAMM.data[1] = A_UNITE(SBFAAMM,mode7,7,TBFAAMM);
VBFAAMM.fn.fn_global = LRAAOSL_newline;
VBFAAMM.nonlocals = A68_NIL;
NBFAAMM.data[2] = A_UNITE(UBFAAMM,mode12,12,VBFAAMM);
 /* line 1123: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(WBFAAMM,NBFAAMM,3,A68_52 ));
} 
 /* line 1124: */
 /* line 1125: */
KPEAAMM_set_compile_mark(M, RDAAAMM_on_string, NL(Msg));
} 
 /* line 1126: */
 /* line 1127: */
XBFAAMM = A68_TRUE;
} 
A_PROC_EXIT(activate_compiles);
return( XBFAAMM );
} 
#undef NL
 /* line 1195: */
 /* line 1196: */

A_STATIC A68_BOOL  XDFAAMM_analyse_module(A68_VC  Name, A68_271 * M, A68_BOOL  Show_not_found, void *NonLocals)
#define NL(x) (((YDFAAMM_analyse_module *)NonLocals)->x)
{ 
A68_VC  ZDFAAMM_full_name;
A68_INT  AEFAAMM_dsize;
A68_BOOL  BEFAAMM;  /* clause result */
A68_BOOL  CEFAAMM_found;
A68_320  DEFAAMM;  /* collateral clause result */
A68_52  GEFAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  HEFAAMM;  /* YIELD */
A68_52  IEFAAMM;  /* OPERATORS - mode -> union mode */
A68_85  JEFAAMM;  /* OPERATORS - istruct -> vector */
A68_BOOL  KEFAAMM;  /* clause result */
A68_320  LEFAAMM;  /* collateral clause result */
A68_VC  MEFAAMM;  /* avoid structure result */
A68_52  NEFAAMM;  /* OPERATORS - mode -> union mode */
A68_52  OEFAAMM;  /* OPERATORS - mode -> union mode */
A68_56  PEFAAMM;  /* procedure value */
A68_85  QEFAAMM;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(analyse_module);
 /* line 1197: */
 /* line 1198: */
{ 
 /* line 1199: */
 /* line 1200: */
 /* line 1201: */
if ( (M!=LBAAAMM_nilmodule) )
{ 
 /* line 1202: */
 /* line 1203: */
BEFAAMM = AJDAAMM_check_module_file(M, PFDAAMM_all_directories, (&ZDFAAMM_full_name), NL(Msg));
} 
else
{ 
 /* line 1204: */
 /* line 1205: */
BEFAAMM = TIDAAMM_lookup_src_file(Name, PFDAAMM_all_directories, (&ZDFAAMM_full_name), (&AEFAAMM_dsize), NL(Msg));
} 
CEFAAMM_found = BEFAAMM;
 /* line 1207: */
 /* line 1208: */
if ( CEFAAMM_found )
{ 
HEFAAMM = FEFAAMM ;
DEFAAMM.data[0] = A_UNITE(GEFAAMM,mode7,7,HEFAAMM);
DEFAAMM.data[1] = A_UNITE(IEFAAMM,mode7,7,ZDFAAMM_full_name);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(JEFAAMM,DEFAAMM,2,A68_52 ));
 /* line 1209: */
 /* line 1210: */
KEFAAMM = MICAAMM_read_module(ZDFAAMM_full_name, NL(Msg));
} 
else
{ 
 /* line 1211: */
if ( Show_not_found )
{ 
YZAAAMM_fnot_found( Name, &MEFAAMM );
LEFAAMM.data[0] = A_UNITE(NEFAAMM,mode7,7,MEFAAMM);
PEFAAMM.fn.fn_global = LRAAOSL_newline;
PEFAAMM.nonlocals = A68_NIL;
LEFAAMM.data[1] = A_UNITE(OEFAAMM,mode12,12,PEFAAMM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(QEFAAMM,LEFAAMM,2,A68_52 ));
 /* line 1212: */
 /* line 1213: */
 /* line 1214: */
KEFAAMM = A68_FALSE;
} 
else
{ 
 /* line 1215: */
 /* line 1216: */
KEFAAMM = A68_FALSE;
} 
} 
} 
A_PROC_EXIT(analyse_module);
return( KEFAAMM );
} 
#undef NL

A_STATIC A68_VOID  TEFAAMM_install_module(A68_VC  Name, void *NonLocals)
#define NL(x) (((UEFAAMM_install_module *)NonLocals)->x)
{ 
A68_270 * VEFAAMM_ml;
A68_271 * WEFAAMM;  /* clause result */
A_PROC_ENTRY(install_module);
 /* line 1219: */
 /* line 1220: */
{ 
VEFAAMM_ml = JCBAAMM_findmodule(WIAAAMM_modules, Name);
 /* line 1222: */
 /* line 1223: */
if ( (VEFAAMM_ml!=KBAAAMM_nilmodulelist) )
{ 
 /* line 1224: */
WEFAAMM = (*(&(VEFAAMM_ml->Module)));
} 
else
{ 
WEFAAMM = LBAAAMM_nilmodule;
} 
 /* line 1225: */
A_CALLPROC(NL(WDFAAMM_analyse_module),(Name, WEFAAMM, A68_TRUE),(Name, WEFAAMM, A68_TRUE,(NL(WDFAAMM_analyse_module)).nonlocals));
} 
A_PROC_EXIT(install_module);
return;
} 
#undef NL

A_STATIC A68_BOOL  CFFAAMM_install_uses(A68_271 * M, A68_272  S, void *NonLocals)
#define NL(x) (((DFFAAMM_install_uses *)NonLocals)->x)
{ 
A68_INT * EFFAAMM;  /* YIELD */
A68_VC  FFFAAMM;  /* clause result */
A68_BOOL  GFFAAMM;  /* clause result */
A_PROC_ENTRY(install_uses);
 /* line 1230: */
 /* line 1231: */
{ 
 /* line 1232: */
if ( ((*(&(M->Marker)))==1) )
{ 
(*NL(XEFAAMM_found)) = A68_TRUE;
 /* line 1233: */
EFFAAMM = (&(M->Marker)) ;
(*EFFAAMM) = 3;
 /* line 1234: */
 /* line 1235: */
if ( ((*(&(M->Filename))).upb>0) )
{ 
 /* line 1236: */
FFFAAMM = (*(&(M->Filename)));
} 
else
{ 
FFFAAMM = (*(&(M->Name)));
} 
 /* line 1237: */
A_CALLPROC(NL(WDFAAMM_analyse_module),(FFFAAMM, M, A68_FALSE),(FFFAAMM, M, A68_FALSE,(NL(WDFAAMM_analyse_module)).nonlocals));
} 
 /* line 1238: */
 /* line 1239: */
GFFAAMM = A68_TRUE;
} 
A_PROC_EXIT(install_uses);
return( GFFAAMM );
} 
#undef NL

A_STATIC A68_BOOL  KFFAAMM_show_unset_modules(A68_271 * M, A68_272  S, void *NonLocals)
#define NL(x) (((LFFAAMM_show_unset_modules *)NonLocals)->x)
{ 
A68_320  MFFAAMM;  /* collateral clause result */
A68_52  PFFAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  QFFAAMM;  /* YIELD */
A68_52  RFFAAMM;  /* OPERATORS - mode -> union mode */
A68_56  SFFAAMM;  /* procedure value */
A68_85  TFFAAMM;  /* OPERATORS - istruct -> vector */
A68_320  UFFAAMM;  /* collateral clause result */
A68_52  XFFAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  YFFAAMM;  /* YIELD */
A68_52  ZFFAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  AGFAAMM;  /* YIELD */
A68_85  BGFAAMM;  /* OPERATORS - istruct -> vector */
A68_332  CGFAAMM;  /* collateral clause result */
A68_52  FGFAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  GGFAAMM;  /* YIELD */
A68_52  HGFAAMM;  /* OPERATORS - mode -> union mode */
A68_CHAR  IGFAAMM;  /* YIELD */
A68_52  JGFAAMM;  /* OPERATORS - mode -> union mode */
A68_CHAR  KGFAAMM;  /* YIELD */
A68_52  LGFAAMM;  /* OPERATORS - mode -> union mode */
A68_CHAR  MGFAAMM;  /* YIELD */
A68_85  NGFAAMM;  /* OPERATORS - istruct -> vector */
A68_52  OGFAAMM;  /* OPERATORS - mode -> union mode */
A68_56  PGFAAMM;  /* procedure value */
A68_85  QGFAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  RGFAAMM;  /* clause result */
A_PROC_ENTRY(show_unset_modules);
 /* line 1242: */
 /* line 1243: */
{ 
 /* line 1244: */
if ( ((*(&(M->Marker)))==3) )
{ 
 /* line 1245: */
if ( (*NL(YEFAAMM_put_heading)) )
{ 
(*NL(YEFAAMM_put_heading)) = A68_FALSE;
 /* line 1246: */
 /* line 1247: */
QFFAAMM = OFFAAMM ;
MFFAAMM.data[0] = A_UNITE(PFFAAMM,mode7,7,QFFAAMM);
SFFAAMM.fn.fn_global = LRAAOSL_newline;
SFFAAMM.nonlocals = A68_NIL;
MFFAAMM.data[1] = A_UNITE(RFFAAMM,mode12,12,SFFAAMM);
 /* line 1248: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(TFFAAMM,MFFAAMM,2,A68_52 ));
} 
 /* line 1249: */
YFFAAMM = WFFAAMM ;
UFFAAMM.data[0] = A_UNITE(XFFAAMM,mode7,7,YFFAAMM);
AGFAAMM = (*(&(M->Name))) ;
UFFAAMM.data[1] = A_UNITE(ZFFAAMM,mode7,7,AGFAAMM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(BGFAAMM,UFFAAMM,2,A68_52 ));
 /* line 1250: */
 /* line 1251: */
if ( (S.Mode!=' ') )
{ 
GGFAAMM = EGFAAMM ;
CGFAAMM.data[0] = A_UNITE(FGFAAMM,mode7,7,GGFAAMM);
IGFAAMM = S.Mode ;
CGFAAMM.data[1] = A_UNITE(HGFAAMM,mode6,6,IGFAAMM);
KGFAAMM = S.Value ;
CGFAAMM.data[2] = A_UNITE(JGFAAMM,mode6,6,KGFAAMM);
MGFAAMM = '}' ;
CGFAAMM.data[3] = A_UNITE(LGFAAMM,mode6,6,MGFAAMM);
 /* line 1252: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(NGFAAMM,CGFAAMM,4,A68_52 ));
} 
 /* line 1253: */
 /* line 1254: */
PGFAAMM.fn.fn_global = LRAAOSL_newline;
PGFAAMM.nonlocals = A68_NIL;
GFBAOSL_put(KEAAOST_screen, A_HVEC(QGFAAMM,A_UNITE(OGFAAMM,mode12,12,PGFAAMM),A68_52 ));
} 
 /* line 1255: */
 /* line 1256: */
RGFAAMM = A68_TRUE;
} 
A_PROC_EXIT(show_unset_modules);
return( RGFAAMM );
} 
#undef NL

A68_BOOL  LEDAAMM_try_name(A68_VC  N1, A68_VC  N2)
{ 
A68_INT  MEDAAMM_top;
A68_BOOL  NEDAAMM;  /* optbool result */
A68_VC  OEDAAMM;  /* OPERATORS - trim index */
A68_VC  PEDAAMM;  /* OPERATORS - trim index */
A68_BOOL  QEDAAMM;  /* clause result */
A_PROC_ENTRY(try_name);
 /* line 50: */
 /* line 51: */
{ 
MEDAAMM_top = JVCAOST_min(N1.upb, N2.upb);
 /* line 53: */
NEDAAMM = (MEDAAMM_top!=0);
if ( NEDAAMM )
{ /* line 54: */
NEDAAMM = A_VC_EQ(A_VTRIM(OEDAAMM,(N1),A_VTSCRIPT(&(OEDAAMM.upb),(N1).upb,1,MEDAAMM_top)),A_VTRIM(PEDAAMM,(N2),A_VTSCRIPT(&(PEDAAMM.upb),(N2).upb,1,MEDAAMM_top)));
}
QEDAAMM = NEDAAMM;
} 
A_PROC_EXIT(try_name);
return( QEDAAMM );
} 
#undef NL

A68_VOID  SEDAAMM_remove_quotes(A68_VC  Str, A68_VC  *ReturnedValue)
{ 
A68_INT  TEDAAMM_upb;
A68_BOOL  UEDAAMM;  /* optbool result */
A68_INT  VEDAAMM;  /* YIELD */
A68_BOOL  WEDAAMM_instr;
A68_31  YEDAAMM_generator;   /* proc value of non-global proc */
A68_VC  DFDAAMM;  /* avoid structure result */
A68_VC  EFDAAMM_ans;
A68_INT  FFDAAMM_i;
A68_INT  GFDAAMM_j;
A68_INT  HFDAAMM;  /* to part of loop */
A68_INT  IFDAAMM;  /* YIELD */
A68_CHAR * JFDAAMM;  /* YIELD */
A68_INT  KFDAAMM;  /* YIELD */
A68_CHAR * LFDAAMM;  /* YIELD */
A68_VC  MFDAAMM;  /* clause result */
A68_VC  NFDAAMM;  /* OPERATORS - trim index */
A_PROC_ENTRY(remove_quotes);
 /* line 58: */
 /* line 59: */
{ 
TEDAAMM_upb = Str.upb;
 /* line 61: */
UEDAAMM = (TEDAAMM_upb>0);
if ( UEDAAMM )
{VEDAAMM = 1 ;
UEDAAMM = ((*(&A_VINDEX(Str,VEDAAMM)))=='\"');
}
 /* line 62: */
if ( UEDAAMM )
{ 
WEDAAMM_instr = A68_TRUE;
 /* line 63: */
A_CLOSURE( YEDAAMM_generator, ZEDAAMM_generator, AFDAAMM_generator );
(( AFDAAMM_generator * ) ( YEDAAMM_generator.nonlocals )) -> TEDAAMM_upb = TEDAAMM_upb;
A_CALLPROC(YEDAAMM_generator,(A68_FALSE, &DFDAAMM),(A68_FALSE, &DFDAAMM,(YEDAAMM_generator).nonlocals));
EFDAAMM_ans = DFDAAMM;
 /* line 64: */
FFDAAMM_i = 0;
 /* line 66: */
 /* line 67: */
HFDAAMM = TEDAAMM_upb;
for ( GFDAAMM_j = 2;
GFDAAMM_j <= HFDAAMM;
GFDAAMM_j += 1 )
{ 
 /* line 68: */
 /* line 69: */
if ( ((*(&A_VINDEX(Str,GFDAAMM_j)))=='\"') )
{ 
if ( WEDAAMM_instr = !WEDAAMM_instr )
{ 
 /* line 70: */
 /* line 71: */
IFDAAMM = FFDAAMM_i+=1 ;
JFDAAMM = (&A_VINDEX(EFDAAMM_ans,IFDAAMM)) ;
(*JFDAAMM) = '\"';
} 
} 
else
{ 
 /* line 72: */
 /* line 73: */
KFDAAMM = FFDAAMM_i+=1 ;
LFDAAMM = (&A_VINDEX(EFDAAMM_ans,KFDAAMM)) ;
(*LFDAAMM) = (*(&A_VINDEX(Str,GFDAAMM_j)));
} 
}
 /* line 74: */
 /* line 75: */
 /* line 77: */
MFDAAMM = A_VTRIM(NFDAAMM,(EFDAAMM_ans),A_VTSCRIPT(&(NFDAAMM.upb),(EFDAAMM_ans).upb,1,FFDAAMM_i));
} 
else
{ 
 /* line 78: */
MFDAAMM = Str;
} 
} 
A_PROC_EXIT(remove_quotes);
*ReturnedValue = (MFDAAMM);
return;
} 
#undef NL
 /* line 84: */
 /* line 85: */
 /* line 86: */
 /* line 87: */
 /* line 88: */

A_STATIC A68_BOOL  WFDAAMM_lookup_file(A68_VC  Name, A68_VC  Type, A68_BOOL  One_dir, A68_VC * Name_found, A68_INT * Dsize, A68_97  Msg)
{ 
A68_BOOL  XFDAAMM_found;
A68_31  ZFDAAMM_generator;   /* proc value of non-global proc */
A68_VC  FGDAAMM;  /* avoid structure result */
A68_VC  EGDAAMM_buffer;
A68_INT  GGDAAMM_nsize;
A68_INT  HGDAAMM_tsize;
A68_INT  IGDAAMM_bpos;
A68_INT  JGDAAMM_dtop;
A68_287  LGDAAMM_analyse_symbol;   /* proc value of non-global proc */
A68_276  IHDAAMM_try_action;   /* proc value of non-global proc */
A68_VC  THDAAMM;  /* OPERATORS - trim index */
A68_VC  UHDAAMM;  /* avoid structure result */
A68_BOOL  VHDAAMM;  /* clause result */
A_PROC_ENTRY(lookup_file);
 /* line 89: */
 /* line 90: */
{ 
XFDAAMM_found = A68_FALSE;
 /* line 91: */
A_CLOSURE( ZFDAAMM_generator, AGDAAMM_generator, BGDAAMM_generator );
A_CALLPROC(ZFDAAMM_generator,(A68_TRUE, &FGDAAMM),(A68_TRUE, &FGDAAMM,(ZFDAAMM_generator).nonlocals));
EGDAAMM_buffer = FGDAAMM;
 /* line 92: */
GGDAAMM_nsize = Name.upb;
HGDAAMM_tsize = Type.upb;
 /* line 93: */
IGDAAMM_bpos = 0;
JGDAAMM_dtop = 0;
 /* line 95: */
A_CLOSURE( LGDAAMM_analyse_symbol, MGDAAMM_analyse_symbol, NGDAAMM_analyse_symbol );
(( NGDAAMM_analyse_symbol * ) ( LGDAAMM_analyse_symbol.nonlocals )) -> LGDAAMM_analyse_symbol = LGDAAMM_analyse_symbol;
(( NGDAAMM_analyse_symbol * ) ( LGDAAMM_analyse_symbol.nonlocals )) -> EGDAAMM_buffer = EGDAAMM_buffer;
(( NGDAAMM_analyse_symbol * ) ( LGDAAMM_analyse_symbol.nonlocals )) -> IGDAAMM_bpos = (&IGDAAMM_bpos);
 /* line 136: */
A_CLOSURE( IHDAAMM_try_action, JHDAAMM_try_action, KHDAAMM_try_action );
(( KHDAAMM_try_action * ) ( IHDAAMM_try_action.nonlocals )) -> IGDAAMM_bpos = (&IGDAAMM_bpos);
(( KHDAAMM_try_action * ) ( IHDAAMM_try_action.nonlocals )) -> LGDAAMM_analyse_symbol = LGDAAMM_analyse_symbol;
(( KHDAAMM_try_action * ) ( IHDAAMM_try_action.nonlocals )) -> JGDAAMM_dtop = (&JGDAAMM_dtop);
(( KHDAAMM_try_action * ) ( IHDAAMM_try_action.nonlocals )) -> EGDAAMM_buffer = EGDAAMM_buffer;
(( KHDAAMM_try_action * ) ( IHDAAMM_try_action.nonlocals )) -> GGDAAMM_nsize = GGDAAMM_nsize;
(( KHDAAMM_try_action * ) ( IHDAAMM_try_action.nonlocals )) -> Name = Name;
(( KHDAAMM_try_action * ) ( IHDAAMM_try_action.nonlocals )) -> HGDAAMM_tsize = HGDAAMM_tsize;
(( KHDAAMM_try_action * ) ( IHDAAMM_try_action.nonlocals )) -> Type = Type;
(( KHDAAMM_try_action * ) ( IHDAAMM_try_action.nonlocals )) -> XFDAAMM_found = (&XFDAAMM_found);
(( KHDAAMM_try_action * ) ( IHDAAMM_try_action.nonlocals )) -> Msg = Msg;
(( KHDAAMM_try_action * ) ( IHDAAMM_try_action.nonlocals )) -> One_dir = One_dir;
 /* line 151: */
ALAAAMM_scansymbols(SHDAAMM, IHDAAMM_try_action);
 /* line 152: */
 /* line 153: */
if ( XFDAAMM_found )
{ 
ZAAAOSI_makervc( A_VTRIM(THDAAMM,(EGDAAMM_buffer),A_VTSCRIPT(&(THDAAMM.upb),(EGDAAMM_buffer).upb,1,IGDAAMM_bpos)), &UHDAAMM );
(*Name_found) = UHDAAMM;
 /* line 154: */
 /* line 155: */
(*Dsize) = JGDAAMM_dtop;
} 
 /* line 156: */
 /* line 157: */
VHDAAMM = XFDAAMM_found;
} 
A_PROC_EXIT(lookup_file);
return( VHDAAMM );
} 
#undef NL

A_STATIC A68_VOID  XHDAAMM_generator(A68_BOOL  WHDAAMM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  YHDAAMM;  /* clause result */
A68_VC  ZHDAAMM;  /* OPERATORS - dynamic generator */
{ 
ZHDAAMM.upb = 19 ;
( WHDAAMM_anonymous? A_VLOC(A68_CHAR ,ZHDAAMM): A_VHEAP(A68_CHAR ,ZHDAAMM) );
YHDAAMM = ZHDAAMM;
} 
*ReturnedValue = (YHDAAMM);
return;
} 
#undef NL

A_STATIC A68_VOID  GIDAAMM_generator(A68_BOOL  FIDAAMM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  HIDAAMM;  /* clause result */
A68_VC  IIDAAMM;  /* OPERATORS - dynamic generator */
{ 
IIDAAMM.upb = 27 ;
( FIDAAMM_anonymous? A_VLOC(A68_CHAR ,IIDAAMM): A_VHEAP(A68_CHAR ,IIDAAMM) );
HIDAAMM = IIDAAMM;
} 
*ReturnedValue = (HIDAAMM);
return;
} 
#undef NL
 /* line 163: */
 /* line 164: */
 /* line 165: */
 /* line 166: */

A68_BOOL  TIDAAMM_lookup_src_file(A68_VC  Name, A68_BOOL  One_dir, A68_VC * Full_name, A68_INT * Dsize, A68_97  Msg)
{ 
A68_BOOL  UIDAAMM;  /* optbool result */
A68_BOOL  VIDAAMM;  /* clause result */
A_PROC_ENTRY(lookup_src_file);
 /* line 167: */
 /* line 168: */
UIDAAMM = WFDAAMM_lookup_file(Name, GIAAAMM_sta_type, One_dir, Full_name, Dsize, Msg);
if ( ! UIDAAMM )
{UIDAAMM = WFDAAMM_lookup_file(Name, JIAAAMM_a68_type, One_dir, Full_name, Dsize, Msg);
}
 /* line 169: */
if ( UIDAAMM )
{ 
 /* line 170: */
 /* line 171: */
VIDAAMM = A68_TRUE;
} 
else
{ 
(*Full_name) = AIDAAMM_no_src_file;
 /* line 172: */
 /* line 173: */
VIDAAMM = A68_FALSE;
} 
A_PROC_EXIT(lookup_src_file);
return( VIDAAMM );
} 
#undef NL
 /* line 176: */
 /* line 177: */
 /* line 178: */

A68_BOOL  AJDAAMM_check_module_file(A68_271 * M, A68_BOOL  One_dir, A68_VC * Full_name, A68_97  Msg)
{ 
A68_BOOL  BJDAAMM_file_found;
A68_INT  CJDAAMM_dsize;
A68_VC  DJDAAMM;  /* OPERATORS - trim index */
A68_VC * EJDAAMM;  /* YIELD */
A68_BOOL  FJDAAMM;  /* clause result */
A_PROC_ENTRY(check_module_file);
 /* line 179: */
 /* line 180: */
{ 
 /* line 181: */
 /* line 183: */
 /* line 184: */
if ( ((*(&(M->Filename))).upb==0) )
{ 
 /* line 185: */
BJDAAMM_file_found = TIDAAMM_lookup_src_file((*(&(M->Name))), One_dir, Full_name, (&CJDAAMM_dsize), Msg);
 /* line 186: */
if ( BJDAAMM_file_found )
{ 
 /* line 187: */
EJDAAMM = (&(M->Filename)) ;
(*EJDAAMM) = A_VTRIM(DJDAAMM,((*Full_name)),A_VTSCRIPT(&(DJDAAMM.upb),((*Full_name)).upb,(CJDAAMM_dsize+1),((*Full_name)).upb));
} 
} 
else
{ 
 /* line 188: */
 /* line 189: */
 /* line 190: */
if ( !(BJDAAMM_file_found = WFDAAMM_lookup_file((*(&(M->Filename))), BCAAAMM_blankname, One_dir, Full_name, (&CJDAAMM_dsize), Msg)) )
{ 
 /* line 191: */
(*Full_name) = JIDAAMM_file_not_found;
} 
} 
 /* line 192: */
 /* line 193: */
FJDAAMM = BJDAAMM_file_found;
} 
A_PROC_EXIT(check_module_file);
return( FJDAAMM );
} 
#undef NL
 /* line 196: */
 /* line 197: */
 /* line 198: */

A68_BOOL  KJDAAMM_put_module_name(A68_34 * List, A68_271 * M, A68_BOOL  Justify, A68_97  Msg)
{ 
A68_INT  LJDAAMM_chno;
A68_VC  MJDAAMM_full_name;
A68_INT  NJDAAMM_spcnt;
A68_BOOL  OJDAAMM_file_found;
A68_INT  PJDAAMM_ntop;
A68_52  QJDAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  RJDAAMM;  /* YIELD */
A68_85  SJDAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_52  TJDAAMM;  /* OPERATORS - mode -> union mode */
A68_56  UJDAAMM;  /* procedure value */
A68_85  VJDAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  WJDAAMM;  /* to part of loop */
A68_INT  XJDAAMM;  /* loop control */
A68_52  YJDAAMM;  /* OPERATORS - mode -> union mode */
A68_CHAR  ZJDAAMM;  /* YIELD */
A68_85  AKDAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_52  BKDAAMM;  /* OPERATORS - mode -> union mode */
A68_85  CKDAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  DKDAAMM;  /* clause result */
A_PROC_ENTRY(put_module_name);
 /* line 199: */
 /* line 200: */
{ 
LJDAAMM_chno = (YOAAOSL_charnumber(List)-1);
 /* line 201: */
 /* line 202: */
NJDAAMM_spcnt = 2;
 /* line 203: */
OJDAAMM_file_found = AJDAAMM_check_module_file(M, PFDAAMM_all_directories, (&MJDAAMM_full_name), Msg);
 /* line 204: */
PJDAAMM_ntop = MJDAAMM_full_name.upb;
 /* line 206: */
RJDAAMM = (*(&(M->Name))) ;
GFBAOSL_put(List, A_HVEC(SJDAAMM,A_UNITE(QJDAAMM,mode7,7,RJDAAMM),A68_52 ));
 /* line 207: */
if ( Justify )
{ 
NJDAAMM_spcnt = ((2+OIAAAMM_max_module_name_size)-(*(&(M->Name))).upb);
} 
 /* line 208: */
 /* line 209: */
if ( ((PJDAAMM_ntop+NJDAAMM_spcnt)>EPAAOSL_charsleft(List)) )
{ 
UJDAAMM.fn.fn_global = LRAAOSL_newline;
UJDAAMM.nonlocals = A68_NIL;
GFBAOSL_put(List, A_HVEC(VJDAAMM,A_UNITE(TJDAAMM,mode12,12,UJDAAMM),A68_52 ));
 /* line 210: */
 /* line 211: */
NJDAAMM_spcnt = FVCAOST_max(0, JVCAOST_min(LJDAAMM_chno, (EPAAOSL_charsleft(List)-PJDAAMM_ntop)));
} 
 /* line 212: */
WJDAAMM = NJDAAMM_spcnt;
for ( XJDAAMM = 1;
XJDAAMM <= WJDAAMM;
XJDAAMM += 1 )
{ 
ZJDAAMM = ' ' ;
GFBAOSL_put(List, A_HVEC(AKDAAMM,A_UNITE(YJDAAMM,mode6,6,ZJDAAMM),A68_52 ));
}
 /* line 213: */
GFBAOSL_put(List, A_HVEC(CKDAAMM,A_UNITE(BKDAAMM,mode7,7,MJDAAMM_full_name),A68_52 ));
 /* line 214: */
 /* line 215: */
DKDAAMM = OJDAAMM_file_found;
} 
A_PROC_EXIT(put_module_name);
return( DKDAAMM );
} 
#undef NL
 /* line 218: */
 /* line 219: */

A68_BOOL  HKDAAMM_list_compiles(A68_34 * List, A68_VC  Heading, A68_97  Msg)
{ 
A68_BOOL  IKDAAMM_first;
A68_BOOL  JKDAAMM_files_found;
A68_291  MKDAAMM_action;   /* proc value of non-global proc */
A68_320  XLDAAMM;  /* collateral clause result */
A68_52  AMDAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  BMDAAMM;  /* YIELD */
A68_52  CMDAAMM;  /* OPERATORS - mode -> union mode */
A68_56  DMDAAMM;  /* procedure value */
A68_85  EMDAAMM;  /* OPERATORS - istruct -> vector */
A68_BOOL  FMDAAMM;  /* clause result */
A_PROC_ENTRY(list_compiles);
 /* line 220: */
 /* line 221: */
{ 
IKDAAMM_first = A68_TRUE;
JKDAAMM_files_found = A68_TRUE;
 /* line 223: */
A_CLOSURE( MKDAAMM_action, NKDAAMM_action, OKDAAMM_action );
(( OKDAAMM_action * ) ( MKDAAMM_action.nonlocals )) -> IKDAAMM_first = (&IKDAAMM_first);
(( OKDAAMM_action * ) ( MKDAAMM_action.nonlocals )) -> List = List;
(( OKDAAMM_action * ) ( MKDAAMM_action.nonlocals )) -> Heading = Heading;
(( OKDAAMM_action * ) ( MKDAAMM_action.nonlocals )) -> JKDAAMM_files_found = (&JKDAAMM_files_found);
(( OKDAAMM_action * ) ( MKDAAMM_action.nonlocals )) -> Msg = Msg;
 /* line 247: */
SBBAAMM_scanmodules(WIAAAMM_modules, MKDAAMM_action);
 /* line 248: */
if ( IKDAAMM_first )
{ 
BMDAAMM = ZLDAAMM ;
XLDAAMM.data[0] = A_UNITE(AMDAAMM,mode7,7,BMDAAMM);
DMDAAMM.fn.fn_global = LRAAOSL_newline;
DMDAAMM.nonlocals = A68_NIL;
XLDAAMM.data[1] = A_UNITE(CMDAAMM,mode12,12,DMDAAMM);
GFBAOSL_put(List, A_HISVEC(EMDAAMM,XLDAAMM,2,A68_52 ));
} 
 /* line 249: */
 /* line 250: */
FMDAAMM = JKDAAMM_files_found;
} 
A_PROC_EXIT(list_compiles);
return( FMDAAMM );
} 
#undef NL

A68_VOID  IMDAAMM_list_links(A68_34 * List, A68_VC  Heading)
{ 
A68_BOOL  JMDAAMM_first;
A68_291  MMDAAMM_action;   /* proc value of non-global proc */
A68_320  RNDAAMM;  /* collateral clause result */
A68_52  UNDAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  VNDAAMM;  /* YIELD */
A68_52  WNDAAMM;  /* OPERATORS - mode -> union mode */
A68_56  XNDAAMM;  /* procedure value */
A68_85  YNDAAMM;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(list_links);
 /* line 253: */
 /* line 254: */
{ 
JMDAAMM_first = A68_TRUE;
 /* line 256: */
A_CLOSURE( MMDAAMM_action, NMDAAMM_action, OMDAAMM_action );
(( OMDAAMM_action * ) ( MMDAAMM_action.nonlocals )) -> JMDAAMM_first = (&JMDAAMM_first);
(( OMDAAMM_action * ) ( MMDAAMM_action.nonlocals )) -> List = List;
(( OMDAAMM_action * ) ( MMDAAMM_action.nonlocals )) -> Heading = Heading;
 /* line 271: */
SBBAAMM_scanmodules(WIAAAMM_modules, MMDAAMM_action);
 /* line 272: */
if ( JMDAAMM_first )
{ 
VNDAAMM = TNDAAMM ;
RNDAAMM.data[0] = A_UNITE(UNDAAMM,mode7,7,VNDAAMM);
XNDAAMM.fn.fn_global = LRAAOSL_newline;
XNDAAMM.nonlocals = A68_NIL;
RNDAAMM.data[1] = A_UNITE(WNDAAMM,mode12,12,XNDAAMM);
 /* line 273: */
GFBAOSL_put(List, A_HISVEC(YNDAAMM,RNDAAMM,2,A68_52 ));
} 
} 
A_PROC_EXIT(list_links);
return;
} 
#undef NL

A68_VOID  BODAAMM_list_attributes(A68_34 * List, A68_INT  Attribute_number)
{ 
A68_BOOL  CODAAMM_first;
A68_VC  DODAAMM;  /* avoid structure result */
A68_VC  EODAAMM_an;
A68_31  GODAAMM_generator;   /* proc value of non-global proc */
A68_VC  MODAAMM;  /* avoid structure result */
A68_VC  LODAAMM_list_name;
A68_291  PODAAMM_action;   /* proc value of non-global proc */
A68_332  MPDAAMM;  /* collateral clause result */
A68_52  PPDAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  QPDAAMM;  /* YIELD */
A68_52  RPDAAMM;  /* OPERATORS - mode -> union mode */
A68_52  UPDAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  VPDAAMM;  /* YIELD */
A68_52  WPDAAMM;  /* OPERATORS - mode -> union mode */
A68_56  XPDAAMM;  /* procedure value */
A68_85  YPDAAMM;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(list_attributes);
 /* line 276: */
 /* line 277: */
{ 
CODAAMM_first = A68_TRUE;
 /* line 278: */
GTAAAMM_attribute_name( Attribute_number, &DODAAMM );
EODAAMM_an = DODAAMM;
 /* line 279: */
A_CLOSURE( GODAAMM_generator, HODAAMM_generator, IODAAMM_generator );
(( IODAAMM_generator * ) ( GODAAMM_generator.nonlocals )) -> EODAAMM_an = EODAAMM_an;
A_CALLPROC(GODAAMM_generator,(A68_TRUE, &MODAAMM),(A68_TRUE, &MODAAMM,(GODAAMM_generator).nonlocals));
LODAAMM_list_name = MODAAMM;
A_VASSIGN2(EODAAMM_an,LODAAMM_list_name,A68_CHAR );
 /* line 281: */
A_CLOSURE( PODAAMM_action, QODAAMM_action, RODAAMM_action );
(( RODAAMM_action * ) ( PODAAMM_action.nonlocals )) -> Attribute_number = Attribute_number;
(( RODAAMM_action * ) ( PODAAMM_action.nonlocals )) -> CODAAMM_first = (&CODAAMM_first);
(( RODAAMM_action * ) ( PODAAMM_action.nonlocals )) -> List = List;
(( RODAAMM_action * ) ( PODAAMM_action.nonlocals )) -> LODAAMM_list_name = LODAAMM_list_name;
 /* line 293: */
SBBAAMM_scanmodules(WIAAAMM_modules, PODAAMM_action);
 /* line 294: */
 /* line 295: */
if ( CODAAMM_first )
{ 
UWAAAMM_set_lowercase(LODAAMM_list_name);
 /* line 296: */
QPDAAMM = OPDAAMM ;
MPDAAMM.data[0] = A_UNITE(PPDAAMM,mode7,7,QPDAAMM);
MPDAAMM.data[1] = A_UNITE(RPDAAMM,mode7,7,LODAAMM_list_name);
VPDAAMM = TPDAAMM ;
MPDAAMM.data[2] = A_UNITE(UPDAAMM,mode7,7,VPDAAMM);
XPDAAMM.fn.fn_global = LRAAOSL_newline;
XPDAAMM.nonlocals = A68_NIL;
MPDAAMM.data[3] = A_UNITE(WPDAAMM,mode12,12,XPDAAMM);
 /* line 297: */
 /* line 298: */
GFBAOSL_put(List, A_HISVEC(YPDAAMM,MPDAAMM,4,A68_52 ));
} 
} 
A_PROC_EXIT(list_attributes);
return;
} 
#undef NL

A68_VOID  BQDAAMM_show_symbol_class(A68_VC  Class, A68_VC  Title)
{ 
A68_INT  CQDAAMM_ttop;
A68_31  EQDAAMM_generator;   /* proc value of non-global proc */
A68_VC  KQDAAMM;  /* avoid structure result */
A68_VC  JQDAAMM_heading;
A68_INT  LQDAAMM;  /* YIELD */
A68_CHAR * MQDAAMM_fc;
A68_BOOL  NQDAAMM_found;
A68_276  PQDAAMM_show_sym;   /* proc value of non-global proc */
A68_VC  BRDAAMM;  /* OPERATORS - trim index */
A68_VC  CRDAAMM;  /* YIELD */
A68_VC  ERDAAMM;  /* OPERATORS - trim index */
A68_VC  GRDAAMM;  /* YIELD */
A68_VC  HRDAAMM;  /* OPERATORS - assign op */
A68_332  IRDAAMM;  /* collateral clause result */
A68_52  LRDAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  MRDAAMM;  /* YIELD */
A68_52  NRDAAMM;  /* OPERATORS - mode -> union mode */
A68_52  ORDAAMM;  /* OPERATORS - mode -> union mode */
A68_CHAR  PRDAAMM;  /* YIELD */
A68_52  QRDAAMM;  /* OPERATORS - mode -> union mode */
A68_56  RRDAAMM;  /* procedure value */
A68_85  SRDAAMM;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(show_symbol_class);
 /* line 301: */
 /* line 302: */
{ 
CQDAAMM_ttop = Title.upb;
 /* line 303: */
A_CLOSURE( EQDAAMM_generator, FQDAAMM_generator, GQDAAMM_generator );
(( GQDAAMM_generator * ) ( EQDAAMM_generator.nonlocals )) -> CQDAAMM_ttop = CQDAAMM_ttop;
A_CALLPROC(EQDAAMM_generator,(A68_TRUE, &KQDAAMM),(A68_TRUE, &KQDAAMM,(EQDAAMM_generator).nonlocals));
JQDAAMM_heading = KQDAAMM;
 /* line 304: */
LQDAAMM = 1 ;
MQDAAMM_fc = (&A_VINDEX(JQDAAMM_heading,LQDAAMM));
 /* line 305: */
NQDAAMM_found = A68_FALSE;
 /* line 307: */
A_CLOSURE( PQDAAMM_show_sym, QQDAAMM_show_sym, RQDAAMM_show_sym );
(( RQDAAMM_show_sym * ) ( PQDAAMM_show_sym.nonlocals )) -> JQDAAMM_heading = JQDAAMM_heading;
(( RQDAAMM_show_sym * ) ( PQDAAMM_show_sym.nonlocals )) -> NQDAAMM_found = (&NQDAAMM_found);
 /* line 314: */
CRDAAMM = A_VTRIM(BRDAAMM,(JQDAAMM_heading),A_VTSCRIPT(&(BRDAAMM.upb),(JQDAAMM_heading).upb,1,CQDAAMM_ttop)) ;
A_VASSIGN2(Title,CRDAAMM,A68_CHAR );
 /* line 315: */
GRDAAMM = A_VTRIM(ERDAAMM,(JQDAAMM_heading),A_VTSCRIPT(&(ERDAAMM.upb),(JQDAAMM_heading).upb,(CQDAAMM_ttop+1),(JQDAAMM_heading).upb)) ;
HRDAAMM = FRDAAMM ;
A_VASSIGN2(HRDAAMM,GRDAAMM,A68_CHAR );
 /* line 316: */
(*MQDAAMM_fc) = (A68_CHAR)((A68_INT)(unsigned char)(*MQDAAMM_fc)-SHAAAMM_lcbias);
 /* line 317: */
ALAAAMM_scansymbols(Class, PQDAAMM_show_sym);
 /* line 318: */
if ( !NQDAAMM_found )
{ 
MRDAAMM = KRDAAMM ;
IRDAAMM.data[0] = A_UNITE(LRDAAMM,mode7,7,MRDAAMM);
IRDAAMM.data[1] = A_UNITE(NRDAAMM,mode7,7,Title);
PRDAAMM = '.' ;
IRDAAMM.data[2] = A_UNITE(ORDAAMM,mode6,6,PRDAAMM);
RRDAAMM.fn.fn_global = LRAAOSL_newline;
RRDAAMM.nonlocals = A68_NIL;
IRDAAMM.data[3] = A_UNITE(QRDAAMM,mode12,12,RRDAAMM);
 /* line 319: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(SRDAAMM,IRDAAMM,4,A68_52 ));
} 
} 
A_PROC_EXIT(show_symbol_class);
return;
} 
#undef NL

A68_BOOL  VRDAAMM_unmark_attribute(A68_271 * M, A68_INT  Attribute_number)
{ 
A68_BOOL  WRDAAMM;  /* clause result */
A_PROC_ENTRY(unmark_attribute);
 /* line 322: */
 /* line 323: */
{ 
 /* line 324: */
if ( ZUAAAMM_attribute_marked(M, Attribute_number) )
{ 
LUAAAMM_clear_attribute(M, Attribute_number);
 /* line 325: */
 /* line 326: */
 /* line 327: */
WRDAAMM = A68_TRUE;
} 
else
{ 
 /* line 328: */
 /* line 329: */
WRDAAMM = A68_FALSE;
} 
} 
A_PROC_EXIT(unmark_attribute);
return( WRDAAMM );
} 
#undef NL

A68_BOOL  ZRDAAMM_unmark_compile(A68_271 * M, A68_INT  Attribute_number)
{ 
A68_302  ASDAAMM;  /* OPERATORS - mode -> union mode */
A68_BOOL  BSDAAMM;  /* YIELD */
A68_BOOL  CSDAAMM;  /* clause result */
A_PROC_ENTRY(unmark_compile);
 /* line 332: */
 /* line 333: */
{ 
 /* line 334: */
if ( ZUAAAMM_attribute_marked(M, Attribute_number) )
{ 
LUAAAMM_clear_attribute(M, Attribute_number);
 /* line 335: */
 /* line 336: */
if ( !ZUAAAMM_attribute_marked(M, RPAAAMM_link_attribute) )
{ 
LUAAAMM_clear_attribute(M, SPAAAMM_debug_attribute);
 /* line 337: */
 /* line 338: */
if ( !SUAAAMM_permanent_attribute(M, VPAAAMM_exename_attribute) )
{ 
 /* line 339: */
 /* line 340: */
LUAAAMM_clear_attribute(M, VPAAAMM_exename_attribute);
} 
} 
 /* line 341: */
 /* line 342: */
if ( QTAAAMM_attribute_state(M, WPAAAMM_version_attribute) )
{ 
 /* line 343: */
BSDAAMM = A68_FALSE ;
YTAAAMM_set_attribute(M, WPAAAMM_version_attribute, A_UNITE(ASDAAMM,mode2,2,BSDAAMM));
} 
 /* line 344: */
 /* line 345: */
if ( !SUAAAMM_permanent_attribute(M, TPAAAMM_star_attribute) )
{ 
 /* line 346: */
LUAAAMM_clear_attribute(M, TPAAAMM_star_attribute);
} 
 /* line 347: */
 /* line 348: */
if ( !SUAAAMM_permanent_attribute(M, UPAAAMM_heap_attribute) )
{ 
 /* line 349: */
LUAAAMM_clear_attribute(M, UPAAAMM_heap_attribute);
} 
 /* line 350: */
 /* line 351: */
if ( !SUAAAMM_permanent_attribute(M, XPAAAMM_optimise_attribute) )
{ 
 /* line 352: */
LUAAAMM_clear_attribute(M, XPAAAMM_optimise_attribute);
} 
 /* line 353: */
 /* line 354: */
 /* line 355: */
CSDAAMM = A68_TRUE;
} 
else
{ 
 /* line 356: */
 /* line 357: */
CSDAAMM = A68_FALSE;
} 
} 
A_PROC_EXIT(unmark_compile);
return( CSDAAMM );
} 
#undef NL

A68_BOOL  FSDAAMM_unmark_link(A68_271 * M, A68_INT  Attribute_number)
{ 
A68_BOOL  GSDAAMM;  /* clause result */
A_PROC_ENTRY(unmark_link);
 /* line 360: */
 /* line 361: */
{ 
 /* line 362: */
if ( ZUAAAMM_attribute_marked(M, Attribute_number) )
{ 
LUAAAMM_clear_attribute(M, Attribute_number);
 /* line 363: */
 /* line 364: */
if ( !ZUAAAMM_attribute_marked(M, QPAAAMM_compile_attribute) )
{ 
 /* line 365: */
LUAAAMM_clear_attribute(M, SPAAAMM_debug_attribute);
} 
 /* line 366: */
 /* line 367: */
if ( !SUAAAMM_permanent_attribute(M, VPAAAMM_exename_attribute) )
{ 
 /* line 368: */
LUAAAMM_clear_attribute(M, VPAAAMM_exename_attribute);
} 
 /* line 369: */
 /* line 370: */
 /* line 371: */
GSDAAMM = A68_TRUE;
} 
else
{ 
 /* line 372: */
 /* line 373: */
GSDAAMM = A68_FALSE;
} 
} 
A_PROC_EXIT(unmark_link);
return( GSDAAMM );
} 
#undef NL
 /* line 376: */
 /* line 377: */
 /* line 378: */
 /* line 379: */

A68_VOID  MSDAAMM_undo_attribute(A68_VC  Name, A68_INT  Attribute_number, A68_300  Undo_action, A68_BOOL  All, A68_BOOL  Warning)
{ 
A68_VC  NSDAAMM;  /* avoid structure result */
A68_VC  OSDAAMM_an;
A68_31  QSDAAMM_generator;   /* proc value of non-global proc */
A68_VC  WSDAAMM;  /* avoid structure result */
A68_VC  VSDAAMM_list_name;
A68_291  ZSDAAMM_clear_action;   /* proc value of non-global proc */
A68_270 * VUDAAMM_ml;
A68_BOOL  WUDAAMM;  /* optbool result */
A68_320  XUDAAMM;  /* collateral clause result */
A68_VC  AVDAAMM;  /* avoid structure result */
A68_52  BVDAAMM;  /* OPERATORS - mode -> union mode */
A68_52  CVDAAMM;  /* OPERATORS - mode -> union mode */
A68_56  DVDAAMM;  /* procedure value */
A68_85  EVDAAMM;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(undo_attribute);
 /* line 380: */
 /* line 381: */
{ 
GTAAAMM_attribute_name( Attribute_number, &NSDAAMM );
OSDAAMM_an = NSDAAMM;
 /* line 382: */
A_CLOSURE( QSDAAMM_generator, RSDAAMM_generator, SSDAAMM_generator );
(( SSDAAMM_generator * ) ( QSDAAMM_generator.nonlocals )) -> OSDAAMM_an = OSDAAMM_an;
A_CALLPROC(QSDAAMM_generator,(A68_TRUE, &WSDAAMM),(A68_TRUE, &WSDAAMM,(QSDAAMM_generator).nonlocals));
VSDAAMM_list_name = WSDAAMM;
A_VASSIGN2(OSDAAMM_an,VSDAAMM_list_name,A68_CHAR );
 /* line 384: */
UWAAAMM_set_lowercase(VSDAAMM_list_name);
 /* line 386: */
A_CLOSURE( ZSDAAMM_clear_action, ATDAAMM_clear_action, BTDAAMM_clear_action );
(( BTDAAMM_clear_action * ) ( ZSDAAMM_clear_action.nonlocals )) -> All = All;
(( BTDAAMM_clear_action * ) ( ZSDAAMM_clear_action.nonlocals )) -> Name = Name;
(( BTDAAMM_clear_action * ) ( ZSDAAMM_clear_action.nonlocals )) -> Undo_action = Undo_action;
(( BTDAAMM_clear_action * ) ( ZSDAAMM_clear_action.nonlocals )) -> Attribute_number = Attribute_number;
(( BTDAAMM_clear_action * ) ( ZSDAAMM_clear_action.nonlocals )) -> Warning = Warning;
(( BTDAAMM_clear_action * ) ( ZSDAAMM_clear_action.nonlocals )) -> VSDAAMM_list_name = VSDAAMM_list_name;
 /* line 403: */
VUDAAMM_ml = SBBAAMM_scanmodules(WIAAAMM_modules, ZSDAAMM_clear_action);
 /* line 405: */
WUDAAMM = !All;
if ( WUDAAMM )
{WUDAAMM = !Warning;
}
if ( WUDAAMM )
{WUDAAMM = (VUDAAMM_ml==KBAAAMM_nilmodulelist);
}
 /* line 406: */
if ( WUDAAMM )
{ 
EZAAAMM_not_found( ZUDAAMM, Name, &AVDAAMM );
XUDAAMM.data[0] = A_UNITE(BVDAAMM,mode7,7,AVDAAMM);
DVDAAMM.fn.fn_global = LRAAOSL_newline;
DVDAAMM.nonlocals = A68_NIL;
XUDAAMM.data[1] = A_UNITE(CVDAAMM,mode12,12,DVDAAMM);
 /* line 407: */
 /* line 408: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(EVDAAMM,XUDAAMM,2,A68_52 ));
} 
} 
A_PROC_EXIT(undo_attribute);
return;
} 
#undef NL
 /* line 411: */
 /* line 412: */

A68_VOID  IVDAAMM_undo_compile(A68_VC  Name, A68_BOOL  All, A68_BOOL  Warning)
{ 
A68_300  JVDAAMM;  /* procedure value */
A_PROC_ENTRY(undo_compile);
 /* line 413: */
JVDAAMM.fn.fn_global = ZRDAAMM_unmark_compile;
JVDAAMM.nonlocals = A68_NIL;
MSDAAMM_undo_attribute(Name, QPAAAMM_compile_attribute, JVDAAMM, All, Warning);
A_PROC_EXIT(undo_compile);
return;
} 
#undef NL
 /* line 416: */
 /* line 417: */

A68_VOID  NVDAAMM_undo_link(A68_VC  Name, A68_BOOL  All, A68_BOOL  Warning)
{ 
A68_300  OVDAAMM;  /* procedure value */
A_PROC_ENTRY(undo_link);
 /* line 418: */
OVDAAMM.fn.fn_global = FSDAAMM_unmark_link;
OVDAAMM.nonlocals = A68_NIL;
MSDAAMM_undo_attribute(Name, RPAAAMM_link_attribute, OVDAAMM, All, Warning);
A_PROC_EXIT(undo_link);
return;
} 
#undef NL

A68_VOID  AWDAAMM_execute(A68_VC  Nodename, A68_97  Msg)
{ 
A68_BOOL  BWDAAMM_offline;
A68_VC  CWDAAMM_full_name;
A68_BITS  DWDAAMM_action_symbols;
A68_BOOL  EWDAAMM_sep_trans_from_cc;
A68_BOOL  FWDAAMM_goto_next_stage;
A68_VC  GWDAAMM_action_string;
A68_276  IWDAAMM_check_for_action;   /* proc value of non-global proc */
A68_291  OXDAAMM_check_uses;
A68_291  PXDAAMM;  /* procedure value */
A68_291  SXDAAMM_compile_action;   /* proc value of non-global proc */
A68_291  SCEAAMM_cc_action;   /* proc value of non-global proc */
A68_291  DFEAAMM_can_link;   /* proc value of non-global proc */
A68_291  LFEAAMM_link_action;   /* proc value of non-global proc */
A68_291  OHEAAMM;  /* procedure value */
A68_320  PHEAAMM;  /* collateral clause result */
A68_52  SHEAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  THEAAMM;  /* YIELD */
A68_52  UHEAAMM;  /* OPERATORS - mode -> union mode */
A68_56  VHEAAMM;  /* procedure value */
A68_85  WHEAAMM;  /* OPERATORS - istruct -> vector */
A68_323  XHEAAMM;  /* collateral clause result */
A68_52  AIEAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  BIEAAMM;  /* YIELD */
A68_52  CIEAAMM;  /* OPERATORS - mode -> union mode */
A68_52  DIEAAMM;  /* OPERATORS - mode -> union mode */
A68_56  EIEAAMM;  /* procedure value */
A68_85  FIEAAMM;  /* OPERATORS - istruct -> vector */
A68_BOOL  GIEAAMM;  /* optbool result */
A_PROC_ENTRY(execute);
 /* line 431: */
 /* line 432: */
{ 
BWDAAMM_offline = (Nodename.upb!=0);
 /* line 433: */
 /* line 434: */
DWDAAMM_action_symbols = 0X0U;
 /* line 435: */
EWDAAMM_sep_trans_from_cc = A68_FALSE;
FWDAAMM_goto_next_stage = A68_TRUE;
 /* line 436: */
GWDAAMM_action_string = LGAAAMM_compile_string;
 /* line 438: */
A_CLOSURE( IWDAAMM_check_for_action, JWDAAMM_check_for_action, KWDAAMM_check_for_action );
(( KWDAAMM_check_for_action * ) ( IWDAAMM_check_for_action.nonlocals )) -> DWDAAMM_action_symbols = (&DWDAAMM_action_symbols);
 /* line 444: */
 /* line 463: */
 /* line 468: */
 /* line 477: */
PXDAAMM.fn.fn_global = HXDAAMM_check_combined_uses;
PXDAAMM.nonlocals = A68_NIL;
OXDAAMM_check_uses = (PXDAAMM);
 /* line 479: */
A_CLOSURE( SXDAAMM_compile_action, TXDAAMM_compile_action, UXDAAMM_compile_action );
(( UXDAAMM_compile_action * ) ( SXDAAMM_compile_action.nonlocals )) -> EWDAAMM_sep_trans_from_cc = (&EWDAAMM_sep_trans_from_cc);
(( UXDAAMM_compile_action * ) ( SXDAAMM_compile_action.nonlocals )) -> FWDAAMM_goto_next_stage = (&FWDAAMM_goto_next_stage);
(( UXDAAMM_compile_action * ) ( SXDAAMM_compile_action.nonlocals )) -> OXDAAMM_check_uses = (&OXDAAMM_check_uses);
(( UXDAAMM_compile_action * ) ( SXDAAMM_compile_action.nonlocals )) -> CWDAAMM_full_name = (&CWDAAMM_full_name);
(( UXDAAMM_compile_action * ) ( SXDAAMM_compile_action.nonlocals )) -> Msg = Msg;
(( UXDAAMM_compile_action * ) ( SXDAAMM_compile_action.nonlocals )) -> GWDAAMM_action_string = (&GWDAAMM_action_string);
 /* line 545: */
A_CLOSURE( SCEAAMM_cc_action, TCEAAMM_cc_action, UCEAAMM_cc_action );
(( UCEAAMM_cc_action * ) ( SCEAAMM_cc_action.nonlocals )) -> Msg = Msg;
(( UCEAAMM_cc_action * ) ( SCEAAMM_cc_action.nonlocals )) -> FWDAAMM_goto_next_stage = (&FWDAAMM_goto_next_stage);
 /* line 577: */
A_CLOSURE( DFEAAMM_can_link, EFEAAMM_can_link, FFEAAMM_can_link );
(( FFEAAMM_can_link * ) ( DFEAAMM_can_link.nonlocals )) -> DFEAAMM_can_link = DFEAAMM_can_link;
 /* line 588: */
A_CLOSURE( LFEAAMM_link_action, MFEAAMM_link_action, NFEAAMM_link_action );
(( NFEAAMM_link_action * ) ( LFEAAMM_link_action.nonlocals )) -> DFEAAMM_can_link = DFEAAMM_can_link;
(( NFEAAMM_link_action * ) ( LFEAAMM_link_action.nonlocals )) -> Msg = Msg;
 /* line 609: */
BQDAAMM_show_symbol_class(LHEAAMM, KHEAAMM);
 /* line 610: */
 /* line 611: */
if ( BWDAAMM_offline )
{ 
VACAAMM_save_database(ZJAAAMM_database_name, AKAAAMM_detach_name, DDBAAMM_database_modified(), Msg);
 /* line 612: */
 /* line 613: */
 /* line 614: */
ECDAAMM_submit(ZJAAAMM_database_name, Nodename, Msg);
} 
else
{ 
ALAAAMM_scansymbols(NHEAAMM, IWDAAMM_check_for_action);
 /* line 615: */
EWDAAMM_sep_trans_from_cc = ((A68_BITS )(DWDAAMM_action_symbols&XVDAAMM_trcomp_tag)==XVDAAMM_trcomp_tag);
 /* line 616: */
 /* line 617: */
if ( ((A68_BITS )(DWDAAMM_action_symbols&FJAAAMM_translate_tag)!=0X0U) )
{ 
 /* line 619: */
GWDAAMM_action_string = CGAAAMM_translate_string;
} 
 /* line 620: */
if ( EWDAAMM_sep_trans_from_cc )
{ 
OHEAAMM.fn.fn_global = LXDAAMM_check_separate_uses;
OHEAAMM.nonlocals = A68_NIL;
OXDAAMM_check_uses = OHEAAMM;
} 
 /* line 621: */
 /* line 622: */
if ( SIAAAMM_diagnose )
{ 
 /* line 623: */
if ( EWDAAMM_sep_trans_from_cc )
{ 
THEAAMM = RHEAAMM ;
PHEAAMM.data[0] = A_UNITE(SHEAAMM,mode7,7,THEAAMM);
VHEAAMM.fn.fn_global = LRAAOSL_newline;
VHEAAMM.nonlocals = A68_NIL;
PHEAAMM.data[1] = A_UNITE(UHEAAMM,mode12,12,VHEAAMM);
 /* line 624: */
 /* line 625: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(WHEAAMM,PHEAAMM,2,A68_52 ));
} 
else
{ 
 /* line 626: */
BIEAAMM = ZHEAAMM ;
XHEAAMM.data[0] = A_UNITE(AIEAAMM,mode7,7,BIEAAMM);
XHEAAMM.data[1] = A_UNITE(CIEAAMM,mode7,7,GWDAAMM_action_string);
EIEAAMM.fn.fn_global = LRAAOSL_newline;
EIEAAMM.nonlocals = A68_NIL;
XHEAAMM.data[2] = A_UNITE(DIEAAMM,mode12,12,EIEAAMM);
 /* line 627: */
 /* line 628: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(FIEAAMM,XHEAAMM,3,A68_52 ));
} 
} 
 /* line 629: */
UIAAAMM_ring_bell = GHAAAMM_flagon(OKAAAMM_bell_flag);
 /* line 630: */
SBBAAMM_scanmodules(WIAAAMM_modules, SXDAAMM_compile_action);
 /* line 631: */
GIEAAMM = FWDAAMM_goto_next_stage;
if ( GIEAAMM )
{GIEAAMM = EWDAAMM_sep_trans_from_cc;
}
 /* line 632: */
if ( GIEAAMM )
{ 
 /* line 633: */
SBBAAMM_scanmodules(WIAAAMM_modules, SCEAAMM_cc_action);
} 
 /* line 634: */
 /* line 635: */
if ( FWDAAMM_goto_next_stage )
{ 
 /* line 636: */
 /* line 637: */
 /* line 638: */
SBBAAMM_scanmodules(WIAAAMM_modules, LFEAAMM_link_action);
} 
} 
} 
A_PROC_EXIT(execute);
return;
} 
#undef NL
 /* line 642: */
 /* line 643: */

A_STATIC A68_BOOL  KIEAAMM_do_update_version(A68_271 * M, A68_38  Get_version_string, A68_97  Msg)
{ 
A68_VC  LIEAAMM_name_found;
A68_320  MIEAAMM;  /* collateral clause result */
A68_52  PIEAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  QIEAAMM;  /* YIELD */
A68_52  RIEAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  SIEAAMM;  /* YIELD */
A68_BOOL  TIEAAMM;  /* clause result */
A68_85  UIEAAMM;  /* OPERATORS - istruct -> vector */
A68_VC  VIEAAMM;  /* avoid structure result */
A68_BOOL  WIEAAMM;  /* clause result */
A68_VC  XIEAAMM;  /* avoid structure result */
A68_VC  YIEAAMM_save_name;
A68_92 * ZIEAAMM_infile;
A68_92 * AJEAAMM_outfile;
A68_31  CJEAAMM_generator;   /* proc value of non-global proc */
A68_VC  IJEAAMM;  /* avoid structure result */
A68_VC  HJEAAMM_buffer;
A68_INT  JJEAAMM_buftop;
A68_INT  KJEAAMM_string_pos;
A68_INT  LJEAAMM_string_end;
A68_35  MJEAAMM_rr;
A68_BOOL  NJEAAMM_change_strings;
A68_350  PJEAAMM_find_string;   /* proc value of non-global proc */
A68_36  YJEAAMM_insert_string;   /* proc value of non-global proc */
A68_117  DLEAAMM_get_number;   /* proc value of non-global proc */
A68_122  NLEAAMM_libroot;   /* proc value of non-global proc */
A68_35  FMEAAMM;  /* avoid structure result */
A68_BOOL  GMEAAMM;  /* optbool result */
A68_BOOL  HMEAAMM;  /* clause result */
A68_BOOL  IMEAAMM;  /* clause result */
A68_BOOL  NMEAAMM;  /* optbool result */
A68_VC  SMEAAMM;  /* avoid structure result */
A68_VC  TMEAAMM;  /* avoid structure result */
A68_323  WMEAAMM;  /* collateral clause result */
A68_VC  XMEAAMM;  /* avoid structure result */
A68_52  YMEAAMM;  /* OPERATORS - mode -> union mode */
A68_52  BNEAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  CNEAAMM;  /* YIELD */
A68_VC  DNEAAMM;  /* avoid structure result */
A68_VC  ENEAAMM;  /* OPERATORS - trim index */
A68_52  FNEAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  GNEAAMM;  /* YIELD */
A68_85  HNEAAMM;  /* OPERATORS - istruct -> vector */
A68_VC  INEAAMM;  /* avoid structure result */
A68_VC  LNEAAMM;  /* avoid structure result */
A68_VC  MNEAAMM;  /* OPERATORS - trim index */
A68_VC  PNEAAMM;  /* avoid structure result */
A68_INT  QNEAAMM;  /* YIELD */
A68_CHAR * RNEAAMM;  /* YIELD */
A68_VC  SNEAAMM;  /* OPERATORS - trim index */
A68_35  TNEAAMM;  /* avoid structure result */
A68_VC  WNEAAMM;  /* avoid structure result */
A68_46  XNEAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(do_update_version);
 /* line 644: */
 /* line 645: */
{ 
 /* line 647: */
 /* line 648: */
QIEAAMM = OIEAAMM ;
MIEAAMM.data[0] = A_UNITE(PIEAAMM,mode7,7,QIEAAMM);
SIEAAMM = (*(&(M->Name))) ;
MIEAAMM.data[1] = A_UNITE(RIEAAMM,mode7,7,SIEAAMM);
 /* line 649: */
 /* line 650: */
UJBAOSL_oneline( A_HISVEC(UIEAAMM,MIEAAMM,2,A68_52 ), &VIEAAMM );
TIEAAMM = !JXAAAMM_query(VIEAAMM, DXAAAMM_default_yes, Msg);
if ( TIEAAMM )
{ 
 /* line 651: */
WIEAAMM = A68_FALSE;
} 
else
{ 
 /* line 652: */
if ( AJDAAMM_check_module_file(M, PFDAAMM_all_directories, (&LIEAAMM_name_found), Msg) )
{ 
ICDAAMM_save_file( (*(&(M->Filename))), Msg, &XIEAAMM );
YIEAAMM_save_name = XIEAAMM;
 /* line 653: */
ZIEAAMM_infile = FQBAOSI_open_file(YIEAAMM_save_name, PNBAOSI_read_access, Msg);
 /* line 654: */
AJEAAMM_outfile = FQBAOSI_open_file((*(&(M->Filename))), TNBAOSI_write_access, Msg);
 /* line 655: */
A_CLOSURE( CJEAAMM_generator, DJEAAMM_generator, EJEAAMM_generator );
A_CALLPROC(CJEAAMM_generator,(A68_TRUE, &IJEAAMM),(A68_TRUE, &IJEAAMM,(CJEAAMM_generator).nonlocals));
HJEAAMM_buffer = IJEAAMM;
 /* line 656: */
 /* line 657: */
 /* line 658: */
NJEAAMM_change_strings = A68_TRUE;
 /* line 660: */
A_CLOSURE( PJEAAMM_find_string, QJEAAMM_find_string, RJEAAMM_find_string );
(( RJEAAMM_find_string * ) ( PJEAAMM_find_string.nonlocals )) -> KJEAAMM_string_pos = (&KJEAAMM_string_pos);
(( RJEAAMM_find_string * ) ( PJEAAMM_find_string.nonlocals )) -> LJEAAMM_string_end = (&LJEAAMM_string_end);
(( RJEAAMM_find_string * ) ( PJEAAMM_find_string.nonlocals )) -> JJEAAMM_buftop = (&JJEAAMM_buftop);
(( RJEAAMM_find_string * ) ( PJEAAMM_find_string.nonlocals )) -> HJEAAMM_buffer = HJEAAMM_buffer;
 /* line 674: */
A_CLOSURE( YJEAAMM_insert_string, ZJEAAMM_insert_string, AKEAAMM_insert_string );
(( AKEAAMM_insert_string * ) ( YJEAAMM_insert_string.nonlocals )) -> LJEAAMM_string_end = (&LJEAAMM_string_end);
(( AKEAAMM_insert_string * ) ( YJEAAMM_insert_string.nonlocals )) -> HJEAAMM_buffer = HJEAAMM_buffer;
(( AKEAAMM_insert_string * ) ( YJEAAMM_insert_string.nonlocals )) -> KJEAAMM_string_pos = (&KJEAAMM_string_pos);
(( AKEAAMM_insert_string * ) ( YJEAAMM_insert_string.nonlocals )) -> JJEAAMM_buftop = (&JJEAAMM_buftop);
 /* line 699: */
 /* line 700: */
 /* line 701: */
A_CLOSURE( DLEAAMM_get_number, ELEAAMM_get_number, FLEAAMM_get_number );
(( FLEAAMM_get_number * ) ( DLEAAMM_get_number.nonlocals )) -> LJEAAMM_string_end = (&LJEAAMM_string_end);
(( FLEAAMM_get_number * ) ( DLEAAMM_get_number.nonlocals )) -> JJEAAMM_buftop = (&JJEAAMM_buftop);
(( FLEAAMM_get_number * ) ( DLEAAMM_get_number.nonlocals )) -> HJEAAMM_buffer = HJEAAMM_buffer;
 /* line 716: */
 /* line 717: */
 /* line 718: */
A_CLOSURE( NLEAAMM_libroot, OLEAAMM_libroot, PLEAAMM_libroot );
(( PLEAAMM_libroot * ) ( NLEAAMM_libroot.nonlocals )) -> Msg = Msg;
 /* line 729: */
for ( ;; )
{ 
 /* line 730: */
for ( ;; )
{ 
SRBAOSI_read_line( ZIEAAMM_infile, HJEAAMM_buffer, (&JJEAAMM_buftop), Msg, &FMEAAMM );
MJEAAMM_rr = FMEAAMM;
 /* line 731: */
GMEAAMM = !PPBAOSI_(MJEAAMM_rr, GPBAOSI_io_eof);
if ( GMEAAMM )
{GMEAAMM = (JJEAAMM_buftop==0);
}
HMEAAMM = GMEAAMM;
if ( !HMEAAMM ) break;
/*SKIP*/;
}
 /* line 732: */
 /* line 733: */
 /* line 735: */
IMEAAMM = !PPBAOSI_(MJEAAMM_rr, GPBAOSI_io_eof);
if ( !IMEAAMM ) break;
 /* line 736: */
if ( A_CALLPROC(PJEAAMM_find_string,(KMEAAMM),(KMEAAMM,(PJEAAMM_find_string).nonlocals)) )
{ 
 /* line 737: */
NJEAAMM_change_strings = A68_FALSE;
} 
else
{ 
 /* line 739: */
if ( !NJEAAMM_change_strings )
{ 
/*SKIP*/;
} 
else
{ 
NMEAAMM = A_CALLPROC(PJEAAMM_find_string,(MMEAAMM),(MMEAAMM,(PJEAAMM_find_string).nonlocals));
if ( ! NMEAAMM )
{NMEAAMM = A_CALLPROC(PJEAAMM_find_string,(PMEAAMM),(PMEAAMM,(PJEAAMM_find_string).nonlocals));
}
 /* line 740: */
if ( NMEAAMM )
{ 
 /* line 741: */
 /* line 742: */
A_CALLPROC(Get_version_string,(RMEAAMM, &SMEAAMM),(RMEAAMM, &SMEAAMM,(Get_version_string).nonlocals));
SEDAAMM_remove_quotes( SMEAAMM, &TMEAAMM );
A_CALLPROC(YJEAAMM_insert_string,(TMEAAMM),(TMEAAMM,(YJEAAMM_insert_string).nonlocals));
} 
else
{ 
 /* line 743: */
if ( A_CALLPROC(PJEAAMM_find_string,(VMEAAMM),(VMEAAMM,(PJEAAMM_find_string).nonlocals)) )
{ 
A_CALLPROC(NLEAAMM_libroot,( &XMEAAMM),( &XMEAAMM,(NLEAAMM_libroot).nonlocals));
WMEAAMM.data[0] = A_UNITE(YMEAAMM,mode7,7,XMEAAMM);
 /* line 744: */
CNEAAMM = ANEAAMM ;
WMEAAMM.data[1] = A_UNITE(BNEAAMM,mode7,7,CNEAAMM);
QDDAOST_date_time( DZCAOST_seconds(), &DNEAAMM );
GNEAAMM = A_VTRIM(ENEAAMM,(DNEAAMM),A_VTSCRIPT(&(ENEAAMM.upb),(DNEAAMM).upb,1,20)) ;
WMEAAMM.data[2] = A_UNITE(FNEAAMM,mode7,7,GNEAAMM);
 /* line 745: */
UJBAOSL_oneline( A_HISVEC(HNEAAMM,WMEAAMM,3,A68_52 ), &INEAAMM );
A_CALLPROC(YJEAAMM_insert_string,(INEAAMM),(INEAAMM,(YJEAAMM_insert_string).nonlocals));
} 
else
{ 
 /* line 746: */
if ( A_CALLPROC(PJEAAMM_find_string,(KNEAAMM),(KNEAAMM,(PJEAAMM_find_string).nonlocals)) )
{ 
 /* line 747: */
QDDAOST_date_time( DZCAOST_seconds(), &LNEAAMM );
A_CALLPROC(YJEAAMM_insert_string,(A_VTRIM(MNEAAMM,(LNEAAMM),A_VTSCRIPT(&(MNEAAMM.upb),(LNEAAMM).upb,1,20))),(A_VTRIM(MNEAAMM,(LNEAAMM),A_VTSCRIPT(&(MNEAAMM.upb),(LNEAAMM).upb,1,20)),(YJEAAMM_insert_string).nonlocals));
} 
else
{ 
 /* line 748: */
if ( A_CALLPROC(PJEAAMM_find_string,(ONEAAMM),(ONEAAMM,(PJEAAMM_find_string).nonlocals)) )
{ 
 /* line 749: */
FCAAOSI_intchars( (A_CALLPROC(DLEAAMM_get_number,(),((DLEAAMM_get_number).nonlocals))+1), &PNEAAMM );
A_CALLPROC(YJEAAMM_insert_string,(PNEAAMM),(PNEAAMM,(YJEAAMM_insert_string).nonlocals));
} 
} 
} 
} 
} 
} 
 /* line 750: */
QNEAAMM = JJEAAMM_buftop+=1 ;
RNEAAMM = (&A_VINDEX(HJEAAMM_buffer,QNEAAMM)) ;
(*RNEAAMM) = VPBAOSI_newline_char;
 /* line 751: */
 /* line 752: */
JSBAOSI_write_buffer( AJEAAMM_outfile, A_VTRIM(SNEAAMM,(HJEAAMM_buffer),A_VTSCRIPT(&(SNEAAMM.upb),(HJEAAMM_buffer).upb,1,JJEAAMM_buftop)), Msg, &TNEAAMM );
TNEAAMM;
}
 /* line 753: */
XQBAOSI_close_file(ZIEAAMM_infile, Msg);
 /* line 754: */
XQBAOSI_close_file(AJEAAMM_outfile, Msg);
 /* line 755: */
 /* line 756: */
 /* line 757: */
WIEAAMM = A68_TRUE;
} 
else
{ 
EZAAAMM_not_found( VNEAAMM, (*(&(M->Name))), &WNEAAMM );
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(XNEAAMM,WNEAAMM,A68_VC )),(WHAAOSI_user, A_HVEC(XNEAAMM,WNEAAMM,A68_VC ),(Msg).nonlocals));
 /* line 758: */
 /* line 759: */
 /* line 760: */
WIEAAMM = A68_FALSE;
} 
} 
} 
A_PROC_EXIT(do_update_version);
return( WIEAAMM );
} 
#undef NL
 /* line 765: */
 /* line 767: */
 /* line 768: */

A68_270 * EOEAAMM_update_version(A68_270 * List, A68_BOOL  Dependent, A68_38  Get_version_string, A68_97  Msg)
{ 
A68_291  IOEAAMM_find_version;   /* proc value of non-global proc */
A68_270 * ROEAAMM;  /* clause result */
A_PROC_ENTRY(update_version);
 /* line 769: */
 /* line 771: */
{ 
A_CLOSURE( IOEAAMM_find_version, JOEAAMM_find_version, KOEAAMM_find_version );
(( KOEAAMM_find_version * ) ( IOEAAMM_find_version.nonlocals )) -> Get_version_string = Get_version_string;
(( KOEAAMM_find_version * ) ( IOEAAMM_find_version.nonlocals )) -> Msg = Msg;
(( KOEAAMM_find_version * ) ( IOEAAMM_find_version.nonlocals )) -> Dependent = Dependent;
(( KOEAAMM_find_version * ) ( IOEAAMM_find_version.nonlocals )) -> IOEAAMM_find_version = IOEAAMM_find_version;
 /* line 789: */
 /* line 790: */
ROEAAMM = SBBAAMM_scanmodules(List, IOEAAMM_find_version);
} 
A_PROC_EXIT(update_version);
return( ROEAAMM );
} 
#undef NL

A68_VOID  UOEAAMM_set_link_mark(A68_271 * M, A68_97  Msg)
{ 
A68_INT * DPEAAMM;  /* YIELD */
A68_302  EPEAAMM;  /* OPERATORS - mode -> union mode */
A68_BOOL  FPEAAMM;  /* YIELD */
A68_38  GPEAAMM;  /* procedure value */
A_PROC_ENTRY(set_link_mark);
 /* line 793: */
 /* line 794: */
{ 
 /* line 803: */
DPEAAMM = (&(M->Marker)) ;
(*DPEAAMM) = 4;
 /* line 804: */
 /* line 805: */
if ( !ZUAAAMM_attribute_marked(M, RPAAAMM_link_attribute) )
{ 
FPEAAMM = A68_TRUE ;
YTAAAMM_set_attribute(M, RPAAAMM_link_attribute, A_UNITE(EPEAAMM,mode2,2,FPEAAMM));
 /* line 806: */
 /* line 807: */
if ( GHAAAMM_flagon(MKAAAMM_auto_version) )
{ 
 /* line 808: */
 /* line 809: */
 /* line 810: */
GPEAAMM.fn.fn_global = XOEAAMM_version_string;
GPEAAMM.nonlocals = A68_NIL;
EOEAAMM_update_version((*(&(M->Uses))), YNEAAMM_in_dependencies, GPEAAMM, Msg);
} 
} 
} 
A_PROC_EXIT(set_link_mark);
return;
} 
#undef NL
 /* line 813: */
 /* line 814: */

A68_VOID  KPEAAMM_set_compile_mark(A68_271 * M, A68_VC  Mode_chars, A68_97  Msg)
{ 
A68_302  LPEAAMM;  /* OPERATORS - mode -> union mode */
A68_INT * MPEAAMM;  /* YIELD */
A68_BOOL  NPEAAMM;  /* optbool result */
A_PROC_ENTRY(set_compile_mark);
 /* line 815: */
 /* line 817: */
{ 
YTAAAMM_set_attribute(M, QPAAAMM_compile_attribute, A_UNITE(LPEAAMM,mode1,1,Mode_chars));
 /* line 818: */
MPEAAMM = (&(M->Marker)) ;
(*MPEAAMM) = 3;
 /* line 819: */
 /* line 820: */
NPEAAMM = !(*(&(M->Decs)));
if ( NPEAAMM )
{NPEAAMM = GHAAAMM_flagon(LKAAAMM_auto_link);
}
 /* line 821: */
if ( NPEAAMM )
{NPEAAMM = A_VC_NE(Mode_chars,SEAAAMM_tr_string);
}
 /* line 822: */
if ( NPEAAMM )
{ 
 /* line 823: */
 /* line 824: */
UOEAAMM_set_link_mark(M, Msg);
} 
} 
A_PROC_EXIT(set_compile_mark);
return;
} 
#undef NL
 /* line 827: */
 /* line 828: */

A68_BOOL  RPEAAMM_are_all_required(A68_VC  Prompt, A68_177  Param_values, A68_97  Msg)
{ 
A68_INT  SPEAAMM;  /* YIELD */
A68_BOOL  TPEAAMM;  /* optbool result */
A68_INT  UPEAAMM;  /* YIELD */
A68_INT  VPEAAMM;  /* YIELD */
A68_BOOL  WPEAAMM;  /* clause result */
A68_BOOL  XPEAAMM;  /* optbool result */
A68_320  YPEAAMM;  /* collateral clause result */
A68_52  ZPEAAMM;  /* OPERATORS - mode -> union mode */
A68_52  CQEAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  DQEAAMM;  /* YIELD */
A68_85  EQEAAMM;  /* OPERATORS - istruct -> vector */
A68_VC  FQEAAMM;  /* avoid structure result */
A68_46  IQEAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(are_all_required);
 /* line 829: */
 /* line 830: */
{ 
 /* line 831: */
SPEAAMM = 1 ;
TPEAAMM = ELFAOST_is_name((*(&A_VINDEX(Param_values,SPEAAMM))));
if ( ! TPEAAMM )
{UPEAAMM = 1 ;
TPEAAMM = MMFAOST_is_string((*(&A_VINDEX(Param_values,UPEAAMM))));
}
 /* line 832: */
if ( ! TPEAAMM )
{VPEAAMM = 1 ;
TPEAAMM = SNFAOST_is_filename((*(&A_VINDEX(Param_values,VPEAAMM))));
}
 /* line 833: */
if ( TPEAAMM )
{ 
 /* line 834: */
WPEAAMM = A68_FALSE;
} 
else
{ 
 /* line 835: */
XPEAAMM = (Prompt.upb<=0);
if ( ! XPEAAMM )
{YPEAAMM.data[0] = A_UNITE(ZPEAAMM,mode7,7,Prompt);
DQEAAMM = BQEAAMM ;
YPEAAMM.data[1] = A_UNITE(CQEAAMM,mode7,7,DQEAAMM);
 /* line 836: */
UJBAOSL_oneline( A_HISVEC(EQEAAMM,YPEAAMM,2,A68_52 ), &FQEAAMM );
XPEAAMM = JXAAAMM_query(FQEAAMM, DXAAAMM_default_yes, Msg);
}
 /* line 837: */
if ( XPEAAMM )
{ 
 /* line 838: */
 /* line 839: */
WPEAAMM = A68_TRUE;
} 
else
{ 
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(IQEAAMM,HQEAAMM,A68_VC )),(WHAAOSI_user, A_HVEC(IQEAAMM,HQEAAMM,A68_VC ),(Msg).nonlocals));
 /* line 840: */
 /* line 841: */
 /* line 842: */
WPEAAMM = A68_FALSE;
} 
} 
} 
A_PROC_EXIT(are_all_required);
return( WPEAAMM );
} 
#undef NL

A68_VOID  LQEAAMM_prepare_link(A68_177  Param_values, A68_97  Msg)
{ 
A68_270 * MQEAAMM_ml;
A68_BOOL  NQEAAMM_have_program;
A68_358  PQEAAMM_mark_for_link;   /* proc value of non-global proc */
A68_291  IREAAMM_locate_program;   /* proc value of non-global proc */
A68_INT  ASEAAMM;  /* YIELD */
A68_320  BSEAAMM;  /* collateral clause result */
A68_52  ESEAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  FSEAAMM;  /* YIELD */
A68_52  GSEAAMM;  /* OPERATORS - mode -> union mode */
A68_56  HSEAAMM;  /* procedure value */
A68_85  ISEAAMM;  /* OPERATORS - istruct -> vector */
A68_VC  JSEAAMM_name;
A68_176 * KSEAAMM_p;
A68_INT  LSEAAMM;  /* forall loop counter */
A68_VC  MSEAAMM;  /* avoid structure result */
A68_320  NSEAAMM;  /* collateral clause result */
A68_VC  OSEAAMM;  /* avoid structure result */
A68_52  PSEAAMM;  /* OPERATORS - mode -> union mode */
A68_52  QSEAAMM;  /* OPERATORS - mode -> union mode */
A68_56  RSEAAMM;  /* procedure value */
A68_85  SSEAAMM;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(prepare_link);
 /* line 845: */
 /* line 846: */
{ 
 /* line 847: */
NQEAAMM_have_program = A68_FALSE;
 /* line 849: */
A_CLOSURE( PQEAAMM_mark_for_link, QQEAAMM_mark_for_link, RQEAAMM_mark_for_link );
(( RQEAAMM_mark_for_link * ) ( PQEAAMM_mark_for_link.nonlocals )) -> Msg = Msg;
 /* line 859: */
A_CLOSURE( IREAAMM_locate_program, JREAAMM_locate_program, KREAAMM_locate_program );
(( KREAAMM_locate_program * ) ( IREAAMM_locate_program.nonlocals )) -> NQEAAMM_have_program = (&NQEAAMM_have_program);
(( KREAAMM_locate_program * ) ( IREAAMM_locate_program.nonlocals )) -> PQEAAMM_mark_for_link = PQEAAMM_mark_for_link;
 /* line 870: */
 /* line 871: */
ASEAAMM = 1 ;
if ( !ELFAOST_is_name((*(&A_VINDEX(Param_values,ASEAAMM)))) )
{ 
SBBAAMM_scanmodules(WIAAAMM_modules, IREAAMM_locate_program);
 /* line 872: */
 /* line 873: */
if ( !NQEAAMM_have_program )
{ 
FSEAAMM = DSEAAMM ;
BSEAAMM.data[0] = A_UNITE(ESEAAMM,mode7,7,FSEAAMM);
HSEAAMM.fn.fn_global = LRAAOSL_newline;
HSEAAMM.nonlocals = A68_NIL;
BSEAAMM.data[1] = A_UNITE(GSEAAMM,mode12,12,HSEAAMM);
 /* line 874: */
 /* line 875: */
 /* line 876: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(ISEAAMM,BSEAAMM,2,A68_52 ));
} 
} 
else
{ 
 /* line 878: */
 /* line 879: */
LSEAAMM = Param_values.upb -1;
KSEAAMM_p = Param_values.data;
for (;LSEAAMM-- >= 0;
(KSEAAMM_p++
) )
{
 /* line 880: */
JLFAOST_get_name( (*KSEAAMM_p), Msg, &MSEAAMM );
JSEAAMM_name = MSEAAMM;
 /* line 881: */
UWAAAMM_set_lowercase(JSEAAMM_name);
 /* line 882: */
MQEAAMM_ml = JCBAAMM_findmodule(WIAAAMM_modules, JSEAAMM_name);
 /* line 883: */
 /* line 884: */
if ( (MQEAAMM_ml==KBAAAMM_nilmodulelist) )
{ 
SZAAAMM_mnot_found( JSEAAMM_name, &OSEAAMM );
NSEAAMM.data[0] = A_UNITE(PSEAAMM,mode7,7,OSEAAMM);
RSEAAMM.fn.fn_global = LRAAOSL_newline;
RSEAAMM.nonlocals = A68_NIL;
NSEAAMM.data[1] = A_UNITE(QSEAAMM,mode12,12,RSEAAMM);
 /* line 885: */
 /* line 886: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(SSEAAMM,NSEAAMM,2,A68_52 ));
} 
else
{ 
 /* line 887: */
 /* line 888: */
A_CALLPROC(PQEAAMM_mark_for_link,((*(&(MQEAAMM_ml->Module)))),((*(&(MQEAAMM_ml->Module))),(PQEAAMM_mark_for_link).nonlocals));
} 
}
 /* line 889: */
 /* line 890: */
} 
} 
A_PROC_EXIT(prepare_link);
return;
} 
#undef NL
 /* line 893: */
 /* line 894: */
 /* line 895: */

A68_BOOL  XSEAAMM_can_compile(A68_271 * M, A68_272  S, A68_BOOL  Report, A68_97  Msg)
{ 
A68_VC  YSEAAMM_full_name;
A68_BOOL  ZSEAAMM_have_filename;
A68_VC  ATEAAMM;  /* avoid structure result */
A68_BOOL  BTEAAMM;  /* clause result */
A68_332  CTEAAMM;  /* collateral clause result */
A68_52  FTEAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  GTEAAMM;  /* YIELD */
A68_52  HTEAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  ITEAAMM;  /* YIELD */
A68_52  LTEAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  MTEAAMM;  /* YIELD */
A68_52  NTEAAMM;  /* OPERATORS - mode -> union mode */
A68_56  OTEAAMM;  /* procedure value */
A68_85  PTEAAMM;  /* OPERATORS - istruct -> vector */
A68_332  QTEAAMM;  /* collateral clause result */
A68_52  TTEAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  UTEAAMM;  /* YIELD */
A68_52  VTEAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  WTEAAMM;  /* YIELD */
A68_52  ZTEAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  AUEAAMM;  /* YIELD */
A68_52  BUEAAMM;  /* OPERATORS - mode -> union mode */
A68_56  CUEAAMM;  /* procedure value */
A68_85  DUEAAMM;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(can_compile);
 /* line 896: */
 /* line 897: */
{ 
 /* line 898: */
ZSEAAMM_have_filename = ((*(&(M->Filename))).upb>0);
 /* line 900: */
 /* line 901: */
if ( !ZSEAAMM_have_filename )
{ 
 /* line 902: */
ZSEAAMM_have_filename = AJDAAMM_check_module_file(M, PFDAAMM_all_directories, (&YSEAAMM_full_name), Msg);
} 
 /* line 904: */
 /* line 905: */
if ( ZSEAAMM_have_filename )
{ 
 /* line 906: */
KTAAAMM_attribute_value( M, TPAAAMM_star_attribute, &ATEAAMM );
if ( FABAAMM_check_star(S, ATEAAMM) )
{ 
 /* line 907: */
BTEAAMM = A68_TRUE;
} 
else
{ 
 /* line 908: */
if ( Report )
{ 
GTEAAMM = ETEAAMM ;
CTEAAMM.data[0] = A_UNITE(FTEAAMM,mode7,7,GTEAAMM);
 /* line 909: */
ITEAAMM = (*(&(M->Name))) ;
CTEAAMM.data[1] = A_UNITE(HTEAAMM,mode7,7,ITEAAMM);
MTEAAMM = KTEAAMM ;
CTEAAMM.data[2] = A_UNITE(LTEAAMM,mode7,7,MTEAAMM);
OTEAAMM.fn.fn_global = LRAAOSL_newline;
OTEAAMM.nonlocals = A68_NIL;
CTEAAMM.data[3] = A_UNITE(NTEAAMM,mode12,12,OTEAAMM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(PTEAAMM,CTEAAMM,4,A68_52 ));
 /* line 910: */
 /* line 911: */
 /* line 912: */
BTEAAMM = A68_FALSE;
} 
else
{ 
 /* line 913: */
 /* line 914: */
BTEAAMM = A68_FALSE;
} 
} 
} 
else
{ 
 /* line 915: */
if ( Report )
{ 
UTEAAMM = STEAAMM ;
QTEAAMM.data[0] = A_UNITE(TTEAAMM,mode7,7,UTEAAMM);
WTEAAMM = (*(&(M->Name))) ;
QTEAAMM.data[1] = A_UNITE(VTEAAMM,mode7,7,WTEAAMM);
 /* line 916: */
AUEAAMM = YTEAAMM ;
QTEAAMM.data[2] = A_UNITE(ZTEAAMM,mode7,7,AUEAAMM);
CUEAAMM.fn.fn_global = LRAAOSL_newline;
CUEAAMM.nonlocals = A68_NIL;
QTEAAMM.data[3] = A_UNITE(BUEAAMM,mode12,12,CUEAAMM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(DUEAAMM,QTEAAMM,4,A68_52 ));
 /* line 917: */
 /* line 918: */
 /* line 919: */
BTEAAMM = A68_FALSE;
} 
else
{ 
 /* line 920: */
 /* line 921: */
BTEAAMM = A68_FALSE;
} 
} 
} 
A_PROC_EXIT(can_compile);
return( BTEAAMM );
} 
#undef NL
 /* line 924: */
 /* line 925: */
 /* line 926: */

A68_VOID  IUEAAMM_prepare_compile(A68_VC  Prompt, A68_177  Param_values, A68_VC  Mode_chars, A68_97  Msg)
{ 
A68_BOOL  JUEAAMM_compile_all;
A68_291  MUEAAMM_mark_for_compile;   /* proc value of non-global proc */
A68_270 * QUEAAMM_ml;
A68_VC  RUEAAMM_name;
A68_176 * SUEAAMM_p;
A68_INT  TUEAAMM;  /* forall loop counter */
A68_VC  UUEAAMM;  /* avoid structure result */
A68_320  VUEAAMM;  /* collateral clause result */
A68_VC  WUEAAMM;  /* avoid structure result */
A68_52  XUEAAMM;  /* OPERATORS - mode -> union mode */
A68_52  YUEAAMM;  /* OPERATORS - mode -> union mode */
A68_56  ZUEAAMM;  /* procedure value */
A68_85  AVEAAMM;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(prepare_compile);
 /* line 927: */
 /* line 928: */
{ 
JUEAAMM_compile_all = RPEAAMM_are_all_required(Prompt, Param_values, Msg);
 /* line 930: */
A_CLOSURE( MUEAAMM_mark_for_compile, NUEAAMM_mark_for_compile, OUEAAMM_mark_for_compile );
(( OUEAAMM_mark_for_compile * ) ( MUEAAMM_mark_for_compile.nonlocals )) -> JUEAAMM_compile_all = JUEAAMM_compile_all;
(( OUEAAMM_mark_for_compile * ) ( MUEAAMM_mark_for_compile.nonlocals )) -> Msg = Msg;
(( OUEAAMM_mark_for_compile * ) ( MUEAAMM_mark_for_compile.nonlocals )) -> Mode_chars = Mode_chars;
 /* line 938: */
YBBAAMM_mark_modules(WIAAAMM_modules, 0);
 /* line 939: */
 /* line 940: */
if ( JUEAAMM_compile_all )
{ 
 /* line 941: */
 /* line 942: */
SBBAAMM_scanmodules(WIAAAMM_modules, MUEAAMM_mark_for_compile);
} 
else
{ 
 /* line 943: */
 /* line 945: */
 /* line 946: */
TUEAAMM = Param_values.upb -1;
SUEAAMM_p = Param_values.data;
for (;TUEAAMM-- >= 0;
(SUEAAMM_p++
) )
{
 /* line 947: */
JLFAOST_get_name( (*SUEAAMM_p), Msg, &UUEAAMM );
RUEAAMM_name = UUEAAMM;
 /* line 948: */
UWAAAMM_set_lowercase(RUEAAMM_name);
 /* line 949: */
QUEAAMM_ml = JCBAAMM_findmodule(WIAAAMM_modules, RUEAAMM_name);
 /* line 950: */
 /* line 951: */
if ( (QUEAAMM_ml!=KBAAAMM_nilmodulelist) )
{ 
 /* line 952: */
 /* line 953: */
A_CALLPROC(MUEAAMM_mark_for_compile,((*(&(QUEAAMM_ml->Module))), (*(&(QUEAAMM_ml->Star)))),((*(&(QUEAAMM_ml->Module))), (*(&(QUEAAMM_ml->Star))),(MUEAAMM_mark_for_compile).nonlocals));
} 
else
{ 
SZAAAMM_mnot_found( RUEAAMM_name, &WUEAAMM );
VUEAAMM.data[0] = A_UNITE(XUEAAMM,mode7,7,WUEAAMM);
ZUEAAMM.fn.fn_global = LRAAOSL_newline;
ZUEAAMM.nonlocals = A68_NIL;
VUEAAMM.data[1] = A_UNITE(YUEAAMM,mode12,12,ZUEAAMM);
 /* line 954: */
 /* line 955: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(AVEAAMM,VUEAAMM,2,A68_52 ));
} 
}
 /* line 956: */
} 
 /* line 957: */
 /* line 958: */
/*SKIP*/;
} 
A_PROC_EXIT(prepare_compile);
return;
} 
#undef NL
 /* line 961: */
 /* line 962: */
 /* line 963: */
 /* line 964: */

A68_VOID  GVEAAMM_remove_attribute(A68_VC  Prompt, A68_177  Param_values, A68_INT  Attribute_number, A68_300  Undo_action, A68_97  Msg)
{ 
A68_VC  JVEAAMM_name;
A68_176 * KVEAAMM_p;
A68_INT  LVEAAMM;  /* forall loop counter */
A68_VC  MVEAAMM;  /* avoid structure result */
A_PROC_ENTRY(remove_attribute);
 /* line 965: */
 /* line 966: */
{ 
 /* line 967: */
if ( RPEAAMM_are_all_required(Prompt, Param_values, Msg) )
{ 
 /* line 968: */
 /* line 969: */
MSDAAMM_undo_attribute(IVEAAMM, Attribute_number, Undo_action, A68_TRUE, A68_FALSE);
} 
else
{ 
 /* line 971: */
 /* line 972: */
LVEAAMM = Param_values.upb -1;
KVEAAMM_p = Param_values.data;
for (;LVEAAMM-- >= 0;
(KVEAAMM_p++
) )
{
 /* line 973: */
JLFAOST_get_name( (*KVEAAMM_p), Msg, &MVEAAMM );
JVEAAMM_name = MVEAAMM;
 /* line 974: */
UWAAAMM_set_lowercase(JVEAAMM_name);
 /* line 975: */
 /* line 976: */
 /* line 977: */
MSDAAMM_undo_attribute(JVEAAMM_name, Attribute_number, Undo_action, A68_FALSE, A68_FALSE);
}
 /* line 978: */
 /* line 979: */
} 
} 
A_PROC_EXIT(remove_attribute);
return;
} 
#undef NL
 /* line 982: */
 /* line 983: */
 /* line 984: */

A68_VOID  RVEAAMM_test_attribute(A68_INT  Attribute, A68_177  Param_values, A68_BOOL  Same_case, A68_97  Msg)
{ 
A68_INT  SVEAAMM;  /* YIELD */
A68_VC  TVEAAMM;  /* avoid structure result */
A68_VC  UVEAAMM_p1;
A68_VC  VVEAAMM;  /* clause result */
A68_VC  WVEAAMM;  /* avoid structure result */
A68_VC  XVEAAMM_value;
A68_VC  YVEAAMM_name;
A68_BOOL  BWEAAMM_setdefault;
A68_270 * CWEAAMM_ml;
A68_291  FWEAAMM_test_action;   /* proc value of non-global proc */
A68_327  KWEAAMM;  /* collateral clause result */
A68_52  NWEAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  OWEAAMM;  /* YIELD */
A68_52  RWEAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  SWEAAMM;  /* YIELD */
A68_52  VWEAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  WWEAAMM;  /* YIELD */
A68_52  ZWEAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  AXEAAMM;  /* YIELD */
A68_VC  BXEAAMM;  /* avoid structure result */
A68_52  CXEAAMM;  /* OPERATORS - mode -> union mode */
A68_52  FXEAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  GXEAAMM;  /* YIELD */
A68_52  HXEAAMM;  /* OPERATORS - mode -> union mode */
A68_52  IXEAAMM;  /* OPERATORS - mode -> union mode */
A68_56  JXEAAMM;  /* procedure value */
A68_85  KXEAAMM;  /* OPERATORS - istruct -> vector */
A68_176 * LXEAAMM_p;
A68_177  MXEAAMM;  /* OPERATORS - trim index */
A68_177  NXEAAMM;  /* forall yield */
A68_INT  OXEAAMM;  /* forall loop counter */
A68_VC  PXEAAMM;  /* avoid structure result */
A68_320  QXEAAMM;  /* collateral clause result */
A68_VC  RXEAAMM;  /* avoid structure result */
A68_52  SXEAAMM;  /* OPERATORS - mode -> union mode */
A68_52  TXEAAMM;  /* OPERATORS - mode -> union mode */
A68_56  UXEAAMM;  /* procedure value */
A68_85  VXEAAMM;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(test_attribute);
 /* line 985: */
 /* line 986: */
{ 
SVEAAMM = 1 ;
QMFAOST_get_string( (*(&A_VINDEX(Param_values,SVEAAMM))), Msg, &TVEAAMM );
UVEAAMM_p1 = TVEAAMM;
 /* line 987: */
if ( Same_case )
{ 
ZAAAOSI_makervc( UVEAAMM_p1, &WVEAAMM );
VVEAAMM = WVEAAMM;
} 
else
{ 
VVEAAMM = UVEAAMM_p1;
} 
XVEAAMM_value = VVEAAMM;
 /* line 988: */
 /* line 990: */
UWAAAMM_set_lowercase(UVEAAMM_p1);
 /* line 992: */
BWEAAMM_setdefault = LEDAAMM_try_name(UVEAAMM_p1, AWEAAMM);
 /* line 993: */
 /* line 995: */
A_CLOSURE( FWEAAMM_test_action, GWEAAMM_test_action, HWEAAMM_test_action );
(( HWEAAMM_test_action * ) ( FWEAAMM_test_action.nonlocals )) -> BWEAAMM_setdefault = BWEAAMM_setdefault;
(( HWEAAMM_test_action * ) ( FWEAAMM_test_action.nonlocals )) -> Attribute = Attribute;
(( HWEAAMM_test_action * ) ( FWEAAMM_test_action.nonlocals )) -> XVEAAMM_value = XVEAAMM_value;
 /* line 1003: */
OWEAAMM = MWEAAMM ;
KWEAAMM.data[0] = A_UNITE(NWEAAMM,mode7,7,OWEAAMM);
 /* line 1004: */
 /* line 1005: */
if ( SUAAAMM_permanent_attribute(LBAAAMM_nilmodule, Attribute) )
{ 
 /* line 1006: */
SWEAAMM = QWEAAMM ;
KWEAAMM.data[1] = A_UNITE(RWEAAMM,mode7,7,SWEAAMM);
} 
else
{ 
WWEAAMM = UWEAAMM ;
KWEAAMM.data[1] = A_UNITE(VWEAAMM,mode7,7,WWEAAMM);
} 
AXEAAMM = YWEAAMM ;
KWEAAMM.data[2] = A_UNITE(ZWEAAMM,mode7,7,AXEAAMM);
 /* line 1007: */
GTAAAMM_attribute_name( Attribute, &BXEAAMM );
KWEAAMM.data[3] = A_UNITE(CXEAAMM,mode7,7,BXEAAMM);
GXEAAMM = EXEAAMM ;
KWEAAMM.data[4] = A_UNITE(FXEAAMM,mode7,7,GXEAAMM);
KWEAAMM.data[5] = A_UNITE(HXEAAMM,mode7,7,XVEAAMM_value);
JXEAAMM.fn.fn_global = LRAAOSL_newline;
JXEAAMM.nonlocals = A68_NIL;
KWEAAMM.data[6] = A_UNITE(IXEAAMM,mode12,12,JXEAAMM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(KXEAAMM,KWEAAMM,7,A68_52 ));
 /* line 1009: */
 /* line 1010: */
NXEAAMM = A_VTRIM(MXEAAMM,(Param_values),A_VTSCRIPT(&(MXEAAMM.upb),(Param_values).upb,2,(Param_values).upb)) ;
OXEAAMM = NXEAAMM.upb -1;
LXEAAMM_p = NXEAAMM.data;
for (;OXEAAMM-- >= 0;
(LXEAAMM_p++
) )
{
 /* line 1011: */
JLFAOST_get_name( (*LXEAAMM_p), Msg, &PXEAAMM );
YVEAAMM_name = PXEAAMM;
 /* line 1012: */
UWAAAMM_set_lowercase(YVEAAMM_name);
 /* line 1013: */
CWEAAMM_ml = JCBAAMM_findmodule(WIAAAMM_modules, YVEAAMM_name);
 /* line 1014: */
 /* line 1015: */
if ( (CWEAAMM_ml==KBAAAMM_nilmodulelist) )
{ 
SZAAAMM_mnot_found( YVEAAMM_name, &RXEAAMM );
QXEAAMM.data[0] = A_UNITE(SXEAAMM,mode7,7,RXEAAMM);
UXEAAMM.fn.fn_global = LRAAOSL_newline;
UXEAAMM.nonlocals = A68_NIL;
QXEAAMM.data[1] = A_UNITE(TXEAAMM,mode12,12,UXEAAMM);
 /* line 1016: */
 /* line 1017: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(VXEAAMM,QXEAAMM,2,A68_52 ));
} 
else
{ 
 /* line 1018: */
 /* line 1019: */
A_CALLPROC(FWEAAMM_test_action,((*(&(CWEAAMM_ml->Module))), (*(&(CWEAAMM_ml->Star)))),((*(&(CWEAAMM_ml->Module))), (*(&(CWEAAMM_ml->Star))),(FWEAAMM_test_action).nonlocals));
} 
}
 /* line 1020: */
} 
A_PROC_EXIT(test_attribute);
return;
} 
#undef NL

A68_VOID  YXEAAMM_link_programs(A68_270 * List, A68_97  Msg)
{ 
A68_291  CYEAAMM_do_link_program;   /* proc value of non-global proc */
A68_291  JYEAAMM_link_all_programs;   /* proc value of non-global proc */
A_PROC_ENTRY(link_programs);
 /* line 1023: */
 /* line 1024: */
{ 
A_CLOSURE( CYEAAMM_do_link_program, DYEAAMM_do_link_program, EYEAAMM_do_link_program );
(( EYEAAMM_do_link_program * ) ( CYEAAMM_do_link_program.nonlocals )) -> CYEAAMM_do_link_program = CYEAAMM_do_link_program;
(( EYEAAMM_do_link_program * ) ( CYEAAMM_do_link_program.nonlocals )) -> Msg = Msg;
 /* line 1037: */
A_CLOSURE( JYEAAMM_link_all_programs, KYEAAMM_link_all_programs, LYEAAMM_link_all_programs );
(( LYEAAMM_link_all_programs * ) ( JYEAAMM_link_all_programs.nonlocals )) -> CYEAAMM_do_link_program = CYEAAMM_do_link_program;
 /* line 1043: */
if ( GHAAAMM_flagon(LKAAAMM_auto_link) )
{ 
 /* line 1044: */
SBBAAMM_scanmodules(List, JYEAAMM_link_all_programs);
} 
} 
A_PROC_EXIT(link_programs);
return;
} 
#undef NL

A68_BOOL  QYEAAMM_do_symbol_move(A68_177  Param_values, A68_BOOL  Sense, A68_97  Msg)
{ 
A68_INT  RYEAAMM;  /* YIELD */
A68_VC  SYEAAMM;  /* clause result */
A68_INT  TYEAAMM;  /* YIELD */
A68_VC  UYEAAMM;  /* avoid structure result */
A68_VC  VYEAAMM_name;
A68_332  WYEAAMM;  /* collateral clause result */
A68_52  ZYEAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  AZEAAMM;  /* YIELD */
A68_52  BZEAAMM;  /* OPERATORS - mode -> union mode */
A68_52  EZEAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  FZEAAMM;  /* YIELD */
A68_52  GZEAAMM;  /* OPERATORS - mode -> union mode */
A68_56  HZEAAMM;  /* procedure value */
A68_85  IZEAAMM;  /* OPERATORS - istruct -> vector */
A68_BOOL  JZEAAMM;  /* clause result */
A_PROC_ENTRY(do_symbol_move);
 /* line 1047: */
 /* line 1048: */
{ 
 /* line 1049: */
RYEAAMM = 1 ;
if ( ELFAOST_is_name((*(&A_VINDEX(Param_values,RYEAAMM)))) )
{ 
 /* line 1050: */
 /* line 1052: */
TYEAAMM = 1 ;
JLFAOST_get_name( (*(&A_VINDEX(Param_values,TYEAAMM))), Msg, &UYEAAMM );
SYEAAMM = UYEAAMM;
} 
else
{ 
SYEAAMM = BCAAAMM_blankname;
} 
VYEAAMM_name = SYEAAMM;
 /* line 1054: */
UWAAAMM_set_lowercase(VYEAAMM_name);
 /* line 1055: */
 /* line 1056: */
if ( !WLAAAMM_move_symbol_pointer(VYEAAMM_name, Sense) )
{ 
AZEAAMM = YYEAAMM ;
WYEAAMM.data[0] = A_UNITE(ZYEAAMM,mode7,7,AZEAAMM);
WYEAAMM.data[1] = A_UNITE(BZEAAMM,mode7,7,VYEAAMM_name);
FZEAAMM = DZEAAMM ;
WYEAAMM.data[2] = A_UNITE(EZEAAMM,mode7,7,FZEAAMM);
HZEAAMM.fn.fn_global = LRAAOSL_newline;
HZEAAMM.nonlocals = A68_NIL;
WYEAAMM.data[3] = A_UNITE(GZEAAMM,mode12,12,HZEAAMM);
 /* line 1057: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(IZEAAMM,WYEAAMM,4,A68_52 ));
} 
 /* line 1058: */
 /* line 1059: */
JZEAAMM = A68_TRUE;
} 
A_PROC_EXIT(do_symbol_move);
return( JZEAAMM );
} 
#undef NL

A68_BOOL  QZEAAMM_do_specchange(A68_177  Param_values, A68_INT  Mode, A68_97  Msg)
{ 
A68_BOOL  RZEAAMM_specchangemode;
A68_BOOL  SZEAAMM_pessmode;
A68_BOOL  TZEAAMM_rebuildmode;
A68_270 * UZEAAMM_ml;
A68_270 * VZEAAMM_requested;
A68_BOOL  WZEAAMM_errors;
A68_BOOL  XZEAAMM_first;
A68_BOOL  YZEAAMM_have_action_request;
A68_VC  ZZEAAMM_name;
A68_271 * AAFAAMM_program;
A68_272  BAFAAMM_pstar;
A68_291  EAFAAMM_find_action;   /* proc value of non-global proc */
A68_291  LAFAAMM_find_program;   /* proc value of non-global proc */
A68_291  UAFAAMM_mark_for_compile;   /* proc value of non-global proc */
A68_291  CBFAAMM_activate_compiles;   /* proc value of non-global proc */
A68_BOOL  YBFAAMM;  /* optbool result */
A68_INT  FCFAAMM;  /* YIELD */
A68_176 * GCFAAMM_p;
A68_INT  HCFAAMM;  /* forall loop counter */
A68_VC  ICFAAMM;  /* avoid structure result */
A68_320  JCFAAMM;  /* collateral clause result */
A68_VC  KCFAAMM;  /* avoid structure result */
A68_52  LCFAAMM;  /* OPERATORS - mode -> union mode */
A68_52  MCFAAMM;  /* OPERATORS - mode -> union mode */
A68_56  NCFAAMM;  /* procedure value */
A68_85  OCFAAMM;  /* OPERATORS - istruct -> vector */
A68_BOOL  PCFAAMM;  /* optbool result */
A68_320  QCFAAMM;  /* collateral clause result */
A68_52  TCFAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  UCFAAMM;  /* YIELD */
A68_52  VCFAAMM;  /* OPERATORS - mode -> union mode */
A68_85  WCFAAMM;  /* OPERATORS - istruct -> vector */
A68_VC  XCFAAMM;  /* avoid structure result */
A68_INT * YCFAAMM;  /* YIELD */
A68_46  BDFAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_320  CDFAAMM;  /* collateral clause result */
A68_52  FDFAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  GDFAAMM;  /* YIELD */
A68_52  HDFAAMM;  /* OPERATORS - mode -> union mode */
A68_56  IDFAAMM;  /* procedure value */
A68_85  JDFAAMM;  /* OPERATORS - istruct -> vector */
A68_BOOL  KDFAAMM;  /* optbool result */
A68_BOOL  NDFAAMM;  /* clause result */
A_PROC_ENTRY(do_specchange);
 /* line 1065: */
 /* line 1066: */
{ 
RZEAAMM_specchangemode = (Mode<=LZEAAMM_pessimistic);
 /* line 1067: */
SZEAAMM_pessmode = (Mode==LZEAAMM_pessimistic);
 /* line 1068: */
TZEAAMM_rebuildmode = (Mode==MZEAAMM_rebuild);
 /* line 1069: */
VZEAAMM_requested = KBAAAMM_nilmodulelist;
 /* line 1070: */
WZEAAMM_errors = A68_FALSE;
XZEAAMM_first = A68_TRUE;
YZEAAMM_have_action_request = A68_FALSE;
 /* line 1071: */
 /* line 1072: */
AAFAAMM_program = LBAAAMM_nilmodule;
 /* line 1073: */
BAFAAMM_pstar = NBAAAMM_blank_star;
 /* line 1075: */
A_CLOSURE( EAFAAMM_find_action, FAFAAMM_find_action, GAFAAMM_find_action );
(( GAFAAMM_find_action * ) ( EAFAAMM_find_action.nonlocals )) -> YZEAAMM_have_action_request = (&YZEAAMM_have_action_request);
 /* line 1082: */
A_CLOSURE( LAFAAMM_find_program, MAFAAMM_find_program, NAFAAMM_find_program );
(( NAFAAMM_find_program * ) ( LAFAAMM_find_program.nonlocals )) -> AAFAAMM_program = (&AAFAAMM_program);
(( NAFAAMM_find_program * ) ( LAFAAMM_find_program.nonlocals )) -> Msg = Msg;
(( NAFAAMM_find_program * ) ( LAFAAMM_find_program.nonlocals )) -> BAFAAMM_pstar = (&BAFAAMM_pstar);
 /* line 1096: */
A_CLOSURE( UAFAAMM_mark_for_compile, VAFAAMM_mark_for_compile, WAFAAMM_mark_for_compile );
(( WAFAAMM_mark_for_compile * ) ( UAFAAMM_mark_for_compile.nonlocals )) -> Msg = Msg;
(( WAFAAMM_mark_for_compile * ) ( UAFAAMM_mark_for_compile.nonlocals )) -> SZEAAMM_pessmode = SZEAAMM_pessmode;
(( WAFAAMM_mark_for_compile * ) ( UAFAAMM_mark_for_compile.nonlocals )) -> UAFAAMM_mark_for_compile = UAFAAMM_mark_for_compile;
(( WAFAAMM_mark_for_compile * ) ( UAFAAMM_mark_for_compile.nonlocals )) -> TZEAAMM_rebuildmode = TZEAAMM_rebuildmode;
 /* line 1113: */
A_CLOSURE( CBFAAMM_activate_compiles, DBFAAMM_activate_compiles, EBFAAMM_activate_compiles );
(( EBFAAMM_activate_compiles * ) ( CBFAAMM_activate_compiles.nonlocals )) -> RZEAAMM_specchangemode = RZEAAMM_specchangemode;
(( EBFAAMM_activate_compiles * ) ( CBFAAMM_activate_compiles.nonlocals )) -> XZEAAMM_first = (&XZEAAMM_first);
(( EBFAAMM_activate_compiles * ) ( CBFAAMM_activate_compiles.nonlocals )) -> Msg = Msg;
 /* line 1129: */
SBBAAMM_scanmodules(WIAAAMM_modules, EAFAAMM_find_action);
 /* line 1130: */
 /* line 1131: */
YBFAAMM = YZEAAMM_have_action_request;
if ( YBFAAMM )
{ /* line 1132: */
YBFAAMM = JXAAAMM_query(ACFAAMM, EXAAAMM_default_no, Msg);
}
 /* line 1133: */
if ( YBFAAMM )
{ 
IVDAAMM_undo_compile(CCFAAMM, A68_TRUE, A68_TRUE);
 /* line 1134: */
 /* line 1135: */
NVDAAMM_undo_link(ECFAAMM, A68_TRUE, A68_TRUE);
} 
 /* line 1136: */
KFBAAMM_set_levels((*(&(GKAAAMM_default_star_chars->Text))), Msg);
 /* line 1137: */
KEBAAMM_set_modulenumbers();
 /* line 1139: */
YBBAAMM_mark_modules(WIAAAMM_modules, 0);
 /* line 1140: */
 /* line 1141: */
FCFAAMM = 1 ;
if ( ELFAOST_is_name((*(&A_VINDEX(Param_values,FCFAAMM)))) )
{ 
 /* line 1142: */
HCFAAMM = Param_values.upb -1;
GCFAAMM_p = Param_values.data;
for (;HCFAAMM-- >= 0;
(GCFAAMM_p++
) )
{
 /* line 1143: */
JLFAOST_get_name( (*GCFAAMM_p), Msg, &ICFAAMM );
ZZEAAMM_name = ICFAAMM;
 /* line 1144: */
UWAAAMM_set_lowercase(ZZEAAMM_name);
 /* line 1145: */
UZEAAMM_ml = JCBAAMM_findmodule(WIAAAMM_modules, ZZEAAMM_name);
 /* line 1146: */
 /* line 1147: */
if ( (UZEAAMM_ml==KBAAAMM_nilmodulelist) )
{ 
WZEAAMM_errors = A68_TRUE;
 /* line 1148: */
SZAAAMM_mnot_found( ZZEAAMM_name, &KCFAAMM );
JCFAAMM.data[0] = A_UNITE(LCFAAMM,mode7,7,KCFAAMM);
NCFAAMM.fn.fn_global = LRAAOSL_newline;
NCFAAMM.nonlocals = A68_NIL;
JCFAAMM.data[1] = A_UNITE(MCFAAMM,mode12,12,NCFAAMM);
 /* line 1149: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(OCFAAMM,JCFAAMM,2,A68_52 ));
} 
else
{ 
 /* line 1150: */
if ( TZEAAMM_rebuildmode )
{ 
 /* line 1151: */
if ( !XSEAAMM_can_compile((*(&(UZEAAMM_ml->Module))), (*(&(UZEAAMM_ml->Star))), A68_TRUE, Msg) )
{ 
 /* line 1152: */
 /* line 1153: */
WZEAAMM_errors = A68_TRUE;
} 
else
{ 
 /* line 1154: */
 /* line 1155: */
 /* line 1156: */
A_CALLPROC(UAFAAMM_mark_for_compile,((*(&(UZEAAMM_ml->Module))), (*(&(UZEAAMM_ml->Star)))),((*(&(UZEAAMM_ml->Module))), (*(&(UZEAAMM_ml->Star))),(UAFAAMM_mark_for_compile).nonlocals));
} 
} 
else
{ 
 /* line 1157: */
PCFAAMM = XSEAAMM_can_compile((*(&(UZEAAMM_ml->Module))), (*(&(UZEAAMM_ml->Star))), A68_TRUE, Msg);
if ( PCFAAMM )
{UCFAAMM = SCFAAMM ;
QCFAAMM.data[0] = A_UNITE(TCFAAMM,mode7,7,UCFAAMM);
QCFAAMM.data[1] = A_UNITE(VCFAAMM,mode7,7,ZZEAAMM_name);
 /* line 1158: */
UJBAOSL_oneline( A_HISVEC(WCFAAMM,QCFAAMM,2,A68_52 ), &XCFAAMM );
PCFAAMM = JXAAAMM_query(XCFAAMM, DXAAAMM_default_yes, Msg);
}
 /* line 1159: */
if ( PCFAAMM )
{ 
 /* line 1161: */
YCFAAMM = (&((*(&(UZEAAMM_ml->Module)))->Marker)) ;
(*YCFAAMM) = 2;
} 
 /* line 1162: */
 /* line 1163: */
 /* line 1164: */
SBBAAMM_scanmodules((*(&((*(&(UZEAAMM_ml->Module)))->Usedby))), UAFAAMM_mark_for_compile);
} 
} 
}
 /* line 1165: */
} 
else
{ 
 /* line 1166: */
if ( TZEAAMM_rebuildmode )
{ 
SBBAAMM_scanmodules(WIAAAMM_modules, LAFAAMM_find_program);
 /* line 1167: */
 /* line 1168: */
if ( (AAFAAMM_program==LBAAAMM_nilmodule) )
{ 
 /* line 1169: */
A_CALLPROC(Msg,(WHAAOSI_user, A_HVEC(BDFAAMM,ADFAAMM,A68_VC )),(WHAAOSI_user, A_HVEC(BDFAAMM,ADFAAMM,A68_VC ),(Msg).nonlocals));
} 
else
{ 
 /* line 1170: */
if ( XSEAAMM_can_compile(AAFAAMM_program, BAFAAMM_pstar, A68_TRUE, Msg) )
{ 
 /* line 1171: */
 /* line 1172: */
A_CALLPROC(UAFAAMM_mark_for_compile,(AAFAAMM_program, BAFAAMM_pstar),(AAFAAMM_program, BAFAAMM_pstar,(UAFAAMM_mark_for_compile).nonlocals));
} 
else
{ 
 /* line 1173: */
 /* line 1174: */
 /* line 1175: */
WZEAAMM_errors = A68_TRUE;
} 
} 
} 
else
{ 
 /* line 1176: */
GDFAAMM = EDFAAMM ;
CDFAAMM.data[0] = A_UNITE(FDFAAMM,mode7,7,GDFAAMM);
IDFAAMM.fn.fn_global = LRAAOSL_newline;
IDFAAMM.nonlocals = A68_NIL;
CDFAAMM.data[1] = A_UNITE(HDFAAMM,mode12,12,IDFAAMM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(JDFAAMM,CDFAAMM,2,A68_52 ));
 /* line 1177: */
 /* line 1178: */
WZEAAMM_errors = A68_TRUE;
} 
} 
 /* line 1180: */
 /* line 1181: */
KDFAAMM = !WZEAAMM_errors;
if ( ! KDFAAMM )
{ /* line 1182: */
KDFAAMM = JXAAAMM_query(MDFAAMM, EXAAAMM_default_no, Msg);
}
 /* line 1183: */
if ( KDFAAMM )
{ 
SBBAAMM_scanmodules(WIAAAMM_modules, CBFAAMM_activate_compiles);
 /* line 1184: */
 /* line 1185: */
YXEAAMM_link_programs(WIAAAMM_modules, Msg);
} 
 /* line 1186: */
 /* line 1187: */
NDFAAMM = A68_TRUE;
} 
A_PROC_EXIT(do_specchange);
return( NDFAAMM );
} 
#undef NL
 /* line 1190: */
 /* line 1191: */

A68_VOID  RDFAAMM_do_module_action(A68_177  Param_values, A68_BOOL  Install, A68_97  Msg)
{ 
A68_378  WDFAAMM_analyse_module;   /* proc value of non-global proc */
A68_43  SEFAAMM_install_module;   /* proc value of non-global proc */
A68_BOOL  XEFAAMM_found;
A68_BOOL  YEFAAMM_put_heading;
A68_291  BFFAAMM_install_uses;   /* proc value of non-global proc */
A68_291  JFFAAMM_show_unset_modules;   /* proc value of non-global proc */
A68_VC  SGFAAMM_name;
A68_176 * TGFAAMM_p;
A68_INT  UGFAAMM;  /* forall loop counter */
A68_VC  VGFAAMM;  /* avoid structure result */
A68_BOOL  WGFAAMM;  /* clause result */
A_PROC_ENTRY(do_module_action);
 /* line 1192: */
 /* line 1194: */
{ 
A_CLOSURE( WDFAAMM_analyse_module, XDFAAMM_analyse_module, YDFAAMM_analyse_module );
(( YDFAAMM_analyse_module * ) ( WDFAAMM_analyse_module.nonlocals )) -> Msg = Msg;
 /* line 1218: */
A_CLOSURE( SEFAAMM_install_module, TEFAAMM_install_module, UEFAAMM_install_module );
(( UEFAAMM_install_module * ) ( SEFAAMM_install_module.nonlocals )) -> WDFAAMM_analyse_module = WDFAAMM_analyse_module;
 /* line 1227: */
XEFAAMM_found = A68_FALSE;
YEFAAMM_put_heading = A68_TRUE;
 /* line 1229: */
A_CLOSURE( BFFAAMM_install_uses, CFFAAMM_install_uses, DFFAAMM_install_uses );
(( DFFAAMM_install_uses * ) ( BFFAAMM_install_uses.nonlocals )) -> XEFAAMM_found = (&XEFAAMM_found);
(( DFFAAMM_install_uses * ) ( BFFAAMM_install_uses.nonlocals )) -> WDFAAMM_analyse_module = WDFAAMM_analyse_module;
 /* line 1241: */
A_CLOSURE( JFFAAMM_show_unset_modules, KFFAAMM_show_unset_modules, LFFAAMM_show_unset_modules );
(( LFFAAMM_show_unset_modules * ) ( JFFAAMM_show_unset_modules.nonlocals )) -> YEFAAMM_put_heading = (&YEFAAMM_put_heading);
 /* line 1258: */
 /* line 1260: */
YBBAAMM_mark_modules(WIAAAMM_modules, 0);
 /* line 1261: */
PTBAAMM_clear_usedby_lists(WIAAAMM_modules);
 /* line 1262: */
 /* line 1263: */
UGFAAMM = Param_values.upb -1;
TGFAAMM_p = Param_values.data;
for (;UGFAAMM-- >= 0;
(TGFAAMM_p++
) )
{
 /* line 1264: */
JLFAOST_get_name( (*TGFAAMM_p), Msg, &VGFAAMM );
SGFAAMM_name = VGFAAMM;
 /* line 1265: */
UWAAAMM_set_lowercase(SGFAAMM_name);
 /* line 1266: */
 /* line 1267: */
A_CALLPROC(SEFAAMM_install_module,(SGFAAMM_name),(SGFAAMM_name,(SEFAAMM_install_module).nonlocals));
}
 /* line 1268: */
 /* line 1269: */
if ( Install )
{ 
for ( ;; )
{ 
 /* line 1270: */
XEFAAMM_found = A68_FALSE;
 /* line 1271: */
SBBAAMM_scanmodules(WIAAAMM_modules, BFFAAMM_install_uses);
 /* line 1272: */
 /* line 1273: */
WGFAAMM = XEFAAMM_found;
if ( !WGFAAMM ) break;
/*SKIP*/;
}
 /* line 1274: */
 /* line 1275: */
SBBAAMM_scanmodules(WIAAAMM_modules, JFFAAMM_show_unset_modules);
} 
 /* line 1276: */
XSBAAMM_set_usedby_lists(WIAAAMM_modules);
 /* line 1277: */
KFBAAMM_set_levels((*(&(GKAAAMM_default_star_chars->Text))), Msg);
 /* line 1278: */
KEBAAMM_set_modulenumbers();
 /* line 1279: */
 /* line 1280: */
/*SKIP*/;
} 
A_PROC_EXIT(do_module_action);
return;
} 
#undef NL

A68_VOID  YGFAAMM_initialise_mm_utilities(A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  PHFAAMM;  /* clause result */
A68_VC  QHFAAMM;  /* avoid structure result */
A_PROC_ENTRY(initialise_mm_utilities);
 /* line 1283: */
 /* line 1284: */
{ 
PVDAAMM_modname_symbol = VMAAAMM_define_symbol(AHFAAMM, BCAAAMM_blankname, DJAAAMM_local_tag);
 /* line 1285: */
QVDAAMM_srcname_symbol = VMAAAMM_define_symbol(CHFAAMM, BCAAAMM_blankname, DJAAAMM_local_tag);
 /* line 1286: */
RVDAAMM_stars_symbol = VMAAAMM_define_symbol(EHFAAMM, BCAAAMM_blankname, DJAAAMM_local_tag);
 /* line 1287: */
SVDAAMM_heap_symbol = VMAAAMM_define_symbol(GHFAAMM, BCAAAMM_blankname, DJAAAMM_local_tag);
 /* line 1288: */
TVDAAMM_optimise_symbol = VMAAAMM_define_symbol(IHFAAMM, BCAAAMM_blankname, DJAAAMM_local_tag);
 /* line 1289: */
UVDAAMM_prog_symbol = VMAAAMM_define_symbol(KHFAAMM, BCAAAMM_blankname, DJAAAMM_local_tag);
 /* line 1290: */
VVDAAMM_debug_symbol = VMAAAMM_define_symbol(MHFAAMM, BCAAAMM_blankname, DJAAAMM_local_tag);
 /* line 1291: */
WVDAAMM_exename_symbol = VMAAAMM_define_symbol(OHFAAMM, BCAAAMM_blankname, DJAAAMM_local_tag);
 /* line 1292: */
 /* line 1293: */
IDDAAMM_initialise_mm_oscommands( Msg, &QHFAAMM );
PHFAAMM = QHFAAMM;
} 
A_PROC_EXIT(initialise_mm_utilities);
*ReturnedValue = (PHFAAMM);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 4: */
 /* line 5: */
 /* line 7: */
void EEDAAMM(void)   /* initialise DECS mm_utilities */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","./mfiles","-staredit","259U","./a68files/mm_utilities.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/mm_oscommands.m","./mfiles/mm_basics.m","/u/model/ella/ostools/assoc/mfiles/commandcaller.m","/u/model/ella/ostools/assoc/mfiles/ioprocs.m","/u/model/ella/ostools/assoc/mfiles/kernelreader.m","/u/model/ella/ostools/assoc/mfiles/command.m","/u/model/ella/ostools/assoc/mfiles/commandreader.m","/u/model/ella/ostools/assoc/mfiles/commandsyntax.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_VC  BIDAAMM;  /* avoid structure result */
A68_VC  EIDAAMM;  /* OPERATORS - assign op */
A68_VC  KIDAAMM;  /* avoid structure result */
A68_VC  NIDAAMM;  /* OPERATORS - assign op */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
AWCAAMM();   /* USE mm_oscommands */
SAAAAMM();   /* USE mm_basics */
AYGAOST();   /* USE commandcaller */
TIGAOST();   /* USE ioprocs */
TXEAOST();   /* USE kernelreader */
FMDAOST();   /* USE command */
YIBAOST();   /* USE commandreader */
LRAAOST();   /* USE commandsyntax */
JFAAOSI();   /* USE messageproc */
JSCAOST();   /* USE basics */
PCAAOST();   /* USE osinterface */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/mm/assoc/./a68files/mm_utilities.a68";
A_config.translation_time = "Tue Apr  4 09:54:55 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "DEDAAMM (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 09:54:55 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS mm_utilities);
UEAALIB_a68config(LGAALIB_configinfo, IEDAAMM);
 /* line 49: */
 /* line 56: */
 /* line 80: */
 /* line 81: */
 /* line 83: */
 /* line 159: */
XHDAAMM_generator( A68_TRUE, &BIDAAMM );
AIDAAMM_no_src_file = BIDAAMM;
EIDAAMM = DIDAAMM ;
A_VASSIGN2(EIDAAMM,AIDAAMM_no_src_file,A68_CHAR );
 /* line 160: */
GIDAAMM_generator( A68_TRUE, &KIDAAMM );
JIDAAMM_file_not_found = KIDAAMM;
NIDAAMM = MIDAAMM ;
A_VASSIGN2(NIDAAMM,JIDAAMM_file_not_found,A68_CHAR );
 /* line 162: */
 /* line 175: */
 /* line 195: */
 /* line 217: */
 /* line 252: */
 /* line 275: */
 /* line 300: */
 /* line 321: */
 /* line 331: */
 /* line 359: */
 /* line 375: */
 /* line 410: */
 /* line 415: */
 /* line 420: */
PVDAAMM_modname_symbol = (A68_275 *)A68_NIL;
 /* line 421: */
QVDAAMM_srcname_symbol = (A68_275 *)A68_NIL;
 /* line 422: */
RVDAAMM_stars_symbol = (A68_275 *)A68_NIL;
 /* line 423: */
SVDAAMM_heap_symbol = (A68_275 *)A68_NIL;
 /* line 424: */
TVDAAMM_optimise_symbol = (A68_275 *)A68_NIL;
 /* line 425: */
UVDAAMM_prog_symbol = (A68_275 *)A68_NIL;
 /* line 426: */
VVDAAMM_debug_symbol = (A68_275 *)A68_NIL;
 /* line 427: */
WVDAAMM_exename_symbol = (A68_275 *)A68_NIL;
 /* line 428: */
XVDAAMM_trcomp_tag = (A68_BITS )(FJAAAMM_translate_tag|GJAAAMM_compile_tag);
 /* line 430: */
 /* line 640: */
 /* line 762: */
 /* line 763: */
 /* line 764: */
 /* line 792: */
 /* line 812: */
 /* line 826: */
 /* line 844: */
 /* line 892: */
 /* line 923: */
 /* line 960: */
 /* line 981: */
 /* line 1022: */
 /* line 1046: */
 /* line 1061: */
 /* line 1062: */
 /* line 1063: */
 /* line 1064: */
 /* line 1189: */
 /* line 1282: */
 /* line 1295: */
 /* line 1296: */
 /* line 1307: */
/*SKIP*/;
A_PROC_EXIT(DECS mm_utilities);
} 
#undef NL
/* end of translation of ./a68files/mm_utilities.a68 */
