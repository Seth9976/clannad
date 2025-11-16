// 函数: sub_529b20
// 地址: 0x529b20
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

uint32_t eax = data_1bfdd30

if (eax u> 0xe)
    data_1b8b06c = 1
    return eax

eax = zx.d(lookup_table_529c84[eax])

switch (eax)
    case 0
        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        return sub_4a1e40(data_1b8a720)
    case 1
        int32_t eax_2 = data_976378
        data_715e98 = eax_2
        return eax_2
    case 2
        int32_t eax_3 = data_1af4e84
        
        if (eax_3 == 0)
            sub_4ef190(eax_3, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            return sub_4a2190(data_1b8a720, 0)
        
        eax = eax_3 - 1
        
        if (eax_3 != 1)
            return eax
        
        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
        return sub_4a2190(data_1b8a720, data_1b8a734)
    case 3
        int32_t eax_7 = data_1af4e84
        
        if (eax_7 == 0)
            sub_4ef190(eax_7, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            return sub_4a2190(0xff, data_1b8a720)
        
        if (eax_7 == 1)
            return sub_4a2190(0xff, 0)
        
        return eax_7 - 1
    case 4
        int32_t eax_11 = data_1af4e84
        
        if (eax_11 == 0)
            sub_4ef190(eax_11, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            return sub_4a2190(0, data_1b8a720)
        
        if (eax_11 == 1)
            return sub_4a2190(0, 0)
        
        return eax_11 - 1
    case 5
        data_1b8b06c = 1
        return eax
