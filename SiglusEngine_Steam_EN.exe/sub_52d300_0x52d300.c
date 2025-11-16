// 函数: sub_52d300
// 地址: 0x52d300
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = data_1af4e84

switch (eax)
    case 0
        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        int32_t eax_1 = data_1b8a720
        
        if (eax_1 s< 0xa)
            eax_1 = 0xa
        else if (eax_1 s> 0x3e8)
            eax_1 = 0x3e8
        
        data_1b8a720 = eax_1
        data_703680 = eax_1
        data_703684 = 0
        data_703688 = 1
        return eax_1
    case 1
        data_703680 = 0
    case 2
        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$", &data_1b8a720)
        int32_t eax_2 = data_1b8a720
        
        if (eax_2 s< 0xa)
            eax_2 = 0xa
        else if (eax_2 s> 0x3e8)
            eax_2 = 0x3e8
        
        data_1b8a720 = eax_2
        data_703680 = eax_2
        int32_t eax_3 = data_1b8a734
        data_703684 = eax_3
        data_703688 = 1
        return eax_3
    case 3
        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "$$$", &data_1b8a720)
        int32_t eax_4 = data_1b8a720
        
        if (eax_4 s< 0xa)
            eax_4 = 0xa
        else if (eax_4 s> 0x3e8)
            eax_4 = 0x3e8
        
        data_1b8a720 = eax_4
        data_703680 = eax_4
        data_703684 = data_1b8a734
        eax = data_1b8a748
        data_703688 = eax

return eax
