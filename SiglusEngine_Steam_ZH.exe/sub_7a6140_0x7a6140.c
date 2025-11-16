// 函数: sub_7a6140
// 地址: 0x7a6140
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
        int32_t eax_9 = edx_4 + *(((ebx_5 - edx_4) << 2) + eax_7)
        int32_t eax_10
        eax_10.b = not.b(eax_9.b)
        int32_t eax_16
        eax_16.b = *(edi + 2)
        int32_t var_f8
        int32_t var_ec
        int32_t var_e0
        int32_t var_d4
        int32_t var_d0
        int32_t eax_17 = eax_16 - neg.d(var_f8 + *(((var_e0
            + *(((eax_10 + *(((eax_9 - eax_10) << 2) + var_d0) - var_e0) << 2) + var_d4) - var_f8)
            << 2) + var_ec) - 0xff)
        
        if (eax_17 s< 0)
            eax_17 = 0
        
        *(edi + 2) = eax_17.b
        int32_t ebx_24
        ebx_24.b = *(esi_1 + 1)
        int32_t eax_19 = edx_4 + *(((ebx_24 - edx_4) << 2) + eax_7)
        int32_t eax_20
        eax_20.b = not.b(eax_19.b)
        int32_t eax_26
        eax_26.b = *(edi + 1)
        int32_t var_f4
        int32_t var_e8
        int32_t var_dc
        int32_t eax_27 = eax_26 - neg.d(var_f4 + *(((var_dc
            + *(((eax_20 + *(((eax_19 - eax_20) << 2) + var_d0) - var_dc) << 2) + var_d4) - var_f4)
            << 2) + var_e8) - 0xff)
        
        if (eax_27 s< 0)
            eax_27 = 0
        
        *(edi + 1) = eax_27.b
        int32_t ebx_43
        ebx_43.b = *esi_1
        int32_t eax_29 = edx_4 + *(((ebx_43 - edx_4) << 2) + eax_7)
        int32_t eax_30
        eax_30.b = not.b(eax_29.b)
        int32_t eax_36
        eax_36.b = *edi
        int32_t var_f0
        int32_t var_e4
        int32_t var_d8
        result = eax_36 - neg.d(var_f0 + *(((var_d8
            + *(((eax_30 + *(((eax_29 - eax_30) << 2) + var_d0) - var_d8) << 2) + var_d4) - var_f0)
            << 2) + var_e4) - 0xff)
        
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
