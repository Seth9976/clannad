// 函数: sub_842130
// 地址: 0x842130
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
int32_t* var_134
int32_t* edi = var_134
int32_t i_2
int32_t i_1 = i_2
void* result
int32_t i

do
    int32_t j_2
    int32_t j_1 = j_2
    int32_t var_a8
    int32_t var_a0_1 = var_a8
    int32_t var_bc
    void* result_2
    int32_t j
    
    do
        int32_t eax_2
        eax_2.b = *(result_2 + var_a0_1)
        int32_t var_b4
        
        if (var_b4 != 0)
            eax_2.b = not.b(eax_2.b)
        
        j = j_1
        char var_b0
        int32_t var_ac
        int32_t eax_4 = (eax_2 << var_b0) + var_ac
        
        if (eax_4 s< 0)
            eax_4 = 0
        else if (eax_4 s> 0xff)
            eax_4 = 0xff
        
        if (eax_4 != 0)
            int32_t var_11c
            int32_t ebx_9 = *(*((eax_4 << 2) + &data_4e3da80) + var_11c)
            
            if (ebx_9 != 0)
                int32_t* var_124
                
                if (ebx_9 != 0xff)
                    int32_t ecx_2 = ebx_9 << 2
                    int32_t eax_6
                    eax_6.b = *(edi + 3)
                    int32_t eax_7 = eax_6 << 2
                    int32_t ecx_6 = *(*(ecx_2 + &data_4dae580) + eax_7)
                    
                    if (ecx_6 != 0)
                        int32_t edx_6 = *(*(ecx_2 + &data_4dee980) + eax_7)
                        int32_t ebx_11
                        ebx_11.b = *(var_124 + 2)
                        int32_t ebx_12
                        ebx_12.b = *(var_124 + 1)
                        int32_t ebx_13
                        ebx_13.b = *var_124
                        
                        if (ebx_9 != 0xff)
                            int32_t ebx_19
                            ebx_19.b = *(edi + 3)
                            
                            if (ebx_19 != 0)
                                int32_t eax_11 = *((ebx_9 << 2) + &data_4d6e180)
                                *((ebx_12 << 2) + eax_11)
                                *((ebx_13 << 2) + eax_11)
                                int32_t eax_12
                                eax_12.b = *(edi + 2)
                                *(edi + 2) = (divu.dp.d(mulu.dp.d(eax_12, edx_6), ecx_6)).b
                                int32_t eax_17
                                eax_17.b = *(edi + 1)
                                *(edi + 1) = (divu.dp.d(mulu.dp.d(eax_17, edx_6), ecx_6)).b
                                int32_t eax_22
                                eax_22.b = *edi
                                *edi = (divu.dp.d(mulu.dp.d(eax_22, edx_6), ecx_6)).b
                                *(edi + 3) = ecx_6.b
                            else
                                *(edi + 2) = ebx_11.b
                                *(edi + 1) = ebx_12.b
                                *edi = ebx_13.b
                                *(edi + 3) = ebx_9.b
                        else
                            *(edi + 2) = ebx_11.b
                            *(edi + 1) = ebx_12.b
                            *edi = ebx_13.b
                            *(edi + 3) = ebx_9.b
                else
                    *edi = *var_124
        
        int32_t eax_28 = var_a0_1 + 1
        
        if (eax_28 s>= var_bc)
            eax_28 = 0
        
        var_a0_1 = eax_28
        edi = &edi[1]
        j_1 = j - 1
    while (j != 1)
    result = result_2 + var_bc
    int32_t var_94
    void* result_1
    
    if (result s>= var_94)
        result = result_1
    result_2 = result
    int32_t var_130
    edi += var_130
    i = i_1
    i_1 -= 1
while (i != 1)
return result
