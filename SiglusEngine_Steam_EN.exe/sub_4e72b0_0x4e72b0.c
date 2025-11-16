// 函数: sub_4e72b0
// 地址: 0x4e72b0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

*arg4 = 0

if (arg2 != 0)
    *arg2 = arg3

arg1 = *arg3

if (arg1 != 0 && arg1 != 0xa)
    if (arg1 u< 0x80)
    label_4e72dd:
        
        if (arg1 == 0x24)
            arg1 = arg3[1]
            
            if (arg1 == 0xff)
                *arg4 = *(arg3 + 2)
                
                if (arg2 != 0)
                    *arg2 = &arg3[6]
                
                return 2
            
            if (arg1 != 0xa && arg1 != 0xc && arg1 != 0x12)
                void* ecx = &arg3[2]
                *arg4 = zx.d(arg1)
                
                if (*ecx == 0x5b)
                    ecx += 1
                
                if (arg2 != 0)
                    *arg2 = ecx
                
                return 1
            
            void* ecx_1 = &arg3[2]
            *arg4 = zx.d(arg1)
            
            if (*ecx_1 == 0x5b)
                ecx_1 += 1
            
            if (arg2 != 0)
                *arg2 = ecx_1
            
            return 3
    else if (arg1 u< 0xa0)
        if (arg1 u>= 0xfe)
            goto label_4e72dd
    else if (arg1 u<= 0xdf || arg1 u>= 0xfe)
        goto label_4e72dd

return 0
