// 函数: sub_50b6f0
// 地址: 0x50b6f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_24_5
int32_t var_18_1
int32_t var_18_9
int32_t eax_1
char** eax_23

switch (arg5)
    case 0
        eax_1 = data_1b8b070
        
        if (eax_1 == 0x50)
            return eax_1
        
        if (eax_1 != 0x51 && eax_1 != 0x52)
            if (eax_1 == 0x53)
                return eax_1
            
            if (eax_1 == 0x54 || eax_1 == 0x55)
                eax_1 = arg4
                
                if (eax_1 == 1 || eax_1 == 2)
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$%%", &data_1b8a720)
                    int32_t var_8
                    return sub_4e8000(
                        sub_4e8000(sub_469a40(&arg5, arg2, data_1b8a720, &arg5, &var_8), 
                            data_1b8a744, data_1b8a740, arg5, &data_704898), 
                        data_1b8a758, data_1b8a754, var_8, &data_704898)
                
                if (eax_1 == 3)
                label_50b93e:
                    int32_t eax_14 = sub_466d80(eax_1, 0x72, arg2, 0)
                    data_715e98 = eax_14
                    return eax_14
                
            label_50b951:
                
                if (eax_1 != 4)
                    goto label_50b972
                
                var_18_1 = 0
                return sub_48cf80(eax_1, 0x72, arg3, 0, 0xffffffff, 0xffffffff, arg2)
            
            if (eax_1 == 0x56 || eax_1 == 0x57 || eax_1 == 0x58 || eax_1 == 0x59
                    || (eax_1 != 0x5a && eax_1 != 0x5b))
                return eax_1
            
            eax_1 = arg4
            
            if (eax_1 == 1 || eax_1 == 2)
                int32_t eax_10 = data_1af4e84
                char** eax_12
                
                if (eax_10 == 0)
                    eax_12 = sub_4ef190(eax_10, arg3 + 0x20, *(arg3 + 0x20), "$$$$", &data_1b8a720)
                    data_1b8a798 = 0
                    data_1b8a784 = 0
                    data_1b8a770 = 0
                else
                    eax_12 = eax_10 - 1
                    
                    if (eax_10 == 1)
                        eax_12 = sub_4ef190(eax_12, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$$", 
                            &data_1b8a720)
                
                return sub_4699a0(eax_12, data_1b8a734, data_1b8a720, arg2, data_1b8a748, 
                    data_1b8a75c, data_1b8a770, data_1b8a784, (data_1b8a798).b)
            
            if (eax_1 == 3)
            label_50b7b1:
                int32_t eax_3 = sub_466cd0(
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720), 
                    data_1b8a734, data_1b8a720, arg2, 0x72, 0)
                data_715e98 = eax_3
                return eax_3
            
        label_50b7c4:
            
            if (eax_1 != 4)
                goto label_50b802
            
            goto label_50b7d9
        
        eax_1 = arg4
        
        if (eax_1 == 1 || eax_1 == 2)
            int32_t eax_31 = data_1af4e84
            char** eax_33
            
            if (eax_31 == 0)
                eax_33 = sub_4ef190(eax_31, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
                data_1b8a784 = 0
                data_1b8a770 = 0
                data_1b8a75c = 0
            else
                eax_33 = eax_31 - 1
                
                if (eax_31 == 1)
                    eax_33 =
                        sub_4ef190(eax_33, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$", &data_1b8a720)
            
            return sub_469930(eax_33, arg2, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c, 
                data_1b8a770, (data_1b8a784).b)
        
        if (eax_1 == 3)
        label_50ba60:
            eax_23 = sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
            int32_t var_20_6 = 0
            var_24_5 = 0x72
        label_50ba71:
            int32_t eax_24 = sub_466c70(eax_23, arg2, data_1b8a720, var_24_5, 0)
            data_715e98 = eax_24
            return eax_24
        
    label_50ba84:
        
        if (eax_1 == 4)
            goto label_50ba99
    case 1
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
                    void* eax_39 = data_1b8a720
                    int32_t ecx_33 = 0
                    
                    if (eax_39 s>= 0 && eax_39 s< data_7031bc)
                        eax_39 = (arg2 + (eax_39 << 1)) * 0x650
                        ecx_33 = *(eax_39 + 0x72d878)
                    
                    data_715e98 = ecx_33
                    return eax_39
                
                if (eax_1 == 3)
                    goto label_50b93e
                
                if (eax_1 == 4)
                    var_18_1 = 0
                    return sub_48cf80(eax_1, 0x72, arg3, 0, 0xffffffff, 0xffffffff, arg2)
                
            label_50b972:
                
                if (eax_1 == 5)
                    int32_t var_18_2 = 1
                    int32_t eax_16 =
                        sub_48cf80(eax_1, eax_1 + 0x6d, arg3, 0, 0xffffffff, 0xffffffff, arg2)
                    sub_445260()
                    return eax_16
                
                if (eax_1 == 6)
                    return sub_4675e0(sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), $", 
                        &data_1b8a720), 0x72, arg2, 0, data_1b8a720)
                
                return eax_1
            
            if (eax_1 == 0x56 || eax_1 == 0x57 || eax_1 == 0x58 || eax_1 == 0x59
                    || (eax_1 != 0x5a && eax_1 != 0x5b))
                return eax_1
            
            eax_1 = arg4
            
            if (eax_1 == 1 || eax_1 == 2)
                int32_t eax_35 = data_1af4e84
                char** eax_37
                
                if (eax_35 == 0)
                    eax_37 = sub_4ef190(eax_35, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
                    data_1b8a784 = 0
                    data_1b8a770 = 0
                    data_1b8a75c = 0
                else
                    eax_37 = eax_35 - 1
                    
                    if (eax_35 == 1)
                        eax_37 =
                            sub_4ef190(eax_37, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$", &data_1b8a720)
                
                return sub_469af0(eax_37, data_1b8a734, data_1b8a720, arg2, data_1b8a748, 
                    data_1b8a75c, data_1b8a770, (data_1b8a784).b)
            
            if (eax_1 == 3)
                goto label_50b7b1
            
            if (eax_1 == 4)
            label_50b7d9:
                char** eax_4
                int32_t ecx_3
                eax_4, ecx_3 = sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                int32_t var_20 = 0
                return sub_48cf80(eax_4, 0x72, ecx_3, 0, data_1b8a720, data_1b8a734, arg2)
            
        label_50b802:
            
            if (eax_1 == 5)
                char** eax_6
                int32_t ecx_5
                eax_6, ecx_5 = sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                int32_t var_20_1 = 1
                int32_t eax_7 = sub_48cf80(eax_6, 0x72, ecx_5, 0, data_1b8a720, data_1b8a734, arg2)
                sub_445260()
                return eax_7
            
            if (eax_1 != 6)
                return eax_1
            
            int32_t var_24_2 = 0
            return sub_467550(sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720), 
                data_1b8a734, data_1b8a720, arg2, 0x72, 0, data_1b8a748)
        
        eax_1 = arg4
        
        if (eax_1 == 1 || eax_1 == 2)
            int32_t eax_41 = data_1af4e84
            char** eax_43
            
            if (eax_41 == 0)
                eax_43 = sub_4ef190(eax_41, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                data_1b8a770 = 0
                data_1b8a75c = 0
                data_1b8a748 = 0
            else
                eax_43 = eax_41 - 1
                
                if (eax_41 == 1)
                    eax_43 = sub_4ef190(eax_43, arg3 + 0x20, *(arg3 + 0x20), "$$$$$", &data_1b8a720)
            
            return sub_469a90(eax_43, arg2, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c, 
                (data_1b8a770).b)
        
        if (eax_1 == 3)
            goto label_50ba60
        
        if (eax_1 == 4)
        label_50ba99:
            int32_t ecx_21 = sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
            int32_t eax_25 = data_1b8a720
            int32_t var_20_7 = 0
            return sub_48cf80(eax_25, 0x72, ecx_21, 0, eax_25, eax_25, arg2)
    case 2
        eax_1 = data_1b8b070
        
        if (eax_1 == 0x50)
            return eax_1
        
        if (eax_1 == 0x51 || eax_1 == 0x52)
            eax_1 = arg4
            
            if (eax_1 != 1 && eax_1 != 2)
                if (eax_1 == 3)
                    goto label_50ba60
                
                goto label_50ba84
            
            int32_t eax_51 = data_1af4e84
            char** eax_53
            
            if (eax_51 == 0)
                eax_53 = sub_4ef190(eax_51, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                data_1b8a770 = 0
                data_1b8a75c = 0
                data_1b8a748 = 0
            else
                eax_53 = eax_51 - 1
                
                if (eax_51 == 1)
                    eax_53 = sub_4ef190(eax_53, arg3 + 0x20, *(arg3 + 0x20), "$$$$$", &data_1b8a720)
            
            return sub_469b80(eax_53, arg2, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c, 
                (data_1b8a770).b)
        
        if (eax_1 == 0x53)
            return eax_1
        
        if (eax_1 == 0x54 || eax_1 == 0x55)
            eax_1 = arg4
            
            if (eax_1 != 1 && eax_1 != 2)
                if (eax_1 == 3)
                    goto label_50b93e
                
                goto label_50b951
            
            sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
            void* eax_49 = data_1b8a720
            int32_t ecx_41 = 0
            
            if (eax_49 s>= 0 && eax_49 s< data_7031bc)
                eax_49 = (arg2 + (eax_49 << 1)) * 0x650
                ecx_41 = *(eax_49 + 0x72d87c)
            
            data_715e98 = ecx_41
            return eax_49
        
        if (eax_1 == 0x56 || eax_1 == 0x57 || eax_1 == 0x58 || eax_1 == 0x59
                || (eax_1 != 0x5a && eax_1 != 0x5b))
            return eax_1
        
        eax_1 = arg4
        
        if (eax_1 != 1 && eax_1 != 2)
            if (eax_1 == 3)
                goto label_50b7b1
            
            goto label_50b7c4
        
        int32_t eax_45 = data_1af4e84
        char** eax_47
        
        if (eax_45 == 0)
            eax_47 = sub_4ef190(eax_45, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
            data_1b8a784 = 0
            data_1b8a770 = 0
            data_1b8a75c = 0
        else
            eax_47 = eax_45 - 1
            
            if (eax_45 == 1)
                eax_47 = sub_4ef190(eax_47, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$", &data_1b8a720)
        
        return sub_469be0(eax_47, data_1b8a734, data_1b8a720, arg2, data_1b8a748, data_1b8a75c, 
            data_1b8a770, (data_1b8a784).b)
    case 3
        eax_1 = data_1b8b070
        
        if (eax_1 == 0x50)
            return eax_1
        
        if (eax_1 == 0x51 || eax_1 == 0x52)
            eax_1 = arg4
            
            if (eax_1 == 1 || eax_1 == 2)
                int32_t eax_79 = data_1af4e84
                char** eax_81
                
                if (eax_79 == 0)
                    eax_81 = sub_4ef190(eax_79, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
                    data_1b8a784 = 0
                    data_1b8a770 = 0
                    data_1b8a75c = 0
                else
                    eax_81 = eax_79 - 1
                    
                    if (eax_79 == 1)
                        eax_81 =
                            sub_4ef190(eax_81, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$", &data_1b8a720)
                
                return sub_469c70(eax_81, arg2, data_1b8a720, data_1b8a734, data_1b8a748, 
                    data_1b8a75c, data_1b8a770, (data_1b8a784).b)
            
            if (eax_1 == 3)
            label_50c36d:
                eax_23 = sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
                int32_t var_20_19 = 0
                var_24_5 = 0x73
                goto label_50ba71
            
        label_50c37b:
            
            if (eax_1 != 4)
                goto label_50c3b4
            
            goto label_50c390
        
        if (eax_1 == 0x53)
            return eax_1
        
        if (eax_1 == 0x54 || eax_1 == 0x55)
            eax_1 = arg4
            
            if (eax_1 == 1 || eax_1 == 2)
                sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$%%", &data_1b8a720)
                void* eax_70 = data_1b8a720
                int32_t ecx_59 = 0
                int32_t edi = 0
                
                if (eax_70 s>= 0 && eax_70 s< data_7031bc)
                    eax_70 = (arg2 + (eax_70 << 1)) * 0x650 + &data_72d7fc
                    ecx_59 = *(eax_70 + 0x74)
                    edi = *(eax_70 + 0x78)
                
                return sub_4e8000(
                    sub_4e8000(eax_70, data_1b8a744, data_1b8a740, ecx_59, &data_704898), 
                    data_1b8a758, data_1b8a754, edi, &data_704898)
            
            if (eax_1 == 3)
            label_50c238:
                int32_t eax_65 = sub_466d80(eax_1, 0x73, arg2, 0)
                data_715e98 = eax_65
                return eax_65
            
        label_50c24b:
            
            if (eax_1 != 4)
                goto label_50c26c
            
            var_18_9 = 0
            return sub_48cf80(eax_1, 0x73, arg3, 0, 0xffffffff, 0xffffffff, arg2)
        
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
                    eax_63 =
                        sub_4ef190(eax_63, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$$", &data_1b8a720)
            
            return sub_469ce0(eax_63, data_1b8a734, data_1b8a720, arg2, data_1b8a748, data_1b8a75c, 
                data_1b8a770, data_1b8a784, (data_1b8a798).b)
        
        if (eax_1 == 3)
        label_50c0c1:
            int32_t eax_56 = sub_466cd0(
                sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720), data_1b8a734, 
                data_1b8a720, arg2, 0x73, 0)
            data_715e98 = eax_56
            return eax_56
        
    label_50c0d4:
        
        if (eax_1 != 4)
            goto label_50c112
        
        goto label_50c0e9
    case 4
        eax_1 = data_1b8b070
        
        if (eax_1 == 0x50)
            return eax_1
        
        if (eax_1 == 0x51 || eax_1 == 0x52)
            eax_1 = arg4
            
            if (eax_1 == 1 || eax_1 == 2)
                int32_t eax_89 = data_1af4e84
                char** eax_91
                
                if (eax_89 == 0)
                    eax_91 = sub_4ef190(eax_89, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                    data_1b8a770 = 0
                    data_1b8a75c = 0
                    data_1b8a748 = 0
                else
                    eax_91 = eax_89 - 1
                    
                    if (eax_89 == 1)
                        eax_91 =
                            sub_4ef190(eax_91, arg3 + 0x20, *(arg3 + 0x20), "$$$$$", &data_1b8a720)
                
                return sub_469d80(eax_91, arg2, data_1b8a720, data_1b8a734, data_1b8a748, 
                    data_1b8a75c, (data_1b8a770).b)
            
            if (eax_1 == 3)
                goto label_50c36d
            
            if (eax_1 == 4)
            label_50c390:
                int32_t ecx_64 = sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
                int32_t eax_75 = data_1b8a720
                int32_t var_20_20 = 0
                return sub_48cf80(eax_75, 0x73, ecx_64, 0, eax_75, eax_75, arg2)
            
        label_50c3b4:
            
            if (eax_1 == 5)
                int32_t ecx_66 = sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
                int32_t eax_77 = data_1b8a720
                int32_t var_20_21 = 1
                int32_t eax_78 = sub_48cf80(eax_77, 0x73, ecx_66, 0, eax_77, eax_77, arg2)
                sub_445260()
                return eax_78
            
            if (eax_1 != 6)
                return eax_1
            
            int32_t var_24_21 = 0
            return sub_467500(sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720), 
                arg2, data_1b8a720, 0x73, 0, data_1b8a734)
        
        if (eax_1 == 0x53)
            return eax_1
        
        if (eax_1 == 0x54 || eax_1 == 0x55)
            eax_1 = arg4
            
            if (eax_1 == 1 || eax_1 == 2)
                sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
                void* eax_87 = data_1b8a720
                int32_t ecx_75 = 0
                
                if (eax_87 s>= 0 && eax_87 s< data_7031bc)
                    eax_87 = (arg2 + (eax_87 << 1)) * 0x650
                    ecx_75 = *(eax_87 + 0x72d870)
                
                data_715e98 = ecx_75
                return eax_87
            
            if (eax_1 == 3)
                goto label_50c238
            
            if (eax_1 == 4)
                var_18_9 = 0
                return sub_48cf80(eax_1, 0x73, arg3, 0, 0xffffffff, 0xffffffff, arg2)
            
        label_50c26c:
            
            if (eax_1 == 5)
                int32_t var_18_10 = 1
                int32_t eax_67 =
                    sub_48cf80(eax_1, eax_1 + 0x6e, arg3, 0, 0xffffffff, 0xffffffff, arg2)
                sub_445260()
                return eax_67
            
            if (eax_1 == 6)
                return sub_4675e0(sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), $", 
                    &data_1b8a720), 0x73, arg2, 0, data_1b8a720)
            
            return eax_1
        
        if (eax_1 == 0x56 || eax_1 == 0x57 || eax_1 == 0x58 || eax_1 == 0x59
                || (eax_1 != 0x5a && eax_1 != 0x5b))
            return eax_1
        
        eax_1 = arg4
        
        if (eax_1 == 1 || eax_1 == 2)
            int32_t eax_83 = data_1af4e84
            char** eax_85
            
            if (eax_83 == 0)
                eax_85 = sub_4ef190(eax_83, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
                data_1b8a784 = 0
                data_1b8a770 = 0
                data_1b8a75c = 0
            else
                eax_85 = eax_83 - 1
                
                if (eax_83 == 1)
                    eax_85 =
                        sub_4ef190(eax_85, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$", &data_1b8a720)
            
            return sub_469de0(eax_85, data_1b8a734, data_1b8a720, arg2, data_1b8a748, data_1b8a75c, 
                data_1b8a770, (data_1b8a784).b)
        
        if (eax_1 == 3)
            goto label_50c0c1
        
        if (eax_1 == 4)
        label_50c0e9:
            char** eax_57
            int32_t ecx_48
            eax_57, ecx_48 = sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
            int32_t var_20_15 = 0
            return sub_48cf80(eax_57, 0x73, ecx_48, 0, data_1b8a720, data_1b8a734, arg2)
        
    label_50c112:
        
        if (eax_1 == 5)
            char** eax_59
            int32_t ecx_50
            eax_59, ecx_50 = sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
            int32_t var_20_16 = 1
            int32_t eax_60 = sub_48cf80(eax_59, 0x73, ecx_50, 0, data_1b8a720, data_1b8a734, arg2)
            sub_445260()
            return eax_60
        
        if (eax_1 != 6)
            return eax_1
        
        int32_t var_24_16 = 0
        return sub_467550(sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720), 
            data_1b8a734, data_1b8a720, arg2, 0x73, 0, data_1b8a748)
    case 5
        eax_1 = data_1b8b070
        
        if (eax_1 == 0x50)
            return eax_1
        
        if (eax_1 == 0x51 || eax_1 == 0x52)
            eax_1 = arg4
            
            if (eax_1 != 1 && eax_1 != 2)
                if (eax_1 == 3)
                    goto label_50c36d
                
                goto label_50c37b
            
            int32_t eax_99 = data_1af4e84
            char** eax_101
            
            if (eax_99 == 0)
                eax_101 = sub_4ef190(eax_99, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                data_1b8a770 = 0
                data_1b8a75c = 0
                data_1b8a748 = 0
            else
                eax_101 = eax_99 - 1
                
                if (eax_99 == 1)
                    eax_101 =
                        sub_4ef190(eax_101, arg3 + 0x20, *(arg3 + 0x20), "$$$$$", &data_1b8a720)
            
            return sub_469e70(eax_101, arg2, data_1b8a720, data_1b8a734, data_1b8a748, 
                data_1b8a75c, (data_1b8a770).b)
        
        if (eax_1 == 0x53)
            return eax_1
        
        if (eax_1 == 0x54 || eax_1 == 0x55)
            eax_1 = arg4
            
            if (eax_1 != 1 && eax_1 != 2)
                if (eax_1 == 3)
                    goto label_50c238
                
                goto label_50c24b
            
            sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
            void* eax_97 = data_1b8a720
            int32_t ecx_83 = 0
            
            if (eax_97 s>= 0 && eax_97 s< data_7031bc)
                eax_97 = (arg2 + (eax_97 << 1)) * 0x650
                ecx_83 = *(eax_97 + 0x72d874)
            
            data_715e98 = ecx_83
            return eax_97
        
        if (eax_1 == 0x56 || eax_1 == 0x57 || eax_1 == 0x58 || eax_1 == 0x59
                || (eax_1 != 0x5a && eax_1 != 0x5b))
            return eax_1
        
        eax_1 = arg4
        
        if (eax_1 != 1 && eax_1 != 2)
            if (eax_1 == 3)
                goto label_50c0c1
            
            goto label_50c0d4
        
        int32_t eax_93 = data_1af4e84
        char** eax_95
        
        if (eax_93 == 0)
            eax_95 = sub_4ef190(eax_93, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
            data_1b8a784 = 0
            data_1b8a770 = 0
            data_1b8a75c = 0
        else
            eax_95 = eax_93 - 1
            
            if (eax_93 == 1)
                eax_95 = sub_4ef190(eax_95, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$", &data_1b8a720)
        
        return sub_469ed0(eax_95, data_1b8a734, data_1b8a720, arg2, data_1b8a748, data_1b8a75c, 
            data_1b8a770, (data_1b8a784).b)
    case 6
        eax_1 = data_1b8b070
        
        if (eax_1 != 0x50)
            if (eax_1 == 0x51 || eax_1 == 0x52)
                sub_46ca90(sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$", &data_1b8a720), 
                    arg2, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c, data_1b8a770, 
                    data_1b8a784)
                return sub_46ce60(data_1b8a720, arg2)
            
            if (eax_1 != 0x53 && eax_1 != 0x54 && eax_1 != 0x55 && eax_1 != 0x56 && eax_1 != 0x57
                    && eax_1 != 0x58 && eax_1 != 0x59 && (eax_1 == 0x5a || eax_1 == 0x5b))
                return sub_46cec0(
                    sub_46cae0(
                        sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$$", &data_1b8a720), 
                        data_1b8a734, data_1b8a720, arg2, data_1b8a748, data_1b8a75c, data_1b8a770, 
                        data_1b8a784, data_1b8a798), 
                    data_1b8a734, data_1b8a720, arg2)
        
        return eax_1
    case 7
        eax_1 = data_1b8b070
        
        if (eax_1 != 0x50)
            if (eax_1 == 0x51 || eax_1 == 0x52)
                return sub_46c620(
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720), arg2, 
                    data_1b8a720, data_1b8a734)
            
            if (eax_1 != 0x53 && eax_1 != 0x54 && eax_1 != 0x55 && eax_1 != 0x56 && eax_1 != 0x57
                    && eax_1 != 0x58 && eax_1 != 0x59 && (eax_1 == 0x5a || eax_1 == 0x5b))
                return sub_46c6b0(
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720), 
                    data_1b8a734, data_1b8a720, arg2, data_1b8a748)
        
        return eax_1
    case 8
        eax_1 = data_1b8b070
        
        if (eax_1 != 0x50)
            if (eax_1 == 0x51 || eax_1 == 0x52)
                int32_t eax_118 = data_1af4e84
                char** eax_120
                
                if (eax_118 == 0)
                    eax_120 = sub_4ef190(eax_118, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
                    data_1b8a734 = 0
                else
                    eax_120 = eax_118 - 1
                    
                    if (eax_118 == 1)
                        eax_120 =
                            sub_4ef190(eax_120, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                
                return sub_469620(eax_120, arg2, data_1b8a720, data_1b8a734)
            
            if (eax_1 != 0x53)
                if (eax_1 == 0x54 || eax_1 == 0x55)
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
                    void* eax_116 = data_1b8a720
                    int32_t ecx_101 = 0
                    
                    if (eax_116 s>= 0 && eax_116 s< data_7031bc)
                        eax_116 = (arg2 + (eax_116 << 1)) * 0x650
                        ecx_101 = *(eax_116 + 0x72d734)
                    
                    data_715e98 = ecx_101
                    return eax_116
                
                if (eax_1 != 0x56 && eax_1 != 0x57 && eax_1 != 0x58 && eax_1 != 0x59
                        && (eax_1 == 0x5a || eax_1 == 0x5b))
                    int32_t eax_112 = data_1af4e84
                    char** eax_114
                    
                    if (eax_112 == 0)
                        eax_114 =
                            sub_4ef190(eax_112, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                        data_1b8a748 = 0
                    else
                        eax_114 = eax_112 - 1
                        
                        if (eax_112 == 1)
                            eax_114 = sub_4ef190(eax_114, arg3 + 0x20, *(arg3 + 0x20), "$$$", 
                                &data_1b8a720)
                    
                    return sub_469650(eax_114, data_1b8a734, data_1b8a720, arg2, data_1b8a748)
        
        return eax_1
    case 9
        eax_1 = data_1b8b070
        
        if (eax_1 != 0x50)
            if (eax_1 == 0x51 || eax_1 == 0x52)
                int32_t eax_136 = sub_46c780(
                    sub_46c620(
                        sub_46c570(
                            sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$$$$$$$$$$$$$", 
                                &data_1b8a720), 
                            arg2, data_1b8a720, 1), 
                        arg2, data_1b8a720, data_1b8a734), 
                    arg2, data_1b8a720, data_1b8a748, data_1b8a75c, data_1b8a770, data_1b8a784)
                int32_t eax_140 = sub_46ccf0(
                    sub_46cc30(
                        sub_46ca90(
                            sub_46c9c0(eax_136, arg2, data_1b8a720, data_1b8a798, data_1b8a7ac, 
                                data_1b8a7c0), 
                            arg2, data_1b8a720, 0, 0xff, 0, 0, 0), 
                        arg2, data_1b8a720, data_1b8a7d4, data_1b8a7e8), 
                    arg2, data_1b8a720, data_1b8a7fc, data_1b8a810)
                sub_46c870(sub_46cdb0(eax_140, arg2, data_1b8a720, data_1b8a824), arg2, 
                    data_1b8a720, data_1b8a838, data_1b8a84c, data_1b8a860, data_1b8a874)
                return sub_46ce60(data_1b8a720, arg2)
            
            if (eax_1 != 0x53 && eax_1 != 0x54 && eax_1 != 0x55 && eax_1 != 0x56 && eax_1 != 0x57
                    && eax_1 != 0x58 && eax_1 != 0x59 && (eax_1 == 0x5a || eax_1 == 0x5b))
                int32_t* eax_125 = sub_46c7e0(
                    sub_46c6b0(
                        sub_46c5b0(
                            sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$$$$$$$$$$$$$$", 
                                &data_1b8a720), 
                            data_1b8a734, data_1b8a720, arg2, 1), 
                        data_1b8a734, data_1b8a720, arg2, data_1b8a748), 
                    data_1b8a734, data_1b8a720, arg2, data_1b8a75c, data_1b8a770, data_1b8a784, 
                    data_1b8a798)
                int32_t* eax_128 = sub_46cc70(
                    sub_46cae0(
                        sub_46ca10(eax_125, data_1b8a734, data_1b8a720, arg2, data_1b8a7ac, 
                            data_1b8a7c0, data_1b8a7d4), 
                        data_1b8a734, data_1b8a720, arg2, 0, 0xff, 0, 0, 0), 
                    data_1b8a734, data_1b8a720, arg2, data_1b8a7e8, data_1b8a7fc)
                int32_t eax_131 = sub_46c900(
                    sub_46cdf0(
                        sub_46cd30(eax_128, data_1b8a734, data_1b8a720, arg2, data_1b8a810, 
                            data_1b8a824), 
                        data_1b8a734, data_1b8a720, arg2, data_1b8a838), 
                    data_1b8a734, data_1b8a720, arg2, data_1b8a84c, data_1b8a860, data_1b8a874, 
                    data_1b8a888)
                return sub_46cec0(eax_131, data_1b8a734, data_1b8a720, arg2)
        
        return eax_1

if (eax_1 == 5)
    int32_t ecx_23 = sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
    int32_t eax_27 = data_1b8a720
    int32_t var_20_8 = 1
    int32_t eax_28 = sub_48cf80(eax_27, 0x72, ecx_23, 0, eax_27, eax_27, arg2)
    sub_445260()
    return eax_28

if (eax_1 != 6)
    return eax_1

int32_t var_24_8 = 0
return sub_467500(sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720), arg2, 
    data_1b8a720, 0x72, 0, data_1b8a734)
