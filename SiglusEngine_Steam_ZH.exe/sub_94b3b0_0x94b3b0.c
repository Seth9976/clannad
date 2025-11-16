// 函数: sub_94b3b0
// 地址: 0x94b3b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
int32_t* var_14
int32_t* esi_4 = var_14
char* var_1c
char* edi = var_1c
int32_t i_2
int32_t i_1 = i_2
int32_t result
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
    
    result = *esi_1
    
    if (result != 0)
        int32_t var_8
        
        if (result s> 0)
            edi = &edi[var_8]
        else
            edi -= var_8
    
    char* var_18
    int32_t ebx_1
    ebx_1.b = var_18[3]
    
    if (ebx_1 != 0)
        int32_t edx_2 = *((ebx_1 << 2) + &data_4e3da80)
        int32_t ebx_5
        ebx_5.b = var_18[2]
        int32_t eax_2
        eax_2.b = not.b(ebx_5.b)
        int32_t var_f8
        int32_t var_ec
        int32_t var_e0
        int32_t var_d4
        int32_t var_d0
        int32_t eax_7 = var_f8 + *(((var_e0
            + *(((eax_2 + *(((ebx_5 - eax_2) << 2) + var_d0) - var_e0) << 2) + var_d4) - var_f8) << 2)
            + var_ec)
        int32_t var_88
        int32_t ebx_18 = eax_7 + var_88
        int32_t ebx_26
        
        if (eax_7 + var_88 s< 0)
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
        
        int32_t eax_10
        eax_10.b = edi[2]
        edi[2] = eax_10.b + (*(((ebx_26 - eax_10) << 2) + edx_2)).b
        int32_t ebx_35
        ebx_35.b = var_18[1]
        int32_t eax_12
        eax_12.b = not.b(ebx_35.b)
        int32_t var_f4
        int32_t var_e8
        int32_t var_dc
        int32_t eax_17 = var_f4 + *(((var_dc
            + *(((eax_12 + *(((ebx_35 - eax_12) << 2) + var_d0) - var_dc) << 2) + var_d4) - var_f4)
            << 2) + var_e8)
        int32_t var_84
        int32_t ebx_48 = eax_17 + var_84
        int32_t ebx_56
        
        if (eax_17 + var_84 s< 0)
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
        
        int32_t eax_20
        eax_20.b = edi[1]
        edi[1] = eax_20.b + (*(((ebx_56 - eax_20) << 2) + edx_2)).b
        int32_t ebx_65
        ebx_65.b = *var_18
        int32_t eax_22
        eax_22.b = not.b(ebx_65.b)
        int32_t var_f0
        int32_t var_e4
        int32_t var_d8
        int32_t eax_27 = var_f0 + *(((var_d8
            + *(((eax_22 + *(((ebx_65 - eax_22) << 2) + var_d0) - var_d8) << 2) + var_d4) - var_f0)
            << 2) + var_e4)
        int32_t var_80
        int32_t ebx_78 = eax_27 + var_80
        int32_t ebx_86
        
        if (eax_27 + var_80 s< 0)
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
        
        int32_t eax_30
        eax_30.b = *edi
        result = eax_30 + *(((ebx_86 - eax_30) << 2) + edx_2)
        *edi = result.b
    
    esi_4 = esi_1 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
