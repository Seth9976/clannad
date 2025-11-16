// 函数: sub_50cf80
// 地址: 0x50cf80
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_18_1
int32_t var_8
int32_t eax_1

switch (jump_table_50de88[arg5])
    case 0x50cf93
        eax_1 = data_1b8b070
        
        if (eax_1 != 0x50)
            if (eax_1 == 0x51 || eax_1 == 0x52)
                return sub_46bf90(
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720), arg2, 
                    data_1b8a720, data_1b8a734)
            
            if (eax_1 != 0x53)
                if (eax_1 == 0x54 || eax_1 == 0x55)
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
                    void* eax_4 = data_1b8a720
                    int32_t ecx_3 = 0
                    
                    if (eax_4 s>= 0 && eax_4 s< data_7031bc)
                        eax_4 = (arg2 + (eax_4 << 1)) * 0x650
                        ecx_3 = *(eax_4 + 0x72d748)
                    
                    data_715e98 = ecx_3
                    return eax_4
                
                if (eax_1 != 0x56 && eax_1 != 0x57 && eax_1 != 0x58 && eax_1 != 0x59
                        && (eax_1 == 0x5a || eax_1 == 0x5b))
                    return sub_46bfd0(
                        sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720), 
                        data_1b8a734, data_1b8a720, arg2, data_1b8a748)
        
        return eax_1
    case 0x50d0a2
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
                    return sub_4e8000(
                        sub_4e8000(sub_46a210(&arg5, arg2, data_1b8a720, &arg5, &var_8), 
                            data_1b8a744, data_1b8a740, arg5, &data_704898), 
                        data_1b8a758, data_1b8a754, var_8, &data_704898)
                
                if (eax_1 == 3)
                label_50d2d7:
                    int32_t eax_20 = sub_466d80(eax_1, 0x67, arg2, 0)
                    data_715e98 = eax_20
                    return eax_20
                
            label_50d2e9:
                
                if (eax_1 != 4)
                    goto label_50d309
                
                var_18_1 = 0
                return sub_48cf80(eax_1, 0x67, arg3, 0, 0xffffffff, 0xffffffff, arg2)
            
            if (eax_1 == 0x56 || eax_1 == 0x57 || eax_1 == 0x58 || eax_1 == 0x59
                    || (eax_1 != 0x5a && eax_1 != 0x5b))
                return eax_1
            
            eax_1 = arg4
            
            if (eax_1 == 1 || eax_1 == 2)
                int32_t eax_16 = data_1af4e84
                char** eax_18
                
                if (eax_16 == 0)
                    eax_18 = sub_4ef190(eax_16, arg3 + 0x20, *(arg3 + 0x20), "$$$$", &data_1b8a720)
                    data_1b8a798 = 0
                    data_1b8a784 = 0
                    data_1b8a770 = 0
                else
                    eax_18 = eax_16 - 1
                    
                    if (eax_16 == 1)
                        eax_18 = sub_4ef190(eax_18, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$$", 
                            &data_1b8a720)
                
                return sub_46a170(eax_18, data_1b8a734, data_1b8a720, arg2, data_1b8a748, 
                    data_1b8a75c, data_1b8a770, data_1b8a784, (data_1b8a798).b)
            
            if (eax_1 == 3)
            label_50d14f:
                int32_t eax_9 = sub_466cd0(
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720), 
                    data_1b8a734, data_1b8a720, arg2, 0x67, 0)
                data_715e98 = eax_9
                return eax_9
            
        label_50d161:
            
            if (eax_1 != 4)
                goto label_50d19e
            
            goto label_50d176
        
        eax_1 = arg4
        
        if (eax_1 == 1 || eax_1 == 2)
            int32_t eax_37 = data_1af4e84
            char** eax_39
            
            if (eax_37 == 0)
                eax_39 = sub_4ef190(eax_37, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
                data_1b8a784 = 0
                data_1b8a770 = 0
                data_1b8a75c = 0
            else
                eax_39 = eax_37 - 1
                
                if (eax_37 == 1)
                    eax_39 =
                        sub_4ef190(eax_39, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$", &data_1b8a720)
            
            return sub_46a100(eax_39, arg2, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c, 
                data_1b8a770, (data_1b8a784).b)
        
        if (eax_1 == 3)
        label_50d405:
            int32_t eax_30 =
                sub_466c70(sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), $", &data_1b8a720), arg2, 
                data_1b8a720, 0x67, 0)
            data_715e98 = eax_30
            return eax_30
        
    label_50d417:
        
        if (eax_1 == 4)
            goto label_50d42c
    case 0x50d556
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
                    sub_46a350(&arg5, arg2, data_1b8a720, &arg5)
                    int32_t eax_46 = arg5
                    data_715e98 = eax_46
                    return eax_46
                
                if (eax_1 == 3)
                    goto label_50d2d7
                
                if (eax_1 == 4)
                    var_18_1 = 0
                    return sub_48cf80(eax_1, 0x67, arg3, 0, 0xffffffff, 0xffffffff, arg2)
                
            label_50d309:
                
                if (eax_1 == 5)
                    int32_t var_18_2 = 1
                    int32_t eax_22 =
                        sub_48cf80(eax_1, eax_1 + 0x62, arg3, 0, 0xffffffff, 0xffffffff, arg2)
                    sub_445260()
                    return eax_22
                
                if (eax_1 == 6)
                    return sub_4675e0(sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), $", 
                        &data_1b8a720), 0x67, arg2, 0, data_1b8a720)
                
                return eax_1
            
            if (eax_1 == 0x56 || eax_1 == 0x57 || eax_1 == 0x58 || eax_1 == 0x59
                    || (eax_1 != 0x5a && eax_1 != 0x5b))
                return eax_1
            
            eax_1 = arg4
            
            if (eax_1 == 1 || eax_1 == 2)
                int32_t eax_41 = data_1af4e84
                char** eax_43
                
                if (eax_41 == 0)
                    eax_43 = sub_4ef190(eax_41, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
                    data_1b8a784 = 0
                    data_1b8a770 = 0
                    data_1b8a75c = 0
                else
                    eax_43 = eax_41 - 1
                    
                    if (eax_41 == 1)
                        eax_43 =
                            sub_4ef190(eax_43, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$", &data_1b8a720)
                
                return sub_46a2c0(eax_43, data_1b8a734, data_1b8a720, arg2, data_1b8a748, 
                    data_1b8a75c, data_1b8a770, (data_1b8a784).b)
            
            if (eax_1 == 3)
                goto label_50d14f
            
            if (eax_1 == 4)
            label_50d176:
                char** eax_10
                int32_t ecx_9
                eax_10, ecx_9 = sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                int32_t var_20_2 = 0
                return sub_48cf80(eax_10, 0x67, ecx_9, 0, data_1b8a720, data_1b8a734, arg2)
            
        label_50d19e:
            
            if (eax_1 != 5)
                if (eax_1 == 6)
                    return sub_467550(
                        sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720), 
                        data_1b8a734, data_1b8a720, arg2, 0x67, 0, data_1b8a748)
                
                return eax_1
            
            char** eax_12
            int32_t ecx_11
            eax_12, ecx_11 = sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
            int32_t var_20_3 = 1
            int32_t eax_13 = sub_48cf80(eax_12, 0x67, ecx_11, 0, data_1b8a720, data_1b8a734, arg2)
            sub_445260()
            return eax_13
        
        eax_1 = arg4
        
        if (eax_1 == 1 || eax_1 == 2)
            int32_t eax_47 = data_1af4e84
            char** eax_49
            
            if (eax_47 == 0)
                eax_49 = sub_4ef190(eax_47, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                data_1b8a770 = 0
                data_1b8a75c = 0
                data_1b8a748 = 0
            else
                eax_49 = eax_47 - 1
                
                if (eax_47 == 1)
                    eax_49 = sub_4ef190(eax_49, arg3 + 0x20, *(arg3 + 0x20), "$$$$$", &data_1b8a720)
            
            return sub_46a260(eax_49, arg2, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c, 
                (data_1b8a770).b)
        
        if (eax_1 == 3)
            goto label_50d405
        
        if (eax_1 == 4)
        label_50d42c:
            int32_t ecx_27 = sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
            int32_t eax_31 = data_1b8a720
            int32_t var_20_8 = 0
            return sub_48cf80(eax_31, 0x67, ecx_27, 0, eax_31, eax_31, arg2)
    case 0x50d778
        eax_1 = data_1b8b070
        
        if (eax_1 == 0x50)
            return eax_1
        
        if (eax_1 == 0x51 || eax_1 == 0x52)
            eax_1 = arg4
            
            if (eax_1 != 1 && eax_1 != 2)
                if (eax_1 == 3)
                    goto label_50d405
                
                goto label_50d417
            
            int32_t eax_57 = data_1af4e84
            char** eax_59
            
            if (eax_57 == 0)
                eax_59 = sub_4ef190(eax_57, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                data_1b8a770 = 0
                data_1b8a75c = 0
                data_1b8a748 = 0
            else
                eax_59 = eax_57 - 1
                
                if (eax_57 == 1)
                    eax_59 = sub_4ef190(eax_59, arg3 + 0x20, *(arg3 + 0x20), "$$$$$", &data_1b8a720)
            
            return sub_46a380(eax_59, arg2, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c, 
                (data_1b8a770).b)
        
        if (eax_1 == 0x53)
            return eax_1
        
        if (eax_1 == 0x54 || eax_1 == 0x55)
            eax_1 = arg4
            
            if (eax_1 == 1 || eax_1 == 2)
                sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
                sub_46a470(&var_8, arg2, data_1b8a720, &var_8)
                int32_t eax_56 = var_8
                data_715e98 = eax_56
                return eax_56
            
            if (eax_1 == 3)
                goto label_50d2d7
            
            goto label_50d2e9
        
        if (eax_1 == 0x56 || eax_1 == 0x57 || eax_1 == 0x58 || eax_1 == 0x59
                || (eax_1 != 0x5a && eax_1 != 0x5b))
            return eax_1
        
        eax_1 = arg4
        
        if (eax_1 != 1 && eax_1 != 2)
            if (eax_1 == 3)
                goto label_50d14f
            
            goto label_50d161
        
        int32_t eax_51 = data_1af4e84
        char** eax_53
        
        if (eax_51 == 0)
            eax_53 = sub_4ef190(eax_51, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
            data_1b8a784 = 0
            data_1b8a770 = 0
            data_1b8a75c = 0
        else
            eax_53 = eax_51 - 1
            
            if (eax_51 == 1)
                eax_53 = sub_4ef190(eax_53, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$", &data_1b8a720)
        
        return sub_46a3e0(eax_53, data_1b8a734, data_1b8a720, arg2, data_1b8a748, data_1b8a75c, 
            data_1b8a770, (data_1b8a784).b)
    case 0x50d97f
        eax_1 = data_1b8b070
        
        if (eax_1 != 0x50)
            if (eax_1 == 0x51 || eax_1 == 0x52)
                int32_t eax_72 = data_1af4e84
                char** eax_75
                
                if (eax_72 == 0)
                    sub_4ef190(eax_72, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
                    data_1b8a734 = 0
                    data_1b8a748 = 0
                label_50db74:
                    eax_75 = data_1b8a720
                    data_1b8a770 = eax_75
                    data_1b8a75c = 0
                else
                    if (eax_72 == 1)
                        sub_4ef190(eax_72 - 1, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
                        goto label_50db74
                    
                    eax_75 = eax_72 - 2
                    
                    if (eax_72 == 2)
                        eax_75 =
                            sub_4ef190(eax_75, arg3 + 0x20, *(arg3 + 0x20), "$$$$$", &data_1b8a720)
                
                return sub_46d600(eax_75, arg2, data_1b8a720, data_1b8a734, data_1b8a748, 
                    data_1b8a75c, data_1b8a770)
            
            if (eax_1 == 0x54 || eax_1 == 0x55)
                sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$%%%%", &data_1b8a720)
                int32_t var_10
                int32_t var_c
                int32_t eax_70 = sub_4e8000(
                    sub_4e8000(
                        sub_4e8000(
                            sub_46d7c0(&arg5, arg2, data_1b8a720, &arg5, &var_8, &var_c, &var_10), 
                            data_1b8a744, data_1b8a740, arg5, &data_704898), 
                        data_1b8a758, data_1b8a754, var_8, &data_704898), 
                    data_1b8a76c, data_1b8a768, var_c, &data_704898)
                return sub_4e8000(eax_70, data_1b8a780, data_1b8a77c, var_10, &data_704898)
            
            if (eax_1 == 0x5a || eax_1 == 0x5b)
                int32_t eax_61 = data_1af4e84
                char** eax_64
                
                if (eax_61 == 0)
                    sub_4ef190(eax_61, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                    data_1b8a748 = 0
                    data_1b8a75c = 0
                label_50da26:
                    eax_64 = data_1b8a720
                    data_1b8a784 = eax_64
                    data_1b8a770 = 0
                else
                    if (eax_61 == 1)
                        sub_4ef190(eax_61 - 1, arg3 + 0x20, *(arg3 + 0x20), "$$$$", &data_1b8a720)
                        goto label_50da26
                    
                    eax_64 = eax_61 - 2
                    
                    if (eax_61 == 2)
                        eax_64 =
                            sub_4ef190(eax_64, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$", &data_1b8a720)
                
                return sub_46d660(eax_64, data_1b8a734, data_1b8a720, arg2, data_1b8a748, 
                    data_1b8a75c, data_1b8a770, data_1b8a784)
        
        return eax_1
    case 0x50dbb8
        eax_1 = data_1b8b070
        
        if (eax_1 != 0x50)
            if (eax_1 == 0x51 || eax_1 == 0x52)
                sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
                return sub_46d6f0(data_1b8a720, arg2)
            
            if (eax_1 == 0x5a || eax_1 == 0x5b)
                return sub_46d740(
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720), 
                    data_1b8a734, data_1b8a720, arg2)
        
        return eax_1
    case 0x50dc37
        eax_1 = data_1b8b070
        
        if (eax_1 != 0x50)
            if (eax_1 == 0x51 || eax_1 == 0x52)
                return sub_46d8b0(
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720), arg2, 
                    data_1b8a720, data_1b8a734)
            
            if (eax_1 == 0x54 || eax_1 == 0x55)
                sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
                void* eax_82 = data_1b8a720
                int32_t ecx_72 = 0xffffffff
                
                if (eax_82 s>= 0 && eax_82 s< data_7031bc)
                    eax_82 = (arg2 + (eax_82 << 1)) * 0x650
                    ecx_72 = *(eax_82 + 0x72dcf8)
                
                data_715e98 = ecx_72
                return eax_82
            
            if (eax_1 == 0x5a || eax_1 == 0x5b)
                return sub_46d8e0(
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720), 
                    data_1b8a734, data_1b8a720, arg2, data_1b8a748)
        
        return eax_1
    case 0x50dd1a
        eax_1 = data_1b8b070
        
        if (eax_1 != 0x50)
            if (eax_1 == 0x51 || eax_1 == 0x52)
                return sub_46d930(
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720), arg2, 
                    data_1b8a720, data_1b8a734)
            
            if (eax_1 == 0x54 || eax_1 == 0x55)
                sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
                void* eax_88 = data_1b8a720
                int32_t ecx_78 = 0xffffffff
                
                if (eax_88 s>= 0 && eax_88 s< data_7031bc)
                    eax_88 = (arg2 + (eax_88 << 1)) * 0x650
                    ecx_78 = *(eax_88 + 0x72dcfc)
                
                data_715e98 = ecx_78
                return eax_88
            
            if (eax_1 == 0x5a || eax_1 == 0x5b)
                return sub_46d960(
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720), 
                    data_1b8a734, data_1b8a720, arg2, data_1b8a748)
        
        return eax_1
    case 0x50ddfd
        eax_1 = data_1b8b070
        
        if (eax_1 != 0x50)
            if (eax_1 == 0x51 || eax_1 == 0x52)
                return sub_46d820(
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720), arg2, 
                    data_1b8a720, data_1b8a734)
            
            if (eax_1 == 0x5a || eax_1 == 0x5b)
                return sub_46d850(
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720), 
                    data_1b8a734, data_1b8a720, arg2, data_1b8a748)
        
        return eax_1

if (eax_1 != 5)
    if (eax_1 == 6)
        return sub_467500(sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720), 
            arg2, data_1b8a720, 0x67, 0, data_1b8a734)
    
    return eax_1

int32_t ecx_29 = sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
int32_t eax_33 = data_1b8a720
int32_t var_20_9 = 1
int32_t eax_34 = sub_48cf80(eax_33, 0x67, ecx_29, 0, eax_33, eax_33, arg2)
sub_445260()
return eax_34
