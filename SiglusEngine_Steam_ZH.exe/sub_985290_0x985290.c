// 函数: sub_985290
// 地址: 0x985290
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
                
                int32_t ebx_1
                ebx_1.b = edi[3]
                
                if (ebx_1 != 0)
                    int32_t var_11c
                    int32_t ebx_7 = *(*((ebx_1 << 2) + &data_4e3da80) + var_11c)
                    
                    if (ebx_7 != 0)
                        int32_t edx_2 = *((ebx_7 << 2) + &data_4e3da80)
                        int32_t eax_1
                        eax_1.b = edi[2]
                        int32_t eax_3
                        eax_3.b = edi[1]
                        int32_t eax_5
                        eax_5.b = *edi
                        uint32_t edx_6 = (*(&data_4e3d680 + (eax_1 << 2))
                            + *(&data_4e3e280 + (eax_3 << 2)) + *(&data_4e3de80 + (eax_5 << 2))) u>> 8
                        int32_t var_cc
                        int32_t eax_7 = *(&data_4e3da80 + var_cc)
                        int32_t ebx_15
                        ebx_15.b = edi[2]
                        int32_t eax_12
                        eax_12.b = edi[2]
                        int32_t var_e0
                        int32_t var_d4
                        edi[2] = eax_12.b + (*(((var_e0 +
                            *(((edx_6 + *(((ebx_15 - edx_6) << 2) + eax_7) - var_e0) << 2) + var_d4)
                            - eax_12) << 2) + edx_2)).b
                        int32_t ebx_27
                        ebx_27.b = edi[1]
                        int32_t eax_18
                        eax_18.b = edi[1]
                        int32_t var_dc
                        edi[1] = eax_18.b + (*(((var_dc +
                            *(((edx_6 + *(((ebx_27 - edx_6) << 2) + eax_7) - var_dc) << 2) + var_d4)
                            - eax_18) << 2) + edx_2)).b
                        int32_t ebx_39
                        ebx_39.b = *edi
                        int32_t eax_24
                        eax_24.b = *edi
                        int32_t var_d8
                        *edi = eax_24.b + (*(((var_d8 +
                            *(((edx_6 + *(((ebx_39 - edx_6) << 2) + eax_7) - var_d8) << 2) + var_d4)
                            - eax_24) << 2) + edx_2)).b
            
            edi = &edi[4]
            temp3_1 = edx
            edx -= var_44
        while (temp3_1 - var_44 s>= 0)
    
    i = i_1
    i_1 -= 1
while (i != 1)
