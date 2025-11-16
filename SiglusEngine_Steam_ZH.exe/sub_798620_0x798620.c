// 函数: sub_798620
// 地址: 0x798620
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
void* var_134
void* edi = var_134
void* var_124
void* esi_1 = var_124
int32_t i_2
int32_t i_1 = i_2
int32_t result
int32_t i

do
    int32_t j_2
    int32_t j_1 = j_2
    int32_t j
    
    do
        int32_t eax_1
        eax_1.b = *(esi_1 + 2)
        int32_t eax_3
        eax_3.b = *(esi_1 + 1)
        int32_t eax_5
        eax_5.b = *esi_1
        uint32_t edx_4 = (*(&data_4e3d680 + (eax_1 << 2)) + *(&data_4e3e280 + (eax_3 << 2))
            + *(&data_4e3de80 + (eax_5 << 2))) u>> 8
        int32_t var_cc
        int32_t eax_7 = *(&data_4e3da80 + var_cc)
        int32_t ebx_5
        ebx_5.b = *(esi_1 + 2)
        int32_t var_118
        int32_t var_f8
        int32_t var_ec
        int32_t var_e0
        int32_t var_d4
        int32_t ebx_20 = *(((var_f8 + *(((var_e0
            + *(((edx_4 + *(((ebx_5 - edx_4) << 2) + eax_7) - var_e0) << 2) + var_d4) - var_f8) << 2)
            + var_ec)) << 2) + var_118)
        int32_t eax_14
        eax_14.b = *(edi + 2)
        int32_t eax_15 = eax_14 - ebx_20
        
        if (eax_15 s< 0)
            eax_15 = 0
        
        *(edi + 2) = eax_15.b
        int32_t ebx_21
        ebx_21.b = *(esi_1 + 1)
        int32_t var_f4
        int32_t var_e8
        int32_t var_dc
        int32_t ebx_36 = *(((var_f4 + *(((var_dc
            + *(((edx_4 + *(((ebx_21 - edx_4) << 2) + eax_7) - var_dc) << 2) + var_d4) - var_f4) << 2)
            + var_e8)) << 2) + var_118)
        int32_t eax_22
        eax_22.b = *(edi + 1)
        int32_t eax_23 = eax_22 - ebx_36
        
        if (eax_23 s< 0)
            eax_23 = 0
        
        *(edi + 1) = eax_23.b
        int32_t ebx_37
        ebx_37.b = *esi_1
        int32_t var_f0
        int32_t var_e4
        int32_t var_d8
        int32_t ebx_52 = *(((var_f0 + *(((var_d8
            + *(((edx_4 + *(((ebx_37 - edx_4) << 2) + eax_7) - var_d8) << 2) + var_d4) - var_f0) << 2)
            + var_e4)) << 2) + var_118)
        int32_t eax_30
        eax_30.b = *edi
        result = eax_30 - ebx_52
        
        if (result s< 0)
            result = 0
        
        *edi = result.b
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
return result
