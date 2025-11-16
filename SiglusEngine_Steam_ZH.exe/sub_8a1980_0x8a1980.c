// 函数: sub_8a1980
// 地址: 0x8a1980
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
                            int32_t eax_2
                            eax_2.b = esi_1[2]
                            int32_t eax_4
                            eax_4.b = esi_1[1]
                            int32_t eax_6
                            eax_6.b = *esi_1
                            uint32_t edx_10 = (*(&data_4e3d680 + (eax_2 << 2))
                                + *(&data_4e3e280 + (eax_4 << 2))
                                + *(&data_4e3de80 + (eax_6 << 2))) u>> 8
                            int32_t var_cc
                            int32_t eax_8 = *(&data_4e3da80 + var_cc)
                            int32_t ebx_14
                            ebx_14.b = esi_1[2]
                            int32_t eax_10 = edx_10 + *(((ebx_14 - edx_10) << 2) + eax_8)
                            int32_t ebx_19
                            ebx_19.b = esi_1[1]
                            int32_t eax_12 = edx_10 + *(((ebx_19 - edx_10) << 2) + eax_8)
                            int32_t ebx_24
                            ebx_24.b = *esi_1
                            int32_t eax_14 = edx_10 + *(((ebx_24 - edx_10) << 2) + eax_8)
                            
                            if (ebx_8 != 0xff)
                                int32_t ebx_34
                                ebx_34.b = edi[3]
                                
                                if (ebx_34 != 0)
                                    int32_t eax_18 = *((ebx_8 << 2) + &data_4d6e180)
                                    *((eax_12 << 2) + eax_18)
                                    *((eax_14 << 2) + eax_18)
                                    int32_t eax_19
                                    eax_19.b = edi[2]
                                    edi[2] = (divu.dp.d(mulu.dp.d(eax_19, edx_6), ecx_7)).b
                                    int32_t eax_24
                                    eax_24.b = edi[1]
                                    edi[1] = (divu.dp.d(mulu.dp.d(eax_24, edx_6), ecx_7)).b
                                    int32_t eax_29
                                    eax_29.b = *edi
                                    *edi = (divu.dp.d(mulu.dp.d(eax_29, edx_6), ecx_7)).b
                                    edi[3] = ecx_7.b
                                else
                                    edi[2] = eax_10.b
                                    edi[1] = eax_12.b
                                    *edi = eax_14.b
                                    edi[3] = ebx_8.b
                            else
                                edi[2] = eax_10.b
                                edi[1] = eax_12.b
                                *edi = eax_14.b
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
