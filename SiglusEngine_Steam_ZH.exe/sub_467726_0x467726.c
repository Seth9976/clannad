// 函数: sub_467726
// 地址: 0x467726
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*(arg1 + 0x61) |= 0x80
*(arg1 + 0x11e) = zx.w(arg2)

if (arg3 != 1)
    *(arg1 + 0x5c) &= 0x7f
else
    *(arg1 + 0x5c) |= 0x80

uint16_t ecx
ecx.b = *(arg1 + 0x116)

if (ecx.b == 2)
    *(arg1 + 0x11b) = 4

if (ecx.b == 0 && *(arg1 + 0x117) u>= 8)
    *(arg1 + 0x11b) = 2

return arg1
