/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Guss/Desktop/TRABAJO SED/MULTIPLICADOR_Nbits/TOP_tb.vhd";



static void work_a_3115858369_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 3904);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3080);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 3904);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3080);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_3115858369_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int64 t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned int t14;
    int64 t16;

LAB0:    t1 = (t0 + 3520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 6700);
    t4 = (t0 + 3968);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 6704);
    t4 = (t0 + 4032);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 4096);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t9 = *((int64 *)t3);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, t9);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 4160);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(107, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t9 = *((int64 *)t3);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, t9);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 4160);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t9 = *((int64 *)t3);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, t9);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t11 = *((unsigned char *)t3);
    t12 = (t11 == (unsigned char)3);
    if (t12 == 1)
        goto LAB18;

LAB19:    t10 = (unsigned char)0;

LAB20:    if (t10 == 0)
        goto LAB16;

LAB17:    xsi_set_current_line(114, ng0);
    t9 = (20 * 1000LL);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, t9);

LAB29:    *((char **)t1) = &&LAB30;
    goto LAB1;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB16:    t8 = (t0 + 6716);
    xsi_report(t8, 21U, (unsigned char)3);
    goto LAB17;

LAB18:    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t2 = (t0 + 6708);
    t13 = 1;
    if (8U == 8U)
        goto LAB21;

LAB22:    t13 = 0;

LAB23:    t10 = t13;
    goto LAB20;

LAB21:    t14 = 0;

LAB24:    if (t14 < 8U)
        goto LAB25;
    else
        goto LAB23;

LAB25:    t6 = (t4 + t14);
    t7 = (t2 + t14);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB22;

LAB26:    t14 = (t14 + 1);
    goto LAB24;

LAB27:    xsi_set_current_line(116, ng0);
    t2 = (t0 + 4096);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(117, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t9 = *((int64 *)t3);
    t16 = (t9 * 10);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, t16);

LAB33:    *((char **)t1) = &&LAB34;
    goto LAB1;

LAB28:    goto LAB27;

LAB30:    goto LAB28;

LAB31:    xsi_set_current_line(119, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t11 = *((unsigned char *)t3);
    t12 = (t11 == (unsigned char)2);
    if (t12 == 1)
        goto LAB37;

LAB38:    t10 = (unsigned char)0;

LAB39:    if (t10 == 0)
        goto LAB35;

LAB36:    xsi_set_current_line(122, ng0);
    t9 = (20 * 1000LL);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, t9);

LAB48:    *((char **)t1) = &&LAB49;
    goto LAB1;

LAB32:    goto LAB31;

LAB34:    goto LAB32;

LAB35:    t8 = (t0 + 6745);
    xsi_report(t8, 30U, (unsigned char)3);
    goto LAB36;

LAB37:    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t2 = (t0 + 6737);
    t13 = 1;
    if (8U == 8U)
        goto LAB40;

LAB41:    t13 = 0;

LAB42:    t10 = t13;
    goto LAB39;

LAB40:    t14 = 0;

LAB43:    if (t14 < 8U)
        goto LAB44;
    else
        goto LAB42;

LAB44:    t6 = (t4 + t14);
    t7 = (t2 + t14);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB41;

LAB45:    t14 = (t14 + 1);
    goto LAB43;

LAB46:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 6775);
    t4 = (t0 + 3968);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(127, ng0);
    t2 = (t0 + 6779);
    t4 = (t0 + 4032);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(128, ng0);
    t2 = (t0 + 4096);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(129, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t9 = *((int64 *)t3);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, t9);

LAB52:    *((char **)t1) = &&LAB53;
    goto LAB1;

LAB47:    goto LAB46;

LAB49:    goto LAB47;

LAB50:    xsi_set_current_line(130, ng0);
    t2 = (t0 + 4160);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(131, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t9 = *((int64 *)t3);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, t9);

LAB56:    *((char **)t1) = &&LAB57;
    goto LAB1;

LAB51:    goto LAB50;

LAB53:    goto LAB51;

LAB54:    xsi_set_current_line(132, ng0);
    t2 = (t0 + 4160);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(133, ng0);
    t2 = (t0 + 4096);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(134, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t9 = *((int64 *)t3);
    t16 = (t9 * 10);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, t16);

LAB60:    *((char **)t1) = &&LAB61;
    goto LAB1;

LAB55:    goto LAB54;

LAB57:    goto LAB55;

LAB58:    xsi_set_current_line(136, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t11 = *((unsigned char *)t3);
    t12 = (t11 == (unsigned char)2);
    if (t12 == 1)
        goto LAB64;

LAB65:    t10 = (unsigned char)0;

LAB66:    if (t10 == 0)
        goto LAB62;

LAB63:    xsi_set_current_line(139, ng0);
    t9 = (20 * 1000LL);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, t9);

LAB75:    *((char **)t1) = &&LAB76;
    goto LAB1;

LAB59:    goto LAB58;

LAB61:    goto LAB59;

LAB62:    t8 = (t0 + 6791);
    xsi_report(t8, 33U, (unsigned char)3);
    goto LAB63;

LAB64:    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t2 = (t0 + 6783);
    t13 = 1;
    if (8U == 8U)
        goto LAB67;

LAB68:    t13 = 0;

LAB69:    t10 = t13;
    goto LAB66;

LAB67:    t14 = 0;

LAB70:    if (t14 < 8U)
        goto LAB71;
    else
        goto LAB69;

LAB71:    t6 = (t4 + t14);
    t7 = (t2 + t14);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB68;

LAB72:    t14 = (t14 + 1);
    goto LAB70;

LAB73:    xsi_set_current_line(142, ng0);
    t2 = (t0 + 6824);
    t4 = (t0 + 3968);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(143, ng0);
    t2 = (t0 + 6828);
    t4 = (t0 + 4032);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(144, ng0);
    t2 = (t0 + 4096);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(145, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t9 = *((int64 *)t3);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, t9);

LAB79:    *((char **)t1) = &&LAB80;
    goto LAB1;

LAB74:    goto LAB73;

LAB76:    goto LAB74;

LAB77:    xsi_set_current_line(146, ng0);
    t2 = (t0 + 4160);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(147, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t9 = *((int64 *)t3);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, t9);

LAB83:    *((char **)t1) = &&LAB84;
    goto LAB1;

LAB78:    goto LAB77;

LAB80:    goto LAB78;

LAB81:    xsi_set_current_line(148, ng0);
    t2 = (t0 + 4160);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(149, ng0);
    t2 = (t0 + 4096);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(150, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t9 = *((int64 *)t3);
    t16 = (t9 * 10);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, t16);

LAB87:    *((char **)t1) = &&LAB88;
    goto LAB1;

LAB82:    goto LAB81;

LAB84:    goto LAB82;

LAB85:    xsi_set_current_line(152, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t11 = *((unsigned char *)t3);
    t12 = (t11 == (unsigned char)2);
    if (t12 == 1)
        goto LAB91;

LAB92:    t10 = (unsigned char)0;

LAB93:    if (t10 == 0)
        goto LAB89;

LAB90:    xsi_set_current_line(155, ng0);
    t9 = (20 * 1000LL);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, t9);

LAB102:    *((char **)t1) = &&LAB103;
    goto LAB1;

LAB86:    goto LAB85;

LAB88:    goto LAB86;

LAB89:    t8 = (t0 + 6840);
    xsi_report(t8, 28U, (unsigned char)3);
    goto LAB90;

LAB91:    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t2 = (t0 + 6832);
    t13 = 1;
    if (8U == 8U)
        goto LAB94;

LAB95:    t13 = 0;

LAB96:    t10 = t13;
    goto LAB93;

LAB94:    t14 = 0;

LAB97:    if (t14 < 8U)
        goto LAB98;
    else
        goto LAB96;

LAB98:    t6 = (t4 + t14);
    t7 = (t2 + t14);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB95;

LAB99:    t14 = (t14 + 1);
    goto LAB97;

LAB100:    xsi_set_current_line(158, ng0);
    t2 = (t0 + 6868);
    t4 = (t0 + 3968);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(159, ng0);
    t2 = (t0 + 6872);
    t4 = (t0 + 4032);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(160, ng0);
    t2 = (t0 + 4096);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(161, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t9 = *((int64 *)t3);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, t9);

LAB106:    *((char **)t1) = &&LAB107;
    goto LAB1;

LAB101:    goto LAB100;

LAB103:    goto LAB101;

LAB104:    xsi_set_current_line(162, ng0);
    t2 = (t0 + 4160);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(163, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t9 = *((int64 *)t3);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, t9);

LAB110:    *((char **)t1) = &&LAB111;
    goto LAB1;

LAB105:    goto LAB104;

LAB107:    goto LAB105;

LAB108:    xsi_set_current_line(164, ng0);
    t2 = (t0 + 4160);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(165, ng0);
    t2 = (t0 + 4096);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(166, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t9 = *((int64 *)t3);
    t16 = (t9 * 10);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, t16);

LAB114:    *((char **)t1) = &&LAB115;
    goto LAB1;

LAB109:    goto LAB108;

LAB111:    goto LAB109;

LAB112:    xsi_set_current_line(168, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t11 = *((unsigned char *)t3);
    t12 = (t11 == (unsigned char)2);
    if (t12 == 1)
        goto LAB118;

LAB119:    t10 = (unsigned char)0;

LAB120:    if (t10 == 0)
        goto LAB116;

LAB117:    xsi_set_current_line(171, ng0);
    t9 = (20 * 1000LL);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, t9);

LAB129:    *((char **)t1) = &&LAB130;
    goto LAB1;

LAB113:    goto LAB112;

LAB115:    goto LAB113;

LAB116:    t8 = (t0 + 6884);
    xsi_report(t8, 32U, (unsigned char)3);
    goto LAB117;

LAB118:    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t2 = (t0 + 6876);
    t13 = 1;
    if (8U == 8U)
        goto LAB121;

LAB122:    t13 = 0;

LAB123:    t10 = t13;
    goto LAB120;

LAB121:    t14 = 0;

LAB124:    if (t14 < 8U)
        goto LAB125;
    else
        goto LAB123;

LAB125:    t6 = (t4 + t14);
    t7 = (t2 + t14);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB122;

LAB126:    t14 = (t14 + 1);
    goto LAB124;

LAB127:    xsi_set_current_line(174, ng0);
    if ((unsigned char)0 == 0)
        goto LAB131;

LAB132:    goto LAB2;

LAB128:    goto LAB127;

LAB130:    goto LAB128;

LAB131:    t2 = (t0 + 6916);
    xsi_report(t2, 7U, (unsigned char)3);
    goto LAB132;

}


extern void work_a_3115858369_2372691052_init()
{
	static char *pe[] = {(void *)work_a_3115858369_2372691052_p_0,(void *)work_a_3115858369_2372691052_p_1};
	xsi_register_didat("work_a_3115858369_2372691052", "isim/TOP_tb_isim_beh.exe.sim/work/a_3115858369_2372691052.didat");
	xsi_register_executes(pe);
}
