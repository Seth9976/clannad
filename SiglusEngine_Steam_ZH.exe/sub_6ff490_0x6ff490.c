// 函数: sub_6ff490
// 地址: 0x6ff490
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (*(arg1 + 0x139) == 0)
    sub_403864(arg1 + 0xb8, arg1 + 4, arg1 + 0x10, arg1 + 0x1c)
    *(arg1 + 0x139) = 1

*arg2 = *(arg1 + 0xb8)
arg2[1] = *(arg1 + 0xc8)
arg2[2] = *(arg1 + 0xd8)
arg2[3] = *(arg1 + 0xe8)
return arg2
