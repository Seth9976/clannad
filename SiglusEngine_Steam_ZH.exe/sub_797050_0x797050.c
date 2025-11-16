// 函数: sub_797050
// 地址: 0x797050
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
void* var_134
void* edi = var_134
void* var_124
void* esi_1 = var_124
int32_t i_2
int32_t i_1 = i_2
int32_t result
int32_t i

do
    int32_t j_2
    int32_t j_1 = j_2
    int32_t j
    
    do
        int32_t ebx_1
        ebx_1.b = *(esi_1 + 2)
        int32_t eax_3
        eax_3.b = *(edi + 2)
        int32_t var_118
        int32_t var_f8
        int32_t var_ec
        int32_t eax_4 = eax_3 - *(((var_f8 + *(((ebx_1 - var_f8) << 2) + var_ec)) << 2) + var_118)
        
        if (eax_4 s< 0)
            eax_4 = 0
        
        *(edi + 2) = eax_4.b
        int32_t ebx_9
        ebx_9.b = *(esi_1 + 1)
        int32_t eax_7
        eax_7.b = *(edi + 1)
        int32_t var_f4
        int32_t var_e8
        int32_t eax_8 = eax_7 - *(((var_f4 + *(((ebx_9 - var_f4) << 2) + var_e8)) << 2) + var_118)
        
        if (eax_8 s< 0)
            eax_8 = 0
        
        *(edi + 1) = eax_8.b
        int32_t ebx_17
        ebx_17.b = *esi_1
        int32_t eax_11
        eax_11.b = *edi
        int32_t var_f0
        int32_t var_e4
        result = eax_11 - *(((var_f0 + *(((ebx_17 - var_f0) << 2) + var_e4)) << 2) + var_118)
        
        if (result s< 0)
            result = 0
        
        *edi = result.b
        esi_1 += 4
        edi += 4
        j = j_1
        j_1 -= 1
    while (j != 1)
    int32_t var_120
    esi_1 += var_120
    int32_t var_130
    edi += var_130
    i = i_1
    i_1 -= 1
while (i != 1)
return result
