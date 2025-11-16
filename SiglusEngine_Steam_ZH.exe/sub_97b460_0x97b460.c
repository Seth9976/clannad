// 函数: sub_97b460
// 地址: 0x97b460
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
        char* esi_2 = edi
        int32_t eax_1
        eax_1.b = esi_2[2]
        int32_t eax_3
        eax_3.b = esi_2[1]
        int32_t eax_5
        eax_5.b = *esi_2
        uint32_t edx_4 = (*(&data_4e3d680 + (eax_1 << 2)) + *(&data_4e3e280 + (eax_3 << 2))
            + *(&data_4e3de80 + (eax_5 << 2))) u>> 8
        int32_t var_cc
        int32_t eax_7 = *(&data_4e3da80 + var_cc)
        int32_t ebx_5
        ebx_5.b = esi_2[2]
        int32_t eax_9 = edx_4 + *(((ebx_5 - edx_4) << 2) + eax_7)
        int32_t eax_10
        eax_10.b = not.b(eax_9.b)
        int32_t eax_12
        eax_12.b = *(edi + 2)
        int32_t var_118
        int32_t var_d0
        *(edi + 2) = eax_12.b
            + (*(((eax_10 + *(((eax_9 - eax_10) << 2) + var_d0) - eax_12) << 2) + var_118)).b
        int32_t ebx_17
        ebx_17.b = esi_2[1]
        int32_t eax_15 = edx_4 + *(((ebx_17 - edx_4) << 2) + eax_7)
        int32_t eax_16
        eax_16.b = not.b(eax_15.b)
        int32_t eax_18
        eax_18.b = *(edi + 1)
        *(edi + 1) = eax_18.b
            + (*(((eax_16 + *(((eax_15 - eax_16) << 2) + var_d0) - eax_18) << 2) + var_118)).b
        int32_t ebx_29
        ebx_29.b = *esi_2
        int32_t eax_21 = edx_4 + *(((ebx_29 - edx_4) << 2) + eax_7)
        int32_t eax_22
        eax_22.b = not.b(eax_21.b)
        int32_t eax_24
        eax_24.b = *edi
        result = eax_24.b
            + (*(((eax_22 + *(((eax_21 - eax_22) << 2) + var_d0) - eax_24) << 2) + var_118)).b
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
