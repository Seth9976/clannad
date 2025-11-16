// 函数: sub_4322aa
// 地址: 0x4322aa
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
void* esi = arg1
int32_t edi
int32_t var_14 = edi
void* var_8_1 = esi

if (arg3 != 0 && *arg3 != 0)
    int32_t eax_1 = sub_4312fc(arg1, arg2)
    void* eax_2
    void* edi_1
    
    if (eax_1 == 0)
        eax_2 = sub_431413(esi, arg2)
        
        if (eax_2 != 0)
            goto label_4322db
        
        void* eax_3 = sub_431494(arg2)
        
        if (eax_3 != 0)
            edi_1 = *(eax_3 + 0x28)
            goto label_4322ff
    else
        eax_2 = *(eax_1 + 4)
    label_4322db:
        edi_1 = *(eax_2 + 0x30)
    label_4322ff:
        
        if (edi_1 != 0)
            char* ecx_2 = *(esi + 0x344)
            arg2 = ecx_2
            
            while (true)
                void* ebx_3 = *(*(edi_1 + 4) + 0x40) + *(edi_1 + 0x18) + ecx_2
                int32_t* eax_5 = *(ebx_3 + 8)
                void* ecx_3
                
                if (*(eax_5 + ecx_2) != 0)
                    ecx_3 = eax_5 + *(esi + 0x344) + 4
                else
                    ecx_3 = nullptr
                
                char* esi_1 = arg3
                char* eax_6
                eax_6.b = *esi_1
                
                while (eax_6.b == *ecx_3)
                    if (eax_6.b == 0)
                        break
                    
                    esi_1 = &esi_1[1]
                    eax_6.b = *esi_1
                    ecx_3 += 1
                
                eax_6.b = *esi_1
                ecx_3.b = *ecx_3
                
                if (eax_6.b == ecx_3.b)
                    return not.d(edi_1)
                
                if (ecx_3.b == 0)
                    if (eax_6.b == 0x2e)
                        return sub_433ad7(var_8_1, not.d(edi_1), &esi_1[1], arg4)
                    
                    if (eax_6.b == 0x5b)
                        char* esi_2 = &esi_1[1]
                        eax_6.b = *esi_2
                        
                        if (eax_6.b s< 0x30)
                            break
                        
                        if (eax_6.b s> 0x39)
                            break
                        
                        char var_18_4 = esi_2.b
                        int32_t* eax_8 = sub_75efed()
                        
                        if (eax_8 u>= *(ebx_3 + 0x10))
                            break
                        
                        while (true)
                            char ecx_5 = *esi_2
                            
                            if (ecx_5 s< 0x30)
                                break
                            
                            if (ecx_5 s> 0x39)
                                break
                            
                            esi_2 = &esi_2[1]
                        
                        if (*esi_2 != 0x5d)
                            break
                        
                        int32_t var_18_5 = arg4
                        int32_t result = sub_4320f6(var_8_1, not.d(edi_1), eax_8)
                        
                        if (result == 0)
                            break
                        
                        char ecx_7 = esi_2[1]
                        
                        if (ecx_7 == 0)
                            return result
                        
                        if (ecx_7 != 0x2e)
                            break
                        
                        return sub_433ad7(var_8_1, result, &esi_2[2], arg4)
                
                edi_1 = *(edi_1 + 0x34)
                
                if (edi_1 == 0)
                    break
                
                esi = var_8_1
                ecx_2 = arg2

return 0
