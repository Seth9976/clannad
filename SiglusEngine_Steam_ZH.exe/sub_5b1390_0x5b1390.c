// 函数: sub_5b1390
// 地址: 0x5b1390
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edx = arg2
__builtin_memcpy(arg1, edx, 0x80)
*(arg1 + 0x80) = *(edx + 0x80)

if (arg1 + 0x84 != edx + 0x84)
    sub_52e3c0(arg1 + 0x84, edx + 0x84, 0, 0xffffffff)
    edx = arg2

*(arg1 + 0x9c) = *(edx + 0x9c)
__builtin_memcpy(arg1 + 0xa0, edx + 0xa0, 0x80)
*(arg1 + 0x120) = *(edx + 0x120)
*(arg1 + 0x124) = *(edx + 0x124)
*(arg1 + 0x128) = *(edx + 0x128)

if (arg1 + 0x12c != edx + 0x12c)
    sub_52e3c0(arg1 + 0x12c, edx + 0x12c, 0, 0xffffffff)
    edx = arg2

if (arg1 + 0x144 != edx + 0x144)
    sub_52e3c0(arg1 + 0x144, edx + 0x144, 0, 0xffffffff)
    edx = arg2

void* edx_2

if (edx == 0xfffffea4)
    edx_2 = nullptr
else
    edx_2 = edx + 0x160

sub_5b1750(arg1 + 0x160, edx_2)
sub_5b14a0(arg1 + 0x214, arg2 + 0x214)
*(arg1 + 0x2c8) = *(arg2 + 0x2c8)
return arg1
