// 函数: sub_78f430
// 地址: 0x78f430
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
char* var_134
char* edi = var_134
char* var_124
char* esi_1 = var_124
int32_t i_2
int32_t i_1 = i_2
int32_t i

do
    int32_t j_2
    int32_t j_1 = j_2
    int32_t j
    
    do
        int32_t ebx_1
        ebx_1.b = esi_1[3]
        
        if (ebx_1 != 0)
            int32_t var_11c
            int32_t ebx_7 = *(*((ebx_1 << 2) + &data_4e3da80) + var_11c)
            
            if (ebx_7 != 0)
                int32_t edx_1 = *((ebx_7 << 2) + &data_4e3da80)
                int32_t ebx_11
                ebx_11.b = esi_1[2]
                int32_t eax_1
                eax_1.b = not.b(ebx_11.b)
                int32_t var_f8
                int32_t var_ec
                int32_t var_e0
                int32_t var_d4
                int32_t var_d0
                int32_t ebx_26 = *(((var_f8 + *(((var_e0
                    + *(((eax_1 + *(((ebx_11 - eax_1) << 2) + var_d0) - var_e0) << 2) + var_d4)
                    - var_f8) << 2) + var_ec)) << 2) + edx_1)
                int32_t eax_7
                eax_7.b = edi[2]
                int32_t eax_8 = eax_7 + ebx_26
                
                if (eax_8 s> 0xff)
                    eax_8 = 0xff
                
                edi[2] = eax_8.b
                int32_t ebx_27
                ebx_27.b = esi_1[1]
                int32_t eax_9
                eax_9.b = not.b(ebx_27.b)
                int32_t var_f4
                int32_t var_e8
                int32_t var_dc
                int32_t ebx_42 = *(((var_f4 + *(((var_dc
                    + *(((eax_9 + *(((ebx_27 - eax_9) << 2) + var_d0) - var_dc) << 2) + var_d4)
                    - var_f4) << 2) + var_e8)) << 2) + edx_1)
                int32_t eax_15
                eax_15.b = edi[1]
                int32_t eax_16 = eax_15 + ebx_42
                
                if (eax_16 s> 0xff)
                    eax_16 = 0xff
                
                edi[1] = eax_16.b
                int32_t ebx_43
                ebx_43.b = *esi_1
                int32_t eax_17
                eax_17.b = not.b(ebx_43.b)
                int32_t var_f0
                int32_t var_e4
                int32_t var_d8
                int32_t ebx_58 = *(((var_f0 + *(((var_d8
                    + *(((eax_17 + *(((ebx_43 - eax_17) << 2) + var_d0) - var_d8) << 2) + var_d4)
                    - var_f0) << 2) + var_e4)) << 2) + edx_1)
                int32_t eax_23
                eax_23.b = *edi
                int32_t eax = eax_23 + ebx_58
                
                if (eax s> 0xff)
                    eax = 0xff
                
                *edi = eax.b
        
        esi_1 = &esi_1[4]
        edi = &edi[4]
        j = j_1
        j_1 -= 1
    while (j != 1)
    int32_t var_120
    esi_1 = &esi_1[var_120]
    int32_t var_130
    edi = &edi[var_130]
    i = i_1
    i_1 -= 1
while (i != 1)
