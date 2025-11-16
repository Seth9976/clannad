// 函数: sub_789500
// 地址: 0x789500
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
char* var_134
char* edi = var_134
char* var_124
char* esi_1 = var_124
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
        int32_t ebx_1
        ebx_1.b = esi_1[3]
        
        if (ebx_1 != 0)
            int32_t var_11c
            int32_t ebx_7 = *(*((ebx_1 << 2) + &data_4e3da80) + var_11c)
            
            if (ebx_7 != 0)
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
                    int32_t ebx_18 = *(*((eax_4 << 2) + &data_4e3da80) + (ebx_7 << 2))
                    
                    if (ebx_18 != 0)
                        int32_t edx_2 = *((ebx_18 << 2) + &data_4e3da80)
                        int32_t ebx_22
                        ebx_22.b = esi_1[2]
                        int32_t eax_5
                        eax_5.b = not.b(ebx_22.b)
                        int32_t eax_9
                        eax_9.b = edi[2]
                        int32_t var_e0
                        int32_t var_d4
                        int32_t var_d0
                        edi[2] = eax_9.b + (*(((var_e0 + *(((eax_5
                            + *(((ebx_22 - eax_5) << 2) + var_d0) - var_e0) << 2) + var_d4) - eax_9)
                            << 2) + edx_2)).b
                        int32_t ebx_34
                        ebx_34.b = esi_1[1]
                        int32_t eax_11
                        eax_11.b = not.b(ebx_34.b)
                        int32_t eax_15
                        eax_15.b = edi[1]
                        int32_t var_dc
                        edi[1] = eax_15.b + (*(((var_dc + *(((eax_11
                            + *(((ebx_34 - eax_11) << 2) + var_d0) - var_dc) << 2) + var_d4) - eax_15)
                            << 2) + edx_2)).b
                        int32_t ebx_46
                        ebx_46.b = *esi_1
                        int32_t eax_17
                        eax_17.b = not.b(ebx_46.b)
                        int32_t eax_21
                        eax_21.b = *edi
                        int32_t var_d8
                        *edi = eax_21.b + (*(((var_d8 + *(((eax_17
                            + *(((ebx_46 - eax_17) << 2) + var_d0) - var_d8) << 2) + var_d4) - eax_21)
                            << 2) + edx_2)).b
        
        int32_t eax_24 = var_a0_1 + 1
        
        if (eax_24 s>= var_bc)
            eax_24 = 0
        
        var_a0_1 = eax_24
        esi_1 = &esi_1[4]
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
    int32_t var_120
    esi_1 = &esi_1[var_120]
    int32_t var_130
    edi = &edi[var_130]
    i = i_1
    i_1 -= 1
while (i != 1)
return result
