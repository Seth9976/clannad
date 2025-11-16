// 函数: sub_826f40
// 地址: 0x826f40
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
void* var_134
void* edi = var_134
int32_t i_2
int32_t i_1 = i_2
int32_t i

do
    int32_t j_2
    int32_t j_1 = j_2
    int32_t j
    
    do
        char* var_124
        int32_t ebx_1
        ebx_1.b = var_124[3]
        
        if (ebx_1 != 0)
            int32_t var_11c
            int32_t ebx_7 = *(*((ebx_1 << 2) + &data_4e3da80) + var_11c)
            
            if (ebx_7 != 0)
                int32_t edx_1 = *((ebx_7 << 2) + &data_4e3da80)
                int32_t ebx_11
                ebx_11.b = var_124[2]
                int32_t eax_5
                eax_5.b = *(edi + 2)
                int32_t eax_9
                eax_9.b = *(edi + 2)
                int32_t var_f8
                int32_t var_ec
                int32_t var_e0
                int32_t var_d4
                int32_t ebx_24 = (*(((var_f8
                    + *(((var_e0 + *(((ebx_11 - var_e0) << 2) + var_d4) - var_f8) << 2) + var_ec))
                    << 2) + *((eax_5 << 2) + &data_4e3da80)) - eax_9) << 2
                *(edi + 2) = eax_9.b + (*(ebx_24 + edx_1)).b
                int32_t ebx_26
                ebx_26.b = var_124[1]
                int32_t eax_15
                eax_15.b = *(edi + 1)
                int32_t eax_19
                eax_19.b = *(edi + 1)
                int32_t var_f4
                int32_t var_e8
                int32_t var_dc
                int32_t ebx_39 = (*(((var_f4
                    + *(((var_dc + *(((ebx_26 - var_dc) << 2) + var_d4) - var_f4) << 2) + var_e8))
                    << 2) + *((eax_15 << 2) + &data_4e3da80)) - eax_19) << 2
                *(edi + 1) = eax_19.b + (*(ebx_39 + edx_1)).b
                int32_t ebx_41
                ebx_41.b = *var_124
                int32_t eax_25
                eax_25.b = *edi
                int32_t eax_29
                eax_29.b = *edi
                int32_t var_f0
                int32_t var_e4
                int32_t var_d8
                int32_t ebx_54 = (*(((var_f0
                    + *(((var_d8 + *(((ebx_41 - var_d8) << 2) + var_d4) - var_f0) << 2) + var_e4))
                    << 2) + *((eax_25 << 2) + &data_4e3da80)) - eax_29) << 2
                *edi = eax_29.b + (*(ebx_54 + edx_1)).b
        
        edi += 4
        j = j_1
        j_1 -= 1
    while (j != 1)
    int32_t var_130
    edi += var_130
    i = i_1
    i_1 -= 1
while (i != 1)
