// 函数: sub_4633c0
// 地址: 0x4633c0
// 来自: E:\Download\CYZD_GALGAME_PACKAGE\CLANNAD\SiglusEngine_Steam.exe

sub_463320(arg3, arg2)
*arg3 = 0
arg3[1] = 0

if (arg4 != 0)
    arg3[0x92] = 0
    arg3[0x93] = 1
    arg3[0x94] = 0
    arg3[0x95] = 0
    arg3[0x9b] = 0xffffffff
    arg3[0x96] = 0
    arg3[0x97] = 0
    arg3[0x9c] = 0xffffffff
    arg3[0x9d] = 0
    arg3[0x9e] = 0
    arg3[0xa5] = 0xffffffff
    arg3[0xaa] = 0
    arg3[0xa6] = 0xffffffff
    arg3[0xab] = 0xffffffff

arg3[0xab] = 0xffffffff

if (arg4 != 0)
    sub_462b40(&arg3[0x53])

arg3[0x89] = 0
arg3[0x8a] = 0
arg3[0x8b].b = 0xff
arg3[0x8c] = 0
arg3[0x8d] = 0
arg3[0x8e] = 0
arg3[0x8f] = 0
arg3[0x90].b = 0xff
arg3[0x91] = 0
sub_462c50(&arg3[0xb0])
arg3[0x18e] = 0xffffffff
arg3[0x18f] = 0xffffffff
arg3[0x190] = 0xffffffff
arg3[0x191] = 0xffffffff
arg3[0x192] = 0
arg3[0x193] = 0

if (arg4 != 0)
    sub_463110(&arg3[0x21])

return sub_4631a0(&arg2[8]) __tailcall
