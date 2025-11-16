// 函数: sub_8ad890
// 地址: 0x8ad890
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
                        int32_t ebx_11
                        ebx_11.b = var_3c[2]
                        int32_t eax_3
                        eax_3.b = edi[2]
                        int32_t var_f8
                        int32_t var_ec
                        edi[2] = eax_3.b + (*(((var_f8 + *(((ebx_11 - var_f8) << 2) + var_ec)
                            - eax_3) << 2) + edx_2)).b
                        int32_t ebx_19
                        ebx_19.b = var_3c[1]
                        int32_t eax_7
                        eax_7.b = edi[1]
                        int32_t var_f4
                        int32_t var_e8
                        edi[1] = eax_7.b + (*(((var_f4 + *(((ebx_19 - var_f4) << 2) + var_e8)
                            - eax_7) << 2) + edx_2)).b
                        int32_t ebx_27
                        ebx_27.b = *var_3c
                        int32_t eax_11
                        eax_11.b = *edi
                        int32_t var_f0
                        int32_t var_e4
                        *edi = eax_11.b + (*(((var_f0 + *(((ebx_27 - var_f0) << 2) + var_e4)
                            - eax_11) << 2) + edx_2)).b
            
            edi = &edi[4]
            temp3_1 = edx
            edx -= var_44
        while (temp3_1 - var_44 s>= 0)
    
    i = i_1
    i_1 -= 1
while (i != 1)
