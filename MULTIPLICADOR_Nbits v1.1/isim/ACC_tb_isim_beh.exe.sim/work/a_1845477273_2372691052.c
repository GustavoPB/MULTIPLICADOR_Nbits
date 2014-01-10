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
static const char *ng0 = "C:/Users/Guss/Documents/GitHub/MULTIPLICADOR_Nbits/MULTIPLICADOR_Nbits/ACC_tb.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );


static void work_a_1845477273_2372691052_p_0(char *t0)
{
    int64 t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(80, ng0);

LAB3:    t1 = (5 * 1000LL);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t4);
    t2 = (t0 + 3480);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t5;
    xsi_driver_first_trans_delta(t2, 0U, 1, t1);
    t10 = (t0 + 3480);
    xsi_driver_intertial_reject(t10, t1, t1);

LAB2:    t11 = (t0 + 3400);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1845477273_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    unsigned char t8;
    unsigned int t9;
    char *t10;
    char *t11;

LAB0:    t1 = (t0 + 3080U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 3544);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(88, ng0);
    t7 = (20 * 1000LL);
    t2 = (t0 + 2888);
    xsi_process_wait(t2, t7);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 6055);
    t8 = 1;
    if (4U == 4U)
        goto LAB10;

LAB11:    t8 = 0;

LAB12:    if (t8 == 0)
        goto LAB8;

LAB9:    xsi_set_current_line(92, ng0);
    t7 = (20 * 1000LL);
    t2 = (t0 + 2888);
    xsi_process_wait(t2, t7);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    t10 = (t0 + 6059);
    xsi_report(t10, 19U, (unsigned char)3);
    goto LAB9;

LAB10:    t9 = 0;

LAB13:    if (t9 < 4U)
        goto LAB14;
    else
        goto LAB12;

LAB14:    t5 = (t3 + t9);
    t6 = (t2 + t9);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB11;

LAB15:    t9 = (t9 + 1);
    goto LAB13;

LAB16:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 3544);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 6078);
    t4 = (t0 + 3608);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t10 = (t6 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(97, ng0);
    t7 = (20 * 1000LL);
    t2 = (t0 + 2888);
    xsi_process_wait(t2, t7);

LAB22:    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

LAB20:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 6082);
    t8 = 1;
    if (4U == 4U)
        goto LAB26;

LAB27:    t8 = 0;

LAB28:    if (t8 == 0)
        goto LAB24;

LAB25:    xsi_set_current_line(101, ng0);
    t7 = (20 * 1000LL);
    t2 = (t0 + 2888);
    xsi_process_wait(t2, t7);

LAB34:    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB21:    goto LAB20;

LAB23:    goto LAB21;

LAB24:    t10 = (t0 + 6086);
    xsi_report(t10, 20U, (unsigned char)3);
    goto LAB25;

LAB26:    t9 = 0;

LAB29:    if (t9 < 4U)
        goto LAB30;
    else
        goto LAB28;

LAB30:    t5 = (t3 + t9);
    t6 = (t2 + t9);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB27;

LAB31:    t9 = (t9 + 1);
    goto LAB29;

LAB32:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 3672);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(104, ng0);
    t7 = (10 * 1000LL);
    t2 = (t0 + 2888);
    xsi_process_wait(t2, t7);

LAB38:    *((char **)t1) = &&LAB39;
    goto LAB1;

LAB33:    goto LAB32;

LAB35:    goto LAB33;

LAB36:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 3672);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(107, ng0);
    t7 = (20 * 1000LL);
    t2 = (t0 + 2888);
    xsi_process_wait(t2, t7);

LAB42:    *((char **)t1) = &&LAB43;
    goto LAB1;

LAB37:    goto LAB36;

LAB39:    goto LAB37;

LAB40:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 6106);
    t8 = 1;
    if (4U == 4U)
        goto LAB46;

LAB47:    t8 = 0;

LAB48:    if (t8 == 0)
        goto LAB44;

LAB45:    xsi_set_current_line(111, ng0);
    t7 = (20 * 1000LL);
    t2 = (t0 + 2888);
    xsi_process_wait(t2, t7);

LAB54:    *((char **)t1) = &&LAB55;
    goto LAB1;

LAB41:    goto LAB40;

LAB43:    goto LAB41;

LAB44:    t10 = (t0 + 6110);
    xsi_report(t10, 38U, (unsigned char)3);
    goto LAB45;

LAB46:    t9 = 0;

LAB49:    if (t9 < 4U)
        goto LAB50;
    else
        goto LAB48;

LAB50:    t5 = (t3 + t9);
    t6 = (t2 + t9);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB47;

LAB51:    t9 = (t9 + 1);
    goto LAB49;

LAB52:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 3672);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(114, ng0);
    t7 = (10 * 1000LL);
    t2 = (t0 + 2888);
    xsi_process_wait(t2, t7);

LAB58:    *((char **)t1) = &&LAB59;
    goto LAB1;

LAB53:    goto LAB52;

LAB55:    goto LAB53;

LAB56:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 3672);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(117, ng0);
    t7 = (20 * 1000LL);
    t2 = (t0 + 2888);
    xsi_process_wait(t2, t7);

LAB62:    *((char **)t1) = &&LAB63;
    goto LAB1;

LAB57:    goto LAB56;

LAB59:    goto LAB57;

LAB60:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 6148);
    t8 = 1;
    if (4U == 4U)
        goto LAB66;

LAB67:    t8 = 0;

LAB68:    if (t8 == 0)
        goto LAB64;

LAB65:    xsi_set_current_line(121, ng0);
    t7 = (20 * 1000LL);
    t2 = (t0 + 2888);
    xsi_process_wait(t2, t7);

LAB74:    *((char **)t1) = &&LAB75;
    goto LAB1;

LAB61:    goto LAB60;

LAB63:    goto LAB61;

LAB64:    t10 = (t0 + 6152);
    xsi_report(t10, 35U, (unsigned char)3);
    goto LAB65;

LAB66:    t9 = 0;

LAB69:    if (t9 < 4U)
        goto LAB70;
    else
        goto LAB68;

LAB70:    t5 = (t3 + t9);
    t6 = (t2 + t9);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB67;

LAB71:    t9 = (t9 + 1);
    goto LAB69;

LAB72:    xsi_set_current_line(123, ng0);
    t2 = (t0 + 3544);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(125, ng0);
    t7 = (20 * 1000LL);
    t2 = (t0 + 2888);
    xsi_process_wait(t2, t7);

LAB78:    *((char **)t1) = &&LAB79;
    goto LAB1;

LAB73:    goto LAB72;

LAB75:    goto LAB73;

LAB76:    xsi_set_current_line(126, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t2 = (t0 + 6187);
    t8 = 1;
    if (4U == 4U)
        goto LAB82;

LAB83:    t8 = 0;

LAB84:    if (t8 == 0)
        goto LAB80;

LAB81:    xsi_set_current_line(129, ng0);
    t7 = (20 * 1000LL);
    t2 = (t0 + 2888);
    xsi_process_wait(t2, t7);

LAB90:    *((char **)t1) = &&LAB91;
    goto LAB1;

LAB77:    goto LAB76;

LAB79:    goto LAB77;

LAB80:    t10 = (t0 + 6191);
    xsi_report(t10, 27U, (unsigned char)3);
    goto LAB81;

LAB82:    t9 = 0;

LAB85:    if (t9 < 4U)
        goto LAB86;
    else
        goto LAB84;

LAB86:    t5 = (t3 + t9);
    t6 = (t2 + t9);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB83;

LAB87:    t9 = (t9 + 1);
    goto LAB85;

LAB88:    xsi_set_current_line(131, ng0);
    if ((unsigned char)0 == 0)
        goto LAB92;

LAB93:    xsi_set_current_line(132, ng0);
    t2 = (t0 + 6238);
    xsi_report(t2, 25U, (unsigned char)3);
    goto LAB2;

LAB89:    goto LAB88;

LAB91:    goto LAB89;

LAB92:    t2 = (t0 + 6218);
    xsi_report(t2, 19U, 2);
    goto LAB93;

}


extern void work_a_1845477273_2372691052_init()
{
	static char *pe[] = {(void *)work_a_1845477273_2372691052_p_0,(void *)work_a_1845477273_2372691052_p_1};
	xsi_register_didat("work_a_1845477273_2372691052", "isim/ACC_tb_isim_beh.exe.sim/work/a_1845477273_2372691052.didat");
	xsi_register_executes(pe);
}
