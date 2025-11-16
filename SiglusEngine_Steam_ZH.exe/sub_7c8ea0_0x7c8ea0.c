// 函数: sub_7c8ea0
// 地址: 0x7c8ea0
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
                int32_t eax_7
                eax_7.b = *(edi + 2)
                int32_t var_f8
                int32_t var_ec
                int32_t var_e0
                int32_t var_d4
                int32_t var_d0
                int32_t* ebx_25 = ((var_f8 + *(((var_e0
                    + *(((eax_1 + *(((ebx_11 - eax_1) << 2) + var_d0) - var_e0) << 2) + var_d4)
                    - var_f8) << 2) + var_ec)) << 2) + *((eax_7 << 2) + &data_4e3da80)
                int32_t eax_11
                eax_11.b = *(edi + 2)
                *(edi + 2) = eax_11.b + (*(((*ebx_25 - eax_11) << 2) + edx_1)).b
                int32_t ebx_30
                ebx_30.b = *(esi_1 + 1)
                int32_t eax_13
                eax_13.b = not.b(ebx_30.b)
                int32_t eax_19
                eax_19.b = *(edi + 1)
                int32_t var_f4
                int32_t var_e8
                int32_t var_dc
                int32_t* ebx_44 = ((var_f4 + *(((var_dc
                    + *(((eax_13 + *(((ebx_30 - eax_13) << 2) + var_d0) - var_dc) << 2) + var_d4)
                    - var_f4) << 2) + var_e8)) << 2) + *((eax_19 << 2) + &data_4e3da80)
                int32_t eax_23
                eax_23.b = *(edi + 1)
                *(edi + 1) = eax_23.b + (*(((*ebx_44 - eax_23) << 2) + edx_1)).b
                int32_t ebx_49
                ebx_49.b = *esi_1
                int32_t eax_25
                eax_25.b = not.b(ebx_49.b)
                int32_t eax_31
                eax_31.b = *edi
                int32_t var_f0
                int32_t var_e4
                int32_t var_d8
                int32_t* ebx_63 = ((var_f0 + *(((var_d8
                    + *(((eax_25 + *(((ebx_49 - eax_25) << 2) + var_d0) - var_d8) << 2) + var_d4)
                    - var_f0) << 2) + var_e4)) << 2) + *((eax_31 << 2) + &data_4e3da80)
                int32_t eax_35
                eax_35.b = *edi
                *edi = eax_35.b + (*(((*ebx_63 - eax_35) << 2) + edx_1)).b
        
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
