// 函数: sub_5c8070
// 地址: 0x5c8070
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

BSTR bstrString = *(arg1 + 0x9c)

if (arg2 != bstrString)
    SysFreeString(bstrString)
    
    if (arg2 == 0)
        *(arg1 + 0x9c) = 0
    else
        BSTR eax = SysAllocString(arg2)
        *(arg1 + 0x9c) = eax
        
        if (eax == 0)
            sub_5c4990(0x8007000e)
            noreturn

return 0
