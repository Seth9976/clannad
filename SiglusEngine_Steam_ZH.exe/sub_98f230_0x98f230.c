// 函数: sub_98f230
// 地址: 0x98f230
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
int32_t* var_14
int32_t* esi_4 = var_14
char* var_1c
char* edi = var_1c
int32_t i_2
int32_t i_1 = i_2
int32_t result
int32_t i

do
    int32_t eax_1 = *esi_4
    void* esi_1 = &esi_4[1]
    
    if (eax_1 != 0)
        int32_t var_c
        
        if (eax_1 s> 0)
            edi = &edi[var_c]
        else
            edi -= var_c
    
    int32_t eax_2 = *esi_1
    
    if (eax_2 != 0)
        int32_t var_8
        
        if (eax_2 s> 0)
            edi = &edi[var_8]
        else
            edi -= var_8
    
    int32_t ebx_1
    ebx_1.b = edi[2]
    int32_t var_e0
    int32_t var_d4
    edi[2] = (var_e0 + *(((ebx_1 - var_e0) << 2) + var_d4)).b
    int32_t ebx_5
    ebx_5.b = edi[1]
    int32_t var_dc
    edi[1] = (var_dc + *(((ebx_5 - var_dc) << 2) + var_d4)).b
    int32_t ebx_9
    ebx_9.b = *edi
    int32_t var_d8
    result = var_d8 + *(((ebx_9 - var_d8) << 2) + var_d4)
    *edi = result.b
    esi_4 = esi_1 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
