// 函数: sub_713c90
// 地址: 0x713c90
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edx_2 = (data_4ebee44 - data_4ebee3c) s>> 3
uint32_t ecx_1 = edx_2 u>> 1

if (0x1fffffff - ecx_1 u>= edx_2)
    int32_t edx_4 = edx_2 + ecx_1
    
    if (edx_4 u< arg1)
        return arg1
    
    return edx_4

if (0 u< arg1)
    return arg1

return 0
