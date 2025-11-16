// 函数: sub_83c9c0
// 地址: 0x83c9c0
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
                    int32_t ecx_2 = ebx_12 << 2
                    int32_t eax_5
                    eax_5.b = edi[3]
                    int32_t eax_6 = eax_5 << 2
                    int32_t ecx_6 = *(*(ecx_2 + &data_4dae580) + eax_6)
                    
                    if (ecx_6 != 0)
                        int32_t edx_6 = *(*(ecx_2 + &data_4dee980) + eax_6)
                        int32_t ebx_14
                        ebx_14.b = var_124[2]
                        int32_t var_e0
                        int32_t var_d4
                        int32_t eax_8 = var_e0 + *(((ebx_14 - var_e0) << 2) + var_d4)
                        int32_t ebx_19
                        ebx_19.b = var_124[1]
                        int32_t var_dc
                        int32_t eax_10 = var_dc + *(((ebx_19 - var_dc) << 2) + var_d4)
                        int32_t ebx_24
                        ebx_24.b = *var_124
                        int32_t var_d8
                        int32_t eax_12 = var_d8 + *(((ebx_24 - var_d8) << 2) + var_d4)
                        
                        if (ebx_12 != 0xff)
                            int32_t ebx_34
                            ebx_34.b = edi[3]
                            
                            if (ebx_34 != 0)
                                int32_t eax_16 = *((ebx_12 << 2) + &data_4d6e180)
                                *((eax_10 << 2) + eax_16)
                                *((eax_12 << 2) + eax_16)
                                int32_t eax_17
                                eax_17.b = edi[2]
                                edi[2] = (divu.dp.d(mulu.dp.d(eax_17, edx_6), ecx_6)).b
                                int32_t eax_22
                                eax_22.b = edi[1]
                                edi[1] = (divu.dp.d(mulu.dp.d(eax_22, edx_6), ecx_6)).b
                                int32_t eax_27
                                eax_27.b = *edi
                                *edi = (divu.dp.d(mulu.dp.d(eax_27, edx_6), ecx_6)).b
                                edi[3] = ecx_6.b
                            else
                                edi[2] = eax_8.b
                                edi[1] = eax_10.b
                                *edi = eax_12.b
                                edi[3] = ebx_12.b
                        else
                            edi[2] = eax_8.b
                            edi[1] = eax_10.b
                            *edi = eax_12.b
                            edi[3] = ebx_12.b
        
        int32_t eax_33 = var_a0_1 + 1
        
        if (eax_33 s>= var_bc)
            eax_33 = 0
        
        var_a0_1 = eax_33
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
