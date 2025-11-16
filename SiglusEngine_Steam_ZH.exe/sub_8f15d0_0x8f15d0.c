// 函数: sub_8f15d0
// 地址: 0x8f15d0
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
                int32_t eax_3
                eax_3.b = *(edi + 2)
                int32_t var_e0
                int32_t var_d4
                *(edi + 2) = (*(((var_e0 + *(((ebx_1 - var_e0) << 2) + var_d4)) << 2)
                    + *((eax_3 << 2) + &data_4e3da80))).b
                int32_t ebx_8
                ebx_8.b = var_3c[1]
                int32_t eax_10
                eax_10.b = *(edi + 1)
                int32_t var_dc
                *(edi + 1) = (*(((var_dc + *(((ebx_8 - var_dc) << 2) + var_d4)) << 2)
                    + *((eax_10 << 2) + &data_4e3da80))).b
                int32_t ebx_15
                ebx_15.b = *var_3c
                int32_t eax_17
                eax_17.b = *edi
                int32_t var_d8
                *edi = (*(((var_d8 + *(((ebx_15 - var_d8) << 2) + var_d4)) << 2)
                    + *((eax_17 << 2) + &data_4e3da80))).b
            
            edi += 4
            temp3_1 = edx
            edx -= var_44
        while (temp3_1 - var_44 s>= 0)
    
    i = i_1
    i_1 -= 1
while (i != 1)
