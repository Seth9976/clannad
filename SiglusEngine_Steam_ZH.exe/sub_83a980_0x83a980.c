// 函数: sub_83a980
// 地址: 0x83a980
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
        int32_t var_e0
        int32_t var_d4
        int32_t var_d0
        *(edi + 2) =
            (var_e0 + *(((eax_1 + *(((ebx_1 - eax_1) << 2) + var_d0) - var_e0) << 2) + var_d4)).b
        int32_t ebx_9
        ebx_9.b = var_124[1]
        int32_t eax_5
        eax_5.b = not.b(ebx_9.b)
        int32_t var_dc
        *(edi + 1) =
            (var_dc + *(((eax_5 + *(((ebx_9 - eax_5) << 2) + var_d0) - var_dc) << 2) + var_d4)).b
        int32_t ebx_17
        ebx_17.b = *var_124
        int32_t eax_9
        eax_9.b = not.b(ebx_17.b)
        int32_t var_d8
        *edi =
            (var_d8 + *(((eax_9 + *(((ebx_17 - eax_9) << 2) + var_d0) - var_d8) << 2) + var_d4)).b
        result = var_124[3]
        *(edi + 3) = result
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
