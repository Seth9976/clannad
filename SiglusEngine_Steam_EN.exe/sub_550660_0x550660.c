// 函数: sub_550660
// 地址: 0x550660
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg1 == 0xc)
    return *(data_20c2d04 + (arg2 << 3) + 4)

if (arg1 == 0x12)
    return *(data_20c2d0c + (arg2 << 3) + 4)

if (arg1 == 0xffffff9d)
    return *(data_20c2d14 + (arg2 << 3) + 4)

if (arg1 != 0xffffff9e)
    return 0

return *(data_20c2d1c + (arg2 << 3) + 4)
