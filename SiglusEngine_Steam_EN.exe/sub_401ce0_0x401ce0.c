// 函数: sub_401ce0
// 地址: 0x401ce0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 0x58) s>= 2 && *(arg1 + 4) != 0)
    int32_t eax_2 = *(arg1 + 0x34)
    
    if (arg2 s< eax_2)
        if (arg2 s>= 0)
            int32_t edx_3 = *(arg1 + 0x44)
            int32_t ecx_2 = arg2 << 4
            *(edx_3 + ecx_2 + 0xc)
            return *(edx_3 + ecx_2 + 8)
        
        int32_t result = 0
        int32_t ebp = 0
        int32_t i = 0
        
        if (eax_2 s> 0)
            do
                int32_t eax_3
                int32_t edx_1
                eax_3, edx_1 = sub_401ce0(arg1, i)
                int32_t result_1 = result
                result += eax_3
                ebp = adc.d(ebp, edx_1, result_1 + eax_3 u< result_1)
                i += 1
            while (i s< *(arg1 + 0x34))
        
        return result

return 0xffffff7d
