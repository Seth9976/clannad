// 函数: sub_515dc0
// 地址: 0x515dc0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_1 = arg4 - 0x3e8
char** var_24_3
int32_t var_20_1
char** var_20_3
int32_t var_20_22
int32_t var_1c_1
int32_t var_1c_28
int32_t var_c
char** eax_4
char** eax_6
char** eax_7
char** eax_66
int32_t ecx
int32_t ecx_9
int32_t ecx_12
int32_t edx_28

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
                        int32_t eax_30 = data_1af4e84
                        char** eax_32
                        
                        if (eax_30 == 0)
                            eax_32 = sub_4ef190(eax_30, arg2 + 0x20, *(arg2 + 0x20), "$$$$", 
                                &data_1b8a720)
                            data_1b8a798 = 0
                            data_1b8a784 = 0
                            data_1b8a770 = 0
                        else
                            eax_32 = eax_30 - 1
                            
                            if (eax_30 == 1)
                                eax_32 = sub_4ef190(eax_32, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$", 
                                    &data_1b8a720)
                        
                        return sub_4796c0(eax_32, arg3, data_1b8a720, data_1b8a734, data_1b8a748, 
                            data_1b8a75c, data_1b8a770, data_1b8a784, (data_1b8a798).b)
                    
                    if (eax_1 == 3)
                    label_51620c:
                        int32_t eax_25 = sub_478b80(
                            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), 
                            arg3, data_1b8a720, data_1b8a734, 0x64, 0)
                        data_715e98 = eax_25
                        return eax_25
                    
                label_51621d:
                    
                    if (eax_1 != 4)
                        goto label_51625d
                    
                    goto label_516233
                
                if (eax_1 != 0x53)
                    if (eax_1 == 0x54 || eax_1 == 0x55)
                        eax_1 = arg5
                        
                        if (eax_1 == 1 || eax_1 == 2)
                            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$%%", &data_1b8a720)
                            return sub_4e8000(
                                sub_4e8000(
                                    sub_479800(&arg4, arg3, data_1b8a720, data_1b8a734, &arg4, 
                                        &var_c), 
                                    data_1b8a758, data_1b8a754, arg4, &data_704898), 
                                data_1b8a76c, data_1b8a768, var_c, &data_704898)
                        
                        if (eax_1 == 3)
                        label_5160bb:
                            enum MESSAGEBOX_RESULT eax_17 = sub_478ca0(
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720), 
                                arg3, data_1b8a720, 0x64, 0)
                            data_715e98 = eax_17
                            return eax_17
                        
                    label_5160d1:
                        
                        if (eax_1 == 4)
                            eax_6, ecx_9 =
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                            int32_t var_1c_7 = 0
                            return sub_48cfe0(eax_6, 0x64, ecx_9, 0, data_1b8a720, arg3, 
                                0xffffffff, 0xffffffff)
                        
                        if (eax_1 == 5)
                            eax_7, ecx_12 =
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                            int32_t var_1c_8 = 1
                            var_20_3 = 0xffffffff
                            var_24_3 = 0xffffffff
                            edx_28 = 0x64
                            goto label_516291
                        
                        if (eax_1 == 6)
                            return sub_4792d0(
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", 
                                    &data_1b8a720), 
                                arg3, data_1b8a720, 0x64, 0, data_1b8a734)
                    else if (eax_1 != 0x56)
                        if (eax_1 == 0x57 || eax_1 == 0x58)
                            return sub_4795b0(
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$$", 
                                    &data_1b8a720), 
                                arg3, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c)
                        
                        if (eax_1 != 0x59)
                            if (eax_1 == 0x5a || eax_1 == 0x5b)
                                eax_1 = arg5
                                
                                if (eax_1 == 1 || eax_1 == 2)
                                    int32_t eax_10 = data_1af4e84
                                    char** eax_12
                                    
                                    if (eax_10 == 0)
                                        eax_12 = sub_4ef190(eax_10, arg2 + 0x20, *(arg2 + 0x20), 
                                            "$$$$$", &data_1b8a720)
                                        data_1b8a7ac = 0
                                        data_1b8a798 = 0
                                        data_1b8a784 = 0
                                    else
                                        eax_12 = eax_10 - 1
                                        
                                        if (eax_10 == 1)
                                            eax_12 = sub_4ef190(eax_12, arg2 + 0x20, 
                                                *(arg2 + 0x20), "$$$$$$$$", &data_1b8a720)
                                    
                                    return sub_479770(eax_12, arg3, data_1b8a720, data_1b8a734, 
                                        data_1b8a748, data_1b8a75c, data_1b8a770, data_1b8a784, 
                                        data_1b8a798, (data_1b8a7ac).b)
                                
                                if (eax_1 == 3)
                                label_515ecc:
                                    eax_4 = sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                        &data_1b8a720)
                                    var_1c_1 = 0
                                    var_20_1 = 0x64
                                    goto label_515eea
                                
                            label_515f00:
                                
                                if (eax_1 == 4)
                                    eax_6, ecx_9 = sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$$", &data_1b8a720)
                                    int32_t var_1c_2 = 0
                                    return sub_48cfe0(eax_6, 0x64, ecx_9, 0, data_1b8a720, arg3, 
                                        data_1b8a734, data_1b8a748)
                                
                                if (eax_1 == 5)
                                    eax_7, ecx_12 = sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$$", &data_1b8a720)
                                    int32_t var_1c_3 = 1
                                    var_20_3 = data_1b8a748
                                    var_24_3 = data_1b8a734
                                    edx_28 = 0x64
                                    goto label_516291
                                
                                if (eax_1 == 6)
                                    return sub_479250(
                                        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$$", 
                                            &data_1b8a720), 
                                        arg3, data_1b8a720, data_1b8a734, data_1b8a748, 0x64, 0, 
                                        data_1b8a75c)
                            else if (eax_1 != 0x5c && (eax_1 == 0x5d || eax_1 == 0x5e))
                                return sub_479630(
                                    sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$$$", 
                                        &data_1b8a720), 
                                    arg3, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c, 
                                    data_1b8a770)
        case 1
            eax_1 = data_1b8b070
            
            if (eax_1 != 0x50)
                if (eax_1 == 0x51 || eax_1 == 0x52)
                    eax_1 = arg5
                    
                    if (eax_1 == 1 || eax_1 == 2)
                        int32_t eax_44 = data_1af4e84
                        char** eax_46
                        
                        if (eax_44 == 0)
                            eax_46 = sub_4ef190(eax_44, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                &data_1b8a720)
                            data_1b8a784 = 0
                            data_1b8a770 = 0
                            data_1b8a75c = 0
                        else
                            eax_46 = eax_44 - 1
                            
                            if (eax_44 == 1)
                                eax_46 = sub_4ef190(eax_46, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$", 
                                    &data_1b8a720)
                        
                        return sub_479990(eax_46, arg3, data_1b8a720, data_1b8a734, data_1b8a748, 
                            data_1b8a75c, data_1b8a770, (data_1b8a784).b)
                    
                    if (eax_1 == 3)
                        goto label_51620c
                    
                    if (eax_1 == 4)
                    label_516233:
                        ecx_9 = sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                        eax_6 = data_1b8a734
                        int32_t var_1c_11 = 0
                        return sub_48cfe0(eax_6, 0x64, ecx_9, 0, data_1b8a720, arg3, eax_6, eax_6)
                    
                label_51625d:
                    
                    if (eax_1 == 5)
                        ecx_12 = sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                        eax_7 = data_1b8a734
                        int32_t var_1c_12 = 1
                        var_20_3 = eax_7
                        var_24_3 = eax_7
                        edx_28 = 0x64
                        goto label_516291
                    
                    if (eax_1 == 6)
                        return sub_4791e0(
                            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720), 
                            arg3, data_1b8a720, data_1b8a734, 0x64, 0, data_1b8a748)
                else if (eax_1 != 0x53)
                    if (eax_1 == 0x54 || eax_1 == 0x55)
                        eax_1 = arg5
                        
                        if (eax_1 == 1 || eax_1 == 2)
                            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                            sub_479ac0(&arg4, arg3, data_1b8a720, data_1b8a734, &arg4)
                            int32_t eax_43 = arg4
                            data_715e98 = eax_43
                            return eax_43
                        
                    label_5160cc:
                        
                        if (eax_1 == 3)
                            goto label_5160bb
                        
                        goto label_5160d1
                    
                    if (eax_1 != 0x56)
                        if (eax_1 == 0x57 || eax_1 == 0x58)
                            return sub_479890(
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                    &data_1b8a720), 
                                arg3, data_1b8a720, data_1b8a734, data_1b8a748)
                        
                        if (eax_1 != 0x59)
                            if (eax_1 == 0x5a || eax_1 == 0x5b)
                                eax_1 = arg5
                                
                                if (eax_1 != 1 && eax_1 != 2)
                                label_515efb:
                                    
                                    if (eax_1 == 3)
                                        goto label_515ecc
                                    
                                    goto label_515f00
                                
                                int32_t eax_36 = data_1af4e84
                                char** eax_38
                                
                                if (eax_36 == 0)
                                    eax_38 = sub_4ef190(eax_36, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$$$", &data_1b8a720)
                                    data_1b8a798 = 0
                                    data_1b8a784 = 0
                                    data_1b8a770 = 0
                                else
                                    eax_38 = eax_36 - 1
                                    
                                    if (eax_36 == 1)
                                        eax_38 = sub_4ef190(eax_38, arg2 + 0x20, *(arg2 + 0x20), 
                                            "$$$$$$$", &data_1b8a720)
                                
                                return sub_479a30(eax_38, arg3, data_1b8a720, data_1b8a734, 
                                    data_1b8a748, data_1b8a75c, data_1b8a770, data_1b8a784, 
                                    (data_1b8a798).b)
                            
                            if (eax_1 != 0x5c && (eax_1 == 0x5d || eax_1 == 0x5e))
                                return sub_479900(
                                    sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$$", 
                                        &data_1b8a720), 
                                    arg3, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c)
        case 2
            eax_1 = data_1b8b070
            
            if (eax_1 != 0x50)
                if (eax_1 == 0x51 || eax_1 == 0x52)
                    eax_1 = arg5
                    
                    if (eax_1 != 1 && eax_1 != 2)
                        if (eax_1 == 3)
                            goto label_51620c
                        
                        goto label_51621d
                    
                    int32_t eax_58 = data_1af4e84
                    char** eax_60
                    
                    if (eax_58 == 0)
                        eax_60 =
                            sub_4ef190(eax_58, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
                        data_1b8a784 = 0
                        data_1b8a770 = 0
                        data_1b8a75c = 0
                    else
                        eax_60 = eax_58 - 1
                        
                        if (eax_58 == 1)
                            eax_60 = sub_4ef190(eax_60, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$", 
                                &data_1b8a720)
                    
                    return sub_479c40(eax_60, arg3, data_1b8a720, data_1b8a734, data_1b8a748, 
                        data_1b8a75c, data_1b8a770, (data_1b8a784).b)
                
                if (eax_1 != 0x53)
                    if (eax_1 == 0x54 || eax_1 == 0x55)
                        eax_1 = arg5
                        
                        if (eax_1 != 1 && eax_1 != 2)
                            goto label_5160cc
                        
                        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                        sub_479d70(&var_c, arg3, data_1b8a720, data_1b8a734, &var_c)
                        int32_t eax_57 = var_c
                        data_715e98 = eax_57
                        return eax_57
                    
                    if (eax_1 != 0x56)
                        if (eax_1 == 0x57 || eax_1 == 0x58)
                            return sub_479b40(
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                    &data_1b8a720), 
                                arg3, data_1b8a720, data_1b8a734, data_1b8a748)
                        
                        if (eax_1 != 0x59)
                            if (eax_1 == 0x5a || eax_1 == 0x5b)
                                eax_1 = arg5
                                
                                if (eax_1 != 1 && eax_1 != 2)
                                    goto label_515efb
                                
                                int32_t eax_50 = data_1af4e84
                                char** eax_52
                                
                                if (eax_50 == 0)
                                    eax_52 = sub_4ef190(eax_50, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$$$", &data_1b8a720)
                                    data_1b8a798 = 0
                                    data_1b8a784 = 0
                                    data_1b8a770 = 0
                                else
                                    eax_52 = eax_50 - 1
                                    
                                    if (eax_50 == 1)
                                        eax_52 = sub_4ef190(eax_52, arg2 + 0x20, *(arg2 + 0x20), 
                                            "$$$$$$$", &data_1b8a720)
                                
                                return sub_479ce0(eax_52, arg3, data_1b8a720, data_1b8a734, 
                                    data_1b8a748, data_1b8a75c, data_1b8a770, data_1b8a784, 
                                    (data_1b8a798).b)
                            
                            if (eax_1 != 0x5c && (eax_1 == 0x5d || eax_1 == 0x5e))
                                return sub_479bb0(
                                    sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$$", 
                                        &data_1b8a720), 
                                    arg3, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c)
        case 3
            eax_1 = data_1b8b070
            
            if (eax_1 != 0x50)
                if (eax_1 == 0x51 || eax_1 == 0x52)
                    eax_1 = arg5
                    
                    if (eax_1 == 1 || eax_1 == 2)
                        int32_t eax_74 = data_1af4e84
                        char** eax_76
                        
                        if (eax_74 == 0)
                            eax_76 = sub_4ef190(eax_74, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                &data_1b8a720)
                            data_1b8a784 = 0
                            data_1b8a770 = 0
                            data_1b8a75c = 0
                        else
                            eax_76 = eax_74 - 1
                            
                            if (eax_74 == 1)
                                eax_76 = sub_4ef190(eax_76, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$", 
                                    &data_1b8a720)
                        
                        return sub_47d920(eax_76, arg3, data_1b8a720, data_1b8a734, data_1b8a748, 
                            data_1b8a75c, data_1b8a770, (data_1b8a784).b)
                    
                    if (eax_1 == 3)
                        int32_t eax_71 = sub_478b80(
                            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), 
                            arg3, data_1b8a720, data_1b8a734, 0x6b, 0)
                        data_715e98 = eax_71
                        return eax_71
                    
                    if (eax_1 == 4)
                        ecx_9 = sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                        eax_6 = data_1b8a734
                        int32_t var_1c_32 = 0
                        return sub_48cfe0(eax_6, 0x6b, ecx_9, 0, data_1b8a720, arg3, eax_6, eax_6)
                    
                    if (eax_1 == 5)
                        ecx_12 = sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                        eax_7 = data_1b8a734
                        edx_28 = 0x6b
                        int32_t var_1c_33 = 1
                        var_20_3 = eax_7
                        var_24_3 = eax_7
                    label_516291:
                        int32_t eax_27 = sub_48cfe0(eax_7, edx_28, ecx_12, 0, data_1b8a720, arg3, 
                            var_24_3, var_20_3)
                        sub_445260()
                        return eax_27
                    
                    if (eax_1 == 6)
                        return sub_4791e0(
                            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720), 
                            arg3, data_1b8a720, data_1b8a734, 0x6b, 0, data_1b8a748)
                else if (eax_1 != 0x53)
                    if (eax_1 == 0x54 || eax_1 == 0x55)
                        eax_1 = arg5
                        
                        if (eax_1 == 1 || eax_1 == 2)
                            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                            sub_47da50(&arg4, arg3, data_1b8a720, data_1b8a734, &arg4)
                            int32_t eax_69 = arg4
                            data_715e98 = eax_69
                            return eax_69
                        
                        if (eax_1 == 3)
                            eax_66 =
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                            var_1c_28 = 0
                            var_20_22 = 0x6b
                        label_516ab4:
                            enum MESSAGEBOX_RESULT eax_67 =
                                sub_478ca0(eax_66, arg3, data_1b8a720, var_20_22, var_1c_28)
                            data_715e98 = eax_67
                            return eax_67
                        
                        if (eax_1 == 4)
                            eax_6, ecx_9 =
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                            int32_t var_1c_29 = 0
                            return sub_48cfe0(eax_6, 0x6b, ecx_9, 0, data_1b8a720, arg3, 
                                0xffffffff, 0xffffffff)
                        
                        if (eax_1 == 5)
                            eax_7, ecx_12 =
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                            int32_t var_1c_30 = 1
                            var_20_3 = 0xffffffff
                            var_24_3 = 0xffffffff
                            edx_28 = 0x6b
                            goto label_516291
                        
                        if (eax_1 == 6)
                            return sub_4792d0(
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", 
                                    &data_1b8a720), 
                                arg3, data_1b8a720, 0x6b, 0, data_1b8a734)
                    else if (eax_1 != 0x56 && eax_1 != 0x57 && eax_1 != 0x58 && eax_1 != 0x59
                            && (eax_1 == 0x5a || eax_1 == 0x5b))
                        eax_1 = arg5
                        
                        if (eax_1 == 1 || eax_1 == 2)
                            int32_t eax_62 = data_1af4e84
                            char** eax_64
                            
                            if (eax_62 == 0)
                                eax_64 = sub_4ef190(eax_62, arg2 + 0x20, *(arg2 + 0x20), "$$$$", 
                                    &data_1b8a720)
                                data_1b8a798 = 0
                                data_1b8a784 = 0
                                data_1b8a770 = 0
                            else
                                eax_64 = eax_62 - 1
                                
                                if (eax_62 == 1)
                                    eax_64 = sub_4ef190(eax_64, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$$$$$$", &data_1b8a720)
                            
                            return sub_47d9c0(eax_64, arg3, data_1b8a720, data_1b8a734, 
                                data_1b8a748, data_1b8a75c, data_1b8a770, data_1b8a784, 
                                (data_1b8a798).b)
                        
                        if (eax_1 == 3)
                            eax_4 =
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
                            var_1c_1 = 0
                            var_20_1 = 0x6b
                        label_515eea:
                            enum MESSAGEBOX_RESULT eax_5 = sub_478c00(eax_4, arg3, data_1b8a720, 
                                data_1b8a734, data_1b8a748, var_20_1, var_1c_1)
                            data_715e98 = eax_5
                            return eax_5
                        
                        if (eax_1 == 4)
                            eax_6, ecx_9 =
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
                            int32_t var_1c_25 = 0
                            return sub_48cfe0(eax_6, 0x6b, ecx_9, 0, data_1b8a720, arg3, 
                                data_1b8a734, data_1b8a748)
                        
                        if (eax_1 == 5)
                            eax_7, ecx_12 =
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
                            int32_t var_1c_26 = 1
                            var_20_3 = data_1b8a748
                            edx_28 = 0x6b
                            var_24_3 = data_1b8a734
                            goto label_516291
                        
                        if (eax_1 == 6)
                            return sub_479250(
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$$", 
                                    &data_1b8a720), 
                                arg3, data_1b8a720, data_1b8a734, data_1b8a748, 0x6b, 0, 
                                data_1b8a75c)
        case 4
            eax_1 = data_1b8b070
            
            if (eax_1 != 0x50)
                if (eax_1 == 0x51 || eax_1 == 0x52)
                    eax_1 = arg5
                    
                    if (eax_1 == 1 || eax_1 == 2)
                        int32_t var_14_9 = arg3
                        return sub_501bb0(eax_1, arg2, ecx)
                    
                    if (eax_1 == 3)
                        int32_t eax_82 = sub_478b80(
                            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), 
                            arg3, data_1b8a720, data_1b8a734, 0, 0)
                        data_715e98 = eax_82
                        return eax_82
                    
                    if (eax_1 == 4)
                        ecx_9 = sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                        eax_6 = data_1b8a734
                        int32_t var_1c_41 = 0
                        return sub_48cfe0(eax_6, 0, ecx_9, 0, data_1b8a720, arg3, eax_6, eax_6)
                    
                    if (eax_1 == 5)
                        ecx_12 = sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                        eax_7 = data_1b8a734
                        edx_28 = 0
                        int32_t var_1c_42 = 1
                        var_20_3 = eax_7
                        var_24_3 = eax_7
                        goto label_516291
                    
                    if (eax_1 == 6)
                        return sub_4791e0(
                            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720), 
                            arg3, data_1b8a720, data_1b8a734, 0, 0, data_1b8a748)
                else if (eax_1 != 0x53)
                    if (eax_1 == 0x54 || eax_1 == 0x55)
                        eax_1 = arg5
                        
                        if (eax_1 == 1 || eax_1 == 2)
                            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                            sub_47e470(&arg4, arg3, data_1b8a720, data_1b8a734, &arg4)
                            int32_t eax_80 = arg4
                            data_715e98 = eax_80
                            return eax_80
                        
                        if (eax_1 == 3)
                            eax_66 =
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                            var_1c_28 = 0
                            var_20_22 = 0
                            goto label_516ab4
                        
                        if (eax_1 == 4)
                            eax_6, ecx_9 =
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                            int32_t var_1c_38 = 0
                            return sub_48cfe0(eax_6, 0, ecx_9, 0, data_1b8a720, arg3, 0xffffffff, 
                                0xffffffff)
                        
                        if (eax_1 == 5)
                            eax_7, ecx_12 =
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                            int32_t var_1c_39 = 1
                            var_20_3 = 0xffffffff
                            var_24_3 = 0xffffffff
                            edx_28 = 0
                            goto label_516291
                        
                        if (eax_1 == 6)
                            return sub_4792d0(
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", 
                                    &data_1b8a720), 
                                arg3, data_1b8a720, 0, 0, data_1b8a734)
                    else if (eax_1 != 0x56 && eax_1 != 0x57 && eax_1 != 0x58 && eax_1 != 0x59
                            && (eax_1 == 0x5a || eax_1 == 0x5b))
                        eax_1 = arg5
                        
                        if (eax_1 == 1 || eax_1 == 2)
                            int32_t var_14_8 = arg3
                            return sub_501df0(eax_1, arg2, ecx)
                        
                        if (eax_1 == 3)
                            eax_4 =
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
                            var_1c_1 = 0
                            var_20_1 = 0
                            goto label_515eea
                        
                        if (eax_1 == 4)
                            eax_6, ecx_9 =
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
                            int32_t var_1c_36 = 0
                            return sub_48cfe0(eax_6, 0, ecx_9, 0, data_1b8a720, arg3, data_1b8a734, 
                                data_1b8a748)
                        
                        if (eax_1 == 5)
                            eax_7, ecx_12 =
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
                            int32_t var_1c_37 = 1
                            var_20_3 = data_1b8a748
                            edx_28 = 0
                            var_24_3 = data_1b8a734
                            goto label_516291
                        
                        if (eax_1 == 6)
                            return sub_479250(
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$$", 
                                    &data_1b8a720), 
                                arg3, data_1b8a720, data_1b8a734, data_1b8a748, 0, 0, data_1b8a75c)
        case 5
            eax_1 = data_1b8b070
            
            if (eax_1 != 0x50)
                if (eax_1 == 0x51 || eax_1 == 0x52)
                    eax_1 = arg5
                    
                    if (eax_1 == 1 || eax_1 == 2)
                        int32_t var_14_12 = 0
                        return sub_502450(eax_1, arg2, ecx, arg3)
                    
                    if (eax_1 == 3)
                        int32_t eax_89 = sub_478b80(
                            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), 
                            arg3, data_1b8a720, data_1b8a734, 0x70, 0)
                        data_715e98 = eax_89
                        return eax_89
                    
                    if (eax_1 == 4)
                        ecx_9 = sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                        eax_6 = data_1b8a734
                        int32_t var_1c_48 = 0
                        return sub_48cfe0(eax_6, 0x70, ecx_9, 0, data_1b8a720, arg3, eax_6, eax_6)
                    
                    if (eax_1 == 5)
                        ecx_12 = sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                        eax_7 = data_1b8a734
                        edx_28 = 0x70
                        int32_t var_1c_49 = 1
                        var_20_3 = eax_7
                        var_24_3 = eax_7
                        goto label_516291
                    
                    if (eax_1 == 6)
                        return sub_4791e0(
                            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720), 
                            arg3, data_1b8a720, data_1b8a734, 0x70, 0, data_1b8a748)
                else if (eax_1 != 0x53)
                    if (eax_1 == 0x54 || eax_1 == 0x55)
                        eax_1 = arg5
                        
                        if (eax_1 == 1 || eax_1 == 2)
                            int32_t var_14_11 = 0
                            return sub_5025d0(eax_1, arg2, ecx, arg3)
                        
                        if (eax_1 == 3)
                            eax_66 =
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                            var_1c_28 = 0
                            var_20_22 = 0x70
                            goto label_516ab4
                        
                        if (eax_1 == 4)
                            eax_6, ecx_9 =
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                            int32_t var_1c_46 = 0
                            return sub_48cfe0(eax_6, 0x70, ecx_9, 0, data_1b8a720, arg3, 
                                0xffffffff, 0xffffffff)
                        
                        if (eax_1 == 5)
                            eax_7, ecx_12 =
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                            int32_t var_1c_47 = 1
                            var_20_3 = 0xffffffff
                            var_24_3 = 0xffffffff
                            edx_28 = 0x70
                            goto label_516291
                        
                        if (eax_1 == 6)
                            return sub_4792d0(
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", 
                                    &data_1b8a720), 
                                arg3, data_1b8a720, 0x70, 0, data_1b8a734)
                    else if (eax_1 != 0x56 && eax_1 != 0x57 && eax_1 != 0x58 && eax_1 != 0x59
                            && (eax_1 == 0x5a || eax_1 == 0x5b))
                        eax_1 = arg5
                        
                        if (eax_1 == 1 || eax_1 == 2)
                            int32_t var_14_10 = 0
                            return sub_502720(eax_1, arg2, ecx, arg3)
                        
                        if (eax_1 == 3)
                            eax_4 =
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
                            var_1c_1 = 0
                            var_20_1 = 0x70
                            goto label_515eea
                        
                        if (eax_1 == 4)
                            eax_6, ecx_9 =
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
                            int32_t var_1c_44 = 0
                            return sub_48cfe0(eax_6, 0x70, ecx_9, 0, data_1b8a720, arg3, 
                                data_1b8a734, data_1b8a748)
                        
                        if (eax_1 == 5)
                            eax_7, ecx_12 =
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
                            int32_t var_1c_45 = 1
                            var_20_3 = data_1b8a748
                            edx_28 = 0x70
                            var_24_3 = data_1b8a734
                            goto label_516291
                        
                        if (eax_1 == 6)
                            return sub_479250(
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$$", 
                                    &data_1b8a720), 
                                arg3, data_1b8a720, data_1b8a734, data_1b8a748, 0x70, 0, 
                                data_1b8a75c)
        case 6
            eax_1 = data_1b8b070
            
            if (eax_1 != 0x50)
                if (eax_1 == 0x51 || eax_1 == 0x52)
                    eax_1 = arg5
                    
                    if (eax_1 != 1 && eax_1 != 2)
                    label_51778a:
                        
                        if (eax_1 != 3)
                            goto label_5177cd
                        
                        goto label_5177bc
                    
                    int32_t eax_121 = data_1af4e84
                    char** eax_123
                    
                    if (eax_121 == 0)
                        eax_123 =
                            sub_4ef190(eax_121, arg2 + 0x20, *(arg2 + 0x20), "$$$$$", &data_1b8a720)
                        data_1b8a7ac = 0
                        data_1b8a798 = 0
                        data_1b8a784 = 0
                    else
                        eax_123 = eax_121 - 1
                        
                        if (eax_121 == 1)
                            eax_123 = sub_4ef190(eax_123, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$", 
                                &data_1b8a720)
                    
                    return sub_479f00(eax_123, arg3, data_1b8a720, data_1b8a734, data_1b8a748, 
                        data_1b8a75c, data_1b8a770, data_1b8a784, data_1b8a798, (data_1b8a7ac).b)
                
                if (eax_1 != 0x53)
                    if (eax_1 == 0x54 || eax_1 == 0x55)
                        eax_1 = arg5
                        
                        if (eax_1 == 1 || eax_1 == 2)
                            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$%%", &data_1b8a720)
                            return sub_4e8000(
                                sub_4e8000(
                                    sub_47a1c0(&arg4, arg3, data_1b8a720, data_1b8a734, 
                                        data_1b8a748, &arg4, &var_c), 
                                    data_1b8a76c, data_1b8a768, arg4, &data_704898), 
                                data_1b8a780, data_1b8a77c, var_c, &data_704898)
                        
                    label_517623:
                        
                        if (eax_1 != 3)
                            goto label_51764b
                        
                        goto label_517639
                    
                    if (eax_1 != 0x56)
                        if (eax_1 == 0x57 || eax_1 == 0x58)
                            return sub_479df0(
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$$$", 
                                    &data_1b8a720), 
                                arg3, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c, 
                                data_1b8a770)
                        
                        if (eax_1 != 0x59)
                            if (eax_1 == 0x5a || eax_1 == 0x5b)
                                eax_1 = arg5
                                
                                if (eax_1 != 1 && eax_1 != 2)
                                label_517439:
                                    
                                    if (eax_1 != 3)
                                        goto label_517461
                                    
                                    goto label_51744f
                                
                                int32_t eax_99 = data_1af4e84
                                char** eax_101
                                
                                if (eax_99 == 0)
                                    eax_101 = sub_4ef190(eax_99, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$$$$$", &data_1b8a720)
                                    data_1b8a7c0 = 0
                                    data_1b8a7ac = 0
                                    data_1b8a798 = 0
                                else
                                    eax_101 = eax_99 - 1
                                    
                                    if (eax_99 == 1)
                                        eax_101 = sub_4ef190(eax_101, arg2 + 0x20, *(arg2 + 0x20), 
                                            "$$$$$$$$$", &data_1b8a720)
                                
                                return sub_47a0a0(eax_101, arg3, data_1b8a720, data_1b8a734, 
                                    data_1b8a748, data_1b8a75c, data_1b8a770, data_1b8a784, 
                                    data_1b8a798, data_1b8a7ac, (data_1b8a7c0).b)
                            
                            if (eax_1 != 0x5c && (eax_1 == 0x5d || eax_1 == 0x5e))
                                return sub_479e70(
                                    sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$", 
                                        &data_1b8a720), 
                                    arg3, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c, 
                                    data_1b8a770, data_1b8a784)
        case 7
            eax_1 = data_1b8b070
            
            if (eax_1 != 0x50)
                if (eax_1 == 0x51 || eax_1 == 0x52)
                    eax_1 = arg5
                    
                    if (eax_1 == 1 || eax_1 == 2)
                        int32_t eax_135 = data_1af4e84
                        char** eax_137
                        
                        if (eax_135 == 0)
                            eax_137 = sub_4ef190(eax_135, arg2 + 0x20, *(arg2 + 0x20), "$$$$", 
                                &data_1b8a720)
                            data_1b8a798 = 0
                            data_1b8a784 = 0
                            data_1b8a770 = 0
                        else
                            eax_137 = eax_135 - 1
                            
                            if (eax_135 == 1)
                                eax_137 = sub_4ef190(eax_137, arg2 + 0x20, *(arg2 + 0x20), 
                                    "$$$$$$$", &data_1b8a720)
                        
                        return sub_47a370(eax_137, arg3, data_1b8a720, data_1b8a734, data_1b8a748, 
                            data_1b8a75c, data_1b8a770, data_1b8a784, (data_1b8a798).b)
                    
                    if (eax_1 == 3)
                    label_5177bc:
                        int32_t eax_114 = sub_478b80(
                            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720), 
                            arg3, data_1b8a720, data_1b8a734, 0x65, data_1b8a748)
                        data_715e98 = eax_114
                        return eax_114
                    
                label_5177cd:
                    
                    if (eax_1 == 4)
                        int32_t ecx_228 =
                            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
                        int32_t eax_115 = data_1b8a734
                        int32_t var_1c_60 = 0
                        return sub_48cfe0(eax_115, 0x65, ecx_228, data_1b8a748, data_1b8a720, arg3, 
                            eax_115, eax_115)
                    
                    if (eax_1 == 5)
                        int32_t ecx_231 =
                            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
                        int32_t eax_117 = data_1b8a734
                        int32_t var_1c_61 = 1
                        int32_t eax_118 = sub_48cfe0(eax_117, 0x65, ecx_231, data_1b8a748, 
                            data_1b8a720, arg3, eax_117, eax_117)
                        sub_445260()
                        return eax_118
                    
                    if (eax_1 == 6)
                        return sub_4791e0(
                            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$$", &data_1b8a720), 
                            arg3, data_1b8a720, data_1b8a734, 0x65, data_1b8a748, data_1b8a75c)
                else if (eax_1 != 0x53)
                    if (eax_1 == 0x54 || eax_1 == 0x55)
                        eax_1 = arg5
                        
                        if (eax_1 == 1 || eax_1 == 2)
                            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
                            sub_47a5e0(&arg4, arg3, data_1b8a720, data_1b8a734, data_1b8a748, &arg4)
                            int32_t eax_134 = arg4
                            data_715e98 = eax_134
                            return eax_134
                        
                        if (eax_1 == 3)
                        label_517639:
                            eax_66 =
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                            var_1c_28 = data_1b8a734
                            var_20_22 = 0x65
                            goto label_516ab4
                        
                    label_51764b:
                        
                        if (eax_1 == 4)
                            char** eax_105
                            int32_t ecx_212
                            eax_105, ecx_212 =
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                            int32_t var_1c_56 = 0
                            return sub_48cfe0(eax_105, 0x65, ecx_212, data_1b8a734, data_1b8a720, 
                                arg3, 0xffffffff, 0xffffffff)
                        
                        if (eax_1 == 5)
                            char** eax_107
                            int32_t ecx_215
                            eax_107, ecx_215 =
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                            int32_t var_1c_57 = 1
                            int32_t eax_108 = sub_48cfe0(eax_107, 0x65, ecx_215, data_1b8a734, 
                                data_1b8a720, arg3, 0xffffffff, 0xffffffff)
                            sub_445260()
                            return eax_108
                        
                        if (eax_1 == 6)
                            return sub_4792d0(
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                    &data_1b8a720), 
                                arg3, data_1b8a720, 0x65, data_1b8a734, data_1b8a748)
                    else if (eax_1 != 0x56)
                        if (eax_1 == 0x57 || eax_1 == 0x58)
                            return sub_47a260(
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$$", 
                                    &data_1b8a720), 
                                arg3, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c)
                        
                        if (eax_1 != 0x59)
                            if (eax_1 == 0x5a || eax_1 == 0x5b)
                                eax_1 = arg5
                                
                                if (eax_1 == 1 || eax_1 == 2)
                                    int32_t eax_127 = data_1af4e84
                                    char** eax_129
                                    
                                    if (eax_127 == 0)
                                        eax_129 = sub_4ef190(eax_127, arg2 + 0x20, *(arg2 + 0x20), 
                                            "$$$$$", &data_1b8a720)
                                        data_1b8a7ac = 0
                                        data_1b8a798 = 0
                                        data_1b8a784 = 0
                                    else
                                        eax_129 = eax_127 - 1
                                        
                                        if (eax_127 == 1)
                                            eax_129 = sub_4ef190(eax_129, arg2 + 0x20, 
                                                *(arg2 + 0x20), "$$$$$$$$", &data_1b8a720)
                                    
                                    return sub_47a4c0(eax_129, arg3, data_1b8a720, data_1b8a734, 
                                        data_1b8a748, data_1b8a75c, data_1b8a770, data_1b8a784, 
                                        data_1b8a798, (data_1b8a7ac).b)
                                
                                if (eax_1 == 3)
                                label_51744f:
                                    eax_4 = sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$$", 
                                        &data_1b8a720)
                                    var_1c_1 = data_1b8a75c
                                    var_20_1 = 0x65
                                    goto label_515eea
                                
                            label_517461:
                                
                                if (eax_1 == 4)
                                    char** eax_95
                                    int32_t ecx_194
                                    eax_95, ecx_194 = sub_4ef190(eax_1, arg2 + 0x20, 
                                        *(arg2 + 0x20), "$$$$", &data_1b8a720)
                                    int32_t var_1c_52 = 0
                                    return sub_48cfe0(eax_95, 0x65, ecx_194, data_1b8a75c, 
                                        data_1b8a720, arg3, data_1b8a734, data_1b8a748)
                                
                                if (eax_1 == 5)
                                    char** eax_97
                                    int32_t ecx_197
                                    eax_97, ecx_197 = sub_4ef190(eax_1, arg2 + 0x20, 
                                        *(arg2 + 0x20), "$$$$", &data_1b8a720)
                                    int32_t var_1c_53 = 1
                                    int32_t eax_98 = sub_48cfe0(eax_97, 0x65, ecx_197, 
                                        data_1b8a75c, data_1b8a720, arg3, data_1b8a734, 
                                        data_1b8a748)
                                    sub_445260()
                                    return eax_98
                                
                                if (eax_1 == 6)
                                    return sub_479250(
                                        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$$$", 
                                            &data_1b8a720), 
                                        arg3, data_1b8a720, data_1b8a734, data_1b8a748, 0x65, 
                                        data_1b8a75c, data_1b8a770)
                            else if (eax_1 != 0x5c && (eax_1 == 0x5d || eax_1 == 0x5e))
                                return sub_47a2e0(
                                    sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$$$", 
                                        &data_1b8a720), 
                                    arg3, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c, 
                                    data_1b8a770)
        case 8
            eax_1 = data_1b8b070
            
            if (eax_1 != 0x50)
                if (eax_1 == 0x51 || eax_1 == 0x52)
                    eax_1 = arg5
                    
                    if (eax_1 != 1 && eax_1 != 2)
                        goto label_51778a
                    
                    int32_t eax_149 = data_1af4e84
                    char** eax_151
                    
                    if (eax_149 == 0)
                        eax_151 =
                            sub_4ef190(eax_149, arg2 + 0x20, *(arg2 + 0x20), "$$$$", &data_1b8a720)
                        data_1b8a798 = 0
                        data_1b8a784 = 0
                        data_1b8a770 = 0
                    else
                        eax_151 = eax_149 - 1
                        
                        if (eax_149 == 1)
                            eax_151 = sub_4ef190(eax_151, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$", 
                                &data_1b8a720)
                    
                    return sub_47a770(eax_151, arg3, data_1b8a720, data_1b8a734, data_1b8a748, 
                        data_1b8a75c, data_1b8a770, data_1b8a784, (data_1b8a798).b)
                
                if (eax_1 != 0x53)
                    if (eax_1 == 0x54 || eax_1 == 0x55)
                        eax_1 = arg5
                        
                        if (eax_1 != 1 && eax_1 != 2)
                            goto label_517623
                        
                        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
                        sub_47a9e0(&var_c, arg3, data_1b8a720, data_1b8a734, data_1b8a748, &var_c)
                        int32_t eax_148 = var_c
                        data_715e98 = eax_148
                        return eax_148
                    
                    if (eax_1 != 0x56)
                        if (eax_1 == 0x57 || eax_1 == 0x58)
                            return sub_47a660(
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$$", 
                                    &data_1b8a720), 
                                arg3, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c)
                        
                        if (eax_1 != 0x59)
                            if (eax_1 == 0x5a || eax_1 == 0x5b)
                                eax_1 = arg5
                                
                                if (eax_1 != 1 && eax_1 != 2)
                                    goto label_517439
                                
                                int32_t eax_141 = data_1af4e84
                                char** eax_143
                                
                                if (eax_141 == 0)
                                    eax_143 = sub_4ef190(eax_141, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$$$$", &data_1b8a720)
                                    data_1b8a7ac = 0
                                    data_1b8a798 = 0
                                    data_1b8a784 = 0
                                else
                                    eax_143 = eax_141 - 1
                                    
                                    if (eax_141 == 1)
                                        eax_143 = sub_4ef190(eax_143, arg2 + 0x20, *(arg2 + 0x20), 
                                            "$$$$$$$$", &data_1b8a720)
                                
                                return sub_47a8c0(eax_143, arg3, data_1b8a720, data_1b8a734, 
                                    data_1b8a748, data_1b8a75c, data_1b8a770, data_1b8a784, 
                                    data_1b8a798, (data_1b8a7ac).b)
                            
                            if (eax_1 != 0x5c && (eax_1 == 0x5d || eax_1 == 0x5e))
                                return sub_47a6e0(
                                    sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$$$", 
                                        &data_1b8a720), 
                                    arg3, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c, 
                                    data_1b8a770)
        case 9
            eax_1 = data_1b8b070
            
            if (eax_1 != 0x50)
                if (eax_1 == 0x51 || eax_1 == 0x52)
                    eax_1 = arg5
                    
                    if (eax_1 == 1 || eax_1 == 2)
                        int32_t eax_163 = data_1af4e84
                        char** eax_165
                        
                        if (eax_163 == 0)
                            eax_165 = sub_4ef190(eax_163, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                &data_1b8a720)
                            data_1b8a784 = 0
                            data_1b8a770 = 0
                            data_1b8a75c = 0
                        else
                            eax_165 = eax_163 - 1
                            
                            if (eax_163 == 1)
                                eax_165 = sub_4ef190(eax_165, arg2 + 0x20, *(arg2 + 0x20), 
                                    "$$$$$$", &data_1b8a720)
                        
                        return sub_47dad0(eax_165, arg3, data_1b8a720, data_1b8a734, data_1b8a748, 
                            data_1b8a75c, data_1b8a770, (data_1b8a784).b)
                    
                    if (eax_1 == 3)
                        int32_t eax_160 = sub_478b80(
                            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), 
                            arg3, data_1b8a720, data_1b8a734, 0x6c, 0)
                        data_715e98 = eax_160
                        return eax_160
                    
                    if (eax_1 == 4)
                        ecx_9 = sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                        eax_6 = data_1b8a734
                        int32_t var_1c_80 = 0
                        return sub_48cfe0(eax_6, 0x6c, ecx_9, 0, data_1b8a720, arg3, eax_6, eax_6)
                    
                    if (eax_1 == 5)
                        ecx_12 = sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                        eax_7 = data_1b8a734
                        edx_28 = 0x6c
                        int32_t var_1c_81 = 1
                        var_20_3 = eax_7
                        var_24_3 = eax_7
                        goto label_516291
                    
                    if (eax_1 == 6)
                        return sub_4791e0(
                            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720), 
                            arg3, data_1b8a720, data_1b8a734, 0x6c, 0, data_1b8a748)
                else if (eax_1 != 0x53)
                    if (eax_1 == 0x54 || eax_1 == 0x55)
                        eax_1 = arg5
                        
                        if (eax_1 == 1 || eax_1 == 2)
                            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                            sub_47dc00(&arg4, arg3, data_1b8a720, data_1b8a734, &arg4)
                            int32_t eax_158 = arg4
                            data_715e98 = eax_158
                            return eax_158
                        
                        if (eax_1 == 3)
                            eax_66 =
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                            var_1c_28 = 0
                            var_20_22 = 0x6c
                            goto label_516ab4
                        
                        if (eax_1 == 4)
                            eax_6, ecx_9 =
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                            int32_t var_1c_77 = 0
                            return sub_48cfe0(eax_6, 0x6c, ecx_9, 0, data_1b8a720, arg3, 
                                0xffffffff, 0xffffffff)
                        
                        if (eax_1 == 5)
                            eax_7, ecx_12 =
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                            int32_t var_1c_78 = 1
                            var_20_3 = 0xffffffff
                            var_24_3 = 0xffffffff
                            edx_28 = 0x6c
                            goto label_516291
                        
                        if (eax_1 == 6)
                            return sub_4792d0(
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", 
                                    &data_1b8a720), 
                                arg3, data_1b8a720, 0x6c, 0, data_1b8a734)
                    else if (eax_1 != 0x56 && eax_1 != 0x57 && eax_1 != 0x58 && eax_1 != 0x59
                            && (eax_1 == 0x5a || eax_1 == 0x5b))
                        eax_1 = arg5
                        
                        if (eax_1 == 1 || eax_1 == 2)
                            int32_t eax_153 = data_1af4e84
                            char** eax_155
                            
                            if (eax_153 == 0)
                                eax_155 = sub_4ef190(eax_153, arg2 + 0x20, *(arg2 + 0x20), "$$$$", 
                                    &data_1b8a720)
                                data_1b8a798 = 0
                                data_1b8a784 = 0
                                data_1b8a770 = 0
                            else
                                eax_155 = eax_153 - 1
                                
                                if (eax_153 == 1)
                                    eax_155 = sub_4ef190(eax_155, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$$$$$$", &data_1b8a720)
                            
                            return sub_47db70(eax_155, arg3, data_1b8a720, data_1b8a734, 
                                data_1b8a748, data_1b8a75c, data_1b8a770, data_1b8a784, 
                                (data_1b8a798).b)
                        
                        if (eax_1 == 3)
                            eax_4 =
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
                            var_1c_1 = 0
                            var_20_1 = 0x6c
                            goto label_515eea
                        
                        if (eax_1 == 4)
                            eax_6, ecx_9 =
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
                            int32_t var_1c_74 = 0
                            return sub_48cfe0(eax_6, 0x6c, ecx_9, 0, data_1b8a720, arg3, 
                                data_1b8a734, data_1b8a748)
                        
                        if (eax_1 == 5)
                            eax_7, ecx_12 =
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
                            int32_t var_1c_75 = 1
                            var_20_3 = data_1b8a748
                            edx_28 = 0x6c
                            var_24_3 = data_1b8a734
                            goto label_516291
                        
                        if (eax_1 == 6)
                            return sub_479250(
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$$", 
                                    &data_1b8a720), 
                                arg3, data_1b8a720, data_1b8a734, data_1b8a748, 0x6c, 0, 
                                data_1b8a75c)
return eax_1
