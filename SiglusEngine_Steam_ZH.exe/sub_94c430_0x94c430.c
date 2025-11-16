// 函数: sub_94c430
// 地址: 0x94c430
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
    int32_t var_d0
    int32_t eax_4 = eax_3 + *(((ebx_1 - eax_3) << 2) + var_d0)
    int32_t var_88
    int32_t ebx_6 = eax_4 + var_88
    char eax_7
    
    if (eax_4 + var_88 s< 0)
        if (ebx_6 s< 0xffffff01)
            ebx_6 = 0xffffff01
        
        int32_t ebx_15
        ebx_15.b = edi[2]
        eax_7 = (*((ebx_15 << 2) + *((ebx_6 << 2) + data_4ced578))).b
    else
        if (ebx_6 s> 0xff)
            ebx_6 = 0xff
        
        int32_t ebx_9
        ebx_9.b = edi[2]
        eax_7 = (*(((ebx_9 - 0xff) << 2) + *((ebx_6 << 2) + data_4ced578))).b - 1
    
    edi[2] = eax_7
    int32_t ebx_18
    ebx_18.b = var_18[1]
    int32_t eax_9
    eax_9.b = not.b(ebx_18.b)
    int32_t eax_10 = eax_9 + *(((ebx_18 - eax_9) << 2) + var_d0)
    int32_t var_84
    int32_t ebx_23 = eax_10 + var_84
    char eax_13
    
    if (eax_10 + var_84 s< 0)
        if (ebx_23 s< 0xffffff01)
            ebx_23 = 0xffffff01
        
        int32_t ebx_32
        ebx_32.b = edi[1]
        eax_13 = (*((ebx_32 << 2) + *((ebx_23 << 2) + data_4ced578))).b
    else
        if (ebx_23 s> 0xff)
            ebx_23 = 0xff
        
        int32_t ebx_26
        ebx_26.b = edi[1]
        eax_13 = (*(((ebx_26 - 0xff) << 2) + *((ebx_23 << 2) + data_4ced578))).b - 1
    
    edi[1] = eax_13
    int32_t ebx_35
    ebx_35.b = *var_18
    int32_t eax_15
    eax_15.b = not.b(ebx_35.b)
    int32_t eax_16 = eax_15 + *(((ebx_35 - eax_15) << 2) + var_d0)
    int32_t var_80
    int32_t ebx_40 = eax_16 + var_80
    
    if (eax_16 + var_80 s< 0)
        if (ebx_40 s< 0xffffff01)
            ebx_40 = 0xffffff01
        
        int32_t ebx_49
        ebx_49.b = *edi
        result = (*((ebx_49 << 2) + *((ebx_40 << 2) + data_4ced578))).b
    else
        if (ebx_40 s> 0xff)
            ebx_40 = 0xff
        
        int32_t ebx_43
        ebx_43.b = *edi
        result = (*(((ebx_43 - 0xff) << 2) + *((ebx_40 << 2) + data_4ced578))).b - 1
    
    *edi = result
    esi_4 = esi_1 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
