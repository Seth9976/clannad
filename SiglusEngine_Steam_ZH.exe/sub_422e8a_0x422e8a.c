// 函数: sub_422e8a
// 地址: 0x422e8a
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
float var_44 = fconvert.s(float.t(0))
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
int32_t i = 0

if (*(arg1 + 0x68) u> 0)
    void* eax_10 = arg5
    
    do
        i += 1
        *eax_10 = fconvert.s(fconvert.t(*(eax_10 + 8)) * fconvert.t(0.0720999986f)
            + fconvert.t(*(eax_10 + 4)) * fconvert.t(0.715399981f)
            + fconvert.t(*eax_10) * fconvert.t(0.212500006f))
        eax_10 += 0x10
    while (i u< *(arg1 + 0x68))

if (*(arg1 + 0x5c) != 0)
    sub_41f274(arg1, arg5)

arg3 = 0

if (*(arg1 + 0x68) u> 0)
    int32_t ecx_8 = edi_3 << 4
    int32_t eax_13 = ebx_1 << 4
    int32_t edi_5 = (edi_3 + ebx_1) << 4
    int32_t ebx_3 = (ebx_1 i- arg4) << 4
    
    do
        long double x87_r7_6 = fconvert.t(*(eax_6 + ((arg3 & 3) << 2)))
        void* ecx_12 = arg5 + eax_13
        float var_40_1 = fconvert.s((fconvert.t(var_50) + fconvert.t(*ecx_12)) * fconvert.t(255f))
        float var_34_1 =
            fconvert.s((fconvert.t(var_44) + fconvert.t(*(ecx_12 + 0xc))) * fconvert.t(255f))
        int32_t edx_6 = int.d(fconvert.t(fconvert.s(fconvert.t(var_40_1) + x87_r7_6)))
        int32_t var_30_1 = edx_6
        int32_t var_24_1 =
            int.d(fconvert.t(fconvert.s(fconvert.t(var_34_1) + fconvert.t(fconvert.s(x87_r7_6)))))
        
        if (*(arg1 + 0x5c) != 0)
            long double x87_r7_11 = fconvert.t(0.00392156886f)
            float* ecx_15 = ebx_3 + *(arg1 + 0x5c) + 0x10
            long double x87_r6_15 = (fconvert.t(var_40_1) - float.t(var_30_1)) * x87_r7_11
            *ecx_15 = fconvert.s(fconvert.t(0.1875f) * x87_r6_15 + fconvert.t(*ecx_15))
            float* ecx_17 = eax_13 + *(arg1 + 0x5c) + 0x10
            *ecx_17 = fconvert.s(fconvert.t(0.3125f) * x87_r6_15 + fconvert.t(*ecx_17))
            float* ecx_19 = edi_5 + *(arg1 + 0x5c) + 0x10
            *ecx_19 = fconvert.s(fconvert.t(0.0625f) * x87_r6_15 + fconvert.t(*ecx_19))
            float* ecx_21 = ebx_3 + *(arg1 + 0x5c) + 0x1c
            var_50 = fconvert.s(x87_r6_15 * fconvert.t(0.4375))
            long double x87_r7_12 = x87_r7_11 * (fconvert.t(var_34_1) - float.t(var_24_1))
            *ecx_21 = fconvert.s(fconvert.t(0.1875f) * x87_r7_12 + fconvert.t(*ecx_21))
            float* ecx_23 = eax_13 + *(arg1 + 0x5c) + 0x1c
            *ecx_23 = fconvert.s(fconvert.t(0.3125f) * x87_r7_12 + fconvert.t(*ecx_23))
            float* ecx_25 = edi_5 + *(arg1 + 0x5c) + 0x1c
            *ecx_25 = fconvert.s(fconvert.t(0.0625f) * x87_r7_12 + fconvert.t(*ecx_25))
            var_44 = fconvert.s(x87_r7_12 * fconvert.t(0.4375))
        
        if (edx_6 s>= 0xff)
            edx_6 = 0xff
        
        if (edx_6 s<= 0)
            var_30_1 = 0
        else if (var_30_1 s>= 0xff)
            var_30_1 = 0xff
        
        int32_t edx_7 = var_24_1
        
        if (var_24_1 s>= 0xff)
            edx_7 = 0xff
        
        if (edx_7 s<= 0)
            var_24_1 = 0
        else if (var_24_1 s>= 0xff)
            var_24_1 = 0xff
        
        eax_13 += ecx_8
        ebx_3 += ecx_8
        edi_5 += ecx_8
        int16_t ecx_26
        ecx_26:1.b = var_24_1.b
        *var_8 = ecx_26 | var_30_1.w
        var_8 = &var_8[edi_3]
        arg3 += 1
    while (arg3 u< *(arg1 + 0x68))

int16_t x87control_1
int16_t x87status_2
x87control_1, x87status_2 = __fldcw_memmem16((*(arg1 + 0x7c)).w)
