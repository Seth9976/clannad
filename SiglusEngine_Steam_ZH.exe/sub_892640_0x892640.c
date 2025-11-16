// 函数: sub_892640
// 地址: 0x892640
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
void* var_3c
void* esi_1 = var_3c
void* var_54
void* edi = var_54
int32_t var_40
int32_t edx = var_40
int32_t result_1
int32_t result = result_1
int32_t var_34
int32_t ebx = var_34
int32_t var_28
int32_t i_1 = var_28 + 1
int32_t i

do
    int32_t temp0_1 = edx
    int32_t var_48
    edx += var_48
    
    if (temp0_1 + var_48 s>= 0)
        int32_t var_44
        int32_t temp2_1
        
        do
            int32_t var_50
            
            if (edi s>= var_50)
                int32_t var_4c
                
                if (edi s> var_4c)
                    return result
                
                int32_t ebx_2
                ebx_2.b = *(esi_1 + 2)
                int32_t eax
                eax.b = not.b(ebx_2.b)
                int32_t eax_4
                eax_4.b = *(edi + 2)
                int32_t var_f8
                int32_t var_ec
                int32_t var_d0
                *(edi + 2) = (*(((var_f8
                    + *(((eax + *(((ebx_2 - eax) << 2) + var_d0) - var_f8) << 2) + var_ec)) << 2)
                    + *((eax_4 << 2) + &data_4e3da80))).b
                int32_t ebx_13
                ebx_13.b = *(esi_1 + 1)
                int32_t eax_9
                eax_9.b = not.b(ebx_13.b)
                int32_t eax_13
                eax_13.b = *(edi + 1)
                int32_t var_f4
                int32_t var_e8
                *(edi + 1) = (*(((var_f4
                    + *(((eax_9 + *(((ebx_13 - eax_9) << 2) + var_d0) - var_f4) << 2) + var_e8)) << 2)
                    + *((eax_13 << 2) + &data_4e3da80))).b
                int32_t ebx_24
                ebx_24.b = *esi_1
                int32_t eax_18
                eax_18.b = not.b(ebx_24.b)
                int32_t eax_22
                eax_22.b = *edi
                int32_t var_f0
                int32_t var_e4
                *edi = (*(((var_f0
                    + *(((eax_18 + *(((ebx_24 - eax_18) << 2) + var_d0) - var_f0) << 2) + var_e4))
                    << 2) + *((eax_22 << 2) + &data_4e3da80))).b
            
            edi += 4
            temp2_1 = edx
            edx -= var_44
        while (temp2_1 - var_44 s>= 0)
    
    result &= 1
    
    if (result != 0)
        int32_t var_24
        esi_1 += var_24
        int32_t temp4_1 = ebx
        int32_t var_30
        ebx += var_30
        
        if (temp4_1 + var_30 s>= 0)
            int32_t var_20
            esi_1 += var_20
            int32_t var_2c
            ebx -= var_2c
    else
        esi_1 += ebx
    
    i = i_1
    i_1 -= 1
while (i != 1)
return result
