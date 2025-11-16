// 函数: sub_40ac80
// 地址: 0x40ac80
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

float* result = arg1
long double x87_r7_1 = fconvert.t(result[2]) + fconvert.t(result[6])
arg1 = fconvert.s(fconvert.t(result[6]) - fconvert.t(result[2]))
long double x87_r6_3 = fconvert.t(*result) + fconvert.t(result[4])
float var_4 = fconvert.s(fconvert.t(result[4]) - fconvert.t(*result))
result[6] = fconvert.s(x87_r6_3 + x87_r7_1)
result[4] = fconvert.s(x87_r7_1 - x87_r6_3)
long double x87_r7_4 = fconvert.t(result[5]) - fconvert.t(result[1])
float var_8 = fconvert.s(fconvert.t(result[7]) - fconvert.t(result[3]))
*result = fconvert.s(fconvert.t(arg1) + x87_r7_4)
result[2] = fconvert.s(fconvert.t(arg1) - x87_r7_4)
long double x87_r7_6 = fconvert.t(result[1]) + fconvert.t(result[5])
long double x87_r6_13 = fconvert.t(result[3]) + fconvert.t(result[7])
result[3] = fconvert.s(fconvert.t(var_4) + fconvert.t(var_8))
result[1] = fconvert.s(fconvert.t(var_8) - fconvert.t(var_4))
result[7] = fconvert.s(x87_r6_13 + x87_r7_6)
result[5] = fconvert.s(x87_r6_13 - x87_r7_6)
return result
