// 函数: sub_8a8b90
// 地址: 0x8a8b90
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
        int32_t temp7_1
        
        do
            int32_t var_a0
            int32_t var_50
            
            if (edi s>= var_50)
                int32_t var_4c
                
                if (edi s> var_4c)
                    return result
                
                void* var_98
                int32_t eax
                eax.b = *(var_98 + var_a0)
                int32_t var_b4
                
                if (var_b4 != 0)
                    eax.b = not.b(eax.b)
                
                char var_b0
                int32_t var_ac
                int32_t eax_2 = (eax << var_b0) + var_ac
                
                if (eax_2 s< 0)
                    eax_2 = 0
                else if (eax_2 s> 0xff)
                    eax_2 = 0xff
                
                if (eax_2 != 0)
                    int32_t var_11c
                    int32_t ebx_10 = *(*((eax_2 << 2) + &data_4e3da80) + var_11c)
                    
                    if (ebx_10 != 0)
                        int32_t ecx_4 = ebx_10 << 2
                        int32_t eax_3
                        eax_3.b = edi[3]
                        int32_t eax_4 = eax_3 << 2
                        int32_t ecx_8 = *(*(ecx_4 + &data_4dae580) + eax_4)
                        
                        if (ecx_8 != 0)
                            int32_t edx_6 = *(*(ecx_4 + &data_4dee980) + eax_4)
                            int32_t eax_5
                            eax_5.b = esi_1[2]
                            int32_t eax_7
                            eax_7.b = esi_1[1]
                            int32_t eax_9
                            eax_9.b = *esi_1
                            uint32_t edx_10 = (*(&data_4e3d680 + (eax_5 << 2))
                                + *(&data_4e3e280 + (eax_7 << 2))
                                + *(&data_4e3de80 + (eax_9 << 2))) u>> 8
                            int32_t var_cc
                            int32_t eax_11 = *(&data_4e3da80 + var_cc)
                            int32_t ebx_16
                            ebx_16.b = esi_1[2]
                            int32_t eax_13 = edx_10 + *(((ebx_16 - edx_10) << 2) + eax_11)
                            int32_t eax_14
                            eax_14.b = not.b(eax_13.b)
                            int32_t var_e0
                            int32_t var_d4
                            int32_t var_d0
                            int32_t eax_17 = var_e0 + *(((eax_14
                                + *(((eax_13 - eax_14) << 2) + var_d0) - var_e0) << 2) + var_d4)
                            int32_t ebx_29
                            ebx_29.b = esi_1[1]
                            int32_t eax_19 = edx_10 + *(((ebx_29 - edx_10) << 2) + eax_11)
                            int32_t eax_20
                            eax_20.b = not.b(eax_19.b)
                            int32_t var_dc
                            int32_t eax_23 = var_dc + *(((eax_20
                                + *(((eax_19 - eax_20) << 2) + var_d0) - var_dc) << 2) + var_d4)
                            int32_t ebx_42
                            ebx_42.b = *esi_1
                            int32_t eax_25 = edx_10 + *(((ebx_42 - edx_10) << 2) + eax_11)
                            int32_t eax_26
                            eax_26.b = not.b(eax_25.b)
                            int32_t var_d8
                            int32_t eax_29 = var_d8 + *(((eax_26
                                + *(((eax_25 - eax_26) << 2) + var_d0) - var_d8) << 2) + var_d4)
                            
                            if (ebx_10 != 0xff)
                                int32_t ebx_60
                                ebx_60.b = edi[3]
                                
                                if (ebx_60 != 0)
                                    int32_t eax_33 = *((ebx_10 << 2) + &data_4d6e180)
                                    *((eax_23 << 2) + eax_33)
                                    *((eax_29 << 2) + eax_33)
                                    int32_t eax_34
                                    eax_34.b = edi[2]
                                    edi[2] = (divu.dp.d(mulu.dp.d(eax_34, edx_6), ecx_8)).b
                                    int32_t eax_39
                                    eax_39.b = edi[1]
                                    edi[1] = (divu.dp.d(mulu.dp.d(eax_39, edx_6), ecx_8)).b
                                    int32_t eax_44
                                    eax_44.b = *edi
                                    *edi = (divu.dp.d(mulu.dp.d(eax_44, edx_6), ecx_8)).b
                                    edi[3] = ecx_8.b
                                else
                                    edi[2] = eax_17.b
                                    edi[1] = eax_23.b
                                    *edi = eax_29.b
                                    edi[3] = ebx_10.b
                            else
                                edi[2] = eax_17.b
                                edi[1] = eax_23.b
                                *edi = eax_29.b
                                edi[3] = ebx_10.b
            
            int32_t eax_50 = var_a0 + 1
            int32_t var_bc
            
            if (eax_50 s>= var_bc)
                eax_50 = 0
            
            var_a0 = eax_50
            edi = &edi[4]
            temp7_1 = edx
            edx -= var_44
        while (temp7_1 - var_44 s>= 0)
    
    result &= 1
    
    if (result != 0)
        int32_t var_24
        esi_1 = &esi_1[var_24]
        int32_t temp5_1 = ebx
        int32_t var_30
        ebx += var_30
        
        if (temp5_1 + var_30 s>= 0)
            int32_t var_20
            esi_1 = &esi_1[var_20]
            int32_t var_2c
            ebx -= var_2c
    else
        esi_1 = &esi_1[ebx]
    
    i_1 = i - 1
while (i != 1)
return result
