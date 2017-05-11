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
static const char *ng0 = "C:/Users/jflinn18/Desktop/MIPS_CPU/MIPS_CPU_FPGA_AND_SIM_V4/mips_controller.vhd";
extern char *IEEE_P_2592010699;



static void work_a_1208337864_3708392848_p_0(char *t0)
{
    char t5[16];
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(44, ng0);

LAB3:    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t4 = *((unsigned char *)t3);
    t6 = ((IEEE_P_2592010699) + 4024);
    t7 = (t0 + 8216U);
    t1 = xsi_base_array_concat(t1, t5, t6, (char)97, t2, t7, (char)99, t4, (char)101);
    t8 = (2U + 1U);
    t9 = (3U != t8);
    if (t9 == 1)
        goto LAB5;

LAB6:    t10 = (t0 + 4936);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 3U);
    xsi_driver_first_trans_fast(t10);

LAB2:    t15 = (t0 + 4840);
    *((int *)t15) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(3U, t8, 0);
    goto LAB6;

}

static void work_a_1208337864_3708392848_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(47, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t1 = (t0 + 8277);
    t4 = xsi_mem_cmp(t1, t2, 3U);
    if (t4 == 1)
        goto LAB3;

LAB6:    t5 = (t0 + 8280);
    t7 = xsi_mem_cmp(t5, t2, 3U);
    if (t7 == 1)
        goto LAB4;

LAB7:
LAB5:    xsi_set_current_line(50, ng0);
    t1 = (t0 + 5000);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t1 = (t0 + 4856);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(48, ng0);
    t8 = (t0 + 5000);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t8);
    goto LAB2;

LAB4:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 5000);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB8:;
}


extern void work_a_1208337864_3708392848_init()
{
	static char *pe[] = {(void *)work_a_1208337864_3708392848_p_0,(void *)work_a_1208337864_3708392848_p_1};
	xsi_register_didat("work_a_1208337864_3708392848", "isim/testbench_isim_beh.exe.sim/work/a_1208337864_3708392848.didat");
	xsi_register_executes(pe);
}
