// 函数: sub_782af0
// 地址: 0x782af0
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
        int32_t eax_1
        eax_1.b = not.b(ebx_1.b)
        int32_t var_f8
        int32_t var_ec
        int32_t var_e0
        int32_t var_d4
        int32_t var_d0
        *(edi + 2) = (var_f8 + *(((var_e0
            + *(((eax_1 + *(((ebx_1 - eax_1) << 2) + var_d0) - var_e0) << 2) + var_d4) - var_f8) << 2)
            + var_ec)).b
        int32_t ebx_13
        ebx_13.b = *(esi_1 + 1)
        int32_t eax_7
        eax_7.b = not.b(ebx_13.b)
        int32_t var_f4
        int32_t var_e8
        int32_t var_dc
        *(edi + 1) = (var_f4 + *(((var_dc
            + *(((eax_7 + *(((ebx_13 - eax_7) << 2) + var_d0) - var_dc) << 2) + var_d4) - var_f4) << 2)
            + var_e8)).b
        int32_t ebx_25
        ebx_25.b = *esi_1
        int32_t eax_13
        eax_13.b = not.b(ebx_25.b)
        int32_t var_f0
        int32_t var_e4
        int32_t var_d8
        result = var_f0 + *(((var_d8
            + *(((eax_13 + *(((ebx_25 - eax_13) << 2) + var_d0) - var_d8) << 2) + var_d4) - var_f0)
            << 2) + var_e4)
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
