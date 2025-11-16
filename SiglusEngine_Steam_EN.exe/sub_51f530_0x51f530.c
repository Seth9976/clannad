// 函数: sub_51f530
// 地址: 0x51f530
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char** var_28_3
char** var_24_4
int32_t var_8
int32_t eax_1
char** eax_10
char** eax_11
int32_t ecx_9
int32_t ecx_11

switch (jump_table_5204a4[arg5])
    case 0x51f543
        eax_1 = data_1b8b070
        
        if (eax_1 != 0x50)
            if (eax_1 == 0x51 || eax_1 == 0x52)
                return sub_47f3f0(
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720), arg2, 
                    data_1b8a720, data_1b8a734, data_1b8a748)
            
            if (eax_1 != 0x53)
                if (eax_1 == 0x54 || eax_1 == 0x55)
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                    sub_47f500(&arg5, arg2, data_1b8a720, data_1b8a734, &arg5)
                    int32_t eax_5 = arg5
                    data_715e98 = eax_5
                    return eax_5
                
                if (eax_1 != 0x56 && eax_1 != 0x57 && eax_1 != 0x58 && eax_1 != 0x59
                        && (eax_1 == 0x5a || eax_1 == 0x5b))
                    return sub_47f470(
                        sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$$", &data_1b8a720), 
                        arg2, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c)
        
        return eax_1
    case 0x51f656
        eax_1 = data_1b8b070
        
        if (eax_1 == 0x50)
            return eax_1
        
        if (eax_1 != 0x51 && eax_1 != 0x52)
            if (eax_1 == 0x53)
                return eax_1
            
            if (eax_1 == 0x54 || eax_1 == 0x55)
                eax_1 = arg4
                
                if (eax_1 == 1 || eax_1 == 2)
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$%%", &data_1b8a720)
                    return sub_4e8000(
                        sub_4e8000(
                            sub_47c390(&arg5, arg2, data_1b8a720, data_1b8a734, &arg5, &var_8), 
                            data_1b8a758, data_1b8a754, arg5, &data_704898), 
                        data_1b8a76c, data_1b8a768, var_8, &data_704898)
                
                if (eax_1 == 3)
                label_51f898:
                    enum MESSAGEBOX_RESULT eax_19 = sub_478ca0(
                        sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), $", &data_1b8a720), arg2, 
                        data_1b8a720, 0x67, 0)
                    data_715e98 = eax_19
                    return eax_19
                
            label_51f8af:
                
                if (eax_1 == 4)
                    eax_10, ecx_9 =
                        sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), $", &data_1b8a720)
                    int32_t var_20_7 = 0
                    return sub_48cfe0(eax_10, 0x67, ecx_9, 0, data_1b8a720, arg2, 0xffffffff, 
                        0xffffffff)
                
                if (eax_1 != 5)
                    if (eax_1 == 6)
                        return sub_4792d0(
                            sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720), 
                            arg2, data_1b8a720, 0x67, 0, data_1b8a734)
                    
                    return eax_1
                
                eax_11, ecx_11 = sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
                int32_t var_20_8 = 1
                var_24_4 = 0xffffffff
                var_28_3 = 0xffffffff
                goto label_51fa65
            
            if (eax_1 == 0x56 || eax_1 == 0x57 || eax_1 == 0x58 || eax_1 == 0x59
                    || (eax_1 != 0x5a && eax_1 != 0x5b))
                return eax_1
            
            eax_1 = arg4
            
            if (eax_1 == 1 || eax_1 == 2)
                int32_t eax_14 = data_1af4e84
                char** eax_16
                
                if (eax_14 == 0)
                    eax_16 = sub_4ef190(eax_14, arg3 + 0x20, *(arg3 + 0x20), "$$$$$", &data_1b8a720)
                    data_1b8a7ac = 0
                    data_1b8a798 = 0
                    data_1b8a784 = 0
                else
                    eax_16 = eax_14 - 1
                    
                    if (eax_14 == 1)
                        eax_16 = sub_4ef190(eax_16, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$$$", 
                            &data_1b8a720)
                
                return sub_47c300(eax_16, arg2, data_1b8a720, data_1b8a734, data_1b8a748, 
                    data_1b8a75c, data_1b8a770, data_1b8a784, data_1b8a798, (data_1b8a7ac).b)
            
            if (eax_1 == 3)
            label_51f70a:
                enum MESSAGEBOX_RESULT eax_9 = sub_478c00(
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720), arg2, 
                    data_1b8a720, data_1b8a734, data_1b8a748, 0x67, 0)
                data_715e98 = eax_9
                return eax_9
            
        label_51f721:
            
            if (eax_1 == 4)
                eax_10, ecx_9 = sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
                int32_t var_20_3 = 0
                return sub_48cfe0(eax_10, 0x67, ecx_9, 0, data_1b8a720, arg2, data_1b8a734, 
                    data_1b8a748)
            
            if (eax_1 != 5)
                if (eax_1 == 6)
                    return sub_479250(
                        sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$$", &data_1b8a720), 
                        arg2, data_1b8a720, data_1b8a734, data_1b8a748, 0x67, 0, data_1b8a75c)
                
                return eax_1
            
            eax_11, ecx_11 = sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
            int32_t var_20_4 = 1
            var_24_4 = data_1b8a748
            var_28_3 = data_1b8a734
            goto label_51fa65
        
        eax_1 = arg4
        
        if (eax_1 == 1 || eax_1 == 2)
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
            
            return sub_47c250(eax_34, arg2, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c, 
                data_1b8a770, data_1b8a784, (data_1b8a798).b)
        
        if (eax_1 == 3)
        label_51f9e4:
            int32_t eax_27 = sub_478b80(
                sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720), arg2, 
                data_1b8a720, data_1b8a734, 0x67, 0)
            data_715e98 = eax_27
            return eax_27
        
    label_51f9f6:
        
        if (eax_1 == 4)
            goto label_51fa0b
    case 0x51fb4d
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
                    sub_47c550(&arg5, arg2, data_1b8a720, data_1b8a734, &arg5)
                    int32_t eax_41 = arg5
                    data_715e98 = eax_41
                    return eax_41
                
            label_51f8aa:
                
                if (eax_1 == 3)
                    goto label_51f898
                
                goto label_51f8af
            
            if (eax_1 == 0x56 || eax_1 == 0x57 || eax_1 == 0x58 || eax_1 == 0x59
                    || (eax_1 != 0x5a && eax_1 != 0x5b))
                return eax_1
            
            eax_1 = arg4
            
            if (eax_1 != 1 && eax_1 != 2)
            label_51f71c:
                
                if (eax_1 == 3)
                    goto label_51f70a
                
                goto label_51f721
            
            int32_t eax_36 = data_1af4e84
            char** eax_38
            
            if (eax_36 == 0)
                eax_38 = sub_4ef190(eax_36, arg3 + 0x20, *(arg3 + 0x20), "$$$$", &data_1b8a720)
                data_1b8a798 = 0
                data_1b8a784 = 0
                data_1b8a770 = 0
            else
                eax_38 = eax_36 - 1
                
                if (eax_36 == 1)
                    eax_38 =
                        sub_4ef190(eax_38, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$$", &data_1b8a720)
            
            return sub_47c4c0(eax_38, arg2, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c, 
                data_1b8a770, data_1b8a784, (data_1b8a798).b)
        
        eax_1 = arg4
        
        if (eax_1 == 1 || eax_1 == 2)
            int32_t eax_42 = data_1af4e84
            char** eax_44
            
            if (eax_42 == 0)
                eax_44 = sub_4ef190(eax_42, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
                data_1b8a784 = 0
                data_1b8a770 = 0
                data_1b8a75c = 0
            else
                eax_44 = eax_42 - 1
                
                if (eax_42 == 1)
                    eax_44 =
                        sub_4ef190(eax_44, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$", &data_1b8a720)
            
            return sub_47c420(eax_44, arg2, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c, 
                data_1b8a770, (data_1b8a784).b)
        
        if (eax_1 == 3)
            goto label_51f9e4
        
        if (eax_1 == 4)
        label_51fa0b:
            ecx_9 = sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
            eax_10 = data_1b8a734
            int32_t var_20_11 = 0
            return sub_48cfe0(eax_10, 0x67, ecx_9, 0, data_1b8a720, arg2, eax_10, eax_10)
    case 0x51fd5c
        eax_1 = data_1b8b070
        
        if (eax_1 == 0x50)
            return eax_1
        
        if (eax_1 == 0x51 || eax_1 == 0x52)
            eax_1 = arg4
            
            if (eax_1 != 1 && eax_1 != 2)
                if (eax_1 == 3)
                    goto label_51f9e4
                
                goto label_51f9f6
            
            int32_t eax_52 = data_1af4e84
            char** eax_54
            
            if (eax_52 == 0)
                eax_54 = sub_4ef190(eax_52, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
                data_1b8a784 = 0
                data_1b8a770 = 0
                data_1b8a75c = 0
            else
                eax_54 = eax_52 - 1
                
                if (eax_52 == 1)
                    eax_54 =
                        sub_4ef190(eax_54, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$", &data_1b8a720)
            
            return sub_47c5d0(eax_54, arg2, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c, 
                data_1b8a770, (data_1b8a784).b)
        
        if (eax_1 == 0x53)
            return eax_1
        
        if (eax_1 == 0x54 || eax_1 == 0x55)
            eax_1 = arg4
            
            if (eax_1 != 1 && eax_1 != 2)
                goto label_51f8aa
            
            sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
            sub_47c700(&var_8, arg2, data_1b8a720, data_1b8a734, &var_8)
            int32_t eax_51 = var_8
            data_715e98 = eax_51
            return eax_51
        
        if (eax_1 == 0x56 || eax_1 == 0x57 || eax_1 == 0x58 || eax_1 == 0x59
                || (eax_1 != 0x5a && eax_1 != 0x5b))
            return eax_1
        
        eax_1 = arg4
        
        if (eax_1 != 1 && eax_1 != 2)
            goto label_51f71c
        
        int32_t eax_46 = data_1af4e84
        char** eax_48
        
        if (eax_46 == 0)
            eax_48 = sub_4ef190(eax_46, arg3 + 0x20, *(arg3 + 0x20), "$$$$", &data_1b8a720)
            data_1b8a798 = 0
            data_1b8a784 = 0
            data_1b8a770 = 0
        else
            eax_48 = eax_46 - 1
            
            if (eax_46 == 1)
                eax_48 = sub_4ef190(eax_48, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$$", &data_1b8a720)
        
        return sub_47c670(eax_48, arg2, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c, 
            data_1b8a770, data_1b8a784, (data_1b8a798).b)
    case 0x51ff62
        eax_1 = data_1b8b070
        
        if (eax_1 != 0x50)
            if (eax_1 == 0x51 || eax_1 == 0x52)
                int32_t eax_67 = data_1af4e84
                char** eax_70
                
                if (eax_67 == 0)
                    sub_4ef190(eax_67, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                    data_1b8a748 = 0
                    data_1b8a75c = 0
                label_520167:
                    eax_70 = data_1b8a734
                    data_1b8a784 = eax_70
                    data_1b8a770 = 0
                else
                    if (eax_67 == 1)
                        sub_4ef190(eax_67 - 1, arg3 + 0x20, *(arg3 + 0x20), "$$$$", &data_1b8a720)
                        goto label_520167
                    
                    eax_70 = eax_67 - 2
                    
                    if (eax_67 == 2)
                        eax_70 =
                            sub_4ef190(eax_70, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$", &data_1b8a720)
                
                return sub_480190(eax_70, arg2, data_1b8a720, data_1b8a734, data_1b8a748, 
                    data_1b8a75c, data_1b8a770, data_1b8a784)
            
            if (eax_1 == 0x54 || eax_1 == 0x55)
                sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$%%%%", &data_1b8a720)
                int32_t var_10
                int32_t var_c
                int32_t eax_64 = sub_4e8000(
                    sub_4e8000(
                        sub_4803c0(&arg5, arg2, data_1b8a720, data_1b8a734, &arg5, &var_8, &var_c, 
                            &var_10), 
                        data_1b8a758, data_1b8a754, arg5, &data_704898), 
                    data_1b8a76c, data_1b8a768, var_8, &data_704898)
                return sub_4e8000(
                    sub_4e8000(eax_64, data_1b8a780, data_1b8a77c, var_c, &data_704898), 
                    data_1b8a794, data_1b8a790, var_10, &data_704898)
            
            if (eax_1 == 0x5a || eax_1 == 0x5b)
                int32_t eax_56 = data_1af4e84
                char** eax_59
                
                if (eax_56 == 0)
                    sub_4ef190(eax_56, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
                    data_1b8a75c = 0
                    data_1b8a770 = 0
                label_520009:
                    eax_59 = data_1b8a734
                    data_1b8a798 = eax_59
                    data_1b8a784 = 0
                else
                    if (eax_56 == 1)
                        sub_4ef190(eax_56 - 1, arg3 + 0x20, *(arg3 + 0x20), "$$$$$", &data_1b8a720)
                        goto label_520009
                    
                    eax_59 = eax_56 - 2
                    
                    if (eax_56 == 2)
                        eax_59 = sub_4ef190(eax_59, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$$", 
                            &data_1b8a720)
                
                return sub_480230(eax_59, arg2, data_1b8a720, data_1b8a734, data_1b8a748, 
                    data_1b8a75c, data_1b8a770, data_1b8a784, data_1b8a798)
        
        return eax_1
    case 0x5201b1
        eax_1 = data_1b8b070
        
        if (eax_1 != 0x50)
            if (eax_1 == 0x51 || eax_1 == 0x52)
                return sub_4802d0(
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720), arg2, 
                    data_1b8a720, data_1b8a734)
            
            if (eax_1 == 0x5a || eax_1 == 0x5b)
                return sub_480340(
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720), arg2, 
                    data_1b8a720, data_1b8a734, data_1b8a748)
        
        return eax_1
    case 0x52023d
        eax_1 = data_1b8b070
        
        if (eax_1 != 0x50)
            if (eax_1 == 0x51 || eax_1 == 0x52)
                return sub_4805e0(
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720), arg2, 
                    data_1b8a720, data_1b8a734, data_1b8a748)
            
            if (eax_1 == 0x54 || eax_1 == 0x55)
                sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                sub_4806e0(&arg5, arg2, data_1b8a720, data_1b8a734, &arg5)
                int32_t eax_79 = arg5
                data_715e98 = eax_79
                return eax_79
            
            if (eax_1 == 0x5a || eax_1 == 0x5b)
                return sub_480650(
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$$", &data_1b8a720), arg2, 
                    data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c)
        
        return eax_1
    case 0x520323
        eax_1 = data_1b8b070
        
        if (eax_1 != 0x50)
            if (eax_1 == 0x51 || eax_1 == 0x52)
                return sub_480760(
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720), arg2, 
                    data_1b8a720, data_1b8a734, data_1b8a748)
            
            if (eax_1 == 0x54 || eax_1 == 0x55)
                sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                sub_480860(&arg5, arg2, data_1b8a720, data_1b8a734, &arg5)
                int32_t eax_85 = arg5
                data_715e98 = eax_85
                return eax_85
            
            if (eax_1 == 0x5a || eax_1 == 0x5b)
                return sub_4807d0(
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$$", &data_1b8a720), arg2, 
                    data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c)
        
        return eax_1
    case 0x520409
        eax_1 = data_1b8b070
        
        if (eax_1 != 0x50)
            if (eax_1 == 0x51 || eax_1 == 0x52)
                return sub_480470(
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720), arg2, 
                    data_1b8a720, data_1b8a734, data_1b8a748)
            
            if (eax_1 == 0x5a || eax_1 == 0x5b)
                return sub_4804e0(
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$$", &data_1b8a720), arg2, 
                    data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c)
        
        return eax_1

if (eax_1 != 5)
    if (eax_1 == 6)
        return sub_4791e0(sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720), 
            arg2, data_1b8a720, data_1b8a734, 0x67, 0, data_1b8a748)
    
    return eax_1

ecx_11 = sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
eax_11 = data_1b8a734
int32_t var_20_12 = 1
var_24_4 = eax_11
var_28_3 = eax_11
label_51fa65:
int32_t eax_29 = sub_48cfe0(eax_11, 0x67, ecx_11, 0, data_1b8a720, arg2, var_28_3, var_24_4)
sub_445260()
return eax_29
