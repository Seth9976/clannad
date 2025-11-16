// 函数: sub_93b850
// 地址: 0x93b850
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
        int32_t eax_4
        eax_4.b = edi[2]
        int32_t var_d0
        int32_t eax_5 =
            eax_4 - *((neg.d(eax_2 + *(((ebx_5 - eax_2) << 2) + var_d0) - 0xff) << 2) + edx_2)
        
        if (eax_5 s< 0)
            eax_5 = 0
        
        edi[2] = eax_5.b
        int32_t ebx_15
        ebx_15.b = var_18[1]
        int32_t eax_6
        eax_6.b = not.b(ebx_15.b)
        int32_t eax_8
        eax_8.b = edi[1]
        int32_t eax_9 =
            eax_8 - *((neg.d(eax_6 + *(((ebx_15 - eax_6) << 2) + var_d0) - 0xff) << 2) + edx_2)
        
        if (eax_9 s< 0)
            eax_9 = 0
        
        edi[1] = eax_9.b
        int32_t ebx_25
        ebx_25.b = *var_18
        int32_t eax_10
        eax_10.b = not.b(ebx_25.b)
        int32_t eax_12
        eax_12.b = *edi
        result =
            eax_12 - *((neg.d(eax_10 + *(((ebx_25 - eax_10) << 2) + var_d0) - 0xff) << 2) + edx_2)
        
        if (result s< 0)
            result = 0
        
        *edi = result.b
    
    esi_4 = esi_1 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
