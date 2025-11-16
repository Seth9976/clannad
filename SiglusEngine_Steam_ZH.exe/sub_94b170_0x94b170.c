// 函数: sub_94b170
// 地址: 0x94b170
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
    int32_t ebx_1
    ebx_1.b = var_18[2]
    int32_t eax_3
    eax_3.b = not.b(ebx_1.b)
    int32_t var_f8
    int32_t var_ec
    int32_t var_e0
    int32_t var_d4
    int32_t var_d0
    int32_t eax_8 = var_f8 + *(((var_e0
        + *(((eax_3 + *(((ebx_1 - eax_3) << 2) + var_d0) - var_e0) << 2) + var_d4) - var_f8) << 2)
        + var_ec)
    int32_t var_88
    int32_t ebx_14 = eax_8 + var_88
    char eax_11
    
    if (eax_8 + var_88 s< 0)
        if (ebx_14 s< 0xffffff01)
            ebx_14 = 0xffffff01
        
        int32_t ebx_23
        ebx_23.b = edi[2]
        eax_11 = (*((ebx_23 << 2) + *((ebx_14 << 2) + data_4ced578))).b
    else
        if (ebx_14 s> 0xff)
            ebx_14 = 0xff
        
        int32_t ebx_17
        ebx_17.b = edi[2]
        eax_11 = (*(((ebx_17 - 0xff) << 2) + *((ebx_14 << 2) + data_4ced578))).b - 1
    
    edi[2] = eax_11
    int32_t ebx_26
    ebx_26.b = var_18[1]
    int32_t eax_13
    eax_13.b = not.b(ebx_26.b)
    int32_t var_f4
    int32_t var_e8
    int32_t var_dc
    int32_t eax_18 = var_f4 + *(((var_dc
        + *(((eax_13 + *(((ebx_26 - eax_13) << 2) + var_d0) - var_dc) << 2) + var_d4) - var_f4) << 2)
        + var_e8)
    int32_t var_84
    int32_t ebx_39 = eax_18 + var_84
    char eax_21
    
    if (eax_18 + var_84 s< 0)
        if (ebx_39 s< 0xffffff01)
            ebx_39 = 0xffffff01
        
        int32_t ebx_48
        ebx_48.b = edi[1]
        eax_21 = (*((ebx_48 << 2) + *((ebx_39 << 2) + data_4ced578))).b
    else
        if (ebx_39 s> 0xff)
            ebx_39 = 0xff
        
        int32_t ebx_42
        ebx_42.b = edi[1]
        eax_21 = (*(((ebx_42 - 0xff) << 2) + *((ebx_39 << 2) + data_4ced578))).b - 1
    
    edi[1] = eax_21
    int32_t ebx_51
    ebx_51.b = *var_18
    int32_t eax_23
    eax_23.b = not.b(ebx_51.b)
    int32_t var_f0
    int32_t var_e4
    int32_t var_d8
    int32_t eax_28 = var_f0 + *(((var_d8
        + *(((eax_23 + *(((ebx_51 - eax_23) << 2) + var_d0) - var_d8) << 2) + var_d4) - var_f0) << 2)
        + var_e4)
    int32_t var_80
    int32_t ebx_64 = eax_28 + var_80
    
    if (eax_28 + var_80 s< 0)
        if (ebx_64 s< 0xffffff01)
            ebx_64 = 0xffffff01
        
        int32_t ebx_73
        ebx_73.b = *edi
        result = (*((ebx_73 << 2) + *((ebx_64 << 2) + data_4ced578))).b
    else
        if (ebx_64 s> 0xff)
            ebx_64 = 0xff
        
        int32_t ebx_67
        ebx_67.b = *edi
        result = (*(((ebx_67 - 0xff) << 2) + *((ebx_64 << 2) + data_4ced578))).b - 1
    
    *edi = result
    esi_4 = esi_1 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
