// 函数: sub_7c8340
// 地址: 0x7c8340
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
        eax_1.b = *(edi + 2)
        *(edi + 2) = (*((ebx_1 << 2) + *((eax_1 << 2) + &data_4e3da80))).b
        int32_t ebx_4
        ebx_4.b = *(esi_1 + 1)
        int32_t eax_6
        eax_6.b = *(edi + 1)
        *(edi + 1) = (*((ebx_4 << 2) + *((eax_6 << 2) + &data_4e3da80))).b
        int32_t ebx_7
        ebx_7.b = *esi_1
        int32_t eax_11
        eax_11.b = *edi
        result = (*((ebx_7 << 2) + *((eax_11 << 2) + &data_4e3da80))).b
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
