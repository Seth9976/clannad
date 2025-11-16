// 函数: sub_7ff3d0
// 地址: 0x7ff3d0
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
            int32_t eax_1
            eax_1.b = not.b(ebx_5.b)
            int32_t var_f8
            int32_t var_ec
            int32_t var_e0
            int32_t var_d4
            int32_t var_d0
            int32_t ebx_20 = *(((var_f8 + *(((var_e0
                + *(((eax_1 + *(((ebx_5 - eax_1) << 2) + var_d0) - var_e0) << 2) + var_d4)
                - var_f8) << 2) + var_ec)) << 2) + edx_1)
            int32_t eax_7
            eax_7.b = edi[2]
            int32_t eax_8 = eax_7 - ebx_20
            
            if (eax_8 s< 0)
                eax_8 = 0
            
            edi[2] = eax_8.b
            int32_t ebx_21
            ebx_21.b = var_124[1]
            int32_t eax_9
            eax_9.b = not.b(ebx_21.b)
            int32_t var_f4
            int32_t var_e8
            int32_t var_dc
            int32_t ebx_36 = *(((var_f4 + *(((var_dc
                + *(((eax_9 + *(((ebx_21 - eax_9) << 2) + var_d0) - var_dc) << 2) + var_d4)
                - var_f4) << 2) + var_e8)) << 2) + edx_1)
            int32_t eax_15
            eax_15.b = edi[1]
            int32_t eax_16 = eax_15 - ebx_36
            
            if (eax_16 s< 0)
                eax_16 = 0
            
            edi[1] = eax_16.b
            int32_t ebx_37
            ebx_37.b = *var_124
            int32_t eax_17
            eax_17.b = not.b(ebx_37.b)
            int32_t var_f0
            int32_t var_e4
            int32_t var_d8
            int32_t ebx_52 = *(((var_f0 + *(((var_d8
                + *(((eax_17 + *(((ebx_37 - eax_17) << 2) + var_d0) - var_d8) << 2) + var_d4)
                - var_f0) << 2) + var_e4)) << 2) + edx_1)
            int32_t eax_23
            eax_23.b = *edi
            int32_t eax = eax_23 - ebx_52
            
            if (eax s< 0)
                eax = 0
            
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
