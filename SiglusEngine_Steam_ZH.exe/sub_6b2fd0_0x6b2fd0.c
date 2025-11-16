// 函数: sub_6b2fd0
// 地址: 0x6b2fd0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t var_20 = 0
SYSTEMTIME systemTime
GetLocalTime(&systemTime)
uint32_t wMilliseconds = zx.d(systemTime.wMilliseconds)
uint32_t wSecond = zx.d(systemTime.wSecond)
uint32_t wMinute = zx.d(systemTime.wMinute)
uint32_t wHour = zx.d(systemTime.wHour)
uint32_t wDay = zx.d(systemTime.wDay)
uint32_t wMonth = zx.d(systemTime.wMonth)
uint32_t wYear = zx.d(systemTime.wYear)
void var_58
sub_52e820(&var_58, u"%04d/%02d/%02d %02d:%02d:%02d.%04d")
sub_6ae4c0(arg1, var_58)
sub_745f2b(eax_1 ^ &__saved_ebp)
return arg1
