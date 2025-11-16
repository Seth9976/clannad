// 函数: sub_4e0ab0
// 地址: 0x4e0ab0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

enum WIN32_ERROR hKey = *arg1

if (hKey != NO_ERROR)
    hKey = RegCloseKey(hKey)
    *arg1 = 0

arg1[1] = 0
return hKey
