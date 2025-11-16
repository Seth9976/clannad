// 函数: sub_699380
// 地址: 0x699380
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

HKEY phkResult = nullptr
int32_t* ecx = arg1[2]
enum WIN32_ERROR result
enum REG_CREATE_KEY_DISPOSITION lpdwDisposition
HKEY* var_2c
enum REG_CREATE_KEY_DISPOSITION* var_28

if (ecx == 0)
    result = RegCreateKeyExW(arg2, arg3, 0, nullptr, REG_OPTION_RESERVED, 0x2001f, nullptr, 
        &phkResult, &lpdwDisposition)
else
    result = sub_698fd0(ecx, arg2, arg3, var_2c, var_28)

if (result == NO_ERROR)
    HKEY hKey = *arg1
    enum WIN32_ERROR result_1 = NO_ERROR
    
    if (hKey != 0)
        result_1 = RegCloseKey(hKey)
        *arg1 = 0
    
    result = result_1
    *arg1 = phkResult
    arg1[1] = 0

return result
