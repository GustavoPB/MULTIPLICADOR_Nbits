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
static const char *ng0 = "C:/Users/wortenmajadahonda/Documents/GitHub/MULTIPLICADOR_Nbits/MULTIPLICADOR_Nbits/CONTROLLER_tb.vhd";



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

LAB2:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 3856);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(90, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 3280);
    xsi_process_wait(t2, t7);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 3920);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(92, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 3280);
    xsi_process_wait(t2, t7);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t11 = *((unsigned char *)t3);
    t12 = (t11 == (unsigned char)2);
    if (t12 == 1)
        goto LAB20;

LAB21:    t10 = (unsigned char)0;

LAB22:    if (t10 == 1)
        goto LAB17;

LAB18:    t9 = (unsigned char)0;

LAB19:    if (t9 == 1)
        goto LAB14;

LAB15:    t8 = (unsigned char)0;

LAB16:    if (t8 == 0)
        goto LAB12;

LAB13:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 3920);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(99, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 3280);
    xsi_process_wait(t2, t7);

LAB25:    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    t2 = (t0 + 6953);
    xsi_report(t2, 22U, (unsigned char)3);
    goto LAB13;

LAB14:    t2 = (t0 + 2312U);
    t6 = *((char **)t2);
    t17 = *((unsigned char *)t6);
    t18 = (t17 == (unsigned char)2);
    t8 = t18;
    goto LAB16;

LAB17:    t2 = (t0 + 1672U);
    t5 = *((char **)t2);
    t15 = *((unsigned char *)t5);
    t16 = (t15 == (unsigned char)3);
    t9 = t16;
    goto LAB19;

LAB20:    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)2);
    t10 = t14;
    goto LAB22;

LAB23:    xsi_set_current_line(101, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 3280);
    xsi_process_wait(t2, t7);

LAB29:    *((char **)t1) = &&LAB30;
    goto LAB1;

LAB24:    goto LAB23;

LAB26:    goto LAB24;

LAB27:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 3984);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(103, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 3280);
    xsi_process_wait(t2, t7);

LAB33:    *((char **)t1) = &&LAB34;
    goto LAB1;

LAB28:    goto LAB27;

LAB30:    goto LAB28;

LAB31:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 3920);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(105, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 3280);
    xsi_process_wait(t2, t7);

LAB37:    *((char **)t1) = &&LAB38;
    goto LAB1;

LAB32:    goto LAB31;

LAB34:    goto LAB32;

LAB35:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t11 = *((unsigned char *)t3);
    t12 = (t11 == (unsigned char)2);
    if (t12 == 1)
        goto LAB47;

LAB48:    t10 = (unsigned char)0;

LAB49:    if (t10 == 1)
        goto LAB44;

LAB45:    t9 = (unsigned char)0;

LAB46:    if (t9 == 1)
        goto LAB41;

LAB42:    t8 = (unsigned char)0;

LAB43:    if (t8 == 0)
        goto LAB39;

LAB40:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 3920);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(112, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 3280);
    xsi_process_wait(t2, t7);

LAB52:    *((char **)t1) = &&LAB53;
    goto LAB1;

LAB36:    goto LAB35;

LAB38:    goto LAB36;

LAB39:    t2 = (t0 + 6975);
    xsi_report(t2, 21U, (unsigned char)3);
    goto LAB40;

LAB41:    t2 = (t0 + 2312U);
    t6 = *((char **)t2);
    t17 = *((unsigned char *)t6);
    t18 = (t17 == (unsigned char)3);
    t8 = t18;
    goto LAB43;

LAB44:    t2 = (t0 + 1672U);
    t5 = *((char **)t2);
    t15 = *((unsigned char *)t5);
    t16 = (t15 == (unsigned char)3);
    t9 = t16;
    goto LAB46;

LAB47:    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)3);
    t10 = t14;
    goto LAB49;

LAB50:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 3920);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(115, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 3280);
    xsi_process_wait(t2, t7);

LAB56:    *((char **)t1) = &&LAB57;
    goto LAB1;

LAB51:    goto LAB50;

LAB53:    goto LAB51;

LAB54:    xsi_set_current_line(116, ng0);
    t2 = (t0 + 3920);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(118, ng0);
    t2 = (t0 + 3984);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(119, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 3280);
    xsi_process_wait(t2, t7);

LAB60:    *((char **)t1) = &&LAB61;
    goto LAB1;

LAB55:    goto LAB54;

LAB57:    goto LAB55;

LAB58:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 3920);
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

LAB64:    *((char **)t1) = &&LAB65;
    goto LAB1;

LAB59:    goto LAB58;

LAB61:    goto LAB59;

LAB62:    xsi_set_current_line(123, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t11 = *((unsigned char *)t3);
    t12 = (t11 == (unsigned char)2);
    if (t12 == 1)
        goto LAB74;

LAB75:    t10 = (unsigned char)0;

LAB76:    if (t10 == 1)
        goto LAB71;

LAB72:    t9 = (unsigned char)0;

LAB73:    if (t9 == 1)
        goto LAB68;

LAB69:    t8 = (unsigned char)0;

LAB70:    if (t8 == 0)
        goto LAB66;

LAB67:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 3920);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(127, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 3280);
    xsi_process_wait(t2, t7);

LAB79:    *((char **)t1) = &&LAB80;
    goto LAB1;

LAB63:    goto LAB62;

LAB65:    goto LAB63;

LAB66:    t2 = (t0 + 6996);
    xsi_report(t2, 21U, (unsigned char)3);
    goto LAB67;

LAB68:    t2 = (t0 + 2312U);
    t6 = *((char **)t2);
    t17 = *((unsigned char *)t6);
    t18 = (t17 == (unsigned char)2);
    t8 = t18;
    goto LAB70;

LAB71:    t2 = (t0 + 1672U);
    t5 = *((char **)t2);
    t15 = *((unsigned char *)t5);
    t16 = (t15 == (unsigned char)3);
    t9 = t16;
    goto LAB73;

LAB74:    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)3);
    t10 = t14;
    goto LAB76;

LAB77:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 4048);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(130, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 3280);
    xsi_process_wait(t2, t7);

LAB83:    *((char **)t1) = &&LAB84;
    goto LAB1;

LAB78:    goto LAB77;

LAB80:    goto LAB78;

LAB81:    xsi_set_current_line(131, ng0);
    t2 = (t0 + 3920);
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

LAB87:    *((char **)t1) = &&LAB88;
    goto LAB1;

LAB82:    goto LAB81;

LAB84:    goto LAB82;

LAB85:    xsi_set_current_line(134, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t11 = *((unsigned char *)t3);
    t12 = (t11 == (unsigned char)2);
    if (t12 == 1)
        goto LAB97;

LAB98:    t10 = (unsigned char)0;

LAB99:    if (t10 == 1)
        goto LAB94;

LAB95:    t9 = (unsigned char)0;

LAB96:    if (t9 == 1)
        goto LAB91;

LAB92:    t8 = (unsigned char)0;

LAB93:    if (t8 == 0)
        goto LAB89;

LAB90:    xsi_set_current_line(137, ng0);
    t2 = (t0 + 3920);
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

LAB102:    *((char **)t1) = &&LAB103;
    goto LAB1;

LAB86:    goto LAB85;

LAB88:    goto LAB86;

LAB89:    t2 = (t0 + 7017);
    xsi_report(t2, 23U, (unsigned char)3);
    goto LAB90;

LAB91:    t2 = (t0 + 2312U);
    t6 = *((char **)t2);
    t17 = *((unsigned char *)t6);
    t18 = (t17 == (unsigned char)2);
    t8 = t18;
    goto LAB93;

LAB94:    t2 = (t0 + 1672U);
    t5 = *((char **)t2);
    t15 = *((unsigned char *)t5);
    t16 = (t15 == (unsigned char)3);
    t9 = t16;
    goto LAB96;

LAB97:    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)2);
    t10 = t14;
    goto LAB99;

LAB100:    xsi_set_current_line(140, ng0);
    t2 = (t0 + 3920);
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

LAB106:    *((char **)t1) = &&LAB107;
    goto LAB1;

LAB101:    goto LAB100;

LAB103:    goto LAB101;

LAB104:    xsi_set_current_line(142, ng0);
    t2 = (t0 + 3920);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(144, ng0);
    t2 = (t0 + 3856);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(145, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 3280);
    xsi_process_wait(t2, t7);

LAB110:    *((char **)t1) = &&LAB111;
    goto LAB1;

LAB105:    goto LAB104;

LAB107:    goto LAB105;

LAB108:    xsi_set_current_line(146, ng0);
    t2 = (t0 + 3920);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(147, ng0);
    t7 = (5 * 1000LL);
    t2 = (t0 + 3280);
    xsi_process_wait(t2, t7);

LAB114:    *((char **)t1) = &&LAB115;
    goto LAB1;

LAB109:    goto LAB108;

LAB111:    goto LAB109;

LAB112:    xsi_set_current_line(150, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t11 = *((unsigned char *)t3);
    t12 = (t11 == (unsigned char)3);
    if (t12 == 1)
        goto LAB124;

LAB125:    t10 = (unsigned char)0;

LAB126:    if (t10 == 1)
        goto LAB121;

LAB122:    t9 = (unsigned char)0;

LAB123:    if (t9 == 1)
        goto LAB118;

LAB119:    t8 = (unsigned char)0;

LAB120:    if (t8 == 0)
        goto LAB116;

LAB117:    xsi_set_current_line(153, ng0);
    t2 = (t0 + 3920);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(154, ng0);
    t7 = (10 * 1000LL);
    t2 = (t0 + 3280);
    xsi_process_wait(t2, t7);

LAB129:    *((char **)t1) = &&LAB130;
    goto LAB1;

LAB113:    goto LAB112;

LAB115:    goto LAB113;

LAB116:    t2 = (t0 + 7040);
    xsi_report(t2, 21U, (unsigned char)3);
    goto LAB117;

LAB118:    t2 = (t0 + 2312U);
    t6 = *((char **)t2);
    t17 = *((unsigned char *)t6);
    t18 = (t17 == (unsigned char)2);
    t8 = t18;
    goto LAB120;

LAB121:    t2 = (t0 + 1672U);
    t5 = *((char **)t2);
    t15 = *((unsigned char *)t5);
    t16 = (t15 == (unsigned char)2);
    t9 = t16;
    goto LAB123;

LAB124:    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)2);
    t10 = t14;
    goto LAB126;

LAB127:    xsi_set_current_line(156, ng0);
    if ((unsigned char)0 == 0)
        goto LAB131;

LAB132:    goto LAB2;

LAB128:    goto LAB127;

LAB130:    goto LAB128;

LAB131:    t2 = (t0 + 7061);
    xsi_report(t2, 7U, (unsigned char)3);
    goto LAB132;

}


extern void work_a_2827372702_2372691052_init()
{
	static char *pe[] = {(void *)work_a_2827372702_2372691052_p_0};
	xsi_register_didat("work_a_2827372702_2372691052", "isim/CONTROLLER_tb_isim_beh.exe.sim/work/a_2827372702_2372691052.didat");
	xsi_register_executes(pe);
}
