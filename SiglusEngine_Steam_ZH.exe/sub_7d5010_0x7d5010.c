// 函数: sub_7d5010
// 地址: 0x7d5010
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
            int32_t var_f8
            int32_t var_ec
            int32_t var_e0
            int32_t var_d4
            int32_t var_d0
            int32_t eax_16 = var_f8 + *(((var_e0
                + *(((eax_11 + *(((eax_10 - eax_11) << 2) + var_d0) - var_e0) << 2) + var_d4)
                - var_f8) << 2) + var_ec)
            int32_t ebx_22
            ebx_22.b = *(esi_1 + 1)
            int32_t eax_18 = edx_9 + *(((ebx_22 - edx_9) << 2) + eax_8)
            int32_t eax_19
            eax_19.b = not.b(eax_18.b)
            int32_t var_f4
            int32_t var_e8
            int32_t var_dc
            int32_t eax_24 = var_f4 + *(((var_dc
                + *(((eax_19 + *(((eax_18 - eax_19) << 2) + var_d0) - var_dc) << 2) + var_d4)
                - var_f4) << 2) + var_e8)
            int32_t ebx_39
            ebx_39.b = *esi_1
            int32_t eax_26 = edx_9 + *(((ebx_39 - edx_9) << 2) + eax_8)
            int32_t eax_27
            eax_27.b = not.b(eax_26.b)
            int32_t var_f0
            int32_t var_e4
            int32_t var_d8
            int32_t eax_32 = var_f0 + *(((var_d8
                + *(((eax_27 + *(((eax_26 - eax_27) << 2) + var_d0) - var_d8) << 2) + var_d4)
                - var_f0) << 2) + var_e4)
            result = result_1
            
            if (result != 0xff)
                int32_t ebx_61
                ebx_61.b = *(edi + 3)
                
                if (ebx_61 != 0)
                    int32_t eax_35 = *((result << 2) + &data_4d6e180)
                    *((eax_24 << 2) + eax_35)
                    *((eax_32 << 2) + eax_35)
                    int32_t eax_36
                    eax_36.b = *(edi + 2)
                    *(edi + 2) = (divu.dp.d(mulu.dp.d(eax_36, edx_5), ecx_5)).b
                    int32_t eax_41
                    eax_41.b = *(edi + 1)
                    *(edi + 1) = (divu.dp.d(mulu.dp.d(eax_41, edx_5), ecx_5)).b
                    int32_t eax_46
                    eax_46.b = *edi
                    result = divu.dp.d(mulu.dp.d(eax_46, edx_5), ecx_5)
                    *edi = result.b
                    *(edi + 3) = ecx_5.b
                else
                    *(edi + 2) = eax_16.b
                    *(edi + 1) = eax_24.b
                    *edi = eax_32.b
                    *(edi + 3) = result.b
            else
                *(edi + 2) = eax_16.b
                *(edi + 1) = eax_24.b
                *edi = eax_32.b
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
