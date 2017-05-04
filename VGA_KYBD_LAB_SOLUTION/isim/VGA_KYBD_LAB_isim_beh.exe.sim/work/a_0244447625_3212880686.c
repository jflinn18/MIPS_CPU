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
static const char *ng0 = "C:/Users/rsexton17/Desktop/VGA_KYBD_LAB_SOLUTION/vga.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_0244447625_3212880686_p_0(char *t0)
{
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
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 4968);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(49, ng0);
    t4 = (t0 + 2152U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t9);
    t4 = (t0 + 5080);
    t11 = (t4 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t10;
    xsi_driver_first_trans_fast(t4);
    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

}

static void work_a_0244447625_3212880686_p_1(char *t0)
{
    char t12[16];
    char t13[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    int t9;
    int t10;
    char *t11;
    char *t14;
    char *t15;
    unsigned int t16;
    char *t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2112U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 4984);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(58, ng0);
    t4 = (t0 + 2928U);
    t8 = *((char **)t4);
    t9 = *((int *)t8);
    t10 = (t9 + 1);
    t4 = (t0 + 2928U);
    t11 = *((char **)t4);
    t4 = (t11 + 0);
    *((int *)t4) = t10;
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 2928U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    t1 = (t9 == 25000000);
    if (t1 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 2152U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2632U);
    t5 = *((char **)t2);
    t2 = (t0 + 8640U);
    t8 = (t0 + 8732);
    t14 = (t13 + 0U);
    t15 = (t14 + 0U);
    *((int *)t15) = 0;
    t15 = (t14 + 4U);
    *((int *)t15) = 2;
    t15 = (t14 + 8U);
    *((int *)t15) = 1;
    t10 = (2 - 0);
    t16 = (t10 * 1);
    t16 = (t16 + 1);
    t15 = (t14 + 12U);
    *((unsigned int *)t15) = t16;
    t15 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t12, t5, t2, t8, t13);
    t17 = (t12 + 12U);
    t16 = *((unsigned int *)t17);
    t18 = (1U * t16);
    t3 = (3U != t18);
    if (t3 == 1)
        goto LAB11;

LAB12:    t19 = (t0 + 5144);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t15, 3U);
    xsi_driver_first_trans_fast(t19);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 2928U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((int *)t2) = 0;
    goto LAB9;

LAB11:    xsi_size_not_matching(3U, t18, 0);
    goto LAB12;

}

static void work_a_0244447625_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    int t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    unsigned char t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    unsigned char t13;
    char *t14;
    unsigned char t15;
    unsigned char t16;
    char *t17;
    int t18;
    unsigned char t19;
    char *t20;
    int t21;
    unsigned char t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;

LAB0:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t4 = (t3 - 144);
    t1 = (t0 + 3048U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = t4;
    xsi_set_current_line(75, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t4 = (t3 - 31);
    t1 = (t0 + 3168U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = t4;
    xsi_set_current_line(76, ng0);
    t1 = (t0 + 2112U);
    t7 = xsi_signal_has_event(t1);
    if (t7 == 1)
        goto LAB5;

LAB6:    t6 = (unsigned char)0;

LAB7:    if (t6 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 5000);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 3048U);
    t12 = *((char **)t2);
    t3 = *((int *)t12);
    t13 = (t3 > 50);
    if (t13 == 1)
        goto LAB14;

LAB15:    t11 = (unsigned char)0;

LAB16:    if (t11 == 1)
        goto LAB11;

LAB12:    t10 = (unsigned char)0;

LAB13:    if (t10 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(87, ng0);
    t1 = (t0 + 8738);
    t5 = (t0 + 5208);
    t12 = (t5 + 56U);
    t14 = *((char **)t12);
    t17 = (t14 + 56U);
    t20 = *((char **)t17);
    memcpy(t20, t1, 3U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(88, ng0);
    t1 = (t0 + 8741);
    t5 = (t0 + 5272);
    t12 = (t5 + 56U);
    t14 = *((char **)t12);
    t17 = (t14 + 56U);
    t20 = *((char **)t17);
    memcpy(t20, t1, 3U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(89, ng0);
    t1 = (t0 + 8744);
    t5 = (t0 + 5336);
    t12 = (t5 + 56U);
    t14 = *((char **)t12);
    t17 = (t14 + 56U);
    t20 = *((char **)t17);
    memcpy(t20, t1, 3U);
    xsi_driver_first_trans_fast_port(t5);

LAB9:    xsi_set_current_line(99, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t7 = (t3 > 0);
    if (t7 == 1)
        goto LAB23;

LAB24:    t6 = (unsigned char)0;

LAB25:    if (t6 != 0)
        goto LAB20;

LAB22:    xsi_set_current_line(102, ng0);
    t1 = (t0 + 5400);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t12 = (t5 + 56U);
    t14 = *((char **)t12);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);

LAB21:    xsi_set_current_line(111, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t7 = (t3 > 0);
    if (t7 == 1)
        goto LAB29;

LAB30:    t6 = (unsigned char)0;

LAB31:    if (t6 != 0)
        goto LAB26;

LAB28:    xsi_set_current_line(114, ng0);
    t1 = (t0 + 5464);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t12 = (t5 + 56U);
    t14 = *((char **)t12);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);

LAB27:    xsi_set_current_line(117, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t4 = (t3 + 1);
    t1 = (t0 + 5528);
    t5 = (t1 + 56U);
    t12 = *((char **)t5);
    t14 = (t12 + 56U);
    t17 = *((char **)t14);
    *((int *)t17) = t4;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(118, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t6 = (t3 == 800);
    if (t6 != 0)
        goto LAB32;

LAB34:
LAB33:    xsi_set_current_line(123, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t6 = (t3 == 521);
    if (t6 != 0)
        goto LAB35;

LAB37:
LAB36:    goto LAB3;

LAB5:    t2 = (t0 + 2152U);
    t5 = *((char **)t2);
    t8 = *((unsigned char *)t5);
    t9 = (t8 == (unsigned char)3);
    t6 = t9;
    goto LAB7;

LAB8:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 1192U);
    t23 = *((char **)t2);
    t24 = (7 - 2);
    t25 = (t24 * 1U);
    t26 = (0 + t25);
    t2 = (t23 + t26);
    t27 = (t0 + 5208);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    memcpy(t31, t2, 3U);
    xsi_driver_first_trans_fast_port(t27);
    xsi_set_current_line(83, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 5272);
    t5 = (t1 + 56U);
    t12 = *((char **)t5);
    t14 = (t12 + 56U);
    t17 = *((char **)t14);
    memcpy(t17, t2, 3U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(84, ng0);
    t1 = (t0 + 8735);
    t5 = (t0 + 5336);
    t12 = (t5 + 56U);
    t14 = *((char **)t12);
    t17 = (t14 + 56U);
    t20 = *((char **)t17);
    memcpy(t20, t1, 3U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB9;

LAB11:    t2 = (t0 + 3168U);
    t17 = *((char **)t2);
    t18 = *((int *)t17);
    t19 = (t18 > 200);
    if (t19 == 1)
        goto LAB17;

LAB18:    t16 = (unsigned char)0;

LAB19:    t10 = t16;
    goto LAB13;

LAB14:    t2 = (t0 + 3048U);
    t14 = *((char **)t2);
    t4 = *((int *)t14);
    t15 = (t4 < 200);
    t11 = t15;
    goto LAB16;

LAB17:    t2 = (t0 + 3168U);
    t20 = *((char **)t2);
    t21 = *((int *)t20);
    t22 = (t21 < 300);
    t16 = t22;
    goto LAB19;

LAB20:    xsi_set_current_line(100, ng0);
    t1 = (t0 + 5400);
    t12 = (t1 + 56U);
    t14 = *((char **)t12);
    t17 = (t14 + 56U);
    t20 = *((char **)t17);
    *((unsigned char *)t20) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB21;

LAB23:    t1 = (t0 + 2312U);
    t5 = *((char **)t1);
    t4 = *((int *)t5);
    t8 = (t4 < 97);
    t6 = t8;
    goto LAB25;

LAB26:    xsi_set_current_line(112, ng0);
    t1 = (t0 + 5464);
    t12 = (t1 + 56U);
    t14 = *((char **)t12);
    t17 = (t14 + 56U);
    t20 = *((char **)t17);
    *((unsigned char *)t20) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB27;

LAB29:    t1 = (t0 + 2472U);
    t5 = *((char **)t1);
    t4 = *((int *)t5);
    t8 = (t4 < 3);
    t6 = t8;
    goto LAB31;

LAB32:    xsi_set_current_line(119, ng0);
    t1 = (t0 + 2472U);
    t5 = *((char **)t1);
    t4 = *((int *)t5);
    t18 = (t4 + 1);
    t1 = (t0 + 5592);
    t12 = (t1 + 56U);
    t14 = *((char **)t12);
    t17 = (t14 + 56U);
    t20 = *((char **)t17);
    *((int *)t20) = t18;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(120, ng0);
    t1 = (t0 + 5528);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t12 = (t5 + 56U);
    t14 = *((char **)t12);
    *((int *)t14) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB33;

LAB35:    xsi_set_current_line(124, ng0);
    t1 = (t0 + 5592);
    t5 = (t1 + 56U);
    t12 = *((char **)t5);
    t14 = (t12 + 56U);
    t17 = *((char **)t14);
    *((int *)t17) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB36;

}


extern void work_a_0244447625_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0244447625_3212880686_p_0,(void *)work_a_0244447625_3212880686_p_1,(void *)work_a_0244447625_3212880686_p_2};
	xsi_register_didat("work_a_0244447625_3212880686", "isim/VGA_KYBD_LAB_isim_beh.exe.sim/work/a_0244447625_3212880686.didat");
	xsi_register_executes(pe);
}
