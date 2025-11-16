// 函数: sub_80c7c0
// 地址: 0x80c7c0
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
            int32_t var_11c
            int32_t ebx_7 = *(*((ebx_1 << 2) + &data_4e3da80) + var_11c)
            
            if (ebx_7 != 0)
                int32_t edx_1 = *((ebx_7 << 2) + &data_4e3da80)
                int32_t ebx_11
                ebx_11.b = var_124[2]
                int32_t eax_1
                eax_1.b = not.b(ebx_11.b)
                int32_t eax_3
                eax_3.b = edi[2]
                int32_t var_d0
                int32_t eax_4 = eax_3
                    - *((neg.d(eax_1 + *(((ebx_11 - eax_1) << 2) + var_d0) - 0xff) << 2) + edx_1)
                
                if (eax_4 s< 0)
                    eax_4 = 0
                
                edi[2] = eax_4.b
                int32_t ebx_21
                ebx_21.b = var_124[1]
                int32_t eax_5
                eax_5.b = not.b(ebx_21.b)
                int32_t eax_7
                eax_7.b = edi[1]
                int32_t eax_8 = eax_7
                    - *((neg.d(eax_5 + *(((ebx_21 - eax_5) << 2) + var_d0) - 0xff) << 2) + edx_1)
                
                if (eax_8 s< 0)
                    eax_8 = 0
                
                edi[1] = eax_8.b
                int32_t ebx_31
                ebx_31.b = *var_124
                int32_t eax_9
                eax_9.b = not.b(ebx_31.b)
                int32_t eax_11
                eax_11.b = *edi
                int32_t eax = eax_11
                    - *((neg.d(eax_9 + *(((ebx_31 - eax_9) << 2) + var_d0) - 0xff) << 2) + edx_1)
                
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
