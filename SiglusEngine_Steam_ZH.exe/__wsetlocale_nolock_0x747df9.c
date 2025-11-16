// 函数: __wsetlocale_nolock
// 地址: 0x747df9
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
int16_t* esi = arg3
void* result

if (arg2 == 0)
    int32_t var_1c4_1 = 1
    int32_t ebx_1 = 0
    int32_t var_1c8_1 = 0
    
    if (esi == 0)
        result = __wsetlocale_get_all(arg1)
    else
        int16_t var_110[0x84]
        
        if (*esi != 0x4c || esi[1] != 0x43 || esi[2] != 0x5f)
            void var_1bc
            result = sub_7477d9(esi, &var_110, 0x83, &var_1bc, 0x55, nullptr)
            
            if (result != 0)
                void* eax_12 = arg1 + 0x14
                int32_t i = 0
                void* var_1c0_3 = eax_12
                int32_t ecx_8
                
                do
                    if (i == 0)
                        ecx_8 = var_1c4_1
                    else if (_wcscmp(&var_110, *eax_12) == 0)
                        eax_12 = var_1c0_3
                        ebx_1 += 1
                        ecx_8 = var_1c4_1
                    else
                        eax_12 = var_1c0_3
                        
                        if (sub_748082(arg1, i, &var_110) != 0)
                            ebx_1 += 1
                            ecx_8 = var_1c4_1
                        else
                            ecx_8 = 0
                            var_1c4_1 = 0
                    
                    i += 1
                    eax_12 += 0x10
                    var_1c0_3 = eax_12
                while (i s<= 5)
                
                if (ecx_8 != 0 || ebx_1 != 0)
                    result = __wsetlocale_get_all(arg1)
                else
                label_747fbe:
                    result = nullptr
        else
            while (true)
                int16_t* eax_4 = sub_753dd3(esi, &data_aad170)
                
                if (eax_4 == 0)
                    goto label_747fbe
                
                int32_t ecx_4 = (eax_4 - esi) s>> 1
                
                if (ecx_4 == 0)
                    goto label_747fbe
                
                if (*eax_4 == 0x3b)
                    goto label_747fbe
                
                int16_t** i_1 = &data_aad034
                int32_t var_1c4_2 = 1
                
                do
                    if (_wcsncmp(*i_1, esi, ecx_4) == 0 && ecx_4 == _wcslen(*i_1))
                        break
                    
                    var_1c4_2 += 1
                    i_1 = &i_1[3]
                while (i_1 s<= &data_aad064)
                
                int32_t eax_7 = sub_753d1a(&eax_4[1], &data_aad178)
                int32_t ebx_2 = var_1c8_1
                
                if (eax_7 == 0 && eax_4[1] != 0x3b)
                    goto label_747fbe
                
                if (var_1c4_2 s<= 5)
                    if (_wcsncpy_s(&var_110, 0x83, &eax_4[1], eax_7) != 0)
                        int32_t var_1f0_2
                        __builtin_memset(&var_1f0_2, 0, 0x14)
                        __invoke_watson()
                        noreturn
                    
                    if (eax_7 * 2 u>= 0x106)
                        ___report_rangecheckfailure()
                        noreturn
                    
                    var_110[eax_7] = 0
                    
                    if (sub_748082(arg1, var_1c4_2, &var_110) != 0)
                        ebx_2 += 1
                        var_1c8_1 = ebx_2
                
                void* esi_3 = &eax_4[1 + eax_7]
                result = nullptr
                
                if (*esi_3 != 0)
                    esi = esi_3 + 2
                    
                    if (*esi != 0)
                        continue
                
                if (ebx_2 != 0)
                    break
                
                goto label_748067
            
            result = __wsetlocale_get_all(arg1)
else if (esi == 0)
    result = *(arg1 + arg2 * 0x10 + 0x14)
else
    result = sub_748082(arg1, arg2, esi)

label_748067:
sub_745f2b(eax_1 ^ &__saved_ebp)
return result
