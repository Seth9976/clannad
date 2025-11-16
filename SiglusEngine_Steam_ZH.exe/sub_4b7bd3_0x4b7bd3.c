// 函数: sub_4b7bd3
// 地址: 0x4b7bd3
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_2c = edi
int32_t var_8 = 0

if (*(arg1 + 0xc) u> 0)
    while (true)
        int32_t* esi_1 = *(*(arg1 + 0x18) + (var_8 << 2))
        
        if (esi_1 != 0 && esi_1[9] != 1 && *esi_1 != 0)
            int32_t var_1c_1 = 0
            int32_t var_10_1 = 0
            
            if (esi_1[3] u> 0)
                while (true)
                    int32_t var_c_1 = 0
                    int32_t var_34_2
                    char* var_30_2
                    
                    if (arg3 u<= 0)
                    label_4b7cc8:
                        var_10_1 += 1
                        
                        if (var_10_1 u< esi_1[3])
                            continue
                        else
                            if (var_1c_1 == 0)
                                break
                            
                            int32_t eax_14 = *esi_1
                            int32_t ecx_7 = eax_14 & 0xfff00000
                            int32_t eax_15
                            int32_t ecx_8
                            
                            if (ecx_7 == 0x60000000 || ecx_7 == 0x60500000 || ecx_7 == 0x60a00000
                                    || ecx_7 == 0x60f00000 || ecx_7 == 0x72e00000
                                    || ecx_7 == 0x60700000 || ecx_7 == 0x72c00000
                                    || ecx_7 == 0x72d00000 || ecx_7 == 0x11000000)
                                eax_15 = eax_14 & 0xfffff
                                ecx_8 = eax_15 * 2
                            
                            if ((ecx_7 != 0x60000000 && ecx_7 != 0x60500000 && ecx_7 != 0x60a00000
                                && ecx_7 != 0x60f00000 && ecx_7 != 0x72e00000
                                && ecx_7 != 0x60700000 && ecx_7 != 0x72c00000
                                && ecx_7 != 0x72d00000 && ecx_7 != 0x11000000) || eax_15 u>= ecx_8)
                            label_4b7d6d:
                                *(arg4 + (*arg5 << 2)) = esi_1
                                *(*(*(arg1 + 0x18) + (var_8 << 2)) + 0x24) = 1
                                *arg5 += 1
                                break
                            
                            int32_t* ecx_10 = esi_1[2] + (eax_15 << 2)
                            
                            while (*(*(*(arg1 + 0x14) + (*ecx_10 << 2)) + 4) != *(arg1 + 0x88))
                                eax_15 += 1
                                ecx_10 = &ecx_10[1]
                                
                                if (eax_15 u>= ecx_8)
                                    goto label_4b7d6d
                            
                            var_30_2 = "cannot perform double dependent texture read in ps_1_x"
                            var_34_2 = 0x11b6
                    else
                        while (true)
                            int32_t edx_1 = *(arg2 + (var_c_1 << 2))
                            void* eax_4 = *(*(arg1 + 0x14) + (edx_1 << 2))
                            
                            if (*(eax_4 + 4) == *(arg1 + 0x80) && *(eax_4 + 0x6c) != 3)
                                var_30_2 = "cannot perform dependent texture read which in any way "
                                "is based on color inputs"
                                var_34_2 = 0x11a1
                                break
                            
                            int32_t ecx_4 = *(esi_1[4] + (var_10_1 << 2))
                            
                            if (ecx_4 == edx_1 || ecx_4 == *(eax_4 + 0x38))
                                int32_t edi_3 = *esi_1 & 0xfffff
                                uint32_t temp0_1 = divu.dp.d(0:(esi_1[1]), edi_3)
                                int32_t var_18_1 = 0
                                
                                if (temp0_1 u> 0)
                                    int32_t var_14_1 = 0
                                    
                                    do
                                        int32_t result =
                                            sub_4b7bd3(esi_1[2] + var_14_1, edi_3, arg4, arg5)
                                        
                                        if (result s< 0)
                                            return result
                                        
                                        var_18_1 += 1
                                        var_14_1 += edi_3 << 2
                                        var_1c_1 = 1
                                    while (var_18_1 u< temp0_1)
                            
                            var_c_1 += 1
                            
                            if (var_c_1 u>= arg3)
                                goto label_4b7cc8
                    
                    sub_4a4100(arg1, esi_1[0xf], var_34_2, var_30_2)
                    return 0x80004005
        
        var_8 += 1
        
        if (var_8 u>= *(arg1 + 0xc))
            break

return 0
