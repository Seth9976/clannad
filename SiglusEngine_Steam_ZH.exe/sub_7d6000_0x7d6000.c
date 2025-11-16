// 函数: sub_7d6000
// 地址: 0x7d6000
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
        int32_t var_d0
        *(edi + 2) = (eax_10 + *(((eax_9 - eax_10) << 2) + var_d0)).b
        int32_t ebx_13
        ebx_13.b = *(esi_1 + 1)
        int32_t eax_13 = edx_4 + *(((ebx_13 - edx_4) << 2) + eax_7)
        int32_t eax_14
        eax_14.b = not.b(eax_13.b)
        *(edi + 1) = (eax_14 + *(((eax_13 - eax_14) << 2) + var_d0)).b
        int32_t ebx_21
        ebx_21.b = *esi_1
        int32_t eax_17 = edx_4 + *(((ebx_21 - edx_4) << 2) + eax_7)
        int32_t eax_18
        eax_18.b = not.b(eax_17.b)
        *edi = (eax_18 + *(((eax_17 - eax_18) << 2) + var_d0)).b
        result = *(esi_1 + 3)
        *(edi + 3) = result
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
