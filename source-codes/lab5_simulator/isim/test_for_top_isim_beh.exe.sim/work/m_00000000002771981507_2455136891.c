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
static const char *ng0 = "E:/1/lab5_simulator/aluCtr.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {63U, 63U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {240U, 112U};
static unsigned int ng5[] = {242U, 112U};
static unsigned int ng6[] = {6U, 0U};
static unsigned int ng7[] = {244U, 112U};
static unsigned int ng8[] = {0U, 0U};
static unsigned int ng9[] = {245U, 112U};
static unsigned int ng10[] = {1U, 0U};
static unsigned int ng11[] = {250U, 112U};
static unsigned int ng12[] = {7U, 0U};
static unsigned int ng13[] = {255U, 191U};



static void Always_30_0(char *t0)
{
    char t13[8];
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
    int t14;

LAB0:    t1 = (t0 + 2688U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 3008);
    *((int *)t2) = 1;
    t3 = (t0 + 2720);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:    xsi_set_current_line(34, ng0);

LAB8:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 1048U);
    t4 = *((char **)t2);
    xsi_vlogtype_concat(t13, 8, 8, 2U, t4, 2, t3, 6);

LAB9:    t2 = ((char*)((ng2)));
    t14 = xsi_vlog_unsigned_case_xcompare(t13, 8, t2, 8);
    if (t14 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng4)));
    t14 = xsi_vlog_unsigned_case_xcompare(t13, 8, t2, 8);
    if (t14 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng5)));
    t14 = xsi_vlog_unsigned_case_xcompare(t13, 8, t2, 8);
    if (t14 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng7)));
    t14 = xsi_vlog_unsigned_case_xcompare(t13, 8, t2, 8);
    if (t14 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng9)));
    t14 = xsi_vlog_unsigned_case_xcompare(t13, 8, t2, 8);
    if (t14 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng11)));
    t14 = xsi_vlog_unsigned_case_xcompare(t13, 8, t2, 8);
    if (t14 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng13)));
    t14 = xsi_vlog_unsigned_case_xcompare(t13, 8, t2, 8);
    if (t14 == 1)
        goto LAB22;

LAB23:
LAB25:
LAB24:    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB26:
LAB7:    goto LAB2;

LAB5:    xsi_set_current_line(32, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1768);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 4);
    goto LAB7;

LAB10:    xsi_set_current_line(36, ng0);
    t5 = ((char*)((ng3)));
    t11 = (t0 + 1768);
    xsi_vlogvar_assign_value(t11, t5, 0, 0, 4);
    goto LAB26;

LAB12:    xsi_set_current_line(37, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB26;

LAB14:    xsi_set_current_line(38, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB26;

LAB16:    xsi_set_current_line(39, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB26;

LAB18:    xsi_set_current_line(40, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB26;

LAB20:    xsi_set_current_line(41, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB26;

LAB22:    xsi_set_current_line(42, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 1768);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB26;

}


extern void work_m_00000000002771981507_2455136891_init()
{
	static char *pe[] = {(void *)Always_30_0};
	xsi_register_didat("work_m_00000000002771981507_2455136891", "isim/test_for_top_isim_beh.exe.sim/work/m_00000000002771981507_2455136891.didat");
	xsi_register_executes(pe);
}
