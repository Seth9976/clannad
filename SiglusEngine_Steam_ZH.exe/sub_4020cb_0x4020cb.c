// 函数: sub_4020cb
// 地址: 0x4020cb
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

float* eax = arg1
long double x87_r7_2 =
    fconvert.t(eax[0xa]) * fconvert.t(eax[0xf]) - fconvert.t(eax[0xe]) * fconvert.t(eax[0xb])
long double x87_r6_4 =
    fconvert.t(eax[0xf]) * fconvert.t(eax[9]) - fconvert.t(eax[0xd]) * fconvert.t(eax[0xb])
long double x87_r5_4 =
    fconvert.t(eax[0xe]) * fconvert.t(eax[9]) - fconvert.t(eax[0xa]) * fconvert.t(eax[0xd])
long double x87_r4_4 =
    fconvert.t(eax[8]) * fconvert.t(eax[0xf]) - fconvert.t(eax[0xc]) * fconvert.t(eax[0xb])
long double result =
    fconvert.t(eax[0xe]) * fconvert.t(eax[8]) - fconvert.t(eax[0xc]) * fconvert.t(eax[0xa])
arg1 = fconvert.s(fconvert.t(eax[8]) * fconvert.t(eax[0xd])
    - fconvert.t(eax[0xc]) * fconvert.t(eax[9]))
long double x87_r2_10 = (x87_r7_2 * fconvert.t(eax[5]) - x87_r6_4 * fconvert.t(eax[6])
    + x87_r5_4 * fconvert.t(eax[7])) * fconvert.t(*eax)
    - (x87_r7_2 * fconvert.t(eax[4]) - x87_r4_4 * fconvert.t(eax[6]) + result * fconvert.t(eax[7]))
    * fconvert.t(eax[1])
x87_r2_10 + (x87_r6_4 * fconvert.t(eax[4]) - x87_r4_4 * fconvert.t(eax[5])
    + fconvert.t(arg1) * fconvert.t(eax[7])) * fconvert.t(eax[2]) - (x87_r5_4 * fconvert.t(eax[4])
    - result * fconvert.t(eax[5]) + fconvert.t(arg1) * fconvert.t(eax[6])) * fconvert.t(eax[3])
return result
