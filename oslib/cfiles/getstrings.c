
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
/* UNAME:UKBAOSL */
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

A_PROCEDURE(A68_VOID ,A68t84,(A68_BOOL ,struct A68t72 *),(A68_BOOL ,struct A68t72 *,void *));
typedef struct A68t84  A68_84 ;    /* PROC(BOOL) MODE72 */

A_PROCEDURE(A68_VOID ,A68t86,(A68_VC ,A68_INT *,struct A68t38 *),(A68_VC ,A68_INT *,struct A68t38 *,void *));
typedef struct A68t86  A68_86 ;    /* PROC(REF MODE26,REF INT) MODE38 */
struct A68t85{
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
struct A68t86  Getbuffer;
};
typedef struct A68t85  A68_85 ;    /* STRUCT(INT,INT,INT,INT,INT,MODE38,REF MODE26,BOOL,BOOL,BOOL,MODE78,MODE86)  */

A_PROCEDURE(A68_INT ,A68t87,(struct A68t85 *),(struct A68t85 *,void *));
typedef struct A68t87  A68_87 ;    /* PROC(REF MODE85) INT */

A_PROCEDURE(A68_INT ,A68t88,(struct A68t85 *,A68_INT ),(struct A68t85 *,A68_INT ,void *));
typedef struct A68t88  A68_88 ;    /* PROC(REF MODE85,INT) INT */

A_PROCEDURE(A68_VOID ,A68t89,(struct A68t85 *),(struct A68t85 *,void *));
typedef struct A68t89  A68_89 ;    /* PROC(REF MODE85) VOID */
struct A68t91 ;
struct A68t92 ;

A_PROCEDURE(struct A68t85 *,A68t90,(struct A68t91 ,struct A68t92 ),(struct A68t91 ,struct A68t92 ,void *));
typedef struct A68t90  A68_90 ;    /* PROC(MODE91,MODE92) REF MODE85 */
struct A68t91 { A68_INT mode; union {
A68_INT  mode1;
A68_VC  mode2;
} data; };
typedef struct A68t91  A68_91 ;    /* UNION(INT,REF MODE26)  */
struct A68t92 { A68_INT mode; union {
struct A68t78  mode1;
struct A68t86  mode2;
} data; };
typedef struct A68t92  A68_92 ;    /* UNION(MODE78,MODE86)  */

A_PROCEDURE(A68_VOID ,A68t93,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t93  A68_93 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t94,(struct A68t75 ),(struct A68t75 ,void *));
typedef struct A68t94  A68_94 ;    /* PROC(MODE75) VOID */

A_PROCEDURE(A68_VOID ,A68t95,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t95  A68_95 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,57,A68t96);
typedef struct A68t96  A68_96 ;    /* STRUCT 57 CHAR */
A_ROW(A68_INT ,A68t98,1);
typedef struct A68t98  A68_98 ;    /* [] INT */
A_VECTOR(A68_BITS ,A68t99);
typedef struct A68t99  A68_99 ;    /* VECTOR [] BITS */
A_ROW(A68_BITS ,A68t100,1);
typedef struct A68t100  A68_100 ;    /* [] BITS */
A_VECTOR(A68_BOOL ,A68t101);
typedef struct A68t101  A68_101 ;    /* VECTOR [] BOOL */
A_ROW(A68_BOOL ,A68t102,1);
typedef struct A68t102  A68_102 ;    /* [] BOOL */
A_VECTOR(A68_REAL ,A68t103);
typedef struct A68t103  A68_103 ;    /* VECTOR [] REAL */
A_ROW(A68_REAL ,A68t104,1);
typedef struct A68t104  A68_104 ;    /* [] REAL */
A_STRAIGHT(A68_VOID,A68t105);
typedef struct A68t105  A68_105 ;    /* STRAIGHT MODE97 */
struct A68t97 { A68_INT mode; union {
A68_INT * mode1;
struct A68t72  mode2;
struct A68t98  mode3;
A68_BITS * mode4;
struct A68t99  mode5;
struct A68t100  mode6;
A68_CHAR * mode7;
A68_VC  mode8;
A68_RC  mode9;
A68_BOOL * mode10;
struct A68t101  mode11;
struct A68t102  mode12;
A68_REAL * mode13;
struct A68t103  mode14;
struct A68t104  mode15;
struct A68t89  mode16;
struct A68t105  mode17;
} data; };
typedef struct A68t97  A68_97 ;    /* UNION(REF INT,REF MODE72,REF MODE98,REF BITS,REF MODE99,REF MODE100,REF CHAR,REF MODE26,REF MODE27,REF BOOL,REF MODE101,REF MODE102,REF REAL,REF MODE103,REF MODE104,MODE89,MODE105)  */

A_PROCEDURE(A68_INT ,A68t106,(A68_VC ,A68_CHAR *),(A68_VC ,A68_CHAR *,void *));
typedef struct A68t106  A68_106 ;    /* PROC(MODE26,REF CHAR) INT */

A_PROCEDURE(A68_LINT ,A68t107,(A68_VC ,A68_CHAR **,A68_INT ),(A68_VC ,A68_CHAR **,A68_INT ,void *));
typedef struct A68t107  A68_107 ;    /* PROC(MODE26,REF REF CHAR,INT) LONG INT */

A_PROCEDURE(A68_REAL ,A68t108,(A68_VC ,A68_CHAR **),(A68_VC ,A68_CHAR **,void *));
typedef struct A68t108  A68_108 ;    /* PROC(MODE26,REF REF CHAR) REAL */

A_PROCEDURE(A68_VOID ,A68t109,(A68_INT ,struct A68t38 *),(A68_INT ,struct A68t38 *,void *));
typedef struct A68t109  A68_109 ;    /* PROC(INT) MODE38 */

A_PROCEDURE(A68_CHAR ,A68t110,(struct A68t85 *),(struct A68t85 *,void *));
typedef struct A68t110  A68_110 ;    /* PROC(REF MODE85) CHAR */

A_PROCEDURE(A68_BOOL ,A68t111,(struct A68t85 *),(struct A68t85 *,void *));
typedef struct A68t111  A68_111 ;    /* PROC(REF MODE85) BOOL */

A_PROCEDURE(A68_REAL ,A68t112,(struct A68t85 *),(struct A68t85 *,void *));
typedef struct A68t112  A68_112 ;    /* PROC(REF MODE85) REAL */

A_PROCEDURE(A68_VOID ,A68t113,(struct A68t85 *,A68_VC *),(struct A68t85 *,A68_VC *,void *));
typedef struct A68t113  A68_113 ;    /* PROC(REF MODE85) MODE26 */

A_PROCEDURE(A68_VOID ,A68t114,(struct A68t85 *,struct A68t38 *),(struct A68t85 *,struct A68t38 *,void *));
typedef struct A68t114  A68_114 ;    /* PROC(REF MODE85) MODE38 */

A_PROCEDURE(A68_VOID ,A68t115,(struct A68t85 *,A68_RC ),(struct A68t85 *,A68_RC ,void *));
typedef struct A68t115  A68_115 ;    /* PROC(REF MODE85,REF MODE27) VOID */
A_VECTOR(struct A68t97 ,A68t116);
typedef struct A68t116  A68_116 ;    /* VECTOR [] MODE97 */

A_PROCEDURE(A68_BOOL ,A68t117,(struct A68t85 *,struct A68t116 ),(struct A68t85 *,struct A68t116 ,void *));
typedef struct A68t117  A68_117 ;    /* PROC(REF MODE85,MODE116) BOOL */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from iobasics --- */
extern A68_CHAR  OOAAOSL_end_of_file_char;
extern A68_VOID  LRAAOSL_newline(struct A68t85 *);
/* --- End of imports from iobasics --- */


/* --- Imports from osif --- */
#include <errno.h>

#define XFBAOSI_errno errno
extern A68_BOOL  PPBAOSI_(struct A68t38 ,struct A68t38 );
extern A68_BOOL  TPBAOSI_(struct A68t38 ,struct A68t38 );
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
extern void VSCAOSI(void);   /* osif */
/* --- end of DECS initialisation functions --- */
static A68_96   YKBAOSL = {"$Id: getstrings.a68,v 34.2 1995/03/29 13:02:15 ella Exp $"}; 
A_GISVEC(A68_VC ,ZKBAOSL,YKBAOSL,57)
#define STRDIFF(p1,p2) \
   A_int_INT(A_CHARPTR_charptr(p2) - A_VC_charptr(p1))

#define ALBAOSL_diff STRDIFF
#include <stdlib.h>
#define STRTOL(s,e,r) A_long_LINT(strtol(A_VC_charptr(s), (char **)(e), r))

#define BLBAOSL_strtol STRTOL
#include <stdlib.h>
#define STRTOD(s,e) (A68_REAL)(strtod(A_VC_charptr(s), (char **)(e)))

#define CLBAOSL_strtod STRTOD
static A68_38  DLBAOSL_tt;
A68_38  GLBAOSL_io_badnumber;
A68_38  JLBAOSL_io_overflow;

A68_VOID  LLBAOSL_make_user_status(A68_INT  N, A68_38  *ReturnedValue);

A68_CHAR  PLBAOSL_getchar(A68_85 * Ch);

A68_VOID  XLBAOSL_skiplayout(A68_85 * Ch);

A68_VOID  CMBAOSL_skiptext(A68_85 * Ch);

A68_CHAR  GMBAOSL_nextchar(A68_85 * Ch);

A68_BOOL  LMBAOSL_end_of_line(A68_85 * Ch);

A_STATIC A68_INT  PMBAOSL_basicgetint(A68_85 * Ch, A68_INT  Radix);

A68_INT  ANBAOSL_getint(A68_85 * Ch);

A68_INT  DNBAOSL_gethex(A68_85 * Ch);

A68_INT  GNBAOSL_getoct(A68_85 * Ch);

A68_REAL  JNBAOSL_getreal(A68_85 * Ch);

A68_BOOL  UNBAOSL_getbool(A68_85 * Ch);

A68_VOID  BOBAOSL_getstr(A68_85 * Ch, A68_VC  *ReturnedValue);

A68_VOID  MOBAOSL_getstatus(A68_85 * Ch, A68_38  *ReturnedValue);

A68_VOID  QOBAOSL_strtrim(A68_VC  Str, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  ZOBAOSL_basicgetstring(A68_85 * Ch, A68_RC  Rrc);

A68_BOOL  AQBAOSL_get(A68_85 * Ch, A68_116  In);

A68_VOID  LLBAOSL_make_user_status(A68_INT  N, A68_38  *ReturnedValue)
{ 
A68_INT * MLBAOSL;  /* YIELD */
A68_38  NLBAOSL;  /* clause result */
A_PROC_ENTRY(make_user_status);
 /* line 68: */
 /* line 69: */
{ 
MLBAOSL = (&((&DLBAOSL_tt)->Status)) ;
(*MLBAOSL) = (100+N);
 /* line 70: */
 /* line 71: */
NLBAOSL = DLBAOSL_tt;
} 
A_PROC_EXIT(make_user_status);
*ReturnedValue = (NLBAOSL);
return;
} 
#undef NL

A68_CHAR  PLBAOSL_getchar(A68_85 * Ch)
{ 
A68_CHAR  QLBAOSL_result;
A68_BOOL  RLBAOSL;  /* optbool result */
A68_VC  SLBAOSL;  /* OPERATORS - simple index */
A68_INT  TLBAOSL;  /* YIELD */
A68_INT * ULBAOSL;  /* YIELD */
A68_CHAR  VLBAOSL;  /* clause result */
A_PROC_ENTRY(getchar);
 /* line 74: */
 /* line 75: */
{ 
 /* line 76: */
for ( ;; )
{ 
RLBAOSL = ((*(&(Ch->Charnumber)))>((*(&(Ch->Width)))+1));
if ( RLBAOSL )
{ /* line 77: */
RLBAOSL = PPBAOSI_((*(&(Ch->Status))), DPBAOSI_io_ok);
}
if ( !(RLBAOSL) ) break;
LRAAOSL_newline(Ch);
}
 /* line 78: */
SLBAOSL = (*(&(Ch->Buffer))) ;
TLBAOSL = (*(&(Ch->Charnumber))) ;
QLBAOSL_result = (*(&A_VINDEX(SLBAOSL,TLBAOSL)));
 /* line 79: */
ULBAOSL = (&(Ch->Charnumber)) ;
(*ULBAOSL)+=1;
 /* line 80: */
 /* line 81: */
VLBAOSL = QLBAOSL_result;
} 
A_PROC_EXIT(getchar);
return( VLBAOSL );
} 
#undef NL

A68_VOID  XLBAOSL_skiplayout(A68_85 * Ch)
{ 
A68_CHAR  YLBAOSL_c;
A68_BOOL  ZLBAOSL;  /* optbool result */
A68_INT * AMBAOSL;  /* YIELD */
A_PROC_ENTRY(skiplayout);
 /* line 84: */
 /* line 85: */
{ 
 /* line 86: */
for ( ;; )
{ 
ZLBAOSL = ((YLBAOSL_c = PLBAOSL_getchar(Ch))<=' ');
if ( ZLBAOSL )
{ZLBAOSL = (YLBAOSL_c!=OOAAOSL_end_of_file_char);
}
if ( !(ZLBAOSL) ) break;
/*SKIP*/;
}
 /* line 87: */
 /* line 88: */
AMBAOSL = (&(Ch->Charnumber)) ;
(*AMBAOSL)-=1;
} 
A_PROC_EXIT(skiplayout);
return;
} 
#undef NL

A68_VOID  CMBAOSL_skiptext(A68_85 * Ch)
{ 
A68_CHAR  DMBAOSL_c;
A68_INT * EMBAOSL;  /* YIELD */
A_PROC_ENTRY(skiptext);
 /* line 91: */
 /* line 92: */
{ 
 /* line 93: */
for ( ;; )
{ 
if ( !(((DMBAOSL_c = PLBAOSL_getchar(Ch))>=' ')) ) break;
/*SKIP*/;
}
 /* line 94: */
 /* line 95: */
EMBAOSL = (&(Ch->Charnumber)) ;
(*EMBAOSL)-=1;
} 
A_PROC_EXIT(skiptext);
return;
} 
#undef NL

A68_CHAR  GMBAOSL_nextchar(A68_85 * Ch)
{ 
A68_CHAR  HMBAOSL_c;
A68_INT * IMBAOSL;  /* YIELD */
A68_CHAR  JMBAOSL;  /* clause result */
A_PROC_ENTRY(nextchar);
 /* line 98: */
 /* line 99: */
{ 
HMBAOSL_c = PLBAOSL_getchar(Ch);
 /* line 100: */
IMBAOSL = (&(Ch->Charnumber)) ;
(*IMBAOSL)-=1;
 /* line 101: */
 /* line 102: */
JMBAOSL = HMBAOSL_c;
} 
A_PROC_EXIT(nextchar);
return( JMBAOSL );
} 
#undef NL

A68_BOOL  LMBAOSL_end_of_line(A68_85 * Ch)
{ 
A68_BOOL  MMBAOSL;  /* clause result */
A_PROC_ENTRY(end_of_line);
MMBAOSL = ((*(&(Ch->Charnumber)))>(*(&(Ch->Width))));
A_PROC_EXIT(end_of_line);
return( MMBAOSL );
} 
#undef NL

A_STATIC A68_INT  PMBAOSL_basicgetint(A68_85 * Ch, A68_INT  Radix)
{ 
A68_INT  QMBAOSL;  /* clause result */
A68_CHAR * RMBAOSL_end;
A68_VC  SMBAOSL;  /* OPERATORS - trim index */
A68_VC  TMBAOSL;  /* OPERATORS - trim index */
A68_VC  UMBAOSL_str;
A68_INT  VMBAOSL_int;
A68_INT  WMBAOSL_len;
A68_INT * XMBAOSL;  /* YIELD */
A68_38 * YMBAOSL;  /* YIELD */
A_PROC_ENTRY(basicgetint);
 /* line 107: */
 /* line 108: */
{ 
XLBAOSL_skiplayout(Ch);
 /* line 109: */
 /* line 110: */
 /* line 111: */
if ( TPBAOSI_((*(&(Ch->Status))), DPBAOSI_io_ok) )
{ 
QMBAOSL = 0;
} 
else
{ 
 /* line 112: */
 /* line 113: */
SMBAOSL = (*(&(Ch->Buffer))) ;
UMBAOSL_str = A_VTRIM(TMBAOSL,(SMBAOSL),A_VTSCRIPT(&(TMBAOSL.upb),(SMBAOSL).upb,(*(&(Ch->Charnumber))),(*(&(Ch->Width)))));
 /* line 114: */
VMBAOSL_int = (A68_INT )BLBAOSL_strtol(UMBAOSL_str, (&RMBAOSL_end), Radix);
 /* line 115: */
WMBAOSL_len = ALBAOSL_diff(UMBAOSL_str, RMBAOSL_end);
 /* line 116: */
XMBAOSL = (&(Ch->Charnumber)) ;
(*XMBAOSL)+=WMBAOSL_len;
 /* line 117: */
if ( (WMBAOSL_len==0) )
{ 
YMBAOSL = (&(Ch->Status)) ;
(*YMBAOSL) = GLBAOSL_io_badnumber;
} 
 /* line 118: */
 /* line 119: */
 /* line 120: */
QMBAOSL = VMBAOSL_int;
} 
} 
A_PROC_EXIT(basicgetint);
return( QMBAOSL );
} 
#undef NL

A68_INT  ANBAOSL_getint(A68_85 * Ch)
{ 
A68_INT  BNBAOSL;  /* clause result */
A_PROC_ENTRY(getint);
BNBAOSL = PMBAOSL_basicgetint(Ch, 0);
A_PROC_EXIT(getint);
return( BNBAOSL );
} 
#undef NL

A68_INT  DNBAOSL_gethex(A68_85 * Ch)
{ 
A68_INT  ENBAOSL;  /* clause result */
A_PROC_ENTRY(gethex);
ENBAOSL = PMBAOSL_basicgetint(Ch, 16);
A_PROC_EXIT(gethex);
return( ENBAOSL );
} 
#undef NL

A68_INT  GNBAOSL_getoct(A68_85 * Ch)
{ 
A68_INT  HNBAOSL;  /* clause result */
A_PROC_ENTRY(getoct);
HNBAOSL = PMBAOSL_basicgetint(Ch, 8);
A_PROC_EXIT(getoct);
return( HNBAOSL );
} 
#undef NL

A68_REAL  JNBAOSL_getreal(A68_85 * Ch)
{ 
A68_REAL  KNBAOSL;  /* clause result */
A68_CHAR * LNBAOSL_end;
A68_VC  MNBAOSL;  /* OPERATORS - trim index */
A68_VC  NNBAOSL;  /* OPERATORS - trim index */
A68_VC  ONBAOSL_str;
A68_REAL  PNBAOSL_real;
A68_INT  QNBAOSL_len;
A68_INT * RNBAOSL;  /* YIELD */
A68_38 * SNBAOSL;  /* YIELD */
A_PROC_ENTRY(getreal);
 /* line 127: */
 /* line 128: */
{ 
XLBAOSL_skiplayout(Ch);
 /* line 129: */
 /* line 130: */
 /* line 131: */
if ( TPBAOSI_((*(&(Ch->Status))), DPBAOSI_io_ok) )
{ 
KNBAOSL = 0.0;
} 
else
{ 
 /* line 132: */
 /* line 133: */
MNBAOSL = (*(&(Ch->Buffer))) ;
ONBAOSL_str = A_VTRIM(NNBAOSL,(MNBAOSL),A_VTSCRIPT(&(NNBAOSL.upb),(MNBAOSL).upb,(*(&(Ch->Charnumber))),(*(&(Ch->Width)))));
 /* line 134: */
PNBAOSL_real = CLBAOSL_strtod(ONBAOSL_str, (&LNBAOSL_end));
 /* line 135: */
QNBAOSL_len = ALBAOSL_diff(ONBAOSL_str, LNBAOSL_end);
 /* line 136: */
RNBAOSL = (&(Ch->Charnumber)) ;
(*RNBAOSL)+=QNBAOSL_len;
 /* line 137: */
if ( (QNBAOSL_len==0) )
{ 
SNBAOSL = (&(Ch->Status)) ;
(*SNBAOSL) = GLBAOSL_io_badnumber;
} 
 /* line 138: */
 /* line 139: */
 /* line 140: */
KNBAOSL = PNBAOSL_real;
} 
} 
A_PROC_EXIT(getreal);
return( KNBAOSL );
} 
#undef NL

A68_BOOL  UNBAOSL_getbool(A68_85 * Ch)
{ 
A68_BOOL  VNBAOSL;  /* clause result */
A68_CHAR  WNBAOSL_c;
A68_BOOL  XNBAOSL;  /* optbool result */
A68_BOOL  YNBAOSL;  /* optbool result */
A68_38 * ZNBAOSL;  /* YIELD */
A_PROC_ENTRY(getbool);
 /* line 143: */
 /* line 144: */
{ 
XLBAOSL_skiplayout(Ch);
 /* line 145: */
 /* line 146: */
if ( TPBAOSI_((*(&(Ch->Status))), DPBAOSI_io_ok) )
{ 
 /* line 147: */
VNBAOSL = A68_FALSE;
} 
else
{ 
WNBAOSL_c = PLBAOSL_getchar(Ch);
 /* line 148: */
XNBAOSL = (WNBAOSL_c=='T');
if ( ! XNBAOSL )
{ /* line 149: */
XNBAOSL = (WNBAOSL_c=='t');
}
if ( XNBAOSL )
{ 
 /* line 150: */
VNBAOSL = A68_TRUE;
} 
else
{ 
YNBAOSL = (WNBAOSL_c=='F');
if ( ! YNBAOSL )
{ /* line 151: */
YNBAOSL = (WNBAOSL_c=='f');
}
if ( YNBAOSL )
{ 
 /* line 152: */
VNBAOSL = A68_FALSE;
} 
else
{ 
ZNBAOSL = (&(Ch->Status)) ;
(*ZNBAOSL) = GLBAOSL_io_badnumber;
 /* line 153: */
 /* line 154: */
 /* line 155: */
VNBAOSL = A68_FALSE;
} 
} 
} 
} 
A_PROC_EXIT(getbool);
return( VNBAOSL );
} 
#undef NL

A68_VOID  BOBAOSL_getstr(A68_85 * Ch, A68_VC  *ReturnedValue)
{ 
A68_BOOL  COBAOSL;  /* optbool result */
A68_VC  DOBAOSL;  /* clause result */
A68_VC  EOBAOSL;  /* OPERATORS - trim index */
A68_VC  FOBAOSL;  /* OPERATORS - trim index */
A68_INT  GOBAOSL_rem;
A68_INT  HOBAOSL_start;
A68_INT * IOBAOSL;  /* YIELD */
A68_VC  JOBAOSL;  /* OPERATORS - trim index */
A68_VC  KOBAOSL;  /* OPERATORS - trim index */
A_PROC_ENTRY(getstr);
 /* line 158: */
 /* line 159: */
{ 
COBAOSL = ((*(&(Ch->Charnumber)))>((*(&(Ch->Width)))+1));
if ( COBAOSL )
{ /* line 160: */
COBAOSL = PPBAOSI_((*(&(Ch->Status))), DPBAOSI_io_ok);
}
if ( COBAOSL )
{ 
 /* line 161: */
LRAAOSL_newline(Ch);
} 
 /* line 162: */
 /* line 163: */
if ( TPBAOSI_((*(&(Ch->Status))), DPBAOSI_io_ok) )
{ 
 /* line 164: */
EOBAOSL = (*(&(Ch->Buffer))) ;
DOBAOSL = A_VTRIM(FOBAOSL,(EOBAOSL),A_VTSCRIPT(&(FOBAOSL.upb),(EOBAOSL).upb,1,0));
} 
else
{ 
GOBAOSL_rem = (((*(&(Ch->Width)))+1)-(*(&(Ch->Charnumber))));
 /* line 165: */
HOBAOSL_start = (*(&(Ch->Charnumber)));
 /* line 166: */
IOBAOSL = (&(Ch->Charnumber)) ;
(*IOBAOSL)+=(GOBAOSL_rem+1);
 /* line 168: */
 /* line 169: */
 /* line 170: */
JOBAOSL = (*(&(Ch->Buffer))) ;
DOBAOSL = A_VTRIM(KOBAOSL,(JOBAOSL),A_VTSCRIPT(&(KOBAOSL.upb),(JOBAOSL).upb,HOBAOSL_start,((HOBAOSL_start+GOBAOSL_rem)-1)));
} 
} 
A_PROC_EXIT(getstr);
*ReturnedValue = (DOBAOSL);
return;
} 
#undef NL

A68_VOID  MOBAOSL_getstatus(A68_85 * Ch, A68_38  *ReturnedValue)
{ 
A68_BOOL  NOBAOSL;  /* optbool result */
A68_38  OOBAOSL;  /* clause result */
A_PROC_ENTRY(getstatus);
 /* line 173: */
 /* line 174: */
{ 
NOBAOSL = ((*(&(Ch->Charnumber)))>(*(&(Ch->Width))));
if ( NOBAOSL )
{ /* line 175: */
NOBAOSL = PPBAOSI_((*(&(Ch->Status))), DPBAOSI_io_ok);
}
if ( NOBAOSL )
{ 
 /* line 176: */
LRAAOSL_newline(Ch);
} 
 /* line 177: */
 /* line 178: */
OOBAOSL = (*(&(Ch->Status)));
} 
A_PROC_EXIT(getstatus);
*ReturnedValue = (OOBAOSL);
return;
} 
#undef NL

A68_VOID  QOBAOSL_strtrim(A68_VC  Str, A68_VC  *ReturnedValue)
{ 
A68_INT  ROBAOSL_top;
A68_INT  SOBAOSL_pos;
A68_BOOL  TOBAOSL;  /* optbool result */
A68_INT  UOBAOSL;  /* YIELD */
A68_VC  VOBAOSL;  /* clause result */
A68_VC  WOBAOSL;  /* OPERATORS - trim index */
A_PROC_ENTRY(strtrim);
 /* line 181: */
{ 
ROBAOSL_top = Str.upb;
 /* line 182: */
SOBAOSL_pos = 0;
 /* line 183: */
for ( ;; )
{ 
TOBAOSL = (SOBAOSL_pos<ROBAOSL_top);
if ( TOBAOSL )
{UOBAOSL = SOBAOSL_pos+=1 ;
TOBAOSL = (A_VINDEX(Str,UOBAOSL)!=(A68_CHAR)0);
}
if ( !(TOBAOSL) ) break;
/*SKIP*/;
}
 /* line 184: */
 /* line 185: */
VOBAOSL = A_VTRIM(WOBAOSL,(Str),A_VTSCRIPT(&(WOBAOSL.upb),(Str).upb,1,(SOBAOSL_pos-1)));
} 
A_PROC_EXIT(strtrim);
*ReturnedValue = (VOBAOSL);
return;
} 
#undef NL

A_STATIC A68_VOID  ZOBAOSL_basicgetstring(A68_85 * Ch, A68_RC  Rrc)
{ 
A68_INT  APBAOSL_bottom;
A68_INT  BPBAOSL_top;
A68_INT  CPBAOSL_rem;
A68_INT  DPBAOSL_start;
A68_INT  EPBAOSL_len;
A68_INT  FPBAOSL;  /* clause result */
A68_INT  GPBAOSL_size;
A68_INT  HPBAOSL_extent;
A68_INT * IPBAOSL;  /* YIELD */
A68_RC  JPBAOSL;  /* OPERATORS - trim index */
A68_VC  KPBAOSL;  /* OPERATORS - trim index */
A68_VC  LPBAOSL;  /* OPERATORS - trim index */
A68_VC  MPBAOSL;  /* YIELD */
A68_RC  NPBAOSL;  /* OPERATORS - vector -> row */
A68_RC  OPBAOSL;  /* YIELD */
A68_RC  PPBAOSL;  /* OPERATORS - assign op */
A68_CHAR * QPBAOSL_tc;
A68_RC  RPBAOSL;  /* OPERATORS - trim index */
A68_RC  SPBAOSL;  /* forall yield */
A68_INT  TPBAOSL;  /* forall loop counter */
A68_CHAR * UPBAOSL_tc;
A68_RC  VPBAOSL;  /* OPERATORS - trim index */
A68_RC  WPBAOSL;  /* forall yield */
A68_INT  XPBAOSL;  /* forall loop counter */
A_PROC_ENTRY(basicgetstring);
 /* line 188: */
 /* line 189: */
{ 
APBAOSL_bottom = Rrc.dim[0].lwb;
BPBAOSL_top = Rrc.dim[0].upb;
 /* line 190: */
CPBAOSL_rem = (((*(&(Ch->Width)))+1)-(*(&(Ch->Charnumber))));
 /* line 191: */
DPBAOSL_start = (*(&(Ch->Charnumber)));
EPBAOSL_len = ((BPBAOSL_top-APBAOSL_bottom)+1);
 /* line 192: */
if ( (EPBAOSL_len<CPBAOSL_rem) )
{ 
FPBAOSL = EPBAOSL_len;
} 
else
{ 
FPBAOSL = CPBAOSL_rem;
} 
GPBAOSL_size = FPBAOSL;
 /* line 193: */
 /* line 194: */
if ( (GPBAOSL_size>0) )
{ 
HPBAOSL_extent = (GPBAOSL_size-1);
 /* line 195: */
IPBAOSL = (&(Ch->Charnumber)) ;
(*IPBAOSL)+=GPBAOSL_size;
 /* line 196: */
 /* line 197: */
KPBAOSL = (*(&(Ch->Buffer))) ;
MPBAOSL = A_VTRIM(LPBAOSL,(KPBAOSL),A_VTSCRIPT(&(LPBAOSL.upb),(KPBAOSL).upb,DPBAOSL_start,(DPBAOSL_start+HPBAOSL_extent))) ;
OPBAOSL = A_R1TRIM(JPBAOSL,(Rrc),A_RTSCRIPT(&(JPBAOSL.dim[0]),&((Rrc).dim[0]),APBAOSL_bottom,(APBAOSL_bottom+HPBAOSL_extent),1)) ;
PPBAOSL = A_VECARR(MPBAOSL,NPBAOSL) ;
A_R1ASSIGN2(PPBAOSL,OPBAOSL,A68_CHAR );
 /* line 198: */
SPBAOSL = A_R1TRIM(RPBAOSL,(Rrc),A_RTSCRIPT(&(RPBAOSL.dim[0]),&((Rrc).dim[0]),(APBAOSL_bottom+GPBAOSL_size),(Rrc).dim[0].upb,1)) ;
TPBAOSL = SPBAOSL.dim[0].upb - SPBAOSL.dim[0].lwb;
QPBAOSL_tc = SPBAOSL.data;
for (;TPBAOSL-- >= 0;
(QPBAOSL_tc += SPBAOSL.dim[0].stride
) )
{
(*QPBAOSL_tc) = (A68_CHAR)0;
}
 /* line 199: */
} 
else
{ 
WPBAOSL = A_R1TRIM(VPBAOSL,(Rrc),A_RTSCRIPT(&(VPBAOSL.dim[0]),&((Rrc).dim[0]),(Rrc).dim[0].lwb,(Rrc).dim[0].upb,(Rrc).dim[0].lwb)) ;
XPBAOSL = WPBAOSL.dim[0].upb - WPBAOSL.dim[0].lwb;
UPBAOSL_tc = WPBAOSL.data;
for (;XPBAOSL-- >= 0;
(UPBAOSL_tc += WPBAOSL.dim[0].stride
) )
{
(*UPBAOSL_tc) = (A68_CHAR)0;
}
 /* line 200: */
 /* line 201: */
} 
} 
A_PROC_EXIT(basicgetstring);
return;
} 
#undef NL

A68_BOOL  AQBAOSL_get(A68_85 * Ch, A68_116  In)
{ 
A68_97  BQBAOSL_elem;
A68_97 * CQBAOSL;  /* forall control - []x */
A68_INT  DQBAOSL;  /* forall loop counter */
A68_97  EQBAOSL;  /* united object - for case conformity */
A68_INT * FQBAOSL_ri;
A68_72  GQBAOSL_rvi;
A68_INT * HQBAOSL_i;
A68_INT  IQBAOSL;  /* forall loop counter */
A68_98  JQBAOSL_rri;
A68_INT * KQBAOSL_i;
A68_INT  LQBAOSL;  /* forall loop counter */
A68_BITS * MQBAOSL_rbt;
A68_99  NQBAOSL_rvbt;
A68_BITS * OQBAOSL_bt;
A68_INT  PQBAOSL;  /* forall loop counter */
A68_100  QQBAOSL_rrbt;
A68_BITS * RQBAOSL_bt;
A68_INT  SQBAOSL;  /* forall loop counter */
A68_CHAR * TQBAOSL_rc;
A68_VC  UQBAOSL_rvc;
A68_RC  VQBAOSL;  /* OPERATORS - vector -> row */
A68_RC  WQBAOSL_rrc;
A68_BOOL * XQBAOSL_rbl;
A68_101  YQBAOSL_rvbl;
A68_BOOL * ZQBAOSL_bb;
A68_INT  ARBAOSL;  /* forall loop counter */
A68_102  BRBAOSL_rrbl;
A68_BOOL * CRBAOSL_bb;
A68_INT  DRBAOSL;  /* forall loop counter */
A68_REAL * ERBAOSL_rr;
A68_103  FRBAOSL_rrr;
A68_REAL * GRBAOSL_r;
A68_INT  HRBAOSL;  /* forall loop counter */
A68_104  IRBAOSL_rvr;
A68_REAL * JRBAOSL_r;
A68_INT  KRBAOSL;  /* forall loop counter */
A68_89  LRBAOSL_proc;
A68_105  MRBAOSL_struct;
A68_INT  NRBAOSL_i;
A68_INT  ORBAOSL;  /* to part of loop */
A68_105  PRBAOSL;  /* OPERATORS - straight index */
A68_97  QRBAOSL;  /* OPERATORS - straight index result */
A68_116  RRBAOSL;  /* OPERATORS - scalar -> [] or VEC[] */
A68_BOOL  SRBAOSL;  /* clause result */
A_PROC_ENTRY(get);
 /* line 204: */
 /* line 205: */
{ 
DQBAOSL = In.upb -1;
CQBAOSL = In.data;
for (;DQBAOSL-- >= 0;
(CQBAOSL++
) )
{
BQBAOSL_elem = *CQBAOSL;
 /* line 206: */
 /* line 207: */
if ( !(PPBAOSI_((*(&(Ch->Status))), DPBAOSI_io_ok)) ) break;
 /* line 208: */
EQBAOSL = BQBAOSL_elem ;
switch ( EQBAOSL.mode )
{ 
case 1: /* REF INT */
FQBAOSL_ri = (EQBAOSL.data.mode1);
 /* line 209: */
(*FQBAOSL_ri) = ANBAOSL_getint(Ch);
break;
case 2: /* REF VECTOR [] INT */
GQBAOSL_rvi = (EQBAOSL.data.mode2);
IQBAOSL = GQBAOSL_rvi.upb -1;
HQBAOSL_i = GQBAOSL_rvi.data;
for (;IQBAOSL-- >= 0;
(HQBAOSL_i++
) )
{
(*HQBAOSL_i) = ANBAOSL_getint(Ch);
}
 /* line 210: */
break;
case 3: /* REF [] INT */
JQBAOSL_rri = (EQBAOSL.data.mode3);
LQBAOSL = JQBAOSL_rri.dim[0].upb - JQBAOSL_rri.dim[0].lwb;
KQBAOSL_i = JQBAOSL_rri.data;
for (;LQBAOSL-- >= 0;
(KQBAOSL_i += JQBAOSL_rri.dim[0].stride
) )
{
(*KQBAOSL_i) = ANBAOSL_getint(Ch);
}
 /* line 211: */
break;
case 4: /* REF BITS */
MQBAOSL_rbt = (EQBAOSL.data.mode4);
 /* line 212: */
(*MQBAOSL_rbt) = (A68_BITS )DNBAOSL_gethex(Ch);
break;
case 5: /* REF VECTOR [] BITS */
NQBAOSL_rvbt = (EQBAOSL.data.mode5);
PQBAOSL = NQBAOSL_rvbt.upb -1;
OQBAOSL_bt = NQBAOSL_rvbt.data;
for (;PQBAOSL-- >= 0;
(OQBAOSL_bt++
) )
{
(*OQBAOSL_bt) = (A68_BITS )DNBAOSL_gethex(Ch);
}
 /* line 213: */
break;
case 6: /* REF [] BITS */
QQBAOSL_rrbt = (EQBAOSL.data.mode6);
SQBAOSL = QQBAOSL_rrbt.dim[0].upb - QQBAOSL_rrbt.dim[0].lwb;
RQBAOSL_bt = QQBAOSL_rrbt.data;
for (;SQBAOSL-- >= 0;
(RQBAOSL_bt += QQBAOSL_rrbt.dim[0].stride
) )
{
(*RQBAOSL_bt) = (A68_BITS )DNBAOSL_gethex(Ch);
}
 /* line 214: */
break;
case 7: /* REF CHAR */
TQBAOSL_rc = (EQBAOSL.data.mode7);
 /* line 215: */
(*TQBAOSL_rc) = PLBAOSL_getchar(Ch);
break;
case 8: /* REF VECTOR [] CHAR */
UQBAOSL_rvc = (EQBAOSL.data.mode8);
 /* line 216: */
ZOBAOSL_basicgetstring(Ch, A_VECARR(UQBAOSL_rvc,VQBAOSL));
break;
case 9: /* REF [] CHAR */
WQBAOSL_rrc = (EQBAOSL.data.mode9);
 /* line 217: */
ZOBAOSL_basicgetstring(Ch, WQBAOSL_rrc);
break;
case 10: /* REF BOOL */
XQBAOSL_rbl = (EQBAOSL.data.mode10);
 /* line 218: */
(*XQBAOSL_rbl) = UNBAOSL_getbool(Ch);
break;
case 11: /* REF VECTOR [] BOOL */
YQBAOSL_rvbl = (EQBAOSL.data.mode11);
ARBAOSL = YQBAOSL_rvbl.upb -1;
ZQBAOSL_bb = YQBAOSL_rvbl.data;
for (;ARBAOSL-- >= 0;
(ZQBAOSL_bb++
) )
{
(*ZQBAOSL_bb) = UNBAOSL_getbool(Ch);
}
 /* line 219: */
break;
case 12: /* REF [] BOOL */
BRBAOSL_rrbl = (EQBAOSL.data.mode12);
DRBAOSL = BRBAOSL_rrbl.dim[0].upb - BRBAOSL_rrbl.dim[0].lwb;
CRBAOSL_bb = BRBAOSL_rrbl.data;
for (;DRBAOSL-- >= 0;
(CRBAOSL_bb += BRBAOSL_rrbl.dim[0].stride
) )
{
(*CRBAOSL_bb) = UNBAOSL_getbool(Ch);
}
 /* line 220: */
break;
case 13: /* REF REAL */
ERBAOSL_rr = (EQBAOSL.data.mode13);
 /* line 221: */
(*ERBAOSL_rr) = JNBAOSL_getreal(Ch);
break;
case 14: /* REF VECTOR [] REAL */
FRBAOSL_rrr = (EQBAOSL.data.mode14);
HRBAOSL = FRBAOSL_rrr.upb -1;
GRBAOSL_r = FRBAOSL_rrr.data;
for (;HRBAOSL-- >= 0;
(GRBAOSL_r++
) )
{
(*GRBAOSL_r) = JNBAOSL_getreal(Ch);
}
 /* line 222: */
break;
case 15: /* REF [] REAL */
IRBAOSL_rvr = (EQBAOSL.data.mode15);
KRBAOSL = IRBAOSL_rvr.dim[0].upb - IRBAOSL_rvr.dim[0].lwb;
JRBAOSL_r = IRBAOSL_rvr.data;
for (;KRBAOSL-- >= 0;
(JRBAOSL_r += IRBAOSL_rvr.dim[0].stride
) )
{
(*JRBAOSL_r) = JNBAOSL_getreal(Ch);
}
 /* line 223: */
break;
case 16: /* PROC(REF MODE85) VOID */
LRBAOSL_proc = (EQBAOSL.data.mode16);
 /* line 224: */
A_CALLPROC(LRBAOSL_proc,(Ch),(Ch,(LRBAOSL_proc).nonlocals));
break;
case 17: /* STRAIGHT MODE97 */
MRBAOSL_struct = (EQBAOSL.data.mode17);
ORBAOSL = MRBAOSL_struct.upb;
for ( NRBAOSL_i = 1;
NRBAOSL_i <= ORBAOSL;
NRBAOSL_i += 1 )
{ 
AQBAOSL_get(Ch, A_HVEC(RRBAOSL,A_STRINDEX_RTN(MRBAOSL_struct,NRBAOSL_i,PRBAOSL,QRBAOSL),A68_97 ));
}
 /* line 225: */
 /* line 226: */
break;
default: 
A_IMP_SKIP ;
break;
} 
}
 /* line 227: */
 /* line 228: */
SRBAOSL = PPBAOSI_((*(&(Ch->Status))), DPBAOSI_io_ok);
} 
A_PROC_EXIT(get);
return( SRBAOSL );
} 
#undef NL
 /* line 1: */
 /* line 3: */
void VKBAOSL(void)   /* initialise DECS getstrings */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/getstrings.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/iobasics.m","/u/model/ella/osif/assoc/mfiles/osif.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_INT * ELBAOSL;  /* YIELD */
A68_38  FLBAOSL;  /* clause result */
A68_INT * HLBAOSL;  /* YIELD */
A68_38  ILBAOSL;  /* clause result */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
GNAAOSL();   /* USE iobasics */
VSCAOSI();   /* USE osif */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/oslib/assoc/./a68files/getstrings.a68";
A_config.translation_time = "Tue Apr  4 09:47:08 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "UKBAOSL (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 09:47:08 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS getstrings);
UEAALIB_a68config(LGAALIB_configinfo, ZKBAOSL);
 /* line 42: */
 /* line 48: */
 /* line 50: */
 /* line 51: */
 /* line 52: */
 /* line 54: */
 /* line 55: */
 /* line 56: */
 /* line 58: */
 /* line 59: */
 /* line 60: */
 /* line 63: */
 /* line 64: */
{ 
ELBAOSL = (&((&DLBAOSL_tt)->Status)) ;
(*ELBAOSL) = 5;
FLBAOSL = DLBAOSL_tt;
} 
GLBAOSL_io_badnumber = FLBAOSL;
 /* line 65: */
{ 
HLBAOSL = (&((&DLBAOSL_tt)->Status)) ;
(*HLBAOSL) = 6;
ILBAOSL = DLBAOSL_tt;
} 
JLBAOSL_io_overflow = ILBAOSL;
 /* line 67: */
 /* line 73: */
 /* line 83: */
 /* line 90: */
 /* line 97: */
 /* line 104: */
 /* line 106: */
 /* line 122: */
 /* line 123: */
 /* line 124: */
 /* line 126: */
 /* line 142: */
 /* line 157: */
 /* line 172: */
 /* line 180: */
 /* line 187: */
 /* line 203: */
 /* line 231: */
 /* line 232: */
 /* line 239: */
/*SKIP*/;
A_PROC_EXIT(DECS getstrings);
} 
#undef NL
/* end of translation of ./a68files/getstrings.a68 */
