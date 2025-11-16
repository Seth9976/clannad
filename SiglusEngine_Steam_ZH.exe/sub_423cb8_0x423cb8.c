// 函数: sub_423cb8
// 地址: 0x423cb8
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
int32_t ebx = *(arg1 + 0x68)
float var_54 = fconvert.s(float.t(0))
float var_50 = fconvert.s(float.t(0))
float var_48 = fconvert.s(float.t(0))
arg3 = eax_3 & 1
int32_t eax_6 = *(arg1 + 0x34) + (((arg4 & 3) + ((eax_3 & 3) << 3)) << 2)
int32_t* var_8 =
    *(arg1 + 0x60) * eax_3 + (((ebx - 1) * arg3) << 2) + *(arg1 + 0x64) i* arg4 + *(arg1 + 0x20)
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
    int32_t ecx_8 = edi_3 << 4
    int32_t eax_13 = ebx_1 << 4
    int32_t edi_5 = (edi_3 + ebx_1) << 4
    int32_t ebx_3 = (ebx_1 i- arg4) << 4
    arg5 = eax_13 + arg5 + 0xc
    
    do
        long double x87_r7_3 = fconvert.t(*(eax_6 + ((arg3 & 3) << 2)))
        arg4 = fconvert.s(x87_r7_3)
        float var_44_1 =
            fconvert.s((fconvert.t(var_54) + fconvert.t(*(arg5 - 0xc))) * fconvert.t(127f))
        float var_40_1 =
            fconvert.s((fconvert.t(var_50) + fconvert.t(*(arg5 - 8))) * fconvert.t(127f))
        float var_38_1 = fconvert.s((fconvert.t(var_48) + fconvert.t(*arg5)) * fconvert.t(255f))
        int32_t edx_6 = int.d(fconvert.t(fconvert.s(fconvert.t(var_44_1) + x87_r7_3)))
        int32_t var_34_1 = edx_6
        int32_t var_30_1 = int.d(fconvert.t(fconvert.s(fconvert.t(var_40_1) + fconvert.t(arg4))))
        int32_t var_28_1 = int.d(fconvert.t(fconvert.s(fconvert.t(var_38_1) + fconvert.t(arg4))))
        
        if (*(arg1 + 0x5c) != 0)
            long double x87_r7_11 = fconvert.t(0.00787401572f)
            float* ecx_17 = *(arg1 + 0x5c) + ebx_3 + 0x10
            long double x87_r6_14 = (fconvert.t(var_44_1) - float.t(var_34_1)) * x87_r7_11
            *ecx_17 = fconvert.s(fconvert.t(0.1875f) * x87_r6_14 + fconvert.t(*ecx_17))
            float* ecx_19 = *(arg1 + 0x5c) + eax_13 + 0x10
            *ecx_19 = fconvert.s(fconvert.t(0.3125f) * x87_r6_14 + fconvert.t(*ecx_19))
            float* ecx_21 = *(arg1 + 0x5c) + edi_5 + 0x10
            *ecx_21 = fconvert.s(fconvert.t(0.0625f) * x87_r6_14 + fconvert.t(*ecx_21))
            float* ecx_23 = *(arg1 + 0x5c) + ebx_3 + 0x14
            var_54 = fconvert.s(x87_r6_14 * fconvert.t(0.4375))
            long double x87_r7_12 = x87_r7_11 * (fconvert.t(var_40_1) - float.t(var_30_1))
            *ecx_23 = fconvert.s(fconvert.t(0.1875f) * x87_r7_12 + fconvert.t(*ecx_23))
            float* ecx_25 = *(arg1 + 0x5c) + eax_13 + 0x14
            *ecx_25 = fconvert.s(fconvert.t(0.3125f) * x87_r7_12 + fconvert.t(*ecx_25))
            float* ecx_27 = *(arg1 + 0x5c) + edi_5 + 0x14
            *ecx_27 = fconvert.s(fconvert.t(0.0625f) * x87_r7_12 + fconvert.t(*ecx_27))
            float* ecx_29 = *(arg1 + 0x5c) + ebx_3 + 0x1c
            var_50 = fconvert.s(x87_r7_12 * fconvert.t(0.4375))
            long double x87_r7_16 =
                (fconvert.t(var_38_1) - float.t(var_28_1)) * fconvert.t(0.00392156886f)
            *ecx_29 = fconvert.s(fconvert.t(0.1875f) * x87_r7_16 + fconvert.t(*ecx_29))
            float* ecx_31 = *(arg1 + 0x5c) + eax_13 + 0x1c
            *ecx_31 = fconvert.s(fconvert.t(0.3125f) * x87_r7_16 + fconvert.t(*ecx_31))
            float* ecx_33 = *(arg1 + 0x5c) + edi_5 + 0x1c
            *ecx_33 = fconvert.s(fconvert.t(0.0625f) * x87_r7_16 + fconvert.t(*ecx_33))
            var_48 = fconvert.s(x87_r7_16 * fconvert.t(0.4375))
        
        if (edx_6 s>= 0x7f)
            edx_6 = 0x7f
        
        if (edx_6 s<= 0xffffff81)
            var_34_1 = 0xffffff81
        else if (var_34_1 s>= 0x7f)
            var_34_1 = 0x7f
        
        int32_t edx_7 = var_30_1
        
        if (edx_7 s>= 0x7f)
            edx_7 = 0x7f
        
        if (edx_7 s<= 0xffffff81)
            var_30_1 = 0xffffff81
        else if (var_30_1 s>= 0x7f)
            var_30_1 = 0x7f
        
        int32_t edx_8 = var_28_1
        
        if (var_28_1 s>= 0xff)
            edx_8 = 0xff
        
        if (edx_8 s<= 0xffffff01)
            var_28_1 = 0xffffff01
        else if (var_28_1 s>= 0xff)
            var_28_1 = 0xff
        
        int32_t edx_9
        edx_9:1.b = var_28_1.b
        edx_9.b = var_30_1.b
        *var_8 = edx_9 << 8 | zx.d(var_34_1.b)
        var_8 = &var_8[edi_3]
        arg5 += ecx_8
        eax_13 += ecx_8
        ebx_3 += ecx_8
        edi_5 += ecx_8
        arg3 += 1
    while (arg3 u< *(arg1 + 0x68))

int16_t x87control_1
int16_t x87status_2
x87control_1, x87status_2 = __fldcw_memmem16((*(arg1 + 0x7c)).w)
