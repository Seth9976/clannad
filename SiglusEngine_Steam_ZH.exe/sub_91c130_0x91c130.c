// 函数: sub_91c130
// 地址: 0x91c130
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
    
    char* var_18
    int32_t ebx_1
    ebx_1.b = var_18[2]
    int32_t eax_5
    eax_5.b = edi[2]
    int32_t var_118
    int32_t var_e0
    int32_t var_d4
    int32_t eax_6 = eax_5 + *(((var_e0 + *(((ebx_1 - var_e0) << 2) + var_d4)) << 2) + var_118)
    
    if (eax_6 s> 0xff)
        eax_6 = 0xff
    
    edi[2] = eax_6.b
    int32_t ebx_9
    ebx_9.b = var_18[1]
    int32_t eax_9
    eax_9.b = edi[1]
    int32_t var_dc
    int32_t eax_10 = eax_9 + *(((var_dc + *(((ebx_9 - var_dc) << 2) + var_d4)) << 2) + var_118)
    
    if (eax_10 s> 0xff)
        eax_10 = 0xff
    
    edi[1] = eax_10.b
    int32_t ebx_17
    ebx_17.b = *var_18
    int32_t eax_13
    eax_13.b = *edi
    int32_t var_d8
    result = eax_13 + *(((var_d8 + *(((ebx_17 - var_d8) << 2) + var_d4)) << 2) + var_118)
    
    if (result s> 0xff)
        result = 0xff
    
    *edi = result.b
    esi_4 = esi_1 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
