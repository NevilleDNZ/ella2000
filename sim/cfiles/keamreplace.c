
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
/* UNAME:TPWASIM */
#include "Asupport.h"
struct A68t31{
A68_VC  Context;
A68_VC  Import;
};
typedef struct A68t31  A68_31 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t32{
A68_VC  Id;
struct A68t32 * Rest;
};
typedef struct A68t32  A68_32 ;    /* STRUCT(REF MODE26,REF MODE32)  */
struct A68t33{
A68_INT  Int;
A_PAD_INT(PAD_1)
struct A68t33 * Rest;
};
typedef struct A68t33  A68_33 ;    /* STRUCT(INT,REF MODE33)  */
struct A68t34 { A68_INT mode; union {
struct A68t35 * mode1;
struct A68t36 * mode2;
struct A68t37 * mode3;
struct A68t38 * mode4;
struct A68t39 * mode5;
} data; };
typedef struct A68t34  A68_34 ;    /* UNION(REF MODE35,REF MODE36,REF MODE37,REF MODE38,REF MODE39)  */
struct A68t35{
A68_INT  Attrno;
A_PAD_INT(PAD_2)
};
typedef struct A68t35  A68_35 ;    /* STRUCT(INT)  */
struct A68t36{
A68_VC  Classname;
struct A68t32 * Strings;
};
typedef struct A68t36  A68_36 ;    /* STRUCT(REF MODE26,REF MODE32)  */
struct A68t37{
struct A68t34  Elem;
struct A68t37 * Rest;
};
typedef struct A68t37  A68_37 ;    /* STRUCT(MODE34,REF MODE37)  */
struct A68t38{
struct A68t34  Attr;
};
typedef struct A68t38  A68_38 ;    /* STRUCT(MODE34)  */
struct A68t39{
A68_INT  Attrnull;
A_PAD_INT(PAD_3)
};
typedef struct A68t39  A68_39 ;    /* STRUCT(INT)  */
struct A68t40{
A68_INT  Sort;
A_PAD_INT(PAD_4)
A68_VC  Attrname;
struct A68t34  Value;
struct A68t41 * Usage;
};
typedef struct A68t40  A68_40 ;    /* STRUCT(INT,REF MODE26,MODE34,REF MODE41)  */
struct A68t41{
A68_INT  Contextno;
A_PAD_INT(PAD_5)
A68_INT  Closureno;
A_PAD_INT(PAD_6)
A68_INT  Libv_spec;
A_PAD_INT(PAD_7)
A68_INT  Libv_body;
A_PAD_INT(PAD_8)
A68_BOOL  Import;
A_PAD_BOOL(PAD_9)
A68_BOOL  Export;
A_PAD_BOOL(PAD_10)
};
typedef struct A68t41  A68_41 ;    /* STRUCT(INT,INT,INT,INT,BOOL,BOOL)  */
struct A68t42{
struct A68t34  Tag;
};
typedef struct A68t42  A68_42 ;    /* STRUCT(MODE34)  */
struct A68t43 { A68_INT mode; union {
struct A68t44 * mode1;
struct A68t45 * mode2;
struct A68t46 * mode3;
struct A68t47 * mode4;
struct A68t48 * mode5;
struct A68t49 * mode6;
struct A68t50 * mode7;
struct A68t51 * mode8;
struct A68t52 * mode9;
struct A68t53 * mode10;
} data; };
typedef struct A68t43  A68_43 ;    /* UNION(REF MODE44,REF MODE45,REF MODE46,REF MODE47,REF MODE48,REF MODE49,REF MODE50,REF MODE51,REF MODE52,REF MODE53)  */
struct A68t44{
A68_INT  Int;
A_PAD_INT(PAD_11)
A68_VC  Text;
};
typedef struct A68t44  A68_44 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t45{
A68_INT  Sort;
A_PAD_INT(PAD_12)
struct A68t43  Test;
struct A68t43  Standard;
};
typedef struct A68t45  A68_45 ;    /* STRUCT(INT,MODE43,MODE43)  */
struct A68t46{
A68_INT  Nameno;
A_PAD_INT(PAD_13)
};
typedef struct A68t46  A68_46 ;    /* STRUCT(INT)  */
struct A68t47{
A68_INT  Intno;
A_PAD_INT(PAD_14)
};
typedef struct A68t47  A68_47 ;    /* STRUCT(INT)  */
struct A68t48{
struct A68t43  Left;
A68_INT  Sort;
A_PAD_INT(PAD_15)
struct A68t43  Right;
};
typedef struct A68t48  A68_48 ;    /* STRUCT(MODE43,INT,MODE43)  */
struct A68t49{
A68_INT  Sort;
A_PAD_INT(PAD_16)
struct A68t43  Right;
};
typedef struct A68t49  A68_49 ;    /* STRUCT(INT,MODE43)  */
struct A68t50{
struct A68t43  Cond;
struct A68t43  True;
struct A68t43  False;
};
typedef struct A68t50  A68_50 ;    /* STRUCT(MODE43,MODE43,MODE43)  */
struct A68t51{
struct A68t43  Formula;
};
typedef struct A68t51  A68_51 ;    /* STRUCT(MODE43)  */
struct A68t52{
A68_INT  Macparno;
A_PAD_INT(PAD_17)
};
typedef struct A68t52  A68_52 ;    /* STRUCT(INT)  */
struct A68t53{
A68_INT  Fnull;
A_PAD_INT(PAD_18)
};
typedef struct A68t53  A68_53 ;    /* STRUCT(INT)  */
struct A68t54{
struct A68t43  Tag;
};
typedef struct A68t54  A68_54 ;    /* STRUCT(MODE43)  */
struct A68t55{
struct A68t43  Formula;
struct A68t55 * Rest;
};
typedef struct A68t55  A68_55 ;    /* STRUCT(MODE43,REF MODE55)  */
struct A68t58{
struct A68t43  Lwb;
struct A68t43  Upb;
};
typedef struct A68t58  A68_58 ;    /* STRUCT(MODE43,MODE43)  */
struct A68t57 { A68_INT mode; union {
struct A68t44 * mode1;
struct A68t45 * mode2;
struct A68t46 * mode3;
struct A68t47 * mode4;
struct A68t48 * mode5;
struct A68t49 * mode6;
struct A68t50 * mode7;
struct A68t51 * mode8;
struct A68t52 * mode9;
struct A68t53 * mode10;
struct A68t58  mode11;
} data; };
typedef struct A68t57  A68_57 ;    /* UNION(REF MODE44,REF MODE45,REF MODE46,REF MODE47,REF MODE48,REF MODE49,REF MODE50,REF MODE51,REF MODE52,REF MODE53,MODE58)  */
struct A68t56{
A68_INT  Sort;
A_PAD_INT(PAD_19)
A68_VC  Intname;
struct A68t34  Attr;
struct A68t57  Value;
struct A68t41 * Usage;
};
typedef struct A68t56  A68_56 ;    /* STRUCT(INT,REF MODE26,MODE34,MODE57,REF MODE41)  */
struct A68t59 { A68_INT mode; union {
struct A68t60 * mode1;
struct A68t61 * mode2;
struct A68t62 * mode3;
struct A68t63 * mode4;
struct A68t64 * mode5;
struct A68t65 * mode6;
struct A68t66 * mode7;
struct A68t52 * mode8;
struct A68t67 * mode9;
} data; };
typedef struct A68t59  A68_59 ;    /* UNION(REF MODE60,REF MODE61,REF MODE62,REF MODE63,REF MODE64,REF MODE65,REF MODE66,REF MODE52,REF MODE67)  */
struct A68t60{
A68_INT  Typeno;
A_PAD_INT(PAD_20)
};
typedef struct A68t60  A68_60 ;    /* STRUCT(INT)  */
struct A68t61{
struct A68t43  Size;
struct A68t59  Elem;
};
typedef struct A68t61  A68_61 ;    /* STRUCT(MODE43,MODE59)  */
struct A68t62{
struct A68t59  Elem;
struct A68t62 * Rest;
};
typedef struct A68t62  A68_62 ;    /* STRUCT(MODE59,REF MODE62)  */
struct A68t63{
struct A68t59  From;
struct A68t59  To;
};
typedef struct A68t63  A68_63 ;    /* STRUCT(MODE59,MODE59)  */
struct A68t64{
struct A68t59  Type;
};
typedef struct A68t64  A68_64 ;    /* STRUCT(MODE59)  */
struct A68t65{
struct A68t43  Size;
struct A68t59  Char;
};
typedef struct A68t65  A68_65 ;    /* STRUCT(MODE43,MODE59)  */
struct A68t66{
A68_INT  Tvoid;
A_PAD_INT(PAD_21)
};
typedef struct A68t66  A68_66 ;    /* STRUCT(INT)  */
struct A68t67{
A68_INT  Tnull;
A_PAD_INT(PAD_22)
};
typedef struct A68t67  A68_67 ;    /* STRUCT(INT)  */
struct A68t68{
struct A68t59  Tag;
};
typedef struct A68t68  A68_68 ;    /* STRUCT(MODE59)  */
struct A68t69{
A68_VC  Tagname;
A68_VC  Chars;
};
typedef struct A68t69  A68_69 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t70{
A68_VC  Altname;
struct A68t59  Assoc;
};
typedef struct A68t70  A68_70 ;    /* STRUCT(REF MODE26,MODE59)  */
struct A68t71{
A68_VC  Tagname;
struct A68t58  Range;
};
typedef struct A68t71  A68_71 ;    /* STRUCT(REF MODE26,MODE58)  */
A_VECTOR(struct A68t70 ,A68t73);
typedef struct A68t73  A68_73 ;    /* VECTOR [] MODE70 */
struct A68t72 { A68_INT mode; union {
struct A68t73  mode1;
struct A68t71 * mode2;
struct A68t68 * mode3;
struct A68t69 * mode4;
} data; };
typedef struct A68t72  A68_72 ;    /* UNION(REF MODE73,REF MODE71,REF MODE68,REF MODE69)  */
struct A68t74{
A68_INT  Sort;
A_PAD_INT(PAD_23)
A68_VC  Typename;
struct A68t34  Attr;
struct A68t72  Body;
struct A68t41 * Usage;
};
typedef struct A68t74  A68_74 ;    /* STRUCT(INT,REF MODE26,MODE34,MODE72,REF MODE41)  */
struct A68t75{
A68_INT  Constno;
A_PAD_INT(PAD_24)
};
typedef struct A68t75  A68_75 ;    /* STRUCT(INT)  */
struct A68t76{
A68_INT  Typeno;
A_PAD_INT(PAD_25)
A68_INT  Primno;
A_PAD_INT(PAD_26)
};
typedef struct A68t76  A68_76 ;    /* STRUCT(INT,INT)  */
struct A68t77{
A68_INT  Typeno;
A_PAD_INT(PAD_27)
struct A68t43  Index;
};
typedef struct A68t77  A68_77 ;    /* STRUCT(INT,MODE43)  */
struct A68t78{
A68_INT  Typeno;
A_PAD_INT(PAD_28)
struct A68t58  Range;
};
typedef struct A68t78  A68_78 ;    /* STRUCT(INT,MODE58)  */
struct A68t79{
struct A68t59  Querytype;
};
typedef struct A68t79  A68_79 ;    /* STRUCT(MODE59)  */
struct A68t81 { A68_INT mode; union {
struct A68t75 * mode1;
struct A68t76 * mode2;
struct A68t77 * mode3;
struct A68t79 * mode4;
struct A68t82 * mode5;
struct A68t83 * mode6;
struct A68t64 * mode7;
struct A68t78 * mode8;
struct A68t84 * mode9;
struct A68t85 * mode10;
struct A68t86 * mode11;
struct A68t87 * mode12;
struct A68t88 * mode13;
struct A68t89 * mode14;
struct A68t90 * mode15;
struct A68t91 * mode16;
struct A68t92 * mode17;
struct A68t93 * mode18;
struct A68t94 * mode19;
struct A68t95 * mode20;
struct A68t96 * mode21;
struct A68t97 * mode22;
struct A68t98 * mode23;
struct A68t99 * mode24;
struct A68t100 * mode25;
struct A68t101 * mode26;
struct A68t102 * mode27;
struct A68t103 * mode28;
struct A68t104 * mode29;
struct A68t105 * mode30;
struct A68t106 * mode31;
struct A68t107 * mode32;
struct A68t108 * mode33;
struct A68t109 * mode34;
} data; };
typedef struct A68t81  A68_81 ;    /* UNION(REF MODE75,REF MODE76,REF MODE77,REF MODE79,REF MODE82,REF MODE83,REF MODE64,REF MODE78,REF MODE84,REF MODE85,REF MODE86,REF MODE87,REF MODE88,REF MODE89,REF MODE90,REF MODE91,REF MODE92,REF MODE93,REF MODE94,REF MODE95,REF MODE96,REF MODE97,REF MODE98,REF MODE99,REF MODE100,REF MODE101,REF MODE102,REF MODE103,REF MODE104,REF MODE105,REF MODE106,REF MODE107,REF MODE108,REF MODE109)  */
struct A68t80{
A68_INT  Sort;
A_PAD_INT(PAD_29)
A68_VC  Constname;
struct A68t34  Attr;
struct A68t81  Value;
struct A68t41 * Usage;
};
typedef struct A68t80  A68_80 ;    /* STRUCT(INT,REF MODE26,MODE34,MODE81,REF MODE41)  */
A_VECTOR(A68_INT ,A68t142);
typedef struct A68t142  A68_142 ;    /* VECTOR [] INT */
struct A68t82{
A68_INT  Typeno;
A_PAD_INT(PAD_30)
struct A68t142  String;
};
typedef struct A68t82  A68_82 ;    /* STRUCT(INT,REF MODE142)  */
struct A68t83{
A68_INT  Cvoid;
A_PAD_INT(PAD_31)
};
typedef struct A68t83  A68_83 ;    /* STRUCT(INT)  */
struct A68t84{
A68_INT  Typeno;
A_PAD_INT(PAD_32)
A68_INT  Firstno;
A_PAD_INT(PAD_33)
A68_INT  Lastno;
A_PAD_INT(PAD_34)
};
typedef struct A68t84  A68_84 ;    /* STRUCT(INT,INT,INT)  */
struct A68t85{
struct A68t81  Alt;
struct A68t85 * Rest;
};
typedef struct A68t85  A68_85 ;    /* STRUCT(MODE81,REF MODE85)  */
struct A68t86{
A68_INT  Sort;
A_PAD_INT(PAD_35)
A68_INT  Nameno;
A_PAD_INT(PAD_36)
};
typedef struct A68t86  A68_86 ;    /* STRUCT(INT,INT)  */
struct A68t87{
struct A68t81  Sink;
struct A68t81  Source;
};
typedef struct A68t87  A68_87 ;    /* STRUCT(MODE81,MODE81)  */
struct A68t88{
A68_INT  Typeno;
A_PAD_INT(PAD_37)
A68_INT  Altno;
A_PAD_INT(PAD_38)
struct A68t81  Assoc;
};
typedef struct A68t88  A68_88 ;    /* STRUCT(INT,INT,MODE81)  */
struct A68t89{
struct A68t81  Extract;
A68_INT  Typeno;
A_PAD_INT(PAD_39)
A68_INT  Altno;
A_PAD_INT(PAD_40)
};
typedef struct A68t89  A68_89 ;    /* STRUCT(MODE81,INT,INT)  */
struct A68t90{
struct A68t81  Unit;
A68_INT  Fnno;
A_PAD_INT(PAD_41)
A68_INT  Nameno;
A_PAD_INT(PAD_42)
};
typedef struct A68t90  A68_90 ;    /* STRUCT(MODE81,INT,INT)  */
struct A68t91{
struct A68t81  Unit;
struct A68t43  Index;
};
typedef struct A68t91  A68_91 ;    /* STRUCT(MODE81,MODE43)  */
struct A68t92{
struct A68t81  Unit;
struct A68t58  Range;
};
typedef struct A68t92  A68_92 ;    /* STRUCT(MODE81,MODE58)  */
struct A68t93{
struct A68t81  Unit;
struct A68t81  Index;
};
typedef struct A68t93  A68_93 ;    /* STRUCT(MODE81,MODE81)  */
struct A68t94{
struct A68t81  Unit;
struct A68t81  Index;
struct A68t81  From;
};
typedef struct A68t94  A68_94 ;    /* STRUCT(MODE81,MODE81,MODE81)  */
struct A68t95{
struct A68t43  Size;
struct A68t81  Elem;
};
typedef struct A68t95  A68_95 ;    /* STRUCT(MODE43,MODE81)  */
struct A68t96{
struct A68t81  Elem;
struct A68t96 * Rest;
};
typedef struct A68t96  A68_96 ;    /* STRUCT(MODE81,REF MODE96)  */
struct A68t97{
A68_BOOL  String;
A_PAD_BOOL(PAD_43)
A68_INT  Sort;
A_PAD_INT(PAD_44)
struct A68t81  Left;
struct A68t81  Right;
};
typedef struct A68t97  A68_97 ;    /* STRUCT(BOOL,INT,MODE81,MODE81)  */
A_VECTOR(struct A68t124 ,A68t123);
typedef struct A68t123  A68_123 ;    /* VECTOR [] MODE124 */
struct A68t126{
struct A68t81  Tag;
};
typedef struct A68t126  A68_126 ;    /* STRUCT(MODE81)  */
struct A68t121{
A68_INT  Fnno;
A_PAD_INT(PAD_45)
struct A68t123  Macparams;
struct A68t34  Attr;
};
typedef struct A68t121  A68_121 ;    /* STRUCT(INT,REF MODE123,MODE34)  */
struct A68t125 { A68_INT mode; union {
struct A68t42  mode1;
struct A68t54  mode2;
struct A68t68  mode3;
struct A68t126  mode4;
struct A68t121  mode5;
} data; };
typedef struct A68t125  A68_125 ;    /* UNION(MODE42,MODE54,MODE68,MODE126,MODE121)  */
struct A68t124{
A68_INT  Sort;
A_PAD_INT(PAD_46)
struct A68t125  Param;
};
typedef struct A68t124  A68_124 ;    /* STRUCT(INT,MODE125)  */
struct A68t98{
struct A68t121  Inst;
struct A68t81  Right;
};
typedef struct A68t98  A68_98 ;    /* STRUCT(MODE121,MODE81)  */
struct A68t99{
struct A68t81  Left;
struct A68t121  Inst;
struct A68t81  Right;
};
typedef struct A68t99  A68_99 ;    /* STRUCT(MODE81,MODE121,MODE81)  */
struct A68t100{
struct A68t81  Input;
struct A68t141 * Choices;
};
typedef struct A68t100  A68_100 ;    /* STRUCT(MODE81,REF MODE141)  */
struct A68t101{
struct A68t43  Cond;
struct A68t81  True;
struct A68t81  False;
};
typedef struct A68t101  A68_101 ;    /* STRUCT(MODE43,MODE81,MODE81)  */
struct A68t102{
struct A68t43  Repl;
struct A68t81  Body;
};
typedef struct A68t102  A68_102 ;    /* STRUCT(MODE43,MODE81)  */
struct A68t103{
struct A68t129 * Body;
struct A68t81  Output;
};
typedef struct A68t103  A68_103 ;    /* STRUCT(REF MODE129,MODE81)  */
struct A68t104{
struct A68t110 * Body;
struct A68t81  Output;
};
typedef struct A68t104  A68_104 ;    /* STRUCT(REF MODE110,MODE81)  */
struct A68t105{
struct A68t81  Unit;
struct A68t34  Attr;
};
typedef struct A68t105  A68_105 ;    /* STRUCT(MODE81,MODE34)  */
struct A68t106{
struct A68t81  Unit;
struct A68t45  Check;
};
typedef struct A68t106  A68_106 ;    /* STRUCT(MODE81,MODE45)  */
struct A68t107{
struct A68t81  Unit;
};
typedef struct A68t107  A68_107 ;    /* STRUCT(MODE81)  */
struct A68t108{
struct A68t43  Size;
struct A68t81  Char;
};
typedef struct A68t108  A68_108 ;    /* STRUCT(MODE43,MODE81)  */
struct A68t109{
A68_INT  Unull;
A_PAD_INT(PAD_47)
};
typedef struct A68t109  A68_109 ;    /* STRUCT(INT)  */
struct A68t112{
A68_INT  Fnno;
A_PAD_INT(PAD_48)
};
typedef struct A68t112  A68_112 ;    /* STRUCT(INT)  */
struct A68t111 { A68_INT mode; union {
struct A68t35  mode1;
struct A68t47  mode2;
struct A68t60  mode3;
struct A68t75  mode4;
struct A68t112  mode5;
struct A68t113 * mode6;
struct A68t114 * mode7;
struct A68t115 * mode8;
struct A68t116 * mode9;
struct A68t117 * mode10;
struct A68t118 * mode11;
struct A68t119 * mode12;
} data; };
typedef struct A68t111  A68_111 ;    /* UNION(MODE35,MODE47,MODE60,MODE75,MODE112,REF MODE113,REF MODE114,REF MODE115,REF MODE116,REF MODE117,REF MODE118,REF MODE119)  */
struct A68t110{
struct A68t111  Step;
struct A68t110 * Rest;
};
typedef struct A68t110  A68_110 ;    /* STRUCT(MODE111,REF MODE110)  */
struct A68t113{
struct A68t43  Cond;
struct A68t127 * Print;
};
typedef struct A68t113  A68_113 ;    /* STRUCT(MODE43,REF MODE127)  */
struct A68t114{
struct A68t43  Cond;
struct A68t127 * Fault;
};
typedef struct A68t114  A68_114 ;    /* STRUCT(MODE43,REF MODE127)  */
struct A68t115{
struct A68t122 * Letnames;
struct A68t81  Unit;
};
typedef struct A68t115  A68_115 ;    /* STRUCT(REF MODE122,MODE81)  */
struct A68t116{
struct A68t55 * Sizes;
struct A68t121  Inst;
struct A68t122 * Makenames;
};
typedef struct A68t116  A68_116 ;    /* STRUCT(REF MODE55,MODE121,REF MODE122)  */
struct A68t117{
struct A68t81  From;
struct A68t81  To;
};
typedef struct A68t117  A68_117 ;    /* STRUCT(MODE81,MODE81)  */
struct A68t118{
struct A68t55 * Repls;
struct A68t120 * Joins;
};
typedef struct A68t118  A68_118 ;    /* STRUCT(REF MODE55,REF MODE120)  */
struct A68t119{
A68_INT  Stepnull;
A_PAD_INT(PAD_49)
};
typedef struct A68t119  A68_119 ;    /* STRUCT(INT)  */
struct A68t120{
struct A68t117  Join;
struct A68t120 * Rest;
};
typedef struct A68t120  A68_120 ;    /* STRUCT(MODE117,REF MODE120)  */
struct A68t122{
A68_INT  Nameno;
A_PAD_INT(PAD_50)
struct A68t122 * Rest;
};
typedef struct A68t122  A68_122 ;    /* STRUCT(INT,REF MODE122)  */
struct A68t128 { A68_INT mode; union {
A68_VC  mode1;
struct A68t54 * mode2;
} data; };
typedef struct A68t128  A68_128 ;    /* UNION(REF MODE26,REF MODE54)  */
struct A68t127{
struct A68t128  Item;
struct A68t127 * Rest;
};
typedef struct A68t127  A68_127 ;    /* STRUCT(MODE128,REF MODE127)  */
struct A68t130 { A68_INT mode; union {
struct A68t35  mode1;
struct A68t47  mode2;
struct A68t60  mode3;
struct A68t75  mode4;
struct A68t112  mode5;
struct A68t113 * mode6;
struct A68t114 * mode7;
struct A68t131 * mode8;
struct A68t132 * mode9;
struct A68t133 * mode10;
struct A68t134 * mode11;
struct A68t135 * mode12;
struct A68t136 * mode13;
struct A68t137 * mode14;
struct A68t138 * mode15;
struct A68t129 * mode16;
struct A68t139 * mode17;
} data; };
typedef struct A68t130  A68_130 ;    /* UNION(MODE35,MODE47,MODE60,MODE75,MODE112,REF MODE113,REF MODE114,REF MODE131,REF MODE132,REF MODE133,REF MODE134,REF MODE135,REF MODE136,REF MODE137,REF MODE138,REF MODE129,REF MODE139)  */
struct A68t129{
struct A68t130  Step;
struct A68t129 * Rest;
};
typedef struct A68t129  A68_129 ;    /* STRUCT(MODE130,REF MODE129)  */
struct A68t131{
struct A68t115  Seqlet;
};
typedef struct A68t131  A68_131 ;    /* STRUCT(MODE115)  */
struct A68t132{
struct A68t115  Seqvar;
};
typedef struct A68t132  A68_132 ;    /* STRUCT(MODE115)  */
struct A68t133{
struct A68t122 * Pvarnames;
struct A68t81  Init;
};
typedef struct A68t133  A68_133 ;    /* STRUCT(REF MODE122,MODE81)  */
struct A68t134{
struct A68t81  To;
struct A68t81  From;
};
typedef struct A68t134  A68_134 ;    /* STRUCT(MODE81,MODE81)  */
struct A68t135{
struct A68t81  Input;
struct A68t140 * Choices;
};
typedef struct A68t135  A68_135 ;    /* STRUCT(MODE81,REF MODE140)  */
struct A68t136{
struct A68t43  Cond;
struct A68t130  True;
struct A68t130  False;
};
typedef struct A68t136  A68_136 ;    /* STRUCT(MODE43,MODE130,MODE130)  */
struct A68t137{
struct A68t43  Repl;
struct A68t130  Body;
};
typedef struct A68t137  A68_137 ;    /* STRUCT(MODE43,MODE130)  */
struct A68t138{
A68_INT  Seqnull;
A_PAD_INT(PAD_51)
};
typedef struct A68t138  A68_138 ;    /* STRUCT(INT)  */
struct A68t139{
struct A68t43  Size;
struct A68t130  Elem;
};
typedef struct A68t139  A68_139 ;    /* STRUCT(MODE43,MODE130)  */
struct A68t140{
A68_BOOL  Check;
A_PAD_BOOL(PAD_52)
A68_INT  Sort;
A_PAD_INT(PAD_53)
struct A68t81  Test;
struct A68t130  Output;
struct A68t140 * Rest;
};
typedef struct A68t140  A68_140 ;    /* STRUCT(BOOL,INT,MODE81,MODE130,REF MODE140)  */
struct A68t141{
A68_BOOL  Check;
A_PAD_BOOL(PAD_54)
A68_INT  Sort;
A_PAD_INT(PAD_55)
struct A68t81  Test;
struct A68t81  Output;
struct A68t141 * Rest;
};
typedef struct A68t141  A68_141 ;    /* STRUCT(BOOL,INT,MODE81,MODE81,REF MODE141)  */
struct A68t143 { A68_INT mode; union {
struct A68t35  mode1;
struct A68t47  mode2;
struct A68t60  mode3;
struct A68t75  mode4;
struct A68t112  mode5;
} data; };
typedef struct A68t143  A68_143 ;    /* UNION(MODE35,MODE47,MODE60,MODE75,MODE112)  */
struct A68t144{
A68_BOOL  Biop;
A_PAD_BOOL(PAD_56)
A68_VC  Name;
struct A68t123  Macparams;
};
typedef struct A68t144  A68_144 ;    /* STRUCT(BOOL,REF MODE26,REF MODE123)  */
struct A68t145{
struct A68t43  Output;
};
typedef struct A68t145  A68_145 ;    /* STRUCT(MODE43)  */
struct A68t146{
A68_INT  Reform;
A_PAD_INT(PAD_57)
};
typedef struct A68t146  A68_146 ;    /* STRUCT(INT)  */
struct A68t147{
A68_VC  Name;
A68_INT  Contextno;
A_PAD_INT(PAD_58)
struct A68t31  Ctname;
};
typedef struct A68t147  A68_147 ;    /* STRUCT(REF MODE26,INT,MODE31)  */
struct A68t148{
A68_INT  Sort;
A_PAD_INT(PAD_59)
struct A68t81  Init;
struct A68t43  Ambigtime;
struct A68t81  Ambig;
struct A68t43  Delaytime;
};
typedef struct A68t148  A68_148 ;    /* STRUCT(INT,MODE81,MODE43,MODE81,MODE43)  */
struct A68t149{
struct A68t81  Init;
struct A68t43  Delaytime;
};
typedef struct A68t149  A68_149 ;    /* STRUCT(MODE81,MODE43)  */
struct A68t150{
struct A68t81  Init;
};
typedef struct A68t150  A68_150 ;    /* STRUCT(MODE81)  */
struct A68t151{
A68_INT  Sort;
A_PAD_INT(PAD_60)
struct A68t43  Interval;
struct A68t81  Init;
struct A68t43  Skew;
};
typedef struct A68t151  A68_151 ;    /* STRUCT(INT,MODE43,MODE81,MODE43)  */
struct A68t152{
A68_BOOL  Faster;
A_PAD_BOOL(PAD_61)
A68_INT  Sort;
A_PAD_INT(PAD_62)
struct A68t121  Inst;
struct A68t43  Scale;
struct A68t81  Init;
struct A68t43  Skew;
};
typedef struct A68t152  A68_152 ;    /* STRUCT(BOOL,INT,MODE121,MODE43,MODE81,MODE43)  */
struct A68t154 { A68_INT mode; union {
struct A68t126 * mode1;
struct A68t144 * mode2;
struct A68t145 * mode3;
struct A68t146 * mode4;
struct A68t147 * mode5;
struct A68t148 * mode6;
struct A68t149 * mode7;
struct A68t150 * mode8;
struct A68t151 * mode9;
struct A68t152 * mode10;
struct A68t153 * mode11;
struct A68t155 * mode12;
} data; };
typedef struct A68t154  A68_154 ;    /* UNION(REF MODE126,REF MODE144,REF MODE145,REF MODE146,REF MODE147,REF MODE148,REF MODE149,REF MODE150,REF MODE151,REF MODE152,REF MODE153,REF MODE155)  */
struct A68t153{
struct A68t33 * Joincheck;
A68_BOOL  Check;
A_PAD_BOOL(PAD_63)
struct A68t154  Fnbody;
};
typedef struct A68t153  A68_153 ;    /* STRUCT(REF MODE33,BOOL,MODE154)  */
struct A68t155{
A68_INT  Bodynull;
A_PAD_INT(PAD_64)
};
typedef struct A68t155  A68_155 ;    /* STRUCT(INT)  */
struct A68t156{
A68_INT  Sort;
A_PAD_INT(PAD_65)
struct A68t143  Spec;
};
typedef struct A68t156  A68_156 ;    /* STRUCT(INT,MODE143)  */
struct A68t157{
A68_VC  Name;
struct A68t59  Type;
struct A68t34  Attr;
};
typedef struct A68t157  A68_157 ;    /* STRUCT(REF MODE26,MODE59,MODE34)  */
A_VECTOR(struct A68t156 ,A68t159);
typedef struct A68t159  A68_159 ;    /* VECTOR [] MODE156 */
A_VECTOR(struct A68t157 ,A68t160);
typedef struct A68t160  A68_160 ;    /* VECTOR [] MODE157 */
struct A68t158{
A68_INT  Sort;
A_PAD_INT(PAD_66)
A68_BOOL  Macro;
A_PAD_BOOL(PAD_67)
A68_VC  Fnname;
struct A68t159  Macspecs;
struct A68t34  Attr;
struct A68t122 * Inputs;
struct A68t122 * Outputs;
struct A68t160  Nametypes;
struct A68t154  Fnbody;
struct A68t41 * Usage;
};
typedef struct A68t158  A68_158 ;    /* STRUCT(INT,BOOL,REF MODE26,REF MODE159,MODE34,REF MODE122,REF MODE122,REF MODE160,MODE154,REF MODE41)  */
A_VECTOR(struct A68t40 *,A68t162);
typedef struct A68t162  A68_162 ;    /* VECTOR [] REF MODE40 */
A_VECTOR(struct A68t56 *,A68t163);
typedef struct A68t163  A68_163 ;    /* VECTOR [] REF MODE56 */
A_VECTOR(struct A68t74 *,A68t164);
typedef struct A68t164  A68_164 ;    /* VECTOR [] REF MODE74 */
A_VECTOR(struct A68t80 *,A68t165);
typedef struct A68t165  A68_165 ;    /* VECTOR [] REF MODE80 */
A_VECTOR(struct A68t158 *,A68t166);
typedef struct A68t166  A68_166 ;    /* VECTOR [] REF MODE158 */
struct A68t161{
struct A68t162  Attrs;
struct A68t163  Ints;
struct A68t164  Types;
struct A68t165  Consts;
struct A68t166  Fns;
};
typedef struct A68t161  A68_161 ;    /* STRUCT(REF MODE162,REF MODE163,REF MODE164,REF MODE165,REF MODE166)  */
struct A68t167{
A68_INT  Closureno;
A_PAD_INT(PAD_68)
A68_INT  Sort;
A_PAD_INT(PAD_69)
struct A68t161 * Environ;
};
typedef struct A68t167  A68_167 ;    /* STRUCT(INT,INT,REF MODE161)  */
struct A68t168{
struct A68t167  Outer;
struct A68t168 * Rest;
};
typedef struct A68t168  A68_168 ;    /* STRUCT(MODE167,REF MODE168)  */
A_VECTOR(struct A68t168 ,A68t170);
typedef struct A68t170  A68_170 ;    /* VECTOR [] MODE168 */
struct A68t169{
struct A68t170  Outers;
struct A68t169 * Rest;
};
typedef struct A68t169  A68_169 ;    /* STRUCT(REF MODE170,REF MODE169)  */
struct A68t171{
A68_INT  Max_closureno;
A_PAD_INT(PAD_70)
struct A68t168 * Outers;
struct A68t168 * Freelist;
struct A68t169 * Outerslist;
};
typedef struct A68t171  A68_171 ;    /* STRUCT(INT,REF MODE168,REF MODE168,REF MODE169)  */
A_VECTOR(A68_VC ,A68t172);
typedef struct A68t172  A68_172 ;    /* VECTOR [] REF MODE26 */
A_VECTOR(struct A68t168 *,A68t173);
typedef struct A68t173  A68_173 ;    /* VECTOR [] REF MODE168 */

A_PROCEDURE(struct A68t46 *,A68t174,(A68_INT ),(A68_INT ,void *));
typedef struct A68t174  A68_174 ;    /* PROC(INT) REF MODE46 */

A_PROCEDURE(struct A68t47 *,A68t175,(A68_INT ),(A68_INT ,void *));
typedef struct A68t175  A68_175 ;    /* PROC(INT) REF MODE47 */

A_PROCEDURE(struct A68t51 *,A68t176,(struct A68t43 ),(struct A68t43 ,void *));
typedef struct A68t176  A68_176 ;    /* PROC(MODE43) REF MODE51 */

A_PROCEDURE(struct A68t54 *,A68t177,(struct A68t43 ),(struct A68t43 ,void *));
typedef struct A68t177  A68_177 ;    /* PROC(MODE43) REF MODE54 */

A_PROCEDURE(struct A68t60 *,A68t178,(A68_INT ),(A68_INT ,void *));
typedef struct A68t178  A68_178 ;    /* PROC(INT) REF MODE60 */

A_PROCEDURE(struct A68t64 *,A68t179,(struct A68t59 ),(struct A68t59 ,void *));
typedef struct A68t179  A68_179 ;    /* PROC(MODE59) REF MODE64 */

A_PROCEDURE(struct A68t68 *,A68t180,(struct A68t59 ),(struct A68t59 ,void *));
typedef struct A68t180  A68_180 ;    /* PROC(MODE59) REF MODE68 */

A_PROCEDURE(struct A68t75 *,A68t181,(A68_INT ),(A68_INT ,void *));
typedef struct A68t181  A68_181 ;    /* PROC(INT) REF MODE75 */

A_PROCEDURE(struct A68t79 *,A68t182,(struct A68t59 ),(struct A68t59 ,void *));
typedef struct A68t182  A68_182 ;    /* PROC(MODE59) REF MODE79 */

A_PROCEDURE(struct A68t131 *,A68t183,(struct A68t115 ),(struct A68t115 ,void *));
typedef struct A68t183  A68_183 ;    /* PROC(MODE115) REF MODE131 */

A_PROCEDURE(struct A68t132 *,A68t184,(struct A68t115 ),(struct A68t115 ,void *));
typedef struct A68t184  A68_184 ;    /* PROC(MODE115) REF MODE132 */

A_PROCEDURE(struct A68t107 *,A68t185,(struct A68t81 ),(struct A68t81 ,void *));
typedef struct A68t185  A68_185 ;    /* PROC(MODE81) REF MODE107 */

A_PROCEDURE(struct A68t126 *,A68t186,(struct A68t81 ),(struct A68t81 ,void *));
typedef struct A68t186  A68_186 ;    /* PROC(MODE81) REF MODE126 */

A_PROCEDURE(struct A68t112 *,A68t187,(A68_INT ),(A68_INT ,void *));
typedef struct A68t187  A68_187 ;    /* PROC(INT) REF MODE112 */

A_PROCEDURE(struct A68t145 *,A68t188,(struct A68t43 ),(struct A68t43 ,void *));
typedef struct A68t188  A68_188 ;    /* PROC(MODE43) REF MODE145 */

A_PROCEDURE(struct A68t150 *,A68t189,(struct A68t81 ),(struct A68t81 ,void *));
typedef struct A68t189  A68_189 ;    /* PROC(MODE81) REF MODE150 */

A_PROCEDURE(struct A68t52 *,A68t190,(A68_INT ),(A68_INT ,void *));
typedef struct A68t190  A68_190 ;    /* PROC(INT) REF MODE52 */

A_PROCEDURE(struct A68t35 *,A68t191,(A68_INT ),(A68_INT ,void *));
typedef struct A68t191  A68_191 ;    /* PROC(INT) REF MODE35 */

A_PROCEDURE(struct A68t42 *,A68t192,(struct A68t34 ),(struct A68t34 ,void *));
typedef struct A68t192  A68_192 ;    /* PROC(MODE34) REF MODE42 */

A_PROCEDURE(struct A68t38 *,A68t193,(struct A68t34 ),(struct A68t34 ,void *));
typedef struct A68t193  A68_193 ;    /* PROC(MODE34) REF MODE38 */
A_VECTOR(struct A68t32 *,A68t194);
typedef struct A68t194  A68_194 ;    /* VECTOR [] REF MODE32 */

A_PROCEDURE(A68_VOID ,A68t195,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t195  A68_195 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t196,(A68_CHAR ,A68_VC *),(A68_CHAR ,A68_VC *,void *));
typedef struct A68t196  A68_196 ;    /* PROC(CHAR) REF MODE26 */
struct A68t198 ;

A_PROCEDURE(A68_VOID ,A68t197,(struct A68t198 ),(struct A68t198 ,void *));
typedef struct A68t197  A68_197 ;    /* PROC(MODE198) VOID */
A_VECTOR(A68_BOOL ,A68t199);
typedef struct A68t199  A68_199 ;    /* VECTOR [] BOOL */
A_VECTOR(A68_BITS ,A68t200);
typedef struct A68t200  A68_200 ;    /* VECTOR [] BITS */
struct A68t198 { A68_INT mode; union {
A68_VC  mode1;
struct A68t142  mode2;
struct A68t199  mode3;
struct A68t200  mode4;
} data; };
typedef struct A68t198  A68_198 ;    /* UNION(REF MODE26,REF MODE142,REF MODE199,REF MODE200)  */

A_PROCEDURE(A68_VOID ,A68t201,(A68_VC ),(A68_VC ,void *));
typedef struct A68t201  A68_201 ;    /* PROC(REF MODE26) VOID */

A_PROCEDURE(A68_INT ,A68t202,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t202  A68_202 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_BITS ,A68t203,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t203  A68_203 ;    /* PROC(BITS,BITS) BITS */
struct A68t205 ;

A_PROCEDURE(A68_VOID ,A68t204,(struct A68t205 ,A68_INT ),(struct A68t205 ,A68_INT ,void *));
typedef struct A68t204  A68_204 ;    /* PROC(MODE205,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t205,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t205  A68_205 ;    /* PROC(CHAR) VOID */
struct A68t207 ;

A_PROCEDURE(A68_INT ,A68t206,(struct A68t207 ),(struct A68t207 ,void *));
typedef struct A68t206  A68_206 ;    /* PROC(MODE207) INT */

A_PROCEDURE(A68_CHAR ,A68t207,(void),(void *));
typedef struct A68t207  A68_207 ;    /* PROC CHAR */

A_PROCEDURE(A68_INT ,A68t208,(A68_VC ,A68_BOOL *),(A68_VC ,A68_BOOL *,void *));
typedef struct A68t208  A68_208 ;    /* PROC(MODE26,REF BOOL) INT */

A_PROCEDURE(A68_VOID ,A68t209,(A68_VC ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t209  A68_209 ;    /* PROC(MODE26,INT) MODE26 */

A_PROCEDURE(A68_INT ,A68t210,(void),(void *));
typedef struct A68t210  A68_210 ;    /* PROC INT */

A_PROCEDURE(A68_INT ,A68t211,(A68_INT ),(A68_INT ,void *));
typedef struct A68t211  A68_211 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_VOID ,A68t212,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t212  A68_212 ;    /* PROC(INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t213,(A68_VC *),(A68_VC *,void *));
typedef struct A68t213  A68_213 ;    /* PROC REF MODE26 */

A_PROCEDURE(A68_INT ,A68t214,(A68_INT ,A68_INT ,A68_BOOL *),(A68_INT ,A68_INT ,A68_BOOL *,void *));
typedef struct A68t214  A68_214 ;    /* PROC(INT,INT,REF BOOL) INT */
struct A68t216 ;

A_PROCEDURE(A68_BOOL ,A68t215,(A68_VC ,A68_INT *,struct A68t216 ),(A68_VC ,A68_INT *,struct A68t216 ,void *));
typedef struct A68t215  A68_215 ;    /* PROC(MODE26,REF INT,MODE216) BOOL */
struct A68t217 ;
struct A68t218 ;

A_PROCEDURE(A68_VOID ,A68t216,(struct A68t217 ,struct A68t218 ),(struct A68t217 ,struct A68t218 ,void *));
typedef struct A68t216  A68_216 ;    /* PROC(MODE217,MODE218) VOID */
struct A68t217{
A68_INT  Number;
A_PAD_INT(PAD_71)
struct A68t219 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_72)
};
typedef struct A68t217  A68_217 ;    /* STRUCT(INT,REF MODE219,BITS)  */
A_VECTOR(A68_VC ,A68t218);
typedef struct A68t218  A68_218 ;    /* VECTOR [] MODE26 */
A_VECTOR(struct A68t221 ,A68t220);
typedef struct A68t220  A68_220 ;    /* VECTOR [] MODE221 */
struct A68t221{
struct A68t217  Msgno;
A68_VC  Text;
};
typedef struct A68t221  A68_221 ;    /* STRUCT(MODE217,REF MODE26)  */
struct A68t219{
A68_VC  Name;
struct A68t220  Messages;
};
typedef struct A68t219  A68_219 ;    /* STRUCT(REF MODE26,REF MODE220)  */

A_PROCEDURE(A68_VOID ,A68t222,(A68_VC ),(A68_VC ,void *));
typedef struct A68t222  A68_222 ;    /* PROC(MODE26) VOID */
struct A68t224 ;

A_PROCEDURE(A68_INT ,A68t223,(struct A68t224 ),(struct A68t224 ,void *));
typedef struct A68t223  A68_223 ;    /* PROC(MODE224) INT */
struct A68t232{
A68_INT  Svoid;
A_PAD_INT(PAD_73)
};
typedef struct A68t232  A68_232 ;    /* STRUCT(INT)  */
struct A68t233{
A68_INT  Snull;
A_PAD_INT(PAD_74)
};
typedef struct A68t233  A68_233 ;    /* STRUCT(INT)  */
struct A68t224 { A68_INT mode; union {
struct A68t225 * mode1;
struct A68t226 * mode2;
struct A68t227 * mode3;
struct A68t228 * mode4;
struct A68t229 * mode5;
struct A68t230 * mode6;
struct A68t231 * mode7;
struct A68t232  mode8;
struct A68t233  mode9;
} data; };
typedef struct A68t224  A68_224 ;    /* UNION(REF MODE225,REF MODE226,REF MODE227,REF MODE228,REF MODE229,REF MODE230,REF MODE231,MODE232,MODE233)  */
struct A68t225{
A68_VC  Id;
struct A68t224  T;
struct A68t225 * Rest;
};
typedef struct A68t225  A68_225 ;    /* STRUCT(REF MODE26,MODE224,REF MODE225)  */
struct A68t226{
A68_VC  Id;
A68_INT  Lwb;
A_PAD_INT(PAD_75)
A68_INT  Upb;
A_PAD_INT(PAD_76)
};
typedef struct A68t226  A68_226 ;    /* STRUCT(REF MODE26,INT,INT)  */
struct A68t227{
A68_VC  Id;
A68_VC  Char;
};
typedef struct A68t227  A68_227 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t228{
A68_INT  No;
A_PAD_INT(PAD_77)
struct A68t224  Type;
};
typedef struct A68t228  A68_228 ;    /* STRUCT(INT,MODE224)  */
struct A68t229{
A68_INT  No;
A_PAD_INT(PAD_78)
struct A68t227  T;
};
typedef struct A68t229  A68_229 ;    /* STRUCT(INT,MODE227)  */
struct A68t230{
struct A68t224  From;
struct A68t224  To;
};
typedef struct A68t230  A68_230 ;    /* STRUCT(MODE224,MODE224)  */
struct A68t231{
struct A68t224  T;
struct A68t231 * Rest;
};
typedef struct A68t231  A68_231 ;    /* STRUCT(MODE224,REF MODE231)  */

A_PROCEDURE(struct A68t231 *,A68t234,(struct A68t224 ),(struct A68t224 ,void *));
typedef struct A68t234  A68_234 ;    /* PROC(MODE224) REF MODE231 */

A_PROCEDURE(struct A68t231 *,A68t235,(struct A68t224 ,A68_INT ,A68_INT ),(struct A68t224 ,A68_INT ,A68_INT ,void *));
typedef struct A68t235  A68_235 ;    /* PROC(MODE224,INT,INT) REF MODE231 */
struct A68t237 ;

A_PROCEDURE(A68_VOID ,A68t236,(struct A68t237 ,A68_INT ,A68_INT ,struct A68t237 *),(struct A68t237 ,A68_INT ,A68_INT ,struct A68t237 *,void *));
typedef struct A68t236  A68_236 ;    /* PROC(MODE237,INT,INT) MODE237 */
A_VECTOR(struct A68t239 ,A68t238);
typedef struct A68t238  A68_238 ;    /* VECTOR [] MODE239 */
struct A68t239{
A68_INT  Instoffset;
A_PAD_INT(PAD_79)
A68_INT  Offset;
A_PAD_INT(PAD_80)
A68_INT  Size;
A_PAD_INT(PAD_81)
};
typedef struct A68t239  A68_239 ;    /* STRUCT(INT,INT,INT)  */
struct A68t237{
struct A68t224  Type;
struct A68t238  Blocks;
};
typedef struct A68t237  A68_237 ;    /* STRUCT(MODE224,REF MODE238)  */
struct A68t241 ;

A_PROCEDURE(A68_VOID ,A68t240,(struct A68t241 *,A68_INT ,A68_INT ,struct A68t237 *),(struct A68t241 *,A68_INT ,A68_INT ,struct A68t237 *,void *));
typedef struct A68t240  A68_240 ;    /* PROC(REF MODE241,INT,INT) MODE237 */
struct A68t241{
struct A68t237  Firstcell;
A68_INT  Lwb;
A_PAD_INT(PAD_82)
A68_INT  Ramsize;
A_PAD_INT(PAD_83)
A68_INT  Step;
A_PAD_INT(PAD_84)
};
typedef struct A68t241  A68_241 ;    /* STRUCT(MODE237,INT,INT,INT)  */
struct A68t243 ;

A_PROCEDURE(A68_VC *,A68t242,(struct A68t243 ,struct A68t224 ),(struct A68t243 ,struct A68t224 ,void *));
typedef struct A68t242  A68_242 ;    /* PROC(MODE243,MODE224) REF REF MODE26 */
struct A68t251{
A68_INT  Svvoid;
A_PAD_INT(PAD_85)
};
typedef struct A68t251  A68_251 ;    /* STRUCT(INT)  */
struct A68t252{
A68_INT  Svnull;
A_PAD_INT(PAD_86)
};
typedef struct A68t252  A68_252 ;    /* STRUCT(INT)  */
struct A68t243 { A68_INT mode; union {
struct A68t244 * mode1;
struct A68t245 * mode2;
struct A68t246 * mode3;
struct A68t247 * mode4;
struct A68t248 * mode5;
struct A68t249 * mode6;
struct A68t250 * mode7;
struct A68t251  mode8;
struct A68t252  mode9;
} data; };
typedef struct A68t243  A68_243 ;    /* UNION(REF MODE244,REF MODE245,REF MODE246,REF MODE247,REF MODE248,REF MODE249,REF MODE250,MODE251,MODE252)  */
struct A68t244{
struct A68t224  Type;
};
typedef struct A68t244  A68_244 ;    /* STRUCT(MODE224)  */
struct A68t245{
struct A68t226 * Type;
A68_INT  Value;
A_PAD_INT(PAD_87)
};
typedef struct A68t245  A68_245 ;    /* STRUCT(REF MODE226,INT)  */
struct A68t246{
struct A68t227 * Type;
A68_CHAR  Value;
A_PAD_CHAR(PAD_88)
};
typedef struct A68t246  A68_246 ;    /* STRUCT(REF MODE227,CHAR)  */
struct A68t247{
struct A68t229 * Type;
A68_VC  Value;
};
typedef struct A68t247  A68_247 ;    /* STRUCT(REF MODE229,REF MODE26)  */
struct A68t248{
struct A68t225 * Type;
A68_INT  Tag;
A_PAD_INT(PAD_89)
struct A68t243  Assoc;
};
typedef struct A68t248  A68_248 ;    /* STRUCT(REF MODE225,INT,MODE243)  */
struct A68t249{
struct A68t243  Head;
struct A68t249 * Tail;
};
typedef struct A68t249  A68_249 ;    /* STRUCT(MODE243,REF MODE249)  */
struct A68t250{
struct A68t243  From;
struct A68t243  To;
};
typedef struct A68t250  A68_250 ;    /* STRUCT(MODE243,MODE243)  */

A_PROCEDURE(A68_VOID ,A68t253,(A68_VC ,struct A68t224 ,struct A68t243 *),(A68_VC ,struct A68t224 ,struct A68t243 *,void *));
typedef struct A68t253  A68_253 ;    /* PROC(REF MODE26,MODE224) MODE243 */

A_PROCEDURE(A68_VOID ,A68t254,(void),(void *));
typedef struct A68t254  A68_254 ;    /* PROC VOID */

A_PROCEDURE(A68_INT ,A68t255,(struct A68t224 ,struct A68t223 ),(struct A68t224 ,struct A68t223 ,void *));
typedef struct A68t255  A68_255 ;    /* PROC(MODE224,MODE223) INT */

A_PROCEDURE(A68_VOID ,A68t256,(A68_INT ,struct A68t224 *),(A68_INT ,struct A68t224 *,void *));
typedef struct A68t256  A68_256 ;    /* PROC(INT) MODE224 */
struct A68t258 ;
struct A68t259 ;

A_PROCEDURE(A68_INT ,A68t257,(A68_VC ,A68_INT ,A68_INT ,A68_INT ,struct A68t237 ,struct A68t237 ,struct A68t241 *,struct A68t258 ,struct A68t259 ),(A68_VC ,A68_INT ,A68_INT ,A68_INT ,struct A68t237 ,struct A68t237 ,struct A68t241 *,struct A68t258 ,struct A68t259 ,void *));
typedef struct A68t257  A68_257 ;    /* PROC(REF MODE26,INT,INT,INT,MODE237,MODE237,REF MODE241,MODE258,MODE259) INT */
struct A68t258{
A68_INT  Size;
A_PAD_INT(PAD_90)
A68_INT  Offset;
A_PAD_INT(PAD_91)
A68_BITS  Sort;
A_PAD_BITS(PAD_92)
};
typedef struct A68t258  A68_258 ;    /* STRUCT(INT,INT,BITS)  */
struct A68t259{
A68_INT  Workspace;
A_PAD_INT(PAD_93)
A68_INT  History;
A_PAD_INT(PAD_94)
A68_INT  Declid;
A_PAD_INT(PAD_95)
};
typedef struct A68t259  A68_259 ;    /* STRUCT(INT,INT,INT)  */
struct A68t261 ;

A_PROCEDURE(A68_VOID ,A68t260,(A68_INT ,A68_VC ,A68_VC ,struct A68t261 ),(A68_INT ,A68_VC ,A68_VC ,struct A68t261 ,void *));
typedef struct A68t260  A68_260 ;    /* PROC(INT,REF MODE26,REF MODE26,MODE261) VOID */
struct A68t262{
A68_INT  Fn;
A_PAD_INT(PAD_96)
A68_INT  Instance;
A_PAD_INT(PAD_97)
};
typedef struct A68t262  A68_262 ;    /* STRUCT(INT,INT)  */
struct A68t261 { A68_INT mode; union {
struct A68t262  mode1;
struct A68t237  mode2;
} data; };
typedef struct A68t261  A68_261 ;    /* UNION(MODE262,MODE237)  */

A_PROCEDURE(A68_VOID ,A68t263,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t263  A68_263 ;    /* PROC(INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t264,(A68_INT ,struct A68t142 ),(A68_INT ,struct A68t142 ,void *));
typedef struct A68t264  A68_264 ;    /* PROC(INT,REF MODE142) VOID */

A_PROCEDURE(A68_VOID ,A68t265,(A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_INT ),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t265  A68_265 ;    /* PROC(INT,INT,INT,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t266,(A68_INT ,struct A68t258 ),(A68_INT ,struct A68t258 ,void *));
typedef struct A68t266  A68_266 ;    /* PROC(INT,MODE258) VOID */

A_PROCEDURE(A68_VOID ,A68t267,(A68_INT ,struct A68t238 ,struct A68t238 ),(A68_INT ,struct A68t238 ,struct A68t238 ,void *));
typedef struct A68t267  A68_267 ;    /* PROC(INT,REF MODE238,REF MODE238) VOID */

A_PROCEDURE(A68_VOID ,A68t268,(A68_VC ,A68_INT ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t268  A68_268 ;    /* PROC(REF MODE26,INT,INT) REF MODE26 */

A_PROCEDURE(A68_INT ,A68t269,(A68_VC ,A68_INT ,A68_INT ),(A68_VC ,A68_INT ,A68_INT ,void *));
typedef struct A68t269  A68_269 ;    /* PROC(REF MODE26,INT,INT) INT */
struct A68t271 ;

A_PROCEDURE(A68_VOID ,A68t270,(A68_INT ,struct A68t271 *),(A68_INT ,struct A68t271 *,void *));
typedef struct A68t270  A68_270 ;    /* PROC(INT) MODE271 */
A_VECTOR(struct A68t273 ,A68t272);
typedef struct A68t272  A68_272 ;    /* VECTOR [] MODE273 */
struct A68t273{
A68_VC  Uname;
A68_VC  Lname;
A68_INT  Node;
A_PAD_INT(PAD_98)
};
typedef struct A68t273  A68_273 ;    /* STRUCT(REF MODE26,REF MODE26,INT)  */
struct A68t271{
struct A68t241 * Ram;
struct A68t237  Outputs;
A68_INT  Noinputs;
A_PAD_INT(PAD_99)
struct A68t272  Body;
};
typedef struct A68t271  A68_271 ;    /* STRUCT(REF MODE241,MODE237,INT,REF MODE272)  */

A_PROCEDURE(A68_VOID ,A68t274,(A68_INT ,struct A68t261 *),(A68_INT ,struct A68t261 *,void *));
typedef struct A68t274  A68_274 ;    /* PROC(INT) MODE261 */

A_PROCEDURE(A68_VOID ,A68t275,(A68_INT ,struct A68t142 *),(A68_INT ,struct A68t142 *,void *));
typedef struct A68t275  A68_275 ;    /* PROC(INT) REF MODE142 */
struct A68t277 ;

A_PROCEDURE(A68_VOID ,A68t276,(A68_INT ,A68_INT ,struct A68t277 *),(A68_INT ,A68_INT ,struct A68t277 *,void *));
typedef struct A68t276  A68_276 ;    /* PROC(INT,INT) MODE277 */
struct A68t277{
A68_INT  Lwb;
A_PAD_INT(PAD_100)
A68_INT  Upb;
A_PAD_INT(PAD_101)
};
typedef struct A68t277  A68_277 ;    /* STRUCT(INT,INT)  */
struct A68t279 ;

A_PROCEDURE(A68_VOID ,A68t278,(A68_INT ,A68_INT ,struct A68t279 *),(A68_INT ,A68_INT ,struct A68t279 *,void *));
typedef struct A68t278  A68_278 ;    /* PROC(INT,INT) REF MODE279 */
A_VECTOR(struct A68t280 ,A68t279);
typedef struct A68t279  A68_279 ;    /* VECTOR [] MODE280 */
struct A68t280{
A68_INT  Instoffset;
A_PAD_INT(PAD_102)
A68_INT  Ipno;
A_PAD_INT(PAD_103)
};
typedef struct A68t280  A68_280 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t281,(A68_INT ,struct A68t237 *),(A68_INT ,struct A68t237 *,void *));
typedef struct A68t281  A68_281 ;    /* PROC(INT) MODE237 */

A_PROCEDURE(A68_VOID ,A68t282,(A68_INT ,struct A68t258 *),(A68_INT ,struct A68t258 *,void *));
typedef struct A68t282  A68_282 ;    /* PROC(INT) MODE258 */

A_PROCEDURE(A68_VOID ,A68t283,(A68_INT ,struct A68t259 *),(A68_INT ,struct A68t259 *,void *));
typedef struct A68t283  A68_283 ;    /* PROC(INT) MODE259 */

A_PROCEDURE(A68_VOID ,A68t284,(struct A68t271 ,struct A68t237 *),(struct A68t271 ,struct A68t237 *,void *));
typedef struct A68t284  A68_284 ;    /* PROC(MODE271) MODE237 */
struct A68t286 ;

A_PROCEDURE(A68_VOID ,A68t285,(struct A68t286 ),(struct A68t286 ,void *));
typedef struct A68t285  A68_285 ;    /* PROC(MODE286) VOID */

A_PROCEDURE(A68_BOOL ,A68t286,(A68_VC ),(A68_VC ,void *));
typedef struct A68t286  A68_286 ;    /* PROC(REF MODE26) BOOL */
struct A68t288 ;

A_PROCEDURE(A68_VOID ,A68t287,(struct A68t288 ,struct A68t222 ),(struct A68t288 ,struct A68t222 ,void *));
typedef struct A68t287  A68_287 ;    /* PROC(MODE288,MODE222) VOID */

A_PROCEDURE(A68_VOID ,A68t288,(A68_VC ,struct A68t222 ),(A68_VC ,struct A68t222 ,void *));
typedef struct A68t288  A68_288 ;    /* PROC(REF MODE26,MODE222) VOID */
struct A68t289{
A68_INT  Sort;
A_PAD_INT(PAD_104)
A68_INT  Size;
A_PAD_INT(PAD_105)
};
typedef struct A68t289  A68_289 ;    /* STRUCT(INT,INT)  */
struct A68t290{
struct A68t289  Head;
struct A68t290 * Tail;
};
typedef struct A68t290  A68_290 ;    /* STRUCT(MODE289,REF MODE290)  */
struct A68t292{
A68_INT  Lab;
A_PAD_INT(PAD_106)
A68_VC  Tag;
};
typedef struct A68t292  A68_292 ;    /* STRUCT(INT,REF MODE26)  */
struct A68t291{
struct A68t292  Labelint;
struct A68t292  Labelcallinst;
A68_INT  Workspacesize;
A_PAD_INT(PAD_107)
A68_INT  Evalfn;
A_PAD_INT(PAD_108)
A68_INT  History;
A_PAD_INT(PAD_109)
A68_INT  Declid;
A_PAD_INT(PAD_110)
};
typedef struct A68t291  A68_291 ;    /* STRUCT(MODE292,MODE292,INT,INT,INT,INT)  */

A_PROCEDURE(struct A68t291 *,A68t293,(A68_VC ,struct A68t142 ,A68_INT ,struct A68t142 ,struct A68t222 ),(A68_VC ,struct A68t142 ,A68_INT ,struct A68t142 ,struct A68t222 ,void *));
typedef struct A68t293  A68_293 ;    /* PROC(MODE26,MODE142,INT,MODE142,MODE222) REF MODE291 */
struct A68t294 { A68_INT mode; union {
A68_INT  mode1;
struct A68t292  mode2;
} data; };
typedef struct A68t294  A68_294 ;    /* UNION(INT,MODE292,VOID)  */

A_PROCEDURE(A68_VOID ,A68t295,(A68_VC ,struct A68t292 *),(A68_VC ,struct A68t292 *,void *));
typedef struct A68t295  A68_295 ;    /* PROC(MODE26) MODE292 */

A_PROCEDURE(A68_VOID ,A68t296,(struct A68t292 *),(struct A68t292 *,void *));
typedef struct A68t296  A68_296 ;    /* PROC MODE292 */

A_PROCEDURE(A68_VOID ,A68t297,(struct A68t201 ,A68_INT ,struct A68t222 ),(struct A68t201 ,A68_INT ,struct A68t222 ,void *));
typedef struct A68t297  A68_297 ;    /* PROC(MODE201,INT,MODE222) VOID */

A_PROCEDURE(A68_VOID ,A68t298,(struct A68t222 ),(struct A68t222 ,void *));
typedef struct A68t298  A68_298 ;    /* PROC(MODE222) VOID */

A_PROCEDURE(A68_INT ,A68t299,(A68_INT ,A68_INT *),(A68_INT ,A68_INT *,void *));
typedef struct A68t299  A68_299 ;    /* PROC(INT,REF INT) INT */

A_PROCEDURE(A68_VC *,A68t300,(A68_VC ),(A68_VC ,void *));
typedef struct A68t300  A68_300 ;    /* PROC(REF MODE26) REF REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t301,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t301  A68_301 ;    /* PROC(INT,REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t302,(A68_INT ),(A68_INT ,void *));
typedef struct A68t302  A68_302 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_VOID ,A68t303,(A68_INT ,struct A68t294 ),(A68_INT ,struct A68t294 ,void *));
typedef struct A68t303  A68_303 ;    /* PROC(INT,MODE294) VOID */

A_PROCEDURE(A68_VOID ,A68t304,(A68_INT ,A68_INT ,struct A68t294 ),(A68_INT ,A68_INT ,struct A68t294 ,void *));
typedef struct A68t304  A68_304 ;    /* PROC(INT,INT,MODE294) VOID */

A_PROCEDURE(A68_VOID ,A68t305,(struct A68t292 ),(struct A68t292 ,void *));
typedef struct A68t305  A68_305 ;    /* PROC(MODE292) VOID */

A_PROCEDURE(A68_VOID ,A68t306,(A68_INT ,struct A68t292 ),(A68_INT ,struct A68t292 ,void *));
typedef struct A68t306  A68_306 ;    /* PROC(INT,MODE292) VOID */

A_PROCEDURE(A68_VOID ,A68t307,(struct A68t294 ,struct A68t292 ),(struct A68t294 ,struct A68t292 ,void *));
typedef struct A68t307  A68_307 ;    /* PROC(MODE294,MODE292) VOID */

A_PROCEDURE(A68_VOID ,A68t308,(struct A68t292 ,struct A68t290 *,struct A68t290 *),(struct A68t292 ,struct A68t290 *,struct A68t290 *,void *));
typedef struct A68t308  A68_308 ;    /* PROC(MODE292,REF MODE290,REF MODE290) VOID */

A_PROCEDURE(A68_VOID ,A68t309,(struct A68t292 ,A68_INT ),(struct A68t292 ,A68_INT ,void *));
typedef struct A68t309  A68_309 ;    /* PROC(MODE292,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t310,(A68_INT ,struct A68t222 ,A68_VC *),(A68_INT ,struct A68t222 ,A68_VC *,void *));
typedef struct A68t310  A68_310 ;    /* PROC(INT,MODE222) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t311,(A68_INT ,struct A68t222 ),(A68_INT ,struct A68t222 ,void *));
typedef struct A68t311  A68_311 ;    /* PROC(INT,MODE222) VOID */

A_PROCEDURE(A68_VOID ,A68t312,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t312  A68_312 ;    /* PROC(REF MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t313,(A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t313  A68_313 ;    /* PROC(INT,INT) REF MODE26 */
struct A68t315 ;

A_PROCEDURE(A68_VOID ,A68t314,(A68_INT ,struct A68t315 *),(A68_INT ,struct A68t315 *,void *));
typedef struct A68t314  A68_314 ;    /* PROC(INT) MODE315 */
struct A68t315{
A68_INT  Lasttime;
A_PAD_INT(PAD_111)
A68_INT  Interrupted;
A_PAD_INT(PAD_112)
};
typedef struct A68t315  A68_315 ;    /* STRUCT(INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t316,(struct A68t288 ,struct A68t288 ,struct A68t222 ),(struct A68t288 ,struct A68t288 ,struct A68t222 ,void *));
typedef struct A68t316  A68_316 ;    /* PROC(MODE288,MODE288,MODE222) VOID */
struct A68t318 ;

A_PROCEDURE(A68_VOID ,A68t317,(struct A68t318 *),(struct A68t318 *,void *));
typedef struct A68t317  A68_317 ;    /* PROC MODE318 */
struct A68t318{
A68_INT  Codesize;
A_PAD_INT(PAD_113)
A68_INT  Datasize;
A_PAD_INT(PAD_114)
A68_INT  Dynamicstacksize;
A_PAD_INT(PAD_115)
A68_INT  Staticstacksize;
A_PAD_INT(PAD_116)
};
typedef struct A68t318  A68_318 ;    /* STRUCT(INT,INT,INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t319,(A68_INT ,A68_INT ,A68_INT ,A68_INT ),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t319  A68_319 ;    /* PROC(INT,INT,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t320,(struct A68t142 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ),(struct A68t142 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t320  A68_320 ;    /* PROC(MODE142,INT,INT,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t321,(struct A68t142 ,struct A68t224 ),(struct A68t142 ,struct A68t224 ,void *));
typedef struct A68t321  A68_321 ;    /* PROC(REF MODE142,MODE224) VOID */

A_PROCEDURE(A68_VOID ,A68t322,(struct A68t142 ,A68_INT ,struct A68t224 ,A68_INT ,A68_INT ,A68_INT ),(struct A68t142 ,A68_INT ,struct A68t224 ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t322  A68_322 ;    /* PROC(MODE142,INT,MODE224,INT,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t323,(struct A68t142 ,struct A68t142 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ),(struct A68t142 ,struct A68t142 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t323  A68_323 ;    /* PROC(MODE142,MODE142,INT,INT,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t324,(struct A68t243 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ),(struct A68t243 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t324  A68_324 ;    /* PROC(MODE243,INT,INT,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t325,(struct A68t243 ,struct A68t224 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ),(struct A68t243 ,struct A68t224 ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t325  A68_325 ;    /* PROC(MODE243,MODE224,INT,INT,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t326,(A68_INT ,A68_VC ,struct A68t258 *),(A68_INT ,A68_VC ,struct A68t258 *,void *));
typedef struct A68t326  A68_326 ;    /* PROC(INT,REF MODE26) MODE258 */

A_PROCEDURE(A68_VOID ,A68t327,(struct A68t142 ,A68_VC ,struct A68t258 *),(struct A68t142 ,A68_VC ,struct A68t258 *,void *));
typedef struct A68t327  A68_327 ;    /* PROC(MODE142,MODE26) MODE258 */
struct A68t328 { A68_INT mode; union {
struct A68t225 * mode1;
struct A68t226 * mode2;
struct A68t227 * mode3;
} data; };
typedef struct A68t328  A68_328 ;    /* UNION(REF MODE225,REF MODE226,REF MODE227)  */
struct A68t329{
struct A68t237 * Wire;
A68_INT  Instance;
A_PAD_INT(PAD_117)
};
typedef struct A68t329  A68_329 ;    /* STRUCT(REF MODE237,INT)  */
struct A68t330 { A68_INT mode; union {
struct A68t262  mode1;
struct A68t329  mode2;
} data; };
typedef struct A68t330  A68_330 ;    /* UNION(MODE262,MODE329)  */
struct A68t331{
struct A68t330  Node;
A68_INT  Circuit;
A_PAD_INT(PAD_118)
A68_INT  Base;
A_PAD_INT(PAD_119)
};
typedef struct A68t331  A68_331 ;    /* STRUCT(MODE330,INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t332,(struct A68t243 ,struct A68t224 *),(struct A68t243 ,struct A68t224 *,void *));
typedef struct A68t332  A68_332 ;    /* PROC(MODE243) MODE224 */

A_PROCEDURE(A68_BOOL ,A68t333,(struct A68t224 ,struct A68t224 ),(struct A68t224 ,struct A68t224 ,void *));
typedef struct A68t333  A68_333 ;    /* PROC(MODE224,MODE224) BOOL */

A_PROCEDURE(A68_BOOL ,A68t334,(struct A68t243 ,struct A68t243 ),(struct A68t243 ,struct A68t243 ,void *));
typedef struct A68t334  A68_334 ;    /* PROC(MODE243,MODE243) BOOL */

A_PROCEDURE(A68_BOOL ,A68t335,(struct A68t237 ,struct A68t237 ),(struct A68t237 ,struct A68t237 ,void *));
typedef struct A68t335  A68_335 ;    /* PROC(MODE237,MODE237) BOOL */

A_PROCEDURE(A68_BOOL ,A68t336,(struct A68t262 ,struct A68t262 ),(struct A68t262 ,struct A68t262 ,void *));
typedef struct A68t336  A68_336 ;    /* PROC(MODE262,MODE262) BOOL */

A_PROCEDURE(A68_BOOL ,A68t337,(struct A68t329 ,struct A68t329 ),(struct A68t329 ,struct A68t329 ,void *));
typedef struct A68t337  A68_337 ;    /* PROC(MODE329,MODE329) BOOL */

A_PROCEDURE(A68_BOOL ,A68t338,(struct A68t330 ,struct A68t330 ),(struct A68t330 ,struct A68t330 ,void *));
typedef struct A68t338  A68_338 ;    /* PROC(MODE330,MODE330) BOOL */

A_PROCEDURE(A68_BOOL ,A68t339,(struct A68t331 ,struct A68t331 ),(struct A68t331 ,struct A68t331 ,void *));
typedef struct A68t339  A68_339 ;    /* PROC(MODE331,MODE331) BOOL */

A_PROCEDURE(struct A68t231 *,A68t340,(struct A68t231 *,struct A68t231 *),(struct A68t231 *,struct A68t231 *,void *));
typedef struct A68t340  A68_340 ;    /* PROC(REF MODE231,REF MODE231) REF MODE231 */

A_PROCEDURE(A68_VOID ,A68t341,(struct A68t238 ,struct A68t238 ,struct A68t238 *),(struct A68t238 ,struct A68t238 ,struct A68t238 *,void *));
typedef struct A68t341  A68_341 ;    /* PROC(REF MODE238,REF MODE238) REF MODE238 */

A_PROCEDURE(A68_INT ,A68t342,(A68_VC ),(A68_VC ,void *));
typedef struct A68t342  A68_342 ;    /* PROC(REF MODE26) INT */

A_PROCEDURE(struct A68t44 *,A68t343,(A68_INT ),(A68_INT ,void *));
typedef struct A68t343  A68_343 ;    /* PROC(INT) REF MODE44 */

A_PROCEDURE(A68_INT ,A68t344,(struct A68t43 ,struct A68t216 ),(struct A68t43 ,struct A68t216 ,void *));
typedef struct A68t344  A68_344 ;    /* PROC(MODE43,MODE216) INT */

A_PROCEDURE(A68_INT ,A68t345,(struct A68t43 ),(struct A68t43 ,void *));
typedef struct A68t345  A68_345 ;    /* PROC(MODE43) INT */

A_PROCEDURE(A68_VOID ,A68t346,(struct A68t43 ,struct A68t43 *),(struct A68t43 ,struct A68t43 *,void *));
typedef struct A68t346  A68_346 ;    /* PROC(MODE43) MODE43 */

A_PROCEDURE(struct A68t40 *,A68t347,(struct A68t167 ),(struct A68t167 ,void *));
typedef struct A68t347  A68_347 ;    /* PROC(MODE167) REF MODE40 */

A_PROCEDURE(struct A68t56 *,A68t348,(struct A68t167 ),(struct A68t167 ,void *));
typedef struct A68t348  A68_348 ;    /* PROC(MODE167) REF MODE56 */

A_PROCEDURE(struct A68t74 *,A68t349,(struct A68t167 ),(struct A68t167 ,void *));
typedef struct A68t349  A68_349 ;    /* PROC(MODE167) REF MODE74 */

A_PROCEDURE(struct A68t80 *,A68t350,(struct A68t167 ),(struct A68t167 ,void *));
typedef struct A68t350  A68_350 ;    /* PROC(MODE167) REF MODE80 */

A_PROCEDURE(struct A68t158 *,A68t351,(struct A68t167 ),(struct A68t167 ,void *));
typedef struct A68t351  A68_351 ;    /* PROC(MODE167) REF MODE158 */

A_PROCEDURE(A68_INT ,A68t352,(struct A68t41 *,struct A68t162 ),(struct A68t41 *,struct A68t162 ,void *));
typedef struct A68t352  A68_352 ;    /* PROC(REF MODE41,REF MODE162) INT */

A_PROCEDURE(A68_INT ,A68t353,(struct A68t41 *,struct A68t163 ),(struct A68t41 *,struct A68t163 ,void *));
typedef struct A68t353  A68_353 ;    /* PROC(REF MODE41,REF MODE163) INT */

A_PROCEDURE(A68_INT ,A68t354,(struct A68t41 *,struct A68t164 ),(struct A68t41 *,struct A68t164 ,void *));
typedef struct A68t354  A68_354 ;    /* PROC(REF MODE41,REF MODE164) INT */

A_PROCEDURE(A68_INT ,A68t355,(struct A68t41 *,struct A68t165 ),(struct A68t41 *,struct A68t165 ,void *));
typedef struct A68t355  A68_355 ;    /* PROC(REF MODE41,REF MODE165) INT */

A_PROCEDURE(A68_INT ,A68t356,(struct A68t41 *,struct A68t166 ),(struct A68t41 *,struct A68t166 ,void *));
typedef struct A68t356  A68_356 ;    /* PROC(REF MODE41,REF MODE166) INT */

A_PROCEDURE(struct A68t40 *,A68t357,(struct A68t35 ,struct A68t171 *,struct A68t161 *),(struct A68t35 ,struct A68t171 *,struct A68t161 *,void *));
typedef struct A68t357  A68_357 ;    /* PROC(MODE35,REF MODE171,REF MODE161) REF MODE40 */

A_PROCEDURE(struct A68t56 *,A68t358,(struct A68t47 ,struct A68t171 *,struct A68t161 *),(struct A68t47 ,struct A68t171 *,struct A68t161 *,void *));
typedef struct A68t358  A68_358 ;    /* PROC(MODE47,REF MODE171,REF MODE161) REF MODE56 */

A_PROCEDURE(struct A68t74 *,A68t359,(struct A68t60 ,struct A68t171 *,struct A68t161 *),(struct A68t60 ,struct A68t171 *,struct A68t161 *,void *));
typedef struct A68t359  A68_359 ;    /* PROC(MODE60,REF MODE171,REF MODE161) REF MODE74 */

A_PROCEDURE(struct A68t80 *,A68t360,(struct A68t75 ,struct A68t171 *,struct A68t161 *),(struct A68t75 ,struct A68t171 *,struct A68t161 *,void *));
typedef struct A68t360  A68_360 ;    /* PROC(MODE75,REF MODE171,REF MODE161) REF MODE80 */

A_PROCEDURE(struct A68t158 *,A68t361,(struct A68t112 ,struct A68t171 *,struct A68t161 *),(struct A68t112 ,struct A68t171 *,struct A68t161 *,void *));
typedef struct A68t361  A68_361 ;    /* PROC(MODE112,REF MODE171,REF MODE161) REF MODE158 */

A_PROCEDURE(struct A68t63 *,A68t362,(struct A68t158 *),(struct A68t158 *,void *));
typedef struct A68t362  A68_362 ;    /* PROC(REF MODE158) REF MODE63 */

A_PROCEDURE(A68_VOID ,A68t363,(struct A68t62 *,struct A68t43 *),(struct A68t62 *,struct A68t43 *,void *));
typedef struct A68t363  A68_363 ;    /* PROC(REF MODE62) MODE43 */

A_PROCEDURE(A68_VOID ,A68t364,(struct A68t59 ,struct A68t161 *,struct A68t43 *),(struct A68t59 ,struct A68t161 *,struct A68t43 *,void *));
typedef struct A68t364  A68_364 ;    /* PROC(MODE59,REF MODE161) MODE43 */

A_PROCEDURE(struct A68t158 *,A68t365,(struct A68t158 *,struct A68t161 *,struct A68t161 *),(struct A68t158 *,struct A68t161 *,struct A68t161 *,void *));
typedef struct A68t365  A68_365 ;    /* PROC(REF MODE158,REF MODE161,REF MODE161) REF MODE158 */

A_PROCEDURE(A68_VOID ,A68t366,(struct A68t122 *,struct A68t158 *,struct A68t59 *),(struct A68t122 *,struct A68t158 *,struct A68t59 *,void *));
typedef struct A68t366  A68_366 ;    /* PROC(REF MODE122,REF MODE158) MODE59 */

A_PROCEDURE(A68_INT ,A68t367,(struct A68t122 *),(struct A68t122 *,void *));
typedef struct A68t367  A68_367 ;    /* PROC(REF MODE122) INT */

A_PROCEDURE(A68_INT ,A68t368,(struct A68t122 *,A68_INT ),(struct A68t122 *,A68_INT ,void *));
typedef struct A68t368  A68_368 ;    /* PROC(REF MODE122,INT) INT */

A_PROCEDURE(A68_VOID ,A68t369,(struct A68t81 ,struct A68t158 *,struct A68t161 *,struct A68t59 *),(struct A68t81 ,struct A68t158 *,struct A68t161 *,struct A68t59 *,void *));
typedef struct A68t369  A68_369 ;    /* PROC(MODE81,REF MODE158,REF MODE161) MODE59 */

A_PROCEDURE(A68_VOID ,A68t370,(struct A68t59 ,struct A68t161 *,struct A68t59 *),(struct A68t59 ,struct A68t161 *,struct A68t59 *,void *));
typedef struct A68t370  A68_370 ;    /* PROC(MODE59,REF MODE161) MODE59 */

A_PROCEDURE(A68_BOOL ,A68t371,(struct A68t59 ,struct A68t59 ,struct A68t161 *,struct A68t161 *,A68_BOOL ),(struct A68t59 ,struct A68t59 ,struct A68t161 *,struct A68t161 *,A68_BOOL ,void *));
typedef struct A68t371  A68_371 ;    /* PROC(MODE59,MODE59,REF MODE161,REF MODE161,BOOL) BOOL */

A_PROCEDURE(A68_INT ,A68t372,(struct A68t90 *,struct A68t161 *),(struct A68t90 *,struct A68t161 *,void *));
typedef struct A68t372  A68_372 ;    /* PROC(REF MODE90,REF MODE161) INT */

A_PROCEDURE(A68_VOID ,A68t373,(struct A68t59 ,struct A68t161 ,struct A68t171 *,struct A68t224 *),(struct A68t59 ,struct A68t161 ,struct A68t171 *,struct A68t224 *,void *));
typedef struct A68t373  A68_373 ;    /* PROC(MODE59,MODE161,REF MODE171) MODE224 */

A_PROCEDURE(A68_VOID ,A68t374,(struct A68t81 ,struct A68t161 ,struct A68t171 *,struct A68t243 *),(struct A68t81 ,struct A68t161 ,struct A68t171 *,struct A68t243 *,void *));
typedef struct A68t374  A68_374 ;    /* PROC(MODE81,MODE161,REF MODE171) MODE243 */

A_PROCEDURE(A68_VOID ,A68t375,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t375  A68_375 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t376,(struct A68t254 ),(struct A68t254 ,void *));
typedef struct A68t376  A68_376 ;    /* PROC(MODE254) VOID */

A_PROCEDURE(A68_VOID ,A68t377,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t377  A68_377 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,58,A68t378);
typedef struct A68t378  A68_378 ;    /* STRUCT 58 CHAR */

A_PROCEDURE(A68_VOID ,A68t379,(struct A68t94 ,A68_VC ,struct A68t158 ,struct A68t142 ,A68_INT ,struct A68t161 ,struct A68t171 *,struct A68t222 ,struct A68t258 *),(struct A68t94 ,A68_VC ,struct A68t158 ,struct A68t142 ,A68_INT ,struct A68t161 ,struct A68t171 *,struct A68t222 ,struct A68t258 *,void *));
typedef struct A68t379  A68_379 ;    /* PROC(MODE94,REF MODE26,MODE158,MODE142,INT,MODE161,REF MODE171,MODE222) MODE258 */

A_PROCEDURE(A68_VOID ,A68t380,(struct A68t224 ,struct A68t224 *),(struct A68t224 ,struct A68t224 *,void *));
typedef struct A68t380  A68_380 ;    /* PROC(MODE224) MODE224 */
A_ISTRUCT(A68_CHAR ,12,A68t381);
typedef struct A68t381  A68_381 ;    /* STRUCT 12 CHAR */

A_PROCEDURE(A68_VOID ,A68t382,(A68_BOOL ,struct A68t142 *),(A68_BOOL ,struct A68t142 *,void *));
typedef struct A68t382  A68_382 ;    /* PROC(BOOL) MODE142 */

A_PROCEDURE(A68_VOID ,A68t383,(A68_INT ,A68_INT ,A68_INT ),(A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t383  A68_383 ;    /* PROC(INT,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t384,(struct A68t229 *,A68_INT ,A68_INT ,A68_INT ),(struct A68t229 *,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t384  A68_384 ;    /* PROC(REF MODE229,INT,INT,INT) VOID */

A_PROCEDURE(A68_INT ,A68t385,(struct A68t224 ,A68_INT ),(struct A68t224 ,A68_INT ,void *));
typedef struct A68t385  A68_385 ;    /* PROC(MODE224,INT) INT */

A_PROCEDURE(A68_VOID ,A68t386,(struct A68t224 ,A68_INT ,A68_INT ,A68_INT ),(struct A68t224 ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t386  A68_386 ;    /* PROC(MODE224,INT,INT,INT) VOID */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from keconv --- */
/* --- End of imports from keconv --- */


/* --- Imports from kebasics --- */
extern A68_231 * WSAASIM_nilsst;
extern A68_224  ZSAASIM_nullstype;
/* --- End of imports from kebasics --- */


/* --- Imports from keamstandard --- */
extern A68_292  QHPASIM_newresultlabel;
extern A68_VOID  DOPASIM_translatestartfunction(A68_VC );
extern A68_VOID  ZOPASIM_translateendfunction(A68_INT ,A68_INT );
#define GPPASIM_leaveflag 0
#define HPPASIM_setflag 1
#define IPPASIM_resetflag 2
extern A68_VOID  VPPASIM_translatesomeinputs(struct A68t142 ,A68_INT ,A68_INT ,A68_INT ,A68_INT );
extern A68_VOID  FRPASIM_compresssizes(struct A68t142 ,struct A68t224 );
/* --- End of imports from keamstandard --- */


/* --- Imports from keambasics --- */
extern A68_294  ONFASIM_indirect;
extern A68_VOID  YLFASIM_label(A68_VC ,A68_292 *);
extern A68_VOID  YFNASIM_newlabel(A68_292 *);
#define CENASIM_bitsperbyte 8
extern A68_INT  DENASIM_ws;
extern A68_INT  GENASIM_sizeunit;
extern A68_BOOL  EENASIM_amversionup;
extern A68_VOID  SSNASIM_amadd(void);
extern A68_VOID  USNASIM_amsub(void);
extern A68_VOID  WSNASIM_ammul(void);
extern A68_VOID  YSNASIM_amdiv(void);
extern A68_VOID  ATNASIM_ammod(void);
extern A68_VOID  CTNASIM_amneg(void);
extern A68_VOID  KTNASIM_amshl(void);
extern A68_VOID  OTNASIM_amcom(void);
extern A68_VOID  QTNASIM_amtest(void);
extern A68_VOID  STNASIM_ameq(void);
extern A68_VOID  UTNASIM_amneq(void);
extern A68_VOID  YTNASIM_amge(void);
extern A68_VOID  AUNASIM_amlt(void);
extern A68_VOID  CUNASIM_amle(void);
extern A68_VOID  EUNASIM_amand(void);
extern A68_VOID  GUNASIM_amor(void);
extern A68_VOID  IUNASIM_amnot(void);
extern A68_VOID  QUNASIM_ampushint(A68_INT );
extern A68_VOID  TUNASIM_amdrop(A68_INT );
extern A68_VOID  WUNASIM_amlocal(A68_INT );
extern A68_VOID  AVNASIM_amglobal(A68_INT ,struct A68t294 );
extern A68_VOID  FVNASIM_amstore(A68_INT ,struct A68t294 );
extern A68_VOID  LVNASIM_ambstring(A68_INT ,A68_INT ,struct A68t294 );
extern A68_VOID  QVNASIM_ambstore(A68_INT ,struct A68t294 );
extern A68_VOID  EWNASIM_amjump(struct A68t292 );
extern A68_VOID  IWNASIM_amjumpno(A68_INT ,struct A68t292 );
extern A68_VOID  NWNASIM_amlabel(A68_INT ,struct A68t292 );
extern A68_VOID  QWNASIM_amrepeat(void);
extern A68_VOID  SWNASIM_amloop(void);
extern A68_VOID  BXNASIM_amcall(A68_INT ,struct A68t292 );
/* --- End of imports from keambasics --- */


/* --- Imports from kesymbols --- */
extern A68_VOID  VGCASIM_lookuptype(A68_INT ,A68_224 *);
extern A68_INT  YGCASIM_lookuptypesize(A68_INT );
#define IHCASIM_combinatorial 0X1U
/* --- End of imports from kesymbols --- */


/* --- Imports from kesignals --- */
extern A68_INT  NZNASIM_machinewidth(struct A68t224 );
extern A68_INT  DCOASIM_rawsignalwidth(struct A68t224 );
/* --- End of imports from kesignals --- */


/* --- Imports from basics --- */
/* --- End of imports from basics --- */


/* --- Imports from assmodes --- */
/* --- End of imports from assmodes --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void KUBASIM(void);   /* keconv */
extern void JSAASIM(void);   /* kebasics */
extern void HYOASIM(void);   /* keamstandard */
extern void XDNASIM(void);   /* keambasics */
extern void TCCASIM(void);   /* kesymbols */
extern void NYNASIM(void);   /* kesignals */
extern void JSCAOST(void);   /* basics */
extern void BAAATRN(void);   /* assmodes */
/* --- end of DECS initialisation functions --- */
static A68_378   XPWASIM = {"$Id: keamreplace.a68,v 34.2 1995/03/29 13:04:38 ella Exp $"}; 
A_GISVEC(A68_VC ,YPWASIM,XPWASIM,58)
static A68_381   YRWASIM = {"Genericquery"}; 
A_GISVEC(A68_VC ,ZRWASIM,YRWASIM,12)
#define PWWASIM_pvidepth 1
typedef struct   /* env of non-global proc */
{
A68_INT  ORWASIM_outputoffset;
A_PAD_INT(PAD_120)
} XRWASIM_genericquery;
typedef struct   /* env of non-global proc */
{
A68_INT  IRWASIM_newvalprimno;
A_PAD_INT(PAD_122)
A68_142  Inputtypes;
A68_224 * XQWASIM_newvaltype;
A68_INT  HRWASIM_newvalwidth;
A_PAD_INT(PAD_123)
A68_INT  NRWASIM_rhsoffset;
A_PAD_INT(PAD_124)
A68_INT  ORWASIM_outputoffset;
A_PAD_INT(PAD_125)
} FSWASIM_copyrhstoindexedoutput;
typedef struct   /* env of non-global proc */
{
A68_INT  IRWASIM_newvalprimno;
A_PAD_INT(PAD_127)
A68_142  Inputtypes;
A68_224 * XQWASIM_newvaltype;
A68_INT  HRWASIM_newvalwidth;
A_PAD_INT(PAD_128)
A68_INT  LRWASIM_inputoffset;
A_PAD_INT(PAD_129)
A68_INT  ORWASIM_outputoffset;
A_PAD_INT(PAD_130)
} YSWASIM_copyindexedlhstoindexedoutput;
typedef struct   /* env of non-global proc */
{
A68_INT  MRWASIM_indexoffset;
A_PAD_INT(PAD_131)
} RTWASIM_pushindexqueryflag;
typedef struct   /* env of non-global proc */
{
A68_INT  HRWASIM_newvalwidth;
A_PAD_INT(PAD_132)
A68_263  PTWASIM_pushindexqueryflag;
A68_319  VRWASIM_genericquery;
A68_INT  MRWASIM_indexoffset;
A_PAD_INT(PAD_133)
A68_263  WSWASIM_copyindexedlhstoindexedoutput;
A68_INT  NRWASIM_rhsoffset;
A_PAD_INT(PAD_134)
A68_INT  ORWASIM_outputoffset;
A_PAD_INT(PAD_135)
} LUWASIM_copyindexedstringtoindexedoutput;
typedef struct   /* env of non-global proc */
{
A68_INT * VQWASIM_numberofdimensions;
} GVWASIM_weight;
typedef struct   /* env of non-global proc */
{
A68_142  Inputtypes;
A68_INT  QRWASIM_indexinput;
A_PAD_INT(PAD_136)
A68_263  PTWASIM_pushindexqueryflag;
A68_INT  MRWASIM_indexoffset;
A_PAD_INT(PAD_137)
} TVWASIM_inaddressedrange;
typedef struct   /* env of non-global proc */
{
A68_385  EVWASIM_weight;
A68_319  RVWASIM_inaddressedrange;
A68_263  PTWASIM_pushindexqueryflag;
A68_386  GWWASIM_dimension;
A68_BOOL * CRWASIM_lastdyindexisonstring;
A68_384  JUWASIM_copyindexedstringtoindexedoutput;
A68_263  DSWASIM_copyrhstoindexedoutput;
A68_319  VRWASIM_genericquery;
A68_INT  HRWASIM_newvalwidth;
A_PAD_INT(PAD_138)
A68_263  WSWASIM_copyindexedlhstoindexedoutput;
} IWWASIM_dimension;
typedef struct   /* env of non-global proc */
{
A68_INT  IRWASIM_newvalprimno;
A_PAD_INT(PAD_121)
} JSWASIM_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  IRWASIM_newvalprimno;
A_PAD_INT(PAD_126)
} CTWASIM_generator;

A68_VOID  HQWASIM_translatereplace(A68_94  Body, A68_VC  Name, A68_158  Declaration, A68_142  Inputtypes, A68_INT  Outputtype, A68_161  Environ, A68_171 * Closure, A68_222  Flt, A68_258  *ReturnedValue);

A_STATIC A68_VOID  KQWASIM_nextdimension(A68_224  I, A68_224  *ReturnedValue);

A_STATIC A68_VOID  WRWASIM_genericquery(A68_INT  Width, A68_INT  Addressdepth, A68_INT  Flagadjust, A68_INT  D, void *NonLocals);

A_STATIC A68_VOID  ESWASIM_copyrhstoindexedoutput(A68_INT  Pvidepth, A68_INT  D, void *NonLocals);

A_STATIC A68_VOID  ISWASIM_generator(A68_BOOL  GSWASIM_anonymous, A68_142  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  XSWASIM_copyindexedlhstoindexedoutput(A68_INT  Pvidepth, A68_INT  D, void *NonLocals);

A_STATIC A68_VOID  BTWASIM_generator(A68_BOOL  ZSWASIM_anonymous, A68_142  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  QTWASIM_pushindexqueryflag(A68_INT  I, A68_INT  D, void *NonLocals);

A_STATIC A68_VOID  UTWASIM_storeindirect(A68_INT  Storelen, A68_INT  Enclosinglen);

A_STATIC A68_VOID  YTWASIM_stringindirect(A68_INT  Len, A68_INT  Enclosinglen);

A_STATIC A68_VOID  CUWASIM_compareandsetflag(A68_INT  Size, A68_INT  Flagadjust, A68_INT  D);

A_STATIC A68_VOID  KUWASIM_copyindexedstringtoindexedoutput(A68_229 * S, A68_INT  Pvidepth, A68_INT  I, A68_INT  D, void *NonLocals);

A_STATIC A68_INT  VUWASIM_upbdimension(A68_224  I);

A_STATIC A68_INT  FVWASIM_weight(A68_224  Unit, A68_INT  I, void *NonLocals);

A_STATIC A68_VOID  SVWASIM_inaddressedrange(A68_INT  Weight_i, A68_INT  I, A68_INT  Pvidepth, A68_INT  D, void *NonLocals);

A_STATIC A68_VOID  HWWASIM_dimension(A68_224  Unit, A68_INT  I, A68_INT  Numberofdimensions, A68_INT  D, void *NonLocals);

A_STATIC A68_VOID  ISWASIM_generator(A68_BOOL  GSWASIM_anonymous, A68_142  *ReturnedValue, void *NonLocals)
#define NL(x) (((JSWASIM_generator *)NonLocals)->x)
{ 
A68_142  KSWASIM;  /* clause result */
A68_142  LSWASIM;  /* OPERATORS - dynamic generator */
{ 
LSWASIM.upb = NL(IRWASIM_newvalprimno) ;
( GSWASIM_anonymous? A_VLOC(A68_INT ,LSWASIM): A_VHEAP(A68_INT ,LSWASIM) );
KSWASIM = LSWASIM;
} 
*ReturnedValue = (KSWASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  BTWASIM_generator(A68_BOOL  ZSWASIM_anonymous, A68_142  *ReturnedValue, void *NonLocals)
#define NL(x) (((CTWASIM_generator *)NonLocals)->x)
{ 
A68_142  DTWASIM;  /* clause result */
A68_142  ETWASIM;  /* OPERATORS - dynamic generator */
{ 
ETWASIM.upb = NL(IRWASIM_newvalprimno) ;
( ZSWASIM_anonymous? A_VLOC(A68_INT ,ETWASIM): A_VHEAP(A68_INT ,ETWASIM) );
DTWASIM = ETWASIM;
} 
*ReturnedValue = (DTWASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  KQWASIM_nextdimension(A68_224  I, A68_224  *ReturnedValue)
{ 
A68_224  LQWASIM;  /* united object - for case conformity */
A68_228 * MQWASIM_srow;
A68_224  NQWASIM;  /* clause result */
A68_231 * OQWASIM_sst;
A68_229 * PQWASIM_sstring;
A68_224  QQWASIM;  /* OPERATORS - mode -> union mode */
A68_227 * RQWASIM;  /* YIELD */
A_PROC_ENTRY(nextdimension);
 /* line 132: */
 /* line 133: */
LQWASIM = I ;
switch ( LQWASIM.mode )
{ 
case 4: /* REF STRUCT(INT,MODE224)  */
MQWASIM_srow = (LQWASIM.data.mode4);
 /* line 134: */
NQWASIM = (*(&(MQWASIM_srow->Type)));
break;
case 7: /* REF STRUCT(MODE224,REF MODE231)  */
OQWASIM_sst = (LQWASIM.data.mode7);
 /* line 135: */
NQWASIM = (*(&(OQWASIM_sst->T)));
break;
case 5: /* REF STRUCT(INT,MODE227)  */
PQWASIM_sstring = (LQWASIM.data.mode5);
 /* line 136: */
 /* line 137: */
RQWASIM = (&(PQWASIM_sstring->T)) ;
NQWASIM = A_UNITE(QQWASIM,mode3,3,RQWASIM);
break;
default: 
NQWASIM = ZSAASIM_nullstype;
break;
} 
A_PROC_EXIT(nextdimension);
*ReturnedValue = (NQWASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  WRWASIM_genericquery(A68_INT  Width, A68_INT  Addressdepth, A68_INT  Flagadjust, A68_INT  D, void *NonLocals)
#define NL(x) (((XRWASIM_genericquery *)NonLocals)->x)
{ 
A68_292  ASWASIM;  /* avoid structure result */
A_PROC_ENTRY(genericquery);
 /* line 189: */
 /* line 190: */
{ 
WUNASIM_amlocal((D-1));
 /* line 191: */
WUNASIM_amlocal((Addressdepth+1));
 /* line 192: */
QUNASIM_ampushint(Width);
 /* line 193: */
WSNASIM_ammul();
 /* line 194: */
QUNASIM_ampushint(NL(ORWASIM_outputoffset));
 /* line 195: */
SSNASIM_amadd();
 /* line 196: */
QUNASIM_ampushint(Width);
 /* line 197: */
YLFASIM_label( ZRWASIM, &ASWASIM );
BXNASIM_amcall(3, ASWASIM);
 /* line 198: */
 /* line 199: */
TUNASIM_amdrop(3);
} 
A_PROC_EXIT(genericquery);
return;
} 
#undef NL

A_STATIC A68_VOID  ESWASIM_copyrhstoindexedoutput(A68_INT  Pvidepth, A68_INT  D, void *NonLocals)
#define NL(x) (((FSWASIM_copyrhstoindexedoutput *)NonLocals)->x)
{ 
A68_382  HSWASIM_generator;   /* proc value of non-global proc */
A68_142  NSWASIM;  /* avoid structure result */
A68_142  MSWASIM_sizes;
A68_INT  OSWASIM_t;
A68_INT * PSWASIM_s;
A68_142  QSWASIM;  /* OPERATORS - trim index */
A68_142  RSWASIM;  /* forall yield */
A68_INT * SSWASIM;  /* forall control - []x */
A68_INT  TSWASIM;  /* forall loop counter */
A_PROC_ENTRY(copyrhstoindexedoutput);
 /* line 204: */
 /* line 206: */
{ 
A_CLOSURE( HSWASIM_generator, ISWASIM_generator, JSWASIM_generator );
(( JSWASIM_generator * ) ( HSWASIM_generator.nonlocals )) -> IRWASIM_newvalprimno = NL(IRWASIM_newvalprimno);
A_CALLPROC(HSWASIM_generator,(A68_TRUE, &NSWASIM),(A68_TRUE, &NSWASIM,(HSWASIM_generator).nonlocals));
MSWASIM_sizes = NSWASIM;
 /* line 207: */
RSWASIM = A_VTRIM(QSWASIM,(NL(Inputtypes)),A_VTSCRIPT(&(QSWASIM.upb),(NL(Inputtypes)).upb,1,NL(IRWASIM_newvalprimno))) ;
TSWASIM = RSWASIM.upb -1;
if ( TSWASIM != MSWASIM_sizes.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
SSWASIM = RSWASIM.data;
PSWASIM_s = MSWASIM_sizes.data;
for (;TSWASIM-- >= 0;
(SSWASIM++
,PSWASIM_s++
) )
{
OSWASIM_t = *SSWASIM;
 /* line 208: */
 /* line 209: */
(*PSWASIM_s) = YGCASIM_lookuptypesize(OSWASIM_t);
}
 /* line 210: */
FRPASIM_compresssizes(MSWASIM_sizes, (*NL(XQWASIM_newvaltype)));
 /* line 212: */
WUNASIM_amlocal((D-1));
 /* line 214: */
WUNASIM_amlocal((Pvidepth+1));
 /* line 215: */
QUNASIM_ampushint(NL(HRWASIM_newvalwidth));
 /* line 216: */
WSNASIM_ammul();
 /* line 217: */
WUNASIM_amlocal((D+1));
 /* line 218: */
SSNASIM_amadd();
 /* line 222: */
 /* line 223: */
VPPASIM_translatesomeinputs(MSWASIM_sizes, NL(NRWASIM_rhsoffset), NL(ORWASIM_outputoffset), IPPASIM_resetflag, (D+2));
 /* line 226: */
 /* line 228: */
TUNASIM_amdrop(2);
} 
A_PROC_EXIT(copyrhstoindexedoutput);
return;
} 
#undef NL

A_STATIC A68_VOID  XSWASIM_copyindexedlhstoindexedoutput(A68_INT  Pvidepth, A68_INT  D, void *NonLocals)
#define NL(x) (((YSWASIM_copyindexedlhstoindexedoutput *)NonLocals)->x)
{ 
A68_382  ATWASIM_generator;   /* proc value of non-global proc */
A68_142  GTWASIM;  /* avoid structure result */
A68_142  FTWASIM_sizes;
A68_INT  HTWASIM_t;
A68_INT * ITWASIM_s;
A68_142  JTWASIM;  /* OPERATORS - trim index */
A68_142  KTWASIM;  /* forall yield */
A68_INT * LTWASIM;  /* forall control - []x */
A68_INT  MTWASIM;  /* forall loop counter */
A_PROC_ENTRY(copyindexedlhstoindexedoutput);
 /* line 231: */
 /* line 233: */
{ 
A_CLOSURE( ATWASIM_generator, BTWASIM_generator, CTWASIM_generator );
(( CTWASIM_generator * ) ( ATWASIM_generator.nonlocals )) -> IRWASIM_newvalprimno = NL(IRWASIM_newvalprimno);
A_CALLPROC(ATWASIM_generator,(A68_TRUE, &GTWASIM),(A68_TRUE, &GTWASIM,(ATWASIM_generator).nonlocals));
FTWASIM_sizes = GTWASIM;
 /* line 234: */
KTWASIM = A_VTRIM(JTWASIM,(NL(Inputtypes)),A_VTSCRIPT(&(JTWASIM.upb),(NL(Inputtypes)).upb,1,NL(IRWASIM_newvalprimno))) ;
MTWASIM = KTWASIM.upb -1;
if ( MTWASIM != FTWASIM_sizes.upb -1 )
{ A_ERROR( "mismatched bounds in FORALL; row no 2"); }
LTWASIM = KTWASIM.data;
ITWASIM_s = FTWASIM_sizes.data;
for (;MTWASIM-- >= 0;
(LTWASIM++
,ITWASIM_s++
) )
{
HTWASIM_t = *LTWASIM;
 /* line 235: */
 /* line 236: */
(*ITWASIM_s) = YGCASIM_lookuptypesize(HTWASIM_t);
}
 /* line 237: */
FRPASIM_compresssizes(FTWASIM_sizes, (*NL(XQWASIM_newvaltype)));
 /* line 239: */
WUNASIM_amlocal(Pvidepth);
 /* line 240: */
QUNASIM_ampushint((DENASIM_ws*NL(IRWASIM_newvalprimno)));
 /* line 241: */
WSNASIM_ammul();
 /* line 242: */
WUNASIM_amlocal(D);
 /* line 243: */
SSNASIM_amadd();
 /* line 245: */
WUNASIM_amlocal((Pvidepth+1));
 /* line 246: */
QUNASIM_ampushint(NL(HRWASIM_newvalwidth));
 /* line 247: */
WSNASIM_ammul();
 /* line 248: */
WUNASIM_amlocal((D+1));
 /* line 249: */
SSNASIM_amadd();
 /* line 252: */
 /* line 253: */
VPPASIM_translatesomeinputs(FTWASIM_sizes, NL(LRWASIM_inputoffset), NL(ORWASIM_outputoffset), IPPASIM_resetflag, (D+2));
 /* line 256: */
 /* line 258: */
TUNASIM_amdrop(2);
} 
A_PROC_EXIT(copyindexedlhstoindexedoutput);
return;
} 
#undef NL

A_STATIC A68_VOID  QTWASIM_pushindexqueryflag(A68_INT  I, A68_INT  D, void *NonLocals)
#define NL(x) (((RTWASIM_pushindexqueryflag *)NonLocals)->x)
{ 
A_PROC_ENTRY(pushindexqueryflag);
 /* line 261: */
 /* line 263: */
{ 
WUNASIM_amlocal((D-1));
 /* line 264: */
QUNASIM_ampushint((NL(MRWASIM_indexoffset)+((I-1)*DENASIM_ws)));
 /* line 265: */
SSNASIM_amadd();
 /* line 266: */
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
 /* line 267: */
 /* line 269: */
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
} 
A_PROC_EXIT(pushindexqueryflag);
return;
} 
#undef NL

A_STATIC A68_VOID  UTWASIM_storeindirect(A68_INT  Storelen, A68_INT  Enclosinglen)
{ 
A68_INT  VTWASIM_wordbitsize;
A_PROC_ENTRY(storeindirect);
 /* line 275: */
 /* line 277: */
{ 
VTWASIM_wordbitsize = (DENASIM_ws*CENASIM_bitsperbyte);
 /* line 279: */
WUNASIM_amlocal(2);
 /* line 280: */
QUNASIM_ampushint(VTWASIM_wordbitsize);
 /* line 281: */
YSNASIM_amdiv();
 /* line 282: */
QUNASIM_ampushint(DENASIM_ws);
 /* line 283: */
WSNASIM_ammul();
 /* line 286: */
 /* line 287: */
if ( !EENASIM_amversionup )
{ 
WUNASIM_amlocal(2);
 /* line 288: */
SSNASIM_amadd();
 /* line 291: */
WUNASIM_amlocal(1);
 /* line 294: */
QVNASIM_ambstore(Storelen, ONFASIM_indirect);
 /* line 296: */
 /* line 297: */
 /* line 298: */
TUNASIM_amdrop(3);
} 
else
{ 
CTNASIM_amneg();
 /* line 300: */
QUNASIM_ampushint(((Enclosinglen/CENASIM_bitsperbyte)-DENASIM_ws));
 /* line 301: */
SSNASIM_amadd();
 /* line 302: */
WUNASIM_amlocal(2);
 /* line 303: */
SSNASIM_amadd();
 /* line 305: */
QUNASIM_ampushint(0);
 /* line 306: */
WUNASIM_amlocal(1);
 /* line 307: */
WUNASIM_amlocal(3);
 /* line 309: */
QVNASIM_ambstore(Storelen, ONFASIM_indirect);
 /* line 311: */
 /* line 312: */
 /* line 313: */
TUNASIM_amdrop(4);
} 
} 
A_PROC_EXIT(storeindirect);
return;
} 
#undef NL

A_STATIC A68_VOID  YTWASIM_stringindirect(A68_INT  Len, A68_INT  Enclosinglen)
{ 
A_PROC_ENTRY(stringindirect);
 /* line 316: */
 /* line 318: */
{ 
WUNASIM_amlocal(0);
 /* line 320: */
QUNASIM_ampushint((DENASIM_ws*CENASIM_bitsperbyte));
 /* line 321: */
YSNASIM_amdiv();
 /* line 322: */
QUNASIM_ampushint((DENASIM_ws*CENASIM_bitsperbyte));
 /* line 323: */
WSNASIM_ammul();
 /* line 325: */
WUNASIM_amlocal(2);
 /* line 327: */
 /* line 330: */
LVNASIM_ambstring(Len, Enclosinglen, ONFASIM_indirect);
} 
A_PROC_EXIT(stringindirect);
return;
} 
#undef NL

A_STATIC A68_VOID  CUWASIM_compareandsetflag(A68_INT  Size, A68_INT  Flagadjust, A68_INT  D)
{ 
A68_292  DUWASIM;  /* avoid structure result */
A68_292  EUWASIM_samelabel;
A_PROC_ENTRY(compareandsetflag);
 /* line 334: */
 /* line 335: */
if ( (Flagadjust!=GPPASIM_leaveflag) )
{ 
YFNASIM_newlabel(  &DUWASIM );
EUWASIM_samelabel = DUWASIM;
 /* line 336: */
WUNASIM_amlocal(1);
 /* line 337: */
WUNASIM_amlocal(1);
 /* line 338: */
UTNASIM_amneq();
 /* line 339: */
IWNASIM_amjumpno(0, EUWASIM_samelabel);
 /* line 340: */
WUNASIM_amlocal((D-1));
 /* line 341: */
 /* line 342: */
if ( (Flagadjust==HPPASIM_setflag) )
{ 
 /* line 343: */
 /* line 344: */
QUNASIM_ampushint(1);
} 
else
{ 
 /* line 345: */
QUNASIM_ampushint(0);
} 
 /* line 346: */
FVNASIM_amstore(GENASIM_sizeunit, ONFASIM_indirect);
 /* line 347: */
 /* line 348: */
NWNASIM_amlabel(D, EUWASIM_samelabel);
} 
A_PROC_EXIT(compareandsetflag);
return;
} 
#undef NL
 /* line 351: */

A_STATIC A68_VOID  KUWASIM_copyindexedstringtoindexedoutput(A68_229 * S, A68_INT  Pvidepth, A68_INT  I, A68_INT  D, void *NonLocals)
#define NL(x) (((LUWASIM_copyindexedstringtoindexedoutput *)NonLocals)->x)
{ 
A68_INT  MUWASIM_enclosinglen;
A68_292  NUWASIM;  /* avoid structure result */
A68_292  OUWASIM_rowendlabel;
A68_INT  PUWASIM;  /* clause result */
A68_INT  QUWASIM_charbitsize;
A68_292  RUWASIM;  /* avoid structure result */
A68_292  SUWASIM_newstringlabel;
A68_INT  TUWASIM;  /* ADICOPS - ** */
A_PROC_ENTRY(copyindexedstringtoindexedoutput);
 /* line 352: */
 /* line 354: */
{ 
MUWASIM_enclosinglen = ((NL(HRWASIM_newvalwidth)-GENASIM_sizeunit)*CENASIM_bitsperbyte);
 /* line 355: */
YFNASIM_newlabel(  &NUWASIM );
OUWASIM_rowendlabel = NUWASIM;
 /* line 356: */
A_CALLPROC(NL(PTWASIM_pushindexqueryflag),(I, D),(I, D,(NL(PTWASIM_pushindexqueryflag)).nonlocals));
 /* line 359: */
QTNASIM_amtest();
 /* line 360: */
IUNASIM_amnot();
 /* line 361: */
IWNASIM_amjumpno(0, QHPASIM_newresultlabel);
 /* line 365: */
A_CALLPROC(NL(VRWASIM_genericquery),(NL(HRWASIM_newvalwidth), Pvidepth, IPPASIM_resetflag, D),(NL(HRWASIM_newvalwidth), Pvidepth, IPPASIM_resetflag, D,(NL(VRWASIM_genericquery)).nonlocals));
 /* line 367: */
EWNASIM_amjump(OUWASIM_rowendlabel);
 /* line 369: */
NWNASIM_amlabel(D, QHPASIM_newresultlabel);
 /* line 372: */
WUNASIM_amlocal((D-1));
 /* line 373: */
QUNASIM_ampushint((NL(MRWASIM_indexoffset)+((I-1)*DENASIM_ws)));
 /* line 374: */
SSNASIM_amadd();
 /* line 375: */
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
 /* line 376: */
QUNASIM_ampushint(GENASIM_sizeunit);
 /* line 377: */
SSNASIM_amadd();
 /* line 378: */
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
 /* line 385: */
A_CALLPROC(NL(WSWASIM_copyindexedlhstoindexedoutput),((Pvidepth+1), (D+1)),((Pvidepth+1), (D+1),(NL(WSWASIM_copyindexedlhstoindexedoutput)).nonlocals));
 /* line 389: */
 /* line 390: */
if ( ((*(&((&(S->T))->Char))).upb==2) )
{ 
PUWASIM = 1;
} 
else
{ 
PUWASIM = CENASIM_bitsperbyte;
} 
QUWASIM_charbitsize = PUWASIM;
 /* line 391: */
YFNASIM_newlabel(  &RUWASIM );
SUWASIM_newstringlabel = RUWASIM;
 /* line 392: */
WUNASIM_amlocal(D);
 /* line 393: */
QUNASIM_ampushint(NL(NRWASIM_rhsoffset));
 /* line 394: */
SSNASIM_amadd();
 /* line 397: */
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
 /* line 398: */
AVNASIM_amglobal(GENASIM_sizeunit, ONFASIM_indirect);
 /* line 401: */
QTNASIM_amtest();
 /* line 402: */
IUNASIM_amnot();
 /* line 403: */
IWNASIM_amjumpno(0, SUWASIM_newstringlabel);
 /* line 407: */
A_CALLPROC(NL(VRWASIM_genericquery),(NL(HRWASIM_newvalwidth), (Pvidepth+1), IPPASIM_resetflag, (D+1)),(NL(HRWASIM_newvalwidth), (Pvidepth+1), IPPASIM_resetflag, (D+1),(NL(VRWASIM_genericquery)).nonlocals));
 /* line 409: */
TUNASIM_amdrop(1);
 /* line 410: */
EWNASIM_amjump(OUWASIM_rowendlabel);
 /* line 411: */
NWNASIM_amlabel(D, SUWASIM_newstringlabel);
 /* line 415: */
WUNASIM_amlocal(D);
 /* line 416: */
QUNASIM_ampushint((NL(ORWASIM_outputoffset)+GENASIM_sizeunit));
 /* line 417: */
SSNASIM_amadd();
 /* line 418: */
WUNASIM_amlocal((Pvidepth+2));
 /* line 419: */
QUNASIM_ampushint(NL(HRWASIM_newvalwidth));
 /* line 420: */
WSNASIM_ammul();
 /* line 421: */
SSNASIM_amadd();
 /* line 422: */
WUNASIM_amlocal(1);
 /* line 424: */
QUNASIM_ampushint(1);
 /* line 425: */
USNASIM_amsub();
 /* line 427: */
 /* line 429: */
if ( ((*(&((&(S->T))->Char))).upb!=2) )
{ 
QUNASIM_ampushint(3);
 /* line 430: */
 /* line 431: */
KTNASIM_amshl();
} 
 /* line 434: */
YTWASIM_stringindirect((DENASIM_ws*CENASIM_bitsperbyte), MUWASIM_enclosinglen);
 /* line 436: */
WUNASIM_amlocal(0);
 /* line 440: */
TUWASIM = 2 ;
QUNASIM_ampushint((A_LI_POWER(TUWASIM,QUWASIM_charbitsize,(A68_INT ))-1));
 /* line 442: */
QUNASIM_ampushint(((DENASIM_ws*CENASIM_bitsperbyte)-QUWASIM_charbitsize));
 /* line 443: */
WUNASIM_amlocal(4);
 /* line 444: */
QUNASIM_ampushint((DENASIM_ws*CENASIM_bitsperbyte));
 /* line 445: */
ATNASIM_ammod();
 /* line 446: */
USNASIM_amsub();
 /* line 447: */
KTNASIM_amshl();
 /* line 448: */
OTNASIM_amcom();
 /* line 450: */
EUNASIM_amand();
 /* line 452: */
WUNASIM_amlocal((D+4));
 /* line 453: */
QUNASIM_ampushint(NL(NRWASIM_rhsoffset));
 /* line 454: */
SSNASIM_amadd();
 /* line 455: */
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
 /* line 456: */
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
 /* line 458: */
 /* line 460: */
if ( ((*(&((&(S->T))->Char))).upb==2) )
{ 
QUNASIM_ampushint(1);
 /* line 461: */
 /* line 462: */
USNASIM_amsub();
} 
 /* line 465: */
QUNASIM_ampushint(((DENASIM_ws*CENASIM_bitsperbyte)-QUWASIM_charbitsize));
 /* line 466: */
WUNASIM_amlocal(4);
 /* line 467: */
QUNASIM_ampushint((DENASIM_ws*CENASIM_bitsperbyte));
 /* line 468: */
ATNASIM_ammod();
 /* line 469: */
USNASIM_amsub();
 /* line 470: */
KTNASIM_amshl();
 /* line 471: */
GUNASIM_amor();
 /* line 476: */
CUWASIM_compareandsetflag(GENASIM_sizeunit, IPPASIM_resetflag, (D+5));
 /* line 479: */
WUNASIM_amlocal(2);
 /* line 480: */
WUNASIM_amlocal(4);
 /* line 481: */
WUNASIM_amlocal(2);
 /* line 484: */
UTWASIM_storeindirect((DENASIM_ws*CENASIM_bitsperbyte), MUWASIM_enclosinglen);
 /* line 486: */
TUNASIM_amdrop(5);
 /* line 488: */
 /* line 489: */
NWNASIM_amlabel(D, OUWASIM_rowendlabel);
} 
A_PROC_EXIT(copyindexedstringtoindexedoutput);
return;
} 
#undef NL

A_STATIC A68_INT  VUWASIM_upbdimension(A68_224  I)
{ 
A68_224  WUWASIM;  /* united object - for case conformity */
A68_228 * XUWASIM_srow;
A68_INT  YUWASIM;  /* clause result */
A68_231 * ZUWASIM_sst;
A68_INT  AVWASIM_rowsize;
A68_231 * BVWASIM_head;
A_PROC_ENTRY(upbdimension);
 /* line 493: */
 /* line 494: */
WUWASIM = I ;
switch ( WUWASIM.mode )
{ 
case 4: /* REF STRUCT(INT,MODE224)  */
XUWASIM_srow = (WUWASIM.data.mode4);
 /* line 495: */
YUWASIM = ((*(&(XUWASIM_srow->No)))-1);
break;
case 7: /* REF STRUCT(MODE224,REF MODE231)  */
ZUWASIM_sst = (WUWASIM.data.mode7);
 /* line 496: */
 /* line 497: */
{ 
AVWASIM_rowsize = 0;
 /* line 498: */
BVWASIM_head = ZUWASIM_sst;
 /* line 499: */
for ( ;; )
{ 
 /* line 500: */
if ( !((BVWASIM_head!=WSAASIM_nilsst)) ) break;
AVWASIM_rowsize+=1;
 /* line 501: */
 /* line 502: */
BVWASIM_head = (*(&(BVWASIM_head->Rest)));
}
 /* line 503: */
 /* line 504: */
 /* line 505: */
 /* line 506: */
YUWASIM = (AVWASIM_rowsize-1);
} 
break;
default: 
YUWASIM = 0;
break;
} 
A_PROC_EXIT(upbdimension);
return( YUWASIM );
} 
#undef NL

A_STATIC A68_INT  FVWASIM_weight(A68_224  Unit, A68_INT  I, void *NonLocals)
#define NL(x) (((GVWASIM_weight *)NonLocals)->x)
{ 
A68_INT  HVWASIM_result;
A68_224  IVWASIM_dim;
A68_INT  JVWASIM_j;
A68_INT  KVWASIM;  /* to part of loop */
A68_224  LVWASIM;  /* avoid structure result */
A68_INT  MVWASIM;  /* clause result */
A_PROC_ENTRY(weight);
 /* line 510: */
 /* line 511: */
{ 
HVWASIM_result = 1;
 /* line 512: */
IVWASIM_dim = Unit;
 /* line 513: */
KVWASIM = (*NL(VQWASIM_numberofdimensions));
for ( JVWASIM_j = (I+1);
JVWASIM_j <= KVWASIM;
JVWASIM_j += 1 )
{ 
 /* line 514: */
KQWASIM_nextdimension( IVWASIM_dim, &LVWASIM );
IVWASIM_dim = LVWASIM;
 /* line 515: */
 /* line 516: */
HVWASIM_result = (HVWASIM_result*(VUWASIM_upbdimension(IVWASIM_dim)+1));
}
 /* line 517: */
 /* line 518: */
MVWASIM = HVWASIM_result;
} 
A_PROC_EXIT(weight);
return( MVWASIM );
} 
#undef NL

A_STATIC A68_VOID  SVWASIM_inaddressedrange(A68_INT  Weight_i, A68_INT  I, A68_INT  Pvidepth, A68_INT  D, void *NonLocals)
#define NL(x) (((TVWASIM_inaddressedrange *)NonLocals)->x)
{ 
A68_INT  UVWASIM;  /* YIELD */
A68_224  VVWASIM;  /* avoid structure result */
A68_224  WVWASIM;  /* united object - for case conformity */
A68_226 * XVWASIM_int;
A68_292  YVWASIM;  /* avoid structure result */
A68_292  ZVWASIM_isquery;
A68_292  AWWASIM;  /* avoid structure result */
A68_292  BWWASIM_end;
A_PROC_ENTRY(inaddressedrange);
 /* line 522: */
 /* line 523: */
UVWASIM = (NL(QRWASIM_indexinput)+(I-1)) ;
VGCASIM_lookuptype( A_VINDEX(NL(Inputtypes),UVWASIM), &VVWASIM );
WVWASIM = VVWASIM ;
switch ( WVWASIM.mode )
{ 
case 2: /* REF STRUCT(REF MODE26,INT,INT)  */
XVWASIM_int = (WVWASIM.data.mode2);
 /* line 524: */
 /* line 526: */
{ 
YFNASIM_newlabel(  &YVWASIM );
ZVWASIM_isquery = YVWASIM;
 /* line 527: */
YFNASIM_newlabel(  &AWWASIM );
BWWASIM_end = AWWASIM;
 /* line 529: */
A_CALLPROC(NL(PTWASIM_pushindexqueryflag),(I, D),(I, D,(NL(PTWASIM_pushindexqueryflag)).nonlocals));
 /* line 531: */
QTNASIM_amtest();
 /* line 532: */
IWNASIM_amjumpno(0, ZVWASIM_isquery);
 /* line 535: */
WUNASIM_amlocal(0);
 /* line 536: */
WUNASIM_amlocal(D);
 /* line 537: */
QUNASIM_ampushint((NL(MRWASIM_indexoffset)+((I-1)*DENASIM_ws)));
 /* line 538: */
SSNASIM_amadd();
 /* line 539: */
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
 /* line 540: */
QUNASIM_ampushint(GENASIM_sizeunit);
 /* line 541: */
SSNASIM_amadd();
 /* line 542: */
AVNASIM_amglobal(DENASIM_ws, ONFASIM_indirect);
 /* line 546: */
QUNASIM_ampushint(1);
 /* line 547: */
USNASIM_amsub();
 /* line 548: */
QUNASIM_ampushint(Weight_i);
 /* line 549: */
WSNASIM_ammul();
 /* line 550: */
WUNASIM_amlocal((Pvidepth+2));
 /* line 551: */
SSNASIM_amadd();
 /* line 553: */
STNASIM_ameq();
 /* line 556: */
EWNASIM_amjump(BWWASIM_end);
 /* line 559: */
NWNASIM_amlabel(D, ZVWASIM_isquery);
 /* line 560: */
WUNASIM_amlocal(Pvidepth);
 /* line 561: */
QUNASIM_ampushint((((*(&(XVWASIM_int->Lwb)))-1)*Weight_i));
 /* line 562: */
SSNASIM_amadd();
 /* line 563: */
WUNASIM_amlocal(1);
 /* line 564: */
CUNASIM_amle();
 /* line 567: */
WUNASIM_amlocal((Pvidepth+1));
 /* line 568: */
QUNASIM_ampushint((((*(&(XVWASIM_int->Upb)))-1)*Weight_i));
 /* line 569: */
SSNASIM_amadd();
 /* line 570: */
WUNASIM_amlocal(2);
 /* line 571: */
YTNASIM_amge();
 /* line 574: */
EUNASIM_amand();
 /* line 579: */
 /* line 581: */
 /* line 582: */
NWNASIM_amlabel((D+1), BWWASIM_end);
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(inaddressedrange);
return;
} 
#undef NL

A_STATIC A68_VOID  HWWASIM_dimension(A68_224  Unit, A68_INT  I, A68_INT  Numberofdimensions, A68_INT  D, void *NonLocals)
#define NL(x) (((IWWASIM_dimension *)NonLocals)->x)
{ 
A68_292  JWWASIM;  /* avoid structure result */
A68_292  KWWASIM_outputtinglhs;
A68_292  LWWASIM;  /* avoid structure result */
A68_292  MWWASIM_newos;
A68_INT  NWWASIM_weight_i;
A68_224  OWWASIM;  /* avoid structure result */
A68_292  QWWASIM;  /* avoid structure result */
A68_292  RWWASIM_isquery;
A68_292  SWWASIM;  /* avoid structure result */
A68_292  TWWASIM_lhsvalue;
A68_292  UWWASIM;  /* avoid structure result */
A68_292  VWWASIM_end;
A68_224  WWWASIM;  /* united object - for case conformity */
A68_229 * XWWASIM_sstring;
A_PROC_ENTRY(dimension);
 /* line 586: */
 /* line 588: */
if ( (I<=Numberofdimensions) )
{ 
YFNASIM_newlabel(  &JWWASIM );
KWWASIM_outputtinglhs = JWWASIM;
 /* line 589: */
YFNASIM_newlabel(  &LWWASIM );
MWWASIM_newos = LWWASIM;
 /* line 590: */
NWWASIM_weight_i = A_CALLPROC(NL(EVWASIM_weight),(Unit, I),(Unit, I,(NL(EVWASIM_weight)).nonlocals));
 /* line 591: */
WUNASIM_amlocal(1);
 /* line 592: */
QUNASIM_ampushint(((VUWASIM_upbdimension(Unit)+1)*NWWASIM_weight_i));
 /* line 593: */
SSNASIM_amadd();
 /* line 594: */
WUNASIM_amlocal(2);
 /* line 595: */
QWNASIM_amrepeat();
 /* line 601: */
A_CALLPROC(NL(RVWASIM_inaddressedrange),(NWWASIM_weight_i, I, 3, (D+2)),(NWWASIM_weight_i, I, 3, (D+2),(NL(RVWASIM_inaddressedrange)).nonlocals));
 /* line 602: */
WUNASIM_amlocal(3);
 /* line 603: */
QUNASIM_ampushint(2);
 /* line 604: */
AUNASIM_amlt();
 /* line 605: */
EUNASIM_amand();
 /* line 607: */
IWNASIM_amjumpno(0, KWWASIM_outputtinglhs);
 /* line 610: */
A_CALLPROC(NL(PTWASIM_pushindexqueryflag),(I, (D+2)),(I, (D+2),(NL(PTWASIM_pushindexqueryflag)).nonlocals));
 /* line 611: */
WUNASIM_amlocal(3);
 /* line 612: */
EUNASIM_amand();
 /* line 615: */
EWNASIM_amjump(MWWASIM_newos);
 /* line 617: */
NWNASIM_amlabel((D+2), KWWASIM_outputtinglhs);
 /* line 618: */
QUNASIM_ampushint(2);
 /* line 620: */
NWNASIM_amlabel((D+3), MWWASIM_newos);
 /* line 623: */
KQWASIM_nextdimension( Unit, &OWWASIM );
A_CALLPROC(NL(GWWASIM_dimension),(OWWASIM, (I+1), Numberofdimensions, (D+3)),(OWWASIM, (I+1), Numberofdimensions, (D+3),(NL(GWWASIM_dimension)).nonlocals));
 /* line 626: */
TUNASIM_amdrop(1);
 /* line 627: */
QUNASIM_ampushint(NWWASIM_weight_i);
 /* line 628: */
SSNASIM_amadd();
 /* line 631: */
WUNASIM_amlocal(1);
 /* line 632: */
WUNASIM_amlocal(1);
 /* line 633: */
STNASIM_ameq();
 /* line 634: */
IUNASIM_amnot();
 /* line 635: */
SWNASIM_amloop();
 /* line 636: */
 /* line 638: */
 /* line 640: */
TUNASIM_amdrop(2);
} 
else
{ 
 /* line 641: */
YFNASIM_newlabel(  &QWWASIM );
RWWASIM_isquery = QWWASIM;
 /* line 642: */
YFNASIM_newlabel(  &SWWASIM );
TWWASIM_lhsvalue = SWWASIM;
 /* line 643: */
YFNASIM_newlabel(  &UWWASIM );
VWWASIM_end = UWWASIM;
 /* line 645: */
WUNASIM_amlocal(0);
 /* line 646: */
QTNASIM_amtest();
 /* line 647: */
IWNASIM_amjumpno(0, RWWASIM_isquery);
 /* line 649: */
WUNASIM_amlocal(0);
 /* line 650: */
QUNASIM_ampushint(1);
 /* line 651: */
STNASIM_ameq();
 /* line 652: */
IWNASIM_amjumpno(0, TWWASIM_lhsvalue);
 /* line 655: */
 /* line 656: */
if ( (*NL(CRWASIM_lastdyindexisonstring)) )
{ 
 /* line 657: */
WWWASIM = Unit ;
switch ( WWWASIM.mode )
{ 
case 5: /* REF STRUCT(INT,MODE227)  */
XWWASIM_sstring = (WWWASIM.data.mode5);
 /* line 658: */
 /* line 659: */
 /* line 660: */
 /* line 661: */
A_CALLPROC(NL(JUWASIM_copyindexedstringtoindexedoutput),(XWWASIM_sstring, PWWASIM_pvidepth, I, D),(XWWASIM_sstring, PWWASIM_pvidepth, I, D,(NL(JUWASIM_copyindexedstringtoindexedoutput)).nonlocals));
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
else
{ 
 /* line 662: */
A_CALLPROC(NL(DSWASIM_copyrhstoindexedoutput),(PWWASIM_pvidepth, D),(PWWASIM_pvidepth, D,(NL(DSWASIM_copyrhstoindexedoutput)).nonlocals));
} 
 /* line 663: */
EWNASIM_amjump(VWWASIM_end);
 /* line 666: */
NWNASIM_amlabel(D, RWWASIM_isquery);
 /* line 667: */
A_CALLPROC(NL(VRWASIM_genericquery),(NL(HRWASIM_newvalwidth), PWWASIM_pvidepth, IPPASIM_resetflag, D),(NL(HRWASIM_newvalwidth), PWWASIM_pvidepth, IPPASIM_resetflag, D,(NL(VRWASIM_genericquery)).nonlocals));
 /* line 668: */
EWNASIM_amjump(VWWASIM_end);
 /* line 671: */
NWNASIM_amlabel(D, TWWASIM_lhsvalue);
 /* line 672: */
A_CALLPROC(NL(WSWASIM_copyindexedlhstoindexedoutput),(PWWASIM_pvidepth, D),(PWWASIM_pvidepth, D,(NL(WSWASIM_copyindexedlhstoindexedoutput)).nonlocals));
 /* line 673: */
 /* line 675: */
NWNASIM_amlabel(D, VWWASIM_end);
} 
A_PROC_EXIT(dimension);
return;
} 
#undef NL
 /* line 126: */
 /* line 127: */
 /* line 128: */

A68_VOID  HQWASIM_translatereplace(A68_94  Body, A68_VC  Name, A68_158  Declaration, A68_142  Inputtypes, A68_INT  Outputtype, A68_161  Environ, A68_171 * Closure, A68_222  Flt, A68_258  *ReturnedValue)
{ 
A68_224  SQWASIM;  /* avoid structure result */
A68_224  TQWASIM_outputunit;
A68_INT  UQWASIM_inputssize;
A68_INT  VQWASIM_numberofdimensions;
A68_81  WQWASIM_head;
A68_224  XQWASIM_newvaltype;
A68_224  YQWASIM_rhstype;
A68_INT  ZQWASIM;  /* to part of loop */
A68_INT  ARWASIM;  /* loop control */
A68_224  BRWASIM;  /* avoid structure result */
A68_BOOL  CRWASIM_lastdyindexisonstring;
A68_224  DRWASIM;  /* united object - for case conformity */
A68_229 * ERWASIM_sstring;
A68_224  FRWASIM;  /* avoid structure result */
A68_224  GRWASIM;  /* avoid structure result */
A68_INT  HRWASIM_newvalwidth;
A68_INT  IRWASIM_newvalprimno;
A68_INT  JRWASIM_rhsprimno;
A68_INT  KRWASIM_inputcountoffset;
A68_INT  LRWASIM_inputoffset;
A68_INT  MRWASIM_indexoffset;
A68_INT  NRWASIM_rhsoffset;
A68_INT  ORWASIM_outputoffset;
A68_INT  PRWASIM_fixedpartsize;
A68_INT  QRWASIM_indexinput;
A68_319  VRWASIM_genericquery;   /* proc value of non-global proc */
A68_263  DSWASIM_copyrhstoindexedoutput;   /* proc value of non-global proc */
A68_263  WSWASIM_copyindexedlhstoindexedoutput;   /* proc value of non-global proc */
A68_263  PTWASIM_pushindexqueryflag;   /* proc value of non-global proc */
A68_384  JUWASIM_copyindexedstringtoindexedoutput;   /* proc value of non-global proc */
A68_385  EVWASIM_weight;   /* proc value of non-global proc */
A68_319  RVWASIM_inaddressedrange;   /* proc value of non-global proc */
A68_386  GWWASIM_dimension;   /* proc value of non-global proc */
A68_258  YWWASIM;  /* collateral clause result */
A68_258  ZWWASIM;  /* clause result */
A_PROC_ENTRY(translatereplace);
 /* line 129: */
 /* line 131: */
{ 
 /* line 139: */
VGCASIM_lookuptype( Outputtype, &SQWASIM );
TQWASIM_outputunit = SQWASIM;
 /* line 140: */
UQWASIM_inputssize = DCOASIM_rawsignalwidth(TQWASIM_outputunit);
 /* line 141: */
VQWASIM_numberofdimensions = 1;
 /* line 142: */
WQWASIM_head = Body.Unit;
 /* line 149: */
XQWASIM_newvaltype = TQWASIM_outputunit;
 /* line 150: */
 /* line 151: */
ZQWASIM = (VQWASIM_numberofdimensions-1);
for ( ARWASIM = 1;
ARWASIM <= ZQWASIM;
ARWASIM += 1 )
{ 
 /* line 152: */
 /* line 153: */
KQWASIM_nextdimension( XQWASIM_newvaltype, &BRWASIM );
XQWASIM_newvaltype = BRWASIM;
}
 /* line 155: */
 /* line 156: */
 /* line 157: */
DRWASIM = XQWASIM_newvaltype ;
switch ( DRWASIM.mode )
{ 
case 5: /* REF STRUCT(INT,MODE227)  */
ERWASIM_sstring = (DRWASIM.data.mode5);
 /* line 158: */
 /* line 159: */
{ 
KQWASIM_nextdimension( XQWASIM_newvaltype, &FRWASIM );
YQWASIM_rhstype = FRWASIM;
 /* line 160: */
 /* line 161: */
 /* line 162: */
 /* line 163: */
CRWASIM_lastdyindexisonstring = A68_TRUE;
} 
break;
default: 
KQWASIM_nextdimension( XQWASIM_newvaltype, &GRWASIM );
XQWASIM_newvaltype = GRWASIM;
 /* line 164: */
YQWASIM_rhstype = XQWASIM_newvaltype;
 /* line 165: */
 /* line 166: */
CRWASIM_lastdyindexisonstring = A68_FALSE;
break;
} 
 /* line 168: */
HRWASIM_newvalwidth = NZNASIM_machinewidth(XQWASIM_newvaltype);
 /* line 169: */
IRWASIM_newvalprimno = DCOASIM_rawsignalwidth(XQWASIM_newvaltype);
 /* line 171: */
JRWASIM_rhsprimno = DCOASIM_rawsignalwidth(YQWASIM_rhstype);
 /* line 180: */
KRWASIM_inputcountoffset = GENASIM_sizeunit;
 /* line 181: */
LRWASIM_inputoffset = (KRWASIM_inputcountoffset+DENASIM_ws);
 /* line 182: */
MRWASIM_indexoffset = (LRWASIM_inputoffset+(UQWASIM_inputssize*DENASIM_ws));
 /* line 183: */
NRWASIM_rhsoffset = (MRWASIM_indexoffset+(VQWASIM_numberofdimensions*DENASIM_ws));
 /* line 184: */
ORWASIM_outputoffset = (NRWASIM_rhsoffset+(JRWASIM_rhsprimno*DENASIM_ws));
 /* line 185: */
PRWASIM_fixedpartsize = (ORWASIM_outputoffset+YGCASIM_lookuptypesize(Outputtype));
 /* line 186: */
QRWASIM_indexinput = (UQWASIM_inputssize+1);
 /* line 188: */
A_CLOSURE( VRWASIM_genericquery, WRWASIM_genericquery, XRWASIM_genericquery );
(( XRWASIM_genericquery * ) ( VRWASIM_genericquery.nonlocals )) -> ORWASIM_outputoffset = ORWASIM_outputoffset;
 /* line 203: */
A_CLOSURE( DSWASIM_copyrhstoindexedoutput, ESWASIM_copyrhstoindexedoutput, FSWASIM_copyrhstoindexedoutput );
(( FSWASIM_copyrhstoindexedoutput * ) ( DSWASIM_copyrhstoindexedoutput.nonlocals )) -> IRWASIM_newvalprimno = IRWASIM_newvalprimno;
(( FSWASIM_copyrhstoindexedoutput * ) ( DSWASIM_copyrhstoindexedoutput.nonlocals )) -> Inputtypes = Inputtypes;
(( FSWASIM_copyrhstoindexedoutput * ) ( DSWASIM_copyrhstoindexedoutput.nonlocals )) -> XQWASIM_newvaltype = (&XQWASIM_newvaltype);
(( FSWASIM_copyrhstoindexedoutput * ) ( DSWASIM_copyrhstoindexedoutput.nonlocals )) -> HRWASIM_newvalwidth = HRWASIM_newvalwidth;
(( FSWASIM_copyrhstoindexedoutput * ) ( DSWASIM_copyrhstoindexedoutput.nonlocals )) -> NRWASIM_rhsoffset = NRWASIM_rhsoffset;
(( FSWASIM_copyrhstoindexedoutput * ) ( DSWASIM_copyrhstoindexedoutput.nonlocals )) -> ORWASIM_outputoffset = ORWASIM_outputoffset;
 /* line 230: */
A_CLOSURE( WSWASIM_copyindexedlhstoindexedoutput, XSWASIM_copyindexedlhstoindexedoutput, YSWASIM_copyindexedlhstoindexedoutput );
(( YSWASIM_copyindexedlhstoindexedoutput * ) ( WSWASIM_copyindexedlhstoindexedoutput.nonlocals )) -> IRWASIM_newvalprimno = IRWASIM_newvalprimno;
(( YSWASIM_copyindexedlhstoindexedoutput * ) ( WSWASIM_copyindexedlhstoindexedoutput.nonlocals )) -> Inputtypes = Inputtypes;
(( YSWASIM_copyindexedlhstoindexedoutput * ) ( WSWASIM_copyindexedlhstoindexedoutput.nonlocals )) -> XQWASIM_newvaltype = (&XQWASIM_newvaltype);
(( YSWASIM_copyindexedlhstoindexedoutput * ) ( WSWASIM_copyindexedlhstoindexedoutput.nonlocals )) -> HRWASIM_newvalwidth = HRWASIM_newvalwidth;
(( YSWASIM_copyindexedlhstoindexedoutput * ) ( WSWASIM_copyindexedlhstoindexedoutput.nonlocals )) -> LRWASIM_inputoffset = LRWASIM_inputoffset;
(( YSWASIM_copyindexedlhstoindexedoutput * ) ( WSWASIM_copyindexedlhstoindexedoutput.nonlocals )) -> ORWASIM_outputoffset = ORWASIM_outputoffset;
 /* line 260: */
A_CLOSURE( PTWASIM_pushindexqueryflag, QTWASIM_pushindexqueryflag, RTWASIM_pushindexqueryflag );
(( RTWASIM_pushindexqueryflag * ) ( PTWASIM_pushindexqueryflag.nonlocals )) -> MRWASIM_indexoffset = MRWASIM_indexoffset;
 /* line 274: */
 /* line 315: */
 /* line 333: */
 /* line 350: */
A_CLOSURE( JUWASIM_copyindexedstringtoindexedoutput, KUWASIM_copyindexedstringtoindexedoutput, LUWASIM_copyindexedstringtoindexedoutput );
(( LUWASIM_copyindexedstringtoindexedoutput * ) ( JUWASIM_copyindexedstringtoindexedoutput.nonlocals )) -> HRWASIM_newvalwidth = HRWASIM_newvalwidth;
(( LUWASIM_copyindexedstringtoindexedoutput * ) ( JUWASIM_copyindexedstringtoindexedoutput.nonlocals )) -> PTWASIM_pushindexqueryflag = PTWASIM_pushindexqueryflag;
(( LUWASIM_copyindexedstringtoindexedoutput * ) ( JUWASIM_copyindexedstringtoindexedoutput.nonlocals )) -> VRWASIM_genericquery = VRWASIM_genericquery;
(( LUWASIM_copyindexedstringtoindexedoutput * ) ( JUWASIM_copyindexedstringtoindexedoutput.nonlocals )) -> MRWASIM_indexoffset = MRWASIM_indexoffset;
(( LUWASIM_copyindexedstringtoindexedoutput * ) ( JUWASIM_copyindexedstringtoindexedoutput.nonlocals )) -> WSWASIM_copyindexedlhstoindexedoutput = WSWASIM_copyindexedlhstoindexedoutput;
(( LUWASIM_copyindexedstringtoindexedoutput * ) ( JUWASIM_copyindexedstringtoindexedoutput.nonlocals )) -> NRWASIM_rhsoffset = NRWASIM_rhsoffset;
(( LUWASIM_copyindexedstringtoindexedoutput * ) ( JUWASIM_copyindexedstringtoindexedoutput.nonlocals )) -> ORWASIM_outputoffset = ORWASIM_outputoffset;
 /* line 492: */
 /* line 509: */
A_CLOSURE( EVWASIM_weight, FVWASIM_weight, GVWASIM_weight );
(( GVWASIM_weight * ) ( EVWASIM_weight.nonlocals )) -> VQWASIM_numberofdimensions = (&VQWASIM_numberofdimensions);
 /* line 521: */
A_CLOSURE( RVWASIM_inaddressedrange, SVWASIM_inaddressedrange, TVWASIM_inaddressedrange );
(( TVWASIM_inaddressedrange * ) ( RVWASIM_inaddressedrange.nonlocals )) -> Inputtypes = Inputtypes;
(( TVWASIM_inaddressedrange * ) ( RVWASIM_inaddressedrange.nonlocals )) -> QRWASIM_indexinput = QRWASIM_indexinput;
(( TVWASIM_inaddressedrange * ) ( RVWASIM_inaddressedrange.nonlocals )) -> PTWASIM_pushindexqueryflag = PTWASIM_pushindexqueryflag;
(( TVWASIM_inaddressedrange * ) ( RVWASIM_inaddressedrange.nonlocals )) -> MRWASIM_indexoffset = MRWASIM_indexoffset;
 /* line 585: */
A_CLOSURE( GWWASIM_dimension, HWWASIM_dimension, IWWASIM_dimension );
(( IWWASIM_dimension * ) ( GWWASIM_dimension.nonlocals )) -> EVWASIM_weight = EVWASIM_weight;
(( IWWASIM_dimension * ) ( GWWASIM_dimension.nonlocals )) -> RVWASIM_inaddressedrange = RVWASIM_inaddressedrange;
(( IWWASIM_dimension * ) ( GWWASIM_dimension.nonlocals )) -> PTWASIM_pushindexqueryflag = PTWASIM_pushindexqueryflag;
(( IWWASIM_dimension * ) ( GWWASIM_dimension.nonlocals )) -> GWWASIM_dimension = GWWASIM_dimension;
(( IWWASIM_dimension * ) ( GWWASIM_dimension.nonlocals )) -> CRWASIM_lastdyindexisonstring = (&CRWASIM_lastdyindexisonstring);
(( IWWASIM_dimension * ) ( GWWASIM_dimension.nonlocals )) -> JUWASIM_copyindexedstringtoindexedoutput = JUWASIM_copyindexedstringtoindexedoutput;
(( IWWASIM_dimension * ) ( GWWASIM_dimension.nonlocals )) -> DSWASIM_copyrhstoindexedoutput = DSWASIM_copyrhstoindexedoutput;
(( IWWASIM_dimension * ) ( GWWASIM_dimension.nonlocals )) -> VRWASIM_genericquery = VRWASIM_genericquery;
(( IWWASIM_dimension * ) ( GWWASIM_dimension.nonlocals )) -> HRWASIM_newvalwidth = HRWASIM_newvalwidth;
(( IWWASIM_dimension * ) ( GWWASIM_dimension.nonlocals )) -> WSWASIM_copyindexedlhstoindexedoutput = WSWASIM_copyindexedlhstoindexedoutput;
 /* line 679: */
DOPASIM_translatestartfunction(Name);
 /* line 680: */
QUNASIM_ampushint(0);
 /* line 681: */
QUNASIM_ampushint(1);
 /* line 684: */
 /* line 685: */
if ( CRWASIM_lastdyindexisonstring )
{ 
 /* line 686: */
 /* line 687: */
A_CALLPROC(GWWASIM_dimension,(TQWASIM_outputunit, 1, (VQWASIM_numberofdimensions-1), 3),(TQWASIM_outputunit, 1, (VQWASIM_numberofdimensions-1), 3,(GWWASIM_dimension).nonlocals));
} 
else
{ 
 /* line 688: */
A_CALLPROC(GWWASIM_dimension,(TQWASIM_outputunit, 1, VQWASIM_numberofdimensions, 3),(TQWASIM_outputunit, 1, VQWASIM_numberofdimensions, 3,(GWWASIM_dimension).nonlocals));
} 
 /* line 692: */
TUNASIM_amdrop(2);
 /* line 693: */
ZOPASIM_translateendfunction(PRWASIM_fixedpartsize, 1);
 /* line 694: */
YWWASIM.Size = PRWASIM_fixedpartsize;
YWWASIM.Offset = ORWASIM_outputoffset;
 /* line 695: */
 /* line 698: */
YWWASIM.Sort = IHCASIM_combinatorial;
ZWWASIM = YWWASIM;
} 
A_PROC_EXIT(translatereplace);
*ReturnedValue = (ZWWASIM);
return;
} 
#undef NL
 /* line 2: */
 /* line 3: */
 /* line 6: */
void UPWASIM(void)   /* initialise DECS keamreplace */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259R","./a68files/keamreplace.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/keconv.m","./mfiles/kebasics.m","./mfiles/keamstandard.m","./mfiles/keambasics.m","./mfiles/kesymbols.m","./mfiles/kesignals.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/transform/assoc/mfiles/assmodes.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
KUBASIM();   /* USE keconv */
JSAASIM();   /* USE kebasics */
HYOASIM();   /* USE keamstandard */
XDNASIM();   /* USE keambasics */
TCCASIM();   /* USE kesymbols */
NYNASIM();   /* USE kesignals */
JSCAOST();   /* USE basics */
BAAATRN();   /* USE assmodes */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/sim/assoc/./a68files/keamreplace.a68";
A_config.translation_time = "Tue Apr  4 11:11:36 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "TPWASIM (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 11:11:36 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS keamreplace);
UEAALIB_a68config(LGAALIB_configinfo, YPWASIM);
 /* line 125: */
 /* line 700: */
A_PROC_EXIT(DECS keamreplace);
} 
#undef NL
/* end of translation of ./a68files/keamreplace.a68 */
