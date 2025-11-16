// 函数: sub_4e0840
// 地址: 0x4e0840
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (*arg1 != 0)
    HMODULE hModule = GetModuleHandleA("Advapi32.dll")
    
    if (hModule != 0)
        int32_t eax_1 = GetProcAddress(hModule, "RegDeleteKeyTransactedA")
        
        if (eax_1 != 0)
            return eax_1(arg2, arg3, 0, 0, *arg1, 0)
else if (arg1[1] != 0)
    return RegDeleteKeyA(arg2, arg3) __tailcall

return 1
