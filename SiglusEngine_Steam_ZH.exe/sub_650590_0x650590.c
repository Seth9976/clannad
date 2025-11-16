// 函数: sub_650590
// 地址: 0x650590
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edx = *(arg1 + 8)
int32_t esi = *(arg2 + 8)
void* eax

if (edx s>= esi)
    if (edx s> esi)
        eax.b = 0
        return eax
    
    int32_t edx_1 = *(arg1 + 0xc)
    int32_t esi_1 = *(arg2 + 0xc)
    
    if (edx_1 s>= esi_1)
        if (edx_1 s> esi_1)
            eax.b = 0
            return eax
        
        int32_t edx_2 = *(arg1 + 0x10)
        int32_t esi_2 = *(arg2 + 0x10)
        
        if (edx_2 s>= esi_2)
            if (edx_2 s> esi_2)
                eax.b = 0
                return eax
            
            int32_t edx_3 = *(arg1 + 0x18)
            int32_t esi_3 = *(arg2 + 0x18)
            
            if (edx_3 s>= esi_3)
                if (edx_3 s> esi_3)
                    eax.b = 0
                    return eax
                
                int32_t edx_4 = *(arg1 + 0x1c)
                int32_t esi_4 = *(arg2 + 0x1c)
                
                if (edx_4 s>= esi_4)
                    if (edx_4 s> esi_4)
                        eax.b = 0
                        return eax
                    
                    int32_t edx_5 = *(arg1 + 0x20)
                    int32_t esi_5 = *(arg2 + 0x20)
                    
                    if (edx_5 s>= esi_5)
                        if (edx_5 s> esi_5)
                            eax.b = 0
                            return eax
                        
                        int32_t edx_6 = *(arg1 + 0x24)
                        int32_t esi_6 = *(arg2 + 0x24)
                        
                        if (edx_6 s>= esi_6)
                            if (edx_6 s> esi_6)
                                eax.b = 0
                                return eax
                            
                            void* ecx_1 = arg2 + 0x428
                            eax = arg1 + 0x428
                            void* esi_7 = ecx_1
                            void* edx_7 = eax
                            int32_t edi
                            int32_t var_c_1 = edi
                            int32_t edx_9
                            
                            while (true)
                                edi.w = *edx_7
                                int16_t temp1_1 = *esi_7
                                bool c_1 = edi.w u< temp1_1
                                
                                if (edi.w == temp1_1)
                                    if (edi.w == 0)
                                        edx_9 = 0
                                        break
                                    
                                    edi.w = *(edx_7 + 2)
                                    int16_t temp2_1 = *(esi_7 + 2)
                                    c_1 = edi.w u< temp2_1
                                    
                                    if (edi.w == temp2_1)
                                        edx_7 += 4
                                        esi_7 += 4
                                        
                                        if (edi.w != 0)
                                            continue
                                        
                                        edx_9 = 0
                                        break
                                
                                edx_9 = sbb.d(edx_7, edx_7, c_1) | 1
                                break
                            
                            if (edx_9 != 0xffffffff)
                                while (true)
                                    edx_9.w = *eax
                                    int16_t temp3_1 = *ecx_1
                                    bool c_2 = edx_9.w u< temp3_1
                                    
                                    if (edx_9.w == temp3_1)
                                        if (edx_9.w == 0)
                                            break
                                        
                                        edx_9.w = *(eax + 2)
                                        int16_t temp4_1 = *(ecx_1 + 2)
                                        c_2 = edx_9.w u< temp4_1
                                        
                                        if (edx_9.w == temp4_1)
                                            eax += 4
                                            ecx_1 += 4
                                            
                                            if (edx_9.w == 0)
                                                break
                                            
                                            continue
                                    
                                    int32_t eax_3
                                    eax_3.b = (sbb.d(eax, eax, c_2) | 1) != 1
                                    return eax_3
                                
                                int32_t eax_1
                                eax_1.b = true
                                return 1

eax.b = 1
return eax
