// 函数: sub_838d80
// 地址: 0x838d80
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
            int32_t eax_2
            eax_2.b = var_124[2]
            int32_t eax_4
            eax_4.b = var_124[1]
            int32_t eax_6
            eax_6.b = *var_124
            uint32_t edx_9 = (*(&data_4e3d680 + (eax_2 << 2)) + *(&data_4e3e280 + (eax_4 << 2))
                + *(&data_4e3de80 + (eax_6 << 2))) u>> 8
            int32_t var_cc
            int32_t eax_8 = *(&data_4e3da80 + var_cc)
            int32_t ebx_5
            ebx_5.b = var_124[2]
            int32_t eax_10 = edx_9 + *(((ebx_5 - edx_9) << 2) + eax_8)
            int32_t eax_11
            eax_11.b = not.b(eax_10.b)
            int32_t var_d0
            int32_t eax_12 = eax_11 + *(((eax_10 - eax_11) << 2) + var_d0)
            int32_t ebx_14
            ebx_14.b = var_124[1]
            int32_t eax_14 = edx_9 + *(((ebx_14 - edx_9) << 2) + eax_8)
            int32_t eax_15
            eax_15.b = not.b(eax_14.b)
            int32_t eax_16 = eax_15 + *(((eax_14 - eax_15) << 2) + var_d0)
            int32_t ebx_23
            ebx_23.b = *var_124
            int32_t eax_18 = edx_9 + *(((ebx_23 - edx_9) << 2) + eax_8)
            int32_t eax_19
            eax_19.b = not.b(eax_18.b)
            int32_t eax_20 = eax_19 + *(((eax_18 - eax_19) << 2) + var_d0)
            result = result_1
            
            if (result != 0xff)
                int32_t ebx_37
                ebx_37.b = *(edi + 3)
                
                if (ebx_37 != 0)
                    int32_t eax_23 = *((result << 2) + &data_4d6e180)
                    *((eax_16 << 2) + eax_23)
                    *((eax_20 << 2) + eax_23)
                    int32_t eax_24
                    eax_24.b = *(edi + 2)
                    *(edi + 2) = (divu.dp.d(mulu.dp.d(eax_24, edx_5), ecx_5)).b
                    int32_t eax_29
                    eax_29.b = *(edi + 1)
                    *(edi + 1) = (divu.dp.d(mulu.dp.d(eax_29, edx_5), ecx_5)).b
                    int32_t eax_34
                    eax_34.b = *edi
                    result = divu.dp.d(mulu.dp.d(eax_34, edx_5), ecx_5)
                    *edi = result.b
                    *(edi + 3) = ecx_5.b
                else
                    *(edi + 2) = eax_12.b
                    *(edi + 1) = eax_16.b
                    *edi = eax_20.b
                    *(edi + 3) = result.b
            else
                *(edi + 2) = eax_12.b
                *(edi + 1) = eax_16.b
                *edi = eax_20.b
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
