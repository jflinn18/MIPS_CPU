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
static const char *ng0 = "C:/Users/rsexton17/Desktop/VGA_KYBD_LAB_SOLUTION/XSA_LIB/ps2_kbd.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_2545490612_503743352(char *, unsigned char , unsigned char );


static void work_a_3844346534_1446275585_p_0(char *t0)
{
    char t9[16];
    char t11[16];
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    unsigned char t8;
    char *t10;
    char *t12;
    char *t13;
    int t14;
    unsigned int t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(101, ng0);

LAB3:    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t3 = (5 - 4);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 1352U);
    t7 = *((char **)t6);
    t8 = *((unsigned char *)t7);
    t10 = ((IEEE_P_2592010699) + 4024);
    t12 = (t11 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 4;
    t13 = (t12 + 4U);
    *((int *)t13) = 1;
    t13 = (t12 + 8U);
    *((int *)t13) = -1;
    t14 = (1 - 4);
    t15 = (t14 * -1);
    t15 = (t15 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t15;
    t6 = xsi_base_array_concat(t6, t9, t10, (char)97, t1, t11, (char)99, t8, (char)101);
    t15 = (4U + 1U);
    t16 = (5U != t15);
    if (t16 == 1)
        goto LAB5;

LAB6:    t13 = (t0 + 12120);
    t17 = (t13 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t6, 5U);
    xsi_driver_first_trans_fast(t13);

LAB2:    t21 = (t0 + 11768);
    *((int *)t21) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(5U, t15, 0);
    goto LAB6;

}

static void work_a_3844346534_1446275585_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    unsigned char t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned char t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(104, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t3 = (5 - 5);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 19449);
    t8 = 1;
    if (4U == 4U)
        goto LAB5;

LAB6:    t8 = 0;

LAB7:    if (t8 != 0)
        goto LAB3;

LAB4:
LAB11:    t19 = (t0 + 5888U);
    t20 = *((char **)t19);
    t21 = *((unsigned char *)t20);
    t19 = (t0 + 12184);
    t22 = (t19 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    *((unsigned char *)t25) = t21;
    xsi_driver_first_trans_fast(t19);

LAB2:    t26 = (t0 + 11784);
    *((int *)t26) = 1;

LAB1:    return;
LAB3:    t12 = (t0 + 5768U);
    t13 = *((char **)t12);
    t14 = *((unsigned char *)t13);
    t12 = (t0 + 12184);
    t15 = (t12 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = t14;
    xsi_driver_first_trans_fast(t12);
    goto LAB2;

LAB5:    t9 = 0;

LAB8:    if (t9 < 4U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t10 = (t1 + t9);
    t11 = (t6 + t9);
    if (*((unsigned char *)t10) != *((unsigned char *)t11))
        goto LAB6;

LAB10:    t9 = (t9 + 1);
    goto LAB8;

LAB12:    goto LAB2;

}

static void work_a_3844346534_1446275585_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    unsigned char t8;
    unsigned int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned char t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(105, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t3 = (5 - 5);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 19453);
    t8 = 1;
    if (4U == 4U)
        goto LAB5;

LAB6:    t8 = 0;

LAB7:    if (t8 != 0)
        goto LAB3;

LAB4:
LAB11:    t19 = (t0 + 5888U);
    t20 = *((char **)t19);
    t21 = *((unsigned char *)t20);
    t19 = (t0 + 12248);
    t22 = (t19 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    *((unsigned char *)t25) = t21;
    xsi_driver_first_trans_fast(t19);

LAB2:    t26 = (t0 + 11800);
    *((int *)t26) = 1;

LAB1:    return;
LAB3:    t12 = (t0 + 5768U);
    t13 = *((char **)t12);
    t14 = *((unsigned char *)t13);
    t12 = (t0 + 12248);
    t15 = (t12 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = t14;
    xsi_driver_first_trans_fast(t12);
    goto LAB2;

LAB5:    t9 = 0;

LAB8:    if (t9 < 4U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t10 = (t1 + t9);
    t11 = (t6 + t9);
    if (*((unsigned char *)t10) != *((unsigned char *)t11))
        goto LAB6;

LAB10:    t9 = (t9 + 1);
    goto LAB8;

LAB12:    goto LAB2;

}

static void work_a_3844346534_1446275585_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(106, ng0);

LAB3:    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 3592U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_2545490612_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 12312);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast(t1);

LAB2:    t11 = (t0 + 11816);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3844346534_1446275585_p_4(char *t0)
{
    char t14[16];
    char t16[16];
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    unsigned char t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t15;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    unsigned char t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    xsi_set_current_line(109, ng0);
    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5768U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = (t3 == t5);
    if (t6 != 0)
        goto LAB3;

LAB4:
LAB7:    t26 = (t0 + 4232U);
    t27 = *((char **)t26);
    t26 = (t0 + 12376);
    t28 = (t26 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    memcpy(t31, t27, 10U);
    xsi_driver_first_trans_fast(t26);

LAB2:    t32 = (t0 + 11832);
    *((int *)t32) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 1512U);
    t7 = *((char **)t1);
    t8 = *((unsigned char *)t7);
    t1 = (t0 + 4232U);
    t9 = *((char **)t1);
    t10 = (9 - 9);
    t11 = (t10 * 1U);
    t12 = (0 + t11);
    t1 = (t9 + t12);
    t15 = ((IEEE_P_2592010699) + 4024);
    t17 = (t16 + 0U);
    t18 = (t17 + 0U);
    *((int *)t18) = 9;
    t18 = (t17 + 4U);
    *((int *)t18) = 1;
    t18 = (t17 + 8U);
    *((int *)t18) = -1;
    t19 = (1 - 9);
    t20 = (t19 * -1);
    t20 = (t20 + 1);
    t18 = (t17 + 12U);
    *((unsigned int *)t18) = t20;
    t13 = xsi_base_array_concat(t13, t14, t15, (char)99, t8, (char)97, t1, t16, (char)101);
    t20 = (1U + 9U);
    t21 = (10U != t20);
    if (t21 == 1)
        goto LAB5;

LAB6:    t18 = (t0 + 12376);
    t22 = (t18 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t13, 10U);
    xsi_driver_first_trans_fast(t18);
    goto LAB2;

LAB5:    xsi_size_not_matching(10U, t20, 0);
    goto LAB6;

LAB8:    goto LAB2;

}

static void work_a_3844346534_1446275585_p_5(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    int t13;
    int t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    xsi_set_current_line(112, ng0);
    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5768U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = (t3 == t5);
    if (t6 != 0)
        goto LAB3;

LAB4:
LAB5:    t11 = (t0 + 2632U);
    t12 = *((char **)t11);
    t13 = *((int *)t12);
    t14 = (t13 + 1);
    t11 = (t0 + 12440);
    t15 = (t11 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((int *)t18) = t14;
    xsi_driver_first_trans_fast(t11);

LAB2:    t19 = (t0 + 11848);
    *((int *)t19) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 12440);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((int *)t10) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_3844346534_1446275585_p_6(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    int t6;
    unsigned char t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    char *t16;
    unsigned char t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    unsigned char t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 2632U);
    t3 = *((char **)t2);
    t4 = *((int *)t3);
    t2 = (t0 + 6128U);
    t5 = *((char **)t2);
    t6 = *((int *)t5);
    t7 = (t4 == t6);
    if (t7 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t22 = (t0 + 5888U);
    t23 = *((char **)t22);
    t24 = *((unsigned char *)t23);
    t22 = (t0 + 12504);
    t25 = (t22 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    *((unsigned char *)t28) = t24;
    xsi_driver_first_trans_fast(t22);

LAB2:    t29 = (t0 + 11864);
    *((int *)t29) = 1;

LAB1:    return;
LAB3:    t15 = (t0 + 5768U);
    t16 = *((char **)t15);
    t17 = *((unsigned char *)t16);
    t15 = (t0 + 12504);
    t18 = (t15 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = t17;
    xsi_driver_first_trans_fast(t15);
    goto LAB2;

LAB5:    t2 = (t0 + 3272U);
    t8 = *((char **)t2);
    t9 = (2 - 5);
    t10 = (t9 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t2 = (t8 + t12);
    t13 = *((unsigned char *)t2);
    t14 = (t13 == (unsigned char)3);
    t1 = t14;
    goto LAB7;

LAB9:    goto LAB2;

}

static void work_a_3844346534_1446275585_p_7(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    int t8;
    int t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned char t14;
    char *t15;
    char *t16;
    unsigned char t17;
    char *t18;
    unsigned char t19;
    unsigned char t20;
    char *t21;
    unsigned char t22;
    char *t23;
    unsigned char t24;
    unsigned char t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    xsi_set_current_line(120, ng0);
    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5768U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = (t3 == t5);
    if (t6 != 0)
        goto LAB3;

LAB4:    t15 = (t0 + 3912U);
    t16 = *((char **)t15);
    t17 = *((unsigned char *)t16);
    t15 = (t0 + 5768U);
    t18 = *((char **)t15);
    t19 = *((unsigned char *)t18);
    t20 = (t17 == t19);
    if (t20 == 1)
        goto LAB7;

LAB8:    t15 = (t0 + 5352U);
    t21 = *((char **)t15);
    t22 = *((unsigned char *)t21);
    t15 = (t0 + 5768U);
    t23 = *((char **)t15);
    t24 = *((unsigned char *)t23);
    t25 = (t22 == t24);
    t14 = t25;

LAB9:    if (t14 != 0)
        goto LAB5;

LAB6:
LAB10:    t30 = (t0 + 2952U);
    t31 = *((char **)t30);
    t32 = *((int *)t31);
    t30 = (t0 + 12568);
    t33 = (t30 + 56U);
    t34 = *((char **)t33);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    *((int *)t36) = t32;
    xsi_driver_first_trans_fast(t30);

LAB2:    t37 = (t0 + 11880);
    *((int *)t37) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 2952U);
    t7 = *((char **)t1);
    t8 = *((int *)t7);
    t9 = (t8 + 1);
    t1 = (t0 + 12568);
    t10 = (t1 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((int *)t13) = t9;
    xsi_driver_first_trans_fast(t1);
    goto LAB2;

LAB5:    t15 = (t0 + 12568);
    t26 = (t15 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    *((int *)t29) = 0;
    xsi_driver_first_trans_fast(t15);
    goto LAB2;

LAB7:    t14 = (unsigned char)1;
    goto LAB9;

LAB11:    goto LAB2;

}

static void work_a_3844346534_1446275585_p_8(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    int t4;
    unsigned char t5;
    char *t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned char t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 2952U);
    t3 = *((char **)t2);
    t4 = *((int *)t3);
    t5 = (t4 == 11);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t17 = (t0 + 5888U);
    t18 = *((char **)t17);
    t19 = *((unsigned char *)t18);
    t17 = (t0 + 12632);
    t20 = (t17 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    *((unsigned char *)t23) = t19;
    xsi_driver_first_trans_fast(t17);

LAB2:    t24 = (t0 + 11896);
    *((int *)t24) = 1;

LAB1:    return;
LAB3:    t2 = (t0 + 5768U);
    t11 = *((char **)t2);
    t12 = *((unsigned char *)t11);
    t2 = (t0 + 12632);
    t13 = (t2 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t12;
    xsi_driver_first_trans_fast(t2);
    goto LAB2;

LAB5:    t2 = (t0 + 3912U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t2 = (t0 + 5768U);
    t8 = *((char **)t2);
    t9 = *((unsigned char *)t8);
    t10 = (t7 == t9);
    t1 = t10;
    goto LAB7;

LAB9:    goto LAB2;

}

static void work_a_3844346534_1446275585_p_9(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    char *t8;
    char *t9;
    unsigned char t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned char t15;
    char *t16;
    unsigned char t17;
    unsigned char t18;
    char *t19;
    unsigned char t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned char t25;
    char *t26;
    char *t27;
    unsigned char t28;
    char *t29;
    unsigned char t30;
    unsigned char t31;
    char *t32;
    unsigned char t33;
    char *t34;
    unsigned char t35;
    unsigned char t36;
    char *t37;
    unsigned char t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned char t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;

LAB0:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 4232U);
    t3 = *((char **)t2);
    t4 = (7 - 9);
    t5 = (t4 * -1);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t2 = (t3 + t7);
    t8 = (t0 + 6248U);
    t9 = *((char **)t8);
    t10 = 1;
    if (8U == 8U)
        goto LAB8;

LAB9:    t10 = 0;

LAB10:    if (t10 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t26 = (t0 + 5032U);
    t27 = *((char **)t26);
    t28 = *((unsigned char *)t27);
    t26 = (t0 + 5768U);
    t29 = *((char **)t26);
    t30 = *((unsigned char *)t29);
    t31 = (t28 == t30);
    if (t31 == 1)
        goto LAB16;

LAB17:    t26 = (t0 + 5352U);
    t32 = *((char **)t26);
    t33 = *((unsigned char *)t32);
    t26 = (t0 + 5768U);
    t34 = *((char **)t26);
    t35 = *((unsigned char *)t34);
    t36 = (t33 == t35);
    t25 = t36;

LAB18:    if (t25 != 0)
        goto LAB14;

LAB15:
LAB19:    t43 = (t0 + 4552U);
    t44 = *((char **)t43);
    t45 = *((unsigned char *)t44);
    t43 = (t0 + 12696);
    t46 = (t43 + 56U);
    t47 = *((char **)t46);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    *((unsigned char *)t49) = t45;
    xsi_driver_first_trans_fast(t43);

LAB2:    t50 = (t0 + 11912);
    *((int *)t50) = 1;

LAB1:    return;
LAB3:    t13 = (t0 + 5768U);
    t19 = *((char **)t13);
    t20 = *((unsigned char *)t19);
    t13 = (t0 + 12696);
    t21 = (t13 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    *((unsigned char *)t24) = t20;
    xsi_driver_first_trans_fast(t13);
    goto LAB2;

LAB5:    t13 = (t0 + 4712U);
    t14 = *((char **)t13);
    t15 = *((unsigned char *)t14);
    t13 = (t0 + 5768U);
    t16 = *((char **)t13);
    t17 = *((unsigned char *)t16);
    t18 = (t15 == t17);
    t1 = t18;
    goto LAB7;

LAB8:    t11 = 0;

LAB11:    if (t11 < 8U)
        goto LAB12;
    else
        goto LAB10;

LAB12:    t8 = (t2 + t11);
    t12 = (t9 + t11);
    if (*((unsigned char *)t8) != *((unsigned char *)t12))
        goto LAB9;

LAB13:    t11 = (t11 + 1);
    goto LAB11;

LAB14:    t26 = (t0 + 5888U);
    t37 = *((char **)t26);
    t38 = *((unsigned char *)t37);
    t26 = (t0 + 12696);
    t39 = (t26 + 56U);
    t40 = *((char **)t39);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    *((unsigned char *)t42) = t38;
    xsi_driver_first_trans_fast(t26);
    goto LAB2;

LAB16:    t25 = (unsigned char)1;
    goto LAB18;

LAB20:    goto LAB2;

}

static void work_a_3844346534_1446275585_p_10(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    char *t10;
    unsigned char t11;
    unsigned char t12;
    char *t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned char t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(133, ng0);
    t2 = (t0 + 4552U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t2 = (t0 + 5768U);
    t5 = *((char **)t2);
    t6 = *((unsigned char *)t5);
    t7 = (t4 == t6);
    if (t7 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t19 = (t0 + 5888U);
    t20 = *((char **)t19);
    t21 = *((unsigned char *)t20);
    t19 = (t0 + 12760);
    t22 = (t19 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    *((unsigned char *)t25) = t21;
    xsi_driver_first_trans_fast(t19);

LAB2:    t26 = (t0 + 11928);
    *((int *)t26) = 1;

LAB1:    return;
LAB3:    t2 = (t0 + 5768U);
    t13 = *((char **)t2);
    t14 = *((unsigned char *)t13);
    t2 = (t0 + 12760);
    t15 = (t2 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    *((unsigned char *)t18) = t14;
    xsi_driver_first_trans_fast(t2);
    goto LAB2;

LAB5:    t2 = (t0 + 4712U);
    t8 = *((char **)t2);
    t9 = *((unsigned char *)t8);
    t2 = (t0 + 5768U);
    t10 = *((char **)t2);
    t11 = *((unsigned char *)t10);
    t12 = (t9 == t11);
    t1 = t12;
    goto LAB7;

LAB9:    goto LAB2;

}

static void work_a_3844346534_1446275585_p_11(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    char *t3;
    char *t4;
    int t5;
    char *t6;
    int t7;
    unsigned char t8;
    char *t9;
    int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned char t14;
    unsigned char t15;
    unsigned char t16;
    unsigned char t17;
    char *t18;
    char *t19;
    unsigned char t20;
    char *t21;
    unsigned char t22;
    unsigned char t23;
    char *t24;
    int t25;
    unsigned char t26;
    char *t27;
    int t28;
    unsigned char t29;
    char *t30;
    unsigned char t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned char t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;

LAB0:    xsi_set_current_line(136, ng0);
    t3 = (t0 + 2632U);
    t4 = *((char **)t3);
    t5 = *((int *)t4);
    t3 = (t0 + 6128U);
    t6 = *((char **)t3);
    t7 = *((int *)t6);
    t8 = (t5 == t7);
    if (t8 == 1)
        goto LAB8;

LAB9:    t2 = (unsigned char)0;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t18 = (t0 + 3912U);
    t19 = *((char **)t18);
    t20 = *((unsigned char *)t19);
    t18 = (t0 + 5768U);
    t21 = *((char **)t18);
    t22 = *((unsigned char *)t21);
    t23 = (t20 == t22);
    if (t23 == 1)
        goto LAB14;

LAB15:    t17 = (unsigned char)0;

LAB16:    if (t17 == 1)
        goto LAB11;

LAB12:    t16 = (unsigned char)0;

LAB13:    t1 = t16;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB17:    t36 = (t0 + 5352U);
    t37 = *((char **)t36);
    t38 = *((unsigned char *)t37);
    t36 = (t0 + 12824);
    t39 = (t36 + 56U);
    t40 = *((char **)t39);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    *((unsigned char *)t42) = t38;
    xsi_driver_first_trans_fast(t36);

LAB2:    t43 = (t0 + 11944);
    *((int *)t43) = 1;

LAB1:    return;
LAB3:    t18 = (t0 + 5768U);
    t30 = *((char **)t18);
    t31 = *((unsigned char *)t30);
    t18 = (t0 + 12824);
    t32 = (t18 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    *((unsigned char *)t35) = t31;
    xsi_driver_first_trans_fast(t18);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t3 = (t0 + 3272U);
    t9 = *((char **)t3);
    t10 = (2 - 5);
    t11 = (t10 * -1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t3 = (t9 + t13);
    t14 = *((unsigned char *)t3);
    t15 = (t14 == (unsigned char)2);
    t2 = t15;
    goto LAB10;

LAB11:    t18 = (t0 + 2952U);
    t27 = *((char **)t18);
    t28 = *((int *)t27);
    t29 = (t28 != 0);
    t16 = t29;
    goto LAB13;

LAB14:    t18 = (t0 + 2952U);
    t24 = *((char **)t18);
    t25 = *((int *)t24);
    t26 = (t25 != 11);
    t17 = t26;
    goto LAB16;

LAB18:    goto LAB2;

}

static void work_a_3844346534_1446275585_p_12(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;

LAB0:    xsi_set_current_line(140, ng0);

LAB3:    t1 = (t0 + 4232U);
    t2 = *((char **)t1);
    t3 = (7 - 9);
    t4 = (t3 * -1);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = (t0 + 12888);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 8U);
    xsi_driver_first_trans_fast_port(t7);

LAB2:    t12 = (t0 + 11960);
    *((int *)t12) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3844346534_1446275585_p_13(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    int t4;
    int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(141, ng0);

LAB3:    t1 = (t0 + 4232U);
    t2 = *((char **)t1);
    if (7 > 0)
        goto LAB5;

LAB6:    if (-1 == -1)
        goto LAB10;

LAB11:    t3 = 0;

LAB7:    t4 = (t3 + 1);
    t5 = (t4 - 9);
    t6 = (t5 * -1);
    t7 = (1U * t6);
    t8 = (0 + t7);
    t1 = (t2 + t8);
    t9 = *((unsigned char *)t1);
    t10 = (t0 + 12952);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t9;
    xsi_driver_first_trans_fast_port(t10);

LAB2:    t15 = (t0 + 11976);
    *((int *)t15) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    if (-1 == 1)
        goto LAB8;

LAB9:    t3 = 7;
    goto LAB7;

LAB8:    t3 = 0;
    goto LAB7;

LAB10:    t3 = 7;
    goto LAB7;

}

static void work_a_3844346534_1446275585_p_14(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(142, ng0);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t4 = (t3 != 0);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t11 = (t0 + 5888U);
    t12 = *((char **)t11);
    t13 = *((unsigned char *)t12);
    t11 = (t0 + 13016);
    t14 = (t11 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = t13;
    xsi_driver_first_trans_fast_port(t11);

LAB2:    t18 = (t0 + 11992);
    *((int *)t18) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 5768U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t1 = (t0 + 13016);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_3844346534_1446275585_p_15(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(143, ng0);

LAB3:    t1 = (t0 + 5032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 13080);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 12008);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3844346534_1446275585_p_16(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(144, ng0);

LAB3:    t1 = (t0 + 5352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 13144);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 12024);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3844346534_1446275585_p_17(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    int t13;

LAB0:    xsi_set_current_line(149, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5768U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = (t3 == t5);
    if (t6 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 12040);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(150, ng0);
    t1 = xsi_get_transient_memory(5U);
    memset(t1, 0, 5U);
    t7 = t1;
    memset(t7, (unsigned char)3, 5U);
    t8 = (t0 + 13208);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 5U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(151, ng0);
    t1 = xsi_get_transient_memory(10U);
    memset(t1, 0, 10U);
    t2 = t1;
    memset(t2, (unsigned char)2, 10U);
    t4 = (t0 + 13272);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 10U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(152, ng0);
    t1 = (t0 + 5888U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 13336);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(153, ng0);
    t1 = (t0 + 5888U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 13400);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(154, ng0);
    t1 = (t0 + 13464);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(155, ng0);
    t1 = (t0 + 13528);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = 0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(156, ng0);
    t1 = (t0 + 5888U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 13592);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t3;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(158, ng0);
    t2 = (t0 + 3112U);
    t4 = *((char **)t2);
    t2 = (t0 + 13208);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t4, 5U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(159, ng0);
    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    t1 = (t0 + 13272);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 10U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(160, ng0);
    t1 = (t0 + 4392U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 13336);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(161, ng0);
    t1 = (t0 + 4872U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 13400);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(162, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t13 = *((int *)t2);
    t1 = (t0 + 13464);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((int *)t9) = t13;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(163, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t13 = *((int *)t2);
    t1 = (t0 + 13528);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((int *)t9) = t13;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(164, ng0);
    t1 = (t0 + 5192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 13592);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t3;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

}


extern void work_a_3844346534_1446275585_init()
{
	static char *pe[] = {(void *)work_a_3844346534_1446275585_p_0,(void *)work_a_3844346534_1446275585_p_1,(void *)work_a_3844346534_1446275585_p_2,(void *)work_a_3844346534_1446275585_p_3,(void *)work_a_3844346534_1446275585_p_4,(void *)work_a_3844346534_1446275585_p_5,(void *)work_a_3844346534_1446275585_p_6,(void *)work_a_3844346534_1446275585_p_7,(void *)work_a_3844346534_1446275585_p_8,(void *)work_a_3844346534_1446275585_p_9,(void *)work_a_3844346534_1446275585_p_10,(void *)work_a_3844346534_1446275585_p_11,(void *)work_a_3844346534_1446275585_p_12,(void *)work_a_3844346534_1446275585_p_13,(void *)work_a_3844346534_1446275585_p_14,(void *)work_a_3844346534_1446275585_p_15,(void *)work_a_3844346534_1446275585_p_16,(void *)work_a_3844346534_1446275585_p_17};
	xsi_register_didat("work_a_3844346534_1446275585", "isim/VGA_KYBD_LAB_isim_beh.exe.sim/work/a_3844346534_1446275585.didat");
	xsi_register_executes(pe);
}
