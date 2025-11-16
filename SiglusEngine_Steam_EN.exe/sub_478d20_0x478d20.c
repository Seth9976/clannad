// 函数: sub_478d20
// 地址: 0x478d20
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0xff)
    if (*(arg3 + 0x190) != 0 && (*(arg3 + 0x448) u> 0 || *(arg3 + 0x44c) u> 0))
        if (arg5 s<= 0)
            *(arg3 + 0x448) = 0
            *(arg3 + 0x44c) = 0
        else
            *(arg3 + 0x454) = arg5.b
    
    sub_478640(
        sub_478640(
            sub_478640(sub_478640(sub_478640(arg1, 0, arg3, arg5), 1, arg3, arg5), 2, arg3, arg5), 
            3, arg3, arg5), 
        4, arg3, arg5)
    
    if (*(arg3 + 0x190) != 0)
        if (*(arg3 + 0x4fc) u> 0)
            if (*(arg3 + 0x510) s<= 0)
                *(arg3 + 0x510) = 1
            
            if (arg5 s<= 0)
                *(arg3 + 0x4fc) = 0
            else
                *(arg3 + 0x508) = arg5.b
        
        if (*(arg3 + 0x190) != 0)
            if (*(arg3 + 0x520) u> 0)
                if (*(arg3 + 0x534) s<= 0)
                    *(arg3 + 0x534) = 1
                
                if (arg5 s<= 0)
                    *(arg3 + 0x520) = 0
                else
                    *(arg3 + 0x52c) = arg5.b
            
            if (*(arg3 + 0x190) != 0)
                if (*(arg3 + 0x544) u> 0)
                    if (*(arg3 + 0x558) s<= 0)
                        *(arg3 + 0x558) = 1
                    
                    if (arg5 s<= 0)
                        *(arg3 + 0x544) = 0
                    else
                        *(arg3 + 0x550) = arg5.b
                
                if (*(arg3 + 0x190) != 0 && *(arg3 + 0x568) u> 0)
                    if (*(arg3 + 0x57c) s<= 0)
                        *(arg3 + 0x57c) = 1
                    
                    if (arg5 s<= 0)
                        *(arg3 + 0x568) = 0
                    else
                        *(arg3 + 0x574) = arg5.b
    
    arg1 = sub_478760(
        sub_478760(sub_478760(sub_478760(1, 0, arg3, arg5), 1, arg3, arg5), 2, arg3, arg5), 3, 
        arg3, arg5)
    
    if (*(arg3 + 0x190) != 0)
        if (*(arg3 + 0x5fc) u> 0)
            if (*(arg3 + 0x61c) s<= 0)
                arg1 = 1
                *(arg3 + 0x61c) = 1
            
            if (arg5 s<= 0)
                *(arg3 + 0x5fc) = 0
            else
                *(arg3 + 0x608) = arg5.b
        
        if (*(arg3 + 0x190) != 0)
            if (*(arg3 + 0x624) u> 0)
                if (*(arg3 + 0x644) s<= 0)
                    arg1 = 1
                    *(arg3 + 0x644) = 1
                
                if (arg5 s<= 0)
                    *(arg3 + 0x624) = 0
                else
                    *(arg3 + 0x630) = arg5.b
            
            if (*(arg3 + 0x190) != 0)
                if (*(arg3 + 0x64c) u> 0)
                    if (*(arg3 + 0x66c) s<= 0)
                        arg1 = 1
                        *(arg3 + 0x66c) = 1
                    
                    if (arg5 s<= 0)
                        *(arg3 + 0x64c) = 0
                    else
                        *(arg3 + 0x658) = arg5.b
                
                if (*(arg3 + 0x190) != 0)
                    if (*(arg3 + 0x674) u> 0)
                        if (*(arg3 + 0x698) s<= 0)
                            arg1 = 1
                            *(arg3 + 0x698) = 1
                        
                        if (arg5 s<= 0)
                            *(arg3 + 0x674) = 0
                        else
                            *(arg3 + 0x680) = arg5.b
                    
                    goto label_478fce
else if (arg2 != 0)
    switch (arg2)
        case 1
            sub_478640(arg1, 0, arg3, arg5)
            return 
        case 2
            sub_478640(arg1, arg2 - 1, arg3, arg5)
            return 
        case 3
            sub_478640(arg1, arg2 - 1, arg3, arg5)
            return 
        case 4
            sub_478640(arg1, arg2 - 1, arg3, arg5)
            return 
        case 5
            sub_478640(arg1, arg2 - 1, arg3, arg5)
            return 
        case 6
            sub_4786d0(arg1, 0, arg3, arg5)
            return 
        case 7
            sub_4786d0(arg1, arg2 - 6, arg3, arg5)
            return 
        case 8
            sub_4786d0(arg1, arg2 - 6, arg3, arg5)
            return 
        case 9
            sub_4786d0(arg1, arg2 - 6, arg3, arg5)
            return 
        case 0xa
            sub_478760(arg1, 0, arg3, arg5)
            return 
        case 0xb
            sub_478760(arg1, arg2 - 0xa, arg3, arg5)
            return 
        case 0xc
            sub_478760(arg1, arg2 - 0xa, arg3, arg5)
            return 
        case 0xd
            sub_478760(arg1, arg2 - 0xa, arg3, arg5)
            return 
        case 0xe
            sub_4787f0(arg1, 0, arg3, arg5)
            return 
        case 0xf
            sub_4787f0(arg1, arg2 - 0xe, arg3, arg5)
            return 
        case 0x10
            sub_4787f0(arg1, arg2 - 0xe, arg3, arg5)
            return 
        case 0x11
            sub_478880(arg1, arg2, arg3, arg5)
            return 
    
label_478fce:
    
    if (*(arg3 + 0x190) != 0)
        sub_466e10(arg1, arg2, arg3 + 0x69c, arg4, arg5)
else if (*(arg3 + 0x190) != arg2 && (*(arg3 + 0x448) u> arg2 || *(arg3 + 0x44c) u> arg2))
    if (arg5 s> 0)
        *(arg3 + 0x454) = arg5.b
        return 
    
    *(arg3 + 0x448) = 0
    *(arg3 + 0x44c) = 0
