// 函数: sub_6d02b0
// 地址: 0x6d02b0
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg3 == 0 || arg2 == 0)
    return 0

if (arg4 != 0)
    *arg4 = *arg2

if (arg5 != 0)
    *arg5 = arg2[1]

if (arg6 != 0)
    *arg6 = zx.d(arg2[6].b)

if (arg7 != 0)
    *arg7 = zx.d(*(arg2 + 0x19))

uint32_t eax_8 = zx.d(arg2[6].b)
sub_6cd090(eax_8, *arg2, arg3, arg2[1], eax_8, zx.d(*(arg2 + 0x19)), zx.d(arg2[7].b), 
    zx.d(*(arg2 + 0x1a)), zx.d(*(arg2 + 0x1b)))
return 1
