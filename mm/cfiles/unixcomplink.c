
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
/* UNAME:NSCAAMM */
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

A_PROCEDURE(A68_VOID ,A68t173,(struct A68t129 ),(struct A68t129 ,void *));
typedef struct A68t173  A68_173 ;    /* PROC(MODE129) VOID */

A_PROCEDURE(A68_VOID ,A68t174,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t174  A68_174 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,59,A68t175);
typedef struct A68t175  A68_175 ;    /* STRUCT 59 CHAR */

A_PROCEDURE(A68_BOOL ,A68t176,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t176  A68_176 ;    /* PROC(REF MODE26,MODE97) BOOL */

A_PROCEDURE(A68_BOOL ,A68t177,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t177  A68_177 ;    /* PROC(MODE97) BOOL */
A_ISTRUCT(A68_CHAR ,3,A68t178);
typedef struct A68t178  A68_178 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t179);
typedef struct A68t179  A68_179 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,7,A68t180);
typedef struct A68t180  A68_180 ;    /* STRUCT 7 CHAR */
struct A68t181{
A68_VC  Operating_system;
A68_VC  Star_chars;
A68_VC  Edit_command;
A68_VC  Exe_dir;
A68_VC  Heap_size;
A68_BOOL  Case_sensitive;
A_PAD_BOOL(PAD_36)
};
typedef struct A68t181  A68_181 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26,REF MODE26,BOOL)  */

A_PROCEDURE(A68_VOID ,A68t182,(struct A68t36 ,struct A68t177 ,struct A68t97 ,struct A68t181 *),(struct A68t36 ,struct A68t177 ,struct A68t97 ,struct A68t181 *,void *));
typedef struct A68t182  A68_182 ;    /* PROC(MODE36,MODE177,MODE97) MODE181 */

A_PROCEDURE(A68_VOID ,A68t183,(A68_VC ,A68_INT *,A68_BOOL ,struct A68t97 ,A68_VC *),(A68_VC ,A68_INT *,A68_BOOL ,struct A68t97 ,A68_VC *,void *));
typedef struct A68t183  A68_183 ;    /* PROC(MODE26,REF INT,BOOL,MODE97) REF MODE26 */

A_PROCEDURE(A68_BOOL ,A68t184,(A68_VC ,A68_VC ,struct A68t97 ),(A68_VC ,A68_VC ,struct A68t97 ,void *));
typedef struct A68t184  A68_184 ;    /* PROC(MODE26,MODE26,MODE97) BOOL */
A_ISTRUCT(A68_CHAR ,33,A68t185);
typedef struct A68t185  A68_185 ;    /* STRUCT 33 CHAR */
A_ISTRUCT(struct A68t52 ,2,A68t186);
typedef struct A68t186  A68_186 ;    /* STRUCT 2 MODE52 */

A_PROCEDURE(A68_VOID ,A68t187,(A68_VC ,A68_VC ,struct A68t97 ),(A68_VC ,A68_VC ,struct A68t97 ,void *));
typedef struct A68t187  A68_187 ;    /* PROC(REF MODE26,REF MODE26,MODE97) VOID */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from messageproc --- */
extern A68_VOID  ZAAAOSI_makervc(A68_VC ,A68_VC *);
/* --- End of imports from messageproc --- */


/* --- Imports from basics --- */
/* --- End of imports from basics --- */


/* --- Imports from osinterface --- */
extern A68_94  BOBAOSI_update_access;
extern A68_94  FOBAOSI_update_truncate_access;
#define HDAAOST_block_update_access BOBAOSI_update_access
#define IDAAOST_block_update_truncate_access FOBAOSI_update_truncate_access
#include <stdlib.h>
#define EXIT(status) exit(A_INT_int(status))

#define BZBAOSI_exit EXIT
extern A68_INT  IACAOSI_execute_os_command(A68_VC ,struct A68t97 );
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


/* --- Imports from putstrings --- */
extern A68_VOID  LRAAOSL_newline(struct A68t34 *);
extern A68_VOID  GFBAOSL_put(struct A68t34 *,struct A68t85 );
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void JFAAOSI(void);   /* messageproc */
extern void JSCAOST(void);   /* basics */
extern void PCAAOST(void);   /* osinterface */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_175   RSCAAMM = {"$Id: unixcomplink.a68,v 34.3 1995/03/29 13:02:37 ella Exp $"}; 
A_GISVEC(A68_VC ,SSCAAMM,RSCAAMM,59)
static A68_36  YSCAAMM_insert_oscommand_item;
static A68_177  ZSCAAMM_obey_oscommand;
static A68_VC  ETCAAMM_unix;
static A68_95   GTCAAMM = {"UNIX"}; 
A_GISVEC(A68_VC ,HTCAAMM,GTCAAMM,4)
static A68_VC  NTCAAMM_std_star_chars;
static A68_178   PTCAAMM = {"259"}; 
A_GISVEC(A68_VC ,QTCAAMM,PTCAAMM,3)
static A68_VC  WTCAAMM_std_edit_command;
static A68_95   YTCAAMM = {"show"}; 
A_GISVEC(A68_VC ,ZTCAAMM,YTCAAMM,4)
static A68_VC  FUCAAMM_std_exe_dir;
static A68_179   HUCAAMM = {"./bin/"}; 
A_GISVEC(A68_VC ,IUCAAMM,HUCAAMM,6)
static A68_VC  OUCAAMM_std_heap_size;
static A68_180   QUCAAMM = {"2000000"}; 
A_GISVEC(A68_VC ,RUCAAMM,QUCAAMM,7)
static A68_185   LVCAAMM = {"Offline jobs not yet implemented."}; 
A_GISVEC(A68_VC ,MVCAAMM,LVCAAMM,33)
static A68_178   XVCAAMM = {"cp "}; 
A_GISVEC(A68_VC ,YVCAAMM,XVCAAMM,3)

A68_BOOL  VSCAAMM_obey_osaction(A68_VC  Command, A68_97  Msg);

A_STATIC A68_VOID  BTCAAMM_generator(A68_BOOL  ATCAAMM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  KTCAAMM_generator(A68_BOOL  JTCAAMM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  TTCAAMM_generator(A68_BOOL  STCAAMM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  CUCAAMM_generator(A68_BOOL  BUCAAMM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  LUCAAMM_generator(A68_BOOL  KUCAAMM_anonymous, A68_VC  *ReturnedValue);

A68_VOID  WUCAAMM_initialise_complink(A68_36  Insert_oscommand_item_proc, A68_177  Obey_oscommand_proc, A68_97  Msg, A68_181  *ReturnedValue);

A68_VOID  DVCAAMM_translate_filename(A68_VC  Name, A68_INT * Mm_log_count, A68_BOOL  Diagnose, A68_97  Msg, A68_VC  *ReturnedValue);

A68_BOOL  JVCAAMM_os_submit(A68_VC  Dbname, A68_VC  Node, A68_97  Msg);

A68_VOID  WVCAAMM_os_save_file(A68_VC  Name, A68_VC  Save_name, A68_97  Msg);
 /* line 47: */

A68_BOOL  VSCAAMM_obey_osaction(A68_VC  Command, A68_97  Msg)
{ 
A68_INT  WSCAAMM_status;
A68_BOOL  XSCAAMM;  /* clause result */
A_PROC_ENTRY(obey_osaction);
 /* line 48: */
 /* line 49: */
{ 
WSCAAMM_status = IACAOSI_execute_os_command(Command, Msg);
 /* line 51: */
 /* line 52: */
XSCAAMM = (WSCAAMM_status==0);
} 
A_PROC_EXIT(obey_osaction);
return( XSCAAMM );
} 
#undef NL

A_STATIC A68_VOID  BTCAAMM_generator(A68_BOOL  ATCAAMM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  CTCAAMM;  /* clause result */
A68_VC  DTCAAMM;  /* OPERATORS - dynamic generator */
{ 
DTCAAMM.upb = 4 ;
( ATCAAMM_anonymous? A_VLOC(A68_CHAR ,DTCAAMM): A_VHEAP(A68_CHAR ,DTCAAMM) );
CTCAAMM = DTCAAMM;
} 
*ReturnedValue = (CTCAAMM);
return;
} 
#undef NL

A_STATIC A68_VOID  KTCAAMM_generator(A68_BOOL  JTCAAMM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  LTCAAMM;  /* clause result */
A68_VC  MTCAAMM;  /* OPERATORS - dynamic generator */
{ 
MTCAAMM.upb = 3 ;
( JTCAAMM_anonymous? A_VLOC(A68_CHAR ,MTCAAMM): A_VHEAP(A68_CHAR ,MTCAAMM) );
LTCAAMM = MTCAAMM;
} 
*ReturnedValue = (LTCAAMM);
return;
} 
#undef NL

A_STATIC A68_VOID  TTCAAMM_generator(A68_BOOL  STCAAMM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  UTCAAMM;  /* clause result */
A68_VC  VTCAAMM;  /* OPERATORS - dynamic generator */
{ 
VTCAAMM.upb = 4 ;
( STCAAMM_anonymous? A_VLOC(A68_CHAR ,VTCAAMM): A_VHEAP(A68_CHAR ,VTCAAMM) );
UTCAAMM = VTCAAMM;
} 
*ReturnedValue = (UTCAAMM);
return;
} 
#undef NL

A_STATIC A68_VOID  CUCAAMM_generator(A68_BOOL  BUCAAMM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  DUCAAMM;  /* clause result */
A68_VC  EUCAAMM;  /* OPERATORS - dynamic generator */
{ 
EUCAAMM.upb = 6 ;
( BUCAAMM_anonymous? A_VLOC(A68_CHAR ,EUCAAMM): A_VHEAP(A68_CHAR ,EUCAAMM) );
DUCAAMM = EUCAAMM;
} 
*ReturnedValue = (DUCAAMM);
return;
} 
#undef NL

A_STATIC A68_VOID  LUCAAMM_generator(A68_BOOL  KUCAAMM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  MUCAAMM;  /* clause result */
A68_VC  NUCAAMM;  /* OPERATORS - dynamic generator */
{ 
NUCAAMM.upb = 7 ;
( KUCAAMM_anonymous? A_VLOC(A68_CHAR ,NUCAAMM): A_VHEAP(A68_CHAR ,NUCAAMM) );
MUCAAMM = NUCAAMM;
} 
*ReturnedValue = (MUCAAMM);
return;
} 
#undef NL
 /* line 72: */
 /* line 73: */

A68_VOID  WUCAAMM_initialise_complink(A68_36  Insert_oscommand_item_proc, A68_177  Obey_oscommand_proc, A68_97  Msg, A68_181  *ReturnedValue)
{ 
A68_181  XUCAAMM;  /* collateral clause result */
A68_181  YUCAAMM;  /* clause result */
A_PROC_ENTRY(initialise_complink);
 /* line 79: */
 /* line 80: */
{ 
YSCAAMM_insert_oscommand_item = Insert_oscommand_item_proc;
 /* line 81: */
ZSCAAMM_obey_oscommand = Obey_oscommand_proc;
 /* line 82: */
XUCAAMM.Operating_system = ETCAAMM_unix;
XUCAAMM.Star_chars = NTCAAMM_std_star_chars;
XUCAAMM.Edit_command = WTCAAMM_std_edit_command;
XUCAAMM.Exe_dir = FUCAAMM_std_exe_dir;
XUCAAMM.Heap_size = OUCAAMM_std_heap_size;
 /* line 83: */
XUCAAMM.Case_sensitive = A68_TRUE;
YUCAAMM = XUCAAMM;
} 
A_PROC_EXIT(initialise_complink);
*ReturnedValue = (YUCAAMM);
return;
} 
#undef NL
 /* line 86: */
 /* line 87: */
 /* line 88: */

A68_VOID  DVCAAMM_translate_filename(A68_VC  Name, A68_INT * Mm_log_count, A68_BOOL  Diagnose, A68_97  Msg, A68_VC  *ReturnedValue)
{ 
A68_VC  EVCAAMM;  /* clause result */
A68_VC  FVCAAMM;  /* avoid structure result */
A_PROC_ENTRY(translate_filename);
ZAAAOSI_makervc( Name, &FVCAAMM );
EVCAAMM = FVCAAMM;
A_PROC_EXIT(translate_filename);
*ReturnedValue = (EVCAAMM);
return;
} 
#undef NL
 /* line 91: */
 /* line 92: */

A68_BOOL  JVCAAMM_os_submit(A68_VC  Dbname, A68_VC  Node, A68_97  Msg)
{ 
A68_186  KVCAAMM;  /* collateral clause result */
A68_52  NVCAAMM;  /* OPERATORS - mode -> union mode */
A68_VC  OVCAAMM;  /* YIELD */
A68_52  PVCAAMM;  /* OPERATORS - mode -> union mode */
A68_56  QVCAAMM;  /* procedure value */
A68_85  RVCAAMM;  /* OPERATORS - istruct -> vector */
A68_BOOL  SVCAAMM;  /* clause result */
A_PROC_ENTRY(os_submit);
 /* line 93: */
 /* line 94: */
{ 
OVCAAMM = MVCAAMM ;
KVCAAMM.data[0] = A_UNITE(NVCAAMM,mode7,7,OVCAAMM);
QVCAAMM.fn.fn_global = LRAAOSL_newline;
QVCAAMM.nonlocals = A68_NIL;
KVCAAMM.data[1] = A_UNITE(PVCAAMM,mode12,12,QVCAAMM);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(RVCAAMM,KVCAAMM,2,A68_52 ));
 /* line 95: */
 /* line 96: */
SVCAAMM = A68_FALSE;
} 
A_PROC_EXIT(os_submit);
return( SVCAAMM );
} 
#undef NL
 /* line 99: */
 /* line 100: */

A68_VOID  WVCAAMM_os_save_file(A68_VC  Name, A68_VC  Save_name, A68_97  Msg)
{ 
A68_VC  ZVCAAMM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(os_save_file);
 /* line 101: */
 /* line 102: */
{ 
A_CALLPROC(YSCAAMM_insert_oscommand_item,(YVCAAMM),(YVCAAMM,(YSCAAMM_insert_oscommand_item).nonlocals));
 /* line 103: */
A_CALLPROC(YSCAAMM_insert_oscommand_item,(Name),(Name,(YSCAAMM_insert_oscommand_item).nonlocals));
 /* line 104: */
A_CALLPROC(YSCAAMM_insert_oscommand_item,(A_HVEC(ZVCAAMM,' ',A68_CHAR )),(A_HVEC(ZVCAAMM,' ',A68_CHAR ),(YSCAAMM_insert_oscommand_item).nonlocals));
 /* line 105: */
A_CALLPROC(YSCAAMM_insert_oscommand_item,(Save_name),(Save_name,(YSCAAMM_insert_oscommand_item).nonlocals));
 /* line 106: */
 /* line 107: */
A_CALLPROC(ZSCAAMM_obey_oscommand,(Msg),(Msg,(ZSCAAMM_obey_oscommand).nonlocals));
} 
A_PROC_EXIT(os_save_file);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 4: */
void OSCAAMM(void)   /* initialise DECS unixcomplink */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","./mfiles","-staredit","259U","./a68files/unixcomplink.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_VC  FTCAAMM;  /* avoid structure result */
A68_VC  ITCAAMM;  /* OPERATORS - assign op */
A68_VC  OTCAAMM;  /* avoid structure result */
A68_VC  RTCAAMM;  /* OPERATORS - assign op */
A68_VC  XTCAAMM;  /* avoid structure result */
A68_VC  AUCAAMM;  /* OPERATORS - assign op */
A68_VC  GUCAAMM;  /* avoid structure result */
A68_VC  JUCAAMM;  /* OPERATORS - assign op */
A68_VC  PUCAAMM;  /* avoid structure result */
A68_VC  SUCAAMM;  /* OPERATORS - assign op */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
JFAAOSI();   /* USE messageproc */
JSCAOST();   /* USE basics */
PCAAOST();   /* USE osinterface */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/mm/assoc/./a68files/unixcomplink.a68";
A_config.translation_time = "Tue Apr  4 09:54:46 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "NSCAAMM (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 09:54:46 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS unixcomplink);
UEAALIB_a68config(LGAALIB_configinfo, SSCAAMM);
 /* line 46: */
 /* line 63: */
 /* line 64: */
 /* line 65: */
BTCAAMM_generator( A68_TRUE, &FTCAAMM );
ETCAAMM_unix = FTCAAMM;
ITCAAMM = HTCAAMM ;
A_VASSIGN2(ITCAAMM,ETCAAMM_unix,A68_CHAR );
 /* line 66: */
KTCAAMM_generator( A68_TRUE, &OTCAAMM );
NTCAAMM_std_star_chars = OTCAAMM;
RTCAAMM = QTCAAMM ;
A_VASSIGN2(RTCAAMM,NTCAAMM_std_star_chars,A68_CHAR );
 /* line 67: */
TTCAAMM_generator( A68_TRUE, &XTCAAMM );
WTCAAMM_std_edit_command = XTCAAMM;
AUCAAMM = ZTCAAMM ;
A_VASSIGN2(AUCAAMM,WTCAAMM_std_edit_command,A68_CHAR );
 /* line 68: */
CUCAAMM_generator( A68_TRUE, &GUCAAMM );
FUCAAMM_std_exe_dir = GUCAAMM;
JUCAAMM = IUCAAMM ;
A_VASSIGN2(JUCAAMM,FUCAAMM_std_exe_dir,A68_CHAR );
 /* line 69: */
LUCAAMM_generator( A68_TRUE, &PUCAAMM );
OUCAAMM_std_heap_size = PUCAAMM;
SUCAAMM = RUCAAMM ;
A_VASSIGN2(SUCAAMM,OUCAAMM_std_heap_size,A68_CHAR );
 /* line 70: */
 /* line 71: */
 /* line 85: */
 /* line 90: */
 /* line 98: */
 /* line 109: */
 /* line 111: */
 /* line 113: */
/*SKIP*/;
A_PROC_EXIT(DECS unixcomplink);
} 
#undef NL
/* end of translation of ./a68files/unixcomplink.a68 */
