
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
/* UNAME:SIGAOST */
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
A68_BITS  Options;
A_PAD_BITS(PAD_34)
};
typedef struct A68t144  A68_144 ;    /* STRUCT(BITS)  */
struct A68t146 ;

A_PROCEDURE(A68_VOID ,A68t145,(struct A68t146 ),(struct A68t146 ,void *));
typedef struct A68t145  A68_145 ;    /* PROC(MODE146) VOID */
struct A68t146 { A68_INT mode; union {
A68_BOOL  mode1;
struct A68t144  mode2;
A68_VC  mode3;
} data; };
typedef struct A68t146  A68_146 ;    /* UNION(BOOL,MODE144,MODE26)  */

A_PROCEDURE(A68_INT ,A68t147,(A68_INT ),(A68_INT ,void *));
typedef struct A68t147  A68_147 ;    /* PROC(INT) INT */
struct A68t148{
A68_VC  Context;
A68_VC  Import;
};
typedef struct A68t148  A68_148 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t150 ;

A_PROCEDURE(A68_VOID ,A68t149,(struct A68t150 ),(struct A68t150 ,void *));
typedef struct A68t149  A68_149 ;    /* PROC(MODE150) VOID */
struct A68t150 { A68_INT mode; union {
A68_VC  mode1;
struct A68t32  mode2;
struct A68t54  mode3;
struct A68t53  mode4;
} data; };
typedef struct A68t150  A68_150 ;    /* UNION(REF MODE26,REF MODE32,REF MODE54,REF MODE53)  */

A_PROCEDURE(A68_INT ,A68t151,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t151  A68_151 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_BITS ,A68t152,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t152  A68_152 ;    /* PROC(BITS,BITS) BITS */
struct A68t154 ;

A_PROCEDURE(A68_VOID ,A68t153,(struct A68t154 ,A68_INT ),(struct A68t154 ,A68_INT ,void *));
typedef struct A68t153  A68_153 ;    /* PROC(MODE154,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t154,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t154  A68_154 ;    /* PROC(CHAR) VOID */
struct A68t156 ;

A_PROCEDURE(A68_INT ,A68t155,(struct A68t156 ),(struct A68t156 ,void *));
typedef struct A68t155  A68_155 ;    /* PROC(MODE156) INT */

A_PROCEDURE(A68_CHAR ,A68t156,(void),(void *));
typedef struct A68t156  A68_156 ;    /* PROC CHAR */

A_PROCEDURE(A68_INT ,A68t157,(A68_VC ,A68_BOOL *),(A68_VC ,A68_BOOL *,void *));
typedef struct A68t157  A68_157 ;    /* PROC(MODE26,REF BOOL) INT */

A_PROCEDURE(A68_VOID ,A68t158,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t158  A68_158 ;    /* PROC(INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t159,(A68_VC *),(A68_VC *,void *));
typedef struct A68t159  A68_159 ;    /* PROC REF MODE26 */

A_PROCEDURE(A68_INT ,A68t160,(A68_INT ,A68_INT ,A68_BOOL *),(A68_INT ,A68_INT ,A68_BOOL *,void *));
typedef struct A68t160  A68_160 ;    /* PROC(INT,INT,REF BOOL) INT */

A_PROCEDURE(A68_BOOL ,A68t161,(A68_VC ,A68_INT *,struct A68t97 ),(A68_VC ,A68_INT *,struct A68t97 ,void *));
typedef struct A68t161  A68_161 ;    /* PROC(MODE26,REF INT,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t162,(A68_BOOL ,struct A68t46 *),(A68_BOOL ,struct A68t46 *,void *));
typedef struct A68t162  A68_162 ;    /* PROC(BOOL) MODE46 */
A_VECTOR(struct A68t165 ,A68t164);
typedef struct A68t164  A68_164 ;    /* VECTOR [] MODE165 */
struct A68t165{
A68_INT  Number;
A_PAD_INT(PAD_35)
A68_BITS  Class;
A_PAD_BITS(PAD_36)
A68_VC  Text;
};
typedef struct A68t165  A68_165 ;    /* STRUCT(INT,BITS,MODE26)  */
struct A68t163{
A68_VC  Name;
struct A68t100  Messages;
A68_BOOL * Initialised;
struct A68t164  Setup;
};
typedef struct A68t163  A68_163 ;    /* STRUCT(MODE26,REF MODE100,REF BOOL,MODE164)  */

A_PROCEDURE(A68_VOID ,A68t166,(A68_BOOL ,struct A68t163 *),(A68_BOOL ,struct A68t163 *,void *));
typedef struct A68t166  A68_166 ;    /* PROC(BOOL) MODE163 */
A_VECTOR(A68_VC ,A68t167);
typedef struct A68t167  A68_167 ;    /* VECTOR [] REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t168,(struct A68t46 ,struct A68t167 *),(struct A68t46 ,struct A68t167 *,void *));
typedef struct A68t168  A68_168 ;    /* PROC(MODE46) MODE167 */

A_PROCEDURE(A68_VOID ,A68t169,(struct A68t167 ,struct A68t46 *),(struct A68t167 ,struct A68t46 *,void *));
typedef struct A68t169  A68_169 ;    /* PROC(MODE167) MODE46 */
struct A68t171 ;

A_PROCEDURE(A68_BOOL ,A68t170,(struct A68t171 ),(struct A68t171 ,void *));
typedef struct A68t170  A68_170 ;    /* PROC(MODE171) BOOL */
struct A68t171 { A68_INT mode; union {
struct A68t98  mode1;
struct A68t101  mode2;
} data; };
typedef struct A68t171  A68_171 ;    /* UNION(MODE98,MODE101)  */

A_PROCEDURE(A68_INT ,A68t172,(struct A68t98 ),(struct A68t98 ,void *));
typedef struct A68t172  A68_172 ;    /* PROC(MODE98) INT */

A_PROCEDURE(A68_VOID ,A68t173,(A68_INT ,struct A68t163 ,struct A68t98 *),(A68_INT ,struct A68t163 ,struct A68t98 *,void *));
typedef struct A68t173  A68_173 ;    /* PROC(INT,MODE163) MODE98 */

A_PROCEDURE(A68_BOOL ,A68t174,(struct A68t98 ,struct A68t163 ),(struct A68t98 ,struct A68t163 ,void *));
typedef struct A68t174  A68_174 ;    /* PROC(MODE98,MODE163) BOOL */

A_PROCEDURE(A68_VOID ,A68t175,(struct A68t98 ,struct A68t46 ,struct A68t101 *),(struct A68t98 ,struct A68t46 ,struct A68t101 *,void *));
typedef struct A68t175  A68_175 ;    /* PROC(MODE98,MODE46) MODE101 */

A_PROCEDURE(A68_VOID ,A68t176,(A68_INT ,struct A68t98 *),(A68_INT ,struct A68t98 *,void *));
typedef struct A68t176  A68_176 ;    /* PROC(INT) MODE98 */

A_PROCEDURE(A68_BOOL ,A68t177,(struct A68t98 ),(struct A68t98 ,void *));
typedef struct A68t177  A68_177 ;    /* PROC(MODE98) BOOL */

A_PROCEDURE(A68_BOOL ,A68t178,(A68_CHAR ,A68_VC ),(A68_CHAR ,A68_VC ,void *));
typedef struct A68t178  A68_178 ;    /* PROC(CHAR,MODE26) BOOL */

A_PROCEDURE(A68_BOOL ,A68t179,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t179  A68_179 ;    /* PROC(CHAR) BOOL */

A_PROCEDURE(A68_CHAR ,A68t180,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t180  A68_180 ;    /* PROC(CHAR) CHAR */

A_PROCEDURE(A68_INT ,A68t182,(A68_VC *,struct A68t97 ),(A68_VC *,struct A68t97 ,void *));
typedef struct A68t182  A68_182 ;    /* PROC(REF REF MODE26,MODE97) INT */
struct A68t181{
A68_VC  Rdbuffer;
struct A68t182  Rdline;
A68_INT  Rdcharend;
A_PAD_INT(PAD_37)
A68_INT  Rdcharno;
A_PAD_INT(PAD_38)
A68_INT  Start_of_word;
A_PAD_INT(PAD_39)
struct A68t183 * Stack;
};
typedef struct A68t181  A68_181 ;    /* STRUCT(REF MODE26,MODE182,INT,INT,INT,REF MODE183)  */
struct A68t183{
A68_VC  Line;
struct A68t183 * Rest;
};
typedef struct A68t183  A68_183 ;    /* STRUCT(REF MODE26,REF MODE183)  */

A_PROCEDURE(struct A68t181 *,A68t184,(A68_VC ,struct A68t182 ),(A68_VC ,struct A68t182 ,void *));
typedef struct A68t184  A68_184 ;    /* PROC(REF MODE26,MODE182) REF MODE181 */

A_PROCEDURE(A68_VOID ,A68t185,(struct A68t181 ),(struct A68t181 ,void *));
typedef struct A68t185  A68_185 ;    /* PROC(MODE181) VOID */

A_PROCEDURE(A68_VOID ,A68t186,(struct A68t167 *),(struct A68t167 *,void *));
typedef struct A68t186  A68_186 ;    /* PROC REF MODE167 */

A_PROCEDURE(A68_BOOL ,A68t187,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t187  A68_187 ;    /* PROC(MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t188,(struct A68t97 ,A68_VC *),(struct A68t97 ,A68_VC *,void *));
typedef struct A68t188  A68_188 ;    /* PROC(MODE97) REF MODE26 */
struct A68t190 ;
struct A68t191 ;
struct A68t192 ;

A_PROCEDURE(A68_VOID ,A68t189,(struct A68t191 ,struct A68t192 ,struct A68t97 ,struct A68t190 *),(struct A68t191 ,struct A68t192 ,struct A68t97 ,struct A68t190 *,void *));
typedef struct A68t189  A68_189 ;    /* PROC(REF MODE191,MODE192,MODE97) MODE190 */
A_VECTOR(struct A68t190 ,A68t199);
typedef struct A68t199  A68_199 ;    /* VECTOR [] MODE190 */
struct A68t197{
A68_INT  Choice;
A_PAD_INT(PAD_40)
struct A68t199  Params;
};
typedef struct A68t197  A68_197 ;    /* STRUCT(INT,REF MODE199)  */
struct A68t198{
A68_INT  Sort;
A_PAD_INT(PAD_41)
A68_VC  Value;
};
typedef struct A68t198  A68_198 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t190 { A68_INT mode; union {
struct A68t197  mode1;
struct A68t198  mode2;
} data; };
typedef struct A68t190  A68_190 ;    /* UNION(MODE197,MODE198)  */
A_VECTOR(struct A68t195 ,A68t191);
typedef struct A68t191  A68_191 ;    /* VECTOR [] MODE195 */
A_VECTOR(struct A68t192 ,A68t194);
typedef struct A68t194  A68_194 ;    /* VECTOR [] MODE192 */
struct A68t193{
A68_BITS  Type;
A_PAD_BITS(PAD_42)
struct A68t194  Elements;
};
typedef struct A68t193  A68_193 ;    /* STRUCT(BITS,REF MODE194)  */
struct A68t192 { A68_INT mode; union {
A68_INT * mode1;
struct A68t193  mode2;
} data; };
typedef struct A68t192  A68_192 ;    /* UNION(REF INT,MODE193)  */
struct A68t196 { A68_INT mode; union {
struct A68t188  mode1;
A68_INT * mode2;
struct A68t193  mode3;
} data; };
typedef struct A68t196  A68_196 ;    /* UNION(MODE188,REF INT,MODE193)  */
struct A68t195{
A68_INT * Sort;
struct A68t196  Reader;
A68_VC  Description;
A68_VC  Help;
};
typedef struct A68t195  A68_195 ;    /* STRUCT(REF INT,MODE196,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_CHAR ,A68t200,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t200  A68_200 ;    /* PROC(MODE97) CHAR */

A_PROCEDURE(A68_VOID ,A68t201,(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t201  A68_201 ;    /* PROC(REF MODE26,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t202,(struct A68t198 ,A68_INT ,struct A68t97 ),(struct A68t198 ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t202  A68_202 ;    /* PROC(MODE198,INT,MODE97) VOID */
struct A68t203{
A68_BOOL  Get_first;
A_PAD_BOOL(PAD_43)
A68_BOOL  Check;
A_PAD_BOOL(PAD_44)
};
typedef struct A68t203  A68_203 ;    /* STRUCT(BOOL,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t204,(struct A68t203 ,A68_VC ,struct A68t97 ,A68_VC *),(struct A68t203 ,A68_VC ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t204  A68_204 ;    /* PROC(MODE203,MODE26,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t205,(A68_CHAR ,struct A68t97 ,A68_VC *),(A68_CHAR ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t205  A68_205 ;    /* PROC(CHAR,MODE97) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t206,(struct A68t198 ),(struct A68t198 ,void *));
typedef struct A68t206  A68_206 ;    /* PROC(MODE198) BOOL */

A_PROCEDURE(A68_VOID ,A68t207,(struct A68t198 ,struct A68t97 ,A68_VC *),(struct A68t198 ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t207  A68_207 ;    /* PROC(MODE198,MODE97) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t208,(struct A68t129 ),(struct A68t129 ,void *));
typedef struct A68t208  A68_208 ;    /* PROC(MODE129) VOID */

A_PROCEDURE(A68_VOID ,A68t209,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t209  A68_209 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,54,A68t210);
typedef struct A68t210  A68_210 ;    /* STRUCT 54 CHAR */
struct A68t211{
struct A68t92 * File;
A68_BOOL  Suspended;
A_PAD_BOOL(PAD_45)
A68_INT  Number;
A_PAD_INT(PAD_46)
A68_VC  Name;
struct A68t181 * Reader;
struct A68t211 * Previous;
};
typedef struct A68t211  A68_211 ;    /* STRUCT(REF MODE92,BOOL,INT,REF MODE26,REF MODE181,REF MODE211)  */
struct A68t212{
A68_BOOL  Logging;
A_PAD_BOOL(PAD_47)
A68_BOOL  Outputing;
A_PAD_BOOL(PAD_48)
A68_BOOL  Seeing_in;
A_PAD_BOOL(PAD_49)
A68_BOOL  Seeing_out;
A_PAD_BOOL(PAD_50)
A68_BOOL  Paging;
A_PAD_BOOL(PAD_51)
A68_BOOL  Clock;
A_PAD_BOOL(PAD_52)
A68_BOOL  Screen_output;
A_PAD_BOOL(PAD_53)
A68_INT  Width;
A_PAD_INT(PAD_54)
A68_INT  Page_count;
A_PAD_INT(PAD_55)
A68_INT  Page_length;
A_PAD_INT(PAD_56)
A68_INT  Eof_count;
A_PAD_INT(PAD_57)
struct A68t181 * Standard_reader;
struct A68t211 * Infile;
struct A68t159  Prompt;
struct A68t92 * Logfile;
struct A68t92 * Outfile;
};
typedef struct A68t212  A68_212 ;    /* STRUCT(BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,INT,INT,INT,INT,REF MODE181,REF MODE211,MODE159,REF MODE92,REF MODE92)  */
A_ISTRUCT(A68_CHAR ,5,A68t213);
typedef struct A68t213  A68_213 ;    /* STRUCT 5 CHAR */

A_PROCEDURE(struct A68t212 *,A68t214,(void),(void *));
typedef struct A68t214  A68_214 ;    /* PROC REF MODE212 */
A_ISTRUCT(A68_VC ,2,A68t215);
typedef struct A68t215  A68_215 ;    /* STRUCT 2 MODE26 */
A_ISTRUCT(A68_CHAR ,30,A68t216);
typedef struct A68t216  A68_216 ;    /* STRUCT 30 CHAR */
A_ISTRUCT(A68_CHAR ,13,A68t217);
typedef struct A68t217  A68_217 ;    /* STRUCT 13 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t218);
typedef struct A68t218  A68_218 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(A68_CHAR ,25,A68t219);
typedef struct A68t219  A68_219 ;    /* STRUCT 25 CHAR */
A_ISTRUCT(struct A68t52 ,4,A68t220);
typedef struct A68t220  A68_220 ;    /* STRUCT 4 MODE52 */
A_ISTRUCT(struct A68t52 ,3,A68t221);
typedef struct A68t221  A68_221 ;    /* STRUCT 3 MODE52 */
A_ISTRUCT(struct A68t52 ,8,A68t222);
typedef struct A68t222  A68_222 ;    /* STRUCT 8 MODE52 */

A_PROCEDURE(A68_VOID ,A68t223,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t223  A68_223 ;    /* PROC(REF MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t224,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t224  A68_224 ;    /* PROC(MODE26,MODE97) VOID */
A_ISTRUCT(A68_VC ,3,A68t225);
typedef struct A68t225  A68_225 ;    /* STRUCT 3 MODE26 */

A_PROCEDURE(A68_VOID ,A68t226,(A68_INT ,struct A68t97 ),(A68_INT ,struct A68t97 ,void *));
typedef struct A68t226  A68_226 ;    /* PROC(INT,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t227,(struct A68t159 ),(struct A68t159 ,void *));
typedef struct A68t227  A68_227 ;    /* PROC(MODE159) VOID */
A_ISTRUCT(A68_CHAR ,7,A68t228);
typedef struct A68t228  A68_228 ;    /* STRUCT 7 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from commandreader --- */
extern A68_VC  OJBAOST_arrow_str;
extern A68_181 * BLBAOST_set_reader(A68_VC ,struct A68t182 );
extern A68_VOID  GLBAOST_reset_reader(struct A68t181 );
/* --- End of imports from commandreader --- */


/* --- Imports from iomessages --- */
extern A68_VOID  FFBAOST_io_msg(A68_INT ,A68_98 *);
/* --- End of imports from iomessages --- */


/* --- Imports from messageproc --- */
extern A68_VOID  ZAAAOSI_makervc(A68_VC ,A68_VC *);
extern A68_98  WHAAOSI_user;
extern A68_46  VJAAOSI_nullmsg;
/* --- End of imports from messageproc --- */


/* --- Imports from basics --- */
extern A68_INT  DZCAOST_seconds(void);
extern A68_VOID  QDDAOST_date_time(A68_INT ,A68_VC *);
extern A68_VOID  GEDAOST_time_str(A68_VC *);
/* --- End of imports from basics --- */


/* --- Imports from testmode --- */
extern A68_BOOL  GIBAOST_continue_on_error(void);
extern A68_VOID  SIBAOST_testmode_file_name(struct A68t92 *,A68_VC *);
/* --- End of imports from testmode --- */


/* --- Imports from osinterface --- */
extern A68_BOOL  PPBAOSI_(struct A68t35 ,struct A68t35 );
extern A68_35  GPBAOSI_io_eof;
extern A68_35  JPBAOSI_io_error;
extern A68_35  GDAAOST_io_partline;
extern A68_92 * HNBAOSI_nil_file;
extern A68_92 * INBAOSI_stdin;
extern A68_92 * KNBAOSI_stderr;
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
extern int A_argc;
extern char **A_argv;
#define A_prelude(argc,argv) A_argc=argc; A_argv = argv

#define VPCAOSI_prelude A_prelude
extern A68_BOOL  FIAAOST_interactive(void);
#include "Alibrary.h"

#define PBCAOSI_garbage_collect Agc_collect
#include <math.h>

#define GQAAOST_sqrt sqrt
extern A68_VOID  UEAAOST_facility(A68_VC *);
extern A68_97  ZLBAOSI_global_msg;
extern A68_97  XLBAOSI_ignore_msg;
extern A68_34 * KEAAOST_screen;
extern A68_34 * LEAAOST_out;
extern A68_34 * MEAAOST_err;
extern A68_VOID  KDAAOST_write_stdout(A68_VC );
extern A68_VOID  IIAAOST_prompt(A68_VC ,A68_VC *);
/* --- End of imports from osinterface --- */


/* --- Imports from putstrings --- */
extern A68_VOID  NVAAOSL_(A68_CHAR ,A68_INT ,A68_VC *);
extern A68_VOID  FCAAOSI_intchars(A68_INT ,A68_VC *);
extern A68_INT  YOAAOSL_charnumber(struct A68t34 *);
extern A68_VOID  CZAAOSL_spaces(A68_INT ,A68_63 *);
extern A68_VOID  LRAAOSL_newline(struct A68t34 *);
extern A68_VOID  UZAAOSL_writeline(struct A68t34 *);
extern A68_VOID  GABAOSL_putstr(struct A68t34 *,A68_VC );
extern A68_VOID  GFBAOSL_put(struct A68t34 *,struct A68t85 );
extern A68_34 * XPAAOSL_make_channel(struct A68t87 ,struct A68t88 );
extern A68_VOID  UJBAOSL_oneline(struct A68t85 ,A68_VC *);
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void YIBAOST(void);   /* commandreader */
extern void XBBAOST(void);   /* iomessages */
extern void JFAAOSI(void);   /* messageproc */
extern void JSCAOST(void);   /* basics */
extern void QFBAOST(void);   /* testmode */
extern void PCAAOST(void);   /* osinterface */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_210   WIGAOST = {"$Id: ioprocs.a68,v 34.2 1995/03/29 13:02:26 ella Exp $"}; 
A_GISVEC(A68_VC ,XIGAOST,WIGAOST,54)
#define YIGAOST_in_step 512
#define ZIGAOST_default_width 80
#define AJGAOST_min_width 40
#define BJGAOST_default_length 22
#define CJGAOST_min_page_length 3
#define DJGAOST_max_eof_count 3
static A68_213   EJGAOST = {"*****"}; 
A_GISVEC(A68_VC ,FJGAOST,EJGAOST,5)
static A68_VC  GJGAOST_stars;
static A68_VC  LJGAOST_in_buffer;
A68_212  NJGAOST_iostate;
static A68_216   KKGAOST = {"Paging - press <RET> for more "}; 
A_GISVEC(A68_VC ,LKGAOST,KKGAOST,30)
static A68_217   SLGAOST = {"(suspended)  "}; 
A_GISVEC(A68_VC ,TLGAOST,SLGAOST,13)
static A68_218   ULGAOST = {"  "}; 
A_GISVEC(A68_VC ,VLGAOST,ULGAOST,2)
static A68_219   GNGAOST = {"An error ocurred on input"}; 
A_GISVEC(A68_VC ,HNGAOST,GNGAOST,25)
static A68_218   UOGAOST = {"  "}; 
A_GISVEC(A68_VC ,VOGAOST,UOGAOST,2)
static A68_218   ZOGAOST = {"  "}; 
A_GISVEC(A68_VC ,APGAOST,ZOGAOST,2)
static A68_213   GQGAOST = {"File "}; 
A_GISVEC(A68_VC ,HQGAOST,GQGAOST,5)
static A68_218   MQGAOST = {"  "}; 
A_GISVEC(A68_VC ,NQGAOST,MQGAOST,2)
static A68_VC  YWGAOST_screen_buffer;
static A68_VC  AXGAOST_out_buffer;
static A68_VC  CXGAOST_err_buffer;
static A68_228   WXGAOST = {"stdin  "}; 
A_GISVEC(A68_VC ,XXGAOST,WXGAOST,7)
typedef struct   /* env of non-global proc */
{
A68_BOOL  NLGAOST_prompt;
A_PAD_BOOL(PAD_58)
A68_97  Msg;
A68_INT * LLGAOST_length;
A68_VC * Buffer;
A68_43  FMGAOST_read_from_file;
} HMGAOST_read_from_file;
typedef struct   /* env of non-global proc */
{
int dummy;
} VQGAOST_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  W;
A_PAD_INT(PAD_59)
} SVGAOST_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  W;
A_PAD_INT(PAD_60)
} AWGAOST_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  W;
A_PAD_INT(PAD_61)
} IWGAOST_generator;
typedef struct   /* env of non-global proc */
{
A68_VC * Buffer;
} YMGAOST_generator;

A_STATIC A68_VOID  IJGAOST_generator(A68_BOOL  HJGAOST_anonymous, A68_VC  *ReturnedValue);

A68_BOOL  OJGAOST_out_is_online(void);

A68_212 * QJGAOST_get_iostate(void);

A_STATIC A68_VOID  UJGAOST_log_msg(A68_98  No, A68_46  Msg);

A_STATIC A68_VOID  CKGAOST_out_msg(A68_98  No, A68_46  Msg);

A_STATIC A68_VOID  IKGAOST_page(void);

A68_VOID  PKGAOST_write_screen(A68_VC  Str);

A_STATIC A68_VOID  VKGAOST_write_err(A68_VC  Str);

A_STATIC A68_VOID  CLGAOST_write_out(A68_VC  Str);

A68_INT  KLGAOST_getline(A68_VC * Buffer, A68_97  Msg);

A_STATIC A68_VOID  GMGAOST_read_from_file(A68_VC  Buf, void *NonLocals);

A_STATIC A68_VOID  XMGAOST_generator(A68_BOOL  VMGAOST_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  SNGAOST_banner(A68_VC  Message);

A68_VOID  JPGAOST_io_fault(A68_97  Msg);

A68_INT  QPGAOST_current_width(void);

A68_VOID  TPGAOST_io_clearinputs(A68_97  Msg);

A68_VOID  CQGAOST_io_input(A68_VC  Name, A68_97  Msg);

A_STATIC A68_VOID  UQGAOST_generator(A68_BOOL  SQGAOST_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  FRGAOST_io_removefile(A68_97  Msg);

A68_VOID  PRGAOST_io_showinput(A68_97  Msg);

A68_VOID  SRGAOST_io_dontshowinput(A68_97  Msg);

A68_VOID  VRGAOST_io_showoutput(A68_97  Msg);

A68_VOID  YRGAOST_io_dontshowoutput(A68_97  Msg);

A68_VOID  BSGAOST_io_showtime(A68_97  Msg);

A68_VOID  ESGAOST_io_dontshowtime(A68_97  Msg);

A68_VOID  HSGAOST_io_printtime(A68_97  Msg);

A68_VOID  NSGAOST_io_message(A68_VC  Text, A68_97  Msg);

A68_VOID  SSGAOST_io_comment(A68_VC  Text, A68_97  Msg);

A68_VOID  WSGAOST_io_offline(A68_97  Msg);

A68_VOID  BTGAOST_io_online(A68_97  Msg);

A68_VOID  ITGAOST_io_log(A68_VC  Name, A68_97  Msg);

A68_VOID  TTGAOST_io_dontlog(A68_97  Msg);

A68_VOID  CUGAOST_io_output(A68_VC  Name, A68_97  Msg);

A68_VOID  NUGAOST_io_dontoutput(A68_97  Msg);

A68_VOID  WUGAOST_io_page(A68_INT  L, A68_97  Msg);

A68_VOID  FVGAOST_io_dontpage(A68_97  Msg);

A68_VOID  JVGAOST_io_setwidth(A68_INT  W, A68_97  Msg);

A_STATIC A68_VOID  RVGAOST_generator(A68_BOOL  PVGAOST_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ZVGAOST_generator(A68_BOOL  XVGAOST_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  HWGAOST_generator(A68_BOOL  FWGAOST_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  VWGAOST_generator(A68_BOOL  UWGAOST_anonymous, A68_VC  *ReturnedValue);

A68_VOID  FXGAOST_initialise_ioprocs(A68_159  Get_prompt);

A_STATIC A68_VOID  XMGAOST_generator(A68_BOOL  VMGAOST_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((YMGAOST_generator *)NonLocals)->x)
{ 
A68_VC  ZMGAOST;  /* clause result */
A68_VC  ANGAOST;  /* OPERATORS - dynamic generator */
{ 
ANGAOST.upb = ((*NL(Buffer)).upb+YIGAOST_in_step) ;
( VMGAOST_anonymous? A_VLOC(A68_CHAR ,ANGAOST): A_VHEAP(A68_CHAR ,ANGAOST) );
ZMGAOST = ANGAOST;
} 
*ReturnedValue = (ZMGAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  GMGAOST_read_from_file(A68_VC  Buf, void *NonLocals)
#define NL(x) (((HMGAOST_read_from_file *)NonLocals)->x)
{ 
A68_INT  IMGAOST_leng;
A68_92 * JMGAOST;  /* clause result */
A68_92 * KMGAOST_file;
A68_35  LMGAOST;  /* avoid structure result */
A68_35  MMGAOST_status;
A68_INT * NMGAOST;  /* YIELD */
A68_98  OMGAOST;  /* avoid structure result */
A68_98  PMGAOST;  /* avoid structure result */
A68_92 * QMGAOST_old;
A68_211 ** RMGAOST;  /* YIELD */
A68_VC  SMGAOST;  /* avoid structure result */
A68_46  TMGAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_98  UMGAOST;  /* avoid structure result */
A68_31  WMGAOST_generator;   /* proc value of non-global proc */
A68_VC  BNGAOST;  /* avoid structure result */
A68_VC  CNGAOST_new;
A68_VC  DNGAOST;  /* OPERATORS - trim index */
A68_VC  ENGAOST;  /* YIELD */
A68_VC  FNGAOST;  /* OPERATORS - trim index */
A68_46  INGAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT * JNGAOST;  /* YIELD */
A_PROC_ENTRY(read_from_file);
 /* line 275: */
 /* line 276: */
{ 
IMGAOST_leng = 0;
 /* line 277: */
if ( NL(NLGAOST_prompt) )
{ 
JMGAOST = INBAOSI_stdin;
} 
else
{ 
JMGAOST = (*(&((*(&((&NJGAOST_iostate)->Infile)))->File)));
} 
KMGAOST_file = JMGAOST;
 /* line 278: */
SRBAOSI_read_line( KMGAOST_file, Buf, (&IMGAOST_leng), NL(Msg), &LMGAOST );
MMGAOST_status = LMGAOST;
 /* line 279: */
 /* line 280: */
if ( PPBAOSI_(MMGAOST_status, GPBAOSI_io_eof) )
{ 
 /* line 281: */
if ( NL(NLGAOST_prompt) )
{ 
 /* line 282: */
NMGAOST = (&((&NJGAOST_iostate)->Eof_count)) ;
if ( (((*NMGAOST)+=1)>DJGAOST_max_eof_count) )
{ 
 /* line 283: */
 /* line 284: */
FFBAOST_io_msg( 5, &OMGAOST );
A_CALLPROC(NL(Msg),(OMGAOST, VJAAOSI_nullmsg),(OMGAOST, VJAAOSI_nullmsg,(NL(Msg)).nonlocals));
} 
else
{ 
 /* line 285: */
 /* line 286: */
 /* line 287: */
FFBAOST_io_msg( 6, &PMGAOST );
A_CALLPROC(NL(Msg),(PMGAOST, VJAAOSI_nullmsg),(PMGAOST, VJAAOSI_nullmsg,(NL(Msg)).nonlocals));
} 
} 
else
{ 
QMGAOST_old = (*(&((*(&((&NJGAOST_iostate)->Infile)))->File)));
 /* line 288: */
RMGAOST = (&((&NJGAOST_iostate)->Infile)) ;
(*RMGAOST) = (*(&((*(&((&NJGAOST_iostate)->Infile)))->Previous)));
 /* line 289: */
GLBAOST_reset_reader((*(*(&((*(&((&NJGAOST_iostate)->Infile)))->Reader)))));
 /* line 290: */
LRAAOSL_newline(KEAAOST_screen);
 /* line 291: */
 /* line 292: */
SIBAOST_testmode_file_name( QMGAOST_old, &SMGAOST );
FFBAOST_io_msg( 3, &UMGAOST );
A_CALLPROC(NL(Msg),(UMGAOST, A_HVEC(TMGAOST,SMGAOST,A68_VC )),(UMGAOST, A_HVEC(TMGAOST,SMGAOST,A68_VC ),(NL(Msg)).nonlocals));
 /* line 293: */
 /* line 294: */
 /* line 296: */
XQBAOSI_close_file(QMGAOST_old, NL(Msg));
} 
} 
else
{ 
 /* line 297: */
if ( PPBAOSI_(MMGAOST_status, GDAAOST_io_partline) )
{ 
(*NL(LLGAOST_length))+=IMGAOST_leng;
 /* line 299: */
A_CLOSURE( WMGAOST_generator, XMGAOST_generator, YMGAOST_generator );
(( YMGAOST_generator * ) ( WMGAOST_generator.nonlocals )) -> Buffer = NL(Buffer);
A_CALLPROC(WMGAOST_generator,(A68_FALSE, &BNGAOST),(A68_FALSE, &BNGAOST,(WMGAOST_generator).nonlocals));
CNGAOST_new = BNGAOST;
 /* line 300: */
ENGAOST = A_VTRIM(DNGAOST,(CNGAOST_new),A_VTSCRIPT(&(DNGAOST.upb),(CNGAOST_new).upb,1,(*NL(Buffer)).upb)) ;
A_VASSIGN2((*NL(Buffer)),ENGAOST,A68_CHAR );
 /* line 301: */
(*NL(Buffer)) = CNGAOST_new;
 /* line 303: */
 /* line 304: */
A_CALLPROC(NL(FMGAOST_read_from_file),(A_VTRIM(FNGAOST,((*NL(Buffer))),A_VTSCRIPT(&(FNGAOST.upb),((*NL(Buffer))).upb,((*NL(LLGAOST_length))+1),((*NL(Buffer))).upb))),(A_VTRIM(FNGAOST,((*NL(Buffer))),A_VTSCRIPT(&(FNGAOST.upb),((*NL(Buffer))).upb,((*NL(LLGAOST_length))+1),((*NL(Buffer))).upb)),(NL(FMGAOST_read_from_file)).nonlocals));
} 
else
{ 
 /* line 305: */
 /* line 306: */
if ( PPBAOSI_(MMGAOST_status, JPBAOSI_io_error) )
{ 
 /* line 307: */
A_CALLPROC(NL(Msg),(WHAAOSI_user, A_HVEC(INGAOST,HNGAOST,A68_VC )),(WHAAOSI_user, A_HVEC(INGAOST,HNGAOST,A68_VC ),(NL(Msg)).nonlocals));
} 
else
{ 
(*NL(LLGAOST_length))+=IMGAOST_leng;
 /* line 308: */
 /* line 309: */
 /* line 310: */
JNGAOST = (&((&NJGAOST_iostate)->Eof_count)) ;
(*JNGAOST) = 0;
} 
} 
} 
} 
A_PROC_EXIT(read_from_file);
return;
} 
#undef NL

A_STATIC A68_VOID  UQGAOST_generator(A68_BOOL  SQGAOST_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((VQGAOST_generator *)NonLocals)->x)
{ 
A68_VC  WQGAOST;  /* clause result */
A68_VC  XQGAOST;  /* OPERATORS - dynamic generator */
{ 
XQGAOST.upb = YIGAOST_in_step ;
( SQGAOST_anonymous? A_VLOC(A68_CHAR ,XQGAOST): A_VHEAP(A68_CHAR ,XQGAOST) );
WQGAOST = XQGAOST;
} 
*ReturnedValue = (WQGAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  RVGAOST_generator(A68_BOOL  PVGAOST_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((SVGAOST_generator *)NonLocals)->x)
{ 
A68_VC  TVGAOST;  /* clause result */
A68_VC  UVGAOST;  /* OPERATORS - dynamic generator */
{ 
UVGAOST.upb = (NL(W)+1) ;
( PVGAOST_anonymous? A_VLOC(A68_CHAR ,UVGAOST): A_VHEAP(A68_CHAR ,UVGAOST) );
TVGAOST = UVGAOST;
} 
*ReturnedValue = (TVGAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  ZVGAOST_generator(A68_BOOL  XVGAOST_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((AWGAOST_generator *)NonLocals)->x)
{ 
A68_VC  BWGAOST;  /* clause result */
A68_VC  CWGAOST;  /* OPERATORS - dynamic generator */
{ 
CWGAOST.upb = (NL(W)+1) ;
( XVGAOST_anonymous? A_VLOC(A68_CHAR ,CWGAOST): A_VHEAP(A68_CHAR ,CWGAOST) );
BWGAOST = CWGAOST;
} 
*ReturnedValue = (BWGAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  HWGAOST_generator(A68_BOOL  FWGAOST_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((IWGAOST_generator *)NonLocals)->x)
{ 
A68_VC  JWGAOST;  /* clause result */
A68_VC  KWGAOST;  /* OPERATORS - dynamic generator */
{ 
 /* line 533: */
KWGAOST.upb = (NL(W)+1) ;
( FWGAOST_anonymous? A_VLOC(A68_CHAR ,KWGAOST): A_VHEAP(A68_CHAR ,KWGAOST) );
JWGAOST = KWGAOST;
} 
*ReturnedValue = (JWGAOST);
return;
} 
#undef NL

A_STATIC A68_VOID  IJGAOST_generator(A68_BOOL  HJGAOST_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  JJGAOST;  /* clause result */
A68_VC  KJGAOST;  /* OPERATORS - dynamic generator */
{ 
KJGAOST.upb = YIGAOST_in_step ;
( HJGAOST_anonymous? A_VLOC(A68_CHAR ,KJGAOST): A_VHEAP(A68_CHAR ,KJGAOST) );
JJGAOST = KJGAOST;
} 
*ReturnedValue = (JJGAOST);
return;
} 
#undef NL

A68_BOOL  OJGAOST_out_is_online(void)
{ 
A68_BOOL  PJGAOST;  /* clause result */
A_PROC_ENTRY(out_is_online);
PJGAOST = !(*(&((&NJGAOST_iostate)->Outputing)));
A_PROC_EXIT(out_is_online);
return( PJGAOST );
} 
#undef NL

A68_212 * QJGAOST_get_iostate(void)
{ 
A68_212 * RJGAOST;  /* clause result */
A_PROC_ENTRY(get_iostate);
RJGAOST = (&NJGAOST_iostate);
A_PROC_EXIT(get_iostate);
return( RJGAOST );
} 
#undef NL

A_STATIC A68_VOID  UJGAOST_log_msg(A68_98  No, A68_46  Msg)
{ 
A68_BOOL * VJGAOST;  /* YIELD */
A68_215  WJGAOST;  /* collateral clause result */
A68_VC  XJGAOST;  /* avoid structure result */
A68_46  YJGAOST;  /* OPERATORS - istruct -> vector */
A68_98  ZJGAOST;  /* avoid structure result */
A_PROC_ENTRY(log_msg);
 /* line 149: */
 /* line 150: */
{ 
VJGAOST = (&((&NJGAOST_iostate)->Logging)) ;
(*VJGAOST) = A68_FALSE;
 /* line 151: */
 /* line 152: */
WJGAOST.data[0] = GJGAOST_stars;
SIBAOST_testmode_file_name( (*(&((&NJGAOST_iostate)->Logfile))), &XJGAOST );
WJGAOST.data[1] = XJGAOST;
FFBAOST_io_msg( 1, &ZJGAOST );
A_CALLPROC(ZLBAOSI_global_msg,(ZJGAOST, A_HISVEC(YJGAOST,WJGAOST,2,A68_VC )),(ZJGAOST, A_HISVEC(YJGAOST,WJGAOST,2,A68_VC ),(ZLBAOSI_global_msg).nonlocals));
 /* line 153: */
XQBAOSI_close_file((*(&((&NJGAOST_iostate)->Logfile))), ZLBAOSI_global_msg);
 /* line 154: */
 /* line 155: */
A_CALLPROC(ZLBAOSI_global_msg,(No, Msg),(No, Msg,(ZLBAOSI_global_msg).nonlocals));
} 
A_PROC_EXIT(log_msg);
return;
} 
#undef NL

A_STATIC A68_VOID  CKGAOST_out_msg(A68_98  No, A68_46  Msg)
{ 
A68_BOOL * DKGAOST;  /* YIELD */
A68_215  EKGAOST;  /* collateral clause result */
A68_VC  FKGAOST;  /* avoid structure result */
A68_46  GKGAOST;  /* OPERATORS - istruct -> vector */
A68_98  HKGAOST;  /* avoid structure result */
A_PROC_ENTRY(out_msg);
 /* line 158: */
 /* line 159: */
{ 
DKGAOST = (&((&NJGAOST_iostate)->Outputing)) ;
(*DKGAOST) = A68_FALSE;
 /* line 160: */
 /* line 161: */
EKGAOST.data[0] = GJGAOST_stars;
SIBAOST_testmode_file_name( (*(&((&NJGAOST_iostate)->Outfile))), &FKGAOST );
EKGAOST.data[1] = FKGAOST;
FFBAOST_io_msg( 2, &HKGAOST );
A_CALLPROC(ZLBAOSI_global_msg,(HKGAOST, A_HISVEC(GKGAOST,EKGAOST,2,A68_VC )),(HKGAOST, A_HISVEC(GKGAOST,EKGAOST,2,A68_VC ),(ZLBAOSI_global_msg).nonlocals));
 /* line 162: */
XQBAOSI_close_file((*(&((&NJGAOST_iostate)->Outfile))), ZLBAOSI_global_msg);
 /* line 163: */
 /* line 164: */
A_CALLPROC(ZLBAOSI_global_msg,(No, Msg),(No, Msg,(ZLBAOSI_global_msg).nonlocals));
} 
A_PROC_EXIT(out_msg);
return;
} 
#undef NL

A_STATIC A68_VOID  IKGAOST_page(void)
{ 
A68_INT * JKGAOST;  /* YIELD */
A68_VC  MKGAOST;  /* avoid structure result */
A68_INT * NKGAOST;  /* YIELD */
A_PROC_ENTRY(page);
{ 
JKGAOST = (&((&NJGAOST_iostate)->Page_count)) ;
(*JKGAOST)+=1;
 /* line 170: */
 /* line 171: */
if ( ((*(&((&NJGAOST_iostate)->Page_count)))==(*(&((&NJGAOST_iostate)->Page_length)))) )
{ 
IIAAOST_prompt( LKGAOST, &MKGAOST );
MKGAOST;
 /* line 172: */
 /* line 173: */
 /* line 174: */
NKGAOST = (&((&NJGAOST_iostate)->Page_count)) ;
(*NKGAOST) = 0;
} 
} 
A_PROC_EXIT(page);
return;
} 
#undef NL

A68_VOID  PKGAOST_write_screen(A68_VC  Str)
{ 
A68_97  QKGAOST;  /* procedure value */
A68_35  RKGAOST;  /* avoid structure result */
A68_97  SKGAOST;  /* procedure value */
A68_35  TKGAOST;  /* avoid structure result */
A_PROC_ENTRY(write_screen);
 /* line 178: */
 /* line 179: */
{ 
 /* line 180: */
if ( (*(&((&NJGAOST_iostate)->Screen_output))) )
{ 
KDAAOST_write_stdout(Str);
 /* line 181: */
if ( (*(&((&NJGAOST_iostate)->Paging))) )
{ 
 /* line 182: */
IKGAOST_page();
} 
} 
 /* line 183: */
 /* line 184: */
if ( (*(&((&NJGAOST_iostate)->Logging))) )
{ 
 /* line 185: */
QKGAOST.fn.fn_global = UJGAOST_log_msg;
QKGAOST.nonlocals = A68_NIL;
JSBAOSI_write_buffer( (*(&((&NJGAOST_iostate)->Logfile))), Str, QKGAOST, &RKGAOST );
RKGAOST;
} 
 /* line 186: */
 /* line 187: */
if ( (*(&((&NJGAOST_iostate)->Outputing))) )
{ 
 /* line 188: */
 /* line 189: */
SKGAOST.fn.fn_global = CKGAOST_out_msg;
SKGAOST.nonlocals = A68_NIL;
JSBAOSI_write_buffer( (*(&((&NJGAOST_iostate)->Outfile))), Str, SKGAOST, &TKGAOST );
TKGAOST;
} 
} 
A_PROC_EXIT(write_screen);
return;
} 
#undef NL

A_STATIC A68_VOID  VKGAOST_write_err(A68_VC  Str)
{ 
A68_35  WKGAOST;  /* avoid structure result */
A68_97  XKGAOST;  /* procedure value */
A68_35  YKGAOST;  /* avoid structure result */
A68_97  ZKGAOST;  /* procedure value */
A68_35  ALGAOST;  /* avoid structure result */
A_PROC_ENTRY(write_err);
 /* line 193: */
 /* line 194: */
{ 
 /* line 195: */
if ( (*(&((&NJGAOST_iostate)->Screen_output))) )
{ 
JSBAOSI_write_buffer( KNBAOSI_stderr, Str, XLBAOSI_ignore_msg, &WKGAOST );
WKGAOST;
 /* line 196: */
if ( (*(&((&NJGAOST_iostate)->Paging))) )
{ 
 /* line 197: */
IKGAOST_page();
} 
} 
 /* line 198: */
 /* line 199: */
if ( (*(&((&NJGAOST_iostate)->Logging))) )
{ 
 /* line 200: */
XKGAOST.fn.fn_global = UJGAOST_log_msg;
XKGAOST.nonlocals = A68_NIL;
JSBAOSI_write_buffer( (*(&((&NJGAOST_iostate)->Logfile))), Str, XKGAOST, &YKGAOST );
YKGAOST;
} 
 /* line 201: */
 /* line 202: */
if ( (*(&((&NJGAOST_iostate)->Outputing))) )
{ 
 /* line 203: */
 /* line 204: */
ZKGAOST.fn.fn_global = CKGAOST_out_msg;
ZKGAOST.nonlocals = A68_NIL;
JSBAOSI_write_buffer( (*(&((&NJGAOST_iostate)->Outfile))), Str, ZKGAOST, &ALGAOST );
ALGAOST;
} 
} 
A_PROC_EXIT(write_err);
return;
} 
#undef NL

A_STATIC A68_VOID  CLGAOST_write_out(A68_VC  Str)
{ 
A68_BOOL  DLGAOST;  /* optbool result */
A68_97  ELGAOST;  /* procedure value */
A68_35  FLGAOST;  /* avoid structure result */
A68_97  GLGAOST;  /* procedure value */
A68_35  HLGAOST;  /* avoid structure result */
A_PROC_ENTRY(write_out);
 /* line 208: */
 /* line 209: */
{ 
 /* line 210: */
DLGAOST = (*(&((&NJGAOST_iostate)->Seeing_out)));
if ( ! DLGAOST )
{DLGAOST = !(*(&((&NJGAOST_iostate)->Outputing)));
}
if ( DLGAOST )
{ 
KDAAOST_write_stdout(Str);
 /* line 211: */
if ( (*(&((&NJGAOST_iostate)->Paging))) )
{ 
 /* line 212: */
IKGAOST_page();
} 
} 
 /* line 213: */
 /* line 214: */
if ( (*(&((&NJGAOST_iostate)->Logging))) )
{ 
 /* line 215: */
ELGAOST.fn.fn_global = UJGAOST_log_msg;
ELGAOST.nonlocals = A68_NIL;
JSBAOSI_write_buffer( (*(&((&NJGAOST_iostate)->Logfile))), Str, ELGAOST, &FLGAOST );
FLGAOST;
} 
 /* line 216: */
 /* line 217: */
if ( (*(&((&NJGAOST_iostate)->Outputing))) )
{ 
 /* line 218: */
 /* line 219: */
GLGAOST.fn.fn_global = CKGAOST_out_msg;
GLGAOST.nonlocals = A68_NIL;
JSBAOSI_write_buffer( (*(&((&NJGAOST_iostate)->Outfile))), Str, GLGAOST, &HLGAOST );
HLGAOST;
} 
} 
A_PROC_EXIT(write_out);
return;
} 
#undef NL

A68_INT  KLGAOST_getline(A68_VC * Buffer, A68_97  Msg)
{ 
A68_INT  LLGAOST_length;
A68_BOOL  MLGAOST;  /* optbool result */
A68_BOOL  NLGAOST_prompt;
A68_BOOL  OLGAOST;  /* optbool result */
A68_BOOL  PLGAOST_visible;
A68_BOOL  QLGAOST_screen_enabled;
A68_BOOL  RLGAOST_out_enabled;
A68_VC  WLGAOST;  /* avoid structure result */
A68_159  XLGAOST;  /* CALL */
A68_VC  YLGAOST;  /* avoid structure result */
A68_BOOL * ZLGAOST;  /* YIELD */
A68_BOOL  AMGAOST;  /* optbool result */
A68_BOOL * BMGAOST;  /* YIELD */
A68_BOOL * CMGAOST;  /* YIELD */
A68_BOOL * DMGAOST;  /* YIELD */
A68_43  FMGAOST_read_from_file;   /* proc value of non-global proc */
A68_BOOL * KNGAOST;  /* YIELD */
A68_BOOL * LNGAOST;  /* YIELD */
A68_VC  MNGAOST;  /* OPERATORS - trim index */
A68_INT * NNGAOST;  /* YIELD */
A68_BOOL * ONGAOST;  /* YIELD */
A68_BOOL * PNGAOST;  /* YIELD */
A68_INT  QNGAOST;  /* clause result */
A_PROC_ENTRY(getline);
 /* line 224: */
 /* line 233: */
{ 
LLGAOST_length = 0;
 /* line 234: */
 /* line 235: */
MLGAOST = ((*(&((*(&((&NJGAOST_iostate)->Infile)))->Number)))==0);
if ( ! MLGAOST )
{MLGAOST = (*(&((*(&((&NJGAOST_iostate)->Infile)))->Suspended)));
}
NLGAOST_prompt = MLGAOST;
 /* line 236: */
OLGAOST = NLGAOST_prompt;
if ( ! OLGAOST )
{OLGAOST = (*(&((&NJGAOST_iostate)->Logging)));
}
 /* line 237: */
if ( ! OLGAOST )
{OLGAOST = (*(&((&NJGAOST_iostate)->Seeing_in)));
}
PLGAOST_visible = OLGAOST;
 /* line 238: */
QLGAOST_screen_enabled = (*(&((&NJGAOST_iostate)->Screen_output)));
 /* line 239: */
RLGAOST_out_enabled = (*(&((&NJGAOST_iostate)->Outputing)));
 /* line 242: */
if ( (YOAAOSL_charnumber(KEAAOST_screen)>1) )
{ 
LRAAOSL_newline(KEAAOST_screen);
} 
 /* line 243: */
if ( (YOAAOSL_charnumber(LEAAOST_out)>1) )
{ 
LRAAOSL_newline(LEAAOST_out);
} 
 /* line 247: */
 /* line 248: */
if ( PLGAOST_visible )
{ 
LRAAOSL_newline(KEAAOST_screen);
 /* line 249: */
 /* line 250: */
if ( ((*(&((*(&((&NJGAOST_iostate)->Infile)))->Number)))>0) )
{ 
GABAOSL_putstr(KEAAOST_screen, (*(&((*(&((&NJGAOST_iostate)->Infile)))->Name))));
 /* line 251: */
 /* line 252: */
if ( (*(&((*(&((&NJGAOST_iostate)->Infile)))->Suspended))) )
{ 
 /* line 253: */
GABAOSL_putstr(KEAAOST_screen, TLGAOST);
} 
else
{ 
 /* line 254: */
 /* line 255: */
GABAOSL_putstr(KEAAOST_screen, VLGAOST);
} 
} 
 /* line 256: */
if ( (*(&((&NJGAOST_iostate)->Clock))) )
{ 
GEDAOST_time_str(  &WLGAOST );
GABAOSL_putstr(KEAAOST_screen, WLGAOST);
} 
 /* line 257: */
XLGAOST = (*(&((&NJGAOST_iostate)->Prompt))) ;
A_CALLPROC(XLGAOST,( &YLGAOST),( &YLGAOST,(XLGAOST).nonlocals));
GABAOSL_putstr(KEAAOST_screen, YLGAOST);
 /* line 258: */
GABAOSL_putstr(KEAAOST_screen, OJBAOST_arrow_str);
 /* line 264: */
ZLGAOST = (&((&NJGAOST_iostate)->Outputing)) ;
(*ZLGAOST) = A68_FALSE;
 /* line 265: */
 /* line 266: */
AMGAOST = !NLGAOST_prompt;
if ( AMGAOST )
{AMGAOST = !(*(&((&NJGAOST_iostate)->Seeing_in)));
}
if ( AMGAOST )
{ 
 /* line 267: */
BMGAOST = (&((&NJGAOST_iostate)->Screen_output)) ;
(*BMGAOST) = A68_FALSE;
} 
 /* line 268: */
UZAAOSL_writeline(KEAAOST_screen);
 /* line 269: */
CMGAOST = (&((&NJGAOST_iostate)->Screen_output)) ;
(*CMGAOST) = QLGAOST_screen_enabled;
 /* line 270: */
 /* line 271: */
DMGAOST = (&((&NJGAOST_iostate)->Outputing)) ;
(*DMGAOST) = RLGAOST_out_enabled;
} 
 /* line 274: */
A_CLOSURE( FMGAOST_read_from_file, GMGAOST_read_from_file, HMGAOST_read_from_file );
(( HMGAOST_read_from_file * ) ( FMGAOST_read_from_file.nonlocals )) -> NLGAOST_prompt = NLGAOST_prompt;
(( HMGAOST_read_from_file * ) ( FMGAOST_read_from_file.nonlocals )) -> Msg = Msg;
(( HMGAOST_read_from_file * ) ( FMGAOST_read_from_file.nonlocals )) -> LLGAOST_length = (&LLGAOST_length);
(( HMGAOST_read_from_file * ) ( FMGAOST_read_from_file.nonlocals )) -> Buffer = Buffer;
(( HMGAOST_read_from_file * ) ( FMGAOST_read_from_file.nonlocals )) -> FMGAOST_read_from_file = FMGAOST_read_from_file;
 /* line 312: */
A_CALLPROC(FMGAOST_read_from_file,((*Buffer)),((*Buffer),(FMGAOST_read_from_file).nonlocals));
 /* line 315: */
KNGAOST = (&((&NJGAOST_iostate)->Outputing)) ;
(*KNGAOST) = A68_FALSE;
 /* line 316: */
if ( !(*(&((&NJGAOST_iostate)->Seeing_in))) )
{ 
LNGAOST = (&((&NJGAOST_iostate)->Screen_output)) ;
(*LNGAOST) = A68_FALSE;
} 
 /* line 317: */
GABAOSL_putstr(KEAAOST_screen, A_VTRIM(MNGAOST,((*Buffer)),A_VTSCRIPT(&(MNGAOST.upb),((*Buffer)).upb,1,LLGAOST_length)));
 /* line 318: */
LRAAOSL_newline(KEAAOST_screen);
 /* line 319: */
NNGAOST = (&((&NJGAOST_iostate)->Page_count)) ;
(*NNGAOST) = 1;
 /* line 321: */
ONGAOST = (&((&NJGAOST_iostate)->Outputing)) ;
(*ONGAOST) = RLGAOST_out_enabled;
 /* line 322: */
PNGAOST = (&((&NJGAOST_iostate)->Screen_output)) ;
(*PNGAOST) = QLGAOST_screen_enabled;
 /* line 324: */
 /* line 325: */
QNGAOST = LLGAOST_length;
} 
A_PROC_EXIT(getline);
return( QNGAOST );
} 
#undef NL

A68_VOID  SNGAOST_banner(A68_VC  Message)
{ 
A68_INT  TNGAOST_gap;
A68_INT  UNGAOST_sgap;
A68_220  VNGAOST;  /* collateral clause result */
A68_52  WNGAOST;  /* OPERATORS - mode -> union mode */
A68_56  XNGAOST;  /* procedure value */
A68_VC  YNGAOST;  /* avoid structure result */
A68_52  ZNGAOST;  /* OPERATORS - mode -> union mode */
A68_52  AOGAOST;  /* OPERATORS - mode -> union mode */
A68_52  BOGAOST;  /* OPERATORS - mode -> union mode */
A68_56  COGAOST;  /* procedure value */
A68_85  DOGAOST;  /* OPERATORS - istruct -> vector */
A68_221  EOGAOST;  /* collateral clause result */
A68_52  FOGAOST;  /* OPERATORS - mode -> union mode */
A68_56  GOGAOST;  /* procedure value */
A68_52  HOGAOST;  /* OPERATORS - mode -> union mode */
A68_52  IOGAOST;  /* OPERATORS - mode -> union mode */
A68_56  JOGAOST;  /* procedure value */
A68_85  KOGAOST;  /* OPERATORS - istruct -> vector */
A68_INT  LOGAOST_bgap;
A68_INT  MOGAOST_hgap;
A68_222  NOGAOST;  /* collateral clause result */
A68_52  OOGAOST;  /* OPERATORS - mode -> union mode */
A68_56  POGAOST;  /* procedure value */
A68_63  QOGAOST;  /* avoid structure result */
A68_52  ROGAOST;  /* OPERATORS - mode -> union mode */
A68_VC  SOGAOST;  /* avoid structure result */
A68_52  TOGAOST;  /* OPERATORS - mode -> union mode */
A68_52  WOGAOST;  /* OPERATORS - mode -> union mode */
A68_VC  XOGAOST;  /* YIELD */
A68_52  YOGAOST;  /* OPERATORS - mode -> union mode */
A68_52  BPGAOST;  /* OPERATORS - mode -> union mode */
A68_VC  CPGAOST;  /* YIELD */
A68_VC  DPGAOST;  /* avoid structure result */
A68_52  EPGAOST;  /* OPERATORS - mode -> union mode */
A68_52  FPGAOST;  /* OPERATORS - mode -> union mode */
A68_56  GPGAOST;  /* procedure value */
A68_85  HPGAOST;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(banner);
 /* line 329: */
 /* line 330: */
{ 
TNGAOST_gap = ((*(&((&NJGAOST_iostate)->Width)))-Message.upb);
 /* line 331: */
UNGAOST_sgap = ((*(&((&NJGAOST_iostate)->Width)))/8);
 /* line 332: */
 /* line 333: */
 /* line 334: */
if ( ((TNGAOST_gap-8)<(2*UNGAOST_sgap)) )
{ 
 /* line 335: */
 /* line 336: */
if ( (TNGAOST_gap>1) )
{ 
XNGAOST.fn.fn_global = LRAAOSL_newline;
XNGAOST.nonlocals = A68_NIL;
VNGAOST.data[0] = A_UNITE(WNGAOST,mode12,12,XNGAOST);
NVAAOSL_( ' ', (TNGAOST_gap/2), &YNGAOST );
VNGAOST.data[1] = A_UNITE(ZNGAOST,mode7,7,YNGAOST);
VNGAOST.data[2] = A_UNITE(AOGAOST,mode7,7,Message);
COGAOST.fn.fn_global = LRAAOSL_newline;
COGAOST.nonlocals = A68_NIL;
VNGAOST.data[3] = A_UNITE(BOGAOST,mode12,12,COGAOST);
 /* line 337: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(DOGAOST,VNGAOST,4,A68_52 ));
} 
else
{ 
GOGAOST.fn.fn_global = LRAAOSL_newline;
GOGAOST.nonlocals = A68_NIL;
EOGAOST.data[0] = A_UNITE(FOGAOST,mode12,12,GOGAOST);
EOGAOST.data[1] = A_UNITE(HOGAOST,mode7,7,Message);
JOGAOST.fn.fn_global = LRAAOSL_newline;
JOGAOST.nonlocals = A68_NIL;
EOGAOST.data[2] = A_UNITE(IOGAOST,mode12,12,JOGAOST);
 /* line 338: */
 /* line 339: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(KOGAOST,EOGAOST,3,A68_52 ));
} 
} 
else
{ 
LOGAOST_bgap = ((TNGAOST_gap-(2*UNGAOST_sgap))-4);
MOGAOST_hgap = (LOGAOST_bgap/2);
 /* line 340: */
POGAOST.fn.fn_global = LRAAOSL_newline;
POGAOST.nonlocals = A68_NIL;
NOGAOST.data[0] = A_UNITE(OOGAOST,mode12,12,POGAOST);
CZAAOSL_spaces( UNGAOST_sgap, &QOGAOST );
NOGAOST.data[1] = A_UNITE(ROGAOST,mode19,19,QOGAOST);
NVAAOSL_( '=', MOGAOST_hgap, &SOGAOST );
NOGAOST.data[2] = A_UNITE(TOGAOST,mode7,7,SOGAOST);
XOGAOST = VOGAOST ;
NOGAOST.data[3] = A_UNITE(WOGAOST,mode7,7,XOGAOST);
NOGAOST.data[4] = A_UNITE(YOGAOST,mode7,7,Message);
 /* line 341: */
CPGAOST = APGAOST ;
NOGAOST.data[5] = A_UNITE(BPGAOST,mode7,7,CPGAOST);
NVAAOSL_( '=', (LOGAOST_bgap-MOGAOST_hgap), &DPGAOST );
NOGAOST.data[6] = A_UNITE(EPGAOST,mode7,7,DPGAOST);
GPGAOST.fn.fn_global = LRAAOSL_newline;
GPGAOST.nonlocals = A68_NIL;
NOGAOST.data[7] = A_UNITE(FPGAOST,mode12,12,GPGAOST);
 /* line 342: */
 /* line 343: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(HPGAOST,NOGAOST,8,A68_52 ));
} 
} 
A_PROC_EXIT(banner);
return;
} 
#undef NL

A68_VOID  JPGAOST_io_fault(A68_97  Msg)
{ 
A68_BOOL  KPGAOST;  /* optbool result */
A68_BOOL * LPGAOST;  /* YIELD */
A68_VC  MPGAOST;  /* avoid structure result */
A68_46  NPGAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_98  OPGAOST;  /* avoid structure result */
A68_98  PPGAOST;  /* avoid structure result */
A_PROC_ENTRY(io_fault);
 /* line 347: */
 /* line 348: */
 /* line 349: */
if ( !GIBAOST_continue_on_error() )
{ 
 /* line 351: */
KPGAOST = ((*(&((*(&((&NJGAOST_iostate)->Infile)))->Number)))>0);
if ( KPGAOST )
{KPGAOST = !(*(&((*(&((&NJGAOST_iostate)->Infile)))->Suspended)));
}
if ( KPGAOST )
{ 
LPGAOST = (&((*(&((&NJGAOST_iostate)->Infile)))->Suspended)) ;
(*LPGAOST) = A68_TRUE;
 /* line 352: */
 /* line 353: */
 /* line 354: */
 /* line 355: */
SIBAOST_testmode_file_name( (*(&((*(&((&NJGAOST_iostate)->Infile)))->File))), &MPGAOST );
FFBAOST_io_msg( 8, &OPGAOST );
A_CALLPROC(Msg,(OPGAOST, A_HVEC(NPGAOST,MPGAOST,A68_VC )),(OPGAOST, A_HVEC(NPGAOST,MPGAOST,A68_VC ),(Msg).nonlocals));
} 
 /* line 356: */
 /* line 357: */
if ( !FIAAOST_interactive() )
{ 
 /* line 358: */
 /* line 359: */
FFBAOST_io_msg( 9, &PPGAOST );
A_CALLPROC(Msg,(PPGAOST, VJAAOSI_nullmsg),(PPGAOST, VJAAOSI_nullmsg,(Msg).nonlocals));
} 
} 
A_PROC_EXIT(io_fault);
return;
} 
#undef NL

A68_INT  QPGAOST_current_width(void)
{ 
A68_INT  RPGAOST;  /* clause result */
A_PROC_ENTRY(current_width);
RPGAOST = (*(&((&NJGAOST_iostate)->Width)));
A_PROC_EXIT(current_width);
return( RPGAOST );
} 
#undef NL

A68_VOID  TPGAOST_io_clearinputs(A68_97  Msg)
{ 
A68_98  UPGAOST;  /* avoid structure result */
A68_92 * VPGAOST_old;
A68_211 ** WPGAOST;  /* YIELD */
A68_VC  XPGAOST;  /* avoid structure result */
A68_46  YPGAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_98  ZPGAOST;  /* avoid structure result */
A_PROC_ENTRY(io_clearinputs);
 /* line 370: */
 /* line 371: */
if ( ((*(&((*(&((&NJGAOST_iostate)->Infile)))->Number)))==0) )
{ 
 /* line 372: */
FFBAOST_io_msg( 10, &UPGAOST );
A_CALLPROC(Msg,(UPGAOST, VJAAOSI_nullmsg),(UPGAOST, VJAAOSI_nullmsg,(Msg).nonlocals));
} 
else
{ 
for ( ;; )
{ 
 /* line 373: */
if ( !(((*(&((*(&((&NJGAOST_iostate)->Infile)))->Number)))>0)) ) break;
VPGAOST_old = (*(&((*(&((&NJGAOST_iostate)->Infile)))->File)));
 /* line 374: */
WPGAOST = (&((&NJGAOST_iostate)->Infile)) ;
(*WPGAOST) = (*(&((*(&((&NJGAOST_iostate)->Infile)))->Previous)));
 /* line 375: */
 /* line 376: */
SIBAOST_testmode_file_name( VPGAOST_old, &XPGAOST );
FFBAOST_io_msg( 3, &ZPGAOST );
A_CALLPROC(Msg,(ZPGAOST, A_HVEC(YPGAOST,XPGAOST,A68_VC )),(ZPGAOST, A_HVEC(YPGAOST,XPGAOST,A68_VC ),(Msg).nonlocals));
 /* line 377: */
GLBAOST_reset_reader((*(*(&((*(&((&NJGAOST_iostate)->Infile)))->Reader)))));
 /* line 378: */
 /* line 379: */
XQBAOSI_close_file(VPGAOST_old, Msg);
}
 /* line 380: */
} 
A_PROC_EXIT(io_clearinputs);
return;
} 
#undef NL

A68_VOID  CQGAOST_io_input(A68_VC  Name, A68_97  Msg)
{ 
A68_92 * DQGAOST_new;
A68_211  EQGAOST;  /* collateral clause result */
A68_221  FQGAOST;  /* collateral clause result */
A68_52  IQGAOST;  /* OPERATORS - mode -> union mode */
A68_VC  JQGAOST;  /* YIELD */
A68_52  KQGAOST;  /* OPERATORS - mode -> union mode */
A68_INT  LQGAOST;  /* YIELD */
A68_52  OQGAOST;  /* OPERATORS - mode -> union mode */
A68_VC  PQGAOST;  /* YIELD */
A68_85  QQGAOST;  /* OPERATORS - istruct -> vector */
A68_VC  RQGAOST;  /* avoid structure result */
A68_31  TQGAOST_generator;   /* proc value of non-global proc */
A68_VC  YQGAOST;  /* avoid structure result */
A68_211 * ZQGAOST;  /* YIELD */
A68_211 ** ARGAOST;  /* YIELD */
A68_VC  BRGAOST;  /* avoid structure result */
A68_46  CRGAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_98  DRGAOST;  /* avoid structure result */
A_PROC_ENTRY(io_input);
 /* line 385: */
 /* line 387: */
{ 
DQGAOST_new = FQBAOSI_open_file(Name, PNBAOSI_read_access, Msg);
 /* line 388: */
 /* line 389: */
EQGAOST.File = DQGAOST_new;
EQGAOST.Suspended = A68_FALSE;
 /* line 390: */
EQGAOST.Number = ((*(&((*(&((&NJGAOST_iostate)->Infile)))->Number)))+1);
JQGAOST = HQGAOST ;
FQGAOST.data[0] = A_UNITE(IQGAOST,mode7,7,JQGAOST);
LQGAOST = ((*(&((*(&((&NJGAOST_iostate)->Infile)))->Number)))+1) ;
FQGAOST.data[1] = A_UNITE(KQGAOST,mode1,1,LQGAOST);
PQGAOST = NQGAOST ;
FQGAOST.data[2] = A_UNITE(OQGAOST,mode7,7,PQGAOST);
 /* line 391: */
UJBAOSL_oneline( A_HISVEC(QQGAOST,FQGAOST,3,A68_52 ), &RQGAOST );
EQGAOST.Name = RQGAOST;
A_CLOSURE( TQGAOST_generator, UQGAOST_generator, VQGAOST_generator );
 /* line 392: */
 /* line 393: */
A_CALLPROC(TQGAOST_generator,(A68_FALSE, &YQGAOST),(A68_FALSE, &YQGAOST,(TQGAOST_generator).nonlocals));
EQGAOST.Reader = BLBAOST_set_reader(YQGAOST, (*(&((*(&((&NJGAOST_iostate)->Standard_reader)))->Rdline))));
EQGAOST.Previous = (*(&((&NJGAOST_iostate)->Infile)));
ZQGAOST = A_HEAP(A68_211 ) ;
(*ZQGAOST) = EQGAOST ;
ARGAOST = (&((&NJGAOST_iostate)->Infile)) ;
(*ARGAOST) = ZQGAOST;
 /* line 394: */
 /* line 395: */
SIBAOST_testmode_file_name( DQGAOST_new, &BRGAOST );
FFBAOST_io_msg( 11, &DRGAOST );
A_CALLPROC(Msg,(DRGAOST, A_HVEC(CRGAOST,BRGAOST,A68_VC )),(DRGAOST, A_HVEC(CRGAOST,BRGAOST,A68_VC ),(Msg).nonlocals));
} 
A_PROC_EXIT(io_input);
return;
} 
#undef NL

A68_VOID  FRGAOST_io_removefile(A68_97  Msg)
{ 
A68_98  GRGAOST;  /* avoid structure result */
A68_BOOL  HRGAOST_suspended;
A68_92 * IRGAOST_old;
A68_211 ** JRGAOST;  /* YIELD */
A68_VC  KRGAOST;  /* avoid structure result */
A68_46  LRGAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_98  MRGAOST;  /* avoid structure result */
A68_BOOL * NRGAOST;  /* YIELD */
A_PROC_ENTRY(io_removefile);
 /* line 399: */
 /* line 400: */
if ( ((*(&((*(&((&NJGAOST_iostate)->Infile)))->Number)))==0) )
{ 
 /* line 401: */
FFBAOST_io_msg( 12, &GRGAOST );
A_CALLPROC(Msg,(GRGAOST, VJAAOSI_nullmsg),(GRGAOST, VJAAOSI_nullmsg,(Msg).nonlocals));
} 
else
{ 
HRGAOST_suspended = (*(&((*(&((&NJGAOST_iostate)->Infile)))->Suspended)));
 /* line 402: */
IRGAOST_old = (*(&((*(&((&NJGAOST_iostate)->Infile)))->File)));
 /* line 403: */
JRGAOST = (&((&NJGAOST_iostate)->Infile)) ;
(*JRGAOST) = (*(&((*(&((&NJGAOST_iostate)->Infile)))->Previous)));
 /* line 404: */
GLBAOST_reset_reader((*(*(&((*(&((&NJGAOST_iostate)->Infile)))->Reader)))));
 /* line 405: */
 /* line 406: */
SIBAOST_testmode_file_name( IRGAOST_old, &KRGAOST );
FFBAOST_io_msg( 3, &MRGAOST );
A_CALLPROC(Msg,(MRGAOST, A_HVEC(LRGAOST,KRGAOST,A68_VC )),(MRGAOST, A_HVEC(LRGAOST,KRGAOST,A68_VC ),(Msg).nonlocals));
 /* line 407: */
NRGAOST = (&((*(&((&NJGAOST_iostate)->Infile)))->Suspended)) ;
(*NRGAOST) = HRGAOST_suspended;
 /* line 408: */
 /* line 409: */
XQBAOSI_close_file(IRGAOST_old, Msg);
} 
A_PROC_EXIT(io_removefile);
return;
} 
#undef NL

A68_VOID  PRGAOST_io_showinput(A68_97  Msg)
{ 
A68_BOOL * QRGAOST;  /* YIELD */
A_PROC_ENTRY(io_showinput);
 /* line 413: */
QRGAOST = (&((&NJGAOST_iostate)->Seeing_in)) ;
(*QRGAOST) = A68_TRUE;
A_PROC_EXIT(io_showinput);
return;
} 
#undef NL

A68_VOID  SRGAOST_io_dontshowinput(A68_97  Msg)
{ 
A68_BOOL * TRGAOST;  /* YIELD */
A_PROC_ENTRY(io_dontshowinput);
 /* line 415: */
TRGAOST = (&((&NJGAOST_iostate)->Seeing_in)) ;
(*TRGAOST) = A68_FALSE;
A_PROC_EXIT(io_dontshowinput);
return;
} 
#undef NL

A68_VOID  VRGAOST_io_showoutput(A68_97  Msg)
{ 
A68_BOOL * WRGAOST;  /* YIELD */
A_PROC_ENTRY(io_showoutput);
 /* line 417: */
WRGAOST = (&((&NJGAOST_iostate)->Seeing_out)) ;
(*WRGAOST) = A68_TRUE;
A_PROC_EXIT(io_showoutput);
return;
} 
#undef NL

A68_VOID  YRGAOST_io_dontshowoutput(A68_97  Msg)
{ 
A68_BOOL * ZRGAOST;  /* YIELD */
A_PROC_ENTRY(io_dontshowoutput);
 /* line 419: */
ZRGAOST = (&((&NJGAOST_iostate)->Seeing_out)) ;
(*ZRGAOST) = A68_FALSE;
A_PROC_EXIT(io_dontshowoutput);
return;
} 
#undef NL

A68_VOID  BSGAOST_io_showtime(A68_97  Msg)
{ 
A68_BOOL * CSGAOST;  /* YIELD */
A_PROC_ENTRY(io_showtime);
 /* line 421: */
CSGAOST = (&((&NJGAOST_iostate)->Clock)) ;
(*CSGAOST) = A68_TRUE;
A_PROC_EXIT(io_showtime);
return;
} 
#undef NL

A68_VOID  ESGAOST_io_dontshowtime(A68_97  Msg)
{ 
A68_BOOL * FSGAOST;  /* YIELD */
A_PROC_ENTRY(io_dontshowtime);
 /* line 423: */
FSGAOST = (&((&NJGAOST_iostate)->Clock)) ;
(*FSGAOST) = A68_FALSE;
A_PROC_EXIT(io_dontshowtime);
return;
} 
#undef NL

A68_VOID  HSGAOST_io_printtime(A68_97  Msg)
{ 
A68_VC  ISGAOST;  /* avoid structure result */
A68_46  JSGAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_98  KSGAOST;  /* avoid structure result */
A_PROC_ENTRY(io_printtime);
 /* line 427: */
GEDAOST_time_str(  &ISGAOST );
FFBAOST_io_msg( 13, &KSGAOST );
A_CALLPROC(Msg,(KSGAOST, A_HVEC(JSGAOST,ISGAOST,A68_VC )),(KSGAOST, A_HVEC(JSGAOST,ISGAOST,A68_VC ),(Msg).nonlocals));
A_PROC_EXIT(io_printtime);
return;
} 
#undef NL

A68_VOID  NSGAOST_io_message(A68_VC  Text, A68_97  Msg)
{ 
A68_46  OSGAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_98  PSGAOST;  /* avoid structure result */
A_PROC_ENTRY(io_message);
 /* line 430: */
FFBAOST_io_msg( 14, &PSGAOST );
A_CALLPROC(Msg,(PSGAOST, A_HVEC(OSGAOST,Text,A68_VC )),(PSGAOST, A_HVEC(OSGAOST,Text,A68_VC ),(Msg).nonlocals));
A_PROC_EXIT(io_message);
return;
} 
#undef NL

A68_VOID  SSGAOST_io_comment(A68_VC  Text, A68_97  Msg)
{ 
A68_46  TSGAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_98  USGAOST;  /* avoid structure result */
A_PROC_ENTRY(io_comment);
 /* line 433: */
FFBAOST_io_msg( 15, &USGAOST );
A_CALLPROC(Msg,(USGAOST, A_HVEC(TSGAOST,Text,A68_VC )),(USGAOST, A_HVEC(TSGAOST,Text,A68_VC ),(Msg).nonlocals));
A_PROC_EXIT(io_comment);
return;
} 
#undef NL

A68_VOID  WSGAOST_io_offline(A68_97  Msg)
{ 
A68_98  XSGAOST;  /* avoid structure result */
A68_98  YSGAOST;  /* avoid structure result */
A68_BOOL * ZSGAOST;  /* YIELD */
A_PROC_ENTRY(io_offline);
 /* line 438: */
 /* line 439: */
if ( ((*(&((*(&((&NJGAOST_iostate)->Infile)))->Number)))==0) )
{ 
 /* line 440: */
 /* line 441: */
FFBAOST_io_msg( 16, &XSGAOST );
A_CALLPROC(Msg,(XSGAOST, VJAAOSI_nullmsg),(XSGAOST, VJAAOSI_nullmsg,(Msg).nonlocals));
} 
else
{ 
if ( !(*(&((*(&((&NJGAOST_iostate)->Infile)))->Suspended))) )
{ 
 /* line 442: */
FFBAOST_io_msg( 17, &YSGAOST );
A_CALLPROC(Msg,(YSGAOST, VJAAOSI_nullmsg),(YSGAOST, VJAAOSI_nullmsg,(Msg).nonlocals));
} 
else
{ 
 /* line 443: */
ZSGAOST = (&((*(&((&NJGAOST_iostate)->Infile)))->Suspended)) ;
(*ZSGAOST) = A68_FALSE;
} 
} 
A_PROC_EXIT(io_offline);
return;
} 
#undef NL

A68_VOID  BTGAOST_io_online(A68_97  Msg)
{ 
A68_BOOL  CTGAOST;  /* optbool result */
A68_98  DTGAOST;  /* avoid structure result */
A68_BOOL * ETGAOST;  /* YIELD */
A68_98  FTGAOST;  /* avoid structure result */
A_PROC_ENTRY(io_online);
 /* line 447: */
 /* line 448: */
CTGAOST = ((*(&((*(&((&NJGAOST_iostate)->Infile)))->Number)))==0);
if ( ! CTGAOST )
{CTGAOST = (*(&((*(&((&NJGAOST_iostate)->Infile)))->Suspended)));
}
if ( CTGAOST )
{ 
 /* line 449: */
 /* line 450: */
FFBAOST_io_msg( 18, &DTGAOST );
A_CALLPROC(Msg,(DTGAOST, VJAAOSI_nullmsg),(DTGAOST, VJAAOSI_nullmsg,(Msg).nonlocals));
} 
else
{ 
ETGAOST = (&((*(&((&NJGAOST_iostate)->Infile)))->Suspended)) ;
(*ETGAOST) = A68_TRUE;
 /* line 451: */
 /* line 452: */
 /* line 453: */
FFBAOST_io_msg( 19, &FTGAOST );
A_CALLPROC(Msg,(FTGAOST, VJAAOSI_nullmsg),(FTGAOST, VJAAOSI_nullmsg,(Msg).nonlocals));
} 
A_PROC_EXIT(io_online);
return;
} 
#undef NL

A68_VOID  ITGAOST_io_log(A68_VC  Name, A68_97  Msg)
{ 
A68_98  JTGAOST;  /* avoid structure result */
A68_92 ** KTGAOST;  /* YIELD */
A68_BOOL * LTGAOST;  /* YIELD */
A68_225  MTGAOST;  /* collateral clause result */
A68_VC  NTGAOST;  /* avoid structure result */
A68_VC  OTGAOST;  /* avoid structure result */
A68_VC  PTGAOST;  /* avoid structure result */
A68_46  QTGAOST;  /* OPERATORS - istruct -> vector */
A68_98  RTGAOST;  /* avoid structure result */
A_PROC_ENTRY(io_log);
 /* line 457: */
 /* line 458: */
if ( (*(&((&NJGAOST_iostate)->Logging))) )
{ 
 /* line 459: */
 /* line 460: */
FFBAOST_io_msg( 20, &JTGAOST );
A_CALLPROC(Msg,(JTGAOST, VJAAOSI_nullmsg),(JTGAOST, VJAAOSI_nullmsg,(Msg).nonlocals));
} 
else
{ 
KTGAOST = (&((&NJGAOST_iostate)->Logfile)) ;
(*KTGAOST) = FQBAOSI_open_file(Name, TNBAOSI_write_access, Msg);
 /* line 461: */
LTGAOST = (&((&NJGAOST_iostate)->Logging)) ;
(*LTGAOST) = A68_TRUE;
 /* line 462: */
 /* line 463: */
UEAAOST_facility(  &NTGAOST );
MTGAOST.data[0] = NTGAOST;
 /* line 464: */
SIBAOST_testmode_file_name( (*(&((&NJGAOST_iostate)->Logfile))), &OTGAOST );
MTGAOST.data[1] = OTGAOST;
QDDAOST_date_time( DZCAOST_seconds(), &PTGAOST );
MTGAOST.data[2] = PTGAOST;
FFBAOST_io_msg( 21, &RTGAOST );
A_CALLPROC(Msg,(RTGAOST, A_HISVEC(QTGAOST,MTGAOST,3,A68_VC )),(RTGAOST, A_HISVEC(QTGAOST,MTGAOST,3,A68_VC ),(Msg).nonlocals));
 /* line 465: */
 /* line 466: */
LRAAOSL_newline(KEAAOST_screen);
} 
A_PROC_EXIT(io_log);
return;
} 
#undef NL

A68_VOID  TTGAOST_io_dontlog(A68_97  Msg)
{ 
A68_BOOL * UTGAOST;  /* YIELD */
A68_VC  VTGAOST;  /* avoid structure result */
A68_VC  WTGAOST_name;
A68_46  XTGAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_98  YTGAOST;  /* avoid structure result */
A68_98  ZTGAOST;  /* avoid structure result */
A_PROC_ENTRY(io_dontlog);
 /* line 470: */
 /* line 471: */
if ( (*(&((&NJGAOST_iostate)->Logging))) )
{ 
UTGAOST = (&((&NJGAOST_iostate)->Logging)) ;
(*UTGAOST) = A68_FALSE;
 /* line 472: */
SIBAOST_testmode_file_name( (*(&((&NJGAOST_iostate)->Logfile))), &VTGAOST );
WTGAOST_name = VTGAOST;
 /* line 473: */
XQBAOSI_close_file((*(&((&NJGAOST_iostate)->Logfile))), Msg);
 /* line 474: */
 /* line 475: */
FFBAOST_io_msg( 22, &YTGAOST );
A_CALLPROC(Msg,(YTGAOST, A_HVEC(XTGAOST,WTGAOST_name,A68_VC )),(YTGAOST, A_HVEC(XTGAOST,WTGAOST_name,A68_VC ),(Msg).nonlocals));
} 
else
{ 
 /* line 476: */
FFBAOST_io_msg( 23, &ZTGAOST );
A_CALLPROC(Msg,(ZTGAOST, VJAAOSI_nullmsg),(ZTGAOST, VJAAOSI_nullmsg,(Msg).nonlocals));
} 
A_PROC_EXIT(io_dontlog);
return;
} 
#undef NL

A68_VOID  CUGAOST_io_output(A68_VC  Name, A68_97  Msg)
{ 
A68_98  DUGAOST;  /* avoid structure result */
A68_92 ** EUGAOST;  /* YIELD */
A68_BOOL * FUGAOST;  /* YIELD */
A68_225  GUGAOST;  /* collateral clause result */
A68_VC  HUGAOST;  /* avoid structure result */
A68_VC  IUGAOST;  /* avoid structure result */
A68_VC  JUGAOST;  /* avoid structure result */
A68_46  KUGAOST;  /* OPERATORS - istruct -> vector */
A68_98  LUGAOST;  /* avoid structure result */
A_PROC_ENTRY(io_output);
 /* line 481: */
 /* line 482: */
if ( (*(&((&NJGAOST_iostate)->Outputing))) )
{ 
 /* line 483: */
 /* line 484: */
FFBAOST_io_msg( 24, &DUGAOST );
A_CALLPROC(Msg,(DUGAOST, VJAAOSI_nullmsg),(DUGAOST, VJAAOSI_nullmsg,(Msg).nonlocals));
} 
else
{ 
EUGAOST = (&((&NJGAOST_iostate)->Outfile)) ;
(*EUGAOST) = FQBAOSI_open_file(Name, TNBAOSI_write_access, Msg);
 /* line 485: */
FUGAOST = (&((&NJGAOST_iostate)->Outputing)) ;
(*FUGAOST) = A68_TRUE;
 /* line 486: */
 /* line 487: */
UEAAOST_facility(  &HUGAOST );
GUGAOST.data[0] = HUGAOST;
 /* line 488: */
SIBAOST_testmode_file_name( (*(&((&NJGAOST_iostate)->Outfile))), &IUGAOST );
GUGAOST.data[1] = IUGAOST;
QDDAOST_date_time( DZCAOST_seconds(), &JUGAOST );
GUGAOST.data[2] = JUGAOST;
FFBAOST_io_msg( 25, &LUGAOST );
A_CALLPROC(Msg,(LUGAOST, A_HISVEC(KUGAOST,GUGAOST,3,A68_VC )),(LUGAOST, A_HISVEC(KUGAOST,GUGAOST,3,A68_VC ),(Msg).nonlocals));
 /* line 489: */
 /* line 490: */
LRAAOSL_newline(LEAAOST_out);
} 
A_PROC_EXIT(io_output);
return;
} 
#undef NL

A68_VOID  NUGAOST_io_dontoutput(A68_97  Msg)
{ 
A68_BOOL * OUGAOST;  /* YIELD */
A68_VC  PUGAOST;  /* avoid structure result */
A68_VC  QUGAOST_name;
A68_46  RUGAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_98  SUGAOST;  /* avoid structure result */
A68_98  TUGAOST;  /* avoid structure result */
A_PROC_ENTRY(io_dontoutput);
 /* line 494: */
 /* line 495: */
if ( (*(&((&NJGAOST_iostate)->Outputing))) )
{ 
OUGAOST = (&((&NJGAOST_iostate)->Outputing)) ;
(*OUGAOST) = A68_FALSE;
 /* line 496: */
SIBAOST_testmode_file_name( (*(&((&NJGAOST_iostate)->Outfile))), &PUGAOST );
QUGAOST_name = PUGAOST;
 /* line 497: */
XQBAOSI_close_file((*(&((&NJGAOST_iostate)->Outfile))), Msg);
 /* line 498: */
 /* line 499: */
FFBAOST_io_msg( 26, &SUGAOST );
A_CALLPROC(Msg,(SUGAOST, A_HVEC(RUGAOST,QUGAOST_name,A68_VC )),(SUGAOST, A_HVEC(RUGAOST,QUGAOST_name,A68_VC ),(Msg).nonlocals));
} 
else
{ 
 /* line 500: */
FFBAOST_io_msg( 27, &TUGAOST );
A_CALLPROC(Msg,(TUGAOST, VJAAOSI_nullmsg),(TUGAOST, VJAAOSI_nullmsg,(Msg).nonlocals));
} 
A_PROC_EXIT(io_dontoutput);
return;
} 
#undef NL

A68_VOID  WUGAOST_io_page(A68_INT  L, A68_97  Msg)
{ 
A68_INT * XUGAOST;  /* YIELD */
A68_98  YUGAOST;  /* avoid structure result */
A68_INT * ZUGAOST;  /* YIELD */
A68_BOOL * AVGAOST;  /* YIELD */
A68_VC  BVGAOST;  /* avoid structure result */
A68_46  CVGAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_98  DVGAOST;  /* avoid structure result */
A_PROC_ENTRY(io_page);
 /* line 504: */
 /* line 505: */
{ 
 /* line 506: */
if ( (L==0) )
{ 
 /* line 507: */
XUGAOST = (&((&NJGAOST_iostate)->Page_length)) ;
(*XUGAOST) = BJGAOST_default_length;
} 
else
{ 
 /* line 508: */
if ( (L<CJGAOST_min_page_length) )
{ 
 /* line 509: */
FFBAOST_io_msg( 28, &YUGAOST );
A_CALLPROC(Msg,(YUGAOST, VJAAOSI_nullmsg),(YUGAOST, VJAAOSI_nullmsg,(Msg).nonlocals));
} 
else
{ 
 /* line 510: */
ZUGAOST = (&((&NJGAOST_iostate)->Page_length)) ;
(*ZUGAOST) = L;
} 
} 
 /* line 511: */
AVGAOST = (&((&NJGAOST_iostate)->Paging)) ;
(*AVGAOST) = A68_TRUE;
 /* line 512: */
 /* line 513: */
 /* line 514: */
FCAAOSI_intchars( (*(&((&NJGAOST_iostate)->Page_length))), &BVGAOST );
FFBAOST_io_msg( 29, &DVGAOST );
A_CALLPROC(Msg,(DVGAOST, A_HVEC(CVGAOST,BVGAOST,A68_VC )),(DVGAOST, A_HVEC(CVGAOST,BVGAOST,A68_VC ),(Msg).nonlocals));
} 
A_PROC_EXIT(io_page);
return;
} 
#undef NL

A68_VOID  FVGAOST_io_dontpage(A68_97  Msg)
{ 
A68_BOOL * GVGAOST;  /* YIELD */
A_PROC_ENTRY(io_dontpage);
GVGAOST = (&((&NJGAOST_iostate)->Paging)) ;
(*GVGAOST) = A68_FALSE;
A_PROC_EXIT(io_dontpage);
return;
} 
#undef NL

A68_VOID  JVGAOST_io_setwidth(A68_INT  W, A68_97  Msg)
{ 
A68_INT * KVGAOST;  /* YIELD */
A68_INT * LVGAOST;  /* YIELD */
A68_INT * MVGAOST;  /* YIELD */
A68_INT * NVGAOST;  /* YIELD */
A68_98  OVGAOST;  /* avoid structure result */
A68_31  QVGAOST_generator;   /* proc value of non-global proc */
A68_VC  VVGAOST;  /* avoid structure result */
A68_VC * WVGAOST;  /* YIELD */
A68_31  YVGAOST_generator;   /* proc value of non-global proc */
A68_VC  DWGAOST;  /* avoid structure result */
A68_VC * EWGAOST;  /* YIELD */
A68_31  GWGAOST_generator;   /* proc value of non-global proc */
A68_VC  LWGAOST;  /* avoid structure result */
A68_VC * MWGAOST;  /* YIELD */
A68_INT * NWGAOST;  /* YIELD */
A68_INT * OWGAOST;  /* YIELD */
A68_INT * PWGAOST;  /* YIELD */
A68_INT * QWGAOST;  /* YIELD */
A68_VC  RWGAOST;  /* avoid structure result */
A68_46  SWGAOST;  /* OPERATORS - scalar -> [] or VEC[] */
A68_98  TWGAOST;  /* avoid structure result */
A_PROC_ENTRY(io_setwidth);
 /* line 521: */
 /* line 522: */
{ 
 /* line 523: */
if ( (W==0) )
{ 
 /* line 525: */
KVGAOST = (&(MEAAOST_err->Width)) ;
LVGAOST = (&(LEAAOST_out->Width)) ;
MVGAOST = (&(KEAAOST_screen->Width)) ;
NVGAOST = (&((&NJGAOST_iostate)->Width)) ;
(*NVGAOST) = (*MVGAOST) = (*LVGAOST) = (*KVGAOST) = ZIGAOST_default_width;
} 
else
{ 
 /* line 526: */
if ( (W<AJGAOST_min_width) )
{ 
 /* line 529: */
FFBAOST_io_msg( 30, &OVGAOST );
A_CALLPROC(Msg,(OVGAOST, VJAAOSI_nullmsg),(OVGAOST, VJAAOSI_nullmsg,(Msg).nonlocals));
} 
else
{ 
 /* line 530: */
if ( (W>(*(&(KEAAOST_screen->Buffer))).upb) )
{ 
A_CLOSURE( QVGAOST_generator, RVGAOST_generator, SVGAOST_generator );
(( SVGAOST_generator * ) ( QVGAOST_generator.nonlocals )) -> W = W;
A_CALLPROC(QVGAOST_generator,(A68_FALSE, &VVGAOST),(A68_FALSE, &VVGAOST,(QVGAOST_generator).nonlocals));
WVGAOST = (&(KEAAOST_screen->Buffer)) ;
(*WVGAOST) = VVGAOST;
 /* line 531: */
A_CLOSURE( YVGAOST_generator, ZVGAOST_generator, AWGAOST_generator );
(( AWGAOST_generator * ) ( YVGAOST_generator.nonlocals )) -> W = W;
A_CALLPROC(YVGAOST_generator,(A68_FALSE, &DWGAOST),(A68_FALSE, &DWGAOST,(YVGAOST_generator).nonlocals));
EWGAOST = (&(LEAAOST_out->Buffer)) ;
(*EWGAOST) = DWGAOST;
 /* line 532: */
A_CLOSURE( GWGAOST_generator, HWGAOST_generator, IWGAOST_generator );
(( IWGAOST_generator * ) ( GWGAOST_generator.nonlocals )) -> W = W;
A_CALLPROC(GWGAOST_generator,(A68_FALSE, &LWGAOST),(A68_FALSE, &LWGAOST,(GWGAOST_generator).nonlocals));
MWGAOST = (&(MEAAOST_err->Buffer)) ;
(*MWGAOST) = LWGAOST;
} 
 /* line 534: */
 /* line 536: */
NWGAOST = (&(MEAAOST_err->Width)) ;
OWGAOST = (&(LEAAOST_out->Width)) ;
PWGAOST = (&(KEAAOST_screen->Width)) ;
QWGAOST = (&((&NJGAOST_iostate)->Width)) ;
(*QWGAOST) = (*PWGAOST) = (*OWGAOST) = (*NWGAOST) = W;
} 
} 
 /* line 537: */
 /* line 538: */
 /* line 539: */
FCAAOSI_intchars( (*(&((&NJGAOST_iostate)->Width))), &RWGAOST );
FFBAOST_io_msg( 32, &TWGAOST );
A_CALLPROC(Msg,(TWGAOST, A_HVEC(SWGAOST,RWGAOST,A68_VC )),(TWGAOST, A_HVEC(SWGAOST,RWGAOST,A68_VC ),(Msg).nonlocals));
} 
A_PROC_EXIT(io_setwidth);
return;
} 
#undef NL

A_STATIC A68_VOID  VWGAOST_generator(A68_BOOL  UWGAOST_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  WWGAOST;  /* clause result */
A68_VC  XWGAOST;  /* OPERATORS - dynamic generator */
{ 
XWGAOST.upb = (ZIGAOST_default_width+1) ;
( UWGAOST_anonymous? A_VLOC(A68_CHAR ,XWGAOST): A_VHEAP(A68_CHAR ,XWGAOST) );
WWGAOST = XWGAOST;
} 
*ReturnedValue = (WWGAOST);
return;
} 
#undef NL

A68_VOID  FXGAOST_initialise_ioprocs(A68_159  Get_prompt)
{ 
A68_182  GXGAOST;  /* procedure value */
A68_181 * HXGAOST_rd;
A68_88  IXGAOST;  /* OPERATORS - mode -> union mode */
A68_36  JXGAOST;  /* YIELD */
A68_36  KXGAOST;  /* procedure value */
A68_87  LXGAOST;  /* OPERATORS - mode -> union mode */
A68_88  MXGAOST;  /* OPERATORS - mode -> union mode */
A68_36  NXGAOST;  /* YIELD */
A68_36  OXGAOST;  /* procedure value */
A68_87  PXGAOST;  /* OPERATORS - mode -> union mode */
A68_88  QXGAOST;  /* OPERATORS - mode -> union mode */
A68_36  RXGAOST;  /* YIELD */
A68_36  SXGAOST;  /* procedure value */
A68_87  TXGAOST;  /* OPERATORS - mode -> union mode */
A68_212  UXGAOST;  /* collateral clause result */
A68_211  VXGAOST;  /* collateral clause result */
A68_VC  YXGAOST;  /* avoid structure result */
A68_211 * ZXGAOST;  /* YIELD */
A_PROC_ENTRY(initialise_ioprocs);
 /* line 547: */
 /* line 548: */
{ 
GXGAOST.fn.fn_global = KLGAOST_getline;
GXGAOST.nonlocals = A68_NIL;
HXGAOST_rd = BLBAOST_set_reader(LJGAOST_in_buffer, GXGAOST);
 /* line 549: */
KXGAOST.fn.fn_global = PKGAOST_write_screen;
KXGAOST.nonlocals = A68_NIL;
JXGAOST = KXGAOST ;
KEAAOST_screen = XPAAOSL_make_channel(A_UNITE(LXGAOST,mode2,2,YWGAOST_screen_buffer), A_UNITE(IXGAOST,mode1,1,JXGAOST));
 /* line 550: */
OXGAOST.fn.fn_global = CLGAOST_write_out;
OXGAOST.nonlocals = A68_NIL;
NXGAOST = OXGAOST ;
LEAAOST_out = XPAAOSL_make_channel(A_UNITE(PXGAOST,mode2,2,AXGAOST_out_buffer), A_UNITE(MXGAOST,mode1,1,NXGAOST));
 /* line 551: */
SXGAOST.fn.fn_global = VKGAOST_write_err;
SXGAOST.nonlocals = A68_NIL;
RXGAOST = SXGAOST ;
MEAAOST_err = XPAAOSL_make_channel(A_UNITE(TXGAOST,mode2,2,CXGAOST_err_buffer), A_UNITE(QXGAOST,mode1,1,RXGAOST));
 /* line 553: */
UXGAOST.Logging = A68_FALSE;
UXGAOST.Outputing = A68_FALSE;
UXGAOST.Seeing_in = A68_FALSE;
UXGAOST.Seeing_out = A68_FALSE;
UXGAOST.Paging = A68_FALSE;
UXGAOST.Clock = A68_FALSE;
 /* line 554: */
UXGAOST.Screen_output = A68_TRUE;
UXGAOST.Width = ZIGAOST_default_width;
UXGAOST.Page_count = 0;
UXGAOST.Page_length = BJGAOST_default_length;
UXGAOST.Eof_count = 0;
 /* line 555: */
UXGAOST.Standard_reader = HXGAOST_rd;
VXGAOST.File = INBAOSI_stdin;
VXGAOST.Suspended = A68_FALSE;
VXGAOST.Number = 0;
ZAAAOSI_makervc( XXGAOST, &YXGAOST );
VXGAOST.Name = YXGAOST;
VXGAOST.Reader = HXGAOST_rd;
VXGAOST.Previous = (A68_211 *)A68_NIL;
 /* line 556: */
ZXGAOST = A_HEAP(A68_211 ) ;
(*ZXGAOST) = VXGAOST ;
UXGAOST.Infile = ZXGAOST;
UXGAOST.Prompt = Get_prompt;
 /* line 557: */
UXGAOST.Logfile = HNBAOSI_nil_file;
 /* line 558: */
UXGAOST.Outfile = HNBAOSI_nil_file;
 /* line 562: */
NJGAOST_iostate = UXGAOST;
} 
A_PROC_EXIT(initialise_ioprocs);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void TIGAOST(void)   /* initialise DECS ioprocs */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/ioprocs.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/commandreader.m","./mfiles/iomessages.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","./mfiles/basics.m","./mfiles/testmode.m","./mfiles/osinterface.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_VC  MJGAOST;  /* avoid structure result */
A68_VC  ZWGAOST;  /* avoid structure result */
A68_VC  BXGAOST;  /* avoid structure result */
A68_VC  DXGAOST;  /* avoid structure result */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
YIBAOST();   /* USE commandreader */
XBBAOST();   /* USE iomessages */
JFAAOSI();   /* USE messageproc */
JSCAOST();   /* USE basics */
QFBAOST();   /* USE testmode */
PCAAOST();   /* USE osinterface */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/ostools/assoc/./a68files/ioprocs.a68";
A_config.translation_time = "Tue Apr  4 09:50:11 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "SIGAOST (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 09:50:11 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS ioprocs);
UEAALIB_a68config(LGAALIB_configinfo, XIGAOST);
 /* line 107: */
 /* line 116: */
 /* line 125: */
 /* line 126: */
 /* line 128: */
 /* line 129: */
 /* line 130: */
 /* line 131: */
 /* line 133: */
GJGAOST_stars = FJGAOST;
 /* line 137: */
IJGAOST_generator( A68_TRUE, &MJGAOST );
LJGAOST_in_buffer = MJGAOST;
 /* line 141: */
 /* line 142: */
 /* line 143: */
 /* line 148: */
 /* line 157: */
 /* line 167: */
 /* line 168: */
 /* line 169: */
 /* line 177: */
 /* line 192: */
 /* line 207: */
 /* line 223: */
 /* line 328: */
 /* line 346: */
 /* line 362: */
 /* line 369: */
 /* line 384: */
 /* line 398: */
 /* line 412: */
 /* line 414: */
 /* line 416: */
 /* line 418: */
 /* line 420: */
 /* line 422: */
 /* line 426: */
 /* line 429: */
 /* line 432: */
 /* line 437: */
 /* line 446: */
 /* line 456: */
 /* line 469: */
 /* line 480: */
 /* line 493: */
 /* line 503: */
 /* line 517: */
 /* line 520: */
 /* line 544: */
VWGAOST_generator( A68_TRUE, &ZWGAOST );
YWGAOST_screen_buffer = ZWGAOST;
VWGAOST_generator( A68_TRUE, &BXGAOST );
AXGAOST_out_buffer = BXGAOST;
VWGAOST_generator( A68_TRUE, &DXGAOST );
CXGAOST_err_buffer = DXGAOST;
 /* line 546: */
 /* line 569: */
A_PROC_EXIT(DECS ioprocs);
} 
#undef NL
/* end of translation of ./a68files/ioprocs.a68 */
