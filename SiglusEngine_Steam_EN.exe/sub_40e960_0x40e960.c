// 函数: sub_40e960
// 地址: 0x40e960
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ebp = arg1
int32_t ecx_1 = arg4 - arg3
int32_t eax_1
int32_t edx
edx:eax_1 = sx.q(ecx_1)
int32_t edi_1 = arg2 - ebp
int32_t temp0 = divs.dp.d(sx.q(ecx_1), edi_1)
int32_t eax_5

if (ecx_1 s>= 0)
    eax_5 = temp0 + 1
else
    eax_5 = temp0 - 1

arg4 = arg3
int32_t var_18 = 0
float* edi_2 = arg5 + (ebp << 2)
int32_t eax_7 = sub_40e720(edi_2)
int32_t eax_10
int32_t edx_3
edx_3:eax_10 = sx.q(temp0 * edi_1)
int32_t esi_1 = arg3 - eax_7
void* ecx_3 = arg7
long double x87_r7_1 = fconvert.t(*(arg6 + (ebp << 2))) + fconvert.t(*(ecx_3 + 0x458))
long double temp2 = fconvert.t(*edi_2)
x87_r7_1 - temp2
int32_t ebx_5 = esi_1 * esi_1
int32_t eax_12
eax_12.w = (x87_r7_1 < temp2 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_1, temp2) ? 1 : 0) << 0xa
    | (x87_r7_1 == temp2 ? 1 : 0) << 0xe
arg1 = 1
long double x87_r6_1

if ((eax_12:1.b & 1) == 0)
    long double x87_r7_2 = float.t(arg3)
    x87_r6_1 = float.t(eax_7)
    long double x87_r5_2 = x87_r7_2 + fconvert.t(*(ecx_3 + 0x448))
    x87_r5_2 - x87_r6_1
    eax_12.w = (x87_r5_2 < x87_r6_1 ? 1 : 0) << 8
        | (is_unordered.t(x87_r5_2, x87_r6_1) ? 1 : 0) << 0xa
        | (x87_r5_2 == x87_r6_1 ? 1 : 0) << 0xe | 0x3000
    
    if ((eax_12:1.b & 1) != 0)
        return x87_r6_1
    
    long double x87_r6_3 = x87_r7_2 - fconvert.t(*(ecx_3 + 0x44c))
    x87_r6_3 - x87_r6_1
    eax_12.w = (x87_r6_3 < x87_r6_1 ? 1 : 0) << 8
        | (is_unordered.t(x87_r6_3, x87_r6_1) ? 1 : 0) << 0xa
        | (x87_r6_3 == x87_r6_1 ? 1 : 0) << 0xe | 0x3800
    
    if ((eax_12:1.b & 0x41) == 0)
        return x87_r6_1

int32_t ebp_1 = ebp + 1

if (ebp_1 s< arg2)
    float* esi_2 = arg5 + (ebp_1 << 2)
    
    do
        int32_t eax_17 = var_18 + (eax_1 ^ edx) - edx - ((eax_10 ^ edx_3) - edx_3)
        var_18 = eax_17
        int32_t eax_20
        
        if (eax_17 s< edi_1)
            eax_20 = arg4 + temp0
        else
            var_18 = eax_17 - edi_1
            eax_20 = arg4 + eax_5
        
        arg4 = eax_20
        int32_t eax_22 = sub_40e720(esi_2)
        int32_t eax_24 = arg4 - eax_22
        ebx_5 += eax_24 * eax_24
        long double x87_r7_6 = fconvert.t(*(arg6 - arg5 + esi_2)) + fconvert.t(*(arg7 + 0x458))
        arg1 += 1
        long double temp6_1 = fconvert.t(*esi_2)
        x87_r7_6 - temp6_1
        int32_t eax_26
        eax_26.w = (x87_r7_6 < temp6_1 ? 1 : 0) << 8
            | (is_unordered.t(x87_r7_6, temp6_1) ? 1 : 0) << 0xa
            | (x87_r7_6 == temp6_1 ? 1 : 0) << 0xe
        
        if ((eax_26:1.b & 1) == 0 && eax_22 != 0)
            long double x87_r7_7 = float.t(arg4)
            x87_r6_1 = float.t(eax_22)
            long double x87_r5_4 = x87_r7_7 + fconvert.t(*(arg7 + 0x448))
            x87_r5_4 - x87_r6_1
            eax_26.w = (x87_r5_4 < x87_r6_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r5_4, x87_r6_1) ? 1 : 0) << 0xa
                | (x87_r5_4 == x87_r6_1 ? 1 : 0) << 0xe | 0x3000
            
            if ((eax_26:1.b & 1) != 0)
                return x87_r6_1
            
            long double x87_r6_5 = x87_r7_7 - fconvert.t(*(arg7 + 0x44c))
            x87_r6_5 - x87_r6_1
            eax_26.w = (x87_r6_5 < x87_r6_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r6_5, x87_r6_1) ? 1 : 0) << 0xa
                | (x87_r6_5 == x87_r6_1 ? 1 : 0) << 0xe | 0x3800
            
            if ((eax_26:1.b & 0x41) == 0)
                return x87_r6_1
        
        ebp_1 += 1
        esi_2 = &esi_2[1]
    while (ebp_1 s< arg2)
    
    ecx_3 = arg7

long double x87_r7_9 = fconvert.t(*(ecx_3 + 0x448))
arg2 = fconvert.s(float.t(arg1))
long double x87_r6_9 = x87_r7_9 * x87_r7_9 / fconvert.t(arg2)
long double temp3_1 = fconvert.t(*(ecx_3 + 0x450))
x87_r6_9 - temp3_1
int32_t eax_27
eax_27.w = (x87_r6_9 < temp3_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_9, temp3_1) ? 1 : 0) << 0xa
    | (x87_r6_9 == temp3_1 ? 1 : 0) << 0xe | 0x3800

if ((eax_27:1.b & 0x41) == 0)
    return x87_r7_9

long double x87_r7_10 = fconvert.t(*(ecx_3 + 0x44c))
long double x87_r6_12 = x87_r7_10 * x87_r7_10 / fconvert.t(arg2)
long double temp4_1 = fconvert.t(*(ecx_3 + 0x450))
x87_r6_12 - temp4_1
eax_27.w = (x87_r6_12 < temp4_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r6_12, temp4_1) ? 1 : 0) << 0xa
    | (x87_r6_12 == temp4_1 ? 1 : 0) << 0xe | 0x3800

if ((eax_27:1.b & 0x41) == 0)
    return x87_r7_10

long double x87_r7_11 = float.t(divs.dp.d(sx.q(ebx_5), arg1))
long double temp5_1 = fconvert.t(*(ecx_3 + 0x450))
x87_r7_11 - temp5_1
int32_t eax_30
eax_30.w = (x87_r7_11 < temp5_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_11, temp5_1) ? 1 : 0) << 0xa
    | (x87_r7_11 == temp5_1 ? 1 : 0) << 0xe
return x87_r7_10
