// 函数: sub_809020
// 地址: 0x809020
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
void* var_134
void* edi = var_134
int32_t i_2
int32_t i_1 = i_2
int32_t result
int32_t i

do
    int32_t j_2
    int32_t j_1 = j_2
    int32_t j
    
    do
        char* var_124
        int32_t eax_1
        eax_1.b = var_124[2]
        int32_t eax_3
        eax_3.b = var_124[1]
        int32_t eax_5
        eax_5.b = *var_124
        uint32_t edx_4 = (*(&data_4e3d680 + (eax_1 << 2)) + *(&data_4e3e280 + (eax_3 << 2))
            + *(&data_4e3de80 + (eax_5 << 2))) u>> 8
        int32_t var_cc
        int32_t eax_7 = *(&data_4e3da80 + var_cc)
        int32_t ebx_5
        ebx_5.b = var_124[2]
        int32_t eax_9 = edx_4 + *(((ebx_5 - edx_4) << 2) + eax_7)
        int32_t eax_10
        eax_10.b = not.b(eax_9.b)
        int32_t eax_14
        eax_14.b = *(edi + 2)
        int32_t var_f8
        int32_t var_ec
        int32_t var_d0
        int32_t eax_15 = eax_14 - neg.d(var_f8
            + *(((eax_10 + *(((eax_9 - eax_10) << 2) + var_d0) - var_f8) << 2) + var_ec) - 0xff)
        
        if (eax_15 s< 0)
            eax_15 = 0
        
        *(edi + 2) = eax_15.b
        int32_t ebx_20
        ebx_20.b = var_124[1]
        int32_t eax_17 = edx_4 + *(((ebx_20 - edx_4) << 2) + eax_7)
        int32_t eax_18
        eax_18.b = not.b(eax_17.b)
        int32_t eax_22
        eax_22.b = *(edi + 1)
        int32_t var_f4
        int32_t var_e8
        int32_t eax_23 = eax_22 - neg.d(var_f4
            + *(((eax_18 + *(((eax_17 - eax_18) << 2) + var_d0) - var_f4) << 2) + var_e8) - 0xff)
        
        if (eax_23 s< 0)
            eax_23 = 0
        
        *(edi + 1) = eax_23.b
        int32_t ebx_35
        ebx_35.b = *var_124
        int32_t eax_25 = edx_4 + *(((ebx_35 - edx_4) << 2) + eax_7)
        int32_t eax_26
        eax_26.b = not.b(eax_25.b)
        int32_t eax_30
        eax_30.b = *edi
        int32_t var_f0
        int32_t var_e4
        result = eax_30 - neg.d(var_f0
            + *(((eax_26 + *(((eax_25 - eax_26) << 2) + var_d0) - var_f0) << 2) + var_e4) - 0xff)
        
        if (result s< 0)
            result = 0
        
        *edi = result.b
        edi += 4
        j = j_1
        j_1 -= 1
    while (j != 1)
    int32_t var_130
    edi += var_130
    i = i_1
    i_1 -= 1
while (i != 1)
return result
