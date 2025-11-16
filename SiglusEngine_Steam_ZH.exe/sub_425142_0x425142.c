// 函数: sub_425142
// 地址: 0x425142
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_64 = edi

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
float var_48 = fconvert.s(float.t(0))
float var_44 = fconvert.s(float.t(0))
arg3 = eax_3 & 1
int32_t eax_6 = *(arg1 + 0x34) + (((arg4 & 3) + ((eax_3 & 3) << 3)) << 2)
void* var_c =
    *(arg1 + 0x60) * eax_3 + (((ebx - 1) * arg3) << 1) + *(arg1 + 0x64) * arg4 + *(arg1 + 0x20)
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

int32_t i = 0

if (*(arg1 + 0x68) u> 0)
    int32_t eax_13 = arg3 << 4
    void* edi_4 = ebx_1 << 4
    arg4 = (arg3 + ebx_1) << 4
    arg3 = (ebx_1 - arg3) << 4
    
    do
        void* ebx_4 = edi_4 + arg5
        j_sub_4014e9(ebx_4, ebx_4)
        long double x87_r6_1 = fconvert.t(127f)
        float var_38_1 = fconvert.s((fconvert.t(var_48) + fconvert.t(*ebx_4)) * x87_r6_1)
        float var_34_1 = fconvert.s((fconvert.t(var_44) + fconvert.t(*(ebx_4 + 4))) * x87_r6_1)
        int32_t edx_5 = int.d(fconvert.t(fconvert.s(fconvert.t(var_38_1) + x87_r6_1)))
        int32_t ecx_9 = int.d(fconvert.t(fconvert.s(fconvert.t(var_34_1)
            + fconvert.t(fconvert.s(fconvert.t(*(eax_6 + ((i & 3) << 2))))))))
        
        if (*(arg1 + 0x5c) != 0)
            long double x87_r7_8 = fconvert.t(0.00787401572f)
            float* eax_20 = *(arg1 + 0x5c) + arg3 + 0x10
            long double x87_r6_6 = (fconvert.t(var_38_1) - float.t(edx_5)) * x87_r7_8
            *eax_20 = fconvert.s(fconvert.t(0.1875f) * x87_r6_6 + fconvert.t(*eax_20))
            void* eax_22 = edi_4 + *(arg1 + 0x5c) + 0x10
            *eax_22 = fconvert.s(fconvert.t(0.3125f) * x87_r6_6 + fconvert.t(*eax_22))
            float* eax_24 = *(arg1 + 0x5c) + arg4 + 0x10
            *eax_24 = fconvert.s(fconvert.t(0.0625f) * x87_r6_6 + fconvert.t(*eax_24))
            float* eax_26 = *(arg1 + 0x5c) + arg3 + 0x14
            var_48 = fconvert.s(x87_r6_6 * fconvert.t(0.4375))
            long double x87_r7_9 = x87_r7_8 * (fconvert.t(var_34_1) - float.t(ecx_9))
            *eax_26 = fconvert.s(fconvert.t(0.1875f) * x87_r7_9 + fconvert.t(*eax_26))
            void* eax_28 = edi_4 + *(arg1 + 0x5c) + 0x14
            *eax_28 = fconvert.s(fconvert.t(0.3125f) * x87_r7_9 + fconvert.t(*eax_28))
            float* eax_30 = *(arg1 + 0x5c) + arg4 + 0x14
            *eax_30 = fconvert.s(fconvert.t(0.0625f) * x87_r7_9 + fconvert.t(*eax_30))
            var_44 = fconvert.s(x87_r7_9 * fconvert.t(0.4375))
        
        int32_t eax_31 = edx_5
        
        if (edx_5 s>= 0x7f)
            eax_31 = 0x7f
        
        if (eax_31 s<= 0xffffff81)
            edx_5 = 0xffffff81
        else if (edx_5 s>= 0x7f)
            edx_5 = 0x7f
        
        int32_t eax_32 = ecx_9
        
        if (ecx_9 s>= 0x7f)
            eax_32 = 0x7f
        
        if (eax_32 s<= 0xffffff81)
            ecx_9 = 0xffffff81
        else if (ecx_9 s>= 0x7f)
            ecx_9 = 0x7f
        
        int16_t* eax_33 = var_c
        edx_5.w = zx.w(edx_5.b)
        edx_5:1.b = ecx_9.b
        *eax_33 = edx_5.w
        var_c = &eax_33[arg3]
        arg3 += eax_13
        arg4 += eax_13
        edi_4 += eax_13
        i += 1
    while (i u< *(arg1 + 0x68))

int16_t x87control_1
int16_t x87status_2
x87control_1, x87status_2 = __fldcw_memmem16((*(arg1 + 0x7c)).w)
