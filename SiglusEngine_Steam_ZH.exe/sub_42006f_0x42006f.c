// 函数: sub_42006f
// 地址: 0x42006f
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*arg1 += arg1.b
int32_t entry_ebx
arg2[-7] = entry_ebx * 2
arg2[-8] = entry_ebx << 4
int32_t eax_2 = arg4 << 4
int32_t ecx_3 = (entry_ebx + arg4) << 4
int32_t ebx = (arg4 - entry_ebx) << 4
arg2[4] = eax_2 + arg2[4] + 8
long double result
bool cond:1_1

do
    result = fconvert.t(*(arg2[-2] + ((arg2[2] & 3) << 2)))
    float* edx_4 = arg2[4]
    arg2[3] = fconvert.s(result)
    arg2[-0x10] = fconvert.s((fconvert.t(arg2[-0x14]) + fconvert.t(edx_4[-2])) * fconvert.t(31f))
    arg2[-0xf] = fconvert.s((fconvert.t(arg2[-0x13]) + fconvert.t(edx_4[-1])) * fconvert.t(31f))
    arg2[-0xe] = fconvert.s((fconvert.t(arg2[-0x12]) + fconvert.t(*edx_4)) * fconvert.t(31f))
    arg2[-3] = fconvert.s(fconvert.t(arg2[-0x10]) + result)
    arg2[-4] = int.d(fconvert.t(arg2[-3]))
    int32_t edx_5 = arg2[-4]
    long double x87_r7_3 = fconvert.t(arg2[-0xf]) + fconvert.t(arg2[3])
    arg2[-0xc] = edx_5
    arg2[-3] = fconvert.s(x87_r7_3)
    arg2[-5] = int.d(fconvert.t(arg2[-3]))
    long double x87_r7_6 = fconvert.t(arg2[-0xe]) + fconvert.t(arg2[3])
    arg2[-0xb] = arg2[-5]
    arg2[3] = fconvert.s(x87_r7_6)
    arg2[-6] = int.d(fconvert.t(arg2[3]))
    bool cond:0_1 = *(arg3 + 0x5c) == 0
    arg2[-0xa] = arg2[-6]
    
    if (not(cond:0_1))
        long double x87_r7_8 = fconvert.t(0.0322580636f)
        float* edi_6 = *(arg3 + 0x5c) + ebx + 0x10
        long double x87_r6_14 = (fconvert.t(arg2[-0x10]) - float.t(arg2[-0xc])) * x87_r7_8
        *edi_6 = fconvert.s(fconvert.t(0.1875f) * x87_r6_14 + fconvert.t(*edi_6))
        float* edi_8 = *(arg3 + 0x5c) + eax_2 + 0x10
        *edi_8 = fconvert.s(fconvert.t(0.3125f) * x87_r6_14 + fconvert.t(*edi_8))
        float* edi_10 = *(arg3 + 0x5c) + ecx_3 + 0x10
        *edi_10 = fconvert.s(fconvert.t(0.0625f) * x87_r6_14 + fconvert.t(*edi_10))
        float* edi_12 = *(arg3 + 0x5c) + ebx + 0x14
        arg2[-0x14] = fconvert.s(x87_r6_14 * fconvert.t(0.4375))
        long double x87_r6_18 = (fconvert.t(arg2[-0xf]) - float.t(arg2[-0xb])) * x87_r7_8
        *edi_12 = fconvert.s(fconvert.t(0.1875f) * x87_r6_18 + fconvert.t(*edi_12))
        float* edi_14 = *(arg3 + 0x5c) + eax_2 + 0x14
        *edi_14 = fconvert.s(fconvert.t(0.3125f) * x87_r6_18 + fconvert.t(*edi_14))
        float* edi_16 = *(arg3 + 0x5c) + ecx_3 + 0x14
        *edi_16 = fconvert.s(fconvert.t(0.0625f) * x87_r6_18 + fconvert.t(*edi_16))
        float* edi_18 = *(arg3 + 0x5c) + ebx + 0x18
        arg2[-0x13] = fconvert.s(x87_r6_18 * fconvert.t(0.4375))
        long double x87_r7_9 = x87_r7_8 * (fconvert.t(arg2[-0xe]) - float.t(arg2[-0xa]))
        *edi_18 = fconvert.s(fconvert.t(0.1875f) * x87_r7_9 + fconvert.t(*edi_18))
        float* edi_20 = *(arg3 + 0x5c) + eax_2 + 0x18
        *edi_20 = fconvert.s(fconvert.t(0.3125f) * x87_r7_9 + fconvert.t(*edi_20))
        float* edi_22 = *(arg3 + 0x5c) + ecx_3 + 0x18
        *edi_22 = fconvert.s(fconvert.t(0.0625f) * x87_r7_9 + fconvert.t(*edi_22))
        arg2[-0x12] = fconvert.s(x87_r7_9 * fconvert.t(0.4375))
    
    int32_t edi_23
    
    edi_23 = edx_5 s>= 0x1f ? 0x1f : edx_5
    
    if (edi_23 s<= 0)
        edx_5 = 0
    else if (edx_5 s>= 0x1f)
        edx_5 = 0x1f
    
    int32_t edi_24 = arg2[-0xb]
    
    if (edi_24 s>= 0x1f)
        edi_24 = 0x1f
    
    if (edi_24 s<= 0)
        arg2[-0xb] = 0
    else if (arg2[-0xb] s>= 0x1f)
        arg2[-0xb] = 0x1f
    
    int32_t edi_25 = arg2[-0xa]
    
    if (edi_25 s>= 0x1f)
        edi_25 = 0x1f
    
    if (edi_25 s<= 0)
        arg2[-0xa] = 0
    else if (arg2[-0xa] s>= 0x1f)
        arg2[-0xa] = 0x1f
    
    int16_t* edi_26 = arg2[-1]
    *edi_26 = ((edx_5 << 5 | arg2[-0xb]) << 5).w | (arg2[-0xa]).w
    int32_t edx_10 = arg2[-8]
    void* edi_27 = edi_26 + arg2[-7]
    arg2[4] += edx_10
    eax_2 += edx_10
    ebx += edx_10
    ecx_3 += edx_10
    arg2[2] += 1
    cond:1_1 = arg2[2] u< *(arg3 + 0x68)
    arg2[-1] = edi_27
while (cond:1_1)
arg2[4] = *(arg3 + 0x7c)
int16_t x87control
int16_t x87status
x87control, x87status = __fldcw_memmem16(arg2[4].w)
*arg2
return result
