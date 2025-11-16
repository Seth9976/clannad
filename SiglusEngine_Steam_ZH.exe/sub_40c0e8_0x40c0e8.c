// 函数: sub_40c0e8
// 地址: 0x40c0e8
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

uint32_t result_2 = *arg1
int32_t edi
int32_t var_10 = edi

if (result_2 != 0)
    int32_t ebx_1 = arg2
    
    if (ebx_1 u> *arg4)
        uint32_t result = sub_745f3f(ebx_1 * 2)
        
        if (result == 0)
            return result
        
        if (arg3 u> 0)
            uint32_t result_1 = result
            arg2 = arg3
            int32_t i
            
            do
                int32_t edx_1
                edx_1.w = *(result_2 - result + result_1)
                *result_1 = edx_1.w
                result_1 += 2
                i = arg2
                arg2 -= 1
            while (i != 1)
        
        *arg4 = ebx_1
        j__free(result_2)
        result_2 = result
else
    result_2 = sub_745f3f(arg2 * 2)
    *arg4 = arg2

*arg1 = result_2
return 1
