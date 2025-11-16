// 函数: sub_4d96c0
// 地址: 0x4d96c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 == 0 || arg2 == 0)
    RaiseException(0xc0000005, 1, 0, nullptr)
    noreturn

*arg1 = arg2
arg1[1] = GetCurrentThreadId()
EnterCriticalSection(&data_20f3494)
arg1[2] = data_20f34ac
data_20f34ac = arg1
return LeaveCriticalSection(&data_20f3494)
