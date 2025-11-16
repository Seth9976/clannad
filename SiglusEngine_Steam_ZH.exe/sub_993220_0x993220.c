// 函数: sub_993220
// 地址: 0x993220
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
    
    int32_t ebx_1
    ebx_1.b = edi[3]
    
    if (ebx_1 != 0)
        int32_t var_11c
        int32_t ebx_7 = *(*((ebx_1 << 2) + &data_4e3da80) + var_11c)
        
        if (ebx_7 != 0)
            int32_t edx_2 = *((ebx_7 << 2) + &data_4e3da80)
            int32_t ebx_11
            ebx_11.b = edi[2]
            int32_t eax_2
            eax_2.b = not.b(ebx_11.b)
            int32_t eax_8
            eax_8.b = edi[2]
            int32_t var_f8
            int32_t var_ec
            int32_t var_e0
            int32_t var_d4
            int32_t var_d0
            int32_t ebx_26 = ((var_f8 + *(((var_e0
                + *(((eax_2 + *(((ebx_11 - eax_2) << 2) + var_d0) - var_e0) << 2) + var_d4)
                - var_f8) << 2) + var_ec) - eax_8) << 2) + edx_2
            edi[2] = eax_8.b + (*ebx_26).b
            int32_t ebx_27
            ebx_27.b = edi[1]
            int32_t eax_10
            eax_10.b = not.b(ebx_27.b)
            int32_t eax_16
            eax_16.b = edi[1]
            int32_t var_f4
            int32_t var_e8
            int32_t var_dc
            int32_t ebx_42 = ((var_f4 + *(((var_dc
                + *(((eax_10 + *(((ebx_27 - eax_10) << 2) + var_d0) - var_dc) << 2) + var_d4)
                - var_f4) << 2) + var_e8) - eax_16) << 2) + edx_2
            edi[1] = eax_16.b + (*ebx_42).b
            int32_t ebx_43
            ebx_43.b = *edi
            int32_t eax_18
            eax_18.b = not.b(ebx_43.b)
            int32_t eax_24
            eax_24.b = *edi
            int32_t var_f0
            int32_t var_e4
            int32_t var_d8
            int32_t ebx_58 = ((var_f0 + *(((var_d8
                + *(((eax_18 + *(((ebx_43 - eax_18) << 2) + var_d0) - var_d8) << 2) + var_d4)
                - var_f0) << 2) + var_e4) - eax_24) << 2) + edx_2
            result = eax_24 + *ebx_58
            *edi = result.b
    
    esi_4 = esi_1 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
