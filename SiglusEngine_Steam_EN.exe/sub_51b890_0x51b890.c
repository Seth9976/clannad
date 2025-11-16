// 函数: sub_51b890
// 地址: 0x51b890
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax_1 = arg4 - 0x406
char** var_2c_5
int32_t var_28_9
char** var_28_11
char** eax_20
char** eax_22
char** eax_23
int32_t ecx
int32_t ecx_33
int32_t ecx_36
int32_t edx_35

switch (eax_1)
    case 0
        eax_1 = data_1b8b070
        
        if (eax_1 != 0x50)
            if (eax_1 == 0x51 || eax_1 == 0x52)
                return sub_47b4a0(
                    sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720), arg3, 
                    data_1b8a720, data_1b8a734, data_1b8a748)
            
            if (eax_1 != 0x53)
                if (eax_1 == 0x54 || eax_1 == 0x55)
                    sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                    sub_47b5a0(&arg4, arg3, data_1b8a720, data_1b8a734, &arg4)
                    int32_t eax_5 = arg4
                    data_715e98 = eax_5
                    return eax_5
                
                if (eax_1 != 0x56 && eax_1 != 0x57 && eax_1 != 0x58 && eax_1 != 0x59
                        && (eax_1 == 0x5a || eax_1 == 0x5b))
                    return sub_47b510(
                        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$$", &data_1b8a720), 
                        arg3, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c)
        
        return eax_1
    case 2
        eax_1 = data_1b8b070
        
        if (eax_1 != 0x50)
            if (eax_1 == 0x51 || eax_1 == 0x52)
                return sub_47ed60(
                    sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720), arg3, 
                    data_1b8a720, data_1b8a734, data_1b8a748)
            
            if (eax_1 != 0x53)
                if (eax_1 == 0x54 || eax_1 == 0x55)
                    sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                    sub_47ee70(&arg4, arg3, data_1b8a720, data_1b8a734, &arg4)
                    int32_t eax_11 = arg4
                    data_715e98 = eax_11
                    return eax_11
                
                if (eax_1 != 0x56 && eax_1 != 0x57 && eax_1 != 0x58 && eax_1 != 0x59
                        && (eax_1 == 0x5a || eax_1 == 0x5b))
                    return sub_47ede0(
                        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$$", &data_1b8a720), 
                        arg3, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c)
        
        return eax_1
    case 3
        eax_1 = data_1b8b070
        
        if (eax_1 != 0x50)
            if (eax_1 == 0x51 || eax_1 == 0x52)
                return sub_47e670(
                    sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720), arg3, 
                    data_1b8a720, data_1b8a734, data_1b8a748)
            
            if (eax_1 != 0x53)
                if (eax_1 == 0x54 || eax_1 == 0x55)
                    sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                    sub_47e770(&arg4, arg3, data_1b8a720, data_1b8a734, &arg4)
                    int32_t eax_17 = arg4
                    data_715e98 = eax_17
                    return eax_17
                
                if (eax_1 != 0x56 && eax_1 != 0x57 && eax_1 != 0x58 && eax_1 != 0x59
                        && (eax_1 == 0x5a || eax_1 == 0x5b))
                    return sub_47e6e0(
                        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$$", &data_1b8a720), 
                        arg3, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c)
        
        return eax_1
    case 4
        eax_1 = data_1b8b070
        
        if (eax_1 == 0x50)
            return eax_1
        
        if (eax_1 != 0x51 && eax_1 != 0x52)
            if (eax_1 == 0x53)
                return eax_1
            
            if (eax_1 == 0x54 || eax_1 == 0x55)
                eax_1 = arg5
                
                if (eax_1 == 1 || eax_1 == 2)
                    int32_t var_1c_1 = 1
                    return sub_5025d0(eax_1, arg2, ecx, arg3)
                
                if (eax_1 == 3)
                label_51bdab:
                    enum MESSAGEBOX_RESULT eax_28 = sub_478ca0(
                        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720), arg3, 
                        data_1b8a720, 0x70, 0)
                    data_715e98 = eax_28
                    return eax_28
                
            label_51bdbc:
                
                if (eax_1 == 4)
                    eax_22, ecx_33 =
                        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                    int32_t var_24_13 = 0
                    return sub_48cfe0(eax_22, 0x70, ecx_33, 0, data_1b8a720, arg3, 0xffffffff, 
                        0xffffffff)
                
                if (eax_1 == 5)
                    eax_23, ecx_36 =
                        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                    int32_t var_24_14 = 1
                    var_28_11 = 0xffffffff
                    var_2c_5 = 0xffffffff
                    edx_35 = 0x70
                    goto label_51bf1f
                
                if (eax_1 != 6)
                    return eax_1
                
                int32_t var_28_13 = 0
                return sub_4792d0(
                    sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), arg3, 
                    data_1b8a720, 0x70, 0, data_1b8a734)
            
            if (eax_1 == 0x56 || eax_1 == 0x57 || eax_1 == 0x58 || eax_1 == 0x59
                    || (eax_1 != 0x5a && eax_1 != 0x5b))
                return eax_1
            
            eax_1 = arg5
            
            if (eax_1 == 1 || eax_1 == 2)
                int32_t var_1c = 1
                return sub_502720(eax_1, arg2, ecx, arg3)
            
            if (eax_1 == 3)
            label_51bc88:
                eax_20 = sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
                int32_t var_24_9 = 0
                var_28_9 = 0x70
                goto label_51bca6
            
        label_51bcb7:
            
            if (eax_1 == 4)
                eax_22, ecx_33 =
                    sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
                int32_t var_24_10 = 0
                return sub_48cfe0(eax_22, 0x70, ecx_33, 0, data_1b8a720, arg3, data_1b8a734, 
                    data_1b8a748)
            
            if (eax_1 == 5)
                eax_23, ecx_36 =
                    sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
                int32_t var_24_11 = 1
                var_28_11 = data_1b8a748
                var_2c_5 = data_1b8a734
                edx_35 = 0x70
                goto label_51bf1f
            
            if (eax_1 != 6)
                return eax_1
            
            int32_t var_28_12 = 0
            return sub_479250(
                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$$", &data_1b8a720), arg3, 
                data_1b8a720, data_1b8a734, data_1b8a748, 0x70, 0, data_1b8a75c)
        
        eax_1 = arg5
        
        if (eax_1 == 1 || eax_1 == 2)
            int32_t var_1c_2 = 1
            return sub_502450(eax_1, arg2, ecx, arg3)
        
        if (eax_1 == 3)
        label_51be9a:
            int32_t eax_33 = sub_478b80(
                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), arg3, 
                data_1b8a720, data_1b8a734, 0x70, 0)
            data_715e98 = eax_33
            return eax_33
        
        if (eax_1 == 4)
        label_51bec1:
            ecx_33 = sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
            eax_22 = data_1b8a734
            int32_t var_24_16 = 0
            return sub_48cfe0(eax_22, 0x70, ecx_33, 0, data_1b8a720, arg3, eax_22, eax_22)
    case 5
        eax_1 = data_1b8b070
        
        if (eax_1 == 0x50)
            return eax_1
        
        if (eax_1 != 0x51 && eax_1 != 0x52)
            if (eax_1 == 0x53)
                return eax_1
            
            if (eax_1 == 0x54 || eax_1 == 0x55)
                eax_1 = arg5
                
                if (eax_1 == 1 || eax_1 == 2)
                    int32_t var_1c_4 = 0
                    return sub_5025d0(eax_1, arg2, ecx, arg3)
                
                if (eax_1 == 3)
                    goto label_51bdab
                
                goto label_51bdbc
            
            if (eax_1 == 0x56 || eax_1 == 0x57 || eax_1 == 0x58 || eax_1 == 0x59
                    || (eax_1 != 0x5a && eax_1 != 0x5b))
                return eax_1
            
            eax_1 = arg5
            
            if (eax_1 == 1 || eax_1 == 2)
                int32_t var_1c_3 = 0
                return sub_502720(eax_1, arg2, ecx, arg3)
            
            if (eax_1 == 3)
                goto label_51bc88
            
            goto label_51bcb7
        
        eax_1 = arg5
        
        if (eax_1 == 1 || eax_1 == 2)
            int32_t var_1c_5 = 0
            return sub_502450(eax_1, arg2, ecx, arg3)
        
        if (eax_1 == 3)
            goto label_51be9a
        
        if (eax_1 == 4)
            goto label_51bec1
    case 6
        eax_1 = data_1b8b070
        
        switch (eax_1)
            case 0x50
                return eax_1
            case 0x51, 0x52
                if (arg5 == 1 || arg5 == 2)
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
                    
                    return sub_47ab60(eax_60, arg3, data_1b8a720, data_1b8a734, data_1b8a748, 
                        data_1b8a75c, data_1b8a770, (data_1b8a784).b)
                
                if (arg5 == 3)
                    int32_t eax_55 = sub_478b80(
                        sub_4ef190(arg5, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), arg3, 
                        data_1b8a720, data_1b8a734, 0x66, 0)
                    data_715e98 = eax_55
                    return eax_55
                
                if (arg5 == 4)
                    ecx_33 = sub_4ef190(arg5, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                    eax_22 = data_1b8a734
                    int32_t var_24_28 = 0
                    return sub_48cfe0(eax_22, 0x66, ecx_33, 0, data_1b8a720, arg3, eax_22, eax_22)
                
                if (arg5 != 5)
                    if (arg5 == 6)
                        return sub_4791e0(
                            sub_4ef190(arg5, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720), 
                            arg3, data_1b8a720, data_1b8a734, 0x66, 0, data_1b8a748)
                    
                    return arg5
                
                ecx_36 = sub_4ef190(arg5, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                eax_23 = data_1b8a734
                edx_35 = 0x66
                int32_t var_24_29 = 1
                var_28_11 = eax_23
                var_2c_5 = eax_23
            label_51bf1f:
                int32_t eax_35 =
                    sub_48cfe0(eax_23, edx_35, ecx_36, 0, data_1b8a720, arg3, var_2c_5, var_28_11)
                sub_445260()
                return eax_35
            case 0x53
                return eax_1
            case 0x54, 0x55
                if (arg5 == 1 || arg5 == 2)
                    sub_4ef190(arg5, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                    sub_47ac90(&arg4, arg3, data_1b8a720, data_1b8a734, &arg4)
                    int32_t eax_53 = arg4
                    data_715e98 = eax_53
                    return eax_53
                
                if (arg5 == 3)
                    enum MESSAGEBOX_RESULT eax_51 = sub_478ca0(
                        sub_4ef190(arg5, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720), arg3, 
                        data_1b8a720, 0x66, 0)
                    data_715e98 = eax_51
                    return eax_51
                
                if (arg5 == 4)
                    eax_22, ecx_33 =
                        sub_4ef190(arg5, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                    int32_t var_24_25 = 0
                    return sub_48cfe0(eax_22, 0x66, ecx_33, 0, data_1b8a720, arg3, 0xffffffff, 
                        0xffffffff)
                
                if (arg5 == 5)
                    eax_23, ecx_36 =
                        sub_4ef190(arg5, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720)
                    int32_t var_24_26 = 1
                    var_28_11 = 0xffffffff
                    var_2c_5 = 0xffffffff
                    edx_35 = 0x66
                    goto label_51bf1f
                
                if (arg5 != 6)
                    return arg5
                
                int32_t var_28_18 = 0
                return sub_4792d0(
                    sub_4ef190(arg5, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), arg3, 
                    data_1b8a720, 0x66, 0, data_1b8a734)
            case 0x56
                return eax_1
            case 0x57, 0x58
                return sub_47aa60(
                    sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720), arg3, 
                    data_1b8a720, data_1b8a734, data_1b8a748)
            case 0x59
                return eax_1
        
        if (eax_1 != 0x5a && eax_1 != 0x5b)
            if (eax_1 != 0x5c && (eax_1 == 0x5d || eax_1 == 0x5e))
                return sub_47aad0(
                    sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$$", &data_1b8a720), arg3, 
                    data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c)
            
            return eax_1
        
        if (arg5 == 1 || arg5 == 2)
            int32_t eax_44 = data_1af4e84
            char** eax_46
            
            if (eax_44 == 0)
                eax_46 = sub_4ef190(eax_44, arg2 + 0x20, *(arg2 + 0x20), "$$$$", &data_1b8a720)
                data_1b8a798 = 0
                data_1b8a784 = 0
                data_1b8a770 = 0
            else
                eax_46 = eax_44 - 1
                
                if (eax_44 == 1)
                    eax_46 =
                        sub_4ef190(eax_46, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$", &data_1b8a720)
            
            return sub_47ac00(eax_46, arg3, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c, 
                data_1b8a770, data_1b8a784, (data_1b8a798).b)
        
        if (arg5 == 3)
            eax_20 = sub_4ef190(arg5, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
            int32_t var_24_20 = 0
            var_28_9 = 0x66
        label_51bca6:
            enum MESSAGEBOX_RESULT eax_21 =
                sub_478c00(eax_20, arg3, data_1b8a720, data_1b8a734, data_1b8a748, var_28_9, 0)
            data_715e98 = eax_21
            return eax_21
        
        if (arg5 == 4)
            eax_22, ecx_33 = sub_4ef190(arg5, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
            int32_t var_24_21 = 0
            return sub_48cfe0(eax_22, 0x66, ecx_33, 0, data_1b8a720, arg3, data_1b8a734, 
                data_1b8a748)
        
        if (arg5 == 5)
            eax_23, ecx_36 = sub_4ef190(arg5, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
            int32_t var_24_22 = 1
            var_28_11 = data_1b8a748
            edx_35 = 0x66
            var_2c_5 = data_1b8a734
            goto label_51bf1f
        
        if (arg5 != 6)
            return arg5
        
        int32_t var_28_15 = 0
        return sub_479250(sub_4ef190(arg5, arg2 + 0x20, *(arg2 + 0x20), "$$$$", &data_1b8a720), 
            arg3, data_1b8a720, data_1b8a734, data_1b8a748, 0x66, 0, data_1b8a75c)
    case 7
        eax_1 = data_1b8b070
        
        if (eax_1 != 0x50)
            if (eax_1 == 0x51 || eax_1 == 0x52)
                return sub_47fa90(
                    sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720), arg3, 
                    data_1b8a720, data_1b8a734, data_1b8a748)
            
            if (eax_1 != 0x53)
                if (eax_1 == 0x54 || eax_1 == 0x55)
                    sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                    sub_47fba0(&arg4, arg3, data_1b8a720, data_1b8a734, &arg4)
                    int32_t eax_65 = arg4
                    data_715e98 = eax_65
                    return eax_65
                
                if (eax_1 != 0x56 && eax_1 != 0x57 && eax_1 != 0x58 && eax_1 != 0x59
                        && (eax_1 == 0x5a || eax_1 == 0x5b))
                    return sub_47fb10(
                        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$$", &data_1b8a720), 
                        arg3, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c)
        
        return eax_1
    case 8
        eax_1 = data_1b8b070
        
        if (eax_1 != 0x50)
            if (eax_1 == 0x51 || eax_1 == 0x52)
                return sub_47fc20(
                    sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$", &data_1b8a720), arg3, 
                    data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c, data_1b8a770, 
                    data_1b8a784, data_1b8a798)
            
            if (eax_1 != 0x53)
                if (eax_1 == 0x54 || eax_1 == 0x55)
                    sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$%%%%%", &data_1b8a720)
                    int32_t var_18
                    int32_t var_14
                    int32_t var_10
                    int32_t var_c
                    int32_t eax_73 = sub_4e8000(
                        sub_4e8000(
                            sub_47fd80(&arg4, arg3, data_1b8a720, data_1b8a734, &arg4, &var_c, 
                                &var_10, &var_14, &var_18), 
                            data_1b8a758, data_1b8a754, arg4, &data_704898), 
                        data_1b8a76c, data_1b8a768, var_c, &data_704898)
                    return sub_4e8000(
                        sub_4e8000(
                            sub_4e8000(eax_73, data_1b8a780, data_1b8a77c, var_10, &data_704898), 
                            data_1b8a794, data_1b8a790, var_14, &data_704898), 
                        data_1b8a7a8, data_1b8a7a4, var_18, &data_704898)
                
                if (eax_1 != 0x56 && eax_1 != 0x57 && eax_1 != 0x58 && eax_1 != 0x59
                        && (eax_1 == 0x5a || eax_1 == 0x5b))
                    return sub_47fcf0(
                        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$$", &data_1b8a720), 
                        arg3, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c, data_1b8a770, 
                        data_1b8a784, data_1b8a798, data_1b8a7ac)
        
        return eax_1
    case 9
        eax_1 = data_1b8b070
        
        if (eax_1 != 0x50)
            if (eax_1 == 0x51 || eax_1 == 0x52)
                return sub_479410(
                    sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720), arg3, 
                    data_1b8a720, data_1b8a734, data_1b8a748)
            
            if (eax_1 != 0x53)
                if (eax_1 == 0x54 || eax_1 == 0x55)
                    sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                    sub_479530(&arg4, arg3, data_1b8a720, data_1b8a734, &arg4)
                    int32_t eax_82 = arg4
                    data_715e98 = eax_82
                    return eax_82
                
                if (eax_1 != 0x56 && eax_1 != 0x57 && eax_1 != 0x58 && eax_1 != 0x59
                        && (eax_1 == 0x5a || eax_1 == 0x5b))
                    return sub_479490(
                        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$$", &data_1b8a720), 
                        arg3, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c)
        
        return eax_1
    default
        data_1b8b06c = 1
        return eax_1

if (eax_1 != 5)
    if (eax_1 == 6)
        return sub_4791e0(sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720), 
            arg3, data_1b8a720, data_1b8a734, 0x70, 0, data_1b8a748)
    
    return eax_1

ecx_36 = sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
eax_23 = data_1b8a734
int32_t var_24_17 = 1
var_28_11 = eax_23
var_2c_5 = eax_23
edx_35 = 0x70
goto label_51bf1f
