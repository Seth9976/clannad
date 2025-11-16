// 函数: sub_571890
// 地址: 0x571890
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (*arg1 != 0)
    while (true)
        char eax = *arg1
        
        if (eax u< 0x80)
        label_5718b4:
            
            if (eax == 0xd && arg1[1] == 0xa)
                arg1 = &arg1[2]
                break
            
            arg1 = &arg1[1]
            
            if (eax == 0xa)
                break
        else if (eax u< 0xa0)
            if (eax u>= 0xfe)
                goto label_5718b4
            
            arg1 = &arg1[2]
        else
            if (eax u<= 0xdf || eax u>= 0xfe)
                goto label_5718b4
            
            arg1 = &arg1[2]
        
        if (*arg1 == 0)
            *arg2 = arg1
            return 

*arg2 = arg1
