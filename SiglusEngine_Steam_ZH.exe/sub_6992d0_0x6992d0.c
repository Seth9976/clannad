// 函数: sub_6992d0
// 地址: 0x6992d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

enum WIN32_ERROR hKey = *arg1

if (hKey != NO_ERROR)
    hKey = RegCloseKey(hKey)
    *arg1 = 0

arg1[1] = 0
return hKey
