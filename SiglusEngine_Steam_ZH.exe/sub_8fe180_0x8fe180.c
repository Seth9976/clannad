// 函数: sub_8fe180
// 地址: 0x8fe180
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
            int32_t var_50
            
            if (edi s>= var_50)
                int32_t var_4c
                
                if (edi s> var_4c)
                    return 
                
                char* var_3c
                int32_t ebx_1
                ebx_1.b = var_3c[3]
                
                if (ebx_1 != 0)
                    int32_t var_11c
                    int32_t ebx_7 = *(*((ebx_1 << 2) + &data_4e3da80) + var_11c)
                    
                    if (ebx_7 != 0)
                        int32_t ecx_3 = ebx_7 << 2
                        int32_t eax_1
                        eax_1.b = edi[3]
                        int32_t eax = eax_1 << 2
                        int32_t ecx_7 = *(*(ecx_3 + &data_4dae580) + eax)
                        
                        if (ecx_7 != 0)
                            int32_t edx_6 = *(*(ecx_3 + &data_4dee980) + eax)
                            int32_t ebx_9
                            ebx_9.b = var_3c[2]
                            int32_t var_f8
                            int32_t var_ec
                            int32_t eax_3 = var_f8 + *(((ebx_9 - var_f8) << 2) + var_ec)
                            int32_t ebx_14
                            ebx_14.b = var_3c[1]
                            int32_t var_f4
                            int32_t var_e8
                            int32_t eax_5 = var_f4 + *(((ebx_14 - var_f4) << 2) + var_e8)
                            int32_t ebx_19
                            ebx_19.b = *var_3c
                            int32_t var_f0
                            int32_t var_e4
                            int32_t eax_7 = var_f0 + *(((ebx_19 - var_f0) << 2) + var_e4)
                            
                            if (ebx_7 != 0xff)
                                int32_t ebx_29
                                ebx_29.b = edi[3]
                                
                                if (ebx_29 != 0)
                                    int32_t eax_10 = *((ebx_7 << 2) + &data_4d6e180)
                                    *((eax_5 << 2) + eax_10)
                                    *((eax_7 << 2) + eax_10)
                                    int32_t eax_11
                                    eax_11.b = edi[2]
                                    edi[2] = (divu.dp.d(mulu.dp.d(eax_11, edx_6), ecx_7)).b
                                    int32_t eax_16
                                    eax_16.b = edi[1]
                                    edi[1] = (divu.dp.d(mulu.dp.d(eax_16, edx_6), ecx_7)).b
                                    int32_t eax_21
                                    eax_21.b = *edi
                                    *edi = divu.dp.d(mulu.dp.d(eax_21, edx_6), ecx_7).b
                                    edi[3] = ecx_7.b
                                else
                                    edi[2] = eax_3.b
                                    edi[1] = eax_5.b
                                    *edi = eax_7.b
                                    edi[3] = ebx_7.b
                            else
                                edi[2] = eax_3.b
                                edi[1] = eax_5.b
                                *edi = eax_7.b
                                edi[3] = ebx_7.b
            
            edi = &edi[4]
            temp6_1 = edx
            edx -= var_44
        while (temp6_1 - var_44 s>= 0)
    
    i_1 = i - 1
while (i != 1)
