// 函数: __unlock_file2
// 地址: 0x10006809
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

if (arg1 s>= 0x14)
    return LeaveCriticalSection(arg2 + 0x20)

*(arg2 + 0xc) &= 0xffff7fff
return __unlock(arg1 + 0x10)
