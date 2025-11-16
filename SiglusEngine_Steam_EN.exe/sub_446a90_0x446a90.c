// 函数: sub_446a90
// 地址: 0x446a90
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

while (true)
    arg1 = *arg3
    
    if (arg1 != 0x20 && arg1 != 9)
        if (*arg3 == 0x3d)
            while (true)
                arg1 = arg3[1]
                arg3 = &arg3[1]
                
                if (arg1 != 0x20)
                    if (arg1 != 9)
                        break
            
            if (arg1 == 0x22)
                arg3 = &arg3[1]
                int32_t esi_1 = 0
                char* edx = arg4
                
                if (*arg3 == 0)
                label_446b10:
                    *arg4 = 0
                else
                    while (true)
                        arg1 = *arg3
                        
                        if (arg1 == 0x22)
                            arg3 = &arg3[1]
                            *edx = 0
                            break
                        
                        if (arg1 u< 0x80 || (arg1 u>= 0xa0 && arg1 u<= 0xdf) || arg1 u>= 0xfe)
                            arg3 = &arg3[1]
                            
                            if (esi_1 s< 0x100)
                                *edx = arg1
                                edx = &edx[1]
                                esi_1 += 1
                        else if (esi_1 s>= 0x100)
                            arg1 += 2
                            *arg3 = arg1
                        else
                            *edx = arg1
                            arg1 = arg3[1]
                            arg3 = &arg3[2]
                            edx[1] = arg1
                            edx = &edx[2]
                            esi_1 += 2
                        
                        if (*arg3 == 0)
                            goto label_446b10
                
                if (esi_1 s>= 0x100)
                    *arg4 = 0
        
        *arg2 = arg3
        return arg1
    
    arg3 = &arg3[1]
