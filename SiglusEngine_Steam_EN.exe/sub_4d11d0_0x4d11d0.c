// 函数: sub_4d11d0
// 地址: 0x4d11d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char* esi = arg3
*arg4 = 0

if (esi != 0)
    int32_t edx = 0
    int32_t ecx = 0
    
    while (true)
        arg1.b = *esi
        
        if (arg1.b == 0)
            break
        
        if (arg1.b != 0x20 && arg1.b != 0x2c && arg1.b u> 0x1f)
            break
        
        esi = &esi[1]
    
    while (true)
        arg1.b = *esi
        
        if (arg1.b u>= 0x80)
            if (arg1.b u< 0xa0)
                if (arg1.b u< 0xfe || arg1.b == 0)
                    goto label_4d1258
                
                goto label_4d122c
            
            if ((arg1.b u<= 0xdf || arg1.b u>= 0xfe) && arg1.b != 0)
                goto label_4d122c
            
            goto label_4d1258
        
        if (arg1.b == 0)
        label_4d1258:
            
            if (ecx == 0)
                break
        else
        label_4d122c:
            
            if (arg1.b u>= 0x30 && arg1.b u<= 0x39)
                ecx = 1
                *arg4 = zx.d(arg1.b) + *arg4 * 0xa - 0x30
                esi = &esi[1]
                continue
            else if (ecx == 0)
                if (arg1.b == 0x2d)
                    edx ^= 1
                else if (arg1.b != 0x2b)
                    break
                
                esi = &esi[1]
                continue
        
        if (edx != 0)
            *arg4 = neg.d(*arg4)
        
        if (arg2 != 0)
            *arg2 = esi
        
        return 0

return 1
