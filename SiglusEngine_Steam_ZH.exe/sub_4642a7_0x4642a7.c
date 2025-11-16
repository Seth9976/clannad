// 函数: sub_4642a7
// 地址: 0x4642a7
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

long double x87_r5_3 = fconvert.t(*arg2) * fconvert.t(arg3[1])
    + fconvert.t(arg2[1]) * fconvert.t(arg3[5]) + fconvert.t(arg3[0xd])
long double x87_r6_3 = fconvert.t(*arg2) * fconvert.t(arg3[2])
    + fconvert.t(arg2[1]) * fconvert.t(arg3[6]) + fconvert.t(arg3[0xe])
long double x87_r7_4 = fconvert.t(*arg2) * fconvert.t(arg3[3])
    + fconvert.t(arg2[1]) * fconvert.t(arg3[7]) + fconvert.t(arg3[0xf])
*arg1 = fconvert.s(fconvert.t(*arg2) * fconvert.t(*arg3) + fconvert.t(arg2[1]) * fconvert.t(arg3[4])
    + fconvert.t(arg3[0xc]))
arg1[1] = fconvert.s(x87_r5_3)
arg1[2] = fconvert.s(x87_r6_3)
arg1[3] = fconvert.s(x87_r7_4)
return arg1
