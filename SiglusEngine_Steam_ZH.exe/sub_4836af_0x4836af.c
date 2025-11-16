// 函数: sub_4836af
// 地址: 0x4836af
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

double* eax = *(arg1 + 0x10)

if (&eax[1] u> *(arg1 + 0xc))
    return 0

*arg2 = fconvert.d(fconvert.t(*eax))
*(arg1 + 0x10) += 8
return 1
