// 函数: sub_9201e0
// 地址: 0x9201e0
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
    int32_t eax_3
    eax_3.b = not.b(ebx_1.b)
    int32_t eax_9
    eax_9.b = edi[2]
    int32_t var_f8
    int32_t var_ec
    int32_t var_e0
    int32_t var_d4
    int32_t var_d0
    int32_t eax_10 = eax_9 + var_f8 + *(((var_e0
        + *(((eax_3 + *(((ebx_1 - eax_3) << 2) + var_d0) - var_e0) << 2) + var_d4) - var_f8) << 2)
        + var_ec)
    
    if (eax_10 s> 0xff)
        eax_10 = 0xff
    
    edi[2] = eax_10.b
    int32_t ebx_14
    ebx_14.b = var_18[1]
    int32_t eax_11
    eax_11.b = not.b(ebx_14.b)
    int32_t eax_17
    eax_17.b = edi[1]
    int32_t var_f4
    int32_t var_e8
    int32_t var_dc
    int32_t eax_18 = eax_17 + var_f4 + *(((var_dc
        + *(((eax_11 + *(((ebx_14 - eax_11) << 2) + var_d0) - var_dc) << 2) + var_d4) - var_f4) << 2)
        + var_e8)
    
    if (eax_18 s> 0xff)
        eax_18 = 0xff
    
    edi[1] = eax_18.b
    int32_t ebx_27
    ebx_27.b = *var_18
    int32_t eax_19
    eax_19.b = not.b(ebx_27.b)
    int32_t eax_25
    eax_25.b = *edi
    int32_t var_f0
    int32_t var_e4
    int32_t var_d8
    result = eax_25 + var_f0 + *(((var_d8
        + *(((eax_19 + *(((ebx_27 - eax_19) << 2) + var_d0) - var_d8) << 2) + var_d4) - var_f0) << 2)
        + var_e4)
    
    if (result s> 0xff)
        result = 0xff
    
    *edi = result.b
    esi_4 = esi_1 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
