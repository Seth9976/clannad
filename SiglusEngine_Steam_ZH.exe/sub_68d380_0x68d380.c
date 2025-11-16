// 函数: sub_68d380
// 地址: 0x68d380
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1[0x1d] u>= 8)
    j__free(arg1[0x18])

arg1[0x1d] = 7
arg1[0x1c] = 0
arg1[0x18].w = 0

if (arg1[0x17] u>= 8)
    j__free(arg1[0x12])

arg1[0x17] = 7
arg1[0x16] = 0
arg1[0x12].w = 0

if (arg1[0x11] u>= 8)
    j__free(arg1[0xc])

arg1[0x11] = 7
arg1[0x10] = 0
arg1[0xc].w = 0

if (arg1[0xb] u>= 8)
    j__free(arg1[6])

arg1[0xb] = 7
arg1[0xa] = 0
arg1[6].w = 0

if (arg1[5] u>= 8)
    j__free(*arg1)

arg1[5] = 7
arg1[4] = 0
*arg1 = 0
return 0
