// 函数: sub_49f000
// 地址: 0x49f000
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

long double x87_r7 = fconvert.t(arg5)
*(arg1 + 0x20) = fconvert.d(x87_r7)
arg1[3] = arg3
*(arg1 + 0x28) = fconvert.d(x87_r7)
arg1[1] = arg2
arg1[4] = arg4
arg1[2] = 0xffffffff
arg1[5] = 0xffffffff
arg1[0xc] = 0xffffffff
arg1[0xd] = 0xffffffff
arg1[0xe] = 0xffffffff
__builtin_memset(&arg1[0x10], 0xff, 0x1c)
arg1[0x1b] = 0xffffffff
arg1[0x1d] = 0xffffffff
arg1[6] = 1
*arg1 = 0
arg1[0xf] = 0
arg1[0x17] = 0
arg1[0x18] = 0
arg1[0x19] = 0
arg1[0x1a] = 0
arg1[0x1c] = 0
return 0
