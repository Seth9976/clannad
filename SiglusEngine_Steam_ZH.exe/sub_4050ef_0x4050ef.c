// 函数: sub_4050ef
// 地址: 0x4050ef
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t esi
int32_t var_6c = esi
int32_t edi
int32_t var_70 = edi
int32_t eax
eax.b = arg6 != 0
int32_t edx
edx.b = arg5 != 0
int32_t edx_1
edx_1.b = arg4 != 0
int32_t* var_78_1
int32_t* var_74_2
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
        j_sub_4026d0(&var_60, 0, arg4)
    case 2
        j_sub_4026d0(&var_60, 0, arg5)
    case 3
        var_74_2 = arg4
        var_78_1 = arg5
    label_4051bb:
        j_sub_4021aa(&var_60, var_78_1, var_74_2)
        j_sub_4026d0(&var_60, 0, &var_60)
    case 4
        j_sub_4026d0(&var_60, 0, arg6)
    case 5
        var_74_2 = arg4
    label_4051a2:
        var_78_1 = arg6
        goto label_4051bb
    case 6
        var_74_2 = arg5
        goto label_4051a2
    case 7
        j_sub_4021aa(&var_60, arg6, arg5)
        var_74_2 = arg4
        var_78_1 = &var_60
        goto label_4051bb

float* result
float* result_1
int32_t* var_74_4

if (arg3 == 0)
    result = arg1
    var_74_4 = &var_60
    result_1 = arg2
else
    long double x87_r7_17 = float.t(*arg3)
    
    if (*arg3 s< 0)
        x87_r7_17 = x87_r7_17 + fconvert.t(4.2949673e+09f)
    
    long double x87_r6_1 = float.t(arg3[2])
    
    if (arg3[2] s< 0)
        x87_r6_1 = x87_r6_1 + fconvert.t(4.2949673e+09f)
    
    long double x87_r7_19 = (fconvert.t(*arg2) - x87_r7_17) / x87_r6_1
    result = arg1
    *result = fconvert.s(x87_r7_19 + x87_r7_19 - fconvert.t(1f))
    long double x87_r7_22 = float.t(arg3[1])
    
    if (arg3[1] s< 0)
        x87_r7_22 = x87_r7_22 + fconvert.t(4.2949673e+09f)
    
    long double x87_r6_2 = float.t(arg3[3])
    
    if (arg3[3] s< 0)
        x87_r6_2 = x87_r6_2 + fconvert.t(4.2949673e+09f)
    
    long double x87_r7_24 = (fconvert.t(arg2[1]) - x87_r7_22) / x87_r6_2
    result[1] = fconvert.s(fneg(x87_r7_24 + x87_r7_24 - fconvert.t(1f)))
    var_74_4 = &var_60
    result_1 = result
    result[2] = fconvert.s((fconvert.t(arg2[2]) - fconvert.t(arg3[4]))
        / (fconvert.t(arg3[5]) - fconvert.t(arg3[4])))
j_sub_4018cf(result)
return result
