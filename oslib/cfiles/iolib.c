
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
/* UNAME:SRBAOSL */
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

A_PROCEDURE(A68_VOID ,A68t84,(A68_BOOL ,struct A68t33 *),(A68_BOOL ,struct A68t33 *,void *));
typedef struct A68t84  A68_84 ;    /* PROC(BOOL) MODE33 */
A_VECTOR(struct A68t87 ,A68t86);
typedef struct A68t86  A68_86 ;    /* VECTOR [] MODE87 */
struct A68t87{
A68_INT  Number;
A_PAD_INT(PAD_16)
A68_BITS  Class;
A_PAD_BITS(PAD_17)
A68_VC  Text;
};
typedef struct A68t87  A68_87 ;    /* STRUCT(INT,BITS,MODE26)  */
struct A68t85{
A68_VC  Name;
struct A68t35  Messages;
A68_BOOL * Initialised;
struct A68t86  Setup;
};
typedef struct A68t85  A68_85 ;    /* STRUCT(MODE26,REF MODE35,REF BOOL,MODE86)  */

A_PROCEDURE(A68_VOID ,A68t88,(A68_BOOL ,struct A68t85 *),(A68_BOOL ,struct A68t85 *,void *));
typedef struct A68t88  A68_88 ;    /* PROC(BOOL) MODE85 */

A_PROCEDURE(A68_VOID ,A68t89,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t89  A68_89 ;    /* PROC(MODE26) REF MODE26 */
A_VECTOR(A68_VC ,A68t90);
typedef struct A68t90  A68_90 ;    /* VECTOR [] REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t91,(struct A68t33 ,struct A68t90 *),(struct A68t33 ,struct A68t90 *,void *));
typedef struct A68t91  A68_91 ;    /* PROC(MODE33) MODE90 */

A_PROCEDURE(A68_VOID ,A68t92,(struct A68t90 ,struct A68t33 *),(struct A68t90 ,struct A68t33 *,void *));
typedef struct A68t92  A68_92 ;    /* PROC(MODE90) MODE33 */
struct A68t94 ;

A_PROCEDURE(A68_BOOL ,A68t93,(struct A68t94 ),(struct A68t94 ,void *));
typedef struct A68t93  A68_93 ;    /* PROC(MODE94) BOOL */
struct A68t94 { A68_INT mode; union {
struct A68t32  mode1;
struct A68t36  mode2;
} data; };
typedef struct A68t94  A68_94 ;    /* UNION(MODE32,MODE36)  */

A_PROCEDURE(A68_INT ,A68t95,(struct A68t32 ),(struct A68t32 ,void *));
typedef struct A68t95  A68_95 ;    /* PROC(MODE32) INT */

A_PROCEDURE(A68_VOID ,A68t96,(A68_INT ,struct A68t85 ,struct A68t32 *),(A68_INT ,struct A68t85 ,struct A68t32 *,void *));
typedef struct A68t96  A68_96 ;    /* PROC(INT,MODE85) MODE32 */

A_PROCEDURE(A68_BOOL ,A68t97,(struct A68t32 ,struct A68t85 ),(struct A68t32 ,struct A68t85 ,void *));
typedef struct A68t97  A68_97 ;    /* PROC(MODE32,MODE85) BOOL */

A_PROCEDURE(A68_VOID ,A68t98,(struct A68t32 ,struct A68t33 ,struct A68t36 *),(struct A68t32 ,struct A68t33 ,struct A68t36 *,void *));
typedef struct A68t98  A68_98 ;    /* PROC(MODE32,MODE33) MODE36 */

A_PROCEDURE(A68_VOID ,A68t99,(A68_BOOL ,struct A68t72 *),(A68_BOOL ,struct A68t72 *,void *));
typedef struct A68t99  A68_99 ;    /* PROC(BOOL) MODE72 */

A_PROCEDURE(A68_VOID ,A68t101,(A68_VC ,A68_INT *,struct A68t38 *),(A68_VC ,A68_INT *,struct A68t38 *,void *));
typedef struct A68t101  A68_101 ;    /* PROC(REF MODE26,REF INT) MODE38 */
struct A68t100{
A68_INT  Charnumber;
A_PAD_INT(PAD_18)
A68_INT  Linenumber;
A_PAD_INT(PAD_19)
A68_INT  Indent;
A_PAD_INT(PAD_20)
A68_INT  Width;
A_PAD_INT(PAD_21)
A68_INT  Sizeincr;
A_PAD_INT(PAD_22)
struct A68t38  Status;
A68_VC  Buffer;
A68_BOOL  Buffered;
A_PAD_BOOL(PAD_23)
A68_BOOL  Separate;
A_PAD_BOOL(PAD_24)
A68_BOOL  Input;
A_PAD_BOOL(PAD_25)
struct A68t78  Putbuffer;
struct A68t101  Getbuffer;
};
typedef struct A68t100  A68_100 ;    /* STRUCT(INT,INT,INT,INT,INT,MODE38,REF MODE26,BOOL,BOOL,BOOL,MODE78,MODE101)  */

A_PROCEDURE(A68_VOID ,A68t102,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t102  A68_102 ;    /* PROC(REF MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t103,(A68_CHAR ,A68_VC *),(A68_CHAR ,A68_VC *,void *));
typedef struct A68t103  A68_103 ;    /* PROC(CHAR) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t104,(struct A68t72 ,struct A68t72 *),(struct A68t72 ,struct A68t72 *,void *));
typedef struct A68t104  A68_104 ;    /* PROC(MODE72) REF MODE72 */

A_PROCEDURE(A68_VOID ,A68t105,(A68_INT ,struct A68t72 *),(A68_INT ,struct A68t72 *,void *));
typedef struct A68t105  A68_105 ;    /* PROC(INT) REF MODE72 */

A_PROCEDURE(A68_VOID ,A68t106,(A68_VC ),(A68_VC ,void *));
typedef struct A68t106  A68_106 ;    /* PROC(REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t107,(struct A68t72 ),(struct A68t72 ,void *));
typedef struct A68t107  A68_107 ;    /* PROC(REF MODE72) VOID */

A_PROCEDURE(A68_VOID ,A68t108,(struct A68t33 ,A68_VC *),(struct A68t33 ,A68_VC *,void *));
typedef struct A68t108  A68_108 ;    /* PROC(MODE33) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t109,(A68_VC ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t109  A68_109 ;    /* PROC(MODE26,INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t110,(A68_CHAR ,A68_INT ,A68_VC *),(A68_CHAR ,A68_INT ,A68_VC *,void *));
typedef struct A68t110  A68_110 ;    /* PROC(CHAR,INT) MODE26 */
struct A68t112 ;

A_PROCEDURE(A68_VOID ,A68t111,(struct A68t112 ,A68_VC *),(struct A68t112 ,A68_VC *,void *));
typedef struct A68t111  A68_111 ;    /* PROC(MODE112) MODE26 */
struct A68t112 { A68_INT mode; union {
A68_BITS  mode1;
A68_INT  mode2;
A68_SBITS  mode3;
A68_SINT  mode4;
A68_CHAR  mode5;
} data; };
typedef struct A68t112  A68_112 ;    /* UNION(BITS,INT,SHORT BITS,SHORT INT,CHAR)  */

A_PROCEDURE(A68_VOID ,A68t113,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t113  A68_113 ;    /* PROC(INT) MODE26 */
A_VECTOR(A68_BITS ,A68t115);
typedef struct A68t115  A68_115 ;    /* VECTOR [] BITS */
A_VECTOR(A68_BOOL ,A68t116);
typedef struct A68t116  A68_116 ;    /* VECTOR [] BOOL */
A_VECTOR(A68_REAL ,A68t117);
typedef struct A68t117  A68_117 ;    /* VECTOR [] REAL */

A_PROCEDURE(A68_VOID ,A68t118,(struct A68t100 *),(struct A68t100 *,void *));
typedef struct A68t118  A68_118 ;    /* PROC(REF MODE100) VOID */
struct A68t119{
A68_INT  Int;
A_PAD_INT(PAD_26)
A68_INT  Width;
A_PAD_INT(PAD_27)
};
typedef struct A68t119  A68_119 ;    /* STRUCT(INT,INT)  */
struct A68t120{
A68_VC  Str;
A68_INT  Width;
A_PAD_INT(PAD_28)
};
typedef struct A68t120  A68_120 ;    /* STRUCT(MODE26,INT)  */
struct A68t121{
A68_VC  Str;
A68_INT  Justify;
A_PAD_INT(PAD_29)
};
typedef struct A68t121  A68_121 ;    /* STRUCT(MODE26,INT)  */
struct A68t122{
A68_INT  Tab;
A_PAD_INT(PAD_30)
};
typedef struct A68t122  A68_122 ;    /* STRUCT(INT)  */
struct A68t123{
A68_INT  Pos;
A_PAD_INT(PAD_31)
};
typedef struct A68t123  A68_123 ;    /* STRUCT(INT)  */
struct A68t124{
A68_INT  After;
A_PAD_INT(PAD_32)
};
typedef struct A68t124  A68_124 ;    /* STRUCT(INT)  */
struct A68t125{
A68_INT  Spaces;
A_PAD_INT(PAD_33)
};
typedef struct A68t125  A68_125 ;    /* STRUCT(INT)  */
struct A68t126{
A68_INT  Lines;
A_PAD_INT(PAD_34)
};
typedef struct A68t126  A68_126 ;    /* STRUCT(INT)  */
struct A68t127{
A68_INT  Indent;
A_PAD_INT(PAD_35)
};
typedef struct A68t127  A68_127 ;    /* STRUCT(INT)  */
A_STRAIGHT(A68_VOID,A68t128);
typedef struct A68t128  A68_128 ;    /* STRAIGHT MODE114 */
struct A68t114 { A68_INT mode; union {
A68_INT  mode1;
struct A68t72  mode2;
A68_BITS  mode3;
struct A68t115  mode4;
A68_SBITS  mode5;
A68_CHAR  mode6;
A68_VC  mode7;
A68_BOOL  mode8;
struct A68t116  mode9;
A68_REAL  mode10;
struct A68t117  mode11;
struct A68t118  mode12;
struct A68t119  mode13;
struct A68t120  mode14;
struct A68t121  mode15;
struct A68t122  mode16;
struct A68t123  mode17;
struct A68t124  mode18;
struct A68t125  mode19;
struct A68t126  mode20;
struct A68t127  mode21;
struct A68t128  mode22;
} data; };
typedef struct A68t114  A68_114 ;    /* UNION(INT,MODE72,BITS,MODE115,SHORT BITS,CHAR,MODE26,BOOL,MODE116,REAL,MODE117,MODE118,MODE119,MODE120,MODE121,MODE122,MODE123,MODE124,MODE125,MODE126,MODE127,MODE128)  */

A_PROCEDURE(A68_VOID ,A68t129,(A68_BOOL ,struct A68t120 *),(A68_BOOL ,struct A68t120 *,void *));
typedef struct A68t129  A68_129 ;    /* PROC(BOOL) MODE120 */

A_PROCEDURE(A68_VOID ,A68t130,(A68_BOOL ,struct A68t121 *),(A68_BOOL ,struct A68t121 *,void *));
typedef struct A68t130  A68_130 ;    /* PROC(BOOL) MODE121 */

A_PROCEDURE(A68_INT ,A68t131,(struct A68t100 *),(struct A68t100 *,void *));
typedef struct A68t131  A68_131 ;    /* PROC(REF MODE100) INT */

A_PROCEDURE(A68_INT ,A68t132,(struct A68t100 *,A68_INT ),(struct A68t100 *,A68_INT ,void *));
typedef struct A68t132  A68_132 ;    /* PROC(REF MODE100,INT) INT */

A_PROCEDURE(A68_VOID ,A68t133,(A68_INT ,A68_INT ,struct A68t119 *),(A68_INT ,A68_INT ,struct A68t119 *,void *));
typedef struct A68t133  A68_133 ;    /* PROC(INT,INT) MODE119 */

A_PROCEDURE(A68_VOID ,A68t134,(A68_VC ,A68_INT ,struct A68t120 *),(A68_VC ,A68_INT ,struct A68t120 *,void *));
typedef struct A68t134  A68_134 ;    /* PROC(MODE26,INT) MODE120 */

A_PROCEDURE(A68_VOID ,A68t135,(A68_VC ,A68_INT ,struct A68t121 *),(A68_VC ,A68_INT ,struct A68t121 *,void *));
typedef struct A68t135  A68_135 ;    /* PROC(MODE26,INT) MODE121 */

A_PROCEDURE(A68_VOID ,A68t136,(A68_INT ,struct A68t122 *),(A68_INT ,struct A68t122 *,void *));
typedef struct A68t136  A68_136 ;    /* PROC(INT) MODE122 */

A_PROCEDURE(A68_VOID ,A68t137,(A68_INT ,struct A68t123 *),(A68_INT ,struct A68t123 *,void *));
typedef struct A68t137  A68_137 ;    /* PROC(INT) MODE123 */

A_PROCEDURE(A68_VOID ,A68t138,(A68_INT ,struct A68t124 *),(A68_INT ,struct A68t124 *,void *));
typedef struct A68t138  A68_138 ;    /* PROC(INT) MODE124 */

A_PROCEDURE(A68_VOID ,A68t139,(A68_INT ,struct A68t125 *),(A68_INT ,struct A68t125 *,void *));
typedef struct A68t139  A68_139 ;    /* PROC(INT) MODE125 */

A_PROCEDURE(A68_VOID ,A68t140,(A68_INT ,struct A68t126 *),(A68_INT ,struct A68t126 *,void *));
typedef struct A68t140  A68_140 ;    /* PROC(INT) MODE126 */

A_PROCEDURE(A68_VOID ,A68t141,(A68_INT ,struct A68t127 *),(A68_INT ,struct A68t127 *,void *));
typedef struct A68t141  A68_141 ;    /* PROC(INT) MODE127 */

A_PROCEDURE(A68_VOID ,A68t142,(struct A68t100 *,A68_VC ),(struct A68t100 *,A68_VC ,void *));
typedef struct A68t142  A68_142 ;    /* PROC(REF MODE100,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t143,(struct A68t100 *,A68_INT ,A68_INT ),(struct A68t100 *,A68_INT ,A68_INT ,void *));
typedef struct A68t143  A68_143 ;    /* PROC(REF MODE100,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t144,(struct A68t100 *,A68_BITS ,A68_INT ),(struct A68t100 *,A68_BITS ,A68_INT ,void *));
typedef struct A68t144  A68_144 ;    /* PROC(REF MODE100,BITS,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t145,(struct A68t100 *,A68_REAL ,A68_INT ,A68_INT ),(struct A68t100 *,A68_REAL ,A68_INT ,A68_INT ,void *));
typedef struct A68t145  A68_145 ;    /* PROC(REF MODE100,REAL,INT,INT) VOID */
struct A68t147 ;

A_PROCEDURE(A68_VOID ,A68t146,(struct A68t100 *,struct A68t147 ),(struct A68t100 *,struct A68t147 ,void *));
typedef struct A68t146  A68_146 ;    /* PROC(REF MODE100,MODE147) VOID */
A_VECTOR(struct A68t114 ,A68t147);
typedef struct A68t147  A68_147 ;    /* VECTOR [] MODE114 */
struct A68t149 ;
struct A68t150 ;

A_PROCEDURE(struct A68t100 *,A68t148,(struct A68t149 ,struct A68t150 ),(struct A68t149 ,struct A68t150 ,void *));
typedef struct A68t148  A68_148 ;    /* PROC(MODE149,MODE150) REF MODE100 */
struct A68t149 { A68_INT mode; union {
A68_INT  mode1;
A68_VC  mode2;
} data; };
typedef struct A68t149  A68_149 ;    /* UNION(INT,REF MODE26)  */
struct A68t150 { A68_INT mode; union {
struct A68t78  mode1;
struct A68t101  mode2;
} data; };
typedef struct A68t150  A68_150 ;    /* UNION(MODE78,MODE101)  */

A_PROCEDURE(A68_VOID ,A68t151,(A68_VC ,struct A68t147 ,A68_VC *),(A68_VC ,struct A68t147 ,A68_VC *,void *));
typedef struct A68t151  A68_151 ;    /* PROC(REF MODE26,MODE147) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t152,(struct A68t100 *,A68_VC *),(struct A68t100 *,A68_VC *,void *));
typedef struct A68t152  A68_152 ;    /* PROC(REF MODE100) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t153,(struct A68t147 ,A68_VC *),(struct A68t147 ,A68_VC *,void *));
typedef struct A68t153  A68_153 ;    /* PROC(MODE147) REF MODE26 */
A_ROW(A68_INT ,A68t155,1);
typedef struct A68t155  A68_155 ;    /* [] INT */
A_ROW(A68_BITS ,A68t156,1);
typedef struct A68t156  A68_156 ;    /* [] BITS */
A_ROW(A68_BOOL ,A68t157,1);
typedef struct A68t157  A68_157 ;    /* [] BOOL */
A_ROW(A68_REAL ,A68t158,1);
typedef struct A68t158  A68_158 ;    /* [] REAL */
A_STRAIGHT(A68_VOID,A68t159);
typedef struct A68t159  A68_159 ;    /* STRAIGHT MODE154 */
struct A68t154 { A68_INT mode; union {
A68_INT * mode1;
struct A68t72  mode2;
struct A68t155  mode3;
A68_BITS * mode4;
struct A68t115  mode5;
struct A68t156  mode6;
A68_CHAR * mode7;
A68_VC  mode8;
A68_RC  mode9;
A68_BOOL * mode10;
struct A68t116  mode11;
struct A68t157  mode12;
A68_REAL * mode13;
struct A68t117  mode14;
struct A68t158  mode15;
struct A68t118  mode16;
struct A68t159  mode17;
} data; };
typedef struct A68t154  A68_154 ;    /* UNION(REF INT,REF MODE72,REF MODE155,REF BITS,REF MODE115,REF MODE156,REF CHAR,REF MODE26,REF MODE27,REF BOOL,REF MODE116,REF MODE157,REF REAL,REF MODE117,REF MODE158,MODE118,MODE159)  */

A_PROCEDURE(A68_CHAR ,A68t160,(struct A68t100 *),(struct A68t100 *,void *));
typedef struct A68t160  A68_160 ;    /* PROC(REF MODE100) CHAR */

A_PROCEDURE(A68_REAL ,A68t161,(struct A68t100 *),(struct A68t100 *,void *));
typedef struct A68t161  A68_161 ;    /* PROC(REF MODE100) REAL */

A_PROCEDURE(A68_BOOL ,A68t162,(struct A68t100 *),(struct A68t100 *,void *));
typedef struct A68t162  A68_162 ;    /* PROC(REF MODE100) BOOL */

A_PROCEDURE(A68_VOID ,A68t163,(struct A68t100 *,A68_VC *),(struct A68t100 *,A68_VC *,void *));
typedef struct A68t163  A68_163 ;    /* PROC(REF MODE100) MODE26 */

A_PROCEDURE(A68_VOID ,A68t164,(struct A68t100 *,struct A68t38 *),(struct A68t100 *,struct A68t38 *,void *));
typedef struct A68t164  A68_164 ;    /* PROC(REF MODE100) MODE38 */
struct A68t166 ;

A_PROCEDURE(A68_BOOL ,A68t165,(struct A68t100 *,struct A68t166 ),(struct A68t100 *,struct A68t166 ,void *));
typedef struct A68t165  A68_165 ;    /* PROC(REF MODE100,MODE166) BOOL */
A_VECTOR(struct A68t154 ,A68t166);
typedef struct A68t166  A68_166 ;    /* VECTOR [] MODE154 */

A_PROCEDURE(A68_VOID ,A68t167,(A68_INT ,struct A68t38 *),(A68_INT ,struct A68t38 *,void *));
typedef struct A68t167  A68_167 ;    /* PROC(INT) MODE38 */

A_PROCEDURE(A68_VOID ,A68t168,(struct A68t75 ),(struct A68t75 ,void *));
typedef struct A68t168  A68_168 ;    /* PROC(MODE75) VOID */

A_PROCEDURE(A68_VOID ,A68t169,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t169  A68_169 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,52,A68t170);
typedef struct A68t170  A68_170 ;    /* STRUCT 52 CHAR */
A_ISTRUCT(A68_CHAR ,1024,A68t171);
typedef struct A68t171  A68_171 ;    /* STRUCT 1024 CHAR */

A_PROCEDURE(A68_VOID ,A68t172,(struct A68t147 ),(struct A68t147 ,void *));
typedef struct A68t172  A68_172 ;    /* PROC(MODE147) VOID */

A_PROCEDURE(A68_BOOL ,A68t173,(struct A68t166 ),(struct A68t166 ,void *));
typedef struct A68t173  A68_173 ;    /* PROC(MODE166) BOOL */

/* --- Imports from a68config --- */
extern A68_VOID  ABAALIB_a68init(struct A68t75 );
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from getstrings --- */
extern A68_100 * XPAAOSL_make_channel(struct A68t149 ,struct A68t150 );
extern A68_BOOL  AQBAOSL_get(struct A68t100 *,struct A68t166 );
/* --- End of imports from getstrings --- */


/* --- Imports from putstrings --- */
extern A68_VOID  GFBAOSL_put(struct A68t100 *,struct A68t147 );
/* --- End of imports from putstrings --- */


/* --- Imports from messageproc --- */
/* --- End of imports from messageproc --- */


/* --- Imports from osif --- */
#include <errno.h>

#define XFBAOSI_errno errno
extern A68_31  ZLBAOSI_global_msg;
extern A68_37 * INBAOSI_stdin;
extern A68_37 * JNBAOSI_stdout;
extern A68_37 * KNBAOSI_stderr;
extern A68_VOID  SRBAOSI_read_line(struct A68t37 *,A68_VC ,A68_INT *,struct A68t31 ,A68_38 *);
extern A68_VOID  JSBAOSI_write_buffer(struct A68t37 *,A68_VC ,struct A68t31 ,A68_38 *);
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
extern void VKBAOSL(void);   /* getstrings */
extern void MTAAOSL(void);   /* putstrings */
extern void JFAAOSI(void);   /* messageproc */
extern void VSCAOSI(void);   /* osif */
/* --- end of DECS initialisation functions --- */
static A68_170   WRBAOSL = {"$Id: iolib.a68,v 34.2 1995/03/29 13:02:16 ella Exp $"}; 
A_GISVEC(A68_VC ,XRBAOSL,WRBAOSL,52)
A68_100 * YRBAOSL_stdoutchan;
A68_100 * ZRBAOSL_stderrchan;
A68_100 * ASBAOSL_stdinchan;
static A68_171  BSBAOSL_outbuff;
static A68_171  CSBAOSL_errbuff;
static A68_171  DSBAOSL_inbuff;

A68_VOID  FSBAOSL_print(A68_147  Line);

A68_VOID  HSBAOSL_printerr(A68_147  Line);

A68_BOOL  JSBAOSL_read(A68_166  In);

A_STATIC A68_VOID  MSBAOSL_put_stdout_line(A68_VC  S);

A_STATIC A68_VOID  PSBAOSL_put_stderr_line(A68_VC  S);

A_STATIC A68_VOID  TSBAOSL_get_stdin_line(A68_VC  S, A68_INT * Length, A68_38  *ReturnedValue);

A_STATIC A68_VOID  WSBAOSL_init_oslib(void);

A68_VOID  FSBAOSL_print(A68_147  Line)
{ 
A_PROC_ENTRY(print);
GFBAOSL_put(YRBAOSL_stdoutchan, Line);
A_PROC_EXIT(print);
return;
} 
#undef NL

A68_VOID  HSBAOSL_printerr(A68_147  Line)
{ 
A_PROC_ENTRY(printerr);
GFBAOSL_put(ZRBAOSL_stderrchan, Line);
A_PROC_EXIT(printerr);
return;
} 
#undef NL

A68_BOOL  JSBAOSL_read(A68_166  In)
{ 
A68_BOOL  KSBAOSL;  /* clause result */
A_PROC_ENTRY(read);
KSBAOSL = AQBAOSL_get(ASBAOSL_stdinchan, In);
A_PROC_EXIT(read);
return( KSBAOSL );
} 
#undef NL

A_STATIC A68_VOID  MSBAOSL_put_stdout_line(A68_VC  S)
{ 
A68_38  NSBAOSL;  /* avoid structure result */
A_PROC_ENTRY(put_stdout_line);
JSBAOSI_write_buffer( JNBAOSI_stdout, S, ZLBAOSI_global_msg, &NSBAOSL );
NSBAOSL;
A_PROC_EXIT(put_stdout_line);
return;
} 
#undef NL

A_STATIC A68_VOID  PSBAOSL_put_stderr_line(A68_VC  S)
{ 
A68_38  QSBAOSL;  /* avoid structure result */
A_PROC_ENTRY(put_stderr_line);
JSBAOSI_write_buffer( KNBAOSI_stderr, S, ZLBAOSI_global_msg, &QSBAOSL );
QSBAOSL;
A_PROC_EXIT(put_stderr_line);
return;
} 
#undef NL

A_STATIC A68_VOID  TSBAOSL_get_stdin_line(A68_VC  S, A68_INT * Length, A68_38  *ReturnedValue)
{ 
A68_38  USBAOSL;  /* clause result */
A68_38  VSBAOSL;  /* avoid structure result */
A_PROC_ENTRY(get_stdin_line);
 /* line 52: */
SRBAOSI_read_line( INBAOSI_stdin, S, Length, ZLBAOSI_global_msg, &VSBAOSL );
USBAOSL = VSBAOSL;
A_PROC_EXIT(get_stdin_line);
*ReturnedValue = (USBAOSL);
return;
} 
#undef NL

A_STATIC A68_VOID  WSBAOSL_init_oslib(void)
{ 
A68_150  XSBAOSL;  /* OPERATORS - mode -> union mode */
A68_78  YSBAOSL;  /* YIELD */
A68_78  ZSBAOSL;  /* procedure value */
A68_VC  ATBAOSL;  /* OPERATORS - istruct -> vector */
A68_149  BTBAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  CTBAOSL;  /* YIELD */
A68_150  DTBAOSL;  /* OPERATORS - mode -> union mode */
A68_78  ETBAOSL;  /* YIELD */
A68_78  FTBAOSL;  /* procedure value */
A68_VC  GTBAOSL;  /* OPERATORS - istruct -> vector */
A68_149  HTBAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  ITBAOSL;  /* YIELD */
A68_150  JTBAOSL;  /* OPERATORS - mode -> union mode */
A68_101  KTBAOSL;  /* YIELD */
A68_101  LTBAOSL;  /* procedure value */
A68_VC  MTBAOSL;  /* OPERATORS - istruct -> vector */
A68_149  NTBAOSL;  /* OPERATORS - mode -> union mode */
A68_VC  OTBAOSL;  /* YIELD */
A_PROC_ENTRY(init_oslib);
{ 
ZSBAOSL.fn.fn_global = MSBAOSL_put_stdout_line;
ZSBAOSL.nonlocals = A68_NIL;
YSBAOSL = ZSBAOSL ;
CTBAOSL = A_ISVEC(ATBAOSL,(&BSBAOSL_outbuff),1024,A68_CHAR ) ;
YRBAOSL_stdoutchan = XPAAOSL_make_channel(A_UNITE(BTBAOSL,mode2,2,CTBAOSL), A_UNITE(XSBAOSL,mode1,1,YSBAOSL));
 /* line 56: */
FTBAOSL.fn.fn_global = PSBAOSL_put_stderr_line;
FTBAOSL.nonlocals = A68_NIL;
ETBAOSL = FTBAOSL ;
ITBAOSL = A_ISVEC(GTBAOSL,(&CSBAOSL_errbuff),1024,A68_CHAR ) ;
ZRBAOSL_stderrchan = XPAAOSL_make_channel(A_UNITE(HTBAOSL,mode2,2,ITBAOSL), A_UNITE(DTBAOSL,mode1,1,ETBAOSL));
 /* line 57: */
LTBAOSL.fn.fn_global = TSBAOSL_get_stdin_line;
LTBAOSL.nonlocals = A68_NIL;
KTBAOSL = LTBAOSL ;
OTBAOSL = A_ISVEC(MTBAOSL,(&DSBAOSL_inbuff),1024,A68_CHAR ) ;
ASBAOSL_stdinchan = XPAAOSL_make_channel(A_UNITE(NTBAOSL,mode2,2,OTBAOSL), A_UNITE(JTBAOSL,mode2,2,KTBAOSL));
 /* line 58: */
 /* line 59: */
/*SKIP*/;
} 
A_PROC_EXIT(init_oslib);
return;
} 
#undef NL
 /* line 1: */
 /* line 3: */
void TRBAOSL(void)   /* initialise DECS iolib */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/iolib.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/getstrings.m","./mfiles/putstrings.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/osif/assoc/mfiles/osif.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_75  PTBAOSL;  /* procedure value */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
VKBAOSL();   /* USE getstrings */
MTAAOSL();   /* USE putstrings */
JFAAOSI();   /* USE messageproc */
VSCAOSI();   /* USE osif */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/oslib/assoc/./a68files/iolib.a68";
A_config.translation_time = "Tue Apr  4 09:47:11 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "SRBAOSL (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 09:47:11 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS iolib);
UEAALIB_a68config(LGAALIB_configinfo, XRBAOSL);
 /* line 42: */
 /* line 43: */
 /* line 45: */
 /* line 46: */
 /* line 47: */
 /* line 49: */
 /* line 50: */
 /* line 51: */
 /* line 53: */
 /* line 54: */
 /* line 55: */
 /* line 61: */
 /* line 63: */
 /* line 65: */
PTBAOSL.fn.fn_global = WSBAOSL_init_oslib;
PTBAOSL.nonlocals = A68_NIL;
ABAALIB_a68init(PTBAOSL);
A_PROC_EXIT(DECS iolib);
} 
#undef NL
/* end of translation of ./a68files/iolib.a68 */
