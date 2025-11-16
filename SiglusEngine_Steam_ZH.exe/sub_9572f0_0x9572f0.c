// 函数: sub_9572f0
// 地址: 0x9572f0
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
    int32_t var_88
    int32_t ebx_2 = ebx_1 + var_88
    int32_t ebx_10
    
    if (ebx_1 + var_88 s< 0)
        if (ebx_2 s< 0xffffff01)
            ebx_2 = 0xffffff01
        
        int32_t ebx_13
        ebx_13.b = edi[2]
        ebx_10 = *((ebx_13 << 2) + *((ebx_2 << 2) + data_4ced578))
    else
        if (ebx_2 s> 0xff)
            ebx_2 = 0xff
        
        int32_t ebx_5
        ebx_5.b = edi[2]
        ebx_10 = *(((ebx_5 - 0xff) << 2) + *((ebx_2 << 2) + data_4ced578)) + 0xff
    
    int32_t eax_5
    eax_5.b = edi[2]
    int32_t var_118
    edi[2] = eax_5.b + (*(((ebx_10 - eax_5) << 2) + var_118)).b
    int32_t ebx_19
    ebx_19.b = var_18[1]
    int32_t var_84
    int32_t ebx_20 = ebx_19 + var_84
    int32_t ebx_28
    
    if (ebx_19 + var_84 s< 0)
        if (ebx_20 s< 0xffffff01)
            ebx_20 = 0xffffff01
        
        int32_t ebx_31
        ebx_31.b = edi[1]
        ebx_28 = *((ebx_31 << 2) + *((ebx_20 << 2) + data_4ced578))
    else
        if (ebx_20 s> 0xff)
            ebx_20 = 0xff
        
        int32_t ebx_23
        ebx_23.b = edi[1]
        ebx_28 = *(((ebx_23 - 0xff) << 2) + *((ebx_20 << 2) + data_4ced578)) + 0xff
    
    int32_t eax_9
    eax_9.b = edi[1]
    edi[1] = eax_9.b + (*(((ebx_28 - eax_9) << 2) + var_118)).b
    int32_t ebx_37
    ebx_37.b = *var_18
    int32_t var_80
    int32_t ebx_38 = ebx_37 + var_80
    int32_t ebx_46
    
    if (ebx_37 + var_80 s< 0)
        if (ebx_38 s< 0xffffff01)
            ebx_38 = 0xffffff01
        
        int32_t ebx_49
        ebx_49.b = *edi
        ebx_46 = *((ebx_49 << 2) + *((ebx_38 << 2) + data_4ced578))
    else
        if (ebx_38 s> 0xff)
            ebx_38 = 0xff
        
        int32_t ebx_41
        ebx_41.b = *edi
        ebx_46 = *(((ebx_41 - 0xff) << 2) + *((ebx_38 << 2) + data_4ced578)) + 0xff
    
    int32_t eax_13
    eax_13.b = *edi
    result = eax_13.b + (*(((ebx_46 - eax_13) << 2) + var_118)).b
    *edi = result
    esi_4 = esi_1 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
