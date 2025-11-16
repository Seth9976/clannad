// 函数: sub_434210
// 地址: 0x434210
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0)
    int32_t edx_1 = *(arg1 + 0x328)
    int32_t ecx = arg3
    
    if (ecx u< edx_1)
        void* eax_1 = *(arg1 + 0x34c)
        
        while (true)
            ecx += 1
            
            if (ecx u>= edx_1)
                break
            
            eax_1 = *(eax_1 + 0x34)
        
        return not.d(eax_1)
    
    return 0

int32_t edi
int32_t var_c_1 = edi
int32_t eax_2 = sub_433f9c(arg1, arg2, 1)
int32_t result

if (eax_2 == 0)
    result = 0
else
    void* eax_6 = *(*(eax_2 + 4) + 0x40) + *(arg1 + 0x344) + *(eax_2 + 0x18)
    
    if (*(eax_6 + 4) != 5 || (*(eax_2 + 0x10) == 0xffffffff && *(eax_6 + 0x10) != 0))
        result = 0
    else
        int32_t eax_7 = *(eax_6 + 0x14)
        
        if (arg3 u>= eax_7)
            result = 0
        else
            int32_t eax_8
            
            if (*(eax_2 + 8) == 0)
                int32_t var_10_1 = eax_7
                eax_8 = sub_4339f8(arg1, eax_2)
            
            if (*(eax_2 + 8) != 0 || eax_8 s>= 0)
                result = not.d((arg3 << 5) + *(eax_2 + 8))
            else
                result = 0

return result
