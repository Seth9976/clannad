// 函数: sub_944720
// 地址: 0x944720
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
        int32_t var_11c
        int32_t ebx_7 = *(*((ebx_1 << 2) + &data_4e3da80) + var_11c)
        
        if (ebx_7 != 0)
            int32_t edx_2 = *((ebx_7 << 2) + &data_4e3da80)
            int32_t ebx_11
            ebx_11.b = var_18[2]
            int32_t var_f8
            int32_t var_ec
            int32_t var_e0
            int32_t var_d4
            int32_t eax_5 =
                var_f8 + *(((var_e0 + *(((ebx_11 - var_e0) << 2) + var_d4) - var_f8) << 2) + var_ec)
            int32_t var_88
            int32_t ebx_20 = eax_5 + var_88
            int32_t ebx_28
            
            if (eax_5 + var_88 s< 0)
                if (ebx_20 s< 0xffffff01)
                    ebx_20 = 0xffffff01
                
                int32_t ebx_31
                ebx_31.b = edi[2]
                ebx_28 = *((ebx_31 << 2) + *((ebx_20 << 2) + data_4ced578))
            else
                if (ebx_20 s> 0xff)
                    ebx_20 = 0xff
                
                int32_t ebx_23
                ebx_23.b = edi[2]
                ebx_28 = *(((ebx_23 - 0xff) << 2) + *((ebx_20 << 2) + data_4ced578)) + 0xff
            
            int32_t eax_8
            eax_8.b = edi[2]
            edi[2] = eax_8.b + (*(((ebx_28 - eax_8) << 2) + edx_2)).b
            int32_t ebx_37
            ebx_37.b = var_18[1]
            int32_t var_f4
            int32_t var_e8
            int32_t var_dc
            int32_t eax_13 =
                var_f4 + *(((var_dc + *(((ebx_37 - var_dc) << 2) + var_d4) - var_f4) << 2) + var_e8)
            int32_t var_84
            int32_t ebx_46 = eax_13 + var_84
            int32_t ebx_54
            
            if (eax_13 + var_84 s< 0)
                if (ebx_46 s< 0xffffff01)
                    ebx_46 = 0xffffff01
                
                int32_t ebx_57
                ebx_57.b = edi[1]
                ebx_54 = *((ebx_57 << 2) + *((ebx_46 << 2) + data_4ced578))
            else
                if (ebx_46 s> 0xff)
                    ebx_46 = 0xff
                
                int32_t ebx_49
                ebx_49.b = edi[1]
                ebx_54 = *(((ebx_49 - 0xff) << 2) + *((ebx_46 << 2) + data_4ced578)) + 0xff
            
            int32_t eax_16
            eax_16.b = edi[1]
            edi[1] = eax_16.b + (*(((ebx_54 - eax_16) << 2) + edx_2)).b
            int32_t ebx_63
            ebx_63.b = *var_18
            int32_t var_f0
            int32_t var_e4
            int32_t var_d8
            int32_t eax_21 =
                var_f0 + *(((var_d8 + *(((ebx_63 - var_d8) << 2) + var_d4) - var_f0) << 2) + var_e4)
            int32_t var_80
            int32_t ebx_72 = eax_21 + var_80
            int32_t ebx_80
            
            if (eax_21 + var_80 s< 0)
                if (ebx_72 s< 0xffffff01)
                    ebx_72 = 0xffffff01
                
                int32_t ebx_83
                ebx_83.b = *edi
                ebx_80 = *((ebx_83 << 2) + *((ebx_72 << 2) + data_4ced578))
            else
                if (ebx_72 s> 0xff)
                    ebx_72 = 0xff
                
                int32_t ebx_75
                ebx_75.b = *edi
                ebx_80 = *(((ebx_75 - 0xff) << 2) + *((ebx_72 << 2) + data_4ced578)) + 0xff
            
            int32_t eax_24
            eax_24.b = *edi
            result = eax_24 + *(((ebx_80 - eax_24) << 2) + edx_2)
            *edi = result.b
    
    esi_4 = esi_1 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
