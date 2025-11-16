// 函数: sub_4fb9e0
// 地址: 0x4fb9e0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t ecx = data_1bfdd30

if (ecx u> 0x54)
    data_1b8b06c = 1
    return 

uint32_t eax = zx.d(lookup_table_4fc294[ecx])
int32_t var_c
char var_5
char** eax_30
int32_t ebx

switch (eax)
    case 0
        sub_42a500(0)
        return 
    case 1
        int32_t eax_2 = data_1af4e84
        
        if (eax_2 == 0)
            sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            sub_42a760(data_1b8a720)
            return 
        
        if (eax_2 != 1)
            return 
        
        sub_42a760(eax_2)
        return 
    case 2
        int32_t eax_6 = data_1af4e84
        
        if (eax_6 == 0)
            sub_4ef190(eax_6, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            sub_42a820(data_1b8a720)
            return 
        
        if (eax_6 != 1)
            return 
        
        sub_42a820(eax_6)
        return 
    case 3
        data_715e98 = data_91e8fc
        return 
    case 4
        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        sub_42a920(data_1b8a720)
        return 
    case 5
        data_7035d4 = 0
        return 
    case 6
        data_7035d4 = 1
        return 
    case 7
        data_7035d4 = 2
        return 
    case 8
        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$%%", &data_1b8a720)
        int32_t eax_12 = data_1b8a720
        int32_t ecx_14 = 0
        int32_t esi = 0
        
        if (eax_12 u<= 0x20)
            eax_12 <<= 5
            
            if (*(eax_12 + &data_976b50) != 0)
                ecx_14 = *(eax_12 + &data_976b58)
                esi = *(eax_12 + &data_976b5c)
        
        sub_4e8000(sub_4e8000(eax_12, data_1b8a744, data_1b8a740, ecx_14, &data_704898), 
            data_1b8a758, data_1b8a754, esi, &data_704898)
        return 
    case 9
        int32_t eax_15 = data_1af4e84
        uint32_t var_18
        uint32_t var_14
        int32_t var_10
        
        if (eax_15 == 0)
            sub_4ef190(eax_15, arg2 + 0x20, *(arg2 + 0x20), "$$$%%%", &data_1b8a720)
            int32_t eax_26 = sub_4e8000(
                sub_4e8000(
                    sub_413e60(&var_c, data_1b8a720, data_1b8a748, data_1b8a734, &var_c, &var_10, 
                        &var_14, &var_18), 
                    data_1b8a76c, data_1b8a768, var_c, &data_704898), 
                data_1b8a780, data_1b8a77c, var_10, &data_704898)
            sub_4e8000(eax_26, data_1b8a794, data_1b8a790, var_14, &data_704898)
            return 
        
        if (eax_15 != 1)
            return 
        
        sub_4ef190(eax_15 - 1, arg2 + 0x20, *(arg2 + 0x20), "$$$%%%%", &data_1b8a720)
        int32_t eax_20 = sub_4e8000(
            sub_4e8000(
                sub_413e60(&var_c, data_1b8a720, data_1b8a748, data_1b8a734, &var_c, &var_10, 
                    &var_14, &var_18), 
                data_1b8a76c, data_1b8a768, var_c, &data_704898), 
            data_1b8a780, data_1b8a77c, var_10, &data_704898)
        sub_4e8000(sub_4e8000(eax_20, data_1b8a794, data_1b8a790, var_14, &data_704898), 
            data_1b8a7a8, data_1b8a7a4, var_18, &data_704898)
        return 
    case 0xa
        data_70383c = 1
        return 
    case 0xb
        int32_t eax_28 = data_1af4e84
        
        if (eax_28 == 0)
            eax_30 = sub_4ef190(eax_28, arg2 + 0x20, *(arg2 + 0x20), "$$$$", &data_1b8a720)
        else
            eax_30 = eax_28 - 1
            
            if (eax_28 == 1)
                data_1b8a720 = eax_30
                data_1b8a734 = eax_30
                data_1b8a748 = data_976b58 - 1
                eax_30 = data_976b5c - 1
                data_1b8a75c = eax_30
        
        sub_412830(eax_30, data_1b8a734, data_1b8a720, data_1b8a748, data_1b8a75c, 0)
        return 
    case 0xc
        int32_t eax_35 = data_1af4e84
        int32_t var_28_1
        
        if (eax_35 == 0)
            eax_30 = sub_4ef190(eax_35, arg2 + 0x20, *(arg2 + 0x20), "$$$$", &data_1b8a720)
            var_28_1 = 1
        else
            eax_30 = eax_35 - 1
            
            if (eax_35 != 1)
                var_28_1 = 1
            else
                data_1b8a720 = eax_30
                data_1b8a734 = eax_30
                data_1b8a748 = data_976b58
                eax_30 = data_976b5c
                data_1b8a75c = eax_30
                var_28_1 = 1
        
        sub_412830(eax_30, data_1b8a734, data_1b8a720, data_1b8a748, data_1b8a75c, var_28_1)
        return 
    case 0xd
        if (ecx == 0x3c)
            ebx.b = 0
            var_c.b = ebx.b
        else if (ecx == 0x3d)
            ebx.b = 1
            var_c.b = 0
        else if (ecx != 0x40)
            ebx.b = var_5
        else
            ebx.b = 1
            var_c.b = ebx.b
        
        char** eax_38
        int32_t edx_21
        eax_38, edx_21 = sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        BOOL ecx_40 = data_1b8a720
        
        if (ecx_40 s>= 0)
            edx_21.b = ebx.b
            sub_48adc0(eax_38, edx_21, ecx_40, var_c.b)
        
        sub_4fb900()
        return 
    case 0xe
        if (ecx == 0x3e)
            ebx:1.b = 0
            ebx.b = 0
            var_c.b = ebx.b
        else if (ecx == 0x3f)
            ebx:1.b = 1
            ebx.b = 0
            var_c.b = ebx.b
        else if (ecx != 0x41)
            ebx:1.b = var_5
            ebx.b = var_c.b
        else
            ebx:1.b = 1
            ebx.b = 1
            var_c.b = ebx.b
        
        arg2.b = ebx:1.b
        sub_48adc0(eax, arg2, 0, var_c.b)
        
        if (data_8c4ca4 != 0)
            sub_42bc60(&data_8c4ca4, &data_ef08e8)
            sub_42bd40(&data_ef08e8)
            data_8c4ca4 = 0
        
        data_13926ac = 0
        data_1af1724 = 0
        sub_491d60()
        sub_463a10(0, 0)
        sub_49c660(0)
        
        if (ebx.b != 0)
            int32_t eax_40 = data_131310c
            data_907ef0 = 0
            data_1372da4 = 0
            data_907ee4 = 0
            data_907eec = eax_40
            data_907ee8 = 0
        
        if (ebx:1.b != 0)
            sub_542980(0xffffffff)
            void* eax_41 = &data_8fcb20
            int32_t i_2 = 0x40
            int32_t i
            
            do
                *eax_41 = 0
                eax_41 += 0x2d0
                i = i_2
                i_2 -= 1
            while (i != 1)
            i_2.b = 1
            sub_57fcf0(i_2, 1)
            void* eax_42 = &data_f90c00
            int32_t i_3 = 0x10
            int32_t i_1
            
            do
                *(eax_42 - 0x3920) = 0
                eax_42 += 0xe480
                *(eax_42 - 0xe480) = 0
                *(eax_42 - 0xab60) = 0
                *(eax_42 - 0x7240) = 0
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
            data_1333e48 = 1
            data_1af178c = i_3
            data_13130b8 = 1
        
        data_7192e0 = 0
        data_7192a0 = 0
        data_71929c = 5
        sub_4fb900()
        return 
    case 0xf
        sub_412700(sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$$", &data_1b8a720), 
            data_1b8a720, data_1b8a734, data_1b8a748, data_1b8a75c)
        sub_4fb820()
        return 
    case 0x10
        int32_t eax_46 = data_1af4e84
        char** eax_49
        
        if (eax_46 == 0)
            eax_49 = sub_4ef190(eax_46, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
            data_1b8a75c = 0
            data_1b8a770 = 0
        else if (eax_46 == 1)
            eax_49 = sub_4ef190(eax_46 - 1, arg2 + 0x20, *(arg2 + 0x20), "$$$$", &data_1b8a720)
            data_1b8a770 = 0
        else
            eax_49 = eax_46 - 2
            
            if (eax_46 == 2)
                eax_49 = sub_4ef190(eax_49, arg2 + 0x20, *(arg2 + 0x20), "$$$$$", &data_1b8a720)
        
        sub_4993f0(sub_4993a0(eax_49, data_1b8a75c, data_1b8a720, data_1b8a770), data_1b8a748, 
            data_1b8a734, data_1b8a75c, data_1b8a770)
        return 
    case 0x11
        int32_t eax_52 = data_1af4e84
        char** eax_55
        
        if (eax_52 == 0)
            eax_55 = sub_4ef190(eax_52, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            data_1b8a734 = 0
            data_1b8a748 = 0
        else if (eax_52 == 1)
            eax_55 = sub_4ef190(eax_52 - 1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
            data_1b8a748 = 0
        else
            eax_55 = eax_52 - 2
            
            if (eax_52 == 2)
                eax_55 = sub_4ef190(eax_55, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
        
        sub_4993a0(eax_55, data_1b8a734, data_1b8a720, data_1b8a748)
        return 
    case 0x12
        int32_t eax_57 = data_1af4e84
        char** eax_60
        
        if (eax_57 == 0)
            eax_60 = sub_4ef190(eax_57, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            data_1b8a734 = 0
            data_1b8a748 = 0
        else if (eax_57 == 1)
            eax_60 = sub_4ef190(eax_57 - 1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
            data_1b8a748 = 0
        else
            eax_60 = eax_57 - 2
            
            if (eax_57 == 2)
                eax_60 = sub_4ef190(eax_60, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
        
        sub_499360(eax_60, data_1b8a734, data_1b8a720, data_1b8a748)
        return 
    case 0x13
        int32_t eax_62 = data_1af4e84
        char** eax_65
        
        if (eax_62 == 0)
            eax_65 = sub_4ef190(eax_62, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
            data_1b8a748 = 0
            data_1b8a75c = 0
        else if (eax_62 == 1)
            eax_65 = sub_4ef190(eax_62 - 1, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
            data_1b8a75c = 0
        else
            eax_65 = eax_62 - 2
            
            if (eax_62 == 2)
                eax_65 = sub_4ef190(eax_65, arg2 + 0x20, *(arg2 + 0x20), "$$$$", &data_1b8a720)
        
        sub_4993f0(eax_65, data_1b8a734, data_1b8a720, data_1b8a748, data_1b8a75c)
        return 
    case 0x14
        sub_4994c0()
        return 
    case 0x15
        data_1b8b06c = 1
        return 
