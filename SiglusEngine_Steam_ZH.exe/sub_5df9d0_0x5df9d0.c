// 函数: sub_5df9d0
// 地址: 0x5df9d0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t i = 0
int32_t result = (*(arg1 + 0x8c) - *(arg1 + 0x88)) s/ 0x3b4

if (result s> 0)
    result = 0
    int32_t var_8_1 = 0
    int32_t var_c_1 = 0
    int32_t result_1 = 0
    
    do
        sub_5db450(*(arg1 + 0x88) + result, arg2, 0, 0, 0, 0, 0, arg3, arg4, arg5, arg6)
        i += 1
        result_1 += 0x3b4
        result = result_1
    while (i s< (*(arg1 + 0x8c) - *(arg1 + 0x88)) s/ 0x3b4)

return result
