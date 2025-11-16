// 函数: sub_463154
// 地址: 0x463154
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* esi = arg1
void* var_24 = esi
char* var_1c
char* var_14

if (sub_4606c9(arg2, arg3, &var_1c) != 0 && sub_4606c9(arg2, arg3, &var_14) != 0)
    int32_t edi
    int32_t var_2c_2 = edi
    
    if (*var_14 == 0)
        var_14 = nullptr
    
    char var_5
    int32_t eax_4
    
    if (sub_460813(arg2, arg3, &var_5) == 0)
        eax_4 = 0x8876038f
    else if (var_5 == 2)
        int32_t* eax_21 = sub_482491(var_1c, var_14, esi + 0x34, *(esi + 8) + 8, nullptr)
        arg3 = eax_21
        
        if (eax_21 == 0)
            eax_4 = 0x8007000e
        else
        label_46337d:
            
            if (sub_48647e(arg4, &arg3) != 0)
                eax_4 = 0
            else
                sub_460733(arg3, 1)
                eax_4 = 0x8007000e
    else
        int32_t* eax_5 = sub_745f3f(0x10)
        int32_t* var_c_1
        
        if (eax_5 == 0)
            var_c_1 = nullptr
        else
            *eax_5 = 0
            eax_5[1] = 0
            eax_5[2] = 2
            eax_5[3] = 0
            var_c_1 = eax_5
        
        if (var_c_1 != 0)
            while (true)
                int32_t esi_5
                int32_t var_20
                int32_t* var_10
                int32_t* ecx_3
                
                if (var_5 == 0)
                    if (sub_46083a(arg2, arg3, &var_20) == 0)
                        esi_5 = 0x8876038f
                    else
                        int32_t* eax_7 = sub_745f3f(8)
                        
                        if (eax_7 == 0)
                            var_10 = nullptr
                        else
                            *eax_7 = var_20
                            eax_7[1] = 0
                            var_10 = eax_7
                        
                        if (var_10 == 0)
                            esi_5 = 0x8007000e
                        else
                            ecx_3 = var_c_1
                        label_4632cd:
                            
                            if (sub_48647e(ecx_3, &var_10) == 0)
                                sub_460709(var_10, 1)
                                esi_5 = 0x8007000e
                            else if (sub_460813(arg2, arg3, &var_5) == 0)
                                esi_5 = 0x8876038f
                            else
                                if (var_5 != 2)
                                    continue
                                else
                                    int32_t* eax_18 = sub_482491(var_1c, var_14, esi + 0x34, 
                                        *(esi + 8) + 8, var_c_1)
                                    arg3 = eax_18
                                    
                                    if (eax_18 != 0)
                                        goto label_46337d
                                
                                esi_5 = 0x8007000e
                else
                    char* var_18
                    
                    if (var_5 != 1)
                        esi_5 = 0x8876038f
                    else if (sub_4606c9(arg2, arg3, &var_18) == 0)
                        esi_5 = 0x8876038f
                    else
                        char* eax_9 = var_18
                        int32_t ebx_1 = 0
                        
                        if (eax_9 == 0)
                        label_4632aa:
                            int32_t* eax_13 = sub_745f3f(8)
                            
                            if (eax_13 == 0)
                                var_10 = nullptr
                            else
                                *eax_13 = 0
                                eax_13[1] = ebx_1
                                var_10 = eax_13
                            
                            ecx_3 = var_c_1
                            
                            if (var_10 != 0)
                                goto label_4632cd
                            
                            sub_46294a(ecx_3, 1)
                            
                            if (ebx_1 != 0)
                                _free(ebx_1)
                            
                            break
                        
                        void* edx_1 = &eax_9[1]
                        char i
                        
                        do
                            i = *eax_9
                            eax_9 = &eax_9[1]
                        while (i != 0)
                        ebx_1 = _malloc(eax_9 - edx_1 + 1)
                        
                        if (ebx_1 != 0)
                            int32_t esi_3
                            int32_t edi_2
                            edi_2, esi_3 =
                                __builtin_memcpy(ebx_1, var_18, (eax_9 - edx_1 + 1) u>> 2 << 2)
                            __builtin_memcpy(edi_2, esi_3, (eax_9 - edx_1 + 1) & 3)
                            esi = var_24
                            goto label_4632aa
                        
                        esi_5 = 0x8007000e
                sub_46294a(var_c_1, 1)
                return esi_5
        
        eax_4 = 0x8007000e
    
    return eax_4

return 0x8876038f
