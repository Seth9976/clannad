// 函数: sub_4eefd0
// 地址: 0x4eefd0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* const esi = &data_61e978

while (true)
    arg1 = &arg1[1]
    
    while (true)
        void* eax
        eax.b = *arg1
        
        if (eax.b == 0x2c)
            break
        
        if (eax.b == 0x20)
            break
        
        eax.b = *esi
        
        if (eax.b == 0 || eax.b == 0x40)
            return 0
        
        char* var_8 = arg1
        char* var_c
        bool cond:0_1
        
        if (zx.d(eax.b) - 0x24 u<= 0x2f)
            switch (eax.b)
                case 0x24
                    int32_t eax_3 = sub_4e72b0(&var_c, &var_8, arg1, &var_c)
                    
                    if (eax_3 == 0 || eax_3 == 3)
                        return 1
                    
                label_4ef040:
                    void var_14
                    sub_4e8c00(&var_14, &var_8, var_8, &var_14, 0)
                    arg1 = var_8
                    esi += 1
                    continue
                case 0x25
                    cond:0_1 = sub_4e72b0(&var_c, &var_8, arg1, &var_c) != 1
                label_4ef118:
                    
                    if (cond:0_1)
                        return 1
                    
                    void var_10
                    void* var_20_5 = &var_10
                    sub_4e7460(&var_10, &var_8, var_8, var_c)
                    arg1 = var_8
                case 0x26
                label_4ef115:
                    cond:0_1 = sub_4e72b0(&var_c, &var_8, arg1, &var_c) != 3
                    goto label_4ef118
                case 0x4e
                    if (sub_4e72b0(&var_c, &var_8, arg1, &var_c) == 2)
                        goto label_4ef040
                    
                    return 1
                case 0x53
                    eax.b = *arg1
                    
                    if (eax.b == 0x24)
                        goto label_4ef115
                    
                    if (eax.b != 0x22)
                        while (true)
                            eax.b = *arg1
                            
                            if (eax.b u>= 0x80 && (eax.b u< 0xa0 || eax.b u> 0xdf) && eax.b u< 0xfe)
                                arg1 = &arg1[2]
                                continue
                            
                            if ((eax.b u< 0x41 || eax.b u> 0x5a) && (eax.b u< 0x30 || eax.b u> 0x39)
                                    && eax.b != 0x5f && eax.b != 0x3f)
                                break
                            
                            arg1 = &arg1[1]
                    else
                    label_4ef07a:
                        arg1 = &arg1[1]
                        
                        while (true)
                            eax.b = *arg1
                            
                            if (eax.b u< 0x80)
                            label_4ef097:
                                
                                if (eax.b == 0x22)
                                    arg1 = &arg1[1]
                                    esi += 1
                                    break
                                
                                if (eax.b != 0x5c)
                                    goto label_4ef07a
                                
                                char edx = arg1[1]
                                
                                if (edx != 0x5c && edx != 0x22)
                                    arg1 = &arg1[1]
                                    continue
                            else if (eax.b u< 0xa0)
                                if (eax.b u>= 0xfe)
                                    goto label_4ef097
                            else if (eax.b u<= 0xdf || eax.b u>= 0xfe)
                                goto label_4ef097
                            
                            arg1 = &arg1[2]
                        
                        continue
        esi += 1
