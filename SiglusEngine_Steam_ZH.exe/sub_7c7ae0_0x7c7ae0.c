// 函数: sub_7c7ae0
// 地址: 0x7c7ae0
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
        int32_t eax_12
        eax_12.b = *(edi + 2)
        int32_t eax_16
        eax_16.b = *(edi + 2)
        int32_t var_118
        int32_t var_d0
        *(edi + 2) = eax_16.b + (*(((*(((eax_10 + *(((eax_9 - eax_10) << 2) + var_d0)) << 2)
            + *((eax_12 << 2) + &data_4e3da80)) - eax_16) << 2) + var_118)).b
        int32_t ebx_20
        ebx_20.b = *(esi_1 + 1)
        int32_t eax_19 = edx_4 + *(((ebx_20 - edx_4) << 2) + eax_7)
        int32_t eax_20
        eax_20.b = not.b(eax_19.b)
        int32_t eax_22
        eax_22.b = *(edi + 1)
        int32_t eax_26
        eax_26.b = *(edi + 1)
        *(edi + 1) = eax_26.b + (*(((*(((eax_20 + *(((eax_19 - eax_20) << 2) + var_d0)) << 2)
            + *((eax_22 << 2) + &data_4e3da80)) - eax_26) << 2) + var_118)).b
        int32_t ebx_35
        ebx_35.b = *esi_1
        int32_t eax_29 = edx_4 + *(((ebx_35 - edx_4) << 2) + eax_7)
        int32_t eax_30
        eax_30.b = not.b(eax_29.b)
        int32_t eax_32
        eax_32.b = *edi
        int32_t eax_36
        eax_36.b = *edi
        result = eax_36.b + (*(((*(((eax_30 + *(((eax_29 - eax_30) << 2) + var_d0)) << 2)
            + *((eax_32 << 2) + &data_4e3da80)) - eax_36) << 2) + var_118)).b
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
