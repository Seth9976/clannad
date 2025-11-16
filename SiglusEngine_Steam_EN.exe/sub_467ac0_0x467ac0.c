// 函数: sub_467ac0
// 地址: 0x467ac0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int32_t i = 0
void* esi = &data_72d6b0
void* var_80 = &data_72d6b0
int32_t i_1 = 0

if (data_7031bc s> 0)
    do
        int32_t j = 0
        int32_t j_1 = 0
        
        do
            void* ebx_1 = *(esi + 0xc)
            
            if (ebx_1 != 0)
                void* ecx_1 = esi + 0x10
                char var_2c[0x24]
                char (* edx_1)[0x24] = &var_2c
                
                if (ecx_1 != 0)
                    while (*ecx_1 != 0)
                        i.b = *ecx_1
                        
                        if (i.b u< 0x80)
                        label_467b32:
                            *edx_1 = i.b
                            edx_1 = &(*edx_1)[1]
                            ecx_1 += 1
                        else
                            if (i.b u< 0xa0)
                                if (i.b u>= 0xfe)
                                    goto label_467b32
                            else if (i.b u<= 0xdf || i.b u>= 0xfe)
                                goto label_467b32
                            
                            *edx_1 = i.b
                            i.b = *(ecx_1 + 1)
                            (*edx_1)[1] = i.b
                            edx_1 = &(*edx_1)[2]
                            ecx_1 += 2
                    
                    *edx_1 = 0
                
                void* ecx_2 = esi + 0x34
                void var_50
                void* edx_2 = &var_50
                
                if (esi != 0xffffffcc)
                    while (*ecx_2 != 0)
                        void* eax_2
                        eax_2.b = *ecx_2
                        
                        if (eax_2.b u< 0x80)
                        label_467b72:
                            *edx_2 = eax_2.b
                            edx_2 += 1
                            ecx_2 += 1
                        else
                            if (eax_2.b u< 0xa0)
                                if (eax_2.b u>= 0xfe)
                                    goto label_467b72
                            else if (eax_2.b u<= 0xdf || eax_2.b u>= 0xfe)
                                goto label_467b72
                            
                            *edx_2 = eax_2.b
                            eax_2.b = *(ecx_2 + 1)
                            *(edx_2 + 1) = eax_2.b
                            edx_2 += 2
                            ecx_2 += 2
                    
                    *edx_2 = 0
                
                void* eax_3 = esi + 0x58
                char var_74[0x24]
                void* edx_3 = &var_74
                
                if (eax_3 != 0)
                    while (*eax_3 != 0)
                        ecx_2.b = *eax_3
                        
                        if (ecx_2.b u< 0x80)
                        label_467bb6:
                            *edx_3 = ecx_2.b
                            edx_3 += 1
                            eax_3 += 1
                        else
                            if (ecx_2.b u< 0xa0)
                                if (ecx_2.b u>= 0xfe)
                                    goto label_467bb6
                            else if (ecx_2.b u<= 0xdf || ecx_2.b u>= 0xfe)
                                goto label_467bb6
                            
                            *edx_3 = ecx_2.b
                            ecx_2.b = *(eax_3 + 1)
                            *(edx_3 + 1) = ecx_2.b
                            edx_3 += 2
                            eax_3 += 2
                    
                    *edx_3 = 0
                
                if (ebx_1 - 1 u> 8)
                    i = i_1
                else
                    switch (ebx_1)
                        case 1, 2, 5, 6, 7
                            void* var_90_1 = ecx_2
                            sub_464a10(&var_2c, j, i_1, *(esi + 8), &var_2c, *(esi + 0x7c), 
                                &var_50, &var_74, 1)
                            i = i_1
                        case 3, 4
                            i = i_1
                            int32_t ebx_2 = *(esi + 8)
                            
                            if (i s>= 0 && i s< data_7031bc)
                                int32_t eax_6 = j + (i << 1)
                                sub_463320(eax_6 * 0x650 + &data_72d6b0, 
                                    eax_6 * 0x7a0 + &data_98bf04)
                                int32_t eax_8 = *(eax_6 * 0x7a0 + 0x98c284) + 1
                                *(eax_6 * 0x650 + 0x72d6b8) = ebx_2
                                *(eax_6 * 0x650 + &data_72d6bc) = ebx_2
                                esi = var_80
                                *(eax_6 * 0x7a0 + &data_98c1f8) = eax_8
                                j = j_1
                                i = i_1
                        case 8
                            sub_463970(ebx_1 - 1, j, i_1, 1)
                            i = i_1
                        case 9
                            void* var_90_2 = ecx_2
                            sub_464d10(ebx_1 - 1, j, i_1, *(esi + 8), *(esi + 0x80), 1)
                            i = i_1
            
            j += 1
            esi += 0x650
            var_80 = esi
            j_1 = j
        while (j s< 2)
        
        i += 1
        i_1 = i
    while (i s< data_7031bc)

sub_5f02dd(eax_1 ^ &__saved_ebp)
return i
