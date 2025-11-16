// 函数: sub_5c8650
// 地址: 0x5c8650
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0)
    ReleaseCapture()
    *(arg1 + 0x6c) &= 0xffffffef
    return 0

SetCapture(*(arg1 - 0x28))
*(arg1 + 0x6c) |= 0x10
return 0
