// 函数: sub_4cfc7d
// 地址: 0x4cfc7d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_20 = edi
int32_t edi_1 = arg5
int32_t result = 1

if (edi_1 == 0)
    return 1

int32_t* esi_1 = *(*(arg1 + 0x18) + (edi_1 << 2) - 4)

if (sub_49ea13(esi_1) == 0)
    int32_t eax_3 = *esi_1
    
    if ((eax_3 & 0xf0000000) != 0x60000000 && (eax_3 & 0xfff00000) != 0x11000000)
        int32_t var_10_1 = edi_1 - 1
        
        if (edi_1 - 1 s>= 0)
            int32_t temp1_1
            
            do
                int32_t* esi_2 = *(*(arg1 + 0x18) + (var_10_1 << 2))
                
                if (esi_2[9] != edi_1)
                    int32_t eax_7 = *esi_2
                    int32_t ecx_5 = eax_7 & 0xfff00000
                    
                    if (ecx_5 != 0)
                        if ((eax_7 & 0xf0000000) == 0x60000000)
                            break
                        
                        if (ecx_5 == 0x11000000)
                            break
                        
                        int32_t edx_1 = sub_4c7a69(arg4, esi_2, edi_1)
                        int32_t var_8_1 = 0
                        int32_t var_c_1 = 0
                        
                        if ((*esi_2 & edx_1) == 0x50000000)
                            var_8_1 = 1
                        
                        int32_t i_5 = esi_2[3]
                        
                        if (i_5 u> 0)
                            int32_t* edx_2 = esi_2[4]
                            int32_t i_2 = i_5
                            int32_t i
                            
                            do
                                void* ecx_8 = *(*(arg1 + 0x14) + (*edx_2 << 2))
                                int32_t ecx_11
                                
                                if (*(arg1 + 0x6c) << 3 s>> 0x1f != 0)
                                    ecx_11 = *(ecx_8 + 0x10)
                                else
                                    ecx_11 = *(arg2[5]
                                        + ((*(ecx_8 + 0x10) + (*(ecx_8 + 0xc) << 2)) << 2))
                                
                                if (ecx_11 != 3)
                                    var_8_1 = 1
                                else
                                    var_c_1 = 1
                                
                                edx_2 = &edx_2[1]
                                i = i_2
                                i_2 -= 1
                            while (i != 1)
                            edi_1 = arg5
                        
                        if (var_8_1 != arg6 && var_c_1 != arg7)
                            sub_4cfc30(arg1, edi_1 - 1, var_10_1)
                            result = 0
                            
                            if ((*(arg1 + 0x6f) & 0x10) != 0)
                                return 0
                            
                            if (sub_4ac102(arg1, arg2, nullptr) s>= 0)
                                int32_t i_4 = esi_2[3]
                                
                                if (i_4 u> 0)
                                    int32_t* esi_3 = esi_2[4]
                                    int32_t i_3 = i_4
                                    int32_t i_1
                                    
                                    do
                                        void* eax_18 = *(*(arg1 + 0x14) + (*esi_3 << 2))
                                        
                                        if (*(arg2[5] +
                                                ((*(eax_18 + 0x10) + (*(eax_18 + 0xc) << 2)) << 2)) != 3)
                                            var_8_1 = 1
                                        else
                                            var_c_1 = 1
                                        
                                        esi_3 = &esi_3[1]
                                        i_1 = i_3
                                        i_3 -= 1
                                    while (i_1 != 1)
                                
                                if (var_8_1 != arg6 && var_c_1 != arg7)
                                    return 0
                            
                            int32_t ecx_15 = *(arg1 + 0xc) << 2
                            int32_t esi_5
                            int32_t edi_10
                            edi_10, esi_5 =
                                __builtin_memcpy(*(arg1 + 0x18), arg3, ecx_15 u>> 2 << 2)
                            __builtin_memcpy(edi_10, esi_5, ecx_15 & 3)
                            edi_1 = arg5
                
                temp1_1 = var_10_1
                var_10_1 -= 1
            while (temp1_1 - 1 s>= 0)
        
        return result

return 1
