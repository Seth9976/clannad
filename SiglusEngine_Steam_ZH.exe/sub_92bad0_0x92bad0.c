// 函数: sub_92bad0
// 地址: 0x92bad0
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
    
    int32_t eax_2 = *esi_1
    
    if (eax_2 != 0)
        int32_t var_8
        
        if (eax_2 s> 0)
            edi = &edi[var_8]
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
    int32_t eax_11 = edx_5 + *(((ebx_5 - edx_5) << 2) + eax_9)
    int32_t eax_12
    eax_12.b = not.b(eax_11.b)
    int32_t var_118
    int32_t var_f8
    int32_t var_ec
    int32_t var_e0
    int32_t var_d4
    int32_t var_d0
    int32_t ebx_24 = *(((var_f8 + *(((var_e0
        + *(((eax_12 + *(((eax_11 - eax_12) << 2) + var_d0) - var_e0) << 2) + var_d4) - var_f8) << 2)
        + var_ec)) << 2) + var_118)
    int32_t eax_18
    eax_18.b = edi[2]
    int32_t eax_19 = eax_18 - ebx_24
    
    if (eax_19 s< 0)
        eax_19 = 0
    
    edi[2] = eax_19.b
    int32_t ebx_25
    ebx_25.b = var_18[1]
    int32_t eax_21 = edx_5 + *(((ebx_25 - edx_5) << 2) + eax_9)
    int32_t eax_22
    eax_22.b = not.b(eax_21.b)
    int32_t var_f4
    int32_t var_e8
    int32_t var_dc
    int32_t ebx_44 = *(((var_f4 + *(((var_dc
        + *(((eax_22 + *(((eax_21 - eax_22) << 2) + var_d0) - var_dc) << 2) + var_d4) - var_f4) << 2)
        + var_e8)) << 2) + var_118)
    int32_t eax_28
    eax_28.b = edi[1]
    int32_t eax_29 = eax_28 - ebx_44
    
    if (eax_29 s< 0)
        eax_29 = 0
    
    edi[1] = eax_29.b
    int32_t ebx_45
    ebx_45.b = *var_18
    int32_t eax_31 = edx_5 + *(((ebx_45 - edx_5) << 2) + eax_9)
    int32_t eax_32
    eax_32.b = not.b(eax_31.b)
    int32_t var_f0
    int32_t var_e4
    int32_t var_d8
    int32_t ebx_64 = *(((var_f0 + *(((var_d8
        + *(((eax_32 + *(((eax_31 - eax_32) << 2) + var_d0) - var_d8) << 2) + var_d4) - var_f0) << 2)
        + var_e4)) << 2) + var_118)
    int32_t eax_38
    eax_38.b = *edi
    result = eax_38 - ebx_64
    
    if (result s< 0)
        result = 0
    
    *edi = result.b
    esi_4 = esi_1 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
