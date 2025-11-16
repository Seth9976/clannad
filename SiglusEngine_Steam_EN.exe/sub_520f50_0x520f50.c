// 函数: sub_520f50
// 地址: 0x520f50
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
int32_t eax = arg4 - 0x4b0
char** var_24_3
int32_t var_20_1
char** var_20_3
int32_t var_20_10
char** eax_3
char** eax_5
char** eax_6
char** eax_31
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
                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$", &data_1b8a720)
                        int32_t eax_25 = neg.d(data_1b8a770)
                        int32_t ecx_55 = data_1b8a720
                        char var_20_7 = (data_1b8a798).b
                        data_1b8a770 = eax_25
                        return sub_4808e0(eax_25, arg3, ecx_55, data_1b8a734, 0, data_1b8a748, 
                            data_1b8a75c, 0, eax_25.w, data_1b8a784, var_20_7, 2)
                    
                    if (eax == 3)
                        int32_t eax_19 = sub_478b80(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), 
                            arg3, data_1b8a720, data_1b8a734, 1, 0)
                        data_715e98 = eax_19
                        return eax_19
                    
                    if (eax == 4)
                        ecx_11 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                        eax_5 = data_1b8a734
                        int32_t var_1c_10 = 0
                        return sub_48cfe0(eax_5, 1, ecx_11, 0, data_1b8a720, arg3, eax_5, eax_5)
                    
                    if (eax == 5)
                        ecx_14 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                        eax_6 = data_1b8a734
                        int32_t var_1c_11 = 1
                        var_20_3 = eax_6
                        var_24_3 = eax_6
                    label_521390:
                        edx_23 = 1
                        goto label_5213a0
                    
                    if (eax == 6)
                        return sub_4791e0(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720), 
                            arg3, data_1b8a720, data_1b8a734, 1, 0, data_1b8a748)
                else if (eax != 0x53)
                    if (eax == 0x54 || eax == 0x55)
                        eax = arg5
                        
                        if (eax != 1 && eax != 2)
                            if (eax == 3)
                                enum MESSAGEBOX_RESULT eax_15 = sub_478ca0(
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", 
                                    &data_1b8a720), arg3, data_1b8a720, 1, 0)
                                data_715e98 = eax_15
                                return eax_15
                            
                            if (eax == 4)
                                eax_5, ecx_11 =
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                                int32_t var_1c_7 = 0
                                return sub_48cfe0(eax_5, 1, ecx_11, 0, data_1b8a720, arg3, 
                                    0xffffffff, 0xffffffff)
                            
                            if (eax == 5)
                                eax_6, ecx_14 =
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                                int32_t var_1c_8 = 1
                                var_20_3 = 0xffffffff
                                var_24_3 = 0xffffffff
                                goto label_521390
                            
                            if (eax == 6)
                                int32_t var_20_6 = 0
                                return sub_4792d0(
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", 
                                        &data_1b8a720), 
                                    arg3, data_1b8a720, 1, 0, data_1b8a734)
                    else if (eax != 0x56)
                        if (eax == 0x57 || eax == 0x58)
                            eax = arg5
                            
                            if (eax == 1 || eax == 2)
                                return sub_480a20(
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$", 
                                        &data_1b8a720), 
                                    arg3, data_1b8a720, data_1b8a734, 0, data_1b8a748, data_1b8a75c)
                        else if (eax != 0x59)
                            if (eax == 0x5a || eax == 0x5b)
                                eax = arg5
                                
                                if (eax == 1 || eax == 2)
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$", 
                                        &data_1b8a720)
                                    char var_20_4 = (data_1b8a7ac).b
                                    char** eax_10 = neg.d(data_1b8a784)
                                    int32_t var_24_4 = data_1b8a798
                                    data_1b8a784 = eax_10
                                    return sub_480980(eax_10, arg3, data_1b8a720, data_1b8a734, 
                                        data_1b8a748, 0, data_1b8a75c, data_1b8a770, 0, eax_10.w, 
                                        var_24_4, var_20_4, 2)
                                
                                if (eax == 3)
                                    eax_3 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                        &data_1b8a720)
                                    int32_t var_1c_1 = 0
                                    var_20_1 = 1
                                label_52108f:
                                    enum MESSAGEBOX_RESULT eax_4 = sub_478c00(eax_3, arg3, 
                                        data_1b8a720, data_1b8a734, data_1b8a748, var_20_1, 0)
                                    data_715e98 = eax_4
                                    return eax_4
                                
                                if (eax == 4)
                                    eax_5, ecx_11 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$$", &data_1b8a720)
                                    int32_t var_1c_2 = 0
                                    return sub_48cfe0(eax_5, 1, ecx_11, 0, data_1b8a720, arg3, 
                                        data_1b8a734, data_1b8a748)
                                
                                if (eax == 5)
                                    eax_6, ecx_14 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$$", &data_1b8a720)
                                    int32_t var_1c_3 = 1
                                    var_20_3 = data_1b8a748
                                    var_24_3 = data_1b8a734
                                    goto label_521390
                                
                                if (eax == 6)
                                    return sub_479250(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$", 
                                            &data_1b8a720), 
                                        arg3, data_1b8a720, data_1b8a734, data_1b8a748, 1, 0, 
                                        data_1b8a75c)
                            else if (eax != 0x5c && (eax == 0x5d || eax == 0x5e))
                                eax = arg5
                                
                                if (eax == 1 || eax == 2)
                                    return sub_480ab0(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$", 
                                            &data_1b8a720), 
                                        arg3, data_1b8a720, data_1b8a734, data_1b8a748, 0, 
                                        data_1b8a75c, data_1b8a770)
        case 1
            eax = data_1b8b070
            
            if (eax != 0x50)
                if (eax == 0x51 || eax == 0x52)
                    eax = arg5
                    
                    if (eax == 1 || eax == 2)
                        return sub_4808e0(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$", 
                                &data_1b8a720), 
                            arg3, data_1b8a720, data_1b8a734, 1, data_1b8a748, data_1b8a75c, 
                            (data_1b8a770).w, (data_1b8a784).w, data_1b8a798, (data_1b8a7ac).b, 
                            (data_1b8a7c0).b)
                    
                    if (eax == 3)
                        int32_t eax_34 = sub_478b80(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), 
                            arg3, data_1b8a720, data_1b8a734, 2, 0)
                        data_715e98 = eax_34
                        return eax_34
                    
                    if (eax == 4)
                        ecx_11 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                        eax_5 = data_1b8a734
                        int32_t var_1c_21 = 0
                        return sub_48cfe0(eax_5, 2, ecx_11, 0, data_1b8a720, arg3, eax_5, eax_5)
                    
                    if (eax == 5)
                        ecx_14 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                        eax_6 = data_1b8a734
                        edx_23 = 2
                        int32_t var_1c_22 = 1
                        var_20_3 = eax_6
                        var_24_3 = eax_6
                    label_5213a0:
                        int32_t eax_21 = sub_48cfe0(eax_6, edx_23, ecx_14, 0, data_1b8a720, arg3, 
                            var_24_3, var_20_3)
                        sub_445260()
                        return eax_21
                    
                    if (eax == 6)
                        return sub_4791e0(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720), 
                            arg3, data_1b8a720, data_1b8a734, 2, 0, data_1b8a748)
                else if (eax != 0x53)
                    if (eax == 0x54 || eax == 0x55)
                        eax = arg5
                        
                        if (eax != 1 && eax != 2)
                            if (eax == 3)
                                eax_31 =
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                                int32_t var_1c_18 = 0
                                var_20_10 = 2
                            label_5216cd:
                                enum MESSAGEBOX_RESULT eax_32 =
                                    sub_478ca0(eax_31, arg3, data_1b8a720, var_20_10, 0)
                                data_715e98 = eax_32
                                return eax_32
                            
                            if (eax == 4)
                                eax_5, ecx_11 =
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                                int32_t var_1c_19 = 0
                                return sub_48cfe0(eax_5, 2, ecx_11, 0, data_1b8a720, arg3, 
                                    0xffffffff, 0xffffffff)
                            
                            if (eax == 5)
                                eax_6, ecx_14 =
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                                int32_t var_1c_20 = 1
                                var_20_3 = 0xffffffff
                                var_24_3 = 0xffffffff
                                edx_23 = 2
                                goto label_5213a0
                            
                            if (eax == 6)
                                int32_t var_20_11 = 0
                                return sub_4792d0(
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", 
                                        &data_1b8a720), 
                                    arg3, data_1b8a720, 2, 0, data_1b8a734)
                    else if (eax != 0x56)
                        if (eax == 0x57 || eax == 0x58)
                            eax = arg5
                            
                            if (eax == 1 || eax == 2)
                                return sub_480a20(
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$", 
                                        &data_1b8a720), 
                                    arg3, data_1b8a720, data_1b8a734, 1, data_1b8a748, data_1b8a75c)
                        else if (eax != 0x59)
                            if (eax == 0x5a || eax == 0x5b)
                                eax = arg5
                                
                                if (eax == 1 || eax == 2)
                                    return sub_480980(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$$", 
                                            &data_1b8a720), 
                                        arg3, data_1b8a720, data_1b8a734, data_1b8a748, 1, 
                                        data_1b8a75c, data_1b8a770, (data_1b8a784).w, 
                                        (data_1b8a798).w, data_1b8a7ac, (data_1b8a7c0).b, 
                                        (data_1b8a7d4).b)
                                
                                if (eax == 3)
                                    eax_3 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                        &data_1b8a720)
                                    int32_t var_1c_13 = 0
                                    var_20_1 = 2
                                    goto label_52108f
                                
                                if (eax == 4)
                                    eax_5, ecx_11 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$$", &data_1b8a720)
                                    int32_t var_1c_14 = 0
                                    return sub_48cfe0(eax_5, 2, ecx_11, 0, data_1b8a720, arg3, 
                                        data_1b8a734, data_1b8a748)
                                
                                if (eax == 5)
                                    eax_6, ecx_14 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$$", &data_1b8a720)
                                    int32_t var_1c_15 = 1
                                    var_20_3 = data_1b8a748
                                    edx_23 = 2
                                    var_24_3 = data_1b8a734
                                    goto label_5213a0
                                
                                if (eax == 6)
                                    int32_t var_20_8 = 0
                                    return sub_479250(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$", 
                                            &data_1b8a720), 
                                        arg3, data_1b8a720, data_1b8a734, data_1b8a748, 2, 0, 
                                        data_1b8a75c)
                            else if (eax != 0x5c && (eax == 0x5d || eax == 0x5e))
                                eax = arg5
                                
                                if (eax == 1 || eax == 2)
                                    return sub_480ab0(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$", 
                                            &data_1b8a720), 
                                        arg3, data_1b8a720, data_1b8a734, data_1b8a748, 1, 
                                        data_1b8a75c, data_1b8a770)
        case 2
            eax = data_1b8b070
            
            if (eax != 0x50)
                if (eax == 0x51 || eax == 0x52)
                    eax = arg5
                    
                    if (eax == 1 || eax == 2)
                        return sub_4808e0(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$", 
                                &data_1b8a720), 
                            arg3, data_1b8a720, data_1b8a734, 2, data_1b8a748, data_1b8a75c, 
                            (data_1b8a770).w, (data_1b8a784).w, data_1b8a798, (data_1b8a7ac).b, 
                            (data_1b8a7c0).b)
                    
                    if (eax == 3)
                        int32_t eax_42 = sub_478b80(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), 
                            arg3, data_1b8a720, data_1b8a734, 3, 0)
                        data_715e98 = eax_42
                        return eax_42
                    
                    if (eax == 4)
                        ecx_11 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                        eax_5 = data_1b8a734
                        int32_t var_1c_32 = 0
                        return sub_48cfe0(eax_5, 3, ecx_11, 0, data_1b8a720, arg3, eax_5, eax_5)
                    
                    if (eax == 5)
                        ecx_14 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                        eax_6 = data_1b8a734
                        edx_23 = 3
                        int32_t var_1c_33 = 1
                        var_20_3 = eax_6
                        var_24_3 = eax_6
                        goto label_5213a0
                    
                    if (eax == 6)
                        return sub_4791e0(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720), 
                            arg3, data_1b8a720, data_1b8a734, 3, 0, data_1b8a748)
                else if (eax != 0x53)
                    if (eax == 0x54 || eax == 0x55)
                        eax = arg5
                        
                        if (eax != 1 && eax != 2)
                            if (eax == 3)
                                eax_31 =
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                                int32_t var_1c_29 = 0
                                var_20_10 = 3
                                goto label_5216cd
                            
                            if (eax == 4)
                                eax_5, ecx_11 =
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                                int32_t var_1c_30 = 0
                                return sub_48cfe0(eax_5, 3, ecx_11, 0, data_1b8a720, arg3, 
                                    0xffffffff, 0xffffffff)
                            
                            if (eax == 5)
                                eax_6, ecx_14 =
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                                int32_t var_1c_31 = 1
                                var_20_3 = 0xffffffff
                                var_24_3 = 0xffffffff
                                edx_23 = 3
                                goto label_5213a0
                            
                            if (eax == 6)
                                int32_t var_20_15 = 0
                                return sub_4792d0(
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", 
                                        &data_1b8a720), 
                                    arg3, data_1b8a720, 3, 0, data_1b8a734)
                    else if (eax != 0x56)
                        if (eax == 0x57 || eax == 0x58)
                            eax = arg5
                            
                            if (eax == 1 || eax == 2)
                                return sub_480a20(
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$", 
                                        &data_1b8a720), 
                                    arg3, data_1b8a720, data_1b8a734, 2, data_1b8a748, data_1b8a75c)
                        else if (eax != 0x59)
                            if (eax == 0x5a || eax == 0x5b)
                                eax = arg5
                                
                                if (eax == 1 || eax == 2)
                                    return sub_480980(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$$", 
                                            &data_1b8a720), 
                                        arg3, data_1b8a720, data_1b8a734, data_1b8a748, 2, 
                                        data_1b8a75c, data_1b8a770, (data_1b8a784).w, 
                                        (data_1b8a798).w, data_1b8a7ac, (data_1b8a7c0).b, 
                                        (data_1b8a7d4).b)
                                
                                if (eax == 3)
                                    eax_3 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                        &data_1b8a720)
                                    int32_t var_1c_25 = 0
                                    var_20_1 = 3
                                    goto label_52108f
                                
                                if (eax == 4)
                                    eax_5, ecx_11 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$$", &data_1b8a720)
                                    int32_t var_1c_26 = 0
                                    return sub_48cfe0(eax_5, 3, ecx_11, 0, data_1b8a720, arg3, 
                                        data_1b8a734, data_1b8a748)
                                
                                if (eax == 5)
                                    eax_6, ecx_14 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$$", &data_1b8a720)
                                    int32_t var_1c_27 = 1
                                    var_20_3 = data_1b8a748
                                    edx_23 = 3
                                    var_24_3 = data_1b8a734
                                    goto label_5213a0
                                
                                if (eax == 6)
                                    int32_t var_20_13 = 0
                                    return sub_479250(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$", 
                                            &data_1b8a720), 
                                        arg3, data_1b8a720, data_1b8a734, data_1b8a748, 3, 0, 
                                        data_1b8a75c)
                            else if (eax != 0x5c && (eax == 0x5d || eax == 0x5e))
                                eax = arg5
                                
                                if (eax == 1 || eax == 2)
                                    return sub_480ab0(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$", 
                                            &data_1b8a720), 
                                        arg3, data_1b8a720, data_1b8a734, data_1b8a748, 2, 
                                        data_1b8a75c, data_1b8a770)
        case 3, 4
            eax = data_1b8b070
            
            if (eax != 0x50)
                if (eax == 0x51 || eax == 0x52)
                    eax = arg5
                    
                    if (eax == 1 || eax == 2)
                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$", &data_1b8a720)
                        enum MESSAGEBOX_RESULT eax_61
                        int32_t ecx_184
                        
                        if (arg4 != 0x4b3)
                            eax_61 = data_1b8a784
                            ecx_184 = data_1b8a770
                        else
                            int32_t eax_59 = data_1b8a784
                            ecx_184 = data_1b8a770 * 0xa
                            data_1b8a770 = ecx_184
                            eax_61 = eax_59 * 0xa
                            data_1b8a784 = eax_61
                        
                        return sub_4808e0(eax_61, arg3, data_1b8a720, data_1b8a734, 3, 
                            data_1b8a748, data_1b8a75c, ecx_184.w, eax_61.w, data_1b8a798, 
                            (data_1b8a7ac).b, (data_1b8a7c0).b)
                    
                    if (eax == 3)
                        int32_t eax_55 = sub_478b80(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), 
                            arg3, data_1b8a720, data_1b8a734, 4, 0)
                        data_715e98 = eax_55
                        return eax_55
                    
                    if (eax == 4)
                        ecx_11 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                        eax_5 = data_1b8a734
                        int32_t var_1c_44 = 0
                        return sub_48cfe0(eax_5, 4, ecx_11, 0, data_1b8a720, arg3, eax_5, eax_5)
                    
                    if (eax == 5)
                        ecx_14 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                        eax_6 = data_1b8a734
                        edx_23 = 4
                        int32_t var_1c_45 = 1
                        var_20_3 = eax_6
                        var_24_3 = eax_6
                        goto label_5213a0
                    
                    if (eax == 6)
                        return sub_4791e0(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720), 
                            arg3, data_1b8a720, data_1b8a734, 4, 0, data_1b8a748)
                else if (eax != 0x53)
                    if (eax == 0x54 || eax == 0x55)
                        eax = arg5
                        
                        if (eax != 1 && eax != 2)
                            if (eax == 3)
                                eax_31 =
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                                int32_t var_1c_41 = 0
                                var_20_10 = 4
                                goto label_5216cd
                            
                            if (eax == 4)
                                eax_5, ecx_11 =
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                                int32_t var_1c_42 = 0
                                return sub_48cfe0(eax_5, 4, ecx_11, 0, data_1b8a720, arg3, 
                                    0xffffffff, 0xffffffff)
                            
                            if (eax == 5)
                                eax_6, ecx_14 =
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                                int32_t var_1c_43 = 1
                                var_20_3 = 0xffffffff
                                var_24_3 = 0xffffffff
                                edx_23 = 4
                                goto label_5213a0
                            
                            if (eax == 6)
                                int32_t var_20_20 = 0
                                return sub_4792d0(
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", 
                                        &data_1b8a720), 
                                    arg3, data_1b8a720, 4, 0, data_1b8a734)
                    else if (eax != 0x56)
                        if (eax == 0x57 || eax == 0x58)
                            eax = arg5
                            
                            if (eax == 1 || eax == 2)
                                return sub_480a20(
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$", 
                                        &data_1b8a720), 
                                    arg3, data_1b8a720, data_1b8a734, 3, data_1b8a748, data_1b8a75c)
                        else if (eax != 0x59)
                            if (eax == 0x5a || eax == 0x5b)
                                eax = arg5
                                
                                if (eax == 1 || eax == 2)
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$$", 
                                        &data_1b8a720)
                                    enum MESSAGEBOX_RESULT eax_50
                                    int32_t ecx_154
                                    
                                    if (arg4 != 0x4b3)
                                        eax_50 = data_1b8a798
                                        ecx_154 = data_1b8a784
                                    else
                                        int32_t eax_48 = data_1b8a798
                                        ecx_154 = data_1b8a784 * 0xa
                                        data_1b8a784 = ecx_154
                                        eax_50 = eax_48 * 0xa
                                        data_1b8a798 = eax_50
                                    
                                    return sub_480980(eax_50, arg3, data_1b8a720, data_1b8a734, 
                                        data_1b8a748, 3, data_1b8a75c, data_1b8a770, ecx_154.w, 
                                        eax_50.w, data_1b8a7ac, (data_1b8a7c0).b, (data_1b8a7d4).b)
                                
                                if (eax == 3)
                                    eax_3 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                        &data_1b8a720)
                                    int32_t var_1c_36 = 0
                                    var_20_1 = 4
                                    goto label_52108f
                                
                                if (eax == 4)
                                    eax_5, ecx_11 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$$", &data_1b8a720)
                                    int32_t var_1c_37 = 0
                                    return sub_48cfe0(eax_5, 4, ecx_11, 0, data_1b8a720, arg3, 
                                        data_1b8a734, data_1b8a748)
                                
                                if (eax == 5)
                                    eax_6, ecx_14 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$$", &data_1b8a720)
                                    int32_t var_1c_38 = 1
                                    var_20_3 = data_1b8a748
                                    edx_23 = 4
                                    var_24_3 = data_1b8a734
                                    goto label_5213a0
                                
                                if (eax == 6)
                                    int32_t var_20_17 = 0
                                    return sub_479250(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$", 
                                            &data_1b8a720), 
                                        arg3, data_1b8a720, data_1b8a734, data_1b8a748, 4, 0, 
                                        data_1b8a75c)
                            else if (eax != 0x5c && (eax == 0x5d || eax == 0x5e))
                                eax = arg5
                                
                                if (eax == 1 || eax == 2)
                                    return sub_480ab0(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$", 
                                            &data_1b8a720), 
                                        arg3, data_1b8a720, data_1b8a734, data_1b8a748, 3, 
                                        data_1b8a75c, data_1b8a770)
        case 5
            eax = data_1b8b070
            
            if (eax != 0x50)
                if (eax == 0x51 || eax == 0x52)
                    eax = arg5
                    
                    if (eax == 1 || eax == 2)
                        return sub_4808e0(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$", 
                                &data_1b8a720), 
                            arg3, data_1b8a720, data_1b8a734, 4, data_1b8a748, data_1b8a75c, 
                            (data_1b8a770).w, 0, data_1b8a784, (data_1b8a798).b, (data_1b8a7ac).b)
                    
                    if (eax == 3)
                        int32_t eax_66 = sub_478b80(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), 
                            arg3, data_1b8a720, data_1b8a734, 5, 0)
                        data_715e98 = eax_66
                        return eax_66
                    
                    if (eax == 4)
                        ecx_11 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                        eax_5 = data_1b8a734
                        int32_t var_1c_55 = 0
                        return sub_48cfe0(eax_5, 5, ecx_11, 0, data_1b8a720, arg3, eax_5, eax_5)
                    
                    if (eax == 5)
                        ecx_14 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                        eax_6 = data_1b8a734
                        edx_23 = 5
                        int32_t var_1c_56 = 1
                        var_20_3 = eax_6
                        var_24_3 = eax_6
                        goto label_5213a0
                    
                    if (eax == 6)
                        return sub_4791e0(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720), 
                            arg3, data_1b8a720, data_1b8a734, 5, 0, data_1b8a748)
                else if (eax != 0x53)
                    if (eax == 0x54 || eax == 0x55)
                        eax = arg5
                        
                        if (eax != 1 && eax != 2)
                            if (eax == 3)
                                eax_31 =
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                                int32_t var_1c_52 = 0
                                var_20_10 = 5
                                goto label_5216cd
                            
                            if (eax == 4)
                                eax_5, ecx_11 =
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                                int32_t var_1c_53 = 0
                                return sub_48cfe0(eax_5, 5, ecx_11, 0, data_1b8a720, arg3, 
                                    0xffffffff, 0xffffffff)
                            
                            if (eax == 5)
                                eax_6, ecx_14 =
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                                int32_t var_1c_54 = 1
                                var_20_3 = 0xffffffff
                                var_24_3 = 0xffffffff
                                edx_23 = 5
                                goto label_5213a0
                            
                            if (eax == 6)
                                int32_t var_20_24 = 0
                                return sub_4792d0(
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", 
                                        &data_1b8a720), 
                                    arg3, data_1b8a720, 5, 0, data_1b8a734)
                    else if (eax != 0x56)
                        if (eax == 0x57 || eax == 0x58)
                            eax = arg5
                            
                            if (eax == 1 || eax == 2)
                                return sub_480a20(
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$", 
                                        &data_1b8a720), 
                                    arg3, data_1b8a720, data_1b8a734, 4, data_1b8a748, data_1b8a75c)
                        else if (eax != 0x59)
                            if (eax == 0x5a || eax == 0x5b)
                                eax = arg5
                                
                                if (eax == 1 || eax == 2)
                                    return sub_480980(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$", 
                                            &data_1b8a720), 
                                        arg3, data_1b8a720, data_1b8a734, data_1b8a748, 4, 
                                        data_1b8a75c, data_1b8a770, (data_1b8a784).w, 0, 
                                        data_1b8a798, (data_1b8a7ac).b, (data_1b8a7c0).b)
                                
                                if (eax == 3)
                                    eax_3 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                        &data_1b8a720)
                                    int32_t var_1c_48 = 0
                                    var_20_1 = 5
                                    goto label_52108f
                                
                                if (eax == 4)
                                    eax_5, ecx_11 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$$", &data_1b8a720)
                                    int32_t var_1c_49 = 0
                                    return sub_48cfe0(eax_5, 5, ecx_11, 0, data_1b8a720, arg3, 
                                        data_1b8a734, data_1b8a748)
                                
                                if (eax == 5)
                                    eax_6, ecx_14 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$$", &data_1b8a720)
                                    int32_t var_1c_50 = 1
                                    var_20_3 = data_1b8a748
                                    edx_23 = 5
                                    var_24_3 = data_1b8a734
                                    goto label_5213a0
                                
                                if (eax == 6)
                                    int32_t var_20_22 = 0
                                    return sub_479250(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$", 
                                            &data_1b8a720), 
                                        arg3, data_1b8a720, data_1b8a734, data_1b8a748, 5, 0, 
                                        data_1b8a75c)
                            else if (eax != 0x5c && (eax == 0x5d || eax == 0x5e))
                                eax = arg5
                                
                                if (eax == 1 || eax == 2)
                                    return sub_480ab0(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$", 
                                            &data_1b8a720), 
                                        arg3, data_1b8a720, data_1b8a734, data_1b8a748, 4, 
                                        data_1b8a75c, data_1b8a770)
        case 6
            eax = data_1b8b070
            
            if (eax != 0x50)
                if (eax == 0x51 || eax == 0x52)
                    eax = arg5
                    
                    if (eax == 1 || eax == 2)
                        return sub_480b40(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$$", 
                                &data_1b8a720), 
                            arg3, data_1b8a720, data_1b8a734, 0, data_1b8a748, data_1b8a75c, 
                            (data_1b8a770).w, (data_1b8a784).w, (data_1b8a798).w, data_1b8a7ac, 
                            data_1b8a7c0, (data_1b8a7d4).b)
                    
                    if (eax == 3)
                        int32_t eax_78 = sub_478b80(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), 
                            arg3, data_1b8a720, data_1b8a734, 6, 0)
                        data_715e98 = eax_78
                        return eax_78
                    
                    if (eax == 4)
                        ecx_11 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                        eax_5 = data_1b8a734
                        int32_t var_1c_68 = 0
                        return sub_48cfe0(eax_5, 6, ecx_11, 0, data_1b8a720, arg3, eax_5, eax_5)
                    
                    if (eax == 5)
                        ecx_14 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                        eax_6 = data_1b8a734
                        edx_23 = 6
                        int32_t var_1c_69 = 1
                        var_20_3 = eax_6
                        var_24_3 = eax_6
                        goto label_5213a0
                    
                    if (eax == 6)
                        return sub_4791e0(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720), 
                            arg3, data_1b8a720, data_1b8a734, 6, 0, data_1b8a748)
                else if (eax != 0x53)
                    if (eax == 0x54 || eax == 0x55)
                        eax = arg5
                        
                        if (eax != 1 && eax != 2)
                            if (eax == 3)
                                eax_31 =
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                                int32_t var_1c_65 = 0
                                var_20_10 = 6
                                goto label_5216cd
                            
                            if (eax == 4)
                                eax_5, ecx_11 =
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                                int32_t var_1c_66 = 0
                                return sub_48cfe0(eax_5, 6, ecx_11, 0, data_1b8a720, arg3, 
                                    0xffffffff, 0xffffffff)
                            
                            if (eax == 5)
                                eax_6, ecx_14 =
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                                int32_t var_1c_67 = 1
                                var_20_3 = 0xffffffff
                                var_24_3 = 0xffffffff
                                edx_23 = 6
                                goto label_5213a0
                            
                            if (eax == 6)
                                int32_t var_20_30 = 0
                                return sub_4792d0(
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", 
                                        &data_1b8a720), 
                                    arg3, data_1b8a720, 6, 0, data_1b8a734)
                    else if (eax != 0x56)
                        if (eax == 0x57 || eax == 0x58)
                            eax = arg5
                            
                            if (eax == 1 || eax == 2)
                                return sub_480c70(
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$", 
                                        &data_1b8a720), 
                                    arg3, data_1b8a720, data_1b8a734, 0, data_1b8a748, data_1b8a75c)
                        else if (eax != 0x59)
                            if (eax == 0x5a || eax == 0x5b)
                                eax = arg5
                                
                                if (eax == 1 || eax == 2)
                                    return sub_480bd0(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$$$", 
                                            &data_1b8a720), 
                                        arg3, data_1b8a720, data_1b8a734, data_1b8a748, 0, 
                                        data_1b8a75c, data_1b8a770, (data_1b8a784).w, 
                                        (data_1b8a798).w, (data_1b8a7ac).w, data_1b8a7c0, 
                                        data_1b8a7d4, (data_1b8a7e8).b)
                                
                                if (eax == 3)
                                    eax_3 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                        &data_1b8a720)
                                    int32_t var_1c_60 = 0
                                    var_20_1 = 6
                                    goto label_52108f
                                
                                if (eax == 4)
                                    eax_5, ecx_11 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$$", &data_1b8a720)
                                    int32_t var_1c_61 = 0
                                    return sub_48cfe0(eax_5, 6, ecx_11, 0, data_1b8a720, arg3, 
                                        data_1b8a734, data_1b8a748)
                                
                                if (eax == 5)
                                    eax_6, ecx_14 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$$", &data_1b8a720)
                                    int32_t var_1c_62 = 1
                                    var_20_3 = data_1b8a748
                                    edx_23 = 6
                                    var_24_3 = data_1b8a734
                                    goto label_5213a0
                                
                                if (eax == 6)
                                    int32_t var_20_27 = 0
                                    return sub_479250(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$", 
                                            &data_1b8a720), 
                                        arg3, data_1b8a720, data_1b8a734, data_1b8a748, 6, 0, 
                                        data_1b8a75c)
                            else if (eax != 0x5c && (eax == 0x5d || eax == 0x5e))
                                eax = arg5
                                
                                if (eax == 1 || eax == 2)
                                    return sub_480d00(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$", 
                                            &data_1b8a720), 
                                        arg3, data_1b8a720, data_1b8a734, data_1b8a748, 0, 
                                        data_1b8a75c, data_1b8a770)
        case 7
            eax = data_1b8b070
            
            if (eax != 0x50)
                if (eax == 0x51 || eax == 0x52)
                    eax = arg5
                    
                    if (eax == 1 || eax == 2)
                        return sub_480b40(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$$", 
                                &data_1b8a720), 
                            arg3, data_1b8a720, data_1b8a734, 1, data_1b8a748, data_1b8a75c, 
                            (data_1b8a770).w, (data_1b8a784).w, (data_1b8a798).w, data_1b8a7ac, 
                            data_1b8a7c0, (data_1b8a7d4).b)
                    
                    if (eax == 3)
                        int32_t eax_86 = sub_478b80(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), 
                            arg3, data_1b8a720, data_1b8a734, 7, 0)
                        data_715e98 = eax_86
                        return eax_86
                    
                    if (eax == 4)
                        ecx_11 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                        eax_5 = data_1b8a734
                        int32_t var_1c_79 = 0
                        return sub_48cfe0(eax_5, 7, ecx_11, 0, data_1b8a720, arg3, eax_5, eax_5)
                    
                    if (eax == 5)
                        ecx_14 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                        eax_6 = data_1b8a734
                        edx_23 = 7
                        int32_t var_1c_80 = 1
                        var_20_3 = eax_6
                        var_24_3 = eax_6
                        goto label_5213a0
                    
                    if (eax == 6)
                        return sub_4791e0(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720), 
                            arg3, data_1b8a720, data_1b8a734, 7, 0, data_1b8a748)
                else if (eax != 0x53)
                    if (eax == 0x54 || eax == 0x55)
                        eax = arg5
                        
                        if (eax != 1 && eax != 2)
                            if (eax == 3)
                                eax_31 =
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                                int32_t var_1c_76 = 0
                                var_20_10 = 7
                                goto label_5216cd
                            
                            if (eax == 4)
                                eax_5, ecx_11 =
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                                int32_t var_1c_77 = 0
                                return sub_48cfe0(eax_5, 7, ecx_11, 0, data_1b8a720, arg3, 
                                    0xffffffff, 0xffffffff)
                            
                            if (eax == 5)
                                eax_6, ecx_14 =
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                                int32_t var_1c_78 = 1
                                var_20_3 = 0xffffffff
                                var_24_3 = 0xffffffff
                                edx_23 = 7
                                goto label_5213a0
                            
                            if (eax == 6)
                                int32_t var_20_34 = 0
                                return sub_4792d0(
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", 
                                        &data_1b8a720), 
                                    arg3, data_1b8a720, 7, 0, data_1b8a734)
                    else if (eax != 0x56)
                        if (eax == 0x57 || eax == 0x58)
                            eax = arg5
                            
                            if (eax == 1 || eax == 2)
                                return sub_480c70(
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$", 
                                        &data_1b8a720), 
                                    arg3, data_1b8a720, data_1b8a734, 1, data_1b8a748, data_1b8a75c)
                        else if (eax != 0x59)
                            if (eax == 0x5a || eax == 0x5b)
                                eax = arg5
                                
                                if (eax == 1 || eax == 2)
                                    return sub_480bd0(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$$$$", 
                                            &data_1b8a720), 
                                        arg3, data_1b8a720, data_1b8a734, data_1b8a748, 1, 
                                        data_1b8a75c, data_1b8a770, (data_1b8a784).w, 
                                        (data_1b8a798).w, (data_1b8a7ac).w, data_1b8a7c0, 
                                        data_1b8a7d4, (data_1b8a7e8).b)
                                
                                if (eax == 3)
                                    eax_3 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                        &data_1b8a720)
                                    int32_t var_1c_72 = 0
                                    var_20_1 = 7
                                    goto label_52108f
                                
                                if (eax == 4)
                                    eax_5, ecx_11 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$$", &data_1b8a720)
                                    int32_t var_1c_73 = 0
                                    return sub_48cfe0(eax_5, 7, ecx_11, 0, data_1b8a720, arg3, 
                                        data_1b8a734, data_1b8a748)
                                
                                if (eax == 5)
                                    eax_6, ecx_14 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$$", &data_1b8a720)
                                    int32_t var_1c_74 = 1
                                    var_20_3 = data_1b8a748
                                    edx_23 = 7
                                    var_24_3 = data_1b8a734
                                    goto label_5213a0
                                
                                if (eax == 6)
                                    int32_t var_20_32 = 0
                                    return sub_479250(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$", 
                                            &data_1b8a720), 
                                        arg3, data_1b8a720, data_1b8a734, data_1b8a748, 7, 0, 
                                        data_1b8a75c)
                            else if (eax != 0x5c && (eax == 0x5d || eax == 0x5e))
                                eax = arg5
                                
                                if (eax == 1 || eax == 2)
                                    return sub_480d00(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$", 
                                            &data_1b8a720), 
                                        arg3, data_1b8a720, data_1b8a734, data_1b8a748, 1, 
                                        data_1b8a75c, data_1b8a770)
        case 8
            eax = data_1b8b070
            
            if (eax != 0x50)
                if (eax == 0x51 || eax == 0x52)
                    eax = arg5
                    
                    if (eax == 1 || eax == 2)
                        return sub_480b40(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$", &data_1b8a720), 
                            arg3, data_1b8a720, data_1b8a734, 2, data_1b8a748, data_1b8a75c, 0, 0, 
                            0, data_1b8a770, data_1b8a784, 0)
                    
                    if (eax == 3)
                        int32_t eax_94 = sub_478b80(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), 
                            arg3, data_1b8a720, data_1b8a734, 8, 0)
                        data_715e98 = eax_94
                        return eax_94
                    
                    if (eax == 4)
                        ecx_11 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                        eax_5 = data_1b8a734
                        int32_t var_1c_90 = 0
                        return sub_48cfe0(eax_5, 8, ecx_11, 0, data_1b8a720, arg3, eax_5, eax_5)
                    
                    if (eax == 5)
                        ecx_14 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                        eax_6 = data_1b8a734
                        edx_23 = 8
                        int32_t var_1c_91 = 1
                        var_20_3 = eax_6
                        var_24_3 = eax_6
                        goto label_5213a0
                    
                    if (eax == 6)
                        return sub_4791e0(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720), 
                            arg3, data_1b8a720, data_1b8a734, 8, 0, data_1b8a748)
                else if (eax != 0x53)
                    if (eax == 0x54 || eax == 0x55)
                        eax = arg5
                        
                        if (eax != 1 && eax != 2)
                            if (eax == 3)
                                eax_31 =
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                                int32_t var_1c_87 = 0
                                var_20_10 = 8
                                goto label_5216cd
                            
                            if (eax == 4)
                                eax_5, ecx_11 =
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                                int32_t var_1c_88 = 0
                                return sub_48cfe0(eax_5, 8, ecx_11, 0, data_1b8a720, arg3, 
                                    0xffffffff, 0xffffffff)
                            
                            if (eax == 5)
                                eax_6, ecx_14 =
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                                int32_t var_1c_89 = 1
                                var_20_3 = 0xffffffff
                                var_24_3 = 0xffffffff
                                edx_23 = 8
                                goto label_5213a0
                            
                            if (eax == 6)
                                int32_t var_20_38 = 0
                                return sub_4792d0(
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", 
                                        &data_1b8a720), 
                                    arg3, data_1b8a720, 8, 0, data_1b8a734)
                    else if (eax != 0x56)
                        if (eax == 0x57 || eax == 0x58)
                            eax = arg5
                            
                            if (eax == 1 || eax == 2)
                                return sub_480c70(
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$", 
                                        &data_1b8a720), 
                                    arg3, data_1b8a720, data_1b8a734, 2, data_1b8a748, data_1b8a75c)
                        else if (eax != 0x59)
                            if (eax == 0x5a || eax == 0x5b)
                                eax = arg5
                                
                                if (eax == 1 || eax == 2)
                                    return sub_480bd0(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$", 
                                            &data_1b8a720), 
                                        arg3, data_1b8a720, data_1b8a734, data_1b8a748, 2, 
                                        data_1b8a75c, data_1b8a770, 0, 0, 0, data_1b8a784, 
                                        data_1b8a798, 0)
                                
                                if (eax == 3)
                                    eax_3 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                        &data_1b8a720)
                                    int32_t var_1c_83 = 0
                                    var_20_1 = 8
                                    goto label_52108f
                                
                                if (eax == 4)
                                    eax_5, ecx_11 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$$", &data_1b8a720)
                                    int32_t var_1c_84 = 0
                                    return sub_48cfe0(eax_5, 8, ecx_11, 0, data_1b8a720, arg3, 
                                        data_1b8a734, data_1b8a748)
                                
                                if (eax == 5)
                                    eax_6, ecx_14 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$$", &data_1b8a720)
                                    int32_t var_1c_85 = 1
                                    var_20_3 = data_1b8a748
                                    edx_23 = 8
                                    var_24_3 = data_1b8a734
                                    goto label_5213a0
                                
                                if (eax == 6)
                                    int32_t var_20_36 = 0
                                    return sub_479250(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$", 
                                            &data_1b8a720), 
                                        arg3, data_1b8a720, data_1b8a734, data_1b8a748, 8, 0, 
                                        data_1b8a75c)
                            else if (eax != 0x5c && (eax == 0x5d || eax == 0x5e))
                                eax = arg5
                                
                                if (eax == 1 || eax == 2)
                                    return sub_480d00(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$", 
                                            &data_1b8a720), 
                                        arg3, data_1b8a720, data_1b8a734, data_1b8a748, 2, 
                                        data_1b8a75c, data_1b8a770)
        case 9
            eax = data_1b8b070
            
            if (eax != 0x50)
                if (eax == 0x51 || eax == 0x52)
                    eax = arg5
                    
                    if (eax == 1 || eax == 2)
                        return sub_480b40(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$", &data_1b8a720), 
                            arg3, data_1b8a720, data_1b8a734, 3, data_1b8a748, data_1b8a75c, 
                            (data_1b8a770).w, 0, 0, data_1b8a784, data_1b8a798, 0)
                    
                    if (eax == 3)
                        int32_t eax_102 = sub_478b80(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), 
                            arg3, data_1b8a720, data_1b8a734, 9, 0)
                        data_715e98 = eax_102
                        return eax_102
                    
                    if (eax == 4)
                        ecx_11 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                        eax_5 = data_1b8a734
                        int32_t var_1c_100 = 0
                        return sub_48cfe0(eax_5, 9, ecx_11, 0, data_1b8a720, arg3, eax_5, eax_5)
                    
                    if (eax == 5)
                        ecx_14 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                        eax_6 = data_1b8a734
                        edx_23 = 9
                        int32_t var_1c_101 = 1
                        var_20_3 = eax_6
                        var_24_3 = eax_6
                        goto label_5213a0
                    
                    if (eax == 6)
                        return sub_4791e0(
                            sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720), 
                            arg3, data_1b8a720, data_1b8a734, 9, 0, data_1b8a748)
                else if (eax != 0x53)
                    if (eax == 0x54 || eax == 0x55)
                        eax = arg5
                        
                        if (eax != 1 && eax != 2)
                            if (eax == 3)
                                eax_31 =
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                                int32_t var_1c_97 = 0
                                var_20_10 = 9
                                goto label_5216cd
                            
                            if (eax == 4)
                                eax_5, ecx_11 =
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                                int32_t var_1c_98 = 0
                                return sub_48cfe0(eax_5, 9, ecx_11, 0, data_1b8a720, arg3, 
                                    0xffffffff, 0xffffffff)
                            
                            if (eax == 5)
                                eax_6, ecx_14 =
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                                int32_t var_1c_99 = 1
                                var_20_3 = 0xffffffff
                                var_24_3 = 0xffffffff
                                edx_23 = 9
                                goto label_5213a0
                            
                            if (eax == 6)
                                int32_t var_20_42 = 0
                                return sub_4792d0(
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", 
                                        &data_1b8a720), 
                                    arg3, data_1b8a720, 9, 0, data_1b8a734)
                    else if (eax != 0x56)
                        if (eax == 0x57 || eax == 0x58)
                            eax = arg5
                            
                            if (eax == 1 || eax == 2)
                                return sub_480c70(
                                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$", 
                                        &data_1b8a720), 
                                    arg3, data_1b8a720, data_1b8a734, 3, data_1b8a748, data_1b8a75c)
                        else if (eax != 0x59)
                            if (eax == 0x5a || eax == 0x5b)
                                eax = arg5
                                
                                if (eax == 1 || eax == 2)
                                    return sub_480bd0(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$", 
                                            &data_1b8a720), 
                                        arg3, data_1b8a720, data_1b8a734, data_1b8a748, 3, 
                                        data_1b8a75c, data_1b8a770, (data_1b8a784).w, 0, 0, 
                                        data_1b8a798, data_1b8a7ac, 0)
                                
                                if (eax == 3)
                                    eax_3 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", 
                                        &data_1b8a720)
                                    int32_t var_1c_93 = 0
                                    var_20_1 = 9
                                    goto label_52108f
                                
                                if (eax == 4)
                                    eax_5, ecx_11 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$$", &data_1b8a720)
                                    int32_t var_1c_94 = 0
                                    return sub_48cfe0(eax_5, 9, ecx_11, 0, data_1b8a720, arg3, 
                                        data_1b8a734, data_1b8a748)
                                
                                if (eax == 5)
                                    eax_6, ecx_14 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), 
                                        "$$$", &data_1b8a720)
                                    int32_t var_1c_95 = 1
                                    var_20_3 = data_1b8a748
                                    edx_23 = 9
                                    var_24_3 = data_1b8a734
                                    goto label_5213a0
                                
                                if (eax == 6)
                                    int32_t var_20_40 = 0
                                    return sub_479250(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$", 
                                            &data_1b8a720), 
                                        arg3, data_1b8a720, data_1b8a734, data_1b8a748, 9, 0, 
                                        data_1b8a75c)
                            else if (eax != 0x5c && (eax == 0x5d || eax == 0x5e))
                                eax = arg5
                                
                                if (eax == 1 || eax == 2)
                                    return sub_480d00(
                                        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$$", 
                                            &data_1b8a720), 
                                        arg3, data_1b8a720, data_1b8a734, data_1b8a748, 3, 
                                        data_1b8a75c, data_1b8a770)
return eax
