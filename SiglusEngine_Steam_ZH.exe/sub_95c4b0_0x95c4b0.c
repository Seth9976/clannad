// 函数: sub_95c4b0
// 地址: 0x95c4b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
int32_t* var_14
int32_t* esi_4 = var_14
void* var_1c
void* edi = var_1c
int32_t i_2
int32_t i_1 = i_2
char result
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
    
    int32_t eax_2 = *esi_1
    
    if (eax_2 != 0)
        int32_t var_8
        
        if (eax_2 s> 0)
            edi += var_8
        else
            edi -= var_8
    
    char* var_18
    int32_t ebx_1
    ebx_1.b = var_18[2]
    int32_t eax_3
    eax_3.b = not.b(ebx_1.b)
    int32_t eax_7
    eax_7.b = *(edi + 2)
    int32_t eax_11
    eax_11.b = *(edi + 2)
    int32_t var_f8
    int32_t var_ec
    int32_t var_d0
    int32_t ebx_14 = (*(((var_f8
        + *(((eax_3 + *(((ebx_1 - eax_3) << 2) + var_d0) - var_f8) << 2) + var_ec)) << 2)
        + *((eax_7 << 2) + &data_4e3da80)) - eax_11) << 2
    int32_t var_118
    *(edi + 2) = eax_11.b + (*(ebx_14 + var_118)).b
    int32_t ebx_16
    ebx_16.b = var_18[1]
    int32_t eax_13
    eax_13.b = not.b(ebx_16.b)
    int32_t eax_17
    eax_17.b = *(edi + 1)
    int32_t eax_21
    eax_21.b = *(edi + 1)
    int32_t var_f4
    int32_t var_e8
    int32_t ebx_29 = (*(((var_f4
        + *(((eax_13 + *(((ebx_16 - eax_13) << 2) + var_d0) - var_f4) << 2) + var_e8)) << 2)
        + *((eax_17 << 2) + &data_4e3da80)) - eax_21) << 2
    *(edi + 1) = eax_21.b + (*(ebx_29 + var_118)).b
    int32_t ebx_31
    ebx_31.b = *var_18
    int32_t eax_23
    eax_23.b = not.b(ebx_31.b)
    int32_t eax_27
    eax_27.b = *edi
    int32_t eax_31
    eax_31.b = *edi
    int32_t var_f0
    int32_t var_e4
    int32_t ebx_44 = (*(((var_f0
        + *(((eax_23 + *(((ebx_31 - eax_23) << 2) + var_d0) - var_f0) << 2) + var_e4)) << 2)
        + *((eax_27 << 2) + &data_4e3da80)) - eax_31) << 2
    result = eax_31.b + (*(ebx_44 + var_118)).b
    *edi = result
    esi_4 = esi_1 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
