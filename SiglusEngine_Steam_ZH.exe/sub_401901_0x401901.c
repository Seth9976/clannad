// 函数: sub_401901
// 地址: 0x401901
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

float* ebx = arg1
float* var_8 = ebx

if (arg6 u<= 0)
    return 

void* edx_1 = arg3
int32_t edi
int32_t var_20_1 = edi
int32_t i

do
    float* var_24_1 = arg5
    float* var_28_1 = arg5
    long double x87_r7_5 = fconvert.t(arg5[4]) * fconvert.t(*(edx_1 + 4))
        + fconvert.t(arg5[8]) * fconvert.t(*(edx_1 + 8)) + fconvert.t(*edx_1) * fconvert.t(*arg5)
        + fconvert.t(arg5[0xc])
    float var_10 = fconvert.s(fconvert.t(arg5[1]) * fconvert.t(*edx_1)
        + fconvert.t(arg5[5]) * fconvert.t(*(edx_1 + 4))
        + fconvert.t(arg5[9]) * fconvert.t(*(edx_1 + 8)) + fconvert.t(arg5[0xd]))
    float var_c_1 = fconvert.s(fconvert.t(*(edx_1 + 8)) * fconvert.t(arg5[0xa])
        + fconvert.t(*edx_1) * fconvert.t(arg5[2]) + fconvert.t(*(edx_1 + 4)) * fconvert.t(arg5[6])
        + fconvert.t(arg5[0xe]))
    long double x87_r7_20 = fconvert.t(arg5[3]) * fconvert.t(*edx_1)
        + fconvert.t(arg5[7]) * fconvert.t(*(edx_1 + 4))
        + fconvert.t(arg5[0xb]) * fconvert.t(*(edx_1 + 8)) + fconvert.t(arg5[0xf])
    *ebx = fconvert.s(x87_r7_5)
    void* edi_2 = &ebx[1]
    float* esi_1 = &var_10
    *edi_2 = *esi_1
    arg1 = fconvert.s(x87_r7_20)
    *(edi_2 + 4) = esi_1[1]
    int32_t eax_1
    int80_t st0_1
    st0_1, eax_1 = sub_401000(fconvert.s(fconvert.t(arg1)), fconvert.s(float.t(1)))
    
    if (eax_1 == 0)
        long double x87_r7_24 = float.t(1) / fconvert.t(arg1)
        *ebx = fconvert.s(x87_r7_24 * fconvert.t(*ebx))
        ebx[1] = fconvert.s(x87_r7_24 * fconvert.t(ebx[1]))
        ebx[2] = fconvert.s(x87_r7_24 * fconvert.t(ebx[2]))
    
    edx_1 += arg4
    ebx += arg2
    i = arg6
    arg6 -= 1
while (i != 1)
