// 函数: sub_8287d0
// 地址: 0x8287d0
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
        int32_t eax_1
        eax_1.b = var_124[2]
        int32_t eax_3
        eax_3.b = var_124[1]
        int32_t eax_5
        eax_5.b = *var_124
        uint32_t edx_4 = (*(&data_4e3d680 + (eax_1 << 2)) + *(&data_4e3e280 + (eax_3 << 2))
            + *(&data_4e3de80 + (eax_5 << 2))) u>> 8
        int32_t var_cc
        int32_t eax_7 = *(&data_4e3da80 + var_cc)
        int32_t ebx_5
        ebx_5.b = var_124[2]
        int32_t eax_12
        eax_12.b = *(edi + 2)
        int32_t eax_16
        eax_16.b = *(edi + 2)
        int32_t var_e0
        int32_t var_d4
        int32_t ebx_18 = (*(((var_e0
            + *(((edx_4 + *(((ebx_5 - edx_4) << 2) + eax_7) - var_e0) << 2) + var_d4)) << 2)
            + *((eax_12 << 2) + &data_4e3da80)) - eax_16) << 2
        int32_t var_118
        *(edi + 2) = eax_16.b + (*(ebx_18 + var_118)).b
        int32_t ebx_20
        ebx_20.b = var_124[1]
        int32_t eax_22
        eax_22.b = *(edi + 1)
        int32_t eax_26
        eax_26.b = *(edi + 1)
        int32_t var_dc
        int32_t ebx_33 = (*(((var_dc
            + *(((edx_4 + *(((ebx_20 - edx_4) << 2) + eax_7) - var_dc) << 2) + var_d4)) << 2)
            + *((eax_22 << 2) + &data_4e3da80)) - eax_26) << 2
        *(edi + 1) = eax_26.b + (*(ebx_33 + var_118)).b
        int32_t ebx_35
        ebx_35.b = *var_124
        int32_t eax_32
        eax_32.b = *edi
        int32_t eax_36
        eax_36.b = *edi
        int32_t var_d8
        int32_t ebx_48 = (*(((var_d8
            + *(((edx_4 + *(((ebx_35 - edx_4) << 2) + eax_7) - var_d8) << 2) + var_d4)) << 2)
            + *((eax_32 << 2) + &data_4e3da80)) - eax_36) << 2
        result = eax_36.b + (*(ebx_48 + var_118)).b
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
