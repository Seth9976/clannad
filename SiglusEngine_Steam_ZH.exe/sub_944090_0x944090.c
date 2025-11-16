// 函数: sub_944090
// 地址: 0x944090
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
    int32_t var_f8
    int32_t var_ec
    int32_t var_e0
    int32_t var_d4
    int32_t eax_6 =
        var_f8 + *(((var_e0 + *(((ebx_1 - var_e0) << 2) + var_d4) - var_f8) << 2) + var_ec)
    int32_t var_88
    int32_t ebx_10 = eax_6 + var_88
    char eax_9
    
    if (eax_6 + var_88 s< 0)
        if (ebx_10 s< 0xffffff01)
            ebx_10 = 0xffffff01
        
        int32_t ebx_19
        ebx_19.b = edi[2]
        eax_9 = (*((ebx_19 << 2) + *((ebx_10 << 2) + data_4ced578))).b
    else
        if (ebx_10 s> 0xff)
            ebx_10 = 0xff
        
        int32_t ebx_13
        ebx_13.b = edi[2]
        eax_9 = (*(((ebx_13 - 0xff) << 2) + *((ebx_10 << 2) + data_4ced578))).b - 1
    
    edi[2] = eax_9
    int32_t ebx_22
    ebx_22.b = var_18[1]
    int32_t var_f4
    int32_t var_e8
    int32_t var_dc
    int32_t eax_14 =
        var_f4 + *(((var_dc + *(((ebx_22 - var_dc) << 2) + var_d4) - var_f4) << 2) + var_e8)
    int32_t var_84
    int32_t ebx_31 = eax_14 + var_84
    char eax_17
    
    if (eax_14 + var_84 s< 0)
        if (ebx_31 s< 0xffffff01)
            ebx_31 = 0xffffff01
        
        int32_t ebx_40
        ebx_40.b = edi[1]
        eax_17 = (*((ebx_40 << 2) + *((ebx_31 << 2) + data_4ced578))).b
    else
        if (ebx_31 s> 0xff)
            ebx_31 = 0xff
        
        int32_t ebx_34
        ebx_34.b = edi[1]
        eax_17 = (*(((ebx_34 - 0xff) << 2) + *((ebx_31 << 2) + data_4ced578))).b - 1
    
    edi[1] = eax_17
    int32_t ebx_43
    ebx_43.b = *var_18
    int32_t var_f0
    int32_t var_e4
    int32_t var_d8
    int32_t eax_22 =
        var_f0 + *(((var_d8 + *(((ebx_43 - var_d8) << 2) + var_d4) - var_f0) << 2) + var_e4)
    int32_t var_80
    int32_t ebx_52 = eax_22 + var_80
    
    if (eax_22 + var_80 s< 0)
        if (ebx_52 s< 0xffffff01)
            ebx_52 = 0xffffff01
        
        int32_t ebx_61
        ebx_61.b = *edi
        result = (*((ebx_61 << 2) + *((ebx_52 << 2) + data_4ced578))).b
    else
        if (ebx_52 s> 0xff)
            ebx_52 = 0xff
        
        int32_t ebx_55
        ebx_55.b = *edi
        result = (*(((ebx_55 - 0xff) << 2) + *((ebx_52 << 2) + data_4ced578))).b - 1
    
    *edi = result
    esi_4 = esi_1 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
