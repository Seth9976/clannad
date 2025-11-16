// 函数: sub_800170
// 地址: 0x800170
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
char* var_134
char* edi = var_134
int32_t i_2
int32_t i_1 = i_2
int32_t i

do
    int32_t j_2
    int32_t j_1 = j_2
    int32_t j
    
    do
        char* var_124
        int32_t ebx_1
        ebx_1.b = var_124[3]
        
        if (ebx_1 != 0)
            int32_t edx_1 = *((ebx_1 << 2) + &data_4e3da80)
            int32_t ebx_5
            ebx_5.b = var_124[2]
            int32_t eax_1
            eax_1.b = edi[2]
            int32_t eax_2 = eax_1 - *((ebx_5 << 2) + edx_1)
            
            if (eax_2 s< 0)
                eax_2 = 0
            
            edi[2] = eax_2.b
            int32_t ebx_9
            ebx_9.b = var_124[1]
            int32_t eax_3
            eax_3.b = edi[1]
            int32_t eax_4 = eax_3 - *((ebx_9 << 2) + edx_1)
            
            if (eax_4 s< 0)
                eax_4 = 0
            
            edi[1] = eax_4.b
            int32_t ebx_13
            ebx_13.b = *var_124
            int32_t eax_5
            eax_5.b = *edi
            int32_t eax = eax_5 - *((ebx_13 << 2) + edx_1)
            
            if (eax s< 0)
                eax = 0
            
            *edi = eax.b
        
        edi = &edi[4]
        j = j_1
        j_1 -= 1
    while (j != 1)
    int32_t var_130
    edi = &edi[var_130]
    i = i_1
    i_1 -= 1
while (i != 1)
