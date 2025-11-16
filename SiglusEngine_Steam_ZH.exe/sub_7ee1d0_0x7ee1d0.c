// 函数: sub_7ee1d0
// 地址: 0x7ee1d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
char* var_134
char* edi = var_134
int32_t i_2
int32_t i_1 = i_2
int32_t i

do
    int32_t j_2
    int32_t j_1 = j_2
    int32_t j
    
    do
        char* var_124
        int32_t ebx_1
        ebx_1.b = var_124[3]
        
        if (ebx_1 != 0)
            int32_t edx_1 = *((ebx_1 << 2) + &data_4e3da80)
            int32_t ebx_5
            ebx_5.b = var_124[2]
            int32_t eax_3
            eax_3.b = edi[2]
            int32_t var_f8
            int32_t var_ec
            int32_t eax_4 = eax_3 + *(((var_f8 + *(((ebx_5 - var_f8) << 2) + var_ec)) << 2) + edx_1)
            
            if (eax_4 s> 0xff)
                eax_4 = 0xff
            
            edi[2] = eax_4.b
            int32_t ebx_13
            ebx_13.b = var_124[1]
            int32_t eax_7
            eax_7.b = edi[1]
            int32_t var_f4
            int32_t var_e8
            int32_t eax_8 =
                eax_7 + *(((var_f4 + *(((ebx_13 - var_f4) << 2) + var_e8)) << 2) + edx_1)
            
            if (eax_8 s> 0xff)
                eax_8 = 0xff
            
            edi[1] = eax_8.b
            int32_t ebx_21
            ebx_21.b = *var_124
            int32_t eax_11
            eax_11.b = *edi
            int32_t var_f0
            int32_t var_e4
            int32_t eax = eax_11 + *(((var_f0 + *(((ebx_21 - var_f0) << 2) + var_e4)) << 2) + edx_1)
            
            if (eax s> 0xff)
                eax = 0xff
            
            *edi = eax.b
        
        edi = &edi[4]
        j = j_1
        j_1 -= 1
    while (j != 1)
    int32_t var_130
    edi = &edi[var_130]
    i = i_1
    i_1 -= 1
while (i != 1)
