// 函数: sub_7c4700
// 地址: 0x7c4700
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
        int32_t eax_12
        eax_12.b = *(edi + 2)
        int32_t var_f8
        int32_t var_ec
        *(edi + 2) = (*(((var_f8
            + *(((edx_4 + *(((ebx_5 - edx_4) << 2) + eax_7) - var_f8) << 2) + var_ec)) << 2)
            + *((eax_12 << 2) + &data_4e3da80))).b
        int32_t ebx_16
        ebx_16.b = *(esi_1 + 1)
        int32_t eax_21
        eax_21.b = *(edi + 1)
        int32_t var_f4
        int32_t var_e8
        *(edi + 1) = (*(((var_f4
            + *(((edx_4 + *(((ebx_16 - edx_4) << 2) + eax_7) - var_f4) << 2) + var_e8)) << 2)
            + *((eax_21 << 2) + &data_4e3da80))).b
        int32_t ebx_27
        ebx_27.b = *esi_1
        int32_t eax_30
        eax_30.b = *edi
        int32_t var_f0
        int32_t var_e4
        result = (*(((var_f0
            + *(((edx_4 + *(((ebx_27 - edx_4) << 2) + eax_7) - var_f0) << 2) + var_e4)) << 2)
            + *((eax_30 << 2) + &data_4e3da80))).b
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
