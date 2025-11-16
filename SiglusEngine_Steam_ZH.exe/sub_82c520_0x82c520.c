// 函数: sub_82c520
// 地址: 0x82c520
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
        eax_1.b = not.b(ebx_1.b)
        int32_t eax_3
        eax_3.b = *(edi + 2)
        int32_t eax_7
        eax_7.b = *(edi + 2)
        int32_t var_118
        int32_t var_d0
        *(edi + 2) = eax_7.b + (*(((
            *(((eax_1 + *(((ebx_1 - eax_1) << 2) + var_d0)) << 2) + *((eax_3 << 2) + &data_4e3da80))
            - eax_7) << 2) + var_118)).b
        int32_t ebx_12
        ebx_12.b = var_124[1]
        int32_t eax_9
        eax_9.b = not.b(ebx_12.b)
        int32_t eax_11
        eax_11.b = *(edi + 1)
        int32_t eax_15
        eax_15.b = *(edi + 1)
        *(edi + 1) = eax_15.b + (*(((*(((eax_9 + *(((ebx_12 - eax_9) << 2) + var_d0)) << 2)
            + *((eax_11 << 2) + &data_4e3da80)) - eax_15) << 2) + var_118)).b
        int32_t ebx_23
        ebx_23.b = *var_124
        int32_t eax_17
        eax_17.b = not.b(ebx_23.b)
        int32_t eax_19
        eax_19.b = *edi
        int32_t eax_23
        eax_23.b = *edi
        result = eax_23.b + (*(((*(((eax_17 + *(((ebx_23 - eax_17) << 2) + var_d0)) << 2)
            + *((eax_19 << 2) + &data_4e3da80)) - eax_23) << 2) + var_118)).b
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
