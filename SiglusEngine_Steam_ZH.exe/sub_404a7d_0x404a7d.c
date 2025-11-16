// 函数: sub_404a7d
// 地址: 0x404a7d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i_1 = arg6
float* ebx = arg1
arg1 = ebx

if (i_1 u> 0)
    void* edx_1 = arg3
    int32_t edi
    int32_t var_20_1 = edi
    int32_t i
    
    do
        float* edi_1 = ebx
        ebx += arg2
        float var_14_1 = fconvert.s(fconvert.t(arg5[4]) * fconvert.t(*(edx_1 + 4))
            + fconvert.t(*edx_1) * fconvert.t(*arg5) + fconvert.t(arg5[0xc]))
        float var_10 = fconvert.s(fconvert.t(arg5[1]) * fconvert.t(*edx_1)
            + fconvert.t(arg5[5]) * fconvert.t(*(edx_1 + 4)) + fconvert.t(arg5[0xd]))
        float var_c_1 = fconvert.s(fconvert.t(arg5[2]) * fconvert.t(*edx_1)
            + fconvert.t(arg5[6]) * fconvert.t(*(edx_1 + 4)) + fconvert.t(arg5[0xe]))
        long double x87_r7_14 = fconvert.t(*edx_1) * fconvert.t(arg5[3])
        long double x87_r6_7 = fconvert.t(*(edx_1 + 4))
        edx_1 += arg4
        i = i_1
        i_1 -= 1
        float var_8_1 =
            fconvert.s(x87_r7_14 + x87_r6_7 * fconvert.t(arg5[7]) + fconvert.t(arg5[0xf]))
        *edi_1 = var_14_1
        void* edi_2 = &edi_1[1]
        float* esi_1 = &var_10
        *edi_2 = *esi_1
        void* edi_3 = edi_2 + 4
        void* esi_2 = &esi_1[1]
        *edi_3 = *esi_2
        *(edi_3 + 4) = *(esi_2 + 4)
    while (i != 1)

return arg1
