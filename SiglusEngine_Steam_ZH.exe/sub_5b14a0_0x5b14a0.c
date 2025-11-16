// 函数: sub_5b14a0
// 地址: 0x5b14a0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

void* edx = arg2
__builtin_memcpy(arg1, edx, 0x80)
*(arg1 + 0x80) = *(edx + 0x80)

if (arg1 + 0x84 != edx + 0x84)
    sub_52e3c0(arg1 + 0x84, edx + 0x84, 0, 0xffffffff)
    edx = arg2

*(arg1 + 0x9c) = *(edx + 0x9c)
*(arg1 + 0xa0) = *(edx + 0xa0)
*(arg1 + 0xb0) = *(edx + 0xb0)
return arg1
