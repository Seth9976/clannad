// 函数: sub_5c4ab0
// 地址: 0x5c4ab0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 s< 0)
    sub_5c4990(0x80070057)
    noreturn

if (arg2 != 0)
    BSTR eax_2 = SysAllocStringLen(nullptr, arg2)
    *arg1 = eax_2
    
    if (eax_2 == 0)
        sub_5c4990(0x8007000e)
        noreturn
else
    *arg1 = 0

return arg1
