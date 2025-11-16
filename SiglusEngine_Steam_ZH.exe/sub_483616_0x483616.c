// 函数: sub_483616
// 地址: 0x483616
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

char* eax = *(arg1 + 0x10)

if (&eax[1] u> *(arg1 + 0xc))
    return 0

eax.b = *eax
*arg2 = eax.b
*(arg1 + 0x10) += 1
return 1
