// 函数: sub_4dcce0
// 地址: 0x4dcce0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

BSTR bstrString = *(arg1 + 0x9c)

if (arg2 != bstrString)
    SysFreeString(bstrString)
    
    if (arg2 == 0)
        *(arg1 + 0x9c) = 0
    else
        BSTR eax = SysAllocString(arg2)
        *(arg1 + 0x9c) = eax
        
        if (eax == 0)
            sub_4d9320(0x8007000e)
            noreturn

return 0
