// 函数: sub_944f60
// 地址: 0x944f60
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
            int32_t var_e0
            int32_t var_d4
            int32_t eax_3 = var_e0 + *(((ebx_11 - var_e0) << 2) + var_d4)
            int32_t var_88
            int32_t ebx_16 = eax_3 + var_88
            int32_t ebx_24
            
            if (eax_3 + var_88 s< 0)
                if (ebx_16 s< 0xffffff01)
                    ebx_16 = 0xffffff01
                
                int32_t ebx_27
                ebx_27.b = edi[2]
                ebx_24 = *((ebx_27 << 2) + *((ebx_16 << 2) + data_4ced578))
            else
                if (ebx_16 s> 0xff)
                    ebx_16 = 0xff
                
                int32_t ebx_19
                ebx_19.b = edi[2]
                ebx_24 = *(((ebx_19 - 0xff) << 2) + *((ebx_16 << 2) + data_4ced578)) + 0xff
            
            int32_t eax_6
            eax_6.b = edi[2]
            edi[2] = eax_6.b + (*(((ebx_24 - eax_6) << 2) + edx_2)).b
            int32_t ebx_33
            ebx_33.b = var_18[1]
            int32_t var_dc
            int32_t eax_9 = var_dc + *(((ebx_33 - var_dc) << 2) + var_d4)
            int32_t var_84
            int32_t ebx_38 = eax_9 + var_84
            int32_t ebx_46
            
            if (eax_9 + var_84 s< 0)
                if (ebx_38 s< 0xffffff01)
                    ebx_38 = 0xffffff01
                
                int32_t ebx_49
                ebx_49.b = edi[1]
                ebx_46 = *((ebx_49 << 2) + *((ebx_38 << 2) + data_4ced578))
            else
                if (ebx_38 s> 0xff)
                    ebx_38 = 0xff
                
                int32_t ebx_41
                ebx_41.b = edi[1]
                ebx_46 = *(((ebx_41 - 0xff) << 2) + *((ebx_38 << 2) + data_4ced578)) + 0xff
            
            int32_t eax_12
            eax_12.b = edi[1]
            edi[1] = eax_12.b + (*(((ebx_46 - eax_12) << 2) + edx_2)).b
            int32_t ebx_55
            ebx_55.b = *var_18
            int32_t var_d8
            int32_t eax_15 = var_d8 + *(((ebx_55 - var_d8) << 2) + var_d4)
            int32_t var_80
            int32_t ebx_60 = eax_15 + var_80
            int32_t ebx_68
            
            if (eax_15 + var_80 s< 0)
                if (ebx_60 s< 0xffffff01)
                    ebx_60 = 0xffffff01
                
                int32_t ebx_71
                ebx_71.b = *edi
                ebx_68 = *((ebx_71 << 2) + *((ebx_60 << 2) + data_4ced578))
            else
                if (ebx_60 s> 0xff)
                    ebx_60 = 0xff
                
                int32_t ebx_63
                ebx_63.b = *edi
                ebx_68 = *(((ebx_63 - 0xff) << 2) + *((ebx_60 << 2) + data_4ced578)) + 0xff
            
            int32_t eax_18
            eax_18.b = *edi
            result = eax_18 + *(((ebx_68 - eax_18) << 2) + edx_2)
            *edi = result.b
    
    esi_4 = esi_1 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
