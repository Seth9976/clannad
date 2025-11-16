// 函数: sub_982c40
// 地址: 0x982c40
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
        int32_t ebx_1
        ebx_1.b = edi[3]
        
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
                        ebx_22.b = edi[2]
                        int32_t eax_5
                        eax_5.b = not.b(ebx_22.b)
                        int32_t eax_7
                        eax_7.b = edi[2]
                        int32_t var_d0
                        edi[2] = eax_7.b + (
                            *(((eax_5 + *(((ebx_22 - eax_5) << 2) + var_d0) - eax_7) << 2) + edx_2)).b
                        int32_t ebx_30
                        ebx_30.b = edi[1]
                        int32_t eax_9
                        eax_9.b = not.b(ebx_30.b)
                        int32_t eax_11
                        eax_11.b = edi[1]
                        edi[1] = eax_11.b + (*
                            (((eax_9 + *(((ebx_30 - eax_9) << 2) + var_d0) - eax_11) << 2) + edx_2)).b
                        int32_t ebx_38
                        ebx_38.b = *edi
                        int32_t eax_13
                        eax_13.b = not.b(ebx_38.b)
                        int32_t eax_15
                        eax_15.b = *edi
                        *edi = eax_15.b + (*(((eax_13 + *(((ebx_38 - eax_13) << 2) + var_d0)
                            - eax_15) << 2) + edx_2)).b
        
        int32_t eax_18 = var_a0_1 + 1
        
        if (eax_18 s>= var_bc)
            eax_18 = 0
        
        var_a0_1 = eax_18
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
