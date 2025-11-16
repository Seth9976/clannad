// 函数: sub_947370
// 地址: 0x947370
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
    int32_t eax_12
    eax_12.b = not.b(eax_11.b)
    int32_t var_f8
    int32_t var_ec
    int32_t var_d0
    int32_t eax_15 =
        var_f8 + *(((eax_12 + *(((eax_11 - eax_12) << 2) + var_d0) - var_f8) << 2) + var_ec)
    int32_t var_88
    int32_t ebx_18 = eax_15 + var_88
    char eax_18
    
    if (eax_15 + var_88 s< 0)
        if (ebx_18 s< 0xffffff01)
            ebx_18 = 0xffffff01
        
        int32_t ebx_27
        ebx_27.b = edi[2]
        eax_18 = (*((ebx_27 << 2) + *((ebx_18 << 2) + data_4ced578))).b
    else
        if (ebx_18 s> 0xff)
            ebx_18 = 0xff
        
        int32_t ebx_21
        ebx_21.b = edi[2]
        eax_18 = (*(((ebx_21 - 0xff) << 2) + *((ebx_18 << 2) + data_4ced578))).b - 1
    
    edi[2] = eax_18
    int32_t ebx_30
    ebx_30.b = var_18[1]
    int32_t eax_21 = edx_5 + *(((ebx_30 - edx_5) << 2) + eax_9)
    int32_t eax_22
    eax_22.b = not.b(eax_21.b)
    int32_t var_f4
    int32_t var_e8
    int32_t eax_25 =
        var_f4 + *(((eax_22 + *(((eax_21 - eax_22) << 2) + var_d0) - var_f4) << 2) + var_e8)
    int32_t var_84
    int32_t ebx_43 = eax_25 + var_84
    char eax_28
    
    if (eax_25 + var_84 s< 0)
        if (ebx_43 s< 0xffffff01)
            ebx_43 = 0xffffff01
        
        int32_t ebx_52
        ebx_52.b = edi[1]
        eax_28 = (*((ebx_52 << 2) + *((ebx_43 << 2) + data_4ced578))).b
    else
        if (ebx_43 s> 0xff)
            ebx_43 = 0xff
        
        int32_t ebx_46
        ebx_46.b = edi[1]
        eax_28 = (*(((ebx_46 - 0xff) << 2) + *((ebx_43 << 2) + data_4ced578))).b - 1
    
    edi[1] = eax_28
    int32_t ebx_55
    ebx_55.b = *var_18
    int32_t eax_31 = edx_5 + *(((ebx_55 - edx_5) << 2) + eax_9)
    int32_t eax_32
    eax_32.b = not.b(eax_31.b)
    int32_t var_f0
    int32_t var_e4
    int32_t eax_35 =
        var_f0 + *(((eax_32 + *(((eax_31 - eax_32) << 2) + var_d0) - var_f0) << 2) + var_e4)
    int32_t var_80
    int32_t ebx_68 = eax_35 + var_80
    
    if (eax_35 + var_80 s< 0)
        if (ebx_68 s< 0xffffff01)
            ebx_68 = 0xffffff01
        
        int32_t ebx_77
        ebx_77.b = *edi
        result = (*((ebx_77 << 2) + *((ebx_68 << 2) + data_4ced578))).b
    else
        if (ebx_68 s> 0xff)
            ebx_68 = 0xff
        
        int32_t ebx_71
        ebx_71.b = *edi
        result = (*(((ebx_71 - 0xff) << 2) + *((ebx_68 << 2) + data_4ced578))).b - 1
    
    *edi = result
    esi_4 = esi_1 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
