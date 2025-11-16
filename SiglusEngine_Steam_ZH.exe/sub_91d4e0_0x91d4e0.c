// 函数: sub_91d4e0
// 地址: 0x91d4e0
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
    int32_t eax_14
    eax_14.b = edi[2]
    int32_t var_118
    int32_t var_e0
    int32_t var_d4
    int32_t eax_15 = eax_14 + *(((var_e0
        + *(((edx_5 + *(((ebx_5 - edx_5) << 2) + eax_9) - var_e0) << 2) + var_d4)) << 2) + var_118)
    
    if (eax_15 s> 0xff)
        eax_15 = 0xff
    
    edi[2] = eax_15.b
    int32_t ebx_17
    ebx_17.b = var_18[1]
    int32_t eax_20
    eax_20.b = edi[1]
    int32_t var_dc
    int32_t eax_21 = eax_20 + *(((var_dc
        + *(((edx_5 + *(((ebx_17 - edx_5) << 2) + eax_9) - var_dc) << 2) + var_d4)) << 2) + var_118)
    
    if (eax_21 s> 0xff)
        eax_21 = 0xff
    
    edi[1] = eax_21.b
    int32_t ebx_29
    ebx_29.b = *var_18
    int32_t eax_26
    eax_26.b = *edi
    int32_t var_d8
    result = eax_26 + *(((var_d8
        + *(((edx_5 + *(((ebx_29 - edx_5) << 2) + eax_9) - var_d8) << 2) + var_d4)) << 2) + var_118)
    
    if (result s> 0xff)
        result = 0xff
    
    *edi = result.b
    esi_4 = esi_1 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
