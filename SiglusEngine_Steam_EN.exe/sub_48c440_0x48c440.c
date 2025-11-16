// 函数: sub_48c440
// 地址: 0x48c440
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 != 0)
    if (arg2 != 0 && *(arg1 + 0xc) == *(arg2 + 0xc))
        return 1
else if (arg2 == 0)
    return arg1 + 1

return 0
