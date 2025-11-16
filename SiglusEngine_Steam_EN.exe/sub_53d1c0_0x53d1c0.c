// 函数: sub_53d1c0
// 地址: 0x53d1c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

void* var_c = arg1
int32_t eax = data_1bfdd30
uint32_t eax_1

if (eax s> 0xdac)
    eax_1 = eax - 0xdad
    
    if (eax_1 u<= 0x78)
        eax_1 = zx.d(lookup_table_53dc1c[eax_1])
        
        switch (eax_1)
            case 0
                data_7035c8 = 1
                return eax_1
            case 1
                data_7035c8 = 0
                return eax_1
            case 2
                data_187a5c0 = 0
                return eax_1
            case 3
                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                return sub_4110b0(data_1b8a720)
            case 4
                return sub_410e80()
            case 5
                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                return sub_411140(data_1b8a720)
            case 6
                return sub_410ef0()
            case 7
                sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
                return sub_4111d0(data_1b8a720)
            case 8
                return sub_410f60()
    
    data_1b8b06c = 1
    return eax_1

if (eax == 0xdac)
    int32_t eax_40 = data_1af4e84
    char** eax_41 = eax_40 - 1
    
    if (eax_40 == 1)
        eax_41 = sub_4ef190(eax_41, arg2 + 0x20, *(arg2 + 0x20), U"SMDB", &data_1b8a720)
    
    return sub_4eeae0(eax_41, arg2, arg1, 0xffffffff, nullptr, nullptr, data_1b8a728)

eax_1 = eax - 0xbb8

if (eax_1 u> 0xde)
    data_1b8b06c = 1
    return eax_1

eax_1 = zx.d(lookup_table_53db14[eax_1])
int32_t var_28_2
int32_t var_24_3
int32_t var_20_2
int32_t var_1c_1
char* var_1c_4
int32_t var_1c_9
int32_t eax_2
int32_t eax_7
int32_t eax_11
uint32_t esi_2

switch (eax_1)
    case 0
        eax_1 = sub_45c560(MF_BYCOMMAND)
        
        if (eax_1 u<= 0x100)
            data_715e98 = 0
            eax_2 = sub_496210(eax_1, 1, eax_1, 1)
            data_715e98 = eax_1
            return eax_2
    case 1
        eax_1 = sub_45c560(MF_GRAYED)
        esi_2 = eax_1
        
        if (esi_2 u<= 0x100)
            var_1c_1 = 1
        label_53d25a:
            int32_t eax_3 = sub_53d090(esi_2, 1, 0, var_1c_1)
            uint32_t ecx_1 = 0xffffffff
            
            if (eax_3 != 0)
                ecx_1 = esi_2
            
            data_715e98 = ecx_1
            return eax_3
    case 2
        int32_t eax_4 = sub_45c560(MF_BYCOMMAND)
        int32_t ecx_2 = 0xffffffff
        
        if (eax_4 u<= 0x100)
            ecx_2 = eax_4
        
        data_715e98 = ecx_2
        return eax_4
    case 3
        eax_1 = sub_45c560(MF_GRAYED)
        uint32_t esi_1 = eax_1
        
        if (esi_1 u<= 0x100)
            int32_t eax_5 = sub_496b50(eax_1, 1, esi_1, 0, 0)
            eax_1 = eax_5
            
            if (eax_5 != 0)
                eax_2 = eax_1 - 1
                
                if (eax_1 == 1)
                    data_715e98 = esi_1
                    return eax_2
                
                eax_1 = eax_2 - 1
                
                if (eax_2 != 1)
                    return eax_1
    case 4
        int32_t eax_6 = data_1af4e84
        
        if (eax_6 == 0)
            int32_t* var_1c_3 = &data_1b8a720
            eax_7 = sub_4ef190(eax_6, arg2 + 0x20, *(arg2 + 0x20), "$", &data_1b8a720)
        else
            eax_7 = eax_6 - 1
            
            if (eax_6 == 1)
                int32_t* var_1c_2 = &data_1b8a720
                eax_7 = sub_4ef190(eax_7, arg2 + 0x20, *(arg2 + 0x20), "$S", &data_1b8a720)
        
        var_1c_4 = data_1b8a73c
        var_20_2 = 1
    label_53d31a:
        int32_t var_24 = 1
        return sub_53cdc0(eax_7, arg2, arg1, data_1b8a720, 1, 1, var_20_2, var_1c_4)
    case 5
        int32_t eax_9 = data_1af4e84
        
        if (eax_9 == 0)
            int32_t* var_1c_6 = &data_1b8a720
            eax_7 = sub_4ef190(eax_9, arg2 + 0x20, *(arg2 + 0x20), "$", &data_1b8a720)
        else
            eax_7 = eax_9 - 1
            
            if (eax_9 == 1)
                int32_t* var_1c_5 = &data_1b8a720
                eax_7 = sub_4ef190(eax_7, arg2 + 0x20, *(arg2 + 0x20), "$S", &data_1b8a720)
        
        int32_t var_24_1 = 1
        return sub_53cdc0(eax_7, arg2, arg1, data_1b8a720, 0, 1, 1, data_1b8a73c)
    case 6
        eax_1 = sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t ecx_8 = data_1b8a720
        data_715e98 = 0
        
        if (ecx_8 u> 0x100)
            return eax_1
        
        int32_t eax_10 = sub_496210(eax_1, 1, ecx_8, 1)
        data_715e98 = eax_10
        return eax_10
    case 7
        eax_11 = sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t var_24_2 = 0
        var_28_2 = 1
    label_53d3de:
        int32_t var_2c_1 = 0
        return sub_53cdc0(eax_11, arg2, arg1, data_1b8a720, 0, 0, var_28_2, nullptr)
    case 8
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        var_24_3 = 1
    label_53d412:
        return sub_53d090(data_1b8a720, 1, 0, var_24_3)
    case 9
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        return sub_53d090(data_1b8a720, 0, 0, 1)
    case 0xa
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        return sub_53d090(data_1b8a720, 1, 1, 1)
    case 0xb
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        return sub_53d090(data_1b8a720, 0, 1, 1)
    case 0xc
        int32_t eax_15 = data_1af4e84
        int32_t eax_16 = eax_15 - 1
        
        if (eax_15 == 1)
            eax_16 = sub_4ef190(eax_16, arg2 + 0x20, *(arg2 + 0x20), U"SMDB", &data_1b8a720)
        
        return sub_53cdc0(eax_16, arg2, arg1, data_12dc5f0, 1, 1, 1, data_1b8a728)
    case 0xd
        int32_t eax_18 = data_1af4e84
        int32_t eax_19 = eax_18 - 1
        
        if (eax_18 == 1)
            eax_19 = sub_4ef190(eax_19, arg2 + 0x20, *(arg2 + 0x20), U"SMDB", &data_1b8a720)
        
        return sub_53cdc0(eax_19, arg2, arg1, data_12dc5f0, 0, 1, 1, data_1b8a728)
    case 0xe
        return sub_53cdc0(eax_1, arg2, arg1, data_12dc5f0, 1, 0, 1, nullptr)
    case 0xf
        return sub_53cdc0(eax_1, arg2, arg1, data_12dc5f0, 0, 0, 1, nullptr)
    case 0x10
        var_1c_9 = 1
    label_53d559:
        return sub_53d090(data_12dc5f0, 1, 0, var_1c_9)
    case 0x11
        return sub_53d090(data_12dc5f0, 0, 0, 1)
    case 0x12
        return sub_53d090(data_12dc5f0, 1, 1, 1)
    case 0x13
        return sub_53d090(data_12dc5f0, 0, 1, 1)
    case 0x14
        eax_1 = sub_45c560(MF_BYCOMMAND)
        
        if (eax_1 u<= 0x100)
            int32_t eax_25 = sub_53cdc0(eax_1, arg2, arg1, eax_1, 1, 0, 0, nullptr)
            data_715e98 = eax_1
            return eax_25
    case 0x15
        eax_1 = sub_45c560(MF_GRAYED)
        esi_2 = eax_1
        
        if (esi_2 u<= 0x100)
            var_1c_1 = 0
            goto label_53d25a
    case 0x16
        int32_t eax_26 = data_1af4e84
        
        if (eax_26 == 0)
            int32_t* var_1c_11 = &data_1b8a720
            eax_7 = sub_4ef190(eax_26, arg2 + 0x20, *(arg2 + 0x20), "$", &data_1b8a720)
        else
            eax_7 = eax_26 - 1
            
            if (eax_26 == 1)
                int32_t* var_1c_10 = &data_1b8a720
                eax_7 = sub_4ef190(eax_7, arg2 + 0x20, *(arg2 + 0x20), "$S", &data_1b8a720)
        
        var_1c_4 = data_1b8a73c
        var_20_2 = 0
        goto label_53d31a
    case 0x17
        int32_t eax_27 = data_1af4e84
        
        if (eax_27 == 0)
            int32_t* var_1c_13 = &data_1b8a720
            eax_7 = sub_4ef190(eax_27, arg2 + 0x20, *(arg2 + 0x20), "$", &data_1b8a720)
        else
            eax_7 = eax_27 - 1
            
            if (eax_27 == 1)
                int32_t* var_1c_12 = &data_1b8a720
                eax_7 = sub_4ef190(eax_7, arg2 + 0x20, *(arg2 + 0x20), "$S", &data_1b8a720)
        
        int32_t var_24_5 = 1
        return sub_53cdc0(eax_7, arg2, arg1, data_1b8a720, 0, 1, 0, data_1b8a73c)
    case 0x18
        int32_t var_24_6 = 0
        int32_t var_2c_8 = 0
        return sub_53cdc0(sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), $", &data_1b8a720), arg2, 
            arg1, data_1b8a720, 1, 0, 0, nullptr)
    case 0x19
        eax_11 = sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t var_24_7 = 0
        var_28_2 = 0
        goto label_53d3de
    case 0x1a
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        var_24_3 = 0
        goto label_53d412
    case 0x1b
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        return sub_53d090(data_1b8a720, 0, 0, 0)
    case 0x1c
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        return sub_53d090(data_1b8a720, 1, 1, 0)
    case 0x1d
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        return sub_53d090(data_1b8a720, 0, 1, 0)
    case 0x1e
        int32_t eax_28 = data_1af4e84
        int32_t eax_29 = eax_28 - 1
        
        if (eax_28 == 1)
            eax_29 = sub_4ef190(eax_29, arg2 + 0x20, *(arg2 + 0x20), U"SMDB", &data_1b8a720)
        
        return sub_53cdc0(eax_29, arg2, arg1, data_12dc5f0, 1, 1, 0, data_1b8a728)
    case 0x1f
        int32_t eax_31 = data_1af4e84
        int32_t eax_32 = eax_31 - 1
        
        if (eax_31 == 1)
            eax_32 = sub_4ef190(eax_32, arg2 + 0x20, *(arg2 + 0x20), U"SMDB", &data_1b8a720)
        
        return sub_53cdc0(eax_32, arg2, arg1, data_12dc5f0, 0, 1, 0, data_1b8a728)
    case 0x20
        return sub_53cdc0(eax_1, arg2, arg1, data_12dc5f0, 1, 0, 0, nullptr)
    case 0x21
        return sub_53cdc0(eax_1, arg2, arg1, data_12dc5f0, 0, 0, 0, nullptr)
    case 0x22
        var_1c_9 = 0
        goto label_53d559
    case 0x23
        return sub_53d090(data_12dc5f0, 0, 0, 0)
    case 0x24
        return sub_53d090(data_12dc5f0, 1, 1, 0)
    case 0x25
        return sub_53d090(data_12dc5f0, 0, 1, 0)
    case 0x26
        data_1b1bccc = 1
        data_71929c = 5
        data_7192a0 = 0
        data_7192e0 = 0
        return eax_1
    case 0x27
        data_1bfdd70 = 0xffffffff
        data_1b1bccc = 0
        data_1bfdd78 = 0
        return eax_1
    case 0x28
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"SMDB", &data_1b8a720)
        return sub_4a8230(1, data_1b8a728)
    case 0x29
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        return sub_4973e0(data_1b8a720)
    case 0x2a
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
        return sub_497460(data_1b8a720, data_1b8a734)
    case 0x2b
        sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
        return sub_497590(data_1b8a720, data_1b8a734)
    case 0x2c
        data_1b8b06c = 1
        return eax_1

data_715e98 = 0xffffffff
return eax_1
