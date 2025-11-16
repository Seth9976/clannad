// 函数: sub_9478e0
// 地址: 0x9478e0
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
    int32_t var_d0
    int32_t eax_15 =
        var_f8 + *(((eax_12 + *(((eax_11 - eax_12) << 2) + var_d0) - var_f8) << 2) + var_ec)
    int32_t var_88
    int32_t ebx_18 = eax_15 + var_88
    int32_t ebx_26
    
    if (eax_15 + var_88 s< 0)
        if (ebx_18 s< 0xffffff01)
            ebx_18 = 0xffffff01
        
        int32_t ebx_29
        ebx_29.b = edi[2]
        ebx_26 = *((ebx_29 << 2) + *((ebx_18 << 2) + data_4ced578))
    else
        if (ebx_18 s> 0xff)
            ebx_18 = 0xff
        
        int32_t ebx_21
        ebx_21.b = edi[2]
        ebx_26 = *(((ebx_21 - 0xff) << 2) + *((ebx_18 << 2) + data_4ced578)) + 0xff
    
    int32_t eax_18
    eax_18.b = edi[2]
    int32_t var_118
    edi[2] = eax_18.b + (*(((ebx_26 - eax_18) << 2) + var_118)).b
    int32_t ebx_35
    ebx_35.b = var_18[1]
    int32_t eax_21 = edx_5 + *(((ebx_35 - edx_5) << 2) + eax_9)
    int32_t eax_22
    eax_22.b = not.b(eax_21.b)
    int32_t var_f4
    int32_t var_e8
    int32_t eax_25 =
        var_f4 + *(((eax_22 + *(((eax_21 - eax_22) << 2) + var_d0) - var_f4) << 2) + var_e8)
    int32_t var_84
    int32_t ebx_48 = eax_25 + var_84
    int32_t ebx_56
    
    if (eax_25 + var_84 s< 0)
        if (ebx_48 s< 0xffffff01)
            ebx_48 = 0xffffff01
        
        int32_t ebx_59
        ebx_59.b = edi[1]
        ebx_56 = *((ebx_59 << 2) + *((ebx_48 << 2) + data_4ced578))
    else
        if (ebx_48 s> 0xff)
            ebx_48 = 0xff
        
        int32_t ebx_51
        ebx_51.b = edi[1]
        ebx_56 = *(((ebx_51 - 0xff) << 2) + *((ebx_48 << 2) + data_4ced578)) + 0xff
    
    int32_t eax_28
    eax_28.b = edi[1]
    edi[1] = eax_28.b + (*(((ebx_56 - eax_28) << 2) + var_118)).b
    int32_t ebx_65
    ebx_65.b = *var_18
    int32_t eax_31 = edx_5 + *(((ebx_65 - edx_5) << 2) + eax_9)
    int32_t eax_32
    eax_32.b = not.b(eax_31.b)
    int32_t var_f0
    int32_t var_e4
    int32_t eax_35 =
        var_f0 + *(((eax_32 + *(((eax_31 - eax_32) << 2) + var_d0) - var_f0) << 2) + var_e4)
    int32_t var_80
    int32_t ebx_78 = eax_35 + var_80
    int32_t ebx_86
    
    if (eax_35 + var_80 s< 0)
        if (ebx_78 s< 0xffffff01)
            ebx_78 = 0xffffff01
        
        int32_t ebx_89
        ebx_89.b = *edi
        ebx_86 = *((ebx_89 << 2) + *((ebx_78 << 2) + data_4ced578))
    else
        if (ebx_78 s> 0xff)
            ebx_78 = 0xff
        
        int32_t ebx_81
        ebx_81.b = *edi
        ebx_86 = *(((ebx_81 - 0xff) << 2) + *((ebx_78 << 2) + data_4ced578)) + 0xff
    
    int32_t eax_38
    eax_38.b = *edi
    result = eax_38.b + (*(((ebx_86 - eax_38) << 2) + var_118)).b
    *edi = result
    esi_4 = esi_1 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
