// 函数: __wchartodigit
// 地址: 0x760447
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1 u>= 0x30)
    if (arg1 u< 0x3a)
        return zx.d(arg1) - 0x30
    
    int32_t edx_1 = 0xff10
    int16_t ecx_1
    
    if (arg1 u>= 0xff10)
        ecx_1 = -0xe6
    label_7605d8:
        
        if (arg1 u< ecx_1)
            return zx.d(arg1) - edx_1
    else if (arg1 u>= 0x660)
        if (arg1 u< 0x66a)
            return zx.d(arg1) - 0x660
        
        if (arg1 u>= 0x6f0)
            if (arg1 u< 0x6fa)
                return zx.d(arg1) - 0x6f0
            
            if (arg1 u>= 0x966)
                if (arg1 u< 0x970)
                    return zx.d(arg1) - 0x966
                
                if (arg1 u>= 0x9e6)
                    if (arg1 u< 0x9f0)
                        return zx.d(arg1) - 0x9e6
                    
                    if (arg1 u>= 0xa66)
                        if (arg1 u< 0xa70)
                            return zx.d(arg1) - 0xa66
                        
                        if (arg1 u>= 0xae6)
                            if (arg1 u< 0xaf0)
                                return zx.d(arg1) - 0xae6
                            
                            if (arg1 u>= 0xb66)
                                if (arg1 u< 0xb70)
                                    return zx.d(arg1) - 0xb66
                                
                                if (arg1 u>= 0xc66)
                                    if (arg1 u< 0xc70)
                                        return zx.d(arg1) - 0xc66
                                    
                                    if (arg1 u>= 0xce6)
                                        if (arg1 u< 0xcf0)
                                            return zx.d(arg1) - 0xce6
                                        
                                        if (arg1 u>= 0xd66)
                                            if (arg1 u< 0xd70)
                                                return zx.d(arg1) - 0xd66
                                            
                                            if (arg1 u>= 0xe50)
                                                if (arg1 u< 0xe5a)
                                                    return zx.d(arg1) - 0xe50
                                                
                                                if (arg1 u>= 0xed0)
                                                    if (arg1 u< 0xeda)
                                                        return zx.d(arg1) - 0xed0
                                                    
                                                    if (arg1 u>= 0xf20)
                                                        if (arg1 u< 0xf2a)
                                                            return zx.d(arg1) - 0xf20
                                                        
                                                        if (arg1 u>= 0x1040)
                                                            if (arg1 u< 0x104a)
                                                                return zx.d(arg1) - 0x1040
                                                            
                                                            if (arg1 u>= 0x17e0)
                                                                if (arg1 u< 0x17ea)
                                                                    return zx.d(arg1) - 0x17e0
                                                                
                                                                edx_1 = 0x1810
                                                                
                                                                if (arg1 u>= 0x1810)
                                                                    ecx_1 = 0x181a
                                                                    goto label_7605d8

return 0xffffffff
