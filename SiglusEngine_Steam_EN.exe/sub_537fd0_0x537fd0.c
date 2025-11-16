// 函数: sub_537fd0
// 地址: 0x537fd0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

uint32_t eax_1 = data_1bfdd30 - 0x4b0

if (eax_1 u> 0x3c)
    data_1b8b06c = 1
    return eax_1

eax_1 = zx.d(lookup_table_5383f0[eax_1])

switch (eax_1)
    case 0
        return sub_454250()
    case 1
        return sub_48ceb0(eax_1, 1, 0x18, 0)
    case 2
        return sub_48ceb0(eax_1, 1, 0x18, 1)
    case 3
        return sub_48ceb0(eax_1, 0, 0x18, 0)
    case 4
        sub_48ce80(0x19, 0)
        return eax_1
    case 5
        sub_48ce80(0x19, 1)
        return eax_1
    case 6
        sub_52e070(0)
        return eax_1
    case 7
        int32_t eax_5 = data_1af4e84
        
        if (eax_5 == 0)
            sub_4ef190(eax_5, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            eax_1 = data_1b8a720
            
            if (eax_1 u<= 0x1f)
                (&data_7036ac)[eax_1] = 1
        else
            eax_1 = eax_5 - 1
            
            if (eax_5 == 1)
                data_7036a8 = 1
        
        return eax_1
    case 8
        int32_t eax_7 = data_1af4e84
        
        if (eax_7 == 0)
            sub_4ef190(eax_7, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            eax_1 = data_1b8a720
            
            if (eax_1 u<= 0x1f)
                (&data_7036ac)[eax_1] = 0
        else
            eax_1 = eax_7 - 1
            
            if (eax_7 == 1)
                data_7036a8 = eax_1
        
        return eax_1
    case 9
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        eax_1 = data_1b8a720
        
        if (eax_1 u> 0x1f)
            return eax_1
        
        (&data_7036ac)[eax_1] = 2
        return eax_1
    case 0xa
        int32_t eax_9 = data_1af4e84
        
        if (eax_9 == 0)
            sub_4ef190(eax_9, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            int32_t eax_11 = sub_45aa10(data_1b8a720)
            data_715e98 = eax_11
            return eax_11
        
        eax_1 = eax_9 - 1
        
        if (eax_9 != 1)
            return eax_1
        
        eax_1.b = data_7036a8 != eax_1
        data_715e98 = eax_1
        return eax_1
    case 0xb
        int32_t eax_12 = data_1af4e84
        
        if (eax_12 == 0)
            return sub_45be00(sub_4ef190(eax_12, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720), 
                0, data_1b8a720, 1)
        
        eax_1 = eax_12 - 1
        
        if (eax_12 == 1)
            return sub_45be00(sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720), 
                data_1b8a734, data_1b8a720, 1)
        
        return eax_1
    case 0xc
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t eax_18 = sub_45bfa0(data_1b8a720)
        data_715e98 = eax_18
        return eax_18
    case 0xd
        sub_52e070(1)
        return eax_1
    case 0xe
        return sub_45be00(eax_1, 0, 0xffffd8f0, 0)
    case 0xf
        return sub_545fe0()
    case 0x10
        int32_t eax_21 = data_7035cc
        data_715e98 = eax_21
        return eax_21
    case 0x11
        data_7035cc = 1
        return eax_1
    case 0x12
        data_7035cc = 0
        return eax_1
    case 0x13
        return sub_498b50(1)
    case 0x14
        if (data_1311178 == 0)
            data_139319c = 0
            return eax_1
        
        if (data_702fc0 == 0)
            return eax_1
        
        sub_55f390(
            sub_55f1e0(sub_55ef70(eax_1, data_72d6ac, data_719b6c, 0x61f944, 0x61f914), 
                data_72d6ac, data_719b6c, 0x61f944, 0x61f914), 
            data_72d6ac, data_719b6c, 0x61f944, 0x61f914)
        return sub_4a1e40(3)
    case 0x15
        int32_t eax_26
        eax_26.b = data_139319c != 0
        data_715e98 = eax_26
        return eax_26
    case 0x16
        data_7036a0 = 1
    case 0x17
        data_7036a0 = 0
    case 0x18
        data_7036a4 = 1
    case 0x19
        data_7036a4 = 0
    case 0x1a
        return sub_45be00(eax_1, 0, 0xffffd8ef, 0)
    case 0x1b
        data_1b8b06c = 1
        return eax_1

if (data_108f33c == 0)
    return eax_1

data_187c624 = 1
return eax_1
