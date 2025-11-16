// 函数: sub_7c94a0
// 地址: 0x7c94a0
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
            int32_t var_11c
            int32_t ebx_7 = *(*((ebx_1 << 2) + &data_4e3da80) + var_11c)
            
            if (ebx_7 != 0)
                int32_t edx_1 = *((ebx_7 << 2) + &data_4e3da80)
                int32_t ebx_11
                ebx_11.b = *(esi_1 + 2)
                int32_t eax_1
                eax_1.b = not.b(ebx_11.b)
                int32_t eax_5
                eax_5.b = *(edi + 2)
                int32_t eax_9
                eax_9.b = *(edi + 2)
                int32_t var_e0
                int32_t var_d4
                int32_t var_d0
                int32_t ebx_24 = (*(((var_e0
                    + *(((eax_1 + *(((ebx_11 - eax_1) << 2) + var_d0) - var_e0) << 2) + var_d4)) << 2)
                    + *((eax_5 << 2) + &data_4e3da80)) - eax_9) << 2
                *(edi + 2) = eax_9.b + (*(ebx_24 + edx_1)).b
                int32_t ebx_26
                ebx_26.b = *(esi_1 + 1)
                int32_t eax_11
                eax_11.b = not.b(ebx_26.b)
                int32_t eax_15
                eax_15.b = *(edi + 1)
                int32_t eax_19
                eax_19.b = *(edi + 1)
                int32_t var_dc
                int32_t ebx_39 = (*(((var_dc
                    + *(((eax_11 + *(((ebx_26 - eax_11) << 2) + var_d0) - var_dc) << 2) + var_d4))
                    << 2) + *((eax_15 << 2) + &data_4e3da80)) - eax_19) << 2
                *(edi + 1) = eax_19.b + (*(ebx_39 + edx_1)).b
                int32_t ebx_41
                ebx_41.b = *esi_1
                int32_t eax_21
                eax_21.b = not.b(ebx_41.b)
                int32_t eax_25
                eax_25.b = *edi
                int32_t eax_29
                eax_29.b = *edi
                int32_t var_d8
                int32_t ebx_54 = (*(((var_d8
                    + *(((eax_21 + *(((ebx_41 - eax_21) << 2) + var_d0) - var_d8) << 2) + var_d4))
                    << 2) + *((eax_25 << 2) + &data_4e3da80)) - eax_29) << 2
                *edi = eax_29.b + (*(ebx_54 + edx_1)).b
        
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
