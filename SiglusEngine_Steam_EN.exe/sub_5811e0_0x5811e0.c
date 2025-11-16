// 函数: sub_5811e0
// 地址: 0x5811e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

uint32_t i_1 = zx.d(arg1[1])
uint32_t j_3 = zx.d(*arg1)
void* ecx = &arg1[2]
uint32_t i_2 = i_1
void* var_10 = ecx
void* esi = ecx + ((i_1 * j_3) << 2)
void* result = *esi
void* esi_1 = esi + 4
void* var_18 = esi_1
void* edi = esi_1 + (result << 2)
void* var_1c = edi

if (i_1 s> 0)
    uint32_t j_2 = j_3
    uint32_t i
    
    do
        if (j_2 s> 0)
            uint32_t j_1 = j_2
            uint32_t j
            
            do
                int32_t var_c_1 = 0
                void* ecx_1 = *(esi_1 + (*ecx << 2))
                uint32_t eax_3 = zx.d(*(ecx_1 + edi + 1))
                void* result_1 = ecx_1 + edi
                int32_t edi_1 = 0
                uint32_t var_24_1 = eax_3
                uint32_t edx = zx.d(*(result_1 + 3))
                void* esi_2 = result_1 + 5
                char* ecx_2 = result_1 + 8
                int32_t ebx
                
                if (edx s> 0)
                    ebx = 0
                    int32_t edx_3
                    
                    do
                        int32_t edx_1 = 0
                        
                        if (eax_3 s> 0)
                            do
                                eax_3.b = *ecx_2
                                bool cond:2_1
                                
                                if (eax_3.b != 0xff)
                                    if (eax_3.b != 0)
                                        goto label_5812b1
                                    
                                    edi_1 = 1
                                    
                                    if (*esi_2 != 0)
                                        goto label_5812b1
                                    
                                    cond:2_1 = ebx != 0
                                else
                                    ebx = 1
                                    cond:2_1 = edi_1 != 0
                                
                                if (cond:2_1)
                                    goto label_5812b1
                                
                                eax_3 = var_24_1
                                edx_1 += 1
                                ecx_2 = &ecx_2[4]
                                esi_2 += 4
                            while (edx_1 s< eax_3)
                        
                        if (ebx != 0 && edi_1 != 0)
                            break
                        
                        edx_3 = var_c_1 + 1
                        var_c_1 = edx_3
                    while (edx_3 s< edx)
                
                if (edx s<= 0 || ebx == 0)
                    result = result_1
                    *result = 2
                else if (edi_1 == 0)
                    result = result_1
                    *result = 0
                else
                label_5812b1:
                    result = result_1
                    *result = 1
                
                esi_1 = var_18
                ecx = var_10 + 4
                j = j_1
                j_1 -= 1
                edi = var_1c
                var_10 = ecx
            while (j != 1)
            i_1 = i_2
            j_2 = j_3
        
        i = i_1
        i_1 -= 1
        i_2 = i_1
    while (i != 1)

return result
