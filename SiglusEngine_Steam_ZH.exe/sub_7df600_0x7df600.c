// 函数: sub_7df600
// 地址: 0x7df600
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
                        int32_t ecx_2 = ebx_18 << 2
                        int32_t eax_5
                        eax_5.b = edi[3]
                        int32_t eax_6 = eax_5 << 2
                        int32_t ecx_6 = *(*(ecx_2 + &data_4dae580) + eax_6)
                        
                        if (ecx_6 != 0)
                            int32_t edx_6 = *(*(ecx_2 + &data_4dee980) + eax_6)
                            int32_t eax_7
                            eax_7.b = esi_1[2]
                            int32_t eax_9
                            eax_9.b = esi_1[1]
                            int32_t eax_11
                            eax_11.b = *esi_1
                            uint32_t edx_10 = (*(&data_4e3d680 + (eax_7 << 2))
                                + *(&data_4e3e280 + (eax_9 << 2))
                                + *(&data_4e3de80 + (eax_11 << 2))) u>> 8
                            int32_t var_cc
                            int32_t eax_13 = *(&data_4e3da80 + var_cc)
                            int32_t ebx_24
                            ebx_24.b = esi_1[2]
                            int32_t eax_15 = edx_10 + *(((ebx_24 - edx_10) << 2) + eax_13)
                            int32_t ebx_29
                            ebx_29.b = esi_1[1]
                            int32_t eax_17 = edx_10 + *(((ebx_29 - edx_10) << 2) + eax_13)
                            int32_t ebx_34
                            ebx_34.b = *esi_1
                            int32_t eax_19 = edx_10 + *(((ebx_34 - edx_10) << 2) + eax_13)
                            
                            if (ebx_18 != 0xff)
                                int32_t ebx_44
                                ebx_44.b = edi[3]
                                
                                if (ebx_44 != 0)
                                    int32_t eax_23 = *((ebx_18 << 2) + &data_4d6e180)
                                    *((eax_17 << 2) + eax_23)
                                    *((eax_19 << 2) + eax_23)
                                    int32_t eax_24
                                    eax_24.b = edi[2]
                                    edi[2] = (divu.dp.d(mulu.dp.d(eax_24, edx_6), ecx_6)).b
                                    int32_t eax_29
                                    eax_29.b = edi[1]
                                    edi[1] = (divu.dp.d(mulu.dp.d(eax_29, edx_6), ecx_6)).b
                                    int32_t eax_34
                                    eax_34.b = *edi
                                    *edi = (divu.dp.d(mulu.dp.d(eax_34, edx_6), ecx_6)).b
                                    edi[3] = ecx_6.b
                                else
                                    edi[2] = eax_15.b
                                    edi[1] = eax_17.b
                                    *edi = eax_19.b
                                    edi[3] = ebx_18.b
                            else
                                edi[2] = eax_15.b
                                edi[1] = eax_17.b
                                *edi = eax_19.b
                                edi[3] = ebx_18.b
        
        int32_t eax_40 = var_a0_1 + 1
        
        if (eax_40 s>= var_bc)
            eax_40 = 0
        
        var_a0_1 = eax_40
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
