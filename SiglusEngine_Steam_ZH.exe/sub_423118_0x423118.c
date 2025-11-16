// 函数: sub_423118
// 地址: 0x423118
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
int32_t edx = *(arg1 + 0x68)
float var_54 = fconvert.s(float.t(0))
float var_48 = fconvert.s(float.t(0))
arg3 = eax_3 & 1
char* edi_5 = (edx - 1) * arg3 + *(arg1 + 0x60) * eax_3 + *(arg1 + 0x64) * arg4 + *(arg1 + 0x20)
int32_t eax_6 = *(arg1 + 0x34) + (((arg4 & 3) + ((eax_3 & 3) << 3)) << 2)

if (arg3 != 0)
    arg3 = 0xffffffff
    arg4 = edx - 1
else
    arg4 = 0
    arg3 = 1

int16_t x87status
int16_t temp0
temp0, x87status = __fnstcw_memmem16(arg2)
int16_t x87control
int16_t x87status_1
x87control, x87status_1 = __fldcw_memmem16(temp0 | 0xc00)
*(arg1 + 0x7c) = temp0.d
int32_t i = 0

if (*(arg1 + 0x68) u> 0)
    void* eax_10 = arg5
    
    do
        i += 1
        *eax_10 = fconvert.s(fconvert.t(*(eax_10 + 8)) * fconvert.t(0.0720999986f)
            + fconvert.t(*eax_10) * fconvert.t(0.212500006f)
            + fconvert.t(*(eax_10 + 4)) * fconvert.t(0.715399981f))
        eax_10 += 0x10
    while (i u< *(arg1 + 0x68))

if (*(arg1 + 0x5c) != 0)
    sub_41f274(arg1, arg5)

int32_t i_1 = 0

if (*(arg1 + 0x68) u> 0)
    int32_t ecx_8 = arg3 << 4
    int32_t ebx_4 = (arg3 + arg4) << 4
    int32_t eax_12 = arg4 << 4
    int16_t var_c
    var_c.d = ebx_4
    arg4 = (arg4 - arg3) << 4
    
    do
        long double x87_r7_6 = fconvert.t(*(eax_6 + ((i_1 & 3) << 2)))
        void* ecx_15 = arg5 + eax_12
        float var_44_1 = fconvert.s((fconvert.t(var_54) + fconvert.t(*ecx_15)) * fconvert.t(15f))
        float var_38_1 =
            fconvert.s((fconvert.t(var_48) + fconvert.t(*(ecx_15 + 0xc))) * fconvert.t(15f))
        int32_t var_34_1 = int.d(fconvert.t(fconvert.s(fconvert.t(var_44_1) + x87_r7_6)))
        int32_t ecx_17 =
            int.d(fconvert.t(fconvert.s(fconvert.t(var_38_1) + fconvert.t(fconvert.s(x87_r7_6)))))
        
        if (*(arg1 + 0x5c) != 0)
            long double x87_r7_11 = fconvert.t(0.0666666701f)
            float* edx_5 = *(arg1 + 0x5c) + arg4 + 0x10
            long double x87_r6_15 = (fconvert.t(var_44_1) - float.t(var_34_1)) * x87_r7_11
            *edx_5 = fconvert.s(fconvert.t(0.1875f) * x87_r6_15 + fconvert.t(*edx_5))
            float* edx_7 = *(arg1 + 0x5c) + eax_12 + 0x10
            *edx_7 = fconvert.s(fconvert.t(0.3125f) * x87_r6_15 + fconvert.t(*edx_7))
            float* edx_9 = *(arg1 + 0x5c) + var_c.d + 0x10
            *edx_9 = fconvert.s(fconvert.t(0.0625f) * x87_r6_15 + fconvert.t(*edx_9))
            float* edx_11 = *(arg1 + 0x5c) + arg4 + 0x1c
            ebx_4 = var_c.d
            var_54 = fconvert.s(x87_r6_15 * fconvert.t(0.4375))
            long double x87_r7_12 = x87_r7_11 * (fconvert.t(var_38_1) - float.t(ecx_17))
            *edx_11 = fconvert.s(fconvert.t(0.1875f) * x87_r7_12 + fconvert.t(*edx_11))
            float* edx_13 = *(arg1 + 0x5c) + eax_12 + 0x1c
            *edx_13 = fconvert.s(fconvert.t(0.3125f) * x87_r7_12 + fconvert.t(*edx_13))
            float* edx_15 = *(arg1 + 0x5c) + ebx_4 + 0x1c
            *edx_15 = fconvert.s(fconvert.t(0.0625f) * x87_r7_12 + fconvert.t(*edx_15))
            var_48 = fconvert.s(x87_r7_12 * fconvert.t(0.4375))
        
        int32_t edx_16
        
        edx_16 = var_34_1 s>= 0xf ? 0xf : var_34_1
        
        if (edx_16 s<= 0)
            var_34_1 = 0
        else if (var_34_1 s>= 0xf)
            var_34_1 = 0xf
        
        int32_t edx_17
        
        edx_17 = ecx_17 s>= 0xf ? 0xf : ecx_17
        
        if (edx_17 s<= 0)
            ecx_17 = 0
        else if (ecx_17 s>= 0xf)
            ecx_17 = 0xf
        
        ecx_17.b <<= 4
        ecx_17.b |= var_34_1.b
        *edi_5 = ecx_17.b
        arg4 += ecx_8
        edi_5 = &edi_5[arg3]
        ebx_4 += ecx_8
        eax_12 += ecx_8
        i_1 += 1
        var_c.d = ebx_4
    while (i_1 u< *(arg1 + 0x68))

int16_t x87control_1
int16_t x87status_2
x87control_1, x87status_2 = __fldcw_memmem16((*(arg1 + 0x7c)).w)
