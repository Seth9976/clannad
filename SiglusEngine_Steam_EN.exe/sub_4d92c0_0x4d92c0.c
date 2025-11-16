// 函数: sub_4d92c0
// 地址: 0x4d92c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 == 0)
    return 0

int32_t cchWideChar = MultiByteToWideChar(3, 0, arg1, 0xffffffff, nullptr, 0)
BSTR result = SysAllocStringLen(nullptr, cchWideChar - 1)

if (result != 0 && MultiByteToWideChar(3, 0, arg1, 0xffffffff, result, cchWideChar) != cchWideChar)
    SysFreeString(result)
    result = nullptr

return result
