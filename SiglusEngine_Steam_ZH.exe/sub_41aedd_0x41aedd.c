// 函数: sub_41aedd
// 地址: 0x41aedd
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1[2].b != 5)
    return 

void* eax_1 = *arg1
int32_t edx_1 = *(eax_1 + 0x68)
void* esi_1 = arg1[1]
int32_t edi
int32_t var_6c_1 = edi
int32_t edi_1 = *(esi_1 + 0x68)

if (edi_1 == edx_1 u>> 1)
label_41af21:
    int32_t ecx_2 = *(esi_1 + 0x6c)
    
    if (ecx_2 == *(eax_1 + 0x6c) u>> 1)
    label_41af3f:
        
        if (*(esi_1 + 0x70) == 1 && *(eax_1 + 0x70) == 1)
            if (edx_1 u> 1 && (1 & edx_1.b) != 0)
                *(eax_1 + 0x68) &= 0xfffffffe
                void* eax_2 = *arg1
                *(eax_2 + 0x74) -= *(eax_2 + 0x78)
            
            void* eax_3 = *arg1
            
            if (*(eax_3 + 0x6c) u> 1)
                *(eax_3 + 0x6c) &= 0xfffffffe
            
            if ((*(arg1 + 0xa) & 8) != 0)
            label_41b065:
                int32_t esi_2 = *(arg1[1] + 0x68)
                float* eax_19 = sub_745f3f(esi_2 << 4)
                float* var_14_1
                
                if (eax_19 == 0)
                    var_14_1 = nullptr
                else
                    sub_61cdd0(eax_19, 0x10, esi_2, sub_52e900)
                    var_14_1 = eax_19
                
                if (var_14_1 != 0)
                    void* eax_22 = *arg1
                    int32_t esi_3 = *(eax_22 + 0x68)
                    void* var_c_1
                    void* var_8_1
                    void* eax_33
                    void* esi_4
                    
                    if (*(eax_22 + 0x6c) != 1)
                        int32_t esi_5 = esi_3 << 1
                        void* eax_28 = sub_745f3f(esi_5 << 4)
                        
                        if (eax_28 == 0)
                            var_8_1 = nullptr
                        else
                            sub_61cdd0(eax_28, 0x10, esi_5, sub_52e900)
                            var_8_1 = eax_28
                        
                        esi_4 = var_8_1
                        eax_33 = (*(*arg1 + 0x68) << 4) + var_8_1
                        var_c_1 = eax_33
                    else
                        void* eax_25 = sub_745f3f(esi_3 << 4)
                        
                        if (eax_25 == 0)
                            var_8_1 = nullptr
                            esi_4 = nullptr
                        else
                            sub_61cdd0(eax_25, 0x10, esi_3, sub_52e900)
                            esi_4 = eax_25
                            var_8_1 = esi_4
                        
                        eax_33 = esi_4
                        var_c_1 = eax_33
                    
                    if (esi_4 != 0)
                        void* var_1c_1
                        
                        if (*(*arg1 + 0x68) != 1)
                            var_1c_1 = esi_4 + 0x10
                            eax_33 += 0x10
                        else
                            var_1c_1 = esi_4
                        
                        int32_t i = 0
                        
                        if (*(arg1[1] + 0x6c) u> 0)
                            do
                                int32_t edi_5 = i * 2
                                (*(**arg1 + 4))(edi_5, 0, esi_4)
                                
                                if (var_c_1 != esi_4)
                                    (*(**arg1 + 4))(edi_5 + 1, 0, var_c_1)
                                
                                int32_t j = 0
                                
                                if (*(arg1[1] + 0x68) u> 0)
                                    float* var_18_1 = var_14_1
                                    
                                    do
                                        int32_t esi_8 = j * 0x20
                                        float* eax_40 = var_1c_1 + esi_8
                                        float* ecx_24 = var_8_1 + esi_8
                                        long double x87_r6_2 =
                                            fconvert.t(*eax_40) + fconvert.t(*ecx_24)
                                        float* edi_7 = var_18_1
                                        var_18_1 = &var_18_1[4]
                                        fconvert.t(eax_40[1]) + fconvert.t(ecx_24[1])
                                        float var_38_1 = fconvert.s(fconvert.t(eax_40[2])
                                            + fconvert.t(ecx_24[2]))
                                        void* eax_42 = var_c_1 + esi_8
                                        float var_34 = fconvert.s(fconvert.t(eax_40[3])
                                            + fconvert.t(ecx_24[3]))
                                        *(eax_42 + 4)
                                        float* eax_44 = eax_33 + esi_8
                                        j += 1
                                        long double x87_r5_6 = fconvert.t(var_38_1)
                                            + fconvert.t(*(eax_42 + 8)) + fconvert.t(eax_44[2])
                                        long double x87_r5_8 = fconvert.t(fconvert.s(
                                            fconvert.t(var_34) + fconvert.t(*(eax_42 + 0xc))))
                                            + fconvert.t(eax_44[3])
                                        float var_30_1 = fconvert.s(fconvert.t(fconvert.s(
                                            fconvert.t(fconvert.s(x87_r6_2 + fconvert.t(*eax_42)))
                                            + fconvert.t(*eax_44))) * x87_r5_6)
                                        float var_2c = fconvert.s(
                                            fconvert.t(fconvert.s(x87_r6_2 + fconvert.t(eax_44[1])))
                                            * x87_r5_6)
                                        float var_28_1 = fconvert.s(x87_r6_2 * x87_r5_6)
                                        float var_24_1 = fconvert.s(x87_r5_8 * x87_r5_6)
                                        *edi_7 = var_30_1
                                        void* edi_8 = &edi_7[1]
                                        float* esi_9 = &var_2c
                                        *edi_8 = *esi_9
                                        void* edi_9 = edi_8 + 4
                                        void* esi_10 = &esi_9[1]
                                        *edi_9 = *esi_10
                                        *(edi_9 + 4) = *(esi_10 + 4)
                                    while (j u< *(arg1[1] + 0x68))
                                    
                                    esi_4 = var_8_1
                                
                                (*(*arg1[1] + 8))(i, 0, var_14_1)
                                i += 1
                            while (i u< *(arg1[1] + 0x6c))
                        
                        j__free(esi_4)
                    
                    j__free(var_14_1)
            else
                void* eax_4 = *arg1
                void* ecx_3 = arg1[1]
                int32_t edx_3 = *(eax_4 + 4)
                
                if (edx_3 != *(ecx_3 + 4) || *(eax_4 + 0x68) u< 2 || *(eax_4 + 0x6c) u< 2
                        || *(ecx_3 + 0x10) != 0 || *(eax_4 + 0x10) != 0)
                    goto label_41b065
                
                int32_t eax_7
                
                if (edx_3 s> 0x1d)
                    if (edx_3 s> 0x29)
                        if (edx_3 == 0x32)
                        label_41b052:
                            eax_7 = sub_41a448(arg1)
                            goto label_41b057
                        
                        if (edx_3 == 0x33)
                            eax_7 = sub_41a70b(arg1)
                        else
                            if (edx_3 != 0x34)
                                goto label_41b065
                            
                            eax_7 = sub_41a839(arg1)
                    else
                        if (edx_3 == 0x29)
                            goto label_41b065
                        
                        if (edx_3 != 0x1e)
                            if (edx_3 == 0x20)
                                goto label_41b023
                            
                            if (edx_3 != 0x21)
                                goto label_41b065
                            
                            goto label_41b01a
                        
                        eax_7 = sub_41a602(arg1)
                else if (edx_3 == 0x1d)
                    eax_7 = sub_41a4d4(arg1)
                else
                    if (edx_3 - 0x14 u> 8)
                        goto label_41b065
                    
                    switch (edx_3)
                        case 0x14
                            goto label_41b065
                        case 0x15
                        label_41b023:
                            eax_7 = sub_419bdc(arg1)
                        case 0x16
                        label_41b01a:
                            eax_7 = sub_419e6f(arg1)
                        case 0x17
                            eax_7 = sub_419e91(arg1)
                        case 0x18
                            eax_7 = sub_419fc5(arg1)
                        case 0x19
                            eax_7 = sub_41a0ca(arg1)
                        case 0x1a
                            eax_7 = sub_41a1f3(arg1)
                        case 0x1b
                            eax_7 = sub_41a32a(arg1)
                        case 0x1c
                            goto label_41b052
                
            label_41b057:
                
                if (eax_7 s< 0)
                    goto label_41b065
    else if (ecx_2 == 1 && *(eax_1 + 0x6c) == ecx_2)
        goto label_41af3f
else if (edi_1 == 1 && edx_1 == edi_1)
    goto label_41af21
