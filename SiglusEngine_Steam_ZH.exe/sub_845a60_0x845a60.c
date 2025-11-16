// 函数: sub_845a60
// 地址: 0x845a60
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
                int32_t var_e0
                int32_t var_d4
                *(edi + 2) = (var_e0 + *(((ebx_2 - var_e0) << 2) + var_d4)).b
                int32_t ebx_6
                ebx_6.b = *(esi_1 + 1)
                int32_t var_dc
                *(edi + 1) = (var_dc + *(((ebx_6 - var_dc) << 2) + var_d4)).b
                int32_t ebx_10
                ebx_10.b = *esi_1
                int32_t var_d8
                *edi = (var_d8 + *(((ebx_10 - var_d8) << 2) + var_d4)).b
            
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
