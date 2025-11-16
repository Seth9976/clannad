// 函数: sub_432452
// 地址: 0x432452
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = sub_431413(arg1, arg2)

if (result != 0)
    int32_t edi
    int32_t var_c_1 = edi
    void* edi_1 = *(result + 0x2c)
    
    while (true)
        if (edi_1 == 0)
            result = nullptr
            break
        
        bool cond:0_1
        
        if (arg3 != 0)
            char* esi_1 = *(edi_1 + 0x20)
            
            if (esi_1 != 0)
                char* ecx_1 = arg3
                
                while (true)
                    char edx_1 = *ecx_1
                    result.b = edx_1
                    char temp1_1 = *esi_1
                    bool c_1 = edx_1 u< temp1_1
                    
                    if (edx_1 == temp1_1)
                        if (result.b == 0)
                            result = nullptr
                            break
                        
                        edx_1 = ecx_1[1]
                        result.b = edx_1
                        char temp4_1 = esi_1[1]
                        c_1 = edx_1 u< temp4_1
                        
                        if (edx_1 == temp4_1)
                            ecx_1 = &ecx_1[2]
                            esi_1 = &esi_1[2]
                            
                            if (result.b != 0)
                                continue
                            
                            result = nullptr
                            break
                    
                    bool c_2 = unimplemented  {sbb eax, eax}
                    result = sbb.d(sbb.d(result, result, c_1), 0xffffffff, c_2)
                    break
                
                cond:0_1 = result == 0
                goto label_4324ac
        else
            cond:0_1 = *(edi_1 + 0x20) == 0
        label_4324ac:
            
            if (cond:0_1)
                result = not.d(edi_1)
                break
        edi_1 = *(edi_1 + 0x2c)

return result
