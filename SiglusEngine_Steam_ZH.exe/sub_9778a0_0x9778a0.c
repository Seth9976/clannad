// 函数: sub_9778a0
// 地址: 0x9778a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
int32_t* var_14
int32_t* esi_4 = var_14
char* var_1c
char* edi = var_1c
int32_t i_2
int32_t i_1 = i_2
int32_t result
int32_t i

do
    int32_t eax_1 = *esi_4
    void* esi_1 = &esi_4[1]
    
    if (eax_1 != 0)
        int32_t var_c
        
        if (eax_1 s> 0)
            edi = &edi[var_c]
        else
            edi -= var_c
    
    int32_t eax_2 = *esi_1
    
    if (eax_2 != 0)
        int32_t var_8
        
        if (eax_2 s> 0)
            edi = &edi[var_8]
        else
            edi -= var_8
    
    int32_t result_1
    int32_t ecx_1 = result_1 << 2
    int32_t eax_3
    eax_3.b = edi[3]
    result = eax_3 << 2
    int32_t ecx_5 = *(*(ecx_1 + &data_4dae580) + result)
    
    if (ecx_5 != 0)
        int32_t edx_5 = *(*(ecx_1 + &data_4dee980) + result)
        char* var_18
        int32_t ebx_1
        ebx_1.b = var_18[2]
        int32_t ebx_2
        ebx_2.b = var_18[1]
        int32_t ebx_3
        ebx_3.b = *var_18
        result = result_1
        
        if (result != 0xff)
            int32_t ebx_9
            ebx_9.b = edi[3]
            
            if (ebx_9 != 0)
                int32_t eax_6 = *((result << 2) + &data_4d6e180)
                *((ebx_2 << 2) + eax_6)
                *((ebx_3 << 2) + eax_6)
                int32_t eax_7
                eax_7.b = edi[2]
                edi[2] = (divu.dp.d(mulu.dp.d(eax_7, edx_5), ecx_5)).b
                int32_t eax_12
                eax_12.b = edi[1]
                edi[1] = (divu.dp.d(mulu.dp.d(eax_12, edx_5), ecx_5)).b
                int32_t eax_17
                eax_17.b = *edi
                result = divu.dp.d(mulu.dp.d(eax_17, edx_5), ecx_5)
                *edi = result.b
                edi[3] = ecx_5.b
            else
                edi[2] = ebx_1.b
                edi[1] = ebx_2.b
                *edi = ebx_3.b
                edi[3] = result.b
        else
            edi[2] = ebx_1.b
            edi[1] = ebx_2.b
            *edi = ebx_3.b
            edi[3] = result.b
    
    esi_4 = esi_1 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
