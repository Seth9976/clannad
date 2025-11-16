// 函数: sub_7f3300
// 地址: 0x7f3300
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
        eax_1.b = not.b(ebx_1.b)
        int32_t eax_5
        eax_5.b = *(edi + 2)
        int32_t var_e0
        int32_t var_d4
        int32_t var_d0
        int32_t eax_6 = eax_5 + var_e0
            + *(((eax_1 + *(((ebx_1 - eax_1) << 2) + var_d0) - var_e0) << 2) + var_d4)
        
        if (eax_6 s> 0xff)
            eax_6 = 0xff
        
        *(edi + 2) = eax_6.b
        int32_t ebx_10
        ebx_10.b = var_124[1]
        int32_t eax_7
        eax_7.b = not.b(ebx_10.b)
        int32_t eax_11
        eax_11.b = *(edi + 1)
        int32_t var_dc
        int32_t eax_12 = eax_11 + var_dc
            + *(((eax_7 + *(((ebx_10 - eax_7) << 2) + var_d0) - var_dc) << 2) + var_d4)
        
        if (eax_12 s> 0xff)
            eax_12 = 0xff
        
        *(edi + 1) = eax_12.b
        int32_t ebx_19
        ebx_19.b = *var_124
        int32_t eax_13
        eax_13.b = not.b(ebx_19.b)
        int32_t eax_17
        eax_17.b = *edi
        int32_t var_d8
        result = eax_17 + var_d8
            + *(((eax_13 + *(((ebx_19 - eax_13) << 2) + var_d0) - var_d8) << 2) + var_d4)
        
        if (result s> 0xff)
            result = 0xff
        
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
