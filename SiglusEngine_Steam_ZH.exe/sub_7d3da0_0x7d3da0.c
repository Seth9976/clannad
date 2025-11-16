// 函数: sub_7d3da0
// 地址: 0x7d3da0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
char* var_134
char* edi = var_134
void* var_124
void* esi_1 = var_124
int32_t i_2
int32_t i_1 = i_2
int32_t i

do
    int32_t j_2
    int32_t j_1 = j_2
    int32_t j
    
    do
        int32_t ebx_1
        ebx_1.b = *(esi_1 + 3)
        
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
                    eax_2.b = *(esi_1 + 2)
                    int32_t eax_4
                    eax_4.b = *(esi_1 + 1)
                    int32_t eax_6
                    eax_6.b = *esi_1
                    uint32_t edx_9 = (*(&data_4e3d680 + (eax_2 << 2))
                        + *(&data_4e3e280 + (eax_4 << 2)) + *(&data_4e3de80 + (eax_6 << 2))) u>> 8
                    int32_t var_cc
                    int32_t eax_8 = *(&data_4e3da80 + var_cc)
                    int32_t ebx_13
                    ebx_13.b = *(esi_1 + 2)
                    int32_t var_e0
                    int32_t var_d4
                    int32_t eax_12 = var_e0
                        + *(((edx_9 + *(((ebx_13 - edx_9) << 2) + eax_8) - var_e0) << 2) + var_d4)
                    int32_t ebx_22
                    ebx_22.b = *(esi_1 + 1)
                    int32_t var_dc
                    int32_t eax_16 = var_dc
                        + *(((edx_9 + *(((ebx_22 - edx_9) << 2) + eax_8) - var_dc) << 2) + var_d4)
                    int32_t ebx_31
                    ebx_31.b = *esi_1
                    int32_t var_d8
                    int32_t eax_20 = var_d8
                        + *(((edx_9 + *(((ebx_31 - edx_9) << 2) + eax_8) - var_d8) << 2) + var_d4)
                    
                    if (ebx_7 != 0xff)
                        int32_t ebx_45
                        ebx_45.b = edi[3]
                        
                        if (ebx_45 != 0)
                            int32_t eax_23 = *((ebx_7 << 2) + &data_4d6e180)
                            *((eax_16 << 2) + eax_23)
                            *((eax_20 << 2) + eax_23)
                            int32_t eax_24
                            eax_24.b = edi[2]
                            edi[2] = (divu.dp.d(mulu.dp.d(eax_24, edx_5), ecx_5)).b
                            int32_t eax_29
                            eax_29.b = edi[1]
                            edi[1] = (divu.dp.d(mulu.dp.d(eax_29, edx_5), ecx_5)).b
                            int32_t eax_34
                            eax_34.b = *edi
                            *edi = divu.dp.d(mulu.dp.d(eax_34, edx_5), ecx_5).b
                            edi[3] = ecx_5.b
                        else
                            edi[2] = eax_12.b
                            edi[1] = eax_16.b
                            *edi = eax_20.b
                            edi[3] = ebx_7.b
                    else
                        edi[2] = eax_12.b
                        edi[1] = eax_16.b
                        *edi = eax_20.b
                        edi[3] = ebx_7.b
        
        esi_1 += 4
        edi = &edi[4]
        j = j_1
        j_1 -= 1
    while (j != 1)
    int32_t var_120
    esi_1 += var_120
    int32_t var_130
    edi = &edi[var_130]
    i = i_1
    i_1 -= 1
while (i != 1)
