// 函数: sub_4fe380
// 地址: 0x4fe380
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

uint32_t eax = data_1bfdd30

if (eax s<= 0x3e8)
    if (eax == 0x3e8)
        int32_t eax_5 = data_8c4d04 + 1
        data_8c4d04 = eax_5
        data_ef0924 = eax_5
        return eax_5
    
    eax -= 0xa
    
    if (eax u<= 0x5b)
        eax = zx.d(lookup_table_4fea6c[eax])
        
        switch (eax)
            case 0
                sub_4fdb30(arg1, arg2)
                return sub_4fcc00()
            case 1
                sub_4fde20(arg1, arg2)
                return sub_4fcc00()
            case 2
                sub_4fd0f0()
                return sub_4fcc00()
    
    data_1b8b06c = 1
    return eax

if (eax s<= 0x7d0)
    int32_t var_c
    
    if (eax != 0x7d0)
        eax -= 0x3e9
        
        if (eax u<= 0xa1)
            eax = zx.d(lookup_table_4feb28[eax])
            int32_t var_8
            
            switch (eax)
                case 0
                    data_71929c = 0x49
                    data_7192a0 = 0
                    data_7192e0 = 0
                    return eax
                case 1
                    int32_t eax_6 = sub_42d560(0)
                    data_715e98 = eax_6
                    return eax_6
                case 2
                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "%%", &data_1b8a720)
                    var_8 = 0
                    var_c = 0
                    return sub_4e8000(
                        sub_4e8000(sub_42cbf0(&var_c, &var_8, 0, &var_c), data_1b8a730, 
                            data_1b8a72c, var_8, &data_704898), 
                        data_1b8a744, data_1b8a740, var_c, &data_704898)
                case 3
                    var_8 = 0
                    sub_42cbf0(&var_c, &var_8, 0, &var_c)
                    int32_t eax_12 = var_8
                    data_715e98 = eax_12
                    return eax_12
                case 4
                    var_c = 0
                    sub_42cbf0(&var_c, &var_8, 0, &var_c)
                    int32_t eax_14 = var_c
                    data_715e98 = eax_14
                    return eax_14
                case 5
                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                    sub_42d250(0)
                    data_8c4cf4 = data_1b8a720
                    data_8c4cf8 = data_1b8a734
                    return sub_42cd60(&data_8c4ca4, &data_ef08e8)
                case 6
                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                    sub_42d250(0)
                    data_8c4cf4 = data_1b8a720
                    return sub_42cd60(&data_8c4ca4, &data_ef08e8)
                case 7
                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                    sub_42d250(0)
                    data_8c4cf8 = data_1b8a720
                    return sub_42cd60(&data_8c4ca4, &data_ef08e8)
                case 8
                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
                    sub_42d250(0)
                    data_8c4cf4 += data_1b8a720
                    data_8c4cf8 += data_1b8a734
                    return sub_42cd60(&data_8c4ca4, &data_ef08e8)
                case 9
                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                    sub_42d250(0)
                    data_8c4cf4 += data_1b8a720
                    return sub_42cd60(&data_8c4ca4, &data_ef08e8)
                case 0xa
                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                    sub_42d250(0)
                    data_8c4cf8 += data_1b8a720
                    return sub_42cd60(&data_8c4ca4, &data_ef08e8)
                case 0xb
                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "%%", &data_1b8a720)
                    var_8 = 0
                    var_c = 0
                    return sub_4e8000(
                        sub_4e8000(sub_42cc20(&var_c, &var_8, 0, &var_c), data_1b8a730, 
                            data_1b8a72c, var_8, &data_704898), 
                        data_1b8a744, data_1b8a740, var_c, &data_704898)
                case 0xc
                    var_8 = 0
                    sub_42cc20(&var_c, &var_8, 0, &var_c)
                    int32_t eax_29 = var_8
                    data_715e98 = eax_29
                    return eax_29
                case 0xd
                    var_c = 0
                    sub_42cc20(&var_c, &var_8, 0, &var_c)
                    int32_t eax_31 = var_c
                    data_715e98 = eax_31
                    return eax_31
                case 0xe
                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "%%", &data_1b8a720)
                    var_8 = 0
                    var_c = 0
                    return sub_4e8000(
                        sub_4e8000(sub_42cc50(&var_c, &var_8, 0, &var_c), data_1b8a730, 
                            data_1b8a72c, var_8, &data_704898), 
                        data_1b8a744, data_1b8a740, var_c, &data_704898)
                case 0xf
                    var_8 = 0
                    var_c = 0
                    sub_42cc50(&var_c, &var_8, 0, &var_c)
                    int32_t eax_34 = var_8
                    data_715e98 = eax_34
                    return eax_34
                case 0x10
                    var_8 = 0
                    var_c = 0
                    sub_42cc50(&var_c, &var_8, 0, &var_c)
                    int32_t eax_36 = var_c
                    data_715e98 = eax_36
                    return eax_36
                case 0x11
                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "%%", &data_1b8a720)
                    var_8 = 0
                    var_c = 0
                    return sub_4e8000(
                        sub_4e8000(sub_42ccb0(&var_c, &var_8, 0, &var_c), data_1b8a730, 
                            data_1b8a72c, var_8, &data_704898), 
                        data_1b8a744, data_1b8a740, var_c, &data_704898)
                case 0x12
                    var_8 = 0
                    var_c = 0
                    sub_42ccb0(&var_c, &var_8, 0, &var_c)
                    int32_t eax_39 = var_8
                    data_715e98 = eax_39
                    return eax_39
                case 0x13
                    var_8 = 0
                    var_c = 0
                    sub_42ccb0(&var_c, &var_8, 0, &var_c)
                    int32_t eax_41 = var_c
                    data_715e98 = eax_41
                    return eax_41
                case 0x14
                    sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "%%", &data_1b8a720)
                    var_8 = 0
                    var_c = 0
                    return sub_4e8000(
                        sub_4e8000(sub_42cd30(&var_c, &var_8, 0, &var_c), data_1b8a730, 
                            data_1b8a72c, var_8, &data_704898), 
                        data_1b8a744, data_1b8a740, var_c, &data_704898)
                case 0x15
                    var_8 = 0
                    sub_42cd30(&var_c, &var_8, 0, &var_c)
                    int32_t eax_44 = var_8
                    data_715e98 = eax_44
                    return eax_44
                case 0x16
                    var_c = 0
                    sub_42cd30(&var_c, &var_8, 0, &var_c)
                    int32_t eax_46 = var_c
                    data_715e98 = eax_46
                    return eax_46
        
        data_1b8b06c = 1
        return eax
    
    char** eax_47 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$S", &data_1b8a720)
    char* edx_29 = data_1b8a73c
    int32_t ecx_26 = 0xffffffff
    char* esi = edx_29
    var_c = 0xffffffff
    
    if (esi != 0 && *esi != 0)
        while (true)
            eax_47.b = *esi
            
            if (eax_47.b u< 0x80)
            label_4fe8e8:
                
                if (eax_47.b == 0x3f)
                    eax_47 = sub_542610(&esi[1], &var_c)
                    ecx_26 = var_c
                    *esi = 0
                    edx_29 = data_1b8a73c
                    break
                
                esi = &esi[1]
            else if (eax_47.b u< 0xa0)
                if (eax_47.b u>= 0xfe)
                    goto label_4fe8e8
                
                esi = &esi[2]
            else
                if (eax_47.b u<= 0xdf || eax_47.b u>= 0xfe)
                    goto label_4fe8e8
                
                esi = &esi[2]
            
            if (*esi == 0)
                return sub_4306f0(eax_47, edx_29, data_1b8a720, 0xffffffff)
    
    return sub_4306f0(eax_47, edx_29, data_1b8a720, ecx_26)

if (eax s<= 0xbc0)
    if (eax s>= 0xbbe)
        return sub_4fdfa0(arg1, arg2)
    
    if (eax s<= 0xbba)
        if (eax s>= 0xbb8)
            sub_4fdfa0(arg1, arg2)
            return sub_4efc70()
        
        int32_t eax_50 = eax - 0x7d1
        
        if (eax == 0x7d1)
            sub_4ef190(eax_50, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            return sub_4305e0(data_1b8a720)
        
        eax = eax_50 - 1
        
        if (eax_50 == 1)
            return sub_430640()
    else if (eax s<= 0xbbd)
        return sub_4fdfa0(arg1, arg2)
    
    data_1b8b06c = 1
    return eax

eax -= 0xbc1

if (eax u> 0x5d)
    data_1b8b06c = 1
    return eax

eax = zx.d(lookup_table_4febe0[eax])

switch (eax)
    case 0
        return sub_42d030()
    case 1
        if (data_8c4ca4 != 0 && data_8c4d20 u> 0)
            eax = data_8c4d0c
            
            if (eax != data_8c4cf4)
            label_4fea04:
                data_71929c = 0x37
                data_7192a0 = 0
                data_7192e0 = 0
                return eax
            
            eax = data_8c4d14
            
            if (eax != data_8c4cf8)
                goto label_4fea04
        
        return eax
    case 2
        int32_t eax_56 = sub_42d210(0)
        int32_t ecx_33
        ecx_33.b = eax_56 != 0
        data_715e98 = ecx_33
        return eax_56
    case 3
        return sub_42d250(0)
    case 4
        data_1b8b06c = 1
        return eax
