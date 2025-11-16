// 函数: sub_4d53f0
// 地址: 0x4d53f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void devMode
_memset(&devMode, 0, 0x9c)
int16_t var_80 = 0x9c
EnumDisplaySettingsA(nullptr, ENUM_CURRENT_SETTINGS, &devMode)
int32_t var_38
BOOL var_34

if (var_38 == arg3 && var_34 == arg2)
    data_1c051bc = var_34
    BOOL eax_3
    eax_3.b = 1
    data_1c051c0 = var_38
    sub_5f02dd(eax_1 ^ &__saved_ebp)
    return eax_3

data_1c0518d = 1
BOOL eax_4

for (int32_t i = 0; i s< 2; i += 1)
    ChangeDisplaySettingsA(arg4, arg5)
    Sleep(0x320)
    _memset(&devMode, 0, 0x9c)
    int16_t var_80_1 = 0x9c
    EnumDisplaySettingsA(nullptr, ENUM_CURRENT_SETTINGS, &devMode)
    
    if (var_38 == arg3 && var_34 == arg2)
        data_1c051c0 = var_38
        data_1c051bc = var_34
        eax_4.b = 1
        sub_5f02dd(eax_1 ^ &__saved_ebp)
        return eax_4

data_1c0518d = 0
eax_4.b = 0
sub_5f02dd(eax_1 ^ &__saved_ebp)
return eax_4
