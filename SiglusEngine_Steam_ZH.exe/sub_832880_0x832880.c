// 函数: sub_832880
// 地址: 0x832880
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
char* var_134
char* edi = var_134
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
        char* var_124
        int32_t ebx_1
        ebx_1.b = var_124[3]
        
        if (ebx_1 != 0)
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
                int32_t ebx_12 = *(*((eax_4 << 2) + &data_4e3da80) + (ebx_1 << 2))
                
                if (ebx_12 != 0)
                    int32_t edx_2 = *((ebx_12 << 2) + &data_4e3da80)
                    int32_t ebx_16
                    ebx_16.b = var_124[2]
                    int32_t eax_5
                    eax_5.b = not.b(ebx_16.b)
                    int32_t eax_9
                    eax_9.b = edi[2]
                    int32_t eax_13
                    eax_13.b = edi[2]
                    int32_t var_e0
                    int32_t var_d4
                    int32_t var_d0
                    int32_t ebx_29 = (*(((var_e0 +
                        *(((eax_5 + *(((ebx_16 - eax_5) << 2) + var_d0) - var_e0) << 2) + var_d4)) << 2)
                        + *((eax_9 << 2) + &data_4e3da80)) - eax_13) << 2
                    edi[2] = eax_13.b + (*(ebx_29 + edx_2)).b
                    int32_t ebx_31
                    ebx_31.b = var_124[1]
                    int32_t eax_15
                    eax_15.b = not.b(ebx_31.b)
                    int32_t eax_19
                    eax_19.b = edi[1]
                    int32_t eax_23
                    eax_23.b = edi[1]
                    int32_t var_dc
                    int32_t ebx_44 = (*(((var_dc +
                        *(((eax_15 + *(((ebx_31 - eax_15) << 2) + var_d0) - var_dc) << 2) + var_d4))
                        << 2) + *((eax_19 << 2) + &data_4e3da80)) - eax_23) << 2
                    edi[1] = eax_23.b + (*(ebx_44 + edx_2)).b
                    int32_t ebx_46
                    ebx_46.b = *var_124
                    int32_t eax_25
                    eax_25.b = not.b(ebx_46.b)
                    int32_t eax_29
                    eax_29.b = *edi
                    int32_t eax_33
                    eax_33.b = *edi
                    int32_t var_d8
                    int32_t ebx_59 = (*(((var_d8 +
                        *(((eax_25 + *(((ebx_46 - eax_25) << 2) + var_d0) - var_d8) << 2) + var_d4))
                        << 2) + *((eax_29 << 2) + &data_4e3da80)) - eax_33) << 2
                    *edi = eax_33.b + (*(ebx_59 + edx_2)).b
        
        int32_t eax_36 = var_a0_1 + 1
        
        if (eax_36 s>= var_bc)
            eax_36 = 0
        
        var_a0_1 = eax_36
        edi = &edi[4]
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
    edi = &edi[var_130]
    i = i_1
    i_1 -= 1
while (i != 1)
return result
