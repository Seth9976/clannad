// 函数: sub_4524f7
// 地址: 0x4524f7
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = arg2
void* esi = arg1
int32_t edi
int32_t var_1c = edi
void* var_8 = esi
int32_t eax_16

while (true)
    if (result != 0)
        int32_t edi_1 = 0
        int32_t eax = sub_4538a9(esi, result, arg4 + 1, 0)
        
        if (eax != 0)
            if (arg3 == 0)
                eax_16 = eax
                break
            
            void* eax_1 = *(eax + 4)
            
            if (*(eax_1 + 4) == 5 && (*(eax + 8) != 0xffffffff || *(eax_1 + 0x10) == 0))
                int32_t eax_2 = *(eax_1 + 0x14)
                int32_t eax_3
                
                if (*(eax + 0x20) == 0)
                    eax_3 = sub_449882(esi, eax, eax_2)
                
                if (*(eax + 0x20) != 0 || eax_3 s>= 0)
                    arg2 = 0
                    char* esi_2
                    
                    while (true)
                        if (edi_1 u>= eax_2)
                            return 0
                        
                        void* eax_5 = *(*(eax + 0x20) + arg2 + 4)
                        int32_t edx_2 = *(*(*(esi + 0xb0) + (*(eax + 0x14) << 2)) + 0x40)
                        int32_t ecx_7
                        
                        if (edx_2 != 0)
                            ecx_7 = *(*(esi + 0x38) + 0x10)
                        else
                            ecx_7 = *(esi + 0x20)
                        
                        int32_t* eax_6 = *(eax_5 + 8)
                        void* ecx_9
                        
                        if (*(eax_6 + ecx_7) != 0)
                            int32_t esi_1
                            
                            if (edx_2 != 0)
                                esi_1 = *(*(esi + 0x38) + 0x10)
                            else
                                esi_1 = *(esi + 0x20)
                            
                            ecx_9 = eax_6 + esi_1 + 4
                        else
                            ecx_9 = nullptr
                        
                        esi_2 = arg3
                        char* eax_7
                        eax_7.b = *esi_2
                        
                        while (eax_7.b == *ecx_9)
                            if (eax_7.b == 0)
                                break
                            
                            esi_2 = &esi_2[1]
                            eax_7.b = *esi_2
                            ecx_9 += 1
                        
                        eax_7.b = *esi_2
                        ecx_9.b = *ecx_9
                        
                        if (eax_7.b == ecx_9.b)
                            return not.d(*(eax + 0x20) + edi_1 * 0x28)
                        
                        if (ecx_9.b == 0)
                            if (eax_7.b == 0x2e)
                                result = not.d(*(eax + 0x20) + edi_1 * 0x28)
                                break
                            
                            if (eax_7.b == 0x40)
                                return sub_44d685(var_8, not.d(*(eax + 0x20) + edi_1 * 0x28), 
                                    &esi_2[1], arg4)
                            
                            if (eax_7.b == 0x5b)
                                void* esi_3 = &esi_2[1]
                                eax_7.b = *esi_3
                                
                                if (eax_7.b s< 0x30)
                                    return 0
                                
                                if (eax_7.b s> 0x39)
                                    return 0
                                
                                void* var_20_2 = esi_3
                                int32_t eax_8 = sub_75efed()
                                
                                if (eax_8 u>= *(eax_5 + 0x10))
                                    return 0
                                
                                while (true)
                                    void* ecx_11
                                    ecx_11.b = *esi_3
                                    
                                    if (ecx_11.b s< 0x30)
                                        break
                                    
                                    if (ecx_11.b s> 0x39)
                                        break
                                    
                                    esi_3 += 1
                                
                                if (*esi_3 != 0x5d)
                                    return 0
                                
                                esi_2 = esi_3 + 1
                                result = sub_443cff(var_8, not.d(*(eax + 0x20) + edi_1 * 0x28), 
                                    eax_8, arg4)
                                
                                if (result == 0)
                                    return 0
                                
                                char ecx_14 = *esi_2
                                
                                if (ecx_14 == 0)
                                    return result
                                
                                if (ecx_14 != 0x2e)
                                    return 0
                                
                                break
                        
                        esi = var_8
                        edi_1 += 1
                        arg2 += 0x28
                    
                    arg3 = &esi_2[1]
                    esi = var_8
                    continue
    else if (arg3 != result)
        eax_16 = sub_4538a9(esi, arg3, arg4 + 1, result)
        
        if (eax_16 != 0)
            break
    
    return 0

return not.d(eax_16)
