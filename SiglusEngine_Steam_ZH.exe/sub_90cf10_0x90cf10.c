// 函数: sub_90cf10
// 地址: 0x90cf10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
char* var_54
char* edi = var_54
int32_t var_40
int32_t edx = var_40
int32_t var_28
int32_t i_1 = var_28 + 1
int32_t i

do
    i = i_1
    int32_t temp3_1 = edx
    int32_t var_48
    edx += var_48
    
    if (temp3_1 + var_48 s>= 0)
        int32_t var_44
        int32_t temp6_1
        
        do
            int32_t var_a0
            int32_t var_50
            
            if (edi s>= var_50)
                int32_t var_4c
                
                if (edi s> var_4c)
                    return 
                
                char* var_3c
                int32_t ebx_1
                ebx_1.b = var_3c[3]
                
                if (ebx_1 != 0)
                    void* var_98
                    int32_t eax_1
                    eax_1.b = *(var_98 + var_a0)
                    int32_t var_b4
                    
                    if (var_b4 != 0)
                        eax_1.b = not.b(eax_1.b)
                    
                    char var_b0
                    int32_t var_ac
                    int32_t eax_3 = (eax_1 << var_b0) + var_ac
                    
                    if (eax_3 s< 0)
                        eax_3 = 0
                    else if (eax_3 s> 0xff)
                        eax_3 = 0xff
                    
                    if (eax_3 != 0)
                        int32_t ebx_12 = *(*((eax_3 << 2) + &data_4e3da80) + (ebx_1 << 2))
                        
                        if (ebx_12 != 0)
                            int32_t ecx_4 = ebx_12 << 2
                            int32_t eax_4
                            eax_4.b = edi[3]
                            int32_t eax_5 = eax_4 << 2
                            int32_t ecx_8 = *(*(ecx_4 + &data_4dae580) + eax_5)
                            
                            if (ecx_8 != 0)
                                int32_t edx_6 = *(*(ecx_4 + &data_4dee980) + eax_5)
                                int32_t ebx_14
                                ebx_14.b = var_3c[2]
                                int32_t eax_6
                                eax_6.b = not.b(ebx_14.b)
                                int32_t var_f8
                                int32_t var_ec
                                int32_t var_e0
                                int32_t var_d4
                                int32_t var_d0
                                int32_t eax_11 = var_f8 + *(((var_e0 + *(((eax_6
                                    + *(((ebx_14 - eax_6) << 2) + var_d0) - var_e0) << 2) + var_d4)
                                    - var_f8) << 2) + var_ec)
                                int32_t ebx_27
                                ebx_27.b = var_3c[1]
                                int32_t eax_12
                                eax_12.b = not.b(ebx_27.b)
                                int32_t var_f4
                                int32_t var_e8
                                int32_t var_dc
                                int32_t eax_17 = var_f4 + *(((var_dc + *(((eax_12
                                    + *(((ebx_27 - eax_12) << 2) + var_d0) - var_dc) << 2) + var_d4)
                                    - var_f4) << 2) + var_e8)
                                int32_t ebx_40
                                ebx_40.b = *var_3c
                                int32_t eax_18
                                eax_18.b = not.b(ebx_40.b)
                                int32_t var_f0
                                int32_t var_e4
                                int32_t var_d8
                                int32_t eax_23 = var_f0 + *(((var_d8 + *(((eax_18
                                    + *(((ebx_40 - eax_18) << 2) + var_d0) - var_d8) << 2) + var_d4)
                                    - var_f0) << 2) + var_e4)
                                
                                if (ebx_12 != 0xff)
                                    int32_t ebx_58
                                    ebx_58.b = edi[3]
                                    
                                    if (ebx_58 != 0)
                                        int32_t eax_27 = *((ebx_12 << 2) + &data_4d6e180)
                                        *((eax_17 << 2) + eax_27)
                                        *((eax_23 << 2) + eax_27)
                                        int32_t eax_28
                                        eax_28.b = edi[2]
                                        edi[2] = (divu.dp.d(mulu.dp.d(eax_28, edx_6), ecx_8)).b
                                        int32_t eax_33
                                        eax_33.b = edi[1]
                                        edi[1] = (divu.dp.d(mulu.dp.d(eax_33, edx_6), ecx_8)).b
                                        int32_t eax_38
                                        eax_38.b = *edi
                                        *edi = (divu.dp.d(mulu.dp.d(eax_38, edx_6), ecx_8)).b
                                        edi[3] = ecx_8.b
                                    else
                                        edi[2] = eax_11.b
                                        edi[1] = eax_17.b
                                        *edi = eax_23.b
                                        edi[3] = ebx_12.b
                                else
                                    edi[2] = eax_11.b
                                    edi[1] = eax_17.b
                                    *edi = eax_23.b
                                    edi[3] = ebx_12.b
            
            int32_t eax = var_a0 + 1
            int32_t var_bc
            
            if (eax s>= var_bc)
                eax = 0
            
            var_a0 = eax
            edi = &edi[4]
            temp6_1 = edx
            edx -= var_44
        while (temp6_1 - var_44 s>= 0)
    
    i_1 = i - 1
while (i != 1)
