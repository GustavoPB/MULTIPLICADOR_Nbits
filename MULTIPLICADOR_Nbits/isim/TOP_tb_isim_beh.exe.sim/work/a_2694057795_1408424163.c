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
static const char *ng0 = "C:/Users/Guss/Documents/GitHub/MULTIPLICADOR_Nbits/MULTIPLICADOR_Nbits/TOP.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_2507238156_503743352(char *, unsigned char , unsigned char );


static void work_a_2694057795_1408424163_p_0(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned char t8;
    char *t9;
    char *t10;
    int t11;
    int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned char t16;
    unsigned char t17;
    unsigned char t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    xsi_set_current_line(212, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = (4 - 1);
    t4 = (t3 - 3);
    t5 = (t4 * -1);
    t6 = (1U * t5);
    t7 = (0 + t6);
    t1 = (t2 + t7);
    t8 = *((unsigned char *)t1);
    t9 = (t0 + 1672U);
    t10 = *((char **)t9);
    t11 = (4 - 1);
    t12 = (t11 - 3);
    t13 = (t12 * -1);
    t14 = (1U * t13);
    t15 = (0 + t14);
    t9 = (t10 + t15);
    t16 = *((unsigned char *)t9);
    t17 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t8, t16);
    t18 = (t17 == (unsigned char)3);
    if (t18 != 0)
        goto LAB3;

LAB4:
LAB5:    t24 = (t0 + 5752);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    *((unsigned char *)t28) = (unsigned char)2;
    xsi_driver_first_trans_fast(t24);

LAB2:    t29 = (t0 + 5672);
    *((int *)t29) = 1;

LAB1:    return;
LAB3:    t19 = (t0 + 5752);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    *((unsigned char *)t23) = (unsigned char)3;
    xsi_driver_first_trans_fast(t19);
    goto LAB2;

LAB6:    goto LAB2;

}


extern void work_a_2694057795_1408424163_init()
{
	static char *pe[] = {(void *)work_a_2694057795_1408424163_p_0};
	xsi_register_didat("work_a_2694057795_1408424163", "isim/TOP_tb_isim_beh.exe.sim/work/a_2694057795_1408424163.didat");
	xsi_register_executes(pe);
}
