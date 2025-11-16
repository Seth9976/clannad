// 函数: sub_49ffb2
// 地址: 0x49ffb2
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_24 = edi
int32_t i = 0

if (*(arg1 + 8) u> 0)
    do
        void* eax_2 = *(*(arg1 + 0x14) + (i << 2))
        void* esi_2 = *(*(arg1 + 0x10) + (*(eax_2 + 4) << 2))
        int16_t edx_2 = (*(esi_2 + 4)).w
        
        if ((edx_2.b & 0x30) != 0 && (edx_2:1.b & 2) == 0)
            *(eax_2 + 4) = *(arg1 + 0x74)
        
        if ((*(esi_2 + 4) & 4) != 0)
            *(eax_2 + 4) = *(arg1 + 0x88)
        
        i += 1
    while (i u< *(arg1 + 8))

int32_t i_1 = 0

if (*(arg1 + 0xc) u> 0)
    do
        int32_t* esi_3 = *(*(arg1 + 0x18) + (i_1 << 2))
        int32_t edi_1 = *esi_3
        
        if ((edi_1 & 0xfff00000) != 0)
            int32_t var_c_1 = 0
            
            if (esi_3[3] u> 0)
                int32_t* eax_4 = esi_3[4]
                int32_t j_3 = esi_3[3]
                int32_t j
                
                do
                    if ((**(*(arg1 + 0x14) + (*eax_4 << 2)) & 0x20) != 0)
                        var_c_1 += 1
                    
                    eax_4 = &eax_4[1]
                    j = j_3
                    j_3 -= 1
                while (j != 1)
            
            int32_t ebx_4 = esi_3[3]
            
            if (var_c_1 != ebx_4)
                if (var_c_1 u< ebx_4)
                    int32_t eax_6 = edi_1 & 0xf0000000
                    
                    if (eax_6 u>= 0x10000000 && eax_6 u<= 0x40000000)
                        uint32_t temp0_1 = divu.dp.d(0:(esi_3[1]), edi_1 & 0xfffff)
                        int32_t edi_3 = 0
                        int32_t j_1 = 0
                        
                        if (ebx_4 u> 0)
                            do
                                int32_t eax_9 = esi_3[4]
                                int32_t edx_10 = *(eax_9 + (j_1 << 2))
                                
                                if ((**(*(arg1 + 0x14) + (edx_10 << 2)) & 0x20) == 0)
                                    int32_t var_10_1 = 0
                                    *(eax_9 + (edi_3 << 2)) = edx_10
                                    
                                    if (temp0_1 u> 0)
                                        do
                                            int32_t edx_12 = esi_3[3] * var_10_1
                                            int32_t eax_10 = esi_3[2]
                                            var_10_1 += 1
                                            *(eax_10 + ((edx_12 + edi_3) << 2)) =
                                                *(eax_10 + ((j_1 + edx_12) << 2))
                                        while (var_10_1 u< temp0_1)
                                    
                                    edi_3 += 1
                                
                                j_1 += 1
                            while (j_1 u< esi_3[3])
                        
                        int32_t var_8_1 = 1
                        
                        if (temp0_1 u> 1)
                            int32_t var_18_1 = edi_3 << 2
                            
                            do
                                int32_t var_10_2 = 0
                                
                                if (edi_3 u> 0)
                                    int32_t edx_14 = var_18_1
                                    
                                    do
                                        int32_t eax_15 = esi_3[2]
                                        int32_t ebx_13 =
                                            *(eax_15 + ((esi_3[3] * var_8_1 + var_10_2) << 2))
                                        var_10_2 += 1
                                        *(edx_14 + eax_15) = ebx_13
                                        edx_14 += 4
                                    while (var_10_2 u< edi_3)
                                
                                var_8_1 += 1
                                var_18_1 += edi_3 << 2
                            while (var_8_1 u< temp0_1)
                        
                        *esi_3 ^= (*esi_3 ^ edi_3) & 0xfffff
                        esi_3[1] = edi_3 * temp0_1
                        esi_3[3] = edi_3
                
                int32_t j_2 = 0
                
                if (esi_3[3] u> 0)
                    do
                        int32_t edi_4 = *(arg1 + 0x14)
                        void* eax_26 = *(edi_4 + (*(esi_3[4] + (j_2 << 2)) << 2))
                        int32_t var_18_2 = *(eax_26 + 0x18)
                        int32_t k = *(eax_26 + 0x14)
                        
                        while (k != 0xffffffff)
                            int32_t ebx_15 = k << 2
                            
                            if ((**(ebx_15 + edi_4) & 0x20) == 0)
                                break
                            
                            void* edx_18 = *(ebx_15 + *(arg1 + 0x14))
                            k = *(edx_18 + 0x14)
                            var_18_2 = *(edx_18 + 0x18)
                        
                        j_2 += 1
                        *(eax_26 + 0x18) = var_18_2
                        *(eax_26 + 0x14) = k
                    while (j_2 u< esi_3[3])
            else
                *esi_3 = 0
        
        i_1 += 1
    while (i_1 u< *(arg1 + 0xc))

return 0
