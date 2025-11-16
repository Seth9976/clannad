// 函数: sub_4a01c3
// 地址: 0x4a01c3
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_1c = arg1
int32_t var_20 = 0
int32_t i = 0

if (*(arg1 + 0xc) u> 0)
    int32_t edi
    int32_t var_2c_1 = edi
    
    do
        int32_t* esi_1 = *(*(arg1 + 0x18) + (i << 2))
        int32_t edi_1 = *esi_1
        int32_t eax_3 = edi_1 & 0xfff00000
        
        if (eax_3 != 0 && eax_3 != 0x10100000)
            int32_t var_8_1 = 0
            
            if (esi_1[3] u> 0)
                int32_t* eax_4 = esi_1[4]
                int32_t j_1 = esi_1[3]
                int32_t j
                
                do
                    if ((**(*(arg1 + 0x14) + (*eax_4 << 2)) & 0x20) == 0)
                        var_8_1 += 1
                    
                    eax_4 = &eax_4[1]
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                
                if (var_8_1 != 0)
                    int32_t eax_5 = esi_1[3]
                    var_20 = 1
                    
                    if (var_8_1 == eax_5)
                        *esi_1 = 0
                    else if (var_8_1 u< eax_5)
                        int32_t eax_7 = edi_1 & 0xf0000000
                        
                        if (eax_7 u>= 0x10000000 && eax_7 u<= 0x40000000)
                            uint32_t temp0_1 = divu.dp.d(0:(esi_1[1]), edi_1 & 0xfffff)
                            int32_t edi_3 = 0
                            int32_t eax_10 = 0
                            
                            while (true)
                                int32_t edx_5 = esi_1[4]
                                int32_t ebx_4 = *(edx_5 + (eax_10 << 2))
                                
                                if ((**(*(arg1 + 0x14) + (ebx_4 << 2)) & 0x20) != 0)
                                    int32_t var_c_1 = 0
                                    *(edx_5 + (edi_3 << 2)) = ebx_4
                                    
                                    if (temp0_1 u> 0)
                                        do
                                            int32_t edx_7 = esi_1[3] * var_c_1
                                            int32_t ebx_5 = esi_1[2]
                                            var_c_1 += 1
                                            *(ebx_5 + ((edx_7 + edi_3) << 2)) =
                                                *(ebx_5 + ((edx_7 + eax_10) << 2))
                                        while (var_c_1 u< temp0_1)
                                    
                                    edi_3 += 1
                                
                                eax_10 += 1
                                
                                if (eax_10 u>= esi_1[3])
                                    break
                                
                                arg1 = var_1c
                            
                            int32_t var_10_1 = 1
                            
                            if (temp0_1 u> 1)
                                int32_t var_18_1 = edi_3 << 2
                                
                                do
                                    int32_t var_c_2 = 0
                                    
                                    if (edi_3 u> 0)
                                        int32_t eax_13 = var_18_1
                                        
                                        do
                                            int32_t edx_9 = esi_1[2]
                                            int32_t ecx_8 =
                                                *(edx_9 + ((esi_1[3] * var_10_1 + var_c_2) << 2))
                                            var_c_2 += 1
                                            *(eax_13 + edx_9) = ecx_8
                                            eax_13 += 4
                                        while (var_c_2 u< edi_3)
                                    
                                    var_10_1 += 1
                                    var_18_1 += edi_3 << 2
                                while (var_10_1 u< temp0_1)
                            
                            arg1 = var_1c
                            *esi_1 ^= (*esi_1 ^ edi_3) & 0xfffff
                            esi_1[1] = edi_3 * temp0_1
                            esi_1[3] = edi_3
        
        i += 1
    while (i u< *(arg1 + 0xc))

int32_t result
result.b = var_20 == 0
return result
