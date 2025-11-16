// 函数: sub_585150
// 地址: 0x585150
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* result = arg3
void* result_1 = result

if (arg5 != 0 && result != 0 && arg15 != 0)
    int32_t arg_24
    int32_t arg_28
    void* result_4
    int32_t arg_30
    result = sub_4d2170(&arg_24, arg4, arg2, &arg_24, &arg_28, &result_4, &arg_30)
    int32_t edx_2 = arg10 - arg8
    int32_t ecx_2 = arg11 - arg9
    
    if (edx_2 s<= result_4)
        int32_t ebx_1 = arg_30
        
        if (ecx_2 s<= ebx_1)
            void* result_5 = arg6
            void* result_2
            
            if (edx_2 s>= 0)
                result_2 = nullptr
            else
                result = neg.d(edx_2)
                result_5 -= result
                result_2 = result
                edx_2 = 0
            
            void* esi_1 = arg7
            void* result_3
            
            if (ecx_2 s>= 0)
                result_3 = nullptr
            else
                result = neg.d(ecx_2)
                esi_1 -= result
                result_3 = result
                ecx_2 = 0
            
            if (result_5 s> 0 && esi_1 s> 0)
                int32_t eax_1 = arg_24
                
                if (eax_1 s> edx_2)
                    int32_t eax_2 = eax_1 - edx_2
                    edx_2 = arg_24
                    result_2 += eax_2
                    result_5 -= eax_2
                
                int32_t eax_3 = arg_28
                
                if (eax_3 s> ecx_2)
                    int32_t eax_4 = eax_3 - ecx_2
                    ecx_2 = arg_28
                    result_3 += eax_4
                    esi_1 -= eax_4
                
                result = result_4
                
                if (result s>= edx_2 && ebx_1 s>= ecx_2)
                    result = result - edx_2 + 1
                    
                    if (result s< result_5)
                        result_5 = result
                    
                    if (ebx_1 - ecx_2 + 1 s< esi_1)
                        esi_1 = ebx_1 - ecx_2 + 1
                    
                    if (result_5 s> 0 && esi_1 s> 0)
                        data_1cd43d0 = result_5
                        data_1cd43cc = esi_1
                        data_1cd43e8 = result_1 + ((ecx_2 * arg2 + edx_2) << 2)
                        data_1cd43e0 = arg4
                        data_1cd43dc = arg5 + ((result_3 * arg6 + result_2) << 2)
                        int32_t ecx_7 = result_5 << 2
                        data_1cd43d4 = arg7
                        data_1cd43e4 = (arg2 << 2) - ecx_7
                        uint32_t ecx_8 = zx.d(arg15)
                        data_1cd43d8 = (arg6 << 2) - ecx_7
                        data_1cd43ac = ecx_8 << 2
                        data_1cd43a8 = 0xff - ecx_8
                        data_1cd43a4 = *(data_1cd4328 + (ecx_8 << 2))
                        data_20f3398 = (zx.d(arg12) << 8 | zx.d(arg13)) << 8 | zx.d(arg14)
                        
                        if (arg15 != 0xff)
                            return sub_5850b0()
                        
                        return sub_585060()

return result
