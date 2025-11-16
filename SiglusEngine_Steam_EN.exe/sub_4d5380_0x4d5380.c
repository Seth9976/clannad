// 函数: sub_4d5380
// 地址: 0x4d5380
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void devMode
_memset(&devMode, 0, 0x9c)
int16_t var_80 = 0x9c
BOOL result = EnumDisplaySettingsA(nullptr, ENUM_CURRENT_SETTINGS, &devMode)

if (arg1 != 0)
    BOOL result_1
    result = result_1
    *arg1 = result

if (arg2 != 0)
    BOOL result_2
    result = result_2
    *arg2 = result

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
