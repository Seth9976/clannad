// 函数: sub_65cd80
// 地址: 0x65cd80
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = arg2
int16_t* edi = arg1
int32_t result_1 = result
int16_t* var_10 = edi

if (edi != result)
    int64_t* esi_1 = &edi[7]
    
    if (esi_1 != result)
        do
            int32_t result_3 = esi_1[1].d
            int64_t xmm0_1 = *esi_1
            int32_t result_2 = result_3
            int64_t* ebx_1 = esi_1
            int32_t result_4 = result_3
            result_3.w = *(esi_1 + 0xc)
            int64_t var_2c = xmm0_1
            int16_t var_6_1 = result_3.w
            int16_t var_20_1 = result_3.w
            
            if (sub_5cd6f0(&var_2c, edi) == 0)
                int16_t* edx
                edx.w = result_4:2.w
                int64_t* ecx_2 = esi_1
                edi.w = var_6_1
                
                while (true)
                    int16_t eax_2 = *(ecx_2 - 0xe)
                    ecx_2 -= 0xe
                    int16_t temp0_1 = var_2c.w
                    
                    if (temp0_1 u>= eax_2)
                        if (temp0_1 u> eax_2)
                            break
                        
                        int16_t eax_3 = *(ecx_2 + 2)
                        int16_t temp1_1 = var_2c:2.w
                        
                        if (temp1_1 u>= eax_3)
                            if (temp1_1 u> eax_3)
                                break
                            
                            int16_t eax_4 = *(ecx_2 + 4)
                            int16_t temp2_1 = var_2c:4.w
                            
                            if (temp2_1 u>= eax_4)
                                if (temp2_1 u> eax_4)
                                    break
                                
                                int16_t eax_5 = *(ecx_2 + 6)
                                int16_t temp3_1 = var_2c:6.w
                                
                                if (temp3_1 u>= eax_5)
                                    if (temp3_1 u> eax_5)
                                        break
                                    
                                    int16_t eax_6 = ecx_2[1].w
                                    int16_t temp4_1 = result_4.w
                                    
                                    if (temp4_1 u>= eax_6)
                                        if (temp4_1 u> eax_6)
                                            break
                                        
                                        int16_t eax_7 = *(ecx_2 + 0xa)
                                        
                                        if (edx.w u>= eax_7)
                                            if (edx.w u> eax_7)
                                                break
                                            
                                            if (edi.w u>= *(ecx_2 + 0xc))
                                                break
                    
                    *ebx_1 = *ecx_2
                    ebx_1[1].d = ecx_2[1].d
                    int32_t eax_8
                    eax_8.w = *(ecx_2 + 0xc)
                    *(ebx_1 + 0xc) = eax_8.w
                    ebx_1 = ecx_2
                
                result = result_2
                ecx_2.w = var_6_1
                edi = var_10
                *ebx_1 = xmm0_1
                ebx_1[1].d = result
                *(ebx_1 + 0xc) = ecx_2.w
            else
                int64_t* eax_1 = esi_1
                
                if (edi != esi_1)
                    do
                        int64_t xmm0_2 = *(eax_1 - 0xe)
                        eax_1 -= 0xe
                        *(eax_1 + 0xe) = xmm0_2
                        *(eax_1 + 0x16) = eax_1[1].d
                        int32_t ecx_1
                        ecx_1.w = *(eax_1 + 0xc)
                        *(eax_1 + 0x1a) = ecx_1.w
                    while (eax_1 != edi)
                
                *edi = xmm0_1
                *(edi + 8) = result_2
                result.w = var_6_1
                edi[6] = result.w
            
            esi_1 += 0xe
        while (esi_1 != result_1)

return result
