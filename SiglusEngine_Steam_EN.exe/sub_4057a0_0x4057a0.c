// 函数: sub_4057a0
// 地址: 0x4057a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

float* result = arg1
int32_t i_1 = 0x38
int32_t i

do
    long double x87_r7_2 = fconvert.t(arg2) + fconvert.t(*result)
    result = &result[1]
    i = i_1
    i_1 -= 1
    result[-1] = fconvert.s(x87_r7_2)
while (i != 1)
return result
