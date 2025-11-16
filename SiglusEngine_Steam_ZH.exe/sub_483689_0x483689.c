// 函数: sub_483689
// 地址: 0x483689
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

float* eax = *(arg1 + 0x10)

if (&eax[1] u> *(arg1 + 0xc))
    return 0

*arg2 = fconvert.s(fconvert.t(*eax))
*(arg1 + 0x10) += 4
return 1
