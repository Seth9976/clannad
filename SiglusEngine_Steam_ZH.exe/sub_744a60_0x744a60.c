// 函数: sub_744a60
// 地址: 0x744a60
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edi = arg1
int32_t esi = 0
int32_t var_8 = 0
int32_t eax
int80_t result
result, eax = sub_744db0(edi, arg2, arg3)

if (eax s>= 0 && sub_744470(edi) == 0)
    while (true)
        void* eax_2 = edi + 0x78
        
        while (true)
            void var_44
            int32_t eax_3 = sub_6e5370(eax_2, &var_44)
            
            if (eax_3 s> 0)
                int32_t eax_7 = sub_99ce00((*(edi + 0x60) << 5) + *(edi + 0x48), &var_44)
                
                if (eax_7 s< 0)
                    sub_6e5340(edi + 0x78, nullptr)
                    break
                
                if (esi != 0)
                    int32_t eax_11
                    int32_t edx_1
                    edx_1:eax_11 = sx.q((eax_7 + esi) s>> 2)
                    int32_t temp6_1 = *(edi + 0x50)
                    *(edi + 0x50) += eax_11
                    *(edi + 0x54) = adc.d(*(edi + 0x54), edx_1, temp6_1 + eax_11 u< temp6_1)
                
                int32_t eax_15
                int32_t edx_2
                edx_2:eax_15 = sx.q((sub_99b8a0(*(edi + 0x48), 1) + eax_7) s>> 2)
                int32_t edx_3 = adc.d(edx_2, *(edi + 0x54), eax_15 + *(edi + 0x50) u< eax_15)
                
                if (edx_3 s<= arg3 && (edx_3 s< arg3 || eax_15 + *(edi + 0x50) u< arg2))
                    sub_6e5340(edi + 0x78, nullptr)
                    sub_99cea0(edi + 0x250, &var_44)
                    sub_99be50(edi + 0x1e0, edi + 0x250)
                    int32_t var_34
                    int32_t var_30
                    
                    if (var_30 s>= 0xffffffff && (var_30 s> 0xffffffff || var_34 u> 0xffffffff))
                        int32_t i_2 = *(edi + 0x60)
                        int32_t edi_1 = *(edi + 0x44)
                        int32_t eax_20 = i_2 << 4
                        int32_t ecx_2 = var_34 - *(eax_20 + edi_1)
                        int32_t esi_3 =
                            sbb.d(var_30, *(eax_20 + edi_1 + 4), var_34 u< *(eax_20 + edi_1))
                        edi = arg1
                        *(edi + 0x50) = ecx_2
                        *(edi + 0x54) = esi_3
                        
                        if (esi_3 s<= 0 && (esi_3 s< 0 || ecx_2 u< 0))
                            *(edi + 0x50) = 0
                            *(edi + 0x54) = 0
                        
                        if (i_2 s> 0)
                            int32_t* ecx_4 = *(edi + 0x44) + 8
                            int32_t i
                            
                            do
                                int32_t eax_21 = *ecx_4
                                ecx_4 = &ecx_4[4]
                                int32_t temp16_1 = *(edi + 0x50)
                                *(edi + 0x50) += eax_21
                                *(edi + 0x54) =
                                    adc.d(*(edi + 0x54), ecx_4[-3], temp16_1 + eax_21 u< temp16_1)
                                i = i_2
                                i_2 -= 1
                            while (i != 1)
                    
                    esi = eax_7
                    var_8 = esi
                    break
            else if (eax_3 s>= 0 || eax_3 == 0xfffffffd)
                void var_24
                int32_t eax_23
                int32_t edx_4
                eax_23, edx_4 = sub_743dc0(edi, &var_24, 0xffffffff, 0xffffffff)
                
                if (edx_4 s>= 0 && (edx_4 s> 0 || eax_23 u>= 0))
                    if (sub_6e4700(&var_24) != 0)
                        sub_99c590(edi + 0x1e0)
                        sub_99cba0(edi + 0x250)
                        *(edi + 0x58) = 2
                    
                    if (*(edi + 0x58) s< 3)
                        uint32_t i_1 = sub_6e47d0(&var_24)
                        int32_t esi_4 = *(edi + 0x34)
                        int32_t ecx_5 = 0
                        
                        if (esi_4 s> 0)
                            int32_t* edx_5 = *(edi + 0x40)
                            
                            while (*edx_5 != i_1)
                                ecx_5 += 1
                                edx_5 = &edx_5[1]
                                
                                if (ecx_5 s>= esi_4)
                                    break
                        
                        eax_2 = edi + 0x78
                        esi = var_8
                        
                        if (ecx_5 == esi_4)
                            continue
                        else
                            *(edi + 0x60) = ecx_5
                            *(edi + 0x58) = 3
                            *(edi + 0x5c) = sub_6e47d0(&var_24)
                            sub_6e51f0(edi + 0x78, i_1)
                            
                            if (sub_744470(edi) != 0)
                                return result
                            
                            esi = 0
                            var_8 = 0
                    
                    sub_6e4e20(edi + 0x78, &var_24)
                    break
            
            void* var_54_8 = *(edi + 0x48)
            *(edi + 0x68) = zx.o(0)
            int32_t esi_5 = sub_99cdb0(var_54_8)
            int32_t var_8_1 = esi_5
            int32_t eax_33
            int32_t edx_7
            eax_33, edx_7 = __allshr(arg2, arg3, esi_5.b)
            int32_t eax_34
            int32_t edx_8
            eax_34, edx_8 = __allshl(eax_33, edx_7, esi_5.b)
            int32_t temp2_1 = *(edi + 0x54)
            
            if (temp2_1 s<= edx_8 && (temp2_1 s< edx_8 || *(edi + 0x50) u< eax_34))
                void* ebx_3 = edi + 0x1e0
                
                while (true)
                    int32_t eax_37
                    int32_t edx_11
                    eax_37, edx_11 = __allshr(arg2 - *(edi + 0x50), 
                        sbb.d(arg3, *(edi + 0x54), arg2 u< *(edi + 0x50)), esi_5.b)
                    int32_t eax_38 = sub_99bdf0(ebx_3, nullptr)
                    int32_t ebx_4 = eax_38
                    int32_t eax_39
                    int32_t edx_12
                    edx_12:eax_39 = sx.q(eax_38)
                    
                    if (edx_12 s>= edx_11 && (edx_12 s> edx_11 || eax_39 u> eax_37))
                        ebx_4 = eax_37
                    
                    sub_99bdc0(edi + 0x1e0, ebx_4)
                    int32_t eax_43
                    int32_t edx_13
                    edx_13:eax_43 = sx.q(ebx_4 << var_8_1.b)
                    int32_t temp10_1 = *(edi + 0x50)
                    *(edi + 0x50) += eax_43
                    *(edi + 0x54) = adc.d(*(edi + 0x54), edx_13, temp10_1 + eax_43 u< temp10_1)
                    int32_t eax_45
                    int32_t edx_14
                    edx_14:eax_45 = sx.q(ebx_4)
                    
                    if (edx_14 s<= edx_11 && (edx_14 s< edx_11 || eax_45 u< eax_37)
                            && sub_743720(edi, nullptr, 1, 1) s<= 0)
                        void* eax_47
                        int32_t edx_15
                        eax_47, edx_15 = sub_745590(edi, 0xffffffff)
                        *(edi + 0x50) = eax_47
                        *(edi + 0x54) = edx_15
                    
                    ebx_3 = edi + 0x1e0
                    esi_5 = var_8_1
                    int32_t temp15_1 = *(edi + 0x54)
                    
                    if (temp15_1 s>= edx_8)
                        if (temp15_1 s> edx_8)
                            break
                        
                        ebx_3 = edi + 0x1e0
                        
                        if (*(edi + 0x50) u>= eax_34)
                            break
            
            return result

return result
