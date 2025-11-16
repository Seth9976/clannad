// 函数: sub_424d2b
// 地址: 0x424d2b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_6c = edi

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
float var_60 = fconvert.s(float.t(0))
float var_5c = fconvert.s(float.t(0))
float var_58 = fconvert.s(float.t(0))
float var_54 = fconvert.s(float.t(0))
arg3 = eax_3 & 1
void* var_8 =
    *(arg1 + 0x60) * eax_3 + (((edi_1 - 1) * arg3) << 3) + *(arg1 + 0x64) * arg4 + *(arg1 + 0x20)
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
    int32_t eax_13 = ebx_2 << 4
    int32_t ecx_9 = edi_2 << 4
    int32_t edx_5 = (ebx_2 + edi_2) << 4
    int32_t edi_4 = (edi_2 - ebx_2) << 4
    int32_t var_10_1 = edx_5
    int32_t var_c_1 = edi_4
    arg4 = ecx_9 i+ arg5 + 8
    
    do
        long double x87_r7_4 = fconvert.t(32767f)
        long double x87_r6_1 = fconvert.t(*(eax_6 + ((arg3 & 3) << 2)))
        arg5 = fconvert.s(x87_r6_1)
        float var_50_1 = fconvert.s((fconvert.t(var_60) + fconvert.t(arg4[-2])) * x87_r7_4)
        float var_4c_1 = fconvert.s((fconvert.t(var_5c) + fconvert.t(arg4[-1])) * x87_r7_4)
        float var_48_1 = fconvert.s((fconvert.t(var_58) + fconvert.t(*arg4)) * x87_r7_4)
        float var_44_1 = fconvert.s((fconvert.t(var_54) + fconvert.t(arg4[1])) * x87_r7_4)
        int32_t var_1c_1 = int.d(fconvert.t(fconvert.s(fconvert.t(var_50_1) + x87_r6_1)))
        int32_t var_40_1 = var_1c_1
        int32_t var_3c_1 = int.d(fconvert.t(fconvert.s(fconvert.t(var_4c_1) + fconvert.t(arg5))))
        int32_t var_38_1 = int.d(fconvert.t(fconvert.s(fconvert.t(var_48_1) + fconvert.t(arg5))))
        int32_t var_34_1 = int.d(fconvert.t(fconvert.s(fconvert.t(var_44_1) + fconvert.t(arg5))))
        
        if (*(arg1 + 0x5c) != 0)
            long double x87_r7_16 = fconvert.t(3.05185094e-05f)
            float* eax_23 = *(arg1 + 0x5c) + edi_4 + 0x10
            long double x87_r6_4 = (fconvert.t(var_50_1) - float.t(var_40_1)) * x87_r7_16
            *eax_23 = fconvert.s(fconvert.t(0.1875f) * x87_r6_4 + fconvert.t(*eax_23))
            float* eax_25 = *(arg1 + 0x5c) + ecx_9 + 0x10
            *eax_25 = fconvert.s(fconvert.t(0.3125f) * x87_r6_4 + fconvert.t(*eax_25))
            float* eax_27 = *(arg1 + 0x5c) + edx_5 + 0x10
            *eax_27 = fconvert.s(fconvert.t(0.0625f) * x87_r6_4 + fconvert.t(*eax_27))
            float* eax_29 = *(arg1 + 0x5c) + edi_4 + 0x14
            var_60 = fconvert.s(x87_r6_4 * fconvert.t(0.4375))
            long double x87_r6_8 = (fconvert.t(var_4c_1) - float.t(var_3c_1)) * x87_r7_16
            *eax_29 = fconvert.s(fconvert.t(0.1875f) * x87_r6_8 + fconvert.t(*eax_29))
            float* eax_31 = *(arg1 + 0x5c) + ecx_9 + 0x14
            *eax_31 = fconvert.s(fconvert.t(0.3125f) * x87_r6_8 + fconvert.t(*eax_31))
            float* eax_33 = *(arg1 + 0x5c) + edx_5 + 0x14
            *eax_33 = fconvert.s(fconvert.t(0.0625f) * x87_r6_8 + fconvert.t(*eax_33))
            float* eax_35 = *(arg1 + 0x5c) + edi_4 + 0x18
            var_5c = fconvert.s(x87_r6_8 * fconvert.t(0.4375))
            long double x87_r6_12 = (fconvert.t(var_48_1) - float.t(var_38_1)) * x87_r7_16
            *eax_35 = fconvert.s(fconvert.t(0.1875f) * x87_r6_12 + fconvert.t(*eax_35))
            float* eax_37 = *(arg1 + 0x5c) + ecx_9 + 0x18
            *eax_37 = fconvert.s(fconvert.t(0.3125f) * x87_r6_12 + fconvert.t(*eax_37))
            float* eax_39 = *(arg1 + 0x5c) + edx_5 + 0x18
            *eax_39 = fconvert.s(fconvert.t(0.0625f) * x87_r6_12 + fconvert.t(*eax_39))
            float* eax_41 = *(arg1 + 0x5c) + edi_4 + 0x1c
            var_58 = fconvert.s(x87_r6_12 * fconvert.t(0.4375))
            long double x87_r7_17 = x87_r7_16 * (fconvert.t(var_44_1) - float.t(var_34_1))
            *eax_41 = fconvert.s(fconvert.t(0.1875f) * x87_r7_17 + fconvert.t(*eax_41))
            float* eax_43 = *(arg1 + 0x5c) + ecx_9 + 0x1c
            *eax_43 = fconvert.s(fconvert.t(0.3125f) * x87_r7_17 + fconvert.t(*eax_43))
            float* eax_45 = *(arg1 + 0x5c) + edx_5 + 0x1c
            *eax_45 = fconvert.s(fconvert.t(0.0625f) * x87_r7_17 + fconvert.t(*eax_45))
            var_54 = fconvert.s(x87_r7_17 * fconvert.t(0.4375))
        
        int32_t edi_5 = var_1c_1
        
        if (var_1c_1 s>= 0x7fff)
            edi_5 = 0x7fff
        
        if (edi_5 s<= 0xffff8001)
            var_40_1 = 0xffff8001
        else if (var_1c_1 s>= 0x7fff)
            var_40_1 = 0x7fff
        
        int32_t edi_6 = var_3c_1
        
        if (var_3c_1 s>= 0x7fff)
            edi_6 = 0x7fff
        
        if (edi_6 s<= 0xffff8001)
            var_3c_1 = 0xffff8001
        else if (var_3c_1 s>= 0x7fff)
            var_3c_1 = 0x7fff
        
        int32_t edi_7 = var_38_1
        
        if (var_38_1 s>= 0x7fff)
            edi_7 = 0x7fff
        
        if (edi_7 s<= 0xffff8001)
            var_38_1 = 0xffff8001
        else if (var_38_1 s>= 0x7fff)
            var_38_1 = 0x7fff
        
        int32_t edi_8 = var_34_1
        
        if (var_34_1 s>= 0x7fff)
            edi_8 = 0x7fff
        
        if (edi_8 s<= 0xffff8001)
            var_34_1 = 0xffff8001
        else if (var_34_1 s>= 0x7fff)
            var_34_1 = 0x7fff
        
        int32_t eax_48
        int32_t edx_6
        edx_6:eax_48 = sx.q(zx.d(var_34_1.w))
        int32_t eax_53
        int32_t edx_8
        edx_8:eax_53 = sx.q(zx.d(var_38_1.w))
        int32_t ebx_6 = eax_48 << 0x10 | eax_53
        int32_t eax_59
        int32_t edx_9
        edx_9:eax_59 = sx.q(zx.d(var_3c_1.w))
        int32_t ebx_8 = ebx_6 << 0x10 | eax_59
        int32_t eax_62
        int32_t edx_10
        edx_10:eax_62 = sx.q(zx.d(var_40_1.w))
        int32_t* eax_63 = var_8
        eax_63[1] = ((edx_6 << 0x10 | eax_48 u>> 0xfffffff0 | edx_8) << 0x10 | ebx_6 u>> 0xfffffff0
            | edx_9) << 0x10 | ebx_8 u>> 0xfffffff0 | edx_10
        *eax_63 = ebx_8 << 0x10 | eax_62
        var_8 = &eax_63[ebx_2 * 2]
        arg4 = &arg4[ebx_2 * 4]
        edi_4 = var_c_1 + eax_13
        edx_5 = var_10_1 + eax_13
        ecx_9 += eax_13
        arg3 += 1
        var_c_1 = edi_4
        var_10_1 = edx_5
    while (arg3 u< *(arg1 + 0x68))

int16_t x87control_1
int16_t x87status_2
x87control_1, x87status_2 = __fldcw_memmem16((*(arg1 + 0x7c)).w)
