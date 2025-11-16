// 函数: sub_5a80b0
// 地址: 0x5a80b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg1
int32_t result = *(arg1 + 0x2c)

if (result != *(arg1 + 0x30) && arg2 s>= 0)
    int32_t eax
    int32_t edx_1
    edx_1:eax = muls.dp.d(0x38e38e39, *(arg1 + 0x30) - result)
    int32_t edx_2 = edx_1 s>> 4
    result = (edx_2 u>> 0x1f) + edx_2
    
    if (arg2 s< result)
        int32_t eax_3 = *(arg1 + 0x2c)
        int32_t edx_3 = arg2 * 9
        return sub_5a7ca0(arg1, arg2, *(eax_3 + (edx_3 << 3) + 0x28), 
            *(eax_3 + (edx_3 << 3) + 0x3c), *(eax_3 + (edx_3 << 3) + 0x2c), arg1 + 4, 
            *(arg1 + 0x1c), 0)

return result
