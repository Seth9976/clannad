// 函数: sub_7e7c70
// 地址: 0x7e7c70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
void* var_134
void* edi = var_134
int32_t i_2
int32_t i_1 = i_2
void* result
int32_t i

do
    int32_t j_2
    int32_t j_1 = j_2
    int32_t var_a8
    int32_t var_a0_1 = var_a8
    int32_t var_bc
    void* result_2
    int32_t j
    
    do
        int32_t eax_2
        eax_2.b = *(result_2 + var_a0_1)
        int32_t var_b4
        
        if (var_b4 != 0)
            eax_2.b = not.b(eax_2.b)
        
        char var_b0
        int32_t var_ac
        int32_t eax_4 = (eax_2 << var_b0) + var_ac
        
        if (eax_4 s< 0)
            eax_4 = 0
        else if (eax_4 s> 0xff)
            eax_4 = 0xff
        
        if (eax_4 != 0)
            int32_t var_11c
            int32_t ebx_9 = *(*((eax_4 << 2) + &data_4e3da80) + var_11c)
            
            if (ebx_9 != 0)
                int32_t edx_2 = *((ebx_9 << 2) + &data_4e3da80)
                char* var_124
                int32_t ebx_13
                ebx_13.b = var_124[2]
                int32_t eax_7
                eax_7.b = *(edi + 2)
                int32_t var_f8
                int32_t var_ec
                *(edi + 2) = eax_7.b
                    + (*(((var_f8 + *(((ebx_13 - var_f8) << 2) + var_ec) - eax_7) << 2) + edx_2)).b
                int32_t ebx_21
                ebx_21.b = var_124[1]
                int32_t eax_11
                eax_11.b = *(edi + 1)
                int32_t var_f4
                int32_t var_e8
                *(edi + 1) = eax_11.b +
                    (*(((var_f4 + *(((ebx_21 - var_f4) << 2) + var_e8) - eax_11) << 2) + edx_2)).b
                int32_t ebx_29
                ebx_29.b = *var_124
                int32_t eax_15
                eax_15.b = *edi
                int32_t var_f0
                int32_t var_e4
                *edi = eax_15.b +
                    (*(((var_f0 + *(((ebx_29 - var_f0) << 2) + var_e4) - eax_15) << 2) + edx_2)).b
        
        int32_t eax_18 = var_a0_1 + 1
        
        if (eax_18 s>= var_bc)
            eax_18 = 0
        
        var_a0_1 = eax_18
        edi += 4
        j = j_1
        j_1 -= 1
    while (j != 1)
    result = result_2 + var_bc
    int32_t var_94
    void* result_1
    
    if (result s>= var_94)
        result = result_1
    result_2 = result
    int32_t var_130
    edi += var_130
    i = i_1
    i_1 -= 1
while (i != 1)
return result
