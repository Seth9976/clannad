// 函数: sub_4a62d8
// 地址: 0x4a62d8
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_34 = edi

if ((*(arg1 + 0x6c) & 1) == 0)
    int32_t var_2c_1 = 0
    sub_4a39e3(arg1)
    int32_t i = *(arg1 + 0xc)
    
    if (i u> 0)
        do
            int32_t* esi_1 = *(*(arg1 + 0x18) + ((i - 1) << 2))
            int32_t eax_3 = *esi_1 & 0xfff00000
            
            if (eax_3 == 0x10000000 || eax_3 == 0x20700000)
                int32_t var_c_1 = 0
                
                if (esi_1[3] u> 0)
                    int32_t* eax_4 = esi_1[4]
                    
                    while ((*(*(*(arg1 + 0x10) + (*(*(*(arg1 + 0x14) + (*eax_4 << 2)) + 4) << 2))
                            + 4) & 0x20) != 0)
                        var_c_1 += 1
                        eax_4 = &eax_4[1]
                        
                        if (var_c_1 u>= esi_1[3])
                            break
                
                if (var_c_1 u>= esi_1[3])
                    int32_t var_c_2 = 0
                    
                    if (esi_1[1] u> 0)
                        int32_t* edx_2 = esi_1[2]
                        
                        while ((*(
                                *(*(arg1 + 0x10) + (*(*(*(arg1 + 0x14) + (*edx_2 << 2)) + 4) << 2))
                                + 4) & 2) != 0)
                            var_c_2 += 1
                            edx_2 = &edx_2[1]
                            
                            if (var_c_2 u>= esi_1[1])
                                break
                    
                    int32_t eax_7 = esi_1[1]
                    
                    if (var_c_2 u>= eax_7)
                        int32_t ecx_8 = *esi_1 & 0xfffff
                        uint32_t k_2 = divu.dp.d(0:eax_7, ecx_8)
                        int32_t var_10_1 = 0
                        int32_t var_14_1 = ecx_8
                        
                        if (k_2 u> 0)
                            int32_t* var_1c_1 = nullptr
                            
                            do
                                int32_t var_c_3 = 0
                                
                                if (ecx_8 u> 0)
                                    int32_t* var_18_1 = var_1c_1
                                    
                                    do
                                        int32_t* ebx_7 = *(*(arg1 + 0x18) + (*(
                                            *(*(arg1 + 0x14) + (*(var_18_1 + esi_1[2]) << 2))
                                            + 0x48) << 2))
                                        int32_t eax_14 = sub_49e81b(ebx_7)
                                        int32_t var_8_1 = 0
                                        int32_t eax_15 = ebx_7[3]
                                        
                                        if (eax_15 u> 0)
                                            int32_t* ebx_8 = ebx_7[4]
                                            int32_t edx_5 = *(arg1 + 0x14)
                                            int32_t* var_24_1 = ebx_8
                                            
                                            do
                                                void* ecx_14 = *(edx_5 + (*ebx_8 << 2))
                                                
                                                if (*(ecx_14 + 0x5c) u> 1)
                                                    break
                                                
                                                if (*(ecx_14 + 0x54) != i - 1)
                                                    break
                                                
                                                if (eax_14 != 0 && var_8_1 != *(*(edx_5
                                                        + (*(esi_1[4] + (var_c_3 << 2)) << 2)) + 0x10))
                                                    break
                                                
                                                var_8_1 += 1
                                                ebx_8 = &var_24_1[1]
                                                var_24_1 = ebx_8
                                            while (var_8_1 u< eax_15)
                                        
                                        if (var_8_1 u< eax_15)
                                            break
                                        
                                        var_c_3 += 1
                                        var_18_1 = &var_18_1[1]
                                    while (var_c_3 u< var_14_1)
                                    
                                    if (var_c_3 u< var_14_1)
                                        break
                                    
                                    ecx_8 = var_14_1
                                
                                var_10_1 += 1
                                var_1c_1 = &var_1c_1[ecx_8]
                            while (var_10_1 u< k_2)
                        
                        if (k_2 u<= 0 || var_10_1 u>= k_2)
                            int32_t j = 0
                            
                            if (esi_1[3] u> 0)
                                do
                                    int32_t eax_23 = j << 2
                                    int32_t* ecx_20 =
                                        *(*(arg1 + 0x14) + (*(eax_23 + esi_1[4]) << 2))
                                    
                                    if (k_2 u> 0)
                                        int32_t var_1c_2 = eax_23
                                        uint32_t k_1 = k_2
                                        uint32_t k
                                        
                                        do
                                            int32_t* eax_26 =
                                                *(*(arg1 + 0x14) + (*(var_1c_2 + esi_1[2]) << 2))
                                            int32_t ebx_14 = *eax_26 & 0xe000000
                                            int32_t ebx_16 = *eax_26 & 0xf1ffffff
                                            int32_t edx_11 = *ecx_20 & 0xe000000
                                            *eax_26 = ebx_16
                                            
                                            if (edx_11 u<= ebx_14)
                                                edx_11 = ebx_14
                                            
                                            bool cond:2_1 = eax_26[0x18] != 0
                                            *eax_26 = ebx_16 | edx_11
                                            eax_26[1] = ecx_20[1]
                                            eax_26[2] = ecx_20[2]
                                            eax_26[3] = ecx_20[3]
                                            eax_26[4] = ecx_20[4]
                                            
                                            if (not(cond:2_1))
                                                eax_26[0x18] = ecx_20[0x18]
                                                eax_26[0x19] = ecx_20[0x19]
                                            
                                            eax_26[0x1a] = ecx_20[0x1a]
                                            eax_26[0x1b] = ecx_20[0x1b]
                                            eax_26[0x1c] = ecx_20[0x1c]
                                            var_1c_2 += var_14_1 << 2
                                            k = k_1
                                            k_1 -= 1
                                        while (k != 1)
                                    
                                    j += 1
                                    ecx_20[1] = *(arg1 + 0x74)
                                while (j u< esi_1[3])
                            
                            var_2c_1 = 1
                            *esi_1 = 0
                            esi_1[1] = 0
                            esi_1[3] = 0
            
            i -= 1
        while (i u> 0)
        
        if (var_2c_1 != 0)
            return 0

return 1
