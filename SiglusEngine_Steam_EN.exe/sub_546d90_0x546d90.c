// 函数: sub_546d90
// 地址: 0x546d90
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0x110)
    data_20c1748 = arg1
    sub_546990()
else if (arg2 != 0x111)
    if (arg2 != 0x114)
        return 0
    
    if (arg4 == GetDlgItem(arg1, 0x4fad))
        data_20c1758 = (0xc - SendMessageA(GetDlgItem(arg1, 0x4fad), 0x400, 0, 0)) * 0x19
        sub_546760()
else if (zx.d(arg3) - 0x4eae u<= 0xc5)
    uint32_t eax_12 = zx.d(*(zx.d(arg3) + sub_541600+0xa86))
    
    switch (eax_12)
        case 0
            if (arg3 == 0x4eae)
                sub_4c10a0(eax_12, 0x4eae, arg1, &data_20c174c)
        case 1
            if (arg3 == 0x4eb9)
                sub_4c10a0(eax_12, 0x4eb9, arg1, &data_20c1750)
        case 2
            if (arg3 == 0x4ec4)
                sub_4c10a0(eax_12, 0x4ec4, arg1, &data_20c1754)
        case 3
            data_20c174c = 0
            data_20c1750 = 0
            data_20c1754 = 0
            data_20c1758 = 0xc8
            sub_546840()
        case 4
            sub_546d50()
        case 5
            data_20c174c = 1
        case 6
            data_20c174c = 0

return 1
