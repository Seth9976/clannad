// 函数: __lock_file
// 地址: 0x10006760
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

if (arg1 u< &data_10017440 || arg1 u> 0x100176a0)
    return EnterCriticalSection(arg1 + 0x20)

int32_t result = __lock(((arg1 - &data_10017440) s>> 5) + 0x10)
*(arg1 + 0xc) |= 0x8000
return result
