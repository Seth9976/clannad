// 函数: sub_49f952
// 地址: 0x49f952
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = *(arg3 + 0x14)
void* eax_2 = *(ecx + (arg1 << 2))
void* ecx_1 = *(ecx + (arg2 << 2))
int32_t edx_1 = *(eax_2 + 0x38)
int32_t esi = *(ecx_1 + 0x38)

if (edx_1 u>= esi)
    if (edx_1 u> esi)
        return 1
    
    int32_t edx_2 = *(eax_2 + 0x3c)
    int32_t esi_1 = *(ecx_1 + 0x3c)
    
    if (edx_2 u>= esi_1)
        if (edx_2 u> esi_1)
            return 1
        
        int32_t edx_3 = *(eax_2 + 4)
        int32_t esi_2 = *(ecx_1 + 4)
        
        if (edx_3 u>= esi_2)
            if (edx_3 u> esi_2)
                return 1
            
            int32_t edx_4 = *(eax_2 + 0xc)
            int32_t esi_3 = *(ecx_1 + 0xc)
            
            if (edx_4 u>= esi_3)
                if (edx_4 u> esi_3)
                    return 1
                
                int32_t edx_5 = *(eax_2 + 8)
                int32_t esi_4 = *(ecx_1 + 8)
                
                if (edx_5 u>= esi_4)
                    if (edx_5 u> esi_4)
                        return 1
                    
                    int32_t edx_6 = *(eax_2 + 0x10)
                    int32_t esi_5 = *(ecx_1 + 0x10)
                    
                    if (edx_6 u>= esi_5)
                        if (edx_6 u> esi_5)
                            return 1
                        
                        int32_t edx_7 = *(eax_2 + 0x14)
                        int32_t esi_6 = *(ecx_1 + 0x14)
                        
                        if (edx_7 u>= esi_6)
                            if (edx_7 u> esi_6)
                                return 1
                            
                            int32_t eax_4 = *(eax_2 + 0x18)
                            int32_t ecx_2 = *(ecx_1 + 0x18)
                            
                            if (eax_4 s>= ecx_2)
                                int32_t result
                                result.b = eax_4 s> ecx_2
                                return result

return 0xffffffff
