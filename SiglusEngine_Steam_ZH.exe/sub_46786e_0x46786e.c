// 函数: sub_46786e
// 地址: 0x46786e
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

long double x87_r7 = fconvert.t(arg2)
long double x87_r6 = fconvert.t(arg3)
long double x87_r5_3 = fabs(x87_r7 * x87_r6 - fconvert.t(1.0))
long double temp1 = fconvert.t(0.050000000000000003)
x87_r5_3 - temp1

if ((((x87_r5_3 < temp1 ? 1 : 0) << 8 | (is_unordered.t(x87_r5_3, temp1) ? 1 : 0) << 0xa
        | (x87_r5_3 == temp1 ? 1 : 0) << 0xe | 0x3000):1.b & 0x41) == 0)
    *(arg1 + 0x61) |= 0x20

*(arg1 + 0x130) = fconvert.s(x87_r6)
*(arg1 + 0x134) = fconvert.s(x87_r7)
return arg1
