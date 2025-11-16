// 函数: sub_958230
// 地址: 0x958230
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
int32_t* var_14
int32_t* esi_4 = var_14
void* var_1c
void* edi = var_1c
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
            edi += var_c
        else
            edi -= var_c
    
    result = *esi_1
    
    if (result != 0)
        int32_t var_8
        
        if (result s> 0)
            edi += var_8
        else
            edi -= var_8
    
    char* var_18
    int32_t ebx_1
    ebx_1.b = var_18[3]
    
    if (ebx_1 != 0)
        int32_t edx_2 = *((ebx_1 << 2) + &data_4e3da80)
        int32_t ebx_5
        ebx_5.b = var_18[2]
        int32_t eax_4
        eax_4.b = *(edi + 2)
        int32_t eax_8
        eax_8.b = *(edi + 2)
        int32_t var_e0
        int32_t var_d4
        *(edi + 2) = eax_8.b + (*(((*(((var_e0 + *(((ebx_5 - var_e0) << 2) + var_d4)) << 2)
            + *((eax_4 << 2) + &data_4e3da80)) - eax_8) << 2) + edx_2)).b
        int32_t ebx_16
        ebx_16.b = var_18[1]
        int32_t eax_12
        eax_12.b = *(edi + 1)
        int32_t eax_16
        eax_16.b = *(edi + 1)
        int32_t var_dc
        *(edi + 1) = eax_16.b + (*(((*(((var_dc + *(((ebx_16 - var_dc) << 2) + var_d4)) << 2)
            + *((eax_12 << 2) + &data_4e3da80)) - eax_16) << 2) + edx_2)).b
        int32_t ebx_27
        ebx_27.b = *var_18
        int32_t eax_20
        eax_20.b = *edi
        int32_t eax_24
        eax_24.b = *edi
        int32_t var_d8
        result = eax_24 + *(((*(((var_d8 + *(((ebx_27 - var_d8) << 2) + var_d4)) << 2)
            + *((eax_20 << 2) + &data_4e3da80)) - eax_24) << 2) + edx_2)
        *edi = result.b
    
    esi_4 = esi_1 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
