// 函数: sub_5c5080
// 地址: 0x5c5080
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0 || arg3 == 0)
    RaiseException(0xc0000005, 1, 0, nullptr)
    noreturn

*arg2 = arg3
arg2[1] = GetCurrentThreadId()
EnterCriticalSection(&data_4ecd184)
arg2[2] = data_4ecd19c
data_4ecd19c = arg2
return LeaveCriticalSection(&data_4ecd184) __tailcall
