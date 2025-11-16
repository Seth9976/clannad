// 函数: sub_9050e0
// 地址: 0x9050e0
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
                    int32_t ecx_3 = ebx_1 << 2
                    int32_t eax_1
                    eax_1.b = edi[3]
                    int32_t eax = eax_1 << 2
                    int32_t ecx_7 = *(*(ecx_3 + &data_4dae580) + eax)
                    
                    if (ecx_7 != 0)
                        int32_t edx_6 = *(*(ecx_3 + &data_4dee980) + eax)
                        int32_t ebx_3
                        ebx_3.b = var_3c[2]
                        int32_t eax_2
                        eax_2.b = not.b(ebx_3.b)
                        int32_t var_e0
                        int32_t var_d4
                        int32_t var_d0
                        int32_t eax_5 = var_e0 +
                            *(((eax_2 + *(((ebx_3 - eax_2) << 2) + var_d0) - var_e0) << 2) + var_d4)
                        int32_t ebx_12
                        ebx_12.b = var_3c[1]
                        int32_t eax_6
                        eax_6.b = not.b(ebx_12.b)
                        int32_t var_dc
                        int32_t eax_9 = var_dc + *(((eax_6 + *(((ebx_12 - eax_6) << 2) + var_d0)
                            - var_dc) << 2) + var_d4)
                        int32_t ebx_21
                        ebx_21.b = *var_3c
                        int32_t eax_10
                        eax_10.b = not.b(ebx_21.b)
                        int32_t var_d8
                        int32_t eax_13 = var_d8 + *(((eax_10 + *(((ebx_21 - eax_10) << 2) + var_d0)
                            - var_d8) << 2) + var_d4)
                        
                        if (ebx_1 != 0xff)
                            int32_t ebx_35
                            ebx_35.b = edi[3]
                            
                            if (ebx_35 != 0)
                                int32_t eax_16 = *((ebx_1 << 2) + &data_4d6e180)
                                *((eax_9 << 2) + eax_16)
                                *((eax_13 << 2) + eax_16)
                                int32_t eax_17
                                eax_17.b = edi[2]
                                edi[2] = (divu.dp.d(mulu.dp.d(eax_17, edx_6), ecx_7)).b
                                int32_t eax_22
                                eax_22.b = edi[1]
                                edi[1] = (divu.dp.d(mulu.dp.d(eax_22, edx_6), ecx_7)).b
                                int32_t eax_27
                                eax_27.b = *edi
                                *edi = divu.dp.d(mulu.dp.d(eax_27, edx_6), ecx_7).b
                                edi[3] = ecx_7.b
                            else
                                edi[2] = eax_5.b
                                edi[1] = eax_9.b
                                *edi = eax_13.b
                                edi[3] = ebx_1.b
                        else
                            edi[2] = eax_5.b
                            edi[1] = eax_9.b
                            *edi = eax_13.b
                            edi[3] = ebx_1.b
            
            edi = &edi[4]
            temp6_1 = edx
            edx -= var_44
        while (temp6_1 - var_44 s>= 0)
    
    i_1 = i - 1
while (i != 1)
