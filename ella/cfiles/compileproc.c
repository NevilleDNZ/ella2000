
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
/* UNAME:HHPAELA */
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
struct A68t160 ;
struct A68t161 ;
struct A68t162 ;
struct A68t163 ;
struct A68t164 ;

A_PROCEDURE(A68_VOID ,A68t159,(struct A68t160 ,A68_BOOL ,struct A68t161 ,struct A68t162 ,struct A68t117 ,struct A68t156 ,struct A68t163 ,struct A68t164 ),(struct A68t160 ,A68_BOOL ,struct A68t161 ,struct A68t162 ,struct A68t117 ,struct A68t156 ,struct A68t163 ,struct A68t164 ,void *));
typedef struct A68t159  A68_159 ;    /* PROC(MODE160,BOOL,MODE161,MODE162,MODE117,MODE156,REF MODE163,MODE164) VOID */
struct A68t198 ;

A_PROCEDURE(A68_VOID ,A68t160,(A68_VC ,struct A68t198 *),(A68_VC ,struct A68t198 *,void *));
typedef struct A68t160  A68_160 ;    /* PROC(REF MODE26) MODE198 */
struct A68t244 ;

A_PROCEDURE(struct A68t244 *,A68t161,(struct A68t198 ),(struct A68t198 ,void *));
typedef struct A68t161  A68_161 ;    /* PROC(MODE198) REF MODE244 */
struct A68t166 ;
struct A68t167 ;

A_PROCEDURE(struct A68t166 *,A68t162,(struct A68t167 *),(struct A68t167 *,void *));
typedef struct A68t162  A68_162 ;    /* PROC(REF MODE167) REF MODE166 */
A_ROW(struct A68t165 ,A68t163,1);
typedef struct A68t163  A68_163 ;    /* [] MODE165 */
struct A68t165{
A68_INT  Type;
A_PAD_INT(PAD_34)
A68_INT  Value;
A_PAD_INT(PAD_35)
};
typedef struct A68t165  A68_165 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t164,(A68_INT ,struct A68t46 ),(A68_INT ,struct A68t46 ,void *));
typedef struct A68t164  A68_164 ;    /* PROC(INT,MODE46) VOID */
struct A68t166{
struct A68t167 * Fndec;
A68_BOOL  Declaration;
A_PAD_BOOL(PAD_36)
struct A68t166 * Rest;
};
typedef struct A68t166  A68_166 ;    /* STRUCT(REF MODE167,BOOL,REF MODE166)  */
struct A68t259{
A68_INT  Anull;
A_PAD_INT(PAD_37)
};
typedef struct A68t259  A68_259 ;    /* STRUCT(INT)  */
struct A68t182{
A68_INT  Flt;
A_PAD_INT(PAD_38)
};
typedef struct A68t182  A68_182 ;    /* STRUCT(INT)  */
struct A68t170 { A68_INT mode; union {
struct A68t254 * mode1;
struct A68t255 * mode2;
struct A68t256 * mode3;
struct A68t257 * mode4;
struct A68t258 * mode5;
struct A68t259  mode6;
struct A68t182  mode7;
} data; };
typedef struct A68t170  A68_170 ;    /* UNION(REF MODE254,REF MODE255,REF MODE256,REF MODE257,REF MODE258,MODE259,MODE182)  */
struct A68t177{
A68_INT  Tnull;
A_PAD_INT(PAD_39)
};
typedef struct A68t177  A68_177 ;    /* STRUCT(INT)  */
struct A68t183{
A68_INT  Unset;
A_PAD_INT(PAD_40)
};
typedef struct A68t183  A68_183 ;    /* STRUCT(INT)  */
struct A68t184{
A68_INT  Tvoid;
A_PAD_INT(PAD_41)
};
typedef struct A68t184  A68_184 ;    /* STRUCT(INT)  */
struct A68t172 { A68_INT mode; union {
struct A68t173 * mode1;
struct A68t174 * mode2;
struct A68t175 * mode3;
struct A68t176 * mode4;
struct A68t177  mode5;
struct A68t178 * mode6;
struct A68t179 * mode7;
struct A68t180 * mode8;
struct A68t181 * mode9;
struct A68t182  mode10;
struct A68t183  mode11;
struct A68t184  mode12;
} data; };
typedef struct A68t172  A68_172 ;    /* UNION(REF MODE173,REF MODE174,REF MODE175,REF MODE176,MODE177,REF MODE178,REF MODE179,REF MODE180,REF MODE181,MODE182,MODE183,MODE184)  */
struct A68t167{
struct A68t168 * Fninfo;
A68_INT  Sort;
A_PAD_INT(PAD_42)
A68_INT  Fnno;
A_PAD_INT(PAD_43)
A68_BOOL  Macro;
A_PAD_BOOL(PAD_44)
A68_VC  Id;
A68_INT  Mparamno;
A_PAD_INT(PAD_45)
struct A68t169 * Mp;
struct A68t169 ** Nextmp;
struct A68t170  Attr;
struct A68t171 * Inputs;
struct A68t171 * Outputs;
struct A68t172  Param;
struct A68t172  Ans;
A68_INT  Num_names;
A_PAD_INT(PAD_46)
};
typedef struct A68t167  A68_167 ;    /* STRUCT(REF MODE168,INT,INT,BOOL,REF MODE26,INT,REF MODE169,REF REF MODE169,MODE170,REF MODE171,REF MODE171,MODE172,MODE172,INT)  */
struct A68t168{
A68_INT  Scope;
A_PAD_INT(PAD_47)
A68_INT  Vnno;
A_PAD_INT(PAD_48)
A68_INT  Status;
A_PAD_INT(PAD_49)
A68_BOOL  Text;
A_PAD_BOOL(PAD_50)
A68_BOOL  Outofdate;
A_PAD_BOOL(PAD_51)
A68_BOOL  Import;
A_PAD_BOOL(PAD_52)
A68_BOOL  Export;
A_PAD_BOOL(PAD_53)
};
typedef struct A68t168  A68_168 ;    /* STRUCT(INT,INT,INT,BOOL,BOOL,BOOL,BOOL)  */
struct A68t260 { A68_INT mode; union {
struct A68t258 * mode1;
struct A68t189 * mode2;
struct A68t176 * mode3;
struct A68t236 * mode4;
struct A68t167 * mode5;
struct A68t182  mode6;
} data; };
typedef struct A68t260  A68_260 ;    /* UNION(REF MODE258,REF MODE189,REF MODE176,REF MODE236,REF MODE167,MODE182)  */
struct A68t169{
A68_INT  Sort;
A_PAD_INT(PAD_54)
A68_INT  Mparamno;
A_PAD_INT(PAD_55)
struct A68t260  Value;
struct A68t169 * Rest;
};
typedef struct A68t169  A68_169 ;    /* STRUCT(INT,INT,MODE260,REF MODE169)  */
struct A68t171{
struct A68t172  T;
struct A68t244 * Ids;
struct A68t171 * Rest;
};
typedef struct A68t171  A68_171 ;    /* STRUCT(MODE172,REF MODE244,REF MODE171)  */
struct A68t194{
A68_INT  P;
A_PAD_INT(PAD_56)
};
typedef struct A68t194  A68_194 ;    /* STRUCT(INT)  */
struct A68t197{
A68_INT  Inull;
A_PAD_INT(PAD_57)
};
typedef struct A68t197  A68_197 ;    /* STRUCT(INT)  */
struct A68t185 { A68_INT mode; union {
A68_INT  mode1;
struct A68t186 * mode2;
struct A68t187 * mode3;
struct A68t182  mode4;
struct A68t188 * mode5;
struct A68t189 * mode6;
struct A68t190 * mode7;
struct A68t191 * mode8;
struct A68t192 * mode9;
struct A68t193 * mode10;
struct A68t194  mode11;
struct A68t195 * mode12;
struct A68t196 * mode13;
struct A68t197  mode14;
struct A68t183  mode15;
} data; };
typedef struct A68t185  A68_185 ;    /* UNION(INT,REF MODE186,REF MODE187,MODE182,REF MODE188,REF MODE189,REF MODE190,REF MODE191,REF MODE192,REF MODE193,MODE194,REF MODE195,REF MODE196,MODE197,MODE183)  */
struct A68t248{
struct A68t198 * Idinfo;
struct A68t185  Lwb;
struct A68t185  Upb;
};
typedef struct A68t248  A68_248 ;    /* STRUCT(REF MODE198,MODE185,MODE185)  */
struct A68t250{
struct A68t198 * Idinfo;
struct A68t54  Charcheck;
struct A68t251 * Charalts;
};
typedef struct A68t250  A68_250 ;    /* STRUCT(REF MODE198,REF MODE54,REF MODE251)  */
struct A68t247 { A68_INT mode; union {
struct A68t248  mode1;
struct A68t249 * mode2;
struct A68t250  mode3;
} data; };
typedef struct A68t247  A68_247 ;    /* UNION(MODE248,REF MODE249,MODE250)  */
struct A68t173{
struct A68t198 * Idinfo;
A68_INT  Typeno;
A_PAD_INT(PAD_58)
struct A68t247  U;
};
typedef struct A68t173  A68_173 ;    /* STRUCT(REF MODE198,INT,MODE247)  */
struct A68t174{
struct A68t198 * Idinfo;
A68_INT  Typeno;
A_PAD_INT(PAD_59)
struct A68t172  T;
};
typedef struct A68t174  A68_174 ;    /* STRUCT(REF MODE198,INT,MODE172)  */
struct A68t175{
struct A68t172  T;
struct A68t175 * Rest;
};
typedef struct A68t175  A68_175 ;    /* STRUCT(MODE172,REF MODE175)  */
struct A68t176{
struct A68t245 * Tm;
struct A68t172  T;
};
typedef struct A68t176  A68_176 ;    /* STRUCT(REF MODE245,MODE172)  */
struct A68t178{
struct A68t172  From;
struct A68t172  To;
};
typedef struct A68t178  A68_178 ;    /* STRUCT(MODE172,MODE172)  */
struct A68t179{
struct A68t172  T;
struct A68t185  Size;
};
typedef struct A68t179  A68_179 ;    /* STRUCT(MODE172,MODE185)  */
struct A68t180{
struct A68t172  Tbracket;
};
typedef struct A68t180  A68_180 ;    /* STRUCT(MODE172)  */
struct A68t181{
struct A68t185  Size;
struct A68t172  Tstring;
};
typedef struct A68t181  A68_181 ;    /* STRUCT(MODE185,MODE172)  */
struct A68t186{
A68_VC  Text;
};
typedef struct A68t186  A68_186 ;    /* STRUCT(REF MODE26)  */
struct A68t187{
A68_INT  Int;
A_PAD_INT(PAD_60)
A68_VC  Text;
};
typedef struct A68t187  A68_187 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t188{
struct A68t185  Integer;
struct A68t185  Standard;
A68_INT  Test;
A_PAD_INT(PAD_61)
};
typedef struct A68t188  A68_188 ;    /* STRUCT(MODE185,MODE185,INT)  */
struct A68t189{
struct A68t245 * Im;
};
typedef struct A68t189  A68_189 ;    /* STRUCT(REF MODE245)  */
struct A68t190{
A68_INT  Opno;
A_PAD_INT(PAD_62)
struct A68t185  L;
struct A68t185  R;
};
typedef struct A68t190  A68_190 ;    /* STRUCT(INT,MODE185,MODE185)  */
struct A68t191{
A68_INT  Opno;
A_PAD_INT(PAD_63)
struct A68t185  R;
};
typedef struct A68t191  A68_191 ;    /* STRUCT(INT,MODE185)  */
struct A68t192{
struct A68t185  Cond;
struct A68t185  T;
struct A68t185  F;
};
typedef struct A68t192  A68_192 ;    /* STRUCT(MODE185,MODE185,MODE185)  */
struct A68t193{
A68_INT  Varmultno;
A_PAD_INT(PAD_64)
struct A68t185  Lwb;
struct A68t185  Upb;
struct A68t185  Index;
};
typedef struct A68t193  A68_193 ;    /* STRUCT(INT,MODE185,MODE185,MODE185)  */
struct A68t195{
struct A68t198 * Idinfo;
A68_INT  Intno;
A_PAD_INT(PAD_65)
struct A68t185  I;
};
typedef struct A68t195  A68_195 ;    /* STRUCT(REF MODE198,INT,MODE185)  */
struct A68t196{
struct A68t185  Ibracket;
};
typedef struct A68t196  A68_196 ;    /* STRUCT(MODE185)  */
struct A68t200{
struct A68t185  I;
};
typedef struct A68t200  A68_200 ;    /* STRUCT(MODE185)  */
struct A68t201{
struct A68t172  T;
};
typedef struct A68t201  A68_201 ;    /* STRUCT(MODE172)  */
struct A68t237{
A68_INT  Cvoid;
A_PAD_INT(PAD_66)
};
typedef struct A68t237  A68_237 ;    /* STRUCT(INT)  */
struct A68t222 { A68_INT mode; union {
struct A68t223 * mode1;
struct A68t224 * mode2;
struct A68t225 * mode3;
struct A68t203 * mode4;
struct A68t226 * mode5;
struct A68t227 * mode6;
struct A68t228 * mode7;
struct A68t229 * mode8;
struct A68t230 * mode9;
struct A68t182  mode10;
struct A68t183  mode11;
struct A68t231 * mode12;
struct A68t232 * mode13;
struct A68t233 * mode14;
struct A68t234 * mode15;
struct A68t235 * mode16;
struct A68t236 * mode17;
struct A68t237  mode18;
struct A68t238 * mode19;
struct A68t239 * mode20;
struct A68t240 * mode21;
struct A68t241 * mode22;
struct A68t242 * mode23;
struct A68t243 * mode24;
} data; };
typedef struct A68t222  A68_222 ;    /* UNION(REF MODE223,REF MODE224,REF MODE225,REF MODE203,REF MODE226,REF MODE227,REF MODE228,REF MODE229,REF MODE230,MODE182,MODE183,REF MODE231,REF MODE232,REF MODE233,REF MODE234,REF MODE235,REF MODE236,MODE237,REF MODE238,REF MODE239,REF MODE240,REF MODE241,REF MODE242,REF MODE243)  */
struct A68t202{
struct A68t222  Ct;
};
typedef struct A68t202  A68_202 ;    /* STRUCT(MODE222)  */
struct A68t203{
struct A68t172  Type;
A68_INT  Index;
A_PAD_INT(PAD_67)
};
typedef struct A68t203  A68_203 ;    /* STRUCT(MODE172,INT)  */
struct A68t205{
struct A68t170  A;
};
typedef struct A68t205  A68_205 ;    /* STRUCT(MODE170)  */
struct A68t206{
struct A68t172  Type;
A68_INT  Decno;
A_PAD_INT(PAD_68)
};
typedef struct A68t206  A68_206 ;    /* STRUCT(MODE172,INT)  */
struct A68t207{
A68_INT  Rec;
A_PAD_INT(PAD_69)
};
typedef struct A68t207  A68_207 ;    /* STRUCT(INT)  */
struct A68t208{
A68_INT  Notdec;
A_PAD_INT(PAD_70)
};
typedef struct A68t208  A68_208 ;    /* STRUCT(INT)  */
struct A68t199 { A68_INT mode; union {
struct A68t200  mode1;
struct A68t201  mode2;
struct A68t202  mode3;
struct A68t203  mode4;
struct A68t204 * mode5;
struct A68t205  mode6;
struct A68t206  mode7;
struct A68t182  mode8;
struct A68t207  mode9;
struct A68t208  mode10;
} data; };
typedef struct A68t199  A68_199 ;    /* UNION(MODE200,MODE201,MODE202,MODE203,REF MODE204,MODE205,MODE206,MODE182,MODE207,MODE208)  */
struct A68t198{
A68_INT  Scope;
A_PAD_INT(PAD_71)
A68_INT  Vnno;
A_PAD_INT(PAD_72)
A68_BOOL  Text;
A_PAD_BOOL(PAD_73)
A68_BOOL  Outofdate;
A_PAD_BOOL(PAD_74)
A68_BOOL  Inscope;
A_PAD_BOOL(PAD_75)
A68_BOOL  Export;
A_PAD_BOOL(PAD_76)
A68_VC  Id;
struct A68t199  U;
};
typedef struct A68t198  A68_198 ;    /* STRUCT(INT,INT,BOOL,BOOL,BOOL,BOOL,REF MODE26,MODE199)  */
struct A68t210 { A68_INT mode; union {
struct A68t214 * mode1;
struct A68t215 * mode2;
struct A68t216 * mode3;
struct A68t217 * mode4;
struct A68t218 * mode5;
struct A68t219 * mode6;
struct A68t182  mode7;
} data; };
typedef struct A68t210  A68_210 ;    /* UNION(REF MODE214,REF MODE215,REF MODE216,REF MODE217,REF MODE218,REF MODE219,MODE182)  */
struct A68t211 { A68_INT mode; union {
struct A68t212 * mode1;
struct A68t213 * mode2;
struct A68t182  mode3;
} data; };
typedef struct A68t211  A68_211 ;    /* UNION(REF MODE212,REF MODE213,MODE182)  */
struct A68t204{
A68_INT  Decno;
A_PAD_INT(PAD_77)
A68_INT  Origin;
A_PAD_INT(PAD_78)
struct A68t209 * Makeint;
struct A68t172  Type;
struct A68t210  Jsource;
struct A68t210  Jsink;
struct A68t211  Input;
struct A68t211  Output;
};
typedef struct A68t204  A68_204 ;    /* STRUCT(INT,INT,REF MODE209,MODE172,MODE210,MODE210,MODE211,MODE211)  */
struct A68t209{
struct A68t185  I;
struct A68t209 * Rest;
};
typedef struct A68t209  A68_209 ;    /* STRUCT(MODE185,REF MODE209)  */
struct A68t212{
A68_VC  Id;
A68_INT  Fnno;
A_PAD_INT(PAD_79)
A68_INT  Nameno;
A_PAD_INT(PAD_80)
A68_INT  Index;
A_PAD_INT(PAD_81)
struct A68t172  Type;
A68_BOOL  Single;
A_PAD_BOOL(PAD_82)
struct A68t212 * Rest;
};
typedef struct A68t212  A68_212 ;    /* STRUCT(REF MODE26,INT,INT,INT,MODE172,BOOL,REF MODE212)  */
struct A68t213{
struct A68t211  Port;
struct A68t185  I;
};
typedef struct A68t213  A68_213 ;    /* STRUCT(MODE211,MODE185)  */
struct A68t214{
struct A68t210  Jst;
struct A68t214 * Rest;
};
typedef struct A68t214  A68_214 ;    /* STRUCT(MODE210,REF MODE214)  */
struct A68t218{
A68_INT  J;
A_PAD_INT(PAD_83)
};
typedef struct A68t218  A68_218 ;    /* STRUCT(INT)  */
struct A68t215{
struct A68t218  Joined;
};
typedef struct A68t215  A68_215 ;    /* STRUCT(MODE218)  */
A_VECTOR(struct A68t210 ,A68t221);
typedef struct A68t221  A68_221 ;    /* VECTOR [] MODE210 */
struct A68t216{
struct A68t221  Jrow;
};
typedef struct A68t216  A68_216 ;    /* STRUCT(REF MODE221)  */
struct A68t217{
struct A68t210  Source;
struct A68t210  Sink;
};
typedef struct A68t217  A68_217 ;    /* STRUCT(MODE210,MODE210)  */
struct A68t220{
struct A68t185  Lwb;
struct A68t185  Upb;
A68_BOOL  Index;
A_PAD_BOOL(PAD_84)
struct A68t220 * Rest;
};
typedef struct A68t220  A68_220 ;    /* STRUCT(MODE185,MODE185,BOOL,REF MODE220)  */
struct A68t219{
struct A68t210  Jrep;
struct A68t220  Jvarstack;
};
typedef struct A68t219  A68_219 ;    /* STRUCT(MODE210,MODE220)  */
struct A68t223{
struct A68t198 * Idinfo;
A68_INT  Ctypeno;
A_PAD_INT(PAD_85)
struct A68t222  Ct;
struct A68t172  T;
};
typedef struct A68t223  A68_223 ;    /* STRUCT(REF MODE198,INT,MODE222,MODE172)  */
struct A68t224{
struct A68t172  T;
struct A68t185  Lwb;
struct A68t185  Upb;
};
typedef struct A68t224  A68_224 ;    /* STRUCT(MODE172,MODE185,MODE185)  */
struct A68t225{
struct A68t172  T;
struct A68t185  Index;
};
typedef struct A68t225  A68_225 ;    /* STRUCT(MODE172,MODE185)  */
struct A68t226{
struct A68t203 * P;
struct A68t222  Ct;
};
typedef struct A68t226  A68_226 ;    /* STRUCT(REF MODE203,MODE222)  */
struct A68t227{
struct A68t222  Ct;
struct A68t185  Size;
};
typedef struct A68t227  A68_227 ;    /* STRUCT(MODE222,MODE185)  */
struct A68t228{
struct A68t222  Cst;
struct A68t228 * Rest;
};
typedef struct A68t228  A68_228 ;    /* STRUCT(MODE222,REF MODE228)  */
struct A68t229{
struct A68t222  Calt;
struct A68t229 * Rest;
};
typedef struct A68t229  A68_229 ;    /* STRUCT(MODE222,REF MODE229)  */
struct A68t230{
struct A68t172  Ct;
};
typedef struct A68t230  A68_230 ;    /* STRUCT(MODE172)  */
struct A68t231{
struct A68t222  Cbracket;
};
typedef struct A68t231  A68_231 ;    /* STRUCT(MODE222)  */
struct A68t232{
struct A68t172  Querytype;
};
typedef struct A68t232  A68_232 ;    /* STRUCT(MODE172)  */
struct A68t233{
struct A68t185  Size;
struct A68t222  Ct;
struct A68t246 * Strings;
};
typedef struct A68t233  A68_233 ;    /* STRUCT(MODE185,MODE222,REF MODE246)  */
struct A68t234{
struct A68t172  T;
A68_CHAR  Char;
A_PAD_CHAR(PAD_86)
};
typedef struct A68t234  A68_234 ;    /* STRUCT(MODE172,CHAR)  */
struct A68t235{
struct A68t172  T;
A68_CHAR  Lwb;
A_PAD_CHAR(PAD_87)
A68_CHAR  Upb;
A_PAD_CHAR(PAD_88)
};
typedef struct A68t235  A68_235 ;    /* STRUCT(MODE172,CHAR,CHAR)  */
struct A68t236{
struct A68t245 * Cm;
struct A68t172  T;
};
typedef struct A68t236  A68_236 ;    /* STRUCT(REF MODE245,MODE172)  */
struct A68t238{
struct A68t222  Ct;
struct A68t185  Index;
};
typedef struct A68t238  A68_238 ;    /* STRUCT(MODE222,MODE185)  */
struct A68t239{
struct A68t222  Ct;
struct A68t185  Lwb;
struct A68t185  Upb;
};
typedef struct A68t239  A68_239 ;    /* STRUCT(MODE222,MODE185,MODE185)  */
struct A68t240{
struct A68t185  Test;
struct A68t222  Then;
struct A68t222  Else;
};
typedef struct A68t240  A68_240 ;    /* STRUCT(MODE185,MODE222,MODE222)  */
struct A68t241{
struct A68t244 * Ids;
struct A68t222  Ct;
};
typedef struct A68t241  A68_241 ;    /* STRUCT(REF MODE244,MODE222)  */
struct A68t242{
A68_BOOL  String;
A_PAD_BOOL(PAD_89)
A68_INT  Sort;
A_PAD_INT(PAD_90)
struct A68t222  Left;
struct A68t222  Right;
};
typedef struct A68t242  A68_242 ;    /* STRUCT(BOOL,INT,MODE222,MODE222)  */
struct A68t243{
struct A68t222  Ct;
struct A68t170  Attr;
};
typedef struct A68t243  A68_243 ;    /* STRUCT(MODE222,MODE170)  */
struct A68t244{
struct A68t198 * Idinfo;
A68_BOOL  Declaration;
A_PAD_BOOL(PAD_91)
struct A68t170  Attr;
struct A68t244 * Rest;
};
typedef struct A68t244  A68_244 ;    /* STRUCT(REF MODE198,BOOL,MODE170,REF MODE244)  */
struct A68t245{
A68_VC  Id;
A68_INT  Sort;
A_PAD_INT(PAD_92)
A68_INT  Fnno;
A_PAD_INT(PAD_93)
A68_INT  Index;
A_PAD_INT(PAD_94)
A68_INT  Xno;
A_PAD_INT(PAD_95)
struct A68t170  Attr;
};
typedef struct A68t245  A68_245 ;    /* STRUCT(REF MODE26,INT,INT,INT,INT,MODE170)  */
struct A68t246{
A68_VC  Id;
struct A68t246 * Rest;
};
typedef struct A68t246  A68_246 ;    /* STRUCT(REF MODE26,REF MODE246)  */
struct A68t249{
struct A68t198 * Idinfo;
struct A68t172 * U;
struct A68t249 * Rest;
};
typedef struct A68t249  A68_249 ;    /* STRUCT(REF MODE198,REF MODE172,REF MODE249)  */
struct A68t253{
A68_CHAR  Lwchar;
A_PAD_CHAR(PAD_96)
A68_CHAR  Upchar;
A_PAD_CHAR(PAD_97)
};
typedef struct A68t253  A68_253 ;    /* STRUCT(CHAR,CHAR)  */
struct A68t252 { A68_INT mode; union {
A68_CHAR  mode1;
struct A68t253  mode2;
} data; };
typedef struct A68t252  A68_252 ;    /* UNION(CHAR,MODE253)  */
struct A68t251{
struct A68t252  Alts;
struct A68t251 * Rest;
};
typedef struct A68t251  A68_251 ;    /* STRUCT(MODE252,REF MODE251)  */
struct A68t254{
struct A68t198 * Idinfo;
A68_INT  Attrno;
A_PAD_INT(PAD_98)
struct A68t170  Attr;
};
typedef struct A68t254  A68_254 ;    /* STRUCT(REF MODE198,INT,MODE170)  */
struct A68t255{
A68_VC  Classname;
struct A68t246 * Data;
};
typedef struct A68t255  A68_255 ;    /* STRUCT(REF MODE26,REF MODE246)  */
struct A68t256{
struct A68t170  Elem;
struct A68t256 * Rest;
};
typedef struct A68t256  A68_256 ;    /* STRUCT(MODE170,REF MODE256)  */
struct A68t257{
struct A68t170  Abracket;
};
typedef struct A68t257  A68_257 ;    /* STRUCT(MODE170)  */
struct A68t258{
struct A68t245 * Am;
};
typedef struct A68t258  A68_258 ;    /* STRUCT(REF MODE245)  */
struct A68t262 ;

A_PROCEDURE(A68_VOID ,A68t261,(A68_INT ,struct A68t262 ,A68_BOOL *,struct A68t164 ),(A68_INT ,struct A68t262 ,A68_BOOL *,struct A68t164 ,void *));
typedef struct A68t261  A68_261 ;    /* PROC(INT,MODE262,REF BOOL,MODE164) VOID */
A_VECTOR(struct A68t263 ,A68t262);
typedef struct A68t262  A68_262 ;    /* VECTOR [] MODE263 */
struct A68t263 { A68_INT mode; union {
struct A68t173 * mode1;
struct A68t174 * mode2;
struct A68t175 * mode3;
struct A68t176 * mode4;
struct A68t177  mode5;
struct A68t178 * mode6;
struct A68t179 * mode7;
struct A68t180 * mode8;
struct A68t181 * mode9;
struct A68t182  mode10;
struct A68t183  mode11;
struct A68t184  mode12;
A68_VC  mode13;
struct A68t167 * mode14;
struct A68t144  mode15;
A68_INT  mode16;
struct A68t186 * mode17;
struct A68t187 * mode18;
struct A68t188 * mode19;
struct A68t189 * mode20;
struct A68t190 * mode21;
struct A68t191 * mode22;
struct A68t192 * mode23;
struct A68t193 * mode24;
struct A68t194  mode25;
struct A68t195 * mode26;
struct A68t196 * mode27;
struct A68t197  mode28;
struct A68t223 * mode29;
struct A68t224 * mode30;
struct A68t225 * mode31;
struct A68t203 * mode32;
struct A68t226 * mode33;
struct A68t227 * mode34;
struct A68t228 * mode35;
struct A68t229 * mode36;
struct A68t230 * mode37;
struct A68t231 * mode38;
struct A68t232 * mode39;
struct A68t233 * mode40;
struct A68t234 * mode41;
struct A68t235 * mode42;
struct A68t236 * mode43;
struct A68t237  mode44;
struct A68t238 * mode45;
struct A68t239 * mode46;
struct A68t240 * mode47;
struct A68t241 * mode48;
struct A68t242 * mode49;
struct A68t243 * mode50;
} data; };
typedef struct A68t263  A68_263 ;    /* UNION(REF MODE173,REF MODE174,REF MODE175,REF MODE176,MODE177,REF MODE178,REF MODE179,REF MODE180,REF MODE181,MODE182,MODE183,MODE184,REF MODE26,REF MODE167,MODE144,INT,REF MODE186,REF MODE187,REF MODE188,REF MODE189,REF MODE190,REF MODE191,REF MODE192,REF MODE193,MODE194,REF MODE195,REF MODE196,MODE197,REF MODE223,REF MODE224,REF MODE225,REF MODE203,REF MODE226,REF MODE227,REF MODE228,REF MODE229,REF MODE230,REF MODE231,REF MODE232,REF MODE233,REF MODE234,REF MODE235,REF MODE236,MODE237,REF MODE238,REF MODE239,REF MODE240,REF MODE241,REF MODE242,REF MODE243)  */
struct A68t265 ;
struct A68t266 ;
struct A68t267 ;

A_PROCEDURE(A68_BOOL ,A68t264,(struct A68t172 ,struct A68t172 ,struct A68t265 *,struct A68t266 ,struct A68t164 ,struct A68t267 ),(struct A68t172 ,struct A68t172 ,struct A68t265 *,struct A68t266 ,struct A68t164 ,struct A68t267 ,void *));
typedef struct A68t264  A68_264 ;    /* PROC(MODE172,MODE172,REF MODE265,MODE266,MODE164,MODE267) BOOL */
struct A68t265{
struct A68t268 * Fncall;
A68_BOOL  Explicitparam;
A_PAD_BOOL(PAD_99)
struct A68t169 ** Nextmp;
struct A68t265 * Rest;
};
typedef struct A68t265  A68_265 ;    /* STRUCT(REF MODE268,BOOL,REF REF MODE169,REF MODE265)  */

A_PROCEDURE(A68_VOID ,A68t266,(struct A68t185 ,A68_BOOL ,struct A68t185 *),(struct A68t185 ,A68_BOOL ,struct A68t185 *,void *));
typedef struct A68t266  A68_266 ;    /* PROC(MODE185,BOOL) MODE185 */

A_PROCEDURE(A68_VOID ,A68t267,(struct A68t175 *,struct A68t172 *),(struct A68t175 *,struct A68t172 *,void *));
typedef struct A68t267  A68_267 ;    /* PROC(REF MODE175) MODE172 */
struct A68t268{
struct A68t167 * F;
struct A68t269 * Pvals;
struct A68t269 ** Nextpvals;
struct A68t170  Attr;
};
typedef struct A68t268  A68_268 ;    /* STRUCT(REF MODE167,REF MODE269,REF REF MODE269,MODE170)  */
struct A68t270 { A68_INT mode; union {
struct A68t200  mode1;
struct A68t201  mode2;
struct A68t202  mode3;
struct A68t268  mode4;
struct A68t205  mode5;
struct A68t182  mode6;
} data; };
typedef struct A68t270  A68_270 ;    /* UNION(MODE200,MODE201,MODE202,MODE268,MODE205,MODE182)  */
struct A68t269{
struct A68t270  Val;
struct A68t269 * Rest;
};
typedef struct A68t269  A68_269 ;    /* STRUCT(MODE270,REF MODE269)  */

A_PROCEDURE(A68_VOID ,A68t271,(struct A68t185 ,A68_BOOL ,struct A68t164 ,struct A68t185 *),(struct A68t185 ,A68_BOOL ,struct A68t164 ,struct A68t185 *,void *));
typedef struct A68t271  A68_271 ;    /* PROC(MODE185,BOOL,MODE164) MODE185 */

A_PROCEDURE(A68_VOID ,A68t272,(struct A68t163 *),(struct A68t163 *,void *));
typedef struct A68t272  A68_272 ;    /* PROC REF MODE163 */
struct A68t274 ;

A_PROCEDURE(A68_VOID ,A68t273,(struct A68t274 *),(struct A68t274 *,void *));
typedef struct A68t273  A68_273 ;    /* PROC MODE274 */

A_PROCEDURE(A68_INT ,A68t274,(A68_VC ,A68_BOOL ),(A68_VC ,A68_BOOL ,void *));
typedef struct A68t274  A68_274 ;    /* PROC(REF MODE26,BOOL) INT */
struct A68t275{
A68_INT  Macsort;
A_PAD_INT(PAD_100)
A68_INT  Vss;
A_PAD_INT(PAD_101)
A68_INT  Maxvss;
A_PAD_INT(PAD_102)
A68_INT  K;
A_PAD_INT(PAD_103)
A68_INT  Which;
A_PAD_INT(PAD_104)
A68_INT  Scope;
A_PAD_INT(PAD_105)
A68_VC  Lastop;
A68_VC  Lastcall;
A68_BOOL  Errorswitch;
A_PAD_BOOL(PAD_106)
A68_BOOL  Lhsjoin;
A_PAD_BOOL(PAD_107)
struct A68t276 * Joinstack;
struct A68t214 * Joinst;
struct A68t210 * Joinup;
struct A68t220 * Joinvarstack;
struct A68t277 * Joinmultstack;
struct A68t214 * Joinvarst;
};
typedef struct A68t275  A68_275 ;    /* STRUCT(INT,INT,INT,INT,INT,INT,REF MODE26,REF MODE26,BOOL,BOOL,REF MODE276,REF MODE214,REF MODE210,REF MODE220,REF MODE277,REF MODE214)  */
struct A68t276{
struct A68t210  Joinup;
struct A68t276 * Rest;
};
typedef struct A68t276  A68_276 ;    /* STRUCT(MODE210,REF MODE276)  */
struct A68t277{
struct A68t210  Joinup;
A68_BOOL  Source;
A_PAD_BOOL(PAD_108)
struct A68t277 * Rest;
};
typedef struct A68t277  A68_277 ;    /* STRUCT(MODE210,BOOL,REF MODE277)  */
struct A68t278{
struct A68t185  Integer;
struct A68t172  Type;
struct A68t172  Jointype;
struct A68t175 * Sts;
};
typedef struct A68t278  A68_278 ;    /* STRUCT(MODE185,MODE172,MODE172,REF MODE175)  */
struct A68t279{
struct A68t265 * Fncallstack;
struct A68t280 * Lastops;
struct A68t280 * Lastcalls;
struct A68t244 * Decids;
struct A68t175 * Mltype;
struct A68t175 ** Nextmltype;
struct A68t281 * Multlets;
struct A68t281 * Multiassign;
};
typedef struct A68t279  A68_279 ;    /* STRUCT(REF MODE265,REF MODE280,REF MODE280,REF MODE244,REF MODE175,REF REF MODE175,REF MODE281,REF MODE281)  */
struct A68t280{
A68_VC  Last;
struct A68t280 * Rest;
};
typedef struct A68t280  A68_280 ;    /* STRUCT(REF MODE26,REF MODE280)  */
struct A68t281{
A68_INT  Num;
A_PAD_INT(PAD_109)
struct A68t281 * Rest;
};
typedef struct A68t281  A68_281 ;    /* STRUCT(INT,REF MODE281)  */
struct A68t282{
struct A68t283 * Decnocheck;
struct A68t211  Portinfo;
struct A68t284 * Portstack;
};
typedef struct A68t282  A68_282 ;    /* STRUCT(REF MODE283,MODE211,REF MODE284)  */
struct A68t283{
A68_INT  Decno;
A_PAD_INT(PAD_110)
struct A68t283 * Rest;
};
typedef struct A68t283  A68_283 ;    /* STRUCT(INT,REF MODE283)  */
struct A68t284{
struct A68t211  Port;
struct A68t284 * Rest;
};
typedef struct A68t284  A68_284 ;    /* STRUCT(MODE211,REF MODE284)  */
struct A68t285{
struct A68t167 * Fndec;
struct A68t275 * Cint;
struct A68t278 * Ctyp;
struct A68t279 * Csta;
struct A68t282 * Crem;
};
typedef struct A68t285  A68_285 ;    /* STRUCT(REF MODE167,REF MODE275,REF MODE278,REF MODE279,REF MODE282)  */
struct A68t286{
struct A68t285 * Val;
struct A68t286 * Rest;
};
typedef struct A68t286  A68_286 ;    /* STRUCT(REF MODE285,REF MODE286)  */
struct A68t287{
struct A68t167 * Dec;
struct A68t287 * Rest;
};
typedef struct A68t287  A68_287 ;    /* STRUCT(REF MODE167,REF MODE287)  */
A_VECTOR(struct A68t54 ,A68t288);
typedef struct A68t288  A68_288 ;    /* VECTOR [] REF MODE54 */
struct A68t289{
struct A68t185  I;
struct A68t172  T;
struct A68t222  Ct;
struct A68t170  A;
A68_INT  W;
A_PAD_INT(PAD_111)
struct A68t289 * Rest;
};
typedef struct A68t289  A68_289 ;    /* STRUCT(MODE185,MODE172,MODE222,MODE170,INT,REF MODE289)  */
struct A68t290{
struct A68t172  Param;
struct A68t172  Output;
struct A68t229 * Tested;
struct A68t290 * Rest;
};
typedef struct A68t290  A68_290 ;    /* STRUCT(MODE172,MODE172,REF MODE229,REF MODE290)  */
struct A68t291{
struct A68t198  I;
struct A68t291 * Rest;
};
typedef struct A68t291  A68_291 ;    /* STRUCT(MODE198,REF MODE291)  */
struct A68t292{
A68_INT  I;
A_PAD_INT(PAD_112)
A68_VC  Name;
struct A68t292 * Rest;
};
typedef struct A68t292  A68_292 ;    /* STRUCT(INT,REF MODE26,REF MODE292)  */
struct A68t293{
A68_INT  Scope;
A_PAD_INT(PAD_113)
struct A68t244 * Ids;
struct A68t166 * Fns;
struct A68t293 * Rest;
};
typedef struct A68t293  A68_293 ;    /* STRUCT(INT,REF MODE244,REF MODE166,REF MODE293)  */
struct A68t294{
A68_INT  State;
A_PAD_INT(PAD_114)
struct A68t294 * Rest;
};
typedef struct A68t294  A68_294 ;    /* STRUCT(INT,REF MODE294)  */
struct A68t295{
A68_INT  Param;
A_PAD_INT(PAD_115)
A68_INT  Ans;
A_PAD_INT(PAD_116)
};
typedef struct A68t295  A68_295 ;    /* STRUCT(INT,INT)  */
struct A68t296{
A68_INT  L;
A_PAD_INT(PAD_117)
A68_INT  R;
A_PAD_INT(PAD_118)
A68_INT  Ans;
A_PAD_INT(PAD_119)
};
typedef struct A68t296  A68_296 ;    /* STRUCT(INT,INT,INT)  */
A_VECTOR(struct A68t172 ,A68t297);
typedef struct A68t297  A68_297 ;    /* VECTOR [] MODE172 */
A_VECTOR(struct A68t295 ,A68t298);
typedef struct A68t298  A68_298 ;    /* VECTOR [] MODE295 */
A_VECTOR(struct A68t296 ,A68t299);
typedef struct A68t299  A68_299 ;    /* VECTOR [] MODE296 */
A_VECTOR(struct A68t301 ,A68t300);
typedef struct A68t300  A68_300 ;    /* VECTOR [] MODE301 */
struct A68t301{
A68_VC  Id;
A68_INT  Tokno;
A_PAD_INT(PAD_120)
};
typedef struct A68t301  A68_301 ;    /* STRUCT(REF MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t302,(struct A68t185 ,struct A68t185 *),(struct A68t185 ,struct A68t185 *,void *));
typedef struct A68t302  A68_302 ;    /* PROC(MODE185) MODE185 */

A_PROCEDURE(A68_VOID ,A68t303,(struct A68t172 ,struct A68t172 *),(struct A68t172 ,struct A68t172 *,void *));
typedef struct A68t303  A68_303 ;    /* PROC(MODE172) MODE172 */

A_PROCEDURE(struct A68t196 *,A68t304,(struct A68t185 ),(struct A68t185 ,void *));
typedef struct A68t304  A68_304 ;    /* PROC(MODE185) REF MODE196 */

A_PROCEDURE(struct A68t180 *,A68t305,(struct A68t172 ),(struct A68t172 ,void *));
typedef struct A68t305  A68_305 ;    /* PROC(MODE172) REF MODE180 */

A_PROCEDURE(struct A68t231 *,A68t306,(struct A68t222 ),(struct A68t222 ,void *));
typedef struct A68t306  A68_306 ;    /* PROC(MODE222) REF MODE231 */

A_PROCEDURE(struct A68t257 *,A68t307,(struct A68t170 ),(struct A68t170 ,void *));
typedef struct A68t307  A68_307 ;    /* PROC(MODE170) REF MODE257 */

A_PROCEDURE(A68_VOID ,A68t308,(struct A68t185 ,struct A68t200 *),(struct A68t185 ,struct A68t200 *,void *));
typedef struct A68t308  A68_308 ;    /* PROC(MODE185) MODE200 */

A_PROCEDURE(A68_VOID ,A68t309,(struct A68t172 ,struct A68t201 *),(struct A68t172 ,struct A68t201 *,void *));
typedef struct A68t309  A68_309 ;    /* PROC(MODE172) MODE201 */

A_PROCEDURE(A68_VOID ,A68t310,(struct A68t170 ,struct A68t205 *),(struct A68t170 ,struct A68t205 *,void *));
typedef struct A68t310  A68_310 ;    /* PROC(MODE170) MODE205 */

A_PROCEDURE(A68_VOID ,A68t311,(struct A68t222 ,struct A68t202 *),(struct A68t222 ,struct A68t202 *,void *));
typedef struct A68t311  A68_311 ;    /* PROC(MODE222) MODE202 */

A_PROCEDURE(struct A68t258 *,A68t312,(struct A68t245 *),(struct A68t245 *,void *));
typedef struct A68t312  A68_312 ;    /* PROC(REF MODE245) REF MODE258 */

A_PROCEDURE(struct A68t189 *,A68t313,(struct A68t245 *),(struct A68t245 *,void *));
typedef struct A68t313  A68_313 ;    /* PROC(REF MODE245) REF MODE189 */

A_PROCEDURE(struct A68t232 *,A68t314,(struct A68t172 ),(struct A68t172 ,void *));
typedef struct A68t314  A68_314 ;    /* PROC(MODE172) REF MODE232 */

A_PROCEDURE(A68_BOOL ,A68t315,(struct A68t218 ,struct A68t218 ),(struct A68t218 ,struct A68t218 ,void *));
typedef struct A68t315  A68_315 ;    /* PROC(MODE218,MODE218) BOOL */

A_PROCEDURE(A68_VOID ,A68t316,(struct A68t210 *,A68_INT ),(struct A68t210 *,A68_INT ,void *));
typedef struct A68t316  A68_316 ;    /* PROC(REF MODE210,INT) VOID */
struct A68t317{
struct A68t244 * Ids;
A68_INT  Macsort;
A_PAD_INT(PAD_121)
A68_INT  Xno;
A_PAD_INT(PAD_122)
A68_BOOL  New;
A_PAD_BOOL(PAD_123)
struct A68t317 * Rest;
};
typedef struct A68t317  A68_317 ;    /* STRUCT(REF MODE244,INT,INT,BOOL,REF MODE317)  */

A_PROCEDURE(A68_VOID ,A68t318,(struct A68t172 ,A68_BOOL ,struct A68t172 *),(struct A68t172 ,A68_BOOL ,struct A68t172 *,void *));
typedef struct A68t318  A68_318 ;    /* PROC(MODE172,BOOL) MODE172 */

A_PROCEDURE(A68_VOID ,A68t319,(struct A68t171 *,struct A68t172 *),(struct A68t171 *,struct A68t172 *,void *));
typedef struct A68t319  A68_319 ;    /* PROC(REF MODE171) MODE172 */

A_PROCEDURE(struct A68t193 *,A68t320,(struct A68t244 *),(struct A68t244 *,void *));
typedef struct A68t320  A68_320 ;    /* PROC(REF MODE244) REF MODE193 */

A_PROCEDURE(A68_VOID ,A68t321,(A68_BOOL ,struct A68t46 *),(A68_BOOL ,struct A68t46 *,void *));
typedef struct A68t321  A68_321 ;    /* PROC(BOOL) MODE46 */
A_VECTOR(struct A68t324 ,A68t323);
typedef struct A68t323  A68_323 ;    /* VECTOR [] MODE324 */
struct A68t324{
A68_INT  Number;
A_PAD_INT(PAD_124)
A68_BITS  Class;
A_PAD_BITS(PAD_125)
A68_VC  Text;
};
typedef struct A68t324  A68_324 ;    /* STRUCT(INT,BITS,MODE26)  */
struct A68t322{
A68_VC  Name;
struct A68t100  Messages;
A68_BOOL * Initialised;
struct A68t323  Setup;
};
typedef struct A68t322  A68_322 ;    /* STRUCT(MODE26,REF MODE100,REF BOOL,MODE323)  */

A_PROCEDURE(A68_VOID ,A68t325,(A68_BOOL ,struct A68t322 *),(A68_BOOL ,struct A68t322 *,void *));
typedef struct A68t325  A68_325 ;    /* PROC(BOOL) MODE322 */
A_VECTOR(A68_VC ,A68t326);
typedef struct A68t326  A68_326 ;    /* VECTOR [] REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t327,(struct A68t46 ,struct A68t326 *),(struct A68t46 ,struct A68t326 *,void *));
typedef struct A68t327  A68_327 ;    /* PROC(MODE46) MODE326 */

A_PROCEDURE(A68_VOID ,A68t328,(struct A68t326 ,struct A68t46 *),(struct A68t326 ,struct A68t46 *,void *));
typedef struct A68t328  A68_328 ;    /* PROC(MODE326) MODE46 */
struct A68t330 ;

A_PROCEDURE(A68_BOOL ,A68t329,(struct A68t330 ),(struct A68t330 ,void *));
typedef struct A68t329  A68_329 ;    /* PROC(MODE330) BOOL */
struct A68t330 { A68_INT mode; union {
struct A68t98  mode1;
struct A68t101  mode2;
} data; };
typedef struct A68t330  A68_330 ;    /* UNION(MODE98,MODE101)  */

A_PROCEDURE(A68_INT ,A68t331,(struct A68t98 ),(struct A68t98 ,void *));
typedef struct A68t331  A68_331 ;    /* PROC(MODE98) INT */

A_PROCEDURE(A68_VOID ,A68t332,(A68_INT ,struct A68t322 ,struct A68t98 *),(A68_INT ,struct A68t322 ,struct A68t98 *,void *));
typedef struct A68t332  A68_332 ;    /* PROC(INT,MODE322) MODE98 */

A_PROCEDURE(A68_BOOL ,A68t333,(struct A68t98 ,struct A68t322 ),(struct A68t98 ,struct A68t322 ,void *));
typedef struct A68t333  A68_333 ;    /* PROC(MODE98,MODE322) BOOL */

A_PROCEDURE(A68_VOID ,A68t334,(struct A68t98 ,struct A68t46 ,struct A68t101 *),(struct A68t98 ,struct A68t46 ,struct A68t101 *,void *));
typedef struct A68t334  A68_334 ;    /* PROC(MODE98,MODE46) MODE101 */
struct A68t336 { A68_INT mode; union {
A68_INT  mode1;
} data; };
typedef struct A68t336  A68_336 ;    /* UNION(INT,VOID)  */
struct A68t335{
A68_INT  Type;
A_PAD_INT(PAD_126)
struct A68t336  Val;
};
typedef struct A68t335  A68_335 ;    /* STRUCT(INT,MODE336)  */
A_VECTOR(A68_SBITS ,A68t338);
typedef struct A68t338  A68_338 ;    /* VECTOR [] SHORT BITS */
struct A68t337{
A68_INT  Test_index;
A_PAD_INT(PAD_127)
struct A68t338  Sid_code;
A68_INT * Index;
A68_INT * Stind;
struct A68t335 * Lex;
struct A68t32 * Sidstack;
struct A68t53  Sid_blwds;
A68_INT  Sid_mult;
A_PAD_INT(PAD_128)
};
typedef struct A68t337  A68_337 ;    /* STRUCT(INT,MODE338,REF INT,REF INT,REF MODE335,REF REF MODE32,MODE53,INT)  */

A_PROCEDURE(A68_VOID ,A68t339,(A68_BOOL ,struct A68t337 *),(A68_BOOL ,struct A68t337 *,void *));
typedef struct A68t339  A68_339 ;    /* PROC(BOOL) MODE337 */
struct A68t341 ;
struct A68t342 ;
struct A68t343 ;
struct A68t344 ;
struct A68t345 ;

A_PROCEDURE(A68_VOID ,A68t340,(A68_INT ,struct A68t338 ,struct A68t53 ,struct A68t129 ,struct A68t342 ,struct A68t343 ,struct A68t344 ,struct A68t345 ,struct A68t341 *),(A68_INT ,struct A68t338 ,struct A68t53 ,struct A68t129 ,struct A68t342 ,struct A68t343 ,struct A68t344 ,struct A68t345 ,struct A68t341 *,void *));
typedef struct A68t340  A68_340 ;    /* PROC(INT,MODE338,MODE53,MODE129,MODE342,MODE343,MODE344,MODE345) MODE341 */
struct A68t341 { A68_INT mode; union {
A68_INT  mode2;
} data; };
typedef struct A68t341  A68_341 ;    /* UNION(VOID,INT)  */

A_PROCEDURE(A68_VOID ,A68t342,(struct A68t335 *),(struct A68t335 *,void *));
typedef struct A68t342  A68_342 ;    /* PROC MODE335 */

A_PROCEDURE(A68_VOID ,A68t343,(struct A68t337 ),(struct A68t337 ,void *));
typedef struct A68t343  A68_343 ;    /* PROC(MODE337) VOID */

A_PROCEDURE(A68_VOID ,A68t344,(A68_INT ,A68_INT ,struct A68t336 ,A68_INT ),(A68_INT ,A68_INT ,struct A68t336 ,A68_INT ,void *));
typedef struct A68t344  A68_344 ;    /* PROC(INT,INT,MODE336,INT) VOID */

A_PROCEDURE(A68_INT ,A68t345,(A68_INT ,A68_INT ,struct A68t336 ,A68_INT ),(A68_INT ,A68_INT ,struct A68t336 ,A68_INT ,void *));
typedef struct A68t345  A68_345 ;    /* PROC(INT,INT,MODE336,INT) INT */

A_PROCEDURE(A68_BOOL ,A68t346,(A68_INT ,struct A68t337 ),(A68_INT ,struct A68t337 ,void *));
typedef struct A68t346  A68_346 ;    /* PROC(INT,MODE337) BOOL */

A_PROCEDURE(A68_VOID ,A68t347,(struct A68t129 ),(struct A68t129 ,void *));
typedef struct A68t347  A68_347 ;    /* PROC(MODE129) VOID */

A_PROCEDURE(A68_VOID ,A68t348,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t348  A68_348 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,58,A68t349);
typedef struct A68t349  A68_349 ;    /* STRUCT 58 CHAR */
struct A68t350 { A68_INT mode; union {
A68_INT  mode1;
struct A68t187 * mode2;
struct A68t186 * mode3;
} data; };
typedef struct A68t350  A68_350 ;    /* UNION(INT,REF MODE187,REF MODE186)  */

A_PROCEDURE(A68_VOID ,A68t351,(struct A68t32 ),(struct A68t32 ,void *));
typedef struct A68t351  A68_351 ;    /* PROC(MODE32) VOID */

A_PROCEDURE(A68_VOID ,A68t352,(A68_VC ,A68_VC ,struct A68t144 ),(A68_VC ,A68_VC ,struct A68t144 ,void *));
typedef struct A68t352  A68_352 ;    /* PROC(REF MODE26,REF MODE26,MODE144) VOID */

A_PROCEDURE(A68_BOOL ,A68t353,(struct A68t144 ),(struct A68t144 ,void *));
typedef struct A68t353  A68_353 ;    /* PROC(MODE144) BOOL */

A_PROCEDURE(A68_BOOL ,A68t354,(A68_VC *,A68_INT *),(A68_VC *,A68_INT *,void *));
typedef struct A68t354  A68_354 ;    /* PROC(REF REF MODE26,REF INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t355,(A68_INT ,A68_INT ,struct A68t46 ),(A68_INT ,A68_INT ,struct A68t46 ,void *));
typedef struct A68t355  A68_355 ;    /* PROC(INT,INT,MODE46) VOID */

A_PROCEDURE(A68_VOID ,A68t356,(struct A68t351 ,struct A68t43 ,struct A68t43 ,struct A68t129 ,struct A68t43 ,A68_INT ,struct A68t117 ,struct A68t117 ,struct A68t156 ,struct A68t352 ,struct A68t353 ,struct A68t354 ,struct A68t355 ,struct A68t274 ,struct A68t163 ),(struct A68t351 ,struct A68t43 ,struct A68t43 ,struct A68t129 ,struct A68t43 ,A68_INT ,struct A68t117 ,struct A68t117 ,struct A68t156 ,struct A68t352 ,struct A68t353 ,struct A68t354 ,struct A68t355 ,struct A68t274 ,struct A68t163 ,void *));
typedef struct A68t356  A68_356 ;    /* PROC(MODE351,MODE43,MODE43,MODE129,MODE43,INT,MODE117,MODE117,MODE156,MODE352,MODE353,MODE354,MODE355,MODE274,REF MODE163) VOID */

A_PROCEDURE(A68_VOID ,A68t357,(A68_BOOL ,struct A68t163 *),(A68_BOOL ,struct A68t163 *,void *));
typedef struct A68t357  A68_357 ;    /* PROC(BOOL) MODE163 */

A_PROCEDURE(A68_VOID ,A68t358,(A68_BOOL ,struct A68t54 *),(A68_BOOL ,struct A68t54 *,void *));
typedef struct A68t358  A68_358 ;    /* PROC(BOOL) MODE54 */
A_ISTRUCT(A68_CHAR ,16,A68t359);
typedef struct A68t359  A68_359 ;    /* STRUCT 16 CHAR */

A_PROCEDURE(A68_BOOL ,A68t360,(A68_INT ),(A68_INT ,void *));
typedef struct A68t360  A68_360 ;    /* PROC(INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t361,(struct A68t160 ,A68_BOOL ,struct A68t161 ,struct A68t162 ),(struct A68t160 ,A68_BOOL ,struct A68t161 ,struct A68t162 ,void *));
typedef struct A68t361  A68_361 ;    /* PROC(MODE160,BOOL,MODE161,MODE162) VOID */

A_PROCEDURE(A68_VOID ,A68t362,(A68_INT ,struct A68t262 ),(A68_INT ,struct A68t262 ,void *));
typedef struct A68t362  A68_362 ;    /* PROC(INT,MODE262) VOID */
A_ISTRUCT(A68_CHAR ,11,A68t363);
typedef struct A68t363  A68_363 ;    /* STRUCT 11 CHAR */
A_ISTRUCT(A68_CHAR ,9,A68t364);
typedef struct A68t364  A68_364 ;    /* STRUCT 9 CHAR */
A_ISTRUCT(A68_CHAR ,7,A68t365);
typedef struct A68t365  A68_365 ;    /* STRUCT 7 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t366);
typedef struct A68t366  A68_366 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(struct A68t263 ,2,A68t367);
typedef struct A68t367  A68_367 ;    /* STRUCT 2 MODE263 */

A_PROCEDURE(A68_VOID ,A68t368,(struct A68t198 ),(struct A68t198 ,void *));
typedef struct A68t368  A68_368 ;    /* PROC(MODE198) VOID */

A_PROCEDURE(A68_VOID ,A68t369,(struct A68t185 ),(struct A68t185 ,void *));
typedef struct A68t369  A68_369 ;    /* PROC(MODE185) VOID */

A_PROCEDURE(A68_VOID ,A68t370,(struct A68t170 ),(struct A68t170 ,void *));
typedef struct A68t370  A68_370 ;    /* PROC(MODE170) VOID */

A_PROCEDURE(A68_VOID ,A68t371,(struct A68t172 ),(struct A68t172 ,void *));
typedef struct A68t371  A68_371 ;    /* PROC(MODE172) VOID */

A_PROCEDURE(A68_VOID ,A68t372,(struct A68t222 ),(struct A68t222 ,void *));
typedef struct A68t372  A68_372 ;    /* PROC(MODE222) VOID */

A_PROCEDURE(A68_VOID ,A68t373,(struct A68t171 *),(struct A68t171 *,void *));
typedef struct A68t373  A68_373 ;    /* PROC(REF MODE171) VOID */

A_PROCEDURE(A68_VOID ,A68t374,(struct A68t244 *),(struct A68t244 *,void *));
typedef struct A68t374  A68_374 ;    /* PROC(REF MODE244) VOID */
A_ISTRUCT(A68_INT ,3,A68t375);
typedef struct A68t375  A68_375 ;    /* STRUCT 3 INT */
A_ISTRUCT(A68_CHAR ,10,A68t376);
typedef struct A68t376  A68_376 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(A68_CHAR ,12,A68t377);
typedef struct A68t377  A68_377 ;    /* STRUCT 12 CHAR */

A_PROCEDURE(A68_VOID ,A68t378,(struct A68t198 *,struct A68t199 ),(struct A68t198 *,struct A68t199 ,void *));
typedef struct A68t378  A68_378 ;    /* PROC(REF MODE198,MODE199) VOID */

A_PROCEDURE(A68_VOID ,A68t379,(struct A68t198 *,struct A68t293 **,struct A68t244 **),(struct A68t198 *,struct A68t293 **,struct A68t244 **,void *));
typedef struct A68t379  A68_379 ;    /* PROC(REF MODE198,REF REF MODE293,REF REF MODE244) VOID */

A_PROCEDURE(A68_BOOL ,A68t380,(struct A68t185 ,A68_BOOL ),(struct A68t185 ,A68_BOOL ,void *));
typedef struct A68t380  A68_380 ;    /* PROC(MODE185,BOOL) BOOL */
A_ISTRUCT(A68_INT ,2,A68t381);
typedef struct A68t381  A68_381 ;    /* STRUCT 2 INT */
A_ISTRUCT(A68_CHAR ,17,A68t382);
typedef struct A68t382  A68_382 ;    /* STRUCT 17 CHAR */

A_PROCEDURE(A68_VOID ,A68t383,(struct A68t172 ,A68_BOOL ,A68_BOOL ,A68_BOOL ),(struct A68t172 ,A68_BOOL ,A68_BOOL ,A68_BOOL ,void *));
typedef struct A68t383  A68_383 ;    /* PROC(MODE172,BOOL,BOOL,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t384,(struct A68t172 ,A68_BOOL ),(struct A68t172 ,A68_BOOL ,void *));
typedef struct A68t384  A68_384 ;    /* PROC(MODE172,BOOL) VOID */
A_ISTRUCT(A68_CHAR ,13,A68t385);
typedef struct A68t385  A68_385 ;    /* STRUCT 13 CHAR */
A_ISTRUCT(A68_CHAR ,8,A68t386);
typedef struct A68t386  A68_386 ;    /* STRUCT 8 CHAR */

A_PROCEDURE(A68_VOID ,A68t387,(struct A68t246 *),(struct A68t246 *,void *));
typedef struct A68t387  A68_387 ;    /* PROC(REF MODE246) VOID */

A_PROCEDURE(A68_VOID ,A68t388,(struct A68t171 *,A68_BOOL ,A68_BOOL ),(struct A68t171 *,A68_BOOL ,A68_BOOL ,void *));
typedef struct A68t388  A68_388 ;    /* PROC(REF MODE171,BOOL,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t389,(struct A68t169 *,A68_BOOL ),(struct A68t169 *,A68_BOOL ,void *));
typedef struct A68t389  A68_389 ;    /* PROC(REF MODE169,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t390,(struct A68t167 *,A68_BOOL ),(struct A68t167 *,A68_BOOL ,void *));
typedef struct A68t390  A68_390 ;    /* PROC(REF MODE167,BOOL) VOID */
A_ISTRUCT(A68_INT ,4,A68t391);
typedef struct A68t391  A68_391 ;    /* STRUCT 4 INT */

A_PROCEDURE(A68_VOID ,A68t392,(struct A68t166 *),(struct A68t166 *,void *));
typedef struct A68t392  A68_392 ;    /* PROC(REF MODE166) VOID */

A_PROCEDURE(A68_VOID ,A68t393,(struct A68t222 ,struct A68t172 *),(struct A68t222 ,struct A68t172 *,void *));
typedef struct A68t393  A68_393 ;    /* PROC(MODE222) MODE172 */

A_PROCEDURE(A68_INT ,A68t394,(struct A68t172 ),(struct A68t172 ,void *));
typedef struct A68t394  A68_394 ;    /* PROC(MODE172) INT */

A_PROCEDURE(A68_INT ,A68t395,(struct A68t222 ),(struct A68t222 ,void *));
typedef struct A68t395  A68_395 ;    /* PROC(MODE222) INT */

A_PROCEDURE(A68_VOID ,A68t396,(struct A68t245 *,A68_INT ,A68_BOOL ),(struct A68t245 *,A68_INT ,A68_BOOL ,void *));
typedef struct A68t396  A68_396 ;    /* PROC(REF MODE245,INT,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t397,(struct A68t268 ,A68_BOOL ),(struct A68t268 ,A68_BOOL ,void *));
typedef struct A68t397  A68_397 ;    /* PROC(MODE268,BOOL) VOID */

A_PROCEDURE(A68_INT ,A68t398,(struct A68t185 ),(struct A68t185 ,void *));
typedef struct A68t398  A68_398 ;    /* PROC(MODE185) INT */

A_PROCEDURE(A68_BOOL ,A68t399,(struct A68t185 ),(struct A68t185 ,void *));
typedef struct A68t399  A68_399 ;    /* PROC(MODE185) BOOL */

A_PROCEDURE(A68_BOOL ,A68t400,(struct A68t222 ,struct A68t222 ),(struct A68t222 ,struct A68t222 ,void *));
typedef struct A68t400  A68_400 ;    /* PROC(MODE222,MODE222) BOOL */

A_PROCEDURE(A68_VOID ,A68t401,(struct A68t228 *,struct A68t222 *),(struct A68t228 *,struct A68t222 *,void *));
typedef struct A68t401  A68_401 ;    /* PROC(REF MODE228) MODE222 */

A_PROCEDURE(struct A68t228 *,A68t402,(struct A68t228 *,A68_INT ,A68_INT ),(struct A68t228 *,A68_INT ,A68_INT ,void *));
typedef struct A68t402  A68_402 ;    /* PROC(REF MODE228,INT,INT) REF MODE228 */

A_PROCEDURE(A68_BOOL ,A68t403,(struct A68t246 *),(struct A68t246 *,void *));
typedef struct A68t403  A68_403 ;    /* PROC(REF MODE246) BOOL */

A_PROCEDURE(struct A68t246 *,A68t404,(struct A68t246 *,A68_INT ,A68_INT ),(struct A68t246 *,A68_INT ,A68_INT ,void *));
typedef struct A68t404  A68_404 ;    /* PROC(REF MODE246,INT,INT) REF MODE246 */

A_PROCEDURE(A68_VOID ,A68t405,(struct A68t222 ,struct A68t185 ,struct A68t185 ,struct A68t222 ,struct A68t222 *),(struct A68t222 ,struct A68t185 ,struct A68t185 ,struct A68t222 ,struct A68t222 *,void *));
typedef struct A68t405  A68_405 ;    /* PROC(MODE222,MODE185,MODE185,MODE222) MODE222 */

A_PROCEDURE(A68_INT ,A68t406,(struct A68t246 *),(struct A68t246 *,void *));
typedef struct A68t406  A68_406 ;    /* PROC(REF MODE246) INT */

A_PROCEDURE(A68_VOID ,A68t407,(A68_INT ,struct A68t246 *,A68_VC *),(A68_INT ,struct A68t246 *,A68_VC *,void *));
typedef struct A68t407  A68_407 ;    /* PROC(INT,REF MODE246) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t408,(A68_INT ,struct A68t222 ,struct A68t222 ,struct A68t222 *),(A68_INT ,struct A68t222 ,struct A68t222 ,struct A68t222 *,void *));
typedef struct A68t408  A68_408 ;    /* PROC(INT,MODE222,MODE222) MODE222 */
struct A68t409 { A68_INT mode; union {
struct A68t230 * mode1;
struct A68t232 * mode2;
} data; };
typedef struct A68t409  A68_409 ;    /* UNION(REF MODE230,REF MODE232)  */
A_ISTRUCT(A68_CHAR ,15,A68t410);
typedef struct A68t410  A68_410 ;    /* STRUCT 15 CHAR */

A_PROCEDURE(A68_VOID ,A68t411,(struct A68t222 ,struct A68t222 *),(struct A68t222 ,struct A68t222 *,void *));
typedef struct A68t411  A68_411 ;    /* PROC(MODE222) MODE222 */

A_PROCEDURE(A68_VOID ,A68t412,(struct A68t172 ,struct A68t222 *),(struct A68t172 ,struct A68t222 *,void *));
typedef struct A68t412  A68_412 ;    /* PROC(MODE172) MODE222 */

A_PROCEDURE(A68_BOOL ,A68t413,(struct A68t193 *),(struct A68t193 *,void *));
typedef struct A68t413  A68_413 ;    /* PROC(REF MODE193) BOOL */
struct A68t414{
A68_INT  T;
A_PAD_INT(PAD_129)
};
typedef struct A68t414  A68_414 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_VOID ,A68t415,(A68_INT ,struct A68t414 *),(A68_INT ,struct A68t414 *,void *));
typedef struct A68t415  A68_415 ;    /* PROC(INT) MODE414 */

A_PROCEDURE(A68_VOID ,A68t416,(A68_BOOL ,struct A68t414 *),(A68_BOOL ,struct A68t414 *,void *));
typedef struct A68t416  A68_416 ;    /* PROC(BOOL) MODE414 */

A_PROCEDURE(A68_BOOL ,A68t417,(struct A68t414 ,struct A68t414 ),(struct A68t414 ,struct A68t414 ,void *));
typedef struct A68t417  A68_417 ;    /* PROC(MODE414,MODE414) BOOL */

A_PROCEDURE(A68_VOID ,A68t418,(struct A68t414 ,struct A68t414 ,struct A68t414 *),(struct A68t414 ,struct A68t414 ,struct A68t414 *,void *));
typedef struct A68t418  A68_418 ;    /* PROC(MODE414,MODE414) MODE414 */
struct A68t419{
struct A68t414  Test;
struct A68t185  Integer;
};
typedef struct A68t419  A68_419 ;    /* STRUCT(MODE414,MODE185)  */

A_PROCEDURE(A68_VOID ,A68t420,(struct A68t185 ,struct A68t185 ,A68_INT ,struct A68t414 *),(struct A68t185 ,struct A68t185 ,A68_INT ,struct A68t414 *,void *));
typedef struct A68t420  A68_420 ;    /* PROC(MODE185,MODE185,INT) MODE414 */
struct A68t421{
A68_INT  C;
A_PAD_INT(PAD_130)
};
typedef struct A68t421  A68_421 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_VOID ,A68t422,(A68_INT ,struct A68t421 *),(A68_INT ,struct A68t421 *,void *));
typedef struct A68t422  A68_422 ;    /* PROC(INT) MODE421 */

A_PROCEDURE(A68_VOID ,A68t423,(struct A68t421 ,struct A68t185 ,struct A68t185 ,A68_INT ,struct A68t262 ,A68_INT ,struct A68t419 *),(struct A68t421 ,struct A68t185 ,struct A68t185 ,A68_INT ,struct A68t262 ,A68_INT ,struct A68t419 *,void *));
typedef struct A68t423  A68_423 ;    /* PROC(MODE421,MODE185,MODE185,INT,MODE262,INT) MODE419 */

A_PROCEDURE(A68_VOID ,A68t424,(struct A68t185 ,struct A68t185 ,struct A68t421 ,struct A68t185 *),(struct A68t185 ,struct A68t185 ,struct A68t421 ,struct A68t185 *,void *));
typedef struct A68t424  A68_424 ;    /* PROC(MODE185,MODE185,MODE421) MODE185 */

A_PROCEDURE(A68_VOID ,A68t425,(struct A68t185 ,struct A68t188 *),(struct A68t185 ,struct A68t188 *,void *));
typedef struct A68t425  A68_425 ;    /* PROC(MODE185) MODE188 */

A_PROCEDURE(A68_BOOL ,A68t426,(struct A68t421 ,struct A68t185 *,struct A68t185 ,A68_INT ,struct A68t262 ),(struct A68t421 ,struct A68t185 *,struct A68t185 ,A68_INT ,struct A68t262 ,void *));
typedef struct A68t426  A68_426 ;    /* PROC(MODE421,REF MODE185,MODE185,INT,MODE262) BOOL */

A_PROCEDURE(A68_BOOL ,A68t427,(struct A68t185 ,struct A68t185 ,A68_INT ),(struct A68t185 ,struct A68t185 ,A68_INT ,void *));
typedef struct A68t427  A68_427 ;    /* PROC(MODE185,MODE185,INT) BOOL */

A_PROCEDURE(A68_BOOL ,A68t428,(struct A68t172 ,struct A68t172 ,A68_INT ),(struct A68t172 ,struct A68t172 ,A68_INT ,void *));
typedef struct A68t428  A68_428 ;    /* PROC(MODE172,MODE172,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t429,(struct A68t172 ,struct A68t172 ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_INT ,struct A68t414 *),(struct A68t172 ,struct A68t172 ,A68_BOOL ,A68_BOOL ,A68_BOOL ,A68_INT ,struct A68t414 *,void *));
typedef struct A68t429  A68_429 ;    /* PROC(MODE172,MODE172,BOOL,BOOL,BOOL,INT) MODE414 */

A_PROCEDURE(A68_VOID ,A68t430,(struct A68t249 *,struct A68t249 *,struct A68t414 *),(struct A68t249 *,struct A68t249 *,struct A68t414 *,void *));
typedef struct A68t430  A68_430 ;    /* PROC(REF MODE249,REF MODE249) MODE414 */

A_PROCEDURE(A68_VOID ,A68t431,(struct A68t251 *,struct A68t251 *,struct A68t414 *),(struct A68t251 *,struct A68t251 *,struct A68t414 *,void *));
typedef struct A68t431  A68_431 ;    /* PROC(REF MODE251,REF MODE251) MODE414 */

A_PROCEDURE(A68_VOID ,A68t432,(struct A68t222 ,struct A68t222 ,A68_BOOL ,struct A68t414 *),(struct A68t222 ,struct A68t222 ,A68_BOOL ,struct A68t414 *,void *));
typedef struct A68t432  A68_432 ;    /* PROC(MODE222,MODE222,BOOL) MODE414 */

A_PROCEDURE(A68_VOID ,A68t433,(struct A68t222 ,struct A68t222 ,struct A68t414 *),(struct A68t222 ,struct A68t222 ,struct A68t414 *,void *));
typedef struct A68t433  A68_433 ;    /* PROC(MODE222,MODE222) MODE414 */

A_PROCEDURE(A68_VOID ,A68t434,(A68_CHAR ,A68_CHAR ,A68_CHAR ,A68_CHAR ,struct A68t414 *),(A68_CHAR ,A68_CHAR ,A68_CHAR ,A68_CHAR ,struct A68t414 *,void *));
typedef struct A68t434  A68_434 ;    /* PROC(CHAR,CHAR,CHAR,CHAR) MODE414 */

A_PROCEDURE(A68_VOID ,A68t435,(struct A68t233 ,struct A68t233 ,struct A68t414 *),(struct A68t233 ,struct A68t233 ,struct A68t414 *,void *));
typedef struct A68t435  A68_435 ;    /* PROC(MODE233,MODE233) MODE414 */
struct A68t436 { A68_INT mode; union {
struct A68t242 * mode1;
struct A68t238 * mode2;
struct A68t239 * mode3;
struct A68t240 * mode4;
} data; };
typedef struct A68t436  A68_436 ;    /* UNION(REF MODE242,REF MODE238,REF MODE239,REF MODE240)  */

A_PROCEDURE(A68_VOID ,A68t437,(struct A68t172 ,struct A68t172 ,struct A68t414 *),(struct A68t172 ,struct A68t172 ,struct A68t414 *,void *));
typedef struct A68t437  A68_437 ;    /* PROC(MODE172,MODE172) MODE414 */

A_PROCEDURE(A68_BOOL ,A68t438,(struct A68t172 ,struct A68t172 ),(struct A68t172 ,struct A68t172 ,void *));
typedef struct A68t438  A68_438 ;    /* PROC(MODE172,MODE172) BOOL */

A_PROCEDURE(A68_BOOL ,A68t439,(struct A68t172 ,struct A68t172 ,A68_INT ,A68_BOOL ),(struct A68t172 ,struct A68t172 ,A68_INT ,A68_BOOL ,void *));
typedef struct A68t439  A68_439 ;    /* PROC(MODE172,MODE172,INT,BOOL) BOOL */

A_PROCEDURE(A68_BOOL ,A68t440,(struct A68t172 ,struct A68t172 ,A68_BOOL ),(struct A68t172 ,struct A68t172 ,A68_BOOL ,void *));
typedef struct A68t440  A68_440 ;    /* PROC(MODE172,MODE172,BOOL) BOOL */

A_PROCEDURE(A68_BOOL ,A68t441,(struct A68t185 ,struct A68t185 ),(struct A68t185 ,struct A68t185 ,void *));
typedef struct A68t441  A68_441 ;    /* PROC(MODE185,MODE185) BOOL */

A_PROCEDURE(A68_BOOL ,A68t442,(struct A68t170 ,struct A68t170 ),(struct A68t170 ,struct A68t170 ,void *));
typedef struct A68t442  A68_442 ;    /* PROC(MODE170,MODE170) BOOL */

A_PROCEDURE(A68_BOOL ,A68t443,(struct A68t246 *,struct A68t246 *),(struct A68t246 *,struct A68t246 *,void *));
typedef struct A68t443  A68_443 ;    /* PROC(REF MODE246,REF MODE246) BOOL */
struct A68t444 { A68_INT mode; union {
struct A68t182  mode1;
struct A68t259  mode2;
} data; };
typedef struct A68t444  A68_444 ;    /* UNION(MODE182,MODE259)  */

A_PROCEDURE(A68_BOOL ,A68t445,(struct A68t198 *,struct A68t244 *),(struct A68t198 *,struct A68t244 *,void *));
typedef struct A68t445  A68_445 ;    /* PROC(REF MODE198,REF MODE244) BOOL */

A_PROCEDURE(A68_INT ,A68t446,(struct A68t167 *,struct A68t167 *,A68_BOOL ),(struct A68t167 *,struct A68t167 *,A68_BOOL ,void *));
typedef struct A68t446  A68_446 ;    /* PROC(REF MODE167,REF MODE167,BOOL) INT */

A_PROCEDURE(A68_INT ,A68t447,(struct A68t169 *,struct A68t169 *,A68_INT ),(struct A68t169 *,struct A68t169 *,A68_INT ,void *));
typedef struct A68t447  A68_447 ;    /* PROC(REF MODE169,REF MODE169,INT) INT */

A_PROCEDURE(struct A68t244 *,A68t448,(struct A68t171 *),(struct A68t171 *,void *));
typedef struct A68t448  A68_448 ;    /* PROC(REF MODE171) REF MODE244 */

A_PROCEDURE(A68_BOOL ,A68t449,(struct A68t171 *,struct A68t171 *),(struct A68t171 *,struct A68t171 *,void *));
typedef struct A68t449  A68_449 ;    /* PROC(REF MODE171,REF MODE171) BOOL */

A_PROCEDURE(A68_VOID ,A68t450,(struct A68t167 *,struct A68t166 *),(struct A68t167 *,struct A68t166 *,void *));
typedef struct A68t450  A68_450 ;    /* PROC(REF MODE167,REF MODE166) VOID */
A_ISTRUCT(struct A68t263 ,3,A68t451);
typedef struct A68t451  A68_451 ;    /* STRUCT 3 MODE263 */

A_PROCEDURE(A68_BOOL ,A68t452,(struct A68t172 ),(struct A68t172 ,void *));
typedef struct A68t452  A68_452 ;    /* PROC(MODE172) BOOL */

A_PROCEDURE(A68_VOID ,A68t453,(struct A68t172 ,struct A68t248 *),(struct A68t172 ,struct A68t248 *,void *));
typedef struct A68t453  A68_453 ;    /* PROC(MODE172) MODE248 */

A_PROCEDURE(A68_BOOL ,A68t454,(struct A68t222 ,A68_INT ),(struct A68t222 ,A68_INT ,void *));
typedef struct A68t454  A68_454 ;    /* PROC(MODE222,INT) BOOL */

A_PROCEDURE(A68_BOOL ,A68t455,(struct A68t172 ,A68_INT ),(struct A68t172 ,A68_INT ,void *));
typedef struct A68t455  A68_455 ;    /* PROC(MODE172,INT) BOOL */

A_PROCEDURE(A68_BOOL ,A68t456,(struct A68t185 ,A68_INT ),(struct A68t185 ,A68_INT ,void *));
typedef struct A68t456  A68_456 ;    /* PROC(MODE185,INT) BOOL */

A_PROCEDURE(A68_BOOL ,A68t457,(A68_VC ,struct A68t293 *,struct A68t244 *),(A68_VC ,struct A68t293 *,struct A68t244 *,void *));
typedef struct A68t457  A68_457 ;    /* PROC(REF MODE26,REF MODE293,REF MODE244) BOOL */

A_PROCEDURE(struct A68t172 *,A68t458,(struct A68t172 ,A68_INT ),(struct A68t172 ,A68_INT ,void *));
typedef struct A68t458  A68_458 ;    /* PROC(MODE172,INT) REF MODE172 */

A_PROCEDURE(struct A68t171 *,A68t459,(struct A68t171 *,struct A68t171 *),(struct A68t171 *,struct A68t171 *,void *));
typedef struct A68t459  A68_459 ;    /* PROC(REF MODE171,REF MODE171) REF MODE171 */

A_PROCEDURE(A68_VOID ,A68t460,(struct A68t172 ,A68_INT ,struct A68t172 *),(struct A68t172 ,A68_INT ,struct A68t172 *,void *));
typedef struct A68t460  A68_460 ;    /* PROC(MODE172,INT) MODE172 */

A_PROCEDURE(struct A68t175 *,A68t461,(struct A68t175 *),(struct A68t175 *,void *));
typedef struct A68t461  A68_461 ;    /* PROC(REF MODE175) REF MODE175 */

A_PROCEDURE(A68_VOID ,A68t462,(struct A68t268 ,A68_INT ,struct A68t185 ,struct A68t185 *),(struct A68t268 ,A68_INT ,struct A68t185 ,struct A68t185 *,void *));
typedef struct A68t462  A68_462 ;    /* PROC(MODE268,INT,MODE185) MODE185 */

A_PROCEDURE(A68_VOID ,A68t463,(struct A68t185 *,A68_INT ,struct A68t185 *),(struct A68t185 *,A68_INT ,struct A68t185 *,void *));
typedef struct A68t463  A68_463 ;    /* PROC(REF MODE185,INT) MODE185 */

A_PROCEDURE(A68_VOID ,A68t464,(struct A68t268 ,A68_INT ,struct A68t172 ,struct A68t172 *),(struct A68t268 ,A68_INT ,struct A68t172 ,struct A68t172 *,void *));
typedef struct A68t464  A68_464 ;    /* PROC(MODE268,INT,MODE172) MODE172 */

A_PROCEDURE(struct A68t249 *,A68t465,(struct A68t249 *),(struct A68t249 *,void *));
typedef struct A68t465  A68_465 ;    /* PROC(REF MODE249) REF MODE249 */

A_PROCEDURE(struct A68t175 *,A68t466,(struct A68t175 *,A68_INT ,A68_INT ),(struct A68t175 *,A68_INT ,A68_INT ,void *));
typedef struct A68t466  A68_466 ;    /* PROC(REF MODE175,INT,INT) REF MODE175 */

A_PROCEDURE(A68_VOID ,A68t467,(struct A68t172 ,struct A68t185 ,struct A68t172 *),(struct A68t172 ,struct A68t185 ,struct A68t172 *,void *));
typedef struct A68t467  A68_467 ;    /* PROC(MODE172,MODE185) MODE172 */

A_PROCEDURE(A68_VOID ,A68t468,(struct A68t172 ,struct A68t185 ,struct A68t185 ,struct A68t185 *,struct A68t185 *,struct A68t172 *),(struct A68t172 ,struct A68t185 ,struct A68t185 ,struct A68t185 *,struct A68t185 *,struct A68t172 *,void *));
typedef struct A68t468  A68_468 ;    /* PROC(MODE172,MODE185,MODE185,REF MODE185,REF MODE185) MODE172 */

A_PROCEDURE(A68_VOID ,A68t469,(struct A68t172 ,struct A68t172 ,struct A68t185 ,struct A68t172 *),(struct A68t172 ,struct A68t172 ,struct A68t185 ,struct A68t172 *,void *));
typedef struct A68t469  A68_469 ;    /* PROC(MODE172,MODE172,MODE185) MODE172 */

A_PROCEDURE(A68_VOID ,A68t470,(struct A68t172 ,struct A68t172 ,A68_BOOL *,A68_INT *,struct A68t172 *),(struct A68t172 ,struct A68t172 ,A68_BOOL *,A68_INT *,struct A68t172 *,void *));
typedef struct A68t470  A68_470 ;    /* PROC(MODE172,MODE172,REF BOOL,REF INT) MODE172 */

A_PROCEDURE(struct A68t175 *,A68t471,(struct A68t228 *),(struct A68t228 *,void *));
typedef struct A68t471  A68_471 ;    /* PROC(REF MODE228) REF MODE175 */

A_PROCEDURE(A68_VOID ,A68t472,(struct A68t172 ,A68_INT *,struct A68t172 *,struct A68t414 *),(struct A68t172 ,A68_INT *,struct A68t172 *,struct A68t414 *,void *));
typedef struct A68t472  A68_472 ;    /* PROC(MODE172,REF INT,REF MODE172,REF MODE414) VOID */

A_PROCEDURE(A68_BOOL ,A68t473,(struct A68t172 ,struct A68t172 ,struct A68t265 *),(struct A68t172 ,struct A68t172 ,struct A68t265 *,void *));
typedef struct A68t473  A68_473 ;    /* PROC(MODE172,MODE172,REF MODE265) BOOL */

A_PROCEDURE(A68_VOID ,A68t474,(A68_INT ,struct A68t244 *,struct A68t166 *),(A68_INT ,struct A68t244 *,struct A68t166 *,void *));
typedef struct A68t474  A68_474 ;    /* PROC(INT,REF MODE244,REF MODE166) VOID */

A_PROCEDURE(A68_BOOL ,A68t475,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t475  A68_475 ;    /* PROC(INT,INT) BOOL */
A_ISTRUCT(A68_CHAR ,2,A68t476);
typedef struct A68t476  A68_476 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(A68_CHAR ,20,A68t477);
typedef struct A68t477  A68_477 ;    /* STRUCT 20 CHAR */
A_ISTRUCT(A68_CHAR ,19,A68t478);
typedef struct A68t478  A68_478 ;    /* STRUCT 19 CHAR */

A_PROCEDURE(A68_BOOL ,A68t479,(A68_INT ,A68_INT ,struct A68t251 *),(A68_INT ,A68_INT ,struct A68t251 *,void *));
typedef struct A68t479  A68_479 ;    /* PROC(INT,INT,REF MODE251) BOOL */

A_PROCEDURE(struct A68t244 *,A68t480,(A68_VC ),(A68_VC ,void *));
typedef struct A68t480  A68_480 ;    /* PROC(REF MODE26) REF MODE244 */

A_PROCEDURE(struct A68t167 *,A68t481,(A68_VC ,A68_BOOL ,A68_INT ,A68_INT ,A68_INT ),(A68_VC ,A68_BOOL ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t481  A68_481 ;    /* PROC(REF MODE26,BOOL,INT,INT,INT) REF MODE167 */

A_PROCEDURE(struct A68t244 *,A68t482,(A68_VC ,struct A68t293 *,A68_BOOL ),(A68_VC ,struct A68t293 *,A68_BOOL ,void *));
typedef struct A68t482  A68_482 ;    /* PROC(REF MODE26,REF MODE293,BOOL) REF MODE244 */

A_PROCEDURE(struct A68t166 *,A68t483,(A68_VC ,struct A68t166 *,struct A68t293 *,A68_BOOL ),(A68_VC ,struct A68t166 *,struct A68t293 *,A68_BOOL ,void *));
typedef struct A68t483  A68_483 ;    /* PROC(REF MODE26,REF MODE166,REF MODE293,BOOL) REF MODE166 */

A_PROCEDURE(A68_BOOL ,A68t484,(struct A68t172 ,struct A68t293 *),(struct A68t172 ,struct A68t293 *,void *));
typedef struct A68t484  A68_484 ;    /* PROC(MODE172,REF MODE293) BOOL */

A_PROCEDURE(struct A68t166 *,A68t485,(A68_VC ,struct A68t166 *),(A68_VC ,struct A68t166 *,void *));
typedef struct A68t485  A68_485 ;    /* PROC(REF MODE26,REF MODE166) REF MODE166 */

A_PROCEDURE(A68_VOID ,A68t486,(A68_VC ,struct A68t199 ),(A68_VC ,struct A68t199 ,void *));
typedef struct A68t486  A68_486 ;    /* PROC(REF MODE26,MODE199) VOID */

A_PROCEDURE(A68_VOID ,A68t487,(struct A68t244 *,struct A68t293 *),(struct A68t244 *,struct A68t293 *,void *));
typedef struct A68t487  A68_487 ;    /* PROC(REF MODE244,REF MODE293) VOID */

A_PROCEDURE(A68_VOID ,A68t488,(struct A68t166 *,struct A68t293 *),(struct A68t166 *,struct A68t293 *,void *));
typedef struct A68t488  A68_488 ;    /* PROC(REF MODE166,REF MODE293) VOID */

A_PROCEDURE(A68_VOID ,A68t489,(struct A68t172 ,A68_BOOL ,struct A68t210 *),(struct A68t172 ,A68_BOOL ,struct A68t210 *,void *));
typedef struct A68t489  A68_489 ;    /* PROC(MODE172,BOOL) MODE210 */

A_PROCEDURE(A68_VOID ,A68t490,(A68_BOOL ,struct A68t221 *),(A68_BOOL ,struct A68t221 *,void *));
typedef struct A68t490  A68_490 ;    /* PROC(BOOL) MODE221 */

A_PROCEDURE(struct A68t214 *,A68t491,(struct A68t175 *),(struct A68t175 *,void *));
typedef struct A68t491  A68_491 ;    /* PROC(REF MODE175) REF MODE214 */

A_PROCEDURE(A68_VOID ,A68t492,(struct A68t171 *,A68_INT ,struct A68t167 *),(struct A68t171 *,A68_INT ,struct A68t167 *,void *));
typedef struct A68t492  A68_492 ;    /* PROC(REF MODE171,INT,REF MODE167) VOID */

A_PROCEDURE(A68_VOID ,A68t493,(struct A68t172 ,A68_INT ,struct A68t244 *),(struct A68t172 ,A68_INT ,struct A68t244 *,void *));
typedef struct A68t493  A68_493 ;    /* PROC(MODE172,INT,REF MODE244) VOID */

A_PROCEDURE(A68_BOOL ,A68t494,(struct A68t210 *),(struct A68t210 *,void *));
typedef struct A68t494  A68_494 ;    /* PROC(REF MODE210) BOOL */

A_PROCEDURE(A68_BOOL ,A68t495,(struct A68t214 *),(struct A68t214 *,void *));
typedef struct A68t495  A68_495 ;    /* PROC(REF MODE214) BOOL */

A_PROCEDURE(A68_BOOL ,A68t496,(struct A68t218 *),(struct A68t218 *,void *));
typedef struct A68t496  A68_496 ;    /* PROC(REF MODE218) BOOL */

A_PROCEDURE(A68_BOOL ,A68t497,(struct A68t171 *),(struct A68t171 *,void *));
typedef struct A68t497  A68_497 ;    /* PROC(REF MODE171) BOOL */

A_PROCEDURE(A68_VOID ,A68t498,(struct A68t210 *,struct A68t218 ,A68_BOOL ),(struct A68t210 *,struct A68t218 ,A68_BOOL ,void *));
typedef struct A68t498  A68_498 ;    /* PROC(REF MODE210,MODE218,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t499,(struct A68t218 *,A68_BOOL ,struct A68t218 *),(struct A68t218 *,A68_BOOL ,struct A68t218 *,void *));
typedef struct A68t499  A68_499 ;    /* PROC(REF MODE218,BOOL) MODE218 */

A_PROCEDURE(A68_VOID ,A68t500,(struct A68t214 *),(struct A68t214 *,void *));
typedef struct A68t500  A68_500 ;    /* PROC(REF MODE214) VOID */

A_PROCEDURE(A68_VOID ,A68t501,(struct A68t210 *,A68_BOOL ,A68_BOOL ),(struct A68t210 *,A68_BOOL ,A68_BOOL ,void *));
typedef struct A68t501  A68_501 ;    /* PROC(REF MODE210,BOOL,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t502,(struct A68t214 *,struct A68t210 *),(struct A68t214 *,struct A68t210 *,void *));
typedef struct A68t502  A68_502 ;    /* PROC(REF MODE214) MODE210 */

A_PROCEDURE(A68_INT ,A68t503,(struct A68t210 ),(struct A68t210 ,void *));
typedef struct A68t503  A68_503 ;    /* PROC(MODE210) INT */

A_PROCEDURE(A68_VOID ,A68t504,(struct A68t185 *,struct A68t185 *,A68_INT ,struct A68t414 *),(struct A68t185 *,struct A68t185 *,A68_INT ,struct A68t414 *,void *));
typedef struct A68t504  A68_504 ;    /* PROC(REF MODE185,REF MODE185,INT) MODE414 */

A_PROCEDURE(A68_VOID ,A68t505,(struct A68t210 *,A68_INT ,A68_INT ,struct A68t210 *),(struct A68t210 *,A68_INT ,A68_INT ,struct A68t210 *,void *));
typedef struct A68t505  A68_505 ;    /* PROC(REF MODE210,INT,INT) MODE210 */

A_PROCEDURE(struct A68t214 *,A68t506,(struct A68t214 *,A68_INT ),(struct A68t214 *,A68_INT ,void *));
typedef struct A68t506  A68_506 ;    /* PROC(REF MODE214,INT) REF MODE214 */

A_PROCEDURE(A68_VOID ,A68t507,(struct A68t210 *,struct A68t185 ,struct A68t185 ,struct A68t210 *),(struct A68t210 *,struct A68t185 ,struct A68t185 ,struct A68t210 *,void *));
typedef struct A68t507  A68_507 ;    /* PROC(REF MODE210,MODE185,MODE185) MODE210 */

A_PROCEDURE(A68_VOID ,A68t508,(struct A68t293 **,struct A68t244 **,struct A68t166 **),(struct A68t293 **,struct A68t244 **,struct A68t166 **,void *));
typedef struct A68t508  A68_508 ;    /* PROC(REF REF MODE293,REF REF MODE244,REF REF MODE166) VOID */

A_PROCEDURE(A68_VOID ,A68t509,(struct A68t171 *,struct A68t167 *),(struct A68t171 *,struct A68t167 *,void *));
typedef struct A68t509  A68_509 ;    /* PROC(REF MODE171,REF MODE167) VOID */

A_PROCEDURE(A68_VOID ,A68t510,(struct A68t172 ,struct A68t244 *),(struct A68t172 ,struct A68t244 *,void *));
typedef struct A68t510  A68_510 ;    /* PROC(MODE172,REF MODE244) VOID */

A_PROCEDURE(struct A68t171 *,A68t511,(struct A68t244 **,A68_INT ),(struct A68t244 **,A68_INT ,void *));
typedef struct A68t511  A68_511 ;    /* PROC(REF REF MODE244,INT) REF MODE171 */

A_PROCEDURE(struct A68t171 *,A68t512,(struct A68t244 *,struct A68t175 *),(struct A68t244 *,struct A68t175 *,void *));
typedef struct A68t512  A68_512 ;    /* PROC(REF MODE244,REF MODE175) REF MODE171 */

A_PROCEDURE(struct A68t171 *,A68t513,(struct A68t244 *,struct A68t172 ),(struct A68t244 *,struct A68t172 ,void *));
typedef struct A68t513  A68_513 ;    /* PROC(REF MODE244,MODE172) REF MODE171 */

A_PROCEDURE(struct A68t381 ,A68t514,(struct A68t287 *),(struct A68t287 *,void *));
typedef struct A68t514  A68_514 ;    /* PROC(REF MODE287) MODE381 */

A_PROCEDURE(A68_VOID ,A68t515,(struct A68t169 *,struct A68t287 *),(struct A68t169 *,struct A68t287 *,void *));
typedef struct A68t515  A68_515 ;    /* PROC(REF MODE169,REF MODE287) VOID */

A_PROCEDURE(A68_BOOL ,A68t516,(struct A68t169 *),(struct A68t169 *,void *));
typedef struct A68t516  A68_516 ;    /* PROC(REF MODE169) BOOL */

A_PROCEDURE(struct A68t169 *,A68t517,(struct A68t169 *),(struct A68t169 *,void *));
typedef struct A68t517  A68_517 ;    /* PROC(REF MODE169) REF MODE169 */

A_PROCEDURE(struct A68t268 *,A68t518,(struct A68t167 *),(struct A68t167 *,void *));
typedef struct A68t518  A68_518 ;    /* PROC(REF MODE167) REF MODE268 */

A_PROCEDURE(A68_VOID ,A68t519,(struct A68t219 *,A68_INT ,struct A68t210 *),(struct A68t219 *,A68_INT ,struct A68t210 *,void *));
typedef struct A68t519  A68_519 ;    /* PROC(REF MODE219,INT) MODE210 */

A_PROCEDURE(struct A68t220 *,A68t520,(struct A68t220 *),(struct A68t220 *,void *));
typedef struct A68t520  A68_520 ;    /* PROC(REF MODE220) REF MODE220 */

A_PROCEDURE(A68_VOID ,A68t521,(struct A68t210 ,A68_INT ,A68_BOOL ,struct A68t210 *),(struct A68t210 ,A68_INT ,A68_BOOL ,struct A68t210 *,void *));
typedef struct A68t521  A68_521 ;    /* PROC(MODE210,INT,BOOL) MODE210 */

A_PROCEDURE(struct A68t214 *,A68t522,(struct A68t214 *),(struct A68t214 *,void *));
typedef struct A68t522  A68_522 ;    /* PROC(REF MODE214) REF MODE214 */

A_PROCEDURE(A68_VOID ,A68t523,(struct A68t317 *,struct A68t210 ,struct A68t210 *),(struct A68t317 *,struct A68t210 ,struct A68t210 *,void *));
typedef struct A68t523  A68_523 ;    /* PROC(REF MODE317,MODE210) MODE210 */

A_PROCEDURE(A68_VOID ,A68t524,(struct A68t244 *,struct A68t317 *,struct A68t210 ,struct A68t210 *),(struct A68t244 *,struct A68t317 *,struct A68t210 ,struct A68t210 *,void *));
typedef struct A68t524  A68_524 ;    /* PROC(REF MODE244,REF MODE317,MODE210) MODE210 */

A_PROCEDURE(struct A68t212 *,A68t525,(struct A68t171 *,struct A68t268 ),(struct A68t171 *,struct A68t268 ,void *));
typedef struct A68t525  A68_525 ;    /* PROC(REF MODE171,MODE268) REF MODE212 */

A_PROCEDURE(struct A68t212 *,A68t526,(struct A68t212 *,A68_VC ),(struct A68t212 *,A68_VC ,void *));
typedef struct A68t526  A68_526 ;    /* PROC(REF MODE212,REF MODE26) REF MODE212 */

A_PROCEDURE(struct A68t212 *,A68t527,(struct A68t211 *,A68_VC ),(struct A68t211 *,A68_VC ,void *));
typedef struct A68t527  A68_527 ;    /* PROC(REF MODE211,REF MODE26) REF MODE212 */

A_PROCEDURE(A68_BOOL ,A68t528,(struct A68t249 *,struct A68t249 *),(struct A68t249 *,struct A68t249 *,void *));
typedef struct A68t528  A68_528 ;    /* PROC(REF MODE249,REF MODE249) BOOL */

A_PROCEDURE(A68_BOOL ,A68t529,(struct A68t250 ,struct A68t250 ),(struct A68t250 ,struct A68t250 ,void *));
typedef struct A68t529  A68_529 ;    /* PROC(MODE250,MODE250) BOOL */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from sidanalyser --- */
extern A68_BOOL  YCAAELA_checkinsert(A68_INT ,struct A68t337 );
/* --- End of imports from sidanalyser --- */


/* --- Imports from messageproc --- */
extern A68_46  VJAAOSI_nullmsg;
/* --- End of imports from messageproc --- */


/* --- Imports from compmodes --- */
extern A68_INT  EJCAELA_textstart;
#define ZICAELA_linesize 160
#define IJCAELA_iconst 1
#define QJCAELA_iconsttext 9
#define JJCAELA_iname 2
#define KJCAELA_idop 3
#define LJCAELA_imop 4
#define MJCAELA_icond 5
#define NJCAELA_iparam 6
#define OJCAELA_ivarmult 7
#define PJCAELA_icheck 8
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
#define EKCAELA_calt 23
#define TKCAELA_vif 38
#define VKCAELA_vvarmult 40
#define XKCAELA_end 42
#define YKCAELA_fnstart 43
#define ZKCAELA_fnend 44
#define DLCAELA_typename 48
#define FLCAELA_pidalts 50
#define GLCAELA_prange 51
#define MLCAELA_dummy 58
#define FMCAELA_vseq 80
#define GMCAELA_vpar 81
#define XMCAELA_seqif 98
#define YMCAELA_seqvarmult 99
#define HJCAELA_zero 0
#define VNCAELA_idef 122
#define UNCAELA_intname 121
#define QNCAELA_normalfn 117
#define PNCAELA_inull 116
#define NNCAELA_cquery 114
#define MNCAELA_c_type 113
#define SNCAELA_inst 119
#define JMCAELA_ibracket 84
#define KMCAELA_tbracket 85
#define LMCAELA_cbracket 86
#define XNCAELA_pstring 128
#define YNCAELA_pchar 129
#define ZNCAELA_pcharrange 130
#define AOCAELA_cstring 131
#define BOCAELA_cprimch 132
#define COCAELA_cprimst 133
#define DOCAELA_cprimchr 134
#define HOCAELA_tstring 138
#define IOCAELA_cnamed 139
#define JOCAELA_constname 140
#define GPCAELA_diplus 1
#define HPCAELA_diminus 2
#define MPCAELA_constint 1
#define JPCAELA_flattenleft 1
#define KPCAELA_flattenright 2
#define LPCAELA_flattenboth 3
#define ANCAELA_cindex 101
#define BNCAELA_ctrim 102
#define CNCAELA_cvarmult 103
#define DNCAELA_cif 104
#define AMCAELA_cconc 75
#define BMCAELA_cattr 76
extern A68_249 * BQCAELA_nilpalts;
extern A68_244 * CQCAELA_nilids;
extern A68_175 * DQCAELA_nilst;
extern A68_172 * EQCAELA_niltype;
extern A68_171 * FQCAELA_nildecs;
extern A68_166 * HQCAELA_nilfns;
extern A68_169 * IQCAELA_nilmparams;
extern A68_229 * JQCAELA_nilcalts;
extern A68_228 * KQCAELA_nilcst;
extern A68_251 * LQCAELA_nilcharalts;
extern A68_208  CRCAELA_notdec;
extern A68_182  DRCAELA_flt;
extern A68_172  GRCAELA_o;
extern A68_197  LRCAELA_intnull;
#define ZRCAELA_idtok 1
#define DSCAELA_recovertok 10
#define ESCAELA_outputtok 26
#define ISCAELA_lettok 32
#define JSCAELA_illegaltok 0
#define KSCAELA_maketok 33
#define PSCAELA_eoftok 72
#define GTCAELA_rintdentok 2
#define HTCAELA_intdentok 2
#define ITCAELA_stringtok 3
#define KTCAELA_op1tok 4
#define LTCAELA_op2tok 6
#define MTCAELA_equalstok 7
#define RTCAELA_pormtok 79
#define STCAELA_tordtok 80
#define TTCAELA_chartok 84
extern A68_256 * MQCAELA_nilattrstr;
extern A68_259  MRCAELA_attrnull;
#define UOCAELA_attrname 151
#define VOCAELA_attid 152
#define WOCAELA_attdata 153
#define XOCAELA_attbracket 154
#define YOCAELA_attstr 155
#define ZOCAELA_attnull 156
extern A68_293 * CUCAELA_nilscope;
extern A68_280 * EUCAELA_nillastops;
extern A68_280 * FUCAELA_nillastcalls;
extern A68_269 * BUCAELA_nilparamvals;
extern A68_167 * RQCAELA_nilfndec;
extern A68_300  MFDAELA_toks;
#define WWCAELA_flt_par 0
#define XWCAELA_expl_par 1
#define BXCAELA_fn_notdec 0
#define CXCAELA_fn_flt 1
#define FXCAELA_outerdec 1
#define GXCAELA_localdec 2
#define HXCAELA_macpardec 3
extern A68_VOID  OFDAELA_getinteger(struct A68t185 ,A68_185 *);
extern A68_VOID  ZGDAELA_gettype(struct A68t172 ,A68_172 *);
extern A68_196 * DKDAELA_makeibracket(struct A68t185 );
extern A68_180 * IKDAELA_maketbracket(struct A68t172 );
extern A68_VOID  XKDAELA_makeintid(struct A68t185 ,A68_200 *);
extern A68_232 * BMDAELA_makecquery(struct A68t172 );
extern A68_177  AUCAELA_typenull;
#define MOCAELA_cparam 143
extern A68_184  NRCAELA_typevoid;
#define LOCAELA_cvoid 142
extern A68_BOOL  YTDAELA_joinequal(struct A68t218 ,struct A68t218 );
extern A68_214 * PQCAELA_niljoinst;
extern A68_VOID  HMDAELA_print_joinup(struct A68t210 *,A68_INT );
extern A68_276 * QQCAELA_niljoinstack;
extern A68_209 * GUCAELA_nilintegerstack;
extern A68_220 * SQCAELA_niljoinvarstack;
extern A68_277 * UQCAELA_niljoinmultstack;
extern A68_218  PRCAELA_jtrue;
extern A68_218  QRCAELA_jfalse;
extern A68_218  RRCAELA_jcheck;
extern A68_218  SRCAELA_jfault;
extern A68_218  TRCAELA_jvoid;
#define RPCAELA_vnamesource 1
#define SPCAELA_vnamesink 2
#define TPCAELA_vnameiosource 3
#define ROCAELA_tvoid 148
extern A68_283 * HUCAELA_nildecnocheck;
#define RNCAELA_brief 118
extern A68_VOID  DSDAELA_uncheckedint(struct A68t185 ,A68_185 *);
extern A68_212 * VQCAELA_nilportdata;
extern A68_284 * WQCAELA_nilportstack;
extern A68_317 * XQCAELA_niliddecs;
extern A68_VOID  VIDAELA_primtype(struct A68t172 ,A68_BOOL ,A68_172 *);
extern A68_193 * KTDAELA_get_intvarmult(struct A68t244 *);
/* --- End of imports from compmodes --- */


/* --- Imports from charset --- */
/* --- End of imports from charset --- */


/* --- Imports from impmacro --- */
extern A68_VOID  TGKAELA_inkept_ext(struct A68t160 ,A68_BOOL ,struct A68t161 ,struct A68t162 ,struct A68t117 ,struct A68t156 ,struct A68t163 ,struct A68t164 );
extern A68_VOID  KMLAELA_syfaultp_ext(A68_INT ,struct A68t262 ,A68_BOOL *,struct A68t164 );
extern A68_BOOL  SAMAELA_implicit_macro(struct A68t172 ,struct A68t172 ,struct A68t265 *,struct A68t266 ,struct A68t164 ,struct A68t267 );
extern A68_VOID  MFMAELA_simplify_ext(struct A68t185 ,A68_BOOL ,struct A68t164 ,A68_185 *);
/* --- End of imports from impmacro --- */


/* --- Imports from basics --- */
#define OSCAOST_maxid 255
extern A68_VC  TTCAOST_nullid;
extern A68_INT  AJDAOST_maxint;
extern A68_INT  HJDAOST_largeint;
extern A68_INT  IJDAOST_minint;
extern A68_VOID  NKDAOST_sysfault(A68_VC );
/* --- End of imports from basics --- */


/* --- Imports from osinterface --- */
extern A68_94  BOBAOSI_update_access;
extern A68_94  FOBAOSI_update_truncate_access;
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


/* --- Imports from putstrings --- */
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void BAAAELA(void);   /* sidanalyser */
extern void JFAAOSI(void);   /* messageproc */
extern void UICAELA(void);   /* compmodes */
extern void GMAATRN(void);   /* charset */
extern void GGKAELA(void);   /* impmacro */
extern void JSCAOST(void);   /* basics */
extern void PCAAOST(void);   /* osinterface */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_349   LHPAELA = {"$Id: compileproc.a68,v 34.2 1995/03/29 13:03:21 ella Exp $"}; 
A_GISVEC(A68_VC ,MHPAELA,LHPAELA,58)
#define NHPAELA_source_sink_out A68_FALSE
static A68_VC  SHPAELA_textbuff;
static A68_INT  WHPAELA_j;
static A68_INT  XHPAELA_tind;
static A68_INT  YHPAELA_textend;
A68_VC  ZHPAELA_compsymb;
static A68_INT  AIPAELA_compsize;
static A68_INT  BIPAELA_comphash;
A68_VC  CIPAELA_ident;
static A68_INT  DIPAELA_idsize;
static A68_INT  EIPAELA_idhash;
A68_VC  JIPAELA_string;
A68_INT  LIPAELA_stringsize;
static A68_INT  MIPAELA_strbase;
static A68_INT  NIPAELA_noofchars;
static A68_INT  OIPAELA_noflts;
static A68_VC  TIPAELA_ident1;
static A68_VC  VIPAELA_compsymb1;
A68_246 * XIPAELA_nonames;
A68_246 * YIPAELA_namestack;
A68_246 * ZIPAELA_paramnamestack;
#define AJPAELA_nilstringlist (A68_246 *)A68_NIL
A68_246 * BJPAELA_strings;
A68_246 * CJPAELA_classnames;
A68_246 ** DJPAELA_nextstring;
A68_VC  EJPAELA_atid;
A68_170  FJPAELA_attr;
A68_256 * GJPAELA_attrstr;
A68_256 ** HJPAELA_nextattr;
static A68_164  IJPAELA_abort1;
static A68_BOOL  JJPAELA_moreinput;
A68_BOOL  KJPAELA_nofltmess;
A68_CHAR  LJPAELA_charval;
A68_BOOL  MJPAELA_syntaxerror;
A68_INT  NJPAELA_errorrecov;
#define OJPAELA_rcnewline 50
#define PJPAELA_rcident 51
#define QJPAELA_rcequals 52
#define RJPAELA_rcmatchcom 67
#define SJPAELA_calllookup 99
static A68_BOOL  TJPAELA_incom;
A68_350  UJPAELA_ivread;
static A68_186 * VJPAELA_maxintplusone;
static A68_INT  WJPAELA_iv;
#define XJPAELA_bold 6
#define YJPAELA_letter 3
#define ZJPAELA_digit 4
#define AKPAELA_visiblespace 9
#define BKPAELA_prime 10
A68_INT  CKPAELA_t1;
A68_INT  DKPAELA_sfnno;
A68_INT  EKPAELA_ctypeno;
A68_INT  FKPAELA_cfnno;
A68_INT  GKPAELA_cintno;
A68_INT  HKPAELA_cctypeno;
A68_INT  IKPAELA_cattrno;
A68_172  JKPAELA_fp1;
A68_172  KKPAELA_fp2;
A68_VC  LKPAELA_fp3;
A68_VC  MKPAELA_fp4;
A68_167  NKPAELA_fp7;
A68_167  OKPAELA_fp8;
A68_144  PKPAELA_fp9;
A68_185  QKPAELA_fp0;
A68_185  RKPAELA_fp5;
A68_185  SKPAELA_fp6;
A68_185  TKPAELA_fpcolon;
A68_222  UKPAELA_fpopen;
A68_222  VKPAELA_fpclose;
A68_VC  WKPAELA_fpa;
A68_VC  XKPAELA_fpb;
A68_BOOL  YKPAELA_exitcomp;
A68_244 * ZKPAELA_kids;
A68_166 * ALPAELA_kfns;
A68_167 * BLPAELA_fndec_flt;
A68_167 * JLPAELA_fndec;
A68_171 * KLPAELA_decs;
A68_INT  LLPAELA_vss;
A68_INT  MLPAELA_maxvss;
A68_BOOL  NLPAELA_macroparam;
A68_244 * OLPAELA_ids;
A68_166 * PLPAELA_fns;
A68_BOOL  QLPAELA_inarith;
A68_172  RLPAELA_type;
A68_185  SLPAELA_integer;
A68_185  TLPAELA_integer1;
A68_INT  ULPAELA_k;
A68_198  VLPAELA_idinfo;
A68_268  WLPAELA_paramfncall;
A68_211  XLPAELA_portinfo;
A68_284 * YLPAELA_portstack;
A68_BOOL  ZLPAELA_specinput;
A68_283 * AMPAELA_decnocheck;
A68_INT  BMPAELA_which;
A68_VC  CMPAELA_lastop;
A68_209 * DMPAELA_makeint;
A68_175 * EMPAELA_sts;
A68_287 * FMPAELA_fnstack;
A68_265 * GMPAELA_fncallstack;
A68_BOOL  HMPAELA_errorswitch;
A68_BOOL  IMPAELA_macro;
A68_INT  JMPAELA_fndecsort;
A68_INT  KMPAELA_macsort;
A68_VC  LMPAELA_id1;
A68_VC  MMPAELA_lastcall;
A68_229 * NMPAELA_calts;
A68_222  OMPAELA_ctype;
A68_228 * PMPAELA_cstr;
A68_276 * QMPAELA_joinstack;
A68_220 * RMPAELA_joinvarstack;
A68_214 * SMPAELA_joinst;
A68_214 * TMPAELA_joinvarst;
A68_277 * UMPAELA_joinmultstack;
A68_210  VMPAELA_joinup;
A68_172  WMPAELA_jointype;
#define XMPAELA_unjoinedfntype A68_FALSE
#define YMPAELA_joinedfntype A68_TRUE
A68_BOOL  ZMPAELA_ioid;
A68_BOOL  ANPAELA_lhsjoin;
A68_BOOL  BNPAELA_nooutput;
A68_BOOL  CNPAELA_nonunitbody;
A68_294 * DNPAELA_currentstate;
A68_293 * ENPAELA_scopestack;
A68_280 * FNPAELA_lastops;
A68_280 * GNPAELA_lastcalls;
A68_CHAR  HNPAELA_charval1;
A68_251 * INPAELA_charalts;
A68_INT  JNPAELA_delaytype;
A68_INT  KNPAELA_sampletype;
A68_INT  LNPAELA_timetype;
#define MNPAELA_ints1 1
#define NNPAELA_ints2 2
A68_INT  ONPAELA_errormessage;
A68_INT  PNPAELA_scope;
A68_BOOL  QNPAELA_macroexpected;
A68_BOOL  RNPAELA_intervalok;
A68_BOOL  SNPAELA_tfaster;
A68_249 * TNPAELA_palts1;
A68_249 * UNPAELA_paltstack;
A68_205  VNPAELA_attrid;
A68_200  WNPAELA_intid;
A68_201  XNPAELA_typeid;
A68_202  YNPAELA_ctypeid;
A68_317 * ZNPAELA_iddecs;
A68_198 * AOPAELA_prangedec;
A68_292 * BOPAELA_sopstack;
A68_175 * COPAELA_typestack;
A68_209 * DOPAELA_integerstack;
A68_291 * EOPAELA_idinfostack;
A68_289 * FOPAELA_sucstack;
A68_172 * GOPAELA_rt;
A68_172  HOPAELA_t;
A68_290 * IOPAELA_casestack;
A68_144  JOPAELA_ctname;
A68_VC  KOPAELA_fna;
A68_VC  LOPAELA_fnb;
A68_244 * MOPAELA_decids;
A68_54  NOPAELA_charcheck;
A68_286 * OOPAELA_compilefnstack;
A68_286 * POPAELA_nilcompilefnstack;
A68_175 * QOPAELA_mltype;
A68_175 ** ROPAELA_nextmltype;
A68_281 * SOPAELA_nilmultlets;
A68_281 * TOPAELA_multlets;
A68_281 * UOPAELA_multiassign;
A68_351  VOPAELA_outints;
A68_43  WOPAELA_outid;
A68_43  XOPAELA_outstring;
A68_129  YOPAELA_endcomp;
A68_43  ZOPAELA_modulename;
A68_INT  APPAELA_vnno;
A68_117  BPPAELA_nextkept;
A68_117  CPPAELA_inkeptint;
A68_156  DPPAELA_inkeptid;
A68_352  EPPAELA_nextimport;
A68_353  FPPAELA_setcontext;
A68_354  GPPAELA_input;
A68_355  HPPAELA_fltmess;
A68_274  IPPAELA_lookup;
A68_163  JPPAELA_charset;
#define ESPAELA_plus 901
#define FSPAELA_minus 902
#define GSPAELA_stringonly 1
#define HSPAELA_space 2
#define ISPAELA_stringquote 5
#define JSPAELA_simple 20
#define KSPAELA_compstart 21
#define LSPAELA_compound 22
#define MSPAELA_compterm 23
static A68_359   LTPAELA = {"020400080a00000g"}; 
A_GISVEC(A68_VC ,MTPAELA,LTPAELA,16)
static A68_363   DAQAELA = {"end of file"}; 
A_GISVEC(A68_VC ,GAQAELA,DAQAELA,11)
static A68_364   MAQAELA = {"Character"}; 
A_GISVEC(A68_VC ,OAQAELA,MAQAELA,9)
static A68_365   UAQAELA = {"Integer"}; 
A_GISVEC(A68_VC ,WAQAELA,UAQAELA,7)
static A68_366   CBQAELA = {"String"}; 
A_GISVEC(A68_VC ,EBQAELA,CBQAELA,6)
static A68_376   SGQAELA = {"outextints"}; 
A_GISVEC(A68_VC ,TGQAELA,SGQAELA,10)
static A68_376   EHQAELA = {"outextattr"}; 
A_GISVEC(A68_VC ,FHQAELA,EHQAELA,10)
static A68_377   QHQAELA = {"outextctypes"}; 
A_GISVEC(A68_VC ,RHQAELA,QHQAELA,12)
static A68_382   WJQAELA = {"maxint in loadint"}; 
A_GISVEC(A68_VC ,XJQAELA,WJQAELA,17)
static A68_385   WNQAELA = {"<outprimset>1"}; 
A_GISVEC(A68_VC ,XNQAELA,WNQAELA,13)
static A68_385   ZNQAELA = {"<outprimset>2"}; 
A_GISVEC(A68_VC ,AOQAELA,ZNQAELA,13)
static A68_386   KPQAELA = {"loadtype"}; 
A_GISVEC(A68_VC ,LPQAELA,KPQAELA,8)
static A68_363   KQQAELA = {"outexttypes"}; 
A_GISVEC(A68_VC ,LQQAELA,KQQAELA,11)
static A68_389  NSQAELA_outmacspec;
A68_393  FUQAELA_ctypetotype;
static A68_365   TUQAELA = {"ptypeno"}; 
A_GISVEC(A68_VC ,UUQAELA,TUQAELA,7)
static A68_365   GVQAELA = {"ptypeno"}; 
A_GISVEC(A68_VC ,HVQAELA,GVQAELA,7)
static A68_386   YVQAELA = {"pctypeno"}; 
A_GISVEC(A68_VC ,ZVQAELA,YVQAELA,8)
static A68_364   JARAELA = {"loadctype"}; 
A_GISVEC(A68_VC ,KARAELA,JARAELA,9)
A68_397  RBRAELA_outmparams;
static A68_400  VERAELA_ctypeequals;
static A68_386   ZKRAELA = {"row_conc"}; 
A_GISVEC(A68_VC ,ALRAELA,ZKRAELA,8)
static A68_410   BNRAELA = {"string_conc - 2"}; 
A_GISVEC(A68_VC ,CNRAELA,BNRAELA,15)
static A68_410   TNRAELA = {"string_conc - 3"}; 
A_GISVEC(A68_VC ,UNRAELA,TNRAELA,15)
A68_414  ASRAELA_true;
A68_414  BSRAELA_false;
A68_414  CSRAELA_unknown;
static A68_421  ZVRAELA_checktype;
static A68_421  AWRAELA_checktypeoutput;
A68_421  BWRAELA_checkle;
A68_421  CWRAELA_checkge;
A68_421  DWRAELA_checkeq;
static A68_421  EWRAELA_checkne;
static A68_364   HYRAELA = {"test ints"}; 
A_GISVEC(A68_VC ,IYRAELA,HYRAELA,9)
A68_428  CASAELA_equiv_types;
static A68_366   BSSAELA = {"inteq1"}; 
A_GISVEC(A68_VC ,CSSAELA,BSSAELA,6)
static A68_366   ESSAELA = {"inteq2"}; 
A_GISVEC(A68_VC ,FSSAELA,ESSAELA,6)
static A68_386   FWSAELA = {"specsflt"}; 
A_GISVEC(A68_VC ,GWSAELA,FWSAELA,8)
static A68_385   VHTAELA = {"setiotype - 2"}; 
A_GISVEC(A68_VC ,WHTAELA,VHTAELA,13)
static A68_385   LJTAELA = {"setiotype - 1"}; 
A_GISVEC(A68_VC ,MJTAELA,LJTAELA,13)
static A68_363   YVTAELA = {"merge types"}; 
A_GISVEC(A68_VC ,ZVTAELA,YVTAELA,11)
static A68_363   MZTAELA = {"merge types"}; 
A_GISVEC(A68_VC ,NZTAELA,MZTAELA,11)
static A68_363   GBUAELA = {"merge types"}; 
A_GISVEC(A68_VC ,HBUAELA,GBUAELA,11)
static A68_477   JNUAELA = {"an upper case letter"}; 
A_GISVEC(A68_VC ,LNUAELA,JNUAELA,20)
static A68_478   TNUAELA = {"a lower case letter"}; 
A_GISVEC(A68_VC ,VNUAELA,TNUAELA,19)
static A68_386   DOUAELA = {"a number"}; 
A_GISVEC(A68_VC ,FOUAELA,DOUAELA,8)
static A68_366   IBVAELA = {"######"}; 
A_GISVEC(A68_VC ,JBVAELA,IBVAELA,6)
static A68_366   MBVAELA = {"######"}; 
A_GISVEC(A68_VC ,NBVAELA,MBVAELA,6)
static A68_376   XVVAELA = {"port_setup"}; 
A_GISVEC(A68_VC ,YVVAELA,XVVAELA,10)
typedef struct   /* env of non-global proc */
{
A68_163  Charsetproc;
} DQPAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} ATPAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} JUPAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} XUPAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} CWPAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} YWPAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_BOOL  Index;
A_PAD_BOOL(PAD_131)
} NLQAELA_outprimset;
typedef struct   /* env of non-global proc */
{
A68_394  LUQAELA_ptypeno;
} NUQAELA_ptypeno;
typedef struct   /* env of non-global proc */
{
A68_394  XUQAELA_pcnulltypeno;
} ZUQAELA_pcnulltypeno;
typedef struct   /* env of non-global proc */
{
A68_395  KVQAELA_pctypeno;
A68_394  LUQAELA_ptypeno;
A68_394  XUQAELA_pcnulltypeno;
} MVQAELA_pctypeno;
typedef struct   /* env of non-global proc */
{
int dummy;
} WXQAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} OYQAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} XYQAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  LJRAELA_size;
A_PAD_INT(PAD_132)
} PJRAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * IMRAELA_size;
} SMRAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} KNRAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_188 ** SWRAELA_intcheck;
} HXRAELA_getintcheck;
typedef struct   /* env of non-global proc */
{
A68_246 ** NASAELA_nstack;
} RASAELA_addname;
typedef struct   /* env of non-global proc */
{
A68_BOOL  Outcheck;
A_PAD_BOOL(PAD_133)
A68_BOOL  Ignore;
A_PAD_BOOL(PAD_134)
} EBSAELA_checkints;
typedef struct   /* env of non-global proc */
{
A68_430  NBSAELA_equalspalts;
A68_BOOL  Outcheck;
A_PAD_BOOL(PAD_135)
A68_BOOL  Ignore;
A_PAD_BOOL(PAD_136)
A68_BOOL  Exact;
A_PAD_BOOL(PAD_137)
A68_INT  Diff;
A_PAD_INT(PAD_138)
} PBSAELA_equalspalts;
typedef struct   /* env of non-global proc */
{
A68_431  BCSAELA_equalcharalts;
} DCSAELA_equalcharalts;
typedef struct   /* env of non-global proc */
{
A68_BOOL  Disjoint;
A_PAD_BOOL(PAD_139)
A68_433  QHSAELA_checkcalts;
} SHSAELA_checkcalts;
typedef struct   /* env of non-global proc */
{
A68_BOOL  Disjoint;
A_PAD_BOOL(PAD_140)
} CJSAELA_checkcharange;
typedef struct   /* env of non-global proc */
{
A68_BOOL  Disjoint;
A_PAD_BOOL(PAD_141)
} ZJSAELA_checkstring;
typedef struct   /* env of non-global proc */
{
A68_443  SSSAELA_stringsequal;
} USSAELA_stringsequal;
typedef struct   /* env of non-global proc */
{
A68_BOOL  Exact;
A_PAD_BOOL(PAD_142)
A68_447  QWSAELA_equalsmparams;
} SWSAELA_equalsmparams;
typedef struct   /* env of non-global proc */
{
A68_456  ZDTAELA_ivmno;
} BETAELA_ivmno;
typedef struct   /* env of non-global proc */
{
A68_INT  Sort;
A_PAD_INT(PAD_143)
A68_461  DITAELA_stiotype;
} FITAELA_stiotype;
typedef struct   /* env of non-global proc */
{
A68_268  P;
A68_INT  T_fnno;
A_PAD_INT(PAD_144)
A68_465  XMTAELA_substpalts;
} ZMTAELA_substpalts;
typedef struct   /* env of non-global proc */
{
A68_268  P;
A68_INT  T_fnno;
A_PAD_INT(PAD_145)
A68_461  INTAELA_substst;
} KNTAELA_substst;
typedef struct   /* env of non-global proc */
{
A68_471  AGUAELA_csttost;
} CGUAELA_csttost;
typedef struct   /* env of non-global proc */
{
int dummy;
} WMUAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} GNUAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} QNUAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} AOUAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  HVUAELA_size;
A_PAD_INT(PAD_146)
} PVUAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_BOOL  Source;
A_PAD_BOOL(PAD_147)
A68_491  DWUAELA_join_st;
} FWUAELA_join_st;
typedef struct   /* env of non-global proc */
{
A68_493  LXUAELA_makeids;
A68_167 * Fd;
} NXUAELA_makeids;
typedef struct   /* env of non-global proc */
{
A68_495  IYUAELA_check_all_jst;
} KYUAELA_check_all_jst;
typedef struct   /* env of non-global proc */
{
A68_495  IZUAELA_check_all_jst;
} KZUAELA_check_all_jst;
typedef struct   /* env of non-global proc */
{
A68_495  IAVAELA_check_all_jst;
} KAVAELA_check_all_jst;
typedef struct   /* env of non-global proc */
{
A68_218  Jtest;
A68_BOOL  Source;
A_PAD_BOOL(PAD_148)
} GEVAELA_set_check;
typedef struct   /* env of non-global proc */
{
A68_218  Jtest;
A68_BOOL  Source;
A_PAD_BOOL(PAD_149)
A68_500  YEVAELA_mark_jst;
} AFVAELA_mark_jst;
typedef struct   /* env of non-global proc */
{
A68_INT * NFVAELA_count;
A68_500  PFVAELA_jcount;
} RFVAELA_jcount;
typedef struct   /* env of non-global proc */
{
A68_INT * NFVAELA_count;
} VFVAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_500  BGVAELA_jass;
A68_221 * YFVAELA_jup;
A68_INT * NFVAELA_count;
} DGVAELA_jass;
typedef struct   /* env of non-global proc */
{
A68_INT  Upb;
A_PAD_INT(PAD_150)
A68_INT  Lwb;
A_PAD_INT(PAD_151)
} YIVAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_506  QJVAELA_jtrim;
} SJVAELA_jtrim;
typedef struct   /* env of non-global proc */
{
A68_510  VLVAELA_makeids;
A68_167 * Fd;
} XLVAELA_makeids;
typedef struct   /* env of non-global proc */
{
A68_INT  Index;
A_PAD_INT(PAD_152)
A68_520  HRVAELA_substvarstack;
} JRVAELA_substvarstack;
typedef struct   /* env of non-global proc */
{
A68_INT  Index;
A_PAD_INT(PAD_153)
A68_BOOL  Toplevel;
A_PAD_BOOL(PAD_154)
A68_522  LSVAELA_index_jst;
} NSVAELA_index_jst;
typedef struct   /* env of non-global proc */
{
A68_216 * ZSVAELA_jr;
} ETVAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  WTVAELA_size;
A_PAD_INT(PAD_155)
} BUVAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} VMQAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} GNQAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} PNQAELA_generator;

A_STATIC A68_VOID  PHPAELA_generator(A68_BOOL  OHPAELA_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  GIPAELA_generator(A68_BOOL  FIPAELA_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  QIPAELA_generator(A68_BOOL  PIPAELA_anonymous, A68_VC  *ReturnedValue);

A68_VOID  ZPPAELA_proset(A68_351  Outintsproc, A68_43  Outidproc, A68_43  Outstringproc, A68_129  Endcompproc, A68_43  Modulenameproc, A68_INT  Vnnoproc, A68_117  Nextkeptproc, A68_117  Inkeptintproc, A68_156  Inkeptidproc, A68_352  Nextimportproc, A68_353  Setcontextproc, A68_354  Inputproc, A68_355  Fltmessproc, A68_274  Lookupproc, A68_163  Charsetproc);

A_STATIC A68_VOID  CQPAELA_generator(A68_BOOL  AQPAELA_anonymous, A68_163  *ReturnedValue, void *NonLocals);

A68_VOID  MQPAELA_syfault(A68_INT  No, A68_46  Params);

A68_VOID  UQPAELA_fault(A68_INT  No, A68_46  Params);

A68_VOID  XQPAELA_abort(A68_INT  No, A68_46  Params);

A68_VOID  CRPAELA_nofault(A68_INT  No, A68_46  Params);

A68_VOID  DRPAELA_starter(void);

A_STATIC A68_VOID  NRPAELA_generator(A68_BOOL  MRPAELA_anonymous, A68_54  *ReturnedValue);

A_STATIC A68_INT  TRPAELA_primread(void);

A_STATIC A68_VOID  ZSPAELA_generator(A68_BOOL  XSPAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  IUPAELA_generator(A68_BOOL  GUPAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  WUPAELA_generator(A68_BOOL  UUPAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  BWPAELA_generator(A68_BOOL  ZVPAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  XWPAELA_generator(A68_BOOL  VWPAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_BOOL  KXPAELA_readcom(A68_INT  Commenttype);

A68_VOID  AYPAELA_read(void);

A68_VOID  PYPAELA_inkept(A68_160  Findid, A68_BOOL  Export, A68_161  Newextid, A68_162  Newextfn);

A68_VOID  SYPAELA_findkid(A68_VC  Id, A68_198  *ReturnedValue);

A68_244 * BZPAELA_newkid(A68_198  I);

A68_166 * IZPAELA_newkfn(A68_167 * F);

A68_VOID  OZPAELA_syfaultp(A68_INT  No, A68_262  Params);

A68_VOID  SZPAELA_faultp(A68_INT  No, A68_262  Params);

A68_VOID  VZPAELA_namefaultp(A68_INT  No, A68_262  Params);

A_STATIC A68_VOID  YZPAELA_t1toid(A68_VC  *ReturnedValue);

A_STATIC A68_VOID  AAQAELA_generator(A68_BOOL  ZZPAELA_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  JAQAELA_generator(A68_BOOL  IAQAELA_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  RAQAELA_generator(A68_BOOL  QAQAELA_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  ZAQAELA_generator(A68_BOOL  YAQAELA_anonymous, A68_VC  *ReturnedValue);

A68_VOID  HBQAELA_syntaxerrmess(A68_337  Error);

A68_VOID  XBQAELA_fltmessage(A68_198  Info);

A_STATIC A68_VOID  LDQAELA_setextint(A68_185  I);

A_STATIC A68_VOID  XDQAELA_setextattr(A68_170  At);

A_STATIC A68_VOID  GEQAELA_setexttype(A68_172  T);

A_STATIC A68_VOID  DFQAELA_setextctype(A68_222  Ct);

A_STATIC A68_VOID  GGQAELA_setextddecs(A68_171 * D);

A68_VOID  JGQAELA_outextints(A68_244 * Ids);

A68_VOID  WGQAELA_outextattrs(A68_244 * Ids);

A68_VOID  IHQAELA_outextctypes(A68_244 * Ids);

A68_VOID  UHQAELA_unscopeids(A68_244 * Ids);

A68_VOID  UIQAELA_setidunn(A68_198 * I, A68_199  U);

A68_VOID  BJQAELA_insert_idinfo(A68_198 * I, A68_293 ** Scopestack, A68_244 ** Idlist);

A68_BOOL  MJQAELA_loadint(A68_185  A, A68_BOOL  Index);

A68_VOID  HLQAELA_loadtype(A68_172  T, A68_BOOL  Expand, A68_BOOL  All, A68_BOOL  Index);

A_STATIC A68_VOID  MLQAELA_outprimset(A68_172  T, A68_BOOL  All, void *NonLocals);

A_STATIC A68_VOID  UMQAELA_generator(A68_BOOL  SMQAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  FNQAELA_generator(A68_BOOL  DNQAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ONQAELA_generator(A68_BOOL  MNQAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  OPQAELA_outexttypes(A68_244 * Ids);

A68_VOID  OQQAELA_outstringlist(A68_246 * Strings);

A68_VOID  XQQAELA_outattrs(A68_170  Attr);

A_STATIC A68_VOID  PRQAELA_outdecattr(A68_171 * Decs);

A68_VOID  BSQAELA_outddecs(A68_171 * Decs, A68_BOOL  Inbody, A68_BOOL  Index);

A68_VOID  QSQAELA_outfndec(A68_167 * Fd, A68_BOOL  Inbody);

A68_VOID  PTQAELA_outextfns(A68_166 * Fns);

A68_VOID  YTQAELA_num_names_extfns(A68_166 * Fns);

A68_VOID  HUQAELA_loadctype(A68_222  Ct);

A_STATIC A68_INT  MUQAELA_ptypeno(A68_172  T, void *NonLocals);

A_STATIC A68_INT  YUQAELA_pcnulltypeno(A68_172  T, void *NonLocals);

A_STATIC A68_INT  LVQAELA_pctypeno(A68_222  Ct, void *NonLocals);

A_STATIC A68_VOID  VXQAELA_generator(A68_BOOL  TXQAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  NYQAELA_generator(A68_BOOL  LYQAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  WYQAELA_generator(A68_BOOL  UYQAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  PARAELA_outmacinfo(A68_245 * Mi, A68_INT  Macsort, A68_BOOL  All);

A_STATIC A68_VOID  YARAELA_anonymous(A68_169 * Mps, A68_BOOL  All);

A68_VOID  UBRAELA_outfncall(A68_268  Fc, A68_BOOL  Mac_macparam);

A_STATIC A68_VOID  ACRAELA_anonymous(A68_268  C, A68_BOOL  Mac_macparam);

A68_VOID  CDRAELA_simplify(A68_185  I, A68_BOOL  Simp, A68_185  *ReturnedValue);

A68_INT  HDRAELA_giveint(A68_185  In);

A68_VOID  TDRAELA_simplify_int(A68_185  In, A68_185  *ReturnedValue);

A68_BOOL  LERAELA_isintcheck(A68_185  In);

A68_BOOL  QERAELA_isint(A68_185  In);

A_STATIC A68_VOID  XERAELA_csttorow(A68_228 * Cst, A68_222  *ReturnedValue);

A_STATIC A68_228 * MFRAELA_trimcst(A68_228 * St, A68_INT  F, A68_INT  Size);

A_STATIC A68_BOOL  SFRAELA_stringrow(A68_246 * Sl);

A_STATIC A68_246 * GGRAELA_trimstrings(A68_246 * Sl, A68_INT  Lwb, A68_INT  Upb);

A_STATIC A68_VOID  TGRAELA_ctypetrim(A68_222  Ct, A68_185  Trim, A68_185  Offset, A68_222  Original, A68_222  *ReturnedValue);

A68_INT  CJRAELA_length(A68_246 * Strings);

A68_VOID  IJRAELA_joinstrings(A68_INT  S, A68_246 * Strings, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  OJRAELA_generator(A68_BOOL  MJRAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  EKRAELA_row_conc(A68_INT  Sort, A68_222  Left, A68_222  Right, A68_222  *ReturnedValue);

A_STATIC A68_VOID  MLRAELA_string_conc(A68_INT  Sort, A68_222  Left, A68_222  Right, A68_222  *ReturnedValue);

A_STATIC A68_VOID  RMRAELA_generator(A68_BOOL  PMRAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  JNRAELA_generator(A68_BOOL  HNRAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  BORAELA_simplify_ctype(A68_222  Ct, A68_222  *ReturnedValue);

A_STATIC A68_VOID  EORAELA_move_query(A68_172  T, A68_222  *ReturnedValue);

A_STATIC A68_BOOL  ARRAELA_replknown(A68_193 * Iv);

A_STATIC A68_BOOL  IRRAELA_nextrepl(A68_193 * Iv);

A_STATIC A68_VOID  WRRAELA_tst(A68_INT  I, A68_414  *ReturnedValue);

A_STATIC A68_VOID  HSRAELA_testbool(A68_BOOL  Bool, A68_414  *ReturnedValue);

A68_BOOL  LSRAELA_(A68_414  A, A68_414  B);

A68_VOID  PSRAELA_and(A68_414  A, A68_414  B, A68_414  *ReturnedValue);

A68_VOID  VSRAELA_or(A68_414  A, A68_414  B, A68_414  *ReturnedValue);

A_STATIC A68_VOID  CTRAELA_testexpressions(A68_185  A, A68_185  B, A68_INT  Diff, A68_414  *ReturnedValue);

A_STATIC A68_VOID  GTRAELA_and(A68_414  A, A68_414  B, A68_414  *ReturnedValue);

A_STATIC A68_VOID  VVRAELA_chk(A68_INT  I, A68_421  *ReturnedValue);

A_STATIC A68_VOID  RWRAELA_testints(A68_421  Check, A68_185  Int, A68_185  Stand, A68_INT  No, A68_262  Params, A68_INT  Diff, A68_419  *ReturnedValue);

A_STATIC A68_VOID  WWRAELA_result(A68_185  Int, A68_185  Stand, A68_421  Check, A68_185  *ReturnedValue);

A_STATIC A68_VOID  GXRAELA_getintcheck(A68_185  In, A68_188  *ReturnedValue, void *NonLocals);

A68_BOOL  PZRAELA_testintegers(A68_421  Check, A68_185 * Int, A68_185  Stand, A68_INT  No, A68_262  Params);

A_STATIC A68_BOOL  XZRAELA_integerequals(A68_185  A, A68_185  B, A68_INT  Diff);

A68_VOID  JASAELA_checkequals(A68_172  A1, A68_172  B1, A68_BOOL  Outcheck, A68_BOOL  Ignore, A68_BOOL  Exact, A68_INT  Diff, A68_414  *ReturnedValue);

A_STATIC A68_VOID  QASAELA_addname(A68_VC  Id, void *NonLocals);

A_STATIC A68_VOID  DBSAELA_checkints(A68_185  A, A68_185  B, A68_INT  Df, A68_414  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  OBSAELA_equalspalts(A68_249 * A, A68_249 * B, A68_414  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  CCSAELA_equalcharalts(A68_251 * A, A68_251 * B, A68_414  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  KHSAELA_ctypecheck(A68_222  Aa, A68_222  Bb, A68_BOOL  Disjoint, A68_414  *ReturnedValue);

A_STATIC A68_VOID  RHSAELA_checkcalts(A68_222  A, A68_222  B, A68_414  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  BJSAELA_checkcharange(A68_CHAR  L1, A68_CHAR  U1, A68_CHAR  L2, A68_CHAR  U2, A68_414  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  YJSAELA_checkstring(A68_233  Ca, A68_233  Cb, A68_414  *ReturnedValue, void *NonLocals);

A68_VOID  NQSAELA_typetest(A68_172  A, A68_172  B, A68_414  *ReturnedValue);

A68_BOOL  SQSAELA_equals(A68_172  A, A68_172  B);

A68_BOOL  ZQSAELA_specequals(A68_172  A, A68_172  B, A68_INT  D, A68_BOOL  Exact);

A68_BOOL  FRSAELA_checktypeeq(A68_172  A, A68_172  B, A68_BOOL  Outputcheck);

A_STATIC A68_BOOL  KRSAELA_anonymous(A68_222  A, A68_222  B);

A_STATIC A68_BOOL  TRSAELA_intequals(A68_185  A, A68_185  B);

A68_VOID  JSSAELA_checkdisjoint(A68_222  A, A68_222  B, A68_414  *ReturnedValue);

A_STATIC A68_BOOL  OSSAELA_attrequals(A68_170  Av1, A68_170  Av2);

A_STATIC A68_BOOL  TSSAELA_stringsequal(A68_246 * As1, A68_246 * As2, void *NonLocals);

A68_BOOL  GUSAELA_samespecid(A68_198 * P, A68_244 * Ids);

A68_VOID  EWSAELA_specsflt(A68_INT  Fltno);

A68_INT  LWSAELA_samespecfns(A68_167 * Fd1, A68_167 * Fd2, A68_BOOL  Exact);

A_STATIC A68_INT  RWSAELA_equalsmparams(A68_169 * M1, A68_169 * M2, A68_INT  Df, void *NonLocals);

A_STATIC A68_244 * ZXSAELA_flatten_ids(A68_171 * D);

A_STATIC A68_BOOL  JYSAELA_equalspecids(A68_171 * Spec1, A68_171 * Spec2);

A68_VOID  TYSAELA_checkspecfns(A68_167 * Fd2, A68_166 * Fns);

A68_BOOL  NZSAELA_isprimrange(A68_172  T);

A68_VOID  VZSAELA_primrange(A68_172  T, A68_248  *ReturnedValue);

A68_BOOL  GATAELA_isprimchar_t(A68_172  T);

A68_BOOL  SATAELA_arithtype(A68_172  T);

A68_BOOL  KBTAELA_containsfntype(A68_172  T);

A68_BOOL  ZBTAELA_containssort(A68_222  Ct, A68_INT  Sort);

A68_BOOL  HDTAELA_ihasvmno(A68_185  I);

A68_BOOL  VDTAELA_thasvmno(A68_172  T, A68_INT  V);

A_STATIC A68_BOOL  AETAELA_ivmno(A68_185  I, A68_INT  V, void *NonLocals);

A68_BOOL  CFTAELA_id_outside_if(A68_VC  Id, A68_293 * Sstack, A68_244 * Idlist);

A68_BOOL  NFTAELA_repl_local_make(A68_VC  Id, A68_293 * Scopestack, A68_244 * Idlist);

A68_INT  WFTAELA_primtypeno(A68_172  T);

A68_172 * FGTAELA_unn(A68_172  T, A68_INT  Index);

A68_VOID  QGTAELA_addclassname(A68_VC  Id);

A_STATIC A68_171 * YGTAELA_appenddecs(A68_171 * D1, A68_171 * D2);

A68_BOOL  DHTAELA_isvoid(A68_172  T);

A_STATIC A68_VOID  SHTAELA_setprimtype(A68_172  T, A68_INT  Sort, A68_172  *ReturnedValue);

A68_VOID  AITAELA_setiotype(A68_172  T, A68_INT  Sort, A68_172  *ReturnedValue);

A_STATIC A68_175 * EITAELA_stiotype(A68_175 * Str, void *NonLocals);

A_STATIC A68_VOID  RJTAELA_substint1(A68_268  P, A68_INT  I_fnno, A68_185  I, A68_185  *ReturnedValue);

A_STATIC A68_VOID  ILTAELA_substvarmult(A68_185 * I, A68_INT  Vindex, A68_185  *ReturnedValue);

A68_VOID  MMTAELA_substint(A68_268  P, A68_INT  I_fnno, A68_185  I, A68_185  *ReturnedValue);

A68_VOID  UMTAELA_substtype(A68_268  P, A68_INT  T_fnno, A68_172  T, A68_172  *ReturnedValue);

A_STATIC A68_249 * YMTAELA_substpalts(A68_249 * A, void *NonLocals);

A_STATIC A68_175 * JNTAELA_substst(A68_175 * S, void *NonLocals);

A68_VOID  DQTAELA_sttorow(A68_175 * St, A68_172  *ReturnedValue);

A_STATIC A68_175 * ARTAELA_trimst(A68_175 * St, A68_INT  F, A68_INT  Size);

A68_VOID  HRTAELA_indexio(A68_172  T, A68_185  I2, A68_172  *ReturnedValue);

A68_VOID  ESTAELA_trimorindex(A68_172  T, A68_185  Trim, A68_185  Index, A68_185 * Lwb, A68_185 * Upb, A68_172  *ReturnedValue);

A68_VOID  VVTAELA_mergetypes(A68_172  A, A68_172  B, A68_185  Cond, A68_172  *ReturnedValue);

A_STATIC A68_VOID  XVTAELA_fail(void);

A68_VOID  JCUAELA_cond_type(A68_172  Then, A68_172  Else, A68_185  Cond, A68_172  *ReturnedValue);

A68_VOID  BDUAELA_conc_type(A68_172  Left, A68_172  Right, A68_BOOL * Stringbool, A68_INT * Sort, A68_172  *ReturnedValue);

A_STATIC A68_VOID  VFUAELA_anonymous(A68_222  Ct, A68_172  *ReturnedValue);

A_STATIC A68_175 * BGUAELA_csttost(A68_228 * Cst, void *NonLocals);

A_STATIC A68_VOID  JJUAELA_reformindex(A68_172  Ty, A68_INT * N, A68_172 * Elem_type, A68_414 * Test);

A68_VOID  JKUAELA_reformcheck(A68_172  Type1, A68_172  Type2, A68_414  *ReturnedValue);

A68_BOOL  XKUAELA_impl_macro(A68_172  A, A68_172  B, A68_265 * Fncallstack);

A68_VOID  CLUAELA_setup_compilefn(void);

A68_VOID  PLUAELA_reset_compilefn(void);

A68_VOID  XLUAELA_default(A68_INT  Last_fnno, A68_244 * Dids, A68_166 * Dfns);

A68_BOOL  KMUAELA_charunused(A68_INT  C);

A68_BOOL  PMUAELA_check_charrange(A68_INT  Start, A68_INT  Finish);

A_STATIC A68_VOID  VMUAELA_generator(A68_BOOL  TMUAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  FNUAELA_generator(A68_BOOL  DNUAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  PNUAELA_generator(A68_BOOL  NNUAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ZNUAELA_generator(A68_BOOL  XNUAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_BOOL  POUAELA_charsubrange(A68_INT  Start, A68_INT  Finish, A68_251 * Charalts);

A_STATIC A68_244 * FPUAELA_defaultids(A68_VC  Id);

A68_167 * UPUAELA_defaultfndec(A68_VC  Id, A68_BOOL  Macro, A68_INT  Sort, A68_INT  Fnno, A68_INT  Fndecsort);

A68_BOOL  EQUAELA_scope_start(A68_INT  Scope);

A68_244 * KQUAELA_id_in_scope(A68_VC  Id, A68_293 * Scopestack, A68_BOOL  Decl);

A68_166 * YQUAELA_fn_in_scope(A68_VC  Id, A68_166 * Fns, A68_293 * Scopestack, A68_BOOL  Decl);

A68_BOOL  MRUAELA_containslocaltype(A68_172  T, A68_293 * S);

A68_244 * HSUAELA_findid(A68_VC  Id);

A68_166 * TSUAELA_findfn(A68_VC  Id, A68_166 * Fns);

A68_VOID  BTUAELA_newid(A68_VC  Id, A68_199  I);

A68_VOID  MTUAELA_newscope(A68_INT  Scope, A68_244 * Ids, A68_166 * Fns);

A68_VOID  RTUAELA_usedid(A68_244 * Item, A68_293 * Scopestack);

A68_VOID  ZTUAELA_usedfn(A68_166 * Item, A68_293 * Scopestack);

A68_BOOL  GUUAELA_testequals(A68_172  A, A68_172  B, A68_BOOL  Outputcheck);

A68_VOID  TUUAELA_join_setup(A68_172  T, A68_BOOL  Source, A68_210  *ReturnedValue);

A_STATIC A68_VOID  OVUAELA_generator(A68_BOOL  MVUAELA_anonymous, A68_221  *ReturnedValue, void *NonLocals);

A_STATIC A68_214 * EWUAELA_join_st(A68_175 * St, void *NonLocals);

A68_VOID  GXUAELA_makedecs(A68_171 * D, A68_INT  Origin, A68_167 * Fd);

A_STATIC A68_VOID  MXUAELA_makeids(A68_172  T, A68_INT  Wherefrom, A68_244 * I, void *NonLocals);

A_STATIC A68_BOOL  FYUAELA_check_joined(A68_210 * J);

A_STATIC A68_BOOL  JYUAELA_check_all_jst(A68_214 * Js, void *NonLocals);

A_STATIC A68_BOOL  OYUAELA_test1(A68_218 * Jnd);

A_STATIC A68_BOOL  FZUAELA_check_if_joined(A68_210 * J);

A_STATIC A68_BOOL  JZUAELA_check_all_jst(A68_214 * Js, void *NonLocals);

A_STATIC A68_BOOL  OZUAELA_test2(A68_218 * Jnd);

A68_BOOL  FAVAELA_has_join_check(A68_210 * J);

A_STATIC A68_BOOL  JAVAELA_check_all_jst(A68_214 * Js, void *NonLocals);

A_STATIC A68_BOOL  OAVAELA_test2(A68_218 * Jnd);

A68_VOID  FBVAELA_check_joins(A68_198  Idinfo);

A_STATIC A68_BOOL  ECVAELA_is_fntype_joined(A68_210 * J);

A68_BOOL  WCVAELA_has_fntype(A68_210 * J);

A68_BOOL  NDVAELA_check_if_output_joined(A68_171 * Outputs);

A68_VOID  AEVAELA_mark_join(A68_210 * Joinup, A68_218  Jtest, A68_BOOL  Source);

A_STATIC A68_VOID  FEVAELA_set_check(A68_218 * Jnd, A68_BOOL  Isfn, A68_218  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ZEVAELA_mark_jst(A68_214 * Jss, void *NonLocals);

A68_VOID  HFVAELA_check_off(A68_210 * Jup, A68_BOOL  Source, A68_BOOL  Output);

A68_VOID  MFVAELA_joinsttorow(A68_214 * Jst, A68_210  *ReturnedValue);

A_STATIC A68_VOID  QFVAELA_jcount(A68_214 * Js, void *NonLocals);

A_STATIC A68_VOID  UFVAELA_generator(A68_BOOL  SFVAELA_anonymous, A68_221  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  CGVAELA_jass(A68_214 * Js, void *NonLocals);

A_STATIC A68_INT  MGVAELA_get_size(A68_210  Jup);

A_STATIC A68_VOID  AHVAELA_trim_error(A68_185 * Lwb, A68_185 * Upb, A68_INT  Size, A68_414  *ReturnedValue);

A68_VOID  PIVAELA_gettrim(A68_210 * Jup, A68_INT  Lwb, A68_INT  Upb, A68_210  *ReturnedValue);

A_STATIC A68_VOID  XIVAELA_generator(A68_BOOL  VIVAELA_anonymous, A68_221  *ReturnedValue, void *NonLocals);

A_STATIC A68_214 * RJVAELA_jtrim(A68_214 * Jst, A68_INT  I, void *NonLocals);

A68_VOID  UKVAELA_jointrim(A68_210 * Joinup, A68_185  Lwbd, A68_185  Upbd, A68_210  *ReturnedValue);

A68_VOID  KLVAELA_unscope(A68_293 ** S, A68_244 ** I, A68_166 ** F);

A68_VOID  RLVAELA_makevardecs(A68_171 * D, A68_167 * Fd);

A_STATIC A68_VOID  WLVAELA_makeids(A68_172  T, A68_244 * I, void *NonLocals);

A_STATIC A68_171 * FMVAELA_decs_flt(A68_244 ** Decids, A68_INT  Idscount);

A_STATIC A68_171 * RMVAELA_decs_st(A68_244 * Decids, A68_175 * St);

A68_171 * ZMVAELA_decs_setup(A68_244 * D_ids, A68_172  T);

A68_VOID  WOVAELA_pushvss(A68_INT  I);

A68_381  YOVAELA_next_mparamno(A68_287 * Fnstack);

A68_VOID  IPVAELA_add_mparam(A68_169 * Mps, A68_287 * Fnstack);

A68_BOOL  QPVAELA_anyexplicit(A68_169 * Mps);

A68_169 * UPVAELA_nextexpl_par(A68_169 * Mps);

A68_268 * ZPVAELA_fncall_flt(A68_167 * Fd);

A68_BOOL  KQVAELA_inst_has_fn_in(A68_210 * J);

A_STATIC A68_VOID  CRVAELA_index_rep(A68_219 * Jrep, A68_INT  Index, A68_210  *ReturnedValue);

A_STATIC A68_220 * IRVAELA_substvarstack(A68_220 * Jstack, void *NonLocals);

A_STATIC A68_VOID  ISVAELA_indexreturn(A68_210  Jup, A68_INT  Index, A68_BOOL  Toplevel, A68_210  *ReturnedValue);

A_STATIC A68_214 * MSVAELA_index_jst(A68_214 * Js, void *NonLocals);

A_STATIC A68_VOID  DTVAELA_generator(A68_BOOL  BTVAELA_anonymous, A68_221  *ReturnedValue, void *NonLocals);

A68_VOID  UTVAELA_varmult_joinup(A68_317 * Iddecs, A68_210  Joinup, A68_210  *ReturnedValue);

A_STATIC A68_VOID  AUVAELA_generator(A68_BOOL  YTVAELA_anonymous, A68_221  *ReturnedValue, void *NonLocals);

A68_VOID  TUVAELA_replicate_joinup(A68_244 * Idlist, A68_317 * Iddecs, A68_210  Joinup, A68_210  *ReturnedValue);

A68_212 * LVVAELA_port_setup(A68_171 * Dd, A68_268  Fncall);

A_STATIC A68_212 * HWVAELA_get_port_data(A68_212 * Port, A68_VC  Portname);

A68_212 * NWVAELA_get_port_info(A68_211 * Port, A68_VC  Portname);

A68_VOID  TWVAELA_rowtype(A68_172  T, A68_172  *ReturnedValue);

A_STATIC A68_BOOL  NXVAELA_equal_palts(A68_249 * A, A68_249 * B);

A_STATIC A68_BOOL  VXVAELA_equal_pstrings(A68_250  Ps1, A68_250  Ps2);

A_STATIC A68_BOOL  IYVAELA_anonymous(A68_172  T1, A68_172  T2, A68_INT  Diff);

A_STATIC A68_VOID  UMQAELA_generator(A68_BOOL  SMQAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((VMQAELA_generator *)NonLocals)->x)
{ 
A68_VC  WMQAELA;  /* clause result */
A68_VC  XMQAELA;  /* OPERATORS - dynamic generator */
{ 
XMQAELA.upb = 1 ;
( SMQAELA_anonymous? A_VLOC(A68_CHAR ,XMQAELA): A_VHEAP(A68_CHAR ,XMQAELA) );
WMQAELA = XMQAELA;
} 
*ReturnedValue = (WMQAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  FNQAELA_generator(A68_BOOL  DNQAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((GNQAELA_generator *)NonLocals)->x)
{ 
A68_VC  HNQAELA;  /* clause result */
A68_VC  INQAELA;  /* OPERATORS - dynamic generator */
{ 
INQAELA.upb = 1 ;
( DNQAELA_anonymous? A_VLOC(A68_CHAR ,INQAELA): A_VHEAP(A68_CHAR ,INQAELA) );
HNQAELA = INQAELA;
} 
*ReturnedValue = (HNQAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  ONQAELA_generator(A68_BOOL  MNQAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((PNQAELA_generator *)NonLocals)->x)
{ 
A68_VC  QNQAELA;  /* clause result */
A68_VC  RNQAELA;  /* OPERATORS - dynamic generator */
{ 
RNQAELA.upb = 1 ;
( MNQAELA_anonymous? A_VLOC(A68_CHAR ,RNQAELA): A_VHEAP(A68_CHAR ,RNQAELA) );
QNQAELA = RNQAELA;
} 
*ReturnedValue = (QNQAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  CQPAELA_generator(A68_BOOL  AQPAELA_anonymous, A68_163  *ReturnedValue, void *NonLocals)
#define NL(x) (((DQPAELA_generator *)NonLocals)->x)
{ 
A68_163  EQPAELA;  /* clause result */
A68_163  FQPAELA;  /* OPERATORS - dynamic generator */
{ 
FQPAELA.dim[0].upb = NL(Charsetproc).dim[0].upb ;
FQPAELA.dim[0].lwb = 1 ;
A_1INITSTRIDES(FQPAELA) ;
( AQPAELA_anonymous? A_R1LOC(A68_165 ,FQPAELA): A_R1HEAP(A68_165 ,FQPAELA) );
EQPAELA = FQPAELA;
} 
*ReturnedValue = (EQPAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  NRPAELA_generator(A68_BOOL  MRPAELA_anonymous, A68_54  *ReturnedValue)
{ 
A68_54  ORPAELA;  /* clause result */
A68_54  PRPAELA;  /* OPERATORS - dynamic generator */
{ 
PRPAELA.upb = JPPAELA_charset.dim[0].upb ;
( MRPAELA_anonymous? A_VLOC(A68_BOOL ,PRPAELA): A_VHEAP(A68_BOOL ,PRPAELA) );
ORPAELA = PRPAELA;
} 
*ReturnedValue = (ORPAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  ZSPAELA_generator(A68_BOOL  XSPAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((ATPAELA_generator *)NonLocals)->x)
{ 
A68_VC  BTPAELA;  /* clause result */
A68_VC  CTPAELA;  /* OPERATORS - dynamic generator */
{ 
CTPAELA.upb = DIPAELA_idsize ;
( XSPAELA_anonymous? A_VLOC(A68_CHAR ,CTPAELA): A_VHEAP(A68_CHAR ,CTPAELA) );
BTPAELA = CTPAELA;
} 
*ReturnedValue = (BTPAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  IUPAELA_generator(A68_BOOL  GUPAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((JUPAELA_generator *)NonLocals)->x)
{ 
A68_VC  KUPAELA;  /* clause result */
A68_VC  LUPAELA;  /* OPERATORS - dynamic generator */
{ 
 /* line 647: */
LUPAELA.upb = LIPAELA_stringsize ;
( GUPAELA_anonymous? A_VLOC(A68_CHAR ,LUPAELA): A_VHEAP(A68_CHAR ,LUPAELA) );
KUPAELA = LUPAELA;
} 
*ReturnedValue = (KUPAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  WUPAELA_generator(A68_BOOL  UUPAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((XUPAELA_generator *)NonLocals)->x)
{ 
A68_VC  YUPAELA;  /* clause result */
A68_VC  ZUPAELA;  /* OPERATORS - dynamic generator */
{ 
 /* line 654: */
ZUPAELA.upb = LIPAELA_stringsize ;
( UUPAELA_anonymous? A_VLOC(A68_CHAR ,ZUPAELA): A_VHEAP(A68_CHAR ,ZUPAELA) );
YUPAELA = ZUPAELA;
} 
*ReturnedValue = (YUPAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  BWPAELA_generator(A68_BOOL  ZVPAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((CWPAELA_generator *)NonLocals)->x)
{ 
A68_VC  DWPAELA;  /* clause result */
A68_VC  EWPAELA;  /* OPERATORS - dynamic generator */
{ 
EWPAELA.upb = AIPAELA_compsize ;
( ZVPAELA_anonymous? A_VLOC(A68_CHAR ,EWPAELA): A_VHEAP(A68_CHAR ,EWPAELA) );
DWPAELA = EWPAELA;
} 
*ReturnedValue = (DWPAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  XWPAELA_generator(A68_BOOL  VWPAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((YWPAELA_generator *)NonLocals)->x)
{ 
A68_VC  ZWPAELA;  /* clause result */
A68_VC  AXPAELA;  /* OPERATORS - dynamic generator */
{ 
AXPAELA.upb = AIPAELA_compsize ;
( VWPAELA_anonymous? A_VLOC(A68_CHAR ,AXPAELA): A_VHEAP(A68_CHAR ,AXPAELA) );
ZWPAELA = AXPAELA;
} 
*ReturnedValue = (ZWPAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  AAQAELA_generator(A68_BOOL  ZZPAELA_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  BAQAELA;  /* clause result */
A68_VC  CAQAELA;  /* OPERATORS - dynamic generator */
{ 
CAQAELA.upb = 11 ;
( ZZPAELA_anonymous? A_VLOC(A68_CHAR ,CAQAELA): A_VHEAP(A68_CHAR ,CAQAELA) );
BAQAELA = CAQAELA;
} 
*ReturnedValue = (BAQAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  JAQAELA_generator(A68_BOOL  IAQAELA_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  KAQAELA;  /* clause result */
A68_VC  LAQAELA;  /* OPERATORS - dynamic generator */
{ 
LAQAELA.upb = 9 ;
( IAQAELA_anonymous? A_VLOC(A68_CHAR ,LAQAELA): A_VHEAP(A68_CHAR ,LAQAELA) );
KAQAELA = LAQAELA;
} 
*ReturnedValue = (KAQAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  RAQAELA_generator(A68_BOOL  QAQAELA_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  SAQAELA;  /* clause result */
A68_VC  TAQAELA;  /* OPERATORS - dynamic generator */
{ 
TAQAELA.upb = 7 ;
( QAQAELA_anonymous? A_VLOC(A68_CHAR ,TAQAELA): A_VHEAP(A68_CHAR ,TAQAELA) );
SAQAELA = TAQAELA;
} 
*ReturnedValue = (SAQAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  ZAQAELA_generator(A68_BOOL  YAQAELA_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  ABQAELA;  /* clause result */
A68_VC  BBQAELA;  /* OPERATORS - dynamic generator */
{ 
BBQAELA.upb = 6 ;
( YAQAELA_anonymous? A_VLOC(A68_CHAR ,BBQAELA): A_VHEAP(A68_CHAR ,BBQAELA) );
ABQAELA = BBQAELA;
} 
*ReturnedValue = (ABQAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  MLQAELA_outprimset(A68_172  T, A68_BOOL  All, void *NonLocals)
#define NL(x) (((NLQAELA_outprimset *)NonLocals)->x)
{ 
A68_172  OLQAELA;  /* united object - for case conformity */
A68_173 * PLQAELA_p;
A68_247  QLQAELA;  /* united object - for case conformity */
A68_248  RLQAELA_pr;
A68_32  SLQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  TLQAELA_b1;
A68_BOOL  ULQAELA_b2;
A68_BOOL  VLQAELA;  /* optbool result */
A68_248  WLQAELA;  /* collateral clause result */
A68_185  XLQAELA;  /* avoid structure result */
A68_185  YLQAELA;  /* avoid structure result */
A68_247  ZLQAELA;  /* OPERATORS - mode -> union mode */
A68_247 * AMQAELA;  /* YIELD */
A68_249 * BMQAELA_pa;
A68_32  CMQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_249 * DMQAELA_palts1;
A68_32  EMQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_32  FMQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_250  GMQAELA_ps;
A68_32  HMQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  IMQAELA_altsno;
A68_BOOL * JMQAELA_i;
A68_54  KMQAELA;  /* forall yield */
A68_INT  LMQAELA;  /* forall loop counter */
A68_381  MMQAELA;  /* collateral clause result */
A68_32  NMQAELA;  /* OPERATORS - istruct -> vector */
A68_251 * OMQAELA_chalts;
A68_252  PMQAELA;  /* united object - for case conformity */
A68_CHAR  QMQAELA_ch;
A68_32  RMQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_31  TMQAELA_generator;   /* proc value of non-global proc */
A68_VC  YMQAELA;  /* avoid structure result */
A68_VC  ZMQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  ANQAELA;  /* OPERATORS - assign op */
A68_253  BNQAELA_cr;
A68_32  CNQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_31  ENQAELA_generator;   /* proc value of non-global proc */
A68_VC  JNQAELA;  /* avoid structure result */
A68_VC  KNQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  LNQAELA;  /* OPERATORS - assign op */
A68_31  NNQAELA_generator;   /* proc value of non-global proc */
A68_VC  SNQAELA;  /* avoid structure result */
A68_VC  TNQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  UNQAELA;  /* OPERATORS - assign op */
A68_32  VNQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_46  YNQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_46  BOQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(outprimset);
 /* line 1266: */
 /* line 1267: */
OLQAELA = T ;
switch ( OLQAELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE198,INT,MODE247)  */
PLQAELA_p = (OLQAELA.data.mode1);
 /* line 1268: */
{ 
 /* line 1269: */
QLQAELA = (*(&(PLQAELA_p->U))) ;
switch ( QLQAELA.mode )
{ 
case 1: /* STRUCT(REF MODE198,MODE185,MODE185)  */
RLQAELA_pr = (QLQAELA.data.mode1);
 /* line 1270: */
{ 
A_CALLPROC(VOPAELA_outints,(A_HVEC(SLQAELA,GLCAELA_prange,A68_INT )),(A_HVEC(SLQAELA,GLCAELA_prange,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1271: */
if ( All )
{ 
A_CALLPROC(WOPAELA_outid,((*(&(RLQAELA_pr.Idinfo->Id)))),((*(&(RLQAELA_pr.Idinfo->Id))),(WOPAELA_outid).nonlocals));
} 
else
{ 
A_CALLPROC(WOPAELA_outid,(TTCAOST_nullid),(TTCAOST_nullid,(WOPAELA_outid).nonlocals));
} 
 /* line 1272: */
TLQAELA_b1 = MJQAELA_loadint(RLQAELA_pr.Lwb, NL(Index));
 /* line 1273: */
ULQAELA_b2 = MJQAELA_loadint(RLQAELA_pr.Upb, NL(Index));
 /* line 1274: */
 /* line 1275: */
VLQAELA = TLQAELA_b1;
if ( ! VLQAELA )
{VLQAELA = ULQAELA_b2;
}
if ( VLQAELA )
{ 
WLQAELA.Idinfo = RLQAELA_pr.Idinfo;
 /* line 1276: */
DSDAELA_uncheckedint( RLQAELA_pr.Lwb, &XLQAELA );
WLQAELA.Lwb = XLQAELA;
 /* line 1277: */
DSDAELA_uncheckedint( RLQAELA_pr.Upb, &YLQAELA );
WLQAELA.Upb = YLQAELA;
 /* line 1278: */
 /* line 1279: */
AMQAELA = (&(PLQAELA_p->U)) ;
(*AMQAELA) = A_UNITE(ZLQAELA,mode1,1,WLQAELA);
} 
} 
break;
case 2: /* REF STRUCT(REF MODE198,REF MODE172,REF MODE249)  */
BMQAELA_pa = (QLQAELA.data.mode2);
 /* line 1280: */
{ 
A_CALLPROC(VOPAELA_outints,(A_HVEC(CMQAELA,FLCAELA_pidalts,A68_INT )),(A_HVEC(CMQAELA,FLCAELA_pidalts,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1281: */
DMQAELA_palts1 = BMQAELA_pa;
 /* line 1282: */
for ( ;; )
{ 
 /* line 1283: */
if ( !((DMQAELA_palts1!=BQCAELA_nilpalts)) ) break;
if ( ((*(&(DMQAELA_palts1->U)))==EQCAELA_niltype) )
{ 
 /* line 1284: */
A_CALLPROC(VOPAELA_outints,(A_HVEC(EMQAELA,RJCAELA_tnull,A68_INT )),(A_HVEC(EMQAELA,RJCAELA_tnull,A68_INT ),(VOPAELA_outints).nonlocals));
} 
else
{ 
HLQAELA_loadtype((*(*(&(DMQAELA_palts1->U)))), A68_FALSE, A68_FALSE, NL(Index));
} 
 /* line 1285: */
if ( All )
{ 
A_CALLPROC(WOPAELA_outid,((*(&((*(&(DMQAELA_palts1->Idinfo)))->Id)))),((*(&((*(&(DMQAELA_palts1->Idinfo)))->Id))),(WOPAELA_outid).nonlocals));
} 
else
{ 
A_CALLPROC(WOPAELA_outid,(TTCAOST_nullid),(TTCAOST_nullid,(WOPAELA_outid).nonlocals));
} 
 /* line 1286: */
 /* line 1287: */
DMQAELA_palts1 = (*(&(DMQAELA_palts1->Rest)));
}
 /* line 1288: */
 /* line 1289: */
 /* line 1290: */
A_CALLPROC(VOPAELA_outints,(A_HVEC(FMQAELA,XKCAELA_end,A68_INT )),(A_HVEC(FMQAELA,XKCAELA_end,A68_INT ),(VOPAELA_outints).nonlocals));
} 
break;
case 3: /* STRUCT(REF MODE198,REF MODE54,REF MODE251)  */
GMQAELA_ps = (QLQAELA.data.mode3);
 /* line 1291: */
{ 
A_CALLPROC(VOPAELA_outints,(A_HVEC(HMQAELA,XNCAELA_pstring,A68_INT )),(A_HVEC(HMQAELA,XNCAELA_pstring,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1292: */
if ( All )
{ 
A_CALLPROC(WOPAELA_outid,((*(&(GMQAELA_ps.Idinfo->Id)))),((*(&(GMQAELA_ps.Idinfo->Id))),(WOPAELA_outid).nonlocals));
} 
else
{ 
A_CALLPROC(WOPAELA_outid,(TTCAOST_nullid),(TTCAOST_nullid,(WOPAELA_outid).nonlocals));
} 
 /* line 1293: */
IMQAELA_altsno = 0;
 /* line 1294: */
 /* line 1295: */
KMQAELA = GMQAELA_ps.Charcheck ;
LMQAELA = KMQAELA.upb -1;
JMQAELA_i = KMQAELA.data;
for (;LMQAELA-- >= 0;
(JMQAELA_i++
) )
{
if ( (*JMQAELA_i) )
{ 
IMQAELA_altsno+=1;
} 
}
 /* line 1296: */
MMQAELA.data[0] = MLCAELA_dummy;
MMQAELA.data[1] = IMQAELA_altsno;
A_CALLPROC(VOPAELA_outints,(A_HISVEC(NMQAELA,MMQAELA,2,A68_INT )),(A_HISVEC(NMQAELA,MMQAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1297: */
OMQAELA_chalts = GMQAELA_ps.Charalts;
 /* line 1298: */
for ( ;; )
{ 
 /* line 1299: */
if ( !((OMQAELA_chalts!=LQCAELA_nilcharalts)) ) break;
 /* line 1300: */
PMQAELA = (*(&(OMQAELA_chalts->Alts))) ;
switch ( PMQAELA.mode )
{ 
case 1: /* CHAR */
QMQAELA_ch = (PMQAELA.data.mode1);
{ 
A_CALLPROC(VOPAELA_outints,(A_HVEC(RMQAELA,YNCAELA_pchar,A68_INT )),(A_HVEC(RMQAELA,YNCAELA_pchar,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1301: */
A_CLOSURE( TMQAELA_generator, UMQAELA_generator, VMQAELA_generator );
 /* line 1302: */
A_CALLPROC(TMQAELA_generator,(A68_FALSE, &YMQAELA),(A68_FALSE, &YMQAELA,(TMQAELA_generator).nonlocals));
ANQAELA = A_HVEC(ZMQAELA,QMQAELA_ch,A68_CHAR ) ;
A_VASSIGN2(ANQAELA,YMQAELA,A68_CHAR ) ;
A_CALLPROC(WOPAELA_outid,(YMQAELA),(YMQAELA,(WOPAELA_outid).nonlocals));
} 
break;
case 2: /* STRUCT(CHAR,CHAR)  */
BNQAELA_cr = (PMQAELA.data.mode2);
{ 
A_CALLPROC(VOPAELA_outints,(A_HVEC(CNQAELA,ZNCAELA_pcharrange,A68_INT )),(A_HVEC(CNQAELA,ZNCAELA_pcharrange,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1303: */
A_CLOSURE( ENQAELA_generator, FNQAELA_generator, GNQAELA_generator );
A_CALLPROC(ENQAELA_generator,(A68_FALSE, &JNQAELA),(A68_FALSE, &JNQAELA,(ENQAELA_generator).nonlocals));
LNQAELA = A_HVEC(KNQAELA,BNQAELA_cr.Lwchar,A68_CHAR ) ;
A_VASSIGN2(LNQAELA,JNQAELA,A68_CHAR ) ;
A_CALLPROC(WOPAELA_outid,(JNQAELA),(JNQAELA,(WOPAELA_outid).nonlocals));
 /* line 1304: */
A_CLOSURE( NNQAELA_generator, ONQAELA_generator, PNQAELA_generator );
 /* line 1305: */
A_CALLPROC(NNQAELA_generator,(A68_FALSE, &SNQAELA),(A68_FALSE, &SNQAELA,(NNQAELA_generator).nonlocals));
UNQAELA = A_HVEC(TNQAELA,BNQAELA_cr.Upchar,A68_CHAR ) ;
A_VASSIGN2(UNQAELA,SNQAELA,A68_CHAR ) ;
A_CALLPROC(WOPAELA_outid,(SNQAELA),(SNQAELA,(WOPAELA_outid).nonlocals));
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 1306: */
 /* line 1307: */
OMQAELA_chalts = (*(&(OMQAELA_chalts->Rest)));
}
 /* line 1308: */
 /* line 1309: */
 /* line 1310: */
A_CALLPROC(VOPAELA_outints,(A_HVEC(VNQAELA,XKCAELA_end,A68_INT )),(A_HVEC(VNQAELA,XKCAELA_end,A68_INT ),(VOPAELA_outints).nonlocals));
} 
break;
default: 
 /* line 1311: */
 /* line 1312: */
 /* line 1313: */
UQPAELA_fault(0, A_HVEC(YNQAELA,XNQAELA,A68_VC ));
break;
} 
} 
break;
default: 
 /* line 1314: */
UQPAELA_fault(0, A_HVEC(BOQAELA,AOQAELA,A68_VC ));
break;
} 
A_PROC_EXIT(outprimset);
return;
} 
#undef NL

A_STATIC A68_INT  MUQAELA_ptypeno(A68_172  T, void *NonLocals)
#define NL(x) (((NUQAELA_ptypeno *)NonLocals)->x)
{ 
A68_172  OUQAELA;  /* united object - for case conformity */
A68_173 * PUQAELA_p;
A68_INT  QUQAELA;  /* clause result */
A68_174 * RUQAELA_n;
A68_176 * SUQAELA_tv;
A68_46  VUQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(ptypeno);
 /* line 1565: */
{ 
 /* line 1566: */
OUQAELA = T ;
switch ( OUQAELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE198,INT,MODE247)  */
PUQAELA_p = (OUQAELA.data.mode1);
 /* line 1567: */
QUQAELA = (*(&(PUQAELA_p->Typeno)));
break;
case 2: /* REF STRUCT(REF MODE198,INT,MODE172)  */
RUQAELA_n = (OUQAELA.data.mode2);
 /* line 1568: */
QUQAELA = (*(&(RUQAELA_n->Typeno)));
break;
case 4: /* REF STRUCT(REF MODE245,MODE172)  */
SUQAELA_tv = (OUQAELA.data.mode4);
 /* line 1569: */
QUQAELA = A_CALLPROC(NL(LUQAELA_ptypeno),((*(&(SUQAELA_tv->T)))),((*(&(SUQAELA_tv->T))),(NL(LUQAELA_ptypeno)).nonlocals));
break;
default: 
UQPAELA_fault(0, A_HVEC(VUQAELA,UUQAELA,A68_VC ));
 /* line 1570: */
 /* line 1571: */
QUQAELA = 0;
break;
} 
} 
A_PROC_EXIT(ptypeno);
return( QUQAELA );
} 
#undef NL

A_STATIC A68_INT  YUQAELA_pcnulltypeno(A68_172  T, void *NonLocals)
#define NL(x) (((ZUQAELA_pcnulltypeno *)NonLocals)->x)
{ 
A68_172  AVQAELA;  /* united object - for case conformity */
A68_173 * BVQAELA_p;
A68_INT  CVQAELA;  /* clause result */
A68_174 * DVQAELA_n;
A68_176 * EVQAELA_tv;
A68_172  FVQAELA;  /* united object - for case conformity */
A68_46  IVQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(pcnulltypeno);
 /* line 1573: */
{ 
 /* line 1574: */
AVQAELA = T ;
switch ( AVQAELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE198,INT,MODE247)  */
BVQAELA_p = (AVQAELA.data.mode1);
 /* line 1575: */
CVQAELA = (*(&(BVQAELA_p->Typeno)));
break;
case 2: /* REF STRUCT(REF MODE198,INT,MODE172)  */
DVQAELA_n = (AVQAELA.data.mode2);
 /* line 1576: */
CVQAELA = (*(&(DVQAELA_n->Typeno)));
break;
case 4: /* REF STRUCT(REF MODE245,MODE172)  */
EVQAELA_tv = (AVQAELA.data.mode4);
 /* line 1577: */
FVQAELA = (*(&(EVQAELA_tv->T))) ;
switch ( FVQAELA.mode )
{ 
case 5: /* STRUCT(INT)  */
 /* line 1578: */
CVQAELA = 0;
break;
default: 
 /* line 1579: */
 /* line 1580: */
CVQAELA = A_CALLPROC(NL(XUQAELA_pcnulltypeno),((*(&(EVQAELA_tv->T)))),((*(&(EVQAELA_tv->T))),(NL(XUQAELA_pcnulltypeno)).nonlocals));
break;
} 
break;
default: 
UQPAELA_fault(0, A_HVEC(IVQAELA,HVQAELA,A68_VC ));
 /* line 1581: */
 /* line 1582: */
CVQAELA = 0;
break;
} 
} 
A_PROC_EXIT(pcnulltypeno);
return( CVQAELA );
} 
#undef NL

A_STATIC A68_INT  LVQAELA_pctypeno(A68_222  Ct, void *NonLocals)
#define NL(x) (((MVQAELA_pctypeno *)NonLocals)->x)
{ 
A68_222  NVQAELA;  /* united object - for case conformity */
A68_223 * OVQAELA_cnd;
A68_INT  PVQAELA;  /* clause result */
A68_224 * QVQAELA_cpr;
A68_225 * RVQAELA_cpi;
A68_203 * SVQAELA_p;
A68_226 * TVQAELA_cu;
A68_227 * UVQAELA_cr;
A68_230 * VVQAELA_cn;
A68_234 * WVQAELA_ch;
A68_236 * XVQAELA_cv;
A68_46  AWQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(pctypeno);
 /* line 1584: */
{ 
 /* line 1585: */
NVQAELA = Ct ;
switch ( NVQAELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE198,INT,MODE222,MODE172)  */
OVQAELA_cnd = (NVQAELA.data.mode1);
 /* line 1586: */
PVQAELA = A_CALLPROC(NL(KVQAELA_pctypeno),((*(&(OVQAELA_cnd->Ct)))),((*(&(OVQAELA_cnd->Ct))),(NL(KVQAELA_pctypeno)).nonlocals));
break;
case 2: /* REF STRUCT(MODE172,MODE185,MODE185)  */
QVQAELA_cpr = (NVQAELA.data.mode2);
 /* line 1587: */
PVQAELA = A_CALLPROC(NL(LUQAELA_ptypeno),((*(&(QVQAELA_cpr->T)))),((*(&(QVQAELA_cpr->T))),(NL(LUQAELA_ptypeno)).nonlocals));
break;
case 3: /* REF STRUCT(MODE172,MODE185)  */
RVQAELA_cpi = (NVQAELA.data.mode3);
 /* line 1588: */
PVQAELA = A_CALLPROC(NL(LUQAELA_ptypeno),((*(&(RVQAELA_cpi->T)))),((*(&(RVQAELA_cpi->T))),(NL(LUQAELA_ptypeno)).nonlocals));
break;
case 4: /* REF STRUCT(MODE172,INT)  */
SVQAELA_p = (NVQAELA.data.mode4);
 /* line 1589: */
PVQAELA = A_CALLPROC(NL(LUQAELA_ptypeno),((*(&(SVQAELA_p->Type)))),((*(&(SVQAELA_p->Type))),(NL(LUQAELA_ptypeno)).nonlocals));
break;
case 5: /* REF STRUCT(REF MODE203,MODE222)  */
TVQAELA_cu = (NVQAELA.data.mode5);
 /* line 1590: */
PVQAELA = A_CALLPROC(NL(LUQAELA_ptypeno),((*(&((*(&(TVQAELA_cu->P)))->Type)))),((*(&((*(&(TVQAELA_cu->P)))->Type))),(NL(LUQAELA_ptypeno)).nonlocals));
break;
case 6: /* REF STRUCT(MODE222,MODE185)  */
UVQAELA_cr = (NVQAELA.data.mode6);
 /* line 1591: */
PVQAELA = A_CALLPROC(NL(KVQAELA_pctypeno),((*(&(UVQAELA_cr->Ct)))),((*(&(UVQAELA_cr->Ct))),(NL(KVQAELA_pctypeno)).nonlocals));
break;
case 9: /* REF STRUCT(MODE172)  */
VVQAELA_cn = (NVQAELA.data.mode9);
 /* line 1592: */
PVQAELA = A_CALLPROC(NL(XUQAELA_pcnulltypeno),((*(&(VVQAELA_cn->Ct)))),((*(&(VVQAELA_cn->Ct))),(NL(XUQAELA_pcnulltypeno)).nonlocals));
break;
case 15: /* REF STRUCT(MODE172,CHAR)  */
WVQAELA_ch = (NVQAELA.data.mode15);
 /* line 1593: */
PVQAELA = A_CALLPROC(NL(LUQAELA_ptypeno),((*(&(WVQAELA_ch->T)))),((*(&(WVQAELA_ch->T))),(NL(LUQAELA_ptypeno)).nonlocals));
break;
case 17: /* REF STRUCT(REF MODE245,MODE172)  */
XVQAELA_cv = (NVQAELA.data.mode17);
 /* line 1594: */
PVQAELA = A_CALLPROC(NL(LUQAELA_ptypeno),((*(&(XVQAELA_cv->T)))),((*(&(XVQAELA_cv->T))),(NL(LUQAELA_ptypeno)).nonlocals));
break;
default: 
UQPAELA_fault(0, A_HVEC(AWQAELA,ZVQAELA,A68_VC ));
 /* line 1595: */
 /* line 1596: */
PVQAELA = 0;
break;
} 
} 
A_PROC_EXIT(pctypeno);
return( PVQAELA );
} 
#undef NL

A_STATIC A68_VOID  VXQAELA_generator(A68_BOOL  TXQAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((WXQAELA_generator *)NonLocals)->x)
{ 
A68_VC  XXQAELA;  /* clause result */
A68_VC  YXQAELA;  /* OPERATORS - dynamic generator */
{ 
YXQAELA.upb = 1 ;
( TXQAELA_anonymous? A_VLOC(A68_CHAR ,YXQAELA): A_VHEAP(A68_CHAR ,YXQAELA) );
XXQAELA = YXQAELA;
} 
*ReturnedValue = (XXQAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  NYQAELA_generator(A68_BOOL  LYQAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((OYQAELA_generator *)NonLocals)->x)
{ 
A68_VC  PYQAELA;  /* clause result */
A68_VC  QYQAELA;  /* OPERATORS - dynamic generator */
{ 
QYQAELA.upb = 1 ;
( LYQAELA_anonymous? A_VLOC(A68_CHAR ,QYQAELA): A_VHEAP(A68_CHAR ,QYQAELA) );
PYQAELA = QYQAELA;
} 
*ReturnedValue = (PYQAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  WYQAELA_generator(A68_BOOL  UYQAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((XYQAELA_generator *)NonLocals)->x)
{ 
A68_VC  YYQAELA;  /* clause result */
A68_VC  ZYQAELA;  /* OPERATORS - dynamic generator */
{ 
ZYQAELA.upb = 1 ;
( UYQAELA_anonymous? A_VLOC(A68_CHAR ,ZYQAELA): A_VHEAP(A68_CHAR ,ZYQAELA) );
YYQAELA = ZYQAELA;
} 
*ReturnedValue = (YYQAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  OJRAELA_generator(A68_BOOL  MJRAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((PJRAELA_generator *)NonLocals)->x)
{ 
A68_VC  QJRAELA;  /* clause result */
A68_VC  RJRAELA;  /* OPERATORS - dynamic generator */
{ 
RJRAELA.upb = NL(LJRAELA_size) ;
( MJRAELA_anonymous? A_VLOC(A68_CHAR ,RJRAELA): A_VHEAP(A68_CHAR ,RJRAELA) );
QJRAELA = RJRAELA;
} 
*ReturnedValue = (QJRAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  RMRAELA_generator(A68_BOOL  PMRAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((SMRAELA_generator *)NonLocals)->x)
{ 
A68_VC  TMRAELA;  /* clause result */
A68_VC  UMRAELA;  /* OPERATORS - dynamic generator */
{ 
UMRAELA.upb = (*NL(IMRAELA_size)) ;
( PMRAELA_anonymous? A_VLOC(A68_CHAR ,UMRAELA): A_VHEAP(A68_CHAR ,UMRAELA) );
TMRAELA = UMRAELA;
} 
*ReturnedValue = (TMRAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  JNRAELA_generator(A68_BOOL  HNRAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((KNRAELA_generator *)NonLocals)->x)
{ 
A68_VC  LNRAELA;  /* clause result */
A68_VC  MNRAELA;  /* OPERATORS - dynamic generator */
{ 
MNRAELA.upb = 1 ;
( HNRAELA_anonymous? A_VLOC(A68_CHAR ,MNRAELA): A_VHEAP(A68_CHAR ,MNRAELA) );
LNRAELA = MNRAELA;
} 
*ReturnedValue = (LNRAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  EORAELA_move_query(A68_172  T, A68_222  *ReturnedValue)
{ 
A68_172  FORAELA;  /* united object - for case conformity */
A68_179 * GORAELA_r;
A68_227  HORAELA;  /* collateral clause result */
A68_222  IORAELA;  /* OPERATORS - mode -> union mode */
A68_232 * JORAELA;  /* YIELD */
A68_222  KORAELA;  /* clause result */
A68_227 * LORAELA;  /* YIELD */
A68_222  MORAELA;  /* OPERATORS - mode -> union mode */
A68_175 * NORAELA_s;
A68_175 * OORAELA_st;
A68_228 * PORAELA_new;
A68_228 ** QORAELA_next;
A68_228  RORAELA;  /* collateral clause result */
A68_222  SORAELA;  /* OPERATORS - mode -> union mode */
A68_232 * TORAELA;  /* YIELD */
A68_228 * UORAELA;  /* YIELD */
A68_222  VORAELA;  /* OPERATORS - mode -> union mode */
A68_222  WORAELA;  /* OPERATORS - mode -> union mode */
A68_232 * XORAELA;  /* YIELD */
A_PROC_ENTRY(move_query);
 /* line 2076: */
 /* line 2077: */
FORAELA = T ;
switch ( FORAELA.mode )
{ 
case 7: /* REF STRUCT(MODE172,MODE185)  */
GORAELA_r = (FORAELA.data.mode7);
JORAELA = BMDAELA_makecquery((*(&(GORAELA_r->T)))) ;
HORAELA.Ct = A_UNITE(IORAELA,mode13,13,JORAELA);
HORAELA.Size = (*(&(GORAELA_r->Size)));
 /* line 2078: */
LORAELA = A_HEAP(A68_227 ) ;
(*LORAELA) = HORAELA ;
KORAELA = A_UNITE(MORAELA,mode6,6,LORAELA);
break;
case 3: /* REF STRUCT(MODE172,REF MODE175)  */
NORAELA_s = (FORAELA.data.mode3);
{ 
OORAELA_st = NORAELA_s;
 /* line 2079: */
PORAELA_new = KQCAELA_nilcst;
 /* line 2080: */
QORAELA_next = (&PORAELA_new);
 /* line 2081: */
for ( ;; )
{ 
 /* line 2082: */
if ( !((OORAELA_st!=DQCAELA_nilst)) ) break;
 /* line 2083: */
TORAELA = BMDAELA_makecquery((*(&(OORAELA_st->T)))) ;
RORAELA.Cst = A_UNITE(SORAELA,mode13,13,TORAELA);
RORAELA.Rest = (A68_228 *)A68_NIL;
UORAELA = A_HEAP(A68_228 ) ;
(*UORAELA) = RORAELA ;
(*QORAELA_next) = UORAELA;
 /* line 2084: */
QORAELA_next = (&((*QORAELA_next)->Rest));
 /* line 2085: */
 /* line 2086: */
OORAELA_st = (*(&(OORAELA_st->Rest)));
}
 /* line 2087: */
 /* line 2088: */
 /* line 2089: */
 /* line 2090: */
KORAELA = A_UNITE(VORAELA,mode7,7,PORAELA_new);
} 
break;
default: 
XORAELA = BMDAELA_makecquery(T) ;
KORAELA = A_UNITE(WORAELA,mode13,13,XORAELA);
break;
} 
A_PROC_EXIT(move_query);
*ReturnedValue = (KORAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  GTRAELA_and(A68_414  A, A68_414  B, A68_414  *ReturnedValue)
{ 
A68_BOOL  HTRAELA;  /* optbool result */
A68_414  ITRAELA;  /* clause result */
A68_BOOL  JTRAELA;  /* optbool result */
A_PROC_ENTRY(and);
 /* line 2183: */
{ 
HTRAELA = LSRAELA_(A, CSRAELA_unknown);
if ( ! HTRAELA )
{HTRAELA = LSRAELA_(B, CSRAELA_unknown);
}
 /* line 2184: */
if ( HTRAELA )
{ 
ITRAELA = CSRAELA_unknown;
} 
else
{ 
JTRAELA = LSRAELA_(A, ASRAELA_true);
if ( JTRAELA )
{JTRAELA = LSRAELA_(B, ASRAELA_true);
}
if ( JTRAELA )
{ 
 /* line 2185: */
ITRAELA = ASRAELA_true;
} 
else
{ 
 /* line 2186: */
ITRAELA = BSRAELA_false;
} 
} 
} 
A_PROC_EXIT(and);
*ReturnedValue = (ITRAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  WWRAELA_result(A68_185  Int, A68_185  Stand, A68_421  Check, A68_185  *ReturnedValue)
{ 
A68_188  XWRAELA;  /* collateral clause result */
A68_INT  YWRAELA;  /* ADICOPS - ABS INT */
A68_188 * ZWRAELA;  /* YIELD */
A68_188 * AXRAELA_ic;
A68_185  BXRAELA;  /* clause result */
A68_185  CXRAELA;  /* OPERATORS - mode -> union mode */
A68_185  DXRAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(result);
 /* line 2286: */
{ 
XWRAELA.Integer = Int;
XWRAELA.Standard = Stand;
YWRAELA = Check.C ;
XWRAELA.Test = A_ABS(YWRAELA);
ZWRAELA = A_HEAP(A68_188 ) ;
(*ZWRAELA) = XWRAELA ;
AXRAELA_ic = ZWRAELA;
 /* line 2287: */
if ( (Check.C>=0) )
{ 
BXRAELA = A_UNITE(CXRAELA,mode5,5,AXRAELA_ic);
} 
else
{ 
MJQAELA_loadint(A_UNITE(DXRAELA,mode5,5,AXRAELA_ic), A68_FALSE);
 /* line 2288: */
BXRAELA = Int;
} 
} 
A_PROC_EXIT(result);
*ReturnedValue = (BXRAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  GXRAELA_getintcheck(A68_185  In, A68_188  *ReturnedValue, void *NonLocals)
#define NL(x) (((HXRAELA_getintcheck *)NonLocals)->x)
{ 
A68_185  IXRAELA;  /* united object - for case conformity */
A68_188 * JXRAELA_ic;
A68_188  KXRAELA;  /* clause result */
A_PROC_ENTRY(getintcheck);
 /* line 2291: */
{ 
 /* line 2292: */
IXRAELA = In ;
switch ( IXRAELA.mode )
{ 
case 5: /* REF STRUCT(MODE185,MODE185,INT)  */
JXRAELA_ic = (IXRAELA.data.mode5);
 /* line 2293: */
 /* line 2294: */
KXRAELA = (*JXRAELA_ic);
break;
default: 
KXRAELA = (**NL(SWRAELA_intcheck));
break;
} 
} 
A_PROC_EXIT(getintcheck);
*ReturnedValue = (KXRAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  QASAELA_addname(A68_VC  Id, void *NonLocals)
#define NL(x) (((RASAELA_addname *)NonLocals)->x)
{ 
A68_BOOL  SASAELA;  /* optbool result */
A68_BOOL  TASAELA;  /* optbool result */
A68_246  UASAELA;  /* collateral clause result */
A68_246 * VASAELA;  /* YIELD */
A68_246 ** WASAELA;  /* YIELD */
A68_246  XASAELA;  /* collateral clause result */
A68_246 * YASAELA;  /* YIELD */
A_PROC_ENTRY(addname);
 /* line 2366: */
{ 
(*NL(NASAELA_nstack)) = YIPAELA_namestack;
 /* line 2367: */
 /* line 2368: */
if ( (YIPAELA_namestack!=XIPAELA_nonames) )
{ 
for ( ;; )
{ 
SASAELA = ((*(&((*NL(NASAELA_nstack))->Rest)))!=XIPAELA_nonames);
if ( SASAELA )
{ /* line 2369: */
SASAELA = A_VC_NE(Id,(*(&((*NL(NASAELA_nstack))->Id))));
}
if ( !(SASAELA) ) break;
(*NL(NASAELA_nstack)) = (*(&((*NL(NASAELA_nstack))->Rest)));
}
 /* line 2370: */
TASAELA = ((*(&((*NL(NASAELA_nstack))->Rest)))==XIPAELA_nonames);
if ( TASAELA )
{ /* line 2371: */
TASAELA = A_VC_NE(Id,(*(&((*NL(NASAELA_nstack))->Id))));
}
if ( TASAELA )
{ 
UASAELA.Id = Id;
 /* line 2372: */
UASAELA.Rest = XIPAELA_nonames;
 /* line 2373: */
VASAELA = A_HEAP(A68_246 ) ;
(*VASAELA) = UASAELA ;
WASAELA = (&((*NL(NASAELA_nstack))->Rest)) ;
(*WASAELA) = VASAELA;
} 
} 
else
{ 
XASAELA.Id = Id;
 /* line 2374: */
XASAELA.Rest = XIPAELA_nonames;
 /* line 2375: */
YASAELA = A_HEAP(A68_246 ) ;
(*YASAELA) = XASAELA ;
YIPAELA_namestack = YASAELA;
} 
} 
A_PROC_EXIT(addname);
return;
} 
#undef NL

A_STATIC A68_VOID  DBSAELA_checkints(A68_185  A, A68_185  B, A68_INT  Df, A68_414  *ReturnedValue, void *NonLocals)
#define NL(x) (((EBSAELA_checkints *)NonLocals)->x)
{ 
A68_421  FBSAELA;  /* clause result */
A68_263  GBSAELA;  /* OPERATORS - mode -> union mode */
A68_262  HBSAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_419  IBSAELA;  /* avoid structure result */
A68_414  JBSAELA_ans;
A68_414  KBSAELA;  /* clause result */
A_PROC_ENTRY(checkints);
 /* line 2378: */
{ 
if ( NL(Outcheck) )
{ 
 /* line 2379: */
FBSAELA = AWRAELA_checktypeoutput;
} 
else
{ 
FBSAELA = ZVRAELA_checktype;
} 
RWRAELA_testints( FBSAELA, A, B, 0, A_HVEC(HBSAELA,A_UNITE(GBSAELA,mode13,13,TTCAOST_nullid),A68_263 ), Df, &IBSAELA );
JBSAELA_ans = IBSAELA.Test;
 /* line 2380: */
if ( NL(Ignore) )
{ 
if ( LSRAELA_(JBSAELA_ans, ASRAELA_true) )
{ 
KBSAELA = ASRAELA_true;
} 
else
{ 
 /* line 2381: */
 /* line 2382: */
KBSAELA = CSRAELA_unknown;
} 
} 
else
{ 
 /* line 2383: */
KBSAELA = JBSAELA_ans;
} 
} 
A_PROC_EXIT(checkints);
*ReturnedValue = (KBSAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  OBSAELA_equalspalts(A68_249 * A, A68_249 * B, A68_414  *ReturnedValue, void *NonLocals)
#define NL(x) (((PBSAELA_equalspalts *)NonLocals)->x)
{ 
A68_414  QBSAELA;  /* clause result */
A68_414  RBSAELA;  /* avoid structure result */
A68_414  SBSAELA;  /* clause result */
A68_414  TBSAELA;  /* avoid structure result */
A68_414  UBSAELA;  /* avoid structure result */
A68_414  VBSAELA;  /* avoid structure result */
A68_414  WBSAELA;  /* avoid structure result */
A68_414  XBSAELA;  /* avoid structure result */
A68_414  YBSAELA;  /* avoid structure result */
A_PROC_ENTRY(equalspalts);
 /* line 2386: */
{ 
if ( (A==BQCAELA_nilpalts) )
{ 
 /* line 2387: */
HSRAELA_testbool( (B==BQCAELA_nilpalts), &RBSAELA );
QBSAELA = RBSAELA;
} 
else
{ 
 /* line 2388: */
if ( (B==BQCAELA_nilpalts) )
{ 
 /* line 2389: */
QBSAELA = BSRAELA_false;
} 
else
{ 
 /* line 2390: */
 /* line 2391: */
if ( ((*(&(A->U)))==EQCAELA_niltype) )
{ 
 /* line 2392: */
HSRAELA_testbool( ((*(&(B->U)))==EQCAELA_niltype), &TBSAELA );
SBSAELA = TBSAELA;
} 
else
{ 
 /* line 2393: */
if ( ((*(&(B->U)))!=EQCAELA_niltype) )
{ 
 /* line 2394: */
 /* line 2395: */
JASAELA_checkequals( (*(*(&(A->U)))), (*(*(&(B->U)))), NL(Outcheck), NL(Ignore), NL(Exact), NL(Diff), &UBSAELA );
SBSAELA = UBSAELA;
} 
else
{ 
 /* line 2396: */
SBSAELA = BSRAELA_false;
} 
} 
 /* line 2397: */
A_CALLPROC(NL(NBSAELA_equalspalts),((*(&(A->Rest))), (*(&(B->Rest))), &VBSAELA),((*(&(A->Rest))), (*(&(B->Rest))), &VBSAELA,(NL(NBSAELA_equalspalts)).nonlocals));
HSRAELA_testbool( A_VC_EQ((*(&((*(&(A->Idinfo)))->Id))),(*(&((*(&(B->Idinfo)))->Id)))), &WBSAELA );
PSRAELA_and( WBSAELA, VBSAELA, &XBSAELA );
PSRAELA_and( XBSAELA, SBSAELA, &YBSAELA );
QBSAELA = YBSAELA;
} 
} 
} 
A_PROC_EXIT(equalspalts);
*ReturnedValue = (QBSAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  CCSAELA_equalcharalts(A68_251 * A, A68_251 * B, A68_414  *ReturnedValue, void *NonLocals)
#define NL(x) (((DCSAELA_equalcharalts *)NonLocals)->x)
{ 
A68_414  ECSAELA;  /* clause result */
A68_414  FCSAELA;  /* avoid structure result */
A68_252  GCSAELA;  /* united object - for case conformity */
A68_CHAR  HCSAELA_ac;
A68_252  ICSAELA;  /* united object - for case conformity */
A68_CHAR  JCSAELA_bc;
A68_414  KCSAELA;  /* clause result */
A68_414  LCSAELA;  /* avoid structure result */
A68_253  MCSAELA_ar;
A68_252  NCSAELA;  /* united object - for case conformity */
A68_253  OCSAELA_br;
A68_414  PCSAELA;  /* avoid structure result */
A68_414  QCSAELA;  /* avoid structure result */
A68_414  RCSAELA;  /* avoid structure result */
A68_414  SCSAELA;  /* avoid structure result */
A68_414  TCSAELA;  /* avoid structure result */
A_PROC_ENTRY(equalcharalts);
 /* line 2400: */
{ 
if ( (A==LQCAELA_nilcharalts) )
{ 
 /* line 2401: */
HSRAELA_testbool( (B==LQCAELA_nilcharalts), &FCSAELA );
ECSAELA = FCSAELA;
} 
else
{ 
 /* line 2402: */
if ( (B==LQCAELA_nilcharalts) )
{ 
ECSAELA = BSRAELA_false;
} 
else
{ 
 /* line 2403: */
GCSAELA = (*(&(A->Alts))) ;
switch ( GCSAELA.mode )
{ 
case 1: /* CHAR */
HCSAELA_ac = (GCSAELA.data.mode1);
 /* line 2404: */
ICSAELA = (*(&(B->Alts))) ;
switch ( ICSAELA.mode )
{ 
case 1: /* CHAR */
JCSAELA_bc = (ICSAELA.data.mode1);
 /* line 2405: */
 /* line 2406: */
HSRAELA_testbool( (HCSAELA_ac==JCSAELA_bc), &LCSAELA );
KCSAELA = LCSAELA;
break;
default: 
 /* line 2407: */
KCSAELA = BSRAELA_false;
break;
} 
break;
case 2: /* STRUCT(CHAR,CHAR)  */
MCSAELA_ar = (GCSAELA.data.mode2);
 /* line 2408: */
NCSAELA = (*(&(B->Alts))) ;
switch ( NCSAELA.mode )
{ 
case 2: /* STRUCT(CHAR,CHAR)  */
OCSAELA_br = (NCSAELA.data.mode2);
 /* line 2409: */
 /* line 2410: */
 /* line 2411: */
 /* line 2412: */
 /* line 2413: */
HSRAELA_testbool( (MCSAELA_ar.Upchar==OCSAELA_br.Upchar), &PCSAELA );
HSRAELA_testbool( (MCSAELA_ar.Lwchar==OCSAELA_br.Lwchar), &QCSAELA );
PSRAELA_and( QCSAELA, PCSAELA, &RCSAELA );
KCSAELA = RCSAELA;
break;
default: 
 /* line 2414: */
 /* line 2415: */
KCSAELA = BSRAELA_false;
break;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 2416: */
 /* line 2417: */
A_CALLPROC(NL(BCSAELA_equalcharalts),((*(&(A->Rest))), (*(&(B->Rest))), &SCSAELA),((*(&(A->Rest))), (*(&(B->Rest))), &SCSAELA,(NL(BCSAELA_equalcharalts)).nonlocals));
PSRAELA_and( KCSAELA, SCSAELA, &TCSAELA );
ECSAELA = TCSAELA;
} 
} 
} 
A_PROC_EXIT(equalcharalts);
*ReturnedValue = (ECSAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  RHSAELA_checkcalts(A68_222  A, A68_222  B, A68_414  *ReturnedValue, void *NonLocals)
#define NL(x) (((SHSAELA_checkcalts *)NonLocals)->x)
{ 
A68_222  THSAELA;  /* united object - for case conformity */
A68_229 * UHSAELA_ca;
A68_222  VHSAELA;  /* united object - for case conformity */
A68_229 * WHSAELA_bca;
A68_414  XHSAELA;  /* clause result */
A68_222  YHSAELA;  /* OPERATORS - mode -> union mode */
A68_229 * ZHSAELA;  /* YIELD */
A68_414  AISAELA;  /* avoid structure result */
A68_414  BISAELA;  /* clause result */
A68_414  CISAELA;  /* avoid structure result */
A68_414  DISAELA;  /* avoid structure result */
A68_414  EISAELA;  /* clause result */
A68_414  FISAELA;  /* avoid structure result */
A68_222  GISAELA;  /* OPERATORS - mode -> union mode */
A68_229 * HISAELA;  /* YIELD */
A68_222  IISAELA;  /* OPERATORS - mode -> union mode */
A68_229 * JISAELA;  /* YIELD */
A68_414  KISAELA;  /* avoid structure result */
A68_414  LISAELA;  /* avoid structure result */
A68_414  MISAELA;  /* avoid structure result */
A68_414  NISAELA;  /* avoid structure result */
A68_222  OISAELA;  /* united object - for case conformity */
A68_229 * PISAELA_bca;
A68_414  QISAELA;  /* clause result */
A68_222  RISAELA;  /* OPERATORS - mode -> union mode */
A68_229 * SISAELA;  /* YIELD */
A68_414  TISAELA;  /* avoid structure result */
A68_414  UISAELA;  /* avoid structure result */
A68_414  VISAELA;  /* avoid structure result */
A_PROC_ENTRY(checkcalts);
 /* line 2736: */
{ 
 /* line 2737: */
THSAELA = A ;
switch ( THSAELA.mode )
{ 
case 8: /* REF STRUCT(MODE222,REF MODE229)  */
UHSAELA_ca = (THSAELA.data.mode8);
 /* line 2738: */
{ 
 /* line 2739: */
VHSAELA = B ;
switch ( VHSAELA.mode )
{ 
case 8: /* REF STRUCT(MODE222,REF MODE229)  */
WHSAELA_bca = (VHSAELA.data.mode8);
 /* line 2740: */
 /* line 2741: */
if ( NL(Disjoint) )
{ 
 /* line 2742: */
 /* line 2743: */
 /* line 2744: */
if ( ((*(&(UHSAELA_ca->Rest)))==JQCAELA_nilcalts) )
{ 
XHSAELA = ASRAELA_true;
} 
else
{ 
 /* line 2745: */
ZHSAELA = (*(&(UHSAELA_ca->Rest))) ;
KHSAELA_ctypecheck( A_UNITE(YHSAELA,mode8,8,ZHSAELA), B, NL(Disjoint), &AISAELA );
XHSAELA = AISAELA;
} 
 /* line 2746: */
KHSAELA_ctypecheck( (*(&(UHSAELA_ca->Calt))), B, NL(Disjoint), &CISAELA );
PSRAELA_and( CISAELA, XHSAELA, &DISAELA );
BISAELA = DISAELA;
} 
else
{ 
 /* line 2747: */
 /* line 2748: */
if ( ((*(&(UHSAELA_ca->Rest)))==JQCAELA_nilcalts) )
{ 
 /* line 2749: */
HSRAELA_testbool( ((*(&(WHSAELA_bca->Rest)))!=JQCAELA_nilcalts), &FISAELA );
EISAELA = FISAELA;
} 
else
{ 
 /* line 2750: */
if ( ((*(&(WHSAELA_bca->Rest)))!=JQCAELA_nilcalts) )
{ 
 /* line 2751: */
 /* line 2752: */
HISAELA = (*(&(WHSAELA_bca->Rest))) ;
JISAELA = (*(&(UHSAELA_ca->Rest))) ;
KHSAELA_ctypecheck( A_UNITE(IISAELA,mode8,8,JISAELA), A_UNITE(GISAELA,mode8,8,HISAELA), NL(Disjoint), &KISAELA );
EISAELA = KISAELA;
} 
else
{ 
EISAELA = ASRAELA_true;
} 
} 
 /* line 2753: */
 /* line 2754: */
KHSAELA_ctypecheck( (*(&(UHSAELA_ca->Calt))), (*(&(WHSAELA_bca->Calt))), NL(Disjoint), &LISAELA );
PSRAELA_and( LISAELA, EISAELA, &MISAELA );
BISAELA = MISAELA;
} 
break;
default: 
if ( NL(Disjoint) )
{ 
A_CALLPROC(NL(QHSAELA_checkcalts),(B, A, &NISAELA),(B, A, &NISAELA,(NL(QHSAELA_checkcalts)).nonlocals));
BISAELA = NISAELA;
} 
else
{ 
 /* line 2755: */
 /* line 2756: */
BISAELA = ASRAELA_true;
} 
break;
} 
} 
break;
default: 
 /* line 2757: */
if ( NL(Disjoint) )
{ 
 /* line 2758: */
OISAELA = B ;
switch ( OISAELA.mode )
{ 
case 8: /* REF STRUCT(MODE222,REF MODE229)  */
PISAELA_bca = (OISAELA.data.mode8);
 /* line 2759: */
 /* line 2760: */
 /* line 2761: */
if ( ((*(&(PISAELA_bca->Rest)))==JQCAELA_nilcalts) )
{ 
QISAELA = ASRAELA_true;
} 
else
{ 
 /* line 2762: */
SISAELA = (*(&(PISAELA_bca->Rest))) ;
KHSAELA_ctypecheck( A, A_UNITE(RISAELA,mode8,8,SISAELA), NL(Disjoint), &TISAELA );
QISAELA = TISAELA;
} 
 /* line 2763: */
 /* line 2764: */
KHSAELA_ctypecheck( A, (*(&(PISAELA_bca->Calt))), NL(Disjoint), &UISAELA );
PSRAELA_and( UISAELA, QISAELA, &VISAELA );
BISAELA = VISAELA;
break;
default: 
 /* line 2765: */
 /* line 2766: */
BISAELA = ASRAELA_true;
break;
} 
} 
else
{ 
 /* line 2767: */
 /* line 2768: */
BISAELA = ASRAELA_true;
} 
break;
} 
} 
A_PROC_EXIT(checkcalts);
*ReturnedValue = (BISAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  BJSAELA_checkcharange(A68_CHAR  L1, A68_CHAR  U1, A68_CHAR  L2, A68_CHAR  U2, A68_414  *ReturnedValue, void *NonLocals)
#define NL(x) (((CJSAELA_checkcharange *)NonLocals)->x)
{ 
A68_INT  EJSAELA;  /* YIELD */
A68_165  DJSAELA_cl1;
A68_INT  GJSAELA;  /* YIELD */
A68_165  FJSAELA_cu1;
A68_INT  IJSAELA;  /* YIELD */
A68_165  HJSAELA_cl2;
A68_INT  KJSAELA;  /* YIELD */
A68_165  JJSAELA_cu2;
A68_414  LJSAELA;  /* clause result */
A68_414  MJSAELA;  /* avoid structure result */
A68_414  NJSAELA;  /* avoid structure result */
A68_414  OJSAELA;  /* avoid structure result */
A68_414  PJSAELA;  /* avoid structure result */
A68_414  QJSAELA;  /* avoid structure result */
A68_414  RJSAELA;  /* avoid structure result */
A68_414  SJSAELA;  /* clause result */
A68_414  TJSAELA;  /* avoid structure result */
A68_414  UJSAELA;  /* avoid structure result */
A_PROC_ENTRY(checkcharange);
 /* line 2771: */
{ 
EJSAELA = (A68_INT)(unsigned char)L1 ;
DJSAELA_cl1 = (*(&A_R1INDEX(JPPAELA_charset,EJSAELA)));
GJSAELA = (A68_INT)(unsigned char)U1 ;
FJSAELA_cu1 = (*(&A_R1INDEX(JPPAELA_charset,GJSAELA)));
 /* line 2772: */
IJSAELA = (A68_INT)(unsigned char)L2 ;
HJSAELA_cl2 = (*(&A_R1INDEX(JPPAELA_charset,IJSAELA)));
KJSAELA = (A68_INT)(unsigned char)U2 ;
JJSAELA_cu2 = (*(&A_R1INDEX(JPPAELA_charset,KJSAELA)));
 /* line 2773: */
 /* line 2774: */
 /* line 2776: */
if ( NL(Disjoint) )
{ 
 /* line 2777: */
 /* line 2778: */
HSRAELA_testbool( ((*(&((&FJSAELA_cu1)->Value)))<(*(&((&HJSAELA_cl2)->Value)))), &MJSAELA );
HSRAELA_testbool( ((*(&((&DJSAELA_cl1)->Value)))>(*(&((&JJSAELA_cu2)->Value)))), &NJSAELA );
VSRAELA_or( NJSAELA, MJSAELA, &OJSAELA );
LJSAELA = OJSAELA;
} 
else
{ 
 /* line 2779: */
 /* line 2780: */
 /* line 2781: */
HSRAELA_testbool( ((*(&((&FJSAELA_cu1)->Value)))!=(*(&((&JJSAELA_cu2)->Value)))), &PJSAELA );
HSRAELA_testbool( ((*(&((&DJSAELA_cl1)->Value)))!=(*(&((&HJSAELA_cl2)->Value)))), &QJSAELA );
VSRAELA_or( QJSAELA, PJSAELA, &RJSAELA );
LJSAELA = RJSAELA;
} 
HSRAELA_testbool( ((*(&((&DJSAELA_cl1)->Type)))!=(*(&((&HJSAELA_cl2)->Type)))), &TJSAELA );
VSRAELA_or( TJSAELA, LJSAELA, &UJSAELA );
SJSAELA = UJSAELA;
} 
A_PROC_EXIT(checkcharange);
*ReturnedValue = (SJSAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  YJSAELA_checkstring(A68_233  Ca, A68_233  Cb, A68_414  *ReturnedValue, void *NonLocals)
#define NL(x) (((ZJSAELA_checkstring *)NonLocals)->x)
{ 
A68_VC  AKSAELA_stringa;
A68_VC  BKSAELA_stringb;
A68_CHAR  CKSAELA_chara;
A68_CHAR  DKSAELA_charb;
A68_BOOL  EKSAELA_cnullt;
A68_BOOL  FKSAELA_ans;
A68_VC  GKSAELA;  /* avoid structure result */
A68_222  HKSAELA;  /* united object - for case conformity */
A68_234 * IKSAELA_cpc;
A68_230 * JKSAELA_cna;
A68_VC  KKSAELA;  /* avoid structure result */
A68_222  LKSAELA;  /* united object - for case conformity */
A68_234 * MKSAELA_cpc;
A68_230 * NKSAELA_cna;
A68_414  OKSAELA;  /* clause result */
A68_CHAR * PKSAELA_j;
A68_CHAR * QKSAELA_i;
A68_INT  RKSAELA;  /* forall loop counter */
A68_BOOL  SKSAELA;  /* optbool result */
A68_CHAR * TKSAELA_i;
A68_INT  UKSAELA;  /* forall loop counter */
A68_BOOL  VKSAELA;  /* optbool result */
A68_CHAR * WKSAELA_i;
A68_INT  XKSAELA;  /* forall loop counter */
A68_BOOL  YKSAELA;  /* optbool result */
A68_414  ZKSAELA;  /* avoid structure result */
A_PROC_ENTRY(checkstring);
 /* line 2784: */
{ 
 /* line 2785: */
 /* line 2786: */
EKSAELA_cnullt = A68_FALSE;
 /* line 2787: */
FKSAELA_ans = A68_FALSE;
 /* line 2788: */
 /* line 2789: */
if ( (Ca.Strings!=AJPAELA_nilstringlist) )
{ 
 /* line 2790: */
IJRAELA_joinstrings( HDRAELA_giveint(Ca.Size), Ca.Strings, &GKSAELA );
AKSAELA_stringa = GKSAELA;
} 
else
{ 
 /* line 2791: */
HKSAELA = Ca.Ct ;
switch ( HKSAELA.mode )
{ 
case 15: /* REF STRUCT(MODE172,CHAR)  */
IKSAELA_cpc = (HKSAELA.data.mode15);
 /* line 2792: */
CKSAELA_chara = (*(&(IKSAELA_cpc->Char)));
break;
case 9: /* REF STRUCT(MODE172)  */
JKSAELA_cna = (HKSAELA.data.mode9);
 /* line 2793: */
 /* line 2794: */
EKSAELA_cnullt = A68_TRUE;
break;
default: 
 /* line 2795: */
/*SKIP*/;
break;
} 
} 
 /* line 2796: */
 /* line 2797: */
if ( (Cb.Strings!=AJPAELA_nilstringlist) )
{ 
 /* line 2798: */
IJRAELA_joinstrings( HDRAELA_giveint(Cb.Size), Cb.Strings, &KKSAELA );
BKSAELA_stringb = KKSAELA;
} 
else
{ 
 /* line 2799: */
LKSAELA = Cb.Ct ;
switch ( LKSAELA.mode )
{ 
case 15: /* REF STRUCT(MODE172,CHAR)  */
MKSAELA_cpc = (LKSAELA.data.mode15);
 /* line 2800: */
DKSAELA_charb = (*(&(MKSAELA_cpc->Char)));
break;
case 9: /* REF STRUCT(MODE172)  */
NKSAELA_cna = (LKSAELA.data.mode9);
 /* line 2801: */
 /* line 2802: */
EKSAELA_cnullt = A68_TRUE;
break;
default: 
 /* line 2803: */
/*SKIP*/;
break;
} 
} 
 /* line 2804: */
 /* line 2805: */
if ( EKSAELA_cnullt )
{ 
if ( NL(Disjoint) )
{ 
OKSAELA = BSRAELA_false;
} 
else
{ 
 /* line 2806: */
OKSAELA = ASRAELA_true;
} 
} 
else
{ 
 /* line 2807: */
if ( (Ca.Strings!=AJPAELA_nilstringlist) )
{ 
 /* line 2808: */
if ( (Cb.Strings!=AJPAELA_nilstringlist) )
{ 
 /* line 2809: */
RKSAELA = BKSAELA_stringb.upb -1;
if ( RKSAELA != AKSAELA_stringa.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
PKSAELA_j = BKSAELA_stringb.data;
QKSAELA_i = AKSAELA_stringa.data;
for (;RKSAELA-- >= 0;
(PKSAELA_j++
,QKSAELA_i++
) )
{
SKSAELA = FKSAELA_ans;
if ( ! SKSAELA )
{SKSAELA = ((*QKSAELA_i)!=(*PKSAELA_j));
}
FKSAELA_ans = SKSAELA;
}
 /* line 2810: */
} 
else
{ 
UKSAELA = AKSAELA_stringa.upb -1;
TKSAELA_i = AKSAELA_stringa.data;
for (;UKSAELA-- >= 0;
(TKSAELA_i++
) )
{
VKSAELA = FKSAELA_ans;
if ( ! VKSAELA )
{VKSAELA = ((*TKSAELA_i)!=DKSAELA_charb);
}
FKSAELA_ans = VKSAELA;
}
 /* line 2811: */
 /* line 2812: */
} 
} 
else
{ 
 /* line 2813: */
if ( (Cb.Strings!=AJPAELA_nilstringlist) )
{ 
XKSAELA = BKSAELA_stringb.upb -1;
WKSAELA_i = BKSAELA_stringb.data;
for (;XKSAELA-- >= 0;
(WKSAELA_i++
) )
{
YKSAELA = FKSAELA_ans;
if ( ! YKSAELA )
{YKSAELA = ((*WKSAELA_i)!=CKSAELA_chara);
}
FKSAELA_ans = YKSAELA;
}
 /* line 2814: */
} 
else
{ 
 /* line 2815: */
 /* line 2816: */
FKSAELA_ans = (CKSAELA_chara!=DKSAELA_charb);
} 
} 
 /* line 2817: */
 /* line 2818: */
 /* line 2819: */
HSRAELA_testbool( FKSAELA_ans, &ZKSAELA );
OKSAELA = ZKSAELA;
} 
} 
A_PROC_EXIT(checkstring);
*ReturnedValue = (OKSAELA);
return;
} 
#undef NL

A_STATIC A68_BOOL  TSSAELA_stringsequal(A68_246 * As1, A68_246 * As2, void *NonLocals)
#define NL(x) (((USSAELA_stringsequal *)NonLocals)->x)
{ 
A68_BOOL  VSSAELA;  /* clause result */
A68_BOOL  WSSAELA;  /* optbool result */
A_PROC_ENTRY(stringsequal);
 /* line 3039: */
 /* line 3040: */
if ( (As1==AJPAELA_nilstringlist) )
{ 
 /* line 3041: */
VSSAELA = (As2==AJPAELA_nilstringlist);
} 
else
{ 
 /* line 3042: */
if ( (As2==AJPAELA_nilstringlist) )
{ 
 /* line 3043: */
VSSAELA = A68_FALSE;
} 
else
{ 
 /* line 3044: */
WSSAELA = A_VC_EQ((*(&(As1->Id))),(*(&(As2->Id))));
if ( WSSAELA )
{ /* line 3045: */
WSSAELA = A_CALLPROC(NL(SSSAELA_stringsequal),((*(&(As1->Rest))), (*(&(As2->Rest)))),((*(&(As1->Rest))), (*(&(As2->Rest))),(NL(SSSAELA_stringsequal)).nonlocals));
}
VSSAELA = WSSAELA;
} 
} 
A_PROC_EXIT(stringsequal);
return( VSSAELA );
} 
#undef NL

A_STATIC A68_INT  RWSAELA_equalsmparams(A68_169 * M1, A68_169 * M2, A68_INT  Df, void *NonLocals)
#define NL(x) (((SWSAELA_equalsmparams *)NonLocals)->x)
{ 
A68_INT  TWSAELA;  /* clause result */
A68_260  UWSAELA;  /* united object - for case conformity */
A68_260  VWSAELA;  /* united object - for case conformity */
A68_INT  WWSAELA;  /* clause result */
A68_189 * XWSAELA_i1;
A68_260  YWSAELA;  /* united object - for case conformity */
A68_189 * ZWSAELA_i2;
A68_176 * AXSAELA_t1;
A68_260  BXSAELA;  /* united object - for case conformity */
A68_176 * CXSAELA_t2;
A68_172  DXSAELA;  /* OPERATORS - mode -> union mode */
A68_172  EXSAELA;  /* OPERATORS - mode -> union mode */
A68_236 * FXSAELA_c1;
A68_260  GXSAELA;  /* united object - for case conformity */
A68_236 * HXSAELA_c2;
A68_222  IXSAELA;  /* OPERATORS - mode -> union mode */
A68_172  JXSAELA;  /* avoid structure result */
A68_172  KXSAELA_ct1;
A68_222  LXSAELA;  /* OPERATORS - mode -> union mode */
A68_172  MXSAELA;  /* avoid structure result */
A68_172  NXSAELA_ct2;
A68_167 * OXSAELA_fd1;
A68_260  PXSAELA;  /* united object - for case conformity */
A68_167 * QXSAELA_fd2;
A68_BOOL  RXSAELA;  /* optbool result */
A68_INT  SXSAELA_res;
A_PROC_ENTRY(equalsmparams);
 /* line 3199: */
{ 
 /* line 3200: */
if ( (M1==IQCAELA_nilmparams) )
{ 
if ( (M2==IQCAELA_nilmparams) )
{ 
TWSAELA = 0;
} 
else
{ 
 /* line 3201: */
TWSAELA = 5;
} 
} 
else
{ 
 /* line 3202: */
 /* line 3203: */
if ( (M2==IQCAELA_nilmparams) )
{ 
TWSAELA = 5;
} 
else
{ 
 /* line 3204: */
 /* line 3205: */
if ( ((*(&(M1->Sort)))!=(*(&(M2->Sort)))) )
{ 
 /* line 3206: */
TWSAELA = 7;
} 
else
{ 
 /* line 3207: */
UWSAELA = (*(&(M1->Value))) ;
switch ( UWSAELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE245)  */
 /* line 3208: */
VWSAELA = (*(&(M2->Value))) ;
switch ( VWSAELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE245)  */
WWSAELA = 0;
break;
default: 
 /* line 3209: */
WWSAELA = 6;
break;
} 
break;
case 2: /* REF STRUCT(REF MODE245)  */
XWSAELA_i1 = (UWSAELA.data.mode2);
 /* line 3210: */
YWSAELA = (*(&(M2->Value))) ;
switch ( YWSAELA.mode )
{ 
case 2: /* REF STRUCT(REF MODE245)  */
ZWSAELA_i2 = (YWSAELA.data.mode2);
WWSAELA = 0;
break;
default: 
 /* line 3211: */
WWSAELA = 6;
break;
} 
break;
case 3: /* REF STRUCT(REF MODE245,MODE172)  */
AXSAELA_t1 = (UWSAELA.data.mode3);
 /* line 3212: */
 /* line 3213: */
BXSAELA = (*(&(M2->Value))) ;
switch ( BXSAELA.mode )
{ 
case 3: /* REF STRUCT(REF MODE245,MODE172)  */
CXSAELA_t2 = (BXSAELA.data.mode3);
 /* line 3214: */
if ( !ZQSAELA_specequals(A_UNITE(EXSAELA,mode4,4,AXSAELA_t1), A_UNITE(DXSAELA,mode4,4,CXSAELA_t2), Df, NL(Exact)) )
{ 
WWSAELA = 8;
} 
else
{ 
 /* line 3215: */
 /* line 3216: */
WWSAELA = 0;
} 
break;
default: 
 /* line 3217: */
WWSAELA = 6;
break;
} 
break;
case 4: /* REF STRUCT(REF MODE245,MODE172)  */
FXSAELA_c1 = (UWSAELA.data.mode4);
 /* line 3218: */
 /* line 3219: */
GXSAELA = (*(&(M2->Value))) ;
switch ( GXSAELA.mode )
{ 
case 4: /* REF STRUCT(REF MODE245,MODE172)  */
HXSAELA_c2 = (GXSAELA.data.mode4);
 /* line 3220: */
{ 
A_CALLPROC(FUQAELA_ctypetotype,(A_UNITE(IXSAELA,mode17,17,FXSAELA_c1), &JXSAELA),(A_UNITE(IXSAELA,mode17,17,FXSAELA_c1), &JXSAELA,(FUQAELA_ctypetotype).nonlocals));
KXSAELA_ct1 = JXSAELA;
 /* line 3221: */
A_CALLPROC(FUQAELA_ctypetotype,(A_UNITE(LXSAELA,mode17,17,HXSAELA_c2), &MXSAELA),(A_UNITE(LXSAELA,mode17,17,HXSAELA_c2), &MXSAELA,(FUQAELA_ctypetotype).nonlocals));
NXSAELA_ct2 = MXSAELA;
 /* line 3222: */
 /* line 3223: */
if ( !ZQSAELA_specequals(KXSAELA_ct1, NXSAELA_ct2, Df, NL(Exact)) )
{ 
 /* line 3224: */
WWSAELA = 8;
} 
else
{ 
 /* line 3225: */
 /* line 3226: */
 /* line 3227: */
WWSAELA = 0;
} 
} 
break;
default: 
 /* line 3228: */
WWSAELA = 6;
break;
} 
break;
case 5: /* REF STRUCT(REF MODE168,INT,INT,BOOL,REF MODE26,INT,REF MODE169,REF REF MODE169,MODE170,REF MODE171,REF MODE171,MODE172,MODE172,INT)  */
OXSAELA_fd1 = (UWSAELA.data.mode5);
 /* line 3229: */
 /* line 3230: */
PXSAELA = (*(&(M2->Value))) ;
switch ( PXSAELA.mode )
{ 
case 5: /* REF STRUCT(REF MODE168,INT,INT,BOOL,REF MODE26,INT,REF MODE169,REF REF MODE169,MODE170,REF MODE171,REF MODE171,MODE172,MODE172,INT)  */
QXSAELA_fd2 = (PXSAELA.data.mode5);
 /* line 3231: */
 /* line 3232: */
 /* line 3233: */
if ( ((*(&(OXSAELA_fd1->Macro)))!=(*(&(QXSAELA_fd2->Macro)))) )
{ 
WWSAELA = 6;
} 
else
{ 
 /* line 3234: */
 /* line 3235: */
RXSAELA = !ZQSAELA_specequals((*(&(OXSAELA_fd1->Param))), (*(&(QXSAELA_fd2->Param))), Df, NL(Exact));
if ( ! RXSAELA )
{ /* line 3236: */
 /* line 3237: */
RXSAELA = !ZQSAELA_specequals((*(&(OXSAELA_fd1->Ans))), (*(&(QXSAELA_fd2->Ans))), Df, NL(Exact));
}
 /* line 3238: */
if ( RXSAELA )
{ 
 /* line 3239: */
WWSAELA = 8;
} 
else
{ 
if ( (*(&(OXSAELA_fd1->Macro))) )
{ 
 /* line 3240: */
 /* line 3241: */
if ( (A_CALLPROC(NL(QWSAELA_equalsmparams),((*(&(OXSAELA_fd1->Mp))), (*(&(QXSAELA_fd2->Mp))), Df),((*(&(OXSAELA_fd1->Mp))), (*(&(QXSAELA_fd2->Mp))), Df,(NL(QWSAELA_equalsmparams)).nonlocals))>0) )
{ 
 /* line 3242: */
WWSAELA = 9;
} 
else
{ 
 /* line 3243: */
 /* line 3244: */
WWSAELA = 0;
} 
} 
else
{ 
 /* line 3245: */
 /* line 3246: */
WWSAELA = 0;
} 
} 
} 
break;
default: 
 /* line 3247: */
 /* line 3248: */
WWSAELA = 6;
break;
} 
break;
default: 
WWSAELA = 0;
break;
} 
SXSAELA_res = WWSAELA;
 /* line 3249: */
 /* line 3250: */
if ( (SXSAELA_res==0) )
{ 
 /* line 3251: */
 /* line 3252: */
TWSAELA = SXSAELA_res = A_CALLPROC(NL(QWSAELA_equalsmparams),((*(&(M1->Rest))), (*(&(M2->Rest))), Df),((*(&(M1->Rest))), (*(&(M2->Rest))), Df,(NL(QWSAELA_equalsmparams)).nonlocals));
} 
else
{ 
 /* line 3253: */
 /* line 3254: */
TWSAELA = SXSAELA_res;
} 
} 
} 
} 
} 
A_PROC_EXIT(equalsmparams);
return( TWSAELA );
} 
#undef NL

A_STATIC A68_BOOL  AETAELA_ivmno(A68_185  I, A68_INT  V, void *NonLocals)
#define NL(x) (((BETAELA_ivmno *)NonLocals)->x)
{ 
A68_185  CETAELA;  /* united object - for case conformity */
A68_190 * DETAELA_id;
A68_BOOL  EETAELA;  /* optbool result */
A68_BOOL  FETAELA;  /* clause result */
A68_191 * GETAELA_im;
A68_192 * HETAELA_ic;
A68_BOOL  IETAELA;  /* optbool result */
A68_193 * JETAELA_iv;
A68_188 * KETAELA_ic;
A68_195 * LETAELA_id;
A68_196 * METAELA_ib;
A_PROC_ENTRY(ivmno);
 /* line 3467: */
 /* line 3468: */
{ 
 /* line 3469: */
CETAELA = I ;
switch ( CETAELA.mode )
{ 
case 7: /* REF STRUCT(INT,MODE185,MODE185)  */
DETAELA_id = (CETAELA.data.mode7);
EETAELA = A_CALLPROC(NL(ZDTAELA_ivmno),((*(&(DETAELA_id->L))), V),((*(&(DETAELA_id->L))), V,(NL(ZDTAELA_ivmno)).nonlocals));
if ( ! EETAELA )
{EETAELA = A_CALLPROC(NL(ZDTAELA_ivmno),((*(&(DETAELA_id->R))), V),((*(&(DETAELA_id->R))), V,(NL(ZDTAELA_ivmno)).nonlocals));
}
 /* line 3470: */
FETAELA = EETAELA;
break;
case 8: /* REF STRUCT(INT,MODE185)  */
GETAELA_im = (CETAELA.data.mode8);
 /* line 3471: */
FETAELA = A_CALLPROC(NL(ZDTAELA_ivmno),((*(&(GETAELA_im->R))), V),((*(&(GETAELA_im->R))), V,(NL(ZDTAELA_ivmno)).nonlocals));
break;
case 9: /* REF STRUCT(MODE185,MODE185,MODE185)  */
HETAELA_ic = (CETAELA.data.mode9);
IETAELA = A_CALLPROC(NL(ZDTAELA_ivmno),((*(&(HETAELA_ic->Cond))), V),((*(&(HETAELA_ic->Cond))), V,(NL(ZDTAELA_ivmno)).nonlocals));
if ( ! IETAELA )
{ /* line 3472: */
IETAELA = A_CALLPROC(NL(ZDTAELA_ivmno),((*(&(HETAELA_ic->T))), V),((*(&(HETAELA_ic->T))), V,(NL(ZDTAELA_ivmno)).nonlocals));
}
if ( ! IETAELA )
{IETAELA = A_CALLPROC(NL(ZDTAELA_ivmno),((*(&(HETAELA_ic->F))), V),((*(&(HETAELA_ic->F))), V,(NL(ZDTAELA_ivmno)).nonlocals));
}
 /* line 3473: */
FETAELA = IETAELA;
break;
case 10: /* REF STRUCT(INT,MODE185,MODE185,MODE185)  */
JETAELA_iv = (CETAELA.data.mode10);
 /* line 3474: */
FETAELA = ((*(&(JETAELA_iv->Varmultno)))==V);
break;
case 5: /* REF STRUCT(MODE185,MODE185,INT)  */
KETAELA_ic = (CETAELA.data.mode5);
 /* line 3475: */
FETAELA = A_CALLPROC(NL(ZDTAELA_ivmno),((*(&(KETAELA_ic->Integer))), V),((*(&(KETAELA_ic->Integer))), V,(NL(ZDTAELA_ivmno)).nonlocals));
break;
case 12: /* REF STRUCT(REF MODE198,INT,MODE185)  */
LETAELA_id = (CETAELA.data.mode12);
 /* line 3476: */
FETAELA = A_CALLPROC(NL(ZDTAELA_ivmno),((*(&(LETAELA_id->I))), V),((*(&(LETAELA_id->I))), V,(NL(ZDTAELA_ivmno)).nonlocals));
break;
case 13: /* REF STRUCT(MODE185)  */
METAELA_ib = (CETAELA.data.mode13);
 /* line 3477: */
FETAELA = A_CALLPROC(NL(ZDTAELA_ivmno),((*(&(METAELA_ib->Ibracket))), V),((*(&(METAELA_ib->Ibracket))), V,(NL(ZDTAELA_ivmno)).nonlocals));
break;
default: 
 /* line 3478: */
 /* line 3479: */
FETAELA = A68_FALSE;
break;
} 
} 
A_PROC_EXIT(ivmno);
return( FETAELA );
} 
#undef NL

A_STATIC A68_175 * EITAELA_stiotype(A68_175 * Str, void *NonLocals)
#define NL(x) (((FITAELA_stiotype *)NonLocals)->x)
{ 
A68_175 * GITAELA;  /* clause result */
A68_175  HITAELA;  /* collateral clause result */
A68_172  IITAELA;  /* avoid structure result */
A68_175 * JITAELA;  /* YIELD */
A_PROC_ENTRY(stiotype);
 /* line 3600: */
{ 
 /* line 3601: */
if ( (Str==DQCAELA_nilst) )
{ 
GITAELA = (A68_175 *)A68_NIL;
} 
else
{ 
AITAELA_setiotype( (*(&(Str->T))), NL(Sort), &IITAELA );
HITAELA.T = IITAELA;
 /* line 3602: */
HITAELA.Rest = A_CALLPROC(NL(DITAELA_stiotype),((*(&(Str->Rest)))),((*(&(Str->Rest))),(NL(DITAELA_stiotype)).nonlocals));
 /* line 3603: */
JITAELA = A_HEAP(A68_175 ) ;
(*JITAELA) = HITAELA ;
GITAELA = JITAELA;
} 
} 
A_PROC_EXIT(stiotype);
return( GITAELA );
} 
#undef NL

A_STATIC A68_249 * YMTAELA_substpalts(A68_249 * A, void *NonLocals)
#define NL(x) (((ZMTAELA_substpalts *)NonLocals)->x)
{ 
A68_249 * ANTAELA;  /* clause result */
A68_172 * BNTAELA;  /* clause result */
A68_172  CNTAELA;  /* avoid structure result */
A68_172 * DNTAELA;  /* YIELD */
A68_172 * ENTAELA_ty;
A68_249  FNTAELA;  /* collateral clause result */
A68_249 * GNTAELA;  /* YIELD */
A_PROC_ENTRY(substpalts);
 /* line 3690: */
 /* line 3691: */
 /* line 3692: */
if ( (A==BQCAELA_nilpalts) )
{ 
 /* line 3693: */
ANTAELA = (A68_249 *)A68_NIL;
} 
else
{ 
 /* line 3694: */
 /* line 3695: */
if ( ((*(&(A->U)))==EQCAELA_niltype) )
{ 
BNTAELA = (A68_172 *)A68_NIL;
} 
else
{ 
 /* line 3696: */
UMTAELA_substtype( NL(P), NL(T_fnno), (*(*(&(A->U)))), &CNTAELA );
DNTAELA = A_HEAP(A68_172 ) ;
(*DNTAELA) = CNTAELA ;
BNTAELA = DNTAELA;
} 
ENTAELA_ty = BNTAELA;
 /* line 3697: */
FNTAELA.Idinfo = (*(&(A->Idinfo)));
FNTAELA.U = ENTAELA_ty;
 /* line 3698: */
FNTAELA.Rest = A_CALLPROC(NL(XMTAELA_substpalts),((*(&(A->Rest)))),((*(&(A->Rest))),(NL(XMTAELA_substpalts)).nonlocals));
GNTAELA = A_HEAP(A68_249 ) ;
(*GNTAELA) = FNTAELA ;
ANTAELA = GNTAELA;
} 
A_PROC_EXIT(substpalts);
return( ANTAELA );
} 
#undef NL

A_STATIC A68_175 * JNTAELA_substst(A68_175 * S, void *NonLocals)
#define NL(x) (((KNTAELA_substst *)NonLocals)->x)
{ 
A68_175 * LNTAELA;  /* clause result */
A68_175  MNTAELA;  /* collateral clause result */
A68_172  NNTAELA;  /* avoid structure result */
A68_175 * ONTAELA;  /* YIELD */
A_PROC_ENTRY(substst);
 /* line 3701: */
if ( (S==DQCAELA_nilst) )
{ 
 /* line 3702: */
LNTAELA = (A68_175 *)A68_NIL;
} 
else
{ 
UMTAELA_substtype( NL(P), NL(T_fnno), (*(&(S->T))), &NNTAELA );
MNTAELA.T = NNTAELA;
 /* line 3703: */
MNTAELA.Rest = A_CALLPROC(NL(INTAELA_substst),((*(&(S->Rest)))),((*(&(S->Rest))),(NL(INTAELA_substst)).nonlocals));
ONTAELA = A_HEAP(A68_175 ) ;
(*ONTAELA) = MNTAELA ;
LNTAELA = ONTAELA;
} 
A_PROC_EXIT(substst);
return( LNTAELA );
} 
#undef NL

A_STATIC A68_VOID  XVTAELA_fail(void)
{ 
A68_46  AWTAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(fail);
UQPAELA_fault(0, A_HVEC(AWTAELA,ZVTAELA,A68_VC ));
A_PROC_EXIT(fail);
return;
} 
#undef NL

A_STATIC A68_175 * BGUAELA_csttost(A68_228 * Cst, void *NonLocals)
#define NL(x) (((CGUAELA_csttost *)NonLocals)->x)
{ 
A68_175 * DGUAELA;  /* clause result */
A68_175  EGUAELA;  /* collateral clause result */
A68_172  FGUAELA;  /* avoid structure result */
A68_175 * GGUAELA;  /* YIELD */
A_PROC_ENTRY(csttost);
 /* line 4133: */
{ 
if ( (Cst==KQCAELA_nilcst) )
{ 
 /* line 4134: */
DGUAELA = (A68_175 *)A68_NIL;
} 
else
{ 
A_CALLPROC(FUQAELA_ctypetotype,((*(&(Cst->Cst))), &FGUAELA),((*(&(Cst->Cst))), &FGUAELA,(FUQAELA_ctypetotype).nonlocals));
EGUAELA.T = FGUAELA;
 /* line 4135: */
EGUAELA.Rest = A_CALLPROC(NL(AGUAELA_csttost),((*(&(Cst->Rest)))),((*(&(Cst->Rest))),(NL(AGUAELA_csttost)).nonlocals));
 /* line 4136: */
GGUAELA = A_HEAP(A68_175 ) ;
(*GGUAELA) = EGUAELA ;
DGUAELA = GGUAELA;
} 
} 
A_PROC_EXIT(csttost);
return( DGUAELA );
} 
#undef NL

A_STATIC A68_VOID  VMUAELA_generator(A68_BOOL  TMUAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((WMUAELA_generator *)NonLocals)->x)
{ 
A68_VC  XMUAELA;  /* clause result */
A68_VC  YMUAELA;  /* OPERATORS - dynamic generator */
{ 
YMUAELA.upb = 2 ;
( TMUAELA_anonymous? A_VLOC(A68_CHAR ,YMUAELA): A_VHEAP(A68_CHAR ,YMUAELA) );
XMUAELA = YMUAELA;
} 
*ReturnedValue = (XMUAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  FNUAELA_generator(A68_BOOL  DNUAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((GNUAELA_generator *)NonLocals)->x)
{ 
A68_VC  HNUAELA;  /* clause result */
A68_VC  INUAELA;  /* OPERATORS - dynamic generator */
{ 
INUAELA.upb = 20 ;
( DNUAELA_anonymous? A_VLOC(A68_CHAR ,INUAELA): A_VHEAP(A68_CHAR ,INUAELA) );
HNUAELA = INUAELA;
} 
*ReturnedValue = (HNUAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  PNUAELA_generator(A68_BOOL  NNUAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((QNUAELA_generator *)NonLocals)->x)
{ 
A68_VC  RNUAELA;  /* clause result */
A68_VC  SNUAELA;  /* OPERATORS - dynamic generator */
{ 
SNUAELA.upb = 19 ;
( NNUAELA_anonymous? A_VLOC(A68_CHAR ,SNUAELA): A_VHEAP(A68_CHAR ,SNUAELA) );
RNUAELA = SNUAELA;
} 
*ReturnedValue = (RNUAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  ZNUAELA_generator(A68_BOOL  XNUAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((AOUAELA_generator *)NonLocals)->x)
{ 
A68_VC  BOUAELA;  /* clause result */
A68_VC  COUAELA;  /* OPERATORS - dynamic generator */
{ 
COUAELA.upb = 8 ;
( XNUAELA_anonymous? A_VLOC(A68_CHAR ,COUAELA): A_VHEAP(A68_CHAR ,COUAELA) );
BOUAELA = COUAELA;
} 
*ReturnedValue = (BOUAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  OVUAELA_generator(A68_BOOL  MVUAELA_anonymous, A68_221  *ReturnedValue, void *NonLocals)
#define NL(x) (((PVUAELA_generator *)NonLocals)->x)
{ 
A68_221  QVUAELA;  /* clause result */
A68_221  RVUAELA;  /* OPERATORS - dynamic generator */
{ 
RVUAELA.upb = NL(HVUAELA_size) ;
( MVUAELA_anonymous? A_VLOC(A68_210 ,RVUAELA): A_VHEAP(A68_210 ,RVUAELA) );
QVUAELA = RVUAELA;
} 
*ReturnedValue = (QVUAELA);
return;
} 
#undef NL

A_STATIC A68_214 * EWUAELA_join_st(A68_175 * St, void *NonLocals)
#define NL(x) (((FWUAELA_join_st *)NonLocals)->x)
{ 
A68_214  GWUAELA;  /* collateral clause result */
A68_210  HWUAELA;  /* avoid structure result */
A68_210 * IWUAELA;  /* YIELD */
A68_214 * JWUAELA;  /* clause result */
A68_214 * KWUAELA;  /* YIELD */
A_PROC_ENTRY(join_st);
 /* line 4638: */
 /* line 4639: */
 /* line 4640: */
if ( (St!=DQCAELA_nilst) )
{ 
 /* line 4641: */
TUUAELA_join_setup( (*(&(St->T))), NL(Source), &HWUAELA );
IWUAELA = A_HEAP(A68_210 ) ;
GWUAELA.Jst = (*IWUAELA) = HWUAELA;
 /* line 4642: */
GWUAELA.Rest = A_CALLPROC(NL(DWUAELA_join_st),((*(&(St->Rest)))),((*(&(St->Rest))),(NL(DWUAELA_join_st)).nonlocals));
 /* line 4643: */
KWUAELA = A_HEAP(A68_214 ) ;
(*KWUAELA) = GWUAELA ;
JWUAELA = KWUAELA;
} 
else
{ 
JWUAELA = (A68_214 *)A68_NIL;
} 
A_PROC_EXIT(join_st);
return( JWUAELA );
} 
#undef NL

A_STATIC A68_VOID  MXUAELA_makeids(A68_172  T, A68_INT  Wherefrom, A68_244 * I, void *NonLocals)
#define NL(x) (((NXUAELA_makeids *)NonLocals)->x)
{ 
A68_172  PXUAELA;  /* avoid structure result */
A68_172  OXUAELA_idtype;
A68_INT  QXUAELA;  /* clause result */
A68_INT  RXUAELA_bsource;
A68_INT  SXUAELA;  /* clause result */
A68_INT  TXUAELA_bsink;
A68_204  UXUAELA;  /* collateral clause result */
A68_INT * VXUAELA;  /* YIELD */
A68_172  WXUAELA;  /* avoid structure result */
A68_210  XXUAELA;  /* avoid structure result */
A68_172  YXUAELA;  /* avoid structure result */
A68_210  ZXUAELA;  /* avoid structure result */
A68_211  AYUAELA;  /* OPERATORS - mode -> union mode */
A68_211  BYUAELA;  /* OPERATORS - mode -> union mode */
A68_204 * CYUAELA;  /* YIELD */
A68_199  DYUAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(makeids);
 /* line 4659: */
{ 
VIDAELA_primtype( T, A68_FALSE, &PXUAELA );
OXUAELA_idtype = PXUAELA;
 /* line 4660: */
 /* line 4661: */
if ( (Wherefrom!=ESCAELA_outputtok) )
{ 
QXUAELA = RPCAELA_vnamesource;
} 
else
{ 
QXUAELA = SPCAELA_vnamesink;
} 
RXUAELA_bsource = QXUAELA;
 /* line 4662: */
 /* line 4663: */
if ( (Wherefrom!=ESCAELA_outputtok) )
{ 
SXUAELA = SPCAELA_vnamesink;
} 
else
{ 
SXUAELA = RPCAELA_vnamesource;
} 
TXUAELA_bsink = SXUAELA;
 /* line 4664: */
 /* line 4665: */
 /* line 4666: */
if ( (I!=CQCAELA_nilids) )
{ 
A_CALLPROC(NL(LXUAELA_makeids),(T, Wherefrom, (*(&(I->Rest)))),(T, Wherefrom, (*(&(I->Rest))),(NL(LXUAELA_makeids)).nonlocals));
 /* line 4667: */
 /* line 4668: */
 /* line 4669: */
VXUAELA = (&(NL(Fd)->Num_names)) ;
UXUAELA.Decno = (*VXUAELA)+=1;
UXUAELA.Origin = Wherefrom;
UXUAELA.Makeint = DMPAELA_makeint;
 /* line 4670: */
UXUAELA.Type = T;
 /* line 4671: */
AITAELA_setiotype( OXUAELA_idtype, RXUAELA_bsource, &WXUAELA );
TUUAELA_join_setup( WXUAELA, A68_TRUE, &XXUAELA );
UXUAELA.Jsource = XXUAELA;
 /* line 4672: */
AITAELA_setiotype( OXUAELA_idtype, TXUAELA_bsink, &YXUAELA );
TUUAELA_join_setup( YXUAELA, A68_FALSE, &ZXUAELA );
UXUAELA.Jsink = ZXUAELA;
 /* line 4673: */
UXUAELA.Input = A_UNITE(AYUAELA,mode3,3,DRCAELA_flt);
UXUAELA.Output = A_UNITE(BYUAELA,mode3,3,DRCAELA_flt);
 /* line 4674: */
 /* line 4675: */
CYUAELA = A_HEAP(A68_204 ) ;
(*CYUAELA) = UXUAELA ;
UIQAELA_setidunn((*(&(I->Idinfo))), A_UNITE(DYUAELA,mode5,5,CYUAELA));
} 
} 
A_PROC_EXIT(makeids);
return;
} 
#undef NL

A_STATIC A68_BOOL  JYUAELA_check_all_jst(A68_214 * Js, void *NonLocals)
#define NL(x) (((KYUAELA_check_all_jst *)NonLocals)->x)
{ 
A68_BOOL  LYUAELA;  /* optbool result */
A68_BOOL  MYUAELA;  /* clause result */
A_PROC_ENTRY(check_all_jst);
 /* line 4686: */
 /* line 4687: */
if ( (Js!=PQCAELA_niljoinst) )
{ 
LYUAELA = FYUAELA_check_joined((&(Js->Jst)));
if ( LYUAELA )
{ /* line 4688: */
LYUAELA = A_CALLPROC(NL(IYUAELA_check_all_jst),((*(&(Js->Rest)))),((*(&(Js->Rest))),(NL(IYUAELA_check_all_jst)).nonlocals));
}
MYUAELA = LYUAELA;
} 
else
{ 
 /* line 4689: */
MYUAELA = A68_TRUE;
} 
A_PROC_EXIT(check_all_jst);
return( MYUAELA );
} 
#undef NL

A_STATIC A68_BOOL  OYUAELA_test1(A68_218 * Jnd)
{ 
A68_BOOL  PYUAELA;  /* clause result */
A_PROC_ENTRY(test1);
 /* line 4691: */
if ( YTDAELA_joinequal((*Jnd), QRCAELA_jfalse) )
{ 
PYUAELA = A68_FALSE;
} 
else
{ 
PYUAELA = A68_TRUE;
} 
A_PROC_EXIT(test1);
return( PYUAELA );
} 
#undef NL

A_STATIC A68_BOOL  JZUAELA_check_all_jst(A68_214 * Js, void *NonLocals)
#define NL(x) (((KZUAELA_check_all_jst *)NonLocals)->x)
{ 
A68_BOOL  LZUAELA;  /* optbool result */
A68_BOOL  MZUAELA;  /* clause result */
A_PROC_ENTRY(check_all_jst);
 /* line 4713: */
 /* line 4714: */
if ( (Js!=PQCAELA_niljoinst) )
{ 
LZUAELA = FZUAELA_check_if_joined((&(Js->Jst)));
if ( ! LZUAELA )
{ /* line 4715: */
LZUAELA = A_CALLPROC(NL(IZUAELA_check_all_jst),((*(&(Js->Rest)))),((*(&(Js->Rest))),(NL(IZUAELA_check_all_jst)).nonlocals));
}
MZUAELA = LZUAELA;
} 
else
{ 
 /* line 4716: */
MZUAELA = A68_FALSE;
} 
A_PROC_EXIT(check_all_jst);
return( MZUAELA );
} 
#undef NL

A_STATIC A68_BOOL  OZUAELA_test2(A68_218 * Jnd)
{ 
A68_BOOL  PZUAELA;  /* clause result */
A_PROC_ENTRY(test2);
 /* line 4718: */
if ( YTDAELA_joinequal((*Jnd), PRCAELA_jtrue) )
{ 
PZUAELA = A68_TRUE;
} 
else
{ 
PZUAELA = A68_FALSE;
} 
A_PROC_EXIT(test2);
return( PZUAELA );
} 
#undef NL

A_STATIC A68_BOOL  JAVAELA_check_all_jst(A68_214 * Js, void *NonLocals)
#define NL(x) (((KAVAELA_check_all_jst *)NonLocals)->x)
{ 
A68_BOOL  LAVAELA;  /* optbool result */
A68_BOOL  MAVAELA;  /* clause result */
A_PROC_ENTRY(check_all_jst);
 /* line 4741: */
 /* line 4742: */
if ( (Js!=PQCAELA_niljoinst) )
{ 
LAVAELA = FAVAELA_has_join_check((&(Js->Jst)));
if ( ! LAVAELA )
{ /* line 4743: */
LAVAELA = A_CALLPROC(NL(IAVAELA_check_all_jst),((*(&(Js->Rest)))),((*(&(Js->Rest))),(NL(IAVAELA_check_all_jst)).nonlocals));
}
MAVAELA = LAVAELA;
} 
else
{ 
 /* line 4744: */
MAVAELA = A68_FALSE;
} 
A_PROC_EXIT(check_all_jst);
return( MAVAELA );
} 
#undef NL

A_STATIC A68_BOOL  OAVAELA_test2(A68_218 * Jnd)
{ 
A68_BOOL  PAVAELA;  /* clause result */
A_PROC_ENTRY(test2);
 /* line 4746: */
if ( YTDAELA_joinequal((*Jnd), RRCAELA_jcheck) )
{ 
PAVAELA = A68_TRUE;
} 
else
{ 
PAVAELA = A68_FALSE;
} 
A_PROC_EXIT(test2);
return( PAVAELA );
} 
#undef NL

A_STATIC A68_VOID  FEVAELA_set_check(A68_218 * Jnd, A68_BOOL  Isfn, A68_218  *ReturnedValue, void *NonLocals)
#define NL(x) (((GEVAELA_set_check *)NonLocals)->x)
{ 
A68_172  HEVAELA;  /* united object - for case conformity */
A68_182  IEVAELA_f;
A68_218  JEVAELA;  /* clause result */
A68_BOOL  KEVAELA;  /* optbool result */
A_PROC_ENTRY(set_check);
 /* line 4866: */
 /* line 4867: */
HEVAELA = RLPAELA_type ;
switch ( HEVAELA.mode )
{ 
case 10: /* STRUCT(INT)  */
IEVAELA_f = (HEVAELA.data.mode10);
 /* line 4868: */
JEVAELA = SRCAELA_jfault;
break;
default: 
 /* line 4869: */
 /* line 4870: */
if ( YTDAELA_joinequal(NL(Jtest), SRCAELA_jfault) )
{ 
JEVAELA = SRCAELA_jfault;
} 
else
{ 
 /* line 4871: */
 /* line 4872: */
if ( YTDAELA_joinequal(NL(Jtest), RRCAELA_jcheck) )
{ 
JEVAELA = RRCAELA_jcheck;
} 
else
{ 
KEVAELA = Isfn;
if ( ! KEVAELA )
{KEVAELA = !NL(Source);
}
if ( KEVAELA )
{ /* line 4873: */
KEVAELA = YTDAELA_joinequal((*Jnd), PRCAELA_jtrue);
}
if ( KEVAELA )
{ 
 /* line 4874: */
UQPAELA_fault(180, VJAAOSI_nullmsg);
 /* line 4875: */
 /* line 4876: */
JEVAELA = PRCAELA_jtrue;
} 
else
{ 
 /* line 4877: */
 /* line 4878: */
if ( YTDAELA_joinequal((*Jnd), QRCAELA_jfalse) )
{ 
 /* line 4879: */
JEVAELA = PRCAELA_jtrue;
} 
else
{ 
 /* line 4880: */
 /* line 4881: */
JEVAELA = (*Jnd);
} 
} 
} 
} 
break;
} 
A_PROC_EXIT(set_check);
*ReturnedValue = (JEVAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  ZEVAELA_mark_jst(A68_214 * Jss, void *NonLocals)
#define NL(x) (((AFVAELA_mark_jst *)NonLocals)->x)
{ 
A_PROC_ENTRY(mark_jst);
 /* line 4890: */
 /* line 4891: */
if ( (Jss!=PQCAELA_niljoinst) )
{ 
AEVAELA_mark_join((&(Jss->Jst)), NL(Jtest), NL(Source));
 /* line 4892: */
 /* line 4893: */
A_CALLPROC(NL(YEVAELA_mark_jst),((*(&(Jss->Rest)))),((*(&(Jss->Rest))),(NL(YEVAELA_mark_jst)).nonlocals));
} 
A_PROC_EXIT(mark_jst);
return;
} 
#undef NL

A_STATIC A68_VOID  QFVAELA_jcount(A68_214 * Js, void *NonLocals)
#define NL(x) (((RFVAELA_jcount *)NonLocals)->x)
{ 
A_PROC_ENTRY(jcount);
 /* line 4919: */
if ( (Js!=PQCAELA_niljoinst) )
{ 
(*NL(NFVAELA_count))+=1;
A_CALLPROC(NL(PFVAELA_jcount),((*(&(Js->Rest)))),((*(&(Js->Rest))),(NL(PFVAELA_jcount)).nonlocals));
} 
A_PROC_EXIT(jcount);
return;
} 
#undef NL

A_STATIC A68_VOID  UFVAELA_generator(A68_BOOL  SFVAELA_anonymous, A68_221  *ReturnedValue, void *NonLocals)
#define NL(x) (((VFVAELA_generator *)NonLocals)->x)
{ 
A68_221  WFVAELA;  /* clause result */
A68_221  XFVAELA;  /* OPERATORS - dynamic generator */
{ 
XFVAELA.upb = (*NL(NFVAELA_count)) ;
( SFVAELA_anonymous? A_VLOC(A68_210 ,XFVAELA): A_VHEAP(A68_210 ,XFVAELA) );
WFVAELA = XFVAELA;
} 
*ReturnedValue = (WFVAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  CGVAELA_jass(A68_214 * Js, void *NonLocals)
#define NL(x) (((DGVAELA_jass *)NonLocals)->x)
{ 
A68_INT  EGVAELA;  /* YIELD */
A68_210 * FGVAELA;  /* YIELD */
A68_210 * GGVAELA;  /* YIELD */
A_PROC_ENTRY(jass);
 /* line 4924: */
if ( (Js!=PQCAELA_niljoinst) )
{ 
A_CALLPROC(NL(BGVAELA_jass),((*(&(Js->Rest)))),((*(&(Js->Rest))),(NL(BGVAELA_jass)).nonlocals));
 /* line 4925: */
 /* line 4926: */
EGVAELA = (*NL(NFVAELA_count))-=1 ;
FGVAELA = A_HEAP(A68_210 ) ;
GGVAELA = (&A_VINDEX((*NL(YFVAELA_jup)),EGVAELA)) ;
(*GGVAELA) = (*FGVAELA) = (*(&(Js->Jst)));
} 
A_PROC_EXIT(jass);
return;
} 
#undef NL

A_STATIC A68_VOID  XIVAELA_generator(A68_BOOL  VIVAELA_anonymous, A68_221  *ReturnedValue, void *NonLocals)
#define NL(x) (((YIVAELA_generator *)NonLocals)->x)
{ 
A68_221  ZIVAELA;  /* clause result */
A68_221  AJVAELA;  /* OPERATORS - dynamic generator */
{ 
 /* line 4987: */
AJVAELA.upb = ((NL(Upb)-NL(Lwb))+1) ;
( VIVAELA_anonymous? A_VLOC(A68_210 ,AJVAELA): A_VHEAP(A68_210 ,AJVAELA) );
ZIVAELA = AJVAELA;
} 
*ReturnedValue = (ZIVAELA);
return;
} 
#undef NL

A_STATIC A68_214 * RJVAELA_jtrim(A68_214 * Jst, A68_INT  I, void *NonLocals)
#define NL(x) (((SJVAELA_jtrim *)NonLocals)->x)
{ 
A68_214 * TJVAELA;  /* clause result */
A68_214  UJVAELA;  /* collateral clause result */
A68_214 * VJVAELA;  /* YIELD */
A68_214  WJVAELA;  /* collateral clause result */
A68_214 * XJVAELA;  /* YIELD */
A_PROC_ENTRY(jtrim);
 /* line 4999: */
 /* line 5000: */
 /* line 5001: */
if ( (Jst==PQCAELA_niljoinst) )
{ 
TJVAELA = (A68_214 *)A68_NIL;
} 
else
{ 
 /* line 5002: */
if ( (I>1) )
{ 
UJVAELA.Jst = (*(&(Jst->Jst)));
 /* line 5003: */
UJVAELA.Rest = A_CALLPROC(NL(QJVAELA_jtrim),((*(&(Jst->Rest))), (I-1)),((*(&(Jst->Rest))), (I-1),(NL(QJVAELA_jtrim)).nonlocals));
VJVAELA = A_HEAP(A68_214 ) ;
(*VJVAELA) = UJVAELA ;
TJVAELA = VJVAELA;
} 
else
{ 
WJVAELA.Jst = (*(&(Jst->Jst)));
 /* line 5004: */
WJVAELA.Rest = PQCAELA_niljoinst;
XJVAELA = A_HEAP(A68_214 ) ;
(*XJVAELA) = WJVAELA ;
TJVAELA = XJVAELA;
} 
} 
A_PROC_EXIT(jtrim);
return( TJVAELA );
} 
#undef NL

A_STATIC A68_VOID  WLVAELA_makeids(A68_172  T, A68_244 * I, void *NonLocals)
#define NL(x) (((XLVAELA_makeids *)NonLocals)->x)
{ 
A68_206  YLVAELA;  /* collateral clause result */
A68_INT * ZLVAELA;  /* YIELD */
A68_206 * AMVAELA;  /* YIELD */
A68_199  BMVAELA;  /* OPERATORS - mode -> union mode */
A68_206  CMVAELA;  /* YIELD */
A_PROC_ENTRY(makeids);
 /* line 5061: */
{ 
 /* line 5062: */
if ( (I!=CQCAELA_nilids) )
{ 
A_CALLPROC(NL(VLVAELA_makeids),(T, (*(&(I->Rest)))),(T, (*(&(I->Rest))),(NL(VLVAELA_makeids)).nonlocals));
 /* line 5063: */
 /* line 5064: */
YLVAELA.Type = T;
ZLVAELA = (&(NL(Fd)->Num_names)) ;
YLVAELA.Decno = (*ZLVAELA)+=1;
 /* line 5065: */
 /* line 5066: */
AMVAELA = A_HEAP(A68_206 ) ;
CMVAELA = (*AMVAELA) = YLVAELA ;
UIQAELA_setidunn((*(&(I->Idinfo))), A_UNITE(BMVAELA,mode7,7,CMVAELA));
} 
} 
A_PROC_EXIT(makeids);
return;
} 
#undef NL

A_STATIC A68_220 * IRVAELA_substvarstack(A68_220 * Jstack, void *NonLocals)
#define NL(x) (((JRVAELA_substvarstack *)NonLocals)->x)
{ 
A68_220  KRVAELA;  /* collateral clause result */
A68_185  LRVAELA;  /* avoid structure result */
A68_185  MRVAELA;  /* avoid structure result */
A68_220 * NRVAELA;  /* clause result */
A68_220 * ORVAELA;  /* YIELD */
A_PROC_ENTRY(substvarstack);
 /* line 5232: */
 /* line 5233: */
if ( (Jstack!=SQCAELA_niljoinvarstack) )
{ 
 /* line 5234: */
ILTAELA_substvarmult( (&(Jstack->Lwb)), NL(Index), &LRVAELA );
KRVAELA.Lwb = LRVAELA;
 /* line 5235: */
ILTAELA_substvarmult( (&(Jstack->Upb)), NL(Index), &MRVAELA );
KRVAELA.Upb = MRVAELA;
 /* line 5236: */
KRVAELA.Index = (*(&(Jstack->Index)));
 /* line 5237: */
KRVAELA.Rest = A_CALLPROC(NL(HRVAELA_substvarstack),((*(&(Jstack->Rest)))),((*(&(Jstack->Rest))),(NL(HRVAELA_substvarstack)).nonlocals));
 /* line 5238: */
ORVAELA = A_HEAP(A68_220 ) ;
(*ORVAELA) = KRVAELA ;
NRVAELA = ORVAELA;
} 
else
{ 
NRVAELA = (A68_220 *)A68_NIL;
} 
A_PROC_EXIT(substvarstack);
return( NRVAELA );
} 
#undef NL

A_STATIC A68_214 * MSVAELA_index_jst(A68_214 * Js, void *NonLocals)
#define NL(x) (((NSVAELA_index_jst *)NonLocals)->x)
{ 
A68_214  OSVAELA;  /* collateral clause result */
A68_210  PSVAELA;  /* avoid structure result */
A68_214 * QSVAELA;  /* clause result */
A68_214 * RSVAELA;  /* YIELD */
A_PROC_ENTRY(index_jst);
 /* line 5279: */
 /* line 5280: */
if ( (Js!=PQCAELA_niljoinst) )
{ 
 /* line 5281: */
ISVAELA_indexreturn( (*(&(Js->Jst))), NL(Index), NL(Toplevel), &PSVAELA );
OSVAELA.Jst = PSVAELA;
 /* line 5282: */
OSVAELA.Rest = A_CALLPROC(NL(LSVAELA_index_jst),((*(&(Js->Rest)))),((*(&(Js->Rest))),(NL(LSVAELA_index_jst)).nonlocals));
 /* line 5283: */
RSVAELA = A_HEAP(A68_214 ) ;
(*RSVAELA) = OSVAELA ;
QSVAELA = RSVAELA;
} 
else
{ 
QSVAELA = (A68_214 *)A68_NIL;
} 
A_PROC_EXIT(index_jst);
return( QSVAELA );
} 
#undef NL

A_STATIC A68_VOID  DTVAELA_generator(A68_BOOL  BTVAELA_anonymous, A68_221  *ReturnedValue, void *NonLocals)
#define NL(x) (((ETVAELA_generator *)NonLocals)->x)
{ 
A68_221  FTVAELA;  /* clause result */
A68_221  GTVAELA;  /* OPERATORS - dynamic generator */
{ 
GTVAELA.upb = (*(&(NL(ZSVAELA_jr)->Jrow))).upb ;
( BTVAELA_anonymous? A_VLOC(A68_210 ,GTVAELA): A_VHEAP(A68_210 ,GTVAELA) );
FTVAELA = GTVAELA;
} 
*ReturnedValue = (FTVAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  AUVAELA_generator(A68_BOOL  YTVAELA_anonymous, A68_221  *ReturnedValue, void *NonLocals)
#define NL(x) (((BUVAELA_generator *)NonLocals)->x)
{ 
A68_221  CUVAELA;  /* clause result */
A68_221  DUVAELA;  /* OPERATORS - dynamic generator */
{ 
DUVAELA.upb = NL(WTVAELA_size) ;
( YTVAELA_anonymous? A_VLOC(A68_210 ,DUVAELA): A_VHEAP(A68_210 ,DUVAELA) );
CUVAELA = DUVAELA;
} 
*ReturnedValue = (CUVAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  PHPAELA_generator(A68_BOOL  OHPAELA_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  QHPAELA;  /* clause result */
A68_VC  RHPAELA;  /* OPERATORS - dynamic generator */
{ 
RHPAELA.upb = 512 ;
( OHPAELA_anonymous? A_VLOC(A68_CHAR ,RHPAELA): A_VHEAP(A68_CHAR ,RHPAELA) );
QHPAELA = RHPAELA;
} 
*ReturnedValue = (QHPAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  GIPAELA_generator(A68_BOOL  FIPAELA_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  HIPAELA;  /* clause result */
A68_VC  IIPAELA;  /* OPERATORS - dynamic generator */
{ 
IIPAELA.upb = ZICAELA_linesize ;
( FIPAELA_anonymous? A_VLOC(A68_CHAR ,IIPAELA): A_VHEAP(A68_CHAR ,IIPAELA) );
HIPAELA = IIPAELA;
} 
*ReturnedValue = (HIPAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  QIPAELA_generator(A68_BOOL  PIPAELA_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  RIPAELA;  /* clause result */
A68_VC  SIPAELA;  /* OPERATORS - dynamic generator */
{ 
SIPAELA.upb = OSCAOST_maxid ;
( PIPAELA_anonymous? A_VLOC(A68_CHAR ,SIPAELA): A_VHEAP(A68_CHAR ,SIPAELA) );
RIPAELA = SIPAELA;
} 
*ReturnedValue = (RIPAELA);
return;
} 
#undef NL
 /* line 409: */
 /* line 410: */
 /* line 411: */
 /* line 412: */
 /* line 413: */
 /* line 414: */
 /* line 415: */
 /* line 416: */
 /* line 417: */
 /* line 418: */
 /* line 419: */
 /* line 420: */
 /* line 422: */

A68_VOID  ZPPAELA_proset(A68_351  Outintsproc, A68_43  Outidproc, A68_43  Outstringproc, A68_129  Endcompproc, A68_43  Modulenameproc, A68_INT  Vnnoproc, A68_117  Nextkeptproc, A68_117  Inkeptintproc, A68_156  Inkeptidproc, A68_352  Nextimportproc, A68_353  Setcontextproc, A68_354  Inputproc, A68_355  Fltmessproc, A68_274  Lookupproc, A68_163  Charsetproc)
{ 
A68_357  BQPAELA_generator;   /* proc value of non-global proc */
A68_163  GQPAELA;  /* avoid structure result */
A68_INT  HQPAELA_i;
A68_INT  IQPAELA;  /* to part of loop */
A68_165 * JQPAELA;  /* YIELD */
A_PROC_ENTRY(proset);
 /* line 423: */
 /* line 424: */
{ 
VOPAELA_outints = Outintsproc;
 /* line 425: */
WOPAELA_outid = Outidproc;
 /* line 426: */
XOPAELA_outstring = Outstringproc;
 /* line 427: */
YOPAELA_endcomp = Endcompproc;
 /* line 428: */
ZOPAELA_modulename = Modulenameproc;
APPAELA_vnno = Vnnoproc;
 /* line 429: */
BPPAELA_nextkept = Nextkeptproc;
 /* line 430: */
CPPAELA_inkeptint = Inkeptintproc;
 /* line 431: */
DPPAELA_inkeptid = Inkeptidproc;
 /* line 432: */
EPPAELA_nextimport = Nextimportproc;
 /* line 433: */
FPPAELA_setcontext = Setcontextproc;
 /* line 434: */
GPPAELA_input = Inputproc;
 /* line 435: */
HPPAELA_fltmess = Fltmessproc;
 /* line 436: */
IPPAELA_lookup = Lookupproc;
 /* line 437: */
A_CLOSURE( BQPAELA_generator, CQPAELA_generator, DQPAELA_generator );
(( DQPAELA_generator * ) ( BQPAELA_generator.nonlocals )) -> Charsetproc = Charsetproc;
A_CALLPROC(BQPAELA_generator,(A68_FALSE, &GQPAELA),(A68_FALSE, &GQPAELA,(BQPAELA_generator).nonlocals));
JPPAELA_charset = GQPAELA;
 /* line 438: */
 /* line 439: */
IQPAELA = Charsetproc.dim[0].upb;
for ( HQPAELA_i = 1;
HQPAELA_i <= IQPAELA;
HQPAELA_i += 1 )
{ 
JQPAELA = (&A_R1INDEX(JPPAELA_charset,HQPAELA_i)) ;
(*JQPAELA) = (*(&A_R1INDEX(Charsetproc,HQPAELA_i)));
}
 /* line 440: */
} 
A_PROC_EXIT(proset);
return;
} 
#undef NL

A68_VOID  MQPAELA_syfault(A68_INT  No, A68_46  Params)
{ 
A68_INT  PQPAELA_i;
A68_BOOL  QQPAELA;  /* optbool result */
A68_BOOL  RQPAELA;  /* optbool result */
A_PROC_ENTRY(syfault);
 /* line 444: */
 /* line 445: */
{ 
PQPAELA_i = XHPAELA_tind;
 /* line 446: */
if ( KJPAELA_nofltmess )
{ 
goto OQPAELA_over;
} 
 /* line 447: */
OIPAELA_noflts+=12;
 /* line 448: */
QQPAELA = (OIPAELA_noflts>180);
if ( QQPAELA )
{ /* line 449: */
QQPAELA = (OIPAELA_noflts<193);
}
if ( QQPAELA )
{ 
 /* line 450: */
A_CALLPROC(IJPAELA_abort1,(198, VJAAOSI_nullmsg),(198, VJAAOSI_nullmsg,(IJPAELA_abort1).nonlocals));
} 
 /* line 451: */
for ( ;; )
{ 
RQPAELA = (PQPAELA_i>0);
if ( RQPAELA )
{RQPAELA = ((*(&A_VINDEX(SHPAELA_textbuff,PQPAELA_i)))==' ');
}
if ( !(RQPAELA) ) break;
PQPAELA_i-=1;
}
 /* line 452: */
A_CALLPROC(HPPAELA_fltmess,(PQPAELA_i, No, Params),(PQPAELA_i, No, Params,(HPPAELA_fltmess).nonlocals));
 /* line 453: */
OQPAELA_over:
 /* line 454: */
/*SKIP*/;
} 
A_PROC_EXIT(syfault);
return;
} 
#undef NL

A68_VOID  UQPAELA_fault(A68_INT  No, A68_46  Params)
{ 
A_PROC_ENTRY(fault);
 /* line 459: */
{ 
if ( !MJPAELA_syntaxerror )
{ 
MQPAELA_syfault(No, Params);
} 
} 
A_PROC_EXIT(fault);
return;
} 
#undef NL

A68_VOID  XQPAELA_abort(A68_INT  No, A68_46  Params)
{ 
A68_BOOL  YQPAELA;  /* optbool result */
A68_INT  ZQPAELA;  /* loop control */
A_PROC_ENTRY(abort);
 /* line 462: */
 /* line 463: */
{ 
YQPAELA = (No>0);
if ( ! YQPAELA )
{YQPAELA = (Params.upb>0);
}
if ( YQPAELA )
{ 
MQPAELA_syfault(No, Params);
} 
 /* line 464: */
YHPAELA_textend-=1;
 /* line 465: */
OIPAELA_noflts+=12;
 /* line 466: */
for ( ZQPAELA = 1;
ZQPAELA <= 10;
ZQPAELA += 1 )
{ 
if ( !(JJPAELA_moreinput) ) break;
JJPAELA_moreinput = A_CALLPROC(GPPAELA_input,((&SHPAELA_textbuff), (&YHPAELA_textend)),((&SHPAELA_textbuff), (&YHPAELA_textend),(GPPAELA_input).nonlocals));
}
 /* line 467: */
 /* line 468: */
A_CALLPROC(YOPAELA_endcomp,(),((YOPAELA_endcomp).nonlocals));
} 
A_PROC_EXIT(abort);
return;
} 
#undef NL

A68_VOID  CRPAELA_nofault(A68_INT  No, A68_46  Params)
{ 
A_PROC_ENTRY(nofault);
A_CALLPROC(HPPAELA_fltmess,(0, No, Params),(0, No, Params,(HPPAELA_fltmess).nonlocals));
A_PROC_EXIT(nofault);
return;
} 
#undef NL

A68_VOID  DRPAELA_starter(void)
{ 
A68_CHAR * ERPAELA_i;
A68_INT  FRPAELA;  /* forall loop counter */
A68_CHAR * GRPAELA_i;
A68_INT  HRPAELA;  /* forall loop counter */
A68_CHAR * IRPAELA_i;
A68_INT  JRPAELA;  /* forall loop counter */
A68_CHAR * KRPAELA_i;
A68_INT  LRPAELA;  /* forall loop counter */
A68_54  QRPAELA;  /* avoid structure result */
A68_170  RRPAELA;  /* OPERATORS - mode -> union mode */
A68_164  SRPAELA;  /* procedure value */
A_PROC_ENTRY(starter);
{ 
FRPAELA = SHPAELA_textbuff.upb -1;
ERPAELA_i = SHPAELA_textbuff.data;
for (;FRPAELA-- >= 0;
(ERPAELA_i++
) )
{
(*ERPAELA_i) = ' ';
}
 /* line 475: */
HRPAELA = JIPAELA_string.upb -1;
GRPAELA_i = JIPAELA_string.data;
for (;HRPAELA-- >= 0;
(GRPAELA_i++
) )
{
(*GRPAELA_i) = ' ';
}
 /* line 476: */
JRPAELA = TIPAELA_ident1.upb -1;
IRPAELA_i = TIPAELA_ident1.data;
for (;JRPAELA-- >= 0;
(IRPAELA_i++
) )
{
(*IRPAELA_i) = ' ';
}
 /* line 477: */
LRPAELA = VIPAELA_compsymb1.upb -1;
KRPAELA_i = VIPAELA_compsymb1.data;
for (;LRPAELA-- >= 0;
(KRPAELA_i++
) )
{
(*KRPAELA_i) = ' ';
}
 /* line 478: */
ZHPAELA_compsymb = TTCAOST_nullid;
 /* line 479: */
CIPAELA_ident = TTCAOST_nullid;
 /* line 480: */
YHPAELA_textend = 1;
 /* line 481: */
XHPAELA_tind = 0;
 /* line 482: */
EIPAELA_idhash = 1;
 /* line 483: */
LIPAELA_stringsize = 1;
 /* line 484: */
OIPAELA_noflts = (-1);
 /* line 485: */
EKPAELA_ctypeno = 0;
 /* line 486: */
FKPAELA_cfnno = 0;
 /* line 487: */
GKPAELA_cintno = 0;
 /* line 488: */
HKPAELA_cctypeno = 0;
 /* line 489: */
IKPAELA_cattrno = 0;
 /* line 490: */
WJPAELA_iv = 0;
 /* line 491: */
AIPAELA_compsize = 0;
 /* line 492: */
BIPAELA_comphash = 0;
 /* line 493: */
MIPAELA_strbase = 0;
 /* line 494: */
NIPAELA_noofchars = 0;
 /* line 495: */
CKPAELA_t1 = 0;
 /* line 496: */
DKPAELA_sfnno = 0;
 /* line 497: */
JJPAELA_moreinput = A68_TRUE;
 /* line 498: */
KJPAELA_nofltmess = A68_FALSE;
 /* line 499: */
MJPAELA_syntaxerror = A68_FALSE;
 /* line 500: */
NJPAELA_errorrecov = 0;
 /* line 501: */
TJPAELA_incom = A68_FALSE;
 /* line 502: */
YKPAELA_exitcomp = A68_FALSE;
 /* line 503: */
NRPAELA_generator( A68_FALSE, &QRPAELA );
NOPAELA_charcheck = QRPAELA;
 /* line 504: */
ZKPAELA_kids = (A68_244 *)A68_NIL;
 /* line 505: */
ALPAELA_kfns = (A68_166 *)A68_NIL;
 /* line 506: */
OLPAELA_ids = CQCAELA_nilids;
 /* line 507: */
PLPAELA_fns = HQCAELA_nilfns;
 /* line 508: */
YIPAELA_namestack = XIPAELA_nonames;
 /* line 509: */
ZIPAELA_paramnamestack = XIPAELA_nonames;
 /* line 510: */
FJPAELA_attr = A_UNITE(RRPAELA,mode6,6,MRCAELA_attrnull);
 /* line 511: */
GJPAELA_attrstr = MQCAELA_nilattrstr;
 /* line 512: */
HJPAELA_nextattr = (&GJPAELA_attrstr);
 /* line 513: */
CJPAELA_classnames = AJPAELA_nilstringlist;
 /* line 514: */
SRPAELA.fn.fn_global = XQPAELA_abort;
SRPAELA.nonlocals = A68_NIL;
IJPAELA_abort1 = SRPAELA;
 /* line 515: */
BOPAELA_sopstack = (A68_292 *)A68_NIL;
 /* line 516: */
OOPAELA_compilefnstack = POPAELA_nilcompilefnstack;
 /* line 517: */
COPAELA_typestack = (A68_175 *)A68_NIL;
 /* line 518: */
DOPAELA_integerstack = (A68_209 *)A68_NIL;
 /* line 519: */
EOPAELA_idinfostack = (A68_291 *)A68_NIL;
 /* line 520: */
FOPAELA_sucstack = (A68_289 *)A68_NIL;
 /* line 521: */
DMPAELA_makeint = GUCAELA_nilintegerstack;
 /* line 522: */
 /* line 523: */
PNPAELA_scope = 0;
} 
A_PROC_EXIT(starter);
return;
} 
#undef NL

A_STATIC A68_INT  TRPAELA_primread(void)
{ 
A68_CHAR  WRPAELA_c;
A68_INT  XRPAELA_i;
A68_BOOL  YRPAELA_radixgiven;
A68_BOOL  ZRPAELA_textneeded;
A68_INT  ASPAELA_ans;
A68_INT  BSPAELA_radix;
A68_BOOL  CSPAELA_overflow;
A68_INT  DSPAELA_lastvalue;
A68_INT  NSPAELA;  /* YIELD */
A68_INT  OSPAELA;  /* clause result */
A68_INT  PSPAELA;  /* YIELD */
A68_INT  SSPAELA;  /* YIELD */
A68_CHAR * TSPAELA;  /* YIELD */
A68_INT  USPAELA;  /* YIELD */
A68_INT  VSPAELA;  /* YIELD */
A68_BOOL  WSPAELA;  /* optbool result */
A68_31  YSPAELA_generator;   /* proc value of non-global proc */
A68_VC  DTPAELA;  /* avoid structure result */
A68_VC  ETPAELA;  /* OPERATORS - trim index */
A68_VC  FTPAELA;  /* OPERATORS - assign op */
A68_BOOL  KTPAELA_maxintplusonepending;
A68_VC  NTPAELA;  /* OPERATORS - simple index */
A68_INT  OTPAELA;  /* YIELD */
A68_BOOL  PTPAELA;  /* optbool result */
A68_INT  QTPAELA;  /* YIELD */
A68_CHAR * RTPAELA;  /* YIELD */
A68_BOOL  STPAELA;  /* optbool result */
A68_BOOL  TTPAELA;  /* optbool result */
A68_INT  UTPAELA;  /* YIELD */
A68_BOOL  VTPAELA;  /* optbool result */
A68_BOOL  WTPAELA;  /* optbool result */
A68_INT  XTPAELA;  /* YIELD */
A68_CHAR * YTPAELA;  /* YIELD */
A68_INT  ZTPAELA;  /* YIELD */
A68_BOOL  AUPAELA;  /* clause result */
A68_INT  BUPAELA;  /* YIELD */
A68_INT  CUPAELA;  /* YIELD */
A68_CHAR * DUPAELA;  /* YIELD */
A68_INT  EUPAELA;  /* clause result */
A68_BOOL  FUPAELA;  /* optbool result */
A68_31  HUPAELA_generator;   /* proc value of non-global proc */
A68_VC  NUPAELA;  /* avoid structure result */
A68_VC  OUPAELA;  /* OPERATORS - trim index */
A68_VC  PUPAELA;  /* OPERATORS - assign op */
A68_VC  MUPAELA_stringtext;
A68_VC  QUPAELA;  /* clause result */
A68_VC * RUPAELA;  /* YIELD */
A68_350  SUPAELA;  /* clause result */
A68_350  TUPAELA;  /* OPERATORS - mode -> union mode */
A68_31  VUPAELA_generator;   /* proc value of non-global proc */
A68_VC  BVPAELA;  /* avoid structure result */
A68_VC  CVPAELA;  /* OPERATORS - trim index */
A68_VC  DVPAELA;  /* OPERATORS - assign op */
A68_VC  AVPAELA_stringtext;
A68_187  EVPAELA;  /* collateral clause result */
A68_187 * FVPAELA;  /* YIELD */
A68_350  GVPAELA;  /* OPERATORS - mode -> union mode */
A68_350  HVPAELA;  /* OPERATORS - mode -> union mode */
A68_INT  MVPAELA;  /* YIELD */
A68_INT  NVPAELA;  /* YIELD */
A68_INT  OVPAELA;  /* YIELD */
A68_INT  PVPAELA;  /* YIELD */
A68_INT  QVPAELA;  /* YIELD */
A68_CHAR * RVPAELA;  /* YIELD */
A68_INT  SVPAELA;  /* YIELD */
A68_BOOL  TVPAELA;  /* optbool result */
A68_BOOL  UVPAELA;  /* clause result */
A68_INT  VVPAELA;  /* YIELD */
A68_CHAR * WVPAELA;  /* YIELD */
A68_INT  XVPAELA;  /* YIELD */
A68_VC  YVPAELA;  /* OPERATORS - trim index */
A68_31  AWPAELA_generator;   /* proc value of non-global proc */
A68_VC  FWPAELA;  /* avoid structure result */
A68_VC  GWPAELA;  /* OPERATORS - trim index */
A68_VC  HWPAELA;  /* OPERATORS - assign op */
A68_INT  IWPAELA;  /* YIELD */
A68_INT  JWPAELA;  /* YIELD */
A68_INT  MWPAELA;  /* YIELD */
A68_INT  NWPAELA;  /* YIELD */
A68_CHAR * OWPAELA;  /* YIELD */
A68_BOOL  PWPAELA;  /* optbool result */
A68_INT  QWPAELA;  /* YIELD */
A68_INT  RWPAELA;  /* YIELD */
A68_INT  SWPAELA;  /* YIELD */
A68_BOOL  TWPAELA;  /* optbool result */
A68_BOOL  UWPAELA;  /* optbool result */
A68_31  WWPAELA_generator;   /* proc value of non-global proc */
A68_VC  BXPAELA;  /* avoid structure result */
A68_VC  CXPAELA;  /* OPERATORS - trim index */
A68_VC  DXPAELA;  /* OPERATORS - assign op */
A68_BOOL  EXPAELA;  /* optbool result */
A68_INT  FXPAELA;  /* YIELD */
A68_INT  GXPAELA;  /* YIELD */
A68_VC  HXPAELA;  /* OPERATORS - trim index */
A68_INT  IXPAELA;  /* clause result */
A_PROC_ENTRY(primread);
{ 
 /* line 528: */
 /* line 529: */
YRPAELA_radixgiven = A68_FALSE;
ZRPAELA_textneeded = A68_FALSE;
 /* line 530: */
BSPAELA_radix = 10;
 /* line 531: */
CSPAELA_overflow = A68_FALSE;
 /* line 532: */
 /* line 533: */
 /* line 534: */
 /* line 536: */
 /* line 537: */
 /* line 538: */
 /* line 539: */
 /* line 540: */
 /* line 542: */
VRPAELA_l:
NSPAELA = XHPAELA_tind+=1 ;
WRPAELA_c = (*(&A_VINDEX(SHPAELA_textbuff,NSPAELA)));
 /* line 543: */
 /* line 545: */
PSPAELA = (A68_INT)(unsigned char)WRPAELA_c ;
OSPAELA = (*(&((&A_R1INDEX(JPPAELA_charset,PSPAELA))->Type)));
switch ( OSPAELA )
{ 
case 1: 
{ 
MQPAELA_syfault(199, VJAAOSI_nullmsg);
 /* line 546: */
MJPAELA_syntaxerror = A68_TRUE;
 /* line 547: */
 /* line 548: */
 /* line 550: */
ASPAELA_ans = (DSCAELA_recovertok+100);
} 
break;
case 2: 
 /* line 551: */
if ( (XHPAELA_tind>=YHPAELA_textend) )
{ 
 /* line 552: */
ASPAELA_ans = OJPAELA_rcnewline;
} 
else
{ 
 /* line 553: */
 /* line 555: */
goto VRPAELA_l;
} 
break;
case 3: 
{ 
DIPAELA_idsize = 0;
 /* line 556: */
EIPAELA_idhash = 0;
 /* line 557: */
RSPAELA_l1:
 /* line 558: */
if ( (DIPAELA_idsize!=OSCAOST_maxid) )
{ 
SSPAELA = DIPAELA_idsize+=1 ;
TSPAELA = (&A_VINDEX(TIPAELA_ident1,SSPAELA)) ;
(*TSPAELA) = WRPAELA_c;
 /* line 559: */
 /* line 560: */
EIPAELA_idhash+=(A68_INT)(unsigned char)WRPAELA_c;
} 
 /* line 561: */
USPAELA = XHPAELA_tind+=1 ;
WRPAELA_c = (*(&A_VINDEX(SHPAELA_textbuff,USPAELA)));
 /* line 562: */
VSPAELA = (A68_INT)(unsigned char)WRPAELA_c ;
XRPAELA_i = (*(&((&A_R1INDEX(JPPAELA_charset,VSPAELA))->Type)));
 /* line 563: */
WSPAELA = (XRPAELA_i==YJPAELA_letter);
if ( ! WSPAELA )
{WSPAELA = (XRPAELA_i==ZJPAELA_digit);
}
if ( ! WSPAELA )
{WSPAELA = (XRPAELA_i==AKPAELA_visiblespace);
}
if ( WSPAELA )
{ 
goto RSPAELA_l1;
} 
 /* line 564: */
XHPAELA_tind-=1;
 /* line 565: */
ASPAELA_ans = PJPAELA_rcident;
 /* line 566: */
A_CLOSURE( YSPAELA_generator, ZSPAELA_generator, ATPAELA_generator );
A_CALLPROC(YSPAELA_generator,(A68_FALSE, &DTPAELA),(A68_FALSE, &DTPAELA,(YSPAELA_generator).nonlocals));
FTPAELA = A_VTRIM(ETPAELA,(TIPAELA_ident1),A_VTSCRIPT(&(ETPAELA.upb),(TIPAELA_ident1).upb,1,DIPAELA_idsize)) ;
A_VASSIGN2(FTPAELA,DTPAELA,A68_CHAR ) ;
CIPAELA_ident = DTPAELA;
 /* line 567: */
 /* line 568: */
 /* line 570: */
EIPAELA_idhash = ((A68_INT )(A68_BITS )((A68_BITS )EIPAELA_idhash&(A68_BITS )63)+1);
} 
break;
case 4: 
 /* line 571: */
{ 
KTPAELA_maxintplusonepending = A68_FALSE;
 /* line 572: */
LIPAELA_stringsize = 0;
 /* line 573: */
HTPAELA_l1:
WJPAELA_iv = 0;
 /* line 574: */
DSPAELA_lastvalue = (-1);
 /* line 575: */
 /* line 576: */
NTPAELA = MTPAELA ;
if ( (A_VINDEX(NTPAELA,BSPAELA_radix)=='0') )
{ 
 /* line 577: */
UQPAELA_fault(200, VJAAOSI_nullmsg);
} 
 /* line 578: */
for ( ;; )
{ 
 /* line 579: */
OTPAELA = (A68_INT)(unsigned char)WRPAELA_c ;
XRPAELA_i = (*(&((&A_R1INDEX(JPPAELA_charset,OTPAELA))->Value)));
 /* line 580: */
PTPAELA = (XRPAELA_i<BSPAELA_radix);
if ( PTPAELA )
{ /* line 581: */
PTPAELA = (XRPAELA_i>=0);
}
if ( PTPAELA )
{ 
QTPAELA = LIPAELA_stringsize+=1 ;
RTPAELA = (&A_VINDEX(JIPAELA_string,QTPAELA)) ;
(*RTPAELA) = WRPAELA_c;
 /* line 582: */
STPAELA = (WJPAELA_iv==0);
if ( STPAELA )
{STPAELA = (DSPAELA_lastvalue==0);
}
if ( STPAELA )
{ 
ZRPAELA_textneeded = A68_TRUE;
} 
 /* line 583: */
DSPAELA_lastvalue = WJPAELA_iv;
 /* line 584: */
 /* line 585: */
 /* line 586: */
if ( (WJPAELA_iv>HJDAOST_largeint) )
{ 
 /* line 587: */
 /* line 588: */
if ( (WJPAELA_iv>(AJDAOST_maxint/BSPAELA_radix)) )
{ 
TTPAELA = ((-WJPAELA_iv)==(IJDAOST_minint/BSPAELA_radix));
if ( TTPAELA )
{ /* line 589: */
TTPAELA = (XRPAELA_i==0);
}
 /* line 590: */
if ( TTPAELA )
{ 
 /* line 591: */
 /* line 592: */
KTPAELA_maxintplusonepending = A68_TRUE;
} 
else
{ 
UQPAELA_fault(201, VJAAOSI_nullmsg);
 /* line 593: */
 /* line 594: */
KTPAELA_maxintplusonepending = A68_FALSE;
} 
 /* line 595: */
 /* line 596: */
 /* line 597: */
WJPAELA_iv = AJDAOST_maxint;
} 
else
{ 
WJPAELA_iv*=BSPAELA_radix;
 /* line 598: */
 /* line 599: */
 /* line 600: */
if ( (WJPAELA_iv>(AJDAOST_maxint-XRPAELA_i)) )
{ 
 /* line 601: */
 /* line 602: */
if ( ((WJPAELA_iv-1)==(AJDAOST_maxint-XRPAELA_i)) )
{ 
 /* line 603: */
 /* line 604: */
KTPAELA_maxintplusonepending = A68_TRUE;
} 
else
{ 
UQPAELA_fault(201, VJAAOSI_nullmsg);
 /* line 605: */
 /* line 606: */
KTPAELA_maxintplusonepending = A68_FALSE;
} 
 /* line 607: */
 /* line 608: */
 /* line 609: */
WJPAELA_iv = AJDAOST_maxint;
} 
else
{ 
 /* line 610: */
 /* line 611: */
 /* line 612: */
WJPAELA_iv+=XRPAELA_i;
} 
} 
} 
else
{ 
 /* line 613: */
 /* line 614: */
WJPAELA_iv = ((WJPAELA_iv*BSPAELA_radix)+XRPAELA_i);
} 
} 
else
{ 
 /* line 615: */
goto JTPAELA_out;
} 
 /* line 616: */
 /* line 617: */
UTPAELA = XHPAELA_tind+=1 ;
WRPAELA_c = (*(&A_VINDEX(SHPAELA_textbuff,UTPAELA)));
}
 /* line 618: */
JTPAELA_out:
 /* line 619: */
VTPAELA = (XRPAELA_i==27);
if ( VTPAELA )
{VTPAELA = !YRPAELA_radixgiven;
}
if ( VTPAELA )
{ 
WTPAELA = (WJPAELA_iv>16);
if ( ! WTPAELA )
{ /* line 620: */
WTPAELA = (WJPAELA_iv<2);
}
if ( WTPAELA )
{ 
WJPAELA_iv = 16;
 /* line 621: */
 /* line 622: */
UQPAELA_fault(200, VJAAOSI_nullmsg);
} 
 /* line 623: */
XTPAELA = LIPAELA_stringsize+=1 ;
YTPAELA = (&A_VINDEX(JIPAELA_string,XTPAELA)) ;
(*YTPAELA) = WRPAELA_c;
 /* line 624: */
YRPAELA_radixgiven = ZRPAELA_textneeded = A68_TRUE;
 /* line 625: */
BSPAELA_radix = WJPAELA_iv;
 /* line 626: */
for ( ;; )
{ 
 /* line 627: */
ZTPAELA = XHPAELA_tind+=1 ;
WRPAELA_c = (*(&A_VINDEX(SHPAELA_textbuff,ZTPAELA)));
 /* line 628: */
 /* line 629: */
BUPAELA = (A68_INT)(unsigned char)WRPAELA_c ;
AUPAELA = ((*(&((&A_R1INDEX(JPPAELA_charset,BUPAELA))->Value)))==37);
if ( !AUPAELA ) break;
CUPAELA = LIPAELA_stringsize+=1 ;
DUPAELA = (&A_VINDEX(JIPAELA_string,CUPAELA)) ;
(*DUPAELA) = WRPAELA_c;
 /* line 630: */
ZRPAELA_textneeded = A68_TRUE;
 /* line 631: */
if ( (XHPAELA_tind==YHPAELA_textend) )
{ 
DSPAELA_lastvalue = (-1);
 /* line 632: */
goto JTPAELA_out;
} 
}
 /* line 633: */
 /* line 634: */
goto HTPAELA_l1;
} 
else
{ 
XHPAELA_tind-=1;
 /* line 635: */
if ( YRPAELA_radixgiven )
{ 
EUPAELA = GTCAELA_rintdentok;
} 
else
{ 
 /* line 636: */
EUPAELA = HTCAELA_intdentok;
} 
ASPAELA_ans = (EUPAELA+100);
} 
 /* line 637: */
FUPAELA = YRPAELA_radixgiven;
if ( FUPAELA )
{ /* line 638: */
FUPAELA = (DSPAELA_lastvalue==(-1));
}
if ( FUPAELA )
{ 
MQPAELA_syfault(202, VJAAOSI_nullmsg);
 /* line 639: */
MJPAELA_syntaxerror = A68_TRUE;
 /* line 640: */
 /* line 641: */
ASPAELA_ans = (DSCAELA_recovertok+100);
} 
 /* line 642: */
 /* line 643: */
if ( KTPAELA_maxintplusonepending )
{ 
 /* line 644: */
 /* line 645: */
 /* line 646: */
if ( ZRPAELA_textneeded )
{ 
A_CLOSURE( HUPAELA_generator, IUPAELA_generator, JUPAELA_generator );
A_CALLPROC(HUPAELA_generator,(A68_FALSE, &NUPAELA),(A68_FALSE, &NUPAELA,(HUPAELA_generator).nonlocals));
PUPAELA = A_VTRIM(OUPAELA,(JIPAELA_string),A_VTSCRIPT(&(OUPAELA.upb),(JIPAELA_string).upb,1,LIPAELA_stringsize)) ;
A_VASSIGN2(PUPAELA,NUPAELA,A68_CHAR ) ;
MUPAELA_stringtext = NUPAELA;
 /* line 648: */
 /* line 649: */
 /* line 650: */
QUPAELA = MUPAELA_stringtext;
} 
else
{ 
QUPAELA = TTCAOST_nullid;
} 
RUPAELA = (&(VJPAELA_maxintplusone->Text)) ;
(*RUPAELA) = QUPAELA;
 /* line 651: */
 /* line 652: */
 /* line 653: */
SUPAELA = A_UNITE(TUPAELA,mode3,3,VJPAELA_maxintplusone);
} 
else
{ 
if ( ZRPAELA_textneeded )
{ 
A_CLOSURE( VUPAELA_generator, WUPAELA_generator, XUPAELA_generator );
A_CALLPROC(VUPAELA_generator,(A68_FALSE, &BVPAELA),(A68_FALSE, &BVPAELA,(VUPAELA_generator).nonlocals));
DVPAELA = A_VTRIM(CVPAELA,(JIPAELA_string),A_VTSCRIPT(&(CVPAELA.upb),(JIPAELA_string).upb,1,LIPAELA_stringsize)) ;
A_VASSIGN2(DVPAELA,BVPAELA,A68_CHAR ) ;
AVPAELA_stringtext = BVPAELA;
 /* line 655: */
EVPAELA.Int = WJPAELA_iv;
 /* line 656: */
EVPAELA.Text = AVPAELA_stringtext;
 /* line 657: */
FVPAELA = A_HEAP(A68_187 ) ;
(*FVPAELA) = EVPAELA ;
SUPAELA = A_UNITE(GVPAELA,mode2,2,FVPAELA);
} 
else
{ 
 /* line 658: */
SUPAELA = A_UNITE(HVPAELA,mode1,1,WJPAELA_iv);
} 
} 
 /* line 660: */
UJPAELA_ivread = SUPAELA;
} 
break;
case 5: 
{ 
LIPAELA_stringsize = 0;
 /* line 661: */
for ( ;; )
{ 
 /* line 662: */
if ( (XHPAELA_tind==YHPAELA_textend) )
{ 
MQPAELA_syfault(203, VJAAOSI_nullmsg);
 /* line 663: */
MJPAELA_syntaxerror = A68_TRUE;
 /* line 664: */
ASPAELA_ans = (DSCAELA_recovertok+100);
 /* line 665: */
 /* line 666: */
goto LVPAELA_out1;
} 
else
{ 
MVPAELA = XHPAELA_tind+=1 ;
WRPAELA_c = (*(&A_VINDEX(SHPAELA_textbuff,MVPAELA)));
 /* line 667: */
 /* line 668: */
NVPAELA = (A68_INT)(unsigned char)WRPAELA_c ;
if ( ((*(&((&A_R1INDEX(JPPAELA_charset,NVPAELA))->Type)))==ISPAELA_stringquote) )
{ 
OVPAELA = XHPAELA_tind+=1 ;
WRPAELA_c = (*(&A_VINDEX(SHPAELA_textbuff,OVPAELA)));
 /* line 669: */
PVPAELA = (A68_INT)(unsigned char)WRPAELA_c ;
if ( ((*(&((&A_R1INDEX(JPPAELA_charset,PVPAELA))->Type)))!=ISPAELA_stringquote) )
{ 
 /* line 670: */
goto JVPAELA_out;
} 
} 
 /* line 671: */
 /* line 672: */
 /* line 673: */
QVPAELA = LIPAELA_stringsize+=1 ;
RVPAELA = (&A_VINDEX(JIPAELA_string,QVPAELA)) ;
(*RVPAELA) = WRPAELA_c;
} 
}
 /* line 674: */
JVPAELA_out:
ASPAELA_ans = (ITCAELA_stringtok+100);
 /* line 675: */
LVPAELA_out1:
 /* line 676: */
 /* line 678: */
XHPAELA_tind-=1;
} 
break;
case 6: 
{ 
AIPAELA_compsize = BIPAELA_comphash = 0;
 /* line 679: */
for ( ;; )
{ 
 /* line 680: */
SVPAELA = (A68_INT)(unsigned char)WRPAELA_c ;
XRPAELA_i = (*(&((&A_R1INDEX(JPPAELA_charset,SVPAELA))->Type)));
 /* line 681: */
TVPAELA = (XRPAELA_i==XJPAELA_bold);
if ( ! TVPAELA )
{TVPAELA = (XRPAELA_i==ZJPAELA_digit);
}
if ( ! TVPAELA )
{ /* line 682: */
TVPAELA = (XRPAELA_i==AKPAELA_visiblespace);
}
 /* line 683: */
UVPAELA = TVPAELA;
if ( !UVPAELA ) break;
 /* line 684: */
if ( (AIPAELA_compsize!=OSCAOST_maxid) )
{ 
XRPAELA_i = (A68_INT)(unsigned char)WRPAELA_c;
 /* line 686: */
BIPAELA_comphash+=XRPAELA_i;
 /* line 687: */
 /* line 688: */
VVPAELA = AIPAELA_compsize+=1 ;
WVPAELA = (&A_VINDEX(VIPAELA_compsymb1,VVPAELA)) ;
(*WVPAELA) = (A68_CHAR)XRPAELA_i;
} 
 /* line 689: */
 /* line 690: */
XVPAELA = XHPAELA_tind+=1 ;
WRPAELA_c = (*(&A_VINDEX(SHPAELA_textbuff,XVPAELA)));
}
 /* line 691: */
BIPAELA_comphash = ((A68_INT )(A68_BITS )((A68_BITS )BIPAELA_comphash&(A68_BITS )63)+1);
 /* line 692: */
ASPAELA_ans = A_CALLPROC(IPPAELA_lookup,(A_VTRIM(YVPAELA,(VIPAELA_compsymb1),A_VTSCRIPT(&(YVPAELA.upb),(VIPAELA_compsymb1).upb,1,AIPAELA_compsize)), A68_TRUE),(A_VTRIM(YVPAELA,(VIPAELA_compsymb1),A_VTSCRIPT(&(YVPAELA.upb),(VIPAELA_compsymb1).upb,1,AIPAELA_compsize)), A68_TRUE,(IPPAELA_lookup).nonlocals));
 /* line 693: */
A_CLOSURE( AWPAELA_generator, BWPAELA_generator, CWPAELA_generator );
A_CALLPROC(AWPAELA_generator,(A68_FALSE, &FWPAELA),(A68_FALSE, &FWPAELA,(AWPAELA_generator).nonlocals));
HWPAELA = A_VTRIM(GWPAELA,(VIPAELA_compsymb1),A_VTSCRIPT(&(GWPAELA.upb),(VIPAELA_compsymb1).upb,1,AIPAELA_compsize)) ;
A_VASSIGN2(HWPAELA,FWPAELA,A68_CHAR ) ;
ZHPAELA_compsymb = FWPAELA;
 /* line 694: */
 /* line 695: */
 /* line 697: */
XHPAELA_tind-=1;
} 
break;
case 7: 
 /* line 699: */
/*SKIP*/;
break;
case 8: 
 /* line 701: */
/*SKIP*/;
break;
case 9: 
{ 
 /* line 702: */
MQPAELA_syfault(131, VJAAOSI_nullmsg);
 /* line 703: */
MJPAELA_syntaxerror = A68_TRUE;
 /* line 704: */
 /* line 705: */
 /* line 707: */
ASPAELA_ans = (DSCAELA_recovertok+100);
} 
break;
case 10: 
{ 
IWPAELA = XHPAELA_tind+=1 ;
LJPAELA_charval = (*(&A_VINDEX(SHPAELA_textbuff,IWPAELA)));
 /* line 708: */
if ( (LJPAELA_charval==' ') )
{ 
XHPAELA_tind-=1;
} 
 /* line 709: */
 /* line 710: */
JWPAELA = (A68_INT)(unsigned char)LJPAELA_charval ;
if ( ((*(&((&A_R1INDEX(JPPAELA_charset,JWPAELA))->Value)))==100) )
{ 
 /* line 711: */
 /* line 712: */
MQPAELA_syfault(150, VJAAOSI_nullmsg);
} 
else
{ 
 /* line 713: */
if ( ((A68_INT)(unsigned char)LJPAELA_charval==9) )
{ 
 /* line 714: */
MQPAELA_syfault(151, VJAAOSI_nullmsg);
} 
} 
 /* line 715: */
 /* line 716: */
 /* line 717: */
 /* line 719: */
ASPAELA_ans = (TTCAELA_chartok+100);
} 
break;
default: 
{ 
AIPAELA_compsize = BIPAELA_comphash = 0;
 /* line 720: */
MWPAELA = (A68_INT)(unsigned char)WRPAELA_c ;
XRPAELA_i = (*(&((&A_R1INDEX(JPPAELA_charset,MWPAELA))->Type)));
 /* line 721: */
LWPAELA_l1:
 /* line 722: */
if ( (AIPAELA_compsize!=OSCAOST_maxid) )
{ 
NWPAELA = AIPAELA_compsize+=1 ;
OWPAELA = (&A_VINDEX(VIPAELA_compsymb1,NWPAELA)) ;
(*OWPAELA) = WRPAELA_c;
 /* line 723: */
 /* line 724: */
BIPAELA_comphash+=(A68_INT)(unsigned char)WRPAELA_c;
} 
else
{ 
 /* line 725: */
CSPAELA_overflow = A68_TRUE;
} 
 /* line 726: */
PWPAELA = (XRPAELA_i!=MSPAELA_compterm);
if ( PWPAELA )
{ /* line 727: */
PWPAELA = (XRPAELA_i!=JSPAELA_simple);
}
if ( PWPAELA )
{ 
QWPAELA = (A68_INT)(unsigned char)WRPAELA_c ;
DSPAELA_lastvalue = (*(&((&A_R1INDEX(JPPAELA_charset,QWPAELA))->Value)));
 /* line 728: */
RWPAELA = XHPAELA_tind+=1 ;
WRPAELA_c = (*(&A_VINDEX(SHPAELA_textbuff,RWPAELA)));
 /* line 729: */
SWPAELA = (A68_INT)(unsigned char)WRPAELA_c ;
XRPAELA_i = (*(&((&A_R1INDEX(JPPAELA_charset,SWPAELA))->Type)));
 /* line 730: */
TWPAELA = (DSPAELA_lastvalue==ESPAELA_plus);
if ( ! TWPAELA )
{TWPAELA = (DSPAELA_lastvalue==FSPAELA_minus);
}
if ( TWPAELA )
{ /* line 731: */
TWPAELA = (XRPAELA_i==ZJPAELA_digit);
}
if ( TWPAELA )
{ 
 /* line 732: */
if ( (AIPAELA_compsize>1) )
{ 
if ( !CSPAELA_overflow )
{ 
AIPAELA_compsize-=1;
} 
 /* line 733: */
 /* line 734: */
XHPAELA_tind-=2;
} 
else
{ 
 /* line 735: */
 /* line 736: */
XHPAELA_tind-=1;
} 
} 
else
{ 
UWPAELA = (XRPAELA_i==LSPAELA_compound);
if ( ! UWPAELA )
{ /* line 737: */
UWPAELA = (XRPAELA_i==MSPAELA_compterm);
}
if ( UWPAELA )
{ 
 /* line 738: */
goto LWPAELA_l1;
} 
else
{ 
 /* line 739: */
if ( (XRPAELA_i==AKPAELA_visiblespace) )
{ 
 /* line 740: */
if ( !TJPAELA_incom )
{ 
 /* line 741: */
MQPAELA_syfault(8, VJAAOSI_nullmsg);
 /* line 742: */
MJPAELA_syntaxerror = A68_TRUE;
 /* line 743: */
 /* line 744: */
ASPAELA_ans = (DSCAELA_recovertok+100);
} 
else
{ 
 /* line 745: */
 /* line 746: */
ASPAELA_ans = JSCAELA_illegaltok;
} 
} 
else
{ 
 /* line 747: */
 /* line 748: */
XHPAELA_tind-=1;
} 
} 
} 
} 
 /* line 749: */
BIPAELA_comphash = ((A68_INT )(A68_BITS )((A68_BITS )BIPAELA_comphash&(A68_BITS )63)+1);
 /* line 750: */
A_CLOSURE( WWPAELA_generator, XWPAELA_generator, YWPAELA_generator );
A_CALLPROC(WWPAELA_generator,(A68_FALSE, &BXPAELA),(A68_FALSE, &BXPAELA,(WWPAELA_generator).nonlocals));
DXPAELA = A_VTRIM(CXPAELA,(VIPAELA_compsymb1),A_VTSCRIPT(&(CXPAELA.upb),(VIPAELA_compsymb1).upb,1,AIPAELA_compsize)) ;
A_VASSIGN2(DXPAELA,BXPAELA,A68_CHAR ) ;
ZHPAELA_compsymb = BXPAELA;
 /* line 751: */
 /* line 752: */
EXPAELA = (AIPAELA_compsize!=1);
if ( ! EXPAELA )
{ /* line 753: */
FXPAELA = 1 ;
GXPAELA = (A68_INT)(unsigned char)(*(&A_VINDEX(VIPAELA_compsymb1,FXPAELA))) ;
EXPAELA = ((ASPAELA_ans = (*(&((&A_R1INDEX(JPPAELA_charset,GXPAELA))->Value))))==SJPAELA_calllookup);
}
if ( EXPAELA )
{ 
 /* line 754: */
 /* line 755: */
 /* line 756: */
ASPAELA_ans = A_CALLPROC(IPPAELA_lookup,(A_VTRIM(HXPAELA,(VIPAELA_compsymb1),A_VTSCRIPT(&(HXPAELA.upb),(VIPAELA_compsymb1).upb,1,AIPAELA_compsize)), A68_FALSE),(A_VTRIM(HXPAELA,(VIPAELA_compsymb1),A_VTSCRIPT(&(HXPAELA.upb),(VIPAELA_compsymb1).upb,1,AIPAELA_compsize)), A68_FALSE,(IPPAELA_lookup).nonlocals));
} 
} 
break;
} 
 /* line 758: */
 /* line 759: */
IXPAELA = ASPAELA_ans;
} 
A_PROC_EXIT(primread);
return( IXPAELA );
} 
#undef NL

A_STATIC A68_BOOL  KXPAELA_readcom(A68_INT  Commenttype)
{ 
A68_INT  PXPAELA_i;
A68_INT  QXPAELA_j;
A68_BOOL  RXPAELA_ans;
A68_INT  SXPAELA;  /* YIELD */
A68_CHAR * TXPAELA;  /* YIELD */
A68_INT  UXPAELA;  /* YIELD */
A68_INT  VXPAELA;  /* YIELD */
A68_BOOL  WXPAELA;  /* optbool result */
A68_BOOL  XXPAELA;  /* clause result */
A68_BOOL  YXPAELA;  /* optbool result */
A68_BOOL  ZXPAELA;  /* clause result */
A_PROC_ENTRY(readcom);
 /* line 762: */
 /* line 763: */
{ 
 /* line 764: */
RXPAELA_ans = A68_TRUE;
 /* line 765: */
 /* line 766: */
if ( (Commenttype>RJPAELA_rcmatchcom) )
{ 
MQPAELA_syfault(205, VJAAOSI_nullmsg);
 /* line 767: */
MJPAELA_syntaxerror = A68_TRUE;
 /* line 768: */
RXPAELA_ans = A68_FALSE;
 /* line 769: */
 /* line 770: */
goto MXPAELA_out;
} 
 /* line 771: */
OXPAELA_l:
for ( ;; )
{ 
 /* line 772: */
 /* line 773: */
if ( (XHPAELA_tind==YHPAELA_textend) )
{ 
 /* line 774: */
if ( (Commenttype<RJPAELA_rcmatchcom) )
{ 
 /* line 775: */
MQPAELA_syfault(206, VJAAOSI_nullmsg);
 /* line 776: */
MJPAELA_syntaxerror = A68_TRUE;
 /* line 777: */
XHPAELA_tind-=1;
 /* line 778: */
RXPAELA_ans = A68_FALSE;
 /* line 779: */
 /* line 780: */
goto MXPAELA_out;
} 
 /* line 781: */
 /* line 782: */
YHPAELA_textend-=1 ;
if ( !A_CALLPROC(GPPAELA_input,((&SHPAELA_textbuff), (&YHPAELA_textend)),((&SHPAELA_textbuff), (&YHPAELA_textend),(GPPAELA_input).nonlocals)) )
{ 
JJPAELA_moreinput = A68_FALSE;
 /* line 783: */
 /* line 784: */
 /* line 785: */
XQPAELA_abort(207, VJAAOSI_nullmsg);
} 
 /* line 786: */
XHPAELA_tind = 0;
 /* line 787: */
 /* line 788: */
SXPAELA = YHPAELA_textend+=1 ;
TXPAELA = (&A_VINDEX(SHPAELA_textbuff,SXPAELA)) ;
(*TXPAELA) = ' ';
} 
 /* line 789: */
UXPAELA = XHPAELA_tind+=1 ;
VXPAELA = (A68_INT)(unsigned char)(*(&A_VINDEX(SHPAELA_textbuff,UXPAELA))) ;
PXPAELA_i = (*(&((&A_R1INDEX(JPPAELA_charset,VXPAELA))->Type)));
 /* line 790: */
WXPAELA = (PXPAELA_i<XJPAELA_bold);
if ( ! WXPAELA )
{WXPAELA = (PXPAELA_i==AKPAELA_visiblespace);
}
if ( ! WXPAELA )
{ /* line 791: */
WXPAELA = (PXPAELA_i==BKPAELA_prime);
}
XXPAELA = WXPAELA;
if ( !XXPAELA ) break;
/*SKIP*/;
}
 /* line 792: */
PXPAELA_i = (-1);
 /* line 793: */
XHPAELA_tind-=1;
 /* line 794: */
QXPAELA_j = TRPAELA_primread();
 /* line 795: */
YXPAELA = (QXPAELA_j<RJPAELA_rcmatchcom);
if ( ! YXPAELA )
{ /* line 796: */
YXPAELA = (QXPAELA_j>=100);
}
if ( YXPAELA )
{ 
 /* line 797: */
if ( (Commenttype!=QXPAELA_j) )
{ 
if ( (PXPAELA_i>=0) )
{ 
XHPAELA_tind = PXPAELA_i;
} 
 /* line 798: */
 /* line 799: */
 /* line 800: */
goto OXPAELA_l;
} 
} 
else
{ 
 /* line 801: */
if ( (QXPAELA_j!=(Commenttype+1)) )
{ 
 /* line 802: */
if ( (QXPAELA_j & 1) )
{ 
if ( KXPAELA_readcom(QXPAELA_j) )
{ 
goto OXPAELA_l;
} 
else
{ 
MJPAELA_syntaxerror = A68_TRUE;
 /* line 803: */
RXPAELA_ans = A68_FALSE;
} 
} 
else
{ 
 /* line 804: */
MQPAELA_syfault(208, VJAAOSI_nullmsg);
 /* line 805: */
MJPAELA_syntaxerror = A68_TRUE;
 /* line 806: */
 /* line 807: */
 /* line 808: */
RXPAELA_ans = A68_FALSE;
} 
} 
} 
 /* line 809: */
MXPAELA_out:
 /* line 810: */
ZXPAELA = RXPAELA_ans;
} 
A_PROC_EXIT(readcom);
return( ZXPAELA );
} 
#undef NL

A68_VOID  AYPAELA_read(void)
{ 
A68_INT  DYPAELA_r;
A68_INT  EYPAELA;  /* clause result */
A68_BOOL  FYPAELA;  /* clause result */
A68_INT  GYPAELA;  /* YIELD */
A68_CHAR * HYPAELA;  /* YIELD */
A68_INT  IYPAELA;  /* clause result */
A68_BOOL  JYPAELA;  /* optbool result */
A68_BOOL  KYPAELA;  /* optbool result */
A_PROC_ENTRY(read);
{ 
 /* line 817: */
if ( (OIPAELA_noflts>0) )
{ 
OIPAELA_noflts-=1;
} 
 /* line 818: */
CYPAELA_l:
if ( JJPAELA_moreinput )
{ 
EYPAELA = TRPAELA_primread();
} 
else
{ 
EYPAELA = OJPAELA_rcnewline;
} 
DYPAELA_r = EYPAELA;
 /* line 819: */
 /* line 821: */
switch ( ((DYPAELA_r-OJPAELA_rcnewline)+1) )
{ 
case 1: 
XHPAELA_tind = 0;
 /* line 822: */
 /* line 823: */
YHPAELA_textend-=1 ;
FYPAELA = A_CALLPROC(GPPAELA_input,((&SHPAELA_textbuff), (&YHPAELA_textend)),((&SHPAELA_textbuff), (&YHPAELA_textend),(GPPAELA_input).nonlocals));
if ( FYPAELA )
{ 
GYPAELA = YHPAELA_textend+=1 ;
HYPAELA = (&A_VINDEX(SHPAELA_textbuff,GYPAELA)) ;
(*HYPAELA) = ' ';
 /* line 824: */
 /* line 825: */
goto CYPAELA_l ;
IYPAELA = (*(A68_INT *)A68_NIL);
} 
else
{ 
JJPAELA_moreinput = A68_FALSE;
 /* line 826: */
 /* line 827: */
 /* line 829: */
IYPAELA = PSCAELA_eoftok;
} 
break;
case 2: 
 /* line 831: */
IYPAELA = ZRCAELA_idtok;
break;
case 3: 
{ 
DKPAELA_sfnno = 503;
 /* line 832: */
 /* line 833: */
IYPAELA = MTCAELA_equalstok;
} 
break;
default: 
 /* line 834: */
if ( (DYPAELA_r>=700) )
{ 
DKPAELA_sfnno = (DYPAELA_r-300);
 /* line 835: */
JYPAELA = (DYPAELA_r==901);
if ( ! JYPAELA )
{ /* line 836: */
JYPAELA = (DYPAELA_r==902);
}
 /* line 837: */
if ( JYPAELA )
{ 
IYPAELA = RTCAELA_pormtok;
} 
else
{ 
KYPAELA = (DYPAELA_r==801);
if ( ! KYPAELA )
{ /* line 838: */
KYPAELA = (DYPAELA_r==802);
}
 /* line 839: */
if ( KYPAELA )
{ 
 /* line 840: */
IYPAELA = STCAELA_tordtok;
} 
else
{ 
 /* line 841: */
IYPAELA = LTCAELA_op2tok;
} 
} 
} 
else
{ 
 /* line 842: */
if ( (DYPAELA_r>=400) )
{ 
DKPAELA_sfnno = DYPAELA_r;
 /* line 843: */
 /* line 844: */
IYPAELA = KTCAELA_op1tok;
} 
else
{ 
 /* line 845: */
if ( (DYPAELA_r>=100) )
{ 
 /* line 846: */
 /* line 847: */
IYPAELA = (DYPAELA_r-100);
} 
else
{ 
TJPAELA_incom = A68_TRUE;
 /* line 848: */
 /* line 849: */
if ( KXPAELA_readcom(DYPAELA_r) )
{ 
TJPAELA_incom = A68_FALSE;
 /* line 850: */
 /* line 851: */
goto CYPAELA_l ;
IYPAELA = (*(A68_INT *)A68_NIL);
} 
else
{ 
TJPAELA_incom = A68_FALSE;
 /* line 852: */
 /* line 853: */
 /* line 854: */
 /* line 855: */
 /* line 856: */
IYPAELA = DSCAELA_recovertok;
} 
} 
} 
} 
break;
} 
CKPAELA_t1 = IYPAELA;
} 
A_PROC_EXIT(read);
return;
} 
#undef NL
 /* line 860: */
 /* line 861: */

A68_VOID  PYPAELA_inkept(A68_160  Findid, A68_BOOL  Export, A68_161  Newextid, A68_162  Newextfn)
{ 
A68_164  QYPAELA;  /* procedure value */
A_PROC_ENTRY(inkept);
 /* line 862: */
 /* line 863: */
QYPAELA.fn.fn_global = UQPAELA_fault;
QYPAELA.nonlocals = A68_NIL;
TGKAELA_inkept_ext(Findid, Export, Newextid, Newextfn, CPPAELA_inkeptint, DPPAELA_inkeptid, JPPAELA_charset, QYPAELA);
A_PROC_EXIT(inkept);
return;
} 
#undef NL

A68_VOID  SYPAELA_findkid(A68_VC  Id, A68_198  *ReturnedValue)
{ 
A68_244 * VYPAELA_i;
A68_198  WYPAELA;  /* collateral clause result */
A68_199  XYPAELA;  /* OPERATORS - mode -> union mode */
A68_198  YYPAELA_ans;
A68_198  ZYPAELA;  /* clause result */
A_PROC_ENTRY(findkid);
 /* line 867: */
{ 
VYPAELA_i = ZKPAELA_kids;
 /* line 868: */
WYPAELA.Scope = 0;
WYPAELA.Vnno = 0;
WYPAELA.Text = A68_FALSE;
WYPAELA.Outofdate = A68_FALSE;
WYPAELA.Inscope = A68_TRUE;
WYPAELA.Export = A68_FALSE;
WYPAELA.Id = Id;
WYPAELA.U = A_UNITE(XYPAELA,mode10,10,CRCAELA_notdec);
YYPAELA_ans = WYPAELA;
 /* line 869: */
for ( ;; )
{ 
 /* line 870: */
if ( !((VYPAELA_i!=CQCAELA_nilids)) ) break;
if ( A_VC_EQ((*(&((*(&(VYPAELA_i->Idinfo)))->Id))),Id) )
{ 
YYPAELA_ans = (*(*(&(VYPAELA_i->Idinfo))));
goto UYPAELA_found;
} 
 /* line 871: */
 /* line 872: */
VYPAELA_i = (*(&(VYPAELA_i->Rest)));
}
 /* line 873: */
UYPAELA_found:
 /* line 874: */
ZYPAELA = YYPAELA_ans;
} 
A_PROC_EXIT(findkid);
*ReturnedValue = (ZYPAELA);
return;
} 
#undef NL

A68_244 * BZPAELA_newkid(A68_198  I)
{ 
A68_244  CZPAELA;  /* collateral clause result */
A68_198 * DZPAELA;  /* YIELD */
A68_170  EZPAELA;  /* OPERATORS - mode -> union mode */
A68_244 * FZPAELA;  /* clause result */
A68_244 * GZPAELA;  /* YIELD */
A_PROC_ENTRY(newkid);
 /* line 877: */
DZPAELA = A_HEAP(A68_198 ) ;
(*DZPAELA) = I ;
CZPAELA.Idinfo = DZPAELA;
CZPAELA.Declaration = A68_TRUE;
CZPAELA.Attr = A_UNITE(EZPAELA,mode6,6,MRCAELA_attrnull);
CZPAELA.Rest = ZKPAELA_kids;
GZPAELA = A_HEAP(A68_244 ) ;
(*GZPAELA) = CZPAELA ;
FZPAELA = ZKPAELA_kids = GZPAELA;
A_PROC_EXIT(newkid);
return( FZPAELA );
} 
#undef NL

A68_166 * IZPAELA_newkfn(A68_167 * F)
{ 
A68_166  JZPAELA;  /* collateral clause result */
A68_166 * KZPAELA;  /* clause result */
A68_166 * LZPAELA;  /* YIELD */
A_PROC_ENTRY(newkfn);
 /* line 879: */
JZPAELA.Fndec = F;
JZPAELA.Declaration = A68_TRUE;
JZPAELA.Rest = ALPAELA_kfns;
LZPAELA = A_HEAP(A68_166 ) ;
(*LZPAELA) = JZPAELA ;
KZPAELA = ALPAELA_kfns = LZPAELA;
A_PROC_EXIT(newkfn);
return( KZPAELA );
} 
#undef NL

A68_VOID  OZPAELA_syfaultp(A68_INT  No, A68_262  Params)
{ 
A68_164  PZPAELA;  /* procedure value */
A_PROC_ENTRY(syfaultp);
 /* line 882: */
PZPAELA.fn.fn_global = UQPAELA_fault;
PZPAELA.nonlocals = A68_NIL;
KMLAELA_syfaultp_ext(No, Params, (&MJPAELA_syntaxerror), PZPAELA);
A_PROC_EXIT(syfaultp);
return;
} 
#undef NL

A68_VOID  SZPAELA_faultp(A68_INT  No, A68_262  Params)
{ 
A_PROC_ENTRY(faultp);
 /* line 885: */
{ 
if ( !MJPAELA_syntaxerror )
{ 
OZPAELA_syfaultp(No, Params);
} 
} 
A_PROC_EXIT(faultp);
return;
} 
#undef NL

A68_VOID  VZPAELA_namefaultp(A68_INT  No, A68_262  Params)
{ 
A68_263  WZPAELA;  /* OPERATORS - mode -> union mode */
A68_262  XZPAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(namefaultp);
 /* line 888: */
{ 
 /* line 889: */
if ( !MJPAELA_syntaxerror )
{ 
OZPAELA_syfaultp(No, Params);
 /* line 890: */
 /* line 891: */
if ( (YIPAELA_namestack!=XIPAELA_nonames) )
{ 
for ( ;; )
{ 
 /* line 892: */
if ( !((YIPAELA_namestack!=XIPAELA_nonames)) ) break;
LKPAELA_fp3 = (*(&(YIPAELA_namestack->Id)));
 /* line 893: */
OZPAELA_syfaultp(132, A_HVEC(XZPAELA,A_UNITE(WZPAELA,mode13,13,LKPAELA_fp3),A68_263 ));
 /* line 894: */
 /* line 895: */
YIPAELA_namestack = (*(&(YIPAELA_namestack->Rest)));
}
 /* line 896: */
 /* line 897: */
 /* line 898: */
} 
} 
} 
A_PROC_EXIT(namefaultp);
return;
} 
#undef NL

A_STATIC A68_VOID  YZPAELA_t1toid(A68_VC  *ReturnedValue)
{ 
A68_VC  EAQAELA;  /* clause result */
A68_VC  FAQAELA;  /* avoid structure result */
A68_VC  HAQAELA;  /* OPERATORS - assign op */
A68_VC  NAQAELA;  /* avoid structure result */
A68_VC  PAQAELA;  /* OPERATORS - assign op */
A68_VC  VAQAELA;  /* avoid structure result */
A68_VC  XAQAELA;  /* OPERATORS - assign op */
A68_VC  DBQAELA;  /* avoid structure result */
A68_VC  FBQAELA;  /* OPERATORS - assign op */
A_PROC_ENTRY(t1toid);
{ 
 /* line 902: */
if ( (CKPAELA_t1==PSCAELA_eoftok) )
{ 
 /* line 903: */
AAQAELA_generator( A68_FALSE, &FAQAELA );
HAQAELA = GAQAELA ;
A_VASSIGN2(HAQAELA,FAQAELA,A68_CHAR ) ;
EAQAELA = FAQAELA;
} 
else
{ 
 /* line 904: */
if ( (CKPAELA_t1==TTCAELA_chartok) )
{ 
 /* line 905: */
JAQAELA_generator( A68_FALSE, &NAQAELA );
PAQAELA = OAQAELA ;
A_VASSIGN2(PAQAELA,NAQAELA,A68_CHAR ) ;
EAQAELA = NAQAELA;
} 
else
{ 
switch ( CKPAELA_t1 )
{ 
case 1: 
EAQAELA = CIPAELA_ident;
break;
case 2: 
 /* line 906: */
RAQAELA_generator( A68_FALSE, &VAQAELA );
XAQAELA = WAQAELA ;
A_VASSIGN2(XAQAELA,VAQAELA,A68_CHAR ) ;
EAQAELA = VAQAELA;
break;
case 3: 
ZAQAELA_generator( A68_FALSE, &DBQAELA );
FBQAELA = EBQAELA ;
A_VASSIGN2(FBQAELA,DBQAELA,A68_CHAR ) ;
EAQAELA = DBQAELA;
break;
default: 
 /* line 907: */
 /* line 908: */
EAQAELA = ZHPAELA_compsymb;
break;
} 
} 
} 
} 
A_PROC_EXIT(t1toid);
*ReturnedValue = (EAQAELA);
return;
} 
#undef NL

A68_VOID  HBQAELA_syntaxerrmess(A68_337  Error)
{ 
A68_INT  LBQAELA_n;
A68_INT  MBQAELA_i;
A68_INT  NBQAELA;  /* to part of loop */
A68_VC  OBQAELA;  /* avoid structure result */
A68_263  PBQAELA;  /* OPERATORS - mode -> union mode */
A68_262  QBQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  RBQAELA;  /* avoid structure result */
A68_367  SBQAELA;  /* collateral clause result */
A68_263  TBQAELA;  /* OPERATORS - mode -> union mode */
A68_263  UBQAELA;  /* OPERATORS - mode -> union mode */
A68_262  VBQAELA;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(syntaxerrmess);
 /* line 912: */
{ 
 /* line 913: */
NBQAELA = MFDAELA_toks.upb;
for ( MBQAELA_i = 1;
MBQAELA_i <= NBQAELA;
MBQAELA_i += 1 )
{ 
 /* line 914: */
if ( YCAAELA_checkinsert(A_VINDEX(MFDAELA_toks,MBQAELA_i).Tokno, Error) )
{ 
LBQAELA_n = MBQAELA_i;
 /* line 915: */
goto KBQAELA_f;
} 
}
 /* line 916: */
YZPAELA_t1toid(  &OBQAELA );
LKPAELA_fp3 = OBQAELA;
 /* line 917: */
 /* line 918: */
OZPAELA_syfaultp(1, A_HVEC(QBQAELA,A_UNITE(PBQAELA,mode13,13,LKPAELA_fp3),A68_263 ));
goto IBQAELA;
KBQAELA_f:
YZPAELA_t1toid(  &RBQAELA );
LKPAELA_fp3 = RBQAELA;
MKPAELA_fp4 = A_VINDEX(MFDAELA_toks,LBQAELA_n).Id;
 /* line 919: */
SBQAELA.data[0] = A_UNITE(TBQAELA,mode13,13,LKPAELA_fp3);
SBQAELA.data[1] = A_UNITE(UBQAELA,mode13,13,MKPAELA_fp4);
 /* line 920: */
OZPAELA_syfaultp(2, A_HISVEC(VBQAELA,SBQAELA,2,A68_263 ));
IBQAELA: ;
} 
A_PROC_EXIT(syntaxerrmess);
return;
} 
#undef NL

A68_VOID  XBQAELA_fltmessage(A68_198  Info)
{ 
A68_199  YBQAELA;  /* united object - for case conformity */
A68_200  ZBQAELA_iid;
A68_185  ACQAELA;  /* united object - for case conformity */
A68_189 * BCQAELA_iv;
A68_263  CCQAELA;  /* OPERATORS - mode -> union mode */
A68_262  DCQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_263  ECQAELA;  /* OPERATORS - mode -> union mode */
A68_262  FCQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_201  GCQAELA_tid;
A68_172  HCQAELA;  /* united object - for case conformity */
A68_176 * ICQAELA_tv;
A68_263  JCQAELA;  /* OPERATORS - mode -> union mode */
A68_262  KCQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_263  LCQAELA;  /* OPERATORS - mode -> union mode */
A68_262  MCQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_202  NCQAELA_cid;
A68_263  OCQAELA;  /* OPERATORS - mode -> union mode */
A68_262  PCQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_203  QCQAELA_pid;
A68_263  RCQAELA;  /* OPERATORS - mode -> union mode */
A68_262  SCQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_204 * TCQAELA_did;
A68_263  UCQAELA;  /* OPERATORS - mode -> union mode */
A68_262  VCQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_263  WCQAELA;  /* OPERATORS - mode -> union mode */
A68_262  XCQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_263  YCQAELA;  /* OPERATORS - mode -> union mode */
A68_262  ZCQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_205  ADQAELA_ad;
A68_170  BDQAELA;  /* united object - for case conformity */
A68_258 * CDQAELA_av;
A68_263  DDQAELA;  /* OPERATORS - mode -> union mode */
A68_262  EDQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_263  FDQAELA;  /* OPERATORS - mode -> union mode */
A68_262  GDQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_206  HDQAELA_vid;
A68_263  IDQAELA;  /* OPERATORS - mode -> union mode */
A68_262  JDQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(fltmessage);
 /* line 923: */
{ 
LKPAELA_fp3 = Info.Id;
 /* line 924: */
 /* line 925: */
YBQAELA = Info.U ;
switch ( YBQAELA.mode )
{ 
case 1: /* STRUCT(MODE185)  */
ZBQAELA_iid = (YBQAELA.data.mode1);
{ 
 /* line 926: */
ACQAELA = ZBQAELA_iid.I ;
switch ( ACQAELA.mode )
{ 
case 6: /* REF STRUCT(REF MODE245)  */
BCQAELA_iv = (ACQAELA.data.mode6);
 /* line 927: */
 /* line 928: */
SZPAELA_faultp(119, A_HVEC(DCQAELA,A_UNITE(CCQAELA,mode13,13,LKPAELA_fp3),A68_263 ));
break;
default: 
 /* line 929: */
 /* line 930: */
SZPAELA_faultp(120, A_HVEC(FCQAELA,A_UNITE(ECQAELA,mode13,13,LKPAELA_fp3),A68_263 ));
break;
} 
} 
break;
case 2: /* STRUCT(MODE172)  */
GCQAELA_tid = (YBQAELA.data.mode2);
{ 
 /* line 931: */
HCQAELA = GCQAELA_tid.T ;
switch ( HCQAELA.mode )
{ 
case 4: /* REF STRUCT(REF MODE245,MODE172)  */
ICQAELA_tv = (HCQAELA.data.mode4);
 /* line 932: */
 /* line 933: */
SZPAELA_faultp(119, A_HVEC(KCQAELA,A_UNITE(JCQAELA,mode13,13,LKPAELA_fp3),A68_263 ));
break;
default: 
 /* line 934: */
 /* line 935: */
SZPAELA_faultp(121, A_HVEC(MCQAELA,A_UNITE(LCQAELA,mode13,13,LKPAELA_fp3),A68_263 ));
break;
} 
} 
break;
case 3: /* STRUCT(MODE222)  */
NCQAELA_cid = (YBQAELA.data.mode3);
 /* line 936: */
SZPAELA_faultp(155, A_HVEC(PCQAELA,A_UNITE(OCQAELA,mode13,13,LKPAELA_fp3),A68_263 ));
break;
case 4: /* STRUCT(MODE172,INT)  */
QCQAELA_pid = (YBQAELA.data.mode4);
 /* line 937: */
SZPAELA_faultp(130, A_HVEC(SCQAELA,A_UNITE(RCQAELA,mode13,13,LKPAELA_fp3),A68_263 ));
break;
case 5: /* REF STRUCT(INT,INT,REF MODE209,MODE172,MODE210,MODE210,MODE211,MODE211)  */
TCQAELA_did = (YBQAELA.data.mode5);
{ 
 /* line 938: */
if ( ((*(&(TCQAELA_did->Origin)))==ISCAELA_lettok) )
{ 
 /* line 939: */
SZPAELA_faultp(122, A_HVEC(VCQAELA,A_UNITE(UCQAELA,mode13,13,LKPAELA_fp3),A68_263 ));
} 
else
{ 
 /* line 940: */
if ( ((*(&(TCQAELA_did->Origin)))==KSCAELA_maketok) )
{ 
 /* line 941: */
SZPAELA_faultp(124, A_HVEC(XCQAELA,A_UNITE(WCQAELA,mode13,13,LKPAELA_fp3),A68_263 ));
} 
else
{ 
 /* line 942: */
 /* line 943: */
SZPAELA_faultp(123, A_HVEC(ZCQAELA,A_UNITE(YCQAELA,mode13,13,LKPAELA_fp3),A68_263 ));
} 
} 
} 
break;
case 6: /* STRUCT(MODE170)  */
ADQAELA_ad = (YBQAELA.data.mode6);
{ 
 /* line 944: */
BDQAELA = ADQAELA_ad.A ;
switch ( BDQAELA.mode )
{ 
case 5: /* REF STRUCT(REF MODE245)  */
CDQAELA_av = (BDQAELA.data.mode5);
 /* line 945: */
 /* line 946: */
SZPAELA_faultp(119, A_HVEC(EDQAELA,A_UNITE(DDQAELA,mode13,13,LKPAELA_fp3),A68_263 ));
break;
default: 
 /* line 947: */
 /* line 948: */
SZPAELA_faultp(135, A_HVEC(GDQAELA,A_UNITE(FDQAELA,mode13,13,LKPAELA_fp3),A68_263 ));
break;
} 
} 
break;
case 7: /* STRUCT(MODE172,INT)  */
HDQAELA_vid = (YBQAELA.data.mode7);
 /* line 949: */
 /* line 950: */
SZPAELA_faultp(136, A_HVEC(JDQAELA,A_UNITE(IDQAELA,mode13,13,LKPAELA_fp3),A68_263 ));
break;
default: 
 /* line 951: */
/*SKIP*/;
break;
} 
} 
A_PROC_EXIT(fltmessage);
return;
} 
#undef NL

A_STATIC A68_VOID  LDQAELA_setextint(A68_185  I)
{ 
A68_185  MDQAELA;  /* united object - for case conformity */
A68_190 * NDQAELA_idop;
A68_191 * ODQAELA_imop;
A68_188 * PDQAELA_ic;
A68_193 * QDQAELA_iv;
A68_192 * RDQAELA_icn;
A68_195 * SDQAELA_idef;
A68_INT * TDQAELA;  /* YIELD */
A68_INT * UDQAELA;  /* YIELD */
A68_196 * VDQAELA_ib;
A_PROC_ENTRY(setextint);
 /* line 956: */
{ 
 /* line 957: */
MDQAELA = I ;
switch ( MDQAELA.mode )
{ 
case 7: /* REF STRUCT(INT,MODE185,MODE185)  */
NDQAELA_idop = (MDQAELA.data.mode7);
{ 
LDQAELA_setextint((*(&(NDQAELA_idop->L))));
 /* line 958: */
LDQAELA_setextint((*(&(NDQAELA_idop->R))));
} 
break;
case 8: /* REF STRUCT(INT,MODE185)  */
ODQAELA_imop = (MDQAELA.data.mode8);
 /* line 959: */
LDQAELA_setextint((*(&(ODQAELA_imop->R))));
break;
case 5: /* REF STRUCT(MODE185,MODE185,INT)  */
PDQAELA_ic = (MDQAELA.data.mode5);
{ 
LDQAELA_setextint((*(&(PDQAELA_ic->Integer))));
 /* line 960: */
 /* line 961: */
 /* line 962: */
LDQAELA_setextint((*(&(PDQAELA_ic->Standard))));
} 
break;
case 10: /* REF STRUCT(INT,MODE185,MODE185,MODE185)  */
QDQAELA_iv = (MDQAELA.data.mode10);
{ 
LDQAELA_setextint((*(&(QDQAELA_iv->Lwb))));
 /* line 963: */
LDQAELA_setextint((*(&(QDQAELA_iv->Upb))));
} 
break;
case 9: /* REF STRUCT(MODE185,MODE185,MODE185)  */
RDQAELA_icn = (MDQAELA.data.mode9);
{ 
LDQAELA_setextint((*(&(RDQAELA_icn->Cond))));
 /* line 964: */
LDQAELA_setextint((*(&(RDQAELA_icn->T))));
 /* line 965: */
 /* line 966: */
LDQAELA_setextint((*(&(RDQAELA_icn->F))));
} 
break;
case 12: /* REF STRUCT(REF MODE198,INT,MODE185)  */
SDQAELA_idef = (MDQAELA.data.mode12);
{ 
 /* line 967: */
if ( ((*(&((*(&(SDQAELA_idef->Idinfo)))->Scope)))==(-1)) )
{ 
TDQAELA = (&((*(&(SDQAELA_idef->Idinfo)))->Scope)) ;
(*TDQAELA) = 0;
 /* line 968: */
 /* line 969: */
UDQAELA = (&(SDQAELA_idef->Intno)) ;
(*UDQAELA) = GKPAELA_cintno+=1;
} 
 /* line 970: */
 /* line 971: */
 /* line 972: */
LDQAELA_setextint((*(&(SDQAELA_idef->I))));
} 
break;
case 13: /* REF STRUCT(MODE185)  */
VDQAELA_ib = (MDQAELA.data.mode13);
 /* line 973: */
 /* line 974: */
LDQAELA_setextint((*(&(VDQAELA_ib->Ibracket))));
break;
default: 
 /* line 975: */
/*SKIP*/;
break;
} 
} 
A_PROC_EXIT(setextint);
return;
} 
#undef NL

A_STATIC A68_VOID  XDQAELA_setextattr(A68_170  At)
{ 
A68_170  YDQAELA;  /* united object - for case conformity */
A68_254 * ZDQAELA_ad;
A68_INT * AEQAELA;  /* YIELD */
A68_INT * BEQAELA;  /* YIELD */
A68_256 * CEQAELA_as;
A68_256 * DEQAELA_ats;
A68_257 * EEQAELA_ab;
A_PROC_ENTRY(setextattr);
 /* line 980: */
 /* line 981: */
YDQAELA = At ;
switch ( YDQAELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE198,INT,MODE170)  */
ZDQAELA_ad = (YDQAELA.data.mode1);
 /* line 982: */
 /* line 983: */
if ( ((*(&((*(&(ZDQAELA_ad->Idinfo)))->Scope)))==(-1)) )
{ 
AEQAELA = (&((*(&(ZDQAELA_ad->Idinfo)))->Scope)) ;
(*AEQAELA) = 0;
 /* line 984: */
BEQAELA = (&(ZDQAELA_ad->Attrno)) ;
(*BEQAELA) = IKPAELA_cattrno+=1;
 /* line 985: */
 /* line 986: */
 /* line 987: */
XDQAELA_setextattr((*(&(ZDQAELA_ad->Attr))));
} 
break;
case 3: /* REF STRUCT(MODE170,REF MODE256)  */
CEQAELA_as = (YDQAELA.data.mode3);
 /* line 988: */
{ 
DEQAELA_ats = CEQAELA_as;
 /* line 989: */
for ( ;; )
{ 
 /* line 990: */
if ( !((DEQAELA_ats!=MQCAELA_nilattrstr)) ) break;
XDQAELA_setextattr((*(&(DEQAELA_ats->Elem))));
DEQAELA_ats = (*(&(DEQAELA_ats->Rest)));
}
 /* line 991: */
 /* line 992: */
} 
break;
case 4: /* REF STRUCT(MODE170)  */
EEQAELA_ab = (YDQAELA.data.mode4);
 /* line 993: */
 /* line 994: */
XDQAELA_setextattr((*(&(EEQAELA_ab->Abracket))));
break;
default: 
/*SKIP*/;
break;
} 
A_PROC_EXIT(setextattr);
return;
} 
#undef NL

A_STATIC A68_VOID  GEQAELA_setexttype(A68_172  T)
{ 
A68_249 * HEQAELA_alts;
A68_175 * IEQAELA_sts;
A68_172  JEQAELA;  /* united object - for case conformity */
A68_173 * KEQAELA_p;
A68_INT * LEQAELA;  /* YIELD */
A68_INT * MEQAELA;  /* YIELD */
A68_247  NEQAELA;  /* united object - for case conformity */
A68_248  OEQAELA_pr;
A68_INT * PEQAELA;  /* YIELD */
A68_249 * QEQAELA_rp;
A68_INT * REQAELA;  /* YIELD */
A68_250  SEQAELA_ps;
A68_INT * TEQAELA;  /* YIELD */
A68_174 * UEQAELA_n;
A68_INT * VEQAELA;  /* YIELD */
A68_INT * WEQAELA;  /* YIELD */
A68_175 * XEQAELA_st;
A68_178 * YEQAELA_f;
A68_179 * ZEQAELA_r;
A68_180 * AFQAELA_tb;
A68_181 * BFQAELA_ts;
A_PROC_ENTRY(setexttype);
 /* line 997: */
{ 
 /* line 998: */
 /* line 999: */
JEQAELA = T ;
switch ( JEQAELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE198,INT,MODE247)  */
KEQAELA_p = (JEQAELA.data.mode1);
 /* line 1000: */
 /* line 1001: */
if ( ((*(&((*(&(KEQAELA_p->Idinfo)))->Scope)))==(-1)) )
{ 
LEQAELA = (&((*(&(KEQAELA_p->Idinfo)))->Scope)) ;
(*LEQAELA) = 0;
MEQAELA = (&(KEQAELA_p->Typeno)) ;
(*MEQAELA) = EKPAELA_ctypeno+=1;
 /* line 1002: */
 /* line 1003: */
NEQAELA = (*(&(KEQAELA_p->U))) ;
switch ( NEQAELA.mode )
{ 
case 1: /* STRUCT(REF MODE198,MODE185,MODE185)  */
OEQAELA_pr = (NEQAELA.data.mode1);
 /* line 1004: */
{ 
if ( ((*(&(OEQAELA_pr.Idinfo->Scope)))==(-1)) )
{ 
PEQAELA = (&(OEQAELA_pr.Idinfo->Scope)) ;
(*PEQAELA) = 0;
} 
 /* line 1005: */
LDQAELA_setextint(OEQAELA_pr.Lwb);
 /* line 1006: */
LDQAELA_setextint(OEQAELA_pr.Upb);
} 
break;
case 2: /* REF STRUCT(REF MODE198,REF MODE172,REF MODE249)  */
QEQAELA_rp = (NEQAELA.data.mode2);
 /* line 1007: */
{ 
HEQAELA_alts = QEQAELA_rp;
 /* line 1008: */
for ( ;; )
{ 
 /* line 1009: */
if ( !((HEQAELA_alts!=BQCAELA_nilpalts)) ) break;
 /* line 1010: */
if ( ((*(&((*(&(HEQAELA_alts->Idinfo)))->Scope)))==(-1)) )
{ 
 /* line 1011: */
REQAELA = (&((*(&(HEQAELA_alts->Idinfo)))->Scope)) ;
(*REQAELA) = 0;
} 
 /* line 1012: */
if ( ((*(&(HEQAELA_alts->U)))!=EQCAELA_niltype) )
{ 
GEQAELA_setexttype((*(*(&(HEQAELA_alts->U)))));
} 
 /* line 1013: */
 /* line 1014: */
HEQAELA_alts = (*(&(HEQAELA_alts->Rest)));
}
 /* line 1015: */
 /* line 1016: */
} 
break;
case 3: /* STRUCT(REF MODE198,REF MODE54,REF MODE251)  */
SEQAELA_ps = (NEQAELA.data.mode3);
 /* line 1017: */
if ( ((*(&(SEQAELA_ps.Idinfo->Scope)))==(-1)) )
{ 
 /* line 1019: */
 /* line 1020: */
 /* line 1021: */
TEQAELA = (&(SEQAELA_ps.Idinfo->Scope)) ;
(*TEQAELA) = 0;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
break;
case 2: /* REF STRUCT(REF MODE198,INT,MODE172)  */
UEQAELA_n = (JEQAELA.data.mode2);
 /* line 1022: */
 /* line 1023: */
if ( ((*(&((*(&(UEQAELA_n->Idinfo)))->Scope)))==(-1)) )
{ 
VEQAELA = (&((*(&(UEQAELA_n->Idinfo)))->Scope)) ;
(*VEQAELA) = 0;
 /* line 1024: */
WEQAELA = (&(UEQAELA_n->Typeno)) ;
(*WEQAELA) = EKPAELA_ctypeno+=1;
 /* line 1025: */
 /* line 1026: */
GEQAELA_setexttype((*(&(UEQAELA_n->T))));
} 
break;
case 3: /* REF STRUCT(MODE172,REF MODE175)  */
XEQAELA_st = (JEQAELA.data.mode3);
 /* line 1027: */
{ 
IEQAELA_sts = XEQAELA_st;
 /* line 1028: */
for ( ;; )
{ 
 /* line 1029: */
if ( !((IEQAELA_sts!=DQCAELA_nilst)) ) break;
GEQAELA_setexttype((*(&(IEQAELA_sts->T))));
IEQAELA_sts = (*(&(IEQAELA_sts->Rest)));
}
 /* line 1031: */
 /* line 1032: */
} 
break;
case 6: /* REF STRUCT(MODE172,MODE172)  */
YEQAELA_f = (JEQAELA.data.mode6);
 /* line 1033: */
{ 
GEQAELA_setexttype((*(&(YEQAELA_f->From))));
 /* line 1034: */
GEQAELA_setexttype((*(&(YEQAELA_f->To))));
} 
break;
case 7: /* REF STRUCT(MODE172,MODE185)  */
ZEQAELA_r = (JEQAELA.data.mode7);
 /* line 1035: */
{ 
LDQAELA_setextint((*(&(ZEQAELA_r->Size))));
 /* line 1036: */
GEQAELA_setexttype((*(&(ZEQAELA_r->T))));
} 
break;
case 8: /* REF STRUCT(MODE172)  */
AFQAELA_tb = (JEQAELA.data.mode8);
 /* line 1037: */
GEQAELA_setexttype((*(&(AFQAELA_tb->Tbracket))));
break;
case 9: /* REF STRUCT(MODE185,MODE172)  */
BFQAELA_ts = (JEQAELA.data.mode9);
{ 
LDQAELA_setextint((*(&(BFQAELA_ts->Size))));
 /* line 1038: */
 /* line 1039: */
GEQAELA_setexttype((*(&(BFQAELA_ts->Tstring))));
} 
break;
default: 
 /* line 1040: */
/*SKIP*/;
break;
} 
} 
A_PROC_EXIT(setexttype);
return;
} 
#undef NL

A_STATIC A68_VOID  DFQAELA_setextctype(A68_222  Ct)
{ 
A68_222  EFQAELA;  /* united object - for case conformity */
A68_223 * FFQAELA_cn;
A68_INT * GFQAELA;  /* YIELD */
A68_INT * HFQAELA;  /* YIELD */
A68_224 * IFQAELA_cpr;
A68_225 * JFQAELA_cpi;
A68_203 * KFQAELA_pd;
A68_226 * LFQAELA_cu;
A68_227 * MFQAELA_cr;
A68_228 * NFQAELA_cs;
A68_228 * OFQAELA_cst;
A68_229 * PFQAELA_ca;
A68_229 * QFQAELA_calts;
A68_238 * RFQAELA_ci;
A68_239 * SFQAELA_cti;
A68_240 * TFQAELA_cd;
A68_241 * UFQAELA_cp;
A68_193 * VFQAELA_repl;
A68_242 * WFQAELA_cnc;
A68_243 * XFQAELA_ca;
A68_230 * YFQAELA_ct;
A68_231 * ZFQAELA_cb;
A68_232 * AGQAELA_cq;
A68_233 * BGQAELA_cg;
A68_234 * CGQAELA_cc;
A68_235 * DGQAELA_crg;
A68_236 * EGQAELA_cv;
A_PROC_ENTRY(setextctype);
 /* line 1043: */
{ 
 /* line 1044: */
EFQAELA = Ct ;
switch ( EFQAELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE198,INT,MODE222,MODE172)  */
FFQAELA_cn = (EFQAELA.data.mode1);
 /* line 1045: */
 /* line 1046: */
if ( ((*(&((*(&(FFQAELA_cn->Idinfo)))->Scope)))==(-1)) )
{ 
GFQAELA = (&((*(&(FFQAELA_cn->Idinfo)))->Scope)) ;
(*GFQAELA) = 0;
 /* line 1047: */
HFQAELA = (&(FFQAELA_cn->Ctypeno)) ;
(*HFQAELA) = HKPAELA_cctypeno+=1;
 /* line 1048: */
 /* line 1049: */
DFQAELA_setextctype((*(&(FFQAELA_cn->Ct))));
} 
break;
case 2: /* REF STRUCT(MODE172,MODE185,MODE185)  */
IFQAELA_cpr = (EFQAELA.data.mode2);
 /* line 1050: */
{ 
GEQAELA_setexttype((*(&(IFQAELA_cpr->T))));
 /* line 1051: */
LDQAELA_setextint((*(&(IFQAELA_cpr->Lwb))));
 /* line 1052: */
 /* line 1053: */
LDQAELA_setextint((*(&(IFQAELA_cpr->Upb))));
} 
break;
case 3: /* REF STRUCT(MODE172,MODE185)  */
JFQAELA_cpi = (EFQAELA.data.mode3);
 /* line 1054: */
{ 
GEQAELA_setexttype((*(&(JFQAELA_cpi->T))));
 /* line 1055: */
LDQAELA_setextint((*(&(JFQAELA_cpi->Index))));
} 
break;
case 4: /* REF STRUCT(MODE172,INT)  */
KFQAELA_pd = (EFQAELA.data.mode4);
 /* line 1056: */
 /* line 1057: */
GEQAELA_setexttype((*(&(KFQAELA_pd->Type))));
break;
case 5: /* REF STRUCT(REF MODE203,MODE222)  */
LFQAELA_cu = (EFQAELA.data.mode5);
 /* line 1058: */
{ 
GEQAELA_setexttype((*(&((*(&(LFQAELA_cu->P)))->Type))));
 /* line 1059: */
DFQAELA_setextctype((*(&(LFQAELA_cu->Ct))));
} 
break;
case 6: /* REF STRUCT(MODE222,MODE185)  */
MFQAELA_cr = (EFQAELA.data.mode6);
 /* line 1060: */
{ 
DFQAELA_setextctype((*(&(MFQAELA_cr->Ct))));
 /* line 1061: */
LDQAELA_setextint((*(&(MFQAELA_cr->Size))));
} 
break;
case 7: /* REF STRUCT(MODE222,REF MODE228)  */
NFQAELA_cs = (EFQAELA.data.mode7);
 /* line 1062: */
{ 
OFQAELA_cst = NFQAELA_cs;
 /* line 1063: */
for ( ;; )
{ 
 /* line 1064: */
if ( !((OFQAELA_cst!=KQCAELA_nilcst)) ) break;
DFQAELA_setextctype((*(&(OFQAELA_cst->Cst))));
OFQAELA_cst = (*(&(OFQAELA_cst->Rest)));
}
 /* line 1065: */
 /* line 1066: */
} 
break;
case 8: /* REF STRUCT(MODE222,REF MODE229)  */
PFQAELA_ca = (EFQAELA.data.mode8);
 /* line 1067: */
{ 
QFQAELA_calts = PFQAELA_ca;
 /* line 1068: */
for ( ;; )
{ 
 /* line 1069: */
if ( !((QFQAELA_calts!=JQCAELA_nilcalts)) ) break;
DFQAELA_setextctype((*(&(QFQAELA_calts->Calt))));
QFQAELA_calts = (*(&(QFQAELA_calts->Rest)));
}
 /* line 1070: */
 /* line 1071: */
} 
break;
case 19: /* REF STRUCT(MODE222,MODE185)  */
RFQAELA_ci = (EFQAELA.data.mode19);
 /* line 1072: */
{ 
DFQAELA_setextctype((*(&(RFQAELA_ci->Ct))));
 /* line 1073: */
LDQAELA_setextint((*(&(RFQAELA_ci->Index))));
} 
break;
case 20: /* REF STRUCT(MODE222,MODE185,MODE185)  */
SFQAELA_cti = (EFQAELA.data.mode20);
 /* line 1074: */
{ 
DFQAELA_setextctype((*(&(SFQAELA_cti->Ct))));
 /* line 1075: */
LDQAELA_setextint((*(&(SFQAELA_cti->Lwb))));
 /* line 1076: */
 /* line 1077: */
LDQAELA_setextint((*(&(SFQAELA_cti->Upb))));
} 
break;
case 21: /* REF STRUCT(MODE185,MODE222,MODE222)  */
TFQAELA_cd = (EFQAELA.data.mode21);
 /* line 1078: */
{ 
LDQAELA_setextint((*(&(TFQAELA_cd->Test))));
 /* line 1079: */
DFQAELA_setextctype((*(&(TFQAELA_cd->Then))));
 /* line 1080: */
 /* line 1081: */
DFQAELA_setextctype((*(&(TFQAELA_cd->Else))));
} 
break;
case 22: /* REF STRUCT(REF MODE244,MODE222)  */
UFQAELA_cp = (EFQAELA.data.mode22);
 /* line 1082: */
{ 
VFQAELA_repl = KTDAELA_get_intvarmult((*(&(UFQAELA_cp->Ids))));
 /* line 1083: */
LDQAELA_setextint((*(&(VFQAELA_repl->Lwb))));
LDQAELA_setextint((*(&(VFQAELA_repl->Upb))));
 /* line 1084: */
 /* line 1085: */
 /* line 1086: */
DFQAELA_setextctype((*(&(UFQAELA_cp->Ct))));
} 
break;
case 23: /* REF STRUCT(BOOL,INT,MODE222,MODE222)  */
WFQAELA_cnc = (EFQAELA.data.mode23);
 /* line 1087: */
{ 
DFQAELA_setextctype((*(&(WFQAELA_cnc->Left))));
 /* line 1088: */
DFQAELA_setextctype((*(&(WFQAELA_cnc->Right))));
} 
break;
case 24: /* REF STRUCT(MODE222,MODE170)  */
XFQAELA_ca = (EFQAELA.data.mode24);
{ 
DFQAELA_setextctype((*(&(XFQAELA_ca->Ct))));
 /* line 1089: */
XDQAELA_setextattr((*(&(XFQAELA_ca->Attr))));
} 
break;
case 9: /* REF STRUCT(MODE172)  */
YFQAELA_ct = (EFQAELA.data.mode9);
 /* line 1090: */
GEQAELA_setexttype((*(&(YFQAELA_ct->Ct))));
break;
case 12: /* REF STRUCT(MODE222)  */
ZFQAELA_cb = (EFQAELA.data.mode12);
 /* line 1091: */
DFQAELA_setextctype((*(&(ZFQAELA_cb->Cbracket))));
break;
case 13: /* REF STRUCT(MODE172)  */
AGQAELA_cq = (EFQAELA.data.mode13);
 /* line 1092: */
GEQAELA_setexttype((*(&(AGQAELA_cq->Querytype))));
break;
case 14: /* REF STRUCT(MODE185,MODE222,REF MODE246)  */
BGQAELA_cg = (EFQAELA.data.mode14);
{ 
LDQAELA_setextint((*(&(BGQAELA_cg->Size))));
 /* line 1093: */
DFQAELA_setextctype((*(&(BGQAELA_cg->Ct))));
} 
break;
case 15: /* REF STRUCT(MODE172,CHAR)  */
CGQAELA_cc = (EFQAELA.data.mode15);
 /* line 1094: */
GEQAELA_setexttype((*(&(CGQAELA_cc->T))));
break;
case 16: /* REF STRUCT(MODE172,CHAR,CHAR)  */
DGQAELA_crg = (EFQAELA.data.mode16);
 /* line 1095: */
GEQAELA_setexttype((*(&(DGQAELA_crg->T))));
break;
case 17: /* REF STRUCT(REF MODE245,MODE172)  */
EGQAELA_cv = (EFQAELA.data.mode17);
 /* line 1096: */
GEQAELA_setexttype((*(&(EGQAELA_cv->T))));
break;
case 18: /* STRUCT(INT)  */
 /* line 1097: */
 /* line 1098: */
/*SKIP*/;
break;
default: 
 /* line 1099: */
/*SKIP*/;
break;
} 
} 
A_PROC_EXIT(setextctype);
return;
} 
#undef NL

A_STATIC A68_VOID  GGQAELA_setextddecs(A68_171 * D)
{ 
A68_171 * HGQAELA_dd;
A_PROC_ENTRY(setextddecs);
 /* line 1102: */
{ 
HGQAELA_dd = D;
 /* line 1103: */
for ( ;; )
{ 
 /* line 1104: */
if ( !((HGQAELA_dd!=FQCAELA_nildecs)) ) break;
GEQAELA_setexttype((*(&(HGQAELA_dd->T))));
HGQAELA_dd = (*(&(HGQAELA_dd->Rest)));
}
 /* line 1105: */
} 
A_PROC_EXIT(setextddecs);
return;
} 
#undef NL

A68_VOID  JGQAELA_outextints(A68_244 * Ids)
{ 
A68_244 * KGQAELA_i;
A68_199  LGQAELA;  /* united object - for case conformity */
A68_200  MGQAELA_ii;
A68_185  NGQAELA;  /* avoid structure result */
A68_185  OGQAELA;  /* united object - for case conformity */
A68_195 * PGQAELA_idef;
A68_375  QGQAELA;  /* collateral clause result */
A68_32  RGQAELA;  /* OPERATORS - istruct -> vector */
A68_46  UGQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(outextints);
 /* line 1108: */
{ 
KGQAELA_i = Ids;
 /* line 1109: */
for ( ;; )
{ 
 /* line 1110: */
if ( !((KGQAELA_i!=CQCAELA_nilids)) ) break;
 /* line 1111: */
if ( ((*(&((*(&(KGQAELA_i->Idinfo)))->Scope)))==0) )
{ 
 /* line 1112: */
LGQAELA = (*(&((*(&(KGQAELA_i->Idinfo)))->U))) ;
switch ( LGQAELA.mode )
{ 
case 1: /* STRUCT(MODE185)  */
MGQAELA_ii = (LGQAELA.data.mode1);
{ 
A_CALLPROC(WOPAELA_outid,((*(&((*(&(KGQAELA_i->Idinfo)))->Id)))),((*(&((*(&(KGQAELA_i->Idinfo)))->Id))),(WOPAELA_outid).nonlocals));
 /* line 1113: */
 /* line 1114: */
OFDAELA_getinteger( MGQAELA_ii.I, &NGQAELA );
OGQAELA = NGQAELA ;
switch ( OGQAELA.mode )
{ 
case 12: /* REF STRUCT(REF MODE198,INT,MODE185)  */
PGQAELA_idef = (OGQAELA.data.mode12);
QGQAELA.data[0] = MLCAELA_dummy;
 /* line 1115: */
QGQAELA.data[1] = (*(&(PGQAELA_idef->Intno)));
QGQAELA.data[2] = (*(&((*(&(KGQAELA_i->Idinfo)))->Vnno)));
 /* line 1116: */
A_CALLPROC(VOPAELA_outints,(A_HISVEC(RGQAELA,QGQAELA,3,A68_INT )),(A_HISVEC(RGQAELA,QGQAELA,3,A68_INT ),(VOPAELA_outints).nonlocals));
break;
default: 
 /* line 1117: */
 /* line 1118: */
 /* line 1119: */
 /* line 1120: */
UQPAELA_fault(0, A_HVEC(UGQAELA,TGQAELA,A68_VC ));
break;
} 
} 
break;
default: 
 /* line 1121: */
/*SKIP*/;
break;
} 
} 
 /* line 1122: */
 /* line 1123: */
KGQAELA_i = (*(&(KGQAELA_i->Rest)));
}
 /* line 1124: */
 /* line 1125: */
A_CALLPROC(WOPAELA_outid,(TTCAOST_nullid),(TTCAOST_nullid,(WOPAELA_outid).nonlocals));
} 
A_PROC_EXIT(outextints);
return;
} 
#undef NL

A68_VOID  WGQAELA_outextattrs(A68_244 * Ids)
{ 
A68_244 * XGQAELA_i;
A68_199  YGQAELA;  /* united object - for case conformity */
A68_205  ZGQAELA_aid;
A68_170  AHQAELA;  /* united object - for case conformity */
A68_254 * BHQAELA_ad;
A68_375  CHQAELA;  /* collateral clause result */
A68_32  DHQAELA;  /* OPERATORS - istruct -> vector */
A68_46  GHQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(outextattrs);
 /* line 1128: */
{ 
XGQAELA_i = Ids;
 /* line 1129: */
for ( ;; )
{ 
 /* line 1130: */
if ( !((XGQAELA_i!=CQCAELA_nilids)) ) break;
 /* line 1131: */
if ( ((*(&((*(&(XGQAELA_i->Idinfo)))->Scope)))==0) )
{ 
 /* line 1132: */
YGQAELA = (*(&((*(&(XGQAELA_i->Idinfo)))->U))) ;
switch ( YGQAELA.mode )
{ 
case 6: /* STRUCT(MODE170)  */
ZGQAELA_aid = (YGQAELA.data.mode6);
 /* line 1133: */
{ 
A_CALLPROC(WOPAELA_outid,((*(&((*(&(XGQAELA_i->Idinfo)))->Id)))),((*(&((*(&(XGQAELA_i->Idinfo)))->Id))),(WOPAELA_outid).nonlocals));
 /* line 1134: */
 /* line 1135: */
AHQAELA = ZGQAELA_aid.A ;
switch ( AHQAELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE198,INT,MODE170)  */
BHQAELA_ad = (AHQAELA.data.mode1);
 /* line 1136: */
CHQAELA.data[0] = MLCAELA_dummy;
CHQAELA.data[1] = (*(&(BHQAELA_ad->Attrno)));
CHQAELA.data[2] = (*(&((*(&(XGQAELA_i->Idinfo)))->Vnno)));
 /* line 1137: */
A_CALLPROC(VOPAELA_outints,(A_HISVEC(DHQAELA,CHQAELA,3,A68_INT )),(A_HISVEC(DHQAELA,CHQAELA,3,A68_INT ),(VOPAELA_outints).nonlocals));
break;
default: 
 /* line 1138: */
 /* line 1139: */
 /* line 1140: */
 /* line 1141: */
UQPAELA_fault(0, A_HVEC(GHQAELA,FHQAELA,A68_VC ));
break;
} 
} 
break;
default: 
 /* line 1142: */
/*SKIP*/;
break;
} 
} 
 /* line 1143: */
 /* line 1144: */
XGQAELA_i = (*(&(XGQAELA_i->Rest)));
}
 /* line 1145: */
 /* line 1146: */
A_CALLPROC(WOPAELA_outid,(TTCAOST_nullid),(TTCAOST_nullid,(WOPAELA_outid).nonlocals));
} 
A_PROC_EXIT(outextattrs);
return;
} 
#undef NL

A68_VOID  IHQAELA_outextctypes(A68_244 * Ids)
{ 
A68_244 * JHQAELA_i;
A68_199  KHQAELA;  /* united object - for case conformity */
A68_202  LHQAELA_ci;
A68_222  MHQAELA;  /* united object - for case conformity */
A68_223 * NHQAELA_cn;
A68_375  OHQAELA;  /* collateral clause result */
A68_32  PHQAELA;  /* OPERATORS - istruct -> vector */
A68_46  SHQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(outextctypes);
 /* line 1149: */
{ 
JHQAELA_i = Ids;
 /* line 1150: */
for ( ;; )
{ 
 /* line 1151: */
if ( !((JHQAELA_i!=CQCAELA_nilids)) ) break;
 /* line 1152: */
if ( ((*(&((*(&(JHQAELA_i->Idinfo)))->Scope)))==0) )
{ 
 /* line 1153: */
KHQAELA = (*(&((*(&(JHQAELA_i->Idinfo)))->U))) ;
switch ( KHQAELA.mode )
{ 
case 3: /* STRUCT(MODE222)  */
LHQAELA_ci = (KHQAELA.data.mode3);
 /* line 1154: */
{ 
A_CALLPROC(WOPAELA_outid,((*(&((*(&(JHQAELA_i->Idinfo)))->Id)))),((*(&((*(&(JHQAELA_i->Idinfo)))->Id))),(WOPAELA_outid).nonlocals));
 /* line 1155: */
 /* line 1156: */
MHQAELA = LHQAELA_ci.Ct ;
switch ( MHQAELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE198,INT,MODE222,MODE172)  */
NHQAELA_cn = (MHQAELA.data.mode1);
 /* line 1157: */
OHQAELA.data[0] = MLCAELA_dummy;
OHQAELA.data[1] = (*(&(NHQAELA_cn->Ctypeno)));
OHQAELA.data[2] = (*(&((*(&(JHQAELA_i->Idinfo)))->Vnno)));
 /* line 1158: */
A_CALLPROC(VOPAELA_outints,(A_HISVEC(PHQAELA,OHQAELA,3,A68_INT )),(A_HISVEC(PHQAELA,OHQAELA,3,A68_INT ),(VOPAELA_outints).nonlocals));
break;
default: 
 /* line 1159: */
 /* line 1160: */
 /* line 1161: */
 /* line 1162: */
UQPAELA_fault(0, A_HVEC(SHQAELA,RHQAELA,A68_VC ));
break;
} 
} 
break;
default: 
 /* line 1163: */
/*SKIP*/;
break;
} 
} 
 /* line 1164: */
 /* line 1165: */
JHQAELA_i = (*(&(JHQAELA_i->Rest)));
}
 /* line 1166: */
 /* line 1167: */
A_CALLPROC(WOPAELA_outid,(TTCAOST_nullid),(TTCAOST_nullid,(WOPAELA_outid).nonlocals));
} 
A_PROC_EXIT(outextctypes);
return;
} 
#undef NL

A68_VOID  UHQAELA_unscopeids(A68_244 * Ids)
{ 
A68_244 * VHQAELA_i;
A68_INT * WHQAELA;  /* YIELD */
A68_199  XHQAELA;  /* united object - for case conformity */
A68_202  YHQAELA_c;
A68_222  ZHQAELA;  /* united object - for case conformity */
A68_223 * AIQAELA_cn;
A68_INT * BIQAELA;  /* YIELD */
A68_201  CIQAELA_t;
A68_172  DIQAELA;  /* avoid structure result */
A68_172  EIQAELA;  /* united object - for case conformity */
A68_173 * FIQAELA_p;
A68_INT * GIQAELA;  /* YIELD */
A68_174 * HIQAELA_n;
A68_INT * IIQAELA;  /* YIELD */
A68_200  JIQAELA_i;
A68_185  KIQAELA;  /* avoid structure result */
A68_185  LIQAELA;  /* united object - for case conformity */
A68_195 * MIQAELA_idef;
A68_INT * NIQAELA;  /* YIELD */
A68_205  OIQAELA_a;
A68_170  PIQAELA;  /* united object - for case conformity */
A68_254 * QIQAELA_adef;
A68_INT * RIQAELA;  /* YIELD */
A_PROC_ENTRY(unscopeids);
 /* line 1170: */
{ 
VHQAELA_i = Ids;
 /* line 1171: */
for ( ;; )
{ 
 /* line 1172: */
if ( !((VHQAELA_i!=CQCAELA_nilids)) ) break;
 /* line 1173: */
if ( ((*(&((*(&(VHQAELA_i->Idinfo)))->Scope)))==0) )
{ 
WHQAELA = (&((*(&(VHQAELA_i->Idinfo)))->Scope)) ;
(*WHQAELA) = (-1);
 /* line 1174: */
 /* line 1175: */
XHQAELA = (*(&((*(&(VHQAELA_i->Idinfo)))->U))) ;
switch ( XHQAELA.mode )
{ 
case 3: /* STRUCT(MODE222)  */
YHQAELA_c = (XHQAELA.data.mode3);
 /* line 1176: */
ZHQAELA = YHQAELA_c.Ct ;
switch ( ZHQAELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE198,INT,MODE222,MODE172)  */
AIQAELA_cn = (ZHQAELA.data.mode1);
 /* line 1177: */
 /* line 1178: */
BIQAELA = (&(AIQAELA_cn->Ctypeno)) ;
(*BIQAELA) = (-1);
break;
default: 
 /* line 1179: */
/*SKIP*/;
break;
} 
break;
case 2: /* STRUCT(MODE172)  */
CIQAELA_t = (XHQAELA.data.mode2);
 /* line 1180: */
ZGDAELA_gettype( CIQAELA_t.T, &DIQAELA );
EIQAELA = DIQAELA ;
switch ( EIQAELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE198,INT,MODE247)  */
FIQAELA_p = (EIQAELA.data.mode1);
 /* line 1181: */
GIQAELA = (&(FIQAELA_p->Typeno)) ;
(*GIQAELA) = (-1);
break;
case 2: /* REF STRUCT(REF MODE198,INT,MODE172)  */
HIQAELA_n = (EIQAELA.data.mode2);
 /* line 1182: */
 /* line 1183: */
IIQAELA = (&(HIQAELA_n->Typeno)) ;
(*IIQAELA) = (-1);
break;
default: 
 /* line 1184: */
/*SKIP*/;
break;
} 
break;
case 1: /* STRUCT(MODE185)  */
JIQAELA_i = (XHQAELA.data.mode1);
 /* line 1185: */
OFDAELA_getinteger( JIQAELA_i.I, &KIQAELA );
LIQAELA = KIQAELA ;
switch ( LIQAELA.mode )
{ 
case 12: /* REF STRUCT(REF MODE198,INT,MODE185)  */
MIQAELA_idef = (LIQAELA.data.mode12);
 /* line 1186: */
 /* line 1187: */
NIQAELA = (&(MIQAELA_idef->Intno)) ;
(*NIQAELA) = (-1);
break;
default: 
 /* line 1188: */
/*SKIP*/;
break;
} 
break;
case 6: /* STRUCT(MODE170)  */
OIQAELA_a = (XHQAELA.data.mode6);
 /* line 1189: */
PIQAELA = OIQAELA_a.A ;
switch ( PIQAELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE198,INT,MODE170)  */
QIQAELA_adef = (PIQAELA.data.mode1);
 /* line 1190: */
 /* line 1191: */
RIQAELA = (&(QIQAELA_adef->Attrno)) ;
(*RIQAELA) = (-1);
break;
default: 
 /* line 1192: */
 /* line 1193: */
/*SKIP*/;
break;
} 
break;
default: 
 /* line 1194: */
/*SKIP*/;
break;
} 
} 
 /* line 1195: */
 /* line 1196: */
VHQAELA_i = (*(&(VHQAELA_i->Rest)));
}
 /* line 1197: */
HKPAELA_cctypeno = 0;
EKPAELA_ctypeno = 0;
GKPAELA_cintno = 0;
 /* line 1198: */
IKPAELA_cattrno = 0;
} 
A_PROC_EXIT(unscopeids);
return;
} 
#undef NL

A68_VOID  UIQAELA_setidunn(A68_198 * I, A68_199  U)
{ 
A68_199  VIQAELA;  /* united object - for case conformity */
A68_207  WIQAELA_r;
A68_199 * XIQAELA;  /* YIELD */
A_PROC_ENTRY(setidunn);
 /* line 1201: */
{ 
 /* line 1202: */
VIQAELA = (*(&(I->U))) ;
switch ( VIQAELA.mode )
{ 
case 9: /* STRUCT(INT)  */
WIQAELA_r = (VIQAELA.data.mode9);
 /* line 1203: */
 /* line 1204: */
XIQAELA = (&(I->U)) ;
(*XIQAELA) = U;
break;
default: 
 /* line 1205: */
/*SKIP*/;
break;
} 
} 
A_PROC_EXIT(setidunn);
return;
} 
#undef NL
 /* line 1208: */

A68_VOID  BJQAELA_insert_idinfo(A68_198 * I, A68_293 ** Scopestack, A68_244 ** Idlist)
{ 
A68_244 ** CJQAELA_iptr;
A68_BOOL  DJQAELA;  /* optbool result */
A68_BOOL  EJQAELA;  /* optbool result */
A68_244  FJQAELA;  /* collateral clause result */
A68_170  GJQAELA;  /* OPERATORS - mode -> union mode */
A68_244 * HJQAELA;  /* YIELD */
A68_244 ** IJQAELA;  /* YIELD */
A68_244 ** JJQAELA;  /* YIELD */
A_PROC_ENTRY(insert_idinfo);
 /* line 1212: */
{ 
CJQAELA_iptr = Idlist;
 /* line 1213: */
for ( ;; )
{ 
 /* line 1214: */
DJQAELA = ((*(&((*CJQAELA_iptr)->Rest)))!=CQCAELA_nilids);
if ( DJQAELA )
{ /* line 1215: */
EJQAELA = ((*Scopestack)==CUCAELA_nilscope);
if ( ! EJQAELA )
{EJQAELA = ((*(&((*Scopestack)->Ids)))!=(*(&((*CJQAELA_iptr)->Rest))));
}
 /* line 1216: */
DJQAELA = EJQAELA;
}
if ( !(DJQAELA) ) break;
CJQAELA_iptr = (&((*CJQAELA_iptr)->Rest));
}
 /* line 1217: */
 /* line 1218: */
FJQAELA.Idinfo = I;
FJQAELA.Declaration = A68_TRUE;
FJQAELA.Attr = A_UNITE(GJQAELA,mode6,6,MRCAELA_attrnull);
FJQAELA.Rest = (*(&((*CJQAELA_iptr)->Rest)));
HJQAELA = A_HEAP(A68_244 ) ;
(*HJQAELA) = FJQAELA ;
IJQAELA = (&((*CJQAELA_iptr)->Rest)) ;
(*IJQAELA) = HJQAELA;
 /* line 1219: */
 /* line 1220: */
JJQAELA = (&((*Scopestack)->Ids)) ;
(*JJQAELA) = (*(&((*CJQAELA_iptr)->Rest)));
} 
A_PROC_EXIT(insert_idinfo);
return;
} 
#undef NL

A68_BOOL  MJQAELA_loadint(A68_185  A, A68_BOOL  Index)
{ 
A68_BOOL  NJQAELA_chkd;
A68_185  OJQAELA;  /* united object - for case conformity */
A68_INT  PJQAELA_i;
A68_381  QJQAELA;  /* collateral clause result */
A68_32  RJQAELA;  /* OPERATORS - istruct -> vector */
A68_187 * SJQAELA_it;
A68_381  TJQAELA;  /* collateral clause result */
A68_32  UJQAELA;  /* OPERATORS - istruct -> vector */
A68_186 * VJQAELA_m;
A68_46  YJQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_188 * ZJQAELA_ic;
A68_381  AKQAELA;  /* collateral clause result */
A68_32  BKQAELA;  /* OPERATORS - istruct -> vector */
A68_194  CKQAELA_ip;
A68_381  DKQAELA;  /* collateral clause result */
A68_32  EKQAELA;  /* OPERATORS - istruct -> vector */
A68_190 * FKQAELA_op;
A68_381  GKQAELA;  /* collateral clause result */
A68_32  HKQAELA;  /* OPERATORS - istruct -> vector */
A68_191 * IKQAELA_mop;
A68_381  JKQAELA;  /* collateral clause result */
A68_32  KKQAELA;  /* OPERATORS - istruct -> vector */
A68_189 * LKQAELA_e;
A68_381  MKQAELA;  /* collateral clause result */
A68_32  NKQAELA;  /* OPERATORS - istruct -> vector */
A68_381  OKQAELA;  /* collateral clause result */
A68_32  PKQAELA;  /* OPERATORS - istruct -> vector */
A68_193 * QKQAELA_ivm;
A68_381  RKQAELA;  /* collateral clause result */
A68_32  SKQAELA;  /* OPERATORS - istruct -> vector */
A68_192 * TKQAELA_ic;
A68_32  UKQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_195 * VKQAELA_indef;
A68_381  WKQAELA;  /* collateral clause result */
A68_32  XKQAELA;  /* OPERATORS - istruct -> vector */
A68_196 * YKQAELA_ib;
A68_32  ZKQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_197  ALQAELA_in;
A68_32  BLQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  CLQAELA;  /* clause result */
A_PROC_ENTRY(loadint);
 /* line 1223: */
{ 
NJQAELA_chkd = A68_FALSE;
 /* line 1224: */
 /* line 1225: */
OJQAELA = A ;
switch ( OJQAELA.mode )
{ 
case 1: /* INT */
PJQAELA_i = (OJQAELA.data.mode1);
 /* line 1226: */
QJQAELA.data[0] = IJCAELA_iconst;
QJQAELA.data[1] = PJQAELA_i;
 /* line 1227: */
A_CALLPROC(VOPAELA_outints,(A_HISVEC(RJQAELA,QJQAELA,2,A68_INT )),(A_HISVEC(RJQAELA,QJQAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
break;
case 3: /* REF STRUCT(INT,REF MODE26)  */
SJQAELA_it = (OJQAELA.data.mode3);
 /* line 1228: */
{ 
TJQAELA.data[0] = QJCAELA_iconsttext;
TJQAELA.data[1] = (*(&(SJQAELA_it->Int)));
A_CALLPROC(VOPAELA_outints,(A_HISVEC(UJQAELA,TJQAELA,2,A68_INT )),(A_HISVEC(UJQAELA,TJQAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1229: */
A_CALLPROC(WOPAELA_outid,((*(&(SJQAELA_it->Text)))),((*(&(SJQAELA_it->Text))),(WOPAELA_outid).nonlocals));
} 
break;
case 2: /* REF STRUCT(REF MODE26)  */
VJQAELA_m = (OJQAELA.data.mode2);
 /* line 1230: */
UQPAELA_fault(0, A_HVEC(YJQAELA,XJQAELA,A68_VC ));
break;
case 5: /* REF STRUCT(MODE185,MODE185,INT)  */
ZJQAELA_ic = (OJQAELA.data.mode5);
 /* line 1231: */
{ 
AKQAELA.data[0] = PJCAELA_icheck;
AKQAELA.data[1] = (*(&(ZJQAELA_ic->Test)));
A_CALLPROC(VOPAELA_outints,(A_HISVEC(BKQAELA,AKQAELA,2,A68_INT )),(A_HISVEC(BKQAELA,AKQAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
MJQAELA_loadint((*(&(ZJQAELA_ic->Integer))), Index);
 /* line 1232: */
MJQAELA_loadint((*(&(ZJQAELA_ic->Standard))), Index);
 /* line 1233: */
 /* line 1234: */
 /* line 1235: */
NJQAELA_chkd = A68_TRUE;
} 
break;
case 11: /* STRUCT(INT)  */
CKQAELA_ip = (OJQAELA.data.mode11);
 /* line 1236: */
DKQAELA.data[0] = NJCAELA_iparam;
DKQAELA.data[1] = CKQAELA_ip.P;
 /* line 1237: */
A_CALLPROC(VOPAELA_outints,(A_HISVEC(EKQAELA,DKQAELA,2,A68_INT )),(A_HISVEC(EKQAELA,DKQAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
break;
case 7: /* REF STRUCT(INT,MODE185,MODE185)  */
FKQAELA_op = (OJQAELA.data.mode7);
 /* line 1238: */
{ 
GKQAELA.data[0] = KJCAELA_idop;
GKQAELA.data[1] = (*(&(FKQAELA_op->Opno)));
A_CALLPROC(VOPAELA_outints,(A_HISVEC(HKQAELA,GKQAELA,2,A68_INT )),(A_HISVEC(HKQAELA,GKQAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1239: */
if ( MJQAELA_loadint((*(&(FKQAELA_op->L))), Index) )
{ 
NJQAELA_chkd = A68_TRUE;
} 
 /* line 1240: */
if ( MJQAELA_loadint((*(&(FKQAELA_op->R))), Index) )
{ 
 /* line 1241: */
 /* line 1242: */
NJQAELA_chkd = A68_TRUE;
} 
} 
break;
case 8: /* REF STRUCT(INT,MODE185)  */
IKQAELA_mop = (OJQAELA.data.mode8);
 /* line 1243: */
{ 
JKQAELA.data[0] = LJCAELA_imop;
JKQAELA.data[1] = (*(&(IKQAELA_mop->Opno)));
A_CALLPROC(VOPAELA_outints,(A_HISVEC(KKQAELA,JKQAELA,2,A68_INT )),(A_HISVEC(KKQAELA,JKQAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1244: */
if ( MJQAELA_loadint((*(&(IKQAELA_mop->R))), Index) )
{ 
 /* line 1245: */
NJQAELA_chkd = A68_TRUE;
} 
} 
break;
case 6: /* REF STRUCT(REF MODE245)  */
LKQAELA_e = (OJQAELA.data.mode6);
 /* line 1246: */
if ( Index )
{ 
MKQAELA.data[0] = JJCAELA_iname;
MKQAELA.data[1] = (*(&((*(&(LKQAELA_e->Im)))->Index)));
 /* line 1247: */
A_CALLPROC(VOPAELA_outints,(A_HISVEC(NKQAELA,MKQAELA,2,A68_INT )),(A_HISVEC(NKQAELA,MKQAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
} 
else
{ 
OKQAELA.data[0] = VNCAELA_idef;
OKQAELA.data[1] = (*(&((*(&(LKQAELA_e->Im)))->Xno)));
 /* line 1248: */
 /* line 1249: */
A_CALLPROC(VOPAELA_outints,(A_HISVEC(PKQAELA,OKQAELA,2,A68_INT )),(A_HISVEC(PKQAELA,OKQAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
} 
break;
case 10: /* REF STRUCT(INT,MODE185,MODE185,MODE185)  */
QKQAELA_ivm = (OJQAELA.data.mode10);
RKQAELA.data[0] = OJCAELA_ivarmult;
RKQAELA.data[1] = (*(&(QKQAELA_ivm->Varmultno)));
 /* line 1250: */
A_CALLPROC(VOPAELA_outints,(A_HISVEC(SKQAELA,RKQAELA,2,A68_INT )),(A_HISVEC(SKQAELA,RKQAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
break;
case 9: /* REF STRUCT(MODE185,MODE185,MODE185)  */
TKQAELA_ic = (OJQAELA.data.mode9);
 /* line 1251: */
{ 
A_CALLPROC(VOPAELA_outints,(A_HVEC(UKQAELA,MJCAELA_icond,A68_INT )),(A_HVEC(UKQAELA,MJCAELA_icond,A68_INT ),(VOPAELA_outints).nonlocals));
if ( MJQAELA_loadint((*(&(TKQAELA_ic->Cond))), Index) )
{ 
NJQAELA_chkd = A68_TRUE;
} 
 /* line 1252: */
if ( MJQAELA_loadint((*(&(TKQAELA_ic->T))), Index) )
{ 
NJQAELA_chkd = A68_TRUE;
} 
 /* line 1253: */
if ( MJQAELA_loadint((*(&(TKQAELA_ic->F))), Index) )
{ 
 /* line 1254: */
 /* line 1255: */
NJQAELA_chkd = A68_TRUE;
} 
} 
break;
case 12: /* REF STRUCT(REF MODE198,INT,MODE185)  */
VKQAELA_indef = (OJQAELA.data.mode12);
WKQAELA.data[0] = VNCAELA_idef;
WKQAELA.data[1] = (*(&(VKQAELA_indef->Intno)));
 /* line 1256: */
A_CALLPROC(VOPAELA_outints,(A_HISVEC(XKQAELA,WKQAELA,2,A68_INT )),(A_HISVEC(XKQAELA,WKQAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
break;
case 13: /* REF STRUCT(MODE185)  */
YKQAELA_ib = (OJQAELA.data.mode13);
{ 
A_CALLPROC(VOPAELA_outints,(A_HVEC(ZKQAELA,JMCAELA_ibracket,A68_INT )),(A_HVEC(ZKQAELA,JMCAELA_ibracket,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1257: */
MJQAELA_loadint((*(&(YKQAELA_ib->Ibracket))), Index);
} 
break;
case 14: /* STRUCT(INT)  */
ALQAELA_in = (OJQAELA.data.mode14);
 /* line 1258: */
 /* line 1259: */
A_CALLPROC(VOPAELA_outints,(A_HVEC(BLQAELA,PNCAELA_inull,A68_INT )),(A_HVEC(BLQAELA,PNCAELA_inull,A68_INT ),(VOPAELA_outints).nonlocals));
break;
default: 
/*SKIP*/;
break;
} 
 /* line 1260: */
 /* line 1261: */
CLQAELA = NJQAELA_chkd;
} 
A_PROC_EXIT(loadint);
return( CLQAELA );
} 
#undef NL

A68_VOID  HLQAELA_loadtype(A68_172  T, A68_BOOL  Expand, A68_BOOL  All, A68_BOOL  Index)
{ 
A68_384  LLQAELA_outprimset;   /* proc value of non-global proc */
A68_175 * COQAELA_st;
A68_172  DOQAELA;  /* united object - for case conformity */
A68_173 * EOQAELA_p;
A68_172  FOQAELA;  /* OPERATORS - mode -> union mode */
A68_381  GOQAELA;  /* collateral clause result */
A68_32  HOQAELA;  /* OPERATORS - istruct -> vector */
A68_174 * IOQAELA_n;
A68_381  JOQAELA;  /* collateral clause result */
A68_32  KOQAELA;  /* OPERATORS - istruct -> vector */
A68_175 * LOQAELA_s;
A68_32  MOQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_32  NOQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_176 * OOQAELA_t1;
A68_381  POQAELA;  /* collateral clause result */
A68_32  QOQAELA;  /* OPERATORS - istruct -> vector */
A68_381  ROQAELA;  /* collateral clause result */
A68_32  SOQAELA;  /* OPERATORS - istruct -> vector */
A68_179 * TOQAELA_r;
A68_32  UOQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_185  VOQAELA;  /* avoid structure result */
A68_185 * WOQAELA;  /* YIELD */
A68_178 * XOQAELA_f;
A68_32  YOQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_180 * ZOQAELA_tb;
A68_32  APQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_181 * BPQAELA_ts;
A68_32  CPQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_185  DPQAELA;  /* avoid structure result */
A68_185 * EPQAELA;  /* YIELD */
A68_177  FPQAELA_tn;
A68_32  GPQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_184  HPQAELA_tv;
A68_32  IPQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_182  JPQAELA_f;
A68_46  MPQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(loadtype);
 /* line 1265: */
{ 
A_CLOSURE( LLQAELA_outprimset, MLQAELA_outprimset, NLQAELA_outprimset );
(( NLQAELA_outprimset * ) ( LLQAELA_outprimset.nonlocals )) -> Index = Index;
 /* line 1316: */
 /* line 1317: */
 /* line 1318: */
DOQAELA = T ;
switch ( DOQAELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE198,INT,MODE247)  */
EOQAELA_p = (DOQAELA.data.mode1);
 /* line 1319: */
if ( Expand )
{ 
 /* line 1320: */
A_CALLPROC(LLQAELA_outprimset,(A_UNITE(FOQAELA,mode1,1,EOQAELA_p), All),(A_UNITE(FOQAELA,mode1,1,EOQAELA_p), All,(LLQAELA_outprimset).nonlocals));
} 
else
{ 
GOQAELA.data[0] = SJCAELA_tnamed;
GOQAELA.data[1] = (*(&(EOQAELA_p->Typeno)));
 /* line 1321: */
 /* line 1322: */
A_CALLPROC(VOPAELA_outints,(A_HISVEC(HOQAELA,GOQAELA,2,A68_INT )),(A_HISVEC(HOQAELA,GOQAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
} 
break;
case 2: /* REF STRUCT(REF MODE198,INT,MODE172)  */
IOQAELA_n = (DOQAELA.data.mode2);
 /* line 1323: */
if ( Expand )
{ 
 /* line 1324: */
HLQAELA_loadtype((*(&(IOQAELA_n->T))), A68_FALSE, A68_FALSE, Index);
} 
else
{ 
JOQAELA.data[0] = SJCAELA_tnamed;
JOQAELA.data[1] = (*(&(IOQAELA_n->Typeno)));
 /* line 1325: */
 /* line 1326: */
A_CALLPROC(VOPAELA_outints,(A_HISVEC(KOQAELA,JOQAELA,2,A68_INT )),(A_HISVEC(KOQAELA,JOQAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
} 
break;
case 3: /* REF STRUCT(MODE172,REF MODE175)  */
LOQAELA_s = (DOQAELA.data.mode3);
 /* line 1327: */
{ 
COQAELA_st = LOQAELA_s;
A_CALLPROC(VOPAELA_outints,(A_HVEC(MOQAELA,UJCAELA_tst,A68_INT )),(A_HVEC(MOQAELA,UJCAELA_tst,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1328: */
for ( ;; )
{ 
 /* line 1329: */
if ( !((COQAELA_st!=DQCAELA_nilst)) ) break;
HLQAELA_loadtype((*(&(COQAELA_st->T))), A68_FALSE, A68_FALSE, Index);
COQAELA_st = (*(&(COQAELA_st->Rest)));
}
 /* line 1330: */
 /* line 1331: */
 /* line 1332: */
A_CALLPROC(VOPAELA_outints,(A_HVEC(NOQAELA,XKCAELA_end,A68_INT )),(A_HVEC(NOQAELA,XKCAELA_end,A68_INT ),(VOPAELA_outints).nonlocals));
} 
break;
case 4: /* REF STRUCT(REF MODE245,MODE172)  */
OOQAELA_t1 = (DOQAELA.data.mode4);
 /* line 1333: */
if ( Index )
{ 
POQAELA.data[0] = VJCAELA_tparam;
POQAELA.data[1] = (*(&((*(&(OOQAELA_t1->Tm)))->Index)));
 /* line 1334: */
A_CALLPROC(VOPAELA_outints,(A_HISVEC(QOQAELA,POQAELA,2,A68_INT )),(A_HISVEC(QOQAELA,POQAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
} 
else
{ 
ROQAELA.data[0] = SJCAELA_tnamed;
ROQAELA.data[1] = (*(&((*(&(OOQAELA_t1->Tm)))->Xno)));
 /* line 1335: */
 /* line 1336: */
A_CALLPROC(VOPAELA_outints,(A_HISVEC(SOQAELA,ROQAELA,2,A68_INT )),(A_HISVEC(SOQAELA,ROQAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
} 
break;
case 7: /* REF STRUCT(MODE172,MODE185)  */
TOQAELA_r = (DOQAELA.data.mode7);
 /* line 1337: */
{ 
A_CALLPROC(VOPAELA_outints,(A_HVEC(UOQAELA,TJCAELA_trow,A68_INT )),(A_HVEC(UOQAELA,TJCAELA_trow,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1338: */
 /* line 1339: */
if ( MJQAELA_loadint((*(&(TOQAELA_r->Size))), Index) )
{ 
 /* line 1340: */
DSDAELA_uncheckedint( (*(&(TOQAELA_r->Size))), &VOQAELA );
WOQAELA = (&(TOQAELA_r->Size)) ;
(*WOQAELA) = VOQAELA;
} 
 /* line 1341: */
 /* line 1342: */
 /* line 1343: */
HLQAELA_loadtype((*(&(TOQAELA_r->T))), A68_FALSE, A68_FALSE, Index);
} 
break;
case 6: /* REF STRUCT(MODE172,MODE172)  */
XOQAELA_f = (DOQAELA.data.mode6);
 /* line 1344: */
{ 
A_CALLPROC(VOPAELA_outints,(A_HVEC(YOQAELA,WJCAELA_tfn,A68_INT )),(A_HVEC(YOQAELA,WJCAELA_tfn,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1345: */
HLQAELA_loadtype((*(&(XOQAELA_f->From))), A68_FALSE, A68_FALSE, Index);
 /* line 1346: */
 /* line 1347: */
HLQAELA_loadtype((*(&(XOQAELA_f->To))), A68_FALSE, A68_FALSE, Index);
} 
break;
case 8: /* REF STRUCT(MODE172)  */
ZOQAELA_tb = (DOQAELA.data.mode8);
{ 
A_CALLPROC(VOPAELA_outints,(A_HVEC(APQAELA,KMCAELA_tbracket,A68_INT )),(A_HVEC(APQAELA,KMCAELA_tbracket,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1348: */
 /* line 1349: */
HLQAELA_loadtype((*(&(ZOQAELA_tb->Tbracket))), A68_FALSE, A68_FALSE, Index);
} 
break;
case 9: /* REF STRUCT(MODE185,MODE172)  */
BPQAELA_ts = (DOQAELA.data.mode9);
 /* line 1350: */
{ 
A_CALLPROC(VOPAELA_outints,(A_HVEC(CPQAELA,HOCAELA_tstring,A68_INT )),(A_HVEC(CPQAELA,HOCAELA_tstring,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1351: */
 /* line 1352: */
if ( MJQAELA_loadint((*(&(BPQAELA_ts->Size))), Index) )
{ 
 /* line 1353: */
DSDAELA_uncheckedint( (*(&(BPQAELA_ts->Size))), &DPQAELA );
EPQAELA = (&(BPQAELA_ts->Size)) ;
(*EPQAELA) = DPQAELA;
} 
 /* line 1354: */
 /* line 1355: */
 /* line 1356: */
HLQAELA_loadtype((*(&(BPQAELA_ts->Tstring))), A68_FALSE, A68_FALSE, Index);
} 
break;
case 5: /* STRUCT(INT)  */
FPQAELA_tn = (DOQAELA.data.mode5);
 /* line 1357: */
A_CALLPROC(VOPAELA_outints,(A_HVEC(GPQAELA,RJCAELA_tnull,A68_INT )),(A_HVEC(GPQAELA,RJCAELA_tnull,A68_INT ),(VOPAELA_outints).nonlocals));
break;
case 12: /* STRUCT(INT)  */
HPQAELA_tv = (DOQAELA.data.mode12);
 /* line 1358: */
A_CALLPROC(VOPAELA_outints,(A_HVEC(IPQAELA,ROCAELA_tvoid,A68_INT )),(A_HVEC(IPQAELA,ROCAELA_tvoid,A68_INT ),(VOPAELA_outints).nonlocals));
break;
case 10: /* STRUCT(INT)  */
JPQAELA_f = (DOQAELA.data.mode10);
 /* line 1359: */
/*SKIP*/;
break;
default: 
 /* line 1360: */
 /* line 1361: */
UQPAELA_fault(0, A_HVEC(MPQAELA,LPQAELA,A68_VC ));
break;
} 
} 
A_PROC_EXIT(loadtype);
return;
} 
#undef NL

A68_VOID  OPQAELA_outexttypes(A68_244 * Ids)
{ 
A68_244 * PPQAELA_i;
A68_244 * QPQAELA_etids;
A68_199  RPQAELA;  /* united object - for case conformity */
A68_201  SPQAELA_t;
A68_244  TPQAELA;  /* collateral clause result */
A68_170  UPQAELA;  /* OPERATORS - mode -> union mode */
A68_244 * VPQAELA;  /* YIELD */
A68_199  WPQAELA;  /* united object - for case conformity */
A68_201  XPQAELA_t;
A68_172  YPQAELA;  /* avoid structure result */
A68_172  ZPQAELA_exttype;
A68_172  AQQAELA;  /* united object - for case conformity */
A68_173 * BQQAELA_p;
A68_375  CQQAELA;  /* collateral clause result */
A68_32  DQQAELA;  /* OPERATORS - istruct -> vector */
A68_32  EQQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_174 * FQQAELA_n;
A68_375  GQQAELA;  /* collateral clause result */
A68_32  HQQAELA;  /* OPERATORS - istruct -> vector */
A68_32  IQQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_182  JQQAELA_f;
A68_46  MQQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(outexttypes);
 /* line 1364: */
{ 
PPQAELA_i = Ids;
 /* line 1365: */
QPQAELA_etids = CQCAELA_nilids;
 /* line 1366: */
for ( ;; )
{ 
 /* line 1367: */
if ( !((PPQAELA_i!=CQCAELA_nilids)) ) break;
 /* line 1368: */
if ( ((*(&((*(&(PPQAELA_i->Idinfo)))->Scope)))==0) )
{ 
 /* line 1369: */
RPQAELA = (*(&((*(&(PPQAELA_i->Idinfo)))->U))) ;
switch ( RPQAELA.mode )
{ 
case 2: /* STRUCT(MODE172)  */
SPQAELA_t = (RPQAELA.data.mode2);
 /* line 1370: */
TPQAELA.Idinfo = (*(&(PPQAELA_i->Idinfo)));
TPQAELA.Declaration = A68_TRUE;
TPQAELA.Attr = A_UNITE(UPQAELA,mode6,6,MRCAELA_attrnull);
 /* line 1371: */
TPQAELA.Rest = QPQAELA_etids;
 /* line 1372: */
VPQAELA = A_HEAP(A68_244 ) ;
(*VPQAELA) = TPQAELA ;
QPQAELA_etids = VPQAELA;
break;
default: 
 /* line 1373: */
/*SKIP*/;
break;
} 
} 
 /* line 1374: */
 /* line 1375: */
PPQAELA_i = (*(&(PPQAELA_i->Rest)));
}
 /* line 1376: */
PPQAELA_i = QPQAELA_etids;
 /* line 1377: */
for ( ;; )
{ 
 /* line 1378: */
if ( !((PPQAELA_i!=CQCAELA_nilids)) ) break;
 /* line 1379: */
if ( ((*(&((*(&(PPQAELA_i->Idinfo)))->Scope)))==0) )
{ 
 /* line 1380: */
WPQAELA = (*(&((*(&(PPQAELA_i->Idinfo)))->U))) ;
switch ( WPQAELA.mode )
{ 
case 2: /* STRUCT(MODE172)  */
XPQAELA_t = (WPQAELA.data.mode2);
 /* line 1381: */
{ 
ZGDAELA_gettype( XPQAELA_t.T, &YPQAELA );
ZPQAELA_exttype = YPQAELA;
 /* line 1382: */
 /* line 1383: */
AQQAELA = ZPQAELA_exttype ;
switch ( AQQAELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE198,INT,MODE247)  */
BQQAELA_p = (AQQAELA.data.mode1);
 /* line 1384: */
{ 
A_CALLPROC(WOPAELA_outid,((*(&((*(&(BQQAELA_p->Idinfo)))->Id)))),((*(&((*(&(BQQAELA_p->Idinfo)))->Id))),(WOPAELA_outid).nonlocals));
 /* line 1385: */
CQQAELA.data[0] = MLCAELA_dummy;
CQQAELA.data[1] = (*(&(BQQAELA_p->Typeno)));
CQQAELA.data[2] = (*(&((*(&(PPQAELA_i->Idinfo)))->Vnno)));
A_CALLPROC(VOPAELA_outints,(A_HISVEC(DQQAELA,CQQAELA,3,A68_INT )),(A_HISVEC(DQQAELA,CQQAELA,3,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1386: */
HLQAELA_loadtype(ZPQAELA_exttype, A68_TRUE, A68_TRUE, A68_FALSE);
 /* line 1387: */
 /* line 1388: */
 /* line 1389: */
A_CALLPROC(VOPAELA_outints,(A_HVEC(EQQAELA,HJCAELA_zero,A68_INT )),(A_HVEC(EQQAELA,HJCAELA_zero,A68_INT ),(VOPAELA_outints).nonlocals));
} 
break;
case 2: /* REF STRUCT(REF MODE198,INT,MODE172)  */
FQQAELA_n = (AQQAELA.data.mode2);
 /* line 1390: */
{ 
A_CALLPROC(WOPAELA_outid,((*(&((*(&(FQQAELA_n->Idinfo)))->Id)))),((*(&((*(&(FQQAELA_n->Idinfo)))->Id))),(WOPAELA_outid).nonlocals));
 /* line 1391: */
GQQAELA.data[0] = MLCAELA_dummy;
GQQAELA.data[1] = (*(&(FQQAELA_n->Typeno)));
GQQAELA.data[2] = (*(&((*(&(PPQAELA_i->Idinfo)))->Vnno)));
A_CALLPROC(VOPAELA_outints,(A_HISVEC(HQQAELA,GQQAELA,3,A68_INT )),(A_HISVEC(HQQAELA,GQQAELA,3,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1392: */
HLQAELA_loadtype(ZPQAELA_exttype, A68_TRUE, A68_TRUE, A68_FALSE);
 /* line 1393: */
 /* line 1394: */
 /* line 1395: */
A_CALLPROC(VOPAELA_outints,(A_HVEC(IQQAELA,HJCAELA_zero,A68_INT )),(A_HVEC(IQQAELA,HJCAELA_zero,A68_INT ),(VOPAELA_outints).nonlocals));
} 
break;
case 10: /* STRUCT(INT)  */
JQQAELA_f = (AQQAELA.data.mode10);
 /* line 1397: */
 /* line 1398: */
/*SKIP*/;
break;
default: 
 /* line 1399: */
 /* line 1400: */
 /* line 1401: */
UQPAELA_fault(0, A_HVEC(MQQAELA,LQQAELA,A68_VC ));
break;
} 
} 
break;
default: 
 /* line 1402: */
/*SKIP*/;
break;
} 
} 
 /* line 1403: */
 /* line 1404: */
PPQAELA_i = (*(&(PPQAELA_i->Rest)));
}
 /* line 1405: */
 /* line 1406: */
A_CALLPROC(WOPAELA_outid,(TTCAOST_nullid),(TTCAOST_nullid,(WOPAELA_outid).nonlocals));
} 
A_PROC_EXIT(outexttypes);
return;
} 
#undef NL

A68_VOID  OQQAELA_outstringlist(A68_246 * Strings)
{ 
A68_246 * PQQAELA_data;
A68_246 * QQQAELA_backwards;
A68_INT  RQQAELA_count;
A68_246  SQQAELA;  /* collateral clause result */
A68_246 * TQQAELA;  /* YIELD */
A68_381  UQQAELA;  /* collateral clause result */
A68_32  VQQAELA;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(outstringlist);
 /* line 1410: */
{ 
PQQAELA_data = Strings;
 /* line 1411: */
QQQAELA_backwards = AJPAELA_nilstringlist;
 /* line 1412: */
RQQAELA_count = 0;
 /* line 1413: */
for ( ;; )
{ 
 /* line 1414: */
if ( !((PQQAELA_data!=AJPAELA_nilstringlist)) ) break;
RQQAELA_count+=1;
 /* line 1415: */
SQQAELA.Id = (*(&(PQQAELA_data->Id)));
SQQAELA.Rest = QQQAELA_backwards;
TQQAELA = A_HEAP(A68_246 ) ;
(*TQQAELA) = SQQAELA ;
QQQAELA_backwards = TQQAELA;
 /* line 1416: */
 /* line 1417: */
PQQAELA_data = (*(&(PQQAELA_data->Rest)));
}
 /* line 1418: */
UQQAELA.data[0] = MLCAELA_dummy;
UQQAELA.data[1] = RQQAELA_count;
A_CALLPROC(VOPAELA_outints,(A_HISVEC(VQQAELA,UQQAELA,2,A68_INT )),(A_HISVEC(VQQAELA,UQQAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1419: */
PQQAELA_data = QQQAELA_backwards;
 /* line 1420: */
for ( ;; )
{ 
 /* line 1421: */
if ( !((PQQAELA_data!=AJPAELA_nilstringlist)) ) break;
A_CALLPROC(WOPAELA_outid,((*(&(PQQAELA_data->Id)))),((*(&(PQQAELA_data->Id))),(WOPAELA_outid).nonlocals));
 /* line 1422: */
 /* line 1423: */
PQQAELA_data = (*(&(PQQAELA_data->Rest)));
}
 /* line 1424: */
} 
A_PROC_EXIT(outstringlist);
return;
} 
#undef NL

A68_VOID  XQQAELA_outattrs(A68_170  Attr)
{ 
A68_170  YQQAELA;  /* united object - for case conformity */
A68_32  ZQQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_254 * ARQAELA_an;
A68_381  BRQAELA;  /* collateral clause result */
A68_32  CRQAELA;  /* OPERATORS - istruct -> vector */
A68_258 * DRQAELA_av;
A68_381  ERQAELA;  /* collateral clause result */
A68_32  FRQAELA;  /* OPERATORS - istruct -> vector */
A68_255 * GRQAELA_ad;
A68_32  HRQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_256 * IRQAELA_as;
A68_32  JRQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_256 * KRQAELA_ats;
A68_32  LRQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_257 * MRQAELA_ab;
A68_32  NRQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(outattrs);
 /* line 1427: */
{ 
 /* line 1428: */
YQQAELA = Attr ;
switch ( YQQAELA.mode )
{ 
case 6: /* STRUCT(INT)  */
 /* line 1429: */
A_CALLPROC(VOPAELA_outints,(A_HVEC(ZQQAELA,ZOCAELA_attnull,A68_INT )),(A_HVEC(ZQQAELA,ZOCAELA_attnull,A68_INT ),(VOPAELA_outints).nonlocals));
break;
case 1: /* REF STRUCT(REF MODE198,INT,MODE170)  */
ARQAELA_an = (YQQAELA.data.mode1);
BRQAELA.data[0] = VOCAELA_attid;
BRQAELA.data[1] = (*(&(ARQAELA_an->Attrno)));
 /* line 1430: */
A_CALLPROC(VOPAELA_outints,(A_HISVEC(CRQAELA,BRQAELA,2,A68_INT )),(A_HISVEC(CRQAELA,BRQAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
break;
case 5: /* REF STRUCT(REF MODE245)  */
DRQAELA_av = (YQQAELA.data.mode5);
ERQAELA.data[0] = VOCAELA_attid;
ERQAELA.data[1] = (*(&((*(&(DRQAELA_av->Am)))->Xno)));
 /* line 1431: */
A_CALLPROC(VOPAELA_outints,(A_HISVEC(FRQAELA,ERQAELA,2,A68_INT )),(A_HISVEC(FRQAELA,ERQAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
break;
case 2: /* REF STRUCT(REF MODE26,REF MODE246)  */
GRQAELA_ad = (YQQAELA.data.mode2);
{ 
A_CALLPROC(VOPAELA_outints,(A_HVEC(HRQAELA,WOCAELA_attdata,A68_INT )),(A_HVEC(HRQAELA,WOCAELA_attdata,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1432: */
A_CALLPROC(WOPAELA_outid,((*(&(GRQAELA_ad->Classname)))),((*(&(GRQAELA_ad->Classname))),(WOPAELA_outid).nonlocals));
 /* line 1433: */
 /* line 1434: */
 /* line 1435: */
OQQAELA_outstringlist((*(&(GRQAELA_ad->Data))));
} 
break;
case 3: /* REF STRUCT(MODE170,REF MODE256)  */
IRQAELA_as = (YQQAELA.data.mode3);
{ 
A_CALLPROC(VOPAELA_outints,(A_HVEC(JRQAELA,YOCAELA_attstr,A68_INT )),(A_HVEC(JRQAELA,YOCAELA_attstr,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1436: */
KRQAELA_ats = IRQAELA_as;
 /* line 1437: */
for ( ;; )
{ 
 /* line 1438: */
if ( !((KRQAELA_ats!=MQCAELA_nilattrstr)) ) break;
XQQAELA_outattrs((*(&(KRQAELA_ats->Elem))));
KRQAELA_ats = (*(&(KRQAELA_ats->Rest)));
}
 /* line 1439: */
 /* line 1440: */
 /* line 1441: */
A_CALLPROC(VOPAELA_outints,(A_HVEC(LRQAELA,HJCAELA_zero,A68_INT )),(A_HVEC(LRQAELA,HJCAELA_zero,A68_INT ),(VOPAELA_outints).nonlocals));
} 
break;
case 4: /* REF STRUCT(MODE170)  */
MRQAELA_ab = (YQQAELA.data.mode4);
{ 
A_CALLPROC(VOPAELA_outints,(A_HVEC(NRQAELA,XOCAELA_attbracket,A68_INT )),(A_HVEC(NRQAELA,XOCAELA_attbracket,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1442: */
 /* line 1443: */
 /* line 1444: */
 /* line 1445: */
XQQAELA_outattrs((*(&(MRQAELA_ab->Abracket))));
} 
break;
default: 
 /* line 1446: */
/*SKIP*/;
break;
} 
} 
A_PROC_EXIT(outattrs);
return;
} 
#undef NL

A_STATIC A68_VOID  PRQAELA_outdecattr(A68_171 * Decs)
{ 
A68_171 * QRQAELA_d;
A68_244 * RRQAELA_ids;
A68_170  SRQAELA;  /* united object - for case conformity */
A68_199  TRQAELA;  /* united object - for case conformity */
A68_204 * URQAELA_d;
A68_381  VRQAELA;  /* collateral clause result */
A68_32  WRQAELA;  /* OPERATORS - istruct -> vector */
A68_32  XRQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(outdecattr);
 /* line 1449: */
{ 
QRQAELA_d = Decs;
 /* line 1450: */
for ( ;; )
{ 
 /* line 1451: */
if ( !((QRQAELA_d!=FQCAELA_nildecs)) ) break;
RRQAELA_ids = (*(&(QRQAELA_d->Ids)));
 /* line 1452: */
for ( ;; )
{ 
 /* line 1453: */
if ( !((RRQAELA_ids!=CQCAELA_nilids)) ) break;
 /* line 1454: */
SRQAELA = (*(&(RRQAELA_ids->Attr))) ;
switch ( SRQAELA.mode )
{ 
case 6: /* STRUCT(INT)  */
 /* line 1455: */
/*SKIP*/;
break;
default: 
 /* line 1456: */
TRQAELA = (*(&((*(&(RRQAELA_ids->Idinfo)))->U))) ;
switch ( TRQAELA.mode )
{ 
case 5: /* REF STRUCT(INT,INT,REF MODE209,MODE172,MODE210,MODE210,MODE211,MODE211)  */
URQAELA_d = (TRQAELA.data.mode5);
{ 
VRQAELA.data[0] = MLCAELA_dummy;
VRQAELA.data[1] = (*(&(URQAELA_d->Decno)));
A_CALLPROC(VOPAELA_outints,(A_HISVEC(WRQAELA,VRQAELA,2,A68_INT )),(A_HISVEC(WRQAELA,VRQAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1457: */
 /* line 1458: */
 /* line 1459: */
 /* line 1460: */
XQQAELA_outattrs((*(&(RRQAELA_ids->Attr))));
} 
break;
default: 
/*SKIP*/;
break;
} 
break;
} 
 /* line 1461: */
 /* line 1462: */
RRQAELA_ids = (*(&(RRQAELA_ids->Rest)));
}
 /* line 1463: */
 /* line 1464: */
QRQAELA_d = (*(&(QRQAELA_d->Rest)));
}
 /* line 1465: */
 /* line 1466: */
A_CALLPROC(VOPAELA_outints,(A_HVEC(XRQAELA,HJCAELA_zero,A68_INT )),(A_HVEC(XRQAELA,HJCAELA_zero,A68_INT ),(VOPAELA_outints).nonlocals));
} 
A_PROC_EXIT(outdecattr);
return;
} 
#undef NL

A68_VOID  BSQAELA_outddecs(A68_171 * Decs, A68_BOOL  Inbody, A68_BOOL  Index)
{ 
A68_171 * CSQAELA_d;
A68_244 * DSQAELA_ids;
A68_199  ESQAELA;  /* united object - for case conformity */
A68_204 * FSQAELA_d;
A68_381  GSQAELA;  /* collateral clause result */
A68_32  HSQAELA;  /* OPERATORS - istruct -> vector */
A68_206  ISQAELA_v;
A68_381  JSQAELA;  /* collateral clause result */
A68_32  KSQAELA;  /* OPERATORS - istruct -> vector */
A68_32  LSQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_32  MSQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(outddecs);
 /* line 1469: */
{ 
CSQAELA_d = Decs;
 /* line 1470: */
for ( ;; )
{ 
 /* line 1471: */
if ( !((CSQAELA_d!=FQCAELA_nildecs)) ) break;
HLQAELA_loadtype((*(&(CSQAELA_d->T))), A68_FALSE, A68_FALSE, Index);
 /* line 1472: */
DSQAELA_ids = (*(&(CSQAELA_d->Ids)));
 /* line 1473: */
for ( ;; )
{ 
 /* line 1474: */
if ( !((DSQAELA_ids!=CQCAELA_nilids)) ) break;
 /* line 1475: */
ESQAELA = (*(&((*(&(DSQAELA_ids->Idinfo)))->U))) ;
switch ( ESQAELA.mode )
{ 
case 5: /* REF STRUCT(INT,INT,REF MODE209,MODE172,MODE210,MODE210,MODE211,MODE211)  */
FSQAELA_d = (ESQAELA.data.mode5);
GSQAELA.data[0] = MLCAELA_dummy;
GSQAELA.data[1] = (*(&(FSQAELA_d->Decno)));
 /* line 1476: */
A_CALLPROC(VOPAELA_outints,(A_HISVEC(HSQAELA,GSQAELA,2,A68_INT )),(A_HISVEC(HSQAELA,GSQAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
break;
case 7: /* STRUCT(MODE172,INT)  */
ISQAELA_v = (ESQAELA.data.mode7);
JSQAELA.data[0] = MLCAELA_dummy;
JSQAELA.data[1] = ISQAELA_v.Decno;
 /* line 1477: */
 /* line 1478: */
A_CALLPROC(VOPAELA_outints,(A_HISVEC(KSQAELA,JSQAELA,2,A68_INT )),(A_HISVEC(KSQAELA,JSQAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
break;
default: 
/*SKIP*/;
break;
} 
 /* line 1479: */
A_CALLPROC(WOPAELA_outid,((*(&((*(&(DSQAELA_ids->Idinfo)))->Id)))),((*(&((*(&(DSQAELA_ids->Idinfo)))->Id))),(WOPAELA_outid).nonlocals));
 /* line 1480: */
if ( Inbody )
{ 
XQQAELA_outattrs((*(&(DSQAELA_ids->Attr))));
} 
 /* line 1481: */
 /* line 1482: */
DSQAELA_ids = (*(&(DSQAELA_ids->Rest)));
}
 /* line 1483: */
CSQAELA_d = (*(&(CSQAELA_d->Rest)));
 /* line 1484: */
 /* line 1485: */
A_CALLPROC(VOPAELA_outints,(A_HVEC(LSQAELA,HJCAELA_zero,A68_INT )),(A_HVEC(LSQAELA,HJCAELA_zero,A68_INT ),(VOPAELA_outints).nonlocals));
}
 /* line 1486: */
 /* line 1487: */
A_CALLPROC(VOPAELA_outints,(A_HVEC(MSQAELA,XKCAELA_end,A68_INT )),(A_HVEC(MSQAELA,XKCAELA_end,A68_INT ),(VOPAELA_outints).nonlocals));
} 
A_PROC_EXIT(outddecs);
return;
} 
#undef NL

A68_VOID  QSQAELA_outfndec(A68_167 * Fd, A68_BOOL  Inbody)
{ 
A68_168 * RSQAELA_fi;
A68_BOOL  SSQAELA;  /* optbool result */
A68_BOOL  TSQAELA_external;
A68_BOOL  USQAELA;  /* optbool result */
A68_381  VSQAELA;  /* collateral clause result */
A68_32  WSQAELA;  /* OPERATORS - istruct -> vector */
A68_BOOL  XSQAELA;  /* optbool result */
A68_375  YSQAELA;  /* collateral clause result */
A68_32  ZSQAELA;  /* OPERATORS - istruct -> vector */
A68_381  ATQAELA;  /* collateral clause result */
A68_32  BTQAELA;  /* OPERATORS - istruct -> vector */
A68_32  CTQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  DTQAELA;  /* optbool result */
A68_32  ETQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_381  FTQAELA;  /* collateral clause result */
A68_32  GTQAELA;  /* OPERATORS - istruct -> vector */
A68_32  HTQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  ITQAELA;  /* optbool result */
A68_BOOL  JTQAELA;  /* optbool result */
A68_381  KTQAELA;  /* collateral clause result */
A68_32  LTQAELA;  /* OPERATORS - istruct -> vector */
A68_391  MTQAELA;  /* collateral clause result */
A68_32  NTQAELA;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(outfndec);
 /* line 1492: */
{ 
RSQAELA_fi = (*(&(Fd->Fninfo)));
 /* line 1493: */
SSQAELA = ((*(&(Fd->Sort)))==FXCAELA_outerdec);
if ( SSQAELA )
{SSQAELA = ((*(&(Fd->Fnno)))>1);
}
TSQAELA_external = SSQAELA;
 /* line 1494: */
USQAELA = Inbody;
if ( ! USQAELA )
{ /* line 1495: */
USQAELA = ((*(&(Fd->Fnno)))>1);
}
if ( USQAELA )
{ 
VSQAELA.data[0] = YKCAELA_fnstart;
VSQAELA.data[1] = (*(&(Fd->Fnno)));
 /* line 1496: */
A_CALLPROC(VOPAELA_outints,(A_HISVEC(WSQAELA,VSQAELA,2,A68_INT )),(A_HISVEC(WSQAELA,VSQAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
} 
 /* line 1497: */
 /* line 1498: */
XSQAELA = ((*(&(Fd->Sort)))==HXCAELA_macpardec);
if ( XSQAELA )
{XSQAELA = !Inbody;
}
if ( XSQAELA )
{ 
 /* line 1499: */
A_CALLPROC(WOPAELA_outid,(TTCAOST_nullid),(TTCAOST_nullid,(WOPAELA_outid).nonlocals));
} 
else
{ 
 /* line 1500: */
A_CALLPROC(WOPAELA_outid,((*(&(Fd->Id)))),((*(&(Fd->Id))),(WOPAELA_outid).nonlocals));
} 
 /* line 1501: */
YSQAELA.data[0] = MLCAELA_dummy;
YSQAELA.data[1] = (*(&(Fd->Sort)));
YSQAELA.data[2] = ((*(&(Fd->Macro))));
A_CALLPROC(VOPAELA_outints,(A_HISVEC(ZSQAELA,YSQAELA,3,A68_INT )),(A_HISVEC(ZSQAELA,YSQAELA,3,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1502: */
 /* line 1503: */
if ( TSQAELA_external )
{ 
ATQAELA.data[0] = MLCAELA_dummy;
ATQAELA.data[1] = 0;
 /* line 1504: */
A_CALLPROC(VOPAELA_outints,(A_HISVEC(BTQAELA,ATQAELA,2,A68_INT )),(A_HISVEC(BTQAELA,ATQAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
} 
else
{ 
 /* line 1505: */
A_CALLPROC(NSQAELA_outmacspec,((*(&(Fd->Mp))), Inbody),((*(&(Fd->Mp))), Inbody,(NSQAELA_outmacspec).nonlocals));
} 
 /* line 1506: */
 /* line 1507: */
if ( Inbody )
{ 
 /* line 1508: */
XQQAELA_outattrs((*(&(Fd->Attr))));
} 
else
{ 
 /* line 1509: */
A_CALLPROC(VOPAELA_outints,(A_HVEC(CTQAELA,ZOCAELA_attnull,A68_INT )),(A_HVEC(CTQAELA,ZOCAELA_attnull,A68_INT ),(VOPAELA_outints).nonlocals));
} 
 /* line 1510: */
DTQAELA = Inbody;
if ( DTQAELA )
{ /* line 1511: */
DTQAELA = ((*(&(Fd->Sort)))==FXCAELA_outerdec);
}
if ( DTQAELA )
{ 
A_CALLPROC(VOPAELA_outints,(A_HVEC(ETQAELA,RNCAELA_brief,A68_INT )),(A_HVEC(ETQAELA,RNCAELA_brief,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1512: */
PRQAELA_outdecattr((*(&(Fd->Inputs))));
 /* line 1513: */
PRQAELA_outdecattr((*(&(Fd->Outputs))));
 /* line 1514: */
FTQAELA.data[0] = MLCAELA_dummy;
FTQAELA.data[1] = (*(&((*(&(Fd->Fninfo)))->Vnno)));
 /* line 1515: */
A_CALLPROC(VOPAELA_outints,(A_HISVEC(GTQAELA,FTQAELA,2,A68_INT )),(A_HISVEC(GTQAELA,FTQAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
} 
else
{ 
A_CALLPROC(VOPAELA_outints,(A_HVEC(HTQAELA,QNCAELA_normalfn,A68_INT )),(A_HVEC(HTQAELA,QNCAELA_normalfn,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1516: */
BSQAELA_outddecs((*(&(Fd->Inputs))), Inbody, TSQAELA_external);
 /* line 1517: */
 /* line 1519: */
BSQAELA_outddecs((*(&(Fd->Outputs))), Inbody, TSQAELA_external);
} 
 /* line 1520: */
ITQAELA = TSQAELA_external;
if ( ! ITQAELA )
{JTQAELA = ((*(&(Fd->Sort)))==HXCAELA_macpardec);
if ( JTQAELA )
{JTQAELA = !Inbody;
}
 /* line 1521: */
ITQAELA = JTQAELA;
}
if ( ITQAELA )
{ 
KTQAELA.data[0] = ZKCAELA_fnend;
KTQAELA.data[1] = 0;
 /* line 1522: */
A_CALLPROC(VOPAELA_outints,(A_HISVEC(LTQAELA,KTQAELA,2,A68_INT )),(A_HISVEC(LTQAELA,KTQAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
} 
else
{ 
 /* line 1523: */
if ( ((*(&(Fd->Sort)))==HXCAELA_macpardec) )
{ 
MTQAELA.data[0] = ZKCAELA_fnend;
MTQAELA.data[1] = (*(&(Fd->Fnno)));
MTQAELA.data[2] = (*(&(Fd->Num_names)));
MTQAELA.data[3] = 0;
 /* line 1524: */
 /* line 1525: */
A_CALLPROC(VOPAELA_outints,(A_HISVEC(NTQAELA,MTQAELA,4,A68_INT )),(A_HISVEC(NTQAELA,MTQAELA,4,A68_INT ),(VOPAELA_outints).nonlocals));
} 
} 
} 
A_PROC_EXIT(outfndec);
return;
} 
#undef NL

A68_VOID  PTQAELA_outextfns(A68_166 * Fns)
{ 
A68_166 * QTQAELA_f;
A68_168 * RTQAELA_fi;
A68_375  STQAELA;  /* collateral clause result */
A68_32  TTQAELA;  /* OPERATORS - istruct -> vector */
A68_INT * UTQAELA;  /* YIELD */
A68_INT * VTQAELA;  /* YIELD */
A68_32  WTQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(outextfns);
 /* line 1529: */
{ 
QTQAELA_f = Fns;
 /* line 1530: */
for ( ;; )
{ 
 /* line 1531: */
if ( !((QTQAELA_f!=HQCAELA_nilfns)) ) break;
RTQAELA_fi = (*(&((*(&(QTQAELA_f->Fndec)))->Fninfo)));
 /* line 1532: */
 /* line 1533: */
if ( ((*(&(RTQAELA_fi->Scope)))==0) )
{ 
QSQAELA_outfndec((*(&(QTQAELA_f->Fndec))), A68_FALSE);
 /* line 1534: */
STQAELA.data[0] = MLCAELA_dummy;
STQAELA.data[1] = (*(&(RTQAELA_fi->Vnno)));
STQAELA.data[2] = ((*(&(RTQAELA_fi->Import))));
A_CALLPROC(VOPAELA_outints,(A_HISVEC(TTQAELA,STQAELA,3,A68_INT )),(A_HISVEC(TTQAELA,STQAELA,3,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1535: */
UTQAELA = (&(RTQAELA_fi->Scope)) ;
(*UTQAELA) = (-1);
 /* line 1536: */
VTQAELA = (&((*(&(QTQAELA_f->Fndec)))->Fnno)) ;
(*VTQAELA) = (-1);
} 
 /* line 1537: */
 /* line 1538: */
QTQAELA_f = (*(&(QTQAELA_f->Rest)));
}
 /* line 1539: */
 /* line 1540: */
A_CALLPROC(VOPAELA_outints,(A_HVEC(WTQAELA,HJCAELA_zero,A68_INT )),(A_HVEC(WTQAELA,HJCAELA_zero,A68_INT ),(VOPAELA_outints).nonlocals));
} 
A_PROC_EXIT(outextfns);
return;
} 
#undef NL

A68_VOID  YTQAELA_num_names_extfns(A68_166 * Fns)
{ 
A68_166 * ZTQAELA_f;
A68_167 * AUQAELA_fd;
A68_199  BUQAELA;  /* united object - for case conformity */
A68_204 * CUQAELA_d;
A68_391  DUQAELA;  /* collateral clause result */
A68_32  EUQAELA;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(num_names_extfns);
 /* line 1543: */
{ 
ZTQAELA_f = Fns;
 /* line 1544: */
for ( ;; )
{ 
 /* line 1545: */
if ( !((ZTQAELA_f!=HQCAELA_nilfns)) ) break;
AUQAELA_fd = (*(&(ZTQAELA_f->Fndec)));
 /* line 1546: */
 /* line 1547: */
 /* line 1548: */
if ( ((*(&((*(&(AUQAELA_fd->Fninfo)))->Scope)))==0) )
{ 
 /* line 1549: */
BUQAELA = (*(&((*(&((*(&((*(&(AUQAELA_fd->Outputs)))->Ids)))->Idinfo)))->U))) ;
switch ( BUQAELA.mode )
{ 
case 5: /* REF STRUCT(INT,INT,REF MODE209,MODE172,MODE210,MODE210,MODE211,MODE211)  */
CUQAELA_d = (BUQAELA.data.mode5);
 /* line 1550: */
DUQAELA.data[0] = ZKCAELA_fnend;
DUQAELA.data[1] = (-(*(&(AUQAELA_fd->Fnno))));
DUQAELA.data[2] = (*(&(CUQAELA_d->Decno)));
DUQAELA.data[3] = 0;
 /* line 1551: */
 /* line 1552: */
A_CALLPROC(VOPAELA_outints,(A_HISVEC(EUQAELA,DUQAELA,4,A68_INT )),(A_HISVEC(EUQAELA,DUQAELA,4,A68_INT ),(VOPAELA_outints).nonlocals));
break;
default: 
 /* line 1553: */
/*SKIP*/;
break;
} 
} 
 /* line 1554: */
 /* line 1555: */
ZTQAELA_f = (*(&(ZTQAELA_f->Rest)));
}
 /* line 1556: */
} 
A_PROC_EXIT(num_names_extfns);
return;
} 
#undef NL

A68_VOID  HUQAELA_loadctype(A68_222  Ct)
{ 
A68_228 * IUQAELA_cst1;
A68_229 * JUQAELA_calts;
A68_394  LUQAELA_ptypeno;   /* proc value of non-global proc */
A68_394  XUQAELA_pcnulltypeno;   /* proc value of non-global proc */
A68_395  KVQAELA_pctypeno;   /* proc value of non-global proc */
A68_222  BWQAELA;  /* united object - for case conformity */
A68_223 * CWQAELA_cn;
A68_381  DWQAELA;  /* collateral clause result */
A68_32  EWQAELA;  /* OPERATORS - istruct -> vector */
A68_224 * FWQAELA_cpr;
A68_381  GWQAELA;  /* collateral clause result */
A68_32  HWQAELA;  /* OPERATORS - istruct -> vector */
A68_185  IWQAELA;  /* avoid structure result */
A68_185 * JWQAELA;  /* YIELD */
A68_185  KWQAELA;  /* avoid structure result */
A68_185 * LWQAELA;  /* YIELD */
A68_225 * MWQAELA_cpi;
A68_381  NWQAELA;  /* collateral clause result */
A68_32  OWQAELA;  /* OPERATORS - istruct -> vector */
A68_185  PWQAELA;  /* avoid structure result */
A68_185 * QWQAELA;  /* YIELD */
A68_203 * RWQAELA_p;
A68_375  SWQAELA;  /* collateral clause result */
A68_32  TWQAELA;  /* OPERATORS - istruct -> vector */
A68_226 * UWQAELA_cu;
A68_381  VWQAELA;  /* collateral clause result */
A68_32  WWQAELA;  /* OPERATORS - istruct -> vector */
A68_381  XWQAELA;  /* collateral clause result */
A68_32  YWQAELA;  /* OPERATORS - istruct -> vector */
A68_227 * ZWQAELA_cr;
A68_32  AXQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_185  BXQAELA;  /* avoid structure result */
A68_185 * CXQAELA;  /* YIELD */
A68_228 * DXQAELA_cs;
A68_32  EXQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_32  FXQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_229 * GXQAELA_ca;
A68_32  HXQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_32  IXQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_230 * JXQAELA_cn;
A68_32  KXQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_232 * LXQAELA_cq;
A68_32  MXQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_231 * NXQAELA_cb;
A68_32  OXQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_183  PXQAELA_u;
A68_234 * QXQAELA_ch;
A68_381  RXQAELA;  /* collateral clause result */
A68_32  SXQAELA;  /* OPERATORS - istruct -> vector */
A68_31  UXQAELA_generator;   /* proc value of non-global proc */
A68_VC  ZXQAELA;  /* avoid structure result */
A68_VC  AYQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  BYQAELA;  /* OPERATORS - assign op */
A68_233 * CYQAELA_cs;
A68_381  DYQAELA;  /* collateral clause result */
A68_32  EYQAELA;  /* OPERATORS - istruct -> vector */
A68_32  FYQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_185  GYQAELA;  /* avoid structure result */
A68_185 * HYQAELA;  /* YIELD */
A68_235 * IYQAELA_cr;
A68_381  JYQAELA;  /* collateral clause result */
A68_32  KYQAELA;  /* OPERATORS - istruct -> vector */
A68_31  MYQAELA_generator;   /* proc value of non-global proc */
A68_VC  RYQAELA;  /* avoid structure result */
A68_VC  SYQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  TYQAELA;  /* OPERATORS - assign op */
A68_31  VYQAELA_generator;   /* proc value of non-global proc */
A68_VC  AZQAELA;  /* avoid structure result */
A68_VC  BZQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  CZQAELA;  /* OPERATORS - assign op */
A68_236 * DZQAELA_cv;
A68_381  EZQAELA;  /* collateral clause result */
A68_32  FZQAELA;  /* OPERATORS - istruct -> vector */
A68_238 * GZQAELA_ci;
A68_32  HZQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_185  IZQAELA;  /* avoid structure result */
A68_185 * JZQAELA;  /* YIELD */
A68_239 * KZQAELA_ct;
A68_32  LZQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_185  MZQAELA;  /* avoid structure result */
A68_185 * NZQAELA;  /* YIELD */
A68_185  OZQAELA;  /* avoid structure result */
A68_185 * PZQAELA;  /* YIELD */
A68_241 * QZQAELA_cp;
A68_193 * RZQAELA_rp;
A68_381  SZQAELA;  /* collateral clause result */
A68_32  TZQAELA;  /* OPERATORS - istruct -> vector */
A68_185  UZQAELA;  /* avoid structure result */
A68_185 * VZQAELA;  /* YIELD */
A68_185  WZQAELA;  /* avoid structure result */
A68_185 * XZQAELA;  /* YIELD */
A68_240 * YZQAELA_cd;
A68_32  ZZQAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_185  AARAELA;  /* avoid structure result */
A68_185 * BARAELA;  /* YIELD */
A68_242 * CARAELA_cn;
A68_375  DARAELA;  /* collateral clause result */
A68_32  EARAELA;  /* OPERATORS - istruct -> vector */
A68_243 * FARAELA_ca;
A68_32  GARAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_32  HARAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_182  IARAELA_f;
A68_46  LARAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(loadctype);
 /* line 1562: */
{ 
 /* line 1564: */
A_CLOSURE( LUQAELA_ptypeno, MUQAELA_ptypeno, NUQAELA_ptypeno );
(( NUQAELA_ptypeno * ) ( LUQAELA_ptypeno.nonlocals )) -> LUQAELA_ptypeno = LUQAELA_ptypeno;
 /* line 1572: */
A_CLOSURE( XUQAELA_pcnulltypeno, YUQAELA_pcnulltypeno, ZUQAELA_pcnulltypeno );
(( ZUQAELA_pcnulltypeno * ) ( XUQAELA_pcnulltypeno.nonlocals )) -> XUQAELA_pcnulltypeno = XUQAELA_pcnulltypeno;
 /* line 1583: */
A_CLOSURE( KVQAELA_pctypeno, LVQAELA_pctypeno, MVQAELA_pctypeno );
(( MVQAELA_pctypeno * ) ( KVQAELA_pctypeno.nonlocals )) -> KVQAELA_pctypeno = KVQAELA_pctypeno;
(( MVQAELA_pctypeno * ) ( KVQAELA_pctypeno.nonlocals )) -> LUQAELA_ptypeno = LUQAELA_ptypeno;
(( MVQAELA_pctypeno * ) ( KVQAELA_pctypeno.nonlocals )) -> XUQAELA_pcnulltypeno = XUQAELA_pcnulltypeno;
 /* line 1597: */
 /* line 1598: */
BWQAELA = Ct ;
switch ( BWQAELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE198,INT,MODE222,MODE172)  */
CWQAELA_cn = (BWQAELA.data.mode1);
 /* line 1599: */
DWQAELA.data[0] = IOCAELA_cnamed;
DWQAELA.data[1] = (*(&(CWQAELA_cn->Ctypeno)));
 /* line 1600: */
A_CALLPROC(VOPAELA_outints,(A_HISVEC(EWQAELA,DWQAELA,2,A68_INT )),(A_HISVEC(EWQAELA,DWQAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
break;
case 2: /* REF STRUCT(MODE172,MODE185,MODE185)  */
FWQAELA_cpr = (BWQAELA.data.mode2);
 /* line 1601: */
{ 
GWQAELA.data[0] = ZJCAELA_cprimr;
GWQAELA.data[1] = A_CALLPROC(LUQAELA_ptypeno,((*(&(FWQAELA_cpr->T)))),((*(&(FWQAELA_cpr->T))),(LUQAELA_ptypeno).nonlocals));
A_CALLPROC(VOPAELA_outints,(A_HISVEC(HWQAELA,GWQAELA,2,A68_INT )),(A_HISVEC(HWQAELA,GWQAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1602: */
 /* line 1603: */
if ( MJQAELA_loadint((*(&(FWQAELA_cpr->Lwb))), A68_FALSE) )
{ 
DSDAELA_uncheckedint( (*(&(FWQAELA_cpr->Lwb))), &IWQAELA );
JWQAELA = (&(FWQAELA_cpr->Lwb)) ;
(*JWQAELA) = IWQAELA;
} 
 /* line 1604: */
 /* line 1605: */
if ( MJQAELA_loadint((*(&(FWQAELA_cpr->Upb))), A68_FALSE) )
{ 
 /* line 1606: */
 /* line 1607: */
DSDAELA_uncheckedint( (*(&(FWQAELA_cpr->Upb))), &KWQAELA );
LWQAELA = (&(FWQAELA_cpr->Upb)) ;
(*LWQAELA) = KWQAELA;
} 
} 
break;
case 3: /* REF STRUCT(MODE172,MODE185)  */
MWQAELA_cpi = (BWQAELA.data.mode3);
 /* line 1608: */
{ 
NWQAELA.data[0] = YJCAELA_cprimi;
NWQAELA.data[1] = A_CALLPROC(LUQAELA_ptypeno,((*(&(MWQAELA_cpi->T)))),((*(&(MWQAELA_cpi->T))),(LUQAELA_ptypeno).nonlocals));
A_CALLPROC(VOPAELA_outints,(A_HISVEC(OWQAELA,NWQAELA,2,A68_INT )),(A_HISVEC(OWQAELA,NWQAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1609: */
 /* line 1610: */
if ( MJQAELA_loadint((*(&(MWQAELA_cpi->Index))), A68_FALSE) )
{ 
 /* line 1611: */
 /* line 1612: */
DSDAELA_uncheckedint( (*(&(MWQAELA_cpi->Index))), &PWQAELA );
QWQAELA = (&(MWQAELA_cpi->Index)) ;
(*QWQAELA) = PWQAELA;
} 
} 
break;
case 4: /* REF STRUCT(MODE172,INT)  */
RWQAELA_p = (BWQAELA.data.mode4);
 /* line 1613: */
SWQAELA.data[0] = XJCAELA_cprim;
SWQAELA.data[1] = A_CALLPROC(LUQAELA_ptypeno,((*(&(RWQAELA_p->Type)))),((*(&(RWQAELA_p->Type))),(LUQAELA_ptypeno).nonlocals));
SWQAELA.data[2] = (*(&(RWQAELA_p->Index)));
 /* line 1614: */
A_CALLPROC(VOPAELA_outints,(A_HISVEC(TWQAELA,SWQAELA,3,A68_INT )),(A_HISVEC(TWQAELA,SWQAELA,3,A68_INT ),(VOPAELA_outints).nonlocals));
break;
case 5: /* REF STRUCT(REF MODE203,MODE222)  */
UWQAELA_cu = (BWQAELA.data.mode5);
 /* line 1615: */
{ 
VWQAELA.data[0] = AKCAELA_cprimu;
VWQAELA.data[1] = A_CALLPROC(LUQAELA_ptypeno,((*(&((*(&(UWQAELA_cu->P)))->Type)))),((*(&((*(&(UWQAELA_cu->P)))->Type))),(LUQAELA_ptypeno).nonlocals));
A_CALLPROC(VOPAELA_outints,(A_HISVEC(WWQAELA,VWQAELA,2,A68_INT )),(A_HISVEC(WWQAELA,VWQAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1616: */
XWQAELA.data[0] = MLCAELA_dummy;
XWQAELA.data[1] = (*(&((*(&(UWQAELA_cu->P)))->Index)));
A_CALLPROC(VOPAELA_outints,(A_HISVEC(YWQAELA,XWQAELA,2,A68_INT )),(A_HISVEC(YWQAELA,XWQAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1617: */
 /* line 1618: */
HUQAELA_loadctype((*(&(UWQAELA_cu->Ct))));
} 
break;
case 6: /* REF STRUCT(MODE222,MODE185)  */
ZWQAELA_cr = (BWQAELA.data.mode6);
 /* line 1619: */
{ 
A_CALLPROC(VOPAELA_outints,(A_HVEC(AXQAELA,CKCAELA_crow,A68_INT )),(A_HVEC(AXQAELA,CKCAELA_crow,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1620: */
 /* line 1621: */
if ( MJQAELA_loadint((*(&(ZWQAELA_cr->Size))), A68_FALSE) )
{ 
DSDAELA_uncheckedint( (*(&(ZWQAELA_cr->Size))), &BXQAELA );
CXQAELA = (&(ZWQAELA_cr->Size)) ;
(*CXQAELA) = BXQAELA;
} 
 /* line 1622: */
 /* line 1623: */
 /* line 1624: */
HUQAELA_loadctype((*(&(ZWQAELA_cr->Ct))));
} 
break;
case 7: /* REF STRUCT(MODE222,REF MODE228)  */
DXQAELA_cs = (BWQAELA.data.mode7);
 /* line 1625: */
{ 
IUQAELA_cst1 = DXQAELA_cs;
A_CALLPROC(VOPAELA_outints,(A_HVEC(EXQAELA,BKCAELA_cst,A68_INT )),(A_HVEC(EXQAELA,BKCAELA_cst,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1626: */
for ( ;; )
{ 
 /* line 1627: */
if ( !((IUQAELA_cst1!=KQCAELA_nilcst)) ) break;
HUQAELA_loadctype((*(&(IUQAELA_cst1->Cst))));
IUQAELA_cst1 = (*(&(IUQAELA_cst1->Rest)));
}
 /* line 1628: */
 /* line 1629: */
 /* line 1630: */
A_CALLPROC(VOPAELA_outints,(A_HVEC(FXQAELA,XKCAELA_end,A68_INT )),(A_HVEC(FXQAELA,XKCAELA_end,A68_INT ),(VOPAELA_outints).nonlocals));
} 
break;
case 8: /* REF STRUCT(MODE222,REF MODE229)  */
GXQAELA_ca = (BWQAELA.data.mode8);
 /* line 1631: */
{ 
JUQAELA_calts = GXQAELA_ca;
A_CALLPROC(VOPAELA_outints,(A_HVEC(HXQAELA,EKCAELA_calt,A68_INT )),(A_HVEC(HXQAELA,EKCAELA_calt,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1632: */
for ( ;; )
{ 
 /* line 1633: */
if ( !((JUQAELA_calts!=JQCAELA_nilcalts)) ) break;
HUQAELA_loadctype((*(&(JUQAELA_calts->Calt))));
JUQAELA_calts = (*(&(JUQAELA_calts->Rest)));
}
 /* line 1634: */
 /* line 1635: */
 /* line 1636: */
A_CALLPROC(VOPAELA_outints,(A_HVEC(IXQAELA,XKCAELA_end,A68_INT )),(A_HVEC(IXQAELA,XKCAELA_end,A68_INT ),(VOPAELA_outints).nonlocals));
} 
break;
case 9: /* REF STRUCT(MODE172)  */
JXQAELA_cn = (BWQAELA.data.mode9);
 /* line 1637: */
{ 
A_CALLPROC(VOPAELA_outints,(A_HVEC(KXQAELA,MNCAELA_c_type,A68_INT )),(A_HVEC(KXQAELA,MNCAELA_c_type,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1638: */
HLQAELA_loadtype((*(&(JXQAELA_cn->Ct))), A68_FALSE, A68_FALSE, A68_FALSE);
} 
break;
case 13: /* REF STRUCT(MODE172)  */
LXQAELA_cq = (BWQAELA.data.mode13);
 /* line 1639: */
{ 
A_CALLPROC(VOPAELA_outints,(A_HVEC(MXQAELA,NNCAELA_cquery,A68_INT )),(A_HVEC(MXQAELA,NNCAELA_cquery,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1640: */
HLQAELA_loadtype((*(&(LXQAELA_cq->Querytype))), A68_FALSE, A68_FALSE, A68_FALSE);
} 
break;
case 12: /* REF STRUCT(MODE222)  */
NXQAELA_cb = (BWQAELA.data.mode12);
 /* line 1641: */
{ 
A_CALLPROC(VOPAELA_outints,(A_HVEC(OXQAELA,LMCAELA_cbracket,A68_INT )),(A_HVEC(OXQAELA,LMCAELA_cbracket,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1642: */
HUQAELA_loadctype((*(&(NXQAELA_cb->Cbracket))));
} 
break;
case 11: /* STRUCT(INT)  */
PXQAELA_u = (BWQAELA.data.mode11);
 /* line 1643: */
/*SKIP*/;
break;
case 15: /* REF STRUCT(MODE172,CHAR)  */
QXQAELA_ch = (BWQAELA.data.mode15);
 /* line 1644: */
{ 
RXQAELA.data[0] = BOCAELA_cprimch;
RXQAELA.data[1] = A_CALLPROC(LUQAELA_ptypeno,((*(&(QXQAELA_ch->T)))),((*(&(QXQAELA_ch->T))),(LUQAELA_ptypeno).nonlocals));
A_CALLPROC(VOPAELA_outints,(A_HISVEC(SXQAELA,RXQAELA,2,A68_INT )),(A_HISVEC(SXQAELA,RXQAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1645: */
A_CLOSURE( UXQAELA_generator, VXQAELA_generator, WXQAELA_generator );
 /* line 1646: */
A_CALLPROC(UXQAELA_generator,(A68_FALSE, &ZXQAELA),(A68_FALSE, &ZXQAELA,(UXQAELA_generator).nonlocals));
BYQAELA = A_HVEC(AYQAELA,(*(&(QXQAELA_ch->Char))),A68_CHAR ) ;
A_VASSIGN2(BYQAELA,ZXQAELA,A68_CHAR ) ;
A_CALLPROC(WOPAELA_outid,(ZXQAELA),(ZXQAELA,(WOPAELA_outid).nonlocals));
} 
break;
case 14: /* REF STRUCT(MODE185,MODE222,REF MODE246)  */
CYQAELA_cs = (BWQAELA.data.mode14);
 /* line 1647: */
{ 
 /* line 1648: */
if ( ((*(&(CYQAELA_cs->Strings)))!=AJPAELA_nilstringlist) )
{ 
DYQAELA.data[0] = COCAELA_cprimst;
DYQAELA.data[1] = A_CALLPROC(KVQAELA_pctypeno,((*(&(CYQAELA_cs->Ct)))),((*(&(CYQAELA_cs->Ct))),(KVQAELA_pctypeno).nonlocals));
A_CALLPROC(VOPAELA_outints,(A_HISVEC(EYQAELA,DYQAELA,2,A68_INT )),(A_HISVEC(EYQAELA,DYQAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1649: */
 /* line 1650: */
OQQAELA_outstringlist((*(&(CYQAELA_cs->Strings))));
} 
else
{ 
A_CALLPROC(VOPAELA_outints,(A_HVEC(FYQAELA,AOCAELA_cstring,A68_INT )),(A_HVEC(FYQAELA,AOCAELA_cstring,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1651: */
 /* line 1652: */
if ( MJQAELA_loadint((*(&(CYQAELA_cs->Size))), A68_FALSE) )
{ 
 /* line 1653: */
DSDAELA_uncheckedint( (*(&(CYQAELA_cs->Size))), &GYQAELA );
HYQAELA = (&(CYQAELA_cs->Size)) ;
(*HYQAELA) = GYQAELA;
} 
 /* line 1654: */
 /* line 1655: */
 /* line 1656: */
 /* line 1657: */
HUQAELA_loadctype((*(&(CYQAELA_cs->Ct))));
} 
} 
break;
case 16: /* REF STRUCT(MODE172,CHAR,CHAR)  */
IYQAELA_cr = (BWQAELA.data.mode16);
 /* line 1658: */
{ 
JYQAELA.data[0] = DOCAELA_cprimchr;
JYQAELA.data[1] = A_CALLPROC(LUQAELA_ptypeno,((*(&(IYQAELA_cr->T)))),((*(&(IYQAELA_cr->T))),(LUQAELA_ptypeno).nonlocals));
A_CALLPROC(VOPAELA_outints,(A_HISVEC(KYQAELA,JYQAELA,2,A68_INT )),(A_HISVEC(KYQAELA,JYQAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1659: */
A_CLOSURE( MYQAELA_generator, NYQAELA_generator, OYQAELA_generator );
A_CALLPROC(MYQAELA_generator,(A68_FALSE, &RYQAELA),(A68_FALSE, &RYQAELA,(MYQAELA_generator).nonlocals));
TYQAELA = A_HVEC(SYQAELA,(*(&(IYQAELA_cr->Lwb))),A68_CHAR ) ;
A_VASSIGN2(TYQAELA,RYQAELA,A68_CHAR ) ;
A_CALLPROC(WOPAELA_outid,(RYQAELA),(RYQAELA,(WOPAELA_outid).nonlocals));
 /* line 1660: */
A_CLOSURE( VYQAELA_generator, WYQAELA_generator, XYQAELA_generator );
 /* line 1661: */
 /* line 1662: */
A_CALLPROC(VYQAELA_generator,(A68_FALSE, &AZQAELA),(A68_FALSE, &AZQAELA,(VYQAELA_generator).nonlocals));
CZQAELA = A_HVEC(BZQAELA,(*(&(IYQAELA_cr->Upb))),A68_CHAR ) ;
A_VASSIGN2(CZQAELA,AZQAELA,A68_CHAR ) ;
A_CALLPROC(WOPAELA_outid,(AZQAELA),(AZQAELA,(WOPAELA_outid).nonlocals));
} 
break;
case 17: /* REF STRUCT(REF MODE245,MODE172)  */
DZQAELA_cv = (BWQAELA.data.mode17);
EZQAELA.data[0] = MOCAELA_cparam;
EZQAELA.data[1] = (*(&((*(&(DZQAELA_cv->Cm)))->Xno)));
 /* line 1663: */
A_CALLPROC(VOPAELA_outints,(A_HISVEC(FZQAELA,EZQAELA,2,A68_INT )),(A_HISVEC(FZQAELA,EZQAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
break;
case 19: /* REF STRUCT(MODE222,MODE185)  */
GZQAELA_ci = (BWQAELA.data.mode19);
 /* line 1664: */
{ 
A_CALLPROC(VOPAELA_outints,(A_HVEC(HZQAELA,ANCAELA_cindex,A68_INT )),(A_HVEC(HZQAELA,ANCAELA_cindex,A68_INT ),(VOPAELA_outints).nonlocals));
HUQAELA_loadctype((*(&(GZQAELA_ci->Ct))));
 /* line 1665: */
 /* line 1666: */
if ( MJQAELA_loadint((*(&(GZQAELA_ci->Index))), A68_FALSE) )
{ 
 /* line 1667: */
 /* line 1668: */
DSDAELA_uncheckedint( (*(&(GZQAELA_ci->Index))), &IZQAELA );
JZQAELA = (&(GZQAELA_ci->Index)) ;
(*JZQAELA) = IZQAELA;
} 
} 
break;
case 20: /* REF STRUCT(MODE222,MODE185,MODE185)  */
KZQAELA_ct = (BWQAELA.data.mode20);
 /* line 1669: */
{ 
A_CALLPROC(VOPAELA_outints,(A_HVEC(LZQAELA,BNCAELA_ctrim,A68_INT )),(A_HVEC(LZQAELA,BNCAELA_ctrim,A68_INT ),(VOPAELA_outints).nonlocals));
HUQAELA_loadctype((*(&(KZQAELA_ct->Ct))));
 /* line 1670: */
if ( MJQAELA_loadint((*(&(KZQAELA_ct->Lwb))), A68_FALSE) )
{ 
DSDAELA_uncheckedint( (*(&(KZQAELA_ct->Lwb))), &MZQAELA );
NZQAELA = (&(KZQAELA_ct->Lwb)) ;
(*NZQAELA) = MZQAELA;
} 
 /* line 1671: */
if ( MJQAELA_loadint((*(&(KZQAELA_ct->Upb))), A68_FALSE) )
{ 
 /* line 1672: */
 /* line 1673: */
DSDAELA_uncheckedint( (*(&(KZQAELA_ct->Upb))), &OZQAELA );
PZQAELA = (&(KZQAELA_ct->Upb)) ;
(*PZQAELA) = OZQAELA;
} 
} 
break;
case 22: /* REF STRUCT(REF MODE244,MODE222)  */
QZQAELA_cp = (BWQAELA.data.mode22);
 /* line 1674: */
{ 
RZQAELA_rp = KTDAELA_get_intvarmult((*(&(QZQAELA_cp->Ids))));
 /* line 1675: */
SZQAELA.data[0] = CNCAELA_cvarmult;
SZQAELA.data[1] = (*(&(RZQAELA_rp->Varmultno)));
A_CALLPROC(VOPAELA_outints,(A_HISVEC(TZQAELA,SZQAELA,2,A68_INT )),(A_HISVEC(TZQAELA,SZQAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1676: */
A_CALLPROC(WOPAELA_outid,((*(&((*(&((*(&(QZQAELA_cp->Ids)))->Idinfo)))->Id)))),((*(&((*(&((*(&(QZQAELA_cp->Ids)))->Idinfo)))->Id))),(WOPAELA_outid).nonlocals));
 /* line 1677: */
XQQAELA_outattrs((*(&((*(&(QZQAELA_cp->Ids)))->Attr))));
 /* line 1678: */
if ( MJQAELA_loadint((*(&(RZQAELA_rp->Lwb))), A68_FALSE) )
{ 
DSDAELA_uncheckedint( (*(&(RZQAELA_rp->Lwb))), &UZQAELA );
VZQAELA = (&(RZQAELA_rp->Lwb)) ;
(*VZQAELA) = UZQAELA;
} 
 /* line 1679: */
if ( MJQAELA_loadint((*(&(RZQAELA_rp->Upb))), A68_FALSE) )
{ 
DSDAELA_uncheckedint( (*(&(RZQAELA_rp->Upb))), &WZQAELA );
XZQAELA = (&(RZQAELA_rp->Upb)) ;
(*XZQAELA) = WZQAELA;
} 
 /* line 1680: */
 /* line 1681: */
 /* line 1682: */
HUQAELA_loadctype((*(&(QZQAELA_cp->Ct))));
} 
break;
case 21: /* REF STRUCT(MODE185,MODE222,MODE222)  */
YZQAELA_cd = (BWQAELA.data.mode21);
 /* line 1683: */
{ 
A_CALLPROC(VOPAELA_outints,(A_HVEC(ZZQAELA,DNCAELA_cif,A68_INT )),(A_HVEC(ZZQAELA,DNCAELA_cif,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1684: */
if ( MJQAELA_loadint((*(&(YZQAELA_cd->Test))), A68_FALSE) )
{ 
DSDAELA_uncheckedint( (*(&(YZQAELA_cd->Test))), &AARAELA );
BARAELA = (&(YZQAELA_cd->Test)) ;
(*BARAELA) = AARAELA;
} 
 /* line 1685: */
HUQAELA_loadctype((*(&(YZQAELA_cd->Then))));
 /* line 1686: */
 /* line 1687: */
HUQAELA_loadctype((*(&(YZQAELA_cd->Else))));
} 
break;
case 23: /* REF STRUCT(BOOL,INT,MODE222,MODE222)  */
CARAELA_cn = (BWQAELA.data.mode23);
 /* line 1688: */
{ 
DARAELA.data[0] = AMCAELA_cconc;
DARAELA.data[1] = ((*(&(CARAELA_cn->String))));
DARAELA.data[2] = (*(&(CARAELA_cn->Sort)));
A_CALLPROC(VOPAELA_outints,(A_HISVEC(EARAELA,DARAELA,3,A68_INT )),(A_HISVEC(EARAELA,DARAELA,3,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1689: */
HUQAELA_loadctype((*(&(CARAELA_cn->Left))));
 /* line 1690: */
 /* line 1691: */
HUQAELA_loadctype((*(&(CARAELA_cn->Right))));
} 
break;
case 24: /* REF STRUCT(MODE222,MODE170)  */
FARAELA_ca = (BWQAELA.data.mode24);
 /* line 1692: */
{ 
A_CALLPROC(VOPAELA_outints,(A_HVEC(GARAELA,BMCAELA_cattr,A68_INT )),(A_HVEC(GARAELA,BMCAELA_cattr,A68_INT ),(VOPAELA_outints).nonlocals));
HUQAELA_loadctype((*(&(FARAELA_ca->Ct))));
 /* line 1693: */
XQQAELA_outattrs((*(&(FARAELA_ca->Attr))));
} 
break;
case 18: /* STRUCT(INT)  */
 /* line 1694: */
A_CALLPROC(VOPAELA_outints,(A_HVEC(HARAELA,LOCAELA_cvoid,A68_INT )),(A_HVEC(HARAELA,LOCAELA_cvoid,A68_INT ),(VOPAELA_outints).nonlocals));
break;
case 10: /* STRUCT(INT)  */
IARAELA_f = (BWQAELA.data.mode10);
 /* line 1695: */
/*SKIP*/;
break;
default: 
 /* line 1696: */
 /* line 1697: */
UQPAELA_fault(0, A_HVEC(LARAELA,KARAELA,A68_VC ));
break;
} 
} 
A_PROC_EXIT(loadctype);
return;
} 
#undef NL

A_STATIC A68_VOID  PARAELA_outmacinfo(A68_245 * Mi, A68_INT  Macsort, A68_BOOL  All)
{ 
A68_381  QARAELA;  /* collateral clause result */
A68_32  RARAELA;  /* OPERATORS - istruct -> vector */
A68_32  SARAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_381  TARAELA;  /* collateral clause result */
A68_32  UARAELA;  /* OPERATORS - istruct -> vector */
A68_32  VARAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(outmacinfo);
 /* line 1701: */
{ 
QARAELA.data[0] = MLCAELA_dummy;
QARAELA.data[1] = (*(&(Mi->Sort)));
A_CALLPROC(VOPAELA_outints,(A_HISVEC(RARAELA,QARAELA,2,A68_INT )),(A_HISVEC(RARAELA,QARAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1702: */
A_CALLPROC(VOPAELA_outints,(A_HVEC(SARAELA,Macsort,A68_INT )),(A_HVEC(SARAELA,Macsort,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1703: */
if ( All )
{ 
A_CALLPROC(WOPAELA_outid,((*(&(Mi->Id)))),((*(&(Mi->Id))),(WOPAELA_outid).nonlocals));
} 
else
{ 
A_CALLPROC(WOPAELA_outid,(TTCAOST_nullid),(TTCAOST_nullid,(WOPAELA_outid).nonlocals));
} 
 /* line 1704: */
TARAELA.data[0] = MLCAELA_dummy;
TARAELA.data[1] = (*(&(Mi->Xno)));
A_CALLPROC(VOPAELA_outints,(A_HISVEC(UARAELA,TARAELA,2,A68_INT )),(A_HISVEC(UARAELA,TARAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1705: */
 /* line 1706: */
if ( (Macsort!=UOCAELA_attrname) )
{ 
if ( All )
{ 
XQQAELA_outattrs((*(&(Mi->Attr))));
} 
else
{ 
 /* line 1707: */
 /* line 1708: */
A_CALLPROC(VOPAELA_outints,(A_HVEC(VARAELA,ZOCAELA_attnull,A68_INT )),(A_HVEC(VARAELA,ZOCAELA_attnull,A68_INT ),(VOPAELA_outints).nonlocals));
} 
} 
} 
A_PROC_EXIT(outmacinfo);
return;
} 
#undef NL

A_STATIC A68_VOID  YARAELA_anonymous(A68_169 * Mps, A68_BOOL  All)
{ 
A68_169 * ZARAELA_m;
A68_INT  ABRAELA_num;
A68_381  BBRAELA;  /* collateral clause result */
A68_32  CBRAELA;  /* OPERATORS - istruct -> vector */
A68_260  DBRAELA;  /* united object - for case conformity */
A68_258 * EBRAELA_av;
A68_32  FBRAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_189 * GBRAELA_iv;
A68_185  HBRAELA;  /* OPERATORS - mode -> union mode */
A68_176 * IBRAELA_tv;
A68_236 * JBRAELA_cv;
A68_230  KBRAELA_cn;
A68_172 * LBRAELA;  /* YIELD */
A68_222  MBRAELA;  /* OPERATORS - mode -> union mode */
A68_167 * NBRAELA_fd;
A68_381  OBRAELA;  /* collateral clause result */
A68_32  PBRAELA;  /* OPERATORS - istruct -> vector */
 /* line 1711: */
{ 
ZARAELA_m = Mps;
 /* line 1712: */
ABRAELA_num = 0;
 /* line 1713: */
for ( ;; )
{ 
if ( !((ZARAELA_m!=IQCAELA_nilmparams)) ) break;
ABRAELA_num+=1;
ZARAELA_m = (*(&(ZARAELA_m->Rest)));
}
 /* line 1714: */
BBRAELA.data[0] = MLCAELA_dummy;
BBRAELA.data[1] = ABRAELA_num;
A_CALLPROC(VOPAELA_outints,(A_HISVEC(CBRAELA,BBRAELA,2,A68_INT )),(A_HISVEC(CBRAELA,BBRAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1715: */
ZARAELA_m = Mps;
 /* line 1716: */
for ( ;; )
{ 
 /* line 1717: */
if ( !((ZARAELA_m!=IQCAELA_nilmparams)) ) break;
 /* line 1718: */
DBRAELA = (*(&(ZARAELA_m->Value))) ;
switch ( DBRAELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE245)  */
EBRAELA_av = (DBRAELA.data.mode1);
{ 
PARAELA_outmacinfo((*(&(EBRAELA_av->Am))), UOCAELA_attrname, All);
 /* line 1719: */
 /* line 1720: */
 /* line 1721: */
A_CALLPROC(VOPAELA_outints,(A_HVEC(FBRAELA,ZOCAELA_attnull,A68_INT )),(A_HVEC(FBRAELA,ZOCAELA_attnull,A68_INT ),(VOPAELA_outints).nonlocals));
} 
break;
case 2: /* REF STRUCT(REF MODE245)  */
GBRAELA_iv = (DBRAELA.data.mode2);
{ 
PARAELA_outmacinfo((*(&(GBRAELA_iv->Im))), UNCAELA_intname, All);
 /* line 1722: */
 /* line 1723: */
 /* line 1724: */
MJQAELA_loadint(A_UNITE(HBRAELA,mode14,14,LRCAELA_intnull), A68_FALSE);
} 
break;
case 3: /* REF STRUCT(REF MODE245,MODE172)  */
IBRAELA_tv = (DBRAELA.data.mode3);
{ 
PARAELA_outmacinfo((*(&(IBRAELA_tv->Tm))), DLCAELA_typename, All);
 /* line 1725: */
 /* line 1726: */
 /* line 1727: */
HLQAELA_loadtype((*(&(IBRAELA_tv->T))), A68_TRUE, All, A68_FALSE);
} 
break;
case 4: /* REF STRUCT(REF MODE245,MODE172)  */
JBRAELA_cv = (DBRAELA.data.mode4);
{ 
PARAELA_outmacinfo((*(&(JBRAELA_cv->Cm))), JOCAELA_constname, All);
 /* line 1728: */
LBRAELA = (&((&KBRAELA_cn)->Ct)) ;
(*LBRAELA) = (*(&(JBRAELA_cv->T)));
 /* line 1729: */
 /* line 1730: */
 /* line 1731: */
HUQAELA_loadctype(A_UNITE(MBRAELA,mode9,9,(&KBRAELA_cn)));
} 
break;
case 5: /* REF STRUCT(REF MODE168,INT,INT,BOOL,REF MODE26,INT,REF MODE169,REF REF MODE169,MODE170,REF MODE171,REF MODE171,MODE172,MODE172,INT)  */
NBRAELA_fd = (DBRAELA.data.mode5);
{ 
OBRAELA.data[0] = MLCAELA_dummy;
OBRAELA.data[1] = XWCAELA_expl_par;
A_CALLPROC(VOPAELA_outints,(A_HISVEC(PBRAELA,OBRAELA,2,A68_INT )),(A_HISVEC(PBRAELA,OBRAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1732: */
 /* line 1733: */
 /* line 1734: */
QSQAELA_outfndec(NBRAELA_fd, All);
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 1735: */
 /* line 1736: */
ZARAELA_m = (*(&(ZARAELA_m->Rest)));
}
 /* line 1737: */
} 
return;
} 
#undef NL

A68_VOID  UBRAELA_outfncall(A68_268  Fc, A68_BOOL  Mac_macparam)
{ 
A68_167 * VBRAELA_fd;
A68_381  WBRAELA;  /* collateral clause result */
A68_32  XBRAELA;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(outfncall);
 /* line 1743: */
{ 
VBRAELA_fd = Fc.F;
 /* line 1744: */
 /* line 1745: */
if ( (VBRAELA_fd!=RQCAELA_nilfndec) )
{ 
WBRAELA.data[0] = SNCAELA_inst;
WBRAELA.data[1] = (*(&(VBRAELA_fd->Fnno)));
A_CALLPROC(VOPAELA_outints,(A_HISVEC(XBRAELA,WBRAELA,2,A68_INT )),(A_HISVEC(XBRAELA,WBRAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1746: */
A_CALLPROC(RBRAELA_outmparams,(Fc, Mac_macparam),(Fc, Mac_macparam,(RBRAELA_outmparams).nonlocals));
 /* line 1747: */
 /* line 1748: */
 /* line 1749: */
XQQAELA_outattrs(Fc.Attr);
} 
} 
A_PROC_EXIT(outfncall);
return;
} 
#undef NL

A_STATIC A68_VOID  ACRAELA_anonymous(A68_268  C, A68_BOOL  Mac_macparam)
{ 
A68_167 * BCRAELA_fd;
A68_169 * CCRAELA_m;
A68_269 * DCRAELA_pvals;
A68_BOOL  ECRAELA;  /* optbool result */
A68_381  FCRAELA;  /* collateral clause result */
A68_32  GCRAELA;  /* OPERATORS - istruct -> vector */
A68_INT  HCRAELA_num;
A68_381  ICRAELA;  /* collateral clause result */
A68_32  JCRAELA;  /* OPERATORS - istruct -> vector */
A68_381  KCRAELA;  /* collateral clause result */
A68_32  LCRAELA;  /* OPERATORS - istruct -> vector */
A68_270  MCRAELA;  /* united object - for case conformity */
A68_205  NCRAELA_ad;
A68_200  OCRAELA_id;
A68_185  PCRAELA;  /* avoid structure result */
A68_200  QCRAELA;  /* avoid structure result */
A68_270  RCRAELA;  /* OPERATORS - mode -> union mode */
A68_270 * SCRAELA;  /* YIELD */
A68_201  TCRAELA_td;
A68_202  UCRAELA_cd;
A68_268  VCRAELA_fc;
A68_260  WCRAELA;  /* united object - for case conformity */
A68_167 * XCRAELA_fd;
A68_32  YCRAELA;  /* OPERATORS - scalar -> [] or VEC[] */
 /* line 1752: */
{ 
BCRAELA_fd = C.F;
 /* line 1753: */
CCRAELA_m = (*(&(BCRAELA_fd->Mp)));
 /* line 1754: */
DCRAELA_pvals = C.Pvals;
 /* line 1755: */
 /* line 1756: */
ECRAELA = !(*(&(BCRAELA_fd->Macro)));
if ( ! ECRAELA )
{ECRAELA = Mac_macparam;
}
if ( ECRAELA )
{ 
FCRAELA.data[0] = MLCAELA_dummy;
FCRAELA.data[1] = (-1);
 /* line 1757: */
 /* line 1758: */
A_CALLPROC(VOPAELA_outints,(A_HISVEC(GCRAELA,FCRAELA,2,A68_INT )),(A_HISVEC(GCRAELA,FCRAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
} 
else
{ 
HCRAELA_num = 0;
 /* line 1759: */
for ( ;; )
{ 
 /* line 1760: */
if ( !((DCRAELA_pvals!=BUCAELA_nilparamvals)) ) break;
HCRAELA_num+=1;
DCRAELA_pvals = (*(&(DCRAELA_pvals->Rest)));
}
 /* line 1761: */
ICRAELA.data[0] = MLCAELA_dummy;
ICRAELA.data[1] = HCRAELA_num;
A_CALLPROC(VOPAELA_outints,(A_HISVEC(JCRAELA,ICRAELA,2,A68_INT )),(A_HISVEC(JCRAELA,ICRAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1762: */
DCRAELA_pvals = C.Pvals;
 /* line 1763: */
for ( ;; )
{ 
 /* line 1764: */
if ( !((DCRAELA_pvals!=BUCAELA_nilparamvals)) ) break;
KCRAELA.data[0] = MLCAELA_dummy;
KCRAELA.data[1] = (*(&(CCRAELA_m->Sort)));
A_CALLPROC(VOPAELA_outints,(A_HISVEC(LCRAELA,KCRAELA,2,A68_INT )),(A_HISVEC(LCRAELA,KCRAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 1765: */
 /* line 1766: */
MCRAELA = (*(&(DCRAELA_pvals->Val))) ;
switch ( MCRAELA.mode )
{ 
case 5: /* STRUCT(MODE170)  */
NCRAELA_ad = (MCRAELA.data.mode5);
 /* line 1767: */
XQQAELA_outattrs(NCRAELA_ad.A);
break;
case 1: /* STRUCT(MODE185)  */
OCRAELA_id = (MCRAELA.data.mode1);
 /* line 1768: */
 /* line 1769: */
if ( MJQAELA_loadint(OCRAELA_id.I, A68_FALSE) )
{ 
 /* line 1770: */
 /* line 1771: */
DSDAELA_uncheckedint( OCRAELA_id.I, &PCRAELA );
XKDAELA_makeintid( PCRAELA, &QCRAELA );
SCRAELA = (&(DCRAELA_pvals->Val)) ;
(*SCRAELA) = A_UNITE(RCRAELA,mode1,1,QCRAELA);
} 
break;
case 2: /* STRUCT(MODE172)  */
TCRAELA_td = (MCRAELA.data.mode2);
 /* line 1772: */
HLQAELA_loadtype(TCRAELA_td.T, A68_FALSE, A68_FALSE, A68_FALSE);
break;
case 3: /* STRUCT(MODE222)  */
UCRAELA_cd = (MCRAELA.data.mode3);
 /* line 1773: */
HUQAELA_loadctype(UCRAELA_cd.Ct);
break;
case 4: /* STRUCT(REF MODE167,REF MODE269,REF REF MODE269,MODE170)  */
VCRAELA_fc = (MCRAELA.data.mode4);
 /* line 1774: */
WCRAELA = (*(&(CCRAELA_m->Value))) ;
switch ( WCRAELA.mode )
{ 
case 5: /* REF STRUCT(REF MODE168,INT,INT,BOOL,REF MODE26,INT,REF MODE169,REF REF MODE169,MODE170,REF MODE171,REF MODE171,MODE172,MODE172,INT)  */
XCRAELA_fd = (WCRAELA.data.mode5);
 /* line 1775: */
UBRAELA_outfncall(VCRAELA_fc, (*(&(XCRAELA_fd->Macro))));
break;
default: 
 /* line 1776: */
 /* line 1777: */
 /* line 1778: */
UBRAELA_outfncall(VCRAELA_fc, A68_FALSE);
break;
} 
break;
default: 
/*SKIP*/;
break;
} 
 /* line 1779: */
DCRAELA_pvals = (*(&(DCRAELA_pvals->Rest)));
 /* line 1780: */
 /* line 1781: */
CCRAELA_m = (*(&(CCRAELA_m->Rest)));
}
 /* line 1782: */
} 
 /* line 1783: */
 /* line 1784: */
A_CALLPROC(VOPAELA_outints,(A_HVEC(YCRAELA,HJCAELA_zero,A68_INT )),(A_HVEC(YCRAELA,HJCAELA_zero,A68_INT ),(VOPAELA_outints).nonlocals));
} 
return;
} 
#undef NL

A68_VOID  CDRAELA_simplify(A68_185  I, A68_BOOL  Simp, A68_185  *ReturnedValue)
{ 
A68_185  DDRAELA;  /* clause result */
A68_164  EDRAELA;  /* procedure value */
A68_185  FDRAELA;  /* avoid structure result */
A_PROC_ENTRY(simplify);
 /* line 1787: */
EDRAELA.fn.fn_global = UQPAELA_fault;
EDRAELA.nonlocals = A68_NIL;
MFMAELA_simplify_ext( I, Simp, EDRAELA, &FDRAELA );
DDRAELA = FDRAELA;
A_PROC_EXIT(simplify);
*ReturnedValue = (DDRAELA);
return;
} 
#undef NL

A68_INT  HDRAELA_giveint(A68_185  In)
{ 
A68_185  IDRAELA;  /* united object - for case conformity */
A68_INT  JDRAELA_i;
A68_INT  KDRAELA;  /* clause result */
A68_187 * LDRAELA_it;
A68_188 * MDRAELA_ic;
A68_197  NDRAELA_i;
A68_185  ODRAELA;  /* avoid structure result */
A68_185  PDRAELA;  /* united object - for case conformity */
A68_INT  QDRAELA_i;
A68_188 * RDRAELA_ic;
A_PROC_ENTRY(giveint);
 /* line 1790: */
{ 
 /* line 1791: */
IDRAELA = In ;
switch ( IDRAELA.mode )
{ 
case 1: /* INT */
JDRAELA_i = (IDRAELA.data.mode1);
 /* line 1792: */
KDRAELA = JDRAELA_i;
break;
case 3: /* REF STRUCT(INT,REF MODE26)  */
LDRAELA_it = (IDRAELA.data.mode3);
 /* line 1793: */
KDRAELA = (*(&(LDRAELA_it->Int)));
break;
case 5: /* REF STRUCT(MODE185,MODE185,INT)  */
MDRAELA_ic = (IDRAELA.data.mode5);
 /* line 1794: */
KDRAELA = HDRAELA_giveint((*(&(MDRAELA_ic->Integer))));
break;
case 14: /* STRUCT(INT)  */
NDRAELA_i = (IDRAELA.data.mode14);
 /* line 1795: */
KDRAELA = 0;
break;
default: 
 /* line 1796: */
CDRAELA_simplify( In, A68_TRUE, &ODRAELA );
PDRAELA = ODRAELA ;
switch ( PDRAELA.mode )
{ 
case 1: /* INT */
QDRAELA_i = (PDRAELA.data.mode1);
 /* line 1797: */
KDRAELA = QDRAELA_i;
break;
case 5: /* REF STRUCT(MODE185,MODE185,INT)  */
RDRAELA_ic = (PDRAELA.data.mode5);
 /* line 1798: */
 /* line 1799: */
KDRAELA = HDRAELA_giveint((*(&(RDRAELA_ic->Integer))));
break;
default: 
 /* line 1800: */
KDRAELA = (-1);
break;
} 
break;
} 
} 
A_PROC_EXIT(giveint);
return( KDRAELA );
} 
#undef NL

A68_VOID  TDRAELA_simplify_int(A68_185  In, A68_185  *ReturnedValue)
{ 
A68_185  UDRAELA;  /* united object - for case conformity */
A68_INT  VDRAELA_i;
A68_185  WDRAELA;  /* clause result */
A68_185  XDRAELA;  /* OPERATORS - mode -> union mode */
A68_187 * YDRAELA_it;
A68_185  ZDRAELA;  /* OPERATORS - mode -> union mode */
A68_INT  AERAELA;  /* YIELD */
A68_188 * BERAELA_ic;
A68_185  CERAELA;  /* avoid structure result */
A68_197  DERAELA_i;
A68_185  EERAELA;  /* OPERATORS - mode -> union mode */
A68_INT  FERAELA;  /* YIELD */
A68_185  GERAELA;  /* avoid structure result */
A68_185  HERAELA;  /* united object - for case conformity */
A68_INT  IERAELA_i;
A68_185  JERAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(simplify_int);
 /* line 1804: */
{ 
 /* line 1805: */
UDRAELA = In ;
switch ( UDRAELA.mode )
{ 
case 1: /* INT */
VDRAELA_i = (UDRAELA.data.mode1);
 /* line 1806: */
WDRAELA = A_UNITE(XDRAELA,mode1,1,VDRAELA_i);
break;
case 3: /* REF STRUCT(INT,REF MODE26)  */
YDRAELA_it = (UDRAELA.data.mode3);
 /* line 1807: */
AERAELA = (*(&(YDRAELA_it->Int))) ;
WDRAELA = A_UNITE(ZDRAELA,mode1,1,AERAELA);
break;
case 5: /* REF STRUCT(MODE185,MODE185,INT)  */
BERAELA_ic = (UDRAELA.data.mode5);
 /* line 1808: */
TDRAELA_simplify_int( (*(&(BERAELA_ic->Integer))), &CERAELA );
WDRAELA = CERAELA;
break;
case 14: /* STRUCT(INT)  */
DERAELA_i = (UDRAELA.data.mode14);
 /* line 1809: */
FERAELA = 0 ;
WDRAELA = A_UNITE(EERAELA,mode1,1,FERAELA);
break;
default: 
 /* line 1810: */
CDRAELA_simplify( In, A68_TRUE, &GERAELA );
HERAELA = GERAELA ;
switch ( HERAELA.mode )
{ 
case 1: /* INT */
IERAELA_i = (HERAELA.data.mode1);
 /* line 1811: */
 /* line 1812: */
WDRAELA = A_UNITE(JERAELA,mode1,1,IERAELA_i);
break;
default: 
 /* line 1813: */
WDRAELA = In;
break;
} 
break;
} 
} 
A_PROC_EXIT(simplify_int);
*ReturnedValue = (WDRAELA);
return;
} 
#undef NL

A68_BOOL  LERAELA_isintcheck(A68_185  In)
{ 
A68_185  MERAELA;  /* united object - for case conformity */
A68_188 * NERAELA_ic;
A68_BOOL  OERAELA;  /* clause result */
A_PROC_ENTRY(isintcheck);
 /* line 1817: */
MERAELA = In ;
switch ( MERAELA.mode )
{ 
case 5: /* REF STRUCT(MODE185,MODE185,INT)  */
NERAELA_ic = (MERAELA.data.mode5);
OERAELA = A68_TRUE;
break;
default: 
OERAELA = A68_FALSE;
break;
} 
A_PROC_EXIT(isintcheck);
return( OERAELA );
} 
#undef NL

A68_BOOL  QERAELA_isint(A68_185  In)
{ 
A68_185  RERAELA;  /* united object - for case conformity */
A68_INT  SERAELA_i;
A68_BOOL  TERAELA;  /* clause result */
A68_188 * UERAELA_ic;
A_PROC_ENTRY(isint);
 /* line 1820: */
{ 
 /* line 1821: */
RERAELA = In ;
switch ( RERAELA.mode )
{ 
case 1: /* INT */
SERAELA_i = (RERAELA.data.mode1);
 /* line 1822: */
TERAELA = A68_TRUE;
break;
case 5: /* REF STRUCT(MODE185,MODE185,INT)  */
UERAELA_ic = (RERAELA.data.mode5);
 /* line 1823: */
TERAELA = QERAELA_isint((*(&(UERAELA_ic->Integer))));
break;
default: 
 /* line 1824: */
 /* line 1825: */
TERAELA = A68_FALSE;
break;
} 
} 
A_PROC_EXIT(isint);
return( TERAELA );
} 
#undef NL

A_STATIC A68_VOID  XERAELA_csttorow(A68_228 * Cst, A68_222  *ReturnedValue)
{ 
A68_222  YERAELA_ct;
A68_228 * ZERAELA_rest;
A68_INT  AFRAELA_k;
A68_BOOL  BFRAELA_equal;
A68_BOOL  CFRAELA;  /* optbool result */
A68_227  DFRAELA;  /* collateral clause result */
A68_185  EFRAELA;  /* OPERATORS - mode -> union mode */
A68_222  FFRAELA;  /* clause result */
A68_227 * GFRAELA;  /* YIELD */
A68_222  HFRAELA;  /* OPERATORS - mode -> union mode */
A68_222  IFRAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(csttorow);
 /* line 1831: */
{ 
YERAELA_ct = (*(&(Cst->Cst)));
ZERAELA_rest = (*(&(Cst->Rest)));
AFRAELA_k = 1;
 /* line 1832: */
BFRAELA_equal = A68_TRUE;
 /* line 1833: */
for ( ;; )
{ 
CFRAELA = BFRAELA_equal;
if ( CFRAELA )
{ /* line 1834: */
CFRAELA = (ZERAELA_rest!=KQCAELA_nilcst);
}
if ( !(CFRAELA) ) break;
if ( !A_CALLPROC(VERAELA_ctypeequals,(YERAELA_ct, (*(&(ZERAELA_rest->Cst)))),(YERAELA_ct, (*(&(ZERAELA_rest->Cst))),(VERAELA_ctypeequals).nonlocals)) )
{ 
BFRAELA_equal = A68_FALSE;
} 
 /* line 1835: */
ZERAELA_rest = (*(&(ZERAELA_rest->Rest)));
 /* line 1836: */
AFRAELA_k+=1;
}
 /* line 1837: */
 /* line 1838: */
if ( BFRAELA_equal )
{ 
DFRAELA.Ct = YERAELA_ct;
 /* line 1839: */
DFRAELA.Size = A_UNITE(EFRAELA,mode1,1,AFRAELA_k);
 /* line 1840: */
GFRAELA = A_HEAP(A68_227 ) ;
(*GFRAELA) = DFRAELA ;
FFRAELA = A_UNITE(HFRAELA,mode6,6,GFRAELA);
} 
else
{ 
 /* line 1841: */
FFRAELA = A_UNITE(IFRAELA,mode7,7,Cst);
} 
} 
A_PROC_EXIT(csttorow);
*ReturnedValue = (FFRAELA);
return;
} 
#undef NL

A_STATIC A68_228 * MFRAELA_trimcst(A68_228 * St, A68_INT  F, A68_INT  Size)
{ 
A68_BOOL  NFRAELA;  /* optbool result */
A68_228 * OFRAELA;  /* clause result */
A68_228  PFRAELA;  /* collateral clause result */
A68_228 * QFRAELA;  /* YIELD */
A_PROC_ENTRY(trimcst);
 /* line 1844: */
NFRAELA = (St==KQCAELA_nilcst);
if ( ! NFRAELA )
{NFRAELA = (Size<=0);
}
if ( ! NFRAELA )
{NFRAELA = (F<=0);
}
 /* line 1845: */
if ( NFRAELA )
{ 
OFRAELA = KQCAELA_nilcst;
} 
else
{ 
 /* line 1846: */
if ( (F>1) )
{ 
 /* line 1847: */
OFRAELA = MFRAELA_trimcst((*(&(St->Rest))), (F-1), Size);
} 
else
{ 
PFRAELA.Cst = (*(&(St->Cst)));
 /* line 1848: */
PFRAELA.Rest = MFRAELA_trimcst((*(&(St->Rest))), F, (Size-1));
QFRAELA = A_HEAP(A68_228 ) ;
(*QFRAELA) = PFRAELA ;
OFRAELA = QFRAELA;
} 
} 
A_PROC_EXIT(trimcst);
return( OFRAELA );
} 
#undef NL

A_STATIC A68_BOOL  SFRAELA_stringrow(A68_246 * Sl)
{ 
A68_VC  TFRAELA;  /* OPERATORS - simple index */
A68_INT  UFRAELA;  /* YIELD */
A68_CHAR  VFRAELA_c;
A68_246 * WFRAELA_s;
A68_BOOL  XFRAELA_equal;
A68_BOOL  YFRAELA;  /* optbool result */
A68_CHAR * ZFRAELA_i;
A68_VC  AGRAELA;  /* forall yield */
A68_INT  BGRAELA;  /* forall loop counter */
A68_BOOL  CGRAELA;  /* clause result */
A_PROC_ENTRY(stringrow);
 /* line 1851: */
{ 
TFRAELA = (*(&(Sl->Id))) ;
UFRAELA = 1 ;
VFRAELA_c = (*(&A_VINDEX(TFRAELA,UFRAELA)));
 /* line 1852: */
WFRAELA_s = Sl;
 /* line 1853: */
XFRAELA_equal = A68_TRUE;
 /* line 1854: */
for ( ;; )
{ 
YFRAELA = XFRAELA_equal;
if ( YFRAELA )
{ /* line 1855: */
YFRAELA = (WFRAELA_s!=AJPAELA_nilstringlist);
}
if ( !(YFRAELA) ) break;
AGRAELA = (*(&(WFRAELA_s->Id))) ;
BGRAELA = AGRAELA.upb -1;
ZFRAELA_i = AGRAELA.data;
for (;BGRAELA-- >= 0;
(ZFRAELA_i++
) )
{
 /* line 1856: */
if ( !(XFRAELA_equal) ) break;
if ( ((*ZFRAELA_i)!=VFRAELA_c) )
{ 
XFRAELA_equal = A68_FALSE;
} 
}
 /* line 1857: */
 /* line 1858: */
WFRAELA_s = (*(&(WFRAELA_s->Rest)));
}
 /* line 1859: */
 /* line 1860: */
CGRAELA = XFRAELA_equal;
} 
A_PROC_EXIT(stringrow);
return( CGRAELA );
} 
#undef NL

A_STATIC A68_246 * GGRAELA_trimstrings(A68_246 * Sl, A68_INT  Lwb, A68_INT  Upb)
{ 
A68_INT  HGRAELA;  /* clause result */
A68_INT  IGRAELA_num;
A68_BOOL  JGRAELA;  /* optbool result */
A68_246 * KGRAELA;  /* clause result */
A68_246  LGRAELA;  /* collateral clause result */
A68_VC  MGRAELA;  /* OPERATORS - trim index */
A68_VC  NGRAELA;  /* OPERATORS - trim index */
A68_246 * OGRAELA;  /* YIELD */
A_PROC_ENTRY(trimstrings);
 /* line 1863: */
{ 
if ( (Sl!=AJPAELA_nilstringlist) )
{ 
HGRAELA = (*(&(Sl->Id))).upb;
} 
else
{ 
HGRAELA = (-1);
} 
IGRAELA_num = HGRAELA;
 /* line 1864: */
JGRAELA = (Sl==AJPAELA_nilstringlist);
if ( ! JGRAELA )
{JGRAELA = (Upb<1);
}
 /* line 1865: */
if ( JGRAELA )
{ 
KGRAELA = AJPAELA_nilstringlist;
} 
else
{ 
 /* line 1866: */
if ( (Lwb>IGRAELA_num) )
{ 
 /* line 1867: */
KGRAELA = GGRAELA_trimstrings((*(&(Sl->Rest))), (Lwb-IGRAELA_num), (Upb-IGRAELA_num));
} 
else
{ 
if ( (Upb<IGRAELA_num) )
{ 
IGRAELA_num = Upb;
} 
 /* line 1868: */
 /* line 1869: */
MGRAELA = (*(&(Sl->Id))) ;
LGRAELA.Id = A_VTRIM(NGRAELA,(MGRAELA),A_VTSCRIPT(&(NGRAELA.upb),(MGRAELA).upb,Lwb,IGRAELA_num));
 /* line 1870: */
LGRAELA.Rest = GGRAELA_trimstrings((*(&(Sl->Rest))), 1, (Upb-IGRAELA_num));
 /* line 1871: */
OGRAELA = A_HEAP(A68_246 ) ;
(*OGRAELA) = LGRAELA ;
KGRAELA = OGRAELA;
} 
} 
} 
A_PROC_EXIT(trimstrings);
return( KGRAELA );
} 
#undef NL

A_STATIC A68_VOID  TGRAELA_ctypetrim(A68_222  Ct, A68_185  Trim, A68_185  Offset, A68_222  Original, A68_222  *ReturnedValue)
{ 
A68_222  UGRAELA_ans;
A68_BOOL  VGRAELA_istrim;
A68_222  WGRAELA;  /* united object - for case conformity */
A68_227 * XGRAELA_r;
A68_227  YGRAELA;  /* collateral clause result */
A68_222  ZGRAELA;  /* clause result */
A68_227 * AHRAELA;  /* YIELD */
A68_222  BHRAELA;  /* OPERATORS - mode -> union mode */
A68_233 * CHRAELA_cs;
A68_233  DHRAELA;  /* collateral clause result */
A68_233 * EHRAELA;  /* YIELD */
A68_222  FHRAELA;  /* OPERATORS - mode -> union mode */
A68_185  GHRAELA;  /* avoid structure result */
A68_185  HHRAELA;  /* united object - for case conformity */
A68_INT  IHRAELA_o1;
A68_185  JHRAELA;  /* avoid structure result */
A68_185  KHRAELA;  /* united object - for case conformity */
A68_INT  LHRAELA_t1;
A68_INT  MHRAELA;  /* clause result */
A68_246 * NHRAELA_sl;
A68_233  OHRAELA;  /* collateral clause result */
A68_222  PHRAELA;  /* clause result */
A68_233 * QHRAELA;  /* YIELD */
A68_222  RHRAELA;  /* OPERATORS - mode -> union mode */
A68_234  SHRAELA;  /* collateral clause result */
A68_172  THRAELA;  /* avoid structure result */
A68_VC  UHRAELA;  /* OPERATORS - simple index */
A68_INT  VHRAELA;  /* YIELD */
A68_234 * WHRAELA;  /* YIELD */
A68_222  XHRAELA;  /* OPERATORS - mode -> union mode */
A68_BOOL  YHRAELA;  /* clause result */
A68_234 * ZHRAELA_cc;
A68_234  AIRAELA;  /* collateral clause result */
A68_172  BIRAELA;  /* avoid structure result */
A68_VC  CIRAELA;  /* OPERATORS - simple index */
A68_INT  DIRAELA;  /* YIELD */
A68_233  EIRAELA;  /* collateral clause result */
A68_222  FIRAELA;  /* OPERATORS - mode -> union mode */
A68_233 * GIRAELA;  /* YIELD */
A68_222  HIRAELA;  /* OPERATORS - mode -> union mode */
A68_222  IIRAELA;  /* OPERATORS - mode -> union mode */
A68_228 * JIRAELA_s;
A68_185  KIRAELA;  /* avoid structure result */
A68_185  LIRAELA;  /* united object - for case conformity */
A68_INT  MIRAELA_i1;
A68_185  NIRAELA;  /* avoid structure result */
A68_185  OIRAELA;  /* united object - for case conformity */
A68_INT  PIRAELA_s1;
A68_INT  QIRAELA;  /* clause result */
A68_228 * RIRAELA_cst;
A68_222  SIRAELA;  /* clause result */
A68_222  TIRAELA;  /* OPERATORS - mode -> union mode */
A68_BOOL  UIRAELA;  /* clause result */
A68_222  VIRAELA;  /* avoid structure result */
A68_222  WIRAELA;  /* united object - for case conformity */
A68_227 * XIRAELA_r;
A68_227  YIRAELA;  /* collateral clause result */
A68_227 * ZIRAELA;  /* YIELD */
A68_222  AJRAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(ctypetrim);
 /* line 1874: */
 /* line 1876: */
{ 
 /* line 1877: */
VGRAELA_istrim = (HDRAELA_giveint(Trim)!=0);
 /* line 1878: */
 /* line 1879: */
WGRAELA = Ct ;
switch ( WGRAELA.mode )
{ 
case 6: /* REF STRUCT(MODE222,MODE185)  */
XGRAELA_r = (WGRAELA.data.mode6);
 /* line 1880: */
{ 
if ( VGRAELA_istrim )
{ 
YGRAELA.Ct = (*(&(XGRAELA_r->Ct)));
YGRAELA.Size = Trim;
AHRAELA = A_HEAP(A68_227 ) ;
(*AHRAELA) = YGRAELA ;
ZGRAELA = A_UNITE(BHRAELA,mode6,6,AHRAELA);
} 
else
{ 
 /* line 1881: */
ZGRAELA = (*(&(XGRAELA_r->Ct)));
} 
} 
break;
case 14: /* REF STRUCT(MODE185,MODE222,REF MODE246)  */
CHRAELA_cs = (WGRAELA.data.mode14);
 /* line 1882: */
{ 
 /* line 1883: */
if ( ((*(&(CHRAELA_cs->Strings)))==AJPAELA_nilstringlist) )
{ 
 /* line 1884: */
if ( VGRAELA_istrim )
{ 
DHRAELA.Size = Trim;
DHRAELA.Ct = (*(&(CHRAELA_cs->Ct)));
 /* line 1885: */
DHRAELA.Strings = AJPAELA_nilstringlist;
 /* line 1886: */
EHRAELA = A_HEAP(A68_233 ) ;
(*EHRAELA) = DHRAELA ;
ZGRAELA = A_UNITE(FHRAELA,mode14,14,EHRAELA);
} 
else
{ 
 /* line 1887: */
 /* line 1888: */
ZGRAELA = (*(&(CHRAELA_cs->Ct)));
} 
} 
else
{ 
 /* line 1889: */
TDRAELA_simplify_int( Offset, &GHRAELA );
HHRAELA = GHRAELA ;
switch ( HHRAELA.mode )
{ 
case 1: /* INT */
IHRAELA_o1 = (HHRAELA.data.mode1);
 /* line 1890: */
 /* line 1891: */
TDRAELA_simplify_int( Trim, &JHRAELA );
KHRAELA = JHRAELA ;
switch ( KHRAELA.mode )
{ 
case 1: /* INT */
LHRAELA_t1 = (KHRAELA.data.mode1);
 /* line 1892: */
{ 
 /* line 1893: */
if ( VGRAELA_istrim )
{ 
MHRAELA = ((IHRAELA_o1+LHRAELA_t1)-1);
} 
else
{ 
MHRAELA = IHRAELA_o1;
} 
NHRAELA_sl = GGRAELA_trimstrings((*(&(CHRAELA_cs->Strings))), IHRAELA_o1, MHRAELA);
 /* line 1894: */
 /* line 1895: */
if ( VGRAELA_istrim )
{ 
OHRAELA.Size = Trim;
OHRAELA.Ct = (*(&(CHRAELA_cs->Ct)));
 /* line 1896: */
OHRAELA.Strings = NHRAELA_sl;
QHRAELA = A_HEAP(A68_233 ) ;
(*QHRAELA) = OHRAELA ;
PHRAELA = A_UNITE(RHRAELA,mode14,14,QHRAELA);
} 
else
{ 
 /* line 1897: */
A_CALLPROC(FUQAELA_ctypetotype,((*(&(CHRAELA_cs->Ct))), &THRAELA),((*(&(CHRAELA_cs->Ct))), &THRAELA,(FUQAELA_ctypetotype).nonlocals));
SHRAELA.T = THRAELA;
 /* line 1898: */
UHRAELA = (*(&(NHRAELA_sl->Id))) ;
VHRAELA = 1 ;
SHRAELA.Char = (*(&A_VINDEX(UHRAELA,VHRAELA)));
WHRAELA = A_HEAP(A68_234 ) ;
(*WHRAELA) = SHRAELA ;
PHRAELA = A_UNITE(XHRAELA,mode15,15,WHRAELA);
} 
UGRAELA_ans = PHRAELA;
 /* line 1899: */
 /* line 1900: */
 /* line 1901: */
YHRAELA = A68_FALSE;
} 
break;
default: 
 /* line 1902: */
 /* line 1903: */
YHRAELA = A68_TRUE;
break;
} 
break;
default: 
 /* line 1904: */
 /* line 1905: */
YHRAELA = A68_TRUE;
break;
} 
if ( YHRAELA )
{ 
 /* line 1906: */
if ( SFRAELA_stringrow((*(&(CHRAELA_cs->Strings)))) )
{ 
ZHRAELA_cc = (A_HEAP(A68_234 ));
 /* line 1907: */
A_CALLPROC(FUQAELA_ctypetotype,((*(&(CHRAELA_cs->Ct))), &BIRAELA),((*(&(CHRAELA_cs->Ct))), &BIRAELA,(FUQAELA_ctypetotype).nonlocals));
AIRAELA.T = BIRAELA;
CIRAELA = (*(&((*(&(CHRAELA_cs->Strings)))->Id))) ;
DIRAELA = 1 ;
AIRAELA.Char = (*(&A_VINDEX(CIRAELA,DIRAELA)));
(*ZHRAELA_cc) = AIRAELA;
 /* line 1908: */
 /* line 1909: */
if ( VGRAELA_istrim )
{ 
EIRAELA.Size = Trim;
EIRAELA.Ct = A_UNITE(FIRAELA,mode15,15,ZHRAELA_cc);
 /* line 1910: */
EIRAELA.Strings = AJPAELA_nilstringlist;
 /* line 1911: */
GIRAELA = A_HEAP(A68_233 ) ;
(*GIRAELA) = EIRAELA ;
ZGRAELA = A_UNITE(HIRAELA,mode14,14,GIRAELA);
} 
else
{ 
 /* line 1912: */
 /* line 1913: */
ZGRAELA = A_UNITE(IIRAELA,mode15,15,ZHRAELA_cc);
} 
} 
else
{ 
 /* line 1914: */
 /* line 1915: */
ZGRAELA = Original;
} 
} 
else
{ 
 /* line 1916: */
 /* line 1917: */
 /* line 1918: */
ZGRAELA = UGRAELA_ans;
} 
} 
} 
break;
case 7: /* REF STRUCT(MODE222,REF MODE228)  */
JIRAELA_s = (WGRAELA.data.mode7);
 /* line 1919: */
{ 
 /* line 1920: */
TDRAELA_simplify_int( Offset, &KIRAELA );
LIRAELA = KIRAELA ;
switch ( LIRAELA.mode )
{ 
case 1: /* INT */
MIRAELA_i1 = (LIRAELA.data.mode1);
 /* line 1921: */
 /* line 1922: */
TDRAELA_simplify_int( Trim, &NIRAELA );
OIRAELA = NIRAELA ;
switch ( OIRAELA.mode )
{ 
case 1: /* INT */
PIRAELA_s1 = (OIRAELA.data.mode1);
 /* line 1923: */
{ 
if ( VGRAELA_istrim )
{ 
QIRAELA = PIRAELA_s1;
} 
else
{ 
QIRAELA = 1;
} 
RIRAELA_cst = MFRAELA_trimcst(JIRAELA_s, MIRAELA_i1, QIRAELA);
 /* line 1924: */
if ( VGRAELA_istrim )
{ 
SIRAELA = A_UNITE(TIRAELA,mode7,7,RIRAELA_cst);
} 
else
{ 
SIRAELA = (*(&(RIRAELA_cst->Cst)));
} 
UGRAELA_ans = SIRAELA;
 /* line 1925: */
 /* line 1926: */
 /* line 1927: */
UIRAELA = A68_FALSE;
} 
break;
default: 
 /* line 1928: */
 /* line 1929: */
UIRAELA = A68_TRUE;
break;
} 
break;
default: 
 /* line 1930: */
 /* line 1931: */
UIRAELA = A68_TRUE;
break;
} 
if ( UIRAELA )
{ 
 /* line 1932: */
XERAELA_csttorow( JIRAELA_s, &VIRAELA );
WIRAELA = VIRAELA ;
switch ( WIRAELA.mode )
{ 
case 6: /* REF STRUCT(MODE222,MODE185)  */
XIRAELA_r = (WIRAELA.data.mode6);
 /* line 1933: */
if ( VGRAELA_istrim )
{ 
YIRAELA.Ct = (*(&(XIRAELA_r->Ct)));
YIRAELA.Size = Trim;
 /* line 1934: */
ZIRAELA = A_HEAP(A68_227 ) ;
(*ZIRAELA) = YIRAELA ;
ZGRAELA = A_UNITE(AJRAELA,mode6,6,ZIRAELA);
} 
else
{ 
 /* line 1935: */
 /* line 1936: */
ZGRAELA = (*(&(XIRAELA_r->Ct)));
} 
break;
default: 
 /* line 1937: */
 /* line 1938: */
ZGRAELA = Original;
break;
} 
} 
else
{ 
 /* line 1939: */
 /* line 1940: */
 /* line 1941: */
ZGRAELA = UGRAELA_ans;
} 
} 
break;
default: 
 /* line 1942: */
ZGRAELA = Original;
break;
} 
} 
A_PROC_EXIT(ctypetrim);
*ReturnedValue = (ZGRAELA);
return;
} 
#undef NL

A68_INT  CJRAELA_length(A68_246 * Strings)
{ 
A68_INT  DJRAELA_total;
A68_246 * EJRAELA_sl;
A68_INT  FJRAELA;  /* clause result */
A_PROC_ENTRY(length);
 /* line 1945: */
{ 
DJRAELA_total = 0;
 /* line 1946: */
EJRAELA_sl = Strings;
 /* line 1947: */
for ( ;; )
{ 
 /* line 1948: */
if ( !((EJRAELA_sl!=AJPAELA_nilstringlist)) ) break;
DJRAELA_total+=(*(&(EJRAELA_sl->Id))).upb;
 /* line 1949: */
 /* line 1950: */
EJRAELA_sl = (*(&(EJRAELA_sl->Rest)));
}
 /* line 1951: */
 /* line 1952: */
FJRAELA = DJRAELA_total;
} 
A_PROC_EXIT(length);
return( FJRAELA );
} 
#undef NL

A68_VOID  IJRAELA_joinstrings(A68_INT  S, A68_246 * Strings, A68_VC  *ReturnedValue)
{ 
A68_246 * JJRAELA_sl;
A68_INT  KJRAELA;  /* clause result */
A68_INT  LJRAELA_size;
A68_31  NJRAELA_generator;   /* proc value of non-global proc */
A68_VC  TJRAELA;  /* avoid structure result */
A68_VC  SJRAELA_string;
A68_INT  UJRAELA_lwb;
A68_INT  VJRAELA_upb;
A68_INT  WJRAELA_sz;
A68_VC  XJRAELA;  /* OPERATORS - trim index */
A68_VC  YJRAELA;  /* YIELD */
A68_VC  ZJRAELA;  /* OPERATORS - assign op */
A68_VC  AKRAELA;  /* clause result */
A_PROC_ENTRY(joinstrings);
 /* line 1955: */
{ 
JJRAELA_sl = Strings;
 /* line 1956: */
if ( (S>0) )
{ 
KJRAELA = S;
} 
else
{ 
KJRAELA = CJRAELA_length(JJRAELA_sl);
} 
LJRAELA_size = KJRAELA;
 /* line 1957: */
A_CLOSURE( NJRAELA_generator, OJRAELA_generator, PJRAELA_generator );
(( PJRAELA_generator * ) ( NJRAELA_generator.nonlocals )) -> LJRAELA_size = LJRAELA_size;
A_CALLPROC(NJRAELA_generator,(A68_FALSE, &TJRAELA),(A68_FALSE, &TJRAELA,(NJRAELA_generator).nonlocals));
SJRAELA_string = TJRAELA;
 /* line 1958: */
UJRAELA_lwb = 1;
 /* line 1959: */
 /* line 1960: */
for ( ;; )
{ 
 /* line 1961: */
if ( !((JJRAELA_sl!=AJPAELA_nilstringlist)) ) break;
WJRAELA_sz = (*(&(JJRAELA_sl->Id))).upb;
 /* line 1962: */
 /* line 1963: */
if ( (WJRAELA_sz>0) )
{ 
VJRAELA_upb = ((UJRAELA_lwb+WJRAELA_sz)-1);
 /* line 1964: */
YJRAELA = A_VTRIM(XJRAELA,(SJRAELA_string),A_VTSCRIPT(&(XJRAELA.upb),(SJRAELA_string).upb,UJRAELA_lwb,VJRAELA_upb)) ;
ZJRAELA = (*(&(JJRAELA_sl->Id))) ;
A_VASSIGN2(ZJRAELA,YJRAELA,A68_CHAR );
 /* line 1965: */
 /* line 1966: */
UJRAELA_lwb = (VJRAELA_upb+1);
} 
 /* line 1967: */
 /* line 1968: */
JJRAELA_sl = (*(&(JJRAELA_sl->Rest)));
}
 /* line 1969: */
 /* line 1970: */
AKRAELA = SJRAELA_string;
} 
A_PROC_EXIT(joinstrings);
*ReturnedValue = (AKRAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  EKRAELA_row_conc(A68_INT  Sort, A68_222  Left, A68_222  Right, A68_222  *ReturnedValue)
{ 
A68_BOOL  FKRAELA_unknown;
A68_228 * GKRAELA_new;
A68_228 ** HKRAELA_next;
A68_BOOL  IKRAELA;  /* optbool result */
A68_BOOL  JKRAELA_flatten;
A68_222  KKRAELA_ct;
A68_INT  LKRAELA;  /* loop control */
A68_222  MKRAELA;  /* united object - for case conformity */
A68_227 * NKRAELA_cr;
A68_185  OKRAELA;  /* avoid structure result */
A68_185  PKRAELA;  /* united object - for case conformity */
A68_INT  QKRAELA_n;
A68_INT  RKRAELA;  /* to part of loop */
A68_INT  SKRAELA;  /* loop control */
A68_228  TKRAELA;  /* collateral clause result */
A68_228 * UKRAELA;  /* YIELD */
A68_228 * VKRAELA_cs;
A68_228 * WKRAELA_cst;
A68_228  XKRAELA;  /* collateral clause result */
A68_228 * YKRAELA;  /* YIELD */
A68_228  BLRAELA;  /* collateral clause result */
A68_228 * CLRAELA;  /* YIELD */
A68_BOOL  DLRAELA;  /* optbool result */
A68_242  ELRAELA;  /* collateral clause result */
A68_222  FLRAELA;  /* clause result */
A68_242 * GLRAELA;  /* YIELD */
A68_222  HLRAELA;  /* OPERATORS - mode -> union mode */
A68_222  ILRAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(row_conc);
 /* line 1973: */
{ 
FKRAELA_unknown = A68_FALSE;
 /* line 1974: */
GKRAELA_new = KQCAELA_nilcst;
 /* line 1975: */
HKRAELA_next = (&GKRAELA_new);
 /* line 1976: */
IKRAELA = (Sort==JPCAELA_flattenleft);
if ( ! IKRAELA )
{IKRAELA = (Sort==LPCAELA_flattenboth);
}
JKRAELA_flatten = IKRAELA;
 /* line 1977: */
KKRAELA_ct = Left;
 /* line 1978: */
for ( LKRAELA = 1;
LKRAELA <= 2;
LKRAELA += 1 )
{ 
 /* line 1979: */
if ( !(!FKRAELA_unknown) ) break;
 /* line 1980: */
if ( JKRAELA_flatten )
{ 
 /* line 1981: */
MKRAELA = KKRAELA_ct ;
switch ( MKRAELA.mode )
{ 
case 6: /* REF STRUCT(MODE222,MODE185)  */
NKRAELA_cr = (MKRAELA.data.mode6);
 /* line 1982: */
 /* line 1983: */
TDRAELA_simplify_int( (*(&(NKRAELA_cr->Size))), &OKRAELA );
PKRAELA = OKRAELA ;
switch ( PKRAELA.mode )
{ 
case 1: /* INT */
QKRAELA_n = (PKRAELA.data.mode1);
 /* line 1984: */
 /* line 1985: */
RKRAELA = QKRAELA_n;
for ( SKRAELA = 1;
SKRAELA <= RKRAELA;
SKRAELA += 1 )
{ 
TKRAELA.Cst = (*(&(NKRAELA_cr->Ct)));
TKRAELA.Rest = (A68_228 *)A68_NIL;
UKRAELA = A_HEAP(A68_228 ) ;
(*UKRAELA) = TKRAELA ;
(*HKRAELA_next) = UKRAELA;
 /* line 1986: */
 /* line 1987: */
HKRAELA_next = (&((*HKRAELA_next)->Rest));
}
 /* line 1988: */
break;
default: 
 /* line 1989: */
 /* line 1990: */
FKRAELA_unknown = A68_TRUE;
break;
} 
break;
case 7: /* REF STRUCT(MODE222,REF MODE228)  */
VKRAELA_cs = (MKRAELA.data.mode7);
 /* line 1991: */
{ 
WKRAELA_cst = VKRAELA_cs;
 /* line 1992: */
for ( ;; )
{ 
 /* line 1993: */
if ( !((WKRAELA_cst!=KQCAELA_nilcst)) ) break;
XKRAELA.Cst = (*(&(WKRAELA_cst->Cst)));
XKRAELA.Rest = (A68_228 *)A68_NIL;
YKRAELA = A_HEAP(A68_228 ) ;
(*YKRAELA) = XKRAELA ;
(*HKRAELA_next) = YKRAELA;
 /* line 1994: */
WKRAELA_cst = (*(&(WKRAELA_cst->Rest)));
 /* line 1995: */
 /* line 1996: */
HKRAELA_next = (&((*HKRAELA_next)->Rest));
}
 /* line 1997: */
 /* line 1998: */
} 
break;
default: 
 /* line 1999: */
 /* line 2000: */
NKDAOST_sysfault(ALRAELA);
break;
} 
} 
else
{ 
BLRAELA.Cst = KKRAELA_ct;
BLRAELA.Rest = KQCAELA_nilcst;
CLRAELA = A_HEAP(A68_228 ) ;
(*CLRAELA) = BLRAELA ;
(*HKRAELA_next) = CLRAELA;
 /* line 2001: */
 /* line 2002: */
HKRAELA_next = (&((*HKRAELA_next)->Rest));
} 
 /* line 2003: */
DLRAELA = (Sort==KPCAELA_flattenright);
if ( ! DLRAELA )
{DLRAELA = (Sort==LPCAELA_flattenboth);
}
JKRAELA_flatten = DLRAELA;
 /* line 2004: */
 /* line 2005: */
KKRAELA_ct = Right;
}
 /* line 2006: */
 /* line 2007: */
if ( FKRAELA_unknown )
{ 
ELRAELA.String = A68_FALSE;
ELRAELA.Sort = Sort;
ELRAELA.Left = Left;
 /* line 2008: */
ELRAELA.Right = Right;
 /* line 2009: */
GLRAELA = A_HEAP(A68_242 ) ;
(*GLRAELA) = ELRAELA ;
FLRAELA = A_UNITE(HLRAELA,mode23,23,GLRAELA);
} 
else
{ 
 /* line 2010: */
FLRAELA = A_UNITE(ILRAELA,mode7,7,GKRAELA_new);
} 
} 
A_PROC_EXIT(row_conc);
*ReturnedValue = (FLRAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  MLRAELA_string_conc(A68_INT  Sort, A68_222  Left, A68_222  Right, A68_222  *ReturnedValue)
{ 
A68_222  NLRAELA_prim;
A68_222  OLRAELA;  /* united object - for case conformity */
A68_233 * PLRAELA_lg;
A68_INT  QLRAELA;  /* clause result */
A68_INT  RLRAELA_lsize;
A68_222  SLRAELA;  /* united object - for case conformity */
A68_233 * TLRAELA_rg;
A68_INT  ULRAELA;  /* clause result */
A68_INT  VLRAELA_rsize;
A68_BOOL  WLRAELA;  /* optbool result */
A68_242  XLRAELA;  /* collateral clause result */
A68_222  YLRAELA;  /* clause result */
A68_242 * ZLRAELA;  /* YIELD */
A68_222  AMRAELA;  /* OPERATORS - mode -> union mode */
A68_222  BMRAELA;  /* united object - for case conformity */
A68_233  CMRAELA;  /* collateral clause result */
A68_185  DMRAELA;  /* OPERATORS - mode -> union mode */
A68_INT  EMRAELA;  /* YIELD */
A68_233 * FMRAELA;  /* YIELD */
A68_222  GMRAELA;  /* OPERATORS - mode -> union mode */
A68_222  HMRAELA_ct;
A68_INT  IMRAELA_size;
A68_246 * JMRAELA_strings;
A68_INT  KMRAELA;  /* loop control */
A68_222  LMRAELA;  /* united object - for case conformity */
A68_233 * MMRAELA_cs;
A68_222  NMRAELA;  /* united object - for case conformity */
A68_234 * OMRAELA_cp;
A68_31  QMRAELA_generator;   /* proc value of non-global proc */
A68_VC  VMRAELA;  /* avoid structure result */
A68_VC  WMRAELA_id;
A68_CHAR * XMRAELA_i;
A68_INT  YMRAELA;  /* forall loop counter */
A68_246  ZMRAELA;  /* collateral clause result */
A68_246 * ANRAELA;  /* YIELD */
A68_246  DNRAELA;  /* collateral clause result */
A68_VC  ENRAELA;  /* avoid structure result */
A68_246 * FNRAELA;  /* YIELD */
A68_234 * GNRAELA_cc;
A68_31  INRAELA_generator;   /* proc value of non-global proc */
A68_VC  NNRAELA;  /* avoid structure result */
A68_VC  ONRAELA_ii;
A68_INT  PNRAELA;  /* YIELD */
A68_CHAR * QNRAELA;  /* YIELD */
A68_246  RNRAELA;  /* collateral clause result */
A68_246 * SNRAELA;  /* YIELD */
A68_233  VNRAELA;  /* collateral clause result */
A68_185  WNRAELA;  /* OPERATORS - mode -> union mode */
A68_INT  XNRAELA;  /* YIELD */
A68_233 * YNRAELA;  /* YIELD */
A68_222  ZNRAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(string_conc);
 /* line 2013: */
{ 
 /* line 2014: */
 /* line 2015: */
 /* line 2016: */
OLRAELA = Left ;
switch ( OLRAELA.mode )
{ 
case 14: /* REF STRUCT(MODE185,MODE222,REF MODE246)  */
PLRAELA_lg = (OLRAELA.data.mode14);
 /* line 2017: */
{ 
NLRAELA_prim = (*(&(PLRAELA_lg->Ct)));
 /* line 2018: */
 /* line 2019: */
 /* line 2020: */
 /* line 2021: */
QLRAELA = HDRAELA_giveint((*(&(PLRAELA_lg->Size))));
} 
break;
default: 
QLRAELA = 1;
break;
} 
RLRAELA_lsize = QLRAELA;
 /* line 2022: */
 /* line 2023: */
 /* line 2024: */
SLRAELA = Right ;
switch ( SLRAELA.mode )
{ 
case 14: /* REF STRUCT(MODE185,MODE222,REF MODE246)  */
TLRAELA_rg = (SLRAELA.data.mode14);
 /* line 2025: */
{ 
NLRAELA_prim = (*(&(TLRAELA_rg->Ct)));
 /* line 2026: */
 /* line 2027: */
 /* line 2028: */
 /* line 2029: */
ULRAELA = HDRAELA_giveint((*(&(TLRAELA_rg->Size))));
} 
break;
default: 
ULRAELA = 1;
break;
} 
VLRAELA_rsize = ULRAELA;
 /* line 2030: */
WLRAELA = (RLRAELA_lsize==(-1));
if ( ! WLRAELA )
{ /* line 2031: */
WLRAELA = (VLRAELA_rsize==(-1));
}
if ( WLRAELA )
{ 
XLRAELA.String = A68_TRUE;
XLRAELA.Sort = Sort;
XLRAELA.Left = Left;
 /* line 2032: */
XLRAELA.Right = Right;
ZLRAELA = A_HEAP(A68_242 ) ;
(*ZLRAELA) = XLRAELA ;
YLRAELA = A_UNITE(AMRAELA,mode23,23,ZLRAELA);
} 
else
{ 
 /* line 2033: */
BMRAELA = NLRAELA_prim ;
switch ( BMRAELA.mode )
{ 
case 9: /* REF STRUCT(MODE172)  */
case 13: /* REF STRUCT(MODE172)  */
 /* line 2034: */
EMRAELA = (RLRAELA_lsize+VLRAELA_rsize) ;
CMRAELA.Size = A_UNITE(DMRAELA,mode1,1,EMRAELA);
CMRAELA.Ct = NLRAELA_prim;
 /* line 2035: */
CMRAELA.Strings = AJPAELA_nilstringlist;
FMRAELA = A_HEAP(A68_233 ) ;
(*FMRAELA) = CMRAELA ;
YLRAELA = A_UNITE(GMRAELA,mode14,14,FMRAELA);
break;
default: 
HMRAELA_ct = Right;
 /* line 2036: */
IMRAELA_size = VLRAELA_rsize;
 /* line 2037: */
 /* line 2038: */
 /* line 2039: */
for ( KMRAELA = 1;
KMRAELA <= 2;
KMRAELA += 1 )
{ 
 /* line 2040: */
LMRAELA = HMRAELA_ct ;
switch ( LMRAELA.mode )
{ 
case 14: /* REF STRUCT(MODE185,MODE222,REF MODE246)  */
MMRAELA_cs = (LMRAELA.data.mode14);
 /* line 2041: */
 /* line 2042: */
if ( ((*(&(MMRAELA_cs->Strings)))==AJPAELA_nilstringlist) )
{ 
 /* line 2043: */
NMRAELA = (*(&(MMRAELA_cs->Ct))) ;
switch ( NMRAELA.mode )
{ 
case 15: /* REF STRUCT(MODE172,CHAR)  */
OMRAELA_cp = (NMRAELA.data.mode15);
 /* line 2044: */
{ 
A_CLOSURE( QMRAELA_generator, RMRAELA_generator, SMRAELA_generator );
(( SMRAELA_generator * ) ( QMRAELA_generator.nonlocals )) -> IMRAELA_size = (&IMRAELA_size);
A_CALLPROC(QMRAELA_generator,(A68_FALSE, &VMRAELA),(A68_FALSE, &VMRAELA,(QMRAELA_generator).nonlocals));
WMRAELA_id = VMRAELA;
 /* line 2045: */
YMRAELA = WMRAELA_id.upb -1;
XMRAELA_i = WMRAELA_id.data;
for (;YMRAELA-- >= 0;
(XMRAELA_i++
) )
{
(*XMRAELA_i) = (*(&(OMRAELA_cp->Char)));
}
 /* line 2046: */
ZMRAELA.Id = WMRAELA_id;
 /* line 2047: */
ZMRAELA.Rest = JMRAELA_strings;
 /* line 2048: */
ANRAELA = A_HEAP(A68_246 ) ;
(*ANRAELA) = ZMRAELA ;
JMRAELA_strings = ANRAELA;
} 
break;
default: 
 /* line 2049: */
 /* line 2050: */
NKDAOST_sysfault(CNRAELA);
break;
} 
} 
else
{ 
 /* line 2051: */
if ( (JMRAELA_strings==AJPAELA_nilstringlist) )
{ 
 /* line 2052: */
JMRAELA_strings = (*(&(MMRAELA_cs->Strings)));
} 
else
{ 
 /* line 2053: */
IJRAELA_joinstrings( IMRAELA_size, (*(&(MMRAELA_cs->Strings))), &ENRAELA );
DNRAELA.Id = ENRAELA;
 /* line 2054: */
DNRAELA.Rest = JMRAELA_strings;
 /* line 2055: */
FNRAELA = A_HEAP(A68_246 ) ;
(*FNRAELA) = DNRAELA ;
JMRAELA_strings = FNRAELA;
} 
} 
break;
case 15: /* REF STRUCT(MODE172,CHAR)  */
GNRAELA_cc = (LMRAELA.data.mode15);
 /* line 2056: */
{ 
A_CLOSURE( INRAELA_generator, JNRAELA_generator, KNRAELA_generator );
A_CALLPROC(INRAELA_generator,(A68_FALSE, &NNRAELA),(A68_FALSE, &NNRAELA,(INRAELA_generator).nonlocals));
ONRAELA_ii = NNRAELA;
PNRAELA = 1 ;
QNRAELA = (&A_VINDEX(ONRAELA_ii,PNRAELA)) ;
(*QNRAELA) = (*(&(GNRAELA_cc->Char)));
 /* line 2057: */
RNRAELA.Id = ONRAELA_ii;
 /* line 2058: */
RNRAELA.Rest = JMRAELA_strings;
 /* line 2059: */
SNRAELA = A_HEAP(A68_246 ) ;
(*SNRAELA) = RNRAELA ;
JMRAELA_strings = SNRAELA;
} 
break;
default: 
 /* line 2060: */
NKDAOST_sysfault(UNRAELA);
break;
} 
 /* line 2061: */
HMRAELA_ct = Left;
 /* line 2062: */
 /* line 2063: */
IMRAELA_size = RLRAELA_lsize;
}
 /* line 2064: */
XNRAELA = (RLRAELA_lsize+VLRAELA_rsize) ;
VNRAELA.Size = A_UNITE(WNRAELA,mode1,1,XNRAELA);
VNRAELA.Ct = NLRAELA_prim;
 /* line 2065: */
VNRAELA.Strings = JMRAELA_strings;
 /* line 2066: */
 /* line 2067: */
YNRAELA = A_HEAP(A68_233 ) ;
(*YNRAELA) = VNRAELA ;
YLRAELA = A_UNITE(ZNRAELA,mode14,14,YNRAELA);
break;
} 
} 
} 
A_PROC_EXIT(string_conc);
*ReturnedValue = (YLRAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  BORAELA_simplify_ctype(A68_222  Ct, A68_222  *ReturnedValue)
{ 
A68_222  CORAELA_c1;
A68_222  YORAELA;  /* united object - for case conformity */
A68_223 * ZORAELA_cn;
A68_222  APRAELA;  /* clause result */
A68_222  BPRAELA;  /* avoid structure result */
A68_231 * CPRAELA_cb;
A68_222  DPRAELA;  /* avoid structure result */
A68_243 * EPRAELA_ca;
A68_222  FPRAELA;  /* avoid structure result */
A68_232 * GPRAELA_cq;
A68_172  HPRAELA;  /* avoid structure result */
A68_222  IPRAELA;  /* avoid structure result */
A68_230 * JPRAELA_cn;
A68_230 * KPRAELA_cnt;
A68_172  LPRAELA;  /* avoid structure result */
A68_172 * MPRAELA;  /* YIELD */
A68_222  NPRAELA;  /* OPERATORS - mode -> union mode */
A68_238 * OPRAELA_ci;
A68_222  PPRAELA;  /* OPERATORS - mode -> union mode */
A68_185  QPRAELA;  /* OPERATORS - mode -> union mode */
A68_INT  RPRAELA;  /* YIELD */
A68_222  SPRAELA;  /* avoid structure result */
A68_222  TPRAELA;  /* avoid structure result */
A68_222  UPRAELA;  /* avoid structure result */
A68_239 * VPRAELA_ct;
A68_190  WPRAELA;  /* collateral clause result */
A68_190  XPRAELA;  /* collateral clause result */
A68_190 * YPRAELA;  /* YIELD */
A68_185  ZPRAELA;  /* OPERATORS - mode -> union mode */
A68_185  AQRAELA;  /* OPERATORS - mode -> union mode */
A68_INT  BQRAELA;  /* YIELD */
A68_190 * DQRAELA;  /* YIELD */
A68_185  EQRAELA;  /* OPERATORS - mode -> union mode */
A68_185  FQRAELA;  /* avoid structure result */
A68_185  CQRAELA_size;
A68_222  GQRAELA;  /* OPERATORS - mode -> union mode */
A68_222  HQRAELA;  /* avoid structure result */
A68_222  IQRAELA;  /* avoid structure result */
A68_222  JQRAELA;  /* avoid structure result */
A68_240 * KQRAELA_cc;
A68_185  LQRAELA;  /* avoid structure result */
A68_185  MQRAELA_cond;
A68_185  NQRAELA;  /* united object - for case conformity */
A68_INT  OQRAELA_i1;
A68_222  PQRAELA;  /* avoid structure result */
A68_222  QQRAELA;  /* avoid structure result */
A68_222  RQRAELA;  /* OPERATORS - mode -> union mode */
A68_242 * SQRAELA_cn;
A68_222  TQRAELA;  /* avoid structure result */
A68_222  UQRAELA_left;
A68_222  VQRAELA;  /* avoid structure result */
A68_222  WQRAELA_right;
A68_222  XQRAELA;  /* avoid structure result */
A68_222  YQRAELA;  /* avoid structure result */
A_PROC_ENTRY(simplify_ctype);
 /* line 2071: */
 /* line 2073: */
{ 
 /* line 2075: */
 /* line 2093: */
 /* line 2094: */
YORAELA = Ct ;
switch ( YORAELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE198,INT,MODE222,MODE172)  */
ZORAELA_cn = (YORAELA.data.mode1);
 /* line 2095: */
BORAELA_simplify_ctype( (*(&(ZORAELA_cn->Ct))), &BPRAELA );
APRAELA = BPRAELA;
break;
case 12: /* REF STRUCT(MODE222)  */
CPRAELA_cb = (YORAELA.data.mode12);
 /* line 2096: */
BORAELA_simplify_ctype( (*(&(CPRAELA_cb->Cbracket))), &DPRAELA );
APRAELA = DPRAELA;
break;
case 24: /* REF STRUCT(MODE222,MODE170)  */
EPRAELA_ca = (YORAELA.data.mode24);
 /* line 2097: */
BORAELA_simplify_ctype( (*(&(EPRAELA_ca->Ct))), &FPRAELA );
APRAELA = FPRAELA;
break;
case 13: /* REF STRUCT(MODE172)  */
GPRAELA_cq = (YORAELA.data.mode13);
 /* line 2098: */
VIDAELA_primtype( (*(&(GPRAELA_cq->Querytype))), A68_FALSE, &HPRAELA );
EORAELA_move_query( HPRAELA, &IPRAELA );
APRAELA = IPRAELA;
break;
case 9: /* REF STRUCT(MODE172)  */
JPRAELA_cn = (YORAELA.data.mode9);
 /* line 2099: */
{ 
KPRAELA_cnt = (A_HEAP(A68_230 ));
VIDAELA_primtype( (*(&(JPRAELA_cn->Ct))), A68_FALSE, &LPRAELA );
MPRAELA = (&(KPRAELA_cnt->Ct)) ;
(*MPRAELA) = LPRAELA;
 /* line 2100: */
 /* line 2101: */
 /* line 2102: */
APRAELA = A_UNITE(NPRAELA,mode9,9,KPRAELA_cnt);
} 
break;
case 19: /* REF STRUCT(MODE222,MODE185)  */
OPRAELA_ci = (YORAELA.data.mode19);
 /* line 2103: */
{ 
RPRAELA = 0 ;
BORAELA_simplify_ctype( (*(&(OPRAELA_ci->Ct))), &SPRAELA );
TGRAELA_ctypetrim( SPRAELA, A_UNITE(QPRAELA,mode1,1,RPRAELA), (*(&(OPRAELA_ci->Index))), A_UNITE(PPRAELA,mode19,19,OPRAELA_ci), &TPRAELA );
CORAELA_c1 = TPRAELA;
 /* line 2104: */
 /* line 2105: */
 /* line 2106: */
BORAELA_simplify_ctype( CORAELA_c1, &UPRAELA );
APRAELA = UPRAELA;
} 
break;
case 20: /* REF STRUCT(MODE222,MODE185,MODE185)  */
VPRAELA_ct = (YORAELA.data.mode20);
 /* line 2107: */
{ 
 /* line 2108: */
WPRAELA.Opno = GPCAELA_diplus;
XPRAELA.Opno = HPCAELA_diminus;
XPRAELA.L = (*(&(VPRAELA_ct->Upb)));
XPRAELA.R = (*(&(VPRAELA_ct->Lwb)));
YPRAELA = A_HEAP(A68_190 ) ;
(*YPRAELA) = XPRAELA ;
WPRAELA.L = A_UNITE(ZPRAELA,mode7,7,YPRAELA);
BQRAELA = 1 ;
WPRAELA.R = A_UNITE(AQRAELA,mode1,1,BQRAELA);
DQRAELA = A_HEAP(A68_190 ) ;
(*DQRAELA) = WPRAELA ;
CDRAELA_simplify( A_UNITE(EQRAELA,mode7,7,DQRAELA), A68_TRUE, &FQRAELA );
CQRAELA_size = FQRAELA;
 /* line 2109: */
BORAELA_simplify_ctype( (*(&(VPRAELA_ct->Ct))), &HQRAELA );
TGRAELA_ctypetrim( HQRAELA, CQRAELA_size, (*(&(VPRAELA_ct->Lwb))), A_UNITE(GQRAELA,mode20,20,VPRAELA_ct), &IQRAELA );
CORAELA_c1 = IQRAELA;
 /* line 2110: */
 /* line 2111: */
 /* line 2112: */
BORAELA_simplify_ctype( CORAELA_c1, &JQRAELA );
APRAELA = JQRAELA;
} 
break;
case 21: /* REF STRUCT(MODE185,MODE222,MODE222)  */
KQRAELA_cc = (YORAELA.data.mode21);
 /* line 2113: */
{ 
TDRAELA_simplify_int( (*(&(KQRAELA_cc->Test))), &LQRAELA );
MQRAELA_cond = LQRAELA;
 /* line 2114: */
 /* line 2115: */
NQRAELA = MQRAELA_cond ;
switch ( NQRAELA.mode )
{ 
case 1: /* INT */
OQRAELA_i1 = (NQRAELA.data.mode1);
 /* line 2116: */
if ( (OQRAELA_i1!=0) )
{ 
 /* line 2117: */
BORAELA_simplify_ctype( (*(&(KQRAELA_cc->Then))), &PQRAELA );
APRAELA = PQRAELA;
} 
else
{ 
 /* line 2118: */
 /* line 2119: */
 /* line 2120: */
BORAELA_simplify_ctype( (*(&(KQRAELA_cc->Else))), &QQRAELA );
APRAELA = QQRAELA;
} 
break;
default: 
 /* line 2121: */
 /* line 2122: */
APRAELA = A_UNITE(RQRAELA,mode21,21,KQRAELA_cc);
break;
} 
} 
break;
case 23: /* REF STRUCT(BOOL,INT,MODE222,MODE222)  */
SQRAELA_cn = (YORAELA.data.mode23);
 /* line 2123: */
{ 
BORAELA_simplify_ctype( (*(&(SQRAELA_cn->Left))), &TQRAELA );
UQRAELA_left = TQRAELA;
 /* line 2124: */
BORAELA_simplify_ctype( (*(&(SQRAELA_cn->Right))), &VQRAELA );
WQRAELA_right = VQRAELA;
 /* line 2125: */
 /* line 2126: */
if ( (*(&(SQRAELA_cn->String))) )
{ 
 /* line 2127: */
MLRAELA_string_conc( (*(&(SQRAELA_cn->Sort))), UQRAELA_left, WQRAELA_right, &XQRAELA );
APRAELA = XQRAELA;
} 
else
{ 
 /* line 2128: */
 /* line 2129: */
 /* line 2130: */
 /* line 2131: */
EKRAELA_row_conc( (*(&(SQRAELA_cn->Sort))), UQRAELA_left, WQRAELA_right, &YQRAELA );
APRAELA = YQRAELA;
} 
} 
break;
default: 
 /* line 2132: */
APRAELA = Ct;
break;
} 
} 
A_PROC_EXIT(simplify_ctype);
*ReturnedValue = (APRAELA);
return;
} 
#undef NL

A_STATIC A68_BOOL  ARRAELA_replknown(A68_193 * Iv)
{ 
A68_185  BRRAELA;  /* avoid structure result */
A68_185  CRRAELA_lwb;
A68_185  DRRAELA;  /* avoid structure result */
A68_185  ERRAELA_upb;
A68_BOOL  FRRAELA;  /* optbool result */
A68_BOOL  GRRAELA;  /* clause result */
A_PROC_ENTRY(replknown);
 /* line 2137: */
{ 
TDRAELA_simplify_int( (*(&(Iv->Lwb))), &BRRAELA );
CRRAELA_lwb = BRRAELA;
 /* line 2138: */
TDRAELA_simplify_int( (*(&(Iv->Upb))), &DRRAELA );
ERRAELA_upb = DRRAELA;
 /* line 2139: */
 /* line 2140: */
FRRAELA = QERAELA_isint(CRRAELA_lwb);
if ( FRRAELA )
{FRRAELA = QERAELA_isint(ERRAELA_upb);
}
GRRAELA = FRRAELA;
} 
A_PROC_EXIT(replknown);
return( GRRAELA );
} 
#undef NL

A_STATIC A68_BOOL  IRRAELA_nextrepl(A68_193 * Iv)
{ 
A68_BOOL  JRRAELA_more;
A68_185  KRRAELA;  /* united object - for case conformity */
A68_INT  LRRAELA_index;
A68_185  MRRAELA;  /* OPERATORS - mode -> union mode */
A68_INT  NRRAELA;  /* YIELD */
A68_185 * ORRAELA;  /* YIELD */
A68_185  PRRAELA;  /* OPERATORS - mode -> union mode */
A68_185 * QRRAELA;  /* YIELD */
A68_185  RRRAELA;  /* OPERATORS - mode -> union mode */
A68_INT  SRRAELA;  /* YIELD */
A68_185 * TRRAELA;  /* YIELD */
A68_BOOL  URRAELA;  /* clause result */
A_PROC_ENTRY(nextrepl);
 /* line 2143: */
{ 
JRRAELA_more = A68_TRUE;
 /* line 2144: */
 /* line 2145: */
KRRAELA = (*(&(Iv->Index))) ;
switch ( KRRAELA.mode )
{ 
case 1: /* INT */
LRRAELA_index = (KRRAELA.data.mode1);
 /* line 2146: */
if ( (LRRAELA_index<HDRAELA_giveint((*(&(Iv->Upb))))) )
{ 
 /* line 2147: */
NRRAELA = (LRRAELA_index+1) ;
ORRAELA = (&(Iv->Index)) ;
(*ORRAELA) = A_UNITE(MRRAELA,mode1,1,NRRAELA);
} 
else
{ 
QRRAELA = (&(Iv->Index)) ;
(*QRRAELA) = A_UNITE(PRRAELA,mode4,4,DRCAELA_flt);
 /* line 2148: */
 /* line 2149: */
 /* line 2150: */
JRRAELA_more = A68_FALSE;
} 
break;
default: 
 /* line 2151: */
SRRAELA = HDRAELA_giveint((*(&(Iv->Lwb)))) ;
TRRAELA = (&(Iv->Index)) ;
(*TRRAELA) = A_UNITE(RRRAELA,mode1,1,SRRAELA);
break;
} 
 /* line 2152: */
 /* line 2153: */
URRAELA = JRRAELA_more;
} 
A_PROC_EXIT(nextrepl);
return( URRAELA );
} 
#undef NL

A_STATIC A68_VOID  WRRAELA_tst(A68_INT  I, A68_414  *ReturnedValue)
{ 
A68_414  XRRAELA_t;
A68_INT * YRRAELA;  /* YIELD */
A68_414  ZRRAELA;  /* clause result */
A_PROC_ENTRY(tst);
{ 
YRRAELA = (&((&XRRAELA_t)->T)) ;
(*YRRAELA) = I;
ZRRAELA = XRRAELA_t;
} 
A_PROC_EXIT(tst);
*ReturnedValue = (ZRRAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  HSRAELA_testbool(A68_BOOL  Bool, A68_414  *ReturnedValue)
{ 
A68_414  ISRAELA;  /* clause result */
A_PROC_ENTRY(testbool);
{ 
if ( Bool )
{ 
ISRAELA = ASRAELA_true;
} 
else
{ 
ISRAELA = BSRAELA_false;
} 
} 
A_PROC_EXIT(testbool);
*ReturnedValue = (ISRAELA);
return;
} 
#undef NL

A68_BOOL  LSRAELA_(A68_414  A, A68_414  B)
{ 
A68_BOOL  MSRAELA;  /* clause result */
A_PROC_ENTRY(=);
MSRAELA = (A.T==B.T);
A_PROC_EXIT(=);
return( MSRAELA );
} 
#undef NL

A68_VOID  PSRAELA_and(A68_414  A, A68_414  B, A68_414  *ReturnedValue)
{ 
A68_BOOL  QSRAELA;  /* optbool result */
A68_414  RSRAELA;  /* clause result */
A68_BOOL  SSRAELA;  /* optbool result */
A_PROC_ENTRY(and);
 /* line 2165: */
{ 
QSRAELA = LSRAELA_(A, BSRAELA_false);
if ( ! QSRAELA )
{QSRAELA = LSRAELA_(B, BSRAELA_false);
}
if ( QSRAELA )
{ 
 /* line 2166: */
RSRAELA = BSRAELA_false;
} 
else
{ 
SSRAELA = LSRAELA_(A, ASRAELA_true);
if ( SSRAELA )
{SSRAELA = LSRAELA_(B, ASRAELA_true);
}
if ( SSRAELA )
{ 
RSRAELA = ASRAELA_true;
} 
else
{ 
 /* line 2167: */
RSRAELA = CSRAELA_unknown;
} 
} 
} 
A_PROC_EXIT(and);
*ReturnedValue = (RSRAELA);
return;
} 
#undef NL

A68_VOID  VSRAELA_or(A68_414  A, A68_414  B, A68_414  *ReturnedValue)
{ 
A68_BOOL  WSRAELA;  /* optbool result */
A68_414  XSRAELA;  /* clause result */
A68_BOOL  YSRAELA;  /* optbool result */
A_PROC_ENTRY(or);
 /* line 2170: */
{ 
WSRAELA = LSRAELA_(A, ASRAELA_true);
if ( ! WSRAELA )
{WSRAELA = LSRAELA_(B, ASRAELA_true);
}
 /* line 2171: */
if ( WSRAELA )
{ 
XSRAELA = ASRAELA_true;
} 
else
{ 
YSRAELA = LSRAELA_(A, BSRAELA_false);
if ( YSRAELA )
{YSRAELA = LSRAELA_(B, BSRAELA_false);
}
if ( YSRAELA )
{ 
XSRAELA = BSRAELA_false;
} 
else
{ 
 /* line 2172: */
XSRAELA = CSRAELA_unknown;
} 
} 
} 
A_PROC_EXIT(or);
*ReturnedValue = (XSRAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  CTRAELA_testexpressions(A68_185  A, A68_185  B, A68_INT  Diff, A68_414  *ReturnedValue)
{ 
A68_185  KTRAELA;  /* united object - for case conformity */
A68_188 * LTRAELA_icb;
A68_414  MTRAELA;  /* clause result */
A68_414  NTRAELA;  /* avoid structure result */
A68_182  OTRAELA_flt;
A68_196 * PTRAELA_ibb;
A68_414  QTRAELA;  /* avoid structure result */
A68_185  RTRAELA;  /* united object - for case conformity */
A68_INT  STRAELA_ia;
A68_185  TTRAELA;  /* united object - for case conformity */
A68_INT  UTRAELA_ib;
A68_414  VTRAELA;  /* avoid structure result */
A68_187 * WTRAELA_it;
A68_414  XTRAELA;  /* avoid structure result */
A68_187 * YTRAELA_ita;
A68_185  ZTRAELA;  /* OPERATORS - mode -> union mode */
A68_INT  AURAELA;  /* YIELD */
A68_414  BURAELA;  /* avoid structure result */
A68_182  CURAELA_flt;
A68_188 * DURAELA_ica;
A68_414  EURAELA;  /* avoid structure result */
A68_189 * FURAELA_iva;
A68_185  GURAELA;  /* united object - for case conformity */
A68_189 * HURAELA_ivb;
A68_245 * IURAELA_ma;
A68_245 * JURAELA_mb;
A68_BOOL  KURAELA;  /* optbool result */
A68_190 * LURAELA_ida;
A68_185  MURAELA;  /* united object - for case conformity */
A68_190 * NURAELA_idb;
A68_414  OURAELA;  /* clause result */
A68_414  PURAELA;  /* avoid structure result */
A68_414  QURAELA;  /* avoid structure result */
A68_414  RURAELA;  /* avoid structure result */
A68_414  SURAELA;  /* avoid structure result */
A68_191 * TURAELA_ima;
A68_185  UURAELA;  /* united object - for case conformity */
A68_191 * VURAELA_imb;
A68_414  WURAELA;  /* clause result */
A68_414  XURAELA;  /* avoid structure result */
A68_414  YURAELA;  /* avoid structure result */
A68_192 * ZURAELA_ica;
A68_185  AVRAELA;  /* united object - for case conformity */
A68_192 * BVRAELA_icb;
A68_414  CVRAELA;  /* avoid structure result */
A68_414  DVRAELA;  /* avoid structure result */
A68_414  EVRAELA;  /* avoid structure result */
A68_414  FVRAELA;  /* avoid structure result */
A68_414  GVRAELA;  /* avoid structure result */
A68_193 * HVRAELA_iva;
A68_185  IVRAELA;  /* united object - for case conformity */
A68_193 * JVRAELA_ivb;
A68_194  KVRAELA_ipa;
A68_185  LVRAELA;  /* united object - for case conformity */
A68_194  MVRAELA_ipb;
A68_195 * NVRAELA_ida;
A68_185  OVRAELA;  /* united object - for case conformity */
A68_195 * PVRAELA_idb;
A68_414  QVRAELA;  /* avoid structure result */
A68_196 * RVRAELA_iba;
A68_414  SVRAELA;  /* avoid structure result */
A68_414  TVRAELA;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(testexpressions);
 /* line 2178: */
 /* line 2182: */
{ 
 /* line 2187: */
 /* line 2188: */
KTRAELA = B ;
switch ( KTRAELA.mode )
{ 
case 5: /* REF STRUCT(MODE185,MODE185,INT)  */
LTRAELA_icb = (KTRAELA.data.mode5);
 /* line 2189: */
CTRAELA_testexpressions( A, (*(&(LTRAELA_icb->Integer))), Diff, &NTRAELA );
MTRAELA = NTRAELA;
break;
case 4: /* STRUCT(INT)  */
OTRAELA_flt = (KTRAELA.data.mode4);
 /* line 2190: */
MTRAELA = ASRAELA_true;
break;
case 13: /* REF STRUCT(MODE185)  */
PTRAELA_ibb = (KTRAELA.data.mode13);
 /* line 2191: */
 /* line 2192: */
CTRAELA_testexpressions( A, (*(&(PTRAELA_ibb->Ibracket))), Diff, &QTRAELA );
MTRAELA = QTRAELA;
break;
default: 
 /* line 2193: */
RTRAELA = A ;
switch ( RTRAELA.mode )
{ 
case 1: /* INT */
STRAELA_ia = (RTRAELA.data.mode1);
 /* line 2194: */
 /* line 2195: */
TTRAELA = B ;
switch ( TTRAELA.mode )
{ 
case 1: /* INT */
UTRAELA_ib = (TTRAELA.data.mode1);
 /* line 2196: */
HSRAELA_testbool( (STRAELA_ia==UTRAELA_ib), &VTRAELA );
MTRAELA = VTRAELA;
break;
case 3: /* REF STRUCT(INT,REF MODE26)  */
WTRAELA_it = (TTRAELA.data.mode3);
 /* line 2197: */
 /* line 2198: */
HSRAELA_testbool( (STRAELA_ia==(*(&(WTRAELA_it->Int)))), &XTRAELA );
MTRAELA = XTRAELA;
break;
default: 
 /* line 2199: */
MTRAELA = CSRAELA_unknown;
break;
} 
break;
case 3: /* REF STRUCT(INT,REF MODE26)  */
YTRAELA_ita = (RTRAELA.data.mode3);
 /* line 2200: */
 /* line 2201: */
AURAELA = (*(&(YTRAELA_ita->Int))) ;
CTRAELA_testexpressions( A_UNITE(ZTRAELA,mode1,1,AURAELA), B, Diff, &BURAELA );
MTRAELA = BURAELA;
break;
case 4: /* STRUCT(INT)  */
CURAELA_flt = (RTRAELA.data.mode4);
 /* line 2202: */
MTRAELA = ASRAELA_true;
break;
case 5: /* REF STRUCT(MODE185,MODE185,INT)  */
DURAELA_ica = (RTRAELA.data.mode5);
 /* line 2203: */
 /* line 2204: */
CTRAELA_testexpressions( (*(&(DURAELA_ica->Integer))), B, Diff, &EURAELA );
MTRAELA = EURAELA;
break;
case 6: /* REF STRUCT(REF MODE245)  */
FURAELA_iva = (RTRAELA.data.mode6);
 /* line 2205: */
 /* line 2206: */
GURAELA = B ;
switch ( GURAELA.mode )
{ 
case 6: /* REF STRUCT(REF MODE245)  */
HURAELA_ivb = (GURAELA.data.mode6);
 /* line 2207: */
{ 
IURAELA_ma = (*(&(FURAELA_iva->Im)));
JURAELA_mb = (*(&(HURAELA_ivb->Im)));
 /* line 2208: */
 /* line 2209: */
KURAELA = (((*(&(IURAELA_ma->Fnno)))-(*(&(JURAELA_mb->Fnno))))==Diff);
if ( KURAELA )
{ /* line 2210: */
KURAELA = ((*(&(IURAELA_ma->Index)))==(*(&(JURAELA_mb->Index))));
}
 /* line 2211: */
if ( KURAELA )
{ 
 /* line 2212: */
MTRAELA = ASRAELA_true;
} 
else
{ 
 /* line 2213: */
 /* line 2214: */
 /* line 2215: */
MTRAELA = CSRAELA_unknown;
} 
} 
break;
default: 
 /* line 2216: */
MTRAELA = CSRAELA_unknown;
break;
} 
break;
case 7: /* REF STRUCT(INT,MODE185,MODE185)  */
LURAELA_ida = (RTRAELA.data.mode7);
 /* line 2217: */
 /* line 2218: */
MURAELA = B ;
switch ( MURAELA.mode )
{ 
case 7: /* REF STRUCT(INT,MODE185,MODE185)  */
NURAELA_idb = (MURAELA.data.mode7);
 /* line 2219: */
 /* line 2220: */
if ( ((*(&(LURAELA_ida->Opno)))==(*(&(NURAELA_idb->Opno)))) )
{ 
OURAELA = ASRAELA_true;
} 
else
{ 
 /* line 2221: */
OURAELA = CSRAELA_unknown;
} 
 /* line 2222: */
 /* line 2223: */
 /* line 2224: */
CTRAELA_testexpressions( (*(&(LURAELA_ida->R))), (*(&(NURAELA_idb->R))), Diff, &PURAELA );
CTRAELA_testexpressions( (*(&(LURAELA_ida->L))), (*(&(NURAELA_idb->L))), Diff, &QURAELA );
GTRAELA_and( OURAELA, QURAELA, &RURAELA );
GTRAELA_and( RURAELA, PURAELA, &SURAELA );
MTRAELA = SURAELA;
break;
default: 
 /* line 2225: */
MTRAELA = CSRAELA_unknown;
break;
} 
break;
case 8: /* REF STRUCT(INT,MODE185)  */
TURAELA_ima = (RTRAELA.data.mode8);
 /* line 2226: */
 /* line 2227: */
UURAELA = B ;
switch ( UURAELA.mode )
{ 
case 8: /* REF STRUCT(INT,MODE185)  */
VURAELA_imb = (UURAELA.data.mode8);
 /* line 2228: */
 /* line 2229: */
if ( ((*(&(TURAELA_ima->Opno)))==(*(&(VURAELA_imb->Opno)))) )
{ 
WURAELA = ASRAELA_true;
} 
else
{ 
 /* line 2230: */
WURAELA = CSRAELA_unknown;
} 
 /* line 2231: */
 /* line 2232: */
CTRAELA_testexpressions( (*(&(TURAELA_ima->R))), (*(&(VURAELA_imb->R))), Diff, &XURAELA );
GTRAELA_and( WURAELA, XURAELA, &YURAELA );
MTRAELA = YURAELA;
break;
default: 
 /* line 2233: */
MTRAELA = CSRAELA_unknown;
break;
} 
break;
case 9: /* REF STRUCT(MODE185,MODE185,MODE185)  */
ZURAELA_ica = (RTRAELA.data.mode9);
 /* line 2234: */
 /* line 2235: */
AVRAELA = B ;
switch ( AVRAELA.mode )
{ 
case 9: /* REF STRUCT(MODE185,MODE185,MODE185)  */
BVRAELA_icb = (AVRAELA.data.mode9);
 /* line 2236: */
 /* line 2237: */
 /* line 2238: */
 /* line 2239: */
 /* line 2240: */
CTRAELA_testexpressions( (*(&(ZURAELA_ica->F))), (*(&(BVRAELA_icb->F))), Diff, &CVRAELA );
CTRAELA_testexpressions( (*(&(ZURAELA_ica->T))), (*(&(BVRAELA_icb->T))), Diff, &DVRAELA );
CTRAELA_testexpressions( (*(&(ZURAELA_ica->Cond))), (*(&(BVRAELA_icb->Cond))), Diff, &EVRAELA );
GTRAELA_and( EVRAELA, DVRAELA, &FVRAELA );
GTRAELA_and( FVRAELA, CVRAELA, &GVRAELA );
MTRAELA = GVRAELA;
break;
default: 
 /* line 2241: */
MTRAELA = CSRAELA_unknown;
break;
} 
break;
case 10: /* REF STRUCT(INT,MODE185,MODE185,MODE185)  */
HVRAELA_iva = (RTRAELA.data.mode10);
 /* line 2242: */
 /* line 2243: */
IVRAELA = B ;
switch ( IVRAELA.mode )
{ 
case 10: /* REF STRUCT(INT,MODE185,MODE185,MODE185)  */
JVRAELA_ivb = (IVRAELA.data.mode10);
 /* line 2244: */
 /* line 2245: */
if ( ((*(&(HVRAELA_iva->Varmultno)))==(*(&(JVRAELA_ivb->Varmultno)))) )
{ 
MTRAELA = ASRAELA_true;
} 
else
{ 
 /* line 2246: */
 /* line 2247: */
MTRAELA = CSRAELA_unknown;
} 
break;
default: 
 /* line 2248: */
MTRAELA = CSRAELA_unknown;
break;
} 
break;
case 11: /* STRUCT(INT)  */
KVRAELA_ipa = (RTRAELA.data.mode11);
 /* line 2249: */
 /* line 2250: */
LVRAELA = B ;
switch ( LVRAELA.mode )
{ 
case 11: /* STRUCT(INT)  */
MVRAELA_ipb = (LVRAELA.data.mode11);
 /* line 2251: */
if ( (KVRAELA_ipa.P==MVRAELA_ipb.P) )
{ 
 /* line 2252: */
MTRAELA = ASRAELA_true;
} 
else
{ 
 /* line 2253: */
 /* line 2254: */
MTRAELA = CSRAELA_unknown;
} 
break;
default: 
 /* line 2255: */
MTRAELA = CSRAELA_unknown;
break;
} 
break;
case 12: /* REF STRUCT(REF MODE198,INT,MODE185)  */
NVRAELA_ida = (RTRAELA.data.mode12);
 /* line 2256: */
 /* line 2257: */
OVRAELA = B ;
switch ( OVRAELA.mode )
{ 
case 12: /* REF STRUCT(REF MODE198,INT,MODE185)  */
PVRAELA_idb = (OVRAELA.data.mode12);
 /* line 2258: */
 /* line 2259: */
 /* line 2260: */
CTRAELA_testexpressions( (*(&(NVRAELA_ida->I))), (*(&(PVRAELA_idb->I))), Diff, &QVRAELA );
MTRAELA = QVRAELA;
break;
default: 
 /* line 2261: */
MTRAELA = CSRAELA_unknown;
break;
} 
break;
case 13: /* REF STRUCT(MODE185)  */
RVRAELA_iba = (RTRAELA.data.mode13);
 /* line 2262: */
 /* line 2263: */
CTRAELA_testexpressions( (*(&(RVRAELA_iba->Ibracket))), B, Diff, &SVRAELA );
MTRAELA = SVRAELA;
break;
default: 
 /* line 2264: */
 /* line 2265: */
MTRAELA = TVRAELA;
break;
} 
break;
} 
} 
A_PROC_EXIT(testexpressions);
*ReturnedValue = (MTRAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  VVRAELA_chk(A68_INT  I, A68_421  *ReturnedValue)
{ 
A68_421  WVRAELA_c;
A68_INT * XVRAELA;  /* YIELD */
A68_421  YVRAELA;  /* clause result */
A_PROC_ENTRY(chk);
{ 
XVRAELA = (&((&WVRAELA_c)->C)) ;
(*XVRAELA) = I;
YVRAELA = WVRAELA_c;
} 
A_PROC_EXIT(chk);
*ReturnedValue = (YVRAELA);
return;
} 
#undef NL
 /* line 2282: */

A_STATIC A68_VOID  RWRAELA_testints(A68_421  Check, A68_185  Int, A68_185  Stand, A68_INT  No, A68_262  Params, A68_INT  Diff, A68_419  *ReturnedValue)
{ 
A68_188 * SWRAELA_intcheck;
A68_425  FXRAELA_getintcheck;   /* proc value of non-global proc */
A68_185  MXRAELA;  /* avoid structure result */
A68_185  LXRAELA_int1;
A68_185  OXRAELA;  /* avoid structure result */
A68_185  NXRAELA_stand1;
A68_419  PXRAELA;  /* collateral clause result */
A68_419  QXRAELA_ans;
A68_INT  RXRAELA;  /* ADICOPS - ABS INT */
A68_INT  SXRAELA;  /* ADICOPS - MOD */
A68_INT  TXRAELA;  /* ADICOPS - MOD */
A68_INT  UXRAELA;  /* ADICOPS - MOD */
A68_BOOL  VXRAELA;  /* clause result */
A68_414  WXRAELA;  /* avoid structure result */
A68_414 * XXRAELA;  /* YIELD */
A68_185  YXRAELA;  /* united object - for case conformity */
A68_INT  ZXRAELA_i;
A68_185  AYRAELA;  /* united object - for case conformity */
A68_INT  BYRAELA_j;
A68_INT  CYRAELA;  /* ADICOPS - ABS INT */
A68_INT  DYRAELA;  /* ADICOPS - MOD */
A68_INT  EYRAELA;  /* ADICOPS - MOD */
A68_INT  FYRAELA;  /* ADICOPS - MOD */
A68_BOOL  GYRAELA;  /* clause result */
A68_46  JYRAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_414  KYRAELA;  /* avoid structure result */
A68_414 * LYRAELA;  /* YIELD */
A68_182  MYRAELA_f;
A68_188 * NYRAELA_ic;
A68_188  OYRAELA;  /* avoid structure result */
A68_419  PYRAELA;  /* avoid structure result */
A68_188  QYRAELA;  /* avoid structure result */
A68_188 * RYRAELA;  /* YIELD */
A68_185 * SYRAELA;  /* YIELD */
A68_185  TYRAELA;  /* OPERATORS - mode -> union mode */
A68_185 * UYRAELA;  /* YIELD */
A68_419  VYRAELA;  /* collateral clause result */
A68_185  WYRAELA;  /* avoid structure result */
A68_182  XYRAELA_f;
A68_188 * YYRAELA_ic;
A68_188  ZYRAELA;  /* avoid structure result */
A68_419  AZRAELA;  /* avoid structure result */
A68_188  BZRAELA;  /* avoid structure result */
A68_188 * CZRAELA;  /* YIELD */
A68_185 * DZRAELA;  /* YIELD */
A68_185  EZRAELA;  /* OPERATORS - mode -> union mode */
A68_185 * FZRAELA;  /* YIELD */
A68_419  GZRAELA;  /* collateral clause result */
A68_185  HZRAELA;  /* avoid structure result */
A68_BOOL  IZRAELA;  /* optbool result */
A68_419  JZRAELA;  /* clause result */
A_PROC_ENTRY(testints);
 /* line 2283: */
{ 
 /* line 2285: */
 /* line 2290: */
A_CLOSURE( FXRAELA_getintcheck, GXRAELA_getintcheck, HXRAELA_getintcheck );
(( HXRAELA_getintcheck * ) ( FXRAELA_getintcheck.nonlocals )) -> SWRAELA_intcheck = (&SWRAELA_intcheck);
 /* line 2296: */
CDRAELA_simplify( Int, A68_TRUE, &MXRAELA );
LXRAELA_int1 = MXRAELA;
CDRAELA_simplify( Stand, A68_TRUE, &OXRAELA );
NXRAELA_stand1 = OXRAELA;
 /* line 2297: */
PXRAELA.Test = ASRAELA_true;
PXRAELA.Integer = Int;
QXRAELA_ans = PXRAELA;
 /* line 2299: */
 /* line 2300: */
RXRAELA = Check.C ;
TXRAELA = A_ABS(RXRAELA) ;
UXRAELA = 8 ;
if ( (A_MOD(TXRAELA,UXRAELA,SXRAELA)==1) )
{ 
 /* line 2302: */
CTRAELA_testexpressions( LXRAELA_int1, NXRAELA_stand1, Diff, &WXRAELA );
XXRAELA = (&((&QXRAELA_ans)->Test)) ;
VXRAELA = LSRAELA_((*XXRAELA) = WXRAELA, CSRAELA_unknown);
} 
else
{ 
 /* line 2303: */
 /* line 2304: */
 /* line 2305: */
VXRAELA = A68_TRUE;
} 
if ( VXRAELA )
{ 
 /* line 2306: */
YXRAELA = LXRAELA_int1 ;
switch ( YXRAELA.mode )
{ 
case 1: /* INT */
ZXRAELA_i = (YXRAELA.data.mode1);
 /* line 2307: */
 /* line 2308: */
AYRAELA = NXRAELA_stand1 ;
switch ( AYRAELA.mode )
{ 
case 1: /* INT */
BYRAELA_j = (AYRAELA.data.mode1);
 /* line 2309: */
 /* line 2310: */
CYRAELA = Check.C ;
EYRAELA = A_ABS(CYRAELA) ;
FYRAELA = 8 ;
switch ( A_MOD(EYRAELA,FYRAELA,DYRAELA) )
{ 
case 1: 
GYRAELA = (ZXRAELA_i==BYRAELA_j);
break;
case 2: 
GYRAELA = (ZXRAELA_i<=BYRAELA_j);
break;
case 3: 
 /* line 2311: */
GYRAELA = (ZXRAELA_i>=BYRAELA_j);
break;
case 4: 
GYRAELA = (ZXRAELA_i==BYRAELA_j);
break;
case 5: 
 /* line 2312: */
GYRAELA = (ZXRAELA_i!=BYRAELA_j);
break;
default: 
UQPAELA_fault(0, A_HVEC(JYRAELA,IYRAELA,A68_VC ));
 /* line 2313: */
GYRAELA = A68_FALSE;
break;
} 
 /* line 2314: */
HSRAELA_testbool( GYRAELA, &KYRAELA );
LYRAELA = (&((&QXRAELA_ans)->Test)) ;
(*LYRAELA) = KYRAELA;
break;
case 4: /* STRUCT(INT)  */
MYRAELA_f = (AYRAELA.data.mode4);
 /* line 2315: */
/*SKIP*/;
break;
case 5: /* REF STRUCT(MODE185,MODE185,INT)  */
NYRAELA_ic = (AYRAELA.data.mode5);
 /* line 2316: */
{ 
 /* line 2317: */
A_CALLPROC(FXRAELA_getintcheck,(Stand, &OYRAELA),(Stand, &OYRAELA,(FXRAELA_getintcheck).nonlocals));
RWRAELA_testints( Check, Int, OYRAELA.Integer, No, Params, Diff, &PYRAELA );
QXRAELA_ans = PYRAELA;
 /* line 2318: */
A_CALLPROC(FXRAELA_getintcheck,(Stand, &QYRAELA),(Stand, &QYRAELA,(FXRAELA_getintcheck).nonlocals));
RYRAELA = A_HEAP(A68_188 ) ;
(*RYRAELA) = QYRAELA ;
SWRAELA_intcheck = RYRAELA;
 /* line 2319: */
SYRAELA = (&(SWRAELA_intcheck->Integer)) ;
(*SYRAELA) = (*(&((&QXRAELA_ans)->Integer)));
 /* line 2320: */
 /* line 2321: */
 /* line 2322: */
UYRAELA = (&((&QXRAELA_ans)->Integer)) ;
(*UYRAELA) = A_UNITE(TYRAELA,mode5,5,SWRAELA_intcheck);
} 
break;
default: 
VYRAELA.Test = CSRAELA_unknown;
 /* line 2323: */
WWRAELA_result( Int, Stand, Check, &WYRAELA );
VYRAELA.Integer = WYRAELA;
 /* line 2324: */
QXRAELA_ans = VYRAELA;
break;
} 
break;
case 4: /* STRUCT(INT)  */
XYRAELA_f = (YXRAELA.data.mode4);
 /* line 2325: */
/*SKIP*/;
break;
case 5: /* REF STRUCT(MODE185,MODE185,INT)  */
YYRAELA_ic = (YXRAELA.data.mode5);
 /* line 2326: */
{ 
 /* line 2327: */
A_CALLPROC(FXRAELA_getintcheck,(Int, &ZYRAELA),(Int, &ZYRAELA,(FXRAELA_getintcheck).nonlocals));
RWRAELA_testints( Check, ZYRAELA.Integer, Stand, No, Params, Diff, &AZRAELA );
QXRAELA_ans = AZRAELA;
 /* line 2328: */
A_CALLPROC(FXRAELA_getintcheck,(Int, &BZRAELA),(Int, &BZRAELA,(FXRAELA_getintcheck).nonlocals));
CZRAELA = A_HEAP(A68_188 ) ;
(*CZRAELA) = BZRAELA ;
SWRAELA_intcheck = CZRAELA;
 /* line 2329: */
DZRAELA = (&(SWRAELA_intcheck->Integer)) ;
(*DZRAELA) = (*(&((&QXRAELA_ans)->Integer)));
 /* line 2330: */
 /* line 2331: */
 /* line 2332: */
FZRAELA = (&((&QXRAELA_ans)->Integer)) ;
(*FZRAELA) = A_UNITE(EZRAELA,mode5,5,SWRAELA_intcheck);
} 
break;
default: 
GZRAELA.Test = CSRAELA_unknown;
 /* line 2333: */
WWRAELA_result( Int, Stand, Check, &HZRAELA );
GZRAELA.Integer = HZRAELA;
 /* line 2334: */
QXRAELA_ans = GZRAELA;
break;
} 
} 
 /* line 2335: */
IZRAELA = LSRAELA_((*(&((&QXRAELA_ans)->Test))), BSRAELA_false);
if ( IZRAELA )
{ /* line 2336: */
IZRAELA = (No>0);
}
if ( IZRAELA )
{ 
 /* line 2337: */
SZPAELA_faultp(No, Params);
} 
 /* line 2338: */
 /* line 2339: */
JZRAELA = QXRAELA_ans;
} 
A_PROC_EXIT(testints);
*ReturnedValue = (JZRAELA);
return;
} 
#undef NL
 /* line 2342: */

A68_BOOL  PZRAELA_testintegers(A68_421  Check, A68_185 * Int, A68_185  Stand, A68_INT  No, A68_262  Params)
{ 
A68_419  QZRAELA;  /* avoid structure result */
A68_419  RZRAELA_result;
A68_185 * SZRAELA;  /* YIELD */
A68_BOOL  TZRAELA;  /* clause result */
A_PROC_ENTRY(testintegers);
 /* line 2343: */
{ 
RWRAELA_testints( Check, (*Int), Stand, No, Params, 0, &QZRAELA );
RZRAELA_result = QZRAELA;
 /* line 2344: */
SZRAELA = A_HEAP(A68_185 ) ;
(*Int) = (*SZRAELA) = RZRAELA_result.Integer;
 /* line 2345: */
 /* line 2346: */
TZRAELA = !LSRAELA_(RZRAELA_result.Test, BSRAELA_false);
} 
A_PROC_EXIT(testintegers);
return( TZRAELA );
} 
#undef NL

A_STATIC A68_BOOL  XZRAELA_integerequals(A68_185  A, A68_185  B, A68_INT  Diff)
{ 
A68_BOOL  YZRAELA;  /* clause result */
A68_263  ZZRAELA;  /* OPERATORS - mode -> union mode */
A68_262  AASAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_419  BASAELA;  /* avoid structure result */
A_PROC_ENTRY(integerequals);
 /* line 2350: */
RWRAELA_testints( ZVRAELA_checktype, A, B, 0, A_HVEC(AASAELA,A_UNITE(ZZRAELA,mode13,13,TTCAOST_nullid),A68_263 ), Diff, &BASAELA );
YZRAELA = LSRAELA_(BASAELA.Test, ASRAELA_true);
A_PROC_EXIT(integerequals);
return( YZRAELA );
} 
#undef NL
 /* line 2355: */

A68_VOID  JASAELA_checkequals(A68_172  A1, A68_172  B1, A68_BOOL  Outcheck, A68_BOOL  Ignore, A68_BOOL  Exact, A68_INT  Diff, A68_414  *ReturnedValue)
{ 
A68_175 * KASAELA_st1;
A68_INT  LASAELA_k;
A68_414  MASAELA_result;
A68_246 * NASAELA_nstack;
A68_43  PASAELA_addname;   /* proc value of non-global proc */
A68_420  CBSAELA_checkints;   /* proc value of non-global proc */
A68_430  NBSAELA_equalspalts;   /* proc value of non-global proc */
A68_431  BCSAELA_equalcharalts;   /* proc value of non-global proc */
A68_172  VCSAELA;  /* avoid structure result */
A68_172  UCSAELA_a;
A68_172  XCSAELA;  /* avoid structure result */
A68_172  WCSAELA_b;
A68_172  YCSAELA;  /* united object - for case conformity */
A68_176 * ZCSAELA_tva;
A68_172  ADSAELA;  /* united object - for case conformity */
A68_172  BDSAELA;  /* united object - for case conformity */
A68_176 * CDSAELA_tvb;
A68_172  DDSAELA;  /* united object - for case conformity */
A68_173 * EDSAELA_ap;
A68_172  FDSAELA;  /* united object - for case conformity */
A68_173 * GDSAELA_bp;
A68_BOOL  HDSAELA;  /* optbool result */
A68_BOOL  IDSAELA;  /* optbool result */
A68_247  JDSAELA;  /* united object - for case conformity */
A68_248  KDSAELA_ar;
A68_247  LDSAELA;  /* united object - for case conformity */
A68_248  MDSAELA_br;
A68_414  NDSAELA;  /* clause result */
A68_414  ODSAELA;  /* avoid structure result */
A68_414  PDSAELA;  /* avoid structure result */
A68_414  QDSAELA;  /* avoid structure result */
A68_414  RDSAELA;  /* avoid structure result */
A68_414  SDSAELA;  /* avoid structure result */
A68_249 * TDSAELA_aa;
A68_247  UDSAELA;  /* united object - for case conformity */
A68_249 * VDSAELA_ba;
A68_414  WDSAELA;  /* avoid structure result */
A68_250  XDSAELA_as;
A68_247  YDSAELA;  /* united object - for case conformity */
A68_250  ZDSAELA_bs;
A68_414  AESAELA;  /* avoid structure result */
A68_414  BESAELA;  /* avoid structure result */
A68_414  CESAELA;  /* avoid structure result */
A68_414  DESAELA;  /* OPERATORS - skip to mode */
A68_414  EESAELA;  /* avoid structure result */
A68_414  FESAELA;  /* avoid structure result */
A68_BOOL  GESAELA;  /* optbool result */
A68_414  HESAELA;  /* clause result */
A68_174 * IESAELA_bn;
A68_172  JESAELA;  /* OPERATORS - mode -> union mode */
A68_414  KESAELA;  /* avoid structure result */
A68_182  LESAELA_f;
A68_174 * MESAELA_an;
A68_172  NESAELA;  /* united object - for case conformity */
A68_174 * OESAELA_bn;
A68_414  PESAELA;  /* avoid structure result */
A68_414  QESAELA;  /* avoid structure result */
A68_414  RESAELA;  /* avoid structure result */
A68_414  SESAELA;  /* avoid structure result */
A68_172  TESAELA;  /* united object - for case conformity */
A68_174 * UESAELA_bn;
A68_BOOL  VESAELA;  /* optbool result */
A68_175 * WESAELA_as;
A68_172  XESAELA;  /* united object - for case conformity */
A68_175 * YESAELA_bs;
A68_414  ZESAELA;  /* clause result */
A68_414  AFSAELA;  /* avoid structure result */
A68_172  BFSAELA;  /* OPERATORS - mode -> union mode */
A68_175 * CFSAELA;  /* YIELD */
A68_172  DFSAELA;  /* OPERATORS - mode -> union mode */
A68_175 * EFSAELA;  /* YIELD */
A68_414  FFSAELA;  /* avoid structure result */
A68_414  GFSAELA;  /* avoid structure result */
A68_414  HFSAELA;  /* avoid structure result */
A68_179 * IFSAELA_br;
A68_INT  MFSAELA_i;
A68_414  NFSAELA;  /* avoid structure result */
A68_185  OFSAELA;  /* OPERATORS - mode -> union mode */
A68_414  PFSAELA;  /* avoid structure result */
A68_414  QFSAELA;  /* avoid structure result */
A68_179 * RFSAELA_ar;
A68_172  SFSAELA;  /* united object - for case conformity */
A68_175 * TFSAELA_bs;
A68_414  UFSAELA;  /* avoid structure result */
A68_179 * VFSAELA_br;
A68_414  WFSAELA;  /* avoid structure result */
A68_414  XFSAELA;  /* avoid structure result */
A68_414  YFSAELA;  /* avoid structure result */
A68_414  ZFSAELA;  /* avoid structure result */
A68_178 * AGSAELA_f1;
A68_172  BGSAELA;  /* united object - for case conformity */
A68_178 * CGSAELA_f2;
A68_414  DGSAELA;  /* avoid structure result */
A68_414  EGSAELA;  /* avoid structure result */
A68_414  FGSAELA;  /* avoid structure result */
A68_174 * GGSAELA_n;
A68_414  HGSAELA;  /* avoid structure result */
A68_182  IGSAELA_f;
A68_176 * JGSAELA_tv;
A68_172  KGSAELA;  /* united object - for case conformity */
A68_176 * LGSAELA_tv1;
A68_245 * MGSAELA_tvm;
A68_245 * NGSAELA_tv1m;
A68_BOOL  OGSAELA;  /* optbool result */
A68_414  PGSAELA;  /* avoid structure result */
A68_174 * QGSAELA_n;
A68_414  RGSAELA;  /* avoid structure result */
A68_182  SGSAELA_f;
A68_181 * TGSAELA_ats;
A68_172  UGSAELA;  /* united object - for case conformity */
A68_181 * VGSAELA_bts;
A68_414  WGSAELA;  /* avoid structure result */
A68_414  XGSAELA;  /* avoid structure result */
A68_414  YGSAELA;  /* avoid structure result */
A68_174 * ZGSAELA_n;
A68_414  AHSAELA;  /* avoid structure result */
A68_182  BHSAELA_f;
A68_184  CHSAELA_atv;
A68_172  DHSAELA;  /* united object - for case conformity */
A68_174 * EHSAELA_n;
A68_414  FHSAELA;  /* avoid structure result */
A68_184  GHSAELA_btv;
A_PROC_ENTRY(checkequals);
 /* line 2356: */
 /* line 2362: */
{ 
 /* line 2363: */
 /* line 2365: */
A_CLOSURE( PASAELA_addname, QASAELA_addname, RASAELA_addname );
(( RASAELA_addname * ) ( PASAELA_addname.nonlocals )) -> NASAELA_nstack = (&NASAELA_nstack);
 /* line 2377: */
A_CLOSURE( CBSAELA_checkints, DBSAELA_checkints, EBSAELA_checkints );
(( EBSAELA_checkints * ) ( CBSAELA_checkints.nonlocals )) -> Outcheck = Outcheck;
(( EBSAELA_checkints * ) ( CBSAELA_checkints.nonlocals )) -> Ignore = Ignore;
 /* line 2385: */
A_CLOSURE( NBSAELA_equalspalts, OBSAELA_equalspalts, PBSAELA_equalspalts );
(( PBSAELA_equalspalts * ) ( NBSAELA_equalspalts.nonlocals )) -> NBSAELA_equalspalts = NBSAELA_equalspalts;
(( PBSAELA_equalspalts * ) ( NBSAELA_equalspalts.nonlocals )) -> Outcheck = Outcheck;
(( PBSAELA_equalspalts * ) ( NBSAELA_equalspalts.nonlocals )) -> Ignore = Ignore;
(( PBSAELA_equalspalts * ) ( NBSAELA_equalspalts.nonlocals )) -> Exact = Exact;
(( PBSAELA_equalspalts * ) ( NBSAELA_equalspalts.nonlocals )) -> Diff = Diff;
 /* line 2399: */
A_CLOSURE( BCSAELA_equalcharalts, CCSAELA_equalcharalts, DCSAELA_equalcharalts );
(( DCSAELA_equalcharalts * ) ( BCSAELA_equalcharalts.nonlocals )) -> BCSAELA_equalcharalts = BCSAELA_equalcharalts;
 /* line 2419: */
ZGDAELA_gettype( A1, &VCSAELA );
UCSAELA_a = VCSAELA;
ZGDAELA_gettype( B1, &XCSAELA );
WCSAELA_b = XCSAELA;
 /* line 2420: */
 /* line 2421: */
YCSAELA = UCSAELA_a ;
switch ( YCSAELA.mode )
{ 
case 4: /* REF STRUCT(REF MODE245,MODE172)  */
ZCSAELA_tva = (YCSAELA.data.mode4);
 /* line 2422: */
 /* line 2423: */
ADSAELA = WCSAELA_b ;
switch ( ADSAELA.mode )
{ 
case 4: /* REF STRUCT(REF MODE245,MODE172)  */
 /* line 2424: */
/*SKIP*/;
break;
default: 
 /* line 2425: */
 /* line 2426: */
UCSAELA_a = (*(&(ZCSAELA_tva->T)));
break;
} 
break;
default: 
 /* line 2427: */
BDSAELA = WCSAELA_b ;
switch ( BDSAELA.mode )
{ 
case 4: /* REF STRUCT(REF MODE245,MODE172)  */
CDSAELA_tvb = (BDSAELA.data.mode4);
 /* line 2428: */
 /* line 2429: */
WCSAELA_b = (*(&(CDSAELA_tvb->T)));
break;
default: 
 /* line 2430: */
/*SKIP*/;
break;
} 
break;
} 
 /* line 2432: */
 /* line 2433: */
DDSAELA = UCSAELA_a ;
switch ( DDSAELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE198,INT,MODE247)  */
EDSAELA_ap = (DDSAELA.data.mode1);
 /* line 2434: */
 /* line 2435: */
FDSAELA = WCSAELA_b ;
switch ( FDSAELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE198,INT,MODE247)  */
GDSAELA_bp = (FDSAELA.data.mode1);
 /* line 2436: */
{ 
 /* line 2437: */
HDSAELA = A_VC_EQ((*(&((*(&(EDSAELA_ap->Idinfo)))->Id))),(*(&((*(&(GDSAELA_bp->Idinfo)))->Id))));
if ( HDSAELA )
{IDSAELA = ((*(&((*(&(EDSAELA_ap->Idinfo)))->Scope)))<1);
if ( IDSAELA )
{IDSAELA = ((*(&((*(&(GDSAELA_bp->Idinfo)))->Scope)))<1);
}
 /* line 2438: */
if ( ! IDSAELA )
{ /* line 2439: */
IDSAELA = ((*(&(EDSAELA_ap->Typeno)))==(*(&(GDSAELA_bp->Typeno))));
}
HDSAELA = IDSAELA;
}
 /* line 2440: */
 /* line 2441: */
 /* line 2442: */
JDSAELA = (*(&(EDSAELA_ap->U))) ;
switch ( JDSAELA.mode )
{ 
case 1: /* STRUCT(REF MODE198,MODE185,MODE185)  */
KDSAELA_ar = (JDSAELA.data.mode1);
 /* line 2443: */
 /* line 2444: */
LDSAELA = (*(&(GDSAELA_bp->U))) ;
switch ( LDSAELA.mode )
{ 
case 1: /* STRUCT(REF MODE198,MODE185,MODE185)  */
MDSAELA_br = (LDSAELA.data.mode1);
 /* line 2445: */
 /* line 2446: */
 /* line 2447: */
 /* line 2448: */
 /* line 2449: */
A_CALLPROC(CBSAELA_checkints,(KDSAELA_ar.Upb, MDSAELA_br.Upb, Diff, &ODSAELA),(KDSAELA_ar.Upb, MDSAELA_br.Upb, Diff, &ODSAELA,(CBSAELA_checkints).nonlocals));
A_CALLPROC(CBSAELA_checkints,(KDSAELA_ar.Lwb, MDSAELA_br.Lwb, Diff, &PDSAELA),(KDSAELA_ar.Lwb, MDSAELA_br.Lwb, Diff, &PDSAELA,(CBSAELA_checkints).nonlocals));
HSRAELA_testbool( A_VC_EQ((*(&(KDSAELA_ar.Idinfo->Id))),(*(&(MDSAELA_br.Idinfo->Id)))), &QDSAELA );
PSRAELA_and( QDSAELA, PDSAELA, &RDSAELA );
PSRAELA_and( RDSAELA, ODSAELA, &SDSAELA );
NDSAELA = SDSAELA;
break;
default: 
 /* line 2450: */
NDSAELA = BSRAELA_false;
break;
} 
break;
case 2: /* REF STRUCT(REF MODE198,REF MODE172,REF MODE249)  */
TDSAELA_aa = (JDSAELA.data.mode2);
 /* line 2451: */
 /* line 2452: */
UDSAELA = (*(&(GDSAELA_bp->U))) ;
switch ( UDSAELA.mode )
{ 
case 2: /* REF STRUCT(REF MODE198,REF MODE172,REF MODE249)  */
VDSAELA_ba = (UDSAELA.data.mode2);
 /* line 2453: */
 /* line 2454: */
A_CALLPROC(NBSAELA_equalspalts,(TDSAELA_aa, VDSAELA_ba, &WDSAELA),(TDSAELA_aa, VDSAELA_ba, &WDSAELA,(NBSAELA_equalspalts).nonlocals));
NDSAELA = WDSAELA;
break;
default: 
 /* line 2455: */
NDSAELA = BSRAELA_false;
break;
} 
break;
case 3: /* STRUCT(REF MODE198,REF MODE54,REF MODE251)  */
XDSAELA_as = (JDSAELA.data.mode3);
 /* line 2456: */
 /* line 2457: */
YDSAELA = (*(&(GDSAELA_bp->U))) ;
switch ( YDSAELA.mode )
{ 
case 3: /* STRUCT(REF MODE198,REF MODE54,REF MODE251)  */
ZDSAELA_bs = (YDSAELA.data.mode3);
 /* line 2458: */
 /* line 2459: */
 /* line 2460: */
 /* line 2461: */
A_CALLPROC(BCSAELA_equalcharalts,(XDSAELA_as.Charalts, ZDSAELA_bs.Charalts, &AESAELA),(XDSAELA_as.Charalts, ZDSAELA_bs.Charalts, &AESAELA,(BCSAELA_equalcharalts).nonlocals));
HSRAELA_testbool( A_VC_EQ((*(&(XDSAELA_as.Idinfo->Id))),(*(&(ZDSAELA_bs.Idinfo->Id)))), &BESAELA );
PSRAELA_and( BESAELA, AESAELA, &CESAELA );
NDSAELA = CESAELA;
break;
default: 
 /* line 2462: */
 /* line 2463: */
NDSAELA = BSRAELA_false;
break;
} 
break;
default: 
NDSAELA = DESAELA;
break;
} 
HSRAELA_testbool( HDSAELA, &EESAELA );
PSRAELA_and( EESAELA, NDSAELA, &FESAELA );
MASAELA_result = FESAELA;
 /* line 2464: */
GESAELA = LSRAELA_(MASAELA_result, BSRAELA_false);
if ( GESAELA )
{ /* line 2465: */
GESAELA = A_VC_EQ((*(&((*(&(EDSAELA_ap->Idinfo)))->Id))),(*(&((*(&(GDSAELA_bp->Idinfo)))->Id))));
}
if ( GESAELA )
{ 
 /* line 2466: */
A_CALLPROC(PASAELA_addname,((*(&((*(&(EDSAELA_ap->Idinfo)))->Id)))),((*(&((*(&(EDSAELA_ap->Idinfo)))->Id))),(PASAELA_addname).nonlocals));
} 
 /* line 2467: */
 /* line 2468: */
HESAELA = MASAELA_result;
} 
break;
case 2: /* REF STRUCT(REF MODE198,INT,MODE172)  */
IESAELA_bn = (FDSAELA.data.mode2);
 /* line 2469: */
 /* line 2470: */
 /* line 2471: */
if ( Exact )
{ 
HESAELA = BSRAELA_false;
} 
else
{ 
 /* line 2472: */
 /* line 2473: */
JASAELA_checkequals( A_UNITE(JESAELA,mode1,1,EDSAELA_ap), (*(&(IESAELA_bn->T))), Outcheck, Ignore, Exact, Diff, &KESAELA );
HESAELA = KESAELA;
} 
break;
case 10: /* STRUCT(INT)  */
LESAELA_f = (FDSAELA.data.mode10);
 /* line 2474: */
 /* line 2475: */
HESAELA = ASRAELA_true;
break;
default: 
 /* line 2476: */
HESAELA = BSRAELA_false;
break;
} 
break;
case 2: /* REF STRUCT(REF MODE198,INT,MODE172)  */
MESAELA_an = (DDSAELA.data.mode2);
 /* line 2477: */
{ 
 /* line 2478: */
if ( Exact )
{ 
 /* line 2479: */
NESAELA = WCSAELA_b ;
switch ( NESAELA.mode )
{ 
case 2: /* REF STRUCT(REF MODE198,INT,MODE172)  */
OESAELA_bn = (NESAELA.data.mode2);
 /* line 2480: */
 /* line 2481: */
 /* line 2482: */
 /* line 2483: */
JASAELA_checkequals( (*(&(MESAELA_an->T))), (*(&(OESAELA_bn->T))), Outcheck, Ignore, Exact, Diff, &PESAELA );
HSRAELA_testbool( A_VC_EQ((*(&((*(&(MESAELA_an->Idinfo)))->Id))),(*(&((*(&(OESAELA_bn->Idinfo)))->Id)))), &QESAELA );
PSRAELA_and( QESAELA, PESAELA, &RESAELA );
HESAELA = RESAELA;
break;
default: 
 /* line 2484: */
HESAELA = BSRAELA_false;
break;
} 
} 
else
{ 
JASAELA_checkequals( (*(&(MESAELA_an->T))), WCSAELA_b, Outcheck, Ignore, Exact, Diff, &SESAELA );
MASAELA_result = SESAELA;
 /* line 2485: */
 /* line 2486: */
TESAELA = WCSAELA_b ;
switch ( TESAELA.mode )
{ 
case 2: /* REF STRUCT(REF MODE198,INT,MODE172)  */
UESAELA_bn = (TESAELA.data.mode2);
 /* line 2487: */
 /* line 2488: */
VESAELA = LSRAELA_(MASAELA_result, BSRAELA_false);
if ( VESAELA )
{ /* line 2489: */
VESAELA = A_VC_EQ((*(&((*(&(MESAELA_an->Idinfo)))->Id))),(*(&((*(&(UESAELA_bn->Idinfo)))->Id))));
}
if ( VESAELA )
{ 
 /* line 2490: */
 /* line 2491: */
 /* line 2492: */
A_CALLPROC(PASAELA_addname,((*(&((*(&(MESAELA_an->Idinfo)))->Id)))),((*(&((*(&(MESAELA_an->Idinfo)))->Id))),(PASAELA_addname).nonlocals));
} 
break;
default: 
/*SKIP*/;
break;
} 
 /* line 2493: */
 /* line 2494: */
 /* line 2495: */
HESAELA = MASAELA_result;
} 
} 
break;
case 3: /* REF STRUCT(MODE172,REF MODE175)  */
WESAELA_as = (DDSAELA.data.mode3);
 /* line 2496: */
 /* line 2497: */
XESAELA = WCSAELA_b ;
switch ( XESAELA.mode )
{ 
case 3: /* REF STRUCT(MODE172,REF MODE175)  */
YESAELA_bs = (XESAELA.data.mode3);
 /* line 2498: */
 /* line 2499: */
 /* line 2500: */
if ( ((*(&(WESAELA_as->Rest)))==DQCAELA_nilst) )
{ 
 /* line 2501: */
HSRAELA_testbool( ((*(&(YESAELA_bs->Rest)))==DQCAELA_nilst), &AFSAELA );
ZESAELA = AFSAELA;
} 
else
{ 
 /* line 2502: */
if ( ((*(&(YESAELA_bs->Rest)))!=DQCAELA_nilst) )
{ 
 /* line 2503: */
 /* line 2504: */
 /* line 2505: */
CFSAELA = (*(&(YESAELA_bs->Rest))) ;
EFSAELA = (*(&(WESAELA_as->Rest))) ;
JASAELA_checkequals( A_UNITE(DFSAELA,mode3,3,EFSAELA), A_UNITE(BFSAELA,mode3,3,CFSAELA), Outcheck, Ignore, Exact, Diff, &FFSAELA );
ZESAELA = FFSAELA;
} 
else
{ 
ZESAELA = BSRAELA_false;
} 
} 
 /* line 2506: */
JASAELA_checkequals( (*(&(WESAELA_as->T))), (*(&(YESAELA_bs->T))), Outcheck, Ignore, Exact, Diff, &GFSAELA );
PSRAELA_and( GFSAELA, ZESAELA, &HFSAELA );
HESAELA = HFSAELA;
break;
case 7: /* REF STRUCT(MODE172,MODE185)  */
IFSAELA_br = (XESAELA.data.mode7);
 /* line 2507: */
{ 
KASAELA_st1 = WESAELA_as;
 /* line 2508: */
for ( MFSAELA_i = 1;;
MFSAELA_i += 1 ) 
{ 
 /* line 2509: */
if ( !((KASAELA_st1!=DQCAELA_nilst)) ) break;
 /* line 2510: */
 /* line 2511: */
JASAELA_checkequals( (*(&(IFSAELA_br->T))), (*(&(KASAELA_st1->T))), Outcheck, Ignore, Exact, (-Diff), &NFSAELA );
if ( LSRAELA_(NFSAELA, BSRAELA_false) )
{ 
goto LFSAELA_fail;
} 
 /* line 2512: */
KASAELA_st1 = (*(&(KASAELA_st1->Rest)));
 /* line 2513: */
LASAELA_k = MFSAELA_i;
}
 /* line 2514: */
 /* line 2515: */
 /* line 2516: */
A_CALLPROC(CBSAELA_checkints,((*(&(IFSAELA_br->Size))), A_UNITE(OFSAELA,mode1,1,LASAELA_k), (-Diff), &PFSAELA),((*(&(IFSAELA_br->Size))), A_UNITE(OFSAELA,mode1,1,LASAELA_k), (-Diff), &PFSAELA,(CBSAELA_checkints).nonlocals));
HESAELA = PFSAELA;
goto JFSAELA;
LFSAELA_fail:
 /* line 2517: */
 /* line 2518: */
 /* line 2519: */
HESAELA = BSRAELA_false;
JFSAELA: ;
} 
break;
default: 
 /* line 2520: */
 /* line 2521: */
JASAELA_checkequals( WCSAELA_b, UCSAELA_a, Outcheck, Ignore, Exact, (-Diff), &QFSAELA );
HESAELA = QFSAELA;
break;
} 
break;
case 7: /* REF STRUCT(MODE172,MODE185)  */
RFSAELA_ar = (DDSAELA.data.mode7);
 /* line 2522: */
 /* line 2523: */
SFSAELA = WCSAELA_b ;
switch ( SFSAELA.mode )
{ 
case 3: /* REF STRUCT(MODE172,REF MODE175)  */
TFSAELA_bs = (SFSAELA.data.mode3);
 /* line 2524: */
JASAELA_checkequals( WCSAELA_b, UCSAELA_a, Outcheck, Ignore, Exact, (-Diff), &UFSAELA );
HESAELA = UFSAELA;
break;
case 7: /* REF STRUCT(MODE172,MODE185)  */
VFSAELA_br = (SFSAELA.data.mode7);
 /* line 2525: */
 /* line 2526: */
 /* line 2527: */
 /* line 2528: */
A_CALLPROC(CBSAELA_checkints,((*(&(RFSAELA_ar->Size))), (*(&(VFSAELA_br->Size))), Diff, &WFSAELA),((*(&(RFSAELA_ar->Size))), (*(&(VFSAELA_br->Size))), Diff, &WFSAELA,(CBSAELA_checkints).nonlocals));
JASAELA_checkequals( (*(&(RFSAELA_ar->T))), (*(&(VFSAELA_br->T))), Outcheck, Ignore, Exact, Diff, &XFSAELA );
PSRAELA_and( XFSAELA, WFSAELA, &YFSAELA );
HESAELA = YFSAELA;
break;
default: 
 /* line 2529: */
 /* line 2530: */
JASAELA_checkequals( WCSAELA_b, UCSAELA_a, Outcheck, Ignore, Exact, (-Diff), &ZFSAELA );
HESAELA = ZFSAELA;
break;
} 
break;
case 6: /* REF STRUCT(MODE172,MODE172)  */
AGSAELA_f1 = (DDSAELA.data.mode6);
 /* line 2531: */
 /* line 2532: */
BGSAELA = WCSAELA_b ;
switch ( BGSAELA.mode )
{ 
case 6: /* REF STRUCT(MODE172,MODE172)  */
CGSAELA_f2 = (BGSAELA.data.mode6);
 /* line 2533: */
 /* line 2534: */
 /* line 2535: */
JASAELA_checkequals( (*(&(AGSAELA_f1->To))), (*(&(CGSAELA_f2->To))), Outcheck, Ignore, Exact, Diff, &DGSAELA );
JASAELA_checkequals( (*(&(AGSAELA_f1->From))), (*(&(CGSAELA_f2->From))), Outcheck, Ignore, Exact, Diff, &EGSAELA );
PSRAELA_and( EGSAELA, DGSAELA, &FGSAELA );
HESAELA = FGSAELA;
break;
case 2: /* REF STRUCT(REF MODE198,INT,MODE172)  */
GGSAELA_n = (BGSAELA.data.mode2);
 /* line 2536: */
 /* line 2537: */
 /* line 2538: */
if ( Exact )
{ 
HESAELA = BSRAELA_false;
} 
else
{ 
 /* line 2539: */
 /* line 2540: */
JASAELA_checkequals( UCSAELA_a, (*(&(GGSAELA_n->T))), Outcheck, Ignore, Exact, Diff, &HGSAELA );
HESAELA = HGSAELA;
} 
break;
case 10: /* STRUCT(INT)  */
IGSAELA_f = (BGSAELA.data.mode10);
 /* line 2541: */
 /* line 2542: */
HESAELA = ASRAELA_true;
break;
default: 
 /* line 2543: */
HESAELA = BSRAELA_false;
break;
} 
break;
case 4: /* REF STRUCT(REF MODE245,MODE172)  */
JGSAELA_tv = (DDSAELA.data.mode4);
 /* line 2544: */
 /* line 2545: */
KGSAELA = WCSAELA_b ;
switch ( KGSAELA.mode )
{ 
case 4: /* REF STRUCT(REF MODE245,MODE172)  */
LGSAELA_tv1 = (KGSAELA.data.mode4);
 /* line 2546: */
{ 
MGSAELA_tvm = (*(&(JGSAELA_tv->Tm)));
 /* line 2547: */
NGSAELA_tv1m = (*(&(LGSAELA_tv1->Tm)));
 /* line 2548: */
 /* line 2549: */
OGSAELA = ((*(&((*(&(JGSAELA_tv->Tm)))->Index)))==(*(&((*(&(LGSAELA_tv1->Tm)))->Index))));
if ( OGSAELA )
{ /* line 2550: */
OGSAELA = (((*(&((*(&(JGSAELA_tv->Tm)))->Fnno)))-(*(&((*(&(LGSAELA_tv1->Tm)))->Fnno))))==Diff);
}
 /* line 2551: */
if ( OGSAELA )
{OGSAELA = A_CALLPROC(CASAELA_equiv_types,((*(&(JGSAELA_tv->T))), (*(&(LGSAELA_tv1->T))), Diff),((*(&(JGSAELA_tv->T))), (*(&(LGSAELA_tv1->T))), Diff,(CASAELA_equiv_types).nonlocals));
}
 /* line 2552: */
 /* line 2553: */
HSRAELA_testbool( OGSAELA, &PGSAELA );
HESAELA = PGSAELA;
} 
break;
case 2: /* REF STRUCT(REF MODE198,INT,MODE172)  */
QGSAELA_n = (KGSAELA.data.mode2);
 /* line 2554: */
 /* line 2555: */
 /* line 2556: */
if ( Exact )
{ 
HESAELA = BSRAELA_false;
} 
else
{ 
 /* line 2557: */
 /* line 2558: */
JASAELA_checkequals( UCSAELA_a, (*(&(QGSAELA_n->T))), Outcheck, Ignore, Exact, Diff, &RGSAELA );
HESAELA = RGSAELA;
} 
break;
case 10: /* STRUCT(INT)  */
SGSAELA_f = (KGSAELA.data.mode10);
 /* line 2559: */
 /* line 2560: */
HESAELA = ASRAELA_true;
break;
default: 
 /* line 2561: */
HESAELA = BSRAELA_false;
break;
} 
break;
case 9: /* REF STRUCT(MODE185,MODE172)  */
TGSAELA_ats = (DDSAELA.data.mode9);
 /* line 2562: */
 /* line 2563: */
UGSAELA = WCSAELA_b ;
switch ( UGSAELA.mode )
{ 
case 9: /* REF STRUCT(MODE185,MODE172)  */
VGSAELA_bts = (UGSAELA.data.mode9);
 /* line 2564: */
 /* line 2565: */
 /* line 2566: */
 /* line 2567: */
A_CALLPROC(CBSAELA_checkints,((*(&(TGSAELA_ats->Size))), (*(&(VGSAELA_bts->Size))), Diff, &WGSAELA),((*(&(TGSAELA_ats->Size))), (*(&(VGSAELA_bts->Size))), Diff, &WGSAELA,(CBSAELA_checkints).nonlocals));
JASAELA_checkequals( (*(&(TGSAELA_ats->Tstring))), (*(&(VGSAELA_bts->Tstring))), Outcheck, Ignore, Exact, Diff, &XGSAELA );
PSRAELA_and( XGSAELA, WGSAELA, &YGSAELA );
HESAELA = YGSAELA;
break;
case 2: /* REF STRUCT(REF MODE198,INT,MODE172)  */
ZGSAELA_n = (UGSAELA.data.mode2);
 /* line 2568: */
 /* line 2569: */
 /* line 2570: */
if ( Exact )
{ 
HESAELA = BSRAELA_false;
} 
else
{ 
 /* line 2571: */
 /* line 2572: */
JASAELA_checkequals( UCSAELA_a, (*(&(ZGSAELA_n->T))), Outcheck, Ignore, Exact, Diff, &AHSAELA );
HESAELA = AHSAELA;
} 
break;
case 10: /* STRUCT(INT)  */
BHSAELA_f = (UGSAELA.data.mode10);
 /* line 2573: */
 /* line 2574: */
HESAELA = ASRAELA_true;
break;
default: 
 /* line 2575: */
HESAELA = BSRAELA_false;
break;
} 
break;
case 12: /* STRUCT(INT)  */
CHSAELA_atv = (DDSAELA.data.mode12);
 /* line 2576: */
 /* line 2577: */
DHSAELA = WCSAELA_b ;
switch ( DHSAELA.mode )
{ 
case 2: /* REF STRUCT(REF MODE198,INT,MODE172)  */
EHSAELA_n = (DHSAELA.data.mode2);
 /* line 2578: */
 /* line 2579: */
 /* line 2580: */
if ( Exact )
{ 
HESAELA = BSRAELA_false;
} 
else
{ 
 /* line 2581: */
 /* line 2582: */
JASAELA_checkequals( UCSAELA_a, (*(&(EHSAELA_n->T))), Outcheck, Ignore, Exact, Diff, &FHSAELA );
HESAELA = FHSAELA;
} 
break;
case 12: /* STRUCT(INT)  */
GHSAELA_btv = (DHSAELA.data.mode12);
 /* line 2583: */
 /* line 2584: */
HESAELA = ASRAELA_true;
break;
default: 
 /* line 2585: */
HESAELA = BSRAELA_false;
break;
} 
break;
case 5: /* STRUCT(INT)  */
 /* line 2586: */
 /* line 2588: */
HESAELA = BSRAELA_false;
break;
default: 
 /* line 2589: */
HESAELA = ASRAELA_true;
break;
} 
} 
A_PROC_EXIT(checkequals);
*ReturnedValue = (HESAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  KHSAELA_ctypecheck(A68_222  Aa, A68_222  Bb, A68_BOOL  Disjoint, A68_414  *ReturnedValue)
{ 
A68_433  QHSAELA_checkcalts;   /* proc value of non-global proc */
A68_434  AJSAELA_checkcharange;   /* proc value of non-global proc */
A68_435  XJSAELA_checkstring;   /* proc value of non-global proc */
A68_222  ALSAELA;  /* avoid structure result */
A68_222  BLSAELA_a;
A68_222  CLSAELA;  /* avoid structure result */
A68_222  DLSAELA_b;
A68_414  ELSAELA_res;
A68_222  FLSAELA;  /* united object - for case conformity */
A68_414  GLSAELA;  /* avoid structure result */
A68_222  HLSAELA;  /* united object - for case conformity */
A68_414  ILSAELA;  /* clause result */
A68_222  JLSAELA;  /* united object - for case conformity */
A68_222  KLSAELA;  /* united object - for case conformity */
A68_414  LLSAELA;  /* avoid structure result */
A68_414  MLSAELA;  /* clause result */
A68_222  NLSAELA;  /* united object - for case conformity */
A68_224 * OLSAELA_cpr;
A68_222  PLSAELA;  /* united object - for case conformity */
A68_224 * QLSAELA_bcpr;
A68_185  RLSAELA;  /* avoid structure result */
A68_185  SLSAELA;  /* united object - for case conformity */
A68_INT  TLSAELA_ai;
A68_185  ULSAELA;  /* avoid structure result */
A68_185  VLSAELA;  /* united object - for case conformity */
A68_INT  WLSAELA_bi;
A68_414  XLSAELA;  /* clause result */
A68_414  YLSAELA;  /* avoid structure result */
A68_185  ZLSAELA;  /* avoid structure result */
A68_185  AMSAELA;  /* united object - for case conformity */
A68_INT  BMSAELA_bi;
A68_414  CMSAELA;  /* avoid structure result */
A68_185  DMSAELA;  /* avoid structure result */
A68_185  EMSAELA;  /* united object - for case conformity */
A68_INT  FMSAELA_ai;
A68_185  GMSAELA;  /* avoid structure result */
A68_185  HMSAELA;  /* united object - for case conformity */
A68_INT  IMSAELA_bi;
A68_414  JMSAELA;  /* clause result */
A68_414  KMSAELA;  /* avoid structure result */
A68_185  LMSAELA;  /* avoid structure result */
A68_185  MMSAELA;  /* united object - for case conformity */
A68_INT  NMSAELA_bi;
A68_414  OMSAELA;  /* avoid structure result */
A68_414  PMSAELA;  /* clause result */
A68_414  QMSAELA;  /* avoid structure result */
A68_225 * RMSAELA_bcpi;
A68_185  SMSAELA;  /* avoid structure result */
A68_185  TMSAELA;  /* united object - for case conformity */
A68_INT  UMSAELA_bi;
A68_185  VMSAELA;  /* avoid structure result */
A68_185  WMSAELA;  /* united object - for case conformity */
A68_INT  XMSAELA_ai;
A68_414  YMSAELA;  /* clause result */
A68_414  ZMSAELA;  /* avoid structure result */
A68_185  ANSAELA;  /* avoid structure result */
A68_185  BNSAELA;  /* united object - for case conformity */
A68_INT  CNSAELA_ai;
A68_414  DNSAELA;  /* clause result */
A68_414  ENSAELA;  /* avoid structure result */
A68_414  FNSAELA;  /* avoid structure result */
A68_225 * GNSAELA_cpi;
A68_222  HNSAELA;  /* united object - for case conformity */
A68_225 * INSAELA_bcpi;
A68_185  JNSAELA;  /* avoid structure result */
A68_185  KNSAELA;  /* united object - for case conformity */
A68_INT  LNSAELA_aii;
A68_185  MNSAELA;  /* avoid structure result */
A68_185  NNSAELA;  /* united object - for case conformity */
A68_INT  ONSAELA_bii;
A68_414  PNSAELA;  /* avoid structure result */
A68_224 * QNSAELA_bcpr;
A68_414  RNSAELA;  /* avoid structure result */
A68_203 * SNSAELA_p;
A68_222  TNSAELA;  /* united object - for case conformity */
A68_203 * UNSAELA_bp;
A68_414  VNSAELA;  /* avoid structure result */
A68_226 * WNSAELA_cu;
A68_222  XNSAELA;  /* united object - for case conformity */
A68_226 * YNSAELA_bcu;
A68_414  ZNSAELA;  /* avoid structure result */
A68_227 * AOSAELA_cr;
A68_222  BOSAELA;  /* united object - for case conformity */
A68_227 * COSAELA_bcr;
A68_414  DOSAELA;  /* avoid structure result */
A68_414  EOSAELA;  /* avoid structure result */
A68_228 * FOSAELA_cs;
A68_222  GOSAELA;  /* united object - for case conformity */
A68_227 * HOSAELA_bcr;
A68_414  IOSAELA;  /* clause result */
A68_222  JOSAELA;  /* OPERATORS - mode -> union mode */
A68_222  KOSAELA;  /* OPERATORS - mode -> union mode */
A68_228 * LOSAELA;  /* YIELD */
A68_414  MOSAELA;  /* avoid structure result */
A68_414  NOSAELA;  /* avoid structure result */
A68_414  OOSAELA;  /* avoid structure result */
A68_228 * POSAELA_bcs;
A68_BOOL  QOSAELA;  /* optbool result */
A68_414  ROSAELA;  /* clause result */
A68_222  SOSAELA;  /* OPERATORS - mode -> union mode */
A68_228 * TOSAELA;  /* YIELD */
A68_222  UOSAELA;  /* OPERATORS - mode -> union mode */
A68_228 * VOSAELA;  /* YIELD */
A68_414  WOSAELA;  /* avoid structure result */
A68_414  XOSAELA;  /* avoid structure result */
A68_414  YOSAELA;  /* avoid structure result */
A68_241 * ZOSAELA_crp;
A68_193 * APSAELA_repl;
A68_414  BPSAELA_result;
A68_222  CPSAELA;  /* united object - for case conformity */
A68_227 * DPSAELA_bpr;
A68_414  EPSAELA;  /* avoid structure result */
A68_414  FPSAELA;  /* avoid structure result */
A68_228 * GPSAELA_bps;
A68_228 * HPSAELA_cs;
A68_414  IPSAELA;  /* avoid structure result */
A68_414  JPSAELA;  /* avoid structure result */
A68_241 * KPSAELA_bcrp;
A68_193 * LPSAELA_brepl;
A68_414  MPSAELA;  /* avoid structure result */
A68_414  NPSAELA;  /* avoid structure result */
A68_234 * OPSAELA_cca;
A68_222  PPSAELA;  /* united object - for case conformity */
A68_234 * QPSAELA_ccb;
A68_414  RPSAELA;  /* avoid structure result */
A68_235 * SPSAELA_crb;
A68_414  TPSAELA;  /* avoid structure result */
A68_235 * UPSAELA_cra;
A68_222  VPSAELA;  /* united object - for case conformity */
A68_235 * WPSAELA_crb;
A68_414  XPSAELA;  /* avoid structure result */
A68_234 * YPSAELA_ccb;
A68_414  ZPSAELA;  /* avoid structure result */
A68_233 * AQSAELA_csa;
A68_222  BQSAELA;  /* united object - for case conformity */
A68_233 * CQSAELA_csb;
A68_414  DQSAELA;  /* avoid structure result */
A68_414  EQSAELA;  /* avoid structure result */
A68_414  FQSAELA;  /* avoid structure result */
A68_236 * GQSAELA_cva;
A68_222  HQSAELA;  /* united object - for case conformity */
A68_236 * IQSAELA_cvb;
A68_222  JQSAELA;  /* united object - for case conformity */
A68_414  KQSAELA;  /* clause result */
A_PROC_ENTRY(ctypecheck);
 /* line 2730: */
 /* line 2735: */
{ 
A_CLOSURE( QHSAELA_checkcalts, RHSAELA_checkcalts, SHSAELA_checkcalts );
(( SHSAELA_checkcalts * ) ( QHSAELA_checkcalts.nonlocals )) -> Disjoint = Disjoint;
(( SHSAELA_checkcalts * ) ( QHSAELA_checkcalts.nonlocals )) -> QHSAELA_checkcalts = QHSAELA_checkcalts;
 /* line 2770: */
A_CLOSURE( AJSAELA_checkcharange, BJSAELA_checkcharange, CJSAELA_checkcharange );
(( CJSAELA_checkcharange * ) ( AJSAELA_checkcharange.nonlocals )) -> Disjoint = Disjoint;
 /* line 2783: */
A_CLOSURE( XJSAELA_checkstring, YJSAELA_checkstring, ZJSAELA_checkstring );
(( ZJSAELA_checkstring * ) ( XJSAELA_checkstring.nonlocals )) -> Disjoint = Disjoint;
 /* line 2821: */
BORAELA_simplify_ctype( Aa, &ALSAELA );
BLSAELA_a = ALSAELA;
 /* line 2822: */
BORAELA_simplify_ctype( Bb, &CLSAELA );
DLSAELA_b = CLSAELA;
 /* line 2824: */
ELSAELA_res = CSRAELA_unknown;
 /* line 2826: */
FLSAELA = BLSAELA_a ;
switch ( FLSAELA.mode )
{ 
case 10: /* STRUCT(INT)  */
{ 
ELSAELA_res = ASRAELA_true;
 /* line 2827: */
goto MHSAELA_ans;
} 
break;
case 8: /* REF STRUCT(MODE222,REF MODE229)  */
{ 
A_CALLPROC(QHSAELA_checkcalts,(BLSAELA_a, DLSAELA_b, &GLSAELA),(BLSAELA_a, DLSAELA_b, &GLSAELA,(QHSAELA_checkcalts).nonlocals));
ELSAELA_res = GLSAELA;
 /* line 2828: */
goto MHSAELA_ans;
} 
break;
case 9: /* REF STRUCT(MODE172)  */
 /* line 2829: */
{ 
 /* line 2830: */
if ( Disjoint )
{ 
HLSAELA = DLSAELA_b ;
switch ( HLSAELA.mode )
{ 
case 10: /* STRUCT(INT)  */
ILSAELA = ASRAELA_true;
break;
default: 
 /* line 2831: */
ILSAELA = BSRAELA_false;
break;
} 
} 
else
{ 
JLSAELA = DLSAELA_b ;
switch ( JLSAELA.mode )
{ 
case 9: /* REF STRUCT(MODE172)  */
ILSAELA = BSRAELA_false;
break;
default: 
 /* line 2832: */
ILSAELA = ASRAELA_true;
break;
} 
} 
ELSAELA_res = ILSAELA;
 /* line 2833: */
 /* line 2834: */
 /* line 2835: */
goto MHSAELA_ans;
} 
break;
default: 
KLSAELA = DLSAELA_b ;
switch ( KLSAELA.mode )
{ 
case 8: /* REF STRUCT(MODE222,REF MODE229)  */
{ 
A_CALLPROC(QHSAELA_checkcalts,(BLSAELA_a, DLSAELA_b, &LLSAELA),(BLSAELA_a, DLSAELA_b, &LLSAELA,(QHSAELA_checkcalts).nonlocals));
ELSAELA_res = LLSAELA;
 /* line 2836: */
goto MHSAELA_ans;
} 
break;
case 9: /* REF STRUCT(MODE172)  */
{ 
if ( Disjoint )
{ 
MLSAELA = BSRAELA_false;
} 
else
{ 
MLSAELA = ASRAELA_true;
} 
ELSAELA_res = MLSAELA;
 /* line 2837: */
 /* line 2838: */
goto MHSAELA_ans;
} 
break;
default: 
/*SKIP*/;
break;
} 
break;
} 
 /* line 2840: */
 /* line 2841: */
 /* line 2842: */
NLSAELA = BLSAELA_a ;
switch ( NLSAELA.mode )
{ 
case 2: /* REF STRUCT(MODE172,MODE185,MODE185)  */
OLSAELA_cpr = (NLSAELA.data.mode2);
 /* line 2843: */
{ 
 /* line 2844: */
PLSAELA = DLSAELA_b ;
switch ( PLSAELA.mode )
{ 
case 2: /* REF STRUCT(MODE172,MODE185,MODE185)  */
QLSAELA_bcpr = (PLSAELA.data.mode2);
 /* line 2845: */
 /* line 2846: */
TDRAELA_simplify_int( (*(&(OLSAELA_cpr->Lwb))), &RLSAELA );
SLSAELA = RLSAELA ;
switch ( SLSAELA.mode )
{ 
case 1: /* INT */
TLSAELA_ai = (SLSAELA.data.mode1);
 /* line 2847: */
if ( Disjoint )
{ 
 /* line 2848: */
TDRAELA_simplify_int( (*(&(QLSAELA_bcpr->Upb))), &ULSAELA );
VLSAELA = ULSAELA ;
switch ( VLSAELA.mode )
{ 
case 1: /* INT */
WLSAELA_bi = (VLSAELA.data.mode1);
 /* line 2849: */
HSRAELA_testbool( (TLSAELA_ai>WLSAELA_bi), &YLSAELA );
XLSAELA = YLSAELA;
break;
default: 
 /* line 2850: */
XLSAELA = CSRAELA_unknown;
break;
} 
} 
else
{ 
 /* line 2851: */
TDRAELA_simplify_int( (*(&(QLSAELA_bcpr->Lwb))), &ZLSAELA );
AMSAELA = ZLSAELA ;
switch ( AMSAELA.mode )
{ 
case 1: /* INT */
BMSAELA_bi = (AMSAELA.data.mode1);
 /* line 2852: */
HSRAELA_testbool( (TLSAELA_ai!=BMSAELA_bi), &CMSAELA );
XLSAELA = CMSAELA;
break;
default: 
 /* line 2853: */
 /* line 2854: */
 /* line 2855: */
XLSAELA = CSRAELA_unknown;
break;
} 
} 
break;
default: 
 /* line 2856: */
XLSAELA = CSRAELA_unknown;
break;
} 
 /* line 2857: */
TDRAELA_simplify_int( (*(&(OLSAELA_cpr->Upb))), &DMSAELA );
EMSAELA = DMSAELA ;
switch ( EMSAELA.mode )
{ 
case 1: /* INT */
FMSAELA_ai = (EMSAELA.data.mode1);
 /* line 2858: */
if ( Disjoint )
{ 
 /* line 2859: */
TDRAELA_simplify_int( (*(&(QLSAELA_bcpr->Lwb))), &GMSAELA );
HMSAELA = GMSAELA ;
switch ( HMSAELA.mode )
{ 
case 1: /* INT */
IMSAELA_bi = (HMSAELA.data.mode1);
 /* line 2860: */
HSRAELA_testbool( (FMSAELA_ai<IMSAELA_bi), &KMSAELA );
JMSAELA = KMSAELA;
break;
default: 
 /* line 2861: */
JMSAELA = CSRAELA_unknown;
break;
} 
} 
else
{ 
 /* line 2862: */
TDRAELA_simplify_int( (*(&(QLSAELA_bcpr->Upb))), &LMSAELA );
MMSAELA = LMSAELA ;
switch ( MMSAELA.mode )
{ 
case 1: /* INT */
NMSAELA_bi = (MMSAELA.data.mode1);
 /* line 2863: */
HSRAELA_testbool( (FMSAELA_ai!=NMSAELA_bi), &OMSAELA );
JMSAELA = OMSAELA;
break;
default: 
 /* line 2864: */
 /* line 2865: */
 /* line 2866: */
JMSAELA = CSRAELA_unknown;
break;
} 
} 
break;
default: 
 /* line 2867: */
JMSAELA = CSRAELA_unknown;
break;
} 
 /* line 2868: */
VSRAELA_or( XLSAELA, JMSAELA, &QMSAELA );
PMSAELA = QMSAELA;
break;
case 3: /* REF STRUCT(MODE172,MODE185)  */
RMSAELA_bcpi = (PLSAELA.data.mode3);
 /* line 2869: */
 /* line 2870: */
if ( Disjoint )
{ 
 /* line 2871: */
TDRAELA_simplify_int( (*(&(RMSAELA_bcpi->Index))), &SMSAELA );
TMSAELA = SMSAELA ;
switch ( TMSAELA.mode )
{ 
case 1: /* INT */
UMSAELA_bi = (TMSAELA.data.mode1);
 /* line 2872: */
TDRAELA_simplify_int( (*(&(OLSAELA_cpr->Lwb))), &VMSAELA );
WMSAELA = VMSAELA ;
switch ( WMSAELA.mode )
{ 
case 1: /* INT */
XMSAELA_ai = (WMSAELA.data.mode1);
 /* line 2873: */
HSRAELA_testbool( (XMSAELA_ai>UMSAELA_bi), &ZMSAELA );
YMSAELA = ZMSAELA;
break;
default: 
 /* line 2874: */
YMSAELA = CSRAELA_unknown;
break;
} 
 /* line 2875: */
TDRAELA_simplify_int( (*(&(OLSAELA_cpr->Upb))), &ANSAELA );
BNSAELA = ANSAELA ;
switch ( BNSAELA.mode )
{ 
case 1: /* INT */
CNSAELA_ai = (BNSAELA.data.mode1);
 /* line 2876: */
HSRAELA_testbool( (CNSAELA_ai<UMSAELA_bi), &ENSAELA );
DNSAELA = ENSAELA;
break;
default: 
DNSAELA = CSRAELA_unknown;
break;
} 
 /* line 2877: */
 /* line 2878: */
VSRAELA_or( YMSAELA, DNSAELA, &FNSAELA );
PMSAELA = FNSAELA;
break;
default: 
 /* line 2879: */
 /* line 2880: */
PMSAELA = CSRAELA_unknown;
break;
} 
} 
else
{ 
 /* line 2881: */
 /* line 2882: */
PMSAELA = ASRAELA_true;
} 
break;
default: 
 /* line 2883: */
PMSAELA = ASRAELA_true;
break;
} 
} 
break;
case 3: /* REF STRUCT(MODE172,MODE185)  */
GNSAELA_cpi = (NLSAELA.data.mode3);
 /* line 2884: */
{ 
 /* line 2885: */
HNSAELA = DLSAELA_b ;
switch ( HNSAELA.mode )
{ 
case 3: /* REF STRUCT(MODE172,MODE185)  */
INSAELA_bcpi = (HNSAELA.data.mode3);
{ 
 /* line 2886: */
TDRAELA_simplify_int( (*(&(GNSAELA_cpi->Index))), &JNSAELA );
KNSAELA = JNSAELA ;
switch ( KNSAELA.mode )
{ 
case 1: /* INT */
LNSAELA_aii = (KNSAELA.data.mode1);
{ 
 /* line 2887: */
TDRAELA_simplify_int( (*(&(INSAELA_bcpi->Index))), &MNSAELA );
NNSAELA = MNSAELA ;
switch ( NNSAELA.mode )
{ 
case 1: /* INT */
ONSAELA_bii = (NNSAELA.data.mode1);
 /* line 2888: */
 /* line 2889: */
HSRAELA_testbool( (LNSAELA_aii!=ONSAELA_bii), &PNSAELA );
PMSAELA = PNSAELA;
break;
default: 
 /* line 2890: */
 /* line 2891: */
PMSAELA = CSRAELA_unknown;
break;
} 
} 
break;
default: 
 /* line 2892: */
PMSAELA = CSRAELA_unknown;
break;
} 
} 
break;
case 2: /* REF STRUCT(MODE172,MODE185,MODE185)  */
QNSAELA_bcpr = (HNSAELA.data.mode2);
 /* line 2893: */
 /* line 2894: */
KHSAELA_ctypecheck( DLSAELA_b, BLSAELA_a, Disjoint, &RNSAELA );
PMSAELA = RNSAELA;
break;
default: 
 /* line 2895: */
PMSAELA = ASRAELA_true;
break;
} 
} 
break;
case 4: /* REF STRUCT(MODE172,INT)  */
SNSAELA_p = (NLSAELA.data.mode4);
 /* line 2896: */
{ 
 /* line 2897: */
TNSAELA = DLSAELA_b ;
switch ( TNSAELA.mode )
{ 
case 4: /* REF STRUCT(MODE172,INT)  */
UNSAELA_bp = (TNSAELA.data.mode4);
 /* line 2898: */
 /* line 2899: */
HSRAELA_testbool( ((*(&(SNSAELA_p->Index)))!=(*(&(UNSAELA_bp->Index)))), &VNSAELA );
PMSAELA = VNSAELA;
break;
default: 
 /* line 2900: */
PMSAELA = ASRAELA_true;
break;
} 
} 
break;
case 5: /* REF STRUCT(REF MODE203,MODE222)  */
WNSAELA_cu = (NLSAELA.data.mode5);
 /* line 2901: */
{ 
 /* line 2902: */
XNSAELA = DLSAELA_b ;
switch ( XNSAELA.mode )
{ 
case 5: /* REF STRUCT(REF MODE203,MODE222)  */
YNSAELA_bcu = (XNSAELA.data.mode5);
{ 
 /* line 2903: */
if ( ((*(&((*(&(WNSAELA_cu->P)))->Index)))==(*(&((*(&(YNSAELA_bcu->P)))->Index)))) )
{ 
 /* line 2904: */
 /* line 2905: */
KHSAELA_ctypecheck( (*(&(WNSAELA_cu->Ct))), (*(&(YNSAELA_bcu->Ct))), Disjoint, &ZNSAELA );
PMSAELA = ZNSAELA;
} 
else
{ 
 /* line 2906: */
 /* line 2907: */
PMSAELA = ASRAELA_true;
} 
} 
break;
default: 
 /* line 2908: */
PMSAELA = ASRAELA_true;
break;
} 
} 
break;
case 6: /* REF STRUCT(MODE222,MODE185)  */
AOSAELA_cr = (NLSAELA.data.mode6);
 /* line 2909: */
{ 
 /* line 2910: */
BOSAELA = DLSAELA_b ;
switch ( BOSAELA.mode )
{ 
case 6: /* REF STRUCT(MODE222,MODE185)  */
COSAELA_bcr = (BOSAELA.data.mode6);
 /* line 2911: */
KHSAELA_ctypecheck( (*(&(AOSAELA_cr->Ct))), (*(&(COSAELA_bcr->Ct))), Disjoint, &DOSAELA );
PMSAELA = DOSAELA;
break;
default: 
 /* line 2912: */
 /* line 2913: */
KHSAELA_ctypecheck( DLSAELA_b, BLSAELA_a, Disjoint, &EOSAELA );
PMSAELA = EOSAELA;
break;
} 
} 
break;
case 7: /* REF STRUCT(MODE222,REF MODE228)  */
FOSAELA_cs = (NLSAELA.data.mode7);
 /* line 2914: */
{ 
 /* line 2915: */
GOSAELA = DLSAELA_b ;
switch ( GOSAELA.mode )
{ 
case 6: /* REF STRUCT(MODE222,MODE185)  */
HOSAELA_bcr = (GOSAELA.data.mode6);
 /* line 2916: */
 /* line 2917: */
 /* line 2918: */
if ( ((*(&(FOSAELA_cs->Rest)))==KQCAELA_nilcst) )
{ 
IOSAELA = BSRAELA_false;
} 
else
{ 
 /* line 2919: */
LOSAELA = (*(&(FOSAELA_cs->Rest))) ;
KHSAELA_ctypecheck( A_UNITE(KOSAELA,mode7,7,LOSAELA), A_UNITE(JOSAELA,mode6,6,HOSAELA_bcr), Disjoint, &MOSAELA );
IOSAELA = MOSAELA;
} 
 /* line 2920: */
KHSAELA_ctypecheck( (*(&(FOSAELA_cs->Cst))), (*(&(HOSAELA_bcr->Ct))), Disjoint, &NOSAELA );
VSRAELA_or( NOSAELA, IOSAELA, &OOSAELA );
PMSAELA = OOSAELA;
break;
case 7: /* REF STRUCT(MODE222,REF MODE228)  */
POSAELA_bcs = (GOSAELA.data.mode7);
 /* line 2921: */
QOSAELA = ((*(&(FOSAELA_cs->Rest)))==KQCAELA_nilcst);
if ( ! QOSAELA )
{ /* line 2922: */
QOSAELA = ((*(&(POSAELA_bcs->Rest)))==KQCAELA_nilcst);
}
 /* line 2923: */
if ( QOSAELA )
{ 
ROSAELA = BSRAELA_false;
} 
else
{ 
 /* line 2924: */
TOSAELA = (*(&(POSAELA_bcs->Rest))) ;
VOSAELA = (*(&(FOSAELA_cs->Rest))) ;
KHSAELA_ctypecheck( A_UNITE(UOSAELA,mode7,7,VOSAELA), A_UNITE(SOSAELA,mode7,7,TOSAELA), Disjoint, &WOSAELA );
ROSAELA = WOSAELA;
} 
 /* line 2925: */
 /* line 2926: */
KHSAELA_ctypecheck( (*(&(FOSAELA_cs->Cst))), (*(&(POSAELA_bcs->Cst))), Disjoint, &XOSAELA );
VSRAELA_or( XOSAELA, ROSAELA, &YOSAELA );
PMSAELA = YOSAELA;
break;
default: 
 /* line 2927: */
PMSAELA = ASRAELA_true;
break;
} 
} 
break;
case 22: /* REF STRUCT(REF MODE244,MODE222)  */
ZOSAELA_crp = (NLSAELA.data.mode22);
 /* line 2928: */
{ 
APSAELA_repl = KTDAELA_get_intvarmult((*(&(ZOSAELA_crp->Ids))));
 /* line 2929: */
 /* line 2930: */
if ( ARRAELA_replknown(APSAELA_repl) )
{ 
BPSAELA_result = BSRAELA_false;
 /* line 2931: */
 /* line 2932: */
CPSAELA = DLSAELA_b ;
switch ( CPSAELA.mode )
{ 
case 6: /* REF STRUCT(MODE222,MODE185)  */
DPSAELA_bpr = (CPSAELA.data.mode6);
 /* line 2933: */
for ( ;; )
{ 
 /* line 2934: */
if ( !(IRRAELA_nextrepl(APSAELA_repl)) ) break;
 /* line 2935: */
 /* line 2936: */
KHSAELA_ctypecheck( (*(&(ZOSAELA_crp->Ct))), (*(&(DPSAELA_bpr->Ct))), Disjoint, &EPSAELA );
VSRAELA_or( BPSAELA_result, EPSAELA, &FPSAELA );
BPSAELA_result = FPSAELA;
}
 /* line 2937: */
break;
case 7: /* REF STRUCT(MODE222,REF MODE228)  */
GPSAELA_bps = (CPSAELA.data.mode7);
 /* line 2938: */
{ 
HPSAELA_cs = GPSAELA_bps;
 /* line 2939: */
for ( ;; )
{ 
 /* line 2940: */
if ( !(IRRAELA_nextrepl(APSAELA_repl)) ) break;
 /* line 2941: */
KHSAELA_ctypecheck( (*(&(ZOSAELA_crp->Ct))), (*(&(HPSAELA_cs->Cst))), Disjoint, &IPSAELA );
VSRAELA_or( BPSAELA_result, IPSAELA, &JPSAELA );
BPSAELA_result = JPSAELA;
 /* line 2942: */
 /* line 2943: */
HPSAELA_cs = (*(&(HPSAELA_cs->Rest)));
}
 /* line 2944: */
 /* line 2945: */
} 
break;
case 22: /* REF STRUCT(REF MODE244,MODE222)  */
KPSAELA_bcrp = (CPSAELA.data.mode22);
 /* line 2946: */
{ 
LPSAELA_brepl = KTDAELA_get_intvarmult((*(&(KPSAELA_bcrp->Ids))));
 /* line 2947: */
 /* line 2948: */
if ( ARRAELA_replknown(LPSAELA_brepl) )
{ 
for ( ;; )
{ 
 /* line 2949: */
if ( !((IRRAELA_nextrepl(APSAELA_repl)&IRRAELA_nextrepl(LPSAELA_brepl))) ) break;
 /* line 2950: */
 /* line 2951: */
KHSAELA_ctypecheck( (*(&(ZOSAELA_crp->Ct))), (*(&(KPSAELA_bcrp->Ct))), Disjoint, &MPSAELA );
VSRAELA_or( BPSAELA_result, MPSAELA, &NPSAELA );
BPSAELA_result = NPSAELA;
}
 /* line 2952: */
} 
else
{ 
 /* line 2953: */
 /* line 2954: */
 /* line 2955: */
BPSAELA_result = CSRAELA_unknown;
} 
} 
break;
default: 
 /* line 2956: */
BPSAELA_result = ASRAELA_true;
break;
} 
 /* line 2957: */
 /* line 2958: */
 /* line 2959: */
PMSAELA = BPSAELA_result;
} 
else
{ 
 /* line 2960: */
 /* line 2961: */
PMSAELA = CSRAELA_unknown;
} 
} 
break;
case 15: /* REF STRUCT(MODE172,CHAR)  */
OPSAELA_cca = (NLSAELA.data.mode15);
 /* line 2962: */
 /* line 2963: */
PPSAELA = DLSAELA_b ;
switch ( PPSAELA.mode )
{ 
case 15: /* REF STRUCT(MODE172,CHAR)  */
QPSAELA_ccb = (PPSAELA.data.mode15);
 /* line 2964: */
HSRAELA_testbool( ((*(&(OPSAELA_cca->Char)))!=(*(&(QPSAELA_ccb->Char)))), &RPSAELA );
PMSAELA = RPSAELA;
break;
case 16: /* REF STRUCT(MODE172,CHAR,CHAR)  */
SPSAELA_crb = (PPSAELA.data.mode16);
 /* line 2965: */
 /* line 2966: */
 /* line 2967: */
A_CALLPROC(AJSAELA_checkcharange,((*(&(OPSAELA_cca->Char))), (*(&(OPSAELA_cca->Char))), (*(&(SPSAELA_crb->Lwb))), (*(&(SPSAELA_crb->Upb))), &TPSAELA),((*(&(OPSAELA_cca->Char))), (*(&(OPSAELA_cca->Char))), (*(&(SPSAELA_crb->Lwb))), (*(&(SPSAELA_crb->Upb))), &TPSAELA,(AJSAELA_checkcharange).nonlocals));
PMSAELA = TPSAELA;
break;
default: 
 /* line 2968: */
PMSAELA = ASRAELA_true;
break;
} 
break;
case 16: /* REF STRUCT(MODE172,CHAR,CHAR)  */
UPSAELA_cra = (NLSAELA.data.mode16);
 /* line 2969: */
 /* line 2970: */
VPSAELA = DLSAELA_b ;
switch ( VPSAELA.mode )
{ 
case 16: /* REF STRUCT(MODE172,CHAR,CHAR)  */
WPSAELA_crb = (VPSAELA.data.mode16);
 /* line 2971: */
 /* line 2972: */
A_CALLPROC(AJSAELA_checkcharange,((*(&(UPSAELA_cra->Lwb))), (*(&(UPSAELA_cra->Upb))), (*(&(WPSAELA_crb->Lwb))), (*(&(WPSAELA_crb->Upb))), &XPSAELA),((*(&(UPSAELA_cra->Lwb))), (*(&(UPSAELA_cra->Upb))), (*(&(WPSAELA_crb->Lwb))), (*(&(WPSAELA_crb->Upb))), &XPSAELA,(AJSAELA_checkcharange).nonlocals));
PMSAELA = XPSAELA;
break;
case 15: /* REF STRUCT(MODE172,CHAR)  */
YPSAELA_ccb = (VPSAELA.data.mode15);
 /* line 2973: */
 /* line 2974: */
 /* line 2975: */
A_CALLPROC(AJSAELA_checkcharange,((*(&(UPSAELA_cra->Lwb))), (*(&(UPSAELA_cra->Upb))), (*(&(YPSAELA_ccb->Char))), (*(&(YPSAELA_ccb->Char))), &ZPSAELA),((*(&(UPSAELA_cra->Lwb))), (*(&(UPSAELA_cra->Upb))), (*(&(YPSAELA_ccb->Char))), (*(&(YPSAELA_ccb->Char))), &ZPSAELA,(AJSAELA_checkcharange).nonlocals));
PMSAELA = ZPSAELA;
break;
default: 
 /* line 2976: */
PMSAELA = CSRAELA_unknown;
break;
} 
break;
case 14: /* REF STRUCT(MODE185,MODE222,REF MODE246)  */
AQSAELA_csa = (NLSAELA.data.mode14);
 /* line 2977: */
 /* line 2978: */
BQSAELA = DLSAELA_b ;
switch ( BQSAELA.mode )
{ 
case 14: /* REF STRUCT(MODE185,MODE222,REF MODE246)  */
CQSAELA_csb = (BQSAELA.data.mode14);
 /* line 2979: */
 /* line 2980: */
 /* line 2981: */
A_CALLPROC(XJSAELA_checkstring,((*AQSAELA_csa), (*CQSAELA_csb), &DQSAELA),((*AQSAELA_csa), (*CQSAELA_csb), &DQSAELA,(XJSAELA_checkstring).nonlocals));
HSRAELA_testbool( (HDRAELA_giveint((*(&(AQSAELA_csa->Size))))==HDRAELA_giveint((*(&(CQSAELA_csb->Size))))), &EQSAELA );
PSRAELA_and( EQSAELA, DQSAELA, &FQSAELA );
PMSAELA = FQSAELA;
break;
default: 
 /* line 2982: */
PMSAELA = CSRAELA_unknown;
break;
} 
break;
case 17: /* REF STRUCT(REF MODE245,MODE172)  */
GQSAELA_cva = (NLSAELA.data.mode17);
 /* line 2983: */
 /* line 2984: */
HQSAELA = DLSAELA_b ;
switch ( HQSAELA.mode )
{ 
case 17: /* REF STRUCT(REF MODE245,MODE172)  */
IQSAELA_cvb = (HQSAELA.data.mode17);
 /* line 2985: */
 /* line 2986: */
if ( A_VC_EQ((*(&((*(&(GQSAELA_cva->Cm)))->Id))),(*(&((*(&(IQSAELA_cvb->Cm)))->Id)))) )
{ 
 /* line 2987: */
PMSAELA = BSRAELA_false;
} 
else
{ 
 /* line 2988: */
 /* line 2989: */
PMSAELA = CSRAELA_unknown;
} 
break;
default: 
 /* line 2990: */
PMSAELA = CSRAELA_unknown;
break;
} 
break;
case 18: /* STRUCT(INT)  */
 /* line 2991: */
 /* line 2992: */
JQSAELA = DLSAELA_b ;
switch ( JQSAELA.mode )
{ 
case 18: /* STRUCT(INT)  */
{ 
if ( Disjoint )
{ 
PMSAELA = BSRAELA_false;
} 
else
{ 
 /* line 2993: */
 /* line 2994: */
PMSAELA = ASRAELA_true;
} 
} 
break;
default: 
 /* line 2996: */
PMSAELA = CSRAELA_unknown;
break;
} 
break;
case 19: /* REF STRUCT(MODE222,MODE185)  */
case 20: /* REF STRUCT(MODE222,MODE185,MODE185)  */
case 21: /* REF STRUCT(MODE185,MODE222,MODE222)  */
case 23: /* REF STRUCT(BOOL,INT,MODE222,MODE222)  */
 /* line 2997: */
 /* line 2998: */
PMSAELA = CSRAELA_unknown;
break;
default: 
PMSAELA = ASRAELA_true;
break;
} 
ELSAELA_res = PMSAELA;
 /* line 3000: */
MHSAELA_ans:
 /* line 3001: */
KQSAELA = ELSAELA_res;
} 
A_PROC_EXIT(ctypecheck);
*ReturnedValue = (KQSAELA);
return;
} 
#undef NL

A68_VOID  NQSAELA_typetest(A68_172  A, A68_172  B, A68_414  *ReturnedValue)
{ 
A68_414  OQSAELA;  /* clause result */
A68_414  PQSAELA;  /* avoid structure result */
A_PROC_ENTRY(typetest);
 /* line 3005: */
JASAELA_checkequals( A, B, A68_FALSE, A68_FALSE, A68_FALSE, 0, &PQSAELA );
OQSAELA = PQSAELA;
A_PROC_EXIT(typetest);
*ReturnedValue = (OQSAELA);
return;
} 
#undef NL

A68_BOOL  SQSAELA_equals(A68_172  A, A68_172  B)
{ 
A68_BOOL  TQSAELA;  /* clause result */
A68_414  UQSAELA;  /* avoid structure result */
A_PROC_ENTRY(equals);
 /* line 3008: */
JASAELA_checkequals( A, B, A68_FALSE, A68_FALSE, A68_FALSE, 0, &UQSAELA );
TQSAELA = !LSRAELA_(UQSAELA, BSRAELA_false);
A_PROC_EXIT(equals);
return( TQSAELA );
} 
#undef NL

A68_BOOL  ZQSAELA_specequals(A68_172  A, A68_172  B, A68_INT  D, A68_BOOL  Exact)
{ 
A68_BOOL  ARSAELA;  /* clause result */
A68_414  BRSAELA;  /* avoid structure result */
A_PROC_ENTRY(specequals);
 /* line 3012: */
JASAELA_checkequals( A, B, A68_FALSE, A68_FALSE, Exact, D, &BRSAELA );
ARSAELA = LSRAELA_(BRSAELA, ASRAELA_true);
A_PROC_EXIT(specequals);
return( ARSAELA );
} 
#undef NL

A68_BOOL  FRSAELA_checktypeeq(A68_172  A, A68_172  B, A68_BOOL  Outputcheck)
{ 
A68_BOOL  GRSAELA;  /* clause result */
A68_414  HRSAELA;  /* avoid structure result */
A_PROC_ENTRY(checktypeeq);
 /* line 3015: */
 /* line 3016: */
JASAELA_checkequals( A, B, Outputcheck, A68_FALSE, A68_FALSE, 0, &HRSAELA );
GRSAELA = !LSRAELA_(HRSAELA, BSRAELA_false);
A_PROC_EXIT(checktypeeq);
return( GRSAELA );
} 
#undef NL

A_STATIC A68_BOOL  KRSAELA_anonymous(A68_222  A, A68_222  B)
{ 
A68_172  LRSAELA;  /* avoid structure result */
A68_172  MRSAELA;  /* avoid structure result */
A68_BOOL  NRSAELA;  /* optbool result */
A68_414  ORSAELA;  /* avoid structure result */
A68_BOOL  PRSAELA;  /* clause result */
 /* line 3018: */
 /* line 3019: */
 /* line 3020: */
A_CALLPROC(FUQAELA_ctypetotype,(B, &LRSAELA),(B, &LRSAELA,(FUQAELA_ctypetotype).nonlocals));
A_CALLPROC(FUQAELA_ctypetotype,(A, &MRSAELA),(A, &MRSAELA,(FUQAELA_ctypetotype).nonlocals));
NRSAELA = ZQSAELA_specequals(MRSAELA, LRSAELA, 0, A68_FALSE);
if ( NRSAELA )
{KHSAELA_ctypecheck( A, B, A68_FALSE, &ORSAELA );
NRSAELA = LSRAELA_(ORSAELA, BSRAELA_false);
}
PRSAELA = NRSAELA;
return( PRSAELA );
} 
#undef NL

A_STATIC A68_BOOL  TRSAELA_intequals(A68_185  A, A68_185  B)
{ 
A68_185  URSAELA;  /* avoid structure result */
A68_185  VRSAELA;  /* united object - for case conformity */
A68_INT  WRSAELA_i;
A68_185  XRSAELA;  /* avoid structure result */
A68_185  YRSAELA;  /* united object - for case conformity */
A68_INT  ZRSAELA_j;
A68_BOOL  ASSAELA;  /* clause result */
A68_46  DSSAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_46  GSSAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(intequals);
 /* line 3024: */
 /* line 3025: */
{ 
 /* line 3026: */
TDRAELA_simplify_int( A, &URSAELA );
VRSAELA = URSAELA ;
switch ( VRSAELA.mode )
{ 
case 1: /* INT */
WRSAELA_i = (VRSAELA.data.mode1);
 /* line 3027: */
 /* line 3028: */
CDRAELA_simplify( B, A68_TRUE, &XRSAELA );
YRSAELA = XRSAELA ;
switch ( YRSAELA.mode )
{ 
case 1: /* INT */
ZRSAELA_j = (YRSAELA.data.mode1);
 /* line 3029: */
ASSAELA = (WRSAELA_i==ZRSAELA_j);
break;
default: 
UQPAELA_fault(0, A_HVEC(DSSAELA,CSSAELA,A68_VC ));
 /* line 3030: */
 /* line 3031: */
ASSAELA = A68_FALSE;
break;
} 
break;
default: 
UQPAELA_fault(0, A_HVEC(GSSAELA,FSSAELA,A68_VC ));
 /* line 3032: */
 /* line 3033: */
ASSAELA = A68_FALSE;
break;
} 
} 
A_PROC_EXIT(intequals);
return( ASSAELA );
} 
#undef NL

A68_VOID  JSSAELA_checkdisjoint(A68_222  A, A68_222  B, A68_414  *ReturnedValue)
{ 
A68_414  KSSAELA;  /* clause result */
A68_414  LSSAELA;  /* avoid structure result */
A_PROC_ENTRY(checkdisjoint);
KHSAELA_ctypecheck( A, B, A68_TRUE, &LSSAELA );
KSSAELA = LSSAELA;
A_PROC_EXIT(checkdisjoint);
*ReturnedValue = (KSSAELA);
return;
} 
#undef NL

A_STATIC A68_BOOL  OSSAELA_attrequals(A68_170  Av1, A68_170  Av2)
{ 
A68_443  SSSAELA_stringsequal;   /* proc value of non-global proc */
A68_170  XSSAELA;  /* united object - for case conformity */
A68_170  YSSAELA;  /* united object - for case conformity */
A68_444  ZSSAELA_f;
A68_BOOL  ATSAELA;  /* clause result */
A68_254 * BTSAELA_an1;
A68_170  CTSAELA;  /* united object - for case conformity */
A68_254 * DTSAELA_an2;
A68_BOOL  ETSAELA;  /* optbool result */
A68_257 * FTSAELA_anb;
A68_170  GTSAELA;  /* OPERATORS - mode -> union mode */
A68_255 * HTSAELA_ad1;
A68_170  ITSAELA;  /* united object - for case conformity */
A68_255 * JTSAELA_ad2;
A68_BOOL  KTSAELA;  /* optbool result */
A68_257 * LTSAELA_adb;
A68_170  MTSAELA;  /* OPERATORS - mode -> union mode */
A68_258 * NTSAELA_atv1;
A68_170  OTSAELA;  /* united object - for case conformity */
A68_258 * PTSAELA_atv2;
A68_257 * QTSAELA_adb;
A68_170  RTSAELA;  /* OPERATORS - mode -> union mode */
A68_256 * STSAELA_as1;
A68_170  TTSAELA;  /* united object - for case conformity */
A68_256 * UTSAELA_as2;
A68_BOOL  VTSAELA;  /* optbool result */
A68_BOOL  WTSAELA;  /* clause result */
A68_170  XTSAELA;  /* OPERATORS - mode -> union mode */
A68_256 * YTSAELA;  /* YIELD */
A68_170  ZTSAELA;  /* OPERATORS - mode -> union mode */
A68_256 * AUSAELA;  /* YIELD */
A68_257 * BUSAELA_asb;
A68_170  CUSAELA;  /* OPERATORS - mode -> union mode */
A68_257 * DUSAELA_ab1;
A_PROC_ENTRY(attrequals);
 /* line 3038: */
{ 
A_CLOSURE( SSSAELA_stringsequal, TSSAELA_stringsequal, USSAELA_stringsequal );
(( USSAELA_stringsequal * ) ( SSSAELA_stringsequal.nonlocals )) -> SSSAELA_stringsequal = SSSAELA_stringsequal;
 /* line 3047: */
 /* line 3048: */
XSSAELA = Av1 ;
switch ( XSSAELA.mode )
{ 
case 6: /* STRUCT(INT)  */
 /* line 3049: */
YSSAELA = Av2 ;
switch ( YSSAELA.mode )
{ 
case 6: /* STRUCT(INT)  */
case 7: /* STRUCT(INT)  */
A_UNCPY(ZSSAELA_f,YSSAELA);
ZSSAELA_f.mode = "\000\0\0\0\0\0\002\001"[YSSAELA.mode];
ATSAELA = A68_TRUE;
break;
default: 
 /* line 3050: */
ATSAELA = A68_FALSE;
break;
} 
break;
case 1: /* REF STRUCT(REF MODE198,INT,MODE170)  */
BTSAELA_an1 = (XSSAELA.data.mode1);
 /* line 3051: */
 /* line 3052: */
CTSAELA = Av2 ;
switch ( CTSAELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE198,INT,MODE170)  */
DTSAELA_an2 = (CTSAELA.data.mode1);
 /* line 3053: */
 /* line 3054: */
ETSAELA = A_VC_EQ((*(&((*(&(BTSAELA_an1->Idinfo)))->Id))),(*(&((*(&(DTSAELA_an2->Idinfo)))->Id))));
if ( ETSAELA )
{ETSAELA = OSSAELA_attrequals((*(&(BTSAELA_an1->Attr))), (*(&(DTSAELA_an2->Attr))));
}
 /* line 3055: */
ATSAELA = ETSAELA;
break;
case 4: /* REF STRUCT(MODE170)  */
FTSAELA_anb = (CTSAELA.data.mode4);
 /* line 3056: */
 /* line 3057: */
ATSAELA = OSSAELA_attrequals(A_UNITE(GTSAELA,mode1,1,BTSAELA_an1), (*(&(FTSAELA_anb->Abracket))));
break;
case 7: /* STRUCT(INT)  */
 /* line 3058: */
ATSAELA = A68_TRUE;
break;
default: 
 /* line 3059: */
 /* line 3060: */
ATSAELA = A68_FALSE;
break;
} 
break;
case 2: /* REF STRUCT(REF MODE26,REF MODE246)  */
HTSAELA_ad1 = (XSSAELA.data.mode2);
 /* line 3061: */
 /* line 3062: */
ITSAELA = Av2 ;
switch ( ITSAELA.mode )
{ 
case 2: /* REF STRUCT(REF MODE26,REF MODE246)  */
JTSAELA_ad2 = (ITSAELA.data.mode2);
 /* line 3063: */
 /* line 3064: */
KTSAELA = A_VC_EQ((*(&(HTSAELA_ad1->Classname))),(*(&(JTSAELA_ad2->Classname))));
if ( KTSAELA )
{KTSAELA = A_CALLPROC(SSSAELA_stringsequal,((*(&(HTSAELA_ad1->Data))), (*(&(JTSAELA_ad2->Data)))),((*(&(HTSAELA_ad1->Data))), (*(&(JTSAELA_ad2->Data))),(SSSAELA_stringsequal).nonlocals));
}
 /* line 3065: */
ATSAELA = KTSAELA;
break;
case 4: /* REF STRUCT(MODE170)  */
LTSAELA_adb = (ITSAELA.data.mode4);
 /* line 3066: */
 /* line 3067: */
ATSAELA = OSSAELA_attrequals(A_UNITE(MTSAELA,mode2,2,HTSAELA_ad1), (*(&(LTSAELA_adb->Abracket))));
break;
case 7: /* STRUCT(INT)  */
 /* line 3068: */
ATSAELA = A68_TRUE;
break;
default: 
 /* line 3069: */
 /* line 3070: */
ATSAELA = A68_FALSE;
break;
} 
break;
case 5: /* REF STRUCT(REF MODE245)  */
NTSAELA_atv1 = (XSSAELA.data.mode5);
 /* line 3071: */
 /* line 3072: */
OTSAELA = Av2 ;
switch ( OTSAELA.mode )
{ 
case 5: /* REF STRUCT(REF MODE245)  */
PTSAELA_atv2 = (OTSAELA.data.mode5);
 /* line 3073: */
ATSAELA = ((*(&((*(&(NTSAELA_atv1->Am)))->Xno)))==(*(&((*(&(PTSAELA_atv2->Am)))->Xno))));
break;
case 4: /* REF STRUCT(MODE170)  */
QTSAELA_adb = (OTSAELA.data.mode4);
 /* line 3074: */
ATSAELA = OSSAELA_attrequals(A_UNITE(RTSAELA,mode5,5,NTSAELA_atv1), (*(&(QTSAELA_adb->Abracket))));
break;
case 7: /* STRUCT(INT)  */
 /* line 3075: */
ATSAELA = A68_TRUE;
break;
default: 
 /* line 3076: */
 /* line 3077: */
ATSAELA = A68_FALSE;
break;
} 
break;
case 3: /* REF STRUCT(MODE170,REF MODE256)  */
STSAELA_as1 = (XSSAELA.data.mode3);
 /* line 3078: */
 /* line 3079: */
TTSAELA = Av2 ;
switch ( TTSAELA.mode )
{ 
case 3: /* REF STRUCT(MODE170,REF MODE256)  */
UTSAELA_as2 = (TTSAELA.data.mode3);
 /* line 3080: */
 /* line 3081: */
VTSAELA = OSSAELA_attrequals((*(&(STSAELA_as1->Elem))), (*(&(UTSAELA_as2->Elem))));
if ( VTSAELA )
{ /* line 3082: */
if ( ((*(&(STSAELA_as1->Rest)))==MQCAELA_nilattrstr) )
{ 
 /* line 3083: */
WTSAELA = ((*(&(UTSAELA_as2->Rest)))==MQCAELA_nilattrstr);
} 
else
{ 
 /* line 3084: */
if ( ((*(&(UTSAELA_as2->Rest)))!=MQCAELA_nilattrstr) )
{ 
 /* line 3085: */
YTSAELA = (*(&(UTSAELA_as2->Rest))) ;
AUSAELA = (*(&(STSAELA_as1->Rest))) ;
WTSAELA = OSSAELA_attrequals(A_UNITE(ZTSAELA,mode3,3,AUSAELA), A_UNITE(XTSAELA,mode3,3,YTSAELA));
} 
else
{ 
 /* line 3086: */
WTSAELA = A68_FALSE;
} 
} 
VTSAELA = WTSAELA;
}
 /* line 3087: */
ATSAELA = VTSAELA;
break;
case 4: /* REF STRUCT(MODE170)  */
BUSAELA_asb = (TTSAELA.data.mode4);
 /* line 3088: */
 /* line 3089: */
ATSAELA = OSSAELA_attrequals(A_UNITE(CUSAELA,mode3,3,STSAELA_as1), (*(&(BUSAELA_asb->Abracket))));
break;
case 7: /* STRUCT(INT)  */
 /* line 3090: */
ATSAELA = A68_TRUE;
break;
default: 
 /* line 3091: */
 /* line 3092: */
ATSAELA = A68_FALSE;
break;
} 
break;
case 4: /* REF STRUCT(MODE170)  */
DUSAELA_ab1 = (XSSAELA.data.mode4);
 /* line 3093: */
 /* line 3094: */
ATSAELA = OSSAELA_attrequals((*(&(DUSAELA_ab1->Abracket))), Av2);
break;
case 7: /* STRUCT(INT)  */
 /* line 3095: */
ATSAELA = A68_TRUE;
break;
default: 
 /* line 3096: */
 /* line 3097: */
ATSAELA = A68_FALSE;
break;
} 
} 
A_PROC_EXIT(attrequals);
return( ATSAELA );
} 
#undef NL

A68_BOOL  GUSAELA_samespecid(A68_198 * P, A68_244 * Ids)
{ 
A68_BOOL  KUSAELA_error;
A68_199  LUSAELA;  /* united object - for case conformity */
A68_182  MUSAELA_f;
A68_244 * NUSAELA;  /* clause result */
A68_244 * OUSAELA_i;
A68_BOOL  PUSAELA;  /* optbool result */
A68_BOOL  QUSAELA;  /* optbool result */
A68_199  RUSAELA;  /* united object - for case conformity */
A68_200  SUSAELA_ii;
A68_199  TUSAELA;  /* united object - for case conformity */
A68_200  UUSAELA_ip;
A68_BOOL  VUSAELA;  /* optbool result */
A68_182  WUSAELA_f;
A68_205  XUSAELA_adi;
A68_199  YUSAELA;  /* united object - for case conformity */
A68_205  ZUSAELA_adp;
A68_BOOL  AVSAELA;  /* optbool result */
A68_182  BVSAELA_f;
A68_201  CVSAELA_ti;
A68_199  DVSAELA;  /* united object - for case conformity */
A68_201  EVSAELA_tp;
A68_BOOL  FVSAELA;  /* optbool result */
A68_182  GVSAELA_f;
A68_203  HVSAELA_pi;
A68_199  IVSAELA;  /* united object - for case conformity */
A68_203  JVSAELA_pp;
A68_BOOL  KVSAELA;  /* optbool result */
A68_172  LVSAELA;  /* united object - for case conformity */
A68_173 * MVSAELA_ppi;
A68_172  NVSAELA;  /* united object - for case conformity */
A68_173 * OVSAELA_ppp;
A68_BOOL  PVSAELA;  /* clause result */
A68_182  QVSAELA_f;
A68_202  RVSAELA_cti;
A68_199  SVSAELA;  /* united object - for case conformity */
A68_202  TVSAELA_ctp;
A68_BOOL  UVSAELA;  /* optbool result */
A68_182  VVSAELA_f;
A68_182  WVSAELA_f;
A68_263  XVSAELA;  /* OPERATORS - mode -> union mode */
A68_262  YVSAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_199  ZVSAELA;  /* OPERATORS - mode -> union mode */
A68_199 * AWSAELA;  /* YIELD */
A68_BOOL  BWSAELA;  /* clause result */
A68_BOOL * CWSAELA;  /* YIELD */
A_PROC_ENTRY(samespecid);
 /* line 3101: */
{ 
KUSAELA_error = A68_FALSE;
 /* line 3102: */
LUSAELA = (*(&(P->U))) ;
switch ( LUSAELA.mode )
{ 
case 8: /* STRUCT(INT)  */
MUSAELA_f = (LUSAELA.data.mode8);
NUSAELA = CQCAELA_nilids;
break;
default: 
NUSAELA = Ids;
break;
} 
OUSAELA_i = NUSAELA;
 /* line 3103: */
for ( ;; )
{ 
 /* line 3104: */
PUSAELA = (OUSAELA_i!=CQCAELA_nilids);
if ( PUSAELA )
{QUSAELA = ((*(&((*(&(OUSAELA_i->Idinfo)))->Scope)))!=(-1));
if ( ! QUSAELA )
{QUSAELA = A_VC_NE((*(&((*(&(OUSAELA_i->Idinfo)))->Id))),(*(&(P->Id))));
}
 /* line 3105: */
PUSAELA = QUSAELA;
}
if ( !(PUSAELA) ) break;
OUSAELA_i = (*(&(OUSAELA_i->Rest)));
}
 /* line 3106: */
 /* line 3107: */
if ( (OUSAELA_i!=CQCAELA_nilids) )
{ 
 /* line 3108: */
RUSAELA = (*(&((*(&(OUSAELA_i->Idinfo)))->U))) ;
switch ( RUSAELA.mode )
{ 
case 1: /* STRUCT(MODE185)  */
SUSAELA_ii = (RUSAELA.data.mode1);
 /* line 3109: */
 /* line 3110: */
TUSAELA = (*(&(P->U))) ;
switch ( TUSAELA.mode )
{ 
case 1: /* STRUCT(MODE185)  */
UUSAELA_ip = (TUSAELA.data.mode1);
 /* line 3111: */
VUSAELA = !(*(&((*(&(OUSAELA_i->Idinfo)))->Outofdate)));
if ( VUSAELA )
{ /* line 3112: */
VUSAELA = TRSAELA_intequals(SUSAELA_ii.I, UUSAELA_ip.I);
}
if ( VUSAELA )
{ 
 /* line 3113: */
 /* line 3114: */
goto JUSAELA_ok;
} 
break;
case 8: /* STRUCT(INT)  */
WUSAELA_f = (TUSAELA.data.mode8);
 /* line 3115: */
/*SKIP*/;
break;
default: 
 /* line 3116: */
 /* line 3117: */
KUSAELA_error = A68_TRUE;
break;
} 
break;
case 6: /* STRUCT(MODE170)  */
XUSAELA_adi = (RUSAELA.data.mode6);
 /* line 3118: */
 /* line 3119: */
YUSAELA = (*(&(P->U))) ;
switch ( YUSAELA.mode )
{ 
case 6: /* STRUCT(MODE170)  */
ZUSAELA_adp = (YUSAELA.data.mode6);
 /* line 3120: */
 /* line 3121: */
AVSAELA = !(*(&((*(&(OUSAELA_i->Idinfo)))->Outofdate)));
if ( AVSAELA )
{ /* line 3122: */
AVSAELA = OSSAELA_attrequals(XUSAELA_adi.A, ZUSAELA_adp.A);
}
if ( AVSAELA )
{ 
 /* line 3123: */
 /* line 3124: */
goto JUSAELA_ok;
} 
break;
case 8: /* STRUCT(INT)  */
BVSAELA_f = (YUSAELA.data.mode8);
 /* line 3125: */
/*SKIP*/;
break;
default: 
 /* line 3126: */
 /* line 3127: */
KUSAELA_error = A68_TRUE;
break;
} 
break;
case 2: /* STRUCT(MODE172)  */
CVSAELA_ti = (RUSAELA.data.mode2);
 /* line 3128: */
 /* line 3129: */
DVSAELA = (*(&(P->U))) ;
switch ( DVSAELA.mode )
{ 
case 2: /* STRUCT(MODE172)  */
EVSAELA_tp = (DVSAELA.data.mode2);
 /* line 3130: */
FVSAELA = !(*(&((*(&(OUSAELA_i->Idinfo)))->Outofdate)));
if ( FVSAELA )
{ /* line 3131: */
FVSAELA = ZQSAELA_specequals(CVSAELA_ti.T, EVSAELA_tp.T, 0, A68_FALSE);
}
if ( FVSAELA )
{ 
 /* line 3132: */
 /* line 3133: */
goto JUSAELA_ok;
} 
break;
case 8: /* STRUCT(INT)  */
GVSAELA_f = (DVSAELA.data.mode8);
 /* line 3134: */
/*SKIP*/;
break;
default: 
 /* line 3135: */
 /* line 3136: */
KUSAELA_error = A68_TRUE;
break;
} 
break;
case 4: /* STRUCT(MODE172,INT)  */
HVSAELA_pi = (RUSAELA.data.mode4);
 /* line 3137: */
 /* line 3138: */
IVSAELA = (*(&(P->U))) ;
switch ( IVSAELA.mode )
{ 
case 4: /* STRUCT(MODE172,INT)  */
JVSAELA_pp = (IVSAELA.data.mode4);
 /* line 3139: */
KVSAELA = ZQSAELA_specequals(HVSAELA_pi.Type, JVSAELA_pp.Type, 0, A68_FALSE);
if ( KVSAELA )
{ /* line 3140: */
KVSAELA = (HVSAELA_pi.Index==JVSAELA_pp.Index);
}
if ( KVSAELA )
{ 
 /* line 3141: */
goto JUSAELA_ok;
} 
else
{ 
LVSAELA = HVSAELA_pi.Type ;
switch ( LVSAELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE198,INT,MODE247)  */
MVSAELA_ppi = (LVSAELA.data.mode1);
 /* line 3142: */
NVSAELA = JVSAELA_pp.Type ;
switch ( NVSAELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE198,INT,MODE247)  */
OVSAELA_ppp = (NVSAELA.data.mode1);
 /* line 3143: */
 /* line 3145: */
PVSAELA = A_VC_NE((*(&((*(&(MVSAELA_ppi->Idinfo)))->Id))),(*(&((*(&(OVSAELA_ppp->Idinfo)))->Id))));
break;
default: 
 /* line 3146: */
 /* line 3147: */
PVSAELA = A68_FALSE;
break;
} 
break;
default: 
 /* line 3148: */
 /* line 3149: */
PVSAELA = A68_FALSE;
break;
} 
if ( PVSAELA )
{ 
 /* line 3150: */
 /* line 3151: */
KUSAELA_error = A68_TRUE;
} 
} 
break;
case 8: /* STRUCT(INT)  */
QVSAELA_f = (IVSAELA.data.mode8);
 /* line 3152: */
/*SKIP*/;
break;
default: 
 /* line 3153: */
 /* line 3154: */
KUSAELA_error = A68_TRUE;
break;
} 
break;
case 3: /* STRUCT(MODE222)  */
RVSAELA_cti = (RUSAELA.data.mode3);
 /* line 3155: */
 /* line 3156: */
SVSAELA = (*(&(P->U))) ;
switch ( SVSAELA.mode )
{ 
case 3: /* STRUCT(MODE222)  */
TVSAELA_ctp = (SVSAELA.data.mode3);
 /* line 3157: */
UVSAELA = !(*(&((*(&(OUSAELA_i->Idinfo)))->Outofdate)));
if ( UVSAELA )
{ /* line 3158: */
UVSAELA = A_CALLPROC(VERAELA_ctypeequals,(RVSAELA_cti.Ct, TVSAELA_ctp.Ct),(RVSAELA_cti.Ct, TVSAELA_ctp.Ct,(VERAELA_ctypeequals).nonlocals));
}
if ( UVSAELA )
{ 
 /* line 3159: */
 /* line 3160: */
goto JUSAELA_ok;
} 
break;
case 8: /* STRUCT(INT)  */
VVSAELA_f = (SVSAELA.data.mode8);
 /* line 3161: */
/*SKIP*/;
break;
default: 
 /* line 3162: */
 /* line 3163: */
KUSAELA_error = A68_TRUE;
break;
} 
break;
case 8: /* STRUCT(INT)  */
WVSAELA_f = (RUSAELA.data.mode8);
 /* line 3164: */
 /* line 3165: */
goto JUSAELA_ok;
break;
default: 
/*SKIP*/;
break;
} 
 /* line 3166: */
 /* line 3167: */
if ( KUSAELA_error )
{ 
LKPAELA_fp3 = (*(&(P->Id)));
 /* line 3168: */
 /* line 3169: */
SZPAELA_faultp(19, A_HVEC(YVSAELA,A_UNITE(XVSAELA,mode13,13,LKPAELA_fp3),A68_263 ));
 /* line 3170: */
 /* line 3171: */
 /* line 3172: */
AWSAELA = (&(P->U)) ;
(*AWSAELA) = A_UNITE(ZVSAELA,mode8,8,DRCAELA_flt);
} 
} 
 /* line 3173: */
 /* line 3174: */
 /* line 3175: */
BWSAELA = A68_FALSE;
goto HUSAELA;
JUSAELA_ok:
CWSAELA = (&((*(&(OUSAELA_i->Idinfo)))->Text)) ;
(*CWSAELA) = A68_TRUE;
 /* line 3176: */
BWSAELA = A68_TRUE;
HUSAELA: ;
} 
A_PROC_EXIT(samespecid);
return( BWSAELA );
} 
#undef NL

A68_VOID  EWSAELA_specsflt(A68_INT  Fltno)
{ 
A68_46  HWSAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(specsflt);
 /* line 3179: */
 /* line 3180: */
switch ( Fltno )
{ 
case 1: 
 /* line 3181: */
UQPAELA_fault(213, VJAAOSI_nullmsg);
break;
case 2: 
 /* line 3182: */
/*SKIP*/;
break;
case 3: 
 /* line 3183: */
UQPAELA_fault(215, VJAAOSI_nullmsg);
break;
case 4: 
 /* line 3184: */
UQPAELA_fault(216, VJAAOSI_nullmsg);
break;
case 5: 
 /* line 3185: */
 /* line 3186: */
UQPAELA_fault(217, VJAAOSI_nullmsg);
break;
case 6: 
 /* line 3187: */
 /* line 3188: */
UQPAELA_fault(218, VJAAOSI_nullmsg);
break;
case 7: 
 /* line 3189: */
 /* line 3190: */
UQPAELA_fault(219, VJAAOSI_nullmsg);
break;
case 8: 
 /* line 3191: */
 /* line 3192: */
UQPAELA_fault(220, VJAAOSI_nullmsg);
break;
case 9: 
 /* line 3193: */
 /* line 3194: */
UQPAELA_fault(221, VJAAOSI_nullmsg);
break;
default: 
 /* line 3195: */
UQPAELA_fault(0, A_HVEC(HWSAELA,GWSAELA,A68_VC ));
break;
} 
A_PROC_EXIT(specsflt);
return;
} 
#undef NL

A68_INT  LWSAELA_samespecfns(A68_167 * Fd1, A68_167 * Fd2, A68_BOOL  Exact)
{ 
A68_447  QWSAELA_equalsmparams;   /* proc value of non-global proc */
A68_INT  TXSAELA_result;
A68_INT  UXSAELA_s1;
A68_INT  VXSAELA_s2;
A68_INT  WXSAELA_diff;
A68_INT  XXSAELA;  /* clause result */
A_PROC_ENTRY(samespecfns);
 /* line 3198: */
{ 
A_CLOSURE( QWSAELA_equalsmparams, RWSAELA_equalsmparams, SWSAELA_equalsmparams );
(( SWSAELA_equalsmparams * ) ( QWSAELA_equalsmparams.nonlocals )) -> Exact = Exact;
(( SWSAELA_equalsmparams * ) ( QWSAELA_equalsmparams.nonlocals )) -> QWSAELA_equalsmparams = QWSAELA_equalsmparams;
 /* line 3256: */
TXSAELA_result = 0;
 /* line 3257: */
UXSAELA_s1 = (*(&((*(&(Fd1->Fninfo)))->Scope)));
if ( (UXSAELA_s1<1) )
{ 
UXSAELA_s1 = 1;
} 
 /* line 3258: */
VXSAELA_s2 = (*(&((*(&(Fd2->Fninfo)))->Scope)));
if ( (VXSAELA_s2<1) )
{ 
VXSAELA_s2 = 1;
} 
 /* line 3259: */
WXSAELA_diff = (UXSAELA_s1-VXSAELA_s2);
 /* line 3260: */
 /* line 3261: */
 /* line 3262: */
if ( !((*(&(Fd1->Macro)))==(*(&(Fd2->Macro)))) )
{ 
XXSAELA = 1;
} 
else
{ 
 /* line 3263: */
 /* line 3264: */
if ( ((TXSAELA_result = A_CALLPROC(QWSAELA_equalsmparams,((*(&(Fd1->Mp))), (*(&(Fd2->Mp))), WXSAELA_diff),((*(&(Fd1->Mp))), (*(&(Fd2->Mp))), WXSAELA_diff,(QWSAELA_equalsmparams).nonlocals)))!=0) )
{ 
XXSAELA = TXSAELA_result;
} 
else
{ 
 /* line 3265: */
 /* line 3266: */
if ( !ZQSAELA_specequals((*(&(Fd1->Param))), (*(&(Fd2->Param))), WXSAELA_diff, Exact) )
{ 
XXSAELA = 3;
} 
else
{ 
 /* line 3267: */
 /* line 3268: */
if ( !ZQSAELA_specequals((*(&(Fd1->Ans))), (*(&(Fd2->Ans))), WXSAELA_diff, Exact) )
{ 
 /* line 3269: */
XXSAELA = 4;
} 
else
{ 
 /* line 3270: */
XXSAELA = 0;
} 
} 
} 
} 
} 
A_PROC_EXIT(samespecfns);
return( XXSAELA );
} 
#undef NL

A_STATIC A68_244 * ZXSAELA_flatten_ids(A68_171 * D)
{ 
A68_244 * AYSAELA_flat;
A68_171 * BYSAELA_dd;
A68_244 * CYSAELA_i;
A68_244  DYSAELA;  /* collateral clause result */
A68_170  EYSAELA;  /* OPERATORS - mode -> union mode */
A68_244 * FYSAELA;  /* YIELD */
A68_244 * GYSAELA;  /* clause result */
A_PROC_ENTRY(flatten_ids);
 /* line 3273: */
{ 
AYSAELA_flat = CQCAELA_nilids;
 /* line 3274: */
BYSAELA_dd = D;
 /* line 3275: */
for ( ;; )
{ 
 /* line 3276: */
if ( !((BYSAELA_dd!=FQCAELA_nildecs)) ) break;
CYSAELA_i = (*(&(BYSAELA_dd->Ids)));
 /* line 3277: */
for ( ;; )
{ 
 /* line 3278: */
if ( !((CYSAELA_i!=CQCAELA_nilids)) ) break;
DYSAELA.Idinfo = (*(&(CYSAELA_i->Idinfo)));
DYSAELA.Declaration = A68_FALSE;
DYSAELA.Attr = A_UNITE(EYSAELA,mode6,6,MRCAELA_attrnull);
DYSAELA.Rest = AYSAELA_flat;
FYSAELA = A_HEAP(A68_244 ) ;
(*FYSAELA) = DYSAELA ;
AYSAELA_flat = FYSAELA;
 /* line 3279: */
 /* line 3280: */
CYSAELA_i = (*(&(CYSAELA_i->Rest)));
}
 /* line 3281: */
 /* line 3282: */
BYSAELA_dd = (*(&(BYSAELA_dd->Rest)));
}
 /* line 3283: */
 /* line 3284: */
GYSAELA = AYSAELA_flat;
} 
A_PROC_EXIT(flatten_ids);
return( GYSAELA );
} 
#undef NL

A_STATIC A68_BOOL  JYSAELA_equalspecids(A68_171 * Spec1, A68_171 * Spec2)
{ 
A68_244 * KYSAELA_f1;
A68_244 * LYSAELA_f2;
A68_BOOL  MYSAELA_equal;
A68_BOOL  NYSAELA;  /* optbool result */
A68_BOOL  OYSAELA;  /* optbool result */
A68_BOOL  PYSAELA;  /* optbool result */
A68_BOOL  QYSAELA;  /* clause result */
A_PROC_ENTRY(equalspecids);
 /* line 3287: */
{ 
KYSAELA_f1 = ZXSAELA_flatten_ids(Spec1);
 /* line 3288: */
LYSAELA_f2 = ZXSAELA_flatten_ids(Spec2);
 /* line 3289: */
MYSAELA_equal = A68_TRUE;
 /* line 3290: */
for ( ;; )
{ 
 /* line 3291: */
NYSAELA = (KYSAELA_f1!=CQCAELA_nilids);
if ( NYSAELA )
{NYSAELA = MYSAELA_equal;
}
if ( !(NYSAELA) ) break;
OYSAELA = (LYSAELA_f2==CQCAELA_nilids);
if ( ! OYSAELA )
{ /* line 3292: */
OYSAELA = A_VC_NE((*(&((*(&(KYSAELA_f1->Idinfo)))->Id))),(*(&((*(&(LYSAELA_f2->Idinfo)))->Id))));
}
if ( OYSAELA )
{ 
 /* line 3293: */
MYSAELA_equal = A68_FALSE;
} 
else
{ 
KYSAELA_f1 = (*(&(KYSAELA_f1->Rest)));
 /* line 3294: */
 /* line 3295: */
 /* line 3296: */
LYSAELA_f2 = (*(&(LYSAELA_f2->Rest)));
} 
}
 /* line 3297: */
PYSAELA = MYSAELA_equal;
if ( PYSAELA )
{ /* line 3298: */
PYSAELA = (LYSAELA_f2==CQCAELA_nilids);
}
QYSAELA = PYSAELA;
} 
A_PROC_EXIT(equalspecids);
return( QYSAELA );
} 
#undef NL

A68_VOID  TYSAELA_checkspecfns(A68_167 * Fd2, A68_166 * Fns)
{ 
A68_166 * UYSAELA;  /* clause result */
A68_166 * VYSAELA_f;
A68_BOOL  WYSAELA;  /* optbool result */
A68_BOOL  XYSAELA;  /* optbool result */
A68_167 * YYSAELA_fd1;
A68_INT  ZYSAELA_message;
A68_BOOL  AZSAELA;  /* optbool result */
A68_BOOL  BZSAELA;  /* optbool result */
A68_BOOL * CZSAELA;  /* YIELD */
A68_INT * DZSAELA;  /* YIELD */
A68_BOOL * EZSAELA;  /* YIELD */
A68_451  FZSAELA;  /* collateral clause result */
A68_263  GZSAELA;  /* OPERATORS - mode -> union mode */
A68_263  HZSAELA;  /* OPERATORS - mode -> union mode */
A68_263  IZSAELA;  /* OPERATORS - mode -> union mode */
A68_262  JZSAELA;  /* OPERATORS - istruct -> vector */
A68_INT * KZSAELA;  /* YIELD */
A68_INT * LZSAELA;  /* YIELD */
A_PROC_ENTRY(checkspecfns);
 /* line 3301: */
 /* line 3302: */
{ 
if ( ((*(&((*(&(Fd2->Fninfo)))->Status)))==CXCAELA_fn_flt) )
{ 
UYSAELA = HQCAELA_nilfns;
} 
else
{ 
UYSAELA = Fns;
} 
VYSAELA_f = UYSAELA;
 /* line 3303: */
for ( ;; )
{ 
 /* line 3304: */
WYSAELA = (VYSAELA_f!=HQCAELA_nilfns);
if ( WYSAELA )
{ /* line 3305: */
XYSAELA = ((*(&((*(&((*(&(VYSAELA_f->Fndec)))->Fninfo)))->Scope)))!=(-1));
if ( ! XYSAELA )
{XYSAELA = A_VC_NE((*(&((*(&(VYSAELA_f->Fndec)))->Id))),(*(&(Fd2->Id))));
}
 /* line 3306: */
WYSAELA = XYSAELA;
}
if ( !(WYSAELA) ) break;
VYSAELA_f = (*(&(VYSAELA_f->Rest)));
}
 /* line 3307: */
YIPAELA_namestack = XIPAELA_nonames;
 /* line 3308: */
 /* line 3309: */
if ( (VYSAELA_f!=HQCAELA_nilfns) )
{ 
YYSAELA_fd1 = (*(&(VYSAELA_f->Fndec)));
 /* line 3310: */
ZYSAELA_message = LWSAELA_samespecfns(YYSAELA_fd1, Fd2, A68_TRUE);
 /* line 3311: */
AZSAELA = !(*(&((*(&(YYSAELA_fd1->Fninfo)))->Outofdate)));
if ( AZSAELA )
{ /* line 3312: */
AZSAELA = (ZYSAELA_message==0);
}
if ( AZSAELA )
{ 
 /* line 3313: */
BZSAELA = JYSAELA_equalspecids((*(&(YYSAELA_fd1->Inputs))), (*(&(Fd2->Inputs))));
if ( BZSAELA )
{ /* line 3314: */
BZSAELA = JYSAELA_equalspecids((*(&(YYSAELA_fd1->Outputs))), (*(&(Fd2->Outputs))));
}
if ( BZSAELA )
{ 
CZSAELA = (&((*(&(YYSAELA_fd1->Fninfo)))->Text)) ;
(*CZSAELA) = A68_TRUE;
 /* line 3315: */
DZSAELA = (&((*(&(Fd2->Fninfo)))->Vnno)) ;
(*DZSAELA) = (*(&((*(&(YYSAELA_fd1->Fninfo)))->Vnno)));
 /* line 3316: */
 /* line 3317: */
 /* line 3318: */
EZSAELA = (&((*(&(YYSAELA_fd1->Fninfo)))->Import)) ;
(*EZSAELA) = (*(&((*(&(Fd2->Fninfo)))->Import)));
} 
} 
else
{ 
 /* line 3319: */
if ( (*(&((*(&(YYSAELA_fd1->Fninfo)))->Export))) )
{ 
LKPAELA_fp3 = (*(&(Fd2->Id)));
NKPAELA_fp7 = (*YYSAELA_fd1);
OKPAELA_fp8 = (*Fd2);
 /* line 3320: */
FZSAELA.data[0] = A_UNITE(GZSAELA,mode13,13,LKPAELA_fp3);
FZSAELA.data[1] = A_UNITE(HZSAELA,mode14,14,(&NKPAELA_fp7));
FZSAELA.data[2] = A_UNITE(IZSAELA,mode14,14,(&OKPAELA_fp8));
VZPAELA_namefaultp(96, A_HISVEC(JZSAELA,FZSAELA,3,A68_263 ));
 /* line 3322: */
EWSAELA_specsflt(ZYSAELA_message);
 /* line 3323: */
KZSAELA = (&((*(&(Fd2->Fninfo)))->Status)) ;
(*KZSAELA) = CXCAELA_fn_flt;
 /* line 3324: */
 /* line 3325: */
 /* line 3326: */
 /* line 3327: */
 /* line 3328: */
LZSAELA = (&((*(&(YYSAELA_fd1->Fninfo)))->Status)) ;
(*LZSAELA) = CXCAELA_fn_flt;
} 
} 
} 
} 
A_PROC_EXIT(checkspecfns);
return;
} 
#undef NL

A68_BOOL  NZSAELA_isprimrange(A68_172  T)
{ 
A68_172  OZSAELA;  /* united object - for case conformity */
A68_182  PZSAELA_f;
A68_BOOL  QZSAELA;  /* clause result */
A68_173 * RZSAELA_ps;
A68_247  SZSAELA;  /* united object - for case conformity */
A68_248  TZSAELA_pr;
A_PROC_ENTRY(isprimrange);
 /* line 3332: */
 /* line 3333: */
OZSAELA = T ;
switch ( OZSAELA.mode )
{ 
case 10: /* STRUCT(INT)  */
PZSAELA_f = (OZSAELA.data.mode10);
 /* line 3334: */
QZSAELA = A68_TRUE;
break;
case 1: /* REF STRUCT(REF MODE198,INT,MODE247)  */
RZSAELA_ps = (OZSAELA.data.mode1);
 /* line 3335: */
SZSAELA = (*(&(RZSAELA_ps->U))) ;
switch ( SZSAELA.mode )
{ 
case 1: /* STRUCT(REF MODE198,MODE185,MODE185)  */
TZSAELA_pr = (SZSAELA.data.mode1);
QZSAELA = A68_TRUE;
break;
default: 
 /* line 3336: */
QZSAELA = A68_FALSE;
break;
} 
break;
default: 
 /* line 3337: */
QZSAELA = A68_FALSE;
break;
} 
A_PROC_EXIT(isprimrange);
return( QZSAELA );
} 
#undef NL

A68_VOID  VZSAELA_primrange(A68_172  T, A68_248  *ReturnedValue)
{ 
A68_248  WZSAELA;  /* collateral clause result */
A68_185  XZSAELA;  /* OPERATORS - mode -> union mode */
A68_185  YZSAELA;  /* OPERATORS - mode -> union mode */
A68_248  ZZSAELA_ans;
A68_172  AATAELA;  /* united object - for case conformity */
A68_173 * BATAELA_ps;
A68_247  CATAELA;  /* united object - for case conformity */
A68_248  DATAELA_pr;
A68_248  EATAELA;  /* clause result */
A_PROC_ENTRY(primrange);
 /* line 3340: */
{ 
WZSAELA.Idinfo = (A68_198 *)A68_NIL;
WZSAELA.Lwb = A_UNITE(XZSAELA,mode4,4,DRCAELA_flt);
WZSAELA.Upb = A_UNITE(YZSAELA,mode4,4,DRCAELA_flt);
ZZSAELA_ans = WZSAELA;
 /* line 3341: */
 /* line 3342: */
AATAELA = T ;
switch ( AATAELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE198,INT,MODE247)  */
BATAELA_ps = (AATAELA.data.mode1);
 /* line 3343: */
CATAELA = (*(&(BATAELA_ps->U))) ;
switch ( CATAELA.mode )
{ 
case 1: /* STRUCT(REF MODE198,MODE185,MODE185)  */
DATAELA_pr = (CATAELA.data.mode1);
ZZSAELA_ans = DATAELA_pr;
break;
default: 
 /* line 3344: */
 /* line 3345: */
/*SKIP*/;
break;
} 
break;
default: 
/*SKIP*/;
break;
} 
 /* line 3346: */
 /* line 3347: */
EATAELA = ZZSAELA_ans;
} 
A_PROC_EXIT(primrange);
*ReturnedValue = (EATAELA);
return;
} 
#undef NL

A68_BOOL  GATAELA_isprimchar_t(A68_172  T)
{ 
A68_BOOL  HATAELA_ans;
A68_172  IATAELA;  /* united object - for case conformity */
A68_174 * JATAELA_rn;
A68_180 * KATAELA_b;
A68_182  LATAELA_f;
A68_176 * MATAELA_tv;
A68_173 * NATAELA_ps;
A68_247  OATAELA;  /* united object - for case conformity */
A68_250  PATAELA_pst;
A68_BOOL  QATAELA;  /* clause result */
A_PROC_ENTRY(isprimchar_t);
 /* line 3350: */
{ 
HATAELA_ans = A68_FALSE;
 /* line 3351: */
 /* line 3352: */
IATAELA = T ;
switch ( IATAELA.mode )
{ 
case 2: /* REF STRUCT(REF MODE198,INT,MODE172)  */
JATAELA_rn = (IATAELA.data.mode2);
 /* line 3353: */
HATAELA_ans = GATAELA_isprimchar_t((*(&(JATAELA_rn->T))));
break;
case 8: /* REF STRUCT(MODE172)  */
KATAELA_b = (IATAELA.data.mode8);
 /* line 3354: */
HATAELA_ans = GATAELA_isprimchar_t((*(&(KATAELA_b->Tbracket))));
break;
case 10: /* STRUCT(INT)  */
LATAELA_f = (IATAELA.data.mode10);
 /* line 3355: */
HATAELA_ans = A68_TRUE;
break;
case 4: /* REF STRUCT(REF MODE245,MODE172)  */
MATAELA_tv = (IATAELA.data.mode4);
 /* line 3356: */
HATAELA_ans = GATAELA_isprimchar_t((*(&(MATAELA_tv->T))));
break;
case 1: /* REF STRUCT(REF MODE198,INT,MODE247)  */
NATAELA_ps = (IATAELA.data.mode1);
 /* line 3357: */
 /* line 3358: */
OATAELA = (*(&(NATAELA_ps->U))) ;
switch ( OATAELA.mode )
{ 
case 3: /* STRUCT(REF MODE198,REF MODE54,REF MODE251)  */
PATAELA_pst = (OATAELA.data.mode3);
 /* line 3359: */
 /* line 3360: */
HATAELA_ans = A68_TRUE;
break;
default: 
 /* line 3361: */
 /* line 3362: */
/*SKIP*/;
break;
} 
break;
default: 
/*SKIP*/;
break;
} 
 /* line 3363: */
 /* line 3364: */
QATAELA = HATAELA_ans;
} 
A_PROC_EXIT(isprimchar_t);
return( QATAELA );
} 
#undef NL

A68_BOOL  SATAELA_arithtype(A68_172  T)
{ 
A68_BOOL  TATAELA_ans;
A68_172  UATAELA;  /* united object - for case conformity */
A68_174 * VATAELA_rn;
A68_180 * WATAELA_b;
A68_182  XATAELA_f;
A68_173 * YATAELA_ps;
A68_247  ZATAELA;  /* united object - for case conformity */
A68_248  ABTAELA_pr;
A68_249 * BBTAELA_pa;
A68_249 * CBTAELA_pl;
A68_BOOL  DBTAELA_assoc;
A68_BOOL  EBTAELA;  /* optbool result */
A68_250  FBTAELA_ps;
A68_176 * GBTAELA_tv;
A68_172  HBTAELA;  /* united object - for case conformity */
A68_BOOL  IBTAELA;  /* clause result */
A_PROC_ENTRY(arithtype);
 /* line 3367: */
{ 
TATAELA_ans = A68_FALSE;
 /* line 3368: */
 /* line 3369: */
UATAELA = T ;
switch ( UATAELA.mode )
{ 
case 2: /* REF STRUCT(REF MODE198,INT,MODE172)  */
VATAELA_rn = (UATAELA.data.mode2);
 /* line 3370: */
TATAELA_ans = SATAELA_arithtype((*(&(VATAELA_rn->T))));
break;
case 8: /* REF STRUCT(MODE172)  */
WATAELA_b = (UATAELA.data.mode8);
 /* line 3371: */
TATAELA_ans = SATAELA_arithtype((*(&(WATAELA_b->Tbracket))));
break;
case 10: /* STRUCT(INT)  */
XATAELA_f = (UATAELA.data.mode10);
 /* line 3372: */
TATAELA_ans = A68_TRUE;
break;
case 1: /* REF STRUCT(REF MODE198,INT,MODE247)  */
YATAELA_ps = (UATAELA.data.mode1);
 /* line 3373: */
 /* line 3374: */
ZATAELA = (*(&(YATAELA_ps->U))) ;
switch ( ZATAELA.mode )
{ 
case 1: /* STRUCT(REF MODE198,MODE185,MODE185)  */
ABTAELA_pr = (ZATAELA.data.mode1);
 /* line 3375: */
TATAELA_ans = A68_TRUE;
break;
case 2: /* REF STRUCT(REF MODE198,REF MODE172,REF MODE249)  */
BBTAELA_pa = (ZATAELA.data.mode2);
{ 
CBTAELA_pl = BBTAELA_pa;
 /* line 3376: */
DBTAELA_assoc = A68_FALSE;
 /* line 3377: */
for ( ;; )
{ 
 /* line 3378: */
EBTAELA = (CBTAELA_pl!=BQCAELA_nilpalts);
if ( EBTAELA )
{EBTAELA = !DBTAELA_assoc;
}
if ( !(EBTAELA) ) break;
if ( ((*(&(CBTAELA_pl->U)))!=EQCAELA_niltype) )
{ 
DBTAELA_assoc = A68_TRUE;
} 
 /* line 3379: */
 /* line 3380: */
CBTAELA_pl = (*(&(CBTAELA_pl->Rest)));
}
 /* line 3381: */
 /* line 3382: */
 /* line 3383: */
TATAELA_ans = !DBTAELA_assoc;
} 
break;
case 3: /* STRUCT(REF MODE198,REF MODE54,REF MODE251)  */
FBTAELA_ps = (ZATAELA.data.mode3);
 /* line 3384: */
 /* line 3385: */
TATAELA_ans = A68_TRUE;
break;
default: 
 /* line 3386: */
/*SKIP*/;
break;
} 
break;
case 4: /* REF STRUCT(REF MODE245,MODE172)  */
GBTAELA_tv = (UATAELA.data.mode4);
 /* line 3387: */
HBTAELA = (*(&(GBTAELA_tv->T))) ;
switch ( HBTAELA.mode )
{ 
case 5: /* STRUCT(INT)  */
 /* line 3388: */
/*SKIP*/;
break;
default: 
 /* line 3389: */
 /* line 3390: */
 /* line 3391: */
TATAELA_ans = SATAELA_arithtype((*(&(GBTAELA_tv->T))));
break;
} 
break;
default: 
/*SKIP*/;
break;
} 
 /* line 3392: */
 /* line 3393: */
IBTAELA = TATAELA_ans;
} 
A_PROC_EXIT(arithtype);
return( IBTAELA );
} 
#undef NL

A68_BOOL  KBTAELA_containsfntype(A68_172  T)
{ 
A68_172  LBTAELA;  /* united object - for case conformity */
A68_174 * MBTAELA_n;
A68_BOOL  NBTAELA;  /* clause result */
A68_176 * OBTAELA_t;
A68_180 * PBTAELA_b;
A68_175 * QBTAELA_st;
A68_BOOL  RBTAELA;  /* optbool result */
A68_BOOL  SBTAELA;  /* optbool result */
A68_172  TBTAELA;  /* OPERATORS - mode -> union mode */
A68_175 * UBTAELA;  /* YIELD */
A68_179 * VBTAELA_r;
A68_178 * WBTAELA_f;
A_PROC_ENTRY(containsfntype);
 /* line 3396: */
 /* line 3397: */
{ 
 /* line 3398: */
LBTAELA = T ;
switch ( LBTAELA.mode )
{ 
case 2: /* REF STRUCT(REF MODE198,INT,MODE172)  */
MBTAELA_n = (LBTAELA.data.mode2);
 /* line 3399: */
NBTAELA = KBTAELA_containsfntype((*(&(MBTAELA_n->T))));
break;
case 4: /* REF STRUCT(REF MODE245,MODE172)  */
OBTAELA_t = (LBTAELA.data.mode4);
 /* line 3400: */
NBTAELA = KBTAELA_containsfntype((*(&(OBTAELA_t->T))));
break;
case 8: /* REF STRUCT(MODE172)  */
PBTAELA_b = (LBTAELA.data.mode8);
 /* line 3401: */
NBTAELA = KBTAELA_containsfntype((*(&(PBTAELA_b->Tbracket))));
break;
case 3: /* REF STRUCT(MODE172,REF MODE175)  */
QBTAELA_st = (LBTAELA.data.mode3);
 /* line 3402: */
 /* line 3403: */
RBTAELA = (QBTAELA_st!=DQCAELA_nilst);
if ( RBTAELA )
{SBTAELA = KBTAELA_containsfntype((*(&(QBTAELA_st->T))));
if ( ! SBTAELA )
{UBTAELA = (*(&(QBTAELA_st->Rest))) ;
SBTAELA = KBTAELA_containsfntype(A_UNITE(TBTAELA,mode3,3,UBTAELA));
}
RBTAELA = SBTAELA;
}
 /* line 3404: */
NBTAELA = RBTAELA;
break;
case 7: /* REF STRUCT(MODE172,MODE185)  */
VBTAELA_r = (LBTAELA.data.mode7);
 /* line 3405: */
NBTAELA = KBTAELA_containsfntype((*(&(VBTAELA_r->T))));
break;
case 6: /* REF STRUCT(MODE172,MODE172)  */
WBTAELA_f = (LBTAELA.data.mode6);
 /* line 3406: */
NBTAELA = A68_TRUE;
break;
default: 
 /* line 3407: */
 /* line 3408: */
NBTAELA = A68_FALSE;
break;
} 
} 
A_PROC_EXIT(containsfntype);
return( NBTAELA );
} 
#undef NL

A68_BOOL  ZBTAELA_containssort(A68_222  Ct, A68_INT  Sort)
{ 
A68_222  ACTAELA;  /* united object - for case conformity */
A68_BOOL  BCTAELA;  /* clause result */
A68_230 * CCTAELA_ct;
A68_224 * DCTAELA_cpr;
A68_229 * ECTAELA_ca;
A68_BOOL  FCTAELA;  /* optbool result */
A68_BOOL  GCTAELA;  /* optbool result */
A68_222  HCTAELA;  /* OPERATORS - mode -> union mode */
A68_229 * ICTAELA;  /* YIELD */
A68_223 * JCTAELA_cn;
A68_226 * KCTAELA_cu;
A68_227 * LCTAELA_cr;
A68_231 * MCTAELA_cb;
A68_233 * NCTAELA_cs;
A68_238 * OCTAELA_ci;
A68_239 * PCTAELA_ct;
A68_243 * QCTAELA_ca;
A68_241 * RCTAELA_cp;
A68_228 * SCTAELA_cs;
A68_BOOL  TCTAELA;  /* optbool result */
A68_BOOL  UCTAELA;  /* optbool result */
A68_222  VCTAELA;  /* OPERATORS - mode -> union mode */
A68_228 * WCTAELA;  /* YIELD */
A68_240 * XCTAELA_cd;
A68_185  YCTAELA;  /* avoid structure result */
A68_185  ZCTAELA_cond;
A68_BOOL  ADTAELA_then;
A68_BOOL  BDTAELA_else;
A68_185  CDTAELA;  /* united object - for case conformity */
A68_INT  DDTAELA_i1;
A68_242 * EDTAELA_cc;
A68_BOOL  FDTAELA;  /* optbool result */
A_PROC_ENTRY(containssort);
 /* line 3412: */
 /* line 3413: */
{ 
 /* line 3414: */
ACTAELA = Ct ;
switch ( ACTAELA.mode )
{ 
case 13: /* REF STRUCT(MODE172)  */
 /* line 3415: */
BCTAELA = (Sort==NNCAELA_cquery);
break;
case 9: /* REF STRUCT(MODE172)  */
CCTAELA_ct = (ACTAELA.data.mode9);
 /* line 3416: */
BCTAELA = (Sort==EKCAELA_calt);
break;
case 2: /* REF STRUCT(MODE172,MODE185,MODE185)  */
DCTAELA_cpr = (ACTAELA.data.mode2);
 /* line 3417: */
BCTAELA = (Sort==EKCAELA_calt);
break;
case 8: /* REF STRUCT(MODE222,REF MODE229)  */
ECTAELA_ca = (ACTAELA.data.mode8);
 /* line 3418: */
if ( (Sort==EKCAELA_calt) )
{ 
 /* line 3419: */
BCTAELA = A68_TRUE;
} 
else
{ 
 /* line 3420: */
FCTAELA = (ECTAELA_ca!=JQCAELA_nilcalts);
if ( FCTAELA )
{ /* line 3421: */
GCTAELA = ZBTAELA_containssort((*(&(ECTAELA_ca->Calt))), Sort);
if ( ! GCTAELA )
{ICTAELA = (*(&(ECTAELA_ca->Rest))) ;
GCTAELA = ZBTAELA_containssort(A_UNITE(HCTAELA,mode8,8,ICTAELA), Sort);
}
 /* line 3422: */
FCTAELA = GCTAELA;
}
 /* line 3423: */
BCTAELA = FCTAELA;
} 
break;
case 1: /* REF STRUCT(REF MODE198,INT,MODE222,MODE172)  */
JCTAELA_cn = (ACTAELA.data.mode1);
 /* line 3424: */
BCTAELA = ZBTAELA_containssort((*(&(JCTAELA_cn->Ct))), Sort);
break;
case 5: /* REF STRUCT(REF MODE203,MODE222)  */
KCTAELA_cu = (ACTAELA.data.mode5);
 /* line 3425: */
BCTAELA = ZBTAELA_containssort((*(&(KCTAELA_cu->Ct))), Sort);
break;
case 6: /* REF STRUCT(MODE222,MODE185)  */
LCTAELA_cr = (ACTAELA.data.mode6);
 /* line 3426: */
BCTAELA = ZBTAELA_containssort((*(&(LCTAELA_cr->Ct))), Sort);
break;
case 12: /* REF STRUCT(MODE222)  */
MCTAELA_cb = (ACTAELA.data.mode12);
 /* line 3427: */
BCTAELA = ZBTAELA_containssort((*(&(MCTAELA_cb->Cbracket))), Sort);
break;
case 14: /* REF STRUCT(MODE185,MODE222,REF MODE246)  */
NCTAELA_cs = (ACTAELA.data.mode14);
 /* line 3428: */
BCTAELA = ZBTAELA_containssort((*(&(NCTAELA_cs->Ct))), Sort);
break;
case 19: /* REF STRUCT(MODE222,MODE185)  */
OCTAELA_ci = (ACTAELA.data.mode19);
 /* line 3429: */
BCTAELA = ZBTAELA_containssort((*(&(OCTAELA_ci->Ct))), Sort);
break;
case 20: /* REF STRUCT(MODE222,MODE185,MODE185)  */
PCTAELA_ct = (ACTAELA.data.mode20);
 /* line 3430: */
BCTAELA = ZBTAELA_containssort((*(&(PCTAELA_ct->Ct))), Sort);
break;
case 24: /* REF STRUCT(MODE222,MODE170)  */
QCTAELA_ca = (ACTAELA.data.mode24);
 /* line 3431: */
BCTAELA = ZBTAELA_containssort((*(&(QCTAELA_ca->Ct))), Sort);
break;
case 22: /* REF STRUCT(REF MODE244,MODE222)  */
RCTAELA_cp = (ACTAELA.data.mode22);
 /* line 3432: */
BCTAELA = ZBTAELA_containssort((*(&(RCTAELA_cp->Ct))), Sort);
break;
case 7: /* REF STRUCT(MODE222,REF MODE228)  */
SCTAELA_cs = (ACTAELA.data.mode7);
 /* line 3433: */
TCTAELA = (SCTAELA_cs!=KQCAELA_nilcst);
if ( TCTAELA )
{ /* line 3434: */
UCTAELA = ZBTAELA_containssort((*(&(SCTAELA_cs->Cst))), Sort);
if ( ! UCTAELA )
{WCTAELA = (*(&(SCTAELA_cs->Rest))) ;
UCTAELA = ZBTAELA_containssort(A_UNITE(VCTAELA,mode7,7,WCTAELA), Sort);
}
TCTAELA = UCTAELA;
}
 /* line 3435: */
BCTAELA = TCTAELA;
break;
case 21: /* REF STRUCT(MODE185,MODE222,MODE222)  */
XCTAELA_cd = (ACTAELA.data.mode21);
{ 
TDRAELA_simplify_int( (*(&(XCTAELA_cd->Test))), &YCTAELA );
ZCTAELA_cond = YCTAELA;
 /* line 3436: */
ADTAELA_then = ZBTAELA_containssort((*(&(XCTAELA_cd->Then))), Sort);
 /* line 3437: */
BDTAELA_else = ZBTAELA_containssort((*(&(XCTAELA_cd->Else))), Sort);
 /* line 3438: */
 /* line 3439: */
CDTAELA = ZCTAELA_cond ;
switch ( CDTAELA.mode )
{ 
case 1: /* INT */
DDTAELA_i1 = (CDTAELA.data.mode1);
if ( (DDTAELA_i1!=0) )
{ 
BCTAELA = ADTAELA_then;
} 
else
{ 
 /* line 3440: */
BCTAELA = BDTAELA_else;
} 
break;
default: 
 /* line 3441: */
 /* line 3442: */
 /* line 3443: */
BCTAELA = (ADTAELA_then&BDTAELA_else);
break;
} 
} 
break;
case 23: /* REF STRUCT(BOOL,INT,MODE222,MODE222)  */
EDTAELA_cc = (ACTAELA.data.mode23);
 /* line 3444: */
FDTAELA = ZBTAELA_containssort((*(&(EDTAELA_cc->Left))), Sort);
if ( ! FDTAELA )
{ /* line 3445: */
FDTAELA = ZBTAELA_containssort((*(&(EDTAELA_cc->Right))), Sort);
}
BCTAELA = FDTAELA;
break;
default: 
 /* line 3446: */
 /* line 3447: */
BCTAELA = A68_FALSE;
break;
} 
} 
A_PROC_EXIT(containssort);
return( BCTAELA );
} 
#undef NL

A68_BOOL  HDTAELA_ihasvmno(A68_185  I)
{ 
A68_185  IDTAELA;  /* united object - for case conformity */
A68_190 * JDTAELA_id;
A68_BOOL  KDTAELA;  /* optbool result */
A68_BOOL  LDTAELA;  /* clause result */
A68_191 * MDTAELA_im;
A68_192 * NDTAELA_ic;
A68_BOOL  ODTAELA;  /* optbool result */
A68_193 * PDTAELA_iv;
A68_188 * QDTAELA_ic;
A68_195 * RDTAELA_id;
A68_196 * SDTAELA_ib;
A_PROC_ENTRY(ihasvmno);
 /* line 3450: */
 /* line 3451: */
{ 
 /* line 3452: */
IDTAELA = I ;
switch ( IDTAELA.mode )
{ 
case 7: /* REF STRUCT(INT,MODE185,MODE185)  */
JDTAELA_id = (IDTAELA.data.mode7);
KDTAELA = HDTAELA_ihasvmno((*(&(JDTAELA_id->L))));
if ( ! KDTAELA )
{KDTAELA = HDTAELA_ihasvmno((*(&(JDTAELA_id->R))));
}
 /* line 3453: */
LDTAELA = KDTAELA;
break;
case 8: /* REF STRUCT(INT,MODE185)  */
MDTAELA_im = (IDTAELA.data.mode8);
 /* line 3454: */
LDTAELA = HDTAELA_ihasvmno((*(&(MDTAELA_im->R))));
break;
case 9: /* REF STRUCT(MODE185,MODE185,MODE185)  */
NDTAELA_ic = (IDTAELA.data.mode9);
ODTAELA = HDTAELA_ihasvmno((*(&(NDTAELA_ic->Cond))));
if ( ! ODTAELA )
{ /* line 3455: */
ODTAELA = HDTAELA_ihasvmno((*(&(NDTAELA_ic->T))));
}
if ( ! ODTAELA )
{ODTAELA = HDTAELA_ihasvmno((*(&(NDTAELA_ic->F))));
}
 /* line 3456: */
LDTAELA = ODTAELA;
break;
case 10: /* REF STRUCT(INT,MODE185,MODE185,MODE185)  */
PDTAELA_iv = (IDTAELA.data.mode10);
 /* line 3457: */
LDTAELA = A68_TRUE;
break;
case 5: /* REF STRUCT(MODE185,MODE185,INT)  */
QDTAELA_ic = (IDTAELA.data.mode5);
 /* line 3458: */
LDTAELA = HDTAELA_ihasvmno((*(&(QDTAELA_ic->Integer))));
break;
case 12: /* REF STRUCT(REF MODE198,INT,MODE185)  */
RDTAELA_id = (IDTAELA.data.mode12);
 /* line 3459: */
LDTAELA = HDTAELA_ihasvmno((*(&(RDTAELA_id->I))));
break;
case 13: /* REF STRUCT(MODE185)  */
SDTAELA_ib = (IDTAELA.data.mode13);
 /* line 3460: */
LDTAELA = HDTAELA_ihasvmno((*(&(SDTAELA_ib->Ibracket))));
break;
default: 
 /* line 3461: */
 /* line 3462: */
LDTAELA = A68_FALSE;
break;
} 
} 
A_PROC_EXIT(ihasvmno);
return( LDTAELA );
} 
#undef NL

A68_BOOL  VDTAELA_thasvmno(A68_172  T, A68_INT  V)
{ 
A68_456  ZDTAELA_ivmno;   /* proc value of non-global proc */
A68_172  NETAELA;  /* united object - for case conformity */
A68_175 * OETAELA_s;
A68_BOOL  PETAELA;  /* optbool result */
A68_BOOL  QETAELA;  /* optbool result */
A68_172  RETAELA;  /* OPERATORS - mode -> union mode */
A68_175 * SETAELA;  /* YIELD */
A68_BOOL  TETAELA;  /* clause result */
A68_179 * UETAELA_r;
A68_BOOL  VETAELA;  /* optbool result */
A68_180 * WETAELA_tb;
A68_181 * XETAELA_ts;
A68_BOOL  YETAELA;  /* optbool result */
A_PROC_ENTRY(thasvmno);
 /* line 3465: */
 /* line 3466: */
{ 
A_CLOSURE( ZDTAELA_ivmno, AETAELA_ivmno, BETAELA_ivmno );
(( BETAELA_ivmno * ) ( ZDTAELA_ivmno.nonlocals )) -> ZDTAELA_ivmno = ZDTAELA_ivmno;
 /* line 3480: */
 /* line 3481: */
NETAELA = T ;
switch ( NETAELA.mode )
{ 
case 3: /* REF STRUCT(MODE172,REF MODE175)  */
OETAELA_s = (NETAELA.data.mode3);
 /* line 3482: */
PETAELA = (OETAELA_s!=DQCAELA_nilst);
if ( PETAELA )
{QETAELA = VDTAELA_thasvmno((*(&(OETAELA_s->T))), V);
if ( ! QETAELA )
{SETAELA = (*(&(OETAELA_s->Rest))) ;
QETAELA = VDTAELA_thasvmno(A_UNITE(RETAELA,mode3,3,SETAELA), V);
}
PETAELA = QETAELA;
}
 /* line 3483: */
TETAELA = PETAELA;
break;
case 7: /* REF STRUCT(MODE172,MODE185)  */
UETAELA_r = (NETAELA.data.mode7);
VETAELA = VDTAELA_thasvmno((*(&(UETAELA_r->T))), V);
if ( ! VETAELA )
{VETAELA = A_CALLPROC(ZDTAELA_ivmno,((*(&(UETAELA_r->Size))), V),((*(&(UETAELA_r->Size))), V,(ZDTAELA_ivmno).nonlocals));
}
 /* line 3484: */
TETAELA = VETAELA;
break;
case 8: /* REF STRUCT(MODE172)  */
WETAELA_tb = (NETAELA.data.mode8);
 /* line 3485: */
TETAELA = VDTAELA_thasvmno((*(&(WETAELA_tb->Tbracket))), V);
break;
case 9: /* REF STRUCT(MODE185,MODE172)  */
XETAELA_ts = (NETAELA.data.mode9);
YETAELA = VDTAELA_thasvmno((*(&(XETAELA_ts->Tstring))), V);
if ( ! YETAELA )
{ /* line 3486: */
YETAELA = A_CALLPROC(ZDTAELA_ivmno,((*(&(XETAELA_ts->Size))), V),((*(&(XETAELA_ts->Size))), V,(ZDTAELA_ivmno).nonlocals));
}
TETAELA = YETAELA;
break;
default: 
 /* line 3487: */
 /* line 3488: */
TETAELA = A68_FALSE;
break;
} 
} 
A_PROC_EXIT(thasvmno);
return( TETAELA );
} 
#undef NL

A68_BOOL  CFTAELA_id_outside_if(A68_VC  Id, A68_293 * Sstack, A68_244 * Idlist)
{ 
A68_293 * DFTAELA_s;
A68_BOOL  EFTAELA;  /* optbool result */
A68_BOOL  FFTAELA;  /* optbool result */
A68_BOOL  GFTAELA;  /* clause result */
A68_BOOL  HFTAELA_notfound;
A68_244 * IFTAELA_i;
A68_BOOL  JFTAELA;  /* optbool result */
A_PROC_ENTRY(id_outside_if);
 /* line 3492: */
 /* line 3493: */
{ 
DFTAELA_s = Sstack;
 /* line 3494: */
for ( ;; )
{ 
 /* line 3495: */
EFTAELA = (DFTAELA_s!=CUCAELA_nilscope);
if ( EFTAELA )
{FFTAELA = ((*(&(DFTAELA_s->Scope)))!=TKCAELA_vif);
if ( FFTAELA )
{FFTAELA = ((*(&(DFTAELA_s->Scope)))!=XMCAELA_seqif);
}
 /* line 3496: */
EFTAELA = FFTAELA;
}
if ( !(EFTAELA) ) break;
DFTAELA_s = (*(&(DFTAELA_s->Rest)));
}
 /* line 3497: */
 /* line 3498: */
if ( (DFTAELA_s==CUCAELA_nilscope) )
{ 
 /* line 3499: */
GFTAELA = A68_FALSE;
} 
else
{ 
HFTAELA_notfound = A68_TRUE;
 /* line 3500: */
IFTAELA_i = Idlist;
 /* line 3501: */
for ( ;; )
{ 
 /* line 3502: */
JFTAELA = HFTAELA_notfound;
if ( JFTAELA )
{JFTAELA = (IFTAELA_i!=CQCAELA_nilids);
}
if ( JFTAELA )
{ /* line 3503: */
JFTAELA = ((*(&(DFTAELA_s->Ids)))!=IFTAELA_i);
}
if ( !(JFTAELA) ) break;
if ( A_VC_EQ((*(&((*(&(IFTAELA_i->Idinfo)))->Id))),Id) )
{ 
HFTAELA_notfound = A68_FALSE;
} 
 /* line 3504: */
 /* line 3505: */
IFTAELA_i = (*(&(IFTAELA_i->Rest)));
}
 /* line 3506: */
 /* line 3507: */
 /* line 3508: */
GFTAELA = HFTAELA_notfound;
} 
} 
A_PROC_EXIT(id_outside_if);
return( GFTAELA );
} 
#undef NL

A68_BOOL  NFTAELA_repl_local_make(A68_VC  Id, A68_293 * Scopestack, A68_244 * Idlist)
{ 
A68_293 * OFTAELA_s;
A68_BOOL  PFTAELA;  /* optbool result */
A68_244 * QFTAELA_i;
A68_BOOL  RFTAELA;  /* optbool result */
A68_BOOL  SFTAELA;  /* optbool result */
A68_BOOL  TFTAELA;  /* optbool result */
A68_BOOL  UFTAELA;  /* clause result */
A_PROC_ENTRY(repl_local_make);
 /* line 3512: */
 /* line 3513: */
{ 
OFTAELA_s = Scopestack;
 /* line 3514: */
for ( ;; )
{ 
PFTAELA = (OFTAELA_s!=CUCAELA_nilscope);
if ( PFTAELA )
{ /* line 3515: */
PFTAELA = ((*(&(OFTAELA_s->Scope)))!=VKCAELA_vvarmult);
}
if ( PFTAELA )
{ /* line 3516: */
PFTAELA = ((*(&(OFTAELA_s->Scope)))!=YMCAELA_seqvarmult);
}
if ( !(PFTAELA) ) break;
OFTAELA_s = (*(&(OFTAELA_s->Rest)));
}
 /* line 3517: */
QFTAELA_i = Idlist;
 /* line 3518: */
for ( ;; )
{ 
RFTAELA = (QFTAELA_i!=CQCAELA_nilids);
if ( RFTAELA )
{RFTAELA = A_VC_NE(Id,(*(&((*(&(QFTAELA_i->Idinfo)))->Id))));
}
 /* line 3519: */
if ( RFTAELA )
{SFTAELA = (OFTAELA_s==CUCAELA_nilscope);
if ( ! SFTAELA )
{SFTAELA = ((*(&(OFTAELA_s->Ids)))!=QFTAELA_i);
}
 /* line 3520: */
RFTAELA = SFTAELA;
}
if ( !(RFTAELA) ) break;
QFTAELA_i = (*(&(QFTAELA_i->Rest)));
}
 /* line 3521: */
TFTAELA = (OFTAELA_s==CUCAELA_nilscope);
if ( ! TFTAELA )
{ /* line 3522: */
TFTAELA = (QFTAELA_i==CQCAELA_nilids);
}
if ( ! TFTAELA )
{TFTAELA = ((*(&(OFTAELA_s->Ids)))==QFTAELA_i);
}
 /* line 3523: */
UFTAELA = !TFTAELA;
} 
A_PROC_EXIT(repl_local_make);
return( UFTAELA );
} 
#undef NL

A68_INT  WFTAELA_primtypeno(A68_172  T)
{ 
A68_172  XFTAELA;  /* united object - for case conformity */
A68_173 * YFTAELA_p;
A68_INT  ZFTAELA;  /* clause result */
A68_174 * AGTAELA_n;
A68_180 * BGTAELA_tb;
A68_176 * CGTAELA_tv;
A_PROC_ENTRY(primtypeno);
 /* line 3529: */
 /* line 3530: */
{ 
 /* line 3531: */
XFTAELA = T ;
switch ( XFTAELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE198,INT,MODE247)  */
YFTAELA_p = (XFTAELA.data.mode1);
 /* line 3532: */
ZFTAELA = (*(&(YFTAELA_p->Typeno)));
break;
case 2: /* REF STRUCT(REF MODE198,INT,MODE172)  */
AGTAELA_n = (XFTAELA.data.mode2);
 /* line 3533: */
ZFTAELA = WFTAELA_primtypeno((*(&(AGTAELA_n->T))));
break;
case 8: /* REF STRUCT(MODE172)  */
BGTAELA_tb = (XFTAELA.data.mode8);
 /* line 3534: */
ZFTAELA = WFTAELA_primtypeno((*(&(BGTAELA_tb->Tbracket))));
break;
case 4: /* REF STRUCT(REF MODE245,MODE172)  */
CGTAELA_tv = (XFTAELA.data.mode4);
 /* line 3535: */
ZFTAELA = WFTAELA_primtypeno((*(&(CGTAELA_tv->T))));
break;
default: 
UQPAELA_fault(5, VJAAOSI_nullmsg);
 /* line 3536: */
 /* line 3537: */
ZFTAELA = 1;
break;
} 
} 
A_PROC_EXIT(primtypeno);
return( ZFTAELA );
} 
#undef NL

A68_172 * FGTAELA_unn(A68_172  T, A68_INT  Index)
{ 
A68_249 * GGTAELA_p;
A68_172  HGTAELA;  /* avoid structure result */
A68_172  IGTAELA;  /* united object - for case conformity */
A68_173 * JGTAELA_ps;
A68_247  KGTAELA;  /* united object - for case conformity */
A68_249 * LGTAELA_pa;
A68_INT  MGTAELA;  /* to part of loop */
A68_INT  NGTAELA;  /* loop control */
A68_172 * OGTAELA;  /* clause result */
A_PROC_ENTRY(unn);
 /* line 3540: */
{ 
 /* line 3541: */
 /* line 3542: */
VIDAELA_primtype( T, A68_TRUE, &HGTAELA );
IGTAELA = HGTAELA ;
switch ( IGTAELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE198,INT,MODE247)  */
JGTAELA_ps = (IGTAELA.data.mode1);
 /* line 3543: */
 /* line 3544: */
KGTAELA = (*(&(JGTAELA_ps->U))) ;
switch ( KGTAELA.mode )
{ 
case 2: /* REF STRUCT(REF MODE198,REF MODE172,REF MODE249)  */
LGTAELA_pa = (KGTAELA.data.mode2);
 /* line 3545: */
{ 
GGTAELA_p = LGTAELA_pa;
MGTAELA = (Index-1);
for ( NGTAELA = 1;
NGTAELA <= MGTAELA;
NGTAELA += 1 )
{ 
GGTAELA_p = (*(&(GGTAELA_p->Rest)));
}
 /* line 3546: */
 /* line 3547: */
OGTAELA = (*(&(GGTAELA_p->U)));
} 
break;
default: 
 /* line 3548: */
 /* line 3549: */
OGTAELA = (A68_172 *)A68_NIL;
break;
} 
break;
default: 
 /* line 3550: */
OGTAELA = (A68_172 *)A68_NIL;
break;
} 
} 
A_PROC_EXIT(unn);
return( OGTAELA );
} 
#undef NL

A68_VOID  QGTAELA_addclassname(A68_VC  Id)
{ 
A68_BOOL  RGTAELA_found;
A68_246 * SGTAELA_cnames;
A68_BOOL  TGTAELA;  /* optbool result */
A68_246  UGTAELA;  /* collateral clause result */
A68_246 * VGTAELA;  /* YIELD */
A_PROC_ENTRY(addclassname);
 /* line 3554: */
{ 
RGTAELA_found = A68_FALSE;
 /* line 3555: */
SGTAELA_cnames = CJPAELA_classnames;
 /* line 3556: */
for ( ;; )
{ 
TGTAELA = !RGTAELA_found;
if ( TGTAELA )
{ /* line 3557: */
TGTAELA = (SGTAELA_cnames!=AJPAELA_nilstringlist);
}
if ( !(TGTAELA) ) break;
if ( A_VC_EQ(Id,(*(&(SGTAELA_cnames->Id)))) )
{ 
RGTAELA_found = A68_TRUE;
} 
 /* line 3558: */
 /* line 3559: */
SGTAELA_cnames = (*(&(SGTAELA_cnames->Rest)));
}
 /* line 3560: */
 /* line 3561: */
if ( !RGTAELA_found )
{ 
UGTAELA.Id = Id;
 /* line 3562: */
UGTAELA.Rest = CJPAELA_classnames;
 /* line 3563: */
VGTAELA = A_HEAP(A68_246 ) ;
(*VGTAELA) = UGTAELA ;
CJPAELA_classnames = VGTAELA;
} 
} 
A_PROC_EXIT(addclassname);
return;
} 
#undef NL

A_STATIC A68_171 * YGTAELA_appenddecs(A68_171 * D1, A68_171 * D2)
{ 
A68_171 * ZGTAELA;  /* clause result */
A68_171  AHTAELA;  /* collateral clause result */
A68_171 * BHTAELA;  /* YIELD */
A_PROC_ENTRY(appenddecs);
 /* line 3568: */
{ 
if ( (D1==FQCAELA_nildecs) )
{ 
 /* line 3569: */
ZGTAELA = D2;
} 
else
{ 
AHTAELA.T = (*(&(D1->T)));
AHTAELA.Ids = (*(&(D1->Ids)));
 /* line 3570: */
AHTAELA.Rest = YGTAELA_appenddecs((*(&(D1->Rest))), D2);
 /* line 3571: */
BHTAELA = A_HEAP(A68_171 ) ;
(*BHTAELA) = AHTAELA ;
ZGTAELA = BHTAELA;
} 
} 
A_PROC_EXIT(appenddecs);
return( ZGTAELA );
} 
#undef NL

A68_BOOL  DHTAELA_isvoid(A68_172  T)
{ 
A68_172  EHTAELA;  /* united object - for case conformity */
A68_174 * FHTAELA_n;
A68_BOOL  GHTAELA;  /* clause result */
A68_180 * HHTAELA_b;
A68_175 * IHTAELA_st;
A68_BOOL  JHTAELA;  /* optbool result */
A68_172  KHTAELA;  /* OPERATORS - mode -> union mode */
A68_175 * LHTAELA;  /* YIELD */
A68_179 * MHTAELA_r;
A68_176 * NHTAELA_tv;
A68_178 * OHTAELA_f;
A68_BOOL  PHTAELA;  /* optbool result */
A_PROC_ENTRY(isvoid);
 /* line 3574: */
 /* line 3575: */
{ 
 /* line 3576: */
EHTAELA = T ;
switch ( EHTAELA.mode )
{ 
case 2: /* REF STRUCT(REF MODE198,INT,MODE172)  */
FHTAELA_n = (EHTAELA.data.mode2);
 /* line 3577: */
GHTAELA = DHTAELA_isvoid((*(&(FHTAELA_n->T))));
break;
case 8: /* REF STRUCT(MODE172)  */
HHTAELA_b = (EHTAELA.data.mode8);
 /* line 3578: */
GHTAELA = DHTAELA_isvoid((*(&(HHTAELA_b->Tbracket))));
break;
case 3: /* REF STRUCT(MODE172,REF MODE175)  */
IHTAELA_st = (EHTAELA.data.mode3);
 /* line 3579: */
 /* line 3580: */
if ( (IHTAELA_st!=DQCAELA_nilst) )
{ 
JHTAELA = DHTAELA_isvoid((*(&(IHTAELA_st->T))));
if ( JHTAELA )
{LHTAELA = (*(&(IHTAELA_st->Rest))) ;
JHTAELA = DHTAELA_isvoid(A_UNITE(KHTAELA,mode3,3,LHTAELA));
}
 /* line 3581: */
GHTAELA = JHTAELA;
} 
else
{ 
 /* line 3582: */
 /* line 3583: */
GHTAELA = A68_TRUE;
} 
break;
case 7: /* REF STRUCT(MODE172,MODE185)  */
MHTAELA_r = (EHTAELA.data.mode7);
 /* line 3584: */
GHTAELA = DHTAELA_isvoid((*(&(MHTAELA_r->T))));
break;
case 4: /* REF STRUCT(REF MODE245,MODE172)  */
NHTAELA_tv = (EHTAELA.data.mode4);
 /* line 3585: */
GHTAELA = DHTAELA_isvoid((*(&(NHTAELA_tv->T))));
break;
case 6: /* REF STRUCT(MODE172,MODE172)  */
OHTAELA_f = (EHTAELA.data.mode6);
PHTAELA = DHTAELA_isvoid((*(&(OHTAELA_f->From))));
if ( PHTAELA )
{PHTAELA = DHTAELA_isvoid((*(&(OHTAELA_f->To))));
}
 /* line 3586: */
GHTAELA = PHTAELA;
break;
case 12: /* STRUCT(INT)  */
 /* line 3587: */
GHTAELA = A68_TRUE;
break;
default: 
 /* line 3588: */
 /* line 3589: */
GHTAELA = A68_FALSE;
break;
} 
} 
A_PROC_EXIT(isvoid);
return( GHTAELA );
} 
#undef NL

A_STATIC A68_VOID  SHTAELA_setprimtype(A68_172  T, A68_INT  Sort, A68_172  *ReturnedValue)
{ 
A68_172  THTAELA;  /* clause result */
A68_172  UHTAELA;  /* OPERATORS - mode -> union mode */
A68_172  XHTAELA;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(setprimtype);
 /* line 3592: */
 /* line 3593: */
if ( (Sort==RPCAELA_vnamesource) )
{ 
THTAELA = T;
} 
else
{ 
 /* line 3594: */
if ( (Sort==SPCAELA_vnamesink) )
{ 
THTAELA = A_UNITE(UHTAELA,mode5,5,AUCAELA_typenull);
} 
else
{ 
 /* line 3595: */
if ( (Sort==TPCAELA_vnameiosource) )
{ 
THTAELA = T;
} 
else
{ 
NKDAOST_sysfault(WHTAELA);
 /* line 3596: */
THTAELA = XHTAELA;
} 
} 
} 
A_PROC_EXIT(setprimtype);
*ReturnedValue = (THTAELA);
return;
} 
#undef NL

A68_VOID  AITAELA_setiotype(A68_172  T, A68_INT  Sort, A68_172  *ReturnedValue)
{ 
A68_461  DITAELA_stiotype;   /* proc value of non-global proc */
A68_172  KITAELA;  /* united object - for case conformity */
A68_174 * LITAELA_n;
A68_172  MITAELA;  /* clause result */
A68_172  NITAELA;  /* avoid structure result */
A68_175 * OITAELA_st;
A68_172  PITAELA;  /* OPERATORS - mode -> union mode */
A68_175 * QITAELA;  /* YIELD */
A68_179 * RITAELA_r;
A68_179  SITAELA;  /* collateral clause result */
A68_172  TITAELA;  /* avoid structure result */
A68_179 * UITAELA;  /* YIELD */
A68_172  VITAELA;  /* OPERATORS - mode -> union mode */
A68_181 * WITAELA_ts;
A68_181  XITAELA;  /* collateral clause result */
A68_172  YITAELA;  /* avoid structure result */
A68_181 * ZITAELA;  /* YIELD */
A68_172  AJTAELA;  /* OPERATORS - mode -> union mode */
A68_180 * BJTAELA_tb;
A68_172  CJTAELA;  /* avoid structure result */
A68_176 * DJTAELA_tv;
A68_172  EJTAELA;  /* united object - for case conformity */
A68_172  FJTAELA;  /* avoid structure result */
A68_172  GJTAELA;  /* avoid structure result */
A68_173 * HJTAELA_p;
A68_172  IJTAELA;  /* avoid structure result */
A68_178 * JJTAELA_ft;
A68_172  KJTAELA;  /* OPERATORS - mode -> union mode */
A68_172  NJTAELA;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(setiotype);
 /* line 3599: */
{ 
A_CLOSURE( DITAELA_stiotype, EITAELA_stiotype, FITAELA_stiotype );
(( FITAELA_stiotype * ) ( DITAELA_stiotype.nonlocals )) -> Sort = Sort;
(( FITAELA_stiotype * ) ( DITAELA_stiotype.nonlocals )) -> DITAELA_stiotype = DITAELA_stiotype;
 /* line 3604: */
 /* line 3605: */
KITAELA = T ;
switch ( KITAELA.mode )
{ 
case 2: /* REF STRUCT(REF MODE198,INT,MODE172)  */
LITAELA_n = (KITAELA.data.mode2);
 /* line 3606: */
AITAELA_setiotype( (*(&(LITAELA_n->T))), Sort, &NITAELA );
MITAELA = NITAELA;
break;
case 3: /* REF STRUCT(MODE172,REF MODE175)  */
OITAELA_st = (KITAELA.data.mode3);
 /* line 3607: */
QITAELA = A_CALLPROC(DITAELA_stiotype,(OITAELA_st),(OITAELA_st,(DITAELA_stiotype).nonlocals)) ;
MITAELA = A_UNITE(PITAELA,mode3,3,QITAELA);
break;
case 7: /* REF STRUCT(MODE172,MODE185)  */
RITAELA_r = (KITAELA.data.mode7);
AITAELA_setiotype( (*(&(RITAELA_r->T))), Sort, &TITAELA );
SITAELA.T = TITAELA;
SITAELA.Size = (*(&(RITAELA_r->Size)));
 /* line 3608: */
UITAELA = A_HEAP(A68_179 ) ;
(*UITAELA) = SITAELA ;
MITAELA = A_UNITE(VITAELA,mode7,7,UITAELA);
break;
case 9: /* REF STRUCT(MODE185,MODE172)  */
WITAELA_ts = (KITAELA.data.mode9);
 /* line 3609: */
XITAELA.Size = (*(&(WITAELA_ts->Size)));
AITAELA_setiotype( (*(&(WITAELA_ts->Tstring))), Sort, &YITAELA );
XITAELA.Tstring = YITAELA;
 /* line 3610: */
ZITAELA = A_HEAP(A68_181 ) ;
(*ZITAELA) = XITAELA ;
MITAELA = A_UNITE(AJTAELA,mode9,9,ZITAELA);
break;
case 8: /* REF STRUCT(MODE172)  */
BJTAELA_tb = (KITAELA.data.mode8);
 /* line 3611: */
AITAELA_setiotype( (*(&(BJTAELA_tb->Tbracket))), Sort, &CJTAELA );
MITAELA = CJTAELA;
break;
case 4: /* REF STRUCT(REF MODE245,MODE172)  */
DJTAELA_tv = (KITAELA.data.mode4);
 /* line 3612: */
EJTAELA = (*(&(DJTAELA_tv->T))) ;
switch ( EJTAELA.mode )
{ 
case 5: /* STRUCT(INT)  */
 /* line 3613: */
SHTAELA_setprimtype( T, Sort, &FJTAELA );
MITAELA = FJTAELA;
break;
default: 
 /* line 3614: */
 /* line 3615: */
AITAELA_setiotype( (*(&(DJTAELA_tv->T))), Sort, &GJTAELA );
MITAELA = GJTAELA;
break;
} 
break;
case 1: /* REF STRUCT(REF MODE198,INT,MODE247)  */
HJTAELA_p = (KITAELA.data.mode1);
 /* line 3616: */
SHTAELA_setprimtype( T, Sort, &IJTAELA );
MITAELA = IJTAELA;
break;
case 6: /* REF STRUCT(MODE172,MODE172)  */
JJTAELA_ft = (KITAELA.data.mode6);
 /* line 3617: */
if ( (Sort==RPCAELA_vnamesource) )
{ 
MITAELA = (*(&(JJTAELA_ft->To)));
} 
else
{ 
 /* line 3618: */
if ( (Sort==SPCAELA_vnamesink) )
{ 
MITAELA = (*(&(JJTAELA_ft->From)));
} 
else
{ 
 /* line 3619: */
if ( (Sort==TPCAELA_vnameiosource) )
{ 
MITAELA = A_UNITE(KJTAELA,mode6,6,JJTAELA_ft);
} 
else
{ 
NKDAOST_sysfault(MJTAELA);
 /* line 3620: */
 /* line 3621: */
 /* line 3622: */
MITAELA = NJTAELA;
} 
} 
} 
break;
default: 
 /* line 3623: */
MITAELA = T;
break;
} 
} 
A_PROC_EXIT(setiotype);
*ReturnedValue = (MITAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  RJTAELA_substint1(A68_268  P, A68_INT  I_fnno, A68_185  I, A68_185  *ReturnedValue)
{ 
A68_185  SJTAELA;  /* united object - for case conformity */
A68_190 * TJTAELA_iop;
A68_190  UJTAELA;  /* collateral clause result */
A68_185  VJTAELA;  /* avoid structure result */
A68_185  WJTAELA;  /* avoid structure result */
A68_185  XJTAELA;  /* clause result */
A68_190 * YJTAELA;  /* YIELD */
A68_185  ZJTAELA;  /* OPERATORS - mode -> union mode */
A68_191 * AKTAELA_mop;
A68_191  BKTAELA;  /* collateral clause result */
A68_185  CKTAELA;  /* avoid structure result */
A68_191 * DKTAELA;  /* YIELD */
A68_185  EKTAELA;  /* OPERATORS - mode -> union mode */
A68_192 * FKTAELA_c;
A68_192  GKTAELA;  /* collateral clause result */
A68_185  HKTAELA;  /* avoid structure result */
A68_185  IKTAELA;  /* avoid structure result */
A68_185  JKTAELA;  /* avoid structure result */
A68_192 * KKTAELA;  /* YIELD */
A68_185  LKTAELA;  /* OPERATORS - mode -> union mode */
A68_189 * MKTAELA_ivar;
A68_BOOL  NKTAELA;  /* optbool result */
A68_BOOL  OKTAELA;  /* optbool result */
A68_BOOL  PKTAELA;  /* optbool result */
A68_269 * QKTAELA_pv;
A68_INT  RKTAELA;  /* to part of loop */
A68_INT  SKTAELA;  /* loop control */
A68_270  TKTAELA;  /* united object - for case conformity */
A68_200  UKTAELA_id;
A68_185  VKTAELA;  /* OPERATORS - mode -> union mode */
A68_185  WKTAELA;  /* OPERATORS - mode -> union mode */
A68_188 * XKTAELA_ic;
A68_188  YKTAELA;  /* collateral clause result */
A68_185  ZKTAELA;  /* avoid structure result */
A68_188 * ALTAELA;  /* YIELD */
A68_185  BLTAELA;  /* OPERATORS - mode -> union mode */
A68_196 * CLTAELA_ib;
A68_185  DLTAELA;  /* avoid structure result */
A68_185  ELTAELA;  /* OPERATORS - mode -> union mode */
A68_196 * FLTAELA;  /* YIELD */
A_PROC_ENTRY(substint1);
 /* line 3627: */
 /* line 3628: */
{ 
 /* line 3629: */
SJTAELA = I ;
switch ( SJTAELA.mode )
{ 
case 7: /* REF STRUCT(INT,MODE185,MODE185)  */
TJTAELA_iop = (SJTAELA.data.mode7);
 /* line 3630: */
UJTAELA.Opno = (*(&(TJTAELA_iop->Opno)));
 /* line 3631: */
RJTAELA_substint1( P, I_fnno, (*(&(TJTAELA_iop->L))), &VJTAELA );
UJTAELA.L = VJTAELA;
RJTAELA_substint1( P, I_fnno, (*(&(TJTAELA_iop->R))), &WJTAELA );
UJTAELA.R = WJTAELA;
 /* line 3632: */
YJTAELA = A_HEAP(A68_190 ) ;
(*YJTAELA) = UJTAELA ;
XJTAELA = A_UNITE(ZJTAELA,mode7,7,YJTAELA);
break;
case 8: /* REF STRUCT(INT,MODE185)  */
AKTAELA_mop = (SJTAELA.data.mode8);
 /* line 3633: */
BKTAELA.Opno = (*(&(AKTAELA_mop->Opno)));
RJTAELA_substint1( P, I_fnno, (*(&(AKTAELA_mop->R))), &CKTAELA );
BKTAELA.R = CKTAELA;
 /* line 3634: */
DKTAELA = A_HEAP(A68_191 ) ;
(*DKTAELA) = BKTAELA ;
XJTAELA = A_UNITE(EKTAELA,mode8,8,DKTAELA);
break;
case 9: /* REF STRUCT(MODE185,MODE185,MODE185)  */
FKTAELA_c = (SJTAELA.data.mode9);
 /* line 3635: */
 /* line 3636: */
RJTAELA_substint1( P, I_fnno, (*(&(FKTAELA_c->Cond))), &HKTAELA );
GKTAELA.Cond = HKTAELA;
 /* line 3637: */
RJTAELA_substint1( P, I_fnno, (*(&(FKTAELA_c->T))), &IKTAELA );
GKTAELA.T = IKTAELA;
RJTAELA_substint1( P, I_fnno, (*(&(FKTAELA_c->F))), &JKTAELA );
GKTAELA.F = JKTAELA;
 /* line 3638: */
KKTAELA = A_HEAP(A68_192 ) ;
(*KKTAELA) = GKTAELA ;
XJTAELA = A_UNITE(LKTAELA,mode9,9,KKTAELA);
break;
case 6: /* REF STRUCT(REF MODE245)  */
MKTAELA_ivar = (SJTAELA.data.mode6);
 /* line 3639: */
 /* line 3640: */
NKTAELA = ((*(&((*(&(P.F->Fninfo)))->Status)))!=CXCAELA_fn_flt);
if ( NKTAELA )
{NKTAELA = ((*(&((*(&(MKTAELA_ivar->Im)))->Fnno)))<=I_fnno);
}
 /* line 3641: */
if ( NKTAELA )
{ /* line 3642: */
OKTAELA = ((*(&(P.F->Fnno)))==(*(&((*(&(MKTAELA_ivar->Im)))->Fnno))));
if ( ! OKTAELA )
{ /* line 3643: */
PKTAELA = ((*(&((*(&(P.F->Fninfo)))->Scope)))==0);
if ( PKTAELA )
{PKTAELA = ((*(&((*(&(MKTAELA_ivar->Im)))->Fnno)))==1);
}
 /* line 3644: */
OKTAELA = PKTAELA;
}
 /* line 3645: */
NKTAELA = OKTAELA;
}
if ( NKTAELA )
{ 
QKTAELA_pv = P.Pvals;
 /* line 3646: */
RKTAELA = ((*(&((*(&(MKTAELA_ivar->Im)))->Index)))-1);
for ( SKTAELA = 1;
SKTAELA <= RKTAELA;
SKTAELA += 1 )
{ 
 /* line 3647: */
if ( !((QKTAELA_pv!=BUCAELA_nilparamvals)) ) break;
QKTAELA_pv = (*(&(QKTAELA_pv->Rest)));
}
 /* line 3648: */
 /* line 3649: */
if ( (QKTAELA_pv!=BUCAELA_nilparamvals) )
{ 
 /* line 3650: */
TKTAELA = (*(&(QKTAELA_pv->Val))) ;
switch ( TKTAELA.mode )
{ 
case 1: /* STRUCT(MODE185)  */
UKTAELA_id = (TKTAELA.data.mode1);
 /* line 3651: */
 /* line 3652: */
XJTAELA = UKTAELA_id.I;
break;
default: 
 /* line 3653: */
 /* line 3654: */
XJTAELA = A_UNITE(VKTAELA,mode4,4,DRCAELA_flt);
break;
} 
} 
else
{ 
 /* line 3655: */
 /* line 3656: */
XJTAELA = A_UNITE(WKTAELA,mode4,4,DRCAELA_flt);
} 
} 
else
{ 
 /* line 3657: */
XJTAELA = I;
} 
break;
case 5: /* REF STRUCT(MODE185,MODE185,INT)  */
XKTAELA_ic = (SJTAELA.data.mode5);
 /* line 3658: */
RJTAELA_substint1( P, I_fnno, (*(&(XKTAELA_ic->Integer))), &ZKTAELA );
YKTAELA.Integer = ZKTAELA;
YKTAELA.Standard = (*(&(XKTAELA_ic->Standard)));
YKTAELA.Test = (*(&(XKTAELA_ic->Test)));
 /* line 3659: */
ALTAELA = A_HEAP(A68_188 ) ;
(*ALTAELA) = YKTAELA ;
XJTAELA = A_UNITE(BLTAELA,mode5,5,ALTAELA);
break;
case 13: /* REF STRUCT(MODE185)  */
CLTAELA_ib = (SJTAELA.data.mode13);
 /* line 3660: */
 /* line 3662: */
RJTAELA_substint1( P, I_fnno, (*(&(CLTAELA_ib->Ibracket))), &DLTAELA );
FLTAELA = DKDAELA_makeibracket(DLTAELA) ;
XJTAELA = A_UNITE(ELTAELA,mode13,13,FLTAELA);
break;
default: 
 /* line 3663: */
XJTAELA = I;
break;
} 
} 
A_PROC_EXIT(substint1);
*ReturnedValue = (XJTAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  ILTAELA_substvarmult(A68_185 * I, A68_INT  Vindex, A68_185  *ReturnedValue)
{ 
A68_185  JLTAELA;  /* united object - for case conformity */
A68_190 * KLTAELA_idop;
A68_190  LLTAELA;  /* collateral clause result */
A68_185  MLTAELA;  /* avoid structure result */
A68_185  NLTAELA;  /* avoid structure result */
A68_185  OLTAELA;  /* clause result */
A68_190 * PLTAELA;  /* YIELD */
A68_185  QLTAELA;  /* OPERATORS - mode -> union mode */
A68_191 * RLTAELA_imop;
A68_191  SLTAELA;  /* collateral clause result */
A68_185  TLTAELA;  /* avoid structure result */
A68_191 * ULTAELA;  /* YIELD */
A68_185  VLTAELA;  /* OPERATORS - mode -> union mode */
A68_192 * WLTAELA_c;
A68_192  XLTAELA;  /* collateral clause result */
A68_185  YLTAELA;  /* avoid structure result */
A68_185  ZLTAELA;  /* avoid structure result */
A68_185  AMTAELA;  /* avoid structure result */
A68_192 * BMTAELA;  /* YIELD */
A68_185  CMTAELA;  /* OPERATORS - mode -> union mode */
A68_193 * DMTAELA_iv;
A68_185  EMTAELA;  /* OPERATORS - mode -> union mode */
A68_196 * FMTAELA_ib;
A68_185  GMTAELA;  /* avoid structure result */
A68_185  HMTAELA;  /* OPERATORS - mode -> union mode */
A68_196 * IMTAELA;  /* YIELD */
A_PROC_ENTRY(substvarmult);
 /* line 3666: */
{ 
 /* line 3667: */
JLTAELA = (*I) ;
switch ( JLTAELA.mode )
{ 
case 7: /* REF STRUCT(INT,MODE185,MODE185)  */
KLTAELA_idop = (JLTAELA.data.mode7);
 /* line 3668: */
LLTAELA.Opno = (*(&(KLTAELA_idop->Opno)));
 /* line 3669: */
ILTAELA_substvarmult( (&(KLTAELA_idop->L)), Vindex, &MLTAELA );
LLTAELA.L = MLTAELA;
ILTAELA_substvarmult( (&(KLTAELA_idop->R)), Vindex, &NLTAELA );
LLTAELA.R = NLTAELA;
 /* line 3670: */
PLTAELA = A_HEAP(A68_190 ) ;
(*PLTAELA) = LLTAELA ;
OLTAELA = A_UNITE(QLTAELA,mode7,7,PLTAELA);
break;
case 8: /* REF STRUCT(INT,MODE185)  */
RLTAELA_imop = (JLTAELA.data.mode8);
 /* line 3671: */
SLTAELA.Opno = (*(&(RLTAELA_imop->Opno)));
ILTAELA_substvarmult( (&(RLTAELA_imop->R)), Vindex, &TLTAELA );
SLTAELA.R = TLTAELA;
 /* line 3672: */
ULTAELA = A_HEAP(A68_191 ) ;
(*ULTAELA) = SLTAELA ;
OLTAELA = A_UNITE(VLTAELA,mode8,8,ULTAELA);
break;
case 9: /* REF STRUCT(MODE185,MODE185,MODE185)  */
WLTAELA_c = (JLTAELA.data.mode9);
 /* line 3673: */
ILTAELA_substvarmult( (&(WLTAELA_c->Cond)), Vindex, &YLTAELA );
XLTAELA.Cond = YLTAELA;
 /* line 3674: */
ILTAELA_substvarmult( (&(WLTAELA_c->T)), Vindex, &ZLTAELA );
XLTAELA.T = ZLTAELA;
ILTAELA_substvarmult( (&(WLTAELA_c->F)), Vindex, &AMTAELA );
XLTAELA.F = AMTAELA;
 /* line 3675: */
BMTAELA = A_HEAP(A68_192 ) ;
(*BMTAELA) = XLTAELA ;
OLTAELA = A_UNITE(CMTAELA,mode9,9,BMTAELA);
break;
case 10: /* REF STRUCT(INT,MODE185,MODE185,MODE185)  */
DMTAELA_iv = (JLTAELA.data.mode10);
 /* line 3676: */
 /* line 3677: */
if ( ((*(&(DMTAELA_iv->Varmultno)))==Vindex) )
{ 
 /* line 3678: */
OLTAELA = (*(&(DMTAELA_iv->Index)));
} 
else
{ 
 /* line 3679: */
OLTAELA = A_UNITE(EMTAELA,mode10,10,DMTAELA_iv);
} 
break;
case 13: /* REF STRUCT(MODE185)  */
FMTAELA_ib = (JLTAELA.data.mode13);
 /* line 3680: */
 /* line 3681: */
ILTAELA_substvarmult( (&(FMTAELA_ib->Ibracket)), Vindex, &GMTAELA );
IMTAELA = DKDAELA_makeibracket(GMTAELA) ;
OLTAELA = A_UNITE(HMTAELA,mode13,13,IMTAELA);
break;
default: 
 /* line 3682: */
OLTAELA = (*I);
break;
} 
} 
A_PROC_EXIT(substvarmult);
*ReturnedValue = (OLTAELA);
return;
} 
#undef NL

A68_VOID  MMTAELA_substint(A68_268  P, A68_INT  I_fnno, A68_185  I, A68_185  *ReturnedValue)
{ 
A68_185  NMTAELA;  /* clause result */
A68_185  OMTAELA;  /* avoid structure result */
A68_185  PMTAELA;  /* avoid structure result */
A68_185  QMTAELA;  /* avoid structure result */
A_PROC_ENTRY(substint);
 /* line 3685: */
CDRAELA_simplify( I, A68_TRUE, &OMTAELA );
RJTAELA_substint1( P, I_fnno, OMTAELA, &PMTAELA );
CDRAELA_simplify( PMTAELA, A68_TRUE, &QMTAELA );
NMTAELA = QMTAELA;
A_PROC_EXIT(substint);
*ReturnedValue = (NMTAELA);
return;
} 
#undef NL

A68_VOID  UMTAELA_substtype(A68_268  P, A68_INT  T_fnno, A68_172  T, A68_172  *ReturnedValue)
{ 
A68_465  XMTAELA_substpalts;   /* proc value of non-global proc */
A68_461  INTAELA_substst;   /* proc value of non-global proc */
A68_172  PNTAELA;  /* united object - for case conformity */
A68_173 * QNTAELA_ps;
A68_173  RNTAELA;  /* collateral clause result */
A68_247  SNTAELA;  /* united object - for case conformity */
A68_248  TNTAELA_pr;
A68_248  UNTAELA;  /* collateral clause result */
A68_185  VNTAELA;  /* avoid structure result */
A68_185  WNTAELA;  /* avoid structure result */
A68_248 * XNTAELA;  /* YIELD */
A68_247  YNTAELA;  /* OPERATORS - mode -> union mode */
A68_248  ZNTAELA;  /* YIELD */
A68_249 * AOTAELA_pa;
A68_247  BOTAELA;  /* OPERATORS - mode -> union mode */
A68_249 * COTAELA;  /* YIELD */
A68_250  DOTAELA_ps;
A68_250  EOTAELA;  /* collateral clause result */
A68_250 * FOTAELA;  /* YIELD */
A68_247  GOTAELA;  /* OPERATORS - mode -> union mode */
A68_250  HOTAELA;  /* YIELD */
A68_247  IOTAELA;  /* OPERATORS - skip to mode */
A68_172  JOTAELA;  /* clause result */
A68_173 * KOTAELA;  /* YIELD */
A68_172  LOTAELA;  /* OPERATORS - mode -> union mode */
A68_174 * MOTAELA_rn;
A68_174  NOTAELA;  /* collateral clause result */
A68_172  OOTAELA;  /* avoid structure result */
A68_174 * POTAELA;  /* YIELD */
A68_172  QOTAELA;  /* OPERATORS - mode -> union mode */
A68_175 * ROTAELA_st;
A68_172  SOTAELA;  /* OPERATORS - mode -> union mode */
A68_175 * TOTAELA;  /* YIELD */
A68_176 * UOTAELA_tv;
A68_245 * VOTAELA_tmv;
A68_BOOL  WOTAELA;  /* optbool result */
A68_BOOL  XOTAELA;  /* optbool result */
A68_BOOL  YOTAELA;  /* optbool result */
A68_269 * ZOTAELA_pv;
A68_INT  APTAELA;  /* to part of loop */
A68_INT  BPTAELA;  /* loop control */
A68_270  CPTAELA;  /* united object - for case conformity */
A68_201  DPTAELA_tid;
A68_172  EPTAELA;  /* OPERATORS - mode -> union mode */
A68_172  FPTAELA;  /* OPERATORS - mode -> union mode */
A68_178 * GPTAELA_f;
A68_178  HPTAELA;  /* collateral clause result */
A68_172  IPTAELA;  /* avoid structure result */
A68_172  JPTAELA;  /* avoid structure result */
A68_178 * KPTAELA;  /* YIELD */
A68_172  LPTAELA;  /* OPERATORS - mode -> union mode */
A68_179 * MPTAELA_rr;
A68_179  NPTAELA;  /* collateral clause result */
A68_172  OPTAELA;  /* avoid structure result */
A68_185  PPTAELA;  /* avoid structure result */
A68_179 * QPTAELA;  /* YIELD */
A68_172  RPTAELA;  /* OPERATORS - mode -> union mode */
A68_180 * SPTAELA_tb;
A68_172  TPTAELA;  /* avoid structure result */
A68_172  UPTAELA;  /* OPERATORS - mode -> union mode */
A68_180 * VPTAELA;  /* YIELD */
A68_181 * WPTAELA_ts;
A68_181  XPTAELA;  /* collateral clause result */
A68_185  YPTAELA;  /* avoid structure result */
A68_172  ZPTAELA;  /* avoid structure result */
A68_181 * AQTAELA;  /* YIELD */
A68_172  BQTAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(substtype);
 /* line 3688: */
 /* line 3689: */
{ 
A_CLOSURE( XMTAELA_substpalts, YMTAELA_substpalts, ZMTAELA_substpalts );
(( ZMTAELA_substpalts * ) ( XMTAELA_substpalts.nonlocals )) -> P = P;
(( ZMTAELA_substpalts * ) ( XMTAELA_substpalts.nonlocals )) -> T_fnno = T_fnno;
(( ZMTAELA_substpalts * ) ( XMTAELA_substpalts.nonlocals )) -> XMTAELA_substpalts = XMTAELA_substpalts;
 /* line 3700: */
A_CLOSURE( INTAELA_substst, JNTAELA_substst, KNTAELA_substst );
(( KNTAELA_substst * ) ( INTAELA_substst.nonlocals )) -> P = P;
(( KNTAELA_substst * ) ( INTAELA_substst.nonlocals )) -> T_fnno = T_fnno;
(( KNTAELA_substst * ) ( INTAELA_substst.nonlocals )) -> INTAELA_substst = INTAELA_substst;
 /* line 3705: */
 /* line 3706: */
PNTAELA = T ;
switch ( PNTAELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE198,INT,MODE247)  */
QNTAELA_ps = (PNTAELA.data.mode1);
 /* line 3707: */
RNTAELA.Idinfo = (*(&(QNTAELA_ps->Idinfo)));
 /* line 3708: */
RNTAELA.Typeno = (*(&(QNTAELA_ps->Typeno)));
 /* line 3709: */
SNTAELA = (*(&(QNTAELA_ps->U))) ;
switch ( SNTAELA.mode )
{ 
case 1: /* STRUCT(REF MODE198,MODE185,MODE185)  */
TNTAELA_pr = (SNTAELA.data.mode1);
 /* line 3710: */
UNTAELA.Idinfo = TNTAELA_pr.Idinfo;
 /* line 3711: */
MMTAELA_substint( P, T_fnno, TNTAELA_pr.Lwb, &VNTAELA );
UNTAELA.Lwb = VNTAELA;
MMTAELA_substint( P, T_fnno, TNTAELA_pr.Upb, &WNTAELA );
UNTAELA.Upb = WNTAELA;
 /* line 3712: */
XNTAELA = A_HEAP(A68_248 ) ;
ZNTAELA = (*XNTAELA) = UNTAELA ;
RNTAELA.U = A_UNITE(YNTAELA,mode1,1,ZNTAELA);
break;
case 2: /* REF STRUCT(REF MODE198,REF MODE172,REF MODE249)  */
AOTAELA_pa = (SNTAELA.data.mode2);
 /* line 3713: */
 /* line 3714: */
COTAELA = A_CALLPROC(XMTAELA_substpalts,(AOTAELA_pa),(AOTAELA_pa,(XMTAELA_substpalts).nonlocals)) ;
RNTAELA.U = A_UNITE(BOTAELA,mode2,2,COTAELA);
break;
case 3: /* STRUCT(REF MODE198,REF MODE54,REF MODE251)  */
DOTAELA_ps = (SNTAELA.data.mode3);
 /* line 3715: */
EOTAELA.Idinfo = DOTAELA_ps.Idinfo;
EOTAELA.Charcheck = DOTAELA_ps.Charcheck;
 /* line 3716: */
EOTAELA.Charalts = DOTAELA_ps.Charalts;
 /* line 3717: */
FOTAELA = A_HEAP(A68_250 ) ;
HOTAELA = (*FOTAELA) = EOTAELA ;
RNTAELA.U = A_UNITE(GOTAELA,mode3,3,HOTAELA);
break;
default: 
 /* line 3718: */
RNTAELA.U = IOTAELA;
break;
} 
 /* line 3719: */
KOTAELA = A_HEAP(A68_173 ) ;
(*KOTAELA) = RNTAELA ;
JOTAELA = A_UNITE(LOTAELA,mode1,1,KOTAELA);
break;
case 2: /* REF STRUCT(REF MODE198,INT,MODE172)  */
MOTAELA_rn = (PNTAELA.data.mode2);
 /* line 3720: */
NOTAELA.Idinfo = (*(&(MOTAELA_rn->Idinfo)));
 /* line 3721: */
NOTAELA.Typeno = (*(&(MOTAELA_rn->Typeno)));
UMTAELA_substtype( P, T_fnno, (*(&(MOTAELA_rn->T))), &OOTAELA );
NOTAELA.T = OOTAELA;
 /* line 3722: */
POTAELA = A_HEAP(A68_174 ) ;
(*POTAELA) = NOTAELA ;
JOTAELA = A_UNITE(QOTAELA,mode2,2,POTAELA);
break;
case 3: /* REF STRUCT(MODE172,REF MODE175)  */
ROTAELA_st = (PNTAELA.data.mode3);
 /* line 3723: */
 /* line 3724: */
TOTAELA = A_CALLPROC(INTAELA_substst,(ROTAELA_st),(ROTAELA_st,(INTAELA_substst).nonlocals)) ;
JOTAELA = A_UNITE(SOTAELA,mode3,3,TOTAELA);
break;
case 4: /* REF STRUCT(REF MODE245,MODE172)  */
UOTAELA_tv = (PNTAELA.data.mode4);
 /* line 3725: */
{ 
VOTAELA_tmv = (*(&(UOTAELA_tv->Tm)));
 /* line 3726: */
 /* line 3727: */
WOTAELA = ((*(&((*(&(P.F->Fninfo)))->Status)))!=CXCAELA_fn_flt);
if ( WOTAELA )
{WOTAELA = ((*(&((*(&(UOTAELA_tv->Tm)))->Fnno)))<=T_fnno);
}
 /* line 3728: */
if ( WOTAELA )
{ /* line 3729: */
XOTAELA = ((*(&((*(&(UOTAELA_tv->Tm)))->Fnno)))==(*(&(P.F->Fnno))));
if ( ! XOTAELA )
{ /* line 3730: */
YOTAELA = ((*(&((*(&(P.F->Fninfo)))->Scope)))==0);
if ( YOTAELA )
{YOTAELA = ((*(&((*(&(UOTAELA_tv->Tm)))->Fnno)))==1);
}
 /* line 3731: */
XOTAELA = YOTAELA;
}
 /* line 3732: */
WOTAELA = XOTAELA;
}
if ( WOTAELA )
{ 
ZOTAELA_pv = P.Pvals;
 /* line 3733: */
APTAELA = ((*(&((*(&(UOTAELA_tv->Tm)))->Index)))-1);
for ( BPTAELA = 1;
BPTAELA <= APTAELA;
BPTAELA += 1 )
{ 
 /* line 3734: */
if ( !((ZOTAELA_pv!=BUCAELA_nilparamvals)) ) break;
ZOTAELA_pv = (*(&(ZOTAELA_pv->Rest)));
}
 /* line 3735: */
 /* line 3736: */
if ( (ZOTAELA_pv!=BUCAELA_nilparamvals) )
{ 
 /* line 3737: */
CPTAELA = (*(&(ZOTAELA_pv->Val))) ;
switch ( CPTAELA.mode )
{ 
case 2: /* STRUCT(MODE172)  */
DPTAELA_tid = (CPTAELA.data.mode2);
 /* line 3738: */
 /* line 3739: */
JOTAELA = DPTAELA_tid.T;
break;
default: 
 /* line 3740: */
 /* line 3741: */
JOTAELA = A_UNITE(EPTAELA,mode10,10,DRCAELA_flt);
break;
} 
} 
else
{ 
 /* line 3742: */
 /* line 3743: */
JOTAELA = A_UNITE(FPTAELA,mode10,10,DRCAELA_flt);
} 
} 
else
{ 
 /* line 3744: */
JOTAELA = T;
} 
} 
break;
case 6: /* REF STRUCT(MODE172,MODE172)  */
GPTAELA_f = (PNTAELA.data.mode6);
 /* line 3745: */
 /* line 3746: */
UMTAELA_substtype( P, T_fnno, (*(&(GPTAELA_f->From))), &IPTAELA );
HPTAELA.From = IPTAELA;
UMTAELA_substtype( P, T_fnno, (*(&(GPTAELA_f->To))), &JPTAELA );
HPTAELA.To = JPTAELA;
 /* line 3747: */
KPTAELA = A_HEAP(A68_178 ) ;
(*KPTAELA) = HPTAELA ;
JOTAELA = A_UNITE(LPTAELA,mode6,6,KPTAELA);
break;
case 7: /* REF STRUCT(MODE172,MODE185)  */
MPTAELA_rr = (PNTAELA.data.mode7);
 /* line 3748: */
 /* line 3749: */
UMTAELA_substtype( P, T_fnno, (*(&(MPTAELA_rr->T))), &OPTAELA );
NPTAELA.T = OPTAELA;
MMTAELA_substint( P, T_fnno, (*(&(MPTAELA_rr->Size))), &PPTAELA );
NPTAELA.Size = PPTAELA;
 /* line 3750: */
QPTAELA = A_HEAP(A68_179 ) ;
(*QPTAELA) = NPTAELA ;
JOTAELA = A_UNITE(RPTAELA,mode7,7,QPTAELA);
break;
case 8: /* REF STRUCT(MODE172)  */
SPTAELA_tb = (PNTAELA.data.mode8);
 /* line 3751: */
 /* line 3752: */
UMTAELA_substtype( P, T_fnno, (*(&(SPTAELA_tb->Tbracket))), &TPTAELA );
VPTAELA = IKDAELA_maketbracket(TPTAELA) ;
JOTAELA = A_UNITE(UPTAELA,mode8,8,VPTAELA);
break;
case 9: /* REF STRUCT(MODE185,MODE172)  */
WPTAELA_ts = (PNTAELA.data.mode9);
 /* line 3753: */
 /* line 3754: */
MMTAELA_substint( P, T_fnno, (*(&(WPTAELA_ts->Size))), &YPTAELA );
XPTAELA.Size = YPTAELA;
 /* line 3755: */
UMTAELA_substtype( P, T_fnno, (*(&(WPTAELA_ts->Tstring))), &ZPTAELA );
XPTAELA.Tstring = ZPTAELA;
 /* line 3757: */
AQTAELA = A_HEAP(A68_181 ) ;
(*AQTAELA) = XPTAELA ;
JOTAELA = A_UNITE(BQTAELA,mode9,9,AQTAELA);
break;
default: 
 /* line 3758: */
JOTAELA = T;
break;
} 
} 
A_PROC_EXIT(substtype);
*ReturnedValue = (JOTAELA);
return;
} 
#undef NL

A68_VOID  DQTAELA_sttorow(A68_175 * St, A68_172  *ReturnedValue)
{ 
A68_172  JQTAELA_t;
A68_175 * KQTAELA_s;
A68_INT  LQTAELA_k;
A68_172  MQTAELA;  /* united object - for case conformity */
A68_182  NQTAELA_f;
A68_172  OQTAELA;  /* united object - for case conformity */
A68_182  PQTAELA_f;
A68_179  QQTAELA;  /* collateral clause result */
A68_185  RQTAELA;  /* OPERATORS - mode -> union mode */
A68_172  SQTAELA;  /* clause result */
A68_179 * TQTAELA;  /* YIELD */
A68_172  UQTAELA;  /* OPERATORS - mode -> union mode */
A68_172  VQTAELA;  /* OPERATORS - mode -> union mode */
A68_172  WQTAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(sttorow);
 /* line 3762: */
{ 
JQTAELA_t = (*(&(St->T)));
KQTAELA_s = (*(&(St->Rest)));
LQTAELA_k = 1;
 /* line 3763: */
MQTAELA = JQTAELA_t ;
switch ( MQTAELA.mode )
{ 
case 10: /* STRUCT(INT)  */
NQTAELA_f = (MQTAELA.data.mode10);
goto GQTAELA_flt;
break;
default: 
/*SKIP*/;
break;
} 
 /* line 3764: */
for ( ;; )
{ 
 /* line 3765: */
if ( !((KQTAELA_s!=DQCAELA_nilst)) ) break;
if ( !ZQSAELA_specequals(JQTAELA_t, (*(&(KQTAELA_s->T))), 0, A68_FALSE) )
{ 
goto IQTAELA_out;
} 
 /* line 3766: */
OQTAELA = (*(&(KQTAELA_s->T))) ;
switch ( OQTAELA.mode )
{ 
case 10: /* STRUCT(INT)  */
PQTAELA_f = (OQTAELA.data.mode10);
goto GQTAELA_flt;
break;
default: 
/*SKIP*/;
break;
} 
 /* line 3767: */
KQTAELA_s = (*(&(KQTAELA_s->Rest)));
 /* line 3768: */
LQTAELA_k+=1;
}
 /* line 3769: */
QQTAELA.T = JQTAELA_t;
QQTAELA.Size = A_UNITE(RQTAELA,mode1,1,LQTAELA_k);
 /* line 3770: */
TQTAELA = A_HEAP(A68_179 ) ;
(*TQTAELA) = QQTAELA ;
SQTAELA = A_UNITE(UQTAELA,mode7,7,TQTAELA);
goto EQTAELA;
GQTAELA_flt:
 /* line 3771: */
SQTAELA = A_UNITE(VQTAELA,mode10,10,DRCAELA_flt);
goto EQTAELA;
IQTAELA_out:
 /* line 3772: */
SQTAELA = A_UNITE(WQTAELA,mode3,3,St);
EQTAELA: ;
} 
A_PROC_EXIT(sttorow);
*ReturnedValue = (SQTAELA);
return;
} 
#undef NL

A_STATIC A68_175 * ARTAELA_trimst(A68_175 * St, A68_INT  F, A68_INT  Size)
{ 
A68_BOOL  BRTAELA;  /* optbool result */
A68_175 * CRTAELA;  /* clause result */
A68_175  DRTAELA;  /* collateral clause result */
A68_175 * ERTAELA;  /* YIELD */
A_PROC_ENTRY(trimst);
 /* line 3775: */
 /* line 3776: */
{ 
BRTAELA = (St==DQCAELA_nilst);
if ( ! BRTAELA )
{BRTAELA = (Size<=0);
}
if ( ! BRTAELA )
{BRTAELA = (F<=0);
}
 /* line 3777: */
if ( BRTAELA )
{ 
CRTAELA = DQCAELA_nilst;
} 
else
{ 
if ( (F>1) )
{ 
 /* line 3778: */
 /* line 3779: */
CRTAELA = ARTAELA_trimst((*(&(St->Rest))), (F-1), Size);
} 
else
{ 
DRTAELA.T = (*(&(St->T)));
 /* line 3780: */
DRTAELA.Rest = ARTAELA_trimst((*(&(St->Rest))), F, (Size-1));
 /* line 3781: */
ERTAELA = A_HEAP(A68_175 ) ;
(*ERTAELA) = DRTAELA ;
CRTAELA = ERTAELA;
} 
} 
} 
A_PROC_EXIT(trimst);
return( CRTAELA );
} 
#undef NL

A68_VOID  HRTAELA_indexio(A68_172  T, A68_185  I2, A68_172  *ReturnedValue)
{ 
A68_INT  IRTAELA_int2;
A68_185  JRTAELA;  /* united object - for case conformity */
A68_182  KRTAELA_f;
A68_BOOL  LRTAELA;  /* clause result */
A68_172  MRTAELA;  /* clause result */
A68_172  NRTAELA;  /* OPERATORS - mode -> union mode */
A68_172  ORTAELA;  /* united object - for case conformity */
A68_179 * PRTAELA_rr;
A68_181 * QRTAELA_ts;
A68_175 * RRTAELA_rs;
A68_172  SRTAELA;  /* avoid structure result */
A68_172  TRTAELA;  /* united object - for case conformity */
A68_179 * URTAELA_rrs;
A68_181 * VRTAELA_tss;
A68_172  WRTAELA;  /* OPERATORS - mode -> union mode */
A68_172  XRTAELA;  /* OPERATORS - mode -> union mode */
A68_172  YRTAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(indexio);
 /* line 3784: */
 /* line 3785: */
{ 
IRTAELA_int2 = HDRAELA_giveint(I2);
 /* line 3786: */
JRTAELA = I2 ;
switch ( JRTAELA.mode )
{ 
case 4: /* STRUCT(INT)  */
KRTAELA_f = (JRTAELA.data.mode4);
LRTAELA = A68_TRUE;
break;
default: 
 /* line 3787: */
 /* line 3788: */
LRTAELA = A68_FALSE;
break;
} 
if ( LRTAELA )
{ 
MRTAELA = A_UNITE(NRTAELA,mode10,10,DRCAELA_flt);
} 
else
{ 
 /* line 3789: */
if ( (IRTAELA_int2==0) )
{ 
MRTAELA = T;
} 
else
{ 
 /* line 3790: */
ORTAELA = T ;
switch ( ORTAELA.mode )
{ 
case 7: /* REF STRUCT(MODE172,MODE185)  */
PRTAELA_rr = (ORTAELA.data.mode7);
 /* line 3791: */
MRTAELA = (*(&(PRTAELA_rr->T)));
break;
case 9: /* REF STRUCT(MODE185,MODE172)  */
QRTAELA_ts = (ORTAELA.data.mode9);
 /* line 3792: */
MRTAELA = (*(&(QRTAELA_ts->Tstring)));
break;
case 3: /* REF STRUCT(MODE172,REF MODE175)  */
RRTAELA_rs = (ORTAELA.data.mode3);
{ 
 /* line 3793: */
if ( (IRTAELA_int2<0) )
{ 
 /* line 3794: */
DQTAELA_sttorow( RRTAELA_rs, &SRTAELA );
TRTAELA = SRTAELA ;
switch ( TRTAELA.mode )
{ 
case 7: /* REF STRUCT(MODE172,MODE185)  */
URTAELA_rrs = (TRTAELA.data.mode7);
 /* line 3795: */
MRTAELA = (*(&(URTAELA_rrs->T)));
break;
case 9: /* REF STRUCT(MODE185,MODE172)  */
VRTAELA_tss = (TRTAELA.data.mode9);
 /* line 3796: */
MRTAELA = (*(&(VRTAELA_tss->Tstring)));
break;
default: 
 /* line 3797: */
UQPAELA_fault(57, VJAAOSI_nullmsg);
 /* line 3798: */
 /* line 3799: */
MRTAELA = A_UNITE(WRTAELA,mode10,10,DRCAELA_flt);
break;
} 
} 
else
{ 
 /* line 3800: */
 /* line 3801: */
MRTAELA = (*(&(ARTAELA_trimst(RRTAELA_rs, IRTAELA_int2, 1)->T)));
} 
} 
break;
case 10: /* STRUCT(INT)  */
 /* line 3802: */
MRTAELA = A_UNITE(XRTAELA,mode10,10,DRCAELA_flt);
break;
default: 
UQPAELA_fault(4, VJAAOSI_nullmsg);
 /* line 3803: */
 /* line 3804: */
 /* line 3805: */
MRTAELA = A_UNITE(YRTAELA,mode10,10,DRCAELA_flt);
break;
} 
} 
} 
} 
A_PROC_EXIT(indexio);
*ReturnedValue = (MRTAELA);
return;
} 
#undef NL

A68_VOID  ESTAELA_trimorindex(A68_172  T, A68_185  Trim, A68_185  Index, A68_185 * Lwb, A68_185 * Upb, A68_172  *ReturnedValue)
{ 
A68_172  JSTAELA_type;
A68_BOOL  KSTAELA_istrim;
A68_BOOL  LSTAELA;  /* optbool result */
A68_BOOL  MSTAELA_isconst;
A68_175 * NSTAELA_st;
A68_185  PSTAELA;  /* OPERATORS - mode -> union mode */
A68_185  OSTAELA_size;
A68_INT  QSTAELA_isize;
A68_172  RSTAELA;  /* avoid structure result */
A68_172  SSTAELA;  /* united object - for case conformity */
A68_174 * TSTAELA_n;
A68_176 * USTAELA_tv;
A68_182  VSTAELA_f;
A68_179 * WSTAELA_r;
A68_181 * XSTAELA_ts;
A68_175 * YSTAELA_s;
A68_185  ZSTAELA;  /* OPERATORS - mode -> union mode */
A68_172  ATTAELA;  /* OPERATORS - mode -> union mode */
A68_263  BTTAELA;  /* OPERATORS - unite union */
A68_262  CTTAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_263  DTTAELA;  /* OPERATORS - unite union */
A68_262  ETTAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_172  FTTAELA;  /* united object - for case conformity */
A68_182  GTTAELA_f;
A68_INT  HTTAELA;  /* clause result */
A68_262  ITTAELA;  /* clause result */
A68_263  JTTAELA;  /* OPERATORS - unite union */
A68_262  KTTAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_367  LTTAELA;  /* collateral clause result */
A68_263  MTTAELA;  /* OPERATORS - unite union */
A68_263  NTTAELA;  /* OPERATORS - unite union */
A68_262  OTTAELA;  /* OPERATORS - istruct -> vector */
A68_185  PTTAELA;  /* OPERATORS - mode -> union mode */
A68_INT  QTTAELA;  /* YIELD */
A68_BOOL  RTTAELA;  /* optbool result */
A68_INT  STTAELA;  /* clause result */
A68_367  TTTAELA;  /* collateral clause result */
A68_263  UTTAELA;  /* OPERATORS - unite union */
A68_263  VTTAELA;  /* OPERATORS - unite union */
A68_262  WTTAELA;  /* clause result */
A68_262  XTTAELA;  /* OPERATORS - istruct -> vector */
A68_451  YTTAELA;  /* collateral clause result */
A68_263  ZTTAELA;  /* OPERATORS - unite union */
A68_263  AUTAELA;  /* OPERATORS - unite union */
A68_263  BUTAELA;  /* OPERATORS - unite union */
A68_262  CUTAELA;  /* OPERATORS - istruct -> vector */
A68_BOOL  DUTAELA;  /* clause result */
A68_172  EUTAELA;  /* OPERATORS - mode -> union mode */
A68_BOOL  FUTAELA;  /* optbool result */
A68_367  GUTAELA;  /* collateral clause result */
A68_263  HUTAELA;  /* OPERATORS - unite union */
A68_263  IUTAELA;  /* OPERATORS - unite union */
A68_262  JUTAELA;  /* OPERATORS - istruct -> vector */
A68_185  KUTAELA;  /* avoid structure result */
A68_172  LUTAELA;  /* OPERATORS - mode -> union mode */
A68_172  MUTAELA;  /* united object - for case conformity */
A68_179 * NUTAELA_r;
A68_179  OUTAELA;  /* collateral clause result */
A68_172  PUTAELA;  /* clause result */
A68_179 * QUTAELA;  /* YIELD */
A68_172  RUTAELA;  /* OPERATORS - mode -> union mode */
A68_181 * SUTAELA_ts;
A68_181  TUTAELA;  /* collateral clause result */
A68_172  UUTAELA;  /* clause result */
A68_181 * VUTAELA;  /* YIELD */
A68_172  WUTAELA;  /* OPERATORS - mode -> union mode */
A68_175 * XUTAELA_s;
A68_185  YUTAELA;  /* avoid structure result */
A68_185  ZUTAELA;  /* united object - for case conformity */
A68_INT  AVTAELA_i1;
A68_BOOL  BVTAELA;  /* optbool result */
A68_185  CVTAELA;  /* avoid structure result */
A68_185  DVTAELA;  /* united object - for case conformity */
A68_INT  EVTAELA_s1;
A68_INT  FVTAELA;  /* clause result */
A68_BOOL  GVTAELA;  /* optbool result */
A68_172  HVTAELA;  /* clause result */
A68_172  IVTAELA;  /* OPERATORS - mode -> union mode */
A68_172  JVTAELA;  /* avoid structure result */
A68_172  KVTAELA;  /* united object - for case conformity */
A68_179 * LVTAELA_r;
A68_179  MVTAELA;  /* collateral clause result */
A68_172  NVTAELA;  /* clause result */
A68_179 * OVTAELA;  /* YIELD */
A68_172  PVTAELA;  /* OPERATORS - mode -> union mode */
A68_172  QVTAELA;  /* OPERATORS - mode -> union mode */
A68_172  RVTAELA;  /* clause result */
A_PROC_ENTRY(trimorindex);
 /* line 3808: */
 /* line 3809: */
{ 
JSTAELA_type = T;
 /* line 3810: */
KSTAELA_istrim = (HDRAELA_giveint(Trim)!=0);
 /* line 3811: */
LSTAELA = !KSTAELA_istrim;
if ( LSTAELA )
{LSTAELA = (HDRAELA_giveint((*Lwb))==HDRAELA_giveint((*Upb)));
}
MSTAELA_isconst = LSTAELA;
 /* line 3812: */
OSTAELA_size = A_UNITE(PSTAELA,mode4,4,DRCAELA_flt);
QSTAELA_isize = 0;
 /* line 3813: */
GSTAELA_b:
 /* line 3814: */
VIDAELA_primtype( JSTAELA_type, A68_FALSE, &RSTAELA );
SSTAELA = JSTAELA_type = RSTAELA ;
switch ( SSTAELA.mode )
{ 
case 2: /* REF STRUCT(REF MODE198,INT,MODE172)  */
TSTAELA_n = (SSTAELA.data.mode2);
{ 
JSTAELA_type = (*(&(TSTAELA_n->T)));
 /* line 3815: */
goto GSTAELA_b;
} 
break;
case 4: /* REF STRUCT(REF MODE245,MODE172)  */
USTAELA_tv = (SSTAELA.data.mode4);
{ 
JSTAELA_type = (*(&(USTAELA_tv->T)));
 /* line 3816: */
goto GSTAELA_b;
} 
break;
case 10: /* STRUCT(INT)  */
VSTAELA_f = (SSTAELA.data.mode10);
 /* line 3817: */
/*SKIP*/;
break;
case 7: /* REF STRUCT(MODE172,MODE185)  */
WSTAELA_r = (SSTAELA.data.mode7);
 /* line 3818: */
OSTAELA_size = (*(&(WSTAELA_r->Size)));
break;
case 9: /* REF STRUCT(MODE185,MODE172)  */
XSTAELA_ts = (SSTAELA.data.mode9);
 /* line 3819: */
OSTAELA_size = (*(&(XSTAELA_ts->Size)));
break;
case 3: /* REF STRUCT(MODE172,REF MODE175)  */
YSTAELA_s = (SSTAELA.data.mode3);
{ 
NSTAELA_st = YSTAELA_s;
 /* line 3820: */
for ( ;; )
{ 
 /* line 3821: */
if ( !((NSTAELA_st!=DQCAELA_nilst)) ) break;
QSTAELA_isize+=1;
NSTAELA_st = (*(&(NSTAELA_st->Rest)));
}
 /* line 3822: */
 /* line 3823: */
 /* line 3824: */
OSTAELA_size = A_UNITE(ZSTAELA,mode1,1,QSTAELA_isize);
} 
break;
default: 
{ 
JKPAELA_fp1 = JSTAELA_type;
JSTAELA_type = A_UNITE(ATTAELA,mode10,10,DRCAELA_flt);
 /* line 3825: */
 /* line 3826: */
if ( KSTAELA_istrim )
{ 
 /* line 3827: */
SZPAELA_faultp(64, A_HVEC(CTTAELA,A_UUNITE(BTTAELA,0,JKPAELA_fp1),A68_263 ));
} 
else
{ 
 /* line 3828: */
 /* line 3829: */
 /* line 3830: */
SZPAELA_faultp(58, A_HVEC(ETTAELA,A_UUNITE(DTTAELA,0,JKPAELA_fp1),A68_263 ));
} 
} 
break;
} 
 /* line 3831: */
FTTAELA = JSTAELA_type ;
switch ( FTTAELA.mode )
{ 
case 10: /* STRUCT(INT)  */
GTTAELA_f = (FTTAELA.data.mode10);
goto ISTAELA_ok;
break;
default: 
/*SKIP*/;
break;
} 
 /* line 3832: */
RKPAELA_fp5 = (*Lwb);
SKPAELA_fp6 = (*Upb);
QKPAELA_fp0 = OSTAELA_size;
 /* line 3833: */
 /* line 3834: */
 /* line 3835: */
 /* line 3836: */
if ( MSTAELA_isconst )
{ 
 /* line 3837: */
HTTAELA = 35;
} 
else
{ 
HTTAELA = 59;
} 
 /* line 3838: */
if ( MSTAELA_isconst )
{ 
ITTAELA = A_HVEC(KTTAELA,A_UTABUNITE(JTTAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",RKPAELA_fp5),A68_263 );
} 
else
{ 
LTTAELA.data[0] = A_UTABUNITE(MTTAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",RKPAELA_fp5);
LTTAELA.data[1] = A_UTABUNITE(NTTAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",SKPAELA_fp6);
ITTAELA = A_HISVEC(OTTAELA,LTTAELA,2,A68_263 );
} 
 /* line 3839: */
 /* line 3840: */
QTTAELA = 1 ;
RTTAELA = !PZRAELA_testintegers(CWRAELA_checkge, Lwb, A_UNITE(PTTAELA,mode1,1,QTTAELA), HTTAELA, ITTAELA);
if ( ! RTTAELA )
{ /* line 3841: */
 /* line 3842: */
 /* line 3843: */
if ( MSTAELA_isconst )
{ 
 /* line 3844: */
STTAELA = 41;
} 
else
{ 
STTAELA = 60;
} 
 /* line 3845: */
if ( MSTAELA_isconst )
{ 
TTTAELA.data[0] = A_UTABUNITE(UTTAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",RKPAELA_fp5);
TTTAELA.data[1] = A_UTABUNITE(VTTAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",QKPAELA_fp0);
WTTAELA = A_HISVEC(XTTAELA,TTTAELA,2,A68_263 );
} 
else
{ 
YTTAELA.data[0] = A_UTABUNITE(ZTTAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",RKPAELA_fp5);
YTTAELA.data[1] = A_UTABUNITE(AUTAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",SKPAELA_fp6);
YTTAELA.data[2] = A_UTABUNITE(BUTAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",QKPAELA_fp0);
WTTAELA = A_HISVEC(CUTAELA,YTTAELA,3,A68_263 );
} 
 /* line 3846: */
RTTAELA = !PZRAELA_testintegers(BWRAELA_checkle, Upb, OSTAELA_size, STTAELA, WTTAELA);
}
DUTAELA = RTTAELA;
if ( DUTAELA )
{ 
JSTAELA_type = A_UNITE(EUTAELA,mode10,10,DRCAELA_flt);
 /* line 3847: */
goto ISTAELA_ok;
} 
 /* line 3848: */
FUTAELA = KSTAELA_istrim;
if ( FUTAELA )
{ /* line 3849: */
GUTAELA.data[0] = A_UTABUNITE(HUTAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",RKPAELA_fp5);
GUTAELA.data[1] = A_UTABUNITE(IUTAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",SKPAELA_fp6);
 /* line 3850: */
DSDAELA_uncheckedint( (*Lwb), &KUTAELA );
FUTAELA = !PZRAELA_testintegers(CWRAELA_checkge, Upb, KUTAELA, 61, A_HISVEC(JUTAELA,GUTAELA,2,A68_263 ));
}
if ( FUTAELA )
{ 
JSTAELA_type = A_UNITE(LUTAELA,mode10,10,DRCAELA_flt);
 /* line 3851: */
goto ISTAELA_ok;
} 
 /* line 3852: */
 /* line 3853: */
MUTAELA = JSTAELA_type ;
switch ( MUTAELA.mode )
{ 
case 7: /* REF STRUCT(MODE172,MODE185)  */
NUTAELA_r = (MUTAELA.data.mode7);
 /* line 3854: */
if ( KSTAELA_istrim )
{ 
OUTAELA.T = (*(&(NUTAELA_r->T)));
OUTAELA.Size = Trim;
QUTAELA = A_HEAP(A68_179 ) ;
(*QUTAELA) = OUTAELA ;
PUTAELA = A_UNITE(RUTAELA,mode7,7,QUTAELA);
} 
else
{ 
PUTAELA = (*(&(NUTAELA_r->T)));
} 
 /* line 3855: */
JSTAELA_type = PUTAELA;
break;
case 9: /* REF STRUCT(MODE185,MODE172)  */
SUTAELA_ts = (MUTAELA.data.mode9);
 /* line 3856: */
if ( KSTAELA_istrim )
{ 
TUTAELA.Size = Trim;
 /* line 3857: */
TUTAELA.Tstring = (*(&(SUTAELA_ts->Tstring)));
VUTAELA = A_HEAP(A68_181 ) ;
(*VUTAELA) = TUTAELA ;
UUTAELA = A_UNITE(WUTAELA,mode9,9,VUTAELA);
} 
else
{ 
UUTAELA = (*(&(SUTAELA_ts->Tstring)));
} 
 /* line 3858: */
JSTAELA_type = UUTAELA;
break;
case 3: /* REF STRUCT(MODE172,REF MODE175)  */
XUTAELA_s = (MUTAELA.data.mode3);
 /* line 3859: */
{ 
 /* line 3860: */
TDRAELA_simplify_int( Index, &YUTAELA );
ZUTAELA = YUTAELA ;
switch ( ZUTAELA.mode )
{ 
case 1: /* INT */
AVTAELA_i1 = (ZUTAELA.data.mode1);
 /* line 3861: */
BVTAELA = (AVTAELA_i1<1);
if ( ! BVTAELA )
{ /* line 3862: */
BVTAELA = (AVTAELA_i1>QSTAELA_isize);
}
if ( BVTAELA )
{ 
 /* line 3863: */
goto ISTAELA_ok;
} 
else
{ 
 /* line 3864: */
TDRAELA_simplify_int( Trim, &CVTAELA );
DVTAELA = CVTAELA ;
switch ( DVTAELA.mode )
{ 
case 1: /* INT */
EVTAELA_s1 = (DVTAELA.data.mode1);
 /* line 3865: */
{ 
if ( KSTAELA_istrim )
{ 
FVTAELA = EVTAELA_s1;
} 
else
{ 
FVTAELA = 1;
} 
NSTAELA_st = ARTAELA_trimst(XUTAELA_s, AVTAELA_i1, FVTAELA);
 /* line 3866: */
GVTAELA = KSTAELA_istrim;
if ( ! GVTAELA )
{ /* line 3867: */
GVTAELA = ((*(&(NSTAELA_st->Rest)))!=DQCAELA_nilst);
}
if ( GVTAELA )
{ 
 /* line 3868: */
HVTAELA = A_UNITE(IVTAELA,mode3,3,NSTAELA_st);
} 
else
{ 
HVTAELA = (*(&(NSTAELA_st->T)));
} 
JSTAELA_type = HVTAELA;
 /* line 3869: */
 /* line 3870: */
 /* line 3871: */
 /* line 3872: */
goto ISTAELA_ok;
} 
break;
default: 
 /* line 3873: */
 /* line 3874: */
 /* line 3875: */
/*SKIP*/;
break;
} 
} 
break;
default: 
/*SKIP*/;
break;
} 
 /* line 3876: */
 /* line 3877: */
DQTAELA_sttorow( XUTAELA_s, &JVTAELA );
KVTAELA = JVTAELA ;
switch ( KVTAELA.mode )
{ 
case 7: /* REF STRUCT(MODE172,MODE185)  */
LVTAELA_r = (KVTAELA.data.mode7);
{ 
 /* line 3878: */
if ( KSTAELA_istrim )
{ 
MVTAELA.T = (*(&(LVTAELA_r->T)));
MVTAELA.Size = Trim;
 /* line 3879: */
OVTAELA = A_HEAP(A68_179 ) ;
(*OVTAELA) = MVTAELA ;
NVTAELA = A_UNITE(PVTAELA,mode7,7,OVTAELA);
} 
else
{ 
NVTAELA = (*(&(LVTAELA_r->T)));
} 
JSTAELA_type = NVTAELA;
 /* line 3880: */
 /* line 3881: */
 /* line 3882: */
 /* line 3883: */
goto ISTAELA_ok;
} 
break;
default: 
/*SKIP*/;
break;
} 
 /* line 3884: */
JSTAELA_type = A_UNITE(QVTAELA,mode10,10,DRCAELA_flt);
 /* line 3885: */
 /* line 3886: */
if ( KSTAELA_istrim )
{ 
 /* line 3887: */
UQPAELA_fault(63, VJAAOSI_nullmsg);
} 
else
{ 
 /* line 3888: */
 /* line 3889: */
 /* line 3890: */
UQPAELA_fault(57, VJAAOSI_nullmsg);
} 
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 3891: */
ISTAELA_ok:
 /* line 3892: */
RVTAELA = JSTAELA_type;
} 
A_PROC_EXIT(trimorindex);
*ReturnedValue = (RVTAELA);
return;
} 
#undef NL

A68_VOID  VVTAELA_mergetypes(A68_172  A, A68_172  B, A68_185  Cond, A68_172  *ReturnedValue)
{ 
A68_172  WVTAELA_t;
A68_173 * BWTAELA_pt;
A68_248 * CWTAELA_prt;
A68_249 * DWTAELA_pat;
A68_249 * EWTAELA_paa;
A68_249 * FWTAELA_pab;
A68_174 * GWTAELA_nt;
A68_178 * HWTAELA_ftt;
A68_175 * IWTAELA_pst;
A68_175 * JWTAELA_psa;
A68_175 * KWTAELA_psb;
A68_179 * LWTAELA_rt;
A68_176 * MWTAELA_tvt;
A68_181 * NWTAELA_tsr;
A68_172  OWTAELA;  /* united object - for case conformity */
A68_173 * PWTAELA_pa;
A68_172  QWTAELA;  /* united object - for case conformity */
A68_173 * RWTAELA_pb;
A68_173 * SWTAELA;  /* YIELD */
A68_172  TWTAELA;  /* OPERATORS - mode -> union mode */
A68_173 * UWTAELA;  /* YIELD */
A68_247  VWTAELA;  /* united object - for case conformity */
A68_248  WWTAELA_pra;
A68_247  XWTAELA;  /* united object - for case conformity */
A68_248  YWTAELA_prb;
A68_248 * ZWTAELA;  /* YIELD */
A68_185  AXTAELA;  /* united object - for case conformity */
A68_INT  BXTAELA_i;
A68_185  CXTAELA;  /* united object - for case conformity */
A68_INT  DXTAELA_j;
A68_BOOL  EXTAELA;  /* clause result */
A68_192  FXTAELA;  /* collateral clause result */
A68_192 * GXTAELA;  /* YIELD */
A68_185  HXTAELA;  /* OPERATORS - mode -> union mode */
A68_185 * IXTAELA;  /* YIELD */
A68_185  JXTAELA;  /* united object - for case conformity */
A68_INT  KXTAELA_i;
A68_185  LXTAELA;  /* united object - for case conformity */
A68_INT  MXTAELA_j;
A68_BOOL  NXTAELA;  /* clause result */
A68_192  OXTAELA;  /* collateral clause result */
A68_192 * PXTAELA;  /* YIELD */
A68_185  QXTAELA;  /* OPERATORS - mode -> union mode */
A68_185 * RXTAELA;  /* YIELD */
A68_247  SXTAELA;  /* OPERATORS - mode -> union mode */
A68_247 * TXTAELA;  /* YIELD */
A68_249 * UXTAELA_aa;
A68_247  VXTAELA;  /* united object - for case conformity */
A68_249 * WXTAELA_ab;
A68_247  XXTAELA;  /* united object - for case conformity */
A68_249 * YXTAELA_at;
A68_249 * ZXTAELA;  /* YIELD */
A68_247  AYTAELA;  /* OPERATORS - mode -> union mode */
A68_249 * BYTAELA;  /* YIELD */
A68_247 * CYTAELA;  /* YIELD */
A68_172 * DYTAELA;  /* clause result */
A68_172  EYTAELA;  /* avoid structure result */
A68_172 * FYTAELA;  /* YIELD */
A68_172 ** GYTAELA;  /* YIELD */
A68_249 * HYTAELA;  /* clause result */
A68_249 * IYTAELA;  /* YIELD */
A68_249 ** JYTAELA;  /* YIELD */
A68_250  KYTAELA_psa;
A68_247  LYTAELA;  /* united object - for case conformity */
A68_250  MYTAELA_psb;
A68_174 * NYTAELA_nb;
A68_172  OYTAELA;  /* OPERATORS - mode -> union mode */
A68_172  PYTAELA;  /* avoid structure result */
A68_174 * QYTAELA_na;
A68_172  RYTAELA;  /* united object - for case conformity */
A68_174 * SYTAELA_nb;
A68_174 * TYTAELA;  /* YIELD */
A68_172  UYTAELA;  /* OPERATORS - mode -> union mode */
A68_174 * VYTAELA;  /* YIELD */
A68_172  WYTAELA;  /* avoid structure result */
A68_172 * XYTAELA;  /* YIELD */
A68_172  YYTAELA;  /* avoid structure result */
A68_175 * ZYTAELA_sa;
A68_172  AZTAELA;  /* united object - for case conformity */
A68_175 * BZTAELA_sb;
A68_172  CZTAELA;  /* OPERATORS - mode -> union mode */
A68_175 * DZTAELA;  /* YIELD */
A68_172  EZTAELA;  /* avoid structure result */
A68_172 * FZTAELA;  /* YIELD */
A68_175 * GZTAELA;  /* clause result */
A68_175 ** HZTAELA;  /* YIELD */
A68_179 * IZTAELA_rb;
A68_172  JZTAELA;  /* avoid structure result */
A68_172  KZTAELA;  /* united object - for case conformity */
A68_182  LZTAELA_f;
A68_46  OZTAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_172  PZTAELA;  /* OPERATORS - mode -> union mode */
A68_172  QZTAELA;  /* avoid structure result */
A68_172  RZTAELA;  /* avoid structure result */
A68_176 * SZTAELA_tva;
A68_172  TZTAELA;  /* united object - for case conformity */
A68_176 * UZTAELA_tvb;
A68_176 * VZTAELA;  /* YIELD */
A68_172  WZTAELA;  /* OPERATORS - mode -> union mode */
A68_176 * XZTAELA;  /* YIELD */
A68_174 * YZTAELA_nb;
A68_172  ZZTAELA;  /* avoid structure result */
A68_178 * AAUAELA_fta;
A68_172  BAUAELA;  /* united object - for case conformity */
A68_178 * CAUAELA_ftb;
A68_172  DAUAELA;  /* OPERATORS - mode -> union mode */
A68_178 * EAUAELA;  /* YIELD */
A68_172  FAUAELA;  /* avoid structure result */
A68_172 * GAUAELA;  /* YIELD */
A68_172  HAUAELA;  /* avoid structure result */
A68_172 * IAUAELA;  /* YIELD */
A68_174 * JAUAELA_nb;
A68_172  KAUAELA;  /* avoid structure result */
A68_179 * LAUAELA_ra;
A68_172  MAUAELA;  /* united object - for case conformity */
A68_179 * NAUAELA_rb;
A68_179 * OAUAELA;  /* YIELD */
A68_172  PAUAELA;  /* OPERATORS - mode -> union mode */
A68_179 * QAUAELA;  /* YIELD */
A68_172  RAUAELA;  /* avoid structure result */
A68_172 * SAUAELA;  /* YIELD */
A68_185  TAUAELA;  /* united object - for case conformity */
A68_INT  UAUAELA_i;
A68_185  VAUAELA;  /* united object - for case conformity */
A68_INT  WAUAELA_j;
A68_BOOL  XAUAELA;  /* clause result */
A68_192  YAUAELA;  /* collateral clause result */
A68_192 * ZAUAELA;  /* YIELD */
A68_185  ABUAELA;  /* OPERATORS - mode -> union mode */
A68_185 * BBUAELA;  /* YIELD */
A68_175 * CBUAELA_sb;
A68_172  DBUAELA;  /* avoid structure result */
A68_172  EBUAELA;  /* united object - for case conformity */
A68_182  FBUAELA_f;
A68_46  IBUAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_172  JBUAELA;  /* OPERATORS - mode -> union mode */
A68_172  KBUAELA;  /* avoid structure result */
A68_172  LBUAELA;  /* avoid structure result */
A68_181 * MBUAELA_tsa;
A68_172  NBUAELA;  /* united object - for case conformity */
A68_181 * OBUAELA_tsb;
A68_181 * PBUAELA;  /* YIELD */
A68_172  QBUAELA;  /* OPERATORS - mode -> union mode */
A68_181 * RBUAELA;  /* YIELD */
A68_172  SBUAELA;  /* avoid structure result */
A68_172 * TBUAELA;  /* YIELD */
A68_185  UBUAELA;  /* united object - for case conformity */
A68_INT  VBUAELA_i;
A68_185  WBUAELA;  /* united object - for case conformity */
A68_INT  XBUAELA_j;
A68_BOOL  YBUAELA;  /* clause result */
A68_192  ZBUAELA;  /* collateral clause result */
A68_192 * ACUAELA;  /* YIELD */
A68_185  BCUAELA;  /* OPERATORS - mode -> union mode */
A68_185 * CCUAELA;  /* YIELD */
A68_172  DCUAELA;  /* avoid structure result */
A68_172  ECUAELA;  /* OPERATORS - mode -> union mode */
A68_172  FCUAELA;  /* clause result */
A_PROC_ENTRY(mergetypes);
 /* line 3895: */
 /* line 3896: */
{ 
WVTAELA_t = A;
 /* line 3897: */
 /* line 3898: */
 /* line 3899: */
 /* line 3900: */
 /* line 3901: */
 /* line 3902: */
if ( (OIPAELA_noflts==(-1)) )
{ 
 /* line 3903: */
OWTAELA = A ;
switch ( OWTAELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE198,INT,MODE247)  */
PWTAELA_pa = (OWTAELA.data.mode1);
 /* line 3904: */
QWTAELA = B ;
switch ( QWTAELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE198,INT,MODE247)  */
RWTAELA_pb = (QWTAELA.data.mode1);
 /* line 3905: */
{ 
SWTAELA = A_HEAP(A68_173 ) ;
(*SWTAELA) = (*PWTAELA_pa) ;
UWTAELA = BWTAELA_pt = SWTAELA ;
WVTAELA_t = A_UNITE(TWTAELA,mode1,1,UWTAELA);
 /* line 3906: */
 /* line 3907: */
VWTAELA = (*(&(PWTAELA_pa->U))) ;
switch ( VWTAELA.mode )
{ 
case 1: /* STRUCT(REF MODE198,MODE185,MODE185)  */
WWTAELA_pra = (VWTAELA.data.mode1);
XWTAELA = (*(&(RWTAELA_pb->U))) ;
switch ( XWTAELA.mode )
{ 
case 1: /* STRUCT(REF MODE198,MODE185,MODE185)  */
YWTAELA_prb = (XWTAELA.data.mode1);
 /* line 3908: */
{ 
ZWTAELA = A_HEAP(A68_248 ) ;
(*ZWTAELA) = WWTAELA_pra ;
CWTAELA_prt = ZWTAELA;
 /* line 3909: */
AXTAELA = WWTAELA_pra.Lwb ;
switch ( AXTAELA.mode )
{ 
case 1: /* INT */
BXTAELA_i = (AXTAELA.data.mode1);
 /* line 3910: */
CXTAELA = YWTAELA_prb.Lwb ;
switch ( CXTAELA.mode )
{ 
case 1: /* INT */
DXTAELA_j = (CXTAELA.data.mode1);
 /* line 3911: */
EXTAELA = A68_FALSE;
break;
default: 
 /* line 3912: */
 /* line 3913: */
EXTAELA = A68_TRUE;
break;
} 
break;
default: 
 /* line 3914: */
 /* line 3915: */
EXTAELA = A68_TRUE;
break;
} 
if ( EXTAELA )
{ 
FXTAELA.Cond = Cond;
FXTAELA.T = WWTAELA_pra.Lwb;
 /* line 3916: */
FXTAELA.F = YWTAELA_prb.Lwb;
GXTAELA = A_HEAP(A68_192 ) ;
(*GXTAELA) = FXTAELA ;
IXTAELA = (&(CWTAELA_prt->Lwb)) ;
(*IXTAELA) = A_UNITE(HXTAELA,mode9,9,GXTAELA);
} 
 /* line 3917: */
JXTAELA = WWTAELA_pra.Upb ;
switch ( JXTAELA.mode )
{ 
case 1: /* INT */
KXTAELA_i = (JXTAELA.data.mode1);
 /* line 3918: */
LXTAELA = YWTAELA_prb.Upb ;
switch ( LXTAELA.mode )
{ 
case 1: /* INT */
MXTAELA_j = (LXTAELA.data.mode1);
 /* line 3919: */
NXTAELA = A68_FALSE;
break;
default: 
 /* line 3920: */
 /* line 3921: */
NXTAELA = A68_TRUE;
break;
} 
break;
default: 
 /* line 3922: */
 /* line 3923: */
NXTAELA = A68_TRUE;
break;
} 
if ( NXTAELA )
{ 
OXTAELA.Cond = Cond;
OXTAELA.T = WWTAELA_pra.Upb;
 /* line 3924: */
OXTAELA.F = YWTAELA_prb.Upb;
PXTAELA = A_HEAP(A68_192 ) ;
(*PXTAELA) = OXTAELA ;
RXTAELA = (&(CWTAELA_prt->Upb)) ;
(*RXTAELA) = A_UNITE(QXTAELA,mode9,9,PXTAELA);
} 
 /* line 3925: */
 /* line 3926: */
 /* line 3927: */
 /* line 3928: */
TXTAELA = (&(BWTAELA_pt->U)) ;
(*TXTAELA) = A_UNITE(SXTAELA,mode1,1,(*CWTAELA_prt));
} 
break;
default: 
 /* line 3929: */
XVTAELA_fail();
break;
} 
break;
case 2: /* REF STRUCT(REF MODE198,REF MODE172,REF MODE249)  */
UXTAELA_aa = (VWTAELA.data.mode2);
VXTAELA = (*(&(RWTAELA_pb->U))) ;
switch ( VXTAELA.mode )
{ 
case 2: /* REF STRUCT(REF MODE198,REF MODE172,REF MODE249)  */
WXTAELA_ab = (VXTAELA.data.mode2);
 /* line 3930: */
XXTAELA = (*(&(BWTAELA_pt->U))) ;
switch ( XXTAELA.mode )
{ 
case 2: /* REF STRUCT(REF MODE198,REF MODE172,REF MODE249)  */
YXTAELA_at = (XXTAELA.data.mode2);
 /* line 3931: */
{ 
ZXTAELA = A_HEAP(A68_249 ) ;
(*ZXTAELA) = (*YXTAELA_at) ;
BYTAELA = DWTAELA_pat = ZXTAELA ;
CYTAELA = (&(BWTAELA_pt->U)) ;
(*CYTAELA) = A_UNITE(AYTAELA,mode2,2,BYTAELA);
EWTAELA_paa = UXTAELA_aa;
FWTAELA_pab = WXTAELA_ab;
 /* line 3932: */
for ( ;; )
{ 
 /* line 3933: */
if ( !((EWTAELA_paa!=BQCAELA_nilpalts)) ) break;
 /* line 3934: */
if ( ((*(&(EWTAELA_paa->U)))==EQCAELA_niltype) )
{ 
DYTAELA = EQCAELA_niltype;
} 
else
{ 
 /* line 3935: */
 /* line 3936: */
VVTAELA_mergetypes( (*(*(&(EWTAELA_paa->U)))), (*(*(&(FWTAELA_pab->U)))), Cond, &EYTAELA );
FYTAELA = A_HEAP(A68_172 ) ;
(*FYTAELA) = EYTAELA ;
DYTAELA = FYTAELA;
} 
GYTAELA = (&(DWTAELA_pat->U)) ;
(*GYTAELA) = DYTAELA;
 /* line 3937: */
EWTAELA_paa = (*(&(EWTAELA_paa->Rest)));
FWTAELA_pab = (*(&(FWTAELA_pab->Rest)));
 /* line 3938: */
 /* line 3939: */
if ( (EWTAELA_paa==BQCAELA_nilpalts) )
{ 
HYTAELA = BQCAELA_nilpalts;
} 
else
{ 
 /* line 3940: */
IYTAELA = A_HEAP(A68_249 ) ;
(*IYTAELA) = (*EWTAELA_paa) ;
HYTAELA = IYTAELA;
} 
JYTAELA = (&(DWTAELA_pat->Rest)) ;
DWTAELA_pat = (*JYTAELA) = HYTAELA;
}
 /* line 3941: */
 /* line 3942: */
 /* line 3943: */
} 
break;
default: 
 /* line 3944: */
 /* line 3945: */
XVTAELA_fail();
break;
} 
break;
default: 
 /* line 3946: */
XVTAELA_fail();
break;
} 
break;
case 3: /* STRUCT(REF MODE198,REF MODE54,REF MODE251)  */
KYTAELA_psa = (VWTAELA.data.mode3);
 /* line 3947: */
LYTAELA = (*(&(RWTAELA_pb->U))) ;
switch ( LYTAELA.mode )
{ 
case 3: /* STRUCT(REF MODE198,REF MODE54,REF MODE251)  */
MYTAELA_psb = (LYTAELA.data.mode3);
 /* line 3948: */
 /* line 3949: */
/*SKIP*/;
break;
default: 
 /* line 3950: */
 /* line 3951: */
XVTAELA_fail();
break;
} 
break;
default: 
 /* line 3952: */
 /* line 3953: */
XVTAELA_fail();
break;
} 
} 
break;
case 2: /* REF STRUCT(REF MODE198,INT,MODE172)  */
NYTAELA_nb = (QWTAELA.data.mode2);
 /* line 3954: */
 /* line 3955: */
VVTAELA_mergetypes( A_UNITE(OYTAELA,mode1,1,PWTAELA_pa), (*(&(NYTAELA_nb->T))), Cond, &PYTAELA );
PYTAELA;
break;
default: 
 /* line 3956: */
XVTAELA_fail();
break;
} 
break;
case 2: /* REF STRUCT(REF MODE198,INT,MODE172)  */
QYTAELA_na = (OWTAELA.data.mode2);
RYTAELA = B ;
switch ( RYTAELA.mode )
{ 
case 2: /* REF STRUCT(REF MODE198,INT,MODE172)  */
SYTAELA_nb = (RYTAELA.data.mode2);
 /* line 3957: */
{ 
TYTAELA = A_HEAP(A68_174 ) ;
(*TYTAELA) = (*QYTAELA_na) ;
VYTAELA = GWTAELA_nt = TYTAELA ;
WVTAELA_t = A_UNITE(UYTAELA,mode2,2,VYTAELA);
 /* line 3958: */
 /* line 3959: */
 /* line 3960: */
VVTAELA_mergetypes( (*(&(QYTAELA_na->T))), (*(&(SYTAELA_nb->T))), Cond, &WYTAELA );
XYTAELA = (&(GWTAELA_nt->T)) ;
(*XYTAELA) = WYTAELA;
} 
break;
default: 
 /* line 3961: */
 /* line 3962: */
VVTAELA_mergetypes( (*(&(QYTAELA_na->T))), B, Cond, &YYTAELA );
YYTAELA;
break;
} 
break;
case 3: /* REF STRUCT(MODE172,REF MODE175)  */
ZYTAELA_sa = (OWTAELA.data.mode3);
 /* line 3963: */
 /* line 3964: */
AZTAELA = B ;
switch ( AZTAELA.mode )
{ 
case 3: /* REF STRUCT(MODE172,REF MODE175)  */
BZTAELA_sb = (AZTAELA.data.mode3);
 /* line 3965: */
{ 
DZTAELA = IWTAELA_pst = A_HEAP(A68_175 ) ;
WVTAELA_t = A_UNITE(CZTAELA,mode3,3,DZTAELA);
JWTAELA_psa = ZYTAELA_sa;
KWTAELA_psb = BZTAELA_sb;
 /* line 3966: */
for ( ;; )
{ 
 /* line 3967: */
if ( !((JWTAELA_psa!=DQCAELA_nilst)) ) break;
VVTAELA_mergetypes( (*(&(JWTAELA_psa->T))), (*(&(KWTAELA_psb->T))), Cond, &EZTAELA );
FZTAELA = (&(IWTAELA_pst->T)) ;
(*FZTAELA) = EZTAELA;
 /* line 3968: */
JWTAELA_psa = (*(&(JWTAELA_psa->Rest)));
KWTAELA_psb = (*(&(KWTAELA_psb->Rest)));
 /* line 3969: */
 /* line 3970: */
if ( (JWTAELA_psa==DQCAELA_nilst) )
{ 
GZTAELA = DQCAELA_nilst;
} 
else
{ 
 /* line 3971: */
GZTAELA = A_HEAP(A68_175 );
} 
HZTAELA = (&(IWTAELA_pst->Rest)) ;
IWTAELA_pst = (*HZTAELA) = GZTAELA;
}
 /* line 3973: */
 /* line 3974: */
} 
break;
case 7: /* REF STRUCT(MODE172,MODE185)  */
IZTAELA_rb = (AZTAELA.data.mode7);
 /* line 3975: */
{ 
DQTAELA_sttorow( ZYTAELA_sa, &JZTAELA );
WVTAELA_t = JZTAELA;
KZTAELA = WVTAELA_t ;
switch ( KZTAELA.mode )
{ 
case 10: /* STRUCT(INT)  */
LZTAELA_f = (KZTAELA.data.mode10);
UQPAELA_fault(0, A_HVEC(OZTAELA,NZTAELA,A68_VC ));
break;
default: 
/*SKIP*/;
break;
} 
 /* line 3976: */
 /* line 3977: */
 /* line 3978: */
VVTAELA_mergetypes( WVTAELA_t, A_UNITE(PZTAELA,mode7,7,IZTAELA_rb), Cond, &QZTAELA );
WVTAELA_t = QZTAELA;
} 
break;
default: 
 /* line 3979: */
 /* line 3980: */
VVTAELA_mergetypes( B, A, Cond, &RZTAELA );
RZTAELA;
break;
} 
break;
case 4: /* REF STRUCT(REF MODE245,MODE172)  */
SZTAELA_tva = (OWTAELA.data.mode4);
 /* line 3981: */
TZTAELA = B ;
switch ( TZTAELA.mode )
{ 
case 4: /* REF STRUCT(REF MODE245,MODE172)  */
UZTAELA_tvb = (TZTAELA.data.mode4);
 /* line 3982: */
VZTAELA = A_HEAP(A68_176 ) ;
(*VZTAELA) = (*SZTAELA_tva) ;
XZTAELA = MWTAELA_tvt = VZTAELA ;
WVTAELA_t = A_UNITE(WZTAELA,mode4,4,XZTAELA);
break;
case 2: /* REF STRUCT(REF MODE198,INT,MODE172)  */
YZTAELA_nb = (TZTAELA.data.mode2);
 /* line 3983: */
 /* line 3984: */
VVTAELA_mergetypes( A, (*(&(YZTAELA_nb->T))), Cond, &ZZTAELA );
ZZTAELA;
break;
default: 
 /* line 3985: */
XVTAELA_fail();
break;
} 
break;
case 6: /* REF STRUCT(MODE172,MODE172)  */
AAUAELA_fta = (OWTAELA.data.mode6);
 /* line 3986: */
BAUAELA = B ;
switch ( BAUAELA.mode )
{ 
case 6: /* REF STRUCT(MODE172,MODE172)  */
CAUAELA_ftb = (BAUAELA.data.mode6);
 /* line 3987: */
{ 
EAUAELA = HWTAELA_ftt = A_HEAP(A68_178 ) ;
WVTAELA_t = A_UNITE(DAUAELA,mode6,6,EAUAELA);
 /* line 3988: */
VVTAELA_mergetypes( (*(&(AAUAELA_fta->From))), (*(&(CAUAELA_ftb->From))), Cond, &FAUAELA );
GAUAELA = (&(HWTAELA_ftt->From)) ;
(*GAUAELA) = FAUAELA;
 /* line 3989: */
 /* line 3990: */
 /* line 3991: */
VVTAELA_mergetypes( (*(&(AAUAELA_fta->To))), (*(&(CAUAELA_ftb->To))), Cond, &HAUAELA );
IAUAELA = (&(HWTAELA_ftt->To)) ;
(*IAUAELA) = HAUAELA;
} 
break;
case 2: /* REF STRUCT(REF MODE198,INT,MODE172)  */
JAUAELA_nb = (BAUAELA.data.mode2);
 /* line 3992: */
 /* line 3993: */
VVTAELA_mergetypes( A, (*(&(JAUAELA_nb->T))), Cond, &KAUAELA );
KAUAELA;
break;
default: 
 /* line 3994: */
XVTAELA_fail();
break;
} 
break;
case 7: /* REF STRUCT(MODE172,MODE185)  */
LAUAELA_ra = (OWTAELA.data.mode7);
 /* line 3995: */
 /* line 3996: */
MAUAELA = B ;
switch ( MAUAELA.mode )
{ 
case 7: /* REF STRUCT(MODE172,MODE185)  */
NAUAELA_rb = (MAUAELA.data.mode7);
 /* line 3997: */
{ 
OAUAELA = A_HEAP(A68_179 ) ;
(*OAUAELA) = (*LAUAELA_ra) ;
QAUAELA = LWTAELA_rt = OAUAELA ;
WVTAELA_t = A_UNITE(PAUAELA,mode7,7,QAUAELA);
 /* line 3998: */
VVTAELA_mergetypes( (*(&(LAUAELA_ra->T))), (*(&(NAUAELA_rb->T))), Cond, &RAUAELA );
SAUAELA = (&(LWTAELA_rt->T)) ;
(*SAUAELA) = RAUAELA;
 /* line 3999: */
TAUAELA = (*(&(LAUAELA_ra->Size))) ;
switch ( TAUAELA.mode )
{ 
case 1: /* INT */
UAUAELA_i = (TAUAELA.data.mode1);
 /* line 4000: */
VAUAELA = (*(&(NAUAELA_rb->Size))) ;
switch ( VAUAELA.mode )
{ 
case 1: /* INT */
WAUAELA_j = (VAUAELA.data.mode1);
 /* line 4001: */
XAUAELA = (UAUAELA_i!=WAUAELA_j);
break;
default: 
 /* line 4002: */
 /* line 4003: */
XAUAELA = A68_TRUE;
break;
} 
break;
default: 
 /* line 4004: */
 /* line 4005: */
XAUAELA = A68_TRUE;
break;
} 
if ( XAUAELA )
{ 
YAUAELA.Cond = Cond;
YAUAELA.T = (*(&(LAUAELA_ra->Size)));
 /* line 4006: */
YAUAELA.F = (*(&(NAUAELA_rb->Size)));
 /* line 4007: */
 /* line 4008: */
ZAUAELA = A_HEAP(A68_192 ) ;
(*ZAUAELA) = YAUAELA ;
BBUAELA = (&(LWTAELA_rt->Size)) ;
(*BBUAELA) = A_UNITE(ABUAELA,mode9,9,ZAUAELA);
} 
} 
break;
case 3: /* REF STRUCT(MODE172,REF MODE175)  */
CBUAELA_sb = (MAUAELA.data.mode3);
 /* line 4009: */
{ 
DQTAELA_sttorow( CBUAELA_sb, &DBUAELA );
WVTAELA_t = DBUAELA;
EBUAELA = WVTAELA_t ;
switch ( EBUAELA.mode )
{ 
case 10: /* STRUCT(INT)  */
FBUAELA_f = (EBUAELA.data.mode10);
UQPAELA_fault(0, A_HVEC(IBUAELA,HBUAELA,A68_VC ));
break;
default: 
/*SKIP*/;
break;
} 
 /* line 4010: */
 /* line 4011: */
 /* line 4012: */
VVTAELA_mergetypes( A_UNITE(JBUAELA,mode7,7,LAUAELA_ra), WVTAELA_t, Cond, &KBUAELA );
WVTAELA_t = KBUAELA;
} 
break;
default: 
 /* line 4013: */
 /* line 4014: */
VVTAELA_mergetypes( B, A, Cond, &LBUAELA );
LBUAELA;
break;
} 
break;
case 9: /* REF STRUCT(MODE185,MODE172)  */
MBUAELA_tsa = (OWTAELA.data.mode9);
 /* line 4015: */
 /* line 4016: */
NBUAELA = B ;
switch ( NBUAELA.mode )
{ 
case 9: /* REF STRUCT(MODE185,MODE172)  */
OBUAELA_tsb = (NBUAELA.data.mode9);
 /* line 4017: */
{ 
PBUAELA = A_HEAP(A68_181 ) ;
(*PBUAELA) = (*MBUAELA_tsa) ;
RBUAELA = NWTAELA_tsr = PBUAELA ;
WVTAELA_t = A_UNITE(QBUAELA,mode9,9,RBUAELA);
 /* line 4018: */
VVTAELA_mergetypes( (*(&(MBUAELA_tsa->Tstring))), (*(&(OBUAELA_tsb->Tstring))), Cond, &SBUAELA );
TBUAELA = (&(NWTAELA_tsr->Tstring)) ;
(*TBUAELA) = SBUAELA;
 /* line 4019: */
UBUAELA = (*(&(MBUAELA_tsa->Size))) ;
switch ( UBUAELA.mode )
{ 
case 1: /* INT */
VBUAELA_i = (UBUAELA.data.mode1);
 /* line 4020: */
WBUAELA = (*(&(OBUAELA_tsb->Size))) ;
switch ( WBUAELA.mode )
{ 
case 1: /* INT */
XBUAELA_j = (WBUAELA.data.mode1);
 /* line 4021: */
YBUAELA = (VBUAELA_i!=XBUAELA_j);
break;
default: 
 /* line 4022: */
 /* line 4023: */
YBUAELA = A68_TRUE;
break;
} 
break;
default: 
 /* line 4024: */
 /* line 4025: */
YBUAELA = A68_TRUE;
break;
} 
if ( YBUAELA )
{ 
ZBUAELA.Cond = Cond;
ZBUAELA.T = (*(&(MBUAELA_tsa->Size)));
 /* line 4026: */
ZBUAELA.F = (*(&(OBUAELA_tsb->Size)));
 /* line 4027: */
 /* line 4028: */
ACUAELA = A_HEAP(A68_192 ) ;
(*ACUAELA) = ZBUAELA ;
CCUAELA = (&(NWTAELA_tsr->Size)) ;
(*CCUAELA) = A_UNITE(BCUAELA,mode9,9,ACUAELA);
} 
} 
break;
case 7: /* REF STRUCT(MODE172,MODE185)  */
 /* line 4029: */
/*SKIP*/;
break;
case 3: /* REF STRUCT(MODE172,REF MODE175)  */
 /* line 4030: */
/*SKIP*/;
break;
default: 
 /* line 4031: */
 /* line 4032: */
 /* line 4033: */
VVTAELA_mergetypes( B, A, Cond, &DCUAELA );
DCUAELA;
break;
} 
break;
default: 
 /* line 4034: */
/*SKIP*/;
break;
} 
} 
else
{ 
 /* line 4035: */
WVTAELA_t = A_UNITE(ECUAELA,mode10,10,DRCAELA_flt);
} 
 /* line 4036: */
 /* line 4037: */
FCUAELA = WVTAELA_t;
} 
A_PROC_EXIT(mergetypes);
*ReturnedValue = (FCUAELA);
return;
} 
#undef NL

A68_VOID  JCUAELA_cond_type(A68_172  Then, A68_172  Else, A68_185  Cond, A68_172  *ReturnedValue)
{ 
A68_172  KCUAELA;  /* avoid structure result */
A68_172  LCUAELA_a;
A68_172  MCUAELA;  /* avoid structure result */
A68_172  NCUAELA_b;
A68_414  OCUAELA_test;
A68_414  PCUAELA;  /* avoid structure result */
A68_172  QCUAELA;  /* clause result */
A68_172  RCUAELA;  /* avoid structure result */
A68_367  SCUAELA;  /* collateral clause result */
A68_263  TCUAELA;  /* OPERATORS - unite union */
A68_263  UCUAELA;  /* OPERATORS - unite union */
A68_262  VCUAELA;  /* OPERATORS - istruct -> vector */
A68_172  WCUAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(cond_type);
 /* line 4041: */
 /* line 4042: */
{ 
ZGDAELA_gettype( Then, &KCUAELA );
LCUAELA_a = KCUAELA;
ZGDAELA_gettype( Else, &MCUAELA );
NCUAELA_b = MCUAELA;
 /* line 4043: */
 /* line 4044: */
YIPAELA_namestack = XIPAELA_nonames;
 /* line 4045: */
 /* line 4046: */
JASAELA_checkequals( LCUAELA_a, NCUAELA_b, A68_FALSE, A68_TRUE, A68_FALSE, 0, &PCUAELA );
if ( LSRAELA_(OCUAELA_test = PCUAELA, CSRAELA_unknown) )
{ 
 /* line 4047: */
VVTAELA_mergetypes( LCUAELA_a, NCUAELA_b, Cond, &RCUAELA );
QCUAELA = RCUAELA;
} 
else
{ 
 /* line 4048: */
if ( LSRAELA_(OCUAELA_test, BSRAELA_false) )
{ 
JKPAELA_fp1 = Then;
KKPAELA_fp2 = Else;
 /* line 4049: */
 /* line 4051: */
SCUAELA.data[0] = A_UUNITE(TCUAELA,0,JKPAELA_fp1);
SCUAELA.data[1] = A_UUNITE(UCUAELA,0,KKPAELA_fp2);
VZPAELA_namefaultp(70, A_HISVEC(VCUAELA,SCUAELA,2,A68_263 ));
 /* line 4052: */
 /* line 4053: */
 /* line 4054: */
QCUAELA = A_UNITE(WCUAELA,mode10,10,DRCAELA_flt);
} 
else
{ 
 /* line 4055: */
QCUAELA = Else;
} 
} 
} 
A_PROC_EXIT(cond_type);
*ReturnedValue = (QCUAELA);
return;
} 
#undef NL

A68_VOID  BDUAELA_conc_type(A68_172  Left, A68_172  Right, A68_BOOL * Stringbool, A68_INT * Sort, A68_172  *ReturnedValue)
{ 
A68_172  IDUAELA;  /* avoid structure result */
A68_172  HDUAELA_t1;
A68_172  KDUAELA;  /* avoid structure result */
A68_172  JDUAELA_t2;
A68_185  LDUAELA_i1;
A68_185  MDUAELA_i2;
A68_414  NDUAELA_test;
A68_172  ODUAELA;  /* united object - for case conformity */
A68_175 * PDUAELA_rs;
A68_172  QDUAELA;  /* avoid structure result */
A68_172  RDUAELA;  /* united object - for case conformity */
A68_175 * SDUAELA_rs;
A68_172  TDUAELA;  /* avoid structure result */
A68_172  UDUAELA;  /* united object - for case conformity */
A68_181 * VDUAELA_ts;
A68_172  WDUAELA;  /* united object - for case conformity */
A68_179  XDUAELA;  /* collateral clause result */
A68_179 * YDUAELA;  /* YIELD */
A68_172  ZDUAELA;  /* OPERATORS - mode -> union mode */
A68_172  AEUAELA;  /* united object - for case conformity */
A68_181 * BEUAELA_ts;
A68_172  CEUAELA;  /* united object - for case conformity */
A68_179  DEUAELA;  /* collateral clause result */
A68_179 * EEUAELA;  /* YIELD */
A68_172  FEUAELA;  /* OPERATORS - mode -> union mode */
A68_179  GEUAELA;  /* collateral clause result */
A68_179 * HEUAELA;  /* YIELD */
A68_172  IEUAELA;  /* OPERATORS - mode -> union mode */
A68_172  JEUAELA;  /* united object - for case conformity */
A68_179 * KEUAELA_r1;
A68_172  LEUAELA;  /* united object - for case conformity */
A68_182  MEUAELA_f;
A68_414  NEUAELA;  /* avoid structure result */
A68_185  OEUAELA;  /* OPERATORS - mode -> union mode */
A68_INT  PEUAELA;  /* YIELD */
A68_172  QEUAELA;  /* united object - for case conformity */
A68_179 * REUAELA_r2;
A68_414  SEUAELA;  /* avoid structure result */
A68_182  TEUAELA_f;
A68_172  UEUAELA;  /* united object - for case conformity */
A68_179 * VEUAELA_r2;
A68_414  WEUAELA;  /* avoid structure result */
A68_185  XEUAELA;  /* OPERATORS - mode -> union mode */
A68_INT  YEUAELA;  /* YIELD */
A68_182  ZEUAELA_f;
A68_367  AFUAELA;  /* collateral clause result */
A68_263  BFUAELA;  /* OPERATORS - unite union */
A68_263  CFUAELA;  /* OPERATORS - unite union */
A68_262  DFUAELA;  /* OPERATORS - istruct -> vector */
A68_172  EFUAELA;  /* clause result */
A68_172  FFUAELA;  /* OPERATORS - mode -> union mode */
A68_181  GFUAELA;  /* collateral clause result */
A68_190  HFUAELA;  /* collateral clause result */
A68_190 * IFUAELA;  /* YIELD */
A68_185  JFUAELA;  /* OPERATORS - mode -> union mode */
A68_185  KFUAELA;  /* avoid structure result */
A68_181 * LFUAELA;  /* YIELD */
A68_172  MFUAELA;  /* OPERATORS - mode -> union mode */
A68_179  NFUAELA;  /* collateral clause result */
A68_190  OFUAELA;  /* collateral clause result */
A68_190 * PFUAELA;  /* YIELD */
A68_185  QFUAELA;  /* OPERATORS - mode -> union mode */
A68_185  RFUAELA;  /* avoid structure result */
A68_179 * SFUAELA;  /* YIELD */
A68_172  TFUAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(conc_type);
 /* line 4058: */
 /* line 4059: */
{ 
VIDAELA_primtype( Left, A68_FALSE, &IDUAELA );
HDUAELA_t1 = IDUAELA;
VIDAELA_primtype( Right, A68_FALSE, &KDUAELA );
JDUAELA_t2 = KDUAELA;
 /* line 4060: */
 /* line 4061: */
 /* line 4062: */
YIPAELA_namestack = XIPAELA_nonames;
 /* line 4063: */
ODUAELA = HDUAELA_t1 ;
switch ( ODUAELA.mode )
{ 
case 3: /* REF STRUCT(MODE172,REF MODE175)  */
PDUAELA_rs = (ODUAELA.data.mode3);
DQTAELA_sttorow( PDUAELA_rs, &QDUAELA );
HDUAELA_t1 = QDUAELA;
break;
default: 
/*SKIP*/;
break;
} 
 /* line 4064: */
RDUAELA = JDUAELA_t2 ;
switch ( RDUAELA.mode )
{ 
case 3: /* REF STRUCT(MODE172,REF MODE175)  */
SDUAELA_rs = (RDUAELA.data.mode3);
DQTAELA_sttorow( SDUAELA_rs, &TDUAELA );
JDUAELA_t2 = TDUAELA;
break;
default: 
/*SKIP*/;
break;
} 
 /* line 4065: */
 /* line 4066: */
UDUAELA = HDUAELA_t1 ;
switch ( UDUAELA.mode )
{ 
case 9: /* REF STRUCT(MODE185,MODE172)  */
VDUAELA_ts = (UDUAELA.data.mode9);
 /* line 4067: */
 /* line 4068: */
WDUAELA = JDUAELA_t2 ;
switch ( WDUAELA.mode )
{ 
case 7: /* REF STRUCT(MODE172,MODE185)  */
 /* line 4069: */
/*SKIP*/;
break;
default: 
{ 
XDUAELA.T = (*(&(VDUAELA_ts->Tstring)));
XDUAELA.Size = (*(&(VDUAELA_ts->Size)));
YDUAELA = A_HEAP(A68_179 ) ;
(*YDUAELA) = XDUAELA ;
HDUAELA_t1 = A_UNITE(ZDUAELA,mode7,7,YDUAELA);
 /* line 4070: */
 /* line 4071: */
 /* line 4072: */
 /* line 4073: */
(*Stringbool) = A68_TRUE;
} 
break;
} 
break;
default: 
/*SKIP*/;
break;
} 
 /* line 4074: */
 /* line 4075: */
AEUAELA = JDUAELA_t2 ;
switch ( AEUAELA.mode )
{ 
case 9: /* REF STRUCT(MODE185,MODE172)  */
BEUAELA_ts = (AEUAELA.data.mode9);
 /* line 4076: */
 /* line 4077: */
CEUAELA = HDUAELA_t1 ;
switch ( CEUAELA.mode )
{ 
case 7: /* REF STRUCT(MODE172,MODE185)  */
 /* line 4078: */
if ( (*Stringbool) )
{ 
DEUAELA.T = (*(&(BEUAELA_ts->Tstring)));
 /* line 4079: */
DEUAELA.Size = (*(&(BEUAELA_ts->Size)));
 /* line 4080: */
EEUAELA = A_HEAP(A68_179 ) ;
(*EEUAELA) = DEUAELA ;
JDUAELA_t2 = A_UNITE(FEUAELA,mode7,7,EEUAELA);
} 
break;
default: 
{ 
GEUAELA.T = (*(&(BEUAELA_ts->Tstring)));
GEUAELA.Size = (*(&(BEUAELA_ts->Size)));
HEUAELA = A_HEAP(A68_179 ) ;
(*HEUAELA) = GEUAELA ;
JDUAELA_t2 = A_UNITE(IEUAELA,mode7,7,HEUAELA);
 /* line 4081: */
 /* line 4082: */
 /* line 4083: */
 /* line 4084: */
(*Stringbool) = A68_TRUE;
} 
break;
} 
break;
default: 
/*SKIP*/;
break;
} 
 /* line 4085: */
 /* line 4086: */
JEUAELA = HDUAELA_t1 ;
switch ( JEUAELA.mode )
{ 
case 7: /* REF STRUCT(MODE172,MODE185)  */
KEUAELA_r1 = (JEUAELA.data.mode7);
 /* line 4087: */
{ 
LEUAELA = JDUAELA_t2 ;
switch ( LEUAELA.mode )
{ 
case 10: /* STRUCT(INT)  */
MEUAELA_f = (LEUAELA.data.mode10);
goto EDUAELA_out;
break;
default: 
/*SKIP*/;
break;
} 
 /* line 4088: */
 /* line 4089: */
if ( SQSAELA_equals((*(&(KEUAELA_r1->T))), JDUAELA_t2) )
{ 
JASAELA_checkequals( (*(&(KEUAELA_r1->T))), JDUAELA_t2, A68_TRUE, A68_FALSE, A68_FALSE, 0, &NEUAELA );
NEUAELA;
 /* line 4091: */
HDUAELA_t1 = (*(&(KEUAELA_r1->T)));
LDUAELA_i1 = (*(&(KEUAELA_r1->Size)));
PEUAELA = 1 ;
MDUAELA_i2 = A_UNITE(OEUAELA,mode1,1,PEUAELA);
(*Sort) = JPCAELA_flattenleft;
 /* line 4092: */
goto GDUAELA_ok;
} 
 /* line 4093: */
 /* line 4094: */
QEUAELA = JDUAELA_t2 ;
switch ( QEUAELA.mode )
{ 
case 7: /* REF STRUCT(MODE172,MODE185)  */
REUAELA_r2 = (QEUAELA.data.mode7);
 /* line 4095: */
 /* line 4096: */
if ( SQSAELA_equals((*(&(KEUAELA_r1->T))), (*(&(REUAELA_r2->T)))) )
{ 
JASAELA_checkequals( (*(&(KEUAELA_r1->T))), (*(&(REUAELA_r2->T))), A68_TRUE, A68_FALSE, A68_FALSE, 0, &SEUAELA );
SEUAELA;
 /* line 4097: */
HDUAELA_t1 = (*(&(KEUAELA_r1->T)));
LDUAELA_i1 = (*(&(KEUAELA_r1->Size)));
MDUAELA_i2 = (*(&(REUAELA_r2->Size)));
 /* line 4098: */
(*Sort) = LPCAELA_flattenboth;
 /* line 4099: */
 /* line 4100: */
 /* line 4101: */
 /* line 4102: */
goto GDUAELA_ok;
} 
break;
default: 
 /* line 4103: */
 /* line 4104: */
/*SKIP*/;
break;
} 
} 
break;
case 10: /* STRUCT(INT)  */
TEUAELA_f = (JEUAELA.data.mode10);
 /* line 4105: */
 /* line 4106: */
goto EDUAELA_out;
break;
default: 
/*SKIP*/;
break;
} 
 /* line 4107: */
 /* line 4108: */
UEUAELA = JDUAELA_t2 ;
switch ( UEUAELA.mode )
{ 
case 7: /* REF STRUCT(MODE172,MODE185)  */
VEUAELA_r2 = (UEUAELA.data.mode7);
 /* line 4109: */
 /* line 4110: */
if ( SQSAELA_equals(HDUAELA_t1, (*(&(VEUAELA_r2->T)))) )
{ 
JASAELA_checkequals( HDUAELA_t1, (*(&(VEUAELA_r2->T))), A68_TRUE, A68_FALSE, A68_FALSE, 0, &WEUAELA );
WEUAELA;
 /* line 4111: */
LDUAELA_i1 = (*(&(VEUAELA_r2->Size)));
YEUAELA = 1 ;
MDUAELA_i2 = A_UNITE(XEUAELA,mode1,1,YEUAELA);
(*Sort) = KPCAELA_flattenright;
HDUAELA_t1 = (*(&(VEUAELA_r2->T)));
 /* line 4113: */
 /* line 4114: */
 /* line 4115: */
goto GDUAELA_ok;
} 
break;
case 10: /* STRUCT(INT)  */
ZEUAELA_f = (UEUAELA.data.mode10);
 /* line 4116: */
 /* line 4117: */
goto EDUAELA_out;
break;
default: 
/*SKIP*/;
break;
} 
 /* line 4118: */
 /* line 4119: */
if ( HMPAELA_errorswitch )
{ 
JKPAELA_fp1 = Left;
KKPAELA_fp2 = Right;
 /* line 4120: */
AFUAELA.data[0] = A_UUNITE(BFUAELA,0,JKPAELA_fp1);
AFUAELA.data[1] = A_UUNITE(CFUAELA,0,KKPAELA_fp2);
 /* line 4121: */
VZPAELA_namefaultp(65, A_HISVEC(DFUAELA,AFUAELA,2,A68_263 ));
} 
 /* line 4122: */
EDUAELA_out:
 /* line 4123: */
 /* line 4124: */
EFUAELA = A_UNITE(FFUAELA,mode10,10,DRCAELA_flt);
goto CDUAELA;
GDUAELA_ok:
 /* line 4125: */
if ( (*Stringbool) )
{ 
HFUAELA.Opno = GPCAELA_diplus;
HFUAELA.L = LDUAELA_i1;
HFUAELA.R = MDUAELA_i2;
IFUAELA = A_HEAP(A68_190 ) ;
(*IFUAELA) = HFUAELA ;
CDRAELA_simplify( A_UNITE(JFUAELA,mode7,7,IFUAELA), A68_TRUE, &KFUAELA );
GFUAELA.Size = KFUAELA;
 /* line 4126: */
GFUAELA.Tstring = HDUAELA_t1;
LFUAELA = A_HEAP(A68_181 ) ;
(*LFUAELA) = GFUAELA ;
EFUAELA = A_UNITE(MFUAELA,mode9,9,LFUAELA);
} 
else
{ 
NFUAELA.T = HDUAELA_t1;
OFUAELA.Opno = GPCAELA_diplus;
OFUAELA.L = LDUAELA_i1;
OFUAELA.R = MDUAELA_i2;
 /* line 4127: */
PFUAELA = A_HEAP(A68_190 ) ;
(*PFUAELA) = OFUAELA ;
CDRAELA_simplify( A_UNITE(QFUAELA,mode7,7,PFUAELA), A68_TRUE, &RFUAELA );
NFUAELA.Size = RFUAELA;
 /* line 4128: */
SFUAELA = A_HEAP(A68_179 ) ;
(*SFUAELA) = NFUAELA ;
EFUAELA = A_UNITE(TFUAELA,mode7,7,SFUAELA);
} 
CDUAELA: ;
} 
A_PROC_EXIT(conc_type);
*ReturnedValue = (EFUAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  VFUAELA_anonymous(A68_222  Ct, A68_172  *ReturnedValue)
{ 
A68_172  WFUAELA_ty;
A68_172  XFUAELA_ty2;
A68_185  YFUAELA_i1;
A68_471  AGUAELA_csttost;   /* proc value of non-global proc */
A68_222  HGUAELA;  /* united object - for case conformity */
A68_223 * IGUAELA_cnd;
A68_172  JGUAELA;  /* united object - for case conformity */
A68_172  KGUAELA;  /* clause result */
A68_172  LGUAELA;  /* avoid structure result */
A68_224 * MGUAELA_cpr;
A68_225 * NGUAELA_cpi;
A68_203 * OGUAELA_p;
A68_226 * PGUAELA_cu;
A68_227 * QGUAELA_cr;
A68_179  RGUAELA;  /* collateral clause result */
A68_172  SGUAELA;  /* avoid structure result */
A68_179 * TGUAELA;  /* YIELD */
A68_172  UGUAELA;  /* OPERATORS - mode -> union mode */
A68_228 * VGUAELA_cs;
A68_172  WGUAELA;  /* OPERATORS - mode -> union mode */
A68_175 * XGUAELA;  /* YIELD */
A68_229 * YGUAELA_ca;
A68_172  ZGUAELA;  /* avoid structure result */
A68_230 * AHUAELA_cn;
A68_232 * BHUAELA_cq;
A68_231 * CHUAELA_cb;
A68_172  DHUAELA;  /* avoid structure result */
A68_172  EHUAELA;  /* OPERATORS - mode -> union mode */
A68_180 * FHUAELA;  /* YIELD */
A68_234 * GHUAELA_ch;
A68_233 * HHUAELA_cs;
A68_181  IHUAELA;  /* collateral clause result */
A68_172  JHUAELA;  /* avoid structure result */
A68_181 * KHUAELA;  /* YIELD */
A68_172  LHUAELA;  /* OPERATORS - mode -> union mode */
A68_235 * MHUAELA_cr;
A68_236 * NHUAELA_cv;
A68_238 * OHUAELA_ci;
A68_172  PHUAELA;  /* avoid structure result */
A68_185  QHUAELA;  /* OPERATORS - mode -> union mode */
A68_INT  RHUAELA;  /* YIELD */
A68_172  SHUAELA;  /* avoid structure result */
A68_239 * THUAELA_ct;
A68_172  UHUAELA;  /* avoid structure result */
A68_190  VHUAELA;  /* collateral clause result */
A68_190  WHUAELA;  /* collateral clause result */
A68_190 * XHUAELA;  /* YIELD */
A68_185  YHUAELA;  /* OPERATORS - mode -> union mode */
A68_185  ZHUAELA;  /* OPERATORS - mode -> union mode */
A68_INT  AIUAELA;  /* YIELD */
A68_190 * BIUAELA;  /* YIELD */
A68_185  CIUAELA;  /* OPERATORS - mode -> union mode */
A68_185  DIUAELA;  /* avoid structure result */
A68_172  EIUAELA;  /* avoid structure result */
A68_240 * FIUAELA_cc;
A68_172  GIUAELA;  /* avoid structure result */
A68_172  HIUAELA;  /* avoid structure result */
A68_172  IIUAELA;  /* avoid structure result */
A68_241 * JIUAELA_cp;
A68_193 * KIUAELA_repl;
A68_190  LIUAELA;  /* collateral clause result */
A68_190  MIUAELA;  /* collateral clause result */
A68_190 * NIUAELA;  /* YIELD */
A68_185  OIUAELA;  /* OPERATORS - mode -> union mode */
A68_185  PIUAELA;  /* OPERATORS - mode -> union mode */
A68_INT  QIUAELA;  /* YIELD */
A68_190 * RIUAELA;  /* YIELD */
A68_185  SIUAELA;  /* OPERATORS - mode -> union mode */
A68_185  TIUAELA;  /* avoid structure result */
A68_179  UIUAELA;  /* collateral clause result */
A68_172  VIUAELA;  /* avoid structure result */
A68_179 * WIUAELA;  /* YIELD */
A68_172  XIUAELA;  /* OPERATORS - mode -> union mode */
A68_243 * YIUAELA_ca;
A68_172  ZIUAELA;  /* avoid structure result */
A68_172  AJUAELA;  /* OPERATORS - mode -> union mode */
A68_182  BJUAELA_f;
A68_172  CJUAELA;  /* OPERATORS - mode -> union mode */
A68_172  DJUAELA;  /* OPERATORS - skip to mode */
 /* line 4131: */
{ 
 /* line 4132: */
A_CLOSURE( AGUAELA_csttost, BGUAELA_csttost, CGUAELA_csttost );
(( CGUAELA_csttost * ) ( AGUAELA_csttost.nonlocals )) -> AGUAELA_csttost = AGUAELA_csttost;
 /* line 4137: */
 /* line 4138: */
HGUAELA = Ct ;
switch ( HGUAELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE198,INT,MODE222,MODE172)  */
IGUAELA_cnd = (HGUAELA.data.mode1);
 /* line 4139: */
JGUAELA = (*(&(IGUAELA_cnd->T))) ;
switch ( JGUAELA.mode )
{ 
case 11: /* STRUCT(INT)  */
 /* line 4140: */
 /* line 4141: */
A_CALLPROC(FUQAELA_ctypetotype,((*(&(IGUAELA_cnd->Ct))), &LGUAELA),((*(&(IGUAELA_cnd->Ct))), &LGUAELA,(FUQAELA_ctypetotype).nonlocals));
KGUAELA = LGUAELA;
break;
default: 
 /* line 4142: */
KGUAELA = (*(&(IGUAELA_cnd->T)));
break;
} 
break;
case 2: /* REF STRUCT(MODE172,MODE185,MODE185)  */
MGUAELA_cpr = (HGUAELA.data.mode2);
 /* line 4143: */
KGUAELA = (*(&(MGUAELA_cpr->T)));
break;
case 3: /* REF STRUCT(MODE172,MODE185)  */
NGUAELA_cpi = (HGUAELA.data.mode3);
 /* line 4144: */
KGUAELA = (*(&(NGUAELA_cpi->T)));
break;
case 4: /* REF STRUCT(MODE172,INT)  */
OGUAELA_p = (HGUAELA.data.mode4);
 /* line 4145: */
KGUAELA = (*(&(OGUAELA_p->Type)));
break;
case 5: /* REF STRUCT(REF MODE203,MODE222)  */
PGUAELA_cu = (HGUAELA.data.mode5);
 /* line 4146: */
KGUAELA = (*(&((*(&(PGUAELA_cu->P)))->Type)));
break;
case 6: /* REF STRUCT(MODE222,MODE185)  */
QGUAELA_cr = (HGUAELA.data.mode6);
A_CALLPROC(FUQAELA_ctypetotype,((*(&(QGUAELA_cr->Ct))), &SGUAELA),((*(&(QGUAELA_cr->Ct))), &SGUAELA,(FUQAELA_ctypetotype).nonlocals));
RGUAELA.T = SGUAELA;
RGUAELA.Size = (*(&(QGUAELA_cr->Size)));
 /* line 4147: */
TGUAELA = A_HEAP(A68_179 ) ;
(*TGUAELA) = RGUAELA ;
KGUAELA = A_UNITE(UGUAELA,mode7,7,TGUAELA);
break;
case 7: /* REF STRUCT(MODE222,REF MODE228)  */
VGUAELA_cs = (HGUAELA.data.mode7);
 /* line 4148: */
XGUAELA = A_CALLPROC(AGUAELA_csttost,(VGUAELA_cs),(VGUAELA_cs,(AGUAELA_csttost).nonlocals)) ;
KGUAELA = A_UNITE(WGUAELA,mode3,3,XGUAELA);
break;
case 8: /* REF STRUCT(MODE222,REF MODE229)  */
YGUAELA_ca = (HGUAELA.data.mode8);
 /* line 4149: */
A_CALLPROC(FUQAELA_ctypetotype,((*(&(YGUAELA_ca->Calt))), &ZGUAELA),((*(&(YGUAELA_ca->Calt))), &ZGUAELA,(FUQAELA_ctypetotype).nonlocals));
KGUAELA = ZGUAELA;
break;
case 9: /* REF STRUCT(MODE172)  */
AHUAELA_cn = (HGUAELA.data.mode9);
 /* line 4150: */
KGUAELA = (*(&(AHUAELA_cn->Ct)));
break;
case 13: /* REF STRUCT(MODE172)  */
BHUAELA_cq = (HGUAELA.data.mode13);
 /* line 4151: */
KGUAELA = (*(&(BHUAELA_cq->Querytype)));
break;
case 12: /* REF STRUCT(MODE222)  */
CHUAELA_cb = (HGUAELA.data.mode12);
 /* line 4152: */
A_CALLPROC(FUQAELA_ctypetotype,((*(&(CHUAELA_cb->Cbracket))), &DHUAELA),((*(&(CHUAELA_cb->Cbracket))), &DHUAELA,(FUQAELA_ctypetotype).nonlocals));
FHUAELA = IKDAELA_maketbracket(DHUAELA) ;
KGUAELA = A_UNITE(EHUAELA,mode8,8,FHUAELA);
break;
case 15: /* REF STRUCT(MODE172,CHAR)  */
GHUAELA_ch = (HGUAELA.data.mode15);
 /* line 4153: */
KGUAELA = (*(&(GHUAELA_ch->T)));
break;
case 14: /* REF STRUCT(MODE185,MODE222,REF MODE246)  */
HHUAELA_cs = (HGUAELA.data.mode14);
IHUAELA.Size = (*(&(HHUAELA_cs->Size)));
A_CALLPROC(FUQAELA_ctypetotype,((*(&(HHUAELA_cs->Ct))), &JHUAELA),((*(&(HHUAELA_cs->Ct))), &JHUAELA,(FUQAELA_ctypetotype).nonlocals));
IHUAELA.Tstring = JHUAELA;
 /* line 4154: */
KHUAELA = A_HEAP(A68_181 ) ;
(*KHUAELA) = IHUAELA ;
KGUAELA = A_UNITE(LHUAELA,mode9,9,KHUAELA);
break;
case 16: /* REF STRUCT(MODE172,CHAR,CHAR)  */
MHUAELA_cr = (HGUAELA.data.mode16);
 /* line 4155: */
KGUAELA = (*(&(MHUAELA_cr->T)));
break;
case 17: /* REF STRUCT(REF MODE245,MODE172)  */
NHUAELA_cv = (HGUAELA.data.mode17);
 /* line 4156: */
KGUAELA = (*(&(NHUAELA_cv->T)));
break;
case 19: /* REF STRUCT(MODE222,MODE185)  */
OHUAELA_ci = (HGUAELA.data.mode19);
 /* line 4157: */
{ 
A_CALLPROC(FUQAELA_ctypetotype,((*(&(OHUAELA_ci->Ct))), &PHUAELA),((*(&(OHUAELA_ci->Ct))), &PHUAELA,(FUQAELA_ctypetotype).nonlocals));
WFUAELA_ty = PHUAELA;
 /* line 4158: */
 /* line 4159: */
 /* line 4160: */
RHUAELA = 0 ;
ESTAELA_trimorindex( WFUAELA_ty, A_UNITE(QHUAELA,mode1,1,RHUAELA), (*(&(OHUAELA_ci->Index))), (&(OHUAELA_ci->Index)), (&(OHUAELA_ci->Index)), &SHUAELA );
KGUAELA = SHUAELA;
} 
break;
case 20: /* REF STRUCT(MODE222,MODE185,MODE185)  */
THUAELA_ct = (HGUAELA.data.mode20);
 /* line 4161: */
{ 
A_CALLPROC(FUQAELA_ctypetotype,((*(&(THUAELA_ct->Ct))), &UHUAELA),((*(&(THUAELA_ct->Ct))), &UHUAELA,(FUQAELA_ctypetotype).nonlocals));
WFUAELA_ty = UHUAELA;
 /* line 4162: */
 /* line 4163: */
VHUAELA.Opno = GPCAELA_diplus;
WHUAELA.Opno = HPCAELA_diminus;
WHUAELA.L = (*(&(THUAELA_ct->Upb)));
WHUAELA.R = (*(&(THUAELA_ct->Lwb)));
XHUAELA = A_HEAP(A68_190 ) ;
(*XHUAELA) = WHUAELA ;
VHUAELA.L = A_UNITE(YHUAELA,mode7,7,XHUAELA);
AIUAELA = 1 ;
VHUAELA.R = A_UNITE(ZHUAELA,mode1,1,AIUAELA);
BIUAELA = A_HEAP(A68_190 ) ;
(*BIUAELA) = VHUAELA ;
CDRAELA_simplify( A_UNITE(CIUAELA,mode7,7,BIUAELA), A68_TRUE, &DIUAELA );
YFUAELA_i1 = DIUAELA;
 /* line 4164: */
 /* line 4165: */
 /* line 4166: */
ESTAELA_trimorindex( WFUAELA_ty, YFUAELA_i1, (*(&(THUAELA_ct->Lwb))), (&(THUAELA_ct->Lwb)), (&(THUAELA_ct->Upb)), &EIUAELA );
KGUAELA = EIUAELA;
} 
break;
case 21: /* REF STRUCT(MODE185,MODE222,MODE222)  */
FIUAELA_cc = (HGUAELA.data.mode21);
 /* line 4167: */
{ 
A_CALLPROC(FUQAELA_ctypetotype,((*(&(FIUAELA_cc->Then))), &GIUAELA),((*(&(FIUAELA_cc->Then))), &GIUAELA,(FUQAELA_ctypetotype).nonlocals));
WFUAELA_ty = GIUAELA;
 /* line 4168: */
A_CALLPROC(FUQAELA_ctypetotype,((*(&(FIUAELA_cc->Else))), &HIUAELA),((*(&(FIUAELA_cc->Else))), &HIUAELA,(FUQAELA_ctypetotype).nonlocals));
XFUAELA_ty2 = HIUAELA;
 /* line 4169: */
 /* line 4170: */
 /* line 4171: */
JCUAELA_cond_type( WFUAELA_ty, XFUAELA_ty2, (*(&(FIUAELA_cc->Test))), &IIUAELA );
KGUAELA = IIUAELA;
} 
break;
case 22: /* REF STRUCT(REF MODE244,MODE222)  */
JIUAELA_cp = (HGUAELA.data.mode22);
 /* line 4172: */
{ 
KIUAELA_repl = KTDAELA_get_intvarmult((*(&(JIUAELA_cp->Ids))));
 /* line 4173: */
 /* line 4174: */
LIUAELA.Opno = GPCAELA_diplus;
MIUAELA.Opno = HPCAELA_diminus;
MIUAELA.L = (*(&(KIUAELA_repl->Upb)));
MIUAELA.R = (*(&(KIUAELA_repl->Lwb)));
NIUAELA = A_HEAP(A68_190 ) ;
(*NIUAELA) = MIUAELA ;
LIUAELA.L = A_UNITE(OIUAELA,mode7,7,NIUAELA);
QIUAELA = 1 ;
LIUAELA.R = A_UNITE(PIUAELA,mode1,1,QIUAELA);
 /* line 4175: */
RIUAELA = A_HEAP(A68_190 ) ;
(*RIUAELA) = LIUAELA ;
CDRAELA_simplify( A_UNITE(SIUAELA,mode7,7,RIUAELA), A68_TRUE, &TIUAELA );
YFUAELA_i1 = TIUAELA;
 /* line 4176: */
A_CALLPROC(FUQAELA_ctypetotype,((*(&(JIUAELA_cp->Ct))), &VIUAELA),((*(&(JIUAELA_cp->Ct))), &VIUAELA,(FUQAELA_ctypetotype).nonlocals));
UIUAELA.T = VIUAELA;
 /* line 4177: */
UIUAELA.Size = YFUAELA_i1;
 /* line 4178: */
WIUAELA = A_HEAP(A68_179 ) ;
(*WIUAELA) = UIUAELA ;
KGUAELA = A_UNITE(XIUAELA,mode7,7,WIUAELA);
} 
break;
case 24: /* REF STRUCT(MODE222,MODE170)  */
YIUAELA_ca = (HGUAELA.data.mode24);
 /* line 4179: */
A_CALLPROC(FUQAELA_ctypetotype,((*(&(YIUAELA_ca->Ct))), &ZIUAELA),((*(&(YIUAELA_ca->Ct))), &ZIUAELA,(FUQAELA_ctypetotype).nonlocals));
KGUAELA = ZIUAELA;
break;
case 18: /* STRUCT(INT)  */
 /* line 4180: */
KGUAELA = A_UNITE(AJUAELA,mode12,12,NRCAELA_typevoid);
break;
case 10: /* STRUCT(INT)  */
BJUAELA_f = (HGUAELA.data.mode10);
 /* line 4181: */
 /* line 4182: */
KGUAELA = A_UNITE(CJUAELA,mode10,10,BJUAELA_f);
break;
default: 
 /* line 4183: */
KGUAELA = DJUAELA;
break;
} 
} 
*ReturnedValue = (KGUAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  JJUAELA_reformindex(A68_172  Ty, A68_INT * N, A68_172 * Elem_type, A68_414 * Test)
{ 
A68_175 * KJUAELA_s;
A68_INT  LJUAELA_oldvalue;
A68_INT  MJUAELA_noelts;
A68_INT  NJUAELA_rowsize;
A68_172  OJUAELA;  /* united object - for case conformity */
A68_173 * PJUAELA_tp;
A68_172  QJUAELA;  /* OPERATORS - mode -> union mode */
A68_174 * RJUAELA_tn;
A68_175 * SJUAELA_ts;
A68_179 * TJUAELA_tr;
A68_185  UJUAELA;  /* avoid structure result */
A68_185  VJUAELA;  /* united object - for case conformity */
A68_INT  WJUAELA_i;
A68_INT  XJUAELA;  /* clause result */
A68_BOOL  YJUAELA;  /* optbool result */
A68_INT  ZJUAELA;  /* ADICOPS - MOD */
A68_178 * AKUAELA_tf;
A68_172  BKUAELA;  /* OPERATORS - mode -> union mode */
A68_176 * CKUAELA_tv;
A68_172  DKUAELA;  /* united object - for case conformity */
A68_180 * EKUAELA_tb;
A68_181 * FKUAELA_ts;
A68_172  GKUAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(reformindex);
 /* line 4187: */
{ 
 /* line 4188: */
 /* line 4189: */
if ( ((*N)>0) )
{ 
 /* line 4190: */
OJUAELA = Ty ;
switch ( OJUAELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE198,INT,MODE247)  */
PJUAELA_tp = (OJUAELA.data.mode1);
 /* line 4191: */
{ 
 /* line 4192: */
if ( ((*N)==1) )
{ 
(*Elem_type) = A_UNITE(QJUAELA,mode1,1,PJUAELA_tp);
 /* line 4193: */
(*N) = 0;
} 
else
{ 
 /* line 4194: */
 /* line 4195: */
(*N)-=1;
} 
} 
break;
case 2: /* REF STRUCT(REF MODE198,INT,MODE172)  */
RJUAELA_tn = (OJUAELA.data.mode2);
 /* line 4196: */
 /* line 4197: */
JJUAELA_reformindex((*(&(RJUAELA_tn->T))), N, Elem_type, Test);
break;
case 3: /* REF STRUCT(MODE172,REF MODE175)  */
SJUAELA_ts = (OJUAELA.data.mode3);
 /* line 4198: */
{ 
KJUAELA_s = SJUAELA_ts;
 /* line 4199: */
JJUAELA_reformindex((*(&(SJUAELA_ts->T))), N, Elem_type, Test);
 /* line 4200: */
for ( ;; )
{ 
 /* line 4201: */
if ( !(((KJUAELA_s = (*(&(KJUAELA_s->Rest))))!=DQCAELA_nilst)) ) break;
JJUAELA_reformindex((*(&(KJUAELA_s->T))), N, Elem_type, Test);
}
 /* line 4202: */
 /* line 4203: */
} 
break;
case 7: /* REF STRUCT(MODE172,MODE185)  */
TJUAELA_tr = (OJUAELA.data.mode7);
 /* line 4204: */
{ 
LJUAELA_oldvalue = (*N);
 /* line 4205: */
JJUAELA_reformindex((*(&(TJUAELA_tr->T))), N, Elem_type, Test);
 /* line 4206: */
MJUAELA_noelts = (LJUAELA_oldvalue-(*N));
 /* line 4207: */
 /* line 4208: */
TDRAELA_simplify_int( (*(&(TJUAELA_tr->Size))), &UJUAELA );
VJUAELA = UJUAELA ;
switch ( VJUAELA.mode )
{ 
case 1: /* INT */
WJUAELA_i = (VJUAELA.data.mode1);
 /* line 4209: */
XJUAELA = WJUAELA_i;
break;
default: 
{ 
(*Test) = CSRAELA_unknown;
 /* line 4210: */
XJUAELA = 1;
} 
break;
} 
NJUAELA_rowsize = XJUAELA;
 /* line 4211: */
NJUAELA_rowsize = (MJUAELA_noelts*(NJUAELA_rowsize-1));
 /* line 4212: */
YJUAELA = ((*N)>NJUAELA_rowsize);
if ( ! YJUAELA )
{ /* line 4213: */
YJUAELA = (NJUAELA_rowsize==0);
}
if ( YJUAELA )
{ 
 /* line 4214: */
(*N)-=NJUAELA_rowsize;
} 
else
{ 
 /* line 4215: */
if ( ((*N)==0) )
{ 
 /* line 4216: */
(*N) = 0;
} 
else
{ 
(*N) = A_MOD((*N),MJUAELA_noelts,ZJUAELA);
 /* line 4217: */
if ( ((*N)==0) )
{ 
(*N) = MJUAELA_noelts;
} 
 /* line 4218: */
 /* line 4219: */
 /* line 4220: */
JJUAELA_reformindex((*(&(TJUAELA_tr->T))), N, Elem_type, Test);
} 
} 
} 
break;
case 6: /* REF STRUCT(MODE172,MODE172)  */
AKUAELA_tf = (OJUAELA.data.mode6);
 /* line 4221: */
{ 
 /* line 4222: */
if ( ((*N)==1) )
{ 
(*Elem_type) = A_UNITE(BKUAELA,mode6,6,AKUAELA_tf);
 /* line 4223: */
(*N) = 0;
} 
else
{ 
 /* line 4224: */
 /* line 4225: */
 /* line 4226: */
(*N)-=1;
} 
} 
break;
case 4: /* REF STRUCT(REF MODE245,MODE172)  */
CKUAELA_tv = (OJUAELA.data.mode4);
 /* line 4227: */
{ 
 /* line 4228: */
DKUAELA = (*(&(CKUAELA_tv->T))) ;
switch ( DKUAELA.mode )
{ 
case 5: /* STRUCT(INT)  */
{ 
(*Test) = CSRAELA_unknown;
 /* line 4229: */
(*N) = 0;
} 
break;
default: 
 /* line 4230: */
 /* line 4231: */
JJUAELA_reformindex((*(&(CKUAELA_tv->T))), N, Elem_type, Test);
break;
} 
} 
break;
case 8: /* REF STRUCT(MODE172)  */
EKUAELA_tb = (OJUAELA.data.mode8);
 /* line 4232: */
 /* line 4233: */
JJUAELA_reformindex((*(&(EKUAELA_tb->Tbracket))), N, Elem_type, Test);
break;
case 9: /* REF STRUCT(MODE185,MODE172)  */
FKUAELA_ts = (OJUAELA.data.mode9);
 /* line 4234: */
{ 
 /* line 4235: */
if ( ((*N)==1) )
{ 
(*Elem_type) = A_UNITE(GKUAELA,mode9,9,FKUAELA_ts);
 /* line 4236: */
 /* line 4237: */
(*N) = 0;
} 
else
{ 
 /* line 4238: */
 /* line 4257: */
 /* line 4258: */
(*N)-=1;
} 
} 
break;
default: 
 /* line 4259: */
 /* line 4260: */
/*SKIP*/;
break;
} 
} 
} 
A_PROC_EXIT(reformindex);
return;
} 
#undef NL

A68_VOID  JKUAELA_reformcheck(A68_172  Type1, A68_172  Type2, A68_414  *ReturnedValue)
{ 
A68_172  KKUAELA_elem_type1;
A68_172  LKUAELA_elem_type2;
A68_414  MKUAELA_state1;
A68_414  NKUAELA_state2;
A68_414  OKUAELA_same;
A68_INT  PKUAELA_n1;
A68_INT  QKUAELA_n2;
A68_INT  RKUAELA_i;
A68_BOOL  SKUAELA;  /* optbool result */
A68_414  TKUAELA;  /* clause result */
A_PROC_ENTRY(reformcheck);
 /* line 4263: */
{ 
 /* line 4264: */
OKUAELA_same = ASRAELA_true;
 /* line 4265: */
PKUAELA_n1 = 0;
QKUAELA_n2 = 0;
 /* line 4266: */
for ( RKUAELA_i = 1;;
RKUAELA_i += 1 ) 
{ 
 /* line 4267: */
if ( !((((PKUAELA_n1==0)&(QKUAELA_n2==0))&LSRAELA_(OKUAELA_same, ASRAELA_true))) ) break;
MKUAELA_state1 = NKUAELA_state2 = ASRAELA_true;
 /* line 4268: */
KKUAELA_elem_type1 = Type1;
LKUAELA_elem_type2 = Type1;
 /* line 4269: */
PKUAELA_n1 = RKUAELA_i;
QKUAELA_n2 = RKUAELA_i;
 /* line 4270: */
JJUAELA_reformindex(Type1, (&PKUAELA_n1), (&KKUAELA_elem_type1), (&MKUAELA_state1));
 /* line 4271: */
JJUAELA_reformindex(Type2, (&QKUAELA_n2), (&LKUAELA_elem_type2), (&NKUAELA_state2));
 /* line 4272: */
SKUAELA = LSRAELA_(MKUAELA_state1, CSRAELA_unknown);
if ( ! SKUAELA )
{ /* line 4273: */
SKUAELA = LSRAELA_(NKUAELA_state2, CSRAELA_unknown);
}
if ( SKUAELA )
{ 
 /* line 4274: */
OKUAELA_same = CSRAELA_unknown;
} 
else
{ 
 /* line 4275: */
if ( !SQSAELA_equals(KKUAELA_elem_type1, LKUAELA_elem_type2) )
{ 
 /* line 4276: */
 /* line 4277: */
OKUAELA_same = BSRAELA_false;
} 
} 
}
 /* line 4278: */
 /* line 4279: */
TKUAELA = OKUAELA_same;
} 
A_PROC_EXIT(reformcheck);
*ReturnedValue = (TKUAELA);
return;
} 
#undef NL

A68_BOOL  XKUAELA_impl_macro(A68_172  A, A68_172  B, A68_265 * Fncallstack)
{ 
A68_BOOL  YKUAELA;  /* clause result */
A68_266  ZKUAELA;  /* procedure value */
A68_164  ALUAELA;  /* procedure value */
A68_267  BLUAELA;  /* procedure value */
A_PROC_ENTRY(impl_macro);
 /* line 4282: */
ZKUAELA.fn.fn_global = CDRAELA_simplify;
ZKUAELA.nonlocals = A68_NIL;
ALUAELA.fn.fn_global = UQPAELA_fault;
ALUAELA.nonlocals = A68_NIL;
BLUAELA.fn.fn_global = DQTAELA_sttorow;
BLUAELA.nonlocals = A68_NIL;
YKUAELA = SAMAELA_implicit_macro(A, B, Fncallstack, ZKUAELA, ALUAELA, BLUAELA);
A_PROC_EXIT(impl_macro);
return( YKUAELA );
} 
#undef NL

A68_VOID  CLUAELA_setup_compilefn(void)
{ 
A68_286  DLUAELA;  /* collateral clause result */
A68_285  ELUAELA;  /* collateral clause result */
A68_275  FLUAELA;  /* collateral clause result */
A68_275 * GLUAELA;  /* YIELD */
A68_278  HLUAELA;  /* collateral clause result */
A68_278 * ILUAELA;  /* YIELD */
A68_279  JLUAELA;  /* collateral clause result */
A68_279 * KLUAELA;  /* YIELD */
A68_282  LLUAELA;  /* collateral clause result */
A68_282 * MLUAELA;  /* YIELD */
A68_285 * NLUAELA;  /* YIELD */
A68_286 * OLUAELA;  /* YIELD */
A_PROC_ENTRY(setup_compilefn);
 /* line 4287: */
 /* line 4288: */
 /* line 4289: */
ELUAELA.Fndec = JLPAELA_fndec;
 /* line 4290: */
FLUAELA.Macsort = KMPAELA_macsort;
FLUAELA.Vss = LLPAELA_vss;
FLUAELA.Maxvss = MLPAELA_maxvss;
FLUAELA.K = ULPAELA_k;
 /* line 4291: */
FLUAELA.Which = BMPAELA_which;
FLUAELA.Scope = PNPAELA_scope;
FLUAELA.Lastop = CMPAELA_lastop;
FLUAELA.Lastcall = MMPAELA_lastcall;
 /* line 4292: */
FLUAELA.Errorswitch = HMPAELA_errorswitch;
FLUAELA.Lhsjoin = ANPAELA_lhsjoin;
FLUAELA.Joinstack = QMPAELA_joinstack;
FLUAELA.Joinst = SMPAELA_joinst;
 /* line 4293: */
FLUAELA.Joinup = (&VMPAELA_joinup);
 /* line 4294: */
FLUAELA.Joinvarstack = RMPAELA_joinvarstack;
 /* line 4295: */
FLUAELA.Joinmultstack = UMPAELA_joinmultstack;
FLUAELA.Joinvarst = TMPAELA_joinvarst;
 /* line 4296: */
GLUAELA = A_HEAP(A68_275 ) ;
(*GLUAELA) = FLUAELA ;
ELUAELA.Cint = GLUAELA;
HLUAELA.Integer = SLPAELA_integer;
HLUAELA.Type = RLPAELA_type;
HLUAELA.Jointype = WMPAELA_jointype;
HLUAELA.Sts = EMPAELA_sts;
 /* line 4297: */
ILUAELA = A_HEAP(A68_278 ) ;
(*ILUAELA) = HLUAELA ;
ELUAELA.Ctyp = ILUAELA;
 /* line 4298: */
JLUAELA.Fncallstack = GMPAELA_fncallstack;
JLUAELA.Lastops = FNPAELA_lastops;
JLUAELA.Lastcalls = GNPAELA_lastcalls;
 /* line 4299: */
JLUAELA.Decids = MOPAELA_decids;
JLUAELA.Mltype = QOPAELA_mltype;
JLUAELA.Nextmltype = ROPAELA_nextmltype;
JLUAELA.Multlets = TOPAELA_multlets;
JLUAELA.Multiassign = UOPAELA_multiassign;
 /* line 4300: */
KLUAELA = A_HEAP(A68_279 ) ;
(*KLUAELA) = JLUAELA ;
ELUAELA.Csta = KLUAELA;
LLUAELA.Decnocheck = AMPAELA_decnocheck;
LLUAELA.Portinfo = XLPAELA_portinfo;
 /* line 4301: */
LLUAELA.Portstack = YLPAELA_portstack;
MLUAELA = A_HEAP(A68_282 ) ;
(*MLUAELA) = LLUAELA ;
ELUAELA.Crem = MLUAELA;
 /* line 4302: */
NLUAELA = A_HEAP(A68_285 ) ;
(*NLUAELA) = ELUAELA ;
DLUAELA.Val = NLUAELA;
DLUAELA.Rest = OOPAELA_compilefnstack;
OLUAELA = A_HEAP(A68_286 ) ;
(*OLUAELA) = DLUAELA ;
OOPAELA_compilefnstack = OLUAELA;
A_PROC_EXIT(setup_compilefn);
return;
} 
#undef NL

A68_VOID  PLUAELA_reset_compilefn(void)
{ 
A68_275 * QLUAELA_cint;
A68_278 * RLUAELA_ctyp;
A68_279 * SLUAELA_csta;
A68_282 * TLUAELA_crem;
A_PROC_ENTRY(reset_compilefn);
{ 
 /* line 4306: */
if ( (OOPAELA_compilefnstack!=POPAELA_nilcompilefnstack) )
{ 
CNPAELA_nonunitbody = A68_FALSE;
 /* line 4307: */
BNPAELA_nooutput = A68_FALSE;
 /* line 4308: */
JLPAELA_fndec = (*(&((*(&(OOPAELA_compilefnstack->Val)))->Fndec)));
 /* line 4309: */
QLUAELA_cint = (*(&((*(&(OOPAELA_compilefnstack->Val)))->Cint)));
 /* line 4310: */
RLUAELA_ctyp = (*(&((*(&(OOPAELA_compilefnstack->Val)))->Ctyp)));
 /* line 4311: */
SLUAELA_csta = (*(&((*(&(OOPAELA_compilefnstack->Val)))->Csta)));
 /* line 4312: */
TLUAELA_crem = (*(&((*(&(OOPAELA_compilefnstack->Val)))->Crem)));
 /* line 4313: */
OOPAELA_compilefnstack = (*(&(OOPAELA_compilefnstack->Rest)));
 /* line 4314: */
KMPAELA_macsort = (*(&(QLUAELA_cint->Macsort)));
 /* line 4315: */
LLPAELA_vss = (*(&(QLUAELA_cint->Vss)));
 /* line 4316: */
MLPAELA_maxvss = (*(&(QLUAELA_cint->Maxvss)));
ULPAELA_k = (*(&(QLUAELA_cint->K)));
BMPAELA_which = (*(&(QLUAELA_cint->Which)));
 /* line 4317: */
PNPAELA_scope = (*(&(QLUAELA_cint->Scope)));
 /* line 4318: */
CMPAELA_lastop = (*(&(QLUAELA_cint->Lastop)));
 /* line 4319: */
MMPAELA_lastcall = (*(&(QLUAELA_cint->Lastcall)));
 /* line 4320: */
HMPAELA_errorswitch = (*(&(QLUAELA_cint->Errorswitch)));
 /* line 4321: */
ANPAELA_lhsjoin = (*(&(QLUAELA_cint->Lhsjoin)));
 /* line 4322: */
QMPAELA_joinstack = (*(&(QLUAELA_cint->Joinstack)));
SMPAELA_joinst = (*(&(QLUAELA_cint->Joinst)));
 /* line 4323: */
VMPAELA_joinup = (*(*(&(QLUAELA_cint->Joinup))));
 /* line 4324: */
RMPAELA_joinvarstack = (*(&(QLUAELA_cint->Joinvarstack)));
 /* line 4325: */
UMPAELA_joinmultstack = (*(&(QLUAELA_cint->Joinmultstack)));
 /* line 4326: */
TMPAELA_joinvarst = (*(&(QLUAELA_cint->Joinvarst)));
 /* line 4327: */
SLPAELA_integer = (*(&(RLUAELA_ctyp->Integer)));
 /* line 4328: */
RLPAELA_type = (*(&(RLUAELA_ctyp->Type)));
 /* line 4329: */
WMPAELA_jointype = (*(&(RLUAELA_ctyp->Jointype)));
 /* line 4330: */
EMPAELA_sts = (*(&(RLUAELA_ctyp->Sts)));
 /* line 4331: */
GMPAELA_fncallstack = (*(&(SLUAELA_csta->Fncallstack)));
 /* line 4332: */
FNPAELA_lastops = (*(&(SLUAELA_csta->Lastops)));
GNPAELA_lastcalls = (*(&(SLUAELA_csta->Lastcalls)));
 /* line 4333: */
MOPAELA_decids = (*(&(SLUAELA_csta->Decids)));
 /* line 4334: */
QOPAELA_mltype = (*(&(SLUAELA_csta->Mltype)));
ROPAELA_nextmltype = (*(&(SLUAELA_csta->Nextmltype)));
 /* line 4335: */
TOPAELA_multlets = (*(&(SLUAELA_csta->Multlets)));
 /* line 4336: */
UOPAELA_multiassign = (*(&(SLUAELA_csta->Multiassign)));
 /* line 4337: */
AMPAELA_decnocheck = (*(&(TLUAELA_crem->Decnocheck)));
 /* line 4338: */
XLPAELA_portinfo = (*(&(TLUAELA_crem->Portinfo)));
 /* line 4339: */
 /* line 4340: */
YLPAELA_portstack = (*(&(TLUAELA_crem->Portstack)));
} 
} 
A_PROC_EXIT(reset_compilefn);
return;
} 
#undef NL

A68_VOID  XLUAELA_default(A68_INT  Last_fnno, A68_244 * Dids, A68_166 * Dfns)
{ 
A68_170  YLUAELA;  /* OPERATORS - mode -> union mode */
A68_218 * ZLUAELA;  /* YIELD */
A68_210  AMUAELA;  /* OPERATORS - mode -> union mode */
A68_BOOL * BMUAELA_i;
A68_INT  CMUAELA;  /* forall loop counter */
A68_185  DMUAELA;  /* OPERATORS - mode -> union mode */
A68_INT  EMUAELA;  /* YIELD */
A68_198  FMUAELA;  /* collateral clause result */
A68_199  GMUAELA;  /* OPERATORS - mode -> union mode */
A68_INT  HMUAELA;  /* clause result */
A68_211  IMUAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(default);
 /* line 4343: */
{ 
ULPAELA_k = 0;
 /* line 4344: */
BMPAELA_which = 0;
 /* line 4345: */
LLPAELA_vss = 0;
 /* line 4346: */
MLPAELA_maxvss = 0;
 /* line 4347: */
HMPAELA_errorswitch = A68_FALSE;
 /* line 4348: */
FJPAELA_attr = A_UNITE(YLUAELA,mode6,6,MRCAELA_attrnull);
 /* line 4349: */
GJPAELA_attrstr = MQCAELA_nilattrstr;
 /* line 4350: */
HJPAELA_nextattr = (&GJPAELA_attrstr);
 /* line 4351: */
BJPAELA_strings = AJPAELA_nilstringlist;
 /* line 4352: */
DJPAELA_nextstring = (&BJPAELA_strings);
 /* line 4353: */
QLPAELA_inarith = A68_FALSE;
 /* line 4354: */
ZLPAELA_specinput = A68_TRUE;
 /* line 4355: */
AMPAELA_decnocheck = HUCAELA_nildecnocheck;
 /* line 4356: */
KMPAELA_macsort = WWCAELA_flt_par;
 /* line 4357: */
GMPAELA_fncallstack = (A68_265 *)A68_NIL;
 /* line 4358: */
MMPAELA_lastcall = TTCAOST_nullid;
 /* line 4359: */
BNPAELA_nooutput = A68_FALSE;
 /* line 4360: */
CNPAELA_nonunitbody = A68_FALSE;
 /* line 4361: */
ZMPAELA_ioid = A68_FALSE;
 /* line 4362: */
ANPAELA_lhsjoin = A68_TRUE;
 /* line 4363: */
QMPAELA_joinstack = QQCAELA_niljoinstack;
 /* line 4364: */
SMPAELA_joinst = PQCAELA_niljoinst;
 /* line 4365: */
ZLUAELA = A_HEAP(A68_218 ) ;
(*ZLUAELA) = QRCAELA_jfalse ;
VMPAELA_joinup = A_UNITE(AMUAELA,mode5,5,ZLUAELA);
 /* line 4366: */
RMPAELA_joinvarstack = SQCAELA_niljoinvarstack;
 /* line 4367: */
UMPAELA_joinmultstack = UQCAELA_niljoinmultstack;
 /* line 4368: */
TMPAELA_joinvarst = PQCAELA_niljoinst;
 /* line 4369: */
FNPAELA_lastops = EUCAELA_nillastops;
 /* line 4370: */
GNPAELA_lastcalls = FUCAELA_nillastcalls;
 /* line 4371: */
INPAELA_charalts = LQCAELA_nilcharalts;
 /* line 4372: */
CMUAELA = NOPAELA_charcheck.upb -1;
BMUAELA_i = NOPAELA_charcheck.data;
for (;CMUAELA-- >= 0;
(BMUAELA_i++
) )
{
(*BMUAELA_i) = A68_FALSE;
}
 /* line 4373: */
JNPAELA_delaytype = MPCAELA_constint;
 /* line 4374: */
OLPAELA_ids = Dids;
 /* line 4375: */
PLPAELA_fns = Dfns;
 /* line 4376: */
KLPAELA_decs = FQCAELA_nildecs;
 /* line 4377: */
RLPAELA_type = GRCAELA_o;
 /* line 4378: */
WMPAELA_jointype = GRCAELA_o;
 /* line 4379: */
EMUAELA = 0 ;
SLPAELA_integer = A_UNITE(DMUAELA,mode1,1,EMUAELA);
 /* line 4380: */
TNPAELA_palts1 = BQCAELA_nilpalts;
 /* line 4381: */
PMPAELA_cstr = KQCAELA_nilcst;
 /* line 4382: */
MOPAELA_decids = CQCAELA_nilids;
 /* line 4383: */
QOPAELA_mltype = DQCAELA_nilst;
 /* line 4384: */
ROPAELA_nextmltype = (&QOPAELA_mltype);
 /* line 4385: */
TOPAELA_multlets = SOPAELA_nilmultlets;
 /* line 4386: */
UOPAELA_multiassign = SOPAELA_nilmultlets;
 /* line 4387: */
FMUAELA.Scope = 0;
FMUAELA.Vnno = 0;
FMUAELA.Text = A68_TRUE;
FMUAELA.Outofdate = A68_FALSE;
FMUAELA.Inscope = A68_TRUE;
FMUAELA.Export = A68_FALSE;
FMUAELA.Id = TTCAOST_nullid;
FMUAELA.U = A_UNITE(GMUAELA,mode8,8,DRCAELA_flt);
VLPAELA_idinfo = FMUAELA;
 /* line 4388: */
if ( (Last_fnno!=(-1)) )
{ 
HMUAELA = Last_fnno;
} 
else
{ 
HMUAELA = 0;
} 
PNPAELA_scope = HMUAELA;
 /* line 4389: */
XLPAELA_portinfo = A_UNITE(IMUAELA,mode3,3,DRCAELA_flt);
 /* line 4390: */
 /* line 4391: */
YLPAELA_portstack = WQCAELA_nilportstack;
} 
A_PROC_EXIT(default);
return;
} 
#undef NL

A68_BOOL  KMUAELA_charunused(A68_INT  C)
{ 
A68_BOOL * LMUAELA;  /* YIELD */
A68_BOOL  MMUAELA;  /* clause result */
A_PROC_ENTRY(charunused);
 /* line 4395: */
 /* line 4396: */
if ( !(*(&A_VINDEX(NOPAELA_charcheck,C))) )
{ 
LMUAELA = (&A_VINDEX(NOPAELA_charcheck,C)) ;
(*LMUAELA) = A68_TRUE;
 /* line 4397: */
MMUAELA = A68_TRUE;
} 
else
{ 
 /* line 4398: */
MMUAELA = A68_FALSE;
} 
A_PROC_EXIT(charunused);
return( MMUAELA );
} 
#undef NL

A68_BOOL  PMUAELA_check_charrange(A68_INT  Start, A68_INT  Finish)
{ 
A68_165  QMUAELA_c1;
A68_165  RMUAELA_c2;
A68_BOOL  SMUAELA;  /* optbool result */
A68_31  UMUAELA_generator;   /* proc value of non-global proc */
A68_476  ZMUAELA;  /* collateral clause result */
A68_VC  ANUAELA;  /* avoid structure result */
A68_VC  BNUAELA;  /* OPERATORS - istruct -> vector */
A68_VC  CNUAELA;  /* OPERATORS - assign op */
A68_31  ENUAELA_generator;   /* proc value of non-global proc */
A68_VC  KNUAELA;  /* avoid structure result */
A68_VC  MNUAELA;  /* OPERATORS - assign op */
A68_31  ONUAELA_generator;   /* proc value of non-global proc */
A68_VC  UNUAELA;  /* avoid structure result */
A68_VC  WNUAELA;  /* OPERATORS - assign op */
A68_31  YNUAELA_generator;   /* proc value of non-global proc */
A68_VC  EOUAELA;  /* avoid structure result */
A68_VC  GOUAELA;  /* OPERATORS - assign op */
A68_367  HOUAELA;  /* collateral clause result */
A68_263  IOUAELA;  /* OPERATORS - mode -> union mode */
A68_263  JOUAELA;  /* OPERATORS - mode -> union mode */
A68_262  KOUAELA;  /* OPERATORS - istruct -> vector */
A68_BOOL  LOUAELA;  /* clause result */
A_PROC_ENTRY(check_charrange);
 /* line 4401: */
{ 
QMUAELA_c1 = (*(&A_R1INDEX(JPPAELA_charset,Start)));
 /* line 4402: */
RMUAELA_c2 = (*(&A_R1INDEX(JPPAELA_charset,Finish)));
 /* line 4403: */
 /* line 4404: */
if ( (QMUAELA_c1.Type!=RMUAELA_c2.Type) )
{ 
SMUAELA = (QMUAELA_c1.Type==XJPAELA_bold);
if ( ! SMUAELA )
{ /* line 4405: */
SMUAELA = (QMUAELA_c1.Type==YJPAELA_letter);
}
if ( ! SMUAELA )
{ /* line 4406: */
SMUAELA = (QMUAELA_c1.Type==ZJPAELA_digit);
}
if ( SMUAELA )
{ 
A_CLOSURE( UMUAELA_generator, VMUAELA_generator, WMUAELA_generator );
ZMUAELA.data[0] = '\'';
ZMUAELA.data[1] = LJPAELA_charval;
A_CALLPROC(UMUAELA_generator,(A68_FALSE, &ANUAELA),(A68_FALSE, &ANUAELA,(UMUAELA_generator).nonlocals));
CNUAELA = A_HISVEC(BNUAELA,ZMUAELA,2,A68_CHAR ) ;
A_VASSIGN2(CNUAELA,ANUAELA,A68_CHAR ) ;
LKPAELA_fp3 = ANUAELA;
 /* line 4407: */
 /* line 4408: */
if ( (QMUAELA_c1.Type==XJPAELA_bold) )
{ 
A_CLOSURE( ENUAELA_generator, FNUAELA_generator, GNUAELA_generator );
 /* line 4409: */
A_CALLPROC(ENUAELA_generator,(A68_FALSE, &KNUAELA),(A68_FALSE, &KNUAELA,(ENUAELA_generator).nonlocals));
MNUAELA = LNUAELA ;
A_VASSIGN2(MNUAELA,KNUAELA,A68_CHAR ) ;
MKPAELA_fp4 = KNUAELA;
} 
else
{ 
 /* line 4410: */
if ( (QMUAELA_c1.Type==YJPAELA_letter) )
{ 
A_CLOSURE( ONUAELA_generator, PNUAELA_generator, QNUAELA_generator );
 /* line 4411: */
A_CALLPROC(ONUAELA_generator,(A68_FALSE, &UNUAELA),(A68_FALSE, &UNUAELA,(ONUAELA_generator).nonlocals));
WNUAELA = VNUAELA ;
A_VASSIGN2(WNUAELA,UNUAELA,A68_CHAR ) ;
MKPAELA_fp4 = UNUAELA;
} 
else
{ 
A_CLOSURE( YNUAELA_generator, ZNUAELA_generator, AOUAELA_generator );
 /* line 4412: */
A_CALLPROC(YNUAELA_generator,(A68_FALSE, &EOUAELA),(A68_FALSE, &EOUAELA,(YNUAELA_generator).nonlocals));
GOUAELA = FOUAELA ;
A_VASSIGN2(GOUAELA,EOUAELA,A68_CHAR ) ;
MKPAELA_fp4 = EOUAELA;
} 
} 
 /* line 4413: */
HOUAELA.data[0] = A_UNITE(IOUAELA,mode13,13,LKPAELA_fp3);
HOUAELA.data[1] = A_UNITE(JOUAELA,mode13,13,MKPAELA_fp4);
 /* line 4414: */
SZPAELA_faultp(2, A_HISVEC(KOUAELA,HOUAELA,2,A68_263 ));
} 
 /* line 4415: */
 /* line 4416: */
LOUAELA = A68_FALSE;
} 
else
{ 
 /* line 4417: */
if ( (QMUAELA_c1.Value>RMUAELA_c2.Value) )
{ 
 /* line 4418: */
UQPAELA_fault(143, VJAAOSI_nullmsg);
 /* line 4419: */
 /* line 4420: */
LOUAELA = A68_FALSE;
} 
else
{ 
 /* line 4421: */
 /* line 4422: */
LOUAELA = A68_TRUE;
} 
} 
} 
A_PROC_EXIT(check_charrange);
return( LOUAELA );
} 
#undef NL

A68_BOOL  POUAELA_charsubrange(A68_INT  Start, A68_INT  Finish, A68_251 * Charalts)
{ 
A68_BOOL  QOUAELA_is_contiguous;
A68_251 * ROUAELA_alts;
A68_BOOL  SOUAELA_looking;
A68_INT  TOUAELA_value;
A68_BOOL  UOUAELA;  /* optbool result */
A68_252  VOUAELA;  /* united object - for case conformity */
A68_CHAR  WOUAELA_c;
A68_BOOL  XOUAELA;  /* optbool result */
A68_253  YOUAELA_cr;
A68_INT  ZOUAELA_lwb;
A68_INT  APUAELA_upb;
A68_BOOL  BPUAELA;  /* optbool result */
A68_BOOL  CPUAELA;  /* optbool result */
A68_BOOL  DPUAELA;  /* clause result */
A_PROC_ENTRY(charsubrange);
 /* line 4425: */
{ 
QOUAELA_is_contiguous = A68_TRUE;
 /* line 4426: */
ROUAELA_alts = Charalts;
 /* line 4427: */
SOUAELA_looking = A68_FALSE;
 /* line 4428: */
TOUAELA_value = (Start-1);
 /* line 4429: */
for ( ;; )
{ 
UOUAELA = QOUAELA_is_contiguous;
if ( UOUAELA )
{UOUAELA = (TOUAELA_value<Finish);
}
if ( UOUAELA )
{ /* line 4430: */
UOUAELA = (ROUAELA_alts!=LQCAELA_nilcharalts);
}
if ( !(UOUAELA) ) break;
 /* line 4431: */
VOUAELA = (*(&(ROUAELA_alts->Alts))) ;
switch ( VOUAELA.mode )
{ 
case 1: /* CHAR */
WOUAELA_c = (VOUAELA.data.mode1);
 /* line 4432: */
{ 
if ( ((A68_INT)(unsigned char)WOUAELA_c==Start) )
{ 
SOUAELA_looking = A68_TRUE;
} 
 /* line 4433: */
XOUAELA = SOUAELA_looking;
if ( XOUAELA )
{ /* line 4434: */
XOUAELA = ((TOUAELA_value+=1)!=(A68_INT)(unsigned char)WOUAELA_c);
}
if ( XOUAELA )
{ 
 /* line 4435: */
 /* line 4436: */
 /* line 4437: */
QOUAELA_is_contiguous = A68_FALSE;
} 
} 
break;
case 2: /* STRUCT(CHAR,CHAR)  */
YOUAELA_cr = (VOUAELA.data.mode2);
 /* line 4438: */
{ 
ZOUAELA_lwb = (A68_INT)(unsigned char)YOUAELA_cr.Lwchar;
 /* line 4439: */
APUAELA_upb = (A68_INT)(unsigned char)YOUAELA_cr.Upchar;
 /* line 4440: */
BPUAELA = !SOUAELA_looking;
if ( BPUAELA )
{BPUAELA = (Start>=ZOUAELA_lwb);
}
if ( BPUAELA )
{ /* line 4441: */
BPUAELA = (Start<=APUAELA_upb);
}
if ( BPUAELA )
{ 
SOUAELA_looking = A68_TRUE;
 /* line 4442: */
 /* line 4443: */
ZOUAELA_lwb = Start;
} 
 /* line 4444: */
 /* line 4445: */
if ( SOUAELA_looking )
{ 
 /* line 4446: */
if ( ((TOUAELA_value+=1)!=ZOUAELA_lwb) )
{ 
 /* line 4447: */
QOUAELA_is_contiguous = A68_FALSE;
} 
else
{ 
 /* line 4448: */
if ( (Finish<APUAELA_upb) )
{ 
 /* line 4449: */
TOUAELA_value = Finish;
} 
else
{ 
 /* line 4450: */
 /* line 4451: */
 /* line 4452: */
 /* line 4453: */
TOUAELA_value = APUAELA_upb;
} 
} 
} 
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 4454: */
 /* line 4455: */
ROUAELA_alts = (*(&(ROUAELA_alts->Rest)));
}
 /* line 4456: */
CPUAELA = QOUAELA_is_contiguous;
if ( CPUAELA )
{CPUAELA = SOUAELA_looking;
}
if ( CPUAELA )
{ /* line 4457: */
CPUAELA = (TOUAELA_value==Finish);
}
DPUAELA = CPUAELA;
} 
A_PROC_EXIT(charsubrange);
return( DPUAELA );
} 
#undef NL

A_STATIC A68_244 * FPUAELA_defaultids(A68_VC  Id)
{ 
A68_INT  GPUAELA;  /* clause result */
A68_INT  HPUAELA_fnno;
A68_244  IPUAELA;  /* collateral clause result */
A68_198  JPUAELA;  /* collateral clause result */
A68_199  KPUAELA;  /* OPERATORS - mode -> union mode */
A68_198 * LPUAELA;  /* YIELD */
A68_170  MPUAELA;  /* OPERATORS - mode -> union mode */
A68_244 * NPUAELA;  /* clause result */
A68_244 * OPUAELA;  /* YIELD */
A_PROC_ENTRY(defaultids);
 /* line 4461: */
{ 
if ( (FKPAELA_cfnno==0) )
{ 
GPUAELA = 0;
} 
else
{ 
GPUAELA = (*(&(JLPAELA_fndec->Fnno)));
} 
HPUAELA_fnno = GPUAELA;
 /* line 4462: */
JPUAELA.Scope = HPUAELA_fnno;
JPUAELA.Vnno = 0;
JPUAELA.Text = A68_TRUE;
JPUAELA.Outofdate = A68_FALSE;
JPUAELA.Inscope = A68_TRUE;
JPUAELA.Export = A68_FALSE;
JPUAELA.Id = Id;
JPUAELA.U = A_UNITE(KPUAELA,mode10,10,CRCAELA_notdec);
 /* line 4463: */
LPUAELA = A_HEAP(A68_198 ) ;
(*LPUAELA) = JPUAELA ;
IPUAELA.Idinfo = LPUAELA;
IPUAELA.Declaration = A68_TRUE;
IPUAELA.Attr = A_UNITE(MPUAELA,mode6,6,MRCAELA_attrnull);
 /* line 4464: */
IPUAELA.Rest = CQCAELA_nilids;
OPUAELA = A_HEAP(A68_244 ) ;
(*OPUAELA) = IPUAELA ;
NPUAELA = OPUAELA;
} 
A_PROC_EXIT(defaultids);
return( NPUAELA );
} 
#undef NL

A68_167 * UPUAELA_defaultfndec(A68_VC  Id, A68_BOOL  Macro, A68_INT  Sort, A68_INT  Fnno, A68_INT  Fndecsort)
{ 
A68_BOOL  VPUAELA_outer;
A68_168 * WPUAELA_fi;
A68_168  XPUAELA;  /* collateral clause result */
A68_167 * YPUAELA_fd;
A68_167  ZPUAELA;  /* collateral clause result */
A68_170  AQUAELA;  /* OPERATORS - mode -> union mode */
A68_169 *** BQUAELA;  /* YIELD */
A68_167 * CQUAELA;  /* clause result */
A_PROC_ENTRY(defaultfndec);
 /* line 4467: */
{ 
VPUAELA_outer = (Fndecsort==FXCAELA_outerdec);
 /* line 4468: */
WPUAELA_fi = (A_HEAP(A68_168 ));
 /* line 4469: */
if ( VPUAELA_outer )
{ 
XPUAELA.Scope = 0;
} 
else
{ 
XPUAELA.Scope = FKPAELA_cfnno;
} 
if ( VPUAELA_outer )
{ 
XPUAELA.Vnno = APPAELA_vnno;
} 
else
{ 
XPUAELA.Vnno = 0;
} 
XPUAELA.Status = Sort;
XPUAELA.Text = A68_TRUE;
XPUAELA.Outofdate = A68_FALSE;
XPUAELA.Import = A68_FALSE;
XPUAELA.Export = A68_FALSE;
(*WPUAELA_fi) = XPUAELA;
 /* line 4470: */
YPUAELA_fd = (A_HEAP(A68_167 ));
ZPUAELA.Fninfo = WPUAELA_fi;
ZPUAELA.Sort = Fndecsort;
ZPUAELA.Fnno = Fnno;
ZPUAELA.Macro = Macro;
ZPUAELA.Id = Id;
ZPUAELA.Mparamno = 0;
ZPUAELA.Mp = IQCAELA_nilmparams;
 /* line 4471: */
ZPUAELA.Nextmp = (A68_169 **)A68_NIL;
ZPUAELA.Attr = A_UNITE(AQUAELA,mode6,6,MRCAELA_attrnull);
ZPUAELA.Inputs = FQCAELA_nildecs;
ZPUAELA.Outputs = FQCAELA_nildecs;
ZPUAELA.Param = GRCAELA_o;
ZPUAELA.Ans = GRCAELA_o;
ZPUAELA.Num_names = 0;
(*YPUAELA_fd) = ZPUAELA;
 /* line 4472: */
BQUAELA = (&(YPUAELA_fd->Nextmp)) ;
(*BQUAELA) = (&(YPUAELA_fd->Mp));
 /* line 4473: */
 /* line 4474: */
CQUAELA = YPUAELA_fd;
} 
A_PROC_EXIT(defaultfndec);
return( CQUAELA );
} 
#undef NL

A68_BOOL  EQUAELA_scope_start(A68_INT  Scope)
{ 
A68_BOOL  FQUAELA;  /* optbool result */
A68_BOOL  GQUAELA;  /* clause result */
A_PROC_ENTRY(scope_start);
 /* line 4477: */
FQUAELA = (Scope==EJCAELA_textstart);
if ( ! FQUAELA )
{FQUAELA = (Scope==VKCAELA_vvarmult);
}
if ( ! FQUAELA )
{ /* line 4478: */
FQUAELA = (Scope==YMCAELA_seqvarmult);
}
if ( ! FQUAELA )
{FQUAELA = (Scope==GMCAELA_vpar);
}
if ( ! FQUAELA )
{FQUAELA = (Scope==FMCAELA_vseq);
}
if ( ! FQUAELA )
{FQUAELA = (Scope==YKCAELA_fnstart);
}
GQUAELA = FQUAELA;
A_PROC_EXIT(scope_start);
return( GQUAELA );
} 
#undef NL

A68_244 * KQUAELA_id_in_scope(A68_VC  Id, A68_293 * Scopestack, A68_BOOL  Decl)
{ 
A68_BOOL  LQUAELA_found;
A68_293 * MQUAELA_s;
A68_BOOL  NQUAELA;  /* optbool result */
A68_244 * OQUAELA_i;
A68_BOOL  PQUAELA;  /* optbool result */
A68_BOOL  QQUAELA;  /* optbool result */
A68_BOOL  RQUAELA;  /* optbool result */
A68_BOOL  SQUAELA;  /* optbool result */
A68_244 * TQUAELA;  /* clause result */
A_PROC_ENTRY(id_in_scope);
 /* line 4481: */
 /* line 4482: */
{ 
LQUAELA_found = A68_FALSE;
 /* line 4483: */
MQUAELA_s = Scopestack;
 /* line 4484: */
for ( ;; )
{ 
NQUAELA = (MQUAELA_s!=CUCAELA_nilscope);
if ( NQUAELA )
{ /* line 4485: */
NQUAELA = !EQUAELA_scope_start((*(&(MQUAELA_s->Scope))));
}
if ( !(NQUAELA) ) break;
MQUAELA_s = (*(&(MQUAELA_s->Rest)));
}
 /* line 4486: */
OQUAELA_i = OLPAELA_ids;
 /* line 4487: */
for ( ;; )
{ 
PQUAELA = !LQUAELA_found;
if ( PQUAELA )
{ /* line 4488: */
PQUAELA = (OQUAELA_i!=CQCAELA_nilids);
}
if ( PQUAELA )
{QQUAELA = (MQUAELA_s==CUCAELA_nilscope);
if ( ! QQUAELA )
{QQUAELA = ((*(&(MQUAELA_s->Ids)))!=OQUAELA_i);
}
 /* line 4489: */
PQUAELA = QQUAELA;
}
if ( !(PQUAELA) ) break;
 /* line 4490: */
RQUAELA = A_VC_EQ((*(&((*(&(OQUAELA_i->Idinfo)))->Id))),Id);
if ( RQUAELA )
{SQUAELA = Decl;
if ( SQUAELA )
{SQUAELA = (*(&(OQUAELA_i->Declaration)));
}
if ( ! SQUAELA )
{SQUAELA = !Decl;
}
 /* line 4491: */
RQUAELA = SQUAELA;
}
if ( RQUAELA )
{ 
 /* line 4492: */
LQUAELA_found = A68_TRUE;
} 
else
{ 
 /* line 4493: */
 /* line 4494: */
OQUAELA_i = (*(&(OQUAELA_i->Rest)));
} 
}
 /* line 4495: */
if ( LQUAELA_found )
{ 
TQUAELA = OQUAELA_i;
} 
else
{ 
 /* line 4496: */
TQUAELA = FPUAELA_defaultids(Id);
} 
} 
A_PROC_EXIT(id_in_scope);
return( TQUAELA );
} 
#undef NL
 /* line 4500: */

A68_166 * YQUAELA_fn_in_scope(A68_VC  Id, A68_166 * Fns, A68_293 * Scopestack, A68_BOOL  Decl)
{ 
A68_BOOL  ZQUAELA_found;
A68_293 * ARUAELA_s;
A68_BOOL  BRUAELA;  /* optbool result */
A68_166 * CRUAELA_f;
A68_BOOL  DRUAELA;  /* optbool result */
A68_BOOL  ERUAELA;  /* optbool result */
A68_BOOL  FRUAELA;  /* optbool result */
A68_BOOL  GRUAELA;  /* optbool result */
A68_166 * HRUAELA;  /* clause result */
A68_166  IRUAELA;  /* collateral clause result */
A68_166 * JRUAELA;  /* YIELD */
A_PROC_ENTRY(fn_in_scope);
 /* line 4501: */
 /* line 4502: */
{ 
ZQUAELA_found = A68_FALSE;
 /* line 4503: */
ARUAELA_s = Scopestack;
 /* line 4504: */
for ( ;; )
{ 
BRUAELA = (ARUAELA_s!=CUCAELA_nilscope);
if ( BRUAELA )
{ /* line 4505: */
BRUAELA = !EQUAELA_scope_start((*(&(ARUAELA_s->Scope))));
}
if ( !(BRUAELA) ) break;
ARUAELA_s = (*(&(ARUAELA_s->Rest)));
}
 /* line 4506: */
CRUAELA_f = Fns;
 /* line 4507: */
for ( ;; )
{ 
DRUAELA = !ZQUAELA_found;
if ( DRUAELA )
{ /* line 4508: */
DRUAELA = (CRUAELA_f!=HQCAELA_nilfns);
}
if ( DRUAELA )
{ERUAELA = (ARUAELA_s==CUCAELA_nilscope);
if ( ! ERUAELA )
{ERUAELA = ((*(&(ARUAELA_s->Fns)))!=CRUAELA_f);
}
 /* line 4509: */
DRUAELA = ERUAELA;
}
if ( !(DRUAELA) ) break;
 /* line 4510: */
FRUAELA = A_VC_EQ((*(&((*(&(CRUAELA_f->Fndec)))->Id))),Id);
if ( FRUAELA )
{GRUAELA = Decl;
if ( GRUAELA )
{GRUAELA = (*(&(CRUAELA_f->Declaration)));
}
if ( ! GRUAELA )
{GRUAELA = !Decl;
}
 /* line 4511: */
FRUAELA = GRUAELA;
}
if ( FRUAELA )
{ 
 /* line 4512: */
ZQUAELA_found = A68_TRUE;
} 
else
{ 
 /* line 4513: */
 /* line 4514: */
CRUAELA_f = (*(&(CRUAELA_f->Rest)));
} 
}
 /* line 4515: */
 /* line 4516: */
if ( ZQUAELA_found )
{ 
HRUAELA = CRUAELA_f;
} 
else
{ 
 /* line 4517: */
IRUAELA.Fndec = UPUAELA_defaultfndec(Id, A68_FALSE, BXCAELA_fn_notdec, FKPAELA_cfnno, GXCAELA_localdec);
IRUAELA.Declaration = A68_TRUE;
 /* line 4518: */
IRUAELA.Rest = HQCAELA_nilfns;
 /* line 4519: */
JRUAELA = A_HEAP(A68_166 ) ;
(*JRUAELA) = IRUAELA ;
HRUAELA = JRUAELA;
} 
} 
A_PROC_EXIT(fn_in_scope);
return( HRUAELA );
} 
#undef NL

A68_BOOL  MRUAELA_containslocaltype(A68_172  T, A68_293 * S)
{ 
A68_172  NRUAELA;  /* united object - for case conformity */
A68_173 * ORUAELA_p;
A68_199  PRUAELA;  /* united object - for case conformity */
A68_201  QRUAELA_td;
A68_172  RRUAELA;  /* united object - for case conformity */
A68_173 * SRUAELA_ps;
A68_BOOL  TRUAELA;  /* clause result */
A68_174 * URUAELA_n;
A68_176 * VRUAELA_v;
A68_175 * WRUAELA_st;
A68_BOOL  XRUAELA;  /* optbool result */
A68_BOOL  YRUAELA;  /* optbool result */
A68_172  ZRUAELA;  /* OPERATORS - mode -> union mode */
A68_175 * ASUAELA;  /* YIELD */
A68_179 * BSUAELA_r;
A68_178 * CSUAELA_f;
A68_BOOL  DSUAELA;  /* optbool result */
A68_180 * ESUAELA_tb;
A68_181 * FSUAELA_ts;
A_PROC_ENTRY(containslocaltype);
 /* line 4523: */
 /* line 4524: */
NRUAELA = T ;
switch ( NRUAELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE198,INT,MODE247)  */
ORUAELA_p = (NRUAELA.data.mode1);
 /* line 4525: */
 /* line 4526: */
PRUAELA = (*(&((*(&(KQUAELA_id_in_scope((*(&((*(&(ORUAELA_p->Idinfo)))->Id))), S, A68_TRUE)->Idinfo)))->U))) ;
switch ( PRUAELA.mode )
{ 
case 2: /* STRUCT(MODE172)  */
QRUAELA_td = (PRUAELA.data.mode2);
 /* line 4527: */
RRUAELA = QRUAELA_td.T ;
switch ( RRUAELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE198,INT,MODE247)  */
SRUAELA_ps = (RRUAELA.data.mode1);
 /* line 4528: */
TRUAELA = ((*(&(SRUAELA_ps->Typeno)))==(*(&(ORUAELA_p->Typeno))));
break;
default: 
 /* line 4529: */
 /* line 4530: */
TRUAELA = A68_FALSE;
break;
} 
break;
default: 
 /* line 4531: */
 /* line 4532: */
TRUAELA = A68_FALSE;
break;
} 
break;
case 2: /* REF STRUCT(REF MODE198,INT,MODE172)  */
URUAELA_n = (NRUAELA.data.mode2);
 /* line 4533: */
TRUAELA = MRUAELA_containslocaltype((*(&(URUAELA_n->T))), S);
break;
case 4: /* REF STRUCT(REF MODE245,MODE172)  */
VRUAELA_v = (NRUAELA.data.mode4);
 /* line 4534: */
TRUAELA = MRUAELA_containslocaltype((*(&(VRUAELA_v->T))), S);
break;
case 3: /* REF STRUCT(MODE172,REF MODE175)  */
WRUAELA_st = (NRUAELA.data.mode3);
 /* line 4535: */
XRUAELA = (WRUAELA_st!=DQCAELA_nilst);
if ( XRUAELA )
{ /* line 4536: */
YRUAELA = MRUAELA_containslocaltype((*(&(WRUAELA_st->T))), S);
if ( ! YRUAELA )
{ASUAELA = (*(&(WRUAELA_st->Rest))) ;
YRUAELA = MRUAELA_containslocaltype(A_UNITE(ZRUAELA,mode3,3,ASUAELA), S);
}
XRUAELA = YRUAELA;
}
 /* line 4537: */
TRUAELA = XRUAELA;
break;
case 7: /* REF STRUCT(MODE172,MODE185)  */
BSUAELA_r = (NRUAELA.data.mode7);
 /* line 4538: */
TRUAELA = MRUAELA_containslocaltype((*(&(BSUAELA_r->T))), S);
break;
case 6: /* REF STRUCT(MODE172,MODE172)  */
CSUAELA_f = (NRUAELA.data.mode6);
 /* line 4539: */
DSUAELA = MRUAELA_containslocaltype((*(&(CSUAELA_f->From))), S);
if ( ! DSUAELA )
{DSUAELA = MRUAELA_containslocaltype((*(&(CSUAELA_f->To))), S);
}
 /* line 4540: */
TRUAELA = DSUAELA;
break;
case 8: /* REF STRUCT(MODE172)  */
ESUAELA_tb = (NRUAELA.data.mode8);
 /* line 4541: */
TRUAELA = MRUAELA_containslocaltype((*(&(ESUAELA_tb->Tbracket))), S);
break;
case 9: /* REF STRUCT(MODE185,MODE172)  */
FSUAELA_ts = (NRUAELA.data.mode9);
 /* line 4542: */
TRUAELA = MRUAELA_containslocaltype((*(&(FSUAELA_ts->Tstring))), S);
break;
default: 
 /* line 4543: */
TRUAELA = A68_FALSE;
break;
} 
A_PROC_EXIT(containslocaltype);
return( TRUAELA );
} 
#undef NL

A68_244 * HSUAELA_findid(A68_VC  Id)
{ 
A68_244 * ISUAELA_fid;
A68_199  JSUAELA;  /* united object - for case conformity */
A68_201  KSUAELA_t;
A68_203  LSUAELA_p;
A68_200  MSUAELA_ind;
A68_205  NSUAELA_ad;
A68_202  OSUAELA_c;
A68_INT * PSUAELA;  /* YIELD */
A68_244 * QSUAELA;  /* clause result */
A_PROC_ENTRY(findid);
 /* line 4547: */
 /* line 4548: */
{ 
ISUAELA_fid = KQUAELA_id_in_scope(Id, CUCAELA_nilscope, A68_FALSE);
 /* line 4549: */
 /* line 4550: */
if ( ((*(&((*(&(ISUAELA_fid->Idinfo)))->Scope)))==(-1)) )
{ 
 /* line 4551: */
JSUAELA = (*(&((*(&(ISUAELA_fid->Idinfo)))->U))) ;
switch ( JSUAELA.mode )
{ 
case 2: /* STRUCT(MODE172)  */
KSUAELA_t = (JSUAELA.data.mode2);
 /* line 4552: */
GEQAELA_setexttype(KSUAELA_t.T);
break;
case 4: /* STRUCT(MODE172,INT)  */
LSUAELA_p = (JSUAELA.data.mode4);
 /* line 4553: */
GEQAELA_setexttype(LSUAELA_p.Type);
break;
case 1: /* STRUCT(MODE185)  */
MSUAELA_ind = (JSUAELA.data.mode1);
 /* line 4554: */
LDQAELA_setextint(MSUAELA_ind.I);
break;
case 6: /* STRUCT(MODE170)  */
NSUAELA_ad = (JSUAELA.data.mode6);
 /* line 4555: */
XDQAELA_setextattr(NSUAELA_ad.A);
break;
case 3: /* STRUCT(MODE222)  */
OSUAELA_c = (JSUAELA.data.mode3);
 /* line 4556: */
 /* line 4557: */
DFQAELA_setextctype(OSUAELA_c.Ct);
break;
default: 
/*SKIP*/;
break;
} 
 /* line 4558: */
 /* line 4559: */
PSUAELA = (&((*(&(ISUAELA_fid->Idinfo)))->Scope)) ;
(*PSUAELA) = 0;
} 
 /* line 4560: */
 /* line 4561: */
QSUAELA = ISUAELA_fid;
} 
A_PROC_EXIT(findid);
return( QSUAELA );
} 
#undef NL

A68_166 * TSUAELA_findfn(A68_VC  Id, A68_166 * Fns)
{ 
A68_166 * USUAELA_f1;
A68_167 * VSUAELA_fd;
A68_INT * WSUAELA;  /* YIELD */
A68_INT * XSUAELA;  /* YIELD */
A68_166 * YSUAELA;  /* clause result */
A_PROC_ENTRY(findfn);
 /* line 4564: */
{ 
USUAELA_f1 = YQUAELA_fn_in_scope(Id, Fns, CUCAELA_nilscope, A68_FALSE);
 /* line 4565: */
VSUAELA_fd = (*(&(USUAELA_f1->Fndec)));
 /* line 4566: */
 /* line 4567: */
if ( ((*(&((*(&(VSUAELA_fd->Fninfo)))->Scope)))==(-1)) )
{ 
WSUAELA = (&((*(&(VSUAELA_fd->Fninfo)))->Scope)) ;
(*WSUAELA) = 0;
 /* line 4568: */
 /* line 4569: */
if ( ((*(&((*(&(VSUAELA_fd->Fninfo)))->Status)))!=CXCAELA_fn_flt) )
{ 
XSUAELA = (&(VSUAELA_fd->Fnno)) ;
(*XSUAELA) = FKPAELA_cfnno+=1;
 /* line 4570: */
GGQAELA_setextddecs((*(&(VSUAELA_fd->Inputs))));
 /* line 4571: */
 /* line 4572: */
GGQAELA_setextddecs((*(&(VSUAELA_fd->Outputs))));
} 
} 
 /* line 4573: */
 /* line 4574: */
YSUAELA = USUAELA_f1;
} 
A_PROC_EXIT(findfn);
return( YSUAELA );
} 
#undef NL

A68_VOID  BTUAELA_newid(A68_VC  Id, A68_199  I)
{ 
A68_INT  CTUAELA;  /* clause result */
A68_INT  DTUAELA_fnno;
A68_244  ETUAELA;  /* collateral clause result */
A68_198  FTUAELA;  /* collateral clause result */
A68_198 * GTUAELA;  /* YIELD */
A68_170  HTUAELA;  /* OPERATORS - mode -> union mode */
A68_244 * ITUAELA;  /* YIELD */
A_PROC_ENTRY(newid);
 /* line 4578: */
{ 
if ( (FKPAELA_cfnno==0) )
{ 
CTUAELA = 0;
} 
else
{ 
CTUAELA = (*(&(JLPAELA_fndec->Fnno)));
} 
DTUAELA_fnno = CTUAELA;
 /* line 4579: */
 /* line 4580: */
 /* line 4581: */
if ( (DTUAELA_fnno==0) )
{ 
FTUAELA.Scope = (-1);
} 
else
{ 
FTUAELA.Scope = DTUAELA_fnno;
} 
if ( (DTUAELA_fnno==0) )
{ 
FTUAELA.Vnno = APPAELA_vnno;
} 
else
{ 
FTUAELA.Vnno = 0;
} 
FTUAELA.Text = A68_TRUE;
FTUAELA.Outofdate = A68_FALSE;
FTUAELA.Inscope = A68_TRUE;
FTUAELA.Export = A68_FALSE;
FTUAELA.Id = Id;
FTUAELA.U = I;
 /* line 4582: */
GTUAELA = A_HEAP(A68_198 ) ;
(*GTUAELA) = FTUAELA ;
ETUAELA.Idinfo = GTUAELA;
ETUAELA.Declaration = A68_TRUE;
ETUAELA.Attr = A_UNITE(HTUAELA,mode6,6,MRCAELA_attrnull);
 /* line 4583: */
ETUAELA.Rest = OLPAELA_ids;
ITUAELA = A_HEAP(A68_244 ) ;
(*ITUAELA) = ETUAELA ;
OLPAELA_ids = ITUAELA;
} 
A_PROC_EXIT(newid);
return;
} 
#undef NL

A68_VOID  MTUAELA_newscope(A68_INT  Scope, A68_244 * Ids, A68_166 * Fns)
{ 
A68_293  NTUAELA;  /* collateral clause result */
A68_293 * OTUAELA;  /* YIELD */
A_PROC_ENTRY(newscope);
 /* line 4587: */
NTUAELA.Scope = Scope;
NTUAELA.Ids = Ids;
NTUAELA.Fns = Fns;
 /* line 4588: */
NTUAELA.Rest = ENPAELA_scopestack;
OTUAELA = A_HEAP(A68_293 ) ;
(*OTUAELA) = NTUAELA ;
ENPAELA_scopestack = OTUAELA;
A_PROC_EXIT(newscope);
return;
} 
#undef NL

A68_VOID  RTUAELA_usedid(A68_244 * Item, A68_293 * Scopestack)
{ 
A68_244 * STUAELA_is;
A68_199  TTUAELA;  /* united object - for case conformity */
A68_244  UTUAELA;  /* collateral clause result */
A68_170  VTUAELA;  /* OPERATORS - mode -> union mode */
A68_244 * WTUAELA;  /* YIELD */
A_PROC_ENTRY(usedid);
 /* line 4591: */
{ 
STUAELA_is = KQUAELA_id_in_scope((*(&((*(&(Item->Idinfo)))->Id))), Scopestack, A68_FALSE);
 /* line 4592: */
 /* line 4593: */
TTUAELA = (*(&((*(&(STUAELA_is->Idinfo)))->U))) ;
switch ( TTUAELA.mode )
{ 
case 10: /* STRUCT(INT)  */
 /* line 4594: */
UTUAELA.Idinfo = (*(&(Item->Idinfo)));
UTUAELA.Declaration = A68_FALSE;
UTUAELA.Attr = A_UNITE(VTUAELA,mode6,6,MRCAELA_attrnull);
 /* line 4595: */
UTUAELA.Rest = OLPAELA_ids;
 /* line 4596: */
WTUAELA = A_HEAP(A68_244 ) ;
(*WTUAELA) = UTUAELA ;
OLPAELA_ids = WTUAELA;
break;
default: 
 /* line 4597: */
/*SKIP*/;
break;
} 
} 
A_PROC_EXIT(usedid);
return;
} 
#undef NL

A68_VOID  ZTUAELA_usedfn(A68_166 * Item, A68_293 * Scopestack)
{ 
A68_166 * AUUAELA_fs;
A68_166  BUUAELA;  /* collateral clause result */
A68_166 * CUUAELA;  /* YIELD */
A_PROC_ENTRY(usedfn);
 /* line 4600: */
{ 
AUUAELA_fs = YQUAELA_fn_in_scope((*(&((*(&(Item->Fndec)))->Id))), PLPAELA_fns, Scopestack, A68_FALSE);
 /* line 4601: */
 /* line 4602: */
if ( ((*(&((*(&((*(&(AUUAELA_fs->Fndec)))->Fninfo)))->Status)))==BXCAELA_fn_notdec) )
{ 
BUUAELA.Fndec = (*(&(Item->Fndec)));
BUUAELA.Declaration = A68_FALSE;
 /* line 4603: */
BUUAELA.Rest = PLPAELA_fns;
 /* line 4604: */
CUUAELA = A_HEAP(A68_166 ) ;
(*CUUAELA) = BUUAELA ;
PLPAELA_fns = CUUAELA;
} 
} 
A_PROC_EXIT(usedfn);
return;
} 
#undef NL

A68_BOOL  GUUAELA_testequals(A68_172  A, A68_172  B, A68_BOOL  Outputcheck)
{ 
A68_414  HUUAELA;  /* avoid structure result */
A68_414  IUUAELA_result;
A68_BOOL  JUUAELA;  /* clause result */
A68_BOOL  KUUAELA_ans;
A68_367  LUUAELA;  /* collateral clause result */
A68_263  MUUAELA;  /* OPERATORS - unite union */
A68_263  NUUAELA;  /* OPERATORS - unite union */
A68_262  OUUAELA;  /* OPERATORS - istruct -> vector */
A68_172  PUUAELA;  /* OPERATORS - mode -> union mode */
A68_BOOL  QUUAELA;  /* clause result */
A_PROC_ENTRY(testequals);
 /* line 4607: */
{ 
JASAELA_checkequals( A, B, Outputcheck, A68_FALSE, A68_FALSE, 0, &HUUAELA );
IUUAELA_result = HUUAELA;
 /* line 4608: */
if ( Outputcheck )
{ 
JUUAELA = !LSRAELA_(IUUAELA_result, BSRAELA_false);
} 
else
{ 
JUUAELA = LSRAELA_(IUUAELA_result, ASRAELA_true);
} 
KUUAELA_ans = JUUAELA;
 /* line 4609: */
YIPAELA_namestack = XIPAELA_nonames;
 /* line 4610: */
 /* line 4611: */
if ( !KUUAELA_ans )
{ 
JKPAELA_fp1 = A;
KKPAELA_fp2 = B;
 /* line 4612: */
LUUAELA.data[0] = A_UUNITE(MUUAELA,0,JKPAELA_fp1);
LUUAELA.data[1] = A_UUNITE(NUUAELA,0,KKPAELA_fp2);
VZPAELA_namefaultp(3, A_HISVEC(OUUAELA,LUUAELA,2,A68_263 ));
 /* line 4613: */
 /* line 4614: */
RLPAELA_type = A_UNITE(PUUAELA,mode10,10,DRCAELA_flt);
} 
 /* line 4615: */
 /* line 4616: */
QUUAELA = KUUAELA_ans;
} 
A_PROC_EXIT(testequals);
return( QUUAELA );
} 
#undef NL

A68_VOID  TUUAELA_join_setup(A68_172  T, A68_BOOL  Source, A68_210  *ReturnedValue)
{ 
A68_BOOL  UUUAELA;  /* optbool result */
A68_210  VUUAELA;  /* clause result */
A68_218 * WUUAELA;  /* YIELD */
A68_210  XUUAELA;  /* OPERATORS - mode -> union mode */
A68_172  YUUAELA;  /* united object - for case conformity */
A68_174 * ZUUAELA_n;
A68_210  AVUAELA;  /* avoid structure result */
A68_178 * BVUAELA_f;
A68_215 * CVUAELA_jfn;
A68_218 * DVUAELA;  /* YIELD */
A68_218 * EVUAELA;  /* YIELD */
A68_210  FVUAELA;  /* OPERATORS - mode -> union mode */
A68_179 * GVUAELA_r;
A68_INT  HVUAELA_size;
A68_216 * IVUAELA_joinrow;
A68_221  JVUAELA_bb;
A68_218 * KVUAELA;  /* YIELD */
A68_210  LVUAELA;  /* OPERATORS - mode -> union mode */
A68_490  NVUAELA_generator;   /* proc value of non-global proc */
A68_221  SVUAELA;  /* avoid structure result */
A68_INT  TVUAELA_i;
A68_INT  UVUAELA;  /* to part of loop */
A68_210  VVUAELA;  /* avoid structure result */
A68_210 * WVUAELA;  /* YIELD */
A68_210 * XVUAELA;  /* YIELD */
A68_221 * YVUAELA;  /* YIELD */
A68_210  ZVUAELA;  /* OPERATORS - mode -> union mode */
A68_175 * AWUAELA_s;
A68_491  DWUAELA_join_st;   /* proc value of non-global proc */
A68_210  LWUAELA;  /* OPERATORS - mode -> union mode */
A68_214 * MWUAELA;  /* YIELD */
A68_181 * NWUAELA_ts;
A68_179  OWUAELA;  /* collateral clause result */
A68_179 * PWUAELA;  /* YIELD */
A68_172  QWUAELA;  /* OPERATORS - mode -> union mode */
A68_210  RWUAELA;  /* avoid structure result */
A68_180 * SWUAELA_tb;
A68_210  TWUAELA;  /* avoid structure result */
A68_218 * UWUAELA;  /* YIELD */
A68_210  VWUAELA;  /* OPERATORS - mode -> union mode */
A68_218 * WWUAELA;  /* YIELD */
A68_210  XWUAELA;  /* OPERATORS - mode -> union mode */
A68_182  YWUAELA_f;
A68_210  ZWUAELA;  /* OPERATORS - mode -> union mode */
A68_218  AXUAELA;  /* clause result */
A68_218 * BXUAELA;  /* YIELD */
A68_210  CXUAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(join_setup);
 /* line 4619: */
UUUAELA = Source;
if ( UUUAELA )
{ /* line 4620: */
UUUAELA = !KBTAELA_containsfntype(T);
}
if ( UUUAELA )
{ 
 /* line 4621: */
WUUAELA = A_HEAP(A68_218 ) ;
(*WUUAELA) = PRCAELA_jtrue ;
VUUAELA = A_UNITE(XUUAELA,mode5,5,WUUAELA);
} 
else
{ 
 /* line 4622: */
YUUAELA = T ;
switch ( YUUAELA.mode )
{ 
case 2: /* REF STRUCT(REF MODE198,INT,MODE172)  */
ZUUAELA_n = (YUUAELA.data.mode2);
 /* line 4623: */
TUUAELA_join_setup( (*(&(ZUUAELA_n->T))), Source, &AVUAELA );
VUUAELA = AVUAELA;
break;
case 6: /* REF STRUCT(MODE172,MODE172)  */
BVUAELA_f = (YUUAELA.data.mode6);
{ 
CVUAELA_jfn = (A_HEAP(A68_215 ));
 /* line 4624: */
DVUAELA = A_HEAP(A68_218 ) ;
EVUAELA = (&(CVUAELA_jfn->Joined)) ;
(*EVUAELA) = (*DVUAELA) = QRCAELA_jfalse;
 /* line 4625: */
VUUAELA = A_UNITE(FVUAELA,mode2,2,CVUAELA_jfn);
} 
break;
case 7: /* REF STRUCT(MODE172,MODE185)  */
GVUAELA_r = (YUUAELA.data.mode7);
{ 
HVUAELA_size = HDRAELA_giveint((*(&(GVUAELA_r->Size))));
 /* line 4626: */
IVUAELA_joinrow = (A_HEAP(A68_216 ));
 /* line 4627: */
 /* line 4628: */
 /* line 4629: */
if ( (HVUAELA_size<1) )
{ 
 /* line 4630: */
KVUAELA = A_HEAP(A68_218 ) ;
(*KVUAELA) = RRCAELA_jcheck ;
VUUAELA = A_UNITE(LVUAELA,mode5,5,KVUAELA);
} 
else
{ 
A_CLOSURE( NVUAELA_generator, OVUAELA_generator, PVUAELA_generator );
(( PVUAELA_generator * ) ( NVUAELA_generator.nonlocals )) -> HVUAELA_size = HVUAELA_size;
A_CALLPROC(NVUAELA_generator,(A68_FALSE, &SVUAELA),(A68_FALSE, &SVUAELA,(NVUAELA_generator).nonlocals));
JVUAELA_bb = SVUAELA;
 /* line 4631: */
 /* line 4632: */
UVUAELA = HVUAELA_size;
for ( TVUAELA_i = 1;
TVUAELA_i <= UVUAELA;
TVUAELA_i += 1 )
{ 
TUUAELA_join_setup( (*(&(GVUAELA_r->T))), Source, &VVUAELA );
WVUAELA = A_HEAP(A68_210 ) ;
XVUAELA = (&A_VINDEX(JVUAELA_bb,TVUAELA_i)) ;
(*XVUAELA) = (*WVUAELA) = VVUAELA;
}
 /* line 4633: */
YVUAELA = (&(IVUAELA_joinrow->Jrow)) ;
(*YVUAELA) = JVUAELA_bb;
 /* line 4634: */
 /* line 4635: */
 /* line 4636: */
 /* line 4637: */
VUUAELA = A_UNITE(ZVUAELA,mode3,3,IVUAELA_joinrow);
} 
} 
break;
case 3: /* REF STRUCT(MODE172,REF MODE175)  */
AWUAELA_s = (YUUAELA.data.mode3);
{ 
A_CLOSURE( DWUAELA_join_st, EWUAELA_join_st, FWUAELA_join_st );
(( FWUAELA_join_st * ) ( DWUAELA_join_st.nonlocals )) -> Source = Source;
(( FWUAELA_join_st * ) ( DWUAELA_join_st.nonlocals )) -> DWUAELA_join_st = DWUAELA_join_st;
 /* line 4644: */
 /* line 4645: */
 /* line 4646: */
MWUAELA = A_CALLPROC(DWUAELA_join_st,(AWUAELA_s),(AWUAELA_s,(DWUAELA_join_st).nonlocals)) ;
VUUAELA = A_UNITE(LWUAELA,mode1,1,MWUAELA);
} 
break;
case 9: /* REF STRUCT(MODE185,MODE172)  */
NWUAELA_ts = (YUUAELA.data.mode9);
OWUAELA.T = (*(&(NWUAELA_ts->Tstring)));
OWUAELA.Size = (*(&(NWUAELA_ts->Size)));
 /* line 4647: */
 /* line 4648: */
PWUAELA = A_HEAP(A68_179 ) ;
(*PWUAELA) = OWUAELA ;
TUUAELA_join_setup( A_UNITE(QWUAELA,mode7,7,PWUAELA), Source, &RWUAELA );
VUUAELA = RWUAELA;
break;
case 8: /* REF STRUCT(MODE172)  */
SWUAELA_tb = (YUUAELA.data.mode8);
 /* line 4649: */
TUUAELA_join_setup( (*(&(SWUAELA_tb->Tbracket))), Source, &TWUAELA );
VUUAELA = TWUAELA;
break;
case 12: /* STRUCT(INT)  */
 /* line 4650: */
UWUAELA = A_HEAP(A68_218 ) ;
(*UWUAELA) = TRCAELA_jvoid ;
VUUAELA = A_UNITE(VWUAELA,mode5,5,UWUAELA);
break;
case 5: /* STRUCT(INT)  */
 /* line 4651: */
WWUAELA = A_HEAP(A68_218 ) ;
(*WWUAELA) = SRCAELA_jfault ;
VUUAELA = A_UNITE(XWUAELA,mode5,5,WWUAELA);
break;
case 10: /* STRUCT(INT)  */
YWUAELA_f = (YUUAELA.data.mode10);
 /* line 4652: */
VUUAELA = A_UNITE(ZWUAELA,mode7,7,DRCAELA_flt);
break;
default: 
if ( Source )
{ 
AXUAELA = PRCAELA_jtrue;
} 
else
{ 
 /* line 4653: */
AXUAELA = QRCAELA_jfalse;
} 
 /* line 4654: */
BXUAELA = A_HEAP(A68_218 ) ;
(*BXUAELA) = AXUAELA ;
VUUAELA = A_UNITE(CXUAELA,mode5,5,BXUAELA);
break;
} 
} 
A_PROC_EXIT(join_setup);
*ReturnedValue = (VUUAELA);
return;
} 
#undef NL

A68_VOID  GXUAELA_makedecs(A68_171 * D, A68_INT  Origin, A68_167 * Fd)
{ 
A68_493  LXUAELA_makeids;   /* proc value of non-global proc */
A_PROC_ENTRY(makedecs);
 /* line 4657: */
 /* line 4658: */
{ 
A_CLOSURE( LXUAELA_makeids, MXUAELA_makeids, NXUAELA_makeids );
(( NXUAELA_makeids * ) ( LXUAELA_makeids.nonlocals )) -> LXUAELA_makeids = LXUAELA_makeids;
(( NXUAELA_makeids * ) ( LXUAELA_makeids.nonlocals )) -> Fd = Fd;
 /* line 4676: */
 /* line 4677: */
if ( (D!=FQCAELA_nildecs) )
{ 
GXUAELA_makedecs((*(&(D->Rest))), Origin, Fd);
 /* line 4678: */
 /* line 4679: */
 /* line 4680: */
A_CALLPROC(LXUAELA_makeids,((*(&(D->T))), Origin, (*(&(D->Ids)))),((*(&(D->T))), Origin, (*(&(D->Ids))),(LXUAELA_makeids).nonlocals));
} 
} 
A_PROC_EXIT(makedecs);
return;
} 
#undef NL

A_STATIC A68_BOOL  FYUAELA_check_joined(A68_210 * J)
{ 
A68_495  IYUAELA_check_all_jst;   /* proc value of non-global proc */
A68_210  QYUAELA;  /* united object - for case conformity */
A68_214 * RYUAELA_jst;
A68_BOOL  SYUAELA;  /* clause result */
A68_215 * TYUAELA_jfn;
A68_217 * UYUAELA_jio;
A68_BOOL  VYUAELA;  /* optbool result */
A68_216 * WYUAELA_jr;
A68_BOOL  XYUAELA_ans;
A68_INT  YYUAELA_i;
A68_INT  ZYUAELA;  /* to part of loop */
A68_BOOL  AZUAELA;  /* optbool result */
A68_221  BZUAELA;  /* OPERATORS - simple index */
A68_219 * CZUAELA_jr;
A68_218 * DZUAELA_b;
A_PROC_ENTRY(check_joined);
 /* line 4685: */
{ 
A_CLOSURE( IYUAELA_check_all_jst, JYUAELA_check_all_jst, KYUAELA_check_all_jst );
(( KYUAELA_check_all_jst * ) ( IYUAELA_check_all_jst.nonlocals )) -> IYUAELA_check_all_jst = IYUAELA_check_all_jst;
 /* line 4690: */
 /* line 4692: */
 /* line 4693: */
QYUAELA = (*J) ;
switch ( QYUAELA.mode )
{ 
case 1: /* REF STRUCT(MODE210,REF MODE214)  */
RYUAELA_jst = (QYUAELA.data.mode1);
 /* line 4694: */
SYUAELA = A_CALLPROC(IYUAELA_check_all_jst,(RYUAELA_jst),(RYUAELA_jst,(IYUAELA_check_all_jst).nonlocals));
break;
case 2: /* REF STRUCT(MODE218)  */
TYUAELA_jfn = (QYUAELA.data.mode2);
 /* line 4695: */
SYUAELA = OYUAELA_test1((&(TYUAELA_jfn->Joined)));
break;
case 4: /* REF STRUCT(MODE210,MODE210)  */
UYUAELA_jio = (QYUAELA.data.mode4);
VYUAELA = FYUAELA_check_joined((&(UYUAELA_jio->Source)));
if ( VYUAELA )
{VYUAELA = FYUAELA_check_joined((&(UYUAELA_jio->Sink)));
}
 /* line 4696: */
SYUAELA = VYUAELA;
break;
case 3: /* REF STRUCT(REF MODE221)  */
WYUAELA_jr = (QYUAELA.data.mode3);
{ 
XYUAELA_ans = A68_TRUE;
 /* line 4697: */
 /* line 4698: */
 /* line 4699: */
if ( ((*(&(WYUAELA_jr->Jrow))).upb<1) )
{ 
/*SKIP*/;
} 
else
{ 
 /* line 4700: */
ZYUAELA = (*(&(WYUAELA_jr->Jrow))).upb;
for ( YYUAELA_i = 1;
YYUAELA_i <= ZYUAELA;
YYUAELA_i += 1 )
{ 
AZUAELA = XYUAELA_ans;
if ( AZUAELA )
{BZUAELA = (*(&(WYUAELA_jr->Jrow))) ;
AZUAELA = FYUAELA_check_joined((&A_VINDEX(BZUAELA,YYUAELA_i)));
}
XYUAELA_ans = AZUAELA;
}
 /* line 4701: */
} 
 /* line 4702: */
 /* line 4703: */
 /* line 4704: */
SYUAELA = XYUAELA_ans;
} 
break;
case 6: /* REF STRUCT(MODE210,MODE220)  */
CZUAELA_jr = (QYUAELA.data.mode6);
 /* line 4705: */
SYUAELA = FYUAELA_check_joined((&(CZUAELA_jr->Jrep)));
break;
case 5: /* REF STRUCT(INT)  */
DZUAELA_b = (QYUAELA.data.mode5);
 /* line 4706: */
SYUAELA = OYUAELA_test1(DZUAELA_b);
break;
default: 
 /* line 4707: */
 /* line 4708: */
SYUAELA = A68_TRUE;
break;
} 
} 
A_PROC_EXIT(check_joined);
return( SYUAELA );
} 
#undef NL

A_STATIC A68_BOOL  FZUAELA_check_if_joined(A68_210 * J)
{ 
A68_495  IZUAELA_check_all_jst;   /* proc value of non-global proc */
A68_210  QZUAELA;  /* united object - for case conformity */
A68_214 * RZUAELA_jst;
A68_BOOL  SZUAELA;  /* clause result */
A68_215 * TZUAELA_jfn;
A68_217 * UZUAELA_jio;
A68_BOOL  VZUAELA;  /* optbool result */
A68_216 * WZUAELA_jr;
A68_BOOL  XZUAELA_ans;
A68_INT  YZUAELA_i;
A68_INT  ZZUAELA;  /* to part of loop */
A68_BOOL  AAVAELA;  /* optbool result */
A68_221  BAVAELA;  /* OPERATORS - simple index */
A68_219 * CAVAELA_jr;
A68_218 * DAVAELA_b;
A_PROC_ENTRY(check_if_joined);
 /* line 4712: */
{ 
A_CLOSURE( IZUAELA_check_all_jst, JZUAELA_check_all_jst, KZUAELA_check_all_jst );
(( KZUAELA_check_all_jst * ) ( IZUAELA_check_all_jst.nonlocals )) -> IZUAELA_check_all_jst = IZUAELA_check_all_jst;
 /* line 4717: */
 /* line 4719: */
 /* line 4720: */
QZUAELA = (*J) ;
switch ( QZUAELA.mode )
{ 
case 1: /* REF STRUCT(MODE210,REF MODE214)  */
RZUAELA_jst = (QZUAELA.data.mode1);
 /* line 4721: */
SZUAELA = A_CALLPROC(IZUAELA_check_all_jst,(RZUAELA_jst),(RZUAELA_jst,(IZUAELA_check_all_jst).nonlocals));
break;
case 2: /* REF STRUCT(MODE218)  */
TZUAELA_jfn = (QZUAELA.data.mode2);
 /* line 4722: */
SZUAELA = OZUAELA_test2((&(TZUAELA_jfn->Joined)));
break;
case 4: /* REF STRUCT(MODE210,MODE210)  */
UZUAELA_jio = (QZUAELA.data.mode4);
 /* line 4723: */
VZUAELA = FZUAELA_check_if_joined((&(UZUAELA_jio->Source)));
if ( VZUAELA )
{VZUAELA = FZUAELA_check_if_joined((&(UZUAELA_jio->Sink)));
}
 /* line 4724: */
SZUAELA = VZUAELA;
break;
case 3: /* REF STRUCT(REF MODE221)  */
WZUAELA_jr = (QZUAELA.data.mode3);
{ 
XZUAELA_ans = A68_FALSE;
 /* line 4725: */
 /* line 4726: */
 /* line 4727: */
if ( ((*(&(WZUAELA_jr->Jrow))).upb<1) )
{ 
/*SKIP*/;
} 
else
{ 
 /* line 4728: */
ZZUAELA = (*(&(WZUAELA_jr->Jrow))).upb;
for ( YZUAELA_i = 1;
YZUAELA_i <= ZZUAELA;
YZUAELA_i += 1 )
{ 
AAVAELA = XZUAELA_ans;
if ( ! AAVAELA )
{ /* line 4729: */
BAVAELA = (*(&(WZUAELA_jr->Jrow))) ;
AAVAELA = FZUAELA_check_if_joined((&A_VINDEX(BAVAELA,YZUAELA_i)));
}
XZUAELA_ans = AAVAELA;
}
 /* line 4730: */
} 
 /* line 4731: */
 /* line 4732: */
 /* line 4733: */
SZUAELA = XZUAELA_ans;
} 
break;
case 6: /* REF STRUCT(MODE210,MODE220)  */
CAVAELA_jr = (QZUAELA.data.mode6);
 /* line 4734: */
SZUAELA = FZUAELA_check_if_joined((&(CAVAELA_jr->Jrep)));
break;
case 5: /* REF STRUCT(INT)  */
DAVAELA_b = (QZUAELA.data.mode5);
 /* line 4735: */
SZUAELA = OZUAELA_test2(DAVAELA_b);
break;
default: 
 /* line 4736: */
 /* line 4737: */
SZUAELA = A68_FALSE;
break;
} 
} 
A_PROC_EXIT(check_if_joined);
return( SZUAELA );
} 
#undef NL

A68_BOOL  FAVAELA_has_join_check(A68_210 * J)
{ 
A68_495  IAVAELA_check_all_jst;   /* proc value of non-global proc */
A68_210  QAVAELA;  /* united object - for case conformity */
A68_214 * RAVAELA_jst;
A68_BOOL  SAVAELA;  /* clause result */
A68_215 * TAVAELA_jfn;
A68_217 * UAVAELA_jio;
A68_BOOL  VAVAELA;  /* optbool result */
A68_216 * WAVAELA_jr;
A68_BOOL  XAVAELA_ans;
A68_INT  YAVAELA_i;
A68_INT  ZAVAELA;  /* to part of loop */
A68_BOOL  ABVAELA;  /* optbool result */
A68_221  BBVAELA;  /* OPERATORS - simple index */
A68_219 * CBVAELA_jr;
A68_218 * DBVAELA_b;
A_PROC_ENTRY(has_join_check);
 /* line 4740: */
{ 
A_CLOSURE( IAVAELA_check_all_jst, JAVAELA_check_all_jst, KAVAELA_check_all_jst );
(( KAVAELA_check_all_jst * ) ( IAVAELA_check_all_jst.nonlocals )) -> IAVAELA_check_all_jst = IAVAELA_check_all_jst;
 /* line 4745: */
 /* line 4747: */
 /* line 4748: */
QAVAELA = (*J) ;
switch ( QAVAELA.mode )
{ 
case 1: /* REF STRUCT(MODE210,REF MODE214)  */
RAVAELA_jst = (QAVAELA.data.mode1);
 /* line 4749: */
SAVAELA = A_CALLPROC(IAVAELA_check_all_jst,(RAVAELA_jst),(RAVAELA_jst,(IAVAELA_check_all_jst).nonlocals));
break;
case 2: /* REF STRUCT(MODE218)  */
TAVAELA_jfn = (QAVAELA.data.mode2);
 /* line 4750: */
SAVAELA = OAVAELA_test2((&(TAVAELA_jfn->Joined)));
break;
case 4: /* REF STRUCT(MODE210,MODE210)  */
UAVAELA_jio = (QAVAELA.data.mode4);
 /* line 4751: */
VAVAELA = FAVAELA_has_join_check((&(UAVAELA_jio->Source)));
if ( VAVAELA )
{VAVAELA = FAVAELA_has_join_check((&(UAVAELA_jio->Sink)));
}
 /* line 4752: */
SAVAELA = VAVAELA;
break;
case 3: /* REF STRUCT(REF MODE221)  */
WAVAELA_jr = (QAVAELA.data.mode3);
{ 
XAVAELA_ans = A68_FALSE;
 /* line 4753: */
 /* line 4754: */
 /* line 4755: */
if ( ((*(&(WAVAELA_jr->Jrow))).upb<1) )
{ 
/*SKIP*/;
} 
else
{ 
 /* line 4756: */
ZAVAELA = (*(&(WAVAELA_jr->Jrow))).upb;
for ( YAVAELA_i = 1;
YAVAELA_i <= ZAVAELA;
YAVAELA_i += 1 )
{ 
ABVAELA = XAVAELA_ans;
if ( ! ABVAELA )
{ /* line 4757: */
BBVAELA = (*(&(WAVAELA_jr->Jrow))) ;
ABVAELA = FAVAELA_has_join_check((&A_VINDEX(BBVAELA,YAVAELA_i)));
}
XAVAELA_ans = ABVAELA;
}
 /* line 4758: */
} 
 /* line 4759: */
 /* line 4760: */
 /* line 4761: */
SAVAELA = XAVAELA_ans;
} 
break;
case 6: /* REF STRUCT(MODE210,MODE220)  */
CBVAELA_jr = (QAVAELA.data.mode6);
 /* line 4762: */
SAVAELA = FAVAELA_has_join_check((&(CBVAELA_jr->Jrep)));
break;
case 5: /* REF STRUCT(INT)  */
DBVAELA_b = (QAVAELA.data.mode5);
 /* line 4763: */
SAVAELA = OAVAELA_test2(DBVAELA_b);
break;
default: 
 /* line 4764: */
 /* line 4765: */
SAVAELA = A68_FALSE;
break;
} 
} 
A_PROC_EXIT(has_join_check);
return( SAVAELA );
} 
#undef NL

A68_VOID  FBVAELA_check_joins(A68_198  Idinfo)
{ 
A68_199  GBVAELA;  /* united object - for case conformity */
A68_204 * HBVAELA_ds;
A68_46  KBVAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_46  LBVAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_46  OBVAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_172  PBVAELA;  /* united object - for case conformity */
A68_182  QBVAELA_f;
A68_BOOL  RBVAELA;  /* clause result */
A68_263  SBVAELA;  /* OPERATORS - mode -> union mode */
A68_262  TBVAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_263  UBVAELA;  /* OPERATORS - mode -> union mode */
A68_262  VBVAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_263  WBVAELA;  /* OPERATORS - mode -> union mode */
A68_262  XBVAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_199  YBVAELA;  /* united object - for case conformity */
A68_204 * ZBVAELA_dids;
A68_BOOL  ACVAELA;  /* optbool result */
A68_283  BCVAELA;  /* collateral clause result */
A68_283 * CCVAELA;  /* YIELD */
A_PROC_ENTRY(check_joins);
 /* line 4769: */
 /* line 4770: */
GBVAELA = Idinfo.U ;
switch ( GBVAELA.mode )
{ 
case 5: /* REF STRUCT(INT,INT,REF MODE209,MODE172,MODE210,MODE210,MODE211,MODE211)  */
HBVAELA_ds = (GBVAELA.data.mode5);
{ 
LKPAELA_fp3 = Idinfo.Id;
 /* line 4771: */
 /* line 4772: */
if ( NHPAELA_source_sink_out )
{ 
UQPAELA_fault(230, A_HVEC(KBVAELA,JBVAELA,A68_VC ));
 /* line 4773: */
UQPAELA_fault(230, A_HVEC(LBVAELA,LKPAELA_fp3,A68_VC ));
 /* line 4774: */
UQPAELA_fault(230, A_HVEC(OBVAELA,NBVAELA,A68_VC ));
 /* line 4775: */
HMDAELA_print_joinup((&(HBVAELA_ds->Jsource)), 0);
 /* line 4776: */
 /* line 4777: */
HMDAELA_print_joinup((&(HBVAELA_ds->Jsink)), 10);
} 
 /* line 4778: */
PBVAELA = RLPAELA_type ;
switch ( PBVAELA.mode )
{ 
case 10: /* STRUCT(INT)  */
QBVAELA_f = (PBVAELA.data.mode10);
RBVAELA = A68_FALSE;
break;
default: 
 /* line 4779: */
RBVAELA = A68_TRUE;
break;
} 
if ( RBVAELA )
{ 
 /* line 4780: */
if ( FYUAELA_check_joined((&(HBVAELA_ds->Jsource))) )
{ 
 /* line 4781: */
 /* line 4782: */
if ( FYUAELA_check_joined((&(HBVAELA_ds->Jsink))) )
{ 
/*SKIP*/;
} 
else
{ 
 /* line 4783: */
 /* line 4784: */
 /* line 4785: */
SZPAELA_faultp(177, A_HVEC(TBVAELA,A_UNITE(SBVAELA,mode13,13,LKPAELA_fp3),A68_263 ));
} 
} 
else
{ 
 /* line 4786: */
if ( FYUAELA_check_joined((&(HBVAELA_ds->Jsink))) )
{ 
 /* line 4787: */
 /* line 4788: */
SZPAELA_faultp(178, A_HVEC(VBVAELA,A_UNITE(UBVAELA,mode13,13,LKPAELA_fp3),A68_263 ));
} 
else
{ 
 /* line 4789: */
 /* line 4790: */
 /* line 4791: */
 /* line 4792: */
SZPAELA_faultp(179, A_HVEC(XBVAELA,A_UNITE(WBVAELA,mode13,13,LKPAELA_fp3),A68_263 ));
} 
} 
} 
 /* line 4793: */
 /* line 4794: */
YBVAELA = Idinfo.U ;
switch ( YBVAELA.mode )
{ 
case 5: /* REF STRUCT(INT,INT,REF MODE209,MODE172,MODE210,MODE210,MODE211,MODE211)  */
ZBVAELA_dids = (YBVAELA.data.mode5);
 /* line 4795: */
 /* line 4796: */
ACVAELA = FAVAELA_has_join_check((&(ZBVAELA_dids->Jsource)));
if ( ! ACVAELA )
{ /* line 4797: */
ACVAELA = FAVAELA_has_join_check((&(ZBVAELA_dids->Jsink)));
}
if ( ACVAELA )
{ 
 /* line 4798: */
BCVAELA.Decno = (*(&(ZBVAELA_dids->Decno)));
 /* line 4799: */
BCVAELA.Rest = AMPAELA_decnocheck;
 /* line 4800: */
 /* line 4801: */
CCVAELA = A_HEAP(A68_283 ) ;
(*CCVAELA) = BCVAELA ;
AMPAELA_decnocheck = CCVAELA;
} 
break;
default: 
 /* line 4802: */
 /* line 4803: */
/*SKIP*/;
break;
} 
} 
break;
default: 
/*SKIP*/;
break;
} 
A_PROC_EXIT(check_joins);
return;
} 
#undef NL

A_STATIC A68_BOOL  ECVAELA_is_fntype_joined(A68_210 * J)
{ 
A68_210  FCVAELA;  /* united object - for case conformity */
A68_215 * GCVAELA_jfn;
A68_BOOL  HCVAELA;  /* clause result */
A68_217 * ICVAELA_jio;
A68_BOOL  JCVAELA;  /* optbool result */
A68_216 * KCVAELA_jr;
A68_BOOL  LCVAELA_ans;
A68_INT  MCVAELA_i;
A68_INT  NCVAELA;  /* to part of loop */
A68_BOOL  OCVAELA;  /* optbool result */
A68_221  PCVAELA;  /* OPERATORS - simple index */
A68_214 * QCVAELA_js;
A68_214 * RCVAELA_jst;
A68_BOOL  SCVAELA_ans;
A68_BOOL  TCVAELA;  /* optbool result */
A68_219 * UCVAELA_jr;
A_PROC_ENTRY(is_fntype_joined);
 /* line 4806: */
 /* line 4807: */
FCVAELA = (*J) ;
switch ( FCVAELA.mode )
{ 
case 2: /* REF STRUCT(MODE218)  */
GCVAELA_jfn = (FCVAELA.data.mode2);
if ( YTDAELA_joinequal((*(&(GCVAELA_jfn->Joined))), PRCAELA_jtrue) )
{ 
HCVAELA = A68_TRUE;
} 
else
{ 
 /* line 4808: */
HCVAELA = A68_FALSE;
} 
break;
case 4: /* REF STRUCT(MODE210,MODE210)  */
ICVAELA_jio = (FCVAELA.data.mode4);
 /* line 4809: */
JCVAELA = ECVAELA_is_fntype_joined((&(ICVAELA_jio->Source)));
if ( ! JCVAELA )
{JCVAELA = FZUAELA_check_if_joined((&(ICVAELA_jio->Sink)));
}
 /* line 4810: */
HCVAELA = JCVAELA;
break;
case 3: /* REF STRUCT(REF MODE221)  */
KCVAELA_jr = (FCVAELA.data.mode3);
{ 
LCVAELA_ans = A68_FALSE;
 /* line 4811: */
 /* line 4812: */
NCVAELA = (*(&(KCVAELA_jr->Jrow))).upb;
for ( MCVAELA_i = 1;
MCVAELA_i <= NCVAELA;
MCVAELA_i += 1 )
{ 
OCVAELA = LCVAELA_ans;
if ( ! OCVAELA )
{PCVAELA = (*(&(KCVAELA_jr->Jrow))) ;
OCVAELA = ECVAELA_is_fntype_joined((&A_VINDEX(PCVAELA,MCVAELA_i)));
}
LCVAELA_ans = OCVAELA;
}
 /* line 4813: */
 /* line 4814: */
HCVAELA = LCVAELA_ans;
} 
break;
case 1: /* REF STRUCT(MODE210,REF MODE214)  */
QCVAELA_js = (FCVAELA.data.mode1);
{ 
RCVAELA_jst = QCVAELA_js;
 /* line 4815: */
SCVAELA_ans = A68_FALSE;
 /* line 4816: */
for ( ;; )
{ 
 /* line 4817: */
if ( !((RCVAELA_jst!=PQCAELA_niljoinst)) ) break;
TCVAELA = SCVAELA_ans;
if ( ! TCVAELA )
{TCVAELA = ECVAELA_is_fntype_joined((&(RCVAELA_jst->Jst)));
}
SCVAELA_ans = TCVAELA;
 /* line 4818: */
 /* line 4819: */
RCVAELA_jst = (*(&(RCVAELA_jst->Rest)));
}
 /* line 4820: */
 /* line 4821: */
HCVAELA = SCVAELA_ans;
} 
break;
case 6: /* REF STRUCT(MODE210,MODE220)  */
UCVAELA_jr = (FCVAELA.data.mode6);
 /* line 4822: */
HCVAELA = ECVAELA_is_fntype_joined((&(UCVAELA_jr->Jrep)));
break;
default: 
 /* line 4823: */
HCVAELA = A68_FALSE;
break;
} 
A_PROC_EXIT(is_fntype_joined);
return( HCVAELA );
} 
#undef NL

A68_BOOL  WCVAELA_has_fntype(A68_210 * J)
{ 
A68_210  XCVAELA;  /* united object - for case conformity */
A68_215 * YCVAELA_jfn;
A68_BOOL  ZCVAELA;  /* clause result */
A68_217 * ADVAELA_jio;
A68_216 * BDVAELA_jr;
A68_BOOL  CDVAELA_ans;
A68_INT  DDVAELA_i;
A68_INT  EDVAELA;  /* to part of loop */
A68_BOOL  FDVAELA;  /* optbool result */
A68_221  GDVAELA;  /* OPERATORS - simple index */
A68_214 * HDVAELA_js;
A68_214 * IDVAELA_jst;
A68_BOOL  JDVAELA_ans;
A68_BOOL  KDVAELA;  /* optbool result */
A68_219 * LDVAELA_jr;
A_PROC_ENTRY(has_fntype);
 /* line 4826: */
 /* line 4827: */
XCVAELA = (*J) ;
switch ( XCVAELA.mode )
{ 
case 2: /* REF STRUCT(MODE218)  */
YCVAELA_jfn = (XCVAELA.data.mode2);
 /* line 4828: */
ZCVAELA = A68_TRUE;
break;
case 4: /* REF STRUCT(MODE210,MODE210)  */
ADVAELA_jio = (XCVAELA.data.mode4);
 /* line 4829: */
ZCVAELA = A68_TRUE;
break;
case 3: /* REF STRUCT(REF MODE221)  */
BDVAELA_jr = (XCVAELA.data.mode3);
{ 
CDVAELA_ans = A68_FALSE;
 /* line 4830: */
 /* line 4831: */
EDVAELA = (*(&(BDVAELA_jr->Jrow))).upb;
for ( DDVAELA_i = 1;
DDVAELA_i <= EDVAELA;
DDVAELA_i += 1 )
{ 
FDVAELA = CDVAELA_ans;
if ( ! FDVAELA )
{GDVAELA = (*(&(BDVAELA_jr->Jrow))) ;
FDVAELA = WCVAELA_has_fntype((&A_VINDEX(GDVAELA,DDVAELA_i)));
}
CDVAELA_ans = FDVAELA;
}
 /* line 4832: */
 /* line 4833: */
ZCVAELA = CDVAELA_ans;
} 
break;
case 1: /* REF STRUCT(MODE210,REF MODE214)  */
HDVAELA_js = (XCVAELA.data.mode1);
{ 
IDVAELA_jst = HDVAELA_js;
 /* line 4834: */
JDVAELA_ans = A68_FALSE;
 /* line 4835: */
for ( ;; )
{ 
 /* line 4836: */
if ( !((IDVAELA_jst!=PQCAELA_niljoinst)) ) break;
KDVAELA = JDVAELA_ans;
if ( ! KDVAELA )
{KDVAELA = WCVAELA_has_fntype((&(IDVAELA_jst->Jst)));
}
JDVAELA_ans = KDVAELA;
 /* line 4837: */
 /* line 4838: */
IDVAELA_jst = (*(&(IDVAELA_jst->Rest)));
}
 /* line 4839: */
 /* line 4840: */
ZCVAELA = JDVAELA_ans;
} 
break;
case 6: /* REF STRUCT(MODE210,MODE220)  */
LDVAELA_jr = (XCVAELA.data.mode6);
 /* line 4841: */
ZCVAELA = WCVAELA_has_fntype((&(LDVAELA_jr->Jrep)));
break;
default: 
 /* line 4842: */
ZCVAELA = A68_FALSE;
break;
} 
A_PROC_EXIT(has_fntype);
return( ZCVAELA );
} 
#undef NL

A68_BOOL  NDVAELA_check_if_output_joined(A68_171 * Outputs)
{ 
A68_BOOL  ODVAELA_outputs_joined;
A68_171 * PDVAELA_outdecs;
A68_BOOL  QDVAELA;  /* optbool result */
A68_244 * RDVAELA_idsout;
A68_BOOL  SDVAELA;  /* optbool result */
A68_199  TDVAELA;  /* united object - for case conformity */
A68_204 * UDVAELA_ds;
A68_BOOL  VDVAELA;  /* optbool result */
A68_BOOL  WDVAELA;  /* clause result */
A_PROC_ENTRY(check_if_output_joined);
 /* line 4845: */
 /* line 4846: */
{ 
ODVAELA_outputs_joined = A68_FALSE;
 /* line 4847: */
PDVAELA_outdecs = Outputs;
 /* line 4848: */
for ( ;; )
{ 
 /* line 4849: */
QDVAELA = (PDVAELA_outdecs!=FQCAELA_nildecs);
if ( QDVAELA )
{QDVAELA = !ODVAELA_outputs_joined;
}
if ( !(QDVAELA) ) break;
RDVAELA_idsout = (*(&(PDVAELA_outdecs->Ids)));
 /* line 4850: */
for ( ;; )
{ 
 /* line 4851: */
SDVAELA = (RDVAELA_idsout!=CQCAELA_nilids);
if ( SDVAELA )
{SDVAELA = !ODVAELA_outputs_joined;
}
if ( !(SDVAELA) ) break;
 /* line 4852: */
TDVAELA = (*(&((*(&(RDVAELA_idsout->Idinfo)))->U))) ;
switch ( TDVAELA.mode )
{ 
case 5: /* REF STRUCT(INT,INT,REF MODE209,MODE172,MODE210,MODE210,MODE211,MODE211)  */
UDVAELA_ds = (TDVAELA.data.mode5);
 /* line 4853: */
 /* line 4854: */
VDVAELA = ECVAELA_is_fntype_joined((&(UDVAELA_ds->Jsource)));
if ( ! VDVAELA )
{ /* line 4855: */
VDVAELA = FZUAELA_check_if_joined((&(UDVAELA_ds->Jsink)));
}
 /* line 4856: */
ODVAELA_outputs_joined = VDVAELA;
break;
default: 
/*SKIP*/;
break;
} 
 /* line 4857: */
 /* line 4858: */
RDVAELA_idsout = (*(&(RDVAELA_idsout->Rest)));
}
 /* line 4859: */
 /* line 4860: */
PDVAELA_outdecs = (*(&(PDVAELA_outdecs->Rest)));
}
 /* line 4861: */
 /* line 4862: */
WDVAELA = ODVAELA_outputs_joined;
} 
A_PROC_EXIT(check_if_output_joined);
return( WDVAELA );
} 
#undef NL

A68_VOID  AEVAELA_mark_join(A68_210 * Joinup, A68_218  Jtest, A68_BOOL  Source)
{ 
A68_499  EEVAELA_set_check;   /* proc value of non-global proc */
A68_210  LEVAELA;  /* united object - for case conformity */
A68_215 * MEVAELA_jfn;
A68_218  NEVAELA;  /* avoid structure result */
A68_218 * OEVAELA;  /* YIELD */
A68_218 * PEVAELA;  /* YIELD */
A68_217 * QEVAELA_jio;
A68_216 * REVAELA_jr;
A68_INT  SEVAELA_i;
A68_INT  TEVAELA;  /* to part of loop */
A68_221  UEVAELA;  /* OPERATORS - simple index */
A68_214 * VEVAELA_js;
A68_500  YEVAELA_mark_jst;   /* proc value of non-global proc */
A68_219 * BFVAELA_jr;
A68_218 * CFVAELA_b;
A68_218  DFVAELA;  /* avoid structure result */
A_PROC_ENTRY(mark_join);
 /* line 4865: */
{ 
A_CLOSURE( EEVAELA_set_check, FEVAELA_set_check, GEVAELA_set_check );
(( GEVAELA_set_check * ) ( EEVAELA_set_check.nonlocals )) -> Jtest = Jtest;
(( GEVAELA_set_check * ) ( EEVAELA_set_check.nonlocals )) -> Source = Source;
 /* line 4882: */
 /* line 4883: */
LEVAELA = (*Joinup) ;
switch ( LEVAELA.mode )
{ 
case 2: /* REF STRUCT(MODE218)  */
MEVAELA_jfn = (LEVAELA.data.mode2);
 /* line 4884: */
 /* line 4885: */
A_CALLPROC(EEVAELA_set_check,((&(MEVAELA_jfn->Joined)), A68_TRUE, &NEVAELA),((&(MEVAELA_jfn->Joined)), A68_TRUE, &NEVAELA,(EEVAELA_set_check).nonlocals));
OEVAELA = A_HEAP(A68_218 ) ;
PEVAELA = (&(MEVAELA_jfn->Joined)) ;
(*PEVAELA) = (*OEVAELA) = NEVAELA;
break;
case 4: /* REF STRUCT(MODE210,MODE210)  */
QEVAELA_jio = (LEVAELA.data.mode4);
{ 
AEVAELA_mark_join((&(QEVAELA_jio->Source)), Jtest, A68_TRUE);
 /* line 4886: */
 /* line 4887: */
AEVAELA_mark_join((&(QEVAELA_jio->Sink)), Jtest, A68_FALSE);
} 
break;
case 3: /* REF STRUCT(REF MODE221)  */
REVAELA_jr = (LEVAELA.data.mode3);
 /* line 4888: */
TEVAELA = (*(&(REVAELA_jr->Jrow))).upb;
for ( SEVAELA_i = 1;
SEVAELA_i <= TEVAELA;
SEVAELA_i += 1 )
{ 
UEVAELA = (*(&(REVAELA_jr->Jrow))) ;
AEVAELA_mark_join((&A_VINDEX(UEVAELA,SEVAELA_i)), Jtest, Source);
}
 /* line 4889: */
break;
case 1: /* REF STRUCT(MODE210,REF MODE214)  */
VEVAELA_js = (LEVAELA.data.mode1);
{ 
A_CLOSURE( YEVAELA_mark_jst, ZEVAELA_mark_jst, AFVAELA_mark_jst );
(( AFVAELA_mark_jst * ) ( YEVAELA_mark_jst.nonlocals )) -> Jtest = Jtest;
(( AFVAELA_mark_jst * ) ( YEVAELA_mark_jst.nonlocals )) -> Source = Source;
(( AFVAELA_mark_jst * ) ( YEVAELA_mark_jst.nonlocals )) -> YEVAELA_mark_jst = YEVAELA_mark_jst;
 /* line 4894: */
 /* line 4895: */
 /* line 4896: */
A_CALLPROC(YEVAELA_mark_jst,(VEVAELA_js),(VEVAELA_js,(YEVAELA_mark_jst).nonlocals));
} 
break;
case 6: /* REF STRUCT(MODE210,MODE220)  */
BFVAELA_jr = (LEVAELA.data.mode6);
 /* line 4897: */
AEVAELA_mark_join((&(BFVAELA_jr->Jrep)), Jtest, Source);
break;
case 5: /* REF STRUCT(INT)  */
CFVAELA_b = (LEVAELA.data.mode5);
 /* line 4898: */
 /* line 4899: */
A_CALLPROC(EEVAELA_set_check,(CFVAELA_b, A68_FALSE, &DFVAELA),(CFVAELA_b, A68_FALSE, &DFVAELA,(EEVAELA_set_check).nonlocals));
(*CFVAELA_b) = DFVAELA;
break;
default: 
 /* line 4900: */
/*SKIP*/;
break;
} 
} 
A_PROC_EXIT(mark_join);
return;
} 
#undef NL

A68_VOID  HFVAELA_check_off(A68_210 * Jup, A68_BOOL  Source, A68_BOOL  Output)
{ 
A68_172  IFVAELA;  /* united object - for case conformity */
A68_182  JFVAELA_f;
A68_BOOL  KFVAELA;  /* optbool result */
A_PROC_ENTRY(check_off);
 /* line 4903: */
 /* line 4904: */
IFVAELA = RLPAELA_type ;
switch ( IFVAELA.mode )
{ 
case 10: /* STRUCT(INT)  */
JFVAELA_f = (IFVAELA.data.mode10);
 /* line 4905: */
AEVAELA_mark_join(Jup, SRCAELA_jfault, A68_TRUE);
break;
default: 
 /* line 4906: */
if ( Output )
{ 
 /* line 4907: */
AEVAELA_mark_join(Jup, QRCAELA_jfalse, Source);
} 
else
{ 
 /* line 4908: */
if ( ECVAELA_is_fntype_joined(Jup) )
{ 
 /* line 4909: */
UQPAELA_fault(181, VJAAOSI_nullmsg);
} 
else
{ 
KFVAELA = !Source;
if ( KFVAELA )
{ /* line 4910: */
KFVAELA = FZUAELA_check_if_joined(Jup);
}
if ( KFVAELA )
{ 
 /* line 4911: */
 /* line 4912: */
UQPAELA_fault(182, VJAAOSI_nullmsg);
} 
else
{ 
 /* line 4913: */
 /* line 4914: */
AEVAELA_mark_join(Jup, QRCAELA_jfalse, Source);
} 
} 
} 
break;
} 
A_PROC_EXIT(check_off);
return;
} 
#undef NL

A68_VOID  MFVAELA_joinsttorow(A68_214 * Jst, A68_210  *ReturnedValue)
{ 
A68_INT  NFVAELA_count;
A68_500  PFVAELA_jcount;   /* proc value of non-global proc */
A68_490  TFVAELA_generator;   /* proc value of non-global proc */
A68_221  ZFVAELA;  /* avoid structure result */
A68_221  YFVAELA_jup;
A68_500  BGVAELA_jass;   /* proc value of non-global proc */
A68_216 * HGVAELA_jr;
A68_221 * IGVAELA;  /* YIELD */
A68_210  JGVAELA;  /* clause result */
A68_210  KGVAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(joinsttorow);
 /* line 4917: */
{ 
NFVAELA_count = 0;
 /* line 4918: */
A_CLOSURE( PFVAELA_jcount, QFVAELA_jcount, RFVAELA_jcount );
(( RFVAELA_jcount * ) ( PFVAELA_jcount.nonlocals )) -> NFVAELA_count = (&NFVAELA_count);
(( RFVAELA_jcount * ) ( PFVAELA_jcount.nonlocals )) -> PFVAELA_jcount = PFVAELA_jcount;
 /* line 4920: */
A_CALLPROC(PFVAELA_jcount,(Jst),(Jst,(PFVAELA_jcount).nonlocals));
 /* line 4921: */
A_CLOSURE( TFVAELA_generator, UFVAELA_generator, VFVAELA_generator );
(( VFVAELA_generator * ) ( TFVAELA_generator.nonlocals )) -> NFVAELA_count = (&NFVAELA_count);
A_CALLPROC(TFVAELA_generator,(A68_FALSE, &ZFVAELA),(A68_FALSE, &ZFVAELA,(TFVAELA_generator).nonlocals));
YFVAELA_jup = ZFVAELA;
 /* line 4922: */
NFVAELA_count+=1;
 /* line 4923: */
A_CLOSURE( BGVAELA_jass, CGVAELA_jass, DGVAELA_jass );
(( DGVAELA_jass * ) ( BGVAELA_jass.nonlocals )) -> BGVAELA_jass = BGVAELA_jass;
(( DGVAELA_jass * ) ( BGVAELA_jass.nonlocals )) -> YFVAELA_jup = (&YFVAELA_jup);
(( DGVAELA_jass * ) ( BGVAELA_jass.nonlocals )) -> NFVAELA_count = (&NFVAELA_count);
 /* line 4927: */
A_CALLPROC(BGVAELA_jass,(Jst),(Jst,(BGVAELA_jass).nonlocals));
 /* line 4928: */
HGVAELA_jr = (A_HEAP(A68_216 ));
 /* line 4929: */
IGVAELA = (&(HGVAELA_jr->Jrow)) ;
(*IGVAELA) = YFVAELA_jup;
 /* line 4930: */
 /* line 4931: */
JGVAELA = A_UNITE(KGVAELA,mode3,3,HGVAELA_jr);
} 
A_PROC_EXIT(joinsttorow);
*ReturnedValue = (JGVAELA);
return;
} 
#undef NL

A_STATIC A68_INT  MGVAELA_get_size(A68_210  Jup)
{ 
A68_210  NGVAELA;  /* united object - for case conformity */
A68_216 * OGVAELA_jr;
A68_INT  PGVAELA;  /* clause result */
A68_214 * QGVAELA_js;
A68_214 * RGVAELA_jstr;
A68_INT  SGVAELA_size;
A68_217 * TGVAELA_jio;
A68_INT  UGVAELA_left;
A68_INT  VGVAELA_right;
A68_219 * WGVAELA_jr;
A_PROC_ENTRY(get_size);
 /* line 4935: */
 /* line 4936: */
NGVAELA = Jup ;
switch ( NGVAELA.mode )
{ 
case 3: /* REF STRUCT(REF MODE221)  */
OGVAELA_jr = (NGVAELA.data.mode3);
 /* line 4937: */
PGVAELA = (*(&(OGVAELA_jr->Jrow))).upb;
break;
case 1: /* REF STRUCT(MODE210,REF MODE214)  */
QGVAELA_js = (NGVAELA.data.mode1);
{ 
RGVAELA_jstr = QGVAELA_js;
 /* line 4938: */
SGVAELA_size = 0;
 /* line 4939: */
for ( ;; )
{ 
 /* line 4940: */
if ( !((RGVAELA_jstr!=PQCAELA_niljoinst)) ) break;
SGVAELA_size+=1;
RGVAELA_jstr = (*(&(RGVAELA_jstr->Rest)));
}
 /* line 4941: */
 /* line 4942: */
 /* line 4943: */
PGVAELA = SGVAELA_size;
} 
break;
case 4: /* REF STRUCT(MODE210,MODE210)  */
TGVAELA_jio = (NGVAELA.data.mode4);
{ 
UGVAELA_left = MGVAELA_get_size((*(&(TGVAELA_jio->Source))));
 /* line 4944: */
VGVAELA_right = MGVAELA_get_size((*(&(TGVAELA_jio->Sink))));
 /* line 4945: */
 /* line 4946: */
if ( (UGVAELA_left==(-1)) )
{ 
PGVAELA = VGVAELA_right;
} 
else
{ 
 /* line 4947: */
if ( (VGVAELA_right==(-1)) )
{ 
PGVAELA = UGVAELA_left;
} 
else
{ 
 /* line 4948: */
if ( (UGVAELA_left<VGVAELA_right) )
{ 
 /* line 4949: */
PGVAELA = UGVAELA_left;
} 
else
{ 
 /* line 4950: */
 /* line 4951: */
PGVAELA = VGVAELA_right;
} 
} 
} 
} 
break;
case 6: /* REF STRUCT(MODE210,MODE220)  */
WGVAELA_jr = (NGVAELA.data.mode6);
 /* line 4952: */
 /* line 4953: */
PGVAELA = MGVAELA_get_size((*(&(WGVAELA_jr->Jrep))));
break;
default: 
PGVAELA = (-1);
break;
} 
A_PROC_EXIT(get_size);
return( PGVAELA );
} 
#undef NL

A_STATIC A68_VOID  AHVAELA_trim_error(A68_185 * Lwb, A68_185 * Upb, A68_INT  Size, A68_414  *ReturnedValue)
{ 
A68_185  BHVAELA;  /* OPERATORS - mode -> union mode */
A68_BOOL  CHVAELA_isindex;
A68_INT  DHVAELA;  /* clause result */
A68_262  EHVAELA;  /* clause result */
A68_263  FHVAELA;  /* OPERATORS - unite union */
A68_262  GHVAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_367  HHVAELA;  /* collateral clause result */
A68_263  IHVAELA;  /* OPERATORS - unite union */
A68_263  JHVAELA;  /* OPERATORS - unite union */
A68_262  KHVAELA;  /* OPERATORS - istruct -> vector */
A68_INT  LHVAELA;  /* clause result */
A68_367  MHVAELA;  /* collateral clause result */
A68_263  NHVAELA;  /* OPERATORS - unite union */
A68_263  OHVAELA;  /* OPERATORS - unite union */
A68_262  PHVAELA;  /* clause result */
A68_262  QHVAELA;  /* OPERATORS - istruct -> vector */
A68_451  RHVAELA;  /* collateral clause result */
A68_263  SHVAELA;  /* OPERATORS - unite union */
A68_263  THVAELA;  /* OPERATORS - unite union */
A68_263  UHVAELA;  /* OPERATORS - unite union */
A68_262  VHVAELA;  /* OPERATORS - istruct -> vector */
A68_367  WHVAELA;  /* collateral clause result */
A68_263  XHVAELA;  /* OPERATORS - unite union */
A68_263  YHVAELA;  /* OPERATORS - unite union */
A68_414  ZHVAELA;  /* clause result */
A68_262  AIVAELA;  /* OPERATORS - istruct -> vector */
A68_185  BIVAELA;  /* avoid structure result */
A68_419  CIVAELA;  /* avoid structure result */
A68_414  DIVAELA;  /* avoid structure result */
A68_414  EIVAELA;  /* avoid structure result */
A68_185  FIVAELA;  /* OPERATORS - mode -> union mode */
A68_419  GIVAELA;  /* avoid structure result */
A68_185  HIVAELA;  /* OPERATORS - mode -> union mode */
A68_INT  IIVAELA;  /* YIELD */
A68_419  JIVAELA;  /* avoid structure result */
A68_414  KIVAELA;  /* avoid structure result */
A68_414  LIVAELA;  /* avoid structure result */
A_PROC_ENTRY(trim_error);
 /* line 4956: */
{ 
RKPAELA_fp5 = (*Lwb);
SKPAELA_fp6 = (*Upb);
QKPAELA_fp0 = A_UNITE(BHVAELA,mode1,1,Size);
 /* line 4957: */
CHVAELA_isindex = (HDRAELA_giveint((*Lwb))==HDRAELA_giveint((*Upb)));
 /* line 4958: */
 /* line 4959: */
 /* line 4960: */
 /* line 4961: */
if ( CHVAELA_isindex )
{ 
 /* line 4962: */
DHVAELA = 35;
} 
else
{ 
DHVAELA = 59;
} 
 /* line 4963: */
if ( CHVAELA_isindex )
{ 
EHVAELA = A_HVEC(GHVAELA,A_UTABUNITE(FHVAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",RKPAELA_fp5),A68_263 );
} 
else
{ 
HHVAELA.data[0] = A_UTABUNITE(IHVAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",RKPAELA_fp5);
HHVAELA.data[1] = A_UTABUNITE(JHVAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",SKPAELA_fp6);
EHVAELA = A_HISVEC(KHVAELA,HHVAELA,2,A68_263 );
} 
 /* line 4965: */
 /* line 4966: */
 /* line 4967: */
 /* line 4968: */
if ( CHVAELA_isindex )
{ 
 /* line 4969: */
LHVAELA = 41;
} 
else
{ 
LHVAELA = 60;
} 
 /* line 4970: */
if ( CHVAELA_isindex )
{ 
MHVAELA.data[0] = A_UTABUNITE(NHVAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",RKPAELA_fp5);
MHVAELA.data[1] = A_UTABUNITE(OHVAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",QKPAELA_fp0);
PHVAELA = A_HISVEC(QHVAELA,MHVAELA,2,A68_263 );
} 
else
{ 
RHVAELA.data[0] = A_UTABUNITE(SHVAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",RKPAELA_fp5);
RHVAELA.data[1] = A_UTABUNITE(THVAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",SKPAELA_fp6);
RHVAELA.data[2] = A_UTABUNITE(UHVAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",QKPAELA_fp0);
PHVAELA = A_HISVEC(VHVAELA,RHVAELA,3,A68_263 );
} 
 /* line 4971: */
 /* line 4972: */
 /* line 4973: */
 /* line 4974: */
 /* line 4976: */
WHVAELA.data[0] = A_UTABUNITE(XHVAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",RKPAELA_fp5);
WHVAELA.data[1] = A_UTABUNITE(YHVAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",SKPAELA_fp6);
 /* line 4977: */
DSDAELA_uncheckedint( (*Lwb), &BIVAELA );
RWRAELA_testints( CWRAELA_checkge, (*Upb), BIVAELA, 61, A_HISVEC(AIVAELA,WHVAELA,2,A68_263 ), 0, &CIVAELA );
HSRAELA_testbool( CHVAELA_isindex, &DIVAELA );
VSRAELA_or( DIVAELA, CIVAELA.Test, &EIVAELA );
RWRAELA_testints( BWRAELA_checkle, (*Upb), A_UNITE(FIVAELA,mode1,1,Size), LHVAELA, PHVAELA, 0, &GIVAELA );
IIVAELA = 1 ;
RWRAELA_testints( CWRAELA_checkge, (*Lwb), A_UNITE(HIVAELA,mode1,1,IIVAELA), DHVAELA, EHVAELA, 0, &JIVAELA );
PSRAELA_and( JIVAELA.Test, GIVAELA.Test, &KIVAELA );
PSRAELA_and( KIVAELA, EIVAELA, &LIVAELA );
ZHVAELA = LIVAELA;
} 
A_PROC_EXIT(trim_error);
*ReturnedValue = (ZHVAELA);
return;
} 
#undef NL

A68_VOID  PIVAELA_gettrim(A68_210 * Jup, A68_INT  Lwb, A68_INT  Upb, A68_210  *ReturnedValue)
{ 
A68_210  QIVAELA;  /* united object - for case conformity */
A68_216 * RIVAELA_jr;
A68_216 * SIVAELA_jrr;
A68_BOOL  TIVAELA;  /* optbool result */
A68_BOOL  UIVAELA;  /* optbool result */
A68_490  WIVAELA_generator;   /* proc value of non-global proc */
A68_221  BJVAELA;  /* avoid structure result */
A68_221  CJVAELA;  /* OPERATORS - trim index */
A68_221  DJVAELA;  /* OPERATORS - trim index */
A68_221  EJVAELA;  /* OPERATORS - assign op */
A68_221 * FJVAELA;  /* YIELD */
A68_210  GJVAELA;  /* clause result */
A68_210  HJVAELA;  /* OPERATORS - mode -> union mode */
A68_BOOL  IJVAELA;  /* optbool result */
A68_221  JJVAELA;  /* OPERATORS - simple index */
A68_210  KJVAELA;  /* OPERATORS - mode -> union mode */
A68_210  LJVAELA;  /* OPERATORS - mode -> union mode */
A68_214 * MJVAELA_jstr;
A68_506  QJVAELA_jtrim;   /* proc value of non-global proc */
A68_BOOL  YJVAELA;  /* optbool result */
A68_214 * ZJVAELA_js;
A68_INT  AKVAELA;  /* to part of loop */
A68_INT  BKVAELA;  /* loop control */
A68_210  CKVAELA;  /* OPERATORS - mode -> union mode */
A68_210  DKVAELA;  /* OPERATORS - mode -> union mode */
A68_214 * EKVAELA;  /* YIELD */
A68_210  FKVAELA;  /* OPERATORS - mode -> union mode */
A68_217 * GKVAELA_jio;
A68_217  HKVAELA;  /* collateral clause result */
A68_210  IKVAELA;  /* avoid structure result */
A68_210  JKVAELA;  /* avoid structure result */
A68_217 * KKVAELA;  /* YIELD */
A68_210  LKVAELA;  /* OPERATORS - mode -> union mode */
A68_219 * MKVAELA_jr;
A68_219  NKVAELA;  /* collateral clause result */
A68_210  OKVAELA;  /* avoid structure result */
A68_219 * PKVAELA;  /* YIELD */
A68_210  QKVAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(gettrim);
 /* line 4981: */
 /* line 4982: */
QIVAELA = (*Jup) ;
switch ( QIVAELA.mode )
{ 
case 3: /* REF STRUCT(REF MODE221)  */
RIVAELA_jr = (QIVAELA.data.mode3);
 /* line 4983: */
{ 
SIVAELA_jrr = (A_HEAP(A68_216 ));
 /* line 4984: */
TIVAELA = (Lwb>0);
if ( TIVAELA )
{ /* line 4985: */
TIVAELA = (Upb>0);
}
if ( TIVAELA )
{ 
UIVAELA = (Lwb<Upb);
if ( UIVAELA )
{ /* line 4986: */
UIVAELA = (Upb<=(*(&(RIVAELA_jr->Jrow))).upb);
}
if ( UIVAELA )
{ 
A_CLOSURE( WIVAELA_generator, XIVAELA_generator, YIVAELA_generator );
(( YIVAELA_generator * ) ( WIVAELA_generator.nonlocals )) -> Upb = Upb;
(( YIVAELA_generator * ) ( WIVAELA_generator.nonlocals )) -> Lwb = Lwb;
A_CALLPROC(WIVAELA_generator,(A68_FALSE, &BJVAELA),(A68_FALSE, &BJVAELA,(WIVAELA_generator).nonlocals));
CJVAELA = (*(&(RIVAELA_jr->Jrow))) ;
EJVAELA = A_VTRIM(DJVAELA,(CJVAELA),A_VTSCRIPT(&(DJVAELA.upb),(CJVAELA).upb,Lwb,Upb)) ;
A_VASSIGN2(EJVAELA,BJVAELA,A68_210 ) ;
FJVAELA = (&(SIVAELA_jrr->Jrow)) ;
(*FJVAELA) = BJVAELA;
 /* line 4988: */
 /* line 4989: */
GJVAELA = A_UNITE(HJVAELA,mode3,3,SIVAELA_jrr);
} 
else
{ 
IJVAELA = (Lwb==Upb);
if ( IJVAELA )
{ /* line 4990: */
IJVAELA = (Upb<=(*(&(RIVAELA_jr->Jrow))).upb);
}
if ( IJVAELA )
{ 
 /* line 4991: */
JJVAELA = (*(&(RIVAELA_jr->Jrow))) ;
GJVAELA = (*(&A_VINDEX(JJVAELA,Lwb)));
} 
else
{ 
AEVAELA_mark_join(Jup, SRCAELA_jfault, A68_FALSE);
 /* line 4992: */
 /* line 4993: */
 /* line 4994: */
GJVAELA = A_UNITE(KJVAELA,mode7,7,DRCAELA_flt);
} 
} 
} 
else
{ 
AEVAELA_mark_join(Jup, RRCAELA_jcheck, A68_FALSE);
 /* line 4995: */
 /* line 4996: */
 /* line 4997: */
GJVAELA = A_UNITE(LJVAELA,mode7,7,DRCAELA_flt);
} 
} 
break;
case 1: /* REF STRUCT(MODE210,REF MODE214)  */
MJVAELA_jstr = (QIVAELA.data.mode1);
 /* line 4998: */
{ 
A_CLOSURE( QJVAELA_jtrim, RJVAELA_jtrim, SJVAELA_jtrim );
(( SJVAELA_jtrim * ) ( QJVAELA_jtrim.nonlocals )) -> QJVAELA_jtrim = QJVAELA_jtrim;
 /* line 5006: */
YJVAELA = (Lwb>0);
if ( YJVAELA )
{ /* line 5007: */
YJVAELA = (Upb>0);
}
if ( YJVAELA )
{ 
ZJVAELA_js = MJVAELA_jstr;
 /* line 5008: */
AKVAELA = (Lwb-1);
for ( BKVAELA = 1;
BKVAELA <= AKVAELA;
BKVAELA += 1 )
{ 
if ( !((ZJVAELA_js!=PQCAELA_niljoinst)) ) break;
ZJVAELA_js = (*(&(ZJVAELA_js->Rest)));
}
 /* line 5009: */
 /* line 5010: */
if ( (ZJVAELA_js==PQCAELA_niljoinst) )
{ 
AEVAELA_mark_join(Jup, SRCAELA_jfault, A68_FALSE);
 /* line 5011: */
 /* line 5012: */
GJVAELA = A_UNITE(CKVAELA,mode7,7,DRCAELA_flt);
} 
else
{ 
 /* line 5013: */
 /* line 5014: */
if ( (Lwb==Upb) )
{ 
GJVAELA = (*(&(ZJVAELA_js->Jst)));
} 
else
{ 
 /* line 5015: */
 /* line 5016: */
EKVAELA = A_CALLPROC(QJVAELA_jtrim,(ZJVAELA_js, ((Upb-Lwb)+1)),(ZJVAELA_js, ((Upb-Lwb)+1),(QJVAELA_jtrim).nonlocals)) ;
GJVAELA = A_UNITE(DKVAELA,mode1,1,EKVAELA);
} 
} 
} 
else
{ 
AEVAELA_mark_join(Jup, RRCAELA_jcheck, A68_FALSE);
 /* line 5017: */
 /* line 5018: */
 /* line 5019: */
 /* line 5020: */
GJVAELA = A_UNITE(FKVAELA,mode7,7,DRCAELA_flt);
} 
} 
break;
case 4: /* REF STRUCT(MODE210,MODE210)  */
GKVAELA_jio = (QIVAELA.data.mode4);
 /* line 5021: */
 /* line 5022: */
PIVAELA_gettrim( (&(GKVAELA_jio->Source)), Lwb, Upb, &IKVAELA );
HKVAELA.Source = IKVAELA;
PIVAELA_gettrim( (&(GKVAELA_jio->Sink)), Lwb, Upb, &JKVAELA );
HKVAELA.Sink = JKVAELA;
 /* line 5023: */
KKVAELA = A_HEAP(A68_217 ) ;
(*KKVAELA) = HKVAELA ;
GJVAELA = A_UNITE(LKVAELA,mode4,4,KKVAELA);
break;
case 6: /* REF STRUCT(MODE210,MODE220)  */
MKVAELA_jr = (QIVAELA.data.mode6);
 /* line 5024: */
PIVAELA_gettrim( (&(MKVAELA_jr->Jrep)), Lwb, Upb, &OKVAELA );
NKVAELA.Jrep = OKVAELA;
 /* line 5025: */
NKVAELA.Jvarstack = (*(&(MKVAELA_jr->Jvarstack)));
 /* line 5026: */
PKVAELA = A_HEAP(A68_219 ) ;
(*PKVAELA) = NKVAELA ;
GJVAELA = A_UNITE(QKVAELA,mode6,6,PKVAELA);
break;
default: 
GJVAELA = (*Jup);
break;
} 
A_PROC_EXIT(gettrim);
*ReturnedValue = (GJVAELA);
return;
} 
#undef NL

A68_VOID  UKVAELA_jointrim(A68_210 * Joinup, A68_185  Lwbd, A68_185  Upbd, A68_210  *ReturnedValue)
{ 
A68_INT  VKVAELA_lwb;
A68_INT  WKVAELA_upb;
A68_185  XKVAELA;  /* avoid structure result */
A68_185  YKVAELA;  /* united object - for case conformity */
A68_189 * ZKVAELA_iv;
A68_INT  ALVAELA;  /* clause result */
A68_185  BLVAELA;  /* avoid structure result */
A68_185  CLVAELA;  /* united object - for case conformity */
A68_189 * DLVAELA_iv;
A68_INT  ELVAELA;  /* clause result */
A68_210  FLVAELA;  /* clause result */
A68_210  GLVAELA;  /* avoid structure result */
A_PROC_ENTRY(jointrim);
 /* line 5030: */
{ 
 /* line 5031: */
 /* line 5032: */
CDRAELA_simplify( Lwbd, A68_TRUE, &XKVAELA );
YKVAELA = XKVAELA ;
switch ( YKVAELA.mode )
{ 
case 6: /* REF STRUCT(REF MODE245)  */
ZKVAELA_iv = (YKVAELA.data.mode6);
 /* line 5033: */
 /* line 5034: */
ALVAELA = (-1);
break;
default: 
ALVAELA = HDRAELA_giveint(Lwbd);
break;
} 
VKVAELA_lwb = ALVAELA;
 /* line 5035: */
 /* line 5036: */
CDRAELA_simplify( Upbd, A68_TRUE, &BLVAELA );
CLVAELA = BLVAELA ;
switch ( CLVAELA.mode )
{ 
case 6: /* REF STRUCT(REF MODE245)  */
DLVAELA_iv = (CLVAELA.data.mode6);
 /* line 5037: */
 /* line 5038: */
ELVAELA = (-1);
break;
default: 
ELVAELA = HDRAELA_giveint(Upbd);
break;
} 
WKVAELA_upb = ELVAELA;
 /* line 5039: */
 /* line 5040: */
PIVAELA_gettrim( Joinup, VKVAELA_lwb, WKVAELA_upb, &GLVAELA );
FLVAELA = GLVAELA;
} 
A_PROC_EXIT(jointrim);
*ReturnedValue = (FLVAELA);
return;
} 
#undef NL

A68_VOID  KLVAELA_unscope(A68_293 ** S, A68_244 ** I, A68_166 ** F)
{ 
A68_BOOL  LLVAELA;  /* optbool result */
A68_BOOL  MLVAELA;  /* optbool result */
A68_199  NLVAELA;  /* united object - for case conformity */
A68_182  OLVAELA_f;
A_PROC_ENTRY(unscope);
 /* line 5043: */
{ 
 /* line 5044: */
if ( ((*S)!=CUCAELA_nilscope) )
{ 
for ( ;; )
{ 
 /* line 5045: */
if ( !(((*(&((*S)->Ids)))!=(*I))) ) break;
LLVAELA = MJPAELA_syntaxerror;
if ( ! LLVAELA )
{LLVAELA = CNPAELA_nonunitbody;
}
 /* line 5046: */
MLVAELA = !LLVAELA;
if ( MLVAELA )
{MLVAELA = (*(&((*I)->Declaration)));
}
if ( MLVAELA )
{ 
 /* line 5047: */
NLVAELA = (*(&((*(&((*I)->Idinfo)))->U))) ;
switch ( NLVAELA.mode )
{ 
case 8: /* STRUCT(INT)  */
OLVAELA_f = (NLVAELA.data.mode8);
 /* line 5048: */
/*SKIP*/;
break;
default: 
 /* line 5049: */
 /* line 5050: */
FBVAELA_check_joins((*(*(&((*I)->Idinfo)))));
break;
} 
} 
 /* line 5051: */
 /* line 5052: */
(*I) = (*(&((*I)->Rest)));
}
 /* line 5053: */
for ( ;; )
{ 
 /* line 5054: */
if ( !(((*(&((*S)->Fns)))!=(*F))) ) break;
(*F) = (*(&((*F)->Rest)));
}
 /* line 5055: */
} 
 /* line 5056: */
 /* line 5057: */
(*S) = (*(&((*S)->Rest)));
} 
A_PROC_EXIT(unscope);
return;
} 
#undef NL

A68_VOID  RLVAELA_makevardecs(A68_171 * D, A68_167 * Fd)
{ 
A68_510  VLVAELA_makeids;   /* proc value of non-global proc */
A_PROC_ENTRY(makevardecs);
 /* line 5060: */
{ 
A_CLOSURE( VLVAELA_makeids, WLVAELA_makeids, XLVAELA_makeids );
(( XLVAELA_makeids * ) ( VLVAELA_makeids.nonlocals )) -> VLVAELA_makeids = VLVAELA_makeids;
(( XLVAELA_makeids * ) ( VLVAELA_makeids.nonlocals )) -> Fd = Fd;
 /* line 5067: */
 /* line 5068: */
if ( (D!=FQCAELA_nildecs) )
{ 
RLVAELA_makevardecs((*(&(D->Rest))), Fd);
 /* line 5069: */
 /* line 5070: */
 /* line 5071: */
A_CALLPROC(VLVAELA_makeids,((*(&(D->T))), (*(&(D->Ids)))),((*(&(D->T))), (*(&(D->Ids))),(VLVAELA_makeids).nonlocals));
} 
} 
A_PROC_EXIT(makevardecs);
return;
} 
#undef NL

A_STATIC A68_171 * FMVAELA_decs_flt(A68_244 ** Decids, A68_INT  Idscount)
{ 
A68_244 * GMVAELA_d_decs;
A68_INT  HMVAELA;  /* to part of loop */
A68_INT  IMVAELA;  /* loop control */
A68_244  JMVAELA;  /* collateral clause result */
A68_244 * KMVAELA;  /* YIELD */
A68_171  LMVAELA;  /* collateral clause result */
A68_172  MMVAELA;  /* OPERATORS - mode -> union mode */
A68_171 * NMVAELA;  /* clause result */
A68_171 * OMVAELA;  /* YIELD */
A_PROC_ENTRY(decs_flt);
 /* line 5075: */
{ 
GMVAELA_d_decs = (A68_244 *)A68_NIL;
 /* line 5076: */
 /* line 5077: */
HMVAELA = Idscount;
for ( IMVAELA = 1;
IMVAELA <= HMVAELA;
IMVAELA += 1 )
{ 
JMVAELA.Idinfo = (*(&((*Decids)->Idinfo)));
 /* line 5078: */
JMVAELA.Declaration = (*(&((*Decids)->Declaration)));
JMVAELA.Attr = (*(&((*Decids)->Attr)));
JMVAELA.Rest = GMVAELA_d_decs;
KMVAELA = A_HEAP(A68_244 ) ;
(*KMVAELA) = JMVAELA ;
GMVAELA_d_decs = KMVAELA;
 /* line 5079: */
 /* line 5080: */
(*Decids) = (*(&((*Decids)->Rest)));
}
 /* line 5081: */
LMVAELA.T = A_UNITE(MMVAELA,mode10,10,DRCAELA_flt);
LMVAELA.Ids = GMVAELA_d_decs;
 /* line 5082: */
LMVAELA.Rest = (A68_171 *)A68_NIL;
OMVAELA = A_HEAP(A68_171 ) ;
(*OMVAELA) = LMVAELA ;
NMVAELA = OMVAELA;
} 
A_PROC_EXIT(decs_flt);
return( NMVAELA );
} 
#undef NL

A_STATIC A68_171 * RMVAELA_decs_st(A68_244 * Decids, A68_175 * St)
{ 
A68_171 * SMVAELA;  /* clause result */
A68_171  TMVAELA;  /* collateral clause result */
A68_244  UMVAELA;  /* collateral clause result */
A68_244 * VMVAELA;  /* YIELD */
A68_171 * WMVAELA;  /* YIELD */
A_PROC_ENTRY(decs_st);
 /* line 5085: */
 /* line 5086: */
 /* line 5087: */
if ( (St==DQCAELA_nilst) )
{ 
SMVAELA = (A68_171 *)A68_NIL;
} 
else
{ 
 /* line 5088: */
 /* line 5089: */
TMVAELA.T = (*(&(St->T)));
UMVAELA.Idinfo = (*(&(Decids->Idinfo)));
 /* line 5090: */
UMVAELA.Declaration = (*(&(Decids->Declaration)));
UMVAELA.Attr = (*(&(Decids->Attr)));
UMVAELA.Rest = (A68_244 *)A68_NIL;
 /* line 5091: */
VMVAELA = A_HEAP(A68_244 ) ;
(*VMVAELA) = UMVAELA ;
TMVAELA.Ids = VMVAELA;
 /* line 5092: */
TMVAELA.Rest = RMVAELA_decs_st((*(&(Decids->Rest))), (*(&(St->Rest))));
WMVAELA = A_HEAP(A68_171 ) ;
(*WMVAELA) = TMVAELA ;
SMVAELA = WMVAELA;
} 
A_PROC_EXIT(decs_st);
return( SMVAELA );
} 
#undef NL

A68_171 * ZMVAELA_decs_setup(A68_244 * D_ids, A68_172  T)
{ 
A68_244 * ANVAELA_decids;
A68_171 * BNVAELA_d_decs;
A68_INT  CNVAELA_idscount;
A68_INT  DNVAELA_multsize;
A68_172  GNVAELA_t1;
A68_172  HNVAELA;  /* united object - for case conformity */
A68_180 * INVAELA_tb;
A68_176 * JNVAELA_tv;
A68_181 * KNVAELA_ts;
A68_179  LNVAELA;  /* collateral clause result */
A68_179 * MNVAELA;  /* YIELD */
A68_172  NNVAELA;  /* OPERATORS - mode -> union mode */
A68_179 * ONVAELA_trow;
A68_INT  PNVAELA_multsize;
A68_381  QNVAELA;  /* collateral clause result */
A68_32  RNVAELA;  /* OPERATORS - istruct -> vector */
A68_381  SNVAELA;  /* collateral clause result */
A68_32  TNVAELA;  /* OPERATORS - istruct -> vector */
A68_BOOL  UNVAELA;  /* optbool result */
A68_185  VNVAELA;  /* OPERATORS - mode -> union mode */
A68_263  WNVAELA;  /* OPERATORS - unite union */
A68_262  XNVAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_244 * YNVAELA_dids;
A68_244 ** ZNVAELA_nextids;
A68_INT  AOVAELA;  /* to part of loop */
A68_INT  BOVAELA;  /* loop control */
A68_244  COVAELA;  /* collateral clause result */
A68_244 * DOVAELA;  /* YIELD */
A68_171  EOVAELA;  /* collateral clause result */
A68_171 * FOVAELA;  /* YIELD */
A68_175 * GOVAELA_str;
A68_175 * HOVAELA_st;
A68_175 * IOVAELA_st2;
A68_175  JOVAELA;  /* collateral clause result */
A68_175 * KOVAELA;  /* YIELD */
A68_185  LOVAELA;  /* OPERATORS - mode -> union mode */
A68_263  MOVAELA;  /* OPERATORS - unite union */
A68_262  NOVAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_174 * OOVAELA_nn;
A68_182  POVAELA_flt;
A68_171  QOVAELA;  /* collateral clause result */
A68_244  ROVAELA;  /* collateral clause result */
A68_244 * SOVAELA;  /* YIELD */
A68_171 * TOVAELA;  /* YIELD */
A68_171 * UOVAELA;  /* clause result */
A_PROC_ENTRY(decs_setup);
 /* line 5095: */
{ 
ANVAELA_decids = D_ids;
 /* line 5096: */
BNVAELA_d_decs = FQCAELA_nildecs;
 /* line 5097: */
CNVAELA_idscount = (*(&(TOPAELA_multlets->Num)));
 /* line 5098: */
DNVAELA_multsize = 0;
 /* line 5099: */
 /* line 5100: */
 /* line 5101: */
if ( (CNVAELA_idscount==0) )
{ 
/*SKIP*/;
} 
else
{ 
 /* line 5102: */
if ( (CNVAELA_idscount!=1) )
{ 
GNVAELA_t1 = T;
 /* line 5103: */
FNVAELA_c:
 /* line 5104: */
HNVAELA = GNVAELA_t1 ;
switch ( HNVAELA.mode )
{ 
case 8: /* REF STRUCT(MODE172)  */
INVAELA_tb = (HNVAELA.data.mode8);
{ 
GNVAELA_t1 = (*(&(INVAELA_tb->Tbracket)));
 /* line 5105: */
goto FNVAELA_c;
} 
break;
case 4: /* REF STRUCT(REF MODE245,MODE172)  */
JNVAELA_tv = (HNVAELA.data.mode4);
{ 
GNVAELA_t1 = (*(&(JNVAELA_tv->T)));
 /* line 5106: */
goto FNVAELA_c;
} 
break;
case 9: /* REF STRUCT(MODE185,MODE172)  */
KNVAELA_ts = (HNVAELA.data.mode9);
{ 
LNVAELA.T = (*(&(KNVAELA_ts->Tstring)));
LNVAELA.Size = (*(&(KNVAELA_ts->Size)));
MNVAELA = A_HEAP(A68_179 ) ;
(*MNVAELA) = LNVAELA ;
GNVAELA_t1 = A_UNITE(NNVAELA,mode7,7,MNVAELA);
 /* line 5107: */
 /* line 5108: */
 /* line 5109: */
goto FNVAELA_c;
} 
break;
case 7: /* REF STRUCT(MODE172,MODE185)  */
ONVAELA_trow = (HNVAELA.data.mode7);
{ 
PNVAELA_multsize = HDRAELA_giveint((*(&(ONVAELA_trow->Size))));
 /* line 5110: */
 /* line 5111: */
if ( (PNVAELA_multsize==(-1)) )
{ 
QNVAELA.data[0] = PJCAELA_icheck;
QNVAELA.data[1] = 1;
A_CALLPROC(VOPAELA_outints,(A_HISVEC(RNVAELA,QNVAELA,2,A68_INT )),(A_HISVEC(RNVAELA,QNVAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
 /* line 5112: */
MJQAELA_loadint((*(&(ONVAELA_trow->Size))), A68_FALSE);
 /* line 5113: */
SNVAELA.data[0] = IJCAELA_iconst;
SNVAELA.data[1] = CNVAELA_idscount;
 /* line 5114: */
A_CALLPROC(VOPAELA_outints,(A_HISVEC(TNVAELA,SNVAELA,2,A68_INT )),(A_HISVEC(TNVAELA,SNVAELA,2,A68_INT ),(VOPAELA_outints).nonlocals));
} 
 /* line 5115: */
UNVAELA = (PNVAELA_multsize!=CNVAELA_idscount);
if ( UNVAELA )
{ /* line 5116: */
UNVAELA = (PNVAELA_multsize!=(-1));
}
if ( UNVAELA )
{ 
BNVAELA_d_decs = FMVAELA_decs_flt((&ANVAELA_decids), CNVAELA_idscount);
 /* line 5117: */
RKPAELA_fp5 = A_UNITE(VNVAELA,mode1,1,PNVAELA_multsize);
 /* line 5118: */
 /* line 5121: */
 /* line 5122: */
SZPAELA_faultp(158, A_HVEC(XNVAELA,A_UTABUNITE(WNVAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",RKPAELA_fp5),A68_263 ));
} 
else
{ 
YNVAELA_dids = (A68_244 *)A68_NIL;
 /* line 5123: */
ZNVAELA_nextids = (&YNVAELA_dids);
 /* line 5124: */
 /* line 5125: */
AOVAELA = CNVAELA_idscount;
for ( BOVAELA = 1;
BOVAELA <= AOVAELA;
BOVAELA += 1 )
{ 
 /* line 5126: */
 /* line 5127: */
COVAELA.Idinfo = (*(&(ANVAELA_decids->Idinfo)));
 /* line 5128: */
COVAELA.Declaration = (*(&(ANVAELA_decids->Declaration)));
COVAELA.Attr = (*(&(ANVAELA_decids->Attr)));
COVAELA.Rest = (A68_244 *)A68_NIL;
DOVAELA = A_HEAP(A68_244 ) ;
(*DOVAELA) = COVAELA ;
(*ZNVAELA_nextids) = DOVAELA;
 /* line 5129: */
ANVAELA_decids = (*(&(ANVAELA_decids->Rest)));
 /* line 5130: */
 /* line 5131: */
ZNVAELA_nextids = (&((*ZNVAELA_nextids)->Rest));
}
 /* line 5132: */
EOVAELA.T = (*(&(ONVAELA_trow->T)));
EOVAELA.Ids = YNVAELA_dids;
 /* line 5133: */
EOVAELA.Rest = FQCAELA_nildecs;
 /* line 5134: */
 /* line 5135: */
FOVAELA = A_HEAP(A68_171 ) ;
(*FOVAELA) = EOVAELA ;
BNVAELA_d_decs = FOVAELA;
} 
} 
break;
case 3: /* REF STRUCT(MODE172,REF MODE175)  */
GOVAELA_str = (HNVAELA.data.mode3);
{ 
HOVAELA_st = DQCAELA_nilst;
 /* line 5136: */
IOVAELA_st2 = GOVAELA_str;
 /* line 5137: */
for ( ;; )
{ 
 /* line 5138: */
if ( !((IOVAELA_st2!=DQCAELA_nilst)) ) break;
DNVAELA_multsize+=1;
 /* line 5139: */
JOVAELA.T = (*(&(IOVAELA_st2->T)));
JOVAELA.Rest = HOVAELA_st;
KOVAELA = A_HEAP(A68_175 ) ;
(*KOVAELA) = JOVAELA ;
HOVAELA_st = KOVAELA;
 /* line 5140: */
 /* line 5141: */
IOVAELA_st2 = (*(&(IOVAELA_st2->Rest)));
}
 /* line 5142: */
 /* line 5143: */
if ( (DNVAELA_multsize!=CNVAELA_idscount) )
{ 
BNVAELA_d_decs = FMVAELA_decs_flt((&ANVAELA_decids), CNVAELA_idscount);
 /* line 5144: */
RKPAELA_fp5 = A_UNITE(LOVAELA,mode1,1,DNVAELA_multsize);
 /* line 5145: */
 /* line 5147: */
SZPAELA_faultp(158, A_HVEC(NOVAELA,A_UTABUNITE(MOVAELA,"\000\020\021\022\012\023\024\025\026\027\030\031\032\033\034\013",RKPAELA_fp5),A68_263 ));
} 
else
{ 
 /* line 5148: */
 /* line 5149: */
 /* line 5150: */
BNVAELA_d_decs = RMVAELA_decs_st(ANVAELA_decids, HOVAELA_st);
} 
} 
break;
case 2: /* REF STRUCT(REF MODE198,INT,MODE172)  */
OOVAELA_nn = (HNVAELA.data.mode2);
{ 
GNVAELA_t1 = (*(&(OOVAELA_nn->T)));
 /* line 5151: */
goto FNVAELA_c;
} 
break;
case 10: /* STRUCT(INT)  */
POVAELA_flt = (HNVAELA.data.mode10);
 /* line 5152: */
BNVAELA_d_decs = FMVAELA_decs_flt((&ANVAELA_decids), CNVAELA_idscount);
break;
default: 
{ 
 /* line 5153: */
UQPAELA_fault(161, VJAAOSI_nullmsg);
 /* line 5154: */
 /* line 5155: */
 /* line 5156: */
 /* line 5157: */
BNVAELA_d_decs = FMVAELA_decs_flt((&ANVAELA_decids), CNVAELA_idscount);
} 
break;
} 
} 
else
{ 
 /* line 5158: */
QOVAELA.T = T;
ROVAELA.Idinfo = (*(&(ANVAELA_decids->Idinfo)));
 /* line 5159: */
ROVAELA.Declaration = (*(&(ANVAELA_decids->Declaration)));
ROVAELA.Attr = (*(&(ANVAELA_decids->Attr)));
ROVAELA.Rest = (A68_244 *)A68_NIL;
SOVAELA = A_HEAP(A68_244 ) ;
(*SOVAELA) = ROVAELA ;
QOVAELA.Ids = SOVAELA;
 /* line 5160: */
QOVAELA.Rest = FQCAELA_nildecs;
TOVAELA = A_HEAP(A68_171 ) ;
(*TOVAELA) = QOVAELA ;
BNVAELA_d_decs = TOVAELA;
} 
} 
 /* line 5161: */
 /* line 5162: */
UOVAELA = BNVAELA_d_decs;
} 
A_PROC_EXIT(decs_setup);
return( UOVAELA );
} 
#undef NL

A68_VOID  WOVAELA_pushvss(A68_INT  I)
{ 
A_PROC_ENTRY(pushvss);
 /* line 5165: */
{ 
LLPAELA_vss+=I;
if ( (MLPAELA_maxvss<LLPAELA_vss) )
{ 
MLPAELA_maxvss = LLPAELA_vss;
} 
} 
A_PROC_EXIT(pushvss);
return;
} 
#undef NL

A68_381  YOVAELA_next_mparamno(A68_287 * Fnstack)
{ 
A68_167 * ZOVAELA_dec;
A68_381  APVAELA;  /* collateral clause result */
A68_INT * BPVAELA;  /* YIELD */
A68_381  CPVAELA;  /* clause result */
A68_167 * DPVAELA_nextdec;
A68_381  EPVAELA;  /* collateral clause result */
A68_INT * FPVAELA;  /* YIELD */
A_PROC_ENTRY(next_mparamno);
 /* line 5169: */
{ 
ZOVAELA_dec = (*(&(Fnstack->Dec)));
 /* line 5170: */
 /* line 5171: */
if ( (*(&(ZOVAELA_dec->Macro))) )
{ 
APVAELA.data[0] = (*(&(ZOVAELA_dec->Fnno)));
 /* line 5172: */
BPVAELA = (&(ZOVAELA_dec->Mparamno)) ;
APVAELA.data[1] = (*BPVAELA)+=1;
CPVAELA = APVAELA;
} 
else
{ 
DPVAELA_nextdec = (*(&((*(&(Fnstack->Rest)))->Dec)));
 /* line 5173: */
EPVAELA.data[0] = (*(&(DPVAELA_nextdec->Fnno)));
 /* line 5174: */
 /* line 5175: */
FPVAELA = (&((*(&((*(&(Fnstack->Rest)))->Dec)))->Mparamno)) ;
EPVAELA.data[1] = (*FPVAELA)+=1;
CPVAELA = EPVAELA;
} 
} 
A_PROC_EXIT(next_mparamno);
return( CPVAELA );
} 
#undef NL

A68_VOID  IPVAELA_add_mparam(A68_169 * Mps, A68_287 * Fnstack)
{ 
A68_167 * JPVAELA_dec;
A68_169 ** KPVAELA;  /* YIELD */
A68_169 *** LPVAELA;  /* YIELD */
A68_167 * MPVAELA_nextdec;
A68_169 ** NPVAELA;  /* YIELD */
A68_169 *** OPVAELA;  /* YIELD */
A_PROC_ENTRY(add_mparam);
 /* line 5178: */
{ 
JPVAELA_dec = (*(&(Fnstack->Dec)));
 /* line 5179: */
 /* line 5180: */
if ( (*(&(JPVAELA_dec->Macro))) )
{ 
KPVAELA = (*(&(JPVAELA_dec->Nextmp))) ;
(*KPVAELA) = Mps;
 /* line 5181: */
 /* line 5182: */
LPVAELA = (&(JPVAELA_dec->Nextmp)) ;
(*LPVAELA) = (&((*(*(&(JPVAELA_dec->Nextmp))))->Rest));
} 
else
{ 
MPVAELA_nextdec = (*(&((*(&(Fnstack->Rest)))->Dec)));
 /* line 5183: */
NPVAELA = (*(&(MPVAELA_nextdec->Nextmp))) ;
(*NPVAELA) = Mps;
 /* line 5184: */
 /* line 5185: */
 /* line 5186: */
OPVAELA = (&(MPVAELA_nextdec->Nextmp)) ;
(*OPVAELA) = (&((*(*(&(MPVAELA_nextdec->Nextmp))))->Rest));
} 
} 
A_PROC_EXIT(add_mparam);
return;
} 
#undef NL

A68_BOOL  QPVAELA_anyexplicit(A68_169 * Mps)
{ 
A68_BOOL  RPVAELA;  /* optbool result */
A68_BOOL  SPVAELA;  /* clause result */
A_PROC_ENTRY(anyexplicit);
 /* line 5189: */
 /* line 5190: */
if ( (Mps!=IQCAELA_nilmparams) )
{ 
RPVAELA = ((*(&(Mps->Sort)))==XWCAELA_expl_par);
if ( ! RPVAELA )
{ /* line 5191: */
RPVAELA = QPVAELA_anyexplicit((*(&(Mps->Rest))));
}
SPVAELA = RPVAELA;
} 
else
{ 
 /* line 5192: */
SPVAELA = A68_FALSE;
} 
A_PROC_EXIT(anyexplicit);
return( SPVAELA );
} 
#undef NL

A68_169 * UPVAELA_nextexpl_par(A68_169 * Mps)
{ 
A68_169 * VPVAELA_mp;
A68_BOOL  WPVAELA;  /* optbool result */
A68_169 * XPVAELA;  /* clause result */
A_PROC_ENTRY(nextexpl_par);
 /* line 5195: */
{ 
VPVAELA_mp = Mps;
 /* line 5196: */
for ( ;; )
{ 
WPVAELA = (VPVAELA_mp!=IQCAELA_nilmparams);
if ( WPVAELA )
{ /* line 5197: */
WPVAELA = ((*(&(VPVAELA_mp->Sort)))!=XWCAELA_expl_par);
}
if ( !(WPVAELA) ) break;
VPVAELA_mp = (*(&(VPVAELA_mp->Rest)));
}
 /* line 5198: */
 /* line 5199: */
XPVAELA = VPVAELA_mp;
} 
A_PROC_EXIT(nextexpl_par);
return( XPVAELA );
} 
#undef NL

A68_268 * ZPVAELA_fncall_flt(A68_167 * Fd)
{ 
A68_167 * AQVAELA_flt_fd;
A68_168 * BQVAELA;  /* YIELD */
A68_168 ** CQVAELA;  /* YIELD */
A68_INT * DQVAELA;  /* YIELD */
A68_268 * EQVAELA_fc;
A68_268  FQVAELA;  /* collateral clause result */
A68_170  GQVAELA;  /* OPERATORS - mode -> union mode */
A68_269 *** HQVAELA;  /* YIELD */
A68_268 * IQVAELA;  /* clause result */
A_PROC_ENTRY(fncall_flt);
 /* line 5203: */
{ 
AQVAELA_flt_fd = (A_HEAP(A68_167 ));
(*AQVAELA_flt_fd) = (*Fd);
 /* line 5204: */
BQVAELA = A_HEAP(A68_168 ) ;
(*BQVAELA) = (*(*(&(AQVAELA_flt_fd->Fninfo)))) ;
CQVAELA = (&(AQVAELA_flt_fd->Fninfo)) ;
(*CQVAELA) = BQVAELA;
 /* line 5205: */
DQVAELA = (&((*(&(AQVAELA_flt_fd->Fninfo)))->Status)) ;
(*DQVAELA) = CXCAELA_fn_flt;
 /* line 5206: */
EQVAELA_fc = (A_HEAP(A68_268 ));
FQVAELA.F = AQVAELA_flt_fd;
FQVAELA.Pvals = BUCAELA_nilparamvals;
FQVAELA.Nextpvals = (A68_269 **)A68_NIL;
FQVAELA.Attr = A_UNITE(GQVAELA,mode6,6,MRCAELA_attrnull);
(*EQVAELA_fc) = FQVAELA;
 /* line 5207: */
HQVAELA = (&(EQVAELA_fc->Nextpvals)) ;
(*HQVAELA) = (&(EQVAELA_fc->Pvals));
 /* line 5208: */
 /* line 5209: */
IQVAELA = EQVAELA_fc;
} 
A_PROC_EXIT(fncall_flt);
return( IQVAELA );
} 
#undef NL

A68_BOOL  KQVAELA_inst_has_fn_in(A68_210 * J)
{ 
A68_210  LQVAELA;  /* united object - for case conformity */
A68_215 * MQVAELA_jfn;
A68_BOOL  NQVAELA;  /* clause result */
A68_217 * OQVAELA_jio;
A68_216 * PQVAELA_jr;
A68_BOOL  QQVAELA_ans;
A68_INT  RQVAELA_i;
A68_INT  SQVAELA;  /* to part of loop */
A68_BOOL  TQVAELA;  /* optbool result */
A68_221  UQVAELA;  /* OPERATORS - simple index */
A68_214 * VQVAELA_js;
A68_214 * WQVAELA_jst;
A68_BOOL  XQVAELA_ans;
A68_BOOL  YQVAELA;  /* optbool result */
A68_219 * ZQVAELA_jr;
A_PROC_ENTRY(inst_has_fn_in);
 /* line 5212: */
 /* line 5213: */
LQVAELA = (*J) ;
switch ( LQVAELA.mode )
{ 
case 2: /* REF STRUCT(MODE218)  */
MQVAELA_jfn = (LQVAELA.data.mode2);
 /* line 5214: */
NQVAELA = A68_TRUE;
break;
case 4: /* REF STRUCT(MODE210,MODE210)  */
OQVAELA_jio = (LQVAELA.data.mode4);
 /* line 5215: */
NQVAELA = A68_TRUE;
break;
case 3: /* REF STRUCT(REF MODE221)  */
PQVAELA_jr = (LQVAELA.data.mode3);
{ 
QQVAELA_ans = A68_FALSE;
 /* line 5216: */
 /* line 5217: */
SQVAELA = (*(&(PQVAELA_jr->Jrow))).upb;
for ( RQVAELA_i = 1;
RQVAELA_i <= SQVAELA;
RQVAELA_i += 1 )
{ 
TQVAELA = QQVAELA_ans;
if ( ! TQVAELA )
{UQVAELA = (*(&(PQVAELA_jr->Jrow))) ;
TQVAELA = KQVAELA_inst_has_fn_in((&A_VINDEX(UQVAELA,RQVAELA_i)));
}
QQVAELA_ans = TQVAELA;
}
 /* line 5218: */
 /* line 5219: */
NQVAELA = QQVAELA_ans;
} 
break;
case 1: /* REF STRUCT(MODE210,REF MODE214)  */
VQVAELA_js = (LQVAELA.data.mode1);
{ 
WQVAELA_jst = VQVAELA_js;
 /* line 5220: */
XQVAELA_ans = A68_FALSE;
 /* line 5221: */
for ( ;; )
{ 
 /* line 5222: */
if ( !((WQVAELA_jst!=PQCAELA_niljoinst)) ) break;
YQVAELA = XQVAELA_ans;
if ( ! YQVAELA )
{YQVAELA = KQVAELA_inst_has_fn_in((&(WQVAELA_jst->Jst)));
}
XQVAELA_ans = YQVAELA;
 /* line 5223: */
 /* line 5224: */
WQVAELA_jst = (*(&(WQVAELA_jst->Rest)));
}
 /* line 5225: */
 /* line 5226: */
NQVAELA = XQVAELA_ans;
} 
break;
case 6: /* REF STRUCT(MODE210,MODE220)  */
ZQVAELA_jr = (LQVAELA.data.mode6);
 /* line 5227: */
NQVAELA = KQVAELA_inst_has_fn_in((&(ZQVAELA_jr->Jrep)));
break;
default: 
 /* line 5228: */
NQVAELA = A68_FALSE;
break;
} 
A_PROC_EXIT(inst_has_fn_in);
return( NQVAELA );
} 
#undef NL

A_STATIC A68_VOID  CRVAELA_index_rep(A68_219 * Jrep, A68_INT  Index, A68_210  *ReturnedValue)
{ 
A68_520  HRVAELA_substvarstack;   /* proc value of non-global proc */
A68_220 * PRVAELA_jstack;
A68_INT  QRVAELA_int1;
A68_INT  RRVAELA_int2;
A68_INT  SRVAELA_size;
A68_210  TRVAELA_ans;
A68_BOOL  URVAELA;  /* optbool result */
A68_219  VRVAELA;  /* collateral clause result */
A68_219 * WRVAELA;  /* YIELD */
A68_210  XRVAELA;  /* OPERATORS - mode -> union mode */
A68_210  YRVAELA;  /* OPERATORS - mode -> union mode */
A68_414  ASVAELA;  /* avoid structure result */
A68_414  ZRVAELA_restest;
A68_210  BSVAELA;  /* OPERATORS - mode -> union mode */
A68_210  CSVAELA;  /* OPERATORS - mode -> union mode */
A68_210  DSVAELA;  /* avoid structure result */
A68_210  ESVAELA;  /* clause result */
A_PROC_ENTRY(index_rep);
 /* line 5231: */
{ 
A_CLOSURE( HRVAELA_substvarstack, IRVAELA_substvarstack, JRVAELA_substvarstack );
(( JRVAELA_substvarstack * ) ( HRVAELA_substvarstack.nonlocals )) -> Index = Index;
(( JRVAELA_substvarstack * ) ( HRVAELA_substvarstack.nonlocals )) -> HRVAELA_substvarstack = HRVAELA_substvarstack;
 /* line 5239: */
PRVAELA_jstack = A_CALLPROC(HRVAELA_substvarstack,((&(Jrep->Jvarstack))),((&(Jrep->Jvarstack)),(HRVAELA_substvarstack).nonlocals));
 /* line 5240: */
SRVAELA_size = 0;
 /* line 5241: */
TRVAELA_ans = (*(&(Jrep->Jrep)));
 /* line 5242: */
for ( ;; )
{ 
 /* line 5243: */
if ( !((PRVAELA_jstack!=SQCAELA_niljoinvarstack)) ) break;
URVAELA = HDTAELA_ihasvmno((*(&(PRVAELA_jstack->Lwb))));
if ( ! URVAELA )
{ /* line 5244: */
URVAELA = HDTAELA_ihasvmno((*(&(PRVAELA_jstack->Upb))));
}
if ( URVAELA )
{ 
VRVAELA.Jrep = TRVAELA_ans;
VRVAELA.Jvarstack = (*PRVAELA_jstack);
WRVAELA = A_HEAP(A68_219 ) ;
(*WRVAELA) = VRVAELA ;
TRVAELA_ans = A_UNITE(XRVAELA,mode6,6,WRVAELA);
 /* line 5245: */
 /* line 5246: */
goto ERVAELA_exit;
} 
else
{ 
QRVAELA_int1 = HDRAELA_giveint((*(&(PRVAELA_jstack->Lwb))));
 /* line 5247: */
RRVAELA_int2 = HDRAELA_giveint((*(&(PRVAELA_jstack->Upb))));
 /* line 5248: */
SRVAELA_size = MGVAELA_get_size(TRVAELA_ans);
 /* line 5249: */
 /* line 5250: */
 /* line 5251: */
if ( (SRVAELA_size==(-1)) )
{ 
PRVAELA_jstack = SQCAELA_niljoinvarstack;
 /* line 5252: */
TRVAELA_ans = A_UNITE(YRVAELA,mode7,7,DRCAELA_flt);
 /* line 5253: */
 /* line 5254: */
goto ERVAELA_exit;
} 
else
{ 
 /* line 5255: */
AHVAELA_trim_error( (&(PRVAELA_jstack->Lwb)), (&(PRVAELA_jstack->Upb)), SRVAELA_size, &ASVAELA );
ZRVAELA_restest = ASVAELA;
 /* line 5256: */
 /* line 5257: */
if ( LSRAELA_(ZRVAELA_restest, CSRAELA_unknown) )
{ 
AEVAELA_mark_join((&TRVAELA_ans), RRCAELA_jcheck, A68_FALSE);
 /* line 5258: */
PRVAELA_jstack = SQCAELA_niljoinvarstack;
 /* line 5259: */
TRVAELA_ans = A_UNITE(BSVAELA,mode7,7,DRCAELA_flt);
 /* line 5260: */
 /* line 5261: */
goto ERVAELA_exit;
} 
else
{ 
 /* line 5262: */
if ( LSRAELA_(ZRVAELA_restest, BSRAELA_false) )
{ 
AEVAELA_mark_join((&TRVAELA_ans), SRCAELA_jfault, A68_FALSE);
 /* line 5263: */
PRVAELA_jstack = SQCAELA_niljoinvarstack;
 /* line 5264: */
TRVAELA_ans = A_UNITE(CSVAELA,mode7,7,DRCAELA_flt);
 /* line 5265: */
 /* line 5266: */
 /* line 5267: */
goto ERVAELA_exit;
} 
else
{ 
 /* line 5268: */
/*SKIP*/;
} 
} 
} 
 /* line 5269: */
UKVAELA_jointrim( (&TRVAELA_ans), (*(&(PRVAELA_jstack->Lwb))), (*(&(PRVAELA_jstack->Upb))), &DSVAELA );
TRVAELA_ans = DSVAELA;
 /* line 5270: */
 /* line 5271: */
 /* line 5272: */
PRVAELA_jstack = (*(&(PRVAELA_jstack->Rest)));
} 
}
 /* line 5273: */
ERVAELA_exit:
 /* line 5274: */
ESVAELA = TRVAELA_ans;
} 
A_PROC_EXIT(index_rep);
*ReturnedValue = (ESVAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  ISVAELA_indexreturn(A68_210  Jup, A68_INT  Index, A68_BOOL  Toplevel, A68_210  *ReturnedValue)
{ 
A68_522  LSVAELA_index_jst;   /* proc value of non-global proc */
A68_210  SSVAELA;  /* united object - for case conformity */
A68_215 * TSVAELA_jf;
A68_210  USVAELA;  /* clause result */
A68_217 * VSVAELA_ji;
A68_214 * WSVAELA_jst;
A68_210  XSVAELA;  /* OPERATORS - mode -> union mode */
A68_214 * YSVAELA;  /* YIELD */
A68_216 * ZSVAELA_jr;
A68_216 * ATVAELA_jrr;
A68_490  CTVAELA_generator;   /* proc value of non-global proc */
A68_221  HTVAELA;  /* avoid structure result */
A68_221 * ITVAELA;  /* YIELD */
A68_INT  JTVAELA_i;
A68_INT  KTVAELA;  /* to part of loop */
A68_221  LTVAELA;  /* OPERATORS - simple index */
A68_221  MTVAELA;  /* OPERATORS - simple index */
A68_210  NTVAELA;  /* avoid structure result */
A68_210 * OTVAELA;  /* YIELD */
A68_210  PTVAELA;  /* OPERATORS - mode -> union mode */
A68_219 * QTVAELA_jr;
A68_210  RTVAELA;  /* avoid structure result */
A_PROC_ENTRY(indexreturn);
 /* line 5278: */
{ 
A_CLOSURE( LSVAELA_index_jst, MSVAELA_index_jst, NSVAELA_index_jst );
(( NSVAELA_index_jst * ) ( LSVAELA_index_jst.nonlocals )) -> Index = Index;
(( NSVAELA_index_jst * ) ( LSVAELA_index_jst.nonlocals )) -> Toplevel = Toplevel;
(( NSVAELA_index_jst * ) ( LSVAELA_index_jst.nonlocals )) -> LSVAELA_index_jst = LSVAELA_index_jst;
 /* line 5284: */
 /* line 5285: */
SSVAELA = Jup ;
switch ( SSVAELA.mode )
{ 
case 2: /* REF STRUCT(MODE218)  */
TSVAELA_jf = (SSVAELA.data.mode2);
{ 
 /* line 5286: */
if ( Toplevel )
{ 
 /* line 5287: */
 /* line 5288: */
UQPAELA_fault(210, VJAAOSI_nullmsg);
} 
 /* line 5289: */
 /* line 5290: */
USVAELA = Jup;
} 
break;
case 4: /* REF STRUCT(MODE210,MODE210)  */
VSVAELA_ji = (SSVAELA.data.mode4);
{ 
 /* line 5291: */
if ( Toplevel )
{ 
 /* line 5292: */
UQPAELA_fault(211, VJAAOSI_nullmsg);
} 
 /* line 5293: */
 /* line 5294: */
USVAELA = Jup;
} 
break;
case 1: /* REF STRUCT(MODE210,REF MODE214)  */
WSVAELA_jst = (SSVAELA.data.mode1);
 /* line 5295: */
YSVAELA = A_CALLPROC(LSVAELA_index_jst,(WSVAELA_jst),(WSVAELA_jst,(LSVAELA_index_jst).nonlocals)) ;
USVAELA = A_UNITE(XSVAELA,mode1,1,YSVAELA);
break;
case 3: /* REF STRUCT(REF MODE221)  */
ZSVAELA_jr = (SSVAELA.data.mode3);
{ 
ATVAELA_jrr = (A_HEAP(A68_216 ));
 /* line 5296: */
A_CLOSURE( CTVAELA_generator, DTVAELA_generator, ETVAELA_generator );
(( ETVAELA_generator * ) ( CTVAELA_generator.nonlocals )) -> ZSVAELA_jr = ZSVAELA_jr;
A_CALLPROC(CTVAELA_generator,(A68_FALSE, &HTVAELA),(A68_FALSE, &HTVAELA,(CTVAELA_generator).nonlocals));
ITVAELA = (&(ATVAELA_jrr->Jrow)) ;
(*ITVAELA) = HTVAELA;
 /* line 5297: */
 /* line 5298: */
if ( ((*(&(ZSVAELA_jr->Jrow))).upb>0) )
{ 
 /* line 5299: */
KTVAELA = (*(&(ZSVAELA_jr->Jrow))).upb;
for ( JTVAELA_i = 1;
JTVAELA_i <= KTVAELA;
JTVAELA_i += 1 )
{ 
 /* line 5300: */
 /* line 5301: */
LTVAELA = (*(&(ATVAELA_jrr->Jrow))) ;
MTVAELA = (*(&(ZSVAELA_jr->Jrow))) ;
ISVAELA_indexreturn( (*(&A_VINDEX(MTVAELA,JTVAELA_i))), Index, Toplevel, &NTVAELA );
OTVAELA = (&A_VINDEX(LTVAELA,JTVAELA_i)) ;
(*OTVAELA) = NTVAELA;
}
 /* line 5302: */
} 
 /* line 5303: */
 /* line 5304: */
 /* line 5305: */
USVAELA = A_UNITE(PTVAELA,mode3,3,ATVAELA_jrr);
} 
break;
case 6: /* REF STRUCT(MODE210,MODE220)  */
QTVAELA_jr = (SSVAELA.data.mode6);
 /* line 5306: */
 /* line 5307: */
CRVAELA_index_rep( QTVAELA_jr, Index, &RTVAELA );
USVAELA = RTVAELA;
break;
default: 
 /* line 5308: */
USVAELA = Jup;
break;
} 
} 
A_PROC_EXIT(indexreturn);
*ReturnedValue = (USVAELA);
return;
} 
#undef NL

A68_VOID  UTVAELA_varmult_joinup(A68_317 * Iddecs, A68_210  Joinup, A68_210  *ReturnedValue)
{ 
A68_193 * VTVAELA_repl;
A68_INT  WTVAELA_size;
A68_216 * XTVAELA_jrr;
A68_490  ZTVAELA_generator;   /* proc value of non-global proc */
A68_221  EUVAELA;  /* avoid structure result */
A68_221 * FUVAELA;  /* YIELD */
A68_INT  GUVAELA_istep;
A68_221  HUVAELA;  /* OPERATORS - simple index */
A68_210  IUVAELA;  /* avoid structure result */
A68_210 * JUVAELA;  /* YIELD */
A68_210  KUVAELA;  /* clause result */
A68_210  LUVAELA;  /* OPERATORS - mode -> union mode */
A68_210  MUVAELA;  /* OPERATORS - mode -> union mode */
A68_210  NUVAELA_jj;
A68_218 * OUVAELA;  /* YIELD */
A68_210  PUVAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(varmult_joinup);
 /* line 5314: */
{ 
VTVAELA_repl = KTDAELA_get_intvarmult((*(&(Iddecs->Ids))));
 /* line 5315: */
 /* line 5316: */
if ( ARRAELA_replknown(VTVAELA_repl) )
{ 
WTVAELA_size = ((HDRAELA_giveint((*(&(VTVAELA_repl->Upb))))-HDRAELA_giveint((*(&(VTVAELA_repl->Lwb)))))+1);
 /* line 5317: */
 /* line 5318: */
if ( (WTVAELA_size>0) )
{ 
XTVAELA_jrr = (A_HEAP(A68_216 ));
 /* line 5319: */
A_CLOSURE( ZTVAELA_generator, AUVAELA_generator, BUVAELA_generator );
(( BUVAELA_generator * ) ( ZTVAELA_generator.nonlocals )) -> WTVAELA_size = WTVAELA_size;
A_CALLPROC(ZTVAELA_generator,(A68_FALSE, &EUVAELA),(A68_FALSE, &EUVAELA,(ZTVAELA_generator).nonlocals));
FUVAELA = (&(XTVAELA_jrr->Jrow)) ;
(*FUVAELA) = EUVAELA;
 /* line 5320: */
for ( GUVAELA_istep = 1;;
GUVAELA_istep += 1 ) 
{ 
 /* line 5321: */
if ( !(IRRAELA_nextrepl(VTVAELA_repl)) ) break;
HUVAELA = (*(&(XTVAELA_jrr->Jrow))) ;
ISVAELA_indexreturn( Joinup, (*(&(Iddecs->Xno))), A68_TRUE, &IUVAELA );
JUVAELA = (&A_VINDEX(HUVAELA,GUVAELA_istep)) ;
(*JUVAELA) = IUVAELA;
}
 /* line 5322: */
 /* line 5323: */
 /* line 5324: */
KUVAELA = A_UNITE(LUVAELA,mode3,3,XTVAELA_jrr);
} 
else
{ 
 /* line 5325: */
KUVAELA = A_UNITE(MUVAELA,mode5,5,(&SRCAELA_jfault));
} 
} 
else
{ 
NUVAELA_jj = Joinup;
 /* line 5326: */
AEVAELA_mark_join((&NUVAELA_jj), RRCAELA_jcheck, ANPAELA_lhsjoin);
 /* line 5327: */
 /* line 5328: */
 /* line 5329: */
OUVAELA = A_HEAP(A68_218 ) ;
(*OUVAELA) = RRCAELA_jcheck ;
KUVAELA = A_UNITE(PUVAELA,mode5,5,OUVAELA);
} 
} 
A_PROC_EXIT(varmult_joinup);
*ReturnedValue = (KUVAELA);
return;
} 
#undef NL

A68_VOID  TUVAELA_replicate_joinup(A68_244 * Idlist, A68_317 * Iddecs, A68_210  Joinup, A68_210  *ReturnedValue)
{ 
A68_INT  UUVAELA_startindex;
A68_293 * VUVAELA_s;
A68_BOOL  WUVAELA;  /* optbool result */
A68_244 * XUVAELA_i;
A68_BOOL  YUVAELA;  /* optbool result */
A68_BOOL  ZUVAELA;  /* optbool result */
A68_199  AVVAELA;  /* united object - for case conformity */
A68_200  BVVAELA_int;
A68_185  CVVAELA;  /* united object - for case conformity */
A68_193 * DVVAELA_iv;
A68_210  EVVAELA_ans;
A68_317 * FVVAELA_vids;
A68_BOOL  GVVAELA;  /* optbool result */
A68_210  HVVAELA;  /* avoid structure result */
A68_210  IVVAELA;  /* clause result */
A_PROC_ENTRY(replicate_joinup);
 /* line 5333: */
{ 
UUVAELA_startindex = (-1);
 /* line 5334: */
VUVAELA_s = ENPAELA_scopestack;
 /* line 5335: */
for ( ;; )
{ 
WUVAELA = (VUVAELA_s!=CUCAELA_nilscope);
if ( WUVAELA )
{ /* line 5336: */
WUVAELA = ((*(&(VUVAELA_s->Scope)))!=YKCAELA_fnstart);
}
if ( !(WUVAELA) ) break;
VUVAELA_s = (*(&(VUVAELA_s->Rest)));
}
 /* line 5337: */
XUVAELA_i = Idlist;
 /* line 5338: */
for ( ;; )
{ 
 /* line 5339: */
YUVAELA = (XUVAELA_i!=CQCAELA_nilids);
if ( YUVAELA )
{ZUVAELA = (VUVAELA_s==CUCAELA_nilscope);
if ( ! ZUVAELA )
{ZUVAELA = ((*(&(VUVAELA_s->Ids)))!=XUVAELA_i);
}
 /* line 5340: */
YUVAELA = ZUVAELA;
}
if ( !(YUVAELA) ) break;
 /* line 5341: */
AVVAELA = (*(&((*(&(XUVAELA_i->Idinfo)))->U))) ;
switch ( AVVAELA.mode )
{ 
case 1: /* STRUCT(MODE185)  */
BVVAELA_int = (AVVAELA.data.mode1);
 /* line 5342: */
CVVAELA = BVVAELA_int.I ;
switch ( CVVAELA.mode )
{ 
case 10: /* REF STRUCT(INT,MODE185,MODE185,MODE185)  */
DVVAELA_iv = (CVVAELA.data.mode10);
 /* line 5343: */
 /* line 5344: */
UUVAELA_startindex = (*(&(DVVAELA_iv->Varmultno)));
break;
default: 
 /* line 5345: */
 /* line 5346: */
/*SKIP*/;
break;
} 
break;
default: 
/*SKIP*/;
break;
} 
 /* line 5347: */
 /* line 5348: */
XUVAELA_i = (*(&(XUVAELA_i->Rest)));
}
 /* line 5349: */
 /* line 5350: */
if ( (UUVAELA_startindex>0) )
{ 
EVVAELA_ans = Joinup;
 /* line 5351: */
FVVAELA_vids = Iddecs;
 /* line 5352: */
for ( ;; )
{ 
GVVAELA = (FVVAELA_vids!=XQCAELA_niliddecs);
if ( GVVAELA )
{ /* line 5353: */
GVVAELA = ((*(&(FVVAELA_vids->Xno)))>=UUVAELA_startindex);
}
if ( !(GVVAELA) ) break;
UTVAELA_varmult_joinup( FVVAELA_vids, EVVAELA_ans, &HVVAELA );
EVVAELA_ans = HVVAELA;
 /* line 5354: */
 /* line 5355: */
FVVAELA_vids = (*(&(FVVAELA_vids->Rest)));
}
 /* line 5356: */
 /* line 5357: */
 /* line 5358: */
IVVAELA = EVVAELA_ans;
} 
else
{ 
 /* line 5359: */
IVVAELA = Joinup;
} 
} 
A_PROC_EXIT(replicate_joinup);
*ReturnedValue = (IVVAELA);
return;
} 
#undef NL

A68_212 * LVVAELA_port_setup(A68_171 * Dd, A68_268  Fncall)
{ 
A68_INT  MVVAELA_fnno;
A68_171 * NVVAELA_d;
A68_244 * OVVAELA_ids;
A68_INT  PVVAELA_index;
A68_BOOL  QVVAELA_single;
A68_212 * RVVAELA_ans;
A68_172  SVVAELA;  /* avoid structure result */
A68_172  TVVAELA_typ;
A68_199  UVVAELA;  /* united object - for case conformity */
A68_204 * VVVAELA_ds;
A68_INT  WVVAELA;  /* clause result */
A68_46  ZVVAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  AWVAELA;  /* OPERATORS - skip to mode */
A68_INT  BWVAELA_nameno;
A68_212  CWVAELA;  /* collateral clause result */
A68_212 * DWVAELA;  /* YIELD */
A68_212 * EWVAELA;  /* clause result */
A_PROC_ENTRY(port_setup);
 /* line 5363: */
{ 
MVVAELA_fnno = (*(&(Fncall.F->Fnno)));
 /* line 5364: */
NVVAELA_d = Dd;
 /* line 5365: */
 /* line 5366: */
PVVAELA_index = 0;
 /* line 5367: */
for ( ;; )
{ 
 /* line 5368: */
if ( !((NVVAELA_d!=FQCAELA_nildecs)) ) break;
OVVAELA_ids = (*(&(NVVAELA_d->Ids)));
 /* line 5369: */
for ( ;; )
{ 
if ( !((OVVAELA_ids!=CQCAELA_nilids)) ) break;
PVVAELA_index+=1;
OVVAELA_ids = (*(&(OVVAELA_ids->Rest)));
}
 /* line 5370: */
 /* line 5371: */
NVVAELA_d = (*(&(NVVAELA_d->Rest)));
}
 /* line 5372: */
NVVAELA_d = Dd;
 /* line 5373: */
QVVAELA_single = (PVVAELA_index==1);
 /* line 5374: */
RVVAELA_ans = (A68_212 *)A68_NIL;
 /* line 5375: */
for ( ;; )
{ 
 /* line 5376: */
if ( !((NVVAELA_d!=FQCAELA_nildecs)) ) break;
UMTAELA_substtype( Fncall, MVVAELA_fnno, (*(&(NVVAELA_d->T))), &SVVAELA );
TVVAELA_typ = SVVAELA;
 /* line 5377: */
OVVAELA_ids = (*(&(NVVAELA_d->Ids)));
 /* line 5378: */
for ( ;; )
{ 
 /* line 5379: */
if ( !((OVVAELA_ids!=CQCAELA_nilids)) ) break;
 /* line 5380: */
UVVAELA = (*(&((*(&(OVVAELA_ids->Idinfo)))->U))) ;
switch ( UVVAELA.mode )
{ 
case 5: /* REF STRUCT(INT,INT,REF MODE209,MODE172,MODE210,MODE210,MODE211,MODE211)  */
VVVAELA_ds = (UVVAELA.data.mode5);
 /* line 5381: */
WVVAELA = (*(&(VVVAELA_ds->Decno)));
break;
default: 
UQPAELA_fault(0, A_HVEC(ZVVAELA,YVVAELA,A68_VC ));
 /* line 5382: */
WVVAELA = AWVAELA;
break;
} 
BWVAELA_nameno = WVVAELA;
 /* line 5383: */
 /* line 5384: */
CWVAELA.Id = (*(&((*(&(OVVAELA_ids->Idinfo)))->Id)));
CWVAELA.Fnno = MVVAELA_fnno;
CWVAELA.Nameno = BWVAELA_nameno;
CWVAELA.Index = PVVAELA_index;
CWVAELA.Type = TVVAELA_typ;
CWVAELA.Single = QVVAELA_single;
CWVAELA.Rest = RVVAELA_ans;
DWVAELA = A_HEAP(A68_212 ) ;
(*DWVAELA) = CWVAELA ;
RVVAELA_ans = DWVAELA;
 /* line 5385: */
PVVAELA_index-=1;
 /* line 5386: */
 /* line 5387: */
OVVAELA_ids = (*(&(OVVAELA_ids->Rest)));
}
 /* line 5388: */
 /* line 5389: */
NVVAELA_d = (*(&(NVVAELA_d->Rest)));
}
 /* line 5390: */
 /* line 5391: */
EWVAELA = RVVAELA_ans;
} 
A_PROC_EXIT(port_setup);
return( EWVAELA );
} 
#undef NL

A_STATIC A68_212 * HWVAELA_get_port_data(A68_212 * Port, A68_VC  Portname)
{ 
A68_172  IWVAELA;  /* united object - for case conformity */
A68_46  JWVAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_212 * KWVAELA;  /* clause result */
A_PROC_ENTRY(get_port_data);
 /* line 5395: */
 /* line 5396: */
if ( ((*(&(Port->Rest)))==VQCAELA_nilportdata) )
{ 
 /* line 5397: */
if ( A_VC_NE((*(&(Port->Id))),Portname) )
{ 
 /* line 5398: */
IWVAELA = RLPAELA_type ;
switch ( IWVAELA.mode )
{ 
case 10: /* STRUCT(INT)  */
 /* line 5399: */
/*SKIP*/;
break;
default: 
LKPAELA_fp3 = Portname;
 /* line 5400: */
 /* line 5401: */
UQPAELA_fault(246, A_HVEC(JWVAELA,LKPAELA_fp3,A68_VC ));
break;
} 
 /* line 5402: */
 /* line 5403: */
 /* line 5404: */
KWVAELA = VQCAELA_nilportdata;
} 
else
{ 
 /* line 5405: */
KWVAELA = Port;
} 
} 
else
{ 
 /* line 5406: */
if ( A_VC_NE((*(&(Port->Id))),Portname) )
{ 
 /* line 5407: */
 /* line 5408: */
KWVAELA = HWVAELA_get_port_data((*(&(Port->Rest))), Portname);
} 
else
{ 
KWVAELA = Port;
} 
} 
A_PROC_EXIT(get_port_data);
return( KWVAELA );
} 
#undef NL

A68_212 * NWVAELA_get_port_info(A68_211 * Port, A68_VC  Portname)
{ 
A68_211  OWVAELA;  /* united object - for case conformity */
A68_212 * PWVAELA_pd;
A68_212 * QWVAELA;  /* clause result */
A68_172  RWVAELA;  /* united object - for case conformity */
A_PROC_ENTRY(get_port_info);
 /* line 5411: */
 /* line 5412: */
OWVAELA = (*Port) ;
switch ( OWVAELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE26,INT,INT,INT,MODE172,BOOL,REF MODE212)  */
PWVAELA_pd = (OWVAELA.data.mode1);
 /* line 5413: */
QWVAELA = HWVAELA_get_port_data(PWVAELA_pd, Portname);
break;
default: 
 /* line 5414: */
RWVAELA = RLPAELA_type ;
switch ( RWVAELA.mode )
{ 
case 10: /* STRUCT(INT)  */
 /* line 5415: */
/*SKIP*/;
break;
default: 
 /* line 5416: */
UQPAELA_fault(247, VJAAOSI_nullmsg);
break;
} 
 /* line 5417: */
 /* line 5418: */
QWVAELA = VQCAELA_nilportdata;
break;
} 
A_PROC_EXIT(get_port_info);
return( QWVAELA );
} 
#undef NL

A68_VOID  TWVAELA_rowtype(A68_172  T, A68_172  *ReturnedValue)
{ 
A68_172  UWVAELA;  /* united object - for case conformity */
A68_174 * VWVAELA_nt;
A68_172  WWVAELA;  /* clause result */
A68_172  XWVAELA;  /* avoid structure result */
A68_175 * YWVAELA_st;
A68_172  ZWVAELA;  /* avoid structure result */
A68_179 * AXVAELA_rt;
A68_172  BXVAELA;  /* OPERATORS - mode -> union mode */
A68_180 * CXVAELA_tbt;
A68_172  DXVAELA;  /* avoid structure result */
A68_181 * EXVAELA_tst;
A68_179  FXVAELA;  /* collateral clause result */
A68_179 * GXVAELA;  /* YIELD */
A68_172  HXVAELA;  /* OPERATORS - mode -> union mode */
A68_176 * IXVAELA_tv;
A68_172  JXVAELA;  /* avoid structure result */
A68_172  KXVAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(rowtype);
 /* line 5421: */
 /* line 5422: */
UWVAELA = T ;
switch ( UWVAELA.mode )
{ 
case 2: /* REF STRUCT(REF MODE198,INT,MODE172)  */
VWVAELA_nt = (UWVAELA.data.mode2);
 /* line 5423: */
TWVAELA_rowtype( (*(&(VWVAELA_nt->T))), &XWVAELA );
WWVAELA = XWVAELA;
break;
case 3: /* REF STRUCT(MODE172,REF MODE175)  */
YWVAELA_st = (UWVAELA.data.mode3);
 /* line 5424: */
DQTAELA_sttorow( YWVAELA_st, &ZWVAELA );
WWVAELA = ZWVAELA;
break;
case 7: /* REF STRUCT(MODE172,MODE185)  */
AXVAELA_rt = (UWVAELA.data.mode7);
 /* line 5425: */
WWVAELA = A_UNITE(BXVAELA,mode7,7,AXVAELA_rt);
break;
case 8: /* REF STRUCT(MODE172)  */
CXVAELA_tbt = (UWVAELA.data.mode8);
 /* line 5426: */
TWVAELA_rowtype( (*(&(CXVAELA_tbt->Tbracket))), &DXVAELA );
WWVAELA = DXVAELA;
break;
case 9: /* REF STRUCT(MODE185,MODE172)  */
EXVAELA_tst = (UWVAELA.data.mode9);
FXVAELA.T = (*(&(EXVAELA_tst->Tstring)));
FXVAELA.Size = (*(&(EXVAELA_tst->Size)));
 /* line 5427: */
GXVAELA = A_HEAP(A68_179 ) ;
(*GXVAELA) = FXVAELA ;
WWVAELA = A_UNITE(HXVAELA,mode7,7,GXVAELA);
break;
case 4: /* REF STRUCT(REF MODE245,MODE172)  */
IXVAELA_tv = (UWVAELA.data.mode4);
 /* line 5428: */
 /* line 5429: */
TWVAELA_rowtype( (*(&(IXVAELA_tv->T))), &JXVAELA );
WWVAELA = JXVAELA;
break;
default: 
WWVAELA = A_UNITE(KXVAELA,mode10,10,DRCAELA_flt);
break;
} 
A_PROC_EXIT(rowtype);
*ReturnedValue = (WWVAELA);
return;
} 
#undef NL

A_STATIC A68_BOOL  NXVAELA_equal_palts(A68_249 * A, A68_249 * B)
{ 
A68_BOOL  OXVAELA;  /* clause result */
A68_172 * PXVAELA_at;
A68_172 * QXVAELA_bt;
A68_BOOL  RXVAELA;  /* optbool result */
A68_BOOL  SXVAELA;  /* optbool result */
A_PROC_ENTRY(equal_palts);
 /* line 5433: */
if ( (A==BQCAELA_nilpalts) )
{ 
 /* line 5434: */
OXVAELA = (B==BQCAELA_nilpalts);
} 
else
{ 
if ( (B==BQCAELA_nilpalts) )
{ 
 /* line 5435: */
OXVAELA = A68_FALSE;
} 
else
{ 
PXVAELA_at = (*(&(A->U)));
 /* line 5436: */
QXVAELA_bt = (*(&(B->U)));
 /* line 5437: */
RXVAELA = (PXVAELA_at==EQCAELA_niltype);
if ( RXVAELA )
{RXVAELA = (QXVAELA_bt==EQCAELA_niltype);
}
 /* line 5438: */
if ( ! RXVAELA )
{SXVAELA = (PXVAELA_at!=EQCAELA_niltype);
if ( SXVAELA )
{SXVAELA = (QXVAELA_bt!=EQCAELA_niltype);
}
 /* line 5439: */
if ( SXVAELA )
{SXVAELA = ZQSAELA_specequals((*PXVAELA_at), (*QXVAELA_bt), 0, A68_FALSE);
}
RXVAELA = SXVAELA;
}
 /* line 5440: */
if ( RXVAELA )
{ /* line 5441: */
RXVAELA = NXVAELA_equal_palts((*(&(A->Rest))), (*(&(B->Rest))));
}
OXVAELA = RXVAELA;
} 
} 
A_PROC_EXIT(equal_palts);
return( OXVAELA );
} 
#undef NL

A_STATIC A68_BOOL  VXVAELA_equal_pstrings(A68_250  Ps1, A68_250  Ps2)
{ 
A68_INT  WXVAELA_i1;
A68_INT  XXVAELA_i2;
A68_BOOL * YXVAELA_j;
A68_54  ZXVAELA;  /* forall yield */
A68_INT  AYVAELA;  /* forall loop counter */
A68_BOOL * BYVAELA_k;
A68_54  CYVAELA;  /* forall yield */
A68_INT  DYVAELA;  /* forall loop counter */
A68_BOOL  EYVAELA;  /* clause result */
A_PROC_ENTRY(equal_pstrings);
 /* line 5444: */
 /* line 5445: */
{ 
WXVAELA_i1 = 0;
XXVAELA_i2 = 0;
 /* line 5446: */
ZXVAELA = Ps1.Charcheck ;
AYVAELA = ZXVAELA.upb -1;
YXVAELA_j = ZXVAELA.data;
for (;AYVAELA-- >= 0;
(YXVAELA_j++
) )
{
if ( (*YXVAELA_j) )
{ 
WXVAELA_i1+=1;
} 
}
 /* line 5447: */
CYVAELA = Ps2.Charcheck ;
DYVAELA = CYVAELA.upb -1;
BYVAELA_k = CYVAELA.data;
for (;DYVAELA-- >= 0;
(BYVAELA_k++
) )
{
if ( (*BYVAELA_k) )
{ 
XXVAELA_i2+=1;
} 
}
 /* line 5448: */
 /* line 5449: */
EYVAELA = (WXVAELA_i1==XXVAELA_i2);
} 
A_PROC_EXIT(equal_pstrings);
return( EYVAELA );
} 
#undef NL

A_STATIC A68_BOOL  IYVAELA_anonymous(A68_172  T1, A68_172  T2, A68_INT  Diff)
{ 
A68_172  JYVAELA;  /* united object - for case conformity */
A68_173 * KYVAELA_ps1;
A68_172  LYVAELA;  /* united object - for case conformity */
A68_173 * MYVAELA_ps2;
A68_247  NYVAELA;  /* united object - for case conformity */
A68_248  OYVAELA_pr1;
A68_247  PYVAELA;  /* united object - for case conformity */
A68_248  QYVAELA_pr2;
A68_BOOL  RYVAELA;  /* optbool result */
A68_BOOL  SYVAELA;  /* clause result */
A68_249 * TYVAELA_pa1;
A68_247  UYVAELA;  /* united object - for case conformity */
A68_249 * VYVAELA_pa2;
A68_250  WYVAELA_pst1;
A68_247  XYVAELA;  /* united object - for case conformity */
A68_250  YYVAELA_pst2;
A68_174 * ZYVAELA_n2;
A68_176 * AZVAELA_tv2;
A68_172  BZVAELA;  /* united object - for case conformity */
 /* line 5452: */
 /* line 5453: */
JYVAELA = T1 ;
switch ( JYVAELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE198,INT,MODE247)  */
KYVAELA_ps1 = (JYVAELA.data.mode1);
 /* line 5454: */
 /* line 5455: */
LYVAELA = T2 ;
switch ( LYVAELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE198,INT,MODE247)  */
MYVAELA_ps2 = (LYVAELA.data.mode1);
 /* line 5456: */
 /* line 5457: */
NYVAELA = (*(&(KYVAELA_ps1->U))) ;
switch ( NYVAELA.mode )
{ 
case 1: /* STRUCT(REF MODE198,MODE185,MODE185)  */
OYVAELA_pr1 = (NYVAELA.data.mode1);
 /* line 5458: */
 /* line 5459: */
PYVAELA = (*(&(MYVAELA_ps2->U))) ;
switch ( PYVAELA.mode )
{ 
case 1: /* STRUCT(REF MODE198,MODE185,MODE185)  */
QYVAELA_pr2 = (PYVAELA.data.mode1);
 /* line 5460: */
RYVAELA = XZRAELA_integerequals(OYVAELA_pr1.Lwb, QYVAELA_pr2.Lwb, Diff);
if ( RYVAELA )
{ /* line 5461: */
RYVAELA = XZRAELA_integerequals(OYVAELA_pr1.Upb, QYVAELA_pr2.Upb, Diff);
}
SYVAELA = RYVAELA;
break;
default: 
 /* line 5462: */
 /* line 5463: */
SYVAELA = A68_FALSE;
break;
} 
break;
case 2: /* REF STRUCT(REF MODE198,REF MODE172,REF MODE249)  */
TYVAELA_pa1 = (NYVAELA.data.mode2);
 /* line 5464: */
 /* line 5465: */
UYVAELA = (*(&(MYVAELA_ps2->U))) ;
switch ( UYVAELA.mode )
{ 
case 2: /* REF STRUCT(REF MODE198,REF MODE172,REF MODE249)  */
VYVAELA_pa2 = (UYVAELA.data.mode2);
 /* line 5466: */
SYVAELA = NXVAELA_equal_palts(TYVAELA_pa1, VYVAELA_pa2);
break;
default: 
 /* line 5467: */
 /* line 5468: */
SYVAELA = A68_FALSE;
break;
} 
break;
case 3: /* STRUCT(REF MODE198,REF MODE54,REF MODE251)  */
WYVAELA_pst1 = (NYVAELA.data.mode3);
 /* line 5469: */
 /* line 5470: */
XYVAELA = (*(&(MYVAELA_ps2->U))) ;
switch ( XYVAELA.mode )
{ 
case 3: /* STRUCT(REF MODE198,REF MODE54,REF MODE251)  */
YYVAELA_pst2 = (XYVAELA.data.mode3);
 /* line 5471: */
SYVAELA = VXVAELA_equal_pstrings(WYVAELA_pst1, YYVAELA_pst2);
break;
default: 
 /* line 5472: */
 /* line 5473: */
SYVAELA = A68_FALSE;
break;
} 
break;
default: 
 /* line 5474: */
 /* line 5475: */
SYVAELA = A68_FALSE;
break;
} 
break;
case 2: /* REF STRUCT(REF MODE198,INT,MODE172)  */
ZYVAELA_n2 = (LYVAELA.data.mode2);
 /* line 5476: */
SYVAELA = A_CALLPROC(CASAELA_equiv_types,(T1, (*(&(ZYVAELA_n2->T))), Diff),(T1, (*(&(ZYVAELA_n2->T))), Diff,(CASAELA_equiv_types).nonlocals));
break;
case 4: /* REF STRUCT(REF MODE245,MODE172)  */
AZVAELA_tv2 = (LYVAELA.data.mode4);
 /* line 5477: */
SYVAELA = A_CALLPROC(CASAELA_equiv_types,(T1, (*(&(AZVAELA_tv2->T))), Diff),(T1, (*(&(AZVAELA_tv2->T))), Diff,(CASAELA_equiv_types).nonlocals));
break;
case 10: /* STRUCT(INT)  */
 /* line 5478: */
SYVAELA = A68_TRUE;
break;
default: 
 /* line 5479: */
 /* line 5480: */
SYVAELA = A68_FALSE;
break;
} 
break;
case 5: /* STRUCT(INT)  */
BZVAELA = T2 ;
switch ( BZVAELA.mode )
{ 
case 5: /* STRUCT(INT)  */
SYVAELA = A68_TRUE;
break;
default: 
 /* line 5481: */
SYVAELA = A68_FALSE;
break;
} 
break;
case 10: /* STRUCT(INT)  */
 /* line 5482: */
SYVAELA = A68_TRUE;
break;
default: 
 /* line 5483: */
 /* line 5486: */
SYVAELA = ZQSAELA_specequals(T1, T2, 0, A68_FALSE);
break;
} 
return( SYVAELA );
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 5: */
void IHPAELA(void)   /* initialise DECS compileproc */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/compileproc.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/sidanalyser.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","./mfiles/compmodes.m","/u/model/ella/transform/assoc/mfiles/charset.m","./mfiles/impmacro.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_VC  THPAELA;  /* avoid structure result */
A68_INT  UHPAELA;  /* YIELD */
A68_CHAR * VHPAELA;  /* YIELD */
A68_VC  KIPAELA;  /* avoid structure result */
A68_VC  UIPAELA;  /* avoid structure result */
A68_VC  WIPAELA;  /* avoid structure result */
A68_167  CLPAELA;  /* collateral clause result */
A68_168  DLPAELA;  /* collateral clause result */
A68_168 * ELPAELA;  /* YIELD */
A68_VC  FLPAELA;  /* OPERATORS - nil -> mode */
A68_170  GLPAELA;  /* OPERATORS - mode -> union mode */
A68_172  HLPAELA;  /* OPERATORS - mode -> union mode */
A68_172  ILPAELA;  /* OPERATORS - mode -> union mode */
A68_389  QBRAELA;  /* procedure value */
A68_397  ZCRAELA;  /* procedure value */
A68_INT * DSRAELA;  /* YIELD */
A68_INT * ESRAELA;  /* YIELD */
A68_INT * FSRAELA;  /* YIELD */
A68_INT * FWRAELA;  /* YIELD */
A68_INT * GWRAELA;  /* YIELD */
A68_INT * HWRAELA;  /* YIELD */
A68_INT * IWRAELA;  /* YIELD */
A68_INT * JWRAELA;  /* YIELD */
A68_INT * KWRAELA;  /* YIELD */
A68_400  QRSAELA;  /* procedure value */
A68_393  EJUAELA;  /* procedure value */
A68_428  CZVAELA;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
BAAAELA();   /* USE sidanalyser */
JFAAOSI();   /* USE messageproc */
UICAELA();   /* USE compmodes */
GMAATRN();   /* USE charset */
GGKAELA();   /* USE impmacro */
JSCAOST();   /* USE basics */
PCAAOST();   /* USE osinterface */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/ella/assoc/./a68files/compileproc.a68";
A_config.translation_time = "Tue Apr  4 10:35:57 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "HHPAELA (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 10:35:57 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS compileproc);
UEAALIB_a68config(LGAALIB_configinfo, MHPAELA);
 /* line 227: */
 /* line 229: */
PHPAELA_generator( A68_TRUE, &THPAELA );
SHPAELA_textbuff = THPAELA;
 /* line 230: */
UHPAELA = 1 ;
VHPAELA = (&A_VINDEX(SHPAELA_textbuff,UHPAELA)) ;
(*VHPAELA) = ' ';
 /* line 231: */
 /* line 232: */
 /* line 233: */
 /* line 234: */
 /* line 235: */
 /* line 236: */
 /* line 237: */
GIPAELA_generator( A68_TRUE, &KIPAELA );
JIPAELA_string = KIPAELA;
 /* line 238: */
 /* line 239: */
 /* line 240: */
QIPAELA_generator( A68_TRUE, &UIPAELA );
TIPAELA_ident1 = UIPAELA;
QIPAELA_generator( A68_TRUE, &WIPAELA );
VIPAELA_compsymb1 = WIPAELA;
 /* line 241: */
XIPAELA_nonames = (A68_246 *)A68_NIL;
 /* line 242: */
 /* line 243: */
 /* line 245: */
 /* line 246: */
 /* line 247: */
 /* line 248: */
 /* line 249: */
 /* line 250: */
 /* line 251: */
GJPAELA_attrstr = (A68_256 *)A68_NIL;
 /* line 252: */
HJPAELA_nextattr = (&GJPAELA_attrstr);
 /* line 254: */
 /* line 255: */
 /* line 256: */
 /* line 257: */
 /* line 258: */
 /* line 259: */
 /* line 261: */
 /* line 262: */
 /* line 263: */
 /* line 264: */
 /* line 265: */
 /* line 266: */
 /* line 267: */
 /* line 268: */
VJPAELA_maxintplusone = (A_HEAP(A68_186 ));
 /* line 269: */
 /* line 270: */
 /* line 271: */
 /* line 272: */
 /* line 273: */
 /* line 274: */
 /* line 276: */
 /* line 277: */
 /* line 279: */
 /* line 280: */
 /* line 281: */
 /* line 283: */
 /* line 285: */
 /* line 289: */
BLPAELA_fndec_flt = (A_HEAP(A68_167 ));
 /* line 290: */
DLPAELA.Scope = 0;
DLPAELA.Vnno = 0;
DLPAELA.Status = CXCAELA_fn_flt;
DLPAELA.Text = A68_TRUE;
DLPAELA.Outofdate = A68_FALSE;
DLPAELA.Import = A68_FALSE;
DLPAELA.Export = A68_FALSE;
 /* line 291: */
ELPAELA = A_HEAP(A68_168 ) ;
(*ELPAELA) = DLPAELA ;
CLPAELA.Fninfo = ELPAELA;
CLPAELA.Sort = GXCAELA_localdec;
CLPAELA.Fnno = 0;
CLPAELA.Macro = A68_FALSE;
CLPAELA.Id = A_VVAC(FLPAELA);
CLPAELA.Mparamno = 0;
CLPAELA.Mp = (A68_169 *)A68_NIL;
CLPAELA.Nextmp = (A68_169 **)A68_NIL;
CLPAELA.Attr = A_UNITE(GLPAELA,mode6,6,MRCAELA_attrnull);
CLPAELA.Inputs = (A68_171 *)A68_NIL;
 /* line 292: */
CLPAELA.Outputs = (A68_171 *)A68_NIL;
CLPAELA.Param = A_UNITE(HLPAELA,mode10,10,DRCAELA_flt);
CLPAELA.Ans = A_UNITE(ILPAELA,mode10,10,DRCAELA_flt);
CLPAELA.Num_names = 0;
(*BLPAELA_fndec_flt) = CLPAELA;
 /* line 293: */
JLPAELA_fndec = BLPAELA_fndec_flt;
 /* line 294: */
 /* line 295: */
 /* line 296: */
 /* line 298: */
 /* line 299: */
 /* line 300: */
 /* line 302: */
 /* line 303: */
 /* line 305: */
 /* line 306: */
 /* line 309: */
 /* line 310: */
 /* line 312: */
 /* line 314: */
 /* line 315: */
 /* line 316: */
 /* line 317: */
 /* line 318: */
 /* line 320: */
 /* line 321: */
 /* line 323: */
 /* line 325: */
 /* line 326: */
 /* line 327: */
 /* line 328: */
 /* line 329: */
 /* line 330: */
 /* line 331: */
 /* line 333: */
 /* line 335: */
 /* line 336: */
 /* line 337: */
 /* line 338: */
 /* line 340: */
 /* line 341: */
 /* line 344: */
 /* line 349: */
 /* line 350: */
 /* line 352: */
 /* line 353: */
 /* line 354: */
 /* line 356: */
 /* line 357: */
 /* line 358: */
 /* line 360: */
 /* line 362: */
 /* line 363: */
 /* line 365: */
 /* line 367: */
 /* line 368: */
 /* line 369: */
 /* line 371: */
 /* line 373: */
 /* line 375: */
 /* line 377: */
 /* line 380: */
 /* line 381: */
POPAELA_nilcompilefnstack = (A68_286 *)A68_NIL;
 /* line 382: */
 /* line 383: */
 /* line 385: */
SOPAELA_nilmultlets = (A68_281 *)A68_NIL;
 /* line 386: */
TOPAELA_multlets = SOPAELA_nilmultlets;
 /* line 387: */
UOPAELA_multiassign = SOPAELA_nilmultlets;
 /* line 393: */
 /* line 394: */
 /* line 395: */
 /* line 396: */
 /* line 397: */
 /* line 398: */
 /* line 399: */
 /* line 400: */
 /* line 401: */
 /* line 402: */
 /* line 403: */
 /* line 404: */
 /* line 405: */
 /* line 406: */
 /* line 408: */
 /* line 443: */
 /* line 458: */
 /* line 461: */
 /* line 470: */
 /* line 472: */
 /* line 473: */
 /* line 474: */
 /* line 525: */
 /* line 526: */
 /* line 527: */
 /* line 761: */
 /* line 814: */
 /* line 815: */
 /* line 816: */
 /* line 859: */
 /* line 866: */
 /* line 876: */
 /* line 878: */
 /* line 881: */
 /* line 884: */
 /* line 887: */
 /* line 900: */
 /* line 901: */
 /* line 911: */
 /* line 922: */
 /* line 955: */
 /* line 979: */
 /* line 996: */
 /* line 1042: */
 /* line 1101: */
 /* line 1107: */
 /* line 1127: */
 /* line 1148: */
 /* line 1169: */
 /* line 1200: */
 /* line 1207: */
 /* line 1222: */
 /* line 1263: */
 /* line 1363: */
 /* line 1409: */
 /* line 1426: */
 /* line 1448: */
 /* line 1468: */
 /* line 1489: */
 /* line 1491: */
 /* line 1528: */
 /* line 1542: */
 /* line 1559: */
 /* line 1561: */
 /* line 1700: */
 /* line 1710: */
QBRAELA.fn.fn_global = YARAELA_anonymous;
QBRAELA.nonlocals = A68_NIL;
NSQAELA_outmacspec = QBRAELA;
 /* line 1740: */
 /* line 1742: */
 /* line 1751: */
ZCRAELA.fn.fn_global = ACRAELA_anonymous;
ZCRAELA.nonlocals = A68_NIL;
RBRAELA_outmparams = ZCRAELA;
 /* line 1786: */
 /* line 1789: */
 /* line 1803: */
 /* line 1816: */
 /* line 1819: */
 /* line 1828: */
 /* line 1830: */
 /* line 1843: */
 /* line 1850: */
 /* line 1862: */
 /* line 1873: */
 /* line 1944: */
 /* line 1954: */
 /* line 1972: */
 /* line 2012: */
 /* line 2070: */
 /* line 2136: */
 /* line 2142: */
 /* line 2155: */
 /* line 2156: */
 /* line 2158: */
 /* line 2159: */
DSRAELA = (&((&ASRAELA_true)->T)) ;
(*DSRAELA) = 1;
ESRAELA = (&((&BSRAELA_false)->T)) ;
(*ESRAELA) = 2;
FSRAELA = (&((&CSRAELA_unknown)->T)) ;
(*FSRAELA) = 3;
 /* line 2161: */
 /* line 2162: */
 /* line 2164: */
 /* line 2169: */
 /* line 2174: */
 /* line 2177: */
 /* line 2268: */
 /* line 2269: */
 /* line 2271: */
 /* line 2272: */
 /* line 2273: */
 /* line 2274: */
FWRAELA = (&((&ZVRAELA_checktype)->C)) ;
(*FWRAELA) = 1;
GWRAELA = (&((&AWRAELA_checktypeoutput)->C)) ;
(*GWRAELA) = (-1);
 /* line 2275: */
HWRAELA = (&((&BWRAELA_checkle)->C)) ;
(*HWRAELA) = 2;
IWRAELA = (&((&CWRAELA_checkge)->C)) ;
(*IWRAELA) = 3;
JWRAELA = (&((&DWRAELA_checkeq)->C)) ;
(*JWRAELA) = 4;
KWRAELA = (&((&EWRAELA_checkne)->C)) ;
(*KWRAELA) = 5;
 /* line 2281: */
 /* line 2341: */
 /* line 2348: */
 /* line 2352: */
 /* line 2354: */
 /* line 2729: */
 /* line 3004: */
 /* line 3007: */
 /* line 3010: */
 /* line 3014: */
 /* line 3017: */
QRSAELA.fn.fn_global = KRSAELA_anonymous;
QRSAELA.nonlocals = A68_NIL;
VERAELA_ctypeequals = QRSAELA;
 /* line 3023: */
 /* line 3035: */
 /* line 3037: */
 /* line 3099: */
 /* line 3100: */
 /* line 3178: */
 /* line 3197: */
 /* line 3272: */
 /* line 3286: */
 /* line 3300: */
 /* line 3331: */
 /* line 3339: */
 /* line 3349: */
 /* line 3366: */
 /* line 3395: */
 /* line 3411: */
 /* line 3449: */
 /* line 3464: */
 /* line 3491: */
 /* line 3510: */
 /* line 3528: */
 /* line 3539: */
 /* line 3553: */
 /* line 3567: */
 /* line 3573: */
 /* line 3591: */
 /* line 3598: */
 /* line 3626: */
 /* line 3665: */
 /* line 3684: */
 /* line 3687: */
 /* line 3761: */
 /* line 3774: */
 /* line 3783: */
 /* line 3807: */
 /* line 3894: */
 /* line 4040: */
 /* line 4057: */
 /* line 4130: */
EJUAELA.fn.fn_global = VFUAELA_anonymous;
EJUAELA.nonlocals = A68_NIL;
FUQAELA_ctypetotype = EJUAELA;
 /* line 4186: */
 /* line 4262: */
 /* line 4281: */
 /* line 4285: */
 /* line 4286: */
 /* line 4304: */
 /* line 4305: */
 /* line 4342: */
 /* line 4394: */
 /* line 4400: */
 /* line 4424: */
 /* line 4460: */
 /* line 4466: */
 /* line 4476: */
 /* line 4480: */
 /* line 4499: */
 /* line 4522: */
 /* line 4546: */
 /* line 4563: */
 /* line 4577: */
 /* line 4586: */
 /* line 4590: */
 /* line 4599: */
 /* line 4606: */
 /* line 4618: */
 /* line 4656: */
 /* line 4684: */
 /* line 4711: */
 /* line 4739: */
 /* line 4768: */
 /* line 4805: */
 /* line 4825: */
 /* line 4844: */
 /* line 4864: */
 /* line 4902: */
 /* line 4916: */
 /* line 4934: */
 /* line 4955: */
 /* line 4980: */
 /* line 5029: */
 /* line 5042: */
 /* line 5059: */
 /* line 5074: */
 /* line 5084: */
 /* line 5094: */
 /* line 5164: */
 /* line 5168: */
 /* line 5177: */
 /* line 5188: */
 /* line 5194: */
 /* line 5202: */
 /* line 5211: */
 /* line 5230: */
 /* line 5277: */
 /* line 5313: */
 /* line 5331: */
 /* line 5362: */
 /* line 5394: */
 /* line 5410: */
 /* line 5420: */
 /* line 5432: */
 /* line 5443: */
 /* line 5451: */
 /* line 5541: */
CZVAELA.fn.fn_global = IYVAELA_anonymous;
CZVAELA.nonlocals = A68_NIL;
CASAELA_equiv_types = CZVAELA;
A_PROC_EXIT(DECS compileproc);
} 
#undef NL
/* end of translation of ./a68files/compileproc.a68 */
