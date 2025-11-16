// 函数: sub_94cc10
// 地址: 0x94cc10
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
        int32_t var_88
        int32_t ebx_6 = ebx_5 + var_88
        int32_t ebx_14
        
        if (ebx_5 + var_88 s< 0)
            if (ebx_6 s< 0xffffff01)
                ebx_6 = 0xffffff01
            
            int32_t ebx_17
            ebx_17.b = edi[2]
            ebx_14 = *((ebx_17 << 2) + *((ebx_6 << 2) + data_4ced578))
        else
            if (ebx_6 s> 0xff)
                ebx_6 = 0xff
            
            int32_t ebx_9
            ebx_9.b = edi[2]
            ebx_14 = *(((ebx_9 - 0xff) << 2) + *((ebx_6 << 2) + data_4ced578)) + 0xff
        
        int32_t eax_4
        eax_4.b = edi[2]
        edi[2] = eax_4.b + (*(((ebx_14 - eax_4) << 2) + edx_2)).b
        int32_t ebx_23
        ebx_23.b = var_18[1]
        int32_t var_84
        int32_t ebx_24 = ebx_23 + var_84
        int32_t ebx_32
        
        if (ebx_23 + var_84 s< 0)
            if (ebx_24 s< 0xffffff01)
                ebx_24 = 0xffffff01
            
            int32_t ebx_35
            ebx_35.b = edi[1]
            ebx_32 = *((ebx_35 << 2) + *((ebx_24 << 2) + data_4ced578))
        else
            if (ebx_24 s> 0xff)
                ebx_24 = 0xff
            
            int32_t ebx_27
            ebx_27.b = edi[1]
            ebx_32 = *(((ebx_27 - 0xff) << 2) + *((ebx_24 << 2) + data_4ced578)) + 0xff
        
        int32_t eax_8
        eax_8.b = edi[1]
        edi[1] = eax_8.b + (*(((ebx_32 - eax_8) << 2) + edx_2)).b
        int32_t ebx_41
        ebx_41.b = *var_18
        int32_t var_80
        int32_t ebx_42 = ebx_41 + var_80
        int32_t ebx_50
        
        if (ebx_41 + var_80 s< 0)
            if (ebx_42 s< 0xffffff01)
                ebx_42 = 0xffffff01
            
            int32_t ebx_53
            ebx_53.b = *edi
            ebx_50 = *((ebx_53 << 2) + *((ebx_42 << 2) + data_4ced578))
        else
            if (ebx_42 s> 0xff)
                ebx_42 = 0xff
            
            int32_t ebx_45
            ebx_45.b = *edi
            ebx_50 = *(((ebx_45 - 0xff) << 2) + *((ebx_42 << 2) + data_4ced578)) + 0xff
        
        int32_t eax_12
        eax_12.b = *edi
        result = eax_12 + *(((ebx_50 - eax_12) << 2) + edx_2)
        *edi = result.b
    
    esi_4 = esi_1 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
