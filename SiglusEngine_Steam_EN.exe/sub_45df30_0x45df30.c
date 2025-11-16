// 函数: sub_45df30
// 地址: 0x45df30
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

HKEY var_8 = arg1

if (data_1332d90 == 0 || data_1332b88 == 0
        || RegOpenKeyExA(0x80000001, &data_1332b88, 0, KEY_ALL_ACCESS, &var_8) != NO_ERROR)
    return 

enum WIN32_ERROR eax = RegCloseKey(var_8)

if (data_1333df8 != arg1)
    sub_4d6d50(eax, "MmxUse", &data_1332b88, arg1)
    data_1333df8 = arg1

data_1af451c = 0
