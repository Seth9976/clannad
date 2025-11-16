// 函数: sub_53f9b0
// 地址: 0x53f9b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t __saved_ebp
int32_t eax_1 = __security_cookie ^ &__saved_ebp
char* ecx = *(arg2 + 0x20)
void* esi = arg2 + 0x20
int32_t* var_50 = nullptr
void* var_58 = esi
char** result
int32_t i
result, i = sub_4ef190(eax_1, esi, ecx, "$$@", &data_1b8a720)
int32_t ebx = data_1b8a720
int32_t edi = data_1b8a734
int32_t var_48 = ebx
int32_t var_4c = edi

if (ebx u<= 7)
    int32_t i_1 = 0
    
    if (data_1b8c884 s> 0)
        do
            char* eax_2 = *esi
            
            while (*eax_2 == 0xa)
                eax_2 = &eax_2[3]
                *esi = eax_2
            
            *esi += 1
            char* eax_3 = *esi
            int32_t var_40_1 = 0
            int32_t var_3c_1 = 0
            int32_t var_2c_1 = 0
            uint32_t edx_1 = zx.d(*eax_3)
            int32_t var_28_1 = 0
            int32_t var_18_1 = 0
            int32_t var_14_1 = 0
            *esi = &eax_3[1]
            int32_t var_44
            int32_t* var_24
            int32_t var_20
            int32_t j_4
            
            switch (edx_1)
                case 0
                    int32_t eax_6 = sub_41b8f0(sub_4ef190(&var_44, esi, &eax_3[1], "$%", &var_44), 
                        edi, ebx, var_44)
                    sub_4e8000(eax_6, var_20, var_24, eax_6, &data_704898)
                case 1
                    sub_4ef190(&var_44, esi, &eax_3[1], "$&", &var_44)
                    sub_4a4620(sub_41b980(&var_50, edi, ebx, var_44, &var_50), var_50, var_20, 
                        var_24)
                case 2
                    sub_4ef190(&var_44, esi, &eax_3[1], "$%$", &var_44)
                    int32_t j_2 = j_4
                    
                    if (j_2 s<= 0)
                        ebx = var_48
                    else
                        int32_t edi_1 = var_20
                        int32_t esi_2 = var_44 - edi_1
                        int32_t j
                        
                        do
                            int32_t eax_11 = esi_2 + edi_1
                            int32_t eax_12 = sub_41b8f0(eax_11, var_4c, var_48, eax_11)
                            sub_4e8000(eax_12, edi_1, var_24, eax_12, &data_704898)
                            edi_1 += 1
                            j = j_2
                            j_2 -= 1
                        while (j != 1)
                    label_53fb7b:
                        edi = var_4c
                        esi = var_58
                        ebx = var_48
                case 3
                    sub_4ef190(&var_44, esi, &eax_3[1], "$&$", &var_44)
                    int32_t j_3 = j_4
                    
                    if (j_3 s> 0)
                        int32_t edi_2 = var_20
                        int32_t esi_4 = var_44 - edi_2
                        int32_t j_1
                        
                        do
                            int32_t eax_14 = edi_2 + esi_4
                            sub_4a4620(sub_41b980(eax_14, var_4c, var_48, eax_14, &var_50), var_50, 
                                edi_2, var_24)
                            edi_2 += 1
                            j_1 = j_3
                            j_3 -= 1
                        while (j_1 != 1)
                        goto label_53fb7b
                    
                    ebx = var_48
            
            char* eax_16 = *esi
            
            while (true)
                char* ecx_2
                ecx_2.b = *eax_16
                
                if (ecx_2.b != 0x2c && ecx_2.b != 0x20)
                    break
                
                eax_16 = &eax_16[1]
            
            *esi = eax_16
            sub_4eef40(&var_44, 3)
            i = i_1 + 1
            i_1 = i
        while (i s< data_1b8c884)
    
    result = *esi
    
    while (*result == 0xa)
        result += 3
        *esi = result
    
    *esi += 1

sub_5f02dd(eax_1 ^ &__saved_ebp)
return result
