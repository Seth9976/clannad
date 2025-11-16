// 函数: sub_401a76
// 地址: 0x401a76
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i_1 = arg6
float* ebx = arg1
arg1 = ebx

if (i_1 u> 0)
    void* ecx_1 = arg3
    int32_t edi
    int32_t var_1c_1 = edi
    int32_t i
    
    do
        float* edi_1 = ebx
        ebx += arg2
        float var_10_1 = fconvert.s(fconvert.t(arg5[4]) * fconvert.t(*(ecx_1 + 4))
            + fconvert.t(arg5[8]) * fconvert.t(*(ecx_1 + 8))
            + fconvert.t(*ecx_1) * fconvert.t(*arg5))
        float var_c = fconvert.s(fconvert.t(arg5[1]) * fconvert.t(*ecx_1)
            + fconvert.t(arg5[5]) * fconvert.t(*(ecx_1 + 4))
            + fconvert.t(arg5[9]) * fconvert.t(*(ecx_1 + 8)))
        long double x87_r7_11 = fconvert.t(*(ecx_1 + 8)) * fconvert.t(arg5[0xa])
            + fconvert.t(*ecx_1) * fconvert.t(arg5[2])
        long double x87_r6_11 = fconvert.t(*(ecx_1 + 4))
        ecx_1 += arg4
        i = i_1
        i_1 -= 1
        float var_8_1 = fconvert.s(x87_r7_11 + x87_r6_11 * fconvert.t(arg5[6]))
        *edi_1 = var_10_1
        void* edi_2 = &edi_1[1]
        float* esi_1 = &var_c
        *edi_2 = *esi_1
        *(edi_2 + 4) = esi_1[1]
    while (i != 1)

return arg1
