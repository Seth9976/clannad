// 函数: sub_842930
// 地址: 0x842930
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
                        int32_t ecx_2 = ebx_18 << 2
                        int32_t eax_5
                        eax_5.b = edi[3]
                        int32_t eax_6 = eax_5 << 2
                        int32_t ecx_6 = *(*(ecx_2 + &data_4dae580) + eax_6)
                        
                        if (ecx_6 != 0)
                            int32_t edx_6 = *(*(ecx_2 + &data_4dee980) + eax_6)
                            int32_t ebx_20
                            ebx_20.b = var_124[2]
                            int32_t eax_7
                            eax_7.b = not.b(ebx_20.b)
                            int32_t var_f8
                            int32_t var_ec
                            int32_t var_d0
                            int32_t eax_10 = var_f8 + *(((eax_7
                                + *(((ebx_20 - eax_7) << 2) + var_d0) - var_f8) << 2) + var_ec)
                            int32_t ebx_29
                            ebx_29.b = var_124[1]
                            int32_t eax_11
                            eax_11.b = not.b(ebx_29.b)
                            int32_t var_f4
                            int32_t var_e8
                            int32_t eax_14 = var_f4 + *(((eax_11
                                + *(((ebx_29 - eax_11) << 2) + var_d0) - var_f4) << 2) + var_e8)
                            int32_t ebx_38
                            ebx_38.b = *var_124
                            int32_t eax_15
                            eax_15.b = not.b(ebx_38.b)
                            int32_t var_f0
                            int32_t var_e4
                            int32_t eax_18 = var_f0 + *(((eax_15
                                + *(((ebx_38 - eax_15) << 2) + var_d0) - var_f0) << 2) + var_e4)
                            
                            if (ebx_18 != 0xff)
                                int32_t ebx_52
                                ebx_52.b = edi[3]
                                
                                if (ebx_52 != 0)
                                    int32_t eax_22 = *((ebx_18 << 2) + &data_4d6e180)
                                    *((eax_14 << 2) + eax_22)
                                    *((eax_18 << 2) + eax_22)
                                    int32_t eax_23
                                    eax_23.b = edi[2]
                                    edi[2] = (divu.dp.d(mulu.dp.d(eax_23, edx_6), ecx_6)).b
                                    int32_t eax_28
                                    eax_28.b = edi[1]
                                    edi[1] = (divu.dp.d(mulu.dp.d(eax_28, edx_6), ecx_6)).b
                                    int32_t eax_33
                                    eax_33.b = *edi
                                    *edi = (divu.dp.d(mulu.dp.d(eax_33, edx_6), ecx_6)).b
                                    edi[3] = ecx_6.b
                                else
                                    edi[2] = eax_10.b
                                    edi[1] = eax_14.b
                                    *edi = eax_18.b
                                    edi[3] = ebx_18.b
                            else
                                edi[2] = eax_10.b
                                edi[1] = eax_14.b
                                *edi = eax_18.b
                                edi[3] = ebx_18.b
        
        int32_t eax_39 = var_a0_1 + 1
        
        if (eax_39 s>= var_bc)
            eax_39 = 0
        
        var_a0_1 = eax_39
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
