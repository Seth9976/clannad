// 函数: sub_49af80
// 地址: 0x49af80
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 u> 7 || arg2 u> 1)
    return 

arg1 = (&data_8d02b4)[(arg2 + (arg3 << 1)) * 0xb20]

if (arg1 == 2)
    (&data_8d02b4)[(arg2 + (arg3 << 1)) * 0xb20] = 1
label_49afdb:
    arg1 = arg4
    
    if (arg1 s< 0 || arg1 s>= *((arg2 + (arg3 << 1)) * 0x2c80 + 0x8d2f18))
        arg1 = *((arg2 + (arg3 << 1)) * 0x2c80 + 0x8d2f18) - 1
    
    *((arg2 + (arg3 << 1)) * 0x2c80 + 0x8d2f20) = arg1
    return 

if (arg1 == 1)
label_49afc8:
    
    if (arg1 != 4)
        goto label_49afdb
    
    goto label_49afcd

if (arg1 == 4)
label_49afcd:
    (&data_8d02b4)[(arg2 + (arg3 << 1)) * 0xb20] = 3
    goto label_49afdb

if (arg1 == 3)
    goto label_49afc8

if (arg1 == 6 || arg1 == 5)
    return sub_49c620(arg3, arg2) __tailcall
