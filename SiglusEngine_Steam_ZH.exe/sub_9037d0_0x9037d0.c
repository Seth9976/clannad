// 函数: sub_9037d0
// 地址: 0x9037d0
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
                        int32_t eax_2
                        eax_2.b = var_3c[2]
                        int32_t eax_4
                        eax_4.b = var_3c[1]
                        int32_t eax_6
                        eax_6.b = *var_3c
                        uint32_t edx_10 = (*(&data_4e3d680 + (eax_2 << 2))
                            + *(&data_4e3e280 + (eax_4 << 2)) + *(&data_4e3de80 + (eax_6 << 2))) u>> 8
                        int32_t var_cc
                        int32_t eax_8 = *(&data_4e3da80 + var_cc)
                        int32_t ebx_7
                        ebx_7.b = var_3c[2]
                        int32_t eax_10 = edx_10 + *(((ebx_7 - edx_10) << 2) + eax_8)
                        int32_t ebx_12
                        ebx_12.b = var_3c[1]
                        int32_t eax_12 = edx_10 + *(((ebx_12 - edx_10) << 2) + eax_8)
                        int32_t ebx_17
                        ebx_17.b = *var_3c
                        int32_t eax_14 = edx_10 + *(((ebx_17 - edx_10) << 2) + eax_8)
                        
                        if (ebx_1 != 0xff)
                            int32_t ebx_27
                            ebx_27.b = edi[3]
                            
                            if (ebx_27 != 0)
                                int32_t eax_17 = *((ebx_1 << 2) + &data_4d6e180)
                                *((eax_12 << 2) + eax_17)
                                *((eax_14 << 2) + eax_17)
                                int32_t eax_18
                                eax_18.b = edi[2]
                                edi[2] = (divu.dp.d(mulu.dp.d(eax_18, edx_6), ecx_7)).b
                                int32_t eax_23
                                eax_23.b = edi[1]
                                edi[1] = (divu.dp.d(mulu.dp.d(eax_23, edx_6), ecx_7)).b
                                int32_t eax_28
                                eax_28.b = *edi
                                *edi = divu.dp.d(mulu.dp.d(eax_28, edx_6), ecx_7).b
                                edi[3] = ecx_7.b
                            else
                                edi[2] = eax_10.b
                                edi[1] = eax_12.b
                                *edi = eax_14.b
                                edi[3] = ebx_1.b
                        else
                            edi[2] = eax_10.b
                            edi[1] = eax_12.b
                            *edi = eax_14.b
                            edi[3] = ebx_1.b
            
            edi = &edi[4]
            temp6_1 = edx
            edx -= var_44
        while (temp6_1 - var_44 s>= 0)
    
    i_1 = i - 1
while (i != 1)
