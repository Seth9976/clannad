// 函数: sub_50deb0
// 地址: 0x50deb0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_1 = arg4 - 0x42e
int32_t var_c
int32_t var_c_1
int32_t var_c_3
int32_t var_c_4
int32_t ecx

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
                        var_c_4 = 0
                        return sub_5028a0(eax_1, arg2, ecx, arg3)
                    
                    if (eax_1 == 3)
                    label_50e15e:
                        int32_t eax_18 = sub_466c70(
                            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720), arg3, 
                            data_1b8a720, 0x71, 0)
                        data_715e98 = eax_18
                        return eax_18
                    
                label_50e16e:
                    
                    if (eax_1 != 4)
                        goto label_50e1a7
                    
                    goto label_50e184
                
                if (eax_1 != 0x53)
                    if (eax_1 == 0x54 || eax_1 == 0x55)
                        eax_1 = arg5
                        
                        if (eax_1 == 1 || eax_1 == 2)
                            var_c_3 = 0
                            return sub_502a10(eax_1, arg2, ecx, arg3)
                        
                        if (eax_1 == 3)
                        label_50e084:
                            int32_t eax_11 = sub_466d80(eax_1, 0x71, arg3, 0)
                            data_715e98 = eax_11
                            return eax_11
                        
                    label_50e094:
                        
                        if (eax_1 != 4)
                            goto label_50e0b4
                        
                        var_c_1 = 0
                        return sub_48cf80(eax_1, 0x71, ecx, 0, 0xffffffff, 0xffffffff, arg3)
                    
                    if (eax_1 != 0x56 && eax_1 != 0x57 && eax_1 != 0x58 && eax_1 != 0x59
                            && (eax_1 == 0x5a || eax_1 == 0x5b))
                        eax_1 = arg5
                        
                        if (eax_1 == 1 || eax_1 == 2)
                            var_c = 0
                            return sub_502b40(eax_1, arg2, ecx, arg3)
                        
                        if (eax_1 == 3)
                        label_50df7c:
                            int32_t eax_3 = sub_466cd0(
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", 
                                    &data_1b8a720), 
                                data_1b8a734, data_1b8a720, arg3, 0x71, 0)
                            data_715e98 = eax_3
                            return eax_3
                        
                    label_50df8c:
                        
                        if (eax_1 != 4)
                            goto label_50dfca
                        
                        goto label_50dfa2
        case 1
            eax_1 = data_1b8b070
            
            if (eax_1 != 0x50)
                if (eax_1 == 0x51 || eax_1 == 0x52)
                    eax_1 = arg5
                    
                    if (eax_1 == 1 || eax_1 == 2)
                        int32_t var_c_7 = 1
                        return sub_5028a0(eax_1, arg2, ecx, arg3)
                    
                    if (eax_1 == 3)
                        goto label_50e15e
                    
                    if (eax_1 == 4)
                    label_50e184:
                        int32_t ecx_22 =
                            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                        int32_t eax_19 = data_1b8a720
                        int32_t var_14_4 = 0
                        return sub_48cf80(eax_19, 0x71, ecx_22, 0, eax_19, eax_19, arg3)
                    
                label_50e1a7:
                    
                    if (eax_1 == 5)
                        int32_t ecx_25 =
                            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                        int32_t eax_21 = data_1b8a720
                        int32_t var_14_5 = 1
                        int32_t eax_22 = sub_48cf80(eax_21, 0x71, ecx_25, 0, eax_21, eax_21, arg3)
                        sub_445260()
                        return eax_22
                    
                    if (eax_1 == 6)
                        return sub_467500(
                            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), 
                            arg3, data_1b8a720, 0x71, 0, data_1b8a734)
                else if (eax_1 != 0x53)
                    if (eax_1 == 0x54 || eax_1 == 0x55)
                        eax_1 = arg5
                        
                        if (eax_1 == 1 || eax_1 == 2)
                            int32_t var_c_6 = 1
                            return sub_502a10(eax_1, arg2, ecx, arg3)
                        
                        if (eax_1 == 3)
                            goto label_50e084
                        
                        if (eax_1 == 4)
                            var_c_1 = 0
                            return sub_48cf80(eax_1, 0x71, ecx, 0, 0xffffffff, 0xffffffff, arg3)
                        
                    label_50e0b4:
                        
                        if (eax_1 == 5)
                            int32_t var_c_2 = 1
                            int32_t eax_13 = sub_48cf80(eax_1, eax_1 + 0x6c, ecx, 0, 0xffffffff, 
                                0xffffffff, arg3)
                            sub_445260()
                            return eax_13
                        
                        if (eax_1 == 6)
                            return sub_4675e0(sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), $", 
                                &data_1b8a720), 0x71, arg3, 0, data_1b8a720)
                    else if (eax_1 != 0x56 && eax_1 != 0x57 && eax_1 != 0x58 && eax_1 != 0x59
                            && (eax_1 == 0x5a || eax_1 == 0x5b))
                        eax_1 = arg5
                        
                        if (eax_1 == 1 || eax_1 == 2)
                            int32_t var_c_5 = 1
                            return sub_502b40(eax_1, arg2, ecx, arg3)
                        
                        if (eax_1 == 3)
                            goto label_50df7c
                        
                        if (eax_1 == 4)
                        label_50dfa2:
                            char** eax_4
                            int32_t ecx_6
                            eax_4, ecx_6 =
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                            int32_t var_14 = 0
                            return sub_48cf80(eax_4, 0x71, ecx_6, 0, data_1b8a720, data_1b8a734, 
                                arg3)
                        
                    label_50dfca:
                        
                        if (eax_1 == 5)
                            char** eax_6
                            int32_t ecx_9
                            eax_6, ecx_9 =
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                            int32_t var_14_1 = 1
                            int32_t eax_7 =
                                sub_48cf80(eax_6, 0x71, ecx_9, 0, data_1b8a720, data_1b8a734, arg3)
                            sub_445260()
                            return eax_7
                        
                        if (eax_1 == 6)
                            return sub_467550(
                                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                    &data_1b8a720), 
                                data_1b8a734, data_1b8a720, arg3, 0x71, 0, data_1b8a748)
        case 2
            eax_1 = data_1b8b070
            
            if (eax_1 != 0x50)
                if (eax_1 == 0x51 || eax_1 == 0x52)
                    eax_1 = arg5
                    
                    if (eax_1 == 1 || eax_1 == 2)
                        var_c_4 = 0
                        return sub_5028a0(eax_1, arg2, ecx, arg3)
                    
                    if (eax_1 == 3)
                        goto label_50e15e
                    
                    goto label_50e16e
                
                if (eax_1 != 0x53)
                    if (eax_1 == 0x54 || eax_1 == 0x55)
                        eax_1 = arg5
                        
                        if (eax_1 == 1 || eax_1 == 2)
                            var_c_3 = 0
                            return sub_502a10(eax_1, arg2, ecx, arg3)
                        
                        if (eax_1 == 3)
                            goto label_50e084
                        
                        goto label_50e094
                    
                    if (eax_1 != 0x56 && eax_1 != 0x57 && eax_1 != 0x58 && eax_1 != 0x59
                            && (eax_1 == 0x5a || eax_1 == 0x5b))
                        eax_1 = arg5
                        
                        if (eax_1 == 1 || eax_1 == 2)
                            var_c = 0
                            return sub_502b40(eax_1, arg2, ecx, arg3)
                        
                        if (eax_1 == 3)
                            goto label_50df7c
                        
                        goto label_50df8c
        case 3
            eax_1 = data_1b8b070
            
            if (eax_1 != 0x50)
                if (eax_1 == 0x51 || eax_1 == 0x52)
                    int32_t eax_37 = data_1af4e84
                    char** eax_39
                    
                    if (eax_37 == 0)
                        eax_39 = sub_4ef190(eax_37, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                        data_1b8a734 = 0
                    else
                        eax_39 = eax_37 - 1
                        
                        if (eax_37 == 1)
                            eax_39 =
                                sub_4ef190(eax_39, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                    
                    return sub_4696a0(eax_39, arg3, data_1b8a720, data_1b8a734)
                
                if (eax_1 != 0x53)
                    if (eax_1 == 0x54 || eax_1 == 0x55)
                        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                        int32_t ecx_36 = data_1b8a720
                        int32_t eax_33 = 0
                        
                        if (ecx_36 s>= 0 && ecx_36 s< data_7031bc)
                            eax_33 = *((arg3 + (ecx_36 << 1)) * 0x650 + 0x72d864)
                        
                        data_715e98 = eax_33
                        return eax_33
                    
                    if (eax_1 != 0x56 && eax_1 != 0x57 && eax_1 != 0x58 && eax_1 != 0x59
                            && (eax_1 == 0x5a || eax_1 == 0x5b))
                        int32_t eax_29 = data_1af4e84
                        char** eax_31
                        
                        if (eax_29 == 0)
                            eax_31 =
                                sub_4ef190(eax_29, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                            data_1b8a748 = 0
                        else
                            eax_31 = eax_29 - 1
                            
                            if (eax_29 == 1)
                                eax_31 = sub_4ef190(eax_31, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                    &data_1b8a720)
                        
                        return sub_4696d0(eax_31, data_1b8a734, data_1b8a720, arg3, data_1b8a748)
        case 4
            eax_1 = data_1b8b070
            
            if (eax_1 != 0x50)
                if (eax_1 == 0x51 || eax_1 == 0x52)
                    int32_t eax_49 = data_1af4e84
                    char** eax_51
                    
                    if (eax_49 == 0)
                        eax_51 = sub_4ef190(eax_49, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                        data_1b8a734 = 0
                    else
                        eax_51 = eax_49 - 1
                        
                        if (eax_49 == 1)
                            eax_51 =
                                sub_4ef190(eax_51, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                    
                    return sub_469720(eax_51, arg3, data_1b8a720, data_1b8a734)
                
                if (eax_1 != 0x53)
                    if (eax_1 == 0x54 || eax_1 == 0x55)
                        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                        int32_t ecx_49 = data_1b8a720
                        int32_t eax_45 = 0
                        
                        if (ecx_49 s>= 0 && ecx_49 s< data_7031bc)
                            eax_45 = *((arg3 + (ecx_49 << 1)) * 0x650 + 0x72d868)
                        
                        data_715e98 = eax_45
                        return eax_45
                    
                    if (eax_1 != 0x56 && eax_1 != 0x57 && eax_1 != 0x58 && eax_1 != 0x59
                            && (eax_1 == 0x5a || eax_1 == 0x5b))
                        int32_t eax_41 = data_1af4e84
                        char** eax_43
                        
                        if (eax_41 == 0)
                            eax_43 =
                                sub_4ef190(eax_41, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                            data_1b8a748 = 0
                        else
                            eax_43 = eax_41 - 1
                            
                            if (eax_41 == 1)
                                eax_43 = sub_4ef190(eax_43, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                    &data_1b8a720)
                        
                        return sub_469750(eax_43, data_1b8a734, data_1b8a720, arg3, data_1b8a748)
return eax_1
