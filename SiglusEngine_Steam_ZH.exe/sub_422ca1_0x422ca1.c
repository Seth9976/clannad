// 函数: sub_422ca1
// 地址: 0x422ca1
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
char* edi_5 =
    *(arg1 + 0x60) * eax_3 + *(arg1 + 0x64) * arg4 + (*(arg1 + 0x68) - 1) * arg3 + *(arg1 + 0x20)
int32_t eax_6 = *(arg1 + 0x34) + (((arg4 & 3) + ((eax_3 & 3) << 3)) << 2)
int32_t ebx_2

if (arg3 != 0)
    ebx_2 = *(arg1 + 0x68) - 1
    arg3 = 0xffffffff
else
    ebx_2 = 0
    arg3 = 1

int16_t x87status
int16_t temp0
temp0, x87status = __fnstcw_memmem16(arg2)
arg4.w = temp0
int16_t x87control
int16_t x87status_1
x87control, x87status_1 = __fldcw_memmem16(arg4.w | 0xc00)
*(arg1 + 0x7c) = arg4
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

arg4 = 0

if (*(arg1 + 0x68) u> 0)
    int32_t ecx_6 = arg3 << 4
    float* eax_12 = ebx_2 << 4
    int32_t edx_5 = (arg3 + ebx_2) << 4
    int32_t var_8_1 = (ebx_2 - arg3) << 4
    
    do
        float var_28_1 =
            fconvert.s((fconvert.t(var_38) + fconvert.t(*(eax_12 + arg5))) * fconvert.t(255f))
        int32_t ecx_10 = int.d(fconvert.t(fconvert.s(fconvert.t(var_28_1)
            + fconvert.t(*(eax_6 + ((arg4 & 3) << 2))))))
        
        if (*(arg1 + 0x5c) != 0)
            float* ecx_12 = var_8_1 + *(arg1 + 0x5c) + 0x10
            long double x87_r7_13 =
                (fconvert.t(var_28_1) - float.t(ecx_10)) * fconvert.t(0.00392156886f)
            *ecx_12 = fconvert.s(fconvert.t(0.1875f) * x87_r7_13 + fconvert.t(*ecx_12))
            void* ecx_14 = eax_12 + *(arg1 + 0x5c) + 0x10
            *ecx_14 = fconvert.s(fconvert.t(0.3125f) * x87_r7_13 + fconvert.t(*ecx_14))
            float* ecx_16 = edx_5 + *(arg1 + 0x5c) + 0x10
            *ecx_16 = fconvert.s(fconvert.t(0.0625f) * x87_r7_13 + fconvert.t(*ecx_16))
            var_38 = fconvert.s(x87_r7_13 * fconvert.t(0.4375))
        
        int32_t ebx_8 = ecx_10
        
        if (ecx_10 s>= 0xff)
            ebx_8 = 0xff
        
        if (ebx_8 s<= 0)
            ecx_10 = 0
        else if (ecx_10 s>= 0xff)
            ecx_10 = 0xff
        
        *edi_5 = ecx_10.b
        var_8_1 += ecx_6
        edi_5 = &edi_5[arg3]
        eax_12 = &eax_12[arg3 * 4]
        edx_5 += ecx_6
        arg4 += 1
    while (arg4 u< *(arg1 + 0x68))

int16_t x87control_1
int16_t x87status_2
x87control_1, x87status_2 = __fldcw_memmem16((*(arg1 + 0x7c)).w)
