// 函数: sub_532c30
// 地址: 0x532c30
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t* var_4 = arg1
uint32_t eax_1 = data_1bfdd30 - 0x12c

if (eax_1 u> 0x51)
    data_1b8b06c = 1
    return eax_1

eax_1 = zx.d(lookup_table_533298[eax_1])

switch (eax_1)
    case 0
        sub_5805d0()
        return sub_41fe10()
    case 1
        data_7037e4 = 1
        data_7037e0 = 1
        return eax_1
    case 2
        data_7037e4 = 0
        data_7037e0 = 0
        return eax_1
    case 3
        return sub_494b50()
    case 4
        return sub_494bf0()
    case 5
        LRESULT eax_5 = sub_48d4c0(&arg1[0xe])
        LRESULT var_10 = arg1[1]
        int32_t edx = *arg1
        arg1[3] = 0
        arg1[4] = 0
        return sub_48d590(eax_5, edx, &arg1[0xe], var_10)
    case 6
        int32_t eax_7 = data_1af4e84
        
        if (eax_7 == 0)
            sub_4ef190(eax_7, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        else if (eax_7 == 1)
            data_1b8a720 = 1
        
        int32_t eax_11 = *(arg2 + 0x20) - *(arg2 + 0x18)
        arg1[2] = eax_11
        int32_t edx_3 = *(arg2 + 0x18) + eax_11
        sub_4d1c30(eax_11, edx_3, &arg1[5], 0x20)
        return sub_48f790(eax_11, edx_3, arg1, data_1b8a720)
    case 7
        int32_t eax_13 = data_1af4e84
        
        if (eax_13 == 0)
            char** eax_16
            int32_t edx_5
            eax_16, edx_5 = sub_4ef190(eax_13, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            return sub_48f7f0(eax_16, edx_5, arg1, data_1b8a720)
        
        eax_1 = eax_13 - 1
        
        if (eax_13 == 1)
            return sub_48f7f0(eax_1, arg2, arg1, 1)
        
        return eax_1
    case 8
        int32_t eax_18 = arg1[0xe]
        data_715e98 = eax_18
        return eax_18
    case 9
        LRESULT eax_19
        int32_t edx_7
        eax_19, edx_7 = sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        return sub_48f840(eax_19, edx_7, arg1, data_1b8a720)
    case 0xa
        data_703674 = 0
        return eax_1
    case 0xb
        data_703674 = 1
        data_1af17b8 = 0
        return eax_1
    case 0xc
        int32_t eax_21 = data_1af17b8
        data_715e98 = eax_21
        return eax_21
    case 0xd
        if (data_703674 != 0 || data_7037c8 == 0)
            return eax_1
        
        data_1af17b8 = 1
        return eax_1
    case 0xe
        data_1af17b8 = 0
        return eax_1
    case 0xf
        data_70367c = 0
        return eax_1
    case 0x10
        data_70367c = 1
        return eax_1
    case 0x11
        int32_t eax_22 = data_7037d4
        data_715e98 = eax_22
        return eax_22
    case 0x12
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t eax_23 = data_1b8a720
        
        if (eax_23 s< 0)
            eax_23 = 0
        
        data_7037d4 = eax_23
        return eax_23
    case 0x13
        int32_t eax_24 = data_7037d0
        data_715e98 = eax_24
        return eax_24
    case 0x14
        data_7037d0 = 1
        return eax_1
    case 0x15
        data_7037d0 = 0
        return eax_1
    case 0x16
        int32_t eax_25 = data_7037c8
        data_715e98 = eax_25
        return eax_25
    case 0x17
        data_7037c8 = 1
        data_703008 = 1
        data_1af17b8 = 0
        data_71929c = 5
        data_7192a0 = 0
        data_7192e0 = 0
        return eax_1
    case 0x18
        data_7037c8 = 0
        data_703008 = 1
        data_1af17b8 = 0
        data_71929c = 5
        data_7192a0 = 0
        data_7192e0 = 0
        return eax_1
    case 0x19
        int32_t eax_26
        eax_26.b = data_187c600 != 0
        data_715e98 = eax_26
        return eax_26
    case 0x1a
        int32_t eax_27
        eax_27.b = data_1b8a6dc != 0
        data_715e98 = eax_27
        return eax_27
    case 0x1b
        int32_t eax_28
        eax_28.b = data_1b8a6e0 != 0
        data_715e98 = eax_28
        return eax_28
    case 0x1c
        data_703740 = 1
        data_71929c = 5
        data_7192a0 = 0
        data_7192e0 = 0
        return eax_1
    case 0x1d
        data_703740 = 0
        data_71929c = 5
        data_7192a0 = 0
        data_7192e0 = 0
        return eax_1
    case 0x1e
        data_703744 = 1
        data_71929c = 5
        data_7192a0 = 0
        data_7192e0 = 0
        return eax_1
    case 0x1f
        data_703744 = 0
        data_71929c = 5
        data_7192a0 = 0
        data_7192e0 = 0
        return eax_1
    case 0x20
        int32_t eax_29 = data_7037b8
        data_715e98 = eax_29
        return eax_29
    case 0x21
        data_7037b8 = 1
        return eax_1
    case 0x22
        data_7037b8 = 0
        return eax_1
    case 0x23
        int32_t eax_30 = data_7037bc
        data_715e98 = eax_30
        return eax_30
    case 0x24
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        eax_1 = data_1b8a720
        
        if (eax_1 u> 0x1f)
            return eax_1
        
        data_7037bc = eax_1
        return eax_1
    case 0x25
        int32_t eax_31 = data_7037c0
        data_715e98 = eax_31
        return eax_31
    case 0x26
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        eax_1 = data_1b8a720
        
        if (eax_1 u> 0x1f)
            return eax_1
        
        data_7037c0 = eax_1
        return eax_1
    case 0x27
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t eax_32
        eax_32.b = data_1b8a720 != 0
        data_7037b8 = eax_32
        return eax_32
    case 0x28
        data_70488c = 1
        return eax_1
    case 0x29
        data_70488c = 0
        return eax_1
    case 0x2a
        data_704890 = 1
        return eax_1
    case 0x2b
        data_704890 = 0
        return eax_1
    case 0x2c
        int32_t eax_33 = data_70488c
        data_715e98 = eax_33
        return eax_33
    case 0x2d
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t eax_34
        eax_34.b = data_1b8a720 != 0
        data_70488c = eax_34
        return eax_34
    case 0x2e
        int32_t eax_35 = data_704890
        data_715e98 = eax_35
        return eax_35
    case 0x2f
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t eax_36
        eax_36.b = data_1b8a720 != 0
        data_704890 = eax_36
        return eax_36
    case 0x30
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t eax_37
        eax_37.b = data_1b8a720 != 0
        data_704894 = eax_37
        return eax_37
    case 0x31
        int32_t eax_38 = data_704894
        data_715e98 = eax_38
        return eax_38
    case 0x32
        data_1b8b06c = 1
        return eax_1
