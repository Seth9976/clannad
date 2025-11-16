// 函数: sub_41611a
// 地址: 0x41611a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_3c = edi
HKEY hKey_1

if (RegOpenKeyA(0x80000002, "Software\Microsoft\Direct3D", &hKey_1) == NO_ERROR)
    HKEY hKey = hKey_1
    uint32_t lpcbData = 4
    int32_t data
    enum REG_VALUE_TYPE type
    
    if (RegQueryValueExA(hKey, "DisableMMX", nullptr, &type, &data, &lpcbData) == NO_ERROR
            && type == REG_DWORD && data != 0)
        RegCloseKey(hKey_1)
        data_b4e308 = 0
        return 0
    
    RegCloseKey(hKey_1)

if (data_b4e308 s< 0)
    data_b4e308 = 0
    SYSTEM_INFO systemInfo
    int32_t ecx_1 = GetSystemInfo(&systemInfo)
    
    if (systemInfo..dwOemId.w == 0 && systemInfo.wProcessorLevel u>= 5 && sub_4160f2(ecx_1) != 0)
        data_b4e308 = 1

return data_b4e308
