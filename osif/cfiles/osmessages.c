
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
/* UNAME:LCBAOSI */
#include "Asupport.h"
struct A68t31{
A68_INT  Number;
A_PAD_INT(PAD_1)
struct A68t32 * Facility;
A68_BITS  Class;
A_PAD_BITS(PAD_2)
};
typedef struct A68t31  A68_31 ;    /* STRUCT(INT,REF MODE32,BITS)  */
A_VECTOR(struct A68t34 ,A68t33);
typedef struct A68t33  A68_33 ;    /* VECTOR [] MODE34 */
struct A68t34{
struct A68t31  Msgno;
A68_VC  Text;
};
typedef struct A68t34  A68_34 ;    /* STRUCT(MODE31,REF MODE26)  */
struct A68t32{
A68_VC  Name;
struct A68t33  Messages;
};
typedef struct A68t32  A68_32 ;    /* STRUCT(REF MODE26,REF MODE33)  */

A_PROCEDURE(A68_VOID ,A68t35,(A68_BOOL ,A68_VC *),(A68_BOOL ,A68_VC *,void *));
typedef struct A68t35  A68_35 ;    /* PROC(BOOL) MODE26 */
A_VECTOR(A68_VC ,A68t36);
typedef struct A68t36  A68_36 ;    /* VECTOR [] MODE26 */

A_PROCEDURE(A68_VOID ,A68t37,(A68_BOOL ,struct A68t36 *),(A68_BOOL ,struct A68t36 *,void *));
typedef struct A68t37  A68_37 ;    /* PROC(BOOL) MODE36 */

A_PROCEDURE(A68_VOID ,A68t38,(struct A68t31 ,struct A68t36 ),(struct A68t31 ,struct A68t36 ,void *));
typedef struct A68t38  A68_38 ;    /* PROC(MODE31,MODE36) VOID */
A_VECTOR(struct A68t41 ,A68t40);
typedef struct A68t40  A68_40 ;    /* VECTOR [] MODE41 */
struct A68t41{
A68_INT  Number;
A_PAD_INT(PAD_3)
A68_BITS  Class;
A_PAD_BITS(PAD_4)
A68_VC  Text;
};
typedef struct A68t41  A68_41 ;    /* STRUCT(INT,BITS,MODE26)  */
struct A68t39{
A68_VC  Name;
struct A68t33  Messages;
A68_BOOL * Initialised;
struct A68t40  Setup;
};
typedef struct A68t39  A68_39 ;    /* STRUCT(MODE26,REF MODE33,REF BOOL,MODE40)  */

A_PROCEDURE(A68_VOID ,A68t42,(A68_BOOL ,struct A68t39 *),(A68_BOOL ,struct A68t39 *,void *));
typedef struct A68t42  A68_42 ;    /* PROC(BOOL) MODE39 */

A_PROCEDURE(A68_VOID ,A68t43,(A68_VC ,A68_VC *),(A68_VC ,A68_VC *,void *));
typedef struct A68t43  A68_43 ;    /* PROC(MODE26) REF MODE26 */
A_VECTOR(A68_VC ,A68t44);
typedef struct A68t44  A68_44 ;    /* VECTOR [] REF MODE26 */

A_PROCEDURE(A68_VOID ,A68t45,(struct A68t36 ,struct A68t44 *),(struct A68t36 ,struct A68t44 *,void *));
typedef struct A68t45  A68_45 ;    /* PROC(MODE36) MODE44 */

A_PROCEDURE(A68_VOID ,A68t46,(struct A68t44 ,struct A68t36 *),(struct A68t44 ,struct A68t36 *,void *));
typedef struct A68t46  A68_46 ;    /* PROC(MODE44) MODE36 */
struct A68t48 ;

A_PROCEDURE(A68_BOOL ,A68t47,(struct A68t48 ),(struct A68t48 ,void *));
typedef struct A68t47  A68_47 ;    /* PROC(MODE48) BOOL */
struct A68t48 { A68_INT mode; union {
struct A68t31  mode1;
struct A68t34  mode2;
} data; };
typedef struct A68t48  A68_48 ;    /* UNION(MODE31,MODE34)  */

A_PROCEDURE(A68_INT ,A68t49,(struct A68t31 ),(struct A68t31 ,void *));
typedef struct A68t49  A68_49 ;    /* PROC(MODE31) INT */

A_PROCEDURE(A68_VOID ,A68t50,(A68_INT ,struct A68t39 ,struct A68t31 *),(A68_INT ,struct A68t39 ,struct A68t31 *,void *));
typedef struct A68t50  A68_50 ;    /* PROC(INT,MODE39) MODE31 */

A_PROCEDURE(A68_BOOL ,A68t51,(struct A68t31 ,struct A68t39 ),(struct A68t31 ,struct A68t39 ,void *));
typedef struct A68t51  A68_51 ;    /* PROC(MODE31,MODE39) BOOL */

A_PROCEDURE(A68_VOID ,A68t52,(struct A68t31 ,struct A68t36 ,struct A68t34 *),(struct A68t31 ,struct A68t36 ,struct A68t34 *,void *));
typedef struct A68t52  A68_52 ;    /* PROC(MODE31,MODE36) MODE34 */

A_PROCEDURE(A68_VOID ,A68t53,(void),(void *));
typedef struct A68t53  A68_53 ;    /* PROC VOID */

A_PROCEDURE(A68_VOID ,A68t54,(struct A68t53 ),(struct A68t53 ,void *));
typedef struct A68t54  A68_54 ;    /* PROC(MODE53) VOID */

A_PROCEDURE(A68_VOID ,A68t55,(A68_VC ),(A68_VC ,void *));
typedef struct A68t55  A68_55 ;    /* PROC(MODE26) VOID */

A_PROCEDURE(A68_VOID ,A68t56,(struct A68t55 ),(struct A68t55 ,void *));
typedef struct A68t56  A68_56 ;    /* PROC(MODE55) VOID */

A_PROCEDURE(A68_VOID ,A68t57,(A68_VC ,A68_VC ),(A68_VC ,A68_VC ,void *));
typedef struct A68t57  A68_57 ;    /* PROC(MODE26,MODE26) VOID */
A_ISTRUCT(A68_CHAR ,57,A68t58);
typedef struct A68t58  A68_58 ;    /* STRUCT 57 CHAR */
A_ISTRUCT(A68_CHAR ,11,A68t59);
typedef struct A68t59  A68_59 ;    /* STRUCT 11 CHAR */

A_PROCEDURE(A68_VOID ,A68t60,(A68_BOOL ,struct A68t33 *),(A68_BOOL ,struct A68t33 *,void *));
typedef struct A68t60  A68_60 ;    /* PROC(BOOL) MODE33 */
A_ISTRUCT(A68_CHAR ,41,A68t61);
typedef struct A68t61  A68_61 ;    /* STRUCT 41 CHAR */
A_ISTRUCT(A68_CHAR ,18,A68t62);
typedef struct A68t62  A68_62 ;    /* STRUCT 18 CHAR */
A_ISTRUCT(A68_CHAR ,22,A68t63);
typedef struct A68t63  A68_63 ;    /* STRUCT 22 CHAR */
A_ISTRUCT(A68_CHAR ,31,A68t64);
typedef struct A68t64  A68_64 ;    /* STRUCT 31 CHAR */
A_ISTRUCT(A68_CHAR ,23,A68t65);
typedef struct A68t65  A68_65 ;    /* STRUCT 23 CHAR */
A_ISTRUCT(A68_CHAR ,37,A68t66);
typedef struct A68t66  A68_66 ;    /* STRUCT 37 CHAR */
A_ISTRUCT(A68_CHAR ,33,A68t67);
typedef struct A68t67  A68_67 ;    /* STRUCT 33 CHAR */
A_ISTRUCT(A68_CHAR ,27,A68t68);
typedef struct A68t68  A68_68 ;    /* STRUCT 27 CHAR */
A_ISTRUCT(A68_CHAR ,44,A68t69);
typedef struct A68t69  A68_69 ;    /* STRUCT 44 CHAR */
A_ISTRUCT(A68_CHAR ,48,A68t70);
typedef struct A68t70  A68_70 ;    /* STRUCT 48 CHAR */
A_ISTRUCT(A68_CHAR ,36,A68t71);
typedef struct A68t71  A68_71 ;    /* STRUCT 36 CHAR */
A_ISTRUCT(A68_CHAR ,25,A68t72);
typedef struct A68t72  A68_72 ;    /* STRUCT 25 CHAR */
A_ISTRUCT(A68_CHAR ,69,A68t73);
typedef struct A68t73  A68_73 ;    /* STRUCT 69 CHAR */
A_ISTRUCT(A68_CHAR ,17,A68t74);
typedef struct A68t74  A68_74 ;    /* STRUCT 17 CHAR */
A_ISTRUCT(A68_CHAR ,13,A68t75);
typedef struct A68t75  A68_75 ;    /* STRUCT 13 CHAR */
A_ISTRUCT(A68_CHAR ,59,A68t76);
typedef struct A68t76  A68_76 ;    /* STRUCT 59 CHAR */
A_ISTRUCT(A68_CHAR ,38,A68t77);
typedef struct A68t77  A68_77 ;    /* STRUCT 38 CHAR */
A_ISTRUCT(A68_CHAR ,12,A68t78);
typedef struct A68t78  A68_78 ;    /* STRUCT 12 CHAR */
A_ISTRUCT(A68_CHAR ,43,A68t79);
typedef struct A68t79  A68_79 ;    /* STRUCT 43 CHAR */
A_ISTRUCT(A68_CHAR ,29,A68t80);
typedef struct A68t80  A68_80 ;    /* STRUCT 29 CHAR */
A_ISTRUCT(struct A68t41 ,27,A68t81);
typedef struct A68t81  A68_81 ;    /* STRUCT 27 MODE41 */

A_PROCEDURE(A68_VOID ,A68t82,(A68_INT ,struct A68t31 *),(A68_INT ,struct A68t31 *,void *));
typedef struct A68t82  A68_82 ;    /* PROC(INT) MODE31 */

A_PROCEDURE(A68_BOOL ,A68t83,(struct A68t31 ),(struct A68t31 ,void *));
typedef struct A68t83  A68_83 ;    /* PROC(MODE31) BOOL */

/* --- Imports from a68config --- */
extern A68_VOID  UEAALIB_a68config(A68_VC ,A68_VC );
static A68_VC  A_configinfo;
/* A cheat - pass a REF through the DECS Module restriction via STR */
#define ACONFIG ( A_configinfo.data = (A68_CHAR*)(&A_config), \
                  A_configinfo.upb = (A68_INT)(-777), A_configinfo )

#define LGAALIB_configinfo ACONFIG
/* --- End of imports from a68config --- */


/* --- Imports from messageproc --- */
extern A68_BITS  TIAAOSI_system_class;
extern A68_BITS  UIAAOSI_fatal_class;
extern A68_BITS  VIAAOSI_user_class;
extern A68_VOID  HMAAOSI_make_msgno(A68_INT ,struct A68t39 ,A68_31 *);
extern A68_BOOL  INAAOSI_is_facility_msg(struct A68t31 ,struct A68t39 );
/* --- End of imports from messageproc --- */


/* --- DECS initialisation functions --- */
extern void BAAALIB(void);   /* a68config */
extern void JFAAOSI(void);   /* messageproc */
/* --- end of DECS initialisation functions --- */
static A68_58   PCBAOSI = {"$Id: osmessages.a68,v 34.2 1995/03/29 13:01:42 ella Exp $"}; 
A_GISVEC(A68_VC ,QCBAOSI,PCBAOSI,57)
#define RCBAOSI_max_os_messages 57
static A68_59   TCBAOSI = {"osinterface"}; 
A_GISVEC(A68_VC ,UCBAOSI,TCBAOSI,11)
static A68_61   CDBAOSI = {"Aborted due to unexpected VAX/VMS error *"}; 
A_GISVEC(A68_VC ,DDBAOSI,CDBAOSI,41)
static A68_62   EDBAOSI = {"File \"*\" not found"}; 
A_GISVEC(A68_VC ,FDBAOSI,EDBAOSI,18)
static A68_63   GDBAOSI = {"Error in file name \"*\""}; 
A_GISVEC(A68_VC ,HDBAOSI,GDBAOSI,22)
static A68_64   IDBAOSI = {"File \"*\" locked by another user"}; 
A_GISVEC(A68_VC ,JDBAOSI,IDBAOSI,31)
static A68_65   KDBAOSI = {"Could not open file \"*\""}; 
A_GISVEC(A68_VC ,LDBAOSI,KDBAOSI,23)
static A68_66   MDBAOSI = {"Insufficient virtual memory available"}; 
A_GISVEC(A68_VC ,NDBAOSI,MDBAOSI,37)
static A68_67   ODBAOSI = {"get_ethernet_address - length = *"}; 
A_GISVEC(A68_VC ,PDBAOSI,ODBAOSI,33)
static A68_68   QDBAOSI = {"Insufficient virtual memory"}; 
A_GISVEC(A68_VC ,RDBAOSI,QDBAOSI,27)
static A68_65   SDBAOSI = {"Cannot spawn subprocess"}; 
A_GISVEC(A68_VC ,TDBAOSI,SDBAOSI,23)
static A68_69   UDBAOSI = {"File name  \"*\"  should not contain wildcards"}; 
A_GISVEC(A68_VC ,VDBAOSI,UDBAOSI,44)
static A68_70   WDBAOSI = {"Deadlock detected whilst trying to lock file \"*\""}; 
A_GISVEC(A68_VC ,XDBAOSI,WDBAOSI,48)
static A68_71   YDBAOSI = {"Error whilst trying to lock file \"*\""}; 
A_GISVEC(A68_VC ,ZDBAOSI,YDBAOSI,36)
static A68_72   AEBAOSI = {"Unable to lock file : \"*\""}; 
A_GISVEC(A68_VC ,BEBAOSI,AEBAOSI,25)
static A68_69   CEBAOSI = {"fault with sys_readef OF exclusive_open_file"}; 
A_GISVEC(A68_VC ,DEBAOSI,CEBAOSI,44)
static A68_73   EEBAOSI = {"Insufficient privilege. Ask your System Manager for SYSLCK privilege."}; 
A_GISVEC(A68_VC ,FEBAOSI,EEBAOSI,69)
static A68_74   GEBAOSI = {"exclusive_open: *"}; 
A_GISVEC(A68_VC ,HEBAOSI,GEBAOSI,17)
static A68_75   IEBAOSI = {"Line too long"}; 
A_GISVEC(A68_VC ,JEBAOSI,IEBAOSI,13)
static A68_59   KEBAOSI = {"End of file"}; 
A_GISVEC(A68_VC ,LEBAOSI,KEBAOSI,11)
static A68_76   MEBAOSI = {"You can only trap user interrupts in an interactive session"}; 
A_GISVEC(A68_VC ,NEBAOSI,MEBAOSI,59)
static A68_77   OEBAOSI = {"Operation aborted after user interrupt"}; 
A_GISVEC(A68_VC ,PEBAOSI,OEBAOSI,38)
static A68_59   QEBAOSI = {"*: No match"}; 
A_GISVEC(A68_VC ,REBAOSI,QEBAOSI,11)
static A68_78   SEBAOSI = {"*: Ambiguous"}; 
A_GISVEC(A68_VC ,TEBAOSI,SEBAOSI,12)
static A68_79   UEBAOSI = {"parse_filename: Buffer overflow expanding *"}; 
A_GISVEC(A68_VC ,VEBAOSI,UEBAOSI,43)
static A68_80   WEBAOSI = {"parse_filename: \"echo\" failed"}; 
A_GISVEC(A68_VC ,XEBAOSI,WEBAOSI,29)
static A68_74   YEBAOSI = {"Null filename \"*\""}; 
A_GISVEC(A68_VC ,ZEBAOSI,YEBAOSI,17)
static A68_71   AFBAOSI = {"Invalid call to exclusive_close_file"}; 
A_GISVEC(A68_VC ,BFBAOSI,AFBAOSI,36)
static A68_80   CFBAOSI = {"Invalid call to truncate_file"}; 
A_GISVEC(A68_VC ,DFBAOSI,CFBAOSI,29)
static A68_39  FFBAOSI_os_facility;
static A68_34 * NFBAOSI_message;

A_STATIC A68_VOID  WCBAOSI_generator(A68_BOOL  VCBAOSI_anonymous, A68_33  *ReturnedValue);

A68_VOID  HFBAOSI_os_msg(A68_INT  Number, A68_31  *ReturnedValue);

A68_BOOL  LFBAOSI_is_os_msg(A68_31  Msgno);

A_STATIC A68_VOID  WCBAOSI_generator(A68_BOOL  VCBAOSI_anonymous, A68_33  *ReturnedValue)
{ 
A68_33  XCBAOSI;  /* clause result */
A68_33  YCBAOSI;  /* OPERATORS - dynamic generator */
{ 
YCBAOSI.upb = RCBAOSI_max_os_messages ;
( VCBAOSI_anonymous? A_VLOC(A68_34 ,YCBAOSI): A_VHEAP(A68_34 ,YCBAOSI) );
XCBAOSI = YCBAOSI;
} 
*ReturnedValue = (XCBAOSI);
return;
} 
#undef NL

A68_VOID  HFBAOSI_os_msg(A68_INT  Number, A68_31  *ReturnedValue)
{ 
A68_31  IFBAOSI;  /* clause result */
A68_31  JFBAOSI;  /* avoid structure result */
A_PROC_ENTRY(os_msg);
HMAAOSI_make_msgno( Number, FFBAOSI_os_facility, &JFBAOSI );
IFBAOSI = JFBAOSI;
A_PROC_EXIT(os_msg);
*ReturnedValue = (IFBAOSI);
return;
} 
#undef NL

A68_BOOL  LFBAOSI_is_os_msg(A68_31  Msgno)
{ 
A68_BOOL  MFBAOSI;  /* clause result */
A_PROC_ENTRY(is_os_msg);
MFBAOSI = INAAOSI_is_facility_msg(Msgno, FFBAOSI_os_facility);
A_PROC_EXIT(is_os_msg);
return( MFBAOSI );
} 
#undef NL
 /* line 1: */
 /* line 4: */
void MCBAOSI(void)   /* initialise DECS osmessages */
{ 
static A68_BOOL A_invoked = A68_FALSE;

/* --- Configuration information for this module */
static char *A_config_arguments[] = {"/u/model/ella/bin/a68toc","-v","-lib","/u/model/ella/a68library/assoc/mfiles","-cdir","./cfiles","-dir","./mfiles","-staredit","259","./a68files/osmessages.a68",""};
static char *A_config_environment[] = {"A68_LIB=","A68_CDIR=","A68_DIR=","A68_STAREDIT=","A68_NAMESEED=","CTRANS_NAMESEED=ctrans_nameseed",""};
static char *A_config_modinfo_files[] = {"/u/model/ella/a68library/assoc/mfiles/a68config.m","./mfiles/messageproc.m",""};
static A_CONFIG_INFO A_config;
/* --- end of configuration information */
A68_39  SCBAOSI;  /* collateral clause result */
A68_33  ZCBAOSI;  /* avoid structure result */
A68_BOOL * ADBAOSI;  /* YIELD */
A68_81  BDBAOSI;  /* collateral clause result */
A68_40  EFBAOSI;  /* OPERATORS - istruct -> vector */
A68_33  OFBAOSI;  /* forall yield */
A68_INT  PFBAOSI;  /* forall loop counter */
A68_34  QFBAOSI;  /* collateral clause result */
A68_VC  RFBAOSI;  /* OPERATORS - nil -> mode */
if( A_invoked ) return;
A_invoked = A68_TRUE;
BAAALIB();   /* USE a68config */
JFAAOSI();   /* USE messageproc */
/* --- Initialise configuration information */
A_config.source_file = "/import/hazel/home/export/model/ella/osif/assoc/./a68files/osmessages.a68";
A_config.translation_time = "Tue Apr  4 09:24:35 1995";
A_config.ctrans_version = "Ctrans_34.5";
A_config.name_seed = "LCBAOSI (from seed file) ";
A_config.spec_change_time = "Tue Apr  4 09:24:35 1995";
A_config.arguments = A_config_arguments;
A_config.environment = A_config_environment;
A_config.modinfo_files = A_config_modinfo_files;
A_PROC_ENTRY(DECS osmessages);
UEAALIB_a68config(LGAALIB_configinfo, QCBAOSI);
 /* line 66: */
 /* line 68: */
 /* line 69: */
SCBAOSI.Name = UCBAOSI;
 /* line 70: */
WCBAOSI_generator( A68_TRUE, &ZCBAOSI );
SCBAOSI.Messages = ZCBAOSI;
 /* line 71: */
ADBAOSI = A_LOC(A68_BOOL ) ;
(*ADBAOSI) = A68_FALSE ;
SCBAOSI.Initialised = ADBAOSI;
 /* line 73: */
BDBAOSI.data[0].Number = 1;
BDBAOSI.data[0].Class = UIAAOSI_fatal_class;
 /* line 75: */
BDBAOSI.data[0].Text = DDBAOSI;
BDBAOSI.data[1].Number = 5;
BDBAOSI.data[1].Class = VIAAOSI_user_class;
 /* line 76: */
BDBAOSI.data[1].Text = FDBAOSI;
BDBAOSI.data[2].Number = 6;
BDBAOSI.data[2].Class = VIAAOSI_user_class;
 /* line 77: */
BDBAOSI.data[2].Text = HDBAOSI;
BDBAOSI.data[3].Number = 7;
BDBAOSI.data[3].Class = VIAAOSI_user_class;
 /* line 78: */
BDBAOSI.data[3].Text = JDBAOSI;
BDBAOSI.data[4].Number = 8;
BDBAOSI.data[4].Class = VIAAOSI_user_class;
 /* line 80: */
BDBAOSI.data[4].Text = LDBAOSI;
BDBAOSI.data[5].Number = 9;
BDBAOSI.data[5].Class = UIAAOSI_fatal_class;
 /* line 82: */
BDBAOSI.data[5].Text = NDBAOSI;
BDBAOSI.data[6].Number = 13;
BDBAOSI.data[6].Class = UIAAOSI_fatal_class;
 /* line 84: */
BDBAOSI.data[6].Text = PDBAOSI;
BDBAOSI.data[7].Number = 17;
BDBAOSI.data[7].Class = VIAAOSI_user_class;
 /* line 85: */
BDBAOSI.data[7].Text = RDBAOSI;
BDBAOSI.data[8].Number = 18;
BDBAOSI.data[8].Class = VIAAOSI_user_class;
 /* line 87: */
BDBAOSI.data[8].Text = TDBAOSI;
BDBAOSI.data[9].Number = 21;
BDBAOSI.data[9].Class = VIAAOSI_user_class;
 /* line 89: */
BDBAOSI.data[9].Text = VDBAOSI;
BDBAOSI.data[10].Number = 25;
BDBAOSI.data[10].Class = VIAAOSI_user_class;
 /* line 90: */
BDBAOSI.data[10].Text = XDBAOSI;
BDBAOSI.data[11].Number = 26;
BDBAOSI.data[11].Class = VIAAOSI_user_class;
 /* line 91: */
BDBAOSI.data[11].Text = ZDBAOSI;
BDBAOSI.data[12].Number = 27;
BDBAOSI.data[12].Class = VIAAOSI_user_class;
 /* line 92: */
BDBAOSI.data[12].Text = BEBAOSI;
BDBAOSI.data[13].Number = 28;
BDBAOSI.data[13].Class = VIAAOSI_user_class;
 /* line 93: */
BDBAOSI.data[13].Text = DEBAOSI;
BDBAOSI.data[14].Number = 29;
BDBAOSI.data[14].Class = UIAAOSI_fatal_class;
 /* line 94: */
BDBAOSI.data[14].Text = FEBAOSI;
BDBAOSI.data[15].Number = 30;
BDBAOSI.data[15].Class = TIAAOSI_system_class;
 /* line 96: */
BDBAOSI.data[15].Text = HEBAOSI;
BDBAOSI.data[16].Number = 33;
BDBAOSI.data[16].Class = VIAAOSI_user_class;
 /* line 97: */
BDBAOSI.data[16].Text = JEBAOSI;
BDBAOSI.data[17].Number = 34;
BDBAOSI.data[17].Class = VIAAOSI_user_class;
 /* line 99: */
BDBAOSI.data[17].Text = LEBAOSI;
BDBAOSI.data[18].Number = 37;
BDBAOSI.data[18].Class = UIAAOSI_fatal_class;
 /* line 101: */
BDBAOSI.data[18].Text = NEBAOSI;
BDBAOSI.data[19].Number = 41;
BDBAOSI.data[19].Class = VIAAOSI_user_class;
 /* line 103: */
BDBAOSI.data[19].Text = PEBAOSI;
BDBAOSI.data[20].Number = 45;
BDBAOSI.data[20].Class = UIAAOSI_fatal_class;
 /* line 104: */
BDBAOSI.data[20].Text = REBAOSI;
BDBAOSI.data[21].Number = 46;
BDBAOSI.data[21].Class = UIAAOSI_fatal_class;
 /* line 105: */
BDBAOSI.data[21].Text = TEBAOSI;
BDBAOSI.data[22].Number = 47;
BDBAOSI.data[22].Class = UIAAOSI_fatal_class;
 /* line 106: */
BDBAOSI.data[22].Text = VEBAOSI;
BDBAOSI.data[23].Number = 48;
BDBAOSI.data[23].Class = UIAAOSI_fatal_class;
 /* line 107: */
BDBAOSI.data[23].Text = XEBAOSI;
BDBAOSI.data[24].Number = 49;
BDBAOSI.data[24].Class = VIAAOSI_user_class;
 /* line 109: */
BDBAOSI.data[24].Text = ZEBAOSI;
BDBAOSI.data[25].Number = 53;
BDBAOSI.data[25].Class = TIAAOSI_system_class;
 /* line 111: */
BDBAOSI.data[25].Text = BFBAOSI;
BDBAOSI.data[26].Number = 57;
BDBAOSI.data[26].Class = TIAAOSI_system_class;
 /* line 112: */
BDBAOSI.data[26].Text = DFBAOSI;
SCBAOSI.Setup = A_HISVEC(EFBAOSI,BDBAOSI,27,A68_41 );
FFBAOSI_os_facility = SCBAOSI;
 /* line 114: */
 /* line 116: */
 /* line 118: */
 /* line 119: */
OFBAOSI = FFBAOSI_os_facility.Messages ;
PFBAOSI = OFBAOSI.upb -1;
NFBAOSI_message = OFBAOSI.data;
for (;PFBAOSI-- >= 0;
(NFBAOSI_message++
) )
{
QFBAOSI.Msgno.Number = 0;
QFBAOSI.Msgno.Facility = (A68_32 *)A68_NIL;
QFBAOSI.Msgno.Class = 0X0U;
QFBAOSI.Text = A_VVAC(RFBAOSI);
(*NFBAOSI_message) = QFBAOSI;
}
 /* line 121: */
 /* line 122: */
A_PROC_EXIT(DECS osmessages);
} 
#undef NL
/* end of translation of ./a68files/osmessages.a68 */
