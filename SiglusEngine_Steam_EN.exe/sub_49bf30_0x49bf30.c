// 函数: sub_49bf30
// 地址: 0x49bf30
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = arg1
int32_t i = 0
int32_t result_1 = result
void* ebx = &(&data_f466f8)[result]
int32_t* esi_1 = result * 0x2c80 + 0x8d02d0

do
    int32_t var_30_1 = 0
    
    if (i u<= 7 && result u<= 1)
        int32_t eax = esi_1[-7]
        
        if (eax != 0 && *ebx != 0)
            if (eax - 1 u> 5)
                goto label_49c20b
            
            int32_t var_68
            int32_t var_18
            int32_t var_10
            int32_t var_c
            int16_t* var_8
            
            switch (eax)
                case 1, 2, 3, 4
                    void* edx_1 = esi_1[0xb13] * 0x2c + &esi_1[-7]
                    int32_t eax_2 = *(edx_1 + 0x64)
                    int32_t var_24_1 = eax_2
                    
                    if (eax_2 != 0xffffffff)
                        goto label_49bff3
                    
                    if (*(edx_1 + 0x6c) != 0)
                        eax_2 = sub_499a90(eax_2, edx_1 + 0x6c, &esi_1[-7] | eax_2, 2, 1)
                        var_24_1 = eax_2
                        
                        if (eax_2 != 0xffffffff)
                            var_30_1 = 1
                        label_49bff3:
                            int32_t eax_3 =
                                sub_49a330(eax_2, &var_8, eax_2, &var_18, &var_c, &var_10)
                            int32_t ecx_3 = var_18
                            int32_t var_28 = eax_3
                            int32_t eax_6 = var_c - 1
                            int32_t eax_7 = var_28
                            int32_t var_6c
                            
                            if (eax_7 == 1)
                                int32_t eax_8 = esi_1[-7]
                                
                                if (eax_8 == 1 || eax_8 == 2)
                                    int32_t var_44_3 = 1
                                    int32_t var_48_3 = var_10
                                    int32_t var_4c_3 = var_c
                                    int32_t var_50_2 = ecx_3
                                    int16_t* var_54_2 = var_8
                                    int32_t var_58_2 = eax_6
                                    int32_t var_5c_2 = ecx_3 - 1
                                    int32_t var_60_2 = 0
                                    int32_t var_64_2 = 0
                                    sub_49b470(ecx_3 - 1, esi_1[-2], arg2, esi_1[-1], var_6c, 
                                        var_68)
                                else
                                    int32_t var_44_2 = 1
                                    int32_t var_48_2 = var_10
                                    int32_t var_4c_2 = var_c
                                    int32_t var_50_1 = ecx_3
                                    int16_t* var_54_1 = var_8
                                    int32_t var_58_1 = eax_6
                                    int32_t var_5c_1 = ecx_3 - 1
                                    int32_t var_60_1 = 0
                                    int32_t var_64_1 = 0
                                    var_68 = esi_1[1]
                                    var_6c = *esi_1
                                    sub_49b7a0(ecx_3 - 1, esi_1[-2], arg2, esi_1[-1], var_6c, 
                                        var_68)
                            else if (eax_7 == 2)
                                var_8 = nullptr
                                var_28 = 0
                                sub_49a3a0(&var_8, &var_28, var_24_1, &var_8)
                                int32_t eax_12 = var_28
                                
                                if (eax_12 != 0)
                                    if (sub_49b2f0(eax_12, &esi_1[-7], arg2, eax_12, var_8, var_18, 
                                            var_c, var_10) != 0)
                                        sub_564200(arg2)
                                    else
                                        int32_t eax_14 = esi_1[-7]
                                        
                                        if (eax_14 == 1 || eax_14 == 2)
                                            int32_t var_44_7 = 1
                                            int32_t var_48_6 = var_10
                                            int32_t var_4c_6 = var_c
                                            int32_t var_50_5 = var_18
                                            int16_t* var_54_5 = var_8
                                            int32_t var_58_4 = eax_6
                                            int32_t var_5c_4 = ecx_3 - 1
                                            int32_t var_60_4 = 0
                                            int32_t var_64_4 = 0
                                            sub_49b470(ecx_3 - 1, esi_1[-2], arg2, esi_1[-1], 
                                                var_6c, var_68)
                                            sub_4d6c40(&var_28, &var_8)
                                        else
                                            int32_t var_44_6 = 1
                                            int32_t var_48_5 = var_10
                                            int32_t var_4c_5 = var_c
                                            int32_t var_50_4 = var_18
                                            int16_t* var_54_4 = var_8
                                            int32_t var_58_3 = eax_6
                                            int32_t var_5c_3 = ecx_3 - 1
                                            int32_t var_60_3 = 0
                                            int32_t var_64_3 = 0
                                            var_68 = esi_1[1]
                                            var_6c = *esi_1
                                            sub_49b7a0(ecx_3 - 1, esi_1[-2], arg2, esi_1[-1], 
                                                var_6c, var_68)
                                            sub_4d6c40(&var_28, &var_8)
                            
                            if (var_30_1 != 0 && var_24_1 u<= 0x3ff)
                                *(var_24_1 * 0x2c + &data_8c52dc) -= 1
                                
                                if (*(var_24_1 * 0x2c + &data_8c52dc) s<= 0)
                                    sub_4d6c40(var_24_1 * 0x34 + &data_f2e6f8, 
                                        var_24_1 * 0x34 + &data_f2e6fc)
                                    sub_4997c0(var_24_1)
                    
                    goto label_49c20b
                case 5, 6
                    int32_t ecx_17 = esi_1[esi_1[0xb13] * 0xb + 0x12]
                    
                    if (ecx_17 != 0xffffffff)
                        int32_t eax_25 =
                            sub_49a330(&var_18, &var_8, ecx_17, &var_18, &var_c, &var_10)
                        
                        if (eax_25 == 1)
                            var_68 = esi_1[-1]
                            sub_49b930(eax_25, esi_1[-2], arg2, var_68, *esi_1, esi_1[1], 
                                esi_1[0xa], esi_1[0xb], var_8, var_18, var_c, var_10, eax_25)
                        label_49c20b:
                            esi_1[0xb16] = esi_1[0xb13]
                            esi_1[0xb17] = esi_1[0xa]
                            esi_1[0xb18] = esi_1[0xb]
                            *ebx = 0
        
        result = result_1
    
    i += 1
    esi_1 = &esi_1[0x1640]
    ebx += 8
while (i s< 8)

return result
