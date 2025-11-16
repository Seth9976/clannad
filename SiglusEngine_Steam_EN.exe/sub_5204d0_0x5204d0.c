// 函数: sub_5204d0
// 地址: 0x5204d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_1 = arg4 - 0x42e
char** var_1c_2
char** var_18_1
int32_t var_c
int32_t var_c_1
int32_t var_c_2
char** eax_4
char** eax_5
int32_t ecx
int32_t ecx_6
int32_t ecx_9

if (eax_1 u> 4)
    data_1b8b06c = 1
else
    switch (eax_1)
        case 0
            eax_1 = data_1b8b070
            
            if (eax_1 != 0x50)
                if (eax_1 == 0x51 || eax_1 == 0x52)
                    eax_1 = arg5
                    
                    if (eax_1 == 1 || eax_1 == 2)
                        var_c_2 = 0
                        return sub_502cc0(eax_1, arg2, ecx, arg3)
                    
                    if (eax_1 == 3)
                    label_52079a:
                        int32_t eax_15 = sub_478b80(
                            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), 
                            arg3, data_1b8a720, data_1b8a734, 0x71, 0)
                        data_715e98 = eax_15
                        return eax_15
                    
                label_5207aa:
                    
                    if (eax_1 != 4)
                        goto label_5207e9
                    
                    goto label_5207c0
                
                if (eax_1 != 0x53)
                    if (eax_1 == 0x54 || eax_1 == 0x55)
                        eax_1 = arg5
                        
                        if (eax_1 == 1 || eax_1 == 2)
                            var_c_1 = 0
                            return sub_502e40(eax_1, arg2, ecx, arg3)
                        
                        if (eax_1 == 3)
                        label_5206a9:
                            enum MESSAGEBOX_RESULT eax_10 = sub_478ca0(
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720), 
                                arg3, data_1b8a720, 0x71, 0)
                            data_715e98 = eax_10
                            return eax_10
                        
                    label_5206be:
                        
                        if (eax_1 == 4)
                            eax_4, ecx_6 =
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                            int32_t var_14_3 = 0
                            return sub_48cfe0(eax_4, 0x71, ecx_6, 0, data_1b8a720, arg3, 
                                0xffffffff, 0xffffffff)
                        
                        if (eax_1 == 5)
                            eax_5, ecx_9 =
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                            int32_t var_14_4 = 1
                            var_18_1 = 0xffffffff
                            var_1c_2 = 0xffffffff
                            goto label_52081d
                        
                        if (eax_1 == 6)
                            return sub_4792d0(
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", 
                                    &data_1b8a720), 
                                arg3, data_1b8a720, 0x71, 0, data_1b8a734)
                    else if (eax_1 != 0x56 && eax_1 != 0x57 && eax_1 != 0x58 && eax_1 != 0x59
                            && (eax_1 == 0x5a || eax_1 == 0x5b))
                        eax_1 = arg5
                        
                        if (eax_1 == 1 || eax_1 == 2)
                            var_c = 0
                            return sub_502fa0(eax_1, arg2, ecx, arg3)
                        
                        if (eax_1 == 3)
                        label_5205a2:
                            enum MESSAGEBOX_RESULT eax_3 = sub_478c00(
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                    &data_1b8a720), 
                                arg3, data_1b8a720, data_1b8a734, data_1b8a748, 0x71, 0)
                            data_715e98 = eax_3
                            return eax_3
                        
                    label_5205b7:
                        
                        if (eax_1 == 4)
                            eax_4, ecx_6 =
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
                            int32_t var_14 = 0
                            return sub_48cfe0(eax_4, 0x71, ecx_6, 0, data_1b8a720, arg3, 
                                data_1b8a734, data_1b8a748)
                        
                        if (eax_1 == 5)
                            eax_5, ecx_9 =
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
                            int32_t var_14_1 = 1
                            var_18_1 = data_1b8a748
                            var_1c_2 = data_1b8a734
                            goto label_52081d
                        
                        if (eax_1 == 6)
                            return sub_479250(
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$$", 
                                    &data_1b8a720), 
                                arg3, data_1b8a720, data_1b8a734, data_1b8a748, 0x71, 0, 
                                data_1b8a75c)
        case 1
            eax_1 = data_1b8b070
            
            if (eax_1 != 0x50)
                if (eax_1 == 0x51 || eax_1 == 0x52)
                    eax_1 = arg5
                    
                    if (eax_1 == 1 || eax_1 == 2)
                        int32_t var_c_5 = 1
                        return sub_502cc0(eax_1, arg2, ecx, arg3)
                    
                    if (eax_1 == 3)
                        goto label_52079a
                    
                    if (eax_1 == 4)
                    label_5207c0:
                        ecx_6 = sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                        eax_4 = data_1b8a734
                        int32_t var_14_6 = 0
                        return sub_48cfe0(eax_4, 0x71, ecx_6, 0, data_1b8a720, arg3, eax_4, eax_4)
                    
                label_5207e9:
                    
                    if (eax_1 == 5)
                        ecx_9 = sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                        eax_5 = data_1b8a734
                        int32_t var_14_7 = 1
                        var_18_1 = eax_5
                        var_1c_2 = eax_5
                    label_52081d:
                        int32_t eax_17 = sub_48cfe0(eax_5, 0x71, ecx_9, 0, data_1b8a720, arg3, 
                            var_1c_2, var_18_1)
                        sub_445260()
                        return eax_17
                    
                    if (eax_1 == 6)
                        return sub_4791e0(
                            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720), 
                            arg3, data_1b8a720, data_1b8a734, 0x71, 0, data_1b8a748)
                else if (eax_1 != 0x53)
                    if (eax_1 == 0x54 || eax_1 == 0x55)
                        eax_1 = arg5
                        
                        if (eax_1 != 1 && eax_1 != 2)
                            goto label_5206b9
                        
                        int32_t var_c_4 = 1
                        return sub_502e40(eax_1, arg2, ecx, arg3)
                    
                    if (eax_1 != 0x56 && eax_1 != 0x57 && eax_1 != 0x58 && eax_1 != 0x59
                            && (eax_1 == 0x5a || eax_1 == 0x5b))
                        eax_1 = arg5
                        
                        if (eax_1 != 1 && eax_1 != 2)
                            goto label_5205b2
                        
                        int32_t var_c_3 = 1
                        return sub_502fa0(eax_1, arg2, ecx, arg3)
        case 2
            eax_1 = data_1b8b070
            
            if (eax_1 != 0x50)
                if (eax_1 == 0x51 || eax_1 == 0x52)
                    eax_1 = arg5
                    
                    if (eax_1 == 1 || eax_1 == 2)
                        var_c_2 = 0
                        return sub_502cc0(eax_1, arg2, ecx, arg3)
                    
                    if (eax_1 == 3)
                        goto label_52079a
                    
                    goto label_5207aa
                
                if (eax_1 != 0x53)
                    if (eax_1 == 0x54 || eax_1 == 0x55)
                        eax_1 = arg5
                        
                        if (eax_1 == 1 || eax_1 == 2)
                            var_c_1 = 0
                            return sub_502e40(eax_1, arg2, ecx, arg3)
                        
                    label_5206b9:
                        
                        if (eax_1 == 3)
                            goto label_5206a9
                        
                        goto label_5206be
                    
                    if (eax_1 != 0x56 && eax_1 != 0x57 && eax_1 != 0x58 && eax_1 != 0x59
                            && (eax_1 == 0x5a || eax_1 == 0x5b))
                        eax_1 = arg5
                        
                        if (eax_1 == 1 || eax_1 == 2)
                            var_c = 0
                            return sub_502fa0(eax_1, arg2, ecx, arg3)
                        
                    label_5205b2:
                        
                        if (eax_1 == 3)
                            goto label_5205a2
                        
                        goto label_5205b7
        case 3
            eax_1 = data_1b8b070
            
            if (eax_1 != 0x50)
                if (eax_1 == 0x51 || eax_1 == 0x52)
                    int32_t eax_30 = data_1af4e84
                    char** eax_32
                    
                    if (eax_30 == 0)
                        eax_32 =
                            sub_4ef190(eax_30, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                        data_1b8a748 = 0
                    else
                        eax_32 = eax_30 - 1
                        
                        if (eax_30 == 1)
                            eax_32 = sub_4ef190(eax_32, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                &data_1b8a720)
                    
                    return sub_47ae90(eax_32, arg3, data_1b8a720, data_1b8a734, data_1b8a748)
                
                if (eax_1 != 0x53)
                    if (eax_1 == 0x54 || eax_1 == 0x55)
                        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                        sub_47af90(&arg4, arg3, data_1b8a720, data_1b8a734, &arg4)
                        int32_t eax_29 = arg4
                        data_715e98 = eax_29
                        return eax_29
                    
                    if (eax_1 != 0x56 && eax_1 != 0x57 && eax_1 != 0x58 && eax_1 != 0x59
                            && (eax_1 == 0x5a || eax_1 == 0x5b))
                        int32_t eax_24 = data_1af4e84
                        char** eax_26
                        
                        if (eax_24 == 0)
                            eax_26 = sub_4ef190(eax_24, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                &data_1b8a720)
                            data_1b8a75c = 0
                        else
                            eax_26 = eax_24 - 1
                            
                            if (eax_24 == 1)
                                eax_26 = sub_4ef190(eax_26, arg2 + 0x20, *(arg2 + 0x20), "$$$$", 
                                    &data_1b8a720)
                        
                        return sub_47af00(eax_26, arg3, data_1b8a720, data_1b8a734, data_1b8a748, 
                            data_1b8a75c)
        case 4
            eax_1 = data_1b8b070
            
            if (eax_1 != 0x50)
                if (eax_1 == 0x51 || eax_1 == 0x52)
                    int32_t eax_40 = data_1af4e84
                    char** eax_42
                    
                    if (eax_40 == 0)
                        eax_42 =
                            sub_4ef190(eax_40, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                        data_1b8a748 = 0
                    else
                        eax_42 = eax_40 - 1
                        
                        if (eax_40 == 1)
                            eax_42 = sub_4ef190(eax_42, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                &data_1b8a720)
                    
                    return sub_47b010(eax_42, arg3, data_1b8a720, data_1b8a734, data_1b8a748)
                
                if (eax_1 != 0x53)
                    if (eax_1 == 0x54 || eax_1 == 0x55)
                        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                        sub_47b110(&arg4, arg3, data_1b8a720, data_1b8a734, &arg4)
                        int32_t eax_39 = arg4
                        data_715e98 = eax_39
                        return eax_39
                    
                    if (eax_1 != 0x56 && eax_1 != 0x57 && eax_1 != 0x58 && eax_1 != 0x59
                            && (eax_1 == 0x5a || eax_1 == 0x5b))
                        int32_t eax_34 = data_1af4e84
                        char** eax_36
                        
                        if (eax_34 == 0)
                            eax_36 = sub_4ef190(eax_34, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                &data_1b8a720)
                            data_1b8a75c = 0
                        else
                            eax_36 = eax_34 - 1
                            
                            if (eax_34 == 1)
                                eax_36 = sub_4ef190(eax_36, arg2 + 0x20, *(arg2 + 0x20), "$$$$", 
                                    &data_1b8a720)
                        
                        return sub_47b080(eax_36, arg3, data_1b8a720, data_1b8a734, data_1b8a748, 
                            data_1b8a75c)
return eax_1
