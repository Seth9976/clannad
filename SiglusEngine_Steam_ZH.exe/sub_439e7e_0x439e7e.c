// 函数: sub_439e7e
// 地址: 0x439e7e
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_44 = edi

if (arg3 != 0 && *(arg3 + 4) == 3 && arg2 != 0 && arg2[1] == 0xd)
    void* edi_1 = arg2[4]
    void* ebx_1 = &arg3[0x10]
    void*** eax_1 = sub_42cfa1(0x50)
    void*** result
    
    if (eax_1 == 0)
        result = nullptr
    else
        result = sub_46bee5(eax_1, 0, 0x17, 0, 0, 1, ebx_1)
    
    if (result != 0)
        if (edi_1 == 0)
        label_439f69:
            int32_t var_48_3 = *(ebx_1 + 8)
            sub_43713d(arg1, ebx_1, 0xbca, "invalid subscript '%s'")
        else
            int32_t eax_3 = *(edi_1 + 4)
            void*** eax_16
            char i
            
            if (eax_3 != 1)
                if (eax_3 != 9)
                    goto label_439f69
                
                int32_t eax_17 = *(edi_1 + 0x18)
                void* ebx_2 = *(ebx_1 + 8)
                int32_t eax_18 = *(edi_1 + 0x1c)
                int32_t esi_4 = *(edi_1 + 0x20) & 0x200
                void* eax_19 = ebx_2
                void* ecx_8 = eax_19 + 1
                
                do
                    i = *eax_19
                    eax_19 += 1
                while (i != 0)
                
                void* ecx_9 = eax_19 - ecx_8 + ebx_2
                void* eax_20
                eax_20.b = *ebx_2
                void* var_18_1 = ecx_9
                int32_t var_14_1
                
                if (eax_20.b == 0x5f)
                    if (*(edi_1 + 0x10) != 2)
                        goto label_439f69
                    
                    if (ebx_2 + 1 u< ecx_9)
                        var_14_1 = 3
                    
                    if (ebx_2 + 1 u>= ecx_9 || *(ebx_2 + 1) != 0x6d)
                        var_14_1 = 2
                else
                    if (eax_20.b s<= 0x60)
                        goto label_439f69
                    
                    if (eax_20.b s<= 0x62 || eax_20.b == 0x67 || eax_20.b == 0x72)
                        int32_t eax_22 = *(edi_1 + 0x10)
                        
                        if (eax_22 != 0 && eax_22 != 1)
                            goto label_439f69
                        
                        var_14_1 = 1
                    else
                        if (eax_20.b s<= 0x76 || eax_20.b s> 0x7a)
                            goto label_439f69
                        
                        int32_t eax_21 = *(edi_1 + 0x10)
                        
                        if (eax_21 != 0 && eax_21 != 1)
                            goto label_439f69
                        
                        var_14_1 = 0
                
                int32_t var_10_1 = 0
                void* var_1c_2 = &result[9]
                
                if (ebx_2 u< ecx_9)
                    int32_t* edi_4 = arg2
                    int32_t* esi_5 = arg2
                    arg3 = ebx_2 + 2
                    void* var_8_1 = ebx_2 + 3
                    
                    while (true)
                        if (var_10_1 u< 4)
                            int32_t* var_48_5
                            
                            if (var_14_1 == 0)
                                int32_t eax_43 = sx.d(*ebx_2)
                                
                                if (eax_43 != 0x77)
                                    if (eax_43 == 0x78)
                                    label_43a19f:
                                        edi_4 = nullptr
                                        goto label_43a1c4
                                    
                                    if (eax_43 == 0x79)
                                        edi_4 = 1
                                        goto label_43a1c4
                                    
                                    if (eax_43 != 0x7a)
                                        goto label_439f69
                                    
                                    var_48_5 = 2
                                    goto label_43a1c3
                                
                            label_43a1c1:
                                var_48_5 = 3
                            label_43a1c3:
                                edi_4 = var_48_5
                            label_43a1c4:
                                esi_5 = nullptr
                                ebx_2 += 1
                                var_8_1 += 1
                                arg3 = &arg3[1]
                            else
                                if (var_14_1 == 1)
                                    int32_t eax_38 = sx.d(*ebx_2)
                                    
                                    if (eax_38 == 0x61)
                                        goto label_43a1c1
                                    
                                    if (eax_38 == 0x62)
                                        var_48_5 = 2
                                        goto label_43a1c3
                                    
                                    if (eax_38 == 0x67)
                                        edi_4 = 1
                                        goto label_43a1c4
                                    
                                    if (eax_38 != 0x72)
                                        goto label_439f69
                                    
                                    goto label_43a19f
                                
                                if (var_14_1 == 2)
                                    if (arg3 u>= var_18_1)
                                        goto label_439f69
                                    
                                    if (*ebx_2 != 0x5f)
                                        goto label_439f69
                                    
                                    ecx_9.b = *(ebx_2 + 1)
                                    
                                    if (ecx_9.b s< 0x31)
                                        goto label_439f69
                                    
                                    if (ecx_9.b s> 0x39)
                                        goto label_439f69
                                    
                                    char* eax_37
                                    eax_37.b = *arg3
                                    
                                    if (eax_37.b s< 0x31)
                                        goto label_439f69
                                    
                                    if (eax_37.b s> 0x39)
                                        goto label_439f69
                                    
                                    var_8_1 += 3
                                    esi_5 = sx.d(ecx_9.b) - 0x31
                                    edi_4 = sx.d(eax_37.b) - 0x31
                                    ebx_2 += 3
                                    arg3 = &arg3[3]
                                else if (var_14_1 == 3)
                                    if (var_8_1 u>= var_18_1)
                                        goto label_439f69
                                    
                                    if (*ebx_2 != 0x5f)
                                        goto label_439f69
                                    
                                    if (*(ebx_2 + 1) != 0x6d)
                                        goto label_439f69
                                    
                                    ecx_9.b = *arg3
                                    
                                    if (ecx_9.b s< 0x30)
                                        goto label_439f69
                                    
                                    if (ecx_9.b s> 0x39)
                                        goto label_439f69
                                    
                                    void* eax_35
                                    eax_35.b = *var_8_1
                                    
                                    if (eax_35.b s< 0x30)
                                        goto label_439f69
                                    
                                    if (eax_35.b s> 0x39)
                                        goto label_439f69
                                    
                                    var_8_1 += 4
                                    esi_5 = sx.d(ecx_9.b) - 0x30
                                    edi_4 = sx.d(eax_35.b) - 0x30
                                    ebx_2 += 4
                                    arg3 = &arg3[4]
                            
                            if (esi_5 u>= eax_17)
                                goto label_439f69
                            
                            if (edi_4 u>= eax_18)
                                goto label_439f69
                            
                            void*** eax_51 = sub_42cfa1(0x14)
                            void*** eax_52
                            
                            if (eax_51 == 0)
                                eax_52 = nullptr
                            else
                                eax_52 = sub_46b602(eax_51, 0, 0, "Swizzle")
                            
                            *var_1c_2 = eax_52
                            
                            if (eax_52 == 0)
                                return nullptr
                            
                            void*** eax_53 = sub_42cfa1(0x40)
                            void*** eax_54
                            
                            if (eax_53 == 0)
                                eax_54 = nullptr
                            else
                                eax_54 = sub_46c032(eax_53, 2, esi_5 * eax_18 + edi_4, ebx_1)
                            
                            *(*var_1c_2 + 8) = eax_54
                            
                            if (eax_54 == 0)
                                return nullptr
                            
                            var_10_1 += 1
                            var_1c_2 = *var_1c_2 + 0xc
                            
                            if (ebx_2 u< var_18_1)
                                continue
                        
                        if (ebx_2 u< var_18_1)
                            goto label_439f69
                        
                        if (var_10_1 u> 4)
                            goto label_439f69
                        
                        break
                
                void* edx_2
                
                for (void* i_1 = result[9]; i_1 != 0; i_1 = edx_2)
                    if (esi_4 != 0)
                        break
                    
                    edx_2 = *(i_1 + 0xc)
                    
                    for (void* j = edx_2; j != 0; j = *(j + 0xc))
                        if (*(*(i_1 + 8) + 0x18) == *(*(j + 8) + 0x18))
                            esi_4 = 1
                            break
                
                void*** eax_61 = sub_42cfa1(0x24)
                
                if (eax_61 == 0)
                    eax_16 = nullptr
                else
                    int32_t esi_8 = neg.d(esi_4)
                    int32_t ecx_13
                    ecx_13.b = var_10_1 != 1
                    eax_16 = sub_46bbbb(eax_61, ecx_13, *(edi_1 + 0x14), 1, var_10_1, 
                        sbb.d(esi_8, esi_8, esi_4 != 0) & 0x200)
                
                result[4] = eax_16
                goto label_43a2e1
            
            arg3 = nullptr
            void* var_1c_1 = edi_1
            void* edi_2
            
            while (true)
                void* eax_4 = *(edi_1 + 8)
                
                if (eax_4 != 0 && *(eax_4 + 4) == 6)
                    edi_2 = *(eax_4 + 0x18)
                    char* esi_1 = *(*(eax_4 + 0x14) + 0x18)
                    char* eax_6 = *(ebx_1 + 8)
                    int32_t eax_9
                    
                    while (true)
                        i = *eax_6
                        char temp1_1 = *esi_1
                        bool c_1 = i u< temp1_1
                        
                        if (i == temp1_1)
                            if (i == 0)
                                eax_9 = 0
                                break
                            
                            i = eax_6[1]
                            char temp4_1 = esi_1[1]
                            c_1 = i u< temp4_1
                            
                            if (i == temp4_1)
                                eax_6 = &eax_6[2]
                                esi_1 = &esi_1[2]
                                
                                if (i != 0)
                                    continue
                                
                                eax_9 = 0
                                break
                        
                        bool c_2 = unimplemented  {sbb eax, eax}
                        eax_9 = sbb.d(sbb.d(eax_6, eax_6, c_1), 0xffffffff, c_2)
                        break
                    
                    if (eax_9 == 0)
                        break
                    
                    arg3 = &arg3[sub_4377a1(arg1, *(edi_2 + 0x20))]
                    edi_1 = var_1c_1
                
                edi_1 = *(edi_1 + 0xc)
                var_1c_1 = edi_1
                
                if (edi_1 == 0)
                    goto label_439f69
            
            int32_t eax_14
            
            if (*(edi_2 + 0x20) != 0)
                eax_14 = (*(**(edi_2 + 0x20) + 4))()
                result[4] = eax_14
            
            if (*(edi_2 + 0x20) == 0 || eax_14 != 0)
                void*** eax_15 = sub_42cfa1(0x40)
                
                if (eax_15 == 0)
                    eax_16 = nullptr
                else
                    eax_16 = sub_46c032(eax_15, 2, arg3, ebx_1)
                
                result[9] = eax_16
            label_43a2e1:
                
                if (eax_16 != 0)
                    int32_t eax_63 = (*(*arg2 + 4))()
                    result[8] = eax_63
                    
                    if (eax_63 == 0)
                        goto label_439f69
                    
                    sub_4381dc(result)
                    return result

return nullptr
