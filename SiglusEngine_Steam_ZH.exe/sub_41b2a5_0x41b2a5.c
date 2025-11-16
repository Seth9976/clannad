// 函数: sub_41b2a5
// 地址: 0x41b2a5
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1[2].b != 5)
    return 

void* eax_1 = *arg1
int32_t ecx = *(eax_1 + 0x68)
void* esi_1 = arg1[1]
int32_t edi
int32_t var_c4_1 = edi
int32_t edi_1 = *(esi_1 + 0x68)

if (edi_1 == ecx u>> 1)
label_41b2e4:
    int32_t edx_3 = *(esi_1 + 0x6c)
    
    if (edx_3 == *(eax_1 + 0x6c) u>> 1)
    label_41b2fc:
        
        if (*(esi_1 + 0x70) == *(eax_1 + 0x70) u>> 1)
            if (ecx u> 1 && (ecx.b & 1) != 0)
                *(eax_1 + 0x68) &= 0xfffffffe
                void* eax_3 = *arg1
                *(eax_3 + 0x74) -= *(eax_3 + 0x78)
            
            void* eax_4 = *arg1
            
            if (*(eax_4 + 0x6c) u> 1)
                *(eax_4 + 0x6c) &= 0xfffffffe
            
            void* eax_5 = *arg1
            
            if (*(eax_5 + 0x70) u> 1)
                *(eax_5 + 0x70) &= 0xfffffffe
            
            int32_t esi_2 = *(arg1[1] + 0x68)
            float* eax_9 = sub_745f3f(esi_2 << 4)
            float* var_14_1
            
            if (eax_9 == 0)
                var_14_1 = nullptr
            else
                sub_61cdd0(eax_9, 0x10, esi_2, sub_52e900)
                var_14_1 = eax_9
            
            if (var_14_1 != 0)
                void* eax_12 = *arg1
                int32_t esi_3 = *(eax_12 + 0x68)
                void* var_28_1
                void* var_24_1
                void* var_1c_1
                void* var_8_1
                void* eax_17
                int32_t* ecx_5
                void* edx_6
                void* esi_7
                
                if (*(eax_12 + 0x6c) != 1)
                    int32_t esi_8 = esi_3 << 2
                    void* eax_20 = sub_745f3f(esi_8 << 4)
                    
                    if (eax_20 == 0)
                        var_8_1 = nullptr
                    else
                        sub_61cdd0(eax_20, 0x10, esi_8, sub_52e900)
                        var_8_1 = eax_20
                    
                    ecx_5 = *arg1 + 0x68
                    int32_t edx_7 = *ecx_5
                    var_28_1 = (edx_7 << 4) + var_8_1
                    esi_7 = var_28_1
                    var_1c_1 = (edx_7 << 5) + var_8_1
                    var_24_1 = edx_7 * 0x30 + var_8_1
                    eax_17 = var_1c_1
                    edx_6 = var_24_1
                else
                    int32_t esi_4 = esi_3 << 1
                    void* eax_15 = sub_745f3f(esi_4 << 4)
                    
                    if (eax_15 == 0)
                        var_8_1 = nullptr
                    else
                        sub_61cdd0(eax_15, 0x10, esi_4, sub_52e900)
                        var_8_1 = eax_15
                    
                    eax_17 = var_8_1
                    ecx_5 = *arg1 + 0x68
                    esi_7 = (*ecx_5 << 4) + eax_17
                    edx_6 = esi_7
                    var_28_1 = esi_7
                    var_1c_1 = eax_17
                    var_24_1 = edx_6
                
                void* edi_4 = var_8_1
                
                if (edi_4 != 0)
                    void* var_34_1
                    void* var_30_1
                    
                    if (*ecx_5 != 1)
                        var_34_1 = edi_4 + 0x10
                        eax_17 += 0x10
                        var_30_1 = esi_7 + 0x10
                        edx_6 += 0x10
                    else
                        var_34_1 = edi_4
                        var_30_1 = esi_7
                    
                    int32_t i = 0
                    void* eax_31 = arg1[1]
                    
                    if (*(eax_31 + 0x70) u> 0)
                        do
                            int32_t j = 0
                            
                            if (*(eax_31 + 0x6c) u> 0)
                                do
                                    int32_t edi_6 = i * 2
                                    (*(**arg1 + 4))(j * 2, edi_6, var_8_1)
                                    
                                    if (esi_7 != var_8_1)
                                        (*(**arg1 + 4))(j * 2, edi_6 + 1, esi_7)
                                    
                                    if (var_1c_1 != var_8_1)
                                        (*(**arg1 + 4))(j * 2 + 1, edi_6, var_1c_1)
                                    
                                    if (var_24_1 != esi_7 && var_24_1 != var_1c_1)
                                        (*(**arg1 + 4))(j * 2 + 1, edi_6 + 1, var_24_1)
                                    
                                    int32_t k = 0
                                    
                                    if (*(arg1[1] + 0x68) u> 0)
                                        float* var_2c_1 = var_14_1
                                        
                                        do
                                            int32_t eax_49 = k * 0x20
                                            float* ecx_15 = var_34_1 + eax_49
                                            float* edx_13 = var_8_1 + eax_49
                                            long double x87_r6_2 =
                                                fconvert.t(*ecx_15) + fconvert.t(*edx_13)
                                            float* ecx_16 = eax_49 + esi_7
                                            fconvert.t(ecx_15[1]) + fconvert.t(edx_13[1])
                                                + fconvert.t(ecx_16[1])
                                            float* ecx_18 = var_30_1 + eax_49
                                            fconvert.t(fconvert.s(fconvert.t(ecx_15[2])
                                                + fconvert.t(edx_13[2]))) + fconvert.t(ecx_16[2])
                                                + fconvert.t(ecx_18[2])
                                            float* ecx_20 = var_1c_1 + eax_49
                                            fconvert.t(fconvert.s(fconvert.t(fconvert.s(
                                                fconvert.t(ecx_15[3]) + fconvert.t(edx_13[3])))
                                                + fconvert.t(ecx_16[3]))) + fconvert.t(ecx_18[3])
                                                + fconvert.t(ecx_20[3])
                                            float* ecx_22 = eax_17 + eax_49
                                            void* ecx_24 = var_24_1 + eax_49
                                            fconvert.t(fconvert.s(fconvert.t(fconvert.s(fconvert.t(
                                                fconvert.s(x87_r6_2 + fconvert.t(*ecx_16)))
                                                + fconvert.t(*ecx_18))) + fconvert.t(*ecx_20)))
                                                + fconvert.t(*ecx_22) + fconvert.t(*ecx_24)
                                            float* eax_50 = eax_49 + edx_6
                                            float* edi_8 = var_2c_1
                                            k += 1
                                            var_2c_1 = &var_2c_1[4]
                                            long double x87_r5_15 = fconvert.t(fconvert.s(fconvert
                                                .t(fconvert.s(fconvert.t(fconvert.s(x87_r6_2
                                                + fconvert.t(ecx_18[1]))) + fconvert.t(ecx_20[1])))
                                                + fconvert.t(ecx_22[1]))) + fconvert.t(*(ecx_24 + 4))
                                                + fconvert.t(eax_50[1])
                                            long double x87_r5_17 = fconvert.t(fconvert.s(fconvert
                                                .t(fconvert.s(fconvert.t(fconvert.s(x87_r6_2
                                                + fconvert.t(ecx_20[2]))) + fconvert.t(ecx_22[2])))
                                                + fconvert.t(*(ecx_24 + 8)))) + fconvert.t(eax_50[2])
                                            float var_ac_1 = fconvert.s(fconvert.t(fconvert.s(
                                                fconvert.t(fconvert.s(x87_r6_2
                                                + fconvert.t(ecx_22[3])))
                                                + fconvert.t(*(ecx_24 + 0xc))))
                                                + fconvert.t(eax_50[3]))
                                            float var_68_1 = fconvert.s(fconvert.t(fconvert.s(
                                                x87_r6_2 + fconvert.t(*eax_50))) * x87_r5_15)
                                            float var_64 = fconvert.s(x87_r6_2 * x87_r5_15)
                                            float var_60_1 = fconvert.s(x87_r5_17 * x87_r5_15)
                                            float var_5c_1 =
                                                fconvert.s(fconvert.t(var_ac_1) * x87_r6_2)
                                            *edi_8 = var_68_1
                                            void* edi_9 = &edi_8[1]
                                            float* esi_10 = &var_64
                                            *edi_9 = *esi_10
                                            void* edi_10 = edi_9 + 4
                                            void* esi_11 = &esi_10[1]
                                            *edi_10 = *esi_11
                                            *(edi_10 + 4) = *(esi_11 + 4)
                                            esi_7 = var_28_1
                                        while (k u< *(arg1[1] + 0x68))
                                    
                                    (*(*arg1[1] + 8))(j, i, var_14_1)
                                    j += 1
                                while (j u< *(arg1[1] + 0x6c))
                            
                            i += 1
                            eax_31 = arg1[1]
                        while (i u< *(eax_31 + 0x70))
                        
                        edi_4 = var_8_1
                    
                    j__free(edi_4)
                
                j__free(var_14_1)
    else if (edx_3 == 1 && *(eax_1 + 0x6c) == edx_3)
        goto label_41b2fc
else if (edi_1 == 1 && ecx == edi_1)
    goto label_41b2e4
