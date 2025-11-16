// 函数: sub_4233b9
// 地址: 0x4233b9
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_54 = edi

if (*(arg1 + 0x54) != 0)
    void* eax_1
    int80_t st0_1
    st0_1, eax_1 = sub_41da34(arg1, arg5)
    arg5 = eax_1

if (*(arg1 + 0x10) != 0)
    void* eax_2
    eax_2, arg2 = sub_41ef58(arg1, arg2, arg5)
    arg5 = eax_2

int32_t eax_3 = arg3
float var_38 = fconvert.s(float.t(0))
arg3 = eax_3 & 1
int16_t* ebx_3 = *(arg1 + 0x60) * eax_3 + *(arg1 + 0x64) * arg4
    + (((*(arg1 + 0x68) - 1) * arg3) << 1) + *(arg1 + 0x20)
int32_t eax_6 = *(arg1 + 0x34) + (((arg4 & 3) + ((eax_3 & 3) << 3)) << 2)
int32_t edi_4

if (arg3 != 0)
    edi_4 = *(arg1 + 0x68) - 1
    arg4 = 0xffffffff
else
    edi_4 = 0
    arg4 = 1

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
    int32_t ecx_6 = arg4 << 4
    float* eax_13 = edi_4 << 4
    int32_t ecx_8 = (arg4 + edi_4) << 4
    arg4 = (edi_4 - arg4) << 4
    
    do
        float var_28_1 =
            fconvert.s((fconvert.t(var_38) + fconvert.t(*(eax_13 + arg5))) * fconvert.t(65535f))
        int32_t edx_7 = int.d(fconvert.t(fconvert.s(fconvert.t(var_28_1)
            + fconvert.t(*(eax_6 + ((arg3 & 3) << 2))))))
        
        if (*(arg1 + 0x5c) != 0)
            float* edx_9 = arg4 + *(arg1 + 0x5c) + 0x10
            long double x87_r7_13 =
                (fconvert.t(var_28_1) - float.t(edx_7)) * fconvert.t(1.52590219e-05f)
            *edx_9 = fconvert.s(fconvert.t(0.1875f) * x87_r7_13 + fconvert.t(*edx_9))
            void* edx_11 = eax_13 + *(arg1 + 0x5c) + 0x10
            *edx_11 = fconvert.s(fconvert.t(0.3125f) * x87_r7_13 + fconvert.t(*edx_11))
            float* edx_13 = ecx_8 + *(arg1 + 0x5c) + 0x10
            *edx_13 = fconvert.s(fconvert.t(0.0625f) * x87_r7_13 + fconvert.t(*edx_13))
            var_38 = fconvert.s(x87_r7_13 * fconvert.t(0.4375))
        
        int32_t edi_10 = edx_7
        
        if (edx_7 s>= 0xffff)
            edi_10 = 0xffff
        
        if (edi_10 s<= 0)
            edx_7 = 0
        else if (edx_7 s>= 0xffff)
            edx_7 = 0xffff
        
        *ebx_3 = edx_7.w
        arg4 += ecx_6
        ebx_3 = &ebx_3[arg4]
        eax_13 = &eax_13[arg4 * 4]
        ecx_8 += ecx_6
        arg3 += 1
    while (arg3 u< *(arg1 + 0x68))

int16_t x87control_1
int16_t x87status_2
x87control_1, x87status_2 = __fldcw_memmem16((*(arg1 + 0x7c)).w)
