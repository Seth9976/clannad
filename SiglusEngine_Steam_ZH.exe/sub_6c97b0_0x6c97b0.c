// 函数: sub_6c97b0
// 地址: 0x6c97b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t result = arg3
int32_t result_1 = result

if (result != 0 && arg5 != 0)
    int32_t edx = arg8
    result = arg4 - 1
    int32_t result_2 = result
    
    if (edx s<= arg2 - 1)
        int32_t ecx_1 = arg9
        
        if (ecx_1 s<= result)
            int32_t result_3 = arg6
            int32_t var_10_1
            
            if (edx s>= 0)
                var_10_1 = 0
            else
                int32_t edx_1 = neg.d(edx)
                result_3 -= edx_1
                var_10_1 = edx_1
                edx = 0
            
            result = arg7
            int32_t ebx_1
            
            if (ecx_1 s>= 0)
                ebx_1 = 0
            else
                ebx_1 = neg.d(ecx_1)
                result -= ebx_1
                ecx_1 = 0
            
            if (result_3 s> 0 && result s> 0)
                if (edx s< 0)
                    int32_t edx_2 = neg.d(edx)
                    var_10_1 += edx_2
                    result_3 -= edx_2
                    edx = 0
                
                if (ecx_1 s< 0)
                    int32_t ecx_3 = neg.d(ecx_1)
                    ebx_1 += ecx_3
                    result -= ecx_3
                    ecx_1 = 0
                
                if (arg2 - 1 s>= edx && result_2 s>= ecx_1)
                    if (arg2 - 1 - edx + 1 s< result_3)
                        result_3 = arg2 - 1 - edx + 1
                    
                    if (result_2 - ecx_1 + 1 s< result)
                        result = result_2 - ecx_1 + 1
                    
                    if (result_3 s> 0 && result s> 0)
                        int32_t edi_4 = result_1 + ((ecx_1 * arg2 + edx) << 2)
                        int32_t esi_1 = arg5 + ((ebx_1 * arg6 + var_10_1) << 2)
                        int32_t i = result
                        result = result_3
                        
                        do
                            int32_t esi_2
                            int32_t edi_5
                            edi_5, esi_2 = __builtin_memcpy(edi_4, esi_1, result << 2)
                            edi_4 = edi_5 + ((arg2 - result_3) << 2)
                            esi_1 = esi_2 + ((arg6 - result_3) << 2)
                            i -= 1
                        while (i != 0)

return result
