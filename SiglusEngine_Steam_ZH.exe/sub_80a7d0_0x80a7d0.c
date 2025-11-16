// 函数: sub_80a7d0
// 地址: 0x80a7d0
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
        int32_t eax_12
        eax_12.b = *(edi + 2)
        int32_t var_d0
        int32_t eax_13 = eax_12 - neg.d(eax_10 + *(((eax_9 - eax_10) << 2) + var_d0) - 0xff)
        
        if (eax_13 s< 0)
            eax_13 = 0
        
        *(edi + 2) = eax_13.b
        int32_t ebx_16
        ebx_16.b = var_124[1]
        int32_t eax_15 = edx_4 + *(((ebx_16 - edx_4) << 2) + eax_7)
        int32_t eax_16
        eax_16.b = not.b(eax_15.b)
        int32_t eax_18
        eax_18.b = *(edi + 1)
        int32_t eax_19 = eax_18 - neg.d(eax_16 + *(((eax_15 - eax_16) << 2) + var_d0) - 0xff)
        
        if (eax_19 s< 0)
            eax_19 = 0
        
        *(edi + 1) = eax_19.b
        int32_t ebx_27
        ebx_27.b = *var_124
        int32_t eax_21 = edx_4 + *(((ebx_27 - edx_4) << 2) + eax_7)
        int32_t eax_22
        eax_22.b = not.b(eax_21.b)
        int32_t eax_24
        eax_24.b = *edi
        result = eax_24 - neg.d(eax_22 + *(((eax_21 - eax_22) << 2) + var_d0) - 0xff)
        
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
