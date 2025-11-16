// 函数: sub_5112a0
// 地址: 0x5112a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
int32_t eax = arg4 - 0x4ba
int32_t var_2c_5
int32_t var_2c_6
int32_t var_28_27
int32_t var_28_30
int32_t var_24_32
int32_t var_24_35
int32_t var_20_4
int32_t var_20_27
int32_t var_20_31
int32_t var_1c_43
int32_t var_1c_49
char** eax_20
char** eax_103
char** eax_116

if (eax u> 9)
    data_1b8b06c = 1
else
    switch (eax)
        case 0
            eax = data_1b8b070
            
            if (eax != 0x50)
                if (eax == 0x51 || eax == 0x52)
                    eax = arg5
                    
                    if (eax == 1 || eax == 2)
                        return sub_46dd30(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$", &data_1b8a720), 
                            arg3, data_1b8a720, 0, data_1b8a734, data_1b8a748, (data_1b8a75c).w, 
                            (data_1b8a770).w, (data_1b8a784).w, data_1b8a798)
                    
                    if (eax == 3)
                        eax_20 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                        int32_t var_1c_7 = 0
                        var_20_4 = 0xa
                    label_511638:
                        int32_t eax_21 = sub_466c70(eax_20, arg3, data_1b8a720, var_20_4, 0)
                        data_715e98 = eax_21
                        return eax_21
                    
                    if (eax == 4)
                        int32_t ecx_43 =
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                        int32_t eax_22 = data_1b8a720
                        int32_t var_1c_8 = 0
                        return sub_48cf80(eax_22, 0xa, ecx_43, 0, eax_22, eax_22, arg3)
                    
                    if (eax == 5)
                        int32_t ecx_47 =
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                        int32_t eax_24 = data_1b8a720
                        int32_t var_1c_9 = 1
                        int32_t eax_25 = sub_48cf80(eax_24, 0xa, ecx_47, 0, eax_24, eax_24, arg3)
                        sub_445260()
                        return eax_25
                    
                    if (eax == 6)
                        int32_t var_20_7 = 0
                        return sub_467500(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), 
                            arg3, data_1b8a720, 0xa, 0, data_1b8a734)
                else if (eax != 0x53)
                    if (eax == 0x54 || eax == 0x55)
                        eax = arg5
                        
                        if (eax != 1 && eax != 2)
                            if (eax == 3)
                                int32_t eax_15 = sub_466d80(eax, eax + 7, arg3, 0)
                                data_715e98 = eax_15
                                return eax_15
                            
                            if (eax == 4)
                                int32_t var_14 = 0
                                return sub_48cf80(eax, eax + 6, ecx, 0, 0xffffffff, 0xffffffff, 
                                    arg3)
                            
                            if (eax == 5)
                                int32_t var_14_1 = 1
                                int32_t eax_17 =
                                    sub_48cf80(eax, eax + 5, ecx, 0, 0xffffffff, 0xffffffff, arg3)
                                sub_445260()
                                return eax_17
                            
                            if (eax == 6)
                                return sub_4675e0(sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", 
                                    &data_1b8a720), 0xa, arg3, 0, data_1b8a720)
                    else if (eax != 0x56)
                        if (eax == 0x57 || eax == 0x58)
                            eax = arg5
                            
                            if (eax == 1 || eax == 2)
                                return sub_46de10(
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", 
                                        &data_1b8a720), 
                                    arg3, data_1b8a720, 0, data_1b8a734)
                        else if (eax != 0x59)
                            if (eax == 0x5a || eax == 0x5b)
                                eax = arg5
                                
                                if (eax == 1 || eax == 2)
                                    return sub_46dd80(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$", 
                                            &data_1b8a720), 
                                        data_1b8a734, data_1b8a720, arg3, 0, data_1b8a748, 
                                        data_1b8a75c, (data_1b8a770).w, (data_1b8a784).w, 
                                        (data_1b8a798).w, data_1b8a7ac)
                                
                                if (eax == 3)
                                    int32_t eax_4 = sub_466cd0(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", 
                                            &data_1b8a720), 
                                        data_1b8a734, data_1b8a720, arg3, 0xa, 0)
                                    data_715e98 = eax_4
                                    return eax_4
                                
                                if (eax == 4)
                                    char** eax_5
                                    int32_t ecx_11
                                    eax_5, ecx_11 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$", &data_1b8a720)
                                    int32_t var_1c_1 = 0
                                    return sub_48cf80(eax_5, 0xa, ecx_11, 0, data_1b8a720, 
                                        data_1b8a734, arg3)
                                
                                if (eax == 5)
                                    char** eax_7
                                    int32_t ecx_15
                                    eax_7, ecx_15 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$", &data_1b8a720)
                                    int32_t var_1c_2 = 1
                                    int32_t eax_8 = sub_48cf80(eax_7, 0xa, ecx_15, 0, data_1b8a720, 
                                        data_1b8a734, arg3)
                                    sub_445260()
                                    return eax_8
                                
                                if (eax == 6)
                                    return sub_467550(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                            &data_1b8a720), 
                                        data_1b8a734, data_1b8a720, arg3, 0xa, 0, data_1b8a748)
                            else if (eax != 0x5c && (eax == 0x5d || eax == 0x5e))
                                eax = arg5
                                
                                if (eax == 1 || eax == 2)
                                    return sub_46de60(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                            &data_1b8a720), 
                                        data_1b8a734, data_1b8a720, arg3, 0, data_1b8a748)
        case 1
            eax = data_1b8b070
            
            if (eax != 0x50)
                if (eax == 0x51 || eax == 0x52)
                    eax = arg5
                    
                    if (eax == 1 || eax == 2)
                        return sub_46dd30(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$", &data_1b8a720), 
                            arg3, data_1b8a720, 1, data_1b8a734, data_1b8a748, (data_1b8a75c).w, 
                            (data_1b8a770).w, (data_1b8a784).w, data_1b8a798)
                    
                    if (eax == 3)
                        eax_20 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                        int32_t var_1c_18 = 0
                        var_20_4 = 0xb
                        goto label_511638
                    
                    if (eax == 4)
                        int32_t ecx_95 =
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                        int32_t eax_47 = data_1b8a720
                        int32_t var_1c_19 = 0
                        return sub_48cf80(eax_47, 0xb, ecx_95, 0, eax_47, eax_47, arg3)
                    
                    if (eax == 5)
                        int32_t ecx_99 =
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                        int32_t eax_49 = data_1b8a720
                        int32_t var_1c_20 = 1
                        int32_t eax_50 = sub_48cf80(eax_49, 0xb, ecx_99, 0, eax_49, eax_49, arg3)
                        sub_445260()
                        return eax_50
                    
                    if (eax == 6)
                        int32_t var_20_14 = 0
                        return sub_467500(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), 
                            arg3, data_1b8a720, 0xb, 0, data_1b8a734)
                else if (eax != 0x53)
                    if (eax == 0x54 || eax == 0x55)
                        eax = arg5
                        
                        if (eax != 1 && eax != 2)
                            if (eax == 3)
                                int32_t eax_42 = sub_466d80(eax, eax + 8, arg3, 0)
                                data_715e98 = eax_42
                                return eax_42
                            
                            if (eax == 4)
                                int32_t var_14_2 = 0
                                return sub_48cf80(eax, eax + 7, ecx, 0, 0xffffffff, 0xffffffff, 
                                    arg3)
                            
                            if (eax == 5)
                                int32_t var_14_3 = 1
                                int32_t eax_44 =
                                    sub_48cf80(eax, eax + 6, ecx, 0, 0xffffffff, 0xffffffff, arg3)
                                sub_445260()
                                return eax_44
                            
                            if (eax == 6)
                                return sub_4675e0(sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", 
                                    &data_1b8a720), 0xb, arg3, 0, data_1b8a720)
                    else if (eax != 0x56)
                        if (eax == 0x57 || eax == 0x58)
                            eax = arg5
                            
                            if (eax == 1 || eax == 2)
                                return sub_46de10(
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", 
                                        &data_1b8a720), 
                                    arg3, data_1b8a720, 1, data_1b8a734)
                        else if (eax != 0x59)
                            if (eax == 0x5a || eax == 0x5b)
                                eax = arg5
                                
                                if (eax == 1 || eax == 2)
                                    return sub_46dd80(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$", 
                                            &data_1b8a720), 
                                        data_1b8a734, data_1b8a720, arg3, 1, data_1b8a748, 
                                        data_1b8a75c, (data_1b8a770).w, (data_1b8a784).w, 
                                        (data_1b8a798).w, data_1b8a7ac)
                                
                                if (eax == 3)
                                    int32_t eax_33 = sub_466cd0(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", 
                                            &data_1b8a720), 
                                        data_1b8a734, data_1b8a720, arg3, 0xb, 0)
                                    data_715e98 = eax_33
                                    return eax_33
                                
                                if (eax == 4)
                                    char** eax_34
                                    int32_t ecx_67
                                    eax_34, ecx_67 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$", &data_1b8a720)
                                    int32_t var_1c_13 = 0
                                    return sub_48cf80(eax_34, 0xb, ecx_67, 0, data_1b8a720, 
                                        data_1b8a734, arg3)
                                
                                if (eax == 5)
                                    char** eax_36
                                    int32_t ecx_71
                                    eax_36, ecx_71 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$", &data_1b8a720)
                                    int32_t var_1c_14 = 1
                                    int32_t eax_37 = sub_48cf80(eax_36, 0xb, ecx_71, 0, 
                                        data_1b8a720, data_1b8a734, arg3)
                                    sub_445260()
                                    return eax_37
                                
                                if (eax == 6)
                                    return sub_467550(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                            &data_1b8a720), 
                                        data_1b8a734, data_1b8a720, arg3, 0xb, 0, data_1b8a748)
                            else if (eax != 0x5c && (eax == 0x5d || eax == 0x5e))
                                eax = arg5
                                
                                if (eax == 1 || eax == 2)
                                    return sub_46de60(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                            &data_1b8a720), 
                                        data_1b8a734, data_1b8a720, arg3, 1, data_1b8a748)
        case 2
            eax = data_1b8b070
            
            if (eax != 0x50)
                if (eax == 0x51 || eax == 0x52)
                    eax = arg5
                    
                    if (eax == 1 || eax == 2)
                        return sub_46dd30(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$", &data_1b8a720), 
                            arg3, data_1b8a720, 2, data_1b8a734, data_1b8a748, 0, 0, 0, 
                            data_1b8a75c)
                    
                    if (eax == 3)
                        eax_20 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                        int32_t var_1c_27 = 0
                        var_20_4 = 0xc
                        goto label_511638
                    
                    if (eax == 4)
                        int32_t ecx_143 =
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                        int32_t eax_68 = data_1b8a720
                        int32_t var_1c_28 = 0
                        return sub_48cf80(eax_68, 0xc, ecx_143, 0, eax_68, eax_68, arg3)
                    
                    if (eax == 5)
                        int32_t ecx_147 =
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                        int32_t eax_70 = data_1b8a720
                        int32_t var_1c_29 = 1
                        int32_t eax_71 = sub_48cf80(eax_70, 0xc, ecx_147, 0, eax_70, eax_70, arg3)
                        sub_445260()
                        return eax_71
                    
                    if (eax == 6)
                        int32_t var_20_19 = 0
                        return sub_467500(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), 
                            arg3, data_1b8a720, 0xc, 0, data_1b8a734)
                else if (eax != 0x53)
                    if (eax == 0x54 || eax == 0x55)
                        eax = arg5
                        
                        if (eax != 1 && eax != 2)
                            if (eax == 3)
                                int32_t eax_63 = sub_466d80(eax, eax + 9, arg3, 0)
                                data_715e98 = eax_63
                                return eax_63
                            
                            if (eax == 4)
                                int32_t var_14_4 = 0
                                return sub_48cf80(eax, eax + 8, ecx, 0, 0xffffffff, 0xffffffff, 
                                    arg3)
                            
                            if (eax == 5)
                                int32_t var_14_5 = 1
                                int32_t eax_65 =
                                    sub_48cf80(eax, eax + 7, ecx, 0, 0xffffffff, 0xffffffff, arg3)
                                sub_445260()
                                return eax_65
                            
                            if (eax == 6)
                                return sub_4675e0(sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", 
                                    &data_1b8a720), 0xc, arg3, 0, data_1b8a720)
                    else if (eax != 0x56)
                        if (eax == 0x57 || eax == 0x58)
                            eax = arg5
                            
                            if (eax == 1 || eax == 2)
                                return sub_46de10(
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", 
                                        &data_1b8a720), 
                                    arg3, data_1b8a720, 2, data_1b8a734)
                        else if (eax != 0x59)
                            if (eax == 0x5a || eax == 0x5b)
                                eax = arg5
                                
                                if (eax == 1 || eax == 2)
                                    return sub_46dd80(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$", 
                                            &data_1b8a720), 
                                        data_1b8a734, data_1b8a720, arg3, 2, data_1b8a748, 
                                        data_1b8a75c, 0, 0, 0, data_1b8a770)
                                
                                if (eax == 3)
                                    int32_t eax_54 = sub_466cd0(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", 
                                            &data_1b8a720), 
                                        data_1b8a734, data_1b8a720, arg3, 0xc, 0)
                                    data_715e98 = eax_54
                                    return eax_54
                                
                                if (eax == 4)
                                    char** eax_55
                                    int32_t ecx_115
                                    eax_55, ecx_115 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$", &data_1b8a720)
                                    int32_t var_1c_22 = 0
                                    return sub_48cf80(eax_55, 0xc, ecx_115, 0, data_1b8a720, 
                                        data_1b8a734, arg3)
                                
                                if (eax == 5)
                                    char** eax_57
                                    int32_t ecx_119
                                    eax_57, ecx_119 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$", &data_1b8a720)
                                    int32_t var_1c_23 = 1
                                    int32_t eax_58 = sub_48cf80(eax_57, 0xc, ecx_119, 0, 
                                        data_1b8a720, data_1b8a734, arg3)
                                    sub_445260()
                                    return eax_58
                                
                                if (eax == 6)
                                    return sub_467550(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                            &data_1b8a720), 
                                        data_1b8a734, data_1b8a720, arg3, 0xc, 0, data_1b8a748)
                            else if (eax != 0x5c && (eax == 0x5d || eax == 0x5e))
                                eax = arg5
                                
                                if (eax == 1 || eax == 2)
                                    return sub_46de60(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                            &data_1b8a720), 
                                        data_1b8a734, data_1b8a720, arg3, 2, data_1b8a748)
        case 3
            eax = data_1b8b070
            
            if (eax != 0x50)
                if (eax == 0x51 || eax == 0x52)
                    eax = arg5
                    
                    if (eax == 1 || eax == 2)
                        return sub_46dd30(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$", &data_1b8a720), 
                            arg3, data_1b8a720, 3, data_1b8a734, data_1b8a748, (data_1b8a75c).w, 0, 
                            0, data_1b8a770)
                    
                    if (eax == 3)
                        eax_20 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                        int32_t var_1c_36 = 0
                        var_20_4 = 0xd
                        goto label_511638
                    
                    if (eax == 4)
                        int32_t ecx_191 =
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                        int32_t eax_89 = data_1b8a720
                        int32_t var_1c_37 = 0
                        return sub_48cf80(eax_89, 0xd, ecx_191, 0, eax_89, eax_89, arg3)
                    
                    if (eax == 5)
                        int32_t ecx_195 =
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                        int32_t eax_91 = data_1b8a720
                        int32_t var_1c_38 = 1
                        int32_t eax_92 = sub_48cf80(eax_91, 0xd, ecx_195, 0, eax_91, eax_91, arg3)
                        sub_445260()
                        return eax_92
                    
                    if (eax == 6)
                        int32_t var_20_24 = 0
                        return sub_467500(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), 
                            arg3, data_1b8a720, 0xd, 0, data_1b8a734)
                else if (eax != 0x53)
                    if (eax == 0x54 || eax == 0x55)
                        eax = arg5
                        
                        if (eax != 1 && eax != 2)
                            if (eax == 3)
                                int32_t eax_84 = sub_466d80(eax, eax + 0xa, arg3, 0)
                                data_715e98 = eax_84
                                return eax_84
                            
                            if (eax == 4)
                                int32_t var_14_6 = 0
                                return sub_48cf80(eax, eax + 9, ecx, 0, 0xffffffff, 0xffffffff, 
                                    arg3)
                            
                            if (eax == 5)
                                int32_t var_14_7 = 1
                                int32_t eax_86 =
                                    sub_48cf80(eax, eax + 8, ecx, 0, 0xffffffff, 0xffffffff, arg3)
                                sub_445260()
                                return eax_86
                            
                            if (eax == 6)
                                return sub_4675e0(sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", 
                                    &data_1b8a720), 0xd, arg3, 0, data_1b8a720)
                    else if (eax != 0x56)
                        if (eax == 0x57 || eax == 0x58)
                            eax = arg5
                            
                            if (eax == 1 || eax == 2)
                                return sub_46de10(
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", 
                                        &data_1b8a720), 
                                    arg3, data_1b8a720, 3, data_1b8a734)
                        else if (eax != 0x59)
                            if (eax == 0x5a || eax == 0x5b)
                                eax = arg5
                                
                                if (eax == 1 || eax == 2)
                                    return sub_46dd80(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$", 
                                            &data_1b8a720), 
                                        data_1b8a734, data_1b8a720, arg3, 3, data_1b8a748, 
                                        data_1b8a75c, (data_1b8a770).w, 0, 0, data_1b8a784)
                                
                                if (eax == 3)
                                    int32_t eax_75 = sub_466cd0(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", 
                                            &data_1b8a720), 
                                        data_1b8a734, data_1b8a720, arg3, 0xd, 0)
                                    data_715e98 = eax_75
                                    return eax_75
                                
                                if (eax == 4)
                                    char** eax_76
                                    int32_t ecx_163
                                    eax_76, ecx_163 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$", &data_1b8a720)
                                    int32_t var_1c_31 = 0
                                    return sub_48cf80(eax_76, 0xd, ecx_163, 0, data_1b8a720, 
                                        data_1b8a734, arg3)
                                
                                if (eax == 5)
                                    char** eax_78
                                    int32_t ecx_167
                                    eax_78, ecx_167 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$", &data_1b8a720)
                                    int32_t var_1c_32 = 1
                                    int32_t eax_79 = sub_48cf80(eax_78, 0xd, ecx_167, 0, 
                                        data_1b8a720, data_1b8a734, arg3)
                                    sub_445260()
                                    return eax_79
                                
                                if (eax == 6)
                                    return sub_467550(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                            &data_1b8a720), 
                                        data_1b8a734, data_1b8a720, arg3, 0xd, 0, data_1b8a748)
                            else if (eax != 0x5c && (eax == 0x5d || eax == 0x5e))
                                eax = arg5
                                
                                if (eax == 1 || eax == 2)
                                    return sub_46de60(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                            &data_1b8a720), 
                                        data_1b8a734, data_1b8a720, arg3, 3, data_1b8a748)
        case 4
            eax = data_1b8b070
            
            if (eax != 0x50)
                if (eax == 0x51 || eax == 0x52)
                    eax = arg5
                    
                    if (eax == 1 || eax == 2)
                        eax_116 =
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$", &data_1b8a720)
                        var_1c_49 = data_1b8a784
                        var_20_31 = data_1b8a770
                        var_24_35 = data_1b8a75c
                        var_28_30 = 0
                        var_2c_6 = 0
                        goto label_512860
                    
                    if (eax == 3)
                        goto label_51277d
                    
                    if (eax != 4)
                        goto label_5127c6
                    
                    goto label_5127a1
                
                if (eax != 0x53)
                    if (eax == 0x54 || eax == 0x55)
                        eax = arg5
                        
                        if (eax != 1 && eax != 2)
                            if (eax == 3)
                                int32_t eax_107 = sub_466d80(eax, eax + 0xb, arg3, 0)
                                data_715e98 = eax_107
                                return eax_107
                            
                            if (eax == 4)
                                int32_t var_14_8 = 0
                                return sub_48cf80(eax, eax + 0xa, ecx, 0, 0xffffffff, 0xffffffff, 
                                    arg3)
                            
                            if (eax == 5)
                                int32_t var_14_9 = 1
                                int32_t eax_109 =
                                    sub_48cf80(eax, eax + 9, ecx, 0, 0xffffffff, 0xffffffff, arg3)
                                sub_445260()
                                return eax_109
                            
                            if (eax == 6)
                                return sub_4675e0(sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", 
                                    &data_1b8a720), 0xe, arg3, 0, data_1b8a720)
                    else if (eax != 0x56)
                        if (eax == 0x57 || eax == 0x58)
                            eax = arg5
                            
                            if (eax == 1 || eax == 2)
                                return sub_46dfb0(
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", 
                                        &data_1b8a720), 
                                    arg3, data_1b8a720, 0, data_1b8a734)
                        else if (eax != 0x59)
                            if (eax == 0x5a || eax == 0x5b)
                                eax = arg5
                                
                                if (eax == 1 || eax == 2)
                                    eax_103 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$$$$$$", &data_1b8a720)
                                    var_1c_43 = data_1b8a798
                                    var_20_27 = data_1b8a784
                                    var_24_32 = data_1b8a770
                                    var_28_27 = 0
                                    var_2c_5 = 0
                                    goto label_51262e
                                
                                if (eax == 3)
                                    goto label_512526
                                
                                if (eax != 4)
                                    goto label_512578
                                
                                goto label_51254e
                            
                            if (eax != 0x5c && (eax == 0x5d || eax == 0x5e))
                                eax = arg5
                                
                                if (eax == 1 || eax == 2)
                                    return sub_46dff0(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                            &data_1b8a720), 
                                        data_1b8a734, data_1b8a720, arg3, 0, data_1b8a748)
        case 5
            eax = data_1b8b070
            
            if (eax != 0x50)
                if (eax == 0x51 || eax == 0x52)
                    eax = arg5
                    
                    if (eax != 1 && eax != 2)
                        if (eax != 3)
                            if (eax != 4)
                                goto label_512c2e
                            
                            goto label_512c09
                        
                        goto label_512be5
                    
                    return sub_46dee0(
                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$", &data_1b8a720), arg3, 
                        data_1b8a720, 1, data_1b8a734, data_1b8a748, 0, 0, data_1b8a75c, 0, 
                        data_1b8a770)
                
                if (eax != 0x53)
                    if (eax == 0x54 || eax == 0x55)
                        eax = arg5
                        
                        if (eax != 1 && eax != 2)
                            if (eax == 3)
                                int32_t eax_132 = sub_466d80(eax, eax + 0xc, arg3, 0)
                                data_715e98 = eax_132
                                return eax_132
                            
                            if (eax == 4)
                                int32_t var_14_10 = 0
                                return sub_48cf80(eax, eax + 0xb, ecx, 0, 0xffffffff, 0xffffffff, 
                                    arg3)
                            
                            if (eax == 5)
                                int32_t var_14_11 = 1
                                int32_t eax_134 =
                                    sub_48cf80(eax, eax + 0xa, ecx, 0, 0xffffffff, 0xffffffff, arg3)
                                sub_445260()
                                return eax_134
                            
                            if (eax == 6)
                                return sub_4675e0(sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", 
                                    &data_1b8a720), 0xf, arg3, 0, data_1b8a720)
                    else if (eax != 0x56)
                        if (eax == 0x57 || eax == 0x58)
                            eax = arg5
                            
                            if (eax == 1 || eax == 2)
                                return sub_46dfb0(
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", 
                                        &data_1b8a720), 
                                    arg3, data_1b8a720, 1, data_1b8a734)
                        else if (eax != 0x59)
                            if (eax == 0x5a || eax == 0x5b)
                                eax = arg5
                                
                                if (eax == 1 || eax == 2)
                                    return sub_46df30(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$", 
                                            &data_1b8a720), 
                                        data_1b8a734, data_1b8a720, arg3, 1, data_1b8a748, 
                                        data_1b8a75c, 0, 0, data_1b8a770, 0, data_1b8a784)
                                
                                if (eax == 3)
                                    goto label_512992
                                
                                if (eax != 4)
                                    goto label_5129e4
                                
                                goto label_5129ba
                            
                            if (eax != 0x5c && (eax == 0x5d || eax == 0x5e))
                                eax = arg5
                                
                                if (eax == 1 || eax == 2)
                                    return sub_46dff0(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                            &data_1b8a720), 
                                        data_1b8a734, data_1b8a720, arg3, 1, data_1b8a748)
        case 6, 7
            eax = data_1b8b070
            
            if (eax != 0x50)
                if (eax == 0x51 || eax == 0x52)
                    eax = arg5
                    
                    if (eax == 1 || eax == 2)
                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$", &data_1b8a720)
                        int32_t eax_170
                        int32_t ecx_356
                        
                        if (arg4 != 0x4c0)
                            eax_170 = data_1b8a770
                            ecx_356 = data_1b8a75c
                        else
                            int32_t eax_168 = data_1b8a770
                            ecx_356 = data_1b8a75c * 0xa
                            data_1b8a75c = ecx_356
                            eax_170 = eax_168 * 0xa
                            data_1b8a770 = eax_170
                        
                        return sub_46dee0(eax_170, arg3, data_1b8a720, 2, data_1b8a734, 
                            data_1b8a748, 0x3e8, 0x3e8, ecx_356, eax_170, data_1b8a784)
                    
                    if (eax == 3)
                        eax_20 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                        int32_t var_1c_67 = 0
                        var_20_4 = 0x10
                        goto label_511638
                    
                    if (eax == 4)
                        int32_t ecx_345 =
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                        int32_t eax_163 = data_1b8a720
                        int32_t var_1c_68 = 0
                        return sub_48cf80(eax_163, 0x10, ecx_345, 0, eax_163, eax_163, arg3)
                    
                    if (eax == 5)
                        int32_t ecx_349 =
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                        int32_t eax_165 = data_1b8a720
                        int32_t var_1c_69 = 1
                        int32_t eax_166 =
                            sub_48cf80(eax_165, 0x10, ecx_349, 0, eax_165, eax_165, arg3)
                        sub_445260()
                        return eax_166
                    
                    if (eax == 6)
                        int32_t var_20_41 = 0
                        return sub_467500(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), 
                            arg3, data_1b8a720, 0x10, 0, data_1b8a734)
                else if (eax != 0x53)
                    if (eax == 0x54 || eax == 0x55)
                        eax = arg5
                        
                        if (eax != 1 && eax != 2)
                            if (eax == 3)
                                int32_t eax_158 = sub_466d80(eax, eax + 0xd, arg3, 0)
                                data_715e98 = eax_158
                                return eax_158
                            
                            if (eax == 4)
                                int32_t var_14_13 = 0
                                return sub_48cf80(eax, eax + 0xc, ecx, 0, 0xffffffff, 0xffffffff, 
                                    arg3)
                            
                            if (eax == 5)
                                int32_t var_14_14 = 1
                                int32_t eax_160 =
                                    sub_48cf80(eax, eax + 0xb, ecx, 0, 0xffffffff, 0xffffffff, arg3)
                                sub_445260()
                                return eax_160
                            
                            if (eax == 6)
                                return sub_4675e0(sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", 
                                    &data_1b8a720), 0x10, arg3, 0, data_1b8a720)
                    else if (eax != 0x56)
                        if (eax == 0x57 || eax == 0x58)
                            eax = arg5
                            
                            if (eax == 1 || eax == 2)
                                return sub_46dfb0(
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", 
                                        &data_1b8a720), 
                                    arg3, data_1b8a720, 2, data_1b8a734)
                        else if (eax != 0x59)
                            if (eax == 0x5a || eax == 0x5b)
                                eax = arg5
                                
                                if (eax == 1 || eax == 2)
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$", 
                                        &data_1b8a720)
                                    int32_t eax_154
                                    int32_t ecx_326
                                    
                                    if (arg4 != 0x4c0)
                                        eax_154 = data_1b8a784
                                        ecx_326 = data_1b8a770
                                    else
                                        int32_t eax_152 = data_1b8a784
                                        ecx_326 = data_1b8a770 * 0xa
                                        data_1b8a770 = ecx_326
                                        eax_154 = eax_152 * 0xa
                                        data_1b8a784 = eax_154
                                    
                                    return sub_46df30(eax_154, data_1b8a734, data_1b8a720, arg3, 2, 
                                        data_1b8a748, data_1b8a75c, 0x3e8, 0x3e8, ecx_326, eax_154, 
                                        data_1b8a798)
                                
                                if (eax == 3)
                                    int32_t eax_144 = sub_466cd0(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", 
                                            &data_1b8a720), 
                                        data_1b8a734, data_1b8a720, arg3, 0x10, 0)
                                    data_715e98 = eax_144
                                    return eax_144
                                
                                if (eax == 4)
                                    char** eax_145
                                    int32_t ecx_313
                                    eax_145, ecx_313 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$", &data_1b8a720)
                                    int32_t var_1c_61 = 0
                                    return sub_48cf80(eax_145, 0x10, ecx_313, 0, data_1b8a720, 
                                        data_1b8a734, arg3)
                                
                                if (eax == 5)
                                    char** eax_147
                                    int32_t ecx_317
                                    eax_147, ecx_317 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$", &data_1b8a720)
                                    int32_t var_1c_62 = 1
                                    int32_t eax_148 = sub_48cf80(eax_147, 0x10, ecx_317, 0, 
                                        data_1b8a720, data_1b8a734, arg3)
                                    sub_445260()
                                    return eax_148
                                
                                if (eax == 6)
                                    return sub_467550(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                            &data_1b8a720), 
                                        data_1b8a734, data_1b8a720, arg3, 0x10, 0, data_1b8a748)
                            else if (eax != 0x5c && (eax == 0x5d || eax == 0x5e))
                                eax = arg5
                                
                                if (eax == 1 || eax == 2)
                                    return sub_46dff0(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                            &data_1b8a720), 
                                        data_1b8a734, data_1b8a720, arg3, 2, data_1b8a748)
        case 8
            eax = data_1b8b070
            
            if (eax == 0x51 || eax == 0x52)
                eax = arg5
                
                if (eax == 1 || eax == 2)
                    eax_116 =
                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$", &data_1b8a720)
                    var_1c_49 = data_1b8a7ac
                    var_20_31 = data_1b8a798
                    var_24_35 = data_1b8a784
                    var_28_30 = data_1b8a770
                    var_2c_6 = data_1b8a75c
                label_512860:
                    return sub_46dee0(eax_116, arg3, data_1b8a720, 0, data_1b8a734, data_1b8a748, 
                        var_2c_6, var_28_30, var_24_35, var_20_31, var_1c_49)
                
                if (eax == 3)
                label_51277d:
                    eax_20 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                    int32_t var_1c_46 = 0
                    var_20_4 = 0xe
                    goto label_511638
                
                if (eax == 4)
                label_5127a1:
                    int32_t ecx_241 =
                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                    int32_t eax_112 = data_1b8a720
                    int32_t var_1c_47 = 0
                    return sub_48cf80(eax_112, 0xe, ecx_241, 0, eax_112, eax_112, arg3)
                
            label_5127c6:
                
                if (eax == 5)
                    int32_t ecx_245 =
                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                    int32_t eax_114 = data_1b8a720
                    int32_t var_1c_48 = 1
                    int32_t eax_115 = sub_48cf80(eax_114, 0xe, ecx_245, 0, eax_114, eax_114, arg3)
                    sub_445260()
                    return eax_115
                
                if (eax == 6)
                    int32_t var_20_30 = 0
                    return sub_467500(
                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), arg3, 
                        data_1b8a720, 0xe, 0, data_1b8a734)
            else if (eax == 0x5a || eax == 0x5b)
                eax = arg5
                
                if (eax == 1 || eax == 2)
                    eax_103 =
                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$", &data_1b8a720)
                    var_1c_43 = data_1b8a7c0
                    var_20_27 = data_1b8a7ac
                    var_24_32 = data_1b8a798
                    var_28_27 = data_1b8a784
                    var_2c_5 = data_1b8a770
                label_51262e:
                    return sub_46df30(eax_103, data_1b8a734, data_1b8a720, arg3, 0, data_1b8a748, 
                        data_1b8a75c, var_2c_5, var_28_27, var_24_32, var_20_27, var_1c_43)
                
                if (eax == 3)
                label_512526:
                    int32_t eax_96 = sub_466cd0(
                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), 
                        data_1b8a734, data_1b8a720, arg3, 0xe, 0)
                    data_715e98 = eax_96
                    return eax_96
                
                if (eax == 4)
                label_51254e:
                    char** eax_97
                    int32_t ecx_211
                    eax_97, ecx_211 =
                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                    int32_t var_1c_40 = 0
                    return sub_48cf80(eax_97, 0xe, ecx_211, 0, data_1b8a720, data_1b8a734, arg3)
                
            label_512578:
                
                if (eax == 5)
                    char** eax_99
                    int32_t ecx_215
                    eax_99, ecx_215 =
                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                    int32_t var_1c_41 = 1
                    int32_t eax_100 =
                        sub_48cf80(eax_99, 0xe, ecx_215, 0, data_1b8a720, data_1b8a734, arg3)
                    sub_445260()
                    return eax_100
                
                if (eax == 6)
                    return sub_467550(
                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720), 
                        data_1b8a734, data_1b8a720, arg3, 0xe, 0, data_1b8a748)
        case 9
            eax = data_1b8b070
            
            if (eax == 0x51 || eax == 0x52)
                eax = arg5
                
                if (eax == 1 || eax == 2)
                    return sub_46dee0(
                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$", &data_1b8a720), 
                        arg3, data_1b8a720, 1, data_1b8a734, data_1b8a748, data_1b8a75c, 0, 
                        data_1b8a770, 0, data_1b8a784)
                
                if (eax == 3)
                label_512be5:
                    eax_20 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                    int32_t var_1c_57 = 0
                    var_20_4 = 0xf
                    goto label_511638
                
                if (eax == 4)
                label_512c09:
                    int32_t ecx_293 =
                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                    int32_t eax_137 = data_1b8a720
                    int32_t var_1c_58 = 0
                    return sub_48cf80(eax_137, 0xf, ecx_293, 0, eax_137, eax_137, arg3)
                
            label_512c2e:
                
                if (eax == 5)
                    int32_t ecx_297 =
                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                    int32_t eax_139 = data_1b8a720
                    int32_t var_1c_59 = 1
                    int32_t eax_140 = sub_48cf80(eax_139, 0xf, ecx_297, 0, eax_139, eax_139, arg3)
                    sub_445260()
                    return eax_140
                
                if (eax == 6)
                    int32_t var_20_36 = 0
                    return sub_467500(
                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), arg3, 
                        data_1b8a720, 0xf, 0, data_1b8a734)
            else if (eax == 0x5a || eax == 0x5b)
                eax = arg5
                
                if (eax == 1 || eax == 2)
                    return sub_46df30(
                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$", &data_1b8a720), 
                        data_1b8a734, data_1b8a720, arg3, 1, data_1b8a748, data_1b8a75c, 
                        data_1b8a770, 0, data_1b8a784, 0, data_1b8a798)
                
                if (eax == 3)
                label_512992:
                    int32_t eax_121 = sub_466cd0(
                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), 
                        data_1b8a734, data_1b8a720, arg3, 0xf, 0)
                    data_715e98 = eax_121
                    return eax_121
                
                if (eax == 4)
                label_5129ba:
                    char** eax_122
                    int32_t ecx_263
                    eax_122, ecx_263 =
                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                    int32_t var_1c_51 = 0
                    return sub_48cf80(eax_122, 0xf, ecx_263, 0, data_1b8a720, data_1b8a734, arg3)
                
            label_5129e4:
                
                if (eax == 5)
                    char** eax_124
                    int32_t ecx_267
                    eax_124, ecx_267 =
                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                    int32_t var_1c_52 = 1
                    int32_t eax_125 =
                        sub_48cf80(eax_124, 0xf, ecx_267, 0, data_1b8a720, data_1b8a734, arg3)
                    sub_445260()
                    return eax_125
                
                if (eax == 6)
                    return sub_467550(
                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720), 
                        data_1b8a734, data_1b8a720, arg3, 0xf, 0, data_1b8a748)
return eax
