// 函数: sub_416093
// 地址: 0x416093
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

HKEY var_8 = arg1
var_8 = nullptr

if (RegOpenKeyA(0x80000002, "Software\Microsoft\Direct3D", &var_8) == NO_ERROR)
    enum REG_VALUE_TYPE arg_c
    uint32_t lpcbData
    enum WIN32_ERROR eax_1 = RegQueryValueExA(var_8, arg3, nullptr, &arg_c, arg_c, &lpcbData)
    RegCloseKey(var_8)
    
    if (eax_1 == NO_ERROR && arg_c == arg2)
        return 1

return 0
