// 函数: sub_4e0ad0
// 地址: 0x4e0ad0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* ecx = arg1[2]

if (ecx != 0)
    return sub_4e0840(ecx, *arg1, arg2)

int32_t eax_1

if (data_20f3430 != 0)
    eax_1 = data_20f3404
else
    HMODULE hModule = GetModuleHandleA("Advapi32.dll")
    
    if (hModule == 0)
        eax_1 = data_20f3404
        data_20f3430 = 1
    else
        eax_1 = GetProcAddress(hModule, "RegDeleteKeyExA")
        data_20f3404 = eax_1
        data_20f3430 = 1

if (eax_1 == 0)
    return RegDeleteKeyA(*arg1, arg2)

return eax_1(*arg1, arg2, arg1[1], 0)
