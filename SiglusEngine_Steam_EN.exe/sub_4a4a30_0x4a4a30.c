// 函数: sub_4a4a30
// 地址: 0x4a4a30
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* result = arg3

if (arg2 == 0xc || arg2 == 0x12)
    int32_t ecx = (&data_63ecb0)[arg2]
    
    if (ecx s> 0)
        char* eax_1
        
        if (arg2 != 0xc)
            eax_1 = arg3
        
        if (arg2 == 0xc || arg2 == 0x12)
            eax_1 = 0x2710
        
        int32_t edx_1 = sub_4a4ca0(eax_1, ecx, result, eax_1)
        
        if (edx_1 != 0)
            int32_t ecx_2 = 0
            
            while (true)
                if (ecx_2 == arg4)
                    return result
                
                while (true)
                    int32_t eax_2
                    eax_2.b = *result
                    
                    if (eax_2.b == 0)
                        break
                    
                    if (eax_2.b u>= 0x80 && (eax_2.b u< 0xa0 || eax_2.b u> 0xdf) && eax_2.b u< 0xfe)
                        result = &result[2]
                        continue
                    
                    result = &result[1]
                
                ecx_2 += 1
                result = &result[1]
                
                if (ecx_2 == edx_1)
                    break
else
    sub_4a3fe0()

return 0
