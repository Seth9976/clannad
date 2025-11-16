// 函数: sub_4dd2d0
// 地址: 0x4dd2d0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0)
    ReleaseCapture()
    *(arg1 + 0x6c) &= 0xffffffef
    return 0

SetCapture(*(arg1 - 0x28))
*(arg1 + 0x6c) |= 0x10
return 0
