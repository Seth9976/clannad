// 函数: sub_415d3a
// 地址: 0x415d3a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_1d8 = edi
float var_7c = *arg5
float var_78
int32_t* edi_1 = &var_78
void* esi_1 = &arg5[1]
*edi_1 = *esi_1
edi_1[1] = *(esi_1 + 4)
int32_t* esi_4 = arg6
float var_34 = *esi_4
float var_30
int32_t* edi_4 = &var_30
void* esi_5 = &esi_4[1]
*edi_4 = *esi_5
edi_4[1] = *(esi_5 + 4)
float var_10 = *arg7
float var_c
int32_t* edi_7 = &var_c
void* esi_9 = &arg7[1]
*edi_7 = *esi_9
int32_t ecx
int32_t var_1e0 = ecx
edi_7[1] = *(esi_9 + 4)
float var_70
int32_t var_1e0_2 =
    sub_415c9b(&var_34, &var_7c, arg1, fconvert.s(fconvert.t(0.333333343f)), &var_70)
float var_64
int32_t var_1e0_4 =
    sub_415c9b(&var_10, &var_7c, arg1, fconvert.s(fconvert.t(0.333333343f)), &var_64)
float var_58
int32_t var_1e0_6 =
    sub_415c9b(&var_7c, &var_34, &arg1[3], fconvert.s(fconvert.t(0.333333343f)), &var_58)
float var_40
int32_t var_1e0_8 =
    sub_415c9b(&var_7c, &var_10, &arg1[6], fconvert.s(fconvert.t(0.333333343f)), &var_40)
float var_28
int32_t var_1e0_10 =
    sub_415c9b(&var_10, &var_34, &arg1[3], fconvert.s(fconvert.t(0.333333343f)), &var_28)
float var_1c
sub_415c9b(&var_34, &var_10, &arg1[6], fconvert.s(fconvert.t(0.333333343f)), &var_1c)
float var_4c = var_70
float var_48
int32_t* edi_11 = &var_48
void var_6c
void* esi_14 = &var_6c
*edi_11 = *esi_14
edi_11[1] = *(esi_14 + 4)
float var_5c
float var_50
float var_44
long double x87_r6_3 =
    fconvert.t(var_50) + fconvert.t(fconvert.s(fconvert.t(var_5c) + fconvert.t(var_44)))
float var_4c_2 = fconvert.s(fconvert.t(var_40)
    + fconvert.t(fconvert.s(fconvert.t(var_58) + fconvert.t(var_64) + fconvert.t(var_4c))))
float var_60
float var_3c
var_48 = fconvert.s(fconvert.t(var_3c) + fconvert.t(var_60) + fconvert.t(var_48))
long double x87_r6_5 = fconvert.t(var_28) + fconvert.t(var_4c_2)
float var_24
var_48 = fconvert.s(fconvert.t(var_24) + fconvert.t(var_48))
float var_20
float var_44_2 = fconvert.s(fconvert.t(var_20) + x87_r6_3)
float var_4c_3 = fconvert.s(fconvert.t(var_1c) + x87_r6_5)
float var_18
var_48 = fconvert.s(fconvert.t(var_18) + fconvert.t(var_48))
long double x87_r6_6 = fconvert.t(0.25f)
float var_4c_4 = fconvert.s(fconvert.t(var_4c_3) * x87_r6_6)
var_48 = fconvert.s(fconvert.t(var_48) * x87_r6_6)
long double x87_r6_8 = fconvert.t(var_34) + fconvert.t(var_7c)
long double x87_r5_25 = fconvert.t(var_30) + fconvert.t(var_78)
float var_74
float var_2c
float var_80 = fconvert.s(fconvert.t(var_2c) + fconvert.t(var_74))
void* result = nullptr
arg1 = nullptr
long double x87_r5_28 = fconvert.t(0.166666001f)
long double x87_r4_7 = fconvert.t(fconvert.s(fconvert.t(var_10) + x87_r6_8)) * x87_r5_28
float var_84 = fconvert.s(x87_r5_25 * x87_r5_28)
float var_8
var_80 = fconvert.s(fconvert.t(fconvert.s(fconvert.t(var_8) + fconvert.t(var_80))) * x87_r5_28)
float var_4c_5 = fconvert.s(fconvert.t(var_4c_4) - x87_r4_7)
var_48 = fconvert.s(fconvert.t(var_48) - fconvert.t(var_84))
float var_44_3 = fconvert.s(x87_r4_7 - fconvert.t(var_80))

if (arg3 u> 0)
    long double x87_r7_19 = fconvert.t(3f)
    
    do
        int32_t eax = result << 3
        long double x87_r6_13 = fconvert.t(*(eax + arg2))
        int32_t i = 0
        long double x87_r5_30 = fconvert.t(*(eax + arg2 + 4))
        float* eax_1 = &var_78
        long double x87_r4_10 = float.t(1) - x87_r6_13 - x87_r5_30
        long double x87_r3_7 = x87_r5_30 * x87_r5_30
        float var_bc_1 = fconvert.s(x87_r3_7 * x87_r5_30)
        long double x87_r2_4 = x87_r4_10 * x87_r5_30
        float var_b8_1 = fconvert.s(x87_r2_4 * x87_r5_30 * x87_r7_19)
        float var_b4_1 = fconvert.s(x87_r3_7 * x87_r6_13 * x87_r7_19)
        long double x87_r3_11 = x87_r4_10 * x87_r4_10
        float var_b0_1 = fconvert.s(x87_r3_11 * x87_r5_30 * x87_r7_19)
        float var_ac_1 = fconvert.s(fconvert.t(fconvert.s(x87_r2_4)) * x87_r6_13 * fconvert.t(6f))
        float var_a8_1 = fconvert.s(x87_r5_30 * x87_r6_13 * x87_r6_13 * x87_r7_19)
        float var_a4_1 = fconvert.s(x87_r3_11 * x87_r4_10)
        float var_a0_1 = fconvert.s(x87_r3_11 * x87_r6_13 * x87_r7_19)
        float var_9c_1 = fconvert.s(x87_r4_10 * x87_r6_13 * x87_r6_13 * x87_r7_19)
        float var_98_1 = fconvert.s(x87_r6_13 * x87_r6_13 * x87_r6_13)
        long double x87_r3_21 = float.t(0)
        long double x87_r2_19 = float.t(0)
        long double x87_r1_1 = float.t(0)
        
        do
            int32_t __saved_ebp
            float* ecx_7 = &(&__saved_ebp)[i - 0x2e]
            i += 1
            x87_r3_21 = x87_r3_21 + fconvert.t(eax_1[-1]) * fconvert.t(*ecx_7)
            long double x87_r0_7 = fconvert.t(*ecx_7) * fconvert.t(*eax_1)
            eax_1 = &eax_1[3]
            x87_r2_19 = x87_r2_19 + x87_r0_7
            x87_r1_1 = x87_r1_1 + fconvert.t(eax_1[-2]) * fconvert.t(*ecx_7)
        while (i u< 0xa)
        
        int32_t edx_1 = arg8
        float var_1c4_1 = fconvert.s(x87_r1_1)
        float var_1c8_1 = fconvert.s(x87_r2_19)
        float var_1cc = fconvert.s(x87_r3_21)
        
        if (edx_1 u> 3)
            float* eax_2 = arg6 i+ 0xc
            int32_t i_2 = edx_1 - 3
            int32_t i_1
            
            do
                *(&var_1cc i- arg6 + eax_2) = fconvert.s(
                    x87_r6_13 * fconvert.t(*(arg7 i- arg6 + eax_2))
                    + x87_r5_30 * fconvert.t(*(arg5 i- arg6 + eax_2))
                    + x87_r4_10 * fconvert.t(*eax_2))
                eax_2 = &eax_2[1]
                i_1 = i_2
                i_2 -= 1
            while (i_1 != 1)
            edx_1 = arg8
        
        int32_t edi_16 = arg4
        int32_t eax_4 = edx_1 << 2
        x87_r7_19 = x87_r4_10
        arg4 += eax_4
        int32_t esi_19
        int32_t edi_17
        edi_17, esi_19 = __builtin_memcpy(edi_16, &var_1cc, eax_4 u>> 2 << 2)
        result = arg1 + 1
        __builtin_memcpy(edi_17, esi_19, eax_4 & 3)
        arg1 = result
    while (result u< arg3)

return result
