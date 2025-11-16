// 函数: sub_41f2e6
// 地址: 0x41f2e6
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

int32_t ecx_1 = arg3
int32_t ebx = *(arg1 + 0x68)
float var_54 = fconvert.s(float.t(0))
arg3 = ecx_1 & 1
float var_50 = fconvert.s(float.t(0))
float var_4c = fconvert.s(float.t(0))
char* edi_4 = (ebx - 1) * arg3 * 3 + *(arg1 + 0x60) * ecx_1 + *(arg1 + 0x64) * arg4 + *(arg1 + 0x20)
int32_t eax_10 = *(arg1 + 0x34) + (((arg4 & 3) + ((ecx_1 & 3) << 3)) << 2)
int32_t edx_2
int32_t ebx_1

if (arg3 != 0)
    ebx_1 = ebx - 1
    arg3 = 0xffffffff
    edx_2 = 0xffffffff
else
    ebx_1 = 0
    edx_2 = 1
    arg3 = 1

int16_t x87status
int16_t temp0
temp0, x87status = __fnstcw_memmem16(arg2)
arg4.w = temp0
int16_t x87control
int16_t x87status_1
x87control, x87status_1 = __fldcw_memmem16(arg4.w | 0xc00)
*(arg1 + 0x7c) = arg4

if (*(arg1 + 0x5c) != 0)
    sub_41f274(arg1, arg5)
    edx_2 = arg3

arg3 = 0

if (*(arg1 + 0x68) u> 0)
    int32_t ecx_6 = edx_2 << 4
    int32_t eax_16 = ebx_1 << 4
    int32_t ecx_8 = (edx_2 + ebx_1) << 4
    arg4 = (ebx_1 - edx_2) << 4
    arg5 = eax_16 + arg5 + 8
    
    do
        long double x87_r7_3 = fconvert.t(*(eax_10 + ((arg3 & 3) << 2)))
        float var_8_1 = fconvert.s(x87_r7_3)
        float var_44_1 =
            fconvert.s((fconvert.t(var_54) + fconvert.t(*(arg5 - 8))) * fconvert.t(255f))
        float var_40_1 =
            fconvert.s((fconvert.t(var_50) + fconvert.t(*(arg5 - 4))) * fconvert.t(255f))
        float var_3c_1 = fconvert.s((fconvert.t(var_4c) + fconvert.t(*arg5)) * fconvert.t(255f))
        int32_t var_34_1 = int.d(fconvert.t(fconvert.s(fconvert.t(var_44_1) + x87_r7_3)))
        int32_t var_30_1 = int.d(fconvert.t(fconvert.s(fconvert.t(var_40_1) + fconvert.t(var_8_1))))
        int32_t var_1c_1 = int.d(fconvert.t(fconvert.s(fconvert.t(var_3c_1) + fconvert.t(var_8_1))))
        
        if (*(arg1 + 0x5c) != 0)
            long double x87_r7_11 = fconvert.t(0.00392156886f)
            float* ebx_6 = *(arg1 + 0x5c) + arg4 + 0x10
            long double x87_r6_14 = (fconvert.t(var_44_1) - float.t(var_34_1)) * x87_r7_11
            *ebx_6 = fconvert.s(fconvert.t(0.1875f) * x87_r6_14 + fconvert.t(*ebx_6))
            float* ebx_8 = *(arg1 + 0x5c) + eax_16 + 0x10
            *ebx_8 = fconvert.s(fconvert.t(0.3125f) * x87_r6_14 + fconvert.t(*ebx_8))
            float* ebx_10 = *(arg1 + 0x5c) + ecx_8 + 0x10
            *ebx_10 = fconvert.s(fconvert.t(0.0625f) * x87_r6_14 + fconvert.t(*ebx_10))
            float* ebx_12 = *(arg1 + 0x5c) + arg4 + 0x14
            var_54 = fconvert.s(x87_r6_14 * fconvert.t(0.4375))
            long double x87_r6_18 = (fconvert.t(var_40_1) - float.t(var_30_1)) * x87_r7_11
            *ebx_12 = fconvert.s(fconvert.t(0.1875f) * x87_r6_18 + fconvert.t(*ebx_12))
            float* ebx_14 = *(arg1 + 0x5c) + eax_16 + 0x14
            *ebx_14 = fconvert.s(fconvert.t(0.3125f) * x87_r6_18 + fconvert.t(*ebx_14))
            float* ebx_16 = *(arg1 + 0x5c) + ecx_8 + 0x14
            *ebx_16 = fconvert.s(fconvert.t(0.0625f) * x87_r6_18 + fconvert.t(*ebx_16))
            float* edx_12 = *(arg1 + 0x5c) + arg4 + 0x18
            var_50 = fconvert.s(x87_r6_18 * fconvert.t(0.4375))
            long double x87_r7_12 = x87_r7_11 * (fconvert.t(var_3c_1) - float.t(var_1c_1))
            *edx_12 = fconvert.s(fconvert.t(0.1875f) * x87_r7_12 + fconvert.t(*edx_12))
            float* edx_14 = *(arg1 + 0x5c) + eax_16 + 0x18
            *edx_14 = fconvert.s(fconvert.t(0.3125f) * x87_r7_12 + fconvert.t(*edx_14))
            float* edx_16 = *(arg1 + 0x5c) + ecx_8 + 0x18
            *edx_16 = fconvert.s(fconvert.t(0.0625f) * x87_r7_12 + fconvert.t(*edx_16))
            var_4c = fconvert.s(x87_r7_12 * fconvert.t(0.4375))
        
        int32_t ebx_18 = var_34_1
        char edx_17 = -1
        
        if (var_34_1 s>= 0xff)
            ebx_18 = 0xff
        
        if (ebx_18 s<= 0)
            var_34_1 = 0
        else if (var_34_1 s>= 0xff)
            var_34_1 = 0xff
        
        int32_t ebx_19 = var_30_1
        
        if (var_30_1 s>= 0xff)
            ebx_19 = 0xff
        
        if (ebx_19 s<= 0)
            var_30_1 = 0
        else if (var_30_1 s>= 0xff)
            var_30_1 = 0xff
        
        int32_t ebx_20 = var_1c_1
        
        if (var_1c_1 s>= 0xff)
            ebx_20 = 0xff
        
        if (ebx_20 s<= 0)
            edx_17 = 0
        else if (var_1c_1 s< 0xff)
            edx_17 = var_1c_1.b
        
        *edi_4 = edx_17
        edi_4[1] = var_30_1.b
        edi_4[2] = var_34_1.b
        arg5 += ecx_6
        arg4 += ecx_6
        edi_4 = &edi_4[edx_2 * 3]
        eax_16 += ecx_6
        ecx_8 += ecx_6
        arg3 += 1
    while (arg3 u< *(arg1 + 0x68))

int16_t x87control_1
int16_t x87status_2
x87control_1, x87status_2 = __fldcw_memmem16((*(arg1 + 0x7c)).w)
