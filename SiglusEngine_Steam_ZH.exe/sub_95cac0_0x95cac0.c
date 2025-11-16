// 函数: sub_95cac0
// 地址: 0x95cac0
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
    int32_t eax_9
    eax_9.b = *(edi + 2)
    int32_t var_f8
    int32_t var_ec
    int32_t var_e0
    int32_t var_d4
    int32_t var_d0
    int32_t* ebx_15 = ((var_f8 + *(((var_e0
        + *(((eax_3 + *(((ebx_1 - eax_3) << 2) + var_d0) - var_e0) << 2) + var_d4) - var_f8) << 2)
        + var_ec)) << 2) + *((eax_9 << 2) + &data_4e3da80)
    int32_t eax_13
    eax_13.b = *(edi + 2)
    int32_t var_118
    *(edi + 2) = eax_13.b + (*(((*ebx_15 - eax_13) << 2) + var_118)).b
    int32_t ebx_20
    ebx_20.b = var_18[1]
    int32_t eax_15
    eax_15.b = not.b(ebx_20.b)
    int32_t eax_21
    eax_21.b = *(edi + 1)
    int32_t var_f4
    int32_t var_e8
    int32_t var_dc
    int32_t* ebx_34 = ((var_f4 + *(((var_dc
        + *(((eax_15 + *(((ebx_20 - eax_15) << 2) + var_d0) - var_dc) << 2) + var_d4) - var_f4) << 2)
        + var_e8)) << 2) + *((eax_21 << 2) + &data_4e3da80)
    int32_t eax_25
    eax_25.b = *(edi + 1)
    *(edi + 1) = eax_25.b + (*(((*ebx_34 - eax_25) << 2) + var_118)).b
    int32_t ebx_39
    ebx_39.b = *var_18
    int32_t eax_27
    eax_27.b = not.b(ebx_39.b)
    int32_t eax_33
    eax_33.b = *edi
    int32_t var_f0
    int32_t var_e4
    int32_t var_d8
    int32_t* ebx_53 = ((var_f0 + *(((var_d8
        + *(((eax_27 + *(((ebx_39 - eax_27) << 2) + var_d0) - var_d8) << 2) + var_d4) - var_f0) << 2)
        + var_e4)) << 2) + *((eax_33 << 2) + &data_4e3da80)
    int32_t eax_37
    eax_37.b = *edi
    result = eax_37.b + (*(((*ebx_53 - eax_37) << 2) + var_118)).b
    *edi = result
    esi_4 = esi_1 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
