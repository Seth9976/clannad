// 函数: sub_4c9a70
// 地址: 0x4c9a70
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

*arg5 = 0
*arg6 = 0
int32_t var_c
int32_t* result_1
int32_t* result = sub_4c9960(&result_1, arg2, arg3, &result_1, &var_c)

if (result.b != 0)
    int32_t edx = var_c
    int32_t ecx = 0
    result = result_1
    
    if (edx s> 0)
        while (result[2] != arg4)
            ecx += 1
            result = &result[4]
            
            if (ecx s>= edx)
                return result
        
        int32_t ecx_1 = *result
        
        if (ecx_1 != 0)
            int32_t* edx_1 = result[3]
            
            if (edx_1 s> 0)
                int32_t var_20_1 = 0
                return sub_4cc450(result, result[1] + arg2, arg3, ecx_1, ecx_1, edx_1, arg5, arg6, 
                    arg7, arg8, arg9, arg10)

return result
