// 函数: sub_453a3a
// 地址: 0x453a3a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0)
    if (arg3 u< *(arg1 + 0x98))
        return not.d(*(arg1 + 0x9c) + arg3 * 0x50)
    
    return 0

int32_t eax_3 = sub_4538a9(arg1, arg2, 1, 0)

if (eax_3 != 0)
    void* eax_4 = *(eax_3 + 4)
    
    if (*(eax_4 + 4) == 5 && (*(eax_3 + 8) != 0xffffffff || *(eax_4 + 0x10) == 0))
        int32_t eax_5 = *(eax_4 + 0x14)
        int32_t edi
        int32_t var_c_1 = edi
        int32_t result
        
        if (arg3 u< eax_5)
            int32_t eax_6
            
            if (*(eax_3 + 0x20) == 0)
                eax_6 = sub_449882(arg1, eax_3, eax_5)
            
            if (*(eax_3 + 0x20) == 0 && eax_6 s< 0)
                result = 0
            else
                result = not.d(*(eax_3 + 0x20) + arg3 * 0x28)
        else
            result = 0
        
        return result

return 0
