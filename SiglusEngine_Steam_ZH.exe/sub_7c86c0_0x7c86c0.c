// 函数: sub_7c86c0
// 地址: 0x7c86c0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
void* var_134
void* edi = var_134
void* var_124
void* esi_1 = var_124
int32_t i_2
int32_t i_1 = i_2
char result
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
        int32_t eax_5
        eax_5.b = *(edi + 2)
        int32_t eax_9
        eax_9.b = *(edi + 2)
        int32_t var_f8
        int32_t var_ec
        int32_t var_d0
        int32_t ebx_14 = (*(((var_f8
            + *(((eax_1 + *(((ebx_1 - eax_1) << 2) + var_d0) - var_f8) << 2) + var_ec)) << 2)
            + *((eax_5 << 2) + &data_4e3da80)) - eax_9) << 2
        int32_t var_118
        *(edi + 2) = eax_9.b + (*(ebx_14 + var_118)).b
        int32_t ebx_16
        ebx_16.b = *(esi_1 + 1)
        int32_t eax_11
        eax_11.b = not.b(ebx_16.b)
        int32_t eax_15
        eax_15.b = *(edi + 1)
        int32_t eax_19
        eax_19.b = *(edi + 1)
        int32_t var_f4
        int32_t var_e8
        int32_t ebx_29 = (*(((var_f4
            + *(((eax_11 + *(((ebx_16 - eax_11) << 2) + var_d0) - var_f4) << 2) + var_e8)) << 2)
            + *((eax_15 << 2) + &data_4e3da80)) - eax_19) << 2
        *(edi + 1) = eax_19.b + (*(ebx_29 + var_118)).b
        int32_t ebx_31
        ebx_31.b = *esi_1
        int32_t eax_21
        eax_21.b = not.b(ebx_31.b)
        int32_t eax_25
        eax_25.b = *edi
        int32_t eax_29
        eax_29.b = *edi
        int32_t var_f0
        int32_t var_e4
        int32_t ebx_44 = (*(((var_f0
            + *(((eax_21 + *(((ebx_31 - eax_21) << 2) + var_d0) - var_f0) << 2) + var_e4)) << 2)
            + *((eax_25 << 2) + &data_4e3da80)) - eax_29) << 2
        result = eax_29.b + (*(ebx_44 + var_118)).b
        *edi = result
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
