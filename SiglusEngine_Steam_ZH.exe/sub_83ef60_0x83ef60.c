// 函数: sub_83ef60
// 地址: 0x83ef60
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
                        int32_t eax_7
                        eax_7.b = var_124[2]
                        int32_t eax_9
                        eax_9.b = var_124[1]
                        int32_t eax_11
                        eax_11.b = *var_124
                        uint32_t edx_10 = (*(&data_4e3d680 + (eax_7 << 2))
                            + *(&data_4e3e280 + (eax_9 << 2)) + *(&data_4e3de80 + (eax_11 << 2))) u>> 8
                        int32_t var_cc
                        int32_t eax_13 = *(&data_4e3da80 + var_cc)
                        int32_t ebx_18
                        ebx_18.b = var_124[2]
                        int32_t eax_15 = edx_10 + *(((ebx_18 - edx_10) << 2) + eax_13)
                        int32_t eax_16
                        eax_16.b = not.b(eax_15.b)
                        int32_t var_f8
                        int32_t var_ec
                        int32_t var_d0
                        int32_t eax_19 = var_f8 + *(((eax_16 + *(((eax_15 - eax_16) << 2) + var_d0)
                            - var_f8) << 2) + var_ec)
                        int32_t ebx_31
                        ebx_31.b = var_124[1]
                        int32_t eax_21 = edx_10 + *(((ebx_31 - edx_10) << 2) + eax_13)
                        int32_t eax_22
                        eax_22.b = not.b(eax_21.b)
                        int32_t var_f4
                        int32_t var_e8
                        int32_t eax_25 = var_f4 + *(((eax_22 + *(((eax_21 - eax_22) << 2) + var_d0)
                            - var_f4) << 2) + var_e8)
                        int32_t ebx_44
                        ebx_44.b = *var_124
                        int32_t eax_27 = edx_10 + *(((ebx_44 - edx_10) << 2) + eax_13)
                        int32_t eax_28
                        eax_28.b = not.b(eax_27.b)
                        int32_t var_f0
                        int32_t var_e4
                        int32_t eax_31 = var_f0 + *(((eax_28 + *(((eax_27 - eax_28) << 2) + var_d0)
                            - var_f0) << 2) + var_e4)
                        
                        if (ebx_12 != 0xff)
                            int32_t ebx_62
                            ebx_62.b = edi[3]
                            
                            if (ebx_62 != 0)
                                int32_t eax_35 = *((ebx_12 << 2) + &data_4d6e180)
                                *((eax_25 << 2) + eax_35)
                                *((eax_31 << 2) + eax_35)
                                int32_t eax_36
                                eax_36.b = edi[2]
                                edi[2] = (divu.dp.d(mulu.dp.d(eax_36, edx_6), ecx_6)).b
                                int32_t eax_41
                                eax_41.b = edi[1]
                                edi[1] = (divu.dp.d(mulu.dp.d(eax_41, edx_6), ecx_6)).b
                                int32_t eax_46
                                eax_46.b = *edi
                                *edi = (divu.dp.d(mulu.dp.d(eax_46, edx_6), ecx_6)).b
                                edi[3] = ecx_6.b
                            else
                                edi[2] = eax_19.b
                                edi[1] = eax_25.b
                                *edi = eax_31.b
                                edi[3] = ebx_12.b
                        else
                            edi[2] = eax_19.b
                            edi[1] = eax_25.b
                            *edi = eax_31.b
                            edi[3] = ebx_12.b
        
        int32_t eax_52 = var_a0_1 + 1
        
        if (eax_52 s>= var_bc)
            eax_52 = 0
        
        var_a0_1 = eax_52
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
