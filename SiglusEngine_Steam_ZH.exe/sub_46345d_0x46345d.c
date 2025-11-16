// 函数: sub_46345d
// 地址: 0x46345d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t __security_cookie_1 = __security_cookie
int32_t edi
int32_t var_34 = edi
void var_18
char eax = sub_4607e7(arg2, arg3, &var_18)
char* var_2c
char eax_1

if (eax != 0)
    eax_1 = sub_4606c9(arg2, arg3, &var_2c)

int32_t result

if (eax != 0 && eax_1 != 0)
    int32_t* eax_2 = sub_745f3f(0x10)
    int32_t* esi_1 = nullptr
    int32_t* var_20_1
    
    if (eax_2 == 0)
        var_20_1 = nullptr
    else
        *eax_2 = 0
        eax_2[1] = 0
        eax_2[2] = 0xa
        eax_2[3] = 0
        var_20_1 = eax_2
    
    if (var_20_1 != 0)
        while (true)
            char var_19
            int32_t result_1
            
            if (sub_460813(arg2, arg3, &var_19) != 0)
                if (var_19 == 2)
                    if (sub_460813(arg2, arg3, &var_19) != 0)
                        int32_t result_2
                        
                        if (var_19 == 3)
                        label_46358d:
                            int32_t** eax_7 = sub_745f3f(0xc)
                            int32_t** ebx_1 = nullptr
                            int32_t** var_24_1
                            
                            if (eax_7 == 0)
                                var_24_1 = nullptr
                            else
                                *eax_7 = var_20_1
                                int32_t ecx_6 = neg.d(esi_1)
                                eax_7[1] = esi_1
                                eax_7[2] = sbb.d(ecx_6, ecx_6, esi_1 != 0) & 2
                                var_24_1 = eax_7
                            
                            if (var_24_1 == 0)
                                sub_462908(var_20_1, 1)
                                
                                if (esi_1 != 0)
                                    sub_462929(esi_1, 1)
                                
                                break
                            
                            if (var_2c != 0)
                                char* eax_8 = var_2c
                                void* edx_1 = &eax_8[1]
                                int32_t ecx_3
                                
                                do
                                    ecx_3.b = *eax_8
                                    eax_8 = &eax_8[1]
                                while (ecx_3.b != 0)
                                ebx_1 = _malloc(eax_8 - edx_1 + 1)
                                
                                if (ebx_1 == 0)
                                    j__free(var_24_1)
                                    break
                                
                                int32_t esi_4
                                int32_t edi_3
                                edi_3, esi_4 =
                                    __builtin_memcpy(ebx_1, var_2c, (eax_8 - edx_1 + 1) u>> 2 << 2)
                                __builtin_memcpy(edi_3, esi_4, (eax_8 - edx_1 + 1) & 3)
                            
                            void*** eax_12 = sub_745f3f(0x34)
                            void*** esi_5
                            
                            if (eax_12 == 0)
                                esi_5 = nullptr
                            else
                                esi_5 = sub_4825e8(eax_12, ebx_1, &var_18, var_24_1)
                            
                            j__free(var_24_1)
                            
                            if (esi_5 == 0)
                                if (ebx_1 != 0)
                                    _free(ebx_1)
                                
                                break
                            
                            if (sub_482843(&arg1[0xd], esi_5) != 0)
                                result_2 = 0
                            else
                                result_2 = 0x8007000e
                            
                            sub_46051a(esi_5)
                        else
                            int32_t* eax_5 = sub_745f3f(0x10)
                            
                            if (eax_5 == 0)
                                esi_1 = nullptr
                            else
                                *eax_5 = 0
                                eax_5[1] = 0
                                eax_5[2] = 5
                                eax_5[3] = 0
                                esi_1 = eax_5
                            
                            if (esi_1 == 0)
                                result_1 = 0x8007000e
                            label_4636cc:
                                sub_462908(var_20_1, 1)
                                result = result_1
                                goto label_4636d9
                            
                            while (true)
                                if (var_19 == 2)
                                    goto label_46358d
                                
                                char var_3c_5
                                
                                if (var_19 != 0)
                                    if (var_19 == 1)
                                        var_3c_5 = 0
                                        goto label_46356d
                                    
                                    result_2 = 0x8876038f
                                else
                                    var_3c_5 = 1
                                label_46356d:
                                    int32_t result_4 = sub_461621(arg1, arg2, arg3, esi_1, var_3c_5)
                                    
                                    if (result_4 s< 0)
                                        result_2 = result_4
                                    else
                                        if (sub_460813(arg2, arg3, &var_19) != 0)
                                            continue
                                        
                                        sub_462908(var_20_1, 1)
                                        sub_462929(esi_1, 1)
                                        result = 0x8876038f
                                        goto label_4636d9
                                sub_462908(var_20_1, 1)
                                sub_462929(esi_1, 1)
                                break
                        
                        result = result_2
                        goto label_4636d9
                else if (var_19 == 0)
                    int32_t result_3 = sub_463154(arg1, arg2, arg3, var_20_1)
                    
                    if (result_3 s>= 0)
                        continue
                    
                    result_1 = result_3
                    goto label_4636cc
            
            result_1 = 0x8876038f
            goto label_4636cc
    
    result = 0x8007000e
else
    result = 0x8876038f

label_4636d9:
sub_745f2b(__security_cookie_1)
return result
