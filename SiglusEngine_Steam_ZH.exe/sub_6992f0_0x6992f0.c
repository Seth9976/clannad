// 函数: sub_6992f0
// 地址: 0x6992f0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ecx = arg1[2]

if (ecx != 0)
    return sub_699060(ecx, *arg1, arg2)

int32_t eax_1

if (data_4ecd120 != 0)
    eax_1 = data_4ecd124
else
    HMODULE hModule = GetModuleHandleW(u"Advapi32.dll")
    
    if (hModule == 0)
        eax_1 = data_4ecd124
        data_4ecd120 = 1
    else
        eax_1 = GetProcAddress(hModule, "RegDeleteKeyExW")
        data_4ecd124 = eax_1
        data_4ecd120 = 1

if (eax_1 == 0)
    return RegDeleteKeyW(*arg1, arg2)

return eax_1(*arg1, arg2, arg1[1], 0)
