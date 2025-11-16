// 函数: sub_95c910
// 地址: 0x95c910
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
        int32_t eax_2
        eax_2.b = not.b(ebx_5.b)
        int32_t eax_8
        eax_8.b = *(edi + 2)
        int32_t var_f8
        int32_t var_ec
        int32_t var_e0
        int32_t var_d4
        int32_t var_d0
        int32_t* ebx_19 = ((var_f8 + *(((var_e0
            + *(((eax_2 + *(((ebx_5 - eax_2) << 2) + var_d0) - var_e0) << 2) + var_d4) - var_f8) << 2)
            + var_ec)) << 2) + *((eax_8 << 2) + &data_4e3da80)
        int32_t eax_12
        eax_12.b = *(edi + 2)
        *(edi + 2) = eax_12.b + (*(((*ebx_19 - eax_12) << 2) + edx_2)).b
        int32_t ebx_24
        ebx_24.b = var_18[1]
        int32_t eax_14
        eax_14.b = not.b(ebx_24.b)
        int32_t eax_20
        eax_20.b = *(edi + 1)
        int32_t var_f4
        int32_t var_e8
        int32_t var_dc
        int32_t* ebx_38 = ((var_f4 + *(((var_dc
            + *(((eax_14 + *(((ebx_24 - eax_14) << 2) + var_d0) - var_dc) << 2) + var_d4) - var_f4)
            << 2) + var_e8)) << 2) + *((eax_20 << 2) + &data_4e3da80)
        int32_t eax_24
        eax_24.b = *(edi + 1)
        *(edi + 1) = eax_24.b + (*(((*ebx_38 - eax_24) << 2) + edx_2)).b
        int32_t ebx_43
        ebx_43.b = *var_18
        int32_t eax_26
        eax_26.b = not.b(ebx_43.b)
        int32_t eax_32
        eax_32.b = *edi
        int32_t var_f0
        int32_t var_e4
        int32_t var_d8
        int32_t* ebx_57 = ((var_f0 + *(((var_d8
            + *(((eax_26 + *(((ebx_43 - eax_26) << 2) + var_d0) - var_d8) << 2) + var_d4) - var_f0)
            << 2) + var_e4)) << 2) + *((eax_32 << 2) + &data_4e3da80)
        int32_t eax_36
        eax_36.b = *edi
        result = eax_36 + *(((*ebx_57 - eax_36) << 2) + edx_2)
        *edi = result.b
    
    esi_4 = esi_1 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
