// 函数: sub_4538a9
// 地址: 0x4538a9
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (zx.d(arg2.w) != arg2)
    if (arg2 s> 0)
        int32_t i = 0
        int32_t edi
        int32_t var_1c_1 = edi
        
        if (*(arg1 + 0x98) u> 0)
            char* eax
            eax.b = *arg2
            void* edi_1 = *(arg1 + 0x9c)
            
            do
                int32_t edx_1 = *(*(*(arg1 + 0xb0) + (*(edi_1 + 0x14) << 2)) + 0x40)
                void* esi_1 = *(edi_1 + 4)
                int32_t ecx_4
                
                if (edx_1 != 0)
                    ecx_4 = *(*(arg1 + 0x38) + 0x10)
                else
                    ecx_4 = *(arg1 + 0x20)
                
                int32_t* eax_5 = *(esi_1 + 8)
                void* eax_6
                
                if (*(eax_5 + ecx_4) != 0)
                    if (edx_1 != 0)
                        ecx_4 = *(*(arg1 + 0x38) + 0x10)
                    else
                        ecx_4 = *(arg1 + 0x20)
                    
                    eax_6 = eax_5 + ecx_4 + 4
                else
                    eax_6 = nullptr
                
                char* esi_2 = arg2
                ecx_4.b = eax.b
                
                while (ecx_4.b == *eax_6)
                    if (ecx_4.b == 0)
                        break
                    
                    esi_2 = &esi_2[1]
                    ecx_4.b = *esi_2
                    eax_6 += 1
                
                ecx_4.b = *esi_2
                eax_6.b = *eax_6
                
                if (ecx_4.b == eax_6.b)
                    return edi_1
                
                if (eax_6.b == 0)
                    int32_t var_28_2
                    void* var_24_2
                    int32_t* var_20_3
                    int32_t eax_9
                    
                    if (ecx_4.b == 0x2e)
                        var_20_3 = arg3
                        var_24_2 = &esi_2[1]
                        var_28_2 = not.d(edi_1)
                    label_453a26:
                        eax_9 = sub_4524f7(arg1, var_28_2, var_24_2, var_20_3)
                    label_453a2b:
                        
                        if (eax_9 == 0)
                            break
                        
                        return not.d(eax_9)
                    
                    if (ecx_4.b == 0x40)
                        *(arg1 + 0x118) ^= ((arg4 * 2) ^ *(arg1 + 0x118)) & 2
                        eax_9 = sub_44d685(arg1, not.d(edi_1), &esi_2[1], arg3)
                        *(arg1 + 0x118) &= 0xfffffffd
                        goto label_453a2b
                    
                    if (ecx_4.b == 0x5b)
                        void* esi_3 = &esi_2[1]
                        eax_6.b = *esi_3
                        
                        if (eax_6.b s< 0x30)
                            break
                        
                        if (eax_6.b s> 0x39)
                            break
                        
                        void* var_20_1 = esi_3
                        int32_t eax_8 = sub_75efed()
                        
                        if (eax_8 u>= *(esi_1 + 0x10))
                            break
                        
                        while (true)
                            void* ecx_6
                            ecx_6.b = *esi_3
                            
                            if (ecx_6.b s< 0x30)
                                break
                            
                            if (ecx_6.b s> 0x39)
                                break
                            
                            esi_3 += 1
                        
                        if (*esi_3 != 0x5d)
                            break
                        
                        eax_9 = sub_443cff(arg1, not.d(edi_1), eax_8, arg3)
                        
                        if (eax_9 == 0)
                            break
                        
                        char ecx_8 = *(esi_3 + 1)
                        
                        if (ecx_8 == 0)
                            return not.d(eax_9)
                        
                        if (ecx_8 != 0x2e)
                            break
                        
                        var_20_3 = arg3
                        var_24_2 = esi_3 + 2
                        var_28_2 = eax_9
                        goto label_453a26
                
                i += 1
                edi_1 += 0x50
            while (i u< *(arg1 + 0x98))
        
        return 0
    
    int32_t eax_1 = not.d(arg2)
    
    if (*(eax_1 + 0x10) == 3 && *(eax_1 + 0x14) u< *(arg1 + 0xa8))
        return eax_1

return 0
