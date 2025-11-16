// 函数: sub_748082
// 地址: 0x748082
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
void* eax_3 = &__getptd()[0xb1]
int32_t var_2d8
int16_t var_2bc[0x56]
int16_t var_110
int32_t result

if (sub_7477d9(arg3, &var_110, 0x83, &var_2bc, 0x55, &var_2d8) != 0)
    int32_t ebx_1 = arg2 << 4
    int32_t var_2dc_1 = ebx_1
    
    if (_wcscmp(&var_110, *(ebx_1 + arg1 + 0x14)) != 0)
        int32_t esi_1 = _wcslen(&var_110) + 1
        int32_t* eax_7 = sub_74cd17((esi_1 << 1) + 4)
        
        if (eax_7 == 0)
            result = 0
        else
            int32_t eax_8 = *(ebx_1 + arg1 + 0x14)
            int32_t eax_10 = *(arg1 + (arg2 << 2) + 0xa0)
            int32_t eax_11 = *(arg1 + 4)
            
            if (_wcscpy_s(&eax_7[1], esi_1, &var_110) != 0)
                int32_t var_30c_1
                __builtin_memset(&var_30c_1, 0, 0x14)
                __invoke_watson()
                noreturn
            
            bool cond:0_1 = var_110 != 0x43
            *(ebx_1 + arg1 + 0x14) = &eax_7[1]
            int16_t var_10e
            int32_t edx_1
            
            if (cond:0_1 || var_10e != 0)
                edx_1 = arg2
                *(arg1 + (edx_1 << 2) + 0xa0) = ___copy_locale_name(&var_2bc)
            else
                edx_1 = arg2
                *(arg1 + (edx_1 << 2) + 0xa0) = 0
            
            if (edx_1 == 2)
                *(arg1 + 4) = var_2d8
                void* var_2cc_1 = eax_3
                int32_t var_2d4_1 = *(eax_3 + 0x20)
                int32_t var_2d0_2 = *(eax_3 + 0x24)
                int32_t ecx_10 = 0
                int32_t var_2c4_1 = 0
                int32_t eax_19
                void* ecx_14
                
                while (true)
                    edx_1 = arg2
                    
                    if (*(arg1 + 4) != *var_2cc_1)
                        void* ecx_11 = var_2cc_1
                        void* edx_3 = var_2cc_1
                        var_2cc_1 += 8
                        int32_t eax_18 = *ecx_11
                        int32_t ecx_12 = *(ecx_11 + 4)
                        *edx_3 = var_2d4_1
                        int32_t ebx_3 = var_2d0_2
                        var_2d0_2 = ecx_12
                        ecx_10 = var_2c4_1 + 1
                        *(edx_3 + 4) = ebx_3
                        ebx_1 = var_2dc_1
                        edx_1 = arg2
                        var_2d4_1 = eax_18
                        var_2c4_1 = ecx_10
                        
                        if (ecx_10 s< 5)
                            continue
                    else if (ecx_10 != 0)
                        ecx_14 = eax_3
                        *ecx_14 = *(ecx_14 + (var_2c4_1 << 3))
                        *(ecx_14 + 4) = *(ecx_14 + (var_2c4_1 << 3) + 4)
                        eax_19 = var_2c4_1
                        *(ecx_14 + (eax_19 << 3)) = var_2d4_1
                        *(ecx_14 + (eax_19 << 3) + 4) = var_2d0_2
                        ebx_1 = var_2dc_1
                        break
                    
                    eax_19 = var_2c4_1
                    ecx_14 = eax_3
                    break
                
                if (eax_19 == 5)
                    int16_t var_210[0x80]
                    
                    if (___crtGetStringTypeA(nullptr, 1, 0xaad0f0, 0x7f, &var_210, *(arg1 + 4), 1)
                            == 0)
                        ecx_14 = eax_3
                        *(ecx_14 + 4) = 0
                    else
                        for (int32_t i = 0; i u< 0x7f; i += 1)
                            var_210[i] &= 0x1ff
                        
                        void* eax_21 = sub_7524f8(&var_210, data_b4c170, 0xfe)
                        ecx_14 = eax_3
                        int32_t eax_22 = neg.d(eax_21)
                        *(ecx_14 + 4) = sbb.d(eax_22, eax_22, eax_21 != 0) + 1
                    
                    edx_1 = arg2
                    *ecx_14 = *(arg1 + 4)
                
                *(arg1 + 0x70) = *(ecx_14 + 4)
            else if (edx_1 == 1)
                *(arg1 + 8) = var_2d8
            else if (edx_1 == 5)
                *(arg1 + 0xc) = var_2d8
            
            if ((&data_aad030)[edx_1 * 3](arg1) == 0)
                if (eax_8 != &data_b4c9c4)
                    int32_t* eax_39 = *(ebx_1 + arg1 + 0x1c)
                    bool cond:3_1 = *eax_39 != 1
                    *eax_39
                    *eax_39 -= 1
                    
                    if (not(cond:3_1))
                        _free(*(ebx_1 + arg1 + 0x1c))
                        _free(*(ebx_1 + arg1 + 0x18))
                        _free(*(arg1 + (arg2 << 2) + 0xa0))
                        *(ebx_1 + arg1 + 0x14) = 0
                        *(arg1 + (arg2 << 2) + 0xa0) = 0
                
                *eax_7 = 1
                *(ebx_1 + arg1 + 0x1c) = eax_7
                result = *(ebx_1 + arg1 + 0x14)
            else
                *(ebx_1 + arg1 + 0x14) = eax_8
                _free(*(arg1 + (arg2 << 2) + 0xa0))
                *(arg1 + (arg2 << 2) + 0xa0) = eax_10
                _free(eax_7)
                *(arg1 + 4) = eax_11
                result = 0
    else
        result = *(ebx_1 + arg1 + 0x14)
else
    result = 0

sub_745f2b(eax_1 ^ &__saved_ebp)
return result
