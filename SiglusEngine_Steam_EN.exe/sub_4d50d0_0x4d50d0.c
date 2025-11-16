// 函数: sub_4d50d0
// 地址: 0x4d50d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t result = 0
int32_t ebx = arg3
int32_t result_1 = 0
enum ENUM_DISPLAY_SETTINGS_MODE iModeNum = 0
void devMode
_memset(&devMode, 0, 0x9c)
int16_t var_80 = 0x9c

if (EnumDisplaySettingsA(nullptr, 0, &devMode) != 0)
    BOOL i
    
    do
        iModeNum += 1
        int32_t var_3c
        int32_t var_38
        int32_t var_34
        
        if (var_38 u>= 0x280 && var_34 u>= 0x1e0 && var_38 u>= var_34 && var_3c == arg4)
            if (ebx != 0)
                int32_t edi = ebx
                ebx += 0x9c
                __builtin_memcpy(edi, &devMode, 0x9c)
                result = result_1
            
            result += 1
            result_1 = result
        
        _memset(&devMode, 0, 0x9c)
        int16_t var_80_1 = 0x9c
        i = EnumDisplaySettingsA(nullptr, iModeNum, &devMode)
    while (i != 0)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
