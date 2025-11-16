// 函数: sub_422992
// 地址: 0x422992
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

void* eax_3 = arg3
int32_t edi_1 = *(arg1 + 0x68)
float var_3c = fconvert.s(float.t(0))
arg3 = eax_3 & 1
int16_t* ebx_2 =
    *(arg1 + 0x60) * eax_3 + (((edi_1 - 1) * arg3) << 1) + *(arg1 + 0x64) * arg4 + *(arg1 + 0x20)
int32_t eax_6 = *(arg1 + 0x34) + (((arg4 & 3) + ((eax_3 & 3) << 3)) << 2)
int32_t edi_2

if (arg3 != 0)
    edi_2 = edi_1 - 1
    arg3 = 0xffffffff
else
    edi_2 = 0
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
    int32_t eax_12 = arg3 << 4
    int32_t edx_6 = (edi_2 - arg3) << 4
    void* edi_4 = (edi_2 << 4) i+ arg5 + 8
    int32_t ecx_9 = (arg3 + edi_2) << 4
    int32_t var_c_1 = 0xfffffff8 i- arg5
    int32_t var_1c_1 = edx_6
    arg3 = edi_4
    
    do
        float* eax_14 = *(arg1 + 0x38)
        int16_t var_18_1 = 0
        arg5 = 0f
        float var_14_1 = 3.40282347e+38f
        float* var_8_1 = eax_14
        
        while (true)
            fconvert.t(*(edi_4 - 8)) - fconvert.t(*eax_14)
            fconvert.t(*(edi_4 - 4)) - fconvert.t(eax_14[1])
            long double x87_r5_2 = fconvert.t(*edi_4) - fconvert.t(eax_14[2])
            long double temp1_1 = fconvert.t(var_14_1)
            x87_r5_2 - temp1_1
            eax_14.w = (x87_r5_2 < temp1_1 ? 1 : 0) << 8
                | (is_unordered.t(x87_r5_2, temp1_1) ? 1 : 0) << 0xa
                | (x87_r5_2 == temp1_1 ? 1 : 0) << 0xe | 0x3800
            bool p_1 = unimplemented  {test ah, 0x5}
            
            if (not(p_1))
                var_14_1 = fconvert.s(x87_r5_2)
                var_18_1 = arg5.w
            
            arg5 += 1
            var_8_1 = &var_8_1[4]
            
            if (arg5 u>= 0x100)
                break
            
            eax_14 = var_8_1
        
        float var_2c_1 =
            fconvert.s((fconvert.t(var_3c) + fconvert.t(*(edi_4 + 4))) * fconvert.t(255f))
        int32_t eax_18 = int.d(fconvert.t(fconvert.s(fconvert.t(var_2c_1)
            + fconvert.t(*(eax_6 + ((arg4 & 3) << 2))))))
        void* edi_7
        
        if (*(arg1 + 0x5c) == 0)
            edi_7 = arg3
        else
            float* edx_7 = *(arg1 + 0x5c) + edx_6 + 0x1c
            edi_7 = arg3
            long double x87_r7_12 =
                (fconvert.t(var_2c_1) - float.t(eax_18)) * fconvert.t(0.00392156886f)
            *edx_7 = fconvert.s(fconvert.t(0.1875f) * x87_r7_12 + fconvert.t(*edx_7))
            float* edx_10 = *(arg1 + 0x5c) + var_c_1 + edi_7 + 0x1c
            *edx_10 = fconvert.s(fconvert.t(0.3125f) * x87_r7_12 + fconvert.t(*edx_10))
            float* edx_12 = *(arg1 + 0x5c) + ecx_9 + 0x1c
            *edx_12 = fconvert.s(fconvert.t(0.0625f) * x87_r7_12 + fconvert.t(*edx_12))
            var_3c = fconvert.s(x87_r7_12 * fconvert.t(0.4375))
        
        int32_t edx_13 = eax_18
        
        if (eax_18 s>= 0xff)
            edx_13 = 0xff
        
        if (edx_13 s<= 0)
            eax_18 = 0
        else if (eax_18 s>= 0xff)
            eax_18 = 0xff
        
        edi_4 = edi_7 + eax_12
        ecx_9 += eax_12
        int16_t edx_14
        edx_14:1.b = eax_18.b
        arg3 = edi_4
        *ebx_2 = edx_14 | var_18_1
        edx_6 = var_1c_1 + eax_12
        ebx_2 = &ebx_2[arg3]
        arg4 += 1
        var_1c_1 = edx_6
    while (arg4 u< *(arg1 + 0x68))

int16_t x87control_1
int16_t x87status_2
x87control_1, x87status_2 = __fldcw_memmem16((*(arg1 + 0x7c)).w)
