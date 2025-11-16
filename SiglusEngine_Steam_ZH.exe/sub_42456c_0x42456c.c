// 函数: sub_42456c
// 地址: 0x42456c
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
float var_44 = fconvert.s(float.t(0))
float var_40 = fconvert.s(float.t(0))
arg3 = eax_3 & 1
int32_t eax_6 = *(arg1 + 0x34) + (((arg4 & 3) + ((eax_3 & 3) << 3)) << 2)
void* var_8 =
    *(arg1 + 0x60) * eax_3 + (((edi_1 - 1) * arg3) << 2) + *(arg1 + 0x64) * arg4 + *(arg1 + 0x20)
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
    int32_t ecx_8 = ebx_2 << 4
    int32_t eax_13 = edi_2 << 4
    int32_t edx_6 = (ebx_2 + edi_2) << 4
    arg4 = (edi_2 - ebx_2) << 4
    
    do
        long double x87_r7_2 = fconvert.t(*(eax_6 + ((arg3 & 3) << 2)))
        void* ecx_12 = arg5 + eax_13
        float var_34_1 = fconvert.s((fconvert.t(var_44) + fconvert.t(*ecx_12)) * fconvert.t(32767f))
        float var_30_1 =
            fconvert.s((fconvert.t(var_40) + fconvert.t(*(ecx_12 + 4))) * fconvert.t(32767f))
        int32_t edi_6 = int.d(fconvert.t(fconvert.s(fconvert.t(var_34_1) + x87_r7_2)))
        int32_t ecx_13 =
            int.d(fconvert.t(fconvert.s(fconvert.t(var_30_1) + fconvert.t(fconvert.s(x87_r7_2)))))
        
        if (*(arg1 + 0x5c) != 0)
            long double x87_r7_7 = fconvert.t(3.05185094e-05f)
            float* edi_8 = arg4 + *(arg1 + 0x5c) + 0x10
            long double x87_r6_11 = (fconvert.t(var_34_1) - float.t(edi_6)) * x87_r7_7
            *edi_8 = fconvert.s(fconvert.t(0.1875f) * x87_r6_11 + fconvert.t(*edi_8))
            float* edi_10 = eax_13 + *(arg1 + 0x5c) + 0x10
            *edi_10 = fconvert.s(fconvert.t(0.3125f) * x87_r6_11 + fconvert.t(*edi_10))
            float* edi_12 = edx_6 + *(arg1 + 0x5c) + 0x10
            *edi_12 = fconvert.s(fconvert.t(0.0625f) * x87_r6_11 + fconvert.t(*edi_12))
            float* edi_14 = arg4 + *(arg1 + 0x5c) + 0x14
            var_44 = fconvert.s(x87_r6_11 * fconvert.t(0.4375))
            long double x87_r7_8 = x87_r7_7 * (fconvert.t(var_30_1) - float.t(ecx_13))
            *edi_14 = fconvert.s(fconvert.t(0.1875f) * x87_r7_8 + fconvert.t(*edi_14))
            float* edi_16 = eax_13 + *(arg1 + 0x5c) + 0x14
            *edi_16 = fconvert.s(fconvert.t(0.3125f) * x87_r7_8 + fconvert.t(*edi_16))
            float* edi_18 = edx_6 + *(arg1 + 0x5c) + 0x14
            *edi_18 = fconvert.s(fconvert.t(0.0625f) * x87_r7_8 + fconvert.t(*edi_18))
            var_40 = fconvert.s(x87_r7_8 * fconvert.t(0.4375))
        
        int32_t ebx_4 = edi_6
        
        if (edi_6 s>= 0x7fff)
            ebx_4 = 0x7fff
        
        if (ebx_4 s<= 0xffff8001)
            edi_6 = 0xffff8001
        else if (edi_6 s>= 0x7fff)
            edi_6 = 0x7fff
        
        int32_t ebx_5 = ecx_13
        
        if (ecx_13 s>= 0x7fff)
            ebx_5 = 0x7fff
        
        if (ebx_5 s<= 0xffff8001)
            ecx_13 = 0xffff8001
        else if (ecx_13 s>= 0x7fff)
            ecx_13 = 0x7fff
        
        int32_t* edi_20 = var_8
        *edi_20 = ecx_13 << 0x10 | (edi_6 & 0xffff)
        arg4 += ecx_8
        eax_13 += ecx_8
        edx_6 += ecx_8
        arg3 += 1
        var_8 = &edi_20[ebx_2]
    while (arg3 u< *(arg1 + 0x68))

int16_t x87control_1
int16_t x87status_2
x87control_1, x87status_2 = __fldcw_memmem16((*(arg1 + 0x7c)).w)
