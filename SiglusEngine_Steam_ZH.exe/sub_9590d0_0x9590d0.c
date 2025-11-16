// 函数: sub_9590d0
// 地址: 0x9590d0
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
    int32_t eax_3
    eax_3.b = var_18[2]
    int32_t eax_5
    eax_5.b = var_18[1]
    int32_t eax_7
    eax_7.b = *var_18
    uint32_t edx_5 = (*(&data_4e3d680 + (eax_3 << 2)) + *(&data_4e3e280 + (eax_5 << 2))
        + *(&data_4e3de80 + (eax_7 << 2))) u>> 8
    int32_t var_cc
    int32_t eax_9 = *(&data_4e3da80 + var_cc)
    int32_t ebx_5
    ebx_5.b = var_18[2]
    int32_t eax_16
    eax_16.b = *(edi + 2)
    int32_t var_f8
    int32_t var_ec
    int32_t var_e0
    int32_t var_d4
    int32_t* ebx_19 = ((var_f8 + *(((var_e0
        + *(((edx_5 + *(((ebx_5 - edx_5) << 2) + eax_9) - var_e0) << 2) + var_d4) - var_f8) << 2)
        + var_ec)) << 2) + *((eax_16 << 2) + &data_4e3da80)
    int32_t eax_20
    eax_20.b = *(edi + 2)
    int32_t var_118
    *(edi + 2) = eax_20.b + (*(((*ebx_19 - eax_20) << 2) + var_118)).b
    int32_t ebx_24
    ebx_24.b = var_18[1]
    int32_t eax_28
    eax_28.b = *(edi + 1)
    int32_t var_f4
    int32_t var_e8
    int32_t var_dc
    int32_t* ebx_38 = ((var_f4 + *(((var_dc
        + *(((edx_5 + *(((ebx_24 - edx_5) << 2) + eax_9) - var_dc) << 2) + var_d4) - var_f4) << 2)
        + var_e8)) << 2) + *((eax_28 << 2) + &data_4e3da80)
    int32_t eax_32
    eax_32.b = *(edi + 1)
    *(edi + 1) = eax_32.b + (*(((*ebx_38 - eax_32) << 2) + var_118)).b
    int32_t ebx_43
    ebx_43.b = *var_18
    int32_t eax_40
    eax_40.b = *edi
    int32_t var_f0
    int32_t var_e4
    int32_t var_d8
    int32_t* ebx_57 = ((var_f0 + *(((var_d8
        + *(((edx_5 + *(((ebx_43 - edx_5) << 2) + eax_9) - var_d8) << 2) + var_d4) - var_f0) << 2)
        + var_e4)) << 2) + *((eax_40 << 2) + &data_4e3da80)
    int32_t eax_44
    eax_44.b = *edi
    result = eax_44.b + (*(((*ebx_57 - eax_44) << 2) + var_118)).b
    *edi = result
    esi_4 = esi_1 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
