// 函数: sub_4442f3
// 地址: 0x4442f3
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_8_1 = 0

if (*(arg1 + 0xa0) u> 0)
    int32_t edi
    int32_t var_10_1 = edi
    int32_t* edi_2 = *(arg1 + 0xa4) + 0x28
    
    while (true)
        int32_t* ecx_2 = *edi_2 + *(arg1 + 0x20)
        void* ecx_3
        
        if (*ecx_2 != 0)
            ecx_3 = &ecx_2[1]
        
        bool cond:0_1
        
        if (*ecx_2 == 0 || ecx_2 == 0xfffffffc)
            cond:0_1 = arg2 == 0
        label_44435c:
            
            if (cond:0_1)
                break
        else
            char* esi_1 = arg2
            
            if (esi_1 != 0)
                int32_t ecx_6
                
                while (true)
                    int32_t eax_1
                    eax_1.b = *ecx_3
                    char temp2_1 = *esi_1
                    bool c_1 = eax_1.b u< temp2_1
                    
                    if (eax_1.b == temp2_1)
                        if (eax_1.b == 0)
                            ecx_6 = 0
                            break
                        
                        eax_1.b = *(ecx_3 + 1)
                        char temp5_1 = esi_1[1]
                        c_1 = eax_1.b u< temp5_1
                        
                        if (eax_1.b == temp5_1)
                            ecx_3 += 2
                            esi_1 = &esi_1[2]
                            
                            if (eax_1.b != 0)
                                continue
                            
                            ecx_6 = 0
                            break
                    
                    bool c_2 = unimplemented  {sbb ecx, ecx}
                    ecx_6 = sbb.d(sbb.d(ecx_3, ecx_3, c_1), 0xffffffff, c_2)
                    break
                
                cond:0_1 = ecx_6 == 0
                goto label_44435c
        var_8_1 += 1
        edi_2 = &edi_2[0x2d]
        
        if (var_8_1 u>= *(arg1 + 0xa0))
            break

if (*(arg1 + 0xa0) != var_8_1)
    return not.d(var_8_1 * 0xb4 + *(arg1 + 0xa4))

return 0
