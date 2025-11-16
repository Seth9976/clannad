// 函数: sub_4d5680
// 地址: 0x4d5680
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t result = __security_cookie ^ &__saved_ebp
int32_t result_2 = result

if (data_1c0518d == 0)
    void devMode
    _memset(&devMode, 0, 0x9c)
    int16_t var_80_1 = 0x9c
    EnumDisplaySettingsA(nullptr, ENUM_CURRENT_SETTINGS, &devMode)
    int32_t result_1
    result = result_1
    int32_t var_38
    
    if (var_38 != data_1c051c0 || result != data_1c051bc)
        data_1c051c8 = var_38
        data_1c051c0 = var_38
        data_1c051c4 = result
        data_1c051bc = result
        result = sub_4d4e10(1, 1)

data_1c0518d = 0
sub_5f02dd(result_2 ^ &__saved_ebp)
return result
