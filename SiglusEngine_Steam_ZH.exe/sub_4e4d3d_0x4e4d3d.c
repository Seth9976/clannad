// 函数: sub_4e4d3d
// 地址: 0x4e4d3d
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t edi
int32_t var_8 = edi
int32_t result = *arg2

if (result u> 1)
    result = sub_458e55(sub_4e4d23, arg1, result, 0)
    int32_t i = 1
    int32_t edx_1 = 1
    
    if (*arg2 u> 1)
        do
            result = *(arg1 + (i << 2))
            
            if (result != *(arg1 + (i << 2) - 4))
                *(arg1 + (edx_1 << 2)) = result
                edx_1 += 1
            
            i += 1
        while (i u< *arg2)
    
    *arg2 = edx_1

return result
