// 函数: sub_54c360
// 地址: 0x54c360
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0x110)
    data_20c21c4 = arg1
    sub_54bab0()
else if (arg2 != 0x111)
    if (arg2 != 0x115)
        return 0
    
    if (arg4 == GetDlgItem(arg1, 0x4fae))
        LRESULT eax_7 = SendMessageA(GetDlgItem(arg1, 0x4fae), 0x400, 0, 0)
        data_20c21c8 = eax_7
        sub_54b730(0, 0xff - eax_7)
        return 1
    
    if (arg4 == GetDlgItem(arg1, 0x4faf))
        LRESULT eax_11 = SendMessageA(GetDlgItem(arg1, 0x4faf), 0x400, 0, 0)
        data_20c21cc = eax_11
        sub_54b730(1, 0xff - eax_11)
        return 1
    
    if (arg4 == GetDlgItem(arg1, 0x4fb0))
        LRESULT eax_15 = SendMessageA(GetDlgItem(arg1, 0x4fb0), 0x400, 0, 0)
        data_20c21d0 = eax_15
        sub_54b730(2, 0xff - eax_15)
        return 1
    
    if (arg4 == GetDlgItem(arg1, 0x4fb1))
        LRESULT eax_19 = SendMessageA(GetDlgItem(arg1, 0x4fb1), 0x400, 0, 0)
        data_20c21d4 = eax_19
        sub_54b730(3, 0xff - eax_19)
else if (zx.d(arg3) - 0x4eae u<= 0xa1)
    uint32_t eax_23 = zx.d(*(zx.d(arg3) + sub_547700+0x12))
    
    switch (eax_23)
        case 0
            if (arg3 == 0x4eae)
                sub_4c10a0(eax_23, 0x4eae, data_20c21c4, &data_20c21ec)
        case 1
            if (arg3 == 0x4eb9)
                sub_4c10a0(eax_23, 0x4eb9, data_20c21c4, &data_20c21f0)
        case 2
            if (arg3 == 0x4ec4)
                sub_4c10a0(eax_23, 0x4ec4, data_20c21c4, &data_20c21f4)
        case 3
            if (arg3 == 0x4ec8)
                sub_4c10a0(eax_23, 0x4ec8, data_20c21c4, &data_20c21f8)
        case 4
            sub_54c260()

return 1
