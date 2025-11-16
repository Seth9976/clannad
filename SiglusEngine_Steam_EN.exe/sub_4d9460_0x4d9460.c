// 函数: sub_4d9460
// 地址: 0x4d9460
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg2 s< 0)
    sub_4d9320(0x80070057)
    noreturn

if (arg2 != 0)
    BSTR eax_2 = SysAllocStringLen(nullptr, arg2)
    *arg1 = eax_2
    
    if (eax_2 == 0)
        sub_4d9320(0x8007000e)
        noreturn
else
    *arg1 = 0

return arg1
