// 函数: __unlock_file
// 地址: 0x100067cf
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

if (arg1 u< &data_10017440 || arg1 u> 0x100176a0)
    return LeaveCriticalSection(arg1 + 0x20)

*(arg1 + 0xc) &= 0xffff7fff
return __unlock(((arg1 - &data_10017440) s>> 5) + 0x10)
