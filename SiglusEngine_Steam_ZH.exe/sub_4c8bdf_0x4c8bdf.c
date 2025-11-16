// 函数: sub_4c8bdf
// 地址: 0x4c8bdf
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t* ecx = *(arg1 + 0x100)
int32_t edi
int32_t var_58 = edi
int32_t edi_2 = *ecx & 0xfffff
int32_t var_10 = edi_2

if (edi_2 != 0)
    int32_t eax_1 = ecx[1]
    
    if (eax_1 != 0 && ecx[3] != 0)
        uint32_t i_2 = divu.dp.d(0:eax_1, edi_2)
        int32_t var_8_1 = 0
        
        if (i_2 u> 0)
            int32_t eax_3 = *(arg1 + 0x14)
            int32_t* ecx_1 = ecx[2]
            uint32_t i_1 = i_2
            int32_t var_4c[0x4]
            uint32_t i
            
            do
                int32_t edx_6 = *(*(eax_3 + (*ecx_1 << 2)) + 8)
                
                if (edx_6 != 0xffffffff)
                    edi_2 = var_10
                    
                    if ((*(*(*(arg1 + 0x10) + (*(*(eax_3 + (edx_6 << 2)) + 4) << 2)) + 4) & 4) == 0)
                        int32_t esi_4 = var_8_1
                        var_8_1 += 1
                        var_4c[esi_4] = edx_6
                
                ecx_1 = &ecx_1[edi_2]
                i = i_1
                i_1 -= 1
            while (i != 1)
            int32_t esi_5 = 0
            
            if (var_8_1 != 0)
                int32_t var_3c[0x4]
                
                if (var_8_1 u> 0)
                    do
                        int32_t eax_4
                        
                        eax_4 = var_8_1 != 1 ? esi_5 : 3
                        
                        int32_t* var_5c_1 = ecx_1
                        int32_t* var_60_1 = ecx_1
                        var_60_1.q = fconvert.d(float.t(0))
                        int32_t eax_5 = sub_49f544(arg1, *(arg1 + 0x8c), 0, eax_4, var_60_1)
                        var_3c[esi_5] = eax_5
                        
                        if (eax_5 == 0xffffffff)
                            return 0x8007000e
                        
                        int32_t ecx_3 = *(arg1 + 0x14)
                        void* eax_6 = *(ecx_3 + (eax_5 << 2))
                        *(eax_6 + 0x14) = *(*(ecx_3 + (**(*(arg1 + 0x100) + 0x10) << 2)) + 0x14)
                        ecx_1 = *(*(*(arg1 + 0x14) + (**(*(arg1 + 0x100) + 0x10) << 2)) + 0x18)
                        esi_5 += 1
                        *(eax_6 + 0x18) = ecx_1
                    while (esi_5 u< var_8_1)
                
                int32_t var_8_2 = 0
                int32_t var_1c_1 = 0
                int32_t* var_14_1 = nullptr
                
                do
                    int32_t eax_7 = *(arg1 + 0x14)
                    int32_t ecx_14 = *(*(eax_7 + (*(var_14_1 + *(*(arg1 + 0x100) + 8)) << 2)) + 8)
                    
                    if (ecx_14 != 0xffffffff && (
                            *(*(*(arg1 + 0x10) + (*(*(eax_7 + (ecx_14 << 2)) + 4) << 2)) + 4) & 4) == 0)
                        int32_t var_18_1 = 0
                        
                        if (edi_2 u> 0)
                            int32_t* var_c_1 = var_14_1
                            
                            do
                                int32_t ecx_17 = *(arg1 + 0x14)
                                int32_t* eax_15 =
                                    *(ecx_17 + (*(var_c_1 + *(*(arg1 + 0x100) + 8)) << 2))
                                int32_t var_5c_2 = ecx_17
                                int32_t var_60_2 = ecx_17
                                var_60_2.q = fconvert.d(float.t(0))
                                int32_t edi_4 = sub_49f544(arg1, 0, 0, 0, var_60_2)
                                
                                if (edi_4 == 0xffffffff)
                                    return 0x8007000e
                                
                                int32_t* esi_6 = *(*(arg1 + 0x14) + (edi_4 << 2))
                                int32_t eax_18 = sub_49f070(esi_6, eax_15)
                                
                                if (eax_18 s< 0)
                                    return eax_18
                                
                                if (esi_6[0xe] != 0xffffffff)
                                    int32_t var_5c_4 = 0
                                    int32_t eax_19 = sub_49f544(arg1, 0, 0, 0, 0f)
                                    
                                    if (eax_19 == 0xffffffff)
                                        return 0x8007000e
                                    
                                    int32_t eax_20 = *(arg1 + 0x14)
                                    int32_t* ecx_21 = *(eax_20 + (eax_19 << 2))
                                    sub_49f070(ecx_21, *(eax_20 + (eax_15[0xe] << 2)))
                                    int32_t eax_22 = var_3c[var_8_2]
                                    esi_6[0xe] = eax_19
                                    ecx_21[2] = eax_22
                                
                                int32_t* ecx_23 = var_c_1
                                var_18_1 += 1
                                var_c_1 = &var_c_1[1]
                                esi_6[2] = var_3c[var_8_2]
                                *(ecx_23 + *(*(arg1 + 0x100) + 8)) = edi_4
                            while (var_18_1 u< var_10)
                            
                            edi_2 = var_10
                        
                        var_8_2 += 1
                    
                    var_1c_1 += 1
                    var_14_1 = &var_14_1[edi_2]
                while (var_1c_1 u< i_2)
                
                void* eax_31 = sub_49ec23(0x74)
                int32_t* var_14_2
                int32_t* edi_6
                
                if (eax_31 == 0)
                    var_14_2 = nullptr
                    edi_6 = nullptr
                else
                    edi_6 = sub_49e789(eax_31)
                    var_14_2 = edi_6
                
                if (edi_6 == 0)
                    return 0x8007000e
                
                int32_t esi_7 =
                    sub_49ec6e(edi_6, (var_8_2 & 0xfffff) | 0x10000000, var_8_2, var_8_2, 0)
                int32_t* ecx_26 = edi_6
                
                if (esi_7 s>= 0)
                    esi_7 = sub_49e7bf(ecx_26, *(arg1 + 0x100))
                    
                    if (esi_7 s>= 0)
                        int32_t eax_39 = var_8_2 << 2
                        int32_t esi_8
                        int32_t edi_8
                        edi_8, esi_8 = __builtin_memcpy(edi_6[4], &var_3c, eax_39 u>> 2 << 2)
                        __builtin_memcpy(edi_8, esi_8, eax_39 & 3)
                        int32_t esi_9
                        int32_t edi_10
                        edi_10, esi_9 = __builtin_memcpy(var_14_2[2], &var_4c, eax_39 u>> 2 << 2)
                        __builtin_memcpy(edi_10, esi_9, eax_39 & 3)
                        esi_7 = sub_49f431(arg1, var_14_2)
                        
                        if (esi_7 s>= 0)
                            return 0
                        
                        ecx_26 = var_14_2
                    else
                        ecx_26 = edi_6
                
                sub_46cb59(ecx_26, 1)
                return esi_7

return 1
