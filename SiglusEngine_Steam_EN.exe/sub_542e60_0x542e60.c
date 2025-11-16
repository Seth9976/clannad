// 函数: sub_542e60
// 地址: 0x542e60
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0x110)
    data_20c0554 = arg1
    sub_542cb0()
else if (arg2 != 0x111)
    if (arg2 != 0x114)
        return 0
    
    if (arg4 == GetDlgItem(arg1, 0x4fae))
        data_20c1520 = SendMessageA(GetDlgItem(arg1, 0x4fae), 0x400, 0, 0)
        sub_542ae0()
        return 1
    
    if (arg4 == GetDlgItem(arg1, 0x4faf))
        data_20c1524 = SendMessageA(GetDlgItem(arg1, 0x4faf), 0x400, 0, 0)
        sub_542ae0()
else if (zx.d(arg3) - 0x4f28 u<= 0x43)
    uint32_t eax_15 = zx.d(*(zx.d(arg3) + sub_53df70+0x158))
    
    switch (eax_15)
        case 0
            data_20c0558 = data_12a2978
            data_20c1520 = 7
            data_20c1524 = 3
            sub_542be0()
            sub_542ae0()
        case 1
            if (arg3 == 0x4f2b)
                sub_4c10a0(eax_15, 0x4f2b, data_20c0554, &data_20c1528)
        case 2
            sub_542e20()
        case 3
            data_20c0558 = 1
        case 4
            data_20c0558 = 0

return 1
