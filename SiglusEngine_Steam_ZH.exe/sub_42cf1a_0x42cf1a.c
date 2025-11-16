// 函数: sub_42cf1a
// 地址: 0x42cf1a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (sub_42ce81(arg1, arg2) != 0)
    return 0

int32_t edi
int32_t var_c_1 = edi
int32_t* esi_1 = *(arg1 + (sub_42cbde(arg2) << 2) + 0x6c)
int32_t result

while (true)
    if (esi_1 != 0)
        char* ecx_1 = *esi_1
        char* edi_1 = arg2
        uint32_t eax_1
        
        while (true)
            char edx_1 = *edi_1
            eax_1.b = edx_1
            char temp1_1 = *ecx_1
            bool c_1 = edx_1 u< temp1_1
            
            if (edx_1 == temp1_1)
                if (eax_1.b == 0)
                    eax_1 = 0
                    break
                
                edx_1 = edi_1[1]
                eax_1.b = edx_1
                char temp5_1 = ecx_1[1]
                c_1 = edx_1 u< temp5_1
                
                if (edx_1 == temp5_1)
                    edi_1 = &edi_1[2]
                    ecx_1 = &ecx_1[2]
                    
                    if (eax_1.b != 0)
                        continue
                    
                    eax_1 = 0
                    break
            
            bool c_2 = unimplemented  {sbb eax, eax}
            eax_1 = sbb.d(sbb.d(eax_1, eax_1, c_1), 0xffffffff, c_2)
            break
        
        if (eax_1 s>= 0)
            if (eax_1 != 0)
                esi_1 = esi_1[3]
                continue
            
            if (arg3 != 0)
                *arg3 = esi_1[1]
            
            if (arg4 != 0)
                *arg4 = esi_1[2]
            
            result = 1
            break
    
    result = 0
    break

return result
