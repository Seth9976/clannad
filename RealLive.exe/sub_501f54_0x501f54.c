// 函数: sub_501f54
// 地址: 0x501f54
// 来自: F:\SETUPDATA\GAMEDATA\RealLive.exe

int32_t eflags
int32_t eflags_1
char temp0
char temp1
temp0, temp1, eflags_1 = __aas(arg1.b, arg1:1.b, eflags)
arg1.b = temp0
arg1:1.b = temp1
*(arg1 + 0x19) = int.q(arg5)
int32_t edx
int16_t es
edx, es = __les_gprz_memp(*(arg4 + (arg3 << 2)))
*(__return_addr + 0x1f) <<= 0x8b
return arg1 & 0x8b2e055a
