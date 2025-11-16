// 函数: sub_893a80
// 地址: 0x893a80
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
                int32_t eax_2
                eax_2.b = *(edi + 2)
                int32_t var_d0
                *(edi + 2) = (*(((eax + *(((ebx_2 - eax) << 2) + var_d0)) << 2)
                    + *((eax_2 << 2) + &data_4e3da80))).b
                int32_t ebx_9
                ebx_9.b = *(esi_1 + 1)
                int32_t eax_7
                eax_7.b = not.b(ebx_9.b)
                int32_t eax_9
                eax_9.b = *(edi + 1)
                *(edi + 1) = (*(((eax_7 + *(((ebx_9 - eax_7) << 2) + var_d0)) << 2)
                    + *((eax_9 << 2) + &data_4e3da80))).b
                int32_t ebx_16
                ebx_16.b = *esi_1
                int32_t eax_14
                eax_14.b = not.b(ebx_16.b)
                int32_t eax_16
                eax_16.b = *edi
                *edi = (*(((eax_14 + *(((ebx_16 - eax_14) << 2) + var_d0)) << 2)
                    + *((eax_16 << 2) + &data_4e3da80))).b
            
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
