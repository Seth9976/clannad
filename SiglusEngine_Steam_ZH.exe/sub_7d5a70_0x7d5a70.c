// 函数: sub_7d5a70
// 地址: 0x7d5a70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
void* var_134
void* edi = var_134
void* var_124
void* esi_1 = var_124
int32_t i_2
int32_t i_1 = i_2
int32_t result
int32_t i

do
    int32_t j_2
    int32_t j_1 = j_2
    int32_t j
    
    do
        int32_t result_1
        int32_t ecx_1 = result_1 << 2
        int32_t eax_1
        eax_1.b = *(edi + 3)
        result = eax_1 << 2
        int32_t ecx_5 = *(*(ecx_1 + &data_4dae580) + result)
        
        if (ecx_5 != 0)
            int32_t edx_5 = *(*(ecx_1 + &data_4dee980) + result)
            int32_t eax_2
            eax_2.b = *(esi_1 + 2)
            int32_t eax_4
            eax_4.b = *(esi_1 + 1)
            int32_t eax_6
            eax_6.b = *esi_1
            uint32_t edx_9 = (*(&data_4e3d680 + (eax_2 << 2)) + *(&data_4e3e280 + (eax_4 << 2))
                + *(&data_4e3de80 + (eax_6 << 2))) u>> 8
            int32_t var_cc
            int32_t eax_8 = *(&data_4e3da80 + var_cc)
            int32_t ebx_5
            ebx_5.b = *(esi_1 + 2)
            int32_t eax_10 = edx_9 + *(((ebx_5 - edx_9) << 2) + eax_8)
            int32_t eax_11
            eax_11.b = not.b(eax_10.b)
            int32_t var_e0
            int32_t var_d4
            int32_t var_d0
            int32_t eax_14 =
                var_e0 + *(((eax_11 + *(((eax_10 - eax_11) << 2) + var_d0) - var_e0) << 2) + var_d4)
            int32_t ebx_18
            ebx_18.b = *(esi_1 + 1)
            int32_t eax_16 = edx_9 + *(((ebx_18 - edx_9) << 2) + eax_8)
            int32_t eax_17
            eax_17.b = not.b(eax_16.b)
            int32_t var_dc
            int32_t eax_20 =
                var_dc + *(((eax_17 + *(((eax_16 - eax_17) << 2) + var_d0) - var_dc) << 2) + var_d4)
            int32_t ebx_31
            ebx_31.b = *esi_1
            int32_t eax_22 = edx_9 + *(((ebx_31 - edx_9) << 2) + eax_8)
            int32_t eax_23
            eax_23.b = not.b(eax_22.b)
            int32_t var_d8
            int32_t eax_26 =
                var_d8 + *(((eax_23 + *(((eax_22 - eax_23) << 2) + var_d0) - var_d8) << 2) + var_d4)
            result = result_1
            
            if (result != 0xff)
                int32_t ebx_49
                ebx_49.b = *(edi + 3)
                
                if (ebx_49 != 0)
                    int32_t eax_29 = *((result << 2) + &data_4d6e180)
                    *((eax_20 << 2) + eax_29)
                    *((eax_26 << 2) + eax_29)
                    int32_t eax_30
                    eax_30.b = *(edi + 2)
                    *(edi + 2) = (divu.dp.d(mulu.dp.d(eax_30, edx_5), ecx_5)).b
                    int32_t eax_35
                    eax_35.b = *(edi + 1)
                    *(edi + 1) = (divu.dp.d(mulu.dp.d(eax_35, edx_5), ecx_5)).b
                    int32_t eax_40
                    eax_40.b = *edi
                    result = divu.dp.d(mulu.dp.d(eax_40, edx_5), ecx_5)
                    *edi = result.b
                    *(edi + 3) = ecx_5.b
                else
                    *(edi + 2) = eax_14.b
                    *(edi + 1) = eax_20.b
                    *edi = eax_26.b
                    *(edi + 3) = result.b
            else
                *(edi + 2) = eax_14.b
                *(edi + 1) = eax_20.b
                *edi = eax_26.b
                *(edi + 3) = result.b
        
        esi_1 += 4
        edi += 4
        j = j_1
        j_1 -= 1
    while (j != 1)
    int32_t var_120
    esi_1 += var_120
    int32_t var_130
    edi += var_130
    i = i_1
    i_1 -= 1
while (i != 1)
return result
