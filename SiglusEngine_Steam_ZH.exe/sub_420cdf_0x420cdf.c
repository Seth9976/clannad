// 函数: sub_420cdf
// 地址: 0x420cdf
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
int32_t ebx = *(arg1 + 0x68)
float var_2c = fconvert.s(float.t(0))
arg3 = eax_3 & 1
char* edi_5 = (ebx - 1) * arg3 + *(arg1 + 0x60) * eax_3 + *(arg1 + 0x64) * arg4 + *(arg1 + 0x20)
int32_t eax_6 = *(arg1 + 0x34) + (((arg4 & 3) + ((eax_3 & 3) << 3)) << 2)
int32_t ebx_1

if (arg3 != 0)
    ebx_1 = ebx - 1
    arg3 = 0xffffffff
else
    ebx_1 = 0
    arg3 = 1

int16_t x87status
int16_t temp0
temp0, x87status = __fnstcw_memmem16(arg2)
arg4.w = temp0
int16_t x87control
int16_t x87status_1
x87control, x87status_1 = __fldcw_memmem16(arg4.w | 0xc00)
*(arg1 + 0x7c) = arg4

if (*(arg1 + 0x5c) != 0)
    sub_41f274(arg1, arg5)

arg4 = 0

if (*(arg1 + 0x68) u> 0)
    int32_t ecx_8 = arg3 << 4
    int32_t eax_11 = ebx_1 << 4
    int32_t ecx_10 = (arg3 + ebx_1) << 4
    int32_t var_8_1 = (ebx_1 - arg3) << 4
    arg5 = eax_11 + arg5 + 0xc
    
    do
        float var_1c_1 = fconvert.s((fconvert.t(var_2c) + fconvert.t(*arg5)) * fconvert.t(255f))
        int32_t edx_8 = int.d(fconvert.t(fconvert.s(fconvert.t(var_1c_1)
            + fconvert.t(*(eax_6 + ((arg4 & 3) << 2))))))
        
        if (*(arg1 + 0x5c) != 0)
            float* edx_10 = var_8_1 + *(arg1 + 0x5c) + 0x1c
            long double x87_r7_9 =
                (fconvert.t(var_1c_1) - float.t(edx_8)) * fconvert.t(0.00392156886f)
            *edx_10 = fconvert.s(fconvert.t(0.1875f) * x87_r7_9 + fconvert.t(*edx_10))
            float* edx_12 = eax_11 + *(arg1 + 0x5c) + 0x1c
            *edx_12 = fconvert.s(fconvert.t(0.3125f) * x87_r7_9 + fconvert.t(*edx_12))
            float* edx_14 = ecx_10 + *(arg1 + 0x5c) + 0x1c
            *edx_14 = fconvert.s(fconvert.t(0.0625f) * x87_r7_9 + fconvert.t(*edx_14))
            var_2c = fconvert.s(x87_r7_9 * fconvert.t(0.4375))
        
        int32_t ebx_6 = edx_8
        
        if (edx_8 s>= 0xff)
            ebx_6 = 0xff
        
        if (ebx_6 s<= 0)
            edx_8 = 0
        else if (edx_8 s>= 0xff)
            edx_8 = 0xff
        
        *edi_5 = edx_8.b
        arg5 += ecx_8
        var_8_1 += ecx_8
        edi_5 = &edi_5[arg3]
        eax_11 += ecx_8
        ecx_10 += ecx_8
        arg4 += 1
    while (arg4 u< *(arg1 + 0x68))

int16_t x87control_1
int16_t x87status_2
x87control_1, x87status_2 = __fldcw_memmem16((*(arg1 + 0x7c)).w)
