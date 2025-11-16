// 函数: sub_978c80
// 地址: 0x978c80
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
        int32_t ebx_1
        ebx_1.b = edi[3]
        
        if (ebx_1 != 0)
            int32_t var_11c
            int32_t ebx_7 = *(*((ebx_1 << 2) + &data_4e3da80) + var_11c)
            
            if (ebx_7 != 0)
                int32_t edx_1 = *((ebx_7 << 2) + &data_4e3da80)
                int32_t eax_1
                eax_1.b = edi[2]
                int32_t eax_3
                eax_3.b = edi[1]
                int32_t eax_5
                eax_5.b = *edi
                uint32_t edx_5 = (*(&data_4e3d680 + (eax_1 << 2)) + *(&data_4e3e280 + (eax_3 << 2))
                    + *(&data_4e3de80 + (eax_5 << 2))) u>> 8
                int32_t var_cc
                int32_t eax_7 = *(&data_4e3da80 + var_cc)
                int32_t ebx_15
                ebx_15.b = edi[2]
                int32_t eax_12
                eax_12.b = edi[2]
                int32_t var_f8
                int32_t var_ec
                edi[2] = eax_12.b + (*(((var_f8
                    + *(((edx_5 + *(((ebx_15 - edx_5) << 2) + eax_7) - var_f8) << 2) + var_ec)
                    - eax_12) << 2) + edx_1)).b
                int32_t ebx_27
                ebx_27.b = edi[1]
                int32_t eax_18
                eax_18.b = edi[1]
                int32_t var_f4
                int32_t var_e8
                edi[1] = eax_18.b + (*(((var_f4
                    + *(((edx_5 + *(((ebx_27 - edx_5) << 2) + eax_7) - var_f4) << 2) + var_e8)
                    - eax_18) << 2) + edx_1)).b
                int32_t ebx_39
                ebx_39.b = *edi
                int32_t eax_24
                eax_24.b = *edi
                int32_t var_f0
                int32_t var_e4
                *edi = eax_24.b + (*(((var_f0
                    + *(((edx_5 + *(((ebx_39 - edx_5) << 2) + eax_7) - var_f0) << 2) + var_e4)
                    - eax_24) << 2) + edx_1)).b
        
        edi = &edi[4]
        j = j_1
        j_1 -= 1
    while (j != 1)
    int32_t var_130
    edi = &edi[var_130]
    i = i_1
    i_1 -= 1
while (i != 1)
