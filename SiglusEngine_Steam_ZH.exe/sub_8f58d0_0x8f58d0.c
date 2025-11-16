// 函数: sub_8f58d0
// 地址: 0x8f58d0
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
                int32_t var_f8
                int32_t var_ec
                int32_t var_d0
                *(edi + 2) = (*(((var_f8
                    + *(((eax_1 + *(((ebx_1 - eax_1) << 2) + var_d0) - var_f8) << 2) + var_ec)) << 2)
                    + *((eax_5 << 2) + &data_4e3da80))).b
                int32_t ebx_12
                ebx_12.b = var_3c[1]
                int32_t eax_10
                eax_10.b = not.b(ebx_12.b)
                int32_t eax_14
                eax_14.b = *(edi + 1)
                int32_t var_f4
                int32_t var_e8
                *(edi + 1) = (*(((var_f4
                    + *(((eax_10 + *(((ebx_12 - eax_10) << 2) + var_d0) - var_f4) << 2) + var_e8))
                    << 2) + *((eax_14 << 2) + &data_4e3da80))).b
                int32_t ebx_23
                ebx_23.b = *var_3c
                int32_t eax_19
                eax_19.b = not.b(ebx_23.b)
                int32_t eax_23
                eax_23.b = *edi
                int32_t var_f0
                int32_t var_e4
                *edi = (*(((var_f0
                    + *(((eax_19 + *(((ebx_23 - eax_19) << 2) + var_d0) - var_f0) << 2) + var_e4))
                    << 2) + *((eax_23 << 2) + &data_4e3da80))).b
            
            edi += 4
            temp3_1 = edx
            edx -= var_44
        while (temp3_1 - var_44 s>= 0)
    
    i = i_1
    i_1 -= 1
while (i != 1)
