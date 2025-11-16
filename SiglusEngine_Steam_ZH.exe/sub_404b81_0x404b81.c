// 函数: sub_404b81
// 地址: 0x404b81
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

float* esi = arg1
int32_t edi
int32_t var_20 = edi
int32_t i_1 = arg6

if (i_1 u<= 0)
    return 

void* edx_1 = arg3
int32_t i

do
    float* var_24_1 = arg5
    float* var_28_1 = arg5
    float var_10_1 = fconvert.s(fconvert.t(arg5[1]) * fconvert.t(*edx_1)
        + fconvert.t(arg5[5]) * fconvert.t(*(edx_1 + 4)) + fconvert.t(arg5[0xd]))
    long double x87_r7_12 = fconvert.t(arg5[3]) * fconvert.t(*edx_1)
        + fconvert.t(arg5[7]) * fconvert.t(*(edx_1 + 4)) + fconvert.t(arg5[0xf])
    *esi = fconvert.s(fconvert.t(arg5[4]) * fconvert.t(*(edx_1 + 4))
        + fconvert.t(*edx_1) * fconvert.t(*arg5) + fconvert.t(arg5[0xc]))
    esi[1] = var_10_1
    arg1 = fconvert.s(x87_r7_12)
    int32_t eax_3
    int80_t st0_1
    st0_1, eax_3 = sub_401000(fconvert.s(fconvert.t(arg1)), fconvert.s(float.t(1)))
    
    if (eax_3 == 0)
        long double x87_r7_16 = float.t(1) / fconvert.t(arg1)
        *esi = fconvert.s(x87_r7_16 * fconvert.t(*esi))
        esi[1] = fconvert.s(x87_r7_16 * fconvert.t(esi[1]))
    
    edx_1 += arg4
    esi += arg2
    i = i_1
    i_1 -= 1
while (i != 1)
