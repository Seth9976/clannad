// 函数: sub_54ea30
// 地址: 0x54ea30
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

for (int32_t i = 0; i s< 0x40; i += 1)
    int32_t nIDDlgItem = *((i << 2) + &data_63f940)
    
    if (nIDDlgItem != 0)
        WPARAM wParam
        
        if (*((((data_20c259c << 6) + i) << 2) + &data_20c25a0) == 0)
            wParam = 0
        else
            wParam = 1
        
        SendDlgItemMessageA(data_1c054f0, nIDDlgItem, 0xf1, wParam, 0)
