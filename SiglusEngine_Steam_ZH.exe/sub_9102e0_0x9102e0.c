// 函数: sub_9102e0
// 地址: 0x9102e0
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
        int32_t eax_2
        eax_2.b = var_18[2]
        int32_t eax_4
        eax_4.b = var_18[1]
        int32_t eax_6
        eax_6.b = *var_18
        uint32_t edx_6 = (*(&data_4e3d680 + (eax_2 << 2)) + *(&data_4e3e280 + (eax_4 << 2))
            + *(&data_4e3de80 + (eax_6 << 2))) u>> 8
        int32_t var_cc
        int32_t eax_8 = *(&data_4e3da80 + var_cc)
        int32_t ebx_9
        ebx_9.b = var_18[2]
        int32_t eax_15
        eax_15.b = *(edi + 2)
        int32_t var_f8
        int32_t var_ec
        int32_t var_e0
        int32_t var_d4
        int32_t ebx_24 = ((var_f8 + *(((var_e0
            + *(((edx_6 + *(((ebx_9 - edx_6) << 2) + eax_8) - var_e0) << 2) + var_d4) - var_f8) << 2)
            + var_ec) - eax_15) << 2) + edx_2
        *(edi + 2) = eax_15.b + (*ebx_24).b
        int32_t ebx_25
        ebx_25.b = var_18[1]
        int32_t eax_23
        eax_23.b = *(edi + 1)
        int32_t var_f4
        int32_t var_e8
        int32_t var_dc
        int32_t ebx_40 = ((var_f4 + *(((var_dc
            + *(((edx_6 + *(((ebx_25 - edx_6) << 2) + eax_8) - var_dc) << 2) + var_d4) - var_f4) << 2)
            + var_e8) - eax_23) << 2) + edx_2
        *(edi + 1) = eax_23.b + (*ebx_40).b
        int32_t ebx_41
        ebx_41.b = *var_18
        int32_t eax_31
        eax_31.b = *edi
        int32_t var_f0
        int32_t var_e4
        int32_t var_d8
        int32_t ebx_56 = ((var_f0 + *(((var_d8
            + *(((edx_6 + *(((ebx_41 - edx_6) << 2) + eax_8) - var_d8) << 2) + var_d4) - var_f0) << 2)
            + var_e4) - eax_31) << 2) + edx_2
        result = eax_31 + *ebx_56
        *edi = result.b
    
    esi_4 = esi_1 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
