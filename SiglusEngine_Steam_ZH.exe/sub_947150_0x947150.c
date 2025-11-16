// 函数: sub_947150
// 地址: 0x947150
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
    int32_t eax_11 = edx_5 + *(((ebx_5 - edx_5) << 2) + eax_9)
    int32_t var_88
    int32_t ebx_10 = eax_11 + var_88
    char eax_14
    
    if (eax_11 + var_88 s< 0)
        if (ebx_10 s< 0xffffff01)
            ebx_10 = 0xffffff01
        
        int32_t ebx_19
        ebx_19.b = edi[2]
        eax_14 = (*((ebx_19 << 2) + *((ebx_10 << 2) + data_4ced578))).b
    else
        if (ebx_10 s> 0xff)
            ebx_10 = 0xff
        
        int32_t ebx_13
        ebx_13.b = edi[2]
        eax_14 = (*(((ebx_13 - 0xff) << 2) + *((ebx_10 << 2) + data_4ced578))).b - 1
    
    edi[2] = eax_14
    int32_t ebx_22
    ebx_22.b = var_18[1]
    int32_t eax_17 = edx_5 + *(((ebx_22 - edx_5) << 2) + eax_9)
    int32_t var_84
    int32_t ebx_27 = eax_17 + var_84
    char eax_20
    
    if (eax_17 + var_84 s< 0)
        if (ebx_27 s< 0xffffff01)
            ebx_27 = 0xffffff01
        
        int32_t ebx_36
        ebx_36.b = edi[1]
        eax_20 = (*((ebx_36 << 2) + *((ebx_27 << 2) + data_4ced578))).b
    else
        if (ebx_27 s> 0xff)
            ebx_27 = 0xff
        
        int32_t ebx_30
        ebx_30.b = edi[1]
        eax_20 = (*(((ebx_30 - 0xff) << 2) + *((ebx_27 << 2) + data_4ced578))).b - 1
    
    edi[1] = eax_20
    int32_t ebx_39
    ebx_39.b = *var_18
    int32_t eax_23 = edx_5 + *(((ebx_39 - edx_5) << 2) + eax_9)
    int32_t var_80
    int32_t ebx_44 = eax_23 + var_80
    
    if (eax_23 + var_80 s< 0)
        if (ebx_44 s< 0xffffff01)
            ebx_44 = 0xffffff01
        
        int32_t ebx_53
        ebx_53.b = *edi
        result = (*((ebx_53 << 2) + *((ebx_44 << 2) + data_4ced578))).b
    else
        if (ebx_44 s> 0xff)
            ebx_44 = 0xff
        
        int32_t ebx_47
        ebx_47.b = *edi
        result = (*(((ebx_47 - 0xff) << 2) + *((ebx_44 << 2) + data_4ced578))).b - 1
    
    *edi = result
    esi_4 = esi_1 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
