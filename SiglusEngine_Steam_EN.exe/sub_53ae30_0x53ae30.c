// 函数: sub_53ae30
// 地址: 0x53ae30
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = data_1bfdd30
uint32_t eax_1

if (eax s<= 0x8ad)
    if (eax == 0x8ad)
        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t eax_32 = data_1b8a720
        data_1313c8c = eax_32
        return eax_32
    
    eax_1 = eax - 0x7d0
    
    if (eax_1 u> 0x3d)
        data_1b8b06c = 1
        return eax_1
    
    eax_1 = zx.d(lookup_table_53c8e4[eax_1])
    
    switch (eax_1)
        case 0
            int32_t eax_2 = data_13132c4
            data_715e98 = eax_2
            return eax_2
        case 1
            int32_t eax_3 = data_13132c8
            data_715e98 = eax_3
            return eax_3
        case 2
            int32_t eax_4
            eax_4.b = data_1c04444 == 0
            data_715e98 = eax_4
            return eax_4
        case 3
            int32_t eax_5 = data_13132cc
            data_715e98 = eax_5
            return eax_5
        case 4
            int32_t eax_6 = data_13132d0
            data_715e98 = eax_6
            return eax_6
        case 5
            int32_t eax_7 = data_13132d4
            data_715e98 = eax_7
            return eax_7
        case 6
            int32_t eax_8 = data_13132d8
            data_715e98 = eax_8
            return eax_8
        case 7
            int32_t eax_9 = data_13132dc
            data_715e98 = eax_9
            return eax_9
        case 8
            int32_t eax_10 = data_1af4258
            
            if (eax_10 s> 0x200)
                eax_1 = eax_10 - 0x800
                
                if (eax_10 != 0x800)
                    int32_t eax_11 = eax_1 - 0xf3a40
                    
                    if (eax_1 == 0xf3a40)
                        data_715e98 = 7
                        return eax_11
                    
                    eax_1 = eax_11 - 2
                    
                    if (eax_11 == 2)
                        data_715e98 = 6
                        return eax_1
                
                data_715e98 = 5
                return eax_1
            
            if (eax_10 == 0x200)
                data_715e98 = 4
                return eax_10
            
            eax_1 = eax_10 - 2
            
            if (eax_1 u> 0x7e)
                data_715e98 = 5
                return eax_1
            
            eax_1 = zx.d(lookup_table_53c938[eax_1])
            
            switch (eax_1)
                case 0
                    data_715e98 = 0
                    return eax_1
                case 1
                    data_715e98 = 1
                    return eax_1
                case 2
                    data_715e98 = 2
                    return eax_1
                case 3
                    data_715e98 = 3
                    return eax_1
                case 4
                    data_715e98 = 5
                    return eax_1
        case 9
            int32_t eax_12 = data_13132e0
            data_715e98 = eax_12
            return eax_12
        case 0xa
            int32_t eax_13 = data_13132e4
            data_715e98 = eax_13
            return eax_13
        case 0xb
            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            int32_t eax_14
            eax_14.b = data_1b8a720 != 0
            data_13132c4 = eax_14
            return eax_14
        case 0xc
            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            int32_t eax_15
            eax_15.b = data_1b8a720 != 0
            data_13132c8 = eax_15
            return eax_15
        case 0xd
            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            int32_t eax_16
            eax_16.b = data_1b8a720 == 0
            data_1c04444 = eax_16
            return eax_16
        case 0xe
            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            int32_t eax_17
            eax_17.b = data_1b8a720 != 0
            data_13132cc = eax_17
            return eax_17
        case 0xf
            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            int32_t eax_18
            eax_18.b = data_1b8a720 != 0
            data_13132d0 = eax_18
            data_641b44 = eax_18
            return eax_18
        case 0x10
            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            int32_t eax_19
            eax_19.b = data_1b8a720 != 0
            data_13132d4 = eax_19
            return eax_19
        case 0x11
            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            int32_t eax_20
            eax_20.b = data_1b8a720 != 0
            data_13132d8 = eax_20
            return eax_20
        case 0x12
            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            int32_t eax_21
            eax_21.b = data_1b8a720 != 0
            data_13132dc = eax_21
            return eax_21
        case 0x13
            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            eax_1 = data_1b8a720
            
            switch (eax_1)
                case 0
                    return sub_4c25d0(2)
                case 1
                    return sub_4c25d0(8)
                case 2
                    return sub_4c25d0(0x20)
                case 3
                    return sub_4c25d0(0x80)
                case 4
                    return sub_4c25d0(0x200)
                case 5
                    return sub_4c25d0(0x800)
                case 6
                    return sub_4c25d0(0xf4242)
                case 7
                    return sub_4c25d0(0xf4240)
            
            return eax_1
        case 0x14
            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            int32_t eax_30
            eax_30.b = data_1b8a720 != 0
            data_13132e0 = eax_30
            return eax_30
        case 0x15
            sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            int32_t eax_31
            eax_31.b = data_1b8a720 != 0
            data_13132e4 = eax_31
            return eax_31
        case 0x16
            data_1b8b06c = 1
            return eax_1
    
    return 

eax_1 = eax - 0x8ae

if (eax_1 u> 0x1de)
    data_1b8b06c = 1
    return eax_1

eax_1 = zx.d(lookup_table_53cbd8[eax_1])

switch (eax_1)
    case 0
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t eax_33 = data_1b8a720
        data_1313c90 = eax_33
        return eax_33
    case 1
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t eax_34 = data_1b8a720
        
        if (eax_34 s< 0xa)
            data_1af4260 = 0xa
            return eax_34
        
        if (eax_34 s> 0x64)
            eax_34 = 0x64
        
        data_1af4260 = eax_34
        return eax_34
    case 2
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t eax_35 = data_1b8a720
        
        if (eax_35 == 0)
            data_1af425c = 0
            return eax_35
        
        if (eax_35 == 1)
            data_1af425c = 1
            return eax_35 - 1
        
        eax_1 = eax_35 - 2
        
        if (eax_35 != 2)
            return eax_1
        
        data_1af425c = 2
        return eax_1
    case 3
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t eax_38 = data_1b8a720
        
        if (eax_38 == 0)
            data_13132c0 = 0
            return eax_38
        
        if (eax_38 == 1)
            data_13132c0 = 1
            return eax_38 - 1
        
        eax_1 = eax_38 - 2
        
        if (eax_38 != 2)
            return eax_1
        
        data_13132c0 = 2
        return eax_1
    case 4
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        sub_543140(data_1b8a720)
        return 0xff
    case 5
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t eax_41 = data_1b8a720
        
        if (eax_41 != 0)
            eax_41 = 1
        
        data_13132b8 = eax_41
        return eax_41
    case 6
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t edx_19 = data_1b8a720
        
        if (edx_19 s< 0)
            data_131326c = 0
            return sub_54b730(0, 0)
        
        if (edx_19 s> 0xff)
            edx_19 = 0xff
        
        data_131326c = edx_19
        return sub_54b730(0, edx_19)
    case 7
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t edx_21 = data_1b8a720
        
        if (edx_21 s< 0)
            edx_21 = 0
        else if (edx_21 s> 0xff)
            edx_21 = 0xff
        
        data_1313270 = edx_21
        return sub_54b730(1, edx_21)
    case 8
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t edx_23 = data_1b8a720
        
        if (edx_23 s< 0)
            edx_23 = 0
        else if (edx_23 s> 0xff)
            edx_23 = 0xff
        
        data_1313274 = edx_23
        return sub_54b730(2, edx_23)
    case 9
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t edx_25 = data_1b8a720
        
        if (edx_25 s< 0)
            edx_25 = 0
        else if (edx_25 s> 0xff)
            edx_25 = 0xff
        
        data_1313278 = edx_25
        return sub_54b730(3, edx_25)
    case 0xa
        eax_1 = sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
        int32_t ecx_47 = data_1b8a720
        
        if (ecx_47 u> 0x3f)
            return eax_1
        
        int32_t eax_47 = data_1b8a734
        
        if (eax_47 s< 0)
            data_1b8a734 = 0
            *((ecx_47 << 2) + &data_1313b7c) = 0
            return 0
        
        if (eax_47 s> 0xff)
            eax_47 = 0xff
        
        data_1b8a734 = eax_47
        *((ecx_47 << 2) + &data_1313b7c) = eax_47
        return eax_47
    case 0xb
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t eax_48 = data_1b8a720
        
        if (eax_48 != 0)
            eax_48 = 1
        
        data_13132ec = eax_48
        sub_54b440()
        return sub_54b4c0()
    case 0xc
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        
        if (data_1b8a720 == 0)
            data_13132c0 = 1
            return sub_54b4c0()
        
        int32_t eax_51 = data_13132c0
        
        if (eax_51 == 1)
            eax_51 = 0
        
        data_13132c0 = eax_51
        return sub_54b4c0()
    case 0xd
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t eax_53 = data_1b8a720
        
        if (eax_53 != 0)
            eax_53 = 1
        
        data_13132f0 = eax_53
        return sub_54b4c0()
    case 0xe
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t eax_55 = data_1b8a720
        
        if (eax_55 != 0)
            eax_55 = 1
        
        data_13132f4 = eax_55
        return sub_54b4c0()
    case 0xf
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t eax_57 = data_1b8a720
        
        if (eax_57 != 0)
            eax_57 = 1
        
        data_13132f8 = eax_57
        return eax_57
    case 0x10
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        return sub_542a30(data_1b8a720)
    case 0x11
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        return sub_542aa0(data_1b8a720)
    case 0x12
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        eax_1 = data_1b8a720
        
        if (eax_1 s< 0 || eax_1 s> 2)
            eax_1 = 2
            data_1b8a720 = 2
        
        if (data_1af44a0 == eax_1)
            return eax_1
        
        data_1af1740 = 1
        data_1af44a0 = eax_1
        return eax_1
    case 0x13
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        eax_1 = data_1b8a720
        
        if (eax_1 s< 0 || eax_1 s> 1)
            eax_1 = 1
            data_1b8a720 = 1
        
        if (data_1af449c == eax_1)
            return eax_1
        
        data_1af1740 = 1
        data_1af449c = eax_1
        return eax_1
    case 0x14
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        eax_1 = data_1b8a720
        
        if (eax_1 s< 0 || eax_1 s> 2)
            eax_1 = 1
            data_1b8a720 = 1
        
        if (data_131d2c8 == eax_1)
            return eax_1
        
        data_1af1740 = 1
        data_131d2c8 = eax_1
        return eax_1
    case 0x15
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t eax_60 = data_1b8a720
        
        if (eax_60 s< 0)
            data_1313294 = 0
            return sub_57fb20()
        
        if (eax_60 s> 0xff)
            eax_60 = 0xff
        
        data_1313294 = eax_60
        return sub_57fb20()
    case 0x16
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t eax_63 = data_1b8a720
        
        if (eax_63 s< 0)
            data_1313298 = 0
            return sub_57fb20()
        
        if (eax_63 s> 0xff)
            eax_63 = 0xff
        
        data_1313298 = eax_63
        return sub_57fb20()
    case 0x17
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t eax_66 = data_1b8a720
        
        if (eax_66 s< 0)
            data_131329c = 0
            return sub_57fb20()
        
        if (eax_66 s> 0xff)
            eax_66 = 0xff
        
        data_131329c = eax_66
        return sub_57fb20()
    case 0x18
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t eax_69 = data_1b8a720
        
        if (eax_69 s< 0)
            data_13132a0 = 0
            return sub_57fb20()
        
        if (eax_69 s> 0xff)
            eax_69 = 0xff
        
        data_13132a0 = eax_69
        return sub_57fb20()
    case 0x19
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t eax_72 = data_1b8a720
        
        if (eax_72 != 0)
            eax_72 = 1
        
        data_13132a4 = eax_72
        return sub_57fb20()
    case 0x1a
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
        int32_t ecx_82 = data_1b8a720
        
        if (ecx_82 s< 0)
            ecx_82 = 0
        else if (ecx_82 s> 0xff)
            ecx_82 = 0xff
        
        data_1313294 = ecx_82
        int32_t ecx_83 = data_1b8a734
        
        if (ecx_83 s< 0)
            ecx_83 = 0
        else if (ecx_83 s> 0xff)
            ecx_83 = 0xff
        
        data_1313298 = ecx_83
        int32_t ecx_84 = data_1b8a748
        
        if (ecx_84 s< 0)
            data_131329c = 0
            return sub_57fb20()
        
        if (ecx_84 s> 0xff)
            ecx_84 = 0xff
        
        data_131329c = ecx_84
        return sub_57fb20()
    case 0x1b
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$$", &data_1b8a720)
        int32_t ecx_87 = data_1b8a720
        
        if (ecx_87 s< 0)
            ecx_87 = 0
        else if (ecx_87 s> 0xff)
            ecx_87 = 0xff
        
        data_1313294 = ecx_87
        int32_t ecx_88 = data_1b8a734
        
        if (ecx_88 s< 0)
            ecx_88 = 0
        else if (ecx_88 s> 0xff)
            ecx_88 = 0xff
        
        data_1313298 = ecx_88
        int32_t ecx_89 = data_1b8a748
        
        if (ecx_89 s< 0)
            ecx_89 = 0
        else if (ecx_89 s> 0xff)
            ecx_89 = 0xff
        
        data_131329c = ecx_89
        int32_t ecx_90 = data_1b8a75c
        
        if (ecx_90 s< 0)
            data_13132a0 = 0
            return sub_57fb20()
        
        if (ecx_90 s> 0xff)
            ecx_90 = 0xff
        
        data_13132a0 = ecx_90
        return sub_57fb20()
    case 0x1c
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$$$$", &data_1b8a720)
        int32_t ecx_93 = data_1b8a720
        
        if (ecx_93 s< 0)
            ecx_93 = 0
        else if (ecx_93 s> 0xff)
            ecx_93 = 0xff
        
        data_1313294 = ecx_93
        int32_t ecx_94 = data_1b8a734
        
        if (ecx_94 s< 0)
            ecx_94 = 0
        else if (ecx_94 s> 0xff)
            ecx_94 = 0xff
        
        data_1313298 = ecx_94
        int32_t ecx_95 = data_1b8a748
        
        if (ecx_95 s< 0)
            ecx_95 = 0
        else if (ecx_95 s> 0xff)
            ecx_95 = 0xff
        
        data_131329c = ecx_95
        int32_t ecx_96 = data_1b8a75c
        
        if (ecx_96 s< 0)
            ecx_96 = 0
        else if (ecx_96 s> 0xff)
            ecx_96 = 0xff
        
        int32_t eax_78 = data_1b8a770
        data_13132a0 = ecx_96
        
        if (eax_78 != 0)
            eax_78 = 1
        
        data_13132a4 = eax_78
        return sub_57fb20()
    case 0x1d
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t eax_80
        eax_80.b = data_1b8a720 != 0
        data_1313c80 = eax_80
        return eax_80
    case 0x1e
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t eax_81
        eax_81.b = data_1b8a720 != 0
        data_1313c84 = eax_81
        return eax_81
    case 0x1f
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t eax_82
        eax_82.b = data_1b8a720 != 0
        data_1313c7c = eax_82
        return eax_82
    case 0x20
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t eax_83
        eax_83.b = data_1b8a720 != 0
        data_1313c88 = eax_83
        return eax_83
    case 0x21
        int32_t eax_84 = data_1af4e84
        
        if (eax_84 == 0)
            eax_1 = sub_4ef190(eax_84, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            
            if (data_1300594 != 0)
                data_1313b3c = data_1b8a720 != 0
        else
            eax_1 = eax_84 - 1
            
            if (eax_84 == 1)
                eax_1 = sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                
                if (data_1300594 == 0)
                    int32_t ecx_107 = data_1b8a720
                    
                    if (ecx_107 u<= 0x3f)
                        eax_1.b = data_1b8a734 != 0
                        (&data_1313b3c)[ecx_107] = eax_1.b
        
        return eax_1
    case 0x22
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t eax_87 = sub_4d4e10(sub_4a5cd0(data_1b8a720), 1)
        sub_445260()
        return eax_87
    case 0x23
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        return sub_45b6b0(data_1b8a720)
    case 0x24
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t eax_89
        eax_89.b = data_1b8a720 != 0
        data_1af17b0 = eax_89
        return eax_89
    case 0x25
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t eax_90 = data_1b8a720
        
        if (eax_90 != 0)
            eax_90 = 1
        
        data_1313304 = eax_90
        return eax_90
    case 0x26
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t eax_91 = data_1b8a720
        
        if (eax_91 != 0)
            eax_91 = 1
        
        data_1313308 = eax_91
        return eax_91
    case 0x27
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t eax_92 = data_1b8a720
        
        if (eax_92 != 0)
            eax_92 = 1
        
        data_131330c = eax_92
        return eax_92
    case 0x28
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t eax_93 = data_1b8a720
        
        if (eax_93 s< 0x64)
            data_1313310 = 0x64
            return 0x64
        
        if (eax_93 s> 0x12c)
            eax_93 = 0x12c
        
        data_1313310 = eax_93
        return eax_93
    case 0x29
        int32_t eax_94 = data_1313c8c
        data_715e98 = eax_94
        return eax_94
    case 0x2a
        int32_t eax_95 = data_1313c90
        data_715e98 = eax_95
        return eax_95
    case 0x2b
        int32_t eax_96 = data_1af4260
        data_715e98 = eax_96
        return eax_96
    case 0x2c
        int32_t eax_97 = data_1af425c
        data_715e98 = eax_97
        return eax_97
    case 0x2d
        int32_t eax_98 = data_13132c0
        data_715e98 = eax_98
        return eax_98
    case 0x2e
        int32_t eax_99 = data_13132bc
        data_715e98 = eax_99
        return eax_99
    case 0x2f
        int32_t eax_100 = data_13132b8
        data_715e98 = eax_100
        return eax_100
    case 0x30
        int32_t eax_101 = sub_54ba70(0, 0)
        data_715e98 = eax_101
        return eax_101
    case 0x31
        int32_t eax_102 = sub_54ba70(0, 1)
        data_715e98 = eax_102
        return eax_102
    case 0x32
        int32_t eax_103 = sub_54ba70(0, 2)
        data_715e98 = eax_103
        return eax_103
    case 0x33
        int32_t eax_104 = sub_54ba70(0, 3)
        data_715e98 = eax_104
        return eax_104
    case 0x34
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        eax_1 = data_1b8a720
        
        if (eax_1 u> 0x3f)
            data_715e98 = 0xff
            return eax_1
        
        int32_t eax_105 = *((eax_1 << 2) + &data_1313b7c)
        data_715e98 = eax_105
        return eax_105
    case 0x35
        int32_t eax_106 = sub_54b640(0, 0)
        data_715e98 = eax_106
        return eax_106
    case 0x36
        int32_t eax_107 = sub_54b640(0, 1)
        data_715e98 = eax_107
        return eax_107
    case 0x37
        int32_t eax_108 = sub_54b640(0, 2)
        data_715e98 = eax_108
        return eax_108
    case 0x38
        int32_t eax_109 = sub_54b640(0, 3)
        data_715e98 = eax_109
        return eax_109
    case 0x39
        int32_t eax_110 = data_13132f8
        data_715e98 = eax_110
        return eax_110
    case 0x3a
        int32_t eax_111 = data_13132fc
        data_715e98 = eax_111
        return eax_111
    case 0x3b
        int32_t eax_112 = data_1313300
        data_715e98 = eax_112
        return eax_112
    case 0x3c
        int32_t eax_113 = data_1af44a0
        data_715e98 = eax_113
        return eax_113
    case 0x3d
        int32_t eax_114 = data_1af449c
        data_715e98 = eax_114
        return eax_114
    case 0x3e
        int32_t eax_115 = data_131d2c8
        data_715e98 = eax_115
        return eax_115
    case 0x3f
        int32_t eax_116 = sub_54c7d0(0, 0)
        data_715e98 = eax_116
        return eax_116
    case 0x40
        int32_t eax_117 = sub_54c7d0(0, 1)
        data_715e98 = eax_117
        return eax_117
    case 0x41
        int32_t eax_118 = sub_54c7d0(0, 2)
        data_715e98 = eax_118
        return eax_118
    case 0x42
        int32_t eax_119 = sub_54c7d0(0, 3)
        data_715e98 = eax_119
        return eax_119
    case 0x43
        int32_t eax_120 = data_13132a4
        data_715e98 = eax_120
        return eax_120
    case 0x44
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "%%%", &data_1b8a720)
        int32_t eax_121 = sub_54c7d0(0, 0)
        int32_t eax_122 = sub_54c7d0(0, 1)
        int32_t eax_123 = sub_54c7d0(0, 2)
        return sub_4e8000(
            sub_4e8000(sub_4e8000(eax_123, data_1b8a730, data_1b8a72c, eax_121, &data_704898), 
                data_1b8a744, data_1b8a740, eax_122, &data_704898), 
            data_1b8a758, data_1b8a754, eax_123, &data_704898)
    case 0x45
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "%%%%", &data_1b8a720)
        int32_t eax_127 = sub_54c7d0(0, 0)
        int32_t eax_128 = sub_54c7d0(0, 1)
        int32_t eax_129 = sub_54c7d0(0, 2)
        int32_t eax_130 = sub_54c7d0(0, 3)
        return sub_4e8000(
            sub_4e8000(
                sub_4e8000(sub_4e8000(eax_130, data_1b8a730, data_1b8a72c, eax_127, &data_704898), 
                    data_1b8a744, data_1b8a740, eax_128, &data_704898), 
                data_1b8a758, data_1b8a754, eax_129, &data_704898), 
            data_1b8a76c, data_1b8a768, eax_130, &data_704898)
    case 0x46
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "%%%%%", &data_1b8a720)
        int32_t eax_135 = sub_54c7d0(0, 0)
        int32_t eax_136 = sub_54c7d0(0, 1)
        int32_t eax_137 = sub_54c7d0(0, 2)
        int32_t eax_138 = sub_54c7d0(0, 3)
        int32_t eax_139 = data_13132a4
        int32_t eax_143 = sub_4e8000(
            sub_4e8000(
                sub_4e8000(sub_4e8000(eax_139, data_1b8a730, data_1b8a72c, eax_135, &data_704898), 
                    data_1b8a744, data_1b8a740, eax_136, &data_704898), 
                data_1b8a758, data_1b8a754, eax_137, &data_704898), 
            data_1b8a76c, data_1b8a768, eax_138, &data_704898)
        return sub_4e8000(eax_143, data_1b8a780, data_1b8a77c, eax_139, &data_704898)
    case 0x47
        int32_t eax_145 = data_1313c80
        data_715e98 = eax_145
        return eax_145
    case 0x48
        int32_t eax_146 = data_1313c84
        data_715e98 = eax_146
        return eax_146
    case 0x49
        int32_t eax_147 = data_1313c7c
        data_715e98 = eax_147
        return eax_147
    case 0x4a
        int32_t eax_148 = data_1313c88
        data_715e98 = eax_148
        return eax_148
    case 0x4b
        int32_t eax_149 = data_1af4e84
        
        if (eax_149 == 0)
            eax_1 = sub_4ef190(eax_149, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            
            if (data_1300594 == 0)
                eax_1 = data_1b8a720
                
                if (eax_1 u<= 0x3f)
                    uint32_t eax_152 = zx.d((&data_1313b3c)[eax_1])
                    data_715e98 = eax_152
                    return eax_152
            
            data_715e98 = 0
            return eax_1
        
        eax_1 = eax_149 - 1
        
        if (eax_149 != 1)
            return eax_1
        
        if (data_1300594 == eax_1)
            data_715e98 = 0
            return eax_1
        
        uint32_t eax_151 = zx.d(data_1313b3c)
        data_715e98 = eax_151
        return eax_151
    case 0x4c
        int32_t eax_153 = sub_4a5c80()
        data_715e98 = eax_153
        return eax_153
    case 0x4d
        int32_t eax_154 = data_1313290
        data_715e98 = eax_154
        return eax_154
    case 0x4e
        int32_t eax_155 = data_1af17b0
        data_715e98 = eax_155
        return eax_155
    case 0x4f
        int32_t eax_156 = data_1313304
        data_715e98 = eax_156
        return eax_156
    case 0x50
        int32_t eax_157 = data_1313308
        data_715e98 = eax_157
        return eax_157
    case 0x51
        int32_t eax_158 = data_131330c
        data_715e98 = eax_158
        return eax_158
    case 0x52
        int32_t eax_159 = data_1313310
        data_715e98 = eax_159
        return eax_159
    case 0x53
        data_70372c = 1
        return eax_1
    case 0x54
        data_703730 = 1
        return eax_1
    case 0x55
        data_703734 = 1
        return eax_1
    case 0x56
        data_703738 = 1
        return eax_1
    case 0x57
        data_70373c = 1
        return eax_1
    case 0x58
        data_70372c = 0
        return eax_1
    case 0x59
        data_703730 = 0
        return eax_1
    case 0x5a
        data_703734 = 0
        return eax_1
    case 0x5b
        data_703738 = 0
        return eax_1
    case 0x5c
        data_70373c = 0
        return eax_1
    case 0x5d
        int32_t eax_160 = data_12ff36c
        data_715e98 = eax_160
        return eax_160
    case 0x5e
        int32_t eax_161 = data_12ff368
        data_715e98 = eax_161
        return eax_161
    case 0x5f
        int32_t eax_162 = data_12a2954
        data_715e98 = eax_162
        return eax_162
    case 0x60
        int32_t eax_163 = data_12a2950
        data_715e98 = eax_163
        return eax_163
    case 0x61
        int32_t eax_164 = data_12a2978
        data_715e98 = eax_164
        return eax_164
    case 0x62
        data_715e98 = 0x46
        return eax_1
    case 0x63
        data_715e98 = 0x12c
        return eax_1
    case 0x64
        int32_t eax_165 = data_12a2964
        data_715e98 = eax_165
        return eax_165
    case 0x65
        int32_t eax_166 = data_12a2968
        data_715e98 = eax_166
        return eax_166
    case 0x66
        int32_t eax_167 = data_12a296c
        data_715e98 = eax_167
        return eax_167
    case 0x67
        int32_t eax_168 = data_12a2970
        data_715e98 = eax_168
        return eax_168
    case 0x68
        int32_t eax_169 = data_12a2974
        data_715e98 = eax_169
        return eax_169
    case 0x69
        return sub_4e8000(
            sub_4e8000(
                sub_4e8000(sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "%%%", &data_1b8a720), 
                    data_1b8a730, data_1b8a72c, data_12a2964, &data_704898), 
                data_1b8a744, data_1b8a740, data_12a2968, &data_704898), 
            data_1b8a758, data_1b8a754, data_12a296c, &data_704898)
    case 0x6a
        int32_t eax_177 = sub_4e8000(
            sub_4e8000(
                sub_4e8000(sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "%%%%", &data_1b8a720), 
                    data_1b8a730, data_1b8a72c, data_12a2964, &data_704898), 
                data_1b8a744, data_1b8a740, data_12a2968, &data_704898), 
            data_1b8a758, data_1b8a754, data_12a296c, &data_704898)
        return sub_4e8000(eax_177, data_1b8a76c, data_1b8a768, data_12a2970, &data_704898)
    case 0x6b
        int32_t eax_182 = sub_4e8000(
            sub_4e8000(
                sub_4e8000(sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "%%%%%", &data_1b8a720), 
                    data_1b8a730, data_1b8a72c, data_12a2964, &data_704898), 
                data_1b8a744, data_1b8a740, data_12a2968, &data_704898), 
            data_1b8a758, data_1b8a754, data_12a296c, &data_704898)
        return sub_4e8000(
            sub_4e8000(eax_182, data_1b8a76c, data_1b8a768, data_12a2970, &data_704898), 
            data_1b8a780, data_1b8a77c, data_12a2974, &data_704898)
    case 0x6c
        int32_t eax_185 = data_1305c68
        data_715e98 = eax_185
        return eax_185
    case 0x6d
        int32_t eax_186 = data_1305c6c
        data_715e98 = eax_186
        return eax_186
    case 0x6e
        int32_t eax_187
        eax_187.b = data_1305c5c == 0
        data_715e98 = eax_187
        return eax_187
    case 0x6f
        int32_t eax_188
        eax_188.b = data_1305c60 == 0
        data_715e98 = eax_188
        return eax_188
    case 0x70
        int32_t eax_189
        eax_189.b = data_1305c58 == 0
        data_715e98 = eax_189
        return eax_189
    case 0x71
        int32_t eax_190
        eax_190.b = data_1305c64 == 0
        data_715e98 = eax_190
        return eax_190
    case 0x72
        int32_t eax_191 = data_12ff378
        data_715e98 = eax_191
        return eax_191
    case 0x73
        data_715e98 = 0
        return eax_1
    case 0x74
        int32_t eax_192 = data_1af4e84
        
        if (eax_192 == 0)
            eax_1 = sub_4ef190(eax_192, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            
            if (data_1300594 == 0)
                eax_1 = data_1b8a720
                
                if (eax_1 u<= 0x3f)
                    uint32_t eax_195 = zx.d((&data_1300598)[eax_1])
                    data_715e98 = eax_195
                    return eax_195
            
            data_715e98 = 0
            return eax_1
        
        eax_1 = eax_192 - 1
        
        if (eax_192 != 1)
            return eax_1
        
        if (data_1300594 == eax_1)
            data_715e98 = 0
            return eax_1
        
        uint32_t eax_194 = zx.d(data_1300598)
        data_715e98 = eax_194
        return eax_194
    case 0x75
        int32_t eax_196 = data_12ff37c
        data_715e98 = eax_196
        return eax_196
    case 0x76
        data_715e98 = 0xff
        return eax_1
    case 0x77
        data_715e98 = 1
        return eax_1
    case 0x78
        eax_1 = sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        data_715e98 = 0xff
        return eax_1
    case 0x79
        data_715e98 = 0xc8
        return eax_1
    case 0x7a
        int32_t eax_197 = data_12ff358
        data_715e98 = eax_197
        return eax_197
    case 0x7b
        int32_t eax_198 = data_12ff35c
        data_715e98 = eax_198
        return eax_198
    case 0x7c
        int32_t eax_199 = data_12ff360
        data_715e98 = eax_199
        return eax_199
    case 0x7d
        int32_t eax_200 = data_12ff24c
        data_715e98 = eax_200
        return eax_200
    case 0x7e
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t eax_201 = sub_4a5cd0(data_1b8a720)
        
        if (eax_201 - 1 u> 4)
            int32_t eax_204
            eax_204.b = eax_201 == 1
            data_715e98 = eax_204
            return eax_204
        
        int32_t eax_203
        eax_203.b = eax_201 == sub_4d4ec0(eax_201 - 1)
        data_715e98 = eax_203
        return eax_203
    case 0x7f
        data_1b8b06c = 1
        return eax_1
