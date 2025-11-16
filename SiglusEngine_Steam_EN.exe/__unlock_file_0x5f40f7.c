// 函数: __unlock_file
// 地址: 0x5f40f7
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 u< &data_63bab0 || arg1 u> 0x63bd10)
    return LeaveCriticalSection(arg1 + 0x20)

*(arg1 + 0xc) &= 0xffff7fff
return __unlock(((arg1 - &data_63bab0) s>> 5) + 0x10)
