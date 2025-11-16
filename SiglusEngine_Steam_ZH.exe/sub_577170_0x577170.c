// 函数: sub_577170
// 地址: 0x577170
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

__builtin_memcpy(arg1, arg2, 0x80)
*(arg1 + 0x80) = *(arg2 + 0x80)
*(arg1 + 0x84) = *(arg2 + 0x84)
*(arg1 + 0x88) = *(arg2 + 0x88)

if (arg1 + 0x8c != arg2 + 0x8c)
    sub_52e3c0(arg1 + 0x8c, arg2 + 0x8c, 0, 0xffffffff)

return arg1
