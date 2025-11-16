// 函数: sub_943a60
// 地址: 0x943a60
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
        int32_t eax_3 = var_f8 + *(((ebx_5 - var_f8) << 2) + var_ec)
        int32_t var_88
        int32_t ebx_10 = eax_3 + var_88
        int32_t ebx_18
        
        if (eax_3 + var_88 s< 0)
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
        
        int32_t eax_6
        eax_6.b = edi[2]
        edi[2] = eax_6.b + (*(((ebx_18 - eax_6) << 2) + edx_2)).b
        int32_t ebx_27
        ebx_27.b = var_18[1]
        int32_t var_f4
        int32_t var_e8
        int32_t eax_9 = var_f4 + *(((ebx_27 - var_f4) << 2) + var_e8)
        int32_t var_84
        int32_t ebx_32 = eax_9 + var_84
        int32_t ebx_40
        
        if (eax_9 + var_84 s< 0)
            if (ebx_32 s< 0xffffff01)
                ebx_32 = 0xffffff01
            
            int32_t ebx_43
            ebx_43.b = edi[1]
            ebx_40 = *((ebx_43 << 2) + *((ebx_32 << 2) + data_4ced578))
        else
            if (ebx_32 s> 0xff)
                ebx_32 = 0xff
            
            int32_t ebx_35
            ebx_35.b = edi[1]
            ebx_40 = *(((ebx_35 - 0xff) << 2) + *((ebx_32 << 2) + data_4ced578)) + 0xff
        
        int32_t eax_12
        eax_12.b = edi[1]
        edi[1] = eax_12.b + (*(((ebx_40 - eax_12) << 2) + edx_2)).b
        int32_t ebx_49
        ebx_49.b = *var_18
        int32_t var_f0
        int32_t var_e4
        int32_t eax_15 = var_f0 + *(((ebx_49 - var_f0) << 2) + var_e4)
        int32_t var_80
        int32_t ebx_54 = eax_15 + var_80
        int32_t ebx_62
        
        if (eax_15 + var_80 s< 0)
            if (ebx_54 s< 0xffffff01)
                ebx_54 = 0xffffff01
            
            int32_t ebx_65
            ebx_65.b = *edi
            ebx_62 = *((ebx_65 << 2) + *((ebx_54 << 2) + data_4ced578))
        else
            if (ebx_54 s> 0xff)
                ebx_54 = 0xff
            
            int32_t ebx_57
            ebx_57.b = *edi
            ebx_62 = *(((ebx_57 - 0xff) << 2) + *((ebx_54 << 2) + data_4ced578)) + 0xff
        
        int32_t eax_18
        eax_18.b = *edi
        result = eax_18 + *(((ebx_62 - eax_18) << 2) + edx_2)
        *edi = result.b
    
    esi_4 = esi_1 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
