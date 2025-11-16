// 函数: sub_46dd09
// 地址: 0x46dd09
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result

if (arg3 == 2)
    result = arg4 * arg5
    
    if (result != 0)
        int32_t edi
        int32_t var_28_1 = edi
        int32_t var_c_1 = 0
        
        if (arg5 u> 0)
            void* eax_1 = *(arg1 + 8)
            int32_t* edi_1 = arg2
            
            do
                void* eax_4 = *(*(eax_1 + 0x14) + (*edi_1 << 2))
                int32_t esi_3 = *(eax_4 + 4)
                arg3 = nullptr
                
                if (arg4 u> 0)
                    int32_t* var_8_1 = edi_1
                    
                    do
                        void* edx_5 = *(*(*(arg1 + 8) + 0x14) + (*var_8_1 << 2))
                        
                        if (esi_3 != *(edx_5 + 4))
                            goto label_46de91
                        
                        bool cond:5_1
                        
                        if ((*(*(*(eax_1 + 0x10) + (esi_3 << 2)) + 4) & 0x40) == 0)
                            cond:5_1 = *(eax_4 + 0x48) != *(edx_5 + 0x48)
                        else
                            if ((arg3 u>> 2) + *(eax_4 + 0xc) != *(edx_5 + 0xc))
                                goto label_46de91
                            
                            cond:5_1 = (arg3 & 3) + *(eax_4 + 0x10) != *(edx_5 + 0x10)
                        
                        if (cond:5_1)
                            goto label_46de91
                        
                        arg3 += 1
                        var_8_1 = &var_8_1[arg5]
                    while (arg3 u< arg4)
                
                var_c_1 += 1
                edi_1 = &edi_1[1]
            while (var_c_1 u< arg5)
        
        int32_t var_c_2 = 0
        
        if (arg4 u<= 0)
        label_46de91:
            result = 1
        else
            void* eax_6 = *(arg1 + 8)
            int32_t* ebx_11 = arg2
            
            while (true)
                void* edx_9 = *(*(eax_6 + 0x14) + (*ebx_11 << 2))
                arg2 = nullptr
                int32_t edi_2 = *(edx_9 + 4)
                
                if (arg5 u> 0)
                    arg3 = ebx_11
                    
                    while (true)
                        void* esi_5 = *(*(*(arg1 + 8) + 0x14) + (*arg3 << 2))
                        
                        if (edi_2 == *(esi_5 + 4))
                            bool cond:6_1
                            
                            if ((*(*(*(eax_6 + 0x10) + (edi_2 << 2)) + 4) & 0x40) == 0)
                                cond:6_1 = *(edx_9 + 0x48) != *(esi_5 + 0x48)
                            label_46de67:
                                
                                if (not(cond:6_1))
                                    arg2 += 1
                                    arg3 = &arg3[1]
                                    
                                    if (arg2 u>= arg5)
                                        goto label_46de7b
                                    
                                    continue
                            else if ((arg2 u>> 2) + *(edx_9 + 0xc) == *(esi_5 + 0xc))
                                cond:6_1 = (arg2 & 3) + *(edx_9 + 0x10) != *(esi_5 + 0x10)
                                goto label_46de67
                        
                        result = 0
                        break
                    
                    break
                
            label_46de7b:
                var_c_2 += 1
                ebx_11 = &ebx_11[arg5]
                
                if (var_c_2 u>= arg4)
                    goto label_46de91
else
    result.b = arg4 == 1

return result
