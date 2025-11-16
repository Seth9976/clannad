// 函数: sub_76188a
// 地址: 0x76188a
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i_1 = arg3
int16_t* result_1 = arg1
int16_t* result = result_1

if (i_1 != 0)
    int16_t* edx_2 = arg2 - result_1
    int32_t i
    
    do
        int16_t eax_1 = *(edx_2 + result_1)
        *result_1 = eax_1
        result_1 = &result_1[1]
        
        if (eax_1 == 0)
            break
        
        i = i_1
        i_1 -= 1
    while (i != 1)
    
    if (i_1 != 0 && i_1 != 1)
        int32_t ecx_2
        int32_t edi
        edi, ecx_2 = __builtin_memset(result_1, 0, (i_1 - 1) u>> 1 << 2)
        __builtin_memset(edi, 0, adc.d(ecx_2, ecx_2, ((i_1 - 1) & 1) != 0) << 1)

return result
