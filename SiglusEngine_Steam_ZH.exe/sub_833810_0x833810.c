// 函数: sub_833810
// 地址: 0x833810
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
        int32_t eax_1
        eax_1.b = *(edi + 2)
        int32_t eax_5
        eax_5.b = *(edi + 2)
        int32_t var_118
        *(edi + 2) = eax_5.b
            + (*(((*((ebx_1 << 2) + *((eax_1 << 2) + &data_4e3da80)) - eax_5) << 2) + var_118)).b
        int32_t ebx_8
        ebx_8.b = var_124[1]
        int32_t eax_7
        eax_7.b = *(edi + 1)
        int32_t eax_11
        eax_11.b = *(edi + 1)
        *(edi + 1) = eax_11.b
            + (*(((*((ebx_8 << 2) + *((eax_7 << 2) + &data_4e3da80)) - eax_11) << 2) + var_118)).b
        int32_t ebx_15
        ebx_15.b = *var_124
        int32_t eax_13
        eax_13.b = *edi
        int32_t eax_17
        eax_17.b = *edi
        result = eax_17.b +
            (*(((*((ebx_15 << 2) + *((eax_13 << 2) + &data_4e3da80)) - eax_17) << 2) + var_118)).b
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
