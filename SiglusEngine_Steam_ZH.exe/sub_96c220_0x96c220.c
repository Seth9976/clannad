// 函数: sub_96c220
// 地址: 0x96c220
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
            int32_t ebx_2
            ebx_2.b = var_18[2]
            int32_t eax_3
            eax_3.b = not.b(ebx_2.b)
            int32_t var_f8
            int32_t var_ec
            int32_t var_e0
            int32_t var_d4
            int32_t var_d0
            int32_t eax_8 = var_f8 + *(((var_e0
                + *(((eax_3 + *(((ebx_2 - eax_3) << 2) + var_d0) - var_e0) << 2) + var_d4)
                - var_f8) << 2) + var_ec)
            int32_t ebx_15
            ebx_15.b = var_18[1]
            int32_t eax_9
            eax_9.b = not.b(ebx_15.b)
            int32_t var_f4
            int32_t var_e8
            int32_t var_dc
            int32_t eax_14 = var_f4 + *(((var_dc
                + *(((eax_9 + *(((ebx_15 - eax_9) << 2) + var_d0) - var_dc) << 2) + var_d4)
                - var_f4) << 2) + var_e8)
            int32_t ebx_28
            ebx_28.b = *var_18
            int32_t eax_15
            eax_15.b = not.b(ebx_28.b)
            int32_t var_f0
            int32_t var_e4
            int32_t var_d8
            int32_t eax_20 = var_f0 + *(((var_d8
                + *(((eax_15 + *(((ebx_28 - eax_15) << 2) + var_d0) - var_d8) << 2) + var_d4)
                - var_f0) << 2) + var_e4)
            result = result_1
            
            if (result != 0xff)
                int32_t ebx_46
                ebx_46.b = edi[3]
                
                if (ebx_46 != 0)
                    int32_t eax_23 = *((result << 2) + &data_4d6e180)
                    *((eax_14 << 2) + eax_23)
                    *((eax_20 << 2) + eax_23)
                    int32_t eax_24
                    eax_24.b = edi[2]
                    edi[2] = (divu.dp.d(mulu.dp.d(eax_24, edx_6), ecx_5)).b
                    int32_t eax_29
                    eax_29.b = edi[1]
                    edi[1] = (divu.dp.d(mulu.dp.d(eax_29, edx_6), ecx_5)).b
                    int32_t eax_34
                    eax_34.b = *edi
                    result = divu.dp.d(mulu.dp.d(eax_34, edx_6), ecx_5)
                    *edi = result.b
                    edi[3] = ecx_5.b
                else
                    edi[2] = eax_8.b
                    edi[1] = eax_14.b
                    *edi = eax_20.b
                    edi[3] = result.b
            else
                edi[2] = eax_8.b
                edi[1] = eax_14.b
                *edi = eax_20.b
                edi[3] = result.b
    
    esi_4 = esi_1 + 4
    i = i_1
    i_1 -= 1
while (i != 1)
return result
