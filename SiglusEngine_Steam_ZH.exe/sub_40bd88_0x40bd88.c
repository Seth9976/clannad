// 函数: sub_40bd88
// 地址: 0x40bd88
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_34 = edi
void* edi_1 = arg1
void* var_2c = edi_1
int32_t result = 0
int32_t var_c = 0
int32_t var_10 = 0

if (*(edi_1 + 0x264) != 0)
    int32_t var_24_1 = 0xa
    int32_t esi_1 = sub_745f3f(0x28)
    var_10 = esi_1
    
    if (esi_1 != 0)
        int32_t j_1 = 0
        int32_t i = 0
        
        if (*(edi_1 + 0x264) u> 0)
            int32_t* var_8_1 = nullptr
            int32_t* var_1c_1 = nullptr
            
            do
                if (*(var_1c_1 + *(edi_1 + 0x24c)) != 0xffffffff)
                    int32_t j = *(*(edi_1 + 0x254) + (i << 2))
                    
                    if (j != j_1 || var_8_1 == 0)
                        int32_t eax_5 = 0
                        j_1 = j
                        
                        if (var_8_1 u> 0)
                            while (*(esi_1 + (eax_5 << 2)) != j)
                                eax_5 += 1
                                
                                if (eax_5 u>= var_c)
                                    break
                        
                        if (eax_5 == var_c)
                            if (var_c == var_24_1)
                                int32_t eax_7 = var_24_1 * 2
                                var_24_1 = eax_7
                                int32_t eax_9 = sub_745f3f(eax_7 << 2)
                                
                                if (eax_9 == 0)
                                    goto label_40bdd9
                                
                                int32_t esi_2
                                int32_t edi_3
                                edi_3, esi_2 = __builtin_memcpy(eax_9, esi_1, var_8_1 u>> 2 << 2)
                                __builtin_memcpy(edi_3, esi_2, var_8_1 & 3)
                                j__free(var_10)
                                edi_1 = var_2c
                                var_10 = eax_9
                                esi_1 = eax_9
                            
                            int32_t* eax_12 = var_8_1
                            var_c += 1
                            var_8_1 = &var_8_1[1]
                            *(eax_12 + esi_1) = j
                
                i += 1
                var_1c_1 = &var_1c_1[3]
            while (i u< *(edi_1 + 0x264))
        
        *arg2 = esi_1
        *arg3 = var_c
        var_10 = 0
    else
    label_40bdd9:
        result = 0x8007000e
else
    *arg3 = 0
    *arg2 = 0
    result = 0x80004005

j__free(var_10)
return result
