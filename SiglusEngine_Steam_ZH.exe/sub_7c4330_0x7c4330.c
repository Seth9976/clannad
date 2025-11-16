// 函数: sub_7c4330
// 地址: 0x7c4330
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
void* var_134
void* edi = var_134
void* var_124
void* esi_1 = var_124
int32_t i_2
int32_t i_1 = i_2
int32_t i

do
    int32_t j_2
    int32_t j_1 = j_2
    int32_t j
    
    do
        int32_t ebx_1
        ebx_1.b = *(esi_1 + 3)
        
        if (ebx_1 != 0)
            int32_t edx_1 = *((ebx_1 << 2) + &data_4e3da80)
            int32_t ebx_5
            ebx_5.b = *(esi_1 + 2)
            int32_t eax_3
            eax_3.b = *(edi + 2)
            int32_t eax_7
            eax_7.b = *(edi + 2)
            int32_t var_e0
            int32_t var_d4
            *(edi + 2) = eax_7.b + (*(((*(((var_e0 + *(((ebx_5 - var_e0) << 2) + var_d4)) << 2)
                + *((eax_3 << 2) + &data_4e3da80)) - eax_7) << 2) + edx_1)).b
            int32_t ebx_16
            ebx_16.b = *(esi_1 + 1)
            int32_t eax_11
            eax_11.b = *(edi + 1)
            int32_t eax_15
            eax_15.b = *(edi + 1)
            int32_t var_dc
            *(edi + 1) = eax_15.b + (*(((*(((var_dc + *(((ebx_16 - var_dc) << 2) + var_d4)) << 2)
                + *((eax_11 << 2) + &data_4e3da80)) - eax_15) << 2) + edx_1)).b
            int32_t ebx_27
            ebx_27.b = *esi_1
            int32_t eax_19
            eax_19.b = *edi
            int32_t eax_23
            eax_23.b = *edi
            int32_t var_d8
            *edi = eax_23.b + (*(((*(((var_d8 + *(((ebx_27 - var_d8) << 2) + var_d4)) << 2)
                + *((eax_19 << 2) + &data_4e3da80)) - eax_23) << 2) + edx_1)).b
        
        esi_1 += 4
        edi += 4
        j = j_1
        j_1 -= 1
    while (j != 1)
    int32_t var_120
    esi_1 += var_120
    int32_t var_130
    edi += var_130
    i = i_1
    i_1 -= 1
while (i != 1)
