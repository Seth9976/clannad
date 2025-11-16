// 函数: __unlock_file
// 地址: 0x74b801
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1 u< &data_b4c1f0 || arg1 u> 0xb4c450)
    return LeaveCriticalSection(arg1 + 0x20)

*(arg1 + 0xc) &= 0xffff7fff
return __unlock(((arg1 - &data_b4c1f0) s>> 5) + 0x10)
