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
static const char *ng0 = "C:/Users/samin/OneDrive/Desktop/319221442/319221442/FSM116949733/FSM_MEALY/MEALY_M.vhd";



static void work_a_2392055535_3212880686_p_0(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 4040);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(52, ng0);
    t7 = (t0 + 2312U);
    t8 = *((char **)t7);
    t9 = *((unsigned char *)t8);
    t7 = (t0 + 4136);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t9;
    xsi_driver_first_trans_fast(t7);
    goto LAB3;

LAB5:    t2 = (t0 + 992U);
    t6 = xsi_signal_has_event(t2);
    t1 = t6;
    goto LAB7;

}

static void work_a_2392055535_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned char t14;
    unsigned char t15;
    unsigned char t16;
    unsigned char t17;
    unsigned char t18;
    unsigned char t19;
    unsigned char t20;
    unsigned char t21;
    char *t22;
    static char *nl0[] = {&&LAB3, &&LAB4, &&LAB5};

LAB0:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (char *)((nl0) + t3);
    goto **((char **)t1);

LAB2:    t1 = (t0 + 4056);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(60, ng0);
    t4 = (t0 + 1192U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    if (t7 != 0)
        goto LAB6;

LAB8:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 6946);
    t4 = (t0 + 4200);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 2U);
    xsi_driver_first_trans_fast_port(t4);

LAB7:    goto LAB2;

LAB4:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t7 = *((unsigned char *)t2);
    t14 = (t7 == (unsigned char)3);
    if (t14 == 1)
        goto LAB15;

LAB16:    t6 = (unsigned char)0;

LAB17:    if (t6 == 1)
        goto LAB12;

LAB13:    t3 = (unsigned char)0;

LAB14:    if (t3 != 0)
        goto LAB9;

LAB11:    xsi_set_current_line(72, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t7 = (t6 == (unsigned char)3);
    if (t7 == 1)
        goto LAB21;

LAB22:    t3 = (unsigned char)0;

LAB23:    if (t3 != 0)
        goto LAB18;

LAB20:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t6 = *((unsigned char *)t2);
    t7 = (t6 == (unsigned char)3);
    if (t7 == 1)
        goto LAB33;

LAB34:    t3 = (unsigned char)0;

LAB35:    if (t3 != 0)
        goto LAB30;

LAB32:    xsi_set_current_line(80, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t6 = (t3 == (unsigned char)2);
    if (t6 != 0)
        goto LAB42;

LAB44:
LAB43:
LAB31:
LAB19:
LAB10:    goto LAB2;

LAB5:    xsi_set_current_line(93, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t14 = *((unsigned char *)t2);
    t15 = (t14 == (unsigned char)2);
    if (t15 == 1)
        goto LAB54;

LAB55:    t1 = (t0 + 1352U);
    t4 = *((char **)t1);
    t16 = *((unsigned char *)t4);
    t17 = (t16 == (unsigned char)2);
    t7 = t17;

LAB56:    if (t7 == 1)
        goto LAB51;

LAB52:    t1 = (t0 + 1832U);
    t5 = *((char **)t1);
    t18 = *((unsigned char *)t5);
    t19 = (t18 == (unsigned char)3);
    t6 = t19;

LAB53:    if (t6 == 1)
        goto LAB48;

LAB49:    t1 = (t0 + 1672U);
    t8 = *((char **)t1);
    t20 = *((unsigned char *)t8);
    t21 = (t20 == (unsigned char)3);
    t3 = t21;

LAB50:    if (t3 != 0)
        goto LAB45;

LAB47:    xsi_set_current_line(100, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t14 = *((unsigned char *)t2);
    t15 = (t14 == (unsigned char)3);
    if (t15 == 1)
        goto LAB66;

LAB67:    t7 = (unsigned char)0;

LAB68:    if (t7 == 1)
        goto LAB63;

LAB64:    t6 = (unsigned char)0;

LAB65:    if (t6 == 1)
        goto LAB60;

LAB61:    t3 = (unsigned char)0;

LAB62:    if (t3 != 0)
        goto LAB57;

LAB59:
LAB58:
LAB46:    goto LAB2;

LAB6:    xsi_set_current_line(61, ng0);
    t4 = (t0 + 6944);
    t9 = (t0 + 4200);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t4, 2U);
    xsi_driver_first_trans_fast_port(t9);
    xsi_set_current_line(62, ng0);
    t1 = (t0 + 4264);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    *((unsigned char *)t8) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB7;

LAB9:    xsi_set_current_line(69, ng0);
    t1 = (t0 + 6948);
    t9 = (t0 + 4200);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t1, 2U);
    xsi_driver_first_trans_fast_port(t9);
    xsi_set_current_line(70, ng0);
    t1 = (t0 + 4264);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB10;

LAB12:    t1 = (t0 + 1512U);
    t5 = *((char **)t1);
    t17 = *((unsigned char *)t5);
    t18 = (t17 == (unsigned char)3);
    t3 = t18;
    goto LAB14;

LAB15:    t1 = (t0 + 1352U);
    t4 = *((char **)t1);
    t15 = *((unsigned char *)t4);
    t16 = (t15 == (unsigned char)3);
    t6 = t16;
    goto LAB17;

LAB18:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 6950);
    t10 = (t0 + 4200);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t22 = *((char **)t13);
    memcpy(t22, t1, 2U);
    xsi_driver_first_trans_fast_port(t10);
    xsi_set_current_line(74, ng0);
    t1 = (t0 + 4264);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    *((unsigned char *)t8) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB19;

LAB21:    t1 = (t0 + 1352U);
    t4 = *((char **)t1);
    t15 = *((unsigned char *)t4);
    t16 = (t15 == (unsigned char)2);
    if (t16 == 1)
        goto LAB24;

LAB25:    t14 = (unsigned char)0;

LAB26:    t3 = t14;
    goto LAB23;

LAB24:    t1 = (t0 + 1512U);
    t5 = *((char **)t1);
    t18 = *((unsigned char *)t5);
    t19 = (t18 == (unsigned char)2);
    if (t19 == 1)
        goto LAB27;

LAB28:    t1 = (t0 + 1512U);
    t8 = *((char **)t1);
    t20 = *((unsigned char *)t8);
    t21 = (t20 == (unsigned char)3);
    t17 = t21;

LAB29:    t14 = t17;
    goto LAB26;

LAB27:    t17 = (unsigned char)1;
    goto LAB29;

LAB30:    xsi_set_current_line(77, ng0);
    t1 = (t0 + 6952);
    t10 = (t0 + 4200);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t22 = *((char **)t13);
    memcpy(t22, t1, 2U);
    xsi_driver_first_trans_fast_port(t10);
    xsi_set_current_line(78, ng0);
    t1 = (t0 + 4264);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    *((unsigned char *)t8) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB31;

LAB33:    t1 = (t0 + 1512U);
    t4 = *((char **)t1);
    t15 = *((unsigned char *)t4);
    t16 = (t15 == (unsigned char)2);
    if (t16 == 1)
        goto LAB36;

LAB37:    t14 = (unsigned char)0;

LAB38:    t3 = t14;
    goto LAB35;

LAB36:    t1 = (t0 + 1352U);
    t5 = *((char **)t1);
    t18 = *((unsigned char *)t5);
    t19 = (t18 == (unsigned char)2);
    if (t19 == 1)
        goto LAB39;

LAB40:    t1 = (t0 + 1352U);
    t8 = *((char **)t1);
    t20 = *((unsigned char *)t8);
    t21 = (t20 == (unsigned char)3);
    t17 = t21;

LAB41:    t14 = t17;
    goto LAB38;

LAB39:    t17 = (unsigned char)1;
    goto LAB41;

LAB42:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 4264);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(82, ng0);
    t1 = (t0 + 6954);
    t4 = (t0 + 4200);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 2U);
    xsi_driver_first_trans_fast_port(t4);
    goto LAB43;

LAB45:    xsi_set_current_line(94, ng0);
    t1 = (t0 + 6956);
    t10 = (t0 + 4200);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t22 = *((char **)t13);
    memcpy(t22, t1, 2U);
    xsi_driver_first_trans_fast_port(t10);
    xsi_set_current_line(95, ng0);
    t1 = (t0 + 4264);
    t2 = (t1 + 56U);
    t4 = *((char **)t2);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB46;

LAB48:    t3 = (unsigned char)1;
    goto LAB50;

LAB51:    t6 = (unsigned char)1;
    goto LAB53;

LAB54:    t7 = (unsigned char)1;
    goto LAB56;

LAB57:    xsi_set_current_line(101, ng0);
    t1 = (t0 + 6958);
    t10 = (t0 + 4200);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t22 = *((char **)t13);
    memcpy(t22, t1, 2U);
    xsi_driver_first_trans_fast_port(t10);
    goto LAB58;

LAB60:    t1 = (t0 + 1672U);
    t8 = *((char **)t1);
    t20 = *((unsigned char *)t8);
    t21 = (t20 == (unsigned char)2);
    t3 = t21;
    goto LAB62;

LAB63:    t1 = (t0 + 1832U);
    t5 = *((char **)t1);
    t18 = *((unsigned char *)t5);
    t19 = (t18 == (unsigned char)2);
    t6 = t19;
    goto LAB65;

LAB66:    t1 = (t0 + 1352U);
    t4 = *((char **)t1);
    t16 = *((unsigned char *)t4);
    t17 = (t16 == (unsigned char)3);
    t7 = t17;
    goto LAB68;

}


extern void work_a_2392055535_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2392055535_3212880686_p_0,(void *)work_a_2392055535_3212880686_p_1};
	xsi_register_didat("work_a_2392055535_3212880686", "isim/TB_isim_beh.exe.sim/work/a_2392055535_3212880686.didat");
	xsi_register_executes(pe);
}
