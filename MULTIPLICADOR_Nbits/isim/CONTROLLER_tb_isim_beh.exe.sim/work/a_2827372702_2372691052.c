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
static const char *ng0 = "C:/Users/Guss/Documents/GitHub/MULTIPLICADOR_Nbits/MULTIPLICADOR_Nbits/CONTROLLER_tb.vhd";



static void work_a_2827372702_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    unsigned char t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    unsigned char t16;
    unsigned char t17;
    unsigned char t18;

LAB0:    t1 = (t0 + 3472U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 3856);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(89, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 3280);
    xsi_process_wait(t2, t7);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t11 = *((unsigned char *)t3);
    t12 = (t11 == (unsigned char)3);
    if (t12 == 1)
        goto LAB16;

LAB17:    t10 = (unsigned char)0;

LAB18:    if (t10 == 1)
        goto LAB13;

LAB14:    t9 = (unsigned char)0;

LAB15:    if (t9 == 1)
        goto LAB10;

LAB11:    t8 = (unsigned char)0;

LAB12:    if (t8 == 0)
        goto LAB8;

LAB9:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 3856);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 3920);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(96, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 3280);
    xsi_process_wait(t2, t7);

LAB21:    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    t2 = (t0 + 6901);
    xsi_report(t2, 19U, (unsigned char)3);
    goto LAB9;

LAB10:    t2 = (t0 + 2312U);
    t6 = *((char **)t2);
    t17 = *((unsigned char *)t6);
    t18 = (t17 == (unsigned char)2);
    t8 = t18;
    goto LAB12;

LAB13:    t2 = (t0 + 1672U);
    t5 = *((char **)t2);
    t15 = *((unsigned char *)t5);
    t16 = (t15 == (unsigned char)2);
    t9 = t16;
    goto LAB15;

LAB16:    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)2);
    t10 = t14;
    goto LAB18;

LAB19:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 3984);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(98, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 3280);
    xsi_process_wait(t2, t7);

LAB25:    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB20:    goto LAB19;

LAB22:    goto LAB20;

LAB23:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t11 = *((unsigned char *)t3);
    t12 = (t11 == (unsigned char)3);
    if (t12 == 1)
        goto LAB35;

LAB36:    t10 = (unsigned char)0;

LAB37:    if (t10 == 1)
        goto LAB32;

LAB33:    t9 = (unsigned char)0;

LAB34:    if (t9 == 1)
        goto LAB29;

LAB30:    t8 = (unsigned char)0;

LAB31:    if (t8 == 0)
        goto LAB27;

LAB28:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 3984);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(105, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 3280);
    xsi_process_wait(t2, t7);

LAB40:    *((char **)t1) = &&LAB41;
    goto LAB1;

LAB24:    goto LAB23;

LAB26:    goto LAB24;

LAB27:    t2 = (t0 + 6920);
    xsi_report(t2, 22U, (unsigned char)3);
    goto LAB28;

LAB29:    t2 = (t0 + 2312U);
    t6 = *((char **)t2);
    t17 = *((unsigned char *)t6);
    t18 = (t17 == (unsigned char)2);
    t8 = t18;
    goto LAB31;

LAB32:    t2 = (t0 + 1672U);
    t5 = *((char **)t2);
    t15 = *((unsigned char *)t5);
    t16 = (t15 == (unsigned char)3);
    t9 = t16;
    goto LAB34;

LAB35:    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)2);
    t10 = t14;
    goto LAB37;

LAB38:    xsi_set_current_line(107, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 3280);
    xsi_process_wait(t2, t7);

LAB44:    *((char **)t1) = &&LAB45;
    goto LAB1;

LAB39:    goto LAB38;

LAB41:    goto LAB39;

LAB42:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 4048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(109, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 3280);
    xsi_process_wait(t2, t7);

LAB48:    *((char **)t1) = &&LAB49;
    goto LAB1;

LAB43:    goto LAB42;

LAB45:    goto LAB43;

LAB46:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 3984);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(111, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 3280);
    xsi_process_wait(t2, t7);

LAB52:    *((char **)t1) = &&LAB53;
    goto LAB1;

LAB47:    goto LAB46;

LAB49:    goto LAB47;

LAB50:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t11 = *((unsigned char *)t3);
    t12 = (t11 == (unsigned char)3);
    if (t12 == 1)
        goto LAB62;

LAB63:    t10 = (unsigned char)0;

LAB64:    if (t10 == 1)
        goto LAB59;

LAB60:    t9 = (unsigned char)0;

LAB61:    if (t9 == 1)
        goto LAB56;

LAB57:    t8 = (unsigned char)0;

LAB58:    if (t8 == 0)
        goto LAB54;

LAB55:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 3984);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(118, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 3280);
    xsi_process_wait(t2, t7);

LAB67:    *((char **)t1) = &&LAB68;
    goto LAB1;

LAB51:    goto LAB50;

LAB53:    goto LAB51;

LAB54:    t2 = (t0 + 6942);
    xsi_report(t2, 21U, (unsigned char)3);
    goto LAB55;

LAB56:    t2 = (t0 + 2312U);
    t6 = *((char **)t2);
    t17 = *((unsigned char *)t6);
    t18 = (t17 == (unsigned char)3);
    t8 = t18;
    goto LAB58;

LAB59:    t2 = (t0 + 1672U);
    t5 = *((char **)t2);
    t15 = *((unsigned char *)t5);
    t16 = (t15 == (unsigned char)3);
    t9 = t16;
    goto LAB61;

LAB62:    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)3);
    t10 = t14;
    goto LAB64;

LAB65:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 3984);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(121, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 3280);
    xsi_process_wait(t2, t7);

LAB71:    *((char **)t1) = &&LAB72;
    goto LAB1;

LAB66:    goto LAB65;

LAB68:    goto LAB66;

LAB69:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 3984);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(124, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t11 = *((unsigned char *)t3);
    t12 = (t11 == (unsigned char)3);
    if (t12 == 1)
        goto LAB81;

LAB82:    t10 = (unsigned char)0;

LAB83:    if (t10 == 1)
        goto LAB78;

LAB79:    t9 = (unsigned char)0;

LAB80:    if (t9 == 1)
        goto LAB75;

LAB76:    t8 = (unsigned char)0;

LAB77:    if (t8 == 0)
        goto LAB73;

LAB74:    xsi_set_current_line(127, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 3280);
    xsi_process_wait(t2, t7);

LAB86:    *((char **)t1) = &&LAB87;
    goto LAB1;

LAB70:    goto LAB69;

LAB72:    goto LAB70;

LAB73:    t2 = (t0 + 6963);
    xsi_report(t2, 39U, (unsigned char)3);
    goto LAB74;

LAB75:    t2 = (t0 + 2312U);
    t6 = *((char **)t2);
    t17 = *((unsigned char *)t6);
    t18 = (t17 == (unsigned char)2);
    t8 = t18;
    goto LAB77;

LAB78:    t2 = (t0 + 1672U);
    t5 = *((char **)t2);
    t15 = *((unsigned char *)t5);
    t16 = (t15 == (unsigned char)3);
    t9 = t16;
    goto LAB80;

LAB81:    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)2);
    t10 = t14;
    goto LAB83;

LAB84:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 4048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(130, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 3280);
    xsi_process_wait(t2, t7);

LAB90:    *((char **)t1) = &&LAB91;
    goto LAB1;

LAB85:    goto LAB84;

LAB87:    goto LAB85;

LAB88:    xsi_set_current_line(131, ng0);
    t2 = (t0 + 3984);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(132, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 3280);
    xsi_process_wait(t2, t7);

LAB94:    *((char **)t1) = &&LAB95;
    goto LAB1;

LAB89:    goto LAB88;

LAB91:    goto LAB89;

LAB92:    xsi_set_current_line(134, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t11 = *((unsigned char *)t3);
    t12 = (t11 == (unsigned char)3);
    if (t12 == 1)
        goto LAB104;

LAB105:    t10 = (unsigned char)0;

LAB106:    if (t10 == 1)
        goto LAB101;

LAB102:    t9 = (unsigned char)0;

LAB103:    if (t9 == 1)
        goto LAB98;

LAB99:    t8 = (unsigned char)0;

LAB100:    if (t8 == 0)
        goto LAB96;

LAB97:    xsi_set_current_line(137, ng0);
    t2 = (t0 + 3984);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(138, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 3280);
    xsi_process_wait(t2, t7);

LAB109:    *((char **)t1) = &&LAB110;
    goto LAB1;

LAB93:    goto LAB92;

LAB95:    goto LAB93;

LAB96:    t2 = (t0 + 7002);
    xsi_report(t2, 21U, (unsigned char)3);
    goto LAB97;

LAB98:    t2 = (t0 + 2312U);
    t6 = *((char **)t2);
    t17 = *((unsigned char *)t6);
    t18 = (t17 == (unsigned char)2);
    t8 = t18;
    goto LAB100;

LAB101:    t2 = (t0 + 1672U);
    t5 = *((char **)t2);
    t15 = *((unsigned char *)t5);
    t16 = (t15 == (unsigned char)3);
    t9 = t16;
    goto LAB103;

LAB104:    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)3);
    t10 = t14;
    goto LAB106;

LAB107:    xsi_set_current_line(140, ng0);
    t2 = (t0 + 3984);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(141, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 3280);
    xsi_process_wait(t2, t7);

LAB113:    *((char **)t1) = &&LAB114;
    goto LAB1;

LAB108:    goto LAB107;

LAB110:    goto LAB108;

LAB111:    xsi_set_current_line(142, ng0);
    t2 = (t0 + 3984);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(143, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 3280);
    xsi_process_wait(t2, t7);

LAB117:    *((char **)t1) = &&LAB118;
    goto LAB1;

LAB112:    goto LAB111;

LAB114:    goto LAB112;

LAB115:    xsi_set_current_line(145, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t11 = *((unsigned char *)t3);
    t12 = (t11 == (unsigned char)3);
    if (t12 == 1)
        goto LAB127;

LAB128:    t10 = (unsigned char)0;

LAB129:    if (t10 == 1)
        goto LAB124;

LAB125:    t9 = (unsigned char)0;

LAB126:    if (t9 == 1)
        goto LAB121;

LAB122:    t8 = (unsigned char)0;

LAB123:    if (t8 == 0)
        goto LAB119;

LAB120:    xsi_set_current_line(148, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 3280);
    xsi_process_wait(t2, t7);

LAB132:    *((char **)t1) = &&LAB133;
    goto LAB1;

LAB116:    goto LAB115;

LAB118:    goto LAB116;

LAB119:    t2 = (t0 + 7023);
    xsi_report(t2, 39U, (unsigned char)3);
    goto LAB120;

LAB121:    t2 = (t0 + 2312U);
    t6 = *((char **)t2);
    t17 = *((unsigned char *)t6);
    t18 = (t17 == (unsigned char)2);
    t8 = t18;
    goto LAB123;

LAB124:    t2 = (t0 + 1672U);
    t5 = *((char **)t2);
    t15 = *((unsigned char *)t5);
    t16 = (t15 == (unsigned char)3);
    t9 = t16;
    goto LAB126;

LAB127:    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)2);
    t10 = t14;
    goto LAB129;

LAB130:    xsi_set_current_line(150, ng0);
    t2 = (t0 + 4112);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(151, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 3280);
    xsi_process_wait(t2, t7);

LAB136:    *((char **)t1) = &&LAB137;
    goto LAB1;

LAB131:    goto LAB130;

LAB133:    goto LAB131;

LAB134:    xsi_set_current_line(152, ng0);
    t2 = (t0 + 3984);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(153, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 3280);
    xsi_process_wait(t2, t7);

LAB140:    *((char **)t1) = &&LAB141;
    goto LAB1;

LAB135:    goto LAB134;

LAB137:    goto LAB135;

LAB138:    xsi_set_current_line(155, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t11 = *((unsigned char *)t3);
    t12 = (t11 == (unsigned char)2);
    if (t12 == 1)
        goto LAB150;

LAB151:    t10 = (unsigned char)0;

LAB152:    if (t10 == 1)
        goto LAB147;

LAB148:    t9 = (unsigned char)0;

LAB149:    if (t9 == 1)
        goto LAB144;

LAB145:    t8 = (unsigned char)0;

LAB146:    if (t8 == 0)
        goto LAB142;

LAB143:    xsi_set_current_line(158, ng0);
    t2 = (t0 + 3984);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(159, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 3280);
    xsi_process_wait(t2, t7);

LAB155:    *((char **)t1) = &&LAB156;
    goto LAB1;

LAB139:    goto LAB138;

LAB141:    goto LAB139;

LAB142:    t2 = (t0 + 7062);
    xsi_report(t2, 23U, (unsigned char)3);
    goto LAB143;

LAB144:    t2 = (t0 + 2312U);
    t6 = *((char **)t2);
    t17 = *((unsigned char *)t6);
    t18 = (t17 == (unsigned char)2);
    t8 = t18;
    goto LAB146;

LAB147:    t2 = (t0 + 1672U);
    t5 = *((char **)t2);
    t15 = *((unsigned char *)t5);
    t16 = (t15 == (unsigned char)3);
    t9 = t16;
    goto LAB149;

LAB150:    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)2);
    t10 = t14;
    goto LAB152;

LAB153:    xsi_set_current_line(161, ng0);
    t2 = (t0 + 3984);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(162, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 3280);
    xsi_process_wait(t2, t7);

LAB159:    *((char **)t1) = &&LAB160;
    goto LAB1;

LAB154:    goto LAB153;

LAB156:    goto LAB154;

LAB157:    xsi_set_current_line(163, ng0);
    t2 = (t0 + 3984);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(165, ng0);
    t2 = (t0 + 3920);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(166, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 3280);
    xsi_process_wait(t2, t7);

LAB163:    *((char **)t1) = &&LAB164;
    goto LAB1;

LAB158:    goto LAB157;

LAB160:    goto LAB158;

LAB161:    xsi_set_current_line(167, ng0);
    t2 = (t0 + 3984);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(168, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 3280);
    xsi_process_wait(t2, t7);

LAB167:    *((char **)t1) = &&LAB168;
    goto LAB1;

LAB162:    goto LAB161;

LAB164:    goto LAB162;

LAB165:    xsi_set_current_line(171, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t11 = *((unsigned char *)t3);
    t12 = (t11 == (unsigned char)3);
    if (t12 == 1)
        goto LAB177;

LAB178:    t10 = (unsigned char)0;

LAB179:    if (t10 == 1)
        goto LAB174;

LAB175:    t9 = (unsigned char)0;

LAB176:    if (t9 == 1)
        goto LAB171;

LAB172:    t8 = (unsigned char)0;

LAB173:    if (t8 == 0)
        goto LAB169;

LAB170:    xsi_set_current_line(174, ng0);
    t2 = (t0 + 3984);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(175, ng0);
    t7 = (10 * 1000LL);
    t2 = (t0 + 3280);
    xsi_process_wait(t2, t7);

LAB182:    *((char **)t1) = &&LAB183;
    goto LAB1;

LAB166:    goto LAB165;

LAB168:    goto LAB166;

LAB169:    t2 = (t0 + 7085);
    xsi_report(t2, 21U, (unsigned char)3);
    goto LAB170;

LAB171:    t2 = (t0 + 2312U);
    t6 = *((char **)t2);
    t17 = *((unsigned char *)t6);
    t18 = (t17 == (unsigned char)2);
    t8 = t18;
    goto LAB173;

LAB174:    t2 = (t0 + 1672U);
    t5 = *((char **)t2);
    t15 = *((unsigned char *)t5);
    t16 = (t15 == (unsigned char)2);
    t9 = t16;
    goto LAB176;

LAB177:    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)2);
    t10 = t14;
    goto LAB179;

LAB180:    xsi_set_current_line(177, ng0);
    if ((unsigned char)0 == 0)
        goto LAB184;

LAB185:    goto LAB2;

LAB181:    goto LAB180;

LAB183:    goto LAB181;

LAB184:    t2 = (t0 + 7106);
    xsi_report(t2, 7U, (unsigned char)3);
    goto LAB185;

}


extern void work_a_2827372702_2372691052_init()
{
	static char *pe[] = {(void *)work_a_2827372702_2372691052_p_0};
	xsi_register_didat("work_a_2827372702_2372691052", "isim/CONTROLLER_tb_isim_beh.exe.sim/work/a_2827372702_2372691052.didat");
	xsi_register_executes(pe);
}
