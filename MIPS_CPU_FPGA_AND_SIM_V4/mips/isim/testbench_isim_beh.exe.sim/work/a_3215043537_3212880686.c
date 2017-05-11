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
static const char *ng0 = "C:/Users/jflinn18/Desktop/MIPS_CPU/MIPS_CPU_FPGA_AND_SIM_V4/vga.vhd";
extern char *IEEE_P_1242562249;
extern char *IEEE_P_2592010699;

char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );


static void work_a_3215043537_3212880686_p_0(char *t0)
{
    char t5[16];
    char t13[16];
    char t17[16];
    char t19[16];
    char *t1;
    char *t2;
    int t3;
    int t4;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    int t14;
    unsigned int t15;
    char *t16;
    char *t18;
    char *t20;
    char *t21;
    int t22;
    unsigned int t23;
    unsigned char t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;

LAB0:    xsi_set_current_line(32, ng0);
    t1 = (t0 + 5292);
    *((int *)t1) = 0;
    t2 = (t0 + 5296);
    *((int *)t2) = 7;
    t3 = 0;
    t4 = 7;

LAB2:    if (t3 <= t4)
        goto LAB3;

LAB5:    t1 = (t0 + 3152);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(33, ng0);
    t6 = (t0 + 5292);
    t7 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t5, *((int *)t6), 3);
    t8 = (t0 + 3232);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t7, 3U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(34, ng0);
    t1 = (t0 + 5300);
    t6 = (t0 + 1672U);
    t7 = *((char **)t6);
    t8 = ((IEEE_P_2592010699) + 4024);
    t9 = (t13 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 0;
    t10 = (t9 + 4U);
    *((int *)t10) = 26;
    t10 = (t9 + 8U);
    *((int *)t10) = 1;
    t14 = (26 - 0);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t15;
    t10 = (t0 + 5200U);
    t6 = xsi_base_array_concat(t6, t5, t8, (char)97, t1, t13, (char)97, t7, t10, (char)101);
    t11 = (t0 + 5327);
    t18 = ((IEEE_P_2592010699) + 4024);
    t20 = (t19 + 0U);
    t21 = (t20 + 0U);
    *((int *)t21) = 0;
    t21 = (t20 + 4U);
    *((int *)t21) = 1;
    t21 = (t20 + 8U);
    *((int *)t21) = 1;
    t22 = (1 - 0);
    t15 = (t22 * 1);
    t15 = (t15 + 1);
    t21 = (t20 + 12U);
    *((unsigned int *)t21) = t15;
    t16 = xsi_base_array_concat(t16, t17, t18, (char)97, t6, t5, (char)97, t11, t19, (char)101);
    t15 = (27U + 3U);
    t23 = (t15 + 2U);
    t24 = (32U != t23);
    if (t24 == 1)
        goto LAB6;

LAB7:    t21 = (t0 + 3296);
    t25 = (t21 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t16, 32U);
    xsi_driver_first_trans_fast(t21);

LAB4:    t1 = (t0 + 5292);
    t3 = *((int *)t1);
    t2 = (t0 + 5296);
    t4 = *((int *)t2);
    if (t3 == t4)
        goto LAB5;

LAB8:    t14 = (t3 + 1);
    t3 = t14;
    t6 = (t0 + 5292);
    *((int *)t6) = t3;
    goto LAB2;

LAB6:    xsi_size_not_matching(32U, t23, 0);
    goto LAB7;

}


extern void work_a_3215043537_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3215043537_3212880686_p_0};
	xsi_register_didat("work_a_3215043537_3212880686", "isim/testbench_isim_beh.exe.sim/work/a_3215043537_3212880686.didat");
	xsi_register_executes(pe);
}
