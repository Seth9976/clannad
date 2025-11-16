// 函数: sub_7d7b10
// 地址: 0x7d7b10
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
            int32_t ebx_1
            ebx_1.b = *(esi_1 + 2)
            int32_t eax_2
            eax_2.b = not.b(ebx_1.b)
            int32_t var_f8
            int32_t var_ec
            int32_t var_e0
            int32_t var_d4
            int32_t var_d0
            int32_t eax_7 = var_f8 + *(((var_e0
                + *(((eax_2 + *(((ebx_1 - eax_2) << 2) + var_d0) - var_e0) << 2) + var_d4)
                - var_f8) << 2) + var_ec)
            int32_t ebx_14
            ebx_14.b = *(esi_1 + 1)
            int32_t eax_8
            eax_8.b = not.b(ebx_14.b)
            int32_t var_f4
            int32_t var_e8
            int32_t var_dc
            int32_t eax_13 = var_f4 + *(((var_dc
                + *(((eax_8 + *(((ebx_14 - eax_8) << 2) + var_d0) - var_dc) << 2) + var_d4)
                - var_f4) << 2) + var_e8)
            int32_t ebx_27
            ebx_27.b = *esi_1
            int32_t eax_14
            eax_14.b = not.b(ebx_27.b)
            int32_t var_f0
            int32_t var_e4
            int32_t var_d8
            int32_t eax_19 = var_f0 + *(((var_d8
                + *(((eax_14 + *(((ebx_27 - eax_14) << 2) + var_d0) - var_d8) << 2) + var_d4)
                - var_f0) << 2) + var_e4)
            result = result_1
            
            if (result != 0xff)
                int32_t ebx_45
                ebx_45.b = *(edi + 3)
                
                if (ebx_45 != 0)
                    int32_t eax_22 = *((result << 2) + &data_4d6e180)
                    *((eax_13 << 2) + eax_22)
                    *((eax_19 << 2) + eax_22)
                    int32_t eax_23
                    eax_23.b = *(edi + 2)
                    *(edi + 2) = (divu.dp.d(mulu.dp.d(eax_23, edx_5), ecx_5)).b
                    int32_t eax_28
                    eax_28.b = *(edi + 1)
                    *(edi + 1) = (divu.dp.d(mulu.dp.d(eax_28, edx_5), ecx_5)).b
                    int32_t eax_33
                    eax_33.b = *edi
                    result = divu.dp.d(mulu.dp.d(eax_33, edx_5), ecx_5)
                    *edi = result.b
                    *(edi + 3) = ecx_5.b
                else
                    *(edi + 2) = eax_7.b
                    *(edi + 1) = eax_13.b
                    *edi = eax_19.b
                    *(edi + 3) = result.b
            else
                *(edi + 2) = eax_7.b
                *(edi + 1) = eax_13.b
                *edi = eax_19.b
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
