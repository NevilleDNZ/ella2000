
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
/* UNAME:ESFBSIM */
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

A_PROCEDURE(A68_INT ,A68t38,(struct A68t34 *),(struct A68t34 *,void *));
typedef struct A68t38  A68_38 ;    /* PROC(REF MODE34) INT */

A_PROCEDURE(A68_INT ,A68t39,(struct A68t34 *,A68_INT ),(struct A68t34 *,A68_INT ,void *));
typedef struct A68t39  A68_39 ;    /* PROC(REF MODE34,INT) INT */

A_PROCEDURE(A68_VOID ,A68t40,(struct A68t34 *),(struct A68t34 *,void *));
typedef struct A68t40  A68_40 ;    /* PROC(REF MODE34) VOID */
struct A68t42 ;
struct A68t43 ;

A_PROCEDURE(struct A68t34 *,A68t41,(struct A68t42 ,struct A68t43 ),(struct A68t42 ,struct A68t43 ,void *));
typedef struct A68t41  A68_41 ;    /* PROC(MODE42,MODE43) REF MODE34 */
struct A68t42 { A68_INT mode; union {
A68_INT  mode1;
A68_VC  mode2;
} data; };
typedef struct A68t42  A68_42 ;    /* UNION(INT,REF MODE26)  */
struct A68t43 { A68_INT mode; union {
struct A68t36  mode1;
struct A68t37  mode2;
} data; };
typedef struct A68t43  A68_43 ;    /* UNION(MODE36,MODE37)  */

A_PROCEDURE(A68_VOID ,A68t44,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t44  A68_44 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t45,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t45  A68_45 ;    /* PROC(REF MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t46,(A68_CHAR ,A68_VC *),(A68_CHAR ,A68_VC *,void *));
typedef struct A68t46  A68_46 ;    /* PROC(CHAR) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t47,(struct A68t32 ,struct A68t32 *),(struct A68t32 ,struct A68t32 *,void *));
typedef struct A68t47  A68_47 ;    /* PROC(MODE32) REF MODE32 */

A_PROCEDURE(A68_VOID ,A68t48,(A68_INT ,struct A68t32 *),(A68_INT ,struct A68t32 *,void *));
typedef struct A68t48  A68_48 ;    /* PROC(INT) REF MODE32 */

A_PROCEDURE(A68_VOID ,A68t49,(A68_VC ),(A68_VC ,void *));
typedef struct A68t49  A68_49 ;    /* PROC(REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t50,(struct A68t32 ),(struct A68t32 ,void *));
typedef struct A68t50  A68_50 ;    /* PROC(REF MODE32) VOID */
struct A68t52 ;

A_PROCEDURE(A68_VOID ,A68t51,(struct A68t52 ,A68_VC *),(struct A68t52 ,A68_VC *,void *));
typedef struct A68t51  A68_51 ;    /* PROC(MODE52) REF MODE26 */
A_VECTOR(A68_VC ,A68t52);
typedef struct A68t52  A68_52 ;    /* VECTOR [] MODE26 */

A_PROCEDURE(A68_VOID ,A68t53,(A68_VC ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t53  A68_53 ;    /* PROC(MODE26,INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t54,(A68_CHAR ,A68_INT ,A68_VC *),(A68_CHAR ,A68_INT ,A68_VC *,void *));
typedef struct A68t54  A68_54 ;    /* PROC(CHAR,INT) MODE26 */
struct A68t56 ;

A_PROCEDURE(A68_VOID ,A68t55,(struct A68t56 ,A68_VC *),(struct A68t56 ,A68_VC *,void *));
typedef struct A68t55  A68_55 ;    /* PROC(MODE56) MODE26 */
struct A68t56 { A68_INT mode; union {
A68_BITS  mode1;
A68_INT  mode2;
A68_SBITS  mode3;
A68_SINT  mode4;
A68_CHAR  mode5;
} data; };
typedef struct A68t56  A68_56 ;    /* UNION(BITS,INT,SHORT BITS,SHORT INT,CHAR)  */

A_PROCEDURE(A68_VOID ,A68t57,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t57  A68_57 ;    /* PROC(INT) MODE26 */
A_VECTOR(A68_BITS ,A68t59);
typedef struct A68t59  A68_59 ;    /* VECTOR [] BITS */
A_VECTOR(A68_BOOL ,A68t60);
typedef struct A68t60  A68_60 ;    /* VECTOR [] BOOL */
A_VECTOR(A68_REAL ,A68t61);
typedef struct A68t61  A68_61 ;    /* VECTOR [] REAL */
struct A68t62{
A68_INT  Int;
A_PAD_INT(PAD_10)
A68_INT  Width;
A_PAD_INT(PAD_11)
};
typedef struct A68t62  A68_62 ;    /* STRUCT(INT,INT)  */
struct A68t63{
A68_VC  Str;
A68_INT  Width;
A_PAD_INT(PAD_12)
};
typedef struct A68t63  A68_63 ;    /* STRUCT(MODE26,INT)  */
struct A68t64{
A68_VC  Str;
A68_INT  Justify;
A_PAD_INT(PAD_13)
};
typedef struct A68t64  A68_64 ;    /* STRUCT(MODE26,INT)  */
struct A68t65{
A68_INT  Tab;
A_PAD_INT(PAD_14)
};
typedef struct A68t65  A68_65 ;    /* STRUCT(INT)  */
struct A68t66{
A68_INT  Pos;
A_PAD_INT(PAD_15)
};
typedef struct A68t66  A68_66 ;    /* STRUCT(INT)  */
struct A68t67{
A68_INT  After;
A_PAD_INT(PAD_16)
};
typedef struct A68t67  A68_67 ;    /* STRUCT(INT)  */
struct A68t68{
A68_INT  Spaces;
A_PAD_INT(PAD_17)
};
typedef struct A68t68  A68_68 ;    /* STRUCT(INT)  */
struct A68t69{
A68_INT  Lines;
A_PAD_INT(PAD_18)
};
typedef struct A68t69  A68_69 ;    /* STRUCT(INT)  */
struct A68t70{
A68_INT  Indent;
A_PAD_INT(PAD_19)
};
typedef struct A68t70  A68_70 ;    /* STRUCT(INT)  */
A_STRAIGHT(A68_VOID,A68t71);
typedef struct A68t71  A68_71 ;    /* STRAIGHT MODE58 */
struct A68t58 { A68_INT mode; union {
A68_INT  mode1;
struct A68t32  mode2;
A68_BITS  mode3;
struct A68t59  mode4;
A68_SBITS  mode5;
A68_CHAR  mode6;
A68_VC  mode7;
A68_BOOL  mode8;
struct A68t60  mode9;
A68_REAL  mode10;
struct A68t61  mode11;
struct A68t40  mode12;
struct A68t62  mode13;
struct A68t63  mode14;
struct A68t64  mode15;
struct A68t65  mode16;
struct A68t66  mode17;
struct A68t67  mode18;
struct A68t68  mode19;
struct A68t69  mode20;
struct A68t70  mode21;
struct A68t71  mode22;
} data; };
typedef struct A68t58  A68_58 ;    /* UNION(INT,MODE32,BITS,MODE59,SHORT BITS,CHAR,MODE26,BOOL,MODE60,REAL,MODE61,MODE40,MODE62,MODE63,MODE64,MODE65,MODE66,MODE67,MODE68,MODE69,MODE70,MODE71)  */

A_PROCEDURE(A68_VOID ,A68t72,(A68_BOOL ,struct A68t63 *),(A68_BOOL ,struct A68t63 *,void *));
typedef struct A68t72  A68_72 ;    /* PROC(BOOL) MODE63 */

A_PROCEDURE(A68_VOID ,A68t73,(A68_BOOL ,struct A68t64 *),(A68_BOOL ,struct A68t64 *,void *));
typedef struct A68t73  A68_73 ;    /* PROC(BOOL) MODE64 */

A_PROCEDURE(A68_VOID ,A68t74,(A68_INT ,A68_INT ,struct A68t62 *),(A68_INT ,A68_INT ,struct A68t62 *,void *));
typedef struct A68t74  A68_74 ;    /* PROC(INT,INT) MODE62 */

A_PROCEDURE(A68_VOID ,A68t75,(A68_VC ,A68_INT ,struct A68t63 *),(A68_VC ,A68_INT ,struct A68t63 *,void *));
typedef struct A68t75  A68_75 ;    /* PROC(MODE26,INT) MODE63 */

A_PROCEDURE(A68_VOID ,A68t76,(A68_VC ,A68_INT ,struct A68t64 *),(A68_VC ,A68_INT ,struct A68t64 *,void *));
typedef struct A68t76  A68_76 ;    /* PROC(MODE26,INT) MODE64 */

A_PROCEDURE(A68_VOID ,A68t77,(A68_INT ,struct A68t65 *),(A68_INT ,struct A68t65 *,void *));
typedef struct A68t77  A68_77 ;    /* PROC(INT) MODE65 */

A_PROCEDURE(A68_VOID ,A68t78,(A68_INT ,struct A68t66 *),(A68_INT ,struct A68t66 *,void *));
typedef struct A68t78  A68_78 ;    /* PROC(INT) MODE66 */

A_PROCEDURE(A68_VOID ,A68t79,(A68_INT ,struct A68t67 *),(A68_INT ,struct A68t67 *,void *));
typedef struct A68t79  A68_79 ;    /* PROC(INT) MODE67 */

A_PROCEDURE(A68_VOID ,A68t80,(A68_INT ,struct A68t68 *),(A68_INT ,struct A68t68 *,void *));
typedef struct A68t80  A68_80 ;    /* PROC(INT) MODE68 */

A_PROCEDURE(A68_VOID ,A68t81,(A68_INT ,struct A68t69 *),(A68_INT ,struct A68t69 *,void *));
typedef struct A68t81  A68_81 ;    /* PROC(INT) MODE69 */

A_PROCEDURE(A68_VOID ,A68t82,(A68_INT ,struct A68t70 *),(A68_INT ,struct A68t70 *,void *));
typedef struct A68t82  A68_82 ;    /* PROC(INT) MODE70 */

A_PROCEDURE(A68_VOID ,A68t83,(struct A68t34 *,A68_VC ),(struct A68t34 *,A68_VC ,void *));
typedef struct A68t83  A68_83 ;    /* PROC(REF MODE34,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t84,(struct A68t34 *,A68_INT ,A68_INT ),(struct A68t34 *,A68_INT ,A68_INT ,void *));
typedef struct A68t84  A68_84 ;    /* PROC(REF MODE34,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t85,(struct A68t34 *,A68_BITS ,A68_INT ),(struct A68t34 *,A68_BITS ,A68_INT ,void *));
typedef struct A68t85  A68_85 ;    /* PROC(REF MODE34,BITS,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t86,(struct A68t34 *,A68_REAL ,A68_INT ,A68_INT ),(struct A68t34 *,A68_REAL ,A68_INT ,A68_INT ,void *));
typedef struct A68t86  A68_86 ;    /* PROC(REF MODE34,REAL,INT,INT) VOID */
struct A68t88 ;

A_PROCEDURE(A68_VOID ,A68t87,(struct A68t34 *,struct A68t88 ),(struct A68t34 *,struct A68t88 ,void *));
typedef struct A68t87  A68_87 ;    /* PROC(REF MODE34,MODE88) VOID */
A_VECTOR(struct A68t58 ,A68t88);
typedef struct A68t88  A68_88 ;    /* VECTOR [] MODE58 */

A_PROCEDURE(A68_VOID ,A68t89,(A68_VC ,struct A68t88 ,A68_VC *),(A68_VC ,struct A68t88 ,A68_VC *,void *));
typedef struct A68t89  A68_89 ;    /* PROC(REF MODE26,MODE88) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t90,(struct A68t34 *,A68_VC *),(struct A68t34 *,A68_VC *,void *));
typedef struct A68t90  A68_90 ;    /* PROC(REF MODE34) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t91,(struct A68t88 ,A68_VC *),(struct A68t88 ,A68_VC *,void *));
typedef struct A68t91  A68_91 ;    /* PROC(MODE88) REF MODE26 */
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

A_PROCEDURE(A68_VOID ,A68t97,(struct A68t98 ,struct A68t52 ),(struct A68t98 ,struct A68t52 ,void *));
typedef struct A68t97  A68_97 ;    /* PROC(MODE98,MODE52) VOID */
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

A_PROCEDURE(A68_VOID ,A68t123,(struct A68t52 *),(struct A68t52 *,void *));
typedef struct A68t123  A68_123 ;    /* PROC MODE52 */

A_PROCEDURE(A68_VOID ,A68t124,(A68_VC ,struct A68t97 ,struct A68t52 *),(A68_VC ,struct A68t97 ,struct A68t52 *,void *));
typedef struct A68t124  A68_124 ;    /* PROC(MODE26,MODE97) MODE52 */

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

A_PROCEDURE(A68_INT ,A68t144,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t144  A68_144 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_INT ,A68t145,(A68_INT ),(A68_INT ,void *));
typedef struct A68t145  A68_145 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_VOID ,A68t146,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t146  A68_146 ;    /* PROC(INT,INT) REF MODE26 */
struct A68t170{
A68_INT  Fn;
A_PAD_INT(PAD_34)
A68_INT  Instance;
A_PAD_INT(PAD_35)
};
typedef struct A68t170  A68_170 ;    /* STRUCT(INT,INT)  */
struct A68t171{
struct A68t172 * Wire;
A68_INT  Instance;
A_PAD_INT(PAD_36)
};
typedef struct A68t171  A68_171 ;    /* STRUCT(REF MODE172,INT)  */
struct A68t169 { A68_INT mode; union {
struct A68t170  mode1;
struct A68t171  mode2;
} data; };
typedef struct A68t169  A68_169 ;    /* UNION(MODE170,MODE171)  */
struct A68t148{
struct A68t169  Node;
A68_INT  Circuit;
A_PAD_INT(PAD_37)
A68_INT  Base;
A_PAD_INT(PAD_38)
};
typedef struct A68t148  A68_148 ;    /* STRUCT(MODE169,INT,INT)  */
struct A68t147{
A68_VC  Id;
A68_VC  Fullid;
A68_INT  Action;
A_PAD_INT(PAD_39)
A68_INT  Condition;
A_PAD_INT(PAD_40)
struct A68t32  Columns;
struct A68t32  Sizes;
struct A68t148  Location;
A68_INT  Keepnumber;
A_PAD_INT(PAD_41)
A68_VC  Lastvalues;
A68_VC  Testvalues;
A68_VC  Workspace;
struct A68t149 * Decoded;
A68_INT  Flagaddress;
A_PAD_INT(PAD_42)
};
typedef struct A68t147  A68_147 ;    /* STRUCT(REF MODE26,REF MODE26,INT,INT,REF MODE32,REF MODE32,MODE148,INT,REF MODE26,REF MODE26,REF MODE26,REF MODE149,INT)  */
struct A68t157{
A68_INT  Svvoid;
A_PAD_INT(PAD_43)
};
typedef struct A68t157  A68_157 ;    /* STRUCT(INT)  */
struct A68t158{
A68_INT  Svnull;
A_PAD_INT(PAD_44)
};
typedef struct A68t158  A68_158 ;    /* STRUCT(INT)  */
struct A68t149 { A68_INT mode; union {
struct A68t150 * mode1;
struct A68t151 * mode2;
struct A68t152 * mode3;
struct A68t153 * mode4;
struct A68t154 * mode5;
struct A68t155 * mode6;
struct A68t156 * mode7;
struct A68t157  mode8;
struct A68t158  mode9;
} data; };
typedef struct A68t149  A68_149 ;    /* UNION(REF MODE150,REF MODE151,REF MODE152,REF MODE153,REF MODE154,REF MODE155,REF MODE156,MODE157,MODE158)  */
struct A68t167{
A68_INT  Svoid;
A_PAD_INT(PAD_45)
};
typedef struct A68t167  A68_167 ;    /* STRUCT(INT)  */
struct A68t168{
A68_INT  Snull;
A_PAD_INT(PAD_46)
};
typedef struct A68t168  A68_168 ;    /* STRUCT(INT)  */
struct A68t160 { A68_INT mode; union {
struct A68t159 * mode1;
struct A68t161 * mode2;
struct A68t162 * mode3;
struct A68t163 * mode4;
struct A68t164 * mode5;
struct A68t165 * mode6;
struct A68t166 * mode7;
struct A68t167  mode8;
struct A68t168  mode9;
} data; };
typedef struct A68t160  A68_160 ;    /* UNION(REF MODE159,REF MODE161,REF MODE162,REF MODE163,REF MODE164,REF MODE165,REF MODE166,MODE167,MODE168)  */
struct A68t150{
struct A68t160  Type;
};
typedef struct A68t150  A68_150 ;    /* STRUCT(MODE160)  */
struct A68t151{
struct A68t161 * Type;
A68_INT  Value;
A_PAD_INT(PAD_47)
};
typedef struct A68t151  A68_151 ;    /* STRUCT(REF MODE161,INT)  */
struct A68t152{
struct A68t162 * Type;
A68_CHAR  Value;
A_PAD_CHAR(PAD_48)
};
typedef struct A68t152  A68_152 ;    /* STRUCT(REF MODE162,CHAR)  */
struct A68t153{
struct A68t164 * Type;
A68_VC  Value;
};
typedef struct A68t153  A68_153 ;    /* STRUCT(REF MODE164,REF MODE26)  */
struct A68t154{
struct A68t159 * Type;
A68_INT  Tag;
A_PAD_INT(PAD_49)
struct A68t149  Assoc;
};
typedef struct A68t154  A68_154 ;    /* STRUCT(REF MODE159,INT,MODE149)  */
struct A68t155{
struct A68t149  Head;
struct A68t155 * Tail;
};
typedef struct A68t155  A68_155 ;    /* STRUCT(MODE149,REF MODE155)  */
struct A68t156{
struct A68t149  From;
struct A68t149  To;
};
typedef struct A68t156  A68_156 ;    /* STRUCT(MODE149,MODE149)  */
struct A68t159{
A68_VC  Id;
struct A68t160  T;
struct A68t159 * Rest;
};
typedef struct A68t159  A68_159 ;    /* STRUCT(REF MODE26,MODE160,REF MODE159)  */
struct A68t161{
A68_VC  Id;
A68_INT  Lwb;
A_PAD_INT(PAD_50)
A68_INT  Upb;
A_PAD_INT(PAD_51)
};
typedef struct A68t161  A68_161 ;    /* STRUCT(REF MODE26,INT,INT)  */
struct A68t162{
A68_VC  Id;
A68_VC  Char;
};
typedef struct A68t162  A68_162 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t163{
A68_INT  No;
A_PAD_INT(PAD_52)
struct A68t160  Type;
};
typedef struct A68t163  A68_163 ;    /* STRUCT(INT,MODE160)  */
struct A68t164{
A68_INT  No;
A_PAD_INT(PAD_53)
struct A68t162  T;
};
typedef struct A68t164  A68_164 ;    /* STRUCT(INT,MODE162)  */
struct A68t165{
struct A68t160  From;
struct A68t160  To;
};
typedef struct A68t165  A68_165 ;    /* STRUCT(MODE160,MODE160)  */
struct A68t166{
struct A68t160  T;
struct A68t166 * Rest;
};
typedef struct A68t166  A68_166 ;    /* STRUCT(MODE160,REF MODE166)  */
A_VECTOR(struct A68t174 ,A68t173);
typedef struct A68t173  A68_173 ;    /* VECTOR [] MODE174 */
struct A68t174{
A68_INT  Instoffset;
A_PAD_INT(PAD_54)
A68_INT  Offset;
A_PAD_INT(PAD_55)
A68_INT  Size;
A_PAD_INT(PAD_56)
};
typedef struct A68t174  A68_174 ;    /* STRUCT(INT,INT,INT)  */
struct A68t172{
struct A68t160  Type;
struct A68t173  Blocks;
};
typedef struct A68t172  A68_172 ;    /* STRUCT(MODE160,REF MODE173)  */
struct A68t175{
struct A68t147  Monitor;
A68_INT  Handle;
A_PAD_INT(PAD_57)
struct A68t175 * Rest;
};
typedef struct A68t175  A68_175 ;    /* STRUCT(MODE147,INT,REF MODE175)  */
struct A68t176{
A68_INT  Repeat;
A_PAD_INT(PAD_58)
A68_VC  Name;
A68_VC  Aliasname;
A68_CHAR  Op;
A_PAD_CHAR(PAD_59)
struct A68t177 * Bind;
struct A68t176 * Rest;
};
typedef struct A68t176  A68_176 ;    /* STRUCT(INT,REF MODE26,REF MODE26,CHAR,REF MODE177,REF MODE176)  */
struct A68t177{
A68_VC  Uname;
A68_VC  Lname;
struct A68t148 * Node;
};
typedef struct A68t177  A68_177 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE148)  */
struct A68t179 ;

A_PROCEDURE(A68_BOOL ,A68t178,(A68_VC ,A68_INT ,struct A68t179 ),(A68_VC ,A68_INT ,struct A68t179 ,void *));
typedef struct A68t178  A68_178 ;    /* PROC(REF MODE26,INT,MODE179) BOOL */
struct A68t179 { A68_INT mode; union {
struct A68t176 * mode1;
A68_INT  mode2;
struct A68t150 * mode3;
struct A68t151 * mode4;
struct A68t152 * mode5;
struct A68t153 * mode6;
struct A68t154 * mode7;
struct A68t155 * mode8;
struct A68t156 * mode9;
struct A68t157  mode10;
struct A68t158  mode11;
} data; };
typedef struct A68t179  A68_179 ;    /* UNION(REF MODE176,INT,REF MODE150,REF MODE151,REF MODE152,REF MODE153,REF MODE154,REF MODE155,REF MODE156,MODE157,MODE158)  */

A_PROCEDURE(A68_BOOL ,A68t180,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t180  A68_180 ;    /* PROC(REF MODE26,INT) BOOL */

A_PROCEDURE(A68_BOOL ,A68t181,(A68_INT ),(A68_INT ,void *));
typedef struct A68t181  A68_181 ;    /* PROC(INT) BOOL */

A_PROCEDURE(A68_BOOL ,A68t182,(A68_VC ,A68_INT ,struct A68t176 **),(A68_VC ,A68_INT ,struct A68t176 **,void *));
typedef struct A68t182  A68_182 ;    /* PROC(REF MODE26,INT,REF REF MODE176) BOOL */

A_PROCEDURE(A68_BOOL ,A68t183,(A68_INT ,A68_INT *),(A68_INT ,A68_INT *,void *));
typedef struct A68t183  A68_183 ;    /* PROC(INT,REF INT) BOOL */

A_PROCEDURE(A68_BOOL ,A68t184,(A68_INT ,A68_INT ,struct A68t176 **),(A68_INT ,A68_INT ,struct A68t176 **,void *));
typedef struct A68t184  A68_184 ;    /* PROC(INT,INT,REF REF MODE176) BOOL */

A_PROCEDURE(A68_BOOL ,A68t185,(A68_VC ,A68_INT ,struct A68t149 *),(A68_VC ,A68_INT ,struct A68t149 *,void *));
typedef struct A68t185  A68_185 ;    /* PROC(REF MODE26,INT,REF MODE149) BOOL */

A_PROCEDURE(A68_BOOL ,A68t186,(A68_VC ,A68_INT ,A68_INT *),(A68_VC ,A68_INT ,A68_INT *,void *));
typedef struct A68t186  A68_186 ;    /* PROC(REF MODE26,INT,REF INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t187,(A68_VC *),(A68_VC *,void *));
typedef struct A68t187  A68_187 ;    /* PROC REF MODE26 */

A_PROCEDURE(struct A68t176 *,A68t188,(void),(void *));
typedef struct A68t188  A68_188 ;    /* PROC REF MODE176 */
struct A68t190 ;
struct A68t191 ;

A_PROCEDURE(A68_VOID ,A68t189,(struct A68t190 ,struct A68t49 ,struct A68t114 ,struct A68t191 ),(struct A68t190 ,struct A68t49 ,struct A68t114 ,struct A68t191 ,void *));
typedef struct A68t189  A68_189 ;    /* PROC(MODE190,MODE49,MODE114,MODE191) VOID */

A_PROCEDURE(A68_VOID ,A68t190,(struct A68t176 *),(struct A68t176 *,void *));
typedef struct A68t190  A68_190 ;    /* PROC(REF MODE176) VOID */

A_PROCEDURE(A68_VOID ,A68t191,(struct A68t149 ),(struct A68t149 ,void *));
typedef struct A68t191  A68_191 ;    /* PROC(MODE149) VOID */
struct A68t193 ;

A_PROCEDURE(A68_VOID ,A68t192,(struct A68t188 ,struct A68t187 ,struct A68t117 ,struct A68t193 ),(struct A68t188 ,struct A68t187 ,struct A68t117 ,struct A68t193 ,void *));
typedef struct A68t192  A68_192 ;    /* PROC(MODE188,MODE187,MODE117,MODE193) VOID */

A_PROCEDURE(A68_VOID ,A68t193,(struct A68t149 *),(struct A68t149 *,void *));
typedef struct A68t193  A68_193 ;    /* PROC MODE149 */

A_PROCEDURE(struct A68t176 *,A68t194,(A68_INT ,A68_VC ,struct A68t177 *),(A68_INT ,A68_VC ,struct A68t177 *,void *));
typedef struct A68t194  A68_194 ;    /* PROC(INT,REF MODE26,REF MODE177) REF MODE176 */

A_PROCEDURE(A68_VOID ,A68t195,(struct A68t176 *,A68_VC *),(struct A68t176 *,A68_VC *,void *));
typedef struct A68t195  A68_195 ;    /* PROC(REF MODE176) MODE26 */
struct A68t197 ;

A_PROCEDURE(struct A68t176 *,A68t196,(struct A68t197 ,A68_INT *,struct A68t97 ),(struct A68t197 ,A68_INT *,struct A68t97 ,void *));
typedef struct A68t196  A68_196 ;    /* PROC(REF MODE197,REF INT,MODE97) REF MODE176 */
A_VECTOR(struct A68t198 ,A68t197);
typedef struct A68t197  A68_197 ;    /* VECTOR [] MODE198 */
struct A68t198{
A68_INT  Sort;
A_PAD_INT(PAD_60)
A68_VC  Value;
};
typedef struct A68t198  A68_198 ;    /* STRUCT(INT,REF MODE26)  */

A_PROCEDURE(struct A68t176 *,A68t199,(A68_VC ,struct A68t36 ),(A68_VC ,struct A68t36 ,void *));
typedef struct A68t199  A68_199 ;    /* PROC(REF MODE26,MODE36) REF MODE176 */

A_PROCEDURE(struct A68t176 *,A68t200,(struct A68t176 *),(struct A68t176 *,void *));
typedef struct A68t200  A68_200 ;    /* PROC(REF MODE176) REF MODE176 */

A_PROCEDURE(struct A68t176 *,A68t201,(A68_VC ,struct A68t176 *),(A68_VC ,struct A68t176 *,void *));
typedef struct A68t201  A68_201 ;    /* PROC(REF MODE26,REF MODE176) REF MODE176 */

A_PROCEDURE(A68_VOID ,A68t202,(struct A68t176 *,A68_VC *),(struct A68t176 *,A68_VC *,void *));
typedef struct A68t202  A68_202 ;    /* PROC(REF MODE176) REF MODE26 */

A_PROCEDURE(struct A68t176 *,A68t203,(struct A68t176 *,A68_VC ),(struct A68t176 *,A68_VC ,void *));
typedef struct A68t203  A68_203 ;    /* PROC(REF MODE176,REF MODE26) REF MODE176 */

A_PROCEDURE(struct A68t148 *,A68t204,(struct A68t176 *,struct A68t36 ),(struct A68t176 *,struct A68t36 ,void *));
typedef struct A68t204  A68_204 ;    /* PROC(REF MODE176,MODE36) REF MODE148 */

A_PROCEDURE(A68_VOID ,A68t205,(struct A68t148 ,A68_VC ,struct A68t149 *),(struct A68t148 ,A68_VC ,struct A68t149 *,void *));
typedef struct A68t205  A68_205 ;    /* PROC(MODE148,REF MODE26) MODE149 */

A_PROCEDURE(A68_VOID ,A68t206,(struct A68t160 ,A68_BITS ,struct A68t34 *),(struct A68t160 ,A68_BITS ,struct A68t34 *,void *));
typedef struct A68t206  A68_206 ;    /* PROC(MODE160,BITS,REF MODE34) VOID */

A_PROCEDURE(A68_VOID ,A68t207,(struct A68t149 ,A68_BITS ,struct A68t34 *),(struct A68t149 ,A68_BITS ,struct A68t34 *,void *));
typedef struct A68t207  A68_207 ;    /* PROC(MODE149,BITS,REF MODE34) VOID */

A_PROCEDURE(A68_INT ,A68t208,(struct A68t160 ,A68_BITS ),(struct A68t160 ,A68_BITS ,void *));
typedef struct A68t208  A68_208 ;    /* PROC(MODE160,BITS) INT */
struct A68t209 { A68_INT mode; union {
struct A68t159 * mode1;
struct A68t161 * mode2;
struct A68t162 * mode3;
} data; };
typedef struct A68t209  A68_209 ;    /* UNION(REF MODE159,REF MODE161,REF MODE162)  */
struct A68t210{
struct A68t172  Firstcell;
A68_INT  Lwb;
A_PAD_INT(PAD_61)
A68_INT  Ramsize;
A_PAD_INT(PAD_62)
A68_INT  Step;
A_PAD_INT(PAD_63)
};
typedef struct A68t210  A68_210 ;    /* STRUCT(MODE172,INT,INT,INT)  */
struct A68t211{
A68_VC  Uname;
A68_VC  Lname;
A68_INT  Node;
A_PAD_INT(PAD_64)
};
typedef struct A68t211  A68_211 ;    /* STRUCT(REF MODE26,REF MODE26,INT)  */
A_VECTOR(struct A68t211 ,A68t213);
typedef struct A68t213  A68_213 ;    /* VECTOR [] MODE211 */
struct A68t212{
struct A68t210 * Ram;
struct A68t172  Outputs;
A68_INT  Noinputs;
A_PAD_INT(PAD_65)
struct A68t213  Body;
};
typedef struct A68t212  A68_212 ;    /* STRUCT(REF MODE210,MODE172,INT,REF MODE213)  */
struct A68t214 { A68_INT mode; union {
struct A68t170  mode1;
struct A68t172  mode2;
} data; };
typedef struct A68t214  A68_214 ;    /* UNION(MODE170,MODE172)  */

A_PROCEDURE(A68_BOOL ,A68t215,(struct A68t172 ,struct A68t172 ),(struct A68t172 ,struct A68t172 ,void *));
typedef struct A68t215  A68_215 ;    /* PROC(MODE172,MODE172) BOOL */

A_PROCEDURE(A68_BOOL ,A68t216,(struct A68t170 ,struct A68t170 ),(struct A68t170 ,struct A68t170 ,void *));
typedef struct A68t216  A68_216 ;    /* PROC(MODE170,MODE170) BOOL */

A_PROCEDURE(A68_BOOL ,A68t217,(struct A68t171 ,struct A68t171 ),(struct A68t171 ,struct A68t171 ,void *));
typedef struct A68t217  A68_217 ;    /* PROC(MODE171,MODE171) BOOL */

A_PROCEDURE(A68_BOOL ,A68t218,(struct A68t169 ,struct A68t169 ),(struct A68t169 ,struct A68t169 ,void *));
typedef struct A68t218  A68_218 ;    /* PROC(MODE169,MODE169) BOOL */

A_PROCEDURE(A68_BOOL ,A68t219,(struct A68t148 ,struct A68t148 ),(struct A68t148 ,struct A68t148 ,void *));
typedef struct A68t219  A68_219 ;    /* PROC(MODE148,MODE148) BOOL */

A_PROCEDURE(A68_BOOL ,A68t220,(struct A68t160 ,struct A68t160 ),(struct A68t160 ,struct A68t160 ,void *));
typedef struct A68t220  A68_220 ;    /* PROC(MODE160,MODE160) BOOL */

A_PROCEDURE(A68_BOOL ,A68t221,(struct A68t149 ,struct A68t149 ),(struct A68t149 ,struct A68t149 ,void *));
typedef struct A68t221  A68_221 ;    /* PROC(MODE149,MODE149) BOOL */

A_PROCEDURE(A68_VOID ,A68t222,(struct A68t173 ,struct A68t173 ,struct A68t173 *),(struct A68t173 ,struct A68t173 ,struct A68t173 *,void *));
typedef struct A68t222  A68_222 ;    /* PROC(REF MODE173,REF MODE173) REF MODE173 */

A_PROCEDURE(A68_INT ,A68t223,(struct A68t160 ),(struct A68t160 ,void *));
typedef struct A68t223  A68_223 ;    /* PROC(MODE160) INT */

A_PROCEDURE(struct A68t166 *,A68t224,(struct A68t160 ,A68_INT ,A68_INT ),(struct A68t160 ,A68_INT ,A68_INT ,void *));
typedef struct A68t224  A68_224 ;    /* PROC(MODE160,INT,INT) REF MODE166 */

A_PROCEDURE(A68_VOID ,A68t225,(struct A68t172 ,A68_INT ,A68_INT ,struct A68t172 *),(struct A68t172 ,A68_INT ,A68_INT ,struct A68t172 *,void *));
typedef struct A68t225  A68_225 ;    /* PROC(MODE172,INT,INT) MODE172 */

A_PROCEDURE(A68_VOID ,A68t226,(struct A68t210 *,A68_INT ,A68_INT ,struct A68t172 *),(struct A68t210 *,A68_INT ,A68_INT ,struct A68t172 *,void *));
typedef struct A68t226  A68_226 ;    /* PROC(REF MODE210,INT,INT) MODE172 */

A_PROCEDURE(A68_VC *,A68t227,(struct A68t149 ,struct A68t160 ),(struct A68t149 ,struct A68t160 ,void *));
typedef struct A68t227  A68_227 ;    /* PROC(MODE149,MODE160) REF REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t228,(A68_VC ,struct A68t160 ,struct A68t149 *),(A68_VC ,struct A68t160 ,struct A68t149 *,void *));
typedef struct A68t228  A68_228 ;    /* PROC(REF MODE26,MODE160) MODE149 */

A_PROCEDURE(A68_INT ,A68t229,(struct A68t148 ),(struct A68t148 ,void *));
typedef struct A68t229  A68_229 ;    /* PROC(MODE148) INT */

A_PROCEDURE(A68_VOID ,A68t230,(struct A68t148 ,A68_INT ),(struct A68t148 ,A68_INT ,void *));
typedef struct A68t230  A68_230 ;    /* PROC(MODE148,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t231,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t231  A68_231 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t232,(struct A68t92 *,A68_INT ,struct A68t49 ,struct A68t36 ,struct A68t169 *),(struct A68t92 *,A68_INT ,struct A68t49 ,struct A68t36 ,struct A68t169 *,void *));
typedef struct A68t232  A68_232 ;    /* PROC(REF MODE92,INT,MODE49,MODE36) MODE169 */

A_PROCEDURE(A68_VOID ,A68t233,(A68_VC ,struct A68t36 ,struct A68t169 *),(A68_VC ,struct A68t36 ,struct A68t169 *,void *));
typedef struct A68t233  A68_233 ;    /* PROC(REF MODE26,MODE36) MODE169 */

A_PROCEDURE(A68_VOID ,A68t234,(A68_INT *,A68_BOOL *,struct A68t36 ),(A68_INT *,A68_BOOL *,struct A68t36 ,void *));
typedef struct A68t234  A68_234 ;    /* PROC(REF INT,REF BOOL,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t235,(struct A68t148 ,A68_VC ),(struct A68t148 ,A68_VC ,void *));
typedef struct A68t235  A68_235 ;    /* PROC(MODE148,REF MODE26) VOID */
struct A68t237 ;

A_PROCEDURE(A68_VOID ,A68t236,(A68_INT *,A68_VC *,struct A68t237 ,struct A68t237 ,struct A68t36 ),(A68_INT *,A68_VC *,struct A68t237 ,struct A68t237 ,struct A68t36 ,void *));
typedef struct A68t236  A68_236 ;    /* PROC(REF INT,REF REF MODE26,MODE237,MODE237,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t237,(A68_VC ,struct A68t36 ),(A68_VC ,struct A68t36 ,void *));
typedef struct A68t237  A68_237 ;    /* PROC(REF MODE26,MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t238,(A68_INT ,A68_INT ,A68_VC ,struct A68t237 ,struct A68t237 ,struct A68t49 ,struct A68t36 ,struct A68t169 *),(A68_INT ,A68_INT ,A68_VC ,struct A68t237 ,struct A68t237 ,struct A68t49 ,struct A68t36 ,struct A68t169 *,void *));
typedef struct A68t238  A68_238 ;    /* PROC(INT,INT,REF MODE26,MODE237,MODE237,MODE49,MODE36) MODE169 */

A_PROCEDURE(A68_VOID ,A68t239,(A68_VC ,struct A68t36 ,struct A68t148 *),(A68_VC ,struct A68t36 ,struct A68t148 *,void *));
typedef struct A68t239  A68_239 ;    /* PROC(REF MODE26,MODE36) MODE148 */

A_PROCEDURE(A68_VOID ,A68t240,(struct A68t148 ),(struct A68t148 ,void *));
typedef struct A68t240  A68_240 ;    /* PROC(MODE148) VOID */

A_PROCEDURE(A68_VOID ,A68t241,(struct A68t148 ,struct A68t148 *),(struct A68t148 ,struct A68t148 *,void *));
typedef struct A68t241  A68_241 ;    /* PROC(MODE148) MODE148 */

A_PROCEDURE(A68_VOID ,A68t242,(struct A68t148 ,struct A68t148 ),(struct A68t148 ,struct A68t148 ,void *));
typedef struct A68t242  A68_242 ;    /* PROC(MODE148,MODE148) VOID */

A_PROCEDURE(A68_BOOL ,A68t243,(struct A68t148 ),(struct A68t148 ,void *));
typedef struct A68t243  A68_243 ;    /* PROC(MODE148) BOOL */

A_PROCEDURE(A68_VOID ,A68t244,(A68_INT ,struct A68t212 *),(A68_INT ,struct A68t212 *,void *));
typedef struct A68t244  A68_244 ;    /* PROC(INT) MODE212 */

A_PROCEDURE(A68_VOID ,A68t245,(A68_INT ,struct A68t214 *),(A68_INT ,struct A68t214 *,void *));
typedef struct A68t245  A68_245 ;    /* PROC(INT) MODE214 */

A_PROCEDURE(A68_VOID ,A68t246,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t246  A68_246 ;    /* PROC(INT) REF MODE26 */
struct A68t248 ;

A_PROCEDURE(A68_VOID ,A68t247,(struct A68t248 ),(struct A68t248 ,void *));
typedef struct A68t247  A68_247 ;    /* PROC(MODE248) VOID */

A_PROCEDURE(A68_BOOL ,A68t248,(A68_VC ),(A68_VC ,void *));
typedef struct A68t248  A68_248 ;    /* PROC(REF MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t249,(struct A68t212 ,struct A68t172 *),(struct A68t212 ,struct A68t172 *,void *));
typedef struct A68t249  A68_249 ;    /* PROC(MODE212) MODE172 */

A_PROCEDURE(A68_VOID ,A68t250,(A68_INT ,struct A68t172 *),(A68_INT ,struct A68t172 *,void *));
typedef struct A68t250  A68_250 ;    /* PROC(INT) MODE172 */
struct A68t251{
A68_VC  Context;
A68_VC  Import;
};
typedef struct A68t251  A68_251 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t253 ;

A_PROCEDURE(A68_VOID ,A68t252,(struct A68t253 ),(struct A68t253 ,void *));
typedef struct A68t252  A68_252 ;    /* PROC(MODE253) VOID */
struct A68t253 { A68_INT mode; union {
A68_VC  mode1;
struct A68t32  mode2;
struct A68t60  mode3;
struct A68t59  mode4;
} data; };
typedef struct A68t253  A68_253 ;    /* UNION(REF MODE26,REF MODE32,REF MODE60,REF MODE59)  */

A_PROCEDURE(A68_BITS ,A68t254,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t254  A68_254 ;    /* PROC(BITS,BITS) BITS */
struct A68t256 ;

A_PROCEDURE(A68_VOID ,A68t255,(struct A68t256 ,A68_INT ),(struct A68t256 ,A68_INT ,void *));
typedef struct A68t255  A68_255 ;    /* PROC(MODE256,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t256,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t256  A68_256 ;    /* PROC(CHAR) VOID */
struct A68t258 ;

A_PROCEDURE(A68_INT ,A68t257,(struct A68t258 ),(struct A68t258 ,void *));
typedef struct A68t257  A68_257 ;    /* PROC(MODE258) INT */

A_PROCEDURE(A68_CHAR ,A68t258,(void),(void *));
typedef struct A68t258  A68_258 ;    /* PROC CHAR */

A_PROCEDURE(A68_INT ,A68t259,(A68_VC ,A68_BOOL *),(A68_VC ,A68_BOOL *,void *));
typedef struct A68t259  A68_259 ;    /* PROC(MODE26,REF BOOL) INT */

A_PROCEDURE(A68_INT ,A68t260,(A68_INT ,A68_INT ,A68_BOOL *),(A68_INT ,A68_INT ,A68_BOOL *,void *));
typedef struct A68t260  A68_260 ;    /* PROC(INT,INT,REF BOOL) INT */

A_PROCEDURE(A68_BOOL ,A68t261,(A68_VC ,A68_INT *,struct A68t97 ),(A68_VC ,A68_INT *,struct A68t97 ,void *));
typedef struct A68t261  A68_261 ;    /* PROC(MODE26,REF INT,MODE97) BOOL */
struct A68t262{
A68_BOOL  Logging;
A_PAD_BOOL(PAD_66)
A68_BOOL  Outputing;
A_PAD_BOOL(PAD_67)
A68_BOOL  Seeing_in;
A_PAD_BOOL(PAD_68)
A68_BOOL  Seeing_out;
A_PAD_BOOL(PAD_69)
A68_BOOL  Paging;
A_PAD_BOOL(PAD_70)
A68_BOOL  Clock;
A_PAD_BOOL(PAD_71)
A68_BOOL  Screen_output;
A_PAD_BOOL(PAD_72)
A68_INT  Width;
A_PAD_INT(PAD_73)
A68_INT  Page_count;
A_PAD_INT(PAD_74)
A68_INT  Page_length;
A_PAD_INT(PAD_75)
A68_INT  Eof_count;
A_PAD_INT(PAD_76)
struct A68t263 * Standard_reader;
struct A68t264 * Infile;
struct A68t187  Prompt;
struct A68t92 * Logfile;
struct A68t92 * Outfile;
};
typedef struct A68t262  A68_262 ;    /* STRUCT(BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,BOOL,INT,INT,INT,INT,REF MODE263,REF MODE264,MODE187,REF MODE92,REF MODE92)  */

A_PROCEDURE(A68_INT ,A68t265,(A68_VC *,struct A68t97 ),(A68_VC *,struct A68t97 ,void *));
typedef struct A68t265  A68_265 ;    /* PROC(REF REF MODE26,MODE97) INT */
struct A68t263{
A68_VC  Rdbuffer;
struct A68t265  Rdline;
A68_INT  Rdcharend;
A_PAD_INT(PAD_77)
A68_INT  Rdcharno;
A_PAD_INT(PAD_78)
A68_INT  Start_of_word;
A_PAD_INT(PAD_79)
struct A68t266 * Stack;
};
typedef struct A68t263  A68_263 ;    /* STRUCT(REF MODE26,MODE265,INT,INT,INT,REF MODE266)  */
struct A68t264{
struct A68t92 * File;
A68_BOOL  Suspended;
A_PAD_BOOL(PAD_80)
A68_INT  Number;
A_PAD_INT(PAD_81)
A68_VC  Name;
struct A68t263 * Reader;
struct A68t264 * Previous;
};
typedef struct A68t264  A68_264 ;    /* STRUCT(REF MODE92,BOOL,INT,REF MODE26,REF MODE263,REF MODE264)  */
struct A68t266{
A68_VC  Line;
struct A68t266 * Rest;
};
typedef struct A68t266  A68_266 ;    /* STRUCT(REF MODE26,REF MODE266)  */

A_PROCEDURE(struct A68t262 *,A68t267,(void),(void *));
typedef struct A68t267  A68_267 ;    /* PROC REF MODE262 */

A_PROCEDURE(A68_VOID ,A68t268,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t268  A68_268 ;    /* PROC(REF MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t269,(A68_VC ,struct A68t97 ),(A68_VC ,struct A68t97 ,void *));
typedef struct A68t269  A68_269 ;    /* PROC(MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t270,(A68_INT ,struct A68t97 ),(A68_INT ,struct A68t97 ,void *));
typedef struct A68t270  A68_270 ;    /* PROC(INT,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t271,(struct A68t187 ),(struct A68t187 ,void *));
typedef struct A68t271  A68_271 ;    /* PROC(MODE187) VOID */

A_PROCEDURE(A68_VOID ,A68t272,(struct A68t129 ),(struct A68t129 ,void *));
typedef struct A68t272  A68_272 ;    /* PROC(MODE129) VOID */

A_PROCEDURE(A68_VOID ,A68t273,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t273  A68_273 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,57,A68t274);
typedef struct A68t274  A68_274 ;    /* STRUCT 57 CHAR */

A_PROCEDURE(struct A68t172 *,A68t275,(struct A68t172 *),(struct A68t172 *,void *));
typedef struct A68t275  A68_275 ;    /* PROC(REF MODE172) REF MODE172 */

A_PROCEDURE(struct A68t173 *,A68t276,(A68_INT ,struct A68t173 *),(A68_INT ,struct A68t173 *,void *));
typedef struct A68t276  A68_276 ;    /* PROC(INT,REF REF MODE173) REF REF MODE173 */

A_PROCEDURE(A68_VOID ,A68t277,(A68_BOOL ,struct A68t173 *),(A68_BOOL ,struct A68t173 *,void *));
typedef struct A68t277  A68_277 ;    /* PROC(BOOL) MODE173 */

A_PROCEDURE(A68_BOOL ,A68t278,(struct A68t160 ),(struct A68t160 ,void *));
typedef struct A68t278  A68_278 ;    /* PROC(MODE160) BOOL */

A_PROCEDURE(A68_VOID ,A68t279,(struct A68t176 *,struct A68t148 *),(struct A68t176 *,struct A68t148 *,void *));
typedef struct A68t279  A68_279 ;    /* PROC(REF MODE176) MODE148 */

A_PROCEDURE(struct A68t175 *,A68t280,(struct A68t175 *),(struct A68t175 *,void *));
typedef struct A68t280  A68_280 ;    /* PROC(REF MODE175) REF MODE175 */

A_PROCEDURE(A68_VOID ,A68t281,(struct A68t175 *),(struct A68t175 *,void *));
typedef struct A68t281  A68_281 ;    /* PROC(REF MODE175) VOID */

A_PROCEDURE(struct A68t155 *,A68t282,(struct A68t149 ),(struct A68t149 ,void *));
typedef struct A68t282  A68_282 ;    /* PROC(MODE149) REF MODE155 */

A_PROCEDURE(struct A68t155 *,A68t283,(struct A68t155 *,struct A68t155 *),(struct A68t155 *,struct A68t155 *,void *));
typedef struct A68t283  A68_283 ;    /* PROC(REF MODE155,REF MODE155) REF MODE155 */

A_PROCEDURE(struct A68t155 *,A68t284,(struct A68t150 ),(struct A68t150 ,void *));
typedef struct A68t284  A68_284 ;    /* PROC(MODE150) REF MODE155 */

A_PROCEDURE(A68_VOID ,A68t285,(A68_INT ,A68_INT ,A68_INT ),(A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t285  A68_285 ;    /* PROC(INT,INT,INT) VOID */
A_ISTRUCT(A68_CHAR ,3,A68t286);
typedef struct A68t286  A68_286 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(struct A68t58 ,3,A68t287);
typedef struct A68t287  A68_287 ;    /* STRUCT 3 MODE58 */
A_ISTRUCT(struct A68t58 ,2,A68t288);
typedef struct A68t288  A68_288 ;    /* STRUCT 2 MODE58 */

A_PROCEDURE(A68_VOID ,A68t289,(A68_INT ,struct A68t175 *,struct A68t149 *),(A68_INT ,struct A68t175 *,struct A68t149 *,void *));
typedef struct A68t289  A68_289 ;    /* PROC(INT,REF MODE175,REF MODE149) VOID */
A_ISTRUCT(A68_CHAR ,1025,A68t290);
typedef struct A68t290  A68_290 ;    /* STRUCT 1025 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t291);
typedef struct A68t291  A68_291 ;    /* STRUCT 2 CHAR */

A_PROCEDURE(A68_INT ,A68t292,(A68_VC ,A68_INT *),(A68_VC ,A68_INT *,void *));
typedef struct A68t292  A68_292 ;    /* PROC(REF MODE26,REF INT) INT */

A_PROCEDURE(A68_VOID ,A68t293,(struct A68t147 *,A68_INT *),(struct A68t147 *,A68_INT *,void *));
typedef struct A68t293  A68_293 ;    /* PROC(REF MODE147,REF INT) VOID */
A_ISTRUCT(A68_CHAR ,12,A68t294);
typedef struct A68t294  A68_294 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(struct A68t58 ,6,A68t295);
typedef struct A68t295  A68_295 ;    /* STRUCT 6 MODE58 */
A_ISTRUCT(A68_CHAR ,13,A68t296);
typedef struct A68t296  A68_296 ;    /* STRUCT 13 CHAR */
A_ISTRUCT(struct A68t58 ,4,A68t297);
typedef struct A68t297  A68_297 ;    /* STRUCT 4 MODE58 */

A_PROCEDURE(A68_VOID ,A68t298,(A68_INT ,struct A68t147 *,struct A68t149 *,A68_INT ),(A68_INT ,struct A68t147 *,struct A68t149 *,A68_INT ,void *));
typedef struct A68t298  A68_298 ;    /* PROC(INT,REF MODE147,REF MODE149,INT) VOID */
A_ISTRUCT(A68_CHAR ,6,A68t299);
typedef struct A68t299  A68_299 ;    /* STRUCT 6 CHAR */

A_PROCEDURE(A68_VOID ,A68t300,(A68_INT ,struct A68t175 *,struct A68t149 *,A68_INT ),(A68_INT ,struct A68t175 *,struct A68t149 *,A68_INT ,void *));
typedef struct A68t300  A68_300 ;    /* PROC(INT,REF MODE175,REF MODE149,INT) VOID */
A_ISTRUCT(A68_CHAR ,10,A68t301);
typedef struct A68t301  A68_301 ;    /* STRUCT 10 CHAR */

A_PROCEDURE(A68_BOOL ,A68t302,(A68_INT ,struct A68t175 *,A68_INT ,A68_BOOL ,struct A68t36 ),(A68_INT ,struct A68t175 *,A68_INT ,A68_BOOL ,struct A68t36 ,void *));
typedef struct A68t302  A68_302 ;    /* PROC(INT,REF MODE175,INT,BOOL,MODE36) BOOL */
struct A68t303 { A68_INT mode; union {
struct A68t176 * mode1;
A68_INT  mode2;
} data; };
typedef struct A68t303  A68_303 ;    /* UNION(REF MODE176,INT)  */

A_PROCEDURE(A68_VOID ,A68t304,(struct A68t303 ,A68_INT ,A68_INT ,A68_BOOL ,struct A68t32 *),(struct A68t303 ,A68_INT ,A68_INT ,A68_BOOL ,struct A68t32 *,void *));
typedef struct A68t304  A68_304 ;    /* PROC(MODE303,INT,INT,BOOL) REF MODE32 */

A_PROCEDURE(A68_BOOL ,A68t305,(A68_INT ,struct A68t36 ),(A68_INT ,struct A68t36 ,void *));
typedef struct A68t305  A68_305 ;    /* PROC(INT,MODE36) BOOL */

A_PROCEDURE(struct A68t147 *,A68t306,(struct A68t176 *,A68_INT ,A68_INT ,struct A68t36 ),(struct A68t176 *,A68_INT ,A68_INT ,struct A68t36 ,void *));
typedef struct A68t306  A68_306 ;    /* PROC(REF MODE176,INT,INT,MODE36) REF MODE147 */

A_PROCEDURE(A68_INT ,A68t307,(struct A68t147 *),(struct A68t147 *,void *));
typedef struct A68t307  A68_307 ;    /* PROC(REF MODE147) INT */

A_PROCEDURE(A68_VOID ,A68t308,(A68_INT ,struct A68t36 ),(A68_INT ,struct A68t36 ,void *));
typedef struct A68t308  A68_308 ;    /* PROC(INT,MODE36) VOID */

A_PROCEDURE(struct A68t147 *,A68t309,(A68_INT ,A68_BOOL ),(A68_INT ,A68_BOOL ,void *));
typedef struct A68t309  A68_309 ;    /* PROC(INT,BOOL) REF MODE147 */

A_PROCEDURE(A68_VOID ,A68t310,(A68_INT ,A68_BOOL ,struct A68t36 ),(A68_INT ,A68_BOOL ,struct A68t36 ,void *));
typedef struct A68t310  A68_310 ;    /* PROC(INT,BOOL,MODE36) VOID */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from ioprocs --- */
extern A68_INT  QPGAOST_current_width(void);
/* --- End of imports from ioprocs --- */


/* --- Imports from basics --- */
extern A68_VOID  RSCAOST_makeid(A68_VC ,A68_VC *);
extern A68_VOID  NKDAOST_sysfault(A68_VC );
/* --- End of imports from basics --- */


/* --- Imports from kernel --- */
extern A68_166 * WSAASIM_nilsst;
extern A68_155 * DTAASIM_nilsvst;
extern A68_VOID  LABASIM_(struct A68t173 ,struct A68t173 ,A68_173 *);
extern A68_INT  VYCBSIM_signalwidth(struct A68t160 );
extern A68_166 * PZCBSIM_trimsignal(struct A68t160 ,A68_INT ,A68_INT );
extern A68_VOID  AFDBSIM_decode(A68_VC ,struct A68t160 ,A68_149 *);
extern A68_INT  NZNASIM_machinewidth(struct A68t160 );
extern A68_INT  MLCBSIM_makeflagfanouts(struct A68t148 );
extern A68_VOID  GMCBSIM_removeflagfanouts(struct A68t148 ,A68_INT );
extern A68_INT  UCNASIM_cgpeekint(A68_INT );
extern A68_VOID  OCNASIM_cgpokeint(A68_INT ,A68_INT );
extern A68_VOID  BKCBSIM_peeksignalvalue(struct A68t148 ,A68_VC );
extern A68_VOID  MWCBSIM_lookupfunction(A68_INT ,A68_212 *);
/* --- End of imports from kernel --- */


/* --- Imports from simtime --- */
extern A68_INT  YPAASIM_activetime;
extern A68_INT  ZPAASIM_timemode;
#define AQAASIM_present 1
#define BQAASIM_past 2
extern A68_INT  EQAASIM_scaletime;
/* --- End of imports from simtime --- */


/* --- Imports from simpeek --- */
#define UFEBSIM_nopunctuation 0X0U
#define VFEBSIM_ampersands 0X1U
extern A68_VOID  HHEBSIM_printunrecordedsignalvalue(struct A68t160 ,A68_BITS ,struct A68t34 *);
extern A68_VOID  LHEBSIM_printsignalvalue(struct A68t149 ,A68_BITS ,struct A68t34 *);
extern A68_INT  KJEBSIM_printwidth(struct A68t160 ,A68_BITS );
/* --- End of imports from simpeek --- */


/* --- Imports from simpast --- */
extern A68_175 * BSFBSIM_savedtestpoints;
/* --- End of imports from simpast --- */


/* --- Imports from simnode --- */
extern A68_VOID  RBFBSIM_nodename(struct A68t176 *,A68_VC *);
extern A68_176 * QLFBSIM_absolutenodename(A68_VC ,struct A68t36 );
extern A68_VOID  FOFBSIM_smallname(struct A68t176 *,A68_VC *);
/* --- End of imports from simnode --- */


/* --- Imports from simtable --- */
extern A68_176 * HGDBSIM_nilpath;
/* --- End of imports from simtable --- */


/* --- Imports from simmonmode --- */
#define BZEBSIM_noaction 0
#define CZEBSIM_monitor 1
#define DZEBSIM_display 2
#define EZEBSIM_stop 3
#define FZEBSIM_keep 4
#define GZEBSIM_nocondition 0
#define HZEBSIM_always 1
#define IZEBSIM_changes 2
#define KZEBSIM_becomes 4
#define JZEBSIM_equals 3
extern A68_VC  MZEBSIM_novalue;
extern A68_175 * NZEBSIM_nilmonitorlist;
extern A68_INT  PZEBSIM_newhandle(void);
/* --- End of imports from simmonmode --- */


/* --- Imports from simbasics --- */
extern A68_INT  MQAASIM_max(A68_INT ,A68_INT );
/* --- End of imports from simbasics --- */


/* --- Imports from osinterface --- */
extern A68_35  DPBAOSI_io_ok;
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
extern A68_34 * LEAAOST_out;
/* --- End of imports from osinterface --- */


/* --- Imports from putstrings --- */
extern A68_VOID  FCAAOSI_intchars(A68_INT ,A68_VC *);
extern A68_INT  YOAAOSL_charnumber(struct A68t34 *);
extern A68_VOID  EYAAOSL_width(A68_VC ,A68_INT ,A68_63 *);
extern A68_VOID  JYAAOSL_justify(A68_VC ,A68_INT ,A68_64 *);
extern A68_VOID  CZAAOSL_spaces(A68_INT ,A68_68 *);
extern A68_VOID  LRAAOSL_newline(struct A68t34 *);
extern A68_VOID  GABAOSL_putstr(struct A68t34 *,A68_VC );
extern A68_VOID  GFBAOSL_put(struct A68t34 *,struct A68t88 );
/* --- End of imports from putstrings --- */


/* --- Imports from iobasics --- */
extern A68_VOID  SPAAOSL_nullgetbuffer(A68_VC ,A68_INT *,A68_35 *);
extern A68_VOID  PPAAOSL_nullputbuffer(A68_VC );
/* --- End of imports from iobasics --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void TIGAOST(void);   /* ioprocs */
extern void JSCAOST(void);   /* basics */
extern void XWBBSIM(void);   /* kernel */
extern void TPAASIM(void);   /* simtime */
extern void FFEBSIM(void);   /* simpeek */
extern void TRFBSIM(void);   /* simpast */
extern void RZEBSIM(void);   /* simnode */
extern void ZFDBSIM(void);   /* simtable */
extern void WYEBSIM(void);   /* simmonmode */
extern void FQAASIM(void);   /* simbasics */
extern void PCAAOST(void);   /* osinterface */
extern void MTAAOSL(void);   /* putstrings */
extern void GNAAOSL(void);   /* iobasics */
/* --- end of DECS initialisation functions --- */
static A68_274   ISFBSIM = {"$Id: simmonitor.a68,v 34.3 1995/03/29 13:04:59 ella Exp $"}; 
A_GISVEC(A68_VC ,JSFBSIM,ISFBSIM,57)
static A68_VC  OSFBSIM_emptyvalue;
A68_INT  QSFBSIM_printedtime;
A68_INT  RSFBSIM_printedtimestyle;
A68_INT  SSFBSIM_printedtimemode;
A68_INT  TSFBSIM_printstyle;
#define USFBSIM_freeform 1
#define VSFBSIM_tabulated 2
#define WSFBSIM_noprint 3
A68_175 * XSFBSIM_testpoints;
A68_CHAR  ZAGBSIM_monitoringseparator;
#define ABGBSIM_pagewidth QPGAOST_current_width
#define BBGBSIM_basictimewidth 10
static A68_INT  CBGBSIM_timewidth;
static A68_INT  DBGBSIM_firstcolumn;
static A68_286   OBGBSIM = {" : "}; 
A_GISVEC(A68_VC ,PBGBSIM,OBGBSIM,3)
static A68_INT  DCGBSIM_pendingnewlines;
static A68_175 * ECGBSIM_firstlayoutmonitor;
static A68_291   OFGBSIM = {".."}; 
A_GISVEC(A68_VC ,PFGBSIM,OFGBSIM,2)
static A68_294   WIGBSIM = {" *** time = "}; 
A_GISVEC(A68_VC ,XIGBSIM,WIGBSIM,12)
static A68_95   FJGBSIM = {" ***"}; 
A_GISVEC(A68_VC ,GJGBSIM,FJGBSIM,4)
static A68_296   QJGBSIM = {"  *** time = "}; 
A_GISVEC(A68_VC ,RJGBSIM,QJGBSIM,13)
static A68_95   VJGBSIM = {" ***"}; 
A_GISVEC(A68_VC ,WJGBSIM,VJGBSIM,4)
#define CKGBSIM_printbecomes 2
#define DKGBSIM_printequals 1
A68_INT  EKGBSIM_printeventequals;
A68_INT  FKGBSIM_printeventbecomes;
static A68_291   LKGBSIM = {", "}; 
A_GISVEC(A68_VC ,MKGBSIM,LKGBSIM,2)
static A68_299   QKGBSIM = {"EVENT "}; 
A_GISVEC(A68_VC ,RKGBSIM,QKGBSIM,6)
static A68_286   VKGBSIM = {" = "}; 
A_GISVEC(A68_VC ,WKGBSIM,VKGBSIM,3)
static A68_95   XKGBSIM = {" := "}; 
A_GISVEC(A68_VC ,YKGBSIM,XKGBSIM,4)
static A68_301   MLGBSIM = {"      TIME"}; 
A_GISVEC(A68_VC ,NLGBSIM,MLGBSIM,10)
static A68_296   VLGBSIM = {"      TIME :/"}; 
A_GISVEC(A68_VC ,WLGBSIM,VLGBSIM,13)
static A68_291   YMGBSIM = {".."}; 
A_GISVEC(A68_VC ,ANGBSIM,YMGBSIM,2)
static A68_BOOL  DQGBSIM_catchupneeded;
typedef struct   /* env of non-global proc */
{
int dummy;
} KVFBSIM_buildmonitoredblocks;
typedef struct   /* env of non-global proc */
{
A68_278  IXFBSIM_containsfunctiontypes;
} KXFBSIM_containsfunctiontypes;
typedef struct   /* env of non-global proc */
{
A68_175 * SYFBSIM_new;
} XYFBSIM_generator;
typedef struct   /* env of non-global proc */
{
A68_175 * SYFBSIM_new;
} HZFBSIM_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} HAGBSIM_flattenquerysignalvalue;
typedef struct   /* env of non-global proc */
{
A68_34 * WEGBSIM_ch;
A68_jmp_buf  OEGBSIM_restart;
A_PAD_jmp_buf(PAD_82)
} AFGBSIM_putbuffer;
typedef struct   /* env of non-global proc */
{
A68_INT  GGGBSIM_upb;
A_PAD_INT(PAD_83)
} KGGBSIM_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  UGGBSIM_upb;
A_PAD_INT(PAD_84)
} BHGBSIM_generator;
typedef struct   /* env of non-global proc */
{
A68_144  FIGBSIM_gcd;
} HIGBSIM_gcd;
typedef struct   /* env of non-global proc */
{
A68_147 * VNGBSIM_m;
} NOGBSIM_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  VQGBSIM_pathnodename;
} ZQGBSIM_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * QRGBSIM_i;
} URGBSIM_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * VTGBSIM_size;
} CUGBSIM_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} HTFBSIM_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * OTFBSIM_lastblock;
} UTFBSIM_generator;
typedef struct   /* env of non-global proc */
{
A68_173 * Originalblocks;
A68_INT * OTFBSIM_lastblock;
} EUFBSIM_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} RUFBSIM_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} DVFBSIM_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} VVFBSIM_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} QWFBSIM_generator;
typedef struct   /* env of non-global proc */
{
A68_34 * WEGBSIM_ch;
} EFGBSIM_generator;

A_STATIC A68_VOID  LSFBSIM_generator(A68_BOOL  KSFBSIM_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_172 * ZSFBSIM_makewiremonitorable(A68_172 * Wire);

A_STATIC A68_173 * DTFBSIM_getfirstblocks(A68_INT  Size, A68_173 * Originalblocks);

A_STATIC A68_VOID  GTFBSIM_generator(A68_BOOL  ETFBSIM_anonymous, A68_173  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  TTFBSIM_generator(A68_BOOL  RTFBSIM_anonymous, A68_173  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  DUFBSIM_generator(A68_BOOL  BUFBSIM_anonymous, A68_173  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  QUFBSIM_generator(A68_BOOL  OUFBSIM_anonymous, A68_173  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  CVFBSIM_generator(A68_BOOL  AVFBSIM_anonymous, A68_173  *ReturnedValue, void *NonLocals);

A_STATIC A68_172 * JVFBSIM_buildmonitoredblocks(A68_172 * Wire, void *NonLocals);

A_STATIC A68_VOID  UVFBSIM_generator(A68_BOOL  SVFBSIM_anonymous, A68_173  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  PWFBSIM_generator(A68_BOOL  NWFBSIM_anonymous, A68_173  *ReturnedValue, void *NonLocals);

A_STATIC A68_BOOL  JXFBSIM_containsfunctiontypes(A68_160  Wiretype, void *NonLocals);

A_STATIC A68_VOID  XXFBSIM_line(A68_176 * Path, A68_148  *ReturnedValue);

A68_175 * NYFBSIM_new(A68_175 * List);

A_STATIC A68_VOID  WYFBSIM_generator(A68_BOOL  UYFBSIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  GZFBSIM_generator(A68_BOOL  EZFBSIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  RZFBSIM_clear(A68_175 * List);

A_STATIC A68_155 * WZFBSIM_flattensignalvalue(A68_149  V);

A_STATIC A68_155 * AAGBSIM_(A68_155 * A, A68_155 * B);

A_STATIC A68_155 * GAGBSIM_flattenquerysignalvalue(A68_150  Q, void *NonLocals);

A_STATIC A68_VOID  HBGBSIM_pttimetabulatedscaled(A68_INT  Activetime, A68_INT  Scaletime, A68_INT  Timewidth);

A_STATIC A68_VOID  YBGBSIM_pttimetabulated(A68_INT  Atime);

A_STATIC A68_VOID  FCGBSIM_startlayout(void);

A_STATIC A68_VOID  HCGBSIM_layout(A68_175 * Ml);

A_STATIC A68_VOID  MCGBSIM_dolayout(A68_175 * Ml);

A_STATIC A68_VOID  QDGBSIM_printtabulated(A68_INT  Atime, A68_175 * Ml, A68_149 * Value);

A_STATIC A68_VOID  ZEGBSIM_putbuffer(A68_VC  S, void *NonLocals);

A_STATIC A68_VOID  DFGBSIM_generator(A68_BOOL  BFGBSIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_INT  SFGBSIM_idend(A68_VC  Id, A68_INT * Pos);

A_STATIC A68_VOID  XFGBSIM_setsingle(A68_147 * Mon, A68_INT * Pos);

A_STATIC A68_VOID  JGGBSIM_generator(A68_BOOL  HGGBSIM_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  AHGBSIM_generator(A68_BOOL  YGGBSIM_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A68_VOID  BIGBSIM_pttimefreeformscaled(A68_INT  Activetime, A68_INT  Scaletime);

A_STATIC A68_INT  GIGBSIM_gcd(A68_INT  Top, A68_INT  Bottom, void *NonLocals);

A_STATIC A68_VOID  NJGBSIM_pttimefreeform(A68_INT  Atime);

A68_VOID  KKGBSIM_printfreeform(A68_INT  Atime, A68_147 * M, A68_149 * Value, A68_INT  Form);

A68_VOID  DLGBSIM_pttime(void);

A_STATIC A68_VOID  JLGBSIM_printcurrentstyle(A68_INT  Atime, A68_175 * Ml, A68_149 * Value, A68_INT  Form);

A_STATIC A68_VOID  LLGBSIM_printheadingscaled(A68_INT  Scaletime);

A68_VOID  BMGBSIM_monitorheading(void);

A_STATIC A68_BOOL  UNGBSIM_domonitor(A68_INT  Atime, A68_175 * Ml, A68_INT  Handle, A68_BOOL  Noepi, A68_36  Flt);

A_STATIC A68_VOID  MOGBSIM_generator(A68_BOOL  KOGBSIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  IQGBSIM_listmonitors(A68_303  Nodedescriptor, A68_INT  Action, A68_INT  Condition, A68_BOOL  Forcepresentmode, A68_32  *ReturnedValue);

A_STATIC A68_VOID  YQGBSIM_generator(A68_BOOL  WQGBSIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  TRGBSIM_generator(A68_BOOL  RRGBSIM_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A68_BOOL  DSGBSIM_domonitors(A68_INT  Oldtime, A68_36  Flt);

A68_147 * ATGBSIM_loadmonitor(A68_176 * Path, A68_INT  Action, A68_INT  Condition, A68_36  Flt);

A_STATIC A68_VOID  BUGBSIM_generator(A68_BOOL  ZTGBSIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_INT  MUGBSIM_addmonitor(A68_147 * M);

A68_VOID  UUGBSIM_newtestpoints(A68_INT  Handle, A68_36  Flt);

A68_147 * HVGBSIM_lookupmonitor(A68_INT  Handle, A68_BOOL  Forcepresentmode);

A68_VOID  QVGBSIM_removemonitor(A68_INT  Handle, A68_BOOL  Permanent, A68_36  Flt);

A68_VOID  TVGBSIM_startmonitors(A68_36  Flt);

A_STATIC A68_VOID  GTFBSIM_generator(A68_BOOL  ETFBSIM_anonymous, A68_173  *ReturnedValue, void *NonLocals)
#define NL(x) (((HTFBSIM_generator *)NonLocals)->x)
{ 
A68_173  ITFBSIM;  /* clause result */
A68_173  JTFBSIM;  /* OPERATORS - dynamic generator */
{ 
 /* line 191: */
JTFBSIM.upb = 0 ;
( ETFBSIM_anonymous? A_VLOC(A68_174 ,JTFBSIM): A_VHEAP(A68_174 ,JTFBSIM) );
ITFBSIM = JTFBSIM;
} 
*ReturnedValue = (ITFBSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  TTFBSIM_generator(A68_BOOL  RTFBSIM_anonymous, A68_173  *ReturnedValue, void *NonLocals)
#define NL(x) (((UTFBSIM_generator *)NonLocals)->x)
{ 
A68_173  VTFBSIM;  /* clause result */
A68_173  WTFBSIM;  /* OPERATORS - dynamic generator */
{ 
WTFBSIM.upb = (*NL(OTFBSIM_lastblock)) ;
( RTFBSIM_anonymous? A_VLOC(A68_174 ,WTFBSIM): A_VHEAP(A68_174 ,WTFBSIM) );
VTFBSIM = WTFBSIM;
} 
*ReturnedValue = (VTFBSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  DUFBSIM_generator(A68_BOOL  BUFBSIM_anonymous, A68_173  *ReturnedValue, void *NonLocals)
#define NL(x) (((EUFBSIM_generator *)NonLocals)->x)
{ 
A68_173  FUFBSIM;  /* clause result */
A68_173  GUFBSIM;  /* OPERATORS - dynamic generator */
{ 
GUFBSIM.upb = ((*NL(Originalblocks)).upb-(*NL(OTFBSIM_lastblock))) ;
( BUFBSIM_anonymous? A_VLOC(A68_174 ,GUFBSIM): A_VHEAP(A68_174 ,GUFBSIM) );
FUFBSIM = GUFBSIM;
} 
*ReturnedValue = (FUFBSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  QUFBSIM_generator(A68_BOOL  OUFBSIM_anonymous, A68_173  *ReturnedValue, void *NonLocals)
#define NL(x) (((RUFBSIM_generator *)NonLocals)->x)
{ 
A68_173  SUFBSIM;  /* clause result */
A68_173  TUFBSIM;  /* OPERATORS - dynamic generator */
{ 
TUFBSIM.upb = 1 ;
( OUFBSIM_anonymous? A_VLOC(A68_174 ,TUFBSIM): A_VHEAP(A68_174 ,TUFBSIM) );
SUFBSIM = TUFBSIM;
} 
*ReturnedValue = (SUFBSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  CVFBSIM_generator(A68_BOOL  AVFBSIM_anonymous, A68_173  *ReturnedValue, void *NonLocals)
#define NL(x) (((DVFBSIM_generator *)NonLocals)->x)
{ 
A68_173  EVFBSIM;  /* clause result */
A68_173  FVFBSIM;  /* OPERATORS - dynamic generator */
{ 
 /* line 218: */
FVFBSIM.upb = 0 ;
( AVFBSIM_anonymous? A_VLOC(A68_174 ,FVFBSIM): A_VHEAP(A68_174 ,FVFBSIM) );
EVFBSIM = FVFBSIM;
} 
*ReturnedValue = (EVFBSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  UVFBSIM_generator(A68_BOOL  SVFBSIM_anonymous, A68_173  *ReturnedValue, void *NonLocals)
#define NL(x) (((VVFBSIM_generator *)NonLocals)->x)
{ 
A68_173  WVFBSIM;  /* clause result */
A68_173  XVFBSIM;  /* OPERATORS - dynamic generator */
{ 
XVFBSIM.upb = 0 ;
( SVFBSIM_anonymous? A_VLOC(A68_174 ,XVFBSIM): A_VHEAP(A68_174 ,XVFBSIM) );
WVFBSIM = XVFBSIM;
} 
*ReturnedValue = (WVFBSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  PWFBSIM_generator(A68_BOOL  NWFBSIM_anonymous, A68_173  *ReturnedValue, void *NonLocals)
#define NL(x) (((QWFBSIM_generator *)NonLocals)->x)
{ 
A68_173  RWFBSIM;  /* clause result */
A68_173  SWFBSIM;  /* OPERATORS - dynamic generator */
{ 
SWFBSIM.upb = 0 ;
( NWFBSIM_anonymous? A_VLOC(A68_174 ,SWFBSIM): A_VHEAP(A68_174 ,SWFBSIM) );
RWFBSIM = SWFBSIM;
} 
*ReturnedValue = (RWFBSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  DFGBSIM_generator(A68_BOOL  BFGBSIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((EFGBSIM_generator *)NonLocals)->x)
{ 
A68_VC  FFGBSIM;  /* clause result */
A68_VC  GFGBSIM;  /* OPERATORS - dynamic generator */
{ 
GFGBSIM.upb = ((*(&(NL(WEGBSIM_ch)->Buffer))).upb*2) ;
( BFGBSIM_anonymous? A_VLOC(A68_CHAR ,GFGBSIM): A_VHEAP(A68_CHAR ,GFGBSIM) );
FFGBSIM = GFGBSIM;
} 
*ReturnedValue = (FFGBSIM);
return;
} 
#undef NL

A_STATIC A68_173 * DTFBSIM_getfirstblocks(A68_INT  Size, A68_173 * Originalblocks)
{ 
A68_277  FTFBSIM_generator;   /* proc value of non-global proc */
A68_173 * KTFBSIM;  /* clause result */
A68_173  LTFBSIM;  /* avoid structure result */
A68_173 * MTFBSIM;  /* YIELD */
A68_INT  NTFBSIM_skipsize;
A68_INT  OTFBSIM_lastblock;
A68_BOOL  PTFBSIM;  /* clause result */
A68_173 * QTFBSIM_first;
A68_277  STFBSIM_generator;   /* proc value of non-global proc */
A68_173  XTFBSIM;  /* avoid structure result */
A68_173  YTFBSIM;  /* OPERATORS - trim index */
A68_173  ZTFBSIM;  /* OPERATORS - assign op */
A68_INT * AUFBSIM;  /* YIELD */
A68_277  CUFBSIM_generator;   /* proc value of non-global proc */
A68_173  HUFBSIM;  /* avoid structure result */
A68_173  IUFBSIM_first;
A68_173  JUFBSIM;  /* OPERATORS - trim index */
A68_173  KUFBSIM;  /* OPERATORS - assign op */
A68_INT  LUFBSIM;  /* YIELD */
A68_INT * MUFBSIM;  /* YIELD */
A68_173  NUFBSIM;  /* clause result */
A68_277  PUFBSIM_generator;   /* proc value of non-global proc */
A68_173  UUFBSIM;  /* avoid structure result */
A68_173  VUFBSIM_first;
A68_173  WUFBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_173  XUFBSIM;  /* OPERATORS - assign op */
A68_INT  YUFBSIM;  /* YIELD */
A68_INT * ZUFBSIM;  /* YIELD */
A68_277  BVFBSIM_generator;   /* proc value of non-global proc */
A68_173  GVFBSIM;  /* avoid structure result */
A_PROC_ENTRY(getfirstblocks);
 /* line 189: */
 /* line 190: */
if ( (Size==0) )
{ 
A_CLOSURE( FTFBSIM_generator, GTFBSIM_generator, HTFBSIM_generator );
 /* line 192: */
A_CALLPROC(FTFBSIM_generator,(A68_FALSE, &LTFBSIM),(A68_FALSE, &LTFBSIM,(FTFBSIM_generator).nonlocals));
MTFBSIM = A_HEAP(A68_173 ) ;
(*MTFBSIM) = LTFBSIM ;
KTFBSIM = MTFBSIM;
} 
else
{ 
NTFBSIM_skipsize = Size;
 /* line 193: */
OTFBSIM_lastblock = 1;
 /* line 194: */
for ( ;; )
{ 
NTFBSIM_skipsize-=(*(&((&A_VINDEX((*Originalblocks),OTFBSIM_lastblock))->Size)));
 /* line 195: */
 /* line 196: */
 /* line 197: */
PTFBSIM = (NTFBSIM_skipsize>0);
if ( !PTFBSIM ) break;
 /* line 198: */
OTFBSIM_lastblock+=1;
}
 /* line 199: */
QTFBSIM_first = (A_HEAP(A68_173 ));
A_CLOSURE( STFBSIM_generator, TTFBSIM_generator, UTFBSIM_generator );
(( UTFBSIM_generator * ) ( STFBSIM_generator.nonlocals )) -> OTFBSIM_lastblock = (&OTFBSIM_lastblock);
 /* line 200: */
A_CALLPROC(STFBSIM_generator,(A68_FALSE, &XTFBSIM),(A68_FALSE, &XTFBSIM,(STFBSIM_generator).nonlocals));
ZTFBSIM = A_VTRIM(YTFBSIM,((*Originalblocks)),A_VTSCRIPT(&(YTFBSIM.upb),((*Originalblocks)).upb,1,OTFBSIM_lastblock)) ;
A_VASSIGN2(ZTFBSIM,XTFBSIM,A68_174 ) ;
(*QTFBSIM_first) = XTFBSIM;
 /* line 201: */
AUFBSIM = (&((&A_VINDEX((*QTFBSIM_first),OTFBSIM_lastblock))->Size)) ;
(*AUFBSIM)+=NTFBSIM_skipsize;
 /* line 203: */
 /* line 204: */
 /* line 205: */
if ( (OTFBSIM_lastblock<(*Originalblocks).upb) )
{ 
A_CLOSURE( CUFBSIM_generator, DUFBSIM_generator, EUFBSIM_generator );
(( EUFBSIM_generator * ) ( CUFBSIM_generator.nonlocals )) -> Originalblocks = Originalblocks;
(( EUFBSIM_generator * ) ( CUFBSIM_generator.nonlocals )) -> OTFBSIM_lastblock = (&OTFBSIM_lastblock);
 /* line 206: */
A_CALLPROC(CUFBSIM_generator,(A68_FALSE, &HUFBSIM),(A68_FALSE, &HUFBSIM,(CUFBSIM_generator).nonlocals));
IUFBSIM_first = HUFBSIM;
KUFBSIM = A_VTRIM(JUFBSIM,((*Originalblocks)),A_VTSCRIPT(&(JUFBSIM.upb),((*Originalblocks)).upb,(OTFBSIM_lastblock+1),((*Originalblocks)).upb)) ;
A_VASSIGN2(KUFBSIM,IUFBSIM_first,A68_174 );
 /* line 207: */
 /* line 208: */
if ( (NTFBSIM_skipsize<0) )
{ 
 /* line 209: */
LUFBSIM = 1 ;
MUFBSIM = (&((&A_VINDEX(IUFBSIM_first,LUFBSIM))->Size)) ;
(*MUFBSIM) = (-NTFBSIM_skipsize);
} 
 /* line 210: */
 /* line 211: */
NUFBSIM = IUFBSIM_first;
} 
else
{ 
 /* line 212: */
 /* line 213: */
if ( (NTFBSIM_skipsize<0) )
{ 
A_CLOSURE( PUFBSIM_generator, QUFBSIM_generator, RUFBSIM_generator );
A_CALLPROC(PUFBSIM_generator,(A68_FALSE, &UUFBSIM),(A68_FALSE, &UUFBSIM,(PUFBSIM_generator).nonlocals));
VUFBSIM_first = UUFBSIM;
XUFBSIM = A_HVEC(WUFBSIM,(*(&A_VINDEX((*Originalblocks),OTFBSIM_lastblock))),A68_174 ) ;
A_VASSIGN2(XUFBSIM,VUFBSIM_first,A68_174 );
 /* line 214: */
YUFBSIM = 1 ;
ZUFBSIM = (&((&A_VINDEX(VUFBSIM_first,YUFBSIM))->Size)) ;
(*ZUFBSIM) = (-NTFBSIM_skipsize);
 /* line 215: */
 /* line 216: */
 /* line 217: */
NUFBSIM = VUFBSIM_first;
} 
else
{ 
A_CLOSURE( BVFBSIM_generator, CVFBSIM_generator, DVFBSIM_generator );
A_CALLPROC(BVFBSIM_generator,(A68_FALSE, &GVFBSIM),(A68_FALSE, &GVFBSIM,(BVFBSIM_generator).nonlocals));
NUFBSIM = GVFBSIM;
} 
} 
(*Originalblocks) = NUFBSIM;
 /* line 219: */
 /* line 220: */
KTFBSIM = QTFBSIM_first;
} 
A_PROC_EXIT(getfirstblocks);
return( KTFBSIM );
} 
#undef NL

A_STATIC A68_172 * JVFBSIM_buildmonitoredblocks(A68_172 * Wire, void *NonLocals)
#define NL(x) (((KVFBSIM_buildmonitoredblocks *)NonLocals)->x)
{ 
A68_160  LVFBSIM;  /* united object - for case conformity */
A68_165 * MVFBSIM_sfn;
A68_173  NVFBSIM_ignore;
A68_172  OVFBSIM;  /* collateral clause result */
A68_172 * PVFBSIM;  /* clause result */
A68_172 * QVFBSIM;  /* YIELD */
A68_166 * RVFBSIM_sst;
A68_277  TVFBSIM_generator;   /* proc value of non-global proc */
A68_173  ZVFBSIM;  /* avoid structure result */
A68_173  YVFBSIM_resultblocks;
A68_166  AWFBSIM_resulttype;
A68_166 ** BWFBSIM;  /* YIELD */
A68_166 ** CWFBSIM_newstr;
A68_166 * DWFBSIM_scan;
A68_172  EWFBSIM;  /* collateral clause result */
A68_172 * FWFBSIM;  /* YIELD */
A68_172  GWFBSIM_newwire;
A68_166  HWFBSIM;  /* collateral clause result */
A68_166 * IWFBSIM;  /* YIELD */
A68_173  JWFBSIM;  /* avoid structure result */
A68_172  KWFBSIM;  /* collateral clause result */
A68_172 * LWFBSIM;  /* YIELD */
A68_163 * MWFBSIM_srow;
A68_277  OWFBSIM_generator;   /* proc value of non-global proc */
A68_173  UWFBSIM;  /* avoid structure result */
A68_173  TWFBSIM_resultblocks;
A68_163 * VWFBSIM_resultrow;
A68_INT  WWFBSIM_i;
A68_INT  XWFBSIM;  /* to part of loop */
A68_172  YWFBSIM;  /* collateral clause result */
A68_172 * ZWFBSIM;  /* YIELD */
A68_172  AXFBSIM_newwire;
A68_173  BXFBSIM;  /* avoid structure result */
A68_172  CXFBSIM;  /* collateral clause result */
A68_160  DXFBSIM;  /* OPERATORS - mode -> union mode */
A68_172 * EXFBSIM;  /* YIELD */
A68_172  FXFBSIM;  /* collateral clause result */
A68_172 * GXFBSIM;  /* YIELD */
A_PROC_ENTRY(buildmonitoredblocks);
 /* line 225: */
 /* line 226: */
LVFBSIM = (*(&(Wire->Type))) ;
switch ( LVFBSIM.mode )
{ 
case 6: /* REF STRUCT(MODE160,MODE160)  */
MVFBSIM_sfn = (LVFBSIM.data.mode6);
 /* line 227: */
 /* line 228: */
{ 
 /* line 229: */
NVFBSIM_ignore = (*DTFBSIM_getfirstblocks(NZNASIM_machinewidth((*(&(MVFBSIM_sfn->From)))), (&(Wire->Blocks))));
 /* line 230: */
OVFBSIM.Type = (*(&(MVFBSIM_sfn->To)));
OVFBSIM.Blocks = (*(&(Wire->Blocks)));
 /* line 231: */
 /* line 232: */
QVFBSIM = A_HEAP(A68_172 ) ;
(*QVFBSIM) = OVFBSIM ;
PVFBSIM = ZSFBSIM_makewiremonitorable(QVFBSIM);
} 
break;
case 7: /* REF STRUCT(MODE160,REF MODE166)  */
RVFBSIM_sst = (LVFBSIM.data.mode7);
 /* line 233: */
 /* line 234: */
{ 
A_CLOSURE( TVFBSIM_generator, UVFBSIM_generator, VVFBSIM_generator );
A_CALLPROC(TVFBSIM_generator,(A68_FALSE, &ZVFBSIM),(A68_FALSE, &ZVFBSIM,(TVFBSIM_generator).nonlocals));
YVFBSIM_resultblocks = ZVFBSIM;
 /* line 235: */
 /* line 236: */
BWFBSIM = (&((&AWFBSIM_resulttype)->Rest)) ;
(*BWFBSIM) = WSAASIM_nilsst;
 /* line 237: */
CWFBSIM_newstr = (&((&AWFBSIM_resulttype)->Rest));
 /* line 238: */
DWFBSIM_scan = RVFBSIM_sst;
 /* line 239: */
for ( ;; )
{ 
 /* line 240: */
if ( !((DWFBSIM_scan!=WSAASIM_nilsst)) ) break;
 /* line 241: */
EWFBSIM.Type = (*(&(DWFBSIM_scan->T)));
EWFBSIM.Blocks = (*(&(Wire->Blocks)));
FWFBSIM = A_HEAP(A68_172 ) ;
(*FWFBSIM) = EWFBSIM ;
GWFBSIM_newwire = (*ZSFBSIM_makewiremonitorable(FWFBSIM));
 /* line 242: */
HWFBSIM.T = GWFBSIM_newwire.Type;
HWFBSIM.Rest = WSAASIM_nilsst;
IWFBSIM = A_HEAP(A68_166 ) ;
(**CWFBSIM_newstr) = (*IWFBSIM) = HWFBSIM;
 /* line 243: */
LABASIM_( YVFBSIM_resultblocks, GWFBSIM_newwire.Blocks, &JWFBSIM );
YVFBSIM_resultblocks = JWFBSIM;
 /* line 244: */
CWFBSIM_newstr = (&((*CWFBSIM_newstr)->Rest));
 /* line 245: */
 /* line 246: */
DWFBSIM_scan = (*(&(DWFBSIM_scan->Rest)));
}
 /* line 247: */
KWFBSIM.Type = (*(&((&AWFBSIM_resulttype)->T)));
 /* line 248: */
KWFBSIM.Blocks = YVFBSIM_resultblocks;
 /* line 249: */
LWFBSIM = A_HEAP(A68_172 ) ;
(*LWFBSIM) = KWFBSIM ;
PVFBSIM = LWFBSIM;
} 
break;
case 4: /* REF STRUCT(INT,MODE160)  */
MWFBSIM_srow = (LVFBSIM.data.mode4);
 /* line 250: */
 /* line 251: */
{ 
A_CLOSURE( OWFBSIM_generator, PWFBSIM_generator, QWFBSIM_generator );
A_CALLPROC(OWFBSIM_generator,(A68_FALSE, &UWFBSIM),(A68_FALSE, &UWFBSIM,(OWFBSIM_generator).nonlocals));
TWFBSIM_resultblocks = UWFBSIM;
 /* line 252: */
VWFBSIM_resultrow = (A_HEAP(A68_163 ));
(*VWFBSIM_resultrow) = (*MWFBSIM_srow);
 /* line 253: */
XWFBSIM = (*(&(MWFBSIM_srow->No)));
for ( WWFBSIM_i = 1;
WWFBSIM_i <= XWFBSIM;
WWFBSIM_i += 1 )
{ 
 /* line 254: */
 /* line 255: */
YWFBSIM.Type = (*(&(MWFBSIM_srow->Type)));
YWFBSIM.Blocks = (*(&(Wire->Blocks)));
ZWFBSIM = A_HEAP(A68_172 ) ;
(*ZWFBSIM) = YWFBSIM ;
AXFBSIM_newwire = (*ZSFBSIM_makewiremonitorable(ZWFBSIM));
 /* line 256: */
 /* line 257: */
LABASIM_( TWFBSIM_resultblocks, AXFBSIM_newwire.Blocks, &BXFBSIM );
TWFBSIM_resultblocks = BXFBSIM;
}
 /* line 258: */
CXFBSIM.Type = A_UNITE(DXFBSIM,mode4,4,VWFBSIM_resultrow);
 /* line 259: */
CXFBSIM.Blocks = TWFBSIM_resultblocks;
 /* line 260: */
 /* line 261: */
EXFBSIM = A_HEAP(A68_172 ) ;
(*EXFBSIM) = CXFBSIM ;
PVFBSIM = EXFBSIM;
} 
break;
default: 
 /* line 262: */
FXFBSIM.Type = (*(&(Wire->Type)));
 /* line 263: */
 /* line 264: */
FXFBSIM.Blocks = (*DTFBSIM_getfirstblocks(NZNASIM_machinewidth((*(&(Wire->Type)))), (&(Wire->Blocks))));
GXFBSIM = A_HEAP(A68_172 ) ;
(*GXFBSIM) = FXFBSIM ;
PVFBSIM = GXFBSIM;
break;
} 
A_PROC_EXIT(buildmonitoredblocks);
return( PVFBSIM );
} 
#undef NL

A_STATIC A68_BOOL  JXFBSIM_containsfunctiontypes(A68_160  Wiretype, void *NonLocals)
#define NL(x) (((KXFBSIM_containsfunctiontypes *)NonLocals)->x)
{ 
A68_BOOL  LXFBSIM_result;
A68_160  MXFBSIM;  /* united object - for case conformity */
A68_165 * NXFBSIM_sfn;
A68_166 * OXFBSIM_sst;
A68_166 * PXFBSIM_scan;
A68_BOOL  QXFBSIM;  /* optbool result */
A68_163 * RXFBSIM_srow;
A68_BOOL  SXFBSIM;  /* clause result */
A_PROC_ENTRY(containsfunctiontypes);
 /* line 268: */
 /* line 269: */
{ 
LXFBSIM_result = A68_FALSE;
 /* line 270: */
 /* line 271: */
MXFBSIM = Wiretype ;
switch ( MXFBSIM.mode )
{ 
case 6: /* REF STRUCT(MODE160,MODE160)  */
NXFBSIM_sfn = (MXFBSIM.data.mode6);
 /* line 272: */
LXFBSIM_result = A68_TRUE;
break;
case 7: /* REF STRUCT(MODE160,REF MODE166)  */
OXFBSIM_sst = (MXFBSIM.data.mode7);
 /* line 273: */
 /* line 274: */
{ 
PXFBSIM_scan = OXFBSIM_sst;
 /* line 275: */
for ( ;; )
{ 
QXFBSIM = !LXFBSIM_result;
if ( QXFBSIM )
{QXFBSIM = (PXFBSIM_scan!=WSAASIM_nilsst);
}
 /* line 276: */
if ( !(QXFBSIM) ) break;
LXFBSIM_result = A_CALLPROC(NL(IXFBSIM_containsfunctiontypes),((*(&(PXFBSIM_scan->T)))),((*(&(PXFBSIM_scan->T))),(NL(IXFBSIM_containsfunctiontypes)).nonlocals));
 /* line 277: */
 /* line 278: */
PXFBSIM_scan = (*(&(PXFBSIM_scan->Rest)));
}
 /* line 279: */
 /* line 280: */
} 
break;
case 4: /* REF STRUCT(INT,MODE160)  */
RXFBSIM_srow = (MXFBSIM.data.mode4);
 /* line 281: */
 /* line 282: */
 /* line 283: */
LXFBSIM_result = A_CALLPROC(NL(IXFBSIM_containsfunctiontypes),((*(&(RXFBSIM_srow->Type)))),((*(&(RXFBSIM_srow->Type))),(NL(IXFBSIM_containsfunctiontypes)).nonlocals));
break;
default: 
/*SKIP*/;
break;
} 
 /* line 284: */
 /* line 285: */
SXFBSIM = LXFBSIM_result;
} 
A_PROC_EXIT(containsfunctiontypes);
return( SXFBSIM );
} 
#undef NL

A_STATIC A68_VOID  WYFBSIM_generator(A68_BOOL  UYFBSIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((XYFBSIM_generator *)NonLocals)->x)
{ 
A68_VC  YYFBSIM;  /* clause result */
A68_VC  ZYFBSIM;  /* OPERATORS - dynamic generator */
{ 
ZYFBSIM.upb = (*(&((&(NL(SYFBSIM_new)->Monitor))->Testvalues))).upb ;
( UYFBSIM_anonymous? A_VLOC(A68_CHAR ,ZYFBSIM): A_VHEAP(A68_CHAR ,ZYFBSIM) );
YYFBSIM = ZYFBSIM;
} 
*ReturnedValue = (YYFBSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  GZFBSIM_generator(A68_BOOL  EZFBSIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((HZFBSIM_generator *)NonLocals)->x)
{ 
A68_VC  IZFBSIM;  /* clause result */
A68_VC  JZFBSIM;  /* OPERATORS - dynamic generator */
{ 
JZFBSIM.upb = (*(&((&(NL(SYFBSIM_new)->Monitor))->Lastvalues))).upb ;
( EZFBSIM_anonymous? A_VLOC(A68_CHAR ,JZFBSIM): A_VHEAP(A68_CHAR ,JZFBSIM) );
IZFBSIM = JZFBSIM;
} 
*ReturnedValue = (IZFBSIM);
return;
} 
#undef NL

A_STATIC A68_155 * AAGBSIM_(A68_155 * A, A68_155 * B)
{ 
A68_155 * BAGBSIM_aa;
A68_155 ** CAGBSIM_p;
A68_155 * DAGBSIM;  /* clause result */
A_PROC_ENTRY(+);
 /* line 382: */
 /* line 383: */
{ 
BAGBSIM_aa = A;
 /* line 384: */
CAGBSIM_p = (&BAGBSIM_aa);
 /* line 385: */
for ( ;; )
{ 
if ( !(((*CAGBSIM_p)!=DTAASIM_nilsvst)) ) break;
CAGBSIM_p = (&((*CAGBSIM_p)->Tail));
}
 /* line 386: */
(*CAGBSIM_p) = B;
 /* line 387: */
 /* line 388: */
DAGBSIM = BAGBSIM_aa;
} 
A_PROC_EXIT(+);
return( DAGBSIM );
} 
#undef NL

A_STATIC A68_155 * GAGBSIM_flattenquerysignalvalue(A68_150  Q, void *NonLocals)
#define NL(x) (((HAGBSIM_flattenquerysignalvalue *)NonLocals)->x)
{ 
A68_INT  IAGBSIM_upb;
A68_166 * JAGBSIM_ptr;
A68_155 * KAGBSIM_ans;
A68_150 * LAGBSIM_q;
A68_160 * MAGBSIM;  /* YIELD */
A68_155  NAGBSIM;  /* collateral clause result */
A68_149  OAGBSIM;  /* OPERATORS - mode -> union mode */
A68_155 * PAGBSIM;  /* YIELD */
A68_155 * QAGBSIM;  /* clause result */
A_PROC_ENTRY(flattenquerysignalvalue);
 /* line 391: */
 /* line 392: */
{ 
IAGBSIM_upb = VYCBSIM_signalwidth(Q.Type);
 /* line 393: */
JAGBSIM_ptr = PZCBSIM_trimsignal(Q.Type, 1, IAGBSIM_upb);
 /* line 394: */
KAGBSIM_ans = DTAASIM_nilsvst;
 /* line 395: */
for ( ;; )
{ 
 /* line 396: */
if ( !((JAGBSIM_ptr!=WSAASIM_nilsst)) ) break;
LAGBSIM_q = (A_HEAP(A68_150 ));
 /* line 397: */
MAGBSIM = (&(LAGBSIM_q->Type)) ;
(*MAGBSIM) = (*(&(JAGBSIM_ptr->T)));
 /* line 398: */
NAGBSIM.Head = A_UNITE(OAGBSIM,mode1,1,LAGBSIM_q);
NAGBSIM.Tail = DTAASIM_nilsvst;
PAGBSIM = AAGBSIM_(KAGBSIM_ans, A_HEAP(A68_155 )) ;
(*PAGBSIM) = NAGBSIM ;
KAGBSIM_ans = PAGBSIM;
 /* line 399: */
 /* line 400: */
JAGBSIM_ptr = (*(&(JAGBSIM_ptr->Rest)));
}
 /* line 401: */
 /* line 402: */
QAGBSIM = KAGBSIM_ans;
} 
A_PROC_EXIT(flattenquerysignalvalue);
return( QAGBSIM );
} 
#undef NL

A_STATIC A68_VOID  ZEGBSIM_putbuffer(A68_VC  S, void *NonLocals)
#define NL(x) (((AFGBSIM_putbuffer *)NonLocals)->x)
{ 
A68_31  CFGBSIM_generator;   /* proc value of non-global proc */
A68_VC  HFGBSIM;  /* avoid structure result */
A68_VC * IFGBSIM;  /* YIELD */
A68_INT * JFGBSIM;  /* YIELD */
A_PROC_ENTRY(putbuffer);
 /* line 590: */
 /* line 591: */
{ 
A_CLOSURE( CFGBSIM_generator, DFGBSIM_generator, EFGBSIM_generator );
(( EFGBSIM_generator * ) ( CFGBSIM_generator.nonlocals )) -> WEGBSIM_ch = NL(WEGBSIM_ch);
A_CALLPROC(CFGBSIM_generator,(A68_FALSE, &HFGBSIM),(A68_FALSE, &HFGBSIM,(CFGBSIM_generator).nonlocals));
IFGBSIM = (&(NL(WEGBSIM_ch)->Buffer)) ;
(*IFGBSIM) = HFGBSIM;
 /* line 592: */
JFGBSIM = (&(NL(WEGBSIM_ch)->Width)) ;
(*JFGBSIM) = ((*(&(NL(WEGBSIM_ch)->Buffer))).upb-1);
 /* line 593: */
 /* line 594: */
siglongjmp(NL(OEGBSIM_restart).label,1);
} 
A_PROC_EXIT(putbuffer);
return;
} 
#undef NL

A_STATIC A68_VOID  JGGBSIM_generator(A68_BOOL  HGGBSIM_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((KGGBSIM_generator *)NonLocals)->x)
{ 
A68_32  LGGBSIM;  /* clause result */
A68_32  MGGBSIM;  /* OPERATORS - dynamic generator */
{ 
MGGBSIM.upb = NL(GGGBSIM_upb) ;
( HGGBSIM_anonymous? A_VLOC(A68_INT ,MGGBSIM): A_VHEAP(A68_INT ,MGGBSIM) );
LGGBSIM = MGGBSIM;
} 
*ReturnedValue = (LGGBSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  AHGBSIM_generator(A68_BOOL  YGGBSIM_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((BHGBSIM_generator *)NonLocals)->x)
{ 
A68_32  CHGBSIM;  /* clause result */
A68_32  DHGBSIM;  /* OPERATORS - dynamic generator */
{ 
 /* line 661: */
DHGBSIM.upb = NL(UGGBSIM_upb) ;
( YGGBSIM_anonymous? A_VLOC(A68_INT ,DHGBSIM): A_VHEAP(A68_INT ,DHGBSIM) );
CHGBSIM = DHGBSIM;
} 
*ReturnedValue = (CHGBSIM);
return;
} 
#undef NL

A_STATIC A68_INT  GIGBSIM_gcd(A68_INT  Top, A68_INT  Bottom, void *NonLocals)
#define NL(x) (((HIGBSIM_gcd *)NonLocals)->x)
{ 
A68_INT  IIGBSIM;  /* ADICOPS - MOD */
A68_INT  JIGBSIM_remainder;
A68_INT  KIGBSIM;  /* clause result */
A_PROC_ENTRY(gcd);
 /* line 701: */
 /* line 704: */
{ 
JIGBSIM_remainder = A_MOD(Top,Bottom,IIGBSIM);
 /* line 705: */
 /* line 707: */
if ( (JIGBSIM_remainder==0) )
{ 
 /* line 708: */
KIGBSIM = Bottom;
} 
else
{ 
 /* line 709: */
 /* line 711: */
KIGBSIM = A_CALLPROC(NL(FIGBSIM_gcd),(Bottom, JIGBSIM_remainder),(Bottom, JIGBSIM_remainder,(NL(FIGBSIM_gcd)).nonlocals));
} 
} 
A_PROC_EXIT(gcd);
return( KIGBSIM );
} 
#undef NL

A_STATIC A68_VOID  MOGBSIM_generator(A68_BOOL  KOGBSIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((NOGBSIM_generator *)NonLocals)->x)
{ 
A68_VC  OOGBSIM;  /* clause result */
A68_VC  POGBSIM;  /* OPERATORS - dynamic generator */
{ 
 /* line 994: */
POGBSIM.upb = (*(&(NL(VNGBSIM_m)->Workspace))).upb ;
( KOGBSIM_anonymous? A_VLOC(A68_CHAR ,POGBSIM): A_VHEAP(A68_CHAR ,POGBSIM) );
OOGBSIM = POGBSIM;
} 
*ReturnedValue = (OOGBSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  YQGBSIM_generator(A68_BOOL  WQGBSIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((ZQGBSIM_generator *)NonLocals)->x)
{ 
A68_VC  ARGBSIM;  /* clause result */
A68_VC  BRGBSIM;  /* OPERATORS - dynamic generator */
{ 
BRGBSIM.upb = NL(VQGBSIM_pathnodename).upb ;
( WQGBSIM_anonymous? A_VLOC(A68_CHAR ,BRGBSIM): A_VHEAP(A68_CHAR ,BRGBSIM) );
ARGBSIM = BRGBSIM;
} 
*ReturnedValue = (ARGBSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  TRGBSIM_generator(A68_BOOL  RRGBSIM_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((URGBSIM_generator *)NonLocals)->x)
{ 
A68_32  VRGBSIM;  /* clause result */
A68_32  WRGBSIM;  /* OPERATORS - dynamic generator */
{ 
WRGBSIM.upb = (*NL(QRGBSIM_i)) ;
( RRGBSIM_anonymous? A_VLOC(A68_INT ,WRGBSIM): A_VHEAP(A68_INT ,WRGBSIM) );
VRGBSIM = WRGBSIM;
} 
*ReturnedValue = (VRGBSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  BUGBSIM_generator(A68_BOOL  ZTGBSIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((CUGBSIM_generator *)NonLocals)->x)
{ 
A68_VC  DUGBSIM;  /* clause result */
A68_VC  EUGBSIM;  /* OPERATORS - dynamic generator */
{ 
EUGBSIM.upb = (*NL(VTGBSIM_size)) ;
( ZTGBSIM_anonymous? A_VLOC(A68_CHAR ,EUGBSIM): A_VHEAP(A68_CHAR ,EUGBSIM) );
DUGBSIM = EUGBSIM;
} 
*ReturnedValue = (DUGBSIM);
return;
} 
#undef NL

A_STATIC A68_VOID  LSFBSIM_generator(A68_BOOL  KSFBSIM_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  MSFBSIM;  /* clause result */
A68_VC  NSFBSIM;  /* OPERATORS - dynamic generator */
{ 
NSFBSIM.upb = 0 ;
( KSFBSIM_anonymous? A_VLOC(A68_CHAR ,NSFBSIM): A_VHEAP(A68_CHAR ,NSFBSIM) );
MSFBSIM = NSFBSIM;
} 
*ReturnedValue = (MSFBSIM);
return;
} 
#undef NL

A_STATIC A68_172 * ZSFBSIM_makewiremonitorable(A68_172 * Wire)
{ 
A68_275  IVFBSIM_buildmonitoredblocks;   /* proc value of non-global proc */
A68_278  IXFBSIM_containsfunctiontypes;   /* proc value of non-global proc */
A68_172  TXFBSIM;  /* collateral clause result */
A68_172 * UXFBSIM;  /* clause result */
A68_172 * VXFBSIM;  /* YIELD */
A_PROC_ENTRY(makewiremonitorable);
 /* line 181: */
 /* line 186: */
{ 
 /* line 224: */
A_CLOSURE( IVFBSIM_buildmonitoredblocks, JVFBSIM_buildmonitoredblocks, KVFBSIM_buildmonitoredblocks );
 /* line 267: */
A_CLOSURE( IXFBSIM_containsfunctiontypes, JXFBSIM_containsfunctiontypes, KXFBSIM_containsfunctiontypes );
(( KXFBSIM_containsfunctiontypes * ) ( IXFBSIM_containsfunctiontypes.nonlocals )) -> IXFBSIM_containsfunctiontypes = IXFBSIM_containsfunctiontypes;
 /* line 288: */
 /* line 289: */
if ( A_CALLPROC(IXFBSIM_containsfunctiontypes,((*(&(Wire->Type)))),((*(&(Wire->Type))),(IXFBSIM_containsfunctiontypes).nonlocals)) )
{ 
TXFBSIM.Type = (*(&(Wire->Type)));
TXFBSIM.Blocks = (*(&(Wire->Blocks)));
 /* line 290: */
 /* line 292: */
VXFBSIM = A_HEAP(A68_172 ) ;
(*VXFBSIM) = TXFBSIM ;
UXFBSIM = A_CALLPROC(IVFBSIM_buildmonitoredblocks,(VXFBSIM),(VXFBSIM,(IVFBSIM_buildmonitoredblocks).nonlocals));
} 
else
{ 
 /* line 293: */
UXFBSIM = Wire;
} 
} 
A_PROC_EXIT(makewiremonitorable);
return( UXFBSIM );
} 
#undef NL

A_STATIC A68_VOID  XXFBSIM_line(A68_176 * Path, A68_148  *ReturnedValue)
{ 
A68_176 * YXFBSIM_last;
A68_148  ZXFBSIM_mnode;
A68_169  AYFBSIM;  /* united object - for case conformity */
A68_171  BYFBSIM_l;
A68_171  CYFBSIM;  /* collateral clause result */
A68_169  DYFBSIM;  /* clause result */
A68_169  EYFBSIM;  /* OPERATORS - mode -> union mode */
A68_170  FYFBSIM_b;
A68_171  GYFBSIM;  /* collateral clause result */
A68_212  HYFBSIM;  /* avoid structure result */
A68_172 * IYFBSIM;  /* YIELD */
A68_169  JYFBSIM;  /* OPERATORS - mode -> union mode */
A68_169 * KYFBSIM;  /* YIELD */
A68_148  LYFBSIM;  /* clause result */
A_PROC_ENTRY(line);
 /* line 302: */
 /* line 303: */
{ 
YXFBSIM_last = Path;
 /* line 304: */
for ( ;; )
{ 
if ( !(((*(&(YXFBSIM_last->Rest)))!=HGDBSIM_nilpath)) ) break;
YXFBSIM_last = (*(&(YXFBSIM_last->Rest)));
}
 /* line 305: */
ZXFBSIM_mnode = (*(*(&((*(&(YXFBSIM_last->Bind)))->Node))));
 /* line 306: */
 /* line 307: */
 /* line 308: */
AYFBSIM = (*(&((&ZXFBSIM_mnode)->Node))) ;
switch ( AYFBSIM.mode )
{ 
case 2: /* STRUCT(REF MODE172,INT)  */
BYFBSIM_l = (AYFBSIM.data.mode2);
CYFBSIM.Wire = ZSFBSIM_makewiremonitorable(BYFBSIM_l.Wire);
CYFBSIM.Instance = BYFBSIM_l.Instance;
 /* line 309: */
DYFBSIM = A_UNITE(EYFBSIM,mode2,2,CYFBSIM);
break;
case 1: /* STRUCT(INT,INT)  */
FYFBSIM_b = (AYFBSIM.data.mode1);
 /* line 310: */
 /* line 311: */
MWCBSIM_lookupfunction( FYFBSIM_b.Fn, &HYFBSIM );
IYFBSIM = A_HEAP(A68_172 ) ;
(*IYFBSIM) = HYFBSIM.Outputs ;
GYFBSIM.Wire = ZSFBSIM_makewiremonitorable(IYFBSIM);
 /* line 312: */
GYFBSIM.Instance = FYFBSIM_b.Instance;
DYFBSIM = A_UNITE(JYFBSIM,mode2,2,GYFBSIM);
break;
default: 
A_IMP_SKIP ;
break;
} 
KYFBSIM = (&((&ZXFBSIM_mnode)->Node)) ;
(*KYFBSIM) = DYFBSIM;
 /* line 313: */
 /* line 314: */
LYFBSIM = ZXFBSIM_mnode;
} 
A_PROC_EXIT(line);
*ReturnedValue = (LYFBSIM);
return;
} 
#undef NL

A68_175 * NYFBSIM_new(A68_175 * List)
{ 
A68_175 * OYFBSIM_result;
A68_175 * PYFBSIM_scan;
A68_175 ** QYFBSIM_last;
A68_175 * RYFBSIM;  /* YIELD */
A68_175 * SYFBSIM_new;
A68_VC  TYFBSIM;  /* != */
A68_31  VYFBSIM_generator;   /* proc value of non-global proc */
A68_VC  AZFBSIM;  /* avoid structure result */
A68_VC  BZFBSIM;  /* OPERATORS - assign op */
A68_VC * CZFBSIM;  /* YIELD */
A68_VC  DZFBSIM;  /* != */
A68_31  FZFBSIM_generator;   /* proc value of non-global proc */
A68_VC  KZFBSIM;  /* avoid structure result */
A68_VC  LZFBSIM;  /* OPERATORS - assign op */
A68_VC * MZFBSIM;  /* YIELD */
A68_149 * NZFBSIM;  /* YIELD */
A68_149 ** OZFBSIM;  /* YIELD */
A68_175 * PZFBSIM;  /* clause result */
A_PROC_ENTRY(new);
 /* line 324: */
 /* line 326: */
{ 
OYFBSIM_result = NZEBSIM_nilmonitorlist;
 /* line 327: */
PYFBSIM_scan = List;
 /* line 328: */
QYFBSIM_last = (&OYFBSIM_result);
 /* line 329: */
for ( ;; )
{ 
 /* line 330: */
if ( !((PYFBSIM_scan!=NZEBSIM_nilmonitorlist)) ) break;
RYFBSIM = A_HEAP(A68_175 ) ;
(*RYFBSIM) = (*PYFBSIM_scan) ;
SYFBSIM_new = RYFBSIM;
 /* line 331: */
 /* line 332: */
TYFBSIM = (*(&((&(SYFBSIM_new->Monitor))->Testvalues))) ;
if ( ! A_VSTRUCTCOMP(TYFBSIM,MZEBSIM_novalue) )
{ 
 /* line 333: */
A_CLOSURE( VYFBSIM_generator, WYFBSIM_generator, XYFBSIM_generator );
(( XYFBSIM_generator * ) ( VYFBSIM_generator.nonlocals )) -> SYFBSIM_new = SYFBSIM_new;
 /* line 335: */
A_CALLPROC(VYFBSIM_generator,(A68_FALSE, &AZFBSIM),(A68_FALSE, &AZFBSIM,(VYFBSIM_generator).nonlocals));
BZFBSIM = (*(&((&(SYFBSIM_new->Monitor))->Testvalues))) ;
A_VASSIGN2(BZFBSIM,AZFBSIM,A68_CHAR ) ;
CZFBSIM = (&((&(SYFBSIM_new->Monitor))->Testvalues)) ;
(*CZFBSIM) = AZFBSIM;
} 
 /* line 336: */
 /* line 337: */
DZFBSIM = (*(&((&(SYFBSIM_new->Monitor))->Lastvalues))) ;
if ( ! A_VSTRUCTCOMP(DZFBSIM,MZEBSIM_novalue) )
{ 
 /* line 338: */
A_CLOSURE( FZFBSIM_generator, GZFBSIM_generator, HZFBSIM_generator );
(( HZFBSIM_generator * ) ( FZFBSIM_generator.nonlocals )) -> SYFBSIM_new = SYFBSIM_new;
 /* line 340: */
A_CALLPROC(FZFBSIM_generator,(A68_FALSE, &KZFBSIM),(A68_FALSE, &KZFBSIM,(FZFBSIM_generator).nonlocals));
LZFBSIM = (*(&((&(SYFBSIM_new->Monitor))->Lastvalues))) ;
A_VASSIGN2(LZFBSIM,KZFBSIM,A68_CHAR ) ;
MZFBSIM = (&((&(SYFBSIM_new->Monitor))->Lastvalues)) ;
(*MZFBSIM) = KZFBSIM;
} 
 /* line 341: */
 /* line 342: */
if ( ((*(&((&(SYFBSIM_new->Monitor))->Decoded)))!=(A68_149 *)A68_NIL) )
{ 
 /* line 344: */
NZFBSIM = A_HEAP(A68_149 ) ;
(*NZFBSIM) = (*(*(&((&(SYFBSIM_new->Monitor))->Decoded)))) ;
OZFBSIM = (&((&(SYFBSIM_new->Monitor))->Decoded)) ;
(*OZFBSIM) = NZFBSIM;
} 
 /* line 345: */
(*QYFBSIM_last) = SYFBSIM_new;
 /* line 346: */
QYFBSIM_last = (&(SYFBSIM_new->Rest));
 /* line 347: */
 /* line 348: */
PYFBSIM_scan = (*(&(PYFBSIM_scan->Rest)));
}
 /* line 349: */
 /* line 350: */
PZFBSIM = OYFBSIM_result;
} 
A_PROC_EXIT(new);
return( PZFBSIM );
} 
#undef NL

A68_VOID  RZFBSIM_clear(A68_175 * List)
{ 
A68_175 * SZFBSIM_scan;
A68_VC * TZFBSIM;  /* YIELD */
A68_149 ** UZFBSIM;  /* YIELD */
A_PROC_ENTRY(clear);
 /* line 356: */
 /* line 357: */
{ 
SZFBSIM_scan = List;
 /* line 358: */
for ( ;; )
{ 
 /* line 360: */
if ( !((SZFBSIM_scan!=NZEBSIM_nilmonitorlist)) ) break;
 /* line 361: */
if ( ((*(&((&(SZFBSIM_scan->Monitor))->Flagaddress)))!=(-1)) )
{ 
 /* line 362: */
OCNASIM_cgpokeint(1, (*(&((&(SZFBSIM_scan->Monitor))->Flagaddress))));
} 
 /* line 363: */
TZFBSIM = (&((&(SZFBSIM_scan->Monitor))->Lastvalues)) ;
(*TZFBSIM) = OSFBSIM_emptyvalue;
 /* line 364: */
UZFBSIM = (&((&(SZFBSIM_scan->Monitor))->Decoded)) ;
(*UZFBSIM) = (A68_149 *)A68_NIL;
 /* line 365: */
 /* line 366: */
SZFBSIM_scan = (*(&(SZFBSIM_scan->Rest)));
}
 /* line 367: */
} 
A_PROC_EXIT(clear);
return;
} 
#undef NL

A_STATIC A68_155 * WZFBSIM_flattensignalvalue(A68_149  V)
{ 
A68_284  FAGBSIM_flattenquerysignalvalue;   /* proc value of non-global proc */
A68_149  RAGBSIM;  /* united object - for case conformity */
A68_150 * SAGBSIM_q;
A68_155 * TAGBSIM;  /* clause result */
A68_155 * UAGBSIM_s;
A68_155 * VAGBSIM_ans;
A68_155 * WAGBSIM_ptr;
A68_155  XAGBSIM;  /* collateral clause result */
A68_155 * YAGBSIM;  /* YIELD */
A_PROC_ENTRY(flattensignalvalue);
 /* line 379: */
 /* line 381: */
{ 
 /* line 390: */
A_CLOSURE( FAGBSIM_flattenquerysignalvalue, GAGBSIM_flattenquerysignalvalue, HAGBSIM_flattenquerysignalvalue );
 /* line 404: */
 /* line 405: */
RAGBSIM = V ;
switch ( RAGBSIM.mode )
{ 
case 1: /* REF STRUCT(MODE160)  */
SAGBSIM_q = (RAGBSIM.data.mode1);
 /* line 406: */
TAGBSIM = A_CALLPROC(FAGBSIM_flattenquerysignalvalue,((*SAGBSIM_q)),((*SAGBSIM_q),(FAGBSIM_flattenquerysignalvalue).nonlocals));
break;
case 6: /* REF STRUCT(MODE149,REF MODE155)  */
UAGBSIM_s = (RAGBSIM.data.mode6);
 /* line 407: */
 /* line 408: */
{ 
VAGBSIM_ans = DTAASIM_nilsvst;
 /* line 409: */
WAGBSIM_ptr = UAGBSIM_s;
 /* line 410: */
for ( ;; )
{ 
 /* line 411: */
if ( !((WAGBSIM_ptr!=DTAASIM_nilsvst)) ) break;
VAGBSIM_ans = AAGBSIM_(VAGBSIM_ans, WZFBSIM_flattensignalvalue((*(&(WAGBSIM_ptr->Head)))));
 /* line 412: */
 /* line 413: */
WAGBSIM_ptr = (*(&(WAGBSIM_ptr->Tail)));
}
 /* line 414: */
 /* line 415: */
 /* line 416: */
TAGBSIM = VAGBSIM_ans;
} 
break;
default: 
XAGBSIM.Head = V;
 /* line 417: */
XAGBSIM.Tail = DTAASIM_nilsvst;
 /* line 418: */
YAGBSIM = A_HEAP(A68_155 ) ;
(*YAGBSIM) = XAGBSIM ;
TAGBSIM = YAGBSIM;
break;
} 
} 
A_PROC_EXIT(flattensignalvalue);
return( TAGBSIM );
} 
#undef NL

A_STATIC A68_VOID  HBGBSIM_pttimetabulatedscaled(A68_INT  Activetime, A68_INT  Scaletime, A68_INT  Timewidth)
{ 
A68_VC  IBGBSIM;  /* avoid structure result */
A68_INT  JBGBSIM_scaletimefieldsize;
A68_287  KBGBSIM;  /* collateral clause result */
A68_VC  LBGBSIM;  /* avoid structure result */
A68_64  MBGBSIM;  /* avoid structure result */
A68_58  NBGBSIM;  /* OPERATORS - mode -> union mode */
A68_58  QBGBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  RBGBSIM;  /* YIELD */
A68_INT  SBGBSIM;  /* ADICOPS - MOD */
A68_VC  TBGBSIM;  /* avoid structure result */
A68_63  UBGBSIM;  /* avoid structure result */
A68_58  VBGBSIM;  /* OPERATORS - mode -> union mode */
A68_88  WBGBSIM;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(pttimetabulatedscaled);
 /* line 446: */
 /* line 447: */
{ 
FCAAOSI_intchars( Scaletime, &IBGBSIM );
JBGBSIM_scaletimefieldsize = IBGBSIM.upb;
 /* line 449: */
 /* line 450: */
 /* line 451: */
 /* line 452: */
FCAAOSI_intchars( (Activetime/Scaletime), &LBGBSIM );
JYAAOSL_justify( LBGBSIM, ((Timewidth-JBGBSIM_scaletimefieldsize)-3), &MBGBSIM );
KBGBSIM.data[0] = A_UNITE(NBGBSIM,mode15,15,MBGBSIM);
 /* line 453: */
RBGBSIM = PBGBSIM ;
KBGBSIM.data[1] = A_UNITE(QBGBSIM,mode7,7,RBGBSIM);
 /* line 455: */
 /* line 456: */
 /* line 457: */
FCAAOSI_intchars( A_MOD(Activetime,Scaletime,SBGBSIM), &TBGBSIM );
EYAAOSL_width( TBGBSIM, JBGBSIM_scaletimefieldsize, &UBGBSIM );
KBGBSIM.data[2] = A_UNITE(VBGBSIM,mode14,14,UBGBSIM);
 /* line 458: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(WBGBSIM,KBGBSIM,3,A68_58 ));
} 
A_PROC_EXIT(pttimetabulatedscaled);
return;
} 
#undef NL

A_STATIC A68_VOID  YBGBSIM_pttimetabulated(A68_INT  Atime)
{ 
A68_VC  ZBGBSIM;  /* avoid structure result */
A68_64  ACGBSIM;  /* avoid structure result */
A68_58  BCGBSIM;  /* OPERATORS - mode -> union mode */
A68_88  CCGBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(pttimetabulated);
 /* line 469: */
 /* line 471: */
if ( (YOAAOSL_charnumber(LEAAOST_out)==1) )
{ 
 /* line 472: */
if ( (EQAASIM_scaletime>1) )
{ 
 /* line 473: */
 /* line 474: */
HBGBSIM_pttimetabulatedscaled(Atime, EQAASIM_scaletime, CBGBSIM_timewidth);
} 
else
{ 
 /* line 475: */
FCAAOSI_intchars( Atime, &ZBGBSIM );
JYAAOSL_justify( ZBGBSIM, CBGBSIM_timewidth, &ACGBSIM );
GFBAOSL_put(LEAAOST_out, A_HVEC(CCGBSIM,A_UNITE(BCGBSIM,mode15,15,ACGBSIM),A68_58 ));
} 
 /* line 477: */
QSFBSIM_printedtime = Atime;
 /* line 478: */
SSFBSIM_printedtimemode = ZPAASIM_timemode;
 /* line 479: */
 /* line 481: */
RSFBSIM_printedtimestyle = VSFBSIM_tabulated;
} 
A_PROC_EXIT(pttimetabulated);
return;
} 
#undef NL

A_STATIC A68_VOID  FCGBSIM_startlayout(void)
{ 
A_PROC_ENTRY(startlayout);
{ 
DCGBSIM_pendingnewlines = (-1);
 /* line 508: */
 /* line 509: */
ECGBSIM_firstlayoutmonitor = XSFBSIM_testpoints;
} 
A_PROC_EXIT(startlayout);
return;
} 
#undef NL

A_STATIC A68_VOID  HCGBSIM_layout(A68_175 * Ml)
{ 
A68_32  ICGBSIM_columns;
A68_INT  JCGBSIM_i;
A68_INT  KCGBSIM;  /* to part of loop */
A_PROC_ENTRY(layout);
 /* line 518: */
 /* line 519: */
if ( (TSFBSIM_printstyle==VSFBSIM_tabulated) )
{ 
ICGBSIM_columns = (*(&((&(Ml->Monitor))->Columns)));
 /* line 520: */
KCGBSIM = ICGBSIM_columns.upb;
for ( JCGBSIM_i = 1;
JCGBSIM_i <= KCGBSIM;
JCGBSIM_i += 1 )
{ 
 /* line 521: */
 /* line 523: */
if ( ((*(&A_VINDEX(ICGBSIM_columns,JCGBSIM_i)))<=DBGBSIM_firstcolumn) )
{ 
 /* line 524: */
 /* line 525: */
DCGBSIM_pendingnewlines+=1;
} 
}
 /* line 526: */
} 
A_PROC_EXIT(layout);
return;
} 
#undef NL

A_STATIC A68_VOID  MCGBSIM_dolayout(A68_175 * Ml)
{ 
A68_175 * NCGBSIM_currmon;
A68_BOOL  OCGBSIM;  /* optbool result */
A68_32  PCGBSIM;  /* OPERATORS - simple index */
A68_INT  QCGBSIM;  /* YIELD */
A68_INT  RCGBSIM_padding;
A68_BOOL  SCGBSIM;  /* optbool result */
A68_32  TCGBSIM;  /* OPERATORS - simple index */
A68_INT  UCGBSIM;  /* YIELD */
A68_288  VCGBSIM;  /* collateral clause result */
A68_58  WCGBSIM;  /* OPERATORS - mode -> union mode */
A68_40  XCGBSIM;  /* procedure value */
A68_VC  YCGBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_58  ZCGBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  ADGBSIM;  /* YIELD */
A68_88  BDGBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  CDGBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_58  DDGBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  EDGBSIM;  /* YIELD */
A68_88  FDGBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_175 * GDGBSIM;  /* clause result */
A68_INT  HDGBSIM;  /* to part of loop */
A68_INT  IDGBSIM;  /* loop control */
A68_INT  JDGBSIM_padding;
A68_58  KDGBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  LDGBSIM;  /* YIELD */
A68_88  MDGBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(dolayout);
 /* line 532: */
 /* line 533: */
{ 
 /* line 534: */
if ( (ZAGBSIM_monitoringseparator!=' ') )
{ 
NCGBSIM_currmon = ECGBSIM_firstlayoutmonitor;
 /* line 535: */
for ( ;; )
{ 
OCGBSIM = (NCGBSIM_currmon!=NZEBSIM_nilmonitorlist);
if ( OCGBSIM )
{ /* line 536: */
OCGBSIM = (NCGBSIM_currmon!=Ml);
}
 /* line 537: */
if ( !(OCGBSIM) ) break;
PCGBSIM = (*(&((&(NCGBSIM_currmon->Monitor))->Columns))) ;
QCGBSIM = 1 ;
RCGBSIM_padding = ((*(&A_VINDEX(PCGBSIM,QCGBSIM)))-YOAAOSL_charnumber(LEAAOST_out));
 /* line 538: */
SCGBSIM = (RCGBSIM_padding<1);
if ( SCGBSIM )
{TCGBSIM = (*(&((&(NCGBSIM_currmon->Monitor))->Columns))) ;
UCGBSIM = 1 ;
SCGBSIM = ((*(&A_VINDEX(TCGBSIM,UCGBSIM)))<=DBGBSIM_firstcolumn);
}
 /* line 540: */
if ( SCGBSIM )
{ 
XCGBSIM.fn.fn_global = LRAAOSL_newline;
XCGBSIM.nonlocals = A68_NIL;
VCGBSIM.data[0] = A_UNITE(WCGBSIM,mode12,12,XCGBSIM);
ADGBSIM = A_VC_PLUS(A_C_TIMES(' ',(DBGBSIM_firstcolumn-2)),A_HVEC(YCGBSIM,ZAGBSIM_monitoringseparator,A68_CHAR )) ;
VCGBSIM.data[1] = A_UNITE(ZCGBSIM,mode7,7,ADGBSIM);
 /* line 541: */
 /* line 542: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(BDGBSIM,VCGBSIM,2,A68_58 ));
} 
else
{ 
 /* line 543: */
EDGBSIM = A_VC_PLUS(A_C_TIMES(' ',(RCGBSIM_padding-1)),A_HVEC(CDGBSIM,ZAGBSIM_monitoringseparator,A68_CHAR )) ;
GFBAOSL_put(LEAAOST_out, A_HVEC(FDGBSIM,A_UNITE(DDGBSIM,mode7,7,EDGBSIM),A68_58 ));
} 
 /* line 544: */
 /* line 545: */
NCGBSIM_currmon = (*(&(NCGBSIM_currmon->Rest)));
}
 /* line 546: */
if ( (Ml==NZEBSIM_nilmonitorlist) )
{ 
GDGBSIM = Ml;
} 
else
{ 
 /* line 547: */
GDGBSIM = (*(&(Ml->Rest)));
} 
 /* line 548: */
ECGBSIM_firstlayoutmonitor = GDGBSIM;
} 
else
{ 
HDGBSIM = DCGBSIM_pendingnewlines;
for ( IDGBSIM = 1;
IDGBSIM <= HDGBSIM;
IDGBSIM += 1 )
{ 
LRAAOSL_newline(LEAAOST_out);
}
 /* line 549: */
 /* line 550: */
if ( (DCGBSIM_pendingnewlines>=0) )
{ 
JDGBSIM_padding = (DBGBSIM_firstcolumn-YOAAOSL_charnumber(LEAAOST_out));
 /* line 551: */
 /* line 552: */
 /* line 553: */
LDGBSIM = A_C_TIMES(' ',JDGBSIM_padding) ;
GFBAOSL_put(LEAAOST_out, A_HVEC(MDGBSIM,A_UNITE(KDGBSIM,mode7,7,LDGBSIM),A68_58 ));
} 
} 
 /* line 554: */
 /* line 555: */
DCGBSIM_pendingnewlines = 0;
} 
A_PROC_EXIT(dolayout);
return;
} 
#undef NL

A_STATIC A68_VOID  QDGBSIM_printtabulated(A68_INT  Atime, A68_175 * Ml, A68_149 * Value)
{ 
A68_147 * RDGBSIM_m;
A68_155 * SDGBSIM;  /* clause result */
A68_155 * TDGBSIM_ptr;
A68_CHAR  UDGBSIM_sep;
A68_INT  VDGBSIM_i;
A68_INT  WDGBSIM;  /* to part of loop */
A68_32  XDGBSIM;  /* OPERATORS - simple index */
A68_INT  YDGBSIM_padding;
A68_BOOL  ZDGBSIM;  /* optbool result */
A68_32  AEGBSIM;  /* OPERATORS - simple index */
A68_287  BEGBSIM;  /* collateral clause result */
A68_58  CEGBSIM;  /* OPERATORS - mode -> union mode */
A68_40  DEGBSIM;  /* procedure value */
A68_68  EEGBSIM;  /* avoid structure result */
A68_58  FEGBSIM;  /* OPERATORS - mode -> union mode */
A68_58  GEGBSIM;  /* OPERATORS - mode -> union mode */
A68_88  HEGBSIM;  /* OPERATORS - istruct -> vector */
A68_288  IEGBSIM;  /* collateral clause result */
A68_68  JEGBSIM;  /* avoid structure result */
A68_58  KEGBSIM;  /* OPERATORS - mode -> union mode */
A68_58  LEGBSIM;  /* OPERATORS - mode -> union mode */
A68_88  MEGBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  NEGBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_290  QEGBSIM_buff;
A68_VC  REGBSIM_display;
A68_34  SEGBSIM;  /* collateral clause result */
A68_VC  TEGBSIM;  /* OPERATORS - istruct -> vector */
A68_36  UEGBSIM;  /* procedure value */
A68_37  VEGBSIM;  /* procedure value */
A68_34  WEGBSIM_ch;
A68_36  YEGBSIM_putbuffer;   /* proc value of non-global proc */
A68_jmp_buf OEGBSIM_restart;
A68_36 * KFGBSIM;  /* YIELD */
A68_VC  LFGBSIM;  /* OPERATORS - trim index */
A68_VC  MFGBSIM;  /* OPERATORS - trim index */
A68_VC  NFGBSIM;  /* OPERATORS - trim index */
if ( sigsetjmp( OEGBSIM_restart.label,1) ) goto PEGBSIM_restart;
A_PROC_ENTRY(printtabulated);
 /* line 563: */
 /* line 564: */
{ 
YBGBSIM_pttimetabulated(Atime);
 /* line 565: */
MCGBSIM_dolayout(Ml);
 /* line 566: */
RDGBSIM_m = (&(Ml->Monitor));
 /* line 567: */
 /* line 568: */
 /* line 569: */
if ( (Value==(A68_149 *)A68_NIL) )
{ 
SDGBSIM = (A68_155 *)A68_NIL;
} 
else
{ 
 /* line 570: */
SDGBSIM = WZFBSIM_flattensignalvalue((*Value));
} 
TDGBSIM_ptr = SDGBSIM;
 /* line 571: */
UDGBSIM_sep = ZAGBSIM_monitoringseparator;
 /* line 572: */
WDGBSIM = (*(&(RDGBSIM_m->Columns))).upb;
for ( VDGBSIM_i = 1;
VDGBSIM_i <= WDGBSIM;
VDGBSIM_i += 1 )
{ 
 /* line 573: */
XDGBSIM = (*(&(RDGBSIM_m->Columns))) ;
YDGBSIM_padding = ((*(&A_VINDEX(XDGBSIM,VDGBSIM_i)))-YOAAOSL_charnumber(LEAAOST_out));
 /* line 574: */
ZDGBSIM = (YDGBSIM_padding<1);
if ( ZDGBSIM )
{AEGBSIM = (*(&(RDGBSIM_m->Columns))) ;
ZDGBSIM = ((*(&A_VINDEX(AEGBSIM,VDGBSIM_i)))<=DBGBSIM_firstcolumn);
}
 /* line 576: */
if ( ZDGBSIM )
{ 
DEGBSIM.fn.fn_global = LRAAOSL_newline;
DEGBSIM.nonlocals = A68_NIL;
BEGBSIM.data[0] = A_UNITE(CEGBSIM,mode12,12,DEGBSIM);
CZAAOSL_spaces( (DBGBSIM_firstcolumn-2), &EEGBSIM );
BEGBSIM.data[1] = A_UNITE(FEGBSIM,mode19,19,EEGBSIM);
BEGBSIM.data[2] = A_UNITE(GEGBSIM,mode6,6,UDGBSIM_sep);
 /* line 577: */
 /* line 578: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(HEGBSIM,BEGBSIM,3,A68_58 ));
} 
else
{ 
CZAAOSL_spaces( (YDGBSIM_padding-1), &JEGBSIM );
IEGBSIM.data[0] = A_UNITE(KEGBSIM,mode19,19,JEGBSIM);
IEGBSIM.data[1] = A_UNITE(LEGBSIM,mode6,6,UDGBSIM_sep);
 /* line 579: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(MEGBSIM,IEGBSIM,2,A68_58 ));
} 
 /* line 580: */
UDGBSIM_sep = ' ';
 /* line 581: */
 /* line 582: */
if ( (Value==(A68_149 *)A68_NIL) )
{ 
 /* line 583: */
 /* line 584: */
GABAOSL_putstr(LEAAOST_out, A_HVEC(NEGBSIM,'-',A68_CHAR ));
} 
else
{ 
 /* line 585: */
 /* line 586: */
SEGBSIM.Charnumber = 1;
SEGBSIM.Linenumber = 0;
SEGBSIM.Indent = 0;
SEGBSIM.Width = 500;
SEGBSIM.Sizeincr = 500;
SEGBSIM.Status = DPBAOSI_io_ok;
SEGBSIM.Buffer = A_ISVEC(TEGBSIM,(&QEGBSIM_buff),1025,A68_CHAR );
SEGBSIM.Buffered = A68_TRUE;
SEGBSIM.Separate = A68_FALSE;
 /* line 587: */
SEGBSIM.Input = A68_FALSE;
UEGBSIM.fn.fn_global = PPAAOSL_nullputbuffer;
UEGBSIM.nonlocals = A68_NIL;
SEGBSIM.Putbuffer = UEGBSIM;
VEGBSIM.fn.fn_global = SPAAOSL_nullgetbuffer;
VEGBSIM.nonlocals = A68_NIL;
SEGBSIM.Getbuffer = VEGBSIM;
WEGBSIM_ch = SEGBSIM;
 /* line 589: */
A_CLOSURE( YEGBSIM_putbuffer, ZEGBSIM_putbuffer, AFGBSIM_putbuffer );
(( AFGBSIM_putbuffer * ) ( YEGBSIM_putbuffer.nonlocals )) -> WEGBSIM_ch = (&WEGBSIM_ch);
(( AFGBSIM_putbuffer * ) ( YEGBSIM_putbuffer.nonlocals )) -> OEGBSIM_restart = OEGBSIM_restart;
 /* line 596: */
KFGBSIM = (&((&WEGBSIM_ch)->Putbuffer)) ;
(*KFGBSIM) = YEGBSIM_putbuffer;
 /* line 598: */
PEGBSIM_restart:
 /* line 599: */
LHEBSIM_printsignalvalue((*(&(TDGBSIM_ptr->Head))), UFEBSIM_nopunctuation, (&WEGBSIM_ch));
 /* line 601: */
LFGBSIM = (*(&((&WEGBSIM_ch)->Buffer))) ;
REGBSIM_display = A_VTRIM(MFGBSIM,(LFGBSIM),A_VTSCRIPT(&(MFGBSIM.upb),(LFGBSIM).upb,1,((*(&((&WEGBSIM_ch)->Charnumber)))-1)));
 /* line 603: */
 /* line 604: */
if ( (((DBGBSIM_firstcolumn+REGBSIM_display.upb)-1)>ABGBSIM_pagewidth()) )
{ 
GABAOSL_putstr(LEAAOST_out, A_VTRIM(NFGBSIM,(REGBSIM_display),A_VTSCRIPT(&(NFGBSIM.upb),(REGBSIM_display).upb,1,((ABGBSIM_pagewidth()-DBGBSIM_firstcolumn)-1))));
 /* line 605: */
 /* line 606: */
GABAOSL_putstr(LEAAOST_out, PFGBSIM);
} 
else
{ 
 /* line 607: */
GABAOSL_putstr(LEAAOST_out, REGBSIM_display);
} 
 /* line 609: */
 /* line 610: */
 /* line 611: */
TDGBSIM_ptr = (*(&(TDGBSIM_ptr->Tail)));
} 
}
 /* line 612: */
} 
A_PROC_EXIT(printtabulated);
return;
} 
#undef NL

A_STATIC A68_INT  SFGBSIM_idend(A68_VC  Id, A68_INT * Pos)
{ 
A68_INT  TFGBSIM_idwidth;
A68_INT  UFGBSIM;  /* clause result */
A_PROC_ENTRY(idend);
 /* line 620: */
 /* line 621: */
{ 
TFGBSIM_idwidth = Id.upb;
 /* line 622: */
 /* line 624: */
if ( (((TFGBSIM_idwidth+(*Pos))-1)>ABGBSIM_pagewidth()) )
{ 
 /* line 625: */
(*Pos) = DBGBSIM_firstcolumn;
} 
 /* line 626: */
 /* line 627: */
UFGBSIM = (((*Pos)+TFGBSIM_idwidth)+2);
} 
A_PROC_EXIT(idend);
return( UFGBSIM );
} 
#undef NL

A_STATIC A68_VOID  XFGBSIM_setsingle(A68_147 * Mon, A68_INT * Pos)
{ 
A68_32  YFGBSIM;  /* OPERATORS - nil -> mode */
A68_32  ZFGBSIM;  /* == */
A68_32  AGGBSIM;  /* == */
A68_169  BGGBSIM;  /* united object - for case conformity */
A68_171  CGGBSIM_l;
A68_171  DGGBSIM;  /* clause result */
A68_171  EGGBSIM_locationofmon;
A68_160  FGGBSIM_type;
A68_INT  GGGBSIM_upb;
A68_33  IGGBSIM_generator;   /* proc value of non-global proc */
A68_32  NGGBSIM;  /* avoid structure result */
A68_32 * OGGBSIM;  /* YIELD */
A68_166 * PGGBSIM_ptr;
A68_INT  QGGBSIM_i;
A68_INT  RGGBSIM;  /* to part of loop */
A68_32  SGGBSIM;  /* OPERATORS - simple index */
A68_INT * TGGBSIM;  /* YIELD */
A68_INT  UGGBSIM_upb;
A68_32  VGGBSIM;  /* OPERATORS - nil -> mode */
A68_32  WGGBSIM;  /* == */
A68_32  XGGBSIM;  /* == */
A68_33  ZGGBSIM_generator;   /* proc value of non-global proc */
A68_32  EHGBSIM;  /* avoid structure result */
A68_32 * FHGBSIM;  /* YIELD */
A68_INT  GHGBSIM_min;
A68_INT  HHGBSIM_i;
A68_INT  IHGBSIM;  /* to part of loop */
A68_32  JHGBSIM;  /* OPERATORS - simple index */
A68_INT * KHGBSIM;  /* YIELD */
A68_32  LHGBSIM;  /* OPERATORS - simple index */
A68_INT  MHGBSIM_width;
A68_BOOL  NHGBSIM;  /* optbool result */
A68_32  OHGBSIM;  /* OPERATORS - simple index */
A68_INT  PHGBSIM;  /* YIELD */
A68_32  QHGBSIM;  /* OPERATORS - simple index */
A68_INT  RHGBSIM;  /* YIELD */
A68_INT  SHGBSIM_distance;
A68_INT  THGBSIM_j;
A68_INT  UHGBSIM;  /* to part of loop */
A68_32  VHGBSIM;  /* OPERATORS - simple index */
A68_INT * WHGBSIM;  /* YIELD */
A68_32  XHGBSIM;  /* OPERATORS - simple index */
A68_INT * YHGBSIM;  /* YIELD */
A_PROC_ENTRY(setsingle);
 /* line 634: */
 /* line 637: */
{ 
 /* line 638: */
ZFGBSIM = (*(&(Mon->Sizes))) ;
AGGBSIM = A_VVAC(YFGBSIM) ;
if ( A_VSTRUCTCOMP(ZFGBSIM,AGGBSIM) )
{ 
 /* line 639: */
BGGBSIM = (*(&((&(Mon->Location))->Node))) ;
switch ( BGGBSIM.mode )
{ 
case 2: /* STRUCT(REF MODE172,INT)  */
CGGBSIM_l = (BGGBSIM.data.mode2);
DGGBSIM = CGGBSIM_l;
break;
default: 
A_IMP_SKIP ;
break;
} 
EGGBSIM_locationofmon = DGGBSIM;
 /* line 640: */
FGGBSIM_type = (*(&(EGGBSIM_locationofmon.Wire->Type)));
 /* line 641: */
GGGBSIM_upb = VYCBSIM_signalwidth(FGGBSIM_type);
 /* line 643: */
A_CLOSURE( IGGBSIM_generator, JGGBSIM_generator, KGGBSIM_generator );
(( KGGBSIM_generator * ) ( IGGBSIM_generator.nonlocals )) -> GGGBSIM_upb = GGGBSIM_upb;
A_CALLPROC(IGGBSIM_generator,(A68_FALSE, &NGGBSIM),(A68_FALSE, &NGGBSIM,(IGGBSIM_generator).nonlocals));
OGGBSIM = (&(Mon->Sizes)) ;
(*OGGBSIM) = NGGBSIM;
 /* line 644: */
PGGBSIM_ptr = PZCBSIM_trimsignal(FGGBSIM_type, 1, GGGBSIM_upb);
 /* line 646: */
RGGBSIM = GGGBSIM_upb;
for ( QGGBSIM_i = 1;
QGGBSIM_i <= RGGBSIM;
QGGBSIM_i += 1 )
{ 
 /* line 647: */
SGGBSIM = (*(&(Mon->Sizes))) ;
TGGBSIM = (&A_VINDEX(SGGBSIM,QGGBSIM_i)) ;
(*TGGBSIM) = KJEBSIM_printwidth((*(&(PGGBSIM_ptr->T))), VFEBSIM_ampersands);
 /* line 653: */
 /* line 654: */
PGGBSIM_ptr = (*(&(PGGBSIM_ptr->Rest)));
}
 /* line 655: */
} 
 /* line 656: */
UGGBSIM_upb = (*(&(Mon->Sizes))).upb;
 /* line 659: */
 /* line 660: */
WGGBSIM = (*(&(Mon->Columns))) ;
XGGBSIM = A_VVAC(VGGBSIM) ;
if ( A_VSTRUCTCOMP(WGGBSIM,XGGBSIM) )
{ 
A_CLOSURE( ZGGBSIM_generator, AHGBSIM_generator, BHGBSIM_generator );
(( BHGBSIM_generator * ) ( ZGGBSIM_generator.nonlocals )) -> UGGBSIM_upb = UGGBSIM_upb;
A_CALLPROC(ZGGBSIM_generator,(A68_FALSE, &EHGBSIM),(A68_FALSE, &EHGBSIM,(ZGGBSIM_generator).nonlocals));
FHGBSIM = (&(Mon->Columns)) ;
(*FHGBSIM) = EHGBSIM;
} 
 /* line 664: */
GHGBSIM_min = SFGBSIM_idend((*(&(Mon->Id))), Pos);
 /* line 665: */
IHGBSIM = UGGBSIM_upb;
for ( HHGBSIM_i = 1;
HHGBSIM_i <= IHGBSIM;
HHGBSIM_i += 1 )
{ 
 /* line 666: */
JHGBSIM = (*(&(Mon->Columns))) ;
KHGBSIM = (&A_VINDEX(JHGBSIM,HHGBSIM_i)) ;
(*KHGBSIM) = (*Pos);
 /* line 667: */
LHGBSIM = (*(&(Mon->Sizes))) ;
MHGBSIM_width = ((*(&A_VINDEX(LHGBSIM,HHGBSIM_i)))+1);
 /* line 668: */
(*Pos)+=MHGBSIM_width;
 /* line 669: */
NHGBSIM = ((*Pos)>ABGBSIM_pagewidth());
if ( NHGBSIM )
{ /* line 670: */
OHGBSIM = (*(&(Mon->Columns))) ;
PHGBSIM = 1 ;
NHGBSIM = ((*(&A_VINDEX(OHGBSIM,PHGBSIM)))>DBGBSIM_firstcolumn);
}
 /* line 672: */
if ( NHGBSIM )
{ 
QHGBSIM = (*(&(Mon->Columns))) ;
RHGBSIM = 1 ;
SHGBSIM_distance = ((*(&A_VINDEX(QHGBSIM,RHGBSIM)))-DBGBSIM_firstcolumn);
 /* line 673: */
UHGBSIM = HHGBSIM_i;
for ( THGBSIM_j = 1;
THGBSIM_j <= UHGBSIM;
THGBSIM_j += 1 )
{ 
 /* line 674: */
 /* line 675: */
VHGBSIM = (*(&(Mon->Columns))) ;
WHGBSIM = (&A_VINDEX(VHGBSIM,THGBSIM_j)) ;
(*WHGBSIM)-=SHGBSIM_distance;
}
 /* line 676: */
GHGBSIM_min-=SHGBSIM_distance;
 /* line 677: */
 /* line 678: */
(*Pos)-=SHGBSIM_distance;
} 
 /* line 679: */
 /* line 681: */
if ( ((*Pos)>ABGBSIM_pagewidth()) )
{ 
XHGBSIM = (*(&(Mon->Columns))) ;
YHGBSIM = (&A_VINDEX(XHGBSIM,HHGBSIM_i)) ;
(*YHGBSIM) = DBGBSIM_firstcolumn;
 /* line 682: */
(*Pos) = (DBGBSIM_firstcolumn+MHGBSIM_width);
 /* line 683: */
 /* line 684: */
 /* line 685: */
GHGBSIM_min = DBGBSIM_firstcolumn;
} 
}
 /* line 686: */
 /* line 687: */
(*Pos) = MQAASIM_max(((*Pos)+1), GHGBSIM_min);
} 
A_PROC_EXIT(setsingle);
return;
} 
#undef NL

A68_VOID  BIGBSIM_pttimefreeformscaled(A68_INT  Activetime, A68_INT  Scaletime)
{ 
A68_144  FIGBSIM_gcd;   /* proc value of non-global proc */
A68_INT  LIGBSIM;  /* ADICOPS - MOD */
A68_INT  MIGBSIM_remainder;
A68_INT  NIGBSIM_top;
A68_INT  OIGBSIM_bottom;
A68_VC  PIGBSIM;  /* clause result */
A68_VC  QIGBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  RIGBSIM;  /* avoid structure result */
A68_VC  SIGBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  TIGBSIM;  /* avoid structure result */
A68_VC  UIGBSIM_fractionstring;
A68_295  VIGBSIM;  /* collateral clause result */
A68_58  YIGBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  ZIGBSIM;  /* YIELD */
A68_VC  AJGBSIM;  /* avoid structure result */
A68_58  BJGBSIM;  /* OPERATORS - mode -> union mode */
A68_58  CJGBSIM;  /* OPERATORS - mode -> union mode */
A68_CHAR  DJGBSIM;  /* YIELD */
A68_58  EJGBSIM;  /* OPERATORS - mode -> union mode */
A68_58  HJGBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  IJGBSIM;  /* YIELD */
A68_58  JJGBSIM;  /* OPERATORS - mode -> union mode */
A68_40  KJGBSIM;  /* procedure value */
A68_88  LJGBSIM;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(pttimefreeformscaled);
 /* line 698: */
 /* line 700: */
{ 
A_CLOSURE( FIGBSIM_gcd, GIGBSIM_gcd, HIGBSIM_gcd );
(( HIGBSIM_gcd * ) ( FIGBSIM_gcd.nonlocals )) -> FIGBSIM_gcd = FIGBSIM_gcd;
 /* line 713: */
MIGBSIM_remainder = A_MOD(Activetime,Scaletime,LIGBSIM);
 /* line 717: */
NIGBSIM_top = (MIGBSIM_remainder/A_CALLPROC(FIGBSIM_gcd,(MIGBSIM_remainder, Scaletime),(MIGBSIM_remainder, Scaletime,(FIGBSIM_gcd).nonlocals)));
 /* line 718: */
OIGBSIM_bottom = (Scaletime/A_CALLPROC(FIGBSIM_gcd,(MIGBSIM_remainder, Scaletime),(MIGBSIM_remainder, Scaletime,(FIGBSIM_gcd).nonlocals)));
 /* line 722: */
 /* line 724: */
if ( (NIGBSIM_top==0) )
{ 
 /* line 725: */
PIGBSIM = A_HVEC(QIGBSIM,' ',A68_CHAR );
} 
else
{ 
 /* line 726: */
 /* line 727: */
 /* line 728: */
FCAAOSI_intchars( NIGBSIM_top, &RIGBSIM );
FCAAOSI_intchars( OIGBSIM_bottom, &TIGBSIM );
PIGBSIM = A_VC_PLUS(A_VC_PLUS(RIGBSIM,A_HVEC(SIGBSIM,'/',A68_CHAR )),TIGBSIM);
} 
UIGBSIM_fractionstring = PIGBSIM;
 /* line 730: */
 /* line 731: */
ZIGBSIM = XIGBSIM ;
VIGBSIM.data[0] = A_UNITE(YIGBSIM,mode7,7,ZIGBSIM);
 /* line 732: */
FCAAOSI_intchars( (Activetime/Scaletime), &AJGBSIM );
VIGBSIM.data[1] = A_UNITE(BJGBSIM,mode7,7,AJGBSIM);
 /* line 733: */
DJGBSIM = ' ' ;
VIGBSIM.data[2] = A_UNITE(CJGBSIM,mode6,6,DJGBSIM);
 /* line 734: */
VIGBSIM.data[3] = A_UNITE(EJGBSIM,mode7,7,UIGBSIM_fractionstring);
 /* line 735: */
IJGBSIM = GJGBSIM ;
VIGBSIM.data[4] = A_UNITE(HJGBSIM,mode7,7,IJGBSIM);
 /* line 736: */
KJGBSIM.fn.fn_global = LRAAOSL_newline;
KJGBSIM.nonlocals = A68_NIL;
VIGBSIM.data[5] = A_UNITE(JJGBSIM,mode12,12,KJGBSIM);
 /* line 738: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(LJGBSIM,VIGBSIM,6,A68_58 ));
} 
A_PROC_EXIT(pttimefreeformscaled);
return;
} 
#undef NL

A_STATIC A68_VOID  NJGBSIM_pttimefreeform(A68_INT  Atime)
{ 
A68_BOOL  OJGBSIM;  /* optbool result */
A68_297  PJGBSIM;  /* collateral clause result */
A68_58  SJGBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  TJGBSIM;  /* YIELD */
A68_58  UJGBSIM;  /* OPERATORS - mode -> union mode */
A68_58  XJGBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  YJGBSIM;  /* YIELD */
A68_58  ZJGBSIM;  /* OPERATORS - mode -> union mode */
A68_40  AKGBSIM;  /* procedure value */
A68_88  BKGBSIM;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(pttimefreeform);
 /* line 748: */
 /* line 749: */
OJGBSIM = (Atime!=QSFBSIM_printedtime);
if ( ! OJGBSIM )
{ /* line 750: */
OJGBSIM = (ZPAASIM_timemode!=SSFBSIM_printedtimemode);
}
if ( ! OJGBSIM )
{ /* line 751: */
OJGBSIM = (RSFBSIM_printedtimestyle!=USFBSIM_freeform);
}
 /* line 752: */
if ( OJGBSIM )
{ 
if ( (RSFBSIM_printedtimestyle!=USFBSIM_freeform) )
{ 
LRAAOSL_newline(LEAAOST_out);
} 
 /* line 754: */
 /* line 755: */
if ( (EQAASIM_scaletime>1) )
{ 
 /* line 756: */
 /* line 757: */
BIGBSIM_pttimefreeformscaled(Atime, EQAASIM_scaletime);
} 
else
{ 
TJGBSIM = RJGBSIM ;
PJGBSIM.data[0] = A_UNITE(SJGBSIM,mode7,7,TJGBSIM);
PJGBSIM.data[1] = A_UNITE(UJGBSIM,mode1,1,Atime);
YJGBSIM = WJGBSIM ;
PJGBSIM.data[2] = A_UNITE(XJGBSIM,mode7,7,YJGBSIM);
AKGBSIM.fn.fn_global = LRAAOSL_newline;
AKGBSIM.nonlocals = A68_NIL;
PJGBSIM.data[3] = A_UNITE(ZJGBSIM,mode12,12,AKGBSIM);
 /* line 758: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(BKGBSIM,PJGBSIM,4,A68_58 ));
} 
 /* line 760: */
SSFBSIM_printedtimemode = ZPAASIM_timemode;
 /* line 761: */
RSFBSIM_printedtimestyle = USFBSIM_freeform;
 /* line 762: */
 /* line 764: */
QSFBSIM_printedtime = Atime;
} 
A_PROC_EXIT(pttimefreeform);
return;
} 
#undef NL
 /* line 784: */

A68_VOID  KKGBSIM_printfreeform(A68_INT  Atime, A68_147 * M, A68_149 * Value, A68_INT  Form)
{ 
A68_58  NKGBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  OKGBSIM;  /* YIELD */
A68_88  PKGBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_58  SKGBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  TKGBSIM;  /* YIELD */
A68_88  UKGBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_169  ZKGBSIM;  /* united object - for case conformity */
A68_171  ALGBSIM_l;
A68_171  BLGBSIM;  /* clause result */
A68_171  CLGBSIM_locationofm;
A_PROC_ENTRY(printfreeform);
 /* line 785: */
 /* line 786: */
{ 
NJGBSIM_pttimefreeform(Atime);
 /* line 787: */
 /* line 788: */
if ( (YOAAOSL_charnumber(LEAAOST_out)!=1) )
{ 
if ( (Form<0) )
{ 
 /* line 789: */
LRAAOSL_newline(LEAAOST_out);
} 
else
{ 
 /* line 790: */
 /* line 791: */
OKGBSIM = MKGBSIM ;
GFBAOSL_put(LEAAOST_out, A_HVEC(PKGBSIM,A_UNITE(NKGBSIM,mode7,7,OKGBSIM),A68_58 ));
} 
} 
 /* line 792: */
if ( (Form<0) )
{ 
TKGBSIM = RKGBSIM ;
GFBAOSL_put(LEAAOST_out, A_HVEC(UKGBSIM,A_UNITE(SKGBSIM,mode7,7,TKGBSIM),A68_58 ));
} 
 /* line 793: */
GABAOSL_putstr(LEAAOST_out, (*(&(M->Id))));
 /* line 794: */
if ( (A_ABS(Form)==1) )
{ 
GABAOSL_putstr(LEAAOST_out, WKGBSIM);
} 
else
{ 
GABAOSL_putstr(LEAAOST_out, YKGBSIM);
} 
 /* line 795: */
 /* line 796: */
if ( (Value==(A68_149 *)A68_NIL) )
{ 
ZKGBSIM = (*(&((&(M->Location))->Node))) ;
switch ( ZKGBSIM.mode )
{ 
case 2: /* STRUCT(REF MODE172,INT)  */
ALGBSIM_l = (ZKGBSIM.data.mode2);
BLGBSIM = ALGBSIM_l;
break;
default: 
A_IMP_SKIP ;
break;
} 
CLGBSIM_locationofm = BLGBSIM;
 /* line 797: */
 /* line 798: */
 /* line 799: */
HHEBSIM_printunrecordedsignalvalue((*(&(CLGBSIM_locationofm.Wire->Type))), UFEBSIM_nopunctuation, LEAAOST_out);
} 
else
{ 
 /* line 800: */
LHEBSIM_printsignalvalue((*Value), UFEBSIM_nopunctuation, LEAAOST_out);
} 
 /* line 801: */
if ( (Form<0) )
{ 
 /* line 802: */
LRAAOSL_newline(LEAAOST_out);
} 
} 
A_PROC_EXIT(printfreeform);
return;
} 
#undef NL

A68_VOID  DLGBSIM_pttime(void)
{ 
A68_BOOL  ELGBSIM;  /* optbool result */
A_PROC_ENTRY(pttime);
{ 
ELGBSIM = (YPAASIM_activetime!=QSFBSIM_printedtime);
if ( ! ELGBSIM )
{ /* line 820: */
ELGBSIM = (ZPAASIM_timemode!=SSFBSIM_printedtimemode);
}
 /* line 821: */
if ( ELGBSIM )
{ 
 /* line 822: */
if ( (TSFBSIM_printstyle==VSFBSIM_tabulated) )
{ 
YBGBSIM_pttimetabulated(YPAASIM_activetime);
 /* line 823: */
 /* line 824: */
 /* line 825: */
LRAAOSL_newline(LEAAOST_out);
} 
else
{ 
 /* line 826: */
 /* line 827: */
 /* line 828: */
NJGBSIM_pttimefreeform(YPAASIM_activetime);
} 
} 
} 
A_PROC_EXIT(pttime);
return;
} 
#undef NL
 /* line 831: */

A_STATIC A68_VOID  JLGBSIM_printcurrentstyle(A68_INT  Atime, A68_175 * Ml, A68_149 * Value, A68_INT  Form)
{ 
A_PROC_ENTRY(printcurrentstyle);
 /* line 832: */
 /* line 837: */
{ 
 /* line 838: */
if ( (TSFBSIM_printstyle==USFBSIM_freeform) )
{ 
 /* line 839: */
KKGBSIM_printfreeform(Atime, (&(Ml->Monitor)), Value, Form);
} 
else
{ 
if ( (TSFBSIM_printstyle==VSFBSIM_tabulated) )
{ 
 /* line 841: */
 /* line 842: */
QDGBSIM_printtabulated(Atime, Ml, Value);
} 
} 
} 
A_PROC_EXIT(printcurrentstyle);
return;
} 
#undef NL

A_STATIC A68_VOID  LLGBSIM_printheadingscaled(A68_INT  Scaletime)
{ 
A68_58  OLGBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  PLGBSIM;  /* YIELD */
A68_88  QLGBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  RLGBSIM;  /* avoid structure result */
A68_VC  SLGBSIM_scaletimestring;
A68_INT  TLGBSIM_scaletimefieldsize;
A68_288  ULGBSIM;  /* collateral clause result */
A68_58  XLGBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  YLGBSIM;  /* YIELD */
A68_58  ZLGBSIM;  /* OPERATORS - mode -> union mode */
A68_88  AMGBSIM;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(printheadingscaled);
 /* line 853: */
 /* line 854: */
if ( (Scaletime==1) )
{ 
CBGBSIM_timewidth = BBGBSIM_basictimewidth;
 /* line 855: */
DBGBSIM_firstcolumn = (CBGBSIM_timewidth+3);
 /* line 856: */
 /* line 857: */
 /* line 858: */
PLGBSIM = NLGBSIM ;
GFBAOSL_put(LEAAOST_out, A_HVEC(QLGBSIM,A_UNITE(OLGBSIM,mode7,7,PLGBSIM),A68_58 ));
} 
else
{ 
FCAAOSI_intchars( Scaletime, &RLGBSIM );
SLGBSIM_scaletimestring = RLGBSIM;
 /* line 859: */
TLGBSIM_scaletimefieldsize = SLGBSIM_scaletimestring.upb;
 /* line 860: */
CBGBSIM_timewidth = (BBGBSIM_basictimewidth+TLGBSIM_scaletimefieldsize);
 /* line 861: */
DBGBSIM_firstcolumn = (CBGBSIM_timewidth+3);
 /* line 862: */
YLGBSIM = WLGBSIM ;
ULGBSIM.data[0] = A_UNITE(XLGBSIM,mode7,7,YLGBSIM);
ULGBSIM.data[1] = A_UNITE(ZLGBSIM,mode7,7,SLGBSIM_scaletimestring);
 /* line 863: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(AMGBSIM,ULGBSIM,2,A68_58 ));
} 
A_PROC_EXIT(printheadingscaled);
return;
} 
#undef NL

A68_VOID  BMGBSIM_monitorheading(void)
{ 
A68_INT  CMGBSIM_pos;
A68_175 * DMGBSIM_scan;
A68_BOOL  EMGBSIM;  /* optbool result */
A68_BOOL  FMGBSIM;  /* optbool result */
A68_32  GMGBSIM;  /* OPERATORS - simple index */
A68_INT  HMGBSIM;  /* YIELD */
A68_INT  IMGBSIM_padding;
A68_BOOL  JMGBSIM;  /* optbool result */
A68_32  KMGBSIM;  /* OPERATORS - simple index */
A68_INT  LMGBSIM;  /* YIELD */
A68_288  MMGBSIM;  /* collateral clause result */
A68_58  NMGBSIM;  /* OPERATORS - mode -> union mode */
A68_40  OMGBSIM;  /* procedure value */
A68_VC  PMGBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_58  QMGBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  RMGBSIM;  /* YIELD */
A68_88  SMGBSIM;  /* OPERATORS - istruct -> vector */
A68_VC  TMGBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_58  UMGBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  VMGBSIM;  /* YIELD */
A68_88  WMGBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  XMGBSIM_id;
A68_VC  ZMGBSIM;  /* OPERATORS - trim index */
A68_58  BNGBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  CNGBSIM;  /* YIELD */
A68_88  DNGBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_58  ENGBSIM;  /* OPERATORS - mode -> union mode */
A68_88  FNGBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  GNGBSIM_i;
A68_INT  HNGBSIM;  /* to part of loop */
A68_32  INGBSIM;  /* OPERATORS - simple index */
A68_288  JNGBSIM;  /* collateral clause result */
A68_58  KNGBSIM;  /* OPERATORS - mode -> union mode */
A68_40  LNGBSIM;  /* procedure value */
A68_58  MNGBSIM;  /* OPERATORS - mode -> union mode */
A68_VC  NNGBSIM;  /* YIELD */
A68_88  ONGBSIM;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(monitorheading);
 /* line 890: */
if ( (TSFBSIM_printstyle==VSFBSIM_tabulated) )
{ 
LRAAOSL_newline(LEAAOST_out);
 /* line 891: */
LLGBSIM_printheadingscaled(EQAASIM_scaletime);
 /* line 894: */
CMGBSIM_pos = DBGBSIM_firstcolumn;
 /* line 895: */
DMGBSIM_scan = XSFBSIM_testpoints;
 /* line 896: */
for ( ;; )
{ 
 /* line 897: */
if ( !((DMGBSIM_scan!=NZEBSIM_nilmonitorlist)) ) break;
 /* line 898: */
 /* line 899: */
EMGBSIM = ((*(&((&(DMGBSIM_scan->Monitor))->Action)))!=EZEBSIM_stop);
if ( EMGBSIM )
{ /* line 900: */
EMGBSIM = ((*(&((&(DMGBSIM_scan->Monitor))->Action)))!=FZEBSIM_keep);
}
 /* line 901: */
if ( EMGBSIM )
{ 
 /* line 902: */
XFGBSIM_setsingle((&(DMGBSIM_scan->Monitor)), (&CMGBSIM_pos));
} 
 /* line 903: */
 /* line 904: */
DMGBSIM_scan = (*(&(DMGBSIM_scan->Rest)));
}
 /* line 906: */
DMGBSIM_scan = XSFBSIM_testpoints;
 /* line 908: */
for ( ;; )
{ 
 /* line 909: */
if ( !((DMGBSIM_scan!=NZEBSIM_nilmonitorlist)) ) break;
 /* line 910: */
 /* line 911: */
FMGBSIM = ((*(&((&(DMGBSIM_scan->Monitor))->Action)))!=EZEBSIM_stop);
if ( FMGBSIM )
{ /* line 912: */
FMGBSIM = ((*(&((&(DMGBSIM_scan->Monitor))->Action)))!=FZEBSIM_keep);
}
 /* line 913: */
if ( FMGBSIM )
{ 
GMGBSIM = (*(&((&(DMGBSIM_scan->Monitor))->Columns))) ;
HMGBSIM = 1 ;
IMGBSIM_padding = ((*(&A_VINDEX(GMGBSIM,HMGBSIM)))-YOAAOSL_charnumber(LEAAOST_out));
 /* line 914: */
JMGBSIM = (IMGBSIM_padding<1);
if ( JMGBSIM )
{ /* line 915: */
KMGBSIM = (*(&((&(DMGBSIM_scan->Monitor))->Columns))) ;
LMGBSIM = 1 ;
JMGBSIM = ((*(&A_VINDEX(KMGBSIM,LMGBSIM)))<=DBGBSIM_firstcolumn);
}
 /* line 917: */
if ( JMGBSIM )
{ 
OMGBSIM.fn.fn_global = LRAAOSL_newline;
OMGBSIM.nonlocals = A68_NIL;
MMGBSIM.data[0] = A_UNITE(NMGBSIM,mode12,12,OMGBSIM);
RMGBSIM = A_VC_PLUS(A_C_TIMES(' ',(DBGBSIM_firstcolumn-2)),A_HVEC(PMGBSIM,ZAGBSIM_monitoringseparator,A68_CHAR )) ;
MMGBSIM.data[1] = A_UNITE(QMGBSIM,mode7,7,RMGBSIM);
 /* line 918: */
 /* line 919: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(SMGBSIM,MMGBSIM,2,A68_58 ));
} 
else
{ 
 /* line 920: */
VMGBSIM = A_VC_PLUS(A_C_TIMES(' ',(IMGBSIM_padding-1)),A_HVEC(TMGBSIM,ZAGBSIM_monitoringseparator,A68_CHAR )) ;
GFBAOSL_put(LEAAOST_out, A_HVEC(WMGBSIM,A_UNITE(UMGBSIM,mode7,7,VMGBSIM),A68_58 ));
} 
 /* line 921: */
XMGBSIM_id = (*(&((&(DMGBSIM_scan->Monitor))->Id)));
 /* line 922: */
 /* line 923: */
if ( (((DBGBSIM_firstcolumn+XMGBSIM_id.upb)-1)>ABGBSIM_pagewidth()) )
{ 
 /* line 924: */
 /* line 925: */
CNGBSIM = A_VC_PLUS(A_VTRIM(ZMGBSIM,(XMGBSIM_id),A_VTSCRIPT(&(ZMGBSIM.upb),(XMGBSIM_id).upb,1,((ABGBSIM_pagewidth()-DBGBSIM_firstcolumn)-1))),ANGBSIM) ;
GFBAOSL_put(LEAAOST_out, A_HVEC(DNGBSIM,A_UNITE(BNGBSIM,mode7,7,CNGBSIM),A68_58 ));
} 
else
{ 
 /* line 926: */
GFBAOSL_put(LEAAOST_out, A_HVEC(FNGBSIM,A_UNITE(ENGBSIM,mode7,7,XMGBSIM_id),A68_58 ));
} 
 /* line 927: */
HNGBSIM = (*(&((&(DMGBSIM_scan->Monitor))->Columns))).upb;
for ( GNGBSIM_i = 2;
GNGBSIM_i <= HNGBSIM;
GNGBSIM_i += 1 )
{ 
 /* line 928: */
 /* line 930: */
INGBSIM = (*(&((&(DMGBSIM_scan->Monitor))->Columns))) ;
if ( ((*(&A_VINDEX(INGBSIM,GNGBSIM_i)))<=DBGBSIM_firstcolumn) )
{ 
LNGBSIM.fn.fn_global = LRAAOSL_newline;
LNGBSIM.nonlocals = A68_NIL;
JNGBSIM.data[0] = A_UNITE(KNGBSIM,mode12,12,LNGBSIM);
NNGBSIM = A_C_TIMES(' ',(DBGBSIM_firstcolumn-1)) ;
JNGBSIM.data[1] = A_UNITE(MNGBSIM,mode7,7,NNGBSIM);
 /* line 931: */
 /* line 932: */
GFBAOSL_put(LEAAOST_out, A_HISVEC(ONGBSIM,JNGBSIM,2,A68_58 ));
} 
}
 /* line 933: */
} 
 /* line 934: */
 /* line 935: */
DMGBSIM_scan = (*(&(DMGBSIM_scan->Rest)));
}
 /* line 936: */
LRAAOSL_newline(LEAAOST_out);
 /* line 937: */
 /* line 939: */
QSFBSIM_printedtime = (-1);
} 
A_PROC_EXIT(monitorheading);
return;
} 
#undef NL
 /* line 968: */

A_STATIC A68_BOOL  UNGBSIM_domonitor(A68_INT  Atime, A68_175 * Ml, A68_INT  Handle, A68_BOOL  Noepi, A68_36  Flt)
{ 
A68_147 * VNGBSIM_m;
A68_BOOL  WNGBSIM;  /* optbool result */
A68_BOOL  XNGBSIM;  /* optbool result */
A68_INT  YNGBSIM_flag;
A68_BOOL  ZNGBSIM;  /* clause result */
A68_BOOL  AOGBSIM_interesting;
A68_BITS  BOGBSIM;  /* ADICOPS - <= */
A68_BITS  COGBSIM;  /* ADICOPS - <= */
A68_BOOL  DOGBSIM;  /* optbool result */
A68_BOOL  EOGBSIM;  /* clause result */
A68_VC  FOGBSIM_testvalue;
A68_VC  GOGBSIM_lastvalue;
A68_VC  HOGBSIM_value;
A68_BOOL  IOGBSIM;  /* optbool result */
A68_VC * JOGBSIM;  /* YIELD */
A68_31  LOGBSIM_generator;   /* proc value of non-global proc */
A68_VC  QOGBSIM;  /* avoid structure result */
A68_VC * ROGBSIM;  /* YIELD */
A68_VC * SOGBSIM;  /* YIELD */
A68_BOOL  TOGBSIM;  /* optbool result */
A68_BOOL  UOGBSIM_first;
A68_BOOL  VOGBSIM;  /* optbool result */
A68_BOOL  WOGBSIM;  /* optbool result */
A68_BOOL  XOGBSIM;  /* optbool result */
A68_BOOL  YOGBSIM;  /* optbool result */
A68_BOOL  ZOGBSIM_changed;
A68_BOOL  APGBSIM;  /* optbool result */
A68_BOOL  BPGBSIM_matched;
A68_BOOL  CPGBSIM;  /* optbool result */
A68_BOOL  DPGBSIM;  /* optbool result */
A68_BOOL  EPGBSIM;  /* optbool result */
A68_BOOL  FPGBSIM;  /* optbool result */
A68_BOOL  GPGBSIM_active;
A68_149 * HPGBSIM;  /* clause result */
A68_149  IPGBSIM;  /* OPERATORS - mode -> union mode */
A68_158  JPGBSIM;  /* YIELD */
A68_149 * KPGBSIM;  /* YIELD */
A68_169  LPGBSIM;  /* united object - for case conformity */
A68_171  MPGBSIM_l;
A68_171  NPGBSIM;  /* clause result */
A68_171  OPGBSIM_locationofm;
A68_149  PPGBSIM;  /* avoid structure result */
A68_149 * QPGBSIM;  /* YIELD */
A68_149 ** RPGBSIM;  /* YIELD */
A68_BOOL  SPGBSIM;  /* optbool result */
A68_BOOL  TPGBSIM;  /* optbool result */
A68_INT  UPGBSIM;  /* clause result */
A68_INT  VPGBSIM_format;
A68_BOOL  WPGBSIM;  /* optbool result */
A68_BOOL  XPGBSIM;  /* optbool result */
A68_INT  YPGBSIM;  /* clause result */
A68_INT  ZPGBSIM_format;
A68_BOOL  AQGBSIM;  /* optbool result */
A68_BOOL  BQGBSIM;  /* clause result */
A68_BOOL  CQGBSIM;  /* optbool result */
A_PROC_ENTRY(domonitor);
 /* line 969: */
 /* line 970: */
{ 
VNGBSIM_m = (&(Ml->Monitor));
 /* line 971: */
WNGBSIM = (ZPAASIM_timemode==BQAASIM_past);
if ( ! WNGBSIM )
{ /* line 972: */
WNGBSIM = ((*(&(VNGBSIM_m->Decoded)))==(A68_149 *)A68_NIL);
}
if ( ! WNGBSIM )
{ /* line 973: */
XNGBSIM = (Atime==YPAASIM_activetime);
if ( XNGBSIM )
{{ 
YNGBSIM_flag = UCNASIM_cgpeekint((*(&(VNGBSIM_m->Flagaddress))));
 /* line 974: */
OCNASIM_cgpokeint(0, (*(&(VNGBSIM_m->Flagaddress))));
 /* line 975: */
ZNGBSIM = (YNGBSIM_flag!=0);
} 
XNGBSIM = ZNGBSIM;
}
WNGBSIM = XNGBSIM;
}
AOGBSIM_interesting = WNGBSIM;
 /* line 976: */
 /* line 977: */
BOGBSIM = (A68_BITS )HZEBSIM_always ;
COGBSIM = (A68_BITS )(*(&(VNGBSIM_m->Condition))) ;
DOGBSIM = A_LB_LE(BOGBSIM,COGBSIM);
if ( ! DOGBSIM )
{DOGBSIM = AOGBSIM_interesting;
}
 /* line 980: */
EOGBSIM = DOGBSIM;
if ( EOGBSIM )
{ 
FOGBSIM_testvalue = (*(&(VNGBSIM_m->Testvalues)));
 /* line 981: */
GOGBSIM_lastvalue = (*(&(VNGBSIM_m->Lastvalues)));
 /* line 982: */
 /* line 986: */
 /* line 987: */
if ( AOGBSIM_interesting )
{ 
BKCBSIM_peeksignalvalue((*(&(VNGBSIM_m->Location))), (*(&(VNGBSIM_m->Workspace))));
 /* line 988: */
HOGBSIM_value = (*(&(VNGBSIM_m->Workspace)));
 /* line 989: */
IOGBSIM = ! A_VSTRUCTCOMP(GOGBSIM_lastvalue,MZEBSIM_novalue);
if ( IOGBSIM )
{IOGBSIM = (GOGBSIM_lastvalue.upb!=0);
}
 /* line 991: */
if ( IOGBSIM )
{ 
 /* line 992: */
 /* line 993: */
JOGBSIM = (&(VNGBSIM_m->Workspace)) ;
(*JOGBSIM) = GOGBSIM_lastvalue;
} 
else
{ 
A_CLOSURE( LOGBSIM_generator, MOGBSIM_generator, NOGBSIM_generator );
(( NOGBSIM_generator * ) ( LOGBSIM_generator.nonlocals )) -> VNGBSIM_m = VNGBSIM_m;
 /* line 995: */
 /* line 997: */
A_CALLPROC(LOGBSIM_generator,(A68_FALSE, &QOGBSIM),(A68_FALSE, &QOGBSIM,(LOGBSIM_generator).nonlocals));
ROGBSIM = (&(VNGBSIM_m->Workspace)) ;
(*ROGBSIM) = QOGBSIM;
} 
} 
else
{ 
 /* line 1003: */
HOGBSIM_value = GOGBSIM_lastvalue;
} 
 /* line 1004: */
SOGBSIM = (&(VNGBSIM_m->Lastvalues)) ;
(*SOGBSIM) = HOGBSIM_value;
 /* line 1007: */
TOGBSIM = ! A_VSTRUCTCOMP(GOGBSIM_lastvalue,MZEBSIM_novalue);
if ( TOGBSIM )
{TOGBSIM = (GOGBSIM_lastvalue.upb==0);
}
UOGBSIM_first = TOGBSIM;
 /* line 1009: */
 /* line 1010: */
 /* line 1011: */
VOGBSIM = AOGBSIM_interesting;
if ( VOGBSIM )
{ /* line 1012: */
WOGBSIM = ! A_VSTRUCTCOMP(HOGBSIM_value,MZEBSIM_novalue);
if ( WOGBSIM )
{XOGBSIM = A_VSTRUCTCOMP(GOGBSIM_lastvalue,MZEBSIM_novalue);
if ( ! XOGBSIM )
{XOGBSIM = A_VC_NE(HOGBSIM_value,GOGBSIM_lastvalue);
}
WOGBSIM = XOGBSIM;
}
 /* line 1013: */
if ( ! WOGBSIM )
{YOGBSIM = A_VSTRUCTCOMP(HOGBSIM_value,MZEBSIM_novalue);
if ( YOGBSIM )
{YOGBSIM = ! A_VSTRUCTCOMP(GOGBSIM_lastvalue,MZEBSIM_novalue);
}
WOGBSIM = YOGBSIM;
}
 /* line 1014: */
if ( ! WOGBSIM )
{WOGBSIM = UOGBSIM_first;
}
VOGBSIM = WOGBSIM;
}
ZOGBSIM_changed = VOGBSIM;
 /* line 1017: */
 /* line 1018: */
APGBSIM = ! A_VSTRUCTCOMP(FOGBSIM_testvalue,MZEBSIM_novalue);
if ( APGBSIM )
{APGBSIM = ! A_VSTRUCTCOMP(HOGBSIM_value,MZEBSIM_novalue);
}
 /* line 1019: */
if ( APGBSIM )
{APGBSIM = A_VC_EQ(HOGBSIM_value,FOGBSIM_testvalue);
}
BPGBSIM_matched = APGBSIM;
 /* line 1020: */
 /* line 1021: */
 /* line 1022: */
CPGBSIM = ((*(&(VNGBSIM_m->Condition)))==HZEBSIM_always);
if ( ! CPGBSIM )
{DPGBSIM = ((*(&(VNGBSIM_m->Condition)))==IZEBSIM_changes);
if ( DPGBSIM )
{DPGBSIM = ZOGBSIM_changed;
}
CPGBSIM = DPGBSIM;
}
 /* line 1023: */
if ( ! CPGBSIM )
{EPGBSIM = ((*(&(VNGBSIM_m->Condition)))==JZEBSIM_equals);
if ( EPGBSIM )
{EPGBSIM = BPGBSIM_matched;
}
CPGBSIM = EPGBSIM;
}
 /* line 1024: */
if ( ! CPGBSIM )
{FPGBSIM = ((*(&(VNGBSIM_m->Condition)))==KZEBSIM_becomes);
if ( FPGBSIM )
{FPGBSIM = BPGBSIM_matched;
}
if ( FPGBSIM )
{FPGBSIM = ZOGBSIM_changed;
}
CPGBSIM = FPGBSIM;
}
GPGBSIM_active = CPGBSIM;
 /* line 1027: */
 /* line 1028: */
if ( ZOGBSIM_changed )
{ 
 /* line 1029: */
 /* line 1030: */
if ( A_VSTRUCTCOMP(HOGBSIM_value,MZEBSIM_novalue) )
{ 
HPGBSIM = (A68_149 *)A68_NIL;
} 
else
{ 
 /* line 1031: */
if ( (HOGBSIM_value.upb==0) )
{ 
 /* line 1032: */
 /* line 1033: */
JPGBSIM = (*(A_HEAP(A68_158 ))) ;
KPGBSIM = A_HEAP(A68_149 ) ;
(*KPGBSIM) = A_UNITE(IPGBSIM,mode9,9,JPGBSIM) ;
HPGBSIM = KPGBSIM;
} 
else
{ 
LPGBSIM = (*(&((&(VNGBSIM_m->Location))->Node))) ;
switch ( LPGBSIM.mode )
{ 
case 2: /* STRUCT(REF MODE172,INT)  */
MPGBSIM_l = (LPGBSIM.data.mode2);
NPGBSIM = MPGBSIM_l;
break;
default: 
A_IMP_SKIP ;
break;
} 
OPGBSIM_locationofm = NPGBSIM;
 /* line 1034: */
 /* line 1035: */
 /* line 1036: */
AFDBSIM_decode( HOGBSIM_value, (*(&(OPGBSIM_locationofm.Wire->Type))), &PPGBSIM );
QPGBSIM = A_HEAP(A68_149 ) ;
(*QPGBSIM) = PPGBSIM ;
HPGBSIM = QPGBSIM;
} 
} 
RPGBSIM = (&(VNGBSIM_m->Decoded)) ;
(*RPGBSIM) = HPGBSIM;
} 
 /* line 1039: */
SPGBSIM = ((*(&(VNGBSIM_m->Action)))==EZEBSIM_stop);
if ( SPGBSIM )
{SPGBSIM = GPGBSIM_active;
}
 /* line 1041: */
if ( SPGBSIM )
{ 
TPGBSIM = ((*(&(VNGBSIM_m->Condition)))==HZEBSIM_always);
if ( ! TPGBSIM )
{TPGBSIM = ((*(&(VNGBSIM_m->Condition)))==JZEBSIM_equals);
}
 /* line 1042: */
if ( ! TPGBSIM )
{TPGBSIM = UOGBSIM_first;
}
 /* line 1043: */
if ( TPGBSIM )
{ 
 /* line 1044: */
UPGBSIM = EKGBSIM_printeventequals;
} 
else
{ 
UPGBSIM = FKGBSIM_printeventbecomes;
} 
VPGBSIM_format = UPGBSIM;
 /* line 1045: */
 /* line 1046: */
KKGBSIM_printfreeform(Atime, VNGBSIM_m, (*(&(VNGBSIM_m->Decoded))), VPGBSIM_format);
} 
 /* line 1049: */
WPGBSIM = ((*(&(VNGBSIM_m->Action)))==DZEBSIM_display);
if ( ! WPGBSIM )
{WPGBSIM = ((*(&(VNGBSIM_m->Action)))==CZEBSIM_monitor);
}
 /* line 1050: */
if ( WPGBSIM )
{ 
 /* line 1052: */
if ( GPGBSIM_active )
{ 
XPGBSIM = ((*(&(VNGBSIM_m->Condition)))==HZEBSIM_always);
if ( ! XPGBSIM )
{XPGBSIM = ((*(&(VNGBSIM_m->Condition)))==JZEBSIM_equals);
}
 /* line 1054: */
if ( ! XPGBSIM )
{XPGBSIM = UOGBSIM_first;
}
 /* line 1055: */
if ( XPGBSIM )
{ 
 /* line 1056: */
YPGBSIM = DKGBSIM_printequals;
} 
else
{ 
YPGBSIM = CKGBSIM_printbecomes;
} 
ZPGBSIM_format = YPGBSIM;
 /* line 1057: */
 /* line 1058: */
 /* line 1059: */
JLGBSIM_printcurrentstyle(Atime, Ml, (*(&(VNGBSIM_m->Decoded))), ZPGBSIM_format);
} 
else
{ 
 /* line 1060: */
 /* line 1061: */
HCGBSIM_layout(Ml);
} 
} 
 /* line 1093: */
 /* line 1094: */
AQGBSIM = ((*(&(VNGBSIM_m->Action)))==EZEBSIM_stop);
if ( AQGBSIM )
{AQGBSIM = GPGBSIM_active;
}
 /* line 1095: */
BQGBSIM = AQGBSIM;
} 
else
{ 
CQGBSIM = ((*(&(VNGBSIM_m->Action)))==DZEBSIM_display);
if ( ! CQGBSIM )
{CQGBSIM = ((*(&(VNGBSIM_m->Action)))==CZEBSIM_monitor);
}
 /* line 1098: */
if ( CQGBSIM )
{ 
 /* line 1099: */
HCGBSIM_layout(Ml);
} 
 /* line 1100: */
 /* line 1101: */
BQGBSIM = A68_FALSE;
} 
} 
A_PROC_EXIT(domonitor);
return( BQGBSIM );
} 
#undef NL
 /* line 1119: */
 /* line 1120: */

A68_VOID  IQGBSIM_listmonitors(A68_303  Nodedescriptor, A68_INT  Action, A68_INT  Condition, A68_BOOL  Forcepresentmode, A68_32  *ReturnedValue)
{ 
A68_176 * JQGBSIM_path;
A68_INT  KQGBSIM_base;
A68_BOOL  LQGBSIM_basematch;
A68_303  MQGBSIM;  /* united object - for case conformity */
A68_176 * NQGBSIM_p;
A68_INT  OQGBSIM_i;
A68_175 * PQGBSIM_list;
A68_175 ** QQGBSIM_end;
A68_BOOL  RQGBSIM;  /* optbool result */
A68_175 * SQGBSIM;  /* clause result */
A68_175 * TQGBSIM_m;
A68_VC  UQGBSIM;  /* avoid structure result */
A68_VC  VQGBSIM_pathnodename;
A68_31  XQGBSIM_generator;   /* proc value of non-global proc */
A68_VC  CRGBSIM;  /* clause result */
A68_VC  DRGBSIM;  /* avoid structure result */
A68_36  ERGBSIM;  /* procedure value */
A68_VC  FRGBSIM;  /* avoid structure result */
A68_VC  GRGBSIM;  /* OPERATORS - skip to mode */
A68_VC  HRGBSIM_matchid;
A68_BOOL  IRGBSIM;  /* clause result */
A68_BOOL  JRGBSIM;  /* optbool result */
A68_BOOL  KRGBSIM;  /* optbool result */
A68_BOOL  LRGBSIM;  /* optbool result */
A68_36  MRGBSIM;  /* procedure value */
A68_VC  NRGBSIM;  /* avoid structure result */
A68_175  ORGBSIM;  /* collateral clause result */
A68_175 * PRGBSIM;  /* YIELD */
A68_INT  QRGBSIM_i;
A68_33  SRGBSIM_generator;   /* proc value of non-global proc */
A68_32  YRGBSIM;  /* avoid structure result */
A68_32  XRGBSIM_ans;
A68_INT * ZRGBSIM;  /* YIELD */
A68_32  ASGBSIM;  /* clause result */
A_PROC_ENTRY(listmonitors);
 /* line 1121: */
 /* line 1122: */
{ 
JQGBSIM_path = HGDBSIM_nilpath;
 /* line 1123: */
KQGBSIM_base = 0;
 /* line 1124: */
LQGBSIM_basematch = A68_FALSE;
 /* line 1125: */
 /* line 1126: */
MQGBSIM = Nodedescriptor ;
switch ( MQGBSIM.mode )
{ 
case 1: /* REF STRUCT(INT,REF MODE26,REF MODE26,CHAR,REF MODE177,REF MODE176)  */
NQGBSIM_p = (MQGBSIM.data.mode1);
 /* line 1127: */
JQGBSIM_path = NQGBSIM_p;
break;
case 2: /* INT */
OQGBSIM_i = (MQGBSIM.data.mode2);
{ 
KQGBSIM_base = OQGBSIM_i;
 /* line 1128: */
LQGBSIM_basematch = A68_TRUE;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 1130: */
PQGBSIM_list = NZEBSIM_nilmonitorlist;
 /* line 1131: */
QQGBSIM_end = (&PQGBSIM_list);
 /* line 1133: */
 /* line 1134: */
 /* line 1135: */
RQGBSIM = (ZPAASIM_timemode==BQAASIM_past);
if ( RQGBSIM )
{RQGBSIM = Forcepresentmode;
}
 /* line 1136: */
if ( RQGBSIM )
{ 
 /* line 1137: */
SQGBSIM = BSFBSIM_savedtestpoints;
} 
else
{ 
SQGBSIM = XSFBSIM_testpoints;
} 
TQGBSIM_m = SQGBSIM;
 /* line 1138: */
 /* line 1139: */
 /* line 1140: */
 /* line 1141: */
if ( (JQGBSIM_path!=HGDBSIM_nilpath) )
{ 
RBFBSIM_nodename( JQGBSIM_path, &UQGBSIM );
VQGBSIM_pathnodename = UQGBSIM;
 /* line 1142: */
 /* line 1143: */
A_CLOSURE( XQGBSIM_generator, YQGBSIM_generator, ZQGBSIM_generator );
(( ZQGBSIM_generator * ) ( XQGBSIM_generator.nonlocals )) -> VQGBSIM_pathnodename = VQGBSIM_pathnodename;
 /* line 1144: */
 /* line 1146: */
A_CALLPROC(XQGBSIM_generator,(A68_FALSE, &DRGBSIM),(A68_FALSE, &DRGBSIM,(XQGBSIM_generator).nonlocals));
A_VASSIGN2(VQGBSIM_pathnodename,DRGBSIM,A68_CHAR ) ;
ERGBSIM.fn.fn_global = NKDAOST_sysfault;
ERGBSIM.nonlocals = A68_NIL;
RBFBSIM_nodename( QLFBSIM_absolutenodename(DRGBSIM, ERGBSIM), &FRGBSIM );
CRGBSIM = FRGBSIM;
} 
else
{ 
CRGBSIM = GRGBSIM;
} 
HRGBSIM_matchid = CRGBSIM;
 /* line 1147: */
for ( ;; )
{ 
 /* line 1149: */
if ( !((TQGBSIM_m!=NZEBSIM_nilmonitorlist)) ) break;
 /* line 1150: */
 /* line 1151: */
if ( LQGBSIM_basematch )
{ 
 /* line 1152: */
 /* line 1153: */
IRGBSIM = (KQGBSIM_base==(*(&((&((&(TQGBSIM_m->Monitor))->Location))->Base))));
} 
else
{ 
JRGBSIM = (Action==BZEBSIM_noaction);
if ( ! JRGBSIM )
{JRGBSIM = ((*(&((&(TQGBSIM_m->Monitor))->Action)))==Action);
}
 /* line 1154: */
if ( JRGBSIM )
{ /* line 1155: */
KRGBSIM = (Condition==GZEBSIM_nocondition);
if ( ! KRGBSIM )
{KRGBSIM = ((*(&((&(TQGBSIM_m->Monitor))->Condition)))==Condition);
}
JRGBSIM = KRGBSIM;
}
 /* line 1156: */
if ( JRGBSIM )
{ /* line 1157: */
LRGBSIM = (JQGBSIM_path==HGDBSIM_nilpath);
if ( ! LRGBSIM )
{MRGBSIM.fn.fn_global = NKDAOST_sysfault;
MRGBSIM.nonlocals = A68_NIL;
RBFBSIM_nodename( QLFBSIM_absolutenodename((*(&((&(TQGBSIM_m->Monitor))->Fullid))), MRGBSIM), &NRGBSIM );
LRGBSIM = A_VC_EQ(NRGBSIM,HRGBSIM_matchid);
}
 /* line 1158: */
JRGBSIM = LRGBSIM;
}
 /* line 1159: */
 /* line 1160: */
IRGBSIM = JRGBSIM;
} 
if ( IRGBSIM )
{ 
 /* line 1161: */
ORGBSIM.Monitor = (*(&(TQGBSIM_m->Monitor)));
ORGBSIM.Handle = (*(&(TQGBSIM_m->Handle)));
ORGBSIM.Rest = NZEBSIM_nilmonitorlist;
PRGBSIM = A_HEAP(A68_175 ) ;
(*PRGBSIM) = ORGBSIM ;
(*QQGBSIM_end) = PRGBSIM;
 /* line 1162: */
 /* line 1163: */
QQGBSIM_end = (&((*QQGBSIM_end)->Rest));
} 
 /* line 1164: */
 /* line 1165: */
TQGBSIM_m = (*(&(TQGBSIM_m->Rest)));
}
 /* line 1168: */
TQGBSIM_m = PQGBSIM_list;
 /* line 1169: */
QRGBSIM_i = 0;
 /* line 1170: */
for ( ;; )
{ 
if ( !((TQGBSIM_m!=NZEBSIM_nilmonitorlist)) ) break;
QRGBSIM_i+=1;
TQGBSIM_m = (*(&(TQGBSIM_m->Rest)));
}
 /* line 1171: */
A_CLOSURE( SRGBSIM_generator, TRGBSIM_generator, URGBSIM_generator );
(( URGBSIM_generator * ) ( SRGBSIM_generator.nonlocals )) -> QRGBSIM_i = (&QRGBSIM_i);
A_CALLPROC(SRGBSIM_generator,(A68_FALSE, &YRGBSIM),(A68_FALSE, &YRGBSIM,(SRGBSIM_generator).nonlocals));
XRGBSIM_ans = YRGBSIM;
 /* line 1172: */
TQGBSIM_m = PQGBSIM_list;
 /* line 1173: */
QRGBSIM_i = 0;
 /* line 1174: */
DQGBSIM_catchupneeded = A68_FALSE;
 /* line 1175: */
for ( ;; )
{ 
 /* line 1176: */
if ( !((TQGBSIM_m!=NZEBSIM_nilmonitorlist)) ) break;
QRGBSIM_i+=1;
 /* line 1177: */
ZRGBSIM = (&A_VINDEX(XRGBSIM_ans,QRGBSIM_i)) ;
(*ZRGBSIM) = (*(&(TQGBSIM_m->Handle)));
 /* line 1178: */
if ( ((*(&((&(TQGBSIM_m->Monitor))->Condition)))==HZEBSIM_always) )
{ 
DQGBSIM_catchupneeded = A68_TRUE;
} 
 /* line 1179: */
 /* line 1180: */
TQGBSIM_m = (*(&(TQGBSIM_m->Rest)));
}
 /* line 1181: */
 /* line 1182: */
ASGBSIM = XRGBSIM_ans;
} 
A_PROC_EXIT(listmonitors);
*ReturnedValue = (ASGBSIM);
return;
} 
#undef NL

A68_BOOL  DSGBSIM_domonitors(A68_INT  Oldtime, A68_36  Flt)
{ 
A68_303  ESGBSIM;  /* OPERATORS - mode -> union mode */
A68_32  FSGBSIM;  /* avoid structure result */
A68_32  GSGBSIM_presentmodehandles;
A68_INT  HSGBSIM;  /* clause result */
A68_INT  ISGBSIM_starttime;
A68_INT  JSGBSIM_atime;
A68_INT  KSGBSIM;  /* to part of loop */
A68_175 * LSGBSIM_m;
A68_BOOL  MSGBSIM_presentmodetestpoint;
A68_INT * NSGBSIM_h;
A68_INT  OSGBSIM;  /* forall loop counter */
A68_BOOL  PSGBSIM;  /* optbool result */
A68_BOOL  QSGBSIM_stopped;
A68_175 * RSGBSIM_m;
A68_BOOL  SSGBSIM_presentmodetestpoint;
A68_INT * TSGBSIM_h;
A68_INT  USGBSIM;  /* forall loop counter */
A68_BOOL  VSGBSIM;  /* clause result */
A_PROC_ENTRY(domonitors);
 /* line 1190: */
 /* line 1191: */
{ 
 /* line 1195: */
if ( ((RSFBSIM_printedtimestyle!=VSFBSIM_tabulated)&(QSFBSIM_printedtime!=(-1))) )
{ 
BMGBSIM_monitorheading();
} 
 /* line 1197: */
 /* line 1198: */
IQGBSIM_listmonitors( A_UNITE(ESGBSIM,mode1,1,HGDBSIM_nilpath), BZEBSIM_noaction, GZEBSIM_nocondition, A68_TRUE, &FSGBSIM );
GSGBSIM_presentmodehandles = FSGBSIM;
 /* line 1200: */
if ( DQGBSIM_catchupneeded )
{ 
HSGBSIM = Oldtime;
} 
else
{ 
HSGBSIM = YPAASIM_activetime;
} 
ISGBSIM_starttime = HSGBSIM;
 /* line 1201: */
KSGBSIM = YPAASIM_activetime;
for ( JSGBSIM_atime = ISGBSIM_starttime;
JSGBSIM_atime <= KSGBSIM;
JSGBSIM_atime += 1 )
{ 
 /* line 1203: */
FCGBSIM_startlayout();
 /* line 1204: */
LSGBSIM_m = XSFBSIM_testpoints;
 /* line 1205: */
for ( ;; )
{ 
 /* line 1206: */
if ( !((LSGBSIM_m!=NZEBSIM_nilmonitorlist)) ) break;
 /* line 1208: */
if ( ((*(&((&(LSGBSIM_m->Monitor))->Action)))!=EZEBSIM_stop) )
{ 
MSGBSIM_presentmodetestpoint = (ZPAASIM_timemode==AQAASIM_present);
 /* line 1209: */
OSGBSIM = GSGBSIM_presentmodehandles.upb -1;
NSGBSIM_h = GSGBSIM_presentmodehandles.data;
for (;OSGBSIM-- >= 0;
(NSGBSIM_h++
) )
{
 /* line 1210: */
 /* line 1211: */
if ( !(!MSGBSIM_presentmodetestpoint) ) break;
 /* line 1212: */
MSGBSIM_presentmodetestpoint = ((*NSGBSIM_h)==(*(&(LSGBSIM_m->Handle))));
}
 /* line 1213: */
 /* line 1214: */
 /* line 1215: */
UNGBSIM_domonitor(JSGBSIM_atime, LSGBSIM_m, (*(&(LSGBSIM_m->Handle))), !MSGBSIM_presentmodetestpoint, Flt);
} 
 /* line 1216: */
 /* line 1217: */
LSGBSIM_m = (*(&(LSGBSIM_m->Rest)));
}
 /* line 1218: */
PSGBSIM = (TSFBSIM_printstyle!=WSFBSIM_noprint);
if ( PSGBSIM )
{PSGBSIM = (YOAAOSL_charnumber(LEAAOST_out)!=1);
}
 /* line 1219: */
if ( PSGBSIM )
{ 
MCGBSIM_dolayout(NZEBSIM_nilmonitorlist);
 /* line 1220: */
 /* line 1221: */
 /* line 1222: */
LRAAOSL_newline(LEAAOST_out);
} 
}
 /* line 1224: */
QSGBSIM_stopped = A68_FALSE;
 /* line 1225: */
RSGBSIM_m = XSFBSIM_testpoints;
 /* line 1226: */
for ( ;; )
{ 
 /* line 1227: */
if ( !((RSGBSIM_m!=NZEBSIM_nilmonitorlist)) ) break;
 /* line 1229: */
if ( ((*(&((&(RSGBSIM_m->Monitor))->Action)))==EZEBSIM_stop) )
{ 
SSGBSIM_presentmodetestpoint = (ZPAASIM_timemode==AQAASIM_present);
 /* line 1230: */
USGBSIM = GSGBSIM_presentmodehandles.upb -1;
TSGBSIM_h = GSGBSIM_presentmodehandles.data;
for (;USGBSIM-- >= 0;
(TSGBSIM_h++
) )
{
 /* line 1231: */
 /* line 1232: */
if ( !(!SSGBSIM_presentmodetestpoint) ) break;
 /* line 1233: */
SSGBSIM_presentmodetestpoint = ((*TSGBSIM_h)==(*(&(RSGBSIM_m->Handle))));
}
 /* line 1234: */
 /* line 1235: */
 /* line 1236: */
 /* line 1237: */
QSGBSIM_stopped = (UNGBSIM_domonitor(YPAASIM_activetime, RSGBSIM_m, (*(&(RSGBSIM_m->Handle))), !SSGBSIM_presentmodetestpoint, Flt)|QSGBSIM_stopped);
} 
 /* line 1238: */
 /* line 1239: */
RSGBSIM_m = (*(&(RSGBSIM_m->Rest)));
}
 /* line 1241: */
 /* line 1242: */
VSGBSIM = QSGBSIM_stopped;
} 
A_PROC_EXIT(domonitors);
return( VSGBSIM );
} 
#undef NL

A68_147 * ATGBSIM_loadmonitor(A68_176 * Path, A68_INT  Action, A68_INT  Condition, A68_36  Flt)
{ 
A68_147 * BTGBSIM_mon;
A68_VC  CTGBSIM;  /* avoid structure result */
A68_VC * DTGBSIM;  /* YIELD */
A68_VC  ETGBSIM;  /* avoid structure result */
A68_VC  FTGBSIM;  /* avoid structure result */
A68_VC * GTGBSIM;  /* YIELD */
A68_INT * HTGBSIM;  /* YIELD */
A68_INT * ITGBSIM;  /* YIELD */
A68_32  JTGBSIM;  /* OPERATORS - nil -> mode */
A68_32 * KTGBSIM;  /* YIELD */
A68_32  LTGBSIM;  /* OPERATORS - nil -> mode */
A68_32 * MTGBSIM;  /* YIELD */
A68_148  NTGBSIM;  /* avoid structure result */
A68_148 * OTGBSIM;  /* YIELD */
A68_VC * PTGBSIM;  /* YIELD */
A68_VC * QTGBSIM;  /* YIELD */
A68_169  RTGBSIM;  /* united object - for case conformity */
A68_171  STGBSIM_l;
A68_171  TTGBSIM;  /* clause result */
A68_171  UTGBSIM_locationofmon;
A68_INT  VTGBSIM_size;
A68_174 * WTGBSIM_block;
A68_173  XTGBSIM;  /* forall yield */
A68_INT  YTGBSIM;  /* forall loop counter */
A68_31  AUGBSIM_generator;   /* proc value of non-global proc */
A68_VC  FUGBSIM;  /* avoid structure result */
A68_VC * GUGBSIM;  /* YIELD */
A68_149 ** HUGBSIM;  /* YIELD */
A68_INT * IUGBSIM;  /* YIELD */
A68_INT * JUGBSIM;  /* YIELD */
A68_147 * KUGBSIM;  /* clause result */
A_PROC_ENTRY(loadmonitor);
 /* line 1258: */
 /* line 1259: */
{ 
BTGBSIM_mon = (A_HEAP(A68_147 ));
 /* line 1260: */
FOFBSIM_smallname( Path, &CTGBSIM );
DTGBSIM = (&(BTGBSIM_mon->Id)) ;
(*DTGBSIM) = CTGBSIM;
 /* line 1261: */
RBFBSIM_nodename( Path, &ETGBSIM );
RSCAOST_makeid( ETGBSIM, &FTGBSIM );
GTGBSIM = (&(BTGBSIM_mon->Fullid)) ;
(*GTGBSIM) = FTGBSIM;
 /* line 1262: */
HTGBSIM = (&(BTGBSIM_mon->Action)) ;
(*HTGBSIM) = Action;
 /* line 1263: */
ITGBSIM = (&(BTGBSIM_mon->Condition)) ;
(*ITGBSIM) = Condition;
 /* line 1264: */
KTGBSIM = (&(BTGBSIM_mon->Sizes)) ;
(*KTGBSIM) = A_VVAC(JTGBSIM);
 /* line 1265: */
MTGBSIM = (&(BTGBSIM_mon->Columns)) ;
(*MTGBSIM) = A_VVAC(LTGBSIM);
 /* line 1266: */
XXFBSIM_line( Path, &NTGBSIM );
OTGBSIM = (&(BTGBSIM_mon->Location)) ;
(*OTGBSIM) = NTGBSIM;
 /* line 1271: */
PTGBSIM = (&(BTGBSIM_mon->Lastvalues)) ;
(*PTGBSIM) = OSFBSIM_emptyvalue;
 /* line 1272: */
QTGBSIM = (&(BTGBSIM_mon->Testvalues)) ;
(*QTGBSIM) = MZEBSIM_novalue;
 /* line 1273: */
RTGBSIM = (*(&((&(BTGBSIM_mon->Location))->Node))) ;
switch ( RTGBSIM.mode )
{ 
case 2: /* STRUCT(REF MODE172,INT)  */
STGBSIM_l = (RTGBSIM.data.mode2);
TTGBSIM = STGBSIM_l;
break;
default: 
A_IMP_SKIP ;
break;
} 
UTGBSIM_locationofmon = TTGBSIM;
 /* line 1274: */
VTGBSIM_size = 0;
 /* line 1275: */
XTGBSIM = (*(&(UTGBSIM_locationofmon.Wire->Blocks))) ;
YTGBSIM = XTGBSIM.upb -1;
WTGBSIM_block = XTGBSIM.data;
for (;YTGBSIM-- >= 0;
(WTGBSIM_block++
) )
{
 /* line 1276: */
 /* line 1277: */
VTGBSIM_size+=(*(&(WTGBSIM_block->Size)));
}
 /* line 1278: */
A_CLOSURE( AUGBSIM_generator, BUGBSIM_generator, CUGBSIM_generator );
(( CUGBSIM_generator * ) ( AUGBSIM_generator.nonlocals )) -> VTGBSIM_size = (&VTGBSIM_size);
A_CALLPROC(AUGBSIM_generator,(A68_FALSE, &FUGBSIM),(A68_FALSE, &FUGBSIM,(AUGBSIM_generator).nonlocals));
GUGBSIM = (&(BTGBSIM_mon->Workspace)) ;
(*GUGBSIM) = FUGBSIM;
 /* line 1279: */
HUGBSIM = (&(BTGBSIM_mon->Decoded)) ;
(*HUGBSIM) = (A68_149 *)A68_NIL;
 /* line 1280: */
 /* line 1281: */
if ( (ZPAASIM_timemode==AQAASIM_present) )
{ 
IUGBSIM = (&(BTGBSIM_mon->Flagaddress)) ;
(*IUGBSIM) = MLCBSIM_makeflagfanouts((*(&(BTGBSIM_mon->Location))));
 /* line 1282: */
 /* line 1283: */
 /* line 1284: */
OCNASIM_cgpokeint(1, (*(&(BTGBSIM_mon->Flagaddress))));
} 
else
{ 
 /* line 1285: */
JUGBSIM = (&(BTGBSIM_mon->Flagaddress)) ;
(*JUGBSIM) = (-1);
} 
 /* line 1286: */
 /* line 1287: */
KUGBSIM = BTGBSIM_mon;
} 
A_PROC_EXIT(loadmonitor);
return( KUGBSIM );
} 
#undef NL

A68_INT  MUGBSIM_addmonitor(A68_147 * M)
{ 
A68_INT  NUGBSIM_ans;
A68_175 ** OUGBSIM_ptr;
A68_175  PUGBSIM;  /* collateral clause result */
A68_175 * QUGBSIM;  /* YIELD */
A68_INT  RUGBSIM;  /* clause result */
A_PROC_ENTRY(addmonitor);
 /* line 1294: */
 /* line 1300: */
{ 
NUGBSIM_ans = PZEBSIM_newhandle();
 /* line 1301: */
OUGBSIM_ptr = (&XSFBSIM_testpoints);
 /* line 1302: */
for ( ;; )
{ 
if ( !(((*OUGBSIM_ptr)!=NZEBSIM_nilmonitorlist)) ) break;
OUGBSIM_ptr = (&((*OUGBSIM_ptr)->Rest));
}
 /* line 1303: */
PUGBSIM.Monitor = (*M);
PUGBSIM.Handle = NUGBSIM_ans;
PUGBSIM.Rest = NZEBSIM_nilmonitorlist;
QUGBSIM = A_HEAP(A68_175 ) ;
(*QUGBSIM) = PUGBSIM ;
(*OUGBSIM_ptr) = QUGBSIM;
 /* line 1304: */
 /* line 1305: */
RUGBSIM = NUGBSIM_ans;
} 
A_PROC_EXIT(addmonitor);
return( RUGBSIM );
} 
#undef NL

A68_VOID  UUGBSIM_newtestpoints(A68_INT  Handle, A68_36  Flt)
{ 
A68_175 * VUGBSIM_scan;
A68_175 * WUGBSIM_firstnew;
A68_BOOL  XUGBSIM_normaldisplays;
A68_BOOL  YUGBSIM_normaldisplaysorstops;
A68_BOOL  ZUGBSIM;  /* optbool result */
A68_BOOL  AVGBSIM;  /* optbool result */
A68_BOOL  BVGBSIM;  /* optbool result */
A68_58  CVGBSIM;  /* OPERATORS - mode -> union mode */
A68_40  DVGBSIM;  /* procedure value */
A68_88  EVGBSIM;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(newtestpoints);
 /* line 1314: */
 /* line 1316: */
{ 
VUGBSIM_scan = XSFBSIM_testpoints;
 /* line 1317: */
for ( ;; )
{ 
 /* line 1318: */
if ( !(((*(&(VUGBSIM_scan->Handle)))!=Handle)) ) break;
 /* line 1319: */
VUGBSIM_scan = (*(&(VUGBSIM_scan->Rest)));
}
 /* line 1320: */
WUGBSIM_firstnew = VUGBSIM_scan;
 /* line 1323: */
XUGBSIM_normaldisplays = A68_FALSE;
 /* line 1324: */
YUGBSIM_normaldisplaysorstops = A68_FALSE;
 /* line 1325: */
for ( ;; )
{ 
 /* line 1326: */
if ( !((VUGBSIM_scan!=NZEBSIM_nilmonitorlist)) ) break;
 /* line 1327: */
 /* line 1328: */
ZUGBSIM = ((*(&((&(VUGBSIM_scan->Monitor))->Action)))==DZEBSIM_display);
if ( ! ZUGBSIM )
{ /* line 1329: */
ZUGBSIM = ((*(&((&(VUGBSIM_scan->Monitor))->Action)))==CZEBSIM_monitor);
}
 /* line 1330: */
if ( ZUGBSIM )
{ 
 /* line 1331: */
XUGBSIM_normaldisplays = A68_TRUE;
} 
 /* line 1332: */
AVGBSIM = XUGBSIM_normaldisplays;
if ( ! AVGBSIM )
{AVGBSIM = ((*(&((&(VUGBSIM_scan->Monitor))->Action)))==EZEBSIM_stop);
}
 /* line 1333: */
if ( AVGBSIM )
{ 
 /* line 1334: */
YUGBSIM_normaldisplaysorstops = A68_TRUE;
} 
 /* line 1335: */
 /* line 1336: */
VUGBSIM_scan = (*(&(VUGBSIM_scan->Rest)));
}
 /* line 1339: */
 /* line 1340: */
if ( XUGBSIM_normaldisplays )
{ 
BMGBSIM_monitorheading();
 /* line 1341: */
FCGBSIM_startlayout();
 /* line 1342: */
VUGBSIM_scan = XSFBSIM_testpoints;
 /* line 1343: */
for ( ;; )
{ 
 /* line 1344: */
if ( !((VUGBSIM_scan!=WUGBSIM_firstnew)) ) break;
 /* line 1345: */
 /* line 1346: */
BVGBSIM = ((*(&((&(VUGBSIM_scan->Monitor))->Action)))==DZEBSIM_display);
if ( ! BVGBSIM )
{ /* line 1347: */
BVGBSIM = ((*(&((&(VUGBSIM_scan->Monitor))->Action)))==CZEBSIM_monitor);
}
 /* line 1348: */
if ( BVGBSIM )
{ 
 /* line 1349: */
HCGBSIM_layout(VUGBSIM_scan);
} 
 /* line 1350: */
 /* line 1351: */
VUGBSIM_scan = (*(&(VUGBSIM_scan->Rest)));
}
 /* line 1352: */
} 
 /* line 1355: */
VUGBSIM_scan = WUGBSIM_firstnew;
 /* line 1356: */
for ( ;; )
{ 
 /* line 1357: */
if ( !((VUGBSIM_scan!=NZEBSIM_nilmonitorlist)) ) break;
UNGBSIM_domonitor(YPAASIM_activetime, VUGBSIM_scan, (*(&(VUGBSIM_scan->Handle))), A68_TRUE, Flt);
 /* line 1368: */
 /* line 1369: */
VUGBSIM_scan = (*(&(VUGBSIM_scan->Rest)));
}
 /* line 1372: */
if ( XUGBSIM_normaldisplays )
{ 
DLGBSIM_pttime();
} 
 /* line 1373: */
if ( YUGBSIM_normaldisplaysorstops )
{ 
 /* line 1374: */
DVGBSIM.fn.fn_global = LRAAOSL_newline;
DVGBSIM.nonlocals = A68_NIL;
GFBAOSL_put(LEAAOST_out, A_HVEC(EVGBSIM,A_UNITE(CVGBSIM,mode12,12,DVGBSIM),A68_58 ));
} 
} 
A_PROC_EXIT(newtestpoints);
return;
} 
#undef NL

A68_147 * HVGBSIM_lookupmonitor(A68_INT  Handle, A68_BOOL  Forcepresentmode)
{ 
A68_147 * IVGBSIM_ans;
A68_BOOL  JVGBSIM;  /* optbool result */
A68_175 * KVGBSIM;  /* clause result */
A68_175 * LVGBSIM_m;
A68_147 * MVGBSIM;  /* clause result */
A_PROC_ENTRY(lookupmonitor);
 /* line 1387: */
 /* line 1388: */
{ 
IVGBSIM_ans = (A68_147 *)A68_NIL;
 /* line 1389: */
 /* line 1390: */
 /* line 1391: */
JVGBSIM = (ZPAASIM_timemode==BQAASIM_past);
if ( JVGBSIM )
{JVGBSIM = Forcepresentmode;
}
 /* line 1392: */
if ( JVGBSIM )
{ 
 /* line 1393: */
KVGBSIM = BSFBSIM_savedtestpoints;
} 
else
{ 
KVGBSIM = XSFBSIM_testpoints;
} 
LVGBSIM_m = KVGBSIM;
 /* line 1394: */
for ( ;; )
{ 
 /* line 1395: */
if ( !((LVGBSIM_m!=NZEBSIM_nilmonitorlist)) ) break;
if ( ((*(&(LVGBSIM_m->Handle)))==Handle) )
{ 
IVGBSIM_ans = (&(LVGBSIM_m->Monitor));
} 
 /* line 1396: */
 /* line 1397: */
LVGBSIM_m = (*(&(LVGBSIM_m->Rest)));
}
 /* line 1398: */
 /* line 1399: */
MVGBSIM = IVGBSIM_ans;
} 
A_PROC_EXIT(lookupmonitor);
return( MVGBSIM );
} 
#undef NL

A68_VOID  QVGBSIM_removemonitor(A68_INT  Handle, A68_BOOL  Permanent, A68_36  Flt)
{ 
A68_175 ** RVGBSIM_m;
A_PROC_ENTRY(removemonitor);
 /* line 1405: */
 /* line 1406: */
{ 
RVGBSIM_m = (&XSFBSIM_testpoints);
 /* line 1407: */
for ( ;; )
{ 
 /* line 1408: */
if ( !(((*(&((*RVGBSIM_m)->Handle)))!=Handle)) ) break;
 /* line 1409: */
RVGBSIM_m = (&((*RVGBSIM_m)->Rest));
}
 /* line 1422: */
 /* line 1423: */
if ( (ZPAASIM_timemode==AQAASIM_present) )
{ 
 /* line 1424: */
 /* line 1425: */
GMCBSIM_removeflagfanouts((*(&((&((*RVGBSIM_m)->Monitor))->Location))), (*(&((&((*RVGBSIM_m)->Monitor))->Flagaddress))));
} 
 /* line 1426: */
 /* line 1427: */
(*RVGBSIM_m) = (*(&((*RVGBSIM_m)->Rest)));
} 
A_PROC_EXIT(removemonitor);
return;
} 
#undef NL

A68_VOID  TVGBSIM_startmonitors(A68_36  Flt)
{ 
A_PROC_ENTRY(startmonitors);
 /* line 1439: */
for ( ;; )
{ 
 /* line 1440: */
if ( !((XSFBSIM_testpoints!=NZEBSIM_nilmonitorlist)) ) break;
 /* line 1441: */
if ( ((*(&((&(XSFBSIM_testpoints->Monitor))->Flagaddress)))!=(-1)) )
{ 
 /* line 1442: */
 /* line 1443: */
GMCBSIM_removeflagfanouts((*(&((&(XSFBSIM_testpoints->Monitor))->Location))), (*(&((&(XSFBSIM_testpoints->Monitor))->Flagaddress))));
} 
 /* line 1444: */
 /* line 1445: */
XSFBSIM_testpoints = (*(&(XSFBSIM_testpoints->Rest)));
}
A_PROC_EXIT(startmonitors);
return;
} 
#undef NL
 /* line 1: */
 /* line 2: */
 /* line 3: */
 /* line 6: */
void FSFBSIM(void)   /* initialise DECS simmonitor */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259R","./a68files/simmonitor.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","/u/model/ella/ostools/assoc/mfiles/ioprocs.m","/u/model/ella/ostools/assoc/mfiles/basics.m","./mfiles/kernel.m","./mfiles/simtime.m","./mfiles/simpeek.m","./mfiles/simpast.m","./mfiles/simnode.m","./mfiles/simtable.m","./mfiles/simmonmode.m","./mfiles/simbasics.m","/u/model/ella/ostools/assoc/mfiles/osinterface.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m","/u/model/ella/oslib/assoc/mfiles/iobasics.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_VC  PSFBSIM;  /* avoid structure result */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
TIGAOST();   /* USE ioprocs */
JSCAOST();   /* USE basics */
XWBBSIM();   /* USE kernel */
TPAASIM();   /* USE simtime */
FFEBSIM();   /* USE simpeek */
TRFBSIM();   /* USE simpast */
RZEBSIM();   /* USE simnode */
ZFDBSIM();   /* USE simtable */
WYEBSIM();   /* USE simmonmode */
FQAASIM();   /* USE simbasics */
PCAAOST();   /* USE osinterface */
MTAAOSL();   /* USE putstrings */
GNAAOSL();   /* USE iobasics */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/sim/assoc/./a68files/simmonitor.a68";
A_config.translation_time = "Tue Apr  4 11:14:51 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "ESFBSIM (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 11:14:51 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS simmonitor);
UEAALIB_a68config(LGAALIB_configinfo, JSFBSIM);
 /* line 134: */
LSFBSIM_generator( A68_FALSE, &PSFBSIM );
OSFBSIM_emptyvalue = PSFBSIM;
 /* line 145: */
 /* line 146: */
 /* line 147: */
 /* line 148: */
 /* line 153: */
 /* line 155: */
 /* line 156: */
 /* line 157: */
 /* line 158: */
 /* line 165: */
XSFBSIM_testpoints = (A68_175 *)A68_NIL;
 /* line 180: */
 /* line 301: */
 /* line 323: */
 /* line 355: */
 /* line 378: */
 /* line 427: */
ZAGBSIM_monitoringseparator = ' ';
 /* line 429: */
 /* line 435: */
 /* line 436: */
CBGBSIM_timewidth = BBGBSIM_basictimewidth;
 /* line 437: */
DBGBSIM_firstcolumn = (CBGBSIM_timewidth+3);
 /* line 444: */
 /* line 467: */
 /* line 496: */
 /* line 497: */
 /* line 505: */
 /* line 506: */
 /* line 507: */
 /* line 517: */
 /* line 531: */
 /* line 562: */
 /* line 619: */
 /* line 633: */
 /* line 697: */
 /* line 746: */
 /* line 777: */
 /* line 778: */
 /* line 779: */
 /* line 780: */
EKGBSIM_printeventequals = (-1);
 /* line 781: */
FKGBSIM_printeventbecomes = (-2);
 /* line 783: */
 /* line 813: */
 /* line 814: */
 /* line 819: */
 /* line 830: */
 /* line 852: */
 /* line 886: */
 /* line 887: */
 /* line 967: */
 /* line 1103: */
 /* line 1118: */
 /* line 1189: */
 /* line 1256: */
 /* line 1293: */
 /* line 1313: */
 /* line 1386: */
 /* line 1404: */
 /* line 1438: */
 /* line 1447: */
 /* line 1449: */
 /* line 1473: */
/*SKIP*/;
A_PROC_EXIT(DECS simmonitor);
} 
#undef NL
/* end of translation of ./a68files/simmonitor.a68 */
