// 函数: sub_405740
// 地址: 0x405740
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

float* ecx = arg1
float* edx_1 = arg2 - ecx
int32_t i_1 = 0x38
float result
int32_t i

do
    long double x87_r7_1 = fconvert.t(*(edx_1 + ecx))
    long double temp0_1 = fconvert.t(*ecx)
    x87_r7_1 - temp0_1
    result.w = (x87_r7_1 < temp0_1 ? 1 : 0) << 8
        | (is_unordered.t(x87_r7_1, temp0_1) ? 1 : 0) << 0xa | (x87_r7_1 == temp0_1 ? 1 : 0) << 0xe
    
    if ((result:1.b & 1) != 0)
        result = *(edx_1 + ecx)
        *ecx = result
    
    ecx = &ecx[1]
    i = i_1
    i_1 -= 1
while (i != 1)
return result
