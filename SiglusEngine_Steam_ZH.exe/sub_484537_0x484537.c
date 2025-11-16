// 函数: sub_484537
// 地址: 0x484537
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t ebx = 0
void* esi = arg1
*arg4 = 0
int32_t* eax_1 = *(esi + 0x2c)
int32_t edi
int32_t var_14 = edi
void* var_8_1 = esi

if (eax_1 != 0 && *eax_1 u> 0)
    while (true)
        int32_t* edi_1 = (*(*(*(eax_1[3] + (ebx << 2)) + 4) + 0x1c))(arg3)
        
        if (edi_1 != 0)
            char* esi_1 = edi_1[2]
            
            if (esi_1 != 0)
                char* ecx_1 = arg2
                int32_t eax_7
                
                while (true)
                    char edx_1 = *ecx_1
                    int32_t* eax_5
                    eax_5.b = edx_1
                    char temp1_1 = *esi_1
                    bool c_1 = edx_1 u< temp1_1
                    
                    if (edx_1 == temp1_1)
                        if (eax_5.b == 0)
                            eax_7 = 0
                            break
                        
                        edx_1 = ecx_1[1]
                        eax_5.b = edx_1
                        char temp4_1 = esi_1[1]
                        c_1 = edx_1 u< temp4_1
                        
                        if (edx_1 == temp4_1)
                            ecx_1 = &ecx_1[2]
                            esi_1 = &esi_1[2]
                            
                            if (eax_5.b != 0)
                                continue
                            
                            eax_7 = 0
                            break
                    
                    bool c_2 = unimplemented  {sbb eax, eax}
                    eax_7 = sbb.d(sbb.d(eax_5, eax_5, c_1), 0xffffffff, c_2)
                    break
                
                if (eax_7 == 0)
                    *arg4 = edi_1
                    (*(*edi_1 + 4))(edi_1)
                    return 0
            
            esi = var_8_1
        
        eax_1 = *(esi + 0x2c)
        ebx += 1
        
        if (ebx u>= *eax_1)
            break

return 0x88760387
