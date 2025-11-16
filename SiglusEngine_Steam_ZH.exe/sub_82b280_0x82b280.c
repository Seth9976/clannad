// 函数: sub_82b280
// 地址: 0x82b280
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
void* var_134
void* edi = var_134
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
            int32_t eax_5
            eax_5.b = *(edi + 2)
            int32_t eax_9
            eax_9.b = *(edi + 2)
            int32_t var_f8
            int32_t var_ec
            int32_t var_d0
            int32_t ebx_18 = (*(((var_f8
                + *(((eax_1 + *(((ebx_5 - eax_1) << 2) + var_d0) - var_f8) << 2) + var_ec)) << 2)
                + *((eax_5 << 2) + &data_4e3da80)) - eax_9) << 2
            *(edi + 2) = eax_9.b + (*(ebx_18 + edx_1)).b
            int32_t ebx_20
            ebx_20.b = var_124[1]
            int32_t eax_11
            eax_11.b = not.b(ebx_20.b)
            int32_t eax_15
            eax_15.b = *(edi + 1)
            int32_t eax_19
            eax_19.b = *(edi + 1)
            int32_t var_f4
            int32_t var_e8
            int32_t ebx_33 = (*(((var_f4
                + *(((eax_11 + *(((ebx_20 - eax_11) << 2) + var_d0) - var_f4) << 2) + var_e8)) << 2)
                + *((eax_15 << 2) + &data_4e3da80)) - eax_19) << 2
            *(edi + 1) = eax_19.b + (*(ebx_33 + edx_1)).b
            int32_t ebx_35
            ebx_35.b = *var_124
            int32_t eax_21
            eax_21.b = not.b(ebx_35.b)
            int32_t eax_25
            eax_25.b = *edi
            int32_t eax_29
            eax_29.b = *edi
            int32_t var_f0
            int32_t var_e4
            int32_t ebx_48 = (*(((var_f0
                + *(((eax_21 + *(((ebx_35 - eax_21) << 2) + var_d0) - var_f0) << 2) + var_e4)) << 2)
                + *((eax_25 << 2) + &data_4e3da80)) - eax_29) << 2
            *edi = eax_29.b + (*(ebx_48 + edx_1)).b
        
        edi += 4
        j = j_1
        j_1 -= 1
    while (j != 1)
    int32_t var_130
    edi += var_130
    i = i_1
    i_1 -= 1
while (i != 1)
