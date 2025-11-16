// 函数: sub_95d4d0
// 地址: 0x95d4d0
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
        int32_t eax_4
        eax_4.b = *(edi + 2)
        int32_t eax_8
        eax_8.b = *(edi + 2)
        int32_t var_d0
        *(edi + 2) = eax_8.b + (*(((
            *(((eax_2 + *(((ebx_5 - eax_2) << 2) + var_d0)) << 2) + *((eax_4 << 2) + &data_4e3da80))
            - eax_8) << 2) + edx_2)).b
        int32_t ebx_16
        ebx_16.b = var_18[1]
        int32_t eax_10
        eax_10.b = not.b(ebx_16.b)
        int32_t eax_12
        eax_12.b = *(edi + 1)
        int32_t eax_16
        eax_16.b = *(edi + 1)
        *(edi + 1) = eax_16.b + (*(((*(((eax_10 + *(((ebx_16 - eax_10) << 2) + var_d0)) << 2)
            + *((eax_12 << 2) + &data_4e3da80)) - eax_16) << 2) + edx_2)).b
        int32_t ebx_27
        ebx_27.b = *var_18
        int32_t eax_18
        eax_18.b = not.b(ebx_27.b)
        int32_t eax_20
        eax_20.b = *edi
        int32_t eax_24
        eax_24.b = *edi
        result = eax_24 + *(((*(((eax_18 + *(((ebx_27 - eax_18) << 2) + var_d0)) << 2)
            + *((eax_20 << 2) + &data_4e3da80)) - eax_24) << 2) + edx_2)
        *edi = result.b
    
    esi_4 = esi_1 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
