// 函数: sub_78c580
// 地址: 0x78c580
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
        int32_t eax_10
        eax_10.b = *(edi + 2)
        int32_t eax_11 = eax_10 + edx_4 + *(((ebx_5 - edx_4) << 2) + eax_7)
        
        if (eax_11 s> 0xff)
            eax_11 = 0xff
        
        *(edi + 2) = eax_11.b
        int32_t ebx_10
        ebx_10.b = *(esi_1 + 1)
        int32_t eax_14
        eax_14.b = *(edi + 1)
        int32_t eax_15 = eax_14 + edx_4 + *(((ebx_10 - edx_4) << 2) + eax_7)
        
        if (eax_15 s> 0xff)
            eax_15 = 0xff
        
        *(edi + 1) = eax_15.b
        int32_t ebx_15
        ebx_15.b = *esi_1
        int32_t eax_18
        eax_18.b = *edi
        result = eax_18 + edx_4 + *(((ebx_15 - edx_4) << 2) + eax_7)
        
        if (result s> 0xff)
            result = 0xff
        
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
