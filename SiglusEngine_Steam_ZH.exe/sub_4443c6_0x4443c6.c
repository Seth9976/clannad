// 函数: sub_4443c6
// 地址: 0x4443c6
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_c = 1
void* eax = sub_4441fb(arg1, arg2)

if (eax != 0)
    arg2 = nullptr
    
    if (*(eax + 0x34) u> 0)
        int32_t edi
        int32_t var_c_1 = edi
        int32_t* edi_2 = *(eax + 0x38) + 0x28
        
        while (true)
            int32_t* ecx_2 = *(arg1 + 0x20) + *edi_2
            void* ecx_3
            
            if (*ecx_2 != 0)
                ecx_3 = &ecx_2[1]
            
            bool cond:0_1
            
            if (*ecx_2 == 0 || ecx_2 == 0xfffffffc)
                cond:0_1 = arg3 == 0
            label_44443e:
                
                if (cond:0_1)
                    break
            else
                char* esi_1 = arg3
                
                if (esi_1 != 0)
                    int32_t ecx_6
                    
                    while (true)
                        int32_t eax_2
                        eax_2.b = *ecx_3
                        char temp2_1 = *esi_1
                        bool c_1 = eax_2.b u< temp2_1
                        
                        if (eax_2.b == temp2_1)
                            if (eax_2.b == 0)
                                ecx_6 = 0
                                break
                            
                            eax_2.b = *(ecx_3 + 1)
                            char temp5_1 = esi_1[1]
                            c_1 = eax_2.b u< temp5_1
                            
                            if (eax_2.b == temp5_1)
                                ecx_3 += 2
                                esi_1 = &esi_1[2]
                                
                                if (eax_2.b != 0)
                                    continue
                                
                                ecx_6 = 0
                                break
                        
                        bool c_2 = unimplemented  {sbb ecx, ecx}
                        ecx_6 = sbb.d(sbb.d(ecx_3, ecx_3, c_1), 0xffffffff, c_2)
                        break
                    
                    cond:0_1 = ecx_6 == 0
                    goto label_44443e
            arg2 = &arg2[1]
            edi_2 = &edi_2[0xe]
            
            if (arg2 u>= *(eax + 0x34))
                break
    
    if (*(eax + 0x34) != arg2)
        return not.d(arg2 * 0x38 + *(eax + 0x38))

return 0
