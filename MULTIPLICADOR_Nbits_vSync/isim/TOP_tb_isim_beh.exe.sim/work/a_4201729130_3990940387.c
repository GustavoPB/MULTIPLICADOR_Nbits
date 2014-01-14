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
static const char *ng0 = "C:/Users/Guss/Desktop/TRABAJO SED/MULTIPLICADOR_Nbits/LSR.vhd";
extern char *IEEE_P_2592010699;



static void work_a_4201729130_3990940387_p_0(char *t0)
{
    char t13[16];
    char t25[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    unsigned int t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    int t21;
    int t22;
    unsigned int t23;
    unsigned int t24;
    int t26;
    unsigned int t27;

LAB0:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t11 = (t4 == (unsigned char)3);
    if (t11 == 1)
        goto LAB7;

LAB8:    t3 = (unsigned char)0;

LAB9:    if (t3 != 0)
        goto LAB5;

LAB6:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t11 = (t4 == (unsigned char)3);
    if (t11 == 1)
        goto LAB14;

LAB15:    t3 = (unsigned char)0;

LAB16:    if (t3 != 0)
        goto LAB12;

LAB13:
LAB3:    t1 = (t0 + 3928);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(49, ng0);
    t1 = xsi_get_transient_memory(8U);
    memset(t1, 0, 8U);
    t5 = t1;
    memset(t5, (unsigned char)2, 8U);
    t6 = (t0 + 4024);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(51, ng0);
    t5 = (t0 + 1832U);
    t6 = *((char **)t5);
    t5 = (t0 + 1032U);
    t7 = *((char **)t5);
    t8 = ((IEEE_P_2592010699) + 4024);
    t9 = (t0 + 6260U);
    t10 = (t0 + 6212U);
    t5 = xsi_base_array_concat(t5, t13, t8, (char)97, t6, t9, (char)97, t7, t10, (char)101);
    t14 = (4U + 4U);
    t15 = (8U != t14);
    if (t15 == 1)
        goto LAB10;

LAB11:    t16 = (t0 + 4024);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t5, 8U);
    xsi_driver_first_trans_fast(t16);
    goto LAB3;

LAB7:    t1 = (t0 + 1152U);
    t12 = xsi_signal_has_event(t1);
    t3 = t12;
    goto LAB9;

LAB10:    xsi_size_not_matching(8U, t14, 0);
    goto LAB11;

LAB12:    xsi_set_current_line(53, ng0);
    t5 = (t0 + 1672U);
    t6 = *((char **)t5);
    t21 = (2 * 4);
    t22 = (t21 - 2);
    t14 = (7 - t22);
    t23 = (t14 * 1U);
    t24 = (0 + t23);
    t5 = (t6 + t24);
    t8 = ((IEEE_P_2592010699) + 4024);
    t9 = (t25 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 6;
    t10 = (t9 + 4U);
    *((int *)t10) = 0;
    t10 = (t9 + 8U);
    *((int *)t10) = -1;
    t26 = (0 - 6);
    t27 = (t26 * -1);
    t27 = (t27 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t27;
    t7 = xsi_base_array_concat(t7, t13, t8, (char)97, t5, t25, (char)99, (unsigned char)2, (char)101);
    t27 = (7U + 1U);
    t15 = (8U != t27);
    if (t15 == 1)
        goto LAB17;

LAB18:    t10 = (t0 + 4024);
    t16 = (t10 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t7, 8U);
    xsi_driver_first_trans_fast(t10);
    goto LAB3;

LAB14:    t1 = (t0 + 1312U);
    t12 = xsi_signal_has_event(t1);
    t3 = t12;
    goto LAB16;

LAB17:    xsi_size_not_matching(8U, t27, 0);
    goto LAB18;

}

static void work_a_4201729130_3990940387_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(57, ng0);

LAB3:    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t2 = t1;
    memset(t2, (unsigned char)2, 4U);
    t3 = (t0 + 4088);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 4U);
    xsi_driver_first_trans_fast(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_4201729130_3990940387_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(58, ng0);

LAB3:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 4152);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 3944);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_4201729130_3990940387_init()
{
	static char *pe[] = {(void *)work_a_4201729130_3990940387_p_0,(void *)work_a_4201729130_3990940387_p_1,(void *)work_a_4201729130_3990940387_p_2};
	xsi_register_didat("work_a_4201729130_3990940387", "isim/TOP_tb_isim_beh.exe.sim/work/a_4201729130_3990940387.didat");
	xsi_register_executes(pe);
}
