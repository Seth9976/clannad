// 函数: sub_91fdd0
// 地址: 0x91fdd0
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
    
    result = *esi_1
    
    if (result != 0)
        int32_t var_8
        
        if (result s> 0)
            edi = &edi[var_8]
        else
            edi -= var_8
    
    char* var_18
    int32_t ebx_1
    ebx_1.b = var_18[3]
    
    if (ebx_1 != 0)
        int32_t edx_2 = *((ebx_1 << 2) + &data_4e3da80)
        int32_t ebx_5
        ebx_5.b = var_18[2]
        int32_t eax_2
        eax_2.b = not.b(ebx_5.b)
        int32_t eax_6
        eax_6.b = edi[2]
        int32_t var_f8
        int32_t var_ec
        int32_t var_d0
        int32_t eax_7 = eax_6 + *(((var_f8
            + *(((eax_2 + *(((ebx_5 - eax_2) << 2) + var_d0) - var_f8) << 2) + var_ec)) << 2) + edx_2)
        
        if (eax_7 s> 0xff)
            eax_7 = 0xff
        
        edi[2] = eax_7.b
        int32_t ebx_17
        ebx_17.b = var_18[1]
        int32_t eax_8
        eax_8.b = not.b(ebx_17.b)
        int32_t eax_12
        eax_12.b = edi[1]
        int32_t var_f4
        int32_t var_e8
        int32_t eax_13 = eax_12 + *(((var_f4
            + *(((eax_8 + *(((ebx_17 - eax_8) << 2) + var_d0) - var_f4) << 2) + var_e8)) << 2) + edx_2)
        
        if (eax_13 s> 0xff)
            eax_13 = 0xff
        
        edi[1] = eax_13.b
        int32_t ebx_29
        ebx_29.b = *var_18
        int32_t eax_14
        eax_14.b = not.b(ebx_29.b)
        int32_t eax_18
        eax_18.b = *edi
        int32_t var_f0
        int32_t var_e4
        result = eax_18 + *(((var_f0
            + *(((eax_14 + *(((ebx_29 - eax_14) << 2) + var_d0) - var_f0) << 2) + var_e4)) << 2)
            + edx_2)
        
        if (result s> 0xff)
            result = 0xff
        
        *edi = result.b
    
    esi_4 = esi_1 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
