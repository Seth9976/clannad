// 函数: sub_8b1d30
// 地址: 0x8b1d30
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
                int32_t var_f8
                int32_t var_ec
                int32_t var_e0
                int32_t var_d4
                int32_t var_d0
                *(edi + 2) = (var_f8 + *(((var_e0
                    + *(((eax_1 + *(((ebx_1 - eax_1) << 2) + var_d0) - var_e0) << 2) + var_d4)
                    - var_f8) << 2) + var_ec)).b
                int32_t ebx_13
                ebx_13.b = var_3c[1]
                int32_t eax_7
                eax_7.b = not.b(ebx_13.b)
                int32_t var_f4
                int32_t var_e8
                int32_t var_dc
                *(edi + 1) = (var_f4 + *(((var_dc
                    + *(((eax_7 + *(((ebx_13 - eax_7) << 2) + var_d0) - var_dc) << 2) + var_d4)
                    - var_f4) << 2) + var_e8)).b
                int32_t ebx_25
                ebx_25.b = *var_3c
                int32_t eax_13
                eax_13.b = not.b(ebx_25.b)
                int32_t var_f0
                int32_t var_e4
                int32_t var_d8
                *edi = (var_f0 + *(((var_d8
                    + *(((eax_13 + *(((ebx_25 - eax_13) << 2) + var_d0) - var_d8) << 2) + var_d4)
                    - var_f0) << 2) + var_e4)).b
            
            edi += 4
            temp3_1 = edx
            edx -= var_44
        while (temp3_1 - var_44 s>= 0)
    
    i = i_1
    i_1 -= 1
while (i != 1)
