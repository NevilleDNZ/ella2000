
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
/* UNAME:JUDAELA */
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
struct A68t93 ;

A_PROCEDURE(A68_VOID ,A68t92,(struct A68t93 ,struct A68t46 ),(struct A68t93 ,struct A68t46 ,void *));
typedef struct A68t92  A68_92 ;    /* PROC(MODE93,MODE46) VOID */
struct A68t93{
A68_INT  Number;
A_PAD_INT(PAD_20)
struct A68t94 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_21)
};
typedef struct A68t93  A68_93 ;    /* STRUCT(INT,REF MODE94,BITS)  */
A_VECTOR(struct A68t96 ,A68t95);
typedef struct A68t95  A68_95 ;    /* VECTOR [] MODE96 */
struct A68t96{
struct A68t93  Msgno;
A68_VC  Text;
};
typedef struct A68t96  A68_96 ;    /* STRUCT(MODE93,REF MODE26)  */
struct A68t94{
A68_VC  Name;
struct A68t95  Messages;
};
typedef struct A68t94  A68_94 ;    /* STRUCT(REF MODE26,REF MODE95)  */
struct A68t97{
A68_BITS  Code;
A_PAD_BITS(PAD_22)
A68_INT  First_block;
A_PAD_INT(PAD_23)
A68_INT  First_offset;
A_PAD_INT(PAD_24)
A68_INT  Data_elts;
A_PAD_INT(PAD_25)
A68_INT  Dp_elts;
A_PAD_INT(PAD_26)
A68_INT  Version;
A_PAD_INT(PAD_27)
A68_BITS  Sumcheck;
A_PAD_BITS(PAD_28)
};
typedef struct A68t97  A68_97 ;    /* STRUCT(BITS,INT,INT,INT,INT,INT,BITS)  */
struct A68t99{
A68_INT  Block_num;
A_PAD_INT(PAD_29)
A68_INT  Offset;
A_PAD_INT(PAD_30)
};
typedef struct A68t99  A68_99 ;    /* STRUCT(INT,INT)  */
struct A68t98{
A68_BOOL  Shaky;
A_PAD_BOOL(PAD_31)
struct A68t99  Address;
A68_INT  Data_elts;
A_PAD_INT(PAD_32)
A68_INT  Dp_elts;
A_PAD_INT(PAD_33)
A68_INT  Code;
A_PAD_INT(PAD_34)
A68_INT  Version;
A_PAD_INT(PAD_35)
A68_INT  Read_size;
A_PAD_INT(PAD_36)
};
typedef struct A68t98  A68_98 ;    /* STRUCT(BOOL,MODE99,INT,INT,INT,INT,INT)  */
A_VECTOR(struct A68t97 ,A68t101);
typedef struct A68t101  A68_101 ;    /* VECTOR [] MODE97 */
A_VECTOR(struct A68t98 ,A68t106);
typedef struct A68t106  A68_106 ;    /* VECTOR [] MODE98 */
struct A68t100{
struct A68t97 * Root;
struct A68t97 * Indirs_dp;
struct A68t97 * Freelist_dp;
struct A68t97 * Pagetable_dp;
struct A68t97 * Append_dp;
struct A68t101  Free_block_dps;
struct A68t101  Pagetable_dps;
struct A68t102 ** File;
struct A68t102 ** Test_file;
struct A68t103 * Write_buffer;
A68_VC  Name;
A68_VC  Block_buffer;
A68_INT * Generation;
A68_INT * File_size;
A68_INT * Old_file_size;
A68_INT * Freelist_index;
A68_INT * Current_free;
A68_INT * First_free;
A68_INT * Last_free;
A68_INT * Cbufpos;
A68_INT * Freeblock_ptr;
A68_INT * Freelist_ext_ptr;
A68_INT * Initial_free_block_dps;
A68_INT * Size_of_free_space;
A68_INT * Unusable_bytes;
A68_INT * Appended_data;
A68_INT * Read_transfers;
A68_INT * Write_transfers;
struct A68t32  Freelist;
struct A68t32  Freelist_ext;
struct A68t32  Pagetable_ext;
struct A68t104 * Gc_ptrs;
struct A68t105 * Instore_vars;
struct A68t106  Indirections;
A68_BOOL * Writeable;
A68_BOOL * Last_update_failed;
A68_BOOL * Appending;
A68_BOOL * Collectable;
};
typedef struct A68t100  A68_100 ;    /* STRUCT(REF MODE97,REF MODE97,REF MODE97,REF MODE97,REF MODE97,REF MODE101,REF MODE101,REF REF MODE102,REF REF MODE102,REF MODE103,REF MODE26,REF MODE26,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF MODE32,REF MODE32,REF MODE32,REF MODE104,REF MODE105,REF MODE106,REF BOOL,REF BOOL,REF BOOL,REF BOOL)  */
struct A68t102{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t102  A68_102 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t103{
A68_VC  Buffer;
struct A68t107 * List;
A68_INT * Buffer_ptr;
A68_INT * Upb;
A68_INT * Generation;
};
typedef struct A68t103  A68_103 ;    /* STRUCT(REF MODE26,REF MODE107,REF INT,REF INT,REF INT)  */
struct A68t104{
struct A68t99  Old;
struct A68t99  New;
struct A68t104 * Rest;
};
typedef struct A68t104  A68_104 ;    /* STRUCT(MODE99,MODE99,REF MODE104)  */
struct A68t105{
A68_INT  Indirection;
A_PAD_INT(PAD_37)
struct A68t105 * Rest;
};
typedef struct A68t105  A68_105 ;    /* STRUCT(INT,REF MODE105)  */
struct A68t107{
A68_INT  Lwb;
A_PAD_INT(PAD_38)
A68_INT  Upb;
A_PAD_INT(PAD_39)
struct A68t107 * Rest;
};
typedef struct A68t107  A68_107 ;    /* STRUCT(INT,INT,REF MODE107)  */
struct A68t108{
struct A68t97  Dp;
struct A68t108 * Rest;
};
typedef struct A68t108  A68_108 ;    /* STRUCT(MODE97,REF MODE108)  */
struct A68t109{
A68_VC  Logical_name;
A68_VC  Db_name;
A68_BITS * Setup;
struct A68t100 * Df;
};
typedef struct A68t109  A68_109 ;    /* STRUCT(REF MODE26,REF MODE26,REF BITS,REF MODE100)  */
struct A68t110{
A68_VC  Buffer;
A68_INT * Lwb;
A68_INT * Upb;
};
typedef struct A68t110  A68_110 ;    /* STRUCT(REF MODE26,REF INT,REF INT)  */
struct A68t111 { A68_INT mode; union {
struct A68t32  mode1;
A68_VC  mode2;
struct A68t101  mode3;
} data; };
typedef struct A68t111  A68_111 ;    /* UNION(MODE32,MODE26,MODE101)  */
struct A68t112{
struct A68t99  Address;
A68_INT  Data_elts;
A_PAD_INT(PAD_40)
A68_INT  Dp_elts;
A_PAD_INT(PAD_41)
A68_INT  Code;
A_PAD_INT(PAD_42)
A68_INT  Read_size;
A_PAD_INT(PAD_43)
};
typedef struct A68t112  A68_112 ;    /* STRUCT(MODE99,INT,INT,INT,INT)  */
struct A68t113{
A68_INT  Block_num;
A_PAD_INT(PAD_44)
A68_INT  Offset;
A_PAD_INT(PAD_45)
struct A68t113 * Rest;
};
typedef struct A68t113  A68_113 ;    /* STRUCT(INT,INT,REF MODE113)  */
struct A68t114{
A68_INT  Old_block;
A_PAD_INT(PAD_46)
A68_INT  Old_offset;
A_PAD_INT(PAD_47)
A68_INT  New_block;
A_PAD_INT(PAD_48)
A68_INT  New_offset;
A_PAD_INT(PAD_49)
struct A68t114 * Rest;
};
typedef struct A68t114  A68_114 ;    /* STRUCT(INT,INT,INT,INT,REF MODE114)  */
A_VECTOR(struct A68t113 *,A68t116);
typedef struct A68t116  A68_116 ;    /* VECTOR [] REF MODE113 */
A_VECTOR(struct A68t114 *,A68t117);
typedef struct A68t117  A68_117 ;    /* VECTOR [] REF MODE114 */
struct A68t115 { A68_INT mode; union {
struct A68t116  mode1;
struct A68t117  mode2;
A68_BOOL  mode3;
} data; };
typedef struct A68t115  A68_115 ;    /* UNION(REF MODE116,REF MODE117,BOOL)  */
struct A68t118{
struct A68t112  Data;
struct A68t118 * Rest;
};
typedef struct A68t118  A68_118 ;    /* STRUCT(MODE112,REF MODE118)  */
struct A68t119{
struct A68t32  Max_hashlist;
A68_INT  Stack_size;
A_PAD_INT(PAD_50)
A68_INT  Max_stack_size;
A_PAD_INT(PAD_51)
A68_INT  Disc_accesses;
A_PAD_INT(PAD_52)
A68_INT  Data_ptrs;
A_PAD_INT(PAD_53)
};
typedef struct A68t119  A68_119 ;    /* STRUCT(REF MODE32,INT,INT,INT,INT)  */
struct A68t120{
A68_BOOL  Wanted;
A_PAD_BOOL(PAD_54)
A68_INT  Indirection;
A_PAD_INT(PAD_55)
struct A68t99  Old_addr;
struct A68t99  New_addr;
struct A68t120 * Rest;
};
typedef struct A68t120  A68_120 ;    /* STRUCT(BOOL,INT,MODE99,MODE99,REF MODE120)  */
struct A68t121{
A68_VC  Name;
A68_BOOL  Compactor;
A_PAD_BOOL(PAD_56)
struct A68t110 * Read_buffer;
struct A68t32  Pagetable;
A68_VC  Blocks_wanted;
struct A68t54  Indirs_wanted;
struct A68t115  Hashtable;
struct A68t118 * Stack;
struct A68t120 * Shaky_ptrs;
struct A68t119 * Gcinfo;
};
typedef struct A68t121  A68_121 ;    /* STRUCT(REF MODE26,BOOL,REF MODE110,REF MODE32,REF MODE26,REF MODE54,MODE115,REF MODE118,REF MODE120,REF MODE119)  */

A_PROCEDURE(A68_VOID ,A68t122,(struct A68t102 *,A68_VC *),(struct A68t102 *,A68_VC *,void *));
typedef struct A68t122  A68_122 ;    /* PROC(REF MODE102) MODE26 */

A_PROCEDURE(A68_VOID ,A68t123,(struct A68t102 *,struct A68t92 ),(struct A68t102 *,struct A68t92 ,void *));
typedef struct A68t123  A68_123 ;    /* PROC(REF MODE102,MODE92) VOID */

A_PROCEDURE(A68_INT ,A68t124,(struct A68t102 *),(struct A68t102 *,void *));
typedef struct A68t124  A68_124 ;    /* PROC(REF MODE102) INT */

A_PROCEDURE(struct A68t102 *,A68t125,(A68_VC ,A68_INT ,struct A68t92 ),(A68_VC ,A68_INT ,struct A68t92 ,void *));
typedef struct A68t125  A68_125 ;    /* PROC(MODE26,INT,MODE92) REF MODE102 */

A_PROCEDURE(A68_INT ,A68t126,(struct A68t102 *,A68_INT ,struct A68t92 ),(struct A68t102 *,A68_INT ,struct A68t92 ,void *));
typedef struct A68t126  A68_126 ;    /* PROC(REF MODE102,INT,MODE92) INT */
A_ISTRUCT(A68_CHAR ,512,A68t127);
typedef struct A68t127  A68_127 ;    /* STRUCT 512 CHAR */

A_PROCEDURE(A68_VOID ,A68t128,(struct A68t102 *,A68_VC ,A68_INT ,struct A68t92 ),(struct A68t102 *,A68_VC ,A68_INT ,struct A68t92 ,void *));
typedef struct A68t128  A68_128 ;    /* PROC(REF MODE102,REF MODE26,INT,MODE92) VOID */

A_PROCEDURE(A68_VOID ,A68t129,(struct A68t102 *,A68_VC ,A68_INT ,struct A68t92 ),(struct A68t102 *,A68_VC ,A68_INT ,struct A68t92 ,void *));
typedef struct A68t129  A68_129 ;    /* PROC(REF MODE102,MODE26,INT,MODE92) VOID */

A_PROCEDURE(A68_LINT ,A68t130,(void),(void *));
typedef struct A68t130  A68_130 ;    /* PROC LONG INT */

A_PROCEDURE(A68_VOID ,A68t131,(struct A68t54 ),(struct A68t54 ,void *));
typedef struct A68t131  A68_131 ;    /* PROC(REF MODE54) VOID */

A_PROCEDURE(A68_INT ,A68t132,(A68_VC ),(A68_VC ,void *));
typedef struct A68t132  A68_132 ;    /* PROC(MODE26) INT */

A_PROCEDURE(A68_BOOL ,A68t133,(struct A68t99 ,struct A68t99 ),(struct A68t99 ,struct A68t99 ,void *));
typedef struct A68t133  A68_133 ;    /* PROC(MODE99,MODE99) BOOL */

A_PROCEDURE(A68_BOOL ,A68t134,(struct A68t97 ,struct A68t97 ),(struct A68t97 ,struct A68t97 ,void *));
typedef struct A68t134  A68_134 ;    /* PROC(MODE97,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t135,(A68_BOOL ,A68_BOOL ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t99 ,struct A68t97 *),(A68_BOOL ,A68_BOOL ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t99 ,struct A68t97 *,void *));
typedef struct A68t135  A68_135 ;    /* PROC(BOOL,BOOL,INT,INT,INT,INT,INT,MODE99) MODE97 */

A_PROCEDURE(A68_VOID ,A68t136,(A68_VC ,struct A68t97 *),(A68_VC ,struct A68t97 *,void *));
typedef struct A68t136  A68_136 ;    /* PROC(MODE26) MODE97 */

A_PROCEDURE(A68_VOID ,A68t137,(struct A68t97 ,A68_VC *),(struct A68t97 ,A68_VC *,void *));
typedef struct A68t137  A68_137 ;    /* PROC(MODE97) MODE26 */

A_PROCEDURE(A68_VOID ,A68t138,(struct A68t97 *,struct A68t99 ),(struct A68t97 *,struct A68t99 ,void *));
typedef struct A68t138  A68_138 ;    /* PROC(REF MODE97,MODE99) VOID */

A_PROCEDURE(A68_VOID ,A68t139,(A68_VC ,A68_INT ,struct A68t99 ),(A68_VC ,A68_INT ,struct A68t99 ,void *));
typedef struct A68t139  A68_139 ;    /* PROC(REF MODE26,INT,MODE99) VOID */

A_PROCEDURE(A68_INT ,A68t140,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t140  A68_140 ;    /* PROC(MODE97) INT */

A_PROCEDURE(A68_BOOL ,A68t141,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t141  A68_141 ;    /* PROC(MODE97) BOOL */

A_PROCEDURE(A68_BITS ,A68t142,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t142  A68_142 ;    /* PROC(MODE97) BITS */

A_PROCEDURE(A68_VOID ,A68t143,(A68_VC ,struct A68t98 *),(A68_VC ,struct A68t98 *,void *));
typedef struct A68t143  A68_143 ;    /* PROC(MODE26) MODE98 */

A_PROCEDURE(A68_VOID ,A68t144,(struct A68t98 ,A68_VC *),(struct A68t98 ,A68_VC *,void *));
typedef struct A68t144  A68_144 ;    /* PROC(MODE98) MODE26 */

A_PROCEDURE(A68_VOID ,A68t145,(A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t145  A68_145 ;    /* PROC(INT,INT,INT,INT,INT,INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t146,(A68_INT ,A68_INT ,A68_INT ,A68_VC *),(A68_INT ,A68_INT ,A68_INT ,A68_VC *,void *));
typedef struct A68t146  A68_146 ;    /* PROC(INT,INT,INT) MODE26 */

A_PROCEDURE(A68_BOOL ,A68t147,(A68_VC ),(A68_VC ,void *));
typedef struct A68t147  A68_147 ;    /* PROC(MODE26) BOOL */

A_PROCEDURE(A68_VOID ,A68t148,(void),(void *));
typedef struct A68t148  A68_148 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t149,(struct A68t148 ),(struct A68t148 ,void *));
typedef struct A68t149  A68_149 ;    /* PROC(MODE148) VOID */

A_PROCEDURE(A68_VOID ,A68t150,(struct A68t36 ),(struct A68t36 ,void *));
typedef struct A68t150  A68_150 ;    /* PROC(MODE36) VOID */

A_PROCEDURE(A68_VOID ,A68t151,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t151  A68_151 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,58,A68t152);
typedef struct A68t152  A68_152 ;    /* STRUCT 58 CHAR */

A_PROCEDURE(A68_VOID ,A68t153,(A68_BOOL ,struct A68t106 *),(A68_BOOL ,struct A68t106 *,void *));
typedef struct A68t153  A68_153 ;    /* PROC(BOOL) MODE106 */

A_PROCEDURE(A68_VOID ,A68t154,(A68_BOOL ,struct A68t101 *),(A68_BOOL ,struct A68t101 *,void *));
typedef struct A68t154  A68_154 ;    /* PROC(BOOL) MODE101 */

A_PROCEDURE(A68_VOID ,A68t155,(A68_BOOL ,struct A68t54 *),(A68_BOOL ,struct A68t54 *,void *));
typedef struct A68t155  A68_155 ;    /* PROC(BOOL) MODE54 */
A_ISTRUCT(A68_CHAR ,8,A68t156);
typedef struct A68t156  A68_156 ;    /* STRUCT 8 CHAR */
A_ISTRUCT(A68_CHAR ,4,A68t157);
typedef struct A68t157  A68_157 ;    /* STRUCT 4 CHAR */
A_ISTRUCT(A68_CHAR ,5,A68t158);
typedef struct A68t158  A68_158 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,13,A68t159);
typedef struct A68t159  A68_159 ;    /* STRUCT 13 CHAR */
A_ISTRUCT(A68_CHAR ,6,A68t160);
typedef struct A68t160  A68_160 ;    /* STRUCT 6 CHAR */
A_ISTRUCT(A68_CHAR ,14,A68t161);
typedef struct A68t161  A68_161 ;    /* STRUCT 14 CHAR */

A_PROCEDURE(A68_INT ,A68t162,(A68_INT ),(A68_INT ,void *));
typedef struct A68t162  A68_162 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_INT ,A68t163,(A68_INT ,A68_INT ),(A68_INT ,A68_INT ,void *));
typedef struct A68t163  A68_163 ;    /* PROC(INT,INT) INT */

A_PROCEDURE(A68_INT ,A68t164,(struct A68t99 ),(struct A68t99 ,void *));
typedef struct A68t164  A68_164 ;    /* PROC(MODE99) INT */

A_PROCEDURE(A68_BOOL ,A68t165,(struct A68t98 ),(struct A68t98 ,void *));
typedef struct A68t165  A68_165 ;    /* PROC(MODE98) BOOL */

A_PROCEDURE(A68_BOOL ,A68t166,(struct A68t98 ,struct A68t98 ),(struct A68t98 ,struct A68t98 ,void *));
typedef struct A68t166  A68_166 ;    /* PROC(MODE98,MODE98) BOOL */

A_PROCEDURE(A68_VOID ,A68t167,(struct A68t100 *,struct A68t97 ,struct A68t98 *),(struct A68t100 *,struct A68t97 ,struct A68t98 *,void *));
typedef struct A68t167  A68_167 ;    /* PROC(REF MODE100,MODE97) MODE98 */

A_PROCEDURE(A68_VOID ,A68t168,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t168  A68_168 ;    /* PROC(MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t169,(A68_VC *),(A68_VC *,void *));
typedef struct A68t169  A68_169 ;    /* PROC MODE26 */
A_ISTRUCT(A68_CHAR ,7,A68t170);
typedef struct A68t170  A68_170 ;    /* STRUCT 7 CHAR */
A_ISTRUCT(A68_CHAR ,2,A68t171);
typedef struct A68t171  A68_171 ;    /* STRUCT 2 CHAR */
A_ISTRUCT(struct A68t52 ,2,A68t172);
typedef struct A68t172  A68_172 ;    /* STRUCT 2 MODE52 */
A_ISTRUCT(A68_CHAR ,3,A68t173);
typedef struct A68t173  A68_173 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(struct A68t52 ,25,A68t174);
typedef struct A68t174  A68_174 ;    /* STRUCT 25 MODE52 */

A_PROCEDURE(A68_BOOL ,A68t175,(struct A68t109 *,struct A68t97 ),(struct A68t109 *,struct A68t97 ,void *));
typedef struct A68t175  A68_175 ;    /* PROC(REF MODE109,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t176,(struct A68t100 *),(struct A68t100 *,void *));
typedef struct A68t176  A68_176 ;    /* PROC(REF MODE100) VOID */
A_ISTRUCT(A68_CHAR ,38,A68t177);
typedef struct A68t177  A68_177 ;    /* STRUCT 38 CHAR */

A_PROCEDURE(A68_VOID ,A68t178,(struct A68t109 *),(struct A68t109 *,void *));
typedef struct A68t178  A68_178 ;    /* PROC(REF MODE109) VOID */
A_ISTRUCT(A68_CHAR ,31,A68t179);
typedef struct A68t179  A68_179 ;    /* STRUCT 31 CHAR */

A_PROCEDURE(A68_VOID ,A68t180,(struct A68t109 *,struct A68t97 ),(struct A68t109 *,struct A68t97 ,void *));
typedef struct A68t180  A68_180 ;    /* PROC(REF MODE109,MODE97) VOID */
A_ISTRUCT(A68_CHAR ,40,A68t181);
typedef struct A68t181  A68_181 ;    /* STRUCT 40 CHAR */

A_PROCEDURE(A68_BOOL ,A68t182,(struct A68t32 ,struct A68t32 ),(struct A68t32 ,struct A68t32 ,void *));
typedef struct A68t182  A68_182 ;    /* PROC(MODE32,MODE32) BOOL */

A_PROCEDURE(A68_VOID ,A68t183,(A68_VC ,A68_VC ,A68_VC *),(A68_VC ,A68_VC ,A68_VC *,void *));
typedef struct A68t183  A68_183 ;    /* PROC(MODE26,MODE26) MODE26 */

A_PROCEDURE(A68_BOOL ,A68t184,(struct A68t100 *,struct A68t97 ),(struct A68t100 *,struct A68t97 ,void *));
typedef struct A68t184  A68_184 ;    /* PROC(REF MODE100,MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t185,(struct A68t100 *,struct A68t97 ),(struct A68t100 *,struct A68t97 ,void *));
typedef struct A68t185  A68_185 ;    /* PROC(REF MODE100,MODE97) VOID */
A_ISTRUCT(A68_CHAR ,30,A68t186);
typedef struct A68t186  A68_186 ;    /* STRUCT 30 CHAR */
A_ISTRUCT(A68_CHAR ,48,A68t187);
typedef struct A68t187  A68_187 ;    /* STRUCT 48 CHAR */

A_PROCEDURE(A68_VOID ,A68t188,(struct A68t100 *,struct A68t97 ,struct A68t99 *),(struct A68t100 *,struct A68t97 ,struct A68t99 *,void *));
typedef struct A68t188  A68_188 ;    /* PROC(REF MODE100,MODE97) MODE99 */

A_PROCEDURE(struct A68t102 *,A68t189,(struct A68t109 *),(struct A68t109 *,void *));
typedef struct A68t189  A68_189 ;    /* PROC(REF MODE109) REF MODE102 */

A_PROCEDURE(A68_BOOL ,A68t190,(struct A68t109 *,struct A68t97 ,struct A68t97 ),(struct A68t109 *,struct A68t97 ,struct A68t97 ,void *));
typedef struct A68t190  A68_190 ;    /* PROC(REF MODE109,MODE97,MODE97) BOOL */

A_PROCEDURE(A68_INT ,A68t191,(struct A68t109 *,struct A68t100 *,struct A68t97 ),(struct A68t109 *,struct A68t100 *,struct A68t97 ,void *));
typedef struct A68t191  A68_191 ;    /* PROC(REF MODE109,REF MODE100,MODE97) INT */

A_PROCEDURE(A68_INT ,A68t192,(struct A68t109 *,struct A68t97 ),(struct A68t109 *,struct A68t97 ,void *));
typedef struct A68t192  A68_192 ;    /* PROC(REF MODE109,MODE97) INT */

A_PROCEDURE(A68_VOID ,A68t193,(A68_INT ),(A68_INT ,void *));
typedef struct A68t193  A68_193 ;    /* PROC(INT) VOID */
A_ISTRUCT(A68_CHAR ,46,A68t194);
typedef struct A68t194  A68_194 ;    /* STRUCT 46 CHAR */
A_ISTRUCT(A68_CHAR ,33,A68t195);
typedef struct A68t195  A68_195 ;    /* STRUCT 33 CHAR */

A_PROCEDURE(A68_BOOL ,A68t196,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t196  A68_196 ;    /* PROC(MODE26,MODE26) BOOL */

A_PROCEDURE(A68_INT ,A68t197,(struct A68t109 *),(struct A68t109 *,void *));
typedef struct A68t197  A68_197 ;    /* PROC(REF MODE109) INT */

A_PROCEDURE(A68_BOOL ,A68t198,(struct A68t109 *),(struct A68t109 *,void *));
typedef struct A68t198  A68_198 ;    /* PROC(REF MODE109) BOOL */

A_PROCEDURE(A68_INT ,A68t199,(struct A68t100 *,struct A68t99 *,A68_BOOL ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_INT ),(struct A68t100 *,struct A68t99 *,A68_BOOL ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t199  A68_199 ;    /* PROC(REF MODE100,REF MODE99,BOOL,INT,INT,INT,INT,INT) INT */

A_PROCEDURE(A68_VOID ,A68t200,(struct A68t109 *,struct A68t97 *),(struct A68t109 *,struct A68t97 *,void *));
typedef struct A68t200  A68_200 ;    /* PROC(REF MODE109) MODE97 */

A_PROCEDURE(A68_VOID ,A68t201,(A68_INT ,struct A68t103 *),(A68_INT ,struct A68t103 *,void *));
typedef struct A68t201  A68_201 ;    /* PROC(INT) MODE103 */

A_PROCEDURE(struct A68t100 *,A68t202,(struct A68t109 *,struct A68t102 *,A68_INT ),(struct A68t109 *,struct A68t102 *,A68_INT ,void *));
typedef struct A68t202  A68_202 ;    /* PROC(REF MODE109,REF MODE102,INT) REF MODE100 */

A_PROCEDURE(A68_VOID ,A68t203,(struct A68t109 *,struct A68t97 ,struct A68t97 ),(struct A68t109 *,struct A68t97 ,struct A68t97 ,void *));
typedef struct A68t203  A68_203 ;    /* PROC(REF MODE109,MODE97,MODE97) VOID */
A_ISTRUCT(A68_CHAR ,25,A68t204);
typedef struct A68t204  A68_204 ;    /* STRUCT 25 CHAR */
A_ISTRUCT(A68_CHAR ,52,A68t205);
typedef struct A68t205  A68_205 ;    /* STRUCT 52 CHAR */

A_PROCEDURE(A68_VOID ,A68t206,(struct A68t109 *,struct A68t97 ,struct A68t97 *),(struct A68t109 *,struct A68t97 ,struct A68t97 *,void *));
typedef struct A68t206  A68_206 ;    /* PROC(REF MODE109,MODE97) MODE97 */

A_PROCEDURE(A68_VOID ,A68t207,(struct A68t110 *),(struct A68t110 *,void *));
typedef struct A68t207  A68_207 ;    /* PROC MODE110 */

A_PROCEDURE(A68_BOOL ,A68t208,(struct A68t110 ,A68_INT ),(struct A68t110 ,A68_INT ,void *));
typedef struct A68t208  A68_208 ;    /* PROC(MODE110,INT) BOOL */

A_PROCEDURE(A68_BOOL ,A68t209,(struct A68t100 *,A68_INT ),(struct A68t100 *,A68_INT ,void *));
typedef struct A68t209  A68_209 ;    /* PROC(REF MODE100,INT) BOOL */

A_PROCEDURE(A68_BOOL ,A68t210,(struct A68t109 *,struct A68t100 *,struct A68t110 *,A68_VC ,A68_INT ,A68_INT ),(struct A68t109 *,struct A68t100 *,struct A68t110 *,A68_VC ,A68_INT ,A68_INT ,void *));
typedef struct A68t210  A68_210 ;    /* PROC(REF MODE109,REF MODE100,REF MODE110,REF MODE26,INT,INT) BOOL */

A_PROCEDURE(A68_BOOL ,A68t211,(struct A68t100 *),(struct A68t100 *,void *));
typedef struct A68t211  A68_211 ;    /* PROC(REF MODE100) BOOL */

A_PROCEDURE(A68_VOID ,A68t212,(struct A68t109 *,struct A68t100 *),(struct A68t109 *,struct A68t100 *,void *));
typedef struct A68t212  A68_212 ;    /* PROC(REF MODE109,REF MODE100) VOID */
A_ISTRUCT(A68_CHAR ,23,A68t213);
typedef struct A68t213  A68_213 ;    /* STRUCT 23 CHAR */
struct A68t214 { A68_INT mode; union {
A68_VC  mode1;
struct A68t32  mode2;
} data; };
typedef struct A68t214  A68_214 ;    /* UNION(REF MODE26,REF MODE32)  */

A_PROCEDURE(A68_VOID ,A68t215,(struct A68t109 *,struct A68t100 *,struct A68t214 ,struct A68t101 ,struct A68t54 ,A68_INT ,struct A68t97 ),(struct A68t109 *,struct A68t100 *,struct A68t214 ,struct A68t101 ,struct A68t54 ,A68_INT ,struct A68t97 ,void *));
typedef struct A68t215  A68_215 ;    /* PROC(REF MODE109,REF MODE100,MODE214,REF MODE101,REF MODE54,INT,MODE97) VOID */
A_ISTRUCT(A68_CHAR ,15,A68t216);
typedef struct A68t216  A68_216 ;    /* STRUCT 15 CHAR */
A_ISTRUCT(A68_CHAR ,34,A68t217);
typedef struct A68t217  A68_217 ;    /* STRUCT 34 CHAR */
A_ISTRUCT(A68_CHAR ,22,A68t218);
typedef struct A68t218  A68_218 ;    /* STRUCT 22 CHAR */

A_PROCEDURE(A68_VOID ,A68t219,(struct A68t109 *,struct A68t32 ,struct A68t97 ),(struct A68t109 *,struct A68t32 ,struct A68t97 ,void *));
typedef struct A68t219  A68_219 ;    /* PROC(REF MODE109,REF MODE32,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t220,(struct A68t109 *,struct A68t100 *,struct A68t32 ,struct A68t97 ),(struct A68t109 *,struct A68t100 *,struct A68t32 ,struct A68t97 ,void *));
typedef struct A68t220  A68_220 ;    /* PROC(REF MODE109,REF MODE100,REF MODE32,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t221,(struct A68t109 *,A68_VC ,struct A68t97 ),(struct A68t109 *,A68_VC ,struct A68t97 ,void *));
typedef struct A68t221  A68_221 ;    /* PROC(REF MODE109,REF MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t222,(struct A68t109 *,A68_VC ,struct A68t101 ,struct A68t97 ),(struct A68t109 *,A68_VC ,struct A68t101 ,struct A68t97 ,void *));
typedef struct A68t222  A68_222 ;    /* PROC(REF MODE109,REF MODE26,REF MODE101,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t223,(struct A68t109 *,struct A68t100 *,A68_INT ,A68_VC ,struct A68t54 ,struct A68t97 ),(struct A68t109 *,struct A68t100 *,A68_INT ,A68_VC ,struct A68t54 ,struct A68t97 ,void *));
typedef struct A68t223  A68_223 ;    /* PROC(REF MODE109,REF MODE100,INT,REF MODE26,REF MODE54,MODE97) VOID */
A_ISTRUCT(A68_CHAR ,19,A68t224);
typedef struct A68t224  A68_224 ;    /* STRUCT 19 CHAR */

A_PROCEDURE(A68_VOID ,A68t225,(struct A68t109 *,A68_INT ,A68_VC ,struct A68t97 ),(struct A68t109 *,A68_INT ,A68_VC ,struct A68t97 ,void *));
typedef struct A68t225  A68_225 ;    /* PROC(REF MODE109,INT,REF MODE26,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t226,(struct A68t109 *,struct A68t106 ,struct A68t97 ),(struct A68t109 *,struct A68t106 ,struct A68t97 ,void *));
typedef struct A68t226  A68_226 ;    /* PROC(REF MODE109,REF MODE106,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t227,(struct A68t109 *,struct A68t101 ,struct A68t97 ),(struct A68t109 *,struct A68t101 ,struct A68t97 ,void *));
typedef struct A68t227  A68_227 ;    /* PROC(REF MODE109,REF MODE101,MODE97) VOID */

A_PROCEDURE(A68_INT ,A68t228,(struct A68t109 *,struct A68t100 *),(struct A68t109 *,struct A68t100 *,void *));
typedef struct A68t228  A68_228 ;    /* PROC(REF MODE109,REF MODE100) INT */
A_ISTRUCT(A68_CHAR ,55,A68t229);
typedef struct A68t229  A68_229 ;    /* STRUCT 55 CHAR */

A_PROCEDURE(A68_VOID ,A68t230,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t230  A68_230 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_VOID ,A68t231,(A68_VC *,A68_VC ,A68_INT *),(A68_VC *,A68_VC ,A68_INT *,void *));
typedef struct A68t231  A68_231 ;    /* PROC(REF REF MODE26,MODE26,REF INT) VOID */

A_PROCEDURE(A68_INT ,A68t232,(A68_INT ,A68_INT ,A68_BOOL ,A68_INT *),(A68_INT ,A68_INT ,A68_BOOL ,A68_INT *,void *));
typedef struct A68t232  A68_232 ;    /* PROC(INT,INT,BOOL,REF INT) INT */

A_PROCEDURE(A68_INT ,A68t233,(struct A68t109 *,A68_INT *,struct A68t111 ),(struct A68t109 *,A68_INT *,struct A68t111 ,void *));
typedef struct A68t233  A68_233 ;    /* PROC(REF MODE109,REF INT,MODE111) INT */

A_PROCEDURE(A68_BOOL ,A68t234,(struct A68t109 *,A68_VC ,struct A68t101 ),(struct A68t109 *,A68_VC ,struct A68t101 ,void *));
typedef struct A68t234  A68_234 ;    /* PROC(REF MODE109,MODE26,MODE101) BOOL */

A_PROCEDURE(A68_BOOL ,A68t235,(struct A68t109 *,struct A68t32 ),(struct A68t109 *,struct A68t32 ,void *));
typedef struct A68t235  A68_235 ;    /* PROC(REF MODE109,MODE32) BOOL */

A_PROCEDURE(A68_VOID ,A68t236,(struct A68t101 *,struct A68t97 ),(struct A68t101 *,struct A68t97 ,void *));
typedef struct A68t236  A68_236 ;    /* PROC(REF REF MODE101,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t237,(struct A68t107 **,A68_INT ,A68_BOOL ),(struct A68t107 **,A68_INT ,A68_BOOL ,void *));
typedef struct A68t237  A68_237 ;    /* PROC(REF REF MODE107,INT,BOOL) VOID */

A_PROCEDURE(A68_INT ,A68t238,(struct A68t103 *,A68_INT ),(struct A68t103 *,A68_INT ,void *));
typedef struct A68t238  A68_238 ;    /* PROC(REF MODE103,INT) INT */

A_PROCEDURE(A68_VOID ,A68t239,(struct A68t100 *,A68_VC ),(struct A68t100 *,A68_VC ,void *));
typedef struct A68t239  A68_239 ;    /* PROC(REF MODE100,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,29,A68t240);
typedef struct A68t240  A68_240 ;    /* STRUCT 29 CHAR */

A_PROCEDURE(A68_VOID ,A68t241,(struct A68t104 **,struct A68t99 ,struct A68t99 ),(struct A68t104 **,struct A68t99 ,struct A68t99 ,void *));
typedef struct A68t241  A68_241 ;    /* PROC(REF REF MODE104,MODE99,MODE99) VOID */

A_PROCEDURE(A68_VOID ,A68t242,(struct A68t100 *,struct A68t103 *,struct A68t99 ,struct A68t99 ),(struct A68t100 *,struct A68t103 *,struct A68t99 ,struct A68t99 ,void *));
typedef struct A68t242  A68_242 ;    /* PROC(REF MODE100,REF MODE103,MODE99,MODE99) VOID */
struct A68t243 { A68_INT mode; union {
A68_VC  mode1;
struct A68t32  mode2;
} data; };
typedef struct A68t243  A68_243 ;    /* UNION(MODE26,MODE32)  */

A_PROCEDURE(A68_VOID ,A68t244,(struct A68t109 *,struct A68t100 *,struct A68t243 ,struct A68t101 ,A68_INT ,A68_INT ,A68_INT ,A68_BOOL ,struct A68t99 ,struct A68t32 ,struct A68t32 ,struct A68t97 *),(struct A68t109 *,struct A68t100 *,struct A68t243 ,struct A68t101 ,A68_INT ,A68_INT ,A68_INT ,A68_BOOL ,struct A68t99 ,struct A68t32 ,struct A68t32 ,struct A68t97 *,void *));
typedef struct A68t244  A68_244 ;    /* PROC(REF MODE109,REF MODE100,MODE243,MODE101,INT,INT,INT,BOOL,MODE99,REF MODE32,REF MODE32) MODE97 */

A_PROCEDURE(A68_VOID ,A68t245,(struct A68t109 *,struct A68t32 ,A68_BOOL ,struct A68t97 *),(struct A68t109 *,struct A68t32 ,A68_BOOL ,struct A68t97 *,void *));
typedef struct A68t245  A68_245 ;    /* PROC(REF MODE109,MODE32,BOOL) MODE97 */
A_ISTRUCT(A68_CHAR ,10,A68t246);
typedef struct A68t246  A68_246 ;    /* STRUCT 10 CHAR */

A_PROCEDURE(A68_VOID ,A68t247,(struct A68t109 *,A68_VC ,A68_BOOL ,struct A68t97 *),(struct A68t109 *,A68_VC ,A68_BOOL ,struct A68t97 *,void *));
typedef struct A68t247  A68_247 ;    /* PROC(REF MODE109,MODE26,BOOL) MODE97 */
A_ISTRUCT(A68_CHAR ,11,A68t248);
typedef struct A68t248  A68_248 ;    /* STRUCT 11 CHAR */

A_PROCEDURE(A68_VOID ,A68t249,(struct A68t109 *,A68_VC ,struct A68t101 ,A68_BOOL ,struct A68t97 *),(struct A68t109 *,A68_VC ,struct A68t101 ,A68_BOOL ,struct A68t97 *,void *));
typedef struct A68t249  A68_249 ;    /* PROC(REF MODE109,MODE26,MODE101,BOOL) MODE97 */

A_PROCEDURE(A68_VOID ,A68t250,(struct A68t109 *,struct A68t101 ,A68_BOOL ,struct A68t97 *),(struct A68t109 *,struct A68t101 ,A68_BOOL ,struct A68t97 *,void *));
typedef struct A68t250  A68_250 ;    /* PROC(REF MODE109,MODE101,BOOL) MODE97 */

A_PROCEDURE(A68_VOID ,A68t251,(struct A68t109 *,struct A68t106 ,struct A68t97 *),(struct A68t109 *,struct A68t106 ,struct A68t97 *,void *));
typedef struct A68t251  A68_251 ;    /* PROC(REF MODE109,MODE106) MODE97 */
A_ISTRUCT(A68_CHAR ,12,A68t252);
typedef struct A68t252  A68_252 ;    /* STRUCT 12 CHAR */

A_PROCEDURE(A68_VOID ,A68t253,(struct A68t109 *,struct A68t100 *,struct A68t32 ,struct A68t97 *),(struct A68t109 *,struct A68t100 *,struct A68t32 ,struct A68t97 *,void *));
typedef struct A68t253  A68_253 ;    /* PROC(REF MODE109,REF MODE100,MODE32) MODE97 */

A_PROCEDURE(A68_VOID ,A68t254,(struct A68t109 *,A68_VC ,struct A68t97 ,struct A68t97 *),(struct A68t109 *,A68_VC ,struct A68t97 ,struct A68t97 *,void *));
typedef struct A68t254  A68_254 ;    /* PROC(REF MODE109,MODE26,MODE97) MODE97 */

A_PROCEDURE(A68_VOID ,A68t255,(struct A68t109 *,A68_VC ,struct A68t101 ,struct A68t97 ,struct A68t97 *),(struct A68t109 *,A68_VC ,struct A68t101 ,struct A68t97 ,struct A68t97 *,void *));
typedef struct A68t255  A68_255 ;    /* PROC(REF MODE109,MODE26,MODE101,MODE97) MODE97 */

A_PROCEDURE(A68_VOID ,A68t256,(struct A68t109 *,struct A68t100 *,struct A68t32 ),(struct A68t109 *,struct A68t100 *,struct A68t32 ,void *));
typedef struct A68t256  A68_256 ;    /* PROC(REF MODE109,REF MODE100,MODE32) VOID */

A_PROCEDURE(A68_VOID ,A68t257,(struct A68t109 *,struct A68t100 *,A68_INT ,A68_VC ,struct A68t97 ),(struct A68t109 *,struct A68t100 *,A68_INT ,A68_VC ,struct A68t97 ,void *));
typedef struct A68t257  A68_257 ;    /* PROC(REF MODE109,REF MODE100,INT,MODE26,MODE97) VOID */
A_ISTRUCT(A68_CHAR ,47,A68t258);
typedef struct A68t258  A68_258 ;    /* STRUCT 47 CHAR */
A_ISTRUCT(A68_CHAR ,51,A68t259);
typedef struct A68t259  A68_259 ;    /* STRUCT 51 CHAR */

A_PROCEDURE(A68_VOID ,A68t260,(struct A68t109 *,A68_INT ,A68_VC ,struct A68t97 ),(struct A68t109 *,A68_INT ,A68_VC ,struct A68t97 ,void *));
typedef struct A68t260  A68_260 ;    /* PROC(REF MODE109,INT,MODE26,MODE97) VOID */

A_PROCEDURE(A68_INT ,A68t261,(struct A68t109 *,struct A68t100 *,A68_INT ,A68_INT *,A68_INT *,A68_INT *),(struct A68t109 *,struct A68t100 *,A68_INT ,A68_INT *,A68_INT *,A68_INT *,void *));
typedef struct A68t261  A68_261 ;    /* PROC(REF MODE109,REF MODE100,INT,REF INT,REF INT,REF INT) INT */

A_PROCEDURE(A68_INT ,A68t262,(void),(void *));
typedef struct A68t262  A68_262 ;    /* PROC INT */

A_PROCEDURE(A68_BOOL ,A68t263,(struct A68t109 *,A68_INT ),(struct A68t109 *,A68_INT ,void *));
typedef struct A68t263  A68_263 ;    /* PROC(REF MODE109,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t264,(struct A68t109 *,struct A68t100 *,A68_INT ,A68_INT ,A68_BOOL ,struct A68t97 *),(struct A68t109 *,struct A68t100 *,A68_INT ,A68_INT ,A68_BOOL ,struct A68t97 *,void *));
typedef struct A68t264  A68_264 ;    /* PROC(REF MODE109,REF MODE100,INT,INT,BOOL) MODE97 */
A_ISTRUCT(A68_CHAR ,18,A68t265);
typedef struct A68t265  A68_265 ;    /* STRUCT 18 CHAR */
A_ISTRUCT(A68_CHAR ,69,A68t266);
typedef struct A68t266  A68_266 ;    /* STRUCT 69 CHAR */

A_PROCEDURE(A68_VOID ,A68t267,(struct A68t109 *,A68_INT ,A68_BOOL ,struct A68t97 *),(struct A68t109 *,A68_INT ,A68_BOOL ,struct A68t97 *,void *));
typedef struct A68t267  A68_267 ;    /* PROC(REF MODE109,INT,BOOL) MODE97 */

A_PROCEDURE(A68_VOID ,A68t268,(struct A68t109 *,struct A68t100 *,A68_INT ,struct A68t92 ),(struct A68t109 *,struct A68t100 *,A68_INT ,struct A68t92 ,void *));
typedef struct A68t268  A68_268 ;    /* PROC(REF MODE109,REF MODE100,INT,MODE92) VOID */
A_ISTRUCT(A68_CHAR ,36,A68t269);
typedef struct A68t269  A68_269 ;    /* STRUCT 36 CHAR */
A_ISTRUCT(A68_CHAR ,32,A68t270);
typedef struct A68t270  A68_270 ;    /* STRUCT 32 CHAR */

A_PROCEDURE(A68_VOID ,A68t271,(struct A68t109 *,A68_INT ,struct A68t92 ),(struct A68t109 *,A68_INT ,struct A68t92 ,void *));
typedef struct A68t271  A68_271 ;    /* PROC(REF MODE109,INT,MODE92) VOID */

A_PROCEDURE(A68_INT ,A68t272,(struct A68t109 *,A68_INT *,A68_BOOL ,struct A68t32 ),(struct A68t109 *,A68_INT *,A68_BOOL ,struct A68t32 ,void *));
typedef struct A68t272  A68_272 ;    /* PROC(REF MODE109,REF INT,BOOL,MODE32) INT */

A_PROCEDURE(A68_VOID ,A68t273,(struct A68t98 *),(struct A68t98 *,void *));
typedef struct A68t273  A68_273 ;    /* PROC(REF MODE98) VOID */

A_PROCEDURE(A68_BOOL ,A68t274,(A68_INT ,A68_INT ,A68_INT ,A68_INT ),(A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t274  A68_274 ;    /* PROC(INT,INT,INT,INT) BOOL */
struct A68t275 { A68_INT mode; union {
struct A68t97  mode1;
struct A68t112  mode2;
} data; };
typedef struct A68t275  A68_275 ;    /* UNION(MODE97,MODE112)  */

A_PROCEDURE(A68_BOOL ,A68t276,(struct A68t121 *,struct A68t100 *,struct A68t275 ),(struct A68t121 *,struct A68t100 *,struct A68t275 ,void *));
typedef struct A68t276  A68_276 ;    /* PROC(REF MODE121,REF MODE100,MODE275) BOOL */

A_PROCEDURE(A68_BOOL ,A68t277,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t277  A68_277 ;    /* PROC(MODE26,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t278,(struct A68t121 *,A68_INT ),(struct A68t121 *,A68_INT ,void *));
typedef struct A68t278  A68_278 ;    /* PROC(REF MODE121,INT) VOID */

A_PROCEDURE(struct A68t121 *,A68t279,(struct A68t109 *,A68_BOOL ,A68_BOOL ),(struct A68t109 *,A68_BOOL ,A68_BOOL ,void *));
typedef struct A68t279  A68_279 ;    /* PROC(REF MODE109,BOOL,BOOL) REF MODE121 */

A_PROCEDURE(A68_VOID ,A68t280,(A68_BOOL ,struct A68t117 *),(A68_BOOL ,struct A68t117 *,void *));
typedef struct A68t280  A68_280 ;    /* PROC(BOOL) MODE117 */

A_PROCEDURE(A68_VOID ,A68t281,(A68_BOOL ,struct A68t116 *),(A68_BOOL ,struct A68t116 *,void *));
typedef struct A68t281  A68_281 ;    /* PROC(BOOL) MODE116 */

A_PROCEDURE(A68_VOID ,A68t282,(struct A68t109 *,struct A68t100 *,struct A68t121 *),(struct A68t109 *,struct A68t100 *,struct A68t121 *,void *));
typedef struct A68t282  A68_282 ;    /* PROC(REF MODE109,REF MODE100,REF MODE121) VOID */

A_PROCEDURE(A68_BOOL ,A68t283,(struct A68t109 *,struct A68t121 *,struct A68t100 *,struct A68t98 *),(struct A68t109 *,struct A68t121 *,struct A68t100 *,struct A68t98 *,void *));
typedef struct A68t283  A68_283 ;    /* PROC(REF MODE109,REF MODE121,REF MODE100,REF MODE98) BOOL */

A_PROCEDURE(A68_VOID ,A68t284,(struct A68t109 *,struct A68t121 *,struct A68t100 *,struct A68t99 ,struct A68t99 ),(struct A68t109 *,struct A68t121 *,struct A68t100 *,struct A68t99 ,struct A68t99 ,void *));
typedef struct A68t284  A68_284 ;    /* PROC(REF MODE109,REF MODE121,REF MODE100,MODE99,MODE99) VOID */

A_PROCEDURE(A68_INT ,A68t285,(struct A68t109 *,A68_BOOL ,A68_INT ,A68_INT ,A68_INT ),(struct A68t109 *,A68_BOOL ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t285  A68_285 ;    /* PROC(REF MODE109,BOOL,INT,INT,INT) INT */

A_PROCEDURE(A68_VOID ,A68t286,(A68_VC ,A68_INT ),(A68_VC ,A68_INT ,void *));
typedef struct A68t286  A68_286 ;    /* PROC(REF MODE26,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t287,(struct A68t109 *,struct A68t97 ,struct A68t112 *),(struct A68t109 *,struct A68t97 ,struct A68t112 *,void *));
typedef struct A68t287  A68_287 ;    /* PROC(REF MODE109,MODE97) MODE112 */

A_PROCEDURE(A68_VOID ,A68t288,(struct A68t109 *,struct A68t121 *,A68_BOOL ,A68_INT ,A68_INT ,A68_INT ,A68_INT ),(struct A68t109 *,struct A68t121 *,A68_BOOL ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,void *));
typedef struct A68t288  A68_288 ;    /* PROC(REF MODE109,REF MODE121,BOOL,INT,INT,INT,INT) VOID */

A_PROCEDURE(A68_VOID ,A68t289,(struct A68t109 *,struct A68t121 *,struct A68t275 ),(struct A68t109 *,struct A68t121 *,struct A68t275 ,void *));
typedef struct A68t289  A68_289 ;    /* PROC(REF MODE109,REF MODE121,MODE275) VOID */
A_ISTRUCT(A68_CHAR ,42,A68t290);
typedef struct A68t290  A68_290 ;    /* STRUCT 42 CHAR */

A_PROCEDURE(A68_VOID ,A68t291,(struct A68t109 *,struct A68t121 *,struct A68t100 *,struct A68t112 ),(struct A68t109 *,struct A68t121 *,struct A68t100 *,struct A68t112 ,void *));
typedef struct A68t291  A68_291 ;    /* PROC(REF MODE109,REF MODE121,REF MODE100,MODE112) VOID */

A_PROCEDURE(A68_VOID ,A68t292,(struct A68t109 *,struct A68t121 *,struct A68t97 ),(struct A68t109 *,struct A68t121 *,struct A68t97 ,void *));
typedef struct A68t292  A68_292 ;    /* PROC(REF MODE109,REF MODE121,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t293,(struct A68t109 *,struct A68t121 *,struct A68t100 *,struct A68t97 ),(struct A68t109 *,struct A68t121 *,struct A68t100 *,struct A68t97 ,void *));
typedef struct A68t293  A68_293 ;    /* PROC(REF MODE109,REF MODE121,REF MODE100,MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t294,(struct A68t121 ),(struct A68t121 ,void *));
typedef struct A68t294  A68_294 ;    /* PROC(MODE121) VOID */
A_ISTRUCT(A68_CHAR ,16,A68t295);
typedef struct A68t295  A68_295 ;    /* STRUCT 16 CHAR */
A_ISTRUCT(struct A68t52 ,17,A68t296);
typedef struct A68t296  A68_296 ;    /* STRUCT 17 MODE52 */

A_PROCEDURE(A68_BOOL ,A68t297,(struct A68t100 *,struct A68t121 *,struct A68t98 ,A68_INT ),(struct A68t100 *,struct A68t121 *,struct A68t98 ,A68_INT ,void *));
typedef struct A68t297  A68_297 ;    /* PROC(REF MODE100,REF MODE121,MODE98,INT) BOOL */

A_PROCEDURE(A68_BOOL ,A68t298,(struct A68t100 *,struct A68t98 ,A68_INT ),(struct A68t100 *,struct A68t98 ,A68_INT ,void *));
typedef struct A68t298  A68_298 ;    /* PROC(REF MODE100,MODE98,INT) BOOL */

A_PROCEDURE(A68_VOID ,A68t299,(struct A68t109 *,A68_VC *),(struct A68t109 *,A68_VC *,void *));
typedef struct A68t299  A68_299 ;    /* PROC(REF MODE109) MODE26 */
struct A68t300 { A68_INT mode; union {
struct A68t100 * mode1;
struct A68t97  mode2;
} data; };
typedef struct A68t300  A68_300 ;    /* UNION(REF MODE100,MODE97)  */

A_PROCEDURE(A68_VOID ,A68t301,(struct A68t109 *,struct A68t300 ,struct A68t92 ,A68_BOOL ),(struct A68t109 *,struct A68t300 ,struct A68t92 ,A68_BOOL ,void *));
typedef struct A68t301  A68_301 ;    /* PROC(REF MODE109,MODE300,MODE92,BOOL) VOID */

A_PROCEDURE(A68_VOID ,A68t302,(struct A68t109 *,A68_VC ),(struct A68t109 *,A68_VC ,void *));
typedef struct A68t302  A68_302 ;    /* PROC(REF MODE109,MODE26) VOID */

A_PROCEDURE(struct A68t109 *,A68t303,(A68_VC ,A68_VC ,struct A68t102 *,A68_BOOL ,A68_BOOL ),(A68_VC ,A68_VC ,struct A68t102 *,A68_BOOL ,A68_BOOL ,void *));
typedef struct A68t303  A68_303 ;    /* PROC(MODE26,MODE26,REF MODE102,BOOL,BOOL) REF MODE109 */

A_PROCEDURE(A68_VOID ,A68t304,(struct A68t102 *,A68_VC ,A68_BOOL ,struct A68t109 *),(struct A68t102 *,A68_VC ,A68_BOOL ,struct A68t109 *,void *));
typedef struct A68t304  A68_304 ;    /* PROC(REF MODE102,MODE26,BOOL) MODE109 */

A_PROCEDURE(A68_VOID ,A68t305,(A68_BOOL ,struct A68t46 *),(A68_BOOL ,struct A68t46 *,void *));
typedef struct A68t305  A68_305 ;    /* PROC(BOOL) MODE46 */
#define A68_306  A68_VC 
#define A68t306 A68t26            /* FLEX VECTOR [] CHAR */
#define A68_307  A68_46 
#define A68t307 A68t46            /* FLEX VECTOR [] MODE306 */

A_PROCEDURE(A68_VOID ,A68t308,(struct A68t102 *,A68_BOOL ,struct A68t109 *),(struct A68t102 *,A68_BOOL ,struct A68t109 *,void *));
typedef struct A68t308  A68_308 ;    /* PROC(REF MODE102,BOOL) MODE109 */
A_ISTRUCT(A68_CHAR ,24,A68t309);
typedef struct A68t309  A68_309 ;    /* STRUCT 24 CHAR */

A_PROCEDURE(A68_VOID ,A68t310,(struct A68t102 *,struct A68t102 *,struct A68t92 ),(struct A68t102 *,struct A68t102 *,struct A68t92 ,void *));
typedef struct A68t310  A68_310 ;    /* PROC(REF MODE102,REF MODE102,MODE92) VOID */

A_PROCEDURE(A68_VOID ,A68t311,(struct A68t109 *,struct A68t100 *,struct A68t100 *,struct A68t115 *,struct A68t99 ,struct A68t97 ),(struct A68t109 *,struct A68t100 *,struct A68t100 *,struct A68t115 *,struct A68t99 ,struct A68t97 ,void *));
typedef struct A68t311  A68_311 ;    /* PROC(REF MODE109,REF MODE100,REF MODE100,REF MODE115,MODE99,MODE97) VOID */
A_ISTRUCT(A68_CHAR ,45,A68t312);
typedef struct A68t312  A68_312 ;    /* STRUCT 45 CHAR */
struct A68t313 { A68_INT mode; union {
struct A68t97 * mode1;
struct A68t99 * mode2;
} data; };
typedef struct A68t313  A68_313 ;    /* UNION(REF MODE97,REF MODE99)  */

A_PROCEDURE(A68_VOID ,A68t314,(struct A68t100 *,struct A68t99 ,struct A68t313 ),(struct A68t100 *,struct A68t99 ,struct A68t313 ,void *));
typedef struct A68t314  A68_314 ;    /* PROC(REF MODE100,MODE99,MODE313) VOID */

A_PROCEDURE(A68_VOID ,A68t315,(struct A68t109 *,struct A68t121 *,struct A68t99 ,struct A68t99 *),(struct A68t109 *,struct A68t121 *,struct A68t99 ,struct A68t99 *,void *));
typedef struct A68t315  A68_315 ;    /* PROC(REF MODE109,REF MODE121,MODE99) MODE99 */

A_PROCEDURE(A68_BOOL ,A68t316,(struct A68t109 *,struct A68t100 *,struct A68t121 *,struct A68t97 *),(struct A68t109 *,struct A68t100 *,struct A68t121 *,struct A68t97 *,void *));
typedef struct A68t316  A68_316 ;    /* PROC(REF MODE109,REF MODE100,REF MODE121,REF MODE97) BOOL */

A_PROCEDURE(A68_VOID ,A68t317,(struct A68t109 *,struct A68t100 *,struct A68t100 *,struct A68t121 *,struct A68t97 *,struct A68t97 *),(struct A68t109 *,struct A68t100 *,struct A68t100 *,struct A68t121 *,struct A68t97 *,struct A68t97 *,void *));
typedef struct A68t317  A68_317 ;    /* PROC(REF MODE109,REF MODE100,REF MODE100,REF MODE121,REF MODE97) MODE97 */

A_PROCEDURE(A68_VOID ,A68t318,(struct A68t109 *,struct A68t100 *,struct A68t97 ,struct A68t121 *,struct A68t54 ),(struct A68t109 *,struct A68t100 *,struct A68t97 ,struct A68t121 *,struct A68t54 ,void *));
typedef struct A68t318  A68_318 ;    /* PROC(REF MODE109,REF MODE100,MODE97,REF MODE121,REF MODE54) VOID */

A_PROCEDURE(A68_VOID ,A68t319,(struct A68t107 **,A68_VC ),(struct A68t107 **,A68_VC ,void *));
typedef struct A68t319  A68_319 ;    /* PROC(REF REF MODE107,MODE26) VOID */
A_ISTRUCT(struct A68t52 ,4,A68t320);
typedef struct A68t320  A68_320 ;    /* STRUCT 4 MODE52 */
A_ISTRUCT(A68_CHAR ,37,A68t321);
typedef struct A68t321  A68_321 ;    /* STRUCT 37 CHAR */

A_PROCEDURE(A68_VOID ,A68t322,(struct A68t109 *,struct A68t92 ),(struct A68t109 *,struct A68t92 ,void *));
typedef struct A68t322  A68_322 ;    /* PROC(REF MODE109,MODE92) VOID */

A_PROCEDURE(A68_VOID ,A68t323,(struct A68t109 *,struct A68t97 ,struct A68t92 ),(struct A68t109 *,struct A68t97 ,struct A68t92 ,void *));
typedef struct A68t323  A68_323 ;    /* PROC(REF MODE109,MODE97,MODE92) VOID */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from su_keepsake_interface --- */
extern A68_VOID  YPBAOSI_file_name(struct A68t102 *,A68_VC *);
extern A68_VOID  XQBAOSI_close_file(struct A68t102 *,struct A68t92 );
extern A68_INT  ZOBAELA_file_block_size(struct A68t102 *);
extern A68_INT  HPBAELA_increase_db_file(struct A68t102 *,A68_INT ,struct A68t92 );
extern A68_127  ZNBAELA_end_file_block;
#define UMBAELA_pass_mask 237685011
#define SNBAELA_block_size 512
#define FDAAOST_word_size 32
extern A68_INT  WNBAELA_increase_increment;
#define BNBAELA_is_setup 0X8afe7913U
extern A68_VOID  GNBAELA_keepsake_msg(struct A68t93 ,struct A68t46 );
extern A68_VOID  QNBAELA_keepsake_fault(A68_VC );
extern A68_VOID  NKDAOST_sysfault(A68_VC );
extern A68_VOID  IOBAELA_get_block(struct A68t102 *,A68_VC ,A68_INT ,struct A68t92 );
extern A68_VOID  UOBAELA_put_block(struct A68t102 *,A68_VC ,A68_INT ,struct A68t92 );
#define SMBAELA_byte_size 8
#define EDAAOST_int_size 4
#define YMBAELA_hashtable_size 256
extern A68_LINT  WZBAOSI_get_time(void);
extern A68_34 * KEAAOST_screen;
#define ANBAELA_fixed_overhead 3
#define VNBAELA_max_buffer_size 16
extern A68_VOID  MQBAELA_clear_rvc(A68_VC );
extern A68_VOID  QQBAELA_clear_rvi(struct A68t32 );
extern A68_VOID  UQBAELA_clear_rvb(struct A68t54 );
extern A68_INT  IRBAELA_vctoi(A68_VC );
extern A68_VOID  VRBAELA_itovc(A68_INT ,A68_VC *);
extern A68_BOOL  QACAELA_(struct A68t99 ,struct A68t99 );
extern A68_BOOL  HACAELA_(struct A68t97 ,struct A68t97 );
#define JSBAELA_file_check 160234450
#define KSBAELA_out_of_date_file 34589012
#define QSBAELA_desc_version_size 2
extern A68_INT  TSBAELA_discptr_size;
#define ABCAELA_indirection_size TSBAELA_discptr_size
extern A68_INT  CCCAELA_block_heading_size;
extern A68_INT  RICAELA_actual_block_size;
extern A68_INT  CGCAELA_data_heading_size;
extern A68_INT  SICAELA_max_ints_in_block;
extern A68_INT  TICAELA_fixed_in_block;
extern A68_INT  OSBAELA_max_file_size;
extern A68_97  UACAELA_nilptr;
extern A68_VOID  ZTBAELA_make_dp(A68_BOOL ,A68_BOOL ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,struct A68t99 ,A68_97 *);
extern A68_VOID  IUBAELA_chars_to_dp(A68_VC ,A68_97 *);
extern A68_VOID  XVBAELA_dp_to_chars(struct A68t97 ,A68_VC *);
extern A68_VOID  JZBAELA_change_dp_address(struct A68t97 *,struct A68t99 );
extern A68_VOID  QZBAELA_overwrite_address(A68_VC ,A68_INT ,struct A68t99 );
extern A68_INT  DYBAELA_discptr_code(struct A68t97 );
extern A68_BOOL  GYBAELA_is_shaky(struct A68t97 );
extern A68_BOOL  JYBAELA_is_assignable(struct A68t97 );
extern A68_INT  MYBAELA_first_block(struct A68t97 );
extern A68_INT  PYBAELA_first_offset(struct A68t97 );
extern A68_INT  SYBAELA_data_elts(struct A68t97 );
extern A68_INT  VYBAELA_dp_elts(struct A68t97 );
extern A68_INT  YYBAELA_version(struct A68t97 );
extern A68_INT  BZBAELA_read_size(struct A68t97 );
extern A68_BITS  PTBAELA_sumcheck(struct A68t97 );
extern A68_BOOL  YACAELA_is_nildp(struct A68t97 );
extern A68_BOOL  FZBAELA_incorrect_sumcheck(struct A68t97 );
extern A68_99  LACAELA_niladdress;
extern A68_99  NACAELA_nilgcaddress;
extern A68_VOID  CBCAELA_make_indirection(A68_VC ,A68_98 *);
extern A68_VOID  KBCAELA_indir_to_chars(struct A68t98 ,A68_VC *);
extern A68_VOID  JCCAELA_make_block_heading(A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_INT ,A68_VC *);
extern A68_INT  ZDCAELA_block_code(A68_VC );
extern A68_INT  HECAELA_next_block(A68_VC );
extern A68_INT  PECAELA_block_data(A68_VC );
extern A68_INT  XECAELA_block_dps(A68_VC );
extern A68_INT  FFCAELA_data_start(A68_VC );
extern A68_INT  NFCAELA_bh_read_size(A68_VC );
extern A68_VOID  GGCAELA_make_data_heading(A68_INT ,A68_INT ,A68_INT ,A68_VC *);
extern A68_INT  MHCAELA_dh_code(A68_VC );
extern A68_INT  UHCAELA_data_in_block(A68_VC );
extern A68_INT  CICAELA_dps_in_block(A68_VC );
/* --- End of imports from su_keepsake_interface --- */


/* --- Imports from putstrings --- */
extern A68_VOID  CZAAOSL_spaces(A68_INT ,A68_63 *);
extern A68_VOID  LRAAOSL_newline(struct A68t34 *);
extern A68_VOID  GFBAOSL_put(struct A68t34 *,struct A68t85 );
extern A68_VOID  UJBAOSL_oneline(struct A68t85 ,A68_VC *);
/* --- End of imports from putstrings --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void LMBAELA(void);   /* su_keepsake_interface */
extern void MTAAOSL(void);   /* putstrings */
/* --- end of DECS initialisation functions --- */
static A68_152   NUDAELA = {"$Id: su_keepsake.a68,v 34.2 1995/03/29 13:03:33 ella Exp $"}; 
A_GISVEC(A68_VC ,OUDAELA,NUDAELA,58)
A68_109 * PUDAELA_nildb;
A68_100 * QUDAELA_nilfile;
#define RUDAELA_nildplist (A68_108 *)A68_NIL
#define SUDAELA_nilblocklist (A68_107 *)A68_NIL
static A68_106  XUDAELA_nilindirs;
static A68_32  DVDAELA_nilpagetable;
static A68_VC  JVDAELA_nodata;
static A68_101  PVDAELA_nodps;
static A68_32  VVDAELA_noints;
static A68_54  BWDAELA_nowanted;
#define DWDAELA_nilgcdata (A68_121 *)A68_NIL
#define EWDAELA_nildisc_address (A68_113 *)A68_NIL
#define FWDAELA_nilold_and_new (A68_114 *)A68_NIL
#define GWDAELA_nildpstack (A68_118 *)A68_NIL
#define HWDAELA_nilshakydata (A68_120 *)A68_NIL
#define IWDAELA_niltraced (A68_104 *)A68_NIL
#define JWDAELA_nilvarlist (A68_105 *)A68_NIL
#define WWDAELA_charsdps 1
#define XWDAELA_ints 2
#define YWDAELA_chars 3
#define ZWDAELA_discptrs 4
#define AXDAELA_overwriteable 5
#define BXDAELA_indirs 6
#define CXDAELA_freelist_ints 7
#define DXDAELA_pagetable_ints 8
#define EXDAELA_forgery 9
static A68_156   HXDAELA = {"charsdps"}; 
A_GISVEC(A68_VC ,JXDAELA,HXDAELA,8)
static A68_157   KXDAELA = {"ints"}; 
A_GISVEC(A68_VC ,LXDAELA,KXDAELA,4)
static A68_158   MXDAELA = {"chars"}; 
A_GISVEC(A68_VC ,NXDAELA,MXDAELA,5)
static A68_156   OXDAELA = {"discptrs"}; 
A_GISVEC(A68_VC ,PXDAELA,OXDAELA,8)
static A68_159   QXDAELA = {"overwriteable"}; 
A_GISVEC(A68_VC ,RXDAELA,QXDAELA,13)
static A68_160   SXDAELA = {"indirs"}; 
A_GISVEC(A68_VC ,TXDAELA,SXDAELA,6)
static A68_159   UXDAELA = {"freelist_ints"}; 
A_GISVEC(A68_VC ,VXDAELA,UXDAELA,13)
static A68_161   WXDAELA = {"pagetable_ints"}; 
A_GISVEC(A68_VC ,XXDAELA,WXDAELA,14)
#define BYDAELA_assignable A68_TRUE
#define CYDAELA_not_assignable A68_FALSE
#define DYDAELA_shaky A68_TRUE
#define EYDAELA_not_shaky A68_FALSE
#define FYDAELA_no_indirection 0
static A68_156   JAEAELA = {"Nilptr ?"}; 
A_GISVEC(A68_VC ,LAEAELA,JAEAELA,8)
static A68_156   MAEAELA = {"Charsdps"}; 
A_GISVEC(A68_VC ,NAEAELA,MAEAELA,8)
static A68_157   OAEAELA = {"Ints"}; 
A_GISVEC(A68_VC ,PAEAELA,OAEAELA,4)
static A68_158   QAEAELA = {"Chars"}; 
A_GISVEC(A68_VC ,RAEAELA,QAEAELA,5)
static A68_156   SAEAELA = {"Discptrs"}; 
A_GISVEC(A68_VC ,TAEAELA,SAEAELA,8)
static A68_159   UAEAELA = {"Overwriteable"}; 
A_GISVEC(A68_VC ,VAEAELA,UAEAELA,13)
static A68_160   WAEAELA = {"Indirs"}; 
A_GISVEC(A68_VC ,XAEAELA,WAEAELA,6)
static A68_159   YAEAELA = {"Freelist_ints"}; 
A_GISVEC(A68_VC ,ZAEAELA,YAEAELA,13)
static A68_161   ABEAELA = {"Pagetable_ints"}; 
A_GISVEC(A68_VC ,BBEAELA,ABEAELA,14)
static A68_170   CBEAELA = {"Forgery"}; 
A_GISVEC(A68_VC ,DBEAELA,CBEAELA,7)
static A68_171   FBEAELA = {"??"}; 
A_GISVEC(A68_VC ,GBEAELA,FBEAELA,2)
static A68_158   OBEAELA = {"Code "}; 
A_GISVEC(A68_VC ,PBEAELA,OBEAELA,5)
static A68_171   UBEAELA = {" ("}; 
A_GISVEC(A68_VC ,VBEAELA,UBEAELA,2)
static A68_173   ACEAELA = {")  "}; 
A_GISVEC(A68_VC ,BCEAELA,ACEAELA,3)
static A68_160   ICEAELA = {"  Add "}; 
A_GISVEC(A68_VC ,JCEAELA,ICEAELA,6)
static A68_160   OCEAELA = {"  Off "}; 
A_GISVEC(A68_VC ,PCEAELA,OCEAELA,6)
static A68_156   UCEAELA = {"  Datsz "}; 
A_GISVEC(A68_VC ,VCEAELA,UCEAELA,8)
static A68_170   ADEAELA = {"  Dpsz "}; 
A_GISVEC(A68_VC ,BDEAELA,ADEAELA,7)
static A68_157   GDEAELA = {"  V "}; 
A_GISVEC(A68_VC ,HDEAELA,GDEAELA,4)
static A68_160   MDEAELA = {"  Rsz "}; 
A_GISVEC(A68_VC ,NDEAELA,MDEAELA,6)
static A68_158   SDEAELA = {"  Cs "}; 
A_GISVEC(A68_VC ,TDEAELA,SDEAELA,5)
static A68_171   YDEAELA = {" ("}; 
A_GISVEC(A68_VC ,ZDEAELA,YDEAELA,2)
static A68_177   QEEAELA = {"you are trying to use an unopened file"}; 
A_GISVEC(A68_VC ,REEAELA,QEEAELA,38)
static A68_179   UEEAELA = {"you are using an unset database"}; 
A_GISVEC(A68_VC ,VEEAELA,UEEAELA,31)
static A68_177   ZEEAELA = {"you are trying to use a forged discptr"}; 
A_GISVEC(A68_VC ,AFEAELA,ZEEAELA,38)
static A68_181   EFEAELA = {"you are trying to write a forged discptr"}; 
A_GISVEC(A68_VC ,FFEAELA,EFEAELA,40)
static A68_186   RGEAELA = {"you are trying to use a nilptr"}; 
A_GISVEC(A68_VC ,SGEAELA,RGEAELA,30)
static A68_187   EHEAELA = {"you are trying to use a garbage collected nilptr"}; 
A_GISVEC(A68_VC ,FHEAELA,EHEAELA,48)
static A68_152   NJEAELA = {"you should be calling either 'num_discptrs' or 'num_chars'"}; 
A_GISVEC(A68_VC ,OJEAELA,NJEAELA,58)
static A68_194   PKEAELA = {"file was created using an old version of MADAM"}; 
A_GISVEC(A68_VC ,QKEAELA,PKEAELA,46)
static A68_195   RKEAELA = {"database has not been initialised"}; 
A_GISVEC(A68_VC ,SKEAELA,RKEAELA,33)
#define CNEAELA_code 0
#define DNEAELA_data_elts 0
#define ENEAELA_dp_elts 0
#define FNEAELA_read_size 0
#define GNEAELA_indirection 0
static A68_204   RREAELA = {"file not open for writing"}; 
A_GISVEC(A68_VC ,SREAELA,RREAELA,25)
static A68_205   TREAELA = {"you are trying to assign to a non-assignable discptr"}; 
A_GISVEC(A68_VC ,UREAELA,TREAELA,52)
static A68_187   VREAELA = {"you cannot assign to a discptr being appended to"}; 
A_GISVEC(A68_VC ,WREAELA,VREAELA,48)
static A68_204   MSEAELA = {"pointer is not assignable"}; 
A_GISVEC(A68_VC ,NSEAELA,MSEAELA,25)
static A68_158   FVEAELA = {"file "}; 
static A68_213   GVEAELA = {" not opened for writing"}; 
A_GISVEC(A68_VC ,HVEAELA,GVEAELA,23)
A_GISVEC(A68_VC ,IVEAELA,FVEAELA,5)
static A68_216   JWEAELA = {" expected, not "}; 
A_GISVEC(A68_VC ,LWEAELA,JWEAELA,15)
static A68_179   PWEAELA = {"data buffer is not correct size"}; 
A_GISVEC(A68_VC ,QWEAELA,PWEAELA,31)
static A68_217   RWEAELA = {"discptr buffer is not correct size"}; 
A_GISVEC(A68_VC ,SWEAELA,RWEAELA,34)
static A68_218   AYEAELA = {"forgery read from disc"}; 
A_GISVEC(A68_VC ,BYEAELA,AYEAELA,22)
static A68_216   CYEAELA = {" expected, not "}; 
A_GISVEC(A68_VC ,EYEAELA,CYEAELA,15)
static A68_218   NYEAELA = {"forgery read from disc"}; 
A_GISVEC(A68_VC ,OYEAELA,NYEAELA,22)
static A68_216   PYEAELA = {" expected, not "}; 
A_GISVEC(A68_VC ,RYEAELA,PYEAELA,15)
static A68_205   MBFAELA = {"discptr does not point to overwriteable area of disc"}; 
A_GISVEC(A68_VC ,NBFAELA,MBFAELA,52)
static A68_224   PBFAELA = {"buffer is too small"}; 
A_GISVEC(A68_VC ,QBFAELA,PBFAELA,19)
static A68_229   FEFAELA = {"no more space on disc - use increase or garbage collect"}; 
A_GISVEC(A68_VC ,GEFAELA,FEFAELA,55)
#define XGFAELA_overwriteable A68_FALSE
static A68_240   MLFAELA = {" not allowed whilst appending"}; 
A_GISVEC(A68_VC ,NLFAELA,MLFAELA,29)
static A68_246   YQFAELA = {"write_ints"}; 
A_GISVEC(A68_VC ,ZQFAELA,YQFAELA,10)
static A68_248   HRFAELA = {"write_chars"}; 
A_GISVEC(A68_VC ,IRFAELA,HRFAELA,11)
static A68_216   RRFAELA = {"write_chars_dps"}; 
A_GISVEC(A68_VC ,SRFAELA,RRFAELA,15)
static A68_161   ASFAELA = {"write_discptrs"}; 
A_GISVEC(A68_VC ,BSFAELA,ASFAELA,14)
static A68_252   ISFAELA = {"write_indirs"}; 
A_GISVEC(A68_VC ,JSFAELA,ISFAELA,12)
static A68_216   ETFAELA = {"write_pagetable"}; 
A_GISVEC(A68_VC ,FTFAELA,ETFAELA,15)
static A68_161   NTFAELA = {"write_freelist"}; 
A_GISVEC(A68_VC ,OTFAELA,NTFAELA,14)
static A68_252   XTFAELA = {"start_append"}; 
A_GISVEC(A68_VC ,YTFAELA,XTFAELA,12)
static A68_258   QWFAELA = {"data will not fit into overwriteable disc space"}; 
A_GISVEC(A68_VC ,RWFAELA,QWFAELA,47)
static A68_259   SWFAELA = {"data cannot be written away as one atomic operation"}; 
A_GISVEC(A68_VC ,TWFAELA,SWFAELA,51)
#define LXFAELA_overwriteable A68_FALSE
static A68_265   TZFAELA = {"make_overwriteable"}; 
A_GISVEC(A68_VC ,UZFAELA,TZFAELA,18)
static A68_266   CAGAELA = {"not enough contiguous space on disc - use increase or garbage collect"}; 
A_GISVEC(A68_VC ,DAGAELA,CAGAELA,69)
#define MAGAELA_dp_elts 0
#define NAGAELA_data_code AXDAELA_overwriteable
static A68_269   OBGAELA = {"attempt to increase past file limits"}; 
A_GISVEC(A68_VC ,PBGAELA,OBGAELA,36)
static A68_270   QBGAELA = {"attempt to decrease size of file"}; 
A_GISVEC(A68_VC ,RBGAELA,QBGAELA,32)
#define OHGAELA_freelist A68_TRUE
static A68_290   OXGAELA = {"trying to add forgery in garbage collector"}; 
A_GISVEC(A68_VC ,PXGAELA,OXGAELA,42)
static A68_270   PYGAELA = {"trying to trace a forged discptr"}; 
A_GISVEC(A68_VC ,QYGAELA,PYGAELA,32)
#define CZGAELA_nodps A68_TRUE
#define BAHAELA_nodps A68_TRUE
#define SBHAELA_nodps A68_FALSE
static A68_295   ECHAELA = {" hashtable size "}; 
A_GISVEC(A68_VC ,FCHAELA,ECHAELA,16)
static A68_158   KCHAELA = {" max "}; 
A_GISVEC(A68_VC ,LCHAELA,KCHAELA,5)
static A68_158   PCHAELA = {" min "}; 
A_GISVEC(A68_VC ,QCHAELA,PCHAELA,5)
static A68_158   WCHAELA = {"avge "}; 
A_GISVEC(A68_VC ,XCHAELA,WCHAELA,5)
static A68_216   BDHAELA = {" disc accesses "}; 
A_GISVEC(A68_VC ,CDHAELA,BDHAELA,15)
static A68_295   HDHAELA = {" max stack size "}; 
A_GISVEC(A68_VC ,IDHAELA,HDHAELA,16)
static A68_248   NDHAELA = {" data_ptrs "}; 
A_GISVEC(A68_VC ,ODHAELA,NDHAELA,11)
static A68_265   REHAELA = {"garbage_collection"}; 
A_GISVEC(A68_VC ,SEHAELA,REHAELA,18)
#define TEHAELA_noncompactor A68_FALSE
#define UEHAELA_check A68_FALSE
#define NFHAELA_nodps A68_TRUE
static A68_160   MMHAELA = {"finish"}; 
A_GISVEC(A68_VC ,NMHAELA,MMHAELA,6)
#define WWHAELA_last_update_failed A68_TRUE
static A68_309   VXHAELA = {"File not opened to write"}; 
A_GISVEC(A68_VC ,WXHAELA,VXHAELA,24)
static A68_312   YYHAELA = {"error in add_new_address in garbage collector"}; 
A_GISVEC(A68_VC ,ZYHAELA,YYHAELA,45)
static A68_312   FZHAELA = {"error in add_new_address in garbage collector"}; 
A_GISVEC(A68_VC ,GZHAELA,FZHAELA,45)
static A68_270   RBIAELA = {"trying to trace a forged discptr"}; 
A_GISVEC(A68_VC ,SBIAELA,RBIAELA,32)
static A68_312   UGIAELA = {"error in code in compacting garbage collector"}; 
A_GISVEC(A68_VC ,VGIAELA,UGIAELA,45)
#define ZGIAELA_writeable A68_TRUE
#define AHIAELA_compactor A68_TRUE
#define BHIAELA_check A68_FALSE
static A68_179   GHIAELA = {"New data base is not big enough"}; 
A_GISVEC(A68_VC ,HHIAELA,GHIAELA,31)
#define BKIAELA_close_files A68_TRUE
static A68_270   RMIAELA = {"trying to trace a forged discptr"}; 
A_GISVEC(A68_VC ,SMIAELA,RMIAELA,32)
static A68_218   KRIAELA = {"error in code in trace"}; 
A_GISVEC(A68_VC ,LRIAELA,KRIAELA,22)
static A68_171   FSIAELA = {".."}; 
A_GISVEC(A68_VC ,GSIAELA,FSIAELA,2)
#define OSIAELA_compactor A68_TRUE
#define PSIAELA_check A68_TRUE
static A68_248   QUIAELA = {"database ok"}; 
A_GISVEC(A68_VC ,RUIAELA,QUIAELA,11)
static A68_309   YUIAELA = {"database inconsistency -"}; 
A_GISVEC(A68_VC ,ZUIAELA,YUIAELA,24)
static A68_321   FVIAELA = {"blocks in both freelist and database:"}; 
A_GISVEC(A68_VC ,GVIAELA,FVIAELA,37)
static A68_181   HVIAELA = {"blocks in neither freelist nor database:"}; 
A_GISVEC(A68_VC ,IVIAELA,HVIAELA,40)
#define XVIAELA_close_file A68_FALSE
#define FWIAELA_close_file A68_TRUE
#define JWIAELA_close_file A68_FALSE
typedef struct   /* env of non-global proc */
{
A68_VC  S;
} PWDAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  HZDAELA_upb;
A_PAD_INT(PAD_57)
} LZDAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_97  Dp;
} IAEAELA_sort;
typedef struct   /* env of non-global proc */
{
A68_VC  A;
A68_VC  B;
} TFEAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  GMEAELA_upb;
A_PAD_INT(PAD_58)
} KMEAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} TNEAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} MOEAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_100 * FOEAELA_df;
} QPEAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} RQEAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} ZQEAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} XSEAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  JUEAELA_buffer_size;
A_PAD_INT(PAD_59)
} NUEAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} AXEAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} LXEAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_106  Indirections;
} LCFAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  TDFAELA_new_size;
A_PAD_INT(PAD_60)
} XDFAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_109 * Db;
A68_100 * Df;
A68_97  IEFAELA_next_ptr;
} MEFAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_VC  Name;
} BFFAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  SFFAELA_old_upb;
A_PAD_INT(PAD_61)
} XFFAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} ZHFAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  VHFAELA_upb;
A_PAD_INT(PAD_62)
} IIFAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} KMFAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} AOFAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_106  Data;
} NSFAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  MVFAELA_ndp;
A_PAD_INT(PAD_63)
A68_INT  NVFAELA_old_size;
A_PAD_INT(PAD_64)
} RVFAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_100 * Df;
} RXFAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * Free_space;
A68_INT * Freelist_index;
A68_32 * UXFAELA_freelist;
A68_INT * Block_ptr;
A68_101  NXFAELA_free_block_dps;
A68_100 * Df;
A68_109 * Db;
} ZXFAELA_read_next_free;
typedef struct   /* env of non-global proc */
{
A68_INT  HBGAELA_actual_by;
A_PAD_INT(PAD_66)
} ZBGAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  JCGAELA_upb_temp;
A_PAD_INT(PAD_67)
A68_INT  HBGAELA_actual_by;
A_PAD_INT(PAD_68)
} NCGAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  HBGAELA_actual_by;
A_PAD_INT(PAD_69)
} DDGAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  PDGAELA_upb_temp;
A_PAD_INT(PAD_70)
A68_INT  HBGAELA_actual_by;
A_PAD_INT(PAD_71)
} TDGAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  YEGAELA_size_diff;
A_PAD_INT(PAD_72)
} CFGAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  YEGAELA_size_diff;
A_PAD_INT(PAD_73)
} NFGAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_106  AHGAELA_indirs;
A68_INT  BHGAELA_indirs_in_fixed;
A_PAD_INT(PAD_75)
} GHGAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  WHGAELA_freelist_size;
A_PAD_INT(PAD_76)
} AIGAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  IIGAELA_size;
A_PAD_INT(PAD_77)
} MIGAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} AJGAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  FJGAELA_file_size;
A_PAD_INT(PAD_78)
} JJGAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} AKGAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_100 * WNGAELA_df;
} BOGAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} UOGAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} CPGAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} NPGAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} CQGAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} KQGAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  PQGAELA_upb_wanted;
A_PAD_INT(PAD_79)
} TQGAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} FRGAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} QRGAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} ASGAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_100 * WNGAELA_df;
} QSGAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} UWGAELA_trace_data;
typedef struct   /* env of non-global proc */
{
int dummy;
} IXGAELA_add_to_stack;
typedef struct   /* env of non-global proc */
{
A68_289  GXGAELA_add_to_stack;
A68_291 * IYGAELA_trace;
A68_288  SWGAELA_trace_data;
} OYGAELA_add_or_trace;
typedef struct   /* env of non-global proc */
{
A68_288  SWGAELA_trace_data;
A68_292  MYGAELA_add_or_trace;
} JZGAELA_discptr_trace;
typedef struct   /* env of non-global proc */
{
A68_293  HZGAELA_discptr_trace;
A68_288  SWGAELA_trace_data;
} IAHAELA_anonymous;
typedef struct   /* env of non-global proc */
{
int dummy;
} GGHAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} OGHAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} MHHAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * TGHAELA_count;
} BIHAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} OIHAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} BOHAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} TQHAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} BRHAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  IOHAELA_indirs_in_fixed_block;
A_PAD_INT(PAD_80)
} TRHAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  IOHAELA_indirs_in_fixed_block;
A_PAD_INT(PAD_81)
A68_INT * PRHAELA_indirs_not_in_fixed;
} BSHAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_INT * PRHAELA_indirs_not_in_fixed;
} OSHAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_109 * PNHAELA_db;
A68_100 * NRHAELA_df;
} DTHAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_109 * PNHAELA_db;
A68_100 * NRHAELA_df;
A68_97  NTHAELA_cptr;
} RTHAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  DUHAELA_size;
A_PAD_INT(PAD_82)
} HUHAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_109 * PNHAELA_db;
A68_100 * NRHAELA_df;
A68_97  QUHAELA_cptr;
} UUHAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_109 * PNHAELA_db;
A68_100 * NRHAELA_df;
} EVHAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} TVHAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} OAIAELA_already_found;
typedef struct   /* env of non-global proc */
{
A68_316  MAIAELA_already_found;
A68_317  LBIAELA_compactor_trace;
} NBIAELA_compactor_trace;
typedef struct   /* env of non-global proc */
{
A68_106  RHIAELA_old_inds;
} VHIAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} JIIAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} XIIAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} OLIAELA_already_found;
typedef struct   /* env of non-global proc */
{
A68_316  MLIAELA_already_found;
A68_318  LMIAELA_trace;
} NMIAELA_trace;
typedef struct   /* env of non-global proc */
{
A68_100 * RSIAELA_df;
} WSIAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_100 * RSIAELA_df;
} HTIAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  AYFAELA_upb_ext;
A_PAD_INT(PAD_65)
} EYFAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_109 * Db;
A68_100 * Df;
A68_97  NYFAELA_next_ptr;
} RYFAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  MGGAELA_upb;
A_PAD_INT(PAD_74)
} QGGAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} VAHAELA_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} ZVHAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_109 * Db;
A68_100 * Old_df;
A68_97 * Dp;
} JCIAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_109 * Db;
A68_100 * Old_df;
A68_97 * Dp;
} RCIAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_101  UCIAELA_ptr_array;
} ADIAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_109 * Db;
A68_100 * Old_df;
A68_97 * Dp;
} VDIAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_109 * Db;
A68_100 * Old_df;
A68_97 * Dp;
} IEIAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_109 * Db;
A68_100 * Old_df;
A68_97 * Dp;
} VEIAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_101  YEIAELA_dp_array;
} EFIAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_109 * Db;
A68_100 * Old_df;
A68_97 * Dp;
} YFIAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  GGIAELA_num_inds;
A_PAD_INT(PAD_83)
} KGIAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_109 * Db;
A68_100 * Old_df;
A68_97  Dp;
} JNIAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_109 * Db;
A68_100 * Old_df;
A68_97  Dp;
} RNIAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_101  UNIAELA_ptr_array;
} AOIAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_109 * Db;
A68_100 * Old_df;
A68_97  Dp;
} OOIAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_109 * Db;
A68_100 * Old_df;
A68_97  Dp;
} XOIAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_109 * Db;
A68_100 * Old_df;
A68_97  Dp;
} GPIAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_101  JPIAELA_dp_array;
} PPIAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_109 * Db;
A68_100 * Old_df;
A68_97  Dp;
} DQIAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_INT  IQIAELA_num_inds;
A_PAD_INT(PAD_84)
} MQIAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_109 * Db;
A68_100 * Old_df;
A68_97  Dp;
} VQIAELA_generator;
typedef struct   /* env of non-global proc */
{
A68_109 * Db;
A68_100 * Old_df;
A68_97  Dp;
} ERIAELA_generator;

A_STATIC A68_VOID  UUDAELA_generator(A68_BOOL  TUDAELA_anonymous, A68_106  *ReturnedValue);

A_STATIC A68_VOID  AVDAELA_generator(A68_BOOL  ZUDAELA_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_VOID  GVDAELA_generator(A68_BOOL  FVDAELA_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  MVDAELA_generator(A68_BOOL  LVDAELA_anonymous, A68_101  *ReturnedValue);

A_STATIC A68_VOID  SVDAELA_generator(A68_BOOL  RVDAELA_anonymous, A68_32  *ReturnedValue);

A_STATIC A68_VOID  YVDAELA_generator(A68_BOOL  XVDAELA_anonymous, A68_54  *ReturnedValue);

A_STATIC A68_VOID  LWDAELA_makervc(A68_VC  S, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  OWDAELA_generator(A68_BOOL  MWDAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  VWDAELA_nilfault(A68_VC  S);

A_STATIC A68_VOID  GXDAELA_type_name(A68_INT  N, A68_VC  *ReturnedValue);

A_STATIC A68_INT  ZXDAELA_data_size(A68_INT  N);

A_STATIC A68_INT  IYDAELA_min(A68_INT  A, A68_INT  B);

A_STATIC A68_BOOL  MYDAELA_(A68_99  A, A68_99  B);

A_STATIC A68_INT  RYDAELA_address_rep(A68_99  Addr);

A_STATIC A68_BOOL  UYDAELA_is_nilindir(A68_98  Ind);

A_STATIC A68_BOOL  YYDAELA_is_gcnilindir(A68_98  Ind);

A_STATIC A68_BOOL  CZDAELA_(A68_98  A, A68_98  B);

A_STATIC A68_VOID  GZDAELA_name_to_uc(A68_VC  Name, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  KZDAELA_generator(A68_BOOL  IZDAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ZZDAELA_fetch_ind(A68_100 * Df, A68_97  Dp, A68_98  *ReturnedValue);

A_STATIC A68_VOID  EAEAELA_print_dp(A68_97  Dp);

A_STATIC A68_VOID  HAEAELA_sort(A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_BOOL  LEEAELA_is_forgery(A68_109 * Db, A68_97  Dp);

A_STATIC A68_VOID  PEEAELA_check_nilfile(A68_100 * Df);

A_STATIC A68_VOID  TEEAELA_check_valid_db(A68_109 * Db);

A_STATIC A68_VOID  YEEAELA_check_forgery_use(A68_109 * Db, A68_97  Dp);

A_STATIC A68_VOID  DFEAELA_check_forgery_write(A68_109 * Db, A68_97  Dp);

A_STATIC A68_BOOL  IFEAELA_(A68_32  A, A68_32  B);

A_STATIC A68_VOID  PFEAELA_(A68_VC  A, A68_VC  B, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  SFEAELA_generator(A68_BOOL  QFEAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_BOOL  FGEAELA_is_nilvar(A68_100 * Df, A68_97  Dp);

A_STATIC A68_BOOL  KGEAELA_is_nilptr(A68_100 * Df, A68_97  Dp);

A_STATIC A68_VOID  QGEAELA_check_nilptr(A68_100 * Df, A68_97  Dp);

A_STATIC A68_BOOL  VGEAELA_is_gc_nil(A68_100 * Df, A68_97  Dp);

A_STATIC A68_VOID  DHEAELA_check_gc_nil(A68_100 * Df, A68_97  Dp);

A_STATIC A68_VOID  IHEAELA_get_disc_address(A68_100 * Df, A68_97  Dp, A68_99  *ReturnedValue);

A68_102 * QHEAELA_keepsake_file(A68_109 * Db);

A68_BOOL  WHEAELA_same_data(A68_109 * Db, A68_97  A, A68_97  B);

A68_BOOL  GIEAELA_same_discptr(A68_109 * Db, A68_97  A, A68_97  B);

A_STATIC A68_INT  LIEAELA_data_array_size(A68_109 * Db, A68_100 * Df, A68_97  Dp);

A68_INT  RIEAELA_num_chars(A68_109 * Db, A68_97  Dp);

A_STATIC A68_INT  WIEAELA_dp_array_size(A68_109 * Db, A68_100 * Df, A68_97  Dp);

A68_INT  CJEAELA_num_discptrs(A68_109 * Db, A68_97  Dp);

A_STATIC A68_INT  HJEAELA_array_size(A68_109 * Db, A68_100 * Df, A68_97  Dp);

A68_INT  UJEAELA_size(A68_109 * Db, A68_97  Dp);

A68_INT  YJEAELA_discptr_type(A68_109 * Db, A68_97  Dp);

A68_INT  GKEAELA_discptr_data(A68_109 * Db, A68_97  Dp);

A_STATIC A68_VOID  NKEAELA_filetype_check(A68_INT  Fixed);

A_STATIC A68_BOOL  VKEAELA_compare(A68_VC  Buff1, A68_VC  Buff2);

A68_INT  BLEAELA_discfile_size(A68_109 * Db);

A68_INT  ELEAELA_size_of_free_space(A68_109 * Db);

A68_BOOL  HLEAELA_last_update_failed(A68_109 * Db);

A68_INT  KLEAELA_overhead(A68_109 * Db);

A_STATIC A68_INT  ULEAELA_create_indir(A68_100 * Df, A68_99 * Addr, A68_BOOL  Shaky, A68_INT  Data_elts, A68_INT  Dp_elts, A68_INT  Data_code, A68_INT  Read_size, A68_INT  Indirection);

A_STATIC A68_VOID  JMEAELA_generator(A68_BOOL  HMEAELA_anonymous, A68_106  *ReturnedValue, void *NonLocals);

A68_VOID  ZMEAELA_make_nilvar(A68_109 * Db, A68_97  *ReturnedValue);

A_STATIC A68_VOID  ONEAELA_setup_writebuffer(A68_INT  Generation, A68_103  *ReturnedValue);

A_STATIC A68_VOID  SNEAELA_generator(A68_BOOL  QNEAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_100 * EOEAELA_set_up(A68_109 * Db, A68_102 * File, A68_INT  Generation);

A_STATIC A68_VOID  LOEAELA_generator(A68_BOOL  JOEAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  PPEAELA_generator(A68_BOOL  NPEAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  QQEAELA_generator(A68_BOOL  OQEAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  YQEAELA_generator(A68_BOOL  WQEAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A68_VOID  PREAELA_assign_to_var(A68_109 * Db, A68_97  Old, A68_97  New);

A68_VOID  GSEAELA_var_to_ptr(A68_109 * Db, A68_97  Dp, A68_97  *ReturnedValue);

A_STATIC A68_VOID  OSEAELA_setup_readbuffer(A68_110  *ReturnedValue);

A_STATIC A68_VOID  WSEAELA_generator(A68_BOOL  USEAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_BOOL  FTEAELA_in_readbuffer(A68_110  Rb, A68_INT  Block_num);

A_STATIC A68_BOOL  KTEAELA_in_writebuffer(A68_100 * Df, A68_INT  Block_num);

A_STATIC A68_BOOL  UTEAELA_read_block(A68_109 * Db, A68_100 * Df, A68_110 * Read_buffer, A68_VC  Block_buffer, A68_INT  Read_size, A68_INT  Block_num);

A_STATIC A68_VOID  MUEAELA_generator(A68_BOOL  KUEAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_BOOL  ZUEAELA_is_file_writeable(A68_100 * Df);

A_STATIC A68_VOID  EVEAELA_check_file_writeable(A68_109 * Db, A68_100 * Df);

A_STATIC A68_VOID  SVEAELA_read(A68_109 * Db, A68_100 * Df, A68_214  Data, A68_101  Dps, A68_54  Wanted, A68_INT  Code, A68_97  Dp);

A_STATIC A68_VOID  ZWEAELA_generator(A68_BOOL  XWEAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  KXEAELA_generator(A68_BOOL  IXEAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  WZEAELA_read_ints(A68_109 * Db, A68_32  Data, A68_97  Dp);

A68_VOID  CAFAELA_read_freelist(A68_109 * Db, A68_100 * Df, A68_32  Data, A68_97  Dp);

A68_VOID  IAFAELA_read_pagetable(A68_109 * Db, A68_100 * Df, A68_32  Data, A68_97  Dp);

A68_VOID  NAFAELA_read_chars(A68_109 * Db, A68_VC  Data, A68_97  Dp);

A68_VOID  TAFAELA_read_chars_dps(A68_109 * Db, A68_VC  Data, A68_101  Dps, A68_97  Dp);

A_STATIC A68_VOID  BBFAELA_read_vax_blocks(A68_109 * Db, A68_100 * Df, A68_INT  Block, A68_VC  Data, A68_54  Wanted, A68_97  Dp);

A68_VOID  DCFAELA_read_overwriteable(A68_109 * Db, A68_INT  Block, A68_VC  Data, A68_97  Dp);

A_STATIC A68_VOID  HCFAELA_read_indirections(A68_109 * Db, A68_106  Indirections, A68_97  Dp);

A_STATIC A68_VOID  KCFAELA_generator(A68_BOOL  ICFAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  ZCFAELA_read_discptrs(A68_109 * Db, A68_101  Data, A68_97  Dp);

A68_INT  DDFAELA_hash_val(A68_109 * Db, A68_97  Dp);

A_STATIC A68_INT  JDFAELA_get_free_block(A68_109 * Db, A68_100 * Df);

A_STATIC A68_VOID  WDFAELA_generator(A68_BOOL  UDFAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  LEFAELA_generator(A68_BOOL  JEFAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  XEFAELA_make_madam_name(A68_VC  Name, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  AFFAELA_generator(A68_BOOL  YEFAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  QFFAELA_add_chars(A68_VC * Old, A68_VC  New, A68_INT * Index);

A_STATIC A68_VOID  WFFAELA_generator(A68_BOOL  UFFAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_INT  KGFAELA_block_count(A68_INT  Data_size, A68_INT  Num_elts, A68_BOOL  Overwriteable, A68_INT * Cbufpos);

A_STATIC A68_INT  TGFAELA_no_of_blocks(A68_109 * Db, A68_INT * Cbufpos, A68_111  Data);

A68_BOOL  GHFAELA_can_write(A68_109 * Db, A68_VC  Chars, A68_101  Dps);

A68_BOOL  NHFAELA_can_write_ints(A68_109 * Db, A68_32  Ints);

A_STATIC A68_VOID  THFAELA_extend_dps(A68_101 * Dps, A68_97  New_dp);

A_STATIC A68_VOID  YHFAELA_generator(A68_BOOL  WHFAELA_anonymous, A68_101  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  HIFAELA_generator(A68_BOOL  FIFAELA_anonymous, A68_101  *ReturnedValue, void *NonLocals);

A68_VOID  SIFAELA_make_shaky(A68_109 * Db, A68_97  Dp, A68_97  *ReturnedValue);

A_STATIC A68_VOID  KJFAELA_flush_buffer(A68_109 * Db, A68_100 * Df);

A_STATIC A68_VOID  YJFAELA_add_to_list(A68_107 ** List, A68_INT  Lwb, A68_BOOL  Not_contiguous);

A_STATIC A68_VOID  FKFAELA_write_to_buffer(A68_109 * Db, A68_100 * Df);

A_STATIC A68_INT  BLFAELA_optimum_read_size(A68_103 * Wb, A68_INT  Current_free);

A_STATIC A68_VOID  LLFAELA_check_not_appending(A68_100 * Df, A68_VC  Operation);

A_STATIC A68_VOID  SLFAELA_add_gc_address(A68_104 ** Gc_ptrs, A68_99  Old, A68_99  New);

A_STATIC A68_VOID  ZLFAELA_write_dp_copies(A68_100 * Df, A68_103 * Wb, A68_99  Old, A68_99  New);

A_STATIC A68_VOID  JMFAELA_generator(A68_BOOL  HMFAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  CNFAELA_write(A68_109 * Db, A68_100 * Df, A68_243  Data, A68_101  Dps, A68_INT  Data_code, A68_INT  Upb_chars, A68_INT  Indirection, A68_BOOL  Assignable, A68_99  Old, A68_32  Deja_vus, A68_32  Pagetable, A68_97  *ReturnedValue);

A_STATIC A68_VOID  ZNFAELA_generator(A68_BOOL  XNFAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  XQFAELA_write_ints(A68_109 * Db, A68_32  Data, A68_BOOL  Assignable, A68_97  *ReturnedValue);

A68_VOID  GRFAELA_write_chars(A68_109 * Db, A68_VC  Data, A68_BOOL  Assignable, A68_97  *ReturnedValue);

A68_VOID  QRFAELA_write_chars_dps(A68_109 * Db, A68_VC  Data, A68_101  Dps, A68_BOOL  Assignable, A68_97  *ReturnedValue);

A68_VOID  ZRFAELA_write_discptrs(A68_109 * Db, A68_101  Data, A68_BOOL  Assignable, A68_97  *ReturnedValue);

A_STATIC A68_VOID  HSFAELA_write_indirs(A68_109 * Db, A68_106  Data, A68_97  *ReturnedValue);

A_STATIC A68_VOID  MSFAELA_generator(A68_BOOL  KSFAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  DTFAELA_write_pagetable(A68_109 * Db, A68_100 * Df, A68_32  Data, A68_97  *ReturnedValue);

A_STATIC A68_VOID  MTFAELA_write_freelist(A68_109 * Db, A68_100 * Df, A68_32  Data, A68_97  *ReturnedValue);

A68_VOID  VTFAELA_start_append(A68_109 * Db, A68_VC  Data, A68_BOOL  Assignable, A68_97  *ReturnedValue);

A68_VOID  KUFAELA_append(A68_109 * Db, A68_VC  Data, A68_97  Onto, A68_97  *ReturnedValue);

A68_VOID  PUFAELA_abort_append(A68_109 * Db);

A68_VOID  BVFAELA_finish_append(A68_109 * Db, A68_VC  Data, A68_101  Dps, A68_97  Onto, A68_97  *ReturnedValue);

A_STATIC A68_VOID  KVFAELA_freelist_to_disc(A68_109 * Db, A68_100 * Df, A68_32  Freelist);

A_STATIC A68_VOID  QVFAELA_generator(A68_BOOL  OVFAELA_anonymous, A68_101  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  OWFAELA_overwrite_blocks(A68_109 * Db, A68_100 * Df, A68_INT  Block, A68_VC  Data, A68_97  Dp);

A68_VOID  CXFAELA_overwrite(A68_109 * Db, A68_INT  Block, A68_VC  Data, A68_97  Dp);

A_STATIC A68_INT  JXFAELA_overwrite_test(A68_109 * Db, A68_100 * Df, A68_INT  Blocks, A68_INT * Block_ptr, A68_INT * Freelist_index, A68_INT * Free_space);

A_STATIC A68_VOID  QXFAELA_generator(A68_BOOL  OXFAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_INT  YXFAELA_read_next_free(void *NonLocals);

A_STATIC A68_VOID  DYFAELA_generator(A68_BOOL  BYFAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  QYFAELA_generator(A68_BOOL  OYFAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A68_BOOL  IZFAELA_can_overwrite(A68_109 * Db, A68_INT  Blocks);

A_STATIC A68_VOID  SZFAELA_mk_overwrite(A68_109 * Db, A68_100 * Df, A68_INT  Blocks, A68_INT  Indirection, A68_BOOL  Assignable, A68_97  *ReturnedValue);

A68_VOID  ZAGAELA_make_overwriteable(A68_109 * Db, A68_INT  Blocks, A68_BOOL  Assignable, A68_97  *ReturnedValue);

A_STATIC A68_VOID  GBGAELA_discfile_increase(A68_109 * Db, A68_100 * Df, A68_INT  By, A68_92  Msg);

A_STATIC A68_VOID  YBGAELA_generator(A68_BOOL  WBGAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  MCGAELA_generator(A68_BOOL  KCGAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  CDGAELA_generator(A68_BOOL  ADGAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  SDGAELA_generator(A68_BOOL  QDGAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A68_VOID  MEGAELA_increase(A68_109 * Db, A68_INT  By, A68_92  Msg);

A68_BOOL  PEGAELA_can_increase(A68_109 * Db, A68_INT  By);

A_STATIC A68_VOID  TEGAELA_test_and_increase(A68_109 * Db);

A_STATIC A68_VOID  BFGAELA_generator(A68_BOOL  ZEGAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  MFGAELA_generator(A68_BOOL  KFGAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A68_BOOL  BGGAELA_can_finish(A68_109 * Db);

A_STATIC A68_INT  HGGAELA_block_write(A68_109 * Db, A68_INT * Cbufpos, A68_BOOL  Freelist, A68_32  Ints);

A_STATIC A68_VOID  PGGAELA_generator(A68_BOOL  NGGAELA_anonymous, A68_101  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  FHGAELA_generator(A68_BOOL  DHGAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_BOOL  RHGAELA_can_commit(A68_109 * Db);

A_STATIC A68_VOID  VHGAELA_initialise(A68_109 * Db, A68_100 * Df);

A_STATIC A68_VOID  ZHGAELA_generator(A68_BOOL  XHGAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  LIGAELA_generator(A68_BOOL  JIGAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ZIGAELA_generator(A68_BOOL  XIGAELA_anonymous, A68_101  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  IJGAELA_generator(A68_BOOL  GJGAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ZJGAELA_generator(A68_BOOL  XJGAELA_anonymous, A68_101  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  MKGAELA_make_gcnil(A68_98 * Ind);

A_STATIC A68_INT  UKGAELA_hash_index(A68_INT  Address_rep);

A_STATIC A68_BOOL  BLGAELA_less_than(A68_INT  Block_num, A68_INT  Offset, A68_INT  Old_block, A68_INT  Old_offset);

A_STATIC A68_BOOL  ILGAELA_not_added_to_hashtable(A68_121 * Gcdata, A68_100 * Df, A68_275  Data);

A_STATIC A68_BOOL  ENGAELA_is_free(A68_VC  Wanted, A68_INT  Block_num);

A_STATIC A68_VOID  LNGAELA_set_indir_wanted(A68_121 * Gcdata, A68_INT  Index);

A_STATIC A68_121 * RNGAELA_initialise_gc(A68_109 * Db, A68_BOOL  Compactor, A68_BOOL  Check);

A_STATIC A68_VOID  AOGAELA_generator(A68_BOOL  YNGAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  TOGAELA_generator(A68_BOOL  ROGAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  BPGAELA_generator(A68_BOOL  ZOGAELA_anonymous, A68_117  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  MPGAELA_generator(A68_BOOL  KPGAELA_anonymous, A68_117  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  BQGAELA_generator(A68_BOOL  ZPGAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  JQGAELA_generator(A68_BOOL  HQGAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  SQGAELA_generator(A68_BOOL  QQGAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ERGAELA_generator(A68_BOOL  CRGAELA_anonymous, A68_116  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  PRGAELA_generator(A68_BOOL  NRGAELA_anonymous, A68_116  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ZRGAELA_generator(A68_BOOL  XRGAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  PSGAELA_generator(A68_BOOL  NSGAELA_anonymous, A68_54  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ETGAELA_make_shaky_list(A68_109 * Db, A68_100 * Df, A68_121 * Gcdata);

A_STATIC A68_BOOL  AUGAELA_shaky_traced(A68_109 * Db, A68_121 * Gcdata, A68_100 * Df, A68_98 * Ind);

A_STATIC A68_VOID  MUGAELA_mark_shaky_wanted(A68_109 * Db, A68_121 * Gcdata, A68_100 * Df, A68_99  Old, A68_99  New);

A68_VOID  VUGAELA_noncompacting_garbage_collect(A68_109 * Db);

A_STATIC A68_INT  CVGAELA_no_of_data_blocks(A68_109 * Db, A68_BOOL  Nodps, A68_INT  Data_elts, A68_INT  Dpcode, A68_INT  Offset);

A_STATIC A68_VOID  NVGAELA_set_wanted(A68_VC  Wanted, A68_INT  Block_num);

A_STATIC A68_VOID  VVGAELA_read_dpdata(A68_109 * Db, A68_97  Dp, A68_112  *ReturnedValue);

A_STATIC A68_VOID  TWGAELA_trace_data(A68_109 * Db, A68_121 * Gcdata, A68_BOOL  Nodps, A68_INT  Data_elts, A68_INT  Data_code, A68_INT  Block_num, A68_INT  Offset, void *NonLocals);

A_STATIC A68_VOID  HXGAELA_add_to_stack(A68_109 * Db, A68_121 * Gcdata, A68_275  Data, void *NonLocals);

A_STATIC A68_VOID  NYGAELA_add_or_trace(A68_109 * Db, A68_121 * Gcdata, A68_97  Dp, void *NonLocals);

A_STATIC A68_VOID  IZGAELA_discptr_trace(A68_109 * Db, A68_121 * Gcdata, A68_100 * Df, A68_97  Dp, void *NonLocals);

A_STATIC A68_VOID  HAHAELA_anonymous(A68_109 * Db, A68_121 * Gcdata, A68_100 * Df, A68_112  Data, void *NonLocals);

A_STATIC A68_VOID  UAHAELA_generator(A68_BOOL  SAHAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  UBHAELA_print_gcinfo(A68_121  Gcdata);

A_STATIC A68_BOOL  CEHAELA_indir_needed(A68_100 * Df, A68_121 * Gcdata, A68_98  Ind, A68_INT  Index);

A_STATIC A68_BOOL  LEHAELA_instore_indir(A68_100 * Df, A68_98  Ind, A68_INT  Index);

A_STATIC A68_VOID  FGHAELA_generator(A68_BOOL  DGHAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  NGHAELA_generator(A68_BOOL  LGHAELA_anonymous, A68_101  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  LHHAELA_generator(A68_BOOL  JHHAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  AIHAELA_generator(A68_BOOL  YHHAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  NIHAELA_generator(A68_BOOL  LIHAELA_anonymous, A68_101  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ZIHAELA_pre_df_to_chars(A68_109 * Db);

A_STATIC A68_VOID  CKHAELA_df_to_chars(A68_109 * Db, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  KMHAELA_finish_shell(A68_109 * Db, A68_300  File, A68_92  Msg, A68_BOOL  Close);

A_STATIC A68_VOID  ENHAELA_set_up_db(A68_109 * Db, A68_VC  Db_name);

A_STATIC A68_109 * ONHAELA_use_fixed(A68_VC  Fixed, A68_VC  Db_name, A68_102 * File, A68_BOOL  Writeable, A68_BOOL  Last_update_failed);

A_STATIC A68_VOID  AOHAELA_generator(A68_BOOL  YNHAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  SQHAELA_generator(A68_BOOL  QQHAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ARHAELA_generator(A68_BOOL  YQHAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  SRHAELA_generator(A68_BOOL  QRHAELA_anonymous, A68_106  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ASHAELA_generator(A68_BOOL  YRHAELA_anonymous, A68_106  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  NSHAELA_generator(A68_BOOL  LSHAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  CTHAELA_generator(A68_BOOL  ATHAELA_anonymous, A68_101  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  QTHAELA_generator(A68_BOOL  OTHAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  GUHAELA_generator(A68_BOOL  EUHAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  TUHAELA_generator(A68_BOOL  RUHAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  DVHAELA_generator(A68_BOOL  BVHAELA_anonymous, A68_101  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  OVHAELA_open_shell(A68_102 * File, A68_VC  Db_name, A68_BOOL  Writeable, A68_109  *ReturnedValue);

A_STATIC A68_VOID  SVHAELA_generator(A68_BOOL  QVHAELA_anonymous, A68_46  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  YVHAELA_generator(A68_BOOL  WVHAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  KXHAELA_open_db(A68_102 * File, A68_BOOL  Writeable, A68_109  *ReturnedValue);

A68_VOID  RXHAELA_initialise_db(A68_102 * File, A68_BOOL  Writeable, A68_109  *ReturnedValue);

A68_VOID  GYHAELA_compacting_garbage_collect(A68_102 * Old_file, A68_102 * New_file, A68_92  Msg);

A_STATIC A68_VOID  OYHAELA_add_new_address(A68_109 * Db, A68_100 * Old_df, A68_100 * New_df, A68_115 * Hashtable, A68_99  Old_addr, A68_97  New);

A_STATIC A68_VOID  KZHAELA_change_address(A68_100 * Df, A68_99  Address, A68_313  Item);

A_STATIC A68_VOID  UZHAELA_already_written(A68_109 * Db, A68_121 * Gcdata, A68_99  Addr, A68_99  *ReturnedValue);

A_STATIC A68_BOOL  NAIAELA_already_found(A68_109 * Db, A68_100 * Df, A68_121 * Gcdata, A68_97 * Dp, void *NonLocals);

A_STATIC A68_VOID  MBIAELA_compactor_trace(A68_109 * Db, A68_100 * Old_df, A68_100 * New_df, A68_121 * Gcdata, A68_97 * Dp, A68_97  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ICIAELA_generator(A68_BOOL  GCIAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  QCIAELA_generator(A68_BOOL  OCIAELA_anonymous, A68_101  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ZCIAELA_generator(A68_BOOL  XCIAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  UDIAELA_generator(A68_BOOL  SDIAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  HEIAELA_generator(A68_BOOL  FEIAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  UEIAELA_generator(A68_BOOL  SEIAELA_anonymous, A68_101  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  DFIAELA_generator(A68_BOOL  BFIAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  XFIAELA_generator(A68_BOOL  VFIAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  JGIAELA_generator(A68_BOOL  HGIAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  UHIAELA_generator(A68_BOOL  SHIAELA_anonymous, A68_106  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  IIIAELA_generator(A68_BOOL  GIIAELA_anonymous, A68_101  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  WIIAELA_generator(A68_BOOL  UIIAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A68_VOID  FKIAELA_check_database(A68_109 * Db);

A_STATIC A68_VOID  KKIAELA_change_address(A68_100 * Df, A68_99  Address, A68_313  Item);

A_STATIC A68_VOID  UKIAELA_already_written(A68_109 * Db, A68_121 * Gcdata, A68_99  Addr, A68_99  *ReturnedValue);

A_STATIC A68_BOOL  NLIAELA_already_found(A68_109 * Db, A68_100 * Df, A68_121 * Gcdata, A68_97 * Dp, void *NonLocals);

A_STATIC A68_VOID  MMIAELA_trace(A68_109 * Db, A68_100 * Old_df, A68_97  Dp, A68_121 * Gcdata, A68_54  Wanted, void *NonLocals);

A_STATIC A68_VOID  INIAELA_generator(A68_BOOL  GNIAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  QNIAELA_generator(A68_BOOL  ONIAELA_anonymous, A68_101  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ZNIAELA_generator(A68_BOOL  XNIAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  NOIAELA_generator(A68_BOOL  LOIAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  WOIAELA_generator(A68_BOOL  UOIAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  FPIAELA_generator(A68_BOOL  DPIAELA_anonymous, A68_101  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  OPIAELA_generator(A68_BOOL  MPIAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  CQIAELA_generator(A68_BOOL  AQIAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  LQIAELA_generator(A68_BOOL  JQIAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  UQIAELA_generator(A68_BOOL  SQIAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  DRIAELA_generator(A68_BOOL  BRIAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  ORIAELA_print_list(A68_107 ** List, A68_VC  Message);

A_STATIC A68_VOID  VSIAELA_generator(A68_BOOL  TSIAELA_anonymous, A68_54  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  GTIAELA_generator(A68_BOOL  ETIAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals);

A68_VOID  KVIAELA_get_root(A68_109 * Db, A68_97  *ReturnedValue);

A_STATIC A68_VOID  NVIAELA_make_logical_name(A68_VC  Name, A68_VC  *ReturnedValue);

A68_VOID  SVIAELA_quit(A68_109 * Db, A68_92  Msg);

A68_VOID  WVIAELA_finish(A68_109 * Db, A68_97  Root);

A68_VOID  EWIAELA_finish_and_close(A68_109 * Db, A68_97  Root, A68_92  Msg);

A68_VOID  IWIAELA_commit(A68_109 * Db);

A_STATIC A68_VOID  DYFAELA_generator(A68_BOOL  BYFAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((EYFAELA_generator *)NonLocals)->x)
{ 
A68_32  FYFAELA;  /* clause result */
A68_32  GYFAELA;  /* OPERATORS - dynamic generator */
{ 
 /* line 1446: */
GYFAELA.upb = NL(AYFAELA_upb_ext) ;
( BYFAELA_anonymous? A_VLOC(A68_INT ,GYFAELA): A_VHEAP(A68_INT ,GYFAELA) );
FYFAELA = GYFAELA;
} 
*ReturnedValue = (FYFAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  QYFAELA_generator(A68_BOOL  OYFAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((RYFAELA_generator *)NonLocals)->x)
{ 
A68_32  SYFAELA;  /* clause result */
A68_32  TYFAELA;  /* OPERATORS - dynamic generator */
{ 
TYFAELA.upb = HJEAELA_array_size(NL(Db), NL(Df), NL(NYFAELA_next_ptr)) ;
( OYFAELA_anonymous? A_VLOC(A68_INT ,TYFAELA): A_VHEAP(A68_INT ,TYFAELA) );
SYFAELA = TYFAELA;
} 
*ReturnedValue = (SYFAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  PGGAELA_generator(A68_BOOL  NGGAELA_anonymous, A68_101  *ReturnedValue, void *NonLocals)
#define NL(x) (((QGGAELA_generator *)NonLocals)->x)
{ 
A68_101  RGGAELA;  /* clause result */
A68_101  SGGAELA;  /* OPERATORS - dynamic generator */
{ 
SGGAELA.upb = NL(MGGAELA_upb) ;
( NGGAELA_anonymous? A_VLOC(A68_97 ,SGGAELA): A_VHEAP(A68_97 ,SGGAELA) );
RGGAELA = SGGAELA;
} 
*ReturnedValue = (RGGAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  UAHAELA_generator(A68_BOOL  SAHAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((VAHAELA_generator *)NonLocals)->x)
{ 
A68_VC  WAHAELA;  /* clause result */
A68_VC  XAHAELA;  /* OPERATORS - dynamic generator */
{ 
XAHAELA.upb = SNBAELA_block_size ;
( SAHAELA_anonymous? A_VLOC(A68_CHAR ,XAHAELA): A_VHEAP(A68_CHAR ,XAHAELA) );
WAHAELA = XAHAELA;
} 
*ReturnedValue = (WAHAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  YVHAELA_generator(A68_BOOL  WVHAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((ZVHAELA_generator *)NonLocals)->x)
{ 
A68_VC  AWHAELA;  /* clause result */
A68_VC  BWHAELA;  /* OPERATORS - dynamic generator */
{ 
BWHAELA.upb = SNBAELA_block_size ;
( WVHAELA_anonymous? A_VLOC(A68_CHAR ,BWHAELA): A_VHEAP(A68_CHAR ,BWHAELA) );
AWHAELA = BWHAELA;
} 
*ReturnedValue = (AWHAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  ICIAELA_generator(A68_BOOL  GCIAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((JCIAELA_generator *)NonLocals)->x)
{ 
A68_VC  KCIAELA;  /* clause result */
A68_VC  LCIAELA;  /* OPERATORS - dynamic generator */
{ 
LCIAELA.upb = LIEAELA_data_array_size(NL(Db), NL(Old_df), (*NL(Dp))) ;
( GCIAELA_anonymous? A_VLOC(A68_CHAR ,LCIAELA): A_VHEAP(A68_CHAR ,LCIAELA) );
KCIAELA = LCIAELA;
} 
*ReturnedValue = (KCIAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  QCIAELA_generator(A68_BOOL  OCIAELA_anonymous, A68_101  *ReturnedValue, void *NonLocals)
#define NL(x) (((RCIAELA_generator *)NonLocals)->x)
{ 
A68_101  SCIAELA;  /* clause result */
A68_101  TCIAELA;  /* OPERATORS - dynamic generator */
{ 
TCIAELA.upb = WIEAELA_dp_array_size(NL(Db), NL(Old_df), (*NL(Dp))) ;
( OCIAELA_anonymous? A_VLOC(A68_97 ,TCIAELA): A_VHEAP(A68_97 ,TCIAELA) );
SCIAELA = TCIAELA;
} 
*ReturnedValue = (SCIAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  ZCIAELA_generator(A68_BOOL  XCIAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((ADIAELA_generator *)NonLocals)->x)
{ 
A68_32  BDIAELA;  /* clause result */
A68_32  CDIAELA;  /* OPERATORS - dynamic generator */
{ 
CDIAELA.upb = NL(UCIAELA_ptr_array).upb ;
( XCIAELA_anonymous? A_VLOC(A68_INT ,CDIAELA): A_VHEAP(A68_INT ,CDIAELA) );
BDIAELA = CDIAELA;
} 
*ReturnedValue = (BDIAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  UDIAELA_generator(A68_BOOL  SDIAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((VDIAELA_generator *)NonLocals)->x)
{ 
A68_32  WDIAELA;  /* clause result */
A68_32  XDIAELA;  /* OPERATORS - dynamic generator */
{ 
XDIAELA.upb = HJEAELA_array_size(NL(Db), NL(Old_df), (*NL(Dp))) ;
( SDIAELA_anonymous? A_VLOC(A68_INT ,XDIAELA): A_VHEAP(A68_INT ,XDIAELA) );
WDIAELA = XDIAELA;
} 
*ReturnedValue = (WDIAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  HEIAELA_generator(A68_BOOL  FEIAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((IEIAELA_generator *)NonLocals)->x)
{ 
A68_VC  JEIAELA;  /* clause result */
A68_VC  KEIAELA;  /* OPERATORS - dynamic generator */
{ 
KEIAELA.upb = HJEAELA_array_size(NL(Db), NL(Old_df), (*NL(Dp))) ;
( FEIAELA_anonymous? A_VLOC(A68_CHAR ,KEIAELA): A_VHEAP(A68_CHAR ,KEIAELA) );
JEIAELA = KEIAELA;
} 
*ReturnedValue = (JEIAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  UEIAELA_generator(A68_BOOL  SEIAELA_anonymous, A68_101  *ReturnedValue, void *NonLocals)
#define NL(x) (((VEIAELA_generator *)NonLocals)->x)
{ 
A68_101  WEIAELA;  /* clause result */
A68_101  XEIAELA;  /* OPERATORS - dynamic generator */
{ 
XEIAELA.upb = HJEAELA_array_size(NL(Db), NL(Old_df), (*NL(Dp))) ;
( SEIAELA_anonymous? A_VLOC(A68_97 ,XEIAELA): A_VHEAP(A68_97 ,XEIAELA) );
WEIAELA = XEIAELA;
} 
*ReturnedValue = (WEIAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  DFIAELA_generator(A68_BOOL  BFIAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((EFIAELA_generator *)NonLocals)->x)
{ 
A68_32  FFIAELA;  /* clause result */
A68_32  GFIAELA;  /* OPERATORS - dynamic generator */
{ 
GFIAELA.upb = NL(YEIAELA_dp_array).upb ;
( BFIAELA_anonymous? A_VLOC(A68_INT ,GFIAELA): A_VHEAP(A68_INT ,GFIAELA) );
FFIAELA = GFIAELA;
} 
*ReturnedValue = (FFIAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  XFIAELA_generator(A68_BOOL  VFIAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((YFIAELA_generator *)NonLocals)->x)
{ 
A68_VC  ZFIAELA;  /* clause result */
A68_VC  AGIAELA;  /* OPERATORS - dynamic generator */
{ 
AGIAELA.upb = HJEAELA_array_size(NL(Db), NL(Old_df), (*NL(Dp))) ;
( VFIAELA_anonymous? A_VLOC(A68_CHAR ,AGIAELA): A_VHEAP(A68_CHAR ,AGIAELA) );
ZFIAELA = AGIAELA;
} 
*ReturnedValue = (ZFIAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  JGIAELA_generator(A68_BOOL  HGIAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((KGIAELA_generator *)NonLocals)->x)
{ 
A68_VC  LGIAELA;  /* clause result */
A68_VC  MGIAELA;  /* OPERATORS - dynamic generator */
{ 
MGIAELA.upb = (NL(GGIAELA_num_inds)*ABCAELA_indirection_size) ;
( HGIAELA_anonymous? A_VLOC(A68_CHAR ,MGIAELA): A_VHEAP(A68_CHAR ,MGIAELA) );
LGIAELA = MGIAELA;
} 
*ReturnedValue = (LGIAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  INIAELA_generator(A68_BOOL  GNIAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((JNIAELA_generator *)NonLocals)->x)
{ 
A68_VC  KNIAELA;  /* clause result */
A68_VC  LNIAELA;  /* OPERATORS - dynamic generator */
{ 
LNIAELA.upb = LIEAELA_data_array_size(NL(Db), NL(Old_df), NL(Dp)) ;
( GNIAELA_anonymous? A_VLOC(A68_CHAR ,LNIAELA): A_VHEAP(A68_CHAR ,LNIAELA) );
KNIAELA = LNIAELA;
} 
*ReturnedValue = (KNIAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  QNIAELA_generator(A68_BOOL  ONIAELA_anonymous, A68_101  *ReturnedValue, void *NonLocals)
#define NL(x) (((RNIAELA_generator *)NonLocals)->x)
{ 
A68_101  SNIAELA;  /* clause result */
A68_101  TNIAELA;  /* OPERATORS - dynamic generator */
{ 
TNIAELA.upb = WIEAELA_dp_array_size(NL(Db), NL(Old_df), NL(Dp)) ;
( ONIAELA_anonymous? A_VLOC(A68_97 ,TNIAELA): A_VHEAP(A68_97 ,TNIAELA) );
SNIAELA = TNIAELA;
} 
*ReturnedValue = (SNIAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  ZNIAELA_generator(A68_BOOL  XNIAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((AOIAELA_generator *)NonLocals)->x)
{ 
A68_32  BOIAELA;  /* clause result */
A68_32  COIAELA;  /* OPERATORS - dynamic generator */
{ 
COIAELA.upb = NL(UNIAELA_ptr_array).upb ;
( XNIAELA_anonymous? A_VLOC(A68_INT ,COIAELA): A_VHEAP(A68_INT ,COIAELA) );
BOIAELA = COIAELA;
} 
*ReturnedValue = (BOIAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  NOIAELA_generator(A68_BOOL  LOIAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((OOIAELA_generator *)NonLocals)->x)
{ 
A68_32  POIAELA;  /* clause result */
A68_32  QOIAELA;  /* OPERATORS - dynamic generator */
{ 
QOIAELA.upb = HJEAELA_array_size(NL(Db), NL(Old_df), NL(Dp)) ;
( LOIAELA_anonymous? A_VLOC(A68_INT ,QOIAELA): A_VHEAP(A68_INT ,QOIAELA) );
POIAELA = QOIAELA;
} 
*ReturnedValue = (POIAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  WOIAELA_generator(A68_BOOL  UOIAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((XOIAELA_generator *)NonLocals)->x)
{ 
A68_VC  YOIAELA;  /* clause result */
A68_VC  ZOIAELA;  /* OPERATORS - dynamic generator */
{ 
ZOIAELA.upb = HJEAELA_array_size(NL(Db), NL(Old_df), NL(Dp)) ;
( UOIAELA_anonymous? A_VLOC(A68_CHAR ,ZOIAELA): A_VHEAP(A68_CHAR ,ZOIAELA) );
YOIAELA = ZOIAELA;
} 
*ReturnedValue = (YOIAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  FPIAELA_generator(A68_BOOL  DPIAELA_anonymous, A68_101  *ReturnedValue, void *NonLocals)
#define NL(x) (((GPIAELA_generator *)NonLocals)->x)
{ 
A68_101  HPIAELA;  /* clause result */
A68_101  IPIAELA;  /* OPERATORS - dynamic generator */
{ 
IPIAELA.upb = HJEAELA_array_size(NL(Db), NL(Old_df), NL(Dp)) ;
( DPIAELA_anonymous? A_VLOC(A68_97 ,IPIAELA): A_VHEAP(A68_97 ,IPIAELA) );
HPIAELA = IPIAELA;
} 
*ReturnedValue = (HPIAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  OPIAELA_generator(A68_BOOL  MPIAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((PPIAELA_generator *)NonLocals)->x)
{ 
A68_32  QPIAELA;  /* clause result */
A68_32  RPIAELA;  /* OPERATORS - dynamic generator */
{ 
RPIAELA.upb = NL(JPIAELA_dp_array).upb ;
( MPIAELA_anonymous? A_VLOC(A68_INT ,RPIAELA): A_VHEAP(A68_INT ,RPIAELA) );
QPIAELA = RPIAELA;
} 
*ReturnedValue = (QPIAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  CQIAELA_generator(A68_BOOL  AQIAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((DQIAELA_generator *)NonLocals)->x)
{ 
A68_VC  EQIAELA;  /* clause result */
A68_VC  FQIAELA;  /* OPERATORS - dynamic generator */
{ 
FQIAELA.upb = HJEAELA_array_size(NL(Db), NL(Old_df), NL(Dp)) ;
( AQIAELA_anonymous? A_VLOC(A68_CHAR ,FQIAELA): A_VHEAP(A68_CHAR ,FQIAELA) );
EQIAELA = FQIAELA;
} 
*ReturnedValue = (EQIAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  LQIAELA_generator(A68_BOOL  JQIAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((MQIAELA_generator *)NonLocals)->x)
{ 
A68_VC  NQIAELA;  /* clause result */
A68_VC  OQIAELA;  /* OPERATORS - dynamic generator */
{ 
OQIAELA.upb = (NL(IQIAELA_num_inds)*ABCAELA_indirection_size) ;
( JQIAELA_anonymous? A_VLOC(A68_CHAR ,OQIAELA): A_VHEAP(A68_CHAR ,OQIAELA) );
NQIAELA = OQIAELA;
} 
*ReturnedValue = (NQIAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  UQIAELA_generator(A68_BOOL  SQIAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((VQIAELA_generator *)NonLocals)->x)
{ 
A68_32  WQIAELA;  /* clause result */
A68_32  XQIAELA;  /* OPERATORS - dynamic generator */
{ 
XQIAELA.upb = HJEAELA_array_size(NL(Db), NL(Old_df), NL(Dp)) ;
( SQIAELA_anonymous? A_VLOC(A68_INT ,XQIAELA): A_VHEAP(A68_INT ,XQIAELA) );
WQIAELA = XQIAELA;
} 
*ReturnedValue = (WQIAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  DRIAELA_generator(A68_BOOL  BRIAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((ERIAELA_generator *)NonLocals)->x)
{ 
A68_32  FRIAELA;  /* clause result */
A68_32  GRIAELA;  /* OPERATORS - dynamic generator */
{ 
GRIAELA.upb = HJEAELA_array_size(NL(Db), NL(Old_df), NL(Dp)) ;
( BRIAELA_anonymous? A_VLOC(A68_INT ,GRIAELA): A_VHEAP(A68_INT ,GRIAELA) );
FRIAELA = GRIAELA;
} 
*ReturnedValue = (FRIAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  OWDAELA_generator(A68_BOOL  MWDAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((PWDAELA_generator *)NonLocals)->x)
{ 
A68_VC  QWDAELA;  /* clause result */
A68_VC  RWDAELA;  /* OPERATORS - dynamic generator */
{ 
RWDAELA.upb = NL(S).upb ;
( MWDAELA_anonymous? A_VLOC(A68_CHAR ,RWDAELA): A_VHEAP(A68_CHAR ,RWDAELA) );
QWDAELA = RWDAELA;
} 
*ReturnedValue = (QWDAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  KZDAELA_generator(A68_BOOL  IZDAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((LZDAELA_generator *)NonLocals)->x)
{ 
A68_VC  MZDAELA;  /* clause result */
A68_VC  NZDAELA;  /* OPERATORS - dynamic generator */
{ 
NZDAELA.upb = NL(HZDAELA_upb) ;
( IZDAELA_anonymous? A_VLOC(A68_CHAR ,NZDAELA): A_VHEAP(A68_CHAR ,NZDAELA) );
MZDAELA = NZDAELA;
} 
*ReturnedValue = (MZDAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  HAEAELA_sort(A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((IAEAELA_sort *)NonLocals)->x)
{ 
A68_VC  KAEAELA;  /* clause result */
A68_172  EBEAELA;  /* collateral clause result */
A68_52  HBEAELA;  /* OPERATORS - mode -> union mode */
A68_VC  IBEAELA;  /* YIELD */
A68_52  JBEAELA;  /* OPERATORS - mode -> union mode */
A68_INT  KBEAELA;  /* YIELD */
A68_85  LBEAELA;  /* OPERATORS - istruct -> vector */
A68_VC  MBEAELA;  /* avoid structure result */
A_PROC_ENTRY(sort);
 /* line 164: */
switch ( (DYBAELA_discptr_code(NL(Dp))+1) )
{ 
case 1: 
KAEAELA = LAEAELA;
break;
case 2: 
KAEAELA = NAEAELA;
break;
case 3: 
KAEAELA = PAEAELA;
break;
case 4: 
KAEAELA = RAEAELA;
break;
case 5: 
 /* line 165: */
KAEAELA = TAEAELA;
break;
case 6: 
KAEAELA = VAEAELA;
break;
case 7: 
KAEAELA = XAEAELA;
break;
case 8: 
KAEAELA = ZAEAELA;
break;
case 9: 
 /* line 166: */
KAEAELA = BBEAELA;
break;
case 10: 
KAEAELA = DBEAELA;
break;
default: 
IBEAELA = GBEAELA ;
EBEAELA.data[0] = A_UNITE(HBEAELA,mode7,7,IBEAELA);
KBEAELA = DYBAELA_discptr_code(NL(Dp)) ;
EBEAELA.data[1] = A_UNITE(JBEAELA,mode1,1,KBEAELA);
 /* line 167: */
UJBAOSL_oneline( A_HISVEC(LBEAELA,EBEAELA,2,A68_52 ), &MBEAELA );
KAEAELA = MBEAELA;
break;
} 
A_PROC_EXIT(sort);
*ReturnedValue = (KAEAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  SFEAELA_generator(A68_BOOL  QFEAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((TFEAELA_generator *)NonLocals)->x)
{ 
A68_VC  UFEAELA;  /* clause result */
A68_VC  VFEAELA;  /* OPERATORS - dynamic generator */
{ 
VFEAELA.upb = (NL(A).upb+NL(B).upb) ;
( QFEAELA_anonymous? A_VLOC(A68_CHAR ,VFEAELA): A_VHEAP(A68_CHAR ,VFEAELA) );
UFEAELA = VFEAELA;
} 
*ReturnedValue = (UFEAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  JMEAELA_generator(A68_BOOL  HMEAELA_anonymous, A68_106  *ReturnedValue, void *NonLocals)
#define NL(x) (((KMEAELA_generator *)NonLocals)->x)
{ 
A68_106  LMEAELA;  /* clause result */
A68_106  MMEAELA;  /* OPERATORS - dynamic generator */
{ 
MMEAELA.upb = (NL(GMEAELA_upb)+1) ;
( HMEAELA_anonymous? A_VLOC(A68_98 ,MMEAELA): A_VHEAP(A68_98 ,MMEAELA) );
LMEAELA = MMEAELA;
} 
*ReturnedValue = (LMEAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  SNEAELA_generator(A68_BOOL  QNEAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((TNEAELA_generator *)NonLocals)->x)
{ 
A68_VC  UNEAELA;  /* clause result */
A68_VC  VNEAELA;  /* OPERATORS - dynamic generator */
{ 
VNEAELA.upb = (VNBAELA_max_buffer_size*SNBAELA_block_size) ;
( QNEAELA_anonymous? A_VLOC(A68_CHAR ,VNEAELA): A_VHEAP(A68_CHAR ,VNEAELA) );
UNEAELA = VNEAELA;
} 
*ReturnedValue = (UNEAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  LOEAELA_generator(A68_BOOL  JOEAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((MOEAELA_generator *)NonLocals)->x)
{ 
A68_VC  NOEAELA;  /* clause result */
A68_VC  OOEAELA;  /* OPERATORS - dynamic generator */
{ 
OOEAELA.upb = SNBAELA_block_size ;
( JOEAELA_anonymous? A_VLOC(A68_CHAR ,OOEAELA): A_VHEAP(A68_CHAR ,OOEAELA) );
NOEAELA = OOEAELA;
} 
*ReturnedValue = (NOEAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  PPEAELA_generator(A68_BOOL  NPEAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((QPEAELA_generator *)NonLocals)->x)
{ 
A68_32  RPEAELA;  /* clause result */
A68_32  SPEAELA;  /* OPERATORS - dynamic generator */
{ 
SPEAELA.upb = ((*(*(&(NL(FOEAELA_df)->File_size))))-ANBAELA_fixed_overhead) ;
( NPEAELA_anonymous? A_VLOC(A68_INT ,SPEAELA): A_VHEAP(A68_INT ,SPEAELA) );
RPEAELA = SPEAELA;
} 
*ReturnedValue = (RPEAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  QQEAELA_generator(A68_BOOL  OQEAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((RQEAELA_generator *)NonLocals)->x)
{ 
A68_32  SQEAELA;  /* clause result */
A68_32  TQEAELA;  /* OPERATORS - dynamic generator */
{ 
TQEAELA.upb = 0 ;
( OQEAELA_anonymous? A_VLOC(A68_INT ,TQEAELA): A_VHEAP(A68_INT ,TQEAELA) );
SQEAELA = TQEAELA;
} 
*ReturnedValue = (SQEAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  YQEAELA_generator(A68_BOOL  WQEAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((ZQEAELA_generator *)NonLocals)->x)
{ 
A68_32  AREAELA;  /* clause result */
A68_32  BREAELA;  /* OPERATORS - dynamic generator */
{ 
BREAELA.upb = 0 ;
( WQEAELA_anonymous? A_VLOC(A68_INT ,BREAELA): A_VHEAP(A68_INT ,BREAELA) );
AREAELA = BREAELA;
} 
*ReturnedValue = (AREAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  WSEAELA_generator(A68_BOOL  USEAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((XSEAELA_generator *)NonLocals)->x)
{ 
A68_VC  YSEAELA;  /* clause result */
A68_VC  ZSEAELA;  /* OPERATORS - dynamic generator */
{ 
ZSEAELA.upb = 0 ;
( USEAELA_anonymous? A_VLOC(A68_CHAR ,ZSEAELA): A_VHEAP(A68_CHAR ,ZSEAELA) );
YSEAELA = ZSEAELA;
} 
*ReturnedValue = (YSEAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  MUEAELA_generator(A68_BOOL  KUEAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((NUEAELA_generator *)NonLocals)->x)
{ 
A68_VC  OUEAELA;  /* clause result */
A68_VC  PUEAELA;  /* OPERATORS - dynamic generator */
{ 
PUEAELA.upb = (NL(JUEAELA_buffer_size)*SNBAELA_block_size) ;
( KUEAELA_anonymous? A_VLOC(A68_CHAR ,PUEAELA): A_VHEAP(A68_CHAR ,PUEAELA) );
OUEAELA = PUEAELA;
} 
*ReturnedValue = (OUEAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  ZWEAELA_generator(A68_BOOL  XWEAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((AXEAELA_generator *)NonLocals)->x)
{ 
A68_VC  BXEAELA;  /* clause result */
A68_VC  CXEAELA;  /* OPERATORS - dynamic generator */
{ 
CXEAELA.upb = EDAAOST_int_size ;
( XWEAELA_anonymous? A_VLOC(A68_CHAR ,CXEAELA): A_VHEAP(A68_CHAR ,CXEAELA) );
BXEAELA = CXEAELA;
} 
*ReturnedValue = (BXEAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  KXEAELA_generator(A68_BOOL  IXEAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((LXEAELA_generator *)NonLocals)->x)
{ 
A68_VC  MXEAELA;  /* clause result */
A68_VC  NXEAELA;  /* OPERATORS - dynamic generator */
{ 
NXEAELA.upb = SNBAELA_block_size ;
( IXEAELA_anonymous? A_VLOC(A68_CHAR ,NXEAELA): A_VHEAP(A68_CHAR ,NXEAELA) );
MXEAELA = NXEAELA;
} 
*ReturnedValue = (MXEAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  KCFAELA_generator(A68_BOOL  ICFAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((LCFAELA_generator *)NonLocals)->x)
{ 
A68_VC  MCFAELA;  /* clause result */
A68_VC  NCFAELA;  /* OPERATORS - dynamic generator */
{ 
NCFAELA.upb = (NL(Indirections).upb*ABCAELA_indirection_size) ;
( ICFAELA_anonymous? A_VLOC(A68_CHAR ,NCFAELA): A_VHEAP(A68_CHAR ,NCFAELA) );
MCFAELA = NCFAELA;
} 
*ReturnedValue = (MCFAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  WDFAELA_generator(A68_BOOL  UDFAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((XDFAELA_generator *)NonLocals)->x)
{ 
A68_32  YDFAELA;  /* clause result */
A68_32  ZDFAELA;  /* OPERATORS - dynamic generator */
{ 
 /* line 888: */
ZDFAELA.upb = NL(TDFAELA_new_size) ;
( UDFAELA_anonymous? A_VLOC(A68_INT ,ZDFAELA): A_VHEAP(A68_INT ,ZDFAELA) );
YDFAELA = ZDFAELA;
} 
*ReturnedValue = (YDFAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  LEFAELA_generator(A68_BOOL  JEFAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((MEFAELA_generator *)NonLocals)->x)
{ 
A68_32  NEFAELA;  /* clause result */
A68_32  OEFAELA;  /* OPERATORS - dynamic generator */
{ 
 /* line 895: */
OEFAELA.upb = HJEAELA_array_size(NL(Db), NL(Df), NL(IEFAELA_next_ptr)) ;
( JEFAELA_anonymous? A_VLOC(A68_INT ,OEFAELA): A_VHEAP(A68_INT ,OEFAELA) );
NEFAELA = OEFAELA;
} 
*ReturnedValue = (NEFAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  AFFAELA_generator(A68_BOOL  YEFAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((BFFAELA_generator *)NonLocals)->x)
{ 
A68_VC  CFFAELA;  /* clause result */
A68_VC  DFFAELA;  /* OPERATORS - dynamic generator */
{ 
DFFAELA.upb = NL(Name).upb ;
( YEFAELA_anonymous? A_VLOC(A68_CHAR ,DFFAELA): A_VHEAP(A68_CHAR ,DFFAELA) );
CFFAELA = DFFAELA;
} 
*ReturnedValue = (CFFAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  WFFAELA_generator(A68_BOOL  UFFAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((XFFAELA_generator *)NonLocals)->x)
{ 
A68_VC  YFFAELA;  /* clause result */
A68_VC  ZFFAELA;  /* OPERATORS - dynamic generator */
{ 
ZFFAELA.upb = (NL(SFFAELA_old_upb)+SNBAELA_block_size) ;
( UFFAELA_anonymous? A_VLOC(A68_CHAR ,ZFFAELA): A_VHEAP(A68_CHAR ,ZFFAELA) );
YFFAELA = ZFFAELA;
} 
*ReturnedValue = (YFFAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  YHFAELA_generator(A68_BOOL  WHFAELA_anonymous, A68_101  *ReturnedValue, void *NonLocals)
#define NL(x) (((ZHFAELA_generator *)NonLocals)->x)
{ 
A68_101  AIFAELA;  /* clause result */
A68_101  BIFAELA;  /* OPERATORS - dynamic generator */
{ 
BIFAELA.upb = 1 ;
( WHFAELA_anonymous? A_VLOC(A68_97 ,BIFAELA): A_VHEAP(A68_97 ,BIFAELA) );
AIFAELA = BIFAELA;
} 
*ReturnedValue = (AIFAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  HIFAELA_generator(A68_BOOL  FIFAELA_anonymous, A68_101  *ReturnedValue, void *NonLocals)
#define NL(x) (((IIFAELA_generator *)NonLocals)->x)
{ 
A68_101  JIFAELA;  /* clause result */
A68_101  KIFAELA;  /* OPERATORS - dynamic generator */
{ 
KIFAELA.upb = (NL(VHFAELA_upb)+1) ;
( FIFAELA_anonymous? A_VLOC(A68_97 ,KIFAELA): A_VHEAP(A68_97 ,KIFAELA) );
JIFAELA = KIFAELA;
} 
*ReturnedValue = (JIFAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  JMFAELA_generator(A68_BOOL  HMFAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((KMFAELA_generator *)NonLocals)->x)
{ 
A68_VC  LMFAELA;  /* clause result */
A68_VC  MMFAELA;  /* OPERATORS - dynamic generator */
{ 
MMFAELA.upb = SNBAELA_block_size ;
( HMFAELA_anonymous? A_VLOC(A68_CHAR ,MMFAELA): A_VHEAP(A68_CHAR ,MMFAELA) );
LMFAELA = MMFAELA;
} 
*ReturnedValue = (LMFAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  ZNFAELA_generator(A68_BOOL  XNFAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((AOFAELA_generator *)NonLocals)->x)
{ 
A68_VC  BOFAELA;  /* clause result */
A68_VC  COFAELA;  /* OPERATORS - dynamic generator */
{ 
COFAELA.upb = EDAAOST_int_size ;
( XNFAELA_anonymous? A_VLOC(A68_CHAR ,COFAELA): A_VHEAP(A68_CHAR ,COFAELA) );
BOFAELA = COFAELA;
} 
*ReturnedValue = (BOFAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  MSFAELA_generator(A68_BOOL  KSFAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((NSFAELA_generator *)NonLocals)->x)
{ 
A68_VC  OSFAELA;  /* clause result */
A68_VC  PSFAELA;  /* OPERATORS - dynamic generator */
{ 
PSFAELA.upb = (NL(Data).upb*ABCAELA_indirection_size) ;
( KSFAELA_anonymous? A_VLOC(A68_CHAR ,PSFAELA): A_VHEAP(A68_CHAR ,PSFAELA) );
OSFAELA = PSFAELA;
} 
*ReturnedValue = (OSFAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  QVFAELA_generator(A68_BOOL  OVFAELA_anonymous, A68_101  *ReturnedValue, void *NonLocals)
#define NL(x) (((RVFAELA_generator *)NonLocals)->x)
{ 
A68_101  SVFAELA;  /* clause result */
A68_101  TVFAELA;  /* OPERATORS - dynamic generator */
{ 
TVFAELA.upb = (NL(MVFAELA_ndp)+NL(NVFAELA_old_size)) ;
( OVFAELA_anonymous? A_VLOC(A68_97 ,TVFAELA): A_VHEAP(A68_97 ,TVFAELA) );
SVFAELA = TVFAELA;
} 
*ReturnedValue = (SVFAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  QXFAELA_generator(A68_BOOL  OXFAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((RXFAELA_generator *)NonLocals)->x)
{ 
A68_32  SXFAELA;  /* clause result */
A68_32  TXFAELA;  /* OPERATORS - dynamic generator */
{ 
 /* line 1436: */
TXFAELA.upb = (*(&(NL(Df)->Freelist))).upb ;
( OXFAELA_anonymous? A_VLOC(A68_INT ,TXFAELA): A_VHEAP(A68_INT ,TXFAELA) );
SXFAELA = TXFAELA;
} 
*ReturnedValue = (SXFAELA);
return;
} 
#undef NL

A_STATIC A68_INT  YXFAELA_read_next_free(void *NonLocals)
#define NL(x) (((ZXFAELA_read_next_free *)NonLocals)->x)
{ 
A68_INT  AYFAELA_upb_ext;
A68_33  CYFAELA_generator;   /* proc value of non-global proc */
A68_32  HYFAELA;  /* avoid structure result */
A68_32  IYFAELA;  /* OPERATORS - assign op */
A68_32 * JYFAELA;  /* YIELD */
A68_INT  KYFAELA;  /* clause result */
A68_INT  LYFAELA;  /* YIELD */
A68_INT  MYFAELA;  /* YIELD */
A68_97  NYFAELA_next_ptr;
A68_33  PYFAELA_generator;   /* proc value of non-global proc */
A68_32  UYFAELA;  /* avoid structure result */
A68_214  VYFAELA;  /* OPERATORS - mode -> union mode */
A68_INT  WYFAELA;  /* YIELD */
A_PROC_ENTRY(read_next_free);
{ 
(*NL(Free_space))-=1;
 /* line 1440: */
 /* line 1441: */
if ( (((*NL(Freelist_index))+=1)>(*NL(UXFAELA_freelist)).upb) )
{ 
 /* line 1442: */
if ( ((*NL(Block_ptr))==NL(NXFAELA_free_block_dps).upb) )
{ 
(*NL(Block_ptr))+=1;
 /* line 1443: */
AYFAELA_upb_ext = (*(&(NL(Df)->Freelist_ext))).upb;
 /* line 1444: */
 /* line 1445: */
if ( (AYFAELA_upb_ext>0) )
{ 
A_CLOSURE( CYFAELA_generator, DYFAELA_generator, EYFAELA_generator );
(( EYFAELA_generator * ) ( CYFAELA_generator.nonlocals )) -> AYFAELA_upb_ext = AYFAELA_upb_ext;
A_CALLPROC(CYFAELA_generator,(A68_FALSE, &HYFAELA),(A68_FALSE, &HYFAELA,(CYFAELA_generator).nonlocals));
IYFAELA = (*(&(NL(Df)->Freelist_ext))) ;
A_VASSIGN2(IYFAELA,HYFAELA,A68_INT ) ;
JYFAELA = (&(NL(Df)->Freelist)) ;
(*JYFAELA) = HYFAELA;
 /* line 1447: */
 /* line 1448: */
 /* line 1449: */
LYFAELA = (*NL(Freelist_index)) = 1 ;
KYFAELA = (*(&A_VINDEX((*NL(UXFAELA_freelist)),LYFAELA)));
} 
else
{ 
 /* line 1450: */
KYFAELA = 0;
} 
} 
else
{ 
MYFAELA = (*NL(Block_ptr))+=1 ;
NYFAELA_next_ptr = (*(&A_VINDEX(NL(NXFAELA_free_block_dps),MYFAELA)));
 /* line 1451: */
A_CLOSURE( PYFAELA_generator, QYFAELA_generator, RYFAELA_generator );
(( RYFAELA_generator * ) ( PYFAELA_generator.nonlocals )) -> Db = NL(Db);
(( RYFAELA_generator * ) ( PYFAELA_generator.nonlocals )) -> Df = NL(Df);
(( RYFAELA_generator * ) ( PYFAELA_generator.nonlocals )) -> NYFAELA_next_ptr = NYFAELA_next_ptr;
A_CALLPROC(PYFAELA_generator,(A68_FALSE, &UYFAELA),(A68_FALSE, &UYFAELA,(PYFAELA_generator).nonlocals));
(*NL(UXFAELA_freelist)) = UYFAELA;
 /* line 1452: */
 /* line 1453: */
SVEAELA_read(NL(Db), NL(Df), A_UNITE(VYFAELA,mode2,2,(*NL(UXFAELA_freelist))), PVDAELA_nodps, BWDAELA_nowanted, CXDAELA_freelist_ints, NYFAELA_next_ptr);
 /* line 1454: */
 /* line 1455: */
 /* line 1456: */
WYFAELA = (*NL(Freelist_index)) = 1 ;
KYFAELA = (*(&A_VINDEX((*NL(UXFAELA_freelist)),WYFAELA)));
} 
} 
else
{ 
 /* line 1457: */
 /* line 1458: */
KYFAELA = (*(&A_VINDEX((*NL(UXFAELA_freelist)),(*NL(Freelist_index)))));
} 
} 
A_PROC_EXIT(read_next_free);
return( KYFAELA );
} 
#undef NL

A_STATIC A68_VOID  YBGAELA_generator(A68_BOOL  WBGAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((ZBGAELA_generator *)NonLocals)->x)
{ 
A68_32  ACGAELA;  /* clause result */
A68_32  BCGAELA;  /* OPERATORS - dynamic generator */
{ 
BCGAELA.upb = NL(HBGAELA_actual_by) ;
( WBGAELA_anonymous? A_VLOC(A68_INT ,BCGAELA): A_VHEAP(A68_INT ,BCGAELA) );
ACGAELA = BCGAELA;
} 
*ReturnedValue = (ACGAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  MCGAELA_generator(A68_BOOL  KCGAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((NCGAELA_generator *)NonLocals)->x)
{ 
A68_32  OCGAELA;  /* clause result */
A68_32  PCGAELA;  /* OPERATORS - dynamic generator */
{ 
PCGAELA.upb = (NL(JCGAELA_upb_temp)+NL(HBGAELA_actual_by)) ;
( KCGAELA_anonymous? A_VLOC(A68_INT ,PCGAELA): A_VHEAP(A68_INT ,PCGAELA) );
OCGAELA = PCGAELA;
} 
*ReturnedValue = (OCGAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  CDGAELA_generator(A68_BOOL  ADGAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((DDGAELA_generator *)NonLocals)->x)
{ 
A68_32  EDGAELA;  /* clause result */
A68_32  FDGAELA;  /* OPERATORS - dynamic generator */
{ 
FDGAELA.upb = NL(HBGAELA_actual_by) ;
( ADGAELA_anonymous? A_VLOC(A68_INT ,FDGAELA): A_VHEAP(A68_INT ,FDGAELA) );
EDGAELA = FDGAELA;
} 
*ReturnedValue = (EDGAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  SDGAELA_generator(A68_BOOL  QDGAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((TDGAELA_generator *)NonLocals)->x)
{ 
A68_32  UDGAELA;  /* clause result */
A68_32  VDGAELA;  /* OPERATORS - dynamic generator */
{ 
VDGAELA.upb = (NL(PDGAELA_upb_temp)+NL(HBGAELA_actual_by)) ;
( QDGAELA_anonymous? A_VLOC(A68_INT ,VDGAELA): A_VHEAP(A68_INT ,VDGAELA) );
UDGAELA = VDGAELA;
} 
*ReturnedValue = (UDGAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  BFGAELA_generator(A68_BOOL  ZEGAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((CFGAELA_generator *)NonLocals)->x)
{ 
A68_32  DFGAELA;  /* clause result */
A68_32  EFGAELA;  /* OPERATORS - dynamic generator */
{ 
EFGAELA.upb = NL(YEGAELA_size_diff) ;
( ZEGAELA_anonymous? A_VLOC(A68_INT ,EFGAELA): A_VHEAP(A68_INT ,EFGAELA) );
DFGAELA = EFGAELA;
} 
*ReturnedValue = (DFGAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  MFGAELA_generator(A68_BOOL  KFGAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((NFGAELA_generator *)NonLocals)->x)
{ 
A68_32  OFGAELA;  /* clause result */
A68_32  PFGAELA;  /* OPERATORS - dynamic generator */
{ 
PFGAELA.upb = NL(YEGAELA_size_diff) ;
( KFGAELA_anonymous? A_VLOC(A68_INT ,PFGAELA): A_VHEAP(A68_INT ,PFGAELA) );
OFGAELA = PFGAELA;
} 
*ReturnedValue = (OFGAELA);
return;
} 
#undef NL
 /* line 1639: */

A_STATIC A68_INT  HGGAELA_block_write(A68_109 * Db, A68_INT * Cbufpos, A68_BOOL  Freelist, A68_32  Ints)
{ 
A68_INT  IGGAELA;  /* clause result */
A68_111  JGGAELA;  /* OPERATORS - mode -> union mode */
A68_INT  KGGAELA_result;
A68_INT  LGGAELA;  /* clause result */
A68_INT  MGGAELA_upb;
A68_154  OGGAELA_generator;   /* proc value of non-global proc */
A68_101  UGGAELA;  /* avoid structure result */
A68_101  TGGAELA_dps;
A68_INT  VGGAELA;  /* clause result */
A68_111  WGGAELA;  /* OPERATORS - mode -> union mode */
A68_INT  XGGAELA;  /* clause result */
A_PROC_ENTRY(block_write);
 /* line 1640: */
{ 
 /* line 1641: */
if ( (Ints.upb==0) )
{ 
IGGAELA = 0;
} 
else
{ 
IGGAELA = TGFAELA_no_of_blocks(Db, Cbufpos, A_UNITE(JGGAELA,mode1,1,Ints));
} 
KGGAELA_result = IGGAELA;
 /* line 1642: */
if ( Freelist )
{ 
LGGAELA = KGGAELA_result;
} 
else
{ 
LGGAELA = 1;
} 
MGGAELA_upb = LGGAELA;
 /* line 1643: */
A_CLOSURE( OGGAELA_generator, PGGAELA_generator, QGGAELA_generator );
(( QGGAELA_generator * ) ( OGGAELA_generator.nonlocals )) -> MGGAELA_upb = MGGAELA_upb;
A_CALLPROC(OGGAELA_generator,(A68_TRUE, &UGGAELA),(A68_TRUE, &UGGAELA,(OGGAELA_generator).nonlocals));
TGGAELA_dps = UGGAELA;
 /* line 1644: */
if ( (TGGAELA_dps.upb==0) )
{ 
VGGAELA = 0;
} 
else
{ 
VGGAELA = TGFAELA_no_of_blocks(Db, Cbufpos, A_UNITE(WGGAELA,mode3,3,TGGAELA_dps));
} 
KGGAELA_result+=VGGAELA;
 /* line 1645: */
 /* line 1646: */
XGGAELA = KGGAELA_result;
} 
A_PROC_EXIT(block_write);
return( XGGAELA );
} 
#undef NL

A_STATIC A68_VOID  FHGAELA_generator(A68_BOOL  DHGAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((GHGAELA_generator *)NonLocals)->x)
{ 
A68_VC  HHGAELA;  /* clause result */
A68_VC  IHGAELA;  /* OPERATORS - dynamic generator */
{ 
IHGAELA.upb = ((NL(AHGAELA_indirs).upb-NL(BHGAELA_indirs_in_fixed))*ABCAELA_indirection_size) ;
( DHGAELA_anonymous? A_VLOC(A68_CHAR ,IHGAELA): A_VHEAP(A68_CHAR ,IHGAELA) );
HHGAELA = IHGAELA;
} 
*ReturnedValue = (HHGAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  ZHGAELA_generator(A68_BOOL  XHGAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((AIGAELA_generator *)NonLocals)->x)
{ 
A68_32  BIGAELA;  /* clause result */
A68_32  CIGAELA;  /* OPERATORS - dynamic generator */
{ 
CIGAELA.upb = NL(WHGAELA_freelist_size) ;
( XHGAELA_anonymous? A_VLOC(A68_INT ,CIGAELA): A_VHEAP(A68_INT ,CIGAELA) );
BIGAELA = CIGAELA;
} 
*ReturnedValue = (BIGAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  LIGAELA_generator(A68_BOOL  JIGAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((MIGAELA_generator *)NonLocals)->x)
{ 
A68_32  NIGAELA;  /* clause result */
A68_32  OIGAELA;  /* OPERATORS - dynamic generator */
{ 
OIGAELA.upb = NL(IIGAELA_size) ;
( JIGAELA_anonymous? A_VLOC(A68_INT ,OIGAELA): A_VHEAP(A68_INT ,OIGAELA) );
NIGAELA = OIGAELA;
} 
*ReturnedValue = (NIGAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  ZIGAELA_generator(A68_BOOL  XIGAELA_anonymous, A68_101  *ReturnedValue, void *NonLocals)
#define NL(x) (((AJGAELA_generator *)NonLocals)->x)
{ 
A68_101  BJGAELA;  /* clause result */
A68_101  CJGAELA;  /* OPERATORS - dynamic generator */
{ 
CJGAELA.upb = 0 ;
( XIGAELA_anonymous? A_VLOC(A68_97 ,CJGAELA): A_VHEAP(A68_97 ,CJGAELA) );
BJGAELA = CJGAELA;
} 
*ReturnedValue = (BJGAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  IJGAELA_generator(A68_BOOL  GJGAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((JJGAELA_generator *)NonLocals)->x)
{ 
A68_32  KJGAELA;  /* clause result */
A68_32  LJGAELA;  /* OPERATORS - dynamic generator */
{ 
LJGAELA.upb = NL(FJGAELA_file_size) ;
( GJGAELA_anonymous? A_VLOC(A68_INT ,LJGAELA): A_VHEAP(A68_INT ,LJGAELA) );
KJGAELA = LJGAELA;
} 
*ReturnedValue = (KJGAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  ZJGAELA_generator(A68_BOOL  XJGAELA_anonymous, A68_101  *ReturnedValue, void *NonLocals)
#define NL(x) (((AKGAELA_generator *)NonLocals)->x)
{ 
A68_101  BKGAELA;  /* clause result */
A68_101  CKGAELA;  /* OPERATORS - dynamic generator */
{ 
 /* line 1694: */
CKGAELA.upb = 1 ;
( XJGAELA_anonymous? A_VLOC(A68_97 ,CKGAELA): A_VHEAP(A68_97 ,CKGAELA) );
BKGAELA = CKGAELA;
} 
*ReturnedValue = (BKGAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  AOGAELA_generator(A68_BOOL  YNGAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((BOGAELA_generator *)NonLocals)->x)
{ 
A68_32  COGAELA;  /* clause result */
A68_32  DOGAELA;  /* OPERATORS - dynamic generator */
{ 
DOGAELA.upb = (*(*(&(NL(WNGAELA_df)->File_size)))) ;
( YNGAELA_anonymous? A_VLOC(A68_INT ,DOGAELA): A_VHEAP(A68_INT ,DOGAELA) );
COGAELA = DOGAELA;
} 
*ReturnedValue = (COGAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  TOGAELA_generator(A68_BOOL  ROGAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((UOGAELA_generator *)NonLocals)->x)
{ 
A68_VC  VOGAELA;  /* clause result */
A68_VC  WOGAELA;  /* OPERATORS - dynamic generator */
{ 
WOGAELA.upb = 0 ;
( ROGAELA_anonymous? A_VLOC(A68_CHAR ,WOGAELA): A_VHEAP(A68_CHAR ,WOGAELA) );
VOGAELA = WOGAELA;
} 
*ReturnedValue = (VOGAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  BPGAELA_generator(A68_BOOL  ZOGAELA_anonymous, A68_117  *ReturnedValue, void *NonLocals)
#define NL(x) (((CPGAELA_generator *)NonLocals)->x)
{ 
A68_117  DPGAELA;  /* clause result */
A68_117  EPGAELA;  /* OPERATORS - dynamic generator */
{ 
EPGAELA.upb = YMBAELA_hashtable_size ;
( ZOGAELA_anonymous? A_VLOC(A68_114 *,EPGAELA): A_VHEAP(A68_114 *,EPGAELA) );
DPGAELA = EPGAELA;
} 
*ReturnedValue = (DPGAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  MPGAELA_generator(A68_BOOL  KPGAELA_anonymous, A68_117  *ReturnedValue, void *NonLocals)
#define NL(x) (((NPGAELA_generator *)NonLocals)->x)
{ 
A68_117  OPGAELA;  /* clause result */
A68_117  PPGAELA;  /* OPERATORS - dynamic generator */
{ 
 /* line 1852: */
PPGAELA.upb = YMBAELA_hashtable_size ;
( KPGAELA_anonymous? A_VLOC(A68_114 *,PPGAELA): A_VHEAP(A68_114 *,PPGAELA) );
OPGAELA = PPGAELA;
} 
*ReturnedValue = (OPGAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  BQGAELA_generator(A68_BOOL  ZPGAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((CQGAELA_generator *)NonLocals)->x)
{ 
A68_32  DQGAELA;  /* clause result */
A68_32  EQGAELA;  /* OPERATORS - dynamic generator */
{ 
EQGAELA.upb = 0 ;
( ZPGAELA_anonymous? A_VLOC(A68_INT ,EQGAELA): A_VHEAP(A68_INT ,EQGAELA) );
DQGAELA = EQGAELA;
} 
*ReturnedValue = (DQGAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  JQGAELA_generator(A68_BOOL  HQGAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((KQGAELA_generator *)NonLocals)->x)
{ 
A68_32  LQGAELA;  /* clause result */
A68_32  MQGAELA;  /* OPERATORS - dynamic generator */
{ 
MQGAELA.upb = 0 ;
( HQGAELA_anonymous? A_VLOC(A68_INT ,MQGAELA): A_VHEAP(A68_INT ,MQGAELA) );
LQGAELA = MQGAELA;
} 
*ReturnedValue = (LQGAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  SQGAELA_generator(A68_BOOL  QQGAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((TQGAELA_generator *)NonLocals)->x)
{ 
A68_VC  UQGAELA;  /* clause result */
A68_VC  VQGAELA;  /* OPERATORS - dynamic generator */
{ 
VQGAELA.upb = NL(PQGAELA_upb_wanted) ;
( QQGAELA_anonymous? A_VLOC(A68_CHAR ,VQGAELA): A_VHEAP(A68_CHAR ,VQGAELA) );
UQGAELA = VQGAELA;
} 
*ReturnedValue = (UQGAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  ERGAELA_generator(A68_BOOL  CRGAELA_anonymous, A68_116  *ReturnedValue, void *NonLocals)
#define NL(x) (((FRGAELA_generator *)NonLocals)->x)
{ 
A68_116  GRGAELA;  /* clause result */
A68_116  HRGAELA;  /* OPERATORS - dynamic generator */
{ 
HRGAELA.upb = YMBAELA_hashtable_size ;
( CRGAELA_anonymous? A_VLOC(A68_113 *,HRGAELA): A_VHEAP(A68_113 *,HRGAELA) );
GRGAELA = HRGAELA;
} 
*ReturnedValue = (GRGAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  PRGAELA_generator(A68_BOOL  NRGAELA_anonymous, A68_116  *ReturnedValue, void *NonLocals)
#define NL(x) (((QRGAELA_generator *)NonLocals)->x)
{ 
A68_116  RRGAELA;  /* clause result */
A68_116  SRGAELA;  /* OPERATORS - dynamic generator */
{ 
SRGAELA.upb = YMBAELA_hashtable_size ;
( NRGAELA_anonymous? A_VLOC(A68_113 *,SRGAELA): A_VHEAP(A68_113 *,SRGAELA) );
RRGAELA = SRGAELA;
} 
*ReturnedValue = (RRGAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  ZRGAELA_generator(A68_BOOL  XRGAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((ASGAELA_generator *)NonLocals)->x)
{ 
A68_32  BSGAELA;  /* clause result */
A68_32  CSGAELA;  /* OPERATORS - dynamic generator */
{ 
CSGAELA.upb = YMBAELA_hashtable_size ;
( XRGAELA_anonymous? A_VLOC(A68_INT ,CSGAELA): A_VHEAP(A68_INT ,CSGAELA) );
BSGAELA = CSGAELA;
} 
*ReturnedValue = (BSGAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  PSGAELA_generator(A68_BOOL  NSGAELA_anonymous, A68_54  *ReturnedValue, void *NonLocals)
#define NL(x) (((QSGAELA_generator *)NonLocals)->x)
{ 
A68_54  RSGAELA;  /* clause result */
A68_54  SSGAELA;  /* OPERATORS - dynamic generator */
{ 
 /* line 1878: */
SSGAELA.upb = (*(&(NL(WNGAELA_df)->Indirections))).upb ;
( NSGAELA_anonymous? A_VLOC(A68_BOOL ,SSGAELA): A_VHEAP(A68_BOOL ,SSGAELA) );
RSGAELA = SSGAELA;
} 
*ReturnedValue = (RSGAELA);
return;
} 
#undef NL
 /* line 1959: */

A_STATIC A68_INT  CVGAELA_no_of_data_blocks(A68_109 * Db, A68_BOOL  Nodps, A68_INT  Data_elts, A68_INT  Dpcode, A68_INT  Offset)
{ 
A68_INT  DVGAELA_result;
A68_INT  EVGAELA;  /* clause result */
A68_INT  FVGAELA_data_size;
A68_INT  GVGAELA;  /* clause result */
A68_INT  HVGAELA;  /* clause result */
A68_INT  IVGAELA_cbufpos;
A68_BOOL  JVGAELA_overwriteable;
A68_INT  KVGAELA;  /* clause result */
A_PROC_ENTRY(no_of_data_blocks);
 /* line 1967: */
{ 
DVGAELA_result = 1;
 /* line 1968: */
if ( (Dpcode==WWDAELA_charsdps) )
{ 
EVGAELA = 1;
} 
else
{ 
EVGAELA = ZXDAELA_data_size(Dpcode);
} 
FVGAELA_data_size = EVGAELA;
 /* line 1969: */
 /* line 1970: */
 /* line 1971: */
if ( Nodps )
{ 
 /* line 1972: */
if ( (Offset==SNBAELA_block_size) )
{ 
GVGAELA = CCCAELA_block_heading_size;
} 
else
{ 
 /* line 1973: */
GVGAELA = CGCAELA_data_heading_size;
} 
 /* line 1974: */
HVGAELA = (Offset-GVGAELA);
} 
else
{ 
HVGAELA = Offset;
} 
IVGAELA_cbufpos = HVGAELA;
 /* line 1975: */
JVGAELA_overwriteable = (Dpcode==AXDAELA_overwriteable);
 /* line 1976: */
 /* line 1977: */
 /* line 1978: */
KVGAELA = KGFAELA_block_count(FVGAELA_data_size, (Data_elts/FVGAELA_data_size), JVGAELA_overwriteable, (&IVGAELA_cbufpos));
} 
A_PROC_EXIT(no_of_data_blocks);
return( KVGAELA );
} 
#undef NL

A_STATIC A68_VOID  NVGAELA_set_wanted(A68_VC  Wanted, A68_INT  Block_num)
{ 
A68_INT  OVGAELA_index;
A68_INT  PVGAELA_element;
A68_BITS  QVGAELA_bits_wanted;
A68_BITS  RVGAELA;  /* clause result */
A68_CHAR * SVGAELA;  /* YIELD */
A_PROC_ENTRY(set_wanted);
 /* line 1984: */
{ 
OVGAELA_index = (((Block_num-1)/SMBAELA_byte_size)+1);
 /* line 1985: */
PVGAELA_element = (Block_num-((OVGAELA_index-1)*SMBAELA_byte_size));
 /* line 1986: */
QVGAELA_bits_wanted = (A68_BITS )(A68_INT)(unsigned char)(*(&A_VINDEX(Wanted,OVGAELA_index)));
 /* line 1987: */
 /* line 1988: */
switch ( PVGAELA_element )
{ 
case 1: 
 /* line 1989: */
RVGAELA = 0X1U;
break;
case 2: 
 /* line 1990: */
RVGAELA = 0X2U;
break;
case 3: 
 /* line 1991: */
RVGAELA = 0X4U;
break;
case 4: 
 /* line 1992: */
RVGAELA = 0X8U;
break;
case 5: 
 /* line 1993: */
RVGAELA = 0X10U;
break;
case 6: 
 /* line 1994: */
RVGAELA = 0X20U;
break;
case 7: 
 /* line 1996: */
RVGAELA = 0X40U;
break;
case 8: 
RVGAELA = 0X80U;
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 1997: */
SVGAELA = (&A_VINDEX(Wanted,OVGAELA_index)) ;
(*SVGAELA) = (A68_CHAR)(A68_INT )(A68_BITS )(QVGAELA_bits_wanted|RVGAELA);
} 
A_PROC_EXIT(set_wanted);
return;
} 
#undef NL

A_STATIC A68_VOID  VVGAELA_read_dpdata(A68_109 * Db, A68_97  Dp, A68_112  *ReturnedValue)
{ 
A68_112  WVGAELA_d;
A68_99  XVGAELA;  /* avoid structure result */
A68_99 * YVGAELA;  /* YIELD */
A68_106  ZVGAELA_indirections;
A68_INT  AWGAELA;  /* YIELD */
A68_98  BWGAELA_ind;
A68_INT * CWGAELA;  /* YIELD */
A68_INT * DWGAELA;  /* YIELD */
A68_INT * EWGAELA;  /* YIELD */
A68_INT * FWGAELA;  /* YIELD */
A68_INT * GWGAELA;  /* YIELD */
A68_INT * HWGAELA;  /* YIELD */
A68_INT * IWGAELA;  /* YIELD */
A68_INT * JWGAELA;  /* YIELD */
A68_112  KWGAELA;  /* clause result */
A_PROC_ENTRY(read_dpdata);
 /* line 2004: */
{ 
 /* line 2005: */
IHEAELA_get_disc_address( (*(&(Db->Df))), Dp, &XVGAELA );
YVGAELA = (&((&WVGAELA_d)->Address)) ;
(*YVGAELA) = XVGAELA;
 /* line 2006: */
 /* line 2007: */
if ( (PYBAELA_first_offset(Dp)==0) )
{ 
ZVGAELA_indirections = (*(&((*(&(Db->Df)))->Indirections)));
 /* line 2008: */
AWGAELA = MYBAELA_first_block(Dp) ;
BWGAELA_ind = A_VINDEX(ZVGAELA_indirections,AWGAELA);
 /* line 2009: */
CWGAELA = (&((&WVGAELA_d)->Data_elts)) ;
(*CWGAELA) = BWGAELA_ind.Data_elts;
 /* line 2010: */
DWGAELA = (&((&WVGAELA_d)->Dp_elts)) ;
(*DWGAELA) = BWGAELA_ind.Dp_elts;
 /* line 2011: */
EWGAELA = (&((&WVGAELA_d)->Code)) ;
(*EWGAELA) = BWGAELA_ind.Code;
 /* line 2012: */
 /* line 2013: */
FWGAELA = (&((&WVGAELA_d)->Read_size)) ;
(*FWGAELA) = BWGAELA_ind.Read_size;
} 
else
{ 
GWGAELA = (&((&WVGAELA_d)->Data_elts)) ;
(*GWGAELA) = SYBAELA_data_elts(Dp);
 /* line 2014: */
HWGAELA = (&((&WVGAELA_d)->Dp_elts)) ;
(*HWGAELA) = VYBAELA_dp_elts(Dp);
 /* line 2015: */
IWGAELA = (&((&WVGAELA_d)->Code)) ;
(*IWGAELA) = DYBAELA_discptr_code(Dp);
 /* line 2016: */
 /* line 2017: */
JWGAELA = (&((&WVGAELA_d)->Read_size)) ;
(*JWGAELA) = BZBAELA_read_size(Dp);
} 
 /* line 2018: */
 /* line 2019: */
KWGAELA = WVGAELA_d;
} 
A_PROC_EXIT(read_dpdata);
*ReturnedValue = (KWGAELA);
return;
} 
#undef NL
 /* line 2022: */

A_STATIC A68_VOID  TWGAELA_trace_data(A68_109 * Db, A68_121 * Gcdata, A68_BOOL  Nodps, A68_INT  Data_elts, A68_INT  Data_code, A68_INT  Block_num, A68_INT  Offset, void *NonLocals)
#define NL(x) (((UWGAELA_trace_data *)NonLocals)->x)
{ 
A68_INT  VWGAELA_next;
A68_INT  WWGAELA_no_of_blocks;
A68_32  XWGAELA_pagetable;
A68_INT  YWGAELA_i;
A68_INT  ZWGAELA;  /* to part of loop */
A68_INT  AXGAELA;  /* clause result */
A68_INT * BXGAELA;  /* YIELD */
A68_INT * CXGAELA;  /* YIELD */
A_PROC_ENTRY(trace_data);
 /* line 2023: */
{ 
VWGAELA_next = Block_num;
 /* line 2024: */
 /* line 2025: */
WWGAELA_no_of_blocks = CVGAELA_no_of_data_blocks(Db, Nodps, Data_elts, Data_code, Offset);
 /* line 2026: */
XWGAELA_pagetable = (*(&(Gcdata->Pagetable)));
 /* line 2027: */
 /* line 2028: */
ZWGAELA = (WWGAELA_no_of_blocks-1);
for ( YWGAELA_i = 1;
YWGAELA_i <= ZWGAELA;
YWGAELA_i += 1 )
{ 
NVGAELA_set_wanted((*(&(Gcdata->Blocks_wanted))), VWGAELA_next);
 /* line 2029: */
 /* line 2030: */
 /* line 2039: */
if ( ((*(&A_VINDEX(XWGAELA_pagetable,VWGAELA_next)))<(-1)) )
{ 
 /* line 2040: */
 /* line 2044: */
BXGAELA = (&A_VINDEX(XWGAELA_pagetable,VWGAELA_next)) ;
AXGAELA = (*BXGAELA) = (-(*(&A_VINDEX(XWGAELA_pagetable,VWGAELA_next))));
} 
else
{ 
 /* line 2045: */
 /* line 2046: */
AXGAELA = (*(&A_VINDEX(XWGAELA_pagetable,VWGAELA_next)));
} 
VWGAELA_next = AXGAELA;
}
 /* line 2047: */
NVGAELA_set_wanted((*(&(Gcdata->Blocks_wanted))), VWGAELA_next);
 /* line 2048: */
 /* line 2049: */
CXGAELA = (&((*(&(Gcdata->Gcinfo)))->Data_ptrs)) ;
(*CXGAELA)+=1;
} 
A_PROC_EXIT(trace_data);
return;
} 
#undef NL
 /* line 2052: */

A_STATIC A68_VOID  HXGAELA_add_to_stack(A68_109 * Db, A68_121 * Gcdata, A68_275  Data, void *NonLocals)
#define NL(x) (((IXGAELA_add_to_stack *)NonLocals)->x)
{ 
A68_112  JXGAELA_dpdata;
A68_BOOL  KXGAELA_add_ptr;
A68_100 * LXGAELA_df;
A68_275  MXGAELA;  /* united object - for case conformity */
A68_97  NXGAELA_dp;
A68_BOOL  QXGAELA;  /* optbool result */
A68_112  RXGAELA;  /* avoid structure result */
A68_112  SXGAELA_dpd;
A68_99  TXGAELA_addr;
A68_118 ** UXGAELA_stack;
A68_BOOL  VXGAELA;  /* optbool result */
A68_118  WXGAELA;  /* collateral clause result */
A68_118 * XXGAELA;  /* YIELD */
A68_INT * YXGAELA_stack_size;
A68_INT * ZXGAELA_max_stack_size;
A68_118 ** AYGAELA_stack_ptr;
A68_BOOL  BYGAELA_continue;
A68_BOOL  CYGAELA_not_already_there;
A68_BOOL  DYGAELA;  /* optbool result */
A68_118  EYGAELA;  /* collateral clause result */
A68_118 * FYGAELA;  /* YIELD */
A68_INT * GYGAELA_stack_size;
A68_INT * HYGAELA_max_stack_size;
A_PROC_ENTRY(add_to_stack);
 /* line 2058: */
{ 
 /* line 2059: */
KXGAELA_add_ptr = A68_TRUE;
 /* line 2060: */
LXGAELA_df = (*(&(Db->Df)));
 /* line 2061: */
 /* line 2062: */
MXGAELA = Data ;
switch ( MXGAELA.mode )
{ 
case 1: /* STRUCT(BITS,INT,INT,INT,INT,INT,BITS)  */
NXGAELA_dp = (MXGAELA.data.mode1);
 /* line 2063: */
if ( LEEAELA_is_forgery(Db, NXGAELA_dp) )
{ 
 /* line 2064: */
 /* line 2065: */
NKDAOST_sysfault(PXGAELA);
} 
else
{ 
QXGAELA = !YACAELA_is_nildp(NXGAELA_dp);
if ( QXGAELA )
{ /* line 2066: */
QXGAELA = !VGEAELA_is_gc_nil(LXGAELA_df, NXGAELA_dp);
}
if ( QXGAELA )
{ /* line 2067: */
QXGAELA = !GYBAELA_is_shaky(NXGAELA_dp);
}
if ( QXGAELA )
{ 
 /* line 2068: */
VVGAELA_read_dpdata( Db, NXGAELA_dp, &RXGAELA );
JXGAELA_dpdata = RXGAELA;
} 
else
{ 
 /* line 2069: */
 /* line 2070: */
KXGAELA_add_ptr = A68_FALSE;
} 
} 
break;
case 2: /* STRUCT(MODE99,INT,INT,INT,INT)  */
SXGAELA_dpd = (MXGAELA.data.mode2);
 /* line 2071: */
JXGAELA_dpdata = SXGAELA_dpd;
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 2073: */
 /* line 2074: */
if ( KXGAELA_add_ptr )
{ 
TXGAELA_addr = (*(&((&JXGAELA_dpdata)->Address)));
 /* line 2075: */
UXGAELA_stack = (&(Gcdata->Stack));
 /* line 2076: */
VXGAELA = ((*UXGAELA_stack)==GWDAELA_nildpstack);
if ( ! VXGAELA )
{ /* line 2077: */
VXGAELA = MYDAELA_(TXGAELA_addr, (*(&((&((*UXGAELA_stack)->Data))->Address))));
}
if ( VXGAELA )
{ 
WXGAELA.Data = JXGAELA_dpdata;
WXGAELA.Rest = (*UXGAELA_stack);
XXGAELA = A_HEAP(A68_118 ) ;
(*XXGAELA) = WXGAELA ;
(*UXGAELA_stack) = XXGAELA;
 /* line 2078: */
YXGAELA_stack_size = (&((*(&(Gcdata->Gcinfo)))->Stack_size));
 /* line 2080: */
ZXGAELA_max_stack_size = (&((*(&(Gcdata->Gcinfo)))->Max_stack_size));
 /* line 2081: */
(*YXGAELA_stack_size)+=1;
 /* line 2082: */
if ( ((*YXGAELA_stack_size)>(*ZXGAELA_max_stack_size)) )
{ 
 /* line 2083: */
(*ZXGAELA_max_stack_size)+=1;
} 
} 
else
{ 
AYGAELA_stack_ptr = UXGAELA_stack;
 /* line 2084: */
BYGAELA_continue = A68_TRUE;
 /* line 2085: */
CYGAELA_not_already_there = A68_TRUE;
 /* line 2086: */
for ( ;; )
{ 
 /* line 2087: */
DYGAELA = ((*AYGAELA_stack_ptr)!=GWDAELA_nildpstack);
if ( DYGAELA )
{DYGAELA = BYGAELA_continue;
}
if ( !(DYGAELA) ) break;
 /* line 2088: */
if ( MYDAELA_(TXGAELA_addr, (*(&((&((*AYGAELA_stack_ptr)->Data))->Address)))) )
{ 
 /* line 2089: */
BYGAELA_continue = A68_FALSE;
} 
else
{ 
 /* line 2090: */
if ( QACAELA_(TXGAELA_addr, (*(&((&((*AYGAELA_stack_ptr)->Data))->Address)))) )
{ 
CYGAELA_not_already_there = A68_FALSE;
 /* line 2091: */
 /* line 2092: */
BYGAELA_continue = A68_FALSE;
} 
else
{ 
 /* line 2093: */
 /* line 2094: */
AYGAELA_stack_ptr = (&((*AYGAELA_stack_ptr)->Rest));
} 
} 
}
 /* line 2095: */
 /* line 2096: */
if ( CYGAELA_not_already_there )
{ 
 /* line 2097: */
EYGAELA.Data = JXGAELA_dpdata;
EYGAELA.Rest = (*AYGAELA_stack_ptr);
FYGAELA = A_HEAP(A68_118 ) ;
(*FYGAELA) = EYGAELA ;
(*AYGAELA_stack_ptr) = FYGAELA;
 /* line 2098: */
 /* line 2099: */
GYGAELA_stack_size = (&((*(&(Gcdata->Gcinfo)))->Stack_size));
 /* line 2101: */
HYGAELA_max_stack_size = (&((*(&(Gcdata->Gcinfo)))->Max_stack_size));
 /* line 2102: */
(*GYGAELA_stack_size)+=1;
 /* line 2103: */
 /* line 2104: */
if ( ((*GYGAELA_stack_size)>(*HYGAELA_max_stack_size)) )
{ 
 /* line 2105: */
 /* line 2106: */
 /* line 2107: */
 /* line 2108: */
(*HYGAELA_max_stack_size)+=1;
} 
} 
} 
} 
} 
A_PROC_EXIT(add_to_stack);
return;
} 
#undef NL

A_STATIC A68_VOID  NYGAELA_add_or_trace(A68_109 * Db, A68_121 * Gcdata, A68_97  Dp, void *NonLocals)
#define NL(x) (((OYGAELA_add_or_trace *)NonLocals)->x)
{ 
A68_100 * RYGAELA_df;
A68_BOOL  SYGAELA;  /* optbool result */
A68_275  TYGAELA;  /* OPERATORS - mode -> union mode */
A68_99  UYGAELA;  /* avoid structure result */
A68_99  VYGAELA_addr;
A68_INT  WYGAELA_block_num;
A68_112  XYGAELA;  /* avoid structure result */
A68_112  YYGAELA_d;
A68_BOOL  ZYGAELA;  /* optbool result */
A68_275  AZGAELA;  /* OPERATORS - mode -> union mode */
A68_99  BZGAELA_addr;
A_PROC_ENTRY(add_or_trace);
 /* line 2121: */
{ 
 /* line 2122: */
if ( (DYBAELA_discptr_code(Dp)>=EXDAELA_forgery) )
{ 
NKDAOST_sysfault(QYGAELA);
} 
 /* line 2123: */
RYGAELA_df = (*(&(Db->Df)));
 /* line 2124: */
SYGAELA = !YACAELA_is_nildp(Dp);
if ( SYGAELA )
{SYGAELA = !VGEAELA_is_gc_nil(RYGAELA_df, Dp);
}
 /* line 2125: */
if ( SYGAELA )
{ /* line 2126: */
SYGAELA = !GYBAELA_is_shaky(Dp);
}
if ( SYGAELA )
{ 
 /* line 2127: */
if ( ILGAELA_not_added_to_hashtable(Gcdata, RYGAELA_df, A_UNITE(TYGAELA,mode1,1,Dp)) )
{ 
IHEAELA_get_disc_address( RYGAELA_df, Dp, &UYGAELA );
VYGAELA_addr = UYGAELA;
 /* line 2128: */
WYGAELA_block_num = VYGAELA_addr.Block_num;
 /* line 2129: */
VVGAELA_read_dpdata( Db, Dp, &XYGAELA );
YYGAELA_d = XYGAELA;
 /* line 2130: */
 /* line 2131: */
ZYGAELA = FTEAELA_in_readbuffer((*(*(&(Gcdata->Read_buffer)))), WYGAELA_block_num);
if ( ! ZYGAELA )
{ /* line 2132: */
ZYGAELA = KTEAELA_in_writebuffer(RYGAELA_df, WYGAELA_block_num);
}
if ( ZYGAELA )
{ 
 /* line 2133: */
A_CALLPROC(NL(GXGAELA_add_to_stack),(Db, Gcdata, A_UNITE(AZGAELA,mode2,2,YYGAELA_d)),(Db, Gcdata, A_UNITE(AZGAELA,mode2,2,YYGAELA_d),(NL(GXGAELA_add_to_stack)).nonlocals));
} 
else
{ 
 /* line 2134: */
if ( (YYGAELA_d.Dp_elts!=0) )
{ 
 /* line 2135: */
A_CALLPROC((*NL(IYGAELA_trace)),(Db, Gcdata, RYGAELA_df, YYGAELA_d),(Db, Gcdata, RYGAELA_df, YYGAELA_d,((*NL(IYGAELA_trace))).nonlocals));
} 
else
{ 
 /* line 2136: */
if ( (YYGAELA_d.Data_elts!=0) )
{ 
BZGAELA_addr = YYGAELA_d.Address;
 /* line 2137: */
 /* line 2138: */
 /* line 2139: */
 /* line 2140: */
 /* line 2141: */
 /* line 2142: */
 /* line 2143: */
 /* line 2144: */
A_CALLPROC(NL(SWGAELA_trace_data),(Db, Gcdata, CZGAELA_nodps, YYGAELA_d.Data_elts, YYGAELA_d.Code, BZGAELA_addr.Block_num, BZGAELA_addr.Offset),(Db, Gcdata, CZGAELA_nodps, YYGAELA_d.Data_elts, YYGAELA_d.Code, BZGAELA_addr.Block_num, BZGAELA_addr.Offset,(NL(SWGAELA_trace_data)).nonlocals));
} 
} 
} 
} 
} 
} 
A_PROC_EXIT(add_or_trace);
return;
} 
#undef NL
 /* line 2147: */

A_STATIC A68_VOID  IZGAELA_discptr_trace(A68_109 * Db, A68_121 * Gcdata, A68_100 * Df, A68_97  Dp, void *NonLocals)
#define NL(x) (((JZGAELA_discptr_trace *)NonLocals)->x)
{ 
A68_INT  KZGAELA_f_block;
A68_BOOL  LZGAELA;  /* optbool result */
A68_BOOL  MZGAELA;  /* optbool result */
A68_99  NZGAELA;  /* avoid structure result */
A68_99  OZGAELA_addr;
A68_INT  PZGAELA_block_num;
A68_INT  QZGAELA_offset;
A68_INT  RZGAELA_code;
A68_INT  SZGAELA_chars;
A68_INT  TZGAELA_dps;
A68_BOOL  UZGAELA_foreign;
A68_BOOL  VZGAELA_gcnil;
A68_BOOL  WZGAELA;  /* optbool result */
A68_98  XZGAELA;  /* avoid structure result */
A68_98  YZGAELA_ind;
A68_99  ZZGAELA_addr;
A68_BOOL  AAHAELA;  /* optbool result */
A_PROC_ENTRY(discptr_trace);
 /* line 2148: */
{ 
KZGAELA_f_block = MYBAELA_first_block(Dp);
 /* line 2149: */
LZGAELA = (PYBAELA_first_offset(Dp)==0);
if ( LZGAELA )
{ /* line 2150: */
LZGAELA = (KZGAELA_f_block!=0);
}
if ( LZGAELA )
{ 
LNGAELA_set_indir_wanted(Gcdata, KZGAELA_f_block);
} 
 /* line 2151: */
 /* line 2152: */
if ( !GYBAELA_is_shaky(Dp) )
{ 
 /* line 2153: */
MZGAELA = ((*(&(Gcdata->Shaky_ptrs)))!=HWDAELA_nilshakydata);
if ( MZGAELA )
{MZGAELA = !VGEAELA_is_gc_nil(Df, Dp);
}
if ( MZGAELA )
{ /* line 2154: */
MZGAELA = !GYBAELA_is_shaky(Dp);
}
if ( MZGAELA )
{ 
IHEAELA_get_disc_address( Df, Dp, &NZGAELA );
OZGAELA_addr = NZGAELA;
 /* line 2155: */
 /* line 2156: */
MUGAELA_mark_shaky_wanted(Db, Gcdata, Df, OZGAELA_addr, OZGAELA_addr);
} 
 /* line 2157: */
 /* line 2158: */
 /* line 2159: */
 /* line 2160: */
 /* line 2161: */
 /* line 2162: */
UZGAELA_foreign = A68_FALSE;
 /* line 2163: */
VZGAELA_gcnil = A68_FALSE;
 /* line 2165: */
WZGAELA = (PYBAELA_first_offset(Dp)==0);
if ( WZGAELA )
{ /* line 2166: */
WZGAELA = !YACAELA_is_nildp(Dp);
}
if ( WZGAELA )
{ 
ZZDAELA_fetch_ind( Df, Dp, &XZGAELA );
YZGAELA_ind = XZGAELA;
 /* line 2167: */
ZZGAELA_addr = YZGAELA_ind.Address;
 /* line 2168: */
PZGAELA_block_num = ZZGAELA_addr.Block_num;
 /* line 2169: */
QZGAELA_offset = ZZGAELA_addr.Offset;
 /* line 2170: */
RZGAELA_code = YZGAELA_ind.Code;
 /* line 2171: */
SZGAELA_chars = YZGAELA_ind.Data_elts;
 /* line 2172: */
TZGAELA_dps = YZGAELA_ind.Dp_elts;
 /* line 2173: */
 /* line 2174: */
AAHAELA = (YZGAELA_ind.Version!=YYBAELA_version(Dp));
if ( ! AAHAELA )
{AAHAELA = QACAELA_(ZZGAELA_addr, NACAELA_nilgcaddress);
}
VZGAELA_gcnil = AAHAELA;
 /* line 2175: */
if ( !VZGAELA_gcnil )
{ 
 /* line 2176: */
LNGAELA_set_indir_wanted(Gcdata, MYBAELA_first_block(Dp));
} 
} 
else
{ 
PZGAELA_block_num = MYBAELA_first_block(Dp);
 /* line 2177: */
QZGAELA_offset = PYBAELA_first_offset(Dp);
 /* line 2178: */
SZGAELA_chars = SYBAELA_data_elts(Dp);
 /* line 2179: */
TZGAELA_dps = VYBAELA_dp_elts(Dp);
 /* line 2180: */
 /* line 2181: */
RZGAELA_code = DYBAELA_discptr_code(Dp);
} 
 /* line 2182: */
 /* line 2183: */
if ( !VZGAELA_gcnil )
{ 
 /* line 2184: */
if ( (TZGAELA_dps==0) )
{ 
 /* line 2185: */
if ( (SZGAELA_chars!=0) )
{ 
 /* line 2186: */
 /* line 2187: */
 /* line 2188: */
A_CALLPROC(NL(SWGAELA_trace_data),(Db, Gcdata, BAHAELA_nodps, SZGAELA_chars, RZGAELA_code, PZGAELA_block_num, QZGAELA_offset),(Db, Gcdata, BAHAELA_nodps, SZGAELA_chars, RZGAELA_code, PZGAELA_block_num, QZGAELA_offset,(NL(SWGAELA_trace_data)).nonlocals));
} 
} 
else
{ 
 /* line 2189: */
 /* line 2191: */
 /* line 2192: */
 /* line 2193: */
A_CALLPROC(NL(MYGAELA_add_or_trace),(Db, Gcdata, Dp),(Db, Gcdata, Dp,(NL(MYGAELA_add_or_trace)).nonlocals));
} 
} 
} 
} 
A_PROC_EXIT(discptr_trace);
return;
} 
#undef NL
 /* line 2196: */

A_STATIC A68_VOID  HAHAELA_anonymous(A68_109 * Db, A68_121 * Gcdata, A68_100 * Df, A68_112  Data, void *NonLocals)
#define NL(x) (((IAHAELA_anonymous *)NonLocals)->x)
{ 
A68_100 * JAHAELA_df;
A68_99  KAHAELA_addr;
A68_INT  LAHAELA_cpos;
A68_INT  MAHAELA_b_num;
A68_INT  NAHAELA_next_read_size;
A68_INT  OAHAELA_num_dps;
A68_INT  PAHAELA_num_chars;
A68_INT  QAHAELA_code;
A68_VC  RAHAELA_blocks_wanted;
A68_31  TAHAELA_generator;   /* proc value of non-global proc */
A68_VC  ZAHAELA;  /* avoid structure result */
A68_VC  YAHAELA_buffer;
A68_INT  ABHAELA_dp_count;
A68_BOOL  BBHAELA_is_discptr;
A68_INT * CBHAELA;  /* YIELD */
A68_INT  DBHAELA_i;
A68_INT  EBHAELA_discptrs_in_block;
A68_VC  FBHAELA;  /* OPERATORS - trim index */
A68_VC  GBHAELA_block_heading;
A68_INT  HBHAELA_lwb;
A68_VC  IBHAELA;  /* OPERATORS - trim index */
A68_VC  JBHAELA_data_heading;
A68_INT  KBHAELA_k;
A68_INT  LBHAELA;  /* to part of loop */
A68_INT  MBHAELA_lwb;
A68_VC  OBHAELA;  /* OPERATORS - trim index */
A68_97  PBHAELA;  /* avoid structure result */
A68_97  NBHAELA_d;
A68_BOOL  QBHAELA;  /* clause result */
A68_INT * RBHAELA;  /* YIELD */
 /* line 2197: */
{ 
JAHAELA_df = (*(&(Db->Df)));
 /* line 2198: */
KAHAELA_addr = Data.Address;
 /* line 2199: */
LAHAELA_cpos = KAHAELA_addr.Offset;
 /* line 2200: */
MAHAELA_b_num = KAHAELA_addr.Block_num;
 /* line 2201: */
NAHAELA_next_read_size = Data.Read_size;
 /* line 2202: */
OAHAELA_num_dps = Data.Dp_elts;
 /* line 2203: */
PAHAELA_num_chars = Data.Data_elts;
 /* line 2204: */
QAHAELA_code = Data.Code;
 /* line 2205: */
RAHAELA_blocks_wanted = (*(&(Gcdata->Blocks_wanted)));
 /* line 2207: */
A_CLOSURE( TAHAELA_generator, UAHAELA_generator, VAHAELA_generator );
A_CALLPROC(TAHAELA_generator,(A68_TRUE, &ZAHAELA),(A68_TRUE, &ZAHAELA,(TAHAELA_generator).nonlocals));
YAHAELA_buffer = ZAHAELA;
 /* line 2208: */
ABHAELA_dp_count = 0;
 /* line 2209: */
 /* line 2213: */
 /* line 2214: */
 /* line 2215: */
if ( UTEAELA_read_block(Db, JAHAELA_df, (*(&(Gcdata->Read_buffer))), YAHAELA_buffer, NAHAELA_next_read_size, MAHAELA_b_num) )
{ 
CBHAELA = (&((*(&(Gcdata->Gcinfo)))->Disc_accesses)) ;
(*CBHAELA)+=1;
} 
 /* line 2216: */
for ( DBHAELA_i = 1;;
DBHAELA_i += 1 ) 
{ 
 /* line 2217: */
 /* line 2218: */
 /* line 2219: */
 /* line 2220: */
GBHAELA_block_heading = A_VTRIM(FBHAELA,(YAHAELA_buffer),A_VTSCRIPT(&(FBHAELA.upb),(YAHAELA_buffer).upb,(RICAELA_actual_block_size+1),(RICAELA_actual_block_size+CCCAELA_block_heading_size)));
 /* line 2221: */
NVGAELA_set_wanted((*(&(Gcdata->Blocks_wanted))), MAHAELA_b_num);
 /* line 2222: */
 /* line 2223: */
if ( (LAHAELA_cpos==SNBAELA_block_size) )
{ 
EBHAELA_discptrs_in_block = XECAELA_block_dps(GBHAELA_block_heading);
 /* line 2224: */
 /* line 2225: */
LAHAELA_cpos = FFCAELA_data_start(GBHAELA_block_heading);
} 
else
{ 
HBHAELA_lwb = (LAHAELA_cpos-=(CGCAELA_data_heading_size-1));
 /* line 2226: */
 /* line 2227: */
JBHAELA_data_heading = A_VTRIM(IBHAELA,(YAHAELA_buffer),A_VTSCRIPT(&(IBHAELA.upb),(YAHAELA_buffer).upb,HBHAELA_lwb,((LAHAELA_cpos+CGCAELA_data_heading_size)-1)));
 /* line 2228: */
 /* line 2229: */
EBHAELA_discptrs_in_block = CICAELA_dps_in_block(JBHAELA_data_heading);
} 
 /* line 2230: */
 /* line 2231: */
LBHAELA = EBHAELA_discptrs_in_block;
for ( KBHAELA_k = 1;
KBHAELA_k <= LBHAELA;
KBHAELA_k += 1 )
{ 
MBHAELA_lwb = (LAHAELA_cpos-=TSBAELA_discptr_size);
 /* line 2232: */
 /* line 2233: */
IUBAELA_chars_to_dp( A_VTRIM(OBHAELA,(YAHAELA_buffer),A_VTSCRIPT(&(OBHAELA.upb),(YAHAELA_buffer).upb,MBHAELA_lwb,((LAHAELA_cpos+TSBAELA_discptr_size)-1))), &PBHAELA );
NBHAELA_d = PBHAELA;
 /* line 2234: */
 /* line 2235: */
A_CALLPROC(NL(HZGAELA_discptr_trace),(Db, Gcdata, JAHAELA_df, NBHAELA_d),(Db, Gcdata, JAHAELA_df, NBHAELA_d,(NL(HZGAELA_discptr_trace)).nonlocals));
}
 /* line 2236: */
 /* line 2237: */
QBHAELA = ((ABHAELA_dp_count+=EBHAELA_discptrs_in_block)!=OAHAELA_num_dps);
if ( !QBHAELA ) break;
MAHAELA_b_num = HECAELA_next_block(GBHAELA_block_heading);
 /* line 2238: */
NAHAELA_next_read_size = NFCAELA_bh_read_size(GBHAELA_block_heading);
 /* line 2239: */
 /* line 2240: */
 /* line 2241: */
if ( UTEAELA_read_block(Db, JAHAELA_df, (*(&(Gcdata->Read_buffer))), YAHAELA_buffer, NAHAELA_next_read_size, MAHAELA_b_num) )
{ 
RBHAELA = (&((*(&(Gcdata->Gcinfo)))->Disc_accesses)) ;
(*RBHAELA)+=1;
} 
 /* line 2242: */
 /* line 2243: */
LAHAELA_cpos = SNBAELA_block_size;
}
 /* line 2244: */
 /* line 2245: */
if ( (PAHAELA_num_chars!=0) )
{ 
 /* line 2246: */
 /* line 2247: */
 /* line 2248: */
A_CALLPROC(NL(SWGAELA_trace_data),(Db, Gcdata, SBHAELA_nodps, PAHAELA_num_chars, QAHAELA_code, MAHAELA_b_num, (LAHAELA_cpos-1)),(Db, Gcdata, SBHAELA_nodps, PAHAELA_num_chars, QAHAELA_code, MAHAELA_b_num, (LAHAELA_cpos-1),(NL(SWGAELA_trace_data)).nonlocals));
} 
} 
return;
} 
#undef NL

A_STATIC A68_VOID  UBHAELA_print_gcinfo(A68_121  Gcdata)
{ 
A68_119  VBHAELA_gcinfo;
A68_32  WBHAELA_max_hashlist;
A68_INT  XBHAELA_max;
A68_INT  YBHAELA_min;
A68_INT  ZBHAELA_sum;
A68_INT  ACHAELA_i;
A68_INT  BCHAELA;  /* to part of loop */
A68_INT  CCHAELA_avge;
A68_296  DCHAELA;  /* collateral clause result */
A68_52  GCHAELA;  /* OPERATORS - mode -> union mode */
A68_VC  HCHAELA;  /* YIELD */
A68_52  ICHAELA;  /* OPERATORS - mode -> union mode */
A68_INT  JCHAELA;  /* YIELD */
A68_52  MCHAELA;  /* OPERATORS - mode -> union mode */
A68_VC  NCHAELA;  /* YIELD */
A68_52  OCHAELA;  /* OPERATORS - mode -> union mode */
A68_52  RCHAELA;  /* OPERATORS - mode -> union mode */
A68_VC  SCHAELA;  /* YIELD */
A68_52  TCHAELA;  /* OPERATORS - mode -> union mode */
A68_52  UCHAELA;  /* OPERATORS - mode -> union mode */
A68_56  VCHAELA;  /* procedure value */
A68_52  YCHAELA;  /* OPERATORS - mode -> union mode */
A68_VC  ZCHAELA;  /* YIELD */
A68_52  ADHAELA;  /* OPERATORS - mode -> union mode */
A68_52  DDHAELA;  /* OPERATORS - mode -> union mode */
A68_VC  EDHAELA;  /* YIELD */
A68_52  FDHAELA;  /* OPERATORS - mode -> union mode */
A68_INT  GDHAELA;  /* YIELD */
A68_52  JDHAELA;  /* OPERATORS - mode -> union mode */
A68_VC  KDHAELA;  /* YIELD */
A68_52  LDHAELA;  /* OPERATORS - mode -> union mode */
A68_INT  MDHAELA;  /* YIELD */
A68_52  PDHAELA;  /* OPERATORS - mode -> union mode */
A68_VC  QDHAELA;  /* YIELD */
A68_52  RDHAELA;  /* OPERATORS - mode -> union mode */
A68_INT  SDHAELA;  /* YIELD */
A68_52  TDHAELA;  /* OPERATORS - mode -> union mode */
A68_56  UDHAELA;  /* procedure value */
A68_52  VDHAELA;  /* OPERATORS - mode -> union mode */
A68_56  WDHAELA;  /* procedure value */
A68_85  XDHAELA;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(print_gcinfo);
 /* line 2251: */
{ 
VBHAELA_gcinfo = (*Gcdata.Gcinfo);
 /* line 2252: */
WBHAELA_max_hashlist = VBHAELA_gcinfo.Max_hashlist;
 /* line 2253: */
XBHAELA_max = 0;
 /* line 2254: */
YBHAELA_min = 1000000;
 /* line 2255: */
ZBHAELA_sum = 0;
 /* line 2256: */
 /* line 2257: */
BCHAELA = WBHAELA_max_hashlist.upb;
for ( ACHAELA_i = 1;
ACHAELA_i <= BCHAELA;
ACHAELA_i += 1 )
{ 
ZBHAELA_sum+=A_VINDEX(WBHAELA_max_hashlist,ACHAELA_i);
 /* line 2258: */
if ( (A_VINDEX(WBHAELA_max_hashlist,ACHAELA_i)<YBHAELA_min) )
{ 
YBHAELA_min = A_VINDEX(WBHAELA_max_hashlist,ACHAELA_i);
} 
 /* line 2259: */
if ( (A_VINDEX(WBHAELA_max_hashlist,ACHAELA_i)>XBHAELA_max) )
{ 
 /* line 2260: */
XBHAELA_max = A_VINDEX(WBHAELA_max_hashlist,ACHAELA_i);
} 
}
 /* line 2261: */
CCHAELA_avge = (ZBHAELA_sum/WBHAELA_max_hashlist.upb);
 /* line 2262: */
HCHAELA = FCHAELA ;
DCHAELA.data[0] = A_UNITE(GCHAELA,mode7,7,HCHAELA);
JCHAELA = WBHAELA_max_hashlist.upb ;
DCHAELA.data[1] = A_UNITE(ICHAELA,mode1,1,JCHAELA);
NCHAELA = LCHAELA ;
DCHAELA.data[2] = A_UNITE(MCHAELA,mode7,7,NCHAELA);
 /* line 2263: */
DCHAELA.data[3] = A_UNITE(OCHAELA,mode1,1,XBHAELA_max);
SCHAELA = QCHAELA ;
DCHAELA.data[4] = A_UNITE(RCHAELA,mode7,7,SCHAELA);
DCHAELA.data[5] = A_UNITE(TCHAELA,mode1,1,YBHAELA_min);
VCHAELA.fn.fn_global = LRAAOSL_newline;
VCHAELA.nonlocals = A68_NIL;
DCHAELA.data[6] = A_UNITE(UCHAELA,mode12,12,VCHAELA);
ZCHAELA = XCHAELA ;
DCHAELA.data[7] = A_UNITE(YCHAELA,mode7,7,ZCHAELA);
DCHAELA.data[8] = A_UNITE(ADHAELA,mode1,1,CCHAELA_avge);
 /* line 2264: */
EDHAELA = CDHAELA ;
DCHAELA.data[9] = A_UNITE(DDHAELA,mode7,7,EDHAELA);
GDHAELA = VBHAELA_gcinfo.Disc_accesses ;
DCHAELA.data[10] = A_UNITE(FDHAELA,mode1,1,GDHAELA);
 /* line 2265: */
KDHAELA = IDHAELA ;
DCHAELA.data[11] = A_UNITE(JDHAELA,mode7,7,KDHAELA);
MDHAELA = VBHAELA_gcinfo.Max_stack_size ;
DCHAELA.data[12] = A_UNITE(LDHAELA,mode1,1,MDHAELA);
QDHAELA = ODHAELA ;
DCHAELA.data[13] = A_UNITE(PDHAELA,mode7,7,QDHAELA);
 /* line 2266: */
SDHAELA = VBHAELA_gcinfo.Data_ptrs ;
DCHAELA.data[14] = A_UNITE(RDHAELA,mode1,1,SDHAELA);
UDHAELA.fn.fn_global = LRAAOSL_newline;
UDHAELA.nonlocals = A68_NIL;
DCHAELA.data[15] = A_UNITE(TDHAELA,mode12,12,UDHAELA);
WDHAELA.fn.fn_global = LRAAOSL_newline;
WDHAELA.nonlocals = A68_NIL;
DCHAELA.data[16] = A_UNITE(VDHAELA,mode12,12,WDHAELA);
 /* line 2267: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(XDHAELA,DCHAELA,17,A68_52 ));
} 
A_PROC_EXIT(print_gcinfo);
return;
} 
#undef NL
 /* line 2270: */

A_STATIC A68_BOOL  CEHAELA_indir_needed(A68_100 * Df, A68_121 * Gcdata, A68_98  Ind, A68_INT  Index)
{ 
A68_BOOL  DEHAELA;  /* clause result */
A68_BOOL  EEHAELA;  /* optbool result */
A68_BOOL  FEHAELA_found;
A68_105 * GEHAELA_list;
A68_BOOL  HEHAELA;  /* optbool result */
A_PROC_ENTRY(indir_needed);
 /* line 2271: */
{ 
 /* line 2272: */
if ( Ind.Shaky )
{ 
 /* line 2273: */
DEHAELA = A68_TRUE;
} 
else
{ 
 /* line 2274: */
EEHAELA = !QACAELA_(Ind.Address, LACAELA_niladdress);
if ( EEHAELA )
{EEHAELA = !QACAELA_(Ind.Address, NACAELA_nilgcaddress);
}
 /* line 2275: */
if ( EEHAELA )
{ /* line 2276: */
EEHAELA = !ENGAELA_is_free((*(&(Gcdata->Blocks_wanted))), Ind.Address.Block_num);
}
FEHAELA_found = EEHAELA;
 /* line 2280: */
 /* line 2281: */
if ( !FEHAELA_found )
{ 
GEHAELA_list = (*(&(Df->Instore_vars)));
 /* line 2282: */
for ( ;; )
{ 
 /* line 2283: */
HEHAELA = (GEHAELA_list!=JWDAELA_nilvarlist);
if ( HEHAELA )
{HEHAELA = !FEHAELA_found;
}
if ( !(HEHAELA) ) break;
if ( ((*(&(GEHAELA_list->Indirection)))==Index) )
{ 
FEHAELA_found = A68_TRUE;
} 
 /* line 2284: */
 /* line 2285: */
GEHAELA_list = (*(&(GEHAELA_list->Rest)));
}
 /* line 2286: */
} 
 /* line 2287: */
 /* line 2288: */
 /* line 2289: */
DEHAELA = FEHAELA_found;
} 
} 
A_PROC_EXIT(indir_needed);
return( DEHAELA );
} 
#undef NL

A_STATIC A68_BOOL  LEHAELA_instore_indir(A68_100 * Df, A68_98  Ind, A68_INT  Index)
{ 
A68_BOOL  MEHAELA_found;
A68_105 * NEHAELA_list;
A68_BOOL  OEHAELA;  /* optbool result */
A68_BOOL  PEHAELA;  /* clause result */
A_PROC_ENTRY(instore_indir);
 /* line 2297: */
{ 
MEHAELA_found = A68_FALSE;
 /* line 2298: */
NEHAELA_list = (*(&(Df->Instore_vars)));
 /* line 2299: */
for ( ;; )
{ 
 /* line 2300: */
OEHAELA = (NEHAELA_list!=JWDAELA_nilvarlist);
if ( OEHAELA )
{OEHAELA = !MEHAELA_found;
}
if ( !(OEHAELA) ) break;
if ( ((*(&(NEHAELA_list->Indirection)))==Index) )
{ 
MEHAELA_found = A68_TRUE;
} 
 /* line 2301: */
 /* line 2302: */
NEHAELA_list = (*(&(NEHAELA_list->Rest)));
}
 /* line 2303: */
 /* line 2304: */
PEHAELA = MEHAELA_found;
} 
A_PROC_EXIT(instore_indir);
return( PEHAELA );
} 
#undef NL

A_STATIC A68_VOID  FGHAELA_generator(A68_BOOL  DGHAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((GGHAELA_generator *)NonLocals)->x)
{ 
A68_32  HGHAELA;  /* clause result */
A68_32  IGHAELA;  /* OPERATORS - dynamic generator */
{ 
IGHAELA.upb = SICAELA_max_ints_in_block ;
( DGHAELA_anonymous? A_VLOC(A68_INT ,IGHAELA): A_VHEAP(A68_INT ,IGHAELA) );
HGHAELA = IGHAELA;
} 
*ReturnedValue = (HGHAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  NGHAELA_generator(A68_BOOL  LGHAELA_anonymous, A68_101  *ReturnedValue, void *NonLocals)
#define NL(x) (((OGHAELA_generator *)NonLocals)->x)
{ 
A68_101  PGHAELA;  /* clause result */
A68_101  QGHAELA;  /* OPERATORS - dynamic generator */
{ 
QGHAELA.upb = 0 ;
( LGHAELA_anonymous? A_VLOC(A68_97 ,QGHAELA): A_VHEAP(A68_97 ,QGHAELA) );
PGHAELA = QGHAELA;
} 
*ReturnedValue = (PGHAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  LHHAELA_generator(A68_BOOL  JHHAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((MHHAELA_generator *)NonLocals)->x)
{ 
A68_32  NHHAELA;  /* clause result */
A68_32  OHHAELA;  /* OPERATORS - dynamic generator */
{ 
 /* line 2427: */
OHHAELA.upb = SICAELA_max_ints_in_block ;
( JHHAELA_anonymous? A_VLOC(A68_INT ,OHHAELA): A_VHEAP(A68_INT ,OHHAELA) );
NHHAELA = OHHAELA;
} 
*ReturnedValue = (NHHAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  AIHAELA_generator(A68_BOOL  YHHAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((BIHAELA_generator *)NonLocals)->x)
{ 
A68_32  CIHAELA;  /* clause result */
A68_32  DIHAELA;  /* OPERATORS - dynamic generator */
{ 
 /* line 2449: */
DIHAELA.upb = (*NL(TGHAELA_count)) ;
( YHHAELA_anonymous? A_VLOC(A68_INT ,DIHAELA): A_VHEAP(A68_INT ,DIHAELA) );
CIHAELA = DIHAELA;
} 
*ReturnedValue = (CIHAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  NIHAELA_generator(A68_BOOL  LIHAELA_anonymous, A68_101  *ReturnedValue, void *NonLocals)
#define NL(x) (((OIHAELA_generator *)NonLocals)->x)
{ 
A68_101  PIHAELA;  /* clause result */
A68_101  QIHAELA;  /* OPERATORS - dynamic generator */
{ 
 /* line 2456: */
QIHAELA.upb = 1 ;
( LIHAELA_anonymous? A_VLOC(A68_97 ,QIHAELA): A_VHEAP(A68_97 ,QIHAELA) );
PIHAELA = QIHAELA;
} 
*ReturnedValue = (PIHAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  AOHAELA_generator(A68_BOOL  YNHAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((BOHAELA_generator *)NonLocals)->x)
{ 
A68_VC  COHAELA;  /* clause result */
A68_VC  DOHAELA;  /* OPERATORS - dynamic generator */
{ 
DOHAELA.upb = SNBAELA_block_size ;
( YNHAELA_anonymous? A_VLOC(A68_CHAR ,DOHAELA): A_VHEAP(A68_CHAR ,DOHAELA) );
COHAELA = DOHAELA;
} 
*ReturnedValue = (COHAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  SQHAELA_generator(A68_BOOL  QQHAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((TQHAELA_generator *)NonLocals)->x)
{ 
A68_32  UQHAELA;  /* clause result */
A68_32  VQHAELA;  /* OPERATORS - dynamic generator */
{ 
VQHAELA.upb = 0 ;
( QQHAELA_anonymous? A_VLOC(A68_INT ,VQHAELA): A_VHEAP(A68_INT ,VQHAELA) );
UQHAELA = VQHAELA;
} 
*ReturnedValue = (UQHAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  ARHAELA_generator(A68_BOOL  YQHAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((BRHAELA_generator *)NonLocals)->x)
{ 
A68_32  CRHAELA;  /* clause result */
A68_32  DRHAELA;  /* OPERATORS - dynamic generator */
{ 
DRHAELA.upb = 0 ;
( YQHAELA_anonymous? A_VLOC(A68_INT ,DRHAELA): A_VHEAP(A68_INT ,DRHAELA) );
CRHAELA = DRHAELA;
} 
*ReturnedValue = (CRHAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  SRHAELA_generator(A68_BOOL  QRHAELA_anonymous, A68_106  *ReturnedValue, void *NonLocals)
#define NL(x) (((TRHAELA_generator *)NonLocals)->x)
{ 
A68_106  URHAELA;  /* clause result */
A68_106  VRHAELA;  /* OPERATORS - dynamic generator */
{ 
 /* line 2657: */
VRHAELA.upb = NL(IOHAELA_indirs_in_fixed_block) ;
( QRHAELA_anonymous? A_VLOC(A68_98 ,VRHAELA): A_VHEAP(A68_98 ,VRHAELA) );
URHAELA = VRHAELA;
} 
*ReturnedValue = (URHAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  ASHAELA_generator(A68_BOOL  YRHAELA_anonymous, A68_106  *ReturnedValue, void *NonLocals)
#define NL(x) (((BSHAELA_generator *)NonLocals)->x)
{ 
A68_106  CSHAELA;  /* clause result */
A68_106  DSHAELA;  /* OPERATORS - dynamic generator */
{ 
 /* line 2659: */
DSHAELA.upb = (NL(IOHAELA_indirs_in_fixed_block)+(*NL(PRHAELA_indirs_not_in_fixed))) ;
( YRHAELA_anonymous? A_VLOC(A68_98 ,DSHAELA): A_VHEAP(A68_98 ,DSHAELA) );
CSHAELA = DSHAELA;
} 
*ReturnedValue = (CSHAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  NSHAELA_generator(A68_BOOL  LSHAELA_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((OSHAELA_generator *)NonLocals)->x)
{ 
A68_VC  PSHAELA;  /* clause result */
A68_VC  QSHAELA;  /* OPERATORS - dynamic generator */
{ 
QSHAELA.upb = ((*NL(PRHAELA_indirs_not_in_fixed))*ABCAELA_indirection_size) ;
( LSHAELA_anonymous? A_VLOC(A68_CHAR ,QSHAELA): A_VHEAP(A68_CHAR ,QSHAELA) );
PSHAELA = QSHAELA;
} 
*ReturnedValue = (PSHAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  CTHAELA_generator(A68_BOOL  ATHAELA_anonymous, A68_101  *ReturnedValue, void *NonLocals)
#define NL(x) (((DTHAELA_generator *)NonLocals)->x)
{ 
A68_101  ETHAELA;  /* clause result */
A68_101  FTHAELA;  /* OPERATORS - dynamic generator */
{ 
FTHAELA.upb = HJEAELA_array_size(NL(PNHAELA_db), NL(NRHAELA_df), (*(*(&(NL(NRHAELA_df)->Freelist_dp))))) ;
( ATHAELA_anonymous? A_VLOC(A68_97 ,FTHAELA): A_VHEAP(A68_97 ,FTHAELA) );
ETHAELA = FTHAELA;
} 
*ReturnedValue = (ETHAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  QTHAELA_generator(A68_BOOL  OTHAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((RTHAELA_generator *)NonLocals)->x)
{ 
A68_32  STHAELA;  /* clause result */
A68_32  TTHAELA;  /* OPERATORS - dynamic generator */
{ 
TTHAELA.upb = HJEAELA_array_size(NL(PNHAELA_db), NL(NRHAELA_df), NL(NTHAELA_cptr)) ;
( OTHAELA_anonymous? A_VLOC(A68_INT ,TTHAELA): A_VHEAP(A68_INT ,TTHAELA) );
STHAELA = TTHAELA;
} 
*ReturnedValue = (STHAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  GUHAELA_generator(A68_BOOL  EUHAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((HUHAELA_generator *)NonLocals)->x)
{ 
A68_32  IUHAELA;  /* clause result */
A68_32  JUHAELA;  /* OPERATORS - dynamic generator */
{ 
JUHAELA.upb = NL(DUHAELA_size) ;
( EUHAELA_anonymous? A_VLOC(A68_INT ,JUHAELA): A_VHEAP(A68_INT ,JUHAELA) );
IUHAELA = JUHAELA;
} 
*ReturnedValue = (IUHAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  TUHAELA_generator(A68_BOOL  RUHAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((UUHAELA_generator *)NonLocals)->x)
{ 
A68_32  VUHAELA;  /* clause result */
A68_32  WUHAELA;  /* OPERATORS - dynamic generator */
{ 
WUHAELA.upb = HJEAELA_array_size(NL(PNHAELA_db), NL(NRHAELA_df), NL(QUHAELA_cptr)) ;
( RUHAELA_anonymous? A_VLOC(A68_INT ,WUHAELA): A_VHEAP(A68_INT ,WUHAELA) );
VUHAELA = WUHAELA;
} 
*ReturnedValue = (VUHAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  DVHAELA_generator(A68_BOOL  BVHAELA_anonymous, A68_101  *ReturnedValue, void *NonLocals)
#define NL(x) (((EVHAELA_generator *)NonLocals)->x)
{ 
A68_101  FVHAELA;  /* clause result */
A68_101  GVHAELA;  /* OPERATORS - dynamic generator */
{ 
GVHAELA.upb = HJEAELA_array_size(NL(PNHAELA_db), NL(NRHAELA_df), (*(*(&(NL(NRHAELA_df)->Pagetable_dp))))) ;
( BVHAELA_anonymous? A_VLOC(A68_97 ,GVHAELA): A_VHEAP(A68_97 ,GVHAELA) );
FVHAELA = GVHAELA;
} 
*ReturnedValue = (FVHAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  SVHAELA_generator(A68_BOOL  QVHAELA_anonymous, A68_46  *ReturnedValue, void *NonLocals)
#define NL(x) (((TVHAELA_generator *)NonLocals)->x)
{ 
A68_46  VVHAELA;  /* OPERATORS - dynamic generator */
A68_307  UVHAELA_anonymous;
A68_31  XVHAELA_generator;   /* proc value of non-global proc */
A68_306 * CWHAELA_anonymous;
A68_INT  DWHAELA;  /* forall loop counter */
A68_VC  EWHAELA;  /* avoid structure result */
A68_46  FWHAELA;  /* clause result */
{ 
VVHAELA.upb = ANBAELA_fixed_overhead ;
( QVHAELA_anonymous? A_VLOC(A68_VC ,VVHAELA): A_VHEAP(A68_VC ,VVHAELA) );
UVHAELA_anonymous = VVHAELA;
A_CLOSURE( XVHAELA_generator, YVHAELA_generator, ZVHAELA_generator );
DWHAELA = (*(&UVHAELA_anonymous)).upb -1;
CWHAELA_anonymous = (*(&UVHAELA_anonymous)).data;
for (;DWHAELA-- >= 0;
(CWHAELA_anonymous++
) )
{
A_CALLPROC(XVHAELA_generator,(QVHAELA_anonymous, &EWHAELA),(QVHAELA_anonymous, &EWHAELA,(XVHAELA_generator).nonlocals));
(*CWHAELA_anonymous) = EWHAELA;
}
FWHAELA = UVHAELA_anonymous;
} 
*ReturnedValue = (FWHAELA);
return;
} 
#undef NL
 /* line 2781: */
 /* line 2782: */

A_STATIC A68_VOID  OYHAELA_add_new_address(A68_109 * Db, A68_100 * Old_df, A68_100 * New_df, A68_115 * Hashtable, A68_99  Old_addr, A68_97  New)
{ 
A68_115  PYHAELA;  /* united object - for case conformity */
A68_117  QYHAELA_old_and_new;
A68_99  RYHAELA;  /* avoid structure result */
A68_99  SYHAELA_new_addr;
A68_INT  TYHAELA_old_address;
A68_INT  UYHAELA_old_block_num;
A68_INT  VYHAELA_old_offset;
A68_INT  WYHAELA_index;
A68_114 ** XYHAELA_oan;
A68_BOOL  AZHAELA_continue;
A68_BOOL  BZHAELA;  /* optbool result */
A68_BOOL  CZHAELA;  /* optbool result */
A68_114  DZHAELA;  /* collateral clause result */
A68_114 * EZHAELA;  /* YIELD */
A_PROC_ENTRY(add_new_address);
 /* line 2783: */
{ 
 /* line 2784: */
PYHAELA = (*Hashtable) ;
switch ( PYHAELA.mode )
{ 
case 2: /* REF VECTOR [] REF MODE114 */
QYHAELA_old_and_new = (PYHAELA.data.mode2);
 /* line 2785: */
{ 
IHEAELA_get_disc_address( New_df, New, &RYHAELA );
SYHAELA_new_addr = RYHAELA;
 /* line 2786: */
TYHAELA_old_address = RYDAELA_address_rep(Old_addr);
 /* line 2787: */
UYHAELA_old_block_num = Old_addr.Block_num;
 /* line 2788: */
VYHAELA_old_offset = Old_addr.Offset;
 /* line 2789: */
WYHAELA_index = UKGAELA_hash_index(TYHAELA_old_address);
 /* line 2790: */
XYHAELA_oan = (&A_VINDEX(QYHAELA_old_and_new,WYHAELA_index));
 /* line 2791: */
 /* line 2792: */
if ( ((*XYHAELA_oan)==FWDAELA_nilold_and_new) )
{ 
 /* line 2793: */
NKDAOST_sysfault(ZYHAELA);
} 
 /* line 2794: */
AZHAELA_continue = A68_TRUE;
 /* line 2795: */
for ( ;; )
{ 
 /* line 2796: */
BZHAELA = ((*XYHAELA_oan)!=FWDAELA_nilold_and_new);
if ( BZHAELA )
{BZHAELA = AZHAELA_continue;
}
if ( !(BZHAELA) ) break;
 /* line 2797: */
 /* line 2798: */
if ( BLGAELA_less_than((*(&((*XYHAELA_oan)->Old_block))), (*(&((*XYHAELA_oan)->Old_offset))), UYHAELA_old_block_num, VYHAELA_old_offset) )
{ 
 /* line 2799: */
XYHAELA_oan = (&((*XYHAELA_oan)->Rest));
} 
else
{ 
 /* line 2800: */
CZHAELA = ((*(&((*XYHAELA_oan)->Old_block)))==UYHAELA_old_block_num);
if ( CZHAELA )
{ /* line 2801: */
CZHAELA = ((*(&((*XYHAELA_oan)->Old_offset)))==VYHAELA_old_offset);
}
if ( CZHAELA )
{ 
AZHAELA_continue = A68_FALSE;
 /* line 2802: */
 /* line 2803: */
DZHAELA.Old_block = (*(&((*XYHAELA_oan)->Old_block)));
 /* line 2804: */
DZHAELA.Old_offset = (*(&((*XYHAELA_oan)->Old_offset)));
DZHAELA.New_block = SYHAELA_new_addr.Block_num;
 /* line 2805: */
DZHAELA.New_offset = SYHAELA_new_addr.Offset;
 /* line 2806: */
DZHAELA.Rest = (*(&((*XYHAELA_oan)->Rest)));
EZHAELA = A_HEAP(A68_114 ) ;
(*EZHAELA) = DZHAELA ;
(*XYHAELA_oan) = EZHAELA;
} 
else
{ 
 /* line 2807: */
 /* line 2808: */
 /* line 2809: */
NKDAOST_sysfault(GZHAELA);
} 
} 
}
 /* line 2810: */
 /* line 2811: */
 /* line 2812: */
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
A_PROC_EXIT(add_new_address);
return;
} 
#undef NL
 /* line 2815: */

A_STATIC A68_VOID  KZHAELA_change_address(A68_100 * Df, A68_99  Address, A68_313  Item)
{ 
A68_313  LZHAELA;  /* united object - for case conformity */
A68_97 * MZHAELA_dp;
A68_106  NZHAELA;  /* OPERATORS - simple index */
A68_INT  OZHAELA;  /* YIELD */
A68_99 * PZHAELA;  /* YIELD */
A68_99 * QZHAELA_addr;
A_PROC_ENTRY(change_address);
 /* line 2816: */
{ 
 /* line 2817: */
LZHAELA = Item ;
switch ( LZHAELA.mode )
{ 
case 1: /* REF STRUCT(BITS,INT,INT,INT,INT,INT,BITS)  */
MZHAELA_dp = (LZHAELA.data.mode1);
 /* line 2818: */
 /* line 2819: */
if ( (PYBAELA_first_offset((*MZHAELA_dp))==0) )
{ 
 /* line 2820: */
 /* line 2821: */
NZHAELA = (*(&(Df->Indirections))) ;
OZHAELA = MYBAELA_first_block((*MZHAELA_dp)) ;
PZHAELA = (&((&A_VINDEX(NZHAELA,OZHAELA))->Address)) ;
(*PZHAELA) = Address;
} 
else
{ 
 /* line 2822: */
 /* line 2823: */
JZBAELA_change_dp_address(MZHAELA_dp, Address);
} 
break;
case 2: /* REF STRUCT(INT,INT)  */
QZHAELA_addr = (LZHAELA.data.mode2);
 /* line 2824: */
 /* line 2825: */
(*QZHAELA_addr) = Address;
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
A_PROC_EXIT(change_address);
return;
} 
#undef NL
 /* line 2828: */

A_STATIC A68_VOID  UZHAELA_already_written(A68_109 * Db, A68_121 * Gcdata, A68_99  Addr, A68_99  *ReturnedValue)
{ 
A68_99  VZHAELA_result;
A68_INT  WZHAELA_old_address;
A68_INT  XZHAELA_n;
A68_INT  YZHAELA_index;
A68_BOOL  ZZHAELA_not_found;
A68_115 * AAIAELA_hashtable;
A68_115  BAIAELA;  /* united object - for case conformity */
A68_117  CAIAELA_old_and_new;
A68_114 ** DAIAELA_oan;
A68_BOOL  EAIAELA;  /* optbool result */
A68_BOOL  FAIAELA;  /* optbool result */
A68_99  GAIAELA;  /* collateral clause result */
A68_99  HAIAELA;  /* clause result */
A_PROC_ENTRY(already_written);
 /* line 2833: */
{ 
VZHAELA_result = LACAELA_niladdress;
 /* line 2834: */
WZHAELA_old_address = RYDAELA_address_rep(Addr);
 /* line 2835: */
XZHAELA_n = (WZHAELA_old_address/YMBAELA_hashtable_size);
 /* line 2836: */
YZHAELA_index = ((WZHAELA_old_address-(XZHAELA_n*YMBAELA_hashtable_size))+1);
 /* line 2837: */
ZZHAELA_not_found = A68_TRUE;
 /* line 2838: */
AAIAELA_hashtable = (&(Gcdata->Hashtable));
 /* line 2839: */
 /* line 2840: */
BAIAELA = (*AAIAELA_hashtable) ;
switch ( BAIAELA.mode )
{ 
case 2: /* REF VECTOR [] REF MODE114 */
CAIAELA_old_and_new = (BAIAELA.data.mode2);
 /* line 2841: */
{ 
DAIAELA_oan = (&A_VINDEX(CAIAELA_old_and_new,YZHAELA_index));
 /* line 2842: */
for ( ;; )
{ 
EAIAELA = ((*DAIAELA_oan)!=FWDAELA_nilold_and_new);
if ( EAIAELA )
{ /* line 2843: */
EAIAELA = QACAELA_(VZHAELA_result, LACAELA_niladdress);
}
if ( !(EAIAELA) ) break;
 /* line 2844: */
FAIAELA = ((*(&((*DAIAELA_oan)->Old_block)))==Addr.Block_num);
if ( FAIAELA )
{FAIAELA = ((*(&((*DAIAELA_oan)->New_block)))!=(-1));
}
if ( FAIAELA )
{ /* line 2845: */
FAIAELA = ((*(&((*DAIAELA_oan)->New_offset)))!=(-1));
}
if ( FAIAELA )
{ 
GAIAELA.Block_num = (*(&((*DAIAELA_oan)->New_block)));
 /* line 2846: */
GAIAELA.Offset = (*(&((*DAIAELA_oan)->New_offset)));
VZHAELA_result = GAIAELA;
} 
else
{ 
 /* line 2847: */
DAIAELA_oan = (&((*DAIAELA_oan)->Rest));
} 
}
 /* line 2848: */
 /* line 2849: */
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 2850: */
 /* line 2851: */
HAIAELA = VZHAELA_result;
} 
A_PROC_EXIT(already_written);
*ReturnedValue = (HAIAELA);
return;
} 
#undef NL
 /* line 2854: */

A_STATIC A68_BOOL  NAIAELA_already_found(A68_109 * Db, A68_100 * Df, A68_121 * Gcdata, A68_97 * Dp, void *NonLocals)
#define NL(x) (((OAIAELA_already_found *)NonLocals)->x)
{ 
A68_99  PAIAELA;  /* avoid structure result */
A68_99  QAIAELA_addr;
A68_INT  RAIAELA_old_address;
A68_INT  SAIAELA_n;
A68_INT  TAIAELA_index;
A68_BOOL  UAIAELA_found;
A68_115 * VAIAELA_hashtable;
A68_115  WAIAELA;  /* united object - for case conformity */
A68_117  XAIAELA_old_and_new;
A68_114 ** YAIAELA_oan;
A68_BOOL  ZAIAELA;  /* optbool result */
A68_BOOL  ABIAELA;  /* optbool result */
A68_BOOL  BBIAELA;  /* optbool result */
A68_99  CBIAELA;  /* collateral clause result */
A68_99  DBIAELA_new;
A68_313  EBIAELA;  /* OPERATORS - mode -> union mode */
A68_BOOL  FBIAELA;  /* clause result */
A_PROC_ENTRY(already_found);
 /* line 2855: */
{ 
IHEAELA_get_disc_address( Df, (*Dp), &PAIAELA );
QAIAELA_addr = PAIAELA;
 /* line 2856: */
RAIAELA_old_address = RYDAELA_address_rep(QAIAELA_addr);
 /* line 2857: */
SAIAELA_n = (RAIAELA_old_address/YMBAELA_hashtable_size);
 /* line 2858: */
TAIAELA_index = ((RAIAELA_old_address-(SAIAELA_n*YMBAELA_hashtable_size))+1);
 /* line 2859: */
UAIAELA_found = A68_FALSE;
 /* line 2860: */
VAIAELA_hashtable = (&(Gcdata->Hashtable));
 /* line 2861: */
 /* line 2862: */
WAIAELA = (*VAIAELA_hashtable) ;
switch ( WAIAELA.mode )
{ 
case 2: /* REF VECTOR [] REF MODE114 */
XAIAELA_old_and_new = (WAIAELA.data.mode2);
 /* line 2863: */
{ 
YAIAELA_oan = (&A_VINDEX(XAIAELA_old_and_new,TAIAELA_index));
 /* line 2864: */
for ( ;; )
{ 
 /* line 2865: */
ZAIAELA = ((*YAIAELA_oan)!=FWDAELA_nilold_and_new);
if ( ZAIAELA )
{ZAIAELA = !UAIAELA_found;
}
if ( !(ZAIAELA) ) break;
 /* line 2866: */
ABIAELA = ((*(&((*YAIAELA_oan)->Old_block)))==QAIAELA_addr.Block_num);
if ( ABIAELA )
{ /* line 2867: */
ABIAELA = ((*(&((*YAIAELA_oan)->Old_offset)))==QAIAELA_addr.Offset);
}
if ( ABIAELA )
{ 
UAIAELA_found = A68_TRUE;
 /* line 2868: */
 /* line 2869: */
BBIAELA = ((*(&((*YAIAELA_oan)->New_block)))!=(-1));
if ( BBIAELA )
{ /* line 2870: */
BBIAELA = ((*(&((*YAIAELA_oan)->New_offset)))!=(-1));
}
if ( BBIAELA )
{ 
 /* line 2871: */
CBIAELA.Block_num = (*(&((*YAIAELA_oan)->New_block)));
CBIAELA.Offset = (*(&((*YAIAELA_oan)->New_offset)));
DBIAELA_new = CBIAELA;
 /* line 2872: */
 /* line 2873: */
KZHAELA_change_address(Df, DBIAELA_new, A_UNITE(EBIAELA,mode1,1,Dp));
} 
} 
else
{ 
 /* line 2874: */
 /* line 2875: */
YAIAELA_oan = (&((*YAIAELA_oan)->Rest));
} 
}
 /* line 2876: */
 /* line 2877: */
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 2878: */
 /* line 2879: */
FBIAELA = UAIAELA_found;
} 
A_PROC_EXIT(already_found);
return( FBIAELA );
} 
#undef NL
 /* line 2882: */

A_STATIC A68_VOID  MBIAELA_compactor_trace(A68_109 * Db, A68_100 * Old_df, A68_100 * New_df, A68_121 * Gcdata, A68_97 * Dp, A68_97  *ReturnedValue, void *NonLocals)
#define NL(x) (((NBIAELA_compactor_trace *)NonLocals)->x)
{ 
A68_INT  OBIAELA_f_block;
A68_BOOL  PBIAELA;  /* optbool result */
A68_BOOL  QBIAELA;  /* optbool result */
A68_99  TBIAELA;  /* avoid structure result */
A68_99  UBIAELA_old_addr;
A68_INT  VBIAELA_num_chars;
A68_INT  WBIAELA_data_code;
A68_INT  XBIAELA_indirection;
A68_BOOL  YBIAELA_assignable;
A68_275  ZBIAELA;  /* OPERATORS - mode -> union mode */
A68_115 * ACIAELA_hashtable;
A68_32  BCIAELA_pagetable;
A68_106  CCIAELA;  /* OPERATORS - simple index */
A68_98  DCIAELA_ind;
A68_99  ECIAELA;  /* avoid structure result */
A68_99  FCIAELA_address;
A68_31  HCIAELA_generator;   /* proc value of non-global proc */
A68_VC  NCIAELA;  /* avoid structure result */
A68_VC  MCIAELA_ch_array;
A68_154  PCIAELA_generator;   /* proc value of non-global proc */
A68_101  VCIAELA;  /* avoid structure result */
A68_101  UCIAELA_ptr_array;
A68_214  WCIAELA;  /* OPERATORS - mode -> union mode */
A68_33  YCIAELA_generator;   /* proc value of non-global proc */
A68_32  EDIAELA;  /* avoid structure result */
A68_32  DDIAELA_deja_vus;
A68_INT  FDIAELA_dvcount;
A68_INT  GDIAELA_i;
A68_INT  HDIAELA;  /* to part of loop */
A68_97  IDIAELA;  /* clause result */
A68_INT  JDIAELA;  /* YIELD */
A68_INT * KDIAELA;  /* YIELD */
A68_97  LDIAELA;  /* avoid structure result */
A68_97 * MDIAELA;  /* YIELD */
A68_243  NDIAELA;  /* OPERATORS - mode -> union mode */
A68_97  ODIAELA;  /* avoid structure result */
A68_97  PDIAELA_new_dp;
A68_97  QDIAELA;  /* clause result */
A68_313  RDIAELA;  /* OPERATORS - mode -> union mode */
A68_33  TDIAELA_generator;   /* proc value of non-global proc */
A68_32  ZDIAELA;  /* avoid structure result */
A68_32  YDIAELA_int_array;
A68_214  AEIAELA;  /* OPERATORS - mode -> union mode */
A68_243  BEIAELA;  /* OPERATORS - mode -> union mode */
A68_97  CEIAELA;  /* avoid structure result */
A68_97  DEIAELA_new_dp;
A68_313  EEIAELA;  /* OPERATORS - mode -> union mode */
A68_31  GEIAELA_generator;   /* proc value of non-global proc */
A68_VC  MEIAELA;  /* avoid structure result */
A68_VC  LEIAELA_char_array;
A68_214  NEIAELA;  /* OPERATORS - mode -> union mode */
A68_243  OEIAELA;  /* OPERATORS - mode -> union mode */
A68_97  PEIAELA;  /* avoid structure result */
A68_97  QEIAELA_new_dp;
A68_313  REIAELA;  /* OPERATORS - mode -> union mode */
A68_154  TEIAELA_generator;   /* proc value of non-global proc */
A68_101  ZEIAELA;  /* avoid structure result */
A68_101  YEIAELA_dp_array;
A68_214  AFIAELA;  /* OPERATORS - mode -> union mode */
A68_33  CFIAELA_generator;   /* proc value of non-global proc */
A68_32  IFIAELA;  /* avoid structure result */
A68_32  HFIAELA_deja_vus;
A68_INT  JFIAELA_dvcount;
A68_INT  KFIAELA_i;
A68_INT  LFIAELA;  /* to part of loop */
A68_97  MFIAELA;  /* clause result */
A68_INT  NFIAELA;  /* YIELD */
A68_INT * OFIAELA;  /* YIELD */
A68_97  PFIAELA;  /* avoid structure result */
A68_97 * QFIAELA;  /* YIELD */
A68_243  RFIAELA;  /* OPERATORS - mode -> union mode */
A68_97  SFIAELA;  /* avoid structure result */
A68_97  TFIAELA_new_dp;
A68_313  UFIAELA;  /* OPERATORS - mode -> union mode */
A68_31  WFIAELA_generator;   /* proc value of non-global proc */
A68_VC  CGIAELA;  /* avoid structure result */
A68_VC  BGIAELA_ow_chars;
A68_97  DGIAELA;  /* avoid structure result */
A68_97  EGIAELA_new_dp;
A68_313  FGIAELA;  /* OPERATORS - mode -> union mode */
A68_INT  GGIAELA_num_inds;
A68_31  IGIAELA_generator;   /* proc value of non-global proc */
A68_VC  OGIAELA;  /* avoid structure result */
A68_VC  NGIAELA_ind_chars;
A68_214  PGIAELA;  /* OPERATORS - mode -> union mode */
A68_243  QGIAELA;  /* OPERATORS - mode -> union mode */
A68_97  RGIAELA;  /* avoid structure result */
A68_97  SGIAELA_new_dp;
A68_313  TGIAELA;  /* OPERATORS - mode -> union mode */
A68_97  WGIAELA_new;
A68_99  XGIAELA;  /* avoid structure result */
A68_97  YGIAELA;  /* clause result */
A_PROC_ENTRY(compactor_trace);
 /* line 2883: */
{ 
OBIAELA_f_block = MYBAELA_first_block((*Dp));
 /* line 2884: */
PBIAELA = (PYBAELA_first_offset((*Dp))==0);
if ( PBIAELA )
{ /* line 2885: */
PBIAELA = (OBIAELA_f_block!=0);
}
if ( PBIAELA )
{ 
LNGAELA_set_indir_wanted(Gcdata, OBIAELA_f_block);
} 
 /* line 2886: */
 /* line 2887: */
QBIAELA = !KGEAELA_is_nilptr(Old_df, (*Dp));
if ( QBIAELA )
{QBIAELA = !VGEAELA_is_gc_nil(Old_df, (*Dp));
}
 /* line 2888: */
if ( QBIAELA )
{ /* line 2889: */
QBIAELA = !GYBAELA_is_shaky((*Dp));
}
if ( QBIAELA )
{ 
 /* line 2890: */
if ( LEEAELA_is_forgery(Db, (*Dp)) )
{ 
NKDAOST_sysfault(SBIAELA);
} 
 /* line 2891: */
IHEAELA_get_disc_address( Old_df, (*Dp), &TBIAELA );
UBIAELA_old_addr = TBIAELA;
 /* line 2892: */
 /* line 2893: */
 /* line 2894: */
XBIAELA_indirection = 0;
 /* line 2895: */
YBIAELA_assignable = JYBAELA_is_assignable((*Dp));
 /* line 2897: */
ILGAELA_not_added_to_hashtable(Gcdata, Old_df, A_UNITE(ZBIAELA,mode1,1,(*Dp)));
 /* line 2898: */
ACIAELA_hashtable = (&(Gcdata->Hashtable));
 /* line 2899: */
BCIAELA_pagetable = (*(&(Gcdata->Pagetable)));
 /* line 2901: */
 /* line 2902: */
if ( (PYBAELA_first_offset((*Dp))==0) )
{ 
CCIAELA = (*(&(Old_df->Indirections))) ;
DCIAELA_ind = (*(&A_VINDEX(CCIAELA,OBIAELA_f_block)));
 /* line 2903: */
VBIAELA_num_chars = DCIAELA_ind.Data_elts;
 /* line 2904: */
WBIAELA_data_code = DCIAELA_ind.Code;
 /* line 2905: */
 /* line 2906: */
XBIAELA_indirection = OBIAELA_f_block;
} 
else
{ 
VBIAELA_num_chars = SYBAELA_data_elts((*Dp));
 /* line 2907: */
 /* line 2908: */
WBIAELA_data_code = DYBAELA_discptr_code((*Dp));
} 
 /* line 2909: */
UZHAELA_already_written( Db, Gcdata, UBIAELA_old_addr, &ECIAELA );
FCIAELA_address = ECIAELA;
 /* line 2911: */
 /* line 2913: */
 /* line 2917: */
switch ( WBIAELA_data_code )
{ 
case 1: 
{ 
 /* line 2918: */
if ( QACAELA_(FCIAELA_address, LACAELA_niladdress) )
{ 
A_CLOSURE( HCIAELA_generator, ICIAELA_generator, JCIAELA_generator );
(( JCIAELA_generator * ) ( HCIAELA_generator.nonlocals )) -> Db = Db;
(( JCIAELA_generator * ) ( HCIAELA_generator.nonlocals )) -> Old_df = Old_df;
(( JCIAELA_generator * ) ( HCIAELA_generator.nonlocals )) -> Dp = Dp;
A_CALLPROC(HCIAELA_generator,(A68_TRUE, &NCIAELA),(A68_TRUE, &NCIAELA,(HCIAELA_generator).nonlocals));
MCIAELA_ch_array = NCIAELA;
 /* line 2919: */
A_CLOSURE( PCIAELA_generator, QCIAELA_generator, RCIAELA_generator );
(( RCIAELA_generator * ) ( PCIAELA_generator.nonlocals )) -> Db = Db;
(( RCIAELA_generator * ) ( PCIAELA_generator.nonlocals )) -> Old_df = Old_df;
(( RCIAELA_generator * ) ( PCIAELA_generator.nonlocals )) -> Dp = Dp;
A_CALLPROC(PCIAELA_generator,(A68_TRUE, &VCIAELA),(A68_TRUE, &VCIAELA,(PCIAELA_generator).nonlocals));
UCIAELA_ptr_array = VCIAELA;
 /* line 2920: */
 /* line 2921: */
SVEAELA_read(Db, Old_df, A_UNITE(WCIAELA,mode1,1,MCIAELA_ch_array), UCIAELA_ptr_array, BWDAELA_nowanted, WWDAELA_charsdps, (*Dp));
 /* line 2922: */
A_CLOSURE( YCIAELA_generator, ZCIAELA_generator, ADIAELA_generator );
(( ADIAELA_generator * ) ( YCIAELA_generator.nonlocals )) -> UCIAELA_ptr_array = UCIAELA_ptr_array;
A_CALLPROC(YCIAELA_generator,(A68_TRUE, &EDIAELA),(A68_TRUE, &EDIAELA,(YCIAELA_generator).nonlocals));
DDIAELA_deja_vus = EDIAELA;
 /* line 2923: */
FDIAELA_dvcount = 0;
 /* line 2924: */
 /* line 2925: */
HDIAELA = UCIAELA_ptr_array.upb;
for ( GDIAELA_i = 1;
GDIAELA_i <= HDIAELA;
GDIAELA_i += 1 )
{ 
 /* line 2926: */
 /* line 2927: */
if ( VGEAELA_is_gc_nil(Old_df, (*(&A_VINDEX(UCIAELA_ptr_array,GDIAELA_i)))) )
{ 
 /* line 2928: */
IDIAELA = (*(&A_VINDEX(UCIAELA_ptr_array,GDIAELA_i)));
} 
else
{ 
 /* line 2929: */
 /* line 2930: */
if ( A_CALLPROC(NL(MAIAELA_already_found),(Db, Old_df, Gcdata, (&A_VINDEX(UCIAELA_ptr_array,GDIAELA_i))),(Db, Old_df, Gcdata, (&A_VINDEX(UCIAELA_ptr_array,GDIAELA_i)),(NL(MAIAELA_already_found)).nonlocals)) )
{ 
JDIAELA = FDIAELA_dvcount+=1 ;
KDIAELA = (&A_VINDEX(DDIAELA_deja_vus,JDIAELA)) ;
(*KDIAELA) = GDIAELA_i;
 /* line 2931: */
 /* line 2932: */
IDIAELA = (*(&A_VINDEX(UCIAELA_ptr_array,GDIAELA_i)));
} 
else
{ 
 /* line 2933: */
 /* line 2934: */
 /* line 2935: */
A_CALLPROC(NL(LBIAELA_compactor_trace),(Db, Old_df, New_df, Gcdata, (&A_VINDEX(UCIAELA_ptr_array,GDIAELA_i)), &LDIAELA),(Db, Old_df, New_df, Gcdata, (&A_VINDEX(UCIAELA_ptr_array,GDIAELA_i)), &LDIAELA,(NL(LBIAELA_compactor_trace)).nonlocals));
IDIAELA = LDIAELA;
} 
} 
MDIAELA = (&A_VINDEX(UCIAELA_ptr_array,GDIAELA_i)) ;
(*MDIAELA) = IDIAELA;
}
 /* line 2936: */
 /* line 2937: */
 /* line 2938: */
 /* line 2939: */
CNFAELA_write( Db, New_df, A_UNITE(NDIAELA,mode1,1,MCIAELA_ch_array), UCIAELA_ptr_array, WWDAELA_charsdps, MCIAELA_ch_array.upb, XBIAELA_indirection, YBIAELA_assignable, UBIAELA_old_addr, DDIAELA_deja_vus, BCIAELA_pagetable, &ODIAELA );
PDIAELA_new_dp = ODIAELA;
 /* line 2940: */
 /* line 2941: */
OYHAELA_add_new_address(Db, Old_df, New_df, ACIAELA_hashtable, UBIAELA_old_addr, PDIAELA_new_dp);
 /* line 2942: */
 /* line 2943: */
QDIAELA = PDIAELA_new_dp;
} 
else
{ 
KZHAELA_change_address(New_df, FCIAELA_address, A_UNITE(RDIAELA,mode1,1,Dp));
 /* line 2944: */
 /* line 2945: */
 /* line 2946: */
 /* line 2950: */
QDIAELA = (*Dp);
} 
} 
break;
case 2: 
{ 
 /* line 2951: */
if ( QACAELA_(FCIAELA_address, LACAELA_niladdress) )
{ 
A_CLOSURE( TDIAELA_generator, UDIAELA_generator, VDIAELA_generator );
(( VDIAELA_generator * ) ( TDIAELA_generator.nonlocals )) -> Db = Db;
(( VDIAELA_generator * ) ( TDIAELA_generator.nonlocals )) -> Old_df = Old_df;
(( VDIAELA_generator * ) ( TDIAELA_generator.nonlocals )) -> Dp = Dp;
A_CALLPROC(TDIAELA_generator,(A68_TRUE, &ZDIAELA),(A68_TRUE, &ZDIAELA,(TDIAELA_generator).nonlocals));
YDIAELA_int_array = ZDIAELA;
 /* line 2952: */
 /* line 2953: */
SVEAELA_read(Db, Old_df, A_UNITE(AEIAELA,mode2,2,YDIAELA_int_array), PVDAELA_nodps, BWDAELA_nowanted, XWDAELA_ints, (*Dp));
 /* line 2954: */
 /* line 2955: */
 /* line 2956: */
 /* line 2957: */
CNFAELA_write( Db, New_df, A_UNITE(BEIAELA,mode2,2,YDIAELA_int_array), PVDAELA_nodps, XWDAELA_ints, (YDIAELA_int_array.upb*EDAAOST_int_size), XBIAELA_indirection, YBIAELA_assignable, LACAELA_niladdress, VVDAELA_noints, BCIAELA_pagetable, &CEIAELA );
DEIAELA_new_dp = CEIAELA;
 /* line 2958: */
 /* line 2959: */
OYHAELA_add_new_address(Db, Old_df, New_df, ACIAELA_hashtable, UBIAELA_old_addr, DEIAELA_new_dp);
 /* line 2960: */
 /* line 2961: */
QDIAELA = DEIAELA_new_dp;
} 
else
{ 
KZHAELA_change_address(New_df, FCIAELA_address, A_UNITE(EEIAELA,mode1,1,Dp));
 /* line 2962: */
 /* line 2963: */
 /* line 2964: */
 /* line 2968: */
QDIAELA = (*Dp);
} 
} 
break;
case 3: 
{ 
 /* line 2969: */
if ( QACAELA_(FCIAELA_address, LACAELA_niladdress) )
{ 
A_CLOSURE( GEIAELA_generator, HEIAELA_generator, IEIAELA_generator );
(( IEIAELA_generator * ) ( GEIAELA_generator.nonlocals )) -> Db = Db;
(( IEIAELA_generator * ) ( GEIAELA_generator.nonlocals )) -> Old_df = Old_df;
(( IEIAELA_generator * ) ( GEIAELA_generator.nonlocals )) -> Dp = Dp;
A_CALLPROC(GEIAELA_generator,(A68_TRUE, &MEIAELA),(A68_TRUE, &MEIAELA,(GEIAELA_generator).nonlocals));
LEIAELA_char_array = MEIAELA;
 /* line 2970: */
SVEAELA_read(Db, Old_df, A_UNITE(NEIAELA,mode1,1,LEIAELA_char_array), PVDAELA_nodps, BWDAELA_nowanted, YWDAELA_chars, (*Dp));
 /* line 2971: */
 /* line 2972: */
 /* line 2973: */
 /* line 2974: */
CNFAELA_write( Db, New_df, A_UNITE(OEIAELA,mode1,1,LEIAELA_char_array), PVDAELA_nodps, YWDAELA_chars, LEIAELA_char_array.upb, XBIAELA_indirection, YBIAELA_assignable, LACAELA_niladdress, VVDAELA_noints, BCIAELA_pagetable, &PEIAELA );
QEIAELA_new_dp = PEIAELA;
 /* line 2975: */
 /* line 2976: */
OYHAELA_add_new_address(Db, Old_df, New_df, ACIAELA_hashtable, UBIAELA_old_addr, QEIAELA_new_dp);
 /* line 2977: */
 /* line 2978: */
QDIAELA = QEIAELA_new_dp;
} 
else
{ 
KZHAELA_change_address(New_df, FCIAELA_address, A_UNITE(REIAELA,mode1,1,Dp));
 /* line 2979: */
 /* line 2980: */
 /* line 2981: */
 /* line 2985: */
QDIAELA = (*Dp);
} 
} 
break;
case 4: 
{ 
 /* line 2986: */
if ( QACAELA_(FCIAELA_address, LACAELA_niladdress) )
{ 
A_CLOSURE( TEIAELA_generator, UEIAELA_generator, VEIAELA_generator );
(( VEIAELA_generator * ) ( TEIAELA_generator.nonlocals )) -> Db = Db;
(( VEIAELA_generator * ) ( TEIAELA_generator.nonlocals )) -> Old_df = Old_df;
(( VEIAELA_generator * ) ( TEIAELA_generator.nonlocals )) -> Dp = Dp;
A_CALLPROC(TEIAELA_generator,(A68_TRUE, &ZEIAELA),(A68_TRUE, &ZEIAELA,(TEIAELA_generator).nonlocals));
YEIAELA_dp_array = ZEIAELA;
 /* line 2987: */
 /* line 2988: */
SVEAELA_read(Db, Old_df, A_UNITE(AFIAELA,mode1,1,JVDAELA_nodata), YEIAELA_dp_array, BWDAELA_nowanted, ZWDAELA_discptrs, (*Dp));
 /* line 2989: */
A_CLOSURE( CFIAELA_generator, DFIAELA_generator, EFIAELA_generator );
(( EFIAELA_generator * ) ( CFIAELA_generator.nonlocals )) -> YEIAELA_dp_array = YEIAELA_dp_array;
A_CALLPROC(CFIAELA_generator,(A68_TRUE, &IFIAELA),(A68_TRUE, &IFIAELA,(CFIAELA_generator).nonlocals));
HFIAELA_deja_vus = IFIAELA;
 /* line 2990: */
JFIAELA_dvcount = 0;
 /* line 2991: */
 /* line 2992: */
LFIAELA = YEIAELA_dp_array.upb;
for ( KFIAELA_i = 1;
KFIAELA_i <= LFIAELA;
KFIAELA_i += 1 )
{ 
 /* line 2993: */
 /* line 2994: */
if ( VGEAELA_is_gc_nil(Old_df, (*(&A_VINDEX(YEIAELA_dp_array,KFIAELA_i)))) )
{ 
 /* line 2995: */
MFIAELA = (*(&A_VINDEX(YEIAELA_dp_array,KFIAELA_i)));
} 
else
{ 
 /* line 2996: */
 /* line 2997: */
if ( A_CALLPROC(NL(MAIAELA_already_found),(Db, Old_df, Gcdata, (&A_VINDEX(YEIAELA_dp_array,KFIAELA_i))),(Db, Old_df, Gcdata, (&A_VINDEX(YEIAELA_dp_array,KFIAELA_i)),(NL(MAIAELA_already_found)).nonlocals)) )
{ 
NFIAELA = JFIAELA_dvcount+=1 ;
OFIAELA = (&A_VINDEX(HFIAELA_deja_vus,NFIAELA)) ;
(*OFIAELA) = KFIAELA_i;
 /* line 2998: */
 /* line 2999: */
MFIAELA = (*(&A_VINDEX(YEIAELA_dp_array,KFIAELA_i)));
} 
else
{ 
 /* line 3000: */
 /* line 3001: */
 /* line 3002: */
A_CALLPROC(NL(LBIAELA_compactor_trace),(Db, Old_df, New_df, Gcdata, (&A_VINDEX(YEIAELA_dp_array,KFIAELA_i)), &PFIAELA),(Db, Old_df, New_df, Gcdata, (&A_VINDEX(YEIAELA_dp_array,KFIAELA_i)), &PFIAELA,(NL(LBIAELA_compactor_trace)).nonlocals));
MFIAELA = PFIAELA;
} 
} 
QFIAELA = (&A_VINDEX(YEIAELA_dp_array,KFIAELA_i)) ;
(*QFIAELA) = MFIAELA;
}
 /* line 3003: */
 /* line 3004: */
 /* line 3005: */
 /* line 3006: */
CNFAELA_write( Db, New_df, A_UNITE(RFIAELA,mode1,1,JVDAELA_nodata), YEIAELA_dp_array, ZWDAELA_discptrs, 0, XBIAELA_indirection, YBIAELA_assignable, UBIAELA_old_addr, HFIAELA_deja_vus, DVDAELA_nilpagetable, &SFIAELA );
TFIAELA_new_dp = SFIAELA;
 /* line 3007: */
 /* line 3008: */
OYHAELA_add_new_address(Db, Old_df, New_df, ACIAELA_hashtable, UBIAELA_old_addr, TFIAELA_new_dp);
 /* line 3009: */
 /* line 3010: */
QDIAELA = TFIAELA_new_dp;
} 
else
{ 
KZHAELA_change_address(New_df, FCIAELA_address, A_UNITE(UFIAELA,mode1,1,Dp));
 /* line 3011: */
 /* line 3012: */
 /* line 3013: */
 /* line 3017: */
QDIAELA = (*Dp);
} 
} 
break;
case 5: 
{ 
 /* line 3018: */
if ( QACAELA_(FCIAELA_address, LACAELA_niladdress) )
{ 
A_CLOSURE( WFIAELA_generator, XFIAELA_generator, YFIAELA_generator );
(( YFIAELA_generator * ) ( WFIAELA_generator.nonlocals )) -> Db = Db;
(( YFIAELA_generator * ) ( WFIAELA_generator.nonlocals )) -> Old_df = Old_df;
(( YFIAELA_generator * ) ( WFIAELA_generator.nonlocals )) -> Dp = Dp;
A_CALLPROC(WFIAELA_generator,(A68_TRUE, &CGIAELA),(A68_TRUE, &CGIAELA,(WFIAELA_generator).nonlocals));
BGIAELA_ow_chars = CGIAELA;
 /* line 3019: */
BBFAELA_read_vax_blocks(Db, Old_df, 1, BGIAELA_ow_chars, BWDAELA_nowanted, (*Dp));
 /* line 3020: */
 /* line 3021: */
 /* line 3022: */
SZFAELA_mk_overwrite( Db, New_df, (VBIAELA_num_chars/SNBAELA_block_size), XBIAELA_indirection, YBIAELA_assignable, &DGIAELA );
EGIAELA_new_dp = DGIAELA;
 /* line 3023: */
OWFAELA_overwrite_blocks(Db, Old_df, 1, BGIAELA_ow_chars, EGIAELA_new_dp);
 /* line 3024: */
 /* line 3025: */
OYHAELA_add_new_address(Db, Old_df, New_df, ACIAELA_hashtable, UBIAELA_old_addr, EGIAELA_new_dp);
 /* line 3026: */
 /* line 3027: */
QDIAELA = EGIAELA_new_dp;
} 
else
{ 
KZHAELA_change_address(New_df, FCIAELA_address, A_UNITE(FGIAELA,mode1,1,Dp));
 /* line 3028: */
 /* line 3029: */
 /* line 3030: */
 /* line 3034: */
QDIAELA = (*Dp);
} 
} 
break;
case 6: 
{ 
 /* line 3035: */
if ( QACAELA_(FCIAELA_address, LACAELA_niladdress) )
{ 
GGIAELA_num_inds = HJEAELA_array_size(Db, Old_df, (*Dp));
 /* line 3036: */
A_CLOSURE( IGIAELA_generator, JGIAELA_generator, KGIAELA_generator );
(( KGIAELA_generator * ) ( IGIAELA_generator.nonlocals )) -> GGIAELA_num_inds = GGIAELA_num_inds;
A_CALLPROC(IGIAELA_generator,(A68_TRUE, &OGIAELA),(A68_TRUE, &OGIAELA,(IGIAELA_generator).nonlocals));
NGIAELA_ind_chars = OGIAELA;
 /* line 3037: */
SVEAELA_read(Db, Old_df, A_UNITE(PGIAELA,mode1,1,NGIAELA_ind_chars), PVDAELA_nodps, BWDAELA_nowanted, BXDAELA_indirs, (*Dp));
 /* line 3038: */
 /* line 3039: */
 /* line 3040: */
 /* line 3041: */
CNFAELA_write( Db, New_df, A_UNITE(QGIAELA,mode1,1,NGIAELA_ind_chars), PVDAELA_nodps, BXDAELA_indirs, NGIAELA_ind_chars.upb, XBIAELA_indirection, YBIAELA_assignable, LACAELA_niladdress, VVDAELA_noints, BCIAELA_pagetable, &RGIAELA );
SGIAELA_new_dp = RGIAELA;
 /* line 3042: */
 /* line 3043: */
OYHAELA_add_new_address(Db, Old_df, New_df, ACIAELA_hashtable, UBIAELA_old_addr, SGIAELA_new_dp);
 /* line 3044: */
 /* line 3045: */
QDIAELA = SGIAELA_new_dp;
} 
else
{ 
KZHAELA_change_address(New_df, FCIAELA_address, A_UNITE(TGIAELA,mode1,1,Dp));
 /* line 3046: */
 /* line 3047: */
 /* line 3048: */
 /* line 3050: */
QDIAELA = (*Dp);
} 
} 
break;
default: 
NKDAOST_sysfault(VGIAELA);
 /* line 3051: */
 /* line 3052: */
QDIAELA = (*Dp);
break;
} 
WGIAELA_new = QDIAELA;
 /* line 3053: */
 /* line 3054: */
if ( ((*(&(Gcdata->Shaky_ptrs)))!=HWDAELA_nilshakydata) )
{ 
 /* line 3055: */
IHEAELA_get_disc_address( Old_df, WGIAELA_new, &XGIAELA );
MUGAELA_mark_shaky_wanted(Db, Gcdata, New_df, UBIAELA_old_addr, XGIAELA);
} 
 /* line 3056: */
 /* line 3057: */
 /* line 3058: */
YGIAELA = WGIAELA_new;
} 
else
{ 
 /* line 3059: */
YGIAELA = (*Dp);
} 
} 
A_PROC_EXIT(compactor_trace);
*ReturnedValue = (YGIAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  UHIAELA_generator(A68_BOOL  SHIAELA_anonymous, A68_106  *ReturnedValue, void *NonLocals)
#define NL(x) (((VHIAELA_generator *)NonLocals)->x)
{ 
A68_106  WHIAELA;  /* clause result */
A68_106  XHIAELA;  /* OPERATORS - dynamic generator */
{ 
XHIAELA.upb = NL(RHIAELA_old_inds).upb ;
( SHIAELA_anonymous? A_VLOC(A68_98 ,XHIAELA): A_VHEAP(A68_98 ,XHIAELA) );
WHIAELA = XHIAELA;
} 
*ReturnedValue = (WHIAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  IIIAELA_generator(A68_BOOL  GIIAELA_anonymous, A68_101  *ReturnedValue, void *NonLocals)
#define NL(x) (((JIIAELA_generator *)NonLocals)->x)
{ 
A68_101  KIIAELA;  /* clause result */
A68_101  LIIAELA;  /* OPERATORS - dynamic generator */
{ 
LIIAELA.upb = 1 ;
( GIIAELA_anonymous? A_VLOC(A68_97 ,LIIAELA): A_VHEAP(A68_97 ,LIIAELA) );
KIIAELA = LIIAELA;
} 
*ReturnedValue = (KIIAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  WIIAELA_generator(A68_BOOL  UIIAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((XIIAELA_generator *)NonLocals)->x)
{ 
A68_32  YIIAELA;  /* clause result */
A68_32  ZIIAELA;  /* OPERATORS - dynamic generator */
{ 
ZIIAELA.upb = 0 ;
( UIIAELA_anonymous? A_VLOC(A68_INT ,ZIIAELA): A_VHEAP(A68_INT ,ZIIAELA) );
YIIAELA = ZIIAELA;
} 
*ReturnedValue = (YIIAELA);
return;
} 
#undef NL
 /* line 3153: */

A_STATIC A68_VOID  KKIAELA_change_address(A68_100 * Df, A68_99  Address, A68_313  Item)
{ 
A68_313  LKIAELA;  /* united object - for case conformity */
A68_97 * MKIAELA_dp;
A68_106  NKIAELA;  /* OPERATORS - simple index */
A68_INT  OKIAELA;  /* YIELD */
A68_99 * PKIAELA;  /* YIELD */
A68_99 * QKIAELA_addr;
A_PROC_ENTRY(change_address);
 /* line 3154: */
{ 
 /* line 3155: */
LKIAELA = Item ;
switch ( LKIAELA.mode )
{ 
case 1: /* REF STRUCT(BITS,INT,INT,INT,INT,INT,BITS)  */
MKIAELA_dp = (LKIAELA.data.mode1);
 /* line 3156: */
 /* line 3157: */
if ( (PYBAELA_first_offset((*MKIAELA_dp))==0) )
{ 
 /* line 3158: */
 /* line 3159: */
NKIAELA = (*(&(Df->Indirections))) ;
OKIAELA = MYBAELA_first_block((*MKIAELA_dp)) ;
PKIAELA = (&((&A_VINDEX(NKIAELA,OKIAELA))->Address)) ;
(*PKIAELA) = Address;
} 
else
{ 
 /* line 3160: */
 /* line 3161: */
JZBAELA_change_dp_address(MKIAELA_dp, Address);
} 
break;
case 2: /* REF STRUCT(INT,INT)  */
QKIAELA_addr = (LKIAELA.data.mode2);
 /* line 3162: */
 /* line 3163: */
(*QKIAELA_addr) = Address;
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
A_PROC_EXIT(change_address);
return;
} 
#undef NL

A_STATIC A68_VOID  UKIAELA_already_written(A68_109 * Db, A68_121 * Gcdata, A68_99  Addr, A68_99  *ReturnedValue)
{ 
A68_99  VKIAELA_result;
A68_INT  WKIAELA_old_address;
A68_INT  XKIAELA_n;
A68_INT  YKIAELA_index;
A68_BOOL  ZKIAELA_not_found;
A68_115 * ALIAELA_hashtable;
A68_115  BLIAELA;  /* united object - for case conformity */
A68_117  CLIAELA_old_and_new;
A68_114 ** DLIAELA_oan;
A68_BOOL  ELIAELA;  /* optbool result */
A68_BOOL  FLIAELA;  /* optbool result */
A68_99  GLIAELA;  /* collateral clause result */
A68_99  HLIAELA;  /* clause result */
A_PROC_ENTRY(already_written);
 /* line 3171: */
{ 
VKIAELA_result = LACAELA_niladdress;
 /* line 3172: */
WKIAELA_old_address = RYDAELA_address_rep(Addr);
 /* line 3173: */
XKIAELA_n = (WKIAELA_old_address/YMBAELA_hashtable_size);
 /* line 3174: */
YKIAELA_index = ((WKIAELA_old_address-(XKIAELA_n*YMBAELA_hashtable_size))+1);
 /* line 3175: */
ZKIAELA_not_found = A68_TRUE;
 /* line 3176: */
ALIAELA_hashtable = (&(Gcdata->Hashtable));
 /* line 3177: */
 /* line 3178: */
BLIAELA = (*ALIAELA_hashtable) ;
switch ( BLIAELA.mode )
{ 
case 2: /* REF VECTOR [] REF MODE114 */
CLIAELA_old_and_new = (BLIAELA.data.mode2);
 /* line 3179: */
{ 
DLIAELA_oan = (&A_VINDEX(CLIAELA_old_and_new,YKIAELA_index));
 /* line 3180: */
for ( ;; )
{ 
ELIAELA = ((*DLIAELA_oan)!=FWDAELA_nilold_and_new);
if ( ELIAELA )
{ /* line 3181: */
ELIAELA = QACAELA_(VKIAELA_result, LACAELA_niladdress);
}
if ( !(ELIAELA) ) break;
 /* line 3182: */
FLIAELA = ((*(&((*DLIAELA_oan)->Old_block)))==Addr.Block_num);
if ( FLIAELA )
{FLIAELA = ((*(&((*DLIAELA_oan)->New_block)))!=(-1));
}
if ( FLIAELA )
{ /* line 3183: */
FLIAELA = ((*(&((*DLIAELA_oan)->New_offset)))!=(-1));
}
if ( FLIAELA )
{ 
GLIAELA.Block_num = (*(&((*DLIAELA_oan)->New_block)));
 /* line 3184: */
GLIAELA.Offset = (*(&((*DLIAELA_oan)->New_offset)));
VKIAELA_result = GLIAELA;
} 
else
{ 
 /* line 3185: */
DLIAELA_oan = (&((*DLIAELA_oan)->Rest));
} 
}
 /* line 3186: */
 /* line 3187: */
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 3188: */
 /* line 3189: */
HLIAELA = VKIAELA_result;
} 
A_PROC_EXIT(already_written);
*ReturnedValue = (HLIAELA);
return;
} 
#undef NL
 /* line 3192: */

A_STATIC A68_BOOL  NLIAELA_already_found(A68_109 * Db, A68_100 * Df, A68_121 * Gcdata, A68_97 * Dp, void *NonLocals)
#define NL(x) (((OLIAELA_already_found *)NonLocals)->x)
{ 
A68_99  PLIAELA;  /* avoid structure result */
A68_99  QLIAELA_addr;
A68_INT  RLIAELA_old_address;
A68_INT  SLIAELA_n;
A68_INT  TLIAELA_index;
A68_BOOL  ULIAELA_found;
A68_115 * VLIAELA_hashtable;
A68_115  WLIAELA;  /* united object - for case conformity */
A68_117  XLIAELA_old_and_new;
A68_114 ** YLIAELA_oan;
A68_BOOL  ZLIAELA;  /* optbool result */
A68_BOOL  AMIAELA;  /* optbool result */
A68_BOOL  BMIAELA;  /* optbool result */
A68_99  CMIAELA;  /* collateral clause result */
A68_99  DMIAELA_new;
A68_313  EMIAELA;  /* OPERATORS - mode -> union mode */
A68_BOOL  FMIAELA;  /* clause result */
A_PROC_ENTRY(already_found);
 /* line 3193: */
{ 
IHEAELA_get_disc_address( Df, (*Dp), &PLIAELA );
QLIAELA_addr = PLIAELA;
 /* line 3194: */
RLIAELA_old_address = RYDAELA_address_rep(QLIAELA_addr);
 /* line 3195: */
SLIAELA_n = (RLIAELA_old_address/YMBAELA_hashtable_size);
 /* line 3196: */
TLIAELA_index = ((RLIAELA_old_address-(SLIAELA_n*YMBAELA_hashtable_size))+1);
 /* line 3197: */
ULIAELA_found = A68_FALSE;
 /* line 3198: */
VLIAELA_hashtable = (&(Gcdata->Hashtable));
 /* line 3199: */
 /* line 3200: */
WLIAELA = (*VLIAELA_hashtable) ;
switch ( WLIAELA.mode )
{ 
case 2: /* REF VECTOR [] REF MODE114 */
XLIAELA_old_and_new = (WLIAELA.data.mode2);
 /* line 3201: */
{ 
YLIAELA_oan = (&A_VINDEX(XLIAELA_old_and_new,TLIAELA_index));
 /* line 3202: */
for ( ;; )
{ 
 /* line 3203: */
ZLIAELA = ((*YLIAELA_oan)!=FWDAELA_nilold_and_new);
if ( ZLIAELA )
{ZLIAELA = !ULIAELA_found;
}
if ( !(ZLIAELA) ) break;
 /* line 3204: */
AMIAELA = ((*(&((*YLIAELA_oan)->Old_block)))==QLIAELA_addr.Block_num);
if ( AMIAELA )
{ /* line 3205: */
AMIAELA = ((*(&((*YLIAELA_oan)->Old_offset)))==QLIAELA_addr.Offset);
}
if ( AMIAELA )
{ 
ULIAELA_found = A68_TRUE;
 /* line 3206: */
 /* line 3207: */
BMIAELA = ((*(&((*YLIAELA_oan)->New_block)))!=(-1));
if ( BMIAELA )
{ /* line 3208: */
BMIAELA = ((*(&((*YLIAELA_oan)->New_offset)))!=(-1));
}
if ( BMIAELA )
{ 
 /* line 3209: */
CMIAELA.Block_num = (*(&((*YLIAELA_oan)->New_block)));
CMIAELA.Offset = (*(&((*YLIAELA_oan)->New_offset)));
DMIAELA_new = CMIAELA;
 /* line 3210: */
 /* line 3211: */
KKIAELA_change_address(Df, DMIAELA_new, A_UNITE(EMIAELA,mode1,1,Dp));
} 
} 
else
{ 
 /* line 3212: */
 /* line 3213: */
YLIAELA_oan = (&((*YLIAELA_oan)->Rest));
} 
}
 /* line 3214: */
 /* line 3215: */
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 3216: */
 /* line 3217: */
FMIAELA = ULIAELA_found;
} 
A_PROC_EXIT(already_found);
return( FMIAELA );
} 
#undef NL
 /* line 3220: */

A_STATIC A68_VOID  MMIAELA_trace(A68_109 * Db, A68_100 * Old_df, A68_97  Dp, A68_121 * Gcdata, A68_54  Wanted, void *NonLocals)
#define NL(x) (((NMIAELA_trace *)NonLocals)->x)
{ 
A68_INT  OMIAELA_f_block;
A68_BOOL  PMIAELA;  /* optbool result */
A68_BOOL  QMIAELA;  /* optbool result */
A68_99  TMIAELA;  /* avoid structure result */
A68_99  UMIAELA_old_addr;
A68_INT  VMIAELA_num_chars;
A68_INT  WMIAELA_data_code;
A68_INT  XMIAELA_indirection;
A68_BOOL  YMIAELA_assignable;
A68_275  ZMIAELA;  /* OPERATORS - mode -> union mode */
A68_115 * ANIAELA_hashtable;
A68_32  BNIAELA_pagetable;
A68_106  CNIAELA;  /* OPERATORS - simple index */
A68_98  DNIAELA_ind;
A68_99  ENIAELA;  /* avoid structure result */
A68_99  FNIAELA_address;
A68_31  HNIAELA_generator;   /* proc value of non-global proc */
A68_VC  NNIAELA;  /* avoid structure result */
A68_VC  MNIAELA_ch_array;
A68_154  PNIAELA_generator;   /* proc value of non-global proc */
A68_101  VNIAELA;  /* avoid structure result */
A68_101  UNIAELA_ptr_array;
A68_214  WNIAELA;  /* OPERATORS - mode -> union mode */
A68_33  YNIAELA_generator;   /* proc value of non-global proc */
A68_32  EOIAELA;  /* avoid structure result */
A68_32  DOIAELA_deja_vus;
A68_INT  FOIAELA_dvcount;
A68_INT  GOIAELA_i;
A68_INT  HOIAELA;  /* to part of loop */
A68_BOOL  IOIAELA;  /* optbool result */
A68_INT  JOIAELA;  /* YIELD */
A68_INT * KOIAELA;  /* YIELD */
A68_33  MOIAELA_generator;   /* proc value of non-global proc */
A68_32  SOIAELA;  /* avoid structure result */
A68_32  ROIAELA_int_array;
A68_214  TOIAELA;  /* OPERATORS - mode -> union mode */
A68_31  VOIAELA_generator;   /* proc value of non-global proc */
A68_VC  BPIAELA;  /* avoid structure result */
A68_VC  APIAELA_char_array;
A68_214  CPIAELA;  /* OPERATORS - mode -> union mode */
A68_154  EPIAELA_generator;   /* proc value of non-global proc */
A68_101  KPIAELA;  /* avoid structure result */
A68_101  JPIAELA_dp_array;
A68_214  LPIAELA;  /* OPERATORS - mode -> union mode */
A68_33  NPIAELA_generator;   /* proc value of non-global proc */
A68_32  TPIAELA;  /* avoid structure result */
A68_32  SPIAELA_deja_vus;
A68_INT  UPIAELA_dvcount;
A68_INT  VPIAELA_i;
A68_INT  WPIAELA;  /* to part of loop */
A68_BOOL  XPIAELA;  /* optbool result */
A68_INT  YPIAELA;  /* YIELD */
A68_INT * ZPIAELA;  /* YIELD */
A68_31  BQIAELA_generator;   /* proc value of non-global proc */
A68_VC  HQIAELA;  /* avoid structure result */
A68_VC  GQIAELA_ow_chars;
A68_INT  IQIAELA_num_inds;
A68_31  KQIAELA_generator;   /* proc value of non-global proc */
A68_VC  QQIAELA;  /* avoid structure result */
A68_VC  PQIAELA_ind_chars;
A68_214  RQIAELA;  /* OPERATORS - mode -> union mode */
A68_33  TQIAELA_generator;   /* proc value of non-global proc */
A68_32  ZQIAELA;  /* avoid structure result */
A68_32  YQIAELA_int_array;
A68_214  ARIAELA;  /* OPERATORS - mode -> union mode */
A68_33  CRIAELA_generator;   /* proc value of non-global proc */
A68_32  IRIAELA;  /* avoid structure result */
A68_32  HRIAELA_int_array;
A68_214  JRIAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(trace);
 /* line 3221: */
{ 
OMIAELA_f_block = MYBAELA_first_block(Dp);
 /* line 3222: */
PMIAELA = (PYBAELA_first_offset(Dp)==0);
if ( PMIAELA )
{ /* line 3223: */
PMIAELA = (OMIAELA_f_block!=0);
}
if ( PMIAELA )
{ 
LNGAELA_set_indir_wanted(Gcdata, OMIAELA_f_block);
} 
 /* line 3224: */
 /* line 3225: */
QMIAELA = !KGEAELA_is_nilptr(Old_df, Dp);
if ( QMIAELA )
{QMIAELA = !VGEAELA_is_gc_nil(Old_df, Dp);
}
 /* line 3226: */
if ( QMIAELA )
{ /* line 3227: */
QMIAELA = !GYBAELA_is_shaky(Dp);
}
if ( QMIAELA )
{ 
 /* line 3228: */
if ( LEEAELA_is_forgery(Db, Dp) )
{ 
NKDAOST_sysfault(SMIAELA);
} 
 /* line 3229: */
IHEAELA_get_disc_address( Old_df, Dp, &TMIAELA );
UMIAELA_old_addr = TMIAELA;
 /* line 3230: */
 /* line 3231: */
 /* line 3232: */
XMIAELA_indirection = 0;
 /* line 3233: */
YMIAELA_assignable = JYBAELA_is_assignable(Dp);
 /* line 3235: */
ILGAELA_not_added_to_hashtable(Gcdata, Old_df, A_UNITE(ZMIAELA,mode1,1,Dp));
 /* line 3236: */
ANIAELA_hashtable = (&(Gcdata->Hashtable));
 /* line 3237: */
BNIAELA_pagetable = (*(&(Gcdata->Pagetable)));
 /* line 3239: */
 /* line 3240: */
if ( (PYBAELA_first_offset(Dp)==0) )
{ 
CNIAELA = (*(&(Old_df->Indirections))) ;
DNIAELA_ind = (*(&A_VINDEX(CNIAELA,OMIAELA_f_block)));
 /* line 3241: */
VMIAELA_num_chars = DNIAELA_ind.Data_elts;
 /* line 3242: */
WMIAELA_data_code = DNIAELA_ind.Code;
 /* line 3243: */
 /* line 3244: */
XMIAELA_indirection = OMIAELA_f_block;
} 
else
{ 
VMIAELA_num_chars = SYBAELA_data_elts(Dp);
 /* line 3245: */
 /* line 3246: */
WMIAELA_data_code = DYBAELA_discptr_code(Dp);
} 
 /* line 3247: */
UKIAELA_already_written( Db, Gcdata, UMIAELA_old_addr, &ENIAELA );
FNIAELA_address = ENIAELA;
 /* line 3249: */
 /* line 3253: */
switch ( WMIAELA_data_code )
{ 
case 1: 
{ 
 /* line 3254: */
if ( QACAELA_(FNIAELA_address, LACAELA_niladdress) )
{ 
A_CLOSURE( HNIAELA_generator, INIAELA_generator, JNIAELA_generator );
(( JNIAELA_generator * ) ( HNIAELA_generator.nonlocals )) -> Db = Db;
(( JNIAELA_generator * ) ( HNIAELA_generator.nonlocals )) -> Old_df = Old_df;
(( JNIAELA_generator * ) ( HNIAELA_generator.nonlocals )) -> Dp = Dp;
A_CALLPROC(HNIAELA_generator,(A68_TRUE, &NNIAELA),(A68_TRUE, &NNIAELA,(HNIAELA_generator).nonlocals));
MNIAELA_ch_array = NNIAELA;
 /* line 3255: */
A_CLOSURE( PNIAELA_generator, QNIAELA_generator, RNIAELA_generator );
(( RNIAELA_generator * ) ( PNIAELA_generator.nonlocals )) -> Db = Db;
(( RNIAELA_generator * ) ( PNIAELA_generator.nonlocals )) -> Old_df = Old_df;
(( RNIAELA_generator * ) ( PNIAELA_generator.nonlocals )) -> Dp = Dp;
A_CALLPROC(PNIAELA_generator,(A68_TRUE, &VNIAELA),(A68_TRUE, &VNIAELA,(PNIAELA_generator).nonlocals));
UNIAELA_ptr_array = VNIAELA;
 /* line 3256: */
 /* line 3257: */
SVEAELA_read(Db, Old_df, A_UNITE(WNIAELA,mode1,1,MNIAELA_ch_array), UNIAELA_ptr_array, Wanted, WWDAELA_charsdps, Dp);
 /* line 3258: */
A_CLOSURE( YNIAELA_generator, ZNIAELA_generator, AOIAELA_generator );
(( AOIAELA_generator * ) ( YNIAELA_generator.nonlocals )) -> UNIAELA_ptr_array = UNIAELA_ptr_array;
A_CALLPROC(YNIAELA_generator,(A68_TRUE, &EOIAELA),(A68_TRUE, &EOIAELA,(YNIAELA_generator).nonlocals));
DOIAELA_deja_vus = EOIAELA;
 /* line 3259: */
FOIAELA_dvcount = 0;
 /* line 3260: */
 /* line 3261: */
HOIAELA = UNIAELA_ptr_array.upb;
for ( GOIAELA_i = 1;
GOIAELA_i <= HOIAELA;
GOIAELA_i += 1 )
{ 
 /* line 3262: */
IOIAELA = !VGEAELA_is_gc_nil(Old_df, (*(&A_VINDEX(UNIAELA_ptr_array,GOIAELA_i))));
if ( IOIAELA )
{ /* line 3263: */
IOIAELA = A_CALLPROC(NL(MLIAELA_already_found),(Db, Old_df, Gcdata, (&A_VINDEX(UNIAELA_ptr_array,GOIAELA_i))),(Db, Old_df, Gcdata, (&A_VINDEX(UNIAELA_ptr_array,GOIAELA_i)),(NL(MLIAELA_already_found)).nonlocals));
}
if ( IOIAELA )
{ 
 /* line 3264: */
JOIAELA = FOIAELA_dvcount+=1 ;
KOIAELA = (&A_VINDEX(DOIAELA_deja_vus,JOIAELA)) ;
(*KOIAELA) = GOIAELA_i;
} 
else
{ 
 /* line 3265: */
 /* line 3266: */
A_CALLPROC(NL(LMIAELA_trace),(Db, Old_df, (*(&A_VINDEX(UNIAELA_ptr_array,GOIAELA_i))), Gcdata, Wanted),(Db, Old_df, (*(&A_VINDEX(UNIAELA_ptr_array,GOIAELA_i))), Gcdata, Wanted,(NL(LMIAELA_trace)).nonlocals));
} 
}
 /* line 3267: */
 /* line 3268: */
 /* line 3272: */
} 
} 
break;
case 2: 
{ 
 /* line 3273: */
if ( QACAELA_(FNIAELA_address, LACAELA_niladdress) )
{ 
A_CLOSURE( MOIAELA_generator, NOIAELA_generator, OOIAELA_generator );
(( OOIAELA_generator * ) ( MOIAELA_generator.nonlocals )) -> Db = Db;
(( OOIAELA_generator * ) ( MOIAELA_generator.nonlocals )) -> Old_df = Old_df;
(( OOIAELA_generator * ) ( MOIAELA_generator.nonlocals )) -> Dp = Dp;
A_CALLPROC(MOIAELA_generator,(A68_TRUE, &SOIAELA),(A68_TRUE, &SOIAELA,(MOIAELA_generator).nonlocals));
ROIAELA_int_array = SOIAELA;
 /* line 3274: */
 /* line 3275: */
 /* line 3276: */
 /* line 3280: */
SVEAELA_read(Db, Old_df, A_UNITE(TOIAELA,mode2,2,ROIAELA_int_array), PVDAELA_nodps, Wanted, XWDAELA_ints, Dp);
} 
} 
break;
case 3: 
{ 
 /* line 3281: */
if ( QACAELA_(FNIAELA_address, LACAELA_niladdress) )
{ 
A_CLOSURE( VOIAELA_generator, WOIAELA_generator, XOIAELA_generator );
(( XOIAELA_generator * ) ( VOIAELA_generator.nonlocals )) -> Db = Db;
(( XOIAELA_generator * ) ( VOIAELA_generator.nonlocals )) -> Old_df = Old_df;
(( XOIAELA_generator * ) ( VOIAELA_generator.nonlocals )) -> Dp = Dp;
A_CALLPROC(VOIAELA_generator,(A68_TRUE, &BPIAELA),(A68_TRUE, &BPIAELA,(VOIAELA_generator).nonlocals));
APIAELA_char_array = BPIAELA;
 /* line 3282: */
 /* line 3283: */
 /* line 3284: */
 /* line 3288: */
SVEAELA_read(Db, Old_df, A_UNITE(CPIAELA,mode1,1,APIAELA_char_array), PVDAELA_nodps, Wanted, YWDAELA_chars, Dp);
} 
} 
break;
case 4: 
{ 
 /* line 3289: */
if ( QACAELA_(FNIAELA_address, LACAELA_niladdress) )
{ 
A_CLOSURE( EPIAELA_generator, FPIAELA_generator, GPIAELA_generator );
(( GPIAELA_generator * ) ( EPIAELA_generator.nonlocals )) -> Db = Db;
(( GPIAELA_generator * ) ( EPIAELA_generator.nonlocals )) -> Old_df = Old_df;
(( GPIAELA_generator * ) ( EPIAELA_generator.nonlocals )) -> Dp = Dp;
A_CALLPROC(EPIAELA_generator,(A68_TRUE, &KPIAELA),(A68_TRUE, &KPIAELA,(EPIAELA_generator).nonlocals));
JPIAELA_dp_array = KPIAELA;
 /* line 3290: */
SVEAELA_read(Db, Old_df, A_UNITE(LPIAELA,mode1,1,JVDAELA_nodata), JPIAELA_dp_array, Wanted, ZWDAELA_discptrs, Dp);
 /* line 3291: */
A_CLOSURE( NPIAELA_generator, OPIAELA_generator, PPIAELA_generator );
(( PPIAELA_generator * ) ( NPIAELA_generator.nonlocals )) -> JPIAELA_dp_array = JPIAELA_dp_array;
A_CALLPROC(NPIAELA_generator,(A68_TRUE, &TPIAELA),(A68_TRUE, &TPIAELA,(NPIAELA_generator).nonlocals));
SPIAELA_deja_vus = TPIAELA;
 /* line 3292: */
UPIAELA_dvcount = 0;
 /* line 3293: */
 /* line 3294: */
WPIAELA = JPIAELA_dp_array.upb;
for ( VPIAELA_i = 1;
VPIAELA_i <= WPIAELA;
VPIAELA_i += 1 )
{ 
 /* line 3295: */
XPIAELA = !VGEAELA_is_gc_nil(Old_df, (*(&A_VINDEX(JPIAELA_dp_array,VPIAELA_i))));
if ( XPIAELA )
{ /* line 3296: */
XPIAELA = A_CALLPROC(NL(MLIAELA_already_found),(Db, Old_df, Gcdata, (&A_VINDEX(JPIAELA_dp_array,VPIAELA_i))),(Db, Old_df, Gcdata, (&A_VINDEX(JPIAELA_dp_array,VPIAELA_i)),(NL(MLIAELA_already_found)).nonlocals));
}
if ( XPIAELA )
{ 
 /* line 3297: */
YPIAELA = UPIAELA_dvcount+=1 ;
ZPIAELA = (&A_VINDEX(SPIAELA_deja_vus,YPIAELA)) ;
(*ZPIAELA) = VPIAELA_i;
} 
else
{ 
 /* line 3298: */
 /* line 3299: */
A_CALLPROC(NL(LMIAELA_trace),(Db, Old_df, (*(&A_VINDEX(JPIAELA_dp_array,VPIAELA_i))), Gcdata, Wanted),(Db, Old_df, (*(&A_VINDEX(JPIAELA_dp_array,VPIAELA_i))), Gcdata, Wanted,(NL(LMIAELA_trace)).nonlocals));
} 
}
 /* line 3300: */
 /* line 3301: */
 /* line 3305: */
} 
} 
break;
case 5: 
{ 
 /* line 3306: */
if ( QACAELA_(FNIAELA_address, LACAELA_niladdress) )
{ 
A_CLOSURE( BQIAELA_generator, CQIAELA_generator, DQIAELA_generator );
(( DQIAELA_generator * ) ( BQIAELA_generator.nonlocals )) -> Db = Db;
(( DQIAELA_generator * ) ( BQIAELA_generator.nonlocals )) -> Old_df = Old_df;
(( DQIAELA_generator * ) ( BQIAELA_generator.nonlocals )) -> Dp = Dp;
A_CALLPROC(BQIAELA_generator,(A68_TRUE, &HQIAELA),(A68_TRUE, &HQIAELA,(BQIAELA_generator).nonlocals));
GQIAELA_ow_chars = HQIAELA;
 /* line 3307: */
 /* line 3308: */
 /* line 3309: */
 /* line 3313: */
BBFAELA_read_vax_blocks(Db, Old_df, 1, GQIAELA_ow_chars, Wanted, Dp);
} 
} 
break;
case 6: 
{ 
 /* line 3314: */
if ( QACAELA_(FNIAELA_address, LACAELA_niladdress) )
{ 
IQIAELA_num_inds = HJEAELA_array_size(Db, Old_df, Dp);
 /* line 3315: */
A_CLOSURE( KQIAELA_generator, LQIAELA_generator, MQIAELA_generator );
(( MQIAELA_generator * ) ( KQIAELA_generator.nonlocals )) -> IQIAELA_num_inds = IQIAELA_num_inds;
A_CALLPROC(KQIAELA_generator,(A68_TRUE, &QQIAELA),(A68_TRUE, &QQIAELA,(KQIAELA_generator).nonlocals));
PQIAELA_ind_chars = QQIAELA;
 /* line 3316: */
 /* line 3317: */
 /* line 3318: */
 /* line 3322: */
SVEAELA_read(Db, Old_df, A_UNITE(RQIAELA,mode1,1,PQIAELA_ind_chars), PVDAELA_nodps, Wanted, BXDAELA_indirs, Dp);
} 
} 
break;
case 7: 
{ 
 /* line 3323: */
if ( QACAELA_(FNIAELA_address, LACAELA_niladdress) )
{ 
A_CLOSURE( TQIAELA_generator, UQIAELA_generator, VQIAELA_generator );
(( VQIAELA_generator * ) ( TQIAELA_generator.nonlocals )) -> Db = Db;
(( VQIAELA_generator * ) ( TQIAELA_generator.nonlocals )) -> Old_df = Old_df;
(( VQIAELA_generator * ) ( TQIAELA_generator.nonlocals )) -> Dp = Dp;
A_CALLPROC(TQIAELA_generator,(A68_TRUE, &ZQIAELA),(A68_TRUE, &ZQIAELA,(TQIAELA_generator).nonlocals));
YQIAELA_int_array = ZQIAELA;
 /* line 3324: */
 /* line 3325: */
 /* line 3326: */
 /* line 3327: */
 /* line 3331: */
SVEAELA_read(Db, Old_df, A_UNITE(ARIAELA,mode2,2,YQIAELA_int_array), PVDAELA_nodps, Wanted, CXDAELA_freelist_ints, Dp);
} 
} 
break;
case 8: 
{ 
 /* line 3332: */
if ( QACAELA_(FNIAELA_address, LACAELA_niladdress) )
{ 
A_CLOSURE( CRIAELA_generator, DRIAELA_generator, ERIAELA_generator );
(( ERIAELA_generator * ) ( CRIAELA_generator.nonlocals )) -> Db = Db;
(( ERIAELA_generator * ) ( CRIAELA_generator.nonlocals )) -> Old_df = Old_df;
(( ERIAELA_generator * ) ( CRIAELA_generator.nonlocals )) -> Dp = Dp;
A_CALLPROC(CRIAELA_generator,(A68_TRUE, &IRIAELA),(A68_TRUE, &IRIAELA,(CRIAELA_generator).nonlocals));
HRIAELA_int_array = IRIAELA;
 /* line 3333: */
 /* line 3334: */
 /* line 3335: */
 /* line 3336: */
 /* line 3338: */
SVEAELA_read(Db, Old_df, A_UNITE(JRIAELA,mode2,2,HRIAELA_int_array), PVDAELA_nodps, Wanted, DXDAELA_pagetable_ints, Dp);
} 
} 
break;
default: 
 /* line 3339: */
 /* line 3340: */
 /* line 3341: */
NKDAOST_sysfault(LRIAELA);
break;
} 
} 
} 
A_PROC_EXIT(trace);
return;
} 
#undef NL

A_STATIC A68_VOID  ORIAELA_print_list(A68_107 ** List, A68_VC  Message)
{ 
A68_107 ** PRIAELA_ptr;
A68_172  QRIAELA;  /* collateral clause result */
A68_52  RRIAELA;  /* OPERATORS - mode -> union mode */
A68_52  SRIAELA;  /* OPERATORS - mode -> union mode */
A68_56  TRIAELA;  /* procedure value */
A68_85  URIAELA;  /* OPERATORS - istruct -> vector */
A68_INT  VRIAELA_lwb;
A68_INT  WRIAELA_upb;
A68_172  XRIAELA;  /* collateral clause result */
A68_52  YRIAELA;  /* OPERATORS - mode -> union mode */
A68_63  ZRIAELA;  /* avoid structure result */
A68_52  ASIAELA;  /* OPERATORS - mode -> union mode */
A68_85  BSIAELA;  /* OPERATORS - istruct -> vector */
A68_320  CSIAELA;  /* collateral clause result */
A68_52  DSIAELA;  /* OPERATORS - mode -> union mode */
A68_INT  ESIAELA;  /* YIELD */
A68_52  HSIAELA;  /* OPERATORS - mode -> union mode */
A68_VC  ISIAELA;  /* YIELD */
A68_52  JSIAELA;  /* OPERATORS - mode -> union mode */
A68_INT  KSIAELA;  /* YIELD */
A68_63  LSIAELA;  /* avoid structure result */
A68_52  MSIAELA;  /* OPERATORS - mode -> union mode */
A68_85  NSIAELA;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(print_list);
 /* line 3344: */
{ 
PRIAELA_ptr = List;
 /* line 3345: */
QRIAELA.data[0] = A_UNITE(RRIAELA,mode7,7,Message);
TRIAELA.fn.fn_global = LRAAOSL_newline;
TRIAELA.nonlocals = A68_NIL;
QRIAELA.data[1] = A_UNITE(SRIAELA,mode12,12,TRIAELA);
GFBAOSL_put(KEAAOST_screen, A_HISVEC(URIAELA,QRIAELA,2,A68_52 ));
 /* line 3346: */
for ( ;; )
{ 
 /* line 3347: */
if ( !(((*PRIAELA_ptr)!=SUDAELA_nilblocklist)) ) break;
VRIAELA_lwb = (*(&((*PRIAELA_ptr)->Lwb)));
 /* line 3348: */
WRIAELA_upb = (*(&((*PRIAELA_ptr)->Upb)));
 /* line 3349: */
 /* line 3350: */
if ( (VRIAELA_lwb==WRIAELA_upb) )
{ 
XRIAELA.data[0] = A_UNITE(YRIAELA,mode1,1,VRIAELA_lwb);
CZAAOSL_spaces( 1, &ZRIAELA );
XRIAELA.data[1] = A_UNITE(ASIAELA,mode19,19,ZRIAELA);
 /* line 3351: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(BSIAELA,XRIAELA,2,A68_52 ));
} 
else
{ 
ESIAELA = (*(&((*PRIAELA_ptr)->Lwb))) ;
CSIAELA.data[0] = A_UNITE(DSIAELA,mode1,1,ESIAELA);
ISIAELA = GSIAELA ;
CSIAELA.data[1] = A_UNITE(HSIAELA,mode7,7,ISIAELA);
KSIAELA = (*(&((*PRIAELA_ptr)->Upb))) ;
CSIAELA.data[2] = A_UNITE(JSIAELA,mode1,1,KSIAELA);
CZAAOSL_spaces( 1, &LSIAELA );
CSIAELA.data[3] = A_UNITE(MSIAELA,mode19,19,LSIAELA);
 /* line 3352: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(NSIAELA,CSIAELA,4,A68_52 ));
} 
 /* line 3353: */
 /* line 3354: */
PRIAELA_ptr = (&((*PRIAELA_ptr)->Rest));
}
 /* line 3355: */
 /* line 3356: */
LRAAOSL_newline(KEAAOST_screen);
} 
A_PROC_EXIT(print_list);
return;
} 
#undef NL

A_STATIC A68_VOID  VSIAELA_generator(A68_BOOL  TSIAELA_anonymous, A68_54  *ReturnedValue, void *NonLocals)
#define NL(x) (((WSIAELA_generator *)NonLocals)->x)
{ 
A68_54  XSIAELA;  /* clause result */
A68_54  YSIAELA;  /* OPERATORS - dynamic generator */
{ 
YSIAELA.upb = (*(*(&(NL(RSIAELA_df)->File_size)))) ;
( TSIAELA_anonymous? A_VLOC(A68_BOOL ,YSIAELA): A_VHEAP(A68_BOOL ,YSIAELA) );
XSIAELA = YSIAELA;
} 
*ReturnedValue = (XSIAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  GTIAELA_generator(A68_BOOL  ETIAELA_anonymous, A68_32  *ReturnedValue, void *NonLocals)
#define NL(x) (((HTIAELA_generator *)NonLocals)->x)
{ 
A68_32  ITIAELA;  /* clause result */
A68_32  JTIAELA;  /* OPERATORS - dynamic generator */
{ 
JTIAELA.upb = ((*(*(&(NL(RSIAELA_df)->File_size))))-ANBAELA_fixed_overhead) ;
( ETIAELA_anonymous? A_VLOC(A68_INT ,JTIAELA): A_VHEAP(A68_INT ,JTIAELA) );
ITIAELA = JTIAELA;
} 
*ReturnedValue = (ITIAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  UUDAELA_generator(A68_BOOL  TUDAELA_anonymous, A68_106  *ReturnedValue)
{ 
A68_106  VUDAELA;  /* clause result */
A68_106  WUDAELA;  /* OPERATORS - dynamic generator */
{ 
WUDAELA.upb = 0 ;
( TUDAELA_anonymous? A_VLOC(A68_98 ,WUDAELA): A_VHEAP(A68_98 ,WUDAELA) );
VUDAELA = WUDAELA;
} 
*ReturnedValue = (VUDAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  AVDAELA_generator(A68_BOOL  ZUDAELA_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  BVDAELA;  /* clause result */
A68_32  CVDAELA;  /* OPERATORS - dynamic generator */
{ 
CVDAELA.upb = 0 ;
( ZUDAELA_anonymous? A_VLOC(A68_INT ,CVDAELA): A_VHEAP(A68_INT ,CVDAELA) );
BVDAELA = CVDAELA;
} 
*ReturnedValue = (BVDAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  GVDAELA_generator(A68_BOOL  FVDAELA_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  HVDAELA;  /* clause result */
A68_VC  IVDAELA;  /* OPERATORS - dynamic generator */
{ 
IVDAELA.upb = 0 ;
( FVDAELA_anonymous? A_VLOC(A68_CHAR ,IVDAELA): A_VHEAP(A68_CHAR ,IVDAELA) );
HVDAELA = IVDAELA;
} 
*ReturnedValue = (HVDAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  MVDAELA_generator(A68_BOOL  LVDAELA_anonymous, A68_101  *ReturnedValue)
{ 
A68_101  NVDAELA;  /* clause result */
A68_101  OVDAELA;  /* OPERATORS - dynamic generator */
{ 
OVDAELA.upb = 0 ;
( LVDAELA_anonymous? A_VLOC(A68_97 ,OVDAELA): A_VHEAP(A68_97 ,OVDAELA) );
NVDAELA = OVDAELA;
} 
*ReturnedValue = (NVDAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  SVDAELA_generator(A68_BOOL  RVDAELA_anonymous, A68_32  *ReturnedValue)
{ 
A68_32  TVDAELA;  /* clause result */
A68_32  UVDAELA;  /* OPERATORS - dynamic generator */
{ 
UVDAELA.upb = 0 ;
( RVDAELA_anonymous? A_VLOC(A68_INT ,UVDAELA): A_VHEAP(A68_INT ,UVDAELA) );
TVDAELA = UVDAELA;
} 
*ReturnedValue = (TVDAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  YVDAELA_generator(A68_BOOL  XVDAELA_anonymous, A68_54  *ReturnedValue)
{ 
A68_54  ZVDAELA;  /* clause result */
A68_54  AWDAELA;  /* OPERATORS - dynamic generator */
{ 
AWDAELA.upb = 0 ;
( XVDAELA_anonymous? A_VLOC(A68_BOOL ,AWDAELA): A_VHEAP(A68_BOOL ,AWDAELA) );
ZVDAELA = AWDAELA;
} 
*ReturnedValue = (ZVDAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  LWDAELA_makervc(A68_VC  S, A68_VC  *ReturnedValue)
{ 
A68_31  NWDAELA_generator;   /* proc value of non-global proc */
A68_VC  SWDAELA;  /* clause result */
A68_VC  TWDAELA;  /* avoid structure result */
A_PROC_ENTRY(makervc);
A_CLOSURE( NWDAELA_generator, OWDAELA_generator, PWDAELA_generator );
(( PWDAELA_generator * ) ( NWDAELA_generator.nonlocals )) -> S = S;
A_CALLPROC(NWDAELA_generator,(A68_FALSE, &TWDAELA),(A68_FALSE, &TWDAELA,(NWDAELA_generator).nonlocals));
A_VASSIGN2(S,TWDAELA,A68_CHAR ) ;
SWDAELA = TWDAELA;
A_PROC_EXIT(makervc);
*ReturnedValue = (SWDAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  VWDAELA_nilfault(A68_VC  S)
{ 
A_PROC_ENTRY(nilfault);
/*SKIP*/;
A_PROC_EXIT(nilfault);
return;
} 
#undef NL

A_STATIC A68_VOID  GXDAELA_type_name(A68_INT  N, A68_VC  *ReturnedValue)
{ 
A68_VC  IXDAELA;  /* clause result */
A_PROC_ENTRY(type_name);
 /* line 94: */
 /* line 95: */
switch ( N )
{ 
case 1: 
IXDAELA = JXDAELA;
break;
case 2: 
IXDAELA = LXDAELA;
break;
case 3: 
IXDAELA = NXDAELA;
break;
case 4: 
IXDAELA = PXDAELA;
break;
case 5: 
 /* line 96: */
IXDAELA = RXDAELA;
break;
case 6: 
IXDAELA = TXDAELA;
break;
case 7: 
 /* line 97: */
IXDAELA = VXDAELA;
break;
case 8: 
IXDAELA = XXDAELA;
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(type_name);
*ReturnedValue = (IXDAELA);
return;
} 
#undef NL

A_STATIC A68_INT  ZXDAELA_data_size(A68_INT  N)
{ 
A68_INT  AYDAELA;  /* clause result */
A_PROC_ENTRY(data_size);
 /* line 104: */
 /* line 105: */
switch ( (N-1) )
{ 
case 1: 
AYDAELA = EDAAOST_int_size;
break;
case 2: 
AYDAELA = 1;
break;
case 3: 
AYDAELA = 1;
break;
case 4: 
AYDAELA = 1;
break;
case 5: 
AYDAELA = ABCAELA_indirection_size;
break;
case 6: 
 /* line 106: */
AYDAELA = EDAAOST_int_size;
break;
case 7: 
AYDAELA = EDAAOST_int_size;
break;
default: 
A_IMP_SKIP ;
break;
} 
A_PROC_EXIT(data_size);
return( AYDAELA );
} 
#undef NL

A_STATIC A68_INT  IYDAELA_min(A68_INT  A, A68_INT  B)
{ 
A68_INT  JYDAELA;  /* clause result */
A_PROC_ENTRY(min);
 /* line 116: */
if ( (A<B) )
{ 
JYDAELA = A;
} 
else
{ 
JYDAELA = B;
} 
A_PROC_EXIT(min);
return( JYDAELA );
} 
#undef NL

A_STATIC A68_BOOL  MYDAELA_(A68_99  A, A68_99  B)
{ 
A68_BOOL  NYDAELA;  /* optbool result */
A68_BOOL  OYDAELA;  /* optbool result */
A68_BOOL  PYDAELA;  /* clause result */
A_PROC_ENTRY(<);
 /* line 119: */
 /* line 120: */
NYDAELA = (A.Block_num<B.Block_num);
if ( ! NYDAELA )
{OYDAELA = (A.Block_num==B.Block_num);
if ( OYDAELA )
{OYDAELA = (A.Offset<B.Offset);
}
 /* line 121: */
NYDAELA = OYDAELA;
}
PYDAELA = NYDAELA;
A_PROC_EXIT(<);
return( PYDAELA );
} 
#undef NL

A_STATIC A68_INT  RYDAELA_address_rep(A68_99  Addr)
{ 
A68_INT  SYDAELA;  /* clause result */
A_PROC_ENTRY(address_rep);
 /* line 127: */
SYDAELA = ((Addr.Block_num*SNBAELA_block_size)+Addr.Offset);
A_PROC_EXIT(address_rep);
return( SYDAELA );
} 
#undef NL

A_STATIC A68_BOOL  UYDAELA_is_nilindir(A68_98  Ind)
{ 
A68_BOOL  VYDAELA;  /* optbool result */
A68_BOOL  WYDAELA;  /* clause result */
A_PROC_ENTRY(is_nilindir);
 /* line 130: */
VYDAELA = QACAELA_(Ind.Address, LACAELA_niladdress);
if ( VYDAELA )
{VYDAELA = (Ind.Data_elts==0);
}
 /* line 131: */
if ( VYDAELA )
{VYDAELA = (Ind.Dp_elts==0);
}
if ( VYDAELA )
{VYDAELA = (Ind.Code==0);
}
if ( VYDAELA )
{VYDAELA = (Ind.Read_size==0);
}
WYDAELA = VYDAELA;
A_PROC_EXIT(is_nilindir);
return( WYDAELA );
} 
#undef NL

A_STATIC A68_BOOL  YYDAELA_is_gcnilindir(A68_98  Ind)
{ 
A68_BOOL  ZYDAELA;  /* clause result */
A_PROC_ENTRY(is_gcnilindir);
 /* line 134: */
ZYDAELA = QACAELA_(Ind.Address, NACAELA_nilgcaddress);
A_PROC_EXIT(is_gcnilindir);
return( ZYDAELA );
} 
#undef NL

A_STATIC A68_BOOL  CZDAELA_(A68_98  A, A68_98  B)
{ 
A68_BOOL  DZDAELA;  /* optbool result */
A68_BOOL  EZDAELA;  /* clause result */
A_PROC_ENTRY(=);
 /* line 137: */
 /* line 138: */
DZDAELA = (A.Shaky==B.Shaky);
if ( DZDAELA )
{DZDAELA = QACAELA_(A.Address, B.Address);
}
 /* line 139: */
if ( DZDAELA )
{DZDAELA = (A.Data_elts==B.Data_elts);
}
 /* line 140: */
if ( DZDAELA )
{DZDAELA = (A.Dp_elts==B.Dp_elts);
}
 /* line 141: */
if ( DZDAELA )
{DZDAELA = (A.Code==B.Code);
}
 /* line 142: */
if ( DZDAELA )
{DZDAELA = (A.Read_size==B.Read_size);
}
EZDAELA = DZDAELA;
A_PROC_EXIT(=);
return( EZDAELA );
} 
#undef NL

A_STATIC A68_VOID  GZDAELA_name_to_uc(A68_VC  Name, A68_VC  *ReturnedValue)
{ 
A68_INT  HZDAELA_upb;
A68_31  JZDAELA_generator;   /* proc value of non-global proc */
A68_VC  OZDAELA;  /* avoid structure result */
A68_VC  PZDAELA_newname;
A68_INT  QZDAELA_i;
A68_INT  RZDAELA;  /* to part of loop */
A68_INT  SZDAELA_abs;
A68_BOOL  TZDAELA;  /* optbool result */
A68_CHAR  UZDAELA;  /* clause result */
A68_CHAR * VZDAELA;  /* YIELD */
A68_VC  WZDAELA;  /* clause result */
A_PROC_ENTRY(name_to_uc);
 /* line 145: */
{ 
HZDAELA_upb = Name.upb;
 /* line 146: */
A_CLOSURE( JZDAELA_generator, KZDAELA_generator, LZDAELA_generator );
(( LZDAELA_generator * ) ( JZDAELA_generator.nonlocals )) -> HZDAELA_upb = HZDAELA_upb;
A_CALLPROC(JZDAELA_generator,(A68_FALSE, &OZDAELA),(A68_FALSE, &OZDAELA,(JZDAELA_generator).nonlocals));
PZDAELA_newname = OZDAELA;
 /* line 147: */
 /* line 148: */
RZDAELA = HZDAELA_upb;
for ( QZDAELA_i = 1;
QZDAELA_i <= RZDAELA;
QZDAELA_i += 1 )
{ 
SZDAELA_abs = (A68_INT)(unsigned char)A_VINDEX(Name,QZDAELA_i);
 /* line 149: */
TZDAELA = (SZDAELA_abs>=(A68_INT)(unsigned char)'a');
if ( TZDAELA )
{ /* line 150: */
TZDAELA = (SZDAELA_abs<=(A68_INT)(unsigned char)'z');
}
if ( TZDAELA )
{ 
 /* line 151: */
UZDAELA = (A68_CHAR)(SZDAELA_abs-=32);
} 
else
{ 
 /* line 152: */
 /* line 153: */
UZDAELA = A_VINDEX(Name,QZDAELA_i);
} 
VZDAELA = (&A_VINDEX(PZDAELA_newname,QZDAELA_i)) ;
(*VZDAELA) = UZDAELA;
}
 /* line 154: */
 /* line 155: */
WZDAELA = PZDAELA_newname;
} 
A_PROC_EXIT(name_to_uc);
*ReturnedValue = (WZDAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  ZZDAELA_fetch_ind(A68_100 * Df, A68_97  Dp, A68_98  *ReturnedValue)
{ 
A68_98  AAEAELA;  /* clause result */
A68_106  BAEAELA;  /* OPERATORS - simple index */
A68_INT  CAEAELA;  /* YIELD */
A_PROC_ENTRY(fetch_ind);
 /* line 158: */
BAEAELA = (*(&(Df->Indirections))) ;
CAEAELA = MYBAELA_first_block(Dp) ;
AAEAELA = (*(&A_VINDEX(BAEAELA,CAEAELA)));
A_PROC_EXIT(fetch_ind);
*ReturnedValue = (AAEAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  EAEAELA_print_dp(A68_97  Dp)
{ 
A68_169  GAEAELA_sort;   /* proc value of non-global proc */
A68_174  NBEAELA;  /* collateral clause result */
A68_52  QBEAELA;  /* OPERATORS - mode -> union mode */
A68_VC  RBEAELA;  /* YIELD */
A68_52  SBEAELA;  /* OPERATORS - mode -> union mode */
A68_INT  TBEAELA;  /* YIELD */
A68_52  WBEAELA;  /* OPERATORS - mode -> union mode */
A68_VC  XBEAELA;  /* YIELD */
A68_VC  YBEAELA;  /* avoid structure result */
A68_52  ZBEAELA;  /* OPERATORS - mode -> union mode */
A68_52  CCEAELA;  /* OPERATORS - mode -> union mode */
A68_VC  DCEAELA;  /* YIELD */
A68_52  ECEAELA;  /* OPERATORS - mode -> union mode */
A68_BOOL  FCEAELA;  /* YIELD */
A68_52  GCEAELA;  /* OPERATORS - mode -> union mode */
A68_BOOL  HCEAELA;  /* YIELD */
A68_52  KCEAELA;  /* OPERATORS - mode -> union mode */
A68_VC  LCEAELA;  /* YIELD */
A68_52  MCEAELA;  /* OPERATORS - mode -> union mode */
A68_INT  NCEAELA;  /* YIELD */
A68_52  QCEAELA;  /* OPERATORS - mode -> union mode */
A68_VC  RCEAELA;  /* YIELD */
A68_52  SCEAELA;  /* OPERATORS - mode -> union mode */
A68_INT  TCEAELA;  /* YIELD */
A68_52  WCEAELA;  /* OPERATORS - mode -> union mode */
A68_VC  XCEAELA;  /* YIELD */
A68_52  YCEAELA;  /* OPERATORS - mode -> union mode */
A68_INT  ZCEAELA;  /* YIELD */
A68_52  CDEAELA;  /* OPERATORS - mode -> union mode */
A68_VC  DDEAELA;  /* YIELD */
A68_52  EDEAELA;  /* OPERATORS - mode -> union mode */
A68_INT  FDEAELA;  /* YIELD */
A68_52  IDEAELA;  /* OPERATORS - mode -> union mode */
A68_VC  JDEAELA;  /* YIELD */
A68_52  KDEAELA;  /* OPERATORS - mode -> union mode */
A68_INT  LDEAELA;  /* YIELD */
A68_52  ODEAELA;  /* OPERATORS - mode -> union mode */
A68_VC  PDEAELA;  /* YIELD */
A68_52  QDEAELA;  /* OPERATORS - mode -> union mode */
A68_INT  RDEAELA;  /* YIELD */
A68_52  UDEAELA;  /* OPERATORS - mode -> union mode */
A68_VC  VDEAELA;  /* YIELD */
A68_52  WDEAELA;  /* OPERATORS - mode -> union mode */
A68_BITS  XDEAELA;  /* YIELD */
A68_52  AEEAELA;  /* OPERATORS - mode -> union mode */
A68_VC  BEEAELA;  /* YIELD */
A68_52  CEEAELA;  /* OPERATORS - mode -> union mode */
A68_BITS  DEEAELA;  /* YIELD */
A68_52  EEEAELA;  /* OPERATORS - mode -> union mode */
A68_CHAR  FEEAELA;  /* YIELD */
A68_52  GEEAELA;  /* OPERATORS - mode -> union mode */
A68_56  HEEAELA;  /* procedure value */
A68_85  IEEAELA;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(print_dp);
 /* line 161: */
 /* line 162: */
{ 
 /* line 163: */
A_CLOSURE( GAEAELA_sort, HAEAELA_sort, IAEAELA_sort );
(( IAEAELA_sort * ) ( GAEAELA_sort.nonlocals )) -> Dp = Dp;
 /* line 168: */
RBEAELA = PBEAELA ;
NBEAELA.data[0] = A_UNITE(QBEAELA,mode7,7,RBEAELA);
TBEAELA = DYBAELA_discptr_code(Dp) ;
NBEAELA.data[1] = A_UNITE(SBEAELA,mode1,1,TBEAELA);
XBEAELA = VBEAELA ;
NBEAELA.data[2] = A_UNITE(WBEAELA,mode7,7,XBEAELA);
A_CALLPROC(GAEAELA_sort,( &YBEAELA),( &YBEAELA,(GAEAELA_sort).nonlocals));
NBEAELA.data[3] = A_UNITE(ZBEAELA,mode7,7,YBEAELA);
DCEAELA = BCEAELA ;
NBEAELA.data[4] = A_UNITE(CCEAELA,mode7,7,DCEAELA);
 /* line 169: */
FCEAELA = GYBAELA_is_shaky(Dp) ;
NBEAELA.data[5] = A_UNITE(ECEAELA,mode8,8,FCEAELA);
HCEAELA = JYBAELA_is_assignable(Dp) ;
NBEAELA.data[6] = A_UNITE(GCEAELA,mode8,8,HCEAELA);
LCEAELA = JCEAELA ;
NBEAELA.data[7] = A_UNITE(KCEAELA,mode7,7,LCEAELA);
NCEAELA = MYBAELA_first_block(Dp) ;
NBEAELA.data[8] = A_UNITE(MCEAELA,mode1,1,NCEAELA);
 /* line 170: */
RCEAELA = PCEAELA ;
NBEAELA.data[9] = A_UNITE(QCEAELA,mode7,7,RCEAELA);
TCEAELA = PYBAELA_first_offset(Dp) ;
NBEAELA.data[10] = A_UNITE(SCEAELA,mode1,1,TCEAELA);
XCEAELA = VCEAELA ;
NBEAELA.data[11] = A_UNITE(WCEAELA,mode7,7,XCEAELA);
ZCEAELA = SYBAELA_data_elts(Dp) ;
NBEAELA.data[12] = A_UNITE(YCEAELA,mode1,1,ZCEAELA);
 /* line 171: */
DDEAELA = BDEAELA ;
NBEAELA.data[13] = A_UNITE(CDEAELA,mode7,7,DDEAELA);
FDEAELA = VYBAELA_dp_elts(Dp) ;
NBEAELA.data[14] = A_UNITE(EDEAELA,mode1,1,FDEAELA);
JDEAELA = HDEAELA ;
NBEAELA.data[15] = A_UNITE(IDEAELA,mode7,7,JDEAELA);
LDEAELA = YYBAELA_version(Dp) ;
NBEAELA.data[16] = A_UNITE(KDEAELA,mode1,1,LDEAELA);
PDEAELA = NDEAELA ;
NBEAELA.data[17] = A_UNITE(ODEAELA,mode7,7,PDEAELA);
 /* line 172: */
RDEAELA = BZBAELA_read_size(Dp) ;
NBEAELA.data[18] = A_UNITE(QDEAELA,mode1,1,RDEAELA);
VDEAELA = TDEAELA ;
NBEAELA.data[19] = A_UNITE(UDEAELA,mode7,7,VDEAELA);
XDEAELA = PTBAELA_sumcheck(Dp) ;
NBEAELA.data[20] = A_UNITE(WDEAELA,mode3,3,XDEAELA);
BEEAELA = ZDEAELA ;
NBEAELA.data[21] = A_UNITE(AEEAELA,mode7,7,BEEAELA);
DEEAELA = Dp.Sumcheck ;
NBEAELA.data[22] = A_UNITE(CEEAELA,mode3,3,DEEAELA);
 /* line 173: */
FEEAELA = ')' ;
NBEAELA.data[23] = A_UNITE(EEEAELA,mode6,6,FEEAELA);
HEEAELA.fn.fn_global = LRAAOSL_newline;
HEEAELA.nonlocals = A68_NIL;
NBEAELA.data[24] = A_UNITE(GEEAELA,mode12,12,HEEAELA);
 /* line 174: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(IEEAELA,NBEAELA,25,A68_52 ));
} 
A_PROC_EXIT(print_dp);
return;
} 
#undef NL

A_STATIC A68_BOOL  LEEAELA_is_forgery(A68_109 * Db, A68_97  Dp)
{ 
A68_BOOL  MEEAELA;  /* optbool result */
A68_BOOL  NEEAELA;  /* clause result */
A_PROC_ENTRY(is_forgery);
 /* line 177: */
MEEAELA = (DYBAELA_discptr_code(Dp)>=EXDAELA_forgery);
if ( ! MEEAELA )
{MEEAELA = (PYBAELA_first_offset(Dp)>SNBAELA_block_size);
}
 /* line 178: */
if ( ! MEEAELA )
{ /* line 179: */
MEEAELA = FZBAELA_incorrect_sumcheck(Dp);
}
if ( MEEAELA )
{ 
EAEAELA_print_dp(Dp);
 /* line 180: */
NEEAELA = A68_TRUE;
} 
else
{ 
 /* line 181: */
NEEAELA = A68_FALSE;
} 
A_PROC_EXIT(is_forgery);
return( NEEAELA );
} 
#undef NL

A_STATIC A68_VOID  PEEAELA_check_nilfile(A68_100 * Df)
{ 
A_PROC_ENTRY(check_nilfile);
 /* line 184: */
 /* line 185: */
if ( (Df==QUDAELA_nilfile) )
{ 
QNBAELA_keepsake_fault(REEAELA);
} 
A_PROC_EXIT(check_nilfile);
return;
} 
#undef NL

A_STATIC A68_VOID  TEEAELA_check_valid_db(A68_109 * Db)
{ 
A_PROC_ENTRY(check_valid_db);
 /* line 188: */
 /* line 189: */
if ( ((*(*(&(Db->Setup))))!=BNBAELA_is_setup) )
{ 
QNBAELA_keepsake_fault(VEEAELA);
} 
A_PROC_EXIT(check_valid_db);
return;
} 
#undef NL

A_STATIC A68_VOID  YEEAELA_check_forgery_use(A68_109 * Db, A68_97  Dp)
{ 
A_PROC_ENTRY(check_forgery_use);
 /* line 192: */
 /* line 193: */
if ( LEEAELA_is_forgery(Db, Dp) )
{ 
QNBAELA_keepsake_fault(AFEAELA);
} 
A_PROC_EXIT(check_forgery_use);
return;
} 
#undef NL

A_STATIC A68_VOID  DFEAELA_check_forgery_write(A68_109 * Db, A68_97  Dp)
{ 
A_PROC_ENTRY(check_forgery_write);
 /* line 196: */
 /* line 197: */
if ( LEEAELA_is_forgery(Db, Dp) )
{ 
QNBAELA_keepsake_fault(FFEAELA);
} 
A_PROC_EXIT(check_forgery_write);
return;
} 
#undef NL

A_STATIC A68_BOOL  IFEAELA_(A68_32  A, A68_32  B)
{ 
A68_BOOL  JFEAELA_result;
A68_INT  KFEAELA_i;
A68_INT  LFEAELA;  /* to part of loop */
A68_BOOL  MFEAELA;  /* clause result */
A_PROC_ENTRY(=);
 /* line 200: */
{ 
JFEAELA_result = A68_TRUE;
 /* line 201: */
 /* line 202: */
if ( (A.upb==B.upb) )
{ 
LFEAELA = A.upb;
for ( KFEAELA_i = 1;
KFEAELA_i <= LFEAELA;
KFEAELA_i += 1 )
{ 
 /* line 203: */
if ( !(JFEAELA_result) ) break;
if ( (A_VINDEX(A,KFEAELA_i)!=A_VINDEX(B,KFEAELA_i)) )
{ 
 /* line 204: */
JFEAELA_result = A68_FALSE;
} 
}
 /* line 205: */
} 
else
{ 
 /* line 206: */
JFEAELA_result = A68_FALSE;
} 
 /* line 207: */
 /* line 208: */
MFEAELA = JFEAELA_result;
} 
A_PROC_EXIT(=);
return( MFEAELA );
} 
#undef NL

A_STATIC A68_VOID  PFEAELA_(A68_VC  A, A68_VC  B, A68_VC  *ReturnedValue)
{ 
A68_31  RFEAELA_generator;   /* proc value of non-global proc */
A68_VC  XFEAELA;  /* avoid structure result */
A68_VC  WFEAELA_result;
A68_VC  YFEAELA;  /* OPERATORS - trim index */
A68_VC  ZFEAELA;  /* YIELD */
A68_VC  AGEAELA;  /* OPERATORS - trim index */
A68_VC  BGEAELA;  /* YIELD */
A68_VC  CGEAELA;  /* clause result */
A_PROC_ENTRY(+);
 /* line 211: */
{ 
A_CLOSURE( RFEAELA_generator, SFEAELA_generator, TFEAELA_generator );
(( TFEAELA_generator * ) ( RFEAELA_generator.nonlocals )) -> A = A;
(( TFEAELA_generator * ) ( RFEAELA_generator.nonlocals )) -> B = B;
A_CALLPROC(RFEAELA_generator,(A68_TRUE, &XFEAELA),(A68_TRUE, &XFEAELA,(RFEAELA_generator).nonlocals));
WFEAELA_result = XFEAELA;
 /* line 212: */
ZFEAELA = A_VTRIM(YFEAELA,(WFEAELA_result),A_VTSCRIPT(&(YFEAELA.upb),(WFEAELA_result).upb,1,A.upb)) ;
A_VASSIGN2(A,ZFEAELA,A68_CHAR );
 /* line 213: */
BGEAELA = A_VTRIM(AGEAELA,(WFEAELA_result),A_VTSCRIPT(&(AGEAELA.upb),(WFEAELA_result).upb,(A.upb+1),(A.upb+B.upb))) ;
A_VASSIGN2(B,BGEAELA,A68_CHAR );
 /* line 214: */
 /* line 215: */
CGEAELA = WFEAELA_result;
} 
A_PROC_EXIT(+);
*ReturnedValue = (CGEAELA);
return;
} 
#undef NL

A_STATIC A68_BOOL  FGEAELA_is_nilvar(A68_100 * Df, A68_97  Dp)
{ 
A68_BOOL  GGEAELA;  /* clause result */
A68_98  HGEAELA;  /* avoid structure result */
A_PROC_ENTRY(is_nilvar);
 /* line 218: */
if ( (PYBAELA_first_offset(Dp)==0) )
{ 
 /* line 219: */
ZZDAELA_fetch_ind( Df, Dp, &HGEAELA );
GGEAELA = QACAELA_(HGEAELA.Address, LACAELA_niladdress);
} 
else
{ 
GGEAELA = A68_FALSE;
} 
A_PROC_EXIT(is_nilvar);
return( GGEAELA );
} 
#undef NL

A_STATIC A68_BOOL  KGEAELA_is_nilptr(A68_100 * Df, A68_97  Dp)
{ 
A68_BOOL  LGEAELA;  /* optbool result */
A68_BOOL  MGEAELA;  /* optbool result */
A68_BOOL  NGEAELA;  /* clause result */
A_PROC_ENTRY(is_nilptr);
 /* line 222: */
LGEAELA = YACAELA_is_nildp(Dp);
if ( ! LGEAELA )
{MGEAELA = JYBAELA_is_assignable(Dp);
if ( MGEAELA )
{MGEAELA = FGEAELA_is_nilvar(Df, Dp);
}
LGEAELA = MGEAELA;
}
NGEAELA = LGEAELA;
A_PROC_EXIT(is_nilptr);
return( NGEAELA );
} 
#undef NL

A_STATIC A68_VOID  QGEAELA_check_nilptr(A68_100 * Df, A68_97  Dp)
{ 
A_PROC_ENTRY(check_nilptr);
 /* line 225: */
if ( KGEAELA_is_nilptr(Df, Dp) )
{ 
QNBAELA_keepsake_fault(SGEAELA);
} 
A_PROC_EXIT(check_nilptr);
return;
} 
#undef NL

A_STATIC A68_BOOL  VGEAELA_is_gc_nil(A68_100 * Df, A68_97  Dp)
{ 
A68_BOOL  WGEAELA;  /* optbool result */
A68_98  XGEAELA;  /* avoid structure result */
A68_98  YGEAELA_indir;
A68_BOOL  ZGEAELA;  /* optbool result */
A68_BOOL  AHEAELA;  /* clause result */
A_PROC_ENTRY(is_gc_nil);
 /* line 231: */
WGEAELA = (PYBAELA_first_offset(Dp)==0);
if ( WGEAELA )
{WGEAELA = (MYBAELA_first_block(Dp)!=0);
}
 /* line 232: */
if ( WGEAELA )
{ 
ZZDAELA_fetch_ind( Df, Dp, &XGEAELA );
YGEAELA_indir = XGEAELA;
 /* line 233: */
ZGEAELA = YYDAELA_is_gcnilindir(YGEAELA_indir);
if ( ! ZGEAELA )
{ /* line 234: */
ZGEAELA = (YYBAELA_version(Dp)!=YGEAELA_indir.Version);
}
AHEAELA = ZGEAELA;
} 
else
{ 
AHEAELA = A68_FALSE;
} 
A_PROC_EXIT(is_gc_nil);
return( AHEAELA );
} 
#undef NL

A_STATIC A68_VOID  DHEAELA_check_gc_nil(A68_100 * Df, A68_97  Dp)
{ 
A_PROC_ENTRY(check_gc_nil);
 /* line 237: */
 /* line 238: */
if ( VGEAELA_is_gc_nil(Df, Dp) )
{ 
QNBAELA_keepsake_fault(FHEAELA);
} 
A_PROC_EXIT(check_gc_nil);
return;
} 
#undef NL

A_STATIC A68_VOID  IHEAELA_get_disc_address(A68_100 * Df, A68_97  Dp, A68_99  *ReturnedValue)
{ 
A68_INT  JHEAELA_fblock;
A68_INT  KHEAELA_offset;
A68_98  LHEAELA;  /* avoid structure result */
A68_98  MHEAELA_ind;
A68_99  NHEAELA;  /* clause result */
A68_99  OHEAELA;  /* collateral clause result */
A_PROC_ENTRY(get_disc_address);
 /* line 241: */
{ 
JHEAELA_fblock = MYBAELA_first_block(Dp);
 /* line 242: */
KHEAELA_offset = PYBAELA_first_offset(Dp);
 /* line 243: */
 /* line 244: */
if ( (KHEAELA_offset==0) )
{ 
ZZDAELA_fetch_ind( Df, Dp, &LHEAELA );
MHEAELA_ind = LHEAELA;
 /* line 245: */
 /* line 246: */
NHEAELA = MHEAELA_ind.Address;
} 
else
{ 
OHEAELA.Block_num = JHEAELA_fblock;
 /* line 247: */
 /* line 248: */
OHEAELA.Offset = KHEAELA_offset;
NHEAELA = OHEAELA;
} 
} 
A_PROC_EXIT(get_disc_address);
*ReturnedValue = (NHEAELA);
return;
} 
#undef NL

A68_102 * QHEAELA_keepsake_file(A68_109 * Db)
{ 
A68_100 * RHEAELA_df;
A68_102 * SHEAELA;  /* clause result */
A_PROC_ENTRY(keepsake_file);
 /* line 251: */
{ 
TEEAELA_check_valid_db(Db);
 /* line 252: */
RHEAELA_df = (*(&(Db->Df)));
 /* line 253: */
PEEAELA_check_nilfile(RHEAELA_df);
 /* line 254: */
 /* line 255: */
SHEAELA = (*(*(&(RHEAELA_df->File))));
} 
A_PROC_EXIT(keepsake_file);
return( SHEAELA );
} 
#undef NL

A68_BOOL  WHEAELA_same_data(A68_109 * Db, A68_97  A, A68_97  B)
{ 
A68_100 * XHEAELA_df;
A68_BOOL  YHEAELA;  /* optbool result */
A68_BOOL  ZHEAELA;  /* optbool result */
A68_99  AIEAELA;  /* avoid structure result */
A68_99  BIEAELA;  /* avoid structure result */
A68_BOOL  CIEAELA;  /* clause result */
A_PROC_ENTRY(same_data);
 /* line 259: */
{ 
TEEAELA_check_valid_db(Db);
 /* line 260: */
XHEAELA_df = (*(&(Db->Df)));
 /* line 261: */
PEEAELA_check_nilfile(XHEAELA_df);
 /* line 262: */
YEEAELA_check_forgery_use(Db, A);
 /* line 263: */
YEEAELA_check_forgery_use(Db, B);
 /* line 264: */
DHEAELA_check_gc_nil(XHEAELA_df, A);
 /* line 265: */
DHEAELA_check_gc_nil(XHEAELA_df, B);
 /* line 266: */
YHEAELA = YACAELA_is_nildp(A);
if ( YHEAELA )
{YHEAELA = YACAELA_is_nildp(B);
}
 /* line 267: */
if ( ! YHEAELA )
{ZHEAELA = FGEAELA_is_nilvar(XHEAELA_df, A);
if ( ZHEAELA )
{ZHEAELA = FGEAELA_is_nilvar(XHEAELA_df, B);
}
 /* line 268: */
if ( ZHEAELA )
{ZHEAELA = (MYBAELA_first_block(A)==MYBAELA_first_block(B));
}
YHEAELA = ZHEAELA;
}
 /* line 269: */
if ( ! YHEAELA )
{ /* line 270: */
IHEAELA_get_disc_address( XHEAELA_df, B, &AIEAELA );
IHEAELA_get_disc_address( XHEAELA_df, A, &BIEAELA );
YHEAELA = QACAELA_(BIEAELA, AIEAELA);
}
CIEAELA = YHEAELA;
} 
A_PROC_EXIT(same_data);
return( CIEAELA );
} 
#undef NL

A68_BOOL  GIEAELA_same_discptr(A68_109 * Db, A68_97  A, A68_97  B)
{ 
A68_BOOL  HIEAELA;  /* clause result */
A_PROC_ENTRY(same_discptr);
HIEAELA = HACAELA_(A, B);
A_PROC_EXIT(same_discptr);
return( HIEAELA );
} 
#undef NL

A_STATIC A68_INT  LIEAELA_data_array_size(A68_109 * Db, A68_100 * Df, A68_97  Dp)
{ 
A68_100 * MIEAELA_df;
A68_INT  NIEAELA;  /* clause result */
A68_98  OIEAELA;  /* avoid structure result */
A_PROC_ENTRY(data_array_size);
 /* line 279: */
{ 
MIEAELA_df = (*(&(Db->Df)));
 /* line 280: */
TEEAELA_check_valid_db(Db);
 /* line 281: */
PEEAELA_check_nilfile(MIEAELA_df);
 /* line 282: */
QGEAELA_check_nilptr(MIEAELA_df, Dp);
 /* line 283: */
YEEAELA_check_forgery_use(Db, Dp);
 /* line 284: */
DHEAELA_check_gc_nil(MIEAELA_df, Dp);
 /* line 285: */
if ( (PYBAELA_first_offset(Dp)==0) )
{ 
ZZDAELA_fetch_ind( MIEAELA_df, Dp, &OIEAELA );
NIEAELA = OIEAELA.Data_elts;
} 
else
{ 
 /* line 286: */
NIEAELA = SYBAELA_data_elts(Dp);
} 
} 
A_PROC_EXIT(data_array_size);
return( NIEAELA );
} 
#undef NL

A68_INT  RIEAELA_num_chars(A68_109 * Db, A68_97  Dp)
{ 
A68_INT  SIEAELA;  /* clause result */
A_PROC_ENTRY(num_chars);
 /* line 289: */
SIEAELA = LIEAELA_data_array_size(Db, (*(&(Db->Df))), Dp);
A_PROC_EXIT(num_chars);
return( SIEAELA );
} 
#undef NL

A_STATIC A68_INT  WIEAELA_dp_array_size(A68_109 * Db, A68_100 * Df, A68_97  Dp)
{ 
A68_100 * XIEAELA_df;
A68_INT  YIEAELA;  /* clause result */
A68_98  ZIEAELA;  /* avoid structure result */
A_PROC_ENTRY(dp_array_size);
 /* line 296: */
{ 
XIEAELA_df = (*(&(Db->Df)));
 /* line 297: */
TEEAELA_check_valid_db(Db);
 /* line 298: */
PEEAELA_check_nilfile(XIEAELA_df);
 /* line 299: */
QGEAELA_check_nilptr(XIEAELA_df, Dp);
 /* line 300: */
YEEAELA_check_forgery_use(Db, Dp);
 /* line 301: */
DHEAELA_check_gc_nil(XIEAELA_df, Dp);
 /* line 302: */
if ( (PYBAELA_first_offset(Dp)==0) )
{ 
ZZDAELA_fetch_ind( XIEAELA_df, Dp, &ZIEAELA );
YIEAELA = ZIEAELA.Dp_elts;
} 
else
{ 
 /* line 303: */
YIEAELA = VYBAELA_dp_elts(Dp);
} 
} 
A_PROC_EXIT(dp_array_size);
return( YIEAELA );
} 
#undef NL

A68_INT  CJEAELA_num_discptrs(A68_109 * Db, A68_97  Dp)
{ 
A68_INT  DJEAELA;  /* clause result */
A_PROC_ENTRY(num_discptrs);
 /* line 306: */
DJEAELA = WIEAELA_dp_array_size(Db, (*(&(Db->Df))), Dp);
A_PROC_EXIT(num_discptrs);
return( DJEAELA );
} 
#undef NL

A_STATIC A68_INT  HJEAELA_array_size(A68_109 * Db, A68_100 * Df, A68_97  Dp)
{ 
A68_INT  IJEAELA_num_chars;
A68_INT  JJEAELA_num_dps;
A68_INT  KJEAELA_data_code;
A68_98  LJEAELA;  /* avoid structure result */
A68_98  MJEAELA_ind;
A68_INT  PJEAELA;  /* clause result */
A68_INT  QJEAELA_size;
A68_INT  RJEAELA;  /* clause result */
A_PROC_ENTRY(array_size);
 /* line 309: */
{ 
TEEAELA_check_valid_db(Db);
 /* line 310: */
PEEAELA_check_nilfile(Df);
 /* line 311: */
QGEAELA_check_nilptr(Df, Dp);
 /* line 312: */
YEEAELA_check_forgery_use(Db, Dp);
 /* line 313: */
DHEAELA_check_gc_nil(Df, Dp);
 /* line 314: */
 /* line 315: */
 /* line 316: */
 /* line 317: */
 /* line 318: */
if ( (PYBAELA_first_offset(Dp)==0) )
{ 
ZZDAELA_fetch_ind( Df, Dp, &LJEAELA );
MJEAELA_ind = LJEAELA;
 /* line 319: */
IJEAELA_num_chars = MJEAELA_ind.Data_elts;
 /* line 320: */
JJEAELA_num_dps = MJEAELA_ind.Dp_elts;
 /* line 321: */
 /* line 322: */
KJEAELA_data_code = MJEAELA_ind.Code;
} 
else
{ 
IJEAELA_num_chars = SYBAELA_data_elts(Dp);
 /* line 323: */
JJEAELA_num_dps = VYBAELA_dp_elts(Dp);
 /* line 324: */
 /* line 325: */
KJEAELA_data_code = DYBAELA_discptr_code(Dp);
} 
 /* line 326: */
 /* line 327: */
if ( (KJEAELA_data_code==WWDAELA_charsdps) )
{ 
 /* line 328: */
QNBAELA_keepsake_fault(OJEAELA);
} 
 /* line 329: */
 /* line 330: */
 /* line 331: */
if ( (IJEAELA_num_chars!=0) )
{ 
PJEAELA = IJEAELA_num_chars;
} 
else
{ 
 /* line 332: */
 /* line 333: */
if ( (JJEAELA_num_dps!=0) )
{ 
 /* line 334: */
PJEAELA = JJEAELA_num_dps;
} 
else
{ 
PJEAELA = 0;
} 
} 
QJEAELA_size = PJEAELA;
 /* line 335: */
 /* line 336: */
RJEAELA = (QJEAELA_size/ZXDAELA_data_size(KJEAELA_data_code));
} 
A_PROC_EXIT(array_size);
return( RJEAELA );
} 
#undef NL

A68_INT  UJEAELA_size(A68_109 * Db, A68_97  Dp)
{ 
A68_INT  VJEAELA;  /* clause result */
A_PROC_ENTRY(size);
 /* line 339: */
VJEAELA = HJEAELA_array_size(Db, (*(&(Db->Df))), Dp);
A_PROC_EXIT(size);
return( VJEAELA );
} 
#undef NL

A68_INT  YJEAELA_discptr_type(A68_109 * Db, A68_97  Dp)
{ 
A68_100 * ZJEAELA_df;
A68_BOOL  AKEAELA_assignable;
A68_BOOL  BKEAELA_shaky;
A68_INT  CKEAELA;  /* clause result */
A68_BOOL  DKEAELA;  /* optbool result */
A_PROC_ENTRY(discptr_type);
 /* line 351: */
{ 
ZJEAELA_df = (*(&(Db->Df)));
 /* line 352: */
TEEAELA_check_valid_db(Db);
 /* line 353: */
PEEAELA_check_nilfile(ZJEAELA_df);
 /* line 354: */
AKEAELA_assignable = JYBAELA_is_assignable(Dp);
 /* line 355: */
BKEAELA_shaky = GYBAELA_is_shaky(Dp);
 /* line 356: */
if ( LEEAELA_is_forgery(Db, Dp) )
{ 
CKEAELA = 0;
} 
else
{ 
if ( VGEAELA_is_gc_nil(ZJEAELA_df, Dp) )
{ 
 /* line 357: */
CKEAELA = 1;
} 
else
{ 
DKEAELA = AKEAELA_assignable;
if ( DKEAELA )
{DKEAELA = BKEAELA_shaky;
}
if ( DKEAELA )
{ 
CKEAELA = 2;
} 
else
{ 
if ( AKEAELA_assignable )
{ 
CKEAELA = 3;
} 
else
{ 
if ( BKEAELA_shaky )
{ 
CKEAELA = 4;
} 
else
{ 
 /* line 358: */
CKEAELA = 5;
} 
} 
} 
} 
} 
} 
A_PROC_EXIT(discptr_type);
return( CKEAELA );
} 
#undef NL

A68_INT  GKEAELA_discptr_data(A68_109 * Db, A68_97  Dp)
{ 
A68_100 * HKEAELA_df;
A68_INT  IKEAELA;  /* clause result */
A68_BOOL  JKEAELA;  /* optbool result */
A68_98  KKEAELA;  /* avoid structure result */
A68_98  LKEAELA_ind;
A_PROC_ENTRY(discptr_data);
 /* line 373: */
{ 
HKEAELA_df = (*(&(Db->Df)));
 /* line 374: */
TEEAELA_check_valid_db(Db);
 /* line 375: */
PEEAELA_check_nilfile(HKEAELA_df);
 /* line 376: */
 /* line 377: */
 /* line 378: */
if ( LEEAELA_is_forgery(Db, Dp) )
{ 
IKEAELA = 0;
} 
else
{ 
JKEAELA = YACAELA_is_nildp(Dp);
if ( ! JKEAELA )
{ /* line 379: */
JKEAELA = FGEAELA_is_nilvar(HKEAELA_df, Dp);
}
 /* line 380: */
if ( JKEAELA )
{ 
IKEAELA = 2;
} 
else
{ 
 /* line 381: */
if ( (PYBAELA_first_offset(Dp)==0) )
{ 
ZZDAELA_fetch_ind( HKEAELA_df, Dp, &KKEAELA );
LKEAELA_ind = KKEAELA;
 /* line 382: */
 /* line 383: */
 /* line 384: */
if ( (LKEAELA_ind.Version!=YYBAELA_version(Dp)) )
{ 
IKEAELA = 1;
} 
else
{ 
 /* line 385: */
switch ( LKEAELA_ind.Code )
{ 
case 1: 
IKEAELA = 3;
break;
case 2: 
IKEAELA = 4;
break;
case 3: 
IKEAELA = 5;
break;
case 4: 
 /* line 386: */
IKEAELA = 6;
break;
case 5: 
 /* line 387: */
IKEAELA = 7;
break;
default: 
 /* line 388: */
 /* line 389: */
IKEAELA = 0;
break;
} 
} 
} 
else
{ 
 /* line 390: */
switch ( DYBAELA_discptr_code(Dp) )
{ 
case 1: 
IKEAELA = 3;
break;
case 2: 
IKEAELA = 4;
break;
case 3: 
IKEAELA = 5;
break;
case 4: 
 /* line 391: */
IKEAELA = 6;
break;
case 5: 
 /* line 392: */
IKEAELA = 7;
break;
default: 
 /* line 393: */
 /* line 394: */
IKEAELA = 0;
break;
} 
} 
} 
} 
} 
A_PROC_EXIT(discptr_data);
return( IKEAELA );
} 
#undef NL

A_STATIC A68_VOID  NKEAELA_filetype_check(A68_INT  Fixed)
{ 
A68_INT  OKEAELA_test;
A_PROC_ENTRY(filetype_check);
 /* line 397: */
{ 
OKEAELA_test = (A68_INT )(A68_BITS )((A68_BITS )Fixed&(A68_BITS )UMBAELA_pass_mask);
 /* line 398: */
 /* line 399: */
if ( (OKEAELA_test==KSBAELA_out_of_date_file) )
{ 
 /* line 400: */
QNBAELA_keepsake_fault(QKEAELA);
} 
else
{ 
 /* line 401: */
 /* line 402: */
QNBAELA_keepsake_fault(SKEAELA);
} 
} 
A_PROC_EXIT(filetype_check);
return;
} 
#undef NL

A_STATIC A68_BOOL  VKEAELA_compare(A68_VC  Buff1, A68_VC  Buff2)
{ 
A68_BOOL  WKEAELA_equal;
A68_INT  XKEAELA_i;
A68_INT  YKEAELA;  /* to part of loop */
A68_BOOL  ZKEAELA;  /* clause result */
A_PROC_ENTRY(compare);
 /* line 405: */
{ 
WKEAELA_equal = A68_TRUE;
 /* line 406: */
YKEAELA = Buff1.upb;
for ( XKEAELA_i = 1;
XKEAELA_i <= YKEAELA;
XKEAELA_i += 1 )
{ 
 /* line 407: */
if ( !(WKEAELA_equal) ) break;
if ( (A_VINDEX(Buff1,XKEAELA_i)!=A_VINDEX(Buff2,XKEAELA_i)) )
{ 
 /* line 408: */
WKEAELA_equal = A68_FALSE;
} 
}
 /* line 409: */
 /* line 410: */
ZKEAELA = WKEAELA_equal;
} 
A_PROC_EXIT(compare);
return( ZKEAELA );
} 
#undef NL

A68_INT  BLEAELA_discfile_size(A68_109 * Db)
{ 
A68_INT  CLEAELA;  /* clause result */
A_PROC_ENTRY(discfile_size);
 /* line 413: */
{ 
TEEAELA_check_valid_db(Db);
 /* line 414: */
PEEAELA_check_nilfile((*(&(Db->Df))));
 /* line 415: */
 /* line 416: */
CLEAELA = ((*(*(&((*(&(Db->Df)))->File_size))))*SNBAELA_block_size);
} 
A_PROC_EXIT(discfile_size);
return( CLEAELA );
} 
#undef NL

A68_INT  ELEAELA_size_of_free_space(A68_109 * Db)
{ 
A68_INT  FLEAELA;  /* clause result */
A_PROC_ENTRY(size_of_free_space);
 /* line 419: */
{ 
TEEAELA_check_valid_db(Db);
 /* line 420: */
PEEAELA_check_nilfile((*(&(Db->Df))));
 /* line 424: */
 /* line 425: */
FLEAELA = (*(*(&((*(&(Db->Df)))->Size_of_free_space))));
} 
A_PROC_EXIT(size_of_free_space);
return( FLEAELA );
} 
#undef NL

A68_BOOL  HLEAELA_last_update_failed(A68_109 * Db)
{ 
A68_BOOL  ILEAELA;  /* clause result */
A_PROC_ENTRY(last_update_failed);
 /* line 428: */
{ 
TEEAELA_check_valid_db(Db);
 /* line 429: */
 /* line 430: */
ILEAELA = (*(*(&((*(&(Db->Df)))->Last_update_failed))));
} 
A_PROC_EXIT(last_update_failed);
return( ILEAELA );
} 
#undef NL

A68_INT  KLEAELA_overhead(A68_109 * Db)
{ 
A68_INT  LLEAELA;  /* clause result */
A_PROC_ENTRY(overhead);
 /* line 433: */
{ 
TEEAELA_check_valid_db(Db);
 /* line 434: */
PEEAELA_check_nilfile((*(&(Db->Df))));
 /* line 435: */
 /* line 436: */
 /* line 437: */
LLEAELA = ((ANBAELA_fixed_overhead*SNBAELA_block_size)+(((*(*(&((*(&(Db->Df)))->File_size))))-ANBAELA_fixed_overhead)*CCCAELA_block_heading_size));
} 
A_PROC_EXIT(overhead);
return( LLEAELA );
} 
#undef NL
 /* line 440: */
 /* line 441: */

A_STATIC A68_INT  ULEAELA_create_indir(A68_100 * Df, A68_99 * Addr, A68_BOOL  Shaky, A68_INT  Data_elts, A68_INT  Dp_elts, A68_INT  Data_code, A68_INT  Read_size, A68_INT  Indirection)
{ 
A68_INT  VLEAELA_new_version;
A68_98  WLEAELA;  /* collateral clause result */
A68_98  XLEAELA_new_ind;
A68_106 * YLEAELA_indirections;
A68_BOOL  ZLEAELA_not_found;
A68_INT  AMEAELA_i;
A68_INT  BMEAELA;  /* to part of loop */
A68_INT * CMEAELA;  /* YIELD */
A68_98 * DMEAELA;  /* YIELD */
A68_99  EMEAELA;  /* collateral clause result */
A68_106  FMEAELA_temp;
A68_INT  GMEAELA_upb;
A68_153  IMEAELA_generator;   /* proc value of non-global proc */
A68_106  NMEAELA;  /* avoid structure result */
A68_106  OMEAELA;  /* OPERATORS - trim index */
A68_106  PMEAELA;  /* YIELD */
A68_INT  QMEAELA;  /* YIELD */
A68_98 * RMEAELA;  /* YIELD */
A68_99  SMEAELA;  /* collateral clause result */
A68_INT  TMEAELA;  /* clause result */
A68_106  UMEAELA;  /* OPERATORS - simple index */
A68_99 * VMEAELA;  /* YIELD */
A68_99  WMEAELA;  /* collateral clause result */
A68_106  XMEAELA;  /* OPERATORS - simple index */
A_PROC_ENTRY(create_indir);
 /* line 447: */
{ 
VLEAELA_new_version = 1;
 /* line 448: */
WLEAELA.Shaky = Shaky;
WLEAELA.Address = (*Addr);
WLEAELA.Data_elts = Data_elts;
WLEAELA.Dp_elts = Dp_elts;
 /* line 449: */
WLEAELA.Code = Data_code;
WLEAELA.Version = VLEAELA_new_version;
WLEAELA.Read_size = Read_size;
XLEAELA_new_ind = WLEAELA;
 /* line 450: */
 /* line 451: */
if ( (Indirection==0) )
{ 
YLEAELA_indirections = (&(Df->Indirections));
 /* line 452: */
ZLEAELA_not_found = A68_TRUE;
 /* line 453: */
BMEAELA = (*YLEAELA_indirections).upb;
for ( AMEAELA_i = 1;
AMEAELA_i <= BMEAELA;
AMEAELA_i += 1 )
{ 
 /* line 454: */
if ( !(ZLEAELA_not_found) ) break;
 /* line 455: */
if ( YYDAELA_is_gcnilindir((*(&A_VINDEX((*YLEAELA_indirections),AMEAELA_i)))) )
{ 
ZLEAELA_not_found = A68_FALSE;
 /* line 456: */
VLEAELA_new_version = (*(&((&A_VINDEX((*YLEAELA_indirections),AMEAELA_i))->Version)));
 /* line 457: */
CMEAELA = (&((&XLEAELA_new_ind)->Version)) ;
(*CMEAELA) = VLEAELA_new_version;
 /* line 458: */
DMEAELA = (&A_VINDEX((*YLEAELA_indirections),AMEAELA_i)) ;
(*DMEAELA) = XLEAELA_new_ind;
 /* line 459: */
EMEAELA.Block_num = AMEAELA_i;
 /* line 460: */
EMEAELA.Offset = 0;
 /* line 461: */
(*Addr) = EMEAELA;
} 
}
 /* line 462: */
 /* line 463: */
if ( ZLEAELA_not_found )
{ 
FMEAELA_temp = (*YLEAELA_indirections);
 /* line 464: */
GMEAELA_upb = FMEAELA_temp.upb;
 /* line 465: */
A_CLOSURE( IMEAELA_generator, JMEAELA_generator, KMEAELA_generator );
(( KMEAELA_generator * ) ( IMEAELA_generator.nonlocals )) -> GMEAELA_upb = GMEAELA_upb;
A_CALLPROC(IMEAELA_generator,(A68_FALSE, &NMEAELA),(A68_FALSE, &NMEAELA,(IMEAELA_generator).nonlocals));
(*YLEAELA_indirections) = NMEAELA;
 /* line 466: */
PMEAELA = A_VTRIM(OMEAELA,((*YLEAELA_indirections)),A_VTSCRIPT(&(OMEAELA.upb),((*YLEAELA_indirections)).upb,1,GMEAELA_upb)) ;
A_VASSIGN2(FMEAELA_temp,PMEAELA,A68_98 );
 /* line 467: */
QMEAELA = (GMEAELA_upb+1) ;
RMEAELA = (&A_VINDEX((*YLEAELA_indirections),QMEAELA)) ;
(*RMEAELA) = XLEAELA_new_ind;
 /* line 468: */
SMEAELA.Block_num = (GMEAELA_upb+1);
 /* line 469: */
SMEAELA.Offset = 0;
(*Addr) = SMEAELA;
} 
 /* line 470: */
 /* line 471: */
TMEAELA = VLEAELA_new_version;
} 
else
{ 
UMEAELA = (*(&(Df->Indirections))) ;
VMEAELA = (&((&A_VINDEX(UMEAELA,Indirection))->Address)) ;
(*VMEAELA) = (*Addr);
 /* line 472: */
WMEAELA.Block_num = Indirection;
WMEAELA.Offset = 0;
(*Addr) = WMEAELA;
 /* line 473: */
 /* line 474: */
 /* line 475: */
XMEAELA = (*(&(Df->Indirections))) ;
TMEAELA = (*(&((&A_VINDEX(XMEAELA,Indirection))->Version)));
} 
} 
A_PROC_EXIT(create_indir);
return( TMEAELA );
} 
#undef NL

A68_VOID  ZMEAELA_make_nilvar(A68_109 * Db, A68_97  *ReturnedValue)
{ 
A68_100 * ANEAELA_df;
A68_99  BNEAELA_addr;
A68_INT  HNEAELA_version;
A68_105  INEAELA;  /* collateral clause result */
A68_105 * JNEAELA;  /* YIELD */
A68_105 ** KNEAELA;  /* YIELD */
A68_97  LNEAELA;  /* clause result */
A68_97  MNEAELA;  /* avoid structure result */
A_PROC_ENTRY(make_nilvar);
 /* line 478: */
{ 
TEEAELA_check_valid_db(Db);
 /* line 479: */
ANEAELA_df = (*(&(Db->Df)));
 /* line 480: */
BNEAELA_addr = LACAELA_niladdress;
 /* line 481: */
 /* line 482: */
 /* line 483: */
 /* line 484: */
 /* line 485: */
 /* line 486: */
PEEAELA_check_nilfile(ANEAELA_df);
 /* line 487: */
 /* line 488: */
HNEAELA_version = ULEAELA_create_indir(ANEAELA_df, (&BNEAELA_addr), EYDAELA_not_shaky, DNEAELA_data_elts, ENEAELA_dp_elts, CNEAELA_code, FNEAELA_read_size, GNEAELA_indirection);
 /* line 489: */
 /* line 490: */
INEAELA.Indirection = (*(&((&BNEAELA_addr)->Block_num)));
INEAELA.Rest = (*(&(ANEAELA_df->Instore_vars)));
JNEAELA = A_HEAP(A68_105 ) ;
(*JNEAELA) = INEAELA ;
KNEAELA = (&(ANEAELA_df->Instore_vars)) ;
(*KNEAELA) = JNEAELA;
 /* line 491: */
 /* line 492: */
 /* line 493: */
ZTBAELA_make_dp( EYDAELA_not_shaky, BYDAELA_assignable, CNEAELA_code, DNEAELA_data_elts, ENEAELA_dp_elts, HNEAELA_version, FNEAELA_read_size, BNEAELA_addr, &MNEAELA );
LNEAELA = MNEAELA;
} 
A_PROC_EXIT(make_nilvar);
*ReturnedValue = (LNEAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  ONEAELA_setup_writebuffer(A68_INT  Generation, A68_103  *ReturnedValue)
{ 
A68_103  PNEAELA;  /* collateral clause result */
A68_31  RNEAELA_generator;   /* proc value of non-global proc */
A68_VC  WNEAELA;  /* avoid structure result */
A68_INT * XNEAELA;  /* YIELD */
A68_INT * YNEAELA;  /* YIELD */
A68_INT * ZNEAELA;  /* YIELD */
A68_103  AOEAELA;  /* clause result */
A_PROC_ENTRY(setup_writebuffer);
 /* line 496: */
{ 
A_CLOSURE( RNEAELA_generator, SNEAELA_generator, TNEAELA_generator );
A_CALLPROC(RNEAELA_generator,(A68_FALSE, &WNEAELA),(A68_FALSE, &WNEAELA,(RNEAELA_generator).nonlocals));
PNEAELA.Buffer = WNEAELA;
 /* line 497: */
PNEAELA.List = SUDAELA_nilblocklist;
XNEAELA = A_HEAP(A68_INT ) ;
(*XNEAELA) = VNBAELA_max_buffer_size ;
PNEAELA.Buffer_ptr = XNEAELA;
YNEAELA = A_HEAP(A68_INT ) ;
(*YNEAELA) = 0 ;
PNEAELA.Upb = YNEAELA;
 /* line 498: */
ZNEAELA = A_HEAP(A68_INT ) ;
(*ZNEAELA) = Generation ;
PNEAELA.Generation = ZNEAELA;
AOEAELA = PNEAELA;
} 
A_PROC_EXIT(setup_writebuffer);
*ReturnedValue = (AOEAELA);
return;
} 
#undef NL

A_STATIC A68_100 * EOEAELA_set_up(A68_109 * Db, A68_102 * File, A68_INT  Generation)
{ 
A68_100 * FOEAELA_df;
A68_103  GOEAELA;  /* avoid structure result */
A68_103 * HOEAELA;  /* YIELD */
A68_103 ** IOEAELA;  /* YIELD */
A68_31  KOEAELA_generator;   /* proc value of non-global proc */
A68_VC  POEAELA;  /* avoid structure result */
A68_VC * QOEAELA;  /* YIELD */
A68_INT * ROEAELA;  /* YIELD */
A68_INT ** SOEAELA;  /* YIELD */
A68_INT * TOEAELA;  /* YIELD */
A68_INT ** UOEAELA;  /* YIELD */
A68_INT * VOEAELA;  /* YIELD */
A68_INT ** WOEAELA;  /* YIELD */
A68_102 ** XOEAELA;  /* YIELD */
A68_102 *** YOEAELA;  /* YIELD */
A68_VC  ZOEAELA;  /* avoid structure result */
A68_VC * APEAELA;  /* YIELD */
A68_INT * BPEAELA;  /* YIELD */
A68_INT ** CPEAELA;  /* YIELD */
A68_INT * DPEAELA;  /* YIELD */
A68_INT ** EPEAELA;  /* YIELD */
A68_INT * FPEAELA;  /* YIELD */
A68_INT ** GPEAELA;  /* YIELD */
A68_INT * HPEAELA;  /* YIELD */
A68_INT ** IPEAELA;  /* YIELD */
A68_INT * JPEAELA;  /* YIELD */
A68_INT ** KPEAELA;  /* YIELD */
A68_INT * LPEAELA;  /* YIELD */
A68_INT ** MPEAELA;  /* YIELD */
A68_33  OPEAELA_generator;   /* proc value of non-global proc */
A68_32  TPEAELA;  /* avoid structure result */
A68_32 * UPEAELA;  /* YIELD */
A68_INT * VPEAELA;  /* YIELD */
A68_INT ** WPEAELA;  /* YIELD */
A68_INT * XPEAELA;  /* YIELD */
A68_INT ** YPEAELA;  /* YIELD */
A68_106 * ZPEAELA;  /* YIELD */
A68_INT  AQEAELA_actual_file_size;
A68_97 * BQEAELA;  /* YIELD */
A68_97 ** CQEAELA;  /* YIELD */
A68_BOOL * DQEAELA;  /* YIELD */
A68_BOOL ** EQEAELA;  /* YIELD */
A68_BOOL * FQEAELA;  /* YIELD */
A68_BOOL ** GQEAELA;  /* YIELD */
A68_BOOL * HQEAELA;  /* YIELD */
A68_BOOL ** IQEAELA;  /* YIELD */
A68_BOOL * JQEAELA;  /* YIELD */
A68_BOOL ** KQEAELA;  /* YIELD */
A68_105 ** LQEAELA;  /* YIELD */
A68_INT * MQEAELA;  /* YIELD */
A68_INT ** NQEAELA;  /* YIELD */
A68_33  PQEAELA_generator;   /* proc value of non-global proc */
A68_32  UQEAELA;  /* avoid structure result */
A68_32 * VQEAELA;  /* YIELD */
A68_33  XQEAELA_generator;   /* proc value of non-global proc */
A68_32  CREAELA;  /* avoid structure result */
A68_32 * DREAELA;  /* YIELD */
A68_97 * EREAELA;  /* YIELD */
A68_97 ** FREAELA;  /* YIELD */
A68_97 * GREAELA;  /* YIELD */
A68_97 ** HREAELA;  /* YIELD */
A68_97 * IREAELA;  /* YIELD */
A68_97 ** JREAELA;  /* YIELD */
A68_104 ** KREAELA;  /* YIELD */
A68_100 * LREAELA;  /* clause result */
A_PROC_ENTRY(set_up);
 /* line 501: */
{ 
FOEAELA_df = (A_HEAP(A68_100 ));
 /* line 502: */
ONEAELA_setup_writebuffer( Generation, &GOEAELA );
HOEAELA = A_HEAP(A68_103 ) ;
(*HOEAELA) = GOEAELA ;
IOEAELA = (&(FOEAELA_df->Write_buffer)) ;
(*IOEAELA) = HOEAELA;
 /* line 503: */
A_CLOSURE( KOEAELA_generator, LOEAELA_generator, MOEAELA_generator );
A_CALLPROC(KOEAELA_generator,(A68_FALSE, &POEAELA),(A68_FALSE, &POEAELA,(KOEAELA_generator).nonlocals));
QOEAELA = (&(FOEAELA_df->Block_buffer)) ;
(*QOEAELA) = POEAELA;
 /* line 505: */
ROEAELA = A_HEAP(A68_INT ) ;
(*ROEAELA) = Generation ;
SOEAELA = (&(FOEAELA_df->Generation)) ;
(*SOEAELA) = ROEAELA;
 /* line 506: */
TOEAELA = A_HEAP(A68_INT ) ;
(*TOEAELA) = ZOBAELA_file_block_size(File) ;
UOEAELA = (&(FOEAELA_df->File_size)) ;
(*UOEAELA) = TOEAELA;
 /* line 507: */
VOEAELA = A_HEAP(A68_INT ) ;
(*VOEAELA) = ANBAELA_fixed_overhead ;
WOEAELA = (&(FOEAELA_df->Old_file_size)) ;
(*WOEAELA) = VOEAELA;
 /* line 508: */
XOEAELA = A_HEAP(A68_102 *) ;
(*XOEAELA) = File ;
YOEAELA = (&(FOEAELA_df->File)) ;
(*YOEAELA) = XOEAELA;
 /* line 509: */
LWDAELA_makervc( (*(&(Db->Db_name))), &ZOEAELA );
APEAELA = (&(FOEAELA_df->Name)) ;
(*APEAELA) = ZOEAELA;
 /* line 510: */
BPEAELA = A_HEAP(A68_INT ) ;
(*BPEAELA) = 1 ;
CPEAELA = (&(FOEAELA_df->Freelist_index)) ;
(*CPEAELA) = BPEAELA;
 /* line 511: */
DPEAELA = A_HEAP(A68_INT ) ;
(*DPEAELA) = (*(*(&(FOEAELA_df->File_size)))) ;
EPEAELA = (&(FOEAELA_df->Current_free)) ;
(*EPEAELA) = DPEAELA;
 /* line 512: */
FPEAELA = A_HEAP(A68_INT ) ;
(*FPEAELA) = (*(*(&(FOEAELA_df->Current_free)))) ;
GPEAELA = (&(FOEAELA_df->First_free)) ;
(*GPEAELA) = FPEAELA;
 /* line 513: */
HPEAELA = A_HEAP(A68_INT ) ;
(*HPEAELA) = 0 ;
IPEAELA = (&(FOEAELA_df->Last_free)) ;
(*IPEAELA) = HPEAELA;
 /* line 514: */
JPEAELA = A_HEAP(A68_INT ) ;
(*JPEAELA) = 0 ;
KPEAELA = (&(FOEAELA_df->Cbufpos)) ;
(*KPEAELA) = JPEAELA;
 /* line 515: */
 /* line 516: */
LPEAELA = A_HEAP(A68_INT ) ;
(*LPEAELA) = ((*(*(&(FOEAELA_df->File_size))))-ANBAELA_fixed_overhead) ;
MPEAELA = (&(FOEAELA_df->Size_of_free_space)) ;
(*MPEAELA) = LPEAELA;
 /* line 520: */
A_CLOSURE( OPEAELA_generator, PPEAELA_generator, QPEAELA_generator );
(( QPEAELA_generator * ) ( OPEAELA_generator.nonlocals )) -> FOEAELA_df = FOEAELA_df;
A_CALLPROC(OPEAELA_generator,(A68_FALSE, &TPEAELA),(A68_FALSE, &TPEAELA,(OPEAELA_generator).nonlocals));
UPEAELA = (&(FOEAELA_df->Freelist)) ;
(*UPEAELA) = TPEAELA;
 /* line 521: */
VPEAELA = A_HEAP(A68_INT ) ;
(*VPEAELA) = 1 ;
WPEAELA = (&(FOEAELA_df->Freeblock_ptr)) ;
(*WPEAELA) = VPEAELA;
 /* line 522: */
XPEAELA = A_HEAP(A68_INT ) ;
(*XPEAELA) = 0 ;
YPEAELA = (&(FOEAELA_df->Freelist_ext_ptr)) ;
(*YPEAELA) = XPEAELA;
 /* line 523: */
ZPEAELA = (&(FOEAELA_df->Indirections)) ;
(*ZPEAELA) = XUDAELA_nilindirs;
 /* line 524: */
AQEAELA_actual_file_size = ((*(*(&(FOEAELA_df->File_size))))-ANBAELA_fixed_overhead);
 /* line 525: */
BQEAELA = A_HEAP(A68_97 ) ;
(*BQEAELA) = UACAELA_nilptr ;
CQEAELA = (&(FOEAELA_df->Append_dp)) ;
(*CQEAELA) = BQEAELA;
 /* line 526: */
DQEAELA = A_HEAP(A68_BOOL ) ;
(*DQEAELA) = A68_TRUE ;
EQEAELA = (&(FOEAELA_df->Writeable)) ;
(*EQEAELA) = DQEAELA;
 /* line 527: */
FQEAELA = A_HEAP(A68_BOOL ) ;
(*FQEAELA) = A68_FALSE ;
GQEAELA = (&(FOEAELA_df->Last_update_failed)) ;
(*GQEAELA) = FQEAELA;
 /* line 528: */
HQEAELA = A_HEAP(A68_BOOL ) ;
(*HQEAELA) = A68_FALSE ;
IQEAELA = (&(FOEAELA_df->Appending)) ;
(*IQEAELA) = HQEAELA;
 /* line 529: */
JQEAELA = A_HEAP(A68_BOOL ) ;
(*JQEAELA) = A68_TRUE ;
KQEAELA = (&(FOEAELA_df->Collectable)) ;
(*KQEAELA) = JQEAELA;
 /* line 530: */
LQEAELA = (&(FOEAELA_df->Instore_vars)) ;
(*LQEAELA) = JWDAELA_nilvarlist;
 /* line 531: */
MQEAELA = A_HEAP(A68_INT ) ;
(*MQEAELA) = 0 ;
NQEAELA = (&(FOEAELA_df->Appended_data)) ;
(*NQEAELA) = MQEAELA;
 /* line 532: */
A_CLOSURE( PQEAELA_generator, QQEAELA_generator, RQEAELA_generator );
A_CALLPROC(PQEAELA_generator,(A68_FALSE, &UQEAELA),(A68_FALSE, &UQEAELA,(PQEAELA_generator).nonlocals));
VQEAELA = (&(FOEAELA_df->Freelist_ext)) ;
(*VQEAELA) = UQEAELA;
 /* line 533: */
A_CLOSURE( XQEAELA_generator, YQEAELA_generator, ZQEAELA_generator );
A_CALLPROC(XQEAELA_generator,(A68_FALSE, &CREAELA),(A68_FALSE, &CREAELA,(XQEAELA_generator).nonlocals));
DREAELA = (&(FOEAELA_df->Pagetable_ext)) ;
(*DREAELA) = CREAELA;
 /* line 534: */
EREAELA = A_HEAP(A68_97 ) ;
(*EREAELA) = UACAELA_nilptr ;
FREAELA = (&(FOEAELA_df->Indirs_dp)) ;
(*FREAELA) = EREAELA;
 /* line 535: */
GREAELA = A_HEAP(A68_97 ) ;
(*GREAELA) = UACAELA_nilptr ;
HREAELA = (&(FOEAELA_df->Freelist_dp)) ;
(*HREAELA) = GREAELA;
 /* line 536: */
IREAELA = A_HEAP(A68_97 ) ;
(*IREAELA) = UACAELA_nilptr ;
JREAELA = (&(FOEAELA_df->Pagetable_dp)) ;
(*JREAELA) = IREAELA;
 /* line 537: */
KREAELA = (&(FOEAELA_df->Gc_ptrs)) ;
(*KREAELA) = IWDAELA_niltraced;
 /* line 538: */
 /* line 539: */
LREAELA = FOEAELA_df;
} 
A_PROC_EXIT(set_up);
return( LREAELA );
} 
#undef NL

A68_VOID  PREAELA_assign_to_var(A68_109 * Db, A68_97  Old, A68_97  New)
{ 
A68_100 * QREAELA_df;
A68_INT  XREAELA_first_new;
A68_106  YREAELA;  /* OPERATORS - simple index */
A68_INT  ZREAELA;  /* YIELD */
A68_98 * ASEAELA_old_ind;
A68_98  BSEAELA;  /* collateral clause result */
A68_106  CSEAELA;  /* OPERATORS - simple index */
A68_98  DSEAELA_new_ind;
A_PROC_ENTRY(assign_to_var);
 /* line 545: */
{ 
TEEAELA_check_valid_db(Db);
 /* line 546: */
QREAELA_df = (*(&(Db->Df)));
 /* line 547: */
PEEAELA_check_nilfile(QREAELA_df);
 /* line 548: */
if ( !(*(*(&(QREAELA_df->Writeable)))) )
{ 
QNBAELA_keepsake_fault(SREAELA);
} 
 /* line 549: */
 /* line 550: */
if ( !JYBAELA_is_assignable(Old) )
{ 
 /* line 551: */
QNBAELA_keepsake_fault(UREAELA);
} 
 /* line 552: */
 /* line 553: */
if ( GIEAELA_same_discptr(Db, Old, (*(*(&(QREAELA_df->Append_dp))))) )
{ 
QNBAELA_keepsake_fault(WREAELA);
} 
 /* line 554: */
XREAELA_first_new = MYBAELA_first_block(New);
 /* line 555: */
YREAELA = (*(&(QREAELA_df->Indirections))) ;
ZREAELA = MYBAELA_first_block(Old) ;
ASEAELA_old_ind = (&A_VINDEX(YREAELA,ZREAELA));
 /* line 556: */
 /* line 557: */
if ( KGEAELA_is_nilptr(QREAELA_df, New) )
{ 
BSEAELA.Shaky = EYDAELA_not_shaky;
BSEAELA.Address.Block_num = 0;
BSEAELA.Address.Offset = 0;
BSEAELA.Data_elts = 0;
BSEAELA.Dp_elts = 0;
BSEAELA.Code = 0;
BSEAELA.Version = (*(&(ASEAELA_old_ind->Version)));
 /* line 558: */
BSEAELA.Read_size = 0;
} 
else
{ 
 /* line 559: */
if ( JYBAELA_is_assignable(New) )
{ 
CSEAELA = (*(&(QREAELA_df->Indirections))) ;
DSEAELA_new_ind = (*(&A_VINDEX(CSEAELA,XREAELA_first_new)));
 /* line 560: */
BSEAELA.Shaky = (*(&(ASEAELA_old_ind->Shaky)));
 /* line 561: */
BSEAELA.Address = DSEAELA_new_ind.Address;
BSEAELA.Data_elts = DSEAELA_new_ind.Data_elts;
 /* line 562: */
BSEAELA.Dp_elts = DSEAELA_new_ind.Dp_elts;
BSEAELA.Code = DSEAELA_new_ind.Code;
 /* line 563: */
BSEAELA.Version = (*(&(ASEAELA_old_ind->Version)));
 /* line 564: */
BSEAELA.Read_size = DSEAELA_new_ind.Read_size;
} 
else
{ 
BSEAELA.Shaky = (*(&(ASEAELA_old_ind->Shaky)));
BSEAELA.Address.Block_num = XREAELA_first_new;
 /* line 565: */
BSEAELA.Address.Offset = PYBAELA_first_offset(New);
BSEAELA.Data_elts = SYBAELA_data_elts(New);
BSEAELA.Dp_elts = VYBAELA_dp_elts(New);
 /* line 566: */
BSEAELA.Code = DYBAELA_discptr_code(New);
BSEAELA.Version = (*(&(ASEAELA_old_ind->Version)));
 /* line 567: */
 /* line 568: */
BSEAELA.Read_size = BZBAELA_read_size(New);
} 
} 
(*ASEAELA_old_ind) = BSEAELA;
} 
A_PROC_EXIT(assign_to_var);
return;
} 
#undef NL

A68_VOID  GSEAELA_var_to_ptr(A68_109 * Db, A68_97  Dp, A68_97  *ReturnedValue)
{ 
A68_100 * HSEAELA_df;
A68_97  ISEAELA;  /* clause result */
A68_99  JSEAELA;  /* avoid structure result */
A68_99  KSEAELA_addr;
A68_97  LSEAELA;  /* avoid structure result */
A_PROC_ENTRY(var_to_ptr);
 /* line 574: */
{ 
HSEAELA_df = (*(&(Db->Df)));
 /* line 575: */
TEEAELA_check_valid_db(Db);
 /* line 576: */
PEEAELA_check_nilfile(HSEAELA_df);
 /* line 577: */
YEEAELA_check_forgery_use(Db, Dp);
 /* line 578: */
DHEAELA_check_gc_nil(HSEAELA_df, Dp);
 /* line 579: */
 /* line 580: */
if ( JYBAELA_is_assignable(Dp) )
{ 
 /* line 581: */
 /* line 582: */
if ( FGEAELA_is_nilvar(HSEAELA_df, Dp) )
{ 
ISEAELA = UACAELA_nilptr;
} 
else
{ 
IHEAELA_get_disc_address( HSEAELA_df, Dp, &JSEAELA );
KSEAELA_addr = JSEAELA;
 /* line 583: */
 /* line 584: */
 /* line 585: */
 /* line 586: */
 /* line 587: */
ZTBAELA_make_dp( GYBAELA_is_shaky(Dp), CYDAELA_not_assignable, DYBAELA_discptr_code(Dp), SYBAELA_data_elts(Dp), VYBAELA_dp_elts(Dp), YYBAELA_version(Dp), BZBAELA_read_size(Dp), KSEAELA_addr, &LSEAELA );
ISEAELA = LSEAELA;
} 
} 
else
{ 
QNBAELA_keepsake_fault(NSEAELA);
 /* line 588: */
 /* line 589: */
ISEAELA = Dp;
} 
} 
A_PROC_EXIT(var_to_ptr);
*ReturnedValue = (ISEAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  OSEAELA_setup_readbuffer(A68_110  *ReturnedValue)
{ 
A68_110  PSEAELA_b;
A68_INT * QSEAELA;  /* YIELD */
A68_INT ** RSEAELA;  /* YIELD */
A68_INT * SSEAELA;  /* YIELD */
A68_INT ** TSEAELA;  /* YIELD */
A68_31  VSEAELA_generator;   /* proc value of non-global proc */
A68_VC  ATEAELA;  /* avoid structure result */
A68_VC * BTEAELA;  /* YIELD */
A68_110  CTEAELA;  /* clause result */
A_PROC_ENTRY(setup_readbuffer);
{ 
 /* line 593: */
QSEAELA = A_HEAP(A68_INT ) ;
(*QSEAELA) = 0 ;
RSEAELA = (&((&PSEAELA_b)->Lwb)) ;
(*RSEAELA) = QSEAELA;
 /* line 594: */
SSEAELA = A_HEAP(A68_INT ) ;
(*SSEAELA) = 0 ;
TSEAELA = (&((&PSEAELA_b)->Upb)) ;
(*TSEAELA) = SSEAELA;
 /* line 595: */
A_CLOSURE( VSEAELA_generator, WSEAELA_generator, XSEAELA_generator );
A_CALLPROC(VSEAELA_generator,(A68_FALSE, &ATEAELA),(A68_FALSE, &ATEAELA,(VSEAELA_generator).nonlocals));
BTEAELA = (&((&PSEAELA_b)->Buffer)) ;
(*BTEAELA) = ATEAELA;
 /* line 596: */
 /* line 597: */
CTEAELA = PSEAELA_b;
} 
A_PROC_EXIT(setup_readbuffer);
*ReturnedValue = (CTEAELA);
return;
} 
#undef NL

A_STATIC A68_BOOL  FTEAELA_in_readbuffer(A68_110  Rb, A68_INT  Block_num)
{ 
A68_BOOL  GTEAELA;  /* optbool result */
A68_BOOL  HTEAELA;  /* clause result */
A_PROC_ENTRY(in_readbuffer);
 /* line 600: */
GTEAELA = (Block_num>=(*Rb.Lwb));
if ( GTEAELA )
{GTEAELA = (Block_num<=(*Rb.Upb));
}
HTEAELA = GTEAELA;
A_PROC_EXIT(in_readbuffer);
return( HTEAELA );
} 
#undef NL

A_STATIC A68_BOOL  KTEAELA_in_writebuffer(A68_100 * Df, A68_INT  Block_num)
{ 
A68_103  LTEAELA_wb;
A68_BOOL  MTEAELA;  /* optbool result */
A68_BOOL  NTEAELA;  /* clause result */
A_PROC_ENTRY(in_writebuffer);
 /* line 603: */
{ 
LTEAELA_wb = (*(*(&(Df->Write_buffer))));
 /* line 604: */
 /* line 605: */
MTEAELA = (Block_num>(((*LTEAELA_wb.Upb)-VNBAELA_max_buffer_size)+(*LTEAELA_wb.Buffer_ptr)));
if ( MTEAELA )
{MTEAELA = (Block_num<=(*LTEAELA_wb.Upb));
}
if ( MTEAELA )
{ /* line 606: */
MTEAELA = ((*(*(&(Df->Generation))))==(*LTEAELA_wb.Generation));
}
NTEAELA = MTEAELA;
} 
A_PROC_EXIT(in_writebuffer);
return( NTEAELA );
} 
#undef NL
 /* line 609: */
 /* line 610: */

A_STATIC A68_BOOL  UTEAELA_read_block(A68_109 * Db, A68_100 * Df, A68_110 * Read_buffer, A68_VC  Block_buffer, A68_INT  Read_size, A68_INT  Block_num)
{ 
A68_BOOL  VTEAELA_result;
A68_103 * WTEAELA_write_buffer;
A68_INT * XTEAELA_lwb;
A68_INT * YTEAELA_upb;
A68_BOOL  ZTEAELA;  /* optbool result */
A68_VC  AUEAELA;  /* OPERATORS - assign op */
A68_INT  BUEAELA_start;
A68_VC  CUEAELA;  /* OPERATORS - trim index */
A68_VC  DUEAELA;  /* OPERATORS - trim index */
A68_VC  EUEAELA;  /* OPERATORS - assign op */
A68_INT  FUEAELA_start;
A68_VC  GUEAELA;  /* OPERATORS - trim index */
A68_VC  HUEAELA;  /* OPERATORS - trim index */
A68_VC  IUEAELA;  /* OPERATORS - assign op */
A68_INT  JUEAELA_buffer_size;
A68_31  LUEAELA_generator;   /* proc value of non-global proc */
A68_VC  QUEAELA;  /* avoid structure result */
A68_VC * RUEAELA;  /* YIELD */
A68_92  SUEAELA;  /* procedure value */
A68_INT * TUEAELA;  /* YIELD */
A68_VC  UUEAELA;  /* OPERATORS - trim index */
A68_VC  VUEAELA;  /* OPERATORS - trim index */
A68_VC  WUEAELA;  /* OPERATORS - assign op */
A68_BOOL  XUEAELA;  /* clause result */
A_PROC_ENTRY(read_block);
 /* line 616: */
{ 
VTEAELA_result = A68_FALSE;
 /* line 617: */
WTEAELA_write_buffer = (*(&(Df->Write_buffer)));
 /* line 618: */
XTEAELA_lwb = (*(&(Read_buffer->Lwb)));
 /* line 619: */
YTEAELA_upb = (*(&(Read_buffer->Upb)));
 /* line 620: */
ZTEAELA = (Block_num==(*(*(&(Df->Current_free)))));
if ( ZTEAELA )
{ /* line 621: */
ZTEAELA = ((*(*(&(Df->Cbufpos))))!=0);
}
if ( ZTEAELA )
{ 
 /* line 625: */
AUEAELA = (*(&(Df->Block_buffer))) ;
A_VASSIGN2(AUEAELA,Block_buffer,A68_CHAR );
} 
else
{ 
 /* line 626: */
if ( KTEAELA_in_writebuffer(Df, Block_num) )
{ 
 /* line 627: */
BUEAELA_start = ((((VNBAELA_max_buffer_size+Block_num)-(*(*(&(WTEAELA_write_buffer->Upb)))))-1)*SNBAELA_block_size);
 /* line 628: */
 /* line 629: */
CUEAELA = (*(&(WTEAELA_write_buffer->Buffer))) ;
EUEAELA = A_VTRIM(DUEAELA,(CUEAELA),A_VTSCRIPT(&(DUEAELA.upb),(CUEAELA).upb,(BUEAELA_start+1),(BUEAELA_start+SNBAELA_block_size))) ;
A_VASSIGN2(EUEAELA,Block_buffer,A68_CHAR );
} 
else
{ 
 /* line 630: */
if ( FTEAELA_in_readbuffer((*Read_buffer), Block_num) )
{ 
FUEAELA_start = ((Block_num-(*XTEAELA_lwb))*SNBAELA_block_size);
 /* line 631: */
 /* line 635: */
GUEAELA = (*(&(Read_buffer->Buffer))) ;
IUEAELA = A_VTRIM(HUEAELA,(GUEAELA),A_VTSCRIPT(&(HUEAELA.upb),(GUEAELA).upb,(FUEAELA_start+1),(FUEAELA_start+SNBAELA_block_size))) ;
A_VASSIGN2(IUEAELA,Block_buffer,A68_CHAR );
} 
else
{ 
JUEAELA_buffer_size = IYDAELA_min(Read_size, (((*(*(&(Df->File_size))))-Block_num)+1));
 /* line 636: */
A_CLOSURE( LUEAELA_generator, MUEAELA_generator, NUEAELA_generator );
(( NUEAELA_generator * ) ( LUEAELA_generator.nonlocals )) -> JUEAELA_buffer_size = JUEAELA_buffer_size;
A_CALLPROC(LUEAELA_generator,(A68_FALSE, &QUEAELA),(A68_FALSE, &QUEAELA,(LUEAELA_generator).nonlocals));
RUEAELA = (&(Read_buffer->Buffer)) ;
(*RUEAELA) = QUEAELA;
 /* line 637: */
 /* line 638: */
SUEAELA.fn.fn_global = GNBAELA_keepsake_msg;
SUEAELA.nonlocals = A68_NIL;
IOBAELA_get_block((*(*(&(Df->File)))), (*(&(Read_buffer->Buffer))), Block_num, SUEAELA);
 /* line 639: */
TUEAELA = (*(&(Df->Read_transfers))) ;
(*TUEAELA)+=1;
 /* line 640: */
VTEAELA_result = A68_TRUE;
 /* line 641: */
UUEAELA = (*(&(Read_buffer->Buffer))) ;
WUEAELA = A_VTRIM(VUEAELA,(UUEAELA),A_VTSCRIPT(&(VUEAELA.upb),(UUEAELA).upb,1,SNBAELA_block_size)) ;
A_VASSIGN2(WUEAELA,Block_buffer,A68_CHAR );
 /* line 642: */
(*XTEAELA_lwb) = Block_num;
 /* line 643: */
 /* line 644: */
(*YTEAELA_upb) = ((Block_num+JUEAELA_buffer_size)-1);
} 
} 
} 
 /* line 645: */
 /* line 646: */
XUEAELA = VTEAELA_result;
} 
A_PROC_EXIT(read_block);
return( XUEAELA );
} 
#undef NL

A_STATIC A68_BOOL  ZUEAELA_is_file_writeable(A68_100 * Df)
{ 
A68_BOOL  AVEAELA;  /* optbool result */
A68_BOOL  BVEAELA;  /* clause result */
A_PROC_ENTRY(is_file_writeable);
 /* line 649: */
AVEAELA = (Df!=QUDAELA_nilfile);
if ( AVEAELA )
{AVEAELA = (*(*(&(Df->Writeable))));
}
BVEAELA = AVEAELA;
A_PROC_EXIT(is_file_writeable);
return( BVEAELA );
} 
#undef NL

A_STATIC A68_VOID  EVEAELA_check_file_writeable(A68_109 * Db, A68_100 * Df)
{ 
A68_VC  JVEAELA;  /* avoid structure result */
A68_VC  KVEAELA;  /* avoid structure result */
A_PROC_ENTRY(check_file_writeable);
 /* line 652: */
 /* line 653: */
if ( !ZUEAELA_is_file_writeable(Df) )
{ 
PFEAELA_( IVEAELA, (*(&(Db->Db_name))), &JVEAELA );
PFEAELA_( JVEAELA, HVEAELA, &KVEAELA );
QNBAELA_keepsake_fault(KVEAELA);
} 
A_PROC_EXIT(check_file_writeable);
return;
} 
#undef NL
 /* line 656: */
 /* line 657: */

A_STATIC A68_VOID  SVEAELA_read(A68_109 * Db, A68_100 * Df, A68_214  Data, A68_101  Dps, A68_54  Wanted, A68_INT  Code, A68_97  Dp)
{ 
A68_99  TVEAELA;  /* avoid structure result */
A68_99  UVEAELA_addr;
A68_INT  VVEAELA_char_ptr;
A68_INT  WVEAELA_b_num;
A68_INT  XVEAELA_num_dps;
A68_INT  YVEAELA_read_buffer_size;
A68_INT  ZVEAELA_num_chars;
A68_INT  AWEAELA_ptr_code;
A68_98  BWEAELA;  /* avoid structure result */
A68_98  CWEAELA_ind;
A68_214  DWEAELA;  /* united object - for case conformity */
A68_VC  EWEAELA_c;
A68_INT  FWEAELA;  /* clause result */
A68_32  GWEAELA_i;
A68_INT  HWEAELA_n_data;
A68_INT  IWEAELA_n_ints;
A68_VC  KWEAELA;  /* avoid structure result */
A68_VC  MWEAELA;  /* avoid structure result */
A68_VC  NWEAELA;  /* avoid structure result */
A68_VC  OWEAELA;  /* avoid structure result */
A68_INT  TWEAELA_data_ptr;
A68_INT  UWEAELA_dps_ptr;
A68_INT  VWEAELA_int_ptr;
A68_INT  WWEAELA_int_index;
A68_31  YWEAELA_generator;   /* proc value of non-global proc */
A68_VC  EXEAELA;  /* avoid structure result */
A68_VC  DXEAELA_current_int;
A68_BOOL  FXEAELA;  /* optbool result */
A68_110  HXEAELA;  /* avoid structure result */
A68_110  GXEAELA_read_buffer;
A68_31  JXEAELA_generator;   /* proc value of non-global proc */
A68_VC  PXEAELA;  /* avoid structure result */
A68_VC  OXEAELA_charbuf;
A68_BOOL * QXEAELA;  /* YIELD */
A68_INT  RXEAELA_data_code;
A68_INT  SXEAELA_block_discptrs;
A68_INT  TXEAELA_block_chars;
A68_INT  UXEAELA_lwb;
A68_VC  VXEAELA;  /* OPERATORS - trim index */
A68_VC  WXEAELA_data_heading;
A68_VC  XXEAELA;  /* OPERATORS - trim index */
A68_VC  YXEAELA_block_heading;
A68_BOOL  ZXEAELA;  /* optbool result */
A68_VC  DYEAELA;  /* avoid structure result */
A68_VC  FYEAELA;  /* avoid structure result */
A68_VC  GYEAELA;  /* avoid structure result */
A68_VC  HYEAELA;  /* avoid structure result */
A68_INT  IYEAELA_i;
A68_BOOL * JYEAELA;  /* YIELD */
A68_VC  KYEAELA;  /* OPERATORS - trim index */
A68_VC  LYEAELA_block_heading;
A68_BOOL  MYEAELA;  /* optbool result */
A68_VC  QYEAELA;  /* avoid structure result */
A68_VC  SYEAELA;  /* avoid structure result */
A68_VC  TYEAELA;  /* avoid structure result */
A68_VC  UYEAELA;  /* avoid structure result */
A68_INT  VYEAELA_j;
A68_INT  WYEAELA;  /* to part of loop */
A68_INT  XYEAELA_lwb;
A68_INT  YYEAELA;  /* YIELD */
A68_VC  ZYEAELA;  /* OPERATORS - trim index */
A68_97  AZEAELA;  /* avoid structure result */
A68_97 * BZEAELA;  /* YIELD */
A68_214  CZEAELA;  /* united object - for case conformity */
A68_VC  DZEAELA_chars;
A68_INT  EZEAELA_j;
A68_INT  FZEAELA;  /* to part of loop */
A68_INT  GZEAELA;  /* by part of loop */
A68_INT  HZEAELA;  /* YIELD */
A68_CHAR * IZEAELA;  /* YIELD */
A68_32  JZEAELA_ints;
A68_INT  KZEAELA_j;
A68_INT  LZEAELA;  /* to part of loop */
A68_INT  MZEAELA;  /* YIELD */
A68_INT  NZEAELA;  /* YIELD */
A68_CHAR * OZEAELA;  /* YIELD */
A68_INT  PZEAELA;  /* YIELD */
A68_INT * QZEAELA;  /* YIELD */
A68_BOOL  RZEAELA;  /* optbool result */
A68_BOOL  SZEAELA;  /* clause result */
A_PROC_ENTRY(read);
 /* line 666: */
{ 
TEEAELA_check_valid_db(Db);
 /* line 667: */
PEEAELA_check_nilfile(Df);
 /* line 668: */
QGEAELA_check_nilptr(Df, Dp);
 /* line 669: */
YEEAELA_check_forgery_use(Db, Dp);
 /* line 670: */
IHEAELA_get_disc_address( Df, Dp, &TVEAELA );
UVEAELA_addr = TVEAELA;
 /* line 671: */
VVEAELA_char_ptr = UVEAELA_addr.Offset;
 /* line 672: */
WVEAELA_b_num = UVEAELA_addr.Block_num;
 /* line 673: */
 /* line 674: */
 /* line 675: */
 /* line 676: */
 /* line 677: */
 /* line 678: */
if ( (PYBAELA_first_offset(Dp)==0) )
{ 
ZZDAELA_fetch_ind( Df, Dp, &BWEAELA );
CWEAELA_ind = BWEAELA;
 /* line 679: */
ZVEAELA_num_chars = CWEAELA_ind.Data_elts;
 /* line 680: */
XVEAELA_num_dps = CWEAELA_ind.Dp_elts;
 /* line 681: */
YVEAELA_read_buffer_size = CWEAELA_ind.Read_size;
 /* line 682: */
 /* line 683: */
AWEAELA_ptr_code = CWEAELA_ind.Code;
} 
else
{ 
ZVEAELA_num_chars = SYBAELA_data_elts(Dp);
 /* line 684: */
XVEAELA_num_dps = VYBAELA_dp_elts(Dp);
 /* line 685: */
YVEAELA_read_buffer_size = BZBAELA_read_size(Dp);
 /* line 686: */
 /* line 687: */
AWEAELA_ptr_code = DYBAELA_discptr_code(Dp);
} 
 /* line 688: */
 /* line 689: */
DWEAELA = Data ;
switch ( DWEAELA.mode )
{ 
case 1: /* REF VECTOR [] CHAR */
EWEAELA_c = (DWEAELA.data.mode1);
FWEAELA = EWEAELA_c.upb;
break;
case 2: /* REF VECTOR [] INT */
GWEAELA_i = (DWEAELA.data.mode2);
FWEAELA = (EDAAOST_int_size*GWEAELA_i.upb);
break;
default: 
A_IMP_SKIP ;
break;
} 
HWEAELA_n_data = FWEAELA;
 /* line 690: */
IWEAELA_n_ints = (HWEAELA_n_data/EDAAOST_int_size);
 /* line 691: */
if ( (AWEAELA_ptr_code!=Code) )
{ 
 /* line 692: */
GXDAELA_type_name( AWEAELA_ptr_code, &KWEAELA );
GXDAELA_type_name( Code, &MWEAELA );
PFEAELA_( MWEAELA, LWEAELA, &NWEAELA );
PFEAELA_( NWEAELA, KWEAELA, &OWEAELA );
QNBAELA_keepsake_fault(OWEAELA);
} 
 /* line 693: */
 /* line 694: */
if ( (HWEAELA_n_data!=ZVEAELA_num_chars) )
{ 
QNBAELA_keepsake_fault(QWEAELA);
} 
 /* line 695: */
 /* line 696: */
if ( (Dps.upb!=XVEAELA_num_dps) )
{ 
QNBAELA_keepsake_fault(SWEAELA);
} 
 /* line 698: */
TWEAELA_data_ptr = HWEAELA_n_data;
 /* line 699: */
UWEAELA_dps_ptr = Dps.upb;
 /* line 700: */
VWEAELA_int_ptr = (IWEAELA_n_ints+1);
 /* line 701: */
WWEAELA_int_index = (EDAAOST_int_size+1);
 /* line 702: */
A_CLOSURE( YWEAELA_generator, ZWEAELA_generator, AXEAELA_generator );
A_CALLPROC(YWEAELA_generator,(A68_TRUE, &EXEAELA),(A68_TRUE, &EXEAELA,(YWEAELA_generator).nonlocals));
DXEAELA_current_int = EXEAELA;
 /* line 704: */
FXEAELA = (TWEAELA_data_ptr!=0);
if ( ! FXEAELA )
{ /* line 705: */
FXEAELA = (UWEAELA_dps_ptr!=0);
}
if ( FXEAELA )
{ 
OSEAELA_setup_readbuffer(  &HXEAELA );
GXEAELA_read_buffer = HXEAELA;
 /* line 706: */
A_CLOSURE( JXEAELA_generator, KXEAELA_generator, LXEAELA_generator );
A_CALLPROC(JXEAELA_generator,(A68_TRUE, &PXEAELA),(A68_TRUE, &PXEAELA,(JXEAELA_generator).nonlocals));
OXEAELA_charbuf = PXEAELA;
 /* line 707: */
UTEAELA_read_block(Db, Df, (&GXEAELA_read_buffer), OXEAELA_charbuf, YVEAELA_read_buffer_size, WVEAELA_b_num);
 /* line 708: */
if ( (Wanted.upb!=0) )
{ 
QXEAELA = (&A_VINDEX(Wanted,WVEAELA_b_num)) ;
(*QXEAELA) = A68_TRUE;
} 
 /* line 710: */
 /* line 711: */
 /* line 712: */
 /* line 714: */
 /* line 715: */
if ( (VVEAELA_char_ptr!=SNBAELA_block_size) )
{ 
UXEAELA_lwb = (VVEAELA_char_ptr-=(CGCAELA_data_heading_size-1));
 /* line 716: */
 /* line 717: */
WXEAELA_data_heading = A_VTRIM(VXEAELA,(OXEAELA_charbuf),A_VTSCRIPT(&(VXEAELA.upb),(OXEAELA_charbuf).upb,UXEAELA_lwb,((VVEAELA_char_ptr+CGCAELA_data_heading_size)-1)));
 /* line 718: */
RXEAELA_data_code = MHCAELA_dh_code(WXEAELA_data_heading);
 /* line 719: */
SXEAELA_block_discptrs = CICAELA_dps_in_block(WXEAELA_data_heading);
 /* line 720: */
 /* line 721: */
TXEAELA_block_chars = UHCAELA_data_in_block(WXEAELA_data_heading);
} 
else
{ 
 /* line 722: */
YXEAELA_block_heading = A_VTRIM(XXEAELA,(OXEAELA_charbuf),A_VTSCRIPT(&(XXEAELA.upb),(OXEAELA_charbuf).upb,(RICAELA_actual_block_size+1),(RICAELA_actual_block_size+CCCAELA_block_heading_size)));
 /* line 723: */
RXEAELA_data_code = ZDCAELA_block_code(YXEAELA_block_heading);
 /* line 724: */
YVEAELA_read_buffer_size = NFCAELA_bh_read_size(YXEAELA_block_heading);
 /* line 725: */
VVEAELA_char_ptr = FFCAELA_data_start(YXEAELA_block_heading);
 /* line 726: */
SXEAELA_block_discptrs = XECAELA_block_dps(YXEAELA_block_heading);
 /* line 727: */
 /* line 728: */
TXEAELA_block_chars = PECAELA_block_data(YXEAELA_block_heading);
} 
 /* line 729: */
ZXEAELA = (RXEAELA_data_code>=EXDAELA_forgery);
if ( ! ZXEAELA )
{ /* line 730: */
ZXEAELA = (RXEAELA_data_code==0);
}
if ( ZXEAELA )
{ 
NKDAOST_sysfault(BYEAELA);
} 
 /* line 731: */
 /* line 732: */
if ( (RXEAELA_data_code!=Code) )
{ 
 /* line 733: */
GXDAELA_type_name( RXEAELA_data_code, &DYEAELA );
GXDAELA_type_name( Code, &FYEAELA );
PFEAELA_( FYEAELA, EYEAELA, &GYEAELA );
PFEAELA_( GYEAELA, DYEAELA, &HYEAELA );
QNBAELA_keepsake_fault(HYEAELA);
} 
 /* line 735: */
for ( IYEAELA_i = 1;;
IYEAELA_i += 1 ) 
{ 
 /* line 736: */
 /* line 737: */
UTEAELA_read_block(Db, Df, (&GXEAELA_read_buffer), OXEAELA_charbuf, YVEAELA_read_buffer_size, WVEAELA_b_num);
 /* line 738: */
if ( (Wanted.upb!=0) )
{ 
JYEAELA = (&A_VINDEX(Wanted,WVEAELA_b_num)) ;
(*JYEAELA) = A68_TRUE;
} 
 /* line 739: */
 /* line 740: */
 /* line 741: */
LYEAELA_block_heading = A_VTRIM(KYEAELA,(OXEAELA_charbuf),A_VTSCRIPT(&(KYEAELA.upb),(OXEAELA_charbuf).upb,(RICAELA_actual_block_size+1),(RICAELA_actual_block_size+CCCAELA_block_heading_size)));
 /* line 742: */
 /* line 743: */
if ( (IYEAELA_i>1) )
{ 
RXEAELA_data_code = ZDCAELA_block_code(LYEAELA_block_heading);
 /* line 744: */
MYEAELA = (RXEAELA_data_code>=EXDAELA_forgery);
if ( ! MYEAELA )
{ /* line 745: */
MYEAELA = (RXEAELA_data_code==0);
}
if ( MYEAELA )
{ 
NKDAOST_sysfault(OYEAELA);
} 
 /* line 746: */
if ( (RXEAELA_data_code!=Code) )
{ 
 /* line 747: */
GXDAELA_type_name( RXEAELA_data_code, &QYEAELA );
GXDAELA_type_name( Code, &SYEAELA );
PFEAELA_( SYEAELA, RYEAELA, &TYEAELA );
PFEAELA_( TYEAELA, QYEAELA, &UYEAELA );
QNBAELA_keepsake_fault(UYEAELA);
} 
 /* line 748: */
YVEAELA_read_buffer_size = NFCAELA_bh_read_size(LYEAELA_block_heading);
 /* line 749: */
VVEAELA_char_ptr = FFCAELA_data_start(LYEAELA_block_heading);
 /* line 750: */
SXEAELA_block_discptrs = XECAELA_block_dps(LYEAELA_block_heading);
 /* line 751: */
 /* line 752: */
TXEAELA_block_chars = PECAELA_block_data(LYEAELA_block_heading);
} 
 /* line 753: */
 /* line 754: */
WYEAELA = SXEAELA_block_discptrs;
for ( VYEAELA_j = 1;
VYEAELA_j <= WYEAELA;
VYEAELA_j += 1 )
{ 
XYEAELA_lwb = (VVEAELA_char_ptr-=TSBAELA_discptr_size);
 /* line 755: */
 /* line 756: */
 /* line 757: */
YYEAELA = ((UWEAELA_dps_ptr-VYEAELA_j)+1) ;
IUBAELA_chars_to_dp( A_VTRIM(ZYEAELA,(OXEAELA_charbuf),A_VTSCRIPT(&(ZYEAELA.upb),(OXEAELA_charbuf).upb,XYEAELA_lwb,((VVEAELA_char_ptr+TSBAELA_discptr_size)-1))), &AZEAELA );
BZEAELA = (&A_VINDEX(Dps,YYEAELA)) ;
(*BZEAELA) = AZEAELA;
}
 /* line 758: */
 /* line 759: */
CZEAELA = Data ;
switch ( CZEAELA.mode )
{ 
case 1: /* REF VECTOR [] CHAR */
DZEAELA_chars = (CZEAELA.data.mode1);
 /* line 760: */
 /* line 761: */
FZEAELA = ((TWEAELA_data_ptr-TXEAELA_block_chars)+1);
GZEAELA = (-1);
for ( EZEAELA_j = TWEAELA_data_ptr;
( GZEAELA > 0 && EZEAELA_j <= FZEAELA) ||
( GZEAELA < 0 && EZEAELA_j >= FZEAELA) ||
( GZEAELA == 0 ) ;
EZEAELA_j += GZEAELA )
{ 
 /* line 762: */
HZEAELA = VVEAELA_char_ptr-=1 ;
IZEAELA = (&A_VINDEX(DZEAELA_chars,EZEAELA_j)) ;
(*IZEAELA) = (*(&A_VINDEX(OXEAELA_charbuf,HZEAELA)));
}
 /* line 763: */
break;
case 2: /* REF VECTOR [] INT */
JZEAELA_ints = (CZEAELA.data.mode2);
 /* line 764: */
 /* line 765: */
LZEAELA = TXEAELA_block_chars;
for ( KZEAELA_j = 1;
KZEAELA_j <= LZEAELA;
KZEAELA_j += 1 )
{ 
 /* line 766: */
MZEAELA = WWEAELA_int_index-=1 ;
NZEAELA = VVEAELA_char_ptr-=1 ;
OZEAELA = (&A_VINDEX(DXEAELA_current_int,MZEAELA)) ;
(*OZEAELA) = (*(&A_VINDEX(OXEAELA_charbuf,NZEAELA)));
 /* line 767: */
 /* line 768: */
if ( (WWEAELA_int_index==1) )
{ 
PZEAELA = VWEAELA_int_ptr-=1 ;
QZEAELA = (&A_VINDEX(JZEAELA_ints,PZEAELA)) ;
(*QZEAELA) = IRBAELA_vctoi(DXEAELA_current_int);
 /* line 769: */
 /* line 770: */
 /* line 771: */
WWEAELA_int_index = (EDAAOST_int_size+1);
} 
}
 /* line 772: */
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 773: */
VVEAELA_char_ptr = SNBAELA_block_size;
 /* line 774: */
TWEAELA_data_ptr-=TXEAELA_block_chars;
 /* line 775: */
UWEAELA_dps_ptr-=SXEAELA_block_discptrs;
 /* line 776: */
RZEAELA = (TWEAELA_data_ptr!=0);
if ( ! RZEAELA )
{ /* line 777: */
RZEAELA = (UWEAELA_dps_ptr!=0);
}
SZEAELA = RZEAELA;
if ( !SZEAELA ) break;
 /* line 778: */
WVEAELA_b_num = HECAELA_next_block(LYEAELA_block_heading);
}
 /* line 779: */
 /* line 780: */
} 
} 
A_PROC_EXIT(read);
return;
} 
#undef NL

A68_VOID  WZEAELA_read_ints(A68_109 * Db, A68_32  Data, A68_97  Dp)
{ 
A68_214  XZEAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(read_ints);
 /* line 783: */
SVEAELA_read(Db, (*(&(Db->Df))), A_UNITE(XZEAELA,mode2,2,Data), PVDAELA_nodps, BWDAELA_nowanted, XWDAELA_ints, Dp);
A_PROC_EXIT(read_ints);
return;
} 
#undef NL
 /* line 786: */

A68_VOID  CAFAELA_read_freelist(A68_109 * Db, A68_100 * Df, A68_32  Data, A68_97  Dp)
{ 
A68_214  DAFAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(read_freelist);
 /* line 787: */
SVEAELA_read(Db, Df, A_UNITE(DAFAELA,mode2,2,Data), PVDAELA_nodps, BWDAELA_nowanted, CXDAELA_freelist_ints, Dp);
A_PROC_EXIT(read_freelist);
return;
} 
#undef NL
 /* line 790: */

A68_VOID  IAFAELA_read_pagetable(A68_109 * Db, A68_100 * Df, A68_32  Data, A68_97  Dp)
{ 
A68_214  JAFAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(read_pagetable);
 /* line 791: */
SVEAELA_read(Db, Df, A_UNITE(JAFAELA,mode2,2,Data), PVDAELA_nodps, BWDAELA_nowanted, DXDAELA_pagetable_ints, Dp);
A_PROC_EXIT(read_pagetable);
return;
} 
#undef NL

A68_VOID  NAFAELA_read_chars(A68_109 * Db, A68_VC  Data, A68_97  Dp)
{ 
A68_214  OAFAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(read_chars);
 /* line 795: */
SVEAELA_read(Db, (*(&(Db->Df))), A_UNITE(OAFAELA,mode1,1,Data), PVDAELA_nodps, BWDAELA_nowanted, YWDAELA_chars, Dp);
A_PROC_EXIT(read_chars);
return;
} 
#undef NL
 /* line 798: */

A68_VOID  TAFAELA_read_chars_dps(A68_109 * Db, A68_VC  Data, A68_101  Dps, A68_97  Dp)
{ 
A68_214  UAFAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(read_chars_dps);
 /* line 799: */
SVEAELA_read(Db, (*(&(Db->Df))), A_UNITE(UAFAELA,mode1,1,Data), Dps, BWDAELA_nowanted, WWDAELA_charsdps, Dp);
A_PROC_EXIT(read_chars_dps);
return;
} 
#undef NL
 /* line 802: */
 /* line 803: */

A_STATIC A68_VOID  BBFAELA_read_vax_blocks(A68_109 * Db, A68_100 * Df, A68_INT  Block, A68_VC  Data, A68_54  Wanted, A68_97  Dp)
{ 
A68_99  CBFAELA;  /* avoid structure result */
A68_99  DBFAELA_addr;
A68_INT  EBFAELA_b_num;
A68_INT  FBFAELA_code;
A68_INT  GBFAELA_elts;
A68_98  HBFAELA;  /* avoid structure result */
A68_98  IBFAELA_ind;
A68_INT  JBFAELA_ow_blocks;
A68_INT  KBFAELA_upb;
A68_INT  LBFAELA_bufptr;
A68_INT  OBFAELA_buffer_needed;
A68_INT  RBFAELA_i;
A68_INT  SBFAELA_block_elts;
A68_INT  TBFAELA_lwb;
A68_VC  UBFAELA;  /* OPERATORS - trim index */
A68_92  VBFAELA;  /* procedure value */
A68_BOOL * WBFAELA;  /* YIELD */
A68_INT * XBFAELA;  /* YIELD */
A68_BOOL  YBFAELA;  /* clause result */
A_PROC_ENTRY(read_vax_blocks);
 /* line 804: */
{ 
TEEAELA_check_valid_db(Db);
 /* line 805: */
PEEAELA_check_nilfile(Df);
 /* line 806: */
QGEAELA_check_nilptr(Df, Dp);
 /* line 807: */
YEEAELA_check_forgery_use(Db, Dp);
 /* line 808: */
IHEAELA_get_disc_address( Df, Dp, &CBFAELA );
DBFAELA_addr = CBFAELA;
 /* line 809: */
EBFAELA_b_num = DBFAELA_addr.Block_num;
 /* line 810: */
 /* line 811: */
 /* line 812: */
 /* line 813: */
if ( (PYBAELA_first_offset(Dp)==0) )
{ 
ZZDAELA_fetch_ind( Df, Dp, &HBFAELA );
IBFAELA_ind = HBFAELA;
 /* line 814: */
FBFAELA_code = IBFAELA_ind.Code;
 /* line 815: */
 /* line 816: */
GBFAELA_elts = IBFAELA_ind.Data_elts;
} 
else
{ 
FBFAELA_code = DYBAELA_discptr_code(Dp);
 /* line 817: */
 /* line 818: */
GBFAELA_elts = SYBAELA_data_elts(Dp);
} 
 /* line 819: */
JBFAELA_ow_blocks = (GBFAELA_elts/SNBAELA_block_size);
 /* line 820: */
KBFAELA_upb = Data.upb;
 /* line 821: */
LBFAELA_bufptr = 0;
 /* line 822: */
if ( (FBFAELA_code!=AXDAELA_overwriteable) )
{ 
 /* line 823: */
QNBAELA_keepsake_fault(NBFAELA);
} 
 /* line 824: */
OBFAELA_buffer_needed = (GBFAELA_elts-((Block-1)*SNBAELA_block_size));
 /* line 825: */
if ( (KBFAELA_upb<OBFAELA_buffer_needed) )
{ 
QNBAELA_keepsake_fault(QBFAELA);
} 
 /* line 826: */
 /* line 827: */
if ( (KBFAELA_upb!=0) )
{ 
for ( RBFAELA_i = 1;;
RBFAELA_i += 1 ) 
{ 
 /* line 828: */
SBFAELA_block_elts = IYDAELA_min((KBFAELA_upb-LBFAELA_bufptr), (VNBAELA_max_buffer_size*SNBAELA_block_size));
 /* line 829: */
TBFAELA_lwb = (LBFAELA_bufptr+1);
 /* line 830: */
 /* line 831: */
VBFAELA.fn.fn_global = GNBAELA_keepsake_msg;
VBFAELA.nonlocals = A68_NIL;
IOBAELA_get_block((*(*(&(Df->File)))), A_VTRIM(UBFAELA,(Data),A_VTSCRIPT(&(UBFAELA.upb),(Data).upb,TBFAELA_lwb,(LBFAELA_bufptr+=SBFAELA_block_elts))), EBFAELA_b_num, VBFAELA);
 /* line 832: */
if ( (Wanted.upb!=0) )
{ 
WBFAELA = (&A_VINDEX(Wanted,EBFAELA_b_num)) ;
(*WBFAELA) = A68_TRUE;
} 
 /* line 833: */
XBFAELA = (*(&(Df->Read_transfers))) ;
(*XBFAELA)+=1;
 /* line 834: */
 /* line 835: */
 /* line 836: */
YBFAELA = (LBFAELA_bufptr!=KBFAELA_upb);
if ( !YBFAELA ) break;
/*SKIP*/;
}
 /* line 837: */
 /* line 838: */
} 
} 
A_PROC_EXIT(read_vax_blocks);
return;
} 
#undef NL
 /* line 841: */

A68_VOID  DCFAELA_read_overwriteable(A68_109 * Db, A68_INT  Block, A68_VC  Data, A68_97  Dp)
{ 
A_PROC_ENTRY(read_overwriteable);
 /* line 842: */
BBFAELA_read_vax_blocks(Db, (*(&(Db->Df))), Block, Data, BWDAELA_nowanted, Dp);
A_PROC_EXIT(read_overwriteable);
return;
} 
#undef NL
 /* line 845: */

A_STATIC A68_VOID  HCFAELA_read_indirections(A68_109 * Db, A68_106  Indirections, A68_97  Dp)
{ 
A68_31  JCFAELA_generator;   /* proc value of non-global proc */
A68_VC  PCFAELA;  /* avoid structure result */
A68_VC  OCFAELA_data;
A68_214  QCFAELA;  /* OPERATORS - mode -> union mode */
A68_INT  RCFAELA_i;
A68_INT  SCFAELA;  /* to part of loop */
A68_VC  TCFAELA;  /* OPERATORS - trim index */
A68_98  UCFAELA;  /* avoid structure result */
A68_98 * VCFAELA;  /* YIELD */
A_PROC_ENTRY(read_indirections);
 /* line 846: */
{ 
A_CLOSURE( JCFAELA_generator, KCFAELA_generator, LCFAELA_generator );
(( LCFAELA_generator * ) ( JCFAELA_generator.nonlocals )) -> Indirections = Indirections;
A_CALLPROC(JCFAELA_generator,(A68_TRUE, &PCFAELA),(A68_TRUE, &PCFAELA,(JCFAELA_generator).nonlocals));
OCFAELA_data = PCFAELA;
 /* line 847: */
SVEAELA_read(Db, (*(&(Db->Df))), A_UNITE(QCFAELA,mode1,1,OCFAELA_data), PVDAELA_nodps, BWDAELA_nowanted, BXDAELA_indirs, Dp);
 /* line 848: */
 /* line 849: */
SCFAELA = Indirections.upb;
for ( RCFAELA_i = 1;
RCFAELA_i <= SCFAELA;
RCFAELA_i += 1 )
{ 
 /* line 850: */
 /* line 851: */
CBCAELA_make_indirection( A_VTRIM(TCFAELA,(OCFAELA_data),A_VTSCRIPT(&(TCFAELA.upb),(OCFAELA_data).upb,(((RCFAELA_i-1)*ABCAELA_indirection_size)+1),(RCFAELA_i*ABCAELA_indirection_size))), &UCFAELA );
VCFAELA = (&A_VINDEX(Indirections,RCFAELA_i)) ;
(*VCFAELA) = UCFAELA;
}
 /* line 852: */
} 
A_PROC_EXIT(read_indirections);
return;
} 
#undef NL
 /* line 855: */

A68_VOID  ZCFAELA_read_discptrs(A68_109 * Db, A68_101  Data, A68_97  Dp)
{ 
A68_214  ADFAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(read_discptrs);
 /* line 856: */
SVEAELA_read(Db, (*(&(Db->Df))), A_UNITE(ADFAELA,mode1,1,JVDAELA_nodata), Data, BWDAELA_nowanted, ZWDAELA_discptrs, Dp);
A_PROC_EXIT(read_discptrs);
return;
} 
#undef NL

A68_INT  DDFAELA_hash_val(A68_109 * Db, A68_97  Dp)
{ 
A68_100 * EDFAELA_df;
A68_INT  FDFAELA;  /* clause result */
A68_99  GDFAELA;  /* avoid structure result */
A_PROC_ENTRY(hash_val);
 /* line 859: */
{ 
TEEAELA_check_valid_db(Db);
 /* line 860: */
EDFAELA_df = (*(&(Db->Df)));
 /* line 861: */
PEEAELA_check_nilfile(EDFAELA_df);
 /* line 862: */
YEEAELA_check_forgery_use(Db, Dp);
 /* line 863: */
DHEAELA_check_gc_nil(EDFAELA_df, Dp);
 /* line 864: */
if ( KGEAELA_is_nilptr(EDFAELA_df, Dp) )
{ 
FDFAELA = 0;
} 
else
{ 
 /* line 865: */
IHEAELA_get_disc_address( EDFAELA_df, Dp, &GDFAELA );
FDFAELA = RYDAELA_address_rep(GDFAELA);
} 
} 
A_PROC_EXIT(hash_val);
return( FDFAELA );
} 
#undef NL

A_STATIC A68_INT  JDFAELA_get_free_block(A68_109 * Db, A68_100 * Df)
{ 
A68_INT * KDFAELA_current_free;
A68_INT * LDFAELA_last_free;
A68_INT * MDFAELA_size_of_free_space;
A68_INT * NDFAELA_freelist_index;
A68_INT * ODFAELA_freelist_ext_ptr;
A68_INT * PDFAELA_initial_free_block_dps;
A68_INT * QDFAELA_freeblock_ptr;
A68_101  RDFAELA_free_block_dps;
A68_INT  SDFAELA_upb_ext;
A68_INT  TDFAELA_new_size;
A68_33  VDFAELA_generator;   /* proc value of non-global proc */
A68_32  AEFAELA;  /* avoid structure result */
A68_32  BEFAELA;  /* OPERATORS - trim index */
A68_32  CEFAELA;  /* OPERATORS - trim index */
A68_32  DEFAELA;  /* OPERATORS - assign op */
A68_32 * EEFAELA;  /* YIELD */
A68_INT  HEFAELA;  /* YIELD */
A68_97  IEFAELA_next_ptr;
A68_33  KEFAELA_generator;   /* proc value of non-global proc */
A68_32  PEFAELA;  /* avoid structure result */
A68_32 * QEFAELA;  /* YIELD */
A68_214  REFAELA;  /* OPERATORS - mode -> union mode */
A68_32  SEFAELA;  /* YIELD */
A68_INT * TEFAELA;  /* YIELD */
A68_INT  UEFAELA;  /* clause result */
A68_32  VEFAELA;  /* OPERATORS - simple index */
A_PROC_ENTRY(get_free_block);
 /* line 874: */
{ 
KDFAELA_current_free = (*(&(Df->Current_free)));
 /* line 875: */
LDFAELA_last_free = (*(&(Df->Last_free)));
 /* line 876: */
MDFAELA_size_of_free_space = (*(&(Df->Size_of_free_space)));
 /* line 877: */
NDFAELA_freelist_index = (*(&(Df->Freelist_index)));
 /* line 878: */
ODFAELA_freelist_ext_ptr = (*(&(Df->Freelist_ext_ptr)));
 /* line 879: */
PDFAELA_initial_free_block_dps = (*(&(Df->Initial_free_block_dps)));
 /* line 880: */
QDFAELA_freeblock_ptr = (*(&(Df->Freeblock_ptr)));
 /* line 881: */
RDFAELA_free_block_dps = (*(&(Df->Free_block_dps)));
 /* line 882: */
 /* line 883: */
if ( (((*NDFAELA_freelist_index)+=1)>(*(&(Df->Freelist))).upb) )
{ 
 /* line 884: */
if ( ((*QDFAELA_freeblock_ptr)==(*PDFAELA_initial_free_block_dps)) )
{ 
SDFAELA_upb_ext = (*(&(Df->Freelist_ext))).upb;
 /* line 885: */
TDFAELA_new_size = (SDFAELA_upb_ext-(*ODFAELA_freelist_ext_ptr));
 /* line 886: */
 /* line 887: */
if ( (TDFAELA_new_size>0) )
{ 
A_CLOSURE( VDFAELA_generator, WDFAELA_generator, XDFAELA_generator );
(( XDFAELA_generator * ) ( VDFAELA_generator.nonlocals )) -> TDFAELA_new_size = TDFAELA_new_size;
A_CALLPROC(VDFAELA_generator,(A68_FALSE, &AEFAELA),(A68_FALSE, &AEFAELA,(VDFAELA_generator).nonlocals));
BEFAELA = (*(&(Df->Freelist_ext))) ;
DEFAELA = A_VTRIM(CEFAELA,(BEFAELA),A_VTSCRIPT(&(CEFAELA.upb),(BEFAELA).upb,((*ODFAELA_freelist_ext_ptr)+1),SDFAELA_upb_ext)) ;
A_VASSIGN2(DEFAELA,AEFAELA,A68_INT ) ;
EEFAELA = (&(Df->Freelist)) ;
(*EEFAELA) = AEFAELA;
 /* line 889: */
 /* line 890: */
(*ODFAELA_freelist_ext_ptr) = SDFAELA_upb_ext;
} 
else
{ 
 /* line 891: */
 /* line 892: */
 /* line 893: */
QNBAELA_keepsake_fault(GEFAELA);
} 
} 
else
{ 
HEFAELA = (*QDFAELA_freeblock_ptr)+=1 ;
IEFAELA_next_ptr = (*(&A_VINDEX(RDFAELA_free_block_dps,HEFAELA)));
 /* line 894: */
A_CLOSURE( KEFAELA_generator, LEFAELA_generator, MEFAELA_generator );
(( MEFAELA_generator * ) ( KEFAELA_generator.nonlocals )) -> Db = Db;
(( MEFAELA_generator * ) ( KEFAELA_generator.nonlocals )) -> Df = Df;
(( MEFAELA_generator * ) ( KEFAELA_generator.nonlocals )) -> IEFAELA_next_ptr = IEFAELA_next_ptr;
A_CALLPROC(KEFAELA_generator,(A68_FALSE, &PEFAELA),(A68_FALSE, &PEFAELA,(KEFAELA_generator).nonlocals));
QEFAELA = (&(Df->Freelist)) ;
(*QEFAELA) = PEFAELA;
 /* line 896: */
 /* line 897: */
 /* line 898: */
SEFAELA = (*(&(Df->Freelist))) ;
SVEAELA_read(Db, Df, A_UNITE(REFAELA,mode2,2,SEFAELA), PVDAELA_nodps, BWDAELA_nowanted, CXDAELA_freelist_ints, IEFAELA_next_ptr);
} 
 /* line 899: */
 /* line 900: */
(*NDFAELA_freelist_index) = 1;
} 
 /* line 901: */
TEFAELA = (*(&(Df->Size_of_free_space))) ;
(*TEFAELA)-=1;
 /* line 902: */
(*LDFAELA_last_free) = (*KDFAELA_current_free);
 /* line 903: */
 /* line 904: */
VEFAELA = (*(&(Df->Freelist))) ;
UEFAELA = (*(&A_VINDEX(VEFAELA,(*NDFAELA_freelist_index))));
} 
A_PROC_EXIT(get_free_block);
return( UEFAELA );
} 
#undef NL

A_STATIC A68_VOID  XEFAELA_make_madam_name(A68_VC  Name, A68_VC  *ReturnedValue)
{ 
A68_31  ZEFAELA_generator;   /* proc value of non-global proc */
A68_VC  FFFAELA;  /* avoid structure result */
A68_VC  EFFAELA_madam_name;
A68_INT  GFFAELA_i;
A68_INT  HFFAELA;  /* to part of loop */
A68_INT  IFFAELA_abs;
A68_CHAR  JFFAELA;  /* clause result */
A68_BOOL  KFFAELA;  /* optbool result */
A68_CHAR * LFFAELA;  /* YIELD */
A68_VC  MFFAELA;  /* clause result */
A_PROC_ENTRY(make_madam_name);
 /* line 911: */
{ 
A_CLOSURE( ZEFAELA_generator, AFFAELA_generator, BFFAELA_generator );
(( BFFAELA_generator * ) ( ZEFAELA_generator.nonlocals )) -> Name = Name;
A_CALLPROC(ZEFAELA_generator,(A68_TRUE, &FFFAELA),(A68_TRUE, &FFFAELA,(ZEFAELA_generator).nonlocals));
EFFAELA_madam_name = FFFAELA;
 /* line 912: */
 /* line 913: */
HFFAELA = Name.upb;
for ( GFFAELA_i = 1;
GFFAELA_i <= HFFAELA;
GFFAELA_i += 1 )
{ 
IFFAELA_abs = (A68_INT)(unsigned char)A_VINDEX(Name,GFFAELA_i);
 /* line 914: */
 /* line 915: */
 /* line 916: */
if ( (A_VINDEX(Name,GFFAELA_i)=='.') )
{ 
JFFAELA = '_';
} 
else
{ 
 /* line 917: */
 /* line 918: */
if ( (A_VINDEX(Name,GFFAELA_i)=='/') )
{ 
JFFAELA = '-';
} 
else
{ 
KFFAELA = (IFFAELA_abs>=(A68_INT)(unsigned char)'a');
if ( KFFAELA )
{ /* line 919: */
KFFAELA = (IFFAELA_abs<=(A68_INT)(unsigned char)'z');
}
if ( KFFAELA )
{ 
 /* line 920: */
JFFAELA = (A68_CHAR)(IFFAELA_abs-=32);
} 
else
{ 
 /* line 921: */
 /* line 922: */
JFFAELA = A_VINDEX(Name,GFFAELA_i);
} 
} 
} 
LFFAELA = (&A_VINDEX(EFFAELA_madam_name,GFFAELA_i)) ;
(*LFFAELA) = JFFAELA;
}
 /* line 923: */
 /* line 924: */
MFFAELA = EFFAELA_madam_name;
} 
A_PROC_EXIT(make_madam_name);
*ReturnedValue = (MFFAELA);
return;
} 
#undef NL
 /* line 927: */

A_STATIC A68_VOID  QFFAELA_add_chars(A68_VC * Old, A68_VC  New, A68_INT * Index)
{ 
A68_INT  RFFAELA_new_upb;
A68_INT  SFFAELA_old_upb;
A68_VC  TFFAELA_temp;
A68_31  VFFAELA_generator;   /* proc value of non-global proc */
A68_VC  AGFAELA;  /* avoid structure result */
A68_VC  BGFAELA;  /* OPERATORS - trim index */
A68_VC  CGFAELA;  /* YIELD */
A68_INT  DGFAELA_lwb;
A68_VC  EGFAELA;  /* OPERATORS - trim index */
A68_VC  FGFAELA;  /* YIELD */
A_PROC_ENTRY(add_chars);
 /* line 928: */
{ 
RFFAELA_new_upb = New.upb;
 /* line 929: */
SFFAELA_old_upb = (*Old).upb;
 /* line 930: */
 /* line 931: */
if ( (((*Index)+RFFAELA_new_upb)>SFFAELA_old_upb) )
{ 
TFFAELA_temp = (*Old);
 /* line 932: */
A_CLOSURE( VFFAELA_generator, WFFAELA_generator, XFFAELA_generator );
(( XFFAELA_generator * ) ( VFFAELA_generator.nonlocals )) -> SFFAELA_old_upb = SFFAELA_old_upb;
A_CALLPROC(VFFAELA_generator,(A68_FALSE, &AGFAELA),(A68_FALSE, &AGFAELA,(VFFAELA_generator).nonlocals));
(*Old) = AGFAELA;
 /* line 933: */
 /* line 934: */
CGFAELA = A_VTRIM(BGFAELA,((*Old)),A_VTSCRIPT(&(BGFAELA.upb),((*Old)).upb,1,SFFAELA_old_upb)) ;
A_VASSIGN2(TFFAELA_temp,CGFAELA,A68_CHAR );
} 
 /* line 935: */
DGFAELA_lwb = ((*Index)+1);
 /* line 936: */
 /* line 937: */
FGFAELA = A_VTRIM(EGFAELA,((*Old)),A_VTSCRIPT(&(EGFAELA.upb),((*Old)).upb,DGFAELA_lwb,((*Index)+=RFFAELA_new_upb))) ;
A_VASSIGN2(New,FGFAELA,A68_CHAR );
} 
A_PROC_EXIT(add_chars);
return;
} 
#undef NL
 /* line 940: */

A_STATIC A68_INT  KGFAELA_block_count(A68_INT  Data_size, A68_INT  Num_elts, A68_BOOL  Overwriteable, A68_INT * Cbufpos)
{ 
A68_INT  LGFAELA_elts_in_first_block;
A68_INT  MGFAELA_max_elts_in_block;
A68_INT  NGFAELA_rem_elts;
A68_INT  OGFAELA;  /* clause result */
A68_INT  PGFAELA_total;
A_PROC_ENTRY(block_count);
 /* line 941: */
 /* line 942: */
if ( !Overwriteable )
{ 
LGFAELA_elts_in_first_block = IYDAELA_min(((*Cbufpos)/Data_size), Num_elts);
 /* line 943: */
MGFAELA_max_elts_in_block = (RICAELA_actual_block_size/Data_size);
 /* line 944: */
NGFAELA_rem_elts = (Num_elts-LGFAELA_elts_in_first_block);
 /* line 945: */
 /* line 946: */
if ( (NGFAELA_rem_elts==0) )
{ 
(*Cbufpos)+=(Num_elts*Data_size);
 /* line 947: */
 /* line 948: */
OGFAELA = 1;
} 
else
{ 
PGFAELA_total = (((NGFAELA_rem_elts-1)/MGFAELA_max_elts_in_block)+1);
 /* line 949: */
 /* line 950: */
(*Cbufpos) = ((NGFAELA_rem_elts-((PGFAELA_total-1)*MGFAELA_max_elts_in_block))*Data_size);
 /* line 951: */
 /* line 952: */
 /* line 953: */
OGFAELA = (PGFAELA_total+1);
} 
} 
else
{ 
 /* line 954: */
OGFAELA = (Num_elts/SNBAELA_block_size);
} 
A_PROC_EXIT(block_count);
return( OGFAELA );
} 
#undef NL

A_STATIC A68_INT  TGFAELA_no_of_blocks(A68_109 * Db, A68_INT * Cbufpos, A68_111  Data)
{ 
A68_INT  UGFAELA_upper;
A68_INT  VGFAELA_data_size;
A68_INT  WGFAELA_result;
A68_111  YGFAELA;  /* united object - for case conformity */
A68_32  ZGFAELA_i;
A68_VC  AHFAELA_c;
A68_101  BHFAELA_d;
A68_INT  CHFAELA;  /* clause result */
A_PROC_ENTRY(no_of_blocks);
 /* line 963: */
 /* line 964: */
{ 
VGFAELA_data_size = 1;
 /* line 965: */
WGFAELA_result = 0;
 /* line 966: */
 /* line 967: */
 /* line 968: */
YGFAELA = Data ;
switch ( YGFAELA.mode )
{ 
case 1: /* VECTOR [] INT */
ZGFAELA_i = (YGFAELA.data.mode1);
 /* line 969: */
UGFAELA_upper = (EDAAOST_int_size*ZGFAELA_i.upb);
break;
case 2: /* VECTOR [] CHAR */
AHFAELA_c = (YGFAELA.data.mode2);
 /* line 970: */
UGFAELA_upper = AHFAELA_c.upb;
break;
case 3: /* VECTOR [] MODE97 */
BHFAELA_d = (YGFAELA.data.mode3);
{ 
VGFAELA_data_size = TSBAELA_discptr_size;
 /* line 971: */
 /* line 972: */
 /* line 973: */
 /* line 974: */
UGFAELA_upper = BHFAELA_d.upb;
} 
break;
default: 
/*SKIP*/;
break;
} 
 /* line 975: */
 /* line 976: */
CHFAELA = KGFAELA_block_count(VGFAELA_data_size, UGFAELA_upper, XGFAELA_overwriteable, Cbufpos);
} 
A_PROC_EXIT(no_of_blocks);
return( CHFAELA );
} 
#undef NL
 /* line 979: */

A68_BOOL  GHFAELA_can_write(A68_109 * Db, A68_VC  Chars, A68_101  Dps)
{ 
A68_INT  HHFAELA_cbufpos;
A68_BOOL  IHFAELA;  /* clause result */
A68_111  JHFAELA;  /* OPERATORS - mode -> union mode */
A68_111  KHFAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(can_write);
 /* line 980: */
{ 
TEEAELA_check_valid_db(Db);
 /* line 981: */
PEEAELA_check_nilfile((*(&(Db->Df))));
 /* line 982: */
HHFAELA_cbufpos = (*(*(&((*(&(Db->Df)))->Cbufpos))));
 /* line 983: */
 /* line 984: */
 /* line 985: */
IHFAELA = (((TGFAELA_no_of_blocks(Db, (&HHFAELA_cbufpos), A_UNITE(JHFAELA,mode2,2,Chars))+TGFAELA_no_of_blocks(Db, (&HHFAELA_cbufpos), A_UNITE(KHFAELA,mode3,3,Dps)))+1)<(*(*(&((*(&(Db->Df)))->Size_of_free_space)))));
} 
A_PROC_EXIT(can_write);
return( IHFAELA );
} 
#undef NL

A68_BOOL  NHFAELA_can_write_ints(A68_109 * Db, A68_32  Ints)
{ 
A68_INT  OHFAELA_cbufpos;
A68_BOOL  PHFAELA;  /* clause result */
A68_111  QHFAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(can_write_ints);
 /* line 988: */
{ 
TEEAELA_check_valid_db(Db);
 /* line 989: */
PEEAELA_check_nilfile((*(&(Db->Df))));
 /* line 990: */
OHFAELA_cbufpos = (*(*(&((*(&(Db->Df)))->Cbufpos))));
 /* line 991: */
 /* line 992: */
PHFAELA = ((TGFAELA_no_of_blocks(Db, (&OHFAELA_cbufpos), A_UNITE(QHFAELA,mode1,1,Ints))+1)<(*(*(&((*(&(Db->Df)))->Size_of_free_space)))));
} 
A_PROC_EXIT(can_write_ints);
return( PHFAELA );
} 
#undef NL

A_STATIC A68_VOID  THFAELA_extend_dps(A68_101 * Dps, A68_97  New_dp)
{ 
A68_101  UHFAELA_temp;
A68_INT  VHFAELA_upb;
A68_154  XHFAELA_generator;   /* proc value of non-global proc */
A68_101  CIFAELA;  /* avoid structure result */
A68_INT  DIFAELA;  /* YIELD */
A68_97 * EIFAELA;  /* YIELD */
A68_154  GIFAELA_generator;   /* proc value of non-global proc */
A68_101  LIFAELA;  /* avoid structure result */
A68_101  MIFAELA;  /* OPERATORS - trim index */
A68_101  NIFAELA;  /* YIELD */
A68_INT  OIFAELA;  /* YIELD */
A68_97 * PIFAELA;  /* YIELD */
A_PROC_ENTRY(extend_dps);
 /* line 995: */
{ 
UHFAELA_temp = (*Dps);
 /* line 996: */
VHFAELA_upb = UHFAELA_temp.upb;
 /* line 997: */
 /* line 998: */
if ( (VHFAELA_upb==0) )
{ 
A_CLOSURE( XHFAELA_generator, YHFAELA_generator, ZHFAELA_generator );
A_CALLPROC(XHFAELA_generator,(A68_FALSE, &CIFAELA),(A68_FALSE, &CIFAELA,(XHFAELA_generator).nonlocals));
(*Dps) = CIFAELA;
 /* line 999: */
 /* line 1000: */
DIFAELA = 1 ;
EIFAELA = (&A_VINDEX((*Dps),DIFAELA)) ;
(*EIFAELA) = New_dp;
} 
else
{ 
A_CLOSURE( GIFAELA_generator, HIFAELA_generator, IIFAELA_generator );
(( IIFAELA_generator * ) ( GIFAELA_generator.nonlocals )) -> VHFAELA_upb = VHFAELA_upb;
A_CALLPROC(GIFAELA_generator,(A68_FALSE, &LIFAELA),(A68_FALSE, &LIFAELA,(GIFAELA_generator).nonlocals));
(*Dps) = LIFAELA;
 /* line 1001: */
NIFAELA = A_VTRIM(MIFAELA,((*Dps)),A_VTSCRIPT(&(MIFAELA.upb),((*Dps)).upb,1,VHFAELA_upb)) ;
A_VASSIGN2(UHFAELA_temp,NIFAELA,A68_97 );
 /* line 1002: */
 /* line 1003: */
 /* line 1004: */
OIFAELA = (VHFAELA_upb+1) ;
PIFAELA = (&A_VINDEX((*Dps),OIFAELA)) ;
(*PIFAELA) = New_dp;
} 
} 
A_PROC_EXIT(extend_dps);
return;
} 
#undef NL

A68_VOID  SIFAELA_make_shaky(A68_109 * Db, A68_97  Dp, A68_97  *ReturnedValue)
{ 
A68_100 * TIFAELA_df;
A68_INT  UIFAELA_first_offset;
A68_99  VIFAELA;  /* collateral clause result */
A68_99  WIFAELA_addr;
A68_BOOL  XIFAELA_assignable;
A68_INT  YIFAELA_code;
A68_INT  ZIFAELA_data_elts;
A68_INT  AJFAELA_dp_elts;
A68_INT  BJFAELA_read_size;
A68_INT  CJFAELA_dp_version;
A68_105  DJFAELA;  /* collateral clause result */
A68_105 * EJFAELA;  /* YIELD */
A68_105 ** FJFAELA;  /* YIELD */
A68_97  GJFAELA;  /* clause result */
A68_97  HJFAELA;  /* avoid structure result */
A_PROC_ENTRY(make_shaky);
 /* line 1007: */
{ 
TIFAELA_df = (*(&(Db->Df)));
 /* line 1008: */
TEEAELA_check_valid_db(Db);
 /* line 1009: */
PEEAELA_check_nilfile(TIFAELA_df);
 /* line 1010: */
YEEAELA_check_forgery_use(Db, Dp);
 /* line 1011: */
UIFAELA_first_offset = PYBAELA_first_offset(Dp);
 /* line 1012: */
VIFAELA.Block_num = MYBAELA_first_block(Dp);
VIFAELA.Offset = UIFAELA_first_offset;
WIFAELA_addr = VIFAELA;
 /* line 1013: */
XIFAELA_assignable = JYBAELA_is_assignable(Dp);
 /* line 1014: */
YIFAELA_code = DYBAELA_discptr_code(Dp);
 /* line 1015: */
ZIFAELA_data_elts = SYBAELA_data_elts(Dp);
 /* line 1016: */
AJFAELA_dp_elts = VYBAELA_dp_elts(Dp);
 /* line 1017: */
BJFAELA_read_size = BZBAELA_read_size(Dp);
 /* line 1018: */
 /* line 1019: */
 /* line 1020: */
if ( (UIFAELA_first_offset!=0) )
{ 
 /* line 1021: */
CJFAELA_dp_version = ULEAELA_create_indir(TIFAELA_df, (&WIFAELA_addr), DYDAELA_shaky, ZIFAELA_data_elts, AJFAELA_dp_elts, YIFAELA_code, BJFAELA_read_size, FYDAELA_no_indirection);
 /* line 1022: */
 /* line 1023: */
DJFAELA.Indirection = (*(&((&WIFAELA_addr)->Block_num)));
 /* line 1024: */
DJFAELA.Rest = (*(&(TIFAELA_df->Instore_vars)));
EJFAELA = A_HEAP(A68_105 ) ;
(*EJFAELA) = DJFAELA ;
FJFAELA = (&(TIFAELA_df->Instore_vars)) ;
(*FJFAELA) = EJFAELA;
} 
else
{ 
 /* line 1025: */
CJFAELA_dp_version = YYBAELA_version(Dp);
} 
 /* line 1026: */
 /* line 1027: */
 /* line 1028: */
ZTBAELA_make_dp( DYDAELA_shaky, XIFAELA_assignable, YIFAELA_code, ZIFAELA_data_elts, AJFAELA_dp_elts, CJFAELA_dp_version, BJFAELA_read_size, WIFAELA_addr, &HJFAELA );
GJFAELA = HJFAELA;
} 
A_PROC_EXIT(make_shaky);
*ReturnedValue = (GJFAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  KJFAELA_flush_buffer(A68_109 * Db, A68_100 * Df)
{ 
A68_103 * LJFAELA_wb;
A68_INT * MJFAELA_upb;
A68_INT * NJFAELA_buffer_ptr;
A68_INT  OJFAELA_diff;
A68_BOOL  PJFAELA;  /* optbool result */
A68_INT  QJFAELA_start;
A68_VC  RJFAELA;  /* OPERATORS - trim index */
A68_VC  SJFAELA;  /* OPERATORS - trim index */
A68_92  TJFAELA;  /* procedure value */
A68_INT * UJFAELA;  /* YIELD */
A_PROC_ENTRY(flush_buffer);
 /* line 1034: */
{ 
LJFAELA_wb = (*(&(Df->Write_buffer)));
 /* line 1035: */
MJFAELA_upb = (*(&(LJFAELA_wb->Upb)));
 /* line 1036: */
NJFAELA_buffer_ptr = (*(&(LJFAELA_wb->Buffer_ptr)));
 /* line 1037: */
OJFAELA_diff = (VNBAELA_max_buffer_size-(*NJFAELA_buffer_ptr));
 /* line 1038: */
PJFAELA = ((*MJFAELA_upb)!=0);
if ( PJFAELA )
{ /* line 1039: */
PJFAELA = (OJFAELA_diff>0);
}
if ( PJFAELA )
{ 
QJFAELA_start = ((*NJFAELA_buffer_ptr)*SNBAELA_block_size);
 /* line 1040: */
 /* line 1041: */
 /* line 1042: */
RJFAELA = (*(&(LJFAELA_wb->Buffer))) ;
TJFAELA.fn.fn_global = GNBAELA_keepsake_msg;
TJFAELA.nonlocals = A68_NIL;
UOBAELA_put_block((*(*(&(Df->File)))), A_VTRIM(SJFAELA,(RJFAELA),A_VTSCRIPT(&(SJFAELA.upb),(RJFAELA).upb,(QJFAELA_start+1),(VNBAELA_max_buffer_size*SNBAELA_block_size))), (((*MJFAELA_upb)-OJFAELA_diff)+1), TJFAELA);
 /* line 1043: */
UJFAELA = (*(&(Df->Write_transfers))) ;
(*UJFAELA)+=1;
 /* line 1044: */
(*NJFAELA_buffer_ptr) = VNBAELA_max_buffer_size;
 /* line 1045: */
 /* line 1046: */
 /* line 1047: */
(*MJFAELA_upb) = 0;
} 
} 
A_PROC_EXIT(flush_buffer);
return;
} 
#undef NL

A_STATIC A68_VOID  YJFAELA_add_to_list(A68_107 ** List, A68_INT  Lwb, A68_BOOL  Not_contiguous)
{ 
A68_BOOL  ZJFAELA;  /* optbool result */
A68_107  AKFAELA;  /* collateral clause result */
A68_107 * BKFAELA;  /* YIELD */
A68_INT * CKFAELA;  /* YIELD */
A_PROC_ENTRY(add_to_list);
 /* line 1051: */
{ 
 /* line 1052: */
ZJFAELA = ((*List)==SUDAELA_nilblocklist);
if ( ! ZJFAELA )
{ZJFAELA = Not_contiguous;
}
if ( ZJFAELA )
{ 
AKFAELA.Lwb = Lwb;
AKFAELA.Upb = Lwb;
 /* line 1053: */
AKFAELA.Rest = (*List);
BKFAELA = A_HEAP(A68_107 ) ;
(*BKFAELA) = AKFAELA ;
(*List) = BKFAELA;
} 
else
{ 
 /* line 1054: */
 /* line 1055: */
CKFAELA = (&((*List)->Lwb)) ;
(*CKFAELA) = Lwb;
} 
} 
A_PROC_EXIT(add_to_list);
return;
} 
#undef NL

A_STATIC A68_VOID  FKFAELA_write_to_buffer(A68_109 * Db, A68_100 * Df)
{ 
A68_INT * GKFAELA_last_free;
A68_INT * HKFAELA_cbufpos;
A68_INT * IKFAELA_current_free;
A68_VC  JKFAELA_block_buffer;
A68_103 * KKFAELA_wb;
A68_INT * LKFAELA_upb;
A68_INT * MKFAELA_buffer_ptr;
A68_VC  NKFAELA;  /* OPERATORS - trim index */
A68_VC  OKFAELA;  /* OPERATORS - trim index */
A68_VC  PKFAELA;  /* YIELD */
A68_BOOL  QKFAELA_not_contiguous;
A68_BOOL  RKFAELA;  /* optbool result */
A68_VC  SKFAELA;  /* OPERATORS - trim index */
A68_VC  TKFAELA;  /* OPERATORS - trim index */
A68_92  UKFAELA;  /* procedure value */
A68_INT * VKFAELA;  /* YIELD */
A68_VC  WKFAELA;  /* OPERATORS - trim index */
A68_VC  XKFAELA;  /* avoid structure result */
A68_VC  YKFAELA;  /* YIELD */
A_PROC_ENTRY(write_to_buffer);
 /* line 1059: */
{ 
GKFAELA_last_free = (*(&(Df->Last_free)));
 /* line 1060: */
HKFAELA_cbufpos = (*(&(Df->Cbufpos)));
 /* line 1061: */
IKFAELA_current_free = (*(&(Df->Current_free)));
 /* line 1062: */
JKFAELA_block_buffer = (*(&(Df->Block_buffer)));
 /* line 1063: */
KKFAELA_wb = (*(&(Df->Write_buffer)));
 /* line 1064: */
LKFAELA_upb = (*(&(KKFAELA_wb->Upb)));
 /* line 1065: */
MKFAELA_buffer_ptr = (*(&(KKFAELA_wb->Buffer_ptr)));
 /* line 1066: */
if ( ((*MKFAELA_buffer_ptr)==VNBAELA_max_buffer_size) )
{ 
(*LKFAELA_upb) = (*IKFAELA_current_free);
} 
 /* line 1067: */
(*GKFAELA_last_free) = (*IKFAELA_current_free);
 /* line 1068: */
(*IKFAELA_current_free) = JDFAELA_get_free_block(Db, Df);
 /* line 1069: */
 /* line 1070: */
NKFAELA = (*(&(KKFAELA_wb->Buffer))) ;
PKFAELA = A_VTRIM(OKFAELA,(NKFAELA),A_VTSCRIPT(&(OKFAELA.upb),(NKFAELA).upb,((((*MKFAELA_buffer_ptr)-1)*SNBAELA_block_size)+1),((*MKFAELA_buffer_ptr)*SNBAELA_block_size))) ;
A_VASSIGN2(JKFAELA_block_buffer,PKFAELA,A68_CHAR );
 /* line 1071: */
(*MKFAELA_buffer_ptr)-=1;
 /* line 1072: */
QKFAELA_not_contiguous = (((*(*(&(Df->Last_free))))-(*IKFAELA_current_free))!=1);
 /* line 1073: */
RKFAELA = QKFAELA_not_contiguous;
if ( ! RKFAELA )
{ /* line 1074: */
RKFAELA = ((*MKFAELA_buffer_ptr)==0);
}
if ( RKFAELA )
{ 
 /* line 1075: */
 /* line 1076: */
SKFAELA = (*(&(KKFAELA_wb->Buffer))) ;
UKFAELA.fn.fn_global = GNBAELA_keepsake_msg;
UKFAELA.nonlocals = A68_NIL;
UOBAELA_put_block((*(*(&(Df->File)))), A_VTRIM(TKFAELA,(SKFAELA),A_VTSCRIPT(&(TKFAELA.upb),(SKFAELA).upb,(((*MKFAELA_buffer_ptr)*SNBAELA_block_size)+1),(VNBAELA_max_buffer_size*SNBAELA_block_size))), (*(*(&(Df->Last_free)))), UKFAELA);
 /* line 1077: */
VKFAELA = (*(&(Df->Write_transfers))) ;
(*VKFAELA)+=1;
 /* line 1078: */
MQBAELA_clear_rvc((*(&(KKFAELA_wb->Buffer))));
 /* line 1079: */
(*MKFAELA_buffer_ptr) = VNBAELA_max_buffer_size;
 /* line 1080: */
 /* line 1081: */
(*LKFAELA_upb) = 0;
} 
 /* line 1082: */
YJFAELA_add_to_list((&(KKFAELA_wb->List)), (*IKFAELA_current_free), QKFAELA_not_contiguous);
 /* line 1083: */
(*HKFAELA_cbufpos) = 0;
 /* line 1084: */
MQBAELA_clear_rvc(JKFAELA_block_buffer);
 /* line 1085: */
 /* line 1086: */
 /* line 1087: */
JCCAELA_make_block_heading( 0, (*GKFAELA_last_free), 0, 0, 0, 1, &XKFAELA );
YKFAELA = A_VTRIM(WKFAELA,(JKFAELA_block_buffer),A_VTSCRIPT(&(WKFAELA.upb),(JKFAELA_block_buffer).upb,(RICAELA_actual_block_size+1),(RICAELA_actual_block_size+CCCAELA_block_heading_size))) ;
A_VASSIGN2(XKFAELA,YKFAELA,A68_CHAR );
} 
A_PROC_EXIT(write_to_buffer);
return;
} 
#undef NL

A_STATIC A68_INT  BLFAELA_optimum_read_size(A68_103 * Wb, A68_INT  Current_free)
{ 
A68_INT  CLFAELA_result;
A68_107 ** DLFAELA_list_ptr;
A68_BOOL  ELFAELA;  /* optbool result */
A68_INT  FLFAELA_min_read;
A68_INT  GLFAELA_max_read;
A68_INT  HLFAELA;  /* clause result */
A68_INT  ILFAELA;  /* clause result */
A_PROC_ENTRY(optimum_read_size);
 /* line 1090: */
{ 
CLFAELA_result = 1;
 /* line 1091: */
DLFAELA_list_ptr = (&(Wb->List));
 /* line 1092: */
for ( ;; )
{ 
ELFAELA = ((*DLFAELA_list_ptr)!=SUDAELA_nilblocklist);
if ( ELFAELA )
{ /* line 1093: */
ELFAELA = (CLFAELA_result!=VNBAELA_max_buffer_size);
}
if ( !(ELFAELA) ) break;
FLFAELA_min_read = ((*(&((*DLFAELA_list_ptr)->Lwb)))-Current_free);
 /* line 1094: */
GLFAELA_max_read = ((*(&((*DLFAELA_list_ptr)->Upb)))-Current_free);
 /* line 1095: */
 /* line 1096: */
if ( (FLFAELA_min_read>=0) )
{ 
 /* line 1097: */
if ( (GLFAELA_max_read>=(VNBAELA_max_buffer_size-1)) )
{ 
HLFAELA = VNBAELA_max_buffer_size;
} 
else
{ 
 /* line 1098: */
HLFAELA = (GLFAELA_max_read+1);
} 
CLFAELA_result = HLFAELA;
} 
 /* line 1099: */
 /* line 1100: */
DLFAELA_list_ptr = (&((*DLFAELA_list_ptr)->Rest));
}
 /* line 1101: */
 /* line 1102: */
ILFAELA = CLFAELA_result;
} 
A_PROC_EXIT(optimum_read_size);
return( ILFAELA );
} 
#undef NL

A_STATIC A68_VOID  LLFAELA_check_not_appending(A68_100 * Df, A68_VC  Operation)
{ 
A68_VC  OLFAELA;  /* avoid structure result */
A_PROC_ENTRY(check_not_appending);
 /* line 1105: */
 /* line 1106: */
if ( (*(*(&(Df->Appending)))) )
{ 
PFEAELA_( Operation, NLFAELA, &OLFAELA );
QNBAELA_keepsake_fault(OLFAELA);
} 
A_PROC_EXIT(check_not_appending);
return;
} 
#undef NL

A_STATIC A68_VOID  SLFAELA_add_gc_address(A68_104 ** Gc_ptrs, A68_99  Old, A68_99  New)
{ 
A68_104  TLFAELA;  /* collateral clause result */
A68_104 * ULFAELA;  /* YIELD */
A_PROC_ENTRY(add_gc_address);
 /* line 1109: */
TLFAELA.Old = Old;
TLFAELA.New = New;
TLFAELA.Rest = (*Gc_ptrs);
ULFAELA = A_HEAP(A68_104 ) ;
(*ULFAELA) = TLFAELA ;
(*Gc_ptrs) = ULFAELA;
A_PROC_EXIT(add_gc_address);
return;
} 
#undef NL
 /* line 1112: */

A_STATIC A68_VOID  ZLFAELA_write_dp_copies(A68_100 * Df, A68_103 * Wb, A68_99  Old, A68_99  New)
{ 
A68_104 ** AMFAELA_traced;
A68_99  BMFAELA_traced_addr;
A68_INT  CMFAELA_offset;
A68_INT  DMFAELA_block;
A68_INT  EMFAELA_start;
A68_VC  FMFAELA;  /* OPERATORS - trim index */
A68_VC  GMFAELA;  /* OPERATORS - trim index */
A68_31  IMFAELA_generator;   /* proc value of non-global proc */
A68_VC  OMFAELA;  /* avoid structure result */
A68_VC  NMFAELA_buff;
A68_92  PMFAELA;  /* procedure value */
A68_92  QMFAELA;  /* procedure value */
A_PROC_ENTRY(write_dp_copies);
 /* line 1113: */
{ 
AMFAELA_traced = (&(Df->Gc_ptrs));
 /* line 1114: */
for ( ;; )
{ 
 /* line 1115: */
if ( !(((*AMFAELA_traced)!=IWDAELA_niltraced)) ) break;
 /* line 1116: */
if ( QACAELA_((*(&((*AMFAELA_traced)->Old))), Old) )
{ 
BMFAELA_traced_addr = (*(&((*AMFAELA_traced)->New)));
 /* line 1117: */
CMFAELA_offset = BMFAELA_traced_addr.Offset;
 /* line 1118: */
DMFAELA_block = BMFAELA_traced_addr.Block_num;
 /* line 1119: */
 /* line 1120: */
if ( (DMFAELA_block==(*(*(&(Df->Current_free))))) )
{ 
 /* line 1121: */
QZBAELA_overwrite_address((*(&(Df->Block_buffer))), CMFAELA_offset, New);
} 
else
{ 
 /* line 1122: */
if ( KTEAELA_in_writebuffer(Df, DMFAELA_block) )
{ 
 /* line 1123: */
EMFAELA_start = ((((VNBAELA_max_buffer_size+DMFAELA_block)-(*(*(&(Wb->Upb)))))-1)*SNBAELA_block_size);
 /* line 1124: */
 /* line 1125: */
 /* line 1126: */
 /* line 1127: */
FMFAELA = (*(&(Wb->Buffer))) ;
QZBAELA_overwrite_address(A_VTRIM(GMFAELA,(FMFAELA),A_VTSCRIPT(&(GMFAELA.upb),(FMFAELA).upb,(EMFAELA_start+1),(EMFAELA_start+SNBAELA_block_size))), CMFAELA_offset, New);
} 
else
{ 
A_CLOSURE( IMFAELA_generator, JMFAELA_generator, KMFAELA_generator );
A_CALLPROC(IMFAELA_generator,(A68_TRUE, &OMFAELA),(A68_TRUE, &OMFAELA,(IMFAELA_generator).nonlocals));
NMFAELA_buff = OMFAELA;
 /* line 1128: */
PMFAELA.fn.fn_global = GNBAELA_keepsake_msg;
PMFAELA.nonlocals = A68_NIL;
IOBAELA_get_block((*(*(&(Df->File)))), NMFAELA_buff, DMFAELA_block, PMFAELA);
 /* line 1129: */
QZBAELA_overwrite_address(NMFAELA_buff, CMFAELA_offset, New);
 /* line 1130: */
 /* line 1131: */
 /* line 1132: */
QMFAELA.fn.fn_global = GNBAELA_keepsake_msg;
QMFAELA.nonlocals = A68_NIL;
UOBAELA_put_block((*(*(&(Df->File)))), NMFAELA_buff, DMFAELA_block, QMFAELA);
} 
} 
} 
 /* line 1133: */
 /* line 1134: */
AMFAELA_traced = (&((*AMFAELA_traced)->Rest));
}
 /* line 1136: */
} 
A_PROC_EXIT(write_dp_copies);
return;
} 
#undef NL
 /* line 1139: */
 /* line 1140: */
 /* line 1141: */
 /* line 1142: */

A_STATIC A68_VOID  CNFAELA_write(A68_109 * Db, A68_100 * Df, A68_243  Data, A68_101  Dps, A68_INT  Data_code, A68_INT  Upb_chars, A68_INT  Indirection, A68_BOOL  Assignable, A68_99  Old, A68_32  Deja_vus, A68_32  Pagetable, A68_97  *ReturnedValue)
{ 
A68_103 * DNFAELA_wb;
A68_97  ENFAELA_output;
A68_INT * FNFAELA_current_free;
A68_INT * GNFAELA_cbufpos;
A68_INT * HNFAELA_appended_data;
A68_104 ** INFAELA_gc_ptrs;
A68_VC  JNFAELA_block_buffer;
A68_INT * KNFAELA_last_free;
A68_243  LNFAELA;  /* united object - for case conformity */
A68_VC  MNFAELA_chars;
A68_INT  NNFAELA;  /* clause result */
A68_32  ONFAELA_ints;
A68_INT  PNFAELA_upb_data;
A68_INT  QNFAELA_upb_dps;
A68_99  RNFAELA;  /* collateral clause result */
A68_99  SNFAELA_addr;
A68_INT  TNFAELA_cdata_elt;
A68_INT  UNFAELA_int_elt;
A68_INT  VNFAELA_int_index;
A68_INT  WNFAELA_cdps_elt;
A68_31  YNFAELA_generator;   /* proc value of non-global proc */
A68_VC  EOFAELA;  /* avoid structure result */
A68_VC  DOFAELA_current_int;
A68_INT  FOFAELA_i;
A68_BOOL  GOFAELA;  /* optbool result */
A68_BOOL  HOFAELA_continue;
A68_INT  IOFAELA_data_elts;
A68_INT  JOFAELA_dp_elts;
A68_BOOL  KOFAELA;  /* optbool result */
A68_INT * LOFAELA;  /* YIELD */
A68_INT  MOFAELA_charpos;
A68_BOOL  NOFAELA;  /* optbool result */
A68_243  OOFAELA;  /* united object - for case conformity */
A68_VC  POFAELA_chars;
A68_INT  QOFAELA_i;
A68_INT  ROFAELA;  /* to part of loop */
A68_INT  SOFAELA;  /* YIELD */
A68_INT  TOFAELA;  /* YIELD */
A68_CHAR * UOFAELA;  /* YIELD */
A68_32  VOFAELA_ints;
A68_INT  WOFAELA_i;
A68_INT  XOFAELA;  /* to part of loop */
A68_INT  YOFAELA;  /* YIELD */
A68_VC  ZOFAELA;  /* avoid structure result */
A68_INT  APFAELA;  /* YIELD */
A68_CHAR * BPFAELA;  /* YIELD */
A68_INT  CPFAELA_i;
A68_INT  DPFAELA;  /* to part of loop */
A68_INT  EPFAELA;  /* YIELD */
A68_97  FPFAELA_d;
A68_99  GPFAELA;  /* collateral clause result */
A68_99  HPFAELA_old_addr;
A68_99  IPFAELA;  /* collateral clause result */
A68_99  JPFAELA_new;
A68_INT  KPFAELA_j;
A68_INT  LPFAELA;  /* to part of loop */
A68_BOOL  MPFAELA;  /* optbool result */
A68_INT  NPFAELA_lwb;
A68_VC  OPFAELA;  /* OPERATORS - trim index */
A68_VC  PPFAELA;  /* avoid structure result */
A68_VC  QPFAELA;  /* YIELD */
A68_BOOL  RPFAELA;  /* optbool result */
A68_INT  SPFAELA_read_size;
A68_VC  TPFAELA;  /* OPERATORS - trim index */
A68_VC  UPFAELA;  /* avoid structure result */
A68_VC  VPFAELA;  /* YIELD */
A68_99  WPFAELA;  /* collateral clause result */
A68_INT  XPFAELA_lwb;
A68_VC  YPFAELA;  /* OPERATORS - trim index */
A68_VC  ZPFAELA;  /* avoid structure result */
A68_VC  AQFAELA;  /* YIELD */
A68_99  BQFAELA;  /* collateral clause result */
A68_BOOL  CQFAELA;  /* optbool result */
A68_INT  DQFAELA_read_size;
A68_VC  EQFAELA;  /* OPERATORS - trim index */
A68_VC  FQFAELA;  /* avoid structure result */
A68_VC  GQFAELA;  /* YIELD */
A68_INT  HQFAELA_lwb;
A68_VC  IQFAELA;  /* OPERATORS - trim index */
A68_VC  JQFAELA;  /* avoid structure result */
A68_VC  KQFAELA;  /* YIELD */
A68_99  LQFAELA;  /* collateral clause result */
A68_INT  MQFAELA_read_size;
A68_107 ** NQFAELA;  /* YIELD */
A68_INT  OQFAELA_version;
A68_105  PQFAELA;  /* collateral clause result */
A68_105 * QQFAELA;  /* YIELD */
A68_105 ** RQFAELA;  /* YIELD */
A68_97  SQFAELA;  /* clause result */
A68_97  TQFAELA;  /* avoid structure result */
A_PROC_ENTRY(write);
 /* line 1164: */
{ 
TEEAELA_check_valid_db(Db);
 /* line 1165: */
PEEAELA_check_nilfile(Df);
 /* line 1166: */
EVEAELA_check_file_writeable(Db, Df);
 /* line 1167: */
DNFAELA_wb = (*(&(Df->Write_buffer)));
 /* line 1168: */
 /* line 1169: */
FNFAELA_current_free = (*(&(Df->Current_free)));
 /* line 1170: */
GNFAELA_cbufpos = (*(&(Df->Cbufpos)));
 /* line 1171: */
HNFAELA_appended_data = (*(&(Df->Appended_data)));
 /* line 1172: */
INFAELA_gc_ptrs = (&(Df->Gc_ptrs));
 /* line 1173: */
JNFAELA_block_buffer = (*(&(Df->Block_buffer)));
 /* line 1174: */
KNFAELA_last_free = (*(&(Df->Last_free)));
 /* line 1176: */
LNFAELA = Data ;
switch ( LNFAELA.mode )
{ 
case 1: /* VECTOR [] CHAR */
MNFAELA_chars = (LNFAELA.data.mode1);
 /* line 1177: */
NNFAELA = MNFAELA_chars.upb;
break;
case 2: /* VECTOR [] INT */
ONFAELA_ints = (LNFAELA.data.mode2);
 /* line 1178: */
NNFAELA = (ONFAELA_ints.upb*EDAAOST_int_size);
break;
default: 
A_IMP_SKIP ;
break;
} 
PNFAELA_upb_data = NNFAELA;
 /* line 1179: */
QNFAELA_upb_dps = Dps.upb;
 /* line 1181: */
RNFAELA.Block_num = 1;
RNFAELA.Offset = 1;
SNFAELA_addr = RNFAELA;
 /* line 1182: */
TNFAELA_cdata_elt = 0;
 /* line 1183: */
UNFAELA_int_elt = 0;
 /* line 1184: */
VNFAELA_int_index = EDAAOST_int_size;
 /* line 1185: */
WNFAELA_cdps_elt = 0;
 /* line 1186: */
A_CLOSURE( YNFAELA_generator, ZNFAELA_generator, AOFAELA_generator );
A_CALLPROC(YNFAELA_generator,(A68_TRUE, &EOFAELA),(A68_TRUE, &EOFAELA,(YNFAELA_generator).nonlocals));
DOFAELA_current_int = EOFAELA;
 /* line 1188: */
for ( FOFAELA_i = 1;;
FOFAELA_i += 1 ) 
{ 
GOFAELA = (TNFAELA_cdata_elt!=PNFAELA_upb_data);
if ( ! GOFAELA )
{ /* line 1189: */
GOFAELA = (WNFAELA_cdps_elt!=QNFAELA_upb_dps);
}
if ( !(GOFAELA) ) break;
HOFAELA_continue = A68_TRUE;
 /* line 1190: */
 /* line 1191: */
 /* line 1192: */
for ( ;; )
{ 
 /* line 1193: */
if ( !(HOFAELA_continue) ) break;
KOFAELA = (FOFAELA_i>1);
if ( KOFAELA )
{ /* line 1194: */
KOFAELA = (Pagetable.upb!=0);
}
if ( KOFAELA )
{ 
LOFAELA = (&A_VINDEX(Pagetable,(*FNFAELA_current_free))) ;
(*LOFAELA) = (*KNFAELA_last_free);
} 
 /* line 1195: */
MOFAELA_charpos = (*GNFAELA_cbufpos);
 /* line 1196: */
 /* line 1197: */
IOFAELA_data_elts = IYDAELA_min((PNFAELA_upb_data-TNFAELA_cdata_elt), (RICAELA_actual_block_size-MOFAELA_charpos));
 /* line 1198: */
MOFAELA_charpos+=IOFAELA_data_elts;
 /* line 1199: */
 /* line 1200: */
JOFAELA_dp_elts = IYDAELA_min((QNFAELA_upb_dps-WNFAELA_cdps_elt), ((RICAELA_actual_block_size-MOFAELA_charpos)/TSBAELA_discptr_size));
 /* line 1201: */
NOFAELA = (IOFAELA_data_elts==0);
if ( NOFAELA )
{ /* line 1202: */
NOFAELA = (JOFAELA_dp_elts==0);
}
if ( NOFAELA )
{ 
FKFAELA_write_to_buffer(Db, Df);
} 
else
{ 
 /* line 1203: */
HOFAELA_continue = A68_FALSE;
} 
}
 /* line 1205: */
 /* line 1206: */
OOFAELA = Data ;
switch ( OOFAELA.mode )
{ 
case 1: /* VECTOR [] CHAR */
POFAELA_chars = (OOFAELA.data.mode1);
 /* line 1207: */
 /* line 1208: */
ROFAELA = IOFAELA_data_elts;
for ( QOFAELA_i = 1;
QOFAELA_i <= ROFAELA;
QOFAELA_i += 1 )
{ 
 /* line 1209: */
 /* line 1210: */
SOFAELA = (*GNFAELA_cbufpos)+=1 ;
TOFAELA = TNFAELA_cdata_elt+=1 ;
UOFAELA = (&A_VINDEX(JNFAELA_block_buffer,SOFAELA)) ;
(*UOFAELA) = A_VINDEX(POFAELA_chars,TOFAELA);
}
 /* line 1211: */
break;
case 2: /* VECTOR [] INT */
VOFAELA_ints = (OOFAELA.data.mode2);
 /* line 1212: */
 /* line 1213: */
XOFAELA = IOFAELA_data_elts;
for ( WOFAELA_i = 1;
WOFAELA_i <= XOFAELA;
WOFAELA_i += 1 )
{ 
 /* line 1214: */
if ( ((VNFAELA_int_index+=1)>EDAAOST_int_size) )
{ 
VNFAELA_int_index = 1;
 /* line 1215: */
 /* line 1216: */
YOFAELA = UNFAELA_int_elt+=1 ;
VRBAELA_itovc( A_VINDEX(VOFAELA_ints,YOFAELA), &ZOFAELA );
A_VASSIGN2(ZOFAELA,DOFAELA_current_int,A68_CHAR );
} 
 /* line 1217: */
APFAELA = (*GNFAELA_cbufpos)+=1 ;
BPFAELA = (&A_VINDEX(JNFAELA_block_buffer,APFAELA)) ;
(*BPFAELA) = (*(&A_VINDEX(DOFAELA_current_int,VNFAELA_int_index)));
 /* line 1218: */
 /* line 1219: */
TNFAELA_cdata_elt+=1;
}
 /* line 1220: */
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 1222: */
 /* line 1223: */
DPFAELA = JOFAELA_dp_elts;
for ( CPFAELA_i = 1;
CPFAELA_i <= DPFAELA;
CPFAELA_i += 1 )
{ 
EPFAELA = WNFAELA_cdps_elt+=1 ;
FPFAELA_d = A_VINDEX(Dps,EPFAELA);
 /* line 1224: */
GPFAELA.Block_num = MYBAELA_first_block(FPFAELA_d);
GPFAELA.Offset = PYBAELA_first_offset(FPFAELA_d);
HPFAELA_old_addr = GPFAELA;
 /* line 1225: */
IPFAELA.Block_num = (*FNFAELA_current_free);
IPFAELA.Offset = (*GNFAELA_cbufpos);
JPFAELA_new = IPFAELA;
 /* line 1226: */
 /* line 1227: */
LPFAELA = Deja_vus.upb;
for ( KPFAELA_j = 1;
KPFAELA_j <= LPFAELA;
KPFAELA_j += 1 )
{ 
MPFAELA = ((*(&A_VINDEX(Deja_vus,KPFAELA_j)))==WNFAELA_cdps_elt);
if ( MPFAELA )
{ /* line 1228: */
MPFAELA = (HPFAELA_old_addr.Offset!=0);
}
if ( MPFAELA )
{ 
 /* line 1229: */
SLFAELA_add_gc_address(INFAELA_gc_ptrs, HPFAELA_old_addr, JPFAELA_new);
} 
}
 /* line 1230: */
NPFAELA_lwb = ((*GNFAELA_cbufpos)+1);
 /* line 1231: */
 /* line 1232: */
XVBAELA_dp_to_chars( FPFAELA_d, &PPFAELA );
QPFAELA = A_VTRIM(OPFAELA,(JNFAELA_block_buffer),A_VTSCRIPT(&(OPFAELA.upb),(JNFAELA_block_buffer).upb,NPFAELA_lwb,((*GNFAELA_cbufpos)+=TSBAELA_discptr_size))) ;
A_VASSIGN2(PPFAELA,QPFAELA,A68_CHAR );
 /* line 1233: */
 /* line 1234: */
DFEAELA_check_forgery_write(Db, FPFAELA_d);
}
 /* line 1235: */
 /* line 1236: */
RPFAELA = ((RICAELA_actual_block_size-(*GNFAELA_cbufpos))<CGCAELA_data_heading_size);
if ( ! RPFAELA )
{RPFAELA = (TNFAELA_cdata_elt!=PNFAELA_upb_data);
}
if ( ! RPFAELA )
{ /* line 1237: */
RPFAELA = (WNFAELA_cdps_elt!=QNFAELA_upb_dps);
}
if ( RPFAELA )
{ 
SPFAELA_read_size = BLFAELA_optimum_read_size(DNFAELA_wb, (*FNFAELA_current_free));
 /* line 1238: */
 /* line 1239: */
 /* line 1240: */
 /* line 1241: */
 /* line 1242: */
JCCAELA_make_block_heading( Data_code, (*KNFAELA_last_free), (IOFAELA_data_elts+(*HNFAELA_appended_data)), JOFAELA_dp_elts, ((*GNFAELA_cbufpos)+1), SPFAELA_read_size, &UPFAELA );
VPFAELA = A_VTRIM(TPFAELA,(JNFAELA_block_buffer),A_VTSCRIPT(&(TPFAELA.upb),(JNFAELA_block_buffer).upb,(RICAELA_actual_block_size+1),(RICAELA_actual_block_size+CCCAELA_block_heading_size))) ;
A_VASSIGN2(UPFAELA,VPFAELA,A68_CHAR );
 /* line 1243: */
(*HNFAELA_appended_data) = 0;
 /* line 1244: */
WPFAELA.Block_num = (*FNFAELA_current_free);
WPFAELA.Offset = SNBAELA_block_size;
SNFAELA_addr = WPFAELA;
 /* line 1245: */
 /* line 1246: */
 /* line 1247: */
FKFAELA_write_to_buffer(Db, Df);
} 
else
{ 
if ( !(*(*(&(Df->Appending)))) )
{ 
XPFAELA_lwb = ((*GNFAELA_cbufpos)+1);
 /* line 1248: */
 /* line 1249: */
 /* line 1250: */
GGCAELA_make_data_heading( Data_code, (IOFAELA_data_elts+(*HNFAELA_appended_data)), JOFAELA_dp_elts, &ZPFAELA );
AQFAELA = A_VTRIM(YPFAELA,(JNFAELA_block_buffer),A_VTSCRIPT(&(YPFAELA.upb),(JNFAELA_block_buffer).upb,XPFAELA_lwb,((*GNFAELA_cbufpos)+=CGCAELA_data_heading_size))) ;
A_VASSIGN2(ZPFAELA,AQFAELA,A68_CHAR );
 /* line 1251: */
(*HNFAELA_appended_data) = 0;
 /* line 1252: */
BQFAELA.Block_num = (*FNFAELA_current_free);
 /* line 1253: */
BQFAELA.Offset = (*GNFAELA_cbufpos);
SNFAELA_addr = BQFAELA;
} 
else
{ 
 /* line 1254: */
 /* line 1255: */
(*HNFAELA_appended_data)+=IOFAELA_data_elts;
} 
} 
}
 /* line 1257: */
CQFAELA = (PNFAELA_upb_data==0);
if ( CQFAELA )
{ /* line 1258: */
CQFAELA = (QNFAELA_upb_dps==0);
}
if ( CQFAELA )
{ 
 /* line 1259: */
if ( ((RICAELA_actual_block_size-(*GNFAELA_cbufpos))<CGCAELA_data_heading_size) )
{ 
DQFAELA_read_size = BLFAELA_optimum_read_size(DNFAELA_wb, (*FNFAELA_current_free));
 /* line 1260: */
 /* line 1261: */
 /* line 1262: */
 /* line 1263: */
 /* line 1264: */
JCCAELA_make_block_heading( Data_code, (*KNFAELA_last_free), (*HNFAELA_appended_data), 0, ((*GNFAELA_cbufpos)+1), DQFAELA_read_size, &FQFAELA );
GQFAELA = A_VTRIM(EQFAELA,(JNFAELA_block_buffer),A_VTSCRIPT(&(EQFAELA.upb),(JNFAELA_block_buffer).upb,(RICAELA_actual_block_size+1),(RICAELA_actual_block_size+CCCAELA_block_heading_size))) ;
A_VASSIGN2(FQFAELA,GQFAELA,A68_CHAR );
 /* line 1265: */
 /* line 1266: */
(*HNFAELA_appended_data) = 0;
} 
else
{ 
HQFAELA_lwb = ((*GNFAELA_cbufpos)+1);
 /* line 1267: */
 /* line 1268: */
GGCAELA_make_data_heading( Data_code, (*HNFAELA_appended_data), 0, &JQFAELA );
KQFAELA = A_VTRIM(IQFAELA,(JNFAELA_block_buffer),A_VTSCRIPT(&(IQFAELA.upb),(JNFAELA_block_buffer).upb,HQFAELA_lwb,((*GNFAELA_cbufpos)+=CGCAELA_data_heading_size))) ;
A_VASSIGN2(JQFAELA,KQFAELA,A68_CHAR );
 /* line 1269: */
(*HNFAELA_appended_data) = 0;
 /* line 1270: */
LQFAELA.Block_num = (*FNFAELA_current_free);
 /* line 1271: */
LQFAELA.Offset = (*GNFAELA_cbufpos);
 /* line 1272: */
SNFAELA_addr = LQFAELA;
} 
} 
 /* line 1274: */
MQFAELA_read_size = BLFAELA_optimum_read_size(DNFAELA_wb, (*FNFAELA_current_free));
 /* line 1275: */
NQFAELA = (&(DNFAELA_wb->List)) ;
(*NQFAELA) = SUDAELA_nilblocklist;
 /* line 1276: */
ZLFAELA_write_dp_copies(Df, DNFAELA_wb, Old, SNFAELA_addr);
 /* line 1278: */
OQFAELA_version = 1;
 /* line 1279: */
 /* line 1280: */
if ( Assignable )
{ 
 /* line 1281: */
OQFAELA_version = ULEAELA_create_indir(Df, (&SNFAELA_addr), EYDAELA_not_shaky, Upb_chars, QNFAELA_upb_dps, Data_code, MQFAELA_read_size, Indirection);
 /* line 1282: */
 /* line 1283: */
PQFAELA.Indirection = (*(&((&SNFAELA_addr)->Block_num)));
 /* line 1284: */
PQFAELA.Rest = (*(&(Df->Instore_vars)));
QQFAELA = A_HEAP(A68_105 ) ;
(*QQFAELA) = PQFAELA ;
RQFAELA = (&(Df->Instore_vars)) ;
(*RQFAELA) = QQFAELA;
} 
 /* line 1285: */
 /* line 1286: */
 /* line 1287: */
ZTBAELA_make_dp( EYDAELA_not_shaky, Assignable, Data_code, Upb_chars, QNFAELA_upb_dps, OQFAELA_version, MQFAELA_read_size, SNFAELA_addr, &TQFAELA );
SQFAELA = TQFAELA;
} 
A_PROC_EXIT(write);
*ReturnedValue = (SQFAELA);
return;
} 
#undef NL

A68_VOID  XQFAELA_write_ints(A68_109 * Db, A68_32  Data, A68_BOOL  Assignable, A68_97  *ReturnedValue)
{ 
A68_97  ARFAELA;  /* clause result */
A68_243  BRFAELA;  /* OPERATORS - mode -> union mode */
A68_97  CRFAELA;  /* avoid structure result */
A_PROC_ENTRY(write_ints);
 /* line 1291: */
{ 
LLFAELA_check_not_appending((*(&(Db->Df))), ZQFAELA);
 /* line 1292: */
 /* line 1293: */
 /* line 1294: */
CNFAELA_write( Db, (*(&(Db->Df))), A_UNITE(BRFAELA,mode2,2,Data), PVDAELA_nodps, XWDAELA_ints, (Data.upb*EDAAOST_int_size), FYDAELA_no_indirection, Assignable, LACAELA_niladdress, VVDAELA_noints, DVDAELA_nilpagetable, &CRFAELA );
ARFAELA = CRFAELA;
} 
A_PROC_EXIT(write_ints);
*ReturnedValue = (ARFAELA);
return;
} 
#undef NL

A68_VOID  GRFAELA_write_chars(A68_109 * Db, A68_VC  Data, A68_BOOL  Assignable, A68_97  *ReturnedValue)
{ 
A68_97  JRFAELA;  /* clause result */
A68_243  KRFAELA;  /* OPERATORS - mode -> union mode */
A68_97  LRFAELA;  /* avoid structure result */
A_PROC_ENTRY(write_chars);
 /* line 1298: */
{ 
LLFAELA_check_not_appending((*(&(Db->Df))), IRFAELA);
 /* line 1299: */
 /* line 1300: */
 /* line 1301: */
CNFAELA_write( Db, (*(&(Db->Df))), A_UNITE(KRFAELA,mode1,1,Data), PVDAELA_nodps, YWDAELA_chars, Data.upb, FYDAELA_no_indirection, Assignable, LACAELA_niladdress, VVDAELA_noints, DVDAELA_nilpagetable, &LRFAELA );
JRFAELA = LRFAELA;
} 
A_PROC_EXIT(write_chars);
*ReturnedValue = (JRFAELA);
return;
} 
#undef NL
 /* line 1304: */

A68_VOID  QRFAELA_write_chars_dps(A68_109 * Db, A68_VC  Data, A68_101  Dps, A68_BOOL  Assignable, A68_97  *ReturnedValue)
{ 
A68_97  TRFAELA;  /* clause result */
A68_243  URFAELA;  /* OPERATORS - mode -> union mode */
A68_97  VRFAELA;  /* avoid structure result */
A_PROC_ENTRY(write_chars_dps);
 /* line 1305: */
{ 
LLFAELA_check_not_appending((*(&(Db->Df))), SRFAELA);
 /* line 1306: */
 /* line 1307: */
 /* line 1308: */
CNFAELA_write( Db, (*(&(Db->Df))), A_UNITE(URFAELA,mode1,1,Data), Dps, WWDAELA_charsdps, Data.upb, FYDAELA_no_indirection, Assignable, LACAELA_niladdress, VVDAELA_noints, DVDAELA_nilpagetable, &VRFAELA );
TRFAELA = VRFAELA;
} 
A_PROC_EXIT(write_chars_dps);
*ReturnedValue = (TRFAELA);
return;
} 
#undef NL
 /* line 1311: */

A68_VOID  ZRFAELA_write_discptrs(A68_109 * Db, A68_101  Data, A68_BOOL  Assignable, A68_97  *ReturnedValue)
{ 
A68_97  CSFAELA;  /* clause result */
A68_243  DSFAELA;  /* OPERATORS - mode -> union mode */
A68_97  ESFAELA;  /* avoid structure result */
A_PROC_ENTRY(write_discptrs);
 /* line 1312: */
{ 
LLFAELA_check_not_appending((*(&(Db->Df))), BSFAELA);
 /* line 1313: */
 /* line 1314: */
 /* line 1315: */
CNFAELA_write( Db, (*(&(Db->Df))), A_UNITE(DSFAELA,mode1,1,JVDAELA_nodata), Data, ZWDAELA_discptrs, 0, FYDAELA_no_indirection, Assignable, LACAELA_niladdress, VVDAELA_noints, DVDAELA_nilpagetable, &ESFAELA );
CSFAELA = ESFAELA;
} 
A_PROC_EXIT(write_discptrs);
*ReturnedValue = (CSFAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  HSFAELA_write_indirs(A68_109 * Db, A68_106  Data, A68_97  *ReturnedValue)
{ 
A68_31  LSFAELA_generator;   /* proc value of non-global proc */
A68_VC  RSFAELA;  /* avoid structure result */
A68_VC  QSFAELA_chars;
A68_INT  SSFAELA_i;
A68_INT  TSFAELA;  /* to part of loop */
A68_VC  USFAELA;  /* OPERATORS - trim index */
A68_VC  VSFAELA;  /* avoid structure result */
A68_VC  WSFAELA;  /* YIELD */
A68_97  XSFAELA;  /* clause result */
A68_243  YSFAELA;  /* OPERATORS - mode -> union mode */
A68_97  ZSFAELA;  /* avoid structure result */
A_PROC_ENTRY(write_indirs);
 /* line 1318: */
{ 
LLFAELA_check_not_appending((*(&(Db->Df))), JSFAELA);
 /* line 1319: */
A_CLOSURE( LSFAELA_generator, MSFAELA_generator, NSFAELA_generator );
(( NSFAELA_generator * ) ( LSFAELA_generator.nonlocals )) -> Data = Data;
A_CALLPROC(LSFAELA_generator,(A68_TRUE, &RSFAELA),(A68_TRUE, &RSFAELA,(LSFAELA_generator).nonlocals));
QSFAELA_chars = RSFAELA;
 /* line 1320: */
 /* line 1321: */
TSFAELA = Data.upb;
for ( SSFAELA_i = 1;
SSFAELA_i <= TSFAELA;
SSFAELA_i += 1 )
{ 
 /* line 1322: */
 /* line 1323: */
KBCAELA_indir_to_chars( A_VINDEX(Data,SSFAELA_i), &VSFAELA );
WSFAELA = A_VTRIM(USFAELA,(QSFAELA_chars),A_VTSCRIPT(&(USFAELA.upb),(QSFAELA_chars).upb,(((SSFAELA_i-1)*ABCAELA_indirection_size)+1),(SSFAELA_i*ABCAELA_indirection_size))) ;
A_VASSIGN2(VSFAELA,WSFAELA,A68_CHAR );
}
 /* line 1324: */
 /* line 1325: */
 /* line 1326: */
CNFAELA_write( Db, (*(&(Db->Df))), A_UNITE(YSFAELA,mode1,1,QSFAELA_chars), PVDAELA_nodps, BXDAELA_indirs, QSFAELA_chars.upb, FYDAELA_no_indirection, CYDAELA_not_assignable, LACAELA_niladdress, VVDAELA_noints, DVDAELA_nilpagetable, &ZSFAELA );
XSFAELA = ZSFAELA;
} 
A_PROC_EXIT(write_indirs);
*ReturnedValue = (XSFAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  DTFAELA_write_pagetable(A68_109 * Db, A68_100 * Df, A68_32  Data, A68_97  *ReturnedValue)
{ 
A68_97  GTFAELA;  /* clause result */
A68_243  HTFAELA;  /* OPERATORS - mode -> union mode */
A68_97  ITFAELA;  /* avoid structure result */
A_PROC_ENTRY(write_pagetable);
 /* line 1330: */
{ 
LLFAELA_check_not_appending(Df, FTFAELA);
 /* line 1331: */
 /* line 1332: */
 /* line 1333: */
 /* line 1334: */
CNFAELA_write( Db, Df, A_UNITE(HTFAELA,mode2,2,Data), PVDAELA_nodps, DXDAELA_pagetable_ints, (Data.upb*EDAAOST_int_size), FYDAELA_no_indirection, CYDAELA_not_assignable, LACAELA_niladdress, VVDAELA_noints, DVDAELA_nilpagetable, &ITFAELA );
GTFAELA = ITFAELA;
} 
A_PROC_EXIT(write_pagetable);
*ReturnedValue = (GTFAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  MTFAELA_write_freelist(A68_109 * Db, A68_100 * Df, A68_32  Data, A68_97  *ReturnedValue)
{ 
A68_97  PTFAELA;  /* clause result */
A68_243  QTFAELA;  /* OPERATORS - mode -> union mode */
A68_97  RTFAELA;  /* avoid structure result */
A_PROC_ENTRY(write_freelist);
 /* line 1338: */
{ 
LLFAELA_check_not_appending(Df, OTFAELA);
 /* line 1339: */
 /* line 1340: */
 /* line 1341: */
 /* line 1342: */
CNFAELA_write( Db, Df, A_UNITE(QTFAELA,mode2,2,Data), PVDAELA_nodps, CXDAELA_freelist_ints, (Data.upb*EDAAOST_int_size), FYDAELA_no_indirection, CYDAELA_not_assignable, LACAELA_niladdress, VVDAELA_noints, DVDAELA_nilpagetable, &RTFAELA );
PTFAELA = RTFAELA;
} 
A_PROC_EXIT(write_freelist);
*ReturnedValue = (PTFAELA);
return;
} 
#undef NL
 /* line 1345: */

A68_VOID  VTFAELA_start_append(A68_109 * Db, A68_VC  Data, A68_BOOL  Assignable, A68_97  *ReturnedValue)
{ 
A68_100 * WTFAELA_df;
A68_BOOL * ZTFAELA;  /* YIELD */
A68_BOOL ** AUFAELA;  /* YIELD */
A68_243  BUFAELA;  /* OPERATORS - mode -> union mode */
A68_97  CUFAELA;  /* avoid structure result */
A68_97  DUFAELA_dp;
A68_97  EUFAELA;  /* clause result */
A68_97 * FUFAELA;  /* YIELD */
A68_97 ** GUFAELA;  /* YIELD */
A_PROC_ENTRY(start_append);
 /* line 1346: */
{ 
WTFAELA_df = (*(&(Db->Df)));
 /* line 1347: */
PEEAELA_check_nilfile(WTFAELA_df);
 /* line 1348: */
LLFAELA_check_not_appending(WTFAELA_df, YTFAELA);
 /* line 1349: */
ZTFAELA = A_HEAP(A68_BOOL ) ;
(*ZTFAELA) = A68_TRUE ;
AUFAELA = (&(WTFAELA_df->Appending)) ;
(*AUFAELA) = ZTFAELA;
 /* line 1350: */
 /* line 1351: */
 /* line 1352: */
CNFAELA_write( Db, WTFAELA_df, A_UNITE(BUFAELA,mode1,1,Data), PVDAELA_nodps, WWDAELA_charsdps, Data.upb, FYDAELA_no_indirection, Assignable, LACAELA_niladdress, VVDAELA_noints, DVDAELA_nilpagetable, &CUFAELA );
DUFAELA_dp = CUFAELA;
 /* line 1353: */
 /* line 1354: */
FUFAELA = A_HEAP(A68_97 ) ;
(*FUFAELA) = DUFAELA_dp ;
GUFAELA = (&(WTFAELA_df->Append_dp)) ;
EUFAELA = (*((*GUFAELA) = FUFAELA));
} 
A_PROC_EXIT(start_append);
*ReturnedValue = (EUFAELA);
return;
} 
#undef NL

A68_VOID  KUFAELA_append(A68_109 * Db, A68_VC  Data, A68_97  Onto, A68_97  *ReturnedValue)
{ 
A68_97  LUFAELA;  /* clause result */
A68_243  MUFAELA;  /* OPERATORS - mode -> union mode */
A68_97  NUFAELA;  /* avoid structure result */
A_PROC_ENTRY(append);
 /* line 1357: */
 /* line 1358: */
 /* line 1359: */
CNFAELA_write( Db, (*(&(Db->Df))), A_UNITE(MUFAELA,mode1,1,Data), PVDAELA_nodps, WWDAELA_charsdps, (Data.upb+SYBAELA_data_elts(Onto)), FYDAELA_no_indirection, JYBAELA_is_assignable(Onto), LACAELA_niladdress, VVDAELA_noints, DVDAELA_nilpagetable, &NUFAELA );
LUFAELA = NUFAELA;
A_PROC_EXIT(append);
*ReturnedValue = (LUFAELA);
return;
} 
#undef NL

A68_VOID  PUFAELA_abort_append(A68_109 * Db)
{ 
A68_100 * QUFAELA_df;
A68_BOOL * RUFAELA;  /* YIELD */
A68_BOOL ** SUFAELA;  /* YIELD */
A68_INT * TUFAELA;  /* YIELD */
A68_INT ** UUFAELA;  /* YIELD */
A68_97 * VUFAELA;  /* YIELD */
A68_97 ** WUFAELA;  /* YIELD */
A_PROC_ENTRY(abort_append);
 /* line 1362: */
{ 
QUFAELA_df = (*(&(Db->Df)));
 /* line 1363: */
RUFAELA = A_HEAP(A68_BOOL ) ;
(*RUFAELA) = A68_FALSE ;
SUFAELA = (&(QUFAELA_df->Appending)) ;
(*SUFAELA) = RUFAELA;
 /* line 1364: */
TUFAELA = A_HEAP(A68_INT ) ;
(*TUFAELA) = 0 ;
UUFAELA = (&(QUFAELA_df->Appended_data)) ;
(*UUFAELA) = TUFAELA;
 /* line 1365: */
 /* line 1366: */
VUFAELA = A_HEAP(A68_97 ) ;
(*VUFAELA) = UACAELA_nilptr ;
WUFAELA = (&(QUFAELA_df->Append_dp)) ;
(*WUFAELA) = VUFAELA;
} 
A_PROC_EXIT(abort_append);
return;
} 
#undef NL
 /* line 1369: */

A68_VOID  BVFAELA_finish_append(A68_109 * Db, A68_VC  Data, A68_101  Dps, A68_97  Onto, A68_97  *ReturnedValue)
{ 
A68_BOOL * CVFAELA;  /* YIELD */
A68_BOOL ** DVFAELA;  /* YIELD */
A68_97  EVFAELA;  /* clause result */
A68_243  FVFAELA;  /* OPERATORS - mode -> union mode */
A68_97  GVFAELA;  /* avoid structure result */
A_PROC_ENTRY(finish_append);
 /* line 1370: */
{ 
CVFAELA = A_HEAP(A68_BOOL ) ;
(*CVFAELA) = A68_FALSE ;
DVFAELA = (&((*(&(Db->Df)))->Appending)) ;
(*DVFAELA) = CVFAELA;
 /* line 1371: */
 /* line 1372: */
 /* line 1373: */
 /* line 1374: */
CNFAELA_write( Db, (*(&(Db->Df))), A_UNITE(FVFAELA,mode1,1,Data), Dps, WWDAELA_charsdps, (Data.upb+SYBAELA_data_elts(Onto)), FYDAELA_no_indirection, JYBAELA_is_assignable(Onto), LACAELA_niladdress, VVDAELA_noints, DVDAELA_nilpagetable, &GVFAELA );
EVFAELA = GVFAELA;
} 
A_PROC_EXIT(finish_append);
*ReturnedValue = (EVFAELA);
return;
} 
#undef NL
 /* line 1377: */

A_STATIC A68_VOID  KVFAELA_freelist_to_disc(A68_109 * Db, A68_100 * Df, A68_32  Freelist)
{ 
A68_INT  LVFAELA_count;
A68_INT  MVFAELA_ndp;
A68_INT  NVFAELA_old_size;
A68_154  PVFAELA_generator;   /* proc value of non-global proc */
A68_101  UVFAELA;  /* avoid structure result */
A68_101  VVFAELA_new;
A68_101  WVFAELA;  /* OPERATORS - trim index */
A68_101  XVFAELA;  /* YIELD */
A68_101  YVFAELA;  /* OPERATORS - assign op */
A68_101 * ZVFAELA;  /* YIELD */
A68_97 * AWFAELA_dp;
A68_101  BWFAELA;  /* OPERATORS - trim index */
A68_101  CWFAELA;  /* OPERATORS - trim index */
A68_101  DWFAELA;  /* forall yield */
A68_INT  EWFAELA;  /* forall loop counter */
A68_INT  FWFAELA_n_ints;
A68_INT  GWFAELA_lwb;
A68_32  HWFAELA;  /* OPERATORS - trim index */
A68_97  IWFAELA;  /* avoid structure result */
A_PROC_ENTRY(freelist_to_disc);
 /* line 1383: */
{ 
LVFAELA_count = 0;
 /* line 1384: */
MVFAELA_ndp = (((Freelist.upb+SICAELA_max_ints_in_block)-1)/SICAELA_max_ints_in_block);
 /* line 1385: */
NVFAELA_old_size = (*(&(Df->Free_block_dps))).upb;
 /* line 1386: */
A_CLOSURE( PVFAELA_generator, QVFAELA_generator, RVFAELA_generator );
(( RVFAELA_generator * ) ( PVFAELA_generator.nonlocals )) -> MVFAELA_ndp = MVFAELA_ndp;
(( RVFAELA_generator * ) ( PVFAELA_generator.nonlocals )) -> NVFAELA_old_size = NVFAELA_old_size;
A_CALLPROC(PVFAELA_generator,(A68_FALSE, &UVFAELA),(A68_FALSE, &UVFAELA,(PVFAELA_generator).nonlocals));
VVFAELA_new = UVFAELA;
 /* line 1387: */
if ( (NVFAELA_old_size>0) )
{ 
XVFAELA = A_VTRIM(WVFAELA,(VVFAELA_new),A_VTSCRIPT(&(WVFAELA.upb),(VVFAELA_new).upb,1,NVFAELA_old_size)) ;
YVFAELA = (*(&(Df->Free_block_dps))) ;
A_VASSIGN2(YVFAELA,XVFAELA,A68_97 );
} 
 /* line 1388: */
ZVFAELA = (&(Df->Free_block_dps)) ;
(*ZVFAELA) = VVFAELA_new;
 /* line 1389: */
 /* line 1390: */
BWFAELA = (*(&(Df->Free_block_dps))) ;
DWFAELA = A_VTRIM(CWFAELA,(BWFAELA),A_VTSCRIPT(&(CWFAELA.upb),(BWFAELA).upb,(NVFAELA_old_size+1),(BWFAELA).upb)) ;
EWFAELA = DWFAELA.upb -1;
AWFAELA_dp = DWFAELA.data;
for (;EWFAELA-- >= 0;
(AWFAELA_dp++
) )
{
FWFAELA_n_ints = IYDAELA_min(SICAELA_max_ints_in_block, (Freelist.upb-LVFAELA_count));
 /* line 1391: */
GWFAELA_lwb = (LVFAELA_count+1);
 /* line 1392: */
 /* line 1393: */
MTFAELA_write_freelist( Db, Df, A_VTRIM(HWFAELA,(Freelist),A_VTSCRIPT(&(HWFAELA.upb),(Freelist).upb,GWFAELA_lwb,(LVFAELA_count+=FWFAELA_n_ints))), &IWFAELA );
(*AWFAELA_dp) = IWFAELA;
}
 /* line 1394: */
} 
A_PROC_EXIT(freelist_to_disc);
return;
} 
#undef NL
 /* line 1397: */

A_STATIC A68_VOID  OWFAELA_overwrite_blocks(A68_109 * Db, A68_100 * Df, A68_INT  Block, A68_VC  Data, A68_97  Dp)
{ 
A68_INT  PWFAELA_upper;
A68_99  UWFAELA;  /* avoid structure result */
A68_99  VWFAELA_addr;
A68_92  WWFAELA;  /* procedure value */
A68_INT * XWFAELA;  /* YIELD */
A_PROC_ENTRY(overwrite_blocks);
 /* line 1398: */
{ 
TEEAELA_check_valid_db(Db);
 /* line 1399: */
PEEAELA_check_nilfile(Df);
 /* line 1400: */
EVEAELA_check_file_writeable(Db, Df);
 /* line 1401: */
PWFAELA_upper = Data.upb;
 /* line 1402: */
 /* line 1403: */
if ( (PWFAELA_upper>(SYBAELA_data_elts(Dp)-((Block-1)*SNBAELA_block_size))) )
{ 
QNBAELA_keepsake_fault(RWFAELA);
} 
 /* line 1404: */
 /* line 1405: */
if ( (PWFAELA_upper>(VNBAELA_max_buffer_size*SNBAELA_block_size)) )
{ 
 /* line 1406: */
QNBAELA_keepsake_fault(TWFAELA);
} 
 /* line 1407: */
IHEAELA_get_disc_address( Df, Dp, &UWFAELA );
VWFAELA_addr = UWFAELA;
 /* line 1408: */
 /* line 1409: */
if ( (PWFAELA_upper>0) )
{ 
WWFAELA.fn.fn_global = GNBAELA_keepsake_msg;
WWFAELA.nonlocals = A68_NIL;
UOBAELA_put_block((*(*(&(Df->File)))), Data, VWFAELA_addr.Block_num, WWFAELA);
} 
 /* line 1410: */
 /* line 1411: */
XWFAELA = (*(&(Df->Write_transfers))) ;
(*XWFAELA)+=1;
} 
A_PROC_EXIT(overwrite_blocks);
return;
} 
#undef NL
 /* line 1414: */

A68_VOID  CXFAELA_overwrite(A68_109 * Db, A68_INT  Block, A68_VC  Data, A68_97  Dp)
{ 
A_PROC_ENTRY(overwrite);
 /* line 1415: */
OWFAELA_overwrite_blocks(Db, (*(&(Db->Df))), Block, Data, Dp);
A_PROC_EXIT(overwrite);
return;
} 
#undef NL
 /* line 1418: */

A_STATIC A68_INT  JXFAELA_overwrite_test(A68_109 * Db, A68_100 * Df, A68_INT  Blocks, A68_INT * Block_ptr, A68_INT * Freelist_index, A68_INT * Free_space)
{ 
A68_INT  KXFAELA_result;
A68_INT  MXFAELA_size_of_free_space;
A68_101  NXFAELA_free_block_dps;
A68_33  PXFAELA_generator;   /* proc value of non-global proc */
A68_32  VXFAELA;  /* avoid structure result */
A68_32  WXFAELA;  /* OPERATORS - assign op */
A68_32  UXFAELA_freelist;
A68_262  XXFAELA_read_next_free;   /* proc value of non-global proc */
A68_INT  XYFAELA_current_free;
A68_BOOL  YYFAELA_continue;
A68_INT  ZYFAELA_first;
A68_INT  AZFAELA_i;
A68_INT  BZFAELA;  /* to part of loop */
A68_INT  CZFAELA_next;
A68_BOOL  DZFAELA;  /* optbool result */
A68_BOOL  EZFAELA;  /* clause result */
A68_INT  FZFAELA;  /* clause result */
A_PROC_ENTRY(overwrite_test);
 /* line 1425: */
{ 
KXFAELA_result = 0;
 /* line 1426: */
TEEAELA_check_valid_db(Db);
 /* line 1427: */
PEEAELA_check_nilfile(Df);
 /* line 1428: */
EVEAELA_check_file_writeable(Db, Df);
 /* line 1429: */
 /* line 1430: */
MXFAELA_size_of_free_space = (*(*(&(Df->Size_of_free_space))));
 /* line 1431: */
(*Block_ptr) = (*(*(&(Df->Freeblock_ptr))));
 /* line 1432: */
(*Freelist_index) = (*(*(&(Df->Freelist_index))));
 /* line 1433: */
(*Free_space) = (*(*(&(Df->Size_of_free_space))));
 /* line 1434: */
NXFAELA_free_block_dps = (*(&(Df->Free_block_dps)));
 /* line 1435: */
A_CLOSURE( PXFAELA_generator, QXFAELA_generator, RXFAELA_generator );
(( RXFAELA_generator * ) ( PXFAELA_generator.nonlocals )) -> Df = Df;
A_CALLPROC(PXFAELA_generator,(A68_FALSE, &VXFAELA),(A68_FALSE, &VXFAELA,(PXFAELA_generator).nonlocals));
WXFAELA = (*(&(Df->Freelist))) ;
A_VASSIGN2(WXFAELA,VXFAELA,A68_INT ) ;
UXFAELA_freelist = VXFAELA;
 /* line 1438: */
 /* line 1439: */
A_CLOSURE( XXFAELA_read_next_free, YXFAELA_read_next_free, ZXFAELA_read_next_free );
(( ZXFAELA_read_next_free * ) ( XXFAELA_read_next_free.nonlocals )) -> Free_space = Free_space;
(( ZXFAELA_read_next_free * ) ( XXFAELA_read_next_free.nonlocals )) -> Freelist_index = Freelist_index;
(( ZXFAELA_read_next_free * ) ( XXFAELA_read_next_free.nonlocals )) -> UXFAELA_freelist = (&UXFAELA_freelist);
(( ZXFAELA_read_next_free * ) ( XXFAELA_read_next_free.nonlocals )) -> Block_ptr = Block_ptr;
(( ZXFAELA_read_next_free * ) ( XXFAELA_read_next_free.nonlocals )) -> NXFAELA_free_block_dps = NXFAELA_free_block_dps;
(( ZXFAELA_read_next_free * ) ( XXFAELA_read_next_free.nonlocals )) -> Df = Df;
(( ZXFAELA_read_next_free * ) ( XXFAELA_read_next_free.nonlocals )) -> Db = Db;
 /* line 1460: */
XYFAELA_current_free = A_CALLPROC(XXFAELA_read_next_free,(),((XXFAELA_read_next_free).nonlocals));
 /* line 1461: */
YYFAELA_continue = (XYFAELA_current_free!=0);
 /* line 1462: */
if ( (Blocks>MXFAELA_size_of_free_space) )
{ 
YYFAELA_continue = A68_FALSE;
} 
 /* line 1464: */
for ( ;; )
{ 
 /* line 1465: */
if ( !(YYFAELA_continue) ) break;
ZYFAELA_first = XYFAELA_current_free;
 /* line 1466: */
 /* line 1467: */
BZFAELA = (Blocks-1);
for ( AZFAELA_i = 1;
AZFAELA_i <= BZFAELA;
AZFAELA_i += 1 )
{ 
CZFAELA_next = A_CALLPROC(XXFAELA_read_next_free,(),((XXFAELA_read_next_free).nonlocals));
 /* line 1468: */
YYFAELA_continue = (CZFAELA_next!=0);
 /* line 1469: */
 /* line 1470: */
DZFAELA = (CZFAELA_next==(XYFAELA_current_free-=1));
if ( DZFAELA )
{DZFAELA = YYFAELA_continue;
}
EZFAELA = DZFAELA;
if ( !EZFAELA ) break;
if ( (AZFAELA_i==(Blocks-1)) )
{ 
YYFAELA_continue = A68_FALSE;
 /* line 1471: */
KXFAELA_result = CZFAELA_next;
} 
}
 /* line 1472: */
}
 /* line 1473: */
 /* line 1474: */
FZFAELA = KXFAELA_result;
} 
A_PROC_EXIT(overwrite_test);
return( FZFAELA );
} 
#undef NL

A68_BOOL  IZFAELA_can_overwrite(A68_109 * Db, A68_INT  Blocks)
{ 
A68_INT  JZFAELA_dummy1;
A68_INT  KZFAELA_dummy2;
A68_INT  LZFAELA_dummy3;
A68_BOOL  MZFAELA;  /* clause result */
A_PROC_ENTRY(can_overwrite);
 /* line 1477: */
{ 
 /* line 1478: */
 /* line 1479: */
MZFAELA = (JXFAELA_overwrite_test(Db, (*(&(Db->Df))), Blocks, (&JZFAELA_dummy1), (&KZFAELA_dummy2), (&LZFAELA_dummy3))!=0);
} 
A_PROC_EXIT(can_overwrite);
return( MZFAELA );
} 
#undef NL
 /* line 1482: */

A_STATIC A68_VOID  SZFAELA_mk_overwrite(A68_109 * Db, A68_100 * Df, A68_INT  Blocks, A68_INT  Indirection, A68_BOOL  Assignable, A68_97  *ReturnedValue)
{ 
A68_INT * VZFAELA_current_free;
A68_INT * WZFAELA_last_free;
A68_INT * XZFAELA_cbufpos;
A68_INT * YZFAELA_freeblock_ptr;
A68_INT * ZZFAELA_freelist_index;
A68_INT * AAGAELA_free_space;
A68_INT  BAGAELA_first_block;
A68_92  EAGAELA;  /* procedure value */
A68_INT * FAGAELA;  /* YIELD */
A68_INT ** GAGAELA;  /* YIELD */
A68_INT ** HAGAELA;  /* YIELD */
A68_INT ** IAGAELA;  /* YIELD */
A68_99  JAGAELA;  /* collateral clause result */
A68_99  KAGAELA_addr;
A68_INT  LAGAELA_data_elts;
A68_INT  OAGAELA_read_size;
A68_INT  PAGAELA_version;
A68_105  QAGAELA;  /* collateral clause result */
A68_105 * RAGAELA;  /* YIELD */
A68_105 ** SAGAELA;  /* YIELD */
A68_97  TAGAELA;  /* avoid structure result */
A68_97  UAGAELA_new_dp;
A68_97  VAGAELA;  /* clause result */
A_PROC_ENTRY(mk_overwrite);
 /* line 1483: */
{ 
TEEAELA_check_valid_db(Db);
 /* line 1484: */
PEEAELA_check_nilfile(Df);
 /* line 1485: */
LLFAELA_check_not_appending(Df, UZFAELA);
 /* line 1487: */
VZFAELA_current_free = (*(&(Df->Current_free)));
 /* line 1488: */
WZFAELA_last_free = (*(&(Df->Last_free)));
 /* line 1489: */
XZFAELA_cbufpos = (*(&(Df->Cbufpos)));
 /* line 1491: */
YZFAELA_freeblock_ptr = (A_HEAP(A68_INT ));
 /* line 1492: */
ZZFAELA_freelist_index = (A_HEAP(A68_INT ));
 /* line 1493: */
AAGAELA_free_space = (A_HEAP(A68_INT ));
 /* line 1494: */
 /* line 1495: */
BAGAELA_first_block = JXFAELA_overwrite_test(Db, Df, Blocks, YZFAELA_freeblock_ptr, ZZFAELA_freelist_index, AAGAELA_free_space);
 /* line 1496: */
if ( (BAGAELA_first_block==0) )
{ 
 /* line 1497: */
QNBAELA_keepsake_fault(DAGAELA);
} 
 /* line 1499: */
KJFAELA_flush_buffer(Db, Df);
 /* line 1500: */
 /* line 1501: */
if ( ((*(*(&(Df->Cbufpos))))>0) )
{ 
 /* line 1502: */
EAGAELA.fn.fn_global = GNBAELA_keepsake_msg;
EAGAELA.nonlocals = A68_NIL;
UOBAELA_put_block((*(*(&(Df->File)))), (*(&(Df->Block_buffer))), (*VZFAELA_current_free), EAGAELA);
 /* line 1503: */
FAGAELA = (*(&(Df->Write_transfers))) ;
(*FAGAELA)+=1;
 /* line 1504: */
MQBAELA_clear_rvc((*(&(Df->Block_buffer))));
 /* line 1505: */
 /* line 1506: */
(*XZFAELA_cbufpos) = 0;
} 
 /* line 1507: */
GAGAELA = (&(Df->Size_of_free_space)) ;
(*GAGAELA) = AAGAELA_free_space;
 /* line 1508: */
HAGAELA = (&(Df->Freeblock_ptr)) ;
(*HAGAELA) = YZFAELA_freeblock_ptr;
 /* line 1509: */
IAGAELA = (&(Df->Freelist_index)) ;
(*IAGAELA) = ZZFAELA_freelist_index;
 /* line 1510: */
(*VZFAELA_current_free) = BAGAELA_first_block;
 /* line 1511: */
(*WZFAELA_last_free) = 0;
 /* line 1513: */
JAGAELA.Block_num = BAGAELA_first_block;
JAGAELA.Offset = 1;
KAGAELA_addr = JAGAELA;
 /* line 1514: */
LAGAELA_data_elts = (Blocks*SNBAELA_block_size);
 /* line 1515: */
 /* line 1516: */
 /* line 1517: */
OAGAELA_read_size = IYDAELA_min(VNBAELA_max_buffer_size, Blocks);
 /* line 1519: */
PAGAELA_version = 1;
 /* line 1520: */
 /* line 1521: */
if ( Assignable )
{ 
 /* line 1522: */
PAGAELA_version = ULEAELA_create_indir(Df, (&KAGAELA_addr), EYDAELA_not_shaky, LAGAELA_data_elts, MAGAELA_dp_elts, NAGAELA_data_code, OAGAELA_read_size, Indirection);
 /* line 1523: */
 /* line 1524: */
QAGAELA.Indirection = (*(&((&KAGAELA_addr)->Block_num)));
 /* line 1525: */
QAGAELA.Rest = (*(&(Df->Instore_vars)));
RAGAELA = A_HEAP(A68_105 ) ;
(*RAGAELA) = QAGAELA ;
SAGAELA = (&(Df->Instore_vars)) ;
(*SAGAELA) = RAGAELA;
} 
 /* line 1527: */
 /* line 1528: */
ZTBAELA_make_dp( EYDAELA_not_shaky, Assignable, NAGAELA_data_code, LAGAELA_data_elts, MAGAELA_dp_elts, PAGAELA_version, OAGAELA_read_size, KAGAELA_addr, &TAGAELA );
UAGAELA_new_dp = TAGAELA;
 /* line 1529: */
 /* line 1530: */
VAGAELA = UAGAELA_new_dp;
} 
A_PROC_EXIT(mk_overwrite);
*ReturnedValue = (VAGAELA);
return;
} 
#undef NL

A68_VOID  ZAGAELA_make_overwriteable(A68_109 * Db, A68_INT  Blocks, A68_BOOL  Assignable, A68_97  *ReturnedValue)
{ 
A68_97  ABGAELA;  /* clause result */
A68_97  BBGAELA;  /* avoid structure result */
A_PROC_ENTRY(make_overwriteable);
 /* line 1534: */
SZFAELA_mk_overwrite( Db, (*(&(Db->Df))), Blocks, FYDAELA_no_indirection, Assignable, &BBGAELA );
ABGAELA = BBGAELA;
A_PROC_EXIT(make_overwriteable);
*ReturnedValue = (ABGAELA);
return;
} 
#undef NL
 /* line 1537: */

A_STATIC A68_VOID  GBGAELA_discfile_increase(A68_109 * Db, A68_100 * Df, A68_INT  By, A68_92  Msg)
{ 
A68_INT  HBGAELA_actual_by;
A68_INT * IBGAELA_size_of_free_space;
A68_INT * JBGAELA_file_size;
A68_INT * KBGAELA_old_file_size;
A68_32 * LBGAELA_freelist;
A68_101 * MBGAELA_free_block_dps;
A68_INT  NBGAELA_old_size;
A68_INT  SBGAELA_size;
A68_VC  TBGAELA;  /* OPERATORS - istruct -> vector */
A68_92  UBGAELA;  /* procedure value */
A68_INT * VBGAELA;  /* YIELD */
A68_33  XBGAELA_generator;   /* proc value of non-global proc */
A68_32  CCGAELA;  /* avoid structure result */
A68_32 * DCGAELA;  /* YIELD */
A68_INT  ECGAELA_i;
A68_INT  FCGAELA;  /* to part of loop */
A68_32  GCGAELA;  /* OPERATORS - simple index */
A68_INT * HCGAELA;  /* YIELD */
A68_32  ICGAELA_temp;
A68_INT  JCGAELA_upb_temp;
A68_33  LCGAELA_generator;   /* proc value of non-global proc */
A68_32  QCGAELA;  /* avoid structure result */
A68_32 * RCGAELA;  /* YIELD */
A68_32  SCGAELA;  /* OPERATORS - trim index */
A68_32  TCGAELA;  /* OPERATORS - trim index */
A68_32  UCGAELA;  /* YIELD */
A68_INT  VCGAELA_i;
A68_INT  WCGAELA;  /* to part of loop */
A68_32  XCGAELA;  /* OPERATORS - simple index */
A68_INT  YCGAELA;  /* YIELD */
A68_INT * ZCGAELA;  /* YIELD */
A68_33  BDGAELA_generator;   /* proc value of non-global proc */
A68_32  GDGAELA;  /* avoid structure result */
A68_32 * HDGAELA;  /* YIELD */
A68_INT  IDGAELA_i;
A68_INT  JDGAELA;  /* to part of loop */
A68_32  KDGAELA;  /* OPERATORS - simple index */
A68_INT * LDGAELA;  /* YIELD */
A68_32  MDGAELA;  /* OPERATORS - simple index */
A68_INT * NDGAELA;  /* YIELD */
A68_32  ODGAELA_temp;
A68_INT  PDGAELA_upb_temp;
A68_33  RDGAELA_generator;   /* proc value of non-global proc */
A68_32  WDGAELA;  /* avoid structure result */
A68_32 * XDGAELA;  /* YIELD */
A68_32  YDGAELA;  /* OPERATORS - trim index */
A68_32  ZDGAELA;  /* OPERATORS - trim index */
A68_32  AEGAELA;  /* YIELD */
A68_INT  BEGAELA_i;
A68_INT  CEGAELA;  /* to part of loop */
A68_32  DEGAELA;  /* OPERATORS - simple index */
A68_INT * EEGAELA;  /* YIELD */
A68_32  FEGAELA;  /* OPERATORS - simple index */
A68_INT  GEGAELA;  /* YIELD */
A68_INT * HEGAELA;  /* YIELD */
A68_INT * IEGAELA;  /* YIELD */
A_PROC_ENTRY(discfile_increase);
 /* line 1541: */
{ 
TEEAELA_check_valid_db(Db);
 /* line 1542: */
HBGAELA_actual_by = ((((By+1)*WNBAELA_increase_increment)-1)/SNBAELA_block_size);
 /* line 1543: */
PEEAELA_check_nilfile(Df);
 /* line 1544: */
IBGAELA_size_of_free_space = (*(&(Df->Size_of_free_space)));
 /* line 1545: */
JBGAELA_file_size = (*(&(Df->File_size)));
 /* line 1546: */
KBGAELA_old_file_size = (*(&(Df->Old_file_size)));
 /* line 1547: */
LBGAELA_freelist = (&(Df->Freelist));
 /* line 1548: */
MBGAELA_free_block_dps = (&(Df->Free_block_dps));
 /* line 1549: */
NBGAELA_old_size = (*(*(&(Df->File_size))));
 /* line 1550: */
 /* line 1551: */
if ( (((*(*(&(Df->File_size))))+HBGAELA_actual_by)>OSBAELA_max_file_size) )
{ 
 /* line 1552: */
QNBAELA_keepsake_fault(PBGAELA);
} 
else
{ 
 /* line 1553: */
if ( (By<0) )
{ 
 /* line 1554: */
QNBAELA_keepsake_fault(RBGAELA);
} 
} 
 /* line 1555: */
 /* line 1556: */
SBGAELA_size = (HPBAELA_increase_db_file((*(*(&(Df->File)))), (HBGAELA_actual_by*SNBAELA_block_size), Msg)/SNBAELA_block_size);
 /* line 1557: */
(*JBGAELA_file_size) = SBGAELA_size;
 /* line 1558: */
UBGAELA.fn.fn_global = GNBAELA_keepsake_msg;
UBGAELA.nonlocals = A68_NIL;
UOBAELA_put_block((*(*(&(Df->File)))), A_HISVEC(TBGAELA,ZNBAELA_end_file_block,512,A68_CHAR ), (*JBGAELA_file_size), UBGAELA);
 /* line 1559: */
VBGAELA = (*(&(Df->Write_transfers))) ;
(*VBGAELA)+=1;
 /* line 1560: */
 /* line 1561: */
if ( ((*(&(Df->Freelist_ext))).upb==0) )
{ 
A_CLOSURE( XBGAELA_generator, YBGAELA_generator, ZBGAELA_generator );
(( ZBGAELA_generator * ) ( XBGAELA_generator.nonlocals )) -> HBGAELA_actual_by = HBGAELA_actual_by;
A_CALLPROC(XBGAELA_generator,(A68_FALSE, &CCGAELA),(A68_FALSE, &CCGAELA,(XBGAELA_generator).nonlocals));
DCGAELA = (&(Df->Freelist_ext)) ;
(*DCGAELA) = CCGAELA;
 /* line 1562: */
 /* line 1563: */
FCGAELA = HBGAELA_actual_by;
for ( ECGAELA_i = 1;
ECGAELA_i <= FCGAELA;
ECGAELA_i += 1 )
{ 
 /* line 1564: */
GCGAELA = (*(&(Df->Freelist_ext))) ;
HCGAELA = (&A_VINDEX(GCGAELA,ECGAELA_i)) ;
(*HCGAELA) = (((NBGAELA_old_size+HBGAELA_actual_by)+1)-ECGAELA_i);
}
 /* line 1565: */
} 
else
{ 
ICGAELA_temp = (*(&(Df->Freelist_ext)));
 /* line 1566: */
JCGAELA_upb_temp = ICGAELA_temp.upb;
 /* line 1567: */
A_CLOSURE( LCGAELA_generator, MCGAELA_generator, NCGAELA_generator );
(( NCGAELA_generator * ) ( LCGAELA_generator.nonlocals )) -> JCGAELA_upb_temp = JCGAELA_upb_temp;
(( NCGAELA_generator * ) ( LCGAELA_generator.nonlocals )) -> HBGAELA_actual_by = HBGAELA_actual_by;
A_CALLPROC(LCGAELA_generator,(A68_FALSE, &QCGAELA),(A68_FALSE, &QCGAELA,(LCGAELA_generator).nonlocals));
RCGAELA = (&(Df->Freelist_ext)) ;
(*RCGAELA) = QCGAELA;
 /* line 1568: */
SCGAELA = (*(&(Df->Freelist_ext))) ;
UCGAELA = A_VTRIM(TCGAELA,(SCGAELA),A_VTSCRIPT(&(TCGAELA.upb),(SCGAELA).upb,1,JCGAELA_upb_temp)) ;
A_VASSIGN2(ICGAELA_temp,UCGAELA,A68_INT );
 /* line 1569: */
 /* line 1570: */
WCGAELA = HBGAELA_actual_by;
for ( VCGAELA_i = 1;
VCGAELA_i <= WCGAELA;
VCGAELA_i += 1 )
{ 
 /* line 1571: */
 /* line 1572: */
XCGAELA = (*(&(Df->Freelist_ext))) ;
YCGAELA = (JCGAELA_upb_temp+VCGAELA_i) ;
ZCGAELA = (&A_VINDEX(XCGAELA,YCGAELA)) ;
(*ZCGAELA) = (((NBGAELA_old_size+HBGAELA_actual_by)+1)-VCGAELA_i);
}
 /* line 1573: */
} 
 /* line 1574: */
 /* line 1575: */
if ( ((*(&(Df->Pagetable_ext))).upb==0) )
{ 
A_CLOSURE( BDGAELA_generator, CDGAELA_generator, DDGAELA_generator );
(( DDGAELA_generator * ) ( BDGAELA_generator.nonlocals )) -> HBGAELA_actual_by = HBGAELA_actual_by;
A_CALLPROC(BDGAELA_generator,(A68_FALSE, &GDGAELA),(A68_FALSE, &GDGAELA,(BDGAELA_generator).nonlocals));
HDGAELA = (&(Df->Pagetable_ext)) ;
(*HDGAELA) = GDGAELA;
 /* line 1576: */
 /* line 1577: */
JDGAELA = (HBGAELA_actual_by-1);
for ( IDGAELA_i = 1;
IDGAELA_i <= JDGAELA;
IDGAELA_i += 1 )
{ 
 /* line 1578: */
KDGAELA = (*(&(Df->Pagetable_ext))) ;
LDGAELA = (&A_VINDEX(KDGAELA,IDGAELA_i)) ;
(*LDGAELA) = (-((NBGAELA_old_size+1)+IDGAELA_i));
}
 /* line 1579: */
 /* line 1580: */
MDGAELA = (*(&(Df->Pagetable_ext))) ;
NDGAELA = (&A_VINDEX(MDGAELA,HBGAELA_actual_by)) ;
(*NDGAELA) = (-((*KBGAELA_old_file_size)+1));
} 
else
{ 
ODGAELA_temp = (*(&(Df->Pagetable_ext)));
 /* line 1581: */
PDGAELA_upb_temp = ODGAELA_temp.upb;
 /* line 1582: */
A_CLOSURE( RDGAELA_generator, SDGAELA_generator, TDGAELA_generator );
(( TDGAELA_generator * ) ( RDGAELA_generator.nonlocals )) -> PDGAELA_upb_temp = PDGAELA_upb_temp;
(( TDGAELA_generator * ) ( RDGAELA_generator.nonlocals )) -> HBGAELA_actual_by = HBGAELA_actual_by;
A_CALLPROC(RDGAELA_generator,(A68_FALSE, &WDGAELA),(A68_FALSE, &WDGAELA,(RDGAELA_generator).nonlocals));
XDGAELA = (&(Df->Pagetable_ext)) ;
(*XDGAELA) = WDGAELA;
 /* line 1583: */
YDGAELA = (*(&(Df->Pagetable_ext))) ;
AEGAELA = A_VTRIM(ZDGAELA,(YDGAELA),A_VTSCRIPT(&(ZDGAELA.upb),(YDGAELA).upb,1,PDGAELA_upb_temp)) ;
A_VASSIGN2(ODGAELA_temp,AEGAELA,A68_INT );
 /* line 1584: */
 /* line 1585: */
CEGAELA = ((PDGAELA_upb_temp+HBGAELA_actual_by)-1);
for ( BEGAELA_i = (PDGAELA_upb_temp+1);
BEGAELA_i <= CEGAELA;
BEGAELA_i += 1 )
{ 
 /* line 1586: */
DEGAELA = (*(&(Df->Pagetable_ext))) ;
EEGAELA = (&A_VINDEX(DEGAELA,BEGAELA_i)) ;
(*EEGAELA) = (-(((NBGAELA_old_size-PDGAELA_upb_temp)+1)+BEGAELA_i));
}
 /* line 1587: */
 /* line 1588: */
FEGAELA = (*(&(Df->Pagetable_ext))) ;
GEGAELA = (PDGAELA_upb_temp+HBGAELA_actual_by) ;
HEGAELA = (&A_VINDEX(FEGAELA,GEGAELA)) ;
(*HEGAELA) = (-((*KBGAELA_old_file_size)+1));
} 
 /* line 1589: */
(*KBGAELA_old_file_size) = NBGAELA_old_size;
 /* line 1590: */
 /* line 1591: */
IEGAELA = (*(&(Df->Size_of_free_space))) ;
(*IEGAELA)+=HBGAELA_actual_by;
} 
A_PROC_EXIT(discfile_increase);
return;
} 
#undef NL

A68_VOID  MEGAELA_increase(A68_109 * Db, A68_INT  By, A68_92  Msg)
{ 
A_PROC_ENTRY(increase);
 /* line 1594: */
GBGAELA_discfile_increase(Db, (*(&(Db->Df))), By, Msg);
A_PROC_EXIT(increase);
return;
} 
#undef NL

A68_BOOL  PEGAELA_can_increase(A68_109 * Db, A68_INT  By)
{ 
A68_BOOL  QEGAELA;  /* optbool result */
A68_BOOL  REGAELA;  /* clause result */
A_PROC_ENTRY(can_increase);
 /* line 1597: */
 /* line 1598: */
QEGAELA = (((*(*(&((*(&(Db->Df)))->File_size))))+(By*WNBAELA_increase_increment))<=(OSBAELA_max_file_size*SNBAELA_block_size));
if ( QEGAELA )
{QEGAELA = (By>=0);
}
REGAELA = QEGAELA;
A_PROC_EXIT(can_increase);
return( REGAELA );
} 
#undef NL

A_STATIC A68_VOID  TEGAELA_test_and_increase(A68_109 * Db)
{ 
A68_100 * UEGAELA_df;
A68_INT * VEGAELA_size;
A68_INT * WEGAELA_old_file_size;
A68_INT  XEGAELA_actual_size;
A68_INT  YEGAELA_size_diff;
A68_33  AFGAELA_generator;   /* proc value of non-global proc */
A68_32  GFGAELA;  /* avoid structure result */
A68_32  FFGAELA_freelist_ext;
A68_INT  HFGAELA_i;
A68_INT  IFGAELA;  /* to part of loop */
A68_INT * JFGAELA;  /* YIELD */
A68_33  LFGAELA_generator;   /* proc value of non-global proc */
A68_32  RFGAELA;  /* avoid structure result */
A68_32  QFGAELA_pagetable;
A68_INT  SFGAELA_i;
A68_INT  TFGAELA;  /* to part of loop */
A68_INT * UFGAELA;  /* YIELD */
A68_INT * VFGAELA;  /* YIELD */
A68_243  WFGAELA;  /* OPERATORS - mode -> union mode */
A68_97  XFGAELA;  /* avoid structure result */
A68_97  YFGAELA_new_dp;
A68_INT * ZFGAELA;  /* YIELD */
A_PROC_ENTRY(test_and_increase);
 /* line 1608: */
{ 
UEGAELA_df = (*(&(Db->Df)));
 /* line 1609: */
VEGAELA_size = (*(&(UEGAELA_df->File_size)));
 /* line 1610: */
WEGAELA_old_file_size = (*(&(UEGAELA_df->Old_file_size)));
 /* line 1611: */
XEGAELA_actual_size = ZOBAELA_file_block_size((*(*(&(UEGAELA_df->File)))));
 /* line 1612: */
YEGAELA_size_diff = (XEGAELA_actual_size-(*VEGAELA_size));
 /* line 1613: */
 /* line 1614: */
if ( (YEGAELA_size_diff>0) )
{ 
A_CLOSURE( AFGAELA_generator, BFGAELA_generator, CFGAELA_generator );
(( CFGAELA_generator * ) ( AFGAELA_generator.nonlocals )) -> YEGAELA_size_diff = YEGAELA_size_diff;
A_CALLPROC(AFGAELA_generator,(A68_TRUE, &GFGAELA),(A68_TRUE, &GFGAELA,(AFGAELA_generator).nonlocals));
FFGAELA_freelist_ext = GFGAELA;
 /* line 1615: */
 /* line 1616: */
IFGAELA = YEGAELA_size_diff;
for ( HFGAELA_i = 1;
HFGAELA_i <= IFGAELA;
HFGAELA_i += 1 )
{ 
 /* line 1617: */
JFGAELA = (&A_VINDEX(FFGAELA_freelist_ext,HFGAELA_i)) ;
(*JFGAELA) = ((XEGAELA_actual_size+1)-HFGAELA_i);
}
 /* line 1618: */
KVFAELA_freelist_to_disc(Db, UEGAELA_df, FFGAELA_freelist_ext);
 /* line 1619: */
A_CLOSURE( LFGAELA_generator, MFGAELA_generator, NFGAELA_generator );
(( NFGAELA_generator * ) ( LFGAELA_generator.nonlocals )) -> YEGAELA_size_diff = YEGAELA_size_diff;
A_CALLPROC(LFGAELA_generator,(A68_TRUE, &RFGAELA),(A68_TRUE, &RFGAELA,(LFGAELA_generator).nonlocals));
QFGAELA_pagetable = RFGAELA;
 /* line 1620: */
 /* line 1621: */
TFGAELA = (YEGAELA_size_diff-1);
for ( SFGAELA_i = 1;
SFGAELA_i <= TFGAELA;
SFGAELA_i += 1 )
{ 
 /* line 1622: */
UFGAELA = (&A_VINDEX(QFGAELA_pagetable,SFGAELA_i)) ;
(*UFGAELA) = (((-(*VEGAELA_size))+1)+SFGAELA_i);
}
 /* line 1623: */
VFGAELA = (&A_VINDEX(QFGAELA_pagetable,YEGAELA_size_diff)) ;
(*VFGAELA) = (-((*WEGAELA_old_file_size)+1));
 /* line 1624: */
 /* line 1625: */
 /* line 1626: */
 /* line 1627: */
CNFAELA_write( Db, (*(&(Db->Df))), A_UNITE(WFGAELA,mode2,2,QFGAELA_pagetable), PVDAELA_nodps, DXDAELA_pagetable_ints, (QFGAELA_pagetable.upb*EDAAOST_int_size), FYDAELA_no_indirection, CYDAELA_not_assignable, LACAELA_niladdress, VVDAELA_noints, DVDAELA_nilpagetable, &XFGAELA );
YFGAELA_new_dp = XFGAELA;
 /* line 1628: */
THFAELA_extend_dps((&(UEGAELA_df->Pagetable_dps)), YFGAELA_new_dp);
 /* line 1629: */
(*WEGAELA_old_file_size) = (*VEGAELA_size);
 /* line 1630: */
(*VEGAELA_size) = XEGAELA_actual_size;
 /* line 1631: */
 /* line 1632: */
 /* line 1633: */
ZFGAELA = (*(&(UEGAELA_df->Size_of_free_space))) ;
(*ZFGAELA)+=YEGAELA_size_diff;
} 
} 
A_PROC_EXIT(test_and_increase);
return;
} 
#undef NL

A68_BOOL  BGGAELA_can_finish(A68_109 * Db)
{ 
A68_100 * YGGAELA_df;
A68_INT  ZGGAELA_bytes_left;
A68_106  AHGAELA_indirs;
A68_INT  BHGAELA_indirs_in_fixed;
A68_INT  CHGAELA_cbufpos;
A68_31  EHGAELA_generator;   /* proc value of non-global proc */
A68_VC  KHGAELA;  /* avoid structure result */
A68_VC  JHGAELA_ind_chars;
A68_INT  LHGAELA;  /* clause result */
A68_111  MHGAELA;  /* OPERATORS - mode -> union mode */
A68_INT  NHGAELA_num_blocks;
A68_BOOL  PHGAELA;  /* clause result */
A_PROC_ENTRY(can_finish);
 /* line 1636: */
 /* line 1638: */
{ 
 /* line 1648: */
TEEAELA_check_valid_db(Db);
 /* line 1649: */
YGGAELA_df = (*(&(Db->Df)));
 /* line 1650: */
PEEAELA_check_nilfile(YGGAELA_df);
 /* line 1651: */
ZGGAELA_bytes_left = (SNBAELA_block_size-TICAELA_fixed_in_block);
 /* line 1652: */
AHGAELA_indirs = (*(&(YGGAELA_df->Indirections)));
 /* line 1653: */
BHGAELA_indirs_in_fixed = IYDAELA_min((ZGGAELA_bytes_left/ABCAELA_indirection_size), AHGAELA_indirs.upb);
 /* line 1654: */
CHGAELA_cbufpos = (*(*(&(YGGAELA_df->Cbufpos))));
 /* line 1655: */
A_CLOSURE( EHGAELA_generator, FHGAELA_generator, GHGAELA_generator );
(( GHGAELA_generator * ) ( EHGAELA_generator.nonlocals )) -> AHGAELA_indirs = AHGAELA_indirs;
(( GHGAELA_generator * ) ( EHGAELA_generator.nonlocals )) -> BHGAELA_indirs_in_fixed = BHGAELA_indirs_in_fixed;
A_CALLPROC(EHGAELA_generator,(A68_TRUE, &KHGAELA),(A68_TRUE, &KHGAELA,(EHGAELA_generator).nonlocals));
JHGAELA_ind_chars = KHGAELA;
 /* line 1656: */
if ( (AHGAELA_indirs.upb==0) )
{ 
 /* line 1657: */
LHGAELA = 0;
} 
else
{ 
LHGAELA = TGFAELA_no_of_blocks(Db, (&CHGAELA_cbufpos), A_UNITE(MHGAELA,mode2,2,JHGAELA_ind_chars));
} 
NHGAELA_num_blocks = LHGAELA;
 /* line 1658: */
 /* line 1659: */
 /* line 1660: */
NHGAELA_num_blocks+=HGGAELA_block_write(Db, (&CHGAELA_cbufpos), OHGAELA_freelist, (*(&(YGGAELA_df->Freelist_ext))));
 /* line 1661: */
 /* line 1662: */
NHGAELA_num_blocks+=HGGAELA_block_write(Db, (&CHGAELA_cbufpos), !OHGAELA_freelist, (*(&(YGGAELA_df->Pagetable_ext))));
 /* line 1663: */
 /* line 1664: */
PHGAELA = ((NHGAELA_num_blocks+1)<(*(*(&(YGGAELA_df->Size_of_free_space)))));
} 
A_PROC_EXIT(can_finish);
return( PHGAELA );
} 
#undef NL

A68_BOOL  RHGAELA_can_commit(A68_109 * Db)
{ 
A68_BOOL  SHGAELA;  /* clause result */
A_PROC_ENTRY(can_commit);
 /* line 1667: */
{ 
TEEAELA_check_valid_db(Db);
 /* line 1668: */
 /* line 1669: */
SHGAELA = BGGAELA_can_finish(Db);
} 
A_PROC_EXIT(can_commit);
return( SHGAELA );
} 
#undef NL

A_STATIC A68_VOID  VHGAELA_initialise(A68_109 * Db, A68_100 * Df)
{ 
A68_INT  WHGAELA_freelist_size;
A68_33  YHGAELA_generator;   /* proc value of non-global proc */
A68_32  EIGAELA;  /* avoid structure result */
A68_32  DIGAELA_new_freelist;
A68_INT  FIGAELA_i;
A68_INT  GIGAELA;  /* to part of loop */
A68_INT * HIGAELA;  /* YIELD */
A68_INT  IIGAELA_size;
A68_33  KIGAELA_generator;   /* proc value of non-global proc */
A68_32  PIGAELA;  /* avoid structure result */
A68_32  QIGAELA;  /* OPERATORS - trim index */
A68_32  RIGAELA;  /* OPERATORS - assign op */
A68_32 * SIGAELA;  /* YIELD */
A68_INT * TIGAELA;  /* YIELD */
A68_INT ** UIGAELA;  /* YIELD */
A68_INT * VIGAELA;  /* YIELD */
A68_INT ** WIGAELA;  /* YIELD */
A68_154  YIGAELA_generator;   /* proc value of non-global proc */
A68_101  DJGAELA;  /* avoid structure result */
A68_101 * EJGAELA;  /* YIELD */
A68_INT  FJGAELA_file_size;
A68_33  HJGAELA_generator;   /* proc value of non-global proc */
A68_32  NJGAELA;  /* avoid structure result */
A68_32  MJGAELA_pagetable;
A68_INT * OJGAELA;  /* YIELD */
A68_INT  PJGAELA_i;
A68_INT  QJGAELA;  /* to part of loop */
A68_INT * RJGAELA;  /* YIELD */
A68_INT  SJGAELA_i;
A68_INT  TJGAELA;  /* to part of loop */
A68_INT * UJGAELA;  /* YIELD */
A68_INT * VJGAELA;  /* YIELD */
A68_INT ** WJGAELA;  /* YIELD */
A68_154  YJGAELA_generator;   /* proc value of non-global proc */
A68_101  DKGAELA;  /* avoid structure result */
A68_243  EKGAELA;  /* OPERATORS - mode -> union mode */
A68_97  FKGAELA;  /* avoid structure result */
A68_101  GKGAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_101  HKGAELA;  /* OPERATORS - assign op */
A68_101 * IKGAELA;  /* YIELD */
A68_97 * JKGAELA;  /* YIELD */
A68_97 ** KKGAELA;  /* YIELD */
A_PROC_ENTRY(initialise);
 /* line 1672: */
{ 
WHGAELA_freelist_size = ((*(*(&(Df->File_size))))-ANBAELA_fixed_overhead);
 /* line 1673: */
A_CLOSURE( YHGAELA_generator, ZHGAELA_generator, AIGAELA_generator );
(( AIGAELA_generator * ) ( YHGAELA_generator.nonlocals )) -> WHGAELA_freelist_size = WHGAELA_freelist_size;
A_CALLPROC(YHGAELA_generator,(A68_TRUE, &EIGAELA),(A68_TRUE, &EIGAELA,(YHGAELA_generator).nonlocals));
DIGAELA_new_freelist = EIGAELA;
 /* line 1674: */
 /* line 1675: */
GIGAELA = WHGAELA_freelist_size;
for ( FIGAELA_i = 1;
FIGAELA_i <= GIGAELA;
FIGAELA_i += 1 )
{ 
 /* line 1676: */
HIGAELA = (&A_VINDEX(DIGAELA_new_freelist,FIGAELA_i)) ;
(*HIGAELA) = (((*(*(&(Df->File_size))))+1)-FIGAELA_i);
}
 /* line 1677: */
IIGAELA_size = IYDAELA_min(SICAELA_max_ints_in_block, WHGAELA_freelist_size);
 /* line 1678: */
A_CLOSURE( KIGAELA_generator, LIGAELA_generator, MIGAELA_generator );
(( MIGAELA_generator * ) ( KIGAELA_generator.nonlocals )) -> IIGAELA_size = IIGAELA_size;
A_CALLPROC(KIGAELA_generator,(A68_FALSE, &PIGAELA),(A68_FALSE, &PIGAELA,(KIGAELA_generator).nonlocals));
RIGAELA = A_VTRIM(QIGAELA,(DIGAELA_new_freelist),A_VTSCRIPT(&(QIGAELA.upb),(DIGAELA_new_freelist).upb,1,IIGAELA_size)) ;
A_VASSIGN2(RIGAELA,PIGAELA,A68_INT ) ;
SIGAELA = (&(Df->Freelist)) ;
(*SIGAELA) = PIGAELA;
 /* line 1679: */
TIGAELA = A_HEAP(A68_INT ) ;
(*TIGAELA) = 0 ;
UIGAELA = (&(Df->Write_transfers)) ;
(*UIGAELA) = TIGAELA;
 /* line 1680: */
VIGAELA = A_HEAP(A68_INT ) ;
(*VIGAELA) = 0 ;
WIGAELA = (&(Df->Read_transfers)) ;
(*WIGAELA) = VIGAELA;
 /* line 1681: */
A_CLOSURE( YIGAELA_generator, ZIGAELA_generator, AJGAELA_generator );
A_CALLPROC(YIGAELA_generator,(A68_FALSE, &DJGAELA),(A68_FALSE, &DJGAELA,(YIGAELA_generator).nonlocals));
EJGAELA = (&(Df->Free_block_dps)) ;
(*EJGAELA) = DJGAELA;
 /* line 1682: */
KVFAELA_freelist_to_disc(Db, Df, DIGAELA_new_freelist);
 /* line 1683: */
FJGAELA_file_size = (*(*(&(Df->File_size))));
 /* line 1684: */
A_CLOSURE( HJGAELA_generator, IJGAELA_generator, JJGAELA_generator );
(( JJGAELA_generator * ) ( HJGAELA_generator.nonlocals )) -> FJGAELA_file_size = FJGAELA_file_size;
A_CALLPROC(HJGAELA_generator,(A68_TRUE, &NJGAELA),(A68_TRUE, &NJGAELA,(HJGAELA_generator).nonlocals));
MJGAELA_pagetable = NJGAELA;
 /* line 1685: */
OJGAELA = (&A_VINDEX(MJGAELA_pagetable,FJGAELA_file_size)) ;
(*OJGAELA) = (-1);
 /* line 1686: */
 /* line 1687: */
QJGAELA = ANBAELA_fixed_overhead;
for ( PJGAELA_i = 1;
PJGAELA_i <= QJGAELA;
PJGAELA_i += 1 )
{ 
 /* line 1688: */
RJGAELA = (&A_VINDEX(MJGAELA_pagetable,PJGAELA_i)) ;
(*RJGAELA) = 0;
}
 /* line 1689: */
 /* line 1690: */
TJGAELA = (FJGAELA_file_size-1);
for ( SJGAELA_i = (ANBAELA_fixed_overhead+1);
SJGAELA_i <= TJGAELA;
SJGAELA_i += 1 )
{ 
 /* line 1691: */
UJGAELA = (&A_VINDEX(MJGAELA_pagetable,SJGAELA_i)) ;
(*UJGAELA) = (-(SJGAELA_i+1));
}
 /* line 1692: */
VJGAELA = A_HEAP(A68_INT ) ;
(*VJGAELA) = (*(&(Df->Free_block_dps))).upb ;
WJGAELA = (&(Df->Initial_free_block_dps)) ;
(*WJGAELA) = VJGAELA;
 /* line 1693: */
A_CLOSURE( YJGAELA_generator, ZJGAELA_generator, AKGAELA_generator );
 /* line 1695: */
 /* line 1696: */
 /* line 1697: */
A_CALLPROC(YJGAELA_generator,(A68_FALSE, &DKGAELA),(A68_FALSE, &DKGAELA,(YJGAELA_generator).nonlocals));
CNFAELA_write( Db, Df, A_UNITE(EKGAELA,mode2,2,MJGAELA_pagetable), PVDAELA_nodps, DXDAELA_pagetable_ints, (MJGAELA_pagetable.upb*EDAAOST_int_size), FYDAELA_no_indirection, CYDAELA_not_assignable, LACAELA_niladdress, VVDAELA_noints, DVDAELA_nilpagetable, &FKGAELA );
HKGAELA = A_HVEC(GKGAELA,FKGAELA,A68_97 ) ;
A_VASSIGN2(HKGAELA,DKGAELA,A68_97 ) ;
IKGAELA = (&(Df->Pagetable_dps)) ;
(*IKGAELA) = DKGAELA;
 /* line 1698: */
 /* line 1699: */
JKGAELA = A_HEAP(A68_97 ) ;
(*JKGAELA) = UACAELA_nilptr ;
KKGAELA = (&(Df->Indirs_dp)) ;
(*KKGAELA) = JKGAELA;
} 
A_PROC_EXIT(initialise);
return;
} 
#undef NL

A_STATIC A68_VOID  MKGAELA_make_gcnil(A68_98 * Ind)
{ 
A68_INT  NKGAELA_vn;
A68_BITS  OKGAELA;  /* clause result */
A68_INT  PKGAELA_last_version;
A68_INT  QKGAELA;  /* clause result */
A68_99 * RKGAELA;  /* YIELD */
A68_INT * SKGAELA;  /* YIELD */
A_PROC_ENTRY(make_gcnil);
 /* line 1702: */
{ 
NKGAELA_vn = (*(&(Ind->Version)));
 /* line 1703: */
 /* line 1704: */
switch ( QSBAELA_desc_version_size )
{ 
case 1: 
 /* line 1705: */
OKGAELA = 0XffU;
break;
case 2: 
 /* line 1706: */
OKGAELA = 0XffffU;
break;
case 3: 
 /* line 1708: */
OKGAELA = 0XffffffU;
break;
case 4: 
OKGAELA = 0XffffffffU;
break;
default: 
A_IMP_SKIP ;
break;
} 
PKGAELA_last_version = (A68_INT )OKGAELA;
 /* line 1709: */
if ( (NKGAELA_vn==PKGAELA_last_version) )
{ 
QKGAELA = 1;
} 
else
{ 
QKGAELA = (NKGAELA_vn+1);
} 
NKGAELA_vn = QKGAELA;
 /* line 1710: */
RKGAELA = (&(Ind->Address)) ;
(*RKGAELA) = NACAELA_nilgcaddress;
 /* line 1711: */
 /* line 1712: */
SKGAELA = (&(Ind->Version)) ;
(*SKGAELA) = NKGAELA_vn;
} 
A_PROC_EXIT(make_gcnil);
return;
} 
#undef NL

A_STATIC A68_INT  UKGAELA_hash_index(A68_INT  Address_rep)
{ 
A68_INT  VKGAELA_n;
A68_INT  WKGAELA;  /* clause result */
A_PROC_ENTRY(hash_index);
 /* line 1715: */
{ 
VKGAELA_n = (Address_rep/YMBAELA_hashtable_size);
 /* line 1716: */
 /* line 1717: */
WKGAELA = ((Address_rep-(VKGAELA_n*YMBAELA_hashtable_size))+1);
} 
A_PROC_EXIT(hash_index);
return( WKGAELA );
} 
#undef NL

A_STATIC A68_BOOL  BLGAELA_less_than(A68_INT  Block_num, A68_INT  Offset, A68_INT  Old_block, A68_INT  Old_offset)
{ 
A68_BOOL  CLGAELA;  /* optbool result */
A68_BOOL  DLGAELA;  /* optbool result */
A68_BOOL  ELGAELA;  /* clause result */
A_PROC_ENTRY(less_than);
 /* line 1720: */
 /* line 1721: */
CLGAELA = (Block_num<Old_block);
if ( ! CLGAELA )
{DLGAELA = (Block_num==Old_block);
if ( DLGAELA )
{DLGAELA = (Offset<Old_offset);
}
CLGAELA = DLGAELA;
}
ELGAELA = CLGAELA;
A_PROC_EXIT(less_than);
return( ELGAELA );
} 
#undef NL
 /* line 1724: */

A_STATIC A68_BOOL  ILGAELA_not_added_to_hashtable(A68_121 * Gcdata, A68_100 * Df, A68_275  Data)
{ 
A68_BOOL  JLGAELA_not_already_there;
A68_INT  KLGAELA_block_num;
A68_INT  LLGAELA_offset;
A68_INT  MLGAELA_index;
A68_275  NLGAELA;  /* united object - for case conformity */
A68_97  OLGAELA_dp;
A68_99  PLGAELA;  /* avoid structure result */
A68_99  QLGAELA_ad;
A68_112  RLGAELA_d;
A68_99  SLGAELA_ad;
A68_115 * TLGAELA_hashtable;
A68_115  ULGAELA;  /* united object - for case conformity */
A68_116  VLGAELA_address;
A68_113 ** WLGAELA_addr;
A68_BOOL  XLGAELA;  /* optbool result */
A68_113  YLGAELA;  /* collateral clause result */
A68_113 * ZLGAELA;  /* YIELD */
A68_32  AMGAELA;  /* OPERATORS - simple index */
A68_INT * BMGAELA;  /* YIELD */
A68_113 ** CMGAELA_addr_ptr;
A68_BOOL  DMGAELA_continue;
A68_BOOL  EMGAELA;  /* optbool result */
A68_BOOL  FMGAELA;  /* optbool result */
A68_BOOL  GMGAELA;  /* clause result */
A68_113  HMGAELA;  /* collateral clause result */
A68_113 * IMGAELA;  /* YIELD */
A68_32  JMGAELA;  /* OPERATORS - simple index */
A68_INT * KMGAELA;  /* YIELD */
A68_117  LMGAELA_old_and_new;
A68_114 ** MMGAELA_oan;
A68_BOOL  NMGAELA;  /* optbool result */
A68_114  OMGAELA;  /* collateral clause result */
A68_114 * PMGAELA;  /* YIELD */
A68_32  QMGAELA;  /* OPERATORS - simple index */
A68_INT * RMGAELA;  /* YIELD */
A68_114 ** SMGAELA_start;
A68_BOOL  TMGAELA_continue;
A68_BOOL  UMGAELA;  /* optbool result */
A68_BOOL  VMGAELA;  /* optbool result */
A68_BOOL  WMGAELA;  /* clause result */
A68_114  XMGAELA;  /* collateral clause result */
A68_114 * YMGAELA;  /* YIELD */
A68_32  ZMGAELA;  /* OPERATORS - simple index */
A68_INT * ANGAELA;  /* YIELD */
A68_BOOL  BNGAELA;  /* clause result */
A_PROC_ENTRY(not_added_to_hashtable);
 /* line 1731: */
{ 
JLGAELA_not_already_there = A68_TRUE;
 /* line 1732: */
 /* line 1733: */
 /* line 1734: */
 /* line 1735: */
 /* line 1736: */
NLGAELA = Data ;
switch ( NLGAELA.mode )
{ 
case 1: /* STRUCT(BITS,INT,INT,INT,INT,INT,BITS)  */
OLGAELA_dp = (NLGAELA.data.mode1);
{ 
IHEAELA_get_disc_address( Df, OLGAELA_dp, &PLGAELA );
QLGAELA_ad = PLGAELA;
 /* line 1737: */
KLGAELA_block_num = QLGAELA_ad.Block_num;
 /* line 1738: */
LLGAELA_offset = QLGAELA_ad.Offset;
 /* line 1739: */
 /* line 1740: */
 /* line 1741: */
MLGAELA_index = UKGAELA_hash_index(RYDAELA_address_rep(QLGAELA_ad));
} 
break;
case 2: /* STRUCT(MODE99,INT,INT,INT,INT)  */
RLGAELA_d = (NLGAELA.data.mode2);
{ 
SLGAELA_ad = RLGAELA_d.Address;
 /* line 1742: */
KLGAELA_block_num = SLGAELA_ad.Block_num;
 /* line 1743: */
LLGAELA_offset = SLGAELA_ad.Offset;
 /* line 1744: */
 /* line 1745: */
 /* line 1746: */
MLGAELA_index = UKGAELA_hash_index(RYDAELA_address_rep(SLGAELA_ad));
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 1747: */
TLGAELA_hashtable = (&(Gcdata->Hashtable));
 /* line 1748: */
 /* line 1749: */
ULGAELA = (*TLGAELA_hashtable) ;
switch ( ULGAELA.mode )
{ 
case 1: /* REF VECTOR [] REF MODE113 */
VLGAELA_address = (ULGAELA.data.mode1);
 /* line 1750: */
{ 
WLGAELA_addr = (&A_VINDEX(VLGAELA_address,MLGAELA_index));
 /* line 1751: */
 /* line 1752: */
XLGAELA = ((*WLGAELA_addr)==EWDAELA_nildisc_address);
if ( ! XLGAELA )
{ /* line 1753: */
 /* line 1754: */
XLGAELA = BLGAELA_less_than(KLGAELA_block_num, LLGAELA_offset, (*(&((*WLGAELA_addr)->Block_num))), (*(&((*WLGAELA_addr)->Offset))));
}
if ( XLGAELA )
{ 
 /* line 1755: */
YLGAELA.Block_num = KLGAELA_block_num;
YLGAELA.Offset = LLGAELA_offset;
YLGAELA.Rest = (*WLGAELA_addr);
ZLGAELA = A_HEAP(A68_113 ) ;
(*ZLGAELA) = YLGAELA ;
(*WLGAELA_addr) = ZLGAELA;
 /* line 1756: */
 /* line 1757: */
AMGAELA = (*(&((*(&(Gcdata->Gcinfo)))->Max_hashlist))) ;
BMGAELA = (&A_VINDEX(AMGAELA,MLGAELA_index)) ;
(*BMGAELA)+=1;
} 
else
{ 
CMGAELA_addr_ptr = WLGAELA_addr;
 /* line 1758: */
DMGAELA_continue = A68_TRUE;
 /* line 1759: */
for ( ;; )
{ 
 /* line 1760: */
EMGAELA = ((*CMGAELA_addr_ptr)!=EWDAELA_nildisc_address);
if ( EMGAELA )
{EMGAELA = DMGAELA_continue;
}
if ( !(EMGAELA) ) break;
 /* line 1761: */
 /* line 1762: */
 /* line 1763: */
if ( BLGAELA_less_than((*(&((*CMGAELA_addr_ptr)->Block_num))), (*(&((*CMGAELA_addr_ptr)->Offset))), KLGAELA_block_num, LLGAELA_offset) )
{ 
 /* line 1764: */
CMGAELA_addr_ptr = (&((*CMGAELA_addr_ptr)->Rest));
} 
else
{ 
DMGAELA_continue = A68_FALSE;
 /* line 1765: */
 /* line 1766: */
FMGAELA = ((*(&((*CMGAELA_addr_ptr)->Block_num)))==KLGAELA_block_num);
if ( FMGAELA )
{ /* line 1767: */
FMGAELA = ((*(&((*CMGAELA_addr_ptr)->Offset)))==LLGAELA_offset);
}
GMGAELA = FMGAELA;
if ( GMGAELA )
{ 
 /* line 1768: */
 /* line 1769: */
JLGAELA_not_already_there = A68_FALSE;
} 
} 
}
 /* line 1770: */
 /* line 1771: */
if ( JLGAELA_not_already_there )
{ 
 /* line 1772: */
 /* line 1773: */
HMGAELA.Block_num = KLGAELA_block_num;
HMGAELA.Offset = LLGAELA_offset;
HMGAELA.Rest = (*CMGAELA_addr_ptr);
IMGAELA = A_HEAP(A68_113 ) ;
(*IMGAELA) = HMGAELA ;
(*CMGAELA_addr_ptr) = IMGAELA;
 /* line 1774: */
 /* line 1776: */
 /* line 1777: */
 /* line 1778: */
 /* line 1780: */
JMGAELA = (*(&((*(&(Gcdata->Gcinfo)))->Max_hashlist))) ;
KMGAELA = (&A_VINDEX(JMGAELA,MLGAELA_index)) ;
(*KMGAELA)+=1;
} 
} 
} 
break;
case 2: /* REF VECTOR [] REF MODE114 */
LMGAELA_old_and_new = (ULGAELA.data.mode2);
 /* line 1781: */
{ 
MMGAELA_oan = (&A_VINDEX(LMGAELA_old_and_new,MLGAELA_index));
 /* line 1782: */
 /* line 1783: */
NMGAELA = ((*MMGAELA_oan)==FWDAELA_nilold_and_new);
if ( ! NMGAELA )
{ /* line 1784: */
 /* line 1785: */
NMGAELA = BLGAELA_less_than(KLGAELA_block_num, LLGAELA_offset, (*(&((*MMGAELA_oan)->Old_block))), (*(&((*MMGAELA_oan)->Old_offset))));
}
if ( NMGAELA )
{ 
 /* line 1786: */
OMGAELA.Old_block = KLGAELA_block_num;
OMGAELA.Old_offset = LLGAELA_offset;
OMGAELA.New_block = (-1);
OMGAELA.New_offset = (-1);
OMGAELA.Rest = (*MMGAELA_oan);
PMGAELA = A_HEAP(A68_114 ) ;
(*PMGAELA) = OMGAELA ;
(*MMGAELA_oan) = PMGAELA;
 /* line 1787: */
 /* line 1788: */
QMGAELA = (*(&((*(&(Gcdata->Gcinfo)))->Max_hashlist))) ;
RMGAELA = (&A_VINDEX(QMGAELA,MLGAELA_index)) ;
(*RMGAELA)+=1;
} 
else
{ 
SMGAELA_start = MMGAELA_oan;
 /* line 1789: */
TMGAELA_continue = A68_TRUE;
 /* line 1790: */
for ( ;; )
{ 
 /* line 1791: */
UMGAELA = ((*SMGAELA_start)!=FWDAELA_nilold_and_new);
if ( UMGAELA )
{UMGAELA = TMGAELA_continue;
}
if ( !(UMGAELA) ) break;
 /* line 1792: */
 /* line 1793: */
 /* line 1794: */
if ( BLGAELA_less_than((*(&((*SMGAELA_start)->Old_block))), (*(&((*SMGAELA_start)->Old_offset))), KLGAELA_block_num, LLGAELA_offset) )
{ 
 /* line 1795: */
SMGAELA_start = (&((*SMGAELA_start)->Rest));
} 
else
{ 
TMGAELA_continue = A68_FALSE;
 /* line 1796: */
 /* line 1797: */
VMGAELA = (KLGAELA_block_num==(*(&((*SMGAELA_start)->Old_block))));
if ( VMGAELA )
{ /* line 1798: */
VMGAELA = (LLGAELA_offset==(*(&((*SMGAELA_start)->Old_offset))));
}
WMGAELA = VMGAELA;
if ( WMGAELA )
{ 
 /* line 1799: */
 /* line 1800: */
JLGAELA_not_already_there = A68_FALSE;
} 
} 
}
 /* line 1801: */
 /* line 1802: */
if ( JLGAELA_not_already_there )
{ 
 /* line 1803: */
 /* line 1804: */
XMGAELA.Old_block = KLGAELA_block_num;
XMGAELA.Old_offset = LLGAELA_offset;
XMGAELA.New_block = (-1);
XMGAELA.New_offset = (-1);
XMGAELA.Rest = (*SMGAELA_start);
YMGAELA = A_HEAP(A68_114 ) ;
(*YMGAELA) = XMGAELA ;
(*SMGAELA_start) = YMGAELA;
 /* line 1805: */
 /* line 1806: */
 /* line 1807: */
 /* line 1808: */
 /* line 1809: */
ZMGAELA = (*(&((*(&(Gcdata->Gcinfo)))->Max_hashlist))) ;
ANGAELA = (&A_VINDEX(ZMGAELA,MLGAELA_index)) ;
(*ANGAELA)+=1;
} 
} 
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 1810: */
 /* line 1811: */
BNGAELA = JLGAELA_not_already_there;
} 
A_PROC_EXIT(not_added_to_hashtable);
return( BNGAELA );
} 
#undef NL

A_STATIC A68_BOOL  ENGAELA_is_free(A68_VC  Wanted, A68_INT  Block_num)
{ 
A68_INT  FNGAELA_index;
A68_INT  GNGAELA_element;
A68_BOOL  HNGAELA;  /* clause result */
A68_INT  INGAELA;  /* ADICOPS - ELEM */
A_PROC_ENTRY(is_free);
 /* line 1819: */
{ 
FNGAELA_index = (((Block_num-1)/SMBAELA_byte_size)+1);
 /* line 1820: */
GNGAELA_element = (Block_num-((FNGAELA_index-1)*SMBAELA_byte_size));
 /* line 1821: */
 /* line 1822: */
INGAELA = ((FDAAOST_word_size-GNGAELA_element)+1) ;
HNGAELA = !(A_ELEM(INGAELA,(A68_BITS )(A68_INT)(unsigned char)A_VINDEX(Wanted,FNGAELA_index),(A68_INT ),A_SZ_INT));
} 
A_PROC_EXIT(is_free);
return( HNGAELA );
} 
#undef NL

A_STATIC A68_VOID  LNGAELA_set_indir_wanted(A68_121 * Gcdata, A68_INT  Index)
{ 
A68_54  MNGAELA;  /* OPERATORS - simple index */
A68_BOOL * NNGAELA;  /* YIELD */
A_PROC_ENTRY(set_indir_wanted);
 /* line 1825: */
MNGAELA = (*(&(Gcdata->Indirs_wanted))) ;
NNGAELA = (&A_VINDEX(MNGAELA,Index)) ;
(*NNGAELA) = A68_TRUE;
A_PROC_EXIT(set_indir_wanted);
return;
} 
#undef NL

A_STATIC A68_121 * RNGAELA_initialise_gc(A68_109 * Db, A68_BOOL  Compactor, A68_BOOL  Check)
{ 
A68_121 * SNGAELA_gcdata;
A68_110  TNGAELA;  /* avoid structure result */
A68_110 * UNGAELA;  /* YIELD */
A68_110 ** VNGAELA;  /* YIELD */
A68_100 * WNGAELA_df;
A68_BOOL  XNGAELA;  /* optbool result */
A68_33  ZNGAELA_generator;   /* proc value of non-global proc */
A68_32  EOGAELA;  /* avoid structure result */
A68_32 * FOGAELA;  /* YIELD */
A68_INT  GOGAELA_ptelts;
A68_INT  HOGAELA_i;
A68_INT  IOGAELA;  /* to part of loop */
A68_101  JOGAELA;  /* OPERATORS - simple index */
A68_97  KOGAELA_ptr;
A68_INT  LOGAELA_size;
A68_INT  MOGAELA_lwb;
A68_32  NOGAELA;  /* OPERATORS - trim index */
A68_32  OOGAELA;  /* OPERATORS - trim index */
A68_BOOL * POGAELA;  /* YIELD */
A68_BOOL * QOGAELA;  /* YIELD */
A68_31  SOGAELA_generator;   /* proc value of non-global proc */
A68_VC  XOGAELA;  /* avoid structure result */
A68_VC * YOGAELA;  /* YIELD */
A68_280  APGAELA_generator;   /* proc value of non-global proc */
A68_117  GPGAELA;  /* avoid structure result */
A68_117  FPGAELA_hashtable;
A68_INT  HPGAELA_j;
A68_INT  IPGAELA;  /* to part of loop */
A68_114 ** JPGAELA;  /* YIELD */
A68_280  LPGAELA_generator;   /* proc value of non-global proc */
A68_117  QPGAELA;  /* avoid structure result */
A68_115  RPGAELA;  /* OPERATORS - mode -> union mode */
A68_115 * SPGAELA;  /* YIELD */
A68_BOOL * TPGAELA;  /* YIELD */
A68_BOOL * UPGAELA;  /* YIELD */
A68_32  VPGAELA;  /* OPERATORS - trim index */
A68_32  WPGAELA;  /* OPERATORS - trim index */
A68_32  XPGAELA;  /* YIELD */
A68_32  YPGAELA;  /* OPERATORS - assign op */
A68_33  AQGAELA_generator;   /* proc value of non-global proc */
A68_32  FQGAELA;  /* avoid structure result */
A68_32 * GQGAELA;  /* YIELD */
A68_33  IQGAELA_generator;   /* proc value of non-global proc */
A68_32  NQGAELA;  /* avoid structure result */
A68_32 * OQGAELA;  /* YIELD */
A68_INT  PQGAELA_upb_wanted;
A68_31  RQGAELA_generator;   /* proc value of non-global proc */
A68_VC  WQGAELA;  /* avoid structure result */
A68_VC * XQGAELA;  /* YIELD */
A68_INT  YQGAELA_j;
A68_INT  ZQGAELA;  /* to part of loop */
A68_VC  ARGAELA;  /* OPERATORS - simple index */
A68_CHAR * BRGAELA;  /* YIELD */
A68_281  DRGAELA_generator;   /* proc value of non-global proc */
A68_116  JRGAELA;  /* avoid structure result */
A68_116  IRGAELA_hashtable;
A68_INT  KRGAELA_j;
A68_INT  LRGAELA;  /* to part of loop */
A68_113 ** MRGAELA;  /* YIELD */
A68_281  ORGAELA_generator;   /* proc value of non-global proc */
A68_116  TRGAELA;  /* avoid structure result */
A68_115  URGAELA;  /* OPERATORS - mode -> union mode */
A68_115 * VRGAELA;  /* YIELD */
A68_119 * WRGAELA_gcinfo;
A68_33  YRGAELA_generator;   /* proc value of non-global proc */
A68_32  DSGAELA;  /* avoid structure result */
A68_32 * ESGAELA;  /* YIELD */
A68_INT * FSGAELA;  /* YIELD */
A68_INT * GSGAELA;  /* YIELD */
A68_INT * HSGAELA;  /* YIELD */
A68_INT * ISGAELA;  /* YIELD */
A68_INT * JSGAELA;  /* YIELD */
A68_INT * KSGAELA;  /* YIELD */
A68_INT * LSGAELA;  /* YIELD */
A68_INT * MSGAELA;  /* YIELD */
A68_155  OSGAELA_generator;   /* proc value of non-global proc */
A68_54  TSGAELA;  /* avoid structure result */
A68_54 * USGAELA;  /* YIELD */
A68_119 * VSGAELA;  /* YIELD */
A68_119 ** WSGAELA;  /* YIELD */
A68_118 ** XSGAELA;  /* YIELD */
A68_VC  YSGAELA;  /* avoid structure result */
A68_VC * ZSGAELA;  /* YIELD */
A68_121 * ATGAELA;  /* clause result */
A_PROC_ENTRY(initialise_gc);
 /* line 1828: */
{ 
SNGAELA_gcdata = (A_HEAP(A68_121 ));
 /* line 1829: */
OSEAELA_setup_readbuffer(  &TNGAELA );
UNGAELA = A_HEAP(A68_110 ) ;
(*UNGAELA) = TNGAELA ;
VNGAELA = (&(SNGAELA_gcdata->Read_buffer)) ;
(*VNGAELA) = UNGAELA;
 /* line 1830: */
WNGAELA_df = (*(&(Db->Df)));
 /* line 1831: */
EVEAELA_check_file_writeable(Db, WNGAELA_df);
 /* line 1832: */
 /* line 1833: */
XNGAELA = (*(*(&(WNGAELA_df->Collectable))));
if ( ! XNGAELA )
{XNGAELA = Check;
}
if ( XNGAELA )
{ 
A_CLOSURE( ZNGAELA_generator, AOGAELA_generator, BOGAELA_generator );
(( BOGAELA_generator * ) ( ZNGAELA_generator.nonlocals )) -> WNGAELA_df = WNGAELA_df;
A_CALLPROC(ZNGAELA_generator,(A68_FALSE, &EOGAELA),(A68_FALSE, &EOGAELA,(ZNGAELA_generator).nonlocals));
FOGAELA = (&(SNGAELA_gcdata->Pagetable)) ;
(*FOGAELA) = EOGAELA;
 /* line 1834: */
GOGAELA_ptelts = 0;
 /* line 1835: */
 /* line 1836: */
IOGAELA = (*(&(WNGAELA_df->Pagetable_dps))).upb;
for ( HOGAELA_i = 1;
HOGAELA_i <= IOGAELA;
HOGAELA_i += 1 )
{ 
JOGAELA = (*(&(WNGAELA_df->Pagetable_dps))) ;
KOGAELA_ptr = (*(&A_VINDEX(JOGAELA,HOGAELA_i)));
 /* line 1837: */
LOGAELA_size = UJEAELA_size(Db, KOGAELA_ptr);
 /* line 1838: */
MOGAELA_lwb = (GOGAELA_ptelts+1);
 /* line 1839: */
 /* line 1840: */
 /* line 1841: */
 /* line 1842: */
NOGAELA = (*(&(SNGAELA_gcdata->Pagetable))) ;
IAFAELA_read_pagetable(Db, WNGAELA_df, A_VTRIM(OOGAELA,(NOGAELA),A_VTSCRIPT(&(OOGAELA.upb),(NOGAELA).upb,MOGAELA_lwb,(GOGAELA_ptelts+=LOGAELA_size))), KOGAELA_ptr);
}
 /* line 1843: */
 /* line 1844: */
if ( Compactor )
{ 
POGAELA = A_HEAP(A68_BOOL ) ;
QOGAELA = (&(SNGAELA_gcdata->Compactor)) ;
(*QOGAELA) = (*POGAELA) = A68_TRUE;
 /* line 1845: */
A_CLOSURE( SOGAELA_generator, TOGAELA_generator, UOGAELA_generator );
A_CALLPROC(SOGAELA_generator,(A68_FALSE, &XOGAELA),(A68_FALSE, &XOGAELA,(SOGAELA_generator).nonlocals));
YOGAELA = (&(SNGAELA_gcdata->Blocks_wanted)) ;
(*YOGAELA) = XOGAELA;
 /* line 1846: */
A_CLOSURE( APGAELA_generator, BPGAELA_generator, CPGAELA_generator );
A_CALLPROC(APGAELA_generator,(A68_TRUE, &GPGAELA),(A68_TRUE, &GPGAELA,(APGAELA_generator).nonlocals));
FPGAELA_hashtable = GPGAELA;
 /* line 1847: */
 /* line 1848: */
IPGAELA = YMBAELA_hashtable_size;
for ( HPGAELA_j = 1;
HPGAELA_j <= IPGAELA;
HPGAELA_j += 1 )
{ 
 /* line 1849: */
JPGAELA = (&A_VINDEX(FPGAELA_hashtable,HPGAELA_j)) ;
(*JPGAELA) = FWDAELA_nilold_and_new;
}
 /* line 1850: */
A_CLOSURE( LPGAELA_generator, MPGAELA_generator, NPGAELA_generator );
 /* line 1853: */
A_CALLPROC(LPGAELA_generator,(A68_FALSE, &QPGAELA),(A68_FALSE, &QPGAELA,(LPGAELA_generator).nonlocals));
A_VASSIGN2(FPGAELA_hashtable,QPGAELA,A68_114 *) ;
SPGAELA = (&(SNGAELA_gcdata->Hashtable)) ;
(*SPGAELA) = A_UNITE(RPGAELA,mode2,2,QPGAELA);
} 
else
{ 
TPGAELA = A_HEAP(A68_BOOL ) ;
UPGAELA = (&(SNGAELA_gcdata->Compactor)) ;
(*UPGAELA) = (*TPGAELA) = A68_FALSE;
 /* line 1854: */
 /* line 1855: */
if ( (GOGAELA_ptelts!=(*(*(&(WNGAELA_df->File_size))))) )
{ 
VPGAELA = (*(&(SNGAELA_gcdata->Pagetable))) ;
XPGAELA = A_VTRIM(WPGAELA,(VPGAELA),A_VTSCRIPT(&(WPGAELA.upb),(VPGAELA).upb,(GOGAELA_ptelts+1),(VPGAELA).upb)) ;
YPGAELA = (*(&(WNGAELA_df->Pagetable_ext))) ;
A_VASSIGN2(YPGAELA,XPGAELA,A68_INT );
} 
 /* line 1856: */
A_CLOSURE( AQGAELA_generator, BQGAELA_generator, CQGAELA_generator );
A_CALLPROC(AQGAELA_generator,(A68_FALSE, &FQGAELA),(A68_FALSE, &FQGAELA,(AQGAELA_generator).nonlocals));
GQGAELA = (&(WNGAELA_df->Pagetable_ext)) ;
(*GQGAELA) = FQGAELA;
 /* line 1857: */
A_CLOSURE( IQGAELA_generator, JQGAELA_generator, KQGAELA_generator );
A_CALLPROC(IQGAELA_generator,(A68_FALSE, &NQGAELA),(A68_FALSE, &NQGAELA,(IQGAELA_generator).nonlocals));
OQGAELA = (&(WNGAELA_df->Freelist_ext)) ;
(*OQGAELA) = NQGAELA;
 /* line 1858: */
PQGAELA_upb_wanted = ((((*(*(&(WNGAELA_df->File_size))))-1)/SMBAELA_byte_size)+1);
 /* line 1859: */
A_CLOSURE( RQGAELA_generator, SQGAELA_generator, TQGAELA_generator );
(( TQGAELA_generator * ) ( RQGAELA_generator.nonlocals )) -> PQGAELA_upb_wanted = PQGAELA_upb_wanted;
A_CALLPROC(RQGAELA_generator,(A68_FALSE, &WQGAELA),(A68_FALSE, &WQGAELA,(RQGAELA_generator).nonlocals));
XQGAELA = (&(SNGAELA_gcdata->Blocks_wanted)) ;
(*XQGAELA) = WQGAELA;
 /* line 1860: */
 /* line 1861: */
ZQGAELA = PQGAELA_upb_wanted;
for ( YQGAELA_j = 1;
YQGAELA_j <= ZQGAELA;
YQGAELA_j += 1 )
{ 
 /* line 1862: */
ARGAELA = (*(&(SNGAELA_gcdata->Blocks_wanted))) ;
BRGAELA = (&A_VINDEX(ARGAELA,YQGAELA_j)) ;
(*BRGAELA) = (A68_CHAR)(A68_INT )(A68_BITS )0;
}
 /* line 1863: */
A_CLOSURE( DRGAELA_generator, ERGAELA_generator, FRGAELA_generator );
A_CALLPROC(DRGAELA_generator,(A68_TRUE, &JRGAELA),(A68_TRUE, &JRGAELA,(DRGAELA_generator).nonlocals));
IRGAELA_hashtable = JRGAELA;
 /* line 1864: */
 /* line 1865: */
LRGAELA = YMBAELA_hashtable_size;
for ( KRGAELA_j = 1;
KRGAELA_j <= LRGAELA;
KRGAELA_j += 1 )
{ 
 /* line 1866: */
MRGAELA = (&A_VINDEX(IRGAELA_hashtable,KRGAELA_j)) ;
(*MRGAELA) = EWDAELA_nildisc_address;
}
 /* line 1867: */
 /* line 1868: */
A_CLOSURE( ORGAELA_generator, PRGAELA_generator, QRGAELA_generator );
 /* line 1869: */
A_CALLPROC(ORGAELA_generator,(A68_FALSE, &TRGAELA),(A68_FALSE, &TRGAELA,(ORGAELA_generator).nonlocals));
A_VASSIGN2(IRGAELA_hashtable,TRGAELA,A68_113 *) ;
VRGAELA = (&(SNGAELA_gcdata->Hashtable)) ;
(*VRGAELA) = A_UNITE(URGAELA,mode1,1,TRGAELA);
} 
 /* line 1870: */
WRGAELA_gcinfo = (A_HEAP(A68_119 ));
 /* line 1871: */
A_CLOSURE( YRGAELA_generator, ZRGAELA_generator, ASGAELA_generator );
A_CALLPROC(YRGAELA_generator,(A68_FALSE, &DSGAELA),(A68_FALSE, &DSGAELA,(YRGAELA_generator).nonlocals));
ESGAELA = (&(WRGAELA_gcinfo->Max_hashlist)) ;
(*ESGAELA) = DSGAELA;
 /* line 1872: */
QQBAELA_clear_rvi((*(&(WRGAELA_gcinfo->Max_hashlist))));
 /* line 1873: */
FSGAELA = A_HEAP(A68_INT ) ;
GSGAELA = (&(WRGAELA_gcinfo->Disc_accesses)) ;
(*GSGAELA) = (*FSGAELA) = 0;
 /* line 1874: */
HSGAELA = A_HEAP(A68_INT ) ;
ISGAELA = (&(WRGAELA_gcinfo->Stack_size)) ;
(*ISGAELA) = (*HSGAELA) = 0;
 /* line 1875: */
JSGAELA = A_HEAP(A68_INT ) ;
KSGAELA = (&(WRGAELA_gcinfo->Max_stack_size)) ;
(*KSGAELA) = (*JSGAELA) = 0;
 /* line 1876: */
LSGAELA = A_HEAP(A68_INT ) ;
MSGAELA = (&(WRGAELA_gcinfo->Data_ptrs)) ;
(*MSGAELA) = (*LSGAELA) = 0;
 /* line 1877: */
A_CLOSURE( OSGAELA_generator, PSGAELA_generator, QSGAELA_generator );
(( QSGAELA_generator * ) ( OSGAELA_generator.nonlocals )) -> WNGAELA_df = WNGAELA_df;
A_CALLPROC(OSGAELA_generator,(A68_FALSE, &TSGAELA),(A68_FALSE, &TSGAELA,(OSGAELA_generator).nonlocals));
USGAELA = (&(SNGAELA_gcdata->Indirs_wanted)) ;
(*USGAELA) = TSGAELA;
 /* line 1879: */
UQBAELA_clear_rvb((*(&(SNGAELA_gcdata->Indirs_wanted))));
 /* line 1880: */
VSGAELA = A_HEAP(A68_119 ) ;
(*VSGAELA) = (*WRGAELA_gcinfo) ;
WSGAELA = (&(SNGAELA_gcdata->Gcinfo)) ;
(*WSGAELA) = VSGAELA;
 /* line 1881: */
XSGAELA = (&(SNGAELA_gcdata->Stack)) ;
(*XSGAELA) = GWDAELA_nildpstack;
 /* line 1882: */
LWDAELA_makervc( (*(&(WNGAELA_df->Name))), &YSGAELA );
ZSGAELA = (&(SNGAELA_gcdata->Name)) ;
(*ZSGAELA) = YSGAELA;
 /* line 1883: */
 /* line 1884: */
 /* line 1885: */
ATGAELA = SNGAELA_gcdata;
} 
else
{ 
 /* line 1886: */
ATGAELA = DWDAELA_nilgcdata;
} 
} 
A_PROC_EXIT(initialise_gc);
return( ATGAELA );
} 
#undef NL

A_STATIC A68_VOID  ETGAELA_make_shaky_list(A68_109 * Db, A68_100 * Df, A68_121 * Gcdata)
{ 
A68_106  FTGAELA_indirections;
A68_INT  GTGAELA_i;
A68_INT  HTGAELA;  /* to part of loop */
A68_98  ITGAELA_ind;
A68_99  JTGAELA_addr;
A68_BOOL  KTGAELA;  /* optbool result */
A68_120 ** LTGAELA_shaky_ptrs;
A68_120  MTGAELA;  /* collateral clause result */
A68_120 * NTGAELA;  /* YIELD */
A68_BOOL  OTGAELA_continue;
A68_BOOL  PTGAELA_not_already_there;
A68_120 ** QTGAELA_list_ptr;
A68_BOOL  RTGAELA;  /* optbool result */
A68_99  STGAELA_current;
A68_BOOL  TTGAELA;  /* optbool result */
A68_120  UTGAELA;  /* collateral clause result */
A68_120 * VTGAELA;  /* YIELD */
A_PROC_ENTRY(make_shaky_list);
 /* line 1890: */
{ 
FTGAELA_indirections = (*(&(Df->Indirections)));
 /* line 1891: */
 /* line 1892: */
HTGAELA = FTGAELA_indirections.upb;
for ( GTGAELA_i = 1;
GTGAELA_i <= HTGAELA;
GTGAELA_i += 1 )
{ 
ITGAELA_ind = A_VINDEX(FTGAELA_indirections,GTGAELA_i);
 /* line 1893: */
JTGAELA_addr = ITGAELA_ind.Address;
 /* line 1894: */
KTGAELA = ITGAELA_ind.Shaky;
if ( KTGAELA )
{ /* line 1895: */
KTGAELA = !QACAELA_(JTGAELA_addr, NACAELA_nilgcaddress);
}
if ( KTGAELA )
{ 
LTGAELA_shaky_ptrs = (&(Gcdata->Shaky_ptrs));
 /* line 1896: */
 /* line 1897: */
if ( ((*LTGAELA_shaky_ptrs)==HWDAELA_nilshakydata) )
{ 
 /* line 1898: */
MTGAELA.Wanted = A68_FALSE;
MTGAELA.Indirection = GTGAELA_i;
MTGAELA.Old_addr = JTGAELA_addr;
MTGAELA.New_addr = JTGAELA_addr;
 /* line 1899: */
MTGAELA.Rest = (*LTGAELA_shaky_ptrs);
NTGAELA = A_HEAP(A68_120 ) ;
(*NTGAELA) = MTGAELA ;
(*LTGAELA_shaky_ptrs) = NTGAELA;
} 
else
{ 
OTGAELA_continue = A68_TRUE;
 /* line 1900: */
PTGAELA_not_already_there = A68_TRUE;
 /* line 1901: */
QTGAELA_list_ptr = LTGAELA_shaky_ptrs;
 /* line 1902: */
for ( ;; )
{ 
 /* line 1903: */
RTGAELA = ((*QTGAELA_list_ptr)!=HWDAELA_nilshakydata);
if ( RTGAELA )
{RTGAELA = OTGAELA_continue;
}
if ( !(RTGAELA) ) break;
STGAELA_current = (*(&((*QTGAELA_list_ptr)->Old_addr)));
 /* line 1904: */
 /* line 1905: */
if ( MYDAELA_(STGAELA_current, JTGAELA_addr) )
{ 
 /* line 1906: */
OTGAELA_continue = A68_FALSE;
} 
else
{ 
TTGAELA = QACAELA_(JTGAELA_addr, STGAELA_current);
if ( TTGAELA )
{ /* line 1907: */
TTGAELA = ((*(&((*QTGAELA_list_ptr)->Indirection)))==GTGAELA_i);
}
if ( TTGAELA )
{ 
PTGAELA_not_already_there = A68_FALSE;
 /* line 1908: */
 /* line 1909: */
OTGAELA_continue = A68_FALSE;
} 
} 
 /* line 1910: */
 /* line 1911: */
QTGAELA_list_ptr = (&((*QTGAELA_list_ptr)->Rest));
}
 /* line 1912: */
 /* line 1913: */
if ( PTGAELA_not_already_there )
{ 
 /* line 1914: */
 /* line 1915: */
UTGAELA.Wanted = A68_FALSE;
UTGAELA.Indirection = GTGAELA_i;
UTGAELA.Old_addr = JTGAELA_addr;
UTGAELA.New_addr = JTGAELA_addr;
UTGAELA.Rest = (*QTGAELA_list_ptr);
 /* line 1916: */
 /* line 1917: */
 /* line 1918: */
VTGAELA = A_HEAP(A68_120 ) ;
(*VTGAELA) = UTGAELA ;
(*QTGAELA_list_ptr) = VTGAELA;
} 
} 
} 
}
 /* line 1919: */
} 
A_PROC_EXIT(make_shaky_list);
return;
} 
#undef NL
 /* line 1922: */

A_STATIC A68_BOOL  AUGAELA_shaky_traced(A68_109 * Db, A68_121 * Gcdata, A68_100 * Df, A68_98 * Ind)
{ 
A68_BOOL  BUGAELA_traced;
A68_99 * CUGAELA_addr;
A68_120 ** DUGAELA_data;
A68_BOOL  EUGAELA;  /* optbool result */
A68_BOOL  FUGAELA;  /* optbool result */
A68_BOOL  GUGAELA;  /* clause result */
A_PROC_ENTRY(shaky_traced);
 /* line 1923: */
{ 
BUGAELA_traced = A68_FALSE;
 /* line 1924: */
CUGAELA_addr = (&(Ind->Address));
 /* line 1925: */
DUGAELA_data = (&(Gcdata->Shaky_ptrs));
 /* line 1926: */
for ( ;; )
{ 
 /* line 1927: */
EUGAELA = ((*DUGAELA_data)!=HWDAELA_nilshakydata);
if ( EUGAELA )
{EUGAELA = !BUGAELA_traced;
}
if ( !(EUGAELA) ) break;
 /* line 1928: */
FUGAELA = QACAELA_((*CUGAELA_addr), (*(&((*DUGAELA_data)->Old_addr))));
if ( FUGAELA )
{FUGAELA = (*(&((*DUGAELA_data)->Wanted)));
}
if ( FUGAELA )
{ 
BUGAELA_traced = A68_TRUE;
 /* line 1929: */
 /* line 1930: */
(*CUGAELA_addr) = (*(&((*DUGAELA_data)->New_addr)));
} 
 /* line 1931: */
 /* line 1932: */
DUGAELA_data = (&((*DUGAELA_data)->Rest));
}
 /* line 1933: */
 /* line 1934: */
GUGAELA = BUGAELA_traced;
} 
A_PROC_EXIT(shaky_traced);
return( GUGAELA );
} 
#undef NL
 /* line 1937: */

A_STATIC A68_VOID  MUGAELA_mark_shaky_wanted(A68_109 * Db, A68_121 * Gcdata, A68_100 * Df, A68_99  Old, A68_99  New)
{ 
A68_BOOL  NUGAELA_not_found;
A68_120 ** OUGAELA_shaky_data;
A68_BOOL  PUGAELA;  /* optbool result */
A68_99  QUGAELA_old_addr;
A68_BOOL * RUGAELA_wanted;
A68_BOOL  SUGAELA;  /* optbool result */
A68_99 * TUGAELA;  /* YIELD */
A_PROC_ENTRY(mark_shaky_wanted);
 /* line 1938: */
{ 
NUGAELA_not_found = A68_TRUE;
 /* line 1939: */
OUGAELA_shaky_data = (&(Gcdata->Shaky_ptrs));
 /* line 1940: */
for ( ;; )
{ 
 /* line 1941: */
PUGAELA = ((*OUGAELA_shaky_data)!=HWDAELA_nilshakydata);
if ( PUGAELA )
{PUGAELA = NUGAELA_not_found;
}
if ( !(PUGAELA) ) break;
QUGAELA_old_addr = (*(&((*OUGAELA_shaky_data)->Old_addr)));
 /* line 1942: */
RUGAELA_wanted = (&((*OUGAELA_shaky_data)->Wanted));
 /* line 1943: */
 /* line 1944: */
SUGAELA = QACAELA_(Old, QUGAELA_old_addr);
if ( SUGAELA )
{SUGAELA = !(*RUGAELA_wanted);
}
if ( SUGAELA )
{ 
(*RUGAELA_wanted) = A68_TRUE;
 /* line 1945: */
LNGAELA_set_indir_wanted(Gcdata, (*(&((*OUGAELA_shaky_data)->Indirection))));
 /* line 1946: */
if ( (*(&(Gcdata->Compactor))) )
{ 
 /* line 1947: */
TUGAELA = (&((*OUGAELA_shaky_data)->New_addr)) ;
(*TUGAELA) = New;
} 
} 
else
{ 
 /* line 1948: */
if ( MYDAELA_(Old, QUGAELA_old_addr) )
{ 
 /* line 1949: */
NUGAELA_not_found = A68_FALSE;
} 
} 
 /* line 1950: */
 /* line 1951: */
OUGAELA_shaky_data = (&((*OUGAELA_shaky_data)->Rest));
}
 /* line 1952: */
} 
A_PROC_EXIT(mark_shaky_wanted);
return;
} 
#undef NL

A68_VOID  VUGAELA_noncompacting_garbage_collect(A68_109 * Db)
{ 
A68_LINT  WUGAELA_start_time;
A68_288  SWGAELA_trace_data;   /* proc value of non-global proc */
A68_289  GXGAELA_add_to_stack;   /* proc value of non-global proc */
A68_291  IYGAELA_trace;
A68_292  MYGAELA_add_or_trace;   /* proc value of non-global proc */
A68_293  HZGAELA_discptr_trace;   /* proc value of non-global proc */
A68_291  GAHAELA_anonymous;   /* proc value of non-global proc */
A68_100 * QEHAELA_df;
A68_121 * VEHAELA_gcdata;
A68_INT * WEHAELA_current_free;
A68_INT * XEHAELA_cbufpos;
A68_92  YEHAELA;  /* procedure value */
A68_INT * ZEHAELA;  /* YIELD */
A68_VC  AFHAELA;  /* OPERATORS - trim index */
A68_VC  BFHAELA;  /* OPERATORS - trim index */
A68_VC  CFHAELA;  /* avoid structure result */
A68_VC  DFHAELA;  /* YIELD */
A68_INT  EFHAELA_start_writes;
A68_INT  FFHAELA_start_reads;
A68_VC  GFHAELA_blocks_wanted;
A68_INT  HFHAELA_next_free;
A68_32  IFHAELA;  /* OPERATORS - simple index */
A68_32  JFHAELA_pagetable;
A68_106  KFHAELA_indirections;
A68_118 ** LFHAELA_stack;
A68_97  MFHAELA_ind_dp;
A68_275  OFHAELA;  /* OPERATORS - mode -> union mode */
A68_97  PFHAELA;  /* YIELD */
A68_275  QFHAELA;  /* OPERATORS - mode -> union mode */
A68_97  RFHAELA;  /* YIELD */
A68_118 ** SFHAELA_stack_ptr;
A68_99  TFHAELA_caddr;
A68_INT * UFHAELA;  /* YIELD */
A68_INT  VFHAELA_i;
A68_INT  WFHAELA;  /* to part of loop */
A68_98 * XFHAELA_ind;
A68_54  YFHAELA;  /* OPERATORS - simple index */
A68_BOOL  ZFHAELA_wanted;
A68_BOOL  AGHAELA;  /* optbool result */
A68_BOOL  BGHAELA;  /* optbool result */
A68_105 ** CGHAELA;  /* YIELD */
A68_33  EGHAELA_generator;   /* proc value of non-global proc */
A68_32  KGHAELA;  /* avoid structure result */
A68_32  JGHAELA_new_freelist;
A68_154  MGHAELA_generator;   /* proc value of non-global proc */
A68_101  RGHAELA;  /* avoid structure result */
A68_101 * SGHAELA;  /* YIELD */
A68_INT  TGHAELA_count;
A68_INT  UGHAELA_last_free_block;
A68_BOOL  VGHAELA_first;
A68_BOOL  WGHAELA_first_block;
A68_INT * XGHAELA_size_of_free_space;
A68_INT * YGHAELA_freelist_index;
A68_INT * ZGHAELA_freeblock_ptr;
A68_INT * AHHAELA_last_free;
A68_INT * BHHAELA_current_free;
A68_INT * CHHAELA_first_free;
A68_INT  DHHAELA_blocks_used;
A68_INT  EHHAELA_i;
A68_INT  FHHAELA;  /* to part of loop */
A68_INT  GHHAELA;  /* by part of loop */
A68_INT * HHHAELA;  /* YIELD */
A68_INT  IHHAELA;  /* YIELD */
A68_33  KHHAELA_generator;   /* proc value of non-global proc */
A68_32  PHHAELA;  /* avoid structure result */
A68_32 * QHHAELA;  /* YIELD */
A68_INT  RHHAELA;  /* YIELD */
A68_INT * SHHAELA;  /* YIELD */
A68_INT  THHAELA;  /* YIELD */
A68_INT * UHHAELA;  /* YIELD */
A68_INT  VHHAELA;  /* clause result */
A68_INT * WHHAELA;  /* YIELD */
A68_INT  XHHAELA;  /* YIELD */
A68_33  ZHHAELA_generator;   /* proc value of non-global proc */
A68_32  EIHAELA;  /* avoid structure result */
A68_32  FIHAELA;  /* OPERATORS - trim index */
A68_32  GIHAELA;  /* OPERATORS - assign op */
A68_32 * HIHAELA;  /* YIELD */
A68_32  IIHAELA;  /* OPERATORS - trim index */
A68_INT * JIHAELA;  /* YIELD */
A68_INT ** KIHAELA;  /* YIELD */
A68_154  MIHAELA_generator;   /* proc value of non-global proc */
A68_101  RIHAELA;  /* avoid structure result */
A68_97  SIHAELA;  /* avoid structure result */
A68_101  TIHAELA;  /* OPERATORS - scalar -> [] or VEC[] */
A68_101  UIHAELA;  /* OPERATORS - assign op */
A68_101 * VIHAELA;  /* YIELD */
A68_BOOL * WIHAELA;  /* YIELD */
A68_BOOL ** XIHAELA;  /* YIELD */
A_PROC_ENTRY(noncompacting_garbage_collect);
 /* line 1956: */
{ 
WUGAELA_start_time = WZBAOSI_get_time();
 /* line 1958: */
 /* line 1980: */
 /* line 1999: */
 /* line 2021: */
A_CLOSURE( SWGAELA_trace_data, TWGAELA_trace_data, UWGAELA_trace_data );
 /* line 2051: */
A_CLOSURE( GXGAELA_add_to_stack, HXGAELA_add_to_stack, IXGAELA_add_to_stack );
 /* line 2110: */
 /* line 2112: */
A_CLOSURE( MYGAELA_add_or_trace, NYGAELA_add_or_trace, OYGAELA_add_or_trace );
(( OYGAELA_add_or_trace * ) ( MYGAELA_add_or_trace.nonlocals )) -> GXGAELA_add_to_stack = GXGAELA_add_to_stack;
(( OYGAELA_add_or_trace * ) ( MYGAELA_add_or_trace.nonlocals )) -> IYGAELA_trace = (&IYGAELA_trace);
(( OYGAELA_add_or_trace * ) ( MYGAELA_add_or_trace.nonlocals )) -> SWGAELA_trace_data = SWGAELA_trace_data;
 /* line 2146: */
A_CLOSURE( HZGAELA_discptr_trace, IZGAELA_discptr_trace, JZGAELA_discptr_trace );
(( JZGAELA_discptr_trace * ) ( HZGAELA_discptr_trace.nonlocals )) -> SWGAELA_trace_data = SWGAELA_trace_data;
(( JZGAELA_discptr_trace * ) ( HZGAELA_discptr_trace.nonlocals )) -> MYGAELA_add_or_trace = MYGAELA_add_or_trace;
 /* line 2195: */
A_CLOSURE( GAHAELA_anonymous, HAHAELA_anonymous, IAHAELA_anonymous );
(( IAHAELA_anonymous * ) ( GAHAELA_anonymous.nonlocals )) -> HZGAELA_discptr_trace = HZGAELA_discptr_trace;
(( IAHAELA_anonymous * ) ( GAHAELA_anonymous.nonlocals )) -> SWGAELA_trace_data = SWGAELA_trace_data;
IYGAELA_trace = GAHAELA_anonymous;
 /* line 2250: */
 /* line 2269: */
 /* line 2291: */
 /* line 2308: */
TEEAELA_check_valid_db(Db);
 /* line 2309: */
QEHAELA_df = (*(&(Db->Df)));
 /* line 2310: */
PEEAELA_check_nilfile(QEHAELA_df);
 /* line 2311: */
LLFAELA_check_not_appending(QEHAELA_df, SEHAELA);
 /* line 2312: */
EVEAELA_check_file_writeable(Db, QEHAELA_df);
 /* line 2313: */
 /* line 2314: */
 /* line 2315: */
VEHAELA_gcdata = RNGAELA_initialise_gc(Db, TEHAELA_noncompactor, UEHAELA_check);
 /* line 2316: */
 /* line 2317: */
if ( (VEHAELA_gcdata!=DWDAELA_nilgcdata) )
{ 
ETGAELA_make_shaky_list(Db, QEHAELA_df, VEHAELA_gcdata);
 /* line 2318: */
KJFAELA_flush_buffer(Db, QEHAELA_df);
 /* line 2319: */
 /* line 2320: */
if ( ((*(*(&(QEHAELA_df->Cbufpos))))>0) )
{ 
WEHAELA_current_free = (*(&(QEHAELA_df->Current_free)));
 /* line 2321: */
XEHAELA_cbufpos = (*(&(QEHAELA_df->Cbufpos)));
 /* line 2322: */
 /* line 2323: */
YEHAELA.fn.fn_global = GNBAELA_keepsake_msg;
YEHAELA.nonlocals = A68_NIL;
UOBAELA_put_block((*(*(&(QEHAELA_df->File)))), (*(&(QEHAELA_df->Block_buffer))), (*(*(&(QEHAELA_df->Current_free)))), YEHAELA);
 /* line 2324: */
ZEHAELA = (*(&(QEHAELA_df->Write_transfers))) ;
(*ZEHAELA)+=1;
 /* line 2325: */
MQBAELA_clear_rvc((*(&(QEHAELA_df->Block_buffer))));
 /* line 2326: */
 /* line 2327: */
 /* line 2328: */
AFHAELA = (*(&(QEHAELA_df->Block_buffer))) ;
JCCAELA_make_block_heading( 0, 0, 0, 0, 0, 1, &CFHAELA );
DFHAELA = A_VTRIM(BFHAELA,(AFHAELA),A_VTSCRIPT(&(BFHAELA.upb),(AFHAELA).upb,(RICAELA_actual_block_size+1),(RICAELA_actual_block_size+CCCAELA_block_heading_size))) ;
A_VASSIGN2(CFHAELA,DFHAELA,A68_CHAR );
 /* line 2329: */
(*WEHAELA_current_free) = JDFAELA_get_free_block(Db, QEHAELA_df);
 /* line 2330: */
(*XEHAELA_cbufpos) = 0;
 /* line 2331: */
 /* line 2332: */
NVGAELA_set_wanted((*(&(VEHAELA_gcdata->Blocks_wanted))), (*WEHAELA_current_free));
} 
 /* line 2333: */
EFHAELA_start_writes = (*(*(&(QEHAELA_df->Write_transfers))));
 /* line 2334: */
FFHAELA_start_reads = (*(*(&(QEHAELA_df->Read_transfers))));
 /* line 2341: */
GFHAELA_blocks_wanted = (*(&(VEHAELA_gcdata->Blocks_wanted)));
 /* line 2342: */
HFHAELA_next_free = (*(*(&(QEHAELA_df->Last_free))));
 /* line 2343: */
 /* line 2344: */
if ( (HFHAELA_next_free!=0) )
{ 
for ( ;; )
{ 
 /* line 2345: */
if ( !((HFHAELA_next_free!=(*(*(&(QEHAELA_df->First_free)))))) ) break;
NVGAELA_set_wanted(GFHAELA_blocks_wanted, HFHAELA_next_free);
 /* line 2346: */
 /* line 2347: */
IFHAELA = (*(&(VEHAELA_gcdata->Pagetable))) ;
HFHAELA_next_free = (-(*(&A_VINDEX(IFHAELA,HFHAELA_next_free))));
}
 /* line 2348: */
} 
 /* line 2350: */
JFHAELA_pagetable = (*(&(VEHAELA_gcdata->Pagetable)));
 /* line 2351: */
KFHAELA_indirections = (*(&(QEHAELA_df->Indirections)));
 /* line 2352: */
LFHAELA_stack = (&(VEHAELA_gcdata->Stack));
 /* line 2354: */
MFHAELA_ind_dp = (*(*(&(QEHAELA_df->Indirs_dp))));
 /* line 2356: */
 /* line 2357: */
if ( (SYBAELA_data_elts(MFHAELA_ind_dp)!=0) )
{ 
 /* line 2358: */
 /* line 2359: */
 /* line 2360: */
A_CALLPROC(SWGAELA_trace_data,(Db, VEHAELA_gcdata, NFHAELA_nodps, SYBAELA_data_elts(MFHAELA_ind_dp), DYBAELA_discptr_code(MFHAELA_ind_dp), MYBAELA_first_block(MFHAELA_ind_dp), PYBAELA_first_offset(MFHAELA_ind_dp)),(Db, VEHAELA_gcdata, NFHAELA_nodps, SYBAELA_data_elts(MFHAELA_ind_dp), DYBAELA_discptr_code(MFHAELA_ind_dp), MYBAELA_first_block(MFHAELA_ind_dp), PYBAELA_first_offset(MFHAELA_ind_dp),(SWGAELA_trace_data).nonlocals));
} 
 /* line 2362: */
A_CALLPROC(HZGAELA_discptr_trace,(Db, VEHAELA_gcdata, QEHAELA_df, (*(*(&(QEHAELA_df->Root))))),(Db, VEHAELA_gcdata, QEHAELA_df, (*(*(&(QEHAELA_df->Root)))),(HZGAELA_discptr_trace).nonlocals));
 /* line 2363: */
PFHAELA = (*(*(&(QEHAELA_df->Pagetable_dp)))) ;
A_CALLPROC(GXGAELA_add_to_stack,(Db, VEHAELA_gcdata, A_UNITE(OFHAELA,mode1,1,PFHAELA)),(Db, VEHAELA_gcdata, A_UNITE(OFHAELA,mode1,1,PFHAELA),(GXGAELA_add_to_stack).nonlocals));
 /* line 2364: */
RFHAELA = (*(*(&(QEHAELA_df->Freelist_dp)))) ;
A_CALLPROC(GXGAELA_add_to_stack,(Db, VEHAELA_gcdata, A_UNITE(QFHAELA,mode1,1,RFHAELA)),(Db, VEHAELA_gcdata, A_UNITE(QFHAELA,mode1,1,RFHAELA),(GXGAELA_add_to_stack).nonlocals));
 /* line 2366: */
for ( ;; )
{ 
 /* line 2367: */
if ( !(((*LFHAELA_stack)!=GWDAELA_nildpstack)) ) break;
SFHAELA_stack_ptr = LFHAELA_stack;
 /* line 2368: */
for ( ;; )
{ 
 /* line 2369: */
 /* line 2374: */
if ( !(((*SFHAELA_stack_ptr)!=GWDAELA_nildpstack)) ) break;
TFHAELA_caddr = (*(&((&((*SFHAELA_stack_ptr)->Data))->Address)));
 /* line 2375: */
A_CALLPROC(IYGAELA_trace,(Db, VEHAELA_gcdata, QEHAELA_df, (*(&((*SFHAELA_stack_ptr)->Data)))),(Db, VEHAELA_gcdata, QEHAELA_df, (*(&((*SFHAELA_stack_ptr)->Data))),(IYGAELA_trace).nonlocals));
 /* line 2383: */
for ( ;; )
{ 
 /* line 2384: */
if ( !(!QACAELA_((*(&((&((*SFHAELA_stack_ptr)->Data))->Address))), TFHAELA_caddr)) ) break;
 /* line 2385: */
SFHAELA_stack_ptr = (&((*SFHAELA_stack_ptr)->Rest));
}
 /* line 2386: */
(*SFHAELA_stack_ptr) = (*(&((*SFHAELA_stack_ptr)->Rest)));
 /* line 2387: */
 /* line 2388: */
UFHAELA = (&((*(&(VEHAELA_gcdata->Gcinfo)))->Stack_size)) ;
(*UFHAELA)-=1;
}
 /* line 2389: */
}
 /* line 2390: */
 /* line 2391: */
WFHAELA = KFHAELA_indirections.upb;
for ( VFHAELA_i = 1;
VFHAELA_i <= WFHAELA;
VFHAELA_i += 1 )
{ 
XFHAELA_ind = (&A_VINDEX(KFHAELA_indirections,VFHAELA_i));
 /* line 2392: */
YFHAELA = (*(&(VEHAELA_gcdata->Indirs_wanted))) ;
ZFHAELA_wanted = (*(&A_VINDEX(YFHAELA,VFHAELA_i)));
 /* line 2393: */
AGHAELA = (*(&(XFHAELA_ind->Shaky)));
if ( AGHAELA )
{AGHAELA = ZFHAELA_wanted;
}
 /* line 2394: */
if ( AGHAELA )
{AGHAELA = AUGAELA_shaky_traced(Db, VEHAELA_gcdata, QEHAELA_df, XFHAELA_ind);
}
 /* line 2395: */
if ( ! AGHAELA )
{BGHAELA = !(*(&(XFHAELA_ind->Shaky)));
if ( BGHAELA )
{BGHAELA = ZFHAELA_wanted;
}
AGHAELA = BGHAELA;
}
 /* line 2396: */
if ( ! AGHAELA )
{AGHAELA = LEHAELA_instore_indir(QEHAELA_df, (*XFHAELA_ind), VFHAELA_i);
}
if ( !AGHAELA )
{ 
 /* line 2397: */
MKGAELA_make_gcnil(XFHAELA_ind);
} 
}
 /* line 2398: */
CGHAELA = (&(QEHAELA_df->Instore_vars)) ;
(*CGHAELA) = JWDAELA_nilvarlist;
 /* line 2399: */
A_CLOSURE( EGHAELA_generator, FGHAELA_generator, GGHAELA_generator );
A_CALLPROC(EGHAELA_generator,(A68_TRUE, &KGHAELA),(A68_TRUE, &KGHAELA,(EGHAELA_generator).nonlocals));
JGHAELA_new_freelist = KGHAELA;
 /* line 2400: */
A_CLOSURE( MGHAELA_generator, NGHAELA_generator, OGHAELA_generator );
A_CALLPROC(MGHAELA_generator,(A68_FALSE, &RGHAELA),(A68_FALSE, &RGHAELA,(MGHAELA_generator).nonlocals));
SGHAELA = (&(QEHAELA_df->Free_block_dps)) ;
(*SGHAELA) = RGHAELA;
 /* line 2401: */
TGHAELA_count = 0;
 /* line 2402: */
UGHAELA_last_free_block = 0;
 /* line 2403: */
VGHAELA_first = A68_TRUE;
 /* line 2404: */
WGHAELA_first_block = A68_TRUE;
 /* line 2405: */
XGHAELA_size_of_free_space = (*(&(QEHAELA_df->Size_of_free_space)));
 /* line 2406: */
YGHAELA_freelist_index = (*(&(QEHAELA_df->Freelist_index)));
 /* line 2407: */
ZGHAELA_freeblock_ptr = (*(&(QEHAELA_df->Freeblock_ptr)));
 /* line 2408: */
AHHAELA_last_free = (*(&(QEHAELA_df->Last_free)));
 /* line 2409: */
BHHAELA_current_free = (*(&(QEHAELA_df->Current_free)));
 /* line 2410: */
CHHAELA_first_free = (*(&(QEHAELA_df->First_free)));
 /* line 2411: */
(*XGHAELA_size_of_free_space) = 0;
 /* line 2412: */
DHHAELA_blocks_used = 0;
 /* line 2413: */
(*YGHAELA_freelist_index) = 1;
 /* line 2414: */
(*ZGHAELA_freeblock_ptr) = 1;
 /* line 2416: */
 /* line 2418: */
FHHAELA = (ANBAELA_fixed_overhead+1);
GHHAELA = (-1);
for ( EHHAELA_i = (*(*(&(QEHAELA_df->File_size))));
( GHHAELA > 0 && EHHAELA_i <= FHHAELA) ||
( GHHAELA < 0 && EHHAELA_i >= FHHAELA) ||
( GHHAELA == 0 ) ;
EHHAELA_i += GHHAELA )
{ 
 /* line 2419: */
if ( ENGAELA_is_free(GFHAELA_blocks_wanted, EHHAELA_i) )
{ 
 /* line 2420: */
if ( ((TGHAELA_count+=1)<=SICAELA_max_ints_in_block) )
{ 
 /* line 2421: */
 /* line 2422: */
HHHAELA = (&A_VINDEX(JGHAELA_new_freelist,TGHAELA_count)) ;
(*HHHAELA) = EHHAELA_i;
} 
else
{ 
if ( WGHAELA_first_block )
{ 
WGHAELA_first_block = A68_FALSE;
 /* line 2423: */
IHHAELA = 1 ;
(*BHHAELA_current_free) = (*(&A_VINDEX(JGHAELA_new_freelist,IHHAELA)));
 /* line 2424: */
(*CHHAELA_first_free) = (*BHHAELA_current_free);
 /* line 2425: */
A_CLOSURE( KHHAELA_generator, LHHAELA_generator, MHHAELA_generator );
A_CALLPROC(KHHAELA_generator,(A68_FALSE, &PHHAELA),(A68_FALSE, &PHHAELA,(KHHAELA_generator).nonlocals));
A_VASSIGN2(JGHAELA_new_freelist,PHHAELA,A68_INT ) ;
QHHAELA = (&(QEHAELA_df->Freelist)) ;
(*QHHAELA) = PHHAELA;
 /* line 2428: */
KVFAELA_freelist_to_disc(Db, QEHAELA_df, JGHAELA_new_freelist);
 /* line 2429: */
(*XGHAELA_size_of_free_space) = SICAELA_max_ints_in_block;
 /* line 2430: */
TGHAELA_count = 1;
 /* line 2431: */
 /* line 2432: */
RHHAELA = 1 ;
SHHAELA = (&A_VINDEX(JGHAELA_new_freelist,RHHAELA)) ;
(*SHHAELA) = EHHAELA_i;
} 
else
{ 
(*XGHAELA_size_of_free_space)+=SICAELA_max_ints_in_block;
 /* line 2433: */
KVFAELA_freelist_to_disc(Db, QEHAELA_df, JGHAELA_new_freelist);
 /* line 2434: */
TGHAELA_count = 1;
 /* line 2435: */
 /* line 2436: */
THHAELA = 1 ;
UHHAELA = (&A_VINDEX(JGHAELA_new_freelist,THHAELA)) ;
(*UHHAELA) = EHHAELA_i;
} 
} 
 /* line 2437: */
if ( VGHAELA_first )
{ 
VGHAELA_first = A68_FALSE;
 /* line 2438: */
VHHAELA = (-1);
} 
else
{ 
VHHAELA = (-UGHAELA_last_free_block);
} 
WHHAELA = (&A_VINDEX(JFHAELA_pagetable,EHHAELA_i)) ;
(*WHHAELA) = VHHAELA;
 /* line 2439: */
 /* line 2440: */
UGHAELA_last_free_block = EHHAELA_i;
} 
else
{ 
 /* line 2441: */
 /* line 2442: */
DHHAELA_blocks_used+=1;
} 
}
 /* line 2443: */
(*XGHAELA_size_of_free_space)+=TGHAELA_count;
 /* line 2444: */
 /* line 2445: */
if ( (TGHAELA_count!=0) )
{ 
 /* line 2446: */
if ( WGHAELA_first_block )
{ 
XHHAELA = 1 ;
(*BHHAELA_current_free) = (*(&A_VINDEX(JGHAELA_new_freelist,XHHAELA)));
 /* line 2447: */
(*CHHAELA_first_free) = (*(*(&(QEHAELA_df->Current_free))));
 /* line 2448: */
A_CLOSURE( ZHHAELA_generator, AIHAELA_generator, BIHAELA_generator );
(( BIHAELA_generator * ) ( ZHHAELA_generator.nonlocals )) -> TGHAELA_count = (&TGHAELA_count);
 /* line 2450: */
A_CALLPROC(ZHHAELA_generator,(A68_FALSE, &EIHAELA),(A68_FALSE, &EIHAELA,(ZHHAELA_generator).nonlocals));
GIHAELA = A_VTRIM(FIHAELA,(JGHAELA_new_freelist),A_VTSCRIPT(&(FIHAELA.upb),(JGHAELA_new_freelist).upb,1,TGHAELA_count)) ;
A_VASSIGN2(GIHAELA,EIHAELA,A68_INT ) ;
HIHAELA = (&(QEHAELA_df->Freelist)) ;
(*HIHAELA) = EIHAELA;
} 
 /* line 2451: */
 /* line 2452: */
KVFAELA_freelist_to_disc(Db, QEHAELA_df, A_VTRIM(IIHAELA,(JGHAELA_new_freelist),A_VTSCRIPT(&(IIHAELA.upb),(JGHAELA_new_freelist).upb,1,TGHAELA_count)));
} 
 /* line 2453: */
 /* line 2454: */
JIHAELA = A_HEAP(A68_INT ) ;
(*JIHAELA) = (*(&(QEHAELA_df->Free_block_dps))).upb ;
KIHAELA = (&(QEHAELA_df->Initial_free_block_dps)) ;
(*KIHAELA) = JIHAELA;
 /* line 2455: */
A_CLOSURE( MIHAELA_generator, NIHAELA_generator, OIHAELA_generator );
A_CALLPROC(MIHAELA_generator,(A68_FALSE, &RIHAELA),(A68_FALSE, &RIHAELA,(MIHAELA_generator).nonlocals));
DTFAELA_write_pagetable( Db, QEHAELA_df, JFHAELA_pagetable, &SIHAELA );
UIHAELA = A_HVEC(TIHAELA,SIHAELA,A68_97 ) ;
A_VASSIGN2(UIHAELA,RIHAELA,A68_97 ) ;
VIHAELA = (&(QEHAELA_df->Pagetable_dps)) ;
(*VIHAELA) = RIHAELA;
 /* line 2457: */
 /* line 2458: */
 /* line 2459: */
WIHAELA = A_HEAP(A68_BOOL ) ;
(*WIHAELA) = A68_FALSE ;
XIHAELA = (&(QEHAELA_df->Collectable)) ;
(*XIHAELA) = WIHAELA;
} 
} 
A_PROC_EXIT(noncompacting_garbage_collect);
return;
} 
#undef NL

A_STATIC A68_VOID  ZIHAELA_pre_df_to_chars(A68_109 * Db)
{ 
A68_100 * AJHAELA_df;
A68_97  BJHAELA;  /* avoid structure result */
A68_97 * CJHAELA;  /* YIELD */
A68_97 ** DJHAELA;  /* YIELD */
A68_243  EJHAELA;  /* OPERATORS - mode -> union mode */
A68_32  FJHAELA;  /* YIELD */
A68_97  GJHAELA;  /* avoid structure result */
A68_97  HJHAELA_new_pagetable_dp;
A68_97  IJHAELA;  /* avoid structure result */
A68_97 * JJHAELA;  /* YIELD */
A68_97 ** KJHAELA;  /* YIELD */
A68_106  LJHAELA_indirections;
A68_INT * MJHAELA_current_free;
A68_INT  NJHAELA_upb_indirs;
A68_INT  OJHAELA_bytes_left;
A68_INT  PJHAELA_num_indirs;
A68_INT  QJHAELA_next_free;
A68_106  RJHAELA;  /* OPERATORS - trim index */
A68_97  SJHAELA;  /* avoid structure result */
A68_97 * TJHAELA;  /* YIELD */
A68_97 ** UJHAELA;  /* YIELD */
A68_92  VJHAELA;  /* procedure value */
A68_INT * WJHAELA;  /* YIELD */
A68_VC  XJHAELA;  /* OPERATORS - trim index */
A68_VC  YJHAELA;  /* OPERATORS - trim index */
A68_VC  ZJHAELA;  /* avoid structure result */
A68_VC  AKHAELA;  /* YIELD */
A_PROC_ENTRY(pre_df_to_chars);
 /* line 2462: */
{ 
AJHAELA_df = (*(&(Db->Df)));
 /* line 2463: */
 /* line 2464: */
if ( ((*(&(AJHAELA_df->Freelist_ext))).upb!=0) )
{ 
KVFAELA_freelist_to_disc(Db, AJHAELA_df, (*(&(AJHAELA_df->Freelist_ext))));
} 
 /* line 2465: */
 /* line 2466: */
ZRFAELA_write_discptrs( Db, (*(&(AJHAELA_df->Free_block_dps))), A68_FALSE, &BJHAELA );
CJHAELA = A_HEAP(A68_97 ) ;
(*CJHAELA) = BJHAELA ;
DJHAELA = (&(AJHAELA_df->Freelist_dp)) ;
(*DJHAELA) = CJHAELA;
 /* line 2467: */
 /* line 2468: */
 /* line 2469: */
if ( ((*(&(AJHAELA_df->Pagetable_ext))).upb!=0) )
{ 
 /* line 2470: */
 /* line 2471: */
 /* line 2472: */
FJHAELA = (*(&(AJHAELA_df->Pagetable_ext))) ;
CNFAELA_write( Db, AJHAELA_df, A_UNITE(EJHAELA,mode2,2,FJHAELA), PVDAELA_nodps, DXDAELA_pagetable_ints, ((*(&(AJHAELA_df->Pagetable_ext))).upb*EDAAOST_int_size), FYDAELA_no_indirection, CYDAELA_not_assignable, LACAELA_niladdress, VVDAELA_noints, DVDAELA_nilpagetable, &GJHAELA );
HJHAELA_new_pagetable_dp = GJHAELA;
 /* line 2473: */
 /* line 2474: */
THFAELA_extend_dps((&(AJHAELA_df->Pagetable_dps)), HJHAELA_new_pagetable_dp);
} 
 /* line 2475: */
 /* line 2476: */
ZRFAELA_write_discptrs( Db, (*(&(AJHAELA_df->Pagetable_dps))), A68_FALSE, &IJHAELA );
JJHAELA = A_HEAP(A68_97 ) ;
(*JJHAELA) = IJHAELA ;
KJHAELA = (&(AJHAELA_df->Pagetable_dp)) ;
(*KJHAELA) = JJHAELA;
 /* line 2477: */
LJHAELA_indirections = (*(&(AJHAELA_df->Indirections)));
 /* line 2478: */
MJHAELA_current_free = (*(&(AJHAELA_df->Current_free)));
 /* line 2479: */
NJHAELA_upb_indirs = LJHAELA_indirections.upb;
 /* line 2480: */
OJHAELA_bytes_left = (SNBAELA_block_size-TICAELA_fixed_in_block);
 /* line 2481: */
PJHAELA_num_indirs = IYDAELA_min((OJHAELA_bytes_left/ABCAELA_indirection_size), NJHAELA_upb_indirs);
 /* line 2482: */
 /* line 2483: */
 /* line 2484: */
if ( (PJHAELA_num_indirs!=NJHAELA_upb_indirs) )
{ 
 /* line 2485: */
 /* line 2486: */
HSFAELA_write_indirs( Db, A_VTRIM(RJHAELA,(LJHAELA_indirections),A_VTSCRIPT(&(RJHAELA.upb),(LJHAELA_indirections).upb,(PJHAELA_num_indirs+1),NJHAELA_upb_indirs)), &SJHAELA );
TJHAELA = A_HEAP(A68_97 ) ;
(*TJHAELA) = SJHAELA ;
UJHAELA = (&(AJHAELA_df->Indirs_dp)) ;
(*UJHAELA) = TJHAELA;
} 
 /* line 2487: */
KJFAELA_flush_buffer(Db, AJHAELA_df);
 /* line 2488: */
 /* line 2489: */
if ( ((*(*(&(AJHAELA_df->Cbufpos))))>0) )
{ 
 /* line 2490: */
VJHAELA.fn.fn_global = GNBAELA_keepsake_msg;
VJHAELA.nonlocals = A68_NIL;
UOBAELA_put_block((*(*(&(AJHAELA_df->File)))), (*(&(AJHAELA_df->Block_buffer))), (*(*(&(AJHAELA_df->Current_free)))), VJHAELA);
 /* line 2491: */
WJHAELA = (*(&(AJHAELA_df->Write_transfers))) ;
(*WJHAELA)+=1;
 /* line 2492: */
MQBAELA_clear_rvc((*(&(AJHAELA_df->Block_buffer))));
 /* line 2493: */
 /* line 2494: */
 /* line 2495: */
XJHAELA = (*(&(AJHAELA_df->Block_buffer))) ;
JCCAELA_make_block_heading( 0, 0, 0, 0, 0, 1, &ZJHAELA );
AKHAELA = A_VTRIM(YJHAELA,(XJHAELA),A_VTSCRIPT(&(YJHAELA.upb),(XJHAELA).upb,(RICAELA_actual_block_size+1),(RICAELA_actual_block_size+CCCAELA_block_heading_size))) ;
A_VASSIGN2(ZJHAELA,AKHAELA,A68_CHAR );
 /* line 2496: */
 /* line 2497: */
 /* line 2498: */
(*MJHAELA_current_free) = JDFAELA_get_free_block(Db, AJHAELA_df);
} 
} 
A_PROC_EXIT(pre_df_to_chars);
return;
} 
#undef NL

A_STATIC A68_VOID  CKHAELA_df_to_chars(A68_109 * Db, A68_VC  *ReturnedValue)
{ 
A68_100 * DKHAELA_df;
A68_INT * EKHAELA_freeblock_ptr;
A68_INT * FKHAELA_freelist_index;
A68_INT * GKHAELA_current_free;
A68_INT  HKHAELA_ptr;
A68_VC  IKHAELA_block_buffer;
A68_106  JKHAELA_indirections;
A68_INT  KKHAELA_bytes_left;
A68_INT  LKHAELA_num_indirs;
A68_INT  MKHAELA_lwb;
A68_VC  NKHAELA;  /* OPERATORS - trim index */
A68_VC  OKHAELA;  /* avoid structure result */
A68_VC  PKHAELA;  /* YIELD */
A68_VC  QKHAELA;  /* OPERATORS - trim index */
A68_VC  RKHAELA;  /* avoid structure result */
A68_VC  SKHAELA;  /* YIELD */
A68_VC  TKHAELA;  /* OPERATORS - trim index */
A68_VC  UKHAELA;  /* avoid structure result */
A68_VC  VKHAELA;  /* YIELD */
A68_VC  WKHAELA;  /* OPERATORS - trim index */
A68_VC  XKHAELA;  /* avoid structure result */
A68_VC  YKHAELA;  /* YIELD */
A68_VC  ZKHAELA;  /* OPERATORS - trim index */
A68_VC  ALHAELA;  /* avoid structure result */
A68_VC  BLHAELA;  /* YIELD */
A68_VC  CLHAELA;  /* OPERATORS - trim index */
A68_VC  DLHAELA;  /* avoid structure result */
A68_VC  ELHAELA;  /* YIELD */
A68_VC  FLHAELA;  /* OPERATORS - trim index */
A68_VC  GLHAELA;  /* avoid structure result */
A68_VC  HLHAELA;  /* YIELD */
A68_VC  ILHAELA;  /* OPERATORS - trim index */
A68_VC  JLHAELA;  /* avoid structure result */
A68_VC  KLHAELA;  /* YIELD */
A68_VC  LLHAELA;  /* OPERATORS - trim index */
A68_VC  MLHAELA;  /* avoid structure result */
A68_VC  NLHAELA;  /* YIELD */
A68_VC  OLHAELA;  /* OPERATORS - trim index */
A68_VC  PLHAELA;  /* avoid structure result */
A68_VC  QLHAELA;  /* YIELD */
A68_VC  RLHAELA;  /* OPERATORS - trim index */
A68_VC  SLHAELA;  /* avoid structure result */
A68_VC  TLHAELA;  /* YIELD */
A68_VC  ULHAELA;  /* OPERATORS - trim index */
A68_VC  VLHAELA;  /* avoid structure result */
A68_VC  WLHAELA;  /* YIELD */
A68_VC  XLHAELA;  /* OPERATORS - trim index */
A68_VC  YLHAELA;  /* avoid structure result */
A68_VC  ZLHAELA;  /* YIELD */
A68_INT  AMHAELA_i;
A68_INT  BMHAELA;  /* to part of loop */
A68_VC  CMHAELA;  /* OPERATORS - trim index */
A68_VC  DMHAELA;  /* avoid structure result */
A68_VC  EMHAELA;  /* YIELD */
A68_VC  FMHAELA;  /* clause result */
A_PROC_ENTRY(df_to_chars);
 /* line 2501: */
{ 
DKHAELA_df = (*(&(Db->Df)));
 /* line 2502: */
EKHAELA_freeblock_ptr = (*(&(DKHAELA_df->Freeblock_ptr)));
 /* line 2503: */
FKHAELA_freelist_index = (*(&(DKHAELA_df->Freelist_index)));
 /* line 2504: */
 /* line 2505: */
if ( ((*(*(&(DKHAELA_df->Freeblock_ptr))))>(*(&(DKHAELA_df->Free_block_dps))).upb) )
{ 
(*EKHAELA_freeblock_ptr) = ((((*(*(&(DKHAELA_df->Freelist_index))))-1)/SICAELA_max_ints_in_block)+1);
 /* line 2506: */
 /* line 2507: */
 /* line 2508: */
(*FKHAELA_freelist_index) = ((*(*(&(DKHAELA_df->Freelist_index))))-(((*(*(&(DKHAELA_df->Freeblock_ptr))))-1)*SICAELA_max_ints_in_block));
} 
 /* line 2509: */
GKHAELA_current_free = (*(&(DKHAELA_df->Current_free)));
 /* line 2510: */
HKHAELA_ptr = 0;
 /* line 2511: */
IKHAELA_block_buffer = (*(&(DKHAELA_df->Block_buffer)));
 /* line 2512: */
JKHAELA_indirections = (*(&(DKHAELA_df->Indirections)));
 /* line 2513: */
KKHAELA_bytes_left = (SNBAELA_block_size-TICAELA_fixed_in_block);
 /* line 2514: */
LKHAELA_num_indirs = IYDAELA_min((KKHAELA_bytes_left/ABCAELA_indirection_size), JKHAELA_indirections.upb);
 /* line 2518: */
MKHAELA_lwb = (HKHAELA_ptr+1);
 /* line 2519: */
VRBAELA_itovc( JSBAELA_file_check, &OKHAELA );
PKHAELA = A_VTRIM(NKHAELA,(IKHAELA_block_buffer),A_VTSCRIPT(&(NKHAELA.upb),(IKHAELA_block_buffer).upb,MKHAELA_lwb,(HKHAELA_ptr+=EDAAOST_int_size))) ;
A_VASSIGN2(OKHAELA,PKHAELA,A68_CHAR );
 /* line 2520: */
MKHAELA_lwb = (HKHAELA_ptr+1);
 /* line 2521: */
VRBAELA_itovc( LKHAELA_num_indirs, &RKHAELA );
SKHAELA = A_VTRIM(QKHAELA,(IKHAELA_block_buffer),A_VTSCRIPT(&(QKHAELA.upb),(IKHAELA_block_buffer).upb,MKHAELA_lwb,(HKHAELA_ptr+=EDAAOST_int_size))) ;
A_VASSIGN2(RKHAELA,SKHAELA,A68_CHAR );
 /* line 2522: */
MKHAELA_lwb = (HKHAELA_ptr+1);
 /* line 2523: */
XVBAELA_dp_to_chars( (*(*(&(DKHAELA_df->Root)))), &UKHAELA );
VKHAELA = A_VTRIM(TKHAELA,(IKHAELA_block_buffer),A_VTSCRIPT(&(TKHAELA.upb),(IKHAELA_block_buffer).upb,MKHAELA_lwb,(HKHAELA_ptr+=TSBAELA_discptr_size))) ;
A_VASSIGN2(UKHAELA,VKHAELA,A68_CHAR );
 /* line 2524: */
MKHAELA_lwb = (HKHAELA_ptr+1);
 /* line 2525: */
 /* line 2526: */
XVBAELA_dp_to_chars( (*(*(&(DKHAELA_df->Indirs_dp)))), &XKHAELA );
YKHAELA = A_VTRIM(WKHAELA,(IKHAELA_block_buffer),A_VTSCRIPT(&(WKHAELA.upb),(IKHAELA_block_buffer).upb,MKHAELA_lwb,(HKHAELA_ptr+=TSBAELA_discptr_size))) ;
A_VASSIGN2(XKHAELA,YKHAELA,A68_CHAR );
 /* line 2527: */
MKHAELA_lwb = (HKHAELA_ptr+1);
 /* line 2528: */
 /* line 2529: */
XVBAELA_dp_to_chars( (*(*(&(DKHAELA_df->Freelist_dp)))), &ALHAELA );
BLHAELA = A_VTRIM(ZKHAELA,(IKHAELA_block_buffer),A_VTSCRIPT(&(ZKHAELA.upb),(IKHAELA_block_buffer).upb,MKHAELA_lwb,(HKHAELA_ptr+=TSBAELA_discptr_size))) ;
A_VASSIGN2(ALHAELA,BLHAELA,A68_CHAR );
 /* line 2530: */
MKHAELA_lwb = (HKHAELA_ptr+1);
 /* line 2531: */
 /* line 2532: */
XVBAELA_dp_to_chars( (*(*(&(DKHAELA_df->Pagetable_dp)))), &DLHAELA );
ELHAELA = A_VTRIM(CLHAELA,(IKHAELA_block_buffer),A_VTSCRIPT(&(CLHAELA.upb),(IKHAELA_block_buffer).upb,MKHAELA_lwb,(HKHAELA_ptr+=TSBAELA_discptr_size))) ;
A_VASSIGN2(DLHAELA,ELHAELA,A68_CHAR );
 /* line 2534: */
MKHAELA_lwb = (HKHAELA_ptr+1);
 /* line 2535: */
VRBAELA_itovc( (*(*(&(DKHAELA_df->Generation)))), &GLHAELA );
HLHAELA = A_VTRIM(FLHAELA,(IKHAELA_block_buffer),A_VTSCRIPT(&(FLHAELA.upb),(IKHAELA_block_buffer).upb,MKHAELA_lwb,(HKHAELA_ptr+=EDAAOST_int_size))) ;
A_VASSIGN2(GLHAELA,HLHAELA,A68_CHAR );
 /* line 2536: */
MKHAELA_lwb = (HKHAELA_ptr+1);
 /* line 2537: */
VRBAELA_itovc( (*(*(&(DKHAELA_df->File_size)))), &JLHAELA );
KLHAELA = A_VTRIM(ILHAELA,(IKHAELA_block_buffer),A_VTSCRIPT(&(ILHAELA.upb),(IKHAELA_block_buffer).upb,MKHAELA_lwb,(HKHAELA_ptr+=EDAAOST_int_size))) ;
A_VASSIGN2(JLHAELA,KLHAELA,A68_CHAR );
 /* line 2538: */
MKHAELA_lwb = (HKHAELA_ptr+1);
 /* line 2539: */
VRBAELA_itovc( (*(*(&(DKHAELA_df->Old_file_size)))), &MLHAELA );
NLHAELA = A_VTRIM(LLHAELA,(IKHAELA_block_buffer),A_VTSCRIPT(&(LLHAELA.upb),(IKHAELA_block_buffer).upb,MKHAELA_lwb,(HKHAELA_ptr+=EDAAOST_int_size))) ;
A_VASSIGN2(MLHAELA,NLHAELA,A68_CHAR );
 /* line 2540: */
MKHAELA_lwb = (HKHAELA_ptr+1);
 /* line 2541: */
VRBAELA_itovc( (*GKHAELA_current_free), &PLHAELA );
QLHAELA = A_VTRIM(OLHAELA,(IKHAELA_block_buffer),A_VTSCRIPT(&(OLHAELA.upb),(IKHAELA_block_buffer).upb,MKHAELA_lwb,(HKHAELA_ptr+=EDAAOST_int_size))) ;
A_VASSIGN2(PLHAELA,QLHAELA,A68_CHAR );
 /* line 2542: */
MKHAELA_lwb = (HKHAELA_ptr+1);
 /* line 2543: */
VRBAELA_itovc( (*(*(&(DKHAELA_df->Freeblock_ptr)))), &SLHAELA );
TLHAELA = A_VTRIM(RLHAELA,(IKHAELA_block_buffer),A_VTSCRIPT(&(RLHAELA.upb),(IKHAELA_block_buffer).upb,MKHAELA_lwb,(HKHAELA_ptr+=EDAAOST_int_size))) ;
A_VASSIGN2(SLHAELA,TLHAELA,A68_CHAR );
 /* line 2544: */
MKHAELA_lwb = (HKHAELA_ptr+1);
 /* line 2545: */
VRBAELA_itovc( (*(*(&(DKHAELA_df->Freelist_index)))), &VLHAELA );
WLHAELA = A_VTRIM(ULHAELA,(IKHAELA_block_buffer),A_VTSCRIPT(&(ULHAELA.upb),(IKHAELA_block_buffer).upb,MKHAELA_lwb,(HKHAELA_ptr+=EDAAOST_int_size))) ;
A_VASSIGN2(VLHAELA,WLHAELA,A68_CHAR );
 /* line 2546: */
MKHAELA_lwb = (HKHAELA_ptr+1);
 /* line 2547: */
 /* line 2548: */
VRBAELA_itovc( (*(*(&(DKHAELA_df->Size_of_free_space)))), &YLHAELA );
ZLHAELA = A_VTRIM(XLHAELA,(IKHAELA_block_buffer),A_VTSCRIPT(&(XLHAELA.upb),(IKHAELA_block_buffer).upb,MKHAELA_lwb,(HKHAELA_ptr+=EDAAOST_int_size))) ;
A_VASSIGN2(YLHAELA,ZLHAELA,A68_CHAR );
 /* line 2549: */
 /* line 2550: */
BMHAELA = LKHAELA_num_indirs;
for ( AMHAELA_i = 1;
AMHAELA_i <= BMHAELA;
AMHAELA_i += 1 )
{ 
MKHAELA_lwb = (HKHAELA_ptr+1);
 /* line 2551: */
 /* line 2552: */
 /* line 2553: */
KBCAELA_indir_to_chars( (*(&A_VINDEX(JKHAELA_indirections,AMHAELA_i))), &DMHAELA );
EMHAELA = A_VTRIM(CMHAELA,(IKHAELA_block_buffer),A_VTSCRIPT(&(CMHAELA.upb),(IKHAELA_block_buffer).upb,MKHAELA_lwb,(HKHAELA_ptr+=ABCAELA_indirection_size))) ;
A_VASSIGN2(DMHAELA,EMHAELA,A68_CHAR );
}
 /* line 2554: */
 /* line 2555: */
FMHAELA = IKHAELA_block_buffer;
} 
A_PROC_EXIT(df_to_chars);
*ReturnedValue = (FMHAELA);
return;
} 
#undef NL
 /* line 2558: */

A_STATIC A68_VOID  KMHAELA_finish_shell(A68_109 * Db, A68_300  File, A68_92  Msg, A68_BOOL  Close)
{ 
A68_100 * LMHAELA_df;
A68_300  OMHAELA;  /* united object - for case conformity */
A68_100 * PMHAELA_df;
A68_97  QMHAELA;  /* clause result */
A68_97  RMHAELA_dp;
A68_97  SMHAELA_root;
A68_97 * TMHAELA;  /* YIELD */
A68_97 ** UMHAELA;  /* YIELD */
A68_VC  VMHAELA;  /* avoid structure result */
A68_VC  WMHAELA_root_block;
A68_INT  XMHAELA_i;
A68_INT  YMHAELA;  /* to part of loop */
A68_92  ZMHAELA;  /* procedure value */
A68_INT * ANHAELA;  /* YIELD */
A68_100 ** BNHAELA;  /* YIELD */
A_PROC_ENTRY(finish_shell);
 /* line 2559: */
{ 
TEEAELA_check_valid_db(Db);
 /* line 2560: */
LMHAELA_df = (*(&(Db->Df)));
 /* line 2561: */
PEEAELA_check_nilfile(LMHAELA_df);
 /* line 2562: */
LLFAELA_check_not_appending(LMHAELA_df, NMHAELA);
 /* line 2563: */
 /* line 2564: */
OMHAELA = File ;
switch ( OMHAELA.mode )
{ 
case 1: /* REF STRUCT(REF MODE97,REF MODE97,REF MODE97,REF MODE97,REF MODE97,REF MODE101,REF MODE101,REF REF MODE102,REF REF MODE102,REF MODE103,REF MODE26,REF MODE26,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF INT,REF MODE32,REF MODE32,REF MODE32,REF MODE104,REF MODE105,REF MODE106,REF BOOL,REF BOOL,REF BOOL,REF BOOL)  */
PMHAELA_df = (OMHAELA.data.mode1);
 /* line 2565: */
QMHAELA = (*(*(&(PMHAELA_df->Root))));
break;
case 2: /* STRUCT(BITS,INT,INT,INT,INT,INT,BITS)  */
RMHAELA_dp = (OMHAELA.data.mode2);
 /* line 2566: */
QMHAELA = RMHAELA_dp;
break;
default: 
A_IMP_SKIP ;
break;
} 
SMHAELA_root = QMHAELA;
 /* line 2567: */
TMHAELA = A_HEAP(A68_97 ) ;
(*TMHAELA) = SMHAELA_root ;
UMHAELA = (&(LMHAELA_df->Root)) ;
(*UMHAELA) = TMHAELA;
 /* line 2568: */
DFEAELA_check_forgery_write(Db, SMHAELA_root);
 /* line 2569: */
ZIHAELA_pre_df_to_chars(Db);
 /* line 2570: */
CKHAELA_df_to_chars( Db, &VMHAELA );
WMHAELA_root_block = VMHAELA;
 /* line 2571: */
 /* line 2572: */
YMHAELA = ANBAELA_fixed_overhead;
for ( XMHAELA_i = 1;
XMHAELA_i <= YMHAELA;
XMHAELA_i += 1 )
{ 
 /* line 2573: */
ZMHAELA.fn.fn_global = GNBAELA_keepsake_msg;
ZMHAELA.nonlocals = A68_NIL;
UOBAELA_put_block((*(*(&(LMHAELA_df->File)))), WMHAELA_root_block, XMHAELA_i, ZMHAELA);
}
 /* line 2574: */
ANHAELA = (*(&(LMHAELA_df->Write_transfers))) ;
(*ANHAELA)+=ANBAELA_fixed_overhead;
 /* line 2575: */
 /* line 2576: */
if ( Close )
{ 
XQBAOSI_close_file((*(*(&(LMHAELA_df->File)))), Msg);
 /* line 2577: */
 /* line 2578: */
 /* line 2579: */
BNHAELA = (&(Db->Df)) ;
(*BNHAELA) = QUDAELA_nilfile;
} 
} 
A_PROC_EXIT(finish_shell);
return;
} 
#undef NL

A_STATIC A68_VOID  ENHAELA_set_up_db(A68_109 * Db, A68_VC  Db_name)
{ 
A68_BITS * FNHAELA;  /* YIELD */
A68_BITS ** GNHAELA;  /* YIELD */
A68_VC  HNHAELA;  /* avoid structure result */
A68_VC * INHAELA;  /* YIELD */
A_PROC_ENTRY(set_up_db);
 /* line 2582: */
{ 
FNHAELA = A_HEAP(A68_BITS ) ;
(*FNHAELA) = BNBAELA_is_setup ;
GNHAELA = (&(Db->Setup)) ;
(*GNHAELA) = FNHAELA;
 /* line 2583: */
 /* line 2584: */
LWDAELA_makervc( Db_name, &HNHAELA );
INHAELA = (&(Db->Db_name)) ;
(*INHAELA) = HNHAELA;
} 
A_PROC_EXIT(set_up_db);
return;
} 
#undef NL
 /* line 2587: */

A_STATIC A68_109 * ONHAELA_use_fixed(A68_VC  Fixed, A68_VC  Db_name, A68_102 * File, A68_BOOL  Writeable, A68_BOOL  Last_update_failed)
{ 
A68_109 * PNHAELA_db;
A68_100 * QNHAELA_new_df;
A68_102 ** RNHAELA;  /* YIELD */
A68_102 *** SNHAELA;  /* YIELD */
A68_INT  TNHAELA_ptr;
A68_INT * UNHAELA;  /* YIELD */
A68_INT ** VNHAELA;  /* YIELD */
A68_INT * WNHAELA;  /* YIELD */
A68_INT ** XNHAELA;  /* YIELD */
A68_31  ZNHAELA_generator;   /* proc value of non-global proc */
A68_VC  EOHAELA;  /* avoid structure result */
A68_VC * FOHAELA;  /* YIELD */
A68_INT  GOHAELA_lwb;
A68_VC  HOHAELA;  /* OPERATORS - trim index */
A68_INT  IOHAELA_indirs_in_fixed_block;
A68_INT * JOHAELA;  /* YIELD */
A68_INT ** KOHAELA;  /* YIELD */
A68_INT * LOHAELA;  /* YIELD */
A68_INT ** MOHAELA;  /* YIELD */
A68_VC  NOHAELA;  /* OPERATORS - trim index */
A68_97  OOHAELA;  /* avoid structure result */
A68_97 * POHAELA;  /* YIELD */
A68_97 ** QOHAELA;  /* YIELD */
A68_VC  ROHAELA;  /* OPERATORS - trim index */
A68_97  SOHAELA;  /* avoid structure result */
A68_97 * TOHAELA;  /* YIELD */
A68_97 ** UOHAELA;  /* YIELD */
A68_VC  VOHAELA;  /* OPERATORS - trim index */
A68_97  WOHAELA;  /* avoid structure result */
A68_97 * XOHAELA;  /* YIELD */
A68_97 ** YOHAELA;  /* YIELD */
A68_VC  ZOHAELA;  /* OPERATORS - trim index */
A68_97  APHAELA;  /* avoid structure result */
A68_97 * BPHAELA;  /* YIELD */
A68_97 ** CPHAELA;  /* YIELD */
A68_VC  DPHAELA;  /* OPERATORS - trim index */
A68_INT * EPHAELA;  /* YIELD */
A68_INT ** FPHAELA;  /* YIELD */
A68_VC  GPHAELA;  /* OPERATORS - trim index */
A68_INT * HPHAELA;  /* YIELD */
A68_INT ** IPHAELA;  /* YIELD */
A68_VC  JPHAELA;  /* OPERATORS - trim index */
A68_INT * KPHAELA;  /* YIELD */
A68_INT ** LPHAELA;  /* YIELD */
A68_VC  MPHAELA;  /* OPERATORS - trim index */
A68_INT * NPHAELA;  /* YIELD */
A68_INT ** OPHAELA;  /* YIELD */
A68_VC  PPHAELA;  /* OPERATORS - trim index */
A68_INT * QPHAELA;  /* YIELD */
A68_INT ** RPHAELA;  /* YIELD */
A68_INT * SPHAELA;  /* YIELD */
A68_INT ** TPHAELA;  /* YIELD */
A68_VC  UPHAELA;  /* OPERATORS - trim index */
A68_INT * VPHAELA;  /* YIELD */
A68_INT ** WPHAELA;  /* YIELD */
A68_VC  XPHAELA;  /* OPERATORS - trim index */
A68_INT * YPHAELA;  /* YIELD */
A68_INT ** ZPHAELA;  /* YIELD */
A68_INT * AQHAELA;  /* YIELD */
A68_INT ** BQHAELA;  /* YIELD */
A68_BOOL * CQHAELA;  /* YIELD */
A68_BOOL ** DQHAELA;  /* YIELD */
A68_BOOL * EQHAELA;  /* YIELD */
A68_BOOL ** FQHAELA;  /* YIELD */
A68_BOOL * GQHAELA;  /* YIELD */
A68_BOOL ** HQHAELA;  /* YIELD */
A68_BOOL * IQHAELA;  /* YIELD */
A68_BOOL ** JQHAELA;  /* YIELD */
A68_97 * KQHAELA;  /* YIELD */
A68_97 ** LQHAELA;  /* YIELD */
A68_INT * MQHAELA;  /* YIELD */
A68_INT ** NQHAELA;  /* YIELD */
A68_104 ** OQHAELA;  /* YIELD */
A68_105 ** PQHAELA;  /* YIELD */
A68_33  RQHAELA_generator;   /* proc value of non-global proc */
A68_32  WQHAELA;  /* avoid structure result */
A68_32 * XQHAELA;  /* YIELD */
A68_33  ZQHAELA_generator;   /* proc value of non-global proc */
A68_32  ERHAELA;  /* avoid structure result */
A68_32 * FRHAELA;  /* YIELD */
A68_VC  GRHAELA;  /* avoid structure result */
A68_VC * HRHAELA;  /* YIELD */
A68_103  IRHAELA;  /* avoid structure result */
A68_103 * JRHAELA;  /* YIELD */
A68_103 ** KRHAELA;  /* YIELD */
A68_100 * LRHAELA;  /* YIELD */
A68_100 ** MRHAELA;  /* YIELD */
A68_100 * NRHAELA_df;
A68_106 * ORHAELA_indirections;
A68_INT  PRHAELA_indirs_not_in_fixed;
A68_153  RRHAELA_generator;   /* proc value of non-global proc */
A68_106  WRHAELA;  /* clause result */
A68_106  XRHAELA;  /* avoid structure result */
A68_153  ZRHAELA_generator;   /* proc value of non-global proc */
A68_106  ESHAELA;  /* avoid structure result */
A68_INT  FSHAELA_i;
A68_INT  GSHAELA;  /* to part of loop */
A68_INT  HSHAELA_lwb;
A68_VC  ISHAELA;  /* OPERATORS - trim index */
A68_98  JSHAELA;  /* avoid structure result */
A68_98 * KSHAELA;  /* YIELD */
A68_31  MSHAELA_generator;   /* proc value of non-global proc */
A68_VC  SSHAELA;  /* avoid structure result */
A68_VC  RSHAELA_ind_chars;
A68_214  TSHAELA;  /* OPERATORS - mode -> union mode */
A68_INT  USHAELA_i;
A68_INT  VSHAELA;  /* to part of loop */
A68_INT  WSHAELA_lwb;
A68_VC  XSHAELA;  /* OPERATORS - trim index */
A68_98  YSHAELA;  /* avoid structure result */
A68_98 * ZSHAELA;  /* YIELD */
A68_154  BTHAELA_generator;   /* proc value of non-global proc */
A68_101  GTHAELA;  /* avoid structure result */
A68_101 * HTHAELA;  /* YIELD */
A68_INT * ITHAELA;  /* YIELD */
A68_INT ** JTHAELA;  /* YIELD */
A68_214  KTHAELA;  /* OPERATORS - mode -> union mode */
A68_INT * LTHAELA_freeblock_ptr;
A68_101  MTHAELA;  /* OPERATORS - simple index */
A68_97  NTHAELA_cptr;
A68_33  PTHAELA_generator;   /* proc value of non-global proc */
A68_32  UTHAELA;  /* avoid structure result */
A68_32 * VTHAELA;  /* YIELD */
A68_214  WTHAELA;  /* OPERATORS - mode -> union mode */
A68_32  XTHAELA;  /* YIELD */
A68_INT  YTHAELA_count;
A68_BOOL  ZTHAELA_continue;
A68_INT  AUHAELA_i;
A68_101  BUHAELA;  /* OPERATORS - simple index */
A68_97  CUHAELA_free_dp;
A68_INT  DUHAELA_size;
A68_33  FUHAELA_generator;   /* proc value of non-global proc */
A68_32  KUHAELA;  /* avoid structure result */
A68_32 * LUHAELA;  /* YIELD */
A68_214  MUHAELA;  /* OPERATORS - mode -> union mode */
A68_32  NUHAELA;  /* YIELD */
A68_INT * OUHAELA;  /* YIELD */
A68_101  PUHAELA;  /* OPERATORS - simple index */
A68_97  QUHAELA_cptr;
A68_33  SUHAELA_generator;   /* proc value of non-global proc */
A68_32  XUHAELA;  /* avoid structure result */
A68_32 * YUHAELA;  /* YIELD */
A68_214  ZUHAELA;  /* OPERATORS - mode -> union mode */
A68_32  AVHAELA;  /* YIELD */
A68_154  CVHAELA_generator;   /* proc value of non-global proc */
A68_101  HVHAELA;  /* avoid structure result */
A68_101 * IVHAELA;  /* YIELD */
A68_214  JVHAELA;  /* OPERATORS - mode -> union mode */
A68_109 * KVHAELA;  /* clause result */
A_PROC_ENTRY(use_fixed);
 /* line 2588: */
{ 
PNHAELA_db = (A_HEAP(A68_109 ));
 /* line 2589: */
QNHAELA_new_df = (A_HEAP(A68_100 ));
 /* line 2590: */
RNHAELA = A_HEAP(A68_102 *) ;
(*RNHAELA) = File ;
SNHAELA = (&(QNHAELA_new_df->File)) ;
(*SNHAELA) = RNHAELA;
 /* line 2591: */
TNHAELA_ptr = EDAAOST_int_size;
 /* line 2592: */
UNHAELA = A_HEAP(A68_INT ) ;
(*UNHAELA) = 0 ;
VNHAELA = (&(QNHAELA_new_df->Cbufpos)) ;
(*VNHAELA) = UNHAELA;
 /* line 2593: */
WNHAELA = A_HEAP(A68_INT ) ;
(*WNHAELA) = 0 ;
XNHAELA = (&(QNHAELA_new_df->Last_free)) ;
(*XNHAELA) = WNHAELA;
 /* line 2594: */
A_CLOSURE( ZNHAELA_generator, AOHAELA_generator, BOHAELA_generator );
A_CALLPROC(ZNHAELA_generator,(A68_FALSE, &EOHAELA),(A68_FALSE, &EOHAELA,(ZNHAELA_generator).nonlocals));
FOHAELA = (&(QNHAELA_new_df->Block_buffer)) ;
(*FOHAELA) = EOHAELA;
 /* line 2595: */
GOHAELA_lwb = (TNHAELA_ptr+1);
 /* line 2596: */
IOHAELA_indirs_in_fixed_block = IRBAELA_vctoi(A_VTRIM(HOHAELA,(Fixed),A_VTSCRIPT(&(HOHAELA.upb),(Fixed).upb,GOHAELA_lwb,(TNHAELA_ptr+=EDAAOST_int_size))));
 /* line 2597: */
JOHAELA = A_HEAP(A68_INT ) ;
(*JOHAELA) = ANBAELA_fixed_overhead ;
KOHAELA = (&(QNHAELA_new_df->Read_transfers)) ;
(*KOHAELA) = JOHAELA;
 /* line 2598: */
LOHAELA = A_HEAP(A68_INT ) ;
(*LOHAELA) = 0 ;
MOHAELA = (&(QNHAELA_new_df->Write_transfers)) ;
(*MOHAELA) = LOHAELA;
 /* line 2600: */
GOHAELA_lwb = (TNHAELA_ptr+1);
 /* line 2601: */
 /* line 2602: */
IUBAELA_chars_to_dp( A_VTRIM(NOHAELA,(Fixed),A_VTSCRIPT(&(NOHAELA.upb),(Fixed).upb,GOHAELA_lwb,(TNHAELA_ptr+=TSBAELA_discptr_size))), &OOHAELA );
POHAELA = A_HEAP(A68_97 ) ;
(*POHAELA) = OOHAELA ;
QOHAELA = (&(QNHAELA_new_df->Root)) ;
(*QOHAELA) = POHAELA;
 /* line 2603: */
GOHAELA_lwb = (TNHAELA_ptr+1);
 /* line 2604: */
 /* line 2605: */
IUBAELA_chars_to_dp( A_VTRIM(ROHAELA,(Fixed),A_VTSCRIPT(&(ROHAELA.upb),(Fixed).upb,GOHAELA_lwb,(TNHAELA_ptr+=TSBAELA_discptr_size))), &SOHAELA );
TOHAELA = A_HEAP(A68_97 ) ;
(*TOHAELA) = SOHAELA ;
UOHAELA = (&(QNHAELA_new_df->Indirs_dp)) ;
(*UOHAELA) = TOHAELA;
 /* line 2606: */
GOHAELA_lwb = (TNHAELA_ptr+1);
 /* line 2607: */
 /* line 2608: */
IUBAELA_chars_to_dp( A_VTRIM(VOHAELA,(Fixed),A_VTSCRIPT(&(VOHAELA.upb),(Fixed).upb,GOHAELA_lwb,(TNHAELA_ptr+=TSBAELA_discptr_size))), &WOHAELA );
XOHAELA = A_HEAP(A68_97 ) ;
(*XOHAELA) = WOHAELA ;
YOHAELA = (&(QNHAELA_new_df->Freelist_dp)) ;
(*YOHAELA) = XOHAELA;
 /* line 2609: */
GOHAELA_lwb = (TNHAELA_ptr+1);
 /* line 2610: */
 /* line 2611: */
IUBAELA_chars_to_dp( A_VTRIM(ZOHAELA,(Fixed),A_VTSCRIPT(&(ZOHAELA.upb),(Fixed).upb,GOHAELA_lwb,(TNHAELA_ptr+=TSBAELA_discptr_size))), &APHAELA );
BPHAELA = A_HEAP(A68_97 ) ;
(*BPHAELA) = APHAELA ;
CPHAELA = (&(QNHAELA_new_df->Pagetable_dp)) ;
(*CPHAELA) = BPHAELA;
 /* line 2612: */
GOHAELA_lwb = (TNHAELA_ptr+1);
 /* line 2613: */
 /* line 2614: */
EPHAELA = A_HEAP(A68_INT ) ;
(*EPHAELA) = IRBAELA_vctoi(A_VTRIM(DPHAELA,(Fixed),A_VTSCRIPT(&(DPHAELA.upb),(Fixed).upb,GOHAELA_lwb,(TNHAELA_ptr+=EDAAOST_int_size)))) ;
FPHAELA = (&(QNHAELA_new_df->Generation)) ;
(*FPHAELA) = EPHAELA;
 /* line 2615: */
GOHAELA_lwb = (TNHAELA_ptr+1);
 /* line 2616: */
 /* line 2617: */
HPHAELA = A_HEAP(A68_INT ) ;
(*HPHAELA) = IRBAELA_vctoi(A_VTRIM(GPHAELA,(Fixed),A_VTSCRIPT(&(GPHAELA.upb),(Fixed).upb,GOHAELA_lwb,(TNHAELA_ptr+=EDAAOST_int_size)))) ;
IPHAELA = (&(QNHAELA_new_df->File_size)) ;
(*IPHAELA) = HPHAELA;
 /* line 2618: */
GOHAELA_lwb = (TNHAELA_ptr+1);
 /* line 2619: */
 /* line 2620: */
KPHAELA = A_HEAP(A68_INT ) ;
(*KPHAELA) = IRBAELA_vctoi(A_VTRIM(JPHAELA,(Fixed),A_VTSCRIPT(&(JPHAELA.upb),(Fixed).upb,GOHAELA_lwb,(TNHAELA_ptr+=EDAAOST_int_size)))) ;
LPHAELA = (&(QNHAELA_new_df->Old_file_size)) ;
(*LPHAELA) = KPHAELA;
 /* line 2621: */
GOHAELA_lwb = (TNHAELA_ptr+1);
 /* line 2622: */
 /* line 2623: */
NPHAELA = A_HEAP(A68_INT ) ;
(*NPHAELA) = IRBAELA_vctoi(A_VTRIM(MPHAELA,(Fixed),A_VTSCRIPT(&(MPHAELA.upb),(Fixed).upb,GOHAELA_lwb,(TNHAELA_ptr+=EDAAOST_int_size)))) ;
OPHAELA = (&(QNHAELA_new_df->Current_free)) ;
(*OPHAELA) = NPHAELA;
 /* line 2624: */
GOHAELA_lwb = (TNHAELA_ptr+1);
 /* line 2625: */
 /* line 2626: */
QPHAELA = A_HEAP(A68_INT ) ;
(*QPHAELA) = IRBAELA_vctoi(A_VTRIM(PPHAELA,(Fixed),A_VTSCRIPT(&(PPHAELA.upb),(Fixed).upb,GOHAELA_lwb,(TNHAELA_ptr+=EDAAOST_int_size)))) ;
RPHAELA = (&(QNHAELA_new_df->Freeblock_ptr)) ;
(*RPHAELA) = QPHAELA;
 /* line 2627: */
SPHAELA = A_HEAP(A68_INT ) ;
(*SPHAELA) = (*(*(&(QNHAELA_new_df->Current_free)))) ;
TPHAELA = (&(QNHAELA_new_df->First_free)) ;
(*TPHAELA) = SPHAELA;
 /* line 2628: */
GOHAELA_lwb = (TNHAELA_ptr+1);
 /* line 2629: */
 /* line 2630: */
VPHAELA = A_HEAP(A68_INT ) ;
(*VPHAELA) = IRBAELA_vctoi(A_VTRIM(UPHAELA,(Fixed),A_VTSCRIPT(&(UPHAELA.upb),(Fixed).upb,GOHAELA_lwb,(TNHAELA_ptr+=EDAAOST_int_size)))) ;
WPHAELA = (&(QNHAELA_new_df->Freelist_index)) ;
(*WPHAELA) = VPHAELA;
 /* line 2631: */
GOHAELA_lwb = (TNHAELA_ptr+1);
 /* line 2632: */
 /* line 2633: */
YPHAELA = A_HEAP(A68_INT ) ;
(*YPHAELA) = IRBAELA_vctoi(A_VTRIM(XPHAELA,(Fixed),A_VTSCRIPT(&(XPHAELA.upb),(Fixed).upb,GOHAELA_lwb,(TNHAELA_ptr+=EDAAOST_int_size)))) ;
ZPHAELA = (&(QNHAELA_new_df->Size_of_free_space)) ;
(*ZPHAELA) = YPHAELA;
 /* line 2634: */
AQHAELA = A_HEAP(A68_INT ) ;
(*AQHAELA) = 0 ;
BQHAELA = (&(QNHAELA_new_df->Freelist_ext_ptr)) ;
(*BQHAELA) = AQHAELA;
 /* line 2635: */
CQHAELA = A_HEAP(A68_BOOL ) ;
(*CQHAELA) = Writeable ;
DQHAELA = (&(QNHAELA_new_df->Writeable)) ;
(*DQHAELA) = CQHAELA;
 /* line 2636: */
EQHAELA = A_HEAP(A68_BOOL ) ;
(*EQHAELA) = Last_update_failed ;
FQHAELA = (&(QNHAELA_new_df->Last_update_failed)) ;
(*FQHAELA) = EQHAELA;
 /* line 2637: */
GQHAELA = A_HEAP(A68_BOOL ) ;
(*GQHAELA) = A68_FALSE ;
HQHAELA = (&(QNHAELA_new_df->Appending)) ;
(*HQHAELA) = GQHAELA;
 /* line 2638: */
IQHAELA = A_HEAP(A68_BOOL ) ;
(*IQHAELA) = A68_TRUE ;
JQHAELA = (&(QNHAELA_new_df->Collectable)) ;
(*JQHAELA) = IQHAELA;
 /* line 2639: */
KQHAELA = A_HEAP(A68_97 ) ;
(*KQHAELA) = UACAELA_nilptr ;
LQHAELA = (&(QNHAELA_new_df->Append_dp)) ;
(*LQHAELA) = KQHAELA;
 /* line 2640: */
MQHAELA = A_HEAP(A68_INT ) ;
(*MQHAELA) = 0 ;
NQHAELA = (&(QNHAELA_new_df->Appended_data)) ;
(*NQHAELA) = MQHAELA;
 /* line 2641: */
OQHAELA = (&(QNHAELA_new_df->Gc_ptrs)) ;
(*OQHAELA) = IWDAELA_niltraced;
 /* line 2642: */
PQHAELA = (&(QNHAELA_new_df->Instore_vars)) ;
(*PQHAELA) = JWDAELA_nilvarlist;
 /* line 2643: */
A_CLOSURE( RQHAELA_generator, SQHAELA_generator, TQHAELA_generator );
A_CALLPROC(RQHAELA_generator,(A68_FALSE, &WQHAELA),(A68_FALSE, &WQHAELA,(RQHAELA_generator).nonlocals));
XQHAELA = (&(QNHAELA_new_df->Freelist_ext)) ;
(*XQHAELA) = WQHAELA;
 /* line 2644: */
A_CLOSURE( ZQHAELA_generator, ARHAELA_generator, BRHAELA_generator );
A_CALLPROC(ZQHAELA_generator,(A68_FALSE, &ERHAELA),(A68_FALSE, &ERHAELA,(ZQHAELA_generator).nonlocals));
FRHAELA = (&(QNHAELA_new_df->Pagetable_ext)) ;
(*FRHAELA) = ERHAELA;
 /* line 2645: */
LWDAELA_makervc( Db_name, &GRHAELA );
HRHAELA = (&(QNHAELA_new_df->Name)) ;
(*HRHAELA) = GRHAELA;
 /* line 2646: */
 /* line 2647: */
ONEAELA_setup_writebuffer( (*(*(&(QNHAELA_new_df->Generation)))), &IRHAELA );
JRHAELA = A_HEAP(A68_103 ) ;
(*JRHAELA) = IRHAELA ;
KRHAELA = (&(QNHAELA_new_df->Write_buffer)) ;
(*KRHAELA) = JRHAELA;
 /* line 2648: */
LRHAELA = A_HEAP(A68_100 ) ;
(*LRHAELA) = (*QNHAELA_new_df) ;
MRHAELA = (&(PNHAELA_db->Df)) ;
(*MRHAELA) = LRHAELA;
 /* line 2650: */
ENHAELA_set_up_db(PNHAELA_db, Db_name);
 /* line 2651: */
NRHAELA_df = (*(&(PNHAELA_db->Df)));
 /* line 2652: */
ORHAELA_indirections = (&(NRHAELA_df->Indirections));
 /* line 2653: */
 /* line 2654: */
 /* line 2655: */
 /* line 2656: */
if ( YACAELA_is_nildp((*(*(&(NRHAELA_df->Indirs_dp))))) )
{ 
A_CLOSURE( RRHAELA_generator, SRHAELA_generator, TRHAELA_generator );
(( TRHAELA_generator * ) ( RRHAELA_generator.nonlocals )) -> IOHAELA_indirs_in_fixed_block = IOHAELA_indirs_in_fixed_block;
A_CALLPROC(RRHAELA_generator,(A68_FALSE, &XRHAELA),(A68_FALSE, &XRHAELA,(RRHAELA_generator).nonlocals));
WRHAELA = XRHAELA;
} 
else
{ 
PRHAELA_indirs_not_in_fixed = HJEAELA_array_size(PNHAELA_db, NRHAELA_df, (*(*(&(NRHAELA_df->Indirs_dp)))));
 /* line 2658: */
A_CLOSURE( ZRHAELA_generator, ASHAELA_generator, BSHAELA_generator );
(( BSHAELA_generator * ) ( ZRHAELA_generator.nonlocals )) -> IOHAELA_indirs_in_fixed_block = IOHAELA_indirs_in_fixed_block;
(( BSHAELA_generator * ) ( ZRHAELA_generator.nonlocals )) -> PRHAELA_indirs_not_in_fixed = (&PRHAELA_indirs_not_in_fixed);
A_CALLPROC(ZRHAELA_generator,(A68_FALSE, &ESHAELA),(A68_FALSE, &ESHAELA,(ZRHAELA_generator).nonlocals));
WRHAELA = ESHAELA;
} 
(*ORHAELA_indirections) = WRHAELA;
 /* line 2660: */
 /* line 2661: */
GSHAELA = IOHAELA_indirs_in_fixed_block;
for ( FSHAELA_i = 1;
FSHAELA_i <= GSHAELA;
FSHAELA_i += 1 )
{ 
HSHAELA_lwb = (TNHAELA_ptr+1);
 /* line 2662: */
 /* line 2663: */
 /* line 2664: */
CBCAELA_make_indirection( A_VTRIM(ISHAELA,(Fixed),A_VTSCRIPT(&(ISHAELA.upb),(Fixed).upb,HSHAELA_lwb,(TNHAELA_ptr+=ABCAELA_indirection_size))), &JSHAELA );
KSHAELA = (&A_VINDEX((*ORHAELA_indirections),FSHAELA_i)) ;
(*KSHAELA) = JSHAELA;
}
 /* line 2665: */
 /* line 2666: */
if ( !YACAELA_is_nildp((*(*(&(NRHAELA_df->Indirs_dp))))) )
{ 
A_CLOSURE( MSHAELA_generator, NSHAELA_generator, OSHAELA_generator );
(( OSHAELA_generator * ) ( MSHAELA_generator.nonlocals )) -> PRHAELA_indirs_not_in_fixed = (&PRHAELA_indirs_not_in_fixed);
A_CALLPROC(MSHAELA_generator,(A68_TRUE, &SSHAELA),(A68_TRUE, &SSHAELA,(MSHAELA_generator).nonlocals));
RSHAELA_ind_chars = SSHAELA;
 /* line 2667: */
SVEAELA_read(PNHAELA_db, NRHAELA_df, A_UNITE(TSHAELA,mode1,1,RSHAELA_ind_chars), PVDAELA_nodps, BWDAELA_nowanted, BXDAELA_indirs, (*(*(&(NRHAELA_df->Indirs_dp)))));
 /* line 2668: */
 /* line 2669: */
VSHAELA = PRHAELA_indirs_not_in_fixed;
for ( USHAELA_i = 1;
USHAELA_i <= VSHAELA;
USHAELA_i += 1 )
{ 
WSHAELA_lwb = (TNHAELA_ptr+1);
 /* line 2670: */
 /* line 2671: */
 /* line 2672: */
 /* line 2673: */
CBCAELA_make_indirection( A_VTRIM(XSHAELA,(RSHAELA_ind_chars),A_VTSCRIPT(&(XSHAELA.upb),(RSHAELA_ind_chars).upb,WSHAELA_lwb,(TNHAELA_ptr+=ABCAELA_indirection_size))), &YSHAELA );
ZSHAELA = (&A_VINDEX((*ORHAELA_indirections),USHAELA_i)) ;
(*ZSHAELA) = YSHAELA;
}
 /* line 2674: */
} 
 /* line 2675: */
 /* line 2676: */
A_CLOSURE( BTHAELA_generator, CTHAELA_generator, DTHAELA_generator );
(( DTHAELA_generator * ) ( BTHAELA_generator.nonlocals )) -> PNHAELA_db = PNHAELA_db;
(( DTHAELA_generator * ) ( BTHAELA_generator.nonlocals )) -> NRHAELA_df = NRHAELA_df;
A_CALLPROC(BTHAELA_generator,(A68_FALSE, &GTHAELA),(A68_FALSE, &GTHAELA,(BTHAELA_generator).nonlocals));
HTHAELA = (&(NRHAELA_df->Free_block_dps)) ;
(*HTHAELA) = GTHAELA;
 /* line 2677: */
ITHAELA = A_HEAP(A68_INT ) ;
(*ITHAELA) = (*(&(NRHAELA_df->Free_block_dps))).upb ;
JTHAELA = (&(NRHAELA_df->Initial_free_block_dps)) ;
(*JTHAELA) = ITHAELA;
 /* line 2678: */
 /* line 2679: */
SVEAELA_read(PNHAELA_db, NRHAELA_df, A_UNITE(KTHAELA,mode1,1,JVDAELA_nodata), (*(&(NRHAELA_df->Free_block_dps))), BWDAELA_nowanted, ZWDAELA_discptrs, (*(*(&(NRHAELA_df->Freelist_dp)))));
 /* line 2680: */
LTHAELA_freeblock_ptr = (*(&(NRHAELA_df->Freeblock_ptr)));
 /* line 2681: */
 /* line 2682: */
if ( ((*LTHAELA_freeblock_ptr)<=(*(&(NRHAELA_df->Free_block_dps))).upb) )
{ 
MTHAELA = (*(&(NRHAELA_df->Free_block_dps))) ;
NTHAELA_cptr = (*(&A_VINDEX(MTHAELA,(*LTHAELA_freeblock_ptr))));
 /* line 2683: */
A_CLOSURE( PTHAELA_generator, QTHAELA_generator, RTHAELA_generator );
(( RTHAELA_generator * ) ( PTHAELA_generator.nonlocals )) -> PNHAELA_db = PNHAELA_db;
(( RTHAELA_generator * ) ( PTHAELA_generator.nonlocals )) -> NRHAELA_df = NRHAELA_df;
(( RTHAELA_generator * ) ( PTHAELA_generator.nonlocals )) -> NTHAELA_cptr = NTHAELA_cptr;
A_CALLPROC(PTHAELA_generator,(A68_FALSE, &UTHAELA),(A68_FALSE, &UTHAELA,(PTHAELA_generator).nonlocals));
VTHAELA = (&(NRHAELA_df->Freelist)) ;
(*VTHAELA) = UTHAELA;
 /* line 2684: */
 /* line 2685: */
XTHAELA = (*(&(NRHAELA_df->Freelist))) ;
SVEAELA_read(PNHAELA_db, NRHAELA_df, A_UNITE(WTHAELA,mode2,2,XTHAELA), PVDAELA_nodps, BWDAELA_nowanted, CXDAELA_freelist_ints, NTHAELA_cptr);
 /* line 2686: */
 /* line 2687: */
if ( ((*(*(&(NRHAELA_df->Freelist_index))))>(*(&(NRHAELA_df->Freelist))).upb) )
{ 
YTHAELA_count = (*(&(NRHAELA_df->Freelist))).upb;
 /* line 2688: */
ZTHAELA_continue = A68_TRUE;
 /* line 2689: */
for ( AUHAELA_i = ((*LTHAELA_freeblock_ptr)+1);;
AUHAELA_i += 1 ) 
{ 
 /* line 2690: */
if ( !(ZTHAELA_continue) ) break;
BUHAELA = (*(&(NRHAELA_df->Free_block_dps))) ;
CUHAELA_free_dp = (*(&A_VINDEX(BUHAELA,AUHAELA_i)));
 /* line 2691: */
DUHAELA_size = HJEAELA_array_size(PNHAELA_db, NRHAELA_df, CUHAELA_free_dp);
 /* line 2692: */
 /* line 2693: */
if ( ((YTHAELA_count+=DUHAELA_size)>(*(*(&(NRHAELA_df->Freelist_index))))) )
{ 
A_CLOSURE( FUHAELA_generator, GUHAELA_generator, HUHAELA_generator );
(( HUHAELA_generator * ) ( FUHAELA_generator.nonlocals )) -> DUHAELA_size = DUHAELA_size;
A_CALLPROC(FUHAELA_generator,(A68_FALSE, &KUHAELA),(A68_FALSE, &KUHAELA,(FUHAELA_generator).nonlocals));
LUHAELA = (&(NRHAELA_df->Freelist)) ;
(*LUHAELA) = KUHAELA;
 /* line 2694: */
 /* line 2695: */
NUHAELA = (*(&(NRHAELA_df->Freelist))) ;
SVEAELA_read(PNHAELA_db, NRHAELA_df, A_UNITE(MUHAELA,mode2,2,NUHAELA), PVDAELA_nodps, BWDAELA_nowanted, CXDAELA_freelist_ints, CUHAELA_free_dp);
 /* line 2696: */
(*LTHAELA_freeblock_ptr) = AUHAELA_i;
 /* line 2697: */
OUHAELA = (*(&(NRHAELA_df->Freelist_index))) ;
(*OUHAELA)-=(YTHAELA_count-DUHAELA_size);
 /* line 2698: */
 /* line 2699: */
 /* line 2700: */
ZTHAELA_continue = A68_FALSE;
} 
}
 /* line 2701: */
 /* line 2702: */
} 
} 
 /* line 2703: */
 /* line 2704: */
if ( ((*LTHAELA_freeblock_ptr)<=(*(&(NRHAELA_df->Free_block_dps))).upb) )
{ 
PUHAELA = (*(&(NRHAELA_df->Free_block_dps))) ;
QUHAELA_cptr = (*(&A_VINDEX(PUHAELA,(*LTHAELA_freeblock_ptr))));
 /* line 2705: */
A_CLOSURE( SUHAELA_generator, TUHAELA_generator, UUHAELA_generator );
(( UUHAELA_generator * ) ( SUHAELA_generator.nonlocals )) -> PNHAELA_db = PNHAELA_db;
(( UUHAELA_generator * ) ( SUHAELA_generator.nonlocals )) -> NRHAELA_df = NRHAELA_df;
(( UUHAELA_generator * ) ( SUHAELA_generator.nonlocals )) -> QUHAELA_cptr = QUHAELA_cptr;
A_CALLPROC(SUHAELA_generator,(A68_FALSE, &XUHAELA),(A68_FALSE, &XUHAELA,(SUHAELA_generator).nonlocals));
YUHAELA = (&(NRHAELA_df->Freelist)) ;
(*YUHAELA) = XUHAELA;
 /* line 2706: */
 /* line 2707: */
 /* line 2708: */
AVHAELA = (*(&(NRHAELA_df->Freelist))) ;
SVEAELA_read(PNHAELA_db, NRHAELA_df, A_UNITE(ZUHAELA,mode2,2,AVHAELA), PVDAELA_nodps, BWDAELA_nowanted, CXDAELA_freelist_ints, QUHAELA_cptr);
} 
 /* line 2709: */
 /* line 2710: */
A_CLOSURE( CVHAELA_generator, DVHAELA_generator, EVHAELA_generator );
(( EVHAELA_generator * ) ( CVHAELA_generator.nonlocals )) -> PNHAELA_db = PNHAELA_db;
(( EVHAELA_generator * ) ( CVHAELA_generator.nonlocals )) -> NRHAELA_df = NRHAELA_df;
A_CALLPROC(CVHAELA_generator,(A68_FALSE, &HVHAELA),(A68_FALSE, &HVHAELA,(CVHAELA_generator).nonlocals));
IVHAELA = (&(NRHAELA_df->Pagetable_dps)) ;
(*IVHAELA) = HVHAELA;
 /* line 2711: */
 /* line 2712: */
SVEAELA_read(PNHAELA_db, NRHAELA_df, A_UNITE(JVHAELA,mode1,1,JVDAELA_nodata), (*(&(NRHAELA_df->Pagetable_dps))), BWDAELA_nowanted, ZWDAELA_discptrs, (*(*(&(NRHAELA_df->Pagetable_dp)))));
 /* line 2713: */
 /* line 2714: */
KVHAELA = PNHAELA_db;
} 
A_PROC_EXIT(use_fixed);
return( KVHAELA );
} 
#undef NL
 /* line 2717: */

A_STATIC A68_VOID  OVHAELA_open_shell(A68_102 * File, A68_VC  Db_name, A68_BOOL  Writeable, A68_109  *ReturnedValue)
{ 
A68_109 * PVHAELA_db;
A68_305  RVHAELA_generator;   /* proc value of non-global proc */
A68_46  HWHAELA;  /* avoid structure result */
A68_46  GWHAELA_fixed;
A68_INT  IWHAELA_i;
A68_INT  JWHAELA;  /* to part of loop */
A68_92  KWHAELA;  /* procedure value */
A68_INT  LWHAELA;  /* YIELD */
A68_VC  MWHAELA;  /* OPERATORS - trim index */
A68_VC  NWHAELA;  /* OPERATORS - trim index */
A68_INT  OWHAELA_first_fixed1;
A68_INT  PWHAELA;  /* YIELD */
A68_VC  QWHAELA;  /* OPERATORS - trim index */
A68_VC  RWHAELA;  /* OPERATORS - trim index */
A68_INT  SWHAELA_first_fixed2;
A68_INT  TWHAELA;  /* YIELD */
A68_INT  UWHAELA;  /* YIELD */
A68_BOOL  VWHAELA_f1_is_f2;
A68_INT  XWHAELA_usable_fixed;
A68_INT  YWHAELA;  /* YIELD */
A68_92  ZWHAELA;  /* procedure value */
A68_BOOL  AXHAELA;  /* clause result */
A68_INT  BXHAELA;  /* YIELD */
A68_INT  CXHAELA;  /* YIELD */
A68_INT  DXHAELA;  /* YIELD */
A68_INT  EXHAELA;  /* YIELD */
A68_INT  FXHAELA;  /* clause result */
A68_INT * GXHAELA;  /* YIELD */
A68_109  HXHAELA;  /* clause result */
A_PROC_ENTRY(open_shell);
 /* line 2718: */
{ 
PVHAELA_db = (A_HEAP(A68_109 ));
 /* line 2719: */
A_CLOSURE( RVHAELA_generator, SVHAELA_generator, TVHAELA_generator );
A_CALLPROC(RVHAELA_generator,(A68_TRUE, &HWHAELA),(A68_TRUE, &HWHAELA,(RVHAELA_generator).nonlocals));
GWHAELA_fixed = HWHAELA;
 /* line 2720: */
 /* line 2721: */
JWHAELA = (ANBAELA_fixed_overhead-1);
for ( IWHAELA_i = 1;
IWHAELA_i <= JWHAELA;
IWHAELA_i += 1 )
{ 
 /* line 2722: */
KWHAELA.fn.fn_global = GNBAELA_keepsake_msg;
KWHAELA.nonlocals = A68_NIL;
IOBAELA_get_block(File, A_VINDEX(GWHAELA_fixed,IWHAELA_i), IWHAELA_i, KWHAELA);
}
 /* line 2723: */
LWHAELA = 1 ;
MWHAELA = A_VINDEX(GWHAELA_fixed,LWHAELA) ;
OWHAELA_first_fixed1 = IRBAELA_vctoi(A_VTRIM(NWHAELA,(MWHAELA),A_VTSCRIPT(&(NWHAELA.upb),(MWHAELA).upb,1,EDAAOST_int_size)));
 /* line 2724: */
PWHAELA = 2 ;
QWHAELA = A_VINDEX(GWHAELA_fixed,PWHAELA) ;
SWHAELA_first_fixed2 = IRBAELA_vctoi(A_VTRIM(RWHAELA,(QWHAELA),A_VTSCRIPT(&(RWHAELA.upb),(QWHAELA).upb,1,EDAAOST_int_size)));
 /* line 2725: */
TWHAELA = 2 ;
UWHAELA = 1 ;
VWHAELA_f1_is_f2 = VKEAELA_compare(A_VINDEX(GWHAELA_fixed,UWHAELA), A_VINDEX(GWHAELA_fixed,TWHAELA));
 /* line 2726: */
 /* line 2727: */
XWHAELA_usable_fixed = 0;
 /* line 2728: */
 /* line 2729: */
if ( VWHAELA_f1_is_f2 )
{ 
 /* line 2730: */
if ( (OWHAELA_first_fixed1!=JSBAELA_file_check) )
{ 
 /* line 2731: */
NKEAELA_filetype_check(OWHAELA_first_fixed1);
} 
else
{ 
 /* line 2732: */
 /* line 2733: */
 /* line 2734: */
YWHAELA = 1 ;
(*PVHAELA_db) = (*ONHAELA_use_fixed(A_VINDEX(GWHAELA_fixed,YWHAELA), Db_name, File, Writeable, !WWHAELA_last_update_failed));
} 
} 
else
{ 
 /* line 2735: */
ZWHAELA.fn.fn_global = GNBAELA_keepsake_msg;
ZWHAELA.nonlocals = A68_NIL;
IOBAELA_get_block(File, A_VINDEX(GWHAELA_fixed,ANBAELA_fixed_overhead), ANBAELA_fixed_overhead, ZWHAELA);
 /* line 2736: */
 /* line 2737: */
BXHAELA = 3 ;
CXHAELA = 2 ;
AXHAELA = VKEAELA_compare(A_VINDEX(GWHAELA_fixed,CXHAELA), A_VINDEX(GWHAELA_fixed,BXHAELA));
if ( AXHAELA )
{ 
 /* line 2738: */
if ( (SWHAELA_first_fixed2!=JSBAELA_file_check) )
{ 
 /* line 2739: */
NKEAELA_filetype_check(SWHAELA_first_fixed2);
} 
else
{ 
 /* line 2740: */
 /* line 2741: */
 /* line 2742: */
DXHAELA = 2 ;
(*PVHAELA_db) = (*ONHAELA_use_fixed(A_VINDEX(GWHAELA_fixed,DXHAELA), Db_name, File, Writeable, WWHAELA_last_update_failed));
} 
} 
else
{ 
 /* line 2743: */
if ( (OWHAELA_first_fixed1!=JSBAELA_file_check) )
{ 
 /* line 2744: */
NKEAELA_filetype_check(OWHAELA_first_fixed1);
} 
else
{ 
 /* line 2745: */
 /* line 2746: */
EXHAELA = 1 ;
(*PVHAELA_db) = (*ONHAELA_use_fixed(A_VINDEX(GWHAELA_fixed,EXHAELA), Db_name, File, Writeable, !WWHAELA_last_update_failed));
} 
} 
} 
 /* line 2747: */
 /* line 2748: */
if ( VWHAELA_f1_is_f2 )
{ 
FXHAELA = (ANBAELA_fixed_overhead-1);
} 
else
{ 
FXHAELA = ANBAELA_fixed_overhead;
} 
GXHAELA = (*(&((*(&(PVHAELA_db->Df)))->Read_transfers))) ;
(*GXHAELA)+=FXHAELA;
 /* line 2749: */
TEGAELA_test_and_increase(PVHAELA_db);
 /* line 2750: */
 /* line 2751: */
HXHAELA = (*PVHAELA_db);
} 
A_PROC_EXIT(open_shell);
*ReturnedValue = (HXHAELA);
return;
} 
#undef NL

A68_VOID  KXHAELA_open_db(A68_102 * File, A68_BOOL  Writeable, A68_109  *ReturnedValue)
{ 
A68_VC  LXHAELA;  /* avoid structure result */
A68_VC  MXHAELA_madam_name;
A68_109  NXHAELA;  /* clause result */
A68_109  OXHAELA;  /* avoid structure result */
A_PROC_ENTRY(open_db);
 /* line 2754: */
{ 
YPBAOSI_file_name( File, &LXHAELA );
MXHAELA_madam_name = LXHAELA;
 /* line 2755: */
 /* line 2756: */
OVHAELA_open_shell( File, MXHAELA_madam_name, Writeable, &OXHAELA );
NXHAELA = OXHAELA;
} 
A_PROC_EXIT(open_db);
*ReturnedValue = (NXHAELA);
return;
} 
#undef NL

A68_VOID  RXHAELA_initialise_db(A68_102 * File, A68_BOOL  Writeable, A68_109  *ReturnedValue)
{ 
A68_109  SXHAELA_db;
A68_VC  TXHAELA;  /* avoid structure result */
A68_VC  UXHAELA_madam_name;
A68_100 * XXHAELA;  /* YIELD */
A68_100 ** YXHAELA;  /* YIELD */
A68_100 * ZXHAELA_df;
A68_97 * AYHAELA;  /* YIELD */
A68_97 ** BYHAELA;  /* YIELD */
A68_109  CYHAELA;  /* clause result */
A_PROC_ENTRY(initialise_db);
 /* line 2763: */
{ 
 /* line 2764: */
YPBAOSI_file_name( File, &TXHAELA );
UXHAELA_madam_name = TXHAELA;
 /* line 2765: */
 /* line 2766: */
if ( !Writeable )
{ 
 /* line 2767: */
QNBAELA_keepsake_fault(WXHAELA);
} 
 /* line 2768: */
ENHAELA_set_up_db((&SXHAELA_db), UXHAELA_madam_name);
 /* line 2769: */
XXHAELA = A_HEAP(A68_100 ) ;
(*XXHAELA) = (*EOEAELA_set_up((&SXHAELA_db), File, 1)) ;
YXHAELA = (&((&SXHAELA_db)->Df)) ;
(*YXHAELA) = XXHAELA;
 /* line 2770: */
ZXHAELA_df = (*(&((&SXHAELA_db)->Df)));
 /* line 2771: */
AYHAELA = A_HEAP(A68_97 ) ;
(*AYHAELA) = UACAELA_nilptr ;
BYHAELA = (&(ZXHAELA_df->Root)) ;
(*BYHAELA) = AYHAELA;
 /* line 2772: */
VHGAELA_initialise((&SXHAELA_db), ZXHAELA_df);
 /* line 2773: */
 /* line 2774: */
CYHAELA = SXHAELA_db;
} 
A_PROC_EXIT(initialise_db);
*ReturnedValue = (CYHAELA);
return;
} 
#undef NL
 /* line 2778: */

A68_VOID  GYHAELA_compacting_garbage_collect(A68_102 * Old_file, A68_102 * New_file, A68_92  Msg)
{ 
A68_316  MAIAELA_already_found;   /* proc value of non-global proc */
A68_317  LBIAELA_compactor_trace;   /* proc value of non-global proc */
A68_109  DHIAELA;  /* avoid structure result */
A68_109  CHIAELA_db;
A68_121 * EHIAELA_gcdata;
A68_100 * FHIAELA_old_df;
A68_109  JHIAELA;  /* avoid structure result */
A68_109  IHIAELA_new_db;
A68_100 * KHIAELA_new_df;
A68_INT * LHIAELA;  /* YIELD */
A68_INT * MHIAELA;  /* YIELD */
A68_243  NHIAELA;  /* OPERATORS - mode -> union mode */
A68_97  OHIAELA;  /* avoid structure result */
A68_97 * PHIAELA;  /* YIELD */
A68_97 ** QHIAELA;  /* YIELD */
A68_106  RHIAELA_old_inds;
A68_153  THIAELA_generator;   /* proc value of non-global proc */
A68_106  YHIAELA;  /* avoid structure result */
A68_106 * ZHIAELA;  /* YIELD */
A68_97  AIIAELA;  /* avoid structure result */
A68_97 * BIIAELA;  /* YIELD */
A68_97 ** CIIAELA;  /* YIELD */
A68_97  DIIAELA;  /* avoid structure result */
A68_97 * EIIAELA;  /* YIELD */
A68_97 ** FIIAELA;  /* YIELD */
A68_154  HIIAELA_generator;   /* proc value of non-global proc */
A68_101  MIIAELA;  /* avoid structure result */
A68_101 * NIIAELA;  /* YIELD */
A68_101  OIIAELA;  /* OPERATORS - simple index */
A68_INT  PIIAELA;  /* YIELD */
A68_243  QIIAELA;  /* OPERATORS - mode -> union mode */
A68_32  RIIAELA;  /* YIELD */
A68_97  SIIAELA;  /* avoid structure result */
A68_97 * TIIAELA;  /* YIELD */
A68_33  VIIAELA_generator;   /* proc value of non-global proc */
A68_32  AJIAELA;  /* avoid structure result */
A68_32 * BJIAELA;  /* YIELD */
A68_243  CJIAELA;  /* OPERATORS - mode -> union mode */
A68_97  DJIAELA;  /* avoid structure result */
A68_97 * EJIAELA;  /* YIELD */
A68_97 ** FJIAELA;  /* YIELD */
A68_INT  GJIAELA_i;
A68_INT  HJIAELA;  /* to part of loop */
A68_54  IJIAELA;  /* OPERATORS - simple index */
A68_BOOL  JJIAELA_wanted;
A68_106  KJIAELA;  /* OPERATORS - simple index */
A68_98 * LJIAELA_ind;
A68_BOOL  MJIAELA;  /* optbool result */
A68_BOOL  NJIAELA;  /* optbool result */
A68_99 * OJIAELA_addr;
A68_INT  PJIAELA_address;
A68_INT  QJIAELA_index;
A68_115  RJIAELA;  /* united object - for case conformity */
A68_117  SJIAELA_old_and_new;
A68_BOOL  TJIAELA_not_found;
A68_114 ** UJIAELA_oan;
A68_BOOL  VJIAELA;  /* optbool result */
A68_BOOL  WJIAELA;  /* optbool result */
A68_99  XJIAELA;  /* collateral clause result */
A68_99  YJIAELA_new;
A68_313  ZJIAELA;  /* OPERATORS - mode -> union mode */
A68_104 ** AKIAELA;  /* YIELD */
A68_300  CKIAELA;  /* OPERATORS - mode -> union mode */
A68_100 * DKIAELA;  /* YIELD */
A_PROC_ENTRY(compacting_garbage_collect);
 /* line 2780: */
{ 
 /* line 2814: */
 /* line 2827: */
 /* line 2853: */
A_CLOSURE( MAIAELA_already_found, NAIAELA_already_found, OAIAELA_already_found );
 /* line 2881: */
A_CLOSURE( LBIAELA_compactor_trace, MBIAELA_compactor_trace, NBIAELA_compactor_trace );
(( NBIAELA_compactor_trace * ) ( LBIAELA_compactor_trace.nonlocals )) -> MAIAELA_already_found = MAIAELA_already_found;
(( NBIAELA_compactor_trace * ) ( LBIAELA_compactor_trace.nonlocals )) -> LBIAELA_compactor_trace = LBIAELA_compactor_trace;
 /* line 3061: */
 /* line 3062: */
 /* line 3063: */
 /* line 3064: */
KXHAELA_open_db( Old_file, A68_TRUE, &DHIAELA );
CHIAELA_db = DHIAELA;
 /* line 3065: */
EHIAELA_gcdata = RNGAELA_initialise_gc((&CHIAELA_db), AHIAELA_compactor, BHIAELA_check);
 /* line 3066: */
FHIAELA_old_df = (*(&((&CHIAELA_db)->Df)));
 /* line 3067: */
ETGAELA_make_shaky_list((&CHIAELA_db), FHIAELA_old_df, EHIAELA_gcdata);
 /* line 3073: */
 /* line 3074: */
 /* line 3075: */
if ( (ZOBAELA_file_block_size(New_file)<((*(*(&(FHIAELA_old_df->File_size))))-(*(*(&(FHIAELA_old_df->Size_of_free_space)))))) )
{ 
 /* line 3076: */
QNBAELA_keepsake_fault(HHIAELA);
} 
 /* line 3077: */
RXHAELA_initialise_db( New_file, A68_TRUE, &JHIAELA );
IHIAELA_new_db = JHIAELA;
 /* line 3079: */
KHIAELA_new_df = (*(&((&IHIAELA_new_db)->Df)));
 /* line 3080: */
 /* line 3081: */
LHIAELA = (*(&(KHIAELA_new_df->Generation))) ;
MHIAELA = (*(&((*(&(KHIAELA_new_df->Write_buffer)))->Generation))) ;
(*MHIAELA) = (*LHIAELA) = ((*(*(&(FHIAELA_old_df->Generation))))+1);
 /* line 3082: */
 /* line 3083: */
 /* line 3084: */
 /* line 3085: */
 /* line 3086: */
CNFAELA_write( (&CHIAELA_db), KHIAELA_new_df, A_UNITE(NHIAELA,mode1,1,JVDAELA_nodata), (*(&(KHIAELA_new_df->Free_block_dps))), ZWDAELA_discptrs, 0, FYDAELA_no_indirection, CYDAELA_not_assignable, LACAELA_niladdress, VVDAELA_noints, DVDAELA_nilpagetable, &OHIAELA );
PHIAELA = A_HEAP(A68_97 ) ;
(*PHIAELA) = OHIAELA ;
QHIAELA = (&(KHIAELA_new_df->Freelist_dp)) ;
(*QHIAELA) = PHIAELA;
 /* line 3087: */
RHIAELA_old_inds = (*(&(FHIAELA_old_df->Indirections)));
 /* line 3088: */
A_CLOSURE( THIAELA_generator, UHIAELA_generator, VHIAELA_generator );
(( VHIAELA_generator * ) ( THIAELA_generator.nonlocals )) -> RHIAELA_old_inds = RHIAELA_old_inds;
A_CALLPROC(THIAELA_generator,(A68_FALSE, &YHIAELA),(A68_FALSE, &YHIAELA,(THIAELA_generator).nonlocals));
A_VASSIGN2(RHIAELA_old_inds,YHIAELA,A68_98 ) ;
ZHIAELA = (&(KHIAELA_new_df->Indirections)) ;
(*ZHIAELA) = YHIAELA;
 /* line 3089: */
 /* line 3090: */
 /* line 3091: */
A_CALLPROC(LBIAELA_compactor_trace,((&CHIAELA_db), FHIAELA_old_df, KHIAELA_new_df, EHIAELA_gcdata, (*(&(FHIAELA_old_df->Root))), &AIIAELA),((&CHIAELA_db), FHIAELA_old_df, KHIAELA_new_df, EHIAELA_gcdata, (*(&(FHIAELA_old_df->Root))), &AIIAELA,(LBIAELA_compactor_trace).nonlocals));
BIIAELA = A_HEAP(A68_97 ) ;
(*BIIAELA) = AIIAELA ;
CIIAELA = (&(KHIAELA_new_df->Root)) ;
(*CIIAELA) = BIIAELA;
 /* line 3092: */
 /* line 3093: */
 /* line 3094: */
A_CALLPROC(LBIAELA_compactor_trace,((&CHIAELA_db), FHIAELA_old_df, KHIAELA_new_df, EHIAELA_gcdata, (*(&(FHIAELA_old_df->Indirs_dp))), &DIIAELA),((&CHIAELA_db), FHIAELA_old_df, KHIAELA_new_df, EHIAELA_gcdata, (*(&(FHIAELA_old_df->Indirs_dp))), &DIIAELA,(LBIAELA_compactor_trace).nonlocals));
EIIAELA = A_HEAP(A68_97 ) ;
(*EIIAELA) = DIIAELA ;
FIIAELA = (&(KHIAELA_new_df->Indirs_dp)) ;
(*FIIAELA) = EIIAELA;
 /* line 3095: */
A_CLOSURE( HIIAELA_generator, IIIAELA_generator, JIIAELA_generator );
A_CALLPROC(HIIAELA_generator,(A68_FALSE, &MIIAELA),(A68_FALSE, &MIIAELA,(HIIAELA_generator).nonlocals));
NIIAELA = (&(KHIAELA_new_df->Pagetable_dps)) ;
(*NIIAELA) = MIIAELA;
 /* line 3096: */
 /* line 3097: */
 /* line 3098: */
 /* line 3099: */
 /* line 3100: */
OIIAELA = (*(&(KHIAELA_new_df->Pagetable_dps))) ;
PIIAELA = 1 ;
RIIAELA = (*(&(EHIAELA_gcdata->Pagetable))) ;
CNFAELA_write( (&CHIAELA_db), KHIAELA_new_df, A_UNITE(QIIAELA,mode2,2,RIIAELA), PVDAELA_nodps, DXDAELA_pagetable_ints, ((*(&(EHIAELA_gcdata->Pagetable))).upb*EDAAOST_int_size), FYDAELA_no_indirection, CYDAELA_not_assignable, LACAELA_niladdress, VVDAELA_noints, DVDAELA_nilpagetable, &SIIAELA );
TIIAELA = (&A_VINDEX(OIIAELA,PIIAELA)) ;
(*TIIAELA) = SIIAELA;
 /* line 3101: */
A_CLOSURE( VIIAELA_generator, WIIAELA_generator, XIIAELA_generator );
A_CALLPROC(VIIAELA_generator,(A68_FALSE, &AJIAELA),(A68_FALSE, &AJIAELA,(VIIAELA_generator).nonlocals));
BJIAELA = (&(KHIAELA_new_df->Pagetable_ext)) ;
(*BJIAELA) = AJIAELA;
 /* line 3102: */
 /* line 3103: */
 /* line 3104: */
 /* line 3105: */
CNFAELA_write( (&CHIAELA_db), KHIAELA_new_df, A_UNITE(CJIAELA,mode1,1,JVDAELA_nodata), (*(&(KHIAELA_new_df->Pagetable_dps))), ZWDAELA_discptrs, 0, FYDAELA_no_indirection, CYDAELA_not_assignable, LACAELA_niladdress, VVDAELA_noints, DVDAELA_nilpagetable, &DJIAELA );
EJIAELA = A_HEAP(A68_97 ) ;
(*EJIAELA) = DJIAELA ;
FJIAELA = (&(KHIAELA_new_df->Pagetable_dp)) ;
(*FJIAELA) = EJIAELA;
 /* line 3107: */
 /* line 3108: */
HJIAELA = (*(&(KHIAELA_new_df->Indirections))).upb;
for ( GJIAELA_i = 1;
GJIAELA_i <= HJIAELA;
GJIAELA_i += 1 )
{ 
IJIAELA = (*(&(EHIAELA_gcdata->Indirs_wanted))) ;
JJIAELA_wanted = (*(&A_VINDEX(IJIAELA,GJIAELA_i)));
 /* line 3109: */
KJIAELA = (*(&(KHIAELA_new_df->Indirections))) ;
LJIAELA_ind = (&A_VINDEX(KJIAELA,GJIAELA_i));
 /* line 3110: */
MJIAELA = (*(&(LJIAELA_ind->Shaky)));
if ( MJIAELA )
{MJIAELA = JJIAELA_wanted;
}
 /* line 3111: */
if ( MJIAELA )
{MJIAELA = AUGAELA_shaky_traced((&CHIAELA_db), EHIAELA_gcdata, KHIAELA_new_df, LJIAELA_ind);
}
 /* line 3112: */
if ( ! MJIAELA )
{NJIAELA = !(*(&(LJIAELA_ind->Shaky)));
if ( NJIAELA )
{NJIAELA = JJIAELA_wanted;
}
MJIAELA = NJIAELA;
}
 /* line 3113: */
if ( !MJIAELA )
{ 
 /* line 3114: */
MKGAELA_make_gcnil(LJIAELA_ind);
} 
else
{ 
OJIAELA_addr = (&(LJIAELA_ind->Address));
 /* line 3115: */
PJIAELA_address = RYDAELA_address_rep((*OJIAELA_addr));
 /* line 3116: */
QJIAELA_index = UKGAELA_hash_index(PJIAELA_address);
 /* line 3117: */
 /* line 3118: */
RJIAELA = (*(&(EHIAELA_gcdata->Hashtable))) ;
switch ( RJIAELA.mode )
{ 
case 2: /* REF VECTOR [] REF MODE114 */
SJIAELA_old_and_new = (RJIAELA.data.mode2);
 /* line 3119: */
{ 
TJIAELA_not_found = A68_TRUE;
 /* line 3120: */
UJIAELA_oan = (&A_VINDEX(SJIAELA_old_and_new,QJIAELA_index));
 /* line 3128: */
for ( ;; )
{ 
 /* line 3129: */
VJIAELA = ((*UJIAELA_oan)!=FWDAELA_nilold_and_new);
if ( VJIAELA )
{VJIAELA = TJIAELA_not_found;
}
if ( !(VJIAELA) ) break;
 /* line 3130: */
WJIAELA = ((*(&((*UJIAELA_oan)->Old_block)))==(*(&(OJIAELA_addr->Block_num))));
if ( WJIAELA )
{ /* line 3131: */
WJIAELA = ((*(&((*UJIAELA_oan)->Old_offset)))==(*(&(OJIAELA_addr->Offset))));
}
if ( WJIAELA )
{ 
TJIAELA_not_found = A68_FALSE;
 /* line 3132: */
 /* line 3133: */
XJIAELA.Block_num = (*(&((*UJIAELA_oan)->New_block)));
XJIAELA.Offset = (*(&((*UJIAELA_oan)->New_offset)));
YJIAELA_new = XJIAELA;
 /* line 3134: */
 /* line 3135: */
KZHAELA_change_address(KHIAELA_new_df, YJIAELA_new, A_UNITE(ZJIAELA,mode2,2,OJIAELA_addr));
} 
else
{ 
 /* line 3136: */
 /* line 3137: */
UJIAELA_oan = (&((*UJIAELA_oan)->Rest));
} 
}
 /* line 3138: */
 /* line 3139: */
 /* line 3140: */
 /* line 3141: */
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
} 
}
 /* line 3142: */
KJFAELA_flush_buffer((&CHIAELA_db), KHIAELA_new_df);
 /* line 3143: */
AKIAELA = (&(KHIAELA_new_df->Gc_ptrs)) ;
(*AKIAELA) = IWDAELA_niltraced;
 /* line 3144: */
XQBAOSI_close_file((*(*(&(FHIAELA_old_df->File)))), Msg);
 /* line 3145: */
 /* line 3146: */
(*FHIAELA_old_df) = (*KHIAELA_new_df);
 /* line 3147: */
 /* line 3148: */
DKIAELA = (*(&((&CHIAELA_db)->Df))) ;
KMHAELA_finish_shell((&CHIAELA_db), A_UNITE(CKIAELA,mode1,1,DKIAELA), Msg, BKIAELA_close_files);
} 
A_PROC_EXIT(compacting_garbage_collect);
return;
} 
#undef NL

A68_VOID  FKIAELA_check_database(A68_109 * Db)
{ 
A68_316  MLIAELA_already_found;   /* proc value of non-global proc */
A68_318  LMIAELA_trace;   /* proc value of non-global proc */
A68_121 * QSIAELA_gcdata;
A68_100 * RSIAELA_df;
A68_106  SSIAELA_old_inds;
A68_155  USIAELA_generator;   /* proc value of non-global proc */
A68_54  ATIAELA;  /* avoid structure result */
A68_54  ZSIAELA_wanted;
A68_INT  BTIAELA_i;
A68_INT  CTIAELA;  /* to part of loop */
A68_BOOL * DTIAELA;  /* YIELD */
A68_33  FTIAELA_generator;   /* proc value of non-global proc */
A68_32  LTIAELA;  /* avoid structure result */
A68_32  KTIAELA_freelist;
A68_INT  MTIAELA_elts;
A68_INT  NTIAELA_lwb;
A68_32  OTIAELA;  /* OPERATORS - trim index */
A68_32  PTIAELA;  /* YIELD */
A68_32  QTIAELA;  /* OPERATORS - assign op */
A68_INT  RTIAELA_i;
A68_INT  STIAELA;  /* to part of loop */
A68_101  TTIAELA;  /* OPERATORS - simple index */
A68_97  UTIAELA_ptr;
A68_32  VTIAELA;  /* OPERATORS - trim index */
A68_INT  WTIAELA_upb_ext;
A68_32  XTIAELA;  /* OPERATORS - trim index */
A68_32  YTIAELA;  /* YIELD */
A68_32  ZTIAELA;  /* OPERATORS - assign op */
A68_107 * AUIAELA_corrupt_freelist;
A68_107 * BUIAELA_space_thief;
A68_INT  DUIAELA;  /* YIELD */
A68_INT  CUIAELA_last_free;
A68_INT  EUIAELA_last_corrupt_free;
A68_INT  FUIAELA_last_space_thief;
A68_INT  GUIAELA_i;
A68_INT  HUIAELA;  /* to part of loop */
A68_INT  IUIAELA_n;
A68_BOOL  JUIAELA_corrupt_not_contiguous;
A68_INT  KUIAELA_j;
A68_INT  LUIAELA;  /* to part of loop */
A68_INT  MUIAELA;  /* by part of loop */
A68_BOOL  NUIAELA_not_contiguous;
A68_BOOL  OUIAELA;  /* optbool result */
A68_172  PUIAELA;  /* collateral clause result */
A68_52  SUIAELA;  /* OPERATORS - mode -> union mode */
A68_VC  TUIAELA;  /* YIELD */
A68_52  UUIAELA;  /* OPERATORS - mode -> union mode */
A68_56  VUIAELA;  /* procedure value */
A68_85  WUIAELA;  /* OPERATORS - istruct -> vector */
A68_172  XUIAELA;  /* collateral clause result */
A68_52  AVIAELA;  /* OPERATORS - mode -> union mode */
A68_VC  BVIAELA;  /* YIELD */
A68_52  CVIAELA;  /* OPERATORS - mode -> union mode */
A68_56  DVIAELA;  /* procedure value */
A68_85  EVIAELA;  /* OPERATORS - istruct -> vector */
A_PROC_ENTRY(check_database);
 /* line 3152: */
{ 
 /* line 3165: */
 /* line 3191: */
A_CLOSURE( MLIAELA_already_found, NLIAELA_already_found, OLIAELA_already_found );
 /* line 3219: */
A_CLOSURE( LMIAELA_trace, MMIAELA_trace, NMIAELA_trace );
(( NMIAELA_trace * ) ( LMIAELA_trace.nonlocals )) -> MLIAELA_already_found = MLIAELA_already_found;
(( NMIAELA_trace * ) ( LMIAELA_trace.nonlocals )) -> LMIAELA_trace = LMIAELA_trace;
 /* line 3343: */
 /* line 3358: */
 /* line 3359: */
 /* line 3360: */
QSIAELA_gcdata = RNGAELA_initialise_gc(Db, OSIAELA_compactor, PSIAELA_check);
 /* line 3361: */
RSIAELA_df = (*(&(Db->Df)));
 /* line 3363: */
SSIAELA_old_inds = (*(&(RSIAELA_df->Indirections)));
 /* line 3364: */
A_CLOSURE( USIAELA_generator, VSIAELA_generator, WSIAELA_generator );
(( WSIAELA_generator * ) ( USIAELA_generator.nonlocals )) -> RSIAELA_df = RSIAELA_df;
A_CALLPROC(USIAELA_generator,(A68_TRUE, &ATIAELA),(A68_TRUE, &ATIAELA,(USIAELA_generator).nonlocals));
ZSIAELA_wanted = ATIAELA;
 /* line 3365: */
 /* line 3366: */
CTIAELA = ZSIAELA_wanted.upb;
for ( BTIAELA_i = 1;
BTIAELA_i <= CTIAELA;
BTIAELA_i += 1 )
{ 
 /* line 3367: */
DTIAELA = (&A_VINDEX(ZSIAELA_wanted,BTIAELA_i)) ;
(*DTIAELA) = A68_FALSE;
}
 /* line 3368: */
A_CALLPROC(LMIAELA_trace,(Db, RSIAELA_df, (*(*(&(RSIAELA_df->Root)))), QSIAELA_gcdata, ZSIAELA_wanted),(Db, RSIAELA_df, (*(*(&(RSIAELA_df->Root)))), QSIAELA_gcdata, ZSIAELA_wanted,(LMIAELA_trace).nonlocals));
 /* line 3369: */
A_CALLPROC(LMIAELA_trace,(Db, RSIAELA_df, (*(*(&(RSIAELA_df->Indirs_dp)))), QSIAELA_gcdata, ZSIAELA_wanted),(Db, RSIAELA_df, (*(*(&(RSIAELA_df->Indirs_dp)))), QSIAELA_gcdata, ZSIAELA_wanted,(LMIAELA_trace).nonlocals));
 /* line 3370: */
A_CALLPROC(LMIAELA_trace,(Db, RSIAELA_df, (*(*(&(RSIAELA_df->Freelist_dp)))), QSIAELA_gcdata, ZSIAELA_wanted),(Db, RSIAELA_df, (*(*(&(RSIAELA_df->Freelist_dp)))), QSIAELA_gcdata, ZSIAELA_wanted,(LMIAELA_trace).nonlocals));
 /* line 3371: */
A_CALLPROC(LMIAELA_trace,(Db, RSIAELA_df, (*(*(&(RSIAELA_df->Pagetable_dp)))), QSIAELA_gcdata, ZSIAELA_wanted),(Db, RSIAELA_df, (*(*(&(RSIAELA_df->Pagetable_dp)))), QSIAELA_gcdata, ZSIAELA_wanted,(LMIAELA_trace).nonlocals));
 /* line 3373: */
A_CLOSURE( FTIAELA_generator, GTIAELA_generator, HTIAELA_generator );
(( HTIAELA_generator * ) ( FTIAELA_generator.nonlocals )) -> RSIAELA_df = RSIAELA_df;
A_CALLPROC(FTIAELA_generator,(A68_TRUE, &LTIAELA),(A68_TRUE, &LTIAELA,(FTIAELA_generator).nonlocals));
KTIAELA_freelist = LTIAELA;
 /* line 3374: */
MTIAELA_elts = 0;
NTIAELA_lwb = 1;
 /* line 3375: */
PTIAELA = A_VTRIM(OTIAELA,(KTIAELA_freelist),A_VTSCRIPT(&(OTIAELA.upb),(KTIAELA_freelist).upb,NTIAELA_lwb,(MTIAELA_elts+=(*(&(RSIAELA_df->Freelist))).upb))) ;
QTIAELA = (*(&(RSIAELA_df->Freelist))) ;
A_VASSIGN2(QTIAELA,PTIAELA,A68_INT );
 /* line 3376: */
 /* line 3377: */
STIAELA = (*(&(RSIAELA_df->Free_block_dps))).upb;
for ( RTIAELA_i = ((*(*(&(RSIAELA_df->Freeblock_ptr))))+1);
RTIAELA_i <= STIAELA;
RTIAELA_i += 1 )
{ 
TTIAELA = (*(&(RSIAELA_df->Free_block_dps))) ;
UTIAELA_ptr = (*(&A_VINDEX(TTIAELA,RTIAELA_i)));
 /* line 3378: */
NTIAELA_lwb = (MTIAELA_elts+1);
 /* line 3379: */
 /* line 3380: */
CAFAELA_read_freelist(Db, RSIAELA_df, A_VTRIM(VTIAELA,(KTIAELA_freelist),A_VTSCRIPT(&(VTIAELA.upb),(KTIAELA_freelist).upb,NTIAELA_lwb,(MTIAELA_elts+=UJEAELA_size(Db, UTIAELA_ptr)))), UTIAELA_ptr);
}
 /* line 3381: */
WTIAELA_upb_ext = (*(&(RSIAELA_df->Freelist_ext))).upb;
 /* line 3382: */
 /* line 3383: */
if ( (WTIAELA_upb_ext!=0) )
{ 
NTIAELA_lwb = (MTIAELA_elts+1);
 /* line 3384: */
 /* line 3385: */
YTIAELA = A_VTRIM(XTIAELA,(KTIAELA_freelist),A_VTSCRIPT(&(XTIAELA.upb),(KTIAELA_freelist).upb,NTIAELA_lwb,(MTIAELA_elts+=WTIAELA_upb_ext))) ;
ZTIAELA = (*(&(RSIAELA_df->Freelist_ext))) ;
A_VASSIGN2(ZTIAELA,YTIAELA,A68_INT );
} 
 /* line 3387: */
AUIAELA_corrupt_freelist = SUDAELA_nilblocklist;
 /* line 3388: */
BUIAELA_space_thief = SUDAELA_nilblocklist;
 /* line 3389: */
DUIAELA = (*(*(&(RSIAELA_df->Freelist_index)))) ;
CUIAELA_last_free = (*(&A_VINDEX(KTIAELA_freelist,DUIAELA)));
 /* line 3390: */
EUIAELA_last_corrupt_free = 0;
 /* line 3391: */
FUIAELA_last_space_thief = 0;
 /* line 3393: */
 /* line 3394: */
HUIAELA = MTIAELA_elts;
for ( GUIAELA_i = ((*(*(&(RSIAELA_df->Freelist_index))))+1);
GUIAELA_i <= HUIAELA;
GUIAELA_i += 1 )
{ 
IUIAELA_n = (*(&A_VINDEX(KTIAELA_freelist,GUIAELA_i)));
 /* line 3395: */
JUIAELA_corrupt_not_contiguous = (EUIAELA_last_corrupt_free!=(IUIAELA_n+1));
 /* line 3396: */
 /* line 3397: */
if ( (*(&A_VINDEX(ZSIAELA_wanted,IUIAELA_n))) )
{ 
YJFAELA_add_to_list((&AUIAELA_corrupt_freelist), IUIAELA_n, JUIAELA_corrupt_not_contiguous);
 /* line 3398: */
 /* line 3399: */
EUIAELA_last_corrupt_free = IUIAELA_n;
} 
else
{ 
 /* line 3400: */
LUIAELA = (IUIAELA_n+1);
MUIAELA = (-1);
for ( KUIAELA_j = (CUIAELA_last_free-1);
( MUIAELA > 0 && KUIAELA_j <= LUIAELA) ||
( MUIAELA < 0 && KUIAELA_j >= LUIAELA) ||
( MUIAELA == 0 ) ;
KUIAELA_j += MUIAELA )
{ 
NUIAELA_not_contiguous = (FUIAELA_last_space_thief!=(KUIAELA_j+1));
 /* line 3401: */
 /* line 3402: */
if ( !(*(&A_VINDEX(ZSIAELA_wanted,KUIAELA_j))) )
{ 
YJFAELA_add_to_list((&BUIAELA_space_thief), KUIAELA_j, NUIAELA_not_contiguous);
 /* line 3403: */
 /* line 3404: */
 /* line 3405: */
FUIAELA_last_space_thief = KUIAELA_j;
} 
}
 /* line 3406: */
} 
 /* line 3407: */
 /* line 3408: */
CUIAELA_last_free = IUIAELA_n;
}
 /* line 3409: */
OUIAELA = (AUIAELA_corrupt_freelist==SUDAELA_nilblocklist);
if ( OUIAELA )
{ /* line 3410: */
OUIAELA = (BUIAELA_space_thief==SUDAELA_nilblocklist);
}
if ( OUIAELA )
{ 
TUIAELA = RUIAELA ;
PUIAELA.data[0] = A_UNITE(SUIAELA,mode7,7,TUIAELA);
VUIAELA.fn.fn_global = LRAAOSL_newline;
VUIAELA.nonlocals = A68_NIL;
PUIAELA.data[1] = A_UNITE(UUIAELA,mode12,12,VUIAELA);
 /* line 3411: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(WUIAELA,PUIAELA,2,A68_52 ));
} 
else
{ 
BVIAELA = ZUIAELA ;
XUIAELA.data[0] = A_UNITE(AVIAELA,mode7,7,BVIAELA);
DVIAELA.fn.fn_global = LRAAOSL_newline;
DVIAELA.nonlocals = A68_NIL;
XUIAELA.data[1] = A_UNITE(CVIAELA,mode12,12,DVIAELA);
 /* line 3412: */
GFBAOSL_put(KEAAOST_screen, A_HISVEC(EVIAELA,XUIAELA,2,A68_52 ));
} 
 /* line 3413: */
 /* line 3414: */
if ( (AUIAELA_corrupt_freelist!=SUDAELA_nilblocklist) )
{ 
ORIAELA_print_list((&AUIAELA_corrupt_freelist), GVIAELA);
} 
 /* line 3415: */
 /* line 3416: */
if ( (BUIAELA_space_thief!=SUDAELA_nilblocklist) )
{ 
 /* line 3417: */
ORIAELA_print_list((&BUIAELA_space_thief), IVIAELA);
} 
} 
A_PROC_EXIT(check_database);
return;
} 
#undef NL

A68_VOID  KVIAELA_get_root(A68_109 * Db, A68_97  *ReturnedValue)
{ 
A68_97  LVIAELA;  /* clause result */
A_PROC_ENTRY(get_root);
 /* line 3420: */
{ 
TEEAELA_check_valid_db(Db);
 /* line 3421: */
PEEAELA_check_nilfile((*(&(Db->Df))));
 /* line 3422: */
 /* line 3423: */
LVIAELA = (*(*(&((*(&(Db->Df)))->Root))));
} 
A_PROC_EXIT(get_root);
*ReturnedValue = (LVIAELA);
return;
} 
#undef NL

A_STATIC A68_VOID  NVIAELA_make_logical_name(A68_VC  Name, A68_VC  *ReturnedValue)
{ 
A68_VC  OVIAELA;  /* clause result */
A68_VC  PVIAELA;  /* avoid structure result */
A_PROC_ENTRY(make_logical_name);
 /* line 3426: */
GZDAELA_name_to_uc( Name, &PVIAELA );
OVIAELA = PVIAELA;
A_PROC_EXIT(make_logical_name);
*ReturnedValue = (OVIAELA);
return;
} 
#undef NL

A68_VOID  SVIAELA_quit(A68_109 * Db, A68_92  Msg)
{ 
A68_100 ** TVIAELA;  /* YIELD */
A_PROC_ENTRY(quit);
 /* line 3432: */
{ 
TEEAELA_check_valid_db(Db);
 /* line 3433: */
PEEAELA_check_nilfile((*(&(Db->Df))));
 /* line 3434: */
XQBAOSI_close_file((*(*(&((*(&(Db->Df)))->File)))), Msg);
 /* line 3435: */
 /* line 3436: */
TVIAELA = (&(Db->Df)) ;
(*TVIAELA) = QUDAELA_nilfile;
} 
A_PROC_EXIT(quit);
return;
} 
#undef NL

A68_VOID  WVIAELA_finish(A68_109 * Db, A68_97  Root)
{ 
A68_300  YVIAELA;  /* OPERATORS - mode -> union mode */
A68_92  ZVIAELA;  /* procedure value */
A68_109  AWIAELA;  /* avoid structure result */
A_PROC_ENTRY(finish);
 /* line 3442: */
{ 
TEEAELA_check_valid_db(Db);
 /* line 3443: */
 /* line 3444: */
ZVIAELA.fn.fn_global = GNBAELA_keepsake_msg;
ZVIAELA.nonlocals = A68_NIL;
KMHAELA_finish_shell(Db, A_UNITE(YVIAELA,mode2,2,Root), ZVIAELA, XVIAELA_close_file);
 /* line 3445: */
 /* line 3446: */
OVHAELA_open_shell( (*(*(&((*(&(Db->Df)))->File)))), (*(&(Db->Db_name))), (*(*(&((*(&(Db->Df)))->Writeable)))), &AWIAELA );
(*Db) = AWIAELA;
} 
A_PROC_EXIT(finish);
return;
} 
#undef NL

A68_VOID  EWIAELA_finish_and_close(A68_109 * Db, A68_97  Root, A68_92  Msg)
{ 
A68_300  GWIAELA;  /* OPERATORS - mode -> union mode */
A_PROC_ENTRY(finish_and_close);
 /* line 3453: */
{ 
TEEAELA_check_valid_db(Db);
 /* line 3454: */
 /* line 3455: */
 /* line 3456: */
KMHAELA_finish_shell(Db, A_UNITE(GWIAELA,mode2,2,Root), Msg, FWIAELA_close_file);
} 
A_PROC_EXIT(finish_and_close);
return;
} 
#undef NL

A68_VOID  IWIAELA_commit(A68_109 * Db)
{ 
A68_300  KWIAELA;  /* OPERATORS - mode -> union mode */
A68_97  LWIAELA;  /* YIELD */
A68_92  MWIAELA;  /* procedure value */
A_PROC_ENTRY(commit);
 /* line 3462: */
{ 
TEEAELA_check_valid_db(Db);
 /* line 3463: */
PEEAELA_check_nilfile((*(&(Db->Df))));
 /* line 3464: */
 /* line 3465: */
 /* line 3466: */
LWIAELA = (*(*(&((*(&(Db->Df)))->Root)))) ;
MWIAELA.fn.fn_global = GNBAELA_keepsake_msg;
MWIAELA.nonlocals = A68_NIL;
KMHAELA_finish_shell(Db, A_UNITE(KWIAELA,mode2,2,LWIAELA), MWIAELA, JWIAELA_close_file);
} 
A_PROC_EXIT(commit);
return;
} 
#undef NL
 /* line 1: */
 /* line 4: */
void KUDAELA(void)   /* initialise DECS su_keepsake */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","/u/model/ella/oslib/assoc/mfiles","-dir","/u/model/ella/ostools/assoc/mfiles","-dir","/u/model/ella/transform/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/su_keepsake.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/su_keepsake_interface.m","/u/model/ella/oslib/assoc/mfiles/putstrings.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_106  YUDAELA;  /* avoid structure result */
A68_32  EVDAELA;  /* avoid structure result */
A68_VC  KVDAELA;  /* avoid structure result */
A68_101  QVDAELA;  /* avoid structure result */
A68_32  WVDAELA;  /* avoid structure result */
A68_54  CWDAELA;  /* avoid structure result */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
LMBAELA();   /* USE su_keepsake_interface */
MTAAOSL();   /* USE putstrings */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/ella/assoc/./a68files/su_keepsake.a68";
A_config.translation_time = "Tue Apr  4 10:33:11 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "JUDAELA (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 10:33:11 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS su_keepsake);
UEAALIB_a68config(LGAALIB_configinfo, OUDAELA);
 /* line 56: */
PUDAELA_nildb = (A68_109 *)A68_NIL;
 /* line 57: */
QUDAELA_nilfile = (A68_100 *)A68_NIL;
 /* line 58: */
 /* line 59: */
 /* line 60: */
UUDAELA_generator( A68_TRUE, &YUDAELA );
XUDAELA_nilindirs = YUDAELA;
 /* line 61: */
AVDAELA_generator( A68_TRUE, &EVDAELA );
DVDAELA_nilpagetable = EVDAELA;
 /* line 62: */
GVDAELA_generator( A68_TRUE, &KVDAELA );
JVDAELA_nodata = KVDAELA;
 /* line 63: */
MVDAELA_generator( A68_TRUE, &QVDAELA );
PVDAELA_nodps = QVDAELA;
 /* line 64: */
SVDAELA_generator( A68_TRUE, &WVDAELA );
VVDAELA_noints = WVDAELA;
 /* line 65: */
YVDAELA_generator( A68_TRUE, &CWDAELA );
BWDAELA_nowanted = CWDAELA;
 /* line 67: */
 /* line 68: */
 /* line 69: */
 /* line 70: */
 /* line 71: */
 /* line 72: */
 /* line 73: */
 /* line 75: */
 /* line 76: */
 /* line 82: */
 /* line 83: */
 /* line 84: */
 /* line 85: */
 /* line 86: */
 /* line 87: */
 /* line 88: */
 /* line 89: */
 /* line 90: */
 /* line 93: */
 /* line 103: */
 /* line 108: */
 /* line 109: */
 /* line 110: */
 /* line 111: */
 /* line 113: */
 /* line 115: */
 /* line 118: */
 /* line 123: */
 /* line 129: */
 /* line 133: */
 /* line 136: */
 /* line 144: */
 /* line 157: */
 /* line 160: */
 /* line 176: */
 /* line 183: */
 /* line 187: */
 /* line 191: */
 /* line 195: */
 /* line 199: */
 /* line 210: */
 /* line 217: */
 /* line 221: */
 /* line 224: */
 /* line 227: */
 /* line 236: */
 /* line 240: */
 /* line 250: */
 /* line 257: */
 /* line 272: */
 /* line 274: */
 /* line 288: */
 /* line 291: */
 /* line 305: */
 /* line 308: */
 /* line 338: */
 /* line 341: */
 /* line 360: */
 /* line 396: */
 /* line 404: */
 /* line 412: */
 /* line 418: */
 /* line 427: */
 /* line 432: */
 /* line 439: */
 /* line 477: */
 /* line 495: */
 /* line 500: */
 /* line 541: */
 /* line 570: */
 /* line 591: */
 /* line 592: */
 /* line 599: */
 /* line 602: */
 /* line 608: */
 /* line 648: */
 /* line 651: */
 /* line 655: */
 /* line 782: */
 /* line 785: */
 /* line 789: */
 /* line 793: */
 /* line 797: */
 /* line 801: */
 /* line 840: */
 /* line 844: */
 /* line 854: */
 /* line 858: */
 /* line 867: */
 /* line 906: */
 /* line 926: */
 /* line 939: */
 /* line 956: */
 /* line 978: */
 /* line 987: */
 /* line 994: */
 /* line 1006: */
 /* line 1030: */
 /* line 1049: */
 /* line 1057: */
 /* line 1089: */
 /* line 1104: */
 /* line 1108: */
 /* line 1111: */
 /* line 1138: */
 /* line 1289: */
 /* line 1296: */
 /* line 1303: */
 /* line 1310: */
 /* line 1317: */
 /* line 1328: */
 /* line 1336: */
 /* line 1344: */
 /* line 1356: */
 /* line 1361: */
 /* line 1368: */
 /* line 1376: */
 /* line 1396: */
 /* line 1413: */
 /* line 1417: */
 /* line 1476: */
 /* line 1481: */
 /* line 1532: */
 /* line 1536: */
 /* line 1593: */
 /* line 1596: */
 /* line 1600: */
 /* line 1635: */
 /* line 1666: */
 /* line 1671: */
 /* line 1701: */
 /* line 1714: */
 /* line 1719: */
 /* line 1723: */
 /* line 1813: */
 /* line 1824: */
 /* line 1827: */
 /* line 1888: */
 /* line 1921: */
 /* line 1936: */
 /* line 1954: */
 /* line 2461: */
 /* line 2500: */
 /* line 2557: */
 /* line 2581: */
 /* line 2586: */
 /* line 2716: */
 /* line 2753: */
 /* line 2758: */
 /* line 2777: */
 /* line 3150: */
 /* line 3419: */
 /* line 3425: */
 /* line 3428: */
 /* line 3438: */
 /* line 3448: */
 /* line 3458: */
 /* line 3469: */
 /* line 3471: */
 /* line 3491: */
/*SKIP*/;
A_PROC_EXIT(DECS su_keepsake);
} 
#undef NL
/* end of translation of ./a68files/su_keepsake.a68 */
