// 函数: sub_7a3c90
// 地址: 0x7a3c90
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
                int32_t eax_5
                eax_5.b = edi[2]
                int32_t var_f8
                int32_t var_ec
                int32_t var_e0
                int32_t var_d4
                int32_t eax_6 = eax_5 - *((neg.d(var_f8
                    + *(((var_e0 + *(((ebx_11 - var_e0) << 2) + var_d4) - var_f8) << 2) + var_ec)
                    - 0xff) << 2) + edx_1)
                
                if (eax_6 s< 0)
                    eax_6 = 0
                
                edi[2] = eax_6.b
                int32_t ebx_25
                ebx_25.b = esi_1[1]
                int32_t eax_11
                eax_11.b = edi[1]
                int32_t var_f4
                int32_t var_e8
                int32_t var_dc
                int32_t eax_12 = eax_11 - *((neg.d(var_f4
                    + *(((var_dc + *(((ebx_25 - var_dc) << 2) + var_d4) - var_f4) << 2) + var_e8)
                    - 0xff) << 2) + edx_1)
                
                if (eax_12 s< 0)
                    eax_12 = 0
                
                edi[1] = eax_12.b
                int32_t ebx_39
                ebx_39.b = *esi_1
                int32_t eax_17
                eax_17.b = *edi
                int32_t var_f0
                int32_t var_e4
                int32_t var_d8
                int32_t eax = eax_17 - *((neg.d(var_f0
                    + *(((var_d8 + *(((ebx_39 - var_d8) << 2) + var_d4) - var_f0) << 2) + var_e4)
                    - 0xff) << 2) + edx_1)
                
                if (eax s< 0)
                    eax = 0
                
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
