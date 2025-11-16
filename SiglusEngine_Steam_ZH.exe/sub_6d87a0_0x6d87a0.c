// 函数: sub_6d87a0
// 地址: 0x6d87a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = *(arg3 + 0x298)

if (result == 0)
label_6d87ee:
    
    if (arg2 - 1 u> 0xfffffffe)
        result = 0
    label_6d882c:
        
        if (arg4 s< 2)
            if (arg4 == 0)
                sub_6d47a0(arg3, "insufficient memory to read chunk")
                noreturn
            
            sub_6d47e0(arg3, "insufficient memory to read chunk")
    else
        int32_t eax_2 = *(arg3 + 0x254)
        int32_t result_1
        
        if (eax_2 == 0)
            result_1 = _malloc(arg2)
        else
            result_1 = eax_2(arg3, arg2)
        
        result = result_1
        
        if (result == 0)
            goto label_6d882c
        
        *(arg3 + 0x298) = result
        *(arg3 + 0x29c) = arg2
else if (arg2 u> *(arg3 + 0x29c))
    int32_t eax = *(arg3 + 0x258)
    *(arg3 + 0x298) = 0
    *(arg3 + 0x29c) = 0
    
    if (eax == 0)
        _free(result)
    else
        eax(arg3, result)
    
    goto label_6d87ee

return result
