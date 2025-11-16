// 函数: sub_50e980
// 地址: 0x50e980
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
int32_t eax = arg4 - 0x4b0
int32_t var_20_5
char** eax_21

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
                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$", &data_1b8a720)
                        char** eax_30 = neg.d(data_1b8a75c)
                        return sub_46d9b0(eax_30, arg3, data_1b8a720, 0, data_1b8a734, 
                            data_1b8a748, 0, eax_30.w, data_1b8a770, (data_1b8a784).b, 2)
                    
                    if (eax == 3)
                        eax_21 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                        int32_t var_1c_6 = 0
                        var_20_5 = 1
                    label_50ed24:
                        int32_t eax_22 = sub_466c70(eax_21, arg3, data_1b8a720, var_20_5, 0)
                        data_715e98 = eax_22
                        return eax_22
                    
                    if (eax == 4)
                        int32_t ecx_43 =
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                        int32_t eax_23 = data_1b8a720
                        int32_t var_1c_7 = 0
                        return sub_48cf80(eax_23, 1, ecx_43, 0, eax_23, eax_23, arg3)
                    
                    if (eax == 5)
                        int32_t ecx_47 =
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                        int32_t eax_25 = data_1b8a720
                        int32_t var_1c_8 = 1
                        int32_t eax_26 = sub_48cf80(eax_25, 1, ecx_47, 0, eax_25, eax_25, arg3)
                        sub_445260()
                        return eax_26
                    
                    if (eax == 6)
                        int32_t var_20_8 = 0
                        return sub_467500(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), 
                            arg3, data_1b8a720, 1, 0, data_1b8a734)
                else if (eax != 0x53)
                    if (eax == 0x54 || eax == 0x55)
                        eax = arg5
                        
                        if (eax != 1 && eax != 2)
                            if (eax == 3)
                                int32_t eax_16 = sub_466d80(eax, eax - 2, arg3, 0)
                                data_715e98 = eax_16
                                return eax_16
                            
                            if (eax == 4)
                                int32_t var_14 = 0
                                return sub_48cf80(eax, eax - 3, ecx, 0, 0xffffffff, 0xffffffff, 
                                    arg3)
                            
                            if (eax == 5)
                                int32_t var_14_1 = 1
                                int32_t eax_18 =
                                    sub_48cf80(eax, eax - 4, ecx, 0, 0xffffffff, 0xffffffff, arg3)
                                sub_445260()
                                return eax_18
                            
                            if (eax == 6)
                                return sub_4675e0(sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", 
                                    &data_1b8a720), 1, arg3, 0, data_1b8a720)
                    else if (eax != 0x56)
                        if (eax == 0x57 || eax == 0x58)
                            eax = arg5
                            
                            if (eax == 1 || eax == 2)
                                return sub_46da90(
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                        &data_1b8a720), 
                                    arg3, data_1b8a720, 0, data_1b8a734, data_1b8a748)
                        else if (eax != 0x59)
                            if (eax == 0x5a || eax == 0x5b)
                                eax = arg5
                                
                                if (eax == 1 || eax == 2)
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$", 
                                        &data_1b8a720)
                                    int32_t eax_12 = neg.d(data_1b8a770)
                                    return sub_46da00(eax_12, data_1b8a734, data_1b8a720, arg3, 0, 
                                        data_1b8a748, data_1b8a75c, 0, eax_12.w, data_1b8a784, 
                                        (data_1b8a798).b, 2)
                                
                                if (eax == 3)
                                    int32_t eax_4 = sub_466cd0(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", 
                                            &data_1b8a720), 
                                        data_1b8a734, data_1b8a720, arg3, 1, 0)
                                    data_715e98 = eax_4
                                    return eax_4
                                
                                if (eax == 4)
                                    char** eax_5
                                    int32_t ecx_11
                                    eax_5, ecx_11 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$", &data_1b8a720)
                                    int32_t var_1c_1 = 0
                                    return sub_48cf80(eax_5, 1, ecx_11, 0, data_1b8a720, 
                                        data_1b8a734, arg3)
                                
                                if (eax == 5)
                                    char** eax_7
                                    int32_t ecx_15
                                    eax_7, ecx_15 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$", &data_1b8a720)
                                    int32_t var_1c_2 = 1
                                    int32_t eax_8 = sub_48cf80(eax_7, 1, ecx_15, 0, data_1b8a720, 
                                        data_1b8a734, arg3)
                                    sub_445260()
                                    return eax_8
                                
                                if (eax == 6)
                                    return sub_467550(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                            &data_1b8a720), 
                                        data_1b8a734, data_1b8a720, arg3, 1, 0, data_1b8a748)
                            else if (eax != 0x5c && (eax == 0x5d || eax == 0x5e))
                                eax = arg5
                                
                                if (eax == 1 || eax == 2)
                                    return sub_46dae0(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$", 
                                            &data_1b8a720), 
                                        data_1b8a734, data_1b8a720, arg3, 0, data_1b8a748, 
                                        data_1b8a75c)
        case 1
            eax = data_1b8b070
            
            if (eax != 0x50)
                if (eax == 0x51 || eax == 0x52)
                    eax = arg5
                    
                    if (eax == 1 || eax == 2)
                        return sub_46d9b0(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$", 
                                &data_1b8a720), 
                            arg3, data_1b8a720, 1, data_1b8a734, data_1b8a748, (data_1b8a75c).w, 
                            (data_1b8a770).w, data_1b8a784, (data_1b8a798).b, (data_1b8a7ac).b)
                    
                    if (eax == 3)
                        eax_21 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                        int32_t var_1c_18 = 0
                        var_20_5 = 2
                        goto label_50ed24
                    
                    if (eax == 4)
                        int32_t ecx_97 =
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                        int32_t eax_51 = data_1b8a720
                        int32_t var_1c_19 = 0
                        return sub_48cf80(eax_51, 2, ecx_97, 0, eax_51, eax_51, arg3)
                    
                    if (eax == 5)
                        int32_t ecx_101 =
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                        int32_t eax_53 = data_1b8a720
                        int32_t var_1c_20 = 1
                        int32_t eax_54 = sub_48cf80(eax_53, 2, ecx_101, 0, eax_53, eax_53, arg3)
                        sub_445260()
                        return eax_54
                    
                    if (eax == 6)
                        int32_t var_20_17 = 0
                        return sub_467500(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), 
                            arg3, data_1b8a720, 2, 0, data_1b8a734)
                else if (eax != 0x53)
                    if (eax == 0x54 || eax == 0x55)
                        eax = arg5
                        
                        if (eax != 1 && eax != 2)
                            if (eax == 3)
                                int32_t eax_46 = sub_466d80(eax, eax - 1, arg3, 0)
                                data_715e98 = eax_46
                                return eax_46
                            
                            if (eax == 4)
                                int32_t var_14_2 = 0
                                return sub_48cf80(eax, eax - 2, ecx, 0, 0xffffffff, 0xffffffff, 
                                    arg3)
                            
                            if (eax == 5)
                                int32_t var_14_3 = 1
                                int32_t eax_48 =
                                    sub_48cf80(eax, eax - 3, ecx, 0, 0xffffffff, 0xffffffff, arg3)
                                sub_445260()
                                return eax_48
                            
                            if (eax == 6)
                                return sub_4675e0(sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", 
                                    &data_1b8a720), 2, arg3, 0, data_1b8a720)
                    else if (eax != 0x56)
                        if (eax == 0x57 || eax == 0x58)
                            eax = arg5
                            
                            if (eax == 1 || eax == 2)
                                return sub_46da90(
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                        &data_1b8a720), 
                                    arg3, data_1b8a720, 1, data_1b8a734, data_1b8a748)
                        else if (eax != 0x59)
                            if (eax == 0x5a || eax == 0x5b)
                                eax = arg5
                                
                                if (eax == 1 || eax == 2)
                                    return sub_46da00(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$", 
                                            &data_1b8a720), 
                                        data_1b8a734, data_1b8a720, arg3, 1, data_1b8a748, 
                                        data_1b8a75c, (data_1b8a770).w, (data_1b8a784).w, 
                                        data_1b8a798, (data_1b8a7ac).b, (data_1b8a7c0).b)
                                
                                if (eax == 3)
                                    int32_t eax_35 = sub_466cd0(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", 
                                            &data_1b8a720), 
                                        data_1b8a734, data_1b8a720, arg3, 2, 0)
                                    data_715e98 = eax_35
                                    return eax_35
                                
                                if (eax == 4)
                                    char** eax_36
                                    int32_t ecx_67
                                    eax_36, ecx_67 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$", &data_1b8a720)
                                    int32_t var_1c_12 = 0
                                    return sub_48cf80(eax_36, 2, ecx_67, 0, data_1b8a720, 
                                        data_1b8a734, arg3)
                                
                                if (eax == 5)
                                    char** eax_38
                                    int32_t ecx_71
                                    eax_38, ecx_71 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$", &data_1b8a720)
                                    int32_t var_1c_13 = 1
                                    int32_t eax_39 = sub_48cf80(eax_38, 2, ecx_71, 0, data_1b8a720, 
                                        data_1b8a734, arg3)
                                    sub_445260()
                                    return eax_39
                                
                                if (eax == 6)
                                    return sub_467550(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                            &data_1b8a720), 
                                        data_1b8a734, data_1b8a720, arg3, 2, 0, data_1b8a748)
                            else if (eax != 0x5c && (eax == 0x5d || eax == 0x5e))
                                eax = arg5
                                
                                if (eax == 1 || eax == 2)
                                    return sub_46dae0(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$", 
                                            &data_1b8a720), 
                                        data_1b8a734, data_1b8a720, arg3, 1, data_1b8a748, 
                                        data_1b8a75c)
        case 2
            eax = data_1b8b070
            
            if (eax != 0x50)
                if (eax == 0x51 || eax == 0x52)
                    eax = arg5
                    
                    if (eax == 1 || eax == 2)
                        return sub_46d9b0(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$", 
                                &data_1b8a720), 
                            arg3, data_1b8a720, 2, data_1b8a734, data_1b8a748, (data_1b8a75c).w, 
                            (data_1b8a770).w, data_1b8a784, (data_1b8a798).b, (data_1b8a7ac).b)
                    
                    if (eax == 3)
                        eax_21 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                        int32_t var_1c_28 = 0
                        var_20_5 = 3
                        goto label_50ed24
                    
                    if (eax == 4)
                        int32_t ecx_147 =
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                        int32_t eax_74 = data_1b8a720
                        int32_t var_1c_29 = 0
                        return sub_48cf80(eax_74, 3, ecx_147, 0, eax_74, eax_74, arg3)
                    
                    if (eax == 5)
                        int32_t ecx_151 =
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                        int32_t eax_76 = data_1b8a720
                        int32_t var_1c_30 = 1
                        int32_t eax_77 = sub_48cf80(eax_76, 3, ecx_151, 0, eax_76, eax_76, arg3)
                        sub_445260()
                        return eax_77
                    
                    if (eax == 6)
                        int32_t var_20_25 = 0
                        return sub_467500(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), 
                            arg3, data_1b8a720, 3, 0, data_1b8a734)
                else if (eax != 0x53)
                    if (eax == 0x54 || eax == 0x55)
                        eax = arg5
                        
                        if (eax != 1 && eax != 2)
                            if (eax == 3)
                                int32_t eax_69 = sub_466d80(eax, eax, arg3, 0)
                                data_715e98 = eax_69
                                return eax_69
                            
                            if (eax == 4)
                                int32_t var_14_4 = 0
                                return sub_48cf80(eax, eax - 1, ecx, 0, 0xffffffff, 0xffffffff, 
                                    arg3)
                            
                            if (eax == 5)
                                int32_t var_14_5 = 1
                                int32_t eax_71 =
                                    sub_48cf80(eax, eax - 2, ecx, 0, 0xffffffff, 0xffffffff, arg3)
                                sub_445260()
                                return eax_71
                            
                            if (eax == 6)
                                return sub_4675e0(sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", 
                                    &data_1b8a720), 3, arg3, 0, data_1b8a720)
                    else if (eax != 0x56)
                        if (eax == 0x57 || eax == 0x58)
                            eax = arg5
                            
                            if (eax == 1 || eax == 2)
                                return sub_46da90(
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                        &data_1b8a720), 
                                    arg3, data_1b8a720, 2, data_1b8a734, data_1b8a748)
                        else if (eax != 0x59)
                            if (eax == 0x5a || eax == 0x5b)
                                eax = arg5
                                
                                if (eax == 1 || eax == 2)
                                    return sub_46da00(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$", 
                                            &data_1b8a720), 
                                        data_1b8a734, data_1b8a720, arg3, 2, data_1b8a748, 
                                        data_1b8a75c, (data_1b8a770).w, (data_1b8a784).w, 
                                        data_1b8a798, (data_1b8a7ac).b, (data_1b8a7c0).b)
                                
                                if (eax == 3)
                                    int32_t eax_58 = sub_466cd0(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", 
                                            &data_1b8a720), 
                                        data_1b8a734, data_1b8a720, arg3, 3, 0)
                                    data_715e98 = eax_58
                                    return eax_58
                                
                                if (eax == 4)
                                    char** eax_59
                                    int32_t ecx_117
                                    eax_59, ecx_117 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$", &data_1b8a720)
                                    int32_t var_1c_22 = 0
                                    return sub_48cf80(eax_59, 3, ecx_117, 0, data_1b8a720, 
                                        data_1b8a734, arg3)
                                
                                if (eax == 5)
                                    char** eax_61
                                    int32_t ecx_121
                                    eax_61, ecx_121 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$", &data_1b8a720)
                                    int32_t var_1c_23 = 1
                                    int32_t eax_62 = sub_48cf80(eax_61, 3, ecx_121, 0, 
                                        data_1b8a720, data_1b8a734, arg3)
                                    sub_445260()
                                    return eax_62
                                
                                if (eax == 6)
                                    return sub_467550(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                            &data_1b8a720), 
                                        data_1b8a734, data_1b8a720, arg3, 3, 0, data_1b8a748)
                            else if (eax != 0x5c && (eax == 0x5d || eax == 0x5e))
                                eax = arg5
                                
                                if (eax == 1 || eax == 2)
                                    return sub_46dae0(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$", 
                                            &data_1b8a720), 
                                        data_1b8a734, data_1b8a720, arg3, 2, data_1b8a748, 
                                        data_1b8a75c)
        case 3, 4
            eax = data_1b8b070
            
            if (eax != 0x50)
                if (eax == 0x51 || eax == 0x52)
                    eax = arg5
                    
                    if (eax == 1 || eax == 2)
                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$", &data_1b8a720)
                        int32_t eax_107
                        int32_t ecx_210
                        
                        if (arg4 != 0x4b3)
                            eax_107 = data_1b8a770
                            ecx_210 = data_1b8a75c
                        else
                            int32_t eax_105 = data_1b8a770
                            ecx_210 = data_1b8a75c * 0xa
                            data_1b8a75c = ecx_210
                            eax_107 = eax_105 * 0xa
                            data_1b8a770 = eax_107
                        
                        return sub_46d9b0(eax_107, arg3, data_1b8a720, 3, data_1b8a734, 
                            data_1b8a748, ecx_210.w, eax_107.w, data_1b8a784, (data_1b8a798).b, 
                            (data_1b8a7ac).b)
                    
                    if (eax == 3)
                        eax_21 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                        int32_t var_1c_38 = 0
                        var_20_5 = 4
                        goto label_50ed24
                    
                    if (eax == 4)
                        int32_t ecx_199 =
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                        int32_t eax_100 = data_1b8a720
                        int32_t var_1c_39 = 0
                        return sub_48cf80(eax_100, 4, ecx_199, 0, eax_100, eax_100, arg3)
                    
                    if (eax == 5)
                        int32_t ecx_203 =
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                        int32_t eax_102 = data_1b8a720
                        int32_t var_1c_40 = 1
                        int32_t eax_103 = sub_48cf80(eax_102, 4, ecx_203, 0, eax_102, eax_102, arg3)
                        sub_445260()
                        return eax_103
                    
                    if (eax == 6)
                        int32_t var_20_33 = 0
                        return sub_467500(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), 
                            arg3, data_1b8a720, 4, 0, data_1b8a734)
                else if (eax != 0x53)
                    if (eax == 0x54 || eax == 0x55)
                        eax = arg5
                        
                        if (eax != 1 && eax != 2)
                            if (eax == 3)
                                int32_t eax_95 = sub_466d80(eax, eax + 1, arg3, 0)
                                data_715e98 = eax_95
                                return eax_95
                            
                            if (eax == 4)
                                int32_t var_14_7 = 0
                                return sub_48cf80(eax, eax, ecx, 0, 0xffffffff, 0xffffffff, arg3)
                            
                            if (eax == 5)
                                int32_t var_14_8 = 1
                                int32_t eax_97 =
                                    sub_48cf80(eax, eax - 1, ecx, 0, 0xffffffff, 0xffffffff, arg3)
                                sub_445260()
                                return eax_97
                            
                            if (eax == 6)
                                return sub_4675e0(sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", 
                                    &data_1b8a720), 4, arg3, 0, data_1b8a720)
                    else if (eax != 0x56)
                        if (eax == 0x57 || eax == 0x58)
                            eax = arg5
                            
                            if (eax == 1 || eax == 2)
                                return sub_46da90(
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                        &data_1b8a720), 
                                    arg3, data_1b8a720, 3, data_1b8a734, data_1b8a748)
                        else if (eax != 0x59)
                            if (eax == 0x5a || eax == 0x5b)
                                eax = arg5
                                
                                if (eax == 1 || eax == 2)
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$", 
                                        &data_1b8a720)
                                    int32_t eax_91
                                    int32_t ecx_180
                                    
                                    if (arg4 != 0x4b3)
                                        eax_91 = data_1b8a784
                                        ecx_180 = data_1b8a770
                                    else
                                        int32_t eax_89 = data_1b8a784
                                        ecx_180 = data_1b8a770 * 0xa
                                        data_1b8a770 = ecx_180
                                        eax_91 = eax_89 * 0xa
                                        data_1b8a784 = eax_91
                                    
                                    return sub_46da00(eax_91, data_1b8a734, data_1b8a720, arg3, 3, 
                                        data_1b8a748, data_1b8a75c, ecx_180.w, eax_91.w, 
                                        data_1b8a798, (data_1b8a7ac).b, (data_1b8a7c0).b)
                                
                                if (eax == 3)
                                    int32_t eax_81 = sub_466cd0(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", 
                                            &data_1b8a720), 
                                        data_1b8a734, data_1b8a720, arg3, 4, 0)
                                    data_715e98 = eax_81
                                    return eax_81
                                
                                if (eax == 4)
                                    char** eax_82
                                    int32_t ecx_167
                                    eax_82, ecx_167 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$", &data_1b8a720)
                                    int32_t var_1c_32 = 0
                                    return sub_48cf80(eax_82, 4, ecx_167, 0, data_1b8a720, 
                                        data_1b8a734, arg3)
                                
                                if (eax == 5)
                                    char** eax_84
                                    int32_t ecx_171
                                    eax_84, ecx_171 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$", &data_1b8a720)
                                    int32_t var_1c_33 = 1
                                    int32_t eax_85 = sub_48cf80(eax_84, 4, ecx_171, 0, 
                                        data_1b8a720, data_1b8a734, arg3)
                                    sub_445260()
                                    return eax_85
                                
                                if (eax == 6)
                                    return sub_467550(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                            &data_1b8a720), 
                                        data_1b8a734, data_1b8a720, arg3, 4, 0, data_1b8a748)
                            else if (eax != 0x5c && (eax == 0x5d || eax == 0x5e))
                                eax = arg5
                                
                                if (eax == 1 || eax == 2)
                                    return sub_46dae0(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$", 
                                            &data_1b8a720), 
                                        data_1b8a734, data_1b8a720, arg3, 3, data_1b8a748, 
                                        data_1b8a75c)
        case 5
            eax = data_1b8b070
            
            if (eax != 0x50)
                if (eax == 0x51 || eax == 0x52)
                    eax = arg5
                    
                    if (eax == 1 || eax == 2)
                        return sub_46d9b0(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$", &data_1b8a720), 
                            arg3, data_1b8a720, 4, data_1b8a734, data_1b8a748, (data_1b8a75c).w, 0, 
                            data_1b8a770, (data_1b8a784).b, (data_1b8a798).b)
                    
                    if (eax == 3)
                        eax_21 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                        int32_t var_1c_49 = 0
                        var_20_5 = 5
                        goto label_50ed24
                    
                    if (eax == 4)
                        int32_t ecx_253 =
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                        int32_t eax_128 = data_1b8a720
                        int32_t var_1c_50 = 0
                        return sub_48cf80(eax_128, 5, ecx_253, 0, eax_128, eax_128, arg3)
                    
                    if (eax == 5)
                        int32_t ecx_257 =
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                        int32_t eax_130 = data_1b8a720
                        int32_t var_1c_51 = 1
                        int32_t eax_131 = sub_48cf80(eax_130, 5, ecx_257, 0, eax_130, eax_130, arg3)
                        sub_445260()
                        return eax_131
                    
                    if (eax == 6)
                        int32_t var_20_42 = 0
                        return sub_467500(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), 
                            arg3, data_1b8a720, 5, 0, data_1b8a734)
                else if (eax != 0x53)
                    if (eax == 0x54 || eax == 0x55)
                        eax = arg5
                        
                        if (eax != 1 && eax != 2)
                            if (eax == 3)
                                int32_t eax_123 = sub_466d80(eax, eax + 2, arg3, 0)
                                data_715e98 = eax_123
                                return eax_123
                            
                            if (eax == 4)
                                int32_t var_14_10 = 0
                                return sub_48cf80(eax, eax + 1, ecx, 0, 0xffffffff, 0xffffffff, 
                                    arg3)
                            
                            if (eax == 5)
                                int32_t var_14_11 = 1
                                int32_t eax_125 =
                                    sub_48cf80(eax, eax, ecx, 0, 0xffffffff, 0xffffffff, arg3)
                                sub_445260()
                                return eax_125
                            
                            if (eax == 6)
                                return sub_4675e0(sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", 
                                    &data_1b8a720), 5, arg3, 0, data_1b8a720)
                    else if (eax != 0x56)
                        if (eax == 0x57 || eax == 0x58)
                            eax = arg5
                            
                            if (eax == 1 || eax == 2)
                                return sub_46da90(
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                        &data_1b8a720), 
                                    arg3, data_1b8a720, 4, data_1b8a734, data_1b8a748)
                        else if (eax != 0x59)
                            if (eax == 0x5a || eax == 0x5b)
                                eax = arg5
                                
                                if (eax == 1 || eax == 2)
                                    return sub_46da00(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$", 
                                            &data_1b8a720), 
                                        data_1b8a734, data_1b8a720, arg3, 4, data_1b8a748, 
                                        data_1b8a75c, (data_1b8a770).w, 0, data_1b8a784, 
                                        (data_1b8a798).b, (data_1b8a7ac).b)
                                
                                if (eax == 3)
                                    int32_t eax_112 = sub_466cd0(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", 
                                            &data_1b8a720), 
                                        data_1b8a734, data_1b8a720, arg3, 5, 0)
                                    data_715e98 = eax_112
                                    return eax_112
                                
                                if (eax == 4)
                                    char** eax_113
                                    int32_t ecx_223
                                    eax_113, ecx_223 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$", &data_1b8a720)
                                    int32_t var_1c_43 = 0
                                    return sub_48cf80(eax_113, 5, ecx_223, 0, data_1b8a720, 
                                        data_1b8a734, arg3)
                                
                                if (eax == 5)
                                    char** eax_115
                                    int32_t ecx_227
                                    eax_115, ecx_227 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$", &data_1b8a720)
                                    int32_t var_1c_44 = 1
                                    int32_t eax_116 = sub_48cf80(eax_115, 5, ecx_227, 0, 
                                        data_1b8a720, data_1b8a734, arg3)
                                    sub_445260()
                                    return eax_116
                                
                                if (eax == 6)
                                    return sub_467550(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                            &data_1b8a720), 
                                        data_1b8a734, data_1b8a720, arg3, 5, 0, data_1b8a748)
                            else if (eax != 0x5c && (eax == 0x5d || eax == 0x5e))
                                eax = arg5
                                
                                if (eax == 1 || eax == 2)
                                    return sub_46dae0(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$", 
                                            &data_1b8a720), 
                                        data_1b8a734, data_1b8a720, arg3, 4, data_1b8a748, 
                                        data_1b8a75c)
        case 6
            eax = data_1b8b070
            
            if (eax != 0x50)
                if (eax == 0x51 || eax == 0x52)
                    eax = arg5
                    
                    if (eax == 1 || eax == 2)
                        return sub_46db70(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$", 
                                &data_1b8a720), 
                            arg3, data_1b8a720, 0, data_1b8a734, data_1b8a748, (data_1b8a75c).w, 
                            (data_1b8a770).w, (data_1b8a784).w, data_1b8a798, data_1b8a7ac, 
                            (data_1b8a7c0).b)
                    
                    if (eax == 3)
                        eax_21 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                        int32_t var_1c_59 = 0
                        var_20_5 = 6
                        goto label_50ed24
                    
                    if (eax == 4)
                        int32_t ecx_303 =
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                        int32_t eax_151 = data_1b8a720
                        int32_t var_1c_60 = 0
                        return sub_48cf80(eax_151, 6, ecx_303, 0, eax_151, eax_151, arg3)
                    
                    if (eax == 5)
                        int32_t ecx_307 =
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                        int32_t eax_153 = data_1b8a720
                        int32_t var_1c_61 = 1
                        int32_t eax_154 = sub_48cf80(eax_153, 6, ecx_307, 0, eax_153, eax_153, arg3)
                        sub_445260()
                        return eax_154
                    
                    if (eax == 6)
                        int32_t var_20_50 = 0
                        return sub_467500(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), 
                            arg3, data_1b8a720, 6, 0, data_1b8a734)
                else if (eax != 0x53)
                    if (eax == 0x54 || eax == 0x55)
                        eax = arg5
                        
                        if (eax != 1 && eax != 2)
                            if (eax == 3)
                                int32_t eax_146 = sub_466d80(eax, eax + 3, arg3, 0)
                                data_715e98 = eax_146
                                return eax_146
                            
                            if (eax == 4)
                                int32_t var_14_12 = 0
                                return sub_48cf80(eax, eax + 2, ecx, 0, 0xffffffff, 0xffffffff, 
                                    arg3)
                            
                            if (eax == 5)
                                int32_t var_14_13 = 1
                                int32_t eax_148 =
                                    sub_48cf80(eax, eax + 1, ecx, 0, 0xffffffff, 0xffffffff, arg3)
                                sub_445260()
                                return eax_148
                            
                            if (eax == 6)
                                return sub_4675e0(sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", 
                                    &data_1b8a720), 6, arg3, 0, data_1b8a720)
                    else if (eax != 0x56)
                        if (eax == 0x57 || eax == 0x58)
                            eax = arg5
                            
                            if (eax == 1 || eax == 2)
                                return sub_46dc50(
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                        &data_1b8a720), 
                                    arg3, data_1b8a720, 0, data_1b8a734, data_1b8a748)
                        else if (eax != 0x59)
                            if (eax == 0x5a || eax == 0x5b)
                                eax = arg5
                                
                                if (eax == 1 || eax == 2)
                                    return sub_46dbc0(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$$", 
                                            &data_1b8a720), 
                                        data_1b8a734, data_1b8a720, arg3, 0, data_1b8a748, 
                                        data_1b8a75c, (data_1b8a770).w, (data_1b8a784).w, 
                                        (data_1b8a798).w, data_1b8a7ac, data_1b8a7c0, 
                                        (data_1b8a7d4).b)
                                
                                if (eax == 3)
                                    int32_t eax_135 = sub_466cd0(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", 
                                            &data_1b8a720), 
                                        data_1b8a734, data_1b8a720, arg3, 6, 0)
                                    data_715e98 = eax_135
                                    return eax_135
                                
                                if (eax == 4)
                                    char** eax_136
                                    int32_t ecx_273
                                    eax_136, ecx_273 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$", &data_1b8a720)
                                    int32_t var_1c_53 = 0
                                    return sub_48cf80(eax_136, 6, ecx_273, 0, data_1b8a720, 
                                        data_1b8a734, arg3)
                                
                                if (eax == 5)
                                    char** eax_138
                                    int32_t ecx_277
                                    eax_138, ecx_277 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$", &data_1b8a720)
                                    int32_t var_1c_54 = 1
                                    int32_t eax_139 = sub_48cf80(eax_138, 6, ecx_277, 0, 
                                        data_1b8a720, data_1b8a734, arg3)
                                    sub_445260()
                                    return eax_139
                                
                                if (eax == 6)
                                    return sub_467550(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                            &data_1b8a720), 
                                        data_1b8a734, data_1b8a720, arg3, 6, 0, data_1b8a748)
                            else if (eax != 0x5c && (eax == 0x5d || eax == 0x5e))
                                eax = arg5
                                
                                if (eax == 1 || eax == 2)
                                    return sub_46dca0(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$", 
                                            &data_1b8a720), 
                                        data_1b8a734, data_1b8a720, arg3, 0, data_1b8a748, 
                                        data_1b8a75c)
        case 7
            eax = data_1b8b070
            
            if (eax != 0x50)
                if (eax == 0x51 || eax == 0x52)
                    eax = arg5
                    
                    if (eax == 1 || eax == 2)
                        return sub_46db70(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$", 
                                &data_1b8a720), 
                            arg3, data_1b8a720, 1, data_1b8a734, data_1b8a748, (data_1b8a75c).w, 
                            (data_1b8a770).w, (data_1b8a784).w, data_1b8a798, data_1b8a7ac, 
                            (data_1b8a7c0).b)
                    
                    if (eax == 3)
                        eax_21 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                        int32_t var_1c_70 = 0
                        var_20_5 = 7
                        goto label_50ed24
                    
                    if (eax == 4)
                        int32_t ecx_355 =
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                        int32_t eax_176 = data_1b8a720
                        int32_t var_1c_71 = 0
                        return sub_48cf80(eax_176, 7, ecx_355, 0, eax_176, eax_176, arg3)
                    
                    if (eax == 5)
                        int32_t ecx_359 =
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                        int32_t eax_178 = data_1b8a720
                        int32_t var_1c_72 = 1
                        int32_t eax_179 = sub_48cf80(eax_178, 7, ecx_359, 0, eax_178, eax_178, arg3)
                        sub_445260()
                        return eax_179
                    
                    if (eax == 6)
                        int32_t var_20_59 = 0
                        return sub_467500(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), 
                            arg3, data_1b8a720, 7, 0, data_1b8a734)
                else if (eax != 0x53)
                    if (eax == 0x54 || eax == 0x55)
                        eax = arg5
                        
                        if (eax != 1 && eax != 2)
                            if (eax == 3)
                                int32_t eax_171 = sub_466d80(eax, eax + 4, arg3, 0)
                                data_715e98 = eax_171
                                return eax_171
                            
                            if (eax == 4)
                                int32_t var_14_14 = 0
                                return sub_48cf80(eax, eax + 3, ecx, 0, 0xffffffff, 0xffffffff, 
                                    arg3)
                            
                            if (eax == 5)
                                int32_t var_14_15 = 1
                                int32_t eax_173 =
                                    sub_48cf80(eax, eax + 2, ecx, 0, 0xffffffff, 0xffffffff, arg3)
                                sub_445260()
                                return eax_173
                            
                            if (eax == 6)
                                return sub_4675e0(sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", 
                                    &data_1b8a720), 7, arg3, 0, data_1b8a720)
                    else if (eax != 0x56)
                        if (eax == 0x57 || eax == 0x58)
                            eax = arg5
                            
                            if (eax == 1 || eax == 2)
                                return sub_46dc50(
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                        &data_1b8a720), 
                                    arg3, data_1b8a720, 1, data_1b8a734, data_1b8a748)
                        else if (eax != 0x59)
                            if (eax == 0x5a || eax == 0x5b)
                                eax = arg5
                                
                                if (eax == 1 || eax == 2)
                                    return sub_46dbc0(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$$", 
                                            &data_1b8a720), 
                                        data_1b8a734, data_1b8a720, arg3, 1, data_1b8a748, 
                                        data_1b8a75c, (data_1b8a770).w, (data_1b8a784).w, 
                                        (data_1b8a798).w, data_1b8a7ac, data_1b8a7c0, 
                                        (data_1b8a7d4).b)
                                
                                if (eax == 3)
                                    int32_t eax_160 = sub_466cd0(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", 
                                            &data_1b8a720), 
                                        data_1b8a734, data_1b8a720, arg3, 7, 0)
                                    data_715e98 = eax_160
                                    return eax_160
                                
                                if (eax == 4)
                                    char** eax_161
                                    int32_t ecx_325
                                    eax_161, ecx_325 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$", &data_1b8a720)
                                    int32_t var_1c_64 = 0
                                    return sub_48cf80(eax_161, 7, ecx_325, 0, data_1b8a720, 
                                        data_1b8a734, arg3)
                                
                                if (eax == 5)
                                    char** eax_163
                                    int32_t ecx_329
                                    eax_163, ecx_329 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$", &data_1b8a720)
                                    int32_t var_1c_65 = 1
                                    int32_t eax_164 = sub_48cf80(eax_163, 7, ecx_329, 0, 
                                        data_1b8a720, data_1b8a734, arg3)
                                    sub_445260()
                                    return eax_164
                                
                                if (eax == 6)
                                    return sub_467550(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                            &data_1b8a720), 
                                        data_1b8a734, data_1b8a720, arg3, 7, 0, data_1b8a748)
                            else if (eax != 0x5c && (eax == 0x5d || eax == 0x5e))
                                eax = arg5
                                
                                if (eax == 1 || eax == 2)
                                    return sub_46dca0(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$", 
                                            &data_1b8a720), 
                                        data_1b8a734, data_1b8a720, arg3, 1, data_1b8a748, 
                                        data_1b8a75c)
        case 8
            eax = data_1b8b070
            
            if (eax != 0x50)
                if (eax == 0x51 || eax == 0x52)
                    eax = arg5
                    
                    if (eax == 1 || eax == 2)
                        return sub_46db70(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$", &data_1b8a720), 
                            arg3, data_1b8a720, 2, data_1b8a734, data_1b8a748, 0, 0, 0, 
                            data_1b8a75c, data_1b8a770, 0)
                    
                    if (eax == 3)
                        eax_21 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                        int32_t var_1c_79 = 0
                        var_20_5 = 8
                        goto label_50ed24
                    
                    if (eax == 4)
                        int32_t ecx_405 =
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                        int32_t eax_199 = data_1b8a720
                        int32_t var_1c_80 = 0
                        return sub_48cf80(eax_199, 8, ecx_405, 0, eax_199, eax_199, arg3)
                    
                    if (eax == 5)
                        int32_t ecx_409 =
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                        int32_t eax_201 = data_1b8a720
                        int32_t var_1c_81 = 1
                        int32_t eax_202 = sub_48cf80(eax_201, 8, ecx_409, 0, eax_201, eax_201, arg3)
                        sub_445260()
                        return eax_202
                    
                    if (eax == 6)
                        int32_t var_20_67 = 0
                        return sub_467500(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), 
                            arg3, data_1b8a720, 8, 0, data_1b8a734)
                else if (eax != 0x53)
                    if (eax == 0x54 || eax == 0x55)
                        eax = arg5
                        
                        if (eax != 1 && eax != 2)
                            if (eax == 3)
                                int32_t eax_194 = sub_466d80(eax, eax + 5, arg3, 0)
                                data_715e98 = eax_194
                                return eax_194
                            
                            if (eax == 4)
                                int32_t var_14_16 = 0
                                return sub_48cf80(eax, eax + 4, ecx, 0, 0xffffffff, 0xffffffff, 
                                    arg3)
                            
                            if (eax == 5)
                                int32_t var_14_17 = 1
                                int32_t eax_196 =
                                    sub_48cf80(eax, eax + 3, ecx, 0, 0xffffffff, 0xffffffff, arg3)
                                sub_445260()
                                return eax_196
                            
                            if (eax == 6)
                                return sub_4675e0(sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", 
                                    &data_1b8a720), 8, arg3, 0, data_1b8a720)
                    else if (eax != 0x56)
                        if (eax == 0x57 || eax == 0x58)
                            eax = arg5
                            
                            if (eax == 1 || eax == 2)
                                return sub_46dc50(
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                        &data_1b8a720), 
                                    arg3, data_1b8a720, 2, data_1b8a734, data_1b8a748)
                        else if (eax != 0x59)
                            if (eax == 0x5a || eax == 0x5b)
                                eax = arg5
                                
                                if (eax == 1 || eax == 2)
                                    return sub_46dbc0(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$", 
                                            &data_1b8a720), 
                                        data_1b8a734, data_1b8a720, arg3, 2, data_1b8a748, 
                                        data_1b8a75c, 0, 0, 0, data_1b8a770, data_1b8a784, 0)
                                
                                if (eax == 3)
                                    int32_t eax_183 = sub_466cd0(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", 
                                            &data_1b8a720), 
                                        data_1b8a734, data_1b8a720, arg3, 8, 0)
                                    data_715e98 = eax_183
                                    return eax_183
                                
                                if (eax == 4)
                                    char** eax_184
                                    int32_t ecx_375
                                    eax_184, ecx_375 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$", &data_1b8a720)
                                    int32_t var_1c_74 = 0
                                    return sub_48cf80(eax_184, 8, ecx_375, 0, data_1b8a720, 
                                        data_1b8a734, arg3)
                                
                                if (eax == 5)
                                    char** eax_186
                                    int32_t ecx_379
                                    eax_186, ecx_379 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$", &data_1b8a720)
                                    int32_t var_1c_75 = 1
                                    int32_t eax_187 = sub_48cf80(eax_186, 8, ecx_379, 0, 
                                        data_1b8a720, data_1b8a734, arg3)
                                    sub_445260()
                                    return eax_187
                                
                                if (eax == 6)
                                    return sub_467550(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                            &data_1b8a720), 
                                        data_1b8a734, data_1b8a720, arg3, 8, 0, data_1b8a748)
                            else if (eax != 0x5c && (eax == 0x5d || eax == 0x5e))
                                eax = arg5
                                
                                if (eax == 1 || eax == 2)
                                    return sub_46dca0(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$", 
                                            &data_1b8a720), 
                                        data_1b8a734, data_1b8a720, arg3, 2, data_1b8a748, 
                                        data_1b8a75c)
        case 9
            eax = data_1b8b070
            
            if (eax != 0x50)
                if (eax == 0x51 || eax == 0x52)
                    eax = arg5
                    
                    if (eax == 1 || eax == 2)
                        return sub_46db70(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$", &data_1b8a720), 
                            arg3, data_1b8a720, 3, data_1b8a734, data_1b8a748, (data_1b8a75c).w, 0, 
                            0, data_1b8a770, data_1b8a784, 0)
                    
                    if (eax == 3)
                        eax_21 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                        int32_t var_1c_88 = 0
                        var_20_5 = 9
                        goto label_50ed24
                    
                    if (eax == 4)
                        int32_t ecx_455 =
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                        int32_t eax_222 = data_1b8a720
                        int32_t var_1c_89 = 0
                        return sub_48cf80(eax_222, 9, ecx_455, 0, eax_222, eax_222, arg3)
                    
                    if (eax == 5)
                        int32_t ecx_459 =
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                        int32_t eax_224 = data_1b8a720
                        int32_t var_1c_90 = 1
                        int32_t eax_225 = sub_48cf80(eax_224, 9, ecx_459, 0, eax_224, eax_224, arg3)
                        sub_445260()
                        return eax_225
                    
                    if (eax == 6)
                        int32_t var_20_75 = 0
                        return sub_467500(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), 
                            arg3, data_1b8a720, 9, 0, data_1b8a734)
                else if (eax != 0x53)
                    if (eax == 0x54 || eax == 0x55)
                        eax = arg5
                        
                        if (eax != 1 && eax != 2)
                            if (eax == 3)
                                int32_t eax_217 = sub_466d80(eax, eax + 6, arg3, 0)
                                data_715e98 = eax_217
                                return eax_217
                            
                            if (eax == 4)
                                int32_t var_14_18 = 0
                                return sub_48cf80(eax, eax + 5, ecx, 0, 0xffffffff, 0xffffffff, 
                                    arg3)
                            
                            if (eax == 5)
                                int32_t var_14_19 = 1
                                int32_t eax_219 =
                                    sub_48cf80(eax, eax + 4, ecx, 0, 0xffffffff, 0xffffffff, arg3)
                                sub_445260()
                                return eax_219
                            
                            if (eax == 6)
                                return sub_4675e0(sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", 
                                    &data_1b8a720), 9, arg3, 0, data_1b8a720)
                    else if (eax != 0x56)
                        if (eax == 0x57 || eax == 0x58)
                            eax = arg5
                            
                            if (eax == 1 || eax == 2)
                                return sub_46dc50(
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                        &data_1b8a720), 
                                    arg3, data_1b8a720, 3, data_1b8a734, data_1b8a748)
                        else if (eax != 0x59)
                            if (eax == 0x5a || eax == 0x5b)
                                eax = arg5
                                
                                if (eax == 1 || eax == 2)
                                    return sub_46dbc0(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$", 
                                            &data_1b8a720), 
                                        data_1b8a734, data_1b8a720, arg3, 3, data_1b8a748, 
                                        data_1b8a75c, (data_1b8a770).w, 0, 0, data_1b8a784, 
                                        data_1b8a798, 0)
                                
                                if (eax == 3)
                                    int32_t eax_206 = sub_466cd0(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", 
                                            &data_1b8a720), 
                                        data_1b8a734, data_1b8a720, arg3, 9, 0)
                                    data_715e98 = eax_206
                                    return eax_206
                                
                                if (eax == 4)
                                    char** eax_207
                                    int32_t ecx_425
                                    eax_207, ecx_425 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$", &data_1b8a720)
                                    int32_t var_1c_83 = 0
                                    return sub_48cf80(eax_207, 9, ecx_425, 0, data_1b8a720, 
                                        data_1b8a734, arg3)
                                
                                if (eax == 5)
                                    char** eax_209
                                    int32_t ecx_429
                                    eax_209, ecx_429 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$", &data_1b8a720)
                                    int32_t var_1c_84 = 1
                                    int32_t eax_210 = sub_48cf80(eax_209, 9, ecx_429, 0, 
                                        data_1b8a720, data_1b8a734, arg3)
                                    sub_445260()
                                    return eax_210
                                
                                if (eax == 6)
                                    return sub_467550(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                            &data_1b8a720), 
                                        data_1b8a734, data_1b8a720, arg3, 9, 0, data_1b8a748)
                            else if (eax != 0x5c && (eax == 0x5d || eax == 0x5e))
                                eax = arg5
                                
                                if (eax == 1 || eax == 2)
                                    return sub_46dca0(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$", 
                                            &data_1b8a720), 
                                        data_1b8a734, data_1b8a720, arg3, 3, data_1b8a748, 
                                        data_1b8a75c)
return eax
