// 函数: sub_90ab90
// 地址: 0x90ab90
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
                            int32_t var_e0
                            int32_t var_d4
                            int32_t var_d0
                            int32_t eax_18 = var_e0 + *(((eax_15
                                + *(((eax_14 - eax_15) << 2) + var_d0) - var_e0) << 2) + var_d4)
                            int32_t ebx_28
                            ebx_28.b = var_3c[1]
                            int32_t eax_20 = edx_10 + *(((ebx_28 - edx_10) << 2) + eax_12)
                            int32_t eax_21
                            eax_21.b = not.b(eax_20.b)
                            int32_t var_dc
                            int32_t eax_24 = var_dc + *(((eax_21
                                + *(((eax_20 - eax_21) << 2) + var_d0) - var_dc) << 2) + var_d4)
                            int32_t ebx_41
                            ebx_41.b = *var_3c
                            int32_t eax_26 = edx_10 + *(((ebx_41 - edx_10) << 2) + eax_12)
                            int32_t eax_27
                            eax_27.b = not.b(eax_26.b)
                            int32_t var_d8
                            int32_t eax_30 = var_d8 + *(((eax_27
                                + *(((eax_26 - eax_27) << 2) + var_d0) - var_d8) << 2) + var_d4)
                            
                            if (ebx_9 != 0xff)
                                int32_t ebx_59
                                ebx_59.b = edi[3]
                                
                                if (ebx_59 != 0)
                                    int32_t eax_34 = *((ebx_9 << 2) + &data_4d6e180)
                                    *((eax_24 << 2) + eax_34)
                                    *((eax_30 << 2) + eax_34)
                                    int32_t eax_35
                                    eax_35.b = edi[2]
                                    edi[2] = (divu.dp.d(mulu.dp.d(eax_35, edx_6), ecx_8)).b
                                    int32_t eax_40
                                    eax_40.b = edi[1]
                                    edi[1] = (divu.dp.d(mulu.dp.d(eax_40, edx_6), ecx_8)).b
                                    int32_t eax_45
                                    eax_45.b = *edi
                                    *edi = (divu.dp.d(mulu.dp.d(eax_45, edx_6), ecx_8)).b
                                    edi[3] = ecx_8.b
                                else
                                    edi[2] = eax_18.b
                                    edi[1] = eax_24.b
                                    *edi = eax_30.b
                                    edi[3] = ebx_9.b
                            else
                                edi[2] = eax_18.b
                                edi[1] = eax_24.b
                                *edi = eax_30.b
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
