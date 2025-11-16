// 函数: sub_464349
// 地址: 0x464349
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

long double x87_r5_4 = fconvert.t(*arg2) * fconvert.t(arg3[1])
    + fconvert.t(arg2[1]) * fconvert.t(arg3[5]) + fconvert.t(arg2[2]) * fconvert.t(arg3[9])
    + fconvert.t(arg3[0xd])
long double x87_r6_4 = fconvert.t(*arg2) * fconvert.t(arg3[2])
    + fconvert.t(arg2[1]) * fconvert.t(arg3[6]) + fconvert.t(arg2[2]) * fconvert.t(arg3[0xa])
    + fconvert.t(arg3[0xe])
long double x87_r7_5 = fconvert.t(*arg2) * fconvert.t(arg3[3])
    + fconvert.t(arg2[1]) * fconvert.t(arg3[7]) + fconvert.t(arg2[2]) * fconvert.t(arg3[0xb])
    + fconvert.t(arg3[0xf])
*arg1 = fconvert.s(fconvert.t(*arg2) * fconvert.t(*arg3) + fconvert.t(arg2[1]) * fconvert.t(arg3[4])
    + fconvert.t(arg2[2]) * fconvert.t(arg3[8]) + fconvert.t(arg3[0xc]))
arg1[1] = fconvert.s(x87_r5_4)
arg1[2] = fconvert.s(x87_r6_4)
arg1[3] = fconvert.s(x87_r7_5)
return arg1
