// 函数: sub_426c20
// 地址: 0x426c20
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* eax = arg3
int32_t result = 0
int32_t* var_c = eax

if (arg2 s> 0)
    while (*eax == 0)
        if (eax[1] == 0 && eax[2] == 0 && eax[3] == 0)
            result += 1
            eax = &eax[6]
            
            if (result s>= arg2)
                break
            
            continue
        
        if (*eax != 0)
            break
        
        if (eax[1] == 0)
            int32_t ebx_1 = eax[2]
            
            if (ebx_1 != 0)
                int32_t edi_1 = eax[3]
                int32_t var_8_1 = edi_1
                
                if (edi_1 != 0)
                    int32_t ecx = result + 1
                    void* eax_2 = &eax[6]
                    
                    while (ecx s< arg2)
                        int32_t edi_2 = *eax_2
                        
                        if (edi_2 != 0)
                            return 0xffffffff
                        
                        if (*(eax_2 + 4) != edi_2 || *(eax_2 + 8) != edi_2
                                || *(eax_2 + 0xc) != edi_2)
                            if (edi_2 != 0)
                                return 0xffffffff
                            
                            if (*(eax_2 + 4) != edi_2)
                                return 0xffffffff
                            
                            if (ebx_1 != *(eax_2 + 8))
                                return 0xffffffff
                            
                            edi_1 = var_8_1
                            
                            if (edi_1 != *(eax_2 + 0xc))
                                return 0xffffffff
                        else
                            edi_1 = var_8_1
                        
                        ecx += 1
                        eax_2 += 0x18
                    
                    int32_t ecx_1 = 0
                    void* eax_4 = &var_c[2]
                    int32_t i
                    
                    do
                        if (*(eax_4 - 8) != 0 || *(eax_4 - 4) != 0 || *eax_4 != 0
                                || *(eax_4 + 4) != 0)
                            ecx_1 += 1
                        
                        eax_4 += 0x18
                        i = arg2
                        arg2 -= 1
                    while (i != 1)
                    int32_t edi_3 = divs.dp.d(sx.q(arg4), ebx_1 + 1)
                    
                    if (edi_3 == 0)
                        edi_3 = 1
                    
                    int32_t eax_10
                    int32_t edx_2
                    edx_2:eax_10 = sx.q(ecx_1)
                    int32_t temp0_1 = divs.dp.d(edx_2:eax_10, edi_3)
                    int32_t temp1_1 = mods.dp.d(edx_2:eax_10, edi_3)
                    
                    if (temp0_1 == 0)
                        *arg5 = temp1_1 * (ebx_1 + 1)
                        *arg6 = edi_1 + 1
                        return result
                    
                    *arg5 = edi_3 * (ebx_1 + 1)
                    
                    if (temp1_1 != 0)
                        *arg6 = (temp0_1 + 1) * (edi_1 + 1)
                        return result
                    
                    *arg6 = temp0_1 * (edi_1 + 1)
                    return result
        
        break

return 0xffffffff
