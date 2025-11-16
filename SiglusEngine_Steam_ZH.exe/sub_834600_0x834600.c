// 函数: sub_834600
// 地址: 0x834600
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
                    int32_t ebx_9
                    ebx_9.b = var_124[2]
                    int32_t var_f8
                    int32_t var_ec
                    int32_t var_e0
                    int32_t var_d4
                    int32_t eax_5 = var_f8 +
                        *(((var_e0 + *(((ebx_9 - var_e0) << 2) + var_d4) - var_f8) << 2) + var_ec)
                    int32_t ebx_18
                    ebx_18.b = var_124[1]
                    int32_t var_f4
                    int32_t var_e8
                    int32_t var_dc
                    int32_t eax_9 = var_f4 +
                        *(((var_dc + *(((ebx_18 - var_dc) << 2) + var_d4) - var_f4) << 2) + var_e8)
                    int32_t ebx_27
                    ebx_27.b = *var_124
                    int32_t var_f0
                    int32_t var_e4
                    int32_t var_d8
                    int32_t eax_13 = var_f0 +
                        *(((var_d8 + *(((ebx_27 - var_d8) << 2) + var_d4) - var_f0) << 2) + var_e4)
                    
                    if (ebx_7 != 0xff)
                        int32_t ebx_41
                        ebx_41.b = edi[3]
                        
                        if (ebx_41 != 0)
                            int32_t eax_16 = *((ebx_7 << 2) + &data_4d6e180)
                            *((eax_9 << 2) + eax_16)
                            *((eax_13 << 2) + eax_16)
                            int32_t eax_17
                            eax_17.b = edi[2]
                            edi[2] = (divu.dp.d(mulu.dp.d(eax_17, edx_5), ecx_5)).b
                            int32_t eax_22
                            eax_22.b = edi[1]
                            edi[1] = (divu.dp.d(mulu.dp.d(eax_22, edx_5), ecx_5)).b
                            int32_t eax_27
                            eax_27.b = *edi
                            *edi = divu.dp.d(mulu.dp.d(eax_27, edx_5), ecx_5).b
                            edi[3] = ecx_5.b
                        else
                            edi[2] = eax_5.b
                            edi[1] = eax_9.b
                            *edi = eax_13.b
                            edi[3] = ebx_7.b
                    else
                        edi[2] = eax_5.b
                        edi[1] = eax_9.b
                        *edi = eax_13.b
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
