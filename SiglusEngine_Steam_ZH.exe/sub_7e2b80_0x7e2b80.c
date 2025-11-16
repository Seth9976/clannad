// 函数: sub_7e2b80
// 地址: 0x7e2b80
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
                int32_t eax_3
                eax_3.b = *(edi + 2)
                int32_t var_f8
                int32_t var_ec
                *(edi + 2) = eax_3.b
                    + (*(((var_f8 + *(((ebx_11 - var_f8) << 2) + var_ec) - eax_3) << 2) + edx_1)).b
                int32_t ebx_19
                ebx_19.b = var_124[1]
                int32_t eax_7
                eax_7.b = *(edi + 1)
                int32_t var_f4
                int32_t var_e8
                *(edi + 1) = eax_7.b
                    + (*(((var_f4 + *(((ebx_19 - var_f4) << 2) + var_e8) - eax_7) << 2) + edx_1)).b
                int32_t ebx_27
                ebx_27.b = *var_124
                int32_t eax_11
                eax_11.b = *edi
                int32_t var_f0
                int32_t var_e4
                *edi = eax_11.b +
                    (*(((var_f0 + *(((ebx_27 - var_f0) << 2) + var_e4) - eax_11) << 2) + edx_1)).b
        
        edi += 4
        j = j_1
        j_1 -= 1
    while (j != 1)
    int32_t var_130
    edi += var_130
    i = i_1
    i_1 -= 1
while (i != 1)
