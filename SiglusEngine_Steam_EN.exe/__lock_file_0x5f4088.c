// 函数: __lock_file
// 地址: 0x5f4088
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 u< &data_63bab0 || arg1 u> 0x63bd10)
    return EnterCriticalSection(arg1 + 0x20)

int32_t result = __lock(((arg1 - &data_63bab0) s>> 5) + 0x10)
*(arg1 + 0xc) |= 0x8000
return result
