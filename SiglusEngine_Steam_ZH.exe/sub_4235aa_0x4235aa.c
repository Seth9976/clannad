// 函数: sub_4235aa
// 地址: 0x4235aa
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_5c = edi

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
float var_50 = fconvert.s(float.t(0))
float var_4c = fconvert.s(float.t(0))
arg3 = eax_3 & 1
int32_t eax_6 = *(arg1 + 0x34) + (((arg4 & 3) + ((eax_3 & 3) << 3)) << 2)
int16_t* var_8 =
    *(arg1 + 0x60) * eax_3 + (((ebx - 1) * arg3) << 1) + *(arg1 + 0x64) i* arg4 + *(arg1 + 0x20)
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
    int32_t eax_12 = ebx_1 << 4
    int32_t edi_5 = (edi_3 + ebx_1) << 4
    int32_t ebx_3 = (ebx_1 i- arg4) << 4
    
    do
        long double x87_r7_2 = fconvert.t(*(eax_6 + ((arg3 & 3) << 2)))
        void* ecx_12 = arg5 + eax_12
        float var_40_1 = fconvert.s((fconvert.t(var_50) + fconvert.t(*ecx_12)) * fconvert.t(127f))
        float var_3c_1 =
            fconvert.s((fconvert.t(var_4c) + fconvert.t(*(ecx_12 + 4))) * fconvert.t(127f))
        int32_t var_30_1 = int.d(fconvert.t(fconvert.s(fconvert.t(var_40_1) + x87_r7_2)))
        int32_t edx_6 =
            int.d(fconvert.t(fconvert.s(fconvert.t(var_3c_1) + fconvert.t(fconvert.s(x87_r7_2)))))
        
        if (*(arg1 + 0x5c) != 0)
            long double x87_r7_7 = fconvert.t(0.00787401572f)
            float* ecx_15 = *(arg1 + 0x5c) + ebx_3 + 0x10
            long double x87_r6_11 = (fconvert.t(var_40_1) - float.t(var_30_1)) * x87_r7_7
            *ecx_15 = fconvert.s(fconvert.t(0.1875f) * x87_r6_11 + fconvert.t(*ecx_15))
            float* ecx_17 = eax_12 + *(arg1 + 0x5c) + 0x10
            *ecx_17 = fconvert.s(fconvert.t(0.3125f) * x87_r6_11 + fconvert.t(*ecx_17))
            float* ecx_19 = *(arg1 + 0x5c) + edi_5 + 0x10
            *ecx_19 = fconvert.s(fconvert.t(0.0625f) * x87_r6_11 + fconvert.t(*ecx_19))
            float* ecx_21 = *(arg1 + 0x5c) + ebx_3 + 0x14
            var_50 = fconvert.s(x87_r6_11 * fconvert.t(0.4375))
            long double x87_r7_8 = x87_r7_7 * (fconvert.t(var_3c_1) - float.t(edx_6))
            *ecx_21 = fconvert.s(fconvert.t(0.1875f) * x87_r7_8 + fconvert.t(*ecx_21))
            float* ecx_23 = eax_12 + *(arg1 + 0x5c) + 0x14
            *ecx_23 = fconvert.s(fconvert.t(0.3125f) * x87_r7_8 + fconvert.t(*ecx_23))
            float* ecx_25 = *(arg1 + 0x5c) + edi_5 + 0x14
            *ecx_25 = fconvert.s(fconvert.t(0.0625f) * x87_r7_8 + fconvert.t(*ecx_25))
            var_4c = fconvert.s(x87_r7_8 * fconvert.t(0.4375))
        
        int32_t ecx_26
        
        ecx_26 = var_30_1 s>= 0x7f ? 0x7f : var_30_1
        
        if (ecx_26 s<= 0xffffff81)
            var_30_1 = 0xffffff81
        else if (var_30_1 s>= 0x7f)
            var_30_1 = 0x7f
        
        int32_t ecx_27
        
        ecx_27 = edx_6 s>= 0x7f ? 0x7f : edx_6
        
        if (ecx_27 s<= 0xffffff81)
            edx_6 = 0xffffff81
        else if (edx_6 s>= 0x7f)
            edx_6 = 0x7f
        
        ecx_27.w = zx.w(var_30_1.b)
        eax_12 += ecx_8
        ebx_3 += ecx_8
        edi_5 += ecx_8
        ecx_27:1.b = edx_6.b
        *var_8 = ecx_27.w
        var_8 = &var_8[edi_3]
        arg3 += 1
    while (arg3 u< *(arg1 + 0x68))

int16_t x87control_1
int16_t x87status_2
x87control_1, x87status_2 = __fldcw_memmem16((*(arg1 + 0x7c)).w)
