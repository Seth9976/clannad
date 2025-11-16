// 函数: sub_5c4b50
// 地址: 0x5c4b50
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*arg1 != 8 || *(arg1 + 8) != arg2)
    HRESULT eax_1 = VariantClear(arg1)
    
    if (eax_1 s< 0)
        sub_5c4990(eax_1)
        noreturn
    
    *arg1 = 8
    BSTR eax_2 = SysAllocString(arg2)
    *(arg1 + 8) = eax_2
    
    if (eax_2 == 0 && arg2 != 0)
        *(arg1 + 8) = 0x8007000e
        *arg1 = 0xa
        sub_5c4990(0x8007000e)
        noreturn

return arg1
