// 函数: sub_9837a0
// 地址: 0x9837a0
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
                
                char* esi_2 = edi
                int32_t ebx_1
                ebx_1.b = esi_2[2]
                int32_t var_f8
                int32_t var_ec
                int32_t var_e0
                int32_t var_d4
                *(edi + 2) = (var_f8
                    + *(((var_e0 + *(((ebx_1 - var_e0) << 2) + var_d4) - var_f8) << 2) + var_ec)).b
                int32_t ebx_9
                ebx_9.b = esi_2[1]
                int32_t var_f4
                int32_t var_e8
                int32_t var_dc
                *(edi + 1) = (var_f4
                    + *(((var_dc + *(((ebx_9 - var_dc) << 2) + var_d4) - var_f4) << 2) + var_e8)).b
                int32_t ebx_17
                ebx_17.b = *esi_2
                int32_t var_f0
                int32_t var_e4
                int32_t var_d8
                *edi = (var_f0
                    + *(((var_d8 + *(((ebx_17 - var_d8) << 2) + var_d4) - var_f0) << 2) + var_e4)).b
            
            edi += 4
            temp3_1 = edx
            edx -= var_44
        while (temp3_1 - var_44 s>= 0)
    
    i = i_1
    i_1 -= 1
while (i != 1)
