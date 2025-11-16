// 函数: sub_699060
// 地址: 0x699060
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*arg1 != 0)
    HMODULE hModule = GetModuleHandleW(u"Advapi32.dll")
    
    if (hModule != 0)
        int32_t eax_1 = GetProcAddress(hModule, "RegDeleteKeyTransactedW")
        
        if (eax_1 != 0)
            return eax_1(arg2, arg3, 0, 0, *arg1, 0)
else if (arg1[1] != 0)
    return RegDeleteKeyW(arg2, arg3) __tailcall

return 1
