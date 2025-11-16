// 函数: sub_54e930
// 地址: 0x54e930
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0x10)
    EndDialog(data_1c054f4, 0)
else
    if (arg2 == 0x110)
        data_1c054f4 = arg1
        sub_54e830()
        return 1
    
    if (arg2 != 0x111)
        return 0
    
    if (arg3 == 0x4f4f)
        EndDialog(data_1c054f4, 0)
    else
        int32_t esi_1 = 0
        uint32_t i = zx.d(arg3)
        
        while (i != *((esi_1 << 2) + &data_612410))
            esi_1 += 1
            
            if (esi_1 s>= 9)
                return 1
        
        int32_t nIDDlgItem = *((esi_1 << 2) + &data_612410)
        
        if (i == nIDDlgItem)
            (&data_13184d8)[esi_1] =
                sx.d(SendDlgItemMessageA(data_1c054f4, nIDDlgItem, 0xf2, 0, 0)) & 1
        
        if (esi_1 == 8)
            sub_54e7f0()
            return esi_1 - 7

return 1
