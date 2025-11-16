// 函数: sub_518330
// 地址: 0x518330
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char** var_28_2
char** var_24_1
int32_t var_24_5
int32_t var_24_9
int32_t var_c
int32_t var_8
int32_t eax_1
char** eax_4
char** eax_5
char** eax_18
char** eax_36
int32_t ecx_3
int32_t ecx_5
int32_t edx_22

switch (jump_table_51a214[arg5])
    case 0x518343
        eax_1 = data_1b8b070
        
        if (eax_1 == 0x50)
            return eax_1
        
        if (eax_1 == 0x51 || eax_1 == 0x52)
            if (arg4 == 1 || arg4 == 2)
                int32_t eax_24 = data_1af4e84
                char** eax_26
                
                if (eax_24 == 0)
                    eax_26 = sub_4ef190(eax_24, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
                    data_1b8a784 = 0
                    data_1b8a770 = 0
                    data_1b8a75c = 0
                else
                    eax_26 = eax_24 - 1
                    
                    if (eax_24 == 1)
                        eax_26 =
                            sub_4ef190(eax_26, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$", &data_1b8a720)
                
                return sub_47dc80(eax_26, arg2, data_1b8a720, data_1b8a734, data_1b8a748, 
                    data_1b8a75c, data_1b8a770, (data_1b8a784).b)
            
            if (arg4 == 3)
                eax_18 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                int32_t var_20_8 = 0
                var_24_5 = 0x6d
            label_518690:
                int32_t eax_19 = sub_478b80(eax_18, arg2, data_1b8a720, data_1b8a734, var_24_5, 0)
                data_715e98 = eax_19
                return eax_19
            
            if (arg4 == 4)
                ecx_3 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                eax_4 = data_1b8a734
                int32_t var_20_9 = 0
                return sub_48cfe0(eax_4, 0x6d, ecx_3, 0, data_1b8a720, arg2, eax_4, eax_4)
            
            if (arg4 != 5)
                if (arg4 != 6)
                    return arg4
                
                int32_t var_24_6 = 0
                return sub_4791e0(
                    sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720), arg2, 
                    data_1b8a720, data_1b8a734, 0x6d, 0, data_1b8a748)
            
            ecx_5 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
            eax_5 = data_1b8a734
            int32_t var_20_10 = 1
            var_24_1 = eax_5
            var_28_2 = eax_5
        else
            if (eax_1 == 0x53)
                return eax_1
            
            if (eax_1 == 0x54 || eax_1 == 0x55)
                if (arg4 == 1 || arg4 == 2)
                    sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                    sub_47ddb0(&arg5, arg2, data_1b8a720, data_1b8a734, &arg5)
                    int32_t eax_17 = arg5
                    data_715e98 = eax_17
                    return eax_17
                
                if (arg4 == 3)
                    enum MESSAGEBOX_RESULT eax_13 = sub_478ca0(
                        sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), $", &data_1b8a720), arg2, 
                        data_1b8a720, 0x6d, 0)
                    data_715e98 = eax_13
                    return eax_13
                
                if (arg4 == 4)
                    eax_4, ecx_3 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), $", &data_1b8a720)
                    int32_t var_20_4 = 0
                    return sub_48cfe0(eax_4, 0x6d, ecx_3, 0, data_1b8a720, arg2, 0xffffffff, 
                        0xffffffff)
                
                if (arg4 != 5)
                    if (arg4 != 6)
                        return arg4
                    
                    int32_t var_24_3 = 0
                    return sub_4792d0(
                        sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720), arg2, 
                        data_1b8a720, 0x6d, 0, data_1b8a734)
                
                eax_5, ecx_5 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
                int32_t var_20_5 = 1
                var_24_1 = 0xffffffff
                var_28_2 = 0xffffffff
            else
                if (eax_1 == 0x56 || eax_1 == 0x57 || eax_1 == 0x58 || eax_1 == 0x59
                        || (eax_1 != 0x5a && eax_1 != 0x5b))
                    return eax_1
                
                if (arg4 == 1 || arg4 == 2)
                    int32_t eax_8 = data_1af4e84
                    char** eax_10
                    
                    if (eax_8 == 0)
                        eax_10 =
                            sub_4ef190(eax_8, arg3 + 0x20, *(arg3 + 0x20), "$$$$", &data_1b8a720)
                        data_1b8a798 = 0
                        data_1b8a784 = 0
                        data_1b8a770 = 0
                    else
                        eax_10 = eax_8 - 1
                        
                        if (eax_8 == 1)
                            eax_10 = sub_4ef190(eax_10, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$$", 
                                &data_1b8a720)
                    
                    return sub_47dd20(eax_10, arg2, data_1b8a720, data_1b8a734, data_1b8a748, 
                        data_1b8a75c, data_1b8a770, data_1b8a784, (data_1b8a798).b)
                
                if (arg4 == 3)
                    enum MESSAGEBOX_RESULT eax_3 = sub_478c00(
                        sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720), arg2, 
                        data_1b8a720, data_1b8a734, data_1b8a748, 0x6d, 0)
                    data_715e98 = eax_3
                    return eax_3
                
                if (arg4 == 4)
                    eax_4, ecx_3 =
                        sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
                    int32_t var_20 = 0
                    return sub_48cfe0(eax_4, 0x6d, ecx_3, 0, data_1b8a720, arg2, data_1b8a734, 
                        data_1b8a748)
                
                if (arg4 != 5)
                    if (arg4 == 6)
                        return sub_479250(
                            sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$$$", &data_1b8a720), 
                            arg2, data_1b8a720, data_1b8a734, data_1b8a748, 0x6d, 0, data_1b8a75c)
                    
                    return arg4
                
                eax_5, ecx_5 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
                int32_t var_20_1 = 1
                var_24_1 = data_1b8a748
                var_28_2 = data_1b8a734
        
        edx_22 = 0x6d
        goto label_518711
    case 0x5187f3
        eax_1 = data_1b8b070
        
        if (eax_1 == 0x50)
            return eax_1
        
        if (eax_1 == 0x51 || eax_1 == 0x52)
            if (arg4 == 1 || arg4 == 2)
                int32_t eax_40 = data_1af4e84
                char** eax_42
                
                if (eax_40 == 0)
                    eax_42 = sub_4ef190(eax_40, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
                    data_1b8a784 = 0
                    data_1b8a770 = 0
                    data_1b8a75c = 0
                else
                    eax_42 = eax_40 - 1
                    
                    if (eax_40 == 1)
                        eax_42 =
                            sub_4ef190(eax_42, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$", &data_1b8a720)
                
                return sub_47de30(eax_42, arg2, data_1b8a720, data_1b8a734, data_1b8a748, 
                    data_1b8a75c, data_1b8a770, (data_1b8a784).b)
            
            if (arg4 == 3)
                eax_18 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                int32_t var_20_21 = 0
                var_24_5 = 0x6e
                goto label_518690
            
            if (arg4 == 4)
                ecx_3 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                eax_4 = data_1b8a734
                int32_t var_20_22 = 0
                return sub_48cfe0(eax_4, 0x6e, ecx_3, 0, data_1b8a720, arg2, eax_4, eax_4)
            
            if (arg4 != 5)
                if (arg4 != 6)
                    return arg4
                
                int32_t var_24_12 = 0
                return sub_4791e0(
                    sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720), arg2, 
                    data_1b8a720, data_1b8a734, 0x6e, 0, data_1b8a748)
            
            ecx_5 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
            eax_5 = data_1b8a734
            edx_22 = 0x6e
            int32_t var_20_23 = 1
            var_24_1 = eax_5
            var_28_2 = eax_5
        label_518711:
            int32_t eax_21 =
                sub_48cfe0(eax_5, edx_22, ecx_5, 0, data_1b8a720, arg2, var_28_2, var_24_1)
            sub_445260()
            return eax_21
        
        if (eax_1 == 0x53)
            return eax_1
        
        if (eax_1 == 0x54 || eax_1 == 0x55)
            if (arg4 == 1 || arg4 == 2)
                sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                sub_47df60(&arg5, arg2, data_1b8a720, data_1b8a734, &arg5)
                int32_t eax_39 = arg5
                data_715e98 = eax_39
                return eax_39
            
            if (arg4 == 3)
                eax_36 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
                int32_t var_20_17 = 0
                var_24_9 = 0x6e
            label_518a34:
                enum MESSAGEBOX_RESULT eax_37 = sub_478ca0(eax_36, arg2, data_1b8a720, var_24_9, 0)
                data_715e98 = eax_37
                return eax_37
            
            if (arg4 == 4)
                eax_4, ecx_3 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
                int32_t var_20_18 = 0
                return sub_48cfe0(eax_4, 0x6e, ecx_3, 0, data_1b8a720, arg2, 0xffffffff, 0xffffffff)
            
            if (arg4 == 5)
                eax_5, ecx_5 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
                int32_t var_20_19 = 1
                var_24_1 = 0xffffffff
                var_28_2 = 0xffffffff
                edx_22 = 0x6e
                goto label_518711
            
            if (arg4 != 6)
                return arg4
            
            int32_t var_24_10 = 0
            return sub_4792d0(sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720), 
                arg2, data_1b8a720, 0x6e, 0, data_1b8a734)
        
        if (eax_1 == 0x56 || eax_1 == 0x57 || eax_1 == 0x58 || eax_1 == 0x59
                || (eax_1 != 0x5a && eax_1 != 0x5b))
            return eax_1
        
        if (arg4 == 1 || arg4 == 2)
            int32_t eax_32 = data_1af4e84
            char** eax_34
            
            if (eax_32 == 0)
                eax_34 = sub_4ef190(eax_32, arg3 + 0x20, *(arg3 + 0x20), "$$$$", &data_1b8a720)
                data_1b8a798 = 0
                data_1b8a784 = 0
                data_1b8a770 = 0
            else
                eax_34 = eax_32 - 1
                
                if (eax_32 == 1)
                    eax_34 =
                        sub_4ef190(eax_34, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$$", &data_1b8a720)
            
            return sub_47ded0(eax_34, arg2, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c, 
                data_1b8a770, data_1b8a784, (data_1b8a798).b)
        
        if (arg4 == 3)
            enum MESSAGEBOX_RESULT eax_29 = sub_478c00(
                sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720), arg2, 
                data_1b8a720, data_1b8a734, data_1b8a748, 0x6e, 0)
            data_715e98 = eax_29
            return eax_29
        
        if (arg4 == 4)
            eax_4, ecx_3 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
            int32_t var_20_13 = 0
            return sub_48cfe0(eax_4, 0x6e, ecx_3, 0, data_1b8a720, arg2, data_1b8a734, data_1b8a748)
        
        if (arg4 != 5)
            if (arg4 == 6)
                return sub_479250(
                    sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$$$", &data_1b8a720), arg2, 
                    data_1b8a720, data_1b8a734, data_1b8a748, 0x6e, 0, data_1b8a75c)
            
            return arg4
        
        eax_5, ecx_5 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
        int32_t var_20_14 = 1
        var_24_1 = data_1b8a748
        edx_22 = 0x6e
        var_28_2 = data_1b8a734
        goto label_518711
    case 0x518c4f
        eax_1 = data_1b8b070
        
        if (eax_1 == 0x50)
            return eax_1
        
        if (eax_1 != 0x51 && eax_1 != 0x52)
            if (eax_1 == 0x53)
                return eax_1
            
            if (eax_1 == 0x54 || eax_1 == 0x55)
                eax_1 = arg4
                
                if (eax_1 == 1 || eax_1 == 2)
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$%%%", &data_1b8a720)
                    return sub_4e8000(
                        sub_4e8000(
                            sub_4e8000(
                                sub_47ca90(&arg5, arg2, data_1b8a720, data_1b8a734, &arg5, &var_8, 
                                    &var_c), 
                                data_1b8a758, data_1b8a754, arg5, &data_704898), 
                            data_1b8a76c, data_1b8a768, var_8, &data_704898), 
                        data_1b8a780, data_1b8a77c, var_c, &data_704898)
                
            label_518e76:
                
                if (eax_1 != 3)
                    goto label_518e99
                
                goto label_518e8b
            
            if (eax_1 == 0x56 || eax_1 == 0x57 || eax_1 == 0x58 || eax_1 == 0x59
                    || (eax_1 != 0x5a && eax_1 != 0x5b))
                return eax_1
            
            eax_1 = arg4
            
            if (eax_1 != 1 && eax_1 != 2)
            label_518cd1:
                
                if (eax_1 != 3)
                    goto label_518d15
                
                goto label_518d03
            
            int32_t eax_48 = data_1af4e84
            char** eax_50
            
            if (eax_48 == 0)
                eax_50 = sub_4ef190(eax_48, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$", &data_1b8a720)
                data_1b8a7c0 = 0
                data_1b8a7ac = 0
                data_1b8a798 = 0
            else
                eax_50 = eax_48 - 1
                
                if (eax_48 == 1)
                    eax_50 =
                        sub_4ef190(eax_50, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$$$$", &data_1b8a720)
            
            return sub_47ca00(eax_50, arg2, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c, 
                data_1b8a770, data_1b8a784, data_1b8a798, data_1b8a7ac, (data_1b8a7c0).b)
        
        eax_1 = arg4
        
        if (eax_1 == 1 || eax_1 == 2)
            int32_t eax_57 = data_1af4e84
            char** eax_59
            
            if (eax_57 == 0)
                eax_59 = sub_4ef190(eax_57, arg3 + 0x20, *(arg3 + 0x20), "$$$$$", &data_1b8a720)
                data_1b8a7ac = 0
                data_1b8a798 = 0
                data_1b8a784 = 0
            else
                eax_59 = eax_57 - 1
                
                if (eax_57 == 1)
                    eax_59 =
                        sub_4ef190(eax_59, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$$$", &data_1b8a720)
            
            return sub_47c930(eax_59, arg2, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c, 
                data_1b8a770, data_1b8a784, data_1b8a798, (data_1b8a7ac).b)
        
        if (eax_1 == 3)
        label_518fcb:
            eax_18 = sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
            int32_t var_20_33 = 0
            var_24_5 = 0x69
            goto label_518690
        
    label_518fde:
        
        if (eax_1 == 4)
            goto label_518ff3
    case 0x5190fe
        eax_1 = data_1b8b070
        
        if (eax_1 == 0x50)
            return eax_1
        
        if (eax_1 != 0x51 && eax_1 != 0x52)
            if (eax_1 == 0x53)
                return eax_1
            
            if (eax_1 == 0x54 || eax_1 == 0x55)
                eax_1 = arg4
                
                if (eax_1 == 1 || eax_1 == 2)
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                    sub_47cc60(&arg5, arg2, data_1b8a720, data_1b8a734, &arg5)
                    int32_t eax_66 = arg5
                    data_715e98 = eax_66
                    return eax_66
                
                if (eax_1 == 3)
                label_518e8b:
                    eax_36 = sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
                    int32_t var_20_29 = 0
                    var_24_9 = 0x69
                    goto label_518a34
                
            label_518e99:
                
                if (eax_1 == 4)
                    eax_4, ecx_3 = sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), $", &data_1b8a720)
                    int32_t var_20_30 = 0
                    return sub_48cfe0(eax_4, 0x69, ecx_3, 0, data_1b8a720, arg2, 0xffffffff, 
                        0xffffffff)
                
                if (eax_1 == 5)
                    eax_5, ecx_5 = sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), $", &data_1b8a720)
                    int32_t var_20_31 = 1
                    var_24_1 = 0xffffffff
                    var_28_2 = 0xffffffff
                    edx_22 = 0x69
                    goto label_518711
                
                if (eax_1 != 6)
                    return eax_1
                
                int32_t var_24_15 = 0
                return sub_4792d0(
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720), arg2, 
                    data_1b8a720, 0x69, 0, data_1b8a734)
            
            if (eax_1 == 0x56 || eax_1 == 0x57 || eax_1 == 0x58 || eax_1 == 0x59
                    || (eax_1 != 0x5a && eax_1 != 0x5b))
                return eax_1
            
            eax_1 = arg4
            
            if (eax_1 == 1 || eax_1 == 2)
                int32_t eax_61 = data_1af4e84
                char** eax_63
                
                if (eax_61 == 0)
                    eax_63 = sub_4ef190(eax_61, arg3 + 0x20, *(arg3 + 0x20), "$$$$", &data_1b8a720)
                    data_1b8a798 = 0
                    data_1b8a784 = 0
                    data_1b8a770 = 0
                else
                    eax_63 = eax_61 - 1
                    
                    if (eax_61 == 1)
                        eax_63 = sub_4ef190(eax_63, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$$", 
                            &data_1b8a720)
                
                return sub_47cbd0(eax_63, arg2, data_1b8a720, data_1b8a734, data_1b8a748, 
                    data_1b8a75c, data_1b8a770, data_1b8a784, (data_1b8a798).b)
            
            if (eax_1 == 3)
            label_518d03:
                enum MESSAGEBOX_RESULT eax_45 = sub_478c00(
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720), arg2, 
                    data_1b8a720, data_1b8a734, data_1b8a748, 0x69, 0)
                data_715e98 = eax_45
                return eax_45
            
        label_518d15:
            
            if (eax_1 == 4)
                eax_4, ecx_3 = sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
                int32_t var_20_25 = 0
                return sub_48cfe0(eax_4, 0x69, ecx_3, 0, data_1b8a720, arg2, data_1b8a734, 
                    data_1b8a748)
            
            if (eax_1 != 5)
                if (eax_1 == 6)
                    return sub_479250(
                        sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$$", &data_1b8a720), 
                        arg2, data_1b8a720, data_1b8a734, data_1b8a748, 0x69, 0, data_1b8a75c)
                
                return eax_1
            
            eax_5, ecx_5 = sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
            int32_t var_20_26 = 1
            var_24_1 = data_1b8a748
            edx_22 = 0x69
            var_28_2 = data_1b8a734
            goto label_518711
        
        eax_1 = arg4
        
        if (eax_1 == 1 || eax_1 == 2)
            int32_t eax_67 = data_1af4e84
            char** eax_69
            
            if (eax_67 == 0)
                eax_69 = sub_4ef190(eax_67, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
                data_1b8a784 = 0
                data_1b8a770 = 0
                data_1b8a75c = 0
            else
                eax_69 = eax_67 - 1
                
                if (eax_67 == 1)
                    eax_69 =
                        sub_4ef190(eax_69, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$", &data_1b8a720)
            
            return sub_47cb30(eax_69, arg2, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c, 
                data_1b8a770, (data_1b8a784).b)
        
        if (eax_1 == 3)
            goto label_518fcb
        
        if (eax_1 == 4)
        label_518ff3:
            ecx_3 = sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
            eax_4 = data_1b8a734
            int32_t var_20_34 = 0
            return sub_48cfe0(eax_4, 0x69, ecx_3, 0, data_1b8a720, arg2, eax_4, eax_4)
    case 0x519321
        eax_1 = data_1b8b070
        
        if (eax_1 == 0x50)
            return eax_1
        
        if (eax_1 == 0x51 || eax_1 == 0x52)
            eax_1 = arg4
            
            if (eax_1 != 1 && eax_1 != 2)
            label_518fd9:
                
                if (eax_1 == 3)
                    goto label_518fcb
                
                goto label_518fde
            
            int32_t eax_77 = data_1af4e84
            char** eax_79
            
            if (eax_77 == 0)
                eax_79 = sub_4ef190(eax_77, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
                data_1b8a784 = 0
                data_1b8a770 = 0
                data_1b8a75c = 0
            else
                eax_79 = eax_77 - 1
                
                if (eax_77 == 1)
                    eax_79 =
                        sub_4ef190(eax_79, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$", &data_1b8a720)
            
            return sub_47cce0(eax_79, arg2, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c, 
                data_1b8a770, (data_1b8a784).b)
        
        if (eax_1 == 0x53)
            return eax_1
        
        if (eax_1 == 0x54 || eax_1 == 0x55)
            eax_1 = arg4
            
            if (eax_1 != 1 && eax_1 != 2)
                goto label_518e76
            
            sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
            sub_47ce10(&var_8, arg2, data_1b8a720, data_1b8a734, &var_8)
            int32_t eax_76 = var_8
            data_715e98 = eax_76
            return eax_76
        
        if (eax_1 == 0x56 || eax_1 == 0x57 || eax_1 == 0x58 || eax_1 == 0x59
                || (eax_1 != 0x5a && eax_1 != 0x5b))
            return eax_1
        
        eax_1 = arg4
        
        if (eax_1 != 1 && eax_1 != 2)
            goto label_518cd1
        
        int32_t eax_71 = data_1af4e84
        char** eax_73
        
        if (eax_71 == 0)
            eax_73 = sub_4ef190(eax_71, arg3 + 0x20, *(arg3 + 0x20), "$$$$", &data_1b8a720)
            data_1b8a798 = 0
            data_1b8a784 = 0
            data_1b8a770 = 0
        else
            eax_73 = eax_71 - 1
            
            if (eax_71 == 1)
                eax_73 = sub_4ef190(eax_73, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$$", &data_1b8a720)
        
        return sub_47cd80(eax_73, arg2, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c, 
            data_1b8a770, data_1b8a784, (data_1b8a798).b)
    case 0x51951d
        eax_1 = data_1b8b070
        
        if (eax_1 == 0x50)
            return eax_1
        
        if (eax_1 == 0x51 || eax_1 == 0x52)
            eax_1 = arg4
            
            if (eax_1 != 1 && eax_1 != 2)
                goto label_518fd9
            
            int32_t eax_87 = data_1af4e84
            char** eax_89
            
            if (eax_87 == 0)
                eax_89 = sub_4ef190(eax_87, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
                data_1b8a784 = 0
                data_1b8a770 = 0
                data_1b8a75c = 0
            else
                eax_89 = eax_87 - 1
                
                if (eax_87 == 1)
                    eax_89 =
                        sub_4ef190(eax_89, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$", &data_1b8a720)
            
            return sub_47ce90(eax_89, arg2, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c, 
                data_1b8a770, (data_1b8a784).b)
        
        if (eax_1 == 0x53)
            return eax_1
        
        if (eax_1 == 0x54 || eax_1 == 0x55)
            eax_1 = arg4
            
            if (eax_1 != 1 && eax_1 != 2)
                goto label_518e76
            
            sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
            sub_47cfc0(&var_c, arg2, data_1b8a720, data_1b8a734, &var_c)
            int32_t eax_86 = var_c
            data_715e98 = eax_86
            return eax_86
        
        if (eax_1 == 0x56 || eax_1 == 0x57 || eax_1 == 0x58 || eax_1 == 0x59
                || (eax_1 != 0x5a && eax_1 != 0x5b))
            return eax_1
        
        eax_1 = arg4
        
        if (eax_1 != 1 && eax_1 != 2)
            goto label_518cd1
        
        int32_t eax_81 = data_1af4e84
        char** eax_83
        
        if (eax_81 == 0)
            eax_83 = sub_4ef190(eax_81, arg3 + 0x20, *(arg3 + 0x20), "$$$$", &data_1b8a720)
            data_1b8a798 = 0
            data_1b8a784 = 0
            data_1b8a770 = 0
        else
            eax_83 = eax_81 - 1
            
            if (eax_81 == 1)
                eax_83 = sub_4ef190(eax_83, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$$", &data_1b8a720)
        
        return sub_47cf30(eax_83, arg2, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c, 
            data_1b8a770, data_1b8a784, (data_1b8a798).b)
    case 0x519719
        eax_1 = data_1b8b070
        
        if (eax_1 == 0x50)
            return eax_1
        
        if (eax_1 == 0x51 || eax_1 == 0x52)
            eax_1 = arg4
            
            if (eax_1 == 1 || eax_1 == 2)
                int32_t eax_105 = data_1af4e84
                char** eax_107
                
                if (eax_105 == 0)
                    eax_107 =
                        sub_4ef190(eax_105, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$", &data_1b8a720)
                    data_1b8a7c0 = 0
                    data_1b8a7ac = 0
                    data_1b8a798 = 0
                else
                    eax_107 = eax_105 - 1
                    
                    if (eax_105 == 1)
                        eax_107 = sub_4ef190(eax_107, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$$$$", 
                            &data_1b8a720)
                
                return sub_47d040(eax_107, arg2, data_1b8a720, data_1b8a734, data_1b8a748, 
                    data_1b8a75c, data_1b8a770, data_1b8a784, data_1b8a798, data_1b8a7ac, 
                    (data_1b8a7c0).b)
            
            if (eax_1 == 3)
            label_519abb:
                eax_18 = sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                int32_t var_20_54 = 0
                var_24_5 = 0x6a
                goto label_518690
            
        label_519ace:
            
            if (eax_1 != 4)
                goto label_519afb
            
            goto label_519ae3
        
        if (eax_1 == 0x53)
            return eax_1
        
        if (eax_1 == 0x54 || eax_1 == 0x55)
            eax_1 = arg4
            
            if (eax_1 == 1 || eax_1 == 2)
                sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$%%%%", &data_1b8a720)
                int32_t var_10
                int32_t eax_102 = sub_4e8000(
                    sub_4e8000(
                        sub_47d1b0(&arg5, arg2, data_1b8a720, data_1b8a734, &arg5, &var_c, &var_8, 
                            &var_10), 
                        data_1b8a758, data_1b8a754, arg5, &data_704898), 
                    data_1b8a76c, data_1b8a768, var_c, &data_704898)
                return sub_4e8000(
                    sub_4e8000(eax_102, data_1b8a780, data_1b8a77c, var_8, &data_704898), 
                    data_1b8a794, data_1b8a790, var_10, &data_704898)
            
        label_519946:
            
            if (eax_1 != 3)
                goto label_519969
            
            goto label_51995b
        
        if (eax_1 == 0x56 || eax_1 == 0x57 || eax_1 == 0x58 || eax_1 == 0x59
                || (eax_1 != 0x5a && eax_1 != 0x5b))
            return eax_1
        
        eax_1 = arg4
        
        if (eax_1 != 1 && eax_1 != 2)
        label_51979b:
            
            if (eax_1 != 3)
                goto label_5197df
            
            goto label_5197cd
        
        int32_t eax_95 = data_1af4e84
        char** eax_97
        
        if (eax_95 == 0)
            eax_97 = sub_4ef190(eax_95, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$$", &data_1b8a720)
            data_1b8a7d4 = 0
            data_1b8a7c0 = 0
            data_1b8a7ac = 0
        else
            eax_97 = eax_95 - 1
            
            if (eax_95 == 1)
                eax_97 =
                    sub_4ef190(eax_97, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$$$$$", &data_1b8a720)
        
        return sub_47d110(eax_97, arg2, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c, 
            data_1b8a770, data_1b8a784, data_1b8a798, data_1b8a7ac, data_1b8a7c0, (data_1b8a7d4).b)
    case 0x519bf4
        eax_1 = data_1b8b070
        
        if (eax_1 == 0x50)
            return eax_1
        
        if (eax_1 == 0x51 || eax_1 == 0x52)
            eax_1 = arg4
            
            if (eax_1 == 1 || eax_1 == 2)
                int32_t eax_115 = data_1af4e84
                char** eax_117
                
                if (eax_115 == 0)
                    eax_117 = sub_4ef190(eax_115, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
                    data_1b8a784 = 0
                    data_1b8a770 = 0
                    data_1b8a75c = 0
                else
                    eax_117 = eax_115 - 1
                    
                    if (eax_115 == 1)
                        eax_117 = sub_4ef190(eax_117, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$", 
                            &data_1b8a720)
                
                return sub_47d260(eax_117, arg2, data_1b8a720, data_1b8a734, data_1b8a748, 
                    data_1b8a75c, data_1b8a770, (data_1b8a784).b)
            
            if (eax_1 == 3)
                goto label_519abb
            
            if (eax_1 == 4)
            label_519ae3:
                ecx_3 = sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                eax_4 = data_1b8a734
                int32_t var_20_55 = 0
                return sub_48cfe0(eax_4, 0x6a, ecx_3, 0, data_1b8a720, arg2, eax_4, eax_4)
            
        label_519afb:
            
            if (eax_1 == 5)
                ecx_5 = sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                eax_5 = data_1b8a734
                edx_22 = 0x6a
                int32_t var_20_56 = 1
                var_24_1 = eax_5
                var_28_2 = eax_5
                goto label_518711
            
            if (eax_1 != 6)
                return eax_1
            
            int32_t var_24_32 = 0
            return sub_4791e0(sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720), 
                arg2, data_1b8a720, data_1b8a734, 0x6a, 0, data_1b8a748)
        
        if (eax_1 == 0x53)
            return eax_1
        
        if (eax_1 == 0x54 || eax_1 == 0x55)
            eax_1 = arg4
            
            if (eax_1 == 1 || eax_1 == 2)
                sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                sub_47d390(&arg5, arg2, data_1b8a720, data_1b8a734, &arg5)
                int32_t eax_114 = arg5
                data_715e98 = eax_114
                return eax_114
            
            if (eax_1 == 3)
            label_51995b:
                eax_36 = sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
                int32_t var_20_50 = 0
                var_24_9 = 0x6a
                goto label_518a34
            
        label_519969:
            
            if (eax_1 == 4)
                eax_4, ecx_3 = sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
                int32_t var_20_51 = 0
                return sub_48cfe0(eax_4, 0x6a, ecx_3, 0, data_1b8a720, arg2, 0xffffffff, 0xffffffff)
            
            if (eax_1 == 5)
                eax_5, ecx_5 = sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
                int32_t var_20_52 = 1
                var_24_1 = 0xffffffff
                var_28_2 = 0xffffffff
                edx_22 = 0x6a
                goto label_518711
            
            if (eax_1 != 6)
                return eax_1
            
            int32_t var_24_29 = 0
            return sub_4792d0(sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720), 
                arg2, data_1b8a720, 0x6a, 0, data_1b8a734)
        
        if (eax_1 == 0x56 || eax_1 == 0x57 || eax_1 == 0x58 || eax_1 == 0x59
                || (eax_1 != 0x5a && eax_1 != 0x5b))
            return eax_1
        
        eax_1 = arg4
        
        if (eax_1 == 1 || eax_1 == 2)
            int32_t eax_109 = data_1af4e84
            char** eax_111
            
            if (eax_109 == 0)
                eax_111 = sub_4ef190(eax_109, arg3 + 0x20, *(arg3 + 0x20), "$$$$", &data_1b8a720)
                data_1b8a798 = 0
                data_1b8a784 = 0
                data_1b8a770 = 0
            else
                eax_111 = eax_109 - 1
                
                if (eax_109 == 1)
                    eax_111 =
                        sub_4ef190(eax_111, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$$", &data_1b8a720)
            
            return sub_47d300(eax_111, arg2, data_1b8a720, data_1b8a734, data_1b8a748, 
                data_1b8a75c, data_1b8a770, data_1b8a784, (data_1b8a798).b)
        
        if (eax_1 == 3)
        label_5197cd:
            enum MESSAGEBOX_RESULT eax_92 = sub_478c00(
                sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720), arg2, 
                data_1b8a720, data_1b8a734, data_1b8a748, 0x6a, 0)
            data_715e98 = eax_92
            return eax_92
        
    label_5197df:
        
        if (eax_1 == 4)
            eax_4, ecx_3 = sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
            int32_t var_20_46 = 0
            return sub_48cfe0(eax_4, 0x6a, ecx_3, 0, data_1b8a720, arg2, data_1b8a734, data_1b8a748)
        
        if (eax_1 != 5)
            if (eax_1 == 6)
                return sub_479250(
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$$", &data_1b8a720), arg2, 
                    data_1b8a720, data_1b8a734, data_1b8a748, 0x6a, 0, data_1b8a75c)
            
            return eax_1
        
        eax_5, ecx_5 = sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
        int32_t var_20_47 = 1
        var_24_1 = data_1b8a748
        edx_22 = 0x6a
        var_28_2 = data_1b8a734
        goto label_518711
    case 0x519e17
        eax_1 = data_1b8b070
        
        if (eax_1 == 0x50)
            return eax_1
        
        if (eax_1 == 0x51 || eax_1 == 0x52)
            eax_1 = arg4
            
            if (eax_1 != 1 && eax_1 != 2)
            label_519ac9:
                
                if (eax_1 == 3)
                    goto label_519abb
                
                goto label_519ace
            
            int32_t eax_125 = data_1af4e84
            char** eax_127
            
            if (eax_125 == 0)
                eax_127 = sub_4ef190(eax_125, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
                data_1b8a784 = 0
                data_1b8a770 = 0
                data_1b8a75c = 0
            else
                eax_127 = eax_125 - 1
                
                if (eax_125 == 1)
                    eax_127 =
                        sub_4ef190(eax_127, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$", &data_1b8a720)
            
            return sub_47d410(eax_127, arg2, data_1b8a720, data_1b8a734, data_1b8a748, 
                data_1b8a75c, data_1b8a770, (data_1b8a784).b)
        
        if (eax_1 == 0x53)
            return eax_1
        
        if (eax_1 == 0x54 || eax_1 == 0x55)
            eax_1 = arg4
            
            if (eax_1 != 1 && eax_1 != 2)
                goto label_519946
            
            sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
            sub_47d540(&var_c, arg2, data_1b8a720, data_1b8a734, &var_c)
            int32_t eax_124 = var_c
            data_715e98 = eax_124
            return eax_124
        
        if (eax_1 == 0x56 || eax_1 == 0x57 || eax_1 == 0x58 || eax_1 == 0x59
                || (eax_1 != 0x5a && eax_1 != 0x5b))
            return eax_1
        
        eax_1 = arg4
        
        if (eax_1 != 1 && eax_1 != 2)
            goto label_51979b
        
        int32_t eax_119 = data_1af4e84
        char** eax_121
        
        if (eax_119 == 0)
            eax_121 = sub_4ef190(eax_119, arg3 + 0x20, *(arg3 + 0x20), "$$$$", &data_1b8a720)
            data_1b8a798 = 0
            data_1b8a784 = 0
            data_1b8a770 = 0
        else
            eax_121 = eax_119 - 1
            
            if (eax_119 == 1)
                eax_121 = sub_4ef190(eax_121, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$$", &data_1b8a720)
        
        return sub_47d4b0(eax_121, arg2, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c, 
            data_1b8a770, data_1b8a784, (data_1b8a798).b)
    case 0x51a013
        eax_1 = data_1b8b070
        
        if (eax_1 == 0x50)
            return eax_1
        
        if (eax_1 == 0x51 || eax_1 == 0x52)
            eax_1 = arg4
            
            if (eax_1 != 1 && eax_1 != 2)
                goto label_519ac9
            
            int32_t eax_135 = data_1af4e84
            char** eax_137
            
            if (eax_135 == 0)
                eax_137 = sub_4ef190(eax_135, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
                data_1b8a784 = 0
                data_1b8a770 = 0
                data_1b8a75c = 0
            else
                eax_137 = eax_135 - 1
                
                if (eax_135 == 1)
                    eax_137 =
                        sub_4ef190(eax_137, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$", &data_1b8a720)
            
            return sub_47d5c0(eax_137, arg2, data_1b8a720, data_1b8a734, data_1b8a748, 
                data_1b8a75c, data_1b8a770, (data_1b8a784).b)
        
        if (eax_1 == 0x53)
            return eax_1
        
        if (eax_1 == 0x54 || eax_1 == 0x55)
            eax_1 = arg4
            
            if (eax_1 != 1 && eax_1 != 2)
                goto label_519946
            
            sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
            sub_47d6f0(&var_8, arg2, data_1b8a720, data_1b8a734, &var_8)
            int32_t eax_134 = var_8
            data_715e98 = eax_134
            return eax_134
        
        if (eax_1 == 0x56 || eax_1 == 0x57 || eax_1 == 0x58 || eax_1 == 0x59
                || (eax_1 != 0x5a && eax_1 != 0x5b))
            return eax_1
        
        eax_1 = arg4
        
        if (eax_1 != 1 && eax_1 != 2)
            goto label_51979b
        
        int32_t eax_129 = data_1af4e84
        char** eax_131
        
        if (eax_129 == 0)
            eax_131 = sub_4ef190(eax_129, arg3 + 0x20, *(arg3 + 0x20), "$$$$", &data_1b8a720)
            data_1b8a798 = 0
            data_1b8a784 = 0
            data_1b8a770 = 0
        else
            eax_131 = eax_129 - 1
            
            if (eax_129 == 1)
                eax_131 = sub_4ef190(eax_131, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$$", &data_1b8a720)
        
        return sub_47d660(eax_131, arg2, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c, 
            data_1b8a770, data_1b8a784, (data_1b8a798).b)

if (eax_1 == 5)
    ecx_5 = sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
    eax_5 = data_1b8a734
    edx_22 = 0x69
    int32_t var_20_35 = 1
    var_24_1 = eax_5
    var_28_2 = eax_5
    goto label_518711

if (eax_1 != 6)
    return eax_1

int32_t var_24_17 = 0
return sub_4791e0(sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720), arg2, 
    data_1b8a720, data_1b8a734, 0x69, 0, data_1b8a748)
