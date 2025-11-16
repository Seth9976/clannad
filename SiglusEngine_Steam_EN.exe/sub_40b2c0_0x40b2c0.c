// 函数: sub_40b2c0
// 地址: 0x40b2c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_1 = neg.d(arg5)
int32_t eax_3 = sbb.d(eax_1, eax_1, arg5 != 0) & arg4
int32_t ecx_1 = neg.d(arg5)
void* ecx_3 = sbb.d(ecx_1, ecx_1, arg5 != 0) & arg6
float* edi_2 = (&data_63af84)[*(arg2 + (eax_3 << 2))]
int32_t esi_2 = (&data_63af84)[*(arg2 + (ecx_3 << 2))]
int32_t edx = *(arg3 + (arg5 << 2))
int32_t ebp_1 = *(arg3 + (eax_3 << 2))
int32_t edi_3 = *(arg3 + (ecx_3 << 2))
int32_t eax_5
int32_t edx_1
edx_1:eax_5 = sx.q(edx)
int32_t eax_8
int32_t edx_3
edx_3:eax_8 = sx.q(ebp_1)
int32_t ecx_5 = (eax_5 + (edx_1 & 3)) s>> 2
int32_t result_1 = ecx_5 - ((eax_8 + (edx_3 & 3)) s>> 2)
int32_t eax_12
int32_t edx_5
edx_5:eax_12 = sx.q(ebp_1)
int32_t eax_15
int32_t edx_6
edx_6:eax_15 = sx.q(edi_3)
int32_t eax_18
int32_t edx_8
edx_8:eax_18 = sx.q(edx)
int32_t eax_22
int32_t edx_9
edx_9:eax_22 = sx.q(edi_3)
int32_t esi_9 = ((eax_18 - edx_8) s>> 1) - ((eax_15 + (edx_6 & 3)) s>> 2) + ecx_5
int32_t result = 0
int32_t edx_11 = (eax_22 - edx_9) s>> 1
int32_t ebp_4 = ((eax_12 - edx_5) s>> 1) + result_1
int32_t ecx_6 = edx_11 + esi_9

if (result_1 s> 0)
    __builtin_memset(arg1, 0, result_1 << 2)
    result = result_1

if (result s< ebp_4)
    float* ebx_1 = edi_2
    int32_t i_3 = ebp_4 - result
    float* edi_6 = arg1 + (result << 2)
    int32_t i
    
    do
        long double x87_r7_2 = fconvert.t(*edi_6) * fconvert.t(*ebx_1)
        edi_6 = &edi_6[1]
        ebx_1 = &ebx_1[1]
        i = i_3
        i_3 -= 1
        edi_6[-1] = fconvert.s(x87_r7_2)
    while (i != 1)

if (esi_9 s< ecx_6)
    int32_t i_2 = ecx_6 - esi_9
    result = arg1 + (esi_9 << 2)
    float* edx_12 = esi_2 + (edx_11 << 2) - 4
    esi_9 += i_2
    int32_t i_1
    
    do
        long double x87_r7_4 = fconvert.t(*edx_12) * fconvert.t(*result)
        result += 4
        edx_12 -= 4
        i_1 = i_2
        i_2 -= 1
        *(result - 4) = fconvert.s(x87_r7_4)
    while (i_1 != 1)

if (esi_9 s< edx)
    result = 0
    __builtin_memset(arg1 + (esi_9 << 2), 0, (edx - esi_9) << 2)

return result
