// 函数: sub_40ad10
// 地址: 0x40ad10
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t edx_1 = arg3 s>> 1
int32_t esi_1 = arg4 << 2
float* result = arg2 + (edx_1 << 2) - 0x20
float* edx_2 = arg1
void* ecx_1 = &result[arg3 - edx_1 + 7]

do
    long double x87_r7_2 = fconvert.t(*(ecx_1 - 4)) - fconvert.t(result[6])
    long double x87_r6_2 = fconvert.t(*ecx_1) - fconvert.t(result[7])
    *(ecx_1 - 4) = fconvert.s(fconvert.t(*(ecx_1 - 4)) + fconvert.t(result[6]))
    *ecx_1 = fconvert.s(fconvert.t(result[7]) + fconvert.t(*ecx_1))
    result[6] = fconvert.s(x87_r6_2 * fconvert.t(edx_2[1]) + x87_r7_2 * fconvert.t(*edx_2))
    void* edx_3 = &edx_2[arg4]
    result[7] = fconvert.s(x87_r6_2 * fconvert.t(*edx_2) - x87_r7_2 * fconvert.t(edx_2[1]))
    long double x87_r7_6 = fconvert.t(*(ecx_1 - 0xc)) - fconvert.t(result[4])
    long double x87_r6_7 = fconvert.t(*(ecx_1 - 8)) - fconvert.t(result[5])
    *(ecx_1 - 0xc) = fconvert.s(fconvert.t(result[4]) + fconvert.t(*(ecx_1 - 0xc)))
    *(ecx_1 - 8) = fconvert.s(fconvert.t(*(ecx_1 - 8)) + fconvert.t(result[5]))
    result[4] = fconvert.s(x87_r6_7 * fconvert.t(*(edx_3 + 4)) + x87_r7_6 * fconvert.t(*edx_3))
    void* edx_4 = edx_3 + esi_1
    result[5] = fconvert.s(x87_r6_7 * fconvert.t(*edx_3) - x87_r7_6 * fconvert.t(*(edx_3 + 4)))
    long double x87_r7_10 = fconvert.t(*(ecx_1 - 0x14)) - fconvert.t(result[2])
    long double x87_r6_12 = fconvert.t(*(ecx_1 - 0x10)) - fconvert.t(result[3])
    *(ecx_1 - 0x14) = fconvert.s(fconvert.t(result[2]) + fconvert.t(*(ecx_1 - 0x14)))
    *(ecx_1 - 0x10) = fconvert.s(fconvert.t(result[3]) + fconvert.t(*(ecx_1 - 0x10)))
    result[2] = fconvert.s(x87_r6_12 * fconvert.t(*(edx_4 + 4)) + x87_r7_10 * fconvert.t(*edx_4))
    void* edx_5 = edx_4 + esi_1
    result[3] = fconvert.s(x87_r6_12 * fconvert.t(*edx_4) - x87_r7_10 * fconvert.t(*(edx_4 + 4)))
    long double x87_r7_14 = fconvert.t(*(ecx_1 - 0x1c)) - fconvert.t(*result)
    long double x87_r6_17 = fconvert.t(*(ecx_1 - 0x18)) - fconvert.t(result[1])
    *(ecx_1 - 0x1c) = fconvert.s(fconvert.t(*result) + fconvert.t(*(ecx_1 - 0x1c)))
    *(ecx_1 - 0x18) = fconvert.s(fconvert.t(*(ecx_1 - 0x18)) + fconvert.t(result[1]))
    result -= 0x20
    ecx_1 -= 0x20
    result[8] = fconvert.s(x87_r6_17 * fconvert.t(*(edx_5 + 4)) + x87_r7_14 * fconvert.t(*edx_5))
    edx_2 = edx_5 + esi_1
    result[9] = fconvert.s(x87_r6_17 * fconvert.t(*edx_5) - x87_r7_14 * fconvert.t(*(edx_5 + 4)))
while (result u>= arg2)

return result
