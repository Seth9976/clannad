// 函数: sub_4c94a0
// 地址: 0x4c94a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void var_10
int32_t var_c
int16_t* var_8
char* ecx
int32_t edx

if (sub_4c92c0(&var_8, edx, ecx, &var_8, &var_c, &var_10) == 0)
    return 0

int16_t* edx_1 = var_8
int32_t eax_3 = 0
int32_t esi = var_c

if (esi s> 0)
    do
        if (zx.d(*edx_1) == arg1)
            return 1
        
        eax_3 += 1
        edx_1 = &edx_1[4]
    while (eax_3 s< esi)

return 0
