// 函数: sub_98ee70
// 地址: 0x98ee70
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
    
    int32_t ebx_1
    ebx_1.b = edi[3]
    
    if (ebx_1 != 0)
        int32_t edx_2 = *((ebx_1 << 2) + &data_4e3da80)
        int32_t ebx_5
        ebx_5.b = edi[2]
        int32_t eax_6
        eax_6.b = edi[2]
        int32_t var_f8
        int32_t var_ec
        int32_t var_e0
        int32_t var_d4
        edi[2] = eax_6.b + (*(((var_f8
            + *(((var_e0 + *(((ebx_5 - var_e0) << 2) + var_d4) - var_f8) << 2) + var_ec) - eax_6) << 2)
            + edx_2)).b
        int32_t ebx_17
        ebx_17.b = edi[1]
        int32_t eax_12
        eax_12.b = edi[1]
        int32_t var_f4
        int32_t var_e8
        int32_t var_dc
        edi[1] = eax_12.b + (*(((var_f4
            + *(((var_dc + *(((ebx_17 - var_dc) << 2) + var_d4) - var_f4) << 2) + var_e8) - eax_12)
            << 2) + edx_2)).b
        int32_t ebx_29
        ebx_29.b = *edi
        int32_t eax_18
        eax_18.b = *edi
        int32_t var_f0
        int32_t var_e4
        int32_t var_d8
        result = eax_18 + *(((var_f0
            + *(((var_d8 + *(((ebx_29 - var_d8) << 2) + var_d4) - var_f0) << 2) + var_e4) - eax_18)
            << 2) + edx_2)
        *edi = result.b
    
    esi_4 = esi_1 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
