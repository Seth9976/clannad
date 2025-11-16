// 函数: sub_8f5b90
// 地址: 0x8f5b90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
void* var_54
void* edi = var_54
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
                ebx_1.b = var_3c[2]
                int32_t eax_1
                eax_1.b = not.b(ebx_1.b)
                int32_t eax_5
                eax_5.b = *(edi + 2)
                int32_t eax_9
                eax_9.b = *(edi + 2)
                int32_t var_f8
                int32_t var_ec
                int32_t var_d0
                int32_t ebx_14 = (*(((var_f8
                    + *(((eax_1 + *(((ebx_1 - eax_1) << 2) + var_d0) - var_f8) << 2) + var_ec)) << 2)
                    + *((eax_5 << 2) + &data_4e3da80)) - eax_9) << 2
                int32_t var_118
                *(edi + 2) = eax_9.b + (*(ebx_14 + var_118)).b
                int32_t ebx_16
                ebx_16.b = var_3c[1]
                int32_t eax_11
                eax_11.b = not.b(ebx_16.b)
                int32_t eax_15
                eax_15.b = *(edi + 1)
                int32_t eax_19
                eax_19.b = *(edi + 1)
                int32_t var_f4
                int32_t var_e8
                int32_t ebx_29 = (*(((var_f4
                    + *(((eax_11 + *(((ebx_16 - eax_11) << 2) + var_d0) - var_f4) << 2) + var_e8))
                    << 2) + *((eax_15 << 2) + &data_4e3da80)) - eax_19) << 2
                *(edi + 1) = eax_19.b + (*(ebx_29 + var_118)).b
                int32_t ebx_31
                ebx_31.b = *var_3c
                int32_t eax_21
                eax_21.b = not.b(ebx_31.b)
                int32_t eax_25
                eax_25.b = *edi
                int32_t eax_29
                eax_29.b = *edi
                int32_t var_f0
                int32_t var_e4
                int32_t ebx_44 = (*(((var_f0
                    + *(((eax_21 + *(((ebx_31 - eax_21) << 2) + var_d0) - var_f0) << 2) + var_e4))
                    << 2) + *((eax_25 << 2) + &data_4e3da80)) - eax_29) << 2
                *edi = eax_29.b + (*(ebx_44 + var_118)).b
            
            edi += 4
            temp3_1 = edx
            edx -= var_44
        while (temp3_1 - var_44 s>= 0)
    
    i = i_1
    i_1 -= 1
while (i != 1)
