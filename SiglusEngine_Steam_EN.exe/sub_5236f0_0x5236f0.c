// 函数: sub_5236f0
// 地址: 0x5236f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
int32_t eax = arg4 - 0x4ba
int32_t var_2c_8
int32_t var_28_14
char** var_24_3
int32_t var_24_18
int32_t var_20_1
char** var_20_3
int32_t var_20_9
int32_t var_20_18
int32_t var_1c_51
char** eax_3
char** eax_5
char** eax_6
char** eax_27
char** eax_53
int32_t ecx_11
int32_t ecx_14
int32_t edx_23

if (eax u> 9)
    data_1b8b06c = 1
else
    switch (eax)
        case 0
            eax = data_1b8b070
            
            if (eax != 0x50)
                if (eax == 0x51 || eax == 0x52)
                    eax = arg5
                    
                    if (eax == 1 || eax == 2)
                        return sub_480d90(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$", 
                                &data_1b8a720), 
                            arg3, data_1b8a720, data_1b8a734, 0, data_1b8a748, data_1b8a75c, 
                            (data_1b8a770).w, (data_1b8a784).w, (data_1b8a798).w, data_1b8a7ac)
                    
                    if (eax == 3)
                        int32_t eax_18 = sub_478b80(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), 
                            arg3, data_1b8a720, data_1b8a734, 0xa, 0)
                        data_715e98 = eax_18
                        return eax_18
                    
                    if (eax == 4)
                        ecx_11 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                        eax_5 = data_1b8a734
                        int32_t var_1c_10 = 0
                        return sub_48cfe0(eax_5, 0xa, ecx_11, 0, data_1b8a720, arg3, eax_5, eax_5)
                    
                    if (eax == 5)
                        ecx_14 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                        eax_6 = data_1b8a734
                        int32_t var_1c_11 = 1
                        var_20_3 = eax_6
                        var_24_3 = eax_6
                    label_523b1f:
                        edx_23 = 0xa
                        goto label_523b2f
                    
                    if (eax == 6)
                        return sub_4791e0(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720), 
                            arg3, data_1b8a720, data_1b8a734, 0xa, 0, data_1b8a748)
                else if (eax != 0x53)
                    if (eax == 0x54 || eax == 0x55)
                        eax = arg5
                        
                        if (eax != 1 && eax != 2)
                            if (eax == 3)
                                enum MESSAGEBOX_RESULT eax_14 = sub_478ca0(
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", 
                                    &data_1b8a720), arg3, data_1b8a720, 0xa, 0)
                                data_715e98 = eax_14
                                return eax_14
                            
                            if (eax == 4)
                                eax_5, ecx_11 =
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                                int32_t var_1c_7 = 0
                                return sub_48cfe0(eax_5, 0xa, ecx_11, 0, data_1b8a720, arg3, 
                                    0xffffffff, 0xffffffff)
                            
                            if (eax == 5)
                                eax_6, ecx_14 =
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                                int32_t var_1c_8 = 1
                                var_20_3 = 0xffffffff
                                var_24_3 = 0xffffffff
                                goto label_523b1f
                            
                            if (eax == 6)
                                int32_t var_20_6 = 0
                                return sub_4792d0(
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", 
                                        &data_1b8a720), 
                                    arg3, data_1b8a720, 0xa, 0, data_1b8a734)
                    else if (eax != 0x56)
                        if (eax == 0x57 || eax == 0x58)
                            eax = arg5
                            
                            if (eax == 1 || eax == 2)
                                return sub_480ec0(
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                        &data_1b8a720), 
                                    arg3, data_1b8a720, data_1b8a734, 0, data_1b8a748)
                        else if (eax != 0x59)
                            if (eax == 0x5a || eax == 0x5b)
                                eax = arg5
                                
                                if (eax == 1 || eax == 2)
                                    return sub_480e20(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$", 
                                            &data_1b8a720), 
                                        arg3, data_1b8a720, data_1b8a734, data_1b8a748, 0, 
                                        data_1b8a75c, data_1b8a770, (data_1b8a784).w, 
                                        (data_1b8a798).w, (data_1b8a7ac).w, data_1b8a7c0)
                                
                                if (eax == 3)
                                    eax_3 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                        &data_1b8a720)
                                    int32_t var_1c_1 = 0
                                    var_20_1 = 0xa
                                    goto label_523829
                                
                                if (eax == 4)
                                    eax_5, ecx_11 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$$", &data_1b8a720)
                                    int32_t var_1c_2 = 0
                                    return sub_48cfe0(eax_5, 0xa, ecx_11, 0, data_1b8a720, arg3, 
                                        data_1b8a734, data_1b8a748)
                                
                                if (eax == 5)
                                    eax_6, ecx_14 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$$", &data_1b8a720)
                                    int32_t var_1c_3 = 1
                                    var_20_3 = data_1b8a748
                                    var_24_3 = data_1b8a734
                                    goto label_523b1f
                                
                                if (eax == 6)
                                    int32_t var_20_4 = 0
                                    return sub_479250(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$", 
                                            &data_1b8a720), 
                                        arg3, data_1b8a720, data_1b8a734, data_1b8a748, 0xa, 0, 
                                        data_1b8a75c)
                            else if (eax != 0x5c && (eax == 0x5d || eax == 0x5e))
                                eax = arg5
                                
                                if (eax == 1 || eax == 2)
                                    return sub_480f40(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$", 
                                            &data_1b8a720), 
                                        arg3, data_1b8a720, data_1b8a734, data_1b8a748, 0, 
                                        data_1b8a75c)
        case 1
            eax = data_1b8b070
            
            if (eax != 0x50)
                if (eax == 0x51 || eax == 0x52)
                    eax = arg5
                    
                    if (eax == 1 || eax == 2)
                        return sub_480d90(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$", 
                                &data_1b8a720), 
                            arg3, data_1b8a720, data_1b8a734, 1, data_1b8a748, data_1b8a75c, 
                            (data_1b8a770).w, (data_1b8a784).w, (data_1b8a798).w, data_1b8a7ac)
                    
                    if (eax == 3)
                        int32_t eax_30 = sub_478b80(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), 
                            arg3, data_1b8a720, data_1b8a734, 0xb, 0)
                        data_715e98 = eax_30
                        return eax_30
                    
                    if (eax == 4)
                        ecx_11 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                        eax_5 = data_1b8a734
                        int32_t var_1c_21 = 0
                        return sub_48cfe0(eax_5, 0xb, ecx_11, 0, data_1b8a720, arg3, eax_5, eax_5)
                    
                    if (eax == 5)
                        ecx_14 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                        eax_6 = data_1b8a734
                        edx_23 = 0xb
                        int32_t var_1c_22 = 1
                        var_20_3 = eax_6
                        var_24_3 = eax_6
                    label_523b2f:
                        int32_t eax_20 = sub_48cfe0(eax_6, edx_23, ecx_14, 0, data_1b8a720, arg3, 
                            var_24_3, var_20_3)
                        sub_445260()
                        return eax_20
                    
                    if (eax == 6)
                        return sub_4791e0(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720), 
                            arg3, data_1b8a720, data_1b8a734, 0xb, 0, data_1b8a748)
                else if (eax != 0x53)
                    if (eax == 0x54 || eax == 0x55)
                        eax = arg5
                        
                        if (eax != 1 && eax != 2)
                            if (eax == 3)
                                eax_27 =
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                                int32_t var_1c_18 = 0
                                var_20_9 = 0xb
                            label_523e28:
                                enum MESSAGEBOX_RESULT eax_28 =
                                    sub_478ca0(eax_27, arg3, data_1b8a720, var_20_9, 0)
                                data_715e98 = eax_28
                                return eax_28
                            
                            if (eax == 4)
                                eax_5, ecx_11 =
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                                int32_t var_1c_19 = 0
                                return sub_48cfe0(eax_5, 0xb, ecx_11, 0, data_1b8a720, arg3, 
                                    0xffffffff, 0xffffffff)
                            
                            if (eax == 5)
                                eax_6, ecx_14 =
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                                int32_t var_1c_20 = 1
                                var_20_3 = 0xffffffff
                                var_24_3 = 0xffffffff
                                edx_23 = 0xb
                                goto label_523b2f
                            
                            if (eax == 6)
                                int32_t var_20_10 = 0
                                return sub_4792d0(
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", 
                                        &data_1b8a720), 
                                    arg3, data_1b8a720, 0xb, 0, data_1b8a734)
                    else if (eax != 0x56)
                        if (eax == 0x57 || eax == 0x58)
                            eax = arg5
                            
                            if (eax == 1 || eax == 2)
                                return sub_480ec0(
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                        &data_1b8a720), 
                                    arg3, data_1b8a720, data_1b8a734, 1, data_1b8a748)
                        else if (eax != 0x59)
                            if (eax == 0x5a || eax == 0x5b)
                                eax = arg5
                                
                                if (eax == 1 || eax == 2)
                                    return sub_480e20(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$", 
                                            &data_1b8a720), 
                                        arg3, data_1b8a720, data_1b8a734, data_1b8a748, 1, 
                                        data_1b8a75c, data_1b8a770, (data_1b8a784).w, 
                                        (data_1b8a798).w, (data_1b8a7ac).w, data_1b8a7c0)
                                
                                if (eax == 3)
                                    eax_3 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                        &data_1b8a720)
                                    int32_t var_1c_14 = 0
                                    var_20_1 = 0xb
                                    goto label_523829
                                
                                if (eax == 4)
                                    eax_5, ecx_11 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$$", &data_1b8a720)
                                    int32_t var_1c_15 = 0
                                    return sub_48cfe0(eax_5, 0xb, ecx_11, 0, data_1b8a720, arg3, 
                                        data_1b8a734, data_1b8a748)
                                
                                if (eax == 5)
                                    eax_6, ecx_14 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$$", &data_1b8a720)
                                    int32_t var_1c_16 = 1
                                    var_20_3 = data_1b8a748
                                    edx_23 = 0xb
                                    var_24_3 = data_1b8a734
                                    goto label_523b2f
                                
                                if (eax == 6)
                                    int32_t var_20_8 = 0
                                    return sub_479250(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$", 
                                            &data_1b8a720), 
                                        arg3, data_1b8a720, data_1b8a734, data_1b8a748, 0xb, 0, 
                                        data_1b8a75c)
                            else if (eax != 0x5c && (eax == 0x5d || eax == 0x5e))
                                eax = arg5
                                
                                if (eax == 1 || eax == 2)
                                    return sub_480f40(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$", 
                                            &data_1b8a720), 
                                        arg3, data_1b8a720, data_1b8a734, data_1b8a748, 1, 
                                        data_1b8a75c)
        case 2
            eax = data_1b8b070
            
            if (eax != 0x50)
                if (eax == 0x51 || eax == 0x52)
                    eax = arg5
                    
                    if (eax == 1 || eax == 2)
                        return sub_480d90(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$", &data_1b8a720), 
                            arg3, data_1b8a720, data_1b8a734, 2, data_1b8a748, data_1b8a75c, 0, 0, 
                            0, data_1b8a770)
                    
                    if (eax == 3)
                        int32_t eax_38 = sub_478b80(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), 
                            arg3, data_1b8a720, data_1b8a734, 0xc, 0)
                        data_715e98 = eax_38
                        return eax_38
                    
                    if (eax == 4)
                        ecx_11 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                        eax_5 = data_1b8a734
                        int32_t var_1c_32 = 0
                        return sub_48cfe0(eax_5, 0xc, ecx_11, 0, data_1b8a720, arg3, eax_5, eax_5)
                    
                    if (eax == 5)
                        ecx_14 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                        eax_6 = data_1b8a734
                        edx_23 = 0xc
                        int32_t var_1c_33 = 1
                        var_20_3 = eax_6
                        var_24_3 = eax_6
                        goto label_523b2f
                    
                    if (eax == 6)
                        return sub_4791e0(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720), 
                            arg3, data_1b8a720, data_1b8a734, 0xc, 0, data_1b8a748)
                else if (eax != 0x53)
                    if (eax == 0x54 || eax == 0x55)
                        eax = arg5
                        
                        if (eax != 1 && eax != 2)
                            if (eax == 3)
                                eax_27 =
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                                int32_t var_1c_29 = 0
                                var_20_9 = 0xc
                                goto label_523e28
                            
                            if (eax == 4)
                                eax_5, ecx_11 =
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                                int32_t var_1c_30 = 0
                                return sub_48cfe0(eax_5, 0xc, ecx_11, 0, data_1b8a720, arg3, 
                                    0xffffffff, 0xffffffff)
                            
                            if (eax == 5)
                                eax_6, ecx_14 =
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                                int32_t var_1c_31 = 1
                                var_20_3 = 0xffffffff
                                var_24_3 = 0xffffffff
                                edx_23 = 0xc
                                goto label_523b2f
                            
                            if (eax == 6)
                                int32_t var_20_13 = 0
                                return sub_4792d0(
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", 
                                        &data_1b8a720), 
                                    arg3, data_1b8a720, 0xc, 0, data_1b8a734)
                    else if (eax != 0x56)
                        if (eax == 0x57 || eax == 0x58)
                            eax = arg5
                            
                            if (eax == 1 || eax == 2)
                                return sub_480ec0(
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                        &data_1b8a720), 
                                    arg3, data_1b8a720, data_1b8a734, 2, data_1b8a748)
                        else if (eax != 0x59)
                            if (eax == 0x5a || eax == 0x5b)
                                eax = arg5
                                
                                if (eax == 1 || eax == 2)
                                    return sub_480e20(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$", 
                                            &data_1b8a720), 
                                        arg3, data_1b8a720, data_1b8a734, data_1b8a748, 2, 
                                        data_1b8a75c, data_1b8a770, 0, 0, 0, data_1b8a784)
                                
                                if (eax == 3)
                                    eax_3 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                        &data_1b8a720)
                                    int32_t var_1c_25 = 0
                                    var_20_1 = 0xc
                                    goto label_523829
                                
                                if (eax == 4)
                                    eax_5, ecx_11 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$$", &data_1b8a720)
                                    int32_t var_1c_26 = 0
                                    return sub_48cfe0(eax_5, 0xc, ecx_11, 0, data_1b8a720, arg3, 
                                        data_1b8a734, data_1b8a748)
                                
                                if (eax == 5)
                                    eax_6, ecx_14 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$$", &data_1b8a720)
                                    int32_t var_1c_27 = 1
                                    var_20_3 = data_1b8a748
                                    edx_23 = 0xc
                                    var_24_3 = data_1b8a734
                                    goto label_523b2f
                                
                                if (eax == 6)
                                    int32_t var_20_12 = 0
                                    return sub_479250(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$", 
                                            &data_1b8a720), 
                                        arg3, data_1b8a720, data_1b8a734, data_1b8a748, 0xc, 0, 
                                        data_1b8a75c)
                            else if (eax != 0x5c && (eax == 0x5d || eax == 0x5e))
                                eax = arg5
                                
                                if (eax == 1 || eax == 2)
                                    return sub_480f40(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$", 
                                            &data_1b8a720), 
                                        arg3, data_1b8a720, data_1b8a734, data_1b8a748, 2, 
                                        data_1b8a75c)
        case 3
            eax = data_1b8b070
            
            if (eax != 0x50)
                if (eax == 0x51 || eax == 0x52)
                    eax = arg5
                    
                    if (eax == 1 || eax == 2)
                        return sub_480d90(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$", &data_1b8a720), 
                            arg3, data_1b8a720, data_1b8a734, 3, data_1b8a748, data_1b8a75c, 
                            (data_1b8a770).w, 0, 0, data_1b8a784)
                    
                    if (eax == 3)
                        int32_t eax_46 = sub_478b80(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), 
                            arg3, data_1b8a720, data_1b8a734, 0xd, 0)
                        data_715e98 = eax_46
                        return eax_46
                    
                    if (eax == 4)
                        ecx_11 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                        eax_5 = data_1b8a734
                        int32_t var_1c_43 = 0
                        return sub_48cfe0(eax_5, 0xd, ecx_11, 0, data_1b8a720, arg3, eax_5, eax_5)
                    
                    if (eax == 5)
                        ecx_14 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                        eax_6 = data_1b8a734
                        edx_23 = 0xd
                        int32_t var_1c_44 = 1
                        var_20_3 = eax_6
                        var_24_3 = eax_6
                        goto label_523b2f
                    
                    if (eax == 6)
                        return sub_4791e0(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720), 
                            arg3, data_1b8a720, data_1b8a734, 0xd, 0, data_1b8a748)
                else if (eax != 0x53)
                    if (eax == 0x54 || eax == 0x55)
                        eax = arg5
                        
                        if (eax != 1 && eax != 2)
                            if (eax == 3)
                                eax_27 =
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                                int32_t var_1c_40 = 0
                                var_20_9 = 0xd
                                goto label_523e28
                            
                            if (eax == 4)
                                eax_5, ecx_11 =
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                                int32_t var_1c_41 = 0
                                return sub_48cfe0(eax_5, 0xd, ecx_11, 0, data_1b8a720, arg3, 
                                    0xffffffff, 0xffffffff)
                            
                            if (eax == 5)
                                eax_6, ecx_14 =
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                                int32_t var_1c_42 = 1
                                var_20_3 = 0xffffffff
                                var_24_3 = 0xffffffff
                                edx_23 = 0xd
                                goto label_523b2f
                            
                            if (eax == 6)
                                int32_t var_20_15 = 0
                                return sub_4792d0(
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", 
                                        &data_1b8a720), 
                                    arg3, data_1b8a720, 0xd, 0, data_1b8a734)
                    else if (eax != 0x56)
                        if (eax == 0x57 || eax == 0x58)
                            eax = arg5
                            
                            if (eax == 1 || eax == 2)
                                return sub_480ec0(
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                        &data_1b8a720), 
                                    arg3, data_1b8a720, data_1b8a734, 3, data_1b8a748)
                        else if (eax != 0x59)
                            if (eax == 0x5a || eax == 0x5b)
                                eax = arg5
                                
                                if (eax == 1 || eax == 2)
                                    return sub_480e20(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$", 
                                            &data_1b8a720), 
                                        arg3, data_1b8a720, data_1b8a734, data_1b8a748, 3, 
                                        data_1b8a75c, data_1b8a770, (data_1b8a784).w, 0, 0, 
                                        data_1b8a798)
                                
                                if (eax == 3)
                                    eax_3 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                        &data_1b8a720)
                                    int32_t var_1c_36 = 0
                                    var_20_1 = 0xd
                                    goto label_523829
                                
                                if (eax == 4)
                                    eax_5, ecx_11 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$$", &data_1b8a720)
                                    int32_t var_1c_37 = 0
                                    return sub_48cfe0(eax_5, 0xd, ecx_11, 0, data_1b8a720, arg3, 
                                        data_1b8a734, data_1b8a748)
                                
                                if (eax == 5)
                                    eax_6, ecx_14 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$$", &data_1b8a720)
                                    int32_t var_1c_38 = 1
                                    var_20_3 = data_1b8a748
                                    edx_23 = 0xd
                                    var_24_3 = data_1b8a734
                                    goto label_523b2f
                                
                                if (eax == 6)
                                    int32_t var_20_14 = 0
                                    return sub_479250(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$", 
                                            &data_1b8a720), 
                                        arg3, data_1b8a720, data_1b8a734, data_1b8a748, 0xd, 0, 
                                        data_1b8a75c)
                            else if (eax != 0x5c && (eax == 0x5d || eax == 0x5e))
                                eax = arg5
                                
                                if (eax == 1 || eax == 2)
                                    return sub_480f40(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$", 
                                            &data_1b8a720), 
                                        arg3, data_1b8a720, data_1b8a734, data_1b8a748, 3, 
                                        data_1b8a75c)
        case 4
            eax = data_1b8b070
            
            if (eax != 0x50)
                if (eax == 0x51 || eax == 0x52)
                    eax = arg5
                    
                    if (eax == 1 || eax == 2)
                        return sub_480fd0(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$", &data_1b8a720), 
                            arg3, data_1b8a720, data_1b8a734, 0, data_1b8a748, data_1b8a75c, 0, 0, 
                            data_1b8a770, data_1b8a784, data_1b8a798)
                    
                    if (eax != 3)
                        goto label_524b6b
                    
                    goto label_524b59
                
                if (eax != 0x53)
                    if (eax == 0x54 || eax == 0x55)
                        eax = arg5
                        
                        if (eax != 1 && eax != 2)
                            if (eax == 3)
                                eax_27 =
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                                int32_t var_1c_53 = 0
                                var_20_9 = 0xe
                                goto label_523e28
                            
                            if (eax == 4)
                                eax_5, ecx_11 =
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                                int32_t var_1c_54 = 0
                                return sub_48cfe0(eax_5, 0xe, ecx_11, 0, data_1b8a720, arg3, 
                                    0xffffffff, 0xffffffff)
                            
                            if (eax == 5)
                                eax_6, ecx_14 =
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                                int32_t var_1c_55 = 1
                                var_20_3 = 0xffffffff
                                var_24_3 = 0xffffffff
                                edx_23 = 0xe
                                goto label_523b2f
                            
                            if (eax == 6)
                                int32_t var_20_19 = 0
                                return sub_4792d0(
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", 
                                        &data_1b8a720), 
                                    arg3, data_1b8a720, 0xe, 0, data_1b8a734)
                    else if (eax != 0x56)
                        if (eax == 0x57 || eax == 0x58)
                            eax = arg5
                            
                            if (eax == 1 || eax == 2)
                                return sub_481100(
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                        &data_1b8a720), 
                                    arg3, data_1b8a720, data_1b8a734, 0, data_1b8a748)
                        else if (eax != 0x59)
                            if (eax == 0x5a || eax == 0x5b)
                                eax = arg5
                                
                                if (eax != 1 && eax != 2)
                                    if (eax != 3)
                                        goto label_52491e
                                    
                                    goto label_524910
                                
                                eax_53 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$", 
                                    &data_1b8a720)
                                var_1c_51 = data_1b8a7ac
                                var_20_18 = data_1b8a798
                                var_24_18 = data_1b8a784
                                var_28_14 = 0
                                var_2c_8 = 0
                                goto label_5249de
                            
                            if (eax != 0x5c && (eax == 0x5d || eax == 0x5e))
                                eax = arg5
                                
                                if (eax == 1 || eax == 2)
                                    return sub_481180(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$", 
                                            &data_1b8a720), 
                                        arg3, data_1b8a720, data_1b8a734, data_1b8a748, 0, 
                                        data_1b8a75c)
        case 5
            eax = data_1b8b070
            
            if (eax != 0x50)
                if (eax == 0x51 || eax == 0x52)
                    eax = arg5
                    
                    if (eax == 1 || eax == 2)
                        return sub_480fd0(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$", &data_1b8a720), 
                            arg3, data_1b8a720, data_1b8a734, 1, data_1b8a748, data_1b8a75c, 0, 0, 
                            data_1b8a770, 0, data_1b8a784)
                    
                    if (eax != 3)
                        goto label_524f7b
                    
                    goto label_524f69
                
                if (eax != 0x53)
                    if (eax == 0x54 || eax == 0x55)
                        eax = arg5
                        
                        if (eax != 1 && eax != 2)
                            if (eax == 3)
                                eax_27 =
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                                int32_t var_1c_64 = 0
                                var_20_9 = 0xf
                                goto label_523e28
                            
                            if (eax == 4)
                                eax_5, ecx_11 =
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                                int32_t var_1c_65 = 0
                                return sub_48cfe0(eax_5, 0xf, ecx_11, 0, data_1b8a720, arg3, 
                                    0xffffffff, 0xffffffff)
                            
                            if (eax == 5)
                                eax_6, ecx_14 =
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                                int32_t var_1c_66 = 1
                                var_20_3 = 0xffffffff
                                var_24_3 = 0xffffffff
                                edx_23 = 0xf
                                goto label_523b2f
                            
                            if (eax == 6)
                                int32_t var_20_22 = 0
                                return sub_4792d0(
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", 
                                        &data_1b8a720), 
                                    arg3, data_1b8a720, 0xf, 0, data_1b8a734)
                    else if (eax != 0x56)
                        if (eax == 0x57 || eax == 0x58)
                            eax = arg5
                            
                            if (eax == 1 || eax == 2)
                                return sub_481100(
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                        &data_1b8a720), 
                                    arg3, data_1b8a720, data_1b8a734, 1, data_1b8a748)
                        else if (eax != 0x59)
                            if (eax == 0x5a || eax == 0x5b)
                                eax = arg5
                                
                                if (eax != 1 && eax != 2)
                                    if (eax != 3)
                                        goto label_524d4f
                                    
                                    goto label_524d41
                                
                                return sub_481060(
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$", 
                                        &data_1b8a720), 
                                    arg3, data_1b8a720, data_1b8a734, data_1b8a748, 1, 
                                    data_1b8a75c, data_1b8a770, 0, 0, data_1b8a784, 0, data_1b8a798)
                            
                            if (eax != 0x5c && (eax == 0x5d || eax == 0x5e))
                                eax = arg5
                                
                                if (eax == 1 || eax == 2)
                                    return sub_481180(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$", 
                                            &data_1b8a720), 
                                        arg3, data_1b8a720, data_1b8a734, data_1b8a748, 1, 
                                        data_1b8a75c)
        case 6, 7
            eax = data_1b8b070
            
            if (eax != 0x50)
                if (eax == 0x51 || eax == 0x52)
                    eax = arg5
                    
                    if (eax == 1 || eax == 2)
                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$", &data_1b8a720)
                        enum MESSAGEBOX_RESULT eax_85
                        int32_t ecx_306
                        
                        if (arg4 != 0x4c0)
                            eax_85 = data_1b8a784
                            ecx_306 = data_1b8a770
                        else
                            int32_t eax_83 = data_1b8a784
                            ecx_306 = data_1b8a770 * 0xa
                            data_1b8a770 = ecx_306
                            eax_85 = eax_83 * 0xa
                            data_1b8a784 = eax_85
                        
                        return sub_480fd0(eax_85, arg3, data_1b8a720, data_1b8a734, 2, 
                            data_1b8a748, data_1b8a75c, 0x3e8, 0x3e8, ecx_306, eax_85, data_1b8a798)
                    
                    if (eax == 3)
                        int32_t eax_79 = sub_478b80(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), 
                            arg3, data_1b8a720, data_1b8a734, 0x10, 0)
                        data_715e98 = eax_79
                        return eax_79
                    
                    if (eax == 4)
                        ecx_11 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                        eax_5 = data_1b8a734
                        int32_t var_1c_79 = 0
                        return sub_48cfe0(eax_5, 0x10, ecx_11, 0, data_1b8a720, arg3, eax_5, eax_5)
                    
                    if (eax == 5)
                        ecx_14 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                        eax_6 = data_1b8a734
                        edx_23 = 0x10
                        int32_t var_1c_80 = 1
                        var_20_3 = eax_6
                        var_24_3 = eax_6
                        goto label_523b2f
                    
                    if (eax == 6)
                        return sub_4791e0(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720), 
                            arg3, data_1b8a720, data_1b8a734, 0x10, 0, data_1b8a748)
                else if (eax != 0x53)
                    if (eax == 0x54 || eax == 0x55)
                        eax = arg5
                        
                        if (eax != 1 && eax != 2)
                            if (eax == 3)
                                eax_27 =
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                                int32_t var_1c_76 = 0
                                var_20_9 = 0x10
                                goto label_523e28
                            
                            if (eax == 4)
                                eax_5, ecx_11 =
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                                int32_t var_1c_77 = 0
                                return sub_48cfe0(eax_5, 0x10, ecx_11, 0, data_1b8a720, arg3, 
                                    0xffffffff, 0xffffffff)
                            
                            if (eax == 5)
                                eax_6, ecx_14 =
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                                int32_t var_1c_78 = 1
                                var_20_3 = 0xffffffff
                                var_24_3 = 0xffffffff
                                edx_23 = 0x10
                                goto label_523b2f
                            
                            if (eax == 6)
                                int32_t var_20_24 = 0
                                return sub_4792d0(
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", 
                                        &data_1b8a720), 
                                    arg3, data_1b8a720, 0x10, 0, data_1b8a734)
                    else if (eax != 0x56)
                        if (eax == 0x57 || eax == 0x58)
                            eax = arg5
                            
                            if (eax == 1 || eax == 2)
                                return sub_481100(
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                        &data_1b8a720), 
                                    arg3, data_1b8a720, data_1b8a734, 2, data_1b8a748)
                        else if (eax != 0x59)
                            if (eax == 0x5a || eax == 0x5b)
                                eax = arg5
                                
                                if (eax == 1 || eax == 2)
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$", 
                                        &data_1b8a720)
                                    enum MESSAGEBOX_RESULT eax_74
                                    int32_t ecx_276
                                    
                                    if (arg4 != 0x4c0)
                                        eax_74 = data_1b8a798
                                        ecx_276 = data_1b8a784
                                    else
                                        int32_t eax_72 = data_1b8a798
                                        ecx_276 = data_1b8a784 * 0xa
                                        data_1b8a784 = ecx_276
                                        eax_74 = eax_72 * 0xa
                                        data_1b8a798 = eax_74
                                    
                                    return sub_481060(eax_74, arg3, data_1b8a720, data_1b8a734, 
                                        data_1b8a748, 2, data_1b8a75c, data_1b8a770, 0x3e8, 0x3e8, 
                                        ecx_276, eax_74, data_1b8a7ac)
                                
                                if (eax == 3)
                                    eax_3 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                        &data_1b8a720)
                                    int32_t var_1c_71 = 0
                                    var_20_1 = 0x10
                                    goto label_523829
                                
                                if (eax == 4)
                                    eax_5, ecx_11 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$$", &data_1b8a720)
                                    int32_t var_1c_72 = 0
                                    return sub_48cfe0(eax_5, 0x10, ecx_11, 0, data_1b8a720, arg3, 
                                        data_1b8a734, data_1b8a748)
                                
                                if (eax == 5)
                                    eax_6, ecx_14 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$$", &data_1b8a720)
                                    int32_t var_1c_73 = 1
                                    var_20_3 = data_1b8a748
                                    edx_23 = 0x10
                                    var_24_3 = data_1b8a734
                                    goto label_523b2f
                                
                                if (eax == 6)
                                    int32_t var_20_23 = 0
                                    return sub_479250(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$", 
                                            &data_1b8a720), 
                                        arg3, data_1b8a720, data_1b8a734, data_1b8a748, 0x10, 0, 
                                        data_1b8a75c)
                            else if (eax != 0x5c && (eax == 0x5d || eax == 0x5e))
                                eax = arg5
                                
                                if (eax == 1 || eax == 2)
                                    return sub_481180(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$", 
                                            &data_1b8a720), 
                                        arg3, data_1b8a720, data_1b8a734, data_1b8a748, 2, 
                                        data_1b8a75c)
        case 8
            eax = data_1b8b070
            
            if (eax == 0x51 || eax == 0x52)
                eax = arg5
                
                if (eax == 1 || eax == 2)
                    return sub_480fd0(
                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$", &data_1b8a720), 
                        arg3, data_1b8a720, data_1b8a734, 0, data_1b8a748, data_1b8a75c, 
                        data_1b8a770, data_1b8a784, data_1b8a798, data_1b8a7ac, data_1b8a7c0)
                
                if (eax == 3)
                label_524b59:
                    int32_t eax_58 = sub_478b80(
                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), arg3, 
                        data_1b8a720, data_1b8a734, 0xe, 0)
                    data_715e98 = eax_58
                    return eax_58
                
            label_524b6b:
                
                if (eax == 4)
                    ecx_11 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                    eax_5 = data_1b8a734
                    int32_t var_1c_56 = 0
                    return sub_48cfe0(eax_5, 0xe, ecx_11, 0, data_1b8a720, arg3, eax_5, eax_5)
                
                if (eax == 5)
                    ecx_14 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                    eax_6 = data_1b8a734
                    edx_23 = 0xe
                    int32_t var_1c_57 = 1
                    var_20_3 = eax_6
                    var_24_3 = eax_6
                    goto label_523b2f
                
                if (eax == 6)
                    return sub_4791e0(
                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720), arg3, 
                        data_1b8a720, data_1b8a734, 0xe, 0, data_1b8a748)
            else if (eax == 0x5a || eax == 0x5b)
                eax = arg5
                
                if (eax == 1 || eax == 2)
                    eax_53 =
                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$$", &data_1b8a720)
                    var_1c_51 = data_1b8a7d4
                    var_20_18 = data_1b8a7c0
                    var_24_18 = data_1b8a7ac
                    var_28_14 = data_1b8a798
                    var_2c_8 = data_1b8a784
                label_5249de:
                    return sub_481060(eax_53, arg3, data_1b8a720, data_1b8a734, data_1b8a748, 0, 
                        data_1b8a75c, data_1b8a770, var_2c_8, var_28_14, var_24_18, var_20_18, 
                        var_1c_51)
                
                if (eax == 3)
                label_524910:
                    eax_3 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
                    int32_t var_1c_48 = 0
                    var_20_1 = 0xe
                label_523829:
                    enum MESSAGEBOX_RESULT eax_4 = sub_478c00(eax_3, arg3, data_1b8a720, 
                        data_1b8a734, data_1b8a748, var_20_1, 0)
                    data_715e98 = eax_4
                    return eax_4
                
            label_52491e:
                
                if (eax == 4)
                    eax_5, ecx_11 =
                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
                    int32_t var_1c_49 = 0
                    return sub_48cfe0(eax_5, 0xe, ecx_11, 0, data_1b8a720, arg3, data_1b8a734, 
                        data_1b8a748)
                
                if (eax == 5)
                    eax_6, ecx_14 =
                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
                    int32_t var_1c_50 = 1
                    var_20_3 = data_1b8a748
                    edx_23 = 0xe
                    var_24_3 = data_1b8a734
                    goto label_523b2f
                
                if (eax == 6)
                    int32_t var_20_17 = 0
                    return sub_479250(
                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$", &data_1b8a720), arg3, 
                        data_1b8a720, data_1b8a734, data_1b8a748, 0xe, 0, data_1b8a75c)
        case 9
            eax = data_1b8b070
            
            if (eax == 0x51 || eax == 0x52)
                eax = arg5
                
                if (eax == 1 || eax == 2)
                    return sub_480fd0(
                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$", &data_1b8a720), 
                        arg3, data_1b8a720, data_1b8a734, 1, data_1b8a748, data_1b8a75c, 
                        data_1b8a770, 0, data_1b8a784, 0, data_1b8a798)
                
                if (eax == 3)
                label_524f69:
                    int32_t eax_66 = sub_478b80(
                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), arg3, 
                        data_1b8a720, data_1b8a734, 0xf, 0)
                    data_715e98 = eax_66
                    return eax_66
                
            label_524f7b:
                
                if (eax == 4)
                    ecx_11 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                    eax_5 = data_1b8a734
                    int32_t var_1c_67 = 0
                    return sub_48cfe0(eax_5, 0xf, ecx_11, 0, data_1b8a720, arg3, eax_5, eax_5)
                
                if (eax == 5)
                    ecx_14 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                    eax_6 = data_1b8a734
                    edx_23 = 0xf
                    int32_t var_1c_68 = 1
                    var_20_3 = eax_6
                    var_24_3 = eax_6
                    goto label_523b2f
                
                if (eax == 6)
                    return sub_4791e0(
                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720), arg3, 
                        data_1b8a720, data_1b8a734, 0xf, 0, data_1b8a748)
            else if (eax == 0x5a || eax == 0x5b)
                eax = arg5
                
                if (eax == 1 || eax == 2)
                    return sub_481060(
                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$", &data_1b8a720), 
                        arg3, data_1b8a720, data_1b8a734, data_1b8a748, 1, data_1b8a75c, 
                        data_1b8a770, data_1b8a784, 0, data_1b8a798, 0, data_1b8a7ac)
                
                if (eax == 3)
                label_524d41:
                    eax_3 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
                    int32_t var_1c_60 = 0
                    var_20_1 = 0xf
                    goto label_523829
                
            label_524d4f:
                
                if (eax == 4)
                    eax_5, ecx_11 =
                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
                    int32_t var_1c_61 = 0
                    return sub_48cfe0(eax_5, 0xf, ecx_11, 0, data_1b8a720, arg3, data_1b8a734, 
                        data_1b8a748)
                
                if (eax == 5)
                    eax_6, ecx_14 =
                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
                    int32_t var_1c_62 = 1
                    var_20_3 = data_1b8a748
                    edx_23 = 0xf
                    var_24_3 = data_1b8a734
                    goto label_523b2f
                
                if (eax == 6)
                    int32_t var_20_21 = 0
                    return sub_479250(
                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$", &data_1b8a720), arg3, 
                        data_1b8a720, data_1b8a734, data_1b8a748, 0xf, 0, data_1b8a75c)
return eax
