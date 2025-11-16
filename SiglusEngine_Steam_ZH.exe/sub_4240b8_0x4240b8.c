// 函数: sub_4240b8
// 地址: 0x4240b8
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
int32_t* var_8 =
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
        long double x87_r7_4 = fconvert.t(127f)
        long double x87_r6_1 = fconvert.t(*(eax_6 + ((arg3 & 3) << 2)))
        arg5 = fconvert.s(x87_r6_1)
        float var_48_1 = fconvert.s((fconvert.t(var_58) + fconvert.t(arg4[-2])) * x87_r7_4)
        float var_44_1 = fconvert.s((fconvert.t(var_54) + fconvert.t(arg4[-1])) * x87_r7_4)
        float var_40_1 = fconvert.s((fconvert.t(var_50) + fconvert.t(*arg4)) * x87_r7_4)
        float var_3c_1 = fconvert.s((fconvert.t(var_4c) + fconvert.t(arg4[1])) * x87_r7_4)
        int32_t var_38_1 = int.d(fconvert.t(fconvert.s(fconvert.t(var_48_1) + x87_r6_1)))
        int32_t var_34_1 = int.d(fconvert.t(fconvert.s(fconvert.t(var_44_1) + fconvert.t(arg5))))
        int32_t edx_11 = int.d(fconvert.t(fconvert.s(fconvert.t(var_40_1) + fconvert.t(arg5))))
        int32_t var_20_1 = int.d(fconvert.t(fconvert.s(fconvert.t(var_3c_1) + fconvert.t(arg5))))
        
        if (*(arg1 + 0x5c) != 0)
            long double x87_r7_16 = fconvert.t(0.00787401572f)
            float* ebx_6 = *(arg1 + 0x5c) + edi_4 + 0x10
            long double x87_r6_4 = (fconvert.t(var_48_1) - float.t(var_38_1)) * x87_r7_16
            *ebx_6 = fconvert.s(fconvert.t(0.1875f) * x87_r6_4 + fconvert.t(*ebx_6))
            float* ebx_8 = *(arg1 + 0x5c) + eax_13 + 0x10
            *ebx_8 = fconvert.s(fconvert.t(0.3125f) * x87_r6_4 + fconvert.t(*ebx_8))
            float* ebx_10 = *(arg1 + 0x5c) + ecx_11 + 0x10
            *ebx_10 = fconvert.s(fconvert.t(0.0625f) * x87_r6_4 + fconvert.t(*ebx_10))
            float* ebx_12 = *(arg1 + 0x5c) + edi_4 + 0x14
            var_58 = fconvert.s(x87_r6_4 * fconvert.t(0.4375))
            long double x87_r6_8 = (fconvert.t(var_44_1) - float.t(var_34_1)) * x87_r7_16
            *ebx_12 = fconvert.s(fconvert.t(0.1875f) * x87_r6_8 + fconvert.t(*ebx_12))
            float* ebx_14 = *(arg1 + 0x5c) + eax_13 + 0x14
            *ebx_14 = fconvert.s(fconvert.t(0.3125f) * x87_r6_8 + fconvert.t(*ebx_14))
            float* ebx_16 = *(arg1 + 0x5c) + ecx_11 + 0x14
            *ebx_16 = fconvert.s(fconvert.t(0.0625f) * x87_r6_8 + fconvert.t(*ebx_16))
            float* ebx_18 = *(arg1 + 0x5c) + edi_4 + 0x18
            var_54 = fconvert.s(x87_r6_8 * fconvert.t(0.4375))
            long double x87_r6_12 = (fconvert.t(var_40_1) - float.t(edx_11)) * x87_r7_16
            *ebx_18 = fconvert.s(fconvert.t(0.1875f) * x87_r6_12 + fconvert.t(*ebx_18))
            float* ebx_20 = *(arg1 + 0x5c) + eax_13 + 0x18
            *ebx_20 = fconvert.s(fconvert.t(0.3125f) * x87_r6_12 + fconvert.t(*ebx_20))
            float* ebx_22 = *(arg1 + 0x5c) + ecx_11 + 0x18
            *ebx_22 = fconvert.s(fconvert.t(0.0625f) * x87_r6_12 + fconvert.t(*ebx_22))
            float* ebx_24 = *(arg1 + 0x5c) + edi_4 + 0x1c
            var_50 = fconvert.s(x87_r6_12 * fconvert.t(0.4375))
            long double x87_r7_17 = x87_r7_16 * (fconvert.t(var_3c_1) - float.t(var_20_1))
            *ebx_24 = fconvert.s(fconvert.t(0.1875f) * x87_r7_17 + fconvert.t(*ebx_24))
            float* ebx_26 = *(arg1 + 0x5c) + eax_13 + 0x1c
            *ebx_26 = fconvert.s(fconvert.t(0.3125f) * x87_r7_17 + fconvert.t(*ebx_26))
            float* ebx_28 = *(arg1 + 0x5c) + ecx_11 + 0x1c
            *ebx_28 = fconvert.s(fconvert.t(0.0625f) * x87_r7_17 + fconvert.t(*ebx_28))
            var_4c = fconvert.s(x87_r7_17 * fconvert.t(0.4375))
        
        int32_t ebx_29 = var_38_1
        
        if (ebx_29 s>= 0x7f)
            ebx_29 = 0x7f
        
        if (ebx_29 s<= 0xffffff81)
            var_38_1 = 0xffffff81
        else if (var_38_1 s>= 0x7f)
            var_38_1 = 0x7f
        
        int32_t ebx_30 = var_34_1
        
        if (ebx_30 s>= 0x7f)
            ebx_30 = 0x7f
        
        if (ebx_30 s<= 0xffffff81)
            var_34_1 = 0xffffff81
        else if (var_34_1 s>= 0x7f)
            var_34_1 = 0x7f
        
        int32_t ebx_31
        
        ebx_31 = edx_11 s>= 0x7f ? 0x7f : edx_11
        
        if (ebx_31 s<= 0xffffff81)
            edx_11 = 0xffffff81
        else if (edx_11 s>= 0x7f)
            edx_11 = 0x7f
        
        int32_t ebx_32 = var_20_1
        
        if (ebx_32 s>= 0x7f)
            ebx_32 = 0x7f
        
        int32_t ebx_33
        
        if (ebx_32 s<= 0xffffff81)
            ebx_33 = 0xffffff81
        else
            ebx_33 = var_20_1
            
            if (ebx_33 s>= 0x7f)
                ebx_33 = 0x7f
        
        *var_8 = (((edx_11 & 0xff) | ebx_33 << 8) << 8 | zx.d(var_34_1.b)) << 8 | zx.d(var_38_1.b)
        arg4 = &arg4[ebx_2 * 4]
        eax_13 += ecx_9
        edi_4 += ecx_9
        ecx_11 += ecx_9
        arg3 += 1
        var_8 = &var_8[ebx_2]
    while (arg3 u< *(arg1 + 0x68))

int16_t x87control_1
int16_t x87status_2
x87control_1, x87status_2 = __fldcw_memmem16((*(arg1 + 0x7c)).w)
