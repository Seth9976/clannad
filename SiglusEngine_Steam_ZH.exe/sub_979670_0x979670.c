// 函数: sub_979670
// 地址: 0x979670
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
            int32_t edx_1 = *((ebx_1 << 2) + &data_4e3da80)
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
            int32_t ebx_9
            ebx_9.b = edi[2]
            int32_t eax_12
            eax_12.b = edi[2]
            int32_t var_e0
            int32_t var_d4
            edi[2] = eax_12.b + (*(((var_e0
                + *(((edx_5 + *(((ebx_9 - edx_5) << 2) + eax_7) - var_e0) << 2) + var_d4) - eax_12)
                << 2) + edx_1)).b
            int32_t ebx_21
            ebx_21.b = edi[1]
            int32_t eax_18
            eax_18.b = edi[1]
            int32_t var_dc
            edi[1] = eax_18.b + (*(((var_dc
                + *(((edx_5 + *(((ebx_21 - edx_5) << 2) + eax_7) - var_dc) << 2) + var_d4)
                - eax_18) << 2) + edx_1)).b
            int32_t ebx_33
            ebx_33.b = *edi
            int32_t eax_24
            eax_24.b = *edi
            int32_t var_d8
            *edi = eax_24.b + (*(((var_d8
                + *(((edx_5 + *(((ebx_33 - edx_5) << 2) + eax_7) - var_d8) << 2) + var_d4)
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
