// 函数: sub_500c50
// 地址: 0x500c50
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t var_8 = arg3
uint32_t eax = data_1bfdd30

if (eax s<= 0x3e8)
    if (eax == 0x3e8)
        sub_468600(sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), arg4, 
            data_1b8a720, data_1b8a734)
        eax = data_1b8a720
        
        if (eax s>= 0 && eax s< data_7031bc)
            eax = (arg4 + (eax << 1)) * 0x650 + &data_72d6b0
            
            if (*(eax + 0x178) != 1)
                *(eax + 0x178) = 1
                *(eax + 0x2c4) = 0
                *(eax + 0x2c8) = 0
        
        return eax
    
    if (eax u<= 0x6a)
        eax = zx.d(lookup_table_50159c[eax])
        
        switch (eax)
            case 0
                sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                return sub_4659b0(data_1b8a720, arg4)
            case 1
                sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                return sub_465b70(data_1b8a720, arg4)
            case 2
                sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                return sub_465c90(data_1b8a720, arg4)
            case 3
                sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                int32_t eax_4 = sub_465dc0(data_1b8a720, arg4)
                data_715e98 = eax_4
                return eax_4
            case 4
                return sub_48ceb0(sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720), 
                    data_1b8a720, 0x44, arg4)
            case 5
                sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                return sub_465f20(data_1b8a720, arg4)
            case 6
                sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                return sub_4660b0(data_1b8a720, arg4)
            case 7
                return sub_4659f0(arg4)
            case 8
                return sub_465bb0(arg4)
            case 9
                return sub_465ce0(arg4)
            case 0xa
                int32_t eax_12 = sub_465e20(arg4)
                data_715e98 = eax_12
                return eax_12
            case 0xb
                return sub_48ceb0(eax, 0xffffffff, 0x44, arg4)
            case 0xc
                return sub_465f60(arg4)
            case 0xd
                return sub_4660f0(arg4)
    
    data_1b8b06c = 1
    return eax

int32_t var_34
char** var_30
int32_t var_2c
char** var_28
int32_t var_24
int32_t var_20
int32_t var_1c_3
int32_t var_18
char** eax_19
char** eax_21

if (eax s<= 0x7d1)
    if (eax == 0x7d1)
        eax = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
        int32_t ecx_79 = data_1b8a720
        
        if (ecx_79 s>= 0 && ecx_79 s< data_7031bc)
            int32_t eax_28 = arg4 + (ecx_79 << 1)
            
            if (*(eax_28 * 0x650 + &data_72d828) != 1)
                *(eax_28 * 0x650 + &data_72d828) = 1
                *(eax_28 * 0x650 + 0x72d974) = 0
                *(eax_28 * 0x650 + 0x72d978) = 0
            
            int32_t eax_29 = *(eax_28 * 0x650 + &data_72d6bc)
            eax = eax_29 - 1
            
            if (eax_29 == 1)
                int32_t esi_2 = *(eax_28 * 0x7a0 + 0x98bf08)
                
                if (esi_2 == 0xffffffff)
                    return sub_41d600(eax_28 * 0x650 + &data_72d8f8, 
                        *(eax_28 * 0x7a0 + &data_98bf04), esi_2 + 2, eax_28 * 0x650 + &data_72d8f8, 
                        eax_28 * 0x650 + &data_72d7fc, 5, data_1b8a734)
                
                int32_t var_14_13 = 0
                int32_t eax_32 = sub_428ac0(eax_28 * 0x650 + &data_72d8f8, 
                    eax_28 * 0x650 + &data_72d7fc, 1, esi_2, *(eax_28 * 0x650 + 0x72d734), 
                    eax_28 * 0x650 + &data_72d8f8, eax_28 * 0x650 + &data_72d7fc, 5, 0, 0, 
                    eax_28 * 0x650 + &data_72d6b0, 0, 0)
                return eax_32
        
        return eax
    
    eax -= 0x3e9
    
    if (eax u> 8)
        data_1b8b06c = 1
        return eax
    
    switch (eax)
        case 0
            int32_t ecx_46 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
            eax_19 = data_1b8a734
            int32_t var_14_1 = 0
            var_18 = 0
            var_1c_3 = 0
            var_20 = ecx_46
            var_24 = 0
            var_28 = eax_19
            var_2c = 0x50
            var_30 = eax_19
            var_34 = 5
        case 1
            int32_t ecx_51 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
            eax_19 = data_1b8a734
            int32_t var_14_2 = 0
            var_18 = 0
            var_1c_3 = 0
            var_20 = ecx_51
            var_24 = 0
            var_28 = eax_19
            var_2c = 0x50
            var_30 = eax_19
            var_34 = 7
        case 2
            int32_t ecx_54 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
            eax_19 = data_1b8a734
            int32_t var_14_3 = 0
            var_18 = 0
            var_1c_3 = 0
            var_20 = ecx_54
            var_24 = 0
            var_28 = eax_19
            var_2c = 0x50
            var_30 = eax_19
            var_34 = 4
        case 3
            int32_t ecx_57 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
            eax_19 = data_1b8a734
            int32_t var_14_4 = 0
            var_18 = 0
            var_1c_3 = 0
            var_20 = ecx_57
            var_24 = 0
            var_28 = eax_19
            var_2c = 0x50
            var_30 = eax_19
            var_34 = 6
        case 4
            int32_t ecx_60 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
            eax_19 = data_1b8a734
            int32_t var_14_5 = 0
            var_18 = 0
            var_1c_3 = 0
            var_20 = ecx_60
            var_24 = 0
            var_28 = eax_19
            var_2c = 0x50
            var_30 = eax_19
            var_34 = 8
        case 5
            int32_t ecx_63 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
            eax_21 = data_1b8a734
            int32_t var_14_6 = 0
            return sub_48ceb0(
                sub_465920(eax_21, arg4, data_1b8a720, 4, eax_21, 0x50, eax_21, 0, ecx_63, 0, 0), 
                data_1b8a720, 0x44, arg4)
        case 6
            int32_t ecx_68 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
            int32_t eax_24 = data_1b8a734
            int32_t var_14_8 = 0
            return sub_48ceb0(
                sub_465920(eax_24, arg4, data_1b8a720, 8, eax_24, 0x50, eax_24, 0, ecx_68, 0, 0), 
                data_1b8a720, 0x44, arg4)
        case 7
            int32_t ecx_73 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
            eax_19 = data_1b8a734
            int32_t var_14_10 = 0
            var_18 = 0
            var_1c_3 = 0
            var_20 = ecx_73
            var_24 = 0
            var_28 = eax_19
            var_2c = 0x3c
            var_30 = eax_19
            var_34 = 9
        case 8
            int32_t ecx_76 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
            eax_19 = data_1b8a734
            int32_t var_14_11 = 0
            var_18 = 0
            var_1c_3 = 0
            var_20 = ecx_76
            var_24 = 0
            var_28 = eax_19
            var_2c = 0x50
            var_30 = eax_19
            var_34 = 0xa
else if (eax s> 0xbb9)
    eax -= 0xbbb
    
    if (eax u> 0x6a)
        data_1b8b06c = 1
        return eax
    
    eax = zx.d(lookup_table_50168c[eax])
    int32_t var_1c_4
    int32_t var_18_1
    
    switch (eax)
        case 0
            eax_19 = sub_500bd0(arg3, arg2)
            int32_t var_14_23 = 0
        label_5013ca:
            var_18 = data_1b8a75c
            var_1c_3 = 0
            goto label_5013d2
        case 1
            eax_19 = sub_500bd0(arg3, arg2)
            int32_t var_14_24 = 0
            var_18 = data_1b8a75c
            var_1c_3 = 0
        label_5013f9:
            var_20 = arg3
            var_24 = data_1b8a748
            var_28 = data_1b8a734
            var_2c = 0x50
            var_30 = 0xffffffff
            var_34 = 8
        case 2
            eax_21 = sub_500bd0(arg3, arg2)
            int32_t var_14_25 = 0
        label_501418:
            var_18_1 = data_1b8a75c
            var_1c_4 = 0
            goto label_501420
        case 3
            eax_21 = sub_500bd0(arg3, arg2)
            int32_t var_14_26 = 0
            var_18_1 = data_1b8a75c
            var_1c_4 = 0
        label_501445:
            return sub_48ceb0(
                sub_465920(eax_21, arg4, data_1b8a720, 8, 0xffffffff, 0x50, data_1b8a734, 
                    data_1b8a748, arg3, var_1c_4, var_18_1), 
                data_1b8a720, 0x44, arg4)
        case 4
            eax_19 = sub_500bd0(arg3, arg2)
            int32_t var_14_27 = 0
            var_18 = data_1b8a75c
            var_1c_3 = 0
        label_50146c:
            var_20 = arg3
            var_24 = data_1b8a748
            var_28 = data_1b8a734
            var_2c = 0x3c
            var_30 = 0xffffffff
            var_34 = 9
        case 5
            eax_19 = sub_500bd0(arg3, arg2)
            int32_t var_14_28 = 0
            var_18 = data_1b8a75c
            var_1c_3 = 0
        label_501493:
            var_20 = arg3
            var_24 = data_1b8a748
            var_28 = data_1b8a734
            var_2c = 0x50
            var_30 = 0xffffffff
            var_34 = 0xa
        case 6
            eax_19 = sub_500bd0(arg3, arg2)
            int32_t var_14_29 = 1
            goto label_5013ca
        case 7
            eax_21 = sub_500bd0(arg3, arg2)
            int32_t var_14_30 = 1
            goto label_501418
        case 8
            eax_19 = sub_500bd0(arg3, arg2)
            int32_t var_14_31 = 0
            var_18 = data_1b8a75c
            var_1c_3 = 1
            goto label_501391
        case 9
            eax_19 = sub_500bd0(arg3, arg2)
            int32_t var_14_32 = 0
            var_18 = data_1b8a75c
            var_1c_3 = 1
        label_5013d2:
            var_20 = arg3
            var_24 = data_1b8a748
            var_28 = data_1b8a734
            var_2c = 0x50
            var_30 = 0xffffffff
            var_34 = 4
        case 0xa
            eax_19 = sub_500bd0(arg3, arg2)
            int32_t var_14_33 = 0
            var_18 = data_1b8a75c
            var_1c_3 = 1
            goto label_5013f9
        case 0xb
            eax_21 = sub_500bd0(arg3, arg2)
            int32_t var_14_34 = 0
            var_18_1 = data_1b8a75c
            var_1c_4 = 1
        label_501420:
            return sub_48ceb0(
                sub_465920(eax_21, arg4, data_1b8a720, 4, 0xffffffff, 0x50, data_1b8a734, 
                    data_1b8a748, arg3, var_1c_4, var_18_1), 
                data_1b8a720, 0x44, arg4)
        case 0xc
            eax_21 = sub_500bd0(arg3, arg2)
            int32_t var_14_35 = 0
            var_18_1 = data_1b8a75c
            var_1c_4 = 1
            goto label_501445
        case 0xd
            eax_19 = sub_500bd0(arg3, arg2)
            int32_t var_14_36 = 0
            var_18 = data_1b8a75c
            var_1c_3 = 1
            goto label_50146c
        case 0xe
            eax_19 = sub_500bd0(arg3, arg2)
            int32_t var_14_37 = 0
            var_18 = data_1b8a75c
            var_1c_3 = 1
            goto label_501493
        case 0xf
            data_1b8b06c = 1
            return eax
else if (eax == 0xbb9)
    eax_19 = sub_500bd0(arg3, arg2)
    int32_t var_14_22 = 0
    var_18 = data_1b8a75c
    var_1c_3 = 0
label_501391:
    var_20 = arg3
    var_24 = data_1b8a748
    var_28 = data_1b8a734
    var_2c = 0x50
    var_30 = 0xffffffff
    var_34 = 5
else
    eax -= 0x7d2
    
    if (eax u> 7)
        data_1b8b06c = 1
        return eax
    
    switch (eax)
        case 0
            int32_t ecx_87
            eax_19, ecx_87 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
            int32_t var_14_14 = 0
            var_18 = 0
            var_1c_3 = 0
            var_20 = ecx_87
            var_24 = 0
            var_28 = nullptr
            var_2c = data_1b8a734
            var_30 = 0xffffffff
            var_34 = 7
        case 1
            int32_t ecx_90
            eax_19, ecx_90 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
            int32_t var_14_15 = 0
            var_18 = 0
            var_1c_3 = 0
            var_20 = ecx_90
            var_24 = 0
            var_28 = nullptr
            var_2c = data_1b8a734
            var_30 = 0xffffffff
            var_34 = 4
        case 2
            int32_t ecx_93
            eax_19, ecx_93 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
            int32_t var_14_16 = 0
            var_18 = 0
            var_1c_3 = 0
            var_20 = ecx_93
            var_24 = 0
            var_28 = nullptr
            var_2c = data_1b8a734
            var_30 = 0xffffffff
            var_34 = 6
        case 3
            int32_t ecx_96
            eax_19, ecx_96 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
            int32_t var_14_17 = 0
            var_18 = 0
            var_1c_3 = 0
            var_20 = ecx_96
            var_24 = 0
            var_28 = nullptr
            var_2c = data_1b8a734
            var_30 = 0xffffffff
            var_34 = 8
        case 4
            int32_t ecx_99
            eax_21, ecx_99 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
            int32_t var_14_18 = 0
            return sub_48ceb0(
                sub_465920(eax_21, arg4, data_1b8a720, 4, 0xffffffff, data_1b8a734, nullptr, 0, 
                    ecx_99, 0, 0), 
                data_1b8a720, 0x44, arg4)
        case 5
            int32_t ecx_102
            eax_21, ecx_102 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
            int32_t var_14_19 = 0
            return sub_48ceb0(
                sub_465920(eax_21, arg4, data_1b8a720, 8, 0xffffffff, data_1b8a734, nullptr, 0, 
                    ecx_102, 0, 0), 
                data_1b8a720, 0x44, arg4)
        case 6
            int32_t ecx_105
            eax_19, ecx_105 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
            int32_t var_14_20 = 0
            var_18 = 0
            var_1c_3 = 0
            var_20 = ecx_105
            var_24 = 0
            var_28 = nullptr
            var_2c = data_1b8a734
            var_30 = 0xffffffff
            var_34 = 9
        case 7
            int32_t ecx_108
            eax_19, ecx_108 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
            int32_t var_14_21 = 0
            var_18 = 0
            var_1c_3 = 0
            var_20 = ecx_108
            var_24 = 0
            var_28 = nullptr
            var_2c = data_1b8a734
            var_30 = 0xffffffff
            var_34 = 0xa
return sub_465920(eax_19, arg4, data_1b8a720, var_34, var_30, var_2c, var_28, var_24, var_20, 
    var_1c_3, var_18)
