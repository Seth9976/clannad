// 函数: sub_401493
// 地址: 0x401493
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
float* result_1 = arg1
int32_t edi
int32_t var_14 = edi
int32_t i_1 = arg6
float* result = result_1

if (i_1 u> 0)
    void* ecx_1 = arg3
    int32_t i
    
    do
        float var_c_1 = fconvert.s(fconvert.t(arg5[4]) * fconvert.t(*(ecx_1 + 4))
            + fconvert.t(*ecx_1) * fconvert.t(*arg5))
        long double x87_r7_5 = fconvert.t(arg5[1]) * fconvert.t(*ecx_1)
        long double x87_r6_4 = fconvert.t(arg5[5]) * fconvert.t(*(ecx_1 + 4))
        ecx_1 += arg4
        *result_1 = var_c_1
        result_1[1] = fconvert.s(x87_r7_5 + x87_r6_4)
        result_1 += arg2
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
