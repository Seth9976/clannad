// 函数: sub_4f8090
// 地址: 0x4f8090
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_330
int32_t eax_1 = __security_cookie ^ &var_330
int32_t eax_2 = data_1bfdd30
uint32_t eax_3

if (eax_2 s<= 0x12f)
    if (eax_2 s>= 0x12c)
    label_4f8b26:
        uint32_t eax_75 = sub_4f1310(sub_4efc70(), arg2)
        sub_5f02dd(eax_1 ^ &var_330)
        return eax_75
    
    eax_3 = eax_2 - 0xa
    
    if (eax_3 u> 0xe7)
    label_4f8cd9:
        data_1b8b06c = 1
        sub_5f02dd(eax_1 ^ &var_330)
        return eax_3
    
    eax_3 = zx.d(lookup_table_4f8d48[eax_3])
    int32_t var_2e8
    char var_2e4[0xf0]
    
    switch (eax_3)
        case 0
            int32_t var_33c = arg1
            sub_4119a0(0x20, 0)
            var_2e8 = data_1bfdd30
            sub_42a6d0(&var_2e8)
            int32_t eax_5 = data_91e8fc
            data_91e900 = eax_5
            sub_5f02dd(eax_1 ^ &var_330)
            return eax_5
        case 1
            eax_3 = sub_4ef190(sub_4efce0(), arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            
            if (data_91e900 == 0xffffffff)
                sub_5f02dd(eax_1 ^ &var_330)
                return eax_3
            
            int32_t var_33c_1 = sub_4efc40(data_1b8a720, &var_330)
            sub_4119a0(1, 0x20)
            int32_t eax_10 = data_70300c - 1
            int32_t var_32c
            int32_t var_328
            int32_t var_324
            int32_t var_320
            int32_t var_31c
            int32_t var_318
            int32_t var_314
            int32_t var_310
            sub_4ef7c0(eax_10, 0, 0, eax_10, data_7030dc - 1, 1, 0, 0, 0, var_314, var_330, 
                var_32c, var_328, var_324, var_320, var_31c, var_318, var_310, 0, 0, 1)
            LRESULT eax_11 = sub_42a920(data_91e900)
            sub_5f02dd(eax_1 ^ &var_330)
            return eax_11
        case 2
            sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
            int32_t ecx_10 = data_1b8a720
            var_2e8 = data_1bfdd30
            eax_3 = data_1b8a748
            
            if (ecx_10 != 0)
                int32_t eax_18 = sub_4140f0(sub_42a6d0(&var_2e8), data_1b8a734, ecx_10, eax_3)
                sub_5f02dd(eax_1 ^ &var_330)
                return eax_18
        case 3
            sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            var_2e8 = data_1bfdd30
            eax_3 = data_1b8a720
            
            if (eax_3 == 0)
                goto label_4f8222
            
            sub_42a6d0(&var_2e8)
            int32_t eax_20 = sub_414170(eax_3)
            sub_5f02dd(eax_1 ^ &var_330)
            return eax_20
        case 4
            int32_t eax_21 = data_1af4e84
            int32_t var_1f4
            int32_t var_1f0
            int32_t var_1ec
            int32_t var_1e8
            int32_t var_1e4
            uint32_t var_1c8
            int32_t var_70
            
            if (eax_21 == 0)
                sub_4ef190(eax_21, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                var_1f4 = data_1b8a720
                eax_3 = data_1b8a734
                var_70 = 1
                var_1c8 = eax_3
            else if (eax_21 != 1)
                eax_3 = var_1c8
            else
                sub_4ef190(eax_21 - 1, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$", &data_1b8a720)
                int32_t edi_1 = data_1b8a720
                int32_t edx_9 = data_1b8a748
                int32_t esi_1 = data_1b8a734
                int32_t ecx_26 = data_1b8a75c
                var_1f0 = edi_1
                var_1ec = esi_1
                var_1e8 = edx_9
                var_1e4 = ecx_26
                
                if (edi_1 s> edx_9)
                    int32_t eax_24 = edi_1
                    edi_1 = edx_9
                    edx_9 = eax_24
                    var_1f0 = edi_1
                    var_1e8 = edx_9
                
                if (esi_1 s> ecx_26)
                    int32_t eax_25 = esi_1
                    esi_1 = ecx_26
                    ecx_26 = eax_25
                    var_1ec = esi_1
                    var_1e4 = ecx_26
                
                var_1f4 = data_1b8a770
                eax_3 = data_1b8a784
                int32_t var_1c4_2 = edx_9 - edi_1 + 1
                int32_t var_1c0_2 = ecx_26 - esi_1 + 1
                var_70 = 0
                var_1c8 = eax_3
            
            if (eax_3 != 0)
                var_2e8 = data_1bfdd30
                int32_t eax_30 = sub_4141a0(sub_42a6d0(&var_2e8), var_1f0, var_1f4, var_1ec, 
                    var_1e8, var_1e4, var_1c8, var_70)
                sub_5f02dd(eax_1 ^ &var_330)
                return eax_30
        case 5
            int32_t var_c8_1 = 0xffffffff
            int32_t var_88_1 = 0xff
            sub_4ef190(sub_4d1ba0(eax_3, 0x2d4, &var_2e8, 0), arg2 + 0x20, *(arg2 + 0x20), "S$", 
                &data_1b8a720)
            sub_459ba0(data_1b8a734, data_1b8a728)
            int32_t eax_32 = data_1bfdd30
            char* edx_16 = data_1b8a728
            var_2e8 = eax_32
            sub_4cfdf0(eax_32, edx_16, &var_2e4, 0x24)
            int32_t var_1c8_3 = data_1b8a734
            LRESULT eax_34 = sub_42a6d0(&var_2e8)
            sub_5f02dd(eax_1 ^ &var_330)
            return eax_34
        case 6
            int32_t var_c8_2 = 0xffffffff
            int32_t var_88_2 = 0xff
            sub_4ef190(sub_4d1ba0(eax_3, 0x2d4, &var_2e8, 0), arg2 + 0x20, *(arg2 + 0x20), "$$", 
                &data_1b8a720)
            sub_45a0d0(data_1b8a720, data_1b8a734)
            int32_t eax_36 = data_1bfdd30
            char* edx_19 = data_1b8a728
            var_2e8 = eax_36
            sub_4cfdf0(eax_36, edx_19, &var_2e4, 0x24)
            int32_t var_1f4_1 = data_1b8a734
            int32_t var_1c8_4 = data_1b8a720
            LRESULT eax_39 = sub_42a6d0(&var_2e8)
            sub_5f02dd(eax_1 ^ &var_330)
            return eax_39
        case 7
            char* eax_40 = sub_4f7dd0(sub_4efc70(), arg2)
            sub_5f02dd(eax_1 ^ &var_330)
            return eax_40
        case 8
            int32_t var_c8_3 = 0xffffffff
            int32_t var_88_3 = 0xff
            eax_3 = sub_4ef190(sub_4d1ba0(sub_4efc70(), 0x2d4, &var_2e8, 0), arg2 + 0x20, 
                *(arg2 + 0x20), "$$$$", &data_1b8a720)
            int32_t ecx_53 = data_1b8a720
            
            if (ecx_53 u> 0xf)
                sub_5f02dd(eax_1 ^ &var_330)
                return eax_3
            
            int32_t esi_2 = data_1b8a734
            int32_t edi_2 = data_1b8a748
            int32_t var_1c8_5 = ecx_53
            int32_t var_ec = esi_2
            int32_t var_e8 = edi_2
            int32_t var_e4 = data_1b8a75c
            int32_t var_78 = 1
            int32_t eax_46
            int32_t edx_22
            
            if (ecx_53 u> 0x20 || (&data_976b50)[ecx_53 * 8] == 0)
                edx_22 = data_70300c
                eax_46 = data_7030dc
            else
                edx_22 = (&data_976b58)[ecx_53 * 8]
                eax_46 = (&data_976b5c)[ecx_53 * 8]
            
            int32_t var_1c4_3 = 0
            int32_t var_1c0_3 = 0
            int32_t var_1bc = edx_22 - 1
            int32_t var_1b8 = eax_46 - 1
            
            if (ecx_53 s>= 0)
                sub_413750(eax_46 - 1, 0, 0, edx_22 - 1, eax_46 - 1, ecx_53, 0xffffffff, 0, 0, 0, 
                    0, 1, esi_2.b, edi_2, data_1b8a75c, var_88_3, 0)
            
            var_2e8 = data_1bfdd30
            LRESULT eax_49 = sub_42a6d0(&var_2e8)
            sub_5f02dd(eax_1 ^ &var_330)
            return eax_49
        case 9
            sub_4ef190(sub_4efc70(), arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            int32_t eax_51 = data_1b8a720
            
            if (eax_51 s< 0)
                eax_51 = 0
            else if (eax_51 s>= 0x20)
                eax_51 = 0x1f
            
            data_1b8a720 = eax_51
            data_1b8a594 = eax_51
            int32_t eax_52 = data_131310c
            data_1b8a590 = 0
            data_1b8a598 = 0
            data_1b8a59c = eax_52
            data_71929c = 0x35
            data_7192a0 = 0
            data_7192e0 = 0
            sub_5f02dd(eax_1 ^ &var_330)
            return eax_52
        case 0xa
            sub_4ef190(sub_4efc70(), arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            int32_t eax_54 = data_1b8a720
            
            if (eax_54 s< 0)
                eax_54 = 0
            else if (eax_54 s>= 0x20)
                eax_54 = 0x1f
            
            data_1b8a720 = eax_54
            data_1b8a594 = eax_54
            int32_t eax_55 = data_131310c
            data_1b8a590 = 1
            data_1b8a598 = 0
            data_1b8a59c = eax_55
            data_71929c = 0x35
            data_7192a0 = 0
            data_7192e0 = 0
            sub_5f02dd(eax_1 ^ &var_330)
            return eax_55
        case 0xb
            sub_4d1ba0(sub_4efc70(), 0x2d4, &var_2e8, 0)
            int32_t eax_57 = data_1af4e84
            int32_t var_c8_4 = 0xffffffff
            int32_t var_88_4 = 0xff
            
            if (eax_57 == 0)
                sub_4ef190(eax_57, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$", &data_1b8a720)
                eax_3 = 0xff
                data_1b8a798 = 0xff
            else if (eax_57 != 1)
                eax_3 = data_1b8a798
            else
                sub_4ef190(eax_57 - 1, arg2 + 0x20, *(arg2 + 0x20), "$$$$$$$", &data_1b8a720)
                eax_3 = data_1b8a798
            
            int32_t ecx_66 = data_1b8a748
            
            if (ecx_66 u> 0xf)
                sub_5f02dd(eax_1 ^ &var_330)
                return eax_3
            
            int32_t edx_28 = data_1b8a720
            char var_340_3 = (data_1b8a784).b
            char var_344_3 = (data_1b8a770).b
            char var_348_4 = (data_1b8a75c).b
            int32_t var_34c_4 = data_1b8a734
            
            if (data_1bfdd30 != 0x22)
                sub_413db0(eax_3, edx_28, ecx_66, var_34c_4, var_348_4, var_344_3, var_340_3, 
                    eax_3.b)
            else
                sub_413cf0(eax_3, edx_28, ecx_66, var_34c_4, var_348_4, var_344_3, var_340_3, eax_3)
            
            var_2e8 = data_1bfdd30
            int32_t var_1c8_6 = data_1b8a748
            int32_t var_1c4_4 = data_1b8a720
            int32_t var_1c0_4 = data_1b8a734
            int32_t var_ec_1 = data_1b8a75c
            int32_t var_e8_1 = data_1b8a770
            int32_t var_e4_1 = data_1b8a784
            int32_t var_88_5 = data_1b8a798
            LRESULT eax_68 = sub_42a6d0(&var_2e8)
            sub_5f02dd(eax_1 ^ &var_330)
            return eax_68
        case 0xc
            goto label_4f8a13
        case 0xd
        label_4f8a60:
            eax_3 = sub_4f5130(arg1, arg2)
            
            if (data_1af1724 != 0)
                sub_5f02dd(eax_1 ^ &var_330)
                return eax_3
            
            int32_t eax_71 = sub_4efce0()
            sub_5f02dd(eax_1 ^ &var_330)
            return eax_71
        case 0xe
        label_4f8a8b:
            sub_4efce0()
            int32_t eax_72 = sub_4f5e70()
            sub_5f02dd(eax_1 ^ &var_330)
            return eax_72
        case 0xf
            goto label_4f8cc0
        case 0x10
        label_4f8aab:
            arg1 = sub_4efc70()
        label_4f8ab2:
            char** eax_73 = sub_4f21d0(arg1, arg2)
            sub_5f02dd(eax_1 ^ &var_330)
            return eax_73
        case 0x11
            goto label_4f8ab2
        case 0x12
        label_4f8ad2:
            uint32_t eax_74 = sub_4f0b60(sub_4efc70(), arg2)
            sub_5f02dd(eax_1 ^ &var_330)
            return eax_74
        case 0x13
            goto label_4f8cd9
    
label_4f8222:
    
    if (data_702fc0 == 0)
        sub_5f02dd(eax_1 ^ &var_330)
        return eax_3
    
    sub_55f390(
        sub_55f1e0(sub_55ef70(eax_3, data_72d6ac, data_719b6c, 0x61ef6c, 0x61ef4c), data_72d6ac, 
            data_719b6c, 0x61ef6c, 0x61ef4c), 
        data_72d6ac, data_719b6c, 0x61ef6c, 0x61ef4c)
    int32_t eax_16 = sub_4a1e40(3)
    sub_5f02dd(eax_1 ^ &var_330)
    return eax_16

if (eax_2 s<= 0x259)
    if (eax_2 s>= 0x258)
    label_4f8cc0:
        uint32_t eax_87 = sub_4efdd0(sub_4efc70(), arg2)
        sub_5f02dd(eax_1 ^ &var_330)
        return eax_87
    
    eax_3 = eax_2 - 0x140
    
    if (eax_3 u> 0xb6)
        goto label_4f8cd9
    
    eax_3 = zx.d(lookup_table_4f8e68[eax_3])
    
    switch (eax_3)
        case 0
            goto label_4f8b26
        case 1
        label_4f8b46:
            int32_t eax_76 = sub_4f2660(sub_4efc70(), arg2)
            sub_5f02dd(eax_1 ^ &var_330)
            return eax_76
        case 2
        label_4f8b66:
            int32_t eax_77 = sub_4f2860(sub_4efc70(), arg2)
            sub_5f02dd(eax_1 ^ &var_330)
            return eax_77
        case 3
        label_4f8b86:
            LRESULT eax_78 = sub_4f2ea0(sub_4efc70(), arg2)
            sub_5f02dd(eax_1 ^ &var_330)
            return eax_78
        case 4
        label_4f8ba6:
            LRESULT eax_79 = sub_4f3150(sub_4efc70(), arg2)
            sub_5f02dd(eax_1 ^ &var_330)
            return eax_79
        case 5
        label_4f8bc6:
            int32_t eax_80 = sub_4f3820(sub_4efc70(), arg2)
            sub_5f02dd(eax_1 ^ &var_330)
            return eax_80
        case 6
        label_4f8be6:
            int32_t eax_81 = sub_4f3be0(sub_4efc70(), arg2)
            sub_5f02dd(eax_1 ^ &var_330)
            return eax_81
        case 7
        label_4f8c06:
            LRESULT eax_82 = sub_4f3fd0(sub_4efc70(), arg2)
            sub_5f02dd(eax_1 ^ &var_330)
            return eax_82
        case 8
        label_4f8c26:
            LRESULT eax_83 = sub_4f4250(sub_4efc70(), arg2)
            sub_5f02dd(eax_1 ^ &var_330)
            return eax_83
        case 9
        label_4f8c46:
            LRESULT eax_84 = sub_4f4670(sub_4efc70(), arg2)
            sub_5f02dd(eax_1 ^ &var_330)
            return eax_84
        case 0xa
            LRESULT eax_69 = sub_4f2c00(sub_4efc70(), arg2)
            sub_5f02dd(eax_1 ^ &var_330)
            return eax_69
        case 0xb
        label_4f8c66:
            int32_t eax_85 = sub_4f4aa0(sub_4efc70(), arg2)
            sub_5f02dd(eax_1 ^ &var_330)
            return eax_85
        case 0xc
        label_4f8c86:
            int32_t eax_86 = sub_4f4ec0(sub_4efc70(), arg2)
            sub_5f02dd(eax_1 ^ &var_330)
            return eax_86
        case 0xd
            goto label_4f8cd9
else if (eax_2 s<= 0x41b)
    if (eax_2 s>= 0x41a)
    label_4f8a13:
        int32_t eax_70 = sub_4f7a00(sub_4efc70(), arg2)
        sub_5f02dd(eax_1 ^ &var_330)
        return eax_70
    
    eax_3 = eax_2 - 0x26c
    
    if (eax_3 u> 0xb4)
        goto label_4f8cd9
    
    eax_3 = zx.d(lookup_table_4f8f28[eax_3])
    
    switch (eax_3)
        case 0
            goto label_4f8cc0
        case 1
            goto label_4f8cd9
else if (eax_2 s<= 0x52b)
    if (eax_2 s>= 0x528)
        goto label_4f8b26
    
    eax_3 = eax_2 - 0x41c
    
    if (eax_3 u> 0xfb)
        goto label_4f8cd9
    
    eax_3 = zx.d(lookup_table_4f9000[eax_3])
    
    switch (eax_3)
        case 0
            goto label_4f8a60
        case 1
            goto label_4f8a8b
        case 2
            goto label_4f8cc0
        case 3
            goto label_4f8aab
        case 4
            goto label_4f8ab2
        case 5
            goto label_4f8ad2
        case 6
            goto label_4f8b26
        case 7
            goto label_4f8cd9
else if (eax_2 s> 0x641)
    eax_3 = eax_2 - 0x654
    
    if (eax_3 u> 0xb4)
        goto label_4f8cd9
    
    eax_3 = zx.d(lookup_table_4f91dc[eax_3])
    
    switch (eax_3)
        case 0
            goto label_4f8cc0
        case 1
            goto label_4f8cd9
else
    if (eax_2 s>= 0x640)
        goto label_4f8cc0
    
    eax_3 = eax_2 - 0x53c
    
    if (eax_3 u> 0xa2)
        goto label_4f8cd9
    
    eax_3 = zx.d(lookup_table_4f9130[eax_3])
    
    switch (eax_3)
        case 0
            goto label_4f8b26
        case 1
            goto label_4f8b46
        case 2
            goto label_4f8b66
        case 3
            goto label_4f8b86
        case 4
            goto label_4f8ba6
        case 5
            goto label_4f8bc6
        case 6
            goto label_4f8be6
        case 7
            goto label_4f8c06
        case 8
            goto label_4f8c26
        case 9
            goto label_4f8c46
        case 0xa
            goto label_4f8c66
        case 0xb
            goto label_4f8c86
        case 0xc
            goto label_4f8cd9
