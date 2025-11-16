// 函数: sub_5c4a50
// 地址: 0x5c4a50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (InitializeCriticalSectionAndSpinCount(arg1, 0) != 0)
    return NO_ERROR

enum WIN32_ERROR result = GetLastError()

if (result s<= NO_ERROR)
    return result

return zx.d(result.w) | 0x80070000
