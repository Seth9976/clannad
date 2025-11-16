// 函数: sub_6e4800
// 地址: 0x6e4800
// 来自: E:\Download\Various Files\CLANNAD HD Edition\CLANNAD\SiglusEngine_Steam.exe

if (arg1 == 0)
    return 0xffffffff

_memset(arg1, 0, 0x168)
arg1[1] = 0x4000
arg1[6] = 0x400
int32_t eax = _malloc(0x4000)
*arg1 = eax
int32_t eax_1 = _malloc(0x1000)
arg1[4] = eax_1
int32_t eax_2 = _malloc(0x2000)
arg1[5] = eax_2

if (eax != 0 && eax_1 != 0 && eax_2 != 0)
    arg1[0x54] = arg2
    return 0

sub_6e4890(arg1)
return 0xffffffff
