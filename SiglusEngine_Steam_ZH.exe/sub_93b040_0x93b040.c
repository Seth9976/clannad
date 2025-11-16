// 函数: sub_93b040
// 地址: 0x93b040
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
            int32_t eax_2
            eax_2.b = not.b(ebx_11.b)
            int32_t var_f8
            int32_t var_ec
            int32_t var_e0
            int32_t var_d4
            int32_t var_d0
            int32_t ebx_26 = neg.d(var_f8 + *(((var_e0
                + *(((eax_2 + *(((ebx_11 - eax_2) << 2) + var_d0) - var_e0) << 2) + var_d4)
                - var_f8) << 2) + var_ec) - 0xff) << 2
            int32_t eax_8
            eax_8.b = edi[2]
            int32_t eax_9 = eax_8 - *(ebx_26 + edx_2)
            
            if (eax_9 s< 0)
                eax_9 = 0
            
            edi[2] = eax_9.b
            int32_t ebx_29
            ebx_29.b = var_18[1]
            int32_t eax_10
            eax_10.b = not.b(ebx_29.b)
            int32_t var_f4
            int32_t var_e8
            int32_t var_dc
            int32_t ebx_44 = neg.d(var_f4 + *(((var_dc
                + *(((eax_10 + *(((ebx_29 - eax_10) << 2) + var_d0) - var_dc) << 2) + var_d4)
                - var_f4) << 2) + var_e8) - 0xff) << 2
            int32_t eax_16
            eax_16.b = edi[1]
            int32_t eax_17 = eax_16 - *(ebx_44 + edx_2)
            
            if (eax_17 s< 0)
                eax_17 = 0
            
            edi[1] = eax_17.b
            int32_t ebx_47
            ebx_47.b = *var_18
            int32_t eax_18
            eax_18.b = not.b(ebx_47.b)
            int32_t var_f0
            int32_t var_e4
            int32_t var_d8
            int32_t ebx_62 = neg.d(var_f0 + *(((var_d8
                + *(((eax_18 + *(((ebx_47 - eax_18) << 2) + var_d0) - var_d8) << 2) + var_d4)
                - var_f0) << 2) + var_e4) - 0xff) << 2
            int32_t eax_24
            eax_24.b = *edi
            result = eax_24 - *(ebx_62 + edx_2)
            
            if (result s< 0)
                result = 0
            
            *edi = result.b
    
    esi_4 = esi_1 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
