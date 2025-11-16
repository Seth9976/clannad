// 函数: sub_498b18
// 地址: 0x498b18
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx_1 = arg1[3] - 5
int32_t edi
int32_t var_10 = edi
int32_t esi = 0xffff

if (ecx_1 u< 0xffff)
    esi = ecx_1

while (true)
    int32_t eax_1 = arg1[0x1b]
    
    if (eax_1 u<= 1)
        sub_4989be()
        eax_1 = arg1[0x1b]
        
        if (eax_1 == 0)
            if (arg2 != 0)
                int32_t esi_1 = arg1[0x15]
                char* eax_16
                
                if (esi_1 s< 0)
                    eax_16 = nullptr
                else
                    eax_16 = arg1[0xc] + esi_1
                
                int32_t ecx_7
                ecx_7.b = arg2 == 4
                sub_4e40a2(arg1, eax_16, arg1[0x19] - esi_1, ecx_7)
                arg1[0x15] = arg1[0x19]
                sub_49881e(*arg1)
                
                if (*(*arg1 + 0x10) != 0)
                    int32_t eax_20
                    eax_20.b = arg2 == 4
                    return eax_20 * 2 + 1
                
                if (arg2 == 4)
                    return 2
            
            break
    
    int32_t temp1_1 = arg1[0x19]
    arg1[0x19] += eax_1
    int32_t edx_1 = arg1[0x15]
    int32_t ecx_2 = arg1[0x19]
    arg1[0x1b] = 0
    int32_t eax_2 = edx_1 + esi
    
    if (temp1_1 == neg.d(eax_1) || ecx_2 u>= eax_2)
        arg1[0x1b] = ecx_2 - eax_2
        arg1[0x19] = eax_2
        char* ecx_5
        
        if (edx_1 s< 0)
            ecx_5 = nullptr
        else
            ecx_5 = arg1[0xc] + edx_1
        
        sub_4e40a2(arg1, ecx_5, eax_2 - edx_1, 0)
        arg1[0x15] = arg1[0x19]
        sub_49881e(*arg1)
        
        if (*(*arg1 + 0x10) == 0)
            break
    
    int32_t ecx_6 = arg1[0x15]
    int32_t edx_3 = arg1[0x19] - ecx_6
    
    if (edx_3 u>= arg1[9] - 0x106)
        char* eax_10
        
        if (ecx_6 s< 0)
            eax_10 = nullptr
        else
            eax_10 = arg1[0xc] + ecx_6
        
        sub_4e40a2(arg1, eax_10, edx_3, 0)
        arg1[0x15] = arg1[0x19]
        sub_49881e(*arg1)
        
        if (*(*arg1 + 0x10) == 0)
            break

return 0
