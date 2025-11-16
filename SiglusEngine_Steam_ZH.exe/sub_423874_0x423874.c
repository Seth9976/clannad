// 函数: sub_423874
// 地址: 0x423874
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
int32_t ebx = *(arg1 + 0x68)
float var_58 = fconvert.s(float.t(0))
float var_54 = fconvert.s(float.t(0))
float var_4c = fconvert.s(float.t(0))
arg3 = eax_3 & 1
int16_t* var_8 =
    *(arg1 + 0x60) * eax_3 + (((ebx - 1) * arg3) << 1) + *(arg1 + 0x64) i* arg4 + *(arg1 + 0x20)
int32_t eax_6 = *(arg1 + 0x34) + (((arg4 & 3) + ((eax_3 & 3) << 3)) << 2)
int32_t ebx_1
int32_t edi_3

if (arg3 != 0)
    ebx_1 = ebx - 1
    arg4 = -nanf
    edi_3 = 0xffffffff
else
    ebx_1 = 0
    edi_3 = 1
    arg4 = 1.40129846e-45f

int16_t x87status
int16_t temp0
temp0, x87status = __fnstcw_memmem16(arg2)
arg3.w = temp0
int16_t x87control
int16_t x87status_1
x87control, x87status_1 = __fldcw_memmem16(arg3.w | 0xc00)
*(arg1 + 0x7c) = arg3

if (*(arg1 + 0x5c) != 0)
    sub_41f274(arg1, arg5)

arg3 = 0

if (*(arg1 + 0x68) u> 0)
    int32_t ecx_9 = edi_3 << 4
    int32_t eax_12 = ebx_1 << 4
    int32_t edi_5 = (edi_3 + ebx_1) << 4
    int32_t ebx_3 = (ebx_1 i- arg4) << 4
    int32_t var_c_1 = ebx_3
    arg5 = eax_12 + arg5 + 0xc
    
    do
        long double x87_r7_3 = fconvert.t(*(eax_6 + ((arg3 & 3) << 2)))
        arg4 = fconvert.s(x87_r7_3)
        float var_48_1 =
            fconvert.s((fconvert.t(var_58) + fconvert.t(*(arg5 - 0xc))) * fconvert.t(15f))
        float var_44_1 =
            fconvert.s((fconvert.t(var_54) + fconvert.t(*(arg5 - 8))) * fconvert.t(15f))
        float var_3c_1 = fconvert.s((fconvert.t(var_4c) + fconvert.t(*arg5)) * fconvert.t(63f))
        int32_t var_38_1 = int.d(fconvert.t(fconvert.s(fconvert.t(var_48_1) + x87_r7_3)))
        int32_t ecx_16 = int.d(fconvert.t(fconvert.s(fconvert.t(var_44_1) + fconvert.t(arg4))))
        int32_t edx_5 = int.d(fconvert.t(fconvert.s(fconvert.t(var_3c_1) + fconvert.t(arg4))))
        
        if (*(arg1 + 0x5c) != 0)
            long double x87_r7_11 = fconvert.t(0.0666666701f)
            float* edx_7 = *(arg1 + 0x5c) + ebx_3 + 0x10
            long double x87_r6_14 = (fconvert.t(var_48_1) - float.t(var_38_1)) * x87_r7_11
            *edx_7 = fconvert.s(fconvert.t(0.1875f) * x87_r6_14 + fconvert.t(*edx_7))
            float* edx_9 = *(arg1 + 0x5c) + eax_12 + 0x10
            *edx_9 = fconvert.s(fconvert.t(0.3125f) * x87_r6_14 + fconvert.t(*edx_9))
            float* edx_11 = *(arg1 + 0x5c) + edi_5 + 0x10
            *edx_11 = fconvert.s(fconvert.t(0.0625f) * x87_r6_14 + fconvert.t(*edx_11))
            float* edx_13 = *(arg1 + 0x5c) + ebx_3 + 0x14
            var_58 = fconvert.s(x87_r6_14 * fconvert.t(0.4375))
            long double x87_r7_12 = x87_r7_11 * (fconvert.t(var_44_1) - float.t(ecx_16))
            *edx_13 = fconvert.s(fconvert.t(0.1875f) * x87_r7_12 + fconvert.t(*edx_13))
            float* edx_15 = *(arg1 + 0x5c) + eax_12 + 0x14
            *edx_15 = fconvert.s(fconvert.t(0.3125f) * x87_r7_12 + fconvert.t(*edx_15))
            float* edx_17 = *(arg1 + 0x5c) + edi_5 + 0x14
            *edx_17 = fconvert.s(fconvert.t(0.0625f) * x87_r7_12 + fconvert.t(*edx_17))
            float* edx_19 = *(arg1 + 0x5c) + ebx_3 + 0x1c
            var_54 = fconvert.s(x87_r7_12 * fconvert.t(0.4375))
            long double x87_r7_16 =
                (fconvert.t(var_3c_1) - float.t(edx_5)) * fconvert.t(0.0158730168f)
            *edx_19 = fconvert.s(fconvert.t(0.1875f) * x87_r7_16 + fconvert.t(*edx_19))
            float* edx_21 = *(arg1 + 0x5c) + eax_12 + 0x1c
            *edx_21 = fconvert.s(fconvert.t(0.3125f) * x87_r7_16 + fconvert.t(*edx_21))
            float* edx_23 = *(arg1 + 0x5c) + edi_5 + 0x1c
            *edx_23 = fconvert.s(fconvert.t(0.0625f) * x87_r7_16 + fconvert.t(*edx_23))
            var_4c = fconvert.s(x87_r7_16 * fconvert.t(0.4375))
        
        int32_t ebx_4 = var_38_1
        
        if (ebx_4 s>= 0xf)
            ebx_4 = 0xf
        
        if (ebx_4 s<= 0xfffffff1)
            var_38_1 = 0xfffffff1
        else if (var_38_1 s>= 0xf)
            var_38_1 = 0xf
        
        int32_t ebx_5
        
        ebx_5 = ecx_16 s>= 0xf ? 0xf : ecx_16
        
        if (ebx_5 s<= 0xfffffff1)
            ecx_16 = 0xfffffff1
        else if (ecx_16 s>= 0xf)
            ecx_16 = 0xf
        
        int32_t ebx_6
        
        ebx_6 = edx_5 s>= 0x3f ? 0x3f : edx_5
        
        if (ebx_6 s<= 0xffffffc1)
            edx_5 = 0xffffffc1
        else if (edx_5 s>= 0x3f)
            edx_5 = 0x3f
        
        *var_8 = (((ecx_16 & 0x1f) | edx_5 << 5) << 5).w | (var_38_1.w & 0x1f)
        var_8 = &var_8[edi_3]
        arg5 += ecx_9
        ebx_3 = var_c_1 + ecx_9
        eax_12 += ecx_9
        edi_5 += ecx_9
        arg3 += 1
        var_c_1 = ebx_3
    while (arg3 u< *(arg1 + 0x68))

int16_t x87control_1
int16_t x87status_2
x87control_1, x87status_2 = __fldcw_memmem16((*(arg1 + 0x7c)).w)
