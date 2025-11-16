// 函数: sub_9885f0
// 地址: 0x9885f0
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
                int32_t eax_1
                eax_1.b = not.b(ebx_1.b)
                int32_t var_d0
                *(edi + 2) = (eax_1 + *(((ebx_1 - eax_1) << 2) + var_d0)).b
                int32_t ebx_5
                ebx_5.b = esi_2[1]
                int32_t eax_3
                eax_3.b = not.b(ebx_5.b)
                *(edi + 1) = (eax_3 + *(((ebx_5 - eax_3) << 2) + var_d0)).b
                int32_t ebx_9
                ebx_9.b = *esi_2
                int32_t eax_5
                eax_5.b = not.b(ebx_9.b)
                *edi = (eax_5 + *(((ebx_9 - eax_5) << 2) + var_d0)).b
            
            edi += 4
            temp3_1 = edx
            edx -= var_44
        while (temp3_1 - var_44 s>= 0)
    
    i = i_1
    i_1 -= 1
while (i != 1)
