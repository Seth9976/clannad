// 函数: sub_837280
// 地址: 0x837280
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
char* var_134
char* edi = var_134
int32_t i_2
int32_t i_1 = i_2
int32_t i

do
    int32_t j_2
    int32_t j_1 = j_2
    int32_t j
    
    do
        char* var_124
        int32_t ebx_1
        ebx_1.b = var_124[3]
        
        if (ebx_1 != 0)
            int32_t var_11c
            int32_t ebx_7 = *(*((ebx_1 << 2) + &data_4e3da80) + var_11c)
            
            if (ebx_7 != 0)
                int32_t ecx_1 = ebx_7 << 2
                int32_t eax_1
                eax_1.b = edi[3]
                int32_t eax = eax_1 << 2
                int32_t ecx_5 = *(*(ecx_1 + &data_4dae580) + eax)
                
                if (ecx_5 != 0)
                    int32_t edx_5 = *(*(ecx_1 + &data_4dee980) + eax)
                    int32_t eax_2
                    eax_2.b = var_124[2]
                    int32_t eax_4
                    eax_4.b = var_124[1]
                    int32_t eax_6
                    eax_6.b = *var_124
                    uint32_t edx_9 = (*(&data_4e3d680 + (eax_2 << 2))
                        + *(&data_4e3e280 + (eax_4 << 2)) + *(&data_4e3de80 + (eax_6 << 2))) u>> 8
                    int32_t var_cc
                    int32_t eax_8 = *(&data_4e3da80 + var_cc)
                    int32_t ebx_13
                    ebx_13.b = var_124[2]
                    int32_t eax_10 = edx_9 + *(((ebx_13 - edx_9) << 2) + eax_8)
                    int32_t eax_11
                    eax_11.b = not.b(eax_10.b)
                    int32_t var_f8
                    int32_t var_ec
                    int32_t var_d0
                    int32_t eax_14 = var_f8 +
                        *(((eax_11 + *(((eax_10 - eax_11) << 2) + var_d0) - var_f8) << 2) + var_ec)
                    int32_t ebx_26
                    ebx_26.b = var_124[1]
                    int32_t eax_16 = edx_9 + *(((ebx_26 - edx_9) << 2) + eax_8)
                    int32_t eax_17
                    eax_17.b = not.b(eax_16.b)
                    int32_t var_f4
                    int32_t var_e8
                    int32_t eax_20 = var_f4 +
                        *(((eax_17 + *(((eax_16 - eax_17) << 2) + var_d0) - var_f4) << 2) + var_e8)
                    int32_t ebx_39
                    ebx_39.b = *var_124
                    int32_t eax_22 = edx_9 + *(((ebx_39 - edx_9) << 2) + eax_8)
                    int32_t eax_23
                    eax_23.b = not.b(eax_22.b)
                    int32_t var_f0
                    int32_t var_e4
                    int32_t eax_26 = var_f0 +
                        *(((eax_23 + *(((eax_22 - eax_23) << 2) + var_d0) - var_f0) << 2) + var_e4)
                    
                    if (ebx_7 != 0xff)
                        int32_t ebx_57
                        ebx_57.b = edi[3]
                        
                        if (ebx_57 != 0)
                            int32_t eax_29 = *((ebx_7 << 2) + &data_4d6e180)
                            *((eax_20 << 2) + eax_29)
                            *((eax_26 << 2) + eax_29)
                            int32_t eax_30
                            eax_30.b = edi[2]
                            edi[2] = (divu.dp.d(mulu.dp.d(eax_30, edx_5), ecx_5)).b
                            int32_t eax_35
                            eax_35.b = edi[1]
                            edi[1] = (divu.dp.d(mulu.dp.d(eax_35, edx_5), ecx_5)).b
                            int32_t eax_40
                            eax_40.b = *edi
                            *edi = divu.dp.d(mulu.dp.d(eax_40, edx_5), ecx_5).b
                            edi[3] = ecx_5.b
                        else
                            edi[2] = eax_14.b
                            edi[1] = eax_20.b
                            *edi = eax_26.b
                            edi[3] = ebx_7.b
                    else
                        edi[2] = eax_14.b
                        edi[1] = eax_20.b
                        *edi = eax_26.b
                        edi[3] = ebx_7.b
        
        edi = &edi[4]
        j = j_1
        j_1 -= 1
    while (j != 1)
    int32_t var_130
    edi = &edi[var_130]
    i = i_1
    i_1 -= 1
while (i != 1)
