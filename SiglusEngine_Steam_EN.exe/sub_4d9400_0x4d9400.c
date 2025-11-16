// 函数: sub_4d9400
// 地址: 0x4d9400
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (InitializeCriticalSectionAndSpinCount(arg1, 0) != 0)
    return NO_ERROR

enum WIN32_ERROR result = GetLastError()

if (result s<= NO_ERROR)
    return result

return zx.d(result.w) | 0x80070000
