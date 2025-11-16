// 函数: sub_957ca0
// 地址: 0x957ca0
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
        int32_t eax_6
        eax_6.b = *(edi + 2)
        int32_t eax_10
        eax_10.b = *(edi + 2)
        int32_t var_f8
        int32_t var_ec
        int32_t var_e0
        int32_t var_d4
        int32_t ebx_18 = (*(((var_f8
            + *(((var_e0 + *(((ebx_5 - var_e0) << 2) + var_d4) - var_f8) << 2) + var_ec)) << 2)
            + *((eax_6 << 2) + &data_4e3da80)) - eax_10) << 2
        *(edi + 2) = eax_10.b + (*(ebx_18 + edx_2)).b
        int32_t ebx_20
        ebx_20.b = var_18[1]
        int32_t eax_16
        eax_16.b = *(edi + 1)
        int32_t eax_20
        eax_20.b = *(edi + 1)
        int32_t var_f4
        int32_t var_e8
        int32_t var_dc
        int32_t ebx_33 = (*(((var_f4
            + *(((var_dc + *(((ebx_20 - var_dc) << 2) + var_d4) - var_f4) << 2) + var_e8)) << 2)
            + *((eax_16 << 2) + &data_4e3da80)) - eax_20) << 2
        *(edi + 1) = eax_20.b + (*(ebx_33 + edx_2)).b
        int32_t ebx_35
        ebx_35.b = *var_18
        int32_t eax_26
        eax_26.b = *edi
        int32_t eax_30
        eax_30.b = *edi
        int32_t var_f0
        int32_t var_e4
        int32_t var_d8
        int32_t ebx_48 = (*(((var_f0
            + *(((var_d8 + *(((ebx_35 - var_d8) << 2) + var_d4) - var_f0) << 2) + var_e4)) << 2)
            + *((eax_26 << 2) + &data_4e3da80)) - eax_30) << 2
        result = eax_30 + *(ebx_48 + edx_2)
        *edi = result.b
    
    esi_4 = esi_1 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
