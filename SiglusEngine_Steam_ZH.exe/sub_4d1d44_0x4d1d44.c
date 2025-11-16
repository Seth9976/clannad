// 函数: sub_4d1d44
// 地址: 0x4d1d44
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*arg4 = 1
int32_t eax_2 = *(arg2 + 0xc)
*arg3 = eax_2

if (eax_2 u< *(arg1 + 0x28))
    return 0

sub_4a4100(arg1, *(*(arg1 + 0x100) + 0x3c), 0x119a, "maximum input register index exceeded")
return 0x80004005
