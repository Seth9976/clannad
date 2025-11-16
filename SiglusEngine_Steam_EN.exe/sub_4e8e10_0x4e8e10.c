// 函数: sub_4e8e10
// 地址: 0x4e8e10
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* var_8 = arg1

if (arg2 != 0)
    *arg2 = arg1

int32_t* edx = &var_8
char* var_14

if (sub_4e72b0(&var_14, edx, arg1, &var_14) == 1)
    char* edi_1 = var_14
    int32_t var_10
    int32_t* var_28_1 = &var_10
    
    if (sub_4e7460(&var_10, edx, var_8, edi_1) != 0)
        char* ecx_1 = var_8
        int32_t eax_3
        eax_3.b = *ecx_1
        
        if (eax_3.b != 0 && eax_3.b != 0xa && eax_3.b == 0x5c)
            eax_3.b = ecx_1[1]
            
            if (eax_3.b u>= 0x14 && eax_3.b u<= 0x27)
                var_8 = &ecx_1[2]
                int32_t eax_5 = sub_4e8c00(&var_14, &var_8, &ecx_1[2], &var_14, 0)
                
                if (eax_5 != 0)
                    int32_t edx_2 = var_10
                    int32_t var_c
                    
                    if (zx.d(eax_3.b) != 0x1e)
                        if (sub_4e76e0(&var_c, edx_2, edi_1, &var_c, &data_704898) != 0)
                            sub_4e8000(
                                sub_4e73a0(&var_c, var_c, zx.d(eax_3.b) - 0x14, var_14, &var_c), 
                                var_10, edi_1, var_c, &data_704898)
                    else
                        sub_4e8000(eax_5, edx_2, edi_1, var_14, &data_704898)
                    
                    if (arg2 != 0)
                        *arg2 = var_8
                    
                    return 1

return 0
