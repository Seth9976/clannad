// 函数: sub_507640
// 地址: 0x507640
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_34_5
int32_t var_10
int32_t var_c
int32_t var_8
int32_t eax_1
char** eax_21
char** eax_56
char** eax_69

switch (jump_table_508bd4[arg5])
    case 0x507654
        eax_1 = data_1b8b070
        
        if (eax_1 == 0x50)
            return eax_1
        
        if (eax_1 == 0x51 || eax_1 == 0x52)
            if (arg4 == 1 || arg4 == 2)
                int32_t eax_29 = data_1af4e84
                char** eax_31
                
                if (eax_29 == 0)
                    eax_31 = sub_4ef190(eax_29, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
                    data_1b8a770 = 0
                    data_1b8a75c = 0
                    data_1b8a748 = 0
                else
                    eax_31 = eax_29 - 1
                    
                    if (eax_29 == 1)
                        eax_31 =
                            sub_4ef190(eax_31, arg3 + 0x20, *(arg3 + 0x20), "$$$$$", &data_1b8a720)
                
                return sub_46ae60(eax_31, arg2, data_1b8a720, data_1b8a734, data_1b8a748, 
                    data_1b8a75c, (data_1b8a770).b)
            
            if (arg4 == 3)
                eax_21 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
                int32_t var_30_6 = 0
                var_34_5 = 0x6a
            label_507999:
                int32_t eax_22 = sub_466c70(eax_21, arg2, data_1b8a720, var_34_5, 0)
                data_715e98 = eax_22
                return eax_22
            
            if (arg4 == 4)
                int32_t ecx_19 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
                int32_t eax_23 = data_1b8a720
                int32_t var_30_7 = 0
                return sub_48cf80(eax_23, 0x6a, ecx_19, 0, eax_23, eax_23, arg2)
            
            if (arg4 == 5)
                int32_t ecx_21 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
                int32_t eax_25 = data_1b8a720
                int32_t var_30_8 = 1
                int32_t eax_26 = sub_48cf80(eax_25, 0x6a, ecx_21, 0, eax_25, eax_25, arg2)
                sub_445260()
                return eax_26
            
            if (arg4 != 6)
                return arg4
            
            int32_t var_34_8 = 0
            return sub_467500(sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720), 
                arg2, data_1b8a720, 0x6a, 0, data_1b8a734)
        
        if (eax_1 == 0x53)
            return eax_1
        
        if (eax_1 == 0x54 || eax_1 == 0x55)
            if (arg4 == 1 || arg4 == 2)
                sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
                void* eax_19 = data_1b8a720
                uint32_t ecx_15 = 0
                
                if (eax_19 s>= 0 && eax_19 s< data_7031bc)
                    eax_19 = (arg2 + (eax_19 << 1)) * 0x650
                    ecx_15 = zx.d(*(eax_19 + 0x72d811))
                
                data_715e98 = ecx_15
                return eax_19
            
            if (arg4 == 3)
                int32_t eax_14 = sub_466d80(arg4, arg4 + 0x67, arg2, 0)
                data_715e98 = eax_14
                return eax_14
            
            if (arg4 == 4)
                int32_t var_28_2 = 0
                return sub_48cf80(arg4, arg4 + 0x66, arg3, 0, 0xffffffff, 0xffffffff, arg2)
            
            if (arg4 == 5)
                int32_t var_28_3 = 1
                int32_t eax_16 =
                    sub_48cf80(arg4, arg4 + 0x65, arg3, 0, 0xffffffff, 0xffffffff, arg2)
                sub_445260()
                return eax_16
            
            if (arg4 == 6)
                return sub_4675e0(sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), $", &data_1b8a720), 
                    0x6a, arg2, 0, data_1b8a720)
            
            return arg4
        
        if (eax_1 == 0x56 || eax_1 == 0x57 || eax_1 == 0x58 || eax_1 == 0x59
                || (eax_1 != 0x5a && eax_1 != 0x5b))
            return eax_1
        
        if (arg4 == 1 || arg4 == 2)
            int32_t eax_10 = data_1af4e84
            char** eax_12
            
            if (eax_10 == 0)
                eax_12 = sub_4ef190(eax_10, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720)
                data_1b8a784 = 0
                data_1b8a770 = 0
                data_1b8a75c = 0
            else
                eax_12 = eax_10 - 1
                
                if (eax_10 == 1)
                    eax_12 =
                        sub_4ef190(eax_12, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$", &data_1b8a720)
            
            return sub_46aec0(eax_12, data_1b8a734, data_1b8a720, arg2, data_1b8a748, data_1b8a75c, 
                data_1b8a770, (data_1b8a784).b)
        
        if (arg4 == 3)
            int32_t eax_3 = sub_466cd0(
                sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720), data_1b8a734, 
                data_1b8a720, arg2, 0x6a, 0)
            data_715e98 = eax_3
            return eax_3
        
        if (arg4 == 4)
            char** eax_4
            int32_t ecx_3
            eax_4, ecx_3 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
            int32_t var_30_1 = 0
            return sub_48cf80(eax_4, 0x6a, ecx_3, 0, data_1b8a720, data_1b8a734, arg2)
        
        if (arg4 == 5)
            char** eax_6
            int32_t ecx_5
            eax_6, ecx_5 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
            int32_t var_30_2 = 1
            int32_t eax_7 = sub_48cf80(eax_6, 0x6a, ecx_5, 0, data_1b8a720, data_1b8a734, arg2)
            sub_445260()
            return eax_7
        
        if (arg4 != 6)
            return arg4
        
        int32_t var_34_3 = 0
        return sub_467550(sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720), 
            data_1b8a734, data_1b8a720, arg2, 0x6a, 0, data_1b8a748)
    case 0x507ae9
        eax_1 = data_1b8b070
        
        if (eax_1 == 0x50)
            return eax_1
        
        if (eax_1 == 0x51 || eax_1 == 0x52)
            if (arg4 == 1 || arg4 == 2)
                return sub_46b600(
                    sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720), arg2, 
                    data_1b8a720, data_1b8a734)
            
            if (arg4 == 3)
                eax_21 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
                int32_t var_30_15 = 0
                var_34_5 = 0xff
                goto label_507999
            
            if (arg4 == 4)
                int32_t ecx_43 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
                int32_t eax_48 = data_1b8a720
                int32_t var_30_16 = 0
                return sub_48cf80(eax_48, 0xff, ecx_43, 0, eax_48, eax_48, arg2)
            
            if (arg4 == 5)
                int32_t ecx_45 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
                int32_t eax_50 = data_1b8a720
                int32_t var_30_17 = 1
                int32_t eax_51 = sub_48cf80(eax_50, 0xff, ecx_45, 0, eax_50, eax_50, arg2)
                sub_445260()
                return eax_51
            
            if (arg4 != 6)
                return arg4
            
            int32_t var_34_16 = 0
            return sub_467500(sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720), 
                arg2, data_1b8a720, 0xff, 0, data_1b8a734)
        
        if (eax_1 == 0x53)
            return eax_1
        
        if (eax_1 == 0x54 || eax_1 == 0x55)
            if (arg4 == 1 || arg4 == 2)
                sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
                void* eax_46 = data_1b8a720
                int32_t ecx_40 = 0
                
                if (eax_46 s>= 0 && eax_46 s< data_7031bc)
                    eax_46 = (arg2 + (eax_46 << 1)) * 0x650
                    ecx_40 = *(eax_46 + 0x72d808)
                
                data_715e98 = ecx_40
                return eax_46
            
            if (arg4 == 3)
                int32_t eax_41 = sub_466d80(arg4, 0xff, arg2, 0)
                data_715e98 = eax_41
                return eax_41
            
            if (arg4 == 4)
                int32_t var_28_5 = 0
                return sub_48cf80(arg4, 0xff, arg3, 0, 0xffffffff, 0xffffffff, arg2)
            
            if (arg4 == 5)
                int32_t var_28_6 = 1
                int32_t eax_43 = sub_48cf80(arg4, 0xff, arg3, 0, 0xffffffff, 0xffffffff, arg2)
                sub_445260()
                return eax_43
            
            if (arg4 == 6)
                return sub_4675e0(sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), $", &data_1b8a720), 
                    0xff, arg2, 0, data_1b8a720)
            
            return arg4
        
        if (eax_1 == 0x56 || eax_1 == 0x57 || eax_1 == 0x58 || eax_1 == 0x59
                || (eax_1 != 0x5a && eax_1 != 0x5b))
            return eax_1
        
        if (arg4 == 1 || arg4 == 2)
            return sub_46b630(sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720), 
                data_1b8a734, data_1b8a720, arg2, data_1b8a748)
        
        if (arg4 == 3)
            int32_t eax_34 = sub_466cd0(
                sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720), data_1b8a734, 
                data_1b8a720, arg2, 0xff, 0)
            data_715e98 = eax_34
            return eax_34
        
        if (arg4 == 4)
            char** eax_35
            int32_t ecx_30
            eax_35, ecx_30 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
            int32_t var_30_11 = 0
            return sub_48cf80(eax_35, 0xff, ecx_30, 0, data_1b8a720, data_1b8a734, arg2)
        
        if (arg4 == 5)
            char** eax_37
            int32_t ecx_32
            eax_37, ecx_32 = sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
            int32_t var_30_12 = 1
            int32_t eax_38 = sub_48cf80(eax_37, 0xff, ecx_32, 0, data_1b8a720, data_1b8a734, arg2)
            sub_445260()
            return eax_38
        
        if (arg4 != 6)
            return arg4
        
        int32_t var_34_12 = 0
        return sub_467550(sub_4ef190(arg4, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720), 
            data_1b8a734, data_1b8a720, arg2, 0xff, 0, data_1b8a748)
    case 0x507ea4
        eax_1 = data_1b8b070
        
        if (eax_1 == 0x50)
            return eax_1
        
        if (eax_1 == 0x51 || eax_1 == 0x52)
            int32_t eax_67 = data_1af4e84
            
            if (eax_67 == 0)
                sub_4ef190(eax_67, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
                int32_t eax_71 = data_70300c - 1
                data_1b8a734 = 0
                data_1b8a75c = eax_71
                eax_69 = data_7030dc - 1
                data_1b8a748 = 0
                data_1b8a770 = eax_69
            else
                eax_69 = eax_67 - 1
                
                if (eax_67 == 1)
                    eax_69 = sub_4ef190(eax_69, arg3 + 0x20, *(arg3 + 0x20), "$$$$$", &data_1b8a720)
            
            return sub_46be20(eax_69, arg2, data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c, 
                data_1b8a770)
        
        if (eax_1 == 0x53)
            return eax_1
        
        if (eax_1 == 0x54 || eax_1 == 0x55)
            sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$%%%%", &data_1b8a720)
            int32_t eax_65 = sub_4e8000(
                sub_4e8000(
                    sub_4e8000(
                        sub_46bf30(&arg5, arg2, data_1b8a720, &arg5, &var_8, &var_c, &var_10), 
                        data_1b8a744, data_1b8a740, arg5, &data_704898), 
                    data_1b8a758, data_1b8a754, var_8, &data_704898), 
                data_1b8a76c, data_1b8a768, var_c, &data_704898)
            return sub_4e8000(eax_65, data_1b8a780, data_1b8a77c, var_10, &data_704898)
        
        if (eax_1 == 0x56 || eax_1 == 0x57 || eax_1 == 0x58 || eax_1 == 0x59
                || (eax_1 != 0x5a && eax_1 != 0x5b))
            return eax_1
        
        int32_t eax_54 = data_1af4e84
        
        if (eax_54 == 0)
            sub_4ef190(eax_54, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
            int32_t eax_58 = data_70300c - 1
            data_1b8a748 = 0
            data_1b8a770 = eax_58
            eax_56 = data_7030dc - 1
            data_1b8a75c = 0
            data_1b8a784 = eax_56
        else
            eax_56 = eax_54 - 1
            
            if (eax_54 == 1)
                eax_56 = sub_4ef190(eax_56, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$", &data_1b8a720)
        
        return sub_46be80(eax_56, data_1b8a734, data_1b8a720, arg2, data_1b8a748, data_1b8a75c, 
            data_1b8a770, data_1b8a784)
    case 0x5080e3
        eax_1 = data_1b8b070
        
        if (eax_1 == 0x50)
            return eax_1
        
        if (eax_1 == 0x51 || eax_1 == 0x52)
            int32_t eax_90 = data_1af4e84
            int32_t var_34_19
            int32_t var_30_21
            int32_t var_2c_8
            char** var_28_8
            
            if (eax_90 == 0)
                sub_4ef190(eax_90, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
                int32_t edx_70 = data_70300c
                int32_t eax_95 = data_7030dc
                data_1b8a734 = 0
                data_1b8a748 = 0
                eax_69 = eax_95 - 1
                data_1b8a75c = edx_70 - 1
                var_28_8 = eax_69
                var_2c_8 = edx_70 - 1
                var_30_21 = 0
                data_1b8a770 = eax_69
                var_34_19 = 0
            else if (eax_90 != 1)
                eax_69 = data_1b8a770
                var_28_8 = eax_69
                var_2c_8 = data_1b8a75c
                var_30_21 = data_1b8a748
                var_34_19 = data_1b8a734
            else
                sub_4ef190(eax_90 - 1, arg3 + 0x20, *(arg3 + 0x20), "$$$$$", &data_1b8a720)
                int32_t ecx_72 = data_1b8a734
                int32_t edi_4 = data_1b8a748
                int32_t edx_67 = data_1b8a75c - 1 + ecx_72
                eax_69 = data_1b8a770 - 1 + edi_4
                data_1b8a75c = edx_67
                var_28_8 = eax_69
                var_2c_8 = edx_67
                var_30_21 = edi_4
                data_1b8a770 = eax_69
                var_34_19 = ecx_72
            
            return sub_46be20(eax_69, arg2, data_1b8a720, var_34_19, var_30_21, var_2c_8, var_28_8)
        
        if (eax_1 == 0x53)
            return eax_1
        
        if (eax_1 == 0x54 || eax_1 == 0x55)
            sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$%%%%", &data_1b8a720)
            int32_t eax_81 = sub_46bf30(&arg5, arg2, data_1b8a720, &arg5, &var_8, &var_c, &var_10)
            char* esi_1 = arg5
            int32_t eax_82 = sub_4e8000(eax_81, data_1b8a744, data_1b8a740, esi_1, &data_704898)
            int32_t edi_3 = var_8
            sub_4e8000(eax_82, data_1b8a758, data_1b8a754, edi_3, &data_704898)
            sub_4e8000(var_c - esi_1 + 1, data_1b8a76c, data_1b8a768, var_c - esi_1 + 1, 
                &data_704898)
            return sub_4e8000(var_10 - edi_3 + 1, data_1b8a780, data_1b8a77c, var_10 - edi_3 + 1, 
                &data_704898)
        
        if (eax_1 == 0x56 || eax_1 == 0x57 || eax_1 == 0x58 || eax_1 == 0x59
                || (eax_1 != 0x5a && eax_1 != 0x5b))
            return eax_1
        
        int32_t eax_74 = data_1af4e84
        int32_t var_34_17
        int32_t var_30_19
        int32_t var_2c_7
        char** var_28_7
        
        if (eax_74 == 0)
            sub_4ef190(eax_74, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720)
            int32_t edx_56 = data_70300c
            int32_t eax_79 = data_7030dc
            data_1b8a748 = 0
            data_1b8a75c = 0
            eax_56 = eax_79 - 1
            data_1b8a770 = edx_56 - 1
            var_28_7 = eax_56
            var_2c_7 = edx_56 - 1
            var_30_19 = 0
            data_1b8a784 = eax_56
            var_34_17 = 0
        else if (eax_74 != 1)
            eax_56 = data_1b8a784
            var_28_7 = eax_56
            var_2c_7 = data_1b8a770
            var_30_19 = data_1b8a75c
            var_34_17 = data_1b8a748
        else
            sub_4ef190(eax_74 - 1, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$", &data_1b8a720)
            int32_t ecx_62 = data_1b8a748
            int32_t edi_1 = data_1b8a75c
            int32_t edx_53 = data_1b8a770 - 1 + ecx_62
            eax_56 = data_1b8a784 - 1 + edi_1
            data_1b8a770 = edx_53
            var_28_7 = eax_56
            var_2c_7 = edx_53
            var_30_19 = edi_1
            data_1b8a784 = eax_56
            var_34_17 = ecx_62
        
        return sub_46be80(eax_56, data_1b8a734, data_1b8a720, arg2, var_34_17, var_30_19, var_2c_7, 
            var_28_7)
    case 0x508377
        eax_1 = data_1b8b070
        
        if (eax_1 != 0x50)
            if (eax_1 == 0x51 || eax_1 == 0x52)
                return sub_46c040(
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$S", &data_1b8a720), arg2, 
                    data_1b8a720, data_1b8a73c)
            
            if (eax_1 != 0x53)
                if (eax_1 == 0x54 || eax_1 == 0x55)
                    var_10 = 0
                    char* ecx_77 = *(arg3 + 0x20)
                    arg5 = nullptr
                    sub_4ef190(eax_1, arg3 + 0x20, ecx_77, "$&", &data_1b8a720)
                    sub_4a4620(sub_46c1a0(&var_10, arg2, data_1b8a720, &var_10, &arg5), arg5, 
                        data_1b8a744, data_1b8a740)
                    return sub_4d6c40(&var_10, &arg5)
                
                if (eax_1 != 0x56 && eax_1 != 0x57 && eax_1 != 0x58 && eax_1 != 0x59
                        && (eax_1 == 0x5a || eax_1 == 0x5b))
                    return sub_46c0c0(
                        sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$S", &data_1b8a720), 
                        data_1b8a734, data_1b8a720, arg2, data_1b8a750)
        
        return eax_1
    case 0x5084a3
        eax_1 = data_1b8b070
        
        if (eax_1 != 0x50)
            if (eax_1 == 0x51 || eax_1 == 0x52)
                int32_t eax_117 = data_1af4e84
                char** eax_119
                
                if (eax_117 == 0)
                    eax_119 =
                        sub_4ef190(eax_117, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$$", &data_1b8a720)
                    data_1b8a7ac = 0xffffffff
                else
                    eax_119 = eax_117 - 1
                    
                    if (eax_117 == 1)
                        eax_119 = sub_4ef190(eax_119, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$$$", 
                            &data_1b8a720)
                
                return sub_46c240(eax_119, arg2, data_1b8a720, data_1b8a734, data_1b8a748, 
                    data_1b8a75c, data_1b8a770, data_1b8a784, data_1b8a798, data_1b8a7ac)
            
            if (eax_1 != 0x53)
                if (eax_1 == 0x54 || eax_1 == 0x55)
                    int32_t eax_107 = data_1af4e84
                    
                    if (eax_107 == 0)
                        int32_t* var_28_11 = &data_1b8a720
                        sub_4ef190(eax_107, arg3 + 0x20, *(arg3 + 0x20), "$%%%%%%", &data_1b8a720)
                    else if (eax_107 == 1)
                        int32_t* var_28_10 = &data_1b8a720
                        sub_4ef190(eax_107 - 1, arg3 + 0x20, *(arg3 + 0x20), "$%%%%%%%", 
                            &data_1b8a720)
                    
                    int32_t* var_1c
                    int32_t var_18
                    int32_t var_14
                    int32_t eax_112 = sub_4e8000(
                        sub_4e8000(
                            sub_46c4d0(&arg5, arg2, data_1b8a720, &arg5, &var_10, &var_c, &var_8, 
                                &var_14, &var_18, &var_1c), 
                            data_1b8a744, data_1b8a740, arg5, &data_704898), 
                        data_1b8a758, data_1b8a754, var_10, &data_704898)
                    eax_1 = sub_4e8000(
                        sub_4e8000(
                            sub_4e8000(
                                sub_4e8000(eax_112, data_1b8a76c, data_1b8a768, var_c, 
                                    &data_704898), 
                                data_1b8a780, data_1b8a77c, var_8, &data_704898), 
                            data_1b8a794, data_1b8a790, var_14, &data_704898), 
                        data_1b8a7a8, data_1b8a7a4, var_18, &data_704898)
                    
                    if (data_1af4e84 == 1)
                        return sub_4e8000(eax_1, data_1b8a7bc, data_1b8a7b8, var_1c, &data_704898)
                else if (eax_1 != 0x56 && eax_1 != 0x57 && eax_1 != 0x58 && eax_1 != 0x59
                        && (eax_1 == 0x5a || eax_1 == 0x5b))
                    int32_t eax_103 = data_1af4e84
                    char** eax_105
                    
                    if (eax_103 == 0)
                        eax_105 = sub_4ef190(eax_103, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$$$", 
                            &data_1b8a720)
                        data_1b8a7c0 = 0xffffffff
                    else
                        eax_105 = eax_103 - 1
                        
                        if (eax_103 == 1)
                            eax_105 = sub_4ef190(eax_105, arg3 + 0x20, *(arg3 + 0x20), "$$$$$$$$$", 
                                &data_1b8a720)
                    
                    return sub_46c360(eax_105, data_1b8a734, data_1b8a720, arg2, data_1b8a748, 
                        data_1b8a75c, data_1b8a770, data_1b8a784, data_1b8a798, data_1b8a7ac, 
                        data_1b8a7c0)
        
        return eax_1
    case 0x508746
        eax_1 = data_1b8b070
        
        if (eax_1 != 0x50)
            if (eax_1 == 0x51 || eax_1 == 0x52)
                return sub_46bcc0(
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720), arg2, 
                    data_1b8a720, data_1b8a734)
            
            if (eax_1 != 0x53)
                if (eax_1 == 0x54 || eax_1 == 0x55)
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
                    void* eax_123 = data_1b8a720
                    int32_t ecx_101 = 0
                    
                    if (eax_123 s>= 0 && eax_123 s< data_7031bc)
                        eax_123 = (arg2 + (eax_123 << 1)) * 0x650
                        ecx_101 = *(eax_123 + 0x72d85c)
                    
                    data_715e98 = ecx_101
                    return eax_123
                
                if (eax_1 != 0x56 && eax_1 != 0x57 && eax_1 != 0x58 && eax_1 != 0x59
                        && (eax_1 == 0x5a || eax_1 == 0x5b))
                    return sub_46bd00(
                        sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720), 
                        data_1b8a734, data_1b8a720, arg2, data_1b8a748)
        
        return eax_1
    case 0x508858
        eax_1 = data_1b8b070
        
        if (eax_1 != 0x50)
            if (eax_1 == 0x51 || eax_1 == 0x52)
                return sub_46bd70(
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720), arg2, 
                    data_1b8a720, data_1b8a734)
            
            if (eax_1 != 0x53)
                if (eax_1 == 0x54 || eax_1 == 0x55)
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
                    void* eax_129 = data_1b8a720
                    int32_t ecx_107 = 0
                    
                    if (eax_129 s>= 0 && eax_129 s< data_7031bc)
                        eax_129 = (arg2 + (eax_129 << 1)) * 0x650
                        ecx_107 = *(eax_129 + 0x72d860)
                    
                    data_715e98 = ecx_107
                    return eax_129
                
                if (eax_1 != 0x56 && eax_1 != 0x57 && eax_1 != 0x58 && eax_1 != 0x59
                        && (eax_1 == 0x5a || eax_1 == 0x5b))
                    return sub_46bdb0(
                        sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720), 
                        data_1b8a734, data_1b8a720, arg2, data_1b8a748)
        
        return eax_1
    case 0x50896a
        eax_1 = data_1b8b070
        
        if (eax_1 != 0x50)
            if (eax_1 == 0x51 || eax_1 == 0x52)
                return sub_4697a0(
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720), arg2, 
                    data_1b8a720, data_1b8a734, data_1b8a748)
            
            if (eax_1 != 0x53)
                if (eax_1 == 0x54 || eax_1 == 0x55)
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$%%", &data_1b8a720)
                    void* eax_135 = data_1b8a720
                    int32_t ecx_113 = 0
                    int32_t edi_6 = 0
                    
                    if (eax_135 s>= 0 && eax_135 s< data_7031bc)
                        eax_135 = (arg2 + (eax_135 << 1)) * 0x650 + &data_72d7fc
                        ecx_113 = *(eax_135 + 0x50)
                        edi_6 = *(eax_135 + 0x54)
                    
                    return sub_4e8000(
                        sub_4e8000(eax_135, data_1b8a744, data_1b8a740, ecx_113, &data_704898), 
                        data_1b8a758, data_1b8a754, edi_6, &data_704898)
                
                if (eax_1 != 0x56 && eax_1 != 0x57 && eax_1 != 0x58 && eax_1 != 0x59
                        && (eax_1 == 0x5a || eax_1 == 0x5b))
                    return sub_4697d0(
                        sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$$", &data_1b8a720), 
                        data_1b8a734, data_1b8a720, arg2, data_1b8a748, data_1b8a75c)
        
        return eax_1
    case 0x508aba
        eax_1 = data_1b8b070
        
        if (eax_1 != 0x50)
            if (eax_1 == 0x51 || eax_1 == 0x52)
                return sub_469830(
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$", &data_1b8a720), arg2, 
                    data_1b8a720, data_1b8a734)
            
            if (eax_1 != 0x53)
                if (eax_1 == 0x54 || eax_1 == 0x55)
                    sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), U"$", &data_1b8a720)
                    void* eax_144 = data_1b8a720
                    int32_t ecx_121 = 0
                    
                    if (eax_144 s>= 0 && eax_144 s< data_7031bc)
                        eax_144 = (arg2 + (eax_144 << 1)) * 0x650
                        ecx_121 = *(eax_144 + 0x72d84c)
                    
                    data_715e98 = ecx_121
                    return eax_144
                
                if (eax_1 != 0x56 && eax_1 != 0x57 && eax_1 != 0x58 && eax_1 != 0x59
                        && (eax_1 == 0x5a || eax_1 == 0x5b))
                    return sub_469860(
                        sub_4ef190(eax_1, arg3 + 0x20, *(arg3 + 0x20), "$$$", &data_1b8a720), 
                        data_1b8a734, data_1b8a720, arg2, data_1b8a748)
        
        return eax_1
