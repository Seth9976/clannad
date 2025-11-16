// 函数: sub_9442a0
// 地址: 0x9442a0
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
        int32_t var_f8
        int32_t var_ec
        int32_t var_e0
        int32_t var_d4
        int32_t eax_5 =
            var_f8 + *(((var_e0 + *(((ebx_5 - var_e0) << 2) + var_d4) - var_f8) << 2) + var_ec)
        int32_t var_88
        int32_t ebx_14 = eax_5 + var_88
        int32_t ebx_22
        
        if (eax_5 + var_88 s< 0)
            if (ebx_14 s< 0xffffff01)
                ebx_14 = 0xffffff01
            
            int32_t ebx_25
            ebx_25.b = edi[2]
            ebx_22 = *((ebx_25 << 2) + *((ebx_14 << 2) + data_4ced578))
        else
            if (ebx_14 s> 0xff)
                ebx_14 = 0xff
            
            int32_t ebx_17
            ebx_17.b = edi[2]
            ebx_22 = *(((ebx_17 - 0xff) << 2) + *((ebx_14 << 2) + data_4ced578)) + 0xff
        
        int32_t eax_8
        eax_8.b = edi[2]
        edi[2] = eax_8.b + (*(((ebx_22 - eax_8) << 2) + edx_2)).b
        int32_t ebx_31
        ebx_31.b = var_18[1]
        int32_t var_f4
        int32_t var_e8
        int32_t var_dc
        int32_t eax_13 =
            var_f4 + *(((var_dc + *(((ebx_31 - var_dc) << 2) + var_d4) - var_f4) << 2) + var_e8)
        int32_t var_84
        int32_t ebx_40 = eax_13 + var_84
        int32_t ebx_48
        
        if (eax_13 + var_84 s< 0)
            if (ebx_40 s< 0xffffff01)
                ebx_40 = 0xffffff01
            
            int32_t ebx_51
            ebx_51.b = edi[1]
            ebx_48 = *((ebx_51 << 2) + *((ebx_40 << 2) + data_4ced578))
        else
            if (ebx_40 s> 0xff)
                ebx_40 = 0xff
            
            int32_t ebx_43
            ebx_43.b = edi[1]
            ebx_48 = *(((ebx_43 - 0xff) << 2) + *((ebx_40 << 2) + data_4ced578)) + 0xff
        
        int32_t eax_16
        eax_16.b = edi[1]
        edi[1] = eax_16.b + (*(((ebx_48 - eax_16) << 2) + edx_2)).b
        int32_t ebx_57
        ebx_57.b = *var_18
        int32_t var_f0
        int32_t var_e4
        int32_t var_d8
        int32_t eax_21 =
            var_f0 + *(((var_d8 + *(((ebx_57 - var_d8) << 2) + var_d4) - var_f0) << 2) + var_e4)
        int32_t var_80
        int32_t ebx_66 = eax_21 + var_80
        int32_t ebx_74
        
        if (eax_21 + var_80 s< 0)
            if (ebx_66 s< 0xffffff01)
                ebx_66 = 0xffffff01
            
            int32_t ebx_77
            ebx_77.b = *edi
            ebx_74 = *((ebx_77 << 2) + *((ebx_66 << 2) + data_4ced578))
        else
            if (ebx_66 s> 0xff)
                ebx_66 = 0xff
            
            int32_t ebx_69
            ebx_69.b = *edi
            ebx_74 = *(((ebx_69 - 0xff) << 2) + *((ebx_66 << 2) + data_4ced578)) + 0xff
        
        int32_t eax_24
        eax_24.b = *edi
        result = eax_24 + *(((ebx_74 - eax_24) << 2) + edx_2)
        *edi = result.b
    
    esi_4 = esi_1 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
