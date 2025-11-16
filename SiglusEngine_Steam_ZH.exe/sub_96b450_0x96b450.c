// 函数: sub_96b450
// 地址: 0x96b450
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
        int32_t eax_4
        eax_4.b = var_18[2]
        int32_t eax_6
        eax_6.b = var_18[1]
        int32_t eax_8
        eax_8.b = *var_18
        uint32_t edx_9 = (*(&data_4e3d680 + (eax_4 << 2)) + *(&data_4e3e280 + (eax_6 << 2))
            + *(&data_4e3de80 + (eax_8 << 2))) u>> 8
        int32_t var_cc
        int32_t eax_10 = *(&data_4e3da80 + var_cc)
        int32_t ebx_5
        ebx_5.b = var_18[2]
        int32_t eax_12 = edx_9 + *(((ebx_5 - edx_9) << 2) + eax_10)
        int32_t ebx_10
        ebx_10.b = var_18[1]
        int32_t eax_14 = edx_9 + *(((ebx_10 - edx_9) << 2) + eax_10)
        int32_t ebx_15
        ebx_15.b = *var_18
        int32_t eax_16 = edx_9 + *(((ebx_15 - edx_9) << 2) + eax_10)
        result = result_1
        
        if (result != 0xff)
            int32_t ebx_25
            ebx_25.b = edi[3]
            
            if (ebx_25 != 0)
                int32_t eax_19 = *((result << 2) + &data_4d6e180)
                *((eax_14 << 2) + eax_19)
                *((eax_16 << 2) + eax_19)
                int32_t eax_20
                eax_20.b = edi[2]
                edi[2] = (divu.dp.d(mulu.dp.d(eax_20, edx_5), ecx_5)).b
                int32_t eax_25
                eax_25.b = edi[1]
                edi[1] = (divu.dp.d(mulu.dp.d(eax_25, edx_5), ecx_5)).b
                int32_t eax_30
                eax_30.b = *edi
                result = divu.dp.d(mulu.dp.d(eax_30, edx_5), ecx_5)
                *edi = result.b
                edi[3] = ecx_5.b
            else
                edi[2] = eax_12.b
                edi[1] = eax_14.b
                *edi = eax_16.b
                edi[3] = result.b
        else
            edi[2] = eax_12.b
            edi[1] = eax_14.b
            *edi = eax_16.b
            edi[3] = result.b
    
    esi_4 = esi_1 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
