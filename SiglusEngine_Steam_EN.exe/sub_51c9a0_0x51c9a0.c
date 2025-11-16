// 函数: sub_51c9a0
// 地址: 0x51c9a0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg3
int32_t var_1c_6
int32_t var_1c_25
int32_t var_18_10
int32_t arg_8
int32_t eax_1
char** eax_21
char** eax_58
char** eax_73
int32_t ecx_57

switch (jump_table_51e1a4[arg_8])
    case 0x51c9b1
        eax_1 = data_1b8b070
        
        if (eax_1 == 0x50)
            return eax_1
        
        int32_t var_2c_1
        int32_t var_28_1
        int32_t var_24_2
        char** var_20_2
        char** var_1c_1
        char** eax_6
        int32_t ecx_5
        
        if (eax_1 == 0x51 || eax_1 == 0x52)
            if (arg4 == 1 || arg4 == 2)
                int32_t eax_28 = data_1af4e84
                char** eax_30
                
                if (eax_28 == 0)
                    eax_30 = sub_4ef190(eax_28, arg3 + 0x20, *(arg3 + 0x20), "$$$$", &data_1b8a720)
                    data_1b8a798 = 0
                    data_1b8a784 = 0
                    data_1b8a770 = 0
                else
                    eax_30 = eax_28 - 1
                    
                    if (eax_28 == 1)
                        eax_30 = sub_4ef190(eax_30, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$$", 
                            &data_1b8a720)
                
                return sub_47dfe0(eax_30, arg2, data_1b8a720, data_1b8a734, data_1b8a748, 
                    data_1b8a75c, data_1b8a770, data_1b8a784, (data_1b8a798).b)
            
            if (arg4 == 3)
                eax_21 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
                var_18_10 = data_1b8a748
                var_1c_6 = 0x6f
            label_51cd6c:
                int32_t eax_22 =
                    sub_478b80(eax_21, arg2, data_1b8a720, data_1b8a734, var_1c_6, var_18_10)
                data_715e98 = eax_22
                return eax_22
            
            if (arg4 == 4)
                int32_t ecx_23 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
                int32_t eax_23 = data_1b8a734
                int32_t var_18_11 = 0
                return sub_48cfe0(eax_23, 0x6f, ecx_23, data_1b8a748, data_1b8a720, arg2, eax_23, 
                    eax_23)
            
            if (arg4 != 5)
                if (arg4 != 6)
                    return arg4
                
                return sub_4791e0(
                    sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$$$", &data_1b8a720), arg2, 
                    data_1b8a720, data_1b8a734, 0x6f, data_1b8a748, data_1b8a75c)
            
            ecx_5 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
            eax_6 = data_1b8a734
            int32_t var_18_12 = 1
            var_1c_1 = eax_6
            var_20_2 = eax_6
            var_24_2 = arg2
            var_28_1 = data_1b8a720
            var_2c_1 = data_1b8a748
        else
            if (eax_1 == 0x53)
                return eax_1
            
            if (eax_1 == 0x54 || eax_1 == 0x55)
                if (arg4 == 1 || arg4 == 2)
                    sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
                    sub_47e230(&arg_8, arg2, data_1b8a720, data_1b8a734, data_1b8a748, &arg_8)
                    int32_t eax_20 = arg_8
                    data_715e98 = eax_20
                    return eax_20
                
                if (arg4 == 3)
                    enum MESSAGEBOX_RESULT eax_14 = sub_478ca0(
                        sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720), arg2, 
                        data_1b8a720, 0x6f, data_1b8a734)
                    data_715e98 = eax_14
                    return eax_14
                
                if (arg4 == 4)
                    char** eax_15
                    int32_t ecx_14
                    eax_15, ecx_14 =
                        sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                    int32_t var_18_6 = 0
                    return sub_48cfe0(eax_15, 0x6f, ecx_14, data_1b8a734, data_1b8a720, arg2, 
                        0xffffffff, 0xffffffff)
                
                if (arg4 != 5)
                    if (arg4 != 6)
                        return arg4
                    
                    return sub_4792d0(
                        sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720), arg2, 
                        data_1b8a720, 0x6f, data_1b8a734, data_1b8a748)
                
                eax_6, ecx_5 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                int32_t var_18_7 = 1
                var_1c_1 = 0xffffffff
                var_20_2 = 0xffffffff
                var_24_2 = arg2
                var_28_1 = data_1b8a720
                var_2c_1 = data_1b8a734
            else
                if (eax_1 == 0x56 || eax_1 == 0x57 || eax_1 == 0x58 || eax_1 == 0x59
                        || (eax_1 != 0x5a && eax_1 != 0x5b))
                    return eax_1
                
                if (arg4 == 1 || arg4 == 2)
                    int32_t eax_9 = data_1af4e84
                    char** eax_11
                    
                    if (eax_9 == 0)
                        eax_11 =
                            sub_4ef190(eax_9, arg3 + 0x20, *(arg3 + 0x20), "$$$$$", &data_1b8a720)
                        data_1b8a7ac = 0
                        data_1b8a798 = 0
                        data_1b8a784 = 0
                    else
                        eax_11 = eax_9 - 1
                        
                        if (eax_9 == 1)
                            eax_11 = sub_4ef190(eax_11, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$$$", 
                                &data_1b8a720)
                    
                    return sub_47e110(eax_11, arg2, data_1b8a720, data_1b8a734, data_1b8a748, 
                        data_1b8a75c, data_1b8a770, data_1b8a784, data_1b8a798, (data_1b8a7ac).b)
                
                if (arg4 == 3)
                    enum MESSAGEBOX_RESULT eax_3 = sub_478c00(
                        sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$$$", &data_1b8a720), arg2, 
                        data_1b8a720, data_1b8a734, data_1b8a748, 0x6f, data_1b8a75c)
                    data_715e98 = eax_3
                    return eax_3
                
                if (arg4 == 4)
                    char** eax_4
                    int32_t ecx_3
                    eax_4, ecx_3 =
                        sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$$$", &data_1b8a720)
                    int32_t var_18_1 = 0
                    return sub_48cfe0(eax_4, 0x6f, ecx_3, data_1b8a75c, data_1b8a720, arg2, 
                        data_1b8a734, data_1b8a748)
                
                if (arg4 != 5)
                    if (arg4 == 6)
                        return sub_479250(
                            sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$$$$", &data_1b8a720), 
                            arg2, data_1b8a720, data_1b8a734, data_1b8a748, 0x6f, data_1b8a75c, 
                            data_1b8a770)
                    
                    return arg4
                
                eax_6, ecx_5 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$$$", &data_1b8a720)
                int32_t var_18_2 = 1
                var_1c_1 = data_1b8a748
                var_20_2 = data_1b8a734
                var_24_2 = arg2
                var_28_1 = data_1b8a720
                var_2c_1 = data_1b8a75c
        
        int32_t eax_25 =
            sub_48cfe0(eax_6, 0x6f, ecx_5, var_2c_1, var_28_1, var_24_2, var_20_2, var_1c_1)
        sub_445260()
        return eax_25
    case 0x51cee1
        eax_1 = data_1b8b070
        
        if (eax_1 != 0x50)
            if (eax_1 == 0x51 || eax_1 == 0x52)
                return sub_479fc0(
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$$", &data_1b8a720), arg2, 
                    data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c)
            
            if (eax_1 != 0x53 && eax_1 != 0x54 && eax_1 != 0x55 && eax_1 != 0x56 && eax_1 != 0x57
                    && eax_1 != 0x58 && eax_1 != 0x59 && (eax_1 == 0x5a || eax_1 == 0x5b))
                return sub_47a130(
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$$$", &data_1b8a720), arg2, 
                    data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c, data_1b8a770)
        
        return eax_1
    case 0x51cfcc
        eax_1 = data_1b8b070
        
        if (eax_1 != 0x50)
            if (eax_1 == 0x51 || eax_1 == 0x52)
                return sub_47a420(
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720), arg2, 
                    data_1b8a720, data_1b8a734, data_1b8a748)
            
            if (eax_1 != 0x53 && eax_1 != 0x54 && eax_1 != 0x55 && eax_1 != 0x56 && eax_1 != 0x57
                    && eax_1 != 0x58 && eax_1 != 0x59 && (eax_1 == 0x5a || eax_1 == 0x5b))
                return sub_47a550(
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$$", &data_1b8a720), arg2, 
                    data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c)
        
        return eax_1
    case 0x51d0ab
        eax_1 = data_1b8b070
        
        if (eax_1 != 0x50)
            if (eax_1 == 0x51 || eax_1 == 0x52)
                return sub_47a820(
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720), arg2, 
                    data_1b8a720, data_1b8a734, data_1b8a748)
            
            if (eax_1 != 0x53 && eax_1 != 0x54 && eax_1 != 0x55 && eax_1 != 0x56 && eax_1 != 0x57
                    && eax_1 != 0x58 && eax_1 != 0x59 && (eax_1 == 0x5a || eax_1 == 0x5b))
                return sub_47a950(
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$$", &data_1b8a720), arg2, 
                    data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c)
        
        return eax_1
    case 0x51d18a
        eax_1 = data_1b8b070
        
        if (eax_1 != 0x50)
            if (eax_1 == 0x51 || eax_1 == 0x52)
                return sub_47e090(
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720), arg2, 
                    data_1b8a720, data_1b8a734, (data_1b8a748).b)
            
            if (eax_1 != 0x53 && eax_1 != 0x54 && eax_1 != 0x55 && eax_1 != 0x56 && eax_1 != 0x57
                    && eax_1 != 0x58 && eax_1 != 0x59 && (eax_1 == 0x5a || eax_1 == 0x5b))
                return sub_47e1a0(
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$$", &data_1b8a720), arg2, 
                    data_1b8a720, data_1b8a734, data_1b8a748, (data_1b8a75c).b)
        
        return eax_1
    case 0x51d269
        eax_1 = data_1b8b070
        
        if (eax_1 != 0x50)
            if (eax_1 == 0x51 || eax_1 == 0x52)
                return sub_47c080(
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$$", &data_1b8a720), arg2, 
                    data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c)
            
            if (eax_1 != 0x53)
                if (eax_1 == 0x54 || eax_1 == 0x55)
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$%%", &data_1b8a720)
                    return sub_4e8000(
                        sub_4e8000(
                            sub_47c1d0(&arg_8, arg2, data_1b8a720, data_1b8a734, &arg_8, &var_8), 
                            data_1b8a758, data_1b8a754, arg_8, &data_704898), 
                        data_1b8a76c, data_1b8a768, var_8, &data_704898)
                
                if (eax_1 != 0x56 && eax_1 != 0x57 && eax_1 != 0x58 && eax_1 != 0x59
                        && (eax_1 == 0x5a || eax_1 == 0x5b))
                    return sub_47c140(
                        sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$$$", &data_1b8a720), 
                        arg2, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c, data_1b8a770)
        
        return eax_1
    case 0x51d3b9
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
                    sub_47c390(&arg_8, arg2, data_1b8a720, data_1b8a734, &arg_8, &var_8)
                    int32_t eax_78
                    int32_t edx_66
                    edx_66:eax_78 = muls.dp.d(0x66666667, arg_8)
                    sub_4e8000(eax_78, data_1b8a758, data_1b8a754, arg_8 s/ 0xa, &data_704898)
                    int32_t eax_82 = var_8 s/ 0xa
                    return sub_4e8000(eax_82, data_1b8a76c, data_1b8a768, eax_82, &data_704898)
                
            label_51d5f5:
                
                if (eax_1 == 3)
                    eax_73 = sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
                    int32_t var_18_30 = 0
                    var_1c_25 = 0x67
                    goto label_51d61b
                
                if (eax_1 == 4)
                    eax_58, ecx_57 =
                        sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), $", &data_1b8a720)
                    int32_t var_18_31 = 0
                    return sub_48cfe0(eax_58, 0x67, ecx_57, 0, data_1b8a720, arg2, 0xffffffff, 
                        0xffffffff)
                
                if (eax_1 == 5)
                    char** eax_75
                    int32_t ecx_69
                    eax_75, ecx_69 =
                        sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), $", &data_1b8a720)
                    int32_t var_18_32 = 1
                    int32_t eax_76 = sub_48cfe0(eax_75, 0x67, ecx_69, 0, data_1b8a720, arg2, 
                        0xffffffff, 0xffffffff)
                    sub_445260()
                    return eax_76
                
                if (eax_1 != 6)
                    return eax_1
                
                return sub_4792d0(
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720), arg2, 
                    data_1b8a720, 0x67, 0, data_1b8a734)
            
            if (eax_1 == 0x56 || eax_1 == 0x57 || eax_1 == 0x58 || eax_1 == 0x59
                    || (eax_1 != 0x5a && eax_1 != 0x5b))
                return eax_1
            
            eax_1 = arg4
            
            if (eax_1 == 1 || eax_1 == 2)
                int32_t eax_63 = data_1af4e84
                
                if (eax_63 == 0)
                    sub_4ef190(eax_63, arg3 + 0x20, *(arg3 + 0x20), "$$$$$", &data_1b8a720)
                    data_1b8a7ac = 0
                    data_1b8a798 = 0
                    data_1b8a784 = 0
                else if (eax_63 == 1)
                    sub_4ef190(eax_63 - 1, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$$$", &data_1b8a720)
                
                enum MESSAGEBOX_RESULT eax_71 = data_1b8a75c * 0xa
                return sub_47c300(eax_71, arg2, data_1b8a720, data_1b8a734, data_1b8a748, eax_71, 
                    data_1b8a770 * 0xa, data_1b8a784, data_1b8a798, (data_1b8a7ac).b)
            
        label_51d43b:
            
            if (eax_1 == 3)
                enum MESSAGEBOX_RESULT eax_57 = sub_478c00(
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720), arg2, 
                    data_1b8a720, data_1b8a734, data_1b8a748, 0x67, 0)
                data_715e98 = eax_57
                return eax_57
            
            if (eax_1 == 4)
                eax_58, ecx_57 =
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
                int32_t var_18_26 = 0
                return sub_48cfe0(eax_58, 0x67, ecx_57, 0, data_1b8a720, arg2, data_1b8a734, 
                    data_1b8a748)
            
            if (eax_1 == 5)
                char** eax_59
                int32_t ecx_59
                eax_59, ecx_59 =
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
                int32_t var_18_27 = 1
                int32_t eax_60 = sub_48cfe0(eax_59, 0x67, ecx_59, 0, data_1b8a720, arg2, 
                    data_1b8a734, data_1b8a748)
                sub_445260()
                return eax_60
            
            if (eax_1 == 6)
                return sub_479250(
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$$", &data_1b8a720), arg2, 
                    data_1b8a720, data_1b8a734, data_1b8a748, 0x67, 0, data_1b8a75c)
            
            return eax_1
        
        eax_1 = arg4
        
        if (eax_1 == 1 || eax_1 == 2)
            int32_t eax_87 = data_1af4e84
            
            if (eax_87 == 0)
                sub_4ef190(eax_87, arg3 + 0x20, *(arg3 + 0x20), "$$$$", &data_1b8a720)
                data_1b8a798 = 0
                data_1b8a784 = 0
                data_1b8a770 = 0
            else if (eax_87 == 1)
                sub_4ef190(eax_87 - 1, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$$", &data_1b8a720)
            
            enum MESSAGEBOX_RESULT eax_95 = data_1b8a748 * 0xa
            return sub_47c250(eax_95, arg2, data_1b8a720, data_1b8a734, eax_95, data_1b8a75c * 0xa, 
                data_1b8a770, data_1b8a784, (data_1b8a798).b)
        
        if (eax_1 == 3)
        label_51d776:
            eax_21 = sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
            var_18_10 = 0
            var_1c_6 = 0x67
            goto label_51cd6c
        
    label_51d784:
        
        if (eax_1 == 4)
            goto label_51d799
    case 0x51d8cf
        eax_1 = data_1b8b070
        
        if (eax_1 == 0x50)
            return eax_1
        
        if (eax_1 != 0x51 && eax_1 != 0x52)
            if (eax_1 == 0x53)
                return eax_1
            
            if (eax_1 == 0x54 || eax_1 == 0x55)
                eax_1 = arg4
                
                if (eax_1 != 1 && eax_1 != 2)
                    goto label_51d5f5
                
                sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                sub_47c550(&arg_8, arg2, data_1b8a720, data_1b8a734, &arg_8)
                int32_t eax_108 = arg_8 s/ 0xa
                data_715e98 = eax_108
                return eax_108
            
            if (eax_1 == 0x56 || eax_1 == 0x57 || eax_1 == 0x58 || eax_1 == 0x59
                    || (eax_1 != 0x5a && eax_1 != 0x5b))
                return eax_1
            
            eax_1 = arg4
            
            if (eax_1 != 1 && eax_1 != 2)
                goto label_51d43b
            
            int32_t eax_97 = data_1af4e84
            
            if (eax_97 == 0)
                sub_4ef190(eax_97, arg3 + 0x20, *(arg3 + 0x20), "$$$$", &data_1b8a720)
                data_1b8a798 = 0
                data_1b8a784 = 0
                data_1b8a770 = 0
            else if (eax_97 == 1)
                sub_4ef190(eax_97 - 1, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$$", &data_1b8a720)
            
            enum MESSAGEBOX_RESULT eax_102 = data_1b8a75c * 0xa
            return sub_47c4c0(eax_102, arg2, data_1b8a720, data_1b8a734, data_1b8a748, eax_102, 
                data_1b8a770, data_1b8a784, (data_1b8a798).b)
        
        eax_1 = arg4
        
        if (eax_1 == 1 || eax_1 == 2)
            int32_t eax_109 = data_1af4e84
            
            if (eax_109 == 0)
                sub_4ef190(eax_109, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
                data_1b8a784 = 0
                data_1b8a770 = 0
                data_1b8a75c = 0
            else if (eax_109 == 1)
                sub_4ef190(eax_109 - 1, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$", &data_1b8a720)
            
            enum MESSAGEBOX_RESULT eax_114 = data_1b8a748 * 0xa
            return sub_47c420(eax_114, arg2, data_1b8a720, data_1b8a734, eax_114, data_1b8a75c, 
                data_1b8a770, (data_1b8a784).b)
        
        if (eax_1 == 3)
            goto label_51d776
        
        if (eax_1 == 4)
        label_51d799:
            ecx_57 = sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
            eax_58 = data_1b8a734
            int32_t var_18_34 = 0
            return sub_48cfe0(eax_58, 0x67, ecx_57, 0, data_1b8a720, arg2, eax_58, eax_58)
    case 0x51daf7
        eax_1 = data_1b8b070
        
        if (eax_1 == 0x50)
            return eax_1
        
        if (eax_1 == 0x51 || eax_1 == 0x52)
            eax_1 = arg4
            
            if (eax_1 != 1 && eax_1 != 2)
                if (eax_1 == 3)
                    goto label_51d776
                
                goto label_51d784
            
            int32_t eax_128 = data_1af4e84
            
            if (eax_128 == 0)
                sub_4ef190(eax_128, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
                data_1b8a784 = 0
                data_1b8a770 = 0
                data_1b8a75c = 0
            else if (eax_128 == 1)
                sub_4ef190(eax_128 - 1, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$", &data_1b8a720)
            
            enum MESSAGEBOX_RESULT eax_133 = data_1b8a748 * 0xa
            return sub_47c5d0(eax_133, arg2, data_1b8a720, data_1b8a734, eax_133, data_1b8a75c, 
                data_1b8a770, (data_1b8a784).b)
        
        if (eax_1 == 0x53)
            return eax_1
        
        if (eax_1 == 0x54 || eax_1 == 0x55)
            eax_1 = arg4
            
            if (eax_1 != 1 && eax_1 != 2)
                goto label_51d5f5
            
            sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
            sub_47c700(&var_8, arg2, data_1b8a720, data_1b8a734, &var_8)
            int32_t eax_127 = var_8 s/ 0xa
            data_715e98 = eax_127
            return eax_127
        
        if (eax_1 == 0x56 || eax_1 == 0x57 || eax_1 == 0x58 || eax_1 == 0x59
                || (eax_1 != 0x5a && eax_1 != 0x5b))
            return eax_1
        
        eax_1 = arg4
        
        if (eax_1 != 1 && eax_1 != 2)
            goto label_51d43b
        
        int32_t eax_116 = data_1af4e84
        
        if (eax_116 == 0)
            sub_4ef190(eax_116, arg3 + 0x20, *(arg3 + 0x20), "$$$$", &data_1b8a720)
            data_1b8a798 = 0
            data_1b8a784 = 0
            data_1b8a770 = 0
        else if (eax_116 == 1)
            sub_4ef190(eax_116 - 1, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$$", &data_1b8a720)
        
        enum MESSAGEBOX_RESULT eax_121 = data_1b8a75c * 0xa
        return sub_47c670(eax_121, arg2, data_1b8a720, data_1b8a734, data_1b8a748, eax_121, 
            data_1b8a770, data_1b8a784, (data_1b8a798).b)
    case 0x51dd16
        eax_1 = data_1b8b070
        
        if (eax_1 == 0x50)
            return eax_1
        
        if (eax_1 == 0x51 || eax_1 == 0x52)
            if (arg4 == 1 || arg4 == 2)
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
                        eax_153 = sub_4ef190(eax_153, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$", 
                            &data_1b8a720)
                
                return sub_47c780(eax_153, arg2, data_1b8a720, data_1b8a734, data_1b8a748, 
                    data_1b8a75c, data_1b8a770, (data_1b8a784).b)
            
            if (arg4 == 3)
                eax_21 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                var_18_10 = 0
                var_1c_6 = 0x68
                goto label_51cd6c
            
            if (arg4 == 4)
                ecx_57 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                eax_58 = data_1b8a734
                int32_t var_18_51 = 0
                return sub_48cfe0(eax_58, 0x68, ecx_57, 0, data_1b8a720, arg2, eax_58, eax_58)
            
            if (arg4 == 5)
                int32_t ecx_122 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                int32_t eax_149 = data_1b8a734
                int32_t var_18_52 = 1
                int32_t eax_150 =
                    sub_48cfe0(eax_149, 0x68, ecx_122, 0, data_1b8a720, arg2, eax_149, eax_149)
                sub_445260()
                return eax_150
            
            if (arg4 != 6)
                return arg4
            
            return sub_4791e0(sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720), 
                arg2, data_1b8a720, data_1b8a734, 0x68, 0, data_1b8a748)
        
        if (eax_1 == 0x53)
            return eax_1
        
        if (eax_1 == 0x54 || eax_1 == 0x55)
            if (arg4 == 1 || arg4 == 2)
                sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                sub_47c8b0(&arg_8, arg2, data_1b8a720, data_1b8a734, &arg_8)
                int32_t eax_148 = arg_8
                data_715e98 = eax_148
                return eax_148
            
            if (arg4 == 3)
                eax_73 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
                int32_t var_18_47 = 0
                var_1c_25 = 0x68
            label_51d61b:
                enum MESSAGEBOX_RESULT eax_74 = sub_478ca0(eax_73, arg2, data_1b8a720, var_1c_25, 0)
                data_715e98 = eax_74
                return eax_74
            
            if (arg4 == 4)
                eax_58, ecx_57 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
                int32_t var_18_48 = 0
                return sub_48cfe0(eax_58, 0x68, ecx_57, 0, data_1b8a720, arg2, 0xffffffff, 
                    0xffffffff)
            
            if (arg4 == 5)
                char** eax_145
                int32_t ecx_115
                eax_145, ecx_115 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), $", &data_1b8a720)
                int32_t var_18_49 = 1
                int32_t eax_146 = sub_48cfe0(eax_145, 0x68, ecx_115, 0, data_1b8a720, arg2, 
                    0xffffffff, 0xffffffff)
                sub_445260()
                return eax_146
            
            if (arg4 != 6)
                return arg4
            
            return sub_4792d0(sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720), 
                arg2, data_1b8a720, 0x68, 0, data_1b8a734)
        
        if (eax_1 == 0x56 || eax_1 == 0x57 || eax_1 == 0x58 || eax_1 == 0x59
                || (eax_1 != 0x5a && eax_1 != 0x5b))
            return eax_1
        
        if (arg4 == 1 || arg4 == 2)
            int32_t eax_141 = data_1af4e84
            char** eax_143
            
            if (eax_141 == 0)
                eax_143 = sub_4ef190(eax_141, arg3 + 0x20, *(arg3 + 0x20), "$$$$", &data_1b8a720)
                data_1b8a798 = 0
                data_1b8a784 = 0
                data_1b8a770 = 0
            else
                eax_143 = eax_141 - 1
                
                if (eax_141 == 1)
                    eax_143 =
                        sub_4ef190(eax_143, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$$", &data_1b8a720)
            
            return sub_47c820(eax_143, arg2, data_1b8a720, data_1b8a734, data_1b8a748, 
                data_1b8a75c, data_1b8a770, data_1b8a784, (data_1b8a798).b)
        
        if (arg4 == 3)
            enum MESSAGEBOX_RESULT eax_136 = sub_478c00(
                sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720), arg2, 
                data_1b8a720, data_1b8a734, data_1b8a748, 0x68, 0)
            data_715e98 = eax_136
            return eax_136
        
        if (arg4 == 4)
            eax_58, ecx_57 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
            int32_t var_18_43 = 0
            return sub_48cfe0(eax_58, 0x68, ecx_57, 0, data_1b8a720, arg2, data_1b8a734, 
                data_1b8a748)
        
        if (arg4 == 5)
            char** eax_137
            int32_t ecx_106
            eax_137, ecx_106 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
            int32_t var_18_44 = 1
            int32_t eax_138 = sub_48cfe0(eax_137, 0x68, ecx_106, 0, data_1b8a720, arg2, 
                data_1b8a734, data_1b8a748)
            sub_445260()
            return eax_138
        
        if (arg4 == 6)
            return sub_479250(sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$$$", &data_1b8a720), 
                arg2, data_1b8a720, data_1b8a734, data_1b8a748, 0x68, 0, data_1b8a75c)
        
        return arg4

if (eax_1 == 5)
    int32_t ecx_81 = sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
    int32_t eax_85 = data_1b8a734
    int32_t var_18_35 = 1
    int32_t eax_86 = sub_48cfe0(eax_85, 0x67, ecx_81, 0, data_1b8a720, arg2, eax_85, eax_85)
    sub_445260()
    return eax_86

if (eax_1 != 6)
    return eax_1

return sub_4791e0(sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720), arg2, 
    data_1b8a720, data_1b8a734, 0x67, 0, data_1b8a748)
