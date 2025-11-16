// 函数: sub_90c3f0
// 地址: 0x90c3f0
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
                    int32_t var_11c
                    int32_t ebx_9 = *(*((eax_3 << 2) + &data_4e3da80) + var_11c)
                    
                    if (ebx_9 != 0)
                        int32_t ecx_4 = ebx_9 << 2
                        int32_t eax_4
                        eax_4.b = edi[3]
                        int32_t eax_5 = eax_4 << 2
                        int32_t ecx_8 = *(*(ecx_4 + &data_4dae580) + eax_5)
                        
                        if (ecx_8 != 0)
                            int32_t edx_6 = *(*(ecx_4 + &data_4dee980) + eax_5)
                            char* var_3c
                            int32_t ebx_11
                            ebx_11.b = var_3c[2]
                            int32_t eax_6
                            eax_6.b = not.b(ebx_11.b)
                            int32_t var_f8
                            int32_t var_ec
                            int32_t var_d0
                            int32_t eax_9 = var_f8 + *(((eax_6 + *(((ebx_11 - eax_6) << 2) + var_d0)
                                - var_f8) << 2) + var_ec)
                            int32_t ebx_20
                            ebx_20.b = var_3c[1]
                            int32_t eax_10
                            eax_10.b = not.b(ebx_20.b)
                            int32_t var_f4
                            int32_t var_e8
                            int32_t eax_13 = var_f4 + *(((eax_10
                                + *(((ebx_20 - eax_10) << 2) + var_d0) - var_f4) << 2) + var_e8)
                            int32_t ebx_29
                            ebx_29.b = *var_3c
                            int32_t eax_14
                            eax_14.b = not.b(ebx_29.b)
                            int32_t var_f0
                            int32_t var_e4
                            int32_t eax_17 = var_f0 + *(((eax_14
                                + *(((ebx_29 - eax_14) << 2) + var_d0) - var_f0) << 2) + var_e4)
                            
                            if (ebx_9 != 0xff)
                                int32_t ebx_43
                                ebx_43.b = edi[3]
                                
                                if (ebx_43 != 0)
                                    int32_t eax_21 = *((ebx_9 << 2) + &data_4d6e180)
                                    *((eax_13 << 2) + eax_21)
                                    *((eax_17 << 2) + eax_21)
                                    int32_t eax_22
                                    eax_22.b = edi[2]
                                    edi[2] = (divu.dp.d(mulu.dp.d(eax_22, edx_6), ecx_8)).b
                                    int32_t eax_27
                                    eax_27.b = edi[1]
                                    edi[1] = (divu.dp.d(mulu.dp.d(eax_27, edx_6), ecx_8)).b
                                    int32_t eax_32
                                    eax_32.b = *edi
                                    *edi = (divu.dp.d(mulu.dp.d(eax_32, edx_6), ecx_8)).b
                                    edi[3] = ecx_8.b
                                else
                                    edi[2] = eax_9.b
                                    edi[1] = eax_13.b
                                    *edi = eax_17.b
                                    edi[3] = ebx_9.b
                            else
                                edi[2] = eax_9.b
                                edi[1] = eax_13.b
                                *edi = eax_17.b
                                edi[3] = ebx_9.b
            
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
