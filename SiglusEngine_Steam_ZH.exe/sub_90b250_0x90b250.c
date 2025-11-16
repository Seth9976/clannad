// 函数: sub_90b250
// 地址: 0x90b250
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
            int32_t var_a0
            int32_t var_50
            
            if (edi s>= var_50)
                int32_t var_4c
                
                if (edi s> var_4c)
                    return 
                
                void* var_98
                int32_t eax_1
                eax_1.b = *(var_98 + var_a0)
                int32_t var_b4
                
                if (var_b4 != 0)
                    eax_1.b = not.b(eax_1.b)
                
                char var_b0
                int32_t var_ac
                int32_t eax_3 = (eax_1 << var_b0) + var_ac
                
                if (eax_3 s< 0)
                    eax_3 = 0
                else if (eax_3 s> 0xff)
                    eax_3 = 0xff
                
                if (eax_3 != 0)
                    int32_t var_11c
                    int32_t ebx_9 = *(*((eax_3 << 2) + &data_4e3da80) + var_11c)
                    
                    if (ebx_9 != 0)
                        int32_t ecx_4 = ebx_9 << 2
                        int32_t eax_4
                        eax_4.b = edi[3]
                        int32_t eax_5 = eax_4 << 2
                        int32_t ecx_8 = *(*(ecx_4 + &data_4dae580) + eax_5)
                        
                        if (ecx_8 != 0)
                            int32_t edx_6 = *(*(ecx_4 + &data_4dee980) + eax_5)
                            char* var_3c
                            int32_t eax_6
                            eax_6.b = var_3c[2]
                            int32_t eax_8
                            eax_8.b = var_3c[1]
                            int32_t eax_10
                            eax_10.b = *var_3c
                            uint32_t edx_10 = (*(&data_4e3d680 + (eax_6 << 2))
                                + *(&data_4e3e280 + (eax_8 << 2))
                                + *(&data_4e3de80 + (eax_10 << 2))) u>> 8
                            int32_t var_cc
                            int32_t eax_12 = *(&data_4e3da80 + var_cc)
                            int32_t ebx_15
                            ebx_15.b = var_3c[2]
                            int32_t eax_14 = edx_10 + *(((ebx_15 - edx_10) << 2) + eax_12)
                            int32_t eax_15
                            eax_15.b = not.b(eax_14.b)
                            int32_t var_d0
                            int32_t eax_16 = eax_15 + *(((eax_14 - eax_15) << 2) + var_d0)
                            int32_t ebx_24
                            ebx_24.b = var_3c[1]
                            int32_t eax_18 = edx_10 + *(((ebx_24 - edx_10) << 2) + eax_12)
                            int32_t eax_19
                            eax_19.b = not.b(eax_18.b)
                            int32_t eax_20 = eax_19 + *(((eax_18 - eax_19) << 2) + var_d0)
                            int32_t ebx_33
                            ebx_33.b = *var_3c
                            int32_t eax_22 = edx_10 + *(((ebx_33 - edx_10) << 2) + eax_12)
                            int32_t eax_23
                            eax_23.b = not.b(eax_22.b)
                            int32_t eax_24 = eax_23 + *(((eax_22 - eax_23) << 2) + var_d0)
                            
                            if (ebx_9 != 0xff)
                                int32_t ebx_47
                                ebx_47.b = edi[3]
                                
                                if (ebx_47 != 0)
                                    int32_t eax_28 = *((ebx_9 << 2) + &data_4d6e180)
                                    *((eax_20 << 2) + eax_28)
                                    *((eax_24 << 2) + eax_28)
                                    int32_t eax_29
                                    eax_29.b = edi[2]
                                    edi[2] = (divu.dp.d(mulu.dp.d(eax_29, edx_6), ecx_8)).b
                                    int32_t eax_34
                                    eax_34.b = edi[1]
                                    edi[1] = (divu.dp.d(mulu.dp.d(eax_34, edx_6), ecx_8)).b
                                    int32_t eax_39
                                    eax_39.b = *edi
                                    *edi = (divu.dp.d(mulu.dp.d(eax_39, edx_6), ecx_8)).b
                                    edi[3] = ecx_8.b
                                else
                                    edi[2] = eax_16.b
                                    edi[1] = eax_20.b
                                    *edi = eax_24.b
                                    edi[3] = ebx_9.b
                            else
                                edi[2] = eax_16.b
                                edi[1] = eax_20.b
                                *edi = eax_24.b
                                edi[3] = ebx_9.b
            
            int32_t eax = var_a0 + 1
            int32_t var_bc
            
            if (eax s>= var_bc)
                eax = 0
            
            var_a0 = eax
            edi = &edi[4]
            temp6_1 = edx
            edx -= var_44
        while (temp6_1 - var_44 s>= 0)
    
    i_1 = i - 1
while (i != 1)
