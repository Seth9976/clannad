// 函数: sub_4db8f0
// 地址: 0x4db8f0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0)
    return 0x80004003

int32_t* edx = arg1[0xf]

if (edx == 0)
    *arg2 = 0
    return 0x80040004

arg1 = edx
jump(**edx)
