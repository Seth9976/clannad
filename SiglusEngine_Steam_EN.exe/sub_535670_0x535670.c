// 函数: sub_535670
// 地址: 0x535670
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

uint32_t i_2 = data_1bfdd30 - 0x2bc

if (i_2 u> 0x61)
    data_1b8b06c = 1
    return i_2

i_2 = zx.d(lookup_table_53641c[i_2])
int32_t var_c

switch (i_2)
    case 0
        int32_t eax_1 = data_1af4e84
        
        if (eax_1 == 0)
            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            int32_t eax_5 = data_1b8a720
            data_703844 = 1
            data_703848 = eax_5
            return eax_5
        
        if (eax_1 == 1)
            sub_4ef190(eax_1 - 1, arg2 + 0x20, *(arg2 + 0x20), U"SMDB", &data_1b8a720)
            sub_542610(data_1b8a728, &var_c)
            int32_t eax_4 = var_c
            data_703844 = 1
            data_703848 = eax_4
            return eax_4
        
        i_2 = eax_1 - 2
        
        if (eax_1 != 2)
            return i_2
        
        data_703844 = 1
        return i_2
    case 1
        data_703844 = 0
        return i_2
    case 2
        int32_t eax_6 = data_1af4e84
        
        if (eax_6 == 0)
            sub_4ef190(eax_6, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            int32_t eax_10 = data_1b8a720
            data_70384c = 1
            data_703850.d = eax_10
            return eax_10
        
        if (eax_6 == 1)
            sub_4ef190(eax_6 - 1, arg2 + 0x20, *(arg2 + 0x20), U"SMDB", &data_1b8a720)
            sub_542610(data_1b8a728, &var_c)
            int32_t eax_9 = var_c
            data_70384c = 1
            data_703850.d = eax_9
            return eax_9
        
        i_2 = eax_6 - 2
        
        if (eax_6 != 2)
            return i_2
        
        data_70384c = 1
        return i_2
    case 3
        data_70384c = 0
        return i_2
    case 4
        int32_t eax_11 = data_1af4e84
        
        if (eax_11 == 0)
            sub_4ef190(eax_11, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            int32_t eax_15 = data_1b8a720
            data_703850:4 = 1
            data_703850:8 = eax_15
            return eax_15
        
        if (eax_11 == 1)
            sub_4ef190(eax_11 - 1, arg2 + 0x20, *(arg2 + 0x20), U"SMDB", &data_1b8a720)
            sub_542610(data_1b8a728, &var_c)
            int32_t eax_14 = var_c
            data_703850:4 = 1
            data_703850:8 = eax_14
            return eax_14
        
        i_2 = eax_11 - 2
        
        if (eax_11 != 2)
            return i_2
        
        data_703850:4 = 1
        return i_2
    case 5
        data_703850:4 = 0
        return i_2
    case 6
        int32_t eax_16 = data_1af4e84
        
        if (eax_16 == 0)
            sub_4ef190(eax_16, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            int32_t eax_20 = data_1b8a720
            data_703864 = 1
            data_703868 = eax_20
            return eax_20
        
        if (eax_16 == 1)
            sub_4ef190(eax_16 - 1, arg2 + 0x20, *(arg2 + 0x20), U"SMDB", &data_1b8a720)
            sub_542610(data_1b8a728, &var_c)
            int32_t eax_19 = var_c
            data_703864 = 1
            data_703868 = eax_19
            return eax_19
        
        i_2 = eax_16 - 2
        
        if (eax_16 != 2)
            return i_2
        
        data_703864 = 1
        return i_2
    case 7
        data_703864 = 0
        return i_2
    case 8
        int32_t eax_21 = data_1af4e84
        
        if (eax_21 == 0)
            sub_4ef190(eax_21, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            i_2 = data_1b8a720
            
            if (i_2 s>= 0 && i_2 s< data_7031bc)
                *((i_2 << 2) + &data_70386c) = 1
        else if (eax_21 == 1)
            i_2 = sub_4ef190(eax_21 - 1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
            int32_t ecx_25 = data_1b8a720
            
            if (ecx_25 s>= 0 && ecx_25 s< data_7031bc)
                int32_t eax_25 = data_1b8a734
                *((ecx_25 << 2) + &data_70386c) = 1
                *((ecx_25 << 2) + &data_70406c) = eax_25
                return eax_25
        else
            i_2 = eax_21 - 2
            
            if (eax_21 == 2)
                i_2 = sub_4ef190(i_2, arg2 + 0x20, *(arg2 + 0x20), "$S", &data_1b8a720)
                int32_t esi_1 = data_1b8a720
                
                if (esi_1 s>= 0 && esi_1 s< data_7031bc)
                    sub_542610(data_1b8a73c, &var_c)
                    int32_t eax_24 = var_c
                    *((esi_1 << 2) + &data_70386c) = 1
                    *((esi_1 << 2) + &data_70406c) = eax_24
                    return eax_24
        
        return i_2
    case 9
        sub_4ef190(i_2, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        i_2 = data_1b8a720
        
        if (i_2 s< 0 || i_2 s>= data_7031bc)
            return i_2
        
        *((i_2 << 2) + &data_70386c) = 0
        return i_2
    case 0xa
        int32_t eax_26 = data_1af4e84
        
        if (eax_26 == 0)
            sub_4ef190(eax_26, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
            i_2 = data_1b8a720
            
            if (i_2 s>= 0)
                int32_t edx_23 = data_7031bc
                
                if (i_2 s< edx_23)
                    uint32_t i_9 = data_1b8a734
                    
                    if (i_9 s>= 0 && i_9 s< edx_23)
                        int32_t ecx_42
                        uint32_t i_4
                        
                        if (i_2 s> i_9)
                            i_2 -= i_9
                            i_4 = i_9
                            ecx_42 = i_2 + 1
                        else
                            i_4 = i_2
                            ecx_42 = i_9 - i_2 + 1
                        
                        if (ecx_42 s> 0)
                            int32_t ecx_43
                            int32_t edi_2
                            edi_2, ecx_43 = __memfill_u32((i_4 << 2) + &data_70386c, 1, ecx_42)
                            return 1
        else if (eax_26 == 1)
            i_2 = sub_4ef190(eax_26 - 1, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
            uint32_t i_8 = data_1b8a720
            
            if (i_8 s>= 0)
                int32_t edx_20 = data_7031bc
                
                if (i_8 s< edx_20)
                    i_2 = data_1b8a734
                    
                    if (i_2 s>= 0 && i_2 s< edx_20)
                        uint32_t i_6
                        
                        if (i_8 s> i_2)
                            i_6 = i_2
                            i_2 = i_8 - i_2 + 1
                        else
                            i_6 = i_8
                            i_2 = i_2 - i_8 + 1
                        
                        if (i_2 s> 0)
                            int32_t edx_21 = data_1b8a748
                            void* ecx_38 = (i_6 << 2) + &data_70406c
                            uint32_t i
                            
                            do
                                *(ecx_38 - 0x800) = 1
                                ecx_38 += 4
                                *(ecx_38 - 4) = edx_21
                                i = i_2
                                i_2 -= 1
                            while (i != 1)
        else
            i_2 = eax_26 - 2
            
            if (eax_26 == 2)
                sub_4ef190(i_2, arg2 + 0x20, *(arg2 + 0x20), "$$S", &data_1b8a720)
                i_2 = data_1b8a720
                
                if (i_2 s>= 0)
                    int32_t ecx_32 = data_7031bc
                    
                    if (i_2 s< ecx_32)
                        uint32_t i_11 = data_1b8a734
                        
                        if (i_11 s>= 0 && i_11 s< ecx_32)
                            int32_t i_3
                            uint32_t i_7
                            
                            if (i_2 s> i_11)
                                i_7 = i_11
                                i_3 = i_2 - i_11 + 1
                            else
                                i_7 = i_2
                                i_3 = i_11 - i_2 + 1
                            
                            i_2 = sub_542610(data_1b8a750, &var_c)
                            
                            if (i_3 s> 0)
                                int32_t ecx_34 = var_c
                                void* eax_30 = (i_7 << 2) + &data_70406c
                                int32_t i_1
                                
                                do
                                    *(eax_30 - 0x800) = 1
                                    eax_30 += 4
                                    *(eax_30 - 4) = ecx_34
                                    i_1 = i_3
                                    i_3 -= 1
                                while (i_1 != 1)
                                return eax_30
        
        return i_2
    case 0xb
        sub_4ef190(i_2, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
        i_2 = data_1b8a720
        
        if (i_2 s>= 0)
            int32_t edx_25 = data_7031bc
            
            if (i_2 s< edx_25)
                uint32_t i_10 = data_1b8a734
                
                if (i_10 s>= 0 && i_10 s< edx_25)
                    int32_t ecx_47
                    uint32_t i_5
                    
                    if (i_2 s> i_10)
                        i_2 -= i_10
                        i_5 = i_10
                        ecx_47 = i_2 + 1
                    else
                        i_5 = i_2
                        ecx_47 = i_10 - i_2 + 1
                    
                    if (ecx_47 s> 0)
                        __builtin_memset((i_5 << 2) + &data_70386c, 0, ecx_47 << 2)
                        return 0
        
        return i_2
    case 0xc
        int32_t eax_32 = data_1af4e84
        
        if (eax_32 == 0)
            sub_4ef190(eax_32, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            int32_t eax_36 = data_1b8a720
            data_703850:0xc = 1
            data_703860 = eax_36
            return eax_36
        
        if (eax_32 == 1)
            sub_4ef190(eax_32 - 1, arg2 + 0x20, *(arg2 + 0x20), U"SMDB", &data_1b8a720)
            sub_542610(data_1b8a728, &var_c)
            int32_t eax_35 = var_c
            data_703850:0xc = 1
            data_703860 = eax_35
            return eax_35
        
        i_2 = eax_32 - 2
        
        if (eax_32 != 2)
            return i_2
        
        data_703850:0xc = 1
        return i_2
    case 0xd
        data_703850:0xc = 0
        return i_2
    case 0xe
        return i_2
    case 0xf
        int32_t eax_37 = data_703710
        
        if (eax_37 == 0)
            data_715e98 = eax_37
            return eax_37
        
        if (data_1311178 != 0)
            int32_t eax_38 = data_1312538
            data_715e98 = eax_38
            return eax_38
        
        if (data_7037c8 == 0 || data_703674 != 0)
            eax_37 = 2
        else
            int32_t ecx_53 = data_108f354
            
            if (ecx_53 == 1)
                if (data_703678 == 2)
                    data_715e98 = eax_37
                    return eax_37
                
                eax_37 = 2
            else if (ecx_53 == 2 && data_13132e0 == 0 && data_703678 != ecx_53)
                eax_37 = 2
        
        data_715e98 = eax_37
        return eax_37
    case 0x10
        if (data_1311178 == 0)
            if (data_703728 != 0)
                arg1.b = 0
                sub_485d20(arg1)
                return sub_485e40()
        else if (data_702fc0 != 0)
            sub_55f390(
                sub_55f1e0(sub_55ef70(i_2, data_72d6ac, data_719b6c, 0x61f894, 0x61f85c), 
                    data_72d6ac, data_719b6c, 0x61f894, 0x61f85c), 
                data_72d6ac, data_719b6c, 0x61f894, 0x61f85c)
            return sub_4a1e40(3)
        
        return i_2
    case 0x11
        int32_t esi_3 = data_703728
        
        if (esi_3 == 0)
            data_715e98 = esi_3
            return i_2
        
        if (data_1311178 != 0)
            data_715e98 = data_1312530
            return i_2
        
        arg1.b = 0
        int32_t eax_43 = sub_485d20(arg1)
        
        if (eax_43 == 0)
            esi_3 = 2
        
        data_715e98 = esi_3
        return eax_43
    case 0x12
        if (data_1311178 == 0)
            i_2 = sub_4862e0()
            
            if (i_2 != 0)
                arg2.b = 0
                return sub_486440(i_2, arg2.b, data_12a2980, 1)
        else if (data_702fc0 != 0)
            sub_55f390(
                sub_55f1e0(sub_55ef70(i_2, data_72d6ac, data_719b6c, 0x61f8e4, 0x61f8ac), 
                    data_72d6ac, data_719b6c, 0x61f8e4, 0x61f8ac), 
                data_72d6ac, data_719b6c, 0x61f8e4, 0x61f8ac)
            return sub_4a1e40(3)
        
        return i_2
    case 0x13
        int32_t eax_48 = sub_4862e0()
        data_715e98 = eax_48
        return eax_48
    case 0x14
        int32_t eax_49 = data_1af4e84
        int32_t eax_53
        
        if (eax_49 == 0)
            sub_4ef190(eax_49, arg2 + 0x20, *(arg2 + 0x20), "%%", &data_1b8a720)
            data_1b8a748 = 0
            eax_53 = 0
            data_1b8a75c = 0
        else if (eax_49 == 1)
            sub_4ef190(eax_49 - 1, arg2 + 0x20, *(arg2 + 0x20), "%%$", &data_1b8a720)
            eax_53 = 0
            data_1b8a75c = 0
        else
            if (eax_49 == 2)
                sub_4ef190(eax_49 - 2, arg2 + 0x20, *(arg2 + 0x20), "%%$$", &data_1b8a720)
            
            eax_53 = data_1b8a75c
        
        int32_t ecx_67 = data_1b8a748
        int32_t esi_5
        int32_t edi_4
        
        if (ecx_67 == 1)
            if (eax_53 != 1)
                esi_5 = data_70364c
                edi_4 = data_703650
            else
                esi_5 = data_703634
                edi_4 = data_703638
        else if (ecx_67 == 2)
            if (eax_53 != 1)
                esi_5 = data_703654
                edi_4 = data_703658
            else
                esi_5 = data_70363c
                edi_4 = data_703640
        else if (eax_53 != 1)
            esi_5 = data_703644
            edi_4 = data_703648
        else
            esi_5 = data_70362c
            edi_4 = data_703630
        
        sub_4e8000(sub_4e8000(eax_53, data_1b8a730, data_1b8a72c, esi_5, &data_704898), 
            data_1b8a744, data_1b8a740, edi_4, &data_704898)
        int32_t eax_55
        eax_55.b = esi_5 != 0xffffffff
        data_715e98 = eax_55
        return eax_55
    case 0x15
        int32_t eax_56 = data_1af4e84
        int32_t eax_60
        
        if (eax_56 == 0)
            sub_4ef190(eax_56, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
            data_1b8a748 = 0
            eax_60 = 0
            data_1b8a75c = 0
        else if (eax_56 == 1)
            sub_4ef190(eax_56 - 1, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
            eax_60 = 0
            data_1b8a75c = 0
        else
            if (eax_56 == 2)
                sub_4ef190(eax_56 - 2, arg2 + 0x20, *(arg2 + 0x20), "$$$$", &data_1b8a720)
            
            eax_60 = data_1b8a75c
        
        int32_t ecx_78 = data_1b8a748
        
        if (ecx_78 == 0xffffffff)
            int32_t ecx_82 = data_1b8a720
            int32_t eax_73
            
            if (eax_60 == 0xffffffff)
                eax_73 = data_1b8a734
                data_703634 = ecx_82
                data_703638 = eax_73
                data_70363c = ecx_82
                data_703640 = eax_73
                data_70362c = ecx_82
                data_703630 = eax_73
            else
                eax_73 = data_1b8a734
                
                if (eax_60 == 1)
                    data_703634 = ecx_82
                    data_703638 = eax_73
                    data_70363c = ecx_82
                    data_703640 = eax_73
                    data_70362c = ecx_82
                    data_703630 = eax_73
                    return eax_73
            
            data_70364c = ecx_82
            data_703650 = eax_73
            data_703654 = ecx_82
            data_703658 = eax_73
            data_703644 = ecx_82
            data_703648 = eax_73
            return eax_73
        
        if (ecx_78 == 1)
            if (eax_60 == 0xffffffff)
                int32_t ecx_81 = data_1b8a720
                int32_t eax_72 = data_1b8a734
                data_703634 = ecx_81
                data_703638 = eax_72
                data_70364c = ecx_81
                data_703650 = eax_72
                return eax_72
            
            int32_t eax_69 = data_1b8a720
            
            if (eax_60 == 1)
                data_703634 = eax_69
                int32_t eax_71 = data_1b8a734
                data_703638 = eax_71
                return eax_71
            
            data_70364c = eax_69
            int32_t eax_70 = data_1b8a734
            data_703650 = eax_70
            return eax_70
        
        if (ecx_78 == 2)
            if (eax_60 == 0xffffffff)
                int32_t ecx_80 = data_1b8a720
                int32_t eax_68 = data_1b8a734
                data_70363c = ecx_80
                data_703640 = eax_68
                data_703654 = ecx_80
                data_703658 = eax_68
                return eax_68
            
            int32_t eax_65 = data_1b8a720
            
            if (eax_60 == 1)
                data_70363c = eax_65
                int32_t eax_67 = data_1b8a734
                data_703640 = eax_67
                return eax_67
            
            data_703654 = eax_65
            int32_t eax_66 = data_1b8a734
            data_703658 = eax_66
            return eax_66
        
        if (eax_60 == 0xffffffff)
            int32_t ecx_79 = data_1b8a720
            int32_t eax_64 = data_1b8a734
            data_70362c = ecx_79
            data_703630 = eax_64
            data_703644 = ecx_79
            data_703648 = eax_64
            return eax_64
        
        int32_t eax_61 = data_1b8a720
        
        if (eax_60 == 1)
            data_70362c = eax_61
            int32_t eax_63 = data_1b8a734
            data_703630 = eax_63
            return eax_63
        
        data_703644 = eax_61
        int32_t eax_62 = data_1b8a734
        data_703648 = eax_62
        return eax_62
    case 0x16
        return sub_486040()
    case 0x17
        int32_t eax_75 = sub_486010()
        data_715e98 = eax_75
        return eax_75
    case 0x18
        sub_4ef190(i_2, arg2 + 0x20, *(arg2 + 0x20), "%%", &data_1b8a720)
        int32_t edx_44 = data_1311178
        int32_t eax_76 = data_703660
        int32_t ecx_85 = data_1312560
        int32_t esi_6
        int32_t edi_5
        
        if (edx_44 == 0)
            if (eax_76 == 0xffffffff)
            label_536349:
                edi_5 = 0xffffffff
                goto label_53634c
            
            edi_5 = eax_76
        label_53633c:
            
            if (eax_76 == 0xffffffff)
                esi_6 = 0xffffffff
            else
                esi_6 = data_703668
        else
            if (ecx_85 == 0xffffffff)
                goto label_536349
            
            edi_5 = ecx_85
        label_53634c:
            
            if (edx_44 == 0)
                goto label_53633c
            
            if (ecx_85 == 0xffffffff)
                esi_6 = 0xffffffff
            else
                esi_6 = data_1312564
        
        sub_4e8000(sub_4e8000(eax_76, data_1b8a730, data_1b8a72c, edi_5, &data_704898), 
            data_1b8a744, data_1b8a740, esi_6, &data_704898)
        int32_t eax_78
        eax_78.b = edi_5 != 0xffffffff
        data_715e98 = eax_78
        return eax_78
    case 0x19
        data_1b8b06c = 1
        return i_2
