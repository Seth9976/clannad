// 函数: sub_783920
// 地址: 0x783920
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
int32_t* var_134
int32_t* edi = var_134
void* var_124
void* esi_1 = var_124
int32_t i_1
int32_t i = i_1
int32_t result

do
    int32_t j_1
    int32_t j = j_1
    
    do
        int32_t result_1
        result_1.b = *(esi_1 + 3)
        result = result_1
        
        if (result == 0)
            esi_1 += 4
            edi = &edi[1]
        else
            int32_t result_2 = result
            result ^= 0xff
            
            if (result != 0)
                int32_t edx_1 = *((result_2 << 2) + &data_4e3da80)
                int32_t ebx_3
                ebx_3.b = *(esi_1 + 2)
                int32_t eax_1
                eax_1.b = *(edi + 2)
                *(edi + 2) = eax_1.b + (*(((ebx_3 - eax_1) << 2) + edx_1)).b
                int32_t ebx_7
                ebx_7.b = *(esi_1 + 1)
                int32_t eax_3
                eax_3.b = *(edi + 1)
                *(edi + 1) = eax_3.b + (*(((ebx_7 - eax_3) << 2) + edx_1)).b
                int32_t ebx_11
                ebx_11.b = *esi_1
                int32_t eax_5
                eax_5.b = *edi
                result = eax_5 + *(((ebx_11 - eax_5) << 2) + edx_1)
                *edi = result.b
                esi_1 += 4
                edi = &edi[1]
            else
                *edi = *esi_1
                edi = &edi[1]
                esi_1 += 4
        
        j -= 1
    while (j != 0)
    
    int32_t var_120
    esi_1 += var_120
    int32_t var_130
    edi += var_130
    i -= 1
while (i != 0)

return result
