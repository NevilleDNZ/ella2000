
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
/* UNAME:YFAAOSL */
#include "Asupport.h"

A_PROCEDURE(A68_VOID ,A68t31,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t31  A68_31 ;    /* PROC(BOOL) MODE26 */

A_PROCEDURE(A68_VOID ,A68t32,(A68_CHAR ,A68_VC *),(A68_CHAR ,A68_VC *,void *));
typedef struct A68t32  A68_32 ;    /* PROC(CHAR) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t33,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t33  A68_33 ;    /* PROC(MODE26) REF MODE26 */
struct A68t35 ;

A_PROCEDURE(A68_VOID ,A68t34,(struct A68t35 ,A68_VC *),(struct A68t35 ,A68_VC *,void *));
typedef struct A68t34  A68_34 ;    /* PROC(MODE35) REF MODE26 */
A_VECTOR(A68_VC ,A68t35);
typedef struct A68t35  A68_35 ;    /* VECTOR [] MODE26 */

A_PROCEDURE(A68_VOID ,A68t36,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t36  A68_36 ;    /* PROC(INT) MODE26 */
struct A68t37{
A68_INT  Number;
A_PAD_INT(PAD_1)
struct A68t38 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_2)
};
typedef struct A68t37  A68_37 ;    /* STRUCT(INT,REF MODE38,BITS)  */
A_VECTOR(struct A68t40 ,A68t39);
typedef struct A68t39  A68_39 ;    /* VECTOR [] MODE40 */
struct A68t40{
struct A68t37  Msgno;
A68_VC  Text;
};
typedef struct A68t40  A68_40 ;    /* STRUCT(MODE37,REF MODE26)  */
struct A68t38{
A68_VC  Name;
struct A68t39  Messages;
};
typedef struct A68t38  A68_38 ;    /* STRUCT(REF MODE26,REF MODE39)  */

A_PROCEDURE(A68_VOID ,A68t41,(A68_BOOL ,struct A68t35 *),(A68_BOOL ,struct A68t35 *,void *));
typedef struct A68t41  A68_41 ;    /* PROC(BOOL) MODE35 */

A_PROCEDURE(A68_VOID ,A68t42,(struct A68t37 ,struct A68t35 ),(struct A68t37 ,struct A68t35 ,void *));
typedef struct A68t42  A68_42 ;    /* PROC(MODE37,MODE35) VOID */
A_VECTOR(struct A68t45 ,A68t44);
typedef struct A68t44  A68_44 ;    /* VECTOR [] MODE45 */
struct A68t45{
A68_INT  Number;
A_PAD_INT(PAD_3)
A68_BITS  Class;
A_PAD_BITS(PAD_4)
A68_VC  Text;
};
typedef struct A68t45  A68_45 ;    /* STRUCT(INT,BITS,MODE26)  */
struct A68t43{
A68_VC  Name;
struct A68t39  Messages;
A68_BOOL * Initialised;
struct A68t44  Setup;
};
typedef struct A68t43  A68_43 ;    /* STRUCT(MODE26,REF MODE39,REF BOOL,MODE44)  */

A_PROCEDURE(A68_VOID ,A68t46,(A68_BOOL ,struct A68t43 *),(A68_BOOL ,struct A68t43 *,void *));
typedef struct A68t46  A68_46 ;    /* PROC(BOOL) MODE43 */
A_VECTOR(A68_VC ,A68t47);
typedef struct A68t47  A68_47 ;    /* VECTOR [] REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t48,(struct A68t35 ,struct A68t47 *),(struct A68t35 ,struct A68t47 *,void *));
typedef struct A68t48  A68_48 ;    /* PROC(MODE35) MODE47 */

A_PROCEDURE(A68_VOID ,A68t49,(struct A68t47 ,struct A68t35 *),(struct A68t47 ,struct A68t35 *,void *));
typedef struct A68t49  A68_49 ;    /* PROC(MODE47) MODE35 */
struct A68t51 ;

A_PROCEDURE(A68_BOOL ,A68t50,(struct A68t51 ),(struct A68t51 ,void *));
typedef struct A68t50  A68_50 ;    /* PROC(MODE51) BOOL */
struct A68t51 { A68_INT mode; union {
struct A68t37  mode1;
struct A68t40  mode2;
} data; };
typedef struct A68t51  A68_51 ;    /* UNION(MODE37,MODE40)  */

A_PROCEDURE(A68_INT ,A68t52,(struct A68t37 ),(struct A68t37 ,void *));
typedef struct A68t52  A68_52 ;    /* PROC(MODE37) INT */

A_PROCEDURE(A68_VOID ,A68t53,(A68_INT ,struct A68t43 ,struct A68t37 *),(A68_INT ,struct A68t43 ,struct A68t37 *,void *));
typedef struct A68t53  A68_53 ;    /* PROC(INT,MODE43) MODE37 */

A_PROCEDURE(A68_BOOL ,A68t54,(struct A68t37 ,struct A68t43 ),(struct A68t37 ,struct A68t43 ,void *));
typedef struct A68t54  A68_54 ;    /* PROC(MODE37,MODE43) BOOL */

A_PROCEDURE(A68_VOID ,A68t55,(struct A68t37 ,struct A68t35 ,struct A68t40 *),(struct A68t37 ,struct A68t35 ,struct A68t40 *,void *));
typedef struct A68t55  A68_55 ;    /* PROC(MODE37,MODE35) MODE40 */
struct A68t56{
A68_VC  Name;
A68_BITS * Stdiofile;
};
typedef struct A68t56  A68_56 ;    /* STRUCT(REF MODE26,REF BITS)  */
struct A68t57{
A68_INT  Status;
A_PAD_INT(PAD_5)
};
typedef struct A68t57  A68_57 ;    /* STRUCT(INT)  */

A_PROCEDURE(A68_BOOL ,A68t58,(struct A68t57 ,struct A68t57 ),(struct A68t57 ,struct A68t57 ,void *));
typedef struct A68t58  A68_58 ;    /* PROC(MODE57,MODE57) BOOL */
A_ISTRUCT(A68_CHAR ,4,A68t60);
typedef struct A68t60  A68_60 ;    /* STRUCT 4 CHAR */
struct A68t59{
struct A68t60  Access;
A_PAD_ISTRUCT(A68_60 ,PAD_6)
};
typedef struct A68t59  A68_59 ;    /* STRUCT(MODE60)  */

A_PROCEDURE(A68_VOID ,A68t61,(struct A68t56 *,A68_VC *),(struct A68t56 *,A68_VC *,void *));
typedef struct A68t61  A68_61 ;    /* PROC(REF MODE56) MODE26 */

A_PROCEDURE(struct A68t56 *,A68t62,(A68_VC ,struct A68t59 ,struct A68t42 ),(A68_VC ,struct A68t59 ,struct A68t42 ,void *));
typedef struct A68t62  A68_62 ;    /* PROC(MODE26,MODE59,MODE42) REF MODE56 */

A_PROCEDURE(A68_VOID ,A68t63,(struct A68t56 *,struct A68t42 ),(struct A68t56 *,struct A68t42 ,void *));
typedef struct A68t63  A68_63 ;    /* PROC(REF MODE56,MODE42) VOID */

A_PROCEDURE(A68_VOID ,A68t64,(struct A68t56 *,A68_VC ,A68_INT *,struct A68t42 ,struct A68t57 *),(struct A68t56 *,A68_VC ,A68_INT *,struct A68t42 ,struct A68t57 *,void *));
typedef struct A68t64  A68_64 ;    /* PROC(REF MODE56,REF MODE26,REF INT,MODE42) MODE57 */

A_PROCEDURE(A68_VOID ,A68t65,(struct A68t56 *,A68_VC ,struct A68t42 ,struct A68t57 *),(struct A68t56 *,A68_VC ,struct A68t42 ,struct A68t57 *,void *));
typedef struct A68t65  A68_65 ;    /* PROC(REF MODE56,MODE26,MODE42) MODE57 */

A_PROCEDURE(A68_VOID ,A68t66,(struct A68t56 *,A68_LINT ,struct A68t42 ,struct A68t57 *),(struct A68t56 *,A68_LINT ,struct A68t42 ,struct A68t57 *,void *));
typedef struct A68t66  A68_66 ;    /* PROC(REF MODE56,LONG INT,MODE42) MODE57 */

A_PROCEDURE(A68_VOID ,A68t67,(struct A68t56 *,A68_LINT *,struct A68t42 ,struct A68t57 *),(struct A68t56 *,A68_LINT *,struct A68t42 ,struct A68t57 *,void *));
typedef struct A68t67  A68_67 ;    /* PROC(REF MODE56,REF LONG INT,MODE42) MODE57 */

A_PROCEDURE(A68_VOID ,A68t68,(struct A68t56 *,struct A68t42 ,struct A68t57 *),(struct A68t56 *,struct A68t42 ,struct A68t57 *,void *));
typedef struct A68t68  A68_68 ;    /* PROC(REF MODE56,MODE42) MODE57 */

A_PROCEDURE(A68_VOID ,A68t69,(A68_VC ,struct A68t42 ,struct A68t57 *),(A68_VC ,struct A68t42 ,struct A68t57 *,void *));
typedef struct A68t69  A68_69 ;    /* PROC(MODE26,MODE42) MODE57 */

A_PROCEDURE(A68_VOID ,A68t70,(A68_VC ,A68_VC ,struct A68t42 ,struct A68t57 *),(A68_VC ,A68_VC ,struct A68t42 ,struct A68t57 *,void *));
typedef struct A68t70  A68_70 ;    /* PROC(MODE26,MODE26,MODE42) MODE57 */

A_PROCEDURE(A68_VOID ,A68t71,(A68_VC ,A68_VC ,struct A68t42 ,A68_VC *),(A68_VC ,A68_VC ,struct A68t42 ,A68_VC *,void *));
typedef struct A68t71  A68_71 ;    /* PROC(MODE26,MODE26,MODE42) MODE26 */
struct A68t72{
A68_SBITS  Permissions;
A_PAD_SBITS(PAD_7)
A68_LBITS  Inode;
A_PAD_LBITS(PAD_8)
A68_SINT  Device;
A_PAD_SINT(PAD_9)
A68_SINT  Links;
A_PAD_SINT(PAD_10)
A68_SBITS  Owning_user;
A_PAD_SBITS(PAD_11)
A68_SBITS  Owning_group;
A_PAD_SBITS(PAD_12)
A68_LINT  Size;
A_PAD_LINT(PAD_13)
A68_LINT  Accessed;
A_PAD_LINT(PAD_14)
A68_LINT  Data_modified;
A_PAD_LINT(PAD_15)
A68_LINT  Status_modified;
A_PAD_LINT(PAD_16)
};
typedef struct A68t72  A68_72 ;    /* STRUCT(SHORT BITS,LONG BITS,SHORT INT,SHORT INT,SHORT BITS,SHORT BITS,LONG INT,LONG INT,LONG INT,LONG INT)  */
struct A68t74 ;

A_PROCEDURE(struct A68t72 *,A68t73,(struct A68t74 ,struct A68t42 ),(struct A68t74 ,struct A68t42 ,void *));
typedef struct A68t73  A68_73 ;    /* PROC(MODE74,MODE42) REF MODE72 */
struct A68t74 { A68_INT mode; union {
struct A68t56 * mode1;
A68_VC  mode2;
} data; };
typedef struct A68t74  A68_74 ;    /* UNION(REF MODE56,MODE26)  */

A_PROCEDURE(A68_BOOL ,A68t75,(struct A68t56 *),(struct A68t56 *,void *));
typedef struct A68t75  A68_75 ;    /* PROC(REF MODE56) BOOL */

A_PROCEDURE(A68_BITS *,A68t76,(A68_VC ,struct A68t42 ),(A68_VC ,struct A68t42 ,void *));
typedef struct A68t76  A68_76 ;    /* PROC(MODE26,MODE42) REF BITS */

A_PROCEDURE(A68_VOID ,A68t77,(A68_BITS *,struct A68t42 ),(A68_BITS *,struct A68t42 ,void *));
typedef struct A68t77  A68_77 ;    /* PROC(REF BITS,MODE42) VOID */

A_PROCEDURE(A68_VOID ,A68t78,(A68_BITS *,struct A68t42 ,A68_VC *),(A68_BITS *,struct A68t42 ,A68_VC *,void *));
typedef struct A68t78  A68_78 ;    /* PROC(REF BITS,MODE42) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t79,(A68_VC *),(A68_VC *,void *));
typedef struct A68t79  A68_79 ;    /* PROC MODE26 */

A_PROCEDURE(A68_VOID ,A68t80,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t80  A68_80 ;    /* PROC(MODE26) MODE26 */

A_PROCEDURE(A68_LINT ,A68t81,(void),(void *));
typedef struct A68t81  A68_81 ;    /* PROC LONG INT */

A_PROCEDURE(A68_VOID ,A68t82,(A68_LINT ,A68_VC *),(A68_LINT ,A68_VC *,void *));
typedef struct A68t82  A68_82 ;    /* PROC(LONG INT) MODE26 */

A_PROCEDURE(A68_VOID ,A68t83,(A68_INT ),(A68_INT ,void *));
typedef struct A68t83  A68_83 ;    /* PROC(INT) VOID */

A_PROCEDURE(A68_INT ,A68t84,(A68_VC ,struct A68t42 ),(A68_VC ,struct A68t42 ,void *));
typedef struct A68t84  A68_84 ;    /* PROC(MODE26,MODE42) INT */

A_PROCEDURE(A68_INT ,A68t85,(void),(void *));
typedef struct A68t85  A68_85 ;    /* PROC INT */
struct A68t86{
A68_VC  Filename;
A68_VC  Directory;
A68_VC  Name;
A68_VC  Type;
};
typedef struct A68t86  A68_86 ;    /* STRUCT(REF MODE26,REF MODE26,REF MODE26,REF MODE26)  */

A_PROCEDURE(A68_VOID ,A68t87,(A68_VC ,A68_VC ,struct A68t42 ,struct A68t86 *),(A68_VC ,A68_VC ,struct A68t42 ,struct A68t86 *,void *));
typedef struct A68t87  A68_87 ;    /* PROC(MODE26,MODE26,MODE42) MODE86 */

A_PROCEDURE(A68_VOID ,A68t88,(struct A68t35 *),(struct A68t35 *,void *));
typedef struct A68t88  A68_88 ;    /* PROC MODE35 */

A_PROCEDURE(A68_VOID ,A68t89,(A68_VC ,struct A68t42 ,struct A68t35 *),(A68_VC ,struct A68t42 ,struct A68t35 *,void *));
typedef struct A68t89  A68_89 ;    /* PROC(MODE26,MODE42) MODE35 */
struct A68t91 ;

A_PROCEDURE(A68_VOID ,A68t90,(struct A68t91 ,struct A68t42 ,struct A68t42 ),(struct A68t91 ,struct A68t42 ,struct A68t42 ,void *));
typedef struct A68t90  A68_90 ;    /* PROC(MODE91,MODE42,MODE42) VOID */
A_VECTOR(A68_INT ,A68t91);
typedef struct A68t91  A68_91 ;    /* VECTOR [] INT */

A_PROCEDURE(A68_VOID ,A68t92,(struct A68t91 ,struct A68t42 ),(struct A68t91 ,struct A68t42 ,void *));
typedef struct A68t92  A68_92 ;    /* PROC(MODE91,MODE42) VOID */

A_PROCEDURE(A68_VOID ,A68t93,(A68_INT ,struct A68t42 ,struct A68t42 *),(A68_INT ,struct A68t42 ,struct A68t42 *,void *));
typedef struct A68t93  A68_93 ;    /* PROC(INT,MODE42) MODE42 */

A_PROCEDURE(A68_VOID ,A68t94,(void),(void *));
typedef struct A68t94  A68_94 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t95,(A68_BITS ),(A68_BITS ,void *));
typedef struct A68t95  A68_95 ;    /* PROC(BITS) VOID */
struct A68t97 ;

A_PROCEDURE(A68_VOID ,A68t96,(struct A68t97 ),(struct A68t97 ,void *));
typedef struct A68t96  A68_96 ;    /* PROC(MODE97) VOID */

A_PROCEDURE(A68_VOID ,A68t97,(A68_VC ),(A68_VC ,void *));
typedef struct A68t97  A68_97 ;    /* PROC(MODE26) VOID */
struct A68t98{
A68_VC  Name;
A68_INT  Value;
A_PAD_INT(PAD_17)
};
typedef struct A68t98  A68_98 ;    /* STRUCT(MODE26,INT)  */

A_PROCEDURE(A68_VOID ,A68t99,(A68_BOOL ,struct A68t98 *),(A68_BOOL ,struct A68t98 *,void *));
typedef struct A68t99  A68_99 ;    /* PROC(BOOL) MODE98 */
struct A68t101 ;

A_PROCEDURE(A68_VOID ,A68t100,(struct A68t101 ,struct A68t42 ),(struct A68t101 ,struct A68t42 ,void *));
typedef struct A68t100  A68_100 ;    /* PROC(MODE101,MODE42) VOID */
A_VECTOR(struct A68t98 ,A68t101);
typedef struct A68t101  A68_101 ;    /* VECTOR [] MODE98 */

A_PROCEDURE(A68_VOID ,A68t102,(struct A68t94 ),(struct A68t94 ,void *));
typedef struct A68t102  A68_102 ;    /* PROC(MODE94) VOID */

A_PROCEDURE(A68_VOID ,A68t103,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t103  A68_103 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,51,A68t104);
typedef struct A68t104  A68_104 ;    /* STRUCT 51 CHAR */

A_PROCEDURE(A68_INT ,A68t105,(A68_INT ),(A68_INT ,void *));
typedef struct A68t105  A68_105 ;    /* PROC(INT) INT */

A_PROCEDURE(A68_VOID ,A68t106,(A68_INT ,A68_VC ),(A68_INT ,A68_VC ,void *));
typedef struct A68t106  A68_106 ;    /* PROC(INT,REF MODE26) VOID */
A_ISTRUCT(A68_CHAR ,8,A68t107);
typedef struct A68t107  A68_107 ;    /* STRUCT 8 CHAR */

A_PROCEDURE(A68_VOID ,A68t108,(A68_INT ,A68_VC *),(A68_INT ,A68_VC *,void *));
typedef struct A68t108  A68_108 ;    /* PROC(INT) REF MODE26 */
A_ISTRUCT(A68_CHAR ,3,A68t109);
typedef struct A68t109  A68_109 ;    /* STRUCT 3 CHAR */
A_ISTRUCT(A68_VC ,12,A68t110);
typedef struct A68t110  A68_110 ;    /* STRUCT 12 MODE26 */
A_ISTRUCT(A68_CHAR ,23,A68t111);
typedef struct A68t111  A68_111 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(A68_INT ,12,A68t112);
typedef struct A68t112  A68_112 ;    /* STRUCT 12 INT */
A_ISTRUCT(A68_VC ,2,A68t113);
typedef struct A68t113  A68_113 ;    /* STRUCT 2 MODE26 */

A_PROCEDURE(A68_VOID ,A68t114,(A68_VC *),(A68_VC *,void *));
typedef struct A68t114  A68_114 ;    /* PROC REF MODE26 */
A_ISTRUCT(A68_CHAR ,5,A68t115);
typedef struct A68t115  A68_115 ;    /* STRUCT 5 CHAR */
A_ISTRUCT(A68_CHAR ,10,A68t116);
typedef struct A68t116  A68_116 ;    /* STRUCT 10 CHAR */
A_ISTRUCT(A68_VC ,3,A68t117);
typedef struct A68t117  A68_117 ;    /* STRUCT 3 MODE26 */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from osif --- */
#include <errno.h>

#define XFBAOSI_errno errno
extern A68_42  ZLBAOSI_global_msg;
extern A68_LINT  WZBAOSI_get_time(void);
#include <stdlib.h>
#define EXIT(status) exit(A_INT_int(status))

#define BZBAOSI_exit EXIT
extern A68_INT  ZACAOSI_get_cpu_time(void);
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


/* --- Imports from messageproc --- */
extern A68_37  SHAAOSI_system;
/* --- End of imports from messageproc --- */


/* --- Imports from strops --- */
extern A68_VOID  JBAAOSI_concat(struct A68t35 ,A68_VC *);
extern A68_VOID  FCAAOSI_intchars(A68_INT ,A68_VC *);
/* --- End of imports from strops --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void VSCAOSI(void);   /* osif */
extern void JFAAOSI(void);   /* messageproc */
extern void BAAAOSI(void);   /* strops */
/* --- end of DECS initialisation functions --- */
static A68_104   CGAAOSL = {"$Id: time.a68,v 34.2 1995/03/29 13:02:19 ella Exp $"}; 
A_GISVEC(A68_VC ,DGAAOSL,CGAAOSL,51)
static A68_INT  EGAAOSL_zero;
static A68_109   RHAAOSL = {"Jan"}; 
A_GISVEC(A68_VC ,SHAAOSL,RHAAOSL,3)
static A68_109   THAAOSL = {"Feb"}; 
A_GISVEC(A68_VC ,UHAAOSL,THAAOSL,3)
static A68_109   VHAAOSL = {"Mar"}; 
A_GISVEC(A68_VC ,WHAAOSL,VHAAOSL,3)
static A68_109   XHAAOSL = {"Apr"}; 
A_GISVEC(A68_VC ,YHAAOSL,XHAAOSL,3)
static A68_109   ZHAAOSL = {"May"}; 
A_GISVEC(A68_VC ,AIAAOSL,ZHAAOSL,3)
static A68_109   BIAAOSL = {"Jun"}; 
A_GISVEC(A68_VC ,CIAAOSL,BIAAOSL,3)
static A68_109   DIAAOSL = {"Jul"}; 
A_GISVEC(A68_VC ,EIAAOSL,DIAAOSL,3)
static A68_109   FIAAOSL = {"Aug"}; 
A_GISVEC(A68_VC ,GIAAOSL,FIAAOSL,3)
static A68_109   HIAAOSL = {"Sep"}; 
A_GISVEC(A68_VC ,IIAAOSL,HIAAOSL,3)
static A68_109   JIAAOSL = {"Oct"}; 
A_GISVEC(A68_VC ,KIAAOSL,JIAAOSL,3)
static A68_109   LIAAOSL = {"Nov"}; 
A_GISVEC(A68_VC ,MIAAOSL,LIAAOSL,3)
static A68_109   NIAAOSL = {"Dec"}; 
A_GISVEC(A68_VC ,OIAAOSL,NIAAOSL,3)
static A68_35  QIAAOSL_months;
static A68_111   UIAAOSL = {"date_str:  Illegal time"}; 
A_GISVEC(A68_VC ,VIAAOSL,UIAAOSL,23)
static A68_109   LLAAOSL = {".00"}; 
static A68_115   EMAAOSL = {".00  "}; 
typedef struct   /* env of non-global proc */
{
int dummy;
} KHAAOSL_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} LKAAOSL_generator;
typedef struct   /* env of non-global proc */
{
int dummy;
} WKAAOSL_generator;

A68_INT  FGAAOSL_seconds(void);

A_STATIC A68_INT  IGAAOSL_days(A68_INT  Seconds);

A_STATIC A68_VOID  MGAAOSL_time_proc(A68_INT  Seconds, A68_VC  Ans);

A68_VOID  GHAAOSL_time(A68_INT  Seconds, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  JHAAOSL_generator(A68_BOOL  HHAAOSL_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  TIAAOSL_date_proc(A68_INT  Seconds, A68_VC  Ans);

A68_VOID  HKAAOSL_date(A68_INT  Seconds, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  KKAAOSL_generator(A68_BOOL  IKAAOSL_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  SKAAOSL_date_time(A68_INT  Seconds, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  VKAAOSL_generator(A68_BOOL  TKAAOSL_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  JLAAOSL_centichars(A68_INT  I, A68_VC  *ReturnedValue);

A68_VOID  ZLAAOSL_cpu(A68_VC  *ReturnedValue);

A68_VOID  CMAAOSL_time_str(A68_VC  *ReturnedValue);

A_STATIC A68_VOID  JHAAOSL_generator(A68_BOOL  HHAAOSL_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((KHAAOSL_generator *)NonLocals)->x)
{ 
A68_VC  LHAAOSL;  /* clause result */
A68_VC  MHAAOSL;  /* OPERATORS - dynamic generator */
{ 
MHAAOSL.upb = 8 ;
( HHAAOSL_anonymous? A_VLOC(A68_CHAR ,MHAAOSL): A_VHEAP(A68_CHAR ,MHAAOSL) );
LHAAOSL = MHAAOSL;
} 
*ReturnedValue = (LHAAOSL);
return;
} 
#undef NL

A_STATIC A68_VOID  KKAAOSL_generator(A68_BOOL  IKAAOSL_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((LKAAOSL_generator *)NonLocals)->x)
{ 
A68_VC  MKAAOSL;  /* clause result */
A68_VC  NKAAOSL;  /* OPERATORS - dynamic generator */
{ 
NKAAOSL.upb = 11 ;
( IKAAOSL_anonymous? A_VLOC(A68_CHAR ,NKAAOSL): A_VHEAP(A68_CHAR ,NKAAOSL) );
MKAAOSL = NKAAOSL;
} 
*ReturnedValue = (MKAAOSL);
return;
} 
#undef NL

A_STATIC A68_VOID  VKAAOSL_generator(A68_BOOL  TKAAOSL_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((WKAAOSL_generator *)NonLocals)->x)
{ 
A68_VC  XKAAOSL;  /* clause result */
A68_VC  YKAAOSL;  /* OPERATORS - dynamic generator */
{ 
YKAAOSL.upb = 21 ;
( TKAAOSL_anonymous? A_VLOC(A68_CHAR ,YKAAOSL): A_VHEAP(A68_CHAR ,YKAAOSL) );
XKAAOSL = YKAAOSL;
} 
*ReturnedValue = (XKAAOSL);
return;
} 
#undef NL

A68_INT  FGAAOSL_seconds(void)
{ 
A68_INT  GGAAOSL;  /* clause result */
A_PROC_ENTRY(seconds);
GGAAOSL = (A68_INT )WZBAOSI_get_time();
A_PROC_EXIT(seconds);
return( GGAAOSL );
} 
#undef NL

A_STATIC A68_INT  IGAAOSL_days(A68_INT  Seconds)
{ 
A68_INT  JGAAOSL;  /* clause result */
A_PROC_ENTRY(days);
JGAAOSL = (Seconds/86400);
A_PROC_EXIT(days);
return( JGAAOSL );
} 
#undef NL

A_STATIC A68_VOID  MGAAOSL_time_proc(A68_INT  Seconds, A68_VC  Ans)
{ 
A68_INT  NGAAOSL;  /* ADICOPS - MOD */
A68_INT  OGAAOSL;  /* ADICOPS - MOD */
A68_INT  PGAAOSL_dsecs;
A68_INT  QGAAOSL_dmins;
A68_INT  RGAAOSL_hrs;
A68_INT  SGAAOSL;  /* ADICOPS - MOD */
A68_INT  TGAAOSL;  /* ADICOPS - MOD */
A68_INT  UGAAOSL_mins;
A68_INT  VGAAOSL;  /* ADICOPS - MOD */
A68_INT  WGAAOSL;  /* ADICOPS - MOD */
A68_INT  XGAAOSL_secs;
A68_107  YGAAOSL;  /* collateral clause result */
A68_INT  ZGAAOSL;  /* ADICOPS - MOD */
A68_INT  AHAAOSL;  /* ADICOPS - MOD */
A68_INT  BHAAOSL;  /* ADICOPS - MOD */
A68_INT  CHAAOSL;  /* ADICOPS - MOD */
A68_VC  DHAAOSL;  /* OPERATORS - istruct -> vector */
A68_VC  EHAAOSL;  /* OPERATORS - assign op */
A_PROC_ENTRY(time_proc);
 /* line 49: */
 /* line 50: */
{ 
OGAAOSL = 86400 ;
PGAAOSL_dsecs = A_MOD(Seconds,OGAAOSL,NGAAOSL);
 /* line 51: */
QGAAOSL_dmins = (PGAAOSL_dsecs/60);
 /* line 52: */
RGAAOSL_hrs = (QGAAOSL_dmins/60);
 /* line 53: */
TGAAOSL = 60 ;
UGAAOSL_mins = A_MOD(QGAAOSL_dmins,TGAAOSL,SGAAOSL);
 /* line 54: */
WGAAOSL = 60 ;
XGAAOSL_secs = A_MOD(PGAAOSL_dsecs,WGAAOSL,VGAAOSL);
 /* line 55: */
 /* line 56: */
YGAAOSL.data[0] = (A68_CHAR)(EGAAOSL_zero+(RGAAOSL_hrs/10));
AHAAOSL = 10 ;
YGAAOSL.data[1] = (A68_CHAR)(EGAAOSL_zero+A_MOD(RGAAOSL_hrs,AHAAOSL,ZGAAOSL));
 /* line 57: */
YGAAOSL.data[2] = ':';
YGAAOSL.data[3] = (A68_CHAR)(EGAAOSL_zero+(UGAAOSL_mins/10));
CHAAOSL = 10 ;
YGAAOSL.data[4] = (A68_CHAR)(EGAAOSL_zero+A_MOD(UGAAOSL_mins,CHAAOSL,BHAAOSL));
 /* line 58: */
YGAAOSL.data[5] = ':';
YGAAOSL.data[6] = (A68_CHAR)(EGAAOSL_zero+(XGAAOSL_secs/10));
 /* line 59: */
YGAAOSL.data[7] = (A68_CHAR)(EGAAOSL_zero+(XGAAOSL_secs/10));
EHAAOSL = A_HISVEC(DHAAOSL,YGAAOSL,8,A68_CHAR ) ;
A_VASSIGN2(EHAAOSL,Ans,A68_CHAR );
} 
A_PROC_EXIT(time_proc);
return;
} 
#undef NL

A68_VOID  GHAAOSL_time(A68_INT  Seconds, A68_VC  *ReturnedValue)
{ 
A68_31  IHAAOSL_generator;   /* proc value of non-global proc */
A68_VC  NHAAOSL;  /* avoid structure result */
A68_VC  OHAAOSL_ans;
A68_VC  PHAAOSL;  /* clause result */
A_PROC_ENTRY(time);
 /* line 62: */
{ 
A_CLOSURE( IHAAOSL_generator, JHAAOSL_generator, KHAAOSL_generator );
A_CALLPROC(IHAAOSL_generator,(A68_FALSE, &NHAAOSL),(A68_FALSE, &NHAAOSL,(IHAAOSL_generator).nonlocals));
OHAAOSL_ans = NHAAOSL;
MGAAOSL_time_proc(Seconds, OHAAOSL_ans);
PHAAOSL = OHAAOSL_ans;
} 
A_PROC_EXIT(time);
*ReturnedValue = (PHAAOSL);
return;
} 
#undef NL

A_STATIC A68_VOID  TIAAOSL_date_proc(A68_INT  Seconds, A68_VC  Ans)
{ 
A68_35  WIAAOSL;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT  XIAAOSL_days;
A68_INT  YIAAOSL_year;
A68_BOOL  ZIAAOSL_leap;
A68_INT  AJAAOSL;  /* ADICOPS - MOD */
A68_INT  BJAAOSL;  /* ADICOPS - MOD */
A68_BOOL  CJAAOSL;  /* optbool result */
A68_INT  DJAAOSL;  /* ADICOPS - MOD */
A68_INT  EJAAOSL;  /* ADICOPS - MOD */
A68_INT  FJAAOSL_month;
A68_112  GJAAOSL;  /* collateral clause result */
A68_112  HJAAOSL_mnths;
A68_91  IJAAOSL;  /* OPERATORS - istruct -> vector */
A68_91  JJAAOSL;  /* OPERATORS - simple index */
A68_91  KJAAOSL;  /* OPERATORS - istruct -> vector */
A68_91  LJAAOSL;  /* OPERATORS - simple index */
A68_INT  MJAAOSL_dten;
A68_CHAR  NJAAOSL;  /* clause result */
A68_INT  OJAAOSL;  /* YIELD */
A68_CHAR * PJAAOSL;  /* YIELD */
A68_INT  QJAAOSL;  /* YIELD */
A68_INT  RJAAOSL;  /* ADICOPS - MOD */
A68_INT  SJAAOSL;  /* ADICOPS - MOD */
A68_CHAR * TJAAOSL;  /* YIELD */
A68_INT  UJAAOSL;  /* YIELD */
A68_INT  VJAAOSL;  /* YIELD */
A68_CHAR * WJAAOSL;  /* YIELD */
A68_CHAR * XJAAOSL;  /* YIELD */
A68_VC  YJAAOSL;  /* OPERATORS - trim index */
A68_VC  ZJAAOSL;  /* YIELD */
A68_VC  AKAAOSL;  /* OPERATORS - assign op */
A68_INT  BKAAOSL_i;
A68_INT  CKAAOSL;  /* by part of loop */
A68_INT  DKAAOSL;  /* ADICOPS - MOD */
A68_INT  EKAAOSL;  /* ADICOPS - MOD */
A68_CHAR * FKAAOSL;  /* YIELD */
A_PROC_ENTRY(date_proc);
 /* line 68: */
 /* line 69: */
{ 
if ( (Seconds<0) )
{ 
A_CALLPROC(ZLBAOSI_global_msg,(SHAAOSI_system, A_HVEC(WIAAOSL,VIAAOSL,A68_VC )),(SHAAOSI_system, A_HVEC(WIAAOSL,VIAAOSL,A68_VC ),(ZLBAOSI_global_msg).nonlocals));
} 
 /* line 70: */
XIAAOSL_days = ((Seconds/86400)+1);
 /* line 71: */
YIAAOSL_year = 1970;
 /* line 73: */
ZIAAOSL_leap = A68_FALSE;
 /* line 74: */
for ( ;; )
{ 
 /* line 75: */
if ( !((XIAAOSL_days>366)) ) break;
 /* line 76: */
BJAAOSL = 4 ;
if ( ZIAAOSL_leap = (A_MOD(YIAAOSL_year,BJAAOSL,AJAAOSL)==0) )
{ 
 /* line 77: */
XIAAOSL_days-=366;
} 
else
{ 
 /* line 78: */
XIAAOSL_days-=365;
} 
 /* line 79: */
 /* line 80: */
YIAAOSL_year+=1;
}
 /* line 81: */
CJAAOSL = !ZIAAOSL_leap;
if ( CJAAOSL )
{CJAAOSL = (XIAAOSL_days==366);
}
if ( CJAAOSL )
{ 
YIAAOSL_year+=1;
XIAAOSL_days = 1;
} 
 /* line 82: */
EJAAOSL = 4 ;
ZIAAOSL_leap = (A_MOD(YIAAOSL_year,EJAAOSL,DJAAOSL)==0);
 /* line 83: */
FJAAOSL_month = 1;
 /* line 84: */
 /* line 85: */
GJAAOSL.data[0] = 31;
if ( ZIAAOSL_leap )
{ 
GJAAOSL.data[1] = 29;
} 
else
{ 
GJAAOSL.data[1] = 28;
} 
GJAAOSL.data[2] = 31;
GJAAOSL.data[3] = 30;
GJAAOSL.data[4] = 31;
GJAAOSL.data[5] = 30;
GJAAOSL.data[6] = 31;
GJAAOSL.data[7] = 31;
GJAAOSL.data[8] = 30;
GJAAOSL.data[9] = 31;
GJAAOSL.data[10] = 30;
GJAAOSL.data[11] = 31;
HJAAOSL_mnths = GJAAOSL;
 /* line 86: */
for ( ;; )
{ 
 /* line 87: */
JJAAOSL = A_HISVEC(IJAAOSL,HJAAOSL_mnths,12,A68_INT ) ;
if ( !((XIAAOSL_days>A_VINDEX(JJAAOSL,FJAAOSL_month))) ) break;
LJAAOSL = A_HISVEC(KJAAOSL,HJAAOSL_mnths,12,A68_INT ) ;
XIAAOSL_days-=A_VINDEX(LJAAOSL,FJAAOSL_month);
FJAAOSL_month+=1;
}
 /* line 88: */
MJAAOSL_dten = (XIAAOSL_days/10);
 /* line 89: */
if ( (MJAAOSL_dten==0) )
{ 
NJAAOSL = ' ';
} 
else
{ 
NJAAOSL = (A68_CHAR)(EGAAOSL_zero+MJAAOSL_dten);
} 
OJAAOSL = 1 ;
PJAAOSL = (&A_VINDEX(Ans,OJAAOSL)) ;
(*PJAAOSL) = NJAAOSL;
 /* line 90: */
QJAAOSL = 2 ;
SJAAOSL = 10 ;
TJAAOSL = (&A_VINDEX(Ans,QJAAOSL)) ;
(*TJAAOSL) = (A68_CHAR)(EGAAOSL_zero+A_MOD(XIAAOSL_days,SJAAOSL,RJAAOSL));
 /* line 91: */
UJAAOSL = 3 ;
VJAAOSL = 7 ;
WJAAOSL = (&A_VINDEX(Ans,VJAAOSL)) ;
XJAAOSL = (&A_VINDEX(Ans,UJAAOSL)) ;
(*XJAAOSL) = (*WJAAOSL) = ' ';
 /* line 92: */
ZJAAOSL = A_VTRIM(YJAAOSL,(Ans),A_VTSCRIPT(&(YJAAOSL.upb),(Ans).upb,4,6)) ;
AKAAOSL = A_VINDEX(QIAAOSL_months,FJAAOSL_month) ;
A_VASSIGN2(AKAAOSL,ZJAAOSL,A68_CHAR );
 /* line 93: */
 /* line 94: */
CKAAOSL = (-1);
for ( BKAAOSL_i = 11;
( CKAAOSL > 0 && BKAAOSL_i <= 8) ||
( CKAAOSL < 0 && BKAAOSL_i >= 8) ||
( CKAAOSL == 0 ) ;
BKAAOSL_i += CKAAOSL )
{ 
EKAAOSL = 10 ;
FKAAOSL = (&A_VINDEX(Ans,BKAAOSL_i)) ;
(*FKAAOSL) = (A68_CHAR)(EGAAOSL_zero+A_MOD(YIAAOSL_year,EKAAOSL,DKAAOSL));
 /* line 95: */
 /* line 96: */
YIAAOSL_year/=10;
}
 /* line 97: */
} 
A_PROC_EXIT(date_proc);
return;
} 
#undef NL

A68_VOID  HKAAOSL_date(A68_INT  Seconds, A68_VC  *ReturnedValue)
{ 
A68_31  JKAAOSL_generator;   /* proc value of non-global proc */
A68_VC  OKAAOSL;  /* avoid structure result */
A68_VC  PKAAOSL_ans;
A68_VC  QKAAOSL;  /* clause result */
A_PROC_ENTRY(date);
 /* line 100: */
{ 
A_CLOSURE( JKAAOSL_generator, KKAAOSL_generator, LKAAOSL_generator );
A_CALLPROC(JKAAOSL_generator,(A68_FALSE, &OKAAOSL),(A68_FALSE, &OKAAOSL,(JKAAOSL_generator).nonlocals));
PKAAOSL_ans = OKAAOSL;
TIAAOSL_date_proc(Seconds, PKAAOSL_ans);
QKAAOSL = PKAAOSL_ans;
} 
A_PROC_EXIT(date);
*ReturnedValue = (QKAAOSL);
return;
} 
#undef NL

A68_VOID  SKAAOSL_date_time(A68_INT  Seconds, A68_VC  *ReturnedValue)
{ 
A68_31  UKAAOSL_generator;   /* proc value of non-global proc */
A68_VC  ZKAAOSL;  /* avoid structure result */
A68_VC  ALAAOSL_ans;
A68_INT  BLAAOSL;  /* YIELD */
A68_INT  CLAAOSL;  /* YIELD */
A68_CHAR * DLAAOSL;  /* YIELD */
A68_CHAR * ELAAOSL;  /* YIELD */
A68_VC  FLAAOSL;  /* OPERATORS - trim index */
A68_VC  GLAAOSL;  /* OPERATORS - trim index */
A68_VC  HLAAOSL;  /* clause result */
A_PROC_ENTRY(date_time);
 /* line 103: */
 /* line 104: */
{ 
A_CLOSURE( UKAAOSL_generator, VKAAOSL_generator, WKAAOSL_generator );
A_CALLPROC(UKAAOSL_generator,(A68_FALSE, &ZKAAOSL),(A68_FALSE, &ZKAAOSL,(UKAAOSL_generator).nonlocals));
ALAAOSL_ans = ZKAAOSL;
 /* line 105: */
BLAAOSL = 12 ;
CLAAOSL = 13 ;
DLAAOSL = (&A_VINDEX(ALAAOSL_ans,CLAAOSL)) ;
ELAAOSL = (&A_VINDEX(ALAAOSL_ans,BLAAOSL)) ;
(*ELAAOSL) = (*DLAAOSL) = ' ';
 /* line 106: */
TIAAOSL_date_proc(Seconds, A_VTRIM(FLAAOSL,(ALAAOSL_ans),A_VTSCRIPT(&(FLAAOSL.upb),(ALAAOSL_ans).upb,1,11)));
 /* line 107: */
MGAAOSL_time_proc(Seconds, A_VTRIM(GLAAOSL,(ALAAOSL_ans),A_VTSCRIPT(&(GLAAOSL.upb),(ALAAOSL_ans).upb,14,21)));
 /* line 108: */
 /* line 109: */
HLAAOSL = ALAAOSL_ans;
} 
A_PROC_EXIT(date_time);
*ReturnedValue = (HLAAOSL);
return;
} 
#undef NL

A68_VOID  JLAAOSL_centichars(A68_INT  I, A68_VC  *ReturnedValue)
{ 
A68_INT  KLAAOSL_centi;
A68_109 * MLAAOSL;  /* YIELD */
A68_VC  NLAAOSL;  /* OPERATORS - istruct -> vector */
A68_VC  OLAAOSL_fr;
A68_INT  PLAAOSL_i;
A68_INT  QLAAOSL;  /* by part of loop */
A68_INT  RLAAOSL;  /* ADICOPS - MOD */
A68_INT  SLAAOSL;  /* ADICOPS - MOD */
A68_CHAR * TLAAOSL;  /* YIELD */
A68_113  ULAAOSL;  /* collateral clause result */
A68_VC  VLAAOSL;  /* avoid structure result */
A68_VC  WLAAOSL;  /* clause result */
A68_35  XLAAOSL;  /* OPERATORS - istruct -> vector */
A68_VC  YLAAOSL;  /* avoid structure result */
A_PROC_ENTRY(centichars);
 /* line 113: */
 /* line 114: */
{ 
KLAAOSL_centi = I;
 /* line 115: */
MLAAOSL = A_LOC(A68_109 ) ;
(*MLAAOSL) = LLAAOSL ;
OLAAOSL_fr = A_ISVEC(NLAAOSL,MLAAOSL,3,A68_CHAR );
 /* line 116: */
 /* line 117: */
QLAAOSL = (-1);
for ( PLAAOSL_i = 3;
( QLAAOSL > 0 && PLAAOSL_i <= 2) ||
( QLAAOSL < 0 && PLAAOSL_i >= 2) ||
( QLAAOSL == 0 ) ;
PLAAOSL_i += QLAAOSL )
{ 
SLAAOSL = 10 ;
TLAAOSL = (&A_VINDEX(OLAAOSL_fr,PLAAOSL_i)) ;
(*TLAAOSL) = (A68_CHAR)(EGAAOSL_zero+A_MOD(KLAAOSL_centi,SLAAOSL,RLAAOSL));
 /* line 118: */
 /* line 119: */
KLAAOSL_centi/=10;
}
 /* line 120: */
FCAAOSI_intchars( KLAAOSL_centi, &VLAAOSL );
ULAAOSL.data[0] = VLAAOSL;
ULAAOSL.data[1] = OLAAOSL_fr;
 /* line 121: */
JBAAOSI_concat( A_HISVEC(XLAAOSL,ULAAOSL,2,A68_VC ), &YLAAOSL );
WLAAOSL = YLAAOSL;
} 
A_PROC_EXIT(centichars);
*ReturnedValue = (WLAAOSL);
return;
} 
#undef NL

A68_VOID  ZLAAOSL_cpu(A68_VC  *ReturnedValue)
{ 
A68_VC  AMAAOSL;  /* clause result */
A68_VC  BMAAOSL;  /* avoid structure result */
A_PROC_ENTRY(cpu);
JLAAOSL_centichars( ZACAOSI_get_cpu_time(), &BMAAOSL );
AMAAOSL = BMAAOSL;
A_PROC_EXIT(cpu);
*ReturnedValue = (AMAAOSL);
return;
} 
#undef NL

A68_VOID  CMAAOSL_time_str(A68_VC  *ReturnedValue)
{ 
A68_INT  DMAAOSL_cpu;
A68_115  FMAAOSL_fr;
A68_INT  GMAAOSL_i;
A68_INT  HMAAOSL;  /* by part of loop */
A68_VC  IMAAOSL;  /* OPERATORS - istruct -> vector */
A68_VC  JMAAOSL;  /* OPERATORS - simple index */
A68_INT  KMAAOSL;  /* ADICOPS - MOD */
A68_INT  LMAAOSL;  /* ADICOPS - MOD */
A68_CHAR * MMAAOSL;  /* YIELD */
A68_116  NMAAOSL_time;
A68_VC  OMAAOSL;  /* OPERATORS - istruct -> vector */
A68_VC  PMAAOSL;  /* OPERATORS - trim index */
A68_VC  QMAAOSL;  /* OPERATORS - trim index */
A68_VC  RMAAOSL;  /* OPERATORS - istruct -> vector */
A68_VC  SMAAOSL;  /* OPERATORS - simple index */
A68_INT  TMAAOSL;  /* YIELD */
A68_VC  UMAAOSL;  /* OPERATORS - istruct -> vector */
A68_VC  VMAAOSL;  /* OPERATORS - simple index */
A68_INT  WMAAOSL;  /* YIELD */
A68_CHAR * XMAAOSL;  /* YIELD */
A68_CHAR * YMAAOSL;  /* YIELD */
A68_117  ZMAAOSL;  /* collateral clause result */
A68_VC  ANAAOSL;  /* OPERATORS - istruct -> vector */
A68_VC  BNAAOSL;  /* avoid structure result */
A68_VC  CNAAOSL;  /* OPERATORS - istruct -> vector */
A68_VC  DNAAOSL;  /* clause result */
A68_35  ENAAOSL;  /* OPERATORS - istruct -> vector */
A68_VC  FNAAOSL;  /* avoid structure result */
A_PROC_ENTRY(time_str);
{ 
DMAAOSL_cpu = ZACAOSI_get_cpu_time();
 /* line 130: */
FMAAOSL_fr = EMAAOSL;
 /* line 131: */
 /* line 132: */
HMAAOSL = (-1);
for ( GMAAOSL_i = 3;
( HMAAOSL > 0 && GMAAOSL_i <= 2) ||
( HMAAOSL < 0 && GMAAOSL_i >= 2) ||
( HMAAOSL == 0 ) ;
GMAAOSL_i += HMAAOSL )
{ 
JMAAOSL = A_ISVEC(IMAAOSL,(&FMAAOSL_fr),5,A68_CHAR ) ;
LMAAOSL = 10 ;
MMAAOSL = (&A_VINDEX(JMAAOSL,GMAAOSL_i)) ;
(*MMAAOSL) = (A68_CHAR)(EGAAOSL_zero+A_MOD(DMAAOSL_cpu,LMAAOSL,KMAAOSL));
 /* line 133: */
 /* line 134: */
DMAAOSL_cpu/=10;
}
 /* line 135: */
 /* line 136: */
PMAAOSL = A_ISVEC(OMAAOSL,(&NMAAOSL_time),10,A68_CHAR ) ;
MGAAOSL_time_proc((A68_INT )WZBAOSI_get_time(), A_VTRIM(QMAAOSL,(PMAAOSL),A_VTSCRIPT(&(QMAAOSL.upb),(PMAAOSL).upb,1,8)));
 /* line 137: */
SMAAOSL = A_ISVEC(RMAAOSL,(&NMAAOSL_time),10,A68_CHAR ) ;
TMAAOSL = 9 ;
VMAAOSL = A_ISVEC(UMAAOSL,(&NMAAOSL_time),10,A68_CHAR ) ;
WMAAOSL = 10 ;
XMAAOSL = (&A_VINDEX(VMAAOSL,WMAAOSL)) ;
YMAAOSL = (&A_VINDEX(SMAAOSL,TMAAOSL)) ;
(*YMAAOSL) = (*XMAAOSL) = ' ';
 /* line 138: */
ZMAAOSL.data[0] = A_HISVEC(ANAAOSL,NMAAOSL_time,10,A68_CHAR );
FCAAOSI_intchars( DMAAOSL_cpu, &BNAAOSL );
ZMAAOSL.data[1] = BNAAOSL;
ZMAAOSL.data[2] = A_HISVEC(CNAAOSL,FMAAOSL_fr,5,A68_CHAR );
 /* line 139: */
 /* line 142: */
JBAAOSI_concat( A_HISVEC(ENAAOSL,ZMAAOSL,3,A68_VC ), &FNAAOSL );
DNAAOSL = FNAAOSL;
} 
A_PROC_EXIT(time_str);
*ReturnedValue = (DNAAOSL);
return;
} 
#undef NL
 /* line 1: */
 /* line 3: */
void ZFAAOSL(void)   /* initialise DECS time */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/time.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","/u/model/ella/osif/assoc/mfiles/osif.m","/u/model/ella/osif/assoc/mfiles/messageproc.m","/u/model/ella/osif/assoc/mfiles/strops.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_110  QHAAOSL;  /* collateral clause result */
A68_35  PIAAOSL;  /* OPERATORS - istruct -> vector */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
VSCAOSI();   /* USE osif */
JFAAOSI();   /* USE messageproc */
BAAAOSI();   /* USE strops */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/oslib/assoc/./a68files/time.a68";
A_config.translation_time = "Tue Apr  4 09:46:56 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "YFAAOSL (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 09:46:56 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS time);
UEAALIB_a68config(LGAALIB_configinfo, DGAAOSL);
 /* line 42: */
EGAAOSL_zero = (A68_INT)(unsigned char)'0';
 /* line 44: */
 /* line 46: */
 /* line 48: */
 /* line 61: */
 /* line 64: */
QHAAOSL.data[0] = SHAAOSL;
QHAAOSL.data[1] = UHAAOSL;
QHAAOSL.data[2] = WHAAOSL;
QHAAOSL.data[3] = YHAAOSL;
QHAAOSL.data[4] = AIAAOSL;
 /* line 65: */
QHAAOSL.data[5] = CIAAOSL;
QHAAOSL.data[6] = EIAAOSL;
QHAAOSL.data[7] = GIAAOSL;
QHAAOSL.data[8] = IIAAOSL;
QHAAOSL.data[9] = KIAAOSL;
QHAAOSL.data[10] = MIAAOSL;
QHAAOSL.data[11] = OIAAOSL;
QIAAOSL_months = A_HISVEC(PIAAOSL,QHAAOSL,12,A68_VC );
 /* line 67: */
 /* line 99: */
 /* line 102: */
 /* line 112: */
 /* line 124: */
 /* line 127: */
 /* line 128: */
 /* line 129: */
 /* line 144: */
A_PROC_EXIT(DECS time);
} 
#undef NL
/* end of translation of ./a68files/time.a68 */
