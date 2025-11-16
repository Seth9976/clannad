// 函数: ___copy_path_to_wide_string
// 地址: 0x5f2eda
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
uint32_t CodePage = 0

if (arg1 == 0 || arg2 == 0)
    *__errno() = 0x16
    __invalid_parameter_noinfo()
    return 0x16

if (sub_5f3725(ecx) == 0 && AreFileApisANSI() == 0)
    CodePage = 1

*arg2 = 0
int32_t cchWideChar = MultiByteToWideChar(CodePage, 0, arg1, 0xffffffff, nullptr, 0)

if (cchWideChar != 0)
    wchar16* lpWideCharStr = sub_5f6ab6(cchWideChar * 2)
    *arg2 = lpWideCharStr
    
    if (lpWideCharStr != 0)
        if (MultiByteToWideChar(CodePage, 0, arg1, 0xffffffff, lpWideCharStr, cchWideChar) != 0)
            return 1
        
        __dosmaperr(GetLastError())
        _free(*arg2)
        *arg2 = 0
else
    __dosmaperr(GetLastError())

return 0
