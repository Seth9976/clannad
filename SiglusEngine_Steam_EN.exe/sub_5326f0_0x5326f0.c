// 函数: sub_5326f0
// 地址: 0x5326f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t i = data_1bfdd30 - 0xc8

switch (i)
    case 0
        data_70379c = 1
        return i
    case 1
        data_70379c = 0
        return i
    case 2
        i = sub_4e8000(
            sub_4e8000(sub_4ef190(i, arg2 + 0x20, *(arg2 + 0x20), "%%", &data_1b8a720), 
                data_1b8a730, data_1b8a72c, data_131d2cc, &data_704898), 
            data_1b8a744, data_1b8a740, data_1320e58, &data_704898)
        
        if (data_1af174c != 0)
            return i
        
        data_71929c = 1
        data_7192a0 = 0
        data_7192e0 = 0
        return i
    case 3
        sub_4ef190(i, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
        return sub_4d5970(data_1b8a720, data_1b8a734) __tailcall
    case 4
        if (data_1af179c == 0)
            data_1af4e70 = 1
            
            do
                i = ShowCursor(1)
            while (i s<= 0)
        
        data_7037a0 = 1
        return i
    case 5
        if (data_1af179c == 0)
            data_1af4e70 = 0
            
            do
                i = ShowCursor(0)
            while (i s>= 0)
        
        data_7037a0 = 0
        return i
    case 6
        int32_t eax_3 = data_7037a4
        data_715e98 = eax_3
        return eax_3
    case 7
        sub_4ef190(i, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        sub_45ee40(data_1b8a720, 1)
        int32_t eax_4 = data_1b8a720
        data_7037a4 = eax_4
        return eax_4
    case 0xa
        data_7037d8 = 1
        return i
    case 0xb
        data_7037d8 = 0
        return i
    case 0xc
        sub_4ef190(i, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t eax_5
        eax_5.b = data_1b8a720 != 0
        data_7037d8 = eax_5
        return eax_5
    case 0xd
        int32_t eax_6 = data_7037d8
        data_715e98 = eax_6
        return eax_6
    case 0xf
        data_7037dc = 1
        return i
    case 0x10
        data_7037dc = 0
        return i
    case 0x11
        sub_4ef190(i, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t eax_7
        eax_7.b = data_1b8a720 != 0
        data_7037dc = eax_7
        return eax_7
    case 0x12
        int32_t eax_8 = data_7037dc
        data_715e98 = eax_8
        return eax_8
    case 0x14
        data_703794 = 1
        return i
    case 0x15
        data_703794 = 0
        return i
    case 0x16
        data_703798 = 1
        return i
    case 0x17
        data_703798 = 0
        return i
    case 0x18
        data_703790 = 1
        return i
    case 0x19
        data_703790 = 0
        return i
    case 0x1a
        data_703788 = 1
        return i
    case 0x1b
        data_703788 = 0
        return i
    case 0x1c
        int32_t eax_9 = data_7037c4
        data_715e98 = eax_9
        return eax_9
    case 0x1d
        char** eax_10 = sub_4ef190(i, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t ecx_17 = 0xfffffffe
        
        if (data_1b8a720 u<= 0x1f)
            ecx_17 = data_1b8a720
        
        data_7037c4 = ecx_17
        return eax_10
    case 0x1e
        data_70378c = 1
        return i
    case 0x1f
        data_70378c = 0
        return i
    case 0x28
        sub_4ef190(i, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t eax_11
        eax_11.b = data_1b8a720 != 0
        data_703794 = eax_11
        return eax_11
    case 0x29
        int32_t eax_12 = data_703794
        data_715e98 = eax_12
        return eax_12
    case 0x2a
        sub_4ef190(i, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t eax_13
        eax_13.b = data_1b8a720 != 0
        data_703798 = eax_13
        return eax_13
    case 0x2b
        int32_t eax_14 = data_703798
        data_715e98 = eax_14
        return eax_14
    case 0x2c
        sub_4ef190(i, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t eax_15
        eax_15.b = data_1b8a720 != 0
        data_703790 = eax_15
        return eax_15
    case 0x2d
        int32_t eax_16 = data_703790
        data_715e98 = eax_16
        return eax_16
    case 0x2e
        sub_4ef190(i, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t eax_17
        eax_17.b = data_1b8a720 != 0
        data_703788 = eax_17
        return eax_17
    case 0x2f
        int32_t eax_18 = data_703788
        data_715e98 = eax_18
        return eax_18
    case 0x30
        sub_4ef190(i, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t eax_19
        eax_19.b = data_1b8a720 != 0
        data_70378c = eax_19
        return eax_19
    case 0x31
        int32_t eax_20 = data_70378c
        data_715e98 = eax_20
        return eax_20
    case 0x32
        int32_t eax_21 = data_70379c
        data_715e98 = eax_21
        return eax_21
    case 0x33
        sub_4ef190(i, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t eax_22
        eax_22.b = data_1b8a720 != 0
        data_70379c = eax_22
        return eax_22
    case 0x34
        int32_t eax_23 = data_7037a0
        data_715e98 = eax_23
        return eax_23
    case 0x35
        sub_4ef190(i, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t ecx_32
        ecx_32.b = data_1b8a720 != 0
        return sub_45e890(ecx_32) __tailcall
    default
        data_1b8b06c = 1
        return i
