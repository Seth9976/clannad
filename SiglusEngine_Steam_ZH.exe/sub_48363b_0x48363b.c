// 函数: sub_48363b
// 地址: 0x48363b
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int16_t* eax = *(arg1 + 0x10)

if (&eax[1] u> *(arg1 + 0xc))
    return 0

eax.w = *eax
*arg2 = eax.w
*(arg1 + 0x10) += 2
return 1
