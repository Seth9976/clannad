// 函数: ___crtCorExitProcess
// 地址: 0x5f2f8c
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

HMODULE var_8 = arg3
BOOL result = GetModuleHandleExW(0, u"mscoree.dll", &var_8)

if (result != 0)
    result = GetProcAddress(var_8, "CorExitProcess")
    
    if (result != 0)
        return result(arg4)

return result
