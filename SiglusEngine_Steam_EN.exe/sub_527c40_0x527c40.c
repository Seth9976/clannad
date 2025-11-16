// 函数: sub_527c40
// 地址: 0x527c40
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

uint32_t eax = data_1bfdd30

if (eax u> 0x7a)
    data_1b8b06c = 1
    return eax

eax = zx.d(lookup_table_527f28[eax])
int32_t eax_15

switch (eax)
    case 0
        return sub_527960(arg1, arg2) __tailcall
    case 1
        int32_t eax_2 = data_1af4e84
        
        if (eax_2 == 0)
            sub_4ef190(eax_2, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        else if (eax_2 == 1)
            data_1b8a720 = eax_2 - 1
            return sub_414c50(eax_2 - 1) __tailcall
        
        return sub_414c50(data_1b8a720) __tailcall
    case 2
        return sub_4149e0() __tailcall
    case 3
        if (data_1311178 == 0)
            data_1606d78 = 1
            data_1606c68 = 1
        
        arg1.b = 0
        sub_420350(arg1)
        int32_t eax_7 = data_1af4e84
        
        if (eax_7 == 0)
            sub_4ef190(eax_7, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            data_1b8a734 = 0xffffffff
        else if (eax_7 == 1)
            sub_4ef190(eax_7 - 1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
        else if (eax_7 == 2)
            data_1b8a720 = eax_7 - 2
            data_1b8a734 = 0xffffffff
        
        int32_t ecx_6 = data_1b8a720
        int32_t eax_11 = data_8c4ac0.d
        
        if (ecx_6 u<= 9)
            eax_11 = ecx_6
        
        data_8c4ac0.d = eax_11
        
        if (ecx_6 u<= 9)
            eax_11 = data_1b8a734
            (&data_8c4ac0)[ecx_6 * 3]:4 = eax_11
        
        data_108f2d8 = 1
        data_108f2dc = 0
        return eax_11
    case 4
        data_8c4ac0.d = 0xffffffff
        return eax
    case 5
        int32_t eax_12 = data_8c4ac0.d
        
        if (eax_12 u<= 9)
            int32_t eax_13 =
                sub_414cb0((&data_8c4ac0)[eax_12 * 3]:8, (&data_8c4ac0)[eax_12 * 3]:0xc)
            data_715e98 = eax_13
            return eax_13
    case 6
        int32_t eax_14 = sub_414d20()
        data_715e98 = eax_14
        return eax_14
    case 7
        eax_15 = sub_414d80()
        
        if (eax_15 != 0)
            data_715e98 = 0xffffffff
            return eax_15
        
        eax = sub_414d50()
    label_527dc3:
        data_715e98 = eax
        
        if (eax != 0xffffffff)
            return eax
        
        data_715e98 = 0xfffffffe
        return eax
    case 8
        int32_t eax_16 = data_8c4ac0.d
        
        if (eax_16 u<= 9)
            int32_t eax_17 = sub_414cb0((&data_8c4ae0)[eax_16 * 3].d, (&data_8c4ae0)[eax_16 * 3]:4)
            data_715e98 = eax_17
            return eax_17
    case 9
        eax_15 = sub_414d80()
        
        if (eax_15 != 0)
            data_715e98 = 0xffffffff
            return eax_15
        
        int32_t eax_18 = data_8c4ac0.d
        
        if (eax_18 u> 9)
            eax = 0xffffffff
        else
            eax = sub_414cb0((&data_8c4ae0)[eax_18 * 3]:8, (&data_8c4ae0)[eax_18 * 3]:0xc)
        
        goto label_527dc3
    case 0xa
        if (data_1311178 == 0)
            data_1606d78 = 1
            data_1606c68 = 1
        
        arg1.b = 0
        sub_420350(arg1)
        int32_t eax_19 = data_1af4e84
        
        if (eax_19 == 0)
            sub_4ef190(eax_19, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            data_1b8a734 = 0xffffffff
        else if (eax_19 == 1)
            sub_4ef190(eax_19 - 1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
        else if (eax_19 == 2)
            data_1b8a720 = eax_19 - 2
            data_1b8a734 = 0xffffffff
        
        int32_t ecx_20 = data_1b8a720
        int32_t eax_23 = data_8c4ac0.d
        
        if (ecx_20 u<= 9)
            eax_23 = ecx_20
        
        data_8c4ac0.d = eax_23
        
        if (ecx_20 u<= 9)
            eax_23 = data_1b8a734
            (&data_8c4ac0)[ecx_20 * 3]:4 = eax_23
        
        data_108f2d8 = 1
        data_108f2dc = 1
        return eax_23
    case 0xb
        data_1b8b06c = 1
        return eax

data_715e98 = 0xffffffff
return 0xffffffff
