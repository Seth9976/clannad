// 函数: sub_420ea0
// 地址: 0x420ea0
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
    *(arg1 + 0x60) * eax_3 + (((edi_1 - 1) * arg3) << 1) + *(arg1 + 0x64) * arg4 + *(arg1 + 0x20)
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
    int32_t eax_12 = edi_2 << 4
    int32_t ecx_11 = (ebx_2 + edi_2) << 4
    int32_t edx_4 = (edi_2 - ebx_2) << 4
    arg4 = eax_12 i+ arg5 + 8
    
    do
        long double x87_r7_4 = fconvert.t(*(eax_6 + ((arg3 & 3) << 2)))
        arg5 = fconvert.s(x87_r7_4)
        float var_48_1 = fconvert.s((fconvert.t(var_58) + fconvert.t(arg4[-2])) * fconvert.t(7f))
        float var_44_1 = fconvert.s((fconvert.t(var_54) + fconvert.t(arg4[-1])) * fconvert.t(7f))
        float var_40_1 = fconvert.s((fconvert.t(var_50) + fconvert.t(*arg4)) * fconvert.t(3f))
        float var_3c_1 = fconvert.s((fconvert.t(var_4c) + fconvert.t(arg4[1])) * fconvert.t(255f))
        int32_t var_14_1 = int.d(fconvert.t(fconvert.s(fconvert.t(var_48_1) + x87_r7_4)))
        int32_t var_38_1 = var_14_1
        int32_t var_34_1 = int.d(fconvert.t(fconvert.s(fconvert.t(var_44_1) + fconvert.t(arg5))))
        int32_t var_30_1 = int.d(fconvert.t(fconvert.s(fconvert.t(var_40_1) + fconvert.t(arg5))))
        int32_t var_20_1 = int.d(fconvert.t(fconvert.s(fconvert.t(var_3c_1) + fconvert.t(arg5))))
        
        if (*(arg1 + 0x5c) != 0)
            long double x87_r7_15 = fconvert.t(0.142857149f)
            float* edi_14 = *(arg1 + 0x5c) + edx_4 + 0x10
            long double x87_r6_17 = (fconvert.t(var_48_1) - float.t(var_38_1)) * x87_r7_15
            *edi_14 = fconvert.s(fconvert.t(0.1875f) * x87_r6_17 + fconvert.t(*edi_14))
            float* edi_16 = *(arg1 + 0x5c) + eax_12 + 0x10
            *edi_16 = fconvert.s(fconvert.t(0.3125f) * x87_r6_17 + fconvert.t(*edi_16))
            float* edi_18 = *(arg1 + 0x5c) + ecx_11 + 0x10
            *edi_18 = fconvert.s(fconvert.t(0.0625f) * x87_r6_17 + fconvert.t(*edi_18))
            float* edi_20 = *(arg1 + 0x5c) + edx_4 + 0x14
            var_58 = fconvert.s(x87_r6_17 * fconvert.t(0.4375))
            long double x87_r7_16 = x87_r7_15 * (fconvert.t(var_44_1) - float.t(var_34_1))
            *edi_20 = fconvert.s(fconvert.t(0.1875f) * x87_r7_16 + fconvert.t(*edi_20))
            float* edi_22 = *(arg1 + 0x5c) + eax_12 + 0x14
            *edi_22 = fconvert.s(fconvert.t(0.3125f) * x87_r7_16 + fconvert.t(*edi_22))
            float* edi_24 = *(arg1 + 0x5c) + ecx_11 + 0x14
            *edi_24 = fconvert.s(fconvert.t(0.0625f) * x87_r7_16 + fconvert.t(*edi_24))
            float* edi_26 = *(arg1 + 0x5c) + edx_4 + 0x18
            var_54 = fconvert.s(x87_r7_16 * fconvert.t(0.4375))
            long double x87_r7_20 =
                (fconvert.t(var_40_1) - float.t(var_30_1)) * fconvert.t(0.333333343f)
            *edi_26 = fconvert.s(fconvert.t(0.1875f) * x87_r7_20 + fconvert.t(*edi_26))
            float* edi_28 = *(arg1 + 0x5c) + eax_12 + 0x18
            *edi_28 = fconvert.s(fconvert.t(0.3125f) * x87_r7_20 + fconvert.t(*edi_28))
            float* edi_30 = *(arg1 + 0x5c) + ecx_11 + 0x18
            *edi_30 = fconvert.s(fconvert.t(0.0625f) * x87_r7_20 + fconvert.t(*edi_30))
            float* edi_32 = *(arg1 + 0x5c) + edx_4 + 0x1c
            var_50 = fconvert.s(x87_r7_20 * fconvert.t(0.4375))
            long double x87_r7_24 =
                (fconvert.t(var_3c_1) - float.t(var_20_1)) * fconvert.t(0.00392156886f)
            *edi_32 = fconvert.s(fconvert.t(0.1875f) * x87_r7_24 + fconvert.t(*edi_32))
            float* edi_34 = *(arg1 + 0x5c) + eax_12 + 0x1c
            *edi_34 = fconvert.s(fconvert.t(0.3125f) * x87_r7_24 + fconvert.t(*edi_34))
            float* edi_36 = *(arg1 + 0x5c) + ecx_11 + 0x1c
            *edi_36 = fconvert.s(fconvert.t(0.0625f) * x87_r7_24 + fconvert.t(*edi_36))
            var_4c = fconvert.s(x87_r7_24 * fconvert.t(0.4375))
        
        int32_t edi_37
        
        edi_37 = var_14_1 s>= 7 ? 7 : var_14_1
        
        if (edi_37 s<= 0)
            var_38_1 = 0
        else if (var_14_1 s>= 7)
            var_38_1 = 7
        
        int32_t ebx_5 = var_34_1
        
        if (ebx_5 s>= 7)
            ebx_5 = 7
        
        if (ebx_5 s<= 0)
            var_34_1 = 0
        else if (var_34_1 s>= 7)
            var_34_1 = 7
        
        int32_t edi_38 = var_30_1
        
        if (edi_38 s>= 3)
            edi_38 = 3
        
        if (edi_38 s<= 0)
            var_30_1 = 0
        else if (var_30_1 s>= 3)
            var_30_1 = 3
        
        int32_t ebx_6 = var_20_1
        
        if (ebx_6 s>= 0xff)
            ebx_6 = 0xff
        
        int32_t ebx_7
        
        if (ebx_6 s<= 0)
            ebx_7 = 0
        else
            ebx_7 = var_20_1
            
            if (ebx_7 s>= 0xff)
                ebx_7 = 0xff
        
        int16_t* edi_39 = var_8
        *edi_39 = (((ebx_7 << 3 | var_38_1) << 3 | var_34_1) << 2).w | var_30_1.w
        var_8 = &edi_39[ebx_2]
        arg4 = &arg4[ebx_2 * 4]
        eax_12 += ecx_9
        edx_4 += ecx_9
        ecx_11 += ecx_9
        arg3 += 1
    while (arg3 u< *(arg1 + 0x68))

int16_t x87control_1
int16_t x87status_2
x87control_1, x87status_2 = __fldcw_memmem16((*(arg1 + 0x7c)).w)
