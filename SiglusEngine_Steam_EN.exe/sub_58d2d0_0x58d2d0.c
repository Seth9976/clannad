// 函数: sub_58d2d0
// 地址: 0x58d2d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = arg3
int32_t result_1 = result

if (result != 0 && arg10 != 0)
    int32_t arg_2c
    int32_t result_4
    int32_t result_5
    int32_t result_6
    sub_4d2170(&arg_2c, arg4, arg2, &arg_2c, &result_4, &result_5, &result_6)
    int32_t edx_2 = arg11 - arg8
    result = result_5
    int32_t result_8 = arg12 - arg9
    int32_t result_3 = result
    
    if (edx_2 s<= result && result_8 s<= result_6)
        int32_t esi_1 = arg6
        int32_t result_2
        
        if (edx_2 s>= 0)
            result_2 = 0
        else
            result = neg.d(edx_2)
            esi_1 -= result
            result_2 = result
            edx_2 = 0
        
        int32_t result_7 = arg7
        int32_t ebx_1
        
        if (result_8 s>= 0)
            ebx_1 = 0
        else
            ebx_1 = neg.d(result_8)
            result_7 -= ebx_1
            result_8 = 0
        
        if (esi_1 s> 0 && result_7 s> 0)
            int32_t eax_1 = arg_2c
            
            if (eax_1 s> edx_2)
                int32_t eax_2 = eax_1 - edx_2
                edx_2 = arg_2c
                result_2 += eax_2
                esi_1 -= eax_2
            
            result = result_4
            
            if (result s> result_8)
                result -= result_8
                result_8 = result_4
                ebx_1 += result
                result_7 -= result
            
            if (result_3 s>= edx_2)
                result = result_6
                
                if (result s>= result_8)
                    if (result_3 - edx_2 + 1 s< esi_1)
                        esi_1 = result_3 - edx_2 + 1
                    
                    result = result - result_8 + 1
                    
                    if (result s< result_7)
                        result_7 = result
                    
                    if (esi_1 s> 0 && result_7 s> 0)
                        data_1cd43d0 = esi_1
                        data_1cd43cc = result_7
                        data_1cd43d8 = arg6 - esi_1
                        data_1cd43e8 = result_1 + ((result_8 * arg2 + edx_2) << 2)
                        data_1cd43e0 = arg4
                        data_1cd43d4 = arg7
                        data_1cd43dc = ebx_1 * arg6 + result_2 + arg5
                        data_1cd43e4 = (arg2 << 2) - (esi_1 << 2)
                        data_1c45994 = arg10
                        data_1cd43ac = arg13 << 2
                        data_1cd43a8 = 0xff - arg13
                        data_1cd43a4 = *(data_1cd4328 + (arg13 << 2))
                        
                        if (arg13 != 0xff)
                            return sub_58d230()
                        
                        return sub_58d1e0()

return result
