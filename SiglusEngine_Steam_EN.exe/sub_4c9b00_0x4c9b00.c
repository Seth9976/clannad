// 函数: sub_4c9b00
// 地址: 0x4c9b00
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* var_c
int32_t var_8
char* ecx
int32_t edx

if (sub_4c9960(&var_c, edx, ecx, &var_c, &var_8) == 0)
    return 0

int32_t edx_1 = var_8
int32_t ecx_1 = 0

if (edx_1 s> 0)
    int32_t* eax_4 = var_c + 8
    
    do
        if (*eax_4 == arg1)
            return 1
        
        ecx_1 += 1
        eax_4 = &eax_4[4]
    while (ecx_1 s< edx_1)

return 0
