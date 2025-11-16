// 函数: sub_7d78a0
// 地址: 0x7d78a0
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
            int32_t ecx_1 = ebx_1 << 2
            int32_t eax_1
            eax_1.b = edi[3]
            int32_t eax = eax_1 << 2
            int32_t ecx_5 = *(*(ecx_1 + &data_4dae580) + eax)
            
            if (ecx_5 != 0)
                int32_t edx_5 = *(*(ecx_1 + &data_4dee980) + eax)
                int32_t ebx_3
                ebx_3.b = *(esi_1 + 2)
                int32_t eax_2
                eax_2.b = not.b(ebx_3.b)
                int32_t var_f8
                int32_t var_ec
                int32_t var_e0
                int32_t var_d4
                int32_t var_d0
                int32_t eax_7 = var_f8 + *(((var_e0
                    + *(((eax_2 + *(((ebx_3 - eax_2) << 2) + var_d0) - var_e0) << 2) + var_d4)
                    - var_f8) << 2) + var_ec)
                int32_t ebx_16
                ebx_16.b = *(esi_1 + 1)
                int32_t eax_8
                eax_8.b = not.b(ebx_16.b)
                int32_t var_f4
                int32_t var_e8
                int32_t var_dc
                int32_t eax_13 = var_f4 + *(((var_dc
                    + *(((eax_8 + *(((ebx_16 - eax_8) << 2) + var_d0) - var_dc) << 2) + var_d4)
                    - var_f4) << 2) + var_e8)
                int32_t ebx_29
                ebx_29.b = *esi_1
                int32_t eax_14
                eax_14.b = not.b(ebx_29.b)
                int32_t var_f0
                int32_t var_e4
                int32_t var_d8
                int32_t eax_19 = var_f0 + *(((var_d8
                    + *(((eax_14 + *(((ebx_29 - eax_14) << 2) + var_d0) - var_d8) << 2) + var_d4)
                    - var_f0) << 2) + var_e4)
                
                if (ebx_1 != 0xff)
                    int32_t ebx_47
                    ebx_47.b = edi[3]
                    
                    if (ebx_47 != 0)
                        int32_t eax_22 = *((ebx_1 << 2) + &data_4d6e180)
                        *((eax_13 << 2) + eax_22)
                        *((eax_19 << 2) + eax_22)
                        int32_t eax_23
                        eax_23.b = edi[2]
                        edi[2] = (divu.dp.d(mulu.dp.d(eax_23, edx_5), ecx_5)).b
                        int32_t eax_28
                        eax_28.b = edi[1]
                        edi[1] = (divu.dp.d(mulu.dp.d(eax_28, edx_5), ecx_5)).b
                        int32_t eax_33
                        eax_33.b = *edi
                        *edi = divu.dp.d(mulu.dp.d(eax_33, edx_5), ecx_5).b
                        edi[3] = ecx_5.b
                    else
                        edi[2] = eax_7.b
                        edi[1] = eax_13.b
                        *edi = eax_19.b
                        edi[3] = ebx_1.b
                else
                    edi[2] = eax_7.b
                    edi[1] = eax_13.b
                    *edi = eax_19.b
                    edi[3] = ebx_1.b
        
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
