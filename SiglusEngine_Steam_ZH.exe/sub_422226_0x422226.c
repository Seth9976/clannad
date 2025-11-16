// 函数: sub_422226
// 地址: 0x422226
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_64 = edi

if (*(arg1 + 0x54) != 0)
    float eax_1
    long double st0_1
    st0_1, eax_1 = sub_41da34(arg1, arg5)
    arg5 = eax_1

if (*(arg1 + 0x10) != 0)
    float eax_2
    eax_2, arg2 = sub_41ef58(arg1, arg2, arg5)
    arg5 = eax_2

int32_t eax_3 = arg3
int32_t edi_1 = *(arg1 + 0x68)
float var_58 = fconvert.s(float.t(0))
float var_54 = fconvert.s(float.t(0))
float var_50 = fconvert.s(float.t(0))
float var_4c = fconvert.s(float.t(0))
arg3 = eax_3 & 1
void* var_8 =
    *(arg1 + 0x60) * eax_3 + (((edi_1 - 1) * arg3) << 2) + *(arg1 + 0x64) * arg4 + *(arg1 + 0x20)
int32_t eax_6 = *(arg1 + 0x34) + (((arg4 & 3) + ((eax_3 & 3) << 3)) << 2)
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
    int32_t ecx_9 = ebx_2 << 4
    int32_t eax_13 = edi_2 << 4
    int32_t ecx_11 = (ebx_2 + edi_2) << 4
    int32_t edi_4 = (edi_2 - ebx_2) << 4
    arg4 = eax_13 i+ arg5 + 8
    
    do
        long double x87_r7_4 = fconvert.t(*(eax_6 + ((arg3 & 3) << 2)))
        arg5 = fconvert.s(x87_r7_4)
        float var_48_1 = fconvert.s((fconvert.t(var_58) + fconvert.t(arg4[-2])) * fconvert.t(1023f))
        float var_44_1 = fconvert.s((fconvert.t(var_54) + fconvert.t(arg4[-1])) * fconvert.t(1023f))
        float var_40_1 = fconvert.s((fconvert.t(var_50) + fconvert.t(*arg4)) * fconvert.t(1023f))
        float var_3c_1 = fconvert.s((fconvert.t(var_4c) + fconvert.t(arg4[1])) * fconvert.t(3f))
        int32_t var_38_1 = int.d(fconvert.t(fconvert.s(fconvert.t(var_48_1) + x87_r7_4)))
        int32_t var_34_1 = int.d(fconvert.t(fconvert.s(fconvert.t(var_44_1) + fconvert.t(arg5))))
        int32_t var_30_1 = int.d(fconvert.t(fconvert.s(fconvert.t(var_40_1) + fconvert.t(arg5))))
        int32_t edx_12 = int.d(fconvert.t(fconvert.s(fconvert.t(var_3c_1) + fconvert.t(arg5))))
        
        if (*(arg1 + 0x5c) != 0)
            long double x87_r7_15 = fconvert.t(0.000977517106f)
            float* ebx_5 = *(arg1 + 0x5c) + edi_4 + 0x10
            long double x87_r6_17 = (fconvert.t(var_48_1) - float.t(var_38_1)) * x87_r7_15
            *ebx_5 = fconvert.s(fconvert.t(0.1875f) * x87_r6_17 + fconvert.t(*ebx_5))
            float* ebx_7 = *(arg1 + 0x5c) + eax_13 + 0x10
            *ebx_7 = fconvert.s(fconvert.t(0.3125f) * x87_r6_17 + fconvert.t(*ebx_7))
            float* ebx_9 = *(arg1 + 0x5c) + ecx_11 + 0x10
            *ebx_9 = fconvert.s(fconvert.t(0.0625f) * x87_r6_17 + fconvert.t(*ebx_9))
            float* ebx_11 = *(arg1 + 0x5c) + edi_4 + 0x14
            var_58 = fconvert.s(x87_r6_17 * fconvert.t(0.4375))
            long double x87_r6_21 = (fconvert.t(var_44_1) - float.t(var_34_1)) * x87_r7_15
            *ebx_11 = fconvert.s(fconvert.t(0.1875f) * x87_r6_21 + fconvert.t(*ebx_11))
            float* ebx_13 = *(arg1 + 0x5c) + eax_13 + 0x14
            *ebx_13 = fconvert.s(fconvert.t(0.3125f) * x87_r6_21 + fconvert.t(*ebx_13))
            float* ebx_15 = *(arg1 + 0x5c) + ecx_11 + 0x14
            *ebx_15 = fconvert.s(fconvert.t(0.0625f) * x87_r6_21 + fconvert.t(*ebx_15))
            float* ebx_17 = *(arg1 + 0x5c) + edi_4 + 0x18
            var_54 = fconvert.s(x87_r6_21 * fconvert.t(0.4375))
            long double x87_r7_16 = x87_r7_15 * (fconvert.t(var_40_1) - float.t(var_30_1))
            *ebx_17 = fconvert.s(fconvert.t(0.1875f) * x87_r7_16 + fconvert.t(*ebx_17))
            float* ebx_19 = *(arg1 + 0x5c) + eax_13 + 0x18
            *ebx_19 = fconvert.s(fconvert.t(0.3125f) * x87_r7_16 + fconvert.t(*ebx_19))
            float* ebx_21 = *(arg1 + 0x5c) + ecx_11 + 0x18
            *ebx_21 = fconvert.s(fconvert.t(0.0625f) * x87_r7_16 + fconvert.t(*ebx_21))
            float* ebx_23 = *(arg1 + 0x5c) + edi_4 + 0x1c
            var_50 = fconvert.s(x87_r7_16 * fconvert.t(0.4375))
            long double x87_r7_20 =
                (fconvert.t(var_3c_1) - float.t(edx_12)) * fconvert.t(0.333333343f)
            *ebx_23 = fconvert.s(fconvert.t(0.1875f) * x87_r7_20 + fconvert.t(*ebx_23))
            float* ebx_25 = *(arg1 + 0x5c) + eax_13 + 0x1c
            *ebx_25 = fconvert.s(fconvert.t(0.3125f) * x87_r7_20 + fconvert.t(*ebx_25))
            float* ebx_27 = *(arg1 + 0x5c) + ecx_11 + 0x1c
            *ebx_27 = fconvert.s(fconvert.t(0.0625f) * x87_r7_20 + fconvert.t(*ebx_27))
            var_4c = fconvert.s(x87_r7_20 * fconvert.t(0.4375))
        
        int32_t ebx_28 = var_38_1
        
        if (ebx_28 s>= 0x3ff)
            ebx_28 = 0x3ff
        
        if (ebx_28 s<= 0)
            var_38_1 = 0
        else if (var_38_1 s>= 0x3ff)
            var_38_1 = 0x3ff
        
        int32_t ebx_29 = var_34_1
        
        if (ebx_29 s>= 0x3ff)
            ebx_29 = 0x3ff
        
        if (ebx_29 s<= 0)
            var_34_1 = 0
        else if (var_34_1 s>= 0x3ff)
            var_34_1 = 0x3ff
        
        int32_t ebx_30 = var_30_1
        
        if (ebx_30 s>= 0x3ff)
            ebx_30 = 0x3ff
        
        if (ebx_30 s<= 0)
            var_30_1 = 0
        else if (var_30_1 s>= 0x3ff)
            var_30_1 = 0x3ff
        
        int32_t ebx_31
        
        ebx_31 = edx_12 s>= 3 ? 3 : edx_12
        
        if (ebx_31 s<= 0)
            edx_12 = 0
        else if (edx_12 s>= 3)
            edx_12 = 3
        
        int32_t* ebx_32 = var_8
        *ebx_32 = ((edx_12 << 0xa | var_38_1) << 0xa | var_34_1) << 0xa | var_30_1
        arg4 = &arg4[ebx_2 * 4]
        eax_13 += ecx_9
        edi_4 += ecx_9
        ecx_11 += ecx_9
        arg3 += 1
        var_8 = &ebx_32[ebx_2]
    while (arg3 u< *(arg1 + 0x68))

int16_t x87control_1
int16_t x87status_2
x87control_1, x87status_2 = __fldcw_memmem16((*(arg1 + 0x7c)).w)
