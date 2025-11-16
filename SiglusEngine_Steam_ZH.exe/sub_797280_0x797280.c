// 函数: sub_797280
// 地址: 0x797280
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
        int32_t eax_5
        eax_5.b = *(edi + 2)
        int32_t var_f8
        int32_t var_ec
        int32_t var_e0
        int32_t var_d4
        int32_t eax_6 = eax_5
            - (var_f8 + *(((var_e0 + *(((ebx_1 - var_e0) << 2) + var_d4) - var_f8) << 2) + var_ec))
        
        if (eax_6 s< 0)
            eax_6 = 0
        
        *(edi + 2) = eax_6.b
        int32_t ebx_10
        ebx_10.b = *(esi_1 + 1)
        int32_t eax_11
        eax_11.b = *(edi + 1)
        int32_t var_f4
        int32_t var_e8
        int32_t var_dc
        int32_t eax_12 = eax_11 - (var_f4
            + *(((var_dc + *(((ebx_10 - var_dc) << 2) + var_d4) - var_f4) << 2) + var_e8))
        
        if (eax_12 s< 0)
            eax_12 = 0
        
        *(edi + 1) = eax_12.b
        int32_t ebx_19
        ebx_19.b = *esi_1
        int32_t eax_17
        eax_17.b = *edi
        int32_t var_f0
        int32_t var_e4
        int32_t var_d8
        result = eax_17 - (var_f0
            + *(((var_d8 + *(((ebx_19 - var_d8) << 2) + var_d4) - var_f0) << 2) + var_e4))
        
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
