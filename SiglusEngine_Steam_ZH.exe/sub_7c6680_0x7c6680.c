// 函数: sub_7c6680
// 地址: 0x7c6680
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
        int32_t eax_1
        eax_1.b = *(esi_1 + 2)
        int32_t eax_3
        eax_3.b = *(esi_1 + 1)
        int32_t eax_5
        eax_5.b = *esi_1
        uint32_t edx_4 = (*(&data_4e3d680 + (eax_1 << 2)) + *(&data_4e3e280 + (eax_3 << 2))
            + *(&data_4e3de80 + (eax_5 << 2))) u>> 8
        int32_t var_cc
        int32_t eax_7 = *(&data_4e3da80 + var_cc)
        int32_t ebx_5
        ebx_5.b = *(esi_1 + 2)
        int32_t eax_9 = edx_4 + *(((ebx_5 - edx_4) << 2) + eax_7)
        int32_t eax_10
        eax_10.b = not.b(eax_9.b)
        int32_t eax_16
        eax_16.b = *(edi + 2)
        int32_t var_f8
        int32_t var_ec
        int32_t var_e0
        int32_t var_d4
        int32_t var_d0
        int32_t* ebx_23 = ((var_f8 + *(((var_e0
            + *(((eax_10 + *(((eax_9 - eax_10) << 2) + var_d0) - var_e0) << 2) + var_d4) - var_f8)
            << 2) + var_ec)) << 2) + *((eax_16 << 2) + &data_4e3da80)
        *(edi + 2) = (*ebx_23).b
        int32_t ebx_24
        ebx_24.b = *(esi_1 + 1)
        int32_t eax_22 = edx_4 + *(((ebx_24 - edx_4) << 2) + eax_7)
        int32_t eax_23
        eax_23.b = not.b(eax_22.b)
        int32_t eax_29
        eax_29.b = *(edi + 1)
        int32_t var_f4
        int32_t var_e8
        int32_t var_dc
        int32_t* ebx_42 = ((var_f4 + *(((var_dc
            + *(((eax_23 + *(((eax_22 - eax_23) << 2) + var_d0) - var_dc) << 2) + var_d4) - var_f4)
            << 2) + var_e8)) << 2) + *((eax_29 << 2) + &data_4e3da80)
        *(edi + 1) = (*ebx_42).b
        int32_t ebx_43
        ebx_43.b = *esi_1
        int32_t eax_35 = edx_4 + *(((ebx_43 - edx_4) << 2) + eax_7)
        int32_t eax_36
        eax_36.b = not.b(eax_35.b)
        int32_t eax_42
        eax_42.b = *edi
        int32_t var_f0
        int32_t var_e4
        int32_t var_d8
        int32_t* ebx_61 = ((var_f0 + *(((var_d8
            + *(((eax_36 + *(((eax_35 - eax_36) << 2) + var_d0) - var_d8) << 2) + var_d4) - var_f0)
            << 2) + var_e4)) << 2) + *((eax_42 << 2) + &data_4e3da80)
        result = (*ebx_61).b
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
