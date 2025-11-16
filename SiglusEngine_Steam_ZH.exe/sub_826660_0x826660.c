// 函数: sub_826660
// 地址: 0x826660
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
void* var_134
void* edi = var_134
int32_t i_2
int32_t i_1 = i_2
char result
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
        int32_t var_f8
        int32_t var_ec
        *(edi + 2) = (*(((var_f8 + *(((ebx_1 - var_f8) << 2) + var_ec)) << 2)
            + *((eax_3 << 2) + &data_4e3da80))).b
        int32_t ebx_8
        ebx_8.b = var_124[1]
        int32_t eax_10
        eax_10.b = *(edi + 1)
        int32_t var_f4
        int32_t var_e8
        *(edi + 1) = (*(((var_f4 + *(((ebx_8 - var_f4) << 2) + var_e8)) << 2)
            + *((eax_10 << 2) + &data_4e3da80))).b
        int32_t ebx_15
        ebx_15.b = *var_124
        int32_t eax_17
        eax_17.b = *edi
        int32_t var_f0
        int32_t var_e4
        result = (*(((var_f0 + *(((ebx_15 - var_f0) << 2) + var_e4)) << 2)
            + *((eax_17 << 2) + &data_4e3da80))).b
        *edi = result
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
