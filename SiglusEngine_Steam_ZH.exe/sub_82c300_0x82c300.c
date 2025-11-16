// 函数: sub_82c300
// 地址: 0x82c300
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
        int32_t var_d0
        *(edi + 2) = (*
            (((eax_1 + *(((ebx_1 - eax_1) << 2) + var_d0)) << 2) + *((eax_3 << 2) + &data_4e3da80))).b
        int32_t ebx_8
        ebx_8.b = var_124[1]
        int32_t eax_8
        eax_8.b = not.b(ebx_8.b)
        int32_t eax_10
        eax_10.b = *(edi + 1)
        *(edi + 1) = (*(((eax_8 + *(((ebx_8 - eax_8) << 2) + var_d0)) << 2)
            + *((eax_10 << 2) + &data_4e3da80))).b
        int32_t ebx_15
        ebx_15.b = *var_124
        int32_t eax_15
        eax_15.b = not.b(ebx_15.b)
        int32_t eax_17
        eax_17.b = *edi
        result = (*(((eax_15 + *(((ebx_15 - eax_15) << 2) + var_d0)) << 2)
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
