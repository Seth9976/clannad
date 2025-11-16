// 函数: sub_40528e
// 地址: 0x40528e
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t esi
int32_t var_bc = esi
int32_t edi
int32_t var_c0 = edi
int32_t eax
eax.b = arg8 != 0
int32_t edx
edx.b = arg7 != 0
int32_t edx_1
edx_1.b = arg6 != 0
int32_t* var_c8_1
int32_t* var_c4_2
float var_60

switch ((eax << 1 | edx) << 1 | edx_1)
    case 0
        float var_28_1 = fconvert.s(float.t(0))
        float var_2c_1 = fconvert.s(float.t(0))
        float var_30_1 = fconvert.s(float.t(0))
        float var_34_1 = fconvert.s(float.t(0))
        float var_3c_1 = fconvert.s(float.t(0))
        float var_40_1 = fconvert.s(float.t(0))
        float var_44_1 = fconvert.s(float.t(0))
        float var_48_1 = fconvert.s(float.t(0))
        float var_50_1 = fconvert.s(float.t(0))
        float var_54_1 = fconvert.s(float.t(0))
        float var_58_1 = fconvert.s(float.t(0))
        float var_5c_1 = fconvert.s(float.t(0))
        float var_24_1 = fconvert.s(float.t(1))
        float var_38_1 = fconvert.s(float.t(1))
        float var_4c_1 = fconvert.s(float.t(1))
        var_60 = fconvert.s(float.t(1))
    case 1
        j_sub_4026d0(&var_60, 0, arg6)
    case 2
        j_sub_4026d0(&var_60, 0, arg7)
    case 3
        var_c4_2 = arg6
        var_c8_1 = arg7
    label_40535d:
        j_sub_4021aa(&var_60, var_c8_1, var_c4_2)
        j_sub_4026d0(&var_60, 0, &var_60)
    case 4
        j_sub_4026d0(&var_60, 0, arg8)
    case 5
        var_c4_2 = arg6
    label_405344:
        var_c8_1 = arg8
        goto label_40535d
    case 6
        var_c4_2 = arg7
        goto label_405344
    case 7
        j_sub_4021aa(&var_60, arg8, arg7)
        var_c4_2 = arg6
        var_c8_1 = &var_60
        goto label_40535d

if (arg5 != 0)
    long double x87_r7_17 = float.t(arg5[2])
    
    if (arg5[2] s< 0)
        x87_r7_17 = x87_r7_17 + fconvert.t(4.2949673e+09f)
    
    long double x87_r7_18 = fconvert.t(2f) / x87_r7_17
    long double x87_r6_1 = float.t(arg5[3])
    
    if (arg5[3] s< 0)
        x87_r6_1 = x87_r6_1 + fconvert.t(4.2949673e+09f)
    
    long double x87_r6_2 = fconvert.t(2f) / x87_r6_1
    bool cond:1_1 = *arg5 s>= 0
    long double x87_r5_1 = fconvert.t(1f)
    long double x87_r4_3 = x87_r5_1 / (fconvert.t(arg5[5]) - fconvert.t(arg5[4]))
    float var_14_1 = fconvert.s(x87_r4_3)
    float var_b0 = fconvert.s(x87_r7_18)
    float var_ac_1 = fconvert.s(float.t(0))
    float var_a8_1 = fconvert.s(float.t(0))
    float var_a4_1 = fconvert.s(float.t(0))
    float var_a0_1 = fconvert.s(float.t(0))
    float var_9c_1 = fconvert.s(fneg(x87_r6_2))
    float var_98_1 = fconvert.s(float.t(0))
    float var_94_1 = fconvert.s(float.t(0))
    float var_90_1 = fconvert.s(float.t(0))
    float var_8c_1 = fconvert.s(float.t(0))
    float var_88_1 = fconvert.s(x87_r4_3)
    float var_84_1 = fconvert.s(float.t(0))
    long double x87_r4_5 = float.t(*arg5)
    
    if (not(cond:1_1))
        x87_r4_5 = x87_r4_5 + fconvert.t(4.2949673e+09f)
    
    float var_80_1 = fconvert.s(fneg(x87_r4_5 * x87_r7_18) - x87_r5_1)
    long double x87_r4_9 = float.t(arg5[1])
    
    if (arg5[1] s< 0)
        x87_r4_9 = x87_r4_9 + fconvert.t(4.2949673e+09f)
    
    float var_7c_1 = fconvert.s(x87_r4_9 * x87_r6_2 + x87_r5_1)
    float var_78_1 = fconvert.s(fneg(fconvert.t(var_14_1) * fconvert.t(arg5[4])))
    float var_74_1 = fconvert.s(float.t(1))
    j_sub_4021aa(&var_60, &var_b0, &var_60)

int32_t var_c4_5 = arg9
int32_t* var_c8_4 = &var_60
j_sub_4018e8(arg1, arg2, arg3, arg4)
