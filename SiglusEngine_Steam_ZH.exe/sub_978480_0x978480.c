// 函数: sub_978480
// 地址: 0x978480
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
        int32_t ebx_1
        ebx_1.b = esi_2[2]
        int32_t var_e0
        int32_t var_d4
        *(edi + 2) = (var_e0 + *(((ebx_1 - var_e0) << 2) + var_d4)).b
        int32_t ebx_5
        ebx_5.b = esi_2[1]
        int32_t var_dc
        *(edi + 1) = (var_dc + *(((ebx_5 - var_dc) << 2) + var_d4)).b
        int32_t ebx_9
        ebx_9.b = *esi_2
        int32_t var_d8
        result = var_d8 + *(((ebx_9 - var_d8) << 2) + var_d4)
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
