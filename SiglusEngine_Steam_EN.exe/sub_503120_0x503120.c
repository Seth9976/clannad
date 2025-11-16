// 函数: sub_503120
// 地址: 0x503120
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_1 = arg4 - 0x3e8
int32_t var_20_7
int32_t var_1c_8
int32_t var_14_1
char** eax_29
int32_t eax_30
int32_t ecx

if (eax_1 u> 9)
    data_1b8b06c = 1
else
    switch (eax_1)
        case 0
            eax_1 = data_1b8b070
            
            if (eax_1 != 0x50)
                if (eax_1 == 0x51 || eax_1 == 0x52)
                    eax_1 = arg5
                    
                    if (eax_1 == 1 || eax_1 == 2)
                        int32_t eax_37 = data_1af4e84
                        char** eax_39
                        
                        if (eax_37 == 0)
                            eax_39 = sub_4ef190(eax_37, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                &data_1b8a720)
                            data_1b8a784 = 0
                            data_1b8a770 = 0
                            data_1b8a75c = 0
                        else
                            eax_39 = eax_37 - 1
                            
                            if (eax_37 == 1)
                                eax_39 = sub_4ef190(eax_39, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$", 
                                    &data_1b8a720)
                        
                        return sub_468860(eax_39, arg3, data_1b8a720, data_1b8a734, data_1b8a748, 
                            data_1b8a75c, data_1b8a770, (data_1b8a784).b)
                    
                    if (eax_1 == 3)
                    label_50354a:
                        eax_29 = sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                        var_1c_8 = 0
                        var_20_7 = 0x64
                        goto label_50355c
                    
                label_50356e:
                    
                    if (eax_1 != 4)
                        goto label_5035a9
                    
                    goto label_503584
                
                if (eax_1 != 0x53)
                    if (eax_1 == 0x54 || eax_1 == 0x55)
                        eax_1 = arg5
                        
                        if (eax_1 == 1 || eax_1 == 2)
                            char** eax_23 =
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$%%", &data_1b8a720)
                            int32_t ecx_30 = data_1b8a720
                            int32_t edx_16 = 0
                            int32_t esi = 0
                            
                            if (ecx_30 s>= 0 && ecx_30 s< data_7031bc)
                                eax_23 = (arg3 + (ecx_30 << 1)) * 0x650 + &data_72d7fc
                                edx_16 = eax_23[1]
                                esi = eax_23[2]
                            
                            return sub_4e8000(
                                sub_4e8000(eax_23, data_1b8a744, data_1b8a740, edx_16, 
                                    &data_704898), 
                                data_1b8a758, data_1b8a754, esi, &data_704898)
                        
                        if (eax_1 == 3)
                        label_50340e:
                            int32_t eax_18 = sub_466d80(eax_1, 0x64, arg3, 0)
                            data_715e98 = eax_18
                            return eax_18
                        
                    label_503420:
                        
                        if (eax_1 != 4)
                            goto label_503442
                        
                        var_14_1 = 0
                        return sub_48cf80(eax_1, 0x64, ecx, 0, 0xffffffff, 0xffffffff, arg3)
                    
                    if (eax_1 != 0x56)
                        if (eax_1 == 0x57 || eax_1 == 0x58)
                            return sub_4687d0(
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                    &data_1b8a720), 
                                arg3, data_1b8a720, data_1b8a734, data_1b8a748)
                        
                        if (eax_1 != 0x59)
                            if (eax_1 == 0x5a || eax_1 == 0x5b)
                                eax_1 = arg5
                                
                                if (eax_1 == 1 || eax_1 == 2)
                                    int32_t eax_12 = data_1af4e84
                                    char** eax_14
                                    
                                    if (eax_12 == 0)
                                        eax_14 = sub_4ef190(eax_12, arg2 + 0x20, *(arg2 + 0x20), 
                                            "$$$$", &data_1b8a720)
                                        data_1b8a798 = 0
                                        data_1b8a784 = 0
                                        data_1b8a770 = 0
                                    else
                                        eax_14 = eax_12 - 1
                                        
                                        if (eax_12 == 1)
                                            eax_14 = sub_4ef190(eax_14, arg2 + 0x20, 
                                                *(arg2 + 0x20), "$$$$$$$", &data_1b8a720)
                                    
                                    return sub_4688d0(eax_14, data_1b8a734, data_1b8a720, arg3, 
                                        data_1b8a748, data_1b8a75c, data_1b8a770, data_1b8a784, 
                                        (data_1b8a798).b)
                                
                                if (eax_1 == 3)
                                label_503240:
                                    int32_t eax_5 = sub_466cd0(
                                        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", 
                                            &data_1b8a720), 
                                        data_1b8a734, data_1b8a720, arg3, 0x64, 0)
                                    data_715e98 = eax_5
                                    return eax_5
                                
                            label_503252:
                                
                                if (eax_1 != 4)
                                    goto label_503292
                                
                                goto label_503268
                            
                            if (eax_1 != 0x5c && (eax_1 == 0x5d || eax_1 == 0x5e))
                                return sub_468800(
                                    sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$$", 
                                        &data_1b8a720), 
                                    data_1b8a734, data_1b8a720, arg3, data_1b8a748, data_1b8a75c)
        case 1
            eax_1 = data_1b8b070
            
            if (eax_1 != 0x50)
                if (eax_1 == 0x51 || eax_1 == 0x52)
                    eax_1 = arg5
                    
                    if (eax_1 == 1 || eax_1 == 2)
                        int32_t eax_53 = data_1af4e84
                        char** eax_55
                        
                        if (eax_53 == 0)
                            eax_55 =
                                sub_4ef190(eax_53, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                            data_1b8a770 = 0
                            data_1b8a75c = 0
                            data_1b8a748 = 0
                        else
                            eax_55 = eax_53 - 1
                            
                            if (eax_53 == 1)
                                eax_55 = sub_4ef190(eax_55, arg2 + 0x20, *(arg2 + 0x20), "$$$$$", 
                                    &data_1b8a720)
                        
                        return sub_4689f0(eax_55, arg3, data_1b8a720, data_1b8a734, data_1b8a748, 
                            data_1b8a75c, (data_1b8a770).b)
                    
                    if (eax_1 == 3)
                        goto label_50354a
                    
                    if (eax_1 == 4)
                    label_503584:
                        int32_t ecx_38 =
                            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                        int32_t eax_31 = data_1b8a720
                        int32_t var_1c_9 = 0
                        return sub_48cf80(eax_31, 0x64, ecx_38, 0, eax_31, eax_31, arg3)
                    
                label_5035a9:
                    
                    if (eax_1 == 5)
                        int32_t ecx_41 =
                            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                        int32_t eax_33 = data_1b8a720
                        int32_t var_1c_10 = 1
                        int32_t eax_34 = sub_48cf80(eax_33, 0x64, ecx_41, 0, eax_33, eax_33, arg3)
                        sub_445260()
                        return eax_34
                    
                    if (eax_1 == 6)
                        return sub_467500(
                            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), 
                            arg3, data_1b8a720, 0x64, 0, data_1b8a734)
                else if (eax_1 != 0x53)
                    if (eax_1 == 0x54 || eax_1 == 0x55)
                        eax_1 = arg5
                        
                        if (eax_1 == 1 || eax_1 == 2)
                            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                            int32_t ecx_63 = data_1b8a720
                            int32_t eax_49 = 0
                            
                            if (ecx_63 s>= 0 && ecx_63 s< data_7031bc)
                                eax_49 = *((arg3 + (ecx_63 << 1)) * 0x650 + 0x72d800)
                            
                            data_715e98 = eax_49
                            return eax_49
                        
                        if (eax_1 == 3)
                            goto label_50340e
                        
                        if (eax_1 == 4)
                            var_14_1 = 0
                            return sub_48cf80(eax_1, 0x64, ecx, 0, 0xffffffff, 0xffffffff, arg3)
                        
                    label_503442:
                        
                        if (eax_1 == 5)
                            int32_t var_14_2 = 1
                            int32_t eax_20 = sub_48cf80(eax_1, eax_1 + 0x5f, ecx, 0, 0xffffffff, 
                                0xffffffff, arg3)
                            sub_445260()
                            return eax_20
                        
                        if (eax_1 == 6)
                            return sub_4675e0(sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), $", 
                                &data_1b8a720), 0x64, arg3, 0, data_1b8a720)
                    else if (eax_1 != 0x56)
                        if (eax_1 == 0x57 || eax_1 == 0x58)
                            return sub_468970(
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", 
                                    &data_1b8a720), 
                                arg3, data_1b8a720, data_1b8a734)
                        
                        if (eax_1 != 0x59)
                            if (eax_1 == 0x5a || eax_1 == 0x5b)
                                eax_1 = arg5
                                
                                if (eax_1 == 1 || eax_1 == 2)
                                    int32_t eax_43 = data_1af4e84
                                    char** eax_45
                                    
                                    if (eax_43 == 0)
                                        eax_45 = sub_4ef190(eax_43, arg2 + 0x20, *(arg2 + 0x20), 
                                            "$$$", &data_1b8a720)
                                        data_1b8a784 = 0
                                        data_1b8a770 = 0
                                        data_1b8a75c = 0
                                    else
                                        eax_45 = eax_43 - 1
                                        
                                        if (eax_43 == 1)
                                            eax_45 = sub_4ef190(eax_45, arg2 + 0x20, 
                                                *(arg2 + 0x20), "$$$$$$", &data_1b8a720)
                                    
                                    return sub_468a50(eax_45, data_1b8a734, data_1b8a720, arg3, 
                                        data_1b8a748, data_1b8a75c, data_1b8a770, (data_1b8a784).b)
                                
                                if (eax_1 == 3)
                                    goto label_503240
                                
                                if (eax_1 == 4)
                                label_503268:
                                    char** eax_6
                                    int32_t ecx_9
                                    eax_6, ecx_9 = sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$", &data_1b8a720)
                                    int32_t var_1c_2 = 0
                                    return sub_48cf80(eax_6, 0x64, ecx_9, 0, data_1b8a720, 
                                        data_1b8a734, arg3)
                                
                            label_503292:
                                
                                if (eax_1 == 5)
                                    char** eax_8
                                    int32_t ecx_12
                                    eax_8, ecx_12 = sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$", &data_1b8a720)
                                    int32_t var_1c_3 = 1
                                    int32_t eax_9 = sub_48cf80(eax_8, 0x64, ecx_12, 0, 
                                        data_1b8a720, data_1b8a734, arg3)
                                    sub_445260()
                                    return eax_9
                                
                                if (eax_1 == 6)
                                    return sub_467550(
                                        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                            &data_1b8a720), 
                                        data_1b8a734, data_1b8a720, arg3, 0x64, 0, data_1b8a748)
                            else if (eax_1 != 0x5c && (eax_1 == 0x5d || eax_1 == 0x5e))
                                return sub_4689a0(
                                    sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                        &data_1b8a720), 
                                    data_1b8a734, data_1b8a720, arg3, data_1b8a748)
        case 2
            eax_1 = data_1b8b070
            
            if (eax_1 != 0x50)
                if (eax_1 == 0x51 || eax_1 == 0x52)
                    eax_1 = arg5
                    
                    if (eax_1 != 1 && eax_1 != 2)
                        if (eax_1 == 3)
                            goto label_50354a
                        
                        goto label_50356e
                    
                    int32_t eax_69 = data_1af4e84
                    char** eax_71
                    
                    if (eax_69 == 0)
                        eax_71 =
                            sub_4ef190(eax_69, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                        data_1b8a770 = 0
                        data_1b8a75c = 0
                        data_1b8a748 = 0
                    else
                        eax_71 = eax_69 - 1
                        
                        if (eax_69 == 1)
                            eax_71 = sub_4ef190(eax_71, arg2 + 0x20, *(arg2 + 0x20), "$$$$$", 
                                &data_1b8a720)
                    
                    return sub_468b60(eax_71, arg3, data_1b8a720, data_1b8a734, data_1b8a748, 
                        data_1b8a75c, (data_1b8a770).b)
                
                if (eax_1 != 0x53)
                    if (eax_1 == 0x54 || eax_1 == 0x55)
                        eax_1 = arg5
                        
                        if (eax_1 != 1 && eax_1 != 2)
                            if (eax_1 == 3)
                                goto label_50340e
                            
                            goto label_503420
                        
                        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                        int32_t ecx_82 = data_1b8a720
                        int32_t eax_65 = 0
                        
                        if (ecx_82 s>= 0 && ecx_82 s< data_7031bc)
                            eax_65 = *((arg3 + (ecx_82 << 1)) * 0x650 + 0x72d804)
                        
                        data_715e98 = eax_65
                        return eax_65
                    
                    if (eax_1 != 0x56)
                        if (eax_1 == 0x57 || eax_1 == 0x58)
                            return sub_468ae0(
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", 
                                    &data_1b8a720), 
                                arg3, data_1b8a720, data_1b8a734)
                        
                        if (eax_1 != 0x59)
                            if (eax_1 == 0x5a || eax_1 == 0x5b)
                                eax_1 = arg5
                                
                                if (eax_1 != 1 && eax_1 != 2)
                                    if (eax_1 == 3)
                                        goto label_503240
                                    
                                    goto label_503252
                                
                                int32_t eax_59 = data_1af4e84
                                char** eax_61
                                
                                if (eax_59 == 0)
                                    eax_61 = sub_4ef190(eax_59, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                        &data_1b8a720)
                                    data_1b8a784 = 0
                                    data_1b8a770 = 0
                                    data_1b8a75c = 0
                                else
                                    eax_61 = eax_59 - 1
                                    
                                    if (eax_59 == 1)
                                        eax_61 = sub_4ef190(eax_61, arg2 + 0x20, *(arg2 + 0x20), 
                                            "$$$$$$", &data_1b8a720)
                                
                                return sub_468bc0(eax_61, data_1b8a734, data_1b8a720, arg3, 
                                    data_1b8a748, data_1b8a75c, data_1b8a770, (data_1b8a784).b)
                            
                            if (eax_1 != 0x5c && (eax_1 == 0x5d || eax_1 == 0x5e))
                                return sub_468b10(
                                    sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                        &data_1b8a720), 
                                    data_1b8a734, data_1b8a720, arg3, data_1b8a748)
        case 3
            eax_1 = data_1b8b070
            
            if (eax_1 != 0x50)
                if (eax_1 == 0x51 || eax_1 == 0x52)
                    eax_1 = arg5
                    
                    if (eax_1 == 1 || eax_1 == 2)
                        int32_t eax_98 = data_1af4e84
                        char** eax_100
                        
                        if (eax_98 == 0)
                            eax_100 =
                                sub_4ef190(eax_98, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                            data_1b8a770 = 0
                            data_1b8a75c = 0
                            data_1b8a748 = 0
                        else
                            eax_100 = eax_98 - 1
                            
                            if (eax_98 == 1)
                                eax_100 = sub_4ef190(eax_100, arg2 + 0x20, *(arg2 + 0x20), "$$$$$", 
                                    &data_1b8a720)
                        
                        return sub_46af50(eax_100, arg3, data_1b8a720, data_1b8a734, data_1b8a748, 
                            data_1b8a75c, (data_1b8a770).b)
                    
                    if (eax_1 == 3)
                        eax_29 = sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                        var_1c_8 = 0
                        var_20_7 = 0x6b
                    label_50355c:
                        eax_30 = sub_466c70(eax_29, arg3, data_1b8a720, var_20_7, var_1c_8)
                        data_715e98 = eax_30
                        return eax_30
                    
                    if (eax_1 == 4)
                        int32_t ecx_116 =
                            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                        int32_t eax_94 = data_1b8a720
                        int32_t var_1c_26 = 0
                        return sub_48cf80(eax_94, 0x6b, ecx_116, 0, eax_94, eax_94, arg3)
                    
                    if (eax_1 == 5)
                        int32_t ecx_119 =
                            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                        int32_t eax_96 = data_1b8a720
                        int32_t var_1c_27 = 1
                        int32_t eax_97 = sub_48cf80(eax_96, 0x6b, ecx_119, 0, eax_96, eax_96, arg3)
                        sub_445260()
                        return eax_97
                    
                    if (eax_1 == 6)
                        return sub_467500(
                            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), 
                            arg3, data_1b8a720, 0x6b, 0, data_1b8a734)
                else if (eax_1 != 0x53)
                    if (eax_1 == 0x54 || eax_1 == 0x55)
                        eax_1 = arg5
                        
                        if (eax_1 == 1 || eax_1 == 2)
                            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                            int32_t ecx_111 = data_1b8a720
                            eax_30 = 0
                            
                            if (ecx_111 s< 0 || ecx_111 s>= data_7031bc)
                                data_715e98 = eax_30
                                return eax_30
                            
                            uint32_t eax_93 = zx.d(*((arg3 + (ecx_111 << 1)) * 0x650 + 0x72d824))
                            data_715e98 = eax_93
                            return eax_93
                        
                        if (eax_1 == 3)
                            int32_t eax_85 = sub_466d80(eax_1, eax_1 + 0x68, arg3, 0)
                            data_715e98 = eax_85
                            return eax_85
                        
                        if (eax_1 == 4)
                            int32_t var_14_9 = 0
                            return sub_48cf80(eax_1, eax_1 + 0x67, ecx, 0, 0xffffffff, 0xffffffff, 
                                arg3)
                        
                        if (eax_1 == 5)
                            int32_t var_14_10 = 1
                            int32_t eax_87 = sub_48cf80(eax_1, eax_1 + 0x66, ecx, 0, 0xffffffff, 
                                0xffffffff, arg3)
                            sub_445260()
                            return eax_87
                        
                        if (eax_1 == 6)
                            return sub_4675e0(sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), $", 
                                &data_1b8a720), 0x6b, arg3, 0, data_1b8a720)
                    else if (eax_1 != 0x56 && eax_1 != 0x57 && eax_1 != 0x58 && eax_1 != 0x59
                            && (eax_1 == 0x5a || eax_1 == 0x5b))
                        eax_1 = arg5
                        
                        if (eax_1 == 1 || eax_1 == 2)
                            int32_t eax_81 = data_1af4e84
                            char** eax_83
                            
                            if (eax_81 == 0)
                                eax_83 = sub_4ef190(eax_81, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                    &data_1b8a720)
                                data_1b8a784 = 0
                                data_1b8a770 = 0
                                data_1b8a75c = 0
                            else
                                eax_83 = eax_81 - 1
                                
                                if (eax_81 == 1)
                                    eax_83 = sub_4ef190(eax_83, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$$$$$", &data_1b8a720)
                            
                            return sub_46afb0(eax_83, data_1b8a734, data_1b8a720, arg3, 
                                data_1b8a748, data_1b8a75c, data_1b8a770, (data_1b8a784).b)
                        
                        if (eax_1 == 3)
                            int32_t eax_74 = sub_466cd0(
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", 
                                    &data_1b8a720), 
                                data_1b8a734, data_1b8a720, arg3, 0x6b, 0)
                            data_715e98 = eax_74
                            return eax_74
                        
                        if (eax_1 == 4)
                            char** eax_75
                            int32_t ecx_93
                            eax_75, ecx_93 =
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                            int32_t var_1c_21 = 0
                            return sub_48cf80(eax_75, 0x6b, ecx_93, 0, data_1b8a720, data_1b8a734, 
                                arg3)
                        
                        if (eax_1 == 5)
                            char** eax_77
                            int32_t ecx_96
                            eax_77, ecx_96 =
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                            int32_t var_1c_22 = 1
                            int32_t eax_78 = sub_48cf80(eax_77, 0x6b, ecx_96, 0, data_1b8a720, 
                                data_1b8a734, arg3)
                            sub_445260()
                            return eax_78
                        
                        if (eax_1 == 6)
                            return sub_467550(
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                    &data_1b8a720), 
                                data_1b8a734, data_1b8a720, arg3, 0x6b, 0, data_1b8a748)
        case 4
            eax_1 = data_1b8b070
            
            if (eax_1 != 0x50)
                char** var_28_12
                char** var_24_19
                void* var_20_25
                char** eax_106
                int32_t ecx_135
                
                if (eax_1 == 0x51 || eax_1 == 0x52)
                    eax_1 = arg5
                    
                    if (eax_1 == 1 || eax_1 == 2)
                        void* var_14_15 = arg3
                        return sub_501700(eax_1, arg2, ecx)
                    
                    if (eax_1 == 3)
                        eax_29 = sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                        var_1c_8 = 0
                        var_20_7 = 0
                        goto label_50355c
                    
                    if (eax_1 == 4)
                        int32_t ecx_150 =
                            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                        int32_t eax_119 = data_1b8a720
                        int32_t var_1c_33 = 0
                        return sub_48cf80(eax_119, 0, ecx_150, 0, eax_119, eax_119, arg3)
                    
                    if (eax_1 == 5)
                        ecx_135 = sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                        eax_106 = data_1b8a720
                        int32_t var_1c_34 = 1
                        var_20_25 = arg3
                        var_24_19 = eax_106
                        var_28_12 = eax_106
                    label_5043be:
                        int32_t eax_121 =
                            sub_48cf80(eax_106, 0, ecx_135, 0, var_28_12, var_24_19, var_20_25)
                        sub_445260()
                        return eax_121
                    
                    if (eax_1 == 6)
                        return sub_467500(
                            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), 
                            arg3, data_1b8a720, nullptr, 0, data_1b8a734)
                else if (eax_1 != 0x53)
                    if (eax_1 == 0x54 || eax_1 == 0x55)
                        eax_1 = arg5
                        
                        if (eax_1 == 1 || eax_1 == 2)
                            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                            int32_t ecx_145 = data_1b8a720
                            eax_30 = 0
                            
                            if (ecx_145 s< 0 || ecx_145 s>= data_7031bc)
                                data_715e98 = eax_30
                                return eax_30
                            
                            int32_t eax_118 = *((arg3 + (ecx_145 << 1)) * 0x650 + &data_72d828)
                            data_715e98 = eax_118
                            return eax_118
                        
                        if (eax_1 == 3)
                            int32_t eax_110 = sub_466d80(eax_1, 0, arg3, 0)
                            data_715e98 = eax_110
                            return eax_110
                        
                        if (eax_1 == 4)
                            int32_t var_14_13 = 0
                            return sub_48cf80(eax_1, 0, ecx, 0, 0xffffffff, 0xffffffff, arg3)
                        
                        if (eax_1 == 5)
                            int32_t var_14_14 = 1
                            int32_t eax_112 =
                                sub_48cf80(eax_1, 0, ecx, 0, 0xffffffff, 0xffffffff, arg3)
                            sub_445260()
                            return eax_112
                        
                        if (eax_1 == 6)
                            return sub_4675e0(sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), $", 
                                &data_1b8a720), 0, arg3, 0, data_1b8a720)
                    else if (eax_1 != 0x56 && eax_1 != 0x57 && eax_1 != 0x58 && eax_1 != 0x59
                            && (eax_1 == 0x5a || eax_1 == 0x5b))
                        eax_1 = arg5
                        
                        if (eax_1 == 1 || eax_1 == 2)
                            void* var_14_12 = arg3
                            return sub_501980(eax_1, arg2, ecx)
                        
                        if (eax_1 == 3)
                            int32_t eax_103 = sub_466cd0(
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", 
                                    &data_1b8a720), 
                                data_1b8a734, data_1b8a720, arg3, 0, 0)
                            data_715e98 = eax_103
                            return eax_103
                        
                        if (eax_1 == 4)
                            char** eax_104
                            int32_t ecx_132
                            eax_104, ecx_132 =
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                            int32_t var_1c_29 = 0
                            return sub_48cf80(eax_104, 0, ecx_132, 0, data_1b8a720, data_1b8a734, 
                                arg3)
                        
                        if (eax_1 == 5)
                            eax_106, ecx_135 =
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                            int32_t var_1c_30 = 1
                            var_20_25 = arg3
                            var_24_19 = data_1b8a734
                            var_28_12 = data_1b8a720
                            goto label_5043be
                        
                        if (eax_1 == 6)
                            return sub_467550(
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                    &data_1b8a720), 
                                data_1b8a734, data_1b8a720, arg3, 0, 0, data_1b8a748)
        case 5
            eax_1 = data_1b8b070
            
            if (eax_1 != 0x50)
                if (eax_1 == 0x51 || eax_1 == 0x52)
                    eax_1 = arg5
                    
                    if (eax_1 == 1 || eax_1 == 2)
                        int32_t var_14_20 = 0
                        return sub_502030(eax_1, arg2, ecx, arg3)
                    
                    if (eax_1 == 3)
                        eax_29 = sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                        var_1c_8 = 0
                        var_20_7 = 0x70
                        goto label_50355c
                    
                    if (eax_1 == 4)
                        int32_t ecx_175 =
                            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                        int32_t eax_138 = data_1b8a720
                        int32_t var_1c_39 = 0
                        return sub_48cf80(eax_138, 0x70, ecx_175, 0, eax_138, eax_138, arg3)
                    
                    if (eax_1 == 5)
                        int32_t ecx_178 =
                            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                        int32_t eax_140 = data_1b8a720
                        int32_t var_1c_40 = 1
                        int32_t eax_141 =
                            sub_48cf80(eax_140, 0x70, ecx_178, 0, eax_140, eax_140, arg3)
                        sub_445260()
                        return eax_141
                    
                    if (eax_1 == 6)
                        return sub_467500(
                            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), 
                            arg3, data_1b8a720, 0x70, 0, data_1b8a734)
                else if (eax_1 != 0x53)
                    if (eax_1 == 0x54 || eax_1 == 0x55)
                        eax_1 = arg5
                        
                        if (eax_1 == 1 || eax_1 == 2)
                            int32_t var_14_19 = 0
                            return sub_5021a0(eax_1, arg2, ecx, arg3)
                        
                        if (eax_1 == 3)
                            int32_t eax_132 = sub_466d80(eax_1, eax_1 + 0x6d, arg3, 0)
                            data_715e98 = eax_132
                            return eax_132
                        
                        if (eax_1 == 4)
                            int32_t var_14_17 = 0
                            return sub_48cf80(eax_1, eax_1 + 0x6c, ecx, 0, 0xffffffff, 0xffffffff, 
                                arg3)
                        
                        if (eax_1 == 5)
                            int32_t var_14_18 = 1
                            int32_t eax_134 = sub_48cf80(eax_1, eax_1 + 0x6b, ecx, 0, 0xffffffff, 
                                0xffffffff, arg3)
                            sub_445260()
                            return eax_134
                        
                        if (eax_1 == 6)
                            return sub_4675e0(sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), $", 
                                &data_1b8a720), 0x70, arg3, 0, data_1b8a720)
                    else if (eax_1 != 0x56 && eax_1 != 0x57 && eax_1 != 0x58 && eax_1 != 0x59
                            && (eax_1 == 0x5a || eax_1 == 0x5b))
                        eax_1 = arg5
                        
                        if (eax_1 == 1 || eax_1 == 2)
                            int32_t var_14_16 = 0
                            return sub_5022d0(eax_1, arg2, ecx, arg3)
                        
                        if (eax_1 == 3)
                            int32_t eax_124 = sub_466cd0(
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", 
                                    &data_1b8a720), 
                                data_1b8a734, data_1b8a720, arg3, 0x70, 0)
                            data_715e98 = eax_124
                            return eax_124
                        
                        if (eax_1 == 4)
                            char** eax_125
                            int32_t ecx_160
                            eax_125, ecx_160 =
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                            int32_t var_1c_35 = 0
                            return sub_48cf80(eax_125, 0x70, ecx_160, 0, data_1b8a720, 
                                data_1b8a734, arg3)
                        
                        if (eax_1 == 5)
                            char** eax_127
                            int32_t ecx_163
                            eax_127, ecx_163 =
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                            int32_t var_1c_36 = 1
                            int32_t eax_128 = sub_48cf80(eax_127, 0x70, ecx_163, 0, data_1b8a720, 
                                data_1b8a734, arg3)
                            sub_445260()
                            return eax_128
                        
                        if (eax_1 == 6)
                            return sub_467550(
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                    &data_1b8a720), 
                                data_1b8a734, data_1b8a720, arg3, 0x70, 0, data_1b8a748)
        case 6
            eax_1 = data_1b8b070
            
            if (eax_1 != 0x50)
                if (eax_1 == 0x51 || eax_1 == 0x52)
                    eax_1 = arg5
                    
                    if (eax_1 != 1 && eax_1 != 2)
                    label_504bc5:
                        
                        if (eax_1 != 3)
                            goto label_504bed
                        
                        goto label_504bdb
                    
                    int32_t eax_175 = data_1af4e84
                    char** eax_177
                    
                    if (eax_175 == 0)
                        eax_177 =
                            sub_4ef190(eax_175, arg2 + 0x20, *(arg2 + 0x20), "$$$$", &data_1b8a720)
                        data_1b8a798 = 0
                        data_1b8a784 = 0
                        data_1b8a770 = 0
                    else
                        eax_177 = eax_175 - 1
                        
                        if (eax_175 == 1)
                            eax_177 = sub_4ef190(eax_177, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$", 
                                &data_1b8a720)
                    
                    return sub_468d00(eax_177, arg3, data_1b8a720, data_1b8a734, data_1b8a748, 
                        data_1b8a75c, data_1b8a770, data_1b8a784, (data_1b8a798).b)
                
                if (eax_1 != 0x53)
                    if (eax_1 == 0x54 || eax_1 == 0x55)
                        eax_1 = arg5
                        
                        if (eax_1 != 1 && eax_1 != 2)
                            goto label_504a49
                        
                        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$%%", &data_1b8a720)
                        int32_t var_c
                        return sub_4e8000(
                            sub_4e8000(
                                sub_468f50(&arg4, arg3, data_1b8a720, data_1b8a734, &arg4, &var_c), 
                                data_1b8a758, data_1b8a754, arg4, &data_704898), 
                            data_1b8a76c, data_1b8a768, var_c, &data_704898)
                    
                    if (eax_1 != 0x56)
                        if (eax_1 == 0x57 || eax_1 == 0x58)
                            return sub_468c50(
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$$", 
                                    &data_1b8a720), 
                                arg3, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c)
                        
                        if (eax_1 != 0x59)
                            if (eax_1 == 0x5a || eax_1 == 0x5b)
                                eax_1 = arg5
                                
                                if (eax_1 != 1 && eax_1 != 2)
                                label_504840:
                                    
                                    if (eax_1 != 3)
                                        goto label_504884
                                    
                                    goto label_504872
                                
                                int32_t eax_153 = data_1af4e84
                                char** eax_155
                                
                                if (eax_153 == 0)
                                    eax_155 = sub_4ef190(eax_153, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$$$$", &data_1b8a720)
                                    data_1b8a7ac = 0
                                    data_1b8a798 = 0
                                    data_1b8a784 = 0
                                else
                                    eax_155 = eax_153 - 1
                                    
                                    if (eax_153 == 1)
                                        eax_155 = sub_4ef190(eax_155, arg2 + 0x20, *(arg2 + 0x20), 
                                            "$$$$$$$$", &data_1b8a720)
                                
                                return sub_468e10(eax_155, data_1b8a734, data_1b8a720, arg3, 
                                    data_1b8a748, data_1b8a75c, data_1b8a770, data_1b8a784, 
                                    data_1b8a798, (data_1b8a7ac).b)
                            
                            if (eax_1 != 0x5c && (eax_1 == 0x5d || eax_1 == 0x5e))
                                return sub_468c90(
                                    sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$$$", 
                                        &data_1b8a720), 
                                    data_1b8a734, data_1b8a720, arg3, data_1b8a748, data_1b8a75c, 
                                    data_1b8a770)
        case 7
            eax_1 = data_1b8b070
            
            if (eax_1 != 0x50)
                if (eax_1 == 0x51 || eax_1 == 0x52)
                    eax_1 = arg5
                    
                    if (eax_1 == 1 || eax_1 == 2)
                        int32_t eax_192 = data_1af4e84
                        char** eax_194
                        
                        if (eax_192 == 0)
                            eax_194 = sub_4ef190(eax_192, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                &data_1b8a720)
                            data_1b8a784 = 0
                            data_1b8a770 = 0
                            data_1b8a75c = 0
                        else
                            eax_194 = eax_192 - 1
                            
                            if (eax_192 == 1)
                                eax_194 = sub_4ef190(eax_194, arg2 + 0x20, *(arg2 + 0x20), 
                                    "$$$$$$", &data_1b8a720)
                        
                        return sub_469060(eax_194, arg3, data_1b8a720, data_1b8a734, data_1b8a748, 
                            data_1b8a75c, data_1b8a770, (data_1b8a784).b)
                    
                    if (eax_1 == 3)
                    label_504bdb:
                        eax_29 = sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                        var_1c_8 = data_1b8a734
                        var_20_7 = 0x65
                        goto label_50355c
                    
                label_504bed:
                    
                    if (eax_1 == 4)
                        int32_t ecx_225 =
                            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                        int32_t eax_171 = data_1b8a720
                        int32_t var_1c_53 = 0
                        return sub_48cf80(eax_171, 0x65, ecx_225, data_1b8a734, eax_171, eax_171, 
                            arg3)
                    
                    if (eax_1 == 5)
                        int32_t ecx_228 =
                            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                        int32_t eax_173 = data_1b8a720
                        int32_t var_1c_54 = 1
                        int32_t eax_174 =
                            sub_48cf80(eax_173, 0x65, ecx_228, data_1b8a734, eax_173, eax_173, arg3)
                        sub_445260()
                        return eax_174
                    
                    if (eax_1 == 6)
                        return sub_467500(
                            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720), 
                            arg3, data_1b8a720, 0x65, data_1b8a734, data_1b8a748)
                else if (eax_1 != 0x53)
                    if (eax_1 == 0x54 || eax_1 == 0x55)
                        eax_1 = arg5
                        
                        if (eax_1 == 1 || eax_1 == 2)
                            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                            int32_t ecx_249 = data_1b8a720
                            int32_t edx_133 = data_1b8a734
                            eax_30 = 0
                            
                            if (ecx_249 s< 0 || ecx_249 s>= data_7031bc || edx_133 u> 7)
                                data_715e98 = eax_30
                                return eax_30
                            
                            int32_t eax_191 =
                                *((((arg3 + (ecx_249 << 1)) * 0x194 + edx_133) << 2) + &data_72d88c)
                            data_715e98 = eax_191
                            return eax_191
                        
                        if (eax_1 == 3)
                        label_504a72:
                            int32_t eax_160 = sub_466d80(
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720), 
                                0x65, arg3, data_1b8a720)
                            data_715e98 = eax_160
                            return eax_160
                        
                    label_504a84:
                        
                        if (eax_1 == 4)
                            char** eax_161
                            int32_t ecx_209
                            eax_161, ecx_209 =
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                            int32_t var_1c_49 = 0
                            return sub_48cf80(eax_161, 0x65, ecx_209, data_1b8a720, 0xffffffff, 
                                0xffffffff, arg3)
                        
                        if (eax_1 == 5)
                            char** eax_163
                            int32_t ecx_212
                            eax_163, ecx_212 =
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                            int32_t var_1c_50 = 1
                            int32_t eax_164 = sub_48cf80(eax_163, 0x65, ecx_212, data_1b8a720, 
                                0xffffffff, 0xffffffff, arg3)
                            sub_445260()
                            return eax_164
                        
                        if (eax_1 == 6)
                            return sub_4675e0(
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", 
                                    &data_1b8a720), 
                                0x65, arg3, data_1b8a720, data_1b8a734)
                    else if (eax_1 != 0x56)
                        if (eax_1 == 0x57 || eax_1 == 0x58)
                            return sub_468fb0(
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                    &data_1b8a720), 
                                arg3, data_1b8a720, data_1b8a734, data_1b8a748)
                        
                        if (eax_1 != 0x59)
                            if (eax_1 == 0x5a || eax_1 == 0x5b)
                                eax_1 = arg5
                                
                                if (eax_1 == 1 || eax_1 == 2)
                                    int32_t eax_181 = data_1af4e84
                                    char** eax_183
                                    
                                    if (eax_181 == 0)
                                        eax_183 = sub_4ef190(eax_181, arg2 + 0x20, *(arg2 + 0x20), 
                                            "$$$$", &data_1b8a720)
                                        data_1b8a798 = 0
                                        data_1b8a784 = 0
                                        data_1b8a770 = 0
                                    else
                                        eax_183 = eax_181 - 1
                                        
                                        if (eax_181 == 1)
                                            eax_183 = sub_4ef190(eax_183, arg2 + 0x20, 
                                                *(arg2 + 0x20), "$$$$$$$", &data_1b8a720)
                                    
                                    return sub_469120(eax_183, data_1b8a734, data_1b8a720, arg3, 
                                        data_1b8a748, data_1b8a75c, data_1b8a770, data_1b8a784, 
                                        (data_1b8a798).b)
                                
                                if (eax_1 == 3)
                                label_504872:
                                    int32_t eax_146 = sub_466cd0(
                                        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                            &data_1b8a720), 
                                        data_1b8a734, data_1b8a720, arg3, 0x65, data_1b8a748)
                                    data_715e98 = eax_146
                                    return eax_146
                                
                            label_504884:
                                
                                if (eax_1 == 4)
                                    char** eax_147
                                    int32_t ecx_189
                                    eax_147, ecx_189 = sub_4ef190(eax_1, arg2 + 0x20, 
                                        *(arg2 + 0x20), "$$$", &data_1b8a720)
                                    int32_t var_1c_43 = 0
                                    return sub_48cf80(eax_147, 0x65, ecx_189, data_1b8a748, 
                                        data_1b8a720, data_1b8a734, arg3)
                                
                                if (eax_1 == 5)
                                    char** eax_149
                                    int32_t ecx_192
                                    eax_149, ecx_192 = sub_4ef190(eax_1, arg2 + 0x20, 
                                        *(arg2 + 0x20), "$$$", &data_1b8a720)
                                    int32_t var_1c_44 = 1
                                    int32_t eax_150 = sub_48cf80(eax_149, 0x65, ecx_192, 
                                        data_1b8a748, data_1b8a720, data_1b8a734, arg3)
                                    sub_445260()
                                    return eax_150
                                
                                if (eax_1 == 6)
                                    return sub_467550(
                                        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$$", 
                                            &data_1b8a720), 
                                        data_1b8a734, data_1b8a720, arg3, 0x65, data_1b8a748, 
                                        data_1b8a75c)
                            else if (eax_1 != 0x5c && (eax_1 == 0x5d || eax_1 == 0x5e))
                                return sub_468ff0(
                                    sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$$", 
                                        &data_1b8a720), 
                                    data_1b8a734, data_1b8a720, arg3, data_1b8a748, data_1b8a75c)
        case 8
            eax_1 = data_1b8b070
            
            if (eax_1 != 0x50)
                if (eax_1 == 0x51 || eax_1 == 0x52)
                    eax_1 = arg5
                    
                    if (eax_1 != 1 && eax_1 != 2)
                        goto label_504bc5
                    
                    int32_t eax_209 = data_1af4e84
                    char** eax_211
                    
                    if (eax_209 == 0)
                        eax_211 =
                            sub_4ef190(eax_209, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
                        data_1b8a784 = 0
                        data_1b8a770 = 0
                        data_1b8a75c = 0
                    else
                        eax_211 = eax_209 - 1
                        
                        if (eax_209 == 1)
                            eax_211 = sub_4ef190(eax_211, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$", 
                                &data_1b8a720)
                    
                    return sub_4692e0(eax_211, arg3, data_1b8a720, data_1b8a734, data_1b8a748, 
                        data_1b8a75c, data_1b8a770, (data_1b8a784).b)
                
                if (eax_1 != 0x53)
                    if (eax_1 == 0x54 || eax_1 == 0x55)
                        eax_1 = arg5
                        
                        if (eax_1 != 1 && eax_1 != 2)
                        label_504a49:
                            
                            if (eax_1 != 3)
                                goto label_504a84
                            
                            goto label_504a72
                        
                        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                        int32_t ecx_268 = data_1b8a720
                        int32_t edx_145 = data_1b8a734
                        eax_30 = 0
                        
                        if (ecx_268 s< 0 || ecx_268 s>= data_7031bc || edx_145 u> 7)
                            data_715e98 = eax_30
                            return eax_30
                        
                        int32_t eax_208 =
                            *((((arg3 + (ecx_268 << 1)) * 0x194 + edx_145) << 2) + &data_72d8ac)
                        data_715e98 = eax_208
                        return eax_208
                    
                    if (eax_1 != 0x56)
                        if (eax_1 == 0x57 || eax_1 == 0x58)
                            return sub_469230(
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                    &data_1b8a720), 
                                arg3, data_1b8a720, data_1b8a734, data_1b8a748)
                        
                        if (eax_1 != 0x59)
                            if (eax_1 == 0x5a || eax_1 == 0x5b)
                                eax_1 = arg5
                                
                                if (eax_1 != 1 && eax_1 != 2)
                                    goto label_504840
                                
                                int32_t eax_198 = data_1af4e84
                                char** eax_200
                                
                                if (eax_198 == 0)
                                    eax_200 = sub_4ef190(eax_198, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$$$", &data_1b8a720)
                                    data_1b8a798 = 0
                                    data_1b8a784 = 0
                                    data_1b8a770 = 0
                                else
                                    eax_200 = eax_198 - 1
                                    
                                    if (eax_198 == 1)
                                        eax_200 = sub_4ef190(eax_200, arg2 + 0x20, *(arg2 + 0x20), 
                                            "$$$$$$$", &data_1b8a720)
                                
                                return sub_4693a0(eax_200, data_1b8a734, data_1b8a720, arg3, 
                                    data_1b8a748, data_1b8a75c, data_1b8a770, data_1b8a784, 
                                    (data_1b8a798).b)
                            
                            if (eax_1 != 0x5c && (eax_1 == 0x5d || eax_1 == 0x5e))
                                return sub_469270(
                                    sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$$", 
                                        &data_1b8a720), 
                                    data_1b8a734, data_1b8a720, arg3, data_1b8a748, data_1b8a75c)
        case 9
            eax_1 = data_1b8b070
            
            if (eax_1 != 0x50)
                if (eax_1 == 0x51 || eax_1 == 0x52)
                    eax_1 = arg5
                    
                    if (eax_1 == 1 || eax_1 == 2)
                        int32_t eax_238 = data_1af4e84
                        char** eax_240
                        
                        if (eax_238 == 0)
                            eax_240 = sub_4ef190(eax_238, arg2 + 0x20, *(arg2 + 0x20), "$$", 
                                &data_1b8a720)
                            data_1b8a770 = 0
                            data_1b8a75c = 0
                            data_1b8a748 = 0
                        else
                            eax_240 = eax_238 - 1
                            
                            if (eax_238 == 1)
                                eax_240 = sub_4ef190(eax_240, arg2 + 0x20, *(arg2 + 0x20), "$$$$$", 
                                    &data_1b8a720)
                        
                        return sub_46b040(eax_240, arg3, data_1b8a720, data_1b8a734, data_1b8a748, 
                            data_1b8a75c, (data_1b8a770).b)
                    
                    if (eax_1 == 3)
                        eax_29 = sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                        var_1c_8 = 0
                        var_20_7 = 0x6c
                        goto label_50355c
                    
                    if (eax_1 == 4)
                        int32_t ecx_302 =
                            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                        int32_t eax_234 = data_1b8a720
                        int32_t var_1c_69 = 0
                        return sub_48cf80(eax_234, 0x6c, ecx_302, 0, eax_234, eax_234, arg3)
                    
                    if (eax_1 == 5)
                        int32_t ecx_305 =
                            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                        int32_t eax_236 = data_1b8a720
                        int32_t var_1c_70 = 1
                        int32_t eax_237 =
                            sub_48cf80(eax_236, 0x6c, ecx_305, 0, eax_236, eax_236, arg3)
                        sub_445260()
                        return eax_237
                    
                    if (eax_1 == 6)
                        return sub_467500(
                            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), 
                            arg3, data_1b8a720, 0x6c, 0, data_1b8a734)
                else if (eax_1 != 0x53)
                    if (eax_1 == 0x54 || eax_1 == 0x55)
                        eax_1 = arg5
                        
                        if (eax_1 == 1 || eax_1 == 2)
                            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                            int32_t ecx_297 = data_1b8a720
                            eax_30 = 0
                            
                            if (ecx_297 s< 0 || ecx_297 s>= data_7031bc)
                                data_715e98 = eax_30
                                return eax_30
                            
                            uint32_t eax_233 = zx.d(*((arg3 + (ecx_297 << 1)) * 0x650 + 0x72d80c))
                            data_715e98 = eax_233
                            return eax_233
                        
                        if (eax_1 == 3)
                            int32_t eax_225 = sub_466d80(eax_1, eax_1 + 0x69, arg3, 0)
                            data_715e98 = eax_225
                            return eax_225
                        
                        if (eax_1 == 4)
                            int32_t var_14_28 = 0
                            return sub_48cf80(eax_1, eax_1 + 0x68, ecx, 0, 0xffffffff, 0xffffffff, 
                                arg3)
                        
                        if (eax_1 == 5)
                            int32_t var_14_29 = 1
                            int32_t eax_227 = sub_48cf80(eax_1, eax_1 + 0x67, ecx, 0, 0xffffffff, 
                                0xffffffff, arg3)
                            sub_445260()
                            return eax_227
                        
                        if (eax_1 == 6)
                            return sub_4675e0(sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), $", 
                                &data_1b8a720), 0x6c, arg3, 0, data_1b8a720)
                    else if (eax_1 != 0x56 && eax_1 != 0x57 && eax_1 != 0x58 && eax_1 != 0x59
                            && (eax_1 == 0x5a || eax_1 == 0x5b))
                        eax_1 = arg5
                        
                        if (eax_1 == 1 || eax_1 == 2)
                            int32_t eax_221 = data_1af4e84
                            char** eax_223
                            
                            if (eax_221 == 0)
                                eax_223 = sub_4ef190(eax_221, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                    &data_1b8a720)
                                data_1b8a784 = 0
                                data_1b8a770 = 0
                                data_1b8a75c = 0
                            else
                                eax_223 = eax_221 - 1
                                
                                if (eax_221 == 1)
                                    eax_223 = sub_4ef190(eax_223, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$$$$$", &data_1b8a720)
                            
                            return sub_46b0a0(eax_223, data_1b8a734, data_1b8a720, arg3, 
                                data_1b8a748, data_1b8a75c, data_1b8a770, (data_1b8a784).b)
                        
                        if (eax_1 == 3)
                            int32_t eax_214 = sub_466cd0(
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", 
                                    &data_1b8a720), 
                                data_1b8a734, data_1b8a720, arg3, 0x6c, 0)
                            data_715e98 = eax_214
                            return eax_214
                        
                        if (eax_1 == 4)
                            char** eax_215
                            int32_t ecx_279
                            eax_215, ecx_279 =
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                            int32_t var_1c_64 = 0
                            return sub_48cf80(eax_215, 0x6c, ecx_279, 0, data_1b8a720, 
                                data_1b8a734, arg3)
                        
                        if (eax_1 == 5)
                            char** eax_217
                            int32_t ecx_282
                            eax_217, ecx_282 =
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                            int32_t var_1c_65 = 1
                            int32_t eax_218 = sub_48cf80(eax_217, 0x6c, ecx_282, 0, data_1b8a720, 
                                data_1b8a734, arg3)
                            sub_445260()
                            return eax_218
                        
                        if (eax_1 == 6)
                            return sub_467550(
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                    &data_1b8a720), 
                                data_1b8a734, data_1b8a720, arg3, 0x6c, 0, data_1b8a748)
return eax_1
