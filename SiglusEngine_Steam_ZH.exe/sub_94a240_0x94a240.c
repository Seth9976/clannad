// 函数: sub_94a240
// 地址: 0x94a240
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
int32_t* var_14
int32_t* esi_4 = var_14
char* var_1c
char* edi = var_1c
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
    int32_t var_88
    int32_t ebx_10 = eax_11 + var_88
    int32_t ebx_18
    
    if (eax_11 + var_88 s< 0)
        if (ebx_10 s< 0xffffff01)
            ebx_10 = 0xffffff01
        
        int32_t ebx_21
        ebx_21.b = edi[2]
        ebx_18 = *((ebx_21 << 2) + *((ebx_10 << 2) + data_4ced578))
    else
        if (ebx_10 s> 0xff)
            ebx_10 = 0xff
        
        int32_t ebx_13
        ebx_13.b = edi[2]
        ebx_18 = *(((ebx_13 - 0xff) << 2) + *((ebx_10 << 2) + data_4ced578)) + 0xff
    
    int32_t eax_14
    eax_14.b = edi[2]
    int32_t var_118
    edi[2] = eax_14.b + (*(((ebx_18 - eax_14) << 2) + var_118)).b
    int32_t ebx_27
    ebx_27.b = var_18[1]
    int32_t eax_17 = edx_5 + *(((ebx_27 - edx_5) << 2) + eax_9)
    int32_t var_84
    int32_t ebx_32 = eax_17 + var_84
    int32_t ebx_40
    
    if (eax_17 + var_84 s< 0)
        if (ebx_32 s< 0xffffff01)
            ebx_32 = 0xffffff01
        
        int32_t ebx_43
        ebx_43.b = edi[1]
        ebx_40 = *((ebx_43 << 2) + *((ebx_32 << 2) + data_4ced578))
    else
        if (ebx_32 s> 0xff)
            ebx_32 = 0xff
        
        int32_t ebx_35
        ebx_35.b = edi[1]
        ebx_40 = *(((ebx_35 - 0xff) << 2) + *((ebx_32 << 2) + data_4ced578)) + 0xff
    
    int32_t eax_20
    eax_20.b = edi[1]
    edi[1] = eax_20.b + (*(((ebx_40 - eax_20) << 2) + var_118)).b
    int32_t ebx_49
    ebx_49.b = *var_18
    int32_t eax_23 = edx_5 + *(((ebx_49 - edx_5) << 2) + eax_9)
    int32_t var_80
    int32_t ebx_54 = eax_23 + var_80
    int32_t ebx_62
    
    if (eax_23 + var_80 s< 0)
        if (ebx_54 s< 0xffffff01)
            ebx_54 = 0xffffff01
        
        int32_t ebx_65
        ebx_65.b = *edi
        ebx_62 = *((ebx_65 << 2) + *((ebx_54 << 2) + data_4ced578))
    else
        if (ebx_54 s> 0xff)
            ebx_54 = 0xff
        
        int32_t ebx_57
        ebx_57.b = *edi
        ebx_62 = *(((ebx_57 - 0xff) << 2) + *((ebx_54 << 2) + data_4ced578)) + 0xff
    
    int32_t eax_26
    eax_26.b = *edi
    result = eax_26.b + (*(((ebx_62 - eax_26) << 2) + var_118)).b
    *edi = result
    esi_4 = esi_1 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
