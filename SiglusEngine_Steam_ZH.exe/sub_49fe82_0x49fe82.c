// 函数: sub_49fe82
// 地址: 0x49fe82
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result

if (arg5 == 0)
    result = *(*(arg2 + 8) + ((*(arg2 + 0xc) * arg3 + arg4) << 2))
else
    int32_t eax = *(arg2 + 8)
    int32_t edi
    int32_t var_c_1 = edi
    int32_t result_2 = *(eax + (arg4 << 2))
    result = *(eax + ((*(arg2 + 0xc) + arg4) << 2))
    
    if (arg3 == 0)
        if (result_2 u<= result)
            result = result_2
    else if (result_2 u> result)
        result = result_2

while (true)
    int32_t result_1 = *(*(*(arg1 + 0x14) + (result << 2)) + 0x30)
    
    if (result == result_1)
        break
    
    result = result_1

return result
