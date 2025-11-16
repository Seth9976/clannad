// 函数: sub_433ad7
// 地址: 0x433ad7
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result_1 = arg2
void* ebx = arg1
int32_t edi
int32_t var_1c = edi
void* var_8 = ebx
int32_t eax_19

while (true)
    if (result_1 != 0)
        int32_t edi_1 = sub_433f9c(ebx, result_1, arg4 + 1)
        int32_t esi = 0
        arg2 = edi_1
        
        if (edi_1 != 0)
            if (arg3 == 0)
                eax_19 = edi_1
                break
            
            void* eax_7 = *(*(edi_1 + 4) + 0x40) + *(edi_1 + 0x18) + *(ebx + 0x344)
            
            if (*(eax_7 + 4) == 5 && (*(edi_1 + 0x10) != 0xffffffff || *(eax_7 + 0x10) == 0))
                int32_t eax_8 = *(eax_7 + 0x14)
                int32_t eax_9
                
                if (*(edi_1 + 8) == 0)
                    int32_t var_20_2 = eax_8
                    eax_9 = sub_4339f8(ebx, edi_1)
                
                if (*(edi_1 + 8) != 0 || eax_9 s>= 0)
                    int32_t var_c_1 = 0
                    void* ebx_4
                    
                    while (true)
                        if (esi u>= eax_8)
                            return 0
                        
                        void* eax_11 = *(edi_1 + 8) + var_c_1
                        int32_t ecx_3 = *(ebx + 0x344)
                        void* edi_4 = *(*(eax_11 + 4) + 0x40) + *(eax_11 + 0x18) + ecx_3
                        int32_t* eax_12 = *(edi_4 + 8)
                        void* ecx_4
                        
                        if (*(eax_12 + ecx_3) != 0)
                            ecx_4 = eax_12 + *(ebx + 0x344) + 4
                        else
                            ecx_4 = nullptr
                        
                        void* ebx_1 = arg3
                        void* eax_13
                        eax_13.b = *ebx_1
                        
                        while (eax_13.b == *ecx_4)
                            if (eax_13.b == 0)
                                break
                            
                            ebx_1 += 1
                            eax_13.b = *ebx_1
                            ecx_4 += 1
                        
                        eax_13.b = *ebx_1
                        ecx_4.b = *ecx_4
                        
                        if (eax_13.b == ecx_4.b)
                            return not.d((esi << 5) + *(arg2 + 8))
                        
                        if (ecx_4.b == 0)
                            if (eax_13.b == 0x2e)
                                ebx_4 = ebx_1 + 1
                                result_1 = not.d((esi << 5) + *(arg2 + 8))
                                break
                            
                            if (eax_13.b == 0x40)
                                return sub_4322aa(var_8, not.d((esi << 5) + *(arg2 + 8)), 
                                    ebx_1 + 1, arg4)
                            
                            if (eax_13.b == 0x5b)
                                void* ebx_2 = ebx_1 + 1
                                eax_13.b = *ebx_2
                                
                                if (eax_13.b s< 0x30)
                                    return 0
                                
                                if (eax_13.b s> 0x39)
                                    return 0
                                
                                char var_20_3 = ebx_2.b
                                int32_t* eax_14 = sub_75efed()
                                
                                if (eax_14 u>= *(edi_4 + 0x10))
                                    return 0
                                
                                while (true)
                                    char ecx_6 = *ebx_2
                                    
                                    if (ecx_6 s< 0x30)
                                        break
                                    
                                    if (ecx_6 s> 0x39)
                                        break
                                    
                                    ebx_2 += 1
                                
                                if (*ebx_2 != 0x5d)
                                    return 0
                                
                                int32_t var_20_4 = arg4
                                int32_t result =
                                    sub_4320f6(var_8, not.d((esi << 5) + *(arg2 + 8)), eax_14)
                                
                                if (result == 0)
                                    return 0
                                
                                char ecx_8 = *(ebx_2 + 1)
                                
                                if (ecx_8 == 0)
                                    return result
                                
                                if (ecx_8 != 0x2e)
                                    return 0
                                
                                ebx_4 = ebx_2 + 2
                                result_1 = result
                                break
                        
                        ebx = var_8
                        edi_1 = arg2
                        esi += 1
                        var_c_1 += 0x20
                    
                    arg3 = ebx_4
                    ebx = var_8
                    continue
    else if (arg3 != result_1)
        eax_19 = sub_433f9c(ebx, arg3, arg4 + 1)
        
        if (eax_19 != 0)
            break
    
    return 0

return not.d(eax_19)
