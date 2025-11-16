// 函数: sub_5c4930
// 地址: 0x5c4930
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t cchWideChar = MultiByteToWideChar(3, 0, "none", 0xffffffff, nullptr, 0)
BSTR result = SysAllocStringLen(nullptr, cchWideChar - 1)

if (result != 0
        && MultiByteToWideChar(3, 0, "none", 0xffffffff, result, cchWideChar) != cchWideChar)
    SysFreeString(result)
    return 0

return result
