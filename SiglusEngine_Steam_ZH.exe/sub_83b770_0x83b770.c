// 函数: sub_83b770
// 地址: 0x83b770
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
            int32_t ecx_1 = ebx_1 << 2
            int32_t eax_1
            eax_1.b = edi[3]
            int32_t eax = eax_1 << 2
            int32_t ecx_5 = *(*(ecx_1 + &data_4dae580) + eax)
            
            if (ecx_5 != 0)
                int32_t edx_5 = *(*(ecx_1 + &data_4dee980) + eax)
                int32_t ebx_3
                ebx_3.b = var_124[2]
                int32_t ebx_4
                ebx_4.b = var_124[1]
                int32_t ebx_5
                ebx_5.b = *var_124
                
                if (ebx_1 != 0xff)
                    int32_t ebx_11
                    ebx_11.b = edi[3]
                    
                    if (ebx_11 != 0)
                        int32_t eax_4 = *((ebx_1 << 2) + &data_4d6e180)
                        *((ebx_4 << 2) + eax_4)
                        *((ebx_5 << 2) + eax_4)
                        int32_t eax_5
                        eax_5.b = edi[2]
                        edi[2] = (divu.dp.d(mulu.dp.d(eax_5, edx_5), ecx_5)).b
                        int32_t eax_10
                        eax_10.b = edi[1]
                        edi[1] = (divu.dp.d(mulu.dp.d(eax_10, edx_5), ecx_5)).b
                        int32_t eax_15
                        eax_15.b = *edi
                        *edi = divu.dp.d(mulu.dp.d(eax_15, edx_5), ecx_5).b
                        edi[3] = ecx_5.b
                    else
                        edi[2] = ebx_3.b
                        edi[1] = ebx_4.b
                        *edi = ebx_5.b
                        edi[3] = ebx_1.b
                else
                    edi[2] = ebx_3.b
                    edi[1] = ebx_4.b
                    *edi = ebx_5.b
                    edi[3] = ebx_1.b
        
        edi = &edi[4]
        j = j_1
        j_1 -= 1
    while (j != 1)
    int32_t var_130
    edi = &edi[var_130]
    i = i_1
    i_1 -= 1
while (i != 1)
