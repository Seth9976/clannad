// 函数: sub_7e2580
// 地址: 0x7e2580
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
            int32_t ebx_2
            ebx_2.b = *(esi_1 + 1)
            int32_t ebx_3
            ebx_3.b = *esi_1
            result = result_1
            
            if (result != 0xff)
                int32_t ebx_9
                ebx_9.b = *(edi + 3)
                
                if (ebx_9 != 0)
                    int32_t eax_4 = *((result << 2) + &data_4d6e180)
                    *((ebx_2 << 2) + eax_4)
                    *((ebx_3 << 2) + eax_4)
                    int32_t eax_5
                    eax_5.b = *(edi + 2)
                    *(edi + 2) = (divu.dp.d(mulu.dp.d(eax_5, edx_5), ecx_5)).b
                    int32_t eax_10
                    eax_10.b = *(edi + 1)
                    *(edi + 1) = (divu.dp.d(mulu.dp.d(eax_10, edx_5), ecx_5)).b
                    int32_t eax_15
                    eax_15.b = *edi
                    result = divu.dp.d(mulu.dp.d(eax_15, edx_5), ecx_5)
                    *edi = result.b
                    *(edi + 3) = ecx_5.b
                else
                    *(edi + 2) = ebx_1.b
                    *(edi + 1) = ebx_2.b
                    *edi = ebx_3.b
                    *(edi + 3) = result.b
            else
                *(edi + 2) = ebx_1.b
                *(edi + 1) = ebx_2.b
                *edi = ebx_3.b
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
