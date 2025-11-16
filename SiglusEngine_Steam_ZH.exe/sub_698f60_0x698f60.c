// 函数: sub_698f60
// 地址: 0x698f60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*arg1 != 0)
    HMODULE hModule = GetModuleHandleW(u"Advapi32.dll")
    
    if (hModule != 0)
        int32_t eax_1 = GetProcAddress(hModule, "RegOpenKeyTransactedW")
        
        if (eax_1 != 0)
            return eax_1(arg2, arg3, 0, arg4, arg5, *arg1, 0)
else if (arg1[1] != 0)
    return RegOpenKeyExW(arg2, arg3, 0, arg4, arg5) __tailcall

return 1
