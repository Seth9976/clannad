// 函数: sub_585550
// 地址: 0x585550
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = arg3
int32_t result_1 = result

if (result != 0 && arg7 != 0)
    int32_t esi_1 = arg10
    int32_t ecx = arg12
    int32_t result_2 = arg11
    result = arg13
    
    if (arg10 s> ecx)
        esi_1 = ecx
        ecx = arg10
    
    if (arg11 s> result)
        result_2 = result
        result = arg11
    
    if (esi_1 s< arg8 && ecx s>= 0 && result_2 s< arg9 && result s>= 0)
        if (esi_1 s< 0)
            esi_1 = 0
        
        if (ecx s>= arg8)
            ecx = arg8 - 1
        
        if (result_2 s< 0)
            result_2 = 0
        
        if (result s>= arg9)
            result = arg9 - 1
        
        result = result - result_2 + 1
        int32_t var_10_1 = arg5 - 1 + ecx - esi_1 + 1
        int32_t var_8_1 = arg6 - 1 + result
        
        if (arg5 s< arg2 && var_10_1 s>= 0 && arg6 s< arg4 && var_8_1 s>= 0)
            int32_t edi_4 = arg5
            
            if (edi_4 s< 0)
                edi_4 = 0
            
            int32_t edi_5 = arg6
            
            if (var_10_1 s>= arg2)
                var_10_1 = arg2 - 1
            
            if (edi_5 s< 0)
                edi_5 = 0
            
            int32_t ebx_13 = var_10_1
            
            if (var_8_1 s>= arg4)
                var_8_1 = arg4 - 1
                ebx_13 = var_10_1
            
            int32_t j_1 = ebx_13 - edi_4 + 1
            
            if (j_1 s> ecx - esi_1 + 1)
                j_1 = ecx - esi_1 + 1
            
            int32_t ecx_3 = var_8_1 - edi_5 + 1
            
            if (ecx_3 s> result)
                ecx_3 = result
            
            int32_t i = ecx_3
            int32_t* esi_2 = arg7 + ((result_2 * arg8 + esi_1) << 2)
            int32_t* edi_8 = result_1 + ((edi_5 * arg2 + edi_4) << 2)
            
            do
                int32_t j = j_1
                
                do
                    int32_t result_3 = *edi_8
                    *edi_8 = *esi_2
                    result = result_3
                    *esi_2 = result
                    esi_2 = &esi_2[1]
                    edi_8 = &edi_8[1]
                    j -= 1
                while (j != 0)
                
                esi_2 = &esi_2[arg8 - j_1]
                edi_8 = &edi_8[arg2 - j_1]
                i -= 1
            while (i != 0)

return result
