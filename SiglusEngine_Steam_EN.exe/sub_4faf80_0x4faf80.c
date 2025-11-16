// 函数: sub_4faf80
// 地址: 0x4faf80
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t result = data_1bfdd30

if (result s>= 0x3e8)
    return sub_4facf0(arg1, arg2)

switch (result)
    case 0
        int32_t eax_1 = data_1af4e84
        char** eax_4
        
        if (eax_1 == 0)
            eax_4 = sub_4ef190(eax_1, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            data_1b8a734 = 0
        else if (eax_1 == 1)
            eax_4 = sub_4ef190(eax_1 - 1, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
        else
            eax_4 = eax_1 - 2
            
            if (eax_1 == 2)
                data_1b8a720 = eax_4
                data_1b8a734 = 0
        
        return sub_492580(eax_4, 0, data_1b8a734, data_1b8a720)
    case 1
        int32_t eax_6 = data_1af4e84
        
        if (eax_6 == 0)
            arg1 = sub_4ef190(eax_6, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        else if (eax_6 == 1)
            data_1b8a720 = eax_6 - 1
        
        return sub_4925c0(arg1, data_1b8a720)
    case 2
        int32_t eax_10 = data_1af4e84
        
        if (eax_10 == 0)
            sub_4ef190(eax_10, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        else if (eax_10 == 1)
            data_1b8a720 = eax_10 - 1
            return sub_493220(eax_10 - 1)
        
        return sub_493220(data_1b8a720)
    case 3
        return sub_493280()
    case 4
        int32_t eax_16 = data_1af4e84
        
        if (eax_16 == 0)
            sub_4ef190(eax_16, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        else if (eax_16 == 1)
            data_1b8a720 = eax_16 - 1
        
        result = data_1b8a720
        
        if (result u> 3)
            return result
        
        (&data_924904)[result * 0x92] = 0
        return result * 0x248
    case 5
        data_924904 = 0
        data_924b4c = 0
        data_924d94 = 0
        data_924fdc = 0
        return result
    case 0xa
        int32_t eax_20 = data_1af4e84
        
        if (eax_20 == 0)
            sub_4ef190(eax_20, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        else if (eax_20 == 1)
            data_1b8a720 = eax_20 - 1
            return sub_492d10(eax_20 - 1, 0)
        
        return sub_492d10(data_1b8a720, 0)
    case 0xb
        result = sub_492c50()
        
        if (result == 0)
            return result
        
        int32_t var_44 = 0xffffffff
        int32_t var_40 = 0
        data_71929c = 0x38
        sub_4d1c30(result, &var_44, &data_7192a0, 0x40)
        data_7192e0 = 0
        return result
    case 0xc
        int32_t eax_25 = data_1af4e84
        
        if (eax_25 == 0)
            sub_4ef190(eax_25, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        else if (eax_25 == 1)
            data_1b8a720 = eax_25 - 1
        
        return sub_492d10(data_1b8a720, 1)
    case 0xd
        return sub_492d70(1)
    default
        data_1b8b06c = 1
        return result
