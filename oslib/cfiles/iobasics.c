
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
/* UNAME:FNAAOSL */
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

A_PROCEDURE(A68_VOID ,A68t84,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t84  A68_84 ;    /* PROC(MODE26) REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t85,(struct A68t75 ),(struct A68t75 ,void *));
typedef struct A68t85  A68_85 ;    /* PROC(MODE75) VOID */

A_PROCEDURE(A68_VOID ,A68t86,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t86  A68_86 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,55,A68t87);
typedef struct A68t87  A68_87 ;    /* STRUCT 55 CHAR */

A_PROCEDURE(A68_VOID ,A68t88,(A68_BOOL ,struct A68t72 *),(A68_BOOL ,struct A68t72 *,void *));
typedef struct A68t88  A68_88 ;    /* PROC(BOOL) MODE72 */

A_PROCEDURE(A68_VOID ,A68t90,(A68_VC ,A68_INT *,struct A68t38 *),(A68_VC ,A68_INT *,struct A68t38 *,void *));
typedef struct A68t90  A68_90 ;    /* PROC(REF MODE26,REF INT) MODE38 */
struct A68t89{
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
struct A68t90  Getbuffer;
};
typedef struct A68t89  A68_89 ;    /* STRUCT(INT,INT,INT,INT,INT,MODE38,REF MODE26,BOOL,BOOL,BOOL,MODE78,MODE90)  */

A_PROCEDURE(A68_INT ,A68t91,(struct A68t89 *),(struct A68t89 *,void *));
typedef struct A68t91  A68_91 ;    /* PROC(REF MODE89) INT */

A_PROCEDURE(A68_INT ,A68t92,(struct A68t89 *,A68_INT ),(struct A68t89 *,A68_INT ,void *));
typedef struct A68t92  A68_92 ;    /* PROC(REF MODE89,INT) INT */
struct A68t93 { A68_INT mode; union {
A68_INT  mode1;
A68_VC  mode2;
} data; };
typedef struct A68t93  A68_93 ;    /* UNION(INT,REF MODE26)  */
struct A68t94 { A68_INT mode; union {
struct A68t78  mode1;
struct A68t90  mode2;
} data; };
typedef struct A68t94  A68_94 ;    /* UNION(MODE78,MODE90)  */

A_PROCEDURE(struct A68t89 *,A68t95,(struct A68t93 ,struct A68t94 ),(struct A68t93 ,struct A68t94 ,void *));
typedef struct A68t95  A68_95 ;    /* PROC(MODE93,MODE94) REF MODE89 */

A_PROCEDURE(A68_VOID ,A68t96,(struct A68t89 *),(struct A68t89 *,void *));
typedef struct A68t96  A68_96 ;    /* PROC(REF MODE89) VOID */

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
extern A68_BOOL  PPBAOSI_(struct A68t38 ,struct A68t38 );
extern A68_BOOL  TPBAOSI_(struct A68t38 ,struct A68t38 );
extern A68_38  DPBAOSI_io_ok;
extern A68_38  MPBAOSI_io_no_newline;
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
extern void VSCAOSI(void);   /* osif */
/* --- end of DECS initialisation functions --- */
static A68_87   JNAAOSL = {"$Id: iobasics.a68,v 34.2 1995/03/29 13:02:16 ella Exp $"}; 
A_GISVEC(A68_VC ,KNAAOSL,JNAAOSL,55)
A68_83  LNAAOSL_anonymous;
A68_88  MNAAOSL_anonymous;
A68_VC  YNAAOSL_nilstr;
A68_VC  EOAAOSL_nullstr;
A68_72  GOAAOSL_nilints;
A68_72  MOAAOSL_nullints;
A68_89 * NOAAOSL_nilchannel;
A68_CHAR  OOAAOSL_end_of_file_char;
A68_CHAR  POAAOSL_newline_char;
static A68_CHAR  QOAAOSL_cr_char;
A68_CHAR  ROAAOSL_newpage_char;
A68_CHAR  SOAAOSL_null_char;
A68_VC  UOAAOSL_space_str;
A68_VC  WOAAOSL_newline_str;
typedef struct   /* env of non-global proc */
{
A68_INT  NQAAOSL_width;
A_PAD_INT(PAD_24)
} SQAAOSL_generator;
typedef struct   /* env of non-global proc */
{
A68_89 * Ch;
} DSAAOSL_generator;

A_STATIC A68_VOID  ONAAOSL_generator(A68_BOOL  NNAAOSL_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  TNAAOSL_generator(A68_BOOL  SNAAOSL_anonymous, A68_72  *ReturnedValue);

A_STATIC A68_VOID  AOAAOSL_generator(A68_BOOL  ZNAAOSL_anonymous, A68_VC  *ReturnedValue);

A_STATIC A68_VOID  IOAAOSL_generator(A68_BOOL  HOAAOSL_anonymous, A68_72  *ReturnedValue);

A68_INT  YOAAOSL_charnumber(A68_89 * Ch);

A68_INT  BPAAOSL_linenumber(A68_89 * Ch);

A68_INT  EPAAOSL_charsleft(A68_89 * Ch);

A68_INT  IPAAOSL_setwidth(A68_89 * Ch, A68_INT  Width);

A68_VOID  PPAAOSL_nullputbuffer(A68_VC  Str);

A68_VOID  SPAAOSL_nullgetbuffer(A68_VC  Rvc, A68_INT * I, A68_38  *ReturnedValue);

A68_89 * XPAAOSL_make_channel(A68_93  Intbuff, A68_94  Putgetbuffer);

A_STATIC A68_VOID  RQAAOSL_generator(A68_BOOL  PQAAOSL_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A68_VOID  LRAAOSL_newline(A68_89 * Ch);

A_STATIC A68_VOID  CSAAOSL_generator(A68_BOOL  ASAAOSL_anonymous, A68_VC  *ReturnedValue, void *NonLocals);

A_STATIC A68_VOID  RQAAOSL_generator(A68_BOOL  PQAAOSL_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((SQAAOSL_generator *)NonLocals)->x)
{ 
A68_VC  TQAAOSL;  /* clause result */
A68_VC  UQAAOSL;  /* OPERATORS - dynamic generator */
{ 
 /* line 132: */
UQAAOSL.upb = (NL(NQAAOSL_width)+1) ;
( PQAAOSL_anonymous? A_VLOC(A68_CHAR ,UQAAOSL): A_VHEAP(A68_CHAR ,UQAAOSL) );
TQAAOSL = UQAAOSL;
} 
*ReturnedValue = (TQAAOSL);
return;
} 
#undef NL

A_STATIC A68_VOID  CSAAOSL_generator(A68_BOOL  ASAAOSL_anonymous, A68_VC  *ReturnedValue, void *NonLocals)
#define NL(x) (((DSAAOSL_generator *)NonLocals)->x)
{ 
A68_VC  ESAAOSL;  /* clause result */
A68_VC  FSAAOSL;  /* OPERATORS - dynamic generator */
{ 
FSAAOSL.upb = ((*(&(NL(Ch)->Buffer))).upb+(*(&(NL(Ch)->Sizeincr)))) ;
( ASAAOSL_anonymous? A_VLOC(A68_CHAR ,FSAAOSL): A_VHEAP(A68_CHAR ,FSAAOSL) );
ESAAOSL = FSAAOSL;
} 
*ReturnedValue = (ESAAOSL);
return;
} 
#undef NL

A_STATIC A68_VOID  ONAAOSL_generator(A68_BOOL  NNAAOSL_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  PNAAOSL;  /* clause result */
A68_VC  QNAAOSL;  /* OPERATORS - dynamic generator */
{ 
 /* line 44: */
QNAAOSL.upb = 0 ;
( NNAAOSL_anonymous? A_VLOC(A68_CHAR ,QNAAOSL): A_VHEAP(A68_CHAR ,QNAAOSL) );
PNAAOSL = QNAAOSL;
} 
*ReturnedValue = (PNAAOSL);
return;
} 
#undef NL

A_STATIC A68_VOID  TNAAOSL_generator(A68_BOOL  SNAAOSL_anonymous, A68_72  *ReturnedValue)
{ 
A68_72  UNAAOSL;  /* clause result */
A68_72  VNAAOSL;  /* OPERATORS - dynamic generator */
{ 
 /* line 46: */
VNAAOSL.upb = 0 ;
( SNAAOSL_anonymous? A_VLOC(A68_INT ,VNAAOSL): A_VHEAP(A68_INT ,VNAAOSL) );
UNAAOSL = VNAAOSL;
} 
*ReturnedValue = (UNAAOSL);
return;
} 
#undef NL

A_STATIC A68_VOID  AOAAOSL_generator(A68_BOOL  ZNAAOSL_anonymous, A68_VC  *ReturnedValue)
{ 
A68_VC  BOAAOSL;  /* clause result */
A68_VC  COAAOSL;  /* OPERATORS - dynamic generator */
{ 
COAAOSL.upb = 0 ;
( ZNAAOSL_anonymous? A_VLOC(A68_CHAR ,COAAOSL): A_VHEAP(A68_CHAR ,COAAOSL) );
BOAAOSL = COAAOSL;
} 
*ReturnedValue = (BOAAOSL);
return;
} 
#undef NL

A_STATIC A68_VOID  IOAAOSL_generator(A68_BOOL  HOAAOSL_anonymous, A68_72  *ReturnedValue)
{ 
A68_72  JOAAOSL;  /* clause result */
A68_72  KOAAOSL;  /* OPERATORS - dynamic generator */
{ 
KOAAOSL.upb = 0 ;
( HOAAOSL_anonymous? A_VLOC(A68_INT ,KOAAOSL): A_VHEAP(A68_INT ,KOAAOSL) );
JOAAOSL = KOAAOSL;
} 
*ReturnedValue = (JOAAOSL);
return;
} 
#undef NL

A68_INT  YOAAOSL_charnumber(A68_89 * Ch)
{ 
A68_INT  ZOAAOSL;  /* clause result */
A_PROC_ENTRY(charnumber);
ZOAAOSL = (*(&(Ch->Charnumber)));
A_PROC_EXIT(charnumber);
return( ZOAAOSL );
} 
#undef NL

A68_INT  BPAAOSL_linenumber(A68_89 * Ch)
{ 
A68_INT  CPAAOSL;  /* clause result */
A_PROC_ENTRY(linenumber);
CPAAOSL = (*(&(Ch->Linenumber)));
A_PROC_EXIT(linenumber);
return( CPAAOSL );
} 
#undef NL

A68_INT  EPAAOSL_charsleft(A68_89 * Ch)
{ 
A68_INT  FPAAOSL;  /* clause result */
A_PROC_ENTRY(charsleft);
FPAAOSL = (((*(&(Ch->Width)))-(*(&(Ch->Charnumber))))+1);
A_PROC_EXIT(charsleft);
return( FPAAOSL );
} 
#undef NL

A68_INT  IPAAOSL_setwidth(A68_89 * Ch, A68_INT  Width)
{ 
A68_BOOL  JPAAOSL;  /* optbool result */
A68_INT  KPAAOSL;  /* clause result */
A68_BOOL  LPAAOSL;  /* optbool result */
A68_INT  MPAAOSL;  /* clause result */
A68_INT * NPAAOSL;  /* YIELD */
A_PROC_ENTRY(setwidth);
 /* line 84: */
JPAAOSL = (*(&(Ch->Buffered)));
if ( JPAAOSL )
{ /* line 85: */
JPAAOSL = (Width>((*(&(Ch->Buffer))).upb-1));
}
if ( JPAAOSL )
{ 
 /* line 86: */
KPAAOSL = ((*(&(Ch->Buffer))).upb-1);
} 
else
{ 
LPAAOSL = (*(&(Ch->Input)));
if ( LPAAOSL )
{ /* line 87: */
LPAAOSL = (Width>(*(&(Ch->Buffer))).upb);
}
 /* line 88: */
if ( LPAAOSL )
{ 
 /* line 89: */
KPAAOSL = (*(&(Ch->Buffer))).upb;
} 
else
{ 
KPAAOSL = Width;
} 
} 
NPAAOSL = (&(Ch->Width)) ;
MPAAOSL = (*NPAAOSL) = KPAAOSL;
A_PROC_EXIT(setwidth);
return( MPAAOSL );
} 
#undef NL

A68_VOID  PPAAOSL_nullputbuffer(A68_VC  Str)
{ 
A_PROC_ENTRY(nullputbuffer);
/*SKIP*/;
A_PROC_EXIT(nullputbuffer);
return;
} 
#undef NL

A68_VOID  SPAAOSL_nullgetbuffer(A68_VC  Rvc, A68_INT * I, A68_38  *ReturnedValue)
{ 
A68_38  TPAAOSL;  /* clause result */
A68_38  UPAAOSL;  /* OPERATORS - skip to mode */
A_PROC_ENTRY(nullgetbuffer);
TPAAOSL = UPAAOSL;
A_PROC_EXIT(nullgetbuffer);
*ReturnedValue = (TPAAOSL);
return;
} 
#undef NL
 /* line 110: */

A68_89 * XPAAOSL_make_channel(A68_93  Intbuff, A68_94  Putgetbuffer)
{ 
A68_89 * YPAAOSL_ch;
A68_94  ZPAAOSL;  /* united object - for case conformity */
A68_78  AQAAOSL_putbuffer;
A68_78 * BQAAOSL;  /* YIELD */
A68_90 * CQAAOSL;  /* YIELD */
A68_90  DQAAOSL;  /* procedure value */
A68_INT * EQAAOSL;  /* YIELD */
A68_BOOL * FQAAOSL;  /* YIELD */
A68_90  GQAAOSL_getbuffer;
A68_78 * HQAAOSL;  /* YIELD */
A68_78  IQAAOSL;  /* procedure value */
A68_90 * JQAAOSL;  /* YIELD */
A68_INT * KQAAOSL;  /* YIELD */
A68_BOOL * LQAAOSL;  /* YIELD */
A68_93  MQAAOSL;  /* united object - for case conformity */
A68_INT  NQAAOSL_width;
A68_INT * OQAAOSL;  /* YIELD */
A68_83  QQAAOSL_generator;   /* proc value of non-global proc */
A68_VC  VQAAOSL;  /* avoid structure result */
A68_VC * WQAAOSL;  /* YIELD */
A68_VC * XQAAOSL;  /* YIELD */
A68_BOOL * YQAAOSL;  /* YIELD */
A68_VC  ZQAAOSL_rvc;
A68_VC * ARAAOSL;  /* YIELD */
A68_INT * BRAAOSL;  /* YIELD */
A68_BOOL * CRAAOSL;  /* YIELD */
A68_INT * DRAAOSL;  /* YIELD */
A68_INT * ERAAOSL;  /* YIELD */
A68_INT * FRAAOSL;  /* YIELD */
A68_INT * GRAAOSL;  /* YIELD */
A68_38 * HRAAOSL;  /* YIELD */
A68_BOOL * IRAAOSL;  /* YIELD */
A68_89 * JRAAOSL;  /* clause result */
A_PROC_ENTRY(make_channel);
 /* line 111: */
 /* line 112: */
{ 
YPAAOSL_ch = (A_HEAP(A68_89 ));
 /* line 113: */
 /* line 114: */
ZPAAOSL = Putgetbuffer ;
switch ( ZPAAOSL.mode )
{ 
case 1: /* PROC(MODE26) VOID */
AQAAOSL_putbuffer = (ZPAAOSL.data.mode1);
 /* line 115: */
{ 
BQAAOSL = (&(YPAAOSL_ch->Putbuffer)) ;
(*BQAAOSL) = AQAAOSL_putbuffer;
 /* line 116: */
CQAAOSL = (&(YPAAOSL_ch->Getbuffer)) ;
DQAAOSL.fn.fn_global = SPAAOSL_nullgetbuffer;
DQAAOSL.nonlocals = A68_NIL;
(*CQAAOSL) = DQAAOSL;
 /* line 117: */
EQAAOSL = (&(YPAAOSL_ch->Linenumber)) ;
(*EQAAOSL) = 1;
 /* line 118: */
 /* line 119: */
 /* line 120: */
FQAAOSL = (&(YPAAOSL_ch->Input)) ;
(*FQAAOSL) = A68_FALSE;
} 
break;
case 2: /* PROC(REF MODE26,REF INT) MODE38 */
GQAAOSL_getbuffer = (ZPAAOSL.data.mode2);
 /* line 121: */
{ 
HQAAOSL = (&(YPAAOSL_ch->Putbuffer)) ;
IQAAOSL.fn.fn_global = PPAAOSL_nullputbuffer;
IQAAOSL.nonlocals = A68_NIL;
(*HQAAOSL) = IQAAOSL;
 /* line 122: */
JQAAOSL = (&(YPAAOSL_ch->Getbuffer)) ;
(*JQAAOSL) = GQAAOSL_getbuffer;
 /* line 123: */
KQAAOSL = (&(YPAAOSL_ch->Linenumber)) ;
(*KQAAOSL) = 0;
 /* line 124: */
 /* line 125: */
 /* line 126: */
LQAAOSL = (&(YPAAOSL_ch->Input)) ;
(*LQAAOSL) = A68_TRUE;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 127: */
 /* line 128: */
MQAAOSL = Intbuff ;
switch ( MQAAOSL.mode )
{ 
case 1: /* INT */
NQAAOSL_width = (MQAAOSL.data.mode1);
 /* line 129: */
{ 
OQAAOSL = (&(YPAAOSL_ch->Width)) ;
(*OQAAOSL) = NQAAOSL_width;
 /* line 130: */
 /* line 131: */
if ( (*(&(YPAAOSL_ch->Input))) )
{ 
A_CLOSURE( QQAAOSL_generator, RQAAOSL_generator, SQAAOSL_generator );
(( SQAAOSL_generator * ) ( QQAAOSL_generator.nonlocals )) -> NQAAOSL_width = NQAAOSL_width;
A_CALLPROC(QQAAOSL_generator,(A68_FALSE, &VQAAOSL),(A68_FALSE, &VQAAOSL,(QQAAOSL_generator).nonlocals));
WQAAOSL = (&(YPAAOSL_ch->Buffer)) ;
(*WQAAOSL) = VQAAOSL;
} 
else
{ 
 /* line 133: */
XQAAOSL = (&(YPAAOSL_ch->Buffer)) ;
(*XQAAOSL) = YNAAOSL_nilstr;
} 
 /* line 134: */
 /* line 135: */
 /* line 136: */
YQAAOSL = (&(YPAAOSL_ch->Buffered)) ;
(*YQAAOSL) = A68_FALSE;
} 
break;
case 2: /* REF VECTOR [] CHAR */
ZQAAOSL_rvc = (MQAAOSL.data.mode2);
 /* line 137: */
{ 
ARAAOSL = (&(YPAAOSL_ch->Buffer)) ;
(*ARAAOSL) = ZQAAOSL_rvc;
 /* line 138: */
BRAAOSL = (&(YPAAOSL_ch->Width)) ;
(*BRAAOSL) = (ZQAAOSL_rvc.upb-1);
 /* line 139: */
 /* line 140: */
 /* line 141: */
CRAAOSL = (&(YPAAOSL_ch->Buffered)) ;
(*CRAAOSL) = A68_TRUE;
} 
break;
default: 
A_IMP_SKIP ;
break;
} 
 /* line 142: */
DRAAOSL = (&(YPAAOSL_ch->Sizeincr)) ;
(*DRAAOSL) = (*(&(YPAAOSL_ch->Width)));
 /* line 143: */
 /* line 144: */
if ( (*(&(YPAAOSL_ch->Input))) )
{ 
 /* line 146: */
ERAAOSL = (&(YPAAOSL_ch->Charnumber)) ;
(*ERAAOSL) = ((*(&(YPAAOSL_ch->Width)))+2);
} 
else
{ 
 /* line 147: */
FRAAOSL = (&(YPAAOSL_ch->Charnumber)) ;
(*FRAAOSL) = 1;
} 
 /* line 148: */
GRAAOSL = (&(YPAAOSL_ch->Indent)) ;
(*GRAAOSL) = 0;
 /* line 149: */
HRAAOSL = (&(YPAAOSL_ch->Status)) ;
(*HRAAOSL) = DPBAOSI_io_ok;
 /* line 150: */
IRAAOSL = (&(YPAAOSL_ch->Separate)) ;
(*IRAAOSL) = A68_FALSE;
 /* line 151: */
 /* line 152: */
JRAAOSL = YPAAOSL_ch;
} 
A_PROC_EXIT(make_channel);
return( JRAAOSL );
} 
#undef NL

A68_VOID  LRAAOSL_newline(A68_89 * Ch)
{ 
A68_INT  MRAAOSL_blow;
A68_INT  NRAAOSL_bhigh;
A68_INT  ORAAOSL_len;
A68_INT * PRAAOSL;  /* YIELD */
A68_INT * QRAAOSL;  /* YIELD */
A68_90  RRAAOSL;  /* CALL */
A68_VC  SRAAOSL;  /* OPERATORS - trim index */
A68_VC  TRAAOSL;  /* OPERATORS - trim index */
A68_38  URAAOSL;  /* avoid structure result */
A68_38 * VRAAOSL;  /* YIELD */
A68_INT * WRAAOSL;  /* YIELD */
A68_BOOL  XRAAOSL;  /* optbool result */
A68_BOOL  YRAAOSL;  /* clause result */
A68_VC  ZRAAOSL_old;
A68_83  BSAAOSL_generator;   /* proc value of non-global proc */
A68_VC  GSAAOSL;  /* avoid structure result */
A68_VC * HSAAOSL;  /* YIELD */
A68_VC  ISAAOSL;  /* OPERATORS - trim index */
A68_VC  JSAAOSL;  /* OPERATORS - trim index */
A68_VC  KSAAOSL;  /* OPERATORS - trim index */
A68_VC  LSAAOSL;  /* YIELD */
A68_VC  MSAAOSL;  /* OPERATORS - assign op */
A68_INT * NSAAOSL;  /* YIELD */
A68_VC  OSAAOSL;  /* OPERATORS - simple index */
A68_INT  PSAAOSL;  /* YIELD */
A68_CHAR * QSAAOSL;  /* YIELD */
A68_CHAR  RSAAOSL_c;
A68_BOOL  SSAAOSL;  /* optbool result */
A68_VC  TSAAOSL;  /* OPERATORS - simple index */
A68_INT  USAAOSL;  /* YIELD */
A68_BOOL  VSAAOSL;  /* optbool result */
A68_INT * WSAAOSL;  /* YIELD */
A68_VC  XSAAOSL;  /* OPERATORS - simple index */
A68_INT  YSAAOSL;  /* YIELD */
A68_CHAR * ZSAAOSL;  /* YIELD */
A68_INT * ATAAOSL;  /* YIELD */
A68_VC  BTAAOSL;  /* OPERATORS - simple index */
A68_INT  CTAAOSL;  /* YIELD */
A68_CHAR * DTAAOSL;  /* YIELD */
A68_78  ETAAOSL;  /* CALL */
A68_VC  FTAAOSL;  /* OPERATORS - trim index */
A68_VC  GTAAOSL;  /* OPERATORS - trim index */
A68_78  HTAAOSL;  /* CALL */
A68_VC  ITAAOSL;  /* OPERATORS - scalar -> [] or VEC[] */
A68_INT * JTAAOSL;  /* YIELD */
A68_INT * KTAAOSL;  /* YIELD */
A68_BOOL * LTAAOSL;  /* YIELD */
A_PROC_ENTRY(newline);
 /* line 160: */
 /* line 161: */
 /* line 162: */
if ( (*(&(Ch->Input))) )
{ 
MRAAOSL_blow = 1;
 /* line 163: */
PRAAOSL = (&(Ch->Width)) ;
(*PRAAOSL) = 0;
 /* line 164: */
QRAAOSL = (&(Ch->Charnumber)) ;
(*QRAAOSL) = 1;
 /* line 165: */
for ( ;; )
{ 
 /* line 166: */
NRAAOSL_bhigh = ((*(&(Ch->Buffer))).upb-1);
 /* line 167: */
RRAAOSL = (*(&(Ch->Getbuffer))) ;
SRAAOSL = (*(&(Ch->Buffer))) ;
A_CALLPROC(RRAAOSL,(A_VTRIM(TRAAOSL,(SRAAOSL),A_VTSCRIPT(&(TRAAOSL.upb),(SRAAOSL).upb,MRAAOSL_blow,NRAAOSL_bhigh)), (&ORAAOSL_len), &URAAOSL),(A_VTRIM(TRAAOSL,(SRAAOSL),A_VTSCRIPT(&(TRAAOSL.upb),(SRAAOSL).upb,MRAAOSL_blow,NRAAOSL_bhigh)), (&ORAAOSL_len), &URAAOSL,(RRAAOSL).nonlocals));
VRAAOSL = (&(Ch->Status)) ;
(*VRAAOSL) = URAAOSL;
 /* line 168: */
WRAAOSL = (&(Ch->Width)) ;
(*WRAAOSL)+=ORAAOSL_len;
 /* line 169: */
 /* line 170: */
XRAAOSL = PPBAOSI_((*(&(Ch->Status))), MPBAOSI_io_no_newline);
if ( XRAAOSL )
{XRAAOSL = (*(&(Ch->Buffered)));
}
YRAAOSL = XRAAOSL;
if ( !YRAAOSL ) break;
ZRAAOSL_old = (*(&(Ch->Buffer)));
 /* line 171: */
A_CLOSURE( BSAAOSL_generator, CSAAOSL_generator, DSAAOSL_generator );
(( DSAAOSL_generator * ) ( BSAAOSL_generator.nonlocals )) -> Ch = Ch;
A_CALLPROC(BSAAOSL_generator,(A68_FALSE, &GSAAOSL),(A68_FALSE, &GSAAOSL,(BSAAOSL_generator).nonlocals));
HSAAOSL = (&(Ch->Buffer)) ;
(*HSAAOSL) = GSAAOSL;
 /* line 172: */
ISAAOSL = (*(&(Ch->Buffer))) ;
LSAAOSL = A_VTRIM(JSAAOSL,(ISAAOSL),A_VTSCRIPT(&(JSAAOSL.upb),(ISAAOSL).upb,1,NRAAOSL_bhigh)) ;
MSAAOSL = A_VTRIM(KSAAOSL,(ZRAAOSL_old),A_VTSCRIPT(&(KSAAOSL.upb),(ZRAAOSL_old).upb,1,NRAAOSL_bhigh)) ;
A_VASSIGN2(MSAAOSL,LSAAOSL,A68_CHAR );
 /* line 173: */
 /* line 174: */
MRAAOSL_blow = (NRAAOSL_bhigh+1);
}
 /* line 175: */
 /* line 176: */
if ( TPBAOSI_((*(&(Ch->Status))), DPBAOSI_io_ok) )
{ 
NSAAOSL = (&(Ch->Width)) ;
(*NSAAOSL) = 0;
 /* line 177: */
 /* line 178: */
OSAAOSL = (*(&(Ch->Buffer))) ;
PSAAOSL = 1 ;
QSAAOSL = (&A_VINDEX(OSAAOSL,PSAAOSL)) ;
(*QSAAOSL) = OOAAOSL_end_of_file_char;
} 
else
{ 
 /* line 179: */
for ( ;; )
{ 
 /* line 180: */
SSAAOSL = ((*(&(Ch->Width)))>0);
if ( SSAAOSL )
{ /* line 181: */
TSAAOSL = (*(&(Ch->Buffer))) ;
USAAOSL = (*(&(Ch->Width))) ;
VSAAOSL = ((RSAAOSL_c = (*(&A_VINDEX(TSAAOSL,USAAOSL))))==POAAOSL_newline_char);
if ( ! VSAAOSL )
{VSAAOSL = (RSAAOSL_c==QOAAOSL_cr_char);
}
 /* line 182: */
SSAAOSL = VSAAOSL;
}
if ( !(SSAAOSL) ) break;
WSAAOSL = (&(Ch->Width)) ;
(*WSAAOSL)-=1;
}
 /* line 183: */
XSAAOSL = (*(&(Ch->Buffer))) ;
YSAAOSL = ((*(&(Ch->Width)))+1) ;
ZSAAOSL = (&A_VINDEX(XSAAOSL,YSAAOSL)) ;
(*ZSAAOSL) = POAAOSL_newline_char;
 /* line 184: */
 /* line 185: */
 /* line 186: */
 /* line 188: */
ATAAOSL = (&(Ch->Linenumber)) ;
(*ATAAOSL)+=1;
} 
} 
else
{ 
 /* line 189: */
if ( (*(&(Ch->Buffered))) )
{ 
BTAAOSL = (*(&(Ch->Buffer))) ;
CTAAOSL = (*(&(Ch->Charnumber))) ;
DTAAOSL = (&A_VINDEX(BTAAOSL,CTAAOSL)) ;
(*DTAAOSL) = POAAOSL_newline_char;
 /* line 190: */
 /* line 191: */
ETAAOSL = (*(&(Ch->Putbuffer))) ;
FTAAOSL = (*(&(Ch->Buffer))) ;
A_CALLPROC(ETAAOSL,(A_VTRIM(GTAAOSL,(FTAAOSL),A_VTSCRIPT(&(GTAAOSL.upb),(FTAAOSL).upb,1,(*(&(Ch->Charnumber)))))),(A_VTRIM(GTAAOSL,(FTAAOSL),A_VTSCRIPT(&(GTAAOSL.upb),(FTAAOSL).upb,1,(*(&(Ch->Charnumber))))),(ETAAOSL).nonlocals));
} 
else
{ 
 /* line 192: */
HTAAOSL = (*(&(Ch->Putbuffer))) ;
A_CALLPROC(HTAAOSL,(A_HVEC(ITAAOSL,POAAOSL_newline_char,A68_CHAR )),(A_HVEC(ITAAOSL,POAAOSL_newline_char,A68_CHAR ),(HTAAOSL).nonlocals));
} 
 /* line 193: */
JTAAOSL = (&(Ch->Charnumber)) ;
(*JTAAOSL) = 1;
 /* line 194: */
KTAAOSL = (&(Ch->Linenumber)) ;
(*KTAAOSL)+=1;
 /* line 195: */
 /* line 196: */
LTAAOSL = (&(Ch->Separate)) ;
(*LTAAOSL) = A68_FALSE;
} 
A_PROC_EXIT(newline);
return;
} 
#undef NL
 /* line 1: */
 /* line 3: */
void GNAAOSL(void)   /* initialise DECS iobasics */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","/u/model/ella/osif/assoc/mfiles","-dir","./mfiles","-staredit","259","./a68files/iobasics.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","/u/model/ella/osif/assoc/mfiles/osif.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_83  RNAAOSL;  /* procedure value */
A68_88  WNAAOSL;  /* procedure value */
A68_VC  XNAAOSL;  /* OPERATORS - nil -> mode */
A68_VC  DOAAOSL;  /* avoid structure result */
A68_72  FOAAOSL;  /* OPERATORS - nil -> mode */
A68_72  LOAAOSL;  /* avoid structure result */
A68_VC  TOAAOSL;  /* OPERATORS - scalar -> [] or VEC[] */
A68_VC  VOAAOSL;  /* OPERATORS - scalar -> [] or VEC[] */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
VSCAOSI();   /* USE osif */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/oslib/assoc/./a68files/iobasics.a68";
A_config.translation_time = "Tue Apr  4 09:46:58 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "FNAAOSL (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 09:46:58 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS iobasics);
UEAALIB_a68config(LGAALIB_configinfo, KNAAOSL);
 /* line 43: */
RNAAOSL.fn.fn_global = ONAAOSL_generator;
RNAAOSL.nonlocals = A68_NIL;
LNAAOSL_anonymous = RNAAOSL;
WNAAOSL.fn.fn_global = TNAAOSL_generator;
WNAAOSL.nonlocals = A68_NIL;
MNAAOSL_anonymous = WNAAOSL;
 /* line 48: */
YNAAOSL_nilstr = (A_VVAC(XNAAOSL));
AOAAOSL_generator( A68_TRUE, &DOAAOSL );
EOAAOSL_nullstr = DOAAOSL;
 /* line 49: */
GOAAOSL_nilints = (A_VVAC(FOAAOSL));
IOAAOSL_generator( A68_TRUE, &LOAAOSL );
MOAAOSL_nullints = LOAAOSL;
 /* line 54: */
 /* line 67: */
 /* line 69: */
NOAAOSL_nilchannel = (A68_89 *)A68_NIL;
 /* line 71: */
OOAAOSL_end_of_file_char = (A68_CHAR)26;
 /* line 72: */
POAAOSL_newline_char = (A68_CHAR)10;
 /* line 73: */
QOAAOSL_cr_char = (A68_CHAR)13;
 /* line 74: */
ROAAOSL_newpage_char = (A68_CHAR)12;
 /* line 75: */
SOAAOSL_null_char = (A68_CHAR)0;
 /* line 76: */
UOAAOSL_space_str = A_HVEC(TOAAOSL,' ',A68_CHAR );
 /* line 77: */
WOAAOSL_newline_str = A_HVEC(VOAAOSL,POAAOSL_newline_char,A68_CHAR );
 /* line 79: */
 /* line 80: */
 /* line 81: */
 /* line 83: */
 /* line 91: */
 /* line 93: */
 /* line 108: */
 /* line 159: */
 /* line 198: */
 /* line 200: */
 /* line 205: */
/*SKIP*/;
A_PROC_EXIT(DECS iobasics);
} 
#undef NL
/* end of translation of ./a68files/iobasics.a68 */
