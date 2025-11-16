// 函数: ___crtCorExitProcess
// 地址: 0x10003bbf
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\RealLiveSteam.dll

HMODULE var_8 = arg3
BOOL result = GetModuleHandleExW(0, u"mscoree.dll", &var_8)

if (result != 0)
    result = GetProcAddress(var_8, "CorExitProcess")
    
    if (result != 0)
        return result(arg4)

return result
