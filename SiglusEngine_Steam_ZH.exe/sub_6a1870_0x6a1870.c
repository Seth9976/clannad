// 函数: sub_6a1870
// 地址: 0x6a1870
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3
int32_t result = arg6 + arg7

if (arg6 s<= result && result s<= arg4)
    int32_t i_1 = arg8
    
    if (i_1 s>= 0 && i_1 s<= arg5 && arg13 s>= 0)
        result = arg7 + arg13
        
        if (arg13 s<= result && result s<= arg11 && arg14 s>= 0)
            result = i_1 + arg14
            
            if (arg14 s<= result && result s<= arg12)
                int32_t* esi_1 = arg3 + (arg6 << 2)
                result = arg10 * arg14 + arg9
                int32_t* edi_1 = result + (arg13 << 2)
                
                if (i_1 s> 0)
                    result = arg7 << 2
                    arg7 = result
                    int32_t i
                    
                    do
                        sub_748840(edi_1, esi_1, result)
                        esi_1 += arg2
                        edi_1 += arg10
                        result = arg7
                        i = i_1
                        i_1 -= 1
                    while (i != 1)

return result
