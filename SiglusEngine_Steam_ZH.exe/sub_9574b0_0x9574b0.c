// 函数: sub_9574b0
// 地址: 0x9574b0
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
            int32_t var_88
            int32_t ebx_12 = ebx_11 + var_88
            int32_t ebx_20
            
            if (ebx_11 + var_88 s< 0)
                if (ebx_12 s< 0xffffff01)
                    ebx_12 = 0xffffff01
                
                int32_t ebx_23
                ebx_23.b = edi[2]
                ebx_20 = *((ebx_23 << 2) + *((ebx_12 << 2) + data_4ced578))
            else
                if (ebx_12 s> 0xff)
                    ebx_12 = 0xff
                
                int32_t ebx_15
                ebx_15.b = edi[2]
                ebx_20 = *(((ebx_15 - 0xff) << 2) + *((ebx_12 << 2) + data_4ced578)) + 0xff
            
            int32_t eax_4
            eax_4.b = edi[2]
            edi[2] = eax_4.b + (*(((ebx_20 - eax_4) << 2) + edx_2)).b
            int32_t ebx_29
            ebx_29.b = var_18[1]
            int32_t var_84
            int32_t ebx_30 = ebx_29 + var_84
            int32_t ebx_38
            
            if (ebx_29 + var_84 s< 0)
                if (ebx_30 s< 0xffffff01)
                    ebx_30 = 0xffffff01
                
                int32_t ebx_41
                ebx_41.b = edi[1]
                ebx_38 = *((ebx_41 << 2) + *((ebx_30 << 2) + data_4ced578))
            else
                if (ebx_30 s> 0xff)
                    ebx_30 = 0xff
                
                int32_t ebx_33
                ebx_33.b = edi[1]
                ebx_38 = *(((ebx_33 - 0xff) << 2) + *((ebx_30 << 2) + data_4ced578)) + 0xff
            
            int32_t eax_8
            eax_8.b = edi[1]
            edi[1] = eax_8.b + (*(((ebx_38 - eax_8) << 2) + edx_2)).b
            int32_t ebx_47
            ebx_47.b = *var_18
            int32_t var_80
            int32_t ebx_48 = ebx_47 + var_80
            int32_t ebx_56
            
            if (ebx_47 + var_80 s< 0)
                if (ebx_48 s< 0xffffff01)
                    ebx_48 = 0xffffff01
                
                int32_t ebx_59
                ebx_59.b = *edi
                ebx_56 = *((ebx_59 << 2) + *((ebx_48 << 2) + data_4ced578))
            else
                if (ebx_48 s> 0xff)
                    ebx_48 = 0xff
                
                int32_t ebx_51
                ebx_51.b = *edi
                ebx_56 = *(((ebx_51 - 0xff) << 2) + *((ebx_48 << 2) + data_4ced578)) + 0xff
            
            int32_t eax_12
            eax_12.b = *edi
            result = eax_12 + *(((ebx_56 - eax_12) << 2) + edx_2)
            *edi = result.b
    
    esi_4 = esi_1 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
