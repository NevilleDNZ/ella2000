
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
/* UNAME:LTAAOSL */
#include "Asupport.h"
struct A68t32 ;
struct A68t33 ;

A_PROCEDURE(A68_VOID ,A68t31,(struct A68t32 ,struct A68t33 ),(struct A68t32 ,struct A68t33 ,void *));
typedef struct A68t31  A68_31 ;    /* PROC(MODE32,MODE33) VOID */
struct A68t32{
A68_INT  Number;
A_PAD_INT(PAD_1)
struct A68t34 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_2)
};
typedef struct A68t32  A68_32 ;    /* STRUCT(INT,REF MODE34,BITS)  */
A_VECTOR(A68_VC ,A68t33);
typedef struct A68t33  A68_33 ;    /* VECTOR [] MODE26 */
A_VECTOR(struct A68t36 ,A68t35);
typedef struct A68t35  A68_35 ;    /* VECTOR [] MODE36 */
struct A68t36{
struct A68t32  Msgno;
A68_VC  Text;
};
typedef struct A68t36  A68_36 ;    /* STRUCT(MODE32,REF MODE26)  */
struct A68t34{
A68_VC  Name;
struct A68t35  Messages;
};
typedef struct A68t34  A68_34 ;    /* STRUCT(REF MODE26,REF MODE35)  */
struct A68t37{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t37  A68_37 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t38{
A68_INT  Status;
A_PAD_INT(PAD_3)
};
typedef struct A68t38  A68_38 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_BOOL ,A68t39,(struct A68t38 ,struct A68t38 ),(struct A68t38 ,struct A68t38 ,void *));
typedef struct A68t39  A68_39 ;    /* PROC(MODE38,MODE38) BOOL */
A_ISTRUCT(A68_CHAR ,4,A68t41);
typedef struct A68t41  A68_41 ;    /* STRUCT 4 CHAR */
struct A68t40{
struct A68t41  Access;
A_PAD_ISTRUCT(A68_41 ,PAD_4)
};
typedef struct A68t40  A68_40 ;    /* STRUCT(MODE41)  */

A_PROCEDURE(A68_VOID ,A68t42,(struct A68t37 *,A68_VC *),(struct A68t37 *,A68_VC *,void *));
typedef struct A68t42  A68_42 ;    /* PROC(REF MODE37) MODE26 */

A_PROCEDURE(struct A68t37 *,A68t43,(A68_VC ,struct A68t40 ,struct A68t31 ),(A68_VC ,struct A68t40 ,struct A68t31 ,void *));
typedef struct A68t43  A68_43 ;    /* PROC(MODE26,MODE40,MODE31) REF MODE37 */

A_PROCEDURE(A68_VOID ,A68t44,(struct A68t37 *,struct A68t31 ),(struct A68t37 *,struct A68t31 ,void *));
typedef struct A68t44  A68_44 ;    /* PROC(REF MODE37,MODE31) VOID */

A_PROCEDURE(A68_VOID ,A68t45,(struct A68t37 *,A68_VC ,A68_INT *,struct A68t31 ,struct A68t38 *),(struct A68t37 *,A68_VC ,A68_INT *,struct A68t31 ,struct A68t38 *,void *));
typedef struct A68t45  A68_45 ;    /* PROC(REF MODE37,REF MODE26,REF INT,MODE31) MODE38 */

A_PROCEDURE(A68_VOID ,A68t46,(struct A68t37 *,A68_VC ,struct A68t31 ,struct A68t38 *),(struct A68t37 *,A68_VC ,struct A68t31 ,struct A68t38 *,void *));
typedef struct A68t46  A68_46 ;    /* PROC(REF MODE37,MODE26,MODE31) MODE38 */

A_PROCEDURE(A68_VOID ,A68t47,(struct A68t37 *,A68_LINT ,struct A68t31 ,struct A68t38 *),(struct A68t37 *,A68_LINT ,struct A68t31 ,struct A68t38 *,void *));
typedef struct A68t47  A68_47 ;    /* PROC(REF MODE37,LONG INT,MODE31) MODE38 */

A_PROCEDURE(A68_VOID ,A68t48,(struct A68t37 *,A68_LINT *,struct A68t31 ,struct A68t38 *),(struct A68t37 *,A68_LINT *,struct A68t31 ,struct A68t38 *,void *));
typedef struct A68t48  A68_48 ;    /* PROC(REF MODE37,REF LONG INT,MODE31) MODE38 */

A_PROCEDURE(A68_VOID ,A68t49,(struct A68t37 *,struct A68t31 ,struct A68t38 *),(struct A68t37 *,struct A68t31 ,struct A68t38 *,void *));
typedef struct A68t49  A68_49 ;    /* PROC(REF MODE37,MODE31) MODE38 */

A_PROCEDURE(A68_VOID ,A68t50,(A68_VC ,struct A68t31 ,struct A68t38 *),(A68_VC ,struct A68t31 ,struct A68t38 *,void *));
typedef struct A68t50  A68_50 ;    /* PROC(MODE26,MODE31) MODE38 */

A_PROCEDURE(A68_VOID ,A68t51,(A68_VC ,A68_VC ,struct A68t31 ,struct A68t38 *),(A68_VC ,A68_VC ,struct A68t31 ,struct A68t38 *,void *));
typedef struct A68t51  A68_51 ;    /* PROC(MODE26,MODE26,MODE31) MODE38 */

A_PROCEDURE(A68_VOID ,A68t52,(A68_VC ,A68_VC ,struct A68t31 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t31 ,A68_VC *,void *));
typedef struct A68t52  A68_52 ;    /* PROC(MODE26,MODE26,MODE31) MODE26 */
struct A68t53{
A68_SBITS  Permissions;
A_PAD_SBITS(PAD_5)
A68_LBITS  Inode;
A_PAD_LBITS(PAD_6)
A68_SINT  Device;
A_PAD_SINT(PAD_7)
A68_SINT  Links;
A_PAD_SINT(PAD_8)
A68_SBITS  Owning_user;
A_PAD_SBITS(PAD_9)
A68_SBITS  Owning_group;
A_PAD_SBITS(PAD_10)
A68_LINT  Size;
A_PAD_LINT(PAD_11)
A68_LINT  Accessed;
A_PAD_LINT(PAD_12)
A68_LINT  Data_modified;
A_PAD_LINT(PAD_13)
A68_LINT  Status_modified;
A_PAD_LINT(PAD_14)
};
typedef struct A68t53  A68_53 ;    /* STRUCT(SHORT BITS,LONG BITS,SHORT INT,SHORT INT,SHORT BITS,SHORT BITS,LONG INT,LONG INT,LONG INT,LONG INT)  */
struct A68t55 ;

A_PROCEDURE(struct A68t53 *,A68t54,(struct A68t55 ,struct A68t31 ),(struct A68t55 ,struct A68t31 ,void *));
typedef struct A68t54  A68_54 ;    /* PROC(MODE55,MODE31) REF MODE53 */
struct A68t55 { A68_INT mode; union {
struct A68t37 * mode1;
A68_VC  mode2;
} data; };
typedef struct A68t55  A68_55 ;    /* UNION(REF MODE37,MODE26)  */

A_PROCEDURE(A68_BOOL ,A68t56,(struct A68t37 *),(struct A68t37 *,void *));
typedef struct A68t56  A68_56 ;    /* PROC(REF MODE37) BOOL */

A_PROCEDURE(A68_BITS *,A68t57,(A68_VC ,struct A68t31 ),(A68_VC ,struct A68t31 ,void *));
typedef struct A68t57  A68_57 ;    /* PROC(MODE26,MODE31) REF BITS */

A_PROCEDURE(A68_VOID ,A68t58,(A68_BITS *,struct A68t31 ),(A68_BITS *,struct A68t31 ,void *));
typedef struct A68t58  A68_58 ;    /* PROC(REF BITS,MODE31) VOID */

A_PROCEDURE(A68_VOID ,A68t59,(A68_BITS *,struct A68t31 ,A68_VC *),(A68_BITS *,struct A68t31 ,A68_VC *,void *));
typedef struct A68t59  A68_59 ;    /* PROC(REF BITS,MODE31) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t60,(A68_VC *),(A68_VC *,void *));
typedef struct A68t60  A68_60 ;    /* PROC MODE26 */

A_PROCEDURE(A68_VOID ,A68t61,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t61  A68_61 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_LINT ,A68t62,(void),(void *));
typedef struct A68t62  A68_62 ;    /* PROC LONG INT */

A_PROCEDURE(A68_VOID ,A68t63,(A68_LINT ,A68_VC *),(A68_LINT ,A68_VC *,void *));
typedef struct A68t63  A68_63 ;    /* PROC(LONG INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t64,(A68_INT ),(A68_INT ,void *));
typedef struct A68t64  A68_64 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_INT ,A68t65,(A68_VC ,struct A68t31 ),(A68_VC ,struct A68t31 ,void *));
typedef struct A68t65  A68_65 ;    /* PROC(MODE26,MODE31) INT */

A_PROCEDURE(A68_INT ,A68t66,(void),(void *));
typedef struct A68t66  A68_66 ;    /* PROC INT */
struct A68t67{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t67  A68_67 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t68,(A68_VC ,A68_VC ,struct A68t31 ,struct A68t67 *),(A68_VC ,A68_VC ,struct A68t31 ,struct A68t67 *,void *));
typedef struct A68t68  A68_68 ;    /* PROC(MODE26,MODE26,MODE31) MODE67 */

A_PROCEDURE(A68_VOID ,A68t69,(struct A68t33 *),(struct A68t33 *,void *));
typedef struct A68t69  A68_69 ;    /* PROC MODE33 */

A_PROCEDURE(A68_VOID ,A68t70,(A68_VC ,struct A68t31 ,struct A68t33 *),(A68_VC ,struct A68t31 ,struct A68t33 *,void *));
typedef struct A68t70  A68_70 ;    /* PROC(MODE26,MODE31) MODE33 */
struct A68t72 ;

A_PROCEDURE(A68_VOID ,A68t71,(struct A68t72 ,struct A68t31 ,struct A68t31 ),(struct A68t72 ,struct A68t31 ,struct A68t31 ,void *));
typedef struct A68t71  A68_71 ;    /* PROC(MODE72,MODE31,MODE31) VOID */
A_VECTOR(A68_INT ,A68t72);
typedef struct A68t72  A68_72 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_VOID ,A68t73,(struct A68t72 ,struct A68t31 ),(struct A68t72 ,struct A68t31 ,void *));
typedef struct A68t73  A68_73 ;    /* PROC(MODE72,MODE31) VOID */

A_PROCEDURE(A68_VOID ,A68t74,(A68_INT ,struct A68t31 ,struct A68t31 *),(A68_INT ,struct A68t31 ,struct A68t31 *,void *));
typedef struct A68t74  A68_74 ;    /* PROC(INT,MODE31) MODE31 */

A_PROCEDURE(A68_VOID ,A68t75,(void),(void *));
typedef struct A68t75  A68_75 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t76,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t76  A68_76 ;    /* PROC(BITS) VOID */
struct A68t78 ;

A_PROCEDURE(A68_VOID ,A68t77,(struct A68t78 ),(struct A68t78 ,void *));
typedef struct A68t77  A68_77 ;    /* PROC(MODE78) VOID */

A_PROCEDURE(A68_VOID ,A68t78,(A68_VC ),(A68_VC ,void *));
typedef struct A68t78  A68_78 ;    /* PROC(MODE26) VOID */
struct A68t79{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_15)
};
typedef struct A68t79  A68_79 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t80,(A68_BOOL ,struct A68t79 *),(A68_BOOL ,struct A68t79 *,void *));
typedef struct A68t80  A68_80 ;    /* PROC(BOOL) MODE79 */
struct A68t82 ;

A_PROCEDURE(A68_VOID ,A68t81,(struct A68t82 ,struct A68t31 ),(struct A68t82 ,struct A68t31 ,void *));
typedef struct A68t81  A68_81 ;    /* PROC(MODE82,MODE31) VOID */
A_VECTOR(struct A68t79 ,A68t82);
typedef struct A68t82  A68_82 ;    /* VECTOR [] MODE79 */

A_PROCEDURE(A68_VOID ,A68t83,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t83  A68_83 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t84,(A68_CHAR ,A68_VC *),(A68_CHAR ,A68_VC *,void *));
typedef struct A68t84  A68_84 ;    /* PROC(CHAR) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t85,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t85  A68_85 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t86,(struct A68t33 ,A68_VC *),(struct A68t33 ,A68_VC *,void *));
typedef struct A68t86  A68_86 ;    /* PROC(MODE33) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t87,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t87  A68_87 ;    /* PROC(INT) MODE26 */
struct A68t89 ;

A_PROCEDURE(A68_VOID ,A68t88,(struct A68t89 ,A68_INT ,A68_VC *),(struct A68t89 ,A68_INT ,A68_VC *,void *));
typedef struct A68t88  A68_88 ;    /* PROC(MODE89,INT) REF MODE26 */
struct A68t89 { A68_INT mode; union {
A68_SINT  mode1;
A68_INT  mode2;
A68_LINT  mode3;
A68_REAL  mode4;
} data; };
typedef struct A68t89  A68_89 ;    /* UNION(SHORT INT,INT,LONG INT,REAL)  */

A_PROCEDURE(A68_VOID ,A68t90,(struct A68t89 ,A68_INT ,A68_INT ,A68_VC *),(struct A68t89 ,A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t90  A68_90 ;    /* PROC(MODE89,INT,INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t91,(struct A68t89 ,A68_INT ,A68_INT ,A68_INT ,A68_VC *),(struct A68t89 ,A68_INT ,A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t91  A68_91 ;    /* PROC(MODE89,INT,INT,INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t92,(A68_BOOL ,struct A68t72 *),(A68_BOOL ,struct A68t72 *,void *));
typedef struct A68t92  A68_92 ;    /* PROC(BOOL) MODE72 */

A_PROCEDURE(A68_VOID ,A68t94,(A68_VC ,A68_INT *,struct A68t38 *),(A68_VC ,A68_INT *,struct A68t38 *,void *));
typedef struct A68t94  A68_94 ;    /* PROC(REF MODE26,REF INT) MODE38 */
struct A68t93{
A68_INT  Charnumber;
A_PAD_INT(PAD_16)
A68_INT  Linenumber;
A_PAD_INT(PAD_17)
A68_INT  Indent;
A_PAD_INT(PAD_18)
A68_INT  Width;
A_PAD_INT(PAD_19)
A68_INT  Sizeincr;
A_PAD_INT(PAD_20)
struct A68t38  Status;
A68_VC  Buffer;
A68_BOOL  Buffered;
A_PAD_BOOL(PAD_21)
A68_BOOL  Separate;
A_PAD_BOOL(PAD_22)
A68_BOOL  Input;
A_PAD_BOOL(PAD_23)
struct A68t78  Putbuffer;
struct A68t94  Getbuffer;
};
typedef struct A68t93  A68_93 ;    /* STRUCT(INT,INT,INT,INT,INT,MODE38,REF MODE26,BOOL,BOOL,BOOL,MODE78,MODE94)  */

A_PROCEDURE(A68_INT ,A68t95,(struct A68t93 *),(struct A68t93 *,void *));
typedef struct A68t95  A68_95 ;    /* PROC(REF MODE93) INT */

A_PROCEDURE(A68_INT ,A68t96,(struct A68t93 *,A68_INT ),(struct A68t93 *,A68_INT ,void *));
typedef struct A68t96  A68_96 ;    /* PROC(REF MODE93,INT) INT */

A_PROCEDURE(A68_VOID ,A68t97,(struct A68t93 *),(struct A68t93 *,void *));
typedef struct A68t97  A68_97 ;    /* PROC(REF MODE93) VOID */
struct A68t99 ;
struct A68t100 ;

A_PROCEDURE(struct A68t93 *,A68t98,(struct A68t99 ,struct A68t100 ),(struct A68t99 ,struct A68t100 ,void *));
typedef struct A68t98  A68_98 ;    /* PROC(MODE99,MODE100) REF MODE93 */
struct A68t99 { A68_INT mode; union {
A68_INT  mode1;
A68_VC  mode2;
} data; };
typedef struct A68t99  A68_99 ;    /* UNION(INT,REF MODE26)  */
struct A68t100 { A68_INT mode; union {
struct A68t78  mode1;
struct A68t94  mode2;
} data; };
typedef struct A68t100  A68_100 ;    /* UNION(MODE78,MODE94)  */

A_PROCEDURE(A68_VOID ,A68t101,(struct A68t75 ),(struct A68t75 ,void *));
typedef struct A68t101  A68_101 ;    /* PROC(MODE75) VOID */

A_PROCEDURE(A68_VOID ,A68t102,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t102  A68_102 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,57,A68t103);
typedef struct A68t103  A68_103 ;    /* STRUCT 57 CHAR */

A_PROCEDURE(A68_VOID ,A68t104,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t104  A68_104 ;    /* PROC(REF MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t105,(struct A68t72 ,struct A68t72 *),(struct A68t72 ,struct A68t72 *,void *));
typedef struct A68t105  A68_105 ;    /* PROC(MODE72) REF MODE72 */

A_PROCEDURE(A68_VOID ,A68t106,(A68_INT ,struct A68t72 *),(A68_INT ,struct A68t72 *,void *));
typedef struct A68t106  A68_106 ;    /* PROC(INT) REF MODE72 */

A_PROCEDURE(A68_VOID ,A68t107,(A68_VC ),(A68_VC ,void *));
typedef struct A68t107  A68_107 ;    /* PROC(REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t108,(struct A68t72 ),(struct A68t72 ,void *));
typedef struct A68t108  A68_108 ;    /* PROC(REF MODE72) VOID */

A_PROCEDURE(A68_VOID ,A68t109,(A68_VC ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t109  A68_109 ;    /* PROC(MODE26,INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t110,(A68_CHAR ,A68_INT ,A68_VC *),(A68_CHAR ,A68_INT ,A68_VC *,void *));
typedef struct A68t110  A68_110 ;    /* PROC(CHAR,INT) MODE26 */
struct A68t111 { A68_INT mode; union {
A68_BITS  mode1;
A68_INT  mode2;
A68_SBITS  mode3;
A68_SINT  mode4;
A68_CHAR  mode5;
} data; };
typedef struct A68t111  A68_111 ;    /* UNION(BITS,INT,SHORT BITS,SHORT INT,CHAR)  */

A_PROCEDURE(A68_VOID ,A68t112,(struct A68t111 ,A68_VC *),(struct A68t111 ,A68_VC *,void *));
typedef struct A68t112  A68_112 ;    /* PROC(MODE111) MODE26 */
A_ISTRUCT(A68_CHAR ,16,A68t113);
typedef struct A68t113  A68_113 ;    /* STRUCT 16 CHAR */
struct A68t114{
A68_INT  Int;
A_PAD_INT(PAD_24)
A68_INT  Width;
A_PAD_INT(PAD_25)
};
typedef struct A68t114  A68_114 ;    /* STRUCT(INT,INT)  */
struct A68t115{
A68_VC  Str;
A68_INT  Width;
A_PAD_INT(PAD_26)
};
typedef struct A68t115  A68_115 ;    /* STRUCT(MODE26,INT)  */
struct A68t116{
A68_VC  Str;
A68_INT  Justify;
A_PAD_INT(PAD_27)
};
typedef struct A68t116  A68_116 ;    /* STRUCT(MODE26,INT)  */
struct A68t117{
A68_INT  Tab;
A_PAD_INT(PAD_28)
};
typedef struct A68t117  A68_117 ;    /* STRUCT(INT)  */
struct A68t118{
A68_INT  Pos;
A_PAD_INT(PAD_29)
};
typedef struct A68t118  A68_118 ;    /* STRUCT(INT)  */
struct A68t119{
A68_INT  After;
A_PAD_INT(PAD_30)
};
typedef struct A68t119  A68_119 ;    /* STRUCT(INT)  */
struct A68t120{
A68_INT  Spaces;
A_PAD_INT(PAD_31)
};
typedef struct A68t120  A68_120 ;    /* STRUCT(INT)  */
struct A68t121{
A68_INT  Lines;
A_PAD_INT(PAD_32)
};
typedef struct A68t121  A68_121 ;    /* STRUCT(INT)  */
struct A68t122{
A68_INT  Indent;
A_PAD_INT(PAD_33)
};
typedef struct A68t122  A68_122 ;    /* STRUCT(INT)  */
A_VECTOR(A68_BITS ,A68t124);
typedef struct A68t124  A68_124 ;    /* VECTOR [] BITS */
A_VECTOR(A68_BOOL ,A68t125);
typedef struct A68t125  A68_125 ;    /* VECTOR [] BOOL */
A_VECTOR(A68_REAL ,A68t126);
typedef struct A68t126  A68_126 ;    /* VECTOR [] REAL */
A_STRAIGHT(A68_VOID,A68t127);
typedef struct A68t127  A68_127 ;    /* STRAIGHT MODE123 */
struct A68t123 { A68_INT mode; union {
A68_INT  mode1;
struct A68t72  mode2;
A68_BITS  mode3;
struct A68t124  mode4;
A68_SBITS  mode5;
A68_CHAR  mode6;
A68_VC  mode7;
A68_BOOL  mode8;
struct A68t125  mode9;
A68_REAL  mode10;
struct A68t126  mode11;
struct A68t97  mode12;
struct A68t114  mode13;
struct A68t115  mode14;
struct A68t116  mode15;
struct A68t117  mode16;
struct A68t118  mode17;
struct A68t119  mode18;
struct A68t120  mode19;
struct A68t121  mode20;
struct A68t122  mode21;
struct A68t127  mode22;
} data; };
typedef struct A68t123  A68_123 ;    /* UNION(INT,MODE72,BITS,MODE124,SHORT BITS,CHAR,MODE26,BOOL,MODE125,REAL,MODE126,MODE97,MODE114,MODE115,MODE116,MODE117,MODE118,MODE119,MODE120,MODE121,MODE122,MODE127)  */

A_PROCEDURE(A68_VOID ,A68t128,(A68_BOOL ,struct A68t115 *),(A68_BOOL ,struct A68t115 *,void *));
typedef struct A68t128  A68_128 ;    /* PROC(BOOL) MODE115 */

A_PROCEDURE(A68_VOID ,A68t129,(A68_BOOL ,struct A68t116 *),(A68_BOOL ,struct A68t116 *,void *));
typedef struct A68t129  A68_129 ;    /* PROC(BOOL) MODE116 */
#define A68_130  A68_VC 
#define A68t130 A68t26            /* FLEX VECTOR [] CHAR */
#define A68_131  A68_115 
#define A68t131 A68t115            /* STRUCT(MODE130,INT)  */
#define A68_132  A68_116 
#define A68t132 A68t116            /* STRUCT(MODE130,INT)  */
A_ISTRUCT(A68_CHAR ,512,A68t133);
typedef struct A68t133  A68_133 ;    /* STRUCT 512 CHAR */

A_PROCEDURE(A68_VOID ,A68t134,(A68_INT ,A68_INT ,struct A68t114 *),(A68_INT ,A68_INT ,struct A68t114 *,void *));
typedef struct A68t134  A68_134 ;    /* PROC(INT,INT) MODE114 */

A_PROCEDURE(A68_VOID ,A68t135,(A68_VC ,A68_INT ,struct A68t115 *),(A68_VC ,A68_INT ,struct A68t115 *,void *));
typedef struct A68t135  A68_135 ;    /* PROC(MODE26,INT) MODE115 */

A_PROCEDURE(A68_VOID ,A68t136,(A68_VC ,A68_INT ,struct A68t116 *),(A68_VC ,A68_INT ,struct A68t116 *,void *));
typedef struct A68t136  A68_136 ;    /* PROC(MODE26,INT) MODE116 */

A_PROCEDURE(A68_VOID ,A68t137,(A68_INT ,struct A68t117 *),(A68_INT ,struct A68t117 *,void *));
typedef struct A68t137  A68_137 ;    /* PROC(INT) MODE117 */

A_PROCEDURE(A68_VOID ,A68t138,(A68_INT ,struct A68t118 *),(A68_INT ,struct A68t118 *,void *));
typedef struct A68t138  A68_138 ;    /* PROC(INT) MODE118 */

A_PROCEDURE(A68_VOID ,A68t139,(A68_INT ,struct A68t119 *),(A68_INT ,struct A68t119 *,void *));
typedef struct A68t139  A68_139 ;    /* PROC(INT) MODE119 */

A_PROCEDURE(A68_VOID ,A68t140,(A68_INT ,struct A68t120 *),(A68_INT ,struct A68t120 *,void *));
typedef struct A68t140  A68_140 ;    /* PROC(INT) MODE120 */

A_PROCEDURE(A68_VOID ,A68t141,(A68_INT ,struct A68t121 *),(A68_INT ,struct A68t121 *,void *));
typedef struct A68t141  A68_141 ;    /* PROC(INT) MODE121 */

A_PROCEDURE(A68_VOID ,A68t142,(A68_INT ,struct A68t122 *),(A68_INT ,struct A68t122 *,void *));
typedef struct A68t142  A68_142 ;    /* PROC(INT) MODE122 */

A_PROCEDURE(A68_VOID ,A68t143,(struct A68t93 *,A68_VC ),(struct A68t93 *,A68_VC ,void *));
typedef struct A68t143  A68_143 ;    /* PROC(REF MODE93,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t144,(struct A68t93 *,A68_REAL ,A68_INT ,A68_INT ),(struct A68t93 *,A68_REAL ,A68_INT ,A68_INT ,void *));
typedef struct A68t144  A68_144 ;    /* PROC(REF MODE93,REAL,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t145,(struct A68t93 *,A68_INT ,A68_INT ),(struct A68t93 *,A68_INT ,A68_INT ,void *));
typedef struct A68t145  A68_145 ;    /* PROC(REF MODE93,INT,INT) VOID */
A_ISTRUCT(A68_CHAR ,32,A68t146);
typedef struct A68t146  A68_146 ;    /* STRUCT 32 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t147);
typedef struct A68t147  A68_147 ;    /* STRUCT 10 CHAR */

A_PROCEDURE(A68_VOID ,A68t148,(struct A68t93 *,A68_BITS ,A68_INT ),(struct A68t93 *,A68_BITS ,A68_INT ,void *));
typedef struct A68t148  A68_148 ;    /* PROC(REF MODE93,BITS,INT) VOID */
A_VECTOR(struct A68t123 ,A68t149);
typedef struct A68t149  A68_149 ;    /* VECTOR [] MODE123 */

A_PROCEDURE(A68_VOID ,A68t150,(struct A68t93 *,struct A68t149 ),(struct A68t93 *,struct A68t149 ,void *));
typedef struct A68t150  A68_150 ;    /* PROC(REF MODE93,MODE149) VOID */

A_PROCEDURE(A68_VOID ,A68t151,(A68_VC ,struct A68t149 ,A68_VC *),(A68_VC ,struct A68t149 ,A68_VC *,void *));
typedef struct A68t151  A68_151 ;    /* PROC(REF MODE26,MODE149) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t152,(struct A68t93 *,A68_VC *),(struct A68t93 *,A68_VC *,void *));
typedef struct A68t152  A68_152 ;    /* PROC(REF MODE93) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t153,(struct A68t149 ,A68_VC *),(struct A68t149 ,A68_VC *,void *));
typedef struct A68t153  A68_153 ;    /* PROC(MODE149) REF MODE26 */
A_ISTRUCT(A68_CHAR ,501,A68t154);
typedef struct A68t154  A68_154 ;    /* STRUCT 501 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from iobasics --- */
extern A68_83  LNAAOSL_anonymous;
extern A68_VC  UOAAOSL_space_str;
extern A68_VOID  LRAAOSL_newline(struct A68t93 *);
extern A68_VOID  SPAAOSL_nullgetbuffer(A68_VC ,A68_INT *,A68_38 *);
extern A68_VOID  PPAAOSL_nullputbuffer(A68_VC );
/* --- End of imports from iobasics --- */


/* --- Imports from numberstr --- */
extern A68_VOID  XDAAOSL_float(struct A68t89 ,A68_INT ,A68_INT ,A68_INT ,A68_VC *);
/* --- End of imports from numberstr --- */


/* --- Imports from strops --- */
extern A68_VOID  ZAAAOSI_makervc(A68_VC ,A68_VC *);
/* --- End of imports from strops --- */


/* --- Imports from osif --- */
#include <errno.h>

#define XFBAOSI_errno errno
extern A68_38  DPBAOSI_io_ok;
#include <stdlib.h>
#define EXIT(status) exit(A_INT_int(status))

#define BZBAOSI_exit EXIT
extern int A_argc;
extern char **A_argv;
#define A_prelude(argc,argv) A_argc=argc; A_argv = argv

#define VPCAOSI_prelude A_prelude
#include <signal.h>

#define TECAOSI_sighup SIGHUP
#include <signal.h>

#define UECAOSI_sigint SIGINT
#include <signal.h>

#define VECAOSI_sigquit SIGQUIT
#include <signal.h>

#define WECAOSI_sigill SIGILL
#include <signal.h>

#define XECAOSI_sigtrap 5
#include <signal.h>

#define YECAOSI_sigabrt SIGABRT
#include <signal.h>

#define ZECAOSI_sigemt 7
#include <signal.h>

#define AFCAOSI_sigfpe SIGFPE
#include <signal.h>

#define BFCAOSI_sigkill SIGKILL
#include <signal.h>

#define CFCAOSI_sigbus 10
#include <signal.h>

#define DFCAOSI_sigsegv SIGSEGV
#include <signal.h>

#define EFCAOSI_sigsys 12
#include <signal.h>

#define FFCAOSI_sigpipe SIGPIPE
#include <signal.h>

#define GFCAOSI_sigalrm SIGALRM
#include <signal.h>

#define HFCAOSI_sigterm SIGTERM
#include <signal.h>

#define IFCAOSI_sigurg 16
#include <signal.h>

#define JFCAOSI_sigstop SIGSTOP
#include <signal.h>

#define KFCAOSI_sigtstp SIGTSTP
#include <signal.h>

#define LFCAOSI_sigcont SIGCONT
#include <signal.h>

#define MFCAOSI_sigchld SIGCHLD
#include <signal.h>

#define NFCAOSI_sigttin SIGTTIN
#include <signal.h>

#define OFCAOSI_sigttou SIGTTOU
#include <signal.h>

#define PFCAOSI_sigio 23
#include <signal.h>

#define QFCAOSI_sigxcpu 24
#include <signal.h>

#define RFCAOSI_sigxfsz 25
#include <signal.h>

#define SFCAOSI_sigvtalrm 26
#include <signal.h>

#define TFCAOSI_sigprof 27
#include <signal.h>

#define UFCAOSI_sigwinch 28
#include <signal.h>

#define VFCAOSI_siglost 29
#include <signal.h>

#define WFCAOSI_sigusr1 SIGUSR1
#include <signal.h>

#define XFCAOSI_sigusr2 SIGUSR2
#include "Alibrary.h"

#define PBCAOSI_garbage_collect Agc_collect
#include "Alibrary.h"

#define KDCAOSI_alwayscollect A_ALWAYS_COLLECT
#include "Alibrary.h"

#define LDCAOSI_alwaysgrowheap A_ALWAYS_GROW_HEAP
#include "Alibrary.h"

#define MDCAOSI_defaultpolicy A_DEFAULT_POLICY
/* --- End of imports from osif --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void GNAAOSL(void);   /* iobasics */
extern void VAAAOSL(void);   /* numberstr */
extern void BAAAOSI(void);   /* strops */
extern void VSCAOSI(void);   /* osif */
/* --- end of DECS initialisation functions --- */
static A68_103   PTAAOSL = {"$Id: putstrings.a68,v 34.2 1995/03/29 13:02:18 ella Exp $"}; 
A_GISVEC(A68_VC ,QTAAOSL,PTAAOSL,57)
#define KWAAOSL_mask 0XfU
static A68_113   VWAAOSL = {"0123456789ABCDEF"}; 
A_GISVEC(A68_VC ,WWAAOSL,VWAAOSL,16)
A68_128  CXAAOSL_anonymous;
A68_129  DXAAOSL_anonymous;
static A68_133  SXAAOSL_sp;
A68_CHAR * TXAAOSL_ss;
static A68_147   NCBAOSL = {"0987654321"}; 
static A68_147   PCBAOSL = {"0123456789"}; 
static A68_113   GEBAOSL = {"0123456789ABCDEF"}; 
A_GISVEC(A68_VC ,KEBAOSL,GEBAOSL,16)
A68_78  BJBAOSL_null_strproc;
typedef struct   /* env of non-global proc */
{
A68_72  Ints;
} WTAAOSL_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} GUAAOSL_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  A;
A68_INT  N;
A_PAD_INT(PAD_34)
} BVAAOSL_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  N;
A_PAD_INT(PAD_35)
} RVAAOSL_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  JWAAOSL_n_digits;
A_PAD_INT(PAD_36)
} OWAAOSL_generator;
typedef struct   /* env of non-global proc */
{
A68_120  XHBAOSL_s;
} FIBAOSL_generator;
typedef struct   /* env of non-global proc */
{
A68_93 * CKBAOSL_ch;
A68_jmp_buf  VJBAOSL_restart;
A_PAD_jmp_buf(PAD_37)
} GKBAOSL_putbuffer;
typedef struct   /* env of non-global proc */
{
A68_93 * CKBAOSL_ch;
} KKBAOSL_generator;

A68_VOID  STAAOSL_makervi(A68_72  Ints, A68_72  *ReturnedValue);

A_STATIC A68_VOID  VTAAOSL_generator(A68_BOOL  TTAAOSL_anonymous, A68_72  *ReturnedValue, void *NonLocals);

A68_VOID  CUAAOSL_makervi(A68_INT  I, A68_72  *ReturnedValue);

A_STATIC A68_VOID  FUAAOSL_generator(A68_BOOL  DUAAOSL_anonymous, A68_72  *ReturnedValue, void *NonLocals);

A68_VOID  OUAAOSL_clear(A68_VC  Line);

A68_VOID  SUAAOSL_clear(A68_72  Ints);

A68_VOID  XUAAOSL_(A68_VC  A, A68_INT  N, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  AVAAOSL_generator(A68_BOOL  YUAAOSL_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  NVAAOSL_(A68_CHAR  A, A68_INT  N, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  QVAAOSL_generator(A68_BOOL  OVAAOSL_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  AWAAOSL_hexchars(A68_111  B, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  NWAAOSL_generator(A68_BOOL  LWAAOSL_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  FXAAOSL_generator(A68_BOOL  EXAAOSL_anonymous, A68_115  *ReturnedValue);

A_STATIC A68_VOID  MXAAOSL_generator(A68_BOOL  LXAAOSL_anonymous, A68_116  *ReturnedValue);

A68_VOID  ZXAAOSL_intwidth(A68_INT  I, A68_INT  W, A68_114  *ReturnedValue);

A68_VOID  EYAAOSL_width(A68_VC  S, A68_INT  W, A68_115  *ReturnedValue);

A68_VOID  JYAAOSL_justify(A68_VC  S, A68_INT  J, A68_116  *ReturnedValue);

A68_VOID  NYAAOSL_tab(A68_INT  I, A68_117  *ReturnedValue);

A68_VOID  SYAAOSL_pos(A68_INT  I, A68_118  *ReturnedValue);

A68_VOID  XYAAOSL_after(A68_INT  I, A68_119  *ReturnedValue);

A68_VOID  CZAAOSL_spaces(A68_INT  I, A68_120  *ReturnedValue);

A68_VOID  HZAAOSL_lines(A68_INT  I, A68_121  *ReturnedValue);

A68_VOID  MZAAOSL_setindent(A68_INT  N, A68_122  *ReturnedValue);

A68_VOID  RZAAOSL_resetindent(A68_93 * Ch);

A68_VOID  UZAAOSL_writeline(A68_93 * Ch);

A68_VOID  GABAOSL_putstr(A68_93 * Ch, A68_VC  Str);

A68_VOID  WBBAOSL_putline(A68_93 * Ch, A68_VC  Line);

A68_VOID  BCBAOSL_add_real(A68_93 * Ch, A68_REAL  Re, A68_INT  Width, A68_INT  Digits);

A68_VOID  LCBAOSL_add_number(A68_93 * Ch, A68_INT  Int, A68_INT  Width);

A68_VOID  CEBAOSL_add_bits(A68_93 * Ch, A68_BITS  B, A68_INT  Leng);

A68_VOID  GFBAOSL_put(A68_93 * Ch, A68_149  Out);

A_STATIC A68_VOID  EIBAOSL_generator(A68_BOOL  CIBAOSL_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  FJBAOSL_putb(A68_VC  Buffer, A68_149  Line, A68_VC  *ReturnedValue);

A68_VOID  NJBAOSL_endput(A68_93 * Ch, A68_VC  *ReturnedValue);

A68_VOID  UJBAOSL_oneline(A68_149  Out, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  FKBAOSL_putbuffer(A68_VC  S, void *NonLocals);

A_STATIC A68_VOID  JKBAOSL_generator(A68_BOOL  HKBAOSL_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  JKBAOSL_generator(A68_BOOL  HKBAOSL_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((KKBAOSL_generator *)NonLocals)->x)
{ 
A68_VC  LKBAOSL;  /* clause result */
A68_VC  MKBAOSL;  /* OPERATORS - dynamic generator */
{ 
MKBAOSL.upb = ((*(&(NL(CKBAOSL_ch)->Buffer))).upb*2) ;
( HKBAOSL_anonymous? A_VLOC(A68_CHAR ,MKBAOSL): A_VHEAP(A68_CHAR ,MKBAOSL) );
LKBAOSL = MKBAOSL;
} 
*ReturnedValue = (LKBAOSL);
return;
} 
#undef NL

A_STATIC A68_VOID  VTAAOSL_generator(A68_BOOL  TTAAOSL_anonymous, A68_72  *ReturnedValue, void *NonLocals)
#define NL(x) (((WTAAOSL_generator *)NonLocals)->x)
{ 
A68_72  XTAAOSL;  /* clause result */
A68_72  YTAAOSL;  /* OPERATORS - dynamic generator */
{ 
YTAAOSL.upb = NL(Ints).upb ;
( TTAAOSL_anonymous? A_VLOC(A68_INT ,YTAAOSL): A_VHEAP(A68_INT ,YTAAOSL) );
XTAAOSL = YTAAOSL;
} 
*ReturnedValue = (XTAAOSL);
return;
} 
#undef NL

A_STATIC A68_VOID  FUAAOSL_generator(A68_BOOL  DUAAOSL_anonymous, A68_72  *ReturnedValue, void *NonLocals)
#define NL(x) (((GUAAOSL_generator *)NonLocals)->x)
{ 
A68_72  HUAAOSL;  /* clause result */
A68_72  IUAAOSL;  /* OPERATORS - dynamic generator */
{ 
IUAAOSL.upb = 1 ;
( DUAAOSL_anonymous? A_VLOC(A68_INT ,IUAAOSL): A_VHEAP(A68_INT ,IUAAOSL) );
HUAAOSL = IUAAOSL;
} 
*ReturnedValue = (HUAAOSL);
return;
} 
#undef NL

A_STATIC A68_VOID  AVAAOSL_generator(A68_BOOL  YUAAOSL_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((BVAAOSL_generator *)NonLocals)->x)
{ 
A68_VC  CVAAOSL;  /* clause result */
A68_VC  DVAAOSL;  /* OPERATORS - dynamic generator */
{ 
DVAAOSL.upb = (NL(A).upb*NL(N)) ;
( YUAAOSL_anonymous? A_VLOC(A68_CHAR ,DVAAOSL): A_VHEAP(A68_CHAR ,DVAAOSL) );
CVAAOSL = DVAAOSL;
} 
*ReturnedValue = (CVAAOSL);
return;
} 
#undef NL

A_STATIC A68_VOID  QVAAOSL_generator(A68_BOOL  OVAAOSL_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((RVAAOSL_generator *)NonLocals)->x)
{ 
A68_VC  SVAAOSL;  /* clause result */
A68_VC  TVAAOSL;  /* OPERATORS - dynamic generator */
{ 
TVAAOSL.upb = NL(N) ;
( OVAAOSL_anonymous? A_VLOC(A68_CHAR ,TVAAOSL): A_VHEAP(A68_CHAR ,TVAAOSL) );
SVAAOSL = TVAAOSL;
} 
*ReturnedValue = (SVAAOSL);
return;
} 
#undef NL

A_STATIC A68_VOID  NWAAOSL_generator(A68_BOOL  LWAAOSL_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((OWAAOSL_generator *)NonLocals)->x)
{ 
A68_VC  PWAAOSL;  /* clause result */
A68_VC  QWAAOSL;  /* OPERATORS - dynamic generator */
{ 
QWAAOSL.upb = NL(JWAAOSL_n_digits) ;
( LWAAOSL_anonymous? A_VLOC(A68_CHAR ,QWAAOSL): A_VHEAP(A68_CHAR ,QWAAOSL) );
PWAAOSL = QWAAOSL;
} 
*ReturnedValue = (PWAAOSL);
return;
} 
#undef NL

A_STATIC A68_VOID  EIBAOSL_generator(A68_BOOL  CIBAOSL_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((FIBAOSL_generator *)NonLocals)->x)
{ 
A68_VC  GIBAOSL;  /* clause result */
A68_VC  HIBAOSL;  /* OPERATORS - dynamic generator */
{ 
HIBAOSL.upb = NL(XHBAOSL_s).Spaces ;
( CIBAOSL_anonymous? A_VLOC(A68_CHAR ,HIBAOSL): A_VHEAP(A68_CHAR ,HIBAOSL) );
GIBAOSL = HIBAOSL;
} 
*ReturnedValue = (GIBAOSL);
return;
} 
#undef NL

A_STATIC A68_VOID  FKBAOSL_putbuffer(A68_VC  S, void *NonLocals)
#define NL(x) (((GKBAOSL_putbuffer *)NonLocals)->x)
{ 
A68_83  IKBAOSL_generator;   /* proc value of non-global proc */
A68_VC  NKBAOSL;  /* avoid structure result */
A68_VC * OKBAOSL;  /* YIELD */
A68_INT * PKBAOSL;  /* YIELD */
A_PROC_ENTRY(putbuffer);
 /* line 599: */
 /* line 600: */
{ 
A_CLOSURE( IKBAOSL_generator, JKBAOSL_generator, KKBAOSL_generator );
(( KKBAOSL_generator * ) ( IKBAOSL_generator.nonlocals )) -> CKBAOSL_ch = NL(CKBAOSL_ch);
A_CALLPROC(IKBAOSL_generator,(A68_FALSE, &NKBAOSL),(A68_FALSE, &NKBAOSL,(IKBAOSL_generator).nonlocals));
OKBAOSL = (&(NL(CKBAOSL_ch)->Buffer)) ;
(*OKBAOSL) = NKBAOSL;
 /* line 601: */
PKBAOSL = (&(NL(CKBAOSL_ch)->Width)) ;
(*PKBAOSL) = ((*(&(NL(CKBAOSL_ch)->Buffer))).upb-1);
 /* line 602: */
 /* line 603: */
siglongjmp(NL(VJBAOSL_restart).label,1);
} 
A_PROC_EXIT(putbuffer);
return;
} 
#undef NL

A68_VOID  STAAOSL_makervi(A68_72  Ints, A68_72  *ReturnedValue)
{ 
A68_92  UTAAOSL_generator;   /* proc value of non-global proc */
A68_72  ZTAAOSL;  /* clause result */
A68_72  AUAAOSL;  /* avoid structure result */
A_PROC_ENTRY(makervi);
A_CLOSURE( UTAAOSL_generator, VTAAOSL_generator, WTAAOSL_generator );
(( WTAAOSL_generator * ) ( UTAAOSL_generator.nonlocals )) -> Ints = Ints;
A_CALLPROC(UTAAOSL_generator,(A68_FALSE, &AUAAOSL),(A68_FALSE, &AUAAOSL,(UTAAOSL_generator).nonlocals));
A_VASSIGN2(Ints,AUAAOSL,A68_INT ) ;
ZTAAOSL = AUAAOSL;
A_PROC_EXIT(makervi);
*ReturnedValue = (ZTAAOSL);
return;
} 
#undef NL

A68_VOID  CUAAOSL_makervi(A68_INT  I, A68_72  *ReturnedValue)
{ 
A68_92  EUAAOSL_generator;   /* proc value of non-global proc */
A68_72  JUAAOSL;  /* clause result */
A68_72  KUAAOSL;  /* avoid structure result */
A68_72  LUAAOSL;  /* OPERATORS - scalar -> [] or VEC[] */
A68_72  MUAAOSL;  /* OPERATORS - assign op */
A_PROC_ENTRY(makervi);
A_CLOSURE( EUAAOSL_generator, FUAAOSL_generator, GUAAOSL_generator );
A_CALLPROC(EUAAOSL_generator,(A68_FALSE, &KUAAOSL),(A68_FALSE, &KUAAOSL,(EUAAOSL_generator).nonlocals));
MUAAOSL = A_HVEC(LUAAOSL,I,A68_INT ) ;
A_VASSIGN2(MUAAOSL,KUAAOSL,A68_INT ) ;
JUAAOSL = KUAAOSL;
A_PROC_EXIT(makervi);
*ReturnedValue = (JUAAOSL);
return;
} 
#undef NL

A68_VOID  OUAAOSL_clear(A68_VC  Line)
{ 
A68_CHAR * PUAAOSL_c;
A68_INT  QUAAOSL;  /* forall loop counter */
A_PROC_ENTRY(clear);
QUAAOSL = Line.upb -1;
PUAAOSL_c = Line.data;
for (;QUAAOSL-- >= 0;
(PUAAOSL_c++
) )
{
(*PUAAOSL_c) = ' ';
}
A_PROC_EXIT(clear);
return;
} 
#undef NL

A68_VOID  SUAAOSL_clear(A68_72  Ints)
{ 
A68_INT * TUAAOSL_i;
A68_INT  UUAAOSL;  /* forall loop counter */
A_PROC_ENTRY(clear);
UUAAOSL = Ints.upb -1;
TUAAOSL_i = Ints.data;
for (;UUAAOSL-- >= 0;
(TUAAOSL_i++
) )
{
(*TUAAOSL_i) = 0;
}
A_PROC_EXIT(clear);
return;
} 
#undef NL

A68_VOID  XUAAOSL_(A68_VC  A, A68_INT  N, A68_VC  *ReturnedValue)
{ 
A68_83  ZUAAOSL_generator;   /* proc value of non-global proc */
A68_VC  FVAAOSL;  /* avoid structure result */
A68_VC  EVAAOSL_ans;
A68_INT  GVAAOSL_i;
A68_INT  HVAAOSL;  /* to part of loop */
A68_VC  IVAAOSL;  /* OPERATORS - trim index */
A68_VC  JVAAOSL;  /* YIELD */
A68_VC  KVAAOSL;  /* clause result */
A_PROC_ENTRY(*);
 /* line 251: */
 /* line 252: */
{ 
A_CLOSURE( ZUAAOSL_generator, AVAAOSL_generator, BVAAOSL_generator );
(( BVAAOSL_generator * ) ( ZUAAOSL_generator.nonlocals )) -> A = A;
(( BVAAOSL_generator * ) ( ZUAAOSL_generator.nonlocals )) -> N = N;
A_CALLPROC(ZUAAOSL_generator,(A68_TRUE, &FVAAOSL),(A68_TRUE, &FVAAOSL,(ZUAAOSL_generator).nonlocals));
EVAAOSL_ans = FVAAOSL;
 /* line 253: */
HVAAOSL = N;
for ( GVAAOSL_i = 1;
GVAAOSL_i <= HVAAOSL;
GVAAOSL_i += 1 )
{ 
JVAAOSL = A_VTRIM(IVAAOSL,(EVAAOSL_ans),A_VTSCRIPT(&(IVAAOSL.upb),(EVAAOSL_ans).upb,(((N-1)*A.upb)+1),(N*A.upb))) ;
A_VASSIGN2(A,JVAAOSL,A68_CHAR );
}
 /* line 254: */
 /* line 255: */
KVAAOSL = EVAAOSL_ans;
} 
A_PROC_EXIT(*);
*ReturnedValue = (KVAAOSL);
return;
} 
#undef NL

A68_VOID  NVAAOSL_(A68_CHAR  A, A68_INT  N, A68_VC  *ReturnedValue)
{ 
A68_83  PVAAOSL_generator;   /* proc value of non-global proc */
A68_VC  VVAAOSL;  /* avoid structure result */
A68_VC  UVAAOSL_ans;
A68_CHAR * WVAAOSL_c;
A68_INT  XVAAOSL;  /* forall loop counter */
A68_VC  YVAAOSL;  /* clause result */
A_PROC_ENTRY(*);
 /* line 258: */
 /* line 259: */
{ 
A_CLOSURE( PVAAOSL_generator, QVAAOSL_generator, RVAAOSL_generator );
(( RVAAOSL_generator * ) ( PVAAOSL_generator.nonlocals )) -> N = N;
A_CALLPROC(PVAAOSL_generator,(A68_TRUE, &VVAAOSL),(A68_TRUE, &VVAAOSL,(PVAAOSL_generator).nonlocals));
UVAAOSL_ans = VVAAOSL;
 /* line 260: */
XVAAOSL = UVAAOSL_ans.upb -1;
WVAAOSL_c = UVAAOSL_ans.data;
for (;XVAAOSL-- >= 0;
(WVAAOSL_c++
) )
{
(*WVAAOSL_c) = A;
}
 /* line 261: */
 /* line 262: */
YVAAOSL = UVAAOSL_ans;
} 
A_PROC_EXIT(*);
*ReturnedValue = (YVAAOSL);
return;
} 
#undef NL

A68_VOID  AWAAOSL_hexchars(A68_111  B, A68_VC  *ReturnedValue)
{ 
A68_BITS  BWAAOSL_n;
A68_111  CWAAOSL;  /* united object - for case conformity */
A68_BITS  DWAAOSL_b;
A68_INT  EWAAOSL;  /* clause result */
A68_INT  FWAAOSL_i;
A68_SBITS  GWAAOSL_sb;
A68_SINT  HWAAOSL_si;
A68_CHAR  IWAAOSL_c;
A68_INT  JWAAOSL_n_digits;
A68_83  MWAAOSL_generator;   /* proc value of non-global proc */
A68_VC  SWAAOSL;  /* avoid structure result */
A68_VC  RWAAOSL_ans;
A68_INT  TWAAOSL_i;
A68_INT  UWAAOSL;  /* by part of loop */
A68_VC  XWAAOSL;  /* OPERATORS - simple index */
A68_INT  YWAAOSL;  /* YIELD */
A68_CHAR * ZWAAOSL;  /* YIELD */
A68_INT  AXAAOSL;  /* SHR */
A68_VC  BXAAOSL;  /* clause result */
A_PROC_ENTRY(hexchars);
 /* line 266: */
 /* line 267: */
{ 
 /* line 268: */
 /* line 269: */
CWAAOSL = B ;
switch ( CWAAOSL.mode )
{ 
case 1: /* BITS */
DWAAOSL_b = (CWAAOSL.data.mode1);
{ 
BWAAOSL_n = DWAAOSL_b;
 /* line 270: */
EWAAOSL = 8;
} 
break;
case 2: /* INT */
FWAAOSL_i = (CWAAOSL.data.mode2);
{ 
BWAAOSL_n = (A68_BITS )FWAAOSL_i;
 /* line 271: */
EWAAOSL = 8;
} 
break;
case 3: /* SHORT BITS */
GWAAOSL_sb = (CWAAOSL.data.mode3);
{ 
BWAAOSL_n = (A68_BITS )GWAAOSL_sb;
 /* line 272: */
EWAAOSL = 4;
} 
break;
case 4: /* SHORT INT */
HWAAOSL_si = (CWAAOSL.data.mode4);
{ 
BWAAOSL_n = (A68_BITS )(A68_SBITS )HWAAOSL_si;
 /* line 273: */
EWAAOSL = 4;
} 
break;
case 5: /* CHAR */
IWAAOSL_c = (CWAAOSL.data.mode5);
{ 
BWAAOSL_n = (A68_BITS )(A68_INT)(unsigned char)IWAAOSL_c;
 /* line 274: */
EWAAOSL = 2;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
JWAAOSL_n_digits = EWAAOSL;
 /* line 275: */
 /* line 276: */
A_CLOSURE( MWAAOSL_generator, NWAAOSL_generator, OWAAOSL_generator );
(( OWAAOSL_generator * ) ( MWAAOSL_generator.nonlocals )) -> JWAAOSL_n_digits = JWAAOSL_n_digits;
A_CALLPROC(MWAAOSL_generator,(A68_TRUE, &SWAAOSL),(A68_TRUE, &SWAAOSL,(MWAAOSL_generator).nonlocals));
RWAAOSL_ans = SWAAOSL;
 /* line 277: */
 /* line 278: */
UWAAOSL = (-1);
for ( TWAAOSL_i = JWAAOSL_n_digits;
( UWAAOSL > 0 && TWAAOSL_i <= 1) ||
( UWAAOSL < 0 && TWAAOSL_i >= 1) ||
( UWAAOSL == 0 ) ;
TWAAOSL_i += UWAAOSL )
{ 
XWAAOSL = WWAAOSL ;
YWAAOSL = ((A68_INT )(A68_BITS )(BWAAOSL_n&KWAAOSL_mask)+1) ;
ZWAAOSL = (&A_VINDEX(RWAAOSL_ans,TWAAOSL_i)) ;
(*ZWAAOSL) = A_VINDEX(XWAAOSL,YWAAOSL);
 /* line 279: */
 /* line 280: */
AXAAOSL = 4 ;
BWAAOSL_n = A_SHR(BWAAOSL_n,AXAAOSL);
}
 /* line 281: */
 /* line 282: */
BXAAOSL = RWAAOSL_ans;
} 
A_PROC_EXIT(hexchars);
*ReturnedValue = (BXAAOSL);
return;
} 
#undef NL

A_STATIC A68_VOID  FXAAOSL_generator(A68_BOOL  EXAAOSL_anonymous, A68_115  *ReturnedValue)
{ 
A68_131  GXAAOSL_anonymous;
A68_VC  HXAAOSL;  /* avoid structure result */
A68_130 * IXAAOSL;  /* YIELD */
A68_115  JXAAOSL;  /* clause result */
{ 
A_CALLPROC(LNAAOSL_anonymous,(EXAAOSL_anonymous, &HXAAOSL),(EXAAOSL_anonymous, &HXAAOSL,(LNAAOSL_anonymous).nonlocals));
IXAAOSL = (&((&GXAAOSL_anonymous)->Str)) ;
(*IXAAOSL) = HXAAOSL;
JXAAOSL = GXAAOSL_anonymous;
} 
*ReturnedValue = (JXAAOSL);
return;
} 
#undef NL

A_STATIC A68_VOID  MXAAOSL_generator(A68_BOOL  LXAAOSL_anonymous, A68_116  *ReturnedValue)
{ 
A68_132  NXAAOSL_anonymous;
A68_VC  OXAAOSL;  /* avoid structure result */
A68_130 * PXAAOSL;  /* YIELD */
A68_116  QXAAOSL;  /* clause result */
{ 
A_CALLPROC(LNAAOSL_anonymous,(LXAAOSL_anonymous, &OXAAOSL),(LXAAOSL_anonymous, &OXAAOSL,(LNAAOSL_anonymous).nonlocals));
PXAAOSL = (&((&NXAAOSL_anonymous)->Str)) ;
(*PXAAOSL) = OXAAOSL;
QXAAOSL = NXAAOSL_anonymous;
} 
*ReturnedValue = (QXAAOSL);
return;
} 
#undef NL

A68_VOID  ZXAAOSL_intwidth(A68_INT  I, A68_INT  W, A68_114  *ReturnedValue)
{ 
A68_114  AYAAOSL;  /* collateral clause result */
A68_114  BYAAOSL;  /* clause result */
A_PROC_ENTRY(intwidth);
AYAAOSL.Int = I;
AYAAOSL.Width = W;
BYAAOSL = AYAAOSL;
A_PROC_EXIT(intwidth);
*ReturnedValue = (BYAAOSL);
return;
} 
#undef NL

A68_VOID  EYAAOSL_width(A68_VC  S, A68_INT  W, A68_115  *ReturnedValue)
{ 
A68_115  FYAAOSL;  /* collateral clause result */
A68_115  GYAAOSL;  /* clause result */
A_PROC_ENTRY(width);
FYAAOSL.Str = S;
FYAAOSL.Width = W;
GYAAOSL = FYAAOSL;
A_PROC_EXIT(width);
*ReturnedValue = (GYAAOSL);
return;
} 
#undef NL

A68_VOID  JYAAOSL_justify(A68_VC  S, A68_INT  J, A68_116  *ReturnedValue)
{ 
A68_116  KYAAOSL;  /* collateral clause result */
A68_116  LYAAOSL;  /* clause result */
A_PROC_ENTRY(justify);
KYAAOSL.Str = S;
KYAAOSL.Justify = J;
LYAAOSL = KYAAOSL;
A_PROC_EXIT(justify);
*ReturnedValue = (LYAAOSL);
return;
} 
#undef NL

A68_VOID  NYAAOSL_tab(A68_INT  I, A68_117  *ReturnedValue)
{ 
A68_117  OYAAOSL_t;
A68_INT * PYAAOSL;  /* YIELD */
A68_117  QYAAOSL;  /* clause result */
A_PROC_ENTRY(tab);
{ 
PYAAOSL = (&((&OYAAOSL_t)->Tab)) ;
(*PYAAOSL) = I;
QYAAOSL = OYAAOSL_t;
} 
A_PROC_EXIT(tab);
*ReturnedValue = (QYAAOSL);
return;
} 
#undef NL

A68_VOID  SYAAOSL_pos(A68_INT  I, A68_118  *ReturnedValue)
{ 
A68_118  TYAAOSL_p;
A68_INT * UYAAOSL;  /* YIELD */
A68_118  VYAAOSL;  /* clause result */
A_PROC_ENTRY(pos);
{ 
UYAAOSL = (&((&TYAAOSL_p)->Pos)) ;
(*UYAAOSL) = I;
VYAAOSL = TYAAOSL_p;
} 
A_PROC_EXIT(pos);
*ReturnedValue = (VYAAOSL);
return;
} 
#undef NL

A68_VOID  XYAAOSL_after(A68_INT  I, A68_119  *ReturnedValue)
{ 
A68_119  YYAAOSL_a;
A68_INT * ZYAAOSL;  /* YIELD */
A68_119  AZAAOSL;  /* clause result */
A_PROC_ENTRY(after);
{ 
ZYAAOSL = (&((&YYAAOSL_a)->After)) ;
(*ZYAAOSL) = I;
AZAAOSL = YYAAOSL_a;
} 
A_PROC_EXIT(after);
*ReturnedValue = (AZAAOSL);
return;
} 
#undef NL

A68_VOID  CZAAOSL_spaces(A68_INT  I, A68_120  *ReturnedValue)
{ 
A68_120  DZAAOSL_s;
A68_INT * EZAAOSL;  /* YIELD */
A68_120  FZAAOSL;  /* clause result */
A_PROC_ENTRY(spaces);
{ 
EZAAOSL = (&((&DZAAOSL_s)->Spaces)) ;
(*EZAAOSL) = I;
FZAAOSL = DZAAOSL_s;
} 
A_PROC_EXIT(spaces);
*ReturnedValue = (FZAAOSL);
return;
} 
#undef NL

A68_VOID  HZAAOSL_lines(A68_INT  I, A68_121  *ReturnedValue)
{ 
A68_121  IZAAOSL_l;
A68_INT * JZAAOSL;  /* YIELD */
A68_121  KZAAOSL;  /* clause result */
A_PROC_ENTRY(lines);
{ 
JZAAOSL = (&((&IZAAOSL_l)->Lines)) ;
(*JZAAOSL) = I;
KZAAOSL = IZAAOSL_l;
} 
A_PROC_EXIT(lines);
*ReturnedValue = (KZAAOSL);
return;
} 
#undef NL

A68_VOID  MZAAOSL_setindent(A68_INT  N, A68_122  *ReturnedValue)
{ 
A68_122  NZAAOSL_i;
A68_INT * OZAAOSL;  /* YIELD */
A68_122  PZAAOSL;  /* clause result */
A_PROC_ENTRY(setindent);
{ 
OZAAOSL = (&((&NZAAOSL_i)->Indent)) ;
(*OZAAOSL) = N;
PZAAOSL = NZAAOSL_i;
} 
A_PROC_EXIT(setindent);
*ReturnedValue = (PZAAOSL);
return;
} 
#undef NL

A68_VOID  RZAAOSL_resetindent(A68_93 * Ch)
{ 
A68_INT * SZAAOSL;  /* YIELD */
A_PROC_ENTRY(resetindent);
SZAAOSL = (&(Ch->Indent)) ;
(*SZAAOSL) = 0;
A_PROC_EXIT(resetindent);
return;
} 
#undef NL

A68_VOID  UZAAOSL_writeline(A68_93 * Ch)
{ 
A68_78  VZAAOSL;  /* CALL */
A68_VC  WZAAOSL;  /* OPERATORS - trim index */
A68_VC  XZAAOSL;  /* OPERATORS - trim index */
A68_INT * YZAAOSL;  /* YIELD */
A68_INT * ZZAAOSL;  /* YIELD */
A68_BOOL * AABAOSL;  /* YIELD */
A68_INT * BABAOSL;  /* YIELD */
A68_INT * CABAOSL;  /* YIELD */
A68_BOOL * DABAOSL;  /* YIELD */
A_PROC_ENTRY(writeline);
 /* line 329: */
 /* line 330: */
if ( (*(&(Ch->Buffered))) )
{ 
VZAAOSL = (*(&(Ch->Putbuffer))) ;
WZAAOSL = (*(&(Ch->Buffer))) ;
A_CALLPROC(VZAAOSL,(A_VTRIM(XZAAOSL,(WZAAOSL),A_VTSCRIPT(&(XZAAOSL.upb),(WZAAOSL).upb,1,((*(&(Ch->Charnumber)))-1)))),(A_VTRIM(XZAAOSL,(WZAAOSL),A_VTSCRIPT(&(XZAAOSL.upb),(WZAAOSL).upb,1,((*(&(Ch->Charnumber)))-1))),(VZAAOSL).nonlocals));
 /* line 331: */
YZAAOSL = (&(Ch->Charnumber)) ;
(*YZAAOSL) = 1;
 /* line 332: */
ZZAAOSL = (&(Ch->Linenumber)) ;
(*ZZAAOSL)+=1;
 /* line 333: */
 /* line 334: */
 /* line 335: */
AABAOSL = (&(Ch->Separate)) ;
(*AABAOSL) = A68_FALSE;
} 
else
{ 
BABAOSL = (&(Ch->Charnumber)) ;
(*BABAOSL) = 1;
 /* line 336: */
CABAOSL = (&(Ch->Linenumber)) ;
(*CABAOSL)+=1;
 /* line 337: */
 /* line 338: */
DABAOSL = (&(Ch->Separate)) ;
(*DABAOSL) = A68_FALSE;
} 
A_PROC_EXIT(writeline);
return;
} 
#undef NL

A68_VOID  GABAOSL_putstr(A68_93 * Ch, A68_VC  Str)
{ 
A68_INT  HABAOSL_t;
A68_BOOL * IABAOSL;  /* YIELD */
A68_INT * JABAOSL_pos;
A68_INT  KABAOSL_indent;
A68_VC  LABAOSL;  /* OPERATORS - trim index */
A68_VC  MABAOSL;  /* OPERATORS - trim index */
A68_VC  NABAOSL;  /* OPERATORS - istruct -> vector */
A68_VC  OABAOSL;  /* OPERATORS - trim index */
A68_VC  PABAOSL;  /* OPERATORS - trim index */
A68_VC  QABAOSL;  /* YIELD */
A68_VC  RABAOSL;  /* OPERATORS - assign op */
A68_78  SABAOSL;  /* CALL */
A68_VC  TABAOSL;  /* OPERATORS - istruct -> vector */
A68_VC  UABAOSL;  /* OPERATORS - trim index */
A68_VC  VABAOSL;  /* OPERATORS - trim index */
A68_INT  WABAOSL_maxsize;
A68_VC  XABAOSL;  /* OPERATORS - trim index */
A68_VC  YABAOSL;  /* OPERATORS - trim index */
A68_VC  ZABAOSL;  /* YIELD */
A68_78  ABBAOSL;  /* CALL */
A68_VC  BBBAOSL;  /* OPERATORS - trim index */
A68_VC  CBBAOSL;  /* OPERATORS - trim index */
A68_VC  DBBAOSL;  /* OPERATORS - trim index */
A68_VC  EBBAOSL;  /* YIELD */
A68_VC  FBBAOSL;  /* OPERATORS - assign op */
A68_78  GBBAOSL;  /* CALL */
A68_VC  HBBAOSL;  /* OPERATORS - trim index */
A68_VC  IBBAOSL;  /* OPERATORS - trim index */
A68_INT  JBBAOSL_second;
A68_BOOL  KBBAOSL;  /* optbool result */
A68_VC  LBBAOSL;  /* OPERATORS - trim index */
A68_VC  MBBAOSL;  /* OPERATORS - trim index */
A68_VC  NBBAOSL;  /* OPERATORS - trim index */
A68_VC  OBBAOSL;  /* YIELD */
A68_VC  PBBAOSL;  /* OPERATORS - assign op */
A68_78  QBBAOSL;  /* CALL */
A68_VC  RBBAOSL;  /* OPERATORS - trim index */
A68_BOOL  SBBAOSL;  /* optbool result */
A68_VC  TBBAOSL;  /* OPERATORS - trim index */
A_PROC_ENTRY(putstr);
 /* line 342: */
 /* line 343: */
{ 
 /* line 345: */
 /* line 346: */
 /* line 347: */
if ( (Str.upb>0) )
{ 
IABAOSL = (&(Ch->Separate)) ;
(*IABAOSL) = A68_FALSE;
 /* line 348: */
JABAOSL_pos = (&(Ch->Charnumber));
 /* line 350: */
 /* line 351: */
if ( ((*JABAOSL_pos)<=(*(&(Ch->Indent)))) )
{ 
KABAOSL_indent = (*(&(Ch->Indent)));
 /* line 352: */
 /* line 353: */
if ( (*(&(Ch->Buffered))) )
{ 
 /* line 354: */
LABAOSL = (*(&(Ch->Buffer))) ;
OABAOSL = A_ISVEC(NABAOSL,(&SXAAOSL_sp),512,A68_CHAR ) ;
QABAOSL = A_VTRIM(MABAOSL,(LABAOSL),A_VTSCRIPT(&(MABAOSL.upb),(LABAOSL).upb,(*JABAOSL_pos),KABAOSL_indent)) ;
RABAOSL = A_VTRIM(PABAOSL,(OABAOSL),A_VTSCRIPT(&(PABAOSL.upb),(OABAOSL).upb,1,((KABAOSL_indent-(*JABAOSL_pos))+1))) ;
A_VASSIGN2(RABAOSL,QABAOSL,A68_CHAR );
} 
else
{ 
 /* line 355: */
SABAOSL = (*(&(Ch->Putbuffer))) ;
UABAOSL = A_ISVEC(TABAOSL,(&SXAAOSL_sp),512,A68_CHAR ) ;
A_CALLPROC(SABAOSL,(A_VTRIM(VABAOSL,(UABAOSL),A_VTSCRIPT(&(VABAOSL.upb),(UABAOSL).upb,1,((KABAOSL_indent-(*JABAOSL_pos))+1)))),(A_VTRIM(VABAOSL,(UABAOSL),A_VTSCRIPT(&(VABAOSL.upb),(UABAOSL).upb,1,((KABAOSL_indent-(*JABAOSL_pos))+1))),(SABAOSL).nonlocals));
} 
 /* line 356: */
 /* line 357: */
(*JABAOSL_pos) = (KABAOSL_indent+1);
} 
 /* line 359: */
WABAOSL_maxsize = (((*(&(Ch->Width)))-(*JABAOSL_pos))+1);
 /* line 360: */
 /* line 361: */
 /* line 362: */
if ( (Str.upb<=WABAOSL_maxsize) )
{ 
 /* line 363: */
if ( (*(&(Ch->Buffered))) )
{ 
 /* line 364: */
XABAOSL = (*(&(Ch->Buffer))) ;
ZABAOSL = A_VTRIM(YABAOSL,(XABAOSL),A_VTSCRIPT(&(YABAOSL.upb),(XABAOSL).upb,(*JABAOSL_pos),(((*JABAOSL_pos)+Str.upb)-1))) ;
A_VASSIGN2(Str,ZABAOSL,A68_CHAR );
} 
else
{ 
 /* line 365: */
ABBAOSL = (*(&(Ch->Putbuffer))) ;
A_CALLPROC(ABBAOSL,(Str),(Str,(ABBAOSL).nonlocals));
} 
 /* line 366: */
 /* line 367: */
(*JABAOSL_pos)+=Str.upb;
} 
else
{ 
 /* line 368: */
if ( (WABAOSL_maxsize==0) )
{ 
LRAAOSL_newline(Ch);
 /* line 369: */
 /* line 370: */
 /* line 371: */
GABAOSL_putstr(Ch, Str);
} 
else
{ 
HABAOSL_t = WABAOSL_maxsize;
 /* line 372: */
for ( ;; )
{ 
 /* line 373: */
if ( !((HABAOSL_t>0)) ) break;
if ( (A_VINDEX(Str,HABAOSL_t)==' ') )
{ 
HABAOSL_t = (-HABAOSL_t);
} 
else
{ 
HABAOSL_t-=1;
} 
}
 /* line 374: */
 /* line 375: */
 /* line 376: */
if ( (HABAOSL_t==0) )
{ 
 /* line 377: */
 /* line 378: */
if ( ((*JABAOSL_pos)==((*(&(Ch->Indent)))+1)) )
{ 
 /* line 379: */
if ( (*(&(Ch->Buffered))) )
{ 
 /* line 380: */
 /* line 381: */
BBBAOSL = (*(&(Ch->Buffer))) ;
EBBAOSL = A_VTRIM(CBBAOSL,(BBBAOSL),A_VTSCRIPT(&(CBBAOSL.upb),(BBBAOSL).upb,(*JABAOSL_pos),(((*JABAOSL_pos)+WABAOSL_maxsize)-1))) ;
FBBAOSL = A_VTRIM(DBBAOSL,(Str),A_VTSCRIPT(&(DBBAOSL.upb),(Str).upb,1,WABAOSL_maxsize)) ;
A_VASSIGN2(FBBAOSL,EBBAOSL,A68_CHAR );
} 
else
{ 
 /* line 382: */
GBBAOSL = (*(&(Ch->Putbuffer))) ;
A_CALLPROC(GBBAOSL,(A_VTRIM(HBBAOSL,(Str),A_VTSCRIPT(&(HBBAOSL.upb),(Str).upb,1,WABAOSL_maxsize))),(A_VTRIM(HBBAOSL,(Str),A_VTSCRIPT(&(HBBAOSL.upb),(Str).upb,1,WABAOSL_maxsize)),(GBBAOSL).nonlocals));
} 
 /* line 383: */
(*JABAOSL_pos)+=WABAOSL_maxsize;
 /* line 384: */
LRAAOSL_newline(Ch);
 /* line 385: */
 /* line 386: */
 /* line 387: */
GABAOSL_putstr(Ch, A_VTRIM(IBBAOSL,(Str),A_VTSCRIPT(&(IBBAOSL.upb),(Str).upb,(WABAOSL_maxsize+1),(Str).upb)));
} 
else
{ 
LRAAOSL_newline(Ch);
 /* line 388: */
 /* line 389: */
 /* line 390: */
 /* line 391: */
GABAOSL_putstr(Ch, Str);
} 
} 
else
{ 
JBBAOSL_second = (-HABAOSL_t);
 /* line 392: */
HABAOSL_t = (-HABAOSL_t);
 /* line 393: */
for ( ;; )
{ 
KBBAOSL = ((HABAOSL_t-=1)>0);
if ( KBBAOSL )
{ /* line 394: */
KBBAOSL = (A_VINDEX(Str,HABAOSL_t)==' ');
}
if ( !(KBBAOSL) ) break;
/*SKIP*/;
}
 /* line 395: */
 /* line 396: */
if ( (*(&(Ch->Buffered))) )
{ 
 /* line 397: */
LBBAOSL = (*(&(Ch->Buffer))) ;
OBBAOSL = A_VTRIM(MBBAOSL,(LBBAOSL),A_VTSCRIPT(&(MBBAOSL.upb),(LBBAOSL).upb,(*JABAOSL_pos),(((*JABAOSL_pos)+HABAOSL_t)-1))) ;
PBBAOSL = A_VTRIM(NBBAOSL,(Str),A_VTSCRIPT(&(NBBAOSL.upb),(Str).upb,1,HABAOSL_t)) ;
A_VASSIGN2(PBBAOSL,OBBAOSL,A68_CHAR );
} 
else
{ 
 /* line 398: */
QBBAOSL = (*(&(Ch->Putbuffer))) ;
A_CALLPROC(QBBAOSL,(A_VTRIM(RBBAOSL,(Str),A_VTSCRIPT(&(RBBAOSL.upb),(Str).upb,1,HABAOSL_t))),(A_VTRIM(RBBAOSL,(Str),A_VTSCRIPT(&(RBBAOSL.upb),(Str).upb,1,HABAOSL_t)),(QBBAOSL).nonlocals));
} 
 /* line 399: */
(*JABAOSL_pos)+=HABAOSL_t;
 /* line 400: */
HABAOSL_t = JBBAOSL_second;
 /* line 401: */
for ( ;; )
{ 
SBBAOSL = ((HABAOSL_t+=1)<Str.upb);
if ( SBBAOSL )
{ /* line 402: */
SBBAOSL = (A_VINDEX(Str,HABAOSL_t)==' ');
}
if ( !(SBBAOSL) ) break;
/*SKIP*/;
}
 /* line 403: */
LRAAOSL_newline(Ch);
 /* line 404: */
 /* line 405: */
 /* line 406: */
 /* line 407: */
 /* line 408: */
GABAOSL_putstr(Ch, A_VTRIM(TBBAOSL,(Str),A_VTSCRIPT(&(TBBAOSL.upb),(Str).upb,HABAOSL_t,(Str).upb)));
} 
} 
} 
} 
} 
A_PROC_EXIT(putstr);
return;
} 
#undef NL

A68_VOID  WBBAOSL_putline(A68_93 * Ch, A68_VC  Line)
{ 
A_PROC_ENTRY(putline);
 /* line 412: */
 /* line 413: */
{ 
GABAOSL_putstr(Ch, Line);
 /* line 414: */
 /* line 415: */
LRAAOSL_newline(Ch);
} 
A_PROC_EXIT(putline);
return;
} 
#undef NL

A68_VOID  BCBAOSL_add_real(A68_93 * Ch, A68_REAL  Re, A68_INT  Width, A68_INT  Digits)
{ 
A68_89  CCBAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  DCBAOSL;  /* avoid structure result */
A68_VC  ECBAOSL_realstr;
A68_BOOL  FCBAOSL;  /* optbool result */
A68_INT  GCBAOSL;  /* YIELD */
A68_BOOL * HCBAOSL;  /* YIELD */
A_PROC_ENTRY(add_real);
 /* line 418: */
 /* line 419: */
{ 
XDAAOSL_float( A_UNITE(CCBAOSL,mode4,4,Re), Width, Digits, 3, &DCBAOSL );
ECBAOSL_realstr = DCBAOSL;
 /* line 423: */
FCBAOSL = (ECBAOSL_realstr.upb>0);
if ( FCBAOSL )
{GCBAOSL = 1 ;
FCBAOSL = ((*(&A_VINDEX(ECBAOSL_realstr,GCBAOSL)))!=' ');
}
 /* line 424: */
if ( FCBAOSL )
{FCBAOSL = (*(&(Ch->Separate)));
}
if ( FCBAOSL )
{ 
 /* line 425: */
GABAOSL_putstr(Ch, UOAAOSL_space_str);
} 
 /* line 426: */
GABAOSL_putstr(Ch, ECBAOSL_realstr);
 /* line 427: */
 /* line 428: */
HCBAOSL = (&(Ch->Separate)) ;
(*HCBAOSL) = A68_TRUE;
} 
A_PROC_EXIT(add_real);
return;
} 
#undef NL

A68_VOID  LCBAOSL_add_number(A68_93 * Ch, A68_INT  Int, A68_INT  Width)
{ 
A68_146  MCBAOSL_line;
A68_147  OCBAOSL;  /* clause result */
A68_147  QCBAOSL_chars;
A68_INT  RCBAOSL_n;
A68_INT  SCBAOSL_l;
A68_VC  TCBAOSL;  /* OPERATORS - istruct -> vector */
A68_VC  UCBAOSL;  /* OPERATORS - simple index */
A68_INT  VCBAOSL;  /* YIELD */
A68_CHAR * WCBAOSL;  /* YIELD */
A68_VC  XCBAOSL;  /* OPERATORS - istruct -> vector */
A68_VC  YCBAOSL;  /* OPERATORS - simple index */
A68_INT  ZCBAOSL;  /* YIELD */
A68_VC  ADBAOSL;  /* OPERATORS - istruct -> vector */
A68_VC  BDBAOSL;  /* OPERATORS - simple index */
A68_INT  CDBAOSL;  /* ADICOPS - MOD */
A68_INT  DDBAOSL;  /* ADICOPS - MOD */
A68_INT  EDBAOSL;  /* YIELD */
A68_CHAR * FDBAOSL;  /* YIELD */
A68_VC  GDBAOSL;  /* OPERATORS - istruct -> vector */
A68_VC  HDBAOSL;  /* OPERATORS - simple index */
A68_INT  IDBAOSL;  /* YIELD */
A68_CHAR * JDBAOSL;  /* YIELD */
A68_INT  KDBAOSL_sp;
A68_INT  LDBAOSL;  /* to part of loop */
A68_INT  MDBAOSL;  /* loop control */
A68_VC  NDBAOSL;  /* OPERATORS - istruct -> vector */
A68_VC  ODBAOSL;  /* OPERATORS - simple index */
A68_INT  PDBAOSL;  /* YIELD */
A68_CHAR * QDBAOSL;  /* YIELD */
A68_VC  RDBAOSL;  /* OPERATORS - istruct -> vector */
A68_VC  SDBAOSL;  /* OPERATORS - simple index */
A68_INT  TDBAOSL;  /* YIELD */
A68_CHAR * UDBAOSL;  /* YIELD */
A68_VC  VDBAOSL;  /* OPERATORS - istruct -> vector */
A68_VC  WDBAOSL;  /* OPERATORS - trim index */
A68_VC  XDBAOSL;  /* OPERATORS - trim index */
A68_BOOL * YDBAOSL;  /* YIELD */
A_PROC_ENTRY(add_number);
 /* line 434: */
 /* line 435: */
{ 
 /* line 436: */
 /* line 437: */
if ( (Int<0) )
{ 
OCBAOSL = NCBAOSL;
} 
else
{ 
OCBAOSL = PCBAOSL;
} 
QCBAOSL_chars = OCBAOSL;
 /* line 438: */
RCBAOSL_n = Int;
SCBAOSL_l = 33;
 /* line 439: */
 /* line 440: */
if ( (RCBAOSL_n==0) )
{ 
 /* line 441: */
UCBAOSL = A_ISVEC(TCBAOSL,(&MCBAOSL_line),32,A68_CHAR ) ;
VCBAOSL = SCBAOSL_l-=1 ;
WCBAOSL = (&A_VINDEX(UCBAOSL,VCBAOSL)) ;
(*WCBAOSL) = '0';
} 
else
{ 
for ( ;; )
{ 
 /* line 442: */
if ( !((RCBAOSL_n!=0)) ) break;
YCBAOSL = A_ISVEC(XCBAOSL,(&MCBAOSL_line),32,A68_CHAR ) ;
ZCBAOSL = SCBAOSL_l-=1 ;
BDBAOSL = A_HISVEC(ADBAOSL,QCBAOSL_chars,10,A68_CHAR ) ;
DDBAOSL = 10 ;
EDBAOSL = (A_MOD(RCBAOSL_n,DDBAOSL,CDBAOSL)+1) ;
FDBAOSL = (&A_VINDEX(YCBAOSL,ZCBAOSL)) ;
(*FDBAOSL) = A_VINDEX(BDBAOSL,EDBAOSL);
 /* line 443: */
 /* line 444: */
RCBAOSL_n/=10;
}
 /* line 445: */
if ( (Int<0) )
{ 
 /* line 446: */
HDBAOSL = A_ISVEC(GDBAOSL,(&MCBAOSL_line),32,A68_CHAR ) ;
IDBAOSL = SCBAOSL_l-=1 ;
JDBAOSL = (&A_VINDEX(HDBAOSL,IDBAOSL)) ;
(*JDBAOSL) = '-';
} 
} 
 /* line 447: */
KDBAOSL_sp = ((Width-33)+SCBAOSL_l);
 /* line 448: */
 /* line 449: */
if ( (KDBAOSL_sp>0) )
{ 
LDBAOSL = KDBAOSL_sp;
for ( MDBAOSL = 1;
MDBAOSL <= LDBAOSL;
MDBAOSL += 1 )
{ 
ODBAOSL = A_ISVEC(NDBAOSL,(&MCBAOSL_line),32,A68_CHAR ) ;
PDBAOSL = SCBAOSL_l-=1 ;
QDBAOSL = (&A_VINDEX(ODBAOSL,PDBAOSL)) ;
(*QDBAOSL) = ' ';
}
 /* line 450: */
} 
else
{ 
if ( (*(&(Ch->Separate))) )
{ 
 /* line 451: */
SDBAOSL = A_ISVEC(RDBAOSL,(&MCBAOSL_line),32,A68_CHAR ) ;
TDBAOSL = SCBAOSL_l-=1 ;
UDBAOSL = (&A_VINDEX(SDBAOSL,TDBAOSL)) ;
(*UDBAOSL) = ' ';
} 
} 
 /* line 452: */
WDBAOSL = A_ISVEC(VDBAOSL,(&MCBAOSL_line),32,A68_CHAR ) ;
GABAOSL_putstr(Ch, A_VTRIM(XDBAOSL,(WDBAOSL),A_VTSCRIPT(&(XDBAOSL.upb),(WDBAOSL).upb,SCBAOSL_l,(WDBAOSL).upb)));
 /* line 453: */
 /* line 454: */
YDBAOSL = (&(Ch->Separate)) ;
(*YDBAOSL) = A68_TRUE;
} 
A_PROC_EXIT(add_number);
return;
} 
#undef NL

A68_VOID  CEBAOSL_add_bits(A68_93 * Ch, A68_BITS  B, A68_INT  Leng)
{ 
A68_146  DEBAOSL_line;
A68_INT  EEBAOSL_l;
A68_BITS  FEBAOSL_n;
A68_VC  HEBAOSL;  /* OPERATORS - istruct -> vector */
A68_VC  IEBAOSL;  /* OPERATORS - simple index */
A68_INT  JEBAOSL;  /* YIELD */
A68_VC  LEBAOSL;  /* OPERATORS - simple index */
A68_INT  MEBAOSL;  /* YIELD */
A68_CHAR * NEBAOSL;  /* YIELD */
A68_BOOL  OEBAOSL;  /* clause result */
A68_INT  PEBAOSL;  /* SHR */
A68_INT  QEBAOSL;  /* to part of loop */
A68_INT  REBAOSL;  /* loop control */
A68_VC  SEBAOSL;  /* OPERATORS - istruct -> vector */
A68_VC  TEBAOSL;  /* OPERATORS - simple index */
A68_INT  UEBAOSL;  /* YIELD */
A68_CHAR * VEBAOSL;  /* YIELD */
A68_VC  WEBAOSL;  /* OPERATORS - istruct -> vector */
A68_VC  XEBAOSL;  /* OPERATORS - simple index */
A68_INT  YEBAOSL;  /* YIELD */
A68_CHAR * ZEBAOSL;  /* YIELD */
A68_VC  AFBAOSL;  /* OPERATORS - istruct -> vector */
A68_VC  BFBAOSL;  /* OPERATORS - trim index */
A68_VC  CFBAOSL;  /* OPERATORS - trim index */
A68_BOOL * DFBAOSL;  /* YIELD */
A_PROC_ENTRY(add_bits);
 /* line 458: */
 /* line 459: */
{ 
 /* line 460: */
EEBAOSL_l = 33;
 /* line 461: */
FEBAOSL_n = B;
 /* line 462: */
for ( ;; )
{ 
 /* line 463: */
IEBAOSL = A_ISVEC(HEBAOSL,(&DEBAOSL_line),32,A68_CHAR ) ;
JEBAOSL = EEBAOSL_l-=1 ;
LEBAOSL = KEBAOSL ;
MEBAOSL = ((A68_INT )(A68_BITS )(FEBAOSL_n&0XfU)+1) ;
NEBAOSL = (&A_VINDEX(IEBAOSL,JEBAOSL)) ;
(*NEBAOSL) = A_VINDEX(LEBAOSL,MEBAOSL);
 /* line 464: */
 /* line 465: */
PEBAOSL = 4 ;
OEBAOSL = ((FEBAOSL_n = A_SHR(FEBAOSL_n,PEBAOSL))!=0X0U);
if ( !OEBAOSL ) break;
/*SKIP*/;
}
 /* line 466: */
QEBAOSL = ((Leng-33)+EEBAOSL_l);
for ( REBAOSL = 1;
REBAOSL <= QEBAOSL;
REBAOSL += 1 )
{ 
TEBAOSL = A_ISVEC(SEBAOSL,(&DEBAOSL_line),32,A68_CHAR ) ;
UEBAOSL = EEBAOSL_l-=1 ;
VEBAOSL = (&A_VINDEX(TEBAOSL,UEBAOSL)) ;
(*VEBAOSL) = '0';
}
 /* line 467: */
if ( (*(&(Ch->Separate))) )
{ 
XEBAOSL = A_ISVEC(WEBAOSL,(&DEBAOSL_line),32,A68_CHAR ) ;
YEBAOSL = EEBAOSL_l-=1 ;
ZEBAOSL = (&A_VINDEX(XEBAOSL,YEBAOSL)) ;
(*ZEBAOSL) = ' ';
} 
 /* line 468: */
BFBAOSL = A_ISVEC(AFBAOSL,(&DEBAOSL_line),32,A68_CHAR ) ;
GABAOSL_putstr(Ch, A_VTRIM(CFBAOSL,(BFBAOSL),A_VTSCRIPT(&(CFBAOSL.upb),(BFBAOSL).upb,EEBAOSL_l,(BFBAOSL).upb)));
 /* line 469: */
 /* line 470: */
DFBAOSL = (&(Ch->Separate)) ;
(*DFBAOSL) = A68_TRUE;
} 
A_PROC_EXIT(add_bits);
return;
} 
#undef NL

A68_VOID  GFBAOSL_put(A68_93 * Ch, A68_149  Out)
{ 
A68_123  HFBAOSL_elem;
A68_123 * IFBAOSL;  /* forall control - []x */
A68_INT  JFBAOSL;  /* forall loop counter */
A68_123  KFBAOSL;  /* united object - for case conformity */
A68_INT  LFBAOSL_n;
A68_72  MFBAOSL_vi;
A68_INT  NFBAOSL_i;
A68_INT * OFBAOSL;  /* forall control - []x */
A68_INT  PFBAOSL;  /* forall loop counter */
A68_BITS  QFBAOSL_bits;
A68_124  RFBAOSL_vb;
A68_BITS  SFBAOSL_b;
A68_BITS * TFBAOSL;  /* forall control - []x */
A68_INT  UFBAOSL;  /* forall loop counter */
A68_SBITS  VFBAOSL_sb;
A68_REAL  WFBAOSL_re;
A68_126  XFBAOSL_vr;
A68_REAL  YFBAOSL_r;
A68_REAL * ZFBAOSL;  /* forall control - []x */
A68_INT  AGBAOSL;  /* forall loop counter */
A68_CHAR  BGBAOSL_c;
A68_VC  CGBAOSL;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  DGBAOSL_vc;
A68_BOOL  EGBAOSL_bool;
A68_VC  FGBAOSL;  /* clause result */
A68_VC  GGBAOSL;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  HGBAOSL;  /* OPERATORS - scalar -> [] or VEC[] */
A68_125  IGBAOSL_vecbool;
A68_BOOL  JGBAOSL_bool;
A68_BOOL * KGBAOSL;  /* forall control - []x */
A68_INT  LGBAOSL;  /* forall loop counter */
A68_VC  MGBAOSL;  /* clause result */
A68_VC  NGBAOSL;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  OGBAOSL;  /* OPERATORS - scalar -> [] or VEC[] */
A68_114  PGBAOSL_iw;
A68_115  QGBAOSL_sw;
A68_INT  RGBAOSL_gap;
A68_BOOL  SGBAOSL;  /* optbool result */
A68_INT  TGBAOSL_ss;
A68_120  UGBAOSL;  /* avoid structure result */
A68_123  VGBAOSL;  /* OPERATORS - mode -> union mode */
A68_149  WGBAOSL;  /* OPERATORS - scalar -> [] or VEC[] */
A68_116  XGBAOSL_j;
A68_INT  YGBAOSL_ss;
A68_120  ZGBAOSL;  /* avoid structure result */
A68_123  AHBAOSL;  /* OPERATORS - mode -> union mode */
A68_149  BHBAOSL;  /* OPERATORS - scalar -> [] or VEC[] */
A68_117  CHBAOSL_t;
A68_INT  DHBAOSL;  /* clause result */
A68_INT  EHBAOSL;  /* ADICOPS - MOD */
A68_INT  FHBAOSL;  /* ADICOPS - MOD */
A68_INT  GHBAOSL;  /* ADICOPS - MOD */
A68_INT  HHBAOSL_tab;
A68_VC  IHBAOSL;  /* OPERATORS - istruct -> vector */
A68_VC  JHBAOSL;  /* OPERATORS - trim index */
A68_VC  KHBAOSL;  /* OPERATORS - trim index */
A68_118  LHBAOSL_p;
A68_INT  MHBAOSL;  /* ADICOPS - MOD */
A68_INT  NHBAOSL;  /* ADICOPS - MOD */
A68_INT  OHBAOSL;  /* ADICOPS - MOD */
A68_INT  PHBAOSL_pos;
A68_117  QHBAOSL;  /* avoid structure result */
A68_123  RHBAOSL;  /* OPERATORS - mode -> union mode */
A68_149  SHBAOSL;  /* OPERATORS - scalar -> [] or VEC[] */
A68_119  THBAOSL_a;
A68_117  UHBAOSL;  /* avoid structure result */
A68_123  VHBAOSL;  /* OPERATORS - mode -> union mode */
A68_149  WHBAOSL;  /* OPERATORS - scalar -> [] or VEC[] */
A68_120  XHBAOSL_s;
A68_VC  YHBAOSL;  /* OPERATORS - istruct -> vector */
A68_VC  ZHBAOSL;  /* OPERATORS - istruct -> vector */
A68_VC  AIBAOSL;  /* OPERATORS - trim index */
A68_VC  BIBAOSL;  /* OPERATORS - trim index */
A68_83  DIBAOSL_generator;   /* proc value of non-global proc */
A68_VC  JIBAOSL;  /* avoid structure result */
A68_VC  IIBAOSL_lsp;
A68_CHAR * KIBAOSL_sc;
A68_INT  LIBAOSL;  /* forall loop counter */
A68_121  MIBAOSL_l;
A68_INT  NIBAOSL;  /* to part of loop */
A68_INT  OIBAOSL;  /* loop control */
A68_122  PIBAOSL_in;
A68_INT  QIBAOSL;  /* clause result */
A68_VC  RIBAOSL;  /* OPERATORS - istruct -> vector */
A68_VC  SIBAOSL;  /* OPERATORS - istruct -> vector */
A68_INT * TIBAOSL;  /* YIELD */
A68_97  UIBAOSL_proc;
A68_127  VIBAOSL_struct;
A68_INT  WIBAOSL_i;
A68_INT  XIBAOSL;  /* to part of loop */
A68_127  YIBAOSL;  /* OPERATORS - straight index */
A68_123  ZIBAOSL;  /* OPERATORS - straight index result */
A68_149  AJBAOSL;  /* OPERATORS - scalar -> [] or VEC[] */
A_PROC_ENTRY(put);
 /* line 474: */
 /* line 475: */
JFBAOSL = Out.upb -1;
IFBAOSL = Out.data;
for (;JFBAOSL-- >= 0;
(IFBAOSL++
) )
{
HFBAOSL_elem = *IFBAOSL;
 /* line 476: */
KFBAOSL = HFBAOSL_elem ;
switch ( KFBAOSL.mode )
{ 
case 1: /* INT */
LFBAOSL_n = (KFBAOSL.data.mode1);
 /* line 477: */
 /* line 478: */
LCBAOSL_add_number(Ch, LFBAOSL_n, 0);
break;
case 2: /* VECTOR [] INT */
MFBAOSL_vi = (KFBAOSL.data.mode2);
 /* line 479: */
PFBAOSL = MFBAOSL_vi.upb -1;
OFBAOSL = MFBAOSL_vi.data;
for (;PFBAOSL-- >= 0;
(OFBAOSL++
) )
{
NFBAOSL_i = *OFBAOSL;
LCBAOSL_add_number(Ch, NFBAOSL_i, 0);
}
 /* line 480: */
break;
case 3: /* BITS */
QFBAOSL_bits = (KFBAOSL.data.mode3);
 /* line 481: */
 /* line 482: */
CEBAOSL_add_bits(Ch, QFBAOSL_bits, 8);
break;
case 4: /* VECTOR [] BITS */
RFBAOSL_vb = (KFBAOSL.data.mode4);
 /* line 483: */
UFBAOSL = RFBAOSL_vb.upb -1;
TFBAOSL = RFBAOSL_vb.data;
for (;UFBAOSL-- >= 0;
(TFBAOSL++
) )
{
SFBAOSL_b = *TFBAOSL;
CEBAOSL_add_bits(Ch, SFBAOSL_b, 8);
}
 /* line 484: */
break;
case 5: /* SHORT BITS */
VFBAOSL_sb = (KFBAOSL.data.mode5);
 /* line 485: */
 /* line 486: */
CEBAOSL_add_bits(Ch, (A68_BITS )VFBAOSL_sb, 4);
break;
case 10: /* REAL */
WFBAOSL_re = (KFBAOSL.data.mode10);
 /* line 487: */
 /* line 488: */
BCBAOSL_add_real(Ch, WFBAOSL_re, (-12), 5);
break;
case 11: /* VECTOR [] REAL */
XFBAOSL_vr = (KFBAOSL.data.mode11);
 /* line 489: */
AGBAOSL = XFBAOSL_vr.upb -1;
ZFBAOSL = XFBAOSL_vr.data;
for (;AGBAOSL-- >= 0;
(ZFBAOSL++
) )
{
YFBAOSL_r = *ZFBAOSL;
BCBAOSL_add_real(Ch, YFBAOSL_r, (-12), 5);
}
 /* line 490: */
break;
case 6: /* CHAR */
BGBAOSL_c = (KFBAOSL.data.mode6);
 /* line 491: */
 /* line 492: */
GABAOSL_putstr(Ch, A_HVEC(CGBAOSL,BGBAOSL_c,A68_CHAR ));
break;
case 7: /* VECTOR [] CHAR */
DGBAOSL_vc = (KFBAOSL.data.mode7);
 /* line 493: */
 /* line 494: */
GABAOSL_putstr(Ch, DGBAOSL_vc);
break;
case 8: /* BOOL */
EGBAOSL_bool = (KFBAOSL.data.mode8);
 /* line 495: */
if ( EGBAOSL_bool )
{ 
FGBAOSL = A_HVEC(GGBAOSL,'T',A68_CHAR );
} 
else
{ 
FGBAOSL = A_HVEC(HGBAOSL,'F',A68_CHAR );
} 
 /* line 496: */
GABAOSL_putstr(Ch, FGBAOSL);
break;
case 9: /* VECTOR [] BOOL */
IGBAOSL_vecbool = (KFBAOSL.data.mode9);
 /* line 497: */
 /* line 498: */
LGBAOSL = IGBAOSL_vecbool.upb -1;
KGBAOSL = IGBAOSL_vecbool.data;
for (;LGBAOSL-- >= 0;
(KGBAOSL++
) )
{
JGBAOSL_bool = *KGBAOSL;
if ( JGBAOSL_bool )
{ 
MGBAOSL = A_HVEC(NGBAOSL,'T',A68_CHAR );
} 
else
{ 
MGBAOSL = A_HVEC(OGBAOSL,'F',A68_CHAR );
} 
GABAOSL_putstr(Ch, MGBAOSL);
}
 /* line 499: */
break;
case 13: /* STRUCT(INT,INT)  */
PGBAOSL_iw = (KFBAOSL.data.mode13);
 /* line 500: */
 /* line 501: */
LCBAOSL_add_number(Ch, PGBAOSL_iw.Int, PGBAOSL_iw.Width);
break;
case 14: /* STRUCT(MODE26,INT)  */
QGBAOSL_sw = (KFBAOSL.data.mode14);
 /* line 502: */
{ 
RGBAOSL_gap = (((*(&(Ch->Width)))-(*(&(Ch->Charnumber))))-1);
 /* line 503: */
GABAOSL_putstr(Ch, QGBAOSL_sw.Str);
 /* line 504: */
SGBAOSL = (RGBAOSL_gap>=QGBAOSL_sw.Width);
if ( ! SGBAOSL )
{ /* line 505: */
SGBAOSL = (RGBAOSL_gap<QGBAOSL_sw.Str.upb);
}
if ( SGBAOSL )
{ 
TGBAOSL_ss = (QGBAOSL_sw.Width-QGBAOSL_sw.Str.upb);
 /* line 506: */
if ( (TGBAOSL_ss>0) )
{ 
 /* line 507: */
 /* line 508: */
 /* line 509: */
CZAAOSL_spaces( TGBAOSL_ss, &UGBAOSL );
GFBAOSL_put(Ch, A_HVEC(WGBAOSL,A_UNITE(VGBAOSL,mode19,19,UGBAOSL),A68_123 ));
} 
} 
} 
break;
case 15: /* STRUCT(MODE26,INT)  */
XGBAOSL_j = (KFBAOSL.data.mode15);
 /* line 510: */
{ 
 /* line 511: */
if ( (XGBAOSL_j.Justify>=((*(&(Ch->Width)))-(*(&(Ch->Charnumber))))) )
{ 
 /* line 512: */
LRAAOSL_newline(Ch);
} 
 /* line 513: */
YGBAOSL_ss = (XGBAOSL_j.Justify-XGBAOSL_j.Str.upb);
 /* line 514: */
if ( (YGBAOSL_ss>0) )
{ 
CZAAOSL_spaces( YGBAOSL_ss, &ZGBAOSL );
GFBAOSL_put(Ch, A_HVEC(BHBAOSL,A_UNITE(AHBAOSL,mode19,19,ZGBAOSL),A68_123 ));
} 
 /* line 515: */
 /* line 516: */
 /* line 517: */
GABAOSL_putstr(Ch, XGBAOSL_j.Str);
} 
break;
case 16: /* STRUCT(INT)  */
CHBAOSL_t = (KFBAOSL.data.mode16);
 /* line 518: */
{ 
 /* line 519: */
if ( (CHBAOSL_t.Tab>1) )
{ 
 /* line 520: */
 /* line 521: */
FHBAOSL = ((*(&(Ch->Charnumber)))-1) ;
GHBAOSL = CHBAOSL_t.Tab ;
DHBAOSL = (CHBAOSL_t.Tab-A_MOD(FHBAOSL,GHBAOSL,EHBAOSL));
} 
else
{ 
DHBAOSL = 0;
} 
HHBAOSL_tab = DHBAOSL;
 /* line 522: */
 /* line 523: */
if ( (((*(&(Ch->Charnumber)))+HHBAOSL_tab)>(*(&(Ch->Width)))) )
{ 
 /* line 524: */
LRAAOSL_newline(Ch);
} 
else
{ 
 /* line 525: */
 /* line 526: */
 /* line 527: */
JHBAOSL = A_ISVEC(IHBAOSL,(&SXAAOSL_sp),512,A68_CHAR ) ;
GABAOSL_putstr(Ch, A_VTRIM(KHBAOSL,(JHBAOSL),A_VTSCRIPT(&(KHBAOSL.upb),(JHBAOSL).upb,1,HHBAOSL_tab)));
} 
} 
break;
case 17: /* STRUCT(INT)  */
LHBAOSL_p = (KFBAOSL.data.mode17);
 /* line 528: */
{ 
NHBAOSL = LHBAOSL_p.Pos ;
OHBAOSL = (*(&(Ch->Width))) ;
PHBAOSL_pos = A_MOD(NHBAOSL,OHBAOSL,MHBAOSL);
 /* line 529: */
 /* line 530: */
if ( ((*(&(Ch->Charnumber)))!=(PHBAOSL_pos+1)) )
{ 
if ( ((*(&(Ch->Charnumber)))>(PHBAOSL_pos+1)) )
{ 
LRAAOSL_newline(Ch);
} 
 /* line 531: */
 /* line 532: */
 /* line 533: */
 /* line 534: */
NYAAOSL_tab( PHBAOSL_pos, &QHBAOSL );
GFBAOSL_put(Ch, A_HVEC(SHBAOSL,A_UNITE(RHBAOSL,mode16,16,QHBAOSL),A68_123 ));
} 
} 
break;
case 18: /* STRUCT(INT)  */
THBAOSL_a = (KFBAOSL.data.mode18);
 /* line 535: */
{ 
 /* line 536: */
if ( ((*(&(Ch->Charnumber)))<THBAOSL_a.After) )
{ 
 /* line 537: */
NYAAOSL_tab( THBAOSL_a.After, &UHBAOSL );
GFBAOSL_put(Ch, A_HVEC(WHBAOSL,A_UNITE(VHBAOSL,mode16,16,UHBAOSL),A68_123 ));
} 
else
{ 
 /* line 538: */
if ( ((*(&(Ch->Charnumber)))<=(*(&(Ch->Width)))) )
{ 
 /* line 539: */
 /* line 540: */
 /* line 541: */
GABAOSL_putstr(Ch, UOAAOSL_space_str);
} 
} 
} 
break;
case 19: /* STRUCT(INT)  */
XHBAOSL_s = (KFBAOSL.data.mode19);
 /* line 542: */
{ 
 /* line 543: */
if ( ((XHBAOSL_s.Spaces+(*(&(Ch->Charnumber))))>(*(&(Ch->Width)))) )
{ 
 /* line 544: */
LRAAOSL_newline(Ch);
} 
else
{ 
 /* line 545: */
if ( (XHBAOSL_s.Spaces<=A_HISVEC(YHBAOSL,SXAAOSL_sp,512,A68_CHAR ).upb) )
{ 
 /* line 546: */
AIBAOSL = A_ISVEC(ZHBAOSL,(&SXAAOSL_sp),512,A68_CHAR ) ;
GABAOSL_putstr(Ch, A_VTRIM(BIBAOSL,(AIBAOSL),A_VTSCRIPT(&(BIBAOSL.upb),(AIBAOSL).upb,1,XHBAOSL_s.Spaces)));
} 
else
{ 
A_CLOSURE( DIBAOSL_generator, EIBAOSL_generator, FIBAOSL_generator );
(( FIBAOSL_generator * ) ( DIBAOSL_generator.nonlocals )) -> XHBAOSL_s = XHBAOSL_s;
A_CALLPROC(DIBAOSL_generator,(A68_TRUE, &JIBAOSL),(A68_TRUE, &JIBAOSL,(DIBAOSL_generator).nonlocals));
IIBAOSL_lsp = JIBAOSL;
 /* line 547: */
LIBAOSL = IIBAOSL_lsp.upb -1;
KIBAOSL_sc = IIBAOSL_lsp.data;
for (;LIBAOSL-- >= 0;
(KIBAOSL_sc++
) )
{
(*KIBAOSL_sc) = ' ';
}
 /* line 548: */
 /* line 549: */
 /* line 550: */
 /* line 551: */
GABAOSL_putstr(Ch, IIBAOSL_lsp);
} 
} 
} 
break;
case 20: /* STRUCT(INT)  */
MIBAOSL_l = (KFBAOSL.data.mode20);
 /* line 552: */
NIBAOSL = MIBAOSL_l.Lines;
for ( OIBAOSL = 1;
OIBAOSL <= NIBAOSL;
OIBAOSL += 1 )
{ 
LRAAOSL_newline(Ch);
}
 /* line 553: */
break;
case 21: /* STRUCT(INT)  */
PIBAOSL_in = (KFBAOSL.data.mode21);
 /* line 554: */
 /* line 555: */
if ( (PIBAOSL_in.Indent>((*(&(Ch->Width)))-20)) )
{ 
 /* line 556: */
QIBAOSL = ((*(&(Ch->Width)))-20);
} 
else
{ 
 /* line 557: */
 /* line 558: */
if ( (PIBAOSL_in.Indent>A_HISVEC(RIBAOSL,SXAAOSL_sp,512,A68_CHAR ).upb) )
{ 
 /* line 559: */
QIBAOSL = A_HISVEC(SIBAOSL,SXAAOSL_sp,512,A68_CHAR ).upb;
} 
else
{ 
QIBAOSL = PIBAOSL_in.Indent;
} 
} 
 /* line 560: */
TIBAOSL = (&(Ch->Indent)) ;
(*TIBAOSL) = QIBAOSL;
break;
case 12: /* PROC(REF MODE93) VOID */
UIBAOSL_proc = (KFBAOSL.data.mode12);
 /* line 561: */
 /* line 562: */
A_CALLPROC(UIBAOSL_proc,(Ch),(Ch,(UIBAOSL_proc).nonlocals));
break;
case 22: /* STRAIGHT MODE123 */
VIBAOSL_struct = (KFBAOSL.data.mode22);
 /* line 563: */
XIBAOSL = VIBAOSL_struct.upb;
for ( WIBAOSL_i = 1;
WIBAOSL_i <= XIBAOSL;
WIBAOSL_i += 1 )
{ 
GFBAOSL_put(Ch, A_HVEC(AJBAOSL,A_STRINDEX_RTN(VIBAOSL_struct,WIBAOSL_i,YIBAOSL,ZIBAOSL),A68_123 ));
}
 /* line 564: */
 /* line 565: */
break;
default: 
A_IMP_SKIP ;
break;
} 
}
A_PROC_EXIT(put);
return;
} 
#undef NL

A68_VOID  FJBAOSL_putb(A68_VC  Buffer, A68_149  Line, A68_VC  *ReturnedValue)
{ 
A68_93  GJBAOSL;  /* collateral clause result */
A68_78  HJBAOSL;  /* procedure value */
A68_94  IJBAOSL;  /* procedure value */
A68_93  JJBAOSL_ch;
A68_VC  KJBAOSL;  /* clause result */
A68_VC  LJBAOSL;  /* OPERATORS - trim index */
A_PROC_ENTRY(putb);
 /* line 572: */
 /* line 576: */
{ 
GJBAOSL.Charnumber = 1;
GJBAOSL.Linenumber = 0;
GJBAOSL.Indent = 0;
GJBAOSL.Width = (Buffer.upb-1);
GJBAOSL.Sizeincr = 0;
 /* line 577: */
GJBAOSL.Status = DPBAOSI_io_ok;
GJBAOSL.Buffer = Buffer;
GJBAOSL.Buffered = A68_TRUE;
GJBAOSL.Separate = A68_FALSE;
GJBAOSL.Input = A68_FALSE;
HJBAOSL.fn.fn_global = PPAAOSL_nullputbuffer;
HJBAOSL.nonlocals = A68_NIL;
GJBAOSL.Putbuffer = HJBAOSL;
IJBAOSL.fn.fn_global = SPAAOSL_nullgetbuffer;
IJBAOSL.nonlocals = A68_NIL;
GJBAOSL.Getbuffer = IJBAOSL;
JJBAOSL_ch = GJBAOSL;
 /* line 578: */
GFBAOSL_put((&JJBAOSL_ch), Line);
 /* line 579: */
 /* line 580: */
KJBAOSL = A_VTRIM(LJBAOSL,(Buffer),A_VTSCRIPT(&(LJBAOSL.upb),(Buffer).upb,1,((*(&((&JJBAOSL_ch)->Charnumber)))-1)));
} 
A_PROC_EXIT(putb);
*ReturnedValue = (KJBAOSL);
return;
} 
#undef NL

A68_VOID  NJBAOSL_endput(A68_93 * Ch, A68_VC  *ReturnedValue)
{ 
A68_VC  OJBAOSL;  /* OPERATORS - trim index */
A68_VC  PJBAOSL;  /* OPERATORS - trim index */
A68_VC  QJBAOSL_ans;
A68_INT * RJBAOSL;  /* YIELD */
A68_VC  SJBAOSL;  /* clause result */
A_PROC_ENTRY(endput);
 /* line 584: */
 /* line 586: */
{ 
OJBAOSL = (*(&(Ch->Buffer))) ;
QJBAOSL_ans = A_VTRIM(PJBAOSL,(OJBAOSL),A_VTSCRIPT(&(PJBAOSL.upb),(OJBAOSL).upb,1,((*(&(Ch->Charnumber)))-1)));
 /* line 587: */
RJBAOSL = (&(Ch->Charnumber)) ;
(*RJBAOSL) = 1;
 /* line 588: */
 /* line 589: */
SJBAOSL = QJBAOSL_ans;
} 
A_PROC_EXIT(endput);
*ReturnedValue = (SJBAOSL);
return;
} 
#undef NL

A68_VOID  UJBAOSL_oneline(A68_149  Out, A68_VC  *ReturnedValue)
{ 
A68_154  XJBAOSL_buff;
A68_93  YJBAOSL;  /* collateral clause result */
A68_VC  ZJBAOSL;  /* OPERATORS - istruct -> vector */
A68_78  AKBAOSL;  /* procedure value */
A68_94  BKBAOSL;  /* procedure value */
A68_93  CKBAOSL_ch;
A68_78  EKBAOSL_putbuffer;   /* proc value of non-global proc */
A68_jmp_buf VJBAOSL_restart;
A68_78 * QKBAOSL;  /* YIELD */
A68_VC  RKBAOSL;  /* clause result */
A68_VC  SKBAOSL;  /* OPERATORS - trim index */
A68_VC  TKBAOSL;  /* OPERATORS - trim index */
A68_VC  UKBAOSL;  /* avoid structure result */
if ( sigsetjmp( VJBAOSL_restart.label,1) ) goto WJBAOSL_restart;
A_PROC_ENTRY(oneline);
 /* line 593: */
 /* line 594: */
{ 
 /* line 595: */
YJBAOSL.Charnumber = 1;
YJBAOSL.Linenumber = 0;
YJBAOSL.Indent = 0;
YJBAOSL.Width = 500;
YJBAOSL.Sizeincr = 0;
YJBAOSL.Status = DPBAOSI_io_ok;
YJBAOSL.Buffer = A_ISVEC(ZJBAOSL,(&XJBAOSL_buff),501,A68_CHAR );
YJBAOSL.Buffered = A68_TRUE;
YJBAOSL.Separate = A68_FALSE;
 /* line 596: */
YJBAOSL.Input = A68_FALSE;
AKBAOSL.fn.fn_global = PPAAOSL_nullputbuffer;
AKBAOSL.nonlocals = A68_NIL;
YJBAOSL.Putbuffer = AKBAOSL;
BKBAOSL.fn.fn_global = SPAAOSL_nullgetbuffer;
BKBAOSL.nonlocals = A68_NIL;
YJBAOSL.Getbuffer = BKBAOSL;
CKBAOSL_ch = YJBAOSL;
 /* line 598: */
A_CLOSURE( EKBAOSL_putbuffer, FKBAOSL_putbuffer, GKBAOSL_putbuffer );
(( GKBAOSL_putbuffer * ) ( EKBAOSL_putbuffer.nonlocals )) -> CKBAOSL_ch = (&CKBAOSL_ch);
(( GKBAOSL_putbuffer * ) ( EKBAOSL_putbuffer.nonlocals )) -> VJBAOSL_restart = VJBAOSL_restart;
 /* line 605: */
QKBAOSL = (&((&CKBAOSL_ch)->Putbuffer)) ;
(*QKBAOSL) = EKBAOSL_putbuffer;
 /* line 607: */
WJBAOSL_restart:
 /* line 608: */
GFBAOSL_put((&CKBAOSL_ch), Out);
 /* line 609: */
 /* line 610: */
SKBAOSL = (*(&((&CKBAOSL_ch)->Buffer))) ;
ZAAAOSI_makervc( A_VTRIM(TKBAOSL,(SKBAOSL),A_VTSCRIPT(&(TKBAOSL.upb),(SKBAOSL).upb,1,((*(&((&CKBAOSL_ch)->Charnumber)))-1))), &UKBAOSL );
RKBAOSL = UKBAOSL;
} 
A_PROC_EXIT(oneline);
*ReturnedValue = (RKBAOSL);
return;
} 
#undef NL
 /* line 1: */
 /* line 3: */
void MTAAOSL(void)   /* initialise DECS putstrings */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/putstrings.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/iobasics.m","./mfiles/numberstr.m","/u/model/ella/osif/assoc/mfiles/strops.m","/u/model/ella/osif/assoc/mfiles/osif.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_128  KXAAOSL;  /* procedure value */
A68_129  RXAAOSL;  /* procedure value */
A68_VC  UXAAOSL;  /* OPERATORS - istruct -> vector */
A68_VC  VXAAOSL;  /* forall yield */
A68_INT  WXAAOSL;  /* forall loop counter */
A68_78  CJBAOSL;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
GNAAOSL();   /* USE iobasics */
VAAAOSL();   /* USE numberstr */
BAAAOSI();   /* USE strops */
VSCAOSI();   /* USE osif */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/oslib/assoc/./a68files/putstrings.a68";
A_config.translation_time = "Tue Apr  4 09:47:01 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "LTAAOSL (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 09:47:01 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS putstrings);
UEAALIB_a68config(LGAALIB_configinfo, QTAAOSL);
 /* line 218: */
 /* line 219: */
 /* line 226: */
 /* line 227: */
 /* line 229: */
 /* line 230: */
 /* line 248: */
 /* line 250: */
 /* line 257: */
 /* line 265: */
 /* line 292: */
 /* line 308: */
KXAAOSL.fn.fn_global = FXAAOSL_generator;
KXAAOSL.nonlocals = A68_NIL;
CXAAOSL_anonymous = KXAAOSL;
RXAAOSL.fn.fn_global = MXAAOSL_generator;
RXAAOSL.nonlocals = A68_NIL;
DXAAOSL_anonymous = RXAAOSL;
 /* line 311: */
 /* line 312: */
VXAAOSL = A_ISVEC(UXAAOSL,(&SXAAOSL_sp),512,A68_CHAR ) ;
WXAAOSL = VXAAOSL.upb -1;
TXAAOSL_ss = VXAAOSL.data;
for (;WXAAOSL-- >= 0;
(TXAAOSL_ss++
) )
{
(*TXAAOSL_ss) = ' ';
}
 /* line 315: */
 /* line 316: */
 /* line 317: */
 /* line 318: */
 /* line 319: */
 /* line 320: */
 /* line 321: */
 /* line 322: */
 /* line 323: */
 /* line 324: */
 /* line 327: */
 /* line 341: */
 /* line 411: */
 /* line 417: */
 /* line 433: */
 /* line 457: */
 /* line 473: */
 /* line 568: */
CJBAOSL.fn.fn_global = PPAAOSL_nullputbuffer;
CJBAOSL.nonlocals = A68_NIL;
BJBAOSL_null_strproc = CJBAOSL;
 /* line 571: */
 /* line 583: */
 /* line 592: */
 /* line 612: */
 /* line 614: */
 /* line 626: */
/*SKIP*/;
A_PROC_EXIT(DECS putstrings);
} 
#undef NL
/* end of translation of ./a68files/putstrings.a68 */
