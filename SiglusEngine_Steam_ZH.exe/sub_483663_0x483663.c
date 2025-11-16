// 函数: sub_483663
// 地址: 0x483663
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax = *(arg1 + 0x10)

if (&eax[1] u> *(arg1 + 0xc))
    return 0

*arg2 = *eax
*(arg1 + 0x10) += 4
return 1
