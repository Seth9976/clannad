// 函数: sub_8f2f90
// 地址: 0x8f2f90
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
    int32_t temp0_1 = edx
    int32_t var_48
    edx += var_48
    
    if (temp0_1 + var_48 s>= 0)
        int32_t var_44
        int32_t temp3_1
        
        do
            int32_t var_50
            
            if (edi s>= var_50)
                int32_t var_4c
                
                if (edi s> var_4c)
                    return 
                
                char* var_3c
                int32_t ebx_1
                ebx_1.b = var_3c[3]
                
                if (ebx_1 != 0)
                    int32_t var_11c
                    int32_t ebx_7 = *(*((ebx_1 << 2) + &data_4e3da80) + var_11c)
                    
                    if (ebx_7 != 0)
                        int32_t edx_2 = *((ebx_7 << 2) + &data_4e3da80)
                        int32_t eax_1
                        eax_1.b = var_3c[2]
                        int32_t eax_3
                        eax_3.b = var_3c[1]
                        int32_t eax_5
                        eax_5.b = *var_3c
                        uint32_t edx_6 = (*(&data_4e3d680 + (eax_1 << 2))
                            + *(&data_4e3e280 + (eax_3 << 2)) + *(&data_4e3de80 + (eax_5 << 2))) u>> 8
                        int32_t var_cc
                        int32_t eax_7 = *(&data_4e3da80 + var_cc)
                        int32_t ebx_15
                        ebx_15.b = var_3c[2]
                        int32_t eax_12
                        eax_12.b = edi[2]
                        int32_t eax_16
                        eax_16.b = edi[2]
                        int32_t var_e0
                        int32_t var_d4
                        int32_t ebx_28 = (*(((var_e0 + *
                            (((edx_6 + *(((ebx_15 - edx_6) << 2) + eax_7) - var_e0) << 2) + var_d4))
                            << 2) + *((eax_12 << 2) + &data_4e3da80)) - eax_16) << 2
                        edi[2] = eax_16.b + (*(ebx_28 + edx_2)).b
                        int32_t ebx_30
                        ebx_30.b = var_3c[1]
                        int32_t eax_22
                        eax_22.b = edi[1]
                        int32_t eax_26
                        eax_26.b = edi[1]
                        int32_t var_dc
                        int32_t ebx_43 = (*(((var_dc + *
                            (((edx_6 + *(((ebx_30 - edx_6) << 2) + eax_7) - var_dc) << 2) + var_d4))
                            << 2) + *((eax_22 << 2) + &data_4e3da80)) - eax_26) << 2
                        edi[1] = eax_26.b + (*(ebx_43 + edx_2)).b
                        int32_t ebx_45
                        ebx_45.b = *var_3c
                        int32_t eax_32
                        eax_32.b = *edi
                        int32_t eax_36
                        eax_36.b = *edi
                        int32_t var_d8
                        int32_t ebx_58 = (*(((var_d8 + *
                            (((edx_6 + *(((ebx_45 - edx_6) << 2) + eax_7) - var_d8) << 2) + var_d4))
                            << 2) + *((eax_32 << 2) + &data_4e3da80)) - eax_36) << 2
                        *edi = eax_36.b + (*(ebx_58 + edx_2)).b
            
            edi = &edi[4]
            temp3_1 = edx
            edx -= var_44
        while (temp3_1 - var_44 s>= 0)
    
    i = i_1
    i_1 -= 1
while (i != 1)
