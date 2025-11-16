// 函数: sub_425590
// 地址: 0x425590
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
float var_48 = fconvert.s(float.t(0))
arg3 = eax_3 & 1
int32_t* ebx_2 =
    *(arg1 + 0x60) * eax_3 + (((edi_1 - 1) * arg3) << 2) + *(arg1 + 0x64) * arg4 + *(arg1 + 0x20)
int32_t eax_6 = *(arg1 + 0x34) + (((arg4 & 3) + ((eax_3 & 3) << 3)) << 2)
int32_t* var_8 = ebx_2
int32_t edi_2

if (arg3 != 0)
    edi_2 = edi_1 - 1
    arg4 = 0xffffffff
else
    edi_2 = 0
    arg4 = 1

int16_t x87status
int16_t temp0
temp0, x87status = __fnstcw_memmem16(arg2)
arg3.w = temp0
int16_t x87control
int16_t x87status_1
x87control, x87status_1 = __fldcw_memmem16(arg3.w | 0xc00)
int32_t i = 0
*(arg1 + 0x7c) = arg3

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
    int32_t ecx_8 = arg4 << 4
    int32_t eax_14 = edi_2 << 4
    int32_t edx_6 = (arg4 + edi_2) << 4
    arg4 = (edi_2 - arg4) << 4
    
    do
        long double x87_r7_6 = fconvert.t(*(eax_6 + ((arg3 & 3) << 2)))
        void* ecx_12 = arg5 + eax_14
        float var_44_1 = fconvert.s((fconvert.t(var_54) + fconvert.t(*ecx_12)) * fconvert.t(65535f))
        float var_38_1 =
            fconvert.s((fconvert.t(var_48) + fconvert.t(*(ecx_12 + 0xc))) * fconvert.t(65535f))
        int32_t var_34_1 = int.d(fconvert.t(fconvert.s(fconvert.t(var_44_1) + x87_r7_6)))
        int32_t ecx_14 =
            int.d(fconvert.t(fconvert.s(fconvert.t(var_38_1) + fconvert.t(fconvert.s(x87_r7_6)))))
        
        if (*(arg1 + 0x5c) != 0)
            long double x87_r7_11 = fconvert.t(1.52590219e-05f)
            float* edi_7 = arg4 + *(arg1 + 0x5c) + 0x10
            long double x87_r6_15 = (fconvert.t(var_44_1) - float.t(var_34_1)) * x87_r7_11
            *edi_7 = fconvert.s(fconvert.t(0.1875f) * x87_r6_15 + fconvert.t(*edi_7))
            float* edi_9 = eax_14 + *(arg1 + 0x5c) + 0x10
            *edi_9 = fconvert.s(fconvert.t(0.3125f) * x87_r6_15 + fconvert.t(*edi_9))
            float* edi_11 = edx_6 + *(arg1 + 0x5c) + 0x10
            *edi_11 = fconvert.s(fconvert.t(0.0625f) * x87_r6_15 + fconvert.t(*edi_11))
            float* edi_13 = arg4 + *(arg1 + 0x5c) + 0x1c
            ebx_2 = var_8
            var_54 = fconvert.s(x87_r6_15 * fconvert.t(0.4375))
            long double x87_r7_12 = x87_r7_11 * (fconvert.t(var_38_1) - float.t(ecx_14))
            *edi_13 = fconvert.s(fconvert.t(0.1875f) * x87_r7_12 + fconvert.t(*edi_13))
            float* edi_15 = eax_14 + *(arg1 + 0x5c) + 0x1c
            *edi_15 = fconvert.s(fconvert.t(0.3125f) * x87_r7_12 + fconvert.t(*edi_15))
            float* edi_17 = edx_6 + *(arg1 + 0x5c) + 0x1c
            *edi_17 = fconvert.s(fconvert.t(0.0625f) * x87_r7_12 + fconvert.t(*edi_17))
            var_48 = fconvert.s(x87_r7_12 * fconvert.t(0.4375))
        
        int32_t edi_18 = var_34_1
        
        if (edi_18 s>= 0xffff)
            edi_18 = 0xffff
        
        if (edi_18 s<= 0)
            var_34_1 = 0
        else if (var_34_1 s>= 0xffff)
            var_34_1 = 0xffff
        
        int32_t edi_19 = ecx_14
        
        if (ecx_14 s>= 0xffff)
            edi_19 = 0xffff
        
        if (edi_19 s<= 0)
            ecx_14 = 0
        else if (ecx_14 s>= 0xffff)
            ecx_14 = 0xffff
        
        *ebx_2 = ecx_14 << 0x10 | var_34_1
        ebx_2 = &ebx_2[arg4]
        arg4 += ecx_8
        eax_14 += ecx_8
        edx_6 += ecx_8
        arg3 += 1
        var_8 = ebx_2
    while (arg3 u< *(arg1 + 0x68))

int16_t x87control_1
int16_t x87status_2
x87control_1, x87status_2 = __fldcw_memmem16((*(arg1 + 0x7c)).w)
