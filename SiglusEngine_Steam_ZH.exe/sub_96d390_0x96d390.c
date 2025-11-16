// 函数: sub_96d390
// 地址: 0x96d390
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
        int32_t eax_4
        eax_4.b = not.b(ebx_1.b)
        int32_t var_d0
        int32_t eax_5 = eax_4 + *(((ebx_1 - eax_4) << 2) + var_d0)
        int32_t ebx_6
        ebx_6.b = var_18[1]
        int32_t eax_6
        eax_6.b = not.b(ebx_6.b)
        int32_t eax_7 = eax_6 + *(((ebx_6 - eax_6) << 2) + var_d0)
        int32_t ebx_11
        ebx_11.b = *var_18
        int32_t eax_8
        eax_8.b = not.b(ebx_11.b)
        int32_t eax_9 = eax_8 + *(((ebx_11 - eax_8) << 2) + var_d0)
        result = result_1
        
        if (result != 0xff)
            int32_t ebx_21
            ebx_21.b = edi[3]
            
            if (ebx_21 != 0)
                int32_t eax_12 = *((result << 2) + &data_4d6e180)
                *((eax_7 << 2) + eax_12)
                *((eax_9 << 2) + eax_12)
                int32_t eax_13
                eax_13.b = edi[2]
                edi[2] = (divu.dp.d(mulu.dp.d(eax_13, edx_5), ecx_5)).b
                int32_t eax_18
                eax_18.b = edi[1]
                edi[1] = (divu.dp.d(mulu.dp.d(eax_18, edx_5), ecx_5)).b
                int32_t eax_23
                eax_23.b = *edi
                result = divu.dp.d(mulu.dp.d(eax_23, edx_5), ecx_5)
                *edi = result.b
                edi[3] = ecx_5.b
            else
                edi[2] = eax_5.b
                edi[1] = eax_7.b
                *edi = eax_9.b
                edi[3] = result.b
        else
            edi[2] = eax_5.b
            edi[1] = eax_7.b
            *edi = eax_9.b
            edi[3] = result.b
    
    esi_4 = esi_1 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
