// 函数: sub_8f9cf0
// 地址: 0x8f9cf0
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
    int32_t temp0_1 = edx
    int32_t var_48
    edx += var_48
    
    if (temp0_1 + var_48 s>= 0)
        int32_t var_44
        int32_t temp3_1
        
        do
            int32_t var_a0
            int32_t var_50
            
            if (edi s>= var_50)
                int32_t var_4c
                
                if (edi s> var_4c)
                    return 
                
                char* var_3c
                int32_t ebx_1
                ebx_1.b = var_3c[3]
                
                if (ebx_1 != 0)
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
                        int32_t ebx_12 = *(*((eax_3 << 2) + &data_4e3da80) + (ebx_1 << 2))
                        
                        if (ebx_12 != 0)
                            int32_t edx_2 = *((ebx_12 << 2) + &data_4e3da80)
                            int32_t eax_4
                            eax_4.b = var_3c[2]
                            int32_t eax_6
                            eax_6.b = var_3c[1]
                            int32_t eax_8
                            eax_8.b = *var_3c
                            uint32_t edx_6 = (*(&data_4e3d680 + (eax_4 << 2))
                                + *(&data_4e3e280 + (eax_6 << 2))
                                + *(&data_4e3de80 + (eax_8 << 2))) u>> 8
                            int32_t var_cc
                            int32_t eax_10 = *(&data_4e3da80 + var_cc)
                            int32_t ebx_20
                            ebx_20.b = var_3c[2]
                            int32_t eax_12 = edx_6 + *(((ebx_20 - edx_6) << 2) + eax_10)
                            int32_t eax_13
                            eax_13.b = not.b(eax_12.b)
                            int32_t eax_17
                            eax_17.b = edi[2]
                            int32_t eax_21
                            eax_21.b = edi[2]
                            int32_t var_f8
                            int32_t var_ec
                            int32_t var_d0
                            int32_t ebx_37 = (*(((var_f8 + *(((eax_13
                                + *(((eax_12 - eax_13) << 2) + var_d0) - var_f8) << 2) + var_ec)) << 2)
                                + *((eax_17 << 2) + &data_4e3da80)) - eax_21) << 2
                            edi[2] = eax_21.b + (*(ebx_37 + edx_2)).b
                            int32_t ebx_39
                            ebx_39.b = var_3c[1]
                            int32_t eax_24 = edx_6 + *(((ebx_39 - edx_6) << 2) + eax_10)
                            int32_t eax_25
                            eax_25.b = not.b(eax_24.b)
                            int32_t eax_29
                            eax_29.b = edi[1]
                            int32_t eax_33
                            eax_33.b = edi[1]
                            int32_t var_f4
                            int32_t var_e8
                            int32_t ebx_56 = (*(((var_f4 + *(((eax_25
                                + *(((eax_24 - eax_25) << 2) + var_d0) - var_f4) << 2) + var_e8)) << 2)
                                + *((eax_29 << 2) + &data_4e3da80)) - eax_33) << 2
                            edi[1] = eax_33.b + (*(ebx_56 + edx_2)).b
                            int32_t ebx_58
                            ebx_58.b = *var_3c
                            int32_t eax_36 = edx_6 + *(((ebx_58 - edx_6) << 2) + eax_10)
                            int32_t eax_37
                            eax_37.b = not.b(eax_36.b)
                            int32_t eax_41
                            eax_41.b = *edi
                            int32_t eax_45
                            eax_45.b = *edi
                            int32_t var_f0
                            int32_t var_e4
                            int32_t ebx_75 = (*(((var_f0 + *(((eax_37
                                + *(((eax_36 - eax_37) << 2) + var_d0) - var_f0) << 2) + var_e4)) << 2)
                                + *((eax_41 << 2) + &data_4e3da80)) - eax_45) << 2
                            *edi = eax_45.b + (*(ebx_75 + edx_2)).b
            
            int32_t eax = var_a0 + 1
            int32_t var_bc
            
            if (eax s>= var_bc)
                eax = 0
            
            var_a0 = eax
            edi = &edi[4]
            temp3_1 = edx
            edx -= var_44
        while (temp3_1 - var_44 s>= 0)
    
    i_1 = i - 1
while (i != 1)
