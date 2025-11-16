// 函数: sub_7fb480
// 地址: 0x7fb480
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
void* var_134
void* edi = var_134
int32_t i_2
int32_t i_1 = i_2
int32_t result
int32_t i

do
    int32_t j_2
    int32_t j_1 = j_2
    int32_t j
    
    do
        char* var_124
        int32_t ebx_1
        ebx_1.b = var_124[2]
        int32_t eax_3
        eax_3.b = *(edi + 2)
        int32_t var_118
        int32_t var_e0
        int32_t var_d4
        int32_t eax_4 = eax_3 - *(((var_e0 + *(((ebx_1 - var_e0) << 2) + var_d4)) << 2) + var_118)
        
        if (eax_4 s< 0)
            eax_4 = 0
        
        *(edi + 2) = eax_4.b
        int32_t ebx_9
        ebx_9.b = var_124[1]
        int32_t eax_7
        eax_7.b = *(edi + 1)
        int32_t var_dc
        int32_t eax_8 = eax_7 - *(((var_dc + *(((ebx_9 - var_dc) << 2) + var_d4)) << 2) + var_118)
        
        if (eax_8 s< 0)
            eax_8 = 0
        
        *(edi + 1) = eax_8.b
        int32_t ebx_17
        ebx_17.b = *var_124
        int32_t eax_11
        eax_11.b = *edi
        int32_t var_d8
        result = eax_11 - *(((var_d8 + *(((ebx_17 - var_d8) << 2) + var_d4)) << 2) + var_118)
        
        if (result s< 0)
            result = 0
        
        *edi = result.b
        edi += 4
        j = j_1
        j_1 -= 1
    while (j != 1)
    int32_t var_130
    edi += var_130
    i = i_1
    i_1 -= 1
while (i != 1)
return result
