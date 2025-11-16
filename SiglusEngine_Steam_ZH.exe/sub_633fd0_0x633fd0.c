// 函数: sub_633fd0
// 地址: 0x633fd0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = arg2
int32_t* ebx = arg1
int32_t result_1 = result
int32_t* var_c = ebx
int32_t edi
int32_t var_1c = edi

if (ebx != result)
    int32_t* esi_1 = &ebx[2]
    
    if (esi_1 != result)
        do
            int32_t edx = *esi_1
            int32_t* edi_2 = esi_1
            int32_t ecx = *ebx
            int32_t result_2 = esi_1[1]
            
            if (edx s< ecx || (edx s<= ecx && result_2 s< ebx[1]))
                int32_t* eax_1 = esi_1
                
                if (ebx != esi_1)
                    do
                        int32_t ecx_3 = eax_1[-2]
                        eax_1 -= 8
                        eax_1[2] = ecx_3
                        eax_1[3] = eax_1[1]
                    while (eax_1 != ebx)
                
                result = result_2
                *ebx = edx
                ebx[1] = result
            else
                int32_t* ecx_1 = esi_1
                
                while (true)
                    result = ecx_1[-2]
                    ecx_1 -= 8
                    
                    if (edx s>= result)
                        if (edx s> result)
                            break
                        
                        if (result_2 s>= ecx_1[1])
                            break
                    
                    *edi_2 = result
                    edi_2[1] = ecx_1[1]
                    edi_2 = ecx_1
                
                edi_2[1] = result_2
                ebx = var_c
                *edi_2 = edx
            
            esi_1 = &esi_1[2]
        while (esi_1 != result_1)

return result
