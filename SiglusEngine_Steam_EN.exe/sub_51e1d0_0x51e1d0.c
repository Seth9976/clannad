// 函数: sub_51e1d0
// 地址: 0x51e1d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* var_8 = arg3
int32_t arg_8
int32_t eax = arg_8
char** var_20_2
char** var_1c_1
int32_t var_1c_6
char** eax_3
char** eax_4
char** eax_19
int32_t ecx_3
int32_t ecx_5
int32_t edx_24

switch (jump_table_51f504[eax])
    case 0x51e1e1
        eax = data_1b8b070
        
        if (eax == 0x50)
            return eax
        
        if (eax == 0x51 || eax == 0x52)
            eax = arg4
            
            if (eax == 1 || eax == 2)
                int32_t eax_25 = data_1af4e84
                char** eax_27
                
                if (eax_25 == 0)
                    eax_27 = sub_4ef190(eax_25, arg3 + 0x20, *(arg3 + 0x20), "$$$$", &data_1b8a720)
                    data_1b8a798 = 0
                    data_1b8a784 = 0
                    data_1b8a770 = 0
                else
                    eax_27 = eax_25 - 1
                    
                    if (eax_25 == 1)
                        eax_27 = sub_4ef190(eax_27, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$$", 
                            &data_1b8a720)
                
                return sub_47b620(eax_27, arg2, data_1b8a720, data_1b8a734, data_1b8a748, 
                    data_1b8a75c, data_1b8a770, data_1b8a784, (data_1b8a798).b)
            
            if (eax != 3)
            label_51e581:
                
                if (eax != 4)
                    goto label_51e5bf
                
                goto label_51e596
            
        label_51e558:
            eax_19 = sub_4ef190(eax, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
            int32_t var_18_8 = 0
            var_1c_6 = 0x72
        label_51e56f:
            int32_t eax_20 = sub_478b80(eax_19, arg2, data_1b8a720, data_1b8a734, var_1c_6, 0)
            data_715e98 = eax_20
            return eax_20
        
        if (eax == 0x53)
            return eax
        
        if (eax != 0x54 && eax != 0x55)
            if (eax == 0x56 || eax == 0x57 || eax == 0x58 || eax == 0x59
                    || (eax != 0x5a && eax != 0x5b))
                return eax
            
            eax = arg4
            
            if (eax == 1 || eax == 2)
                int32_t eax_7 = data_1af4e84
                char** eax_9
                
                if (eax_7 == 0)
                    eax_9 = sub_4ef190(eax_7, arg3 + 0x20, *(arg3 + 0x20), "$$$$$", &data_1b8a720)
                    data_1b8a7ac = 0
                    data_1b8a798 = 0
                    data_1b8a784 = 0
                else
                    eax_9 = eax_7 - 1
                    
                    if (eax_7 == 1)
                        eax_9 = sub_4ef190(eax_9, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$$$", 
                            &data_1b8a720)
                
                return sub_47b6d0(eax_9, arg2, data_1b8a720, data_1b8a734, data_1b8a748, 
                    data_1b8a75c, data_1b8a770, data_1b8a784, data_1b8a798, (data_1b8a7ac).b)
            
            if (eax == 3)
            label_51e295:
                enum MESSAGEBOX_RESULT eax_2 = sub_478c00(
                    sub_4ef190(eax, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720), arg2, 
                    data_1b8a720, data_1b8a734, data_1b8a748, 0x72, 0)
                data_715e98 = eax_2
                return eax_2
            
        label_51e2ac:
            
            if (eax == 4)
                eax_3, ecx_3 = sub_4ef190(eax, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
                int32_t var_18 = 0
                return sub_48cfe0(eax_3, 0x72, ecx_3, 0, data_1b8a720, arg2, data_1b8a734, 
                    data_1b8a748)
            
            if (eax != 5)
                if (eax == 6)
                    return sub_479250(
                        sub_4ef190(eax, arg3 + 0x20, *(arg3 + 0x20), "$$$$", &data_1b8a720), arg2, 
                        data_1b8a720, data_1b8a734, data_1b8a748, 0x72, 0, data_1b8a75c)
                
                return eax
            
            eax_4, ecx_5 = sub_4ef190(eax, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
            int32_t var_18_1 = 1
            var_1c_1 = data_1b8a748
            var_20_2 = data_1b8a734
            goto label_51e5e2
        
        eax = arg4
        
        if (eax == 1 || eax == 2)
            sub_4ef190(eax, arg3 + 0x20, *(arg3 + 0x20), "$$%%", &data_1b8a720)
            return sub_4e8000(
                sub_4e8000(sub_47b760(&arg_8, arg2, data_1b8a720, data_1b8a734, &arg_8, &var_8), 
                    data_1b8a758, data_1b8a754, arg_8, &data_704898), 
                data_1b8a76c, data_1b8a768, var_8, &data_704898)
        
        if (eax == 3)
        label_51e423:
            enum MESSAGEBOX_RESULT eax_12 =
                sub_478ca0(sub_4ef190(eax, arg3 + 0x20, *(arg3 + 0x20), $", &data_1b8a720), arg2, 
                data_1b8a720, 0x72, 0)
            data_715e98 = eax_12
            return eax_12
    case 0x51e6d8
        eax = data_1b8b070
        
        if (eax == 0x50)
            return eax
        
        if (eax == 0x51 || eax == 0x52)
            eax = arg4
            
            if (eax == 1 || eax == 2)
                int32_t eax_35 = data_1af4e84
                char** eax_37
                
                if (eax_35 == 0)
                    eax_37 = sub_4ef190(eax_35, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
                    data_1b8a784 = 0
                    data_1b8a770 = 0
                    data_1b8a75c = 0
                else
                    eax_37 = eax_35 - 1
                    
                    if (eax_35 == 1)
                        eax_37 =
                            sub_4ef190(eax_37, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$", &data_1b8a720)
                
                return sub_47b7f0(eax_37, arg2, data_1b8a720, data_1b8a734, data_1b8a748, 
                    data_1b8a75c, data_1b8a770, (data_1b8a784).b)
            
            if (eax == 3)
                goto label_51e558
            
            if (eax == 4)
            label_51e596:
                ecx_3 = sub_4ef190(eax, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                eax_3 = data_1b8a734
                int32_t var_18_9 = 0
                return sub_48cfe0(eax_3, 0x72, ecx_3, 0, data_1b8a720, arg2, eax_3, eax_3)
            
        label_51e5bf:
            
            if (eax == 5)
                ecx_5 = sub_4ef190(eax, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                eax_4 = data_1b8a734
                int32_t var_18_10 = 1
                var_1c_1 = eax_4
                var_20_2 = eax_4
            label_51e5e2:
                edx_24 = 0x72
                goto label_51e5f0
            
            if (eax != 6)
                return eax
            
            int32_t var_1c_7 = 0
            return sub_4791e0(sub_4ef190(eax, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720), 
                arg2, data_1b8a720, data_1b8a734, 0x72, 0, data_1b8a748)
        
        if (eax == 0x53)
            return eax
        
        if (eax != 0x54 && eax != 0x55)
            if (eax == 0x56 || eax == 0x57 || eax == 0x58 || eax == 0x59
                    || (eax != 0x5a && eax != 0x5b))
                return eax
            
            eax = arg4
            
            if (eax != 1 && eax != 2)
            label_51e2a7:
                
                if (eax == 3)
                    goto label_51e295
                
                goto label_51e2ac
            
            int32_t eax_29 = data_1af4e84
            char** eax_31
            
            if (eax_29 == 0)
                eax_31 = sub_4ef190(eax_29, arg3 + 0x20, *(arg3 + 0x20), "$$$$", &data_1b8a720)
                data_1b8a798 = 0
                data_1b8a784 = 0
                data_1b8a770 = 0
            else
                eax_31 = eax_29 - 1
                
                if (eax_29 == 1)
                    eax_31 =
                        sub_4ef190(eax_31, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$$", &data_1b8a720)
            
            return sub_47b890(eax_31, arg2, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c, 
                data_1b8a770, data_1b8a784, (data_1b8a798).b)
        
        eax = arg4
        
        if (eax == 1 || eax == 2)
            sub_4ef190(eax, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
            sub_47b920(&arg_8, arg2, data_1b8a720, data_1b8a734, &arg_8)
            int32_t eax_34 = arg_8
            data_715e98 = eax_34
            return eax_34
        
    label_51e435:
        
        if (eax == 3)
            goto label_51e423
    case 0x51e8e7
        eax = data_1b8b070
        
        if (eax == 0x50)
            return eax
        
        if (eax == 0x51 || eax == 0x52)
            eax = arg4
            
            if (eax != 1 && eax != 2)
                if (eax == 3)
                    goto label_51e558
                
                goto label_51e581
            
            int32_t eax_45 = data_1af4e84
            char** eax_47
            
            if (eax_45 == 0)
                eax_47 = sub_4ef190(eax_45, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
                data_1b8a784 = 0
                data_1b8a770 = 0
                data_1b8a75c = 0
            else
                eax_47 = eax_45 - 1
                
                if (eax_45 == 1)
                    eax_47 =
                        sub_4ef190(eax_47, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$", &data_1b8a720)
            
            return sub_47b9a0(eax_47, arg2, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c, 
                data_1b8a770, (data_1b8a784).b)
        
        if (eax == 0x53)
            return eax
        
        if (eax == 0x54 || eax == 0x55)
            eax = arg4
            
            if (eax != 1 && eax != 2)
                goto label_51e435
            
            sub_4ef190(eax, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
            sub_47bad0(&var_8, arg2, data_1b8a720, data_1b8a734, &var_8)
            void* eax_44 = var_8
            data_715e98 = eax_44
            return eax_44
        
        if (eax == 0x56 || eax == 0x57 || eax == 0x58 || eax == 0x59
                || (eax != 0x5a && eax != 0x5b))
            return eax
        
        eax = arg4
        
        if (eax != 1 && eax != 2)
            goto label_51e2a7
        
        int32_t eax_39 = data_1af4e84
        char** eax_41
        
        if (eax_39 == 0)
            eax_41 = sub_4ef190(eax_39, arg3 + 0x20, *(arg3 + 0x20), "$$$$", &data_1b8a720)
            data_1b8a798 = 0
            data_1b8a784 = 0
            data_1b8a770 = 0
        else
            eax_41 = eax_39 - 1
            
            if (eax_39 == 1)
                eax_41 = sub_4ef190(eax_41, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$$", &data_1b8a720)
        
        return sub_47ba40(eax_41, arg2, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c, 
            data_1b8a770, data_1b8a784, (data_1b8a798).b)
    case 0x51eaed
        eax = data_1b8b070
        
        if (eax == 0x50)
            return eax
        
        if (eax == 0x51 || eax == 0x52)
            eax = arg4
            
            if (eax == 1 || eax == 2)
                int32_t eax_60 = data_1af4e84
                char** eax_62
                
                if (eax_60 == 0)
                    eax_62 = sub_4ef190(eax_60, arg3 + 0x20, *(arg3 + 0x20), "$$$$", &data_1b8a720)
                    data_1b8a798 = 0
                    data_1b8a784 = 0
                    data_1b8a770 = 0
                else
                    eax_62 = eax_60 - 1
                    
                    if (eax_60 == 1)
                        eax_62 = sub_4ef190(eax_62, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$$", 
                            &data_1b8a720)
                
                return sub_47bb50(eax_62, arg2, data_1b8a720, data_1b8a734, data_1b8a748, 
                    data_1b8a75c, data_1b8a770, data_1b8a784, (data_1b8a798).b)
            
            if (eax == 3)
            label_51ee26:
                eax_19 = sub_4ef190(eax, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                int32_t var_18_26 = 0
                var_1c_6 = 0x73
                goto label_51e56f
            
        label_51ee34:
            
            if (eax != 4)
                goto label_51ee61
            
            goto label_51ee49
        
        if (eax == 0x53)
            return eax
        
        if (eax == 0x54 || eax == 0x55)
            eax = arg4
            
            if (eax == 1 || eax == 2)
                sub_4ef190(eax, arg3 + 0x20, *(arg3 + 0x20), "$$%%", &data_1b8a720)
                return sub_4e8000(
                    sub_4e8000(
                        sub_47bc90(&arg_8, arg2, data_1b8a720, data_1b8a734, &arg_8, &var_8), 
                        data_1b8a758, data_1b8a754, arg_8, &data_704898), 
                    data_1b8a76c, data_1b8a768, var_8, &data_704898)
            
        label_51ed0e:
            
            if (eax != 3)
                goto label_51ed46
            
            goto label_51ed34
        
        if (eax == 0x56 || eax == 0x57 || eax == 0x58 || eax == 0x59
                || (eax != 0x5a && eax != 0x5b))
            return eax
        
        eax = arg4
        
        if (eax != 1 && eax != 2)
        label_51eb6f:
            
            if (eax != 3)
                goto label_51ebb3
            
            goto label_51eba1
        
        int32_t eax_53 = data_1af4e84
        char** eax_55
        
        if (eax_53 == 0)
            eax_55 = sub_4ef190(eax_53, arg3 + 0x20, *(arg3 + 0x20), "$$$$$", &data_1b8a720)
            data_1b8a7ac = 0
            data_1b8a798 = 0
            data_1b8a784 = 0
        else
            eax_55 = eax_53 - 1
            
            if (eax_53 == 1)
                eax_55 = sub_4ef190(eax_55, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$$$", &data_1b8a720)
        
        return sub_47bc00(eax_55, arg2, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c, 
            data_1b8a770, data_1b8a784, data_1b8a798, (data_1b8a7ac).b)
    case 0x51ef4e
        eax = data_1b8b070
        
        if (eax == 0x50)
            return eax
        
        if (eax == 0x51 || eax == 0x52)
            eax = arg4
            
            if (eax == 1 || eax == 2)
                int32_t eax_70 = data_1af4e84
                char** eax_72
                
                if (eax_70 == 0)
                    eax_72 = sub_4ef190(eax_70, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
                    data_1b8a784 = 0
                    data_1b8a770 = 0
                    data_1b8a75c = 0
                else
                    eax_72 = eax_70 - 1
                    
                    if (eax_70 == 1)
                        eax_72 =
                            sub_4ef190(eax_72, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$", &data_1b8a720)
                
                return sub_47bd20(eax_72, arg2, data_1b8a720, data_1b8a734, data_1b8a748, 
                    data_1b8a75c, data_1b8a770, (data_1b8a784).b)
            
            if (eax == 3)
                goto label_51ee26
            
            if (eax == 4)
            label_51ee49:
                ecx_3 = sub_4ef190(eax, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                eax_3 = data_1b8a734
                int32_t var_18_27 = 0
                return sub_48cfe0(eax_3, 0x73, ecx_3, 0, data_1b8a720, arg2, eax_3, eax_3)
            
        label_51ee61:
            
            if (eax != 5)
                if (eax != 6)
                    return eax
                
                int32_t var_1c_18 = 0
                return sub_4791e0(
                    sub_4ef190(eax, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720), arg2, 
                    data_1b8a720, data_1b8a734, 0x73, 0, data_1b8a748)
            
            ecx_5 = sub_4ef190(eax, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
            eax_4 = data_1b8a734
            edx_24 = 0x73
            int32_t var_18_28 = 1
            var_1c_1 = eax_4
            var_20_2 = eax_4
        label_51e5f0:
            int32_t eax_22 =
                sub_48cfe0(eax_4, edx_24, ecx_5, 0, data_1b8a720, arg2, var_20_2, var_1c_1)
            sub_445260()
            return eax_22
        
        if (eax == 0x53)
            return eax
        
        if (eax == 0x54 || eax == 0x55)
            eax = arg4
            
            if (eax == 1 || eax == 2)
                sub_4ef190(eax, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                sub_47be50(&arg_8, arg2, data_1b8a720, data_1b8a734, &arg_8)
                int32_t eax_69 = arg_8
                data_715e98 = eax_69
                return eax_69
            
            if (eax == 3)
            label_51ed34:
                enum MESSAGEBOX_RESULT eax_58 =
                    sub_478ca0(sub_4ef190(eax, arg3 + 0x20, *(arg3 + 0x20), $", &data_1b8a720), 
                    arg2, data_1b8a720, 0x73, 0)
                data_715e98 = eax_58
                return eax_58
            
        label_51ed46:
            
            if (eax == 4)
                eax_3, ecx_3 = sub_4ef190(eax, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
                int32_t var_18_23 = 0
                return sub_48cfe0(eax_3, 0x73, ecx_3, 0, data_1b8a720, arg2, 0xffffffff, 0xffffffff)
            
            if (eax == 5)
                eax_4, ecx_5 = sub_4ef190(eax, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
                int32_t var_18_24 = 1
                var_1c_1 = 0xffffffff
                var_20_2 = 0xffffffff
                edx_24 = 0x73
                goto label_51e5f0
            
            if (eax != 6)
                return eax
            
            int32_t var_1c_16 = 0
            return sub_4792d0(sub_4ef190(eax, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720), 
                arg2, data_1b8a720, 0x73, 0, data_1b8a734)
        
        if (eax == 0x56 || eax == 0x57 || eax == 0x58 || eax == 0x59
                || (eax != 0x5a && eax != 0x5b))
            return eax
        
        eax = arg4
        
        if (eax == 1 || eax == 2)
            int32_t eax_64 = data_1af4e84
            char** eax_66
            
            if (eax_64 == 0)
                eax_66 = sub_4ef190(eax_64, arg3 + 0x20, *(arg3 + 0x20), "$$$$", &data_1b8a720)
                data_1b8a798 = 0
                data_1b8a784 = 0
                data_1b8a770 = 0
            else
                eax_66 = eax_64 - 1
                
                if (eax_64 == 1)
                    eax_66 =
                        sub_4ef190(eax_66, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$$", &data_1b8a720)
            
            return sub_47bdc0(eax_66, arg2, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c, 
                data_1b8a770, data_1b8a784, (data_1b8a798).b)
        
        if (eax == 3)
        label_51eba1:
            enum MESSAGEBOX_RESULT eax_50 = sub_478c00(
                sub_4ef190(eax, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720), arg2, 
                data_1b8a720, data_1b8a734, data_1b8a748, 0x73, 0)
            data_715e98 = eax_50
            return eax_50
        
    label_51ebb3:
        
        if (eax == 4)
            eax_3, ecx_3 = sub_4ef190(eax, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
            int32_t var_18_19 = 0
            return sub_48cfe0(eax_3, 0x73, ecx_3, 0, data_1b8a720, arg2, data_1b8a734, data_1b8a748)
        
        if (eax != 5)
            if (eax == 6)
                return sub_479250(
                    sub_4ef190(eax, arg3 + 0x20, *(arg3 + 0x20), "$$$$", &data_1b8a720), arg2, 
                    data_1b8a720, data_1b8a734, data_1b8a748, 0x73, 0, data_1b8a75c)
            
            return eax
        
        eax_4, ecx_5 = sub_4ef190(eax, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
        int32_t var_18_20 = 1
        var_1c_1 = data_1b8a748
        edx_24 = 0x73
        var_20_2 = data_1b8a734
        goto label_51e5f0
    case 0x51f171
        eax = data_1b8b070
        
        if (eax == 0x50)
            return eax
        
        if (eax == 0x51 || eax == 0x52)
            eax = arg4
            
            if (eax != 1 && eax != 2)
                if (eax == 3)
                    goto label_51ee26
                
                goto label_51ee34
            
            int32_t eax_80 = data_1af4e84
            char** eax_82
            
            if (eax_80 == 0)
                eax_82 = sub_4ef190(eax_80, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
                data_1b8a784 = 0
                data_1b8a770 = 0
                data_1b8a75c = 0
            else
                eax_82 = eax_80 - 1
                
                if (eax_80 == 1)
                    eax_82 =
                        sub_4ef190(eax_82, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$", &data_1b8a720)
            
            return sub_47bed0(eax_82, arg2, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c, 
                data_1b8a770, (data_1b8a784).b)
        
        if (eax == 0x53)
            return eax
        
        if (eax == 0x54 || eax == 0x55)
            eax = arg4
            
            if (eax != 1 && eax != 2)
                goto label_51ed0e
            
            sub_4ef190(eax, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
            sub_47c000(&var_8, arg2, data_1b8a720, data_1b8a734, &var_8)
            void* eax_79 = var_8
            data_715e98 = eax_79
            return eax_79
        
        if (eax == 0x56 || eax == 0x57 || eax == 0x58 || eax == 0x59
                || (eax != 0x5a && eax != 0x5b))
            return eax
        
        eax = arg4
        
        if (eax != 1 && eax != 2)
            goto label_51eb6f
        
        int32_t eax_74 = data_1af4e84
        char** eax_76
        
        if (eax_74 == 0)
            eax_76 = sub_4ef190(eax_74, arg3 + 0x20, *(arg3 + 0x20), "$$$$", &data_1b8a720)
            data_1b8a798 = 0
            data_1b8a784 = 0
            data_1b8a770 = 0
        else
            eax_76 = eax_74 - 1
            
            if (eax_74 == 1)
                eax_76 = sub_4ef190(eax_76, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$$", &data_1b8a720)
        
        return sub_47bf70(eax_76, arg2, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c, 
            data_1b8a770, data_1b8a784, (data_1b8a798).b)
    case 0x51f377
        eax = data_1b8b070
        
        if (eax != 0x50)
            if (eax == 0x51 || eax == 0x52)
                int32_t eax_90 = data_1af4e84
                char** eax_92
                
                if (eax_90 == 0)
                    eax_92 = sub_4ef190(eax_90, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                    data_1b8a748 = 0
                else
                    eax_92 = eax_90 - 1
                    
                    if (eax_90 == 1)
                        eax_92 =
                            sub_4ef190(eax_92, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
                
                return sub_47ad10(eax_92, arg2, data_1b8a720, data_1b8a734, data_1b8a748)
            
            if (eax != 0x53)
                if (eax == 0x54 || eax == 0x55)
                    sub_4ef190(eax, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                    sub_47ae10(&arg_8, arg2, data_1b8a720, data_1b8a734, &arg_8)
                    int32_t eax_89 = arg_8
                    data_715e98 = eax_89
                    return eax_89
                
                if (eax != 0x56 && eax != 0x57 && eax != 0x58 && eax != 0x59
                        && (eax == 0x5a || eax == 0x5b))
                    int32_t eax_84 = data_1af4e84
                    char** eax_86
                    
                    if (eax_84 == 0)
                        eax_86 =
                            sub_4ef190(eax_84, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
                        data_1b8a75c = 0
                    else
                        eax_86 = eax_84 - 1
                        
                        if (eax_84 == 1)
                            eax_86 = sub_4ef190(eax_86, arg3 + 0x20, *(arg3 + 0x20), "$$$$", 
                                &data_1b8a720)
                    
                    return sub_47ad80(eax_86, arg2, data_1b8a720, data_1b8a734, data_1b8a748, 
                        data_1b8a75c)
        
        return eax
    case 0x51f4f4
        data_1b8b06c = 1
        return eax

if (eax == 4)
    eax_3, ecx_3 = sub_4ef190(eax, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
    int32_t var_18_4 = 0
    return sub_48cfe0(eax_3, 0x72, ecx_3, 0, data_1b8a720, arg2, 0xffffffff, 0xffffffff)

if (eax == 5)
    eax_4, ecx_5 = sub_4ef190(eax, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
    int32_t var_18_5 = 1
    var_1c_1 = 0xffffffff
    var_20_2 = 0xffffffff
    goto label_51e5e2

if (eax != 6)
    return eax

int32_t var_1c_3 = 0
return sub_4792d0(sub_4ef190(eax, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720), arg2, 
    data_1b8a720, 0x72, 0, data_1b8a734)
