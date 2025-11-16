// 函数: __lock_file
// 地址: 0x74b792
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1 u< &data_b4c1f0 || arg1 u> 0xb4c450)
    return EnterCriticalSection(arg1 + 0x20)

int32_t result = __lock(((arg1 - &data_b4c1f0) s>> 5) + 0x10)
*(arg1 + 0xc) |= 0x8000
return result
