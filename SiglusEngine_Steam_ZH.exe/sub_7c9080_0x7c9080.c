// 函数: sub_7c9080
// 地址: 0x7c9080
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
        int32_t var_e0
        int32_t var_d4
        int32_t var_d0
        *(edi + 2) = (*(((var_e0
            + *(((eax_1 + *(((ebx_1 - eax_1) << 2) + var_d0) - var_e0) << 2) + var_d4)) << 2)
            + *((eax_5 << 2) + &data_4e3da80))).b
        int32_t ebx_12
        ebx_12.b = *(esi_1 + 1)
        int32_t eax_10
        eax_10.b = not.b(ebx_12.b)
        int32_t eax_14
        eax_14.b = *(edi + 1)
        int32_t var_dc
        *(edi + 1) = (*(((var_dc
            + *(((eax_10 + *(((ebx_12 - eax_10) << 2) + var_d0) - var_dc) << 2) + var_d4)) << 2)
            + *((eax_14 << 2) + &data_4e3da80))).b
        int32_t ebx_23
        ebx_23.b = *esi_1
        int32_t eax_19
        eax_19.b = not.b(ebx_23.b)
        int32_t eax_23
        eax_23.b = *edi
        int32_t var_d8
        result = (*(((var_d8
            + *(((eax_19 + *(((ebx_23 - eax_19) << 2) + var_d0) - var_d8) << 2) + var_d4)) << 2)
            + *((eax_23 << 2) + &data_4e3da80))).b
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
