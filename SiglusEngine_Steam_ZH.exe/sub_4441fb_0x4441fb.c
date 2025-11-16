// 函数: sub_4441fb
// 地址: 0x4441fb
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
char* eax = arg2

if (zx.d(eax.w) != eax)
    if (eax s<= 0)
        int32_t eax_3 = not.d(eax)
        
        if (*(eax_3 + 0x10) == 0)
            uint32_t eax_4 = zx.d(*(eax_3 + 0x14))
            
            if (eax_4 u< *(arg1 + 0xa0))
                return eax_4 * 0xb4 + *(arg1 + 0xa4)
    else
        uint32_t var_8_1 = 0
        
        if (*(arg1 + 0xa0) u> 0)
            int32_t edi
            int32_t var_c_1 = edi
            int32_t ebx
            int32_t var_10_1 = ebx
            int32_t* edi_2 = *(arg1 + 0xa4) + 0x28
            
            while (true)
                int32_t* edx_3 = *(arg1 + 0x20) + *edi_2
                void* edx_4
                
                if (*edx_3 != 0)
                    edx_4 = &edx_3[1]
                
                if (*edx_3 == 0 || edx_3 == 0xfffffffc)
                    if (eax == 0)
                        break
                else if (eax != 0)
                    char* esi_2 = eax
                    int32_t edx_7
                    
                    while (true)
                        ebx.b = *edx_4
                        eax.b = ebx.b
                        char temp2_1 = *esi_2
                        bool c_1 = ebx.b u< temp2_1
                        
                        if (ebx.b == temp2_1)
                            if (eax.b == 0)
                                edx_7 = 0
                                break
                            
                            ebx.b = *(edx_4 + 1)
                            eax.b = ebx.b
                            char temp5_1 = esi_2[1]
                            c_1 = ebx.b u< temp5_1
                            
                            if (ebx.b == temp5_1)
                                edx_4 += 2
                                esi_2 = &esi_2[2]
                                
                                if (eax.b != 0)
                                    continue
                                
                                edx_7 = 0
                                break
                        
                        bool c_2 = unimplemented  {sbb edx, edx}
                        edx_7 = sbb.d(sbb.d(edx_4, edx_4, c_1), 0xffffffff, c_2)
                        break
                    
                    if (edx_7 == 0)
                        break
                    
                    eax = arg2
                
                var_8_1 += 1
                edi_2 = &edi_2[0x2d]
                
                if (var_8_1 u>= *(arg1 + 0xa0))
                    break
        
        if (*(arg1 + 0xa0) != var_8_1)
            return var_8_1 * 0xb4 + *(arg1 + 0xa4)

return 0
