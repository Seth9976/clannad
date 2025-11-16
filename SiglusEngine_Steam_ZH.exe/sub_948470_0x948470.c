// 函数: sub_948470
// 地址: 0x948470
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
    int32_t eax_12
    eax_12.b = not.b(eax_11.b)
    int32_t var_f8
    int32_t var_ec
    int32_t var_e0
    int32_t var_d4
    int32_t var_d0
    int32_t eax_17 = var_f8 + *(((var_e0
        + *(((eax_12 + *(((eax_11 - eax_12) << 2) + var_d0) - var_e0) << 2) + var_d4) - var_f8) << 2)
        + var_ec)
    int32_t var_88
    int32_t ebx_22 = eax_17 + var_88
    int32_t ebx_30
    
    if (eax_17 + var_88 s< 0)
        if (ebx_22 s< 0xffffff01)
            ebx_22 = 0xffffff01
        
        int32_t ebx_33
        ebx_33.b = edi[2]
        ebx_30 = *((ebx_33 << 2) + *((ebx_22 << 2) + data_4ced578))
    else
        if (ebx_22 s> 0xff)
            ebx_22 = 0xff
        
        int32_t ebx_25
        ebx_25.b = edi[2]
        ebx_30 = *(((ebx_25 - 0xff) << 2) + *((ebx_22 << 2) + data_4ced578)) + 0xff
    
    int32_t eax_20
    eax_20.b = edi[2]
    int32_t var_118
    edi[2] = eax_20.b + (*(((ebx_30 - eax_20) << 2) + var_118)).b
    int32_t ebx_39
    ebx_39.b = var_18[1]
    int32_t eax_23 = edx_5 + *(((ebx_39 - edx_5) << 2) + eax_9)
    int32_t eax_24
    eax_24.b = not.b(eax_23.b)
    int32_t var_f4
    int32_t var_e8
    int32_t var_dc
    int32_t eax_29 = var_f4 + *(((var_dc
        + *(((eax_24 + *(((eax_23 - eax_24) << 2) + var_d0) - var_dc) << 2) + var_d4) - var_f4) << 2)
        + var_e8)
    int32_t var_84
    int32_t ebx_56 = eax_29 + var_84
    int32_t ebx_64
    
    if (eax_29 + var_84 s< 0)
        if (ebx_56 s< 0xffffff01)
            ebx_56 = 0xffffff01
        
        int32_t ebx_67
        ebx_67.b = edi[1]
        ebx_64 = *((ebx_67 << 2) + *((ebx_56 << 2) + data_4ced578))
    else
        if (ebx_56 s> 0xff)
            ebx_56 = 0xff
        
        int32_t ebx_59
        ebx_59.b = edi[1]
        ebx_64 = *(((ebx_59 - 0xff) << 2) + *((ebx_56 << 2) + data_4ced578)) + 0xff
    
    int32_t eax_32
    eax_32.b = edi[1]
    edi[1] = eax_32.b + (*(((ebx_64 - eax_32) << 2) + var_118)).b
    int32_t ebx_73
    ebx_73.b = *var_18
    int32_t eax_35 = edx_5 + *(((ebx_73 - edx_5) << 2) + eax_9)
    int32_t eax_36
    eax_36.b = not.b(eax_35.b)
    int32_t var_f0
    int32_t var_e4
    int32_t var_d8
    int32_t eax_41 = var_f0 + *(((var_d8
        + *(((eax_36 + *(((eax_35 - eax_36) << 2) + var_d0) - var_d8) << 2) + var_d4) - var_f0) << 2)
        + var_e4)
    int32_t var_80
    int32_t ebx_90 = eax_41 + var_80
    int32_t ebx_98
    
    if (eax_41 + var_80 s< 0)
        if (ebx_90 s< 0xffffff01)
            ebx_90 = 0xffffff01
        
        int32_t ebx_101
        ebx_101.b = *edi
        ebx_98 = *((ebx_101 << 2) + *((ebx_90 << 2) + data_4ced578))
    else
        if (ebx_90 s> 0xff)
            ebx_90 = 0xff
        
        int32_t ebx_93
        ebx_93.b = *edi
        ebx_98 = *(((ebx_93 - 0xff) << 2) + *((ebx_90 << 2) + data_4ced578)) + 0xff
    
    int32_t eax_44
    eax_44.b = *edi
    result = eax_44.b + (*(((ebx_98 - eax_44) << 2) + var_118)).b
    *edi = result
    esi_4 = esi_1 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
