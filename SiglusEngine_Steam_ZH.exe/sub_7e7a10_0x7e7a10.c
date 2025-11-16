// 函数: sub_7e7a10
// 地址: 0x7e7a10
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
int32_t* var_134
int32_t* edi = var_134
int32_t i_1
int32_t i = i_1
int32_t result

do
    int32_t j_1
    int32_t j = j_1
    
    do
        int32_t* var_124
        int32_t result_1
        result_1.b = *(var_124 + 3)
        result = result_1
        
        if (result == 0)
            edi = &edi[1]
        else if (result != 0xff)
            int32_t edx_1 = *((result << 2) + &data_4e3da80)
            int32_t ebx_4
            ebx_4.b = *(var_124 + 2)
            int32_t eax_2
            eax_2.b = *(edi + 2)
            *(edi + 2) = eax_2.b + (*(((ebx_4 - eax_2) << 2) + edx_1)).b
            int32_t ebx_8
            ebx_8.b = *(var_124 + 1)
            int32_t eax_4
            eax_4.b = *(edi + 1)
            *(edi + 1) = eax_4.b + (*(((ebx_8 - eax_4) << 2) + edx_1)).b
            int32_t ebx_12
            ebx_12.b = *var_124
            int32_t eax_6
            eax_6.b = *edi
            result = eax_6 + *(((ebx_12 - eax_6) << 2) + edx_1)
            *edi = result.b
            edi = &edi[1]
        else
            result = *var_124
            *edi = result
            edi = &edi[1]
        
        j -= 1
    while (j != 0)
    
    int32_t var_130
    edi += var_130
    i -= 1
while (i != 0)

return result
