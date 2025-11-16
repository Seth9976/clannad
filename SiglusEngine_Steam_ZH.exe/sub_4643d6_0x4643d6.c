// 函数: sub_4643d6
// 地址: 0x4643d6
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

long double x87_r6_3 = fconvert.t(*arg2) * fconvert.t(arg3[1])
    + fconvert.t(arg2[1]) * fconvert.t(arg3[5]) + fconvert.t(arg2[2]) * fconvert.t(arg3[9])
long double x87_r7_4 = fconvert.t(*arg2) * fconvert.t(arg3[2])
    + fconvert.t(arg2[1]) * fconvert.t(arg3[6]) + fconvert.t(arg2[2]) * fconvert.t(arg3[0xa])
*arg1 = fconvert.s(fconvert.t(*arg2) * fconvert.t(*arg3) + fconvert.t(arg2[1]) * fconvert.t(arg3[4])
    + fconvert.t(arg2[2]) * fconvert.t(arg3[8]))
arg1[1] = fconvert.s(x87_r6_3)
arg1[2] = fconvert.s(x87_r7_4)
return arg1
