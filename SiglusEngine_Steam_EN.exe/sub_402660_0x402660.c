// 函数: sub_402660
// 地址: 0x402660
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ebp = 0
int32_t result = sub_402070(arg1, arg2, arg3)

if (result s>= 0)
    result = sub_402960(arg1)
    
    if (result == 0)
        while (true)
            void* edi_3 = arg1 + 0x78
            void var_20
            int32_t eax = sub_410930(edi_3, &var_20)
            
            if (eax s> 0)
                int32_t eax_1 = sub_404970((*(arg1 + 0x60) << 5) + *(arg1 + 0x48), &var_20)
                
                if (eax_1 s>= 0)
                    if (ebp != 0)
                        int32_t ecx_4 = *(arg1 + 0x50)
                        int32_t eax_4
                        int32_t edx_1
                        edx_1:eax_4 = sx.q((eax_1 + ebp) s>> 2)
                        *(arg1 + 0x50) = ecx_4 + eax_4
                        *(arg1 + 0x54) = adc.d(*(arg1 + 0x54), edx_1, ecx_4 + eax_4 u< ecx_4)
                    
                    int32_t eax_7 = sub_4030f0(*(arg1 + 0x48), 1)
                    int32_t ecx_6 = *(arg1 + 0x50)
                    int32_t eax_10
                    int32_t edx_3
                    edx_3:eax_10 = sx.q((eax_7 + eax_1) s>> 2)
                    int32_t edx_4 = adc.d(edx_3, *(arg1 + 0x54), eax_10 + ecx_6 u< eax_10)
                    
                    if (edx_4 s<= arg3 && (edx_4 s< arg3 || eax_10 + ecx_6 u< arg2))
                        sub_4107e0(edi_3, nullptr)
                        sub_404890(arg1 + 0x250, &var_20)
                        sub_404060(arg1 + 0x1e0, arg1 + 0x250)
                        int32_t var_10
                        int32_t var_c
                        
                        if (var_c s>= 0xffffffff && (var_c s> 0xffffffff || var_10 u> 0xffffffff))
                            int32_t i_2 = *(arg1 + 0x60)
                            int32_t* edx_5 = *(arg1 + 0x44)
                            int32_t eax_13 =
                                sbb.d(var_c, edx_5[i_2 * 4 + 1], var_10 u< edx_5[i_2 * 4])
                            *(arg1 + 0x50) = var_10 - edx_5[i_2 * 4]
                            *(arg1 + 0x54) = eax_13
                            int32_t ecx_11 = *(arg1 + 0x54)
                            
                            if (ecx_11 s<= 0 && (ecx_11 s< 0 || *(arg1 + 0x50) u< 0))
                                *(arg1 + 0x50) = 0
                                *(arg1 + 0x54) = 0
                            
                            if (i_2 s> 0)
                                void* eax_14 = &edx_5[2]
                                int32_t i
                                
                                do
                                    int32_t edx_6 = *eax_14
                                    int32_t ebp_4 = *(arg1 + 0x50)
                                    int32_t ecx_12 = *(eax_14 + 4)
                                    *(arg1 + 0x50) = ebp_4 + edx_6
                                    eax_14 += 0x10
                                    i = i_2
                                    i_2 -= 1
                                    *(arg1 + 0x54) =
                                        adc.d(*(arg1 + 0x54), ecx_12, ebp_4 + edx_6 u< ebp_4)
                                while (i != 1)
                        
                        ebp = eax_1
                        continue
                else
                    sub_4107e0(edi_3, nullptr)
                    continue
            else if (eax s>= 0 || eax == 0xfffffffd)
                void var_30
                int32_t eax_15
                int32_t edx_7
                eax_15, edx_7 = sub_4013c0(arg1, &var_30, 0xffffffff, 0xffffffff)
                
                if (edx_7 s>= 0 && (edx_7 s> 0 || eax_15 u>= 0))
                    int32_t eax_16 = sub_40ffd0(&var_30)
                    
                    if (*(arg1 + 0x5c) != eax_16)
                        sub_401ca0(arg1)
                    
                    if (*(arg1 + 0x58) s< 3)
                        int32_t i_1 = sub_40ffd0(&var_30)
                        int32_t edx_8 = *(arg1 + 0x34)
                        int32_t ecx_14 = 0
                        *(arg1 + 0x5c) = i_1
                        
                        if (edx_8 s> 0)
                            int32_t* edi_2 = *(arg1 + 0x40)
                            
                            while (*edi_2 != i_1)
                                ecx_14 += 1
                                edi_2 = &edi_2[1]
                                
                                if (ecx_14 s>= edx_8)
                                    break
                        
                        if (ecx_14 == edx_8)
                            return 0xffffff77
                        
                        edi_3 = arg1 + 0x78
                        *(arg1 + 0x60) = ecx_14
                        sub_4107c0(edi_3, i_1)
                        *(arg1 + 0x58) = 3
                        result = sub_402960(arg1)
                        
                        if (result != 0)
                            break
                        
                        ebp = 0
                    
                    sub_410460(edi_3, &var_30)
                    continue
            
            int32_t ecx_15 = *(arg1 + 0x50)
            *(arg1 + 0x68) = 0
            *(arg1 + 0x70) = 0
            *(arg1 + 0x6c) = 0
            *(arg1 + 0x74) = 0
            int32_t eax_19 = *(arg1 + 0x54)
            
            if (eax_19 s<= arg3 && (eax_19 s< arg3 || ecx_15 u< arg2))
                while (true)
                    int32_t ebx_4 = arg2 - ecx_15
                    int32_t edi_5 = sbb.d(arg3, eax_19, arg2 u< ecx_15)
                    int32_t eax_21 = sub_4046b0(arg1 + 0x1e0, nullptr)
                    int32_t ebp_8 = eax_21
                    int32_t eax_22
                    int32_t edx_10
                    edx_10:eax_22 = sx.q(eax_21)
                    
                    if (edx_10 s>= edi_5 && (edx_10 s> edi_5 || eax_22 u> ebx_4))
                        ebp_8 = ebx_4
                    
                    sub_404710(arg1 + 0x1e0, ebp_8)
                    int32_t ecx_16 = *(arg1 + 0x50)
                    int32_t eax_25
                    int32_t edx_11
                    edx_11:eax_25 = sx.q(ebp_8)
                    *(arg1 + 0x50) = ecx_16 + eax_25
                    *(arg1 + 0x54) = adc.d(*(arg1 + 0x54), edx_11, ecx_16 + eax_25 u< ecx_16)
                    
                    if (edx_11 s<= edi_5 && (edx_11 s< edi_5 || eax_25 u< ebx_4)
                            && sub_4029e0(arg1, 0, 1, 1) s<= 0)
                        int32_t eax_27
                        int32_t edx_12
                        eax_27, edx_12 = sub_401ce0(arg1, 0xffffffff)
                        *(arg1 + 0x50) = eax_27
                        *(arg1 + 0x54) = edx_12
                    
                    eax_19 = *(arg1 + 0x54)
                    ecx_15 = *(arg1 + 0x50)
                    
                    if (eax_19 s>= arg3)
                        if (eax_19 s> arg3)
                            break
                        
                        if (ecx_15 u>= arg2)
                            break
            
            return 0

return result
