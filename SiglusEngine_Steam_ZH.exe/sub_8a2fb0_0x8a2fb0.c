// 函数: sub_8a2fb0
// 地址: 0x8a2fb0
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
                    int32_t ecx_3 = ebx_2 << 2
                    int32_t eax
                    eax.b = edi[3]
                    int32_t eax_1 = eax << 2
                    int32_t ecx_7 = *(*(ecx_3 + &data_4dae580) + eax_1)
                    
                    if (ecx_7 != 0)
                        int32_t edx_6 = *(*(ecx_3 + &data_4dee980) + eax_1)
                        int32_t ebx_4
                        ebx_4.b = esi_1[2]
                        int32_t eax_2
                        eax_2.b = not.b(ebx_4.b)
                        int32_t var_e0
                        int32_t var_d4
                        int32_t var_d0
                        int32_t eax_5 = var_e0 +
                            *(((eax_2 + *(((ebx_4 - eax_2) << 2) + var_d0) - var_e0) << 2) + var_d4)
                        int32_t ebx_13
                        ebx_13.b = esi_1[1]
                        int32_t eax_6
                        eax_6.b = not.b(ebx_13.b)
                        int32_t var_dc
                        int32_t eax_9 = var_dc + *(((eax_6 + *(((ebx_13 - eax_6) << 2) + var_d0)
                            - var_dc) << 2) + var_d4)
                        int32_t ebx_22
                        ebx_22.b = *esi_1
                        int32_t eax_10
                        eax_10.b = not.b(ebx_22.b)
                        int32_t var_d8
                        int32_t eax_13 = var_d8 + *(((eax_10 + *(((ebx_22 - eax_10) << 2) + var_d0)
                            - var_d8) << 2) + var_d4)
                        
                        if (ebx_2 != 0xff)
                            int32_t ebx_36
                            ebx_36.b = edi[3]
                            
                            if (ebx_36 != 0)
                                int32_t eax_17 = *((ebx_2 << 2) + &data_4d6e180)
                                *((eax_9 << 2) + eax_17)
                                *((eax_13 << 2) + eax_17)
                                int32_t eax_18
                                eax_18.b = edi[2]
                                edi[2] = (divu.dp.d(mulu.dp.d(eax_18, edx_6), ecx_7)).b
                                int32_t eax_23
                                eax_23.b = edi[1]
                                edi[1] = (divu.dp.d(mulu.dp.d(eax_23, edx_6), ecx_7)).b
                                int32_t eax_28
                                eax_28.b = *edi
                                *edi = (divu.dp.d(mulu.dp.d(eax_28, edx_6), ecx_7)).b
                                edi[3] = ecx_7.b
                            else
                                edi[2] = eax_5.b
                                edi[1] = eax_9.b
                                *edi = eax_13.b
                                edi[3] = ebx_2.b
                        else
                            edi[2] = eax_5.b
                            edi[1] = eax_9.b
                            *edi = eax_13.b
                            edi[3] = ebx_2.b
            
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
