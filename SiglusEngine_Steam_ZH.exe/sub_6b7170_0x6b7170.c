// 函数: sub_6b7170
// 地址: 0x6b7170
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* esi = *(arg1 + 0xc)

if (esi == 0)
    return 

HKEY hKey = *esi

if (hKey != 0)
    RegCloseKey(hKey)

j__free(esi)
