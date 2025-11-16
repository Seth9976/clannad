// 函数: sub_6096a0
// 地址: 0x6096a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result
int32_t edx_2
edx_2:result = muls.dp.d(0x72c62a25, *(arg1 + 0xa8) - *(arg1 + 0xa4))
int32_t edx_3 = edx_2 s>> 0xa
void* var_10 = arg1
int32_t i_1 = (edx_3 u>> 0x1f) + edx_3
int32_t i_2 = i_1

if (i_1 s> 0)
    result = 0
    int32_t result_1 = 0
    int32_t i
    
    do
        void* ebx_1 = *(arg1 + 0xa4)
        void* ebx_2 = ebx_1 + result
        int32_t j_2 = (*(ebx_1 + result + 0x148) - *(ebx_2 + 0x144)) s/ 0x15fc
        
        if (j_2 s> 0)
            int32_t esi_2 = 0
            int32_t j_1 = j_2
            int32_t j
            
            do
                sub_5e4fc0(*(ebx_2 + 0x144) + esi_2)
                esi_2 += 0x15fc
                j = j_1
                j_1 -= 1
            while (j != 1)
            i_1 = i_2
        
        sub_5d98d0(ebx_2 + 0x394)
        sub_5b3f70(ebx_2 + 0x4cc)
        arg1 = var_10
        result = result_1 + 0x8ec
        i = i_1
        i_1 -= 1
        result_1 = result
        i_2 = i_1
    while (i != 1)

return result
