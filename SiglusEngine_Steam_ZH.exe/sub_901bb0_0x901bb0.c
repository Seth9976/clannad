// 函数: sub_901bb0
// 地址: 0x901bb0
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
                        int32_t eax_11
                        eax_11.b = not.b(eax_10.b)
                        int32_t var_f8
                        int32_t var_ec
                        int32_t var_e0
                        int32_t var_d4
                        int32_t var_d0
                        int32_t eax_16 = var_f8 + *(((var_e0 + *(((eax_11
                            + *(((eax_10 - eax_11) << 2) + var_d0) - var_e0) << 2) + var_d4) - var_f8)
                            << 2) + var_ec)
                        int32_t ebx_24
                        ebx_24.b = var_3c[1]
                        int32_t eax_18 = edx_10 + *(((ebx_24 - edx_10) << 2) + eax_8)
                        int32_t eax_19
                        eax_19.b = not.b(eax_18.b)
                        int32_t var_f4
                        int32_t var_e8
                        int32_t var_dc
                        int32_t eax_24 = var_f4 + *(((var_dc + *(((eax_19
                            + *(((eax_18 - eax_19) << 2) + var_d0) - var_dc) << 2) + var_d4) - var_f4)
                            << 2) + var_e8)
                        int32_t ebx_41
                        ebx_41.b = *var_3c
                        int32_t eax_26 = edx_10 + *(((ebx_41 - edx_10) << 2) + eax_8)
                        int32_t eax_27
                        eax_27.b = not.b(eax_26.b)
                        int32_t var_f0
                        int32_t var_e4
                        int32_t var_d8
                        int32_t eax_32 = var_f0 + *(((var_d8 + *(((eax_27
                            + *(((eax_26 - eax_27) << 2) + var_d0) - var_d8) << 2) + var_d4) - var_f0)
                            << 2) + var_e4)
                        
                        if (ebx_1 != 0xff)
                            int32_t ebx_63
                            ebx_63.b = edi[3]
                            
                            if (ebx_63 != 0)
                                int32_t eax_35 = *((ebx_1 << 2) + &data_4d6e180)
                                *((eax_24 << 2) + eax_35)
                                *((eax_32 << 2) + eax_35)
                                int32_t eax_36
                                eax_36.b = edi[2]
                                edi[2] = (divu.dp.d(mulu.dp.d(eax_36, edx_6), ecx_7)).b
                                int32_t eax_41
                                eax_41.b = edi[1]
                                edi[1] = (divu.dp.d(mulu.dp.d(eax_41, edx_6), ecx_7)).b
                                int32_t eax_46
                                eax_46.b = *edi
                                *edi = divu.dp.d(mulu.dp.d(eax_46, edx_6), ecx_7).b
                                edi[3] = ecx_7.b
                            else
                                edi[2] = eax_16.b
                                edi[1] = eax_24.b
                                *edi = eax_32.b
                                edi[3] = ebx_1.b
                        else
                            edi[2] = eax_16.b
                            edi[1] = eax_24.b
                            *edi = eax_32.b
                            edi[3] = ebx_1.b
            
            edi = &edi[4]
            temp6_1 = edx
            edx -= var_44
        while (temp6_1 - var_44 s>= 0)
    
    i_1 = i - 1
while (i != 1)
