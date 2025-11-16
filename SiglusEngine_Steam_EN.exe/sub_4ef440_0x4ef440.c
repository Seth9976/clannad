// 函数: sub_4ef440
// 地址: 0x4ef440
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

BOOL* edi = arg5 + 8

while (true)
    void* eax
    eax.b = *arg3
    
    if (eax.b != 0x2c && eax.b != 0x20)
        char* eax_1
        eax_1.b = *arg4
        
        if (eax_1.b == 0)
            *arg2 = &arg3[1]
            return arg2
        
        if (eax_1.b == 0x40)
            *arg2 = arg3
            return arg2
        
        char* ebx_1 = arg3
        char* var_8 = ebx_1
        int32_t var_14
        char* var_10
        
        if (zx.d(eax_1.b) - 0x24 u<= 0x2f)
            switch (eax_1.b)
                case 0x24, 0x4e
                    sub_4e8c00(&edi[-2], &var_8, arg3, &edi[-2], 0)
                    edi = &edi[5]
                    arg3 = var_8
                    arg4 = &arg4[1]
                    continue
                case 0x25
                    int32_t* edx_4 = &var_8
                    sub_4e72b0(&var_10, edx_4, arg3, &var_10)
                    char* esi_4 = var_10
                    int32_t* var_30_2 = &var_14
                    sub_4e7460(&var_14, edx_4, var_8, esi_4)
                    int32_t edx_5 = var_14
                    edi[1] = esi_4
                    edi[2] = edx_5
                    sub_4e76e0(&edi[-2], edx_5, esi_4, &edi[-2], &data_704898)
                    edi = &edi[5]
                    arg3 = var_8
                    arg4 = &arg4[1]
                    continue
                case 0x26
                label_4ef663:
                    int32_t* edx_6 = &var_8
                    sub_4e72b0(&var_10, edx_6, arg3, &var_10)
                    char* esi_5 = var_10
                    int32_t* var_30_4 = &var_14
                    int32_t eax_12 = sub_4e7460(&var_14, edx_6, var_8, esi_5)
                    int32_t ecx_7 = var_14
                    edi[1] = esi_5
                    edi[2] = ecx_7
                    sub_4a48e0(eax_12, &edi[-1], ecx_7, edi, esi_5)
                    ebx_1 = var_8
                case 0x53
                    eax.b = *arg3
                    
                    if (eax.b != 0x24)
                        if (eax.b != 0x22)
                            int32_t edi_3 = 0
                            
                            while (true)
                                eax.b = *ebx_1
                                
                                if (eax.b u>= 0x80 && (eax.b u< 0xa0 || eax.b u> 0xdf)
                                        && eax.b u< 0xfe)
                                    edi_3 += 2
                                    ebx_1 = &ebx_1[2]
                                    continue
                                
                                if ((eax.b u< 0x41 || eax.b u> 0x5a)
                                        && (eax.b u< 0x30 || eax.b u> 0x39) && eax.b != 0x5f
                                        && eax.b != 0x3f)
                                    break
                                
                                edi_3 += 1
                                ebx_1 = &ebx_1[1]
                            
                            sub_4d6960(eax, edi, &edi[-1], edi_3 + 1, "AVG_STR_PARAM")
                            int32_t esi_3 = *edi
                            sub_4d1c30(edi_3, arg3, esi_3, edi_3)
                            *(esi_3 + edi_3 + 1 - 1) = 0
                            arg3 = ebx_1
                            edi = &edi[5]
                            arg4 = &arg4[1]
                            continue
                        else
                            void* ebx_3 = &arg3[1]
                            int32_t esi_1 = 0
                            void* edi_1 = ebx_3
                            
                            while (true)
                                eax.b = *ebx_3
                                
                                if (eax.b u>= 0x80 && (eax.b u< 0xa0 || eax.b u> 0xdf)
                                        && eax.b u< 0xfe)
                                    esi_1 += 2
                                    ebx_3 += 2
                                    continue
                                
                                if (eax.b == 0x22)
                                    break
                                
                                if (eax.b != 0x5c)
                                    esi_1 += 1
                                    ebx_3 += 1
                                else
                                    arg3.b = *(ebx_3 + 1)
                                    
                                    if (arg3.b != 0x5c && arg3.b != 0x22)
                                        esi_1 += 1
                                        ebx_3 += 1
                                        continue
                                    
                                    esi_1 += 1
                                    ebx_3 += 2
                            
                            void* ebx_4 = ebx_3 + 1
                            sub_4d6960(edi, edi, &edi[-1], esi_1 + 1, "AVG_STR_PARAM")
                            eax = *edi
                            
                            if (esi_1 s> 0)
                                void* ebx_5 = edi_1
                                
                                while (true)
                                    char ecx_1 = *ebx_5
                                    
                                    if (ecx_1 u>= 0x80 && (ecx_1 u< 0xa0 || ecx_1 u> 0xdf)
                                            && ecx_1 u< 0xfe)
                                        *eax = ecx_1
                                        *(eax + 1) = *(ebx_5 + 1)
                                        eax += 2
                                        ebx_5 += 2
                                        continue
                                    
                                    if (ecx_1 == 0x22)
                                        break
                                    
                                    if (ecx_1 == 0x5c)
                                        ecx_1 = *(ebx_5 + 1)
                                        ebx_5 += 1
                                        
                                        if (ecx_1 != 0x5c && ecx_1 != 0x22)
                                            *eax = 0x5c
                                            eax += 1
                                            continue
                                        
                                        ecx_1 = *ebx_5
                                    
                                    *eax = ecx_1
                                    eax += 1
                                    ebx_5 += 1
                                
                                ebx_4 = ebx_5 + 1
                            
                            arg3 = ebx_4
                            edi = &edi[5]
                            *eax = 0
                            arg4 = &arg4[1]
                            continue
                    
                    goto label_4ef663
        edi = &edi[5]
        arg3 = ebx_1
        arg4 = &arg4[1]
        continue
    
    arg3 = &arg3[1]
