// 函数: sub_4af140
// 地址: 0x4af140
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void var_110
int32_t eax_1 = __security_cookie ^ &var_110
int32_t eax_3 =
    sub_411500(sub_411500(eax_1, data_70300c, 0x1a, data_7030dc), data_70300c, 0x1b, data_7030dc)
data_703008 = 1
bool cond:0 = data_1af1724 == 0
data_1bfe2a0 = 0
data_1bfe2cc = 0
data_1bfe2d0 = 0
data_1bfe2d4 = 0
data_7030d4 = 1

if (not(cond:0))
    int32_t ecx = data_13926a8
    data_7030d8 = 1
    char* eax_4
    
    if (ecx s< 0)
        char* var_114_3 = &data_13926ac
        eax_4 = sub_4c84d0(&data_7027c0, "BG ( %s )")
    else
        sub_4a7f60(ecx, &var_110)
        void* var_114_2 = &var_110
        char* var_118_1 = &data_13926ac
        eax_4 = sub_4c84d0(&data_7027c0, "BG ( %s (%s) )")
    
    if (data_702fc0 != 0)
        eax_4 = 1
        
        if (data_13184f8 == 0)
            if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                eax_4 = nullptr
            
            if (data_1311178 != 0 && data_13184e8:4 == 0)
                eax_4 = nullptr
            
            if (data_1af174c == 0 && eax_4 != 0)
                eax_4 = sub_55f390(
                    sub_55f1e0(sub_55ef70(eax_4, data_72d6ac, data_719b6c, &data_7027c0, 0x61c0a0), 
                        data_72d6ac, data_719b6c, &data_7027c0, 0x61c0a0), 
                    data_72d6ac, data_719b6c, &data_7027c0, 0x61c0a0)
    
    data_1af1724 = 0
    sub_5f02dd(eax_1 ^ &var_110)
    return eax_4

if (data_7030bc s>= 8 && data_7030c0 s>= 8 && data_1b8a6d4 == 0)
    int32_t ecx_6 = data_7030c4
    int32_t eax_7 = data_703050
    data_7030d8 = 0
    data_1bff838 = 0
    data_1bff83c = ecx_6
    data_1bff840 = ecx_6
    data_1bff8a0 = 0xff
    data_1bff8a4 = 0xff
    data_1bff8a8 = 0
    data_1bff9a4 = 0
    data_1bff9a8 = 0
    data_1bff9ac = 0
    
    if (eax_7 s< 0)
    label_4afc4f:
        sub_4a8f70()
    label_4afc54:
        int32_t eax_90 = sub_4ae5c0()
        sub_5f02dd(eax_1 ^ &var_110)
        return eax_90
    
    if (eax_7 s>= 0x1f4)
        if (eax_7 s< 0x3e8 && eax_7 s>= 0x258 && eax_7 s>= 0x2bc && eax_7 s>= 0x320
                && eax_7 s>= 0x384 && eax_7 s< 0x398 && eax_7 s>= 0x384)
            if (eax_7 s<= 0x387)
                sub_4ae000()
                int32_t eax_89 = sub_4ae5c0()
                sub_5f02dd(eax_1 ^ &var_110)
                return eax_89
            
            if (eax_7 == 0x38e)
                sub_4ae250()
                int32_t eax_88 = sub_4ae5c0()
                sub_5f02dd(eax_1 ^ &var_110)
                return eax_88
        
        goto label_4afc4f
    
    if (eax_7 s>= 0x64)
        if (eax_7 s>= 0xc8)
            if (eax_7 s>= 0x12c)
                if (eax_7 s< 0x190 && eax_7 s< 0x140 && eax_7 - 0x12c u<= 3)
                    sub_4ae430()
                    int32_t eax_87 = sub_4ae5c0()
                    sub_5f02dd(eax_1 ^ &var_110)
                    return eax_87
            else
                int32_t eax_67
                
                if (eax_7 s< 0xdc)
                    eax_67 = eax_7 - 0xc8
                label_4af9b6:
                    
                    if (eax_67 u<= 4)
                    label_4af9bf:
                        sub_4ad7e0()
                        int32_t eax_68 = sub_4ae5c0()
                        sub_5f02dd(eax_1 ^ &var_110)
                        return eax_68
                else if (eax_7 s>= 0xf0)
                    if (eax_7 s< 0x104)
                        eax_67 = eax_7 - 0xf0
                        goto label_4af9b6
                    
                    if (eax_7 s>= 0x118)
                        if (eax_7 - 0x118 u<= 0xf)
                            switch (eax_7 + &jump_table_4afcf0[1])
                                case &lookup_table_4afe0c, &lookup_table_4afe0c[1], 
                                        &lookup_table_4afe0c[2], &lookup_table_4afe0c[3], 
                                        &lookup_table_4afe0c[4], &lookup_table_4afe0c[5], 
                                        &lookup_table_4afe0c[0xa], &lookup_table_4afe0c[0xb], 
                                        &lookup_table_4afe0c[0xc], &lookup_table_4afe0c[0xd], 
                                        &lookup_table_4afe0c[0xe], &lookup_table_4afe0c[0xf]
                                    sub_4ad610()
                                    int32_t eax_85 = sub_4ae5c0()
                                    sub_5f02dd(eax_1 ^ &var_110)
                                    return eax_85
                    else if (eax_7 - 0x104 u<= 0xa)
                        switch (eax_7)
                            case 0x104
                                sub_4aae60()
                                int32_t eax_72 = sub_4ae5c0()
                                sub_5f02dd(eax_1 ^ &var_110)
                                return eax_72
                            case 0x105
                                sub_4aafa0()
                                int32_t eax_73 = sub_4ae5c0()
                                sub_5f02dd(eax_1 ^ &var_110)
                                return eax_73
                            case 0x106
                                sub_4ab0e0()
                                int32_t eax_74 = sub_4ae5c0()
                                sub_5f02dd(eax_1 ^ &var_110)
                                return eax_74
                            case 0x107
                                sub_4ab2f0()
                                int32_t eax_75 = sub_4ae5c0()
                                sub_5f02dd(eax_1 ^ &var_110)
                                return eax_75
                            case 0x108
                                sub_4ab390()
                                int32_t eax_76 = sub_4ae5c0()
                                sub_5f02dd(eax_1 ^ &var_110)
                                return eax_76
                            case 0x109
                                sub_4ab430()
                                int32_t eax_77 = sub_4ae5c0()
                                sub_5f02dd(eax_1 ^ &var_110)
                                return eax_77
                            case 0x10a
                                sub_4ab4c0()
                                int32_t eax_78 = sub_4ae5c0()
                                sub_5f02dd(eax_1 ^ &var_110)
                                return eax_78
                            case 0x10b
                                sub_4ab550()
                                int32_t eax_79 = sub_4ae5c0()
                                sub_5f02dd(eax_1 ^ &var_110)
                                return eax_79
                            case 0x10c
                                sub_4ab5e0()
                                int32_t eax_80 = sub_4ae5c0()
                                sub_5f02dd(eax_1 ^ &var_110)
                                return eax_80
                            case 0x10d
                                sub_4ab670()
                                int32_t eax_81 = sub_4ae5c0()
                                sub_5f02dd(eax_1 ^ &var_110)
                                return eax_81
                            case 0x10e
                                sub_4ab700()
                                int32_t eax_82 = sub_4ae5c0()
                                sub_5f02dd(eax_1 ^ &var_110)
                                return eax_82
                else if (eax_7 - 0xdc u<= 0xe)
                    switch (&lookup_table_4afcdc[0x10 + eax_7])
                        case &lookup_table_4afdc8, &lookup_table_4afdc8[1], 
                                &lookup_table_4afdc8[2], &lookup_table_4afdc8[3], 
                                &lookup_table_4afdc8[4], &lookup_table_4afdc8[0xa], 
                                &lookup_table_4afdc8[0xb], &lookup_table_4afdc8[0xc], 
                                &lookup_table_4afdc8[0xd], &lookup_table_4afdc8[0xe]
                            goto label_4af9bf
        else if (eax_7 s>= 0x78)
            if (eax_7 s< 0x8c)
                if (eax_7 == 0x78)
                    sub_4a9ff0()
                    int32_t eax_46 = sub_4ae5c0()
                    sub_5f02dd(eax_1 ^ &var_110)
                    return eax_46
                
                if (eax_7 == 0x82)
                    sub_4a9a00()
                    int32_t eax_45 = sub_4ae5c0()
                    sub_5f02dd(eax_1 ^ &var_110)
                    return eax_45
            else if (eax_7 s< 0xa0)
                if (eax_7 == 0x8c)
                    sub_4a9ab0()
                    int32_t eax_50 = sub_4ae5c0()
                    sub_5f02dd(eax_1 ^ &var_110)
                    return eax_50
                
                if (eax_7 == 0x96)
                    sub_4a9950()
                    int32_t eax_49 = sub_4ae5c0()
                    sub_5f02dd(eax_1 ^ &var_110)
                    return eax_49
            else if (eax_7 s>= 0xb4)
                if (eax_7 - 0xb4 u<= 0x11)
                    switch (eax_7 + &jump_table_4afcf0[2])
                        case &lookup_table_4afdac
                            sub_4aa0a0()
                            int32_t eax_60 = sub_4ae5c0()
                            sub_5f02dd(eax_1 ^ &var_110)
                            return eax_60
                        case &lookup_table_4afdac[1]
                            sub_4aa150()
                            int32_t eax_61 = sub_4ae5c0()
                            sub_5f02dd(eax_1 ^ &var_110)
                            return eax_61
                        case &lookup_table_4afdac[5]
                            sub_4ac090()
                            int32_t eax_62 = sub_4ae5c0()
                            sub_5f02dd(eax_1 ^ &var_110)
                            return eax_62
                        case &lookup_table_4afdac[6]
                            sub_4ac150()
                            int32_t eax_63 = sub_4ae5c0()
                            sub_5f02dd(eax_1 ^ &var_110)
                            return eax_63
                        case &lookup_table_4afdac[7]
                            sub_4ac210()
                            int32_t eax_64 = sub_4ae5c0()
                            sub_5f02dd(eax_1 ^ &var_110)
                            return eax_64
                        case &lookup_table_4afdac[0xa], &lookup_table_4afdac[0xb]
                            sub_4adec0()
                            int32_t eax_65 = sub_4ae5c0()
                            sub_5f02dd(eax_1 ^ &var_110)
                            return eax_65
                        case &lookup_table_4afdac[0xe], &lookup_table_4afdac[0xf], 
                                &lookup_table_4afdac[0x10], &lookup_table_4afdac[0x11]
                            sub_4add60()
                            int32_t eax_66 = sub_4ae5c0()
                            sub_5f02dd(eax_1 ^ &var_110)
                            return eax_66
            else if (eax_7 - 0xa0 u<= 0xb)
                switch (eax_7)
                    case 0xa0, 0xa3
                        sub_4aa700()
                        int32_t eax_52 = sub_4ae5c0()
                        sub_5f02dd(eax_1 ^ &var_110)
                        return eax_52
                    case 0xa1, 0xa4
                        sub_4aa7e0()
                        int32_t eax_53 = sub_4ae5c0()
                        sub_5f02dd(eax_1 ^ &var_110)
                        return eax_53
                    case 0xa2
                        sub_4aa8c0()
                        int32_t eax_54 = sub_4ae5c0()
                        sub_5f02dd(eax_1 ^ &var_110)
                        return eax_54
                    case 0xa5
                        sub_4aad00()
                        int32_t eax_55 = sub_4ae5c0()
                        sub_5f02dd(eax_1 ^ &var_110)
                        return eax_55
                    case 0xa6
                        sub_4aadb0()
                        int32_t eax_56 = sub_4ae5c0()
                        sub_5f02dd(eax_1 ^ &var_110)
                        return eax_56
                    case 0xaa, 0xab
                        sub_4adae0()
                        int32_t eax_57 = sub_4ae5c0()
                        sub_5f02dd(eax_1 ^ &var_110)
                        return eax_57
        else if (eax_7 - 0x64 u<= 0x13)
            switch (&lookup_table_4afcdc[8 + eax_7])
                case &lookup_table_4afd48
                    sub_4a92c0()
                    int32_t eax_36 = sub_4ae5c0()
                    sub_5f02dd(eax_1 ^ &var_110)
                    return eax_36
                case &lookup_table_4afd48[1]
                    sub_4a9380()
                    int32_t eax_37 = sub_4ae5c0()
                    sub_5f02dd(eax_1 ^ &var_110)
                    return eax_37
                case &lookup_table_4afd48[2]
                    sub_4a9450()
                    int32_t eax_38 = sub_4ae5c0()
                    sub_5f02dd(eax_1 ^ &var_110)
                    return eax_38
                case &lookup_table_4afd48[0xa]
                    sub_4a9c10()
                    int32_t eax_39 = sub_4ae5c0()
                    sub_5f02dd(eax_1 ^ &var_110)
                    return eax_39
                case &lookup_table_4afd48[0xb]
                    sub_4a9ca0()
                    int32_t eax_40 = sub_4ae5c0()
                    sub_5f02dd(eax_1 ^ &var_110)
                    return eax_40
                case &lookup_table_4afd48[0xc], &lookup_table_4afd48[0xf], 
                        &lookup_table_4afd48[0x10], &lookup_table_4afd48[0x12]
                    sub_4aba30()
                    int32_t eax_41 = sub_4ae5c0()
                    sub_5f02dd(eax_1 ^ &var_110)
                    return eax_41
                case &lookup_table_4afd48[0xd], &lookup_table_4afd48[0xe], 
                        &lookup_table_4afd48[0x11], &lookup_table_4afd48[0x13]
                    sub_4abd70()
                    int32_t eax_42 = sub_4ae5c0()
                    sub_5f02dd(eax_1 ^ &var_110)
                    return eax_42
        
        goto label_4afc4f
    
    if (eax_7 s< 0x14)
        if (eax_7 u> 0x12)
            goto label_4afc4f
        
        switch (eax_7)
            case 0
                sub_4a8f30()
                int32_t eax_9 = sub_4ae5c0()
                sub_5f02dd(eax_1 ^ &var_110)
                return eax_9
            case 1, 2
                goto label_4afc54
            case 3
                data_703050 = 0x32
            label_4af3e2:
                data_1bff8a0 = 0
                data_1bff8a4 = 0xff
                data_1bff8a8 = ecx_6
                int32_t eax_10 = sub_4ae5c0()
                sub_5f02dd(eax_1 ^ &var_110)
                return eax_10
            case 4
                sub_4a9040()
                int32_t eax_11 = sub_4ae5c0()
                sub_5f02dd(eax_1 ^ &var_110)
                return eax_11
            case 5
                sub_4a90d0()
                int32_t eax_12 = sub_4ae5c0()
                sub_5f02dd(eax_1 ^ &var_110)
                return eax_12
            case 6, 7, 8, 9, 0xb, 0xc, 0xd, 0xe
                goto label_4afc4f
            case 0xa
                sub_4a9b60()
                int32_t eax_13 = sub_4ae5c0()
                sub_5f02dd(eax_1 ^ &var_110)
                return eax_13
            case 0xf, 0x10, 0x11, 0x12
            label_4af48a:
                sub_4aa400()
                int32_t eax_16 = sub_4ae5c0()
                sub_5f02dd(eax_1 ^ &var_110)
                return eax_16
    else if (eax_7 s>= 0x28)
        if (eax_7 s>= 0x3c)
            if (eax_7 s< 0x50 && eax_7 - 0x3d u<= 4)
                switch (eax_7)
                    case 0x3d
                        sub_4a9160()
                        int32_t eax_29 = sub_4ae5c0()
                        sub_5f02dd(eax_1 ^ &var_110)
                        return eax_29
                    case 0x3e
                        sub_4a9210()
                        int32_t eax_30 = sub_4ae5c0()
                        sub_5f02dd(eax_1 ^ &var_110)
                        return eax_30
                    case 0x3f
                        sub_4a9d40()
                        int32_t eax_31 = sub_4ae5c0()
                        sub_5f02dd(eax_1 ^ &var_110)
                        return eax_31
                    case 0x40
                        sub_4a9e30()
                        int32_t eax_32 = sub_4ae5c0()
                        sub_5f02dd(eax_1 ^ &var_110)
                        return eax_32
                    case 0x41
                        sub_4a9f10()
                        int32_t eax_33 = sub_4ae5c0()
                        sub_5f02dd(eax_1 ^ &var_110)
                        return eax_33
            
            goto label_4afc4f
        
        if (eax_7 - 0x28 u> 0xe)
            goto label_4afc4f
        
        switch (eax_7)
            case 0x28
                sub_4a9690()
                int32_t eax_25 = sub_4ae5c0()
                sub_5f02dd(eax_1 ^ &var_110)
                return eax_25
            case 0x29, 0x2a, 0x2b, 0x2c, 0x2e, 0x2f, 0x30, 0x31, 0x33, 0x34, 0x35
                goto label_4afc4f
            case 0x2d
                sub_4a9740()
                int32_t eax_26 = sub_4ae5c0()
                sub_5f02dd(eax_1 ^ &var_110)
                return eax_26
            case 0x32
                goto label_4af3e2
            case 0x36
                sub_4aa320()
                int32_t eax_27 = sub_4ae5c0()
                sub_5f02dd(eax_1 ^ &var_110)
                return eax_27
    else
        if (eax_7 - 0x14 u> 0x13)
            goto label_4afc4f
        
        switch (eax_7 + &jump_table_4afcbc[3])
            case &lookup_table_4afcdc, &lookup_table_4afcdc[1]
                goto label_4af48a
            case &lookup_table_4afcdc[2], &lookup_table_4afcdc[3], &lookup_table_4afcdc[4], 
                    &lookup_table_4afcdc[6], &lookup_table_4afcdc[8], &lookup_table_4afcdc[9], 
                    &lookup_table_4afcdc[0xc], &lookup_table_4afcdc[0xd]
                goto label_4afc4f
            case &lookup_table_4afcdc[5]
                sub_4a97f0()
                int32_t eax_17 = sub_4ae5c0()
                sub_5f02dd(eax_1 ^ &var_110)
                return eax_17
            case &lookup_table_4afcdc[7]
                sub_4a98a0()
                int32_t eax_18 = sub_4ae5c0()
                sub_5f02dd(eax_1 ^ &var_110)
                return eax_18
            case &lookup_table_4afcdc[0xa]
                sub_4a9530()
                int32_t eax_19 = sub_4ae5c0()
                sub_5f02dd(eax_1 ^ &var_110)
                return eax_19
            case &lookup_table_4afcdc[0xb]
                sub_4a95c0()
                int32_t eax_20 = sub_4ae5c0()
                sub_5f02dd(eax_1 ^ &var_110)
                return eax_20
            case &lookup_table_4afcdc[0xe], &lookup_table_4afcdc[0x10], &lookup_table_4afcdc[0x12]
                sub_4ab790()
                int32_t eax_21 = sub_4ae5c0()
                sub_5f02dd(eax_1 ^ &var_110)
                return eax_21
            case &lookup_table_4afcdc[0xf], &lookup_table_4afcdc[0x11], &lookup_table_4afcdc[0x13]
                sub_4ab8e0()
                int32_t eax_22 = sub_4ae5c0()
                sub_5f02dd(eax_1 ^ &var_110)
                return eax_22

data_7030d8 = 1
sub_5f02dd(eax_1 ^ &var_110)
return eax_3
