// 函数: sub_9699a0
// 地址: 0x9699a0
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
        int32_t eax_13
        eax_13.b = not.b(eax_12.b)
        int32_t var_f8
        int32_t var_ec
        int32_t var_e0
        int32_t var_d4
        int32_t var_d0
        int32_t eax_18 = var_f8 + *(((var_e0
            + *(((eax_13 + *(((eax_12 - eax_13) << 2) + var_d0) - var_e0) << 2) + var_d4) - var_f8)
            << 2) + var_ec)
        int32_t ebx_22
        ebx_22.b = var_18[1]
        int32_t eax_20 = edx_9 + *(((ebx_22 - edx_9) << 2) + eax_10)
        int32_t eax_21
        eax_21.b = not.b(eax_20.b)
        int32_t var_f4
        int32_t var_e8
        int32_t var_dc
        int32_t eax_26 = var_f4 + *(((var_dc
            + *(((eax_21 + *(((eax_20 - eax_21) << 2) + var_d0) - var_dc) << 2) + var_d4) - var_f4)
            << 2) + var_e8)
        int32_t ebx_39
        ebx_39.b = *var_18
        int32_t eax_28 = edx_9 + *(((ebx_39 - edx_9) << 2) + eax_10)
        int32_t eax_29
        eax_29.b = not.b(eax_28.b)
        int32_t var_f0
        int32_t var_e4
        int32_t var_d8
        int32_t eax_34 = var_f0 + *(((var_d8
            + *(((eax_29 + *(((eax_28 - eax_29) << 2) + var_d0) - var_d8) << 2) + var_d4) - var_f0)
            << 2) + var_e4)
        result = result_1
        
        if (result != 0xff)
            int32_t ebx_61
            ebx_61.b = edi[3]
            
            if (ebx_61 != 0)
                int32_t eax_37 = *((result << 2) + &data_4d6e180)
                *((eax_26 << 2) + eax_37)
                *((eax_34 << 2) + eax_37)
                int32_t eax_38
                eax_38.b = edi[2]
                edi[2] = (divu.dp.d(mulu.dp.d(eax_38, edx_5), ecx_5)).b
                int32_t eax_43
                eax_43.b = edi[1]
                edi[1] = (divu.dp.d(mulu.dp.d(eax_43, edx_5), ecx_5)).b
                int32_t eax_48
                eax_48.b = *edi
                result = divu.dp.d(mulu.dp.d(eax_48, edx_5), ecx_5)
                *edi = result.b
                edi[3] = ecx_5.b
            else
                edi[2] = eax_18.b
                edi[1] = eax_26.b
                *edi = eax_34.b
                edi[3] = result.b
        else
            edi[2] = eax_18.b
            edi[1] = eax_26.b
            *edi = eax_34.b
            edi[3] = result.b
    
    esi_4 = esi_1 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
