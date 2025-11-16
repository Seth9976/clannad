// 函数: sub_41cac0
// 地址: 0x41cac0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx

for (int32_t i = 0; i s< 0x50; i += 4)
    char* edi_1 = *(i + &data_6105a0)
    int32_t eax_1
    
    if (edi_1 != 0)
        int32_t edx_1 = 0
        char* eax_2 = edi_1
        
        if (*edi_1 != 0)
            do
                ecx.b = *eax_2
                
                if (ecx.b u< 0x80)
                    edx_1 += 1
                    eax_2 = &eax_2[1]
                else if (ecx.b u< 0xa0)
                    if (ecx.b u>= 0xfe)
                        edx_1 += 1
                        eax_2 = &eax_2[1]
                    else
                        edx_1 += 2
                        eax_2 = &eax_2[2]
                else if (ecx.b u<= 0xdf || ecx.b u>= 0xfe)
                    edx_1 += 1
                    eax_2 = &eax_2[1]
                else
                    edx_1 += 2
                    eax_2 = &eax_2[2]
            while (*eax_2 != 0)
        
        if (edx_1 + 1 s> 0)
            eax_1, ecx = sub_41c010(edi_1, edx_1 + 1)
        else
            eax_1 = 0xffffffff
    else
        eax_1 = 0xffffffff
    
    *(i + &data_134ce6c) = eax_1

int32_t var_1c = ecx
int32_t var_c = 0
void* var_8 = nullptr
void* var_10
int32_t result = sub_41c1b0(&var_10, &var_8, &var_c, &var_10)

if (result == 0)
    return result

void* esi = var_8
int32_t eax_4 = sub_41c5d0(esi, 0)
data_134ce60 = eax_4

if (eax_4 s> 0)
    int32_t eax_5 = eax_4 << 5
    sub_4d6960(eax_5, &data_134ce68, &data_134ce64, eax_5, "AVG_FLAG_INI")
    int32_t i_1 = 0
    
    if (data_134ce60 s> 0)
        int32_t* eax_7 = data_134ce68 + 0x1c
        
        do
            *eax_7 = 0xffffffff
            eax_7 = &eax_7[8]
            i_1 += 1
        while (i_1 s< data_134ce60)
    
    sub_41c5d0(esi, 1)

return sub_4d6c40(&var_c, &var_8)
