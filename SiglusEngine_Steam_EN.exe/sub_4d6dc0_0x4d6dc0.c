// 函数: sub_4d6dc0
// 地址: 0x4d6dc0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

HKEY var_8 = arg3

if (arg3->unused.b != 0 && RegCreateKeyA(0x80000001, arg3, &var_8) == NO_ERROR)
    if (arg2 != 0)
        uint32_t cbData = sub_4cfc80(arg4)
        enum WIN32_ERROR eax_2 = RegSetValueExA(var_8, arg2, 0, REG_SZ, arg4, cbData)
        RegCloseKey(var_8)
        int32_t result
        result.b = eax_2 != NO_ERROR
        return result
    
    RegCloseKey(var_8)

return 1
