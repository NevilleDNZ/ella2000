
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
/* UNAME:JUBASIM */
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

A_PROCEDURE(A68_VOID ,A68t197,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t197  A68_197 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t198,(A68_BOOL ,struct A68t142 *),(A68_BOOL ,struct A68t142 *,void *));
typedef struct A68t198  A68_198 ;    /* PROC(BOOL) MODE142 */
struct A68t200{
A68_INT  Status;
A_PAD_INT(PAD_71)
};
typedef struct A68t200  A68_200 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_VOID ,A68t201,(A68_VC ),(A68_VC ,void *));
typedef struct A68t201  A68_201 ;    /* PROC(MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t202,(A68_VC ,A68_INT *,struct A68t200 *),(A68_VC ,A68_INT *,struct A68t200 *,void *));
typedef struct A68t202  A68_202 ;    /* PROC(REF MODE26,REF INT) MODE200 */
struct A68t199{
A68_INT  Charnumber;
A_PAD_INT(PAD_72)
A68_INT  Linenumber;
A_PAD_INT(PAD_73)
A68_INT  Indent;
A_PAD_INT(PAD_74)
A68_INT  Width;
A_PAD_INT(PAD_75)
A68_INT  Sizeincr;
A_PAD_INT(PAD_76)
struct A68t200  Status;
A68_VC  Buffer;
A68_BOOL  Buffered;
A_PAD_BOOL(PAD_77)
A68_BOOL  Separate;
A_PAD_BOOL(PAD_78)
A68_BOOL  Input;
A_PAD_BOOL(PAD_79)
struct A68t201  Putbuffer;
struct A68t202  Getbuffer;
};
typedef struct A68t199  A68_199 ;    /* STRUCT(INT,INT,INT,INT,INT,MODE200,REF MODE26,BOOL,BOOL,BOOL,MODE201,MODE202)  */

A_PROCEDURE(A68_VOID ,A68t203,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t203  A68_203 ;    /* PROC(REF MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t204,(struct A68t142 ,struct A68t142 *),(struct A68t142 ,struct A68t142 *,void *));
typedef struct A68t204  A68_204 ;    /* PROC(MODE142) REF MODE142 */

A_PROCEDURE(A68_VOID ,A68t205,(A68_INT ,struct A68t142 *),(A68_INT ,struct A68t142 *,void *));
typedef struct A68t205  A68_205 ;    /* PROC(INT) REF MODE142 */

A_PROCEDURE(A68_VOID ,A68t206,(A68_VC ),(A68_VC ,void *));
typedef struct A68t206  A68_206 ;    /* PROC(REF MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t207,(struct A68t142 ),(struct A68t142 ,void *));
typedef struct A68t207  A68_207 ;    /* PROC(REF MODE142) VOID */
struct A68t209 ;

A_PROCEDURE(A68_VOID ,A68t208,(struct A68t209 ,A68_VC *),(struct A68t209 ,A68_VC *,void *));
typedef struct A68t208  A68_208 ;    /* PROC(MODE209) REF MODE26 */
A_VECTOR(A68_VC ,A68t209);
typedef struct A68t209  A68_209 ;    /* VECTOR [] MODE26 */

A_PROCEDURE(A68_VOID ,A68t210,(A68_VC ,A68_INT ,A68_VC *),(A68_VC ,A68_INT ,A68_VC *,void *));
typedef struct A68t210  A68_210 ;    /* PROC(MODE26,INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t211,(A68_CHAR ,A68_INT ,A68_VC *),(A68_CHAR ,A68_INT ,A68_VC *,void *));
typedef struct A68t211  A68_211 ;    /* PROC(CHAR,INT) MODE26 */
struct A68t213 ;

A_PROCEDURE(A68_VOID ,A68t212,(struct A68t213 ,A68_VC *),(struct A68t213 ,A68_VC *,void *));
typedef struct A68t212  A68_212 ;    /* PROC(MODE213) MODE26 */
struct A68t213 { A68_INT mode; union {
A68_BITS  mode1;
A68_INT  mode2;
A68_SBITS  mode3;
A68_SINT  mode4;
A68_CHAR  mode5;
} data; };
typedef struct A68t213  A68_213 ;    /* UNION(BITS,INT,SHORT BITS,SHORT INT,CHAR)  */

A_PROCEDURE(A68_VOID ,A68t214,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t214  A68_214 ;    /* PROC(INT) MODE26 */
A_VECTOR(A68_BITS ,A68t216);
typedef struct A68t216  A68_216 ;    /* VECTOR [] BITS */
A_VECTOR(A68_BOOL ,A68t217);
typedef struct A68t217  A68_217 ;    /* VECTOR [] BOOL */
A_VECTOR(A68_REAL ,A68t218);
typedef struct A68t218  A68_218 ;    /* VECTOR [] REAL */

A_PROCEDURE(A68_VOID ,A68t219,(struct A68t199 *),(struct A68t199 *,void *));
typedef struct A68t219  A68_219 ;    /* PROC(REF MODE199) VOID */
struct A68t220{
A68_INT  Int;
A_PAD_INT(PAD_80)
A68_INT  Width;
A_PAD_INT(PAD_81)
};
typedef struct A68t220  A68_220 ;    /* STRUCT(INT,INT)  */
struct A68t221{
A68_VC  Str;
A68_INT  Width;
A_PAD_INT(PAD_82)
};
typedef struct A68t221  A68_221 ;    /* STRUCT(MODE26,INT)  */
struct A68t222{
A68_VC  Str;
A68_INT  Justify;
A_PAD_INT(PAD_83)
};
typedef struct A68t222  A68_222 ;    /* STRUCT(MODE26,INT)  */
struct A68t223{
A68_INT  Tab;
A_PAD_INT(PAD_84)
};
typedef struct A68t223  A68_223 ;    /* STRUCT(INT)  */
struct A68t224{
A68_INT  Pos;
A_PAD_INT(PAD_85)
};
typedef struct A68t224  A68_224 ;    /* STRUCT(INT)  */
struct A68t225{
A68_INT  After;
A_PAD_INT(PAD_86)
};
typedef struct A68t225  A68_225 ;    /* STRUCT(INT)  */
struct A68t226{
A68_INT  Spaces;
A_PAD_INT(PAD_87)
};
typedef struct A68t226  A68_226 ;    /* STRUCT(INT)  */
struct A68t227{
A68_INT  Lines;
A_PAD_INT(PAD_88)
};
typedef struct A68t227  A68_227 ;    /* STRUCT(INT)  */
struct A68t228{
A68_INT  Indent;
A_PAD_INT(PAD_89)
};
typedef struct A68t228  A68_228 ;    /* STRUCT(INT)  */
A_STRAIGHT(A68_VOID,A68t229);
typedef struct A68t229  A68_229 ;    /* STRAIGHT MODE215 */
struct A68t215 { A68_INT mode; union {
A68_INT  mode1;
struct A68t142  mode2;
A68_BITS  mode3;
struct A68t216  mode4;
A68_SBITS  mode5;
A68_CHAR  mode6;
A68_VC  mode7;
A68_BOOL  mode8;
struct A68t217  mode9;
A68_REAL  mode10;
struct A68t218  mode11;
struct A68t219  mode12;
struct A68t220  mode13;
struct A68t221  mode14;
struct A68t222  mode15;
struct A68t223  mode16;
struct A68t224  mode17;
struct A68t225  mode18;
struct A68t226  mode19;
struct A68t227  mode20;
struct A68t228  mode21;
struct A68t229  mode22;
} data; };
typedef struct A68t215  A68_215 ;    /* UNION(INT,MODE142,BITS,MODE216,SHORT BITS,CHAR,MODE26,BOOL,MODE217,REAL,MODE218,MODE219,MODE220,MODE221,MODE222,MODE223,MODE224,MODE225,MODE226,MODE227,MODE228,MODE229)  */

A_PROCEDURE(A68_VOID ,A68t230,(A68_BOOL ,struct A68t221 *),(A68_BOOL ,struct A68t221 *,void *));
typedef struct A68t230  A68_230 ;    /* PROC(BOOL) MODE221 */

A_PROCEDURE(A68_VOID ,A68t231,(A68_BOOL ,struct A68t222 *),(A68_BOOL ,struct A68t222 *,void *));
typedef struct A68t231  A68_231 ;    /* PROC(BOOL) MODE222 */

A_PROCEDURE(A68_INT ,A68t232,(struct A68t199 *),(struct A68t199 *,void *));
typedef struct A68t232  A68_232 ;    /* PROC(REF MODE199) INT */

A_PROCEDURE(A68_INT ,A68t233,(struct A68t199 *,A68_INT ),(struct A68t199 *,A68_INT ,void *));
typedef struct A68t233  A68_233 ;    /* PROC(REF MODE199,INT) INT */

A_PROCEDURE(A68_VOID ,A68t234,(A68_INT ,A68_INT ,struct A68t220 *),(A68_INT ,A68_INT ,struct A68t220 *,void *));
typedef struct A68t234  A68_234 ;    /* PROC(INT,INT) MODE220 */

A_PROCEDURE(A68_VOID ,A68t235,(A68_VC ,A68_INT ,struct A68t221 *),(A68_VC ,A68_INT ,struct A68t221 *,void *));
typedef struct A68t235  A68_235 ;    /* PROC(MODE26,INT) MODE221 */

A_PROCEDURE(A68_VOID ,A68t236,(A68_VC ,A68_INT ,struct A68t222 *),(A68_VC ,A68_INT ,struct A68t222 *,void *));
typedef struct A68t236  A68_236 ;    /* PROC(MODE26,INT) MODE222 */

A_PROCEDURE(A68_VOID ,A68t237,(A68_INT ,struct A68t223 *),(A68_INT ,struct A68t223 *,void *));
typedef struct A68t237  A68_237 ;    /* PROC(INT) MODE223 */

A_PROCEDURE(A68_VOID ,A68t238,(A68_INT ,struct A68t224 *),(A68_INT ,struct A68t224 *,void *));
typedef struct A68t238  A68_238 ;    /* PROC(INT) MODE224 */

A_PROCEDURE(A68_VOID ,A68t239,(A68_INT ,struct A68t225 *),(A68_INT ,struct A68t225 *,void *));
typedef struct A68t239  A68_239 ;    /* PROC(INT) MODE225 */

A_PROCEDURE(A68_VOID ,A68t240,(A68_INT ,struct A68t226 *),(A68_INT ,struct A68t226 *,void *));
typedef struct A68t240  A68_240 ;    /* PROC(INT) MODE226 */

A_PROCEDURE(A68_VOID ,A68t241,(A68_INT ,struct A68t227 *),(A68_INT ,struct A68t227 *,void *));
typedef struct A68t241  A68_241 ;    /* PROC(INT) MODE227 */

A_PROCEDURE(A68_VOID ,A68t242,(A68_INT ,struct A68t228 *),(A68_INT ,struct A68t228 *,void *));
typedef struct A68t242  A68_242 ;    /* PROC(INT) MODE228 */

A_PROCEDURE(A68_VOID ,A68t243,(struct A68t199 *,A68_VC ),(struct A68t199 *,A68_VC ,void *));
typedef struct A68t243  A68_243 ;    /* PROC(REF MODE199,MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t244,(struct A68t199 *,A68_INT ,A68_INT ),(struct A68t199 *,A68_INT ,A68_INT ,void *));
typedef struct A68t244  A68_244 ;    /* PROC(REF MODE199,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t245,(struct A68t199 *,A68_BITS ,A68_INT ),(struct A68t199 *,A68_BITS ,A68_INT ,void *));
typedef struct A68t245  A68_245 ;    /* PROC(REF MODE199,BITS,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t246,(struct A68t199 *,A68_REAL ,A68_INT ,A68_INT ),(struct A68t199 *,A68_REAL ,A68_INT ,A68_INT ,void *));
typedef struct A68t246  A68_246 ;    /* PROC(REF MODE199,REAL,INT,INT) VOID */
struct A68t248 ;

A_PROCEDURE(A68_VOID ,A68t247,(struct A68t199 *,struct A68t248 ),(struct A68t199 *,struct A68t248 ,void *));
typedef struct A68t247  A68_247 ;    /* PROC(REF MODE199,MODE248) VOID */
A_VECTOR(struct A68t215 ,A68t248);
typedef struct A68t248  A68_248 ;    /* VECTOR [] MODE215 */
struct A68t250 ;
struct A68t251 ;

A_PROCEDURE(struct A68t199 *,A68t249,(struct A68t250 ,struct A68t251 ),(struct A68t250 ,struct A68t251 ,void *));
typedef struct A68t249  A68_249 ;    /* PROC(MODE250,MODE251) REF MODE199 */
struct A68t250 { A68_INT mode; union {
A68_INT  mode1;
A68_VC  mode2;
} data; };
typedef struct A68t250  A68_250 ;    /* UNION(INT,REF MODE26)  */
struct A68t251 { A68_INT mode; union {
struct A68t201  mode1;
struct A68t202  mode2;
} data; };
typedef struct A68t251  A68_251 ;    /* UNION(MODE201,MODE202)  */

A_PROCEDURE(A68_VOID ,A68t252,(A68_VC ,struct A68t248 ,A68_VC *),(A68_VC ,struct A68t248 ,A68_VC *,void *));
typedef struct A68t252  A68_252 ;    /* PROC(REF MODE26,MODE248) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t253,(struct A68t199 *,A68_VC *),(struct A68t199 *,A68_VC *,void *));
typedef struct A68t253  A68_253 ;    /* PROC(REF MODE199) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t254,(struct A68t248 ,A68_VC *),(struct A68t248 ,A68_VC *,void *));
typedef struct A68t254  A68_254 ;    /* PROC(MODE248) REF MODE26 */
struct A68t256 ;

A_PROCEDURE(A68_VOID ,A68t255,(struct A68t256 ),(struct A68t256 ,void *));
typedef struct A68t255  A68_255 ;    /* PROC(MODE256) VOID */
struct A68t256 { A68_INT mode; union {
A68_VC  mode1;
struct A68t142  mode2;
struct A68t217  mode3;
struct A68t216  mode4;
} data; };
typedef struct A68t256  A68_256 ;    /* UNION(REF MODE26,REF MODE142,REF MODE217,REF MODE216)  */

A_PROCEDURE(A68_INT ,A68t257,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t257  A68_257 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_BITS ,A68t258,(A68_BITS ,A68_BITS ),(A68_BITS ,A68_BITS ,void *));
typedef struct A68t258  A68_258 ;    /* PROC(BITS,BITS) BITS */
struct A68t260 ;

A_PROCEDURE(A68_VOID ,A68t259,(struct A68t260 ,A68_INT ),(struct A68t260 ,A68_INT ,void *));
typedef struct A68t259  A68_259 ;    /* PROC(MODE260,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t260,(A68_CHAR ),(A68_CHAR ,void *));
typedef struct A68t260  A68_260 ;    /* PROC(CHAR) VOID */
struct A68t262 ;

A_PROCEDURE(A68_INT ,A68t261,(struct A68t262 ),(struct A68t262 ,void *));
typedef struct A68t261  A68_261 ;    /* PROC(MODE262) INT */

A_PROCEDURE(A68_CHAR ,A68t262,(void),(void *));
typedef struct A68t262  A68_262 ;    /* PROC CHAR */

A_PROCEDURE(A68_INT ,A68t263,(A68_VC ,A68_BOOL *),(A68_VC ,A68_BOOL *,void *));
typedef struct A68t263  A68_263 ;    /* PROC(MODE26,REF BOOL) INT */

A_PROCEDURE(A68_INT ,A68t264,(void),(void *));
typedef struct A68t264  A68_264 ;    /* PROC INT */

A_PROCEDURE(A68_INT ,A68t265,(A68_INT ),(A68_INT ,void *));
typedef struct A68t265  A68_265 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_VOID ,A68t266,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t266  A68_266 ;    /* PROC(INT) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t267,(A68_VC *),(A68_VC *,void *));
typedef struct A68t267  A68_267 ;    /* PROC REF MODE26 */

A_PROCEDURE(A68_INT ,A68t268,(A68_INT ,A68_INT ,A68_BOOL *),(A68_INT ,A68_INT ,A68_BOOL *,void *));
typedef struct A68t268  A68_268 ;    /* PROC(INT,INT,REF BOOL) INT */
struct A68t270 ;

A_PROCEDURE(A68_BOOL ,A68t269,(A68_VC ,A68_INT *,struct A68t270 ),(A68_VC ,A68_INT *,struct A68t270 ,void *));
typedef struct A68t269  A68_269 ;    /* PROC(MODE26,REF INT,MODE270) BOOL */
struct A68t271 ;

A_PROCEDURE(A68_VOID ,A68t270,(struct A68t271 ,struct A68t209 ),(struct A68t271 ,struct A68t209 ,void *));
typedef struct A68t270  A68_270 ;    /* PROC(MODE271,MODE209) VOID */
struct A68t271{
A68_INT  Number;
A_PAD_INT(PAD_90)
struct A68t272 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_91)
};
typedef struct A68t271  A68_271 ;    /* STRUCT(INT,REF MODE272,BITS)  */
A_VECTOR(struct A68t274 ,A68t273);
typedef struct A68t273  A68_273 ;    /* VECTOR [] MODE274 */
struct A68t274{
struct A68t271  Msgno;
A68_VC  Text;
};
typedef struct A68t274  A68_274 ;    /* STRUCT(MODE271,REF MODE26)  */
struct A68t272{
A68_VC  Name;
struct A68t273  Messages;
};
typedef struct A68t272  A68_272 ;    /* STRUCT(REF MODE26,REF MODE273)  */
struct A68t275{
A68_INT  Svoid;
A_PAD_INT(PAD_92)
};
typedef struct A68t275  A68_275 ;    /* STRUCT(INT)  */
struct A68t276{
A68_INT  Snull;
A_PAD_INT(PAD_93)
};
typedef struct A68t276  A68_276 ;    /* STRUCT(INT)  */
struct A68t277{
A68_VC  Id;
A68_INT  Lwb;
A_PAD_INT(PAD_94)
A68_INT  Upb;
A_PAD_INT(PAD_95)
};
typedef struct A68t277  A68_277 ;    /* STRUCT(REF MODE26,INT,INT)  */
struct A68t278{
A68_VC  Id;
A68_VC  Char;
};
typedef struct A68t278  A68_278 ;    /* STRUCT(REF MODE26,REF MODE26)  */
struct A68t279{
A68_INT  No;
A_PAD_INT(PAD_96)
struct A68t278  T;
};
typedef struct A68t279  A68_279 ;    /* STRUCT(INT,MODE278)  */
struct A68t281 { A68_INT mode; union {
struct A68t280 * mode1;
struct A68t277 * mode2;
struct A68t278 * mode3;
struct A68t282 * mode4;
struct A68t279 * mode5;
struct A68t283 * mode6;
struct A68t284 * mode7;
struct A68t275  mode8;
struct A68t276  mode9;
} data; };
typedef struct A68t281  A68_281 ;    /* UNION(REF MODE280,REF MODE277,REF MODE278,REF MODE282,REF MODE279,REF MODE283,REF MODE284,MODE275,MODE276)  */
struct A68t280{
A68_VC  Id;
struct A68t281  T;
struct A68t280 * Rest;
};
typedef struct A68t280  A68_280 ;    /* STRUCT(REF MODE26,MODE281,REF MODE280)  */
struct A68t282{
A68_INT  No;
A_PAD_INT(PAD_97)
struct A68t281  Type;
};
typedef struct A68t282  A68_282 ;    /* STRUCT(INT,MODE281)  */
struct A68t283{
struct A68t281  From;
struct A68t281  To;
};
typedef struct A68t283  A68_283 ;    /* STRUCT(MODE281,MODE281)  */
struct A68t284{
struct A68t281  T;
struct A68t284 * Rest;
};
typedef struct A68t284  A68_284 ;    /* STRUCT(MODE281,REF MODE284)  */
struct A68t285 { A68_INT mode; union {
struct A68t280 * mode1;
struct A68t277 * mode2;
struct A68t278 * mode3;
} data; };
typedef struct A68t285  A68_285 ;    /* UNION(REF MODE280,REF MODE277,REF MODE278)  */
struct A68t286{
A68_INT  Svvoid;
A_PAD_INT(PAD_98)
};
typedef struct A68t286  A68_286 ;    /* STRUCT(INT)  */
struct A68t287{
A68_INT  Svnull;
A_PAD_INT(PAD_99)
};
typedef struct A68t287  A68_287 ;    /* STRUCT(INT)  */
struct A68t288{
struct A68t281  Type;
};
typedef struct A68t288  A68_288 ;    /* STRUCT(MODE281)  */
struct A68t289{
struct A68t277 * Type;
A68_INT  Value;
A_PAD_INT(PAD_100)
};
typedef struct A68t289  A68_289 ;    /* STRUCT(REF MODE277,INT)  */
struct A68t290{
struct A68t278 * Type;
A68_CHAR  Value;
A_PAD_CHAR(PAD_101)
};
typedef struct A68t290  A68_290 ;    /* STRUCT(REF MODE278,CHAR)  */
struct A68t291{
struct A68t279 * Type;
A68_VC  Value;
};
typedef struct A68t291  A68_291 ;    /* STRUCT(REF MODE279,REF MODE26)  */
struct A68t293 { A68_INT mode; union {
struct A68t288 * mode1;
struct A68t289 * mode2;
struct A68t290 * mode3;
struct A68t291 * mode4;
struct A68t292 * mode5;
struct A68t294 * mode6;
struct A68t295 * mode7;
struct A68t286  mode8;
struct A68t287  mode9;
} data; };
typedef struct A68t293  A68_293 ;    /* UNION(REF MODE288,REF MODE289,REF MODE290,REF MODE291,REF MODE292,REF MODE294,REF MODE295,MODE286,MODE287)  */
struct A68t292{
struct A68t280 * Type;
A68_INT  Tag;
A_PAD_INT(PAD_102)
struct A68t293  Assoc;
};
typedef struct A68t292  A68_292 ;    /* STRUCT(REF MODE280,INT,MODE293)  */
struct A68t294{
struct A68t293  Head;
struct A68t294 * Tail;
};
typedef struct A68t294  A68_294 ;    /* STRUCT(MODE293,REF MODE294)  */
struct A68t295{
struct A68t293  From;
struct A68t293  To;
};
typedef struct A68t295  A68_295 ;    /* STRUCT(MODE293,MODE293)  */
struct A68t296{
A68_INT  Instoffset;
A_PAD_INT(PAD_103)
A68_INT  Offset;
A_PAD_INT(PAD_104)
A68_INT  Size;
A_PAD_INT(PAD_105)
};
typedef struct A68t296  A68_296 ;    /* STRUCT(INT,INT,INT)  */
A_VECTOR(struct A68t296 ,A68t298);
typedef struct A68t298  A68_298 ;    /* VECTOR [] MODE296 */
struct A68t297{
struct A68t281  Type;
struct A68t298  Blocks;
};
typedef struct A68t297  A68_297 ;    /* STRUCT(MODE281,REF MODE298)  */
struct A68t299{
struct A68t297  Firstcell;
A68_INT  Lwb;
A_PAD_INT(PAD_106)
A68_INT  Ramsize;
A_PAD_INT(PAD_107)
A68_INT  Step;
A_PAD_INT(PAD_108)
};
typedef struct A68t299  A68_299 ;    /* STRUCT(MODE297,INT,INT,INT)  */
struct A68t300{
A68_VC  Uname;
A68_VC  Lname;
A68_INT  Node;
A_PAD_INT(PAD_109)
};
typedef struct A68t300  A68_300 ;    /* STRUCT(REF MODE26,REF MODE26,INT)  */
A_VECTOR(struct A68t300 ,A68t302);
typedef struct A68t302  A68_302 ;    /* VECTOR [] MODE300 */
struct A68t301{
struct A68t299 * Ram;
struct A68t297  Outputs;
A68_INT  Noinputs;
A_PAD_INT(PAD_110)
struct A68t302  Body;
};
typedef struct A68t301  A68_301 ;    /* STRUCT(REF MODE299,MODE297,INT,REF MODE302)  */
struct A68t303{
A68_INT  Fn;
A_PAD_INT(PAD_111)
A68_INT  Instance;
A_PAD_INT(PAD_112)
};
typedef struct A68t303  A68_303 ;    /* STRUCT(INT,INT)  */
struct A68t304{
struct A68t297 * Wire;
A68_INT  Instance;
A_PAD_INT(PAD_113)
};
typedef struct A68t304  A68_304 ;    /* STRUCT(REF MODE297,INT)  */
struct A68t305 { A68_INT mode; union {
struct A68t303  mode1;
struct A68t304  mode2;
} data; };
typedef struct A68t305  A68_305 ;    /* UNION(MODE303,MODE304)  */
struct A68t306 { A68_INT mode; union {
struct A68t303  mode1;
struct A68t297  mode2;
} data; };
typedef struct A68t306  A68_306 ;    /* UNION(MODE303,MODE297)  */
struct A68t307{
struct A68t305  Node;
A68_INT  Circuit;
A_PAD_INT(PAD_114)
A68_INT  Base;
A_PAD_INT(PAD_115)
};
typedef struct A68t307  A68_307 ;    /* STRUCT(MODE305,INT,INT)  */

A_PROCEDURE(A68_VOID ,A68t308,(struct A68t293 ,struct A68t281 *),(struct A68t293 ,struct A68t281 *,void *));
typedef struct A68t308  A68_308 ;    /* PROC(MODE293) MODE281 */

A_PROCEDURE(A68_BOOL ,A68t309,(struct A68t281 ,struct A68t281 ),(struct A68t281 ,struct A68t281 ,void *));
typedef struct A68t309  A68_309 ;    /* PROC(MODE281,MODE281) BOOL */

A_PROCEDURE(A68_BOOL ,A68t310,(struct A68t293 ,struct A68t293 ),(struct A68t293 ,struct A68t293 ,void *));
typedef struct A68t310  A68_310 ;    /* PROC(MODE293,MODE293) BOOL */

A_PROCEDURE(A68_BOOL ,A68t311,(struct A68t297 ,struct A68t297 ),(struct A68t297 ,struct A68t297 ,void *));
typedef struct A68t311  A68_311 ;    /* PROC(MODE297,MODE297) BOOL */

A_PROCEDURE(A68_BOOL ,A68t312,(struct A68t303 ,struct A68t303 ),(struct A68t303 ,struct A68t303 ,void *));
typedef struct A68t312  A68_312 ;    /* PROC(MODE303,MODE303) BOOL */

A_PROCEDURE(A68_BOOL ,A68t313,(struct A68t304 ,struct A68t304 ),(struct A68t304 ,struct A68t304 ,void *));
typedef struct A68t313  A68_313 ;    /* PROC(MODE304,MODE304) BOOL */

A_PROCEDURE(A68_BOOL ,A68t314,(struct A68t305 ,struct A68t305 ),(struct A68t305 ,struct A68t305 ,void *));
typedef struct A68t314  A68_314 ;    /* PROC(MODE305,MODE305) BOOL */

A_PROCEDURE(A68_BOOL ,A68t315,(struct A68t307 ,struct A68t307 ),(struct A68t307 ,struct A68t307 ,void *));
typedef struct A68t315  A68_315 ;    /* PROC(MODE307,MODE307) BOOL */

A_PROCEDURE(struct A68t284 *,A68t316,(struct A68t284 *,struct A68t284 *),(struct A68t284 *,struct A68t284 *,void *));
typedef struct A68t316  A68_316 ;    /* PROC(REF MODE284,REF MODE284) REF MODE284 */

A_PROCEDURE(A68_VOID ,A68t317,(struct A68t298 ,struct A68t298 ,struct A68t298 *),(struct A68t298 ,struct A68t298 ,struct A68t298 *,void *));
typedef struct A68t317  A68_317 ;    /* PROC(REF MODE298,REF MODE298) REF MODE298 */

A_PROCEDURE(A68_VOID ,A68t318,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t318  A68_318 ;    /* PROC(INT,REF MODE26) VOID */

A_PROCEDURE(A68_INT ,A68t319,(A68_VC ),(A68_VC ,void *));
typedef struct A68t319  A68_319 ;    /* PROC(REF MODE26) INT */

A_PROCEDURE(struct A68t44 *,A68t320,(A68_INT ),(A68_INT ,void *));
typedef struct A68t320  A68_320 ;    /* PROC(INT) REF MODE44 */

A_PROCEDURE(A68_INT ,A68t321,(struct A68t43 ,struct A68t270 ),(struct A68t43 ,struct A68t270 ,void *));
typedef struct A68t321  A68_321 ;    /* PROC(MODE43,MODE270) INT */

A_PROCEDURE(A68_INT ,A68t322,(struct A68t43 ),(struct A68t43 ,void *));
typedef struct A68t322  A68_322 ;    /* PROC(MODE43) INT */

A_PROCEDURE(A68_VOID ,A68t323,(struct A68t43 ,struct A68t43 *),(struct A68t43 ,struct A68t43 *,void *));
typedef struct A68t323  A68_323 ;    /* PROC(MODE43) MODE43 */

A_PROCEDURE(struct A68t40 *,A68t324,(struct A68t167 ),(struct A68t167 ,void *));
typedef struct A68t324  A68_324 ;    /* PROC(MODE167) REF MODE40 */

A_PROCEDURE(struct A68t56 *,A68t325,(struct A68t167 ),(struct A68t167 ,void *));
typedef struct A68t325  A68_325 ;    /* PROC(MODE167) REF MODE56 */

A_PROCEDURE(struct A68t74 *,A68t326,(struct A68t167 ),(struct A68t167 ,void *));
typedef struct A68t326  A68_326 ;    /* PROC(MODE167) REF MODE74 */

A_PROCEDURE(struct A68t80 *,A68t327,(struct A68t167 ),(struct A68t167 ,void *));
typedef struct A68t327  A68_327 ;    /* PROC(MODE167) REF MODE80 */

A_PROCEDURE(struct A68t158 *,A68t328,(struct A68t167 ),(struct A68t167 ,void *));
typedef struct A68t328  A68_328 ;    /* PROC(MODE167) REF MODE158 */

A_PROCEDURE(A68_INT ,A68t329,(struct A68t41 *,struct A68t162 ),(struct A68t41 *,struct A68t162 ,void *));
typedef struct A68t329  A68_329 ;    /* PROC(REF MODE41,REF MODE162) INT */

A_PROCEDURE(A68_INT ,A68t330,(struct A68t41 *,struct A68t163 ),(struct A68t41 *,struct A68t163 ,void *));
typedef struct A68t330  A68_330 ;    /* PROC(REF MODE41,REF MODE163) INT */

A_PROCEDURE(A68_INT ,A68t331,(struct A68t41 *,struct A68t164 ),(struct A68t41 *,struct A68t164 ,void *));
typedef struct A68t331  A68_331 ;    /* PROC(REF MODE41,REF MODE164) INT */

A_PROCEDURE(A68_INT ,A68t332,(struct A68t41 *,struct A68t165 ),(struct A68t41 *,struct A68t165 ,void *));
typedef struct A68t332  A68_332 ;    /* PROC(REF MODE41,REF MODE165) INT */

A_PROCEDURE(A68_INT ,A68t333,(struct A68t41 *,struct A68t166 ),(struct A68t41 *,struct A68t166 ,void *));
typedef struct A68t333  A68_333 ;    /* PROC(REF MODE41,REF MODE166) INT */

A_PROCEDURE(struct A68t40 *,A68t334,(struct A68t35 ,struct A68t171 *,struct A68t161 *),(struct A68t35 ,struct A68t171 *,struct A68t161 *,void *));
typedef struct A68t334  A68_334 ;    /* PROC(MODE35,REF MODE171,REF MODE161) REF MODE40 */

A_PROCEDURE(struct A68t56 *,A68t335,(struct A68t47 ,struct A68t171 *,struct A68t161 *),(struct A68t47 ,struct A68t171 *,struct A68t161 *,void *));
typedef struct A68t335  A68_335 ;    /* PROC(MODE47,REF MODE171,REF MODE161) REF MODE56 */

A_PROCEDURE(struct A68t74 *,A68t336,(struct A68t60 ,struct A68t171 *,struct A68t161 *),(struct A68t60 ,struct A68t171 *,struct A68t161 *,void *));
typedef struct A68t336  A68_336 ;    /* PROC(MODE60,REF MODE171,REF MODE161) REF MODE74 */

A_PROCEDURE(struct A68t80 *,A68t337,(struct A68t75 ,struct A68t171 *,struct A68t161 *),(struct A68t75 ,struct A68t171 *,struct A68t161 *,void *));
typedef struct A68t337  A68_337 ;    /* PROC(MODE75,REF MODE171,REF MODE161) REF MODE80 */

A_PROCEDURE(struct A68t158 *,A68t338,(struct A68t112 ,struct A68t171 *,struct A68t161 *),(struct A68t112 ,struct A68t171 *,struct A68t161 *,void *));
typedef struct A68t338  A68_338 ;    /* PROC(MODE112,REF MODE171,REF MODE161) REF MODE158 */

A_PROCEDURE(struct A68t63 *,A68t339,(struct A68t158 *),(struct A68t158 *,void *));
typedef struct A68t339  A68_339 ;    /* PROC(REF MODE158) REF MODE63 */

A_PROCEDURE(A68_VOID ,A68t340,(struct A68t62 *,struct A68t43 *),(struct A68t62 *,struct A68t43 *,void *));
typedef struct A68t340  A68_340 ;    /* PROC(REF MODE62) MODE43 */

A_PROCEDURE(A68_VOID ,A68t341,(struct A68t59 ,struct A68t161 *,struct A68t43 *),(struct A68t59 ,struct A68t161 *,struct A68t43 *,void *));
typedef struct A68t341  A68_341 ;    /* PROC(MODE59,REF MODE161) MODE43 */

A_PROCEDURE(struct A68t158 *,A68t342,(struct A68t158 *,struct A68t161 *,struct A68t161 *),(struct A68t158 *,struct A68t161 *,struct A68t161 *,void *));
typedef struct A68t342  A68_342 ;    /* PROC(REF MODE158,REF MODE161,REF MODE161) REF MODE158 */

A_PROCEDURE(A68_VOID ,A68t343,(struct A68t122 *,struct A68t158 *,struct A68t59 *),(struct A68t122 *,struct A68t158 *,struct A68t59 *,void *));
typedef struct A68t343  A68_343 ;    /* PROC(REF MODE122,REF MODE158) MODE59 */

A_PROCEDURE(A68_INT ,A68t344,(struct A68t122 *),(struct A68t122 *,void *));
typedef struct A68t344  A68_344 ;    /* PROC(REF MODE122) INT */

A_PROCEDURE(A68_INT ,A68t345,(struct A68t122 *,A68_INT ),(struct A68t122 *,A68_INT ,void *));
typedef struct A68t345  A68_345 ;    /* PROC(REF MODE122,INT) INT */

A_PROCEDURE(A68_VOID ,A68t346,(struct A68t81 ,struct A68t158 *,struct A68t161 *,struct A68t59 *),(struct A68t81 ,struct A68t158 *,struct A68t161 *,struct A68t59 *,void *));
typedef struct A68t346  A68_346 ;    /* PROC(MODE81,REF MODE158,REF MODE161) MODE59 */

A_PROCEDURE(A68_VOID ,A68t347,(struct A68t59 ,struct A68t161 *,struct A68t59 *),(struct A68t59 ,struct A68t161 *,struct A68t59 *,void *));
typedef struct A68t347  A68_347 ;    /* PROC(MODE59,REF MODE161) MODE59 */

A_PROCEDURE(A68_BOOL ,A68t348,(struct A68t59 ,struct A68t59 ,struct A68t161 *,struct A68t161 *,A68_BOOL ),(struct A68t59 ,struct A68t59 ,struct A68t161 *,struct A68t161 *,A68_BOOL ,void *));
typedef struct A68t348  A68_348 ;    /* PROC(MODE59,MODE59,REF MODE161,REF MODE161,BOOL) BOOL */

A_PROCEDURE(A68_INT ,A68t349,(struct A68t90 *,struct A68t161 *),(struct A68t90 *,struct A68t161 *,void *));
typedef struct A68t349  A68_349 ;    /* PROC(REF MODE90,REF MODE161) INT */

A_PROCEDURE(A68_VOID ,A68t350,(void),(void *));
typedef struct A68t350  A68_350 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t351,(struct A68t350 ),(struct A68t350 ,void *));
typedef struct A68t351  A68_351 ;    /* PROC(MODE350) VOID */

A_PROCEDURE(A68_VOID ,A68t352,(struct A68t201 ),(struct A68t201 ,void *));
typedef struct A68t352  A68_352 ;    /* PROC(MODE201) VOID */

A_PROCEDURE(A68_VOID ,A68t353,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t353  A68_353 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,53,A68t354);
typedef struct A68t354  A68_354 ;    /* STRUCT 53 CHAR */

A_PROCEDURE(A68_VOID ,A68t355,(struct A68t59 ,struct A68t161 ,struct A68t171 *,struct A68t281 *),(struct A68t59 ,struct A68t161 ,struct A68t171 *,struct A68t281 *,void *));
typedef struct A68t355  A68_355 ;    /* PROC(MODE59,MODE161,REF MODE171) MODE281 */
A_ISTRUCT(A68_CHAR ,41,A68t356);
typedef struct A68t356  A68_356 ;    /* STRUCT 41 CHAR */

A_PROCEDURE(A68_VOID ,A68t357,(struct A68t81 ,struct A68t161 ,struct A68t171 *,struct A68t293 *),(struct A68t81 ,struct A68t161 ,struct A68t171 *,struct A68t293 *,void *));
typedef struct A68t357  A68_357 ;    /* PROC(MODE81,MODE161,REF MODE171) MODE293 */
A_ISTRUCT(A68_CHAR ,46,A68t358);
typedef struct A68t358  A68_358 ;    /* STRUCT 46 CHAR */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from modeprocs --- */
extern A68_INT  XOMATRN_int(struct A68t43 );
/* --- End of imports from modeprocs --- */


/* --- Imports from kebasics --- */
extern A68_280 * VSAASIM_nilsenum;
extern A68_284 * WSAASIM_nilsst;
extern A68_281  ZSAASIM_nullstype;
extern A68_281  CTAASIM_voidstype;
extern A68_294 * DTAASIM_nilsvst;
extern A68_293  GTAASIM_nullsvalue;
extern A68_293  JTAASIM_voidsvalue;
extern A68_VOID  NKDAOST_sysfault(A68_VC );
/* --- End of imports from kebasics --- */


/* --- Imports from basics --- */
extern A68_VOID  RSCAOST_makeid(A68_VC ,A68_VC *);
/* --- End of imports from basics --- */


/* --- Imports from putstrings --- */
/* --- End of imports from putstrings --- */


/* --- Imports from assmodes --- */
extern A68_62 * GAAATRN_niltstr;
extern A68_96 * IAAATRN_nilustr;
/* --- End of imports from assmodes --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void HNMATRN(void);   /* modeprocs */
extern void JSAASIM(void);   /* kebasics */
extern void JSCAOST(void);   /* basics */
extern void MTAAOSL(void);   /* putstrings */
extern void BAAATRN(void);   /* assmodes */
/* --- end of DECS initialisation functions --- */
static A68_354   NUBASIM = {"$Id: keconv.a68,v 34.2 1995/03/29 13:04:50 ella Exp $"}; 
A_GISVEC(A68_VC ,OUBASIM,NUBASIM,53)
static A68_356   IXBASIM = {"keconv: Unexpected type in 'convert type'"}; 
A_GISVEC(A68_VC ,JXBASIM,IXBASIM,41)
static A68_358   QCCASIM = {"keconv: Unexpected constant in 'convert const'"}; 
A_GISVEC(A68_VC ,RCCASIM,QCCASIM,46)
typedef struct   /* env of non-global proc */
{
A68_INT  IVBASIM_noalts;
A_PAD_INT(PAD_116)
} MVBASIM_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  FZBASIM_size;
A_PAD_INT(PAD_117)
} JZBASIM_generator;

A68_VOID  SUBASIM_converttype(A68_59  Asstype, A68_161  Environ, A68_171 * Closure, A68_281  *ReturnedValue);

A_STATIC A68_VOID  LVBASIM_generator(A68_BOOL  JVBASIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  OXBASIM_convertconst(A68_81  Assconst, A68_161  Environ, A68_171 * Closure, A68_293  *ReturnedValue);

A_STATIC A68_VOID  IZBASIM_generator(A68_BOOL  GZBASIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  LVBASIM_generator(A68_BOOL  JVBASIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((MVBASIM_generator *)NonLocals)->x)
{ 
A68_VC  NVBASIM;  /* clause result */
A68_VC  OVBASIM;  /* OPERATORS - dynamic generator */
{ 
OVBASIM.upb = NL(IVBASIM_noalts) ;
( JVBASIM_anonymous? A_VLOC(A68_CHAR ,OVBASIM): A_VHEAP(A68_CHAR ,OVBASIM) );
NVBASIM = OVBASIM;
} 
*ReturnedValue = (NVBASIM);
return;
} 
#undef NL

A_STATIC A68_VOID  IZBASIM_generator(A68_BOOL  GZBASIM_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((JZBASIM_generator *)NonLocals)->x)
{ 
A68_VC  KZBASIM;  /* clause result */
A68_VC  LZBASIM;  /* OPERATORS - dynamic generator */
{ 
LZBASIM.upb = NL(FZBASIM_size) ;
( GZBASIM_anonymous? A_VLOC(A68_CHAR ,LZBASIM): A_VHEAP(A68_CHAR ,LZBASIM) );
KZBASIM = LZBASIM;
} 
*ReturnedValue = (KZBASIM);
return;
} 
#undef NL

A68_VOID  SUBASIM_converttype(A68_59  Asstype, A68_161  Environ, A68_171 * Closure, A68_281  *ReturnedValue)
{ 
A68_59  TUBASIM;  /* united object - for case conformity */
A68_60 * UUBASIM_name;
A68_164  VUBASIM;  /* OPERATORS - simple index */
A68_INT  WUBASIM;  /* YIELD */
A68_74 * XUBASIM_declaration;
A68_72  YUBASIM;  /* united object - for case conformity */
A68_68 * ZUBASIM_tt;
A68_281  AVBASIM;  /* clause result */
A68_281  BVBASIM;  /* avoid structure result */
A68_71 * CVBASIM_ni;
A68_277  DVBASIM;  /* collateral clause result */
A68_277 * EVBASIM;  /* YIELD */
A68_281  FVBASIM;  /* OPERATORS - mode -> union mode */
A68_69 * GVBASIM_nc;
A68_VC  HVBASIM_chars;
A68_INT  IVBASIM_noalts;
A68_197  KVBASIM_generator;   /* proc value of non-global proc */
A68_VC  PVBASIM;  /* avoid structure result */
A68_VC  QVBASIM_schars;
A68_INT  RVBASIM_index;
A68_INT  SVBASIM;  /* to part of loop */
A68_CHAR * TVBASIM;  /* YIELD */
A68_278  UVBASIM;  /* collateral clause result */
A68_278 * VVBASIM;  /* YIELD */
A68_281  WVBASIM;  /* OPERATORS - mode -> union mode */
A68_73  XVBASIM_alts;
A68_280 * YVBASIM_result;
A68_INT  ZVBASIM_i;
A68_INT  AWBASIM;  /* by part of loop */
A68_280  BWBASIM;  /* collateral clause result */
A68_281  CWBASIM;  /* avoid structure result */
A68_280 * DWBASIM;  /* YIELD */
A68_281  EWBASIM;  /* OPERATORS - mode -> union mode */
A68_61 * FWBASIM_row;
A68_282  GWBASIM;  /* collateral clause result */
A68_281  HWBASIM;  /* avoid structure result */
A68_282 * IWBASIM;  /* YIELD */
A68_281  JWBASIM;  /* OPERATORS - mode -> union mode */
A68_62 * KWBASIM_str;
A68_281  LWBASIM;  /* OPERATORS - mode -> union mode */
A68_284  MWBASIM;  /* collateral clause result */
A68_281  NWBASIM;  /* avoid structure result */
A68_59  OWBASIM;  /* OPERATORS - mode -> union mode */
A68_62 * PWBASIM;  /* YIELD */
A68_281  QWBASIM;  /* avoid structure result */
A68_281  RWBASIM;  /* united object - for case conformity */
A68_284 * SWBASIM_sst;
A68_284 * TWBASIM;  /* YIELD */
A68_281  UWBASIM;  /* OPERATORS - mode -> union mode */
A68_65 * VWBASIM_s;
A68_279  WWBASIM;  /* collateral clause result */
A68_281  XWBASIM;  /* avoid structure result */
A68_281  YWBASIM;  /* united object - for case conformity */
A68_278 * ZWBASIM_sc;
A68_279 * AXBASIM;  /* YIELD */
A68_281  BXBASIM;  /* OPERATORS - mode -> union mode */
A68_63 * CXBASIM_fn;
A68_283  DXBASIM;  /* collateral clause result */
A68_281  EXBASIM;  /* avoid structure result */
A68_281  FXBASIM;  /* avoid structure result */
A68_283 * GXBASIM;  /* YIELD */
A68_281  HXBASIM;  /* OPERATORS - mode -> union mode */
A68_281  KXBASIM;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(converttype);
 /* line 72: */
 /* line 73: */
{ 
 /* line 74: */
TUBASIM = Asstype ;
switch ( TUBASIM.mode )
{ 
case 1: /* REF STRUCT(INT)  */
UUBASIM_name = (TUBASIM.data.mode1);
 /* line 75: */
 /* line 76: */
{ 
VUBASIM = Environ.Types ;
WUBASIM = (*(&(UUBASIM_name->Typeno))) ;
XUBASIM_declaration = (*(&A_VINDEX(VUBASIM,WUBASIM)));
 /* line 77: */
 /* line 78: */
YUBASIM = (*(&(XUBASIM_declaration->Body))) ;
switch ( YUBASIM.mode )
{ 
case 3: /* REF STRUCT(MODE59)  */
ZUBASIM_tt = (YUBASIM.data.mode3);
 /* line 79: */
 /* line 80: */
SUBASIM_converttype( (*(&(ZUBASIM_tt->Tag))), Environ, Closure, &BVBASIM );
AVBASIM = BVBASIM;
break;
case 2: /* REF STRUCT(REF MODE26,MODE58)  */
CVBASIM_ni = (YUBASIM.data.mode2);
 /* line 81: */
 /* line 82: */
DVBASIM.Id = (*(&(CVBASIM_ni->Tagname)));
 /* line 83: */
DVBASIM.Lwb = XOMATRN_int((*(&((&(CVBASIM_ni->Range))->Lwb))));
DVBASIM.Upb = XOMATRN_int((*(&((&(CVBASIM_ni->Range))->Upb))));
 /* line 84: */
EVBASIM = A_HEAP(A68_277 ) ;
(*EVBASIM) = DVBASIM ;
AVBASIM = A_UNITE(FVBASIM,mode2,2,EVBASIM);
break;
case 4: /* REF STRUCT(REF MODE26,REF MODE26)  */
GVBASIM_nc = (YUBASIM.data.mode4);
 /* line 85: */
 /* line 86: */
{ 
HVBASIM_chars = (*(&(GVBASIM_nc->Chars)));
 /* line 87: */
IVBASIM_noalts = HVBASIM_chars.upb;
 /* line 88: */
A_CLOSURE( KVBASIM_generator, LVBASIM_generator, MVBASIM_generator );
(( MVBASIM_generator * ) ( KVBASIM_generator.nonlocals )) -> IVBASIM_noalts = IVBASIM_noalts;
A_CALLPROC(KVBASIM_generator,(A68_FALSE, &PVBASIM),(A68_FALSE, &PVBASIM,(KVBASIM_generator).nonlocals));
QVBASIM_schars = PVBASIM;
 /* line 89: */
 /* line 90: */
SVBASIM = IVBASIM_noalts;
for ( RVBASIM_index = 1;
RVBASIM_index <= SVBASIM;
RVBASIM_index += 1 )
{ 
TVBASIM = (&A_VINDEX(QVBASIM_schars,RVBASIM_index)) ;
(*TVBASIM) = (*(&A_VINDEX(HVBASIM_chars,RVBASIM_index)));
}
 /* line 91: */
UVBASIM.Id = (*(&(GVBASIM_nc->Tagname)));
 /* line 92: */
UVBASIM.Char = QVBASIM_schars;
 /* line 93: */
VVBASIM = A_HEAP(A68_278 ) ;
(*VVBASIM) = UVBASIM ;
AVBASIM = A_UNITE(WVBASIM,mode3,3,VVBASIM);
} 
break;
case 1: /* REF VECTOR [] MODE70 */
XVBASIM_alts = (YUBASIM.data.mode1);
 /* line 94: */
 /* line 95: */
{ 
YVBASIM_result = VSAASIM_nilsenum;
 /* line 96: */
AWBASIM = (-1);
for ( ZVBASIM_i = XVBASIM_alts.upb;
( AWBASIM > 0 && ZVBASIM_i <= 1) ||
( AWBASIM < 0 && ZVBASIM_i >= 1) ||
( AWBASIM == 0 ) ;
ZVBASIM_i += AWBASIM )
{ 
 /* line 97: */
 /* line 98: */
 /* line 99: */
BWBASIM.Id = (*(&((&A_VINDEX(XVBASIM_alts,ZVBASIM_i))->Altname)));
 /* line 100: */
SUBASIM_converttype( (*(&((&A_VINDEX(XVBASIM_alts,ZVBASIM_i))->Assoc))), Environ, Closure, &CWBASIM );
BWBASIM.T = CWBASIM;
 /* line 101: */
BWBASIM.Rest = YVBASIM_result;
DWBASIM = A_HEAP(A68_280 ) ;
(*DWBASIM) = BWBASIM ;
YVBASIM_result = DWBASIM;
}
 /* line 102: */
 /* line 103: */
 /* line 104: */
 /* line 105: */
 /* line 106: */
AVBASIM = A_UNITE(EWBASIM,mode1,1,YVBASIM_result);
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
break;
case 2: /* REF STRUCT(MODE43,MODE59)  */
FWBASIM_row = (TUBASIM.data.mode2);
 /* line 107: */
 /* line 108: */
GWBASIM.No = XOMATRN_int((*(&(FWBASIM_row->Size))));
SUBASIM_converttype( (*(&(FWBASIM_row->Elem))), Environ, Closure, &HWBASIM );
GWBASIM.Type = HWBASIM;
 /* line 109: */
IWBASIM = A_HEAP(A68_282 ) ;
(*IWBASIM) = GWBASIM ;
AVBASIM = A_UNITE(JWBASIM,mode4,4,IWBASIM);
break;
case 3: /* REF STRUCT(MODE59,REF MODE62)  */
KWBASIM_str = (TUBASIM.data.mode3);
 /* line 110: */
 /* line 111: */
if ( (KWBASIM_str==GAAATRN_niltstr) )
{ 
 /* line 112: */
AVBASIM = A_UNITE(LWBASIM,mode7,7,WSAASIM_nilsst);
} 
else
{ 
 /* line 113: */
 /* line 114: */
SUBASIM_converttype( (*(&(KWBASIM_str->Elem))), Environ, Closure, &NWBASIM );
MWBASIM.T = NWBASIM;
 /* line 115: */
PWBASIM = (*(&(KWBASIM_str->Rest))) ;
SUBASIM_converttype( A_UNITE(OWBASIM,mode3,3,PWBASIM), Environ, Closure, &QWBASIM );
RWBASIM = QWBASIM ;
switch ( RWBASIM.mode )
{ 
case 7: /* REF STRUCT(MODE281,REF MODE284)  */
SWBASIM_sst = (RWBASIM.data.mode7);
 /* line 116: */
 /* line 117: */
MWBASIM.Rest = SWBASIM_sst;
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 118: */
TWBASIM = A_HEAP(A68_284 ) ;
(*TWBASIM) = MWBASIM ;
AVBASIM = A_UNITE(UWBASIM,mode7,7,TWBASIM);
} 
break;
case 6: /* REF STRUCT(MODE43,MODE59)  */
VWBASIM_s = (TUBASIM.data.mode6);
 /* line 119: */
 /* line 120: */
WWBASIM.No = XOMATRN_int((*(&(VWBASIM_s->Size))));
 /* line 121: */
SUBASIM_converttype( (*(&(VWBASIM_s->Char))), Environ, Closure, &XWBASIM );
YWBASIM = XWBASIM ;
switch ( YWBASIM.mode )
{ 
case 3: /* REF STRUCT(REF MODE26,REF MODE26)  */
ZWBASIM_sc = (YWBASIM.data.mode3);
 /* line 122: */
WWBASIM.T = (*ZWBASIM_sc);
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 123: */
AXBASIM = A_HEAP(A68_279 ) ;
(*AXBASIM) = WWBASIM ;
AVBASIM = A_UNITE(BXBASIM,mode5,5,AXBASIM);
break;
case 4: /* REF STRUCT(MODE59,MODE59)  */
CXBASIM_fn = (TUBASIM.data.mode4);
 /* line 124: */
 /* line 125: */
SUBASIM_converttype( (*(&(CXBASIM_fn->From))), Environ, Closure, &EXBASIM );
DXBASIM.From = EXBASIM;
SUBASIM_converttype( (*(&(CXBASIM_fn->To))), Environ, Closure, &FXBASIM );
DXBASIM.To = FXBASIM;
 /* line 126: */
GXBASIM = A_HEAP(A68_283 ) ;
(*GXBASIM) = DXBASIM ;
AVBASIM = A_UNITE(HXBASIM,mode6,6,GXBASIM);
break;
case 7: /* REF STRUCT(INT)  */
 /* line 127: */
 /* line 128: */
AVBASIM = CTAASIM_voidstype;
break;
case 9: /* REF STRUCT(INT)  */
 /* line 130: */
 /* line 131: */
AVBASIM = ZSAASIM_nullstype;
break;
default: 
NKDAOST_sysfault(JXBASIM);
 /* line 132: */
 /* line 133: */
AVBASIM = KXBASIM;
break;
} 
} 
A_PROC_EXIT(converttype);
*ReturnedValue = (AVBASIM);
return;
} 
#undef NL

A68_VOID  OXBASIM_convertconst(A68_81  Assconst, A68_161  Environ, A68_171 * Closure, A68_293  *ReturnedValue)
{ 
A68_81  PXBASIM;  /* united object - for case conformity */
A68_75 * QXBASIM_name;
A68_165  RXBASIM;  /* OPERATORS - simple index */
A68_INT  SXBASIM;  /* YIELD */
A68_80 * TXBASIM_declaration;
A68_293  UXBASIM;  /* clause result */
A68_293  VXBASIM;  /* avoid structure result */
A68_76 * WXBASIM_basic;
A68_60  XXBASIM_type;
A68_INT * YXBASIM;  /* YIELD */
A68_59  ZXBASIM;  /* OPERATORS - mode -> union mode */
A68_281  AYBASIM;  /* avoid structure result */
A68_281  BYBASIM_stype;
A68_281  CYBASIM;  /* united object - for case conformity */
A68_280 * DYBASIM_enum;
A68_292  EYBASIM;  /* collateral clause result */
A68_292 * FYBASIM;  /* YIELD */
A68_293  GYBASIM;  /* OPERATORS - mode -> union mode */
A68_278 * HYBASIM_schar;
A68_290  IYBASIM;  /* collateral clause result */
A68_VC  JYBASIM;  /* OPERATORS - simple index */
A68_INT  KYBASIM;  /* YIELD */
A68_290 * LYBASIM;  /* YIELD */
A68_293  MYBASIM;  /* OPERATORS - mode -> union mode */
A68_77 * NYBASIM_cint;
A68_60  OYBASIM_type;
A68_INT * PYBASIM;  /* YIELD */
A68_59  QYBASIM;  /* OPERATORS - mode -> union mode */
A68_281  RYBASIM;  /* avoid structure result */
A68_281  SYBASIM_stype;
A68_281  TYBASIM;  /* united object - for case conformity */
A68_277 * UYBASIM_sint;
A68_289  VYBASIM;  /* collateral clause result */
A68_289 * WYBASIM;  /* YIELD */
A68_293  XYBASIM;  /* OPERATORS - mode -> union mode */
A68_82 * YYBASIM_cq;
A68_60  ZYBASIM_type;
A68_INT * AZBASIM;  /* YIELD */
A68_59  BZBASIM;  /* OPERATORS - mode -> union mode */
A68_281  CZBASIM;  /* avoid structure result */
A68_281  DZBASIM_stype;
A68_142  EZBASIM_rvi;
A68_INT  FZBASIM_size;
A68_197  HZBASIM_generator;   /* proc value of non-global proc */
A68_VC  MZBASIM;  /* avoid structure result */
A68_VC  NZBASIM_string;
A68_281  OZBASIM;  /* united object - for case conformity */
A68_278 * PZBASIM_schar;
A68_VC  QZBASIM_chars;
A68_INT  RZBASIM_i;
A68_INT  SZBASIM;  /* to part of loop */
A68_INT  TZBASIM;  /* YIELD */
A68_CHAR * UZBASIM;  /* YIELD */
A68_291  VZBASIM;  /* collateral clause result */
A68_279  WZBASIM;  /* collateral clause result */
A68_279 * XZBASIM;  /* YIELD */
A68_291 * YZBASIM;  /* YIELD */
A68_293  ZZBASIM;  /* OPERATORS - mode -> union mode */
A68_108 * AACASIM_cs;
A68_81  BACASIM;  /* united object - for case conformity */
A68_79 * CACASIM_cq;
A68_288 * DACASIM_result;
A68_281  EACASIM;  /* avoid structure result */
A68_281  FACASIM_sch;
A68_279  GACASIM;  /* collateral clause result */
A68_281  HACASIM;  /* united object - for case conformity */
A68_278 * IACASIM_sc;
A68_279 * JACASIM;  /* YIELD */
A68_281  KACASIM;  /* OPERATORS - mode -> union mode */
A68_281 * LACASIM;  /* YIELD */
A68_293  MACASIM;  /* OPERATORS - mode -> union mode */
A68_76 * NACASIM_cc;
A68_60  OACASIM_type;
A68_INT * PACASIM;  /* YIELD */
A68_59  QACASIM;  /* OPERATORS - mode -> union mode */
A68_281  RACASIM;  /* avoid structure result */
A68_281  SACASIM_stype;
A68_INT  TACASIM_size;
A68_281  UACASIM;  /* united object - for case conformity */
A68_278 * VACASIM_schar;
A68_291  WACASIM;  /* collateral clause result */
A68_279  XACASIM;  /* collateral clause result */
A68_279 * YACASIM;  /* YIELD */
A68_VC  ZACASIM;  /* OPERATORS - simple index */
A68_INT  ABCASIM;  /* YIELD */
A68_VC  BBCASIM;  /* avoid structure result */
A68_291 * CBCASIM;  /* YIELD */
A68_293  DBCASIM;  /* OPERATORS - mode -> union mode */
A68_88 * EBCASIM_ass;
A68_60  FBCASIM_type;
A68_INT * GBCASIM;  /* YIELD */
A68_59  HBCASIM;  /* OPERATORS - mode -> union mode */
A68_281  IBCASIM;  /* avoid structure result */
A68_281  JBCASIM_stype;
A68_281  KBCASIM;  /* united object - for case conformity */
A68_280 * LBCASIM_enum;
A68_292  MBCASIM;  /* collateral clause result */
A68_293  NBCASIM;  /* avoid structure result */
A68_292 * OBCASIM;  /* YIELD */
A68_293  PBCASIM;  /* OPERATORS - mode -> union mode */
A68_95 * QBCASIM_row;
A68_INT  RBCASIM_size;
A68_293  SBCASIM;  /* avoid structure result */
A68_293  TBCASIM_el;
A68_294 * UBCASIM_result;
A68_INT  VBCASIM_i;
A68_INT  WBCASIM;  /* to part of loop */
A68_294  XBCASIM;  /* collateral clause result */
A68_294 * YBCASIM;  /* YIELD */
A68_293  ZBCASIM;  /* OPERATORS - mode -> union mode */
A68_96 * ACCASIM_str;
A68_293  BCCASIM;  /* OPERATORS - mode -> union mode */
A68_294  CCCASIM;  /* collateral clause result */
A68_293  DCCASIM;  /* avoid structure result */
A68_81  ECCASIM;  /* OPERATORS - mode -> union mode */
A68_96 * FCCASIM;  /* YIELD */
A68_293  GCCASIM;  /* avoid structure result */
A68_293  HCCASIM;  /* united object - for case conformity */
A68_294 * ICCASIM_svst;
A68_294 * JCCASIM;  /* YIELD */
A68_293  KCCASIM;  /* OPERATORS - mode -> union mode */
A68_79 * LCCASIM_query;
A68_288 * MCCASIM_result;
A68_281  NCCASIM;  /* avoid structure result */
A68_281 * OCCASIM;  /* YIELD */
A68_293  PCCASIM;  /* OPERATORS - mode -> union mode */
A68_293  SCCASIM;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(convertconst);
 /* line 145: */
 /* line 146: */
{ 
 /* line 147: */
PXBASIM = Assconst ;
switch ( PXBASIM.mode )
{ 
case 1: /* REF STRUCT(INT)  */
QXBASIM_name = (PXBASIM.data.mode1);
 /* line 148: */
 /* line 149: */
{ 
RXBASIM = Environ.Consts ;
SXBASIM = (*(&(QXBASIM_name->Constno))) ;
TXBASIM_declaration = (*(&A_VINDEX(RXBASIM,SXBASIM)));
 /* line 150: */
 /* line 151: */
 /* line 152: */
OXBASIM_convertconst( (*(&(TXBASIM_declaration->Value))), Environ, Closure, &VXBASIM );
UXBASIM = VXBASIM;
} 
break;
case 2: /* REF STRUCT(INT,INT)  */
WXBASIM_basic = (PXBASIM.data.mode2);
 /* line 153: */
 /* line 154: */
{ 
 /* line 155: */
YXBASIM = (&((&XXBASIM_type)->Typeno)) ;
(*YXBASIM) = (*(&(WXBASIM_basic->Typeno)));
 /* line 156: */
SUBASIM_converttype( A_UNITE(ZXBASIM,mode1,1,(&XXBASIM_type)), Environ, Closure, &AYBASIM );
BYBASIM_stype = AYBASIM;
 /* line 157: */
 /* line 158: */
CYBASIM = BYBASIM_stype ;
switch ( CYBASIM.mode )
{ 
case 1: /* REF STRUCT(REF MODE26,MODE281,REF MODE280)  */
DYBASIM_enum = (CYBASIM.data.mode1);
 /* line 159: */
EYBASIM.Type = DYBASIM_enum;
EYBASIM.Tag = (*(&(WXBASIM_basic->Primno)));
EYBASIM.Assoc = GTAASIM_nullsvalue;
 /* line 160: */
FYBASIM = A_HEAP(A68_292 ) ;
(*FYBASIM) = EYBASIM ;
UXBASIM = A_UNITE(GYBASIM,mode5,5,FYBASIM);
break;
case 3: /* REF STRUCT(REF MODE26,REF MODE26)  */
HYBASIM_schar = (CYBASIM.data.mode3);
 /* line 161: */
IYBASIM.Type = HYBASIM_schar;
 /* line 162: */
JYBASIM = (*(&(HYBASIM_schar->Char))) ;
KYBASIM = (*(&(WXBASIM_basic->Primno))) ;
IYBASIM.Value = (*(&A_VINDEX(JYBASIM,KYBASIM)));
 /* line 163: */
 /* line 164: */
LYBASIM = A_HEAP(A68_290 ) ;
(*LYBASIM) = IYBASIM ;
UXBASIM = A_UNITE(MYBASIM,mode3,3,LYBASIM);
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
break;
case 3: /* REF STRUCT(INT,MODE43)  */
NYBASIM_cint = (PXBASIM.data.mode3);
 /* line 165: */
 /* line 166: */
{ 
 /* line 167: */
PYBASIM = (&((&OYBASIM_type)->Typeno)) ;
(*PYBASIM) = (*(&(NYBASIM_cint->Typeno)));
 /* line 168: */
SUBASIM_converttype( A_UNITE(QYBASIM,mode1,1,(&OYBASIM_type)), Environ, Closure, &RYBASIM );
SYBASIM_stype = RYBASIM;
 /* line 169: */
 /* line 170: */
TYBASIM = SYBASIM_stype ;
switch ( TYBASIM.mode )
{ 
case 2: /* REF STRUCT(REF MODE26,INT,INT)  */
UYBASIM_sint = (TYBASIM.data.mode2);
 /* line 171: */
VYBASIM.Type = UYBASIM_sint;
 /* line 172: */
VYBASIM.Value = XOMATRN_int((*(&(NYBASIM_cint->Index))));
 /* line 173: */
 /* line 174: */
WYBASIM = A_HEAP(A68_289 ) ;
(*WYBASIM) = VYBASIM ;
UXBASIM = A_UNITE(XYBASIM,mode2,2,WYBASIM);
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
break;
case 5: /* REF STRUCT(INT,REF MODE142)  */
YYBASIM_cq = (PXBASIM.data.mode5);
 /* line 175: */
 /* line 176: */
{ 
 /* line 177: */
AZBASIM = (&((&ZYBASIM_type)->Typeno)) ;
(*AZBASIM) = (*(&(YYBASIM_cq->Typeno)));
 /* line 178: */
SUBASIM_converttype( A_UNITE(BZBASIM,mode1,1,(&ZYBASIM_type)), Environ, Closure, &CZBASIM );
DZBASIM_stype = CZBASIM;
 /* line 179: */
EZBASIM_rvi = (*(&(YYBASIM_cq->String)));
 /* line 180: */
FZBASIM_size = EZBASIM_rvi.upb;
 /* line 181: */
A_CLOSURE( HZBASIM_generator, IZBASIM_generator, JZBASIM_generator );
(( JZBASIM_generator * ) ( HZBASIM_generator.nonlocals )) -> FZBASIM_size = FZBASIM_size;
A_CALLPROC(HZBASIM_generator,(A68_FALSE, &MZBASIM),(A68_FALSE, &MZBASIM,(HZBASIM_generator).nonlocals));
NZBASIM_string = MZBASIM;
 /* line 182: */
 /* line 183: */
OZBASIM = DZBASIM_stype ;
switch ( OZBASIM.mode )
{ 
case 3: /* REF STRUCT(REF MODE26,REF MODE26)  */
PZBASIM_schar = (OZBASIM.data.mode3);
 /* line 184: */
 /* line 185: */
{ 
QZBASIM_chars = (*(&(PZBASIM_schar->Char)));
 /* line 186: */
SZBASIM = FZBASIM_size;
for ( RZBASIM_i = 1;
RZBASIM_i <= SZBASIM;
RZBASIM_i += 1 )
{ 
TZBASIM = (*(&A_VINDEX(EZBASIM_rvi,RZBASIM_i))) ;
UZBASIM = (&A_VINDEX(NZBASIM_string,RZBASIM_i)) ;
(*UZBASIM) = (*(&A_VINDEX(QZBASIM_chars,TZBASIM)));
}
 /* line 187: */
WZBASIM.No = FZBASIM_size;
WZBASIM.T = (*PZBASIM_schar);
XZBASIM = A_HEAP(A68_279 ) ;
(*XZBASIM) = WZBASIM ;
VZBASIM.Type = XZBASIM;
 /* line 188: */
VZBASIM.Value = NZBASIM_string;
 /* line 189: */
 /* line 190: */
 /* line 191: */
YZBASIM = A_HEAP(A68_291 ) ;
(*YZBASIM) = VZBASIM ;
UXBASIM = A_UNITE(ZZBASIM,mode4,4,YZBASIM);
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
break;
case 33: /* REF STRUCT(MODE43,MODE81)  */
AACASIM_cs = (PXBASIM.data.mode33);
 /* line 192: */
 /* line 193: */
BACASIM = (*(&(AACASIM_cs->Char))) ;
switch ( BACASIM.mode )
{ 
case 4: /* REF STRUCT(MODE59)  */
CACASIM_cq = (BACASIM.data.mode4);
 /* line 194: */
 /* line 195: */
{ 
DACASIM_result = (A_HEAP(A68_288 ));
 /* line 196: */
 /* line 197: */
SUBASIM_converttype( (*(&(CACASIM_cq->Querytype))), Environ, Closure, &EACASIM );
FACASIM_sch = EACASIM;
 /* line 198: */
 /* line 199: */
GACASIM.No = XOMATRN_int((*(&(AACASIM_cs->Size))));
HACASIM = FACASIM_sch ;
switch ( HACASIM.mode )
{ 
case 3: /* REF STRUCT(REF MODE26,REF MODE26)  */
IACASIM_sc = (HACASIM.data.mode3);
GACASIM.T = (*IACASIM_sc);
break;
default: 
A_IMP_SKIP ;
break;
} 
JACASIM = A_HEAP(A68_279 ) ;
(*JACASIM) = GACASIM ;
LACASIM = (&(DACASIM_result->Type)) ;
(*LACASIM) = A_UNITE(KACASIM,mode5,5,JACASIM);
 /* line 200: */
 /* line 201: */
 /* line 202: */
UXBASIM = A_UNITE(MACASIM,mode1,1,DACASIM_result);
} 
break;
case 2: /* REF STRUCT(INT,INT)  */
NACASIM_cc = (BACASIM.data.mode2);
 /* line 203: */
 /* line 204: */
{ 
 /* line 205: */
PACASIM = (&((&OACASIM_type)->Typeno)) ;
(*PACASIM) = (*(&(NACASIM_cc->Typeno)));
 /* line 206: */
SUBASIM_converttype( A_UNITE(QACASIM,mode1,1,(&OACASIM_type)), Environ, Closure, &RACASIM );
SACASIM_stype = RACASIM;
 /* line 207: */
TACASIM_size = XOMATRN_int((*(&(AACASIM_cs->Size))));
 /* line 208: */
 /* line 209: */
UACASIM = SACASIM_stype ;
switch ( UACASIM.mode )
{ 
case 3: /* REF STRUCT(REF MODE26,REF MODE26)  */
VACASIM_schar = (UACASIM.data.mode3);
 /* line 210: */
 /* line 211: */
XACASIM.No = TACASIM_size;
XACASIM.T = (*VACASIM_schar);
 /* line 212: */
YACASIM = A_HEAP(A68_279 ) ;
(*YACASIM) = XACASIM ;
WACASIM.Type = YACASIM;
 /* line 213: */
ZACASIM = (*(&(VACASIM_schar->Char))) ;
ABCASIM = (*(&(NACASIM_cc->Primno))) ;
RSCAOST_makeid( A_C_TIMES((*(&A_VINDEX(ZACASIM,ABCASIM))),TACASIM_size), &BBCASIM );
WACASIM.Value = BBCASIM;
 /* line 214: */
 /* line 215: */
 /* line 216: */
CBCASIM = A_HEAP(A68_291 ) ;
(*CBCASIM) = WACASIM ;
UXBASIM = A_UNITE(DBCASIM,mode4,4,CBCASIM);
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
break;
case 13: /* REF STRUCT(INT,INT,MODE81)  */
EBCASIM_ass = (PXBASIM.data.mode13);
 /* line 217: */
 /* line 218: */
{ 
 /* line 219: */
GBCASIM = (&((&FBCASIM_type)->Typeno)) ;
(*GBCASIM) = (*(&(EBCASIM_ass->Typeno)));
 /* line 220: */
SUBASIM_converttype( A_UNITE(HBCASIM,mode1,1,(&FBCASIM_type)), Environ, Closure, &IBCASIM );
JBCASIM_stype = IBCASIM;
 /* line 221: */
 /* line 222: */
KBCASIM = JBCASIM_stype ;
switch ( KBCASIM.mode )
{ 
case 1: /* REF STRUCT(REF MODE26,MODE281,REF MODE280)  */
LBCASIM_enum = (KBCASIM.data.mode1);
 /* line 223: */
 /* line 224: */
 /* line 225: */
MBCASIM.Type = LBCASIM_enum;
 /* line 226: */
MBCASIM.Tag = (*(&(EBCASIM_ass->Altno)));
 /* line 227: */
OXBASIM_convertconst( (*(&(EBCASIM_ass->Assoc))), Environ, Closure, &NBCASIM );
MBCASIM.Assoc = NBCASIM;
 /* line 228: */
 /* line 229: */
OBCASIM = A_HEAP(A68_292 ) ;
(*OBCASIM) = MBCASIM ;
UXBASIM = A_UNITE(PBCASIM,mode5,5,OBCASIM);
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
break;
case 20: /* REF STRUCT(MODE43,MODE81)  */
QBCASIM_row = (PXBASIM.data.mode20);
 /* line 230: */
 /* line 231: */
{ 
RBCASIM_size = XOMATRN_int((*(&(QBCASIM_row->Size))));
 /* line 232: */
OXBASIM_convertconst( (*(&(QBCASIM_row->Elem))), Environ, Closure, &SBCASIM );
TBCASIM_el = SBCASIM;
 /* line 233: */
UBCASIM_result = DTAASIM_nilsvst;
 /* line 234: */
WBCASIM = RBCASIM_size;
for ( VBCASIM_i = 1;
VBCASIM_i <= WBCASIM;
VBCASIM_i += 1 )
{ 
 /* line 235: */
XBCASIM.Head = TBCASIM_el;
 /* line 236: */
XBCASIM.Tail = UBCASIM_result;
YBCASIM = A_HEAP(A68_294 ) ;
(*YBCASIM) = XBCASIM ;
UBCASIM_result = YBCASIM;
}
 /* line 237: */
 /* line 238: */
 /* line 239: */
UXBASIM = A_UNITE(ZBCASIM,mode6,6,UBCASIM_result);
} 
break;
case 21: /* REF STRUCT(MODE81,REF MODE96)  */
ACCASIM_str = (PXBASIM.data.mode21);
 /* line 240: */
 /* line 241: */
if ( (ACCASIM_str==IAAATRN_nilustr) )
{ 
 /* line 242: */
UXBASIM = A_UNITE(BCCASIM,mode6,6,DTAASIM_nilsvst);
} 
else
{ 
 /* line 243: */
 /* line 244: */
OXBASIM_convertconst( (*(&(ACCASIM_str->Elem))), Environ, Closure, &DCCASIM );
CCCASIM.Head = DCCASIM;
 /* line 245: */
FCCASIM = (*(&(ACCASIM_str->Rest))) ;
OXBASIM_convertconst( A_UNITE(ECCASIM,mode21,21,FCCASIM), Environ, Closure, &GCCASIM );
HCCASIM = GCCASIM ;
switch ( HCCASIM.mode )
{ 
case 6: /* REF STRUCT(MODE293,REF MODE294)  */
ICCASIM_svst = (HCCASIM.data.mode6);
 /* line 246: */
 /* line 247: */
CCCASIM.Tail = ICCASIM_svst;
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 248: */
JCCASIM = A_HEAP(A68_294 ) ;
(*JCCASIM) = CCCASIM ;
UXBASIM = A_UNITE(KCCASIM,mode6,6,JCCASIM);
} 
break;
case 4: /* REF STRUCT(MODE59)  */
LCCASIM_query = (PXBASIM.data.mode4);
 /* line 249: */
 /* line 250: */
{ 
MCCASIM_result = (A_HEAP(A68_288 ));
 /* line 251: */
 /* line 252: */
SUBASIM_converttype( (*(&(LCCASIM_query->Querytype))), Environ, Closure, &NCCASIM );
OCCASIM = (&(MCCASIM_result->Type)) ;
(*OCCASIM) = NCCASIM;
 /* line 253: */
 /* line 254: */
 /* line 255: */
UXBASIM = A_UNITE(PCCASIM,mode1,1,MCCASIM_result);
} 
break;
case 6: /* REF STRUCT(INT)  */
 /* line 256: */
 /* line 257: */
UXBASIM = JTAASIM_voidsvalue;
break;
case 34: /* REF STRUCT(INT)  */
 /* line 259: */
 /* line 260: */
UXBASIM = GTAASIM_nullsvalue;
break;
default: 
NKDAOST_sysfault(RCCASIM);
 /* line 261: */
 /* line 262: */
 /* line 265: */
UXBASIM = SCCASIM;
break;
} 
} 
A_PROC_EXIT(convertconst);
*ReturnedValue = (UXBASIM);
return;
} 
#undef NL
 /* line 2: */
 /* line 5: */
void KUBASIM(void)   /* initialise DECS keconv */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259R","./a68files/keconv.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","/u/model/ella/transform/assoc/mfiles/modeprocs.m","./mfiles/kebasics.m","/u/model/ella/ostools/assoc/mfiles/basics.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m","/u/model/ella/transform/assoc/mfiles/assmodes.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
HNMATRN();   /* USE modeprocs */
JSAASIM();   /* USE kebasics */
JSCAOST();   /* USE basics */
MTAAOSL();   /* USE putstrings */
BAAATRN();   /* USE assmodes */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/sim/assoc/./a68files/keconv.a68";
A_config.translation_time = "Tue Apr  4 11:05:55 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "JUBASIM (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 11:05:55 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS keconv);
UEAALIB_a68config(LGAALIB_configinfo, OUBASIM);
 /* line 71: */
 /* line 144: */
 /* line 341: */
A_PROC_EXIT(DECS keconv);
} 
#undef NL
/* end of translation of ./a68files/keconv.a68 */
