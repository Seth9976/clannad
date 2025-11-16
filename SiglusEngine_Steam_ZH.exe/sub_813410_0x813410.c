// 函数: sub_813410
// 地址: 0x813410
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
                        ebx_22.b = var_124[2]
                        int32_t eax_5
                        eax_5.b = edi[2]
                        int32_t eax_6 = eax_5 - *((neg.d(ebx_22 - 0xff) << 2) + edx_2)
                        
                        if (eax_6 s< 0)
                            eax_6 = 0
                        
                        edi[2] = eax_6.b
                        int32_t ebx_28
                        ebx_28.b = var_124[1]
                        int32_t eax_7
                        eax_7.b = edi[1]
                        int32_t eax_8 = eax_7 - *((neg.d(ebx_28 - 0xff) << 2) + edx_2)
                        
                        if (eax_8 s< 0)
                            eax_8 = 0
                        
                        edi[1] = eax_8.b
                        int32_t ebx_34
                        ebx_34.b = *var_124
                        int32_t eax_9
                        eax_9.b = *edi
                        int32_t eax_10 = eax_9 - *((neg.d(ebx_34 - 0xff) << 2) + edx_2)
                        
                        if (eax_10 s< 0)
                            eax_10 = 0
                        
                        *edi = eax_10.b
        
        int32_t eax_12 = var_a0_1 + 1
        
        if (eax_12 s>= var_bc)
            eax_12 = 0
        
        var_a0_1 = eax_12
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
