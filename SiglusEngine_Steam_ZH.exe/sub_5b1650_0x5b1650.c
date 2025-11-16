// 函数: sub_5b1650
// 地址: 0x5b1650
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

__builtin_memcpy(arg1, arg2, 0x80)
*(arg1 + 0x80) = *(arg2 + 0x80)

if (arg1 + 0x84 != arg2 + 0x84)
    sub_52e3c0(arg1 + 0x84, arg2 + 0x84, 0, 0xffffffff)

*(arg1 + 0x9c) = *(arg2 + 0x9c)
sub_56b4c0(arg1 + 0xa0, arg2 + 0xa0)
*(arg1 + 0xac) = *(arg2 + 0xac)
int32_t eax_4
eax_4.b = *(arg2 + 0xb0)
*(arg1 + 0xb0) = eax_4.b
return arg1
