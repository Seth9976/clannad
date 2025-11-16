// 函数: sub_51a240
// 地址: 0x51a240
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

char** var_38_3
char** var_34_2
int32_t var_34_5
int32_t var_1c
int32_t var_10
int32_t var_c
int32_t var_8
int32_t eax_1
char** eax_4
char** eax_5
char** eax_18
enum MESSAGEBOX_RESULT eax_57
int32_t ecx_3
int32_t ecx_5
int32_t edx_22

switch (jump_table_51b85c[arg5])
    case 0x51a254
        eax_1 = data_1b8b070
        
        if (eax_1 == 0x50)
            return eax_1
        
        if (eax_1 == 0x51 || eax_1 == 0x52)
            if (arg4 == 1 || arg4 == 2)
                int32_t eax_24 = data_1af4e84
                char** eax_26
                
                if (eax_24 == 0)
                    eax_26 = sub_4ef190(eax_24, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
                    data_1b8a784 = 0
                    data_1b8a770 = 0
                    data_1b8a75c = 0
                else
                    eax_26 = eax_24 - 1
                    
                    if (eax_24 == 1)
                        eax_26 =
                            sub_4ef190(eax_26, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$", &data_1b8a720)
                
                return sub_47d770(eax_26, arg2, data_1b8a720, data_1b8a734, data_1b8a748, 
                    data_1b8a75c, data_1b8a770, (data_1b8a784).b)
            
            if (arg4 == 3)
                eax_18 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                int32_t var_30_9 = 0
                var_34_5 = 0x6a
            label_51a5a7:
                int32_t eax_19 = sub_478b80(eax_18, arg2, data_1b8a720, data_1b8a734, var_34_5, 0)
                data_715e98 = eax_19
                return eax_19
            
            if (arg4 == 4)
                ecx_3 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                eax_4 = data_1b8a734
                int32_t var_30_10 = 0
                return sub_48cfe0(eax_4, 0x6a, ecx_3, 0, data_1b8a720, arg2, eax_4, eax_4)
            
            if (arg4 != 5)
                if (arg4 != 6)
                    return arg4
                
                int32_t var_34_6 = 0
                return sub_4791e0(
                    sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720), arg2, 
                    data_1b8a720, data_1b8a734, 0x6a, 0, data_1b8a748)
            
            ecx_5 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
            eax_5 = data_1b8a734
            int32_t var_30_11 = 1
            var_34_2 = eax_5
            var_38_3 = eax_5
        else
            if (eax_1 == 0x53)
                return eax_1
            
            if (eax_1 == 0x54 || eax_1 == 0x55)
                if (arg4 == 1 || arg4 == 2)
                    sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                    sub_47d8a0(&arg5, arg2, data_1b8a720, data_1b8a734, &arg5)
                    char* eax_17 = arg5
                    data_715e98 = eax_17
                    return eax_17
                
                if (arg4 == 3)
                    enum MESSAGEBOX_RESULT eax_13 = sub_478ca0(
                        sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), $", &data_1b8a720), arg2, 
                        data_1b8a720, 0x6a, 0)
                    data_715e98 = eax_13
                    return eax_13
                
                if (arg4 == 4)
                    eax_4, ecx_3 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), $", &data_1b8a720)
                    int32_t var_30_5 = 0
                    return sub_48cfe0(eax_4, 0x6a, ecx_3, 0, data_1b8a720, arg2, 0xffffffff, 
                        0xffffffff)
                
                if (arg4 != 5)
                    if (arg4 == 6)
                        return sub_4792d0(
                            sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720), 
                            arg2, data_1b8a720, 0x6a, 0, data_1b8a734)
                    
                    return arg4
                
                eax_5, ecx_5 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
                int32_t var_30_6 = 1
                var_34_2 = 0xffffffff
                var_38_3 = 0xffffffff
            else
                if (eax_1 == 0x56 || eax_1 == 0x57 || eax_1 == 0x58 || eax_1 == 0x59
                        || (eax_1 != 0x5a && eax_1 != 0x5b))
                    return eax_1
                
                if (arg4 == 1 || arg4 == 2)
                    int32_t eax_8 = data_1af4e84
                    char** eax_10
                    
                    if (eax_8 == 0)
                        eax_10 =
                            sub_4ef190(eax_8, arg3 + 0x20, *(arg3 + 0x20), "$$$$", &data_1b8a720)
                        data_1b8a798 = 0
                        data_1b8a784 = 0
                        data_1b8a770 = 0
                    else
                        eax_10 = eax_8 - 1
                        
                        if (eax_8 == 1)
                            eax_10 = sub_4ef190(eax_10, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$$", 
                                &data_1b8a720)
                    
                    return sub_47d810(eax_10, arg2, data_1b8a720, data_1b8a734, data_1b8a748, 
                        data_1b8a75c, data_1b8a770, data_1b8a784, (data_1b8a798).b)
                
                if (arg4 == 3)
                    enum MESSAGEBOX_RESULT eax_3 = sub_478c00(
                        sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720), arg2, 
                        data_1b8a720, data_1b8a734, data_1b8a748, 0x6a, 0)
                    data_715e98 = eax_3
                    return eax_3
                
                if (arg4 == 4)
                    eax_4, ecx_3 =
                        sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
                    int32_t var_30_1 = 0
                    return sub_48cfe0(eax_4, 0x6a, ecx_3, 0, data_1b8a720, arg2, data_1b8a734, 
                        data_1b8a748)
                
                if (arg4 != 5)
                    if (arg4 == 6)
                        return sub_479250(
                            sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$$$", &data_1b8a720), 
                            arg2, data_1b8a720, data_1b8a734, data_1b8a748, 0x6a, 0, data_1b8a75c)
                    
                    return arg4
                
                eax_5, ecx_5 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
                int32_t var_30_2 = 1
                var_34_2 = data_1b8a748
                var_38_3 = data_1b8a734
        
        edx_22 = 0x6a
        goto label_51a62a
    case 0x51a70f
        eax_1 = data_1b8b070
        
        if (eax_1 == 0x50)
            return eax_1
        
        if (eax_1 == 0x51 || eax_1 == 0x52)
            if (arg4 == 1 || arg4 == 2)
                return sub_47e4f0(
                    sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720), arg2, 
                    data_1b8a720, data_1b8a734, data_1b8a748)
            
            if (arg4 == 3)
                eax_18 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                int32_t var_30_22 = 0
                var_34_5 = 0xff
                goto label_51a5a7
            
            if (arg4 == 4)
                ecx_3 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                eax_4 = data_1b8a734
                int32_t var_30_23 = 0
                return sub_48cfe0(eax_4, 0xff, ecx_3, 0, data_1b8a720, arg2, eax_4, eax_4)
            
            if (arg4 != 5)
                if (arg4 != 6)
                    return arg4
                
                int32_t var_34_10 = 0
                return sub_4791e0(
                    sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720), arg2, 
                    data_1b8a720, data_1b8a734, 0xff, 0, data_1b8a748)
            
            ecx_5 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
            eax_5 = data_1b8a734
            edx_22 = 0xff
            int32_t var_30_24 = 1
            var_34_2 = eax_5
            var_38_3 = eax_5
        label_51a62a:
            int32_t eax_21 =
                sub_48cfe0(eax_5, edx_22, ecx_5, 0, data_1b8a720, arg2, var_38_3, var_34_2)
            sub_445260()
            return eax_21
        
        if (eax_1 == 0x53)
            return eax_1
        
        if (eax_1 == 0x54 || eax_1 == 0x55)
            if (arg4 == 1 || arg4 == 2)
                sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                sub_47e5f0(&arg5, arg2, data_1b8a720, data_1b8a734, &arg5)
                char* eax_39 = arg5
                data_715e98 = eax_39
                return eax_39
            
            if (arg4 == 3)
                enum MESSAGEBOX_RESULT eax_35 =
                    sub_478ca0(sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), $", &data_1b8a720), 
                    arg2, data_1b8a720, 0xff, 0)
                data_715e98 = eax_35
                return eax_35
            
            if (arg4 == 4)
                eax_4, ecx_3 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
                int32_t var_30_18 = 0
                return sub_48cfe0(eax_4, 0xff, ecx_3, 0, data_1b8a720, arg2, 0xffffffff, 0xffffffff)
            
            if (arg4 != 5)
                if (arg4 == 6)
                    return sub_4792d0(
                        sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720), arg2, 
                        data_1b8a720, 0xff, 0, data_1b8a734)
                
                return arg4
            
            eax_5, ecx_5 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
            int32_t var_30_19 = 1
            var_34_2 = 0xffffffff
            var_38_3 = 0xffffffff
            edx_22 = 0xff
            goto label_51a62a
        
        if (eax_1 == 0x56 || eax_1 == 0x57 || eax_1 == 0x58 || eax_1 == 0x59
                || (eax_1 != 0x5a && eax_1 != 0x5b))
            return eax_1
        
        if (arg4 == 1 || arg4 == 2)
            return sub_47e560(sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$$$", &data_1b8a720), 
                arg2, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c)
        
        if (arg4 == 3)
            enum MESSAGEBOX_RESULT eax_29 = sub_478c00(
                sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720), arg2, 
                data_1b8a720, data_1b8a734, data_1b8a748, 0xff, 0)
            data_715e98 = eax_29
            return eax_29
        
        if (arg4 == 4)
            eax_4, ecx_3 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
            int32_t var_30_14 = 0
            return sub_48cfe0(eax_4, 0xff, ecx_3, 0, data_1b8a720, arg2, data_1b8a734, data_1b8a748)
        
        if (arg4 != 5)
            if (arg4 == 6)
                return sub_479250(
                    sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$$$", &data_1b8a720), arg2, 
                    data_1b8a720, data_1b8a734, data_1b8a748, 0xff, 0, data_1b8a75c)
            
            return arg4
        
        eax_5, ecx_5 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
        int32_t var_30_15 = 1
        var_34_2 = data_1b8a748
        edx_22 = 0xff
        var_38_3 = data_1b8a734
        goto label_51a62a
    case 0x51aae6
        eax_1 = data_1b8b070
        
        if (eax_1 == 0x50)
            return eax_1
        
        if (eax_1 == 0x51 || eax_1 == 0x52)
            int32_t eax_55 = data_1af4e84
            
            if (eax_55 == 0)
                sub_4ef190(eax_55, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                int32_t eax_59 = data_70300c - 1
                data_1b8a748 = 0
                data_1b8a770 = eax_59
                eax_57 = data_7030dc - 1
                data_1b8a75c = 0
                data_1b8a784 = eax_57
            else
                eax_57 = eax_55 - 1
                
                if (eax_55 == 1)
                    eax_57 =
                        sub_4ef190(eax_57, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$", &data_1b8a720)
            
            return sub_47f210(eax_57, arg2, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c, 
                data_1b8a770, data_1b8a784)
        
        if (eax_1 == 0x53)
            return eax_1
        
        if (eax_1 == 0x54 || eax_1 == 0x55)
            sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$%%%%", &data_1b8a720)
            int32_t eax_52 = sub_4e8000(
                sub_4e8000(
                    sub_47f340(&arg5, arg2, data_1b8a720, data_1b8a734, &arg5, &var_8, &var_c, 
                        &var_10), 
                    data_1b8a758, data_1b8a754, arg5, &data_704898), 
                data_1b8a76c, data_1b8a768, var_8, &data_704898)
            void* var_40_6 = &data_704898
            return sub_4e8000(sub_4e8000(eax_52, data_1b8a780, data_1b8a77c, var_c, &data_704898), 
                data_1b8a794, data_1b8a790, var_10, &data_704898)
        
        if (eax_1 == 0x56 || eax_1 == 0x57 || eax_1 == 0x58 || eax_1 == 0x59
                || (eax_1 != 0x5a && eax_1 != 0x5b))
            return eax_1
        
        int32_t eax_42 = data_1af4e84
        char** eax_44
        
        if (eax_42 == 0)
            sub_4ef190(eax_42, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
            int32_t eax_46 = data_70300c - 1
            data_1b8a75c = 0
            data_1b8a784 = eax_46
            eax_44 = data_7030dc - 1
            data_1b8a770 = 0
            data_1b8a798 = eax_44
        else
            eax_44 = eax_42 - 1
            
            if (eax_42 == 1)
                eax_44 = sub_4ef190(eax_44, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$$", &data_1b8a720)
        
        return sub_47f2b0(eax_44, arg2, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c, 
            data_1b8a770, data_1b8a784, data_1b8a798)
    case 0x51ad3b
        eax_1 = data_1b8b070
        
        if (eax_1 == 0x50)
            return eax_1
        
        if (eax_1 == 0x51 || eax_1 == 0x52)
            int32_t eax_78 = data_1af4e84
            enum MESSAGEBOX_RESULT var_34_15
            enum MESSAGEBOX_RESULT var_30_28
            enum MESSAGEBOX_RESULT var_2c_5
            enum MESSAGEBOX_RESULT var_28_4
            
            if (eax_78 == 0)
                sub_4ef190(eax_78, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                int32_t edx_80 = data_70300c
                int32_t eax_83 = data_7030dc
                data_1b8a748 = 0
                data_1b8a75c = 0
                eax_57 = eax_83 - 1
                data_1b8a770 = edx_80 - 1
                var_28_4 = eax_57
                var_2c_5 = edx_80 - 1
                var_30_28 = 0
                data_1b8a784 = eax_57
                var_34_15 = 0
            else if (eax_78 != 1)
                eax_57 = data_1b8a784
                var_28_4 = eax_57
                var_2c_5 = data_1b8a770
                var_30_28 = data_1b8a75c
                var_34_15 = data_1b8a748
            else
                sub_4ef190(eax_78 - 1, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$", &data_1b8a720)
                enum MESSAGEBOX_RESULT ecx_72 = data_1b8a748
                enum MESSAGEBOX_RESULT edi_3 = data_1b8a75c
                enum MESSAGEBOX_RESULT edx_77 = data_1b8a770 - 1 + ecx_72
                eax_57 = data_1b8a784 - 1 + edi_3
                data_1b8a770 = edx_77
                var_28_4 = eax_57
                var_2c_5 = edx_77
                var_30_28 = edi_3
                data_1b8a784 = eax_57
                var_34_15 = ecx_72
            
            return sub_47f210(eax_57, arg2, data_1b8a720, data_1b8a734, var_34_15, var_30_28, 
                var_2c_5, var_28_4)
        
        if (eax_1 == 0x53)
            return eax_1
        
        if (eax_1 == 0x54 || eax_1 == 0x55)
            sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$%%%%", &data_1b8a720)
            int32_t eax_71 =
                sub_47f340(&arg5, arg2, data_1b8a720, data_1b8a734, &arg5, &var_8, &var_c, &var_10)
            char* esi_1 = arg5
            int32_t eax_72 = sub_4e8000(eax_71, data_1b8a758, data_1b8a754, esi_1, &data_704898)
            int32_t edi_2 = var_8
            sub_4e8000(eax_72, data_1b8a76c, data_1b8a768, edi_2, &data_704898)
            sub_4e8000(var_c - esi_1 + 1, data_1b8a780, data_1b8a77c, var_c - esi_1 + 1, 
                &data_704898)
            void* var_40_8 = &data_704898
            int32_t eax_53 = var_10 - edi_2 + 1
            return sub_4e8000(eax_53, data_1b8a794, data_1b8a790, eax_53, &data_704898)
        
        if (eax_1 == 0x56 || eax_1 == 0x57 || eax_1 == 0x58 || eax_1 == 0x59
                || (eax_1 != 0x5a && eax_1 != 0x5b))
            return eax_1
        
        int32_t eax_62 = data_1af4e84
        enum MESSAGEBOX_RESULT eax_67
        enum MESSAGEBOX_RESULT ecx_63
        enum MESSAGEBOX_RESULT edx_65
        enum MESSAGEBOX_RESULT edi_1
        
        if (eax_62 == 0)
            sub_4ef190(eax_62, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
            int32_t edx_67 = data_70300c
            ecx_63 = 0
            int32_t eax_68 = data_7030dc
            edi_1 = 0
            data_1b8a75c = 0
            edx_65 = edx_67 - 1
            data_1b8a770 = 0
            eax_67 = eax_68 - 1
            data_1b8a798 = eax_67
            data_1b8a784 = edx_65
        else if (eax_62 != 1)
            eax_67 = data_1b8a798
            edx_65 = data_1b8a784
            edi_1 = data_1b8a770
            ecx_63 = data_1b8a75c
        else
            sub_4ef190(eax_62 - 1, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$$", &data_1b8a720)
            ecx_63 = data_1b8a75c
            edi_1 = data_1b8a770
            edx_65 = data_1b8a784 - 1 + ecx_63
            eax_67 = data_1b8a798 - 1 + edi_1
            data_1b8a798 = eax_67
            data_1b8a784 = edx_65
        
        return sub_47f2b0(eax_67, arg2, data_1b8a720, data_1b8a734, data_1b8a748, ecx_63, edi_1, 
            edx_65, eax_67)
    case 0x51afc7
        eax_1 = data_1b8b070
        
        if (eax_1 != 0x50)
            if (eax_1 == 0x51 || eax_1 == 0x52)
                return sub_47f580(
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$S", &data_1b8a720), arg2, 
                    data_1b8a720, data_1b8a734, data_1b8a750)
            
            if (eax_1 != 0x53)
                if (eax_1 == 0x54 || eax_1 == 0x55)
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$&", &data_1b8a720)
                    int32_t ecx_78 = data_1b8a720
                    arg5 = nullptr
                    enum MESSAGEBOX_RESULT var_38_16 = data_1b8a734
                    var_10 = 0
                    sub_4a4620(sub_47f6b0(&var_10, arg2, ecx_78, var_38_16, &var_10, &arg5), arg5, 
                        data_1b8a758, data_1b8a754)
                    return sub_4d6c40(&var_10, &arg5)
                
                if (eax_1 != 0x56 && eax_1 != 0x57 && eax_1 != 0x58 && eax_1 != 0x59
                        && (eax_1 == 0x5a || eax_1 == 0x5b))
                    return sub_47f620(
                        sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$S", &data_1b8a720), 
                        arg2, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a764)
        
        return eax_1
    case 0x51b109
        eax_1 = data_1b8b070
        
        if (eax_1 != 0x50)
            if (eax_1 == 0x51 || eax_1 == 0x52)
                int32_t eax_105 = data_1af4e84
                char** eax_107
                
                if (eax_105 == 0)
                    eax_107 =
                        sub_4ef190(eax_105, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$$$", &data_1b8a720)
                    data_1b8a7c0 = 0xffffffff
                else
                    eax_107 = eax_105 - 1
                    
                    if (eax_105 == 1)
                        eax_107 = sub_4ef190(eax_107, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$$$$", 
                            &data_1b8a720)
                
                return sub_47f780(eax_107, arg2, data_1b8a720, data_1b8a734, data_1b8a748, 
                    data_1b8a75c, data_1b8a770, data_1b8a784, data_1b8a798, data_1b8a7ac, 
                    data_1b8a7c0)
            
            if (eax_1 != 0x53)
                if (eax_1 == 0x54 || eax_1 == 0x55)
                    int32_t eax_95 = data_1af4e84
                    
                    if (eax_95 == 0)
                        int32_t* var_28_9 = &data_1b8a720
                        sub_4ef190(eax_95, arg3 + 0x20, *(arg3 + 0x20), "$$%%%%%%", &data_1b8a720)
                    else if (eax_95 == 1)
                        int32_t* var_28_8 = &data_1b8a720
                        sub_4ef190(eax_95 - 1, arg3 + 0x20, *(arg3 + 0x20), "$$%%%%%%%", 
                            &data_1b8a720)
                    
                    int32_t var_18
                    int32_t var_14
                    int32_t eax_100 = sub_4e8000(
                        sub_4e8000(
                            sub_47f9b0(&arg5, arg2, data_1b8a720, data_1b8a734, &arg5, &var_10, 
                                &var_c, &var_8, &var_14, &var_18, &var_1c), 
                            data_1b8a758, data_1b8a754, arg5, &data_704898), 
                        data_1b8a76c, data_1b8a768, var_10, &data_704898)
                    eax_1 = sub_4e8000(
                        sub_4e8000(
                            sub_4e8000(
                                sub_4e8000(eax_100, data_1b8a780, data_1b8a77c, var_c, 
                                    &data_704898), 
                                data_1b8a794, data_1b8a790, var_8, &data_704898), 
                            data_1b8a7a8, data_1b8a7a4, var_14, &data_704898), 
                        data_1b8a7bc, data_1b8a7b8, var_18, &data_704898)
                    
                    if (data_1af4e84 == 1)
                        return sub_4e8000(eax_1, data_1b8a7d0, data_1b8a7cc, var_1c, &data_704898)
                else if (eax_1 != 0x56 && eax_1 != 0x57 && eax_1 != 0x58 && eax_1 != 0x59
                        && (eax_1 == 0x5a || eax_1 == 0x5b))
                    int32_t eax_91 = data_1af4e84
                    char** eax_93
                    
                    if (eax_91 == 0)
                        eax_93 = sub_4ef190(eax_91, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$$$$", 
                            &data_1b8a720)
                        data_1b8a7d4 = 0xffffffff
                    else
                        eax_93 = eax_91 - 1
                        
                        if (eax_91 == 1)
                            eax_93 = sub_4ef190(eax_93, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$$$$$", 
                                &data_1b8a720)
                    
                    return sub_47f910(eax_93, arg2, data_1b8a720, data_1b8a734, data_1b8a748, 
                        data_1b8a75c, data_1b8a770, data_1b8a784, data_1b8a798, data_1b8a7ac, 
                        data_1b8a7c0, data_1b8a7d4)
        
        return eax_1
    case 0x51b3bf
        eax_1 = data_1b8b070
        
        if (eax_1 != 0x50)
            if (eax_1 == 0x51 || eax_1 == 0x52)
                return sub_47eef0(
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720), arg2, 
                    data_1b8a720, data_1b8a734, data_1b8a748)
            
            if (eax_1 != 0x53)
                if (eax_1 == 0x54 || eax_1 == 0x55)
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                    sub_47f000(&arg5, arg2, data_1b8a720, data_1b8a734, &arg5)
                    char* eax_112 = arg5
                    data_715e98 = eax_112
                    return eax_112
                
                if (eax_1 != 0x56 && eax_1 != 0x57 && eax_1 != 0x58 && eax_1 != 0x59
                        && (eax_1 == 0x5a || eax_1 == 0x5b))
                    return sub_47ef70(
                        sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$$", &data_1b8a720), 
                        arg2, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c)
        
        return eax_1
    case 0x51b4d5
        eax_1 = data_1b8b070
        
        if (eax_1 != 0x50)
            if (eax_1 == 0x51 || eax_1 == 0x52)
                return sub_47f080(
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720), arg2, 
                    data_1b8a720, data_1b8a734, data_1b8a748)
            
            if (eax_1 != 0x53)
                if (eax_1 == 0x54 || eax_1 == 0x55)
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                    sub_47f190(&arg5, arg2, data_1b8a720, data_1b8a734, &arg5)
                    char* eax_118 = arg5
                    data_715e98 = eax_118
                    return eax_118
                
                if (eax_1 != 0x56 && eax_1 != 0x57 && eax_1 != 0x58 && eax_1 != 0x59
                        && (eax_1 == 0x5a || eax_1 == 0x5b))
                    return sub_47f100(
                        sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$$", &data_1b8a720), 
                        arg2, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c)
        
        return eax_1
    case 0x51b5eb
        eax_1 = data_1b8b070
        
        if (eax_1 != 0x50)
            if (eax_1 == 0x51 || eax_1 == 0x52)
                return sub_47b190(
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$$", &data_1b8a720), arg2, 
                    data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c)
            
            if (eax_1 != 0x53)
                if (eax_1 == 0x54 || eax_1 == 0x55)
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$%%", &data_1b8a720)
                    return sub_4e8000(
                        sub_4e8000(
                            sub_47b290(&arg5, arg2, data_1b8a720, data_1b8a734, &arg5, &var_1c), 
                            data_1b8a758, data_1b8a754, arg5, &data_704898), 
                        data_1b8a76c, data_1b8a768, var_1c, &data_704898)
                
                if (eax_1 != 0x56 && eax_1 != 0x57 && eax_1 != 0x58 && eax_1 != 0x59
                        && (eax_1 == 0x5a || eax_1 == 0x5b))
                    return sub_47b200(
                        sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$$$", &data_1b8a720), 
                        arg2, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c, data_1b8a770)
        
        return eax_1
    case 0x51b73e
        eax_1 = data_1b8b070
        
        if (eax_1 != 0x50)
            if (eax_1 == 0x51 || eax_1 == 0x52)
                return sub_47b320(
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720), arg2, 
                    data_1b8a720, data_1b8a734, data_1b8a748)
            
            if (eax_1 != 0x53)
                if (eax_1 == 0x54 || eax_1 == 0x55)
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                    sub_47b420(&arg5, arg2, data_1b8a720, data_1b8a734, &arg5)
                    char* eax_132 = arg5
                    data_715e98 = eax_132
                    return eax_132
                
                if (eax_1 != 0x56 && eax_1 != 0x57 && eax_1 != 0x58 && eax_1 != 0x59
                        && (eax_1 == 0x5a || eax_1 == 0x5b))
                    return sub_47b390(
                        sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$$", &data_1b8a720), 
                        arg2, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c)
        
        return eax_1
