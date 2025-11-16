// 函数: sub_508c00
// 地址: 0x508c00
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_1 = arg4 - 0x406
int32_t var_30_10
int32_t var_24_7
char** eax_58
int32_t eax_59
int32_t ecx

if (eax_1 u> 9)
    data_1b8b06c = 1
else
    switch (eax_1)
        case 0
            eax_1 = data_1b8b070
            
            if (eax_1 != 0x50)
                if (eax_1 == 0x51 || eax_1 == 0x52)
                    return sub_4698b0(
                        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), arg3, 
                        data_1b8a720, data_1b8a734)
                
                if (eax_1 != 0x53)
                    if (eax_1 == 0x54 || eax_1 == 0x55)
                        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                        int32_t ecx_6 = data_1b8a720
                        int32_t eax_4 = 0
                        
                        if (ecx_6 s>= 0 && ecx_6 s< data_7031bc)
                            eax_4 = *((arg3 + (ecx_6 << 1)) * 0x650 + 0x72d850)
                        
                        data_715e98 = eax_4
                        return eax_4
                    
                    if (eax_1 != 0x56 && eax_1 != 0x57 && eax_1 != 0x58 && eax_1 != 0x59
                            && (eax_1 == 0x5a || eax_1 == 0x5b))
                        return sub_4698e0(
                            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720), 
                            data_1b8a734, data_1b8a720, arg3, data_1b8a748)
        case 1
            eax_1 = data_1b8b070
            
            if (eax_1 != 0x50)
                if (eax_1 == 0x51 || eax_1 == 0x52)
                    int32_t eax_22 = sub_46c780(
                        sub_46c620(
                            sub_46c570(
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$$$$$$$$", 
                                    &data_1b8a720), 
                                arg3, data_1b8a720, 0), 
                            arg3, data_1b8a720, data_1b8a734), 
                        arg3, data_1b8a720, data_1b8a748, data_1b8a75c, data_1b8a770, data_1b8a784)
                    int32_t eax_25 = sub_46cb60(
                        sub_46ca90(
                            sub_46c9c0(eax_22, arg3, data_1b8a720, data_1b8a798, data_1b8a7ac, 
                                data_1b8a7c0), 
                            arg3, data_1b8a720, 0, 0xff, 0, 0, 0), 
                        arg3, data_1b8a720, data_1b8a7d4, data_1b8a7e8, data_1b8a7fc)
                    sub_46c870(eax_25, arg3, data_1b8a720, data_1b8a810, data_1b8a824, 
                        data_1b8a838, data_1b8a84c)
                    return sub_46ce60(data_1b8a720, arg3)
                
                if (eax_1 != 0x53 && eax_1 != 0x54 && eax_1 != 0x55 && eax_1 != 0x56
                        && eax_1 != 0x57 && eax_1 != 0x58 && eax_1 != 0x59
                        && (eax_1 == 0x5a || eax_1 == 0x5b))
                    int32_t* eax_13 = sub_46c7e0(
                        sub_46c6b0(
                            sub_46c5b0(
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$$$$$$$$$", 
                                    &data_1b8a720), 
                                data_1b8a734, data_1b8a720, arg3, 0), 
                            data_1b8a734, data_1b8a720, arg3, data_1b8a748), 
                        data_1b8a734, data_1b8a720, arg3, data_1b8a75c, data_1b8a770, data_1b8a784, 
                        data_1b8a798)
                    int32_t* eax_16 = sub_46cbb0(
                        sub_46cae0(
                            sub_46ca10(eax_13, data_1b8a734, data_1b8a720, arg3, data_1b8a7ac, 
                                data_1b8a7c0, data_1b8a7d4), 
                            data_1b8a734, data_1b8a720, arg3, 0, 0xff, 0, 0, 0), 
                        data_1b8a734, data_1b8a720, arg3, data_1b8a7e8, data_1b8a7fc, data_1b8a810)
                    return sub_46cec0(
                        sub_46c900(eax_16, data_1b8a734, data_1b8a720, arg3, data_1b8a824, 
                            data_1b8a838, data_1b8a84c, data_1b8a860), 
                        data_1b8a734, data_1b8a720, arg3)
        case 2
            eax_1 = data_1b8b070
            
            if (eax_1 != 0x50)
                if (eax_1 == 0x51 || eax_1 == 0x52)
                    return sub_46bc10(
                        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), arg3, 
                        data_1b8a720, data_1b8a734)
                
                if (eax_1 != 0x53)
                    if (eax_1 == 0x54 || eax_1 == 0x55)
                        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                        int32_t ecx_35 = data_1b8a720
                        int32_t eax_29 = 0
                        
                        if (ecx_35 s>= 0 && ecx_35 s< data_7031bc)
                            eax_29 = *((arg3 + (ecx_35 << 1)) * 0x650 + 0x72d858)
                        
                        data_715e98 = eax_29
                        return eax_29
                    
                    if (eax_1 != 0x56 && eax_1 != 0x57 && eax_1 != 0x58 && eax_1 != 0x59
                            && (eax_1 == 0x5a || eax_1 == 0x5b))
                        return sub_46bc50(
                            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720), 
                            data_1b8a734, data_1b8a720, arg3, data_1b8a748)
        case 3
            eax_1 = data_1b8b070
            
            if (eax_1 != 0x50)
                if (eax_1 == 0x51 || eax_1 == 0x52)
                    return sub_46b6a0(
                        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), arg3, 
                        data_1b8a720, data_1b8a734)
                
                if (eax_1 != 0x53)
                    if (eax_1 == 0x54 || eax_1 == 0x55)
                        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                        int32_t ecx_44 = data_1b8a720
                        int32_t eax_37 = 0
                        
                        if (ecx_44 s>= 0 && ecx_44 s< data_7031bc)
                            eax_37 = *((arg3 + (ecx_44 << 1)) * 0x650 + 0x72d86c)
                        
                        data_715e98 = eax_37
                        return eax_37
                    
                    if (eax_1 != 0x56 && eax_1 != 0x57 && eax_1 != 0x58 && eax_1 != 0x59
                            && (eax_1 == 0x5a || eax_1 == 0x5b))
                        return sub_46b6d0(
                            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720), 
                            data_1b8a734, data_1b8a720, arg3, data_1b8a748)
        case 4
            eax_1 = data_1b8b070
            
            if (eax_1 != 0x50)
                if (eax_1 == 0x51 || eax_1 == 0x52)
                    eax_1 = arg5
                    
                    if (eax_1 == 1 || eax_1 == 2)
                        int32_t var_24_10 = 1
                        return sub_502030(eax_1, arg2, ecx, arg3)
                    
                    if (eax_1 == 3)
                    label_509489:
                        eax_58 = sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                        int32_t var_2c_15 = 0
                        var_30_10 = 0x70
                        goto label_50949b
                    
                    if (eax_1 == 4)
                    label_5094c3:
                        int32_t ecx_69 =
                            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                        int32_t eax_60 = data_1b8a720
                        int32_t var_2c_16 = 0
                        return sub_48cf80(eax_60, 0x70, ecx_69, 0, eax_60, eax_60, arg3)
                    
                label_5094e8:
                    
                    if (eax_1 == 5)
                        int32_t ecx_72 =
                            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                        int32_t eax_62 = data_1b8a720
                        int32_t var_2c_17 = 1
                        int32_t eax_63 = sub_48cf80(eax_62, 0x70, ecx_72, 0, eax_62, eax_62, arg3)
                        sub_445260()
                        return eax_63
                    
                    if (eax_1 == 6)
                        int32_t var_30_13 = 0
                        return sub_467500(
                            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), 
                            arg3, data_1b8a720, 0x70, 0, data_1b8a734)
                else if (eax_1 != 0x53)
                    if (eax_1 == 0x54 || eax_1 == 0x55)
                        eax_1 = arg5
                        
                        if (eax_1 == 1 || eax_1 == 2)
                            int32_t var_24_9 = 1
                            return sub_5021a0(eax_1, arg2, ecx, arg3)
                        
                        if (eax_1 == 3)
                        label_5093b7:
                            int32_t eax_52 = sub_466d80(eax_1, 0x70, arg3, 0)
                            data_715e98 = eax_52
                            return eax_52
                        
                        if (eax_1 == 4)
                            var_24_7 = 0
                            return sub_48cf80(eax_1, 0x70, ecx, 0, 0xffffffff, 0xffffffff, arg3)
                        
                    label_5093eb:
                        
                        if (eax_1 == 5)
                            int32_t var_24_8 = 1
                            int32_t eax_54 = sub_48cf80(eax_1, eax_1 + 0x6b, ecx, 0, 0xffffffff, 
                                0xffffffff, arg3)
                            sub_445260()
                            return eax_54
                        
                        if (eax_1 == 6)
                            return sub_4675e0(sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), $", 
                                &data_1b8a720), 0x70, arg3, 0, data_1b8a720)
                    else if (eax_1 != 0x56 && eax_1 != 0x57 && eax_1 != 0x58 && eax_1 != 0x59
                            && (eax_1 == 0x5a || eax_1 == 0x5b))
                        eax_1 = arg5
                        
                        if (eax_1 == 1 || eax_1 == 2)
                            int32_t var_24_6 = 1
                            return sub_5022d0(eax_1, arg2, ecx, arg3)
                        
                        if (eax_1 == 3)
                        label_5092a5:
                            int32_t eax_44 = sub_466cd0(
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", 
                                    &data_1b8a720), 
                                data_1b8a734, data_1b8a720, arg3, 0x70, 0)
                            data_715e98 = eax_44
                            return eax_44
                        
                        if (eax_1 == 4)
                        label_5092cd:
                            char** eax_45
                            int32_t ecx_53
                            eax_45, ecx_53 =
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                            int32_t var_2c_11 = 0
                            return sub_48cf80(eax_45, 0x70, ecx_53, 0, data_1b8a720, data_1b8a734, 
                                arg3)
                        
                    label_5092f7:
                        
                        if (eax_1 == 5)
                            char** eax_47
                            int32_t ecx_56
                            eax_47, ecx_56 =
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                            int32_t var_2c_12 = 1
                            int32_t eax_48 = sub_48cf80(eax_47, 0x70, ecx_56, 0, data_1b8a720, 
                                data_1b8a734, arg3)
                            sub_445260()
                            return eax_48
                        
                        if (eax_1 == 6)
                            return sub_467550(
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                    &data_1b8a720), 
                                data_1b8a734, data_1b8a720, arg3, 0x70, 0, data_1b8a748)
        case 5
            eax_1 = data_1b8b070
            
            if (eax_1 != 0x50)
                if (eax_1 == 0x51 || eax_1 == 0x52)
                    eax_1 = arg5
                    
                    if (eax_1 == 1 || eax_1 == 2)
                        int32_t var_24_13 = 0
                        return sub_502030(eax_1, arg2, ecx, arg3)
                    
                    if (eax_1 == 3)
                        goto label_509489
                    
                    if (eax_1 == 4)
                        goto label_5094c3
                    
                    goto label_5094e8
                
                if (eax_1 != 0x53)
                    if (eax_1 == 0x54 || eax_1 == 0x55)
                        eax_1 = arg5
                        
                        if (eax_1 == 1 || eax_1 == 2)
                            int32_t var_24_12 = 0
                            return sub_5021a0(eax_1, arg2, ecx, arg3)
                        
                        if (eax_1 == 3)
                            goto label_5093b7
                        
                        if (eax_1 != 4)
                            goto label_5093eb
                        
                        var_24_7 = 0
                        return sub_48cf80(eax_1, 0x70, ecx, 0, 0xffffffff, 0xffffffff, arg3)
                    
                    if (eax_1 != 0x56 && eax_1 != 0x57 && eax_1 != 0x58 && eax_1 != 0x59
                            && (eax_1 == 0x5a || eax_1 == 0x5b))
                        eax_1 = arg5
                        
                        if (eax_1 == 1 || eax_1 == 2)
                            int32_t var_24_11 = 0
                            return sub_5022d0(eax_1, arg2, ecx, arg3)
                        
                        if (eax_1 == 3)
                            goto label_5092a5
                        
                        if (eax_1 == 4)
                            goto label_5092cd
                        
                        goto label_5092f7
        case 6
            eax_1 = data_1b8b070
            
            if (eax_1 != 0x50)
                if (eax_1 == 0x51 || eax_1 == 0x52)
                    eax_1 = arg5
                    
                    if (eax_1 == 1 || eax_1 == 2)
                        int32_t eax_99 = data_1af4e84
                        char** eax_101
                        
                        if (eax_99 == 0)
                            eax_101 =
                                sub_4ef190(eax_99, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                            data_1b8a770 = 0
                            data_1b8a75c = 0
                            data_1b8a748 = 0
                        else
                            eax_101 = eax_99 - 1
                            
                            if (eax_99 == 1)
                                eax_101 = sub_4ef190(eax_101, arg2 + 0x20, *(arg2 + 0x20), "$$$$$", 
                                    &data_1b8a720)
                        
                        return sub_469530(eax_101, arg3, data_1b8a720, data_1b8a734, data_1b8a748, 
                            data_1b8a75c, (data_1b8a770).b)
                    
                    if (eax_1 == 3)
                        eax_58 = sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                        int32_t var_2c_26 = 0
                        var_30_10 = 0x66
                    label_50949b:
                        eax_59 = sub_466c70(eax_58, arg3, data_1b8a720, var_30_10, 0)
                        data_715e98 = eax_59
                        return eax_59
                    
                    if (eax_1 == 4)
                        int32_t ecx_110 =
                            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                        int32_t eax_95 = data_1b8a720
                        int32_t var_2c_27 = 0
                        return sub_48cf80(eax_95, 0x66, ecx_110, 0, eax_95, eax_95, arg3)
                    
                    if (eax_1 == 5)
                        int32_t ecx_113 =
                            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                        int32_t eax_97 = data_1b8a720
                        int32_t var_2c_28 = 1
                        int32_t eax_98 = sub_48cf80(eax_97, 0x66, ecx_113, 0, eax_97, eax_97, arg3)
                        sub_445260()
                        return eax_98
                    
                    if (eax_1 == 6)
                        int32_t var_30_20 = 0
                        return sub_467500(
                            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), 
                            arg3, data_1b8a720, 0x66, 0, data_1b8a734)
                else if (eax_1 != 0x53)
                    if (eax_1 == 0x54 || eax_1 == 0x55)
                        eax_1 = arg5
                        
                        if (eax_1 == 1 || eax_1 == 2)
                            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                            int32_t ecx_105 = data_1b8a720
                            eax_59 = 0
                            
                            if (ecx_105 s< 0 || ecx_105 s>= data_7031bc)
                                data_715e98 = eax_59
                                return eax_59
                            
                            int32_t eax_94 = *((arg3 + (ecx_105 << 1)) * 0x650 + 0x72d854)
                            data_715e98 = eax_94
                            return eax_94
                        
                        if (eax_1 == 3)
                            int32_t eax_86 = sub_466d80(eax_1, eax_1 + 0x63, arg3, 0)
                            data_715e98 = eax_86
                            return eax_86
                        
                        if (eax_1 == 4)
                            int32_t var_24_15 = 0
                            return sub_48cf80(eax_1, eax_1 + 0x62, ecx, 0, 0xffffffff, 0xffffffff, 
                                arg3)
                        
                        if (eax_1 == 5)
                            int32_t var_24_16 = 1
                            int32_t eax_88 = sub_48cf80(eax_1, eax_1 + 0x61, ecx, 0, 0xffffffff, 
                                0xffffffff, arg3)
                            sub_445260()
                            return eax_88
                        
                        if (eax_1 == 6)
                            return sub_4675e0(sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), $", 
                                &data_1b8a720), 0x66, arg3, 0, data_1b8a720)
                    else if (eax_1 != 0x56)
                        if (eax_1 == 0x57 || eax_1 == 0x58)
                            return sub_4694b0(
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", 
                                    &data_1b8a720), 
                                arg3, data_1b8a720, data_1b8a734)
                        
                        if (eax_1 != 0x59)
                            if (eax_1 == 0x5a || eax_1 == 0x5b)
                                eax_1 = arg5
                                
                                if (eax_1 == 1 || eax_1 == 2)
                                    int32_t eax_80 = data_1af4e84
                                    char** eax_82
                                    
                                    if (eax_80 == 0)
                                        eax_82 = sub_4ef190(eax_80, arg2 + 0x20, *(arg2 + 0x20), 
                                            "$$$", &data_1b8a720)
                                        data_1b8a784 = 0
                                        data_1b8a770 = 0
                                        data_1b8a75c = 0
                                    else
                                        eax_82 = eax_80 - 1
                                        
                                        if (eax_80 == 1)
                                            eax_82 = sub_4ef190(eax_82, arg2 + 0x20, 
                                                *(arg2 + 0x20), "$$$$$$", &data_1b8a720)
                                    
                                    return sub_469590(eax_82, data_1b8a734, data_1b8a720, arg3, 
                                        data_1b8a748, data_1b8a75c, data_1b8a770, (data_1b8a784).b)
                                
                                if (eax_1 == 3)
                                    int32_t eax_73 = sub_466cd0(
                                        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", 
                                            &data_1b8a720), 
                                        data_1b8a734, data_1b8a720, arg3, 0x66, 0)
                                    data_715e98 = eax_73
                                    return eax_73
                                
                                if (eax_1 == 4)
                                    char** eax_74
                                    int32_t ecx_84
                                    eax_74, ecx_84 = sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$", &data_1b8a720)
                                    int32_t var_2c_20 = 0
                                    return sub_48cf80(eax_74, 0x66, ecx_84, 0, data_1b8a720, 
                                        data_1b8a734, arg3)
                                
                                if (eax_1 == 5)
                                    char** eax_76
                                    int32_t ecx_87
                                    eax_76, ecx_87 = sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$", &data_1b8a720)
                                    int32_t var_2c_21 = 1
                                    int32_t eax_77 = sub_48cf80(eax_76, 0x66, ecx_87, 0, 
                                        data_1b8a720, data_1b8a734, arg3)
                                    sub_445260()
                                    return eax_77
                                
                                if (eax_1 == 6)
                                    return sub_467550(
                                        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                            &data_1b8a720), 
                                        data_1b8a734, data_1b8a720, arg3, 0x66, 0, data_1b8a748)
                            else if (eax_1 != 0x5c && (eax_1 == 0x5d || eax_1 == 0x5e))
                                return sub_4694e0(
                                    sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                        &data_1b8a720), 
                                    data_1b8a734, data_1b8a720, arg3, data_1b8a748)
        case 7
            eax_1 = data_1b8b070
            
            if (eax_1 != 0x50)
                if (eax_1 == 0x51 || eax_1 == 0x52)
                    return sub_46cf70(
                        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), arg3, 
                        data_1b8a720, data_1b8a734)
                
                if (eax_1 != 0x53)
                    if (eax_1 == 0x54 || eax_1 == 0x55)
                        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                        int32_t ecx_126 = data_1b8a720
                        eax_59 = 0
                        
                        if (ecx_126 s< 0 || ecx_126 s>= data_7031bc)
                            data_715e98 = eax_59
                            return eax_59
                        
                        int32_t eax_108 = *((arg3 + (ecx_126 << 1)) * 0x650 + 0x72d76c)
                        data_715e98 = eax_108
                        return eax_108
                    
                    if (eax_1 != 0x56 && eax_1 != 0x57 && eax_1 != 0x58 && eax_1 != 0x59
                            && (eax_1 == 0x5a || eax_1 == 0x5b))
                        return sub_46cfb0(
                            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720), 
                            data_1b8a734, data_1b8a720, arg3, data_1b8a748)
        case 8
            eax_1 = data_1b8b070
            
            if (eax_1 != 0x50)
                if (eax_1 == 0x51 || eax_1 == 0x52)
                    return sub_46d020(
                        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$", &data_1b8a720), 
                        arg3, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c, data_1b8a770, 
                        data_1b8a784)
                
                if (eax_1 != 0x53)
                    if (eax_1 == 0x54 || eax_1 == 0x55)
                        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$%%%%%", &data_1b8a720)
                        int32_t* var_18
                        int32_t var_14
                        int32_t var_10
                        int32_t var_c
                        int32_t eax_116 = sub_4e8000(
                            sub_4e8000(
                                sub_46d160(&arg4, arg3, data_1b8a720, &arg4, &var_c, &var_10, 
                                    &var_14, &var_18), 
                                data_1b8a744, data_1b8a740, arg4, &data_704898), 
                            data_1b8a758, data_1b8a754, var_c, &data_704898)
                        return sub_4e8000(
                            sub_4e8000(
                                sub_4e8000(eax_116, data_1b8a76c, data_1b8a768, var_10, 
                                    &data_704898), 
                                data_1b8a780, data_1b8a77c, var_14, &data_704898), 
                            data_1b8a794, data_1b8a790, var_18, &data_704898)
                    
                    if (eax_1 != 0x56 && eax_1 != 0x57 && eax_1 != 0x58 && eax_1 != 0x59
                            && (eax_1 == 0x5a || eax_1 == 0x5b))
                        return sub_46d0a0(
                            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$", 
                                &data_1b8a720), 
                            data_1b8a734, data_1b8a720, arg3, data_1b8a748, data_1b8a75c, 
                            data_1b8a770, data_1b8a784, data_1b8a798)
        case 9
            eax_1 = data_1b8b070
            
            if (eax_1 != 0x50)
                if (eax_1 == 0x51 || eax_1 == 0x52)
                    return sub_468600(
                        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), arg3, 
                        data_1b8a720, data_1b8a734)
                
                if (eax_1 != 0x53)
                    if (eax_1 == 0x54 || eax_1 == 0x55)
                        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                        int32_t ecx_149 = data_1b8a720
                        eax_59 = 0xffffffff
                        
                        if (ecx_149 s< 0 || ecx_149 s>= data_7031bc)
                            data_715e98 = eax_59
                            return eax_59
                        
                        int32_t eax_127 = *((arg3 + (ecx_149 << 1)) * 0x650 + &data_72d7fc)
                        data_715e98 = eax_127
                        return eax_127
                    
                    if (eax_1 != 0x56 && eax_1 != 0x57 && eax_1 != 0x58 && eax_1 != 0x59
                            && (eax_1 == 0x5a || eax_1 == 0x5b))
                        return sub_4686f0(
                            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720), 
                            data_1b8a734, data_1b8a720, arg3, data_1b8a748)
return eax_1
