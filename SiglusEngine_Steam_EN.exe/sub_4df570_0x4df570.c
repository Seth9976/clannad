// 函数: sub_4df570
// 地址: 0x4df570
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg3 == 0)
    return 0x80004003

*arg3 = 0

if (*arg2 != 0 || arg2[1] != 0 || arg2[2] != 0xc0 || arg2[3] != 0x46000000)
    return sub_4d9950(&arg1[2], &data_61d400, arg2, arg3)

*arg3 = arg1
(*(*arg1 + 4))(arg1)
return 0
