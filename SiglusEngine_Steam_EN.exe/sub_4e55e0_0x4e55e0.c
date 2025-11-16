// 函数: sub_4e55e0
// 地址: 0x4e55e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
bool cond:0 = data_1c041d0 == 0
data_1b8add4 = 0
data_1b8a714 = 0
data_1b8ad78 = 0

if (not(cond:0))
    data_1b8a71c = 1
    data_1c041d0 = 0
    data_1af1740 = 1

SYSTEMTIME systemTime
GetLocalTime(&systemTime)
uint32_t wMilliseconds = zx.d(systemTime.wMilliseconds)
data_20bfa74 = zx.d(systemTime.wHour)
uint32_t wMinute = zx.d(systemTime.wMinute)
uint32_t wSecond = zx.d(systemTime.wSecond)
data_20bfa78 = wMinute
data_20bfa7c = wSecond
data_20bfa80 = wMilliseconds
data_20bfa70 = (wMilliseconds * 2 - wMilliseconds s/ 0x21 * 0x21 + zx.d(systemTime.wHour) + wMinute
    + wSecond + data_20bfa70) << 8
data_20c0538 = timeGetTime()
sub_4e5220()
uint32_t dwMilliseconds

if (data_187c518 != 7 && data_139270c == 0xffffffff)
    dwMilliseconds = data_1b14a2c
    
    if (dwMilliseconds s> 0)
        int32_t eax_9 = Sleep(dwMilliseconds)
        data_1b14a2c = 0
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_9
    
    if (data_1c04444 == 0 || data_1c04204 != 0)
        dwMilliseconds = Sleep(1)
else
    dwMilliseconds = Sleep(0x64)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return dwMilliseconds
