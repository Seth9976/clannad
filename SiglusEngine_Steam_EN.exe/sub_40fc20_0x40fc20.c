// 函数: sub_40fc20
// 地址: 0x40fc20
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

float var_c = fconvert.s(fconvert.t(3.14159274f) / float.t(arg4))
int32_t* ecx

if (arg6 s> 0)
    int32_t* esi_1 = arg5
    int32_t i_4 = arg6
    int32_t i
    
    do
        long double st0_1
        st0_1, ecx = sub_40fda0(*esi_1)
        *esi_1 = fconvert.s(st0_1)
        esi_1 = &esi_1[1]
        i = i_4
        i_4 -= 1
    while (i != 1)

int32_t esi_2 = 0

if (arg3 s<= 0)
    return 

float ebp_1 = arg2

do
    int32_t i_2 = *(ebp_1 i+ (esi_2 << 2))
    int32_t* var_20_1 = ecx
    arg4 = fconvert.s(sub_40fda0(fconvert.s(float.t(i_2) * fconvert.t(var_c))))
    long double x87_r7_6 = fconvert.t(0.707106769f)
    int32_t* eax_5 = arg5
    int32_t i_3 = arg6 s>> 1
    long double x87_r6_1 = fconvert.t(0.707106769f)
    int32_t i_1
    
    do
        long double x87_r5_2 = fconvert.t(*eax_5) - fconvert.t(arg4)
        eax_5 = &eax_5[2]
        i_1 = i_3
        i_3 -= 1
        x87_r7_6 = x87_r7_6 * x87_r5_2
        x87_r6_1 = x87_r6_1 * (fconvert.t(eax_5[-1]) - fconvert.t(arg4))
    while (i_1 != 1)
    i_3.b = arg6.b
    arg2 = fconvert.s(x87_r6_1)
    long double x87_r6_7
    long double x87_r7_8
    
    if ((i_3.b & 1) == 0)
        x87_r7_8 = x87_r7_6 * (fconvert.t(arg4) + fconvert.t(1f)) * x87_r7_6
        x87_r6_7 = fconvert.t(1f) - fconvert.t(arg4)
    else
        long double x87_r7_7 = x87_r7_6 * (fconvert.t(*eax_5) - fconvert.t(arg4))
        x87_r7_8 = x87_r7_7 * x87_r7_7
        x87_r6_7 = fconvert.t(1f) - fconvert.t(arg4) * fconvert.t(arg4)
    
    int32_t var_4
    long double st0_3 =
        _frexp(fconvert.d(x87_r7_8 + x87_r6_7 * fconvert.t(arg2) * fconvert.t(arg2)), &var_4)
    arg4 = fconvert.s(sub_40fe40(var_4 + arg6))
    long double st0_6 = sub_40fe50(fconvert.s(
        sub_40fdf0(fconvert.s(st0_3)) * fconvert.t(arg4) * fconvert.t(arg7) - fconvert.t(arg8)))
    float* eax_7 = arg1 i+ (esi_2 << 2)
    ecx = ebp_1 i- arg1
    
    do
        long double x87_r6_17 = st0_6 * fconvert.t(*eax_7)
        eax_7 = &eax_7[1]
        esi_2 += 1
        eax_7[-1] = fconvert.s(x87_r6_17)
    while (*(ecx + eax_7) == i_2)
while (esi_2 s< arg3)
