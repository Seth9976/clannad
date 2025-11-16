// 函数: sub_839cc0
// 地址: 0x839cc0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void var_148
__builtin_memcpy(&var_148, arg1, 0x144)
void* var_134
void* edi = var_134
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
            char* var_124
            int32_t ebx_1
            ebx_1.b = var_124[2]
            int32_t eax_2
            eax_2.b = not.b(ebx_1.b)
            int32_t var_f8
            int32_t var_ec
            int32_t var_d0
            int32_t eax_5 =
                var_f8 + *(((eax_2 + *(((ebx_1 - eax_2) << 2) + var_d0) - var_f8) << 2) + var_ec)
            int32_t ebx_10
            ebx_10.b = var_124[1]
            int32_t eax_6
            eax_6.b = not.b(ebx_10.b)
            int32_t var_f4
            int32_t var_e8
            int32_t eax_9 =
                var_f4 + *(((eax_6 + *(((ebx_10 - eax_6) << 2) + var_d0) - var_f4) << 2) + var_e8)
            int32_t ebx_19
            ebx_19.b = *var_124
            int32_t eax_10
            eax_10.b = not.b(ebx_19.b)
            int32_t var_f0
            int32_t var_e4
            int32_t eax_13 =
                var_f0 + *(((eax_10 + *(((ebx_19 - eax_10) << 2) + var_d0) - var_f0) << 2) + var_e4)
            result = result_1
            
            if (result != 0xff)
                int32_t ebx_33
                ebx_33.b = *(edi + 3)
                
                if (ebx_33 != 0)
                    int32_t eax_16 = *((result << 2) + &data_4d6e180)
                    *((eax_9 << 2) + eax_16)
                    *((eax_13 << 2) + eax_16)
                    int32_t eax_17
                    eax_17.b = *(edi + 2)
                    *(edi + 2) = (divu.dp.d(mulu.dp.d(eax_17, edx_5), ecx_5)).b
                    int32_t eax_22
                    eax_22.b = *(edi + 1)
                    *(edi + 1) = (divu.dp.d(mulu.dp.d(eax_22, edx_5), ecx_5)).b
                    int32_t eax_27
                    eax_27.b = *edi
                    result = divu.dp.d(mulu.dp.d(eax_27, edx_5), ecx_5)
                    *edi = result.b
                    *(edi + 3) = ecx_5.b
                else
                    *(edi + 2) = eax_5.b
                    *(edi + 1) = eax_9.b
                    *edi = eax_13.b
                    *(edi + 3) = result.b
            else
                *(edi + 2) = eax_5.b
                *(edi + 1) = eax_9.b
                *edi = eax_13.b
                *(edi + 3) = result.b
        
        edi += 4
        j = j_1
        j_1 -= 1
    while (j != 1)
    int32_t var_130
    edi += var_130
    i = i_1
    i_1 -= 1
while (i != 1)
return result
