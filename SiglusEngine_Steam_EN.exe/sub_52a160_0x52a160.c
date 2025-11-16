// 函数: sub_52a160
// 地址: 0x52a160
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

int32_t eax = data_1bfdd30
int32_t eax_18

if (eax s> 0x14)
    eax_18 = eax - 0x15
    
    if (eax == 0x15)
        sub_445260()
        int32_t var_84 = 1
        data_71929c = 0x42
        sub_4d1c30(eax_18, &var_84, &data_7192a0, 0x40)
        data_7192e0 = 0
    else
        if (eax_18 == 0x3d3)
            sub_4ef190(eax_18 - 0x3d3, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
            return sub_4dece0(data_1b8a720)
        
        eax = eax_18 - 0x3d4
        
        if (eax_18 != 0x3d4)
            data_1b8b06c = 1
            return eax
        
        sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), U"$", &data_1b8a720)
        eax_18.b = data_1b8a720 != 0
        bool cond:1_1 = data_1cd450c == 0
        data_7027b8 = eax_18
        
        if (not(cond:1_1) && eax_18 == 0)
            return sub_4dea40(0)
else
    if (eax != 0x14)
        switch (eax)
            case 0
                sub_4cfdf0(sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "S$$$$", &data_1b8a720), 
                    data_1b8a728, 0x1b1bc90, 0x24)
                data_1b1bcc4 = 0
            label_52a1c7:
                data_1b1bcb4 = data_1b8a734
                data_1b1bcb8 = data_1b8a748
                data_1b1bcbc = data_1b8a75c
                int32_t eax_5 = data_1b8a770
                data_1b1bcc0 = eax_5
                data_1b1528c = 0
                sub_48ce80(0x2d, 0)
                return eax_5
            case 1
                sub_4cfdf0(sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "S$$$$", &data_1b8a720), 
                    data_1b8a728, 0x1b1bc90, 0x24)
                data_1b1bcb4 = data_1b8a734
                data_1b1bcb8 = data_1b8a748
                data_1b1bcbc = data_1b8a75c
                int32_t eax_10 = data_1b8a770
                data_1b1bcc0 = eax_10
                data_1b1bcc4 = 0
                data_1b1528c = 1
                sub_48ce80(0x2d, 0)
                return eax_10
            case 2
                sub_4cfdf0(sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "S$$$$", &data_1b8a720), 
                    data_1b8a728, 0x1b1bc90, 0x24)
                data_1b1bcc4 = 1
                goto label_52a1c7
            case 3
                sub_48ce80(0x42, 0)
                return eax
            case 4
                int32_t eax_12
                eax_12.b = data_139270c != 0xffffffff
                data_715e98 = eax_12
                return eax_12
            case 5
                int32_t eax_13 = sub_4a3d90(0)
                data_71929c = 5
                data_7192a0 = 0
                data_7192e0 = 0
                return eax_13
        
        data_1b8b06c = 1
        return eax
    
    sub_4cfdf0(sub_4ef190(eax, arg2 + 0x20, *(arg2 + 0x20), "S$$$$", &data_1b8a720), data_1b8a728, 
        0x1b1bc90, 0x24)
    data_1b1bcb4 = data_1b8a734
    data_1b1bcb8 = data_1b8a748
    data_1b1bcbc = data_1b8a75c
    eax_18 = data_1b8a770
    data_1b1bcc0 = eax_18
    data_1b1bcc4 = 0
    data_1b1528c = 2
    int32_t var_44 = 0
    data_71929c = 0x2d
    sub_4d1c30(eax_18, &var_44, &data_7192a0, 0x40)
    data_7192e0 = 0

return eax_18
