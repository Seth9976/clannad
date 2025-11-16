// 函数: sub_421c9b
// 地址: 0x421c9b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_60 = edi

if (*(arg1 + 0x54) != 0)
    void* eax_1
    long double st0_1
    st0_1, eax_1 = sub_41da34(arg1, arg5)
    arg5 = eax_1

if (*(arg1 + 0x10) != 0)
    void* eax_2
    eax_2, arg2 = sub_41ef58(arg1, arg2, arg5)
    arg5 = eax_2

int32_t eax_3 = arg3
int32_t edi_1 = *(arg1 + 0x68)
float var_54 = fconvert.s(float.t(0))
float var_50 = fconvert.s(float.t(0))
float var_4c = fconvert.s(float.t(0))
arg3 = eax_3 & 1
int32_t eax_6 = *(arg1 + 0x34) + (((arg4 & 3) + ((eax_3 & 3) << 3)) << 2)
void* var_8 =
    *(arg1 + 0x60) * eax_3 + (((edi_1 - 1) * arg3) << 2) + *(arg1 + 0x64) i* arg4 + *(arg1 + 0x20)
int32_t ebx_2
int32_t edi_2

if (arg3 != 0)
    edi_2 = edi_1 - 1
    ebx_2 = 0xffffffff
else
    edi_2 = 0
    ebx_2 = 1

int16_t x87status
int16_t temp0
temp0, x87status = __fnstcw_memmem16(arg2)
arg3.w = temp0
int16_t x87control
int16_t x87status_1
x87control, x87status_1 = __fldcw_memmem16((arg3 | 0xc00).w)
*(arg1 + 0x7c) = arg3

if (*(arg1 + 0x5c) != 0)
    sub_41f274(arg1, arg5)

arg3 = 0

if (*(arg1 + 0x68) u> 0)
    int32_t ecx_8 = ebx_2 << 4
    int32_t eax_13 = edi_2 << 4
    int32_t ecx_10 = (ebx_2 + edi_2) << 4
    int32_t ebx_3 = (edi_2 - ebx_2) << 4
    arg5 = eax_13 + arg5 + 8
    
    do
        long double x87_r7_3 = fconvert.t(*(eax_6 + ((arg3 & 3) << 2)))
        arg4 = fconvert.s(x87_r7_3)
        float var_44_1 =
            fconvert.s((fconvert.t(var_54) + fconvert.t(*(arg5 - 8))) * fconvert.t(255f))
        float var_40_1 =
            fconvert.s((fconvert.t(var_50) + fconvert.t(*(arg5 - 4))) * fconvert.t(255f))
        float var_3c_1 = fconvert.s((fconvert.t(var_4c) + fconvert.t(*arg5)) * fconvert.t(255f))
        int32_t var_34_1 = int.d(fconvert.t(fconvert.s(fconvert.t(var_44_1) + x87_r7_3)))
        int32_t var_30_1 = int.d(fconvert.t(fconvert.s(fconvert.t(var_40_1) + fconvert.t(arg4))))
        int32_t edx_12 = int.d(fconvert.t(fconvert.s(fconvert.t(var_3c_1) + fconvert.t(arg4))))
        
        if (*(arg1 + 0x5c) != 0)
            long double x87_r7_11 = fconvert.t(0.00392156886f)
            float* edi_7 = *(arg1 + 0x5c) + ebx_3 + 0x10
            long double x87_r6_14 = (fconvert.t(var_44_1) - float.t(var_34_1)) * x87_r7_11
            *edi_7 = fconvert.s(fconvert.t(0.1875f) * x87_r6_14 + fconvert.t(*edi_7))
            float* edi_9 = *(arg1 + 0x5c) + eax_13 + 0x10
            *edi_9 = fconvert.s(fconvert.t(0.3125f) * x87_r6_14 + fconvert.t(*edi_9))
            float* edi_11 = *(arg1 + 0x5c) + ecx_10 + 0x10
            *edi_11 = fconvert.s(fconvert.t(0.0625f) * x87_r6_14 + fconvert.t(*edi_11))
            float* edi_13 = *(arg1 + 0x5c) + ebx_3 + 0x14
            var_54 = fconvert.s(x87_r6_14 * fconvert.t(0.4375))
            long double x87_r6_18 = (fconvert.t(var_40_1) - float.t(var_30_1)) * x87_r7_11
            *edi_13 = fconvert.s(fconvert.t(0.1875f) * x87_r6_18 + fconvert.t(*edi_13))
            float* edi_15 = *(arg1 + 0x5c) + eax_13 + 0x14
            *edi_15 = fconvert.s(fconvert.t(0.3125f) * x87_r6_18 + fconvert.t(*edi_15))
            float* edi_17 = *(arg1 + 0x5c) + ecx_10 + 0x14
            *edi_17 = fconvert.s(fconvert.t(0.0625f) * x87_r6_18 + fconvert.t(*edi_17))
            float* edi_19 = *(arg1 + 0x5c) + ebx_3 + 0x18
            var_50 = fconvert.s(x87_r6_18 * fconvert.t(0.4375))
            long double x87_r7_12 = x87_r7_11 * (fconvert.t(var_3c_1) - float.t(edx_12))
            *edi_19 = fconvert.s(fconvert.t(0.1875f) * x87_r7_12 + fconvert.t(*edi_19))
            float* edi_21 = *(arg1 + 0x5c) + eax_13 + 0x18
            *edi_21 = fconvert.s(fconvert.t(0.3125f) * x87_r7_12 + fconvert.t(*edi_21))
            float* edi_23 = *(arg1 + 0x5c) + ecx_10 + 0x18
            *edi_23 = fconvert.s(fconvert.t(0.0625f) * x87_r7_12 + fconvert.t(*edi_23))
            var_4c = fconvert.s(x87_r7_12 * fconvert.t(0.4375))
        
        int32_t edi_24 = var_34_1
        
        if (edi_24 s>= 0xff)
            edi_24 = 0xff
        
        if (edi_24 s<= 0)
            var_34_1 = 0
        else if (var_34_1 s>= 0xff)
            var_34_1 = 0xff
        
        int32_t edi_25 = var_30_1
        
        if (edi_25 s>= 0xff)
            edi_25 = 0xff
        
        if (edi_25 s<= 0)
            var_30_1 = 0
        else if (var_30_1 s>= 0xff)
            var_30_1 = 0xff
        
        int32_t edi_26 = edx_12
        
        if (edx_12 s>= 0xff)
            edi_26 = 0xff
        
        if (edi_26 s<= 0)
            edx_12 = 0
        else if (edx_12 s>= 0xff)
            edx_12 = 0xff
        
        int32_t* edi_27 = var_8
        *edi_27 = (edx_12 << 8 | var_30_1) << 8 | var_34_1
        arg5 += ecx_8
        eax_13 += ecx_8
        ebx_3 += ecx_8
        ecx_10 += ecx_8
        arg3 += 1
        var_8 = &edi_27[ebx_2]
    while (arg3 u< *(arg1 + 0x68))

int16_t x87control_1
int16_t x87status_2
x87control_1, x87status_2 = __fldcw_memmem16((*(arg1 + 0x7c)).w)
