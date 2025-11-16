// 函数: sub_4d1810
// 地址: 0x4d1810
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
SYSTEMTIME systemTime
uint32_t result = GetLocalTime(&systemTime)

if (arg3 != 0)
    result = zx.d(systemTime.wYear)
    *arg3 = result

if (arg2 != 0)
    result = zx.d(systemTime.wMonth)
    *arg2 = result

if (arg4 != 0)
    result = zx.d(systemTime.wDay)
    *arg4 = result

if (arg5 != 0)
    result = zx.d(systemTime.wDayOfWeek)
    *arg5 = result

if (arg6 != 0)
    result = zx.d(systemTime.wHour)
    *arg6 = result

if (arg7 != 0)
    result = zx.d(systemTime.wMinute)
    *arg7 = result

if (arg8 != 0)
    result = zx.d(systemTime.wSecond)
    *arg8 = result

if (arg9 != 0)
    result = zx.d(systemTime.wMilliseconds)
    *arg9 = result

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
