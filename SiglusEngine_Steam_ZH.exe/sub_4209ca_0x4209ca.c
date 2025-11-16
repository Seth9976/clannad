// 函数: sub_4209ca
// 地址: 0x4209ca
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_64 = edi

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
int32_t edx = *(arg1 + 0x68)
float var_58 = fconvert.s(float.t(0))
float var_54 = fconvert.s(float.t(0))
float var_50 = fconvert.s(float.t(0))
arg3 = eax_3 & 1
char* ebx_4 = (edx - 1) * arg3 + *(arg1 + 0x60) * eax_3 + *(arg1 + 0x64) * arg4 + *(arg1 + 0x20)
int32_t eax_6 = *(arg1 + 0x34) + (((arg4 & 3) + ((eax_3 & 3) << 3)) << 2)
char* var_10 = ebx_4
int32_t var_8

if (arg3 != 0)
    arg3 = 0xffffffff
    var_8 = edx - 1
else
    var_8 = 0
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

arg4 = 0

if (*(arg1 + 0x68) u> 0)
    int32_t ecx_8 = arg3 << 4
    int32_t eax_11 = var_8 << 4
    int32_t edi_5 = (arg3 + var_8) << 4
    int32_t var_8_1 = (var_8 - arg3) << 4
    arg5 = eax_11 + arg5 + 8
    
    do
        long double x87_r7_3 = fconvert.t(*(eax_6 + ((arg4 & 3) << 2)))
        float var_c_1 = fconvert.s(x87_r7_3)
        float var_48_1 = fconvert.s((fconvert.t(var_58) + fconvert.t(*(arg5 - 8))) * fconvert.t(7f))
        float var_44_1 = fconvert.s((fconvert.t(var_54) + fconvert.t(*(arg5 - 4))) * fconvert.t(7f))
        float var_40_1 = fconvert.s((fconvert.t(var_50) + fconvert.t(*arg5)) * fconvert.t(3f))
        int32_t ecx_17 = int.d(fconvert.t(fconvert.s(fconvert.t(var_48_1) + x87_r7_3)))
        int32_t var_34_1 = int.d(fconvert.t(fconvert.s(fconvert.t(var_44_1) + fconvert.t(var_c_1))))
        int32_t var_30_1 = int.d(fconvert.t(fconvert.s(fconvert.t(var_40_1) + fconvert.t(var_c_1))))
        
        if (*(arg1 + 0x5c) != 0)
            long double x87_r7_11 = fconvert.t(0.142857149f)
            float* ebx_6 = *(arg1 + 0x5c) + var_8_1 + 0x10
            long double x87_r6_14 = (fconvert.t(var_48_1) - float.t(ecx_17)) * x87_r7_11
            *ebx_6 = fconvert.s(fconvert.t(0.1875f) * x87_r6_14 + fconvert.t(*ebx_6))
            float* ebx_8 = *(arg1 + 0x5c) + eax_11 + 0x10
            *ebx_8 = fconvert.s(fconvert.t(0.3125f) * x87_r6_14 + fconvert.t(*ebx_8))
            float* ebx_10 = *(arg1 + 0x5c) + edi_5 + 0x10
            *ebx_10 = fconvert.s(fconvert.t(0.0625f) * x87_r6_14 + fconvert.t(*ebx_10))
            float* ebx_12 = *(arg1 + 0x5c) + var_8_1 + 0x14
            var_58 = fconvert.s(x87_r6_14 * fconvert.t(0.4375))
            long double x87_r7_12 = x87_r7_11 * (fconvert.t(var_44_1) - float.t(var_34_1))
            *ebx_12 = fconvert.s(fconvert.t(0.1875f) * x87_r7_12 + fconvert.t(*ebx_12))
            float* ebx_14 = *(arg1 + 0x5c) + eax_11 + 0x14
            *ebx_14 = fconvert.s(fconvert.t(0.3125f) * x87_r7_12 + fconvert.t(*ebx_14))
            float* ebx_16 = *(arg1 + 0x5c) + edi_5 + 0x14
            *ebx_16 = fconvert.s(fconvert.t(0.0625f) * x87_r7_12 + fconvert.t(*ebx_16))
            float* edx_7 = *(arg1 + 0x5c) + var_8_1 + 0x18
            ebx_4 = var_10
            var_54 = fconvert.s(x87_r7_12 * fconvert.t(0.4375))
            long double x87_r7_16 =
                (fconvert.t(var_40_1) - float.t(var_30_1)) * fconvert.t(0.333333343f)
            *edx_7 = fconvert.s(fconvert.t(0.1875f) * x87_r7_16 + fconvert.t(*edx_7))
            float* edx_9 = *(arg1 + 0x5c) + eax_11 + 0x18
            *edx_9 = fconvert.s(fconvert.t(0.3125f) * x87_r7_16 + fconvert.t(*edx_9))
            float* edx_11 = *(arg1 + 0x5c) + edi_5 + 0x18
            *edx_11 = fconvert.s(fconvert.t(0.0625f) * x87_r7_16 + fconvert.t(*edx_11))
            var_50 = fconvert.s(x87_r7_16 * fconvert.t(0.4375))
        
        int32_t edx_12
        
        edx_12 = ecx_17 s>= 7 ? 7 : ecx_17
        
        if (edx_12 s<= 0)
            ecx_17 = 0
        else if (ecx_17 s>= 7)
            ecx_17 = 7
        
        int32_t edx_13
        
        edx_13 = var_34_1 s>= 7 ? 7 : var_34_1
        
        if (edx_13 s<= 0)
            var_34_1 = 0
        else if (var_34_1 s>= 7)
            var_34_1 = 7
        
        int32_t edx_14
        
        edx_14 = var_30_1 s>= 3 ? 3 : var_30_1
        
        if (edx_14 s<= 0)
            var_30_1 = 0
        else if (var_30_1 s>= 3)
            var_30_1 = 3
        
        ecx_17.b <<= 3
        ecx_17.b |= var_34_1.b
        ecx_17.b <<= 2
        ecx_17.b |= var_30_1.b
        *ebx_4 = ecx_17.b
        ebx_4 = &ebx_4[arg3]
        arg5 += ecx_8
        var_8_1 += ecx_8
        eax_11 += ecx_8
        edi_5 += ecx_8
        arg4 += 1
        var_10 = ebx_4
    while (arg4 u< *(arg1 + 0x68))

int16_t x87control_1
int16_t x87status_2
x87control_1, x87status_2 = __fldcw_memmem16((*(arg1 + 0x7c)).w)
