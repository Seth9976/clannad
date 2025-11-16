// 函数: sub_509fd0
// 地址: 0x509fd0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_24_6
int32_t var_24_18
int32_t var_20_9
int32_t var_8
int32_t eax_1
char** eax_21
char** eax_57

switch (jump_table_50b6bc[arg5])
    case 0x509fe4
        eax_1 = data_1b8b070
        
        if (eax_1 == 0x50)
            return eax_1
        
        int32_t var_30_1
        char** var_2c_1
        char** var_28_2
        int32_t var_24_1
        char** eax_6
        int32_t ecx_5
        
        if (eax_1 == 0x51 || eax_1 == 0x52)
            if (arg4 == 1 || arg4 == 2)
                int32_t eax_28 = data_1af4e84
                char** eax_30
                
                if (eax_28 == 0)
                    eax_30 = sub_4ef190(eax_28, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
                    data_1b8a784 = 0
                    data_1b8a770 = 0
                    data_1b8a75c = 0
                else
                    eax_30 = eax_28 - 1
                    
                    if (eax_28 == 1)
                        eax_30 =
                            sub_4ef190(eax_30, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$", &data_1b8a720)
                
                return sub_46b310(eax_30, arg2, data_1b8a720, data_1b8a734, data_1b8a748, 
                    data_1b8a75c, data_1b8a770, (data_1b8a784).b)
            
            if (arg4 == 3)
                eax_21 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                var_20_9 = data_1b8a734
                var_24_6 = 0x6f
            label_50a37e:
                int32_t eax_22 = sub_466c70(eax_21, arg2, data_1b8a720, var_24_6, var_20_9)
                data_715e98 = eax_22
                return eax_22
            
            if (arg4 == 4)
                int32_t ecx_23 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                int32_t eax_23 = data_1b8a720
                int32_t var_20_10 = 0
                return sub_48cf80(eax_23, 0x6f, ecx_23, data_1b8a734, eax_23, eax_23, arg2)
            
            if (arg4 != 5)
                if (arg4 != 6)
                    return arg4
                
                return sub_467500(
                    sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720), arg2, 
                    data_1b8a720, 0x6f, data_1b8a734, data_1b8a748)
            
            ecx_5 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
            eax_6 = data_1b8a720
            int32_t var_20_11 = 1
            var_24_1 = arg2
            var_28_2 = eax_6
            var_2c_1 = eax_6
            var_30_1 = data_1b8a734
        else
            if (eax_1 == 0x53)
                return eax_1
            
            if (eax_1 == 0x54 || eax_1 == 0x55)
                if (arg4 == 1 || arg4 == 2)
                    sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                    int32_t eax_19 = data_1b8a720
                    int32_t edx_14 = data_1b8a734
                    uint32_t ecx_19 = 0
                    
                    if (eax_19 s>= 0 && eax_19 s< data_7031bc && edx_14 u<= 7)
                        eax_19 = (arg2 + (eax_19 << 1)) * 0x650
                        ecx_19 = zx.d(*(eax_19 + edx_14 + 0x72d8cc))
                    
                    data_715e98 = ecx_19
                    return eax_19
                
                if (arg4 == 3)
                    int32_t eax_14 = sub_466d80(sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), $", 
                        &data_1b8a720), 0x6f, arg2, data_1b8a720)
                    data_715e98 = eax_14
                    return eax_14
                
                if (arg4 == 4)
                    char** eax_15
                    int32_t ecx_14
                    eax_15, ecx_14 =
                        sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), $", &data_1b8a720)
                    int32_t var_20_6 = 0
                    return sub_48cf80(eax_15, 0x6f, ecx_14, data_1b8a720, 0xffffffff, 0xffffffff, 
                        arg2)
                
                if (arg4 != 5)
                    if (arg4 == 6)
                        return sub_4675e0(
                            sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720), 
                            0x6f, arg2, data_1b8a720, data_1b8a734)
                    
                    return arg4
                
                eax_6, ecx_5 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
                int32_t var_20_7 = 1
                var_24_1 = arg2
                var_28_2 = 0xffffffff
                var_2c_1 = 0xffffffff
                var_30_1 = data_1b8a720
            else
                if (eax_1 == 0x56 || eax_1 == 0x57 || eax_1 == 0x58 || eax_1 == 0x59
                        || (eax_1 != 0x5a && eax_1 != 0x5b))
                    return eax_1
                
                if (arg4 == 1 || arg4 == 2)
                    int32_t eax_9 = data_1af4e84
                    char** eax_11
                    
                    if (eax_9 == 0)
                        eax_11 =
                            sub_4ef190(eax_9, arg3 + 0x20, *(arg3 + 0x20), "$$$$", &data_1b8a720)
                        data_1b8a798 = 0
                        data_1b8a784 = 0
                        data_1b8a770 = 0
                    else
                        eax_11 = eax_9 - 1
                        
                        if (eax_9 == 1)
                            eax_11 = sub_4ef190(eax_11, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$$", 
                                &data_1b8a720)
                    
                    return sub_46b3b0(eax_11, data_1b8a734, data_1b8a720, arg2, data_1b8a748, 
                        data_1b8a75c, data_1b8a770, data_1b8a784, (data_1b8a798).b)
                
                if (arg4 == 3)
                    int32_t eax_3 = sub_466cd0(
                        sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720), 
                        data_1b8a734, data_1b8a720, arg2, 0x6f, data_1b8a748)
                    data_715e98 = eax_3
                    return eax_3
                
                if (arg4 == 4)
                    char** eax_4
                    int32_t ecx_3
                    eax_4, ecx_3 =
                        sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
                    int32_t var_20_1 = 0
                    return sub_48cf80(eax_4, 0x6f, ecx_3, data_1b8a748, data_1b8a720, data_1b8a734, 
                        arg2)
                
                if (arg4 != 5)
                    if (arg4 != 6)
                        return arg4
                    
                    return sub_467550(
                        sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$$$", &data_1b8a720), 
                        data_1b8a734, data_1b8a720, arg2, 0x6f, data_1b8a748, data_1b8a75c)
                
                eax_6, ecx_5 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
                int32_t var_20_2 = 1
                var_24_1 = arg2
                var_28_2 = data_1b8a734
                var_2c_1 = data_1b8a720
                var_30_1 = data_1b8a748
        
        int32_t eax_25 = sub_48cf80(eax_6, 0x6f, ecx_5, var_30_1, var_2c_1, var_28_2, var_24_1)
        sub_445260()
        return eax_25
    case 0x50a4e0
        eax_1 = data_1b8b070
        
        if (eax_1 != 0x50)
            if (eax_1 == 0x51 || eax_1 == 0x52)
                return sub_468d80(
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720), arg2, 
                    data_1b8a720, data_1b8a734, data_1b8a748)
            
            if (eax_1 != 0x53 && eax_1 != 0x54 && eax_1 != 0x55 && eax_1 != 0x56 && eax_1 != 0x57
                    && eax_1 != 0x58 && eax_1 != 0x59 && (eax_1 == 0x5a || eax_1 == 0x5b))
                return sub_468ed0(
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$$", &data_1b8a720), 
                    data_1b8a734, data_1b8a720, arg2, data_1b8a748, data_1b8a75c)
        
        return eax_1
    case 0x50a5c0
        eax_1 = data_1b8b070
        
        if (eax_1 != 0x50)
            if (eax_1 == 0x51 || eax_1 == 0x52)
                return sub_4690c0(
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720), arg2, 
                    data_1b8a720, data_1b8a734)
            
            if (eax_1 != 0x53 && eax_1 != 0x54 && eax_1 != 0x55 && eax_1 != 0x56 && eax_1 != 0x57
                    && eax_1 != 0x58 && eax_1 != 0x59 && (eax_1 == 0x5a || eax_1 == 0x5b))
                return sub_4691c0(
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720), 
                    data_1b8a734, data_1b8a720, arg2, data_1b8a748)
        
        return eax_1
    case 0x50a694
        eax_1 = data_1b8b070
        
        if (eax_1 != 0x50)
            if (eax_1 == 0x51 || eax_1 == 0x52)
                return sub_469340(
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720), arg2, 
                    data_1b8a720, data_1b8a734)
            
            if (eax_1 != 0x53 && eax_1 != 0x54 && eax_1 != 0x55 && eax_1 != 0x56 && eax_1 != 0x57
                    && eax_1 != 0x58 && eax_1 != 0x59 && (eax_1 == 0x5a || eax_1 == 0x5b))
                return sub_469440(
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720), 
                    data_1b8a734, data_1b8a720, arg2, data_1b8a748)
        
        return eax_1
    case 0x50a768
        eax_1 = data_1b8b070
        
        if (eax_1 != 0x50)
            if (eax_1 == 0x51 || eax_1 == 0x52)
                return sub_46b370(
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720), arg2, 
                    data_1b8a720, (data_1b8a734).b)
            
            if (eax_1 != 0x53 && eax_1 != 0x54 && eax_1 != 0x55 && eax_1 != 0x56 && eax_1 != 0x57
                    && eax_1 != 0x58 && eax_1 != 0x59 && (eax_1 == 0x5a || eax_1 == 0x5b))
                return sub_46b450(
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720), 
                    data_1b8a734, data_1b8a720, arg2, (data_1b8a748).b)
        
        return eax_1
    case 0x50a83c
        eax_1 = data_1b8b070
        
        if (eax_1 != 0x50)
            if (eax_1 == 0x51 || eax_1 == 0x52)
                return sub_469f60(
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720), arg2, 
                    data_1b8a720, data_1b8a734, data_1b8a748)
            
            if (eax_1 != 0x53)
                if (eax_1 == 0x54 || eax_1 == 0x55)
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$%%", &data_1b8a720)
                    void* eax_50 = data_1b8a720
                    int32_t edi = 0xffffffff
                    int32_t ecx_49
                    
                    if (eax_50 s< 0 || eax_50 s>= data_7031bc)
                        ecx_49 = arg5
                    else
                        eax_50 = (arg2 + (eax_50 << 1)) * 0x650 + &data_72d8f8
                        ecx_49 = *(eax_50 + 0x44)
                        edi = *(eax_50 + 0x48)
                    
                    return sub_4e8000(
                        sub_4e8000(eax_50, data_1b8a744, data_1b8a740, ecx_49, &data_704898), 
                        data_1b8a758, data_1b8a754, edi, &data_704898)
                
                if (eax_1 != 0x56 && eax_1 != 0x57 && eax_1 != 0x58 && eax_1 != 0x59
                        && (eax_1 == 0x5a || eax_1 == 0x5b))
                    return sub_46a010(
                        sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$$", &data_1b8a720), 
                        data_1b8a734, data_1b8a720, arg2, data_1b8a748, data_1b8a75c)
        
        return eax_1
    case 0x50a990
        eax_1 = data_1b8b070
        
        if (eax_1 == 0x50)
            return eax_1
        
        if (eax_1 != 0x51 && eax_1 != 0x52)
            if (eax_1 == 0x53)
                return eax_1
            
            if (eax_1 != 0x54 && eax_1 != 0x55)
                if (eax_1 == 0x56 || eax_1 == 0x57 || eax_1 == 0x58 || eax_1 == 0x59
                        || (eax_1 != 0x5a && eax_1 != 0x5b))
                    return eax_1
                
                eax_1 = arg4
                
                if (eax_1 == 1 || eax_1 == 2)
                    int32_t eax_63 = data_1af4e84
                    
                    if (eax_63 == 0)
                        sub_4ef190(eax_63, arg3 + 0x20, *(arg3 + 0x20), "$$$$", &data_1b8a720)
                        data_1b8a798 = 0
                        data_1b8a784 = 0
                        data_1b8a770 = 0
                    else if (eax_63 == 1)
                        sub_4ef190(eax_63 - 1, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$$", 
                            &data_1b8a720)
                    
                    int32_t eax_71 = data_1b8a748 * 0xa
                    return sub_46a170(eax_71, data_1b8a734, data_1b8a720, arg2, eax_71, 
                        data_1b8a75c * 0xa, data_1b8a770, data_1b8a784, (data_1b8a798).b)
                
            label_50aa12:
                
                if (eax_1 != 3)
                    goto label_50aa50
                
                goto label_50aa27
            
            eax_1 = arg4
            
            if (eax_1 == 1 || eax_1 == 2)
                sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$%%", &data_1b8a720)
                sub_46a210(&arg5, arg2, data_1b8a720, &arg5, &var_8)
                int32_t eax_79
                int32_t edx_61
                edx_61:eax_79 = muls.dp.d(0x66666667, arg5)
                sub_4e8000(eax_79, data_1b8a744, data_1b8a740, arg5 s/ 0xa, &data_704898)
                int32_t eax_83 = var_8 s/ 0xa
                return sub_4e8000(eax_83, data_1b8a758, data_1b8a754, eax_83, &data_704898)
            
        label_50abb0:
            
            if (eax_1 == 3)
                int32_t eax_73 = sub_466d80(eax_1, eax_1 + 0x64, arg2, 0)
                data_715e98 = eax_73
                return eax_73
            
            if (eax_1 == 4)
                int32_t var_18_3 = 0
                return sub_48cf80(eax_1, eax_1 + 0x63, arg3, 0, 0xffffffff, 0xffffffff, arg2)
            
            if (eax_1 == 5)
                int32_t var_18_4 = 1
                int32_t eax_75 =
                    sub_48cf80(eax_1, eax_1 + 0x62, arg3, 0, 0xffffffff, 0xffffffff, arg2)
                sub_445260()
                return eax_75
            
            if (eax_1 == 6)
                return sub_4675e0(sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), $", 
                    &data_1b8a720), 0x67, arg2, 0, data_1b8a720)
            
            return eax_1
        
        eax_1 = arg4
        
        if (eax_1 == 1 || eax_1 == 2)
            int32_t eax_89 = data_1af4e84
            
            if (eax_89 == 0)
                sub_4ef190(eax_89, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
                data_1b8a784 = 0
                data_1b8a770 = 0
                data_1b8a75c = 0
            else if (eax_89 == 1)
                sub_4ef190(eax_89 - 1, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$", &data_1b8a720)
            
            int32_t eax_97 = data_1b8a734 * 0xa
            return sub_46a100(eax_97, arg2, data_1b8a720, eax_97, data_1b8a748 * 0xa, data_1b8a75c, 
                data_1b8a770, (data_1b8a784).b)
        
        if (eax_1 == 3)
        label_50acfc:
            eax_21 = sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
            var_20_9 = 0
            var_24_6 = 0x67
            goto label_50a37e
        
    label_50ad0a:
        
        if (eax_1 == 4)
            goto label_50ad1f
    case 0x50ae46
        eax_1 = data_1b8b070
        
        if (eax_1 == 0x50)
            return eax_1
        
        if (eax_1 != 0x51 && eax_1 != 0x52)
            if (eax_1 == 0x53)
                return eax_1
            
            if (eax_1 == 0x54 || eax_1 == 0x55)
                eax_1 = arg4
                
                if (eax_1 != 1 && eax_1 != 2)
                    goto label_50abb0
                
                sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
                sub_46a350(&arg5, arg2, data_1b8a720, &arg5)
                int32_t eax_110 = arg5 s/ 0xa
                data_715e98 = eax_110
                return eax_110
            
            if (eax_1 == 0x56 || eax_1 == 0x57 || eax_1 == 0x58 || eax_1 == 0x59
                    || (eax_1 != 0x5a && eax_1 != 0x5b))
                return eax_1
            
            eax_1 = arg4
            
            if (eax_1 == 1 || eax_1 == 2)
                int32_t eax_99 = data_1af4e84
                
                if (eax_99 == 0)
                    sub_4ef190(eax_99, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
                    data_1b8a784 = 0
                    data_1b8a770 = 0
                    data_1b8a75c = 0
                else if (eax_99 == 1)
                    sub_4ef190(eax_99 - 1, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$", &data_1b8a720)
                
                int32_t eax_104 = data_1b8a748 * 0xa
                return sub_46a2c0(eax_104, data_1b8a734, data_1b8a720, arg2, eax_104, data_1b8a75c, 
                    data_1b8a770, (data_1b8a784).b)
            
            if (eax_1 == 3)
            label_50aa27:
                eax_57 = sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                int32_t var_20_24 = 0
                var_24_18 = 0x67
                goto label_50aa3d
            
        label_50aa50:
            
            if (eax_1 == 4)
                char** eax_59
                int32_t ecx_57
                eax_59, ecx_57 = sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                int32_t var_20_25 = 0
                return sub_48cf80(eax_59, 0x67, ecx_57, 0, data_1b8a720, data_1b8a734, arg2)
            
            if (eax_1 == 5)
                char** eax_61
                int32_t ecx_59
                eax_61, ecx_59 = sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                int32_t var_20_26 = 1
                int32_t eax_62 =
                    sub_48cf80(eax_61, 0x67, ecx_59, 0, data_1b8a720, data_1b8a734, arg2)
                sub_445260()
                return eax_62
            
            if (eax_1 != 6)
                return eax_1
            
            return sub_467550(sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720), 
                data_1b8a734, data_1b8a720, arg2, 0x67, 0, data_1b8a748)
        
        eax_1 = arg4
        
        if (eax_1 == 1 || eax_1 == 2)
            int32_t eax_111 = data_1af4e84
            
            if (eax_111 == 0)
                sub_4ef190(eax_111, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                data_1b8a770 = 0
                data_1b8a75c = 0
                data_1b8a748 = 0
            else if (eax_111 == 1)
                sub_4ef190(eax_111 - 1, arg3 + 0x20, *(arg3 + 0x20), "$$$$$", &data_1b8a720)
            
            int32_t eax_116 = data_1b8a734 * 0xa
            return sub_46a260(eax_116, arg2, data_1b8a720, eax_116, data_1b8a748, data_1b8a75c, 
                (data_1b8a770).b)
        
        if (eax_1 == 3)
            goto label_50acfc
        
        if (eax_1 == 4)
        label_50ad1f:
            int32_t ecx_76 = sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
            int32_t eax_85 = data_1b8a720
            int32_t var_20_30 = 0
            return sub_48cf80(eax_85, 0x67, ecx_76, 0, eax_85, eax_85, arg2)
    case 0x50b068
        eax_1 = data_1b8b070
        
        if (eax_1 == 0x50)
            return eax_1
        
        if (eax_1 == 0x51 || eax_1 == 0x52)
            eax_1 = arg4
            
            if (eax_1 != 1 && eax_1 != 2)
                if (eax_1 == 3)
                    goto label_50acfc
                
                goto label_50ad0a
            
            int32_t eax_130 = data_1af4e84
            
            if (eax_130 == 0)
                sub_4ef190(eax_130, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                data_1b8a770 = 0
                data_1b8a75c = 0
                data_1b8a748 = 0
            else if (eax_130 == 1)
                sub_4ef190(eax_130 - 1, arg3 + 0x20, *(arg3 + 0x20), "$$$$$", &data_1b8a720)
            
            int32_t eax_135 = data_1b8a734 * 0xa
            return sub_46a380(eax_135, arg2, data_1b8a720, eax_135, data_1b8a748, data_1b8a75c, 
                (data_1b8a770).b)
        
        if (eax_1 == 0x53)
            return eax_1
        
        if (eax_1 == 0x54 || eax_1 == 0x55)
            eax_1 = arg4
            
            if (eax_1 != 1 && eax_1 != 2)
                goto label_50abb0
            
            sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
            sub_46a470(&var_8, arg2, data_1b8a720, &var_8)
            int32_t eax_129 = var_8 s/ 0xa
            data_715e98 = eax_129
            return eax_129
        
        if (eax_1 == 0x56 || eax_1 == 0x57 || eax_1 == 0x58 || eax_1 == 0x59
                || (eax_1 != 0x5a && eax_1 != 0x5b))
            return eax_1
        
        eax_1 = arg4
        
        if (eax_1 != 1 && eax_1 != 2)
            goto label_50aa12
        
        int32_t eax_118 = data_1af4e84
        
        if (eax_118 == 0)
            sub_4ef190(eax_118, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
            data_1b8a784 = 0
            data_1b8a770 = 0
            data_1b8a75c = 0
        else if (eax_118 == 1)
            sub_4ef190(eax_118 - 1, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$", &data_1b8a720)
        
        int32_t eax_123 = data_1b8a748 * 0xa
        return sub_46a3e0(eax_123, data_1b8a734, data_1b8a720, arg2, eax_123, data_1b8a75c, 
            data_1b8a770, (data_1b8a784).b)
    case 0x50b277
        eax_1 = data_1b8b070
        
        if (eax_1 == 0x50)
            return eax_1
        
        if (eax_1 == 0x51 || eax_1 == 0x52)
            if (arg4 == 1 || arg4 == 2)
                int32_t eax_156 = data_1af4e84
                char** eax_158
                
                if (eax_156 == 0)
                    eax_158 = sub_4ef190(eax_156, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                    data_1b8a770 = 0
                    data_1b8a75c = 0
                    data_1b8a748 = 0
                else
                    eax_158 = eax_156 - 1
                    
                    if (eax_156 == 1)
                        eax_158 =
                            sub_4ef190(eax_158, arg3 + 0x20, *(arg3 + 0x20), "$$$$$", &data_1b8a720)
                
                return sub_46a4a0(eax_158, arg2, data_1b8a720, data_1b8a734, data_1b8a748, 
                    data_1b8a75c, (data_1b8a770).b)
            
            if (arg4 == 3)
                eax_21 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
                var_20_9 = 0
                var_24_6 = 0x68
                goto label_50a37e
            
            if (arg4 == 4)
                int32_t ecx_115 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
                int32_t eax_152 = data_1b8a720
                int32_t var_20_44 = 0
                return sub_48cf80(eax_152, 0x68, ecx_115, 0, eax_152, eax_152, arg2)
            
            if (arg4 == 5)
                int32_t ecx_117 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
                int32_t eax_154 = data_1b8a720
                int32_t var_20_45 = 1
                int32_t eax_155 = sub_48cf80(eax_154, 0x68, ecx_117, 0, eax_154, eax_154, arg2)
                sub_445260()
                return eax_155
            
            if (arg4 != 6)
                return arg4
            
            return sub_467500(sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720), 
                arg2, data_1b8a720, 0x68, 0, data_1b8a734)
        
        if (eax_1 == 0x53)
            return eax_1
        
        if (eax_1 == 0x54 || eax_1 == 0x55)
            if (arg4 == 1 || arg4 == 2)
                sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
                void* eax_150 = data_1b8a720
                int32_t ecx_112 = 0
                
                if (eax_150 s>= 0 && eax_150 s< data_7031bc)
                    eax_150 = (arg2 + (eax_150 << 1)) * 0x650
                    ecx_112 = *(eax_150 + 0x72d888)
                
                data_715e98 = ecx_112
                return eax_150
            
            if (arg4 == 3)
                int32_t eax_145 = sub_466d80(arg4, arg4 + 0x65, arg2, 0)
                data_715e98 = eax_145
                return eax_145
            
            if (arg4 == 4)
                int32_t var_18_11 = 0
                return sub_48cf80(arg4, arg4 + 0x64, arg3, 0, 0xffffffff, 0xffffffff, arg2)
            
            if (arg4 == 5)
                int32_t var_18_12 = 1
                int32_t eax_147 =
                    sub_48cf80(arg4, arg4 + 0x63, arg3, 0, 0xffffffff, 0xffffffff, arg2)
                sub_445260()
                return eax_147
            
            if (arg4 == 6)
                return sub_4675e0(sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), $", &data_1b8a720), 
                    0x68, arg2, 0, data_1b8a720)
            
            return arg4
        
        if (eax_1 == 0x56 || eax_1 == 0x57 || eax_1 == 0x58 || eax_1 == 0x59
                || (eax_1 != 0x5a && eax_1 != 0x5b))
            return eax_1
        
        if (arg4 == 1 || arg4 == 2)
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
            
            return sub_46a500(eax_143, data_1b8a734, data_1b8a720, arg2, data_1b8a748, 
                data_1b8a75c, data_1b8a770, (data_1b8a784).b)
        
        if (arg4 == 3)
            eax_57 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
            int32_t var_20_39 = 0
            var_24_18 = 0x68
        label_50aa3d:
            int32_t eax_58 = sub_466cd0(eax_57, data_1b8a734, data_1b8a720, arg2, var_24_18, 0)
            data_715e98 = eax_58
            return eax_58
        
        if (arg4 == 4)
            char** eax_137
            int32_t ecx_101
            eax_137, ecx_101 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
            int32_t var_20_40 = 0
            return sub_48cf80(eax_137, 0x68, ecx_101, 0, data_1b8a720, data_1b8a734, arg2)
        
        if (arg4 == 5)
            char** eax_139
            int32_t ecx_103
            eax_139, ecx_103 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
            int32_t var_20_41 = 1
            int32_t eax_140 =
                sub_48cf80(eax_139, 0x68, ecx_103, 0, data_1b8a720, data_1b8a734, arg2)
            sub_445260()
            return eax_140
        
        if (arg4 != 6)
            return arg4
        
        return sub_467550(sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720), 
            data_1b8a734, data_1b8a720, arg2, 0x68, 0, data_1b8a748)

if (eax_1 == 5)
    int32_t ecx_78 = sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
    int32_t eax_87 = data_1b8a720
    int32_t var_20_31 = 1
    int32_t eax_88 = sub_48cf80(eax_87, 0x67, ecx_78, 0, eax_87, eax_87, arg2)
    sub_445260()
    return eax_88

if (eax_1 != 6)
    return eax_1

return sub_467500(sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720), arg2, 
    data_1b8a720, 0x67, 0, data_1b8a734)
