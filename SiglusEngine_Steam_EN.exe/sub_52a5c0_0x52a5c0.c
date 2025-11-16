// 函数: sub_52a5c0
// 地址: 0x52a5c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void var_150
int32_t eax_1 = __security_cookie ^ &var_150
uint32_t eax_2 = data_1bfdd30

if (eax_2 u> 0x67)
label_52b626:
    data_1b8b06c = 1
    sub_5f02dd(eax_1 ^ &var_150)
    return eax_2

eax_2 = zx.d(lookup_table_52b6a0[eax_2])
int32_t var_16c_1
LRESULT var_168_1
LRESULT var_164_1
LRESULT var_14c
uint32_t var_144
int32_t var_138
char* eax_6
LRESULT eax_29
int32_t* ecx_24
int32_t ecx_29

switch (eax_2)
    case 0
        arg1[2] = *arg2[8]
        int32_t eax_5 = sub_48f040(arg1, arg2)
        sub_5f02dd(eax_1 ^ &var_150)
        return eax_5
    case 1
        arg2[8] += 1
        sub_4e90f0(eax_2, &arg2[8], arg2[8], &var_144)
        arg2[8] += 1
        eax_6 = arg2[8]
        
        if (var_144 == 0)
        label_52a64b:
            arg2[8] = &eax_6[4]
            sub_5f02dd(eax_1 ^ &var_150)
            return &eax_6[4]
    case 2
        arg2[8] += 1
        sub_4e90f0(eax_2, &arg2[8], arg2[8], &var_144)
        arg2[8] += 1
        eax_6 = arg2[8]
        
        if (var_144 != 0)
            goto label_52a64b
        
        arg1[2] = *eax_6
        int32_t eax_9 = sub_48f040(arg1, arg2)
        sub_5f02dd(eax_1 ^ &var_150)
        return eax_9
    case 3
        arg2[8] += 1
        LRESULT eax_10 = data_1b8c884
        char* ecx_9 = arg2[8]
        var_14c = eax_10
        sub_4e8c00(eax_10, &arg2[8], ecx_9, &var_144, 0)
        arg2[8] += 2
        uint32_t eax_11 = var_144
        int32_t edx_4 = arg2[8]
        LRESULT ecx_10 = var_14c
        
        if (eax_11 s< 0 || eax_11 s>= ecx_10)
            int32_t eax_16 = edx_4 + 1 + (ecx_10 << 2)
            arg2[8] = eax_16
            sub_5f02dd(eax_1 ^ &var_150)
            return eax_16
        
        int32_t* eax_12 = edx_4 + (eax_11 << 2)
        arg2[8] = eax_12
        arg1[2] = *eax_12
        int32_t eax_14 = sub_48f040(arg1, arg2)
        sub_5f02dd(eax_1 ^ &var_150)
        return eax_14
    case 4
        int32_t eax_17 = data_1b8c884
        arg2[8] += 1
        sub_4e8c00(&var_144, &arg2[8], arg2[8], &var_144, 0)
        int32_t var_140_2 = eax_17 - 1
        char** ecx_17 = &arg2[8]
        *ecx_17 = &(*ecx_17)[1]
        eax_2 = 0
        *ecx_17 = &(*ecx_17)[1]
        int32_t edx_7 = var_140_2
        uint32_t var_148_1 = 0
        
        if (edx_7 s> 0)
            do
                *ecx_17 = &(*ecx_17)[1]
                sub_4e8c00(&var_14c, ecx_17, *ecx_17, &var_14c, 0)
                arg2[8] += 1
                ecx_17 = &arg2[8]
                int32_t* eax_20 = *ecx_17
                
                if (var_144 == var_14c)
                    arg1[2] = *eax_20
                    sub_48f040(arg1, arg2)
                    eax_2 = var_148_1
                    ecx_17 = &arg2[8]
                    edx_7 = var_140_2
                    break
                
                edx_7 = var_140_2
                *ecx_17 = &eax_20[1]
                eax_2 = var_148_1 + 1
                var_148_1 = eax_2
            while (eax_2 s< edx_7)
        
        if (eax_2 != edx_7)
            sub_5f02dd(eax_1 ^ &var_150)
            return eax_2
        
        *ecx_17 = &(*ecx_17)[2]
        eax_6 = *ecx_17
    case 5
        LRESULT* eax_26 = arg2[8]
        LRESULT esi_1 = *eax_26
        arg2[8] = &eax_26[1]
        void* eax_28 = &eax_26[1] - arg2[6]
        arg1[2] = eax_28
        eax_29 = arg1
        sub_4d1c30(eax_29, arg2[6] + eax_28, eax_29 + 0x14, 0x20)
        int32_t var_15c_3 = 0
        int32_t var_160_4 = 0
        var_164_1 = esi_1
    label_52a811:
        var_168_1 = *(eax_29 + 4)
        ecx_24 = eax_29
        var_16c_1 = *eax_29
    label_52a81a:
        int32_t eax_30 = sub_48f070(eax_29, arg2, ecx_24, var_16c_1, var_168_1, var_164_1, 0, 0)
        sub_5f02dd(eax_1 ^ &var_150)
        return eax_30
    case 6
        arg2[8] += 1
        sub_4e90f0(&var_144, &arg2[8], arg2[8], &var_144)
        arg2[8] += 1
        bool cond:2_1 = var_144 == 0
        eax_2 = arg2[8]
        var_14c = *eax_2
        ecx_29 = eax_2 + 4
        arg2[8] = ecx_29
        
        if (cond:2_1)
            sub_5f02dd(eax_1 ^ &var_150)
            return eax_2
        
    label_52a869:
        int32_t ecx_30 = ecx_29 - arg2[6]
        eax_29 = arg1
        *(eax_29 + 8) = ecx_30
        sub_4d1c30(eax_29, arg2[6] + ecx_30, eax_29 + 0x14, 0x20)
        int32_t var_15c_5 = 0
        int32_t var_160_5 = 0
        var_164_1 = var_14c
        goto label_52a811
    case 7
        arg2[8] += 1
        sub_4e90f0(&var_144, &arg2[8], arg2[8], &var_144)
        arg2[8] += 1
        bool cond:3_1 = var_144 != 0
        eax_2 = arg2[8]
        var_14c = *eax_2
        ecx_29 = eax_2 + 4
        arg2[8] = ecx_29
        
        if (not(cond:3_1))
            goto label_52a869
        
        sub_5f02dd(eax_1 ^ &var_150)
        return eax_2
    case 8
        LRESULT eax_33 = data_1b8c884
        arg2[8] += 1
        char* ecx_34 = arg2[8]
        var_14c = eax_33
        sub_4e8c00(&var_144, &arg2[8], ecx_34, &var_144, 0)
        LRESULT edx_20 = var_14c
        int32_t eax_36 = arg2[8] + 2
        void* ecx_36 = (edx_20 << 2) + 1 + eax_36
        eax_2 = var_144
        arg2[8] = ecx_36
        
        if (eax_2 s< 0 || eax_2 s>= edx_20)
            sub_5f02dd(eax_1 ^ &var_150)
            return eax_2
        
        void* ecx_37 = ecx_36 - arg2[6]
        eax_29 = *(eax_36 + (eax_2 << 2))
        arg1[2] = ecx_37
        sub_4d1c30(eax_29, arg2[6] + ecx_37, &arg1[5], 0x20)
        ecx_24 = arg1
        int32_t var_15c_7 = 0
        int32_t var_160_7 = 0
        var_164_1 = eax_29
        var_168_1 = arg1[1]
        var_16c_1 = *arg1
        goto label_52a81a
    case 9
        int32_t eax_37 = data_1b8c884
        arg2[8] += 1
        sub_4e8c00(&var_144, &arg2[8], arg2[8], &var_144, 0)
        void* ecx_40 = &arg2[8]
        *ecx_40 += 1
        *ecx_40 += 1
        LRESULT edx_25 = 0
        int32_t i_3 = eax_37 - 1
        LRESULT var_13c_1 = 0
        
        if (eax_37 - 1 s> 0)
            int32_t i
            
            do
                arg2[8] += 1
                sub_4e8c00(&var_14c, &arg2[8], arg2[8], &var_14c, 0)
                arg2[8] += 1
                LRESULT* eax_42 = arg2[8]
                edx_25 = var_13c_1
                
                if (var_144 == var_14c && edx_25 == 0)
                    edx_25 = *eax_42
                    var_13c_1 = edx_25
                
                i = i_3
                i_3 -= 1
                arg2[8] = &eax_42[1]
            while (i != 1)
            ecx_40 = &arg2[8]
        
        *ecx_40 += 2
        LRESULT* eax_44 = *ecx_40
        
        if (edx_25 == 0)
            var_13c_1 = *eax_44
            eax_44 = *ecx_40
        
        *ecx_40 = eax_44 + 5
        eax_29 = eax_44 + 5 - arg2[6]
        arg1[2] = eax_29
        sub_4d1c30(eax_29, arg2[6] + eax_29, &arg1[5], 0x20)
        ecx_24 = arg1
        int32_t var_15c_8 = 0
        int32_t var_160_10 = 0
        var_164_1 = var_13c_1
        var_168_1 = arg1[1]
        var_16c_1 = *arg1
        goto label_52a81a
    case 0xa
        int32_t eax_47 = sub_48f110(eax_2, arg2, arg1, 0, 0)
        
        if (eax_47 != 0)
            eax_47 = sub_48d1d0(&arg1[2], *(arg2[3] + 0x24), arg2[6], &arg1[2], &arg1[5])
            
            if (eax_47 != 0)
                int32_t eax_50 = sub_48f040(arg1, arg2)
                data_715e98 = 0
                sub_5f02dd(eax_1 ^ &var_150)
                return eax_50
        
        if (data_702fc0 != 0)
            sub_55f390(
                sub_55f1e0(sub_55ef70(eax_47, data_72d6ac, data_719b6c, &data_61abb4, nullptr), 
                    data_72d6ac, data_719b6c, &data_61abb4, nullptr), 
                data_72d6ac, data_719b6c, &data_61abb4, nullptr)
            eax_47 = sub_4a1e40(3)
        
        *arg2 = 1
        data_715e98 = 0
        sub_5f02dd(eax_1 ^ &var_150)
        return eax_47
    case 0xb
        int32_t eax_53 = data_1af4e84
        
        if (eax_53 == 0)
            sub_4ef190(eax_53, &arg2[8], arg2[8], U"$", &data_1b8a720)
            int32_t var_164_3 = data_1b8a720
            var_14c = 0
            int32_t var_168_3 = *arg1
            sub_4c84d0(&data_7027c0, "Seen%04d ")
        label_52ab69:
            
            if (data_702fc0 != 0)
                int32_t eax_58 = 1
                
                if (data_13184f8 == 0)
                    if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                        eax_58 = 0
                    
                    if (data_1311178 != 0 && data_13184e8:4 == 0)
                        eax_58 = 0
                    
                    if (data_1af174c == 0 && eax_58 != 0)
                        sub_55f390(
                            sub_55f1e0(
                                sub_55ef70(eax_58, data_72d6ac, data_719b6c, "JUMP", &data_7027c0), 
                                data_72d6ac, data_719b6c, "JUMP", &data_7027c0), 
                            data_72d6ac, data_719b6c, "JUMP", &data_7027c0)
                
                goto label_52ac1a
        else
            if (eax_53 == 1)
                sub_4ef190(eax_53 - 1, &arg2[8], arg2[8], "$$", &data_1b8a720)
                LRESULT eax_56 = data_1b8a734
                LRESULT var_164_2 = eax_56
                int32_t var_168_2 = data_1b8a720
                var_14c = eax_56
                int32_t var_16c_2 = *arg1
                sub_4c84d0(&data_7027c0, "Seen%04d ")
                goto label_52ab69
            
            var_14c = var_14c
        label_52ac1a:
            
            if (data_702fc0 != 0)
                int32_t eax_61 = data_719ba4
                
                if (eax_61 s> 0 && data_1af09dc != eax_61)
                    int32_t var_15c_10 = eax_61
                    sub_4c84d0(&data_7027c0, 0x61f394)
                    
                    if (data_702fc0 != 0)
                        int32_t eax_62 = 1
                        
                        if (data_13184f8 == 0)
                            if (data_13184e8:8 == 0 && (data_704870 != 0 || data_70486c != 0))
                                eax_62 = 0
                            
                            if (data_1311178 != 0 && data_13184e8:4 == 0)
                                eax_62 = 0
                            
                            if (data_1af174c == 0 && eax_62 != 0)
                                sub_55f390(
                                    sub_55f1e0(
                                        sub_55ef70(eax_62, data_72d6ac, data_719b6c, &data_7027c0, 
                                            0x61a7ec), 
                                        data_72d6ac, data_719b6c, &data_7027c0, 0x61a7ec), 
                                    data_72d6ac, data_719b6c, &data_7027c0, 0x61a7ec)
                    
                    int32_t var_15c_11 = 0x40
                    char var_110[0x104]
                    sub_4c84d0(&var_110, 0x61a814)
                    int32_t ecx_61 = data_702fc0
                    
                    if (ecx_61 != 0)
                        int32_t edx_43 = data_13184f8
                        int32_t eax_65 = 1
                        
                        if (edx_43 == 0)
                            if (data_13184e8:8 == edx_43
                                    && (data_704870 != edx_43 || data_70486c != edx_43))
                                eax_65 = 0
                            
                            if (data_1311178 != 0 && data_13184e8:4 == 0)
                                eax_65 = 0
                            
                            if (data_1af174c == 0 && eax_65 != 0)
                                sub_55ef70(&var_110, data_72d6ac, data_719b6c, 0x61a840, &var_110)
                                sub_55f1e0(&var_110, data_72d6ac, data_719b6c, 0x61a840, &var_110)
                                sub_55f390(&var_110, data_72d6ac, data_719b6c, 0x61a840, &var_110)
                                ecx_61 = data_702fc0
                                edx_43 = data_13184f8
                        
                        if (ecx_61 != 0)
                            int32_t eax_69 = 1
                            
                            if (edx_43 == 0)
                                if (data_13184e8:8 == edx_43
                                        && (data_704870 != edx_43 || data_70486c != edx_43))
                                    eax_69 = 0
                                
                                if (data_1311178 != 0 && data_13184e8:4 == 0)
                                    eax_69 = 0
                                
                                if (data_1af174c == 0 && eax_69 != 0)
                                    sub_55f390(
                                        sub_55f1e0(
                                            sub_55ef70(eax_69, data_72d6ac, data_719b6c, 0x61f3d8, 
                                                0x61a880), 
                                            data_72d6ac, data_719b6c, 0x61f3d8, 0x61a880), 
                                        data_72d6ac, data_719b6c, 0x61f3d8, 0x61a880)
                                    ecx_61 = data_702fc0
                                    edx_43 = data_13184f8
                            
                            if (ecx_61 != 0)
                                int32_t eax_72 = 1
                                
                                if (edx_43 == 0)
                                    if (data_13184e8:8 == edx_43
                                            && (data_704870 != edx_43 || data_70486c != edx_43))
                                        eax_72 = 0
                                    
                                    if (data_1311178 != 0 && data_13184e8:4 == 0)
                                        eax_72 = 0
                                    
                                    if (data_1af174c == 0 && eax_72 != 0)
                                        sub_55f390(
                                            sub_55f1e0(
                                                sub_55ef70(eax_72, data_72d6ac, data_719b6c, 
                                                    0x61a8f4, nullptr), 
                                                data_72d6ac, data_719b6c, 0x61a8f4, nullptr), 
                                            data_72d6ac, data_719b6c, 0x61a8f4, nullptr)
                    
                    data_1af09dc = data_719ba4
        
        int32_t eax_77 = sub_48e950(sub_48ef60(arg1, arg2), arg2, arg1, data_1b8a720, 0)
        
        if (eax_77 == 0)
            if (data_702fc0 != 0)
                sub_55f390(
                    sub_55f1e0(sub_55ef70(eax_77, data_72d6ac, data_719b6c, 0x61f41c, nullptr), 
                        data_72d6ac, data_719b6c, 0x61f41c, nullptr), 
                    data_72d6ac, data_719b6c, 0x61f41c, nullptr)
                eax_77 = sub_4a1e40(3)
            
            *arg2 = 1
            sub_5f02dd(eax_1 ^ &var_150)
            return eax_77
        
        LRESULT var_148_4
        LRESULT eax_79
        
        if (data_719ba4 s<= 0)
            var_148_4 = var_14c
            eax_79 = var_14c
        else
            var_148_4 = arg1[3]
            eax_79 = arg1[4]
        
        sub_48efe0(eax_79, arg2, arg1, data_1b8a720, var_14c)
        eax_2 = sub_48f040(arg1, arg2)
        
        if (data_719ba4 s> 0)
            arg1[3] = var_148_4
            eax_2 = eax_79
            arg1[4] = eax_2
        
        goto label_52afbb
    case 0xc
        int32_t eax_84 = data_1af4e84
        char** eax_86
        
        if (eax_84 == 0)
            eax_86 = sub_4ef190(eax_84, &arg2[8], arg2[8], U"$", &data_1b8a720)
            data_1b8a734 = 0xffffffff
        else
            eax_86 = eax_84 - 1
            
            if (eax_84 == 1)
                eax_86 = sub_4ef190(eax_86, &arg2[8], arg2[8], "$$", &data_1b8a720)
        
        int32_t eax_87 = sub_48f4f0(eax_86, arg2, arg1, data_1b8a720, data_1b8a734, 1, 0)
        sub_5f02dd(eax_1 ^ &var_150)
        return eax_87
    case 0xd
        char* eax_88 = sub_490110(eax_2, arg2, arg1, 0)
        data_715e98 = 0
        sub_5f02dd(eax_1 ^ &var_150)
        return eax_88
    case 0xe
        if (data_1b8c884 s> 0)
            arg2[8] += 1
            sub_52a460(arg1, arg2)
            arg2[8] += 1
        
        int32_t* eax_89 = arg2[8]
        int32_t esi_2 = *eax_89
        arg2[8] = &eax_89[1]
        void* eax_91 = &eax_89[1] - arg2[6]
        arg1[2] = eax_91
        sub_4d1c30(arg1, arg2[6] + eax_91, &arg1[5], 0x20)
        eax_2 = sub_48f070(arg1, arg2, arg1, *arg1, arg1[1], esi_2, 0, 0)
        
        if (data_1b8c884 s<= 0)
            sub_5f02dd(eax_1 ^ &var_150)
            return eax_2
        
        int32_t eax_94 = sub_55c620(sub_52a530(), 1, arg1[0xe], 1)
        sub_5f02dd(eax_1 ^ &var_150)
        return eax_94
    case 0xf
        int32_t eax_95 = data_1af4e84
        char** eax_97
        
        if (eax_95 == 0)
            eax_97 = sub_4ef190(eax_95, &arg2[8], arg2[8], U"$", &data_1b8a720)
        else
            eax_97 = eax_95 - 1
            
            if (eax_95 == 1)
                data_1b8a720 = eax_97
        
        int32_t eax_98 = sub_48f110(eax_97, arg2, arg1, 0, 0)
        
        if (eax_98 != 0)
            eax_98 = sub_48d1d0(&arg1[2], *(arg2[3] + 0x24), arg2[6], &arg1[2], &arg1[5])
            
            if (eax_98 != 0)
                sub_48f040(arg1, arg2)
                int32_t eax_101 = data_1b8a720
                data_715e98 = eax_101
                sub_5f02dd(eax_1 ^ &var_150)
                return eax_101
        
        if (data_702fc0 != 0)
            sub_55f390(
                sub_55f1e0(sub_55ef70(eax_98, data_72d6ac, data_719b6c, &data_61abb4, nullptr), 
                    data_72d6ac, data_719b6c, &data_61abb4, nullptr), 
                data_72d6ac, data_719b6c, &data_61abb4, nullptr)
            sub_4a1e40(3)
        
        *arg2 = 1
        int32_t eax_104 = data_1b8a720
        data_715e98 = eax_104
        sub_5f02dd(eax_1 ^ &var_150)
        return eax_104
    case 0x10
        char** eax_105
        int32_t ecx_108
        eax_105, ecx_108 = sub_4ef190(eax_2, &arg2[8], arg2[8], "$$@", &data_1b8a720)
        
        if (data_1b8c884 s> 0)
            eax_105 = sub_52a460(ecx_108, arg2)
        
        arg2[8] += 1
        eax_2 = sub_48f4f0(eax_105, arg2, arg1, data_1b8a720, data_1b8a734, 2, 0)
        var_14c = eax_2
        
        if (data_1b8c884 s> 0)
            sub_55c620(sub_52a530(), 1, arg1[0xe], 1)
            eax_2 = var_14c
        
        if (eax_2 != 2)
            sub_5f02dd(eax_1 ^ &var_150)
            return eax_2
        
    label_52afbb:
        bool cond:8_1 = data_7035c8 == 0
        data_1af1728 = 0
        
        if (not(cond:8_1) && data_976f94 != 0)
            eax_2 = data_976f9c
            
            if (data_12a2934 != 0)
                if (*(eax_2 + 0x1cc) != 2)
                    goto label_52b349
                
                sub_5f02dd(eax_1 ^ &var_150)
                return eax_2
            
            if (*(eax_2 + 0x1cc) == 1)
            label_52b349:
                eax_2 = sub_57fac0(0)
                
                if (eax_2 == 0 && data_1311178 == eax_2 && data_13926a4 == eax_2
                        && data_13926a0 == eax_2 && data_702fe4 == eax_2 && data_702fd8 == eax_2
                        && data_702fcc == eax_2 && data_91e8fc s< 0x80)
                    eax_2 = sub_475310()
                    
                    if (eax_2 == 0)
                        arg1[2] = arg2[8] - arg2[6]
                        char* eax_109 = sub_4977f0(6, nullptr)
                        sub_5f02dd(eax_1 ^ &var_150)
                        return eax_109
        
        sub_5f02dd(eax_1 ^ &var_150)
        return eax_2
    case 0x11
        int32_t eax_110 = data_1af4e84
        char** eax_112
        
        if (eax_110 == 0)
            eax_112 = sub_4ef190(eax_110, &arg2[8], arg2[8], U"$", &data_1b8a720)
        else
            eax_112 = eax_110 - 1
            
            if (eax_110 == 1)
                data_1b8a720 = eax_112
        
        sub_490110(eax_112, arg2, arg1, 0)
        int32_t eax_113 = data_1b8a720
        data_715e98 = eax_113
        sub_5f02dd(eax_1 ^ &var_150)
        return eax_113
    case 0x12
        char* eax_115 = sub_490540(sub_4ef190(eax_2, &arg2[8], arg2[8], "$$", &data_1b8a720), 
            data_1b8a720, &arg1[0xe], data_1b8a734, 1)
        sub_5f02dd(eax_1 ^ &var_150)
        return eax_115
    case 0x13
        int32_t eax_117 = sub_490670(sub_4ef190(eax_2, &arg2[8], arg2[8], "$S", &data_1b8a720), 
            data_1b8a720, &arg1[0xe], data_1b8a73c, 1)
        sub_5f02dd(eax_1 ^ &var_150)
        return eax_117
    case 0x14
        arg2[8] += 1
        int32_t var_134 = 0
        int32_t var_130 = 0
        int32_t var_120 = 0
        int32_t var_11c = 0
        
        if (data_1b8c884 s> 0)
            int32_t i_1 = 0
            var_14c = &arg1[0xe]
            
            do
                sub_4ef190(&var_138, &arg2[8], arg2[8], "$$", &var_138)
                int32_t eax_121 = data_1b8c884 - 1
                int32_t var_15c_16
                
                var_15c_16 = i_1 != eax_121 ? 0 : 1
                
                char* var_124
                sub_490540(eax_121, var_138, var_14c, var_124, var_15c_16)
                sub_4eef40(&var_138, 2)
                eax_2 = arg2[8]
                
                while (true)
                    char ecx_128 = *eax_2
                    
                    if (ecx_128 != 0x2c && ecx_128 != 0x20)
                        break
                    
                    eax_2 += 1
                
                i_1 += 1
                arg2[8] = eax_2
            while (i_1 s< data_1b8c884)
        
    label_52b55b:
        arg2[8] += 1
        sub_5f02dd(eax_1 ^ &var_150)
        return eax_2
    case 0x15
        arg2[8] += 1
        int32_t var_134_1 = 0
        int32_t var_130_1 = 0
        int32_t var_120_1 = 0
        char* var_11c_1 = nullptr
        
        if (data_1b8c884 s<= 0)
            goto label_52b55b
        
        int32_t i_2 = 0
        var_14c = &arg1[0xe]
        char* eax_126
        
        do
            sub_4ef190(&var_138, &arg2[8], arg2[8], "$S", &var_138)
            int32_t eax_125 = data_1b8c884 - 1
            int32_t var_15c_18
            
            var_15c_18 = i_2 != eax_125 ? 0 : 1
            
            sub_490670(eax_125, var_138, var_14c, var_11c_1, var_15c_18)
            sub_4eef40(&var_138, 2)
            eax_126 = arg2[8]
            
            while (true)
                char ecx_134 = *eax_126
                
                if (ecx_134 != 0x2c && ecx_134 != 0x20)
                    break
                
                eax_126 = &eax_126[1]
            
            i_2 += 1
            arg2[8] = eax_126
        while (i_2 s< data_1b8c884)
        
        arg2[8] += 1
        sub_5f02dd(eax_1 ^ &var_150)
        return eax_126
    case 0x16
        goto label_52b626

arg1[2] = *eax_6
int32_t eax_25 = sub_48f040(arg1, arg2)
sub_5f02dd(eax_1 ^ &var_150)
return eax_25
