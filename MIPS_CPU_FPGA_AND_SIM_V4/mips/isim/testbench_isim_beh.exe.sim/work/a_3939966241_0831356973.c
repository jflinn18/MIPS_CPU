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
static const char *ng0 = "C:/Users/jflinn18/Desktop/MIPS_CPU/MIPS_CPU_FPGA_AND_SIM_V4/mips_mem.vhd";
extern char *IEEE_P_1242562249;

int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);


static void work_a_3939966241_0831356973_p_0(char *t0)
{
    char t16[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    int t21;
    int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;

LAB0:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 3720);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(58, ng0);
    t4 = (t0 + 1192U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(58, ng0);
    t4 = (t0 + 1672U);
    t11 = *((char **)t4);
    t4 = (t0 + 1512U);
    t12 = *((char **)t4);
    t13 = (31 - 4);
    t14 = (t13 * 1U);
    t15 = (0 + t14);
    t4 = (t12 + t15);
    t17 = (t16 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = 4;
    t18 = (t17 + 4U);
    *((int *)t18) = 2;
    t18 = (t17 + 8U);
    *((int *)t18) = -1;
    t19 = (2 - 4);
    t20 = (t19 * -1);
    t20 = (t20 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t20;
    t21 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t4, t16);
    t22 = (t21 - 7);
    t20 = (t22 * -1);
    t23 = (32U * t20);
    t24 = (0U + t23);
    t18 = (t0 + 3816);
    t25 = (t18 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t11, 32U);
    xsi_driver_first_trans_delta(t18, t24, 32U, 0LL);
    goto LAB9;

}

static void work_a_3939966241_0831356973_p_1(char *t0)
{
    char t6[16];
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    int t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    unsigned int t21;

LAB0:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = (31 - 4);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 4;
    t8 = (t7 + 4U);
    *((int *)t8) = 2;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t9 = (2 - 4);
    t10 = (t9 * -1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t11 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t1, t6);
    t12 = (t11 == 0);
    if (t12 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 1352U);
    t7 = *((char **)t1);
    t3 = (31 - 4);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t7 + t5);
    t8 = (t6 + 0U);
    t13 = (t8 + 0U);
    *((int *)t13) = 4;
    t13 = (t8 + 4U);
    *((int *)t13) = 2;
    t13 = (t8 + 8U);
    *((int *)t13) = -1;
    t9 = (2 - 4);
    t10 = (t9 * -1);
    t10 = (t10 + 1);
    t13 = (t8 + 12U);
    *((unsigned int *)t13) = t10;
    t11 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t1, t6);
    t19 = (t11 - 7);
    t10 = (t19 * -1);
    xsi_vhdl_check_range_of_index(7, 0, -1, t11);
    t20 = (32U * t10);
    t21 = (0 + t20);
    t13 = (t2 + t21);
    t14 = (t0 + 3880);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t13, 32U);
    xsi_driver_first_trans_fast_port(t14);

LAB3:    t1 = (t0 + 3736);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(63, ng0);
    t8 = (t0 + 6862);
    t14 = (t0 + 3880);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t8, 32U);
    xsi_driver_first_trans_fast_port(t14);
    goto LAB3;

}


extern void work_a_3939966241_0831356973_init()
{
	static char *pe[] = {(void *)work_a_3939966241_0831356973_p_0,(void *)work_a_3939966241_0831356973_p_1};
	xsi_register_didat("work_a_3939966241_0831356973", "isim/testbench_isim_beh.exe.sim/work/a_3939966241_0831356973.didat");
	xsi_register_executes(pe);
}
