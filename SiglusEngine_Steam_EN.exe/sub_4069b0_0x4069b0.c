// 函数: sub_4069b0
// 地址: 0x4069b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

long double x87_r7_1 = fabs(fconvert.t(**arg1))
long double x87_r6_1 = fabs(fconvert.t(**arg2))
x87_r7_1 - x87_r6_1
float* eax
eax.w = (x87_r7_1 < x87_r6_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_1, x87_r6_1) ? 1 : 0) << 0xa
    | (x87_r7_1 == x87_r6_1 ? 1 : 0) << 0xe | 0x3000
int32_t result

if ((eax:1.b & 1) == 0)
    result = 0
else
    result = 1

x87_r7_1 - x87_r6_1
eax.w = (x87_r7_1 < x87_r6_1 ? 1 : 0) << 8 | (is_unordered.t(x87_r7_1, x87_r6_1) ? 1 : 0) << 0xa
    | (x87_r7_1 == x87_r6_1 ? 1 : 0) << 0xe | 0x3800

if ((eax:1.b & 0x41) != 0)
    return result

return result - 1
