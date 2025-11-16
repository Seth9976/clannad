// 函数: sub_98b6d0
// 地址: 0x98b6d0
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
                
                int32_t ebx_1
                ebx_1.b = edi[3]
                
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
                            eax_4.b = edi[2]
                            int32_t eax_6
                            eax_6.b = edi[1]
                            int32_t eax_8
                            eax_8.b = *edi
                            uint32_t edx_6 = (*(&data_4e3d680 + (eax_4 << 2))
                                + *(&data_4e3e280 + (eax_6 << 2))
                                + *(&data_4e3de80 + (eax_8 << 2))) u>> 8
                            int32_t var_cc
                            int32_t eax_10 = *(&data_4e3da80 + var_cc)
                            int32_t ebx_20
                            ebx_20.b = edi[2]
                            int32_t eax_12 = edx_6 + *(((ebx_20 - edx_6) << 2) + eax_10)
                            int32_t eax_13
                            eax_13.b = not.b(eax_12.b)
                            int32_t eax_19
                            eax_19.b = edi[2]
                            int32_t var_f8
                            int32_t var_ec
                            int32_t var_e0
                            int32_t var_d4
                            int32_t var_d0
                            int32_t ebx_39 = ((var_f8 + *(((var_e0 + *(((eax_13
                                + *(((eax_12 - eax_13) << 2) + var_d0) - var_e0) << 2) + var_d4)
                                - var_f8) << 2) + var_ec) - eax_19) << 2) + edx_2
                            edi[2] = eax_19.b + (*ebx_39).b
                            int32_t ebx_40
                            ebx_40.b = edi[1]
                            int32_t eax_22 = edx_6 + *(((ebx_40 - edx_6) << 2) + eax_10)
                            int32_t eax_23
                            eax_23.b = not.b(eax_22.b)
                            int32_t eax_29
                            eax_29.b = edi[1]
                            int32_t var_f4
                            int32_t var_e8
                            int32_t var_dc
                            int32_t ebx_59 = ((var_f4 + *(((var_dc + *(((eax_23
                                + *(((eax_22 - eax_23) << 2) + var_d0) - var_dc) << 2) + var_d4)
                                - var_f4) << 2) + var_e8) - eax_29) << 2) + edx_2
                            edi[1] = eax_29.b + (*ebx_59).b
                            int32_t ebx_60
                            ebx_60.b = *edi
                            int32_t eax_32 = edx_6 + *(((ebx_60 - edx_6) << 2) + eax_10)
                            int32_t eax_33
                            eax_33.b = not.b(eax_32.b)
                            int32_t eax_39
                            eax_39.b = *edi
                            int32_t var_f0
                            int32_t var_e4
                            int32_t var_d8
                            int32_t ebx_79 = ((var_f0 + *(((var_d8 + *(((eax_33
                                + *(((eax_32 - eax_33) << 2) + var_d0) - var_d8) << 2) + var_d4)
                                - var_f0) << 2) + var_e4) - eax_39) << 2) + edx_2
                            *edi = eax_39.b + (*ebx_79).b
            
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
