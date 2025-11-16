// 函数: __lock_file2
// 地址: 0x1000679f
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

if (arg1 s>= 0x14)
    return EnterCriticalSection(arg2 + 0x20)

__lock(arg1 + 0x10)
*(arg2 + 0xc) |= 0x8000
return arg2
