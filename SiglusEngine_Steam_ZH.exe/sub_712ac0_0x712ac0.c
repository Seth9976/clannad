// 函数: sub_712ac0
// 地址: 0x712ac0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1 + 4 != arg2 + 4)
    sub_541b40(arg1 + 4, arg2 + 4, 0, 0xffffffff)

if (arg1 + 0x1c != arg2 + 0x1c)
    sub_541b40(arg1 + 0x1c, arg2 + 0x1c, 0, 0xffffffff)

if (arg1 + 0x34 != arg2 + 0x34)
    sub_541b40(arg1 + 0x34, arg2 + 0x34, 0, 0xffffffff)

if (arg1 + 0x4c != arg2 + 0x4c)
    sub_541b40(arg1 + 0x4c, arg2 + 0x4c, 0, 0xffffffff)

*(arg1 + 0x64) = *(arg2 + 0x64)
return arg1
