// 函数: sub_404d78
// 地址: 0x404d78
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t esi
int32_t var_6c = esi
int32_t edi
int32_t var_70 = edi
int32_t eax
eax.b = arg6 != 0
float var_60
int32_t* esi_1 = &var_60
int32_t ecx_1
ecx_1.b = arg5 != 0
int32_t edx
edx.b = arg4 != 0

switch ((eax << 1 | ecx_1) << 1 | edx)
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
        esi_1 = arg4
    case 2
        esi_1 = arg5
    case 3
        j_sub_4021aa(&var_60, arg5, arg4)
    case 4
        esi_1 = arg6
    case 5
        j_sub_4021aa(&var_60, arg6, arg4)
    case 6
        j_sub_4021aa(&var_60, arg6, arg5)
    case 7
        j_sub_4021aa(&var_60, arg6, arg5)
        j_sub_4021aa(&var_60, &var_60, arg4)

int32_t* var_74_3 = esi_1
int32_t var_78_3 = arg2
j_sub_4018cf(arg1)

if (arg3 != 0)
    long double x87_r6_1 = float.t(arg3[2])
    
    if (arg3[2] s< 0)
        x87_r6_1 = x87_r6_1 + fconvert.t(4.2949673e+09f)
    
    long double x87_r6_2 = float.t(*arg3)
    
    if (*arg3 s< 0)
        x87_r6_2 = x87_r6_2 + fconvert.t(4.2949673e+09f)
    
    *arg1 =
        fconvert.s((fconvert.t(*arg1) + fconvert.t(1f)) * x87_r6_1 * fconvert.t(0.5f) + x87_r6_2)
    long double x87_r6_3 = float.t(arg3[3])
    
    if (arg3[3] s< 0)
        x87_r6_3 = x87_r6_3 + fconvert.t(4.2949673e+09f)
    
    long double x87_r6_4 = float.t(arg3[1])
    
    if (arg3[1] s< 0)
        x87_r6_4 = x87_r6_4 + fconvert.t(4.2949673e+09f)
    
    arg1[1] =
        fconvert.s((float.t(1) - fconvert.t(arg1[1])) * x87_r6_3 * fconvert.t(0.5f) + x87_r6_4)
    arg1[2] = fconvert.s((fconvert.t(arg3[5]) - fconvert.t(arg3[4])) * fconvert.t(arg1[2])
        + fconvert.t(arg3[4]))

return arg1
