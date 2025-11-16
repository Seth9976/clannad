// 函数: sub_584e80
// 地址: 0x584e80
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = arg3
int32_t result_1 = result

if (arg5 != 0 && result != 0)
    int32_t ebx
    ebx.b = arg13
    
    if (ebx.b != 0)
        int32_t arg_28
        int32_t result_5
        int32_t result_6
        int32_t result_7
        sub_4d2170(&arg_28, arg4, arg2, &arg_28, &result_5, &result_6, &result_7)
        int32_t edx_2 = arg11 - arg8
        result = result_6
        int32_t result_9 = arg12 - arg9
        int32_t result_4 = result
        
        if (edx_2 s<= result && result_9 s<= result_7)
            int32_t edi_1 = arg6
            int32_t result_2
            
            if (edx_2 s>= 0)
                result_2 = 0
            else
                result = neg.d(edx_2)
                edi_1 -= result
                result_2 = result
                edx_2 = 0
            
            int32_t result_8 = arg7
            int32_t result_3
            
            if (result_9 s>= 0)
                result_3 = 0
            else
                result = neg.d(result_9)
                result_8 -= result
                result_3 = result
                result_9 = 0
            
            if (edi_1 s> 0 && result_8 s> 0)
                int32_t eax_1 = arg_28
                
                if (eax_1 s> edx_2)
                    int32_t eax_2 = eax_1 - edx_2
                    edx_2 = arg_28
                    result_2 += eax_2
                    edi_1 -= eax_2
                
                result = result_5
                
                if (result s> result_9)
                    result -= result_9
                    result_9 = result_5
                    result_3 += result
                    result_8 -= result
                
                if (result_4 s>= edx_2)
                    result = result_7
                    
                    if (result s>= result_9)
                        if (result_4 - edx_2 + 1 s< edi_1)
                            edi_1 = result_4 - edx_2 + 1
                        
                        result = result - result_9 + 1
                        
                        if (result s< result_8)
                            result_8 = result
                        
                        if (edi_1 s> 0 && result_8 s> 0)
                            data_1cd43d0 = edi_1
                            data_1cd43cc = result_8
                            data_1cd43e8 = result_1 + ((result_9 * arg2 + edx_2) << 2)
                            data_1cd43e0 = arg4
                            data_1cd43dc = arg5 + ((result_3 * arg6 + result_2) << 2)
                            int32_t ecx_6 = edi_1 << 2
                            data_1cd43d4 = arg7
                            data_1cd43e4 = (arg2 << 2) - ecx_6
                            uint32_t ecx_7 = zx.d(ebx.b)
                            data_1cd43d8 = (arg6 << 2) - ecx_6
                            data_1cd43ac = ecx_7 << 2
                            data_1cd43a8 = 0xff - ecx_7
                            data_1cd43a4 = *(data_1cd4328 + (ecx_7 << 2))
                            
                            if (arg10 != 0)
                                if (ebx.b != 0xff)
                                    return sub_591b40()
                                
                                return sub_591a10()
                            
                            if (ebx.b != 0xff)
                                return sub_591ab0()
                            
                            return sub_5919d0()

return result
