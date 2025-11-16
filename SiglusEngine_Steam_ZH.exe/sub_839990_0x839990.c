// 函数: sub_839990
// 地址: 0x839990
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
        int32_t var_f8
        int32_t var_ec
        int32_t var_d0
        *(edi + 2) =
            (var_f8 + *(((eax_1 + *(((ebx_1 - eax_1) << 2) + var_d0) - var_f8) << 2) + var_ec)).b
        int32_t ebx_9
        ebx_9.b = var_124[1]
        int32_t eax_5
        eax_5.b = not.b(ebx_9.b)
        int32_t var_f4
        int32_t var_e8
        *(edi + 1) =
            (var_f4 + *(((eax_5 + *(((ebx_9 - eax_5) << 2) + var_d0) - var_f4) << 2) + var_e8)).b
        int32_t ebx_17
        ebx_17.b = *var_124
        int32_t eax_9
        eax_9.b = not.b(ebx_17.b)
        int32_t var_f0
        int32_t var_e4
        *edi =
            (var_f0 + *(((eax_9 + *(((ebx_17 - eax_9) << 2) + var_d0) - var_f0) << 2) + var_e4)).b
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
