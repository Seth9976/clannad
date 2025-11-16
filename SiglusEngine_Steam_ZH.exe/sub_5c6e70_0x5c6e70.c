// 函数: sub_5c6e70
// 地址: 0x5c6e70
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg2 == 0)
    return 0x80004003

int32_t* edx = arg1[0xf]

if (edx == 0)
    *arg2 = 0
    return 0x80040004

arg1 = edx
jump(**edx)
