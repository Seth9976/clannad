// 函数: sub_8a2bc0
// 地址: 0x8a2bc0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
char* var_3c
char* esi_1 = var_3c
char* var_54
char* edi = var_54
int32_t var_40
int32_t edx = var_40
int32_t result_1
int32_t result = result_1
int32_t var_34
int32_t ebx = var_34
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
        int32_t temp5_1
        
        do
            int32_t var_50
            
            if (edi s>= var_50)
                int32_t var_4c
                
                if (edi s> var_4c)
                    return result
                
                int32_t ebx_2
                ebx_2.b = esi_1[3]
                
                if (ebx_2 != 0)
                    int32_t var_11c
                    int32_t ebx_8 = *(*((ebx_2 << 2) + &data_4e3da80) + var_11c)
                    
                    if (ebx_8 != 0)
                        int32_t ecx_3 = ebx_8 << 2
                        int32_t eax
                        eax.b = edi[3]
                        int32_t eax_1 = eax << 2
                        int32_t ecx_7 = *(*(ecx_3 + &data_4dae580) + eax_1)
                        
                        if (ecx_7 != 0)
                            int32_t edx_6 = *(*(ecx_3 + &data_4dee980) + eax_1)
                            int32_t ebx_10
                            ebx_10.b = esi_1[2]
                            int32_t eax_2
                            eax_2.b = not.b(ebx_10.b)
                            int32_t var_f8
                            int32_t var_ec
                            int32_t var_e0
                            int32_t var_d4
                            int32_t var_d0
                            int32_t eax_7 = var_f8 + *(((var_e0 + *(((eax_2
                                + *(((ebx_10 - eax_2) << 2) + var_d0) - var_e0) << 2) + var_d4)
                                - var_f8) << 2) + var_ec)
                            int32_t ebx_23
                            ebx_23.b = esi_1[1]
                            int32_t eax_8
                            eax_8.b = not.b(ebx_23.b)
                            int32_t var_f4
                            int32_t var_e8
                            int32_t var_dc
                            int32_t eax_13 = var_f4 + *(((var_dc + *(((eax_8
                                + *(((ebx_23 - eax_8) << 2) + var_d0) - var_dc) << 2) + var_d4)
                                - var_f4) << 2) + var_e8)
                            int32_t ebx_36
                            ebx_36.b = *esi_1
                            int32_t eax_14
                            eax_14.b = not.b(ebx_36.b)
                            int32_t var_f0
                            int32_t var_e4
                            int32_t var_d8
                            int32_t eax_19 = var_f0 + *(((var_d8 + *(((eax_14
                                + *(((ebx_36 - eax_14) << 2) + var_d0) - var_d8) << 2) + var_d4)
                                - var_f0) << 2) + var_e4)
                            
                            if (ebx_8 != 0xff)
                                int32_t ebx_54
                                ebx_54.b = edi[3]
                                
                                if (ebx_54 != 0)
                                    int32_t eax_23 = *((ebx_8 << 2) + &data_4d6e180)
                                    *((eax_13 << 2) + eax_23)
                                    *((eax_19 << 2) + eax_23)
                                    int32_t eax_24
                                    eax_24.b = edi[2]
                                    edi[2] = (divu.dp.d(mulu.dp.d(eax_24, edx_6), ecx_7)).b
                                    int32_t eax_29
                                    eax_29.b = edi[1]
                                    edi[1] = (divu.dp.d(mulu.dp.d(eax_29, edx_6), ecx_7)).b
                                    int32_t eax_34
                                    eax_34.b = *edi
                                    *edi = (divu.dp.d(mulu.dp.d(eax_34, edx_6), ecx_7)).b
                                    edi[3] = ecx_7.b
                                else
                                    edi[2] = eax_7.b
                                    edi[1] = eax_13.b
                                    *edi = eax_19.b
                                    edi[3] = ebx_8.b
                            else
                                edi[2] = eax_7.b
                                edi[1] = eax_13.b
                                *edi = eax_19.b
                                edi[3] = ebx_8.b
            
            edi = &edi[4]
            temp5_1 = edx
            edx -= var_44
        while (temp5_1 - var_44 s>= 0)
    
    result &= 1
    
    if (result != 0)
        int32_t var_24
        esi_1 = &esi_1[var_24]
        int32_t temp7_1 = ebx
        int32_t var_30
        ebx += var_30
        
        if (temp7_1 + var_30 s>= 0)
            int32_t var_20
            esi_1 = &esi_1[var_20]
            int32_t var_2c
            ebx -= var_2c
    else
        esi_1 = &esi_1[ebx]
    
    i_1 = i - 1
while (i != 1)
return result
