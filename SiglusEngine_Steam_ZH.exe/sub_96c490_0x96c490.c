// 函数: sub_96c490
// 地址: 0x96c490
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
        int32_t var_f8
        int32_t var_ec
        int32_t var_e0
        int32_t var_d4
        int32_t var_d0
        int32_t eax_9 = var_f8 + *(((var_e0
            + *(((eax_4 + *(((ebx_1 - eax_4) << 2) + var_d0) - var_e0) << 2) + var_d4) - var_f8) << 2)
            + var_ec)
        int32_t ebx_14
        ebx_14.b = var_18[1]
        int32_t eax_10
        eax_10.b = not.b(ebx_14.b)
        int32_t var_f4
        int32_t var_e8
        int32_t var_dc
        int32_t eax_15 = var_f4 + *(((var_dc
            + *(((eax_10 + *(((ebx_14 - eax_10) << 2) + var_d0) - var_dc) << 2) + var_d4) - var_f4)
            << 2) + var_e8)
        int32_t ebx_27
        ebx_27.b = *var_18
        int32_t eax_16
        eax_16.b = not.b(ebx_27.b)
        int32_t var_f0
        int32_t var_e4
        int32_t var_d8
        int32_t eax_21 = var_f0 + *(((var_d8
            + *(((eax_16 + *(((ebx_27 - eax_16) << 2) + var_d0) - var_d8) << 2) + var_d4) - var_f0)
            << 2) + var_e4)
        result = result_1
        
        if (result != 0xff)
            int32_t ebx_45
            ebx_45.b = edi[3]
            
            if (ebx_45 != 0)
                int32_t eax_24 = *((result << 2) + &data_4d6e180)
                *((eax_15 << 2) + eax_24)
                *((eax_21 << 2) + eax_24)
                int32_t eax_25
                eax_25.b = edi[2]
                edi[2] = (divu.dp.d(mulu.dp.d(eax_25, edx_5), ecx_5)).b
                int32_t eax_30
                eax_30.b = edi[1]
                edi[1] = (divu.dp.d(mulu.dp.d(eax_30, edx_5), ecx_5)).b
                int32_t eax_35
                eax_35.b = *edi
                result = divu.dp.d(mulu.dp.d(eax_35, edx_5), ecx_5)
                *edi = result.b
                edi[3] = ecx_5.b
            else
                edi[2] = eax_9.b
                edi[1] = eax_15.b
                *edi = eax_21.b
                edi[3] = result.b
        else
            edi[2] = eax_9.b
            edi[1] = eax_15.b
            *edi = eax_21.b
            edi[3] = result.b
    
    esi_4 = esi_1 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
