// 函数: sub_946710
// 地址: 0x946710
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
    
    int32_t var_118
    int32_t var_15c_1 = var_118
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
    int32_t var_e0
    int32_t var_d4
    int32_t eax_13 =
        var_e0 + *(((edx_5 + *(((ebx_5 - edx_5) << 2) + eax_9) - var_e0) << 2) + var_d4)
    int32_t var_88
    int32_t ebx_14 = eax_13 + var_88
    char eax_16
    
    if (eax_13 + var_88 s< 0)
        if (ebx_14 s< 0xffffff01)
            ebx_14 = 0xffffff01
        
        int32_t ebx_23
        ebx_23.b = edi[2]
        eax_16 = (*((ebx_23 << 2) + *((ebx_14 << 2) + data_4ced578))).b
    else
        if (ebx_14 s> 0xff)
            ebx_14 = 0xff
        
        int32_t ebx_17
        ebx_17.b = edi[2]
        eax_16 = (*(((ebx_17 - 0xff) << 2) + *((ebx_14 << 2) + data_4ced578))).b - 1
    
    edi[2] = eax_16
    int32_t ebx_26
    ebx_26.b = var_18[1]
    int32_t var_dc
    int32_t eax_21 =
        var_dc + *(((edx_5 + *(((ebx_26 - edx_5) << 2) + eax_9) - var_dc) << 2) + var_d4)
    int32_t var_84
    int32_t ebx_35 = eax_21 + var_84
    char eax_24
    
    if (eax_21 + var_84 s< 0)
        if (ebx_35 s< 0xffffff01)
            ebx_35 = 0xffffff01
        
        int32_t ebx_44
        ebx_44.b = edi[1]
        eax_24 = (*((ebx_44 << 2) + *((ebx_35 << 2) + data_4ced578))).b
    else
        if (ebx_35 s> 0xff)
            ebx_35 = 0xff
        
        int32_t ebx_38
        ebx_38.b = edi[1]
        eax_24 = (*(((ebx_38 - 0xff) << 2) + *((ebx_35 << 2) + data_4ced578))).b - 1
    
    edi[1] = eax_24
    int32_t ebx_47
    ebx_47.b = *var_18
    int32_t var_d8
    int32_t eax_29 =
        var_d8 + *(((edx_5 + *(((ebx_47 - edx_5) << 2) + eax_9) - var_d8) << 2) + var_d4)
    int32_t var_80
    int32_t ebx_56 = eax_29 + var_80
    
    if (eax_29 + var_80 s< 0)
        if (ebx_56 s< 0xffffff01)
            ebx_56 = 0xffffff01
        
        int32_t ebx_65
        ebx_65.b = *edi
        result = (*((ebx_65 << 2) + *((ebx_56 << 2) + data_4ced578))).b
    else
        if (ebx_56 s> 0xff)
            ebx_56 = 0xff
        
        int32_t ebx_59
        ebx_59.b = *edi
        result = (*(((ebx_59 - 0xff) << 2) + *((ebx_56 << 2) + data_4ced578))).b - 1
    
    *edi = result
    esi_4 = esi_1 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
