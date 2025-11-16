// 函数: sub_403dbd
// 地址: 0x403dbd
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

long double x87_r4_5 = fconvert.t(arg3[3]) * fconvert.t(*arg2)
    + fconvert.t(*arg3) * fconvert.t(arg2[3]) + fconvert.t(arg3[1]) * fconvert.t(arg2[2])
    - fconvert.t(arg3[2]) * fconvert.t(arg2[1])
long double x87_r5_4 = fconvert.t(arg3[3]) * fconvert.t(arg2[1])
    - fconvert.t(*arg3) * fconvert.t(arg2[2]) + fconvert.t(arg3[1]) * fconvert.t(arg2[3])
    + fconvert.t(arg3[2]) * fconvert.t(*arg2)
long double x87_r6_4 = fconvert.t(arg3[3]) * fconvert.t(arg2[2])
    + fconvert.t(*arg3) * fconvert.t(arg2[1]) - fconvert.t(arg3[1]) * fconvert.t(*arg2)
    + fconvert.t(arg3[2]) * fconvert.t(arg2[3])
long double x87_r7_5 = fconvert.t(arg3[3]) * fconvert.t(arg2[3])
    - fconvert.t(*arg3) * fconvert.t(*arg2) - fconvert.t(arg3[1]) * fconvert.t(arg2[1])
    - fconvert.t(arg3[2]) * fconvert.t(arg2[2])
*arg1 = fconvert.s(x87_r4_5)
arg1[1] = fconvert.s(x87_r5_4)
arg1[2] = fconvert.s(x87_r6_4)
arg1[3] = fconvert.s(x87_r7_5)
return arg1
