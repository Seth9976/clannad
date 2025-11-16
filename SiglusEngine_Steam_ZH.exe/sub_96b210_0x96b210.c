// 函数: sub_96b210
// 地址: 0x96b210
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
    
    result = *esi_1
    
    if (result != 0)
        int32_t var_8
        
        if (result s> 0)
            edi = &edi[var_8]
        else
            edi -= var_8
    
    char* var_18
    int32_t result_1
    result_1.b = var_18[3]
    
    if (result_1 != 0)
        int32_t ecx_1 = result_1 << 2
        int32_t eax_2
        eax_2.b = edi[3]
        result = eax_2 << 2
        int32_t ecx_5 = *(*(ecx_1 + &data_4dae580) + result)
        
        if (ecx_5 != 0)
            int32_t edx_6 = *(*(ecx_1 + &data_4dee980) + result)
            int32_t eax_3
            eax_3.b = var_18[2]
            int32_t eax_5
            eax_5.b = var_18[1]
            int32_t eax_7
            eax_7.b = *var_18
            uint32_t edx_10 = (*(&data_4e3d680 + (eax_3 << 2)) + *(&data_4e3e280 + (eax_5 << 2))
                + *(&data_4e3de80 + (eax_7 << 2))) u>> 8
            int32_t var_cc
            int32_t eax_9 = *(&data_4e3da80 + var_cc)
            int32_t ebx_6
            ebx_6.b = var_18[2]
            int32_t eax_11 = edx_10 + *(((ebx_6 - edx_10) << 2) + eax_9)
            int32_t ebx_11
            ebx_11.b = var_18[1]
            int32_t eax_13 = edx_10 + *(((ebx_11 - edx_10) << 2) + eax_9)
            int32_t ebx_16
            ebx_16.b = *var_18
            int32_t eax_15 = edx_10 + *(((ebx_16 - edx_10) << 2) + eax_9)
            result = result_1
            
            if (result != 0xff)
                int32_t ebx_26
                ebx_26.b = edi[3]
                
                if (ebx_26 != 0)
                    int32_t eax_18 = *((result << 2) + &data_4d6e180)
                    *((eax_13 << 2) + eax_18)
                    *((eax_15 << 2) + eax_18)
                    int32_t eax_19
                    eax_19.b = edi[2]
                    edi[2] = (divu.dp.d(mulu.dp.d(eax_19, edx_6), ecx_5)).b
                    int32_t eax_24
                    eax_24.b = edi[1]
                    edi[1] = (divu.dp.d(mulu.dp.d(eax_24, edx_6), ecx_5)).b
                    int32_t eax_29
                    eax_29.b = *edi
                    result = divu.dp.d(mulu.dp.d(eax_29, edx_6), ecx_5)
                    *edi = result.b
                    edi[3] = ecx_5.b
                else
                    edi[2] = eax_11.b
                    edi[1] = eax_13.b
                    *edi = eax_15.b
                    edi[3] = result.b
            else
                edi[2] = eax_11.b
                edi[1] = eax_13.b
                *edi = eax_15.b
                edi[3] = result.b
    
    esi_4 = esi_1 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
