// 函数: sub_8394b0
// 地址: 0x8394b0
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
            int32_t ebx_10
            ebx_10.b = var_124[1]
            int32_t eax_12 = edx_9 + *(((ebx_10 - edx_9) << 2) + eax_8)
            int32_t ebx_15
            ebx_15.b = *var_124
            int32_t eax_14 = edx_9 + *(((ebx_15 - edx_9) << 2) + eax_8)
            result = result_1
            
            if (result != 0xff)
                int32_t ebx_25
                ebx_25.b = *(edi + 3)
                
                if (ebx_25 != 0)
                    int32_t eax_17 = *((result << 2) + &data_4d6e180)
                    *((eax_12 << 2) + eax_17)
                    *((eax_14 << 2) + eax_17)
                    int32_t eax_18
                    eax_18.b = *(edi + 2)
                    *(edi + 2) = (divu.dp.d(mulu.dp.d(eax_18, edx_5), ecx_5)).b
                    int32_t eax_23
                    eax_23.b = *(edi + 1)
                    *(edi + 1) = (divu.dp.d(mulu.dp.d(eax_23, edx_5), ecx_5)).b
                    int32_t eax_28
                    eax_28.b = *edi
                    result = divu.dp.d(mulu.dp.d(eax_28, edx_5), ecx_5)
                    *edi = result.b
                    *(edi + 3) = ecx_5.b
                else
                    *(edi + 2) = eax_10.b
                    *(edi + 1) = eax_12.b
                    *edi = eax_14.b
                    *(edi + 3) = result.b
            else
                *(edi + 2) = eax_10.b
                *(edi + 1) = eax_12.b
                *edi = eax_14.b
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
