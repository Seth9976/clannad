// 函数: sub_97cb30
// 地址: 0x97cb30
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
char* var_134
char* edi = var_134
int32_t i_2
int32_t i_1 = i_2
int32_t i

do
    int32_t j_2
    int32_t j_1 = j_2
    int32_t j
    
    do
        int32_t ebx_1
        ebx_1.b = edi[3]
        
        if (ebx_1 != 0)
            int32_t edx_1 = *((ebx_1 << 2) + &data_4e3da80)
            int32_t ebx_5
            ebx_5.b = edi[2]
            int32_t eax_1
            eax_1.b = not.b(ebx_5.b)
            int32_t eax_3
            eax_3.b = edi[2]
            int32_t var_d0
            edi[2] =
                eax_3.b + (*(((eax_1 + *(((ebx_5 - eax_1) << 2) + var_d0) - eax_3) << 2) + edx_1)).b
            int32_t ebx_13
            ebx_13.b = edi[1]
            int32_t eax_5
            eax_5.b = not.b(ebx_13.b)
            int32_t eax_7
            eax_7.b = edi[1]
            edi[1] = eax_7.b
                + (*(((eax_5 + *(((ebx_13 - eax_5) << 2) + var_d0) - eax_7) << 2) + edx_1)).b
            int32_t ebx_21
            ebx_21.b = *edi
            int32_t eax_9
            eax_9.b = not.b(ebx_21.b)
            int32_t eax_11
            eax_11.b = *edi
            *edi = eax_11.b
                + (*(((eax_9 + *(((ebx_21 - eax_9) << 2) + var_d0) - eax_11) << 2) + edx_1)).b
        
        edi = &edi[4]
        j = j_1
        j_1 -= 1
    while (j != 1)
    int32_t var_130
    edi = &edi[var_130]
    i = i_1
    i_1 -= 1
while (i != 1)
