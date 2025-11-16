// 函数: sub_977c10
// 地址: 0x977c10
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
        int32_t var_f8
        int32_t var_ec
        *(edi + 2) = (var_f8 + *(((ebx_1 - var_f8) << 2) + var_ec)).b
        int32_t ebx_5
        ebx_5.b = esi_2[1]
        int32_t var_f4
        int32_t var_e8
        *(edi + 1) = (var_f4 + *(((ebx_5 - var_f4) << 2) + var_e8)).b
        int32_t ebx_9
        ebx_9.b = *esi_2
        int32_t var_f0
        int32_t var_e4
        result = var_f0 + *(((ebx_9 - var_f0) << 2) + var_e4)
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
