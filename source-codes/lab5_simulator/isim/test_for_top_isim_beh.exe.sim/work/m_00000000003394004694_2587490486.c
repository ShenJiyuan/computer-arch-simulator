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
static const char *ng0 = "E:/1/lab5_simulator/Alu.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {6U, 0U};
static int ng6[] = {1, 0};
static unsigned int ng7[] = {7U, 0U};
static unsigned int ng8[] = {12U, 0U};



static void Always_33_0(char *t0)
{
    char t14[8];
    char t41[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    int t13;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 3328);
    *((int *)t2) = 1;
    t3 = (t0 + 3040);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(34, ng0);

LAB5:    xsi_set_current_line(35, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 1528U);
    t3 = *((char **)t2);

LAB10:    t2 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t13 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng3)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t13 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t13 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng5)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t13 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng7)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t13 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t13 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t13 == 1)
        goto LAB21;

LAB22:
LAB23:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(36, ng0);

LAB9:    xsi_set_current_line(37, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1928);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 1);
    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB8;

LAB11:    xsi_set_current_line(43, ng0);

LAB24:    xsi_set_current_line(44, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 1368U);
    t11 = *((char **)t4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 & t7);
    *((unsigned int *)t14) = t8;
    t4 = (t5 + 4);
    t12 = (t11 + 4);
    t15 = (t14 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t12);
    t16 = (t9 | t10);
    *((unsigned int *)t15) = t16;
    t17 = *((unsigned int *)t15);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB25;

LAB26:
LAB27:    t39 = (t0 + 2088);
    xsi_vlogvar_assign_value(t39, t14, 0, 0, 32);
    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB23;

LAB13:    xsi_set_current_line(49, ng0);

LAB28:    xsi_set_current_line(50, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 1368U);
    t11 = *((char **)t4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 | t7);
    *((unsigned int *)t14) = t8;
    t4 = (t5 + 4);
    t12 = (t11 + 4);
    t15 = (t14 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t12);
    t16 = (t9 | t10);
    *((unsigned int *)t15) = t16;
    t17 = *((unsigned int *)t15);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB29;

LAB30:
LAB31:    t39 = (t0 + 2088);
    xsi_vlogvar_assign_value(t39, t14, 0, 0, 32);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB23;

LAB15:    xsi_set_current_line(55, ng0);

LAB32:    xsi_set_current_line(56, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 1368U);
    t11 = *((char **)t4);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t5, 32, t11, 32);
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t14, 0, 0, 32);
    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB23;

LAB17:    xsi_set_current_line(61, ng0);

LAB33:    xsi_set_current_line(62, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 1368U);
    t11 = *((char **)t4);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 32, t5, 32, t11, 32);
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t14, 0, 0, 32);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2088);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t11 = ((char*)((ng1)));
    memset(t14, 0, 8);
    t12 = (t5 + 4);
    t15 = (t11 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t12);
    t10 = *((unsigned int *)t15);
    t16 = (t9 ^ t10);
    t17 = (t8 | t16);
    t18 = *((unsigned int *)t12);
    t19 = *((unsigned int *)t15);
    t20 = (t18 | t19);
    t23 = (~(t20));
    t24 = (t17 & t23);
    if (t24 != 0)
        goto LAB37;

LAB34:    if (t20 != 0)
        goto LAB36;

LAB35:    *((unsigned int *)t14) = 1;

LAB37:    t22 = (t14 + 4);
    t25 = *((unsigned int *)t22);
    t26 = (~(t25));
    t27 = *((unsigned int *)t14);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB38;

LAB39:    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);

LAB40:    goto LAB23;

LAB19:    xsi_set_current_line(70, ng0);

LAB41:    xsi_set_current_line(71, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 1368U);
    t11 = *((char **)t4);
    memset(t14, 0, 8);
    t4 = (t5 + 4);
    if (*((unsigned int *)t4) != 0)
        goto LAB43;

LAB42:    t12 = (t11 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB43;

LAB46:    if (*((unsigned int *)t5) < *((unsigned int *)t11))
        goto LAB44;

LAB45:    t21 = (t14 + 4);
    t6 = *((unsigned int *)t21);
    t7 = (~(t6));
    t8 = *((unsigned int *)t14);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 32);

LAB49:    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB23;

LAB21:    xsi_set_current_line(79, ng0);

LAB50:    xsi_set_current_line(80, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 1368U);
    t11 = *((char **)t4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t11);
    t8 = (t6 | t7);
    *((unsigned int *)t41) = t8;
    t4 = (t5 + 4);
    t12 = (t11 + 4);
    t15 = (t41 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t12);
    t16 = (t9 | t10);
    *((unsigned int *)t15) = t16;
    t17 = *((unsigned int *)t15);
    t18 = (t17 != 0);
    if (t18 == 1)
        goto LAB51;

LAB52:
LAB53:    memset(t14, 0, 8);
    t39 = (t14 + 4);
    t40 = (t41 + 4);
    t35 = *((unsigned int *)t41);
    t36 = (~(t35));
    *((unsigned int *)t14) = t36;
    *((unsigned int *)t39) = 0;
    if (*((unsigned int *)t40) != 0)
        goto LAB55;

LAB54:    t44 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t44 & 4294967295U);
    t45 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t45 & 4294967295U);
    t46 = (t0 + 2088);
    xsi_vlogvar_assign_value(t46, t14, 0, 0, 32);
    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 1928);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 1);
    goto LAB23;

LAB25:    t19 = *((unsigned int *)t14);
    t20 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t19 | t20);
    t21 = (t5 + 4);
    t22 = (t11 + 4);
    t23 = *((unsigned int *)t5);
    t24 = (~(t23));
    t25 = *((unsigned int *)t21);
    t26 = (~(t25));
    t27 = *((unsigned int *)t11);
    t28 = (~(t27));
    t29 = *((unsigned int *)t22);
    t30 = (~(t29));
    t31 = (t24 & t26);
    t32 = (t28 & t30);
    t33 = (~(t31));
    t34 = (~(t32));
    t35 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t35 & t33);
    t36 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t36 & t34);
    t37 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t37 & t33);
    t38 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t38 & t34);
    goto LAB27;

LAB29:    t19 = *((unsigned int *)t14);
    t20 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t19 | t20);
    t21 = (t5 + 4);
    t22 = (t11 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t5);
    t31 = (t25 & t24);
    t26 = *((unsigned int *)t22);
    t27 = (~(t26));
    t28 = *((unsigned int *)t11);
    t32 = (t28 & t27);
    t29 = (~(t31));
    t30 = (~(t32));
    t33 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t33 & t29);
    t34 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t34 & t30);
    goto LAB31;

LAB36:    t21 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB37;

LAB38:    xsi_set_current_line(64, ng0);
    t39 = ((char*)((ng6)));
    t40 = (t0 + 1928);
    xsi_vlogvar_assign_value(t40, t39, 0, 0, 1);
    goto LAB40;

LAB43:    t15 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB45;

LAB44:    *((unsigned int *)t14) = 1;
    goto LAB45;

LAB47:    xsi_set_current_line(72, ng0);
    t22 = ((char*)((ng6)));
    t39 = (t0 + 2088);
    xsi_vlogvar_assign_value(t39, t22, 0, 0, 32);
    goto LAB49;

LAB51:    t19 = *((unsigned int *)t41);
    t20 = *((unsigned int *)t15);
    *((unsigned int *)t41) = (t19 | t20);
    t21 = (t5 + 4);
    t22 = (t11 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t5);
    t31 = (t25 & t24);
    t26 = *((unsigned int *)t22);
    t27 = (~(t26));
    t28 = *((unsigned int *)t11);
    t32 = (t28 & t27);
    t29 = (~(t31));
    t30 = (~(t32));
    t33 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t33 & t29);
    t34 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t34 & t30);
    goto LAB53;

LAB55:    t37 = *((unsigned int *)t14);
    t38 = *((unsigned int *)t40);
    *((unsigned int *)t14) = (t37 | t38);
    t42 = *((unsigned int *)t39);
    t43 = *((unsigned int *)t40);
    *((unsigned int *)t39) = (t42 | t43);
    goto LAB54;

}


extern void work_m_00000000003394004694_2587490486_init()
{
	static char *pe[] = {(void *)Always_33_0};
	xsi_register_didat("work_m_00000000003394004694_2587490486", "isim/test_for_top_isim_beh.exe.sim/work/m_00000000003394004694_2587490486.didat");
	xsi_register_executes(pe);
}
