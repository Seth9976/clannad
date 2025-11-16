// 函数: sub_4ba560
// 地址: 0x4ba560
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*arg8 = 0
*arg9 = 0
int32_t eax_2 = arg3
int32_t var_10 = 0
int32_t var_28 = eax_2

if (eax_2 u< arg4)
    int32_t edi
    int32_t var_3c_1 = edi
    
    do
        int32_t* esi_1 = *(arg2 + (eax_2 << 2))
        
        if (esi_1 != 0)
            int32_t eax_3 = *esi_1
            
            if (eax_3 != 0)
                int32_t k_2 = eax_3 & 0xfffff
                uint32_t j_2 = divu.dp.d(0:(esi_1[1]), k_2)
                int32_t k_3 = k_2
                int32_t var_14_1 = 0
                
                if (arg6 u> 0)
                    int32_t* var_c_1 = arg5
                    int32_t i_1 = arg6
                    int32_t i
                    
                    do
                        if (j_2 u> 0)
                            int32_t* var_8_1 = nullptr
                            uint32_t j_1 = j_2
                            uint32_t j
                            
                            do
                                arg3 = 0
                                
                                if (k_2 u> 0)
                                    int32_t* eax_9 = var_8_1
                                    int32_t k_1 = k_2
                                    int32_t k
                                    
                                    do
                                        int32_t edx_4 = *(eax_9 + esi_1[2])
                                        int32_t ebx_1 = *(arg1 + 0x14)
                                        int32_t edi_1 = *var_c_1
                                        
                                        if (*(*(ebx_1 + (edx_4 << 2)) + 0x38) == edi_1
                                                || edx_4 == edi_1)
                                            arg3 += 1
                                            int32_t ecx_6 = var_14_1 + 1
                                            var_14_1 = ecx_6
                                            
                                            if (ecx_6 u> var_10)
                                                var_10 = ecx_6
                                            
                                            if (esi_1[3] == 1
                                                    && *(*(ebx_1 + (*esi_1[4] << 2)) + 0x10) == 3)
                                                *arg8 = 1
                                            
                                            if ((*esi_1 & 0xfff00000) != 0x50000000)
                                                int32_t edx_5 = 0
                                                
                                                if (esi_1[3] u> 0)
                                                    do
                                                        if (*(*(*(arg1 + 0x14)
                                                                + (*(esi_1[4] + (edx_5 << 2)) << 2))
                                                                + 0x10) == 3)
                                                            *arg8 = 1
                                                        
                                                        edx_5 += 1
                                                    while (edx_5 u< esi_1[3])
                                        
                                        eax_9 = &eax_9[1]
                                        k = k_1
                                        k_1 -= 1
                                    while (k != 1)
                                    k_2 = k_3
                                
                                if (arg3 != k_2 && arg3 != 0)
                                    *arg9 = 1
                                
                                var_8_1 = &var_8_1[k_2]
                                j = j_1
                                j_1 -= 1
                            while (j != 1)
                        
                        var_c_1 = &var_c_1[1]
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
        
        eax_2 = var_28 + 1
        var_28 = eax_2
    while (eax_2 u< arg4)

*arg7 = var_10
return 0
