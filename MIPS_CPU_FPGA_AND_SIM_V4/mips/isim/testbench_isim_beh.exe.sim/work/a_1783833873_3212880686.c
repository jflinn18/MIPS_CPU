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
static const char *ng0 = "C:/Users/jflinn18/Desktop/MIPS_CPU/MIPS_CPU_FPGA_AND_SIM_V4/addrDecoder.vhd";



static void work_a_1783833873_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(44, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(46, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB5;

LAB7:
LAB6:    t1 = (t0 + 3400);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(44, ng0);
    t1 = (t0 + 3496);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(46, ng0);
    t1 = (t0 + 3560);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB6;

}

static void work_a_1783833873_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    int t10;
    char *t11;
    int t13;
    char *t14;
    int t16;
    char *t17;
    int t19;
    char *t20;
    int t22;
    char *t23;
    int t25;
    char *t26;
    char *t27;
    unsigned char t28;
    unsigned char t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;

LAB0:    xsi_set_current_line(51, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5812);
    t4 = xsi_mem_cmp(t1, t2, 32U);
    if (t4 == 1)
        goto LAB3;

LAB12:    t5 = (t0 + 5844);
    t7 = xsi_mem_cmp(t5, t2, 32U);
    if (t7 == 1)
        goto LAB4;

LAB13:    t8 = (t0 + 5876);
    t10 = xsi_mem_cmp(t8, t2, 32U);
    if (t10 == 1)
        goto LAB5;

LAB14:    t11 = (t0 + 5908);
    t13 = xsi_mem_cmp(t11, t2, 32U);
    if (t13 == 1)
        goto LAB6;

LAB15:    t14 = (t0 + 5940);
    t16 = xsi_mem_cmp(t14, t2, 32U);
    if (t16 == 1)
        goto LAB7;

LAB16:    t17 = (t0 + 5972);
    t19 = xsi_mem_cmp(t17, t2, 32U);
    if (t19 == 1)
        goto LAB8;

LAB17:    t20 = (t0 + 6004);
    t22 = xsi_mem_cmp(t20, t2, 32U);
    if (t22 == 1)
        goto LAB9;

LAB18:    t23 = (t0 + 6036);
    t25 = xsi_mem_cmp(t23, t2, 32U);
    if (t25 == 1)
        goto LAB10;

LAB19:
LAB11:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t28 = *((unsigned char *)t2);
    t29 = (t28 == (unsigned char)3);
    if (t29 != 0)
        goto LAB45;

LAB47:
LAB46:
LAB2:    t1 = (t0 + 3416);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(53, ng0);
    t26 = (t0 + 1192U);
    t27 = *((char **)t26);
    t28 = *((unsigned char *)t27);
    t29 = (t28 == (unsigned char)3);
    if (t29 != 0)
        goto LAB21;

LAB23:
LAB22:    goto LAB2;

LAB4:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t28 = *((unsigned char *)t2);
    t29 = (t28 == (unsigned char)3);
    if (t29 != 0)
        goto LAB24;

LAB26:
LAB25:    goto LAB2;

LAB5:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t28 = *((unsigned char *)t2);
    t29 = (t28 == (unsigned char)3);
    if (t29 != 0)
        goto LAB27;

LAB29:
LAB28:    goto LAB2;

LAB6:    xsi_set_current_line(62, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t28 = *((unsigned char *)t2);
    t29 = (t28 == (unsigned char)3);
    if (t29 != 0)
        goto LAB30;

LAB32:
LAB31:    goto LAB2;

LAB7:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t28 = *((unsigned char *)t2);
    t29 = (t28 == (unsigned char)3);
    if (t29 != 0)
        goto LAB33;

LAB35:
LAB34:    goto LAB2;

LAB8:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t28 = *((unsigned char *)t2);
    t29 = (t28 == (unsigned char)3);
    if (t29 != 0)
        goto LAB36;

LAB38:
LAB37:    goto LAB2;

LAB9:    xsi_set_current_line(71, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t28 = *((unsigned char *)t2);
    t29 = (t28 == (unsigned char)3);
    if (t29 != 0)
        goto LAB39;

LAB41:
LAB40:    goto LAB2;

LAB10:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t28 = *((unsigned char *)t2);
    t29 = (t28 == (unsigned char)3);
    if (t29 != 0)
        goto LAB42;

LAB44:
LAB43:    goto LAB2;

LAB20:;
LAB21:    xsi_set_current_line(53, ng0);
    t26 = (t0 + 3624);
    t30 = (t26 + 56U);
    t31 = *((char **)t30);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    *((unsigned char *)t33) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t26);
    goto LAB22;

LAB24:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 3624);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB25;

LAB27:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 3624);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB28;

LAB30:    xsi_set_current_line(62, ng0);
    t1 = (t0 + 3624);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB31;

LAB33:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 3624);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB34;

LAB36:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 3624);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB37;

LAB39:    xsi_set_current_line(71, ng0);
    t1 = (t0 + 3624);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB40;

LAB42:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 3624);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB43;

LAB45:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 3688);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB46;

}


extern void work_a_1783833873_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1783833873_3212880686_p_0,(void *)work_a_1783833873_3212880686_p_1};
	xsi_register_didat("work_a_1783833873_3212880686", "isim/testbench_isim_beh.exe.sim/work/a_1783833873_3212880686.didat");
	xsi_register_executes(pe);
}
