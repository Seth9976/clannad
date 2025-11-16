// 函数: sub_49bbf0
// 地址: 0x49bbf0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ebx = 0

if (arg3 u> 7 || arg2 u> 1)
    return 

int32_t eax = arg2 + (arg3 << 1)
arg1 = (&data_8d02b4)[eax * 0xb20]

if (arg1 == 0 || (&data_f466f8)[eax] == 0)
    return 

if (arg1 - 1 u> 5)
    goto label_49bedf

int32_t var_14
int32_t var_10
int32_t var_c
int16_t* var_8

switch (arg1)
    case 1, 2, 3, 4
        int32_t eax_2
        
        if (arg5 == 0)
            eax_2 = *(eax * 0x2c80 + 0x8d2f1c) * 0x2c
        label_49bc6a:
            int32_t edi_1 = *(eax_2 + &(&data_8d02b4)[eax * 0xb20] + 0x64)
            
            if (edi_1 != 0xffffffff)
                goto label_49bcaf
            
            void* edx_1 = eax * 0x2c80 + 0x8d0320 + eax_2
            
            if (*edx_1 != 0)
                edi_1 = sub_499a90(eax_2, edx_1, eax | edi_1, 2, 1)
                
                if (edi_1 != 0xffffffff)
                    ebx = 1
                label_49bcaf:
                    int32_t eax_5 = sub_49a330(&var_14, &var_8, edi_1, &var_14, &var_10, &var_c)
                    int32_t ecx_3 = var_14
                    int32_t edx_3 = var_10
                    int32_t var_18 = eax_5
                    int32_t eax_8 = var_18
                    int32_t var_5c
                    int32_t var_58
                    
                    if (eax_8 == 1)
                        int32_t eax_9 = (&data_8d02b4)[eax * 0xb20]
                        
                        if (eax_9 == 1 || eax_9 == 2)
                            int32_t var_34_3 = 1
                            int32_t var_38_3 = var_c
                            int32_t var_3c_3 = edx_3
                            int32_t var_40_2 = ecx_3
                            int16_t* var_44_2 = var_8
                            int32_t var_48_2 = edx_3 - 1
                            int32_t var_4c_2 = ecx_3 - 1
                            int32_t var_50_2 = 0
                            int32_t var_54_2 = 0
                            sub_49b470(ecx_3 - 1, *(eax * 0x2c80 + 0x8d02c8), arg4, 
                                *(eax * 0x2c80 + 0x8d02cc), var_5c, var_58)
                        else
                            int32_t var_34_2 = 1
                            int32_t var_38_2 = var_c
                            int32_t var_3c_2 = edx_3
                            int32_t var_40_1 = ecx_3
                            int16_t* var_44_1 = var_8
                            int32_t var_48_1 = edx_3 - 1
                            int32_t var_4c_1 = ecx_3 - 1
                            int32_t var_50_1 = 0
                            int32_t var_54_1 = 0
                            sub_49b7a0(ecx_3 - 1, *(eax * 0x2c80 + 0x8d02c8), arg4, 
                                *(eax * 0x2c80 + 0x8d02cc), *(eax * 0x2c80 + 0x8d02d0), 
                                *(eax * 0x2c80 + 0x8d02d4))
                    else if (eax_8 == 2)
                        var_8 = nullptr
                        var_18 = 0
                        sub_49a3a0(&var_8, &var_18, edi_1, &var_8)
                        int32_t eax_15 = var_18
                        
                        if (eax_15 != 0)
                            if (sub_49b2f0(eax_15, &(&data_8d02b4)[eax * 0xb20], arg4, eax_15, 
                                    var_8, var_14, var_10, var_c) != 0)
                                sub_564200(arg4)
                            else
                                int32_t eax_17 = (&data_8d02b4)[eax * 0xb20]
                                
                                if (eax_17 == 1 || eax_17 == 2)
                                    int32_t var_34_7 = 1
                                    int32_t var_38_6 = var_c
                                    int32_t var_3c_6 = var_10
                                    int32_t var_40_5 = var_14
                                    int16_t* var_44_5 = var_8
                                    int32_t var_48_4 = edx_3 - 1
                                    int32_t var_4c_4 = ecx_3 - 1
                                    int32_t var_50_4 = 0
                                    int32_t var_54_4 = 0
                                    sub_49b470(ecx_3 - 1, *(eax * 0x2c80 + 0x8d02c8), arg4, 
                                        *(eax * 0x2c80 + 0x8d02cc), var_5c, var_58)
                                    sub_4d6c40(&var_18, &var_8)
                                else
                                    int32_t var_34_6 = 1
                                    int32_t var_38_5 = var_c
                                    int32_t var_3c_5 = var_10
                                    int32_t var_40_4 = var_14
                                    int16_t* var_44_4 = var_8
                                    int32_t var_48_3 = edx_3 - 1
                                    int32_t var_4c_3 = ecx_3 - 1
                                    int32_t var_50_3 = 0
                                    int32_t var_54_3 = 0
                                    sub_49b7a0(ecx_3 - 1, *(eax * 0x2c80 + 0x8d02c8), arg4, 
                                        *(eax * 0x2c80 + 0x8d02cc), *(eax * 0x2c80 + 0x8d02d0), 
                                        *(eax * 0x2c80 + 0x8d02d4))
                                    sub_4d6c40(&var_18, &var_8)
                    
                    if (ebx != 0 && edi_1 u<= 0x3ff)
                        *(edi_1 * 0x2c + &data_8c52dc) -= 1
                        
                        if (*(edi_1 * 0x2c + &data_8c52dc) s<= 0)
                            sub_4d6c40(edi_1 * 0x34 + &data_f2e6f8, edi_1 * 0x34 + &data_f2e6fc)
                            sub_4997c0(edi_1)
            
            goto label_49bedf
        
        arg1 = (&data_8d2f28)[eax * 0xb20]
        
        if (arg1 != 0xffffffff)
            eax_2 = arg1 * 0x2c
            goto label_49bc6a
    case 5, 6
        if (arg5 == 0)
            arg1 = *(eax * 0x2c80 + 0x8d2f1c) * 0x2c
        label_49be8a:
            int32_t ecx_16 = *(arg1 + &(&data_8d02b4)[eax * 0xb20] + 0x64)
            
            if (ecx_16 != 0xffffffff)
                arg1 = sub_49a330(&var_14, &var_8, ecx_16, &var_14, &var_10, &var_c)
                
                if (arg1 == 1)
                    sub_49b930(arg1, *(eax * 0x2c80 + 0x8d02c8), arg4, *(eax * 0x2c80 + 0x8d02cc), 
                        *(eax * 0x2c80 + 0x8d02d0), *(eax * 0x2c80 + 0x8d02d4), 
                        *(eax * 0x2c80 + 0x8d02f8), *(eax * 0x2c80 + 0x8d02fc), var_8, var_14, 
                        var_10, var_c, arg1)
                label_49bedf:
                    (&data_8d2f28)[eax * 0xb20] = *(eax * 0x2c80 + 0x8d2f1c)
                    *(eax * 0x2c80 + 0x8d2f2c) = *(eax * 0x2c80 + 0x8d02f8)
                    *(eax * 0x2c80 + 0x8d2f30) = *(eax * 0x2c80 + 0x8d02fc)
                    (&data_f466f8)[eax] = 0
        else
            arg1 = (&data_8d2f28)[eax * 0xb20]
            
            if (arg1 != 0xffffffff)
                arg1 *= 0x2c
                goto label_49be8a
