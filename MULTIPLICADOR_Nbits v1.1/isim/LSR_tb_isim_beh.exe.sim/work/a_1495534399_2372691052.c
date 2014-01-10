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
static const char *ng0 = "C:/Users/wortenmajadahonda/Documents/UPM/SED Sist Electronicos Digitales/MULTIPLICADOR_Nbits/LSR_tb.vhd";



static void work_a_1495534399_2372691052_p_0(char *t0)
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
    unsigned int t11;

LAB0:    t1 = (t0 + 2672U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 5474);
    t4 = (t0 + 3056);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(77, ng0);
    t9 = (10 * 1000LL);
    t2 = (t0 + 2480);
    xsi_process_wait(t2, t9);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 3120);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(80, ng0);
    t9 = (20 * 1000LL);
    t2 = (t0 + 2480);
    xsi_process_wait(t2, t9);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5478);
    t10 = 1;
    if (8U == 8U)
        goto LAB14;

LAB15:    t10 = 0;

LAB16:    if (t10 == 0)
        goto LAB12;

LAB13:    xsi_set_current_line(85, ng0);
    t9 = (20 * 1000LL);
    t2 = (t0 + 2480);
    xsi_process_wait(t2, t9);

LAB22:    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    t7 = (t0 + 5486);
    xsi_report(t7, 30U, (unsigned char)3);
    goto LAB13;

LAB14:    t11 = 0;

LAB17:    if (t11 < 8U)
        goto LAB18;
    else
        goto LAB16;

LAB18:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB15;

LAB19:    t11 = (t11 + 1);
    goto LAB17;

LAB20:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 3184);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(88, ng0);
    t9 = (20 * 1000LL);
    t2 = (t0 + 2480);
    xsi_process_wait(t2, t9);

LAB26:    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB21:    goto LAB20;

LAB23:    goto LAB21;

LAB24:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 3184);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5516);
    t10 = 1;
    if (8U == 8U)
        goto LAB30;

LAB31:    t10 = 0;

LAB32:    if (t10 == 0)
        goto LAB28;

LAB29:    xsi_set_current_line(95, ng0);
    t9 = (20 * 1000LL);
    t2 = (t0 + 2480);
    xsi_process_wait(t2, t9);

LAB38:    *((char **)t1) = &&LAB39;
    goto LAB1;

LAB25:    goto LAB24;

LAB27:    goto LAB25;

LAB28:    t7 = (t0 + 5524);
    xsi_report(t7, 11U, (unsigned char)1);
    goto LAB29;

LAB30:    t11 = 0;

LAB33:    if (t11 < 8U)
        goto LAB34;
    else
        goto LAB32;

LAB34:    t5 = (t3 + t11);
    t6 = (t2 + t11);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB31;

LAB35:    t11 = (t11 + 1);
    goto LAB33;

LAB36:    xsi_set_current_line(97, ng0);
    if ((unsigned char)0 == 0)
        goto LAB40;

LAB41:    goto LAB2;

LAB37:    goto LAB36;

LAB39:    goto LAB37;

LAB40:    t2 = (t0 + 5535);
    xsi_report(t2, 12U, (unsigned char)3);
    goto LAB41;

}


extern void work_a_1495534399_2372691052_init()
{
	static char *pe[] = {(void *)work_a_1495534399_2372691052_p_0};
	xsi_register_didat("work_a_1495534399_2372691052", "isim/LSR_tb_isim_beh.exe.sim/work/a_1495534399_2372691052.didat");
	xsi_register_executes(pe);
}
