// 函数: sub_4dc7f0
// 地址: 0x4dc7f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0)
    return 0x80004003

uint32_t eax_3 = zx.d((*(arg1 + 0x7c)).b) & 4
int32_t eax_4 = neg.d(eax_3)
*arg2 = (sbb.d(eax_4, eax_4, eax_3 != 0)).w
return 0
