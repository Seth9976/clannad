// 函数: sub_94ace0
// 地址: 0x94ace0
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
    int32_t var_d0
    int32_t eax_6 =
        var_f8 + *(((eax_3 + *(((ebx_1 - eax_3) << 2) + var_d0) - var_f8) << 2) + var_ec)
    int32_t var_88
    int32_t ebx_10 = eax_6 + var_88
    int32_t ebx_18
    
    if (eax_6 + var_88 s< 0)
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
    
    int32_t eax_9
    eax_9.b = edi[2]
    int32_t var_118
    edi[2] = eax_9.b + (*(((ebx_18 - eax_9) << 2) + var_118)).b
    int32_t ebx_27
    ebx_27.b = var_18[1]
    int32_t eax_11
    eax_11.b = not.b(ebx_27.b)
    int32_t var_f4
    int32_t var_e8
    int32_t eax_14 =
        var_f4 + *(((eax_11 + *(((ebx_27 - eax_11) << 2) + var_d0) - var_f4) << 2) + var_e8)
    int32_t var_84
    int32_t ebx_36 = eax_14 + var_84
    int32_t ebx_44
    
    if (eax_14 + var_84 s< 0)
        if (ebx_36 s< 0xffffff01)
            ebx_36 = 0xffffff01
        
        int32_t ebx_47
        ebx_47.b = edi[1]
        ebx_44 = *((ebx_47 << 2) + *((ebx_36 << 2) + data_4ced578))
    else
        if (ebx_36 s> 0xff)
            ebx_36 = 0xff
        
        int32_t ebx_39
        ebx_39.b = edi[1]
        ebx_44 = *(((ebx_39 - 0xff) << 2) + *((ebx_36 << 2) + data_4ced578)) + 0xff
    
    int32_t eax_17
    eax_17.b = edi[1]
    edi[1] = eax_17.b + (*(((ebx_44 - eax_17) << 2) + var_118)).b
    int32_t ebx_53
    ebx_53.b = *var_18
    int32_t eax_19
    eax_19.b = not.b(ebx_53.b)
    int32_t var_f0
    int32_t var_e4
    int32_t eax_22 =
        var_f0 + *(((eax_19 + *(((ebx_53 - eax_19) << 2) + var_d0) - var_f0) << 2) + var_e4)
    int32_t var_80
    int32_t ebx_62 = eax_22 + var_80
    int32_t ebx_70
    
    if (eax_22 + var_80 s< 0)
        if (ebx_62 s< 0xffffff01)
            ebx_62 = 0xffffff01
        
        int32_t ebx_73
        ebx_73.b = *edi
        ebx_70 = *((ebx_73 << 2) + *((ebx_62 << 2) + data_4ced578))
    else
        if (ebx_62 s> 0xff)
            ebx_62 = 0xff
        
        int32_t ebx_65
        ebx_65.b = *edi
        ebx_70 = *(((ebx_65 - 0xff) << 2) + *((ebx_62 << 2) + data_4ced578)) + 0xff
    
    int32_t eax_25
    eax_25.b = *edi
    result = eax_25.b + (*(((ebx_70 - eax_25) << 2) + var_118)).b
    *edi = result
    esi_4 = esi_1 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
