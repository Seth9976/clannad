// 函数: sub_620072
// 地址: 0x620072
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

*(arg2 + 0xb) |= arg2:1.b
j__free(arg3[-0xa])
arg3[-5] = 7
bool cond:0 = arg3[-0xb] u< 8
arg3[-6] = 0
arg3[-0xa].w = 0

if (not(cond:0))
    j__free(arg3[-0x10])

arg3[-0xb] = 7
bool cond:1 = arg3[-0x11] u< 8
arg3[-0xc] = 0
arg3[-0x10].w = 0

if (not(cond:1))
    j__free(arg3[-0x16])

TEB* fsbase
fsbase->NtTib.ExceptionList = arg3[-3]
sub_745f2b(arg3[-4] ^ arg3)
*arg3
return arg4
