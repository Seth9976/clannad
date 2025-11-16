// 函数: sub_505780
// 地址: 0x505780
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_24_4
int32_t var_24_9
int32_t var_18_9
int32_t var_18_19
int32_t var_c
int32_t var_8
int32_t eax_1
char** eax_21
char** eax_33

switch (jump_table_50760c[arg5])
    case 0x505793
        eax_1 = data_1b8b070
        
        if (eax_1 == 0x50)
            return eax_1
        
        if (eax_1 == 0x51 || eax_1 == 0x52)
            if (arg4 == 1 || arg4 == 2)
                int32_t eax_29 = data_1af4e84
                char** eax_31
                
                if (eax_29 == 0)
                    eax_31 = sub_4ef190(eax_29, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                    data_1b8a770 = 0
                    data_1b8a75c = 0
                    data_1b8a748 = 0
                else
                    eax_31 = eax_29 - 1
                    
                    if (eax_29 == 1)
                        eax_31 =
                            sub_4ef190(eax_31, arg3 + 0x20, *(arg3 + 0x20), "$$$$$", &data_1b8a720)
                
                return sub_46b130(eax_31, arg2, data_1b8a720, data_1b8a734, data_1b8a748, 
                    data_1b8a75c, (data_1b8a770).b)
            
            if (arg4 == 3)
                eax_21 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
                int32_t var_20_5 = 0
                var_24_4 = 0x6d
            label_505ace:
                int32_t eax_22 = sub_466c70(eax_21, arg2, data_1b8a720, var_24_4, 0)
                data_715e98 = eax_22
                return eax_22
            
            if (arg4 == 4)
                int32_t ecx_19 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
                int32_t eax_23 = data_1b8a720
                int32_t var_20_6 = 0
                return sub_48cf80(eax_23, 0x6d, ecx_19, 0, eax_23, eax_23, arg2)
            
            if (arg4 == 5)
                int32_t ecx_21 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
                int32_t eax_25 = data_1b8a720
                int32_t var_20_7 = 1
                int32_t eax_26 = sub_48cf80(eax_25, 0x6d, ecx_21, 0, eax_25, eax_25, arg2)
                sub_445260()
                return eax_26
            
            if (arg4 != 6)
                return arg4
            
            int32_t var_24_7 = 0
            return sub_467500(sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720), 
                arg2, data_1b8a720, 0x6d, 0, data_1b8a734)
        
        if (eax_1 == 0x53)
            return eax_1
        
        if (eax_1 == 0x54 || eax_1 == 0x55)
            if (arg4 == 1 || arg4 == 2)
                sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
                void* eax_19 = data_1b8a720
                uint32_t ecx_15 = 0
                
                if (eax_19 s>= 0 && eax_19 s< data_7031bc)
                    eax_19 = (arg2 + (eax_19 << 1)) * 0x650
                    ecx_15 = zx.d(*(eax_19 + 0x72d80d))
                
                data_715e98 = ecx_15
                return eax_19
            
            if (arg4 == 3)
                int32_t eax_14 = sub_466d80(arg4, arg4 + 0x6a, arg2, 0)
                data_715e98 = eax_14
                return eax_14
            
            if (arg4 == 4)
                int32_t var_18_1 = 0
                return sub_48cf80(arg4, arg4 + 0x69, arg3, 0, 0xffffffff, 0xffffffff, arg2)
            
            if (arg4 == 5)
                int32_t var_18_2 = 1
                int32_t eax_16 =
                    sub_48cf80(arg4, arg4 + 0x68, arg3, 0, 0xffffffff, 0xffffffff, arg2)
                sub_445260()
                return eax_16
            
            if (arg4 == 6)
                return sub_4675e0(sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), $", &data_1b8a720), 
                    0x6d, arg2, 0, data_1b8a720)
            
            return arg4
        
        if (eax_1 == 0x56 || eax_1 == 0x57 || eax_1 == 0x58 || eax_1 == 0x59
                || (eax_1 != 0x5a && eax_1 != 0x5b))
            return eax_1
        
        if (arg4 == 1 || arg4 == 2)
            int32_t eax_10 = data_1af4e84
            char** eax_12
            
            if (eax_10 == 0)
                eax_12 = sub_4ef190(eax_10, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
                data_1b8a784 = 0
                data_1b8a770 = 0
                data_1b8a75c = 0
            else
                eax_12 = eax_10 - 1
                
                if (eax_10 == 1)
                    eax_12 =
                        sub_4ef190(eax_12, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$", &data_1b8a720)
            
            return sub_46b190(eax_12, data_1b8a734, data_1b8a720, arg2, data_1b8a748, data_1b8a75c, 
                data_1b8a770, (data_1b8a784).b)
        
        if (arg4 == 3)
            int32_t eax_3 = sub_466cd0(
                sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720), data_1b8a734, 
                data_1b8a720, arg2, 0x6d, 0)
            data_715e98 = eax_3
            return eax_3
        
        if (arg4 == 4)
            char** eax_4
            int32_t ecx_3
            eax_4, ecx_3 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
            int32_t var_20 = 0
            return sub_48cf80(eax_4, 0x6d, ecx_3, 0, data_1b8a720, data_1b8a734, arg2)
        
        if (arg4 == 5)
            char** eax_6
            int32_t ecx_5
            eax_6, ecx_5 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
            int32_t var_20_1 = 1
            int32_t eax_7 = sub_48cf80(eax_6, 0x6d, ecx_5, 0, data_1b8a720, data_1b8a734, arg2)
            sub_445260()
            return eax_7
        
        if (arg4 != 6)
            return arg4
        
        int32_t var_24_2 = 0
        return sub_467550(sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720), 
            data_1b8a734, data_1b8a720, arg2, 0x6d, 0, data_1b8a748)
    case 0x505c19
        eax_1 = data_1b8b070
        
        if (eax_1 == 0x50)
            return eax_1
        
        if (eax_1 == 0x51 || eax_1 == 0x52)
            if (arg4 == 1 || arg4 == 2)
                int32_t eax_54 = data_1af4e84
                char** eax_56
                
                if (eax_54 == 0)
                    eax_56 = sub_4ef190(eax_54, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                    data_1b8a770 = 0
                    data_1b8a75c = 0
                    data_1b8a748 = 0
                else
                    eax_56 = eax_54 - 1
                    
                    if (eax_54 == 1)
                        eax_56 =
                            sub_4ef190(eax_56, arg3 + 0x20, *(arg3 + 0x20), "$$$$$", &data_1b8a720)
                
                return sub_46b220(eax_56, arg2, data_1b8a720, data_1b8a734, data_1b8a748, 
                    data_1b8a75c, (data_1b8a770).b)
            
            if (arg4 == 3)
                eax_21 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
                int32_t var_20_15 = 0
                var_24_4 = 0x6e
                goto label_505ace
            
            if (arg4 == 4)
                int32_t ecx_44 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
                int32_t eax_50 = data_1b8a720
                int32_t var_20_16 = 0
                return sub_48cf80(eax_50, 0x6e, ecx_44, 0, eax_50, eax_50, arg2)
            
            if (arg4 == 5)
                int32_t ecx_46 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
                int32_t eax_52 = data_1b8a720
                int32_t var_20_17 = 1
                int32_t eax_53 = sub_48cf80(eax_52, 0x6e, ecx_46, 0, eax_52, eax_52, arg2)
                sub_445260()
                return eax_53
            
            if (arg4 != 6)
                return arg4
            
            int32_t var_24_16 = 0
            return sub_467500(sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720), 
                arg2, data_1b8a720, 0x6e, 0, data_1b8a734)
        
        if (eax_1 == 0x53)
            return eax_1
        
        if (eax_1 == 0x54 || eax_1 == 0x55)
            if (arg4 == 1 || arg4 == 2)
                sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
                void* eax_48 = data_1b8a720
                int32_t ecx_41 = 0
                
                if (eax_48 s>= 0 && eax_48 s< data_7031bc)
                    eax_48 = (arg2 + (eax_48 << 1)) * 0x650
                    ecx_41 = *(eax_48 + 0x72d820)
                
                data_715e98 = ecx_41
                return eax_48
            
            if (arg4 == 3)
                int32_t eax_43 = sub_466d80(arg4, arg4 + 0x6b, arg2, 0)
                data_715e98 = eax_43
                return eax_43
            
            if (arg4 == 4)
                int32_t var_18_5 = 0
                return sub_48cf80(arg4, arg4 + 0x6a, arg3, 0, 0xffffffff, 0xffffffff, arg2)
            
            if (arg4 == 5)
                int32_t var_18_6 = 1
                int32_t eax_45 =
                    sub_48cf80(arg4, arg4 + 0x69, arg3, 0, 0xffffffff, 0xffffffff, arg2)
                sub_445260()
                return eax_45
            
            if (arg4 == 6)
                return sub_4675e0(sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), $", &data_1b8a720), 
                    0x6e, arg2, 0, data_1b8a720)
            
            return arg4
        
        if (eax_1 == 0x56 || eax_1 == 0x57 || eax_1 == 0x58 || eax_1 == 0x59
                || (eax_1 != 0x5a && eax_1 != 0x5b))
            return eax_1
        
        if (arg4 == 1 || arg4 == 2)
            int32_t eax_39 = data_1af4e84
            char** eax_41
            
            if (eax_39 == 0)
                eax_41 = sub_4ef190(eax_39, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
                data_1b8a784 = 0
                data_1b8a770 = 0
                data_1b8a75c = 0
            else
                eax_41 = eax_39 - 1
                
                if (eax_39 == 1)
                    eax_41 =
                        sub_4ef190(eax_41, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$", &data_1b8a720)
            
            return sub_46b280(eax_41, data_1b8a734, data_1b8a720, arg2, data_1b8a748, data_1b8a75c, 
                data_1b8a770, (data_1b8a784).b)
        
        if (arg4 == 3)
            eax_33 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
            int32_t var_20_10 = 0
            var_24_9 = 0x6e
        label_505cc6:
            int32_t eax_34 = sub_466cd0(eax_33, data_1b8a734, data_1b8a720, arg2, var_24_9, 0)
            data_715e98 = eax_34
            return eax_34
        
        if (arg4 == 4)
            char** eax_35
            int32_t ecx_30
            eax_35, ecx_30 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
            int32_t var_20_11 = 0
            return sub_48cf80(eax_35, 0x6e, ecx_30, 0, data_1b8a720, data_1b8a734, arg2)
        
        if (arg4 == 5)
            char** eax_37
            int32_t ecx_32
            eax_37, ecx_32 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
            int32_t var_20_12 = 1
            int32_t eax_38 = sub_48cf80(eax_37, 0x6e, ecx_32, 0, data_1b8a720, data_1b8a734, arg2)
            sub_445260()
            return eax_38
        
        if (arg4 != 6)
            return arg4
        
        int32_t var_24_12 = 0
        return sub_467550(sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720), 
            data_1b8a734, data_1b8a720, arg2, 0x6e, 0, data_1b8a748)
    case 0x506064
        eax_1 = data_1b8b070
        
        if (eax_1 == 0x50)
            return eax_1
        
        if (eax_1 != 0x51 && eax_1 != 0x52)
            if (eax_1 == 0x53)
                return eax_1
            
            if (eax_1 == 0x54 || eax_1 == 0x55)
                eax_1 = arg4
                
                if (eax_1 == 1 || eax_1 == 2)
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$%%%", &data_1b8a720)
                    return sub_4e8000(
                        sub_4e8000(
                            sub_4e8000(
                                sub_46a6b0(&arg5, arg2, data_1b8a720, &arg5, &var_8, &var_c), 
                                data_1b8a744, data_1b8a740, arg5, &data_704898), 
                            data_1b8a758, data_1b8a754, var_8, &data_704898), 
                        data_1b8a76c, data_1b8a768, var_c, &data_704898)
                
                if (eax_1 == 3)
                label_506275:
                    int32_t eax_66 = sub_466d80(eax_1, 0x69, arg2, 0)
                    data_715e98 = eax_66
                    return eax_66
                
            label_50628c:
                
                if (eax_1 != 4)
                    goto label_5062ac
                
                var_18_9 = 0
                return sub_48cf80(eax_1, 0x69, arg3, 0, 0xffffffff, 0xffffffff, arg2)
            
            if (eax_1 == 0x56 || eax_1 == 0x57 || eax_1 == 0x58 || eax_1 == 0x59
                    || (eax_1 != 0x5a && eax_1 != 0x5b))
                return eax_1
            
            eax_1 = arg4
            
            if (eax_1 == 1 || eax_1 == 2)
                int32_t eax_62 = data_1af4e84
                char** eax_64
                
                if (eax_62 == 0)
                    eax_64 = sub_4ef190(eax_62, arg3 + 0x20, *(arg3 + 0x20), "$$$$$", &data_1b8a720)
                    data_1b8a7ac = 0
                    data_1b8a798 = 0
                    data_1b8a784 = 0
                else
                    eax_64 = eax_62 - 1
                    
                    if (eax_62 == 1)
                        eax_64 = sub_4ef190(eax_64, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$$$", 
                            &data_1b8a720)
                
                return sub_46a610(eax_64, data_1b8a734, data_1b8a720, arg2, data_1b8a748, 
                    data_1b8a75c, data_1b8a770, data_1b8a784, data_1b8a798, (data_1b8a7ac).b)
            
            if (eax_1 == 3)
            label_5060fb:
                eax_33 = sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                int32_t var_20_19 = 0
                var_24_9 = 0x69
                goto label_505cc6
            
        label_50610e:
            
            if (eax_1 != 4)
                goto label_50614b
            
            goto label_506123
        
        eax_1 = arg4
        
        if (eax_1 == 1 || eax_1 == 2)
            int32_t eax_80 = data_1af4e84
            char** eax_82
            
            if (eax_80 == 0)
                eax_82 = sub_4ef190(eax_80, arg3 + 0x20, *(arg3 + 0x20), "$$$$", &data_1b8a720)
                data_1b8a798 = 0
                data_1b8a784 = 0
                data_1b8a770 = 0
            else
                eax_82 = eax_80 - 1
                
                if (eax_80 == 1)
                    eax_82 =
                        sub_4ef190(eax_82, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$$", &data_1b8a720)
            
            return sub_46a590(eax_82, arg2, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c, 
                data_1b8a770, data_1b8a784, (data_1b8a798).b)
        
        if (eax_1 == 3)
        label_5063b7:
            eax_21 = sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
            int32_t var_20_25 = 0
            var_24_4 = 0x69
            goto label_505ace
        
    label_5063ca:
        
        if (eax_1 == 4)
            goto label_5063df
    case 0x5064ff
        eax_1 = data_1b8b070
        
        if (eax_1 == 0x50)
            return eax_1
        
        if (eax_1 != 0x51 && eax_1 != 0x52)
            if (eax_1 == 0x53)
                return eax_1
            
            if (eax_1 == 0x54 || eax_1 == 0x55)
                eax_1 = arg4
                
                if (eax_1 == 1 || eax_1 == 2)
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
                    void* eax_88 = data_1b8a720
                    int32_t ecx_81 = 0
                    
                    if (eax_88 s>= 0 && eax_88 s< data_7031bc)
                        eax_88 = (arg2 + (eax_88 << 1)) * 0x650
                        ecx_81 = *(eax_88 + 0x72d814)
                    
                    data_715e98 = ecx_81
                    return eax_88
                
                if (eax_1 == 3)
                    goto label_506275
                
                if (eax_1 == 4)
                    var_18_9 = 0
                    return sub_48cf80(eax_1, 0x69, arg3, 0, 0xffffffff, 0xffffffff, arg2)
                
            label_5062ac:
                
                if (eax_1 == 5)
                    int32_t var_18_10 = 1
                    int32_t eax_68 =
                        sub_48cf80(eax_1, eax_1 + 0x64, arg3, 0, 0xffffffff, 0xffffffff, arg2)
                    sub_445260()
                    return eax_68
                
                if (eax_1 == 6)
                    return sub_4675e0(sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), $", 
                        &data_1b8a720), 0x69, arg2, 0, data_1b8a720)
                
                return eax_1
            
            if (eax_1 == 0x56 || eax_1 == 0x57 || eax_1 == 0x58 || eax_1 == 0x59
                    || (eax_1 != 0x5a && eax_1 != 0x5b))
                return eax_1
            
            eax_1 = arg4
            
            if (eax_1 == 1 || eax_1 == 2)
                int32_t eax_84 = data_1af4e84
                char** eax_86
                
                if (eax_84 == 0)
                    eax_86 = sub_4ef190(eax_84, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
                    data_1b8a784 = 0
                    data_1b8a770 = 0
                    data_1b8a75c = 0
                else
                    eax_86 = eax_84 - 1
                    
                    if (eax_84 == 1)
                        eax_86 =
                            sub_4ef190(eax_86, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$", &data_1b8a720)
                
                return sub_46a760(eax_86, data_1b8a734, data_1b8a720, arg2, data_1b8a748, 
                    data_1b8a75c, data_1b8a770, (data_1b8a784).b)
            
            if (eax_1 == 3)
                goto label_5060fb
            
            if (eax_1 == 4)
            label_506123:
                char** eax_58
                int32_t ecx_53
                eax_58, ecx_53 = sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                int32_t var_20_20 = 0
                return sub_48cf80(eax_58, 0x69, ecx_53, 0, data_1b8a720, data_1b8a734, arg2)
            
        label_50614b:
            
            if (eax_1 == 5)
                char** eax_60
                int32_t ecx_55
                eax_60, ecx_55 = sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                int32_t var_20_21 = 1
                int32_t eax_61 =
                    sub_48cf80(eax_60, 0x69, ecx_55, 0, data_1b8a720, data_1b8a734, arg2)
                sub_445260()
                return eax_61
            
            if (eax_1 != 6)
                return eax_1
            
            int32_t var_24_20 = 0
            return sub_467550(sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720), 
                data_1b8a734, data_1b8a720, arg2, 0x69, 0, data_1b8a748)
        
        eax_1 = arg4
        
        if (eax_1 == 1 || eax_1 == 2)
            int32_t eax_90 = data_1af4e84
            char** eax_92
            
            if (eax_90 == 0)
                eax_92 = sub_4ef190(eax_90, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                data_1b8a770 = 0
                data_1b8a75c = 0
                data_1b8a748 = 0
            else
                eax_92 = eax_90 - 1
                
                if (eax_90 == 1)
                    eax_92 = sub_4ef190(eax_92, arg3 + 0x20, *(arg3 + 0x20), "$$$$$", &data_1b8a720)
            
            return sub_46a700(eax_92, arg2, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c, 
                (data_1b8a770).b)
        
        if (eax_1 == 3)
            goto label_5063b7
        
        if (eax_1 == 4)
        label_5063df:
            int32_t ecx_70 = sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
            int32_t eax_76 = data_1b8a720
            int32_t var_20_26 = 0
            return sub_48cf80(eax_76, 0x69, ecx_70, 0, eax_76, eax_76, arg2)
    case 0x506730
        eax_1 = data_1b8b070
        
        if (eax_1 == 0x50)
            return eax_1
        
        if (eax_1 == 0x51 || eax_1 == 0x52)
            eax_1 = arg4
            
            if (eax_1 != 1 && eax_1 != 2)
            label_5063c5:
                
                if (eax_1 == 3)
                    goto label_5063b7
                
                goto label_5063ca
            
            int32_t eax_100 = data_1af4e84
            char** eax_102
            
            if (eax_100 == 0)
                eax_102 = sub_4ef190(eax_100, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                data_1b8a770 = 0
                data_1b8a75c = 0
                data_1b8a748 = 0
            else
                eax_102 = eax_100 - 1
                
                if (eax_100 == 1)
                    eax_102 =
                        sub_4ef190(eax_102, arg3 + 0x20, *(arg3 + 0x20), "$$$$$", &data_1b8a720)
            
            return sub_46a7f0(eax_102, arg2, data_1b8a720, data_1b8a734, data_1b8a748, 
                data_1b8a75c, (data_1b8a770).b)
        
        if (eax_1 == 0x53)
            return eax_1
        
        if (eax_1 == 0x54 || eax_1 == 0x55)
            eax_1 = arg4
            
            if (eax_1 != 1 && eax_1 != 2)
            label_506287:
                
                if (eax_1 == 3)
                    goto label_506275
                
                goto label_50628c
            
            sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
            void* eax_98 = data_1b8a720
            int32_t ecx_89 = 0
            
            if (eax_98 s>= 0 && eax_98 s< data_7031bc)
                eax_98 = (arg2 + (eax_98 << 1)) * 0x650
                ecx_89 = *(eax_98 + 0x72d818)
            
            data_715e98 = ecx_89
            return eax_98
        
        if (eax_1 == 0x56 || eax_1 == 0x57 || eax_1 == 0x58 || eax_1 == 0x59
                || (eax_1 != 0x5a && eax_1 != 0x5b))
            return eax_1
        
        eax_1 = arg4
        
        if (eax_1 != 1 && eax_1 != 2)
        label_506109:
            
            if (eax_1 == 3)
                goto label_5060fb
            
            goto label_50610e
        
        int32_t eax_94 = data_1af4e84
        char** eax_96
        
        if (eax_94 == 0)
            eax_96 = sub_4ef190(eax_94, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
            data_1b8a784 = 0
            data_1b8a770 = 0
            data_1b8a75c = 0
        else
            eax_96 = eax_94 - 1
            
            if (eax_94 == 1)
                eax_96 = sub_4ef190(eax_96, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$", &data_1b8a720)
        
        return sub_46a850(eax_96, data_1b8a734, data_1b8a720, arg2, data_1b8a748, data_1b8a75c, 
            data_1b8a770, (data_1b8a784).b)
    case 0x506928
        eax_1 = data_1b8b070
        
        if (eax_1 == 0x50)
            return eax_1
        
        if (eax_1 == 0x51 || eax_1 == 0x52)
            eax_1 = arg4
            
            if (eax_1 != 1 && eax_1 != 2)
                goto label_5063c5
            
            int32_t eax_110 = data_1af4e84
            char** eax_112
            
            if (eax_110 == 0)
                eax_112 = sub_4ef190(eax_110, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                data_1b8a770 = 0
                data_1b8a75c = 0
                data_1b8a748 = 0
            else
                eax_112 = eax_110 - 1
                
                if (eax_110 == 1)
                    eax_112 =
                        sub_4ef190(eax_112, arg3 + 0x20, *(arg3 + 0x20), "$$$$$", &data_1b8a720)
            
            return sub_46a8e0(eax_112, arg2, data_1b8a720, data_1b8a734, data_1b8a748, 
                data_1b8a75c, (data_1b8a770).b)
        
        if (eax_1 == 0x53)
            return eax_1
        
        if (eax_1 == 0x54 || eax_1 == 0x55)
            eax_1 = arg4
            
            if (eax_1 != 1 && eax_1 != 2)
                goto label_506287
            
            sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
            void* eax_108 = data_1b8a720
            int32_t ecx_97 = 0
            
            if (eax_108 s>= 0 && eax_108 s< data_7031bc)
                eax_108 = (arg2 + (eax_108 << 1)) * 0x650
                ecx_97 = *(eax_108 + 0x72d81c)
            
            data_715e98 = ecx_97
            return eax_108
        
        if (eax_1 == 0x56 || eax_1 == 0x57 || eax_1 == 0x58 || eax_1 == 0x59
                || (eax_1 != 0x5a && eax_1 != 0x5b))
            return eax_1
        
        eax_1 = arg4
        
        if (eax_1 != 1 && eax_1 != 2)
            goto label_506109
        
        int32_t eax_104 = data_1af4e84
        char** eax_106
        
        if (eax_104 == 0)
            eax_106 = sub_4ef190(eax_104, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
            data_1b8a784 = 0
            data_1b8a770 = 0
            data_1b8a75c = 0
        else
            eax_106 = eax_104 - 1
            
            if (eax_104 == 1)
                eax_106 = sub_4ef190(eax_106, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$", &data_1b8a720)
        
        return sub_46a940(eax_106, data_1b8a734, data_1b8a720, arg2, data_1b8a748, data_1b8a75c, 
            data_1b8a770, (data_1b8a784).b)
    case 0x506b20
        eax_1 = data_1b8b070
        
        if (eax_1 == 0x50)
            return eax_1
        
        if (eax_1 == 0x51 || eax_1 == 0x52)
            eax_1 = arg4
            
            if (eax_1 == 1 || eax_1 == 2)
                int32_t eax_137 = data_1af4e84
                char** eax_139
                
                if (eax_137 == 0)
                    eax_139 =
                        sub_4ef190(eax_137, arg3 + 0x20, *(arg3 + 0x20), "$$$$$", &data_1b8a720)
                    data_1b8a7ac = 0
                    data_1b8a798 = 0
                    data_1b8a784 = 0
                else
                    eax_139 = eax_137 - 1
                    
                    if (eax_137 == 1)
                        eax_139 = sub_4ef190(eax_139, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$$$", 
                            &data_1b8a720)
                
                return sub_46a9d0(eax_139.b, arg2, data_1b8a720, data_1b8a734, data_1b8a748, 
                    data_1b8a75c, data_1b8a770, data_1b8a784, data_1b8a798, (data_1b8a7ac).b)
            
            if (eax_1 == 3)
            label_506e93:
                eax_21 = sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
                int32_t var_20_41 = 0
                var_24_4 = 0x6a
                goto label_505ace
            
        label_506ea6:
            
            if (eax_1 != 4)
                goto label_506ede
            
            goto label_506ebb
        
        if (eax_1 == 0x53)
            return eax_1
        
        if (eax_1 == 0x54 || eax_1 == 0x55)
            eax_1 = arg4
            
            if (eax_1 == 1 || eax_1 == 2)
                sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$%%%%", &data_1b8a720)
                int32_t var_10
                int32_t eax_131 = sub_4e8000(
                    sub_4e8000(
                        sub_4e8000(
                            sub_46ab20(&arg5, arg2, data_1b8a720, &arg5, &var_c, &var_8, &var_10), 
                            data_1b8a744, data_1b8a740, arg5, &data_704898), 
                        data_1b8a758, data_1b8a754, var_c, &data_704898), 
                    data_1b8a76c, data_1b8a768, var_8, &data_704898)
                return sub_4e8000(eax_131, data_1b8a780, data_1b8a77c, var_10, &data_704898)
            
            if (eax_1 == 3)
            label_506d37:
                int32_t eax_122 = sub_466d80(eax_1, 0x6a, arg2, 0)
                data_715e98 = eax_122
                return eax_122
            
        label_506d4e:
            
            if (eax_1 != 4)
                goto label_506d6e
            
            var_18_19 = 0
            return sub_48cf80(eax_1, 0x6a, arg3, 0, 0xffffffff, 0xffffffff, arg2)
        
        if (eax_1 == 0x56 || eax_1 == 0x57 || eax_1 == 0x58 || eax_1 == 0x59
                || (eax_1 != 0x5a && eax_1 != 0x5b))
            return eax_1
        
        eax_1 = arg4
        
        if (eax_1 == 1 || eax_1 == 2)
            int32_t eax_118 = data_1af4e84
            char** eax_120
            
            if (eax_118 == 0)
                eax_120 = sub_4ef190(eax_118, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$", &data_1b8a720)
                data_1b8a7c0 = 0
                data_1b8a7ac = 0
                data_1b8a798 = 0
            else
                eax_120 = eax_118 - 1
                
                if (eax_118 == 1)
                    eax_120 =
                        sub_4ef190(eax_120, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$$$$", &data_1b8a720)
            
            return sub_46aa60(eax_120, data_1b8a734, data_1b8a720, arg2, data_1b8a748, 
                data_1b8a75c, data_1b8a770, data_1b8a784, data_1b8a798, data_1b8a7ac, 
                (data_1b8a7c0).b)
        
        if (eax_1 == 3)
        label_506bb7:
            eax_33 = sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
            int32_t var_20_35 = 0
            var_24_9 = 0x6a
            goto label_505cc6
        
    label_506bca:
        
        if (eax_1 != 4)
            goto label_506c07
        
        goto label_506bdf
    case 0x506fe1
        eax_1 = data_1b8b070
        
        if (eax_1 == 0x50)
            return eax_1
        
        if (eax_1 == 0x51 || eax_1 == 0x52)
            eax_1 = arg4
            
            if (eax_1 == 1 || eax_1 == 2)
                int32_t eax_147 = data_1af4e84
                char** eax_149
                
                if (eax_147 == 0)
                    eax_149 = sub_4ef190(eax_147, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                    data_1b8a770 = 0
                    data_1b8a75c = 0
                    data_1b8a748 = 0
                else
                    eax_149 = eax_147 - 1
                    
                    if (eax_147 == 1)
                        eax_149 =
                            sub_4ef190(eax_149, arg3 + 0x20, *(arg3 + 0x20), "$$$$$", &data_1b8a720)
                
                return sub_46ab90(eax_149, arg2, data_1b8a720, data_1b8a734, data_1b8a748, 
                    data_1b8a75c, (data_1b8a770).b)
            
            if (eax_1 == 3)
                goto label_506e93
            
            if (eax_1 == 4)
            label_506ebb:
                int32_t ecx_121 = sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), $", &data_1b8a720)
                int32_t eax_133 = data_1b8a720
                int32_t var_20_42 = 0
                return sub_48cf80(eax_133, 0x6a, ecx_121, 0, eax_133, eax_133, arg2)
            
        label_506ede:
            
            if (eax_1 == 5)
                int32_t ecx_123 = sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), $", &data_1b8a720)
                int32_t eax_135 = data_1b8a720
                int32_t var_20_43 = 1
                int32_t eax_136 = sub_48cf80(eax_135, 0x6a, ecx_123, 0, eax_135, eax_135, arg2)
                sub_445260()
                return eax_136
            
            if (eax_1 != 6)
                return eax_1
            
            int32_t var_24_41 = 0
            return sub_467500(sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720), 
                arg2, data_1b8a720, 0x6a, 0, data_1b8a734)
        
        if (eax_1 == 0x53)
            return eax_1
        
        if (eax_1 == 0x54 || eax_1 == 0x55)
            eax_1 = arg4
            
            if (eax_1 == 1 || eax_1 == 2)
                sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
                void* eax_145 = data_1b8a720
                uint32_t ecx_132 = 0
                
                if (eax_145 s>= 0 && eax_145 s< data_7031bc)
                    eax_145 = (arg2 + (eax_145 << 1)) * 0x650
                    ecx_132 = zx.d(*(eax_145 + 0x72d80e))
                
                data_715e98 = ecx_132
                return eax_145
            
            if (eax_1 == 3)
                goto label_506d37
            
            if (eax_1 == 4)
                var_18_19 = 0
                return sub_48cf80(eax_1, 0x6a, arg3, 0, 0xffffffff, 0xffffffff, arg2)
            
        label_506d6e:
            
            if (eax_1 == 5)
                int32_t var_18_20 = 1
                int32_t eax_124 =
                    sub_48cf80(eax_1, eax_1 + 0x65, arg3, 0, 0xffffffff, 0xffffffff, arg2)
                sub_445260()
                return eax_124
            
            if (eax_1 == 6)
                return sub_4675e0(sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), $", 
                    &data_1b8a720), 0x6a, arg2, 0, data_1b8a720)
            
            return eax_1
        
        if (eax_1 == 0x56 || eax_1 == 0x57 || eax_1 == 0x58 || eax_1 == 0x59
                || (eax_1 != 0x5a && eax_1 != 0x5b))
            return eax_1
        
        eax_1 = arg4
        
        if (eax_1 == 1 || eax_1 == 2)
            int32_t eax_141 = data_1af4e84
            char** eax_143
            
            if (eax_141 == 0)
                eax_143 = sub_4ef190(eax_141, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
                data_1b8a784 = 0
                data_1b8a770 = 0
                data_1b8a75c = 0
            else
                eax_143 = eax_141 - 1
                
                if (eax_141 == 1)
                    eax_143 =
                        sub_4ef190(eax_143, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$", &data_1b8a720)
            
            return sub_46abf0(eax_143, data_1b8a734, data_1b8a720, arg2, data_1b8a748, 
                data_1b8a75c, data_1b8a770, (data_1b8a784).b)
        
        if (eax_1 == 3)
            goto label_506bb7
        
        if (eax_1 == 4)
        label_506bdf:
            char** eax_114
            int32_t ecx_103
            eax_114, ecx_103 = sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
            int32_t var_20_36 = 0
            return sub_48cf80(eax_114, 0x6a, ecx_103, 0, data_1b8a720, data_1b8a734, arg2)
        
    label_506c07:
        
        if (eax_1 == 5)
            char** eax_116
            int32_t ecx_105
            eax_116, ecx_105 = sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
            int32_t var_20_37 = 1
            int32_t eax_117 =
                sub_48cf80(eax_116, 0x6a, ecx_105, 0, data_1b8a720, data_1b8a734, arg2)
            sub_445260()
            return eax_117
        
        if (eax_1 != 6)
            return eax_1
        
        int32_t var_24_36 = 0
        return sub_467550(sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720), 
            data_1b8a734, data_1b8a720, arg2, 0x6a, 0, data_1b8a748)
    case 0x507213
        eax_1 = data_1b8b070
        
        if (eax_1 == 0x50)
            return eax_1
        
        if (eax_1 == 0x51 || eax_1 == 0x52)
            eax_1 = arg4
            
            if (eax_1 != 1 && eax_1 != 2)
            label_506ea1:
                
                if (eax_1 == 3)
                    goto label_506e93
                
                goto label_506ea6
            
            int32_t eax_157 = data_1af4e84
            char** eax_159
            
            if (eax_157 == 0)
                eax_159 = sub_4ef190(eax_157, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                data_1b8a770 = 0
                data_1b8a75c = 0
                data_1b8a748 = 0
            else
                eax_159 = eax_157 - 1
                
                if (eax_157 == 1)
                    eax_159 =
                        sub_4ef190(eax_159, arg3 + 0x20, *(arg3 + 0x20), "$$$$$", &data_1b8a720)
            
            return sub_46ac80(eax_159, arg2, data_1b8a720, data_1b8a734, data_1b8a748, 
                data_1b8a75c, (data_1b8a770).b)
        
        if (eax_1 == 0x53)
            return eax_1
        
        if (eax_1 == 0x54 || eax_1 == 0x55)
            eax_1 = arg4
            
            if (eax_1 != 1 && eax_1 != 2)
            label_506d49:
                
                if (eax_1 == 3)
                    goto label_506d37
                
                goto label_506d4e
            
            sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
            void* eax_155 = data_1b8a720
            uint32_t ecx_140 = 0
            
            if (eax_155 s>= 0 && eax_155 s< data_7031bc)
                eax_155 = (arg2 + (eax_155 << 1)) * 0x650
                ecx_140 = zx.d(*(eax_155 + 0x72d80f))
            
            data_715e98 = ecx_140
            return eax_155
        
        if (eax_1 == 0x56 || eax_1 == 0x57 || eax_1 == 0x58 || eax_1 == 0x59
                || (eax_1 != 0x5a && eax_1 != 0x5b))
            return eax_1
        
        eax_1 = arg4
        
        if (eax_1 != 1 && eax_1 != 2)
        label_506bc5:
            
            if (eax_1 == 3)
                goto label_506bb7
            
            goto label_506bca
        
        int32_t eax_151 = data_1af4e84
        char** eax_153
        
        if (eax_151 == 0)
            eax_153 = sub_4ef190(eax_151, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
            data_1b8a784 = 0
            data_1b8a770 = 0
            data_1b8a75c = 0
        else
            eax_153 = eax_151 - 1
            
            if (eax_151 == 1)
                eax_153 = sub_4ef190(eax_153, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$", &data_1b8a720)
        
        return sub_46ace0(eax_153, data_1b8a734, data_1b8a720, arg2, data_1b8a748, data_1b8a75c, 
            data_1b8a770, (data_1b8a784).b)
    case 0x50740c
        eax_1 = data_1b8b070
        
        if (eax_1 == 0x50)
            return eax_1
        
        if (eax_1 == 0x51 || eax_1 == 0x52)
            eax_1 = arg4
            
            if (eax_1 != 1 && eax_1 != 2)
                goto label_506ea1
            
            int32_t eax_167 = data_1af4e84
            char** eax_169
            
            if (eax_167 == 0)
                eax_169 = sub_4ef190(eax_167, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                data_1b8a770 = 0
                data_1b8a75c = 0
                data_1b8a748 = 0
            else
                eax_169 = eax_167 - 1
                
                if (eax_167 == 1)
                    eax_169 =
                        sub_4ef190(eax_169, arg3 + 0x20, *(arg3 + 0x20), "$$$$$", &data_1b8a720)
            
            return sub_46ad70(eax_169, arg2, data_1b8a720, data_1b8a734, data_1b8a748, 
                data_1b8a75c, (data_1b8a770).b)
        
        if (eax_1 == 0x53)
            return eax_1
        
        if (eax_1 == 0x54 || eax_1 == 0x55)
            eax_1 = arg4
            
            if (eax_1 != 1 && eax_1 != 2)
                goto label_506d49
            
            sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
            void* eax_165 = data_1b8a720
            uint32_t ecx_148 = 0
            
            if (eax_165 s>= 0 && eax_165 s< data_7031bc)
                eax_165 = (arg2 + (eax_165 << 1)) * 0x650
                ecx_148 = zx.d(*(eax_165 + 0x72d810))
            
            data_715e98 = ecx_148
            return eax_165
        
        if (eax_1 == 0x56 || eax_1 == 0x57 || eax_1 == 0x58 || eax_1 == 0x59
                || (eax_1 != 0x5a && eax_1 != 0x5b))
            return eax_1
        
        eax_1 = arg4
        
        if (eax_1 != 1 && eax_1 != 2)
            goto label_506bc5
        
        int32_t eax_161 = data_1af4e84
        char** eax_163
        
        if (eax_161 == 0)
            eax_163 = sub_4ef190(eax_161, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
            data_1b8a784 = 0
            data_1b8a770 = 0
            data_1b8a75c = 0
        else
            eax_163 = eax_161 - 1
            
            if (eax_161 == 1)
                eax_163 = sub_4ef190(eax_163, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$", &data_1b8a720)
        
        return sub_46add0(eax_163, data_1b8a734, data_1b8a720, arg2, data_1b8a748, data_1b8a75c, 
            data_1b8a770, (data_1b8a784).b)

if (eax_1 == 5)
    int32_t ecx_72 = sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
    int32_t eax_78 = data_1b8a720
    int32_t var_20_27 = 1
    int32_t eax_79 = sub_48cf80(eax_78, 0x69, ecx_72, 0, eax_78, eax_78, arg2)
    sub_445260()
    return eax_79

if (eax_1 != 6)
    return eax_1

int32_t var_24_26 = 0
return sub_467500(sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720), arg2, 
    data_1b8a720, 0x69, 0, data_1b8a734)
