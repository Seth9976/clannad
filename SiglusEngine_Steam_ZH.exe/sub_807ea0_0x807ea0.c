// 函数: sub_807ea0
// 地址: 0x807ea0
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
            int32_t var_11c
            int32_t ebx_7 = *(*((ebx_1 << 2) + &data_4e3da80) + var_11c)
            
            if (ebx_7 != 0)
                int32_t edx_1 = *((ebx_7 << 2) + &data_4e3da80)
                int32_t eax_1
                eax_1.b = var_124[2]
                int32_t eax_3
                eax_3.b = var_124[1]
                int32_t eax_5
                eax_5.b = *var_124
                uint32_t edx_5 = (*(&data_4e3d680 + (eax_1 << 2)) + *(&data_4e3e280 + (eax_3 << 2))
                    + *(&data_4e3de80 + (eax_5 << 2))) u>> 8
                int32_t var_cc
                int32_t eax_7 = *(&data_4e3da80 + var_cc)
                int32_t ebx_15
                ebx_15.b = var_124[2]
                int32_t eax_12
                eax_12.b = edi[2]
                int32_t var_f8
                int32_t var_ec
                int32_t eax_13 = eax_12 - *((neg.d(var_f8
                    + *(((edx_5 + *(((ebx_15 - edx_5) << 2) + eax_7) - var_f8) << 2) + var_ec)
                    - 0xff) << 2) + edx_1)
                
                if (eax_13 s< 0)
                    eax_13 = 0
                
                edi[2] = eax_13.b
                int32_t ebx_29
                ebx_29.b = var_124[1]
                int32_t eax_18
                eax_18.b = edi[1]
                int32_t var_f4
                int32_t var_e8
                int32_t eax_19 = eax_18 - *((neg.d(var_f4
                    + *(((edx_5 + *(((ebx_29 - edx_5) << 2) + eax_7) - var_f4) << 2) + var_e8)
                    - 0xff) << 2) + edx_1)
                
                if (eax_19 s< 0)
                    eax_19 = 0
                
                edi[1] = eax_19.b
                int32_t ebx_43
                ebx_43.b = *var_124
                int32_t eax_24
                eax_24.b = *edi
                int32_t var_f0
                int32_t var_e4
                int32_t eax = eax_24 - *((neg.d(var_f0
                    + *(((edx_5 + *(((ebx_43 - edx_5) << 2) + eax_7) - var_f0) << 2) + var_e4)
                    - 0xff) << 2) + edx_1)
                
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
