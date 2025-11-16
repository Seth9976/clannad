// 函数: sub_979520
// 地址: 0x979520
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
void* var_134
void* edi = var_134
int32_t i_2
int32_t i_1 = i_2
int32_t result
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
        int32_t var_e0
        int32_t var_d4
        *(edi + 2) =
            (var_e0 + *(((edx_4 + *(((ebx_5 - edx_4) << 2) + eax_7) - var_e0) << 2) + var_d4)).b
        int32_t ebx_13
        ebx_13.b = esi_2[1]
        int32_t var_dc
        *(edi + 1) =
            (var_dc + *(((edx_4 + *(((ebx_13 - edx_4) << 2) + eax_7) - var_dc) << 2) + var_d4)).b
        int32_t ebx_21
        ebx_21.b = *esi_2
        int32_t var_d8
        result = var_d8 + *(((edx_4 + *(((ebx_21 - edx_4) << 2) + eax_7) - var_d8) << 2) + var_d4)
        *edi = result.b
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
