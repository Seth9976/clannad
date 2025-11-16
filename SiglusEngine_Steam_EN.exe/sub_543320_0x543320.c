// 函数: sub_543320
// 地址: 0x543320
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0x110)
    data_20c152c = arg1
    sub_543210()
else if (arg2 != 0x111)
    if (arg2 != 0x115)
        return 0
    
    if (arg4 == GetDlgItem(arg1, 0x4fae))
        LRESULT eax_7 = SendMessageA(GetDlgItem(arg1, 0x4fae), 0x400, 0, 0)
        bool cond:0_1 = data_20c1534 == 0
        data_20c1530 = eax_7
        
        if (not(cond:0_1))
            sub_543040(0xff - eax_7)
else if (zx.d(arg3) - 0x4f28 u<= 0x43)
    switch (arg3)
        case 0x4f28
            data_20c1530 = 0xff - data_12a2954
            data_20c1534 = data_12a2950
            sub_543160()
        case 0x4f4f
            sub_5432d0()
        case 0x4f6a
            data_20c1534 = 1
            sub_543040(0xff - data_20c1530)
        case 0x4f6b
            data_20c1534 = 0
            sub_543040(0xff)

return 1
