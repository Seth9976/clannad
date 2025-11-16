// 函数: sub_5c7a90
// 地址: 0x5c7a90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0)
    return 0x80004003

uint32_t eax_3 = zx.d((*(arg1 + 0x7c)).b) & 1
int32_t eax_4 = neg.d(eax_3)
*arg2 = (sbb.d(eax_4, eax_4, eax_3 != 0)).w
return 0
