// 函数: sub_4059d0
// 地址: 0x4059d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

float edi
float var_3c = edi
int32_t edi_1 = arg1
int32_t ebx = edi_1 << 2
int32_t eax_1
eax_1.b = (ebx + 3).b & 0xfc
__chkstk(eax_1)
int32_t eax_3
eax_3.b = (ebx + 3).b & 0xfc
__chkstk(eax_3)
int32_t* ebx_1 = &var_3c
int32_t* var_28 = &var_3c
int32_t eax_5
eax_5.b = ((edi_1 << 2) + 3).b & 0xfc
__chkstk(eax_5)
int32_t* var_1c = &var_3c
int32_t eax_7
eax_7.b = ((edi_1 << 2) + 3).b & 0xfc
__chkstk(eax_7)
int32_t* var_14 = &var_3c
int32_t eax_9
eax_9.b = ((edi_1 << 2) + 3).b & 0xfc
__chkstk(eax_9)
long double x87_r7 = fconvert.t(0f)
long double x87_r6 = fconvert.t(0f)
float* edx = arg3
int32_t* var_18 = &var_3c
long double x87_r5_1 = fconvert.t(arg5) + fconvert.t(*edx)
arg3 = fconvert.s(x87_r5_1)
long double temp1 = fconvert.t(1f)
x87_r5_1 - temp1

if ((((x87_r5_1 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r5_1, temp1) ? 1 : 0) << 0xa
        | (x87_r5_1 == temp1 ? 1 : 0) << 0xe | 0x3000):1.b & 1) != 0)
    arg3 = 1f

long double x87_r5_4 = fconvert.t(arg3) * fconvert.t(arg3) * fconvert.t(0.5)
long double x87_r4 = fconvert.t(fconvert.s(x87_r5_4))
long double x87_r3_1 = fconvert.t(fconvert.s(x87_r5_4)) * fconvert.t(arg3)
arg3 = 1f
var_3c = fconvert.s(x87_r5_4)
var_3c = fconvert.s(x87_r4)
*var_1c = 0
*var_14 = fconvert.s(x87_r3_1)
*var_18 = 0
float i_4
float var_c
float var_8

if (edi_1 s> 1)
    var_c = var_1c - &var_3c
    var_8 = var_14 - &var_3c
    int32_t __saved_esi
    int32_t* ecx_2 = &__saved_esi
    i_4 = edi_1 - 1
    float i
    
    do
        long double x87_r2_4 = fconvert.t(arg5) + fconvert.t(*(edx - &var_3c + ecx_2))
        long double temp2_1 = fconvert.t(1f)
        x87_r2_4 - temp2_1
        float* eax_18
        eax_18.w = (x87_r2_4 < temp2_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r2_4, temp2_1) ? 1 : 0) << 0xa
            | (x87_r2_4 == temp2_1 ? 1 : 0) << 0xe | 0x1000
        
        if ((eax_18:1.b & 1) != 0)
            x87_r2_4 = fconvert.t(1f)
        
        long double x87_r1_2 = x87_r2_4 * x87_r2_4
        ecx_2 = &ecx_2[1]
        x87_r5_4 = x87_r5_4 + x87_r1_2
        long double x87_r0_3 = fconvert.t(arg3) * x87_r1_2
        x87_r4 = x87_r4 + x87_r0_3
        x87_r6 = x87_r6 + fconvert.t(arg3) * fconvert.t(arg3) * x87_r1_2
        x87_r7 = x87_r7 + fconvert.t(fconvert.s(x87_r0_3)) * x87_r2_4
        ecx_2[-1] = fconvert.s(x87_r5_4)
        ecx_2[-1] = fconvert.s(x87_r4)
        *(var_c i+ ecx_2 - 4) = fconvert.s(x87_r6)
        *(var_8 i+ ecx_2 - 4) = fconvert.s(x87_r2_4)
        *(var_18 - &var_3c + ecx_2 - 4) = fconvert.s(x87_r7)
        i = i_4
        i_4 -= 1
        arg3 = fconvert.s(fconvert.t(arg3) + fconvert.t(1f))
    while (i != 1)

float edx_3 = 0f
int32_t ecx_4 = *arg2
arg3 = 0f
long double x87_r7_2 = fconvert.t(0f)
int32_t i_1 = ecx_4 s>> 0x10

if (i_1 s< 0)
    int32_t* var_24_2 = arg2
    edx_3 = 0f
    
    do
        int32_t eax_24 = neg.d(i_1) << 2
        int32_t ecx_5 = ecx_4 & 0xffff
        long double x87_r6_3 = fconvert.t(*(eax_24 + &var_3c)) + fconvert.t((&var_3c)[ecx_5])
        long double x87_r5_7 = fconvert.t((&var_3c)[ecx_5]) - fconvert.t(*(eax_24 + &var_3c))
        long double x87_r4_3 = fconvert.t(*(eax_24 + var_1c)) + fconvert.t(var_1c[ecx_5])
        long double x87_r3_4 = fconvert.t(*(eax_24 + var_14)) + fconvert.t(var_14[ecx_5])
        long double x87_r2_13 = fconvert.t(var_18[ecx_5]) - fconvert.t(*(eax_24 + var_18))
        var_c = fconvert.s(x87_r3_4 * x87_r4_3 - x87_r2_13 * x87_r5_7)
        var_8 = fconvert.s(x87_r2_13 * x87_r6_3 - x87_r3_4 * x87_r5_7)
        i_4 = fconvert.s(x87_r4_3 * x87_r6_3 - x87_r5_7 * x87_r5_7)
        long double x87_r7_3 = x87_r5_7
        long double x87_r6_8 = (fconvert.t(var_8) * x87_r7_3 + fconvert.t(var_c)) / fconvert.t(i_4)
        long double temp3_1 = fconvert.t(0f)
        x87_r6_8 - temp3_1
        eax_24.w = (x87_r6_8 < temp3_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_8, temp3_1) ? 1 : 0) << 0xa
            | (x87_r6_8 == temp3_1 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_24:1.b & 1) != 0)
            x87_r7_3 = x87_r6_8
            x87_r6_8 = fconvert.t(0f)
        
        void* eax_26 = &var_24_2[1]
        edx_3 += 1
        var_24_2 = eax_26
        *(arg4 - arg2 + eax_26 - 4) = fconvert.s(x87_r6_8 - fconvert.t(arg5))
        ecx_4 = *eax_26
        x87_r7_2 = x87_r7_3 + fconvert.t(1f)
        i_1 = ecx_4 s>> 0x10
    while (i_1 s< 0)
    
    edi_1 = arg1
    arg3 = edx_3

int32_t ecx_7 = arg2[edx_3]
int32_t ecx_8 = ecx_7 & 0xffff
int32_t eax_31 = ecx_7 s>> 0x10

if (ecx_8 s< edi_1)
    void* var_24_3 = &arg2[edx_3]
    edi_1 = arg1
    
    do
        long double x87_r6_11 = fconvert.t((&var_3c)[ecx_8]) - fconvert.t((&var_3c)[eax_31])
        long double x87_r5_9 = fconvert.t((&var_3c)[ecx_8]) - fconvert.t((&var_3c)[eax_31])
        long double x87_r4_7 = fconvert.t(var_1c[ecx_8]) - fconvert.t(var_1c[eax_31])
        long double x87_r3_10 = fconvert.t(var_14[ecx_8]) - fconvert.t(var_14[eax_31])
        long double x87_r2_18 = fconvert.t(var_18[ecx_8]) - fconvert.t(var_18[eax_31])
        var_c = fconvert.s(x87_r3_10 * x87_r4_7 - x87_r2_18 * x87_r5_9)
        var_8 = fconvert.s(x87_r2_18 * x87_r6_11 - x87_r3_10 * x87_r5_9)
        i_4 = fconvert.s(x87_r4_7 * x87_r6_11 - x87_r5_9 * x87_r5_9)
        long double x87_r7_4 = x87_r5_9
        long double x87_r6_16 = (fconvert.t(var_8) * x87_r7_4 + fconvert.t(var_c)) / fconvert.t(i_4)
        long double temp5_1 = fconvert.t(0f)
        x87_r6_16 - temp5_1
        eax_31.w = (x87_r6_16 < temp5_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_16, temp5_1) ? 1 : 0) << 0xa
            | (x87_r6_16 == temp5_1 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_31:1.b & 1) != 0)
            x87_r7_4 = x87_r6_16
            x87_r6_16 = fconvert.t(0f)
        
        void* eax_33 = var_24_3 + 4
        var_24_3 = eax_33
        edx_3 = arg3 i+ 1
        *(eax_33 + arg4 - arg2 - 4) = fconvert.s(x87_r6_16 - fconvert.t(arg5))
        int32_t ecx_10 = *eax_33
        arg3 = edx_3
        x87_r7_2 = x87_r7_4 + fconvert.t(1f)
        ecx_8 = ecx_10 & 0xffff
        eax_31 = ecx_10 s>> 0x10
    while (ecx_8 s< edi_1)

if (edx_3 s< edi_1)
    arg2 = &arg4[edx_3]
    int32_t i_5 = edi_1 i- edx_3
    int32_t i_2
    
    do
        long double x87_r6_21 = (fconvert.t(var_8) * x87_r7_2 + fconvert.t(var_c)) / fconvert.t(i_4)
        long double temp8_1 = fconvert.t(0f)
        x87_r6_21 - temp8_1
        int32_t* eax_35
        eax_35.w = (x87_r6_21 < temp8_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_21, temp8_1) ? 1 : 0) << 0xa
            | (x87_r6_21 == temp8_1 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_35:1.b & 1) != 0)
            x87_r7_2 = x87_r6_21
            x87_r6_21 = fconvert.t(0f)
        
        eax_35 = &arg2[1]
        i_2 = i_5
        i_5 -= 1
        arg2 = eax_35
        eax_35[-1] = fconvert.s(x87_r6_21 - fconvert.t(arg5))
        x87_r7_2 = x87_r7_2 + fconvert.t(1f)
    while (i_2 != 1)

if (arg6 s<= 0)
    return x87_r7_2

int32_t eax_38
int32_t edx_13
edx_13:eax_38 = sx.q(arg6)
long double x87_r7_5 = fconvert.t(0f)
float ecx_13 = 0f
int32_t eax_40 = (eax_38 - edx_13) s>> 1
arg3 = 0f

if (eax_40 - arg6 s< 0)
    int32_t var_20_4 = eax_40
    int32_t edi_7 = eax_40 << 2
    arg2 = arg4
    int32_t var_24_4 = eax_40 << 2
    int32_t ecx_15 = neg.d(eax_40 - arg6) << 2
    int32_t eax_43
    int32_t edx_21
    edx_21:eax_43 = sx.q(arg6)
    int32_t edx_24 = neg.d((eax_43 - edx_21) s>> 1) << 2
    
    while (true)
        long double x87_r6_24 = fconvert.t(*(edi_7 + &var_3c)) + fconvert.t(*(ecx_15 + &var_3c))
        long double x87_r5_11 = fconvert.t(*(edi_7 + ebx_1)) - fconvert.t(*(ecx_15 + ebx_1))
        long double x87_r4_11 = fconvert.t(*(edi_7 + var_1c)) + fconvert.t(*(ecx_15 + var_1c))
        long double x87_r3_16 = fconvert.t(*(edi_7 + var_14)) + fconvert.t(*(ecx_15 + var_14))
        long double x87_r2_23 = fconvert.t(*(edi_7 + var_18)) - fconvert.t(*(ecx_15 + var_18))
        var_c = fconvert.s(x87_r3_16 * x87_r4_11 - x87_r2_23 * x87_r5_11)
        var_8 = fconvert.s(x87_r2_23 * x87_r6_24 - x87_r3_16 * x87_r5_11)
        i_4 = fconvert.s(x87_r4_11 * x87_r6_24 - x87_r5_11 * x87_r5_11)
        long double x87_r7_6 = x87_r5_11
        long double x87_r6_30 =
            (fconvert.t(var_8) * x87_r7_6 + fconvert.t(var_c)) / fconvert.t(i_4) - fconvert.t(arg5)
        long double temp10_1 = fconvert.t(*arg2)
        x87_r6_30 - temp10_1
        int32_t* eax_48
        eax_48.w = (x87_r6_30 < temp10_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_30, temp10_1) ? 1 : 0) << 0xa
            | (x87_r6_30 == temp10_1 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_48:1.b & 1) == 0)
            x87_r7_6 = x87_r6_30
        else
            *arg2 = fconvert.s(x87_r6_30)
        
        arg3 += 1
        edx_24 -= 4
        edi_7 = var_24_4 + 4
        arg2 = &arg2[1]
        int32_t eax_52 = var_20_4 + 1
        x87_r7_5 = x87_r7_6 + fconvert.t(1f)
        var_20_4 = eax_52
        var_24_4 = edi_7
        ecx_15 = edx_24 - (neg.d(arg6) << 2)
        
        if (eax_52 - arg6 s>= 0)
            break
        
        ebx_1 = var_28
    
    ebx_1 = var_28
    edi_1 = arg1
    ecx_13 = arg3

int32_t edx_25 = eax_40 i+ ecx_13

if (edx_25 s< edi_1)
    int32_t var_28_1 = edx_25
    float* eax_56 = (edx_25 - arg6) << 2
    float* ecx_20 = edx_25 << 2
    int32_t edi_10 = arg6 << 2
    arg2 = edx_25 << 2
    edi_1 = arg1
    arg6 = &arg4[arg3]
    bool cond:5_1
    
    do
        long double x87_r6_32 = fconvert.t(*(ecx_20 + &var_3c)) - fconvert.t(*(eax_56 + &var_3c))
        long double x87_r5_14 = fconvert.t(*(ecx_20 + ebx_1)) - fconvert.t(*(eax_56 + ebx_1))
        long double x87_r4_15 = fconvert.t(*(ecx_20 + var_1c)) - fconvert.t(*(eax_56 + var_1c))
        long double x87_r3_22 = fconvert.t(*(ecx_20 + var_14)) - fconvert.t(*(eax_56 + var_14))
        long double x87_r2_28 = fconvert.t(*(ecx_20 + var_18)) - fconvert.t(*(eax_56 + var_18))
        float* ecx_21 = arg6
        var_c = fconvert.s(x87_r3_22 * x87_r4_15 - x87_r2_28 * x87_r5_14)
        var_8 = fconvert.s(x87_r2_28 * x87_r6_32 - x87_r3_22 * x87_r5_14)
        i_4 = fconvert.s(x87_r4_15 * x87_r6_32 - x87_r5_14 * x87_r5_14)
        long double x87_r7_7 = x87_r5_14
        long double x87_r6_38 =
            (fconvert.t(var_8) * x87_r7_7 + fconvert.t(var_c)) / fconvert.t(i_4) - fconvert.t(arg5)
        long double temp11_1 = fconvert.t(*ecx_21)
        x87_r6_38 - temp11_1
        eax_56.w = (x87_r6_38 < temp11_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_38, temp11_1) ? 1 : 0) << 0xa
            | (x87_r6_38 == temp11_1 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_56:1.b & 1) == 0)
            x87_r7_7 = x87_r6_38
        else
            *ecx_21 = fconvert.s(x87_r6_38)
        
        x87_r7_5 = x87_r7_7 + fconvert.t(1f)
        arg3 += 1
        void* eax_58 = &arg2[1]
        arg6 = &ecx_21[1]
        arg2 = eax_58
        ecx_20 = eax_58
        eax_56 = eax_58 - edi_10
        cond:5_1 = var_28_1 + 1 s< edi_1
        var_28_1 += 1
    while (cond:5_1)
    ecx_13 = arg3

if (ecx_13 s< edi_1)
    int32_t i_6 = edi_1 i- ecx_13
    void* edx_36 = &arg4[ecx_13]
    int32_t i_3
    
    do
        long double x87_r6_43 =
            (fconvert.t(var_8) * x87_r7_5 + fconvert.t(var_c)) / fconvert.t(i_4) - fconvert.t(arg5)
        long double temp12_1 = fconvert.t(*edx_36)
        x87_r6_43 - temp12_1
        int32_t* eax_59
        eax_59.w = (x87_r6_43 < temp12_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r6_43, temp12_1) ? 1 : 0) << 0xa
            | (x87_r6_43 == temp12_1 ? 1 : 0) << 0xe | 0x3000
        
        if ((eax_59:1.b & 1) == 0)
            x87_r7_5 = x87_r6_43
        else
            *edx_36 = fconvert.s(x87_r6_43)
        
        x87_r7_5 = x87_r7_5 + fconvert.t(1f)
        edx_36 += 4
        i_3 = i_6
        i_6 -= 1
    while (i_3 != 1)

return x87_r7_5
