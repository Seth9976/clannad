// 函数: sub_4e07b0
// 地址: 0x4e07b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (*arg1 != 0)
    HMODULE hModule = GetModuleHandleA("Advapi32.dll")
    
    if (hModule != 0)
        int32_t eax_1 = GetProcAddress(hModule, "RegCreateKeyTransactedA")
        
        if (eax_1 != 0)
            return eax_1(arg2, arg3, 0, 0, 0, 0x2001f, 0, arg4, arg5, *arg1, 0)
else if (arg1[1] != 0)
    return RegCreateKeyExA(arg2, arg3, 0, nullptr, REG_OPTION_RESERVED, 0x2001f, nullptr, arg4, 
        arg5) __tailcall

return 1
