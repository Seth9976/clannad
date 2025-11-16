// 函数: sub_8135c0
// 地址: 0x8135c0
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
        int32_t ebx_1
        ebx_1.b = var_124[2]
        int32_t eax_1
        eax_1.b = *(edi + 2)
        int32_t var_118
        int32_t eax_2 = eax_1 - *((neg.d(ebx_1 - 0xff) << 2) + var_118)
        
        if (eax_2 s< 0)
            eax_2 = 0
        
        *(edi + 2) = eax_2.b
        int32_t ebx_7
        ebx_7.b = var_124[1]
        int32_t eax_3
        eax_3.b = *(edi + 1)
        int32_t eax_4 = eax_3 - *((neg.d(ebx_7 - 0xff) << 2) + var_118)
        
        if (eax_4 s< 0)
            eax_4 = 0
        
        *(edi + 1) = eax_4.b
        int32_t ebx_13
        ebx_13.b = *var_124
        int32_t eax_5
        eax_5.b = *edi
        result = eax_5 - *((neg.d(ebx_13 - 0xff) << 2) + var_118)
        
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
